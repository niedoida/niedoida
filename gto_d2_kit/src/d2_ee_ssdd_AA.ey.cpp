/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ssdd_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0022_11(const double ae,
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
    const double C13438 = ae + be;
    const double C13437 = ae * be;
    const double C13436 = xA - xB;
    const double C13447 = yA - yB;
    const double C13450 = zA - zB;
    const double C13453 = p + q;
    const double C13452 = p * q;
    const double C13458 = xP - xQ;
    const double C13457 = bs[2];
    const double C13465 = std::pow(ae, 2);
    const double C13463 = bs[3];
    const double C13476 = bs[4];
    const double C13497 = bs[5];
    const double C13528 = yP - yQ;
    const double C13553 = zP - zQ;
    const double C73 = bs[0];
    const double C14263 = ce + de;
    const double C14262 = ce * de;
    const double C14261 = xC - xD;
    const double C14295 = yC - yD;
    const double C14313 = zC - zD;
    const double C61 = std::exp(-(std::pow(C13436, 2) * C13437) / C13438);
    const double C63 = std::exp(-(std::pow(C13447, 2) * C13437) / C13438);
    const double C62 = std::exp(-(std::pow(C13450, 2) * C13437) / C13438);
    const double C13454 = 2 * C13452;
    const double C13466 = C13458 * ae;
    const double C13462 = std::pow(C13458, 2);
    const double C13531 = C13528 * ae;
    const double C13530 = C13458 * C13528;
    const double C13579 = C13528 * C13458;
    const double C13592 = std::pow(C13528, 2);
    const double C13556 = C13553 * ae;
    const double C13555 = C13458 * C13553;
    const double C13606 = C13528 * C13553;
    const double C13617 = C13553 * C13458;
    const double C13630 = C13553 * C13528;
    const double C13641 = std::pow(C13553, 2);
    const double C14267 = 2 * C14263;
    const double C14266 = std::pow(C14263, 2);
    const double C14268 = C14261 * de;
    const double C14265 = C14261 * ce;
    const double C14264 = std::pow(C14261, 2);
    const double C14296 = std::pow(C14295, 2);
    const double C14355 = C14295 * de;
    const double C14353 = C14295 * ce;
    const double C14314 = std::pow(C14313, 2);
    const double C14397 = C14313 * de;
    const double C14395 = C14313 * ce;
    const double C71 =
        -((C61 - (C13436 * 2 * C13437 * C13436 * C61) / C13438) * 2 * C13437) /
        C13438;
    const double C72 = -(2 * C13437 * C13436 * C61) / C13438;
    const double C115 = -(2 * C13437 * (yA - yB) * C63) / C13438;
    const double C208 =
        -((C63 - (C13447 * 2 * C13437 * C13447 * C63) / C13438) * 2 * C13437) /
        C13438;
    const double C148 = -(2 * C13437 * (zA - zB) * C62) / C13438;
    const double C322 =
        -((C62 - (C13450 * 2 * C13437 * C13450 * C62) / C13438) * 2 * C13437) /
        C13438;
    const double C13456 = C13454 / C13453;
    const double C83 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C13454 / C13453, 2) -
          (bs[1] * C13454) / C13453) *
         std::pow(ae, 2)) /
        std::pow(C13438, 2);
    const double C74 = -(C13458 * bs[1] * C13454) / C13453;
    const double C377 = -(C13528 * bs[1] * C13454) / C13453;
    const double C818 = -(C13553 * bs[1] * C13454) / C13453;
    const double C13468 = C13463 * C13466;
    const double C13479 = C13476 * C13466;
    const double C13502 = C13497 * C13466;
    const double C78 = (-(bs[1] * C13466 * C13454) / C13453) / C13438;
    const double C13478 = C13462 * C13476;
    const double C13501 = C13462 * C13497;
    const double C13533 = C13463 * C13531;
    const double C13537 = C13476 * C13531;
    const double C13544 = C13497 * C13531;
    const double C116 = (-(bs[1] * C13531 * C13454) / C13453) / C13438;
    const double C13532 = C13530 * C13465;
    const double C13580 = C13579 * C13465;
    const double C13594 = C13592 * C13476;
    const double C13599 = C13592 * C13497;
    const double C13558 = C13463 * C13556;
    const double C13562 = C13476 * C13556;
    const double C13569 = C13497 * C13556;
    const double C149 = (-(bs[1] * C13556 * C13454) / C13453) / C13438;
    const double C13557 = C13555 * C13465;
    const double C13607 = C13606 * C13465;
    const double C13618 = C13617 * C13465;
    const double C13631 = C13630 * C13465;
    const double C13643 = C13641 * C13476;
    const double C13648 = C13641 * C13497;
    const double C14280 = std::pow(C14267, -1);
    const double C14485 = std::pow(C14267, -2);
    const double C14281 = 2 * C14266;
    const double C14489 = C14266 * C14267;
    const double C14488 = 4 * C14266;
    const double C14478 = std::pow(C14265, 2);
    const double C14269 = C14264 * C14262;
    const double C14297 = C14296 * C14262;
    const double C14490 = std::pow(C14353, 2);
    const double C14315 = C14314 * C14262;
    const double C14492 = std::pow(C14395, 2);
    const double C13459 = std::pow(C13456, 2);
    const double C13464 = -C13456;
    const double C13477 = std::pow(C13456, 4);
    const double C89 = C72 * C78;
    const double C215 = C115 * C116;
    const double C13536 = C13476 * C13532;
    const double C13543 = C13497 * C13532;
    const double C13582 = C13476 * C13580;
    const double C13585 = C13497 * C13580;
    const double C329 = C148 * C149;
    const double C13561 = C13476 * C13557;
    const double C13568 = C13497 * C13557;
    const double C13609 = C13476 * C13607;
    const double C13612 = C13497 * C13607;
    const double C13620 = C13476 * C13618;
    const double C13623 = C13497 * C13618;
    const double C13633 = C13476 * C13631;
    const double C13636 = C13497 * C13631;
    const double C14517 = 4 * C14489;
    const double C14516 = C14263 * C14488;
    const double C14270 = C14269 / C14263;
    const double C14298 = C14297 / C14263;
    const double C14316 = C14315 / C14263;
    const double C13461 = C13457 * C13459;
    const double C84 = (2 * ae * C13459 * C13457 * C13458 * ae +
                        C13458 *
                            (C13457 * C13459 + std::pow(C13458, 2) * bs[3] *
                                                   std::pow(-C13456, 3)) *
                            std::pow(ae, 2)) /
                       std::pow(C13438, 2);
    const double C121 =
        (C13459 * C13457 * C13458 * (yP - yQ) * C13465) / std::pow(C13438, 2);
    const double C154 =
        (C13459 * C13457 * C13458 * (zP - zQ) * C13465) / std::pow(C13438, 2);
    const double C181 =
        (C13459 * C13457 * C13528 * C13458 * C13465) / std::pow(C13438, 2);
    const double C209 =
        ((std::pow(C13528, 2) * C13457 * C13459 - (bs[1] * C13454) / C13453) *
         C13465) /
        std::pow(C13438, 2);
    const double C241 =
        (C13459 * C13457 * C13528 * C13553 * C13465) / std::pow(C13438, 2);
    const double C268 =
        (C13459 * C13457 * C13553 * C13458 * C13465) / std::pow(C13438, 2);
    const double C295 =
        (C13459 * C13457 * C13553 * C13528 * C13465) / std::pow(C13438, 2);
    const double C323 =
        ((std::pow(C13553, 2) * C13457 * C13459 - (bs[1] * C13454) / C13453) *
         C13465) /
        std::pow(C13438, 2);
    const double C79 = (C13458 * C13459 * C13457 * C13466) / C13438 -
                       (ae * bs[1] * C13454) / (C13453 * C13438);
    const double C117 = (C13458 * C13459 * C13457 * C13531) / C13438;
    const double C150 = (C13458 * C13459 * C13457 * C13556) / C13438;
    const double C383 = (C13528 * C13459 * C13457 * C13466) / C13438;
    const double C439 = (C13528 * C13459 * C13457 * C13531) / C13438 -
                        (ae * bs[1] * C13454) / (C13453 * C13438);
    const double C489 = (C13528 * C13459 * C13457 * C13556) / C13438;
    const double C824 = (C13553 * C13459 * C13457 * C13466) / C13438;
    const double C880 = (C13553 * C13459 * C13457 * C13531) / C13438;
    const double C930 = (C13553 * C13459 * C13457 * C13556) / C13438 -
                        (ae * bs[1] * C13454) / (C13453 * C13438);
    const double C13467 = std::pow(C13464, 3);
    const double C13498 = std::pow(C13464, 5);
    const double C13483 = C13477 * C13479;
    const double C13482 = C13478 * C13477;
    const double C13496 = C13476 * C13477;
    const double C13539 = C13477 * C13537;
    const double C13564 = C13477 * C13562;
    const double C13595 = C13594 * C13477;
    const double C13644 = C13643 * C13477;
    const double C13538 = C13477 * C13536;
    const double C13583 = C13477 * C13582;
    const double C13563 = C13477 * C13561;
    const double C13610 = C13477 * C13609;
    const double C13621 = C13477 * C13620;
    const double C13634 = C13477 * C13633;
    const double C14271 = -C14270;
    const double C14299 = -C14298;
    const double C14317 = -C14316;
    const double C13469 = C13461 * ae;
    const double C75 = C13461 * C13462 - (bs[1] * C13454) / C13453;
    const double C378 = C13461 * C13592 - (bs[1] * C13454) / C13453;
    const double C379 = C13528 * C13458 * C13461;
    const double C819 = C13461 * C13641 - (bs[1] * C13454) / C13453;
    const double C820 = C13553 * C13458 * C13461;
    const double C1920 = C13553 * C13528 * C13461;
    const double C90 = C72 * C79;
    const double C216 = C115 * C117;
    const double C330 = C148 * C150;
    const double C396 = C72 * C383;
    const double C590 = C115 * C439;
    const double C772 = C148 * C489;
    const double C837 = C72 * C824;
    const double C1031 = C115 * C880;
    const double C1213 = C148 * C930;
    const double C13470 = C13467 * C13468;
    const double C13475 = C13463 * C13467;
    const double C13534 = C13467 * C13533;
    const double C13559 = C13467 * C13558;
    const double C122 = (ae * C13459 * C13457 * C13528 * ae +
                         C13458 * C13467 * C13463 * C13458 * C13528 * C13465) /
                        std::pow(C13438, 2);
    const double C155 = (ae * C13459 * C13457 * C13553 * ae +
                         C13458 * C13467 * C13463 * C13458 * C13553 * C13465) /
                        std::pow(C13438, 2);
    const double C182 = (ae * C13459 * C13457 * C13531 +
                         C13458 * C13467 * C13463 * C13528 * C13458 * C13465) /
                        std::pow(C13438, 2);
    const double C210 =
        (C13458 * (C13461 + std::pow(C13528, 2) * C13463 * C13467) * C13465) /
        std::pow(C13438, 2);
    const double C242 = (C13458 * C13467 * C13463 * C13528 * C13553 * C13465) /
                        std::pow(C13438, 2);
    const double C243 =
        (C13467 * C13463 * C13607 + C13477 * C13476 * C13607 * C13462) /
        std::pow(C13438, 2);
    const double C269 = (ae * C13459 * C13457 * C13556 +
                         C13458 * C13467 * C13463 * C13553 * C13458 * C13465) /
                        std::pow(C13438, 2);
    const double C296 = (C13458 * C13467 * C13463 * C13553 * C13528 * C13465) /
                        std::pow(C13438, 2);
    const double C297 =
        (C13467 * C13463 * C13631 + C13477 * C13476 * C13631 * C13462) /
        std::pow(C13438, 2);
    const double C324 =
        (C13458 * (C13461 + std::pow(C13553, 2) * C13463 * C13467) * C13465) /
        std::pow(C13438, 2);
    const double C389 =
        (C13528 * (C13461 + C13462 * C13463 * C13467) * C13465) /
        std::pow(C13438, 2);
    const double C445 =
        (ae * C13459 * C13457 * C13466 + C13528 * C13467 * C13463 * C13532) /
        std::pow(C13438, 2);
    const double C495 =
        (C13528 * C13467 * C13463 * C13557) / std::pow(C13438, 2);
    const double C539 =
        (ae * C13459 * C13457 * C13466 + C13528 * C13467 * C13463 * C13580) /
        std::pow(C13438, 2);
    const double C583 =
        (2 * ae * C13459 * C13457 * C13531 +
         C13528 * (C13461 + C13592 * C13463 * C13467) * C13465) /
        std::pow(C13438, 2);
    const double C633 =
        (ae * C13459 * C13457 * C13556 + C13528 * C13467 * C13463 * C13607) /
        std::pow(C13438, 2);
    const double C677 =
        (C13528 * C13467 * C13463 * C13618) / std::pow(C13438, 2);
    const double C721 =
        (ae * C13459 * C13457 * C13556 + C13528 * C13467 * C13463 * C13631) /
        std::pow(C13438, 2);
    const double C765 =
        (C13528 * (C13461 + C13641 * C13463 * C13467) * C13465) /
        std::pow(C13438, 2);
    const double C830 =
        (C13553 * (C13461 + C13462 * C13463 * C13467) * C13465) /
        std::pow(C13438, 2);
    const double C886 =
        (C13553 * C13467 * C13463 * C13532) / std::pow(C13438, 2);
    const double C936 =
        (ae * C13459 * C13457 * C13466 + C13553 * C13467 * C13463 * C13557) /
        std::pow(C13438, 2);
    const double C980 =
        (C13553 * C13467 * C13463 * C13580) / std::pow(C13438, 2);
    const double C1024 =
        (C13553 * (C13461 + C13592 * C13463 * C13467) * C13465) /
        std::pow(C13438, 2);
    const double C1074 =
        (ae * C13459 * C13457 * C13531 + C13553 * C13467 * C13463 * C13607) /
        std::pow(C13438, 2);
    const double C1118 =
        (ae * C13459 * C13457 * C13466 + C13553 * C13467 * C13463 * C13618) /
        std::pow(C13438, 2);
    const double C1162 =
        (ae * C13459 * C13457 * C13531 + C13553 * C13467 * C13463 * C13631) /
        std::pow(C13438, 2);
    const double C1206 =
        (2 * ae * C13459 * C13457 * C13556 +
         C13553 * (C13461 + C13641 * C13463 * C13467) * C13465) /
        std::pow(C13438, 2);
    const double C13507 = C13498 * C13502;
    const double C13506 = C13501 * C13498;
    const double C13546 = C13498 * C13544;
    const double C13545 = C13498 * C13543;
    const double C13571 = C13498 * C13569;
    const double C13570 = C13498 * C13568;
    const double C13586 = C13498 * C13585;
    const double C13600 = C13599 * C13498;
    const double C13613 = C13498 * C13612;
    const double C13624 = C13498 * C13623;
    const double C13637 = C13498 * C13636;
    const double C13649 = C13648 * C13498;
    const double C13486 = C13458 * C13483;
    const double C13495 = ae * C13483;
    const double C13849 = C13528 * C13483;
    const double C14002 = C13553 * C13483;
    const double C13505 = C13496 * C13462;
    const double C13504 = C13458 * C13496;
    const double C13503 = C13496 * ae;
    const double C13876 = C13496 * C13592;
    const double C13875 = C13528 * C13496;
    const double C14040 = C13496 * C13641;
    const double C14039 = C13553 * C13496;
    const double C13542 = ae * C13539;
    const double C13541 = C13458 * C13539;
    const double C13861 = C13528 * C13539;
    const double C14013 = C13553 * C13539;
    const double C13567 = ae * C13564;
    const double C13566 = C13458 * C13564;
    const double C13893 = C13528 * C13564;
    const double C14025 = C13553 * C13564;
    const double C887 =
        (C13467 * C13463 * C13532 + C13538 * C13641) / std::pow(C13438, 2);
    const double C981 =
        (C13467 * C13463 * C13580 + C13583 * C13641) / std::pow(C13438, 2);
    const double C496 =
        (C13467 * C13463 * C13557 + C13563 * C13592) / std::pow(C13438, 2);
    const double C244 =
        (2 * C13458 * C13610 +
         C13458 * (C13610 + C13498 * C13497 * C13607 * C13462)) /
        std::pow(C13438, 2);
    const double C678 =
        (C13467 * C13463 * C13618 + C13621 * C13592) / std::pow(C13438, 2);
    const double C298 =
        (2 * C13458 * C13634 +
         C13458 * (C13634 + C13498 * C13497 * C13631 * C13462)) /
        std::pow(C13438, 2);
    const double C14272 = std::exp(C14271);
    const double C14300 = std::exp(C14299);
    const double C14318 = std::exp(C14317);
    const double C13471 = C13458 * C13470;
    const double C446 = (C13467 * C13463 * C13532 + ae * C13528 * C13470 +
                         C13528 * (ae * C13470 + C13528 * C13538)) /
                        std::pow(C13438, 2);
    const double C540 = (C13467 * C13463 * C13580 + ae * C13528 * C13470 +
                         C13528 * (ae * C13470 + C13528 * C13583)) /
                        std::pow(C13438, 2);
    const double C937 = (C13467 * C13463 * C13557 + ae * C13553 * C13470 +
                         C13553 * (ae * C13470 + C13553 * C13563)) /
                        std::pow(C13438, 2);
    const double C1119 = (C13467 * C13463 * C13618 + ae * C13553 * C13470 +
                          C13553 * (ae * C13470 + C13553 * C13621)) /
                         std::pow(C13438, 2);
    const double C1985 =
        (C13553 * (ae * C13470 + C13528 * C13538)) / std::pow(C13438, 2);
    const double C2041 =
        (ae * C13528 * C13470 + C13553 * C13528 * C13563) / std::pow(C13438, 2);
    const double C2094 =
        (ae * C13553 * C13470 + C13528 * C13553 * C13583) / std::pow(C13438, 2);
    const double C2256 =
        (ae * C13528 * C13470 + C13553 * C13528 * C13621) / std::pow(C13438, 2);
    const double C384 = (C13459 * C13457 * C13466 + C13470 * C13592) / C13438;
    const double C825 = (C13459 * C13457 * C13466 + C13470 * C13641) / C13438;
    const double C1923 = (C13553 * C13528 * C13470) / C13438;
    const double C2746 =
        (2 * C13528 * C13470 + C13528 * (C13470 + C13483 * C13592)) / C13438;
    const double C2994 = (C13553 * (C13470 + C13483 * C13592)) / C13438;
    const double C5174 =
        (2 * C13553 * C13470 + C13553 * (C13470 + C13483 * C13641)) / C13438;
    const double C13481 = C13458 * C13475;
    const double C13480 = C13475 * ae;
    const double C13485 = C13475 + C13482;
    const double C13596 = C13475 + C13595;
    const double C13645 = C13475 + C13644;
    const double C13862 = C13528 * C13475;
    const double C14026 = C13553 * C13475;
    const double C211 =
        ((C13461 + C13592 * C13463 * C13467) * C13465 +
         (C13475 + C13592 * C13476 * C13477) * C13465 * C13462) /
        std::pow(C13438, 2);
    const double C325 =
        ((C13461 + C13641 * C13463 * C13467) * C13465 +
         (C13475 + C13641 * C13476 * C13477) * C13465 * C13462) /
        std::pow(C13438, 2);
    const double C76 =
        2 * C13458 * C13461 + C13458 * (C13461 + C13475 * C13462);
    const double C381 = C13528 * (C13461 + C13475 * C13462);
    const double C822 = C13553 * (C13461 + C13475 * C13462);
    const double C2744 =
        2 * C13528 * C13461 + C13528 * (C13461 + C13475 * C13592);
    const double C2991 = C13553 * (C13461 + C13475 * C13592);
    const double C5172 =
        2 * C13553 * C13461 + C13553 * (C13461 + C13475 * C13641);
    const double C13683 = C13528 * C13534;
    const double C123 =
        (C13467 * C13463 * C13532 + ae * C13458 * C13534 +
         C13458 * (ae * C13534 + C13458 * C13477 * C13476 * C13532)) /
        std::pow(C13438, 2);
    const double C124 =
        (2 * (ae * C13534 + C13458 * C13538) + ae * (C13534 + C13539 * C13462) +
         C13458 *
             (C13538 + ae * C13458 * C13539 +
              C13458 * (ae * C13539 + C13458 * C13498 * C13497 * C13532))) /
        std::pow(C13438, 2);
    const double C183 =
        (C13467 * C13463 * C13580 + ae * C13458 * C13534 +
         C13458 * (ae * C13534 + C13458 * C13477 * C13476 * C13580)) /
        std::pow(C13438, 2);
    const double C888 =
        (C13553 * (ae * C13534 + C13458 * C13538)) / std::pow(C13438, 2);
    const double C982 =
        (C13553 * (ae * C13534 + C13458 * C13583)) / std::pow(C13438, 2);
    const double C1075 = (C13467 * C13463 * C13607 + ae * C13553 * C13534 +
                          C13553 * (ae * C13534 + C13553 * C13610)) /
                         std::pow(C13438, 2);
    const double C1076 =
        (ae * C13458 * C13534 + C13553 * C13458 * C13610) / std::pow(C13438, 2);
    const double C1163 = (C13467 * C13463 * C13631 + ae * C13553 * C13534 +
                          C13553 * (ae * C13534 + C13553 * C13634)) /
                         std::pow(C13438, 2);
    const double C1164 =
        (ae * C13458 * C13534 + C13553 * C13458 * C13634) / std::pow(C13438, 2);
    const double C118 = (C13459 * C13457 * C13531 + C13534 * C13462) / C13438;
    const double C119 =
        (2 * C13458 * C13534 + C13458 * (C13534 + C13539 * C13462)) / C13438;
    const double C441 =
        (C13528 * C13458 * C13534 + C13458 * C13461 * ae) / C13438;
    const double C443 = (C13528 * (C13534 + C13539 * C13462) +
                         (C13461 + C13475 * C13462) * ae) /
                        C13438;
    const double C881 = (C13459 * C13457 * C13531 + C13534 * C13641) / C13438;
    const double C882 = (C13553 * C13458 * C13534) / C13438;
    const double C884 = (C13553 * (C13534 + C13539 * C13462)) / C13438;
    const double C5202 =
        (2 * C13553 * C13534 + C13553 * (C13534 + C13539 * C13641)) / C13438;
    const double C13775 = C13553 * C13559;
    const double C156 =
        (C13467 * C13463 * C13557 + ae * C13458 * C13559 +
         C13458 * (ae * C13559 + C13458 * C13477 * C13476 * C13557)) /
        std::pow(C13438, 2);
    const double C157 =
        (2 * (ae * C13559 + C13458 * C13563) + ae * (C13559 + C13564 * C13462) +
         C13458 *
             (C13563 + ae * C13458 * C13564 +
              C13458 * (ae * C13564 + C13458 * C13498 * C13497 * C13557))) /
        std::pow(C13438, 2);
    const double C270 =
        (C13467 * C13463 * C13618 + ae * C13458 * C13559 +
         C13458 * (ae * C13559 + C13458 * C13477 * C13476 * C13618)) /
        std::pow(C13438, 2);
    const double C497 =
        (C13528 * (ae * C13559 + C13458 * C13563)) / std::pow(C13438, 2);
    const double C634 = (C13467 * C13463 * C13607 + ae * C13528 * C13559 +
                         C13528 * (ae * C13559 + C13528 * C13610)) /
                        std::pow(C13438, 2);
    const double C635 =
        (ae * C13458 * C13559 + C13528 * C13458 * C13610) / std::pow(C13438, 2);
    const double C679 =
        (C13528 * (ae * C13559 + C13458 * C13621)) / std::pow(C13438, 2);
    const double C722 = (C13467 * C13463 * C13631 + ae * C13528 * C13559 +
                         C13528 * (ae * C13559 + C13528 * C13634)) /
                        std::pow(C13438, 2);
    const double C723 =
        (ae * C13458 * C13559 + C13528 * C13458 * C13634) / std::pow(C13438, 2);
    const double C151 = (C13459 * C13457 * C13556 + C13559 * C13462) / C13438;
    const double C152 =
        (2 * C13458 * C13559 + C13458 * (C13559 + C13564 * C13462)) / C13438;
    const double C490 = (C13459 * C13457 * C13556 + C13559 * C13592) / C13438;
    const double C491 = (C13528 * C13458 * C13559) / C13438;
    const double C493 = (C13528 * (C13559 + C13564 * C13462)) / C13438;
    const double C932 =
        (C13553 * C13458 * C13559 + C13458 * C13461 * ae) / C13438;
    const double C934 = (C13553 * (C13559 + C13564 * C13462) +
                         (C13461 + C13475 * C13462) * ae) /
                        C13438;
    const double C2038 =
        (C13553 * C13528 * C13559 + C13528 * C13461 * ae) / C13438;
    const double C2800 =
        (2 * C13528 * C13559 + C13528 * (C13559 + C13564 * C13592)) / C13438;
    const double C3085 = (C13553 * (C13559 + C13564 * C13592) +
                          (C13461 + C13475 * C13592) * ae) /
                         C13438;
    const double C13511 = C13458 * C13507;
    const double C13851 = C13507 * C13592;
    const double C14004 = C13507 * C13641;
    const double C14090 = C13528 * C13507;
    const double C13510 = C13496 + C13506;
    const double C13548 = C13546 * C13462;
    const double C13874 = C13528 * C13546;
    const double C13950 = C13458 * C13546;
    const double C14014 = C13546 * C13641;
    const double C13547 = C13458 * C13545;
    const double C13850 = C13528 * C13545;
    const double C5204 =
        (2 * C13553 * C13538 + C13553 * (C13538 + C13545 * C13641)) /
        std::pow(C13438, 2);
    const double C5205 =
        (3 * (C13538 + C13545 * C13641) +
         C13553 * (2 * C13553 * C13545 +
                   C13553 * (C13545 +
                             std::pow(C13456, 6) * bs[6] * C13532 * C13641))) /
        std::pow(C13438, 2);
    const double C13573 = C13571 * C13462;
    const double C13895 = C13571 * C13592;
    const double C13962 = C13458 * C13571;
    const double C14038 = C13553 * C13571;
    const double C14099 = C13528 * C13571;
    const double C13572 = C13458 * C13570;
    const double C14003 = C13553 * C13570;
    const double C14089 = C13528 * C13570;
    const double C2802 =
        (2 * C13528 * C13563 + C13528 * (C13563 + C13570 * C13592)) /
        std::pow(C13438, 2);
    const double C2803 =
        (3 * (C13563 + C13570 * C13592) +
         C13528 * (2 * C13528 * C13570 +
                   C13528 * (C13570 +
                             std::pow(C13456, 6) * bs[6] * C13557 * C13592))) /
        std::pow(C13438, 2);
    const double C3088 = (ae * (C13470 + C13483 * C13592) +
                          C13553 * (C13563 + C13570 * C13592)) /
                         std::pow(C13438, 2);
    const double C13587 = C13458 * C13586;
    const double C13858 = C13528 * C13586;
    const double C13983 = C13553 * C13586;
    const double C3128 = (ae * (C13470 + C13483 * C13641) +
                          C13528 * (C13583 + C13586 * C13641)) /
                         std::pow(C13438, 2);
    const double C5254 =
        (2 * C13553 * C13583 + C13553 * (C13583 + C13586 * C13641)) /
        std::pow(C13438, 2);
    const double C13601 = C13496 + C13600;
    const double C13894 = C13528 * C13613;
    const double C13961 = C13458 * C13613;
    const double C13991 = C13553 * C13613;
    const double C245 =
        (3 * (C13610 + C13613 * C13462) +
         C13458 * (2 * C13458 * C13613 +
                   C13458 * (C13613 +
                             std::pow(C13456, 6) * bs[6] * C13607 * C13462))) /
        std::pow(C13438, 2);
    const double C637 = (ae * (C13559 + C13564 * C13462) +
                         C13528 * (C13610 + C13613 * C13462)) /
                        std::pow(C13438, 2);
    const double C1078 = (ae * (C13534 + C13539 * C13462) +
                          C13553 * (C13610 + C13613 * C13462)) /
                         std::pow(C13438, 2);
    const double C13625 = C13458 * C13624;
    const double C14018 = C13553 * C13624;
    const double C14095 = C13528 * C13624;
    const double C2900 =
        (2 * C13528 * C13621 + C13528 * (C13621 + C13624 * C13592)) /
        std::pow(C13438, 2);
    const double C2901 =
        (3 * (C13621 + C13624 * C13592) +
         C13528 * (2 * C13528 * C13624 +
                   C13528 * (C13624 +
                             std::pow(C13456, 6) * bs[6] * C13618 * C13592))) /
        std::pow(C13438, 2);
    const double C3255 = (ae * (C13470 + C13483 * C13592) +
                          C13553 * (C13621 + C13624 * C13592)) /
                         std::pow(C13438, 2);
    const double C13902 = C13528 * C13637;
    const double C13965 = C13458 * C13637;
    const double C14022 = C13553 * C13637;
    const double C299 =
        (3 * (C13634 + C13637 * C13462) +
         C13458 * (2 * C13458 * C13637 +
                   C13458 * (C13637 +
                             std::pow(C13456, 6) * bs[6] * C13631 * C13462))) /
        std::pow(C13438, 2);
    const double C725 = (ae * (C13559 + C13564 * C13462) +
                         C13528 * (C13634 + C13637 * C13462)) /
                        std::pow(C13438, 2);
    const double C1166 = (ae * (C13534 + C13539 * C13462) +
                          C13553 * (C13634 + C13637 * C13462)) /
                         std::pow(C13438, 2);
    const double C13650 = C13496 + C13649;
    const double C13500 = 2 * C13495;
    const double C2776 =
        (2 * (ae * C13470 + C13528 * C13538) + ae * (C13470 + C13483 * C13592) +
         C13528 * (C13538 + ae * C13528 * C13483 +
                   C13528 * (C13495 + C13528 * C13545))) /
        std::pow(C13438, 2);
    const double C5230 =
        (2 * (ae * C13470 + C13553 * C13563) + ae * (C13470 + C13483 * C13641) +
         C13553 * (C13563 + ae * C13553 * C13483 +
                   C13553 * (C13495 + C13553 * C13570))) /
        std::pow(C13438, 2);
    const double C2826 =
        (2 * (ae * C13470 + C13528 * C13583) + ae * (C13470 + C13483 * C13592) +
         C13528 *
             (C13583 + ae * C13849 + C13528 * (C13495 + C13528 * C13586))) /
        std::pow(C13438, 2);
    const double C3087 = (C13528 * C13563 + ae * C13553 * C13849 +
                          C13553 * (ae * C13849 + C13553 * C13528 * C13570)) /
                         std::pow(C13438, 2);
    const double C3129 =
        (C13553 * C13583 + ae * C13553 * C13849 +
         C13528 * (ae * C13553 * C13483 + C13528 * C13553 * C13586)) /
        std::pow(C13438, 2);
    const double C3130 =
        (C13583 + C13586 * C13641 + ae * (C13849 + C13528 * C13507 * C13641) +
         C13528 * (ae * (C13483 + C13507 * C13641) +
                   C13528 * (C13586 +
                             std::pow(C13456, 6) * bs[6] * C13580 * C13641))) /
        std::pow(C13438, 2);
    const double C3254 = (C13528 * C13621 + ae * C13553 * C13849 +
                          C13553 * (ae * C13849 + C13553 * C13528 * C13624)) /
                         std::pow(C13438, 2);
    const double C2993 = (C13528 * C13470 + C13849 * C13641) / C13438;
    const double C5328 =
        (2 * (ae * C13470 + C13553 * C13621) + ae * (C13470 + C13483 * C13641) +
         C13553 *
             (C13621 + ae * C14002 + C13553 * (C13495 + C13553 * C13624))) /
        std::pow(C13438, 2);
    const double C13509 = C13475 + C13505;
    const double C13508 = C13504 * ae;
    const double C13951 = C13528 * C13504;
    const double C14078 = C13553 * C13504;
    const double C13880 = C13475 + C13876;
    const double C13879 = C13875 * ae;
    const double C14100 = C13553 * C13875;
    const double C14044 = C13475 + C14040;
    const double C14043 = C14039 * ae;
    const double C13871 = 2 * C13542;
    const double C13688 = C13528 * C13541;
    const double C184 =
        (2 * (ae * C13534 + C13458 * C13583) + ae * (C13534 + C13539 * C13462) +
         C13458 * (C13583 + ae * C13541 +
                   C13458 * (C13542 + C13458 * C13498 * C13497 * C13580))) /
        std::pow(C13438, 2);
    const double C1077 = (C13458 * C13610 + ae * C13553 * C13541 +
                          C13553 * (ae * C13541 + C13553 * C13458 * C13613)) /
                         std::pow(C13438, 2);
    const double C1165 = (C13458 * C13634 + ae * C13553 * C13541 +
                          C13553 * (ae * C13541 + C13553 * C13458 * C13637)) /
                         std::pow(C13438, 2);
    const double C883 = (C13458 * C13534 + C13541 * C13641) / C13438;
    const double C5352 =
        (2 * (ae * C13534 + C13553 * C13634) + ae * (C13534 + C13539 * C13641) +
         C13553 *
             (C13634 + ae * C14013 + C13553 * (C13542 + C13553 * C13637))) /
        std::pow(C13438, 2);
    const double C14035 = 2 * C13567;
    const double C2876 =
        (2 * (ae * C13559 + C13528 * C13610) + ae * (C13559 + C13564 * C13592) +
         C13528 * (C13610 + ae * C13528 * C13564 +
                   C13528 * (C13567 + C13528 * C13613))) /
        std::pow(C13438, 2);
    const double C13780 = C13553 * C13566;
    const double C271 =
        (2 * (ae * C13559 + C13458 * C13621) + ae * (C13559 + C13564 * C13462) +
         C13458 * (C13621 + ae * C13566 +
                   C13458 * (C13567 + C13458 * C13498 * C13497 * C13618))) /
        std::pow(C13438, 2);
    const double C636 = (C13458 * C13610 + ae * C13528 * C13566 +
                         C13528 * (ae * C13566 + C13528 * C13458 * C13613)) /
                        std::pow(C13438, 2);
    const double C724 = (C13458 * C13634 + ae * C13528 * C13566 +
                         C13528 * (ae * C13566 + C13528 * C13458 * C13637)) /
                        std::pow(C13438, 2);
    const double C492 = (C13458 * C13559 + C13566 * C13592) / C13438;
    const double C13936 = C13553 * C13893;
    const double C2924 =
        (2 * (ae * C13559 + C13528 * C13634) + ae * (C13559 + C13564 * C13592) +
         C13528 *
             (C13634 + ae * C13893 + C13528 * (C13567 + C13528 * C13637))) /
        std::pow(C13438, 2);
    const double C14274 = C14272 * C14265;
    const double C14273 = C14272 / C14267;
    const double C14283 = C14280 * C14272;
    const double C14481 = C14272 * C14268;
    const double C14514 = C14485 * C14272;
    const double C14508 = C14272 * C14478;
    const double C14354 = C14300 / C14267;
    const double C14356 = C14300 * C14353;
    const double C14363 = C14280 * C14300;
    const double C14496 = C14300 * C14355;
    const double C14520 = C14485 * C14300;
    const double C14518 = C14300 * C14490;
    const double C14396 = C14318 / C14267;
    const double C14398 = C14318 * C14395;
    const double C14405 = C14280 * C14318;
    const double C14502 = C14318 * C14397;
    const double C14523 = C14485 * C14318;
    const double C14521 = C14318 * C14492;
    const double C13472 = C13471 + C13469;
    const double C397 = C72 * C384;
    const double C838 = C72 * C825;
    const double C1930 = C72 * C1923;
    const double C2751 = C72 * C2746;
    const double C3001 = C72 * C2994;
    const double C5179 = C72 * C5174;
    const double C13484 = C13481 * ae;
    const double C2039 =
        (C13553 * C13528 * C13566 + C13528 * C13481 * ae) / C13438;
    const double C380 = C13458 * C13461 + C13481 * C13592;
    const double C821 = C13458 * C13461 + C13481 * C13641;
    const double C1921 = C13553 * C13528 * C13481;
    const double C3382 =
        2 * C13528 * C13481 + C13528 * (C13481 + C13504 * C13592);
    const double C3720 = C13553 * (C13481 + C13504 * C13592);
    const double C5884 =
        2 * C13553 * C13481 + C13553 * (C13481 + C13504 * C13641);
    const double C13488 = C13486 + C13480;
    const double C13863 = C13861 + C13480;
    const double C14027 = C14025 + C13480;
    const double C3213 = (ae * (C13559 + C13553 * (C13553 * C13564 + C13480) +
                                C13553 * C13475 * ae) +
                          C13528 * (C13610 + ae * C13553 * C13539 +
                                    C13553 * (C13542 + C13553 * C13613))) /
                         std::pow(C13438, 2);
    const double C13487 = C13485 * C13465;
    const double C13597 = C13596 * C13465;
    const double C13646 = C13645 * C13465;
    const double C13864 = C13862 * ae;
    const double C2990 = C13528 * C13461 + C13862 * C13641;
    const double C6206 =
        2 * C13553 * C13862 + C13553 * (C13862 + C13875 * C13641);
    const double C14028 = C14026 * ae;
    const double C13684 = C13683 + C13469;
    const double C217 = C115 * C118;
    const double C218 = C115 * C119;
    const double C592 = C115 * C441;
    const double C594 = C115 * C443;
    const double C1032 = C115 * C881;
    const double C1033 = C115 * C882;
    const double C1035 = C115 * C884;
    const double C5281 = C115 * C5202;
    const double C13776 = C13775 + C13469;
    const double C331 = C148 * C151;
    const double C332 = C148 * C152;
    const double C773 = C148 * C490;
    const double C774 = C148 * C491;
    const double C776 = C148 * C493;
    const double C1215 = C148 * C932;
    const double C1217 = C148 * C934;
    const double C2366 = C148 * C2038;
    const double C2951 = C148 * C2800;
    const double C3341 = C148 * C3085;
    const double C13514 = C13511 + C13503;
    const double C13853 = C13483 + C13851;
    const double C14006 = C13483 + C14004;
    const double C6207 =
        (2 * C13553 * C13849 + C13553 * (C13849 + C14090 * C13641)) / C13438;
    const double C13513 = C13510 * C13465;
    const double C13550 = C13539 + C13548;
    const double C13878 = C13874 + C13503;
    const double C13952 = C13528 * C13950;
    const double C5922 =
        (2 * C13553 * C13541 + C13553 * (C13541 + C13950 * C13641)) / C13438;
    const double C14015 = C13539 + C14014;
    const double C13549 = C13542 + C13547;
    const double C13852 = C13495 + C13850;
    const double C13575 = C13564 + C13573;
    const double C13897 = C13564 + C13895;
    const double C14064 = C13528 * C13962;
    const double C14077 = C13553 * C13962;
    const double C3456 =
        (2 * C13528 * C13566 + C13528 * (C13566 + C13962 * C13592)) / C13438;
    const double C3826 = (C13553 * (C13566 + C13962 * C13592) +
                          (C13481 + C13504 * C13592) * ae) /
                         C13438;
    const double C14042 = C14038 + C13503;
    const double C14101 = C13553 * C14099;
    const double C13574 = C13567 + C13572;
    const double C14005 = C13495 + C14003;
    const double C6281 =
        (2 * (ae * C13849 + C13553 * C14089) + ae * (C13849 + C14090 * C13641) +
         C13553 *
             (C14089 + ae * C13553 * C14090 +
              C13553 * (ae * C14090 + C13553 * C13528 * std::pow(C13456, 6) *
                                          bs[6] * C13557))) /
        std::pow(C13438, 2);
    const double C13588 = C13542 + C13587;
    const double C13859 = C13495 + C13858;
    const double C5255 =
        (3 * (C13583 + C13586 * C13641) +
         C13553 * (2 * C13983 + C13553 * (C13586 + std::pow(C13456, 6) * bs[6] *
                                                       C13580 * C13641))) /
        std::pow(C13438, 2);
    const double C13602 = C13601 * C13465;
    const double C13896 = C13567 + C13894;
    const double C3563 =
        (2 * (ae * C13566 + C13528 * C13961) + ae * (C13566 + C13962 * C13592) +
         C13528 *
             (C13961 + ae * C13528 * C13962 +
              C13528 * (ae * C13962 + C13528 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13607))) /
        std::pow(C13438, 2);
    const double C6065 =
        (2 * (ae * C13541 + C13553 * C13961) + ae * (C13541 + C13950 * C13641) +
         C13553 *
             (C13961 + ae * C13553 * C13950 +
              C13553 * (ae * C13950 + C13553 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13607))) /
        std::pow(C13438, 2);
    const double C13992 = C13542 + C13991;
    const double C13626 = C13567 + C13625;
    const double C14019 = C13495 + C14018;
    const double C6422 =
        (2 * (ae * C13849 + C13553 * C14095) + ae * (C13849 + C14090 * C13641) +
         C13553 *
             (C14095 + ae * C13553 * C14090 +
              C13553 * (ae * C14090 + C13553 * C13528 * std::pow(C13456, 6) *
                                          bs[6] * C13618))) /
        std::pow(C13438, 2);
    const double C13903 = C13567 + C13902;
    const double C3633 =
        (2 * (ae * C13566 + C13528 * C13965) + ae * (C13566 + C13962 * C13592) +
         C13528 *
             (C13965 + ae * C13528 * C13962 +
              C13528 * (ae * C13962 + C13528 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13631))) /
        std::pow(C13438, 2);
    const double C6135 =
        (2 * (ae * C13541 + C13553 * C13965) + ae * (C13541 + C13950 * C13641) +
         C13553 *
             (C13965 + ae * C13553 * C13950 +
              C13553 * (ae * C13950 + C13553 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13631))) /
        std::pow(C13438, 2);
    const double C14023 = C13542 + C14022;
    const double C13651 = C13650 * C13465;
    const double C3000 = C72 * C2993;
    const double C13512 = C13509 * ae;
    const double C77 = 3 * (C13461 + C13475 * C13462) +
                       C13458 * (2 * C13481 + C13458 * C13509);
    const double C382 = C13461 + C13475 * C13462 + C13509 * C13592;
    const double C823 = C13461 + C13475 * C13462 + C13509 * C13641;
    const double C1258 = C13528 * (2 * C13481 + C13458 * C13509);
    const double C1582 = C13553 * (2 * C13481 + C13458 * C13509);
    const double C1922 = C13553 * C13528 * C13509;
    const double C5691 =
        (ae * (C13566 + C13553 * (C13553 * C13962 + C13508) +
               C13553 * C13504 * ae) +
         C13528 *
             (C13961 + ae * C13553 * C13950 +
              C13553 * (ae * C13950 + C13553 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13607))) /
        std::pow(C13438, 2);
    const double C13953 = C13951 * ae;
    const double C5430 = C13528 * C13481 + C13951 * C13641;
    const double C14080 = C14078 * ae;
    const double C13882 = C13880 * ae;
    const double C2745 = 3 * (C13461 + C13475 * C13592) +
                         C13528 * (2 * C13862 + C13528 * C13880);
    const double C2992 = C13461 + C13475 * C13592 + C13880 * C13641;
    const double C4170 = C13553 * (2 * C13862 + C13528 * C13880);
    const double C3215 =
        (C13610 + ae * C13553 * C13539 + C13553 * (C13542 + C13553 * C13613) +
         ae * (C13893 + C13553 * (C13553 * C13528 * C13571 + C13879) +
               C13553 * C13875 * ae) +
         C13528 *
             (ae * (C13564 + C13553 * (C13553 * C13571 + C13503) +
                    C13553 * C13496 * ae) +
              C13528 * (C13613 + ae * C13553 * C13546 +
                        C13553 * (ae * C13546 + C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13607)))) /
        std::pow(C13438, 2);
    const double C14102 = C14100 * ae;
    const double C14046 = C14044 * ae;
    const double C5173 = 3 * (C13461 + C13475 * C13641) +
                         C13553 * (2 * C14026 + C13553 * C14044);
    const double C1034 = C115 * C883;
    const double C775 = C148 * C492;
    const double C14275 = C14274 * C14268;
    const double C14282 = C14274 / C14281;
    const double C14482 = C14280 * C14274;
    const double C14480 = C14274 / C14263;
    const double C374 = (C14272 * std::pow(C14268, 2)) / C14266 + C14273;
    const double C14284 = C14283 * C14268;
    const double C14486 = C14265 * C14283;
    const double C14484 = 2 * C14283;
    const double C14524 = C14283 / C14488;
    const double C70 = C14283 / C14517;
    const double C7611 = C14283 / C14267;
    const double C14510 = C14481 / C14263;
    const double C375 = (-2 * C14280 * C14481) / C14263;
    const double C14537 = C14508 / C14266;
    const double C2406 = (C14300 * std::pow(C14355, 2)) / C14266 + C14354;
    const double C14357 = C14356 * C14355;
    const double C14362 = C14356 / C14281;
    const double C14494 = C14356 / C14263;
    const double C14491 = C14280 * C14356;
    const double C14364 = C14363 * C14355;
    const double C14500 = C14353 * C14363;
    const double C14499 = 2 * C14363;
    const double C14530 = C14363 / C14488;
    const double C2742 = C14363 / C14517;
    const double C7608 = C14363 / C14267;
    const double C14526 = C14496 / C14263;
    const double C2407 = (-2 * C14280 * C14496) / C14263;
    const double C14542 = C14518 / C14266;
    const double C4496 = (C14318 * std::pow(C14397, 2)) / C14266 + C14396;
    const double C14399 = C14398 * C14397;
    const double C14404 = C14398 / C14281;
    const double C14495 = C14398 / C14263;
    const double C14493 = C14280 * C14398;
    const double C14406 = C14405 * C14397;
    const double C14506 = C14395 * C14405;
    const double C14505 = 2 * C14405;
    const double C14536 = C14405 / C14488;
    const double C5171 = C14405 / C14517;
    const double C10374 = C14405 / C14267;
    const double C14532 = C14502 / C14263;
    const double C4497 = (-2 * C14280 * C14502) / C14263;
    const double C14544 = C14521 / C14266;
    const double C13473 = ae * C13472;
    const double C80 =
        (C13459 * C13457 * C13466 + C13458 * C13472 + C13458 * C13461 * ae) /
        C13438;
    const double C385 = (C13528 * C13472) / C13438;
    const double C826 = (C13553 * C13472) / C13438;
    const double C13689 = C13688 + C13484;
    const double C13781 = C13780 + C13484;
    const double C2367 = C148 * C2039;
    const double C13490 = ae * C13488;
    const double C13489 = C13458 * C13488;
    const double C13499 = 2 * C13488;
    const double C13657 = C13528 * C13488;
    const double C13725 = C13553 * C13488;
    const double C386 = (C13472 + C13488 * C13592) / C13438;
    const double C827 = (C13472 + C13488 * C13641) / C13438;
    const double C13866 = ae * C13863;
    const double C13865 = C13528 * C13863;
    const double C13873 = 2 * C13863;
    const double C13920 = C13553 * C13863;
    const double C14030 = ae * C14027;
    const double C14029 = C13553 * C14027;
    const double C14037 = 2 * C14027;
    const double C390 =
        ((C13461 + C13462 * C13463 * C13467) * C13465 + C13487 * C13592) /
        std::pow(C13438, 2);
    const double C391 = (2 * ae * C13528 * C13470 + C13458 * C13528 * C13487) /
                        std::pow(C13438, 2);
    const double C831 =
        ((C13461 + C13462 * C13463 * C13467) * C13465 + C13487 * C13641) /
        std::pow(C13438, 2);
    const double C832 = (2 * ae * C13553 * C13470 + C13458 * C13553 * C13487) /
                        std::pow(C13438, 2);
    const double C1926 = (C13553 * C13528 * C13487) / std::pow(C13438, 2);
    const double C212 =
        (2 * C13458 * C13597 +
         C13458 *
             (C13597 + (C13496 + C13592 * C13497 * C13498) * C13465 * C13462)) /
        std::pow(C13438, 2);
    const double C585 = (2 * ae * C13458 * C13534 + C13528 * C13458 * C13597) /
                        std::pow(C13438, 2);
    const double C1025 =
        ((C13461 + C13592 * C13463 * C13467) * C13465 + C13597 * C13641) /
        std::pow(C13438, 2);
    const double C1026 = (C13553 * C13458 * C13597) / std::pow(C13438, 2);
    const double C2147 = (2 * ae * C13553 * C13534 + C13528 * C13553 * C13597) /
                         std::pow(C13438, 2);
    const double C326 =
        (2 * C13458 * C13646 +
         C13458 *
             (C13646 + (C13496 + C13641 * C13497 * C13498) * C13465 * C13462)) /
        std::pow(C13438, 2);
    const double C766 =
        ((C13461 + C13641 * C13463 * C13467) * C13465 + C13646 * C13592) /
        std::pow(C13438, 2);
    const double C767 = (C13528 * C13458 * C13646) / std::pow(C13438, 2);
    const double C1208 = (2 * ae * C13458 * C13559 + C13553 * C13458 * C13646) /
                         std::pow(C13438, 2);
    const double C2362 = (2 * ae * C13528 * C13559 + C13553 * C13528 * C13646) /
                         std::pow(C13438, 2);
    const double C13937 = C13936 + C13864;
    const double C3214 =
        (ae * C13534 + C13553 * C13610 + ae * (C13553 * C13893 + C13864) +
         C13528 * (ae * (C13553 * C13564 + C13480) +
                   C13528 * (C13542 + C13553 * C13613))) /
        std::pow(C13438, 2);
    const double C13685 = ae * C13684;
    const double C440 =
        (C13459 * C13457 * C13531 + C13528 * C13684 + C13528 * C13461 * ae) /
        C13438;
    const double C1982 = (C13553 * C13684) / C13438;
    const double C3040 = (C13684 + C13863 * C13641) / C13438;
    const double C13777 = ae * C13776;
    const double C931 =
        (C13459 * C13457 * C13556 + C13553 * C13776 + C13553 * C13461 * ae) /
        C13438;
    const double C13517 = ae * C13514;
    const double C13516 = C13458 * C13514;
    const double C13660 = C13514 * C13592;
    const double C13728 = C13514 * C13641;
    const double C13791 = C13528 * C13514;
    const double C13805 = C13553 * C13514;
    const double C3089 =
        (C13563 + C13570 * C13592 + ae * C13553 * C13853 +
         C13553 *
             (ae * C13853 + C13553 * (C13570 + std::pow(C13456, 6) * bs[6] *
                                                   C13557 * C13592))) /
        std::pow(C13438, 2);
    const double C3256 =
        (C13621 + C13624 * C13592 + ae * C13553 * C13853 +
         C13553 *
             (ae * C13853 + C13553 * (C13624 + std::pow(C13456, 6) * bs[6] *
                                                   C13618 * C13592))) /
        std::pow(C13438, 2);
    const double C4245 =
        (ae * (2 * C13849 + C13528 * C13853) +
         C13553 * (2 * C13528 * C13570 +
                   C13528 * (C13570 +
                             std::pow(C13456, 6) * bs[6] * C13557 * C13592))) /
        std::pow(C13438, 2);
    const double C4280 =
        (2 * (ae * C13553 * C13483 + C13528 * C13983) + ae * C13553 * C13853 +
         C13528 * (C13983 + ae * C13553 * C13528 * C13507 +
                   C13528 * (ae * C13553 * C13507 + C13528 * C13553 *
                                                        std::pow(C13456, 6) *
                                                        bs[6] * C13580))) /
        std::pow(C13438, 2);
    const double C4386 =
        (ae * (2 * C13849 + C13528 * C13853) +
         C13553 * (2 * C13528 * C13624 +
                   C13528 * (C13624 +
                             std::pow(C13456, 6) * bs[6] * C13618 * C13592))) /
        std::pow(C13438, 2);
    const double C2747 = (3 * (C13470 + C13483 * C13592) +
                          C13528 * (2 * C13849 + C13528 * C13853)) /
                         C13438;
    const double C2995 = (C13470 + C13483 * C13592 + C13853 * C13641) / C13438;
    const double C4171 = (C13553 * (2 * C13849 + C13528 * C13853)) / C13438;
    const double C6316 =
        (ae * (2 * C14002 + C13553 * C14006) +
         C13528 * (2 * C13983 + C13553 * (C13586 + std::pow(C13456, 6) * bs[6] *
                                                       C13580 * C13641))) /
        std::pow(C13438, 2);
    const double C5175 = (3 * (C13470 + C13483 * C13641) +
                          C13553 * (2 * C14002 + C13553 * C14006)) /
                         C13438;
    const double C6210 = C72 * C6207;
    const double C13515 = C13458 * C13513;
    const double C13789 = C13528 * C13513;
    const double C13803 = C13553 * C13513;
    const double C392 = (2 * ae * (C13470 + C13483 * C13592) +
                         C13458 * (C13487 + C13513 * C13592)) /
                        std::pow(C13438, 2);
    const double C833 = (2 * ae * (C13470 + C13483 * C13641) +
                         C13458 * (C13487 + C13513 * C13641)) /
                        std::pow(C13438, 2);
    const double C2748 =
        (2 * C13528 * C13487 + C13528 * (C13487 + C13513 * C13592)) /
        std::pow(C13438, 2);
    const double C2997 =
        (C13553 * (C13487 + C13513 * C13592)) / std::pow(C13438, 2);
    const double C2998 =
        (C13487 + C13513 * C13592 +
         (C13513 + (C13497 * C13498 + C13462 * bs[6] * std::pow(C13456, 6)) *
                       C13465 * C13592) *
             C13641) /
        std::pow(C13438, 2);
    const double C3722 = (2 * ae * C13553 * C13853 +
                          C13458 * C13553 *
                              (C13513 + (C13497 * C13498 +
                                         C13462 * bs[6] * std::pow(C13456, 6)) *
                                            C13465 * C13592)) /
                         std::pow(C13438, 2);
    const double C5176 =
        (2 * C13553 * C13487 + C13553 * (C13487 + C13513 * C13641)) /
        std::pow(C13438, 2);
    const double C13693 = C13528 * C13550;
    const double C1079 =
        (C13610 + C13613 * C13462 + ae * C13553 * C13550 +
         C13553 *
             (ae * C13550 + C13553 * (C13613 + std::pow(C13456, 6) * bs[6] *
                                                   C13607 * C13462))) /
        std::pow(C13438, 2);
    const double C1167 =
        (C13634 + C13637 * C13462 + ae * C13553 * C13550 +
         C13553 *
             (ae * C13550 + C13553 * (C13637 + std::pow(C13456, 6) * bs[6] *
                                                   C13631 * C13462))) /
        std::pow(C13438, 2);
    const double C1763 =
        (ae * (2 * C13541 + C13458 * C13550) +
         C13553 * (2 * C13458 * C13613 +
                   C13458 * (C13613 +
                             std::pow(C13456, 6) * bs[6] * C13607 * C13462))) /
        std::pow(C13438, 2);
    const double C1833 =
        (ae * (2 * C13541 + C13458 * C13550) +
         C13553 * (2 * C13458 * C13637 +
                   C13458 * (C13637 +
                             std::pow(C13456, 6) * bs[6] * C13631 * C13462))) /
        std::pow(C13438, 2);
    const double C120 = (3 * (C13534 + C13539 * C13462) +
                         C13458 * (2 * C13541 + C13458 * C13550)) /
                        C13438;
    const double C885 = (C13534 + C13539 * C13462 + C13550 * C13641) / C13438;
    const double C1296 = (C13528 * (2 * C13541 + C13458 * C13550) +
                          (2 * C13481 + C13458 * C13509) * ae) /
                         C13438;
    const double C1620 = (C13553 * (2 * C13541 + C13458 * C13550)) / C13438;
    const double C13883 = ae * C13878;
    const double C13881 = C13528 * C13878;
    const double C13923 = C13878 * C13641;
    const double C13987 = C13553 * C13878;
    const double C13954 = C13952 + C13508;
    const double C6031 = C115 * C5922;
    const double C5203 = (3 * (C13534 + C13539 * C13641) +
                          C13553 * (2 * C14013 + C13553 * C14015)) /
                         C13438;
    const double C125 =
        (3 * (C13538 + ae * C13541 + C13458 * C13549) +
         ae * (2 * C13541 + C13458 * C13550) +
         C13458 *
             (2 * C13549 + ae * C13550 +
              C13458 * (C13545 + ae * C13458 * C13546 +
                        C13458 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13532)))) /
        std::pow(C13438, 2);
    const double C889 =
        (ae * C13534 + C13458 * C13538 + C13549 * C13641) / std::pow(C13438, 2);
    const double C890 = (C13553 * (C13538 + ae * C13541 + C13458 * C13549)) /
                        std::pow(C13438, 2);
    const double C891 = (C13538 + ae * C13541 + C13458 * C13549 +
                         (C13545 + ae * C13458 * C13546 +
                          C13458 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                      bs[6] * C13532)) *
                             C13641) /
                        std::pow(C13438, 2);
    const double C1621 =
        (C13553 *
         (2 * C13549 + ae * C13550 +
          C13458 * (C13545 + ae * C13458 * C13546 +
                    C13458 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                bs[6] * C13532)))) /
        std::pow(C13438, 2);
    const double C5923 =
        (2 * C13553 * C13549 +
         C13553 * (C13549 + (ae * C13546 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13532) *
                                C13641)) /
        std::pow(C13438, 2);
    const double C2777 =
        (3 * (C13538 + ae * C13849 + C13528 * C13852) +
         ae * (2 * C13849 + C13528 * C13853) +
         C13528 *
             (2 * C13852 + ae * C13853 +
              C13528 * (C13545 + ae * C13528 * C13507 +
                        C13528 * (ae * C13507 + C13528 * std::pow(C13456, 6) *
                                                    bs[6] * C13532)))) /
        std::pow(C13438, 2);
    const double C3043 =
        (ae * C13470 + C13528 * C13538 + C13852 * C13641) / std::pow(C13438, 2);
    const double C3044 = (C13553 * (C13538 + ae * C13849 + C13528 * C13852)) /
                         std::pow(C13438, 2);
    const double C3045 =
        (C13538 + ae * C13849 + C13528 * C13852 +
         (C13545 + ae * C13528 * C13507 +
          C13528 *
              (ae * C13507 + C13528 * std::pow(C13456, 6) * bs[6] * C13532)) *
             C13641) /
        std::pow(C13438, 2);
    const double C4209 =
        (C13553 *
         (2 * C13852 + ae * C13853 +
          C13528 * (C13545 + ae * C13528 * C13507 +
                    C13528 * (ae * C13507 + C13528 * std::pow(C13456, 6) *
                                                bs[6] * C13532)))) /
        std::pow(C13438, 2);
    const double C6245 =
        (2 * C13553 * C13852 +
         C13553 * (C13852 + (ae * C13507 +
                             C13528 * std::pow(C13456, 6) * bs[6] * C13532) *
                                C13641)) /
        std::pow(C13438, 2);
    const double C13785 = C13553 * C13575;
    const double C638 =
        (C13610 + C13613 * C13462 + ae * C13528 * C13575 +
         C13528 *
             (ae * C13575 + C13528 * (C13613 + std::pow(C13456, 6) * bs[6] *
                                                   C13607 * C13462))) /
        std::pow(C13438, 2);
    const double C726 =
        (C13634 + C13637 * C13462 + ae * C13528 * C13575 +
         C13528 *
             (ae * C13575 + C13528 * (C13637 + std::pow(C13456, 6) * bs[6] *
                                                   C13631 * C13462))) /
        std::pow(C13438, 2);
    const double C1439 =
        (ae * (2 * C13566 + C13458 * C13575) +
         C13528 * (2 * C13458 * C13613 +
                   C13458 * (C13613 +
                             std::pow(C13456, 6) * bs[6] * C13607 * C13462))) /
        std::pow(C13438, 2);
    const double C1509 =
        (ae * (2 * C13566 + C13458 * C13575) +
         C13528 * (2 * C13458 * C13637 +
                   C13458 * (C13637 +
                             std::pow(C13456, 6) * bs[6] * C13631 * C13462))) /
        std::pow(C13438, 2);
    const double C153 = (3 * (C13559 + C13564 * C13462) +
                         C13458 * (2 * C13566 + C13458 * C13575)) /
                        C13438;
    const double C494 = (C13559 + C13564 * C13462 + C13575 * C13592) / C13438;
    const double C1332 = (C13528 * (2 * C13566 + C13458 * C13575)) / C13438;
    const double C1656 = (C13553 * (2 * C13566 + C13458 * C13575) +
                          (2 * C13481 + C13458 * C13509) * ae) /
                         C13438;
    const double C2040 =
        (C13553 * C13528 * C13575 + C13528 * C13509 * ae) / C13438;
    const double C13941 = C13553 * C13897;
    const double C2801 = (3 * (C13559 + C13564 * C13592) +
                          C13528 * (2 * C13893 + C13528 * C13897)) /
                         C13438;
    const double C4244 = (C13553 * (2 * C13893 + C13528 * C13897) +
                          (2 * C13862 + C13528 * C13880) * ae) /
                         C13438;
    const double C14065 = C13553 * C14064;
    const double C14079 = C14077 + C13508;
    const double C3670 = C148 * C3456;
    const double C4136 = C148 * C3826;
    const double C14047 = ae * C14042;
    const double C14045 = C13553 * C14042;
    const double C14103 = C14101 + C13879;
    const double C158 =
        (3 * (C13563 + ae * C13566 + C13458 * C13574) +
         ae * (2 * C13566 + C13458 * C13575) +
         C13458 *
             (2 * C13574 + ae * C13575 +
              C13458 * (C13570 + ae * C13458 * C13571 +
                        C13458 * (ae * C13571 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13557)))) /
        std::pow(C13438, 2);
    const double C498 =
        (ae * C13559 + C13458 * C13563 + C13574 * C13592) / std::pow(C13438, 2);
    const double C499 = (C13528 * (C13563 + ae * C13566 + C13458 * C13574)) /
                        std::pow(C13438, 2);
    const double C500 = (C13563 + ae * C13566 + C13458 * C13574 +
                         (C13570 + ae * C13458 * C13571 +
                          C13458 * (ae * C13571 + C13458 * std::pow(C13456, 6) *
                                                      bs[6] * C13557)) *
                             C13592) /
                        std::pow(C13438, 2);
    const double C1333 =
        (C13528 *
         (2 * C13574 + ae * C13575 +
          C13458 * (C13570 + ae * C13458 * C13571 +
                    C13458 * (ae * C13571 + C13458 * std::pow(C13456, 6) *
                                                bs[6] * C13557)))) /
        std::pow(C13438, 2);
    const double C3457 =
        (2 * C13528 * C13574 +
         C13528 * (C13574 + (ae * C13571 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13557) *
                                C13592)) /
        std::pow(C13438, 2);
    const double C5231 =
        (3 * (C13563 + ae * C14002 + C13553 * C14005) +
         ae * (2 * C14002 + C13553 * C14006) +
         C13553 *
             (2 * C14005 + ae * C14006 +
              C13553 * (C13570 + ae * C13553 * C13507 +
                        C13553 * (ae * C13507 + C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13557)))) /
        std::pow(C13438, 2);
    const double C185 =
        (3 * (C13583 + ae * C13541 + C13458 * C13588) +
         ae * (2 * C13541 + C13458 * C13550) +
         C13458 *
             (2 * C13588 + ae * C13550 +
              C13458 * (C13586 + ae * C13458 * C13546 +
                        C13458 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13580)))) /
        std::pow(C13438, 2);
    const double C983 =
        (ae * C13534 + C13458 * C13583 + C13588 * C13641) / std::pow(C13438, 2);
    const double C984 = (C13553 * (C13583 + ae * C13541 + C13458 * C13588)) /
                        std::pow(C13438, 2);
    const double C985 = (C13583 + ae * C13541 + C13458 * C13588 +
                         (C13586 + ae * C13458 * C13546 +
                          C13458 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                      bs[6] * C13580)) *
                             C13641) /
                        std::pow(C13438, 2);
    const double C1692 =
        (C13553 *
         (2 * C13588 + ae * C13550 +
          C13458 * (C13586 + ae * C13458 * C13546 +
                    C13458 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                bs[6] * C13580)))) /
        std::pow(C13438, 2);
    const double C5994 =
        (2 * C13553 * C13588 +
         C13553 * (C13588 + (ae * C13546 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13580) *
                                C13641)) /
        std::pow(C13438, 2);
    const double C2827 =
        (3 * (C13583 + ae * C13849 + C13528 * C13859) +
         ae * (2 * C13849 + C13528 * C13853) +
         C13528 *
             (2 * C13859 + ae * C13853 +
              C13528 * (C13586 + ae * C13528 * C13507 +
                        C13528 * (ae * C13507 + C13528 * std::pow(C13456, 6) *
                                                    bs[6] * C13580)))) /
        std::pow(C13438, 2);
    const double C13872 = C13528 * C13602;
    const double C13949 = C13458 * C13602;
    const double C13985 = C13553 * C13602;
    const double C213 =
        (3 * (C13597 + C13602 * C13462) +
         C13458 * (2 * C13458 * C13602 +
                   C13458 * (C13602 + (C13497 * C13498 +
                                       C13592 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13462))) /
        std::pow(C13438, 2);
    const double C587 = (2 * ae * (C13534 + C13539 * C13462) +
                         C13528 * (C13597 + C13602 * C13462)) /
                        std::pow(C13438, 2);
    const double C1027 =
        (C13458 * C13597 + C13458 * C13602 * C13641) / std::pow(C13438, 2);
    const double C1028 =
        (C13553 * (C13597 + C13602 * C13462)) / std::pow(C13438, 2);
    const double C1029 =
        (C13597 + C13602 * C13462 +
         (C13602 + (C13497 * C13498 + C13592 * bs[6] * std::pow(C13456, 6)) *
                       C13465 * C13462) *
             C13641) /
        std::pow(C13438, 2);
    const double C1403 =
        (2 * ae * (2 * C13541 + C13458 * C13550) +
         C13528 * (2 * C13458 * C13602 +
                   C13458 * (C13602 + (C13497 * C13498 +
                                       C13592 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13462))) /
        std::pow(C13438, 2);
    const double C1727 =
        (C13553 * (2 * C13458 * C13602 +
                   C13458 * (C13602 + (C13497 * C13498 +
                                       C13592 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13462))) /
        std::pow(C13438, 2);
    const double C2148 =
        (2 * ae * C13553 * C13541 + C13528 * C13553 * C13458 * C13602) /
        std::pow(C13438, 2);
    const double C2149 = (2 * ae * C13553 * C13550 +
                          C13528 * C13553 *
                              (C13602 + (C13497 * C13498 +
                                         C13592 * bs[6] * std::pow(C13456, 6)) *
                                            C13465 * C13462)) /
                         std::pow(C13438, 2);
    const double C3169 = (2 * ae * (C13534 + C13539 * C13641) +
                          C13528 * (C13597 + C13602 * C13641)) /
                         std::pow(C13438, 2);
    const double C5278 =
        (2 * C13553 * C13597 + C13553 * (C13597 + C13602 * C13641)) /
        std::pow(C13438, 2);
    const double C2877 =
        (3 * (C13610 + ae * C13893 + C13528 * C13896) +
         ae * (2 * C13893 + C13528 * C13897) +
         C13528 *
             (2 * C13896 + ae * C13897 +
              C13528 * (C13613 + ae * C13528 * C13571 +
                        C13528 * (ae * C13571 + C13528 * std::pow(C13456, 6) *
                                                    bs[6] * C13607)))) /
        std::pow(C13438, 2);
    const double C5304 =
        (2 * (ae * C13534 + C13553 * C13610) + ae * (C13534 + C13539 * C13641) +
         C13553 * (C13610 + ae * C13553 * C13539 + C13553 * C13992)) /
        std::pow(C13438, 2);
    const double C5305 =
        (3 * (C13610 + ae * C14013 + C13553 * C13992) +
         ae * (2 * C14013 + C13553 * C14015) +
         C13553 *
             (2 * C13992 + ae * C14015 +
              C13553 * (C13613 + ae * C13553 * C13546 +
                        C13553 * (ae * C13546 + C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13607)))) /
        std::pow(C13438, 2);
    const double C272 =
        (3 * (C13621 + ae * C13566 + C13458 * C13626) +
         ae * (2 * C13566 + C13458 * C13575) +
         C13458 *
             (2 * C13626 + ae * C13575 +
              C13458 * (C13624 + ae * C13458 * C13571 +
                        C13458 * (ae * C13571 + C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13618)))) /
        std::pow(C13438, 2);
    const double C680 =
        (ae * C13559 + C13458 * C13621 + C13626 * C13592) / std::pow(C13438, 2);
    const double C681 = (C13528 * (C13621 + ae * C13566 + C13458 * C13626)) /
                        std::pow(C13438, 2);
    const double C682 = (C13621 + ae * C13566 + C13458 * C13626 +
                         (C13624 + ae * C13458 * C13571 +
                          C13458 * (ae * C13571 + C13458 * std::pow(C13456, 6) *
                                                      bs[6] * C13618)) *
                             C13592) /
                        std::pow(C13438, 2);
    const double C1474 =
        (C13528 *
         (2 * C13626 + ae * C13575 +
          C13458 * (C13624 + ae * C13458 * C13571 +
                    C13458 * (ae * C13571 + C13458 * std::pow(C13456, 6) *
                                                bs[6] * C13618)))) /
        std::pow(C13438, 2);
    const double C3598 =
        (2 * C13528 * C13626 +
         C13528 * (C13626 + (ae * C13571 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13618) *
                                C13592)) /
        std::pow(C13438, 2);
    const double C5329 =
        (3 * (C13621 + ae * C14002 + C13553 * C14019) +
         ae * (2 * C14002 + C13553 * C14006) +
         C13553 *
             (2 * C14019 + ae * C14006 +
              C13553 * (C13624 + ae * C13553 * C13507 +
                        C13553 * (ae * C13507 + C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13618)))) /
        std::pow(C13438, 2);
    const double C2925 =
        (3 * (C13634 + ae * C13893 + C13528 * C13903) +
         ae * (2 * C13893 + C13528 * C13897) +
         C13528 *
             (2 * C13903 + ae * C13897 +
              C13528 * (C13637 + ae * C13528 * C13571 +
                        C13528 * (ae * C13571 + C13528 * std::pow(C13456, 6) *
                                                    bs[6] * C13631)))) /
        std::pow(C13438, 2);
    const double C5353 =
        (3 * (C13634 + ae * C14013 + C13553 * C14023) +
         ae * (2 * C14013 + C13553 * C14015) +
         C13553 *
             (2 * C14023 + ae * C14015 +
              C13553 * (C13637 + ae * C13553 * C13546 +
                        C13553 * (ae * C13546 + C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13631)))) /
        std::pow(C13438, 2);
    const double C13967 = C13458 * C13651;
    const double C14036 = C13553 * C13651;
    const double C14098 = C13528 * C13651;
    const double C327 =
        (3 * (C13646 + C13651 * C13462) +
         C13458 * (2 * C13458 * C13651 +
                   C13458 * (C13651 + (C13497 * C13498 +
                                       C13641 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13462))) /
        std::pow(C13438, 2);
    const double C768 =
        (C13458 * C13646 + C13458 * C13651 * C13592) / std::pow(C13438, 2);
    const double C769 =
        (C13528 * (C13646 + C13651 * C13462)) / std::pow(C13438, 2);
    const double C770 =
        (C13646 + C13651 * C13462 +
         (C13651 + (C13497 * C13498 + C13641 * bs[6] * std::pow(C13456, 6)) *
                       C13465 * C13462) *
             C13592) /
        std::pow(C13438, 2);
    const double C1210 = (2 * ae * (C13559 + C13564 * C13462) +
                          C13553 * (C13646 + C13651 * C13462)) /
                         std::pow(C13438, 2);
    const double C1544 =
        (C13528 * (2 * C13458 * C13651 +
                   C13458 * (C13651 + (C13497 * C13498 +
                                       C13641 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13462))) /
        std::pow(C13438, 2);
    const double C1868 =
        (2 * ae * (2 * C13566 + C13458 * C13575) +
         C13553 * (2 * C13458 * C13651 +
                   C13458 * (C13651 + (C13497 * C13498 +
                                       C13641 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13462))) /
        std::pow(C13438, 2);
    const double C2363 =
        (2 * ae * C13528 * C13566 + C13553 * C13528 * C13458 * C13651) /
        std::pow(C13438, 2);
    const double C2364 = (2 * ae * C13528 * C13575 +
                          C13553 * C13528 *
                              (C13651 + (C13497 * C13498 +
                                         C13641 * bs[6] * std::pow(C13456, 6)) *
                                            C13465 * C13462)) /
                         std::pow(C13438, 2);
    const double C2948 =
        (2 * C13528 * C13646 + C13528 * (C13646 + C13651 * C13592)) /
        std::pow(C13438, 2);
    const double C2949 =
        (3 * (C13646 + C13651 * C13592) +
         C13528 * (2 * C13528 * C13651 +
                   C13528 * (C13651 + (C13497 * C13498 +
                                       C13641 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13592))) /
        std::pow(C13438, 2);
    const double C3337 = (2 * ae * (C13559 + C13564 * C13592) +
                          C13553 * (C13646 + C13651 * C13592)) /
                         std::pow(C13438, 2);
    const double C4456 =
        (2 * ae * (2 * C13893 + C13528 * C13897) +
         C13553 * (2 * C13528 * C13651 +
                   C13528 * (C13651 + (C13497 * C13498 +
                                       C13641 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13592))) /
        std::pow(C13438, 2);
    const double C3981 =
        (ae * C13541 + C13553 * C13961 +
         ae * (C13553 * C13528 * C13962 + C13953) +
         C13528 *
             (ae * (C13553 * C13962 + C13508) +
              C13528 * (ae * C13950 + C13553 * C13458 * std::pow(C13456, 6) *
                                          bs[6] * C13607))) /
        std::pow(C13438, 2);
    const double C14276 = C14275 / C14266;
    const double C14511 = 2 * C14482;
    const double C14285 = C14284 / C14263;
    const double C14515 = C14486 / C14281;
    const double C14538 = C14480 - C14510;
    const double C6844 = -C14510;
    const double C14552 = C14537 + C14273;
    const double C14358 = C14357 / C14266;
    const double C14519 = 2 * C14491;
    const double C14365 = C14364 / C14263;
    const double C14529 = C14500 / C14281;
    const double C14546 = C14494 - C14526;
    const double C6528 = -C14526;
    const double C14555 = C14542 + C14354;
    const double C14400 = C14399 / C14266;
    const double C14522 = 2 * C14493;
    const double C14407 = C14406 / C14263;
    const double C14535 = C14506 / C14281;
    const double C14549 = C14495 - C14532;
    const double C8850 = -C14532;
    const double C14556 = C14544 + C14396;
    const double C85 =
        ((C13461 + C13462 * C13463 * C13467) * C13465 + C13473 + C13473 +
         C13458 *
             (2 * ae * C13470 +
              C13458 *
                  (C13463 * C13467 + C13462 * bs[4] * std::pow(C13456, 4)) *
                  C13465)) /
        std::pow(C13438, 2);
    const double C447 = (C13473 + C13528 * (ae * C13534 + C13458 * C13538)) /
                        std::pow(C13438, 2);
    const double C541 = (C13473 + C13528 * (ae * C13534 + C13458 * C13583)) /
                        std::pow(C13438, 2);
    const double C938 = (C13473 + C13553 * (ae * C13559 + C13458 * C13563)) /
                        std::pow(C13438, 2);
    const double C1120 = (C13473 + C13553 * (ae * C13559 + C13458 * C13621)) /
                         std::pow(C13438, 2);
    const double C91 = C72 * C80;
    const double C398 = C72 * C385;
    const double C839 = C72 * C826;
    const double C13690 = ae * C13689;
    const double C442 =
        (C13458 * C13534 + C13528 * C13689 + C13528 * C13481 * ae) / C13438;
    const double C1983 = (C13553 * C13689) / C13438;
    const double C13782 = ae * C13781;
    const double C933 =
        (C13458 * C13559 + C13553 * C13781 + C13553 * C13481 * ae) / C13438;
    const double C1986 =
        (C13553 * (C13490 + C13528 * C13549)) / std::pow(C13438, 2);
    const double C13491 = C13470 + C13489;
    const double C13658 = ae * C13657;
    const double C1924 = (C13553 * C13657) / C13438;
    const double C13726 = ae * C13725;
    const double C399 = C72 * C386;
    const double C840 = C72 * C827;
    const double C13867 = C13534 + C13865;
    const double C13921 = ae * C13920;
    const double C14031 = C13559 + C14029;
    const double C13938 = ae * C13937;
    const double C3084 =
        (C13528 * C13559 + C13553 * C13937 + C13553 * C13862 * ae) / C13438;
    const double C584 =
        ((C13461 + C13592 * C13463 * C13467) * C13465 + C13685 + C13685 +
         C13528 * (2 * ae * C13534 + C13528 * C13597)) /
        std::pow(C13438, 2);
    const double C2309 = (C13685 + C13553 * (ae * C13559 + C13528 * C13634)) /
                         std::pow(C13438, 2);
    const double C591 = C115 * C440;
    const double C2151 = C115 * C1982;
    const double C3173 = C115 * C3040;
    const double C1207 =
        ((C13461 + C13641 * C13463 * C13467) * C13465 + C13777 + C13777 +
         C13553 * (2 * ae * C13559 + C13553 * C13646)) /
        std::pow(C13438, 2);
    const double C2203 = (C13777 + C13528 * (ae * C13534 + C13553 * C13610)) /
                         std::pow(C13438, 2);
    const double C1214 = C148 * C931;
    const double C5485 =
        (C13490 + C13528 * C13549 +
         (C13517 + C13528 * (ae * C13546 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13532)) *
             C13641) /
        std::pow(C13438, 2);
    const double C13519 = C13483 + C13516;
    const double C13661 = C13488 + C13660;
    const double C13729 = C13488 + C13728;
    const double C13793 = ae * C13791;
    const double C13819 = C13553 * C13791;
    const double C5431 = (C13657 + C13791 * C13641) / C13438;
    const double C13807 = ae * C13805;
    const double C2752 = C72 * C2747;
    const double C3002 = C72 * C2995;
    const double C4174 = C72 * C4171;
    const double C5180 = C72 * C5175;
    const double C13518 = C13500 + C13515;
    const double C1927 =
        (2 * ae * C13553 * C13528 * C13483 + C13458 * C13553 * C13789) /
        std::pow(C13438, 2);
    const double C2749 =
        (3 * (C13487 + C13513 * C13592) +
         C13528 * (2 * C13789 +
                   C13528 * (C13513 + (C13497 * C13498 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13592))) /
        std::pow(C13438, 2);
    const double C2996 =
        (C13528 * C13487 + C13789 * C13641) / std::pow(C13438, 2);
    const double C3384 =
        (2 * ae * (2 * C13849 + C13528 * C13853) +
         C13458 * (2 * C13789 +
                   C13528 * (C13513 + (C13497 * C13498 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13592))) /
        std::pow(C13438, 2);
    const double C4172 =
        (C13553 * (2 * C13789 +
                   C13528 * (C13513 + (C13497 * C13498 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13592))) /
        std::pow(C13438, 2);
    const double C5432 =
        (2 * ae * (C13849 + C13528 * C13507 * C13641) +
         C13458 * (C13789 + C13528 *
                                (C13497 * C13498 +
                                 C13462 * bs[6] * std::pow(C13456, 6)) *
                                C13465 * C13641)) /
        std::pow(C13438, 2);
    const double C6208 =
        (2 * C13553 * C13789 +
         C13553 * (C13789 + C13528 *
                                (C13497 * C13498 +
                                 C13462 * bs[6] * std::pow(C13456, 6)) *
                                C13465 * C13641)) /
        std::pow(C13438, 2);
    const double C5177 =
        (3 * (C13487 + C13513 * C13641) +
         C13553 * (2 * C13803 +
                   C13553 * (C13513 + (C13497 * C13498 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13641))) /
        std::pow(C13438, 2);
    const double C5886 =
        (2 * ae * (2 * C14002 + C13553 * C14006) +
         C13458 * (2 * C13803 +
                   C13553 * (C13513 + (C13497 * C13498 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13641))) /
        std::pow(C13438, 2);
    const double C13694 = C13693 + C13512;
    const double C219 = C115 * C120;
    const double C1036 = C115 * C885;
    const double C1405 = C115 * C1296;
    const double C1729 = C115 * C1620;
    const double C13884 = C13539 + C13881;
    const double C13924 = C13863 + C13923;
    const double C13989 = ae * C13987;
    const double C13956 = ae * C13954;
    const double C13955 = C13528 * C13954;
    const double C13973 = C13553 * C13954;
    const double C5484 = (C13689 + C13954 * C13641) / C13438;
    const double C5282 = C115 * C5203;
    const double C13786 = C13785 + C13512;
    const double C333 = C148 * C153;
    const double C777 = C148 * C494;
    const double C1546 = C148 * C1332;
    const double C1870 = C148 * C1656;
    const double C2368 = C148 * C2040;
    const double C13942 = C13941 + C13882;
    const double C2952 = C148 * C2801;
    const double C4458 = C148 * C4244;
    const double C14066 = C14065 + C13953;
    const double C14082 = ae * C14079;
    const double C14081 = C13553 * C14079;
    const double C14048 = C13564 + C14045;
    const double C14105 = ae * C14103;
    const double C14104 = C13553 * C14103;
    const double C13877 = C13871 + C13872;
    const double C5639 =
        (2 * ae * (C13541 + C13950 * C13641) +
         C13528 * (C13949 + C13458 *
                                (C13497 * C13498 +
                                 C13592 * bs[6] * std::pow(C13456, 6)) *
                                C13465 * C13641)) /
        std::pow(C13438, 2);
    const double C6029 =
        (2 * C13553 * C13949 +
         C13553 * (C13949 + C13458 *
                                (C13497 * C13498 +
                                 C13592 * bs[6] * std::pow(C13456, 6)) *
                                C13465 * C13641)) /
        std::pow(C13438, 2);
    const double C5279 =
        (3 * (C13597 + C13602 * C13641) +
         C13553 * (2 * C13985 +
                   C13553 * (C13602 + (C13497 * C13498 +
                                       C13592 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13641))) /
        std::pow(C13438, 2);
    const double C6351 =
        (2 * ae * (2 * C14013 + C13553 * C14015) +
         C13528 * (2 * C13985 +
                   C13553 * (C13602 + (C13497 * C13498 +
                                       C13592 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13641))) /
        std::pow(C13438, 2);
    const double C3668 =
        (2 * C13528 * C13967 +
         C13528 * (C13967 + C13458 *
                                (C13497 * C13498 +
                                 C13641 * bs[6] * std::pow(C13456, 6)) *
                                C13465 * C13592)) /
        std::pow(C13438, 2);
    const double C4134 =
        (2 * ae * (C13566 + C13962 * C13592) +
         C13553 * (C13967 + C13458 *
                                (C13497 * C13498 +
                                 C13641 * bs[6] * std::pow(C13456, 6)) *
                                C13465 * C13592)) /
        std::pow(C13438, 2);
    const double C14041 = C14035 + C14036;
    const double C14277 = C14273 - C14276;
    const double C14539 = C14511 / C14263;
    const double C14286 = C14282 - C14285;
    const double C14553 = C14538 / C14267;
    const double C14359 = C14354 - C14358;
    const double C14543 = C14519 / C14263;
    const double C14366 = C14362 - C14365;
    const double C14557 = C14546 / C14267;
    const double C14401 = C14396 - C14400;
    const double C14545 = C14522 / C14263;
    const double C14408 = C14404 - C14407;
    const double C14559 = C14549 / C14267;
    const double C586 =
        (C13458 * C13597 + C13690 + C13690 +
         C13528 * (2 * ae * C13541 + C13528 * C13458 * C13602)) /
        std::pow(C13438, 2);
    const double C2310 =
        (C13690 + C13553 * (ae * C13566 + C13528 * C13458 * C13637)) /
        std::pow(C13438, 2);
    const double C593 = C115 * C442;
    const double C2152 = C115 * C1983;
    const double C1209 =
        (C13458 * C13646 + C13782 + C13782 +
         C13553 * (2 * ae * C13566 + C13553 * C13458 * C13651)) /
        std::pow(C13438, 2);
    const double C2204 =
        (C13782 + C13528 * (ae * C13541 + C13553 * C13458 * C13613)) /
        std::pow(C13438, 2);
    const double C1216 = C148 * C933;
    const double C13492 = C13491 + C13484;
    const double C393 =
        (C13528 * C13487 + C13658 + C13658 +
         C13458 * (2 * ae * C13528 * C13483 + C13458 * C13528 * C13513)) /
        std::pow(C13438, 2);
    const double C448 = (ae * C13534 + C13458 * C13538 + C13658 +
                         C13528 * (C13490 + C13528 * C13549)) /
                        std::pow(C13438, 2);
    const double C542 = (ae * C13534 + C13458 * C13583 + C13658 +
                         C13528 * (C13490 + C13528 * C13588)) /
                        std::pow(C13438, 2);
    const double C2042 =
        (C13658 + C13553 * C13528 * C13574) / std::pow(C13438, 2);
    const double C2257 =
        (C13658 + C13553 * C13528 * C13626) / std::pow(C13438, 2);
    const double C1931 = C72 * C1924;
    const double C834 =
        (C13553 * C13487 + C13726 + C13726 +
         C13458 * (2 * ae * C13553 * C13483 + C13458 * C13553 * C13513)) /
        std::pow(C13438, 2);
    const double C939 = (ae * C13559 + C13458 * C13563 + C13726 +
                         C13553 * (C13490 + C13553 * C13574)) /
                        std::pow(C13438, 2);
    const double C1121 = (ae * C13559 + C13458 * C13621 + C13726 +
                          C13553 * (C13490 + C13553 * C13626)) /
                         std::pow(C13438, 2);
    const double C2095 =
        (C13726 + C13528 * C13553 * C13588) / std::pow(C13438, 2);
    const double C13868 = C13867 + C13864;
    const double C3170 =
        (C13553 * C13597 + C13921 + C13921 +
         C13528 * (2 * ae * C13553 * C13539 + C13528 * C13553 * C13602)) /
        std::pow(C13438, 2);
    const double C3295 = (ae * C13559 + C13528 * C13634 + C13921 +
                          C13553 * (C13866 + C13553 * C13903)) /
                         std::pow(C13438, 2);
    const double C14032 = C14031 + C14028;
    const double C3336 =
        (C13528 * C13646 + C13938 + C13938 +
         C13553 * (2 * ae * C13893 + C13553 * C13528 * C13651)) /
        std::pow(C13438, 2);
    const double C3340 = C148 * C3084;
    const double C13520 = C13519 + C13508;
    const double C13662 = ae * C13661;
    const double C3383 = (2 * C13657 + C13528 * C13661) / C13438;
    const double C3721 = (C13553 * C13661) / C13438;
    const double C13730 = ae * C13729;
    const double C5885 = (2 * C13725 + C13553 * C13729) / C13438;
    const double C3775 =
        (C13553 * (C13549 + C13793 +
                   C13528 * (C13517 + C13528 * (ae * C13546 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13532)))) /
        std::pow(C13438, 2);
    const double C13820 = ae * C13819;
    const double C5434 = C72 * C5431;
    const double C13695 = ae * C13694;
    const double C444 =
        (C13534 + C13539 * C13462 + C13528 * C13694 + C13528 * C13509 * ae) /
        C13438;
    const double C1984 = (C13553 * C13694) / C13438;
    const double C13885 = C13884 + C13879;
    const double C13925 = ae * C13924;
    const double C6244 = (2 * C13920 + C13553 * C13924) / C13438;
    const double C13957 = C13541 + C13955;
    const double C13974 = ae * C13973;
    const double C5641 = C115 * C5484;
    const double C13787 = ae * C13786;
    const double C935 =
        (C13559 + C13564 * C13462 + C13553 * C13786 + C13553 * C13509 * ae) /
        C13438;
    const double C13943 = ae * C13942;
    const double C3086 =
        (C13559 + C13564 * C13592 + C13553 * C13942 + C13553 * C13880 * ae) /
        C13438;
    const double C14067 = ae * C14066;
    const double C5536 =
        (C13528 * C13566 + C13553 * C14066 + C13553 * C13951 * ae) / C13438;
    const double C14083 = C13566 + C14081;
    const double C14049 = C14048 + C14043;
    const double C14106 = C13893 + C14104;
    const double C14479 = C14277 * C14265;
    const double C14513 = C14484 + C14277;
    const double C14487 = C14286 / C14267;
    const double C14483 = C14286 * C14265;
    const double C1254 = C14553 - (C14277 * C14268) / C14263;
    const double C14497 = C14359 * C14353;
    const double C14528 = C14499 + C14359;
    const double C14501 = C14366 / C14267;
    const double C14498 = C14366 * C14353;
    const double C3376 = C14557 - (C14359 * C14355) / C14263;
    const double C14503 = C14401 * C14395;
    const double C14534 = C14505 + C14401;
    const double C14507 = C14408 / C14267;
    const double C14504 = C14408 * C14395;
    const double C5880 = C14559 - (C14401 * C14397) / C14263;
    const double C13493 = ae * C13492;
    const double C81 =
        (2 * C13472 + C13458 * C13492 + (C13461 + C13475 * C13462) * ae) /
        C13438;
    const double C387 = (C13528 * C13492) / C13438;
    const double C828 = (C13553 * C13492) / C13438;
    const double C13869 = ae * C13868;
    const double C2774 =
        (2 * C13684 + C13528 * C13868 + (C13461 + C13475 * C13592) * ae) /
        C13438;
    const double C3041 = (C13553 * C13868) / C13438;
    const double C14033 = ae * C14032;
    const double C5228 =
        (2 * C13776 + C13553 * C14032 + (C13461 + C13475 * C13641) * ae) /
        C13438;
    const double C13522 = ae * C13520;
    const double C13521 = C13458 * C13520;
    const double C13790 = C13528 * C13520;
    const double C13804 = C13553 * C13520;
    const double C388 = (C13492 + C13520 * C13592) / C13438;
    const double C829 = (C13492 + C13520 * C13641) / C13438;
    const double C394 =
        (C13487 + C13513 * C13592 + C13662 + C13662 +
         C13458 * (2 * ae * (C13483 + C13507 * C13592) +
                   C13458 * (C13513 + (C13497 * C13498 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13592))) /
        std::pow(C13438, 2);
    const double C3421 =
        (2 * (C13490 + C13528 * C13549) + C13662 +
         C13528 * (C13549 + C13793 +
                   C13528 * (C13517 + C13528 * (ae * C13546 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13532)))) /
        std::pow(C13438, 2);
    const double C3492 =
        (2 * (C13490 + C13528 * C13588) + C13662 +
         C13528 * (C13588 + C13793 +
                   C13528 * (C13517 + C13528 * (ae * C13546 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13580)))) /
        std::pow(C13438, 2);
    const double C3827 =
        (C13662 +
         C13553 * (C13574 + (ae * C13571 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13557) *
                                C13592)) /
        std::pow(C13438, 2);
    const double C4032 =
        (C13662 +
         C13553 * (C13626 + (ae * C13571 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13618) *
                                C13592)) /
        std::pow(C13438, 2);
    const double C3386 = C72 * C3383;
    const double C3724 = C72 * C3721;
    const double C835 =
        (C13487 + C13513 * C13641 + C13730 + C13730 +
         C13458 * (2 * ae * (C13483 + C13507 * C13641) +
                   C13458 * (C13513 + (C13497 * C13498 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13641))) /
        std::pow(C13438, 2);
    const double C5588 =
        (C13730 +
         C13528 * (C13588 + (ae * C13546 +
                             C13458 * std::pow(C13456, 6) * bs[6] * C13580) *
                                C13641)) /
        std::pow(C13438, 2);
    const double C5959 =
        (2 * (C13490 + C13553 * C13574) + C13730 +
         C13553 * (C13574 + C13807 +
                   C13553 * (C13517 + C13553 * (ae * C13571 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13557)))) /
        std::pow(C13438, 2);
    const double C6100 =
        (2 * (C13490 + C13553 * C13626) + C13730 +
         C13553 * (C13626 + C13807 +
                   C13553 * (C13517 + C13553 * (ae * C13571 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13618)))) /
        std::pow(C13438, 2);
    const double C5888 = C72 * C5885;
    const double C1928 =
        (C13553 * C13789 + C13820 + C13820 +
         C13458 *
             (2 * ae * C13553 * C13528 * C13507 +
              C13458 * C13553 * C13528 *
                  (C13497 * C13498 + C13462 * bs[6] * std::pow(C13456, 6)) *
                  C13465)) /
        std::pow(C13438, 2);
    const double C3878 =
        (C13553 * C13588 + C13820 +
         C13528 * (C13807 + C13528 * C13553 *
                                (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                   bs[6] * C13580))) /
        std::pow(C13438, 2);
    const double C5537 =
        (C13528 * C13574 + C13820 +
         C13553 * (C13793 + C13553 * C13528 *
                                (ae * C13571 + C13458 * std::pow(C13456, 6) *
                                                   bs[6] * C13557))) /
        std::pow(C13438, 2);
    const double C5742 =
        (C13528 * C13626 + C13820 +
         C13553 * (C13793 + C13553 * C13528 *
                                (ae * C13571 + C13458 * std::pow(C13456, 6) *
                                                   bs[6] * C13618))) /
        std::pow(C13438, 2);
    const double C588 =
        (C13597 + C13602 * C13462 + C13695 + C13695 +
         C13528 * (2 * ae * C13550 +
                   C13528 * (C13602 + (C13497 * C13498 +
                                       C13592 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13462))) /
        std::pow(C13438, 2);
    const double C2311 =
        (C13695 + C13553 * (ae * C13575 +
                            C13528 * (C13637 + std::pow(C13456, 6) * bs[6] *
                                                   C13631 * C13462))) /
        std::pow(C13438, 2);
    const double C595 = C115 * C444;
    const double C2153 = C115 * C1984;
    const double C13887 = ae * C13885;
    const double C13886 = C13528 * C13885;
    const double C13986 = C13553 * C13885;
    const double C3042 = (C13868 + C13885 * C13641) / C13438;
    const double C3171 =
        (C13597 + C13602 * C13641 + C13925 + C13925 +
         C13528 * (2 * ae * (C13539 + C13546 * C13641) +
                   C13528 * (C13602 + (C13497 * C13498 +
                                       C13592 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13641))) /
        std::pow(C13438, 2);
    const double C6457 =
        (2 * (C13866 + C13553 * C13903) + C13925 +
         C13553 * (C13903 + C13989 +
                   C13553 * (C13883 + C13553 * (ae * C13571 +
                                                C13528 * std::pow(C13456, 6) *
                                                    bs[6] * C13631)))) /
        std::pow(C13438, 2);
    const double C6353 = C115 * C6244;
    const double C13958 = C13957 + C13953;
    const double C3929 =
        (C13553 * C13949 + C13974 + C13974 +
         C13528 *
             (2 * ae * C13553 * C13950 +
              C13528 * C13553 * C13458 *
                  (C13497 * C13498 + C13592 * bs[6] * std::pow(C13456, 6)) *
                  C13465)) /
        std::pow(C13438, 2);
    const double C5793 =
        (ae * C13566 + C13528 * C13965 + C13974 +
         C13553 * (C13956 + C13553 * (ae * C13962 + C13528 * C13458 *
                                                        std::pow(C13456, 6) *
                                                        bs[6] * C13631))) /
        std::pow(C13438, 2);
    const double C1211 =
        (C13646 + C13651 * C13462 + C13787 + C13787 +
         C13553 * (2 * ae * C13575 +
                   C13553 * (C13651 + (C13497 * C13498 +
                                       C13641 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13462))) /
        std::pow(C13438, 2);
    const double C2205 =
        (C13787 + C13528 * (ae * C13550 +
                            C13553 * (C13613 + std::pow(C13456, 6) * bs[6] *
                                                   C13607 * C13462))) /
        std::pow(C13438, 2);
    const double C1218 = C148 * C935;
    const double C3338 =
        (C13646 + C13651 * C13592 + C13943 + C13943 +
         C13553 * (2 * ae * C13897 +
                   C13553 * (C13651 + (C13497 * C13498 +
                                       C13641 * bs[6] * std::pow(C13456, 6)) *
                                          C13465 * C13592))) /
        std::pow(C13438, 2);
    const double C4351 =
        (2 * (ae * (C13553 * C13564 + C13480) + C13528 * C13992) + C13943 +
         C13528 *
             (C13992 + ae * (C13553 * C13528 * C13571 + C13879) +
              C13528 * (ae * (C13553 * C13571 + C13503) +
                        C13528 * (ae * C13546 + C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13607)))) /
        std::pow(C13438, 2);
    const double C3342 = C148 * C3086;
    const double C5844 =
        (C13528 * C13967 + C14067 + C14067 +
         C13553 *
             (2 * ae * C14064 +
              C13553 * C13528 * C13458 *
                  (C13497 * C13498 + C13641 * bs[6] * std::pow(C13456, 6)) *
                  C13465)) /
        std::pow(C13438, 2);
    const double C5846 = C148 * C5536;
    const double C14084 = C14083 + C14080;
    const double C14051 = ae * C14049;
    const double C14050 = C13553 * C14049;
    const double C14107 = C14106 + C14102;
    const double C14509 = C14479 / C14263;
    const double C14540 = C14513 / C14267;
    const double C14541 = C14515 + C14487;
    const double C1256 = C14487 - C14284 / C14281;
    const double C14512 = C14483 / C14263;
    const double C14525 = C14497 / C14263;
    const double C14547 = C14528 / C14267;
    const double C14548 = C14529 + C14501;
    const double C3378 = C14501 - C14364 / C14281;
    const double C14527 = C14498 / C14263;
    const double C14531 = C14503 / C14263;
    const double C14550 = C14534 / C14267;
    const double C14551 = C14535 + C14507;
    const double C5882 = C14507 - C14406 / C14281;
    const double C14533 = C14504 / C14263;
    const double C86 =
        (2 * (2 * ae * C13470 + C13458 * C13487) + C13493 + C13493 +
         C13458 * (C13487 + C13490 + C13490 +
                   C13458 * (2 * ae * C13483 +
                             C13458 *
                                 (C13476 * C13477 +
                                  C13462 * bs[5] * std::pow(C13464, 5)) *
                                 C13465))) /
        std::pow(C13438, 2);
    const double C449 =
        (C13493 + C13528 * (C13538 + ae * C13541 + C13458 * C13549)) /
        std::pow(C13438, 2);
    const double C543 =
        (C13493 + C13528 * (C13583 + ae * C13541 + C13458 * C13588)) /
        std::pow(C13438, 2);
    const double C940 =
        (C13493 + C13553 * (C13563 + ae * C13566 + C13458 * C13574)) /
        std::pow(C13438, 2);
    const double C1122 =
        (C13493 + C13553 * (C13621 + ae * C13566 + C13458 * C13626)) /
        std::pow(C13438, 2);
    const double C92 = C72 * C81;
    const double C400 = C72 * C387;
    const double C841 = C72 * C828;
    const double C2850 =
        (2 * (2 * ae * C13534 + C13528 * C13597) + C13869 + C13869 +
         C13528 * (C13597 + C13866 + C13866 +
                   C13528 * (2 * C13542 + C13528 * C13602))) /
        std::pow(C13438, 2);
    const double C3296 =
        (C13869 + C13553 * (C13634 + ae * C13893 + C13528 * C13903)) /
        std::pow(C13438, 2);
    const double C2853 = C115 * C2774;
    const double C3174 = C115 * C3041;
    const double C5376 =
        (2 * (2 * ae * C13559 + C13553 * C13646) + C14033 + C14033 +
         C13553 * (C13646 + C14030 + C14030 +
                   C13553 * (2 * C13567 + C13553 * C13651))) /
        std::pow(C13438, 2);
    const double C5379 = C148 * C5228;
    const double C450 =
        (C13538 + ae * C13541 + C13458 * C13549 + ae * C13528 * C13520 +
         C13528 * (C13522 + C13528 * (C13545 + ae * C13458 * C13546 +
                                      C13458 * (ae * C13546 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13532)))) /
        std::pow(C13438, 2);
    const double C544 =
        (C13583 + ae * C13541 + C13458 * C13588 + ae * C13528 * C13520 +
         C13528 * (C13522 + C13528 * (C13586 + ae * C13458 * C13546 +
                                      C13458 * (ae * C13546 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13580)))) /
        std::pow(C13438, 2);
    const double C941 =
        (C13563 + ae * C13566 + C13458 * C13574 + ae * C13553 * C13520 +
         C13553 * (C13522 + C13553 * (C13570 + ae * C13458 * C13571 +
                                      C13458 * (ae * C13571 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13557)))) /
        std::pow(C13438, 2);
    const double C1123 =
        (C13621 + ae * C13566 + C13458 * C13626 + ae * C13553 * C13520 +
         C13553 * (C13522 + C13553 * (C13624 + ae * C13458 * C13571 +
                                      C13458 * (ae * C13571 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13618)))) /
        std::pow(C13438, 2);
    const double C1987 =
        (C13553 * (C13522 + C13528 * (C13545 + ae * C13458 * C13546 +
                                      C13458 * (ae * C13546 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13532)))) /
        std::pow(C13438, 2);
    const double C13523 = C13499 + C13521;
    const double C13792 = ae * C13790;
    const double C1925 = (C13553 * C13790) / C13438;
    const double C13806 = ae * C13804;
    const double C401 = C72 * C388;
    const double C842 = C72 * C829;
    const double C3297 =
        (C13634 + ae * C13893 + C13528 * C13903 + ae * C13553 * C13885 +
         C13553 * (C13887 + C13553 * (C13637 + ae * C13528 * C13571 +
                                      C13528 * (ae * C13571 +
                                                C13528 * std::pow(C13456, 6) *
                                                    bs[6] * C13631)))) /
        std::pow(C13438, 2);
    const double C13888 = C13873 + C13886;
    const double C13988 = ae * C13986;
    const double C3175 = C115 * C3042;
    const double C13959 = ae * C13958;
    const double C3420 =
        (2 * C13689 + C13528 * C13958 + (C13481 + C13504 * C13592) * ae) /
        C13438;
    const double C3774 = (C13553 * C13958) / C13438;
    const double C14085 = ae * C14084;
    const double C5958 =
        (2 * C13781 + C13553 * C14084 + (C13481 + C13504 * C13641) * ae) /
        C13438;
    const double C14052 = C14037 + C14050;
    const double C14108 = ae * C14107;
    const double C6280 =
        (2 * C13937 + C13553 * C14107 + (C13862 + C13875 * C13641) * ae) /
        C13438;
    const double C14561 = C14509 + C14553;
    const double C1255 = C14540 - (C14286 * C14268) / C14263;
    const double C69 = C14541 / C14267 - C14284 / C14516;
    const double C14554 = C14512 + C14540;
    const double C14562 = C14525 + C14557;
    const double C3377 = C14547 - (C14366 * C14355) / C14263;
    const double C2741 = C14548 / C14267 - C14364 / C14516;
    const double C14558 = C14527 + C14547;
    const double C14563 = C14531 + C14559;
    const double C5881 = C14550 - (C14408 * C14397) / C14263;
    const double C5170 = C14551 / C14267 - C14406 / C14516;
    const double C14560 = C14533 + C14550;
    const double C13524 = C13523 + C13512;
    const double C1260 =
        (2 * (2 * ae * C13528 * C13483 + C13458 * C13789) + C13792 + C13792 +
         C13458 * (C13789 + C13793 + C13793 +
                   C13458 * (2 * ae * C13528 * C13507 +
                             C13458 * C13528 *
                                 (C13497 * C13498 +
                                  C13462 * bs[6] * std::pow(C13456, 6)) *
                                 C13465))) /
        std::pow(C13438, 2);
    const double C2043 =
        (C13792 + C13553 * C13528 *
                      (C13570 + ae * C13458 * C13571 +
                       C13458 * (ae * C13571 + C13458 * std::pow(C13456, 6) *
                                                   bs[6] * C13557))) /
        std::pow(C13438, 2);
    const double C2258 =
        (C13792 + C13553 * C13528 *
                      (C13624 + ae * C13458 * C13571 +
                       C13458 * (ae * C13571 + C13458 * std::pow(C13456, 6) *
                                                   bs[6] * C13618))) /
        std::pow(C13438, 2);
    const double C1932 = C72 * C1925;
    const double C1584 =
        (2 * (2 * ae * C13553 * C13483 + C13458 * C13803) + C13806 + C13806 +
         C13458 * (C13803 + C13807 + C13807 +
                   C13458 * (2 * ae * C13553 * C13507 +
                             C13458 * C13553 *
                                 (C13497 * C13498 +
                                  C13462 * bs[6] * std::pow(C13456, 6)) *
                                 C13465))) /
        std::pow(C13438, 2);
    const double C2096 =
        (C13806 + C13528 * C13553 *
                      (C13586 + ae * C13458 * C13546 +
                       C13458 * (ae * C13546 + C13458 * std::pow(C13456, 6) *
                                                   bs[6] * C13580))) /
        std::pow(C13438, 2);
    const double C13889 = C13888 + C13882;
    const double C4315 =
        (2 * (2 * ae * C13553 * C13539 + C13528 * C13985) + C13988 + C13988 +
         C13528 * (C13985 + C13989 + C13989 +
                   C13528 * (2 * ae * C13553 * C13546 +
                             C13528 * C13553 *
                                 (C13497 * C13498 +
                                  C13592 * bs[6] * std::pow(C13456, 6)) *
                                 C13465))) /
        std::pow(C13438, 2);
    const double C3527 =
        (2 * (2 * ae * C13541 + C13528 * C13949) + C13959 + C13959 +
         C13528 * (C13949 + C13956 + C13956 +
                   C13528 * (2 * ae * C13950 +
                             C13528 * C13458 *
                                 (C13497 * C13498 +
                                  C13592 * bs[6] * std::pow(C13456, 6)) *
                                 C13465))) /
        std::pow(C13438, 2);
    const double C4083 =
        (C13959 + C13553 * (C13965 + ae * C13528 * C13962 +
                            C13528 * (ae * C13962 + C13528 * C13458 *
                                                        std::pow(C13456, 6) *
                                                        bs[6] * C13631))) /
        std::pow(C13438, 2);
    const double C3529 = C115 * C3420;
    const double C3931 = C115 * C3774;
    const double C6170 =
        (2 * (2 * ae * C13566 + C13553 * C13967) + C14085 + C14085 +
         C13553 * (C13967 + C14082 + C14082 +
                   C13553 * (2 * ae * C13962 +
                             C13553 * C13458 *
                                 (C13497 * C13498 +
                                  C13641 * bs[6] * std::pow(C13456, 6)) *
                                 C13465))) /
        std::pow(C13438, 2);
    const double C6172 = C148 * C5958;
    const double C14053 = C14052 + C14046;
    const double C6492 =
        (2 * (2 * ae * C13893 + C13553 * C14098) + C14108 + C14108 +
         C13553 * (C14098 + C14105 + C14105 +
                   C13553 * (2 * ae * C14099 +
                             C13553 * C13528 *
                                 (C13497 * C13498 +
                                  C13641 * bs[6] * std::pow(C13456, 6)) *
                                 C13465))) /
        std::pow(C13438, 2);
    const double C6494 = C148 * C6280;
    const double C66 =
        (C14552 + 2 * C14277) / C14267 - (C14561 * C14268) / C14263;
    const double C67 =
        (C14539 + 2 * C14286 + C14561) / C14267 - (C14554 * C14268) / C14263;
    const double C68 = (C14514 + C14283 / C14263 + C14554) / C14267 -
                       (C14541 * C14268) / C14263;
    const double C2738 =
        (C14555 + 2 * C14359) / C14267 - (C14562 * C14355) / C14263;
    const double C2739 =
        (C14543 + 2 * C14366 + C14562) / C14267 - (C14558 * C14355) / C14263;
    const double C2740 = (C14520 + C14363 / C14263 + C14558) / C14267 -
                         (C14548 * C14355) / C14263;
    const double C5167 =
        (C14556 + 2 * C14401) / C14267 - (C14563 * C14397) / C14263;
    const double C5168 =
        (C14545 + 2 * C14408 + C14563) / C14267 - (C14560 * C14397) / C14263;
    const double C5169 = (C14523 + C14405 / C14263 + C14560) / C14267 -
                         (C14551 * C14397) / C14263;
    const double C13525 = ae * C13524;
    const double C82 =
        (3 * C13492 + C13458 * C13524 + (2 * C13481 + C13458 * C13509) * ae) /
        C13438;
    const double C1259 = (C13528 * C13524) / C13438;
    const double C1583 = (C13553 * C13524) / C13438;
    const double C13890 = ae * C13889;
    const double C2775 =
        (3 * C13868 + C13528 * C13889 + (2 * C13862 + C13528 * C13880) * ae) /
        C13438;
    const double C4208 = (C13553 * C13889) / C13438;
    const double C14054 = ae * C14053;
    const double C5229 =
        (3 * C14032 + C13553 * C14053 + (2 * C14026 + C13553 * C14044) * ae) /
        C13438;
    const double C87 =
        (3 * (C13487 + C13490 + C13490 + C13458 * C13518) + C13525 + C13525 +
         C13458 *
             (2 * C13518 + C13522 + C13522 +
              C13458 * (C13513 + C13517 + C13517 +
                        C13458 * (2 * ae * C13507 +
                                  C13458 *
                                      (C13497 * C13498 +
                                       C13462 * bs[6] * std::pow(C13456, 6)) *
                                      C13465)))) /
        std::pow(C13438, 2);
    const double C1297 =
        (C13525 + C13528 * (2 * C13549 + ae * C13550 +
                            C13458 * (C13545 + ae * C13458 * C13546 +
                                      C13458 * (ae * C13546 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13532)))) /
        std::pow(C13438, 2);
    const double C1368 =
        (C13525 + C13528 * (2 * C13588 + ae * C13550 +
                            C13458 * (C13586 + ae * C13458 * C13546 +
                                      C13458 * (ae * C13546 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13580)))) /
        std::pow(C13438, 2);
    const double C1657 =
        (C13525 + C13553 * (2 * C13574 + ae * C13575 +
                            C13458 * (C13570 + ae * C13458 * C13571 +
                                      C13458 * (ae * C13571 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13557)))) /
        std::pow(C13438, 2);
    const double C1798 =
        (C13525 + C13553 * (2 * C13626 + ae * C13575 +
                            C13458 * (C13624 + ae * C13458 * C13571 +
                                      C13458 * (ae * C13571 +
                                                C13458 * std::pow(C13456, 6) *
                                                    bs[6] * C13618)))) /
        std::pow(C13438, 2);
    const double C93 = C72 * C82;
    const double C1262 = C72 * C1259;
    const double C1586 = C72 * C1583;
    const double C2851 =
        (3 * (C13597 + C13866 + C13866 + C13528 * C13877) + C13890 + C13890 +
         C13528 *
             (2 * C13877 + C13887 + C13887 +
              C13528 * (C13602 + C13883 + C13883 +
                        C13528 * (2 * ae * C13546 +
                                  C13528 *
                                      (C13497 * C13498 +
                                       C13592 * bs[6] * std::pow(C13456, 6)) *
                                      C13465)))) /
        std::pow(C13438, 2);
    const double C4421 =
        (C13890 + C13553 * (2 * C13903 + ae * C13897 +
                            C13528 * (C13637 + ae * C13528 * C13571 +
                                      C13528 * (ae * C13571 +
                                                C13528 * std::pow(C13456, 6) *
                                                    bs[6] * C13631)))) /
        std::pow(C13438, 2);
    const double C2854 = C115 * C2775;
    const double C4317 = C115 * C4208;
    const double C5377 =
        (3 * (C13646 + C14030 + C14030 + C13553 * C14041) + C14054 + C14054 +
         C13553 *
             (2 * C14041 + C14051 + C14051 +
              C13553 * (C13651 + C14047 + C14047 +
                        C13553 * (2 * ae * C13571 +
                                  C13553 *
                                      (C13497 * C13498 +
                                       C13641 * bs[6] * std::pow(C13456, 6)) *
                                      C13465)))) /
        std::pow(C13438, 2);
    const double C6387 =
        (C14054 + C13528 * (2 * C13992 + ae * C14015 +
                            C13553 * (C13613 + ae * C13553 * C13546 +
                                      C13553 * (ae * C13546 +
                                                C13553 * std::pow(C13456, 6) *
                                                    bs[6] * C13607)))) /
        std::pow(C13438, 2);
    const double C5380 = C148 * C5229;
    d2eexx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C14359 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C14366 +
           (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 *
               C7608) *
              C14277 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C14366 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C14359 -
           (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14318 *
               C7608) *
              C14286 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C14359 -
           (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14318 *
               C14366 +
           (C71 * C382 + C401 + C401 + C61 * C394) * C62 * C63 * C14318 *
               C7608) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C14359 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C14366 +
           ((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14318 * C7608) *
              C14277 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C14366 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C14359 -
           ((C115 * C386 + C63 * C448) * C61 +
            (C115 * C380 + C63 * C442) * C72) *
               C62 * C14318 * C7608) *
              C14286 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14318 * C14359 -
           ((C115 * C387 + C63 * C449) * C61 +
            (C115 * C381 + C63 * C443) * C72) *
               C62 * C14318 * C14366 +
           ((C115 * C382 + C63 * C444) * C72 +
            (C115 * C388 + C63 * C450) * C61) *
               C62 * C14318 * C7608) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C14359 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C14366 +
           ((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14318 * C7608) *
              C14277 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C14366 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C14359 -
           ((C148 * C386 + C62 * C498) * C61 +
            (C148 * C380 + C62 * C492) * C72) *
               C63 * C14318 * C7608) *
              C14286 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14318 * C14359 -
           ((C148 * C387 + C62 * C499) * C61 +
            (C148 * C381 + C62 * C493) * C72) *
               C63 * C14318 * C14366 +
           ((C148 * C382 + C62 * C494) * C72 +
            (C148 * C388 + C62 * C500) * C61) *
               C63 * C14318 * C7608) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C14359 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C14366 +
           ((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14318 * C7608) *
              C14277 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C14366 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C14359 -
           ((C72 * C442 + C61 * C542) * C63 +
            (C72 * C380 + C61 * C386) * C115) *
               C62 * C14318 * C7608) *
              C14286 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14318 * C14359 -
           ((C72 * C443 + C61 * C543) * C63 +
            (C72 * C381 + C61 * C387) * C115) *
               C62 * C14318 * C14366 +
           ((C72 * C382 + C61 * C388) * C115 +
            (C72 * C444 + C61 * C544) * C63) *
               C62 * C14318 * C7608) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 *
                        C14318 * C14359 -
                    (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 *
                        C14318 * C14366 +
                    (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 *
                        C14318 * C7608) *
                       C14277 +
                   ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 *
                        C14318 * C14366 -
                    (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 *
                        C14318 * C14359 -
                    (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 *
                        C14318 * C7608) *
                       C14286 +
                   ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 *
                        C14318 * C14359 -
                    (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 *
                        C14318 * C14366 +
                    (C208 * C382 + C595 + C595 + C63 * C588) * C61 * C62 *
                        C14318 * C7608) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14318 * C14359 -
                    ((C148 * C439 + C62 * C633) * C63 +
                     (C148 * C377 + C62 * C489) * C115) *
                        C61 * C14318 * C14366 +
                    ((C148 * C378 + C62 * C490) * C115 +
                     (C148 * C440 + C62 * C634) * C63) *
                        C61 * C14318 * C7608) *
                       C14277 +
                   (((C148 * C379 + C62 * C491) * C115 +
                     (C148 * C441 + C62 * C635) * C63) *
                        C61 * C14318 * C14366 -
                    ((C148 * C117 + C62 * C242) * C63 +
                     (C148 * C74 + C62 * C150) * C115) *
                        C61 * C14318 * C14359 -
                    ((C148 * C442 + C62 * C636) * C63 +
                     (C148 * C380 + C62 * C492) * C115) *
                        C61 * C14318 * C7608) *
                       C14286 +
                   (((C148 * C75 + C62 * C151) * C115 +
                     (C148 * C118 + C62 * C243) * C63) *
                        C61 * C14318 * C14359 -
                    ((C148 * C443 + C62 * C637) * C63 +
                     (C148 * C381 + C62 * C493) * C115) *
                        C61 * C14318 * C14366 +
                    ((C148 * C382 + C62 * C494) * C115 +
                     (C148 * C444 + C62 * C638) * C63) *
                        C61 * C14318 * C7608) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C14359 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C14366 +
           ((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14318 * C7608) *
              C14277 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C14366 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C14359 -
           ((C72 * C492 + C61 * C680) * C62 +
            (C72 * C380 + C61 * C386) * C148) *
               C63 * C14318 * C7608) *
              C14286 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14318 * C14359 -
           ((C72 * C493 + C61 * C681) * C62 +
            (C72 * C381 + C61 * C387) * C148) *
               C63 * C14318 * C14366 +
           ((C72 * C382 + C61 * C388) * C148 +
            (C72 * C494 + C61 * C682) * C62) *
               C63 * C14318 * C7608) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14318 * C14359 -
                    ((C115 * C489 + C63 * C721) * C62 +
                     (C115 * C377 + C63 * C439) * C148) *
                        C61 * C14318 * C14366 +
                    ((C115 * C378 + C63 * C440) * C148 +
                     (C115 * C490 + C63 * C722) * C62) *
                        C61 * C14318 * C7608) *
                       C14277 +
                   (((C115 * C379 + C63 * C441) * C148 +
                     (C115 * C491 + C63 * C723) * C62) *
                        C61 * C14318 * C14366 -
                    ((C115 * C150 + C63 * C296) * C62 +
                     (C115 * C74 + C63 * C117) * C148) *
                        C61 * C14318 * C14359 -
                    ((C115 * C492 + C63 * C724) * C62 +
                     (C115 * C380 + C63 * C442) * C148) *
                        C61 * C14318 * C7608) *
                       C14286 +
                   (((C115 * C75 + C63 * C118) * C148 +
                     (C115 * C151 + C63 * C297) * C62) *
                        C61 * C14318 * C14359 -
                    ((C115 * C493 + C63 * C725) * C62 +
                     (C115 * C381 + C63 * C443) * C148) *
                        C61 * C14318 * C14366 +
                    ((C115 * C382 + C63 * C444) * C148 +
                     (C115 * C494 + C63 * C726) * C62) *
                        C61 * C14318 * C7608) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 *
                        C14318 * C14359 -
                    (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 *
                        C14318 * C14366 +
                    (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 *
                        C14318 * C7608) *
                       C14277 +
                   ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 *
                        C14318 * C14366 -
                    (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 *
                        C14318 * C14359 -
                    (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 *
                        C14318 * C7608) *
                       C14286 +
                   ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 *
                        C14318 * C14359 -
                    (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 *
                        C14318 * C14366 +
                    (C322 * C382 + C777 + C777 + C62 * C770) * C63 * C61 *
                        C14318 * C7608) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14495 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
               C14359 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14495) *
               C14366 +
           ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14495 -
            (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C14405) *
               C7608) *
              C6844 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14495) *
               C14359 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14495 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14405) *
               C14366 +
           ((C71 * C3720 + C3724 + C3724 + C61 * C3722) * C62 * C63 * C14405 -
            (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14495) *
               C7608) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C115 * C73 + C63 * C116) * C72 +
                      (C115 * C78 + C63 * C121) * C61) *
                         C62 * C14495 -
                     ((C115 * C824 + C63 * C886) * C61 +
                      (C115 * C818 + C63 * C880) * C72) *
                         C62 * C14405) *
                        C14359 +
                    (((C115 * C1920 + C63 * C1982) * C72 +
                      (C115 * C1923 + C63 * C1985) * C61) *
                         C62 * C14405 -
                     ((C115 * C383 + C63 * C445) * C61 +
                      (C115 * C377 + C63 * C439) * C72) *
                         C62 * C14495) *
                        C14366 +
                    (((C115 * C378 + C63 * C440) * C72 +
                      (C115 * C384 + C63 * C446) * C61) *
                         C62 * C14495 -
                     ((C115 * C2994 + C63 * C3044) * C61 +
                      (C115 * C2991 + C63 * C3041) * C72) *
                         C62 * C14405) *
                        C7608) *
                       C6844 +
                   ((((C115 * C820 + C63 * C882) * C72 +
                      (C115 * C826 + C63 * C888) * C61) *
                         C62 * C14405 -
                     ((C115 * C79 + C63 * C122) * C61 +
                      (C115 * C74 + C63 * C117) * C72) *
                         C62 * C14495) *
                        C14359 +
                    (((C115 * C379 + C63 * C441) * C72 +
                      (C115 * C385 + C63 * C447) * C61) *
                         C62 * C14495 -
                     ((C115 * C1924 + C63 * C1986) * C61 +
                      (C115 * C1921 + C63 * C1983) * C72) *
                         C62 * C14405) *
                        C14366 +
                    (((C115 * C3720 + C63 * C3774) * C72 +
                      (C115 * C3721 + C63 * C3775) * C61) *
                         C62 * C14405 -
                     ((C115 * C386 + C63 * C448) * C61 +
                      (C115 * C380 + C63 * C442) * C72) *
                         C62 * C14495) *
                        C7608) *
                       C14283)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C148 * C73 + C62 * C149) * C72 +
                      (C148 * C78 + C62 * C154) * C61) *
                         C63 * C14495 -
                     ((C148 * C824 + C62 * C936) * C61 +
                      (C148 * C818 + C62 * C930) * C72) *
                         C63 * C14405) *
                        C14359 +
                    (((C148 * C1920 + C62 * C2038) * C72 +
                      (C148 * C1923 + C62 * C2041) * C61) *
                         C63 * C14405 -
                     ((C148 * C383 + C62 * C495) * C61 +
                      (C148 * C377 + C62 * C489) * C72) *
                         C63 * C14495) *
                        C14366 +
                    (((C148 * C378 + C62 * C490) * C72 +
                      (C148 * C384 + C62 * C496) * C61) *
                         C63 * C14495 -
                     ((C148 * C2994 + C62 * C3088) * C61 +
                      (C148 * C2991 + C62 * C3085) * C72) *
                         C63 * C14405) *
                        C7608) *
                       C6844 +
                   ((((C148 * C820 + C62 * C932) * C72 +
                      (C148 * C826 + C62 * C938) * C61) *
                         C63 * C14405 -
                     ((C148 * C79 + C62 * C155) * C61 +
                      (C148 * C74 + C62 * C150) * C72) *
                         C63 * C14495) *
                        C14359 +
                    (((C148 * C379 + C62 * C491) * C72 +
                      (C148 * C385 + C62 * C497) * C61) *
                         C63 * C14495 -
                     ((C148 * C1924 + C62 * C2042) * C61 +
                      (C148 * C1921 + C62 * C2039) * C72) *
                         C63 * C14405) *
                        C14366 +
                    (((C148 * C3720 + C62 * C3826) * C72 +
                      (C148 * C3721 + C62 * C3827) * C61) *
                         C63 * C14405 -
                     ((C148 * C386 + C62 * C498) * C61 +
                      (C148 * C380 + C62 * C492) * C72) *
                         C63 * C14495) *
                        C7608) *
                       C14283)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C14495 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14405) *
               C14359 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14405 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C14495) *
               C14366 +
           (((C72 * C378 + C61 * C384) * C115 +
             (C72 * C440 + C61 * C540) * C63) *
                C62 * C14495 -
            ((C72 * C3041 + C61 * C3129) * C63 +
             (C72 * C2991 + C61 * C2994) * C115) *
                C62 * C14405) *
               C7608) *
              C6844 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14405 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C14495) *
               C14359 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C14495 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14405) *
               C14366 +
           (((C72 * C3720 + C61 * C3721) * C115 +
             (C72 * C3774 + C61 * C3878) * C63) *
                C62 * C14405 -
            ((C72 * C442 + C61 * C542) * C63 +
             (C72 * C380 + C61 * C386) * C115) *
                C62 * C14495) *
               C7608) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14495 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
               C14359 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14495) *
               C14366 +
           ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14495 -
            (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C14405) *
               C7608) *
              C6844 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14495) *
               C14359 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14495 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14405) *
               C14366 +
           ((C208 * C3720 + C3931 + C3931 + C63 * C3929) * C61 * C62 * C14405 -
            (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C14495) *
               C7608) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14495 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14405) *
                        C14359 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C14405 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14495) *
                        C14366 +
                    (((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14495 -
                     ((C148 * C3041 + C62 * C3214) * C63 +
                      (C148 * C2991 + C62 * C3085) * C115) *
                         C61 * C14405) *
                        C7608) *
                       C6844 +
                   ((((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14405 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14495) *
                        C14359 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14495 -
                     ((C148 * C1983 + C62 * C2204) * C63 +
                      (C148 * C1921 + C62 * C2039) * C115) *
                         C61 * C14405) *
                        C14366 +
                    (((C148 * C3720 + C62 * C3826) * C115 +
                      (C148 * C3774 + C62 * C3981) * C63) *
                         C61 * C14405 -
                     ((C148 * C442 + C62 * C636) * C63 +
                      (C148 * C380 + C62 * C492) * C115) *
                         C61 * C14495) *
                        C7608) *
                       C14283)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C14495 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14405) *
               C14359 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14405 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C14495) *
               C14366 +
           (((C72 * C378 + C61 * C384) * C148 +
             (C72 * C490 + C61 * C678) * C62) *
                C63 * C14495 -
            ((C72 * C3085 + C61 * C3255) * C62 +
             (C72 * C2991 + C61 * C2994) * C148) *
                C63 * C14405) *
               C7608) *
              C6844 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14405 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C14495) *
               C14359 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C14495 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14405) *
               C14366 +
           (((C72 * C3720 + C61 * C3721) * C148 +
             (C72 * C3826 + C61 * C4032) * C62) *
                C63 * C14405 -
            ((C72 * C492 + C61 * C680) * C62 +
             (C72 * C380 + C61 * C386) * C148) *
                C63 * C14495) *
               C7608) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14495 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14405) *
                        C14359 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C14405 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14495) *
                        C14366 +
                    (((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14495 -
                     ((C115 * C3085 + C63 * C3296) * C62 +
                      (C115 * C2991 + C63 * C3041) * C148) *
                         C61 * C14405) *
                        C7608) *
                       C6844 +
                   ((((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14405 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14495) *
                        C14359 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14495 -
                     ((C115 * C2039 + C63 * C2310) * C62 +
                      (C115 * C1921 + C63 * C1983) * C148) *
                         C61 * C14405) *
                        C14366 +
                    (((C115 * C3720 + C63 * C3774) * C148 +
                      (C115 * C3826 + C63 * C4083) * C62) *
                         C61 * C14405 -
                     ((C115 * C492 + C63 * C724) * C62 +
                      (C115 * C380 + C63 * C442) * C148) *
                         C61 * C14495) *
                        C7608) *
                       C14283)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14495 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
               C14359 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14495) *
               C14366 +
           ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14495 -
            (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C14405) *
               C7608) *
              C6844 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14495) *
               C14359 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14495 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14405) *
               C14366 +
           ((C322 * C3720 + C4136 + C4136 + C62 * C4134) * C63 * C61 * C14405 -
            (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C14495) *
               C7608) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C14562 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C14558 +
           (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 *
               C14548 -
           (C71 * C2744 + C2751 + C2751 + C61 * C2748) * C62 * C63 * C14318 *
               C14530) *
              C6844 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C14558 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C14562 -
           (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14318 *
               C14548 +
           (C71 * C3382 + C3386 + C3386 + C61 * C3384) * C62 * C63 * C14318 *
               C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C6528 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C14363) *
              C14561 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C14363 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C6528) *
              C14554 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C6528 -
           (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14318 *
               C14363) *
              C14541 +
          ((C71 * C1258 + C1262 + C1262 + C61 * C1260) * C62 * C63 * C14318 *
               C14363 -
           (C71 * C76 + C92 + C92 + C61 * C86) * C62 * C63 * C14318 * C6528) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14556 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14545 +
            (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C14523) *
               C6528 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14545 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14556 -
            (C71 * C2990 + C3000 + C3000 + C61 * C2996) * C62 * C63 * C14523) *
               C14363) *
              C6844 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14545 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14556 -
            (C71 * C821 + C840 + C840 + C61 * C833) * C62 * C63 * C14523) *
               C6528 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14556 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14545 +
            (C71 * C5430 + C5434 + C5434 + C61 * C5432) * C62 * C63 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C14562 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C14558 +
           ((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14318 * C14548 -
           ((C115 * C2746 + C63 * C2776) * C61 +
            (C115 * C2744 + C63 * C2774) * C72) *
               C62 * C14318 * C14530) *
              C6844 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C14558 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C14562 -
           ((C115 * C386 + C63 * C448) * C61 +
            (C115 * C380 + C63 * C442) * C72) *
               C62 * C14318 * C14548 +
           ((C115 * C3382 + C63 * C3420) * C72 +
            (C115 * C3383 + C63 * C3421) * C61) *
               C62 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C6528 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C14363) *
              C14561 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C14363 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C6528) *
              C14554 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14318 * C6528 -
           ((C115 * C387 + C63 * C449) * C61 +
            (C115 * C381 + C63 * C443) * C72) *
               C62 * C14318 * C14363) *
              C14541 +
          (((C115 * C1258 + C63 * C1296) * C72 +
            (C115 * C1259 + C63 * C1297) * C61) *
               C62 * C14318 * C14363 -
           ((C115 * C81 + C63 * C124) * C61 + (C115 * C76 + C63 * C119) * C72) *
               C62 * C14318 * C6528) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C115 * C73 + C63 * C116) * C72 +
             (C115 * C78 + C63 * C121) * C61) *
                C62 * C14556 -
            ((C115 * C824 + C63 * C886) * C61 +
             (C115 * C818 + C63 * C880) * C72) *
                C62 * C14545 +
            ((C115 * C819 + C63 * C881) * C72 +
             (C115 * C825 + C63 * C887) * C61) *
                C62 * C14523) *
               C6528 +
           (((C115 * C1920 + C63 * C1982) * C72 +
             (C115 * C1923 + C63 * C1985) * C61) *
                C62 * C14545 -
            ((C115 * C383 + C63 * C445) * C61 +
             (C115 * C377 + C63 * C439) * C72) *
                C62 * C14556 -
            ((C115 * C2993 + C63 * C3043) * C61 +
             (C115 * C2990 + C63 * C3040) * C72) *
                C62 * C14523) *
               C14363) *
              C6844 +
          ((((C115 * C820 + C63 * C882) * C72 +
             (C115 * C826 + C63 * C888) * C61) *
                C62 * C14545 -
            ((C115 * C79 + C63 * C122) * C61 +
             (C115 * C74 + C63 * C117) * C72) *
                C62 * C14556 -
            ((C115 * C827 + C63 * C889) * C61 +
             (C115 * C821 + C63 * C883) * C72) *
                C62 * C14523) *
               C6528 +
           (((C115 * C379 + C63 * C441) * C72 +
             (C115 * C385 + C63 * C447) * C61) *
                C62 * C14556 -
            ((C115 * C1924 + C63 * C1986) * C61 +
             (C115 * C1921 + C63 * C1983) * C72) *
                C62 * C14545 +
            ((C115 * C5430 + C63 * C5484) * C72 +
             (C115 * C5431 + C63 * C5485) * C61) *
                C62 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C14562 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C14558 +
           ((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14318 * C14548 -
           ((C148 * C2746 + C62 * C2802) * C61 +
            (C148 * C2744 + C62 * C2800) * C72) *
               C63 * C14318 * C14530) *
              C6844 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C14558 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C14562 -
           ((C148 * C386 + C62 * C498) * C61 +
            (C148 * C380 + C62 * C492) * C72) *
               C63 * C14318 * C14548 +
           ((C148 * C3382 + C62 * C3456) * C72 +
            (C148 * C3383 + C62 * C3457) * C61) *
               C63 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C6528 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C14363) *
              C14561 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C14363 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C6528) *
              C14554 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14318 * C6528 -
           ((C148 * C387 + C62 * C499) * C61 +
            (C148 * C381 + C62 * C493) * C72) *
               C63 * C14318 * C14363) *
              C14541 +
          (((C148 * C1258 + C62 * C1332) * C72 +
            (C148 * C1259 + C62 * C1333) * C61) *
               C63 * C14318 * C14363 -
           ((C148 * C81 + C62 * C157) * C61 + (C148 * C76 + C62 * C152) * C72) *
               C63 * C14318 * C6528) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C148 * C73 + C62 * C149) * C72 +
             (C148 * C78 + C62 * C154) * C61) *
                C63 * C14556 -
            ((C148 * C824 + C62 * C936) * C61 +
             (C148 * C818 + C62 * C930) * C72) *
                C63 * C14545 +
            ((C148 * C819 + C62 * C931) * C72 +
             (C148 * C825 + C62 * C937) * C61) *
                C63 * C14523) *
               C6528 +
           (((C148 * C1920 + C62 * C2038) * C72 +
             (C148 * C1923 + C62 * C2041) * C61) *
                C63 * C14545 -
            ((C148 * C383 + C62 * C495) * C61 +
             (C148 * C377 + C62 * C489) * C72) *
                C63 * C14556 -
            ((C148 * C2993 + C62 * C3087) * C61 +
             (C148 * C2990 + C62 * C3084) * C72) *
                C63 * C14523) *
               C14363) *
              C6844 +
          ((((C148 * C820 + C62 * C932) * C72 +
             (C148 * C826 + C62 * C938) * C61) *
                C63 * C14545 -
            ((C148 * C79 + C62 * C155) * C61 +
             (C148 * C74 + C62 * C150) * C72) *
                C63 * C14556 -
            ((C148 * C827 + C62 * C939) * C61 +
             (C148 * C821 + C62 * C933) * C72) *
                C63 * C14523) *
               C6528 +
           (((C148 * C379 + C62 * C491) * C72 +
             (C148 * C385 + C62 * C497) * C61) *
                C63 * C14556 -
            ((C148 * C1924 + C62 * C2042) * C61 +
             (C148 * C1921 + C62 * C2039) * C72) *
                C63 * C14545 +
            ((C148 * C5430 + C62 * C5536) * C72 +
             (C148 * C5431 + C62 * C5537) * C61) *
                C63 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C14562 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C14558 +
           ((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14318 * C14548 -
           ((C72 * C2774 + C61 * C2826) * C63 +
            (C72 * C2744 + C61 * C2746) * C115) *
               C62 * C14318 * C14530) *
              C6844 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C14558 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C14562 -
           ((C72 * C442 + C61 * C542) * C63 +
            (C72 * C380 + C61 * C386) * C115) *
               C62 * C14318 * C14548 +
           ((C72 * C3382 + C61 * C3383) * C115 +
            (C72 * C3420 + C61 * C3492) * C63) *
               C62 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C6528 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C14363) *
              C14561 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C14363 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C6528) *
              C14554 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14318 * C6528 -
           ((C72 * C443 + C61 * C543) * C63 +
            (C72 * C381 + C61 * C387) * C115) *
               C62 * C14318 * C14363) *
              C14541 +
          (((C72 * C1258 + C61 * C1259) * C115 +
            (C72 * C1296 + C61 * C1368) * C63) *
               C62 * C14318 * C14363 -
           ((C72 * C119 + C61 * C184) * C63 + (C72 * C76 + C61 * C81) * C115) *
               C62 * C14318 * C6528) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C14556 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14545 +
            ((C72 * C819 + C61 * C825) * C115 +
             (C72 * C881 + C61 * C981) * C63) *
                C62 * C14523) *
               C6528 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14545 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C14556 -
            ((C72 * C3040 + C61 * C3128) * C63 +
             (C72 * C2990 + C61 * C2993) * C115) *
                C62 * C14523) *
               C14363) *
              C6844 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14545 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C14556 -
            ((C72 * C883 + C61 * C983) * C63 +
             (C72 * C821 + C61 * C827) * C115) *
                C62 * C14523) *
               C6528 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C14556 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14545 +
            ((C72 * C5430 + C61 * C5431) * C115 +
             (C72 * C5484 + C61 * C5588) * C63) *
                C62 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
               C14562 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
               C14558 +
           (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
               C14548 -
           (C208 * C2744 + C2853 + C2853 + C63 * C2850) * C61 * C62 * C14318 *
               C14530) *
              C6844 +
          ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14318 *
               C14558 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
               C14562 -
           (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C14318 *
               C14548 +
           (C208 * C3382 + C3529 + C3529 + C63 * C3527) * C61 * C62 * C14318 *
               C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
               C6528 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
               C14363) *
              C14561 +
          ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14318 *
               C14363 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
               C6528) *
              C14554 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
               C6528 -
           (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C14318 *
               C14363) *
              C14541 +
          ((C208 * C1258 + C1405 + C1405 + C63 * C1403) * C61 * C62 * C14318 *
               C14363 -
           (C208 * C76 + C218 + C218 + C63 * C212) * C61 * C62 * C14318 *
               C6528) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14556 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14545 +
            (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C14523) *
               C6528 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14545 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14556 -
            (C208 * C2990 + C3173 + C3173 + C63 * C3169) * C61 * C62 * C14523) *
               C14363) *
              C6844 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14545 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14556 -
            (C208 * C821 + C1034 + C1034 + C63 * C1027) * C61 * C62 * C14523) *
               C6528 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14556 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14545 +
            (C208 * C5430 + C5641 + C5641 + C63 * C5639) * C61 * C62 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14318 * C14562 -
                    ((C148 * C439 + C62 * C633) * C63 +
                     (C148 * C377 + C62 * C489) * C115) *
                        C61 * C14318 * C14558 +
                    ((C148 * C378 + C62 * C490) * C115 +
                     (C148 * C440 + C62 * C634) * C63) *
                        C61 * C14318 * C14548 -
                    ((C148 * C2774 + C62 * C2876) * C63 +
                     (C148 * C2744 + C62 * C2800) * C115) *
                        C61 * C14318 * C14530) *
                       C6844 +
                   (((C148 * C379 + C62 * C491) * C115 +
                     (C148 * C441 + C62 * C635) * C63) *
                        C61 * C14318 * C14558 -
                    ((C148 * C117 + C62 * C242) * C63 +
                     (C148 * C74 + C62 * C150) * C115) *
                        C61 * C14318 * C14562 -
                    ((C148 * C442 + C62 * C636) * C63 +
                     (C148 * C380 + C62 * C492) * C115) *
                        C61 * C14318 * C14548 +
                    ((C148 * C3382 + C62 * C3456) * C115 +
                     (C148 * C3420 + C62 * C3563) * C63) *
                        C61 * C14318 * C14530) *
                       C14283)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14318 * C6528 -
                    ((C148 * C439 + C62 * C633) * C63 +
                     (C148 * C377 + C62 * C489) * C115) *
                        C61 * C14318 * C14363) *
                       C14561 +
                   (((C148 * C379 + C62 * C491) * C115 +
                     (C148 * C441 + C62 * C635) * C63) *
                        C61 * C14318 * C14363 -
                    ((C148 * C117 + C62 * C242) * C63 +
                     (C148 * C74 + C62 * C150) * C115) *
                        C61 * C14318 * C6528) *
                       C14554 +
                   (((C148 * C75 + C62 * C151) * C115 +
                     (C148 * C118 + C62 * C243) * C63) *
                        C61 * C14318 * C6528 -
                    ((C148 * C443 + C62 * C637) * C63 +
                     (C148 * C381 + C62 * C493) * C115) *
                        C61 * C14318 * C14363) *
                       C14541 +
                   (((C148 * C1258 + C62 * C1332) * C115 +
                     (C148 * C1296 + C62 * C1439) * C63) *
                        C61 * C14318 * C14363 -
                    ((C148 * C119 + C62 * C244) * C63 +
                     (C148 * C76 + C62 * C152) * C115) *
                        C61 * C14318 * C6528) *
                       C14524)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14556 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14545 +
                     ((C148 * C819 + C62 * C931) * C115 +
                      (C148 * C881 + C62 * C1075) * C63) *
                         C61 * C14523) *
                        C6528 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C14545 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14556 -
                     ((C148 * C3040 + C62 * C3213) * C63 +
                      (C148 * C2990 + C62 * C3084) * C115) *
                         C61 * C14523) *
                        C14363) *
                       C6844 +
                   ((((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14545 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14556 -
                     ((C148 * C883 + C62 * C1077) * C63 +
                      (C148 * C821 + C62 * C933) * C115) *
                         C61 * C14523) *
                        C6528 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14556 -
                     ((C148 * C1983 + C62 * C2204) * C63 +
                      (C148 * C1921 + C62 * C2039) * C115) *
                         C61 * C14545 +
                     ((C148 * C5430 + C62 * C5536) * C115 +
                      (C148 * C5484 + C62 * C5691) * C63) *
                         C61 * C14523) *
                        C14363) *
                       C14283)) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C14562 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C14558 +
           ((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14318 * C14548 -
           ((C72 * C2800 + C61 * C2900) * C62 +
            (C72 * C2744 + C61 * C2746) * C148) *
               C63 * C14318 * C14530) *
              C6844 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C14558 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C14562 -
           ((C72 * C492 + C61 * C680) * C62 +
            (C72 * C380 + C61 * C386) * C148) *
               C63 * C14318 * C14548 +
           ((C72 * C3382 + C61 * C3383) * C148 +
            (C72 * C3456 + C61 * C3598) * C62) *
               C63 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C6528 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C14363) *
              C14561 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C14363 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C6528) *
              C14554 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14318 * C6528 -
           ((C72 * C493 + C61 * C681) * C62 +
            (C72 * C381 + C61 * C387) * C148) *
               C63 * C14318 * C14363) *
              C14541 +
          (((C72 * C1258 + C61 * C1259) * C148 +
            (C72 * C1332 + C61 * C1474) * C62) *
               C63 * C14318 * C14363 -
           ((C72 * C152 + C61 * C271) * C62 + (C72 * C76 + C61 * C81) * C148) *
               C63 * C14318 * C6528) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C14556 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14545 +
            ((C72 * C819 + C61 * C825) * C148 +
             (C72 * C931 + C61 * C1119) * C62) *
                C63 * C14523) *
               C6528 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14545 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C14556 -
            ((C72 * C3084 + C61 * C3254) * C62 +
             (C72 * C2990 + C61 * C2993) * C148) *
                C63 * C14523) *
               C14363) *
              C6844 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14545 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C14556 -
            ((C72 * C933 + C61 * C1121) * C62 +
             (C72 * C821 + C61 * C827) * C148) *
                C63 * C14523) *
               C6528 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C14556 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14545 +
            ((C72 * C5430 + C61 * C5431) * C148 +
             (C72 * C5536 + C61 * C5742) * C62) *
                C63 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14318 * C14562 -
                    ((C115 * C489 + C63 * C721) * C62 +
                     (C115 * C377 + C63 * C439) * C148) *
                        C61 * C14318 * C14558 +
                    ((C115 * C378 + C63 * C440) * C148 +
                     (C115 * C490 + C63 * C722) * C62) *
                        C61 * C14318 * C14548 -
                    ((C115 * C2800 + C63 * C2924) * C62 +
                     (C115 * C2744 + C63 * C2774) * C148) *
                        C61 * C14318 * C14530) *
                       C6844 +
                   (((C115 * C379 + C63 * C441) * C148 +
                     (C115 * C491 + C63 * C723) * C62) *
                        C61 * C14318 * C14558 -
                    ((C115 * C150 + C63 * C296) * C62 +
                     (C115 * C74 + C63 * C117) * C148) *
                        C61 * C14318 * C14562 -
                    ((C115 * C492 + C63 * C724) * C62 +
                     (C115 * C380 + C63 * C442) * C148) *
                        C61 * C14318 * C14548 +
                    ((C115 * C3382 + C63 * C3420) * C148 +
                     (C115 * C3456 + C63 * C3633) * C62) *
                        C61 * C14318 * C14530) *
                       C14283)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14318 * C6528 -
                    ((C115 * C489 + C63 * C721) * C62 +
                     (C115 * C377 + C63 * C439) * C148) *
                        C61 * C14318 * C14363) *
                       C14561 +
                   (((C115 * C379 + C63 * C441) * C148 +
                     (C115 * C491 + C63 * C723) * C62) *
                        C61 * C14318 * C14363 -
                    ((C115 * C150 + C63 * C296) * C62 +
                     (C115 * C74 + C63 * C117) * C148) *
                        C61 * C14318 * C6528) *
                       C14554 +
                   (((C115 * C75 + C63 * C118) * C148 +
                     (C115 * C151 + C63 * C297) * C62) *
                        C61 * C14318 * C6528 -
                    ((C115 * C493 + C63 * C725) * C62 +
                     (C115 * C381 + C63 * C443) * C148) *
                        C61 * C14318 * C14363) *
                       C14541 +
                   (((C115 * C1258 + C63 * C1296) * C148 +
                     (C115 * C1332 + C63 * C1509) * C62) *
                        C61 * C14318 * C14363 -
                    ((C115 * C152 + C63 * C298) * C62 +
                     (C115 * C76 + C63 * C119) * C148) *
                        C61 * C14318 * C6528) *
                       C14524)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14556 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14545 +
                     ((C115 * C819 + C63 * C881) * C148 +
                      (C115 * C931 + C63 * C1163) * C62) *
                         C61 * C14523) *
                        C6528 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C14545 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14556 -
                     ((C115 * C3084 + C63 * C3295) * C62 +
                      (C115 * C2990 + C63 * C3040) * C148) *
                         C61 * C14523) *
                        C14363) *
                       C6844 +
                   ((((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14545 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14556 -
                     ((C115 * C933 + C63 * C1165) * C62 +
                      (C115 * C821 + C63 * C883) * C148) *
                         C61 * C14523) *
                        C6528 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14556 -
                     ((C115 * C2039 + C63 * C2310) * C62 +
                      (C115 * C1921 + C63 * C1983) * C148) *
                         C61 * C14545 +
                     ((C115 * C5430 + C63 * C5484) * C148 +
                      (C115 * C5536 + C63 * C5793) * C62) *
                         C61 * C14523) *
                        C14363) *
                       C14283)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
               C14562 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
               C14558 +
           (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
               C14548 -
           (C322 * C2744 + C2951 + C2951 + C62 * C2948) * C63 * C61 * C14318 *
               C14530) *
              C6844 +
          ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14318 *
               C14558 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
               C14562 -
           (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C14318 *
               C14548 +
           (C322 * C3382 + C3670 + C3670 + C62 * C3668) * C63 * C61 * C14318 *
               C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
               C6528 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
               C14363) *
              C14561 +
          ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14318 *
               C14363 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
               C6528) *
              C14554 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
               C6528 -
           (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C14318 *
               C14363) *
              C14541 +
          ((C322 * C1258 + C1546 + C1546 + C62 * C1544) * C63 * C61 * C14318 *
               C14363 -
           (C322 * C76 + C332 + C332 + C62 * C326) * C63 * C61 * C14318 *
               C6528) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14556 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14545 +
            (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C14523) *
               C6528 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14545 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14556 -
            (C322 * C2990 + C3340 + C3340 + C62 * C3336) * C63 * C61 * C14523) *
               C14363) *
              C6844 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14545 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14556 -
            (C322 * C821 + C1216 + C1216 + C62 * C1209) * C63 * C61 * C14523) *
               C6528 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14556 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14545 +
            (C322 * C5430 + C5846 + C5846 + C62 * C5844) * C63 * C61 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14495 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
               C6528 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14495) *
               C14363) *
              C14277 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14495) *
               C6528 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14495 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14405) *
               C14363) *
              C14286 +
          (((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14495 -
            (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C14405) *
               C6528 +
           ((C71 * C1922 + C1932 + C1932 + C61 * C1928) * C62 * C63 * C14405 -
            (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14495) *
               C14363) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C115 * C73 + C63 * C116) * C72 +
                      (C115 * C78 + C63 * C121) * C61) *
                         C62 * C14495 -
                     ((C115 * C824 + C63 * C886) * C61 +
                      (C115 * C818 + C63 * C880) * C72) *
                         C62 * C14405) *
                        C6528 +
                    (((C115 * C1920 + C63 * C1982) * C72 +
                      (C115 * C1923 + C63 * C1985) * C61) *
                         C62 * C14405 -
                     ((C115 * C383 + C63 * C445) * C61 +
                      (C115 * C377 + C63 * C439) * C72) *
                         C62 * C14495) *
                        C14363) *
                       C14277 +
                   ((((C115 * C820 + C63 * C882) * C72 +
                      (C115 * C826 + C63 * C888) * C61) *
                         C62 * C14405 -
                     ((C115 * C79 + C63 * C122) * C61 +
                      (C115 * C74 + C63 * C117) * C72) *
                         C62 * C14495) *
                        C6528 +
                    (((C115 * C379 + C63 * C441) * C72 +
                      (C115 * C385 + C63 * C447) * C61) *
                         C62 * C14495 -
                     ((C115 * C1924 + C63 * C1986) * C61 +
                      (C115 * C1921 + C63 * C1983) * C72) *
                         C62 * C14405) *
                        C14363) *
                       C14286 +
                   ((((C115 * C75 + C63 * C118) * C72 +
                      (C115 * C80 + C63 * C123) * C61) *
                         C62 * C14495 -
                     ((C115 * C828 + C63 * C890) * C61 +
                      (C115 * C822 + C63 * C884) * C72) *
                         C62 * C14405) *
                        C6528 +
                    (((C115 * C1922 + C63 * C1984) * C72 +
                      (C115 * C1925 + C63 * C1987) * C61) *
                         C62 * C14405 -
                     ((C115 * C387 + C63 * C449) * C61 +
                      (C115 * C381 + C63 * C443) * C72) *
                         C62 * C14495) *
                        C14363) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C148 * C73 + C62 * C149) * C72 +
                      (C148 * C78 + C62 * C154) * C61) *
                         C63 * C14495 -
                     ((C148 * C824 + C62 * C936) * C61 +
                      (C148 * C818 + C62 * C930) * C72) *
                         C63 * C14405) *
                        C6528 +
                    (((C148 * C1920 + C62 * C2038) * C72 +
                      (C148 * C1923 + C62 * C2041) * C61) *
                         C63 * C14405 -
                     ((C148 * C383 + C62 * C495) * C61 +
                      (C148 * C377 + C62 * C489) * C72) *
                         C63 * C14495) *
                        C14363) *
                       C14277 +
                   ((((C148 * C820 + C62 * C932) * C72 +
                      (C148 * C826 + C62 * C938) * C61) *
                         C63 * C14405 -
                     ((C148 * C79 + C62 * C155) * C61 +
                      (C148 * C74 + C62 * C150) * C72) *
                         C63 * C14495) *
                        C6528 +
                    (((C148 * C379 + C62 * C491) * C72 +
                      (C148 * C385 + C62 * C497) * C61) *
                         C63 * C14495 -
                     ((C148 * C1924 + C62 * C2042) * C61 +
                      (C148 * C1921 + C62 * C2039) * C72) *
                         C63 * C14405) *
                        C14363) *
                       C14286 +
                   ((((C148 * C75 + C62 * C151) * C72 +
                      (C148 * C80 + C62 * C156) * C61) *
                         C63 * C14495 -
                     ((C148 * C828 + C62 * C940) * C61 +
                      (C148 * C822 + C62 * C934) * C72) *
                         C63 * C14405) *
                        C6528 +
                    (((C148 * C1922 + C62 * C2040) * C72 +
                      (C148 * C1925 + C62 * C2043) * C61) *
                         C63 * C14405 -
                     ((C148 * C387 + C62 * C499) * C61 +
                      (C148 * C381 + C62 * C493) * C72) *
                         C63 * C14495) *
                        C14363) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C14495 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14405) *
               C6528 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14405 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C14495) *
               C14363) *
              C14277 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14405 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C14495) *
               C6528 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C14495 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14405) *
               C14363) *
              C14286 +
          ((((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
                C62 * C14495 -
            ((C72 * C884 + C61 * C984) * C63 +
             (C72 * C822 + C61 * C828) * C115) *
                C62 * C14405) *
               C6528 +
           (((C72 * C1922 + C61 * C1925) * C115 +
             (C72 * C1984 + C61 * C2096) * C63) *
                C62 * C14405 -
            ((C72 * C443 + C61 * C543) * C63 +
             (C72 * C381 + C61 * C387) * C115) *
                C62 * C14495) *
               C14363) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14495 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
               C6528 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14495) *
               C14363) *
              C14277 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14495) *
               C6528 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14495 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14405) *
               C14363) *
              C14286 +
          (((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14495 -
            (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C14405) *
               C6528 +
           ((C208 * C1922 + C2153 + C2153 + C63 * C2149) * C61 * C62 * C14405 -
            (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C14495) *
               C14363) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14495 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14405) *
                        C6528 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C14405 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14495) *
                        C14363) *
                       C14277 +
                   ((((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14405 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14495) *
                        C6528 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14495 -
                     ((C148 * C1983 + C62 * C2204) * C63 +
                      (C148 * C1921 + C62 * C2039) * C115) *
                         C61 * C14405) *
                        C14363) *
                       C14286 +
                   ((((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14495 -
                     ((C148 * C884 + C62 * C1078) * C63 +
                      (C148 * C822 + C62 * C934) * C115) *
                         C61 * C14405) *
                        C6528 +
                    (((C148 * C1922 + C62 * C2040) * C115 +
                      (C148 * C1984 + C62 * C2205) * C63) *
                         C61 * C14405 -
                     ((C148 * C443 + C62 * C637) * C63 +
                      (C148 * C381 + C62 * C493) * C115) *
                         C61 * C14495) *
                        C14363) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C14495 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14405) *
               C6528 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14405 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C14495) *
               C14363) *
              C14277 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14405 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C14495) *
               C6528 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C14495 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14405) *
               C14363) *
              C14286 +
          ((((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
                C63 * C14495 -
            ((C72 * C934 + C61 * C1122) * C62 +
             (C72 * C822 + C61 * C828) * C148) *
                C63 * C14405) *
               C6528 +
           (((C72 * C1922 + C61 * C1925) * C148 +
             (C72 * C2040 + C61 * C2258) * C62) *
                C63 * C14405 -
            ((C72 * C493 + C61 * C681) * C62 +
             (C72 * C381 + C61 * C387) * C148) *
                C63 * C14495) *
               C14363) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14495 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14405) *
                        C6528 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C14405 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14495) *
                        C14363) *
                       C14277 +
                   ((((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14405 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14495) *
                        C6528 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14495 -
                     ((C115 * C2039 + C63 * C2310) * C62 +
                      (C115 * C1921 + C63 * C1983) * C148) *
                         C61 * C14405) *
                        C14363) *
                       C14286 +
                   ((((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14495 -
                     ((C115 * C934 + C63 * C1166) * C62 +
                      (C115 * C822 + C63 * C884) * C148) *
                         C61 * C14405) *
                        C6528 +
                    (((C115 * C1922 + C63 * C1984) * C148 +
                      (C115 * C2040 + C63 * C2311) * C62) *
                         C61 * C14405 -
                     ((C115 * C493 + C63 * C725) * C62 +
                      (C115 * C381 + C63 * C443) * C148) *
                         C61 * C14495) *
                        C14363) *
                       C7611)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14495 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
               C6528 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14495) *
               C14363) *
              C14277 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14495) *
               C6528 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14495 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14405) *
               C14363) *
              C14286 +
          (((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14495 -
            (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C14405) *
               C6528 +
           ((C322 * C1922 + C2368 + C2368 + C62 * C2364) * C63 * C61 * C14405 -
            (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C14495) *
               C14363) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C6528 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C14363) *
              C14561 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C14363 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C6528) *
              C14554 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C6528 -
           (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14318 *
               C14363) *
              C14541 +
          ((C71 * C1258 + C1262 + C1262 + C61 * C1260) * C62 * C63 * C14318 *
               C14363 -
           (C71 * C76 + C92 + C92 + C61 * C86) * C62 * C63 * C14318 * C6528) *
              C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C14562 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C14558 +
           (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 *
               C14548 -
           (C71 * C2744 + C2751 + C2751 + C61 * C2748) * C62 * C63 * C14318 *
               C14530) *
              C6844 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C14558 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C14562 -
           (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14318 *
               C14548 +
           (C71 * C3382 + C3386 + C3386 + C61 * C3384) * C62 * C63 * C14318 *
               C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C6528 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C14363) *
              C14561 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C14363 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C6528) *
              C14554 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14318 * C6528 -
           ((C115 * C387 + C63 * C449) * C61 +
            (C115 * C381 + C63 * C443) * C72) *
               C62 * C14318 * C14363) *
              C14541 +
          (((C115 * C1258 + C63 * C1296) * C72 +
            (C115 * C1259 + C63 * C1297) * C61) *
               C62 * C14318 * C14363 -
           ((C115 * C81 + C63 * C124) * C61 + (C115 * C76 + C63 * C119) * C72) *
               C62 * C14318 * C6528) *
              C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C14562 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C14558 +
           ((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14318 * C14548 -
           ((C115 * C2746 + C63 * C2776) * C61 +
            (C115 * C2744 + C63 * C2774) * C72) *
               C62 * C14318 * C14530) *
              C6844 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C14558 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C14562 -
           ((C115 * C386 + C63 * C448) * C61 +
            (C115 * C380 + C63 * C442) * C72) *
               C62 * C14318 * C14548 +
           ((C115 * C3382 + C63 * C3420) * C72 +
            (C115 * C3383 + C63 * C3421) * C61) *
               C62 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C6528 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C14363) *
              C14561 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C14363 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C6528) *
              C14554 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14318 * C6528 -
           ((C148 * C387 + C62 * C499) * C61 +
            (C148 * C381 + C62 * C493) * C72) *
               C63 * C14318 * C14363) *
              C14541 +
          (((C148 * C1258 + C62 * C1332) * C72 +
            (C148 * C1259 + C62 * C1333) * C61) *
               C63 * C14318 * C14363 -
           ((C148 * C81 + C62 * C157) * C61 + (C148 * C76 + C62 * C152) * C72) *
               C63 * C14318 * C6528) *
              C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C14562 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C14558 +
           ((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14318 * C14548 -
           ((C148 * C2746 + C62 * C2802) * C61 +
            (C148 * C2744 + C62 * C2800) * C72) *
               C63 * C14318 * C14530) *
              C6844 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C14558 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C14562 -
           ((C148 * C386 + C62 * C498) * C61 +
            (C148 * C380 + C62 * C492) * C72) *
               C63 * C14318 * C14548 +
           ((C148 * C3382 + C62 * C3456) * C72 +
            (C148 * C3383 + C62 * C3457) * C61) *
               C63 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C6528 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C14363) *
              C14561 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C14363 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C6528) *
              C14554 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14318 * C6528 -
           ((C72 * C443 + C61 * C543) * C63 +
            (C72 * C381 + C61 * C387) * C115) *
               C62 * C14318 * C14363) *
              C14541 +
          (((C72 * C1258 + C61 * C1259) * C115 +
            (C72 * C1296 + C61 * C1368) * C63) *
               C62 * C14318 * C14363 -
           ((C72 * C119 + C61 * C184) * C63 + (C72 * C76 + C61 * C81) * C115) *
               C62 * C14318 * C6528) *
              C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C14562 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C14558 +
           ((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14318 * C14548 -
           ((C72 * C2774 + C61 * C2826) * C63 +
            (C72 * C2744 + C61 * C2746) * C115) *
               C62 * C14318 * C14530) *
              C6844 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C14558 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C14562 -
           ((C72 * C442 + C61 * C542) * C63 +
            (C72 * C380 + C61 * C386) * C115) *
               C62 * C14318 * C14548 +
           ((C72 * C3382 + C61 * C3383) * C115 +
            (C72 * C3420 + C61 * C3492) * C63) *
               C62 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 *
                        C14318 * C6528 -
                    (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 *
                        C14318 * C14363) *
                       C14561 +
                   ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 *
                        C14318 * C14363 -
                    (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 *
                        C14318 * C6528) *
                       C14554 +
                   ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 *
                        C14318 * C6528 -
                    (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 *
                        C14318 * C14363) *
                       C14541 +
                   ((C208 * C1258 + C1405 + C1405 + C63 * C1403) * C61 * C62 *
                        C14318 * C14363 -
                    (C208 * C76 + C218 + C218 + C63 * C212) * C61 * C62 *
                        C14318 * C6528) *
                       C14524)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 *
                        C14318 * C14562 -
                    (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 *
                        C14318 * C14558 +
                    (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 *
                        C14318 * C14548 -
                    (C208 * C2744 + C2853 + C2853 + C63 * C2850) * C61 * C62 *
                        C14318 * C14530) *
                       C6844 +
                   ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 *
                        C14318 * C14558 -
                    (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 *
                        C14318 * C14562 -
                    (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 *
                        C14318 * C14548 +
                    (C208 * C3382 + C3529 + C3529 + C63 * C3527) * C61 * C62 *
                        C14318 * C14530) *
                       C14283)) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14318 * C6528 -
                    ((C148 * C439 + C62 * C633) * C63 +
                     (C148 * C377 + C62 * C489) * C115) *
                        C61 * C14318 * C14363) *
                       C14561 +
                   (((C148 * C379 + C62 * C491) * C115 +
                     (C148 * C441 + C62 * C635) * C63) *
                        C61 * C14318 * C14363 -
                    ((C148 * C117 + C62 * C242) * C63 +
                     (C148 * C74 + C62 * C150) * C115) *
                        C61 * C14318 * C6528) *
                       C14554 +
                   (((C148 * C75 + C62 * C151) * C115 +
                     (C148 * C118 + C62 * C243) * C63) *
                        C61 * C14318 * C6528 -
                    ((C148 * C443 + C62 * C637) * C63 +
                     (C148 * C381 + C62 * C493) * C115) *
                        C61 * C14318 * C14363) *
                       C14541 +
                   (((C148 * C1258 + C62 * C1332) * C115 +
                     (C148 * C1296 + C62 * C1439) * C63) *
                        C61 * C14318 * C14363 -
                    ((C148 * C119 + C62 * C244) * C63 +
                     (C148 * C76 + C62 * C152) * C115) *
                        C61 * C14318 * C6528) *
                       C14524)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14318 * C14562 -
                    ((C148 * C439 + C62 * C633) * C63 +
                     (C148 * C377 + C62 * C489) * C115) *
                        C61 * C14318 * C14558 +
                    ((C148 * C378 + C62 * C490) * C115 +
                     (C148 * C440 + C62 * C634) * C63) *
                        C61 * C14318 * C14548 -
                    ((C148 * C2774 + C62 * C2876) * C63 +
                     (C148 * C2744 + C62 * C2800) * C115) *
                        C61 * C14318 * C14530) *
                       C6844 +
                   (((C148 * C379 + C62 * C491) * C115 +
                     (C148 * C441 + C62 * C635) * C63) *
                        C61 * C14318 * C14558 -
                    ((C148 * C117 + C62 * C242) * C63 +
                     (C148 * C74 + C62 * C150) * C115) *
                        C61 * C14318 * C14562 -
                    ((C148 * C442 + C62 * C636) * C63 +
                     (C148 * C380 + C62 * C492) * C115) *
                        C61 * C14318 * C14548 +
                    ((C148 * C3382 + C62 * C3456) * C115 +
                     (C148 * C3420 + C62 * C3563) * C63) *
                        C61 * C14318 * C14530) *
                       C14283)) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C6528 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C14363) *
              C14561 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C14363 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C6528) *
              C14554 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14318 * C6528 -
           ((C72 * C493 + C61 * C681) * C62 +
            (C72 * C381 + C61 * C387) * C148) *
               C63 * C14318 * C14363) *
              C14541 +
          (((C72 * C1258 + C61 * C1259) * C148 +
            (C72 * C1332 + C61 * C1474) * C62) *
               C63 * C14318 * C14363 -
           ((C72 * C152 + C61 * C271) * C62 + (C72 * C76 + C61 * C81) * C148) *
               C63 * C14318 * C6528) *
              C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C14562 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C14558 +
           ((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14318 * C14548 -
           ((C72 * C2800 + C61 * C2900) * C62 +
            (C72 * C2744 + C61 * C2746) * C148) *
               C63 * C14318 * C14530) *
              C6844 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C14558 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C14562 -
           ((C72 * C492 + C61 * C680) * C62 +
            (C72 * C380 + C61 * C386) * C148) *
               C63 * C14318 * C14548 +
           ((C72 * C3382 + C61 * C3383) * C148 +
            (C72 * C3456 + C61 * C3598) * C62) *
               C63 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14318 * C6528 -
                    ((C115 * C489 + C63 * C721) * C62 +
                     (C115 * C377 + C63 * C439) * C148) *
                        C61 * C14318 * C14363) *
                       C14561 +
                   (((C115 * C379 + C63 * C441) * C148 +
                     (C115 * C491 + C63 * C723) * C62) *
                        C61 * C14318 * C14363 -
                    ((C115 * C150 + C63 * C296) * C62 +
                     (C115 * C74 + C63 * C117) * C148) *
                        C61 * C14318 * C6528) *
                       C14554 +
                   (((C115 * C75 + C63 * C118) * C148 +
                     (C115 * C151 + C63 * C297) * C62) *
                        C61 * C14318 * C6528 -
                    ((C115 * C493 + C63 * C725) * C62 +
                     (C115 * C381 + C63 * C443) * C148) *
                        C61 * C14318 * C14363) *
                       C14541 +
                   (((C115 * C1258 + C63 * C1296) * C148 +
                     (C115 * C1332 + C63 * C1509) * C62) *
                        C61 * C14318 * C14363 -
                    ((C115 * C152 + C63 * C298) * C62 +
                     (C115 * C76 + C63 * C119) * C148) *
                        C61 * C14318 * C6528) *
                       C14524)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14318 * C14562 -
                    ((C115 * C489 + C63 * C721) * C62 +
                     (C115 * C377 + C63 * C439) * C148) *
                        C61 * C14318 * C14558 +
                    ((C115 * C378 + C63 * C440) * C148 +
                     (C115 * C490 + C63 * C722) * C62) *
                        C61 * C14318 * C14548 -
                    ((C115 * C2800 + C63 * C2924) * C62 +
                     (C115 * C2744 + C63 * C2774) * C148) *
                        C61 * C14318 * C14530) *
                       C6844 +
                   (((C115 * C379 + C63 * C441) * C148 +
                     (C115 * C491 + C63 * C723) * C62) *
                        C61 * C14318 * C14558 -
                    ((C115 * C150 + C63 * C296) * C62 +
                     (C115 * C74 + C63 * C117) * C148) *
                        C61 * C14318 * C14562 -
                    ((C115 * C492 + C63 * C724) * C62 +
                     (C115 * C380 + C63 * C442) * C148) *
                        C61 * C14318 * C14548 +
                    ((C115 * C3382 + C63 * C3420) * C148 +
                     (C115 * C3456 + C63 * C3633) * C62) *
                        C61 * C14318 * C14530) *
                       C14283)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 *
                        C14318 * C6528 -
                    (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 *
                        C14318 * C14363) *
                       C14561 +
                   ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 *
                        C14318 * C14363 -
                    (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 *
                        C14318 * C6528) *
                       C14554 +
                   ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 *
                        C14318 * C6528 -
                    (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 *
                        C14318 * C14363) *
                       C14541 +
                   ((C322 * C1258 + C1546 + C1546 + C62 * C1544) * C63 * C61 *
                        C14318 * C14363 -
                    (C322 * C76 + C332 + C332 + C62 * C326) * C63 * C61 *
                        C14318 * C6528) *
                       C14524)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 *
                        C14318 * C14562 -
                    (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 *
                        C14318 * C14558 +
                    (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 *
                        C14318 * C14548 -
                    (C322 * C2744 + C2951 + C2951 + C62 * C2948) * C63 * C61 *
                        C14318 * C14530) *
                       C6844 +
                   ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 *
                        C14318 * C14558 -
                    (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 *
                        C14318 * C14562 -
                    (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 *
                        C14318 * C14548 +
                    (C322 * C3382 + C3670 + C3670 + C62 * C3668) * C63 * C61 *
                        C14318 * C14530) *
                       C14283)) /
                     (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C8850 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
               C14359 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C8850) *
               C14366 +
           ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C8850 -
            (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C14405) *
               C7608) *
              C14480 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C8850) *
               C14359 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C8850 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14405) *
               C14366 +
           ((C71 * C3720 + C3724 + C3724 + C61 * C3722) * C62 * C63 * C14405 -
            (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C8850) *
               C7608) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C115 * C73 + C63 * C116) * C72 +
                      (C115 * C78 + C63 * C121) * C61) *
                         C62 * C8850 -
                     ((C115 * C824 + C63 * C886) * C61 +
                      (C115 * C818 + C63 * C880) * C72) *
                         C62 * C14405) *
                        C14359 +
                    (((C115 * C1920 + C63 * C1982) * C72 +
                      (C115 * C1923 + C63 * C1985) * C61) *
                         C62 * C14405 -
                     ((C115 * C383 + C63 * C445) * C61 +
                      (C115 * C377 + C63 * C439) * C72) *
                         C62 * C8850) *
                        C14366 +
                    (((C115 * C378 + C63 * C440) * C72 +
                      (C115 * C384 + C63 * C446) * C61) *
                         C62 * C8850 -
                     ((C115 * C2994 + C63 * C3044) * C61 +
                      (C115 * C2991 + C63 * C3041) * C72) *
                         C62 * C14405) *
                        C7608) *
                       C14480 +
                   ((((C115 * C820 + C63 * C882) * C72 +
                      (C115 * C826 + C63 * C888) * C61) *
                         C62 * C14405 -
                     ((C115 * C79 + C63 * C122) * C61 +
                      (C115 * C74 + C63 * C117) * C72) *
                         C62 * C8850) *
                        C14359 +
                    (((C115 * C379 + C63 * C441) * C72 +
                      (C115 * C385 + C63 * C447) * C61) *
                         C62 * C8850 -
                     ((C115 * C1924 + C63 * C1986) * C61 +
                      (C115 * C1921 + C63 * C1983) * C72) *
                         C62 * C14405) *
                        C14366 +
                    (((C115 * C3720 + C63 * C3774) * C72 +
                      (C115 * C3721 + C63 * C3775) * C61) *
                         C62 * C14405 -
                     ((C115 * C386 + C63 * C448) * C61 +
                      (C115 * C380 + C63 * C442) * C72) *
                         C62 * C8850) *
                        C7608) *
                       C14283)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C148 * C73 + C62 * C149) * C72 +
                      (C148 * C78 + C62 * C154) * C61) *
                         C63 * C8850 -
                     ((C148 * C824 + C62 * C936) * C61 +
                      (C148 * C818 + C62 * C930) * C72) *
                         C63 * C14405) *
                        C14359 +
                    (((C148 * C1920 + C62 * C2038) * C72 +
                      (C148 * C1923 + C62 * C2041) * C61) *
                         C63 * C14405 -
                     ((C148 * C383 + C62 * C495) * C61 +
                      (C148 * C377 + C62 * C489) * C72) *
                         C63 * C8850) *
                        C14366 +
                    (((C148 * C378 + C62 * C490) * C72 +
                      (C148 * C384 + C62 * C496) * C61) *
                         C63 * C8850 -
                     ((C148 * C2994 + C62 * C3088) * C61 +
                      (C148 * C2991 + C62 * C3085) * C72) *
                         C63 * C14405) *
                        C7608) *
                       C14480 +
                   ((((C148 * C820 + C62 * C932) * C72 +
                      (C148 * C826 + C62 * C938) * C61) *
                         C63 * C14405 -
                     ((C148 * C79 + C62 * C155) * C61 +
                      (C148 * C74 + C62 * C150) * C72) *
                         C63 * C8850) *
                        C14359 +
                    (((C148 * C379 + C62 * C491) * C72 +
                      (C148 * C385 + C62 * C497) * C61) *
                         C63 * C8850 -
                     ((C148 * C1924 + C62 * C2042) * C61 +
                      (C148 * C1921 + C62 * C2039) * C72) *
                         C63 * C14405) *
                        C14366 +
                    (((C148 * C3720 + C62 * C3826) * C72 +
                      (C148 * C3721 + C62 * C3827) * C61) *
                         C63 * C14405 -
                     ((C148 * C386 + C62 * C498) * C61 +
                      (C148 * C380 + C62 * C492) * C72) *
                         C63 * C8850) *
                        C7608) *
                       C14283)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C8850 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14405) *
               C14359 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14405 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C8850) *
               C14366 +
           (((C72 * C378 + C61 * C384) * C115 +
             (C72 * C440 + C61 * C540) * C63) *
                C62 * C8850 -
            ((C72 * C3041 + C61 * C3129) * C63 +
             (C72 * C2991 + C61 * C2994) * C115) *
                C62 * C14405) *
               C7608) *
              C14480 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14405 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C8850) *
               C14359 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C8850 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14405) *
               C14366 +
           (((C72 * C3720 + C61 * C3721) * C115 +
             (C72 * C3774 + C61 * C3878) * C63) *
                C62 * C14405 -
            ((C72 * C442 + C61 * C542) * C63 +
             (C72 * C380 + C61 * C386) * C115) *
                C62 * C8850) *
               C7608) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C8850 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
               C14359 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C8850) *
               C14366 +
           ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C8850 -
            (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C14405) *
               C7608) *
              C14480 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C8850) *
               C14359 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C8850 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14405) *
               C14366 +
           ((C208 * C3720 + C3931 + C3931 + C63 * C3929) * C61 * C62 * C14405 -
            (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C8850) *
               C7608) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C8850 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14405) *
                        C14359 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C14405 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C8850) *
                        C14366 +
                    (((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C8850 -
                     ((C148 * C3041 + C62 * C3214) * C63 +
                      (C148 * C2991 + C62 * C3085) * C115) *
                         C61 * C14405) *
                        C7608) *
                       C14480 +
                   ((((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14405 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C8850) *
                        C14359 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C8850 -
                     ((C148 * C1983 + C62 * C2204) * C63 +
                      (C148 * C1921 + C62 * C2039) * C115) *
                         C61 * C14405) *
                        C14366 +
                    (((C148 * C3720 + C62 * C3826) * C115 +
                      (C148 * C3774 + C62 * C3981) * C63) *
                         C61 * C14405 -
                     ((C148 * C442 + C62 * C636) * C63 +
                      (C148 * C380 + C62 * C492) * C115) *
                         C61 * C8850) *
                        C7608) *
                       C14283)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C8850 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14405) *
               C14359 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14405 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C8850) *
               C14366 +
           (((C72 * C378 + C61 * C384) * C148 +
             (C72 * C490 + C61 * C678) * C62) *
                C63 * C8850 -
            ((C72 * C3085 + C61 * C3255) * C62 +
             (C72 * C2991 + C61 * C2994) * C148) *
                C63 * C14405) *
               C7608) *
              C14480 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14405 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C8850) *
               C14359 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C8850 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14405) *
               C14366 +
           (((C72 * C3720 + C61 * C3721) * C148 +
             (C72 * C3826 + C61 * C4032) * C62) *
                C63 * C14405 -
            ((C72 * C492 + C61 * C680) * C62 +
             (C72 * C380 + C61 * C386) * C148) *
                C63 * C8850) *
               C7608) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C8850 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14405) *
                        C14359 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C14405 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C8850) *
                        C14366 +
                    (((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C8850 -
                     ((C115 * C3085 + C63 * C3296) * C62 +
                      (C115 * C2991 + C63 * C3041) * C148) *
                         C61 * C14405) *
                        C7608) *
                       C14480 +
                   ((((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14405 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C8850) *
                        C14359 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C8850 -
                     ((C115 * C2039 + C63 * C2310) * C62 +
                      (C115 * C1921 + C63 * C1983) * C148) *
                         C61 * C14405) *
                        C14366 +
                    (((C115 * C3720 + C63 * C3774) * C148 +
                      (C115 * C3826 + C63 * C4083) * C62) *
                         C61 * C14405 -
                     ((C115 * C492 + C63 * C724) * C62 +
                      (C115 * C380 + C63 * C442) * C148) *
                         C61 * C8850) *
                        C7608) *
                       C14283)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C8850 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
               C14359 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C8850) *
               C14366 +
           ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C8850 -
            (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C14405) *
               C7608) *
              C14480 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C8850) *
               C14359 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C8850 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14405) *
               C14366 +
           ((C322 * C3720 + C4136 + C4136 + C62 * C4134) * C63 * C61 * C14405 -
            (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C8850) *
               C7608) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14401 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14408 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C10374) *
              C14359 +
          ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14408 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14401 -
           (C71 * C2990 + C3000 + C3000 + C61 * C2996) * C62 * C63 * C10374) *
              C14366 +
          ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14401 -
           (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C14408 +
           (C71 * C2992 + C3002 + C3002 + C61 * C2998) * C62 * C63 * C10374) *
              C7608) *
         C14272) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14401 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14408 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C10374) *
              C14359 +
          (((C115 * C1920 + C63 * C1982) * C72 +
            (C115 * C1923 + C63 * C1985) * C61) *
               C62 * C14408 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14401 -
           ((C115 * C2993 + C63 * C3043) * C61 +
            (C115 * C2990 + C63 * C3040) * C72) *
               C62 * C10374) *
              C14366 +
          (((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14401 -
           ((C115 * C2994 + C63 * C3044) * C61 +
            (C115 * C2991 + C63 * C3041) * C72) *
               C62 * C14408 +
           ((C115 * C2992 + C63 * C3042) * C72 +
            (C115 * C2995 + C63 * C3045) * C61) *
               C62 * C10374) *
              C7608) *
         C14272) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14401 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14408 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C10374) *
              C14359 +
          (((C148 * C1920 + C62 * C2038) * C72 +
            (C148 * C1923 + C62 * C2041) * C61) *
               C63 * C14408 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14401 -
           ((C148 * C2993 + C62 * C3087) * C61 +
            (C148 * C2990 + C62 * C3084) * C72) *
               C63 * C10374) *
              C14366 +
          (((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14401 -
           ((C148 * C2994 + C62 * C3088) * C61 +
            (C148 * C2991 + C62 * C3085) * C72) *
               C63 * C14408 +
           ((C148 * C2992 + C62 * C3086) * C72 +
            (C148 * C2995 + C62 * C3089) * C61) *
               C63 * C10374) *
              C7608) *
         C14272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14401 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14408 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C10374) *
              C14359 +
          (((C72 * C1920 + C61 * C1923) * C115 +
            (C72 * C1982 + C61 * C2094) * C63) *
               C62 * C14408 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14401 -
           ((C72 * C3040 + C61 * C3128) * C63 +
            (C72 * C2990 + C61 * C2993) * C115) *
               C62 * C10374) *
              C14366 +
          (((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14401 -
           ((C72 * C3041 + C61 * C3129) * C63 +
            (C72 * C2991 + C61 * C2994) * C115) *
               C62 * C14408 +
           ((C72 * C2992 + C61 * C2995) * C115 +
            (C72 * C3042 + C61 * C3130) * C63) *
               C62 * C10374) *
              C7608) *
         C14272) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14401 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14408 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C10374) *
              C14359 +
          ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14408 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14401 -
           (C208 * C2990 + C3173 + C3173 + C63 * C3169) * C61 * C62 * C10374) *
              C14366 +
          ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14401 -
           (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C14408 +
           (C208 * C2992 + C3175 + C3175 + C63 * C3171) * C61 * C62 * C10374) *
              C7608) *
         C14272) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14401 -
                    ((C148 * C880 + C62 * C1074) * C63 +
                     (C148 * C818 + C62 * C930) * C115) *
                        C61 * C14408 +
                    ((C148 * C819 + C62 * C931) * C115 +
                     (C148 * C881 + C62 * C1075) * C63) *
                        C61 * C10374) *
                       C14359 +
                   (((C148 * C1920 + C62 * C2038) * C115 +
                     (C148 * C1982 + C62 * C2203) * C63) *
                        C61 * C14408 -
                    ((C148 * C439 + C62 * C633) * C63 +
                     (C148 * C377 + C62 * C489) * C115) *
                        C61 * C14401 -
                    ((C148 * C3040 + C62 * C3213) * C63 +
                     (C148 * C2990 + C62 * C3084) * C115) *
                        C61 * C10374) *
                       C14366 +
                   (((C148 * C378 + C62 * C490) * C115 +
                     (C148 * C440 + C62 * C634) * C63) *
                        C61 * C14401 -
                    ((C148 * C3041 + C62 * C3214) * C63 +
                     (C148 * C2991 + C62 * C3085) * C115) *
                        C61 * C14408 +
                    ((C148 * C2992 + C62 * C3086) * C115 +
                     (C148 * C3042 + C62 * C3215) * C63) *
                        C61 * C10374) *
                       C7608) *
                  C14272) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14401 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14408 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C10374) *
              C14359 +
          (((C72 * C1920 + C61 * C1923) * C148 +
            (C72 * C2038 + C61 * C2256) * C62) *
               C63 * C14408 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14401 -
           ((C72 * C3084 + C61 * C3254) * C62 +
            (C72 * C2990 + C61 * C2993) * C148) *
               C63 * C10374) *
              C14366 +
          (((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14401 -
           ((C72 * C3085 + C61 * C3255) * C62 +
            (C72 * C2991 + C61 * C2994) * C148) *
               C63 * C14408 +
           ((C72 * C2992 + C61 * C2995) * C148 +
            (C72 * C3086 + C61 * C3256) * C62) *
               C63 * C10374) *
              C7608) *
         C14272) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14401 -
                    ((C115 * C930 + C63 * C1162) * C62 +
                     (C115 * C818 + C63 * C880) * C148) *
                        C61 * C14408 +
                    ((C115 * C819 + C63 * C881) * C148 +
                     (C115 * C931 + C63 * C1163) * C62) *
                        C61 * C10374) *
                       C14359 +
                   (((C115 * C1920 + C63 * C1982) * C148 +
                     (C115 * C2038 + C63 * C2309) * C62) *
                        C61 * C14408 -
                    ((C115 * C489 + C63 * C721) * C62 +
                     (C115 * C377 + C63 * C439) * C148) *
                        C61 * C14401 -
                    ((C115 * C3084 + C63 * C3295) * C62 +
                     (C115 * C2990 + C63 * C3040) * C148) *
                        C61 * C10374) *
                       C14366 +
                   (((C115 * C378 + C63 * C440) * C148 +
                     (C115 * C490 + C63 * C722) * C62) *
                        C61 * C14401 -
                    ((C115 * C3085 + C63 * C3296) * C62 +
                     (C115 * C2991 + C63 * C3041) * C148) *
                        C61 * C14408 +
                    ((C115 * C2992 + C63 * C3042) * C148 +
                     (C115 * C3086 + C63 * C3297) * C62) *
                        C61 * C10374) *
                       C7608) *
                  C14272) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14401 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14408 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C10374) *
              C14359 +
          ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14408 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14401 -
           (C322 * C2990 + C3340 + C3340 + C62 * C3336) * C63 * C61 * C10374) *
              C14366 +
          ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14401 -
           (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C14408 +
           (C322 * C2992 + C3342 + C3342 + C62 * C3338) * C63 * C61 * C10374) *
              C7608) *
         C14272) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C8850 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
              C14562 +
          ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C8850) *
              C14558 +
          ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C8850 -
           (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C14405) *
              C14548 +
          ((C71 * C4170 + C4174 + C4174 + C61 * C4172) * C62 * C63 * C14405 -
           (C71 * C2744 + C2751 + C2751 + C61 * C2748) * C62 * C63 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C8850 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
               C6528 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C8850) *
               C14363) *
              C14552 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C8850) *
               C6528 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C8850 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14405) *
               C14363) *
              C14539 +
          (((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C8850 -
            (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C14405) *
               C6528 +
           ((C71 * C1922 + C1932 + C1932 + C61 * C1928) * C62 * C63 * C14405 -
            (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14563 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14560 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C14551 -
           (C71 * C5172 + C5179 + C5179 + C61 * C5176) * C62 * C63 * C14536) *
              C6528 +
          ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14560 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14563 -
           (C71 * C2990 + C3000 + C3000 + C61 * C2996) * C62 * C63 * C14551 +
           (C71 * C6206 + C6210 + C6210 + C61 * C6208) * C62 * C63 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C8850 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14405) *
              C14562 +
          (((C115 * C1920 + C63 * C1982) * C72 +
            (C115 * C1923 + C63 * C1985) * C61) *
               C62 * C14405 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C8850) *
              C14558 +
          (((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C8850 -
           ((C115 * C2994 + C63 * C3044) * C61 +
            (C115 * C2991 + C63 * C3041) * C72) *
               C62 * C14405) *
              C14548 +
          (((C115 * C4170 + C63 * C4208) * C72 +
            (C115 * C4171 + C63 * C4209) * C61) *
               C62 * C14405 -
           ((C115 * C2746 + C63 * C2776) * C61 +
            (C115 * C2744 + C63 * C2774) * C72) *
               C62 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C115 * C73 + C63 * C116) * C72 +
             (C115 * C78 + C63 * C121) * C61) *
                C62 * C8850 -
            ((C115 * C824 + C63 * C886) * C61 +
             (C115 * C818 + C63 * C880) * C72) *
                C62 * C14405) *
               C6528 +
           (((C115 * C1920 + C63 * C1982) * C72 +
             (C115 * C1923 + C63 * C1985) * C61) *
                C62 * C14405 -
            ((C115 * C383 + C63 * C445) * C61 +
             (C115 * C377 + C63 * C439) * C72) *
                C62 * C8850) *
               C14363) *
              C14552 +
          ((((C115 * C820 + C63 * C882) * C72 +
             (C115 * C826 + C63 * C888) * C61) *
                C62 * C14405 -
            ((C115 * C79 + C63 * C122) * C61 +
             (C115 * C74 + C63 * C117) * C72) *
                C62 * C8850) *
               C6528 +
           (((C115 * C379 + C63 * C441) * C72 +
             (C115 * C385 + C63 * C447) * C61) *
                C62 * C8850 -
            ((C115 * C1924 + C63 * C1986) * C61 +
             (C115 * C1921 + C63 * C1983) * C72) *
                C62 * C14405) *
               C14363) *
              C14539 +
          ((((C115 * C75 + C63 * C118) * C72 +
             (C115 * C80 + C63 * C123) * C61) *
                C62 * C8850 -
            ((C115 * C828 + C63 * C890) * C61 +
             (C115 * C822 + C63 * C884) * C72) *
                C62 * C14405) *
               C6528 +
           (((C115 * C1922 + C63 * C1984) * C72 +
             (C115 * C1925 + C63 * C1987) * C61) *
                C62 * C14405 -
            ((C115 * C387 + C63 * C449) * C61 +
             (C115 * C381 + C63 * C443) * C72) *
                C62 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14563 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14560 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C14551 -
           ((C115 * C5174 + C63 * C5204) * C61 +
            (C115 * C5172 + C63 * C5202) * C72) *
               C62 * C14536) *
              C6528 +
          (((C115 * C1920 + C63 * C1982) * C72 +
            (C115 * C1923 + C63 * C1985) * C61) *
               C62 * C14560 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14563 -
           ((C115 * C2993 + C63 * C3043) * C61 +
            (C115 * C2990 + C63 * C3040) * C72) *
               C62 * C14551 +
           ((C115 * C6206 + C63 * C6244) * C72 +
            (C115 * C6207 + C63 * C6245) * C61) *
               C62 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C8850 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14405) *
              C14562 +
          (((C148 * C1920 + C62 * C2038) * C72 +
            (C148 * C1923 + C62 * C2041) * C61) *
               C63 * C14405 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C8850) *
              C14558 +
          (((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C8850 -
           ((C148 * C2994 + C62 * C3088) * C61 +
            (C148 * C2991 + C62 * C3085) * C72) *
               C63 * C14405) *
              C14548 +
          (((C148 * C4170 + C62 * C4244) * C72 +
            (C148 * C4171 + C62 * C4245) * C61) *
               C63 * C14405 -
           ((C148 * C2746 + C62 * C2802) * C61 +
            (C148 * C2744 + C62 * C2800) * C72) *
               C63 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C148 * C73 + C62 * C149) * C72 +
             (C148 * C78 + C62 * C154) * C61) *
                C63 * C8850 -
            ((C148 * C824 + C62 * C936) * C61 +
             (C148 * C818 + C62 * C930) * C72) *
                C63 * C14405) *
               C6528 +
           (((C148 * C1920 + C62 * C2038) * C72 +
             (C148 * C1923 + C62 * C2041) * C61) *
                C63 * C14405 -
            ((C148 * C383 + C62 * C495) * C61 +
             (C148 * C377 + C62 * C489) * C72) *
                C63 * C8850) *
               C14363) *
              C14552 +
          ((((C148 * C820 + C62 * C932) * C72 +
             (C148 * C826 + C62 * C938) * C61) *
                C63 * C14405 -
            ((C148 * C79 + C62 * C155) * C61 +
             (C148 * C74 + C62 * C150) * C72) *
                C63 * C8850) *
               C6528 +
           (((C148 * C379 + C62 * C491) * C72 +
             (C148 * C385 + C62 * C497) * C61) *
                C63 * C8850 -
            ((C148 * C1924 + C62 * C2042) * C61 +
             (C148 * C1921 + C62 * C2039) * C72) *
                C63 * C14405) *
               C14363) *
              C14539 +
          ((((C148 * C75 + C62 * C151) * C72 +
             (C148 * C80 + C62 * C156) * C61) *
                C63 * C8850 -
            ((C148 * C828 + C62 * C940) * C61 +
             (C148 * C822 + C62 * C934) * C72) *
                C63 * C14405) *
               C6528 +
           (((C148 * C1922 + C62 * C2040) * C72 +
             (C148 * C1925 + C62 * C2043) * C61) *
                C63 * C14405 -
            ((C148 * C387 + C62 * C499) * C61 +
             (C148 * C381 + C62 * C493) * C72) *
                C63 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14563 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14560 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C14551 -
           ((C148 * C5174 + C62 * C5230) * C61 +
            (C148 * C5172 + C62 * C5228) * C72) *
               C63 * C14536) *
              C6528 +
          (((C148 * C1920 + C62 * C2038) * C72 +
            (C148 * C1923 + C62 * C2041) * C61) *
               C63 * C14560 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14563 -
           ((C148 * C2993 + C62 * C3087) * C61 +
            (C148 * C2990 + C62 * C3084) * C72) *
               C63 * C14551 +
           ((C148 * C6206 + C62 * C6280) * C72 +
            (C148 * C6207 + C62 * C6281) * C61) *
               C63 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C8850 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14405) *
              C14562 +
          (((C72 * C1920 + C61 * C1923) * C115 +
            (C72 * C1982 + C61 * C2094) * C63) *
               C62 * C14405 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C8850) *
              C14558 +
          (((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C8850 -
           ((C72 * C3041 + C61 * C3129) * C63 +
            (C72 * C2991 + C61 * C2994) * C115) *
               C62 * C14405) *
              C14548 +
          (((C72 * C4170 + C61 * C4171) * C115 +
            (C72 * C4208 + C61 * C4280) * C63) *
               C62 * C14405 -
           ((C72 * C2774 + C61 * C2826) * C63 +
            (C72 * C2744 + C61 * C2746) * C115) *
               C62 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C8850 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14405) *
               C6528 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14405 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C8850) *
               C14363) *
              C14552 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14405 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C8850) *
               C6528 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C8850 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14405) *
               C14363) *
              C14539 +
          ((((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
                C62 * C8850 -
            ((C72 * C884 + C61 * C984) * C63 +
             (C72 * C822 + C61 * C828) * C115) *
                C62 * C14405) *
               C6528 +
           (((C72 * C1922 + C61 * C1925) * C115 +
             (C72 * C1984 + C61 * C2096) * C63) *
                C62 * C14405 -
            ((C72 * C443 + C61 * C543) * C63 +
             (C72 * C381 + C61 * C387) * C115) *
                C62 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14563 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14560 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C14551 -
           ((C72 * C5202 + C61 * C5254) * C63 +
            (C72 * C5172 + C61 * C5174) * C115) *
               C62 * C14536) *
              C6528 +
          (((C72 * C1920 + C61 * C1923) * C115 +
            (C72 * C1982 + C61 * C2094) * C63) *
               C62 * C14560 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14563 -
           ((C72 * C3040 + C61 * C3128) * C63 +
            (C72 * C2990 + C61 * C2993) * C115) *
               C62 * C14551 +
           ((C72 * C6206 + C61 * C6207) * C115 +
            (C72 * C6244 + C61 * C6316) * C63) *
               C62 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C8850 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
              C14562 +
          ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C8850) *
              C14558 +
          ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C8850 -
           (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C14405) *
              C14548 +
          ((C208 * C4170 + C4317 + C4317 + C63 * C4315) * C61 * C62 * C14405 -
           (C208 * C2744 + C2853 + C2853 + C63 * C2850) * C61 * C62 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C8850 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
               C6528 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C8850) *
               C14363) *
              C14552 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C8850) *
               C6528 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C8850 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14405) *
               C14363) *
              C14539 +
          (((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C8850 -
            (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C14405) *
               C6528 +
           ((C208 * C1922 + C2153 + C2153 + C63 * C2149) * C61 * C62 * C14405 -
            (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14563 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14560 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C14551 -
           (C208 * C5172 + C5281 + C5281 + C63 * C5278) * C61 * C62 * C14536) *
              C6528 +
          ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14560 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14563 -
           (C208 * C2990 + C3173 + C3173 + C63 * C3169) * C61 * C62 * C14551 +
           (C208 * C6206 + C6353 + C6353 + C63 * C6351) * C61 * C62 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C8850 -
                    ((C148 * C880 + C62 * C1074) * C63 +
                     (C148 * C818 + C62 * C930) * C115) *
                        C61 * C14405) *
                       C14562 +
                   (((C148 * C1920 + C62 * C2038) * C115 +
                     (C148 * C1982 + C62 * C2203) * C63) *
                        C61 * C14405 -
                    ((C148 * C439 + C62 * C633) * C63 +
                     (C148 * C377 + C62 * C489) * C115) *
                        C61 * C8850) *
                       C14558 +
                   (((C148 * C378 + C62 * C490) * C115 +
                     (C148 * C440 + C62 * C634) * C63) *
                        C61 * C8850 -
                    ((C148 * C3041 + C62 * C3214) * C63 +
                     (C148 * C2991 + C62 * C3085) * C115) *
                        C61 * C14405) *
                       C14548 +
                   (((C148 * C4170 + C62 * C4244) * C115 +
                     (C148 * C4208 + C62 * C4351) * C63) *
                        C61 * C14405 -
                    ((C148 * C2774 + C62 * C2876) * C63 +
                     (C148 * C2744 + C62 * C2800) * C115) *
                        C61 * C8850) *
                       C14530) *
                  C14272) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C8850 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14405) *
                        C6528 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C14405 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C8850) *
                        C14363) *
                       C14552 +
                   ((((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14405 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C8850) *
                        C6528 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C8850 -
                     ((C148 * C1983 + C62 * C2204) * C63 +
                      (C148 * C1921 + C62 * C2039) * C115) *
                         C61 * C14405) *
                        C14363) *
                       C14539 +
                   ((((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C8850 -
                     ((C148 * C884 + C62 * C1078) * C63 +
                      (C148 * C822 + C62 * C934) * C115) *
                         C61 * C14405) *
                        C6528 +
                    (((C148 * C1922 + C62 * C2040) * C115 +
                      (C148 * C1984 + C62 * C2205) * C63) *
                         C61 * C14405 -
                     ((C148 * C443 + C62 * C637) * C63 +
                      (C148 * C381 + C62 * C493) * C115) *
                         C61 * C8850) *
                        C14363) *
                       C14514)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14563 -
                    ((C148 * C880 + C62 * C1074) * C63 +
                     (C148 * C818 + C62 * C930) * C115) *
                        C61 * C14560 +
                    ((C148 * C819 + C62 * C931) * C115 +
                     (C148 * C881 + C62 * C1075) * C63) *
                        C61 * C14551 -
                    ((C148 * C5202 + C62 * C5304) * C63 +
                     (C148 * C5172 + C62 * C5228) * C115) *
                        C61 * C14536) *
                       C6528 +
                   (((C148 * C1920 + C62 * C2038) * C115 +
                     (C148 * C1982 + C62 * C2203) * C63) *
                        C61 * C14560 -
                    ((C148 * C439 + C62 * C633) * C63 +
                     (C148 * C377 + C62 * C489) * C115) *
                        C61 * C14563 -
                    ((C148 * C3040 + C62 * C3213) * C63 +
                     (C148 * C2990 + C62 * C3084) * C115) *
                        C61 * C14551 +
                    ((C148 * C6206 + C62 * C6280) * C115 +
                     (C148 * C6244 + C62 * C6387) * C63) *
                        C61 * C14536) *
                       C14363) *
                  C14272) /
                     (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C8850 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14405) *
              C14562 +
          (((C72 * C1920 + C61 * C1923) * C148 +
            (C72 * C2038 + C61 * C2256) * C62) *
               C63 * C14405 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C8850) *
              C14558 +
          (((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C8850 -
           ((C72 * C3085 + C61 * C3255) * C62 +
            (C72 * C2991 + C61 * C2994) * C148) *
               C63 * C14405) *
              C14548 +
          (((C72 * C4170 + C61 * C4171) * C148 +
            (C72 * C4244 + C61 * C4386) * C62) *
               C63 * C14405 -
           ((C72 * C2800 + C61 * C2900) * C62 +
            (C72 * C2744 + C61 * C2746) * C148) *
               C63 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C8850 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14405) *
               C6528 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14405 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C8850) *
               C14363) *
              C14552 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14405 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C8850) *
               C6528 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C8850 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14405) *
               C14363) *
              C14539 +
          ((((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
                C63 * C8850 -
            ((C72 * C934 + C61 * C1122) * C62 +
             (C72 * C822 + C61 * C828) * C148) *
                C63 * C14405) *
               C6528 +
           (((C72 * C1922 + C61 * C1925) * C148 +
             (C72 * C2040 + C61 * C2258) * C62) *
                C63 * C14405 -
            ((C72 * C493 + C61 * C681) * C62 +
             (C72 * C381 + C61 * C387) * C148) *
                C63 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14563 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14560 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C14551 -
           ((C72 * C5228 + C61 * C5328) * C62 +
            (C72 * C5172 + C61 * C5174) * C148) *
               C63 * C14536) *
              C6528 +
          (((C72 * C1920 + C61 * C1923) * C148 +
            (C72 * C2038 + C61 * C2256) * C62) *
               C63 * C14560 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14563 -
           ((C72 * C3084 + C61 * C3254) * C62 +
            (C72 * C2990 + C61 * C2993) * C148) *
               C63 * C14551 +
           ((C72 * C6206 + C61 * C6207) * C148 +
            (C72 * C6280 + C61 * C6422) * C62) *
               C63 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C8850 -
                    ((C115 * C930 + C63 * C1162) * C62 +
                     (C115 * C818 + C63 * C880) * C148) *
                        C61 * C14405) *
                       C14562 +
                   (((C115 * C1920 + C63 * C1982) * C148 +
                     (C115 * C2038 + C63 * C2309) * C62) *
                        C61 * C14405 -
                    ((C115 * C489 + C63 * C721) * C62 +
                     (C115 * C377 + C63 * C439) * C148) *
                        C61 * C8850) *
                       C14558 +
                   (((C115 * C378 + C63 * C440) * C148 +
                     (C115 * C490 + C63 * C722) * C62) *
                        C61 * C8850 -
                    ((C115 * C3085 + C63 * C3296) * C62 +
                     (C115 * C2991 + C63 * C3041) * C148) *
                        C61 * C14405) *
                       C14548 +
                   (((C115 * C4170 + C63 * C4208) * C148 +
                     (C115 * C4244 + C63 * C4421) * C62) *
                        C61 * C14405 -
                    ((C115 * C2800 + C63 * C2924) * C62 +
                     (C115 * C2744 + C63 * C2774) * C148) *
                        C61 * C8850) *
                       C14530) *
                  C14272) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C8850 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14405) *
                        C6528 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C14405 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C8850) *
                        C14363) *
                       C14552 +
                   ((((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14405 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C8850) *
                        C6528 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C8850 -
                     ((C115 * C2039 + C63 * C2310) * C62 +
                      (C115 * C1921 + C63 * C1983) * C148) *
                         C61 * C14405) *
                        C14363) *
                       C14539 +
                   ((((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C8850 -
                     ((C115 * C934 + C63 * C1166) * C62 +
                      (C115 * C822 + C63 * C884) * C148) *
                         C61 * C14405) *
                        C6528 +
                    (((C115 * C1922 + C63 * C1984) * C148 +
                      (C115 * C2040 + C63 * C2311) * C62) *
                         C61 * C14405 -
                     ((C115 * C493 + C63 * C725) * C62 +
                      (C115 * C381 + C63 * C443) * C148) *
                         C61 * C8850) *
                        C14363) *
                       C14514)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14563 -
                    ((C115 * C930 + C63 * C1162) * C62 +
                     (C115 * C818 + C63 * C880) * C148) *
                        C61 * C14560 +
                    ((C115 * C819 + C63 * C881) * C148 +
                     (C115 * C931 + C63 * C1163) * C62) *
                        C61 * C14551 -
                    ((C115 * C5228 + C63 * C5352) * C62 +
                     (C115 * C5172 + C63 * C5202) * C148) *
                        C61 * C14536) *
                       C6528 +
                   (((C115 * C1920 + C63 * C1982) * C148 +
                     (C115 * C2038 + C63 * C2309) * C62) *
                        C61 * C14560 -
                    ((C115 * C489 + C63 * C721) * C62 +
                     (C115 * C377 + C63 * C439) * C148) *
                        C61 * C14563 -
                    ((C115 * C3084 + C63 * C3295) * C62 +
                     (C115 * C2990 + C63 * C3040) * C148) *
                        C61 * C14551 +
                    ((C115 * C6206 + C63 * C6244) * C148 +
                     (C115 * C6280 + C63 * C6457) * C62) *
                        C61 * C14536) *
                       C14363) *
                  C14272) /
                     (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C8850 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
              C14562 +
          ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C8850) *
              C14558 +
          ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C8850 -
           (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C14405) *
              C14548 +
          ((C322 * C4170 + C4458 + C4458 + C62 * C4456) * C63 * C61 * C14405 -
           (C322 * C2744 + C2951 + C2951 + C62 * C2948) * C63 * C61 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C8850 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
               C6528 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C8850) *
               C14363) *
              C14552 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C8850) *
               C6528 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C8850 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14405) *
               C14363) *
              C14539 +
          (((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C8850 -
            (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C14405) *
               C6528 +
           ((C322 * C1922 + C2368 + C2368 + C62 * C2364) * C63 * C61 * C14405 -
            (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14563 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14560 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C14551 -
           (C322 * C5172 + C5379 + C5379 + C62 * C5376) * C63 * C61 * C14536) *
              C6528 +
          ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14560 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14563 -
           (C322 * C2990 + C3340 + C3340 + C62 * C3336) * C63 * C61 * C14551 +
           (C322 * C6206 + C6494 + C6494 + C62 * C6492) * C63 * C61 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14401 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14408 +
            (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C10374) *
               C6528 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14408 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14401 -
            (C71 * C2990 + C3000 + C3000 + C61 * C2996) * C62 * C63 * C10374) *
               C14363) *
              C14480 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14408 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14401 -
            (C71 * C821 + C840 + C840 + C61 * C833) * C62 * C63 * C10374) *
               C6528 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14401 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14408 +
            (C71 * C5430 + C5434 + C5434 + C61 * C5432) * C62 * C63 * C10374) *
               C14363) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C115 * C73 + C63 * C116) * C72 +
                      (C115 * C78 + C63 * C121) * C61) *
                         C62 * C14401 -
                     ((C115 * C824 + C63 * C886) * C61 +
                      (C115 * C818 + C63 * C880) * C72) *
                         C62 * C14408 +
                     ((C115 * C819 + C63 * C881) * C72 +
                      (C115 * C825 + C63 * C887) * C61) *
                         C62 * C10374) *
                        C6528 +
                    (((C115 * C1920 + C63 * C1982) * C72 +
                      (C115 * C1923 + C63 * C1985) * C61) *
                         C62 * C14408 -
                     ((C115 * C383 + C63 * C445) * C61 +
                      (C115 * C377 + C63 * C439) * C72) *
                         C62 * C14401 -
                     ((C115 * C2993 + C63 * C3043) * C61 +
                      (C115 * C2990 + C63 * C3040) * C72) *
                         C62 * C10374) *
                        C14363) *
                       C14480 +
                   ((((C115 * C820 + C63 * C882) * C72 +
                      (C115 * C826 + C63 * C888) * C61) *
                         C62 * C14408 -
                     ((C115 * C79 + C63 * C122) * C61 +
                      (C115 * C74 + C63 * C117) * C72) *
                         C62 * C14401 -
                     ((C115 * C827 + C63 * C889) * C61 +
                      (C115 * C821 + C63 * C883) * C72) *
                         C62 * C10374) *
                        C6528 +
                    (((C115 * C379 + C63 * C441) * C72 +
                      (C115 * C385 + C63 * C447) * C61) *
                         C62 * C14401 -
                     ((C115 * C1924 + C63 * C1986) * C61 +
                      (C115 * C1921 + C63 * C1983) * C72) *
                         C62 * C14408 +
                     ((C115 * C5430 + C63 * C5484) * C72 +
                      (C115 * C5431 + C63 * C5485) * C61) *
                         C62 * C10374) *
                        C14363) *
                       C14283)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C148 * C73 + C62 * C149) * C72 +
                      (C148 * C78 + C62 * C154) * C61) *
                         C63 * C14401 -
                     ((C148 * C824 + C62 * C936) * C61 +
                      (C148 * C818 + C62 * C930) * C72) *
                         C63 * C14408 +
                     ((C148 * C819 + C62 * C931) * C72 +
                      (C148 * C825 + C62 * C937) * C61) *
                         C63 * C10374) *
                        C6528 +
                    (((C148 * C1920 + C62 * C2038) * C72 +
                      (C148 * C1923 + C62 * C2041) * C61) *
                         C63 * C14408 -
                     ((C148 * C383 + C62 * C495) * C61 +
                      (C148 * C377 + C62 * C489) * C72) *
                         C63 * C14401 -
                     ((C148 * C2993 + C62 * C3087) * C61 +
                      (C148 * C2990 + C62 * C3084) * C72) *
                         C63 * C10374) *
                        C14363) *
                       C14480 +
                   ((((C148 * C820 + C62 * C932) * C72 +
                      (C148 * C826 + C62 * C938) * C61) *
                         C63 * C14408 -
                     ((C148 * C79 + C62 * C155) * C61 +
                      (C148 * C74 + C62 * C150) * C72) *
                         C63 * C14401 -
                     ((C148 * C827 + C62 * C939) * C61 +
                      (C148 * C821 + C62 * C933) * C72) *
                         C63 * C10374) *
                        C6528 +
                    (((C148 * C379 + C62 * C491) * C72 +
                      (C148 * C385 + C62 * C497) * C61) *
                         C63 * C14401 -
                     ((C148 * C1924 + C62 * C2042) * C61 +
                      (C148 * C1921 + C62 * C2039) * C72) *
                         C63 * C14408 +
                     ((C148 * C5430 + C62 * C5536) * C72 +
                      (C148 * C5431 + C62 * C5537) * C61) *
                         C63 * C10374) *
                        C14363) *
                       C14283)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C14401 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14408 +
            ((C72 * C819 + C61 * C825) * C115 +
             (C72 * C881 + C61 * C981) * C63) *
                C62 * C10374) *
               C6528 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14408 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C14401 -
            ((C72 * C3040 + C61 * C3128) * C63 +
             (C72 * C2990 + C61 * C2993) * C115) *
                C62 * C10374) *
               C14363) *
              C14480 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14408 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C14401 -
            ((C72 * C883 + C61 * C983) * C63 +
             (C72 * C821 + C61 * C827) * C115) *
                C62 * C10374) *
               C6528 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C14401 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14408 +
            ((C72 * C5430 + C61 * C5431) * C115 +
             (C72 * C5484 + C61 * C5588) * C63) *
                C62 * C10374) *
               C14363) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14401 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14408 +
            (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C10374) *
               C6528 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14408 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14401 -
            (C208 * C2990 + C3173 + C3173 + C63 * C3169) * C61 * C62 * C10374) *
               C14363) *
              C14480 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14408 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14401 -
            (C208 * C821 + C1034 + C1034 + C63 * C1027) * C61 * C62 * C10374) *
               C6528 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14401 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14408 +
            (C208 * C5430 + C5641 + C5641 + C63 * C5639) * C61 * C62 * C10374) *
               C14363) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14401 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14408 +
                     ((C148 * C819 + C62 * C931) * C115 +
                      (C148 * C881 + C62 * C1075) * C63) *
                         C61 * C10374) *
                        C6528 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C14408 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14401 -
                     ((C148 * C3040 + C62 * C3213) * C63 +
                      (C148 * C2990 + C62 * C3084) * C115) *
                         C61 * C10374) *
                        C14363) *
                       C14480 +
                   ((((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14408 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14401 -
                     ((C148 * C883 + C62 * C1077) * C63 +
                      (C148 * C821 + C62 * C933) * C115) *
                         C61 * C10374) *
                        C6528 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14401 -
                     ((C148 * C1983 + C62 * C2204) * C63 +
                      (C148 * C1921 + C62 * C2039) * C115) *
                         C61 * C14408 +
                     ((C148 * C5430 + C62 * C5536) * C115 +
                      (C148 * C5484 + C62 * C5691) * C63) *
                         C61 * C10374) *
                        C14363) *
                       C14283)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C14401 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14408 +
            ((C72 * C819 + C61 * C825) * C148 +
             (C72 * C931 + C61 * C1119) * C62) *
                C63 * C10374) *
               C6528 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14408 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C14401 -
            ((C72 * C3084 + C61 * C3254) * C62 +
             (C72 * C2990 + C61 * C2993) * C148) *
                C63 * C10374) *
               C14363) *
              C14480 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14408 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C14401 -
            ((C72 * C933 + C61 * C1121) * C62 +
             (C72 * C821 + C61 * C827) * C148) *
                C63 * C10374) *
               C6528 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C14401 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14408 +
            ((C72 * C5430 + C61 * C5431) * C148 +
             (C72 * C5536 + C61 * C5742) * C62) *
                C63 * C10374) *
               C14363) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14401 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14408 +
                     ((C115 * C819 + C63 * C881) * C148 +
                      (C115 * C931 + C63 * C1163) * C62) *
                         C61 * C10374) *
                        C6528 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C14408 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14401 -
                     ((C115 * C3084 + C63 * C3295) * C62 +
                      (C115 * C2990 + C63 * C3040) * C148) *
                         C61 * C10374) *
                        C14363) *
                       C14480 +
                   ((((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14408 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14401 -
                     ((C115 * C933 + C63 * C1165) * C62 +
                      (C115 * C821 + C63 * C883) * C148) *
                         C61 * C10374) *
                        C6528 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14401 -
                     ((C115 * C2039 + C63 * C2310) * C62 +
                      (C115 * C1921 + C63 * C1983) * C148) *
                         C61 * C14408 +
                     ((C115 * C5430 + C63 * C5484) * C148 +
                      (C115 * C5536 + C63 * C5793) * C62) *
                         C61 * C10374) *
                        C14363) *
                       C14283)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14401 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14408 +
            (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C10374) *
               C6528 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14408 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14401 -
            (C322 * C2990 + C3340 + C3340 + C62 * C3336) * C63 * C61 * C10374) *
               C14363) *
              C14480 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14408 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14401 -
            (C322 * C821 + C1216 + C1216 + C62 * C1209) * C63 * C61 * C10374) *
               C6528 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14401 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14408 +
            (C322 * C5430 + C5846 + C5846 + C62 * C5844) * C63 * C61 * C10374) *
               C14363) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C8850 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
               C6528 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C8850) *
               C14363) *
              C14552 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C8850) *
               C6528 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C8850 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14405) *
               C14363) *
              C14539 +
          (((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C8850 -
            (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C14405) *
               C6528 +
           ((C71 * C1922 + C1932 + C1932 + C61 * C1928) * C62 * C63 * C14405 -
            (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C8850 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
              C14562 +
          ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C8850) *
              C14558 +
          ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C8850 -
           (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C14405) *
              C14548 +
          ((C71 * C4170 + C4174 + C4174 + C61 * C4172) * C62 * C63 * C14405 -
           (C71 * C2744 + C2751 + C2751 + C61 * C2748) * C62 * C63 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C115 * C73 + C63 * C116) * C72 +
             (C115 * C78 + C63 * C121) * C61) *
                C62 * C8850 -
            ((C115 * C824 + C63 * C886) * C61 +
             (C115 * C818 + C63 * C880) * C72) *
                C62 * C14405) *
               C6528 +
           (((C115 * C1920 + C63 * C1982) * C72 +
             (C115 * C1923 + C63 * C1985) * C61) *
                C62 * C14405 -
            ((C115 * C383 + C63 * C445) * C61 +
             (C115 * C377 + C63 * C439) * C72) *
                C62 * C8850) *
               C14363) *
              C14552 +
          ((((C115 * C820 + C63 * C882) * C72 +
             (C115 * C826 + C63 * C888) * C61) *
                C62 * C14405 -
            ((C115 * C79 + C63 * C122) * C61 +
             (C115 * C74 + C63 * C117) * C72) *
                C62 * C8850) *
               C6528 +
           (((C115 * C379 + C63 * C441) * C72 +
             (C115 * C385 + C63 * C447) * C61) *
                C62 * C8850 -
            ((C115 * C1924 + C63 * C1986) * C61 +
             (C115 * C1921 + C63 * C1983) * C72) *
                C62 * C14405) *
               C14363) *
              C14539 +
          ((((C115 * C75 + C63 * C118) * C72 +
             (C115 * C80 + C63 * C123) * C61) *
                C62 * C8850 -
            ((C115 * C828 + C63 * C890) * C61 +
             (C115 * C822 + C63 * C884) * C72) *
                C62 * C14405) *
               C6528 +
           (((C115 * C1922 + C63 * C1984) * C72 +
             (C115 * C1925 + C63 * C1987) * C61) *
                C62 * C14405 -
            ((C115 * C387 + C63 * C449) * C61 +
             (C115 * C381 + C63 * C443) * C72) *
                C62 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C8850 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14405) *
              C14562 +
          (((C115 * C1920 + C63 * C1982) * C72 +
            (C115 * C1923 + C63 * C1985) * C61) *
               C62 * C14405 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C8850) *
              C14558 +
          (((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C8850 -
           ((C115 * C2994 + C63 * C3044) * C61 +
            (C115 * C2991 + C63 * C3041) * C72) *
               C62 * C14405) *
              C14548 +
          (((C115 * C4170 + C63 * C4208) * C72 +
            (C115 * C4171 + C63 * C4209) * C61) *
               C62 * C14405 -
           ((C115 * C2746 + C63 * C2776) * C61 +
            (C115 * C2744 + C63 * C2774) * C72) *
               C62 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C148 * C73 + C62 * C149) * C72 +
             (C148 * C78 + C62 * C154) * C61) *
                C63 * C8850 -
            ((C148 * C824 + C62 * C936) * C61 +
             (C148 * C818 + C62 * C930) * C72) *
                C63 * C14405) *
               C6528 +
           (((C148 * C1920 + C62 * C2038) * C72 +
             (C148 * C1923 + C62 * C2041) * C61) *
                C63 * C14405 -
            ((C148 * C383 + C62 * C495) * C61 +
             (C148 * C377 + C62 * C489) * C72) *
                C63 * C8850) *
               C14363) *
              C14552 +
          ((((C148 * C820 + C62 * C932) * C72 +
             (C148 * C826 + C62 * C938) * C61) *
                C63 * C14405 -
            ((C148 * C79 + C62 * C155) * C61 +
             (C148 * C74 + C62 * C150) * C72) *
                C63 * C8850) *
               C6528 +
           (((C148 * C379 + C62 * C491) * C72 +
             (C148 * C385 + C62 * C497) * C61) *
                C63 * C8850 -
            ((C148 * C1924 + C62 * C2042) * C61 +
             (C148 * C1921 + C62 * C2039) * C72) *
                C63 * C14405) *
               C14363) *
              C14539 +
          ((((C148 * C75 + C62 * C151) * C72 +
             (C148 * C80 + C62 * C156) * C61) *
                C63 * C8850 -
            ((C148 * C828 + C62 * C940) * C61 +
             (C148 * C822 + C62 * C934) * C72) *
                C63 * C14405) *
               C6528 +
           (((C148 * C1922 + C62 * C2040) * C72 +
             (C148 * C1925 + C62 * C2043) * C61) *
                C63 * C14405 -
            ((C148 * C387 + C62 * C499) * C61 +
             (C148 * C381 + C62 * C493) * C72) *
                C63 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C8850 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14405) *
              C14562 +
          (((C148 * C1920 + C62 * C2038) * C72 +
            (C148 * C1923 + C62 * C2041) * C61) *
               C63 * C14405 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C8850) *
              C14558 +
          (((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C8850 -
           ((C148 * C2994 + C62 * C3088) * C61 +
            (C148 * C2991 + C62 * C3085) * C72) *
               C63 * C14405) *
              C14548 +
          (((C148 * C4170 + C62 * C4244) * C72 +
            (C148 * C4171 + C62 * C4245) * C61) *
               C63 * C14405 -
           ((C148 * C2746 + C62 * C2802) * C61 +
            (C148 * C2744 + C62 * C2800) * C72) *
               C63 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C8850 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14405) *
               C6528 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14405 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C8850) *
               C14363) *
              C14552 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14405 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C8850) *
               C6528 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C8850 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14405) *
               C14363) *
              C14539 +
          ((((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
                C62 * C8850 -
            ((C72 * C884 + C61 * C984) * C63 +
             (C72 * C822 + C61 * C828) * C115) *
                C62 * C14405) *
               C6528 +
           (((C72 * C1922 + C61 * C1925) * C115 +
             (C72 * C1984 + C61 * C2096) * C63) *
                C62 * C14405 -
            ((C72 * C443 + C61 * C543) * C63 +
             (C72 * C381 + C61 * C387) * C115) *
                C62 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C8850 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14405) *
              C14562 +
          (((C72 * C1920 + C61 * C1923) * C115 +
            (C72 * C1982 + C61 * C2094) * C63) *
               C62 * C14405 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C8850) *
              C14558 +
          (((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C8850 -
           ((C72 * C3041 + C61 * C3129) * C63 +
            (C72 * C2991 + C61 * C2994) * C115) *
               C62 * C14405) *
              C14548 +
          (((C72 * C4170 + C61 * C4171) * C115 +
            (C72 * C4208 + C61 * C4280) * C63) *
               C62 * C14405 -
           ((C72 * C2774 + C61 * C2826) * C63 +
            (C72 * C2744 + C61 * C2746) * C115) *
               C62 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C8850 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
               C6528 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C8850) *
               C14363) *
              C14552 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C8850) *
               C6528 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C8850 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14405) *
               C14363) *
              C14539 +
          (((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C8850 -
            (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C14405) *
               C6528 +
           ((C208 * C1922 + C2153 + C2153 + C63 * C2149) * C61 * C62 * C14405 -
            (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C8850 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
              C14562 +
          ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C8850) *
              C14558 +
          ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C8850 -
           (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C14405) *
              C14548 +
          ((C208 * C4170 + C4317 + C4317 + C63 * C4315) * C61 * C62 * C14405 -
           (C208 * C2744 + C2853 + C2853 + C63 * C2850) * C61 * C62 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyz[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C8850 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14405) *
                        C6528 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C14405 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C8850) *
                        C14363) *
                       C14552 +
                   ((((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14405 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C8850) *
                        C6528 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C8850 -
                     ((C148 * C1983 + C62 * C2204) * C63 +
                      (C148 * C1921 + C62 * C2039) * C115) *
                         C61 * C14405) *
                        C14363) *
                       C14539 +
                   ((((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C8850 -
                     ((C148 * C884 + C62 * C1078) * C63 +
                      (C148 * C822 + C62 * C934) * C115) *
                         C61 * C14405) *
                        C6528 +
                    (((C148 * C1922 + C62 * C2040) * C115 +
                      (C148 * C1984 + C62 * C2205) * C63) *
                         C61 * C14405 -
                     ((C148 * C443 + C62 * C637) * C63 +
                      (C148 * C381 + C62 * C493) * C115) *
                         C61 * C8850) *
                        C14363) *
                       C14514)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C8850 -
                    ((C148 * C880 + C62 * C1074) * C63 +
                     (C148 * C818 + C62 * C930) * C115) *
                        C61 * C14405) *
                       C14562 +
                   (((C148 * C1920 + C62 * C2038) * C115 +
                     (C148 * C1982 + C62 * C2203) * C63) *
                        C61 * C14405 -
                    ((C148 * C439 + C62 * C633) * C63 +
                     (C148 * C377 + C62 * C489) * C115) *
                        C61 * C8850) *
                       C14558 +
                   (((C148 * C378 + C62 * C490) * C115 +
                     (C148 * C440 + C62 * C634) * C63) *
                        C61 * C8850 -
                    ((C148 * C3041 + C62 * C3214) * C63 +
                     (C148 * C2991 + C62 * C3085) * C115) *
                        C61 * C14405) *
                       C14548 +
                   (((C148 * C4170 + C62 * C4244) * C115 +
                     (C148 * C4208 + C62 * C4351) * C63) *
                        C61 * C14405 -
                    ((C148 * C2774 + C62 * C2876) * C63 +
                     (C148 * C2744 + C62 * C2800) * C115) *
                        C61 * C8850) *
                       C14530) *
                  C14272) /
                     (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C8850 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14405) *
               C6528 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14405 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C8850) *
               C14363) *
              C14552 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14405 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C8850) *
               C6528 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C8850 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14405) *
               C14363) *
              C14539 +
          ((((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
                C63 * C8850 -
            ((C72 * C934 + C61 * C1122) * C62 +
             (C72 * C822 + C61 * C828) * C148) *
                C63 * C14405) *
               C6528 +
           (((C72 * C1922 + C61 * C1925) * C148 +
             (C72 * C2040 + C61 * C2258) * C62) *
                C63 * C14405 -
            ((C72 * C493 + C61 * C681) * C62 +
             (C72 * C381 + C61 * C387) * C148) *
                C63 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C8850 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14405) *
              C14562 +
          (((C72 * C1920 + C61 * C1923) * C148 +
            (C72 * C2038 + C61 * C2256) * C62) *
               C63 * C14405 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C8850) *
              C14558 +
          (((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C8850 -
           ((C72 * C3085 + C61 * C3255) * C62 +
            (C72 * C2991 + C61 * C2994) * C148) *
               C63 * C14405) *
              C14548 +
          (((C72 * C4170 + C61 * C4171) * C148 +
            (C72 * C4244 + C61 * C4386) * C62) *
               C63 * C14405 -
           ((C72 * C2800 + C61 * C2900) * C62 +
            (C72 * C2744 + C61 * C2746) * C148) *
               C63 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eezy[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C8850 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14405) *
                        C6528 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C14405 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C8850) *
                        C14363) *
                       C14552 +
                   ((((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14405 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C8850) *
                        C6528 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C8850 -
                     ((C115 * C2039 + C63 * C2310) * C62 +
                      (C115 * C1921 + C63 * C1983) * C148) *
                         C61 * C14405) *
                        C14363) *
                       C14539 +
                   ((((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C8850 -
                     ((C115 * C934 + C63 * C1166) * C62 +
                      (C115 * C822 + C63 * C884) * C148) *
                         C61 * C14405) *
                        C6528 +
                    (((C115 * C1922 + C63 * C1984) * C148 +
                      (C115 * C2040 + C63 * C2311) * C62) *
                         C61 * C14405 -
                     ((C115 * C493 + C63 * C725) * C62 +
                      (C115 * C381 + C63 * C443) * C148) *
                         C61 * C8850) *
                        C14363) *
                       C14514)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C8850 -
                    ((C115 * C930 + C63 * C1162) * C62 +
                     (C115 * C818 + C63 * C880) * C148) *
                        C61 * C14405) *
                       C14562 +
                   (((C115 * C1920 + C63 * C1982) * C148 +
                     (C115 * C2038 + C63 * C2309) * C62) *
                        C61 * C14405 -
                    ((C115 * C489 + C63 * C721) * C62 +
                     (C115 * C377 + C63 * C439) * C148) *
                        C61 * C8850) *
                       C14558 +
                   (((C115 * C378 + C63 * C440) * C148 +
                     (C115 * C490 + C63 * C722) * C62) *
                        C61 * C8850 -
                    ((C115 * C3085 + C63 * C3296) * C62 +
                     (C115 * C2991 + C63 * C3041) * C148) *
                        C61 * C14405) *
                       C14548 +
                   (((C115 * C4170 + C63 * C4208) * C148 +
                     (C115 * C4244 + C63 * C4421) * C62) *
                        C61 * C14405 -
                    ((C115 * C2800 + C63 * C2924) * C62 +
                     (C115 * C2744 + C63 * C2774) * C148) *
                        C61 * C8850) *
                       C14530) *
                  C14272) /
                     (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C8850 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
               C6528 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C8850) *
               C14363) *
              C14552 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C8850) *
               C6528 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C8850 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14405) *
               C14363) *
              C14539 +
          (((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C8850 -
            (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C14405) *
               C6528 +
           ((C322 * C1922 + C2368 + C2368 + C62 * C2364) * C63 * C61 * C14405 -
            (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C8850) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C8850 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
              C14562 +
          ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C8850) *
              C14558 +
          ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C8850 -
           (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C14405) *
              C14548 +
          ((C322 * C4170 + C4458 + C4458 + C62 * C4456) * C63 * C61 * C14405 -
           (C322 * C2744 + C2951 + C2951 + C62 * C2948) * C63 * C61 * C8850) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C3376 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C3377 +
           (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 *
               C3378 -
           (C71 * C2744 + C2751 + C2751 + C61 * C2748) * C62 * C63 * C14318 *
               C14530) *
              C14480 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C3377 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C3376 -
           (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14318 *
               C3378 +
           (C71 * C3382 + C3386 + C3386 + C61 * C3384) * C62 * C63 * C14318 *
               C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C14494 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C14363) *
              C1254 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C14363 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C14494) *
              C1255 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C14494 -
           (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14318 *
               C14363) *
              C1256 +
          ((C71 * C1258 + C1262 + C1262 + C61 * C1260) * C62 * C63 * C14318 *
               C14363 -
           (C71 * C76 + C92 + C92 + C61 * C86) * C62 * C63 * C14318 * C14494) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C4496 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C4497 +
            (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C14523) *
               C14494 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C4497 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C4496 -
            (C71 * C2990 + C3000 + C3000 + C61 * C2996) * C62 * C63 * C14523) *
               C14363) *
              C14480 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C4497 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C4496 -
            (C71 * C821 + C840 + C840 + C61 * C833) * C62 * C63 * C14523) *
               C14494 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C4496 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C4497 +
            (C71 * C5430 + C5434 + C5434 + C61 * C5432) * C62 * C63 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C3376 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C3377 +
           ((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14318 * C3378 -
           ((C115 * C2746 + C63 * C2776) * C61 +
            (C115 * C2744 + C63 * C2774) * C72) *
               C62 * C14318 * C14530) *
              C14480 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C3377 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C3376 -
           ((C115 * C386 + C63 * C448) * C61 +
            (C115 * C380 + C63 * C442) * C72) *
               C62 * C14318 * C3378 +
           ((C115 * C3382 + C63 * C3420) * C72 +
            (C115 * C3383 + C63 * C3421) * C61) *
               C62 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C14494 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C14363) *
              C1254 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C14363 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C14494) *
              C1255 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14318 * C14494 -
           ((C115 * C387 + C63 * C449) * C61 +
            (C115 * C381 + C63 * C443) * C72) *
               C62 * C14318 * C14363) *
              C1256 +
          (((C115 * C1258 + C63 * C1296) * C72 +
            (C115 * C1259 + C63 * C1297) * C61) *
               C62 * C14318 * C14363 -
           ((C115 * C81 + C63 * C124) * C61 + (C115 * C76 + C63 * C119) * C72) *
               C62 * C14318 * C14494) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C115 * C73 + C63 * C116) * C72 +
             (C115 * C78 + C63 * C121) * C61) *
                C62 * C4496 -
            ((C115 * C824 + C63 * C886) * C61 +
             (C115 * C818 + C63 * C880) * C72) *
                C62 * C4497 +
            ((C115 * C819 + C63 * C881) * C72 +
             (C115 * C825 + C63 * C887) * C61) *
                C62 * C14523) *
               C14494 +
           (((C115 * C1920 + C63 * C1982) * C72 +
             (C115 * C1923 + C63 * C1985) * C61) *
                C62 * C4497 -
            ((C115 * C383 + C63 * C445) * C61 +
             (C115 * C377 + C63 * C439) * C72) *
                C62 * C4496 -
            ((C115 * C2993 + C63 * C3043) * C61 +
             (C115 * C2990 + C63 * C3040) * C72) *
                C62 * C14523) *
               C14363) *
              C14480 +
          ((((C115 * C820 + C63 * C882) * C72 +
             (C115 * C826 + C63 * C888) * C61) *
                C62 * C4497 -
            ((C115 * C79 + C63 * C122) * C61 +
             (C115 * C74 + C63 * C117) * C72) *
                C62 * C4496 -
            ((C115 * C827 + C63 * C889) * C61 +
             (C115 * C821 + C63 * C883) * C72) *
                C62 * C14523) *
               C14494 +
           (((C115 * C379 + C63 * C441) * C72 +
             (C115 * C385 + C63 * C447) * C61) *
                C62 * C4496 -
            ((C115 * C1924 + C63 * C1986) * C61 +
             (C115 * C1921 + C63 * C1983) * C72) *
                C62 * C4497 +
            ((C115 * C5430 + C63 * C5484) * C72 +
             (C115 * C5431 + C63 * C5485) * C61) *
                C62 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C3376 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C3377 +
           ((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14318 * C3378 -
           ((C148 * C2746 + C62 * C2802) * C61 +
            (C148 * C2744 + C62 * C2800) * C72) *
               C63 * C14318 * C14530) *
              C14480 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C3377 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C3376 -
           ((C148 * C386 + C62 * C498) * C61 +
            (C148 * C380 + C62 * C492) * C72) *
               C63 * C14318 * C3378 +
           ((C148 * C3382 + C62 * C3456) * C72 +
            (C148 * C3383 + C62 * C3457) * C61) *
               C63 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C14494 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C14363) *
              C1254 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C14363 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C14494) *
              C1255 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14318 * C14494 -
           ((C148 * C387 + C62 * C499) * C61 +
            (C148 * C381 + C62 * C493) * C72) *
               C63 * C14318 * C14363) *
              C1256 +
          (((C148 * C1258 + C62 * C1332) * C72 +
            (C148 * C1259 + C62 * C1333) * C61) *
               C63 * C14318 * C14363 -
           ((C148 * C81 + C62 * C157) * C61 + (C148 * C76 + C62 * C152) * C72) *
               C63 * C14318 * C14494) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C148 * C73 + C62 * C149) * C72 +
             (C148 * C78 + C62 * C154) * C61) *
                C63 * C4496 -
            ((C148 * C824 + C62 * C936) * C61 +
             (C148 * C818 + C62 * C930) * C72) *
                C63 * C4497 +
            ((C148 * C819 + C62 * C931) * C72 +
             (C148 * C825 + C62 * C937) * C61) *
                C63 * C14523) *
               C14494 +
           (((C148 * C1920 + C62 * C2038) * C72 +
             (C148 * C1923 + C62 * C2041) * C61) *
                C63 * C4497 -
            ((C148 * C383 + C62 * C495) * C61 +
             (C148 * C377 + C62 * C489) * C72) *
                C63 * C4496 -
            ((C148 * C2993 + C62 * C3087) * C61 +
             (C148 * C2990 + C62 * C3084) * C72) *
                C63 * C14523) *
               C14363) *
              C14480 +
          ((((C148 * C820 + C62 * C932) * C72 +
             (C148 * C826 + C62 * C938) * C61) *
                C63 * C4497 -
            ((C148 * C79 + C62 * C155) * C61 +
             (C148 * C74 + C62 * C150) * C72) *
                C63 * C4496 -
            ((C148 * C827 + C62 * C939) * C61 +
             (C148 * C821 + C62 * C933) * C72) *
                C63 * C14523) *
               C14494 +
           (((C148 * C379 + C62 * C491) * C72 +
             (C148 * C385 + C62 * C497) * C61) *
                C63 * C4496 -
            ((C148 * C1924 + C62 * C2042) * C61 +
             (C148 * C1921 + C62 * C2039) * C72) *
                C63 * C4497 +
            ((C148 * C5430 + C62 * C5536) * C72 +
             (C148 * C5431 + C62 * C5537) * C61) *
                C63 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C3376 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C3377 +
           ((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14318 * C3378 -
           ((C72 * C2774 + C61 * C2826) * C63 +
            (C72 * C2744 + C61 * C2746) * C115) *
               C62 * C14318 * C14530) *
              C14480 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C3377 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C3376 -
           ((C72 * C442 + C61 * C542) * C63 +
            (C72 * C380 + C61 * C386) * C115) *
               C62 * C14318 * C3378 +
           ((C72 * C3382 + C61 * C3383) * C115 +
            (C72 * C3420 + C61 * C3492) * C63) *
               C62 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C14494 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C14363) *
              C1254 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C14363 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C14494) *
              C1255 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14318 * C14494 -
           ((C72 * C443 + C61 * C543) * C63 +
            (C72 * C381 + C61 * C387) * C115) *
               C62 * C14318 * C14363) *
              C1256 +
          (((C72 * C1258 + C61 * C1259) * C115 +
            (C72 * C1296 + C61 * C1368) * C63) *
               C62 * C14318 * C14363 -
           ((C72 * C119 + C61 * C184) * C63 + (C72 * C76 + C61 * C81) * C115) *
               C62 * C14318 * C14494) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C4496 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C4497 +
            ((C72 * C819 + C61 * C825) * C115 +
             (C72 * C881 + C61 * C981) * C63) *
                C62 * C14523) *
               C14494 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C4497 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C4496 -
            ((C72 * C3040 + C61 * C3128) * C63 +
             (C72 * C2990 + C61 * C2993) * C115) *
                C62 * C14523) *
               C14363) *
              C14480 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C4497 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C4496 -
            ((C72 * C883 + C61 * C983) * C63 +
             (C72 * C821 + C61 * C827) * C115) *
                C62 * C14523) *
               C14494 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C4496 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C4497 +
            ((C72 * C5430 + C61 * C5431) * C115 +
             (C72 * C5484 + C61 * C5588) * C63) *
                C62 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
               C3376 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
               C3377 +
           (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
               C3378 -
           (C208 * C2744 + C2853 + C2853 + C63 * C2850) * C61 * C62 * C14318 *
               C14530) *
              C14480 +
          ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14318 *
               C3377 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
               C3376 -
           (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C14318 *
               C3378 +
           (C208 * C3382 + C3529 + C3529 + C63 * C3527) * C61 * C62 * C14318 *
               C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
               C14494 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
               C14363) *
              C1254 +
          ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14318 *
               C14363 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
               C14494) *
              C1255 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
               C14494 -
           (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C14318 *
               C14363) *
              C1256 +
          ((C208 * C1258 + C1405 + C1405 + C63 * C1403) * C61 * C62 * C14318 *
               C14363 -
           (C208 * C76 + C218 + C218 + C63 * C212) * C61 * C62 * C14318 *
               C14494) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C4496 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C4497 +
            (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C14523) *
               C14494 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C4497 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C4496 -
            (C208 * C2990 + C3173 + C3173 + C63 * C3169) * C61 * C62 * C14523) *
               C14363) *
              C14480 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C4497 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C4496 -
            (C208 * C821 + C1034 + C1034 + C63 * C1027) * C61 * C62 * C14523) *
               C14494 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C4496 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C4497 +
            (C208 * C5430 + C5641 + C5641 + C63 * C5639) * C61 * C62 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14318 * C3376 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14318 * C3377 +
                     ((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14318 * C3378 -
                     ((C148 * C2774 + C62 * C2876) * C63 +
                      (C148 * C2744 + C62 * C2800) * C115) *
                         C61 * C14318 * C14530) *
                        C14480 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14318 * C3377 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14318 * C3376 -
                     ((C148 * C442 + C62 * C636) * C63 +
                      (C148 * C380 + C62 * C492) * C115) *
                         C61 * C14318 * C3378 +
                     ((C148 * C3382 + C62 * C3456) * C115 +
                      (C148 * C3420 + C62 * C3563) * C63) *
                         C61 * C14318 * C14530) *
                        C14283)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14318 * C14494 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14318 * C14363) *
                        C1254 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14318 * C14363 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14318 * C14494) *
                        C1255 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14318 * C14494 -
                     ((C148 * C443 + C62 * C637) * C63 +
                      (C148 * C381 + C62 * C493) * C115) *
                         C61 * C14318 * C14363) *
                        C1256 +
                    (((C148 * C1258 + C62 * C1332) * C115 +
                      (C148 * C1296 + C62 * C1439) * C63) *
                         C61 * C14318 * C14363 -
                     ((C148 * C119 + C62 * C244) * C63 +
                      (C148 * C76 + C62 * C152) * C115) *
                         C61 * C14318 * C14494) *
                        C14524)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C148 * C73 + C62 * C149) * C115 +
                       (C148 * C116 + C62 * C241) * C63) *
                          C61 * C4496 -
                      ((C148 * C880 + C62 * C1074) * C63 +
                       (C148 * C818 + C62 * C930) * C115) *
                          C61 * C4497 +
                      ((C148 * C819 + C62 * C931) * C115 +
                       (C148 * C881 + C62 * C1075) * C63) *
                          C61 * C14523) *
                         C14494 +
                     (((C148 * C1920 + C62 * C2038) * C115 +
                       (C148 * C1982 + C62 * C2203) * C63) *
                          C61 * C4497 -
                      ((C148 * C439 + C62 * C633) * C63 +
                       (C148 * C377 + C62 * C489) * C115) *
                          C61 * C4496 -
                      ((C148 * C3040 + C62 * C3213) * C63 +
                       (C148 * C2990 + C62 * C3084) * C115) *
                          C61 * C14523) *
                         C14363) *
                        C14480 +
                    ((((C148 * C820 + C62 * C932) * C115 +
                       (C148 * C882 + C62 * C1076) * C63) *
                          C61 * C4497 -
                      ((C148 * C117 + C62 * C242) * C63 +
                       (C148 * C74 + C62 * C150) * C115) *
                          C61 * C4496 -
                      ((C148 * C883 + C62 * C1077) * C63 +
                       (C148 * C821 + C62 * C933) * C115) *
                          C61 * C14523) *
                         C14494 +
                     (((C148 * C379 + C62 * C491) * C115 +
                       (C148 * C441 + C62 * C635) * C63) *
                          C61 * C4496 -
                      ((C148 * C1983 + C62 * C2204) * C63 +
                       (C148 * C1921 + C62 * C2039) * C115) *
                          C61 * C4497 +
                      ((C148 * C5430 + C62 * C5536) * C115 +
                       (C148 * C5484 + C62 * C5691) * C63) *
                          C61 * C14523) *
                         C14363) *
                        C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C3376 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C3377 +
           ((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14318 * C3378 -
           ((C72 * C2800 + C61 * C2900) * C62 +
            (C72 * C2744 + C61 * C2746) * C148) *
               C63 * C14318 * C14530) *
              C14480 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C3377 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C3376 -
           ((C72 * C492 + C61 * C680) * C62 +
            (C72 * C380 + C61 * C386) * C148) *
               C63 * C14318 * C3378 +
           ((C72 * C3382 + C61 * C3383) * C148 +
            (C72 * C3456 + C61 * C3598) * C62) *
               C63 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C14494 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C14363) *
              C1254 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C14363 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C14494) *
              C1255 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14318 * C14494 -
           ((C72 * C493 + C61 * C681) * C62 +
            (C72 * C381 + C61 * C387) * C148) *
               C63 * C14318 * C14363) *
              C1256 +
          (((C72 * C1258 + C61 * C1259) * C148 +
            (C72 * C1332 + C61 * C1474) * C62) *
               C63 * C14318 * C14363 -
           ((C72 * C152 + C61 * C271) * C62 + (C72 * C76 + C61 * C81) * C148) *
               C63 * C14318 * C14494) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C4496 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C4497 +
            ((C72 * C819 + C61 * C825) * C148 +
             (C72 * C931 + C61 * C1119) * C62) *
                C63 * C14523) *
               C14494 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C4497 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C4496 -
            ((C72 * C3084 + C61 * C3254) * C62 +
             (C72 * C2990 + C61 * C2993) * C148) *
                C63 * C14523) *
               C14363) *
              C14480 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C4497 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C4496 -
            ((C72 * C933 + C61 * C1121) * C62 +
             (C72 * C821 + C61 * C827) * C148) *
                C63 * C14523) *
               C14494 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C4496 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C4497 +
            ((C72 * C5430 + C61 * C5431) * C148 +
             (C72 * C5536 + C61 * C5742) * C62) *
                C63 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eezy[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14318 * C3376 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14318 * C3377 +
                     ((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14318 * C3378 -
                     ((C115 * C2800 + C63 * C2924) * C62 +
                      (C115 * C2744 + C63 * C2774) * C148) *
                         C61 * C14318 * C14530) *
                        C14480 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14318 * C3377 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14318 * C3376 -
                     ((C115 * C492 + C63 * C724) * C62 +
                      (C115 * C380 + C63 * C442) * C148) *
                         C61 * C14318 * C3378 +
                     ((C115 * C3382 + C63 * C3420) * C148 +
                      (C115 * C3456 + C63 * C3633) * C62) *
                         C61 * C14318 * C14530) *
                        C14283)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14318 * C14494 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14318 * C14363) *
                        C1254 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14318 * C14363 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14318 * C14494) *
                        C1255 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14318 * C14494 -
                     ((C115 * C493 + C63 * C725) * C62 +
                      (C115 * C381 + C63 * C443) * C148) *
                         C61 * C14318 * C14363) *
                        C1256 +
                    (((C115 * C1258 + C63 * C1296) * C148 +
                      (C115 * C1332 + C63 * C1509) * C62) *
                         C61 * C14318 * C14363 -
                     ((C115 * C152 + C63 * C298) * C62 +
                      (C115 * C76 + C63 * C119) * C148) *
                         C61 * C14318 * C14494) *
                        C14524)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C115 * C73 + C63 * C116) * C148 +
                       (C115 * C149 + C63 * C295) * C62) *
                          C61 * C4496 -
                      ((C115 * C930 + C63 * C1162) * C62 +
                       (C115 * C818 + C63 * C880) * C148) *
                          C61 * C4497 +
                      ((C115 * C819 + C63 * C881) * C148 +
                       (C115 * C931 + C63 * C1163) * C62) *
                          C61 * C14523) *
                         C14494 +
                     (((C115 * C1920 + C63 * C1982) * C148 +
                       (C115 * C2038 + C63 * C2309) * C62) *
                          C61 * C4497 -
                      ((C115 * C489 + C63 * C721) * C62 +
                       (C115 * C377 + C63 * C439) * C148) *
                          C61 * C4496 -
                      ((C115 * C3084 + C63 * C3295) * C62 +
                       (C115 * C2990 + C63 * C3040) * C148) *
                          C61 * C14523) *
                         C14363) *
                        C14480 +
                    ((((C115 * C820 + C63 * C882) * C148 +
                       (C115 * C932 + C63 * C1164) * C62) *
                          C61 * C4497 -
                      ((C115 * C150 + C63 * C296) * C62 +
                       (C115 * C74 + C63 * C117) * C148) *
                          C61 * C4496 -
                      ((C115 * C933 + C63 * C1165) * C62 +
                       (C115 * C821 + C63 * C883) * C148) *
                          C61 * C14523) *
                         C14494 +
                     (((C115 * C379 + C63 * C441) * C148 +
                       (C115 * C491 + C63 * C723) * C62) *
                          C61 * C4496 -
                      ((C115 * C2039 + C63 * C2310) * C62 +
                       (C115 * C1921 + C63 * C1983) * C148) *
                          C61 * C4497 +
                      ((C115 * C5430 + C63 * C5484) * C148 +
                       (C115 * C5536 + C63 * C5793) * C62) *
                          C61 * C14523) *
                         C14363) *
                        C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
               C3376 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
               C3377 +
           (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
               C3378 -
           (C322 * C2744 + C2951 + C2951 + C62 * C2948) * C63 * C61 * C14318 *
               C14530) *
              C14480 +
          ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14318 *
               C3377 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
               C3376 -
           (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C14318 *
               C3378 +
           (C322 * C3382 + C3670 + C3670 + C62 * C3668) * C63 * C61 * C14318 *
               C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
               C14494 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
               C14363) *
              C1254 +
          ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14318 *
               C14363 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
               C14494) *
              C1255 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
               C14494 -
           (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C14318 *
               C14363) *
              C1256 +
          ((C322 * C1258 + C1546 + C1546 + C62 * C1544) * C63 * C61 * C14318 *
               C14363 -
           (C322 * C76 + C332 + C332 + C62 * C326) * C63 * C61 * C14318 *
               C14494) *
              C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C4496 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C4497 +
            (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C14523) *
               C14494 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C4497 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C4496 -
            (C322 * C2990 + C3340 + C3340 + C62 * C3336) * C63 * C61 * C14523) *
               C14363) *
              C14480 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C4497 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C4496 -
            (C322 * C821 + C1216 + C1216 + C62 * C1209) * C63 * C61 * C14523) *
               C14494 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C4496 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C4497 +
            (C322 * C5430 + C5846 + C5846 + C62 * C5844) * C63 * C61 * C14523) *
               C14363) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14495 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
              C3376 +
          ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14495) *
              C3377 +
          ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14495 -
           (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C14405) *
              C3378 +
          ((C71 * C4170 + C4174 + C4174 + C61 * C4172) * C62 * C63 * C14405 -
           (C71 * C2744 + C2751 + C2751 + C61 * C2748) * C62 * C63 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14495 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
               C14494 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14495) *
               C14363) *
              C374 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14495) *
               C14494 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14495 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14405) *
               C14363) *
              C375 +
          (((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14495 -
            (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C14405) *
               C14494 +
           ((C71 * C1922 + C1932 + C1932 + C61 * C1928) * C62 * C63 * C14405 -
            (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C5880 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C5881 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C5882 -
           (C71 * C5172 + C5179 + C5179 + C61 * C5176) * C62 * C63 * C14536) *
              C14494 +
          ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C5881 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C5880 -
           (C71 * C2990 + C3000 + C3000 + C61 * C2996) * C62 * C63 * C5882 +
           (C71 * C6206 + C6210 + C6210 + C61 * C6208) * C62 * C63 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14495 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14405) *
              C3376 +
          (((C115 * C1920 + C63 * C1982) * C72 +
            (C115 * C1923 + C63 * C1985) * C61) *
               C62 * C14405 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14495) *
              C3377 +
          (((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14495 -
           ((C115 * C2994 + C63 * C3044) * C61 +
            (C115 * C2991 + C63 * C3041) * C72) *
               C62 * C14405) *
              C3378 +
          (((C115 * C4170 + C63 * C4208) * C72 +
            (C115 * C4171 + C63 * C4209) * C61) *
               C62 * C14405 -
           ((C115 * C2746 + C63 * C2776) * C61 +
            (C115 * C2744 + C63 * C2774) * C72) *
               C62 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C115 * C73 + C63 * C116) * C72 +
             (C115 * C78 + C63 * C121) * C61) *
                C62 * C14495 -
            ((C115 * C824 + C63 * C886) * C61 +
             (C115 * C818 + C63 * C880) * C72) *
                C62 * C14405) *
               C14494 +
           (((C115 * C1920 + C63 * C1982) * C72 +
             (C115 * C1923 + C63 * C1985) * C61) *
                C62 * C14405 -
            ((C115 * C383 + C63 * C445) * C61 +
             (C115 * C377 + C63 * C439) * C72) *
                C62 * C14495) *
               C14363) *
              C374 +
          ((((C115 * C820 + C63 * C882) * C72 +
             (C115 * C826 + C63 * C888) * C61) *
                C62 * C14405 -
            ((C115 * C79 + C63 * C122) * C61 +
             (C115 * C74 + C63 * C117) * C72) *
                C62 * C14495) *
               C14494 +
           (((C115 * C379 + C63 * C441) * C72 +
             (C115 * C385 + C63 * C447) * C61) *
                C62 * C14495 -
            ((C115 * C1924 + C63 * C1986) * C61 +
             (C115 * C1921 + C63 * C1983) * C72) *
                C62 * C14405) *
               C14363) *
              C375 +
          ((((C115 * C75 + C63 * C118) * C72 +
             (C115 * C80 + C63 * C123) * C61) *
                C62 * C14495 -
            ((C115 * C828 + C63 * C890) * C61 +
             (C115 * C822 + C63 * C884) * C72) *
                C62 * C14405) *
               C14494 +
           (((C115 * C1922 + C63 * C1984) * C72 +
             (C115 * C1925 + C63 * C1987) * C61) *
                C62 * C14405 -
            ((C115 * C387 + C63 * C449) * C61 +
             (C115 * C381 + C63 * C443) * C72) *
                C62 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C5880 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C5881 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C5882 -
           ((C115 * C5174 + C63 * C5204) * C61 +
            (C115 * C5172 + C63 * C5202) * C72) *
               C62 * C14536) *
              C14494 +
          (((C115 * C1920 + C63 * C1982) * C72 +
            (C115 * C1923 + C63 * C1985) * C61) *
               C62 * C5881 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C5880 -
           ((C115 * C2993 + C63 * C3043) * C61 +
            (C115 * C2990 + C63 * C3040) * C72) *
               C62 * C5882 +
           ((C115 * C6206 + C63 * C6244) * C72 +
            (C115 * C6207 + C63 * C6245) * C61) *
               C62 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14495 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14405) *
              C3376 +
          (((C148 * C1920 + C62 * C2038) * C72 +
            (C148 * C1923 + C62 * C2041) * C61) *
               C63 * C14405 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14495) *
              C3377 +
          (((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14495 -
           ((C148 * C2994 + C62 * C3088) * C61 +
            (C148 * C2991 + C62 * C3085) * C72) *
               C63 * C14405) *
              C3378 +
          (((C148 * C4170 + C62 * C4244) * C72 +
            (C148 * C4171 + C62 * C4245) * C61) *
               C63 * C14405 -
           ((C148 * C2746 + C62 * C2802) * C61 +
            (C148 * C2744 + C62 * C2800) * C72) *
               C63 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C148 * C73 + C62 * C149) * C72 +
             (C148 * C78 + C62 * C154) * C61) *
                C63 * C14495 -
            ((C148 * C824 + C62 * C936) * C61 +
             (C148 * C818 + C62 * C930) * C72) *
                C63 * C14405) *
               C14494 +
           (((C148 * C1920 + C62 * C2038) * C72 +
             (C148 * C1923 + C62 * C2041) * C61) *
                C63 * C14405 -
            ((C148 * C383 + C62 * C495) * C61 +
             (C148 * C377 + C62 * C489) * C72) *
                C63 * C14495) *
               C14363) *
              C374 +
          ((((C148 * C820 + C62 * C932) * C72 +
             (C148 * C826 + C62 * C938) * C61) *
                C63 * C14405 -
            ((C148 * C79 + C62 * C155) * C61 +
             (C148 * C74 + C62 * C150) * C72) *
                C63 * C14495) *
               C14494 +
           (((C148 * C379 + C62 * C491) * C72 +
             (C148 * C385 + C62 * C497) * C61) *
                C63 * C14495 -
            ((C148 * C1924 + C62 * C2042) * C61 +
             (C148 * C1921 + C62 * C2039) * C72) *
                C63 * C14405) *
               C14363) *
              C375 +
          ((((C148 * C75 + C62 * C151) * C72 +
             (C148 * C80 + C62 * C156) * C61) *
                C63 * C14495 -
            ((C148 * C828 + C62 * C940) * C61 +
             (C148 * C822 + C62 * C934) * C72) *
                C63 * C14405) *
               C14494 +
           (((C148 * C1922 + C62 * C2040) * C72 +
             (C148 * C1925 + C62 * C2043) * C61) *
                C63 * C14405 -
            ((C148 * C387 + C62 * C499) * C61 +
             (C148 * C381 + C62 * C493) * C72) *
                C63 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C5880 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C5881 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C5882 -
           ((C148 * C5174 + C62 * C5230) * C61 +
            (C148 * C5172 + C62 * C5228) * C72) *
               C63 * C14536) *
              C14494 +
          (((C148 * C1920 + C62 * C2038) * C72 +
            (C148 * C1923 + C62 * C2041) * C61) *
               C63 * C5881 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C5880 -
           ((C148 * C2993 + C62 * C3087) * C61 +
            (C148 * C2990 + C62 * C3084) * C72) *
               C63 * C5882 +
           ((C148 * C6206 + C62 * C6280) * C72 +
            (C148 * C6207 + C62 * C6281) * C61) *
               C63 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14495 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14405) *
              C3376 +
          (((C72 * C1920 + C61 * C1923) * C115 +
            (C72 * C1982 + C61 * C2094) * C63) *
               C62 * C14405 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14495) *
              C3377 +
          (((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14495 -
           ((C72 * C3041 + C61 * C3129) * C63 +
            (C72 * C2991 + C61 * C2994) * C115) *
               C62 * C14405) *
              C3378 +
          (((C72 * C4170 + C61 * C4171) * C115 +
            (C72 * C4208 + C61 * C4280) * C63) *
               C62 * C14405 -
           ((C72 * C2774 + C61 * C2826) * C63 +
            (C72 * C2744 + C61 * C2746) * C115) *
               C62 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C14495 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14405) *
               C14494 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14405 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C14495) *
               C14363) *
              C374 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14405 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C14495) *
               C14494 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C14495 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14405) *
               C14363) *
              C375 +
          ((((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
                C62 * C14495 -
            ((C72 * C884 + C61 * C984) * C63 +
             (C72 * C822 + C61 * C828) * C115) *
                C62 * C14405) *
               C14494 +
           (((C72 * C1922 + C61 * C1925) * C115 +
             (C72 * C1984 + C61 * C2096) * C63) *
                C62 * C14405 -
            ((C72 * C443 + C61 * C543) * C63 +
             (C72 * C381 + C61 * C387) * C115) *
                C62 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C5880 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C5881 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C5882 -
           ((C72 * C5202 + C61 * C5254) * C63 +
            (C72 * C5172 + C61 * C5174) * C115) *
               C62 * C14536) *
              C14494 +
          (((C72 * C1920 + C61 * C1923) * C115 +
            (C72 * C1982 + C61 * C2094) * C63) *
               C62 * C5881 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C5880 -
           ((C72 * C3040 + C61 * C3128) * C63 +
            (C72 * C2990 + C61 * C2993) * C115) *
               C62 * C5882 +
           ((C72 * C6206 + C61 * C6207) * C115 +
            (C72 * C6244 + C61 * C6316) * C63) *
               C62 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14495 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
              C3376 +
          ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14495) *
              C3377 +
          ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14495 -
           (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C14405) *
              C3378 +
          ((C208 * C4170 + C4317 + C4317 + C63 * C4315) * C61 * C62 * C14405 -
           (C208 * C2744 + C2853 + C2853 + C63 * C2850) * C61 * C62 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14495 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
               C14494 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14495) *
               C14363) *
              C374 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14495) *
               C14494 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14495 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14405) *
               C14363) *
              C375 +
          (((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14495 -
            (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C14405) *
               C14494 +
           ((C208 * C1922 + C2153 + C2153 + C63 * C2149) * C61 * C62 * C14405 -
            (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C5880 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C5881 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C5882 -
           (C208 * C5172 + C5281 + C5281 + C63 * C5278) * C61 * C62 * C14536) *
              C14494 +
          ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C5881 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C5880 -
           (C208 * C2990 + C3173 + C3173 + C63 * C3169) * C61 * C62 * C5882 +
           (C208 * C6206 + C6353 + C6353 + C63 * C6351) * C61 * C62 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyz[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14495 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14405) *
                        C3376 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C14405 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14495) *
                        C3377 +
                    (((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14495 -
                     ((C148 * C3041 + C62 * C3214) * C63 +
                      (C148 * C2991 + C62 * C3085) * C115) *
                         C61 * C14405) *
                        C3378 +
                    (((C148 * C4170 + C62 * C4244) * C115 +
                      (C148 * C4208 + C62 * C4351) * C63) *
                         C61 * C14405 -
                     ((C148 * C2774 + C62 * C2876) * C63 +
                      (C148 * C2744 + C62 * C2800) * C115) *
                         C61 * C14495) *
                        C14530) *
                   C14272) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C148 * C73 + C62 * C149) * C115 +
                       (C148 * C116 + C62 * C241) * C63) *
                          C61 * C14495 -
                      ((C148 * C880 + C62 * C1074) * C63 +
                       (C148 * C818 + C62 * C930) * C115) *
                          C61 * C14405) *
                         C14494 +
                     (((C148 * C1920 + C62 * C2038) * C115 +
                       (C148 * C1982 + C62 * C2203) * C63) *
                          C61 * C14405 -
                      ((C148 * C439 + C62 * C633) * C63 +
                       (C148 * C377 + C62 * C489) * C115) *
                          C61 * C14495) *
                         C14363) *
                        C374 +
                    ((((C148 * C820 + C62 * C932) * C115 +
                       (C148 * C882 + C62 * C1076) * C63) *
                          C61 * C14405 -
                      ((C148 * C117 + C62 * C242) * C63 +
                       (C148 * C74 + C62 * C150) * C115) *
                          C61 * C14495) *
                         C14494 +
                     (((C148 * C379 + C62 * C491) * C115 +
                       (C148 * C441 + C62 * C635) * C63) *
                          C61 * C14495 -
                      ((C148 * C1983 + C62 * C2204) * C63 +
                       (C148 * C1921 + C62 * C2039) * C115) *
                          C61 * C14405) *
                         C14363) *
                        C375 +
                    ((((C148 * C75 + C62 * C151) * C115 +
                       (C148 * C118 + C62 * C243) * C63) *
                          C61 * C14495 -
                      ((C148 * C884 + C62 * C1078) * C63 +
                       (C148 * C822 + C62 * C934) * C115) *
                          C61 * C14405) *
                         C14494 +
                     (((C148 * C1922 + C62 * C2040) * C115 +
                       (C148 * C1984 + C62 * C2205) * C63) *
                          C61 * C14405 -
                      ((C148 * C443 + C62 * C637) * C63 +
                       (C148 * C381 + C62 * C493) * C115) *
                          C61 * C14495) *
                         C14363) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C5880 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C5881 +
                     ((C148 * C819 + C62 * C931) * C115 +
                      (C148 * C881 + C62 * C1075) * C63) *
                         C61 * C5882 -
                     ((C148 * C5202 + C62 * C5304) * C63 +
                      (C148 * C5172 + C62 * C5228) * C115) *
                         C61 * C14536) *
                        C14494 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C5881 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C5880 -
                     ((C148 * C3040 + C62 * C3213) * C63 +
                      (C148 * C2990 + C62 * C3084) * C115) *
                         C61 * C5882 +
                     ((C148 * C6206 + C62 * C6280) * C115 +
                      (C148 * C6244 + C62 * C6387) * C63) *
                         C61 * C14536) *
                        C14363) *
                   C14272) /
                      (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14495 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14405) *
              C3376 +
          (((C72 * C1920 + C61 * C1923) * C148 +
            (C72 * C2038 + C61 * C2256) * C62) *
               C63 * C14405 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14495) *
              C3377 +
          (((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14495 -
           ((C72 * C3085 + C61 * C3255) * C62 +
            (C72 * C2991 + C61 * C2994) * C148) *
               C63 * C14405) *
              C3378 +
          (((C72 * C4170 + C61 * C4171) * C148 +
            (C72 * C4244 + C61 * C4386) * C62) *
               C63 * C14405 -
           ((C72 * C2800 + C61 * C2900) * C62 +
            (C72 * C2744 + C61 * C2746) * C148) *
               C63 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C14495 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14405) *
               C14494 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14405 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C14495) *
               C14363) *
              C374 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14405 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C14495) *
               C14494 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C14495 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14405) *
               C14363) *
              C375 +
          ((((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
                C63 * C14495 -
            ((C72 * C934 + C61 * C1122) * C62 +
             (C72 * C822 + C61 * C828) * C148) *
                C63 * C14405) *
               C14494 +
           (((C72 * C1922 + C61 * C1925) * C148 +
             (C72 * C2040 + C61 * C2258) * C62) *
                C63 * C14405 -
            ((C72 * C493 + C61 * C681) * C62 +
             (C72 * C381 + C61 * C387) * C148) *
                C63 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C5880 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C5881 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C5882 -
           ((C72 * C5228 + C61 * C5328) * C62 +
            (C72 * C5172 + C61 * C5174) * C148) *
               C63 * C14536) *
              C14494 +
          (((C72 * C1920 + C61 * C1923) * C148 +
            (C72 * C2038 + C61 * C2256) * C62) *
               C63 * C5881 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C5880 -
           ((C72 * C3084 + C61 * C3254) * C62 +
            (C72 * C2990 + C61 * C2993) * C148) *
               C63 * C5882 +
           ((C72 * C6206 + C61 * C6207) * C148 +
            (C72 * C6280 + C61 * C6422) * C62) *
               C63 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eezy[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14495 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14405) *
                        C3376 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C14405 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14495) *
                        C3377 +
                    (((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14495 -
                     ((C115 * C3085 + C63 * C3296) * C62 +
                      (C115 * C2991 + C63 * C3041) * C148) *
                         C61 * C14405) *
                        C3378 +
                    (((C115 * C4170 + C63 * C4208) * C148 +
                      (C115 * C4244 + C63 * C4421) * C62) *
                         C61 * C14405 -
                     ((C115 * C2800 + C63 * C2924) * C62 +
                      (C115 * C2744 + C63 * C2774) * C148) *
                         C61 * C14495) *
                        C14530) *
                   C14272) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C115 * C73 + C63 * C116) * C148 +
                       (C115 * C149 + C63 * C295) * C62) *
                          C61 * C14495 -
                      ((C115 * C930 + C63 * C1162) * C62 +
                       (C115 * C818 + C63 * C880) * C148) *
                          C61 * C14405) *
                         C14494 +
                     (((C115 * C1920 + C63 * C1982) * C148 +
                       (C115 * C2038 + C63 * C2309) * C62) *
                          C61 * C14405 -
                      ((C115 * C489 + C63 * C721) * C62 +
                       (C115 * C377 + C63 * C439) * C148) *
                          C61 * C14495) *
                         C14363) *
                        C374 +
                    ((((C115 * C820 + C63 * C882) * C148 +
                       (C115 * C932 + C63 * C1164) * C62) *
                          C61 * C14405 -
                      ((C115 * C150 + C63 * C296) * C62 +
                       (C115 * C74 + C63 * C117) * C148) *
                          C61 * C14495) *
                         C14494 +
                     (((C115 * C379 + C63 * C441) * C148 +
                       (C115 * C491 + C63 * C723) * C62) *
                          C61 * C14495 -
                      ((C115 * C2039 + C63 * C2310) * C62 +
                       (C115 * C1921 + C63 * C1983) * C148) *
                          C61 * C14405) *
                         C14363) *
                        C375 +
                    ((((C115 * C75 + C63 * C118) * C148 +
                       (C115 * C151 + C63 * C297) * C62) *
                          C61 * C14495 -
                      ((C115 * C934 + C63 * C1166) * C62 +
                       (C115 * C822 + C63 * C884) * C148) *
                          C61 * C14405) *
                         C14494 +
                     (((C115 * C1922 + C63 * C1984) * C148 +
                       (C115 * C2040 + C63 * C2311) * C62) *
                          C61 * C14405 -
                      ((C115 * C493 + C63 * C725) * C62 +
                       (C115 * C381 + C63 * C443) * C148) *
                          C61 * C14495) *
                         C14363) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C5880 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C5881 +
                     ((C115 * C819 + C63 * C881) * C148 +
                      (C115 * C931 + C63 * C1163) * C62) *
                         C61 * C5882 -
                     ((C115 * C5228 + C63 * C5352) * C62 +
                      (C115 * C5172 + C63 * C5202) * C148) *
                         C61 * C14536) *
                        C14494 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C5881 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C5880 -
                     ((C115 * C3084 + C63 * C3295) * C62 +
                      (C115 * C2990 + C63 * C3040) * C148) *
                         C61 * C5882 +
                     ((C115 * C6206 + C63 * C6244) * C148 +
                      (C115 * C6280 + C63 * C6457) * C62) *
                         C61 * C14536) *
                        C14363) *
                   C14272) /
                      (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14495 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
              C3376 +
          ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14495) *
              C3377 +
          ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14495 -
           (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C14405) *
              C3378 +
          ((C322 * C4170 + C4458 + C4458 + C62 * C4456) * C63 * C61 * C14405 -
           (C322 * C2744 + C2951 + C2951 + C62 * C2948) * C63 * C61 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14495 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
               C14494 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14495) *
               C14363) *
              C374 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14495) *
               C14494 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14495 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14405) *
               C14363) *
              C375 +
          (((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14495 -
            (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C14405) *
               C14494 +
           ((C322 * C1922 + C2368 + C2368 + C62 * C2364) * C63 * C61 * C14405 -
            (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C5880 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C5881 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C5882 -
           (C322 * C5172 + C5379 + C5379 + C62 * C5376) * C63 * C61 * C14536) *
              C14494 +
          ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C5881 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C5880 -
           (C322 * C2990 + C3340 + C3340 + C62 * C3336) * C63 * C61 * C5882 +
           (C322 * C6206 + C6494 + C6494 + C62 * C6492) * C63 * C61 * C14536) *
              C14363) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 *
                  C14300 * C66 -
              (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 *
                  C14300 * C67 +
              (C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 *
                  C14300 * C68 -
              (C71 * C76 + C92 + C92 + C61 * C86) * C62 * C63 * C14318 *
                  C14300 * C69 +
              (C71 * C77 + C93 + C93 + C61 * C87) * C62 * C63 * C14318 *
                  C14300 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 *
                   C14555 -
               (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
                   C14543 +
               (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 *
                   C14520) *
                  C374 +
              ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
                   C14543 -
               (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 *
                   C14555 -
               (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14318 *
                   C14520) *
                  C375 +
              ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 *
                   C14555 -
               (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14318 *
                   C14543 +
               (C71 * C382 + C401 + C401 + C61 * C394) * C62 * C63 * C14318 *
                   C14520) *
                  C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14556 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14545 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C14523) *
              C14300 * C374 +
          ((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14545 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14556 -
           (C71 * C821 + C840 + C840 + C61 * C833) * C62 * C63 * C14523) *
              C14300 * C375 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14556 -
           (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C14545 +
           (C71 * C823 + C842 + C842 + C61 * C835) * C62 * C63 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C2406 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C2407 +
           (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 *
               C14520) *
              C14552 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C2407 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C2406 -
           (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14318 *
               C14520) *
              C14539 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C2406 -
           (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14318 *
               C2407 +
           (C71 * C382 + C401 + C401 + C61 * C394) * C62 * C63 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C2738 -
          (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 * C2739 +
          (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 * C2740 -
          (C71 * C2744 + C2751 + C2751 + C61 * C2748) * C62 * C63 * C14318 *
              C2741 +
          (C71 * C2745 + C2752 + C2752 + C61 * C2749) * C62 * C63 * C14318 *
              C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14556 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14545 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C14523) *
              C2406 +
          ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14545 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14556 -
           (C71 * C2990 + C3000 + C3000 + C61 * C2996) * C62 * C63 * C14523) *
              C2407 +
          ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14556 -
           (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C14545 +
           (C71 * C2992 + C3002 + C3002 + C61 * C2998) * C62 * C63 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C4496 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C4497 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C14523) *
              C14300 * C14552 +
          ((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C4497 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C4496 -
           (C71 * C821 + C840 + C840 + C61 * C833) * C62 * C63 * C14523) *
              C14300 * C14539 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C4496 -
           (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C4497 +
           (C71 * C823 + C842 + C842 + C61 * C835) * C62 * C63 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C4496 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C4497 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C14523) *
              C14555 +
          ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C4497 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C4496 -
           (C71 * C2990 + C3000 + C3000 + C61 * C2996) * C62 * C63 * C14523) *
              C14543 +
          ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C4496 -
           (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C4497 +
           (C71 * C2992 + C3002 + C3002 + C61 * C2998) * C62 * C63 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C5167 -
          (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C5168 +
          (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C5169 -
          (C71 * C5172 + C5179 + C5179 + C61 * C5176) * C62 * C63 * C5170 +
          (C71 * C5173 + C5180 + C5180 + C61 * C5177) * C62 * C63 * C5171) *
         C14300 * C14272) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C115 * C73 + C63 * C116) * C72 +
               (C115 * C78 + C63 * C121) * C61) *
                  C62 * C14318 * C14300 * C66 -
              ((C115 * C79 + C63 * C122) * C61 +
               (C115 * C74 + C63 * C117) * C72) *
                  C62 * C14318 * C14300 * C67 +
              ((C115 * C75 + C63 * C118) * C72 +
               (C115 * C80 + C63 * C123) * C61) *
                  C62 * C14318 * C14300 * C68 -
              ((C115 * C81 + C63 * C124) * C61 +
               (C115 * C76 + C63 * C119) * C72) *
                  C62 * C14318 * C14300 * C69 +
              ((C115 * C77 + C63 * C120) * C72 +
               (C115 * C82 + C63 * C125) * C61) *
                  C62 * C14318 * C14300 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C115 * C73 + C63 * C116) * C72 +
                (C115 * C78 + C63 * C121) * C61) *
                   C62 * C14318 * C14555 -
               ((C115 * C383 + C63 * C445) * C61 +
                (C115 * C377 + C63 * C439) * C72) *
                   C62 * C14318 * C14543 +
               ((C115 * C378 + C63 * C440) * C72 +
                (C115 * C384 + C63 * C446) * C61) *
                   C62 * C14318 * C14520) *
                  C374 +
              (((C115 * C379 + C63 * C441) * C72 +
                (C115 * C385 + C63 * C447) * C61) *
                   C62 * C14318 * C14543 -
               ((C115 * C79 + C63 * C122) * C61 +
                (C115 * C74 + C63 * C117) * C72) *
                   C62 * C14318 * C14555 -
               ((C115 * C386 + C63 * C448) * C61 +
                (C115 * C380 + C63 * C442) * C72) *
                   C62 * C14318 * C14520) *
                  C375 +
              (((C115 * C75 + C63 * C118) * C72 +
                (C115 * C80 + C63 * C123) * C61) *
                   C62 * C14318 * C14555 -
               ((C115 * C387 + C63 * C449) * C61 +
                (C115 * C381 + C63 * C443) * C72) *
                   C62 * C14318 * C14543 +
               ((C115 * C382 + C63 * C444) * C72 +
                (C115 * C388 + C63 * C450) * C61) *
                   C62 * C14318 * C14520) *
                  C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14556 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14545 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C14523) *
              C14300 * C374 +
          (((C115 * C820 + C63 * C882) * C72 +
            (C115 * C826 + C63 * C888) * C61) *
               C62 * C14545 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14556 -
           ((C115 * C827 + C63 * C889) * C61 +
            (C115 * C821 + C63 * C883) * C72) *
               C62 * C14523) *
              C14300 * C375 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14556 -
           ((C115 * C828 + C63 * C890) * C61 +
            (C115 * C822 + C63 * C884) * C72) *
               C62 * C14545 +
           ((C115 * C823 + C63 * C885) * C72 +
            (C115 * C829 + C63 * C891) * C61) *
               C62 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C2406 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C2407 +
           ((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14318 * C14520) *
              C14552 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C2407 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C2406 -
           ((C115 * C386 + C63 * C448) * C61 +
            (C115 * C380 + C63 * C442) * C72) *
               C62 * C14318 * C14520) *
              C14539 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14318 * C2406 -
           ((C115 * C387 + C63 * C449) * C61 +
            (C115 * C381 + C63 * C443) * C72) *
               C62 * C14318 * C2407 +
           ((C115 * C382 + C63 * C444) * C72 +
            (C115 * C388 + C63 * C450) * C61) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
              C62 * C14318 * C2738 -
          ((C115 * C383 + C63 * C445) * C61 +
           (C115 * C377 + C63 * C439) * C72) *
              C62 * C14318 * C2739 +
          ((C115 * C378 + C63 * C440) * C72 +
           (C115 * C384 + C63 * C446) * C61) *
              C62 * C14318 * C2740 -
          ((C115 * C2746 + C63 * C2776) * C61 +
           (C115 * C2744 + C63 * C2774) * C72) *
              C62 * C14318 * C2741 +
          ((C115 * C2745 + C63 * C2775) * C72 +
           (C115 * C2747 + C63 * C2777) * C61) *
              C62 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14556 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14545 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C14523) *
              C2406 +
          (((C115 * C1920 + C63 * C1982) * C72 +
            (C115 * C1923 + C63 * C1985) * C61) *
               C62 * C14545 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14556 -
           ((C115 * C2993 + C63 * C3043) * C61 +
            (C115 * C2990 + C63 * C3040) * C72) *
               C62 * C14523) *
              C2407 +
          (((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14556 -
           ((C115 * C2994 + C63 * C3044) * C61 +
            (C115 * C2991 + C63 * C3041) * C72) *
               C62 * C14545 +
           ((C115 * C2992 + C63 * C3042) * C72 +
            (C115 * C2995 + C63 * C3045) * C61) *
               C62 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C4496 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C4497 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C14523) *
              C14300 * C14552 +
          (((C115 * C820 + C63 * C882) * C72 +
            (C115 * C826 + C63 * C888) * C61) *
               C62 * C4497 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C4496 -
           ((C115 * C827 + C63 * C889) * C61 +
            (C115 * C821 + C63 * C883) * C72) *
               C62 * C14523) *
              C14300 * C14539 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C4496 -
           ((C115 * C828 + C63 * C890) * C61 +
            (C115 * C822 + C63 * C884) * C72) *
               C62 * C4497 +
           ((C115 * C823 + C63 * C885) * C72 +
            (C115 * C829 + C63 * C891) * C61) *
               C62 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C4496 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C4497 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C14523) *
              C14555 +
          (((C115 * C1920 + C63 * C1982) * C72 +
            (C115 * C1923 + C63 * C1985) * C61) *
               C62 * C4497 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C4496 -
           ((C115 * C2993 + C63 * C3043) * C61 +
            (C115 * C2990 + C63 * C3040) * C72) *
               C62 * C14523) *
              C14543 +
          (((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C4496 -
           ((C115 * C2994 + C63 * C3044) * C61 +
            (C115 * C2991 + C63 * C3041) * C72) *
               C62 * C4497 +
           ((C115 * C2992 + C63 * C3042) * C72 +
            (C115 * C2995 + C63 * C3045) * C61) *
               C62 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
              C62 * C5167 -
          ((C115 * C824 + C63 * C886) * C61 +
           (C115 * C818 + C63 * C880) * C72) *
              C62 * C5168 +
          ((C115 * C819 + C63 * C881) * C72 +
           (C115 * C825 + C63 * C887) * C61) *
              C62 * C5169 -
          ((C115 * C5174 + C63 * C5204) * C61 +
           (C115 * C5172 + C63 * C5202) * C72) *
              C62 * C5170 +
          ((C115 * C5173 + C63 * C5203) * C72 +
           (C115 * C5175 + C63 * C5205) * C61) *
              C62 * C5171) *
         C14300 * C14272) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C148 * C73 + C62 * C149) * C72 +
               (C148 * C78 + C62 * C154) * C61) *
                  C63 * C14318 * C14300 * C66 -
              ((C148 * C79 + C62 * C155) * C61 +
               (C148 * C74 + C62 * C150) * C72) *
                  C63 * C14318 * C14300 * C67 +
              ((C148 * C75 + C62 * C151) * C72 +
               (C148 * C80 + C62 * C156) * C61) *
                  C63 * C14318 * C14300 * C68 -
              ((C148 * C81 + C62 * C157) * C61 +
               (C148 * C76 + C62 * C152) * C72) *
                  C63 * C14318 * C14300 * C69 +
              ((C148 * C77 + C62 * C153) * C72 +
               (C148 * C82 + C62 * C158) * C61) *
                  C63 * C14318 * C14300 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C148 * C73 + C62 * C149) * C72 +
                (C148 * C78 + C62 * C154) * C61) *
                   C63 * C14318 * C14555 -
               ((C148 * C383 + C62 * C495) * C61 +
                (C148 * C377 + C62 * C489) * C72) *
                   C63 * C14318 * C14543 +
               ((C148 * C378 + C62 * C490) * C72 +
                (C148 * C384 + C62 * C496) * C61) *
                   C63 * C14318 * C14520) *
                  C374 +
              (((C148 * C379 + C62 * C491) * C72 +
                (C148 * C385 + C62 * C497) * C61) *
                   C63 * C14318 * C14543 -
               ((C148 * C79 + C62 * C155) * C61 +
                (C148 * C74 + C62 * C150) * C72) *
                   C63 * C14318 * C14555 -
               ((C148 * C386 + C62 * C498) * C61 +
                (C148 * C380 + C62 * C492) * C72) *
                   C63 * C14318 * C14520) *
                  C375 +
              (((C148 * C75 + C62 * C151) * C72 +
                (C148 * C80 + C62 * C156) * C61) *
                   C63 * C14318 * C14555 -
               ((C148 * C387 + C62 * C499) * C61 +
                (C148 * C381 + C62 * C493) * C72) *
                   C63 * C14318 * C14543 +
               ((C148 * C382 + C62 * C494) * C72 +
                (C148 * C388 + C62 * C500) * C61) *
                   C63 * C14318 * C14520) *
                  C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14556 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14545 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C14523) *
              C14300 * C374 +
          (((C148 * C820 + C62 * C932) * C72 +
            (C148 * C826 + C62 * C938) * C61) *
               C63 * C14545 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14556 -
           ((C148 * C827 + C62 * C939) * C61 +
            (C148 * C821 + C62 * C933) * C72) *
               C63 * C14523) *
              C14300 * C375 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14556 -
           ((C148 * C828 + C62 * C940) * C61 +
            (C148 * C822 + C62 * C934) * C72) *
               C63 * C14545 +
           ((C148 * C823 + C62 * C935) * C72 +
            (C148 * C829 + C62 * C941) * C61) *
               C63 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C2406 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C2407 +
           ((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14318 * C14520) *
              C14552 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C2407 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C2406 -
           ((C148 * C386 + C62 * C498) * C61 +
            (C148 * C380 + C62 * C492) * C72) *
               C63 * C14318 * C14520) *
              C14539 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14318 * C2406 -
           ((C148 * C387 + C62 * C499) * C61 +
            (C148 * C381 + C62 * C493) * C72) *
               C63 * C14318 * C2407 +
           ((C148 * C382 + C62 * C494) * C72 +
            (C148 * C388 + C62 * C500) * C61) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
              C63 * C14318 * C2738 -
          ((C148 * C383 + C62 * C495) * C61 +
           (C148 * C377 + C62 * C489) * C72) *
              C63 * C14318 * C2739 +
          ((C148 * C378 + C62 * C490) * C72 +
           (C148 * C384 + C62 * C496) * C61) *
              C63 * C14318 * C2740 -
          ((C148 * C2746 + C62 * C2802) * C61 +
           (C148 * C2744 + C62 * C2800) * C72) *
              C63 * C14318 * C2741 +
          ((C148 * C2745 + C62 * C2801) * C72 +
           (C148 * C2747 + C62 * C2803) * C61) *
              C63 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14556 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14545 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C14523) *
              C2406 +
          (((C148 * C1920 + C62 * C2038) * C72 +
            (C148 * C1923 + C62 * C2041) * C61) *
               C63 * C14545 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14556 -
           ((C148 * C2993 + C62 * C3087) * C61 +
            (C148 * C2990 + C62 * C3084) * C72) *
               C63 * C14523) *
              C2407 +
          (((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14556 -
           ((C148 * C2994 + C62 * C3088) * C61 +
            (C148 * C2991 + C62 * C3085) * C72) *
               C63 * C14545 +
           ((C148 * C2992 + C62 * C3086) * C72 +
            (C148 * C2995 + C62 * C3089) * C61) *
               C63 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C4496 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C4497 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C14523) *
              C14300 * C14552 +
          (((C148 * C820 + C62 * C932) * C72 +
            (C148 * C826 + C62 * C938) * C61) *
               C63 * C4497 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C4496 -
           ((C148 * C827 + C62 * C939) * C61 +
            (C148 * C821 + C62 * C933) * C72) *
               C63 * C14523) *
              C14300 * C14539 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C4496 -
           ((C148 * C828 + C62 * C940) * C61 +
            (C148 * C822 + C62 * C934) * C72) *
               C63 * C4497 +
           ((C148 * C823 + C62 * C935) * C72 +
            (C148 * C829 + C62 * C941) * C61) *
               C63 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C4496 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C4497 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C14523) *
              C14555 +
          (((C148 * C1920 + C62 * C2038) * C72 +
            (C148 * C1923 + C62 * C2041) * C61) *
               C63 * C4497 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C4496 -
           ((C148 * C2993 + C62 * C3087) * C61 +
            (C148 * C2990 + C62 * C3084) * C72) *
               C63 * C14523) *
              C14543 +
          (((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C4496 -
           ((C148 * C2994 + C62 * C3088) * C61 +
            (C148 * C2991 + C62 * C3085) * C72) *
               C63 * C4497 +
           ((C148 * C2992 + C62 * C3086) * C72 +
            (C148 * C2995 + C62 * C3089) * C61) *
               C63 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
              C63 * C5167 -
          ((C148 * C824 + C62 * C936) * C61 +
           (C148 * C818 + C62 * C930) * C72) *
              C63 * C5168 +
          ((C148 * C819 + C62 * C931) * C72 +
           (C148 * C825 + C62 * C937) * C61) *
              C63 * C5169 -
          ((C148 * C5174 + C62 * C5230) * C61 +
           (C148 * C5172 + C62 * C5228) * C72) *
              C63 * C5170 +
          ((C148 * C5173 + C62 * C5229) * C72 +
           (C148 * C5175 + C62 * C5231) * C61) *
              C63 * C5171) *
         C14300 * C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C72 * C73 + C61 * C78) * C115 +
               (C72 * C116 + C61 * C181) * C63) *
                  C62 * C14318 * C14300 * C66 -
              ((C72 * C117 + C61 * C182) * C63 +
               (C72 * C74 + C61 * C79) * C115) *
                  C62 * C14318 * C14300 * C67 +
              ((C72 * C75 + C61 * C80) * C115 +
               (C72 * C118 + C61 * C183) * C63) *
                  C62 * C14318 * C14300 * C68 -
              ((C72 * C119 + C61 * C184) * C63 +
               (C72 * C76 + C61 * C81) * C115) *
                  C62 * C14318 * C14300 * C69 +
              ((C72 * C77 + C61 * C82) * C115 +
               (C72 * C120 + C61 * C185) * C63) *
                  C62 * C14318 * C14300 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C72 * C73 + C61 * C78) * C115 +
                (C72 * C116 + C61 * C181) * C63) *
                   C62 * C14318 * C14555 -
               ((C72 * C439 + C61 * C539) * C63 +
                (C72 * C377 + C61 * C383) * C115) *
                   C62 * C14318 * C14543 +
               ((C72 * C378 + C61 * C384) * C115 +
                (C72 * C440 + C61 * C540) * C63) *
                   C62 * C14318 * C14520) *
                  C374 +
              (((C72 * C379 + C61 * C385) * C115 +
                (C72 * C441 + C61 * C541) * C63) *
                   C62 * C14318 * C14543 -
               ((C72 * C117 + C61 * C182) * C63 +
                (C72 * C74 + C61 * C79) * C115) *
                   C62 * C14318 * C14555 -
               ((C72 * C442 + C61 * C542) * C63 +
                (C72 * C380 + C61 * C386) * C115) *
                   C62 * C14318 * C14520) *
                  C375 +
              (((C72 * C75 + C61 * C80) * C115 +
                (C72 * C118 + C61 * C183) * C63) *
                   C62 * C14318 * C14555 -
               ((C72 * C443 + C61 * C543) * C63 +
                (C72 * C381 + C61 * C387) * C115) *
                   C62 * C14318 * C14543 +
               ((C72 * C382 + C61 * C388) * C115 +
                (C72 * C444 + C61 * C544) * C63) *
                   C62 * C14318 * C14520) *
                  C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14556 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14545 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C14523) *
              C14300 * C374 +
          (((C72 * C820 + C61 * C826) * C115 +
            (C72 * C882 + C61 * C982) * C63) *
               C62 * C14545 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14556 -
           ((C72 * C883 + C61 * C983) * C63 +
            (C72 * C821 + C61 * C827) * C115) *
               C62 * C14523) *
              C14300 * C375 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14556 -
           ((C72 * C884 + C61 * C984) * C63 +
            (C72 * C822 + C61 * C828) * C115) *
               C62 * C14545 +
           ((C72 * C823 + C61 * C829) * C115 +
            (C72 * C885 + C61 * C985) * C63) *
               C62 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C2406 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C2407 +
           ((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14318 * C14520) *
              C14552 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C2407 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C2406 -
           ((C72 * C442 + C61 * C542) * C63 +
            (C72 * C380 + C61 * C386) * C115) *
               C62 * C14318 * C14520) *
              C14539 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14318 * C2406 -
           ((C72 * C443 + C61 * C543) * C63 +
            (C72 * C381 + C61 * C387) * C115) *
               C62 * C14318 * C2407 +
           ((C72 * C382 + C61 * C388) * C115 +
            (C72 * C444 + C61 * C544) * C63) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
              C62 * C14318 * C2738 -
          ((C72 * C439 + C61 * C539) * C63 + (C72 * C377 + C61 * C383) * C115) *
              C62 * C14318 * C2739 +
          ((C72 * C378 + C61 * C384) * C115 + (C72 * C440 + C61 * C540) * C63) *
              C62 * C14318 * C2740 -
          ((C72 * C2774 + C61 * C2826) * C63 +
           (C72 * C2744 + C61 * C2746) * C115) *
              C62 * C14318 * C2741 +
          ((C72 * C2745 + C61 * C2747) * C115 +
           (C72 * C2775 + C61 * C2827) * C63) *
              C62 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14556 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14545 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C14523) *
              C2406 +
          (((C72 * C1920 + C61 * C1923) * C115 +
            (C72 * C1982 + C61 * C2094) * C63) *
               C62 * C14545 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14556 -
           ((C72 * C3040 + C61 * C3128) * C63 +
            (C72 * C2990 + C61 * C2993) * C115) *
               C62 * C14523) *
              C2407 +
          (((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14556 -
           ((C72 * C3041 + C61 * C3129) * C63 +
            (C72 * C2991 + C61 * C2994) * C115) *
               C62 * C14545 +
           ((C72 * C2992 + C61 * C2995) * C115 +
            (C72 * C3042 + C61 * C3130) * C63) *
               C62 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C4496 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C4497 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C14523) *
              C14300 * C14552 +
          (((C72 * C820 + C61 * C826) * C115 +
            (C72 * C882 + C61 * C982) * C63) *
               C62 * C4497 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C4496 -
           ((C72 * C883 + C61 * C983) * C63 +
            (C72 * C821 + C61 * C827) * C115) *
               C62 * C14523) *
              C14300 * C14539 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C4496 -
           ((C72 * C884 + C61 * C984) * C63 +
            (C72 * C822 + C61 * C828) * C115) *
               C62 * C4497 +
           ((C72 * C823 + C61 * C829) * C115 +
            (C72 * C885 + C61 * C985) * C63) *
               C62 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C4496 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C4497 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C14523) *
              C14555 +
          (((C72 * C1920 + C61 * C1923) * C115 +
            (C72 * C1982 + C61 * C2094) * C63) *
               C62 * C4497 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C4496 -
           ((C72 * C3040 + C61 * C3128) * C63 +
            (C72 * C2990 + C61 * C2993) * C115) *
               C62 * C14523) *
              C14543 +
          (((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C4496 -
           ((C72 * C3041 + C61 * C3129) * C63 +
            (C72 * C2991 + C61 * C2994) * C115) *
               C62 * C4497 +
           ((C72 * C2992 + C61 * C2995) * C115 +
            (C72 * C3042 + C61 * C3130) * C63) *
               C62 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
              C62 * C5167 -
          ((C72 * C880 + C61 * C980) * C63 + (C72 * C818 + C61 * C824) * C115) *
              C62 * C5168 +
          ((C72 * C819 + C61 * C825) * C115 + (C72 * C881 + C61 * C981) * C63) *
              C62 * C5169 -
          ((C72 * C5202 + C61 * C5254) * C63 +
           (C72 * C5172 + C61 * C5174) * C115) *
              C62 * C5170 +
          ((C72 * C5173 + C61 * C5175) * C115 +
           (C72 * C5203 + C61 * C5255) * C63) *
              C62 * C5171) *
         C14300 * C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
                  C14300 * C66 -
              (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
                  C14300 * C67 +
              (C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
                  C14300 * C68 -
              (C208 * C76 + C218 + C218 + C63 * C212) * C61 * C62 * C14318 *
                  C14300 * C69 +
              (C208 * C77 + C219 + C219 + C63 * C213) * C61 * C62 * C14318 *
                  C14300 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
                   C14555 -
               (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
                   C14543 +
               (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
                   C14520) *
                  C374 +
              ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14318 *
                   C14543 -
               (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
                   C14555 -
               (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C14318 *
                   C14520) *
                  C375 +
              ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
                   C14555 -
               (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C14318 *
                   C14543 +
               (C208 * C382 + C595 + C595 + C63 * C588) * C61 * C62 * C14318 *
                   C14520) *
                  C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14556 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14545 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C14523) *
              C14300 * C374 +
          ((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14545 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14556 -
           (C208 * C821 + C1034 + C1034 + C63 * C1027) * C61 * C62 * C14523) *
              C14300 * C375 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14556 -
           (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C14545 +
           (C208 * C823 + C1036 + C1036 + C63 * C1029) * C61 * C62 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
               C2406 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
               C2407 +
           (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
               C14520) *
              C14552 +
          ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14318 *
               C2407 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
               C2406 -
           (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C14318 *
               C14520) *
              C14539 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
               C2406 -
           (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C14318 *
               C2407 +
           (C208 * C382 + C595 + C595 + C63 * C588) * C61 * C62 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 * C2738 -
          (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
              C2739 +
          (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
              C2740 -
          (C208 * C2744 + C2853 + C2853 + C63 * C2850) * C61 * C62 * C14318 *
              C2741 +
          (C208 * C2745 + C2854 + C2854 + C63 * C2851) * C61 * C62 * C14318 *
              C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14556 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14545 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C14523) *
              C2406 +
          ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14545 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14556 -
           (C208 * C2990 + C3173 + C3173 + C63 * C3169) * C61 * C62 * C14523) *
              C2407 +
          ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14556 -
           (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C14545 +
           (C208 * C2992 + C3175 + C3175 + C63 * C3171) * C61 * C62 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C4496 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C4497 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C14523) *
              C14300 * C14552 +
          ((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C4497 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C4496 -
           (C208 * C821 + C1034 + C1034 + C63 * C1027) * C61 * C62 * C14523) *
              C14300 * C14539 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C4496 -
           (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C4497 +
           (C208 * C823 + C1036 + C1036 + C63 * C1029) * C61 * C62 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C4496 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C4497 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C14523) *
              C14555 +
          ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C4497 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C4496 -
           (C208 * C2990 + C3173 + C3173 + C63 * C3169) * C61 * C62 * C14523) *
              C14543 +
          ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C4496 -
           (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C4497 +
           (C208 * C2992 + C3175 + C3175 + C63 * C3171) * C61 * C62 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C5167 -
          (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C5168 +
          (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C5169 -
          (C208 * C5172 + C5281 + C5281 + C63 * C5278) * C61 * C62 * C5170 +
          (C208 * C5173 + C5282 + C5282 + C63 * C5279) * C61 * C62 * C5171) *
         C14300 * C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] += (0.5 * std::pow(Pi, 2.5) *
                       (((C148 * C73 + C62 * C149) * C115 +
                         (C148 * C116 + C62 * C241) * C63) *
                            C61 * C14318 * C14300 * C66 -
                        ((C148 * C117 + C62 * C242) * C63 +
                         (C148 * C74 + C62 * C150) * C115) *
                            C61 * C14318 * C14300 * C67 +
                        ((C148 * C75 + C62 * C151) * C115 +
                         (C148 * C118 + C62 * C243) * C63) *
                            C61 * C14318 * C14300 * C68 -
                        ((C148 * C119 + C62 * C244) * C63 +
                         (C148 * C76 + C62 * C152) * C115) *
                            C61 * C14318 * C14300 * C69 +
                        ((C148 * C77 + C62 * C153) * C115 +
                         (C148 * C120 + C62 * C245) * C63) *
                            C61 * C14318 * C14300 * C70) +
                   0.5 * std::pow(Pi, 2.5) *
                       ((((C148 * C73 + C62 * C149) * C115 +
                          (C148 * C116 + C62 * C241) * C63) *
                             C61 * C14318 * C14555 -
                         ((C148 * C439 + C62 * C633) * C63 +
                          (C148 * C377 + C62 * C489) * C115) *
                             C61 * C14318 * C14543 +
                         ((C148 * C378 + C62 * C490) * C115 +
                          (C148 * C440 + C62 * C634) * C63) *
                             C61 * C14318 * C14520) *
                            C374 +
                        (((C148 * C379 + C62 * C491) * C115 +
                          (C148 * C441 + C62 * C635) * C63) *
                             C61 * C14318 * C14543 -
                         ((C148 * C117 + C62 * C242) * C63 +
                          (C148 * C74 + C62 * C150) * C115) *
                             C61 * C14318 * C14555 -
                         ((C148 * C442 + C62 * C636) * C63 +
                          (C148 * C380 + C62 * C492) * C115) *
                             C61 * C14318 * C14520) *
                            C375 +
                        (((C148 * C75 + C62 * C151) * C115 +
                          (C148 * C118 + C62 * C243) * C63) *
                             C61 * C14318 * C14555 -
                         ((C148 * C443 + C62 * C637) * C63 +
                          (C148 * C381 + C62 * C493) * C115) *
                             C61 * C14318 * C14543 +
                         ((C148 * C382 + C62 * C494) * C115 +
                          (C148 * C444 + C62 * C638) * C63) *
                             C61 * C14318 * C14520) *
                            C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * ((((C148 * C73 + C62 * C149) * C115 +
                                          (C148 * C116 + C62 * C241) * C63) *
                                             C61 * C14556 -
                                         ((C148 * C880 + C62 * C1074) * C63 +
                                          (C148 * C818 + C62 * C930) * C115) *
                                             C61 * C14545 +
                                         ((C148 * C819 + C62 * C931) * C115 +
                                          (C148 * C881 + C62 * C1075) * C63) *
                                             C61 * C14523) *
                                            C14300 * C374 +
                                        (((C148 * C820 + C62 * C932) * C115 +
                                          (C148 * C882 + C62 * C1076) * C63) *
                                             C61 * C14545 -
                                         ((C148 * C117 + C62 * C242) * C63 +
                                          (C148 * C74 + C62 * C150) * C115) *
                                             C61 * C14556 -
                                         ((C148 * C883 + C62 * C1077) * C63 +
                                          (C148 * C821 + C62 * C933) * C115) *
                                             C61 * C14523) *
                                            C14300 * C375 +
                                        (((C148 * C75 + C62 * C151) * C115 +
                                          (C148 * C118 + C62 * C243) * C63) *
                                             C61 * C14556 -
                                         ((C148 * C884 + C62 * C1078) * C63 +
                                          (C148 * C822 + C62 * C934) * C115) *
                                             C61 * C14545 +
                                         ((C148 * C823 + C62 * C935) * C115 +
                                          (C148 * C885 + C62 * C1079) * C63) *
                                             C61 * C14523) *
                                            C14300 * C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14318 * C2406 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14318 * C2407 +
                     ((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14318 * C14520) *
                        C14552 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14318 * C2407 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14318 * C2406 -
                     ((C148 * C442 + C62 * C636) * C63 +
                      (C148 * C380 + C62 * C492) * C115) *
                         C61 * C14318 * C14520) *
                        C14539 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14318 * C2406 -
                     ((C148 * C443 + C62 * C637) * C63 +
                      (C148 * C381 + C62 * C493) * C115) *
                         C61 * C14318 * C2407 +
                     ((C148 * C382 + C62 * C494) * C115 +
                      (C148 * C444 + C62 * C638) * C63) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14318 * C2738 -
                    ((C148 * C439 + C62 * C633) * C63 +
                     (C148 * C377 + C62 * C489) * C115) *
                        C61 * C14318 * C2739 +
                    ((C148 * C378 + C62 * C490) * C115 +
                     (C148 * C440 + C62 * C634) * C63) *
                        C61 * C14318 * C2740 -
                    ((C148 * C2774 + C62 * C2876) * C63 +
                     (C148 * C2744 + C62 * C2800) * C115) *
                        C61 * C14318 * C2741 +
                    ((C148 * C2745 + C62 * C2801) * C115 +
                     (C148 * C2775 + C62 * C2877) * C63) *
                        C61 * C14318 * C2742) *
                   C14272) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14556 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14545 +
                     ((C148 * C819 + C62 * C931) * C115 +
                      (C148 * C881 + C62 * C1075) * C63) *
                         C61 * C14523) *
                        C2406 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C14545 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14556 -
                     ((C148 * C3040 + C62 * C3213) * C63 +
                      (C148 * C2990 + C62 * C3084) * C115) *
                         C61 * C14523) *
                        C2407 +
                    (((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14556 -
                     ((C148 * C3041 + C62 * C3214) * C63 +
                      (C148 * C2991 + C62 * C3085) * C115) *
                         C61 * C14545 +
                     ((C148 * C2992 + C62 * C3086) * C115 +
                      (C148 * C3042 + C62 * C3215) * C63) *
                         C61 * C14523) *
                        C14520) *
                   C14272) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * ((((C148 * C73 + C62 * C149) * C115 +
                                          (C148 * C116 + C62 * C241) * C63) *
                                             C61 * C4496 -
                                         ((C148 * C880 + C62 * C1074) * C63 +
                                          (C148 * C818 + C62 * C930) * C115) *
                                             C61 * C4497 +
                                         ((C148 * C819 + C62 * C931) * C115 +
                                          (C148 * C881 + C62 * C1075) * C63) *
                                             C61 * C14523) *
                                            C14300 * C14552 +
                                        (((C148 * C820 + C62 * C932) * C115 +
                                          (C148 * C882 + C62 * C1076) * C63) *
                                             C61 * C4497 -
                                         ((C148 * C117 + C62 * C242) * C63 +
                                          (C148 * C74 + C62 * C150) * C115) *
                                             C61 * C4496 -
                                         ((C148 * C883 + C62 * C1077) * C63 +
                                          (C148 * C821 + C62 * C933) * C115) *
                                             C61 * C14523) *
                                            C14300 * C14539 +
                                        (((C148 * C75 + C62 * C151) * C115 +
                                          (C148 * C118 + C62 * C243) * C63) *
                                             C61 * C4496 -
                                         ((C148 * C884 + C62 * C1078) * C63 +
                                          (C148 * C822 + C62 * C934) * C115) *
                                             C61 * C4497 +
                                         ((C148 * C823 + C62 * C935) * C115 +
                                          (C148 * C885 + C62 * C1079) * C63) *
                                             C61 * C14523) *
                                            C14300 * C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C4496 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C4497 +
                     ((C148 * C819 + C62 * C931) * C115 +
                      (C148 * C881 + C62 * C1075) * C63) *
                         C61 * C14523) *
                        C14555 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C4497 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C4496 -
                     ((C148 * C3040 + C62 * C3213) * C63 +
                      (C148 * C2990 + C62 * C3084) * C115) *
                         C61 * C14523) *
                        C14543 +
                    (((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C4496 -
                     ((C148 * C3041 + C62 * C3214) * C63 +
                      (C148 * C2991 + C62 * C3085) * C115) *
                         C61 * C4497 +
                     ((C148 * C2992 + C62 * C3086) * C115 +
                      (C148 * C3042 + C62 * C3215) * C63) *
                         C61 * C14523) *
                        C14520) *
                   C14272) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C5167 -
                    ((C148 * C880 + C62 * C1074) * C63 +
                     (C148 * C818 + C62 * C930) * C115) *
                        C61 * C5168 +
                    ((C148 * C819 + C62 * C931) * C115 +
                     (C148 * C881 + C62 * C1075) * C63) *
                        C61 * C5169 -
                    ((C148 * C5202 + C62 * C5304) * C63 +
                     (C148 * C5172 + C62 * C5228) * C115) *
                        C61 * C5170 +
                    ((C148 * C5173 + C62 * C5229) * C115 +
                     (C148 * C5203 + C62 * C5305) * C63) *
                        C61 * C5171) *
                   C14300 * C14272) /
                      (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C72 * C73 + C61 * C78) * C148 +
               (C72 * C149 + C61 * C268) * C62) *
                  C63 * C14318 * C14300 * C66 -
              ((C72 * C150 + C61 * C269) * C62 +
               (C72 * C74 + C61 * C79) * C148) *
                  C63 * C14318 * C14300 * C67 +
              ((C72 * C75 + C61 * C80) * C148 +
               (C72 * C151 + C61 * C270) * C62) *
                  C63 * C14318 * C14300 * C68 -
              ((C72 * C152 + C61 * C271) * C62 +
               (C72 * C76 + C61 * C81) * C148) *
                  C63 * C14318 * C14300 * C69 +
              ((C72 * C77 + C61 * C82) * C148 +
               (C72 * C153 + C61 * C272) * C62) *
                  C63 * C14318 * C14300 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C72 * C73 + C61 * C78) * C148 +
                (C72 * C149 + C61 * C268) * C62) *
                   C63 * C14318 * C14555 -
               ((C72 * C489 + C61 * C677) * C62 +
                (C72 * C377 + C61 * C383) * C148) *
                   C63 * C14318 * C14543 +
               ((C72 * C378 + C61 * C384) * C148 +
                (C72 * C490 + C61 * C678) * C62) *
                   C63 * C14318 * C14520) *
                  C374 +
              (((C72 * C379 + C61 * C385) * C148 +
                (C72 * C491 + C61 * C679) * C62) *
                   C63 * C14318 * C14543 -
               ((C72 * C150 + C61 * C269) * C62 +
                (C72 * C74 + C61 * C79) * C148) *
                   C63 * C14318 * C14555 -
               ((C72 * C492 + C61 * C680) * C62 +
                (C72 * C380 + C61 * C386) * C148) *
                   C63 * C14318 * C14520) *
                  C375 +
              (((C72 * C75 + C61 * C80) * C148 +
                (C72 * C151 + C61 * C270) * C62) *
                   C63 * C14318 * C14555 -
               ((C72 * C493 + C61 * C681) * C62 +
                (C72 * C381 + C61 * C387) * C148) *
                   C63 * C14318 * C14543 +
               ((C72 * C382 + C61 * C388) * C148 +
                (C72 * C494 + C61 * C682) * C62) *
                   C63 * C14318 * C14520) *
                  C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14556 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14545 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C14523) *
              C14300 * C374 +
          (((C72 * C820 + C61 * C826) * C148 +
            (C72 * C932 + C61 * C1120) * C62) *
               C63 * C14545 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14556 -
           ((C72 * C933 + C61 * C1121) * C62 +
            (C72 * C821 + C61 * C827) * C148) *
               C63 * C14523) *
              C14300 * C375 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14556 -
           ((C72 * C934 + C61 * C1122) * C62 +
            (C72 * C822 + C61 * C828) * C148) *
               C63 * C14545 +
           ((C72 * C823 + C61 * C829) * C148 +
            (C72 * C935 + C61 * C1123) * C62) *
               C63 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C2406 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C2407 +
           ((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14318 * C14520) *
              C14552 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C2407 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C2406 -
           ((C72 * C492 + C61 * C680) * C62 +
            (C72 * C380 + C61 * C386) * C148) *
               C63 * C14318 * C14520) *
              C14539 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14318 * C2406 -
           ((C72 * C493 + C61 * C681) * C62 +
            (C72 * C381 + C61 * C387) * C148) *
               C63 * C14318 * C2407 +
           ((C72 * C382 + C61 * C388) * C148 +
            (C72 * C494 + C61 * C682) * C62) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
              C63 * C14318 * C2738 -
          ((C72 * C489 + C61 * C677) * C62 + (C72 * C377 + C61 * C383) * C148) *
              C63 * C14318 * C2739 +
          ((C72 * C378 + C61 * C384) * C148 + (C72 * C490 + C61 * C678) * C62) *
              C63 * C14318 * C2740 -
          ((C72 * C2800 + C61 * C2900) * C62 +
           (C72 * C2744 + C61 * C2746) * C148) *
              C63 * C14318 * C2741 +
          ((C72 * C2745 + C61 * C2747) * C148 +
           (C72 * C2801 + C61 * C2901) * C62) *
              C63 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14556 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14545 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C14523) *
              C2406 +
          (((C72 * C1920 + C61 * C1923) * C148 +
            (C72 * C2038 + C61 * C2256) * C62) *
               C63 * C14545 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14556 -
           ((C72 * C3084 + C61 * C3254) * C62 +
            (C72 * C2990 + C61 * C2993) * C148) *
               C63 * C14523) *
              C2407 +
          (((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14556 -
           ((C72 * C3085 + C61 * C3255) * C62 +
            (C72 * C2991 + C61 * C2994) * C148) *
               C63 * C14545 +
           ((C72 * C2992 + C61 * C2995) * C148 +
            (C72 * C3086 + C61 * C3256) * C62) *
               C63 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C4496 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C4497 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C14523) *
              C14300 * C14552 +
          (((C72 * C820 + C61 * C826) * C148 +
            (C72 * C932 + C61 * C1120) * C62) *
               C63 * C4497 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C4496 -
           ((C72 * C933 + C61 * C1121) * C62 +
            (C72 * C821 + C61 * C827) * C148) *
               C63 * C14523) *
              C14300 * C14539 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C4496 -
           ((C72 * C934 + C61 * C1122) * C62 +
            (C72 * C822 + C61 * C828) * C148) *
               C63 * C4497 +
           ((C72 * C823 + C61 * C829) * C148 +
            (C72 * C935 + C61 * C1123) * C62) *
               C63 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C4496 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C4497 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C14523) *
              C14555 +
          (((C72 * C1920 + C61 * C1923) * C148 +
            (C72 * C2038 + C61 * C2256) * C62) *
               C63 * C4497 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C4496 -
           ((C72 * C3084 + C61 * C3254) * C62 +
            (C72 * C2990 + C61 * C2993) * C148) *
               C63 * C14523) *
              C14543 +
          (((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C4496 -
           ((C72 * C3085 + C61 * C3255) * C62 +
            (C72 * C2991 + C61 * C2994) * C148) *
               C63 * C4497 +
           ((C72 * C2992 + C61 * C2995) * C148 +
            (C72 * C3086 + C61 * C3256) * C62) *
               C63 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
              C63 * C5167 -
          ((C72 * C930 + C61 * C1118) * C62 +
           (C72 * C818 + C61 * C824) * C148) *
              C63 * C5168 +
          ((C72 * C819 + C61 * C825) * C148 +
           (C72 * C931 + C61 * C1119) * C62) *
              C63 * C5169 -
          ((C72 * C5228 + C61 * C5328) * C62 +
           (C72 * C5172 + C61 * C5174) * C148) *
              C63 * C5170 +
          ((C72 * C5173 + C61 * C5175) * C148 +
           (C72 * C5229 + C61 * C5329) * C62) *
              C63 * C5171) *
         C14300 * C14272) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] += (0.5 * std::pow(Pi, 2.5) *
                       (((C115 * C73 + C63 * C116) * C148 +
                         (C115 * C149 + C63 * C295) * C62) *
                            C61 * C14318 * C14300 * C66 -
                        ((C115 * C150 + C63 * C296) * C62 +
                         (C115 * C74 + C63 * C117) * C148) *
                            C61 * C14318 * C14300 * C67 +
                        ((C115 * C75 + C63 * C118) * C148 +
                         (C115 * C151 + C63 * C297) * C62) *
                            C61 * C14318 * C14300 * C68 -
                        ((C115 * C152 + C63 * C298) * C62 +
                         (C115 * C76 + C63 * C119) * C148) *
                            C61 * C14318 * C14300 * C69 +
                        ((C115 * C77 + C63 * C120) * C148 +
                         (C115 * C153 + C63 * C299) * C62) *
                            C61 * C14318 * C14300 * C70) +
                   0.5 * std::pow(Pi, 2.5) *
                       ((((C115 * C73 + C63 * C116) * C148 +
                          (C115 * C149 + C63 * C295) * C62) *
                             C61 * C14318 * C14555 -
                         ((C115 * C489 + C63 * C721) * C62 +
                          (C115 * C377 + C63 * C439) * C148) *
                             C61 * C14318 * C14543 +
                         ((C115 * C378 + C63 * C440) * C148 +
                          (C115 * C490 + C63 * C722) * C62) *
                             C61 * C14318 * C14520) *
                            C374 +
                        (((C115 * C379 + C63 * C441) * C148 +
                          (C115 * C491 + C63 * C723) * C62) *
                             C61 * C14318 * C14543 -
                         ((C115 * C150 + C63 * C296) * C62 +
                          (C115 * C74 + C63 * C117) * C148) *
                             C61 * C14318 * C14555 -
                         ((C115 * C492 + C63 * C724) * C62 +
                          (C115 * C380 + C63 * C442) * C148) *
                             C61 * C14318 * C14520) *
                            C375 +
                        (((C115 * C75 + C63 * C118) * C148 +
                          (C115 * C151 + C63 * C297) * C62) *
                             C61 * C14318 * C14555 -
                         ((C115 * C493 + C63 * C725) * C62 +
                          (C115 * C381 + C63 * C443) * C148) *
                             C61 * C14318 * C14543 +
                         ((C115 * C382 + C63 * C444) * C148 +
                          (C115 * C494 + C63 * C726) * C62) *
                             C61 * C14318 * C14520) *
                            C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * ((((C115 * C73 + C63 * C116) * C148 +
                                          (C115 * C149 + C63 * C295) * C62) *
                                             C61 * C14556 -
                                         ((C115 * C930 + C63 * C1162) * C62 +
                                          (C115 * C818 + C63 * C880) * C148) *
                                             C61 * C14545 +
                                         ((C115 * C819 + C63 * C881) * C148 +
                                          (C115 * C931 + C63 * C1163) * C62) *
                                             C61 * C14523) *
                                            C14300 * C374 +
                                        (((C115 * C820 + C63 * C882) * C148 +
                                          (C115 * C932 + C63 * C1164) * C62) *
                                             C61 * C14545 -
                                         ((C115 * C150 + C63 * C296) * C62 +
                                          (C115 * C74 + C63 * C117) * C148) *
                                             C61 * C14556 -
                                         ((C115 * C933 + C63 * C1165) * C62 +
                                          (C115 * C821 + C63 * C883) * C148) *
                                             C61 * C14523) *
                                            C14300 * C375 +
                                        (((C115 * C75 + C63 * C118) * C148 +
                                          (C115 * C151 + C63 * C297) * C62) *
                                             C61 * C14556 -
                                         ((C115 * C934 + C63 * C1166) * C62 +
                                          (C115 * C822 + C63 * C884) * C148) *
                                             C61 * C14545 +
                                         ((C115 * C823 + C63 * C885) * C148 +
                                          (C115 * C935 + C63 * C1167) * C62) *
                                             C61 * C14523) *
                                            C14300 * C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14318 * C2406 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14318 * C2407 +
                     ((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14318 * C14520) *
                        C14552 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14318 * C2407 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14318 * C2406 -
                     ((C115 * C492 + C63 * C724) * C62 +
                      (C115 * C380 + C63 * C442) * C148) *
                         C61 * C14318 * C14520) *
                        C14539 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14318 * C2406 -
                     ((C115 * C493 + C63 * C725) * C62 +
                      (C115 * C381 + C63 * C443) * C148) *
                         C61 * C14318 * C2407 +
                     ((C115 * C382 + C63 * C444) * C148 +
                      (C115 * C494 + C63 * C726) * C62) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14318 * C2738 -
                    ((C115 * C489 + C63 * C721) * C62 +
                     (C115 * C377 + C63 * C439) * C148) *
                        C61 * C14318 * C2739 +
                    ((C115 * C378 + C63 * C440) * C148 +
                     (C115 * C490 + C63 * C722) * C62) *
                        C61 * C14318 * C2740 -
                    ((C115 * C2800 + C63 * C2924) * C62 +
                     (C115 * C2744 + C63 * C2774) * C148) *
                        C61 * C14318 * C2741 +
                    ((C115 * C2745 + C63 * C2775) * C148 +
                     (C115 * C2801 + C63 * C2925) * C62) *
                        C61 * C14318 * C2742) *
                   C14272) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14556 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14545 +
                     ((C115 * C819 + C63 * C881) * C148 +
                      (C115 * C931 + C63 * C1163) * C62) *
                         C61 * C14523) *
                        C2406 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C14545 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14556 -
                     ((C115 * C3084 + C63 * C3295) * C62 +
                      (C115 * C2990 + C63 * C3040) * C148) *
                         C61 * C14523) *
                        C2407 +
                    (((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14556 -
                     ((C115 * C3085 + C63 * C3296) * C62 +
                      (C115 * C2991 + C63 * C3041) * C148) *
                         C61 * C14545 +
                     ((C115 * C2992 + C63 * C3042) * C148 +
                      (C115 * C3086 + C63 * C3297) * C62) *
                         C61 * C14523) *
                        C14520) *
                   C14272) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * ((((C115 * C73 + C63 * C116) * C148 +
                                          (C115 * C149 + C63 * C295) * C62) *
                                             C61 * C4496 -
                                         ((C115 * C930 + C63 * C1162) * C62 +
                                          (C115 * C818 + C63 * C880) * C148) *
                                             C61 * C4497 +
                                         ((C115 * C819 + C63 * C881) * C148 +
                                          (C115 * C931 + C63 * C1163) * C62) *
                                             C61 * C14523) *
                                            C14300 * C14552 +
                                        (((C115 * C820 + C63 * C882) * C148 +
                                          (C115 * C932 + C63 * C1164) * C62) *
                                             C61 * C4497 -
                                         ((C115 * C150 + C63 * C296) * C62 +
                                          (C115 * C74 + C63 * C117) * C148) *
                                             C61 * C4496 -
                                         ((C115 * C933 + C63 * C1165) * C62 +
                                          (C115 * C821 + C63 * C883) * C148) *
                                             C61 * C14523) *
                                            C14300 * C14539 +
                                        (((C115 * C75 + C63 * C118) * C148 +
                                          (C115 * C151 + C63 * C297) * C62) *
                                             C61 * C4496 -
                                         ((C115 * C934 + C63 * C1166) * C62 +
                                          (C115 * C822 + C63 * C884) * C148) *
                                             C61 * C4497 +
                                         ((C115 * C823 + C63 * C885) * C148 +
                                          (C115 * C935 + C63 * C1167) * C62) *
                                             C61 * C14523) *
                                            C14300 * C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C4496 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C4497 +
                     ((C115 * C819 + C63 * C881) * C148 +
                      (C115 * C931 + C63 * C1163) * C62) *
                         C61 * C14523) *
                        C14555 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C4497 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C4496 -
                     ((C115 * C3084 + C63 * C3295) * C62 +
                      (C115 * C2990 + C63 * C3040) * C148) *
                         C61 * C14523) *
                        C14543 +
                    (((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C4496 -
                     ((C115 * C3085 + C63 * C3296) * C62 +
                      (C115 * C2991 + C63 * C3041) * C148) *
                         C61 * C4497 +
                     ((C115 * C2992 + C63 * C3042) * C148 +
                      (C115 * C3086 + C63 * C3297) * C62) *
                         C61 * C14523) *
                        C14520) *
                   C14272) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C5167 -
                    ((C115 * C930 + C63 * C1162) * C62 +
                     (C115 * C818 + C63 * C880) * C148) *
                        C61 * C5168 +
                    ((C115 * C819 + C63 * C881) * C148 +
                     (C115 * C931 + C63 * C1163) * C62) *
                        C61 * C5169 -
                    ((C115 * C5228 + C63 * C5352) * C62 +
                     (C115 * C5172 + C63 * C5202) * C148) *
                        C61 * C5170 +
                    ((C115 * C5173 + C63 * C5203) * C148 +
                     (C115 * C5229 + C63 * C5353) * C62) *
                        C61 * C5171) *
                   C14300 * C14272) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
                  C14300 * C66 -
              (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
                  C14300 * C67 +
              (C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
                  C14300 * C68 -
              (C322 * C76 + C332 + C332 + C62 * C326) * C63 * C61 * C14318 *
                  C14300 * C69 +
              (C322 * C77 + C333 + C333 + C62 * C327) * C63 * C61 * C14318 *
                  C14300 * C70) +
         0.5 * std::pow(Pi, 2.5) *
             (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
                   C14555 -
               (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
                   C14543 +
               (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
                   C14520) *
                  C374 +
              ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14318 *
                   C14543 -
               (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
                   C14555 -
               (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C14318 *
                   C14520) *
                  C375 +
              ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
                   C14555 -
               (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C14318 *
                   C14543 +
               (C322 * C382 + C777 + C777 + C62 * C770) * C63 * C61 * C14318 *
                   C14520) *
                  C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14556 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14545 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C14523) *
              C14300 * C374 +
          ((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14545 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14556 -
           (C322 * C821 + C1216 + C1216 + C62 * C1209) * C63 * C61 * C14523) *
              C14300 * C375 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14556 -
           (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C14545 +
           (C322 * C823 + C1218 + C1218 + C62 * C1211) * C63 * C61 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
               C2406 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
               C2407 +
           (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
               C14520) *
              C14552 +
          ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14318 *
               C2407 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
               C2406 -
           (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C14318 *
               C14520) *
              C14539 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
               C2406 -
           (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C14318 *
               C2407 +
           (C322 * C382 + C777 + C777 + C62 * C770) * C63 * C61 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 * C2738 -
          (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
              C2739 +
          (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
              C2740 -
          (C322 * C2744 + C2951 + C2951 + C62 * C2948) * C63 * C61 * C14318 *
              C2741 +
          (C322 * C2745 + C2952 + C2952 + C62 * C2949) * C63 * C61 * C14318 *
              C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14556 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14545 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C14523) *
              C2406 +
          ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14545 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14556 -
           (C322 * C2990 + C3340 + C3340 + C62 * C3336) * C63 * C61 * C14523) *
              C2407 +
          ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14556 -
           (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C14545 +
           (C322 * C2992 + C3342 + C3342 + C62 * C3338) * C63 * C61 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C4496 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C4497 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C14523) *
              C14300 * C14552 +
          ((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C4497 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C4496 -
           (C322 * C821 + C1216 + C1216 + C62 * C1209) * C63 * C61 * C14523) *
              C14300 * C14539 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C4496 -
           (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C4497 +
           (C322 * C823 + C1218 + C1218 + C62 * C1211) * C63 * C61 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C4496 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C4497 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C14523) *
              C14555 +
          ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C4497 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C4496 -
           (C322 * C2990 + C3340 + C3340 + C62 * C3336) * C63 * C61 * C14523) *
              C14543 +
          ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C4496 -
           (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C4497 +
           (C322 * C2992 + C3342 + C3342 + C62 * C3338) * C63 * C61 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C5167 -
          (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C5168 +
          (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C5169 -
          (C322 * C5172 + C5379 + C5379 + C62 * C5376) * C63 * C61 * C5170 +
          (C322 * C5173 + C5380 + C5380 + C62 * C5377) * C63 * C61 * C5171) *
         C14300 * C14272) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14495 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
               C2406 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14495) *
               C2407 +
           ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14495 -
            (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C14405) *
               C14520) *
              C14480 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14495) *
               C2406 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14495 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14405) *
               C2407 +
           ((C71 * C3720 + C3724 + C3724 + C61 * C3722) * C62 * C63 * C14405 -
            (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14495 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
              C14300 * C1254 +
          ((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14495) *
              C14300 * C1255 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14495 -
           (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C14405) *
              C14300 * C1256 +
          ((C71 * C1582 + C1586 + C1586 + C61 * C1584) * C62 * C63 * C14405 -
           (C71 * C76 + C92 + C92 + C61 * C86) * C62 * C63 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C5880 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C5881 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C5882 -
           (C71 * C5172 + C5179 + C5179 + C61 * C5176) * C62 * C63 * C14536) *
              C14300 * C14480 +
          ((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C5881 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C5880 -
           (C71 * C821 + C840 + C840 + C61 * C833) * C62 * C63 * C5882 +
           (C71 * C5884 + C5888 + C5888 + C61 * C5886) * C62 * C63 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C115 * C73 + C63 * C116) * C72 +
             (C115 * C78 + C63 * C121) * C61) *
                C62 * C14495 -
            ((C115 * C824 + C63 * C886) * C61 +
             (C115 * C818 + C63 * C880) * C72) *
                C62 * C14405) *
               C2406 +
           (((C115 * C1920 + C63 * C1982) * C72 +
             (C115 * C1923 + C63 * C1985) * C61) *
                C62 * C14405 -
            ((C115 * C383 + C63 * C445) * C61 +
             (C115 * C377 + C63 * C439) * C72) *
                C62 * C14495) *
               C2407 +
           (((C115 * C378 + C63 * C440) * C72 +
             (C115 * C384 + C63 * C446) * C61) *
                C62 * C14495 -
            ((C115 * C2994 + C63 * C3044) * C61 +
             (C115 * C2991 + C63 * C3041) * C72) *
                C62 * C14405) *
               C14520) *
              C14480 +
          ((((C115 * C820 + C63 * C882) * C72 +
             (C115 * C826 + C63 * C888) * C61) *
                C62 * C14405 -
            ((C115 * C79 + C63 * C122) * C61 +
             (C115 * C74 + C63 * C117) * C72) *
                C62 * C14495) *
               C2406 +
           (((C115 * C379 + C63 * C441) * C72 +
             (C115 * C385 + C63 * C447) * C61) *
                C62 * C14495 -
            ((C115 * C1924 + C63 * C1986) * C61 +
             (C115 * C1921 + C63 * C1983) * C72) *
                C62 * C14405) *
               C2407 +
           (((C115 * C3720 + C63 * C3774) * C72 +
             (C115 * C3721 + C63 * C3775) * C61) *
                C62 * C14405 -
            ((C115 * C386 + C63 * C448) * C61 +
             (C115 * C380 + C63 * C442) * C72) *
                C62 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14495 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14405) *
              C14300 * C1254 +
          (((C115 * C820 + C63 * C882) * C72 +
            (C115 * C826 + C63 * C888) * C61) *
               C62 * C14405 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14495) *
              C14300 * C1255 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14495 -
           ((C115 * C828 + C63 * C890) * C61 +
            (C115 * C822 + C63 * C884) * C72) *
               C62 * C14405) *
              C14300 * C1256 +
          (((C115 * C1582 + C63 * C1620) * C72 +
            (C115 * C1583 + C63 * C1621) * C61) *
               C62 * C14405 -
           ((C115 * C81 + C63 * C124) * C61 + (C115 * C76 + C63 * C119) * C72) *
               C62 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C5880 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C5881 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C5882 -
           ((C115 * C5174 + C63 * C5204) * C61 +
            (C115 * C5172 + C63 * C5202) * C72) *
               C62 * C14536) *
              C14300 * C14480 +
          (((C115 * C820 + C63 * C882) * C72 +
            (C115 * C826 + C63 * C888) * C61) *
               C62 * C5881 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C5880 -
           ((C115 * C827 + C63 * C889) * C61 +
            (C115 * C821 + C63 * C883) * C72) *
               C62 * C5882 +
           ((C115 * C5884 + C63 * C5922) * C72 +
            (C115 * C5885 + C63 * C5923) * C61) *
               C62 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C148 * C73 + C62 * C149) * C72 +
             (C148 * C78 + C62 * C154) * C61) *
                C63 * C14495 -
            ((C148 * C824 + C62 * C936) * C61 +
             (C148 * C818 + C62 * C930) * C72) *
                C63 * C14405) *
               C2406 +
           (((C148 * C1920 + C62 * C2038) * C72 +
             (C148 * C1923 + C62 * C2041) * C61) *
                C63 * C14405 -
            ((C148 * C383 + C62 * C495) * C61 +
             (C148 * C377 + C62 * C489) * C72) *
                C63 * C14495) *
               C2407 +
           (((C148 * C378 + C62 * C490) * C72 +
             (C148 * C384 + C62 * C496) * C61) *
                C63 * C14495 -
            ((C148 * C2994 + C62 * C3088) * C61 +
             (C148 * C2991 + C62 * C3085) * C72) *
                C63 * C14405) *
               C14520) *
              C14480 +
          ((((C148 * C820 + C62 * C932) * C72 +
             (C148 * C826 + C62 * C938) * C61) *
                C63 * C14405 -
            ((C148 * C79 + C62 * C155) * C61 +
             (C148 * C74 + C62 * C150) * C72) *
                C63 * C14495) *
               C2406 +
           (((C148 * C379 + C62 * C491) * C72 +
             (C148 * C385 + C62 * C497) * C61) *
                C63 * C14495 -
            ((C148 * C1924 + C62 * C2042) * C61 +
             (C148 * C1921 + C62 * C2039) * C72) *
                C63 * C14405) *
               C2407 +
           (((C148 * C3720 + C62 * C3826) * C72 +
             (C148 * C3721 + C62 * C3827) * C61) *
                C63 * C14405 -
            ((C148 * C386 + C62 * C498) * C61 +
             (C148 * C380 + C62 * C492) * C72) *
                C63 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14495 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14405) *
              C14300 * C1254 +
          (((C148 * C820 + C62 * C932) * C72 +
            (C148 * C826 + C62 * C938) * C61) *
               C63 * C14405 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14495) *
              C14300 * C1255 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14495 -
           ((C148 * C828 + C62 * C940) * C61 +
            (C148 * C822 + C62 * C934) * C72) *
               C63 * C14405) *
              C14300 * C1256 +
          (((C148 * C1582 + C62 * C1656) * C72 +
            (C148 * C1583 + C62 * C1657) * C61) *
               C63 * C14405 -
           ((C148 * C81 + C62 * C157) * C61 + (C148 * C76 + C62 * C152) * C72) *
               C63 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C5880 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C5881 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C5882 -
           ((C148 * C5174 + C62 * C5230) * C61 +
            (C148 * C5172 + C62 * C5228) * C72) *
               C63 * C14536) *
              C14300 * C14480 +
          (((C148 * C820 + C62 * C932) * C72 +
            (C148 * C826 + C62 * C938) * C61) *
               C63 * C5881 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C5880 -
           ((C148 * C827 + C62 * C939) * C61 +
            (C148 * C821 + C62 * C933) * C72) *
               C63 * C5882 +
           ((C148 * C5884 + C62 * C5958) * C72 +
            (C148 * C5885 + C62 * C5959) * C61) *
               C63 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C14495 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14405) *
               C2406 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14405 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C14495) *
               C2407 +
           (((C72 * C378 + C61 * C384) * C115 +
             (C72 * C440 + C61 * C540) * C63) *
                C62 * C14495 -
            ((C72 * C3041 + C61 * C3129) * C63 +
             (C72 * C2991 + C61 * C2994) * C115) *
                C62 * C14405) *
               C14520) *
              C14480 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14405 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C14495) *
               C2406 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C14495 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14405) *
               C2407 +
           (((C72 * C3720 + C61 * C3721) * C115 +
             (C72 * C3774 + C61 * C3878) * C63) *
                C62 * C14405 -
            ((C72 * C442 + C61 * C542) * C63 +
             (C72 * C380 + C61 * C386) * C115) *
                C62 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14495 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14405) *
              C14300 * C1254 +
          (((C72 * C820 + C61 * C826) * C115 +
            (C72 * C882 + C61 * C982) * C63) *
               C62 * C14405 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14495) *
              C14300 * C1255 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14495 -
           ((C72 * C884 + C61 * C984) * C63 +
            (C72 * C822 + C61 * C828) * C115) *
               C62 * C14405) *
              C14300 * C1256 +
          (((C72 * C1582 + C61 * C1583) * C115 +
            (C72 * C1620 + C61 * C1692) * C63) *
               C62 * C14405 -
           ((C72 * C119 + C61 * C184) * C63 + (C72 * C76 + C61 * C81) * C115) *
               C62 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C5880 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C5881 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C5882 -
           ((C72 * C5202 + C61 * C5254) * C63 +
            (C72 * C5172 + C61 * C5174) * C115) *
               C62 * C14536) *
              C14300 * C14480 +
          (((C72 * C820 + C61 * C826) * C115 +
            (C72 * C882 + C61 * C982) * C63) *
               C62 * C5881 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C5880 -
           ((C72 * C883 + C61 * C983) * C63 +
            (C72 * C821 + C61 * C827) * C115) *
               C62 * C5882 +
           ((C72 * C5884 + C61 * C5885) * C115 +
            (C72 * C5922 + C61 * C5994) * C63) *
               C62 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14495 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
               C2406 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14495) *
               C2407 +
           ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14495 -
            (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C14405) *
               C14520) *
              C14480 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14495) *
               C2406 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14495 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14405) *
               C2407 +
           ((C208 * C3720 + C3931 + C3931 + C63 * C3929) * C61 * C62 * C14405 -
            (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14495 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
              C14300 * C1254 +
          ((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14495) *
              C14300 * C1255 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14495 -
           (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C14405) *
              C14300 * C1256 +
          ((C208 * C1582 + C1729 + C1729 + C63 * C1727) * C61 * C62 * C14405 -
           (C208 * C76 + C218 + C218 + C63 * C212) * C61 * C62 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C5880 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C5881 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C5882 -
           (C208 * C5172 + C5281 + C5281 + C63 * C5278) * C61 * C62 * C14536) *
              C14300 * C14480 +
          ((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C5881 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C5880 -
           (C208 * C821 + C1034 + C1034 + C63 * C1027) * C61 * C62 * C5882 +
           (C208 * C5884 + C6031 + C6031 + C63 * C6029) * C61 * C62 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C148 * C73 + C62 * C149) * C115 +
                       (C148 * C116 + C62 * C241) * C63) *
                          C61 * C14495 -
                      ((C148 * C880 + C62 * C1074) * C63 +
                       (C148 * C818 + C62 * C930) * C115) *
                          C61 * C14405) *
                         C2406 +
                     (((C148 * C1920 + C62 * C2038) * C115 +
                       (C148 * C1982 + C62 * C2203) * C63) *
                          C61 * C14405 -
                      ((C148 * C439 + C62 * C633) * C63 +
                       (C148 * C377 + C62 * C489) * C115) *
                          C61 * C14495) *
                         C2407 +
                     (((C148 * C378 + C62 * C490) * C115 +
                       (C148 * C440 + C62 * C634) * C63) *
                          C61 * C14495 -
                      ((C148 * C3041 + C62 * C3214) * C63 +
                       (C148 * C2991 + C62 * C3085) * C115) *
                          C61 * C14405) *
                         C14520) *
                        C14480 +
                    ((((C148 * C820 + C62 * C932) * C115 +
                       (C148 * C882 + C62 * C1076) * C63) *
                          C61 * C14405 -
                      ((C148 * C117 + C62 * C242) * C63 +
                       (C148 * C74 + C62 * C150) * C115) *
                          C61 * C14495) *
                         C2406 +
                     (((C148 * C379 + C62 * C491) * C115 +
                       (C148 * C441 + C62 * C635) * C63) *
                          C61 * C14495 -
                      ((C148 * C1983 + C62 * C2204) * C63 +
                       (C148 * C1921 + C62 * C2039) * C115) *
                          C61 * C14405) *
                         C2407 +
                     (((C148 * C3720 + C62 * C3826) * C115 +
                       (C148 * C3774 + C62 * C3981) * C63) *
                          C61 * C14405 -
                      ((C148 * C442 + C62 * C636) * C63 +
                       (C148 * C380 + C62 * C492) * C115) *
                          C61 * C14495) *
                         C14520) *
                        C14283)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14495 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14405) *
                        C14300 * C1254 +
                    (((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14405 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14495) *
                        C14300 * C1255 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14495 -
                     ((C148 * C884 + C62 * C1078) * C63 +
                      (C148 * C822 + C62 * C934) * C115) *
                         C61 * C14405) *
                        C14300 * C1256 +
                    (((C148 * C1582 + C62 * C1656) * C115 +
                      (C148 * C1620 + C62 * C1763) * C63) *
                         C61 * C14405 -
                     ((C148 * C119 + C62 * C244) * C63 +
                      (C148 * C76 + C62 * C152) * C115) *
                         C61 * C14495) *
                        C14300 * C14524)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C5880 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C5881 +
                     ((C148 * C819 + C62 * C931) * C115 +
                      (C148 * C881 + C62 * C1075) * C63) *
                         C61 * C5882 -
                     ((C148 * C5202 + C62 * C5304) * C63 +
                      (C148 * C5172 + C62 * C5228) * C115) *
                         C61 * C14536) *
                        C14300 * C14480 +
                    (((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C5881 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C5880 -
                     ((C148 * C883 + C62 * C1077) * C63 +
                      (C148 * C821 + C62 * C933) * C115) *
                         C61 * C5882 +
                     ((C148 * C5884 + C62 * C5958) * C115 +
                      (C148 * C5922 + C62 * C6065) * C63) *
                         C61 * C14536) *
                        C14300 * C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C14495 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14405) *
               C2406 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14405 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C14495) *
               C2407 +
           (((C72 * C378 + C61 * C384) * C148 +
             (C72 * C490 + C61 * C678) * C62) *
                C63 * C14495 -
            ((C72 * C3085 + C61 * C3255) * C62 +
             (C72 * C2991 + C61 * C2994) * C148) *
                C63 * C14405) *
               C14520) *
              C14480 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14405 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C14495) *
               C2406 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C14495 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14405) *
               C2407 +
           (((C72 * C3720 + C61 * C3721) * C148 +
             (C72 * C3826 + C61 * C4032) * C62) *
                C63 * C14405 -
            ((C72 * C492 + C61 * C680) * C62 +
             (C72 * C380 + C61 * C386) * C148) *
                C63 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14495 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14405) *
              C14300 * C1254 +
          (((C72 * C820 + C61 * C826) * C148 +
            (C72 * C932 + C61 * C1120) * C62) *
               C63 * C14405 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14495) *
              C14300 * C1255 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14495 -
           ((C72 * C934 + C61 * C1122) * C62 +
            (C72 * C822 + C61 * C828) * C148) *
               C63 * C14405) *
              C14300 * C1256 +
          (((C72 * C1582 + C61 * C1583) * C148 +
            (C72 * C1656 + C61 * C1798) * C62) *
               C63 * C14405 -
           ((C72 * C152 + C61 * C271) * C62 + (C72 * C76 + C61 * C81) * C148) *
               C63 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C5880 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C5881 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C5882 -
           ((C72 * C5228 + C61 * C5328) * C62 +
            (C72 * C5172 + C61 * C5174) * C148) *
               C63 * C14536) *
              C14300 * C14480 +
          (((C72 * C820 + C61 * C826) * C148 +
            (C72 * C932 + C61 * C1120) * C62) *
               C63 * C5881 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C5880 -
           ((C72 * C933 + C61 * C1121) * C62 +
            (C72 * C821 + C61 * C827) * C148) *
               C63 * C5882 +
           ((C72 * C5884 + C61 * C5885) * C148 +
            (C72 * C5958 + C61 * C6100) * C62) *
               C63 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eezy[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C115 * C73 + C63 * C116) * C148 +
                       (C115 * C149 + C63 * C295) * C62) *
                          C61 * C14495 -
                      ((C115 * C930 + C63 * C1162) * C62 +
                       (C115 * C818 + C63 * C880) * C148) *
                          C61 * C14405) *
                         C2406 +
                     (((C115 * C1920 + C63 * C1982) * C148 +
                       (C115 * C2038 + C63 * C2309) * C62) *
                          C61 * C14405 -
                      ((C115 * C489 + C63 * C721) * C62 +
                       (C115 * C377 + C63 * C439) * C148) *
                          C61 * C14495) *
                         C2407 +
                     (((C115 * C378 + C63 * C440) * C148 +
                       (C115 * C490 + C63 * C722) * C62) *
                          C61 * C14495 -
                      ((C115 * C3085 + C63 * C3296) * C62 +
                       (C115 * C2991 + C63 * C3041) * C148) *
                          C61 * C14405) *
                         C14520) *
                        C14480 +
                    ((((C115 * C820 + C63 * C882) * C148 +
                       (C115 * C932 + C63 * C1164) * C62) *
                          C61 * C14405 -
                      ((C115 * C150 + C63 * C296) * C62 +
                       (C115 * C74 + C63 * C117) * C148) *
                          C61 * C14495) *
                         C2406 +
                     (((C115 * C379 + C63 * C441) * C148 +
                       (C115 * C491 + C63 * C723) * C62) *
                          C61 * C14495 -
                      ((C115 * C2039 + C63 * C2310) * C62 +
                       (C115 * C1921 + C63 * C1983) * C148) *
                          C61 * C14405) *
                         C2407 +
                     (((C115 * C3720 + C63 * C3774) * C148 +
                       (C115 * C3826 + C63 * C4083) * C62) *
                          C61 * C14405 -
                      ((C115 * C492 + C63 * C724) * C62 +
                       (C115 * C380 + C63 * C442) * C148) *
                          C61 * C14495) *
                         C14520) *
                        C14283)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14495 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14405) *
                        C14300 * C1254 +
                    (((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14405 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14495) *
                        C14300 * C1255 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14495 -
                     ((C115 * C934 + C63 * C1166) * C62 +
                      (C115 * C822 + C63 * C884) * C148) *
                         C61 * C14405) *
                        C14300 * C1256 +
                    (((C115 * C1582 + C63 * C1620) * C148 +
                      (C115 * C1656 + C63 * C1833) * C62) *
                         C61 * C14405 -
                     ((C115 * C152 + C63 * C298) * C62 +
                      (C115 * C76 + C63 * C119) * C148) *
                         C61 * C14495) *
                        C14300 * C14524)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C5880 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C5881 +
                     ((C115 * C819 + C63 * C881) * C148 +
                      (C115 * C931 + C63 * C1163) * C62) *
                         C61 * C5882 -
                     ((C115 * C5228 + C63 * C5352) * C62 +
                      (C115 * C5172 + C63 * C5202) * C148) *
                         C61 * C14536) *
                        C14300 * C14480 +
                    (((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C5881 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C5880 -
                     ((C115 * C933 + C63 * C1165) * C62 +
                      (C115 * C821 + C63 * C883) * C148) *
                         C61 * C5882 +
                     ((C115 * C5884 + C63 * C5922) * C148 +
                      (C115 * C5958 + C63 * C6135) * C62) *
                         C61 * C14536) *
                        C14300 * C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14495 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
               C2406 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14495) *
               C2407 +
           ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14495 -
            (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C14405) *
               C14520) *
              C14480 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14495) *
               C2406 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14495 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14405) *
               C2407 +
           ((C322 * C3720 + C4136 + C4136 + C62 * C4134) * C63 * C61 * C14405 -
            (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14495 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
              C14300 * C1254 +
          ((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14495) *
              C14300 * C1255 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14495 -
           (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C14405) *
              C14300 * C1256 +
          ((C322 * C1582 + C1870 + C1870 + C62 * C1868) * C63 * C61 * C14405 -
           (C322 * C76 + C332 + C332 + C62 * C326) * C63 * C61 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C5880 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C5881 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C5882 -
           (C322 * C5172 + C5379 + C5379 + C62 * C5376) * C63 * C61 * C14536) *
              C14300 * C14480 +
          ((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C5881 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C5880 -
           (C322 * C821 + C1216 + C1216 + C62 * C1209) * C63 * C61 * C5882 +
           (C322 * C5884 + C6172 + C6172 + C62 * C6170) * C63 * C61 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C14555 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C14543 +
           (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 *
               C14520) *
              C374 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C14543 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C14555 -
           (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14318 *
               C14520) *
              C375 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C14555 -
           (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14318 *
               C14543 +
           (C71 * C382 + C401 + C401 + C61 * C394) * C62 * C63 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C14300 *
              C66 -
          (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C14300 *
              C67 +
          (C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C14300 *
              C68 -
          (C71 * C76 + C92 + C92 + C61 * C86) * C62 * C63 * C14318 * C14300 *
              C69 +
          (C71 * C77 + C93 + C93 + C61 * C87) * C62 * C63 * C14318 * C14300 *
              C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C2406 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C2407 +
           (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 *
               C14520) *
              C14552 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C2407 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C2406 -
           (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14318 *
               C14520) *
              C14539 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C2406 -
           (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14318 *
               C2407 +
           (C71 * C382 + C401 + C401 + C61 * C394) * C62 * C63 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C2738 -
          (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 * C2739 +
          (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 * C2740 -
          (C71 * C2744 + C2751 + C2751 + C61 * C2748) * C62 * C63 * C14318 *
              C2741 +
          (C71 * C2745 + C2752 + C2752 + C61 * C2749) * C62 * C63 * C14318 *
              C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C4496 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C4497 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C14523) *
              C14300 * C14552 +
          ((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C4497 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C4496 -
           (C71 * C821 + C840 + C840 + C61 * C833) * C62 * C63 * C14523) *
              C14300 * C14539 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C4496 -
           (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C4497 +
           (C71 * C823 + C842 + C842 + C61 * C835) * C62 * C63 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C4496 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C4497 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C14523) *
              C14555 +
          ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C4497 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C4496 -
           (C71 * C2990 + C3000 + C3000 + C61 * C2996) * C62 * C63 * C14523) *
              C14543 +
          ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C4496 -
           (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C4497 +
           (C71 * C2992 + C3002 + C3002 + C61 * C2998) * C62 * C63 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C14555 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C14543 +
           ((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14318 * C14520) *
              C374 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C14543 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C14555 -
           ((C115 * C386 + C63 * C448) * C61 +
            (C115 * C380 + C63 * C442) * C72) *
               C62 * C14318 * C14520) *
              C375 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14318 * C14555 -
           ((C115 * C387 + C63 * C449) * C61 +
            (C115 * C381 + C63 * C443) * C72) *
               C62 * C14318 * C14543 +
           ((C115 * C382 + C63 * C444) * C72 +
            (C115 * C388 + C63 * C450) * C61) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
              C62 * C14318 * C14300 * C66 -
          ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
              C62 * C14318 * C14300 * C67 +
          ((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
              C62 * C14318 * C14300 * C68 -
          ((C115 * C81 + C63 * C124) * C61 + (C115 * C76 + C63 * C119) * C72) *
              C62 * C14318 * C14300 * C69 +
          ((C115 * C77 + C63 * C120) * C72 + (C115 * C82 + C63 * C125) * C61) *
              C62 * C14318 * C14300 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C2406 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C2407 +
           ((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14318 * C14520) *
              C14552 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C2407 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C2406 -
           ((C115 * C386 + C63 * C448) * C61 +
            (C115 * C380 + C63 * C442) * C72) *
               C62 * C14318 * C14520) *
              C14539 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14318 * C2406 -
           ((C115 * C387 + C63 * C449) * C61 +
            (C115 * C381 + C63 * C443) * C72) *
               C62 * C14318 * C2407 +
           ((C115 * C382 + C63 * C444) * C72 +
            (C115 * C388 + C63 * C450) * C61) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
              C62 * C14318 * C2738 -
          ((C115 * C383 + C63 * C445) * C61 +
           (C115 * C377 + C63 * C439) * C72) *
              C62 * C14318 * C2739 +
          ((C115 * C378 + C63 * C440) * C72 +
           (C115 * C384 + C63 * C446) * C61) *
              C62 * C14318 * C2740 -
          ((C115 * C2746 + C63 * C2776) * C61 +
           (C115 * C2744 + C63 * C2774) * C72) *
              C62 * C14318 * C2741 +
          ((C115 * C2745 + C63 * C2775) * C72 +
           (C115 * C2747 + C63 * C2777) * C61) *
              C62 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C4496 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C4497 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C14523) *
              C14300 * C14552 +
          (((C115 * C820 + C63 * C882) * C72 +
            (C115 * C826 + C63 * C888) * C61) *
               C62 * C4497 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C4496 -
           ((C115 * C827 + C63 * C889) * C61 +
            (C115 * C821 + C63 * C883) * C72) *
               C62 * C14523) *
              C14300 * C14539 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C4496 -
           ((C115 * C828 + C63 * C890) * C61 +
            (C115 * C822 + C63 * C884) * C72) *
               C62 * C4497 +
           ((C115 * C823 + C63 * C885) * C72 +
            (C115 * C829 + C63 * C891) * C61) *
               C62 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C4496 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C4497 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C14523) *
              C14555 +
          (((C115 * C1920 + C63 * C1982) * C72 +
            (C115 * C1923 + C63 * C1985) * C61) *
               C62 * C4497 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C4496 -
           ((C115 * C2993 + C63 * C3043) * C61 +
            (C115 * C2990 + C63 * C3040) * C72) *
               C62 * C14523) *
              C14543 +
          (((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C4496 -
           ((C115 * C2994 + C63 * C3044) * C61 +
            (C115 * C2991 + C63 * C3041) * C72) *
               C62 * C4497 +
           ((C115 * C2992 + C63 * C3042) * C72 +
            (C115 * C2995 + C63 * C3045) * C61) *
               C62 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C14555 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C14543 +
           ((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14318 * C14520) *
              C374 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C14543 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C14555 -
           ((C148 * C386 + C62 * C498) * C61 +
            (C148 * C380 + C62 * C492) * C72) *
               C63 * C14318 * C14520) *
              C375 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14318 * C14555 -
           ((C148 * C387 + C62 * C499) * C61 +
            (C148 * C381 + C62 * C493) * C72) *
               C63 * C14318 * C14543 +
           ((C148 * C382 + C62 * C494) * C72 +
            (C148 * C388 + C62 * C500) * C61) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
              C63 * C14318 * C14300 * C66 -
          ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
              C63 * C14318 * C14300 * C67 +
          ((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
              C63 * C14318 * C14300 * C68 -
          ((C148 * C81 + C62 * C157) * C61 + (C148 * C76 + C62 * C152) * C72) *
              C63 * C14318 * C14300 * C69 +
          ((C148 * C77 + C62 * C153) * C72 + (C148 * C82 + C62 * C158) * C61) *
              C63 * C14318 * C14300 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C2406 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C2407 +
           ((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14318 * C14520) *
              C14552 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C2407 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C2406 -
           ((C148 * C386 + C62 * C498) * C61 +
            (C148 * C380 + C62 * C492) * C72) *
               C63 * C14318 * C14520) *
              C14539 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14318 * C2406 -
           ((C148 * C387 + C62 * C499) * C61 +
            (C148 * C381 + C62 * C493) * C72) *
               C63 * C14318 * C2407 +
           ((C148 * C382 + C62 * C494) * C72 +
            (C148 * C388 + C62 * C500) * C61) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
              C63 * C14318 * C2738 -
          ((C148 * C383 + C62 * C495) * C61 +
           (C148 * C377 + C62 * C489) * C72) *
              C63 * C14318 * C2739 +
          ((C148 * C378 + C62 * C490) * C72 +
           (C148 * C384 + C62 * C496) * C61) *
              C63 * C14318 * C2740 -
          ((C148 * C2746 + C62 * C2802) * C61 +
           (C148 * C2744 + C62 * C2800) * C72) *
              C63 * C14318 * C2741 +
          ((C148 * C2745 + C62 * C2801) * C72 +
           (C148 * C2747 + C62 * C2803) * C61) *
              C63 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C4496 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C4497 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C14523) *
              C14300 * C14552 +
          (((C148 * C820 + C62 * C932) * C72 +
            (C148 * C826 + C62 * C938) * C61) *
               C63 * C4497 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C4496 -
           ((C148 * C827 + C62 * C939) * C61 +
            (C148 * C821 + C62 * C933) * C72) *
               C63 * C14523) *
              C14300 * C14539 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C4496 -
           ((C148 * C828 + C62 * C940) * C61 +
            (C148 * C822 + C62 * C934) * C72) *
               C63 * C4497 +
           ((C148 * C823 + C62 * C935) * C72 +
            (C148 * C829 + C62 * C941) * C61) *
               C63 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C4496 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C4497 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C14523) *
              C14555 +
          (((C148 * C1920 + C62 * C2038) * C72 +
            (C148 * C1923 + C62 * C2041) * C61) *
               C63 * C4497 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C4496 -
           ((C148 * C2993 + C62 * C3087) * C61 +
            (C148 * C2990 + C62 * C3084) * C72) *
               C63 * C14523) *
              C14543 +
          (((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C4496 -
           ((C148 * C2994 + C62 * C3088) * C61 +
            (C148 * C2991 + C62 * C3085) * C72) *
               C63 * C4497 +
           ((C148 * C2992 + C62 * C3086) * C72 +
            (C148 * C2995 + C62 * C3089) * C61) *
               C63 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C14555 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C14543 +
           ((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14318 * C14520) *
              C374 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C14543 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C14555 -
           ((C72 * C442 + C61 * C542) * C63 +
            (C72 * C380 + C61 * C386) * C115) *
               C62 * C14318 * C14520) *
              C375 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14318 * C14555 -
           ((C72 * C443 + C61 * C543) * C63 +
            (C72 * C381 + C61 * C387) * C115) *
               C62 * C14318 * C14543 +
           ((C72 * C382 + C61 * C388) * C115 +
            (C72 * C444 + C61 * C544) * C63) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
              C62 * C14318 * C14300 * C66 -
          ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
              C62 * C14318 * C14300 * C67 +
          ((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
              C62 * C14318 * C14300 * C68 -
          ((C72 * C119 + C61 * C184) * C63 + (C72 * C76 + C61 * C81) * C115) *
              C62 * C14318 * C14300 * C69 +
          ((C72 * C77 + C61 * C82) * C115 + (C72 * C120 + C61 * C185) * C63) *
              C62 * C14318 * C14300 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C2406 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C2407 +
           ((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14318 * C14520) *
              C14552 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C2407 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C2406 -
           ((C72 * C442 + C61 * C542) * C63 +
            (C72 * C380 + C61 * C386) * C115) *
               C62 * C14318 * C14520) *
              C14539 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14318 * C2406 -
           ((C72 * C443 + C61 * C543) * C63 +
            (C72 * C381 + C61 * C387) * C115) *
               C62 * C14318 * C2407 +
           ((C72 * C382 + C61 * C388) * C115 +
            (C72 * C444 + C61 * C544) * C63) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
              C62 * C14318 * C2738 -
          ((C72 * C439 + C61 * C539) * C63 + (C72 * C377 + C61 * C383) * C115) *
              C62 * C14318 * C2739 +
          ((C72 * C378 + C61 * C384) * C115 + (C72 * C440 + C61 * C540) * C63) *
              C62 * C14318 * C2740 -
          ((C72 * C2774 + C61 * C2826) * C63 +
           (C72 * C2744 + C61 * C2746) * C115) *
              C62 * C14318 * C2741 +
          ((C72 * C2745 + C61 * C2747) * C115 +
           (C72 * C2775 + C61 * C2827) * C63) *
              C62 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C4496 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C4497 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C14523) *
              C14300 * C14552 +
          (((C72 * C820 + C61 * C826) * C115 +
            (C72 * C882 + C61 * C982) * C63) *
               C62 * C4497 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C4496 -
           ((C72 * C883 + C61 * C983) * C63 +
            (C72 * C821 + C61 * C827) * C115) *
               C62 * C14523) *
              C14300 * C14539 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C4496 -
           ((C72 * C884 + C61 * C984) * C63 +
            (C72 * C822 + C61 * C828) * C115) *
               C62 * C4497 +
           ((C72 * C823 + C61 * C829) * C115 +
            (C72 * C885 + C61 * C985) * C63) *
               C62 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C4496 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C4497 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C14523) *
              C14555 +
          (((C72 * C1920 + C61 * C1923) * C115 +
            (C72 * C1982 + C61 * C2094) * C63) *
               C62 * C4497 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C4496 -
           ((C72 * C3040 + C61 * C3128) * C63 +
            (C72 * C2990 + C61 * C2993) * C115) *
               C62 * C14523) *
              C14543 +
          (((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C4496 -
           ((C72 * C3041 + C61 * C3129) * C63 +
            (C72 * C2991 + C61 * C2994) * C115) *
               C62 * C4497 +
           ((C72 * C2992 + C61 * C2995) * C115 +
            (C72 * C3042 + C61 * C3130) * C63) *
               C62 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
               C14555 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
               C14543 +
           (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
               C14520) *
              C374 +
          ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14318 *
               C14543 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
               C14555 -
           (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C14318 *
               C14520) *
              C375 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
               C14555 -
           (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C14318 *
               C14543 +
           (C208 * C382 + C595 + C595 + C63 * C588) * C61 * C62 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
              C14300 * C66 -
          (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
              C14300 * C67 +
          (C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
              C14300 * C68 -
          (C208 * C76 + C218 + C218 + C63 * C212) * C61 * C62 * C14318 *
              C14300 * C69 +
          (C208 * C77 + C219 + C219 + C63 * C213) * C61 * C62 * C14318 *
              C14300 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
               C2406 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
               C2407 +
           (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
               C14520) *
              C14552 +
          ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14318 *
               C2407 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
               C2406 -
           (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C14318 *
               C14520) *
              C14539 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
               C2406 -
           (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C14318 *
               C2407 +
           (C208 * C382 + C595 + C595 + C63 * C588) * C61 * C62 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 * C2738 -
          (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
              C2739 +
          (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
              C2740 -
          (C208 * C2744 + C2853 + C2853 + C63 * C2850) * C61 * C62 * C14318 *
              C2741 +
          (C208 * C2745 + C2854 + C2854 + C63 * C2851) * C61 * C62 * C14318 *
              C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C4496 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C4497 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C14523) *
              C14300 * C14552 +
          ((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C4497 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C4496 -
           (C208 * C821 + C1034 + C1034 + C63 * C1027) * C61 * C62 * C14523) *
              C14300 * C14539 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C4496 -
           (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C4497 +
           (C208 * C823 + C1036 + C1036 + C63 * C1029) * C61 * C62 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C4496 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C4497 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C14523) *
              C14555 +
          ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C4497 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C4496 -
           (C208 * C2990 + C3173 + C3173 + C63 * C3169) * C61 * C62 * C14523) *
              C14543 +
          ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C4496 -
           (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C4497 +
           (C208 * C2992 + C3175 + C3175 + C63 * C3171) * C61 * C62 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14318 * C14555 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14318 * C14543 +
                     ((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14318 * C14520) *
                        C374 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14318 * C14543 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14318 * C14555 -
                     ((C148 * C442 + C62 * C636) * C63 +
                      (C148 * C380 + C62 * C492) * C115) *
                         C61 * C14318 * C14520) *
                        C375 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14318 * C14555 -
                     ((C148 * C443 + C62 * C637) * C63 +
                      (C148 * C381 + C62 * C493) * C115) *
                         C61 * C14318 * C14543 +
                     ((C148 * C382 + C62 * C494) * C115 +
                      (C148 * C444 + C62 * C638) * C63) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14318 * C14300 * C66 -
                    ((C148 * C117 + C62 * C242) * C63 +
                     (C148 * C74 + C62 * C150) * C115) *
                        C61 * C14318 * C14300 * C67 +
                    ((C148 * C75 + C62 * C151) * C115 +
                     (C148 * C118 + C62 * C243) * C63) *
                        C61 * C14318 * C14300 * C68 -
                    ((C148 * C119 + C62 * C244) * C63 +
                     (C148 * C76 + C62 * C152) * C115) *
                        C61 * C14318 * C14300 * C69 +
                    ((C148 * C77 + C62 * C153) * C115 +
                     (C148 * C120 + C62 * C245) * C63) *
                        C61 * C14318 * C14300 * C70)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14318 * C2406 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14318 * C2407 +
                     ((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14318 * C14520) *
                        C14552 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14318 * C2407 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14318 * C2406 -
                     ((C148 * C442 + C62 * C636) * C63 +
                      (C148 * C380 + C62 * C492) * C115) *
                         C61 * C14318 * C14520) *
                        C14539 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14318 * C2406 -
                     ((C148 * C443 + C62 * C637) * C63 +
                      (C148 * C381 + C62 * C493) * C115) *
                         C61 * C14318 * C2407 +
                     ((C148 * C382 + C62 * C494) * C115 +
                      (C148 * C444 + C62 * C638) * C63) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14318 * C2738 -
                    ((C148 * C439 + C62 * C633) * C63 +
                     (C148 * C377 + C62 * C489) * C115) *
                        C61 * C14318 * C2739 +
                    ((C148 * C378 + C62 * C490) * C115 +
                     (C148 * C440 + C62 * C634) * C63) *
                        C61 * C14318 * C2740 -
                    ((C148 * C2774 + C62 * C2876) * C63 +
                     (C148 * C2744 + C62 * C2800) * C115) *
                        C61 * C14318 * C2741 +
                    ((C148 * C2745 + C62 * C2801) * C115 +
                     (C148 * C2775 + C62 * C2877) * C63) *
                        C61 * C14318 * C2742) *
                   C14272) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C4496 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C4497 +
                     ((C148 * C819 + C62 * C931) * C115 +
                      (C148 * C881 + C62 * C1075) * C63) *
                         C61 * C14523) *
                        C14300 * C14552 +
                    (((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C4497 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C4496 -
                     ((C148 * C883 + C62 * C1077) * C63 +
                      (C148 * C821 + C62 * C933) * C115) *
                         C61 * C14523) *
                        C14300 * C14539 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C4496 -
                     ((C148 * C884 + C62 * C1078) * C63 +
                      (C148 * C822 + C62 * C934) * C115) *
                         C61 * C4497 +
                     ((C148 * C823 + C62 * C935) * C115 +
                      (C148 * C885 + C62 * C1079) * C63) *
                         C61 * C14523) *
                        C14300 * C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C4496 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C4497 +
                     ((C148 * C819 + C62 * C931) * C115 +
                      (C148 * C881 + C62 * C1075) * C63) *
                         C61 * C14523) *
                        C14555 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C4497 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C4496 -
                     ((C148 * C3040 + C62 * C3213) * C63 +
                      (C148 * C2990 + C62 * C3084) * C115) *
                         C61 * C14523) *
                        C14543 +
                    (((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C4496 -
                     ((C148 * C3041 + C62 * C3214) * C63 +
                      (C148 * C2991 + C62 * C3085) * C115) *
                         C61 * C4497 +
                     ((C148 * C2992 + C62 * C3086) * C115 +
                      (C148 * C3042 + C62 * C3215) * C63) *
                         C61 * C14523) *
                        C14520) *
                   C14272) /
                      (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C14555 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C14543 +
           ((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14318 * C14520) *
              C374 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C14543 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C14555 -
           ((C72 * C492 + C61 * C680) * C62 +
            (C72 * C380 + C61 * C386) * C148) *
               C63 * C14318 * C14520) *
              C375 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14318 * C14555 -
           ((C72 * C493 + C61 * C681) * C62 +
            (C72 * C381 + C61 * C387) * C148) *
               C63 * C14318 * C14543 +
           ((C72 * C382 + C61 * C388) * C148 +
            (C72 * C494 + C61 * C682) * C62) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
              C63 * C14318 * C14300 * C66 -
          ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
              C63 * C14318 * C14300 * C67 +
          ((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
              C63 * C14318 * C14300 * C68 -
          ((C72 * C152 + C61 * C271) * C62 + (C72 * C76 + C61 * C81) * C148) *
              C63 * C14318 * C14300 * C69 +
          ((C72 * C77 + C61 * C82) * C148 + (C72 * C153 + C61 * C272) * C62) *
              C63 * C14318 * C14300 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C2406 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C2407 +
           ((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14318 * C14520) *
              C14552 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C2407 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C2406 -
           ((C72 * C492 + C61 * C680) * C62 +
            (C72 * C380 + C61 * C386) * C148) *
               C63 * C14318 * C14520) *
              C14539 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14318 * C2406 -
           ((C72 * C493 + C61 * C681) * C62 +
            (C72 * C381 + C61 * C387) * C148) *
               C63 * C14318 * C2407 +
           ((C72 * C382 + C61 * C388) * C148 +
            (C72 * C494 + C61 * C682) * C62) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
              C63 * C14318 * C2738 -
          ((C72 * C489 + C61 * C677) * C62 + (C72 * C377 + C61 * C383) * C148) *
              C63 * C14318 * C2739 +
          ((C72 * C378 + C61 * C384) * C148 + (C72 * C490 + C61 * C678) * C62) *
              C63 * C14318 * C2740 -
          ((C72 * C2800 + C61 * C2900) * C62 +
           (C72 * C2744 + C61 * C2746) * C148) *
              C63 * C14318 * C2741 +
          ((C72 * C2745 + C61 * C2747) * C148 +
           (C72 * C2801 + C61 * C2901) * C62) *
              C63 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C4496 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C4497 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C14523) *
              C14300 * C14552 +
          (((C72 * C820 + C61 * C826) * C148 +
            (C72 * C932 + C61 * C1120) * C62) *
               C63 * C4497 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C4496 -
           ((C72 * C933 + C61 * C1121) * C62 +
            (C72 * C821 + C61 * C827) * C148) *
               C63 * C14523) *
              C14300 * C14539 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C4496 -
           ((C72 * C934 + C61 * C1122) * C62 +
            (C72 * C822 + C61 * C828) * C148) *
               C63 * C4497 +
           ((C72 * C823 + C61 * C829) * C148 +
            (C72 * C935 + C61 * C1123) * C62) *
               C63 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C4496 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C4497 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C14523) *
              C14555 +
          (((C72 * C1920 + C61 * C1923) * C148 +
            (C72 * C2038 + C61 * C2256) * C62) *
               C63 * C4497 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C4496 -
           ((C72 * C3084 + C61 * C3254) * C62 +
            (C72 * C2990 + C61 * C2993) * C148) *
               C63 * C14523) *
              C14543 +
          (((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C4496 -
           ((C72 * C3085 + C61 * C3255) * C62 +
            (C72 * C2991 + C61 * C2994) * C148) *
               C63 * C4497 +
           ((C72 * C2992 + C61 * C2995) * C148 +
            (C72 * C3086 + C61 * C3256) * C62) *
               C63 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14318 * C14555 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14318 * C14543 +
                     ((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14318 * C14520) *
                        C374 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14318 * C14543 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14318 * C14555 -
                     ((C115 * C492 + C63 * C724) * C62 +
                      (C115 * C380 + C63 * C442) * C148) *
                         C61 * C14318 * C14520) *
                        C375 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14318 * C14555 -
                     ((C115 * C493 + C63 * C725) * C62 +
                      (C115 * C381 + C63 * C443) * C148) *
                         C61 * C14318 * C14543 +
                     ((C115 * C382 + C63 * C444) * C148 +
                      (C115 * C494 + C63 * C726) * C62) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14318 * C14300 * C66 -
                    ((C115 * C150 + C63 * C296) * C62 +
                     (C115 * C74 + C63 * C117) * C148) *
                        C61 * C14318 * C14300 * C67 +
                    ((C115 * C75 + C63 * C118) * C148 +
                     (C115 * C151 + C63 * C297) * C62) *
                        C61 * C14318 * C14300 * C68 -
                    ((C115 * C152 + C63 * C298) * C62 +
                     (C115 * C76 + C63 * C119) * C148) *
                        C61 * C14318 * C14300 * C69 +
                    ((C115 * C77 + C63 * C120) * C148 +
                     (C115 * C153 + C63 * C299) * C62) *
                        C61 * C14318 * C14300 * C70)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14318 * C2406 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14318 * C2407 +
                     ((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14318 * C14520) *
                        C14552 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14318 * C2407 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14318 * C2406 -
                     ((C115 * C492 + C63 * C724) * C62 +
                      (C115 * C380 + C63 * C442) * C148) *
                         C61 * C14318 * C14520) *
                        C14539 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14318 * C2406 -
                     ((C115 * C493 + C63 * C725) * C62 +
                      (C115 * C381 + C63 * C443) * C148) *
                         C61 * C14318 * C2407 +
                     ((C115 * C382 + C63 * C444) * C148 +
                      (C115 * C494 + C63 * C726) * C62) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14318 * C2738 -
                    ((C115 * C489 + C63 * C721) * C62 +
                     (C115 * C377 + C63 * C439) * C148) *
                        C61 * C14318 * C2739 +
                    ((C115 * C378 + C63 * C440) * C148 +
                     (C115 * C490 + C63 * C722) * C62) *
                        C61 * C14318 * C2740 -
                    ((C115 * C2800 + C63 * C2924) * C62 +
                     (C115 * C2744 + C63 * C2774) * C148) *
                        C61 * C14318 * C2741 +
                    ((C115 * C2745 + C63 * C2775) * C148 +
                     (C115 * C2801 + C63 * C2925) * C62) *
                        C61 * C14318 * C2742) *
                   C14272) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C4496 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C4497 +
                     ((C115 * C819 + C63 * C881) * C148 +
                      (C115 * C931 + C63 * C1163) * C62) *
                         C61 * C14523) *
                        C14300 * C14552 +
                    (((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C4497 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C4496 -
                     ((C115 * C933 + C63 * C1165) * C62 +
                      (C115 * C821 + C63 * C883) * C148) *
                         C61 * C14523) *
                        C14300 * C14539 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C4496 -
                     ((C115 * C934 + C63 * C1166) * C62 +
                      (C115 * C822 + C63 * C884) * C148) *
                         C61 * C4497 +
                     ((C115 * C823 + C63 * C885) * C148 +
                      (C115 * C935 + C63 * C1167) * C62) *
                         C61 * C14523) *
                        C14300 * C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C4496 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C4497 +
                     ((C115 * C819 + C63 * C881) * C148 +
                      (C115 * C931 + C63 * C1163) * C62) *
                         C61 * C14523) *
                        C14555 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C4497 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C4496 -
                     ((C115 * C3084 + C63 * C3295) * C62 +
                      (C115 * C2990 + C63 * C3040) * C148) *
                         C61 * C14523) *
                        C14543 +
                    (((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C4496 -
                     ((C115 * C3085 + C63 * C3296) * C62 +
                      (C115 * C2991 + C63 * C3041) * C148) *
                         C61 * C4497 +
                     ((C115 * C2992 + C63 * C3042) * C148 +
                      (C115 * C3086 + C63 * C3297) * C62) *
                         C61 * C14523) *
                        C14520) *
                   C14272) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
               C14555 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
               C14543 +
           (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
               C14520) *
              C374 +
          ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14318 *
               C14543 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
               C14555 -
           (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C14318 *
               C14520) *
              C375 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
               C14555 -
           (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C14318 *
               C14543 +
           (C322 * C382 + C777 + C777 + C62 * C770) * C63 * C61 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
              C14300 * C66 -
          (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
              C14300 * C67 +
          (C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
              C14300 * C68 -
          (C322 * C76 + C332 + C332 + C62 * C326) * C63 * C61 * C14318 *
              C14300 * C69 +
          (C322 * C77 + C333 + C333 + C62 * C327) * C63 * C61 * C14318 *
              C14300 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
               C2406 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
               C2407 +
           (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
               C14520) *
              C14552 +
          ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14318 *
               C2407 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
               C2406 -
           (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C14318 *
               C14520) *
              C14539 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
               C2406 -
           (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C14318 *
               C2407 +
           (C322 * C382 + C777 + C777 + C62 * C770) * C63 * C61 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 * C2738 -
          (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
              C2739 +
          (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
              C2740 -
          (C322 * C2744 + C2951 + C2951 + C62 * C2948) * C63 * C61 * C14318 *
              C2741 +
          (C322 * C2745 + C2952 + C2952 + C62 * C2949) * C63 * C61 * C14318 *
              C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C4496 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C4497 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C14523) *
              C14300 * C14552 +
          ((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C4497 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C4496 -
           (C322 * C821 + C1216 + C1216 + C62 * C1209) * C63 * C61 * C14523) *
              C14300 * C14539 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C4496 -
           (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C4497 +
           (C322 * C823 + C1218 + C1218 + C62 * C1211) * C63 * C61 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C4496 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C4497 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C14523) *
              C14555 +
          ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C4497 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C4496 -
           (C322 * C2990 + C3340 + C3340 + C62 * C3336) * C63 * C61 * C14523) *
              C14543 +
          ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C4496 -
           (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C4497 +
           (C322 * C2992 + C3342 + C3342 + C62 * C3338) * C63 * C61 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C8850 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
               C14494 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C8850) *
               C14363) *
              C14277 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C8850) *
               C14494 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C8850 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14405) *
               C14363) *
              C14286 +
          (((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C8850 -
            (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C14405) *
               C14494 +
           ((C71 * C1922 + C1932 + C1932 + C61 * C1928) * C62 * C63 * C14405 -
            (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C8850) *
               C14363) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C115 * C73 + C63 * C116) * C72 +
                       (C115 * C78 + C63 * C121) * C61) *
                          C62 * C8850 -
                      ((C115 * C824 + C63 * C886) * C61 +
                       (C115 * C818 + C63 * C880) * C72) *
                          C62 * C14405) *
                         C14494 +
                     (((C115 * C1920 + C63 * C1982) * C72 +
                       (C115 * C1923 + C63 * C1985) * C61) *
                          C62 * C14405 -
                      ((C115 * C383 + C63 * C445) * C61 +
                       (C115 * C377 + C63 * C439) * C72) *
                          C62 * C8850) *
                         C14363) *
                        C14277 +
                    ((((C115 * C820 + C63 * C882) * C72 +
                       (C115 * C826 + C63 * C888) * C61) *
                          C62 * C14405 -
                      ((C115 * C79 + C63 * C122) * C61 +
                       (C115 * C74 + C63 * C117) * C72) *
                          C62 * C8850) *
                         C14494 +
                     (((C115 * C379 + C63 * C441) * C72 +
                       (C115 * C385 + C63 * C447) * C61) *
                          C62 * C8850 -
                      ((C115 * C1924 + C63 * C1986) * C61 +
                       (C115 * C1921 + C63 * C1983) * C72) *
                          C62 * C14405) *
                         C14363) *
                        C14286 +
                    ((((C115 * C75 + C63 * C118) * C72 +
                       (C115 * C80 + C63 * C123) * C61) *
                          C62 * C8850 -
                      ((C115 * C828 + C63 * C890) * C61 +
                       (C115 * C822 + C63 * C884) * C72) *
                          C62 * C14405) *
                         C14494 +
                     (((C115 * C1922 + C63 * C1984) * C72 +
                       (C115 * C1925 + C63 * C1987) * C61) *
                          C62 * C14405 -
                      ((C115 * C387 + C63 * C449) * C61 +
                       (C115 * C381 + C63 * C443) * C72) *
                          C62 * C8850) *
                         C14363) *
                        C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C148 * C73 + C62 * C149) * C72 +
                       (C148 * C78 + C62 * C154) * C61) *
                          C63 * C8850 -
                      ((C148 * C824 + C62 * C936) * C61 +
                       (C148 * C818 + C62 * C930) * C72) *
                          C63 * C14405) *
                         C14494 +
                     (((C148 * C1920 + C62 * C2038) * C72 +
                       (C148 * C1923 + C62 * C2041) * C61) *
                          C63 * C14405 -
                      ((C148 * C383 + C62 * C495) * C61 +
                       (C148 * C377 + C62 * C489) * C72) *
                          C63 * C8850) *
                         C14363) *
                        C14277 +
                    ((((C148 * C820 + C62 * C932) * C72 +
                       (C148 * C826 + C62 * C938) * C61) *
                          C63 * C14405 -
                      ((C148 * C79 + C62 * C155) * C61 +
                       (C148 * C74 + C62 * C150) * C72) *
                          C63 * C8850) *
                         C14494 +
                     (((C148 * C379 + C62 * C491) * C72 +
                       (C148 * C385 + C62 * C497) * C61) *
                          C63 * C8850 -
                      ((C148 * C1924 + C62 * C2042) * C61 +
                       (C148 * C1921 + C62 * C2039) * C72) *
                          C63 * C14405) *
                         C14363) *
                        C14286 +
                    ((((C148 * C75 + C62 * C151) * C72 +
                       (C148 * C80 + C62 * C156) * C61) *
                          C63 * C8850 -
                      ((C148 * C828 + C62 * C940) * C61 +
                       (C148 * C822 + C62 * C934) * C72) *
                          C63 * C14405) *
                         C14494 +
                     (((C148 * C1922 + C62 * C2040) * C72 +
                       (C148 * C1925 + C62 * C2043) * C61) *
                          C63 * C14405 -
                      ((C148 * C387 + C62 * C499) * C61 +
                       (C148 * C381 + C62 * C493) * C72) *
                          C63 * C8850) *
                         C14363) *
                        C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C8850 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14405) *
               C14494 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14405 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C8850) *
               C14363) *
              C14277 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14405 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C8850) *
               C14494 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C8850 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14405) *
               C14363) *
              C14286 +
          ((((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
                C62 * C8850 -
            ((C72 * C884 + C61 * C984) * C63 +
             (C72 * C822 + C61 * C828) * C115) *
                C62 * C14405) *
               C14494 +
           (((C72 * C1922 + C61 * C1925) * C115 +
             (C72 * C1984 + C61 * C2096) * C63) *
                C62 * C14405 -
            ((C72 * C443 + C61 * C543) * C63 +
             (C72 * C381 + C61 * C387) * C115) *
                C62 * C8850) *
               C14363) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C8850 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
               C14494 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C8850) *
               C14363) *
              C14277 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C8850) *
               C14494 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C8850 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14405) *
               C14363) *
              C14286 +
          (((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C8850 -
            (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C14405) *
               C14494 +
           ((C208 * C1922 + C2153 + C2153 + C63 * C2149) * C61 * C62 * C14405 -
            (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C8850) *
               C14363) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C148 * C73 + C62 * C149) * C115 +
                       (C148 * C116 + C62 * C241) * C63) *
                          C61 * C8850 -
                      ((C148 * C880 + C62 * C1074) * C63 +
                       (C148 * C818 + C62 * C930) * C115) *
                          C61 * C14405) *
                         C14494 +
                     (((C148 * C1920 + C62 * C2038) * C115 +
                       (C148 * C1982 + C62 * C2203) * C63) *
                          C61 * C14405 -
                      ((C148 * C439 + C62 * C633) * C63 +
                       (C148 * C377 + C62 * C489) * C115) *
                          C61 * C8850) *
                         C14363) *
                        C14277 +
                    ((((C148 * C820 + C62 * C932) * C115 +
                       (C148 * C882 + C62 * C1076) * C63) *
                          C61 * C14405 -
                      ((C148 * C117 + C62 * C242) * C63 +
                       (C148 * C74 + C62 * C150) * C115) *
                          C61 * C8850) *
                         C14494 +
                     (((C148 * C379 + C62 * C491) * C115 +
                       (C148 * C441 + C62 * C635) * C63) *
                          C61 * C8850 -
                      ((C148 * C1983 + C62 * C2204) * C63 +
                       (C148 * C1921 + C62 * C2039) * C115) *
                          C61 * C14405) *
                         C14363) *
                        C14286 +
                    ((((C148 * C75 + C62 * C151) * C115 +
                       (C148 * C118 + C62 * C243) * C63) *
                          C61 * C8850 -
                      ((C148 * C884 + C62 * C1078) * C63 +
                       (C148 * C822 + C62 * C934) * C115) *
                          C61 * C14405) *
                         C14494 +
                     (((C148 * C1922 + C62 * C2040) * C115 +
                       (C148 * C1984 + C62 * C2205) * C63) *
                          C61 * C14405 -
                      ((C148 * C443 + C62 * C637) * C63 +
                       (C148 * C381 + C62 * C493) * C115) *
                          C61 * C8850) *
                         C14363) *
                        C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C8850 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14405) *
               C14494 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14405 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C8850) *
               C14363) *
              C14277 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14405 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C8850) *
               C14494 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C8850 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14405) *
               C14363) *
              C14286 +
          ((((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
                C63 * C8850 -
            ((C72 * C934 + C61 * C1122) * C62 +
             (C72 * C822 + C61 * C828) * C148) *
                C63 * C14405) *
               C14494 +
           (((C72 * C1922 + C61 * C1925) * C148 +
             (C72 * C2040 + C61 * C2258) * C62) *
                C63 * C14405 -
            ((C72 * C493 + C61 * C681) * C62 +
             (C72 * C381 + C61 * C387) * C148) *
                C63 * C8850) *
               C14363) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C115 * C73 + C63 * C116) * C148 +
                       (C115 * C149 + C63 * C295) * C62) *
                          C61 * C8850 -
                      ((C115 * C930 + C63 * C1162) * C62 +
                       (C115 * C818 + C63 * C880) * C148) *
                          C61 * C14405) *
                         C14494 +
                     (((C115 * C1920 + C63 * C1982) * C148 +
                       (C115 * C2038 + C63 * C2309) * C62) *
                          C61 * C14405 -
                      ((C115 * C489 + C63 * C721) * C62 +
                       (C115 * C377 + C63 * C439) * C148) *
                          C61 * C8850) *
                         C14363) *
                        C14277 +
                    ((((C115 * C820 + C63 * C882) * C148 +
                       (C115 * C932 + C63 * C1164) * C62) *
                          C61 * C14405 -
                      ((C115 * C150 + C63 * C296) * C62 +
                       (C115 * C74 + C63 * C117) * C148) *
                          C61 * C8850) *
                         C14494 +
                     (((C115 * C379 + C63 * C441) * C148 +
                       (C115 * C491 + C63 * C723) * C62) *
                          C61 * C8850 -
                      ((C115 * C2039 + C63 * C2310) * C62 +
                       (C115 * C1921 + C63 * C1983) * C148) *
                          C61 * C14405) *
                         C14363) *
                        C14286 +
                    ((((C115 * C75 + C63 * C118) * C148 +
                       (C115 * C151 + C63 * C297) * C62) *
                          C61 * C8850 -
                      ((C115 * C934 + C63 * C1166) * C62 +
                       (C115 * C822 + C63 * C884) * C148) *
                          C61 * C14405) *
                         C14494 +
                     (((C115 * C1922 + C63 * C1984) * C148 +
                       (C115 * C2040 + C63 * C2311) * C62) *
                          C61 * C14405 -
                      ((C115 * C493 + C63 * C725) * C62 +
                       (C115 * C381 + C63 * C443) * C148) *
                          C61 * C8850) *
                         C14363) *
                        C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C8850 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
               C14494 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C8850) *
               C14363) *
              C14277 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C8850) *
               C14494 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C8850 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14405) *
               C14363) *
              C14286 +
          (((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C8850 -
            (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C14405) *
               C14494 +
           ((C322 * C1922 + C2368 + C2368 + C62 * C2364) * C63 * C61 * C14405 -
            (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C8850) *
               C14363) *
              C7611)) /
        (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14401 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14408 +
            (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C10374) *
               C14494 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14408 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14401 -
            (C71 * C2990 + C3000 + C3000 + C61 * C2996) * C62 * C63 * C10374) *
               C14363) *
              C6844 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14408 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14401 -
            (C71 * C821 + C840 + C840 + C61 * C833) * C62 * C63 * C10374) *
               C14494 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14401 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14408 +
            (C71 * C5430 + C5434 + C5434 + C61 * C5432) * C62 * C63 * C10374) *
               C14363) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C115 * C73 + C63 * C116) * C72 +
                       (C115 * C78 + C63 * C121) * C61) *
                          C62 * C14401 -
                      ((C115 * C824 + C63 * C886) * C61 +
                       (C115 * C818 + C63 * C880) * C72) *
                          C62 * C14408 +
                      ((C115 * C819 + C63 * C881) * C72 +
                       (C115 * C825 + C63 * C887) * C61) *
                          C62 * C10374) *
                         C14494 +
                     (((C115 * C1920 + C63 * C1982) * C72 +
                       (C115 * C1923 + C63 * C1985) * C61) *
                          C62 * C14408 -
                      ((C115 * C383 + C63 * C445) * C61 +
                       (C115 * C377 + C63 * C439) * C72) *
                          C62 * C14401 -
                      ((C115 * C2993 + C63 * C3043) * C61 +
                       (C115 * C2990 + C63 * C3040) * C72) *
                          C62 * C10374) *
                         C14363) *
                        C6844 +
                    ((((C115 * C820 + C63 * C882) * C72 +
                       (C115 * C826 + C63 * C888) * C61) *
                          C62 * C14408 -
                      ((C115 * C79 + C63 * C122) * C61 +
                       (C115 * C74 + C63 * C117) * C72) *
                          C62 * C14401 -
                      ((C115 * C827 + C63 * C889) * C61 +
                       (C115 * C821 + C63 * C883) * C72) *
                          C62 * C10374) *
                         C14494 +
                     (((C115 * C379 + C63 * C441) * C72 +
                       (C115 * C385 + C63 * C447) * C61) *
                          C62 * C14401 -
                      ((C115 * C1924 + C63 * C1986) * C61 +
                       (C115 * C1921 + C63 * C1983) * C72) *
                          C62 * C14408 +
                      ((C115 * C5430 + C63 * C5484) * C72 +
                       (C115 * C5431 + C63 * C5485) * C61) *
                          C62 * C10374) *
                         C14363) *
                        C14283)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C148 * C73 + C62 * C149) * C72 +
                       (C148 * C78 + C62 * C154) * C61) *
                          C63 * C14401 -
                      ((C148 * C824 + C62 * C936) * C61 +
                       (C148 * C818 + C62 * C930) * C72) *
                          C63 * C14408 +
                      ((C148 * C819 + C62 * C931) * C72 +
                       (C148 * C825 + C62 * C937) * C61) *
                          C63 * C10374) *
                         C14494 +
                     (((C148 * C1920 + C62 * C2038) * C72 +
                       (C148 * C1923 + C62 * C2041) * C61) *
                          C63 * C14408 -
                      ((C148 * C383 + C62 * C495) * C61 +
                       (C148 * C377 + C62 * C489) * C72) *
                          C63 * C14401 -
                      ((C148 * C2993 + C62 * C3087) * C61 +
                       (C148 * C2990 + C62 * C3084) * C72) *
                          C63 * C10374) *
                         C14363) *
                        C6844 +
                    ((((C148 * C820 + C62 * C932) * C72 +
                       (C148 * C826 + C62 * C938) * C61) *
                          C63 * C14408 -
                      ((C148 * C79 + C62 * C155) * C61 +
                       (C148 * C74 + C62 * C150) * C72) *
                          C63 * C14401 -
                      ((C148 * C827 + C62 * C939) * C61 +
                       (C148 * C821 + C62 * C933) * C72) *
                          C63 * C10374) *
                         C14494 +
                     (((C148 * C379 + C62 * C491) * C72 +
                       (C148 * C385 + C62 * C497) * C61) *
                          C63 * C14401 -
                      ((C148 * C1924 + C62 * C2042) * C61 +
                       (C148 * C1921 + C62 * C2039) * C72) *
                          C63 * C14408 +
                      ((C148 * C5430 + C62 * C5536) * C72 +
                       (C148 * C5431 + C62 * C5537) * C61) *
                          C63 * C10374) *
                         C14363) *
                        C14283)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C14401 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14408 +
            ((C72 * C819 + C61 * C825) * C115 +
             (C72 * C881 + C61 * C981) * C63) *
                C62 * C10374) *
               C14494 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14408 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C14401 -
            ((C72 * C3040 + C61 * C3128) * C63 +
             (C72 * C2990 + C61 * C2993) * C115) *
                C62 * C10374) *
               C14363) *
              C6844 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14408 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C14401 -
            ((C72 * C883 + C61 * C983) * C63 +
             (C72 * C821 + C61 * C827) * C115) *
                C62 * C10374) *
               C14494 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C14401 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14408 +
            ((C72 * C5430 + C61 * C5431) * C115 +
             (C72 * C5484 + C61 * C5588) * C63) *
                C62 * C10374) *
               C14363) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14401 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14408 +
            (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C10374) *
               C14494 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14408 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14401 -
            (C208 * C2990 + C3173 + C3173 + C63 * C3169) * C61 * C62 * C10374) *
               C14363) *
              C6844 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14408 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14401 -
            (C208 * C821 + C1034 + C1034 + C63 * C1027) * C61 * C62 * C10374) *
               C14494 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14401 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14408 +
            (C208 * C5430 + C5641 + C5641 + C63 * C5639) * C61 * C62 * C10374) *
               C14363) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C148 * C73 + C62 * C149) * C115 +
                       (C148 * C116 + C62 * C241) * C63) *
                          C61 * C14401 -
                      ((C148 * C880 + C62 * C1074) * C63 +
                       (C148 * C818 + C62 * C930) * C115) *
                          C61 * C14408 +
                      ((C148 * C819 + C62 * C931) * C115 +
                       (C148 * C881 + C62 * C1075) * C63) *
                          C61 * C10374) *
                         C14494 +
                     (((C148 * C1920 + C62 * C2038) * C115 +
                       (C148 * C1982 + C62 * C2203) * C63) *
                          C61 * C14408 -
                      ((C148 * C439 + C62 * C633) * C63 +
                       (C148 * C377 + C62 * C489) * C115) *
                          C61 * C14401 -
                      ((C148 * C3040 + C62 * C3213) * C63 +
                       (C148 * C2990 + C62 * C3084) * C115) *
                          C61 * C10374) *
                         C14363) *
                        C6844 +
                    ((((C148 * C820 + C62 * C932) * C115 +
                       (C148 * C882 + C62 * C1076) * C63) *
                          C61 * C14408 -
                      ((C148 * C117 + C62 * C242) * C63 +
                       (C148 * C74 + C62 * C150) * C115) *
                          C61 * C14401 -
                      ((C148 * C883 + C62 * C1077) * C63 +
                       (C148 * C821 + C62 * C933) * C115) *
                          C61 * C10374) *
                         C14494 +
                     (((C148 * C379 + C62 * C491) * C115 +
                       (C148 * C441 + C62 * C635) * C63) *
                          C61 * C14401 -
                      ((C148 * C1983 + C62 * C2204) * C63 +
                       (C148 * C1921 + C62 * C2039) * C115) *
                          C61 * C14408 +
                      ((C148 * C5430 + C62 * C5536) * C115 +
                       (C148 * C5484 + C62 * C5691) * C63) *
                          C61 * C10374) *
                         C14363) *
                        C14283)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C14401 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14408 +
            ((C72 * C819 + C61 * C825) * C148 +
             (C72 * C931 + C61 * C1119) * C62) *
                C63 * C10374) *
               C14494 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14408 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C14401 -
            ((C72 * C3084 + C61 * C3254) * C62 +
             (C72 * C2990 + C61 * C2993) * C148) *
                C63 * C10374) *
               C14363) *
              C6844 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14408 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C14401 -
            ((C72 * C933 + C61 * C1121) * C62 +
             (C72 * C821 + C61 * C827) * C148) *
                C63 * C10374) *
               C14494 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C14401 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14408 +
            ((C72 * C5430 + C61 * C5431) * C148 +
             (C72 * C5536 + C61 * C5742) * C62) *
                C63 * C10374) *
               C14363) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C115 * C73 + C63 * C116) * C148 +
                       (C115 * C149 + C63 * C295) * C62) *
                          C61 * C14401 -
                      ((C115 * C930 + C63 * C1162) * C62 +
                       (C115 * C818 + C63 * C880) * C148) *
                          C61 * C14408 +
                      ((C115 * C819 + C63 * C881) * C148 +
                       (C115 * C931 + C63 * C1163) * C62) *
                          C61 * C10374) *
                         C14494 +
                     (((C115 * C1920 + C63 * C1982) * C148 +
                       (C115 * C2038 + C63 * C2309) * C62) *
                          C61 * C14408 -
                      ((C115 * C489 + C63 * C721) * C62 +
                       (C115 * C377 + C63 * C439) * C148) *
                          C61 * C14401 -
                      ((C115 * C3084 + C63 * C3295) * C62 +
                       (C115 * C2990 + C63 * C3040) * C148) *
                          C61 * C10374) *
                         C14363) *
                        C6844 +
                    ((((C115 * C820 + C63 * C882) * C148 +
                       (C115 * C932 + C63 * C1164) * C62) *
                          C61 * C14408 -
                      ((C115 * C150 + C63 * C296) * C62 +
                       (C115 * C74 + C63 * C117) * C148) *
                          C61 * C14401 -
                      ((C115 * C933 + C63 * C1165) * C62 +
                       (C115 * C821 + C63 * C883) * C148) *
                          C61 * C10374) *
                         C14494 +
                     (((C115 * C379 + C63 * C441) * C148 +
                       (C115 * C491 + C63 * C723) * C62) *
                          C61 * C14401 -
                      ((C115 * C2039 + C63 * C2310) * C62 +
                       (C115 * C1921 + C63 * C1983) * C148) *
                          C61 * C14408 +
                      ((C115 * C5430 + C63 * C5484) * C148 +
                       (C115 * C5536 + C63 * C5793) * C62) *
                          C61 * C10374) *
                         C14363) *
                        C14283)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14401 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14408 +
            (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C10374) *
               C14494 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14408 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14401 -
            (C322 * C2990 + C3340 + C3340 + C62 * C3336) * C63 * C61 * C10374) *
               C14363) *
              C6844 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14408 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14401 -
            (C322 * C821 + C1216 + C1216 + C62 * C1209) * C63 * C61 * C10374) *
               C14494 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14401 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14408 +
            (C322 * C5430 + C5846 + C5846 + C62 * C5844) * C63 * C61 * C10374) *
               C14363) *
              C14283)) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C8850 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
               C14555 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C8850) *
               C14543 +
           ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C8850 -
            (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C14405) *
               C14520) *
              C6844 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C8850) *
               C14555 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C8850 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14405) *
               C14543 +
           ((C71 * C3720 + C3724 + C3724 + C61 * C3722) * C62 * C63 * C14405 -
            (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C8850 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
              C14300 * C14561 +
          ((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C8850) *
              C14300 * C14554 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C8850 -
           (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C14405) *
              C14300 * C14541 +
          ((C71 * C1582 + C1586 + C1586 + C61 * C1584) * C62 * C63 * C14405 -
           (C71 * C76 + C92 + C92 + C61 * C86) * C62 * C63 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14563 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14560 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C14551 -
           (C71 * C5172 + C5179 + C5179 + C61 * C5176) * C62 * C63 * C14536) *
              C14300 * C6844 +
          ((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14560 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14563 -
           (C71 * C821 + C840 + C840 + C61 * C833) * C62 * C63 * C14551 +
           (C71 * C5884 + C5888 + C5888 + C61 * C5886) * C62 * C63 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C115 * C73 + C63 * C116) * C72 +
             (C115 * C78 + C63 * C121) * C61) *
                C62 * C8850 -
            ((C115 * C824 + C63 * C886) * C61 +
             (C115 * C818 + C63 * C880) * C72) *
                C62 * C14405) *
               C14555 +
           (((C115 * C1920 + C63 * C1982) * C72 +
             (C115 * C1923 + C63 * C1985) * C61) *
                C62 * C14405 -
            ((C115 * C383 + C63 * C445) * C61 +
             (C115 * C377 + C63 * C439) * C72) *
                C62 * C8850) *
               C14543 +
           (((C115 * C378 + C63 * C440) * C72 +
             (C115 * C384 + C63 * C446) * C61) *
                C62 * C8850 -
            ((C115 * C2994 + C63 * C3044) * C61 +
             (C115 * C2991 + C63 * C3041) * C72) *
                C62 * C14405) *
               C14520) *
              C6844 +
          ((((C115 * C820 + C63 * C882) * C72 +
             (C115 * C826 + C63 * C888) * C61) *
                C62 * C14405 -
            ((C115 * C79 + C63 * C122) * C61 +
             (C115 * C74 + C63 * C117) * C72) *
                C62 * C8850) *
               C14555 +
           (((C115 * C379 + C63 * C441) * C72 +
             (C115 * C385 + C63 * C447) * C61) *
                C62 * C8850 -
            ((C115 * C1924 + C63 * C1986) * C61 +
             (C115 * C1921 + C63 * C1983) * C72) *
                C62 * C14405) *
               C14543 +
           (((C115 * C3720 + C63 * C3774) * C72 +
             (C115 * C3721 + C63 * C3775) * C61) *
                C62 * C14405 -
            ((C115 * C386 + C63 * C448) * C61 +
             (C115 * C380 + C63 * C442) * C72) *
                C62 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C8850 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14405) *
              C14300 * C14561 +
          (((C115 * C820 + C63 * C882) * C72 +
            (C115 * C826 + C63 * C888) * C61) *
               C62 * C14405 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C8850) *
              C14300 * C14554 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C8850 -
           ((C115 * C828 + C63 * C890) * C61 +
            (C115 * C822 + C63 * C884) * C72) *
               C62 * C14405) *
              C14300 * C14541 +
          (((C115 * C1582 + C63 * C1620) * C72 +
            (C115 * C1583 + C63 * C1621) * C61) *
               C62 * C14405 -
           ((C115 * C81 + C63 * C124) * C61 + (C115 * C76 + C63 * C119) * C72) *
               C62 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14563 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14560 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C14551 -
           ((C115 * C5174 + C63 * C5204) * C61 +
            (C115 * C5172 + C63 * C5202) * C72) *
               C62 * C14536) *
              C14300 * C6844 +
          (((C115 * C820 + C63 * C882) * C72 +
            (C115 * C826 + C63 * C888) * C61) *
               C62 * C14560 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14563 -
           ((C115 * C827 + C63 * C889) * C61 +
            (C115 * C821 + C63 * C883) * C72) *
               C62 * C14551 +
           ((C115 * C5884 + C63 * C5922) * C72 +
            (C115 * C5885 + C63 * C5923) * C61) *
               C62 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C148 * C73 + C62 * C149) * C72 +
             (C148 * C78 + C62 * C154) * C61) *
                C63 * C8850 -
            ((C148 * C824 + C62 * C936) * C61 +
             (C148 * C818 + C62 * C930) * C72) *
                C63 * C14405) *
               C14555 +
           (((C148 * C1920 + C62 * C2038) * C72 +
             (C148 * C1923 + C62 * C2041) * C61) *
                C63 * C14405 -
            ((C148 * C383 + C62 * C495) * C61 +
             (C148 * C377 + C62 * C489) * C72) *
                C63 * C8850) *
               C14543 +
           (((C148 * C378 + C62 * C490) * C72 +
             (C148 * C384 + C62 * C496) * C61) *
                C63 * C8850 -
            ((C148 * C2994 + C62 * C3088) * C61 +
             (C148 * C2991 + C62 * C3085) * C72) *
                C63 * C14405) *
               C14520) *
              C6844 +
          ((((C148 * C820 + C62 * C932) * C72 +
             (C148 * C826 + C62 * C938) * C61) *
                C63 * C14405 -
            ((C148 * C79 + C62 * C155) * C61 +
             (C148 * C74 + C62 * C150) * C72) *
                C63 * C8850) *
               C14555 +
           (((C148 * C379 + C62 * C491) * C72 +
             (C148 * C385 + C62 * C497) * C61) *
                C63 * C8850 -
            ((C148 * C1924 + C62 * C2042) * C61 +
             (C148 * C1921 + C62 * C2039) * C72) *
                C63 * C14405) *
               C14543 +
           (((C148 * C3720 + C62 * C3826) * C72 +
             (C148 * C3721 + C62 * C3827) * C61) *
                C63 * C14405 -
            ((C148 * C386 + C62 * C498) * C61 +
             (C148 * C380 + C62 * C492) * C72) *
                C63 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C8850 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14405) *
              C14300 * C14561 +
          (((C148 * C820 + C62 * C932) * C72 +
            (C148 * C826 + C62 * C938) * C61) *
               C63 * C14405 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C8850) *
              C14300 * C14554 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C8850 -
           ((C148 * C828 + C62 * C940) * C61 +
            (C148 * C822 + C62 * C934) * C72) *
               C63 * C14405) *
              C14300 * C14541 +
          (((C148 * C1582 + C62 * C1656) * C72 +
            (C148 * C1583 + C62 * C1657) * C61) *
               C63 * C14405 -
           ((C148 * C81 + C62 * C157) * C61 + (C148 * C76 + C62 * C152) * C72) *
               C63 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14563 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14560 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C14551 -
           ((C148 * C5174 + C62 * C5230) * C61 +
            (C148 * C5172 + C62 * C5228) * C72) *
               C63 * C14536) *
              C14300 * C6844 +
          (((C148 * C820 + C62 * C932) * C72 +
            (C148 * C826 + C62 * C938) * C61) *
               C63 * C14560 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14563 -
           ((C148 * C827 + C62 * C939) * C61 +
            (C148 * C821 + C62 * C933) * C72) *
               C63 * C14551 +
           ((C148 * C5884 + C62 * C5958) * C72 +
            (C148 * C5885 + C62 * C5959) * C61) *
               C63 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C8850 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14405) *
               C14555 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14405 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C8850) *
               C14543 +
           (((C72 * C378 + C61 * C384) * C115 +
             (C72 * C440 + C61 * C540) * C63) *
                C62 * C8850 -
            ((C72 * C3041 + C61 * C3129) * C63 +
             (C72 * C2991 + C61 * C2994) * C115) *
                C62 * C14405) *
               C14520) *
              C6844 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14405 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C8850) *
               C14555 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C8850 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14405) *
               C14543 +
           (((C72 * C3720 + C61 * C3721) * C115 +
             (C72 * C3774 + C61 * C3878) * C63) *
                C62 * C14405 -
            ((C72 * C442 + C61 * C542) * C63 +
             (C72 * C380 + C61 * C386) * C115) *
                C62 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C8850 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14405) *
              C14300 * C14561 +
          (((C72 * C820 + C61 * C826) * C115 +
            (C72 * C882 + C61 * C982) * C63) *
               C62 * C14405 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C8850) *
              C14300 * C14554 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C8850 -
           ((C72 * C884 + C61 * C984) * C63 +
            (C72 * C822 + C61 * C828) * C115) *
               C62 * C14405) *
              C14300 * C14541 +
          (((C72 * C1582 + C61 * C1583) * C115 +
            (C72 * C1620 + C61 * C1692) * C63) *
               C62 * C14405 -
           ((C72 * C119 + C61 * C184) * C63 + (C72 * C76 + C61 * C81) * C115) *
               C62 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14563 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14560 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C14551 -
           ((C72 * C5202 + C61 * C5254) * C63 +
            (C72 * C5172 + C61 * C5174) * C115) *
               C62 * C14536) *
              C14300 * C6844 +
          (((C72 * C820 + C61 * C826) * C115 +
            (C72 * C882 + C61 * C982) * C63) *
               C62 * C14560 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14563 -
           ((C72 * C883 + C61 * C983) * C63 +
            (C72 * C821 + C61 * C827) * C115) *
               C62 * C14551 +
           ((C72 * C5884 + C61 * C5885) * C115 +
            (C72 * C5922 + C61 * C5994) * C63) *
               C62 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C8850 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
               C14555 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C8850) *
               C14543 +
           ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C8850 -
            (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C14405) *
               C14520) *
              C6844 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C8850) *
               C14555 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C8850 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14405) *
               C14543 +
           ((C208 * C3720 + C3931 + C3931 + C63 * C3929) * C61 * C62 * C14405 -
            (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C8850 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
              C14300 * C14561 +
          ((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C8850) *
              C14300 * C14554 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C8850 -
           (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C14405) *
              C14300 * C14541 +
          ((C208 * C1582 + C1729 + C1729 + C63 * C1727) * C61 * C62 * C14405 -
           (C208 * C76 + C218 + C218 + C63 * C212) * C61 * C62 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14563 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14560 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C14551 -
           (C208 * C5172 + C5281 + C5281 + C63 * C5278) * C61 * C62 * C14536) *
              C14300 * C6844 +
          ((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14560 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14563 -
           (C208 * C821 + C1034 + C1034 + C63 * C1027) * C61 * C62 * C14551 +
           (C208 * C5884 + C6031 + C6031 + C63 * C6029) * C61 * C62 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C148 * C73 + C62 * C149) * C115 +
                       (C148 * C116 + C62 * C241) * C63) *
                          C61 * C8850 -
                      ((C148 * C880 + C62 * C1074) * C63 +
                       (C148 * C818 + C62 * C930) * C115) *
                          C61 * C14405) *
                         C14555 +
                     (((C148 * C1920 + C62 * C2038) * C115 +
                       (C148 * C1982 + C62 * C2203) * C63) *
                          C61 * C14405 -
                      ((C148 * C439 + C62 * C633) * C63 +
                       (C148 * C377 + C62 * C489) * C115) *
                          C61 * C8850) *
                         C14543 +
                     (((C148 * C378 + C62 * C490) * C115 +
                       (C148 * C440 + C62 * C634) * C63) *
                          C61 * C8850 -
                      ((C148 * C3041 + C62 * C3214) * C63 +
                       (C148 * C2991 + C62 * C3085) * C115) *
                          C61 * C14405) *
                         C14520) *
                        C6844 +
                    ((((C148 * C820 + C62 * C932) * C115 +
                       (C148 * C882 + C62 * C1076) * C63) *
                          C61 * C14405 -
                      ((C148 * C117 + C62 * C242) * C63 +
                       (C148 * C74 + C62 * C150) * C115) *
                          C61 * C8850) *
                         C14555 +
                     (((C148 * C379 + C62 * C491) * C115 +
                       (C148 * C441 + C62 * C635) * C63) *
                          C61 * C8850 -
                      ((C148 * C1983 + C62 * C2204) * C63 +
                       (C148 * C1921 + C62 * C2039) * C115) *
                          C61 * C14405) *
                         C14543 +
                     (((C148 * C3720 + C62 * C3826) * C115 +
                       (C148 * C3774 + C62 * C3981) * C63) *
                          C61 * C14405 -
                      ((C148 * C442 + C62 * C636) * C63 +
                       (C148 * C380 + C62 * C492) * C115) *
                          C61 * C8850) *
                         C14520) *
                        C14283)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C8850 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14405) *
                        C14300 * C14561 +
                    (((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14405 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C8850) *
                        C14300 * C14554 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C8850 -
                     ((C148 * C884 + C62 * C1078) * C63 +
                      (C148 * C822 + C62 * C934) * C115) *
                         C61 * C14405) *
                        C14300 * C14541 +
                    (((C148 * C1582 + C62 * C1656) * C115 +
                      (C148 * C1620 + C62 * C1763) * C63) *
                         C61 * C14405 -
                     ((C148 * C119 + C62 * C244) * C63 +
                      (C148 * C76 + C62 * C152) * C115) *
                         C61 * C8850) *
                        C14300 * C14524)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14563 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14560 +
                     ((C148 * C819 + C62 * C931) * C115 +
                      (C148 * C881 + C62 * C1075) * C63) *
                         C61 * C14551 -
                     ((C148 * C5202 + C62 * C5304) * C63 +
                      (C148 * C5172 + C62 * C5228) * C115) *
                         C61 * C14536) *
                        C14300 * C6844 +
                    (((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14560 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14563 -
                     ((C148 * C883 + C62 * C1077) * C63 +
                      (C148 * C821 + C62 * C933) * C115) *
                         C61 * C14551 +
                     ((C148 * C5884 + C62 * C5958) * C115 +
                      (C148 * C5922 + C62 * C6065) * C63) *
                         C61 * C14536) *
                        C14300 * C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C8850 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14405) *
               C14555 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14405 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C8850) *
               C14543 +
           (((C72 * C378 + C61 * C384) * C148 +
             (C72 * C490 + C61 * C678) * C62) *
                C63 * C8850 -
            ((C72 * C3085 + C61 * C3255) * C62 +
             (C72 * C2991 + C61 * C2994) * C148) *
                C63 * C14405) *
               C14520) *
              C6844 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14405 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C8850) *
               C14555 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C8850 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14405) *
               C14543 +
           (((C72 * C3720 + C61 * C3721) * C148 +
             (C72 * C3826 + C61 * C4032) * C62) *
                C63 * C14405 -
            ((C72 * C492 + C61 * C680) * C62 +
             (C72 * C380 + C61 * C386) * C148) *
                C63 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C8850 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14405) *
              C14300 * C14561 +
          (((C72 * C820 + C61 * C826) * C148 +
            (C72 * C932 + C61 * C1120) * C62) *
               C63 * C14405 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C8850) *
              C14300 * C14554 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C8850 -
           ((C72 * C934 + C61 * C1122) * C62 +
            (C72 * C822 + C61 * C828) * C148) *
               C63 * C14405) *
              C14300 * C14541 +
          (((C72 * C1582 + C61 * C1583) * C148 +
            (C72 * C1656 + C61 * C1798) * C62) *
               C63 * C14405 -
           ((C72 * C152 + C61 * C271) * C62 + (C72 * C76 + C61 * C81) * C148) *
               C63 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14563 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14560 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C14551 -
           ((C72 * C5228 + C61 * C5328) * C62 +
            (C72 * C5172 + C61 * C5174) * C148) *
               C63 * C14536) *
              C14300 * C6844 +
          (((C72 * C820 + C61 * C826) * C148 +
            (C72 * C932 + C61 * C1120) * C62) *
               C63 * C14560 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14563 -
           ((C72 * C933 + C61 * C1121) * C62 +
            (C72 * C821 + C61 * C827) * C148) *
               C63 * C14551 +
           ((C72 * C5884 + C61 * C5885) * C148 +
            (C72 * C5958 + C61 * C6100) * C62) *
               C63 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eezy[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C115 * C73 + C63 * C116) * C148 +
                       (C115 * C149 + C63 * C295) * C62) *
                          C61 * C8850 -
                      ((C115 * C930 + C63 * C1162) * C62 +
                       (C115 * C818 + C63 * C880) * C148) *
                          C61 * C14405) *
                         C14555 +
                     (((C115 * C1920 + C63 * C1982) * C148 +
                       (C115 * C2038 + C63 * C2309) * C62) *
                          C61 * C14405 -
                      ((C115 * C489 + C63 * C721) * C62 +
                       (C115 * C377 + C63 * C439) * C148) *
                          C61 * C8850) *
                         C14543 +
                     (((C115 * C378 + C63 * C440) * C148 +
                       (C115 * C490 + C63 * C722) * C62) *
                          C61 * C8850 -
                      ((C115 * C3085 + C63 * C3296) * C62 +
                       (C115 * C2991 + C63 * C3041) * C148) *
                          C61 * C14405) *
                         C14520) *
                        C6844 +
                    ((((C115 * C820 + C63 * C882) * C148 +
                       (C115 * C932 + C63 * C1164) * C62) *
                          C61 * C14405 -
                      ((C115 * C150 + C63 * C296) * C62 +
                       (C115 * C74 + C63 * C117) * C148) *
                          C61 * C8850) *
                         C14555 +
                     (((C115 * C379 + C63 * C441) * C148 +
                       (C115 * C491 + C63 * C723) * C62) *
                          C61 * C8850 -
                      ((C115 * C2039 + C63 * C2310) * C62 +
                       (C115 * C1921 + C63 * C1983) * C148) *
                          C61 * C14405) *
                         C14543 +
                     (((C115 * C3720 + C63 * C3774) * C148 +
                       (C115 * C3826 + C63 * C4083) * C62) *
                          C61 * C14405 -
                      ((C115 * C492 + C63 * C724) * C62 +
                       (C115 * C380 + C63 * C442) * C148) *
                          C61 * C8850) *
                         C14520) *
                        C14283)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C8850 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14405) *
                        C14300 * C14561 +
                    (((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14405 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C8850) *
                        C14300 * C14554 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C8850 -
                     ((C115 * C934 + C63 * C1166) * C62 +
                      (C115 * C822 + C63 * C884) * C148) *
                         C61 * C14405) *
                        C14300 * C14541 +
                    (((C115 * C1582 + C63 * C1620) * C148 +
                      (C115 * C1656 + C63 * C1833) * C62) *
                         C61 * C14405 -
                     ((C115 * C152 + C63 * C298) * C62 +
                      (C115 * C76 + C63 * C119) * C148) *
                         C61 * C8850) *
                        C14300 * C14524)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14563 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14560 +
                     ((C115 * C819 + C63 * C881) * C148 +
                      (C115 * C931 + C63 * C1163) * C62) *
                         C61 * C14551 -
                     ((C115 * C5228 + C63 * C5352) * C62 +
                      (C115 * C5172 + C63 * C5202) * C148) *
                         C61 * C14536) *
                        C14300 * C6844 +
                    (((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14560 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14563 -
                     ((C115 * C933 + C63 * C1165) * C62 +
                      (C115 * C821 + C63 * C883) * C148) *
                         C61 * C14551 +
                     ((C115 * C5884 + C63 * C5922) * C148 +
                      (C115 * C5958 + C63 * C6135) * C62) *
                         C61 * C14536) *
                        C14300 * C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C8850 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
               C14555 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C8850) *
               C14543 +
           ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C8850 -
            (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C14405) *
               C14520) *
              C6844 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C8850) *
               C14555 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C8850 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14405) *
               C14543 +
           ((C322 * C3720 + C4136 + C4136 + C62 * C4134) * C63 * C61 * C14405 -
            (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C8850 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
              C14300 * C14561 +
          ((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C8850) *
              C14300 * C14554 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C8850 -
           (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C14405) *
              C14300 * C14541 +
          ((C322 * C1582 + C1870 + C1870 + C62 * C1868) * C63 * C61 * C14405 -
           (C322 * C76 + C332 + C332 + C62 * C326) * C63 * C61 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14563 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14560 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C14551 -
           (C322 * C5172 + C5379 + C5379 + C62 * C5376) * C63 * C61 * C14536) *
              C14300 * C6844 +
          ((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14560 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14563 -
           (C322 * C821 + C1216 + C1216 + C62 * C1209) * C63 * C61 * C14551 +
           (C322 * C5884 + C6172 + C6172 + C62 * C6170) * C63 * C61 * C14536) *
              C14300 * C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14401 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14408 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C10374) *
              C14300 * C14277 +
          ((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14408 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14401 -
           (C71 * C821 + C840 + C840 + C61 * C833) * C62 * C63 * C10374) *
              C14300 * C14286 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14401 -
           (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C14408 +
           (C71 * C823 + C842 + C842 + C61 * C835) * C62 * C63 * C10374) *
              C14300 * C7611)) /
        (p * q * std::sqrt(p + q));
    d2eexy[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14401 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14408 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C10374) *
              C14300 * C14277 +
          (((C115 * C820 + C63 * C882) * C72 +
            (C115 * C826 + C63 * C888) * C61) *
               C62 * C14408 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14401 -
           ((C115 * C827 + C63 * C889) * C61 +
            (C115 * C821 + C63 * C883) * C72) *
               C62 * C10374) *
              C14300 * C14286 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14401 -
           ((C115 * C828 + C63 * C890) * C61 +
            (C115 * C822 + C63 * C884) * C72) *
               C62 * C14408 +
           ((C115 * C823 + C63 * C885) * C72 +
            (C115 * C829 + C63 * C891) * C61) *
               C62 * C10374) *
              C14300 * C7611)) /
        (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14401 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14408 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C10374) *
              C14300 * C14277 +
          (((C148 * C820 + C62 * C932) * C72 +
            (C148 * C826 + C62 * C938) * C61) *
               C63 * C14408 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14401 -
           ((C148 * C827 + C62 * C939) * C61 +
            (C148 * C821 + C62 * C933) * C72) *
               C63 * C10374) *
              C14300 * C14286 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14401 -
           ((C148 * C828 + C62 * C940) * C61 +
            (C148 * C822 + C62 * C934) * C72) *
               C63 * C14408 +
           ((C148 * C823 + C62 * C935) * C72 +
            (C148 * C829 + C62 * C941) * C61) *
               C63 * C10374) *
              C14300 * C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14401 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14408 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C10374) *
              C14300 * C14277 +
          (((C72 * C820 + C61 * C826) * C115 +
            (C72 * C882 + C61 * C982) * C63) *
               C62 * C14408 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14401 -
           ((C72 * C883 + C61 * C983) * C63 +
            (C72 * C821 + C61 * C827) * C115) *
               C62 * C10374) *
              C14300 * C14286 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14401 -
           ((C72 * C884 + C61 * C984) * C63 +
            (C72 * C822 + C61 * C828) * C115) *
               C62 * C14408 +
           ((C72 * C823 + C61 * C829) * C115 +
            (C72 * C885 + C61 * C985) * C63) *
               C62 * C10374) *
              C14300 * C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14401 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14408 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C10374) *
              C14300 * C14277 +
          ((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14408 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14401 -
           (C208 * C821 + C1034 + C1034 + C63 * C1027) * C61 * C62 * C10374) *
              C14300 * C14286 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14401 -
           (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C14408 +
           (C208 * C823 + C1036 + C1036 + C63 * C1029) * C61 * C62 * C10374) *
              C14300 * C7611)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14401 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14408 +
                     ((C148 * C819 + C62 * C931) * C115 +
                      (C148 * C881 + C62 * C1075) * C63) *
                         C61 * C10374) *
                        C14300 * C14277 +
                    (((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14408 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14401 -
                     ((C148 * C883 + C62 * C1077) * C63 +
                      (C148 * C821 + C62 * C933) * C115) *
                         C61 * C10374) *
                        C14300 * C14286 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14401 -
                     ((C148 * C884 + C62 * C1078) * C63 +
                      (C148 * C822 + C62 * C934) * C115) *
                         C61 * C14408 +
                     ((C148 * C823 + C62 * C935) * C115 +
                      (C148 * C885 + C62 * C1079) * C63) *
                         C61 * C10374) *
                        C14300 * C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14401 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14408 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C10374) *
              C14300 * C14277 +
          (((C72 * C820 + C61 * C826) * C148 +
            (C72 * C932 + C61 * C1120) * C62) *
               C63 * C14408 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14401 -
           ((C72 * C933 + C61 * C1121) * C62 +
            (C72 * C821 + C61 * C827) * C148) *
               C63 * C10374) *
              C14300 * C14286 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14401 -
           ((C72 * C934 + C61 * C1122) * C62 +
            (C72 * C822 + C61 * C828) * C148) *
               C63 * C14408 +
           ((C72 * C823 + C61 * C829) * C148 +
            (C72 * C935 + C61 * C1123) * C62) *
               C63 * C10374) *
              C14300 * C7611)) /
        (p * q * std::sqrt(p + q));
    d2eezy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14401 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14408 +
                     ((C115 * C819 + C63 * C881) * C148 +
                      (C115 * C931 + C63 * C1163) * C62) *
                         C61 * C10374) *
                        C14300 * C14277 +
                    (((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14408 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14401 -
                     ((C115 * C933 + C63 * C1165) * C62 +
                      (C115 * C821 + C63 * C883) * C148) *
                         C61 * C10374) *
                        C14300 * C14286 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14401 -
                     ((C115 * C934 + C63 * C1166) * C62 +
                      (C115 * C822 + C63 * C884) * C148) *
                         C61 * C14408 +
                     ((C115 * C823 + C63 * C885) * C148 +
                      (C115 * C935 + C63 * C1167) * C62) *
                         C61 * C10374) *
                        C14300 * C7611)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14401 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14408 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C10374) *
              C14300 * C14277 +
          ((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14408 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14401 -
           (C322 * C821 + C1216 + C1216 + C62 * C1209) * C63 * C61 * C10374) *
              C14300 * C14286 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14401 -
           (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C14408 +
           (C322 * C823 + C1218 + C1218 + C62 * C1211) * C63 * C61 * C10374) *
              C14300 * C7611)) /
        (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C8850 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
              C14300 * C14561 +
          ((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C8850) *
              C14300 * C14554 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C8850 -
           (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C14405) *
              C14300 * C14541 +
          ((C71 * C1582 + C1586 + C1586 + C61 * C1584) * C62 * C63 * C14405 -
           (C71 * C76 + C92 + C92 + C61 * C86) * C62 * C63 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C8850 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
               C14555 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C8850) *
               C14543 +
           ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C8850 -
            (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C14405) *
               C14520) *
              C6844 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C8850) *
               C14555 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C8850 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14405) *
               C14543 +
           ((C71 * C3720 + C3724 + C3724 + C61 * C3722) * C62 * C63 * C14405 -
            (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexy[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C8850 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14405) *
              C14300 * C14561 +
          (((C115 * C820 + C63 * C882) * C72 +
            (C115 * C826 + C63 * C888) * C61) *
               C62 * C14405 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C8850) *
              C14300 * C14554 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C8850 -
           ((C115 * C828 + C63 * C890) * C61 +
            (C115 * C822 + C63 * C884) * C72) *
               C62 * C14405) *
              C14300 * C14541 +
          (((C115 * C1582 + C63 * C1620) * C72 +
            (C115 * C1583 + C63 * C1621) * C61) *
               C62 * C14405 -
           ((C115 * C81 + C63 * C124) * C61 + (C115 * C76 + C63 * C119) * C72) *
               C62 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C115 * C73 + C63 * C116) * C72 +
             (C115 * C78 + C63 * C121) * C61) *
                C62 * C8850 -
            ((C115 * C824 + C63 * C886) * C61 +
             (C115 * C818 + C63 * C880) * C72) *
                C62 * C14405) *
               C14555 +
           (((C115 * C1920 + C63 * C1982) * C72 +
             (C115 * C1923 + C63 * C1985) * C61) *
                C62 * C14405 -
            ((C115 * C383 + C63 * C445) * C61 +
             (C115 * C377 + C63 * C439) * C72) *
                C62 * C8850) *
               C14543 +
           (((C115 * C378 + C63 * C440) * C72 +
             (C115 * C384 + C63 * C446) * C61) *
                C62 * C8850 -
            ((C115 * C2994 + C63 * C3044) * C61 +
             (C115 * C2991 + C63 * C3041) * C72) *
                C62 * C14405) *
               C14520) *
              C6844 +
          ((((C115 * C820 + C63 * C882) * C72 +
             (C115 * C826 + C63 * C888) * C61) *
                C62 * C14405 -
            ((C115 * C79 + C63 * C122) * C61 +
             (C115 * C74 + C63 * C117) * C72) *
                C62 * C8850) *
               C14555 +
           (((C115 * C379 + C63 * C441) * C72 +
             (C115 * C385 + C63 * C447) * C61) *
                C62 * C8850 -
            ((C115 * C1924 + C63 * C1986) * C61 +
             (C115 * C1921 + C63 * C1983) * C72) *
                C62 * C14405) *
               C14543 +
           (((C115 * C3720 + C63 * C3774) * C72 +
             (C115 * C3721 + C63 * C3775) * C61) *
                C62 * C14405 -
            ((C115 * C386 + C63 * C448) * C61 +
             (C115 * C380 + C63 * C442) * C72) *
                C62 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C8850 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14405) *
              C14300 * C14561 +
          (((C148 * C820 + C62 * C932) * C72 +
            (C148 * C826 + C62 * C938) * C61) *
               C63 * C14405 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C8850) *
              C14300 * C14554 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C8850 -
           ((C148 * C828 + C62 * C940) * C61 +
            (C148 * C822 + C62 * C934) * C72) *
               C63 * C14405) *
              C14300 * C14541 +
          (((C148 * C1582 + C62 * C1656) * C72 +
            (C148 * C1583 + C62 * C1657) * C61) *
               C63 * C14405 -
           ((C148 * C81 + C62 * C157) * C61 + (C148 * C76 + C62 * C152) * C72) *
               C63 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C148 * C73 + C62 * C149) * C72 +
             (C148 * C78 + C62 * C154) * C61) *
                C63 * C8850 -
            ((C148 * C824 + C62 * C936) * C61 +
             (C148 * C818 + C62 * C930) * C72) *
                C63 * C14405) *
               C14555 +
           (((C148 * C1920 + C62 * C2038) * C72 +
             (C148 * C1923 + C62 * C2041) * C61) *
                C63 * C14405 -
            ((C148 * C383 + C62 * C495) * C61 +
             (C148 * C377 + C62 * C489) * C72) *
                C63 * C8850) *
               C14543 +
           (((C148 * C378 + C62 * C490) * C72 +
             (C148 * C384 + C62 * C496) * C61) *
                C63 * C8850 -
            ((C148 * C2994 + C62 * C3088) * C61 +
             (C148 * C2991 + C62 * C3085) * C72) *
                C63 * C14405) *
               C14520) *
              C6844 +
          ((((C148 * C820 + C62 * C932) * C72 +
             (C148 * C826 + C62 * C938) * C61) *
                C63 * C14405 -
            ((C148 * C79 + C62 * C155) * C61 +
             (C148 * C74 + C62 * C150) * C72) *
                C63 * C8850) *
               C14555 +
           (((C148 * C379 + C62 * C491) * C72 +
             (C148 * C385 + C62 * C497) * C61) *
                C63 * C8850 -
            ((C148 * C1924 + C62 * C2042) * C61 +
             (C148 * C1921 + C62 * C2039) * C72) *
                C63 * C14405) *
               C14543 +
           (((C148 * C3720 + C62 * C3826) * C72 +
             (C148 * C3721 + C62 * C3827) * C61) *
                C63 * C14405 -
            ((C148 * C386 + C62 * C498) * C61 +
             (C148 * C380 + C62 * C492) * C72) *
                C63 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C8850 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14405) *
              C14300 * C14561 +
          (((C72 * C820 + C61 * C826) * C115 +
            (C72 * C882 + C61 * C982) * C63) *
               C62 * C14405 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C8850) *
              C14300 * C14554 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C8850 -
           ((C72 * C884 + C61 * C984) * C63 +
            (C72 * C822 + C61 * C828) * C115) *
               C62 * C14405) *
              C14300 * C14541 +
          (((C72 * C1582 + C61 * C1583) * C115 +
            (C72 * C1620 + C61 * C1692) * C63) *
               C62 * C14405 -
           ((C72 * C119 + C61 * C184) * C63 + (C72 * C76 + C61 * C81) * C115) *
               C62 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C8850 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14405) *
               C14555 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14405 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C8850) *
               C14543 +
           (((C72 * C378 + C61 * C384) * C115 +
             (C72 * C440 + C61 * C540) * C63) *
                C62 * C8850 -
            ((C72 * C3041 + C61 * C3129) * C63 +
             (C72 * C2991 + C61 * C2994) * C115) *
                C62 * C14405) *
               C14520) *
              C6844 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14405 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C8850) *
               C14555 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C8850 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14405) *
               C14543 +
           (((C72 * C3720 + C61 * C3721) * C115 +
             (C72 * C3774 + C61 * C3878) * C63) *
                C62 * C14405 -
            ((C72 * C442 + C61 * C542) * C63 +
             (C72 * C380 + C61 * C386) * C115) *
                C62 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C8850 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
              C14300 * C14561 +
          ((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C8850) *
              C14300 * C14554 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C8850 -
           (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C14405) *
              C14300 * C14541 +
          ((C208 * C1582 + C1729 + C1729 + C63 * C1727) * C61 * C62 * C14405 -
           (C208 * C76 + C218 + C218 + C63 * C212) * C61 * C62 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C8850 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
               C14555 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C8850) *
               C14543 +
           ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C8850 -
            (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C14405) *
               C14520) *
              C6844 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C8850) *
               C14555 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C8850 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14405) *
               C14543 +
           ((C208 * C3720 + C3931 + C3931 + C63 * C3929) * C61 * C62 * C14405 -
            (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C8850 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14405) *
                        C14300 * C14561 +
                    (((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14405 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C8850) *
                        C14300 * C14554 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C8850 -
                     ((C148 * C884 + C62 * C1078) * C63 +
                      (C148 * C822 + C62 * C934) * C115) *
                         C61 * C14405) *
                        C14300 * C14541 +
                    (((C148 * C1582 + C62 * C1656) * C115 +
                      (C148 * C1620 + C62 * C1763) * C63) *
                         C61 * C14405 -
                     ((C148 * C119 + C62 * C244) * C63 +
                      (C148 * C76 + C62 * C152) * C115) *
                         C61 * C8850) *
                        C14300 * C14524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C148 * C73 + C62 * C149) * C115 +
                       (C148 * C116 + C62 * C241) * C63) *
                          C61 * C8850 -
                      ((C148 * C880 + C62 * C1074) * C63 +
                       (C148 * C818 + C62 * C930) * C115) *
                          C61 * C14405) *
                         C14555 +
                     (((C148 * C1920 + C62 * C2038) * C115 +
                       (C148 * C1982 + C62 * C2203) * C63) *
                          C61 * C14405 -
                      ((C148 * C439 + C62 * C633) * C63 +
                       (C148 * C377 + C62 * C489) * C115) *
                          C61 * C8850) *
                         C14543 +
                     (((C148 * C378 + C62 * C490) * C115 +
                       (C148 * C440 + C62 * C634) * C63) *
                          C61 * C8850 -
                      ((C148 * C3041 + C62 * C3214) * C63 +
                       (C148 * C2991 + C62 * C3085) * C115) *
                          C61 * C14405) *
                         C14520) *
                        C6844 +
                    ((((C148 * C820 + C62 * C932) * C115 +
                       (C148 * C882 + C62 * C1076) * C63) *
                          C61 * C14405 -
                      ((C148 * C117 + C62 * C242) * C63 +
                       (C148 * C74 + C62 * C150) * C115) *
                          C61 * C8850) *
                         C14555 +
                     (((C148 * C379 + C62 * C491) * C115 +
                       (C148 * C441 + C62 * C635) * C63) *
                          C61 * C8850 -
                      ((C148 * C1983 + C62 * C2204) * C63 +
                       (C148 * C1921 + C62 * C2039) * C115) *
                          C61 * C14405) *
                         C14543 +
                     (((C148 * C3720 + C62 * C3826) * C115 +
                       (C148 * C3774 + C62 * C3981) * C63) *
                          C61 * C14405 -
                      ((C148 * C442 + C62 * C636) * C63 +
                       (C148 * C380 + C62 * C492) * C115) *
                          C61 * C8850) *
                         C14520) *
                        C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C8850 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14405) *
              C14300 * C14561 +
          (((C72 * C820 + C61 * C826) * C148 +
            (C72 * C932 + C61 * C1120) * C62) *
               C63 * C14405 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C8850) *
              C14300 * C14554 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C8850 -
           ((C72 * C934 + C61 * C1122) * C62 +
            (C72 * C822 + C61 * C828) * C148) *
               C63 * C14405) *
              C14300 * C14541 +
          (((C72 * C1582 + C61 * C1583) * C148 +
            (C72 * C1656 + C61 * C1798) * C62) *
               C63 * C14405 -
           ((C72 * C152 + C61 * C271) * C62 + (C72 * C76 + C61 * C81) * C148) *
               C63 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C8850 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14405) *
               C14555 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14405 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C8850) *
               C14543 +
           (((C72 * C378 + C61 * C384) * C148 +
             (C72 * C490 + C61 * C678) * C62) *
                C63 * C8850 -
            ((C72 * C3085 + C61 * C3255) * C62 +
             (C72 * C2991 + C61 * C2994) * C148) *
                C63 * C14405) *
               C14520) *
              C6844 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14405 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C8850) *
               C14555 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C8850 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14405) *
               C14543 +
           (((C72 * C3720 + C61 * C3721) * C148 +
             (C72 * C3826 + C61 * C4032) * C62) *
                C63 * C14405 -
            ((C72 * C492 + C61 * C680) * C62 +
             (C72 * C380 + C61 * C386) * C148) *
                C63 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eezy[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C8850 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14405) *
                        C14300 * C14561 +
                    (((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14405 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C8850) *
                        C14300 * C14554 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C8850 -
                     ((C115 * C934 + C63 * C1166) * C62 +
                      (C115 * C822 + C63 * C884) * C148) *
                         C61 * C14405) *
                        C14300 * C14541 +
                    (((C115 * C1582 + C63 * C1620) * C148 +
                      (C115 * C1656 + C63 * C1833) * C62) *
                         C61 * C14405 -
                     ((C115 * C152 + C63 * C298) * C62 +
                      (C115 * C76 + C63 * C119) * C148) *
                         C61 * C8850) *
                        C14300 * C14524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C115 * C73 + C63 * C116) * C148 +
                       (C115 * C149 + C63 * C295) * C62) *
                          C61 * C8850 -
                      ((C115 * C930 + C63 * C1162) * C62 +
                       (C115 * C818 + C63 * C880) * C148) *
                          C61 * C14405) *
                         C14555 +
                     (((C115 * C1920 + C63 * C1982) * C148 +
                       (C115 * C2038 + C63 * C2309) * C62) *
                          C61 * C14405 -
                      ((C115 * C489 + C63 * C721) * C62 +
                       (C115 * C377 + C63 * C439) * C148) *
                          C61 * C8850) *
                         C14543 +
                     (((C115 * C378 + C63 * C440) * C148 +
                       (C115 * C490 + C63 * C722) * C62) *
                          C61 * C8850 -
                      ((C115 * C3085 + C63 * C3296) * C62 +
                       (C115 * C2991 + C63 * C3041) * C148) *
                          C61 * C14405) *
                         C14520) *
                        C6844 +
                    ((((C115 * C820 + C63 * C882) * C148 +
                       (C115 * C932 + C63 * C1164) * C62) *
                          C61 * C14405 -
                      ((C115 * C150 + C63 * C296) * C62 +
                       (C115 * C74 + C63 * C117) * C148) *
                          C61 * C8850) *
                         C14555 +
                     (((C115 * C379 + C63 * C441) * C148 +
                       (C115 * C491 + C63 * C723) * C62) *
                          C61 * C8850 -
                      ((C115 * C2039 + C63 * C2310) * C62 +
                       (C115 * C1921 + C63 * C1983) * C148) *
                          C61 * C14405) *
                         C14543 +
                     (((C115 * C3720 + C63 * C3774) * C148 +
                       (C115 * C3826 + C63 * C4083) * C62) *
                          C61 * C14405 -
                      ((C115 * C492 + C63 * C724) * C62 +
                       (C115 * C380 + C63 * C442) * C148) *
                          C61 * C8850) *
                         C14520) *
                        C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C8850 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
              C14300 * C14561 +
          ((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C8850) *
              C14300 * C14554 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C8850 -
           (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C14405) *
              C14300 * C14541 +
          ((C322 * C1582 + C1870 + C1870 + C62 * C1868) * C63 * C61 * C14405 -
           (C322 * C76 + C332 + C332 + C62 * C326) * C63 * C61 * C8850) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C8850 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
               C14555 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C8850) *
               C14543 +
           ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C8850 -
            (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C14405) *
               C14520) *
              C6844 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C8850) *
               C14555 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C8850 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14405) *
               C14543 +
           ((C322 * C3720 + C4136 + C4136 + C62 * C4134) * C63 * C61 * C14405 -
            (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C8850) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C14494 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C14363) *
              C1254 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C14363 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C14494) *
              C1255 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C14494 -
           (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14318 *
               C14363) *
              C1256 +
          ((C71 * C1258 + C1262 + C1262 + C61 * C1260) * C62 * C63 * C14318 *
               C14363 -
           (C71 * C76 + C92 + C92 + C61 * C86) * C62 * C63 * C14318 * C14494) *
              C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C3376 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C3377 +
           (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 *
               C3378 -
           (C71 * C2744 + C2751 + C2751 + C61 * C2748) * C62 * C63 * C14318 *
               C14530) *
              C14480 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C3377 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C3376 -
           (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14318 *
               C3378 +
           (C71 * C3382 + C3386 + C3386 + C61 * C3384) * C62 * C63 * C14318 *
               C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C14494 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C14363) *
              C1254 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C14363 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C14494) *
              C1255 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14318 * C14494 -
           ((C115 * C387 + C63 * C449) * C61 +
            (C115 * C381 + C63 * C443) * C72) *
               C62 * C14318 * C14363) *
              C1256 +
          (((C115 * C1258 + C63 * C1296) * C72 +
            (C115 * C1259 + C63 * C1297) * C61) *
               C62 * C14318 * C14363 -
           ((C115 * C81 + C63 * C124) * C61 + (C115 * C76 + C63 * C119) * C72) *
               C62 * C14318 * C14494) *
              C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C3376 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C3377 +
           ((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14318 * C3378 -
           ((C115 * C2746 + C63 * C2776) * C61 +
            (C115 * C2744 + C63 * C2774) * C72) *
               C62 * C14318 * C14530) *
              C14480 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C3377 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C3376 -
           ((C115 * C386 + C63 * C448) * C61 +
            (C115 * C380 + C63 * C442) * C72) *
               C62 * C14318 * C3378 +
           ((C115 * C3382 + C63 * C3420) * C72 +
            (C115 * C3383 + C63 * C3421) * C61) *
               C62 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C14494 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C14363) *
              C1254 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C14363 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C14494) *
              C1255 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14318 * C14494 -
           ((C148 * C387 + C62 * C499) * C61 +
            (C148 * C381 + C62 * C493) * C72) *
               C63 * C14318 * C14363) *
              C1256 +
          (((C148 * C1258 + C62 * C1332) * C72 +
            (C148 * C1259 + C62 * C1333) * C61) *
               C63 * C14318 * C14363 -
           ((C148 * C81 + C62 * C157) * C61 + (C148 * C76 + C62 * C152) * C72) *
               C63 * C14318 * C14494) *
              C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C3376 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C3377 +
           ((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14318 * C3378 -
           ((C148 * C2746 + C62 * C2802) * C61 +
            (C148 * C2744 + C62 * C2800) * C72) *
               C63 * C14318 * C14530) *
              C14480 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C3377 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C3376 -
           ((C148 * C386 + C62 * C498) * C61 +
            (C148 * C380 + C62 * C492) * C72) *
               C63 * C14318 * C3378 +
           ((C148 * C3382 + C62 * C3456) * C72 +
            (C148 * C3383 + C62 * C3457) * C61) *
               C63 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C14494 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C14363) *
              C1254 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C14363 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C14494) *
              C1255 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14318 * C14494 -
           ((C72 * C443 + C61 * C543) * C63 +
            (C72 * C381 + C61 * C387) * C115) *
               C62 * C14318 * C14363) *
              C1256 +
          (((C72 * C1258 + C61 * C1259) * C115 +
            (C72 * C1296 + C61 * C1368) * C63) *
               C62 * C14318 * C14363 -
           ((C72 * C119 + C61 * C184) * C63 + (C72 * C76 + C61 * C81) * C115) *
               C62 * C14318 * C14494) *
              C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C3376 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C3377 +
           ((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14318 * C3378 -
           ((C72 * C2774 + C61 * C2826) * C63 +
            (C72 * C2744 + C61 * C2746) * C115) *
               C62 * C14318 * C14530) *
              C14480 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C3377 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C3376 -
           ((C72 * C442 + C61 * C542) * C63 +
            (C72 * C380 + C61 * C386) * C115) *
               C62 * C14318 * C3378 +
           ((C72 * C3382 + C61 * C3383) * C115 +
            (C72 * C3420 + C61 * C3492) * C63) *
               C62 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 *
                         C14318 * C14494 -
                     (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 *
                         C14318 * C14363) *
                        C1254 +
                    ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 *
                         C14318 * C14363 -
                     (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 *
                         C14318 * C14494) *
                        C1255 +
                    ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 *
                         C14318 * C14494 -
                     (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 *
                         C14318 * C14363) *
                        C1256 +
                    ((C208 * C1258 + C1405 + C1405 + C63 * C1403) * C61 * C62 *
                         C14318 * C14363 -
                     (C208 * C76 + C218 + C218 + C63 * C212) * C61 * C62 *
                         C14318 * C14494) *
                        C14524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 *
                         C14318 * C3376 -
                     (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 *
                         C14318 * C3377 +
                     (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 *
                         C14318 * C3378 -
                     (C208 * C2744 + C2853 + C2853 + C63 * C2850) * C61 * C62 *
                         C14318 * C14530) *
                        C14480 +
                    ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 *
                         C14318 * C3377 -
                     (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 *
                         C14318 * C3376 -
                     (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 *
                         C14318 * C3378 +
                     (C208 * C3382 + C3529 + C3529 + C63 * C3527) * C61 * C62 *
                         C14318 * C14530) *
                        C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14318 * C14494 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14318 * C14363) *
                        C1254 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14318 * C14363 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14318 * C14494) *
                        C1255 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14318 * C14494 -
                     ((C148 * C443 + C62 * C637) * C63 +
                      (C148 * C381 + C62 * C493) * C115) *
                         C61 * C14318 * C14363) *
                        C1256 +
                    (((C148 * C1258 + C62 * C1332) * C115 +
                      (C148 * C1296 + C62 * C1439) * C63) *
                         C61 * C14318 * C14363 -
                     ((C148 * C119 + C62 * C244) * C63 +
                      (C148 * C76 + C62 * C152) * C115) *
                         C61 * C14318 * C14494) *
                        C14524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14318 * C3376 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14318 * C3377 +
                     ((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14318 * C3378 -
                     ((C148 * C2774 + C62 * C2876) * C63 +
                      (C148 * C2744 + C62 * C2800) * C115) *
                         C61 * C14318 * C14530) *
                        C14480 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14318 * C3377 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14318 * C3376 -
                     ((C148 * C442 + C62 * C636) * C63 +
                      (C148 * C380 + C62 * C492) * C115) *
                         C61 * C14318 * C3378 +
                     ((C148 * C3382 + C62 * C3456) * C115 +
                      (C148 * C3420 + C62 * C3563) * C63) *
                         C61 * C14318 * C14530) *
                        C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C14494 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C14363) *
              C1254 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C14363 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C14494) *
              C1255 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14318 * C14494 -
           ((C72 * C493 + C61 * C681) * C62 +
            (C72 * C381 + C61 * C387) * C148) *
               C63 * C14318 * C14363) *
              C1256 +
          (((C72 * C1258 + C61 * C1259) * C148 +
            (C72 * C1332 + C61 * C1474) * C62) *
               C63 * C14318 * C14363 -
           ((C72 * C152 + C61 * C271) * C62 + (C72 * C76 + C61 * C81) * C148) *
               C63 * C14318 * C14494) *
              C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C3376 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C3377 +
           ((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14318 * C3378 -
           ((C72 * C2800 + C61 * C2900) * C62 +
            (C72 * C2744 + C61 * C2746) * C148) *
               C63 * C14318 * C14530) *
              C14480 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C3377 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C3376 -
           ((C72 * C492 + C61 * C680) * C62 +
            (C72 * C380 + C61 * C386) * C148) *
               C63 * C14318 * C3378 +
           ((C72 * C3382 + C61 * C3383) * C148 +
            (C72 * C3456 + C61 * C3598) * C62) *
               C63 * C14318 * C14530) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eezy[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14318 * C14494 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14318 * C14363) *
                        C1254 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14318 * C14363 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14318 * C14494) *
                        C1255 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14318 * C14494 -
                     ((C115 * C493 + C63 * C725) * C62 +
                      (C115 * C381 + C63 * C443) * C148) *
                         C61 * C14318 * C14363) *
                        C1256 +
                    (((C115 * C1258 + C63 * C1296) * C148 +
                      (C115 * C1332 + C63 * C1509) * C62) *
                         C61 * C14318 * C14363 -
                     ((C115 * C152 + C63 * C298) * C62 +
                      (C115 * C76 + C63 * C119) * C148) *
                         C61 * C14318 * C14494) *
                        C14524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14318 * C3376 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14318 * C3377 +
                     ((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14318 * C3378 -
                     ((C115 * C2800 + C63 * C2924) * C62 +
                      (C115 * C2744 + C63 * C2774) * C148) *
                         C61 * C14318 * C14530) *
                        C14480 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14318 * C3377 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14318 * C3376 -
                     ((C115 * C492 + C63 * C724) * C62 +
                      (C115 * C380 + C63 * C442) * C148) *
                         C61 * C14318 * C3378 +
                     ((C115 * C3382 + C63 * C3420) * C148 +
                      (C115 * C3456 + C63 * C3633) * C62) *
                         C61 * C14318 * C14530) *
                        C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 *
                         C14318 * C14494 -
                     (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 *
                         C14318 * C14363) *
                        C1254 +
                    ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 *
                         C14318 * C14363 -
                     (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 *
                         C14318 * C14494) *
                        C1255 +
                    ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 *
                         C14318 * C14494 -
                     (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 *
                         C14318 * C14363) *
                        C1256 +
                    ((C322 * C1258 + C1546 + C1546 + C62 * C1544) * C63 * C61 *
                         C14318 * C14363 -
                     (C322 * C76 + C332 + C332 + C62 * C326) * C63 * C61 *
                         C14318 * C14494) *
                        C14524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 *
                         C14318 * C3376 -
                     (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 *
                         C14318 * C3377 +
                     (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 *
                         C14318 * C3378 -
                     (C322 * C2744 + C2951 + C2951 + C62 * C2948) * C63 * C61 *
                         C14318 * C14530) *
                        C14480 +
                    ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 *
                         C14318 * C3377 -
                     (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 *
                         C14318 * C3376 -
                     (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 *
                         C14318 * C3378 +
                     (C322 * C3382 + C3670 + C3670 + C62 * C3668) * C63 * C61 *
                         C14318 * C14530) *
                        C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14495 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
               C14494 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14495) *
               C14363) *
              C374 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14495) *
               C14494 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14495 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14405) *
               C14363) *
              C375 +
          (((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14495 -
            (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C14405) *
               C14494 +
           ((C71 * C1922 + C1932 + C1932 + C61 * C1928) * C62 * C63 * C14405 -
            (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14495 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
              C3376 +
          ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14495) *
              C3377 +
          ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14495 -
           (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C14405) *
              C3378 +
          ((C71 * C4170 + C4174 + C4174 + C61 * C4172) * C62 * C63 * C14405 -
           (C71 * C2744 + C2751 + C2751 + C61 * C2748) * C62 * C63 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C115 * C73 + C63 * C116) * C72 +
             (C115 * C78 + C63 * C121) * C61) *
                C62 * C14495 -
            ((C115 * C824 + C63 * C886) * C61 +
             (C115 * C818 + C63 * C880) * C72) *
                C62 * C14405) *
               C14494 +
           (((C115 * C1920 + C63 * C1982) * C72 +
             (C115 * C1923 + C63 * C1985) * C61) *
                C62 * C14405 -
            ((C115 * C383 + C63 * C445) * C61 +
             (C115 * C377 + C63 * C439) * C72) *
                C62 * C14495) *
               C14363) *
              C374 +
          ((((C115 * C820 + C63 * C882) * C72 +
             (C115 * C826 + C63 * C888) * C61) *
                C62 * C14405 -
            ((C115 * C79 + C63 * C122) * C61 +
             (C115 * C74 + C63 * C117) * C72) *
                C62 * C14495) *
               C14494 +
           (((C115 * C379 + C63 * C441) * C72 +
             (C115 * C385 + C63 * C447) * C61) *
                C62 * C14495 -
            ((C115 * C1924 + C63 * C1986) * C61 +
             (C115 * C1921 + C63 * C1983) * C72) *
                C62 * C14405) *
               C14363) *
              C375 +
          ((((C115 * C75 + C63 * C118) * C72 +
             (C115 * C80 + C63 * C123) * C61) *
                C62 * C14495 -
            ((C115 * C828 + C63 * C890) * C61 +
             (C115 * C822 + C63 * C884) * C72) *
                C62 * C14405) *
               C14494 +
           (((C115 * C1922 + C63 * C1984) * C72 +
             (C115 * C1925 + C63 * C1987) * C61) *
                C62 * C14405 -
            ((C115 * C387 + C63 * C449) * C61 +
             (C115 * C381 + C63 * C443) * C72) *
                C62 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14495 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14405) *
              C3376 +
          (((C115 * C1920 + C63 * C1982) * C72 +
            (C115 * C1923 + C63 * C1985) * C61) *
               C62 * C14405 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14495) *
              C3377 +
          (((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14495 -
           ((C115 * C2994 + C63 * C3044) * C61 +
            (C115 * C2991 + C63 * C3041) * C72) *
               C62 * C14405) *
              C3378 +
          (((C115 * C4170 + C63 * C4208) * C72 +
            (C115 * C4171 + C63 * C4209) * C61) *
               C62 * C14405 -
           ((C115 * C2746 + C63 * C2776) * C61 +
            (C115 * C2744 + C63 * C2774) * C72) *
               C62 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C148 * C73 + C62 * C149) * C72 +
             (C148 * C78 + C62 * C154) * C61) *
                C63 * C14495 -
            ((C148 * C824 + C62 * C936) * C61 +
             (C148 * C818 + C62 * C930) * C72) *
                C63 * C14405) *
               C14494 +
           (((C148 * C1920 + C62 * C2038) * C72 +
             (C148 * C1923 + C62 * C2041) * C61) *
                C63 * C14405 -
            ((C148 * C383 + C62 * C495) * C61 +
             (C148 * C377 + C62 * C489) * C72) *
                C63 * C14495) *
               C14363) *
              C374 +
          ((((C148 * C820 + C62 * C932) * C72 +
             (C148 * C826 + C62 * C938) * C61) *
                C63 * C14405 -
            ((C148 * C79 + C62 * C155) * C61 +
             (C148 * C74 + C62 * C150) * C72) *
                C63 * C14495) *
               C14494 +
           (((C148 * C379 + C62 * C491) * C72 +
             (C148 * C385 + C62 * C497) * C61) *
                C63 * C14495 -
            ((C148 * C1924 + C62 * C2042) * C61 +
             (C148 * C1921 + C62 * C2039) * C72) *
                C63 * C14405) *
               C14363) *
              C375 +
          ((((C148 * C75 + C62 * C151) * C72 +
             (C148 * C80 + C62 * C156) * C61) *
                C63 * C14495 -
            ((C148 * C828 + C62 * C940) * C61 +
             (C148 * C822 + C62 * C934) * C72) *
                C63 * C14405) *
               C14494 +
           (((C148 * C1922 + C62 * C2040) * C72 +
             (C148 * C1925 + C62 * C2043) * C61) *
                C63 * C14405 -
            ((C148 * C387 + C62 * C499) * C61 +
             (C148 * C381 + C62 * C493) * C72) *
                C63 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14495 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14405) *
              C3376 +
          (((C148 * C1920 + C62 * C2038) * C72 +
            (C148 * C1923 + C62 * C2041) * C61) *
               C63 * C14405 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14495) *
              C3377 +
          (((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14495 -
           ((C148 * C2994 + C62 * C3088) * C61 +
            (C148 * C2991 + C62 * C3085) * C72) *
               C63 * C14405) *
              C3378 +
          (((C148 * C4170 + C62 * C4244) * C72 +
            (C148 * C4171 + C62 * C4245) * C61) *
               C63 * C14405 -
           ((C148 * C2746 + C62 * C2802) * C61 +
            (C148 * C2744 + C62 * C2800) * C72) *
               C63 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C14495 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14405) *
               C14494 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14405 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C14495) *
               C14363) *
              C374 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14405 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C14495) *
               C14494 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C14495 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14405) *
               C14363) *
              C375 +
          ((((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
                C62 * C14495 -
            ((C72 * C884 + C61 * C984) * C63 +
             (C72 * C822 + C61 * C828) * C115) *
                C62 * C14405) *
               C14494 +
           (((C72 * C1922 + C61 * C1925) * C115 +
             (C72 * C1984 + C61 * C2096) * C63) *
                C62 * C14405 -
            ((C72 * C443 + C61 * C543) * C63 +
             (C72 * C381 + C61 * C387) * C115) *
                C62 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14495 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14405) *
              C3376 +
          (((C72 * C1920 + C61 * C1923) * C115 +
            (C72 * C1982 + C61 * C2094) * C63) *
               C62 * C14405 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14495) *
              C3377 +
          (((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14495 -
           ((C72 * C3041 + C61 * C3129) * C63 +
            (C72 * C2991 + C61 * C2994) * C115) *
               C62 * C14405) *
              C3378 +
          (((C72 * C4170 + C61 * C4171) * C115 +
            (C72 * C4208 + C61 * C4280) * C63) *
               C62 * C14405 -
           ((C72 * C2774 + C61 * C2826) * C63 +
            (C72 * C2744 + C61 * C2746) * C115) *
               C62 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14495 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
               C14494 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14495) *
               C14363) *
              C374 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14495) *
               C14494 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14495 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14405) *
               C14363) *
              C375 +
          (((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14495 -
            (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C14405) *
               C14494 +
           ((C208 * C1922 + C2153 + C2153 + C63 * C2149) * C61 * C62 * C14405 -
            (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14495 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
              C3376 +
          ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14495) *
              C3377 +
          ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14495 -
           (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C14405) *
              C3378 +
          ((C208 * C4170 + C4317 + C4317 + C63 * C4315) * C61 * C62 * C14405 -
           (C208 * C2744 + C2853 + C2853 + C63 * C2850) * C61 * C62 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyz[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C148 * C73 + C62 * C149) * C115 +
                       (C148 * C116 + C62 * C241) * C63) *
                          C61 * C14495 -
                      ((C148 * C880 + C62 * C1074) * C63 +
                       (C148 * C818 + C62 * C930) * C115) *
                          C61 * C14405) *
                         C14494 +
                     (((C148 * C1920 + C62 * C2038) * C115 +
                       (C148 * C1982 + C62 * C2203) * C63) *
                          C61 * C14405 -
                      ((C148 * C439 + C62 * C633) * C63 +
                       (C148 * C377 + C62 * C489) * C115) *
                          C61 * C14495) *
                         C14363) *
                        C374 +
                    ((((C148 * C820 + C62 * C932) * C115 +
                       (C148 * C882 + C62 * C1076) * C63) *
                          C61 * C14405 -
                      ((C148 * C117 + C62 * C242) * C63 +
                       (C148 * C74 + C62 * C150) * C115) *
                          C61 * C14495) *
                         C14494 +
                     (((C148 * C379 + C62 * C491) * C115 +
                       (C148 * C441 + C62 * C635) * C63) *
                          C61 * C14495 -
                      ((C148 * C1983 + C62 * C2204) * C63 +
                       (C148 * C1921 + C62 * C2039) * C115) *
                          C61 * C14405) *
                         C14363) *
                        C375 +
                    ((((C148 * C75 + C62 * C151) * C115 +
                       (C148 * C118 + C62 * C243) * C63) *
                          C61 * C14495 -
                      ((C148 * C884 + C62 * C1078) * C63 +
                       (C148 * C822 + C62 * C934) * C115) *
                          C61 * C14405) *
                         C14494 +
                     (((C148 * C1922 + C62 * C2040) * C115 +
                       (C148 * C1984 + C62 * C2205) * C63) *
                          C61 * C14405 -
                      ((C148 * C443 + C62 * C637) * C63 +
                       (C148 * C381 + C62 * C493) * C115) *
                          C61 * C14495) *
                         C14363) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14495 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14405) *
                        C3376 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C14405 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14495) *
                        C3377 +
                    (((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14495 -
                     ((C148 * C3041 + C62 * C3214) * C63 +
                      (C148 * C2991 + C62 * C3085) * C115) *
                         C61 * C14405) *
                        C3378 +
                    (((C148 * C4170 + C62 * C4244) * C115 +
                      (C148 * C4208 + C62 * C4351) * C63) *
                         C61 * C14405 -
                     ((C148 * C2774 + C62 * C2876) * C63 +
                      (C148 * C2744 + C62 * C2800) * C115) *
                         C61 * C14495) *
                        C14530) *
                   C14272) /
                      (p * q * std::sqrt(p + q));
    d2eezx[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C14495 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14405) *
               C14494 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14405 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C14495) *
               C14363) *
              C374 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14405 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C14495) *
               C14494 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C14495 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14405) *
               C14363) *
              C375 +
          ((((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
                C63 * C14495 -
            ((C72 * C934 + C61 * C1122) * C62 +
             (C72 * C822 + C61 * C828) * C148) *
                C63 * C14405) *
               C14494 +
           (((C72 * C1922 + C61 * C1925) * C148 +
             (C72 * C2040 + C61 * C2258) * C62) *
                C63 * C14405 -
            ((C72 * C493 + C61 * C681) * C62 +
             (C72 * C381 + C61 * C387) * C148) *
                C63 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14495 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14405) *
              C3376 +
          (((C72 * C1920 + C61 * C1923) * C148 +
            (C72 * C2038 + C61 * C2256) * C62) *
               C63 * C14405 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14495) *
              C3377 +
          (((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14495 -
           ((C72 * C3085 + C61 * C3255) * C62 +
            (C72 * C2991 + C61 * C2994) * C148) *
               C63 * C14405) *
              C3378 +
          (((C72 * C4170 + C61 * C4171) * C148 +
            (C72 * C4244 + C61 * C4386) * C62) *
               C63 * C14405 -
           ((C72 * C2800 + C61 * C2900) * C62 +
            (C72 * C2744 + C61 * C2746) * C148) *
               C63 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eezy[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C115 * C73 + C63 * C116) * C148 +
                       (C115 * C149 + C63 * C295) * C62) *
                          C61 * C14495 -
                      ((C115 * C930 + C63 * C1162) * C62 +
                       (C115 * C818 + C63 * C880) * C148) *
                          C61 * C14405) *
                         C14494 +
                     (((C115 * C1920 + C63 * C1982) * C148 +
                       (C115 * C2038 + C63 * C2309) * C62) *
                          C61 * C14405 -
                      ((C115 * C489 + C63 * C721) * C62 +
                       (C115 * C377 + C63 * C439) * C148) *
                          C61 * C14495) *
                         C14363) *
                        C374 +
                    ((((C115 * C820 + C63 * C882) * C148 +
                       (C115 * C932 + C63 * C1164) * C62) *
                          C61 * C14405 -
                      ((C115 * C150 + C63 * C296) * C62 +
                       (C115 * C74 + C63 * C117) * C148) *
                          C61 * C14495) *
                         C14494 +
                     (((C115 * C379 + C63 * C441) * C148 +
                       (C115 * C491 + C63 * C723) * C62) *
                          C61 * C14495 -
                      ((C115 * C2039 + C63 * C2310) * C62 +
                       (C115 * C1921 + C63 * C1983) * C148) *
                          C61 * C14405) *
                         C14363) *
                        C375 +
                    ((((C115 * C75 + C63 * C118) * C148 +
                       (C115 * C151 + C63 * C297) * C62) *
                          C61 * C14495 -
                      ((C115 * C934 + C63 * C1166) * C62 +
                       (C115 * C822 + C63 * C884) * C148) *
                          C61 * C14405) *
                         C14494 +
                     (((C115 * C1922 + C63 * C1984) * C148 +
                       (C115 * C2040 + C63 * C2311) * C62) *
                          C61 * C14405 -
                      ((C115 * C493 + C63 * C725) * C62 +
                       (C115 * C381 + C63 * C443) * C148) *
                          C61 * C14495) *
                         C14363) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14495 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14405) *
                        C3376 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C14405 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14495) *
                        C3377 +
                    (((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14495 -
                     ((C115 * C3085 + C63 * C3296) * C62 +
                      (C115 * C2991 + C63 * C3041) * C148) *
                         C61 * C14405) *
                        C3378 +
                    (((C115 * C4170 + C63 * C4208) * C148 +
                      (C115 * C4244 + C63 * C4421) * C62) *
                         C61 * C14405 -
                     ((C115 * C2800 + C63 * C2924) * C62 +
                      (C115 * C2744 + C63 * C2774) * C148) *
                         C61 * C14495) *
                        C14530) *
                   C14272) /
                      (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14495 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
               C14494 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14495) *
               C14363) *
              C374 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14495) *
               C14494 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14495 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14405) *
               C14363) *
              C375 +
          (((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14495 -
            (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C14405) *
               C14494 +
           ((C322 * C1922 + C2368 + C2368 + C62 * C2364) * C63 * C61 * C14405 -
            (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C14495) *
               C14363) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14495 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
              C3376 +
          ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14495) *
              C3377 +
          ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14495 -
           (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C14405) *
              C3378 +
          ((C322 * C4170 + C4458 + C4458 + C62 * C4456) * C63 * C61 * C14405 -
           (C322 * C2744 + C2951 + C2951 + C62 * C2948) * C63 * C61 * C14495) *
              C14530) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C14555 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C14543 +
           (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 *
               C14520) *
              C374 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C14543 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C14555 -
           (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14318 *
               C14520) *
              C375 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C14555 -
           (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14318 *
               C14543 +
           (C71 * C382 + C401 + C401 + C61 * C394) * C62 * C63 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C14300 *
              C66 -
          (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C14300 *
              C67 +
          (C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C14300 *
              C68 -
          (C71 * C76 + C92 + C92 + C61 * C86) * C62 * C63 * C14318 * C14300 *
              C69 +
          (C71 * C77 + C93 + C93 + C61 * C87) * C62 * C63 * C14318 * C14300 *
              C70)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14556 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14545 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C14523) *
              C14300 * C374 +
          ((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14545 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14556 -
           (C71 * C821 + C840 + C840 + C61 * C833) * C62 * C63 * C14523) *
              C14300 * C375 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14556 -
           (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C14545 +
           (C71 * C823 + C842 + C842 + C61 * C835) * C62 * C63 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C2406 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C2407 +
           (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 *
               C14520) *
              C14552 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C2407 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C2406 -
           (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14318 *
               C14520) *
              C14539 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C2406 -
           (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14318 *
               C2407 +
           (C71 * C382 + C401 + C401 + C61 * C394) * C62 * C63 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C2738 -
          (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 * C2739 +
          (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 * C2740 -
          (C71 * C2744 + C2751 + C2751 + C61 * C2748) * C62 * C63 * C14318 *
              C2741 +
          (C71 * C2745 + C2752 + C2752 + C61 * C2749) * C62 * C63 * C14318 *
              C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14556 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14545 +
           (C71 * C819 + C838 + C838 + C61 * C831) * C62 * C63 * C14523) *
              C2406 +
          ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14545 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14556 -
           (C71 * C2990 + C3000 + C3000 + C61 * C2996) * C62 * C63 * C14523) *
              C2407 +
          ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14556 -
           (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C14545 +
           (C71 * C2992 + C3002 + C3002 + C61 * C2998) * C62 * C63 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C14555 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C14543 +
           ((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14318 * C14520) *
              C374 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C14543 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C14555 -
           ((C115 * C386 + C63 * C448) * C61 +
            (C115 * C380 + C63 * C442) * C72) *
               C62 * C14318 * C14520) *
              C375 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14318 * C14555 -
           ((C115 * C387 + C63 * C449) * C61 +
            (C115 * C381 + C63 * C443) * C72) *
               C62 * C14318 * C14543 +
           ((C115 * C382 + C63 * C444) * C72 +
            (C115 * C388 + C63 * C450) * C61) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
              C62 * C14318 * C14300 * C66 -
          ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
              C62 * C14318 * C14300 * C67 +
          ((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
              C62 * C14318 * C14300 * C68 -
          ((C115 * C81 + C63 * C124) * C61 + (C115 * C76 + C63 * C119) * C72) *
              C62 * C14318 * C14300 * C69 +
          ((C115 * C77 + C63 * C120) * C72 + (C115 * C82 + C63 * C125) * C61) *
              C62 * C14318 * C14300 * C70)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14556 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14545 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C14523) *
              C14300 * C374 +
          (((C115 * C820 + C63 * C882) * C72 +
            (C115 * C826 + C63 * C888) * C61) *
               C62 * C14545 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14556 -
           ((C115 * C827 + C63 * C889) * C61 +
            (C115 * C821 + C63 * C883) * C72) *
               C62 * C14523) *
              C14300 * C375 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14556 -
           ((C115 * C828 + C63 * C890) * C61 +
            (C115 * C822 + C63 * C884) * C72) *
               C62 * C14545 +
           ((C115 * C823 + C63 * C885) * C72 +
            (C115 * C829 + C63 * C891) * C61) *
               C62 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C2406 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C2407 +
           ((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14318 * C14520) *
              C14552 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C2407 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C2406 -
           ((C115 * C386 + C63 * C448) * C61 +
            (C115 * C380 + C63 * C442) * C72) *
               C62 * C14318 * C14520) *
              C14539 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14318 * C2406 -
           ((C115 * C387 + C63 * C449) * C61 +
            (C115 * C381 + C63 * C443) * C72) *
               C62 * C14318 * C2407 +
           ((C115 * C382 + C63 * C444) * C72 +
            (C115 * C388 + C63 * C450) * C61) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
              C62 * C14318 * C2738 -
          ((C115 * C383 + C63 * C445) * C61 +
           (C115 * C377 + C63 * C439) * C72) *
              C62 * C14318 * C2739 +
          ((C115 * C378 + C63 * C440) * C72 +
           (C115 * C384 + C63 * C446) * C61) *
              C62 * C14318 * C2740 -
          ((C115 * C2746 + C63 * C2776) * C61 +
           (C115 * C2744 + C63 * C2774) * C72) *
              C62 * C14318 * C2741 +
          ((C115 * C2745 + C63 * C2775) * C72 +
           (C115 * C2747 + C63 * C2777) * C61) *
              C62 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14556 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14545 +
           ((C115 * C819 + C63 * C881) * C72 +
            (C115 * C825 + C63 * C887) * C61) *
               C62 * C14523) *
              C2406 +
          (((C115 * C1920 + C63 * C1982) * C72 +
            (C115 * C1923 + C63 * C1985) * C61) *
               C62 * C14545 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14556 -
           ((C115 * C2993 + C63 * C3043) * C61 +
            (C115 * C2990 + C63 * C3040) * C72) *
               C62 * C14523) *
              C2407 +
          (((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14556 -
           ((C115 * C2994 + C63 * C3044) * C61 +
            (C115 * C2991 + C63 * C3041) * C72) *
               C62 * C14545 +
           ((C115 * C2992 + C63 * C3042) * C72 +
            (C115 * C2995 + C63 * C3045) * C61) *
               C62 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C14555 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C14543 +
           ((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14318 * C14520) *
              C374 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C14543 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C14555 -
           ((C148 * C386 + C62 * C498) * C61 +
            (C148 * C380 + C62 * C492) * C72) *
               C63 * C14318 * C14520) *
              C375 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14318 * C14555 -
           ((C148 * C387 + C62 * C499) * C61 +
            (C148 * C381 + C62 * C493) * C72) *
               C63 * C14318 * C14543 +
           ((C148 * C382 + C62 * C494) * C72 +
            (C148 * C388 + C62 * C500) * C61) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
              C63 * C14318 * C14300 * C66 -
          ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
              C63 * C14318 * C14300 * C67 +
          ((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
              C63 * C14318 * C14300 * C68 -
          ((C148 * C81 + C62 * C157) * C61 + (C148 * C76 + C62 * C152) * C72) *
              C63 * C14318 * C14300 * C69 +
          ((C148 * C77 + C62 * C153) * C72 + (C148 * C82 + C62 * C158) * C61) *
              C63 * C14318 * C14300 * C70)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14556 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14545 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C14523) *
              C14300 * C374 +
          (((C148 * C820 + C62 * C932) * C72 +
            (C148 * C826 + C62 * C938) * C61) *
               C63 * C14545 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14556 -
           ((C148 * C827 + C62 * C939) * C61 +
            (C148 * C821 + C62 * C933) * C72) *
               C63 * C14523) *
              C14300 * C375 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14556 -
           ((C148 * C828 + C62 * C940) * C61 +
            (C148 * C822 + C62 * C934) * C72) *
               C63 * C14545 +
           ((C148 * C823 + C62 * C935) * C72 +
            (C148 * C829 + C62 * C941) * C61) *
               C63 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C2406 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C2407 +
           ((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14318 * C14520) *
              C14552 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C2407 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C2406 -
           ((C148 * C386 + C62 * C498) * C61 +
            (C148 * C380 + C62 * C492) * C72) *
               C63 * C14318 * C14520) *
              C14539 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14318 * C2406 -
           ((C148 * C387 + C62 * C499) * C61 +
            (C148 * C381 + C62 * C493) * C72) *
               C63 * C14318 * C2407 +
           ((C148 * C382 + C62 * C494) * C72 +
            (C148 * C388 + C62 * C500) * C61) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
              C63 * C14318 * C2738 -
          ((C148 * C383 + C62 * C495) * C61 +
           (C148 * C377 + C62 * C489) * C72) *
              C63 * C14318 * C2739 +
          ((C148 * C378 + C62 * C490) * C72 +
           (C148 * C384 + C62 * C496) * C61) *
              C63 * C14318 * C2740 -
          ((C148 * C2746 + C62 * C2802) * C61 +
           (C148 * C2744 + C62 * C2800) * C72) *
              C63 * C14318 * C2741 +
          ((C148 * C2745 + C62 * C2801) * C72 +
           (C148 * C2747 + C62 * C2803) * C61) *
              C63 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14556 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14545 +
           ((C148 * C819 + C62 * C931) * C72 +
            (C148 * C825 + C62 * C937) * C61) *
               C63 * C14523) *
              C2406 +
          (((C148 * C1920 + C62 * C2038) * C72 +
            (C148 * C1923 + C62 * C2041) * C61) *
               C63 * C14545 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14556 -
           ((C148 * C2993 + C62 * C3087) * C61 +
            (C148 * C2990 + C62 * C3084) * C72) *
               C63 * C14523) *
              C2407 +
          (((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14556 -
           ((C148 * C2994 + C62 * C3088) * C61 +
            (C148 * C2991 + C62 * C3085) * C72) *
               C63 * C14545 +
           ((C148 * C2992 + C62 * C3086) * C72 +
            (C148 * C2995 + C62 * C3089) * C61) *
               C63 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C14555 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C14543 +
           ((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14318 * C14520) *
              C374 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C14543 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C14555 -
           ((C72 * C442 + C61 * C542) * C63 +
            (C72 * C380 + C61 * C386) * C115) *
               C62 * C14318 * C14520) *
              C375 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14318 * C14555 -
           ((C72 * C443 + C61 * C543) * C63 +
            (C72 * C381 + C61 * C387) * C115) *
               C62 * C14318 * C14543 +
           ((C72 * C382 + C61 * C388) * C115 +
            (C72 * C444 + C61 * C544) * C63) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
              C62 * C14318 * C14300 * C66 -
          ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
              C62 * C14318 * C14300 * C67 +
          ((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
              C62 * C14318 * C14300 * C68 -
          ((C72 * C119 + C61 * C184) * C63 + (C72 * C76 + C61 * C81) * C115) *
              C62 * C14318 * C14300 * C69 +
          ((C72 * C77 + C61 * C82) * C115 + (C72 * C120 + C61 * C185) * C63) *
              C62 * C14318 * C14300 * C70)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14556 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14545 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C14523) *
              C14300 * C374 +
          (((C72 * C820 + C61 * C826) * C115 +
            (C72 * C882 + C61 * C982) * C63) *
               C62 * C14545 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14556 -
           ((C72 * C883 + C61 * C983) * C63 +
            (C72 * C821 + C61 * C827) * C115) *
               C62 * C14523) *
              C14300 * C375 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14556 -
           ((C72 * C884 + C61 * C984) * C63 +
            (C72 * C822 + C61 * C828) * C115) *
               C62 * C14545 +
           ((C72 * C823 + C61 * C829) * C115 +
            (C72 * C885 + C61 * C985) * C63) *
               C62 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C2406 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C2407 +
           ((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14318 * C14520) *
              C14552 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C2407 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C2406 -
           ((C72 * C442 + C61 * C542) * C63 +
            (C72 * C380 + C61 * C386) * C115) *
               C62 * C14318 * C14520) *
              C14539 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14318 * C2406 -
           ((C72 * C443 + C61 * C543) * C63 +
            (C72 * C381 + C61 * C387) * C115) *
               C62 * C14318 * C2407 +
           ((C72 * C382 + C61 * C388) * C115 +
            (C72 * C444 + C61 * C544) * C63) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
              C62 * C14318 * C2738 -
          ((C72 * C439 + C61 * C539) * C63 + (C72 * C377 + C61 * C383) * C115) *
              C62 * C14318 * C2739 +
          ((C72 * C378 + C61 * C384) * C115 + (C72 * C440 + C61 * C540) * C63) *
              C62 * C14318 * C2740 -
          ((C72 * C2774 + C61 * C2826) * C63 +
           (C72 * C2744 + C61 * C2746) * C115) *
              C62 * C14318 * C2741 +
          ((C72 * C2745 + C61 * C2747) * C115 +
           (C72 * C2775 + C61 * C2827) * C63) *
              C62 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14556 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14545 +
           ((C72 * C819 + C61 * C825) * C115 +
            (C72 * C881 + C61 * C981) * C63) *
               C62 * C14523) *
              C2406 +
          (((C72 * C1920 + C61 * C1923) * C115 +
            (C72 * C1982 + C61 * C2094) * C63) *
               C62 * C14545 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14556 -
           ((C72 * C3040 + C61 * C3128) * C63 +
            (C72 * C2990 + C61 * C2993) * C115) *
               C62 * C14523) *
              C2407 +
          (((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14556 -
           ((C72 * C3041 + C61 * C3129) * C63 +
            (C72 * C2991 + C61 * C2994) * C115) *
               C62 * C14545 +
           ((C72 * C2992 + C61 * C2995) * C115 +
            (C72 * C3042 + C61 * C3130) * C63) *
               C62 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
               C14555 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
               C14543 +
           (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
               C14520) *
              C374 +
          ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14318 *
               C14543 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
               C14555 -
           (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C14318 *
               C14520) *
              C375 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
               C14555 -
           (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C14318 *
               C14543 +
           (C208 * C382 + C595 + C595 + C63 * C588) * C61 * C62 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
              C14300 * C66 -
          (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
              C14300 * C67 +
          (C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
              C14300 * C68 -
          (C208 * C76 + C218 + C218 + C63 * C212) * C61 * C62 * C14318 *
              C14300 * C69 +
          (C208 * C77 + C219 + C219 + C63 * C213) * C61 * C62 * C14318 *
              C14300 * C70)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14556 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14545 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C14523) *
              C14300 * C374 +
          ((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14545 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14556 -
           (C208 * C821 + C1034 + C1034 + C63 * C1027) * C61 * C62 * C14523) *
              C14300 * C375 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14556 -
           (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C14545 +
           (C208 * C823 + C1036 + C1036 + C63 * C1029) * C61 * C62 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
               C2406 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
               C2407 +
           (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
               C14520) *
              C14552 +
          ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14318 *
               C2407 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
               C2406 -
           (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C14318 *
               C14520) *
              C14539 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
               C2406 -
           (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C14318 *
               C2407 +
           (C208 * C382 + C595 + C595 + C63 * C588) * C61 * C62 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 * C2738 -
          (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
              C2739 +
          (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
              C2740 -
          (C208 * C2744 + C2853 + C2853 + C63 * C2850) * C61 * C62 * C14318 *
              C2741 +
          (C208 * C2745 + C2854 + C2854 + C63 * C2851) * C61 * C62 * C14318 *
              C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14556 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14545 +
           (C208 * C819 + C1032 + C1032 + C63 * C1025) * C61 * C62 * C14523) *
              C2406 +
          ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14545 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14556 -
           (C208 * C2990 + C3173 + C3173 + C63 * C3169) * C61 * C62 * C14523) *
              C2407 +
          ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14556 -
           (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C14545 +
           (C208 * C2992 + C3175 + C3175 + C63 * C3171) * C61 * C62 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14318 * C14555 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14318 * C14543 +
                     ((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14318 * C14520) *
                        C374 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14318 * C14543 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14318 * C14555 -
                     ((C148 * C442 + C62 * C636) * C63 +
                      (C148 * C380 + C62 * C492) * C115) *
                         C61 * C14318 * C14520) *
                        C375 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14318 * C14555 -
                     ((C148 * C443 + C62 * C637) * C63 +
                      (C148 * C381 + C62 * C493) * C115) *
                         C61 * C14318 * C14543 +
                     ((C148 * C382 + C62 * C494) * C115 +
                      (C148 * C444 + C62 * C638) * C63) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14318 * C14300 * C66 -
                    ((C148 * C117 + C62 * C242) * C63 +
                     (C148 * C74 + C62 * C150) * C115) *
                        C61 * C14318 * C14300 * C67 +
                    ((C148 * C75 + C62 * C151) * C115 +
                     (C148 * C118 + C62 * C243) * C63) *
                        C61 * C14318 * C14300 * C68 -
                    ((C148 * C119 + C62 * C244) * C63 +
                     (C148 * C76 + C62 * C152) * C115) *
                        C61 * C14318 * C14300 * C69 +
                    ((C148 * C77 + C62 * C153) * C115 +
                     (C148 * C120 + C62 * C245) * C63) *
                        C61 * C14318 * C14300 * C70)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14556 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14545 +
                     ((C148 * C819 + C62 * C931) * C115 +
                      (C148 * C881 + C62 * C1075) * C63) *
                         C61 * C14523) *
                        C14300 * C374 +
                    (((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14545 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14556 -
                     ((C148 * C883 + C62 * C1077) * C63 +
                      (C148 * C821 + C62 * C933) * C115) *
                         C61 * C14523) *
                        C14300 * C375 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14556 -
                     ((C148 * C884 + C62 * C1078) * C63 +
                      (C148 * C822 + C62 * C934) * C115) *
                         C61 * C14545 +
                     ((C148 * C823 + C62 * C935) * C115 +
                      (C148 * C885 + C62 * C1079) * C63) *
                         C61 * C14523) *
                        C14300 * C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14318 * C2406 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14318 * C2407 +
                     ((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14318 * C14520) *
                        C14552 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14318 * C2407 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14318 * C2406 -
                     ((C148 * C442 + C62 * C636) * C63 +
                      (C148 * C380 + C62 * C492) * C115) *
                         C61 * C14318 * C14520) *
                        C14539 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14318 * C2406 -
                     ((C148 * C443 + C62 * C637) * C63 +
                      (C148 * C381 + C62 * C493) * C115) *
                         C61 * C14318 * C2407 +
                     ((C148 * C382 + C62 * C494) * C115 +
                      (C148 * C444 + C62 * C638) * C63) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14318 * C2738 -
                    ((C148 * C439 + C62 * C633) * C63 +
                     (C148 * C377 + C62 * C489) * C115) *
                        C61 * C14318 * C2739 +
                    ((C148 * C378 + C62 * C490) * C115 +
                     (C148 * C440 + C62 * C634) * C63) *
                        C61 * C14318 * C2740 -
                    ((C148 * C2774 + C62 * C2876) * C63 +
                     (C148 * C2744 + C62 * C2800) * C115) *
                        C61 * C14318 * C2741 +
                    ((C148 * C2745 + C62 * C2801) * C115 +
                     (C148 * C2775 + C62 * C2877) * C63) *
                        C61 * C14318 * C2742) *
                   C14272) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14556 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14545 +
                     ((C148 * C819 + C62 * C931) * C115 +
                      (C148 * C881 + C62 * C1075) * C63) *
                         C61 * C14523) *
                        C2406 +
                    (((C148 * C1920 + C62 * C2038) * C115 +
                      (C148 * C1982 + C62 * C2203) * C63) *
                         C61 * C14545 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14556 -
                     ((C148 * C3040 + C62 * C3213) * C63 +
                      (C148 * C2990 + C62 * C3084) * C115) *
                         C61 * C14523) *
                        C2407 +
                    (((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14556 -
                     ((C148 * C3041 + C62 * C3214) * C63 +
                      (C148 * C2991 + C62 * C3085) * C115) *
                         C61 * C14545 +
                     ((C148 * C2992 + C62 * C3086) * C115 +
                      (C148 * C3042 + C62 * C3215) * C63) *
                         C61 * C14523) *
                        C14520) *
                   C14272) /
                      (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C14555 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C14543 +
           ((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14318 * C14520) *
              C374 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C14543 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C14555 -
           ((C72 * C492 + C61 * C680) * C62 +
            (C72 * C380 + C61 * C386) * C148) *
               C63 * C14318 * C14520) *
              C375 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14318 * C14555 -
           ((C72 * C493 + C61 * C681) * C62 +
            (C72 * C381 + C61 * C387) * C148) *
               C63 * C14318 * C14543 +
           ((C72 * C382 + C61 * C388) * C148 +
            (C72 * C494 + C61 * C682) * C62) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
              C63 * C14318 * C14300 * C66 -
          ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
              C63 * C14318 * C14300 * C67 +
          ((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
              C63 * C14318 * C14300 * C68 -
          ((C72 * C152 + C61 * C271) * C62 + (C72 * C76 + C61 * C81) * C148) *
              C63 * C14318 * C14300 * C69 +
          ((C72 * C77 + C61 * C82) * C148 + (C72 * C153 + C61 * C272) * C62) *
              C63 * C14318 * C14300 * C70)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14556 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14545 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C14523) *
              C14300 * C374 +
          (((C72 * C820 + C61 * C826) * C148 +
            (C72 * C932 + C61 * C1120) * C62) *
               C63 * C14545 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14556 -
           ((C72 * C933 + C61 * C1121) * C62 +
            (C72 * C821 + C61 * C827) * C148) *
               C63 * C14523) *
              C14300 * C375 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14556 -
           ((C72 * C934 + C61 * C1122) * C62 +
            (C72 * C822 + C61 * C828) * C148) *
               C63 * C14545 +
           ((C72 * C823 + C61 * C829) * C148 +
            (C72 * C935 + C61 * C1123) * C62) *
               C63 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C2406 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C2407 +
           ((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14318 * C14520) *
              C14552 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C2407 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C2406 -
           ((C72 * C492 + C61 * C680) * C62 +
            (C72 * C380 + C61 * C386) * C148) *
               C63 * C14318 * C14520) *
              C14539 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14318 * C2406 -
           ((C72 * C493 + C61 * C681) * C62 +
            (C72 * C381 + C61 * C387) * C148) *
               C63 * C14318 * C2407 +
           ((C72 * C382 + C61 * C388) * C148 +
            (C72 * C494 + C61 * C682) * C62) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
              C63 * C14318 * C2738 -
          ((C72 * C489 + C61 * C677) * C62 + (C72 * C377 + C61 * C383) * C148) *
              C63 * C14318 * C2739 +
          ((C72 * C378 + C61 * C384) * C148 + (C72 * C490 + C61 * C678) * C62) *
              C63 * C14318 * C2740 -
          ((C72 * C2800 + C61 * C2900) * C62 +
           (C72 * C2744 + C61 * C2746) * C148) *
              C63 * C14318 * C2741 +
          ((C72 * C2745 + C61 * C2747) * C148 +
           (C72 * C2801 + C61 * C2901) * C62) *
              C63 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14556 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14545 +
           ((C72 * C819 + C61 * C825) * C148 +
            (C72 * C931 + C61 * C1119) * C62) *
               C63 * C14523) *
              C2406 +
          (((C72 * C1920 + C61 * C1923) * C148 +
            (C72 * C2038 + C61 * C2256) * C62) *
               C63 * C14545 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14556 -
           ((C72 * C3084 + C61 * C3254) * C62 +
            (C72 * C2990 + C61 * C2993) * C148) *
               C63 * C14523) *
              C2407 +
          (((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14556 -
           ((C72 * C3085 + C61 * C3255) * C62 +
            (C72 * C2991 + C61 * C2994) * C148) *
               C63 * C14545 +
           ((C72 * C2992 + C61 * C2995) * C148 +
            (C72 * C3086 + C61 * C3256) * C62) *
               C63 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14318 * C14555 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14318 * C14543 +
                     ((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14318 * C14520) *
                        C374 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14318 * C14543 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14318 * C14555 -
                     ((C115 * C492 + C63 * C724) * C62 +
                      (C115 * C380 + C63 * C442) * C148) *
                         C61 * C14318 * C14520) *
                        C375 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14318 * C14555 -
                     ((C115 * C493 + C63 * C725) * C62 +
                      (C115 * C381 + C63 * C443) * C148) *
                         C61 * C14318 * C14543 +
                     ((C115 * C382 + C63 * C444) * C148 +
                      (C115 * C494 + C63 * C726) * C62) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14318 * C14300 * C66 -
                    ((C115 * C150 + C63 * C296) * C62 +
                     (C115 * C74 + C63 * C117) * C148) *
                        C61 * C14318 * C14300 * C67 +
                    ((C115 * C75 + C63 * C118) * C148 +
                     (C115 * C151 + C63 * C297) * C62) *
                        C61 * C14318 * C14300 * C68 -
                    ((C115 * C152 + C63 * C298) * C62 +
                     (C115 * C76 + C63 * C119) * C148) *
                        C61 * C14318 * C14300 * C69 +
                    ((C115 * C77 + C63 * C120) * C148 +
                     (C115 * C153 + C63 * C299) * C62) *
                        C61 * C14318 * C14300 * C70)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14556 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14545 +
                     ((C115 * C819 + C63 * C881) * C148 +
                      (C115 * C931 + C63 * C1163) * C62) *
                         C61 * C14523) *
                        C14300 * C374 +
                    (((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14545 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14556 -
                     ((C115 * C933 + C63 * C1165) * C62 +
                      (C115 * C821 + C63 * C883) * C148) *
                         C61 * C14523) *
                        C14300 * C375 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14556 -
                     ((C115 * C934 + C63 * C1166) * C62 +
                      (C115 * C822 + C63 * C884) * C148) *
                         C61 * C14545 +
                     ((C115 * C823 + C63 * C885) * C148 +
                      (C115 * C935 + C63 * C1167) * C62) *
                         C61 * C14523) *
                        C14300 * C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14318 * C2406 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14318 * C2407 +
                     ((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14318 * C14520) *
                        C14552 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14318 * C2407 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14318 * C2406 -
                     ((C115 * C492 + C63 * C724) * C62 +
                      (C115 * C380 + C63 * C442) * C148) *
                         C61 * C14318 * C14520) *
                        C14539 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14318 * C2406 -
                     ((C115 * C493 + C63 * C725) * C62 +
                      (C115 * C381 + C63 * C443) * C148) *
                         C61 * C14318 * C2407 +
                     ((C115 * C382 + C63 * C444) * C148 +
                      (C115 * C494 + C63 * C726) * C62) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14318 * C2738 -
                    ((C115 * C489 + C63 * C721) * C62 +
                     (C115 * C377 + C63 * C439) * C148) *
                        C61 * C14318 * C2739 +
                    ((C115 * C378 + C63 * C440) * C148 +
                     (C115 * C490 + C63 * C722) * C62) *
                        C61 * C14318 * C2740 -
                    ((C115 * C2800 + C63 * C2924) * C62 +
                     (C115 * C2744 + C63 * C2774) * C148) *
                        C61 * C14318 * C2741 +
                    ((C115 * C2745 + C63 * C2775) * C148 +
                     (C115 * C2801 + C63 * C2925) * C62) *
                        C61 * C14318 * C2742) *
                   C14272) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14556 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14545 +
                     ((C115 * C819 + C63 * C881) * C148 +
                      (C115 * C931 + C63 * C1163) * C62) *
                         C61 * C14523) *
                        C2406 +
                    (((C115 * C1920 + C63 * C1982) * C148 +
                      (C115 * C2038 + C63 * C2309) * C62) *
                         C61 * C14545 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14556 -
                     ((C115 * C3084 + C63 * C3295) * C62 +
                      (C115 * C2990 + C63 * C3040) * C148) *
                         C61 * C14523) *
                        C2407 +
                    (((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14556 -
                     ((C115 * C3085 + C63 * C3296) * C62 +
                      (C115 * C2991 + C63 * C3041) * C148) *
                         C61 * C14545 +
                     ((C115 * C2992 + C63 * C3042) * C148 +
                      (C115 * C3086 + C63 * C3297) * C62) *
                         C61 * C14523) *
                        C14520) *
                   C14272) /
                      (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
               C14555 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
               C14543 +
           (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
               C14520) *
              C374 +
          ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14318 *
               C14543 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
               C14555 -
           (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C14318 *
               C14520) *
              C375 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
               C14555 -
           (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C14318 *
               C14543 +
           (C322 * C382 + C777 + C777 + C62 * C770) * C63 * C61 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
              C14300 * C66 -
          (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
              C14300 * C67 +
          (C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
              C14300 * C68 -
          (C322 * C76 + C332 + C332 + C62 * C326) * C63 * C61 * C14318 *
              C14300 * C69 +
          (C322 * C77 + C333 + C333 + C62 * C327) * C63 * C61 * C14318 *
              C14300 * C70)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14556 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14545 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C14523) *
              C14300 * C374 +
          ((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14545 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14556 -
           (C322 * C821 + C1216 + C1216 + C62 * C1209) * C63 * C61 * C14523) *
              C14300 * C375 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14556 -
           (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C14545 +
           (C322 * C823 + C1218 + C1218 + C62 * C1211) * C63 * C61 * C14523) *
              C14300 * C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
               C2406 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
               C2407 +
           (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
               C14520) *
              C14552 +
          ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14318 *
               C2407 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
               C2406 -
           (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C14318 *
               C14520) *
              C14539 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
               C2406 -
           (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C14318 *
               C2407 +
           (C322 * C382 + C777 + C777 + C62 * C770) * C63 * C61 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 * C2738 -
          (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
              C2739 +
          (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
              C2740 -
          (C322 * C2744 + C2951 + C2951 + C62 * C2948) * C63 * C61 * C14318 *
              C2741 +
          (C322 * C2745 + C2952 + C2952 + C62 * C2949) * C63 * C61 * C14318 *
              C2742) *
         C14272) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14556 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14545 +
           (C322 * C819 + C1214 + C1214 + C62 * C1207) * C63 * C61 * C14523) *
              C2406 +
          ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14545 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14556 -
           (C322 * C2990 + C3340 + C3340 + C62 * C3336) * C63 * C61 * C14523) *
              C2407 +
          ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14556 -
           (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C14545 +
           (C322 * C2992 + C3342 + C3342 + C62 * C3338) * C63 * C61 * C14523) *
              C14520) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14495 -
           (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
              C14300 * C1254 +
          ((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14495) *
              C14300 * C1255 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14495 -
           (C71 * C822 + C841 + C841 + C61 * C834) * C62 * C63 * C14405) *
              C14300 * C1256 +
          ((C71 * C1582 + C1586 + C1586 + C61 * C1584) * C62 * C63 * C14405 -
           (C71 * C76 + C92 + C92 + C61 * C86) * C62 * C63 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14495 -
            (C71 * C818 + C837 + C837 + C61 * C830) * C62 * C63 * C14405) *
               C2406 +
           ((C71 * C1920 + C1930 + C1930 + C61 * C1926) * C62 * C63 * C14405 -
            (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14495) *
               C2407 +
           ((C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14495 -
            (C71 * C2991 + C3001 + C3001 + C61 * C2997) * C62 * C63 * C14405) *
               C14520) *
              C14480 +
          (((C71 * C820 + C839 + C839 + C61 * C832) * C62 * C63 * C14405 -
            (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14495) *
               C2406 +
           ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14495 -
            (C71 * C1921 + C1931 + C1931 + C61 * C1927) * C62 * C63 * C14405) *
               C2407 +
           ((C71 * C3720 + C3724 + C3724 + C61 * C3722) * C62 * C63 * C14405 -
            (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14495 -
           ((C115 * C824 + C63 * C886) * C61 +
            (C115 * C818 + C63 * C880) * C72) *
               C62 * C14405) *
              C14300 * C1254 +
          (((C115 * C820 + C63 * C882) * C72 +
            (C115 * C826 + C63 * C888) * C61) *
               C62 * C14405 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14495) *
              C14300 * C1255 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14495 -
           ((C115 * C828 + C63 * C890) * C61 +
            (C115 * C822 + C63 * C884) * C72) *
               C62 * C14405) *
              C14300 * C1256 +
          (((C115 * C1582 + C63 * C1620) * C72 +
            (C115 * C1583 + C63 * C1621) * C61) *
               C62 * C14405 -
           ((C115 * C81 + C63 * C124) * C61 + (C115 * C76 + C63 * C119) * C72) *
               C62 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C115 * C73 + C63 * C116) * C72 +
             (C115 * C78 + C63 * C121) * C61) *
                C62 * C14495 -
            ((C115 * C824 + C63 * C886) * C61 +
             (C115 * C818 + C63 * C880) * C72) *
                C62 * C14405) *
               C2406 +
           (((C115 * C1920 + C63 * C1982) * C72 +
             (C115 * C1923 + C63 * C1985) * C61) *
                C62 * C14405 -
            ((C115 * C383 + C63 * C445) * C61 +
             (C115 * C377 + C63 * C439) * C72) *
                C62 * C14495) *
               C2407 +
           (((C115 * C378 + C63 * C440) * C72 +
             (C115 * C384 + C63 * C446) * C61) *
                C62 * C14495 -
            ((C115 * C2994 + C63 * C3044) * C61 +
             (C115 * C2991 + C63 * C3041) * C72) *
                C62 * C14405) *
               C14520) *
              C14480 +
          ((((C115 * C820 + C63 * C882) * C72 +
             (C115 * C826 + C63 * C888) * C61) *
                C62 * C14405 -
            ((C115 * C79 + C63 * C122) * C61 +
             (C115 * C74 + C63 * C117) * C72) *
                C62 * C14495) *
               C2406 +
           (((C115 * C379 + C63 * C441) * C72 +
             (C115 * C385 + C63 * C447) * C61) *
                C62 * C14495 -
            ((C115 * C1924 + C63 * C1986) * C61 +
             (C115 * C1921 + C63 * C1983) * C72) *
                C62 * C14405) *
               C2407 +
           (((C115 * C3720 + C63 * C3774) * C72 +
             (C115 * C3721 + C63 * C3775) * C61) *
                C62 * C14405 -
            ((C115 * C386 + C63 * C448) * C61 +
             (C115 * C380 + C63 * C442) * C72) *
                C62 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14495 -
           ((C148 * C824 + C62 * C936) * C61 +
            (C148 * C818 + C62 * C930) * C72) *
               C63 * C14405) *
              C14300 * C1254 +
          (((C148 * C820 + C62 * C932) * C72 +
            (C148 * C826 + C62 * C938) * C61) *
               C63 * C14405 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14495) *
              C14300 * C1255 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14495 -
           ((C148 * C828 + C62 * C940) * C61 +
            (C148 * C822 + C62 * C934) * C72) *
               C63 * C14405) *
              C14300 * C1256 +
          (((C148 * C1582 + C62 * C1656) * C72 +
            (C148 * C1583 + C62 * C1657) * C61) *
               C63 * C14405 -
           ((C148 * C81 + C62 * C157) * C61 + (C148 * C76 + C62 * C152) * C72) *
               C63 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C148 * C73 + C62 * C149) * C72 +
             (C148 * C78 + C62 * C154) * C61) *
                C63 * C14495 -
            ((C148 * C824 + C62 * C936) * C61 +
             (C148 * C818 + C62 * C930) * C72) *
                C63 * C14405) *
               C2406 +
           (((C148 * C1920 + C62 * C2038) * C72 +
             (C148 * C1923 + C62 * C2041) * C61) *
                C63 * C14405 -
            ((C148 * C383 + C62 * C495) * C61 +
             (C148 * C377 + C62 * C489) * C72) *
                C63 * C14495) *
               C2407 +
           (((C148 * C378 + C62 * C490) * C72 +
             (C148 * C384 + C62 * C496) * C61) *
                C63 * C14495 -
            ((C148 * C2994 + C62 * C3088) * C61 +
             (C148 * C2991 + C62 * C3085) * C72) *
                C63 * C14405) *
               C14520) *
              C14480 +
          ((((C148 * C820 + C62 * C932) * C72 +
             (C148 * C826 + C62 * C938) * C61) *
                C63 * C14405 -
            ((C148 * C79 + C62 * C155) * C61 +
             (C148 * C74 + C62 * C150) * C72) *
                C63 * C14495) *
               C2406 +
           (((C148 * C379 + C62 * C491) * C72 +
             (C148 * C385 + C62 * C497) * C61) *
                C63 * C14495 -
            ((C148 * C1924 + C62 * C2042) * C61 +
             (C148 * C1921 + C62 * C2039) * C72) *
                C63 * C14405) *
               C2407 +
           (((C148 * C3720 + C62 * C3826) * C72 +
             (C148 * C3721 + C62 * C3827) * C61) *
                C63 * C14405 -
            ((C148 * C386 + C62 * C498) * C61 +
             (C148 * C380 + C62 * C492) * C72) *
                C63 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14495 -
           ((C72 * C880 + C61 * C980) * C63 +
            (C72 * C818 + C61 * C824) * C115) *
               C62 * C14405) *
              C14300 * C1254 +
          (((C72 * C820 + C61 * C826) * C115 +
            (C72 * C882 + C61 * C982) * C63) *
               C62 * C14405 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14495) *
              C14300 * C1255 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14495 -
           ((C72 * C884 + C61 * C984) * C63 +
            (C72 * C822 + C61 * C828) * C115) *
               C62 * C14405) *
              C14300 * C1256 +
          (((C72 * C1582 + C61 * C1583) * C115 +
            (C72 * C1620 + C61 * C1692) * C63) *
               C62 * C14405 -
           ((C72 * C119 + C61 * C184) * C63 + (C72 * C76 + C61 * C81) * C115) *
               C62 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
                C62 * C14495 -
            ((C72 * C880 + C61 * C980) * C63 +
             (C72 * C818 + C61 * C824) * C115) *
                C62 * C14405) *
               C2406 +
           (((C72 * C1920 + C61 * C1923) * C115 +
             (C72 * C1982 + C61 * C2094) * C63) *
                C62 * C14405 -
            ((C72 * C439 + C61 * C539) * C63 +
             (C72 * C377 + C61 * C383) * C115) *
                C62 * C14495) *
               C2407 +
           (((C72 * C378 + C61 * C384) * C115 +
             (C72 * C440 + C61 * C540) * C63) *
                C62 * C14495 -
            ((C72 * C3041 + C61 * C3129) * C63 +
             (C72 * C2991 + C61 * C2994) * C115) *
                C62 * C14405) *
               C14520) *
              C14480 +
          ((((C72 * C820 + C61 * C826) * C115 +
             (C72 * C882 + C61 * C982) * C63) *
                C62 * C14405 -
            ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
                C62 * C14495) *
               C2406 +
           (((C72 * C379 + C61 * C385) * C115 +
             (C72 * C441 + C61 * C541) * C63) *
                C62 * C14495 -
            ((C72 * C1983 + C61 * C2095) * C63 +
             (C72 * C1921 + C61 * C1924) * C115) *
                C62 * C14405) *
               C2407 +
           (((C72 * C3720 + C61 * C3721) * C115 +
             (C72 * C3774 + C61 * C3878) * C63) *
                C62 * C14405 -
            ((C72 * C442 + C61 * C542) * C63 +
             (C72 * C380 + C61 * C386) * C115) *
                C62 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14495 -
           (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
              C14300 * C1254 +
          ((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14495) *
              C14300 * C1255 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14495 -
           (C208 * C822 + C1035 + C1035 + C63 * C1028) * C61 * C62 * C14405) *
              C14300 * C1256 +
          ((C208 * C1582 + C1729 + C1729 + C63 * C1727) * C61 * C62 * C14405 -
           (C208 * C76 + C218 + C218 + C63 * C212) * C61 * C62 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14495 -
            (C208 * C818 + C1031 + C1031 + C63 * C1024) * C61 * C62 * C14405) *
               C2406 +
           ((C208 * C1920 + C2151 + C2151 + C63 * C2147) * C61 * C62 * C14405 -
            (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14495) *
               C2407 +
           ((C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14495 -
            (C208 * C2991 + C3174 + C3174 + C63 * C3170) * C61 * C62 * C14405) *
               C14520) *
              C14480 +
          (((C208 * C820 + C1033 + C1033 + C63 * C1026) * C61 * C62 * C14405 -
            (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14495) *
               C2406 +
           ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14495 -
            (C208 * C1921 + C2152 + C2152 + C63 * C2148) * C61 * C62 * C14405) *
               C2407 +
           ((C208 * C3720 + C3931 + C3931 + C63 * C3929) * C61 * C62 * C14405 -
            (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14495 -
                     ((C148 * C880 + C62 * C1074) * C63 +
                      (C148 * C818 + C62 * C930) * C115) *
                         C61 * C14405) *
                        C14300 * C1254 +
                    (((C148 * C820 + C62 * C932) * C115 +
                      (C148 * C882 + C62 * C1076) * C63) *
                         C61 * C14405 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14495) *
                        C14300 * C1255 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14495 -
                     ((C148 * C884 + C62 * C1078) * C63 +
                      (C148 * C822 + C62 * C934) * C115) *
                         C61 * C14405) *
                        C14300 * C1256 +
                    (((C148 * C1582 + C62 * C1656) * C115 +
                      (C148 * C1620 + C62 * C1763) * C63) *
                         C61 * C14405 -
                     ((C148 * C119 + C62 * C244) * C63 +
                      (C148 * C76 + C62 * C152) * C115) *
                         C61 * C14495) *
                        C14300 * C14524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C148 * C73 + C62 * C149) * C115 +
                       (C148 * C116 + C62 * C241) * C63) *
                          C61 * C14495 -
                      ((C148 * C880 + C62 * C1074) * C63 +
                       (C148 * C818 + C62 * C930) * C115) *
                          C61 * C14405) *
                         C2406 +
                     (((C148 * C1920 + C62 * C2038) * C115 +
                       (C148 * C1982 + C62 * C2203) * C63) *
                          C61 * C14405 -
                      ((C148 * C439 + C62 * C633) * C63 +
                       (C148 * C377 + C62 * C489) * C115) *
                          C61 * C14495) *
                         C2407 +
                     (((C148 * C378 + C62 * C490) * C115 +
                       (C148 * C440 + C62 * C634) * C63) *
                          C61 * C14495 -
                      ((C148 * C3041 + C62 * C3214) * C63 +
                       (C148 * C2991 + C62 * C3085) * C115) *
                          C61 * C14405) *
                         C14520) *
                        C14480 +
                    ((((C148 * C820 + C62 * C932) * C115 +
                       (C148 * C882 + C62 * C1076) * C63) *
                          C61 * C14405 -
                      ((C148 * C117 + C62 * C242) * C63 +
                       (C148 * C74 + C62 * C150) * C115) *
                          C61 * C14495) *
                         C2406 +
                     (((C148 * C379 + C62 * C491) * C115 +
                       (C148 * C441 + C62 * C635) * C63) *
                          C61 * C14495 -
                      ((C148 * C1983 + C62 * C2204) * C63 +
                       (C148 * C1921 + C62 * C2039) * C115) *
                          C61 * C14405) *
                         C2407 +
                     (((C148 * C3720 + C62 * C3826) * C115 +
                       (C148 * C3774 + C62 * C3981) * C63) *
                          C61 * C14405 -
                      ((C148 * C442 + C62 * C636) * C63 +
                       (C148 * C380 + C62 * C492) * C115) *
                          C61 * C14495) *
                         C14520) *
                        C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14495 -
           ((C72 * C930 + C61 * C1118) * C62 +
            (C72 * C818 + C61 * C824) * C148) *
               C63 * C14405) *
              C14300 * C1254 +
          (((C72 * C820 + C61 * C826) * C148 +
            (C72 * C932 + C61 * C1120) * C62) *
               C63 * C14405 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14495) *
              C14300 * C1255 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14495 -
           ((C72 * C934 + C61 * C1122) * C62 +
            (C72 * C822 + C61 * C828) * C148) *
               C63 * C14405) *
              C14300 * C1256 +
          (((C72 * C1582 + C61 * C1583) * C148 +
            (C72 * C1656 + C61 * C1798) * C62) *
               C63 * C14405 -
           ((C72 * C152 + C61 * C271) * C62 + (C72 * C76 + C61 * C81) * C148) *
               C63 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
                C63 * C14495 -
            ((C72 * C930 + C61 * C1118) * C62 +
             (C72 * C818 + C61 * C824) * C148) *
                C63 * C14405) *
               C2406 +
           (((C72 * C1920 + C61 * C1923) * C148 +
             (C72 * C2038 + C61 * C2256) * C62) *
                C63 * C14405 -
            ((C72 * C489 + C61 * C677) * C62 +
             (C72 * C377 + C61 * C383) * C148) *
                C63 * C14495) *
               C2407 +
           (((C72 * C378 + C61 * C384) * C148 +
             (C72 * C490 + C61 * C678) * C62) *
                C63 * C14495 -
            ((C72 * C3085 + C61 * C3255) * C62 +
             (C72 * C2991 + C61 * C2994) * C148) *
                C63 * C14405) *
               C14520) *
              C14480 +
          ((((C72 * C820 + C61 * C826) * C148 +
             (C72 * C932 + C61 * C1120) * C62) *
                C63 * C14405 -
            ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
                C63 * C14495) *
               C2406 +
           (((C72 * C379 + C61 * C385) * C148 +
             (C72 * C491 + C61 * C679) * C62) *
                C63 * C14495 -
            ((C72 * C2039 + C61 * C2257) * C62 +
             (C72 * C1921 + C61 * C1924) * C148) *
                C63 * C14405) *
               C2407 +
           (((C72 * C3720 + C61 * C3721) * C148 +
             (C72 * C3826 + C61 * C4032) * C62) *
                C63 * C14405 -
            ((C72 * C492 + C61 * C680) * C62 +
             (C72 * C380 + C61 * C386) * C148) *
                C63 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eezy[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14495 -
                     ((C115 * C930 + C63 * C1162) * C62 +
                      (C115 * C818 + C63 * C880) * C148) *
                         C61 * C14405) *
                        C14300 * C1254 +
                    (((C115 * C820 + C63 * C882) * C148 +
                      (C115 * C932 + C63 * C1164) * C62) *
                         C61 * C14405 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14495) *
                        C14300 * C1255 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14495 -
                     ((C115 * C934 + C63 * C1166) * C62 +
                      (C115 * C822 + C63 * C884) * C148) *
                         C61 * C14405) *
                        C14300 * C1256 +
                    (((C115 * C1582 + C63 * C1620) * C148 +
                      (C115 * C1656 + C63 * C1833) * C62) *
                         C61 * C14405 -
                     ((C115 * C152 + C63 * C298) * C62 +
                      (C115 * C76 + C63 * C119) * C148) *
                         C61 * C14495) *
                        C14300 * C14524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C115 * C73 + C63 * C116) * C148 +
                       (C115 * C149 + C63 * C295) * C62) *
                          C61 * C14495 -
                      ((C115 * C930 + C63 * C1162) * C62 +
                       (C115 * C818 + C63 * C880) * C148) *
                          C61 * C14405) *
                         C2406 +
                     (((C115 * C1920 + C63 * C1982) * C148 +
                       (C115 * C2038 + C63 * C2309) * C62) *
                          C61 * C14405 -
                      ((C115 * C489 + C63 * C721) * C62 +
                       (C115 * C377 + C63 * C439) * C148) *
                          C61 * C14495) *
                         C2407 +
                     (((C115 * C378 + C63 * C440) * C148 +
                       (C115 * C490 + C63 * C722) * C62) *
                          C61 * C14495 -
                      ((C115 * C3085 + C63 * C3296) * C62 +
                       (C115 * C2991 + C63 * C3041) * C148) *
                          C61 * C14405) *
                         C14520) *
                        C14480 +
                    ((((C115 * C820 + C63 * C882) * C148 +
                       (C115 * C932 + C63 * C1164) * C62) *
                          C61 * C14405 -
                      ((C115 * C150 + C63 * C296) * C62 +
                       (C115 * C74 + C63 * C117) * C148) *
                          C61 * C14495) *
                         C2406 +
                     (((C115 * C379 + C63 * C441) * C148 +
                       (C115 * C491 + C63 * C723) * C62) *
                          C61 * C14495 -
                      ((C115 * C2039 + C63 * C2310) * C62 +
                       (C115 * C1921 + C63 * C1983) * C148) *
                          C61 * C14405) *
                         C2407 +
                     (((C115 * C3720 + C63 * C3774) * C148 +
                       (C115 * C3826 + C63 * C4083) * C62) *
                          C61 * C14405 -
                      ((C115 * C492 + C63 * C724) * C62 +
                       (C115 * C380 + C63 * C442) * C148) *
                          C61 * C14495) *
                         C14520) *
                        C14283)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14495 -
           (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
              C14300 * C1254 +
          ((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14495) *
              C14300 * C1255 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14495 -
           (C322 * C822 + C1217 + C1217 + C62 * C1210) * C63 * C61 * C14405) *
              C14300 * C1256 +
          ((C322 * C1582 + C1870 + C1870 + C62 * C1868) * C63 * C61 * C14405 -
           (C322 * C76 + C332 + C332 + C62 * C326) * C63 * C61 * C14495) *
              C14300 * C14524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14495 -
            (C322 * C818 + C1213 + C1213 + C62 * C1206) * C63 * C61 * C14405) *
               C2406 +
           ((C322 * C1920 + C2366 + C2366 + C62 * C2362) * C63 * C61 * C14405 -
            (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14495) *
               C2407 +
           ((C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14495 -
            (C322 * C2991 + C3341 + C3341 + C62 * C3337) * C63 * C61 * C14405) *
               C14520) *
              C14480 +
          (((C322 * C820 + C1215 + C1215 + C62 * C1208) * C63 * C61 * C14405 -
            (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14495) *
               C2406 +
           ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14495 -
            (C322 * C1921 + C2367 + C2367 + C62 * C2363) * C63 * C61 * C14405) *
               C2407 +
           ((C322 * C3720 + C4136 + C4136 + C62 * C4134) * C63 * C61 * C14405 -
            (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C14495) *
               C14520) *
              C14283)) /
            (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C14300 *
              C66 -
          (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C14300 *
              C67 +
          (C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C14300 *
              C68 -
          (C71 * C76 + C92 + C92 + C61 * C86) * C62 * C63 * C14318 * C14300 *
              C69 +
          (C71 * C77 + C93 + C93 + C61 * C87) * C62 * C63 * C14318 * C14300 *
              C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C14555 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C14543 +
           (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 *
               C14520) *
              C374 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C14543 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C14555 -
           (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14318 *
               C14520) *
              C375 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C14555 -
           (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14318 *
               C14543 +
           (C71 * C382 + C401 + C401 + C61 * C394) * C62 * C63 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C2406 -
           (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 *
               C2407 +
           (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 *
               C14520) *
              C14552 +
          ((C71 * C379 + C398 + C398 + C61 * C391) * C62 * C63 * C14318 *
               C2407 -
           (C71 * C74 + C90 + C90 + C61 * C84) * C62 * C63 * C14318 * C2406 -
           (C71 * C380 + C399 + C399 + C61 * C392) * C62 * C63 * C14318 *
               C14520) *
              C14539 +
          ((C71 * C75 + C91 + C91 + C61 * C85) * C62 * C63 * C14318 * C2406 -
           (C71 * C381 + C400 + C400 + C61 * C393) * C62 * C63 * C14318 *
               C2407 +
           (C71 * C382 + C401 + C401 + C61 * C394) * C62 * C63 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C73 + C89 + C89 + C61 * C83) * C62 * C63 * C14318 * C2738 -
          (C71 * C377 + C396 + C396 + C61 * C389) * C62 * C63 * C14318 * C2739 +
          (C71 * C378 + C397 + C397 + C61 * C390) * C62 * C63 * C14318 * C2740 -
          (C71 * C2744 + C2751 + C2751 + C61 * C2748) * C62 * C63 * C14318 *
              C2741 +
          (C71 * C2745 + C2752 + C2752 + C61 * C2749) * C62 * C63 * C14318 *
              C2742) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexy[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
              C62 * C14318 * C14300 * C66 -
          ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
              C62 * C14318 * C14300 * C67 +
          ((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
              C62 * C14318 * C14300 * C68 -
          ((C115 * C81 + C63 * C124) * C61 + (C115 * C76 + C63 * C119) * C72) *
              C62 * C14318 * C14300 * C69 +
          ((C115 * C77 + C63 * C120) * C72 + (C115 * C82 + C63 * C125) * C61) *
              C62 * C14318 * C14300 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C14555 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C14543 +
           ((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14318 * C14520) *
              C374 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C14543 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C14555 -
           ((C115 * C386 + C63 * C448) * C61 +
            (C115 * C380 + C63 * C442) * C72) *
               C62 * C14318 * C14520) *
              C375 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14318 * C14555 -
           ((C115 * C387 + C63 * C449) * C61 +
            (C115 * C381 + C63 * C443) * C72) *
               C62 * C14318 * C14543 +
           ((C115 * C382 + C63 * C444) * C72 +
            (C115 * C388 + C63 * C450) * C61) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
               C62 * C14318 * C2406 -
           ((C115 * C383 + C63 * C445) * C61 +
            (C115 * C377 + C63 * C439) * C72) *
               C62 * C14318 * C2407 +
           ((C115 * C378 + C63 * C440) * C72 +
            (C115 * C384 + C63 * C446) * C61) *
               C62 * C14318 * C14520) *
              C14552 +
          (((C115 * C379 + C63 * C441) * C72 +
            (C115 * C385 + C63 * C447) * C61) *
               C62 * C14318 * C2407 -
           ((C115 * C79 + C63 * C122) * C61 + (C115 * C74 + C63 * C117) * C72) *
               C62 * C14318 * C2406 -
           ((C115 * C386 + C63 * C448) * C61 +
            (C115 * C380 + C63 * C442) * C72) *
               C62 * C14318 * C14520) *
              C14539 +
          (((C115 * C75 + C63 * C118) * C72 + (C115 * C80 + C63 * C123) * C61) *
               C62 * C14318 * C2406 -
           ((C115 * C387 + C63 * C449) * C61 +
            (C115 * C381 + C63 * C443) * C72) *
               C62 * C14318 * C2407 +
           ((C115 * C382 + C63 * C444) * C72 +
            (C115 * C388 + C63 * C450) * C61) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C115 * C73 + C63 * C116) * C72 + (C115 * C78 + C63 * C121) * C61) *
              C62 * C14318 * C2738 -
          ((C115 * C383 + C63 * C445) * C61 +
           (C115 * C377 + C63 * C439) * C72) *
              C62 * C14318 * C2739 +
          ((C115 * C378 + C63 * C440) * C72 +
           (C115 * C384 + C63 * C446) * C61) *
              C62 * C14318 * C2740 -
          ((C115 * C2746 + C63 * C2776) * C61 +
           (C115 * C2744 + C63 * C2774) * C72) *
              C62 * C14318 * C2741 +
          ((C115 * C2745 + C63 * C2775) * C72 +
           (C115 * C2747 + C63 * C2777) * C61) *
              C62 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eexz[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
              C63 * C14318 * C14300 * C66 -
          ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
              C63 * C14318 * C14300 * C67 +
          ((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
              C63 * C14318 * C14300 * C68 -
          ((C148 * C81 + C62 * C157) * C61 + (C148 * C76 + C62 * C152) * C72) *
              C63 * C14318 * C14300 * C69 +
          ((C148 * C77 + C62 * C153) * C72 + (C148 * C82 + C62 * C158) * C61) *
              C63 * C14318 * C14300 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C14555 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C14543 +
           ((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14318 * C14520) *
              C374 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C14543 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C14555 -
           ((C148 * C386 + C62 * C498) * C61 +
            (C148 * C380 + C62 * C492) * C72) *
               C63 * C14318 * C14520) *
              C375 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14318 * C14555 -
           ((C148 * C387 + C62 * C499) * C61 +
            (C148 * C381 + C62 * C493) * C72) *
               C63 * C14318 * C14543 +
           ((C148 * C382 + C62 * C494) * C72 +
            (C148 * C388 + C62 * C500) * C61) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
               C63 * C14318 * C2406 -
           ((C148 * C383 + C62 * C495) * C61 +
            (C148 * C377 + C62 * C489) * C72) *
               C63 * C14318 * C2407 +
           ((C148 * C378 + C62 * C490) * C72 +
            (C148 * C384 + C62 * C496) * C61) *
               C63 * C14318 * C14520) *
              C14552 +
          (((C148 * C379 + C62 * C491) * C72 +
            (C148 * C385 + C62 * C497) * C61) *
               C63 * C14318 * C2407 -
           ((C148 * C79 + C62 * C155) * C61 + (C148 * C74 + C62 * C150) * C72) *
               C63 * C14318 * C2406 -
           ((C148 * C386 + C62 * C498) * C61 +
            (C148 * C380 + C62 * C492) * C72) *
               C63 * C14318 * C14520) *
              C14539 +
          (((C148 * C75 + C62 * C151) * C72 + (C148 * C80 + C62 * C156) * C61) *
               C63 * C14318 * C2406 -
           ((C148 * C387 + C62 * C499) * C61 +
            (C148 * C381 + C62 * C493) * C72) *
               C63 * C14318 * C2407 +
           ((C148 * C382 + C62 * C494) * C72 +
            (C148 * C388 + C62 * C500) * C61) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C73 + C62 * C149) * C72 + (C148 * C78 + C62 * C154) * C61) *
              C63 * C14318 * C2738 -
          ((C148 * C383 + C62 * C495) * C61 +
           (C148 * C377 + C62 * C489) * C72) *
              C63 * C14318 * C2739 +
          ((C148 * C378 + C62 * C490) * C72 +
           (C148 * C384 + C62 * C496) * C61) *
              C63 * C14318 * C2740 -
          ((C148 * C2746 + C62 * C2802) * C61 +
           (C148 * C2744 + C62 * C2800) * C72) *
              C63 * C14318 * C2741 +
          ((C148 * C2745 + C62 * C2801) * C72 +
           (C148 * C2747 + C62 * C2803) * C61) *
              C63 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
              C62 * C14318 * C14300 * C66 -
          ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
              C62 * C14318 * C14300 * C67 +
          ((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
              C62 * C14318 * C14300 * C68 -
          ((C72 * C119 + C61 * C184) * C63 + (C72 * C76 + C61 * C81) * C115) *
              C62 * C14318 * C14300 * C69 +
          ((C72 * C77 + C61 * C82) * C115 + (C72 * C120 + C61 * C185) * C63) *
              C62 * C14318 * C14300 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C14555 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C14543 +
           ((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14318 * C14520) *
              C374 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C14543 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C14555 -
           ((C72 * C442 + C61 * C542) * C63 +
            (C72 * C380 + C61 * C386) * C115) *
               C62 * C14318 * C14520) *
              C375 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14318 * C14555 -
           ((C72 * C443 + C61 * C543) * C63 +
            (C72 * C381 + C61 * C387) * C115) *
               C62 * C14318 * C14543 +
           ((C72 * C382 + C61 * C388) * C115 +
            (C72 * C444 + C61 * C544) * C63) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
               C62 * C14318 * C2406 -
           ((C72 * C439 + C61 * C539) * C63 +
            (C72 * C377 + C61 * C383) * C115) *
               C62 * C14318 * C2407 +
           ((C72 * C378 + C61 * C384) * C115 +
            (C72 * C440 + C61 * C540) * C63) *
               C62 * C14318 * C14520) *
              C14552 +
          (((C72 * C379 + C61 * C385) * C115 +
            (C72 * C441 + C61 * C541) * C63) *
               C62 * C14318 * C2407 -
           ((C72 * C117 + C61 * C182) * C63 + (C72 * C74 + C61 * C79) * C115) *
               C62 * C14318 * C2406 -
           ((C72 * C442 + C61 * C542) * C63 +
            (C72 * C380 + C61 * C386) * C115) *
               C62 * C14318 * C14520) *
              C14539 +
          (((C72 * C75 + C61 * C80) * C115 + (C72 * C118 + C61 * C183) * C63) *
               C62 * C14318 * C2406 -
           ((C72 * C443 + C61 * C543) * C63 +
            (C72 * C381 + C61 * C387) * C115) *
               C62 * C14318 * C2407 +
           ((C72 * C382 + C61 * C388) * C115 +
            (C72 * C444 + C61 * C544) * C63) *
               C62 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C115 + (C72 * C116 + C61 * C181) * C63) *
              C62 * C14318 * C2738 -
          ((C72 * C439 + C61 * C539) * C63 + (C72 * C377 + C61 * C383) * C115) *
              C62 * C14318 * C2739 +
          ((C72 * C378 + C61 * C384) * C115 + (C72 * C440 + C61 * C540) * C63) *
              C62 * C14318 * C2740 -
          ((C72 * C2774 + C61 * C2826) * C63 +
           (C72 * C2744 + C61 * C2746) * C115) *
              C62 * C14318 * C2741 +
          ((C72 * C2745 + C61 * C2747) * C115 +
           (C72 * C2775 + C61 * C2827) * C63) *
              C62 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
              C14300 * C66 -
          (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
              C14300 * C67 +
          (C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
              C14300 * C68 -
          (C208 * C76 + C218 + C218 + C63 * C212) * C61 * C62 * C14318 *
              C14300 * C69 +
          (C208 * C77 + C219 + C219 + C63 * C213) * C61 * C62 * C14318 *
              C14300 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
               C14555 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
               C14543 +
           (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
               C14520) *
              C374 +
          ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14318 *
               C14543 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
               C14555 -
           (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C14318 *
               C14520) *
              C375 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
               C14555 -
           (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C14318 *
               C14543 +
           (C208 * C382 + C595 + C595 + C63 * C588) * C61 * C62 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 *
               C2406 -
           (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
               C2407 +
           (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
               C14520) *
              C14552 +
          ((C208 * C379 + C592 + C592 + C63 * C585) * C61 * C62 * C14318 *
               C2407 -
           (C208 * C74 + C216 + C216 + C63 * C210) * C61 * C62 * C14318 *
               C2406 -
           (C208 * C380 + C593 + C593 + C63 * C586) * C61 * C62 * C14318 *
               C14520) *
              C14539 +
          ((C208 * C75 + C217 + C217 + C63 * C211) * C61 * C62 * C14318 *
               C2406 -
           (C208 * C381 + C594 + C594 + C63 * C587) * C61 * C62 * C14318 *
               C2407 +
           (C208 * C382 + C595 + C595 + C63 * C588) * C61 * C62 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C208 * C73 + C215 + C215 + C63 * C209) * C61 * C62 * C14318 * C2738 -
          (C208 * C377 + C590 + C590 + C63 * C583) * C61 * C62 * C14318 *
              C2739 +
          (C208 * C378 + C591 + C591 + C63 * C584) * C61 * C62 * C14318 *
              C2740 -
          (C208 * C2744 + C2853 + C2853 + C63 * C2850) * C61 * C62 * C14318 *
              C2741 +
          (C208 * C2745 + C2854 + C2854 + C63 * C2851) * C61 * C62 * C14318 *
              C2742) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eeyz[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14318 * C14300 * C66 -
                    ((C148 * C117 + C62 * C242) * C63 +
                     (C148 * C74 + C62 * C150) * C115) *
                        C61 * C14318 * C14300 * C67 +
                    ((C148 * C75 + C62 * C151) * C115 +
                     (C148 * C118 + C62 * C243) * C63) *
                        C61 * C14318 * C14300 * C68 -
                    ((C148 * C119 + C62 * C244) * C63 +
                     (C148 * C76 + C62 * C152) * C115) *
                        C61 * C14318 * C14300 * C69 +
                    ((C148 * C77 + C62 * C153) * C115 +
                     (C148 * C120 + C62 * C245) * C63) *
                        C61 * C14318 * C14300 * C70)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14318 * C14555 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14318 * C14543 +
                     ((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14318 * C14520) *
                        C374 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14318 * C14543 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14318 * C14555 -
                     ((C148 * C442 + C62 * C636) * C63 +
                      (C148 * C380 + C62 * C492) * C115) *
                         C61 * C14318 * C14520) *
                        C375 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14318 * C14555 -
                     ((C148 * C443 + C62 * C637) * C63 +
                      (C148 * C381 + C62 * C493) * C115) *
                         C61 * C14318 * C14543 +
                     ((C148 * C382 + C62 * C494) * C115 +
                      (C148 * C444 + C62 * C638) * C63) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C73 + C62 * C149) * C115 +
                      (C148 * C116 + C62 * C241) * C63) *
                         C61 * C14318 * C2406 -
                     ((C148 * C439 + C62 * C633) * C63 +
                      (C148 * C377 + C62 * C489) * C115) *
                         C61 * C14318 * C2407 +
                     ((C148 * C378 + C62 * C490) * C115 +
                      (C148 * C440 + C62 * C634) * C63) *
                         C61 * C14318 * C14520) *
                        C14552 +
                    (((C148 * C379 + C62 * C491) * C115 +
                      (C148 * C441 + C62 * C635) * C63) *
                         C61 * C14318 * C2407 -
                     ((C148 * C117 + C62 * C242) * C63 +
                      (C148 * C74 + C62 * C150) * C115) *
                         C61 * C14318 * C2406 -
                     ((C148 * C442 + C62 * C636) * C63 +
                      (C148 * C380 + C62 * C492) * C115) *
                         C61 * C14318 * C14520) *
                        C14539 +
                    (((C148 * C75 + C62 * C151) * C115 +
                      (C148 * C118 + C62 * C243) * C63) *
                         C61 * C14318 * C2406 -
                     ((C148 * C443 + C62 * C637) * C63 +
                      (C148 * C381 + C62 * C493) * C115) *
                         C61 * C14318 * C2407 +
                     ((C148 * C382 + C62 * C494) * C115 +
                      (C148 * C444 + C62 * C638) * C63) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C148 * C73 + C62 * C149) * C115 +
                     (C148 * C116 + C62 * C241) * C63) *
                        C61 * C14318 * C2738 -
                    ((C148 * C439 + C62 * C633) * C63 +
                     (C148 * C377 + C62 * C489) * C115) *
                        C61 * C14318 * C2739 +
                    ((C148 * C378 + C62 * C490) * C115 +
                     (C148 * C440 + C62 * C634) * C63) *
                        C61 * C14318 * C2740 -
                    ((C148 * C2774 + C62 * C2876) * C63 +
                     (C148 * C2744 + C62 * C2800) * C115) *
                        C61 * C14318 * C2741 +
                    ((C148 * C2745 + C62 * C2801) * C115 +
                     (C148 * C2775 + C62 * C2877) * C63) *
                        C61 * C14318 * C2742) *
                   C14272) /
                      (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
              C63 * C14318 * C14300 * C66 -
          ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
              C63 * C14318 * C14300 * C67 +
          ((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
              C63 * C14318 * C14300 * C68 -
          ((C72 * C152 + C61 * C271) * C62 + (C72 * C76 + C61 * C81) * C148) *
              C63 * C14318 * C14300 * C69 +
          ((C72 * C77 + C61 * C82) * C148 + (C72 * C153 + C61 * C272) * C62) *
              C63 * C14318 * C14300 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C14555 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C14543 +
           ((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14318 * C14520) *
              C374 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C14543 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C14555 -
           ((C72 * C492 + C61 * C680) * C62 +
            (C72 * C380 + C61 * C386) * C148) *
               C63 * C14318 * C14520) *
              C375 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14318 * C14555 -
           ((C72 * C493 + C61 * C681) * C62 +
            (C72 * C381 + C61 * C387) * C148) *
               C63 * C14318 * C14543 +
           ((C72 * C382 + C61 * C388) * C148 +
            (C72 * C494 + C61 * C682) * C62) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
               C63 * C14318 * C2406 -
           ((C72 * C489 + C61 * C677) * C62 +
            (C72 * C377 + C61 * C383) * C148) *
               C63 * C14318 * C2407 +
           ((C72 * C378 + C61 * C384) * C148 +
            (C72 * C490 + C61 * C678) * C62) *
               C63 * C14318 * C14520) *
              C14552 +
          (((C72 * C379 + C61 * C385) * C148 +
            (C72 * C491 + C61 * C679) * C62) *
               C63 * C14318 * C2407 -
           ((C72 * C150 + C61 * C269) * C62 + (C72 * C74 + C61 * C79) * C148) *
               C63 * C14318 * C2406 -
           ((C72 * C492 + C61 * C680) * C62 +
            (C72 * C380 + C61 * C386) * C148) *
               C63 * C14318 * C14520) *
              C14539 +
          (((C72 * C75 + C61 * C80) * C148 + (C72 * C151 + C61 * C270) * C62) *
               C63 * C14318 * C2406 -
           ((C72 * C493 + C61 * C681) * C62 +
            (C72 * C381 + C61 * C387) * C148) *
               C63 * C14318 * C2407 +
           ((C72 * C382 + C61 * C388) * C148 +
            (C72 * C494 + C61 * C682) * C62) *
               C63 * C14318 * C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C72 * C73 + C61 * C78) * C148 + (C72 * C149 + C61 * C268) * C62) *
              C63 * C14318 * C2738 -
          ((C72 * C489 + C61 * C677) * C62 + (C72 * C377 + C61 * C383) * C148) *
              C63 * C14318 * C2739 +
          ((C72 * C378 + C61 * C384) * C148 + (C72 * C490 + C61 * C678) * C62) *
              C63 * C14318 * C2740 -
          ((C72 * C2800 + C61 * C2900) * C62 +
           (C72 * C2744 + C61 * C2746) * C148) *
              C63 * C14318 * C2741 +
          ((C72 * C2745 + C61 * C2747) * C148 +
           (C72 * C2801 + C61 * C2901) * C62) *
              C63 * C14318 * C2742) *
         C14272) /
            (p * q * std::sqrt(p + q));
    d2eezy[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14318 * C14300 * C66 -
                    ((C115 * C150 + C63 * C296) * C62 +
                     (C115 * C74 + C63 * C117) * C148) *
                        C61 * C14318 * C14300 * C67 +
                    ((C115 * C75 + C63 * C118) * C148 +
                     (C115 * C151 + C63 * C297) * C62) *
                        C61 * C14318 * C14300 * C68 -
                    ((C115 * C152 + C63 * C298) * C62 +
                     (C115 * C76 + C63 * C119) * C148) *
                        C61 * C14318 * C14300 * C69 +
                    ((C115 * C77 + C63 * C120) * C148 +
                     (C115 * C153 + C63 * C299) * C62) *
                        C61 * C14318 * C14300 * C70)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14318 * C14555 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14318 * C14543 +
                     ((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14318 * C14520) *
                        C374 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14318 * C14543 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14318 * C14555 -
                     ((C115 * C492 + C63 * C724) * C62 +
                      (C115 * C380 + C63 * C442) * C148) *
                         C61 * C14318 * C14520) *
                        C375 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14318 * C14555 -
                     ((C115 * C493 + C63 * C725) * C62 +
                      (C115 * C381 + C63 * C443) * C148) *
                         C61 * C14318 * C14543 +
                     ((C115 * C382 + C63 * C444) * C148 +
                      (C115 * C494 + C63 * C726) * C62) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C115 * C73 + C63 * C116) * C148 +
                      (C115 * C149 + C63 * C295) * C62) *
                         C61 * C14318 * C2406 -
                     ((C115 * C489 + C63 * C721) * C62 +
                      (C115 * C377 + C63 * C439) * C148) *
                         C61 * C14318 * C2407 +
                     ((C115 * C378 + C63 * C440) * C148 +
                      (C115 * C490 + C63 * C722) * C62) *
                         C61 * C14318 * C14520) *
                        C14552 +
                    (((C115 * C379 + C63 * C441) * C148 +
                      (C115 * C491 + C63 * C723) * C62) *
                         C61 * C14318 * C2407 -
                     ((C115 * C150 + C63 * C296) * C62 +
                      (C115 * C74 + C63 * C117) * C148) *
                         C61 * C14318 * C2406 -
                     ((C115 * C492 + C63 * C724) * C62 +
                      (C115 * C380 + C63 * C442) * C148) *
                         C61 * C14318 * C14520) *
                        C14539 +
                    (((C115 * C75 + C63 * C118) * C148 +
                      (C115 * C151 + C63 * C297) * C62) *
                         C61 * C14318 * C2406 -
                     ((C115 * C493 + C63 * C725) * C62 +
                      (C115 * C381 + C63 * C443) * C148) *
                         C61 * C14318 * C2407 +
                     ((C115 * C382 + C63 * C444) * C148 +
                      (C115 * C494 + C63 * C726) * C62) *
                         C61 * C14318 * C14520) *
                        C14514)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C115 * C73 + C63 * C116) * C148 +
                     (C115 * C149 + C63 * C295) * C62) *
                        C61 * C14318 * C2738 -
                    ((C115 * C489 + C63 * C721) * C62 +
                     (C115 * C377 + C63 * C439) * C148) *
                        C61 * C14318 * C2739 +
                    ((C115 * C378 + C63 * C440) * C148 +
                     (C115 * C490 + C63 * C722) * C62) *
                        C61 * C14318 * C2740 -
                    ((C115 * C2800 + C63 * C2924) * C62 +
                     (C115 * C2744 + C63 * C2774) * C148) *
                        C61 * C14318 * C2741 +
                    ((C115 * C2745 + C63 * C2775) * C148 +
                     (C115 * C2801 + C63 * C2925) * C62) *
                        C61 * C14318 * C2742) *
                   C14272) /
                      (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
              C14300 * C66 -
          (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
              C14300 * C67 +
          (C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
              C14300 * C68 -
          (C322 * C76 + C332 + C332 + C62 * C326) * C63 * C61 * C14318 *
              C14300 * C69 +
          (C322 * C77 + C333 + C333 + C62 * C327) * C63 * C61 * C14318 *
              C14300 * C70)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
               C14555 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
               C14543 +
           (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
               C14520) *
              C374 +
          ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14318 *
               C14543 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
               C14555 -
           (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C14318 *
               C14520) *
              C375 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
               C14555 -
           (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C14318 *
               C14543 +
           (C322 * C382 + C777 + C777 + C62 * C770) * C63 * C61 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 *
               C2406 -
           (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
               C2407 +
           (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
               C14520) *
              C14552 +
          ((C322 * C379 + C774 + C774 + C62 * C767) * C63 * C61 * C14318 *
               C2407 -
           (C322 * C74 + C330 + C330 + C62 * C324) * C63 * C61 * C14318 *
               C2406 -
           (C322 * C380 + C775 + C775 + C62 * C768) * C63 * C61 * C14318 *
               C14520) *
              C14539 +
          ((C322 * C75 + C331 + C331 + C62 * C325) * C63 * C61 * C14318 *
               C2406 -
           (C322 * C381 + C776 + C776 + C62 * C769) * C63 * C61 * C14318 *
               C2407 +
           (C322 * C382 + C777 + C777 + C62 * C770) * C63 * C61 * C14318 *
               C14520) *
              C14514)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C322 * C73 + C329 + C329 + C62 * C323) * C63 * C61 * C14318 * C2738 -
          (C322 * C377 + C772 + C772 + C62 * C765) * C63 * C61 * C14318 *
              C2739 +
          (C322 * C378 + C773 + C773 + C62 * C766) * C63 * C61 * C14318 *
              C2740 -
          (C322 * C2744 + C2951 + C2951 + C62 * C2948) * C63 * C61 * C14318 *
              C2741 +
          (C322 * C2745 + C2952 + C2952 + C62 * C2949) * C63 * C61 * C14318 *
              C2742) *
         C14272) /
            (p * q * std::sqrt(p + q));
}
