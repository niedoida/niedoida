/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_pssd_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1002_12(const double ae,
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
    const double C5554 = xA - xB;
    const double C5553 = ae + be;
    const double C5557 = ae * be;
    const double C5571 = yA - yB;
    const double C5574 = zA - zB;
    const double C5605 = p + q;
    const double C5604 = p * q;
    const double C5610 = xP - xQ;
    const double C5609 = bs[2];
    const double C5615 = bs[3];
    const double C5626 = bs[4];
    const double C5645 = yP - yQ;
    const double C5660 = zP - zQ;
    const double C78 = bs[0];
    const double C6055 = ce + de;
    const double C6054 = ce * de;
    const double C6053 = xC - xD;
    const double C6067 = yC - yD;
    const double C6081 = zC - zD;
    const double C6126 = std::pow(C5554, 2);
    const double C6127 = 2 * C5553;
    const double C5558 = C5557 * C5554;
    const double C5587 = C5557 * C5571;
    const double C6129 = std::pow(C5571, 2);
    const double C5599 = C5557 * C5574;
    const double C6128 = std::pow(C5574, 2);
    const double C5606 = 2 * C5604;
    const double C5618 = C5610 * ae;
    const double C5617 = C5610 * be;
    const double C5614 = std::pow(C5610, 2);
    const double C5648 = C5645 * be;
    const double C5647 = C5610 * C5645;
    const double C5677 = C5645 * ae;
    const double C5676 = C5645 * C5610;
    const double C5690 = std::pow(C5645, 2);
    const double C5663 = C5660 * be;
    const double C5662 = C5610 * C5660;
    const double C5699 = C5645 * C5660;
    const double C5709 = C5660 * ae;
    const double C5708 = C5660 * C5610;
    const double C5722 = C5660 * C5645;
    const double C5731 = std::pow(C5660, 2);
    const double C6132 = 2 * C6055;
    const double C6131 = std::pow(C6055, 2);
    const double C6056 = std::pow(C6053, 2);
    const double C6130 = C6053 * ce;
    const double C6068 = std::pow(C6067, 2);
    const double C6133 = C6067 * ce;
    const double C6082 = std::pow(C6081, 2);
    const double C6134 = C6081 * ce;
    const double C6135 = C6126 * C5557;
    const double C6136 = std::pow(C6127, -1);
    const double C6138 = C6129 * C5557;
    const double C6137 = C6128 * C5557;
    const double C5608 = C5606 / C5605;
    const double C90 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C5606 / C5605, 2) -
          (bs[1] * C5606) / C5605) *
         C5557) /
        std::pow(C5553, 2);
    const double C79 = -(C5610 * bs[1] * C5606) / C5605;
    const double C439 = -(C5645 * bs[1] * C5606) / C5605;
    const double C740 = -(C5660 * bs[1] * C5606) / C5605;
    const double C5621 = C5615 * C5618;
    const double C5632 = C5626 * C5618;
    const double C83 = (-(bs[1] * C5618 * C5606) / C5605) / C5553;
    const double C5620 = C5615 * C5617;
    const double C5629 = C5626 * C5617;
    const double C82 = (-(bs[1] * C5617 * C5606) / C5605) / C5553;
    const double C5628 = C5614 * C5626;
    const double C5650 = C5615 * C5648;
    const double C5655 = C5626 * C5648;
    const double C121 = (-(bs[1] * C5648 * C5606) / C5605) / C5553;
    const double C5649 = C5647 * ae;
    const double C5679 = C5615 * C5677;
    const double C5684 = C5626 * C5677;
    const double C206 = (-(bs[1] * C5677 * C5606) / C5605) / C5553;
    const double C5678 = C5676 * ae;
    const double C5692 = C5690 * C5626;
    const double C5665 = C5615 * C5663;
    const double C5670 = C5626 * C5663;
    const double C164 = (-(bs[1] * C5663 * C5606) / C5605) / C5553;
    const double C5664 = C5662 * ae;
    const double C5700 = C5699 * ae;
    const double C5711 = C5615 * C5709;
    const double C5716 = C5626 * C5709;
    const double C319 = (-(bs[1] * C5709 * C5606) / C5605) / C5553;
    const double C5710 = C5708 * ae;
    const double C5723 = C5722 * ae;
    const double C5733 = C5731 * C5626;
    const double C6141 = std::pow(C6132, -2);
    const double C6139 = std::pow(C6132, -1);
    const double C6057 = C6056 * C6054;
    const double C6069 = C6068 * C6054;
    const double C6083 = C6082 * C6054;
    const double C6144 = C6135 / C5553;
    const double C6146 = C6138 / C5553;
    const double C6145 = C6137 / C5553;
    const double C5611 = std::pow(C5608, 2);
    const double C5616 = -C5608;
    const double C5627 = std::pow(C5608, 4);
    const double C5651 = C5649 * be;
    const double C5680 = C5678 * be;
    const double C5666 = C5664 * be;
    const double C5701 = C5700 * be;
    const double C5712 = C5710 * be;
    const double C5724 = C5723 * be;
    const double C6058 = C6057 / C6055;
    const double C6070 = C6069 / C6055;
    const double C6084 = C6083 / C6055;
    const double C6147 = -C6144;
    const double C6149 = -C6146;
    const double C6148 = -C6145;
    const double C5613 = C5609 * C5611;
    const double C91 =
        (ae * C5611 * C5609 * C5610 * be + be * C5611 * C5609 * C5610 * ae +
         C5610 *
             (C5609 * C5611 +
              std::pow(C5610, 2) * bs[3] * std::pow(-C5608, 3)) *
             C5557) /
        std::pow(C5553, 2);
    const double C125 =
        (C5611 * C5609 * C5610 * (yP - yQ) * ae * be) / std::pow(C5553, 2);
    const double C168 =
        (C5611 * C5609 * C5610 * (zP - zQ) * ae * be) / std::pow(C5553, 2);
    const double C210 =
        (C5611 * C5609 * C5645 * C5610 * ae * be) / std::pow(C5553, 2);
    const double C241 =
        ((std::pow(C5645, 2) * C5609 * C5611 - (bs[1] * C5606) / C5605) *
         C5557) /
        std::pow(C5553, 2);
    const double C285 =
        (C5611 * C5609 * C5645 * C5660 * ae * be) / std::pow(C5553, 2);
    const double C323 =
        (C5611 * C5609 * C5660 * C5610 * ae * be) / std::pow(C5553, 2);
    const double C353 =
        (C5611 * C5609 * C5660 * C5645 * ae * be) / std::pow(C5553, 2);
    const double C388 =
        ((std::pow(C5660, 2) * C5609 * C5611 - (bs[1] * C5606) / C5605) *
         C5557) /
        std::pow(C5553, 2);
    const double C84 = (C5610 * C5611 * C5609 * C5617) / C5553 -
                       (be * bs[1] * C5606) / (C5605 * C5553);
    const double C85 = (C5610 * C5611 * C5609 * C5618) / C5553 -
                       (ae * bs[1] * C5606) / (C5605 * C5553);
    const double C122 = (C5610 * C5611 * C5609 * C5648) / C5553;
    const double C165 = (C5610 * C5611 * C5609 * C5663) / C5553;
    const double C207 = (C5610 * C5611 * C5609 * C5677) / C5553;
    const double C320 = (C5610 * C5611 * C5609 * C5709) / C5553;
    const double C444 = (C5645 * C5611 * C5609 * C5617) / C5553;
    const double C445 = (C5645 * C5611 * C5609 * C5618) / C5553;
    const double C480 = (C5645 * C5611 * C5609 * C5648) / C5553 -
                        (be * bs[1] * C5606) / (C5605 * C5553);
    const double C514 = (C5645 * C5611 * C5609 * C5663) / C5553;
    const double C548 = (C5645 * C5611 * C5609 * C5677) / C5553 -
                        (ae * bs[1] * C5606) / (C5605 * C5553);
    const double C642 = (C5645 * C5611 * C5609 * C5709) / C5553;
    const double C745 = (C5660 * C5611 * C5609 * C5617) / C5553;
    const double C746 = (C5660 * C5611 * C5609 * C5618) / C5553;
    const double C781 = (C5660 * C5611 * C5609 * C5648) / C5553;
    const double C815 = (C5660 * C5611 * C5609 * C5663) / C5553 -
                        (be * bs[1] * C5606) / (C5605 * C5553);
    const double C849 = (C5660 * C5611 * C5609 * C5677) / C5553;
    const double C943 = (C5660 * C5611 * C5609 * C5709) / C5553 -
                        (ae * bs[1] * C5606) / (C5605 * C5553);
    const double C5619 = std::pow(C5616, 3);
    const double C5636 = C5627 * C5632;
    const double C5635 = C5627 * C5629;
    const double C5634 = C5628 * C5627;
    const double C5657 = C5627 * C5655;
    const double C5672 = C5627 * C5670;
    const double C5686 = C5627 * C5684;
    const double C5693 = C5692 * C5627;
    const double C5718 = C5627 * C5716;
    const double C5734 = C5733 * C5627;
    const double C5654 = C5626 * C5651;
    const double C5683 = C5626 * C5680;
    const double C5669 = C5626 * C5666;
    const double C5703 = C5626 * C5701;
    const double C5715 = C5626 * C5712;
    const double C5726 = C5626 * C5724;
    const double C6059 = -C6058;
    const double C6071 = -C6070;
    const double C6085 = -C6084;
    const double C6150 = std::exp(C6147);
    const double C6152 = std::exp(C6149);
    const double C6151 = std::exp(C6148);
    const double C80 = C5613 * C5614 - (bs[1] * C5606) / C5605;
    const double C438 = C5645 * C5610 * C5613;
    const double C440 = C5613 * C5690 - (bs[1] * C5606) / C5605;
    const double C739 = C5660 * C5610 * C5613;
    const double C741 = C5613 * C5731 - (bs[1] * C5606) / C5605;
    const double C1749 = C5660 * C5645 * C5613;
    const double C5623 = C5619 * C5621;
    const double C5622 = C5619 * C5620;
    const double C5625 = C5615 * C5619;
    const double C5652 = C5619 * C5650;
    const double C5667 = C5619 * C5665;
    const double C5681 = C5619 * C5679;
    const double C5713 = C5619 * C5711;
    const double C126 = (ae * C5611 * C5609 * C5645 * be +
                         C5610 * C5619 * C5615 * C5610 * C5645 * ae * be) /
                        std::pow(C5553, 2);
    const double C169 = (ae * C5611 * C5609 * C5660 * be +
                         C5610 * C5619 * C5615 * C5610 * C5660 * ae * be) /
                        std::pow(C5553, 2);
    const double C211 = (be * C5611 * C5609 * C5645 * ae +
                         C5610 * C5619 * C5615 * C5645 * C5610 * ae * be) /
                        std::pow(C5553, 2);
    const double C242 =
        (C5610 * (C5613 + std::pow(C5645, 2) * C5615 * C5619) * C5557) /
        std::pow(C5553, 2);
    const double C286 =
        (C5610 * C5619 * C5615 * C5645 * C5660 * ae * be) / std::pow(C5553, 2);
    const double C287 =
        (C5619 * C5615 * C5701 + C5627 * C5626 * C5701 * C5614) /
        std::pow(C5553, 2);
    const double C324 = (be * C5611 * C5609 * C5660 * ae +
                         C5610 * C5619 * C5615 * C5660 * C5610 * ae * be) /
                        std::pow(C5553, 2);
    const double C354 =
        (C5610 * C5619 * C5615 * C5660 * C5645 * ae * be) / std::pow(C5553, 2);
    const double C355 =
        (C5619 * C5615 * C5724 + C5627 * C5626 * C5724 * C5614) /
        std::pow(C5553, 2);
    const double C389 =
        (C5610 * (C5613 + std::pow(C5660, 2) * C5615 * C5619) * C5557) /
        std::pow(C5553, 2);
    const double C451 =
        (C5645 * (C5613 + C5614 * C5615 * C5619) * C5557) / std::pow(C5553, 2);
    const double C484 =
        (be * C5611 * C5609 * C5618 + C5645 * C5619 * C5615 * C5651) /
        std::pow(C5553, 2);
    const double C518 = (C5645 * C5619 * C5615 * C5666) / std::pow(C5553, 2);
    const double C552 =
        (ae * C5611 * C5609 * C5617 + C5645 * C5619 * C5615 * C5680) /
        std::pow(C5553, 2);
    const double C583 =
        (ae * C5611 * C5609 * C5648 + be * C5611 * C5609 * C5677 +
         C5645 * (C5613 + C5690 * C5615 * C5619) * C5557) /
        std::pow(C5553, 2);
    const double C612 =
        (ae * C5611 * C5609 * C5663 + C5645 * C5619 * C5615 * C5701) /
        std::pow(C5553, 2);
    const double C646 = (C5645 * C5619 * C5615 * C5712) / std::pow(C5553, 2);
    const double C676 =
        (be * C5611 * C5609 * C5709 + C5645 * C5619 * C5615 * C5724) /
        std::pow(C5553, 2);
    const double C707 =
        (C5645 * (C5613 + C5731 * C5615 * C5619) * C5557) / std::pow(C5553, 2);
    const double C752 =
        (C5660 * (C5613 + C5614 * C5615 * C5619) * C5557) / std::pow(C5553, 2);
    const double C785 = (C5660 * C5619 * C5615 * C5651) / std::pow(C5553, 2);
    const double C819 =
        (be * C5611 * C5609 * C5618 + C5660 * C5619 * C5615 * C5666) /
        std::pow(C5553, 2);
    const double C853 = (C5660 * C5619 * C5615 * C5680) / std::pow(C5553, 2);
    const double C884 =
        (C5660 * (C5613 + C5690 * C5615 * C5619) * C5557) / std::pow(C5553, 2);
    const double C913 =
        (be * C5611 * C5609 * C5677 + C5660 * C5619 * C5615 * C5701) /
        std::pow(C5553, 2);
    const double C947 =
        (ae * C5611 * C5609 * C5617 + C5660 * C5619 * C5615 * C5712) /
        std::pow(C5553, 2);
    const double C977 =
        (ae * C5611 * C5609 * C5648 + C5660 * C5619 * C5615 * C5724) /
        std::pow(C5553, 2);
    const double C1008 =
        (ae * C5611 * C5609 * C5663 + be * C5611 * C5609 * C5709 +
         C5660 * (C5613 + C5731 * C5615 * C5619) * C5557) /
        std::pow(C5553, 2);
    const double C5639 = C5610 * C5636;
    const double C5866 = C5645 * C5636;
    const double C5638 = C5610 * C5635;
    const double C5871 = C5645 * C5635;
    const double C1756 =
        (ae * C5660 * C5645 * C5635 + be * C5660 * C5645 * C5636 +
         C5610 * C5660 * C5645 *
             (C5626 * C5627 + C5614 * bs[5] * std::pow(C5616, 5)) * C5557) /
        std::pow(C5553, 2);
    const double C5757 = C5610 * C5657;
    const double C5854 = C5645 * C5657;
    const double C5763 = C5610 * C5672;
    const double C5874 = C5645 * C5672;
    const double C5894 = C5660 * C5672;
    const double C5758 = C5610 * C5686;
    const double C5856 = C5645 * C5686;
    const double C5772 = C5610 * C5718;
    const double C5875 = C5645 * C5718;
    const double C5896 = C5660 * C5718;
    const double C5656 = C5627 * C5654;
    const double C5685 = C5627 * C5683;
    const double C5671 = C5627 * C5669;
    const double C5704 = C5627 * C5703;
    const double C5717 = C5627 * C5715;
    const double C5727 = C5627 * C5726;
    const double C6060 = std::exp(C6059);
    const double C6072 = std::exp(C6071);
    const double C6086 = std::exp(C6085);
    const double C2435 = C6150 * C444;
    const double C4436 = C6150 * C745;
    const double C5559 = C5558 * C6150;
    const double C74 =
        (-(0 * be) / C5553) / (2 * C5553) -
        ((C6150 - (C5554 * 2 * ae * be * C5554 * C6150) / C5553) * be) / C5553;
    const double C65 = -(C6150 * C5554 * be) / C5553;
    const double C66 = C6136 * C6150;
    const double C130 = C6152 * C122;
    const double C4372 = C6152 * C781;
    const double C5588 = C5587 * C6152;
    const double C120 = -(2 * C5557 * (yA - yB) * C6152) / C5553;
    const double C240 =
        -((C6152 - (C5571 * 2 * C5557 * C5571 * C6152) / C5553) * 2 * C5557) /
        C5553;
    const double C2110 =
        (-(0 * be) / C5553) / (2 * C5553) -
        ((C6152 - (C5571 * 2 * C5557 * C5571 * C6152) / C5553) * be) / C5553;
    const double C2111 =
        (-(2 * C5557 * C5571 * C6152) / C5553) / (2 * C5553) - (0 * be) / C5553;
    const double C2080 = -(C6152 * C5571 * be) / C5553;
    const double C2081 = C6136 * C6152;
    const double C173 = C6151 * C165;
    const double C2399 = C6151 * C514;
    const double C5600 = C5599 * C6151;
    const double C163 = -(2 * C5557 * (zA - zB) * C6151) / C5553;
    const double C387 =
        -((C6151 - (C5574 * 2 * C5557 * C5574 * C6151) / C5553) * 2 * C5557) /
        C5553;
    const double C3905 =
        (-(0 * be) / C5553) / (2 * C5553) -
        ((C6151 - (C5574 * 2 * C5557 * C5574 * C6151) / C5553) * be) / C5553;
    const double C3906 =
        (-(2 * C5557 * C5574 * C6151) / C5553) / (2 * C5553) - (0 * be) / C5553;
    const double C3851 = -(C6151 * C5574 * be) / C5553;
    const double C3852 = C6136 * C6151;
    const double C87 =
        (C5611 * C5609 * C5618 + C5610 * (C5610 * C5623 + C5613 * ae) +
         C5610 * C5613 * ae) /
        C5553;
    const double C443 = (C5645 * (C5610 * C5623 + C5613 * ae)) / C5553;
    const double C447 = (C5611 * C5609 * C5618 + C5623 * C5690) / C5553;
    const double C744 = (C5660 * (C5610 * C5623 + C5613 * ae)) / C5553;
    const double C748 = (C5611 * C5609 * C5618 + C5623 * C5731) / C5553;
    const double C1752 = (C5660 * C5645 * C5623) / C5553;
    const double C2324 =
        (2 * C5645 * C5623 + C5645 * (C5623 + C5636 * C5690)) / C5553;
    const double C3512 = (C5660 * (C5623 + C5636 * C5690)) / C5553;
    const double C4327 =
        (2 * C5660 * C5623 + C5660 * (C5623 + C5636 * C5731)) / C5553;
    const double C92 =
        ((C5613 + C5614 * C5615 * C5619) * C5557 +
         ae * (C5610 * C5622 + C5613 * be) + be * (C5610 * C5623 + C5613 * ae) +
         C5610 * (ae * C5622 + be * C5623 +
                  C5610 * (C5615 * C5619 + C5614 * bs[4] * std::pow(C5608, 4)) *
                      C5557)) /
        std::pow(C5553, 2);
    const double C86 =
        (C5611 * C5609 * C5617 + C5610 * (C5610 * C5622 + C5613 * be) +
         C5610 * C5613 * be) /
        C5553;
    const double C442 = (C5645 * (C5610 * C5622 + C5613 * be)) / C5553;
    const double C446 = (C5611 * C5609 * C5617 + C5622 * C5690) / C5553;
    const double C743 = (C5660 * (C5610 * C5622 + C5613 * be)) / C5553;
    const double C747 = (C5611 * C5609 * C5617 + C5622 * C5731) / C5553;
    const double C1751 = (C5660 * C5645 * C5622) / C5553;
    const double C2323 =
        (2 * C5645 * C5622 + C5645 * (C5622 + C5635 * C5690)) / C5553;
    const double C3511 = (C5660 * (C5622 + C5635 * C5690)) / C5553;
    const double C4326 =
        (2 * C5660 * C5622 + C5660 * (C5622 + C5635 * C5731)) / C5553;
    const double C5633 = C5625 * ae;
    const double C5631 = C5610 * C5625;
    const double C5630 = C5625 * be;
    const double C5637 = C5625 + C5634;
    const double C5694 = C5625 + C5693;
    const double C5735 = C5625 + C5734;
    const double C5855 = C5645 * C5625;
    const double C5895 = C5660 * C5625;
    const double C243 = ((C5613 + C5690 * C5615 * C5619) * C5557 +
                         (C5625 + C5690 * C5626 * C5627) * C5557 * C5614) /
                        std::pow(C5553, 2);
    const double C390 = ((C5613 + C5731 * C5615 * C5619) * C5557 +
                         (C5625 + C5731 * C5626 * C5627) * C5557 * C5614) /
                        std::pow(C5553, 2);
    const double C81 = 2 * C5610 * C5613 + C5610 * (C5613 + C5625 * C5614);
    const double C1049 = C5645 * (C5613 + C5625 * C5614);
    const double C1400 = C5660 * (C5613 + C5625 * C5614);
    const double C2322 = 2 * C5645 * C5613 + C5645 * (C5613 + C5625 * C5690);
    const double C3510 = C5660 * (C5613 + C5625 * C5690);
    const double C4325 = 2 * C5660 * C5613 + C5660 * (C5613 + C5625 * C5731);
    const double C127 = (C5619 * C5615 * C5651 + ae * C5610 * C5652 +
                         C5610 * (ae * C5652 + C5610 * C5627 * C5626 * C5651)) /
                        std::pow(C5553, 2);
    const double C123 = (C5611 * C5609 * C5648 + C5652 * C5614) / C5553;
    const double C124 =
        (2 * C5610 * C5652 + C5610 * (C5652 + C5657 * C5614)) / C5553;
    const double C481 = (C5645 * C5610 * C5652 + C5610 * C5613 * be) / C5553;
    const double C482 =
        (C5611 * C5609 * C5648 + C5645 * (C5645 * C5652 + C5613 * be) +
         C5645 * C5613 * be) /
        C5553;
    const double C782 = (C5660 * C5610 * C5652) / C5553;
    const double C783 = (C5611 * C5609 * C5648 + C5652 * C5731) / C5553;
    const double C1087 =
        (C5645 * (C5652 + C5657 * C5614) + (C5613 + C5625 * C5614) * be) /
        C5553;
    const double C1438 = (C5660 * (C5652 + C5657 * C5614)) / C5553;
    const double C1791 = (C5660 * (C5645 * C5652 + C5613 * be)) / C5553;
    const double C4369 =
        (2 * C5660 * C5652 + C5660 * (C5652 + C5657 * C5731)) / C5553;
    const double C170 = (C5619 * C5615 * C5666 + ae * C5610 * C5667 +
                         C5610 * (ae * C5667 + C5610 * C5627 * C5626 * C5666)) /
                        std::pow(C5553, 2);
    const double C166 = (C5611 * C5609 * C5663 + C5667 * C5614) / C5553;
    const double C167 =
        (2 * C5610 * C5667 + C5610 * (C5667 + C5672 * C5614)) / C5553;
    const double C515 = (C5645 * C5610 * C5667) / C5553;
    const double C516 = (C5611 * C5609 * C5663 + C5667 * C5690) / C5553;
    const double C816 = (C5660 * C5610 * C5667 + C5610 * C5613 * be) / C5553;
    const double C817 =
        (C5611 * C5609 * C5663 + C5660 * (C5660 * C5667 + C5613 * be) +
         C5660 * C5613 * be) /
        C5553;
    const double C1127 = (C5645 * (C5667 + C5672 * C5614)) / C5553;
    const double C1478 =
        (C5660 * (C5667 + C5672 * C5614) + (C5613 + C5625 * C5614) * be) /
        C5553;
    const double C1829 = (C5660 * C5645 * C5667 + C5645 * C5613 * be) / C5553;
    const double C2396 =
        (2 * C5645 * C5667 + C5645 * (C5667 + C5672 * C5690)) / C5553;
    const double C3592 =
        (C5660 * (C5667 + C5672 * C5690) + (C5613 + C5625 * C5690) * be) /
        C5553;
    const double C212 = (C5619 * C5615 * C5680 + be * C5610 * C5681 +
                         C5610 * (be * C5681 + C5610 * C5627 * C5626 * C5680)) /
                        std::pow(C5553, 2);
    const double C208 = (C5611 * C5609 * C5677 + C5681 * C5614) / C5553;
    const double C209 =
        (2 * C5610 * C5681 + C5610 * (C5681 + C5686 * C5614)) / C5553;
    const double C549 = (C5645 * C5610 * C5681 + C5610 * C5613 * ae) / C5553;
    const double C550 =
        (C5611 * C5609 * C5677 + C5645 * (C5645 * C5681 + C5613 * ae) +
         C5645 * C5613 * ae) /
        C5553;
    const double C850 = (C5660 * C5610 * C5681) / C5553;
    const double C851 = (C5611 * C5609 * C5677 + C5681 * C5731) / C5553;
    const double C1167 =
        (C5645 * (C5681 + C5686 * C5614) + (C5613 + C5625 * C5614) * ae) /
        C5553;
    const double C1518 = (C5660 * (C5681 + C5686 * C5614)) / C5553;
    const double C1867 = (C5660 * (C5645 * C5681 + C5613 * ae)) / C5553;
    const double C4433 =
        (2 * C5660 * C5681 + C5660 * (C5681 + C5686 * C5731)) / C5553;
    const double C325 = (C5619 * C5615 * C5712 + be * C5610 * C5713 +
                         C5610 * (be * C5713 + C5610 * C5627 * C5626 * C5712)) /
                        std::pow(C5553, 2);
    const double C321 = (C5611 * C5609 * C5709 + C5713 * C5614) / C5553;
    const double C322 =
        (2 * C5610 * C5713 + C5610 * (C5713 + C5718 * C5614)) / C5553;
    const double C643 = (C5645 * C5610 * C5713) / C5553;
    const double C644 = (C5611 * C5609 * C5709 + C5713 * C5690) / C5553;
    const double C944 = (C5660 * C5610 * C5713 + C5610 * C5613 * ae) / C5553;
    const double C945 =
        (C5611 * C5609 * C5709 + C5660 * (C5660 * C5713 + C5613 * ae) +
         C5660 * C5613 * ae) /
        C5553;
    const double C1282 = (C5645 * (C5713 + C5718 * C5614)) / C5553;
    const double C1633 =
        (C5660 * (C5713 + C5718 * C5614) + (C5613 + C5625 * C5614) * ae) /
        C5553;
    const double C1977 = (C5660 * C5645 * C5713 + C5645 * C5613 * ae) / C5553;
    const double C2526 =
        (2 * C5645 * C5713 + C5645 * (C5713 + C5718 * C5690)) / C5553;
    const double C3744 =
        (C5660 * (C5713 + C5718 * C5690) + (C5613 + C5625 * C5690) * ae) /
        C5553;
    const double C132 = C6152 * C126;
    const double C175 = C6151 * C169;
    const double C249 = C6152 * C242;
    const double C290 = C6151 * C286;
    const double C293 = C6151 * C287;
    const double C358 = C6152 * C354;
    const double C361 = C6152 * C355;
    const double C396 = C6151 * C389;
    const double C2330 = C6150 * C451;
    const double C2401 = C6151 * C518;
    const double C2437 = C6150 * C552;
    const double C2497 = C6151 * C612;
    const double C2529 = C6150 * C646;
    const double C2590 = C6151 * C707;
    const double C4333 = C6150 * C752;
    const double C4374 = C6152 * C785;
    const double C4438 = C6150 * C853;
    const double C4474 = C6152 * C884;
    const double C4542 = C6150 * C947;
    const double C4573 = C6152 * C977;
    const double C2628 = (C5645 * C5623 + C5866 * C5731) / C5553;
    const double C2627 = (C5645 * C5622 + C5871 * C5731) / C5553;
    const double C784 = (C5610 * C5652 + C5757 * C5731) / C5553;
    const double C517 = (C5610 * C5667 + C5763 * C5690) / C5553;
    const double C1906 =
        (ae * C5660 * C5757 + be * C5660 * C5758 +
         C5645 * C5660 * C5610 *
             (C5626 * C5627 + C5690 * bs[5] * std::pow(C5616, 5)) * C5557) /
        std::pow(C5553, 2);
    const double C852 = (C5610 * C5681 + C5758 * C5731) / C5553;
    const double C2052 =
        (ae * C5645 * C5763 + be * C5645 * C5772 +
         C5660 * C5645 * C5610 *
             (C5626 * C5627 + C5731 * bs[5] * std::pow(C5616, 5)) * C5557) /
        std::pow(C5553, 2);
    const double C645 = (C5610 * C5713 + C5772 * C5690) / C5553;
    const double C128 =
        (2 * (ae * C5652 + C5610 * C5656) + ae * (C5652 + C5657 * C5614) +
         C5610 * (C5656 + ae * C5610 * C5657 +
                  C5610 * (ae * C5657 +
                           C5610 * std::pow(C5616, 5) * bs[5] * C5651))) /
        std::pow(C5553, 2);
    const double C485 = (be * (C5610 * C5623 + C5613 * ae) +
                         C5645 * (ae * C5652 + C5610 * C5656)) /
                        std::pow(C5553, 2);
    const double C486 = (C5619 * C5615 * C5651 + be * C5645 * C5623 +
                         C5645 * (be * C5623 + C5645 * C5656)) /
                        std::pow(C5553, 2);
    const double C786 =
        (C5660 * (ae * C5652 + C5610 * C5656)) / std::pow(C5553, 2);
    const double C787 =
        (C5619 * C5615 * C5651 + C5656 * C5731) / std::pow(C5553, 2);
    const double C788 =
        (ae * C5652 + C5610 * C5656 +
         (ae * C5657 + C5610 * std::pow(C5616, 5) * bs[5] * C5651) * C5731) /
        std::pow(C5553, 2);
    const double C1439 =
        (C5660 *
         (C5656 + ae * C5757 +
          C5610 * (ae * C5657 + C5610 * std::pow(C5616, 5) * bs[5] * C5651))) /
        std::pow(C5553, 2);
    const double C1793 =
        (C5660 * (be * C5623 + C5645 * C5656)) / std::pow(C5553, 2);
    const double C2369 =
        (2 * (be * C5623 + C5645 * C5656) + be * (C5623 + C5636 * C5690) +
         C5645 * (C5656 + be * C5645 * C5636 +
                  C5645 * (be * C5636 +
                           C5645 * std::pow(C5616, 5) * bs[5] * C5651))) /
        std::pow(C5553, 2);
    const double C2657 =
        (be * C5623 + C5645 * C5656 +
         (be * C5636 + C5645 * std::pow(C5616, 5) * bs[5] * C5651) * C5731) /
        std::pow(C5553, 2);
    const double C3557 =
        (C5660 *
         (C5656 + be * C5866 +
          C5645 * (be * C5636 + C5645 * std::pow(C5616, 5) * bs[5] * C5651))) /
        std::pow(C5553, 2);
    const double C4370 =
        (2 * C5660 * C5656 +
         C5660 * (C5656 + std::pow(C5616, 5) * bs[5] * C5651 * C5731)) /
        std::pow(C5553, 2);
    const double C213 =
        (2 * (be * C5681 + C5610 * C5685) + be * (C5681 + C5686 * C5614) +
         C5610 * (C5685 + be * C5610 * C5686 +
                  C5610 * (be * C5686 +
                           C5610 * std::pow(C5616, 5) * bs[5] * C5680))) /
        std::pow(C5553, 2);
    const double C553 = (ae * (C5610 * C5622 + C5613 * be) +
                         C5645 * (be * C5681 + C5610 * C5685)) /
                        std::pow(C5553, 2);
    const double C554 = (C5619 * C5615 * C5680 + ae * C5645 * C5622 +
                         C5645 * (ae * C5622 + C5645 * C5685)) /
                        std::pow(C5553, 2);
    const double C854 =
        (C5660 * (be * C5681 + C5610 * C5685)) / std::pow(C5553, 2);
    const double C855 =
        (C5619 * C5615 * C5680 + C5685 * C5731) / std::pow(C5553, 2);
    const double C856 =
        (be * C5681 + C5610 * C5685 +
         (be * C5686 + C5610 * std::pow(C5616, 5) * bs[5] * C5680) * C5731) /
        std::pow(C5553, 2);
    const double C1519 =
        (C5660 *
         (C5685 + be * C5758 +
          C5610 * (be * C5686 + C5610 * std::pow(C5616, 5) * bs[5] * C5680))) /
        std::pow(C5553, 2);
    const double C1869 =
        (ae * C5660 * C5622 + C5645 * C5660 * C5685) / std::pow(C5553, 2);
    const double C2433 =
        (2 * (ae * C5622 + C5645 * C5685) + ae * (C5622 + C5635 * C5690) +
         C5645 * (C5685 + ae * C5645 * C5635 +
                  C5645 * (ae * C5635 +
                           C5645 * std::pow(C5616, 5) * bs[5] * C5680))) /
        std::pow(C5553, 2);
    const double C2713 =
        (ae * (C5622 + C5635 * C5731) +
         C5645 * (C5685 + std::pow(C5616, 5) * bs[5] * C5680 * C5731)) /
        std::pow(C5553, 2);
    const double C3633 =
        (C5660 * C5685 + ae * C5660 * C5871 +
         C5645 * (ae * C5660 * C5635 +
                  C5645 * C5660 * std::pow(C5616, 5) * bs[5] * C5680)) /
        std::pow(C5553, 2);
    const double C4434 =
        (2 * C5660 * C5685 +
         C5660 * (C5685 + std::pow(C5616, 5) * bs[5] * C5680 * C5731)) /
        std::pow(C5553, 2);
    const double C171 =
        (2 * (ae * C5667 + C5610 * C5671) + ae * (C5667 + C5672 * C5614) +
         C5610 * (C5671 + ae * C5610 * C5672 +
                  C5610 * (ae * C5672 +
                           C5610 * std::pow(C5616, 5) * bs[5] * C5666))) /
        std::pow(C5553, 2);
    const double C519 =
        (C5645 * (ae * C5667 + C5610 * C5671)) / std::pow(C5553, 2);
    const double C520 =
        (C5619 * C5615 * C5666 + C5671 * C5690) / std::pow(C5553, 2);
    const double C521 =
        (ae * C5667 + C5610 * C5671 +
         (ae * C5672 + C5610 * std::pow(C5616, 5) * bs[5] * C5666) * C5690) /
        std::pow(C5553, 2);
    const double C820 = (be * (C5610 * C5623 + C5613 * ae) +
                         C5660 * (ae * C5667 + C5610 * C5671)) /
                        std::pow(C5553, 2);
    const double C821 = (C5619 * C5615 * C5666 + be * C5660 * C5623 +
                         C5660 * (be * C5623 + C5660 * C5671)) /
                        std::pow(C5553, 2);
    const double C1128 =
        (C5645 *
         (C5671 + ae * C5763 +
          C5610 * (ae * C5672 + C5610 * std::pow(C5616, 5) * bs[5] * C5666))) /
        std::pow(C5553, 2);
    const double C1831 =
        (be * C5645 * C5623 + C5660 * C5645 * C5671) / std::pow(C5553, 2);
    const double C2397 =
        (2 * C5645 * C5671 +
         C5645 * (C5671 + std::pow(C5616, 5) * bs[5] * C5666 * C5690)) /
        std::pow(C5553, 2);
    const double C2685 =
        (C5645 * C5671 + be * C5660 * C5866 +
         C5660 * (be * C5866 +
                  C5660 * C5645 * std::pow(C5616, 5) * bs[5] * C5666)) /
        std::pow(C5553, 2);
    const double C3593 =
        (be * (C5623 + C5636 * C5690) +
         C5660 * (C5671 + std::pow(C5616, 5) * bs[5] * C5666 * C5690)) /
        std::pow(C5553, 2);
    const double C4406 =
        (2 * (be * C5623 + C5660 * C5671) + be * (C5623 + C5636 * C5731) +
         C5660 * (C5671 + be * C5660 * C5636 +
                  C5660 * (be * C5636 +
                           C5660 * std::pow(C5616, 5) * bs[5] * C5666))) /
        std::pow(C5553, 2);
    const double C288 =
        (2 * C5610 * C5704 +
         C5610 * (C5704 + std::pow(C5616, 5) * bs[5] * C5701 * C5614)) /
        std::pow(C5553, 2);
    const double C613 =
        (ae * C5610 * C5667 + C5645 * C5610 * C5704) / std::pow(C5553, 2);
    const double C614 = (C5619 * C5615 * C5701 + ae * C5645 * C5667 +
                         C5645 * (ae * C5667 + C5645 * C5704)) /
                        std::pow(C5553, 2);
    const double C615 =
        (C5610 * C5704 + ae * C5645 * C5763 +
         C5645 * (ae * C5763 +
                  C5645 * C5610 * std::pow(C5616, 5) * bs[5] * C5701)) /
        std::pow(C5553, 2);
    const double C914 =
        (be * C5610 * C5681 + C5660 * C5610 * C5704) / std::pow(C5553, 2);
    const double C915 = (C5619 * C5615 * C5701 + be * C5660 * C5681 +
                         C5660 * (be * C5681 + C5660 * C5704)) /
                        std::pow(C5553, 2);
    const double C916 =
        (C5610 * C5704 + be * C5660 * C5758 +
         C5660 * (be * C5758 +
                  C5660 * C5610 * std::pow(C5616, 5) * bs[5] * C5701)) /
        std::pow(C5553, 2);
    const double C1245 =
        (ae * (C5667 + C5672 * C5614) +
         C5645 * (C5704 + std::pow(C5616, 5) * bs[5] * C5701 * C5614)) /
        std::pow(C5553, 2);
    const double C1596 =
        (be * (C5681 + C5686 * C5614) +
         C5660 * (C5704 + std::pow(C5616, 5) * bs[5] * C5701 * C5614)) /
        std::pow(C5553, 2);
    const double C1941 = (ae * (C5660 * C5667 + C5613 * be) +
                          C5645 * (be * C5681 + C5660 * C5704)) /
                         std::pow(C5553, 2);
    const double C2495 =
        (2 * (ae * C5667 + C5645 * C5704) + ae * (C5667 + C5672 * C5690) +
         C5645 * (C5704 + ae * C5645 * C5672 +
                  C5645 * (ae * C5672 +
                           C5645 * std::pow(C5616, 5) * bs[5] * C5701))) /
        std::pow(C5553, 2);
    const double C4512 =
        (2 * (be * C5681 + C5660 * C5704) + be * (C5681 + C5686 * C5731) +
         C5660 * (C5704 + be * C5660 * C5686 +
                  C5660 * (be * C5686 +
                           C5660 * std::pow(C5616, 5) * bs[5] * C5701))) /
        std::pow(C5553, 2);
    const double C326 =
        (2 * (be * C5713 + C5610 * C5717) + be * (C5713 + C5718 * C5614) +
         C5610 * (C5717 + be * C5610 * C5718 +
                  C5610 * (be * C5718 +
                           C5610 * std::pow(C5616, 5) * bs[5] * C5712))) /
        std::pow(C5553, 2);
    const double C647 =
        (C5645 * (be * C5713 + C5610 * C5717)) / std::pow(C5553, 2);
    const double C648 =
        (C5619 * C5615 * C5712 + C5717 * C5690) / std::pow(C5553, 2);
    const double C649 =
        (be * C5713 + C5610 * C5717 +
         (be * C5718 + C5610 * std::pow(C5616, 5) * bs[5] * C5712) * C5690) /
        std::pow(C5553, 2);
    const double C948 = (ae * (C5610 * C5622 + C5613 * be) +
                         C5660 * (be * C5713 + C5610 * C5717)) /
                        std::pow(C5553, 2);
    const double C949 = (C5619 * C5615 * C5712 + ae * C5660 * C5622 +
                         C5660 * (ae * C5622 + C5660 * C5717)) /
                        std::pow(C5553, 2);
    const double C1283 =
        (C5645 *
         (C5717 + be * C5772 +
          C5610 * (be * C5718 + C5610 * std::pow(C5616, 5) * bs[5] * C5712))) /
        std::pow(C5553, 2);
    const double C1979 =
        (ae * C5645 * C5622 + C5660 * C5645 * C5717) / std::pow(C5553, 2);
    const double C2527 =
        (2 * C5645 * C5717 +
         C5645 * (C5717 + std::pow(C5616, 5) * bs[5] * C5712 * C5690)) /
        std::pow(C5553, 2);
    const double C2795 =
        (C5645 * C5717 + ae * C5660 * C5871 +
         C5660 * (ae * C5871 +
                  C5660 * C5645 * std::pow(C5616, 5) * bs[5] * C5712)) /
        std::pow(C5553, 2);
    const double C3745 =
        (ae * (C5622 + C5635 * C5690) +
         C5660 * (C5717 + std::pow(C5616, 5) * bs[5] * C5712 * C5690)) /
        std::pow(C5553, 2);
    const double C4540 =
        (2 * (ae * C5622 + C5660 * C5717) + ae * (C5622 + C5635 * C5731) +
         C5660 * (C5717 + ae * C5660 * C5635 +
                  C5660 * (ae * C5635 +
                           C5660 * std::pow(C5616, 5) * bs[5] * C5712))) /
        std::pow(C5553, 2);
    const double C356 =
        (2 * C5610 * C5727 +
         C5610 * (C5727 + std::pow(C5616, 5) * bs[5] * C5724 * C5614)) /
        std::pow(C5553, 2);
    const double C677 =
        (be * C5610 * C5713 + C5645 * C5610 * C5727) / std::pow(C5553, 2);
    const double C678 = (C5619 * C5615 * C5724 + be * C5645 * C5713 +
                         C5645 * (be * C5713 + C5645 * C5727)) /
                        std::pow(C5553, 2);
    const double C679 =
        (C5610 * C5727 + be * C5645 * C5772 +
         C5645 * (be * C5772 +
                  C5645 * C5610 * std::pow(C5616, 5) * bs[5] * C5724)) /
        std::pow(C5553, 2);
    const double C978 =
        (ae * C5610 * C5652 + C5660 * C5610 * C5727) / std::pow(C5553, 2);
    const double C979 = (C5619 * C5615 * C5724 + ae * C5660 * C5652 +
                         C5660 * (ae * C5652 + C5660 * C5727)) /
                        std::pow(C5553, 2);
    const double C980 =
        (C5610 * C5727 + ae * C5660 * C5757 +
         C5660 * (ae * C5757 +
                  C5660 * C5610 * std::pow(C5616, 5) * bs[5] * C5724)) /
        std::pow(C5553, 2);
    const double C1318 =
        (be * (C5713 + C5718 * C5614) +
         C5645 * (C5727 + std::pow(C5616, 5) * bs[5] * C5724 * C5614)) /
        std::pow(C5553, 2);
    const double C1669 =
        (ae * (C5652 + C5657 * C5614) +
         C5660 * (C5727 + std::pow(C5616, 5) * bs[5] * C5724 * C5614)) /
        std::pow(C5553, 2);
    const double C2015 = (ae * (C5645 * C5652 + C5613 * be) +
                          C5660 * (be * C5713 + C5645 * C5727)) /
                         std::pow(C5553, 2);
    const double C2558 =
        (2 * (be * C5713 + C5645 * C5727) + be * (C5713 + C5718 * C5690) +
         C5645 * (C5727 + be * C5645 * C5718 +
                  C5645 * (be * C5718 +
                           C5645 * std::pow(C5616, 5) * bs[5] * C5724))) /
        std::pow(C5553, 2);
    const double C4571 =
        (2 * (ae * C5652 + C5660 * C5727) + ae * (C5652 + C5657 * C5731) +
         C5660 * (C5727 + ae * C5660 * C5657 +
                  C5660 * (ae * C5657 +
                           C5660 * std::pow(C5616, 5) * bs[5] * C5724))) /
        std::pow(C5553, 2);
    const double C6140 = C6060 * C6130;
    const double C71 = (C6060 * std::pow(C6130, 2)) / C6131 + C6060 / C6132;
    const double C73 = C6141 * C6060;
    const double C1048 = C6139 * C6060;
    const double C6142 = C6072 * C6133;
    const double C434 = (C6072 * std::pow(C6133, 2)) / C6131 + C6072 / C6132;
    const double C436 = C6141 * C6072;
    const double C1046 = C6139 * C6072;
    const double C6143 = C6086 * C6134;
    const double C736 = (C6086 * std::pow(C6134, 2)) / C6131 + C6086 / C6132;
    const double C738 = C6141 * C6086;
    const double C1399 = C6139 * C6086;
    const double C75 =
        -(((-4 * C5559) / C5553 -
           (C5554 * (C6150 - (C5554 * 2 * C5559) / C5553) * 2 * C5557) /
               C5553) *
          be) /
        C5553;
    const double C76 = (-(2 * C5559) / C5553) / (2 * C5553) - (0 * be) / C5553;
    const double C77 =
        (-((C6150 - (C5554 * 2 * C5559) / C5553) * 2 * C5557) / C5553) /
        (2 * C5553);
    const double C2082 = -(2 * C5559) / C5553;
    const double C2083 =
        -((C6150 - (C5554 * 2 * C5559) / C5553) * 2 * C5557) / C5553;
    const double C2190 =
        -(((-4 * C5588) / C5553 -
           (C5571 * (C6152 - (C5571 * 2 * C5588) / C5553) * 2 * C5557) /
               C5553) *
          be) /
        C5553;
    const double C2191 =
        (-((C6152 - (C5571 * 2 * C5588) / C5553) * 2 * C5557) / C5553) /
        (2 * C5553);
    const double C134 = C120 * C80;
    const double C133 = C120 * C85;
    const double C131 = C120 * C79;
    const double C248 = C120 * C207;
    const double C246 = C120 * C122;
    const double C359 = C120 * C320;
    const double C1090 = C120 * C438;
    const double C1441 = C120 * C739;
    const double C4376 = C120 * C741;
    const double C4375 = C120 * C746;
    const double C4373 = C120 * C740;
    const double C4473 = C120 * C849;
    const double C4471 = C120 * C781;
    const double C4574 = C120 * C943;
    const double C5298 = C120 * C1749;
    const double C251 = C240 * C80;
    const double C247 = C240 * C79;
    const double C1206 = C240 * C438;
    const double C1557 = C240 * C739;
    const double C4476 = C240 * C741;
    const double C4472 = C240 * C740;
    const double C5405 = C240 * C1749;
    const double C4063 =
        -(((-4 * C5600) / C5553 -
           (C5574 * (C6151 - (C5574 * 2 * C5600) / C5553) * 2 * C5557) /
               C5553) *
          be) /
        C5553;
    const double C4064 =
        (-((C6151 - (C5574 * 2 * C5600) / C5553) * 2 * C5557) / C5553) /
        (2 * C5553);
    const double C177 = C163 * C80;
    const double C176 = C163 * C85;
    const double C174 = C163 * C79;
    const double C291 = C163 * C207;
    const double C395 = C163 * C320;
    const double C393 = C163 * C165;
    const double C1130 = C163 * C438;
    const double C1481 = C163 * C739;
    const double C2403 = C163 * C440;
    const double C2402 = C163 * C445;
    const double C2400 = C163 * C439;
    const double C2498 = C163 * C548;
    const double C2589 = C163 * C642;
    const double C2587 = C163 * C514;
    const double C3595 = C163 * C1749;
    const double C398 = C387 * C80;
    const double C394 = C387 * C79;
    const double C1358 = C387 * C438;
    const double C1709 = C387 * C739;
    const double C2592 = C387 * C440;
    const double C2588 = C387 * C439;
    const double C3820 = C387 * C1749;
    const double C136 = C120 * C87;
    const double C179 = C163 * C87;
    const double C1092 = C120 * C443;
    const double C1132 = C163 * C443;
    const double C2405 = C163 * C447;
    const double C1443 = C120 * C744;
    const double C1483 = C163 * C744;
    const double C4378 = C120 * C748;
    const double C3597 = C163 * C1752;
    const double C5300 = C120 * C1752;
    const double C2996 = C6150 * C442;
    const double C2440 = C6150 * C446;
    const double C5054 = C6150 * C743;
    const double C4441 = C6150 * C747;
    const double C3636 = C6150 * C1751;
    const double C5642 = C5639 + C5633;
    const double C5858 = C5856 + C5633;
    const double C5898 = C5896 + C5633;
    const double C1942 =
        (ae * (C5660 * C5763 + C5631 * be) +
         C5645 * (be * C5758 +
                  C5660 * C5610 * std::pow(C5616, 5) * bs[5] * C5701)) /
        std::pow(C5553, 2);
    const double C2016 =
        (ae * (C5645 * C5757 + C5631 * be) +
         C5660 * (be * C5772 +
                  C5645 * C5610 * std::pow(C5616, 5) * bs[5] * C5724)) /
        std::pow(C5553, 2);
    const double C483 = (C5610 * C5652 + C5645 * (C5645 * C5757 + C5631 * be) +
                         C5645 * C5631 * be) /
                        C5553;
    const double C551 = (C5610 * C5681 + C5645 * (C5645 * C5758 + C5631 * ae) +
                         C5645 * C5631 * ae) /
                        C5553;
    const double C818 = (C5610 * C5667 + C5660 * (C5660 * C5763 + C5631 * be) +
                         C5660 * C5631 * be) /
                        C5553;
    const double C946 = (C5610 * C5713 + C5660 * (C5660 * C5772 + C5631 * ae) +
                         C5660 * C5631 * ae) /
                        C5553;
    const double C1792 = (C5660 * (C5645 * C5757 + C5631 * be)) / C5553;
    const double C1830 = (C5660 * C5645 * C5763 + C5645 * C5631 * be) / C5553;
    const double C1868 = (C5660 * (C5645 * C5758 + C5631 * ae)) / C5553;
    const double C1978 = (C5660 * C5645 * C5772 + C5645 * C5631 * ae) / C5553;
    const double C441 = C5610 * C5613 + C5631 * C5690;
    const double C742 = C5610 * C5613 + C5631 * C5731;
    const double C1750 = C5660 * C5645 * C5631;
    const double C5641 = C5638 + C5630;
    const double C5857 = C5854 + C5630;
    const double C5897 = C5894 + C5630;
    const double C2767 =
        (ae * (C5667 + C5660 * (C5660 * C5672 + C5630) + C5660 * C5625 * be) +
         C5645 * (C5704 + be * C5660 * C5686 +
                  C5660 * (be * C5686 +
                           C5660 * std::pow(C5616, 5) * bs[5] * C5701))) /
        std::pow(C5553, 2);
    const double C5640 = C5637 * C5557;
    const double C5695 = C5694 * C5557;
    const double C5736 = C5735 * C5557;
    const double C3707 =
        (be * C5681 + C5660 * C5704 + ae * (C5660 * C5874 + C5855 * be) +
         C5645 * (ae * (C5660 * C5672 + C5630) +
                  C5645 * (be * C5686 +
                           C5660 * std::pow(C5616, 5) * bs[5] * C5701))) /
        std::pow(C5553, 2);
    const double C2684 = (C5645 * C5667 + C5660 * (C5660 * C5874 + C5855 * be) +
                          C5660 * C5855 * be) /
                         C5553;
    const double C2794 = (C5645 * C5713 + C5660 * (C5660 * C5875 + C5855 * ae) +
                          C5660 * C5855 * ae) /
                         C5553;
    const double C2626 = C5645 * C5613 + C5855 * C5731;
    const double C253 = C6152 * C243;
    const double C400 = C6151 * C390;
    const double C137 = C6152 * C127;
    const double C135 = C6152 * C123;
    const double C250 = C120 * C123;
    const double C1091 = C6152 * C481;
    const double C1205 = C120 * C481;
    const double C1442 = C6152 * C782;
    const double C1556 = C120 * C782;
    const double C4377 = C6152 * C783;
    const double C4475 = C120 * C783;
    const double C5299 = C6152 * C1791;
    const double C5404 = C120 * C1791;
    const double C180 = C6151 * C170;
    const double C178 = C6151 * C166;
    const double C397 = C163 * C166;
    const double C1131 = C6151 * C515;
    const double C1357 = C163 * C515;
    const double C2404 = C6151 * C516;
    const double C2591 = C163 * C516;
    const double C1482 = C6151 * C816;
    const double C1708 = C163 * C816;
    const double C3596 = C6151 * C1829;
    const double C3819 = C163 * C1829;
    const double C252 = C120 * C208;
    const double C292 = C163 * C208;
    const double C1207 = C120 * C549;
    const double C1247 = C163 * C549;
    const double C2499 = C163 * C550;
    const double C1558 = C120 * C850;
    const double C1598 = C163 * C850;
    const double C4477 = C120 * C851;
    const double C3709 = C163 * C1867;
    const double C5406 = C120 * C1867;
    const double C360 = C120 * C321;
    const double C399 = C163 * C321;
    const double C1320 = C120 * C643;
    const double C1359 = C163 * C643;
    const double C2593 = C163 * C644;
    const double C1671 = C120 * C944;
    const double C1710 = C163 * C944;
    const double C4575 = C120 * C945;
    const double C3821 = C163 * C1977;
    const double C5514 = C120 * C1977;
    const double C1093 = C6152 * C485;
    const double C1444 = C6152 * C786;
    const double C4379 = C6152 * C787;
    const double C5301 = C6152 * C1793;
    const double C2998 = C6150 * C553;
    const double C2442 = C6150 * C554;
    const double C5056 = C6150 * C854;
    const double C4443 = C6150 * C855;
    const double C3638 = C6150 * C1869;
    const double C1133 = C6151 * C519;
    const double C2406 = C6151 * C520;
    const double C1484 = C6151 * C820;
    const double C3598 = C6151 * C1831;
    const double C1248 = C6151 * C613;
    const double C2500 = C6151 * C614;
    const double C1599 = C6151 * C914;
    const double C3710 = C6151 * C1941;
    const double C3102 = C6150 * C647;
    const double C2532 = C6150 * C648;
    const double C5161 = C6150 * C948;
    const double C4545 = C6150 * C949;
    const double C3748 = C6150 * C1979;
    const double C1321 = C6152 * C677;
    const double C1672 = C6152 * C978;
    const double C4576 = C6152 * C979;
    const double C5515 = C6152 * C2015;
    const double C72 = (2 * C6139 * C6140) / C6055;
    const double C1047 = C6140 / C6055;
    const double C435 = (2 * C6139 * C6142) / C6055;
    const double C1045 = C6142 / C6055;
    const double C737 = (2 * C6139 * C6143) / C6055;
    const double C1398 = C6143 / C6055;
    const double C2333 = C2082 * C447;
    const double C2331 = C2082 * C446;
    const double C2329 = C2082 * C445;
    const double C2327 = C2082 * C444;
    const double C2441 = C2082 * C550;
    const double C2439 = C2082 * C440;
    const double C2438 = C2082 * C548;
    const double C2436 = C2082 * C439;
    const double C2531 = C2082 * C644;
    const double C2530 = C2082 * C642;
    const double C2887 = C2082 * C443;
    const double C2885 = C2082 * C442;
    const double C2997 = C2082 * C549;
    const double C2995 = C2082 * C438;
    const double C3101 = C2082 * C643;
    const double C3517 = C2082 * C1752;
    const double C3515 = C2082 * C1751;
    const double C3637 = C2082 * C1867;
    const double C3635 = C2082 * C1749;
    const double C3747 = C2082 * C1977;
    const double C4336 = C2082 * C748;
    const double C4334 = C2082 * C747;
    const double C4332 = C2082 * C746;
    const double C4330 = C2082 * C745;
    const double C4442 = C2082 * C851;
    const double C4440 = C2082 * C741;
    const double C4439 = C2082 * C849;
    const double C4437 = C2082 * C740;
    const double C4544 = C2082 * C945;
    const double C4543 = C2082 * C943;
    const double C4946 = C2082 * C744;
    const double C4944 = C2082 * C743;
    const double C5055 = C2082 * C850;
    const double C5053 = C2082 * C739;
    const double C5160 = C2082 * C944;
    const double C2332 = C2083 * C440;
    const double C2328 = C2083 * C439;
    const double C2886 = C2083 * C438;
    const double C3516 = C2083 * C1749;
    const double C4335 = C2083 * C741;
    const double C4331 = C2083 * C740;
    const double C4945 = C2083 * C739;
    const double C254 = C246 - C247;
    const double C4479 = C4471 - C4472;
    const double C401 = C393 - C394;
    const double C2595 = C2587 - C2588;
    const double C487 =
        (ae * C5652 + C5610 * C5656 + be * C5645 * C5642 +
         C5645 *
             (be * C5642 + C5645 * (ae * C5657 + C5610 * std::pow(C5616, 5) *
                                                     bs[5] * C5651))) /
        std::pow(C5553, 2);
    const double C822 =
        (ae * C5667 + C5610 * C5671 + be * C5660 * C5642 +
         C5660 *
             (be * C5642 + C5660 * (ae * C5672 + C5610 * std::pow(C5616, 5) *
                                                     bs[5] * C5666))) /
        std::pow(C5553, 2);
    const double C1088 =
        (be * (C5623 + C5610 * C5642 + C5631 * ae) +
         C5645 * (C5656 + ae * C5757 +
                  C5610 * (ae * C5657 +
                           C5610 * std::pow(C5616, 5) * bs[5] * C5651))) /
        std::pow(C5553, 2);
    const double C1479 =
        (be * (C5623 + C5610 * C5642 + C5631 * ae) +
         C5660 * (C5671 + ae * C5763 +
                  C5610 * (ae * C5672 +
                           C5610 * std::pow(C5616, 5) * bs[5] * C5666))) /
        std::pow(C5553, 2);
    const double C1794 =
        (C5660 *
         (be * C5642 +
          C5645 * (ae * C5657 + C5610 * std::pow(C5616, 5) * bs[5] * C5651))) /
        std::pow(C5553, 2);
    const double C1832 =
        (be * C5645 * C5642 +
         C5660 * C5645 *
             (ae * C5672 + C5610 * std::pow(C5616, 5) * bs[5] * C5666)) /
        std::pow(C5553, 2);
    const double C89 = (2 * (C5610 * C5623 + C5613 * ae) +
                        C5610 * (C5623 + C5610 * C5642 + C5631 * ae) +
                        (C5613 + C5625 * C5614) * ae) /
                       C5553;
    const double C449 = (C5610 * C5623 + C5613 * ae + C5642 * C5690) / C5553;
    const double C750 = (C5610 * C5623 + C5613 * ae + C5642 * C5731) / C5553;
    const double C1051 = (C5645 * (C5623 + C5610 * C5642 + C5631 * ae)) / C5553;
    const double C1402 = (C5660 * (C5623 + C5610 * C5642 + C5631 * ae)) / C5553;
    const double C1754 = (C5660 * C5645 * C5642) / C5553;
    const double C2432 = (2 * (C5645 * C5681 + C5613 * ae) +
                          C5645 * (C5681 + C5645 * C5858 + C5855 * ae) +
                          (C5613 + C5625 * C5690) * ae) /
                         C5553;
    const double C2712 = (C5645 * C5681 + C5613 * ae + C5858 * C5731) / C5553;
    const double C3632 = (C5660 * (C5681 + C5645 * C5858 + C5855 * ae)) / C5553;
    const double C4539 = (2 * (C5660 * C5713 + C5613 * ae) +
                          C5660 * (C5713 + C5660 * C5898 + C5895 * ae) +
                          (C5613 + C5625 * C5731) * ae) /
                         C5553;
    const double C555 =
        (be * C5681 + C5610 * C5685 + ae * C5645 * C5641 +
         C5645 *
             (ae * C5641 + C5645 * (be * C5686 + C5610 * std::pow(C5616, 5) *
                                                     bs[5] * C5680))) /
        std::pow(C5553, 2);
    const double C950 =
        (be * C5713 + C5610 * C5717 + ae * C5660 * C5641 +
         C5660 *
             (ae * C5641 + C5660 * (be * C5718 + C5610 * std::pow(C5616, 5) *
                                                     bs[5] * C5712))) /
        std::pow(C5553, 2);
    const double C1168 =
        (ae * (C5622 + C5610 * C5641 + C5631 * be) +
         C5645 * (C5685 + be * C5758 +
                  C5610 * (be * C5686 +
                           C5610 * std::pow(C5616, 5) * bs[5] * C5680))) /
        std::pow(C5553, 2);
    const double C1634 =
        (ae * (C5622 + C5610 * C5641 + C5631 * be) +
         C5660 * (C5717 + be * C5772 +
                  C5610 * (be * C5718 +
                           C5610 * std::pow(C5616, 5) * bs[5] * C5712))) /
        std::pow(C5553, 2);
    const double C1870 =
        (ae * C5660 * C5641 +
         C5645 * C5660 *
             (be * C5686 + C5610 * std::pow(C5616, 5) * bs[5] * C5680)) /
        std::pow(C5553, 2);
    const double C1980 =
        (ae * C5645 * C5641 +
         C5660 * C5645 *
             (be * C5718 + C5610 * std::pow(C5616, 5) * bs[5] * C5712)) /
        std::pow(C5553, 2);
    const double C88 = (2 * (C5610 * C5622 + C5613 * be) +
                        C5610 * (C5622 + C5610 * C5641 + C5631 * be) +
                        (C5613 + C5625 * C5614) * be) /
                       C5553;
    const double C448 = (C5610 * C5622 + C5613 * be + C5641 * C5690) / C5553;
    const double C749 = (C5610 * C5622 + C5613 * be + C5641 * C5731) / C5553;
    const double C1050 = (C5645 * (C5622 + C5610 * C5641 + C5631 * be)) / C5553;
    const double C1401 = (C5660 * (C5622 + C5610 * C5641 + C5631 * be)) / C5553;
    const double C1753 = (C5660 * C5645 * C5641) / C5553;
    const double C2822 =
        (be * C5713 + C5645 * C5727 + ae * C5660 * C5857 +
         C5660 *
             (ae * C5857 + C5660 * (be * C5718 + C5645 * std::pow(C5616, 5) *
                                                     bs[5] * C5724))) /
        std::pow(C5553, 2);
    const double C3782 =
        (ae * (C5652 + C5645 * C5857 + C5855 * be) +
         C5660 * (C5727 + be * C5875 +
                  C5645 * (be * C5718 +
                           C5645 * std::pow(C5616, 5) * bs[5] * C5724))) /
        std::pow(C5553, 2);
    const double C2368 = (2 * (C5645 * C5652 + C5613 * be) +
                          C5645 * (C5652 + C5645 * C5857 + C5855 * be) +
                          (C5613 + C5625 * C5690) * be) /
                         C5553;
    const double C2656 = (C5645 * C5652 + C5613 * be + C5857 * C5731) / C5553;
    const double C3556 = (C5660 * (C5652 + C5645 * C5857 + C5855 * be)) / C5553;
    const double C4405 = (2 * (C5660 * C5667 + C5613 * be) +
                          C5660 * (C5667 + C5660 * C5897 + C5895 * be) +
                          (C5613 + C5625 * C5731) * be) /
                         C5553;
    const double C93 =
        (2 * (ae * C5622 + be * C5623 + C5610 * C5640) +
         ae * (C5622 + C5610 * C5641 + C5631 * be) +
         be * (C5623 + C5610 * C5642 + C5631 * ae) +
         C5610 * (C5640 + ae * C5641 + be * C5642 +
                  C5610 * (ae * C5635 + be * C5636 +
                           C5610 *
                               (C5626 * C5627 +
                                C5614 * bs[5] * std::pow(C5616, 5)) *
                               C5557))) /
        std::pow(C5553, 2);
    const double C450 =
        (ae * C5645 * C5622 + be * C5645 * C5623 + C5610 * C5645 * C5640) /
        std::pow(C5553, 2);
    const double C452 =
        ((C5613 + C5614 * C5615 * C5619) * C5557 + C5640 * C5690) /
        std::pow(C5553, 2);
    const double C453 =
        (ae * (C5622 + C5635 * C5690) + be * (C5623 + C5636 * C5690) +
         C5610 * (C5640 + (C5626 * C5627 + C5614 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5690)) /
        std::pow(C5553, 2);
    const double C751 =
        (ae * C5660 * C5622 + be * C5660 * C5623 + C5610 * C5660 * C5640) /
        std::pow(C5553, 2);
    const double C753 =
        ((C5613 + C5614 * C5615 * C5619) * C5557 + C5640 * C5731) /
        std::pow(C5553, 2);
    const double C754 =
        (ae * (C5622 + C5635 * C5731) + be * (C5623 + C5636 * C5731) +
         C5610 * (C5640 + (C5626 * C5627 + C5614 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5731)) /
        std::pow(C5553, 2);
    const double C1052 =
        (C5645 * C5640 + ae * C5645 * C5641 + be * C5645 * C5642 +
         C5610 * (ae * C5645 * C5635 + be * C5645 * C5636 +
                  C5610 * C5645 *
                      (C5626 * C5627 + C5614 * bs[5] * std::pow(C5616, 5)) *
                      C5557)) /
        std::pow(C5553, 2);
    const double C1403 =
        (C5660 * C5640 + ae * C5660 * C5641 + be * C5660 * C5642 +
         C5610 * (ae * C5660 * C5635 + be * C5660 * C5636 +
                  C5610 * C5660 *
                      (C5626 * C5627 + C5614 * bs[5] * std::pow(C5616, 5)) *
                      C5557)) /
        std::pow(C5553, 2);
    const double C1755 = (C5660 * C5645 * C5640) / std::pow(C5553, 2);
    const double C2325 =
        (2 * C5645 * C5640 +
         C5645 * (C5640 + (C5626 * C5627 + C5614 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5690)) /
        std::pow(C5553, 2);
    const double C2629 =
        (C5645 * C5640 +
         C5645 * (C5626 * C5627 + C5614 * bs[5] * std::pow(C5616, 5)) * C5557 *
             C5731) /
        std::pow(C5553, 2);
    const double C3513 =
        (C5660 * (C5640 + (C5626 * C5627 + C5614 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5690)) /
        std::pow(C5553, 2);
    const double C4328 =
        (2 * C5660 * C5640 +
         C5660 * (C5640 + (C5626 * C5627 + C5614 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5731)) /
        std::pow(C5553, 2);
    const double C244 =
        (2 * C5610 * C5695 +
         C5610 * (C5695 + (C5626 * C5627 + C5690 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5614)) /
        std::pow(C5553, 2);
    const double C582 =
        (ae * C5610 * C5652 + be * C5610 * C5681 + C5645 * C5610 * C5695) /
        std::pow(C5553, 2);
    const double C584 =
        ((C5613 + C5690 * C5615 * C5619) * C5557 +
         ae * (C5645 * C5652 + C5613 * be) + be * (C5645 * C5681 + C5613 * ae) +
         C5645 * (ae * C5652 + be * C5681 + C5645 * C5695)) /
        std::pow(C5553, 2);
    const double C585 =
        (C5610 * C5695 + ae * (C5645 * C5757 + C5631 * be) +
         be * (C5645 * C5758 + C5631 * ae) +
         C5645 * (ae * C5757 + be * C5758 +
                  C5645 * C5610 *
                      (C5626 * C5627 + C5690 * bs[5] * std::pow(C5616, 5)) *
                      C5557)) /
        std::pow(C5553, 2);
    const double C883 = (C5660 * C5610 * C5695) / std::pow(C5553, 2);
    const double C885 =
        ((C5613 + C5690 * C5615 * C5619) * C5557 + C5695 * C5731) /
        std::pow(C5553, 2);
    const double C886 =
        (C5610 * C5695 +
         C5610 * (C5626 * C5627 + C5690 * bs[5] * std::pow(C5616, 5)) * C5557 *
             C5731) /
        std::pow(C5553, 2);
    const double C1203 =
        (ae * (C5652 + C5657 * C5614) + be * (C5681 + C5686 * C5614) +
         C5645 * (C5695 + (C5626 * C5627 + C5690 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5614)) /
        std::pow(C5553, 2);
    const double C1554 =
        (C5660 * (C5695 + (C5626 * C5627 + C5690 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5614)) /
        std::pow(C5553, 2);
    const double C1905 =
        (ae * C5660 * C5652 + be * C5660 * C5681 + C5645 * C5660 * C5695) /
        std::pow(C5553, 2);
    const double C2468 =
        (2 * (ae * C5652 + be * C5681 + C5645 * C5695) +
         ae * (C5652 + C5645 * C5857 + C5855 * be) +
         be * (C5681 + C5645 * C5858 + C5855 * ae) +
         C5645 * (C5695 + ae * C5857 + be * C5858 +
                  C5645 * (ae * C5657 + be * C5686 +
                           C5645 *
                               (C5626 * C5627 +
                                C5690 * bs[5] * std::pow(C5616, 5)) *
                               C5557))) /
        std::pow(C5553, 2);
    const double C2740 =
        (ae * (C5652 + C5657 * C5731) + be * (C5681 + C5686 * C5731) +
         C5645 * (C5695 + (C5626 * C5627 + C5690 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5731)) /
        std::pow(C5553, 2);
    const double C3672 =
        (C5660 * C5695 + ae * C5660 * C5857 + be * C5660 * C5858 +
         C5645 * (ae * C5660 * C5657 + be * C5660 * C5686 +
                  C5645 * C5660 *
                      (C5626 * C5627 + C5690 * bs[5] * std::pow(C5616, 5)) *
                      C5557)) /
        std::pow(C5553, 2);
    const double C4469 =
        (2 * C5660 * C5695 +
         C5660 * (C5695 + (C5626 * C5627 + C5690 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5731)) /
        std::pow(C5553, 2);
    const double C391 =
        (2 * C5610 * C5736 +
         C5610 * (C5736 + (C5626 * C5627 + C5731 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5614)) /
        std::pow(C5553, 2);
    const double C706 = (C5645 * C5610 * C5736) / std::pow(C5553, 2);
    const double C708 =
        ((C5613 + C5731 * C5615 * C5619) * C5557 + C5736 * C5690) /
        std::pow(C5553, 2);
    const double C709 =
        (C5610 * C5736 +
         C5610 * (C5626 * C5627 + C5731 * bs[5] * std::pow(C5616, 5)) * C5557 *
             C5690) /
        std::pow(C5553, 2);
    const double C1007 =
        (ae * C5610 * C5667 + be * C5610 * C5713 + C5660 * C5610 * C5736) /
        std::pow(C5553, 2);
    const double C1009 =
        ((C5613 + C5731 * C5615 * C5619) * C5557 +
         ae * (C5660 * C5667 + C5613 * be) + be * (C5660 * C5713 + C5613 * ae) +
         C5660 * (ae * C5667 + be * C5713 + C5660 * C5736)) /
        std::pow(C5553, 2);
    const double C1010 =
        (C5610 * C5736 + ae * (C5660 * C5763 + C5631 * be) +
         be * (C5660 * C5772 + C5631 * ae) +
         C5660 * (ae * C5763 + be * C5772 +
                  C5660 * C5610 *
                      (C5626 * C5627 + C5731 * bs[5] * std::pow(C5616, 5)) *
                      C5557)) /
        std::pow(C5553, 2);
    const double C1355 =
        (C5645 * (C5736 + (C5626 * C5627 + C5731 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5614)) /
        std::pow(C5553, 2);
    const double C1706 =
        (ae * (C5667 + C5672 * C5614) + be * (C5713 + C5718 * C5614) +
         C5660 * (C5736 + (C5626 * C5627 + C5731 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5614)) /
        std::pow(C5553, 2);
    const double C2051 =
        (ae * C5645 * C5667 + be * C5645 * C5713 + C5660 * C5645 * C5736) /
        std::pow(C5553, 2);
    const double C2585 =
        (2 * C5645 * C5736 +
         C5645 * (C5736 + (C5626 * C5627 + C5731 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5690)) /
        std::pow(C5553, 2);
    const double C2849 =
        (C5645 * C5736 + ae * (C5660 * C5874 + C5855 * be) +
         be * (C5660 * C5875 + C5855 * ae) +
         C5660 * (ae * C5874 + be * C5875 +
                  C5660 * C5645 *
                      (C5626 * C5627 + C5731 * bs[5] * std::pow(C5616, 5)) *
                      C5557)) /
        std::pow(C5553, 2);
    const double C3817 =
        (ae * (C5667 + C5672 * C5690) + be * (C5713 + C5718 * C5690) +
         C5660 * (C5736 + (C5626 * C5627 + C5731 * bs[5] * std::pow(C5616, 5)) *
                              C5557 * C5690)) /
        std::pow(C5553, 2);
    const double C4602 =
        (2 * (ae * C5667 + be * C5713 + C5660 * C5736) +
         ae * (C5667 + C5660 * C5897 + C5895 * be) +
         be * (C5713 + C5660 * C5898 + C5895 * ae) +
         C5660 * (C5736 + ae * C5897 + be * C5898 +
                  C5660 * (ae * C5672 + be * C5718 +
                           C5660 *
                               (C5626 * C5627 +
                                C5731 * bs[5] * std::pow(C5616, 5)) *
                               C5557))) /
        std::pow(C5553, 2);
    const double C255 = C250 - C251;
    const double C1209 = C1205 - C1206;
    const double C1560 = C1556 - C1557;
    const double C4480 = C4475 - C4476;
    const double C5408 = C5404 - C5405;
    const double C402 = C397 - C398;
    const double C1361 = C1357 - C1358;
    const double C2596 = C2591 - C2592;
    const double C1712 = C1708 - C1709;
    const double C3823 = C3819 - C3820;
    const double C2336 = C2331 - C2332;
    const double C2335 = C2327 - C2328;
    const double C2889 = C2885 - C2886;
    const double C3519 = C3515 - C3516;
    const double C4339 = C4334 - C4335;
    const double C4338 = C4330 - C4331;
    const double C4948 = C4944 - C4945;
    const double C256 = C254 - C248;
    const double C4481 = C4479 - C4473;
    const double C403 = C401 - C395;
    const double C2597 = C2595 - C2589;
    const double C2888 = C6150 * C450;
    const double C2334 = C6150 * C452;
    const double C4947 = C6150 * C751;
    const double C4337 = C6150 * C753;
    const double C3518 = C6150 * C1755;
    const double C1208 = C6152 * C582;
    const double C1559 = C6152 * C883;
    const double C4478 = C6152 * C885;
    const double C5407 = C6152 * C1905;
    const double C1360 = C6151 * C706;
    const double C2594 = C6151 * C708;
    const double C1711 = C6151 * C1007;
    const double C3822 = C6151 * C2051;
    const double C257 = C255 - C252;
    const double C1210 = C1209 - C1207;
    const double C1561 = C1560 - C1558;
    const double C4482 = C4480 - C4477;
    const double C5409 = C5408 - C5406;
    const double C404 = C402 - C399;
    const double C1362 = C1361 - C1359;
    const double C2598 = C2596 - C2593;
    const double C1713 = C1712 - C1710;
    const double C3824 = C3823 - C3821;
    const double C2338 = C2336 - C2333;
    const double C2337 = C2335 - C2329;
    const double C2890 = C2889 - C2887;
    const double C3520 = C3519 - C3517;
    const double C4341 = C4339 - C4336;
    const double C4340 = C4338 - C4332;
    const double C4949 = C4948 - C4946;
    const double C258 = C256 + C249;
    const double C4483 = C4481 + C4474;
    const double C405 = C403 + C396;
    const double C2599 = C2597 + C2590;
    const double C259 = C257 + C253;
    const double C1211 = C1210 + C1208;
    const double C1562 = C1561 + C1559;
    const double C4484 = C4482 + C4478;
    const double C5410 = C5409 + C5407;
    const double C406 = C404 + C400;
    const double C1363 = C1362 + C1360;
    const double C2600 = C2598 + C2594;
    const double C1714 = C1713 + C1711;
    const double C3825 = C3824 + C3822;
    const double C2340 = C2338 + C2334;
    const double C2339 = C2337 + C2330;
    const double C2891 = C2890 + C2888;
    const double C3521 = C3520 + C3518;
    const double C4343 = C4341 + C4337;
    const double C4342 = C4340 + C4333;
    const double C4950 = C4949 + C4947;
    const double C4485 = C4483 * C6150;
    const double C407 = C405 * C6152;
    const double C5091 = C1562 * C6150;
    const double C4486 = C4484 * C6150;
    const double C5411 = C5410 * C6150;
    const double C408 = C406 * C6152;
    const double C1364 = C1363 * C6152;
    const double C1715 = C1714 * C6152;
    const double C2342 = C2340 * C6151;
    const double C2341 = C2339 * C6151;
    const double C2892 = C2891 * C6151;
    const double C3522 = C3521 * C6151;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                     C77 * C79 - C76 * C85 + C66 * C91) *
                        C6151 * C6152 * C6086 * C1045 -
                    (C76 * C442 - C77 * C438 - C76 * C443 + C66 * C450 +
                     C74 * C444 - C75 * C439 - C74 * C445 + C65 * C451) *
                        C6151 * C6152 * C6086 * C1046) *
                       C1047 +
                   ((C74 * C442 - C75 * C438 - C74 * C443 + C65 * C450 +
                     C76 * C1050 - C77 * C1049 - C76 * C1051 + C66 * C1052) *
                        C6151 * C6152 * C6086 * C1046 -
                    (C76 * C86 - C77 * C80 - C76 * C87 + C66 * C92 + C74 * C84 -
                     C75 * C79 - C74 * C85 + C65 * C91) *
                        C6151 * C6152 * C6086 * C1045) *
                       C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6152 * C121 - C120 * C78) * C74 +
                     (C6152 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                     (C132 - C133) * C66) *
                        C6151 * C6086 * C1045 +
                    ((C120 * C439 - C6152 * C480) * C74 +
                     (C120 * C445 - C6152 * C484) * C65 +
                     (C1090 - C1091) * C76 + (C1092 - C1093) * C66) *
                        C6151 * C6086 * C1046) *
                       C1047 +
                   (((C131 - C130) * C74 + (C133 - C132) * C65 +
                     (C134 - C135) * C76 + (C136 - C137) * C66) *
                        C6151 * C6086 * C1045 +
                    ((C1091 - C1090) * C74 + (C1093 - C1092) * C65 +
                     (C6152 * C1087 - C120 * C1049) * C76 +
                     (C6152 * C1088 - C120 * C1051) * C66) *
                        C6151 * C6086 * C1046) *
                       C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6151 * C164 - C163 * C78) * C74 +
                     (C6151 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                     (C175 - C176) * C66) *
                        C6152 * C6086 * C1045 +
                    ((C163 * C439 - C6151 * C514) * C74 +
                     (C163 * C445 - C6151 * C518) * C65 +
                     (C1130 - C1131) * C76 + (C1132 - C1133) * C66) *
                        C6152 * C6086 * C1046) *
                       C1047 +
                   (((C174 - C173) * C74 + (C176 - C175) * C65 +
                     (C177 - C178) * C76 + (C179 - C180) * C66) *
                        C6152 * C6086 * C1045 +
                    ((C1131 - C1130) * C74 + (C1133 - C1132) * C65 +
                     (C6151 * C1127 - C163 * C1049) * C76 +
                     (C6151 * C1128 - C163 * C1051) * C66) *
                        C6152 * C6086 * C1046) *
                       C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
            (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C6152) *
               C6151 * C6086 * C1045 +
           ((C74 * C439 - C65 * C444 + C76 * C438 - C66 * C442) * C120 +
            (C74 * C548 - C65 * C552 + C76 * C549 - C66 * C553) * C6152) *
               C6151 * C6086 * C1046) *
              C1047 +
          (((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C120 +
            (C74 * C207 - C65 * C211 + C76 * C208 - C66 * C212) * C6152) *
               C6151 * C6086 * C1045 +
           ((C65 * C442 - C74 * C438 + C66 * C1050 - C76 * C1049) * C120 +
            (C65 * C553 - C74 * C549 + C66 * C1168 - C76 * C1167) * C6152) *
               C6151 * C6086 * C1046) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C65 +
            C258 * C66) *
               C6151 * C6086 * C1045 -
           (C1211 * C66 +
            (C120 * C480 - C240 * C439 - C120 * C548 + C6152 * C583) * C65) *
               C6151 * C6086 * C1046) *
              C1047 +
          ((C1211 * C65 +
            (C120 * C1087 - C240 * C1049 - C120 * C1167 + C6152 * C1203) *
                C66) *
               C6151 * C6086 * C1046 -
           (C259 * C66 + C258 * C65) * C6151 * C6086 * C1045) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C6151 * C164 - C163 * C78) * C120 +
                      (C6151 * C285 - C163 * C206) * C6152) *
                         C65 +
                     ((C173 - C174) * C120 + (C290 - C291) * C6152) * C66) *
                        C6086 * C1045 +
                    (((C163 * C439 - C6151 * C514) * C120 +
                      (C163 * C548 - C6151 * C612) * C6152) *
                         C65 +
                     ((C1130 - C1131) * C120 + (C1247 - C1248) * C6152) * C66) *
                        C6086 * C1046) *
                       C1047 +
                   ((((C174 - C173) * C120 + (C291 - C290) * C6152) * C65 +
                     ((C177 - C178) * C120 + (C292 - C293) * C6152) * C66) *
                        C6086 * C1045 +
                    (((C1131 - C1130) * C120 + (C1248 - C1247) * C6152) * C65 +
                     ((C6151 * C1127 - C163 * C1049) * C120 +
                      (C6151 * C1245 - C163 * C1167) * C6152) *
                         C66) *
                        C6086 * C1046) *
                       C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
            (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C6151) *
               C6152 * C6086 * C1045 +
           ((C74 * C439 - C65 * C444 + C76 * C438 - C66 * C442) * C163 +
            (C74 * C642 - C65 * C646 + C76 * C643 - C66 * C647) * C6151) *
               C6152 * C6086 * C1046) *
              C1047 +
          (((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C163 +
            (C74 * C320 - C65 * C324 + C76 * C321 - C66 * C325) * C6151) *
               C6152 * C6086 * C1045 +
           ((C65 * C442 - C74 * C438 + C66 * C1050 - C76 * C1049) * C163 +
            (C65 * C647 - C74 * C643 + C66 * C1283 - C76 * C1282) * C6151) *
               C6152 * C6086 * C1046) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C6152 * C121 - C120 * C78) * C163 +
                      (C6152 * C353 - C120 * C319) * C6151) *
                         C65 +
                     ((C130 - C131) * C163 + (C358 - C359) * C6151) * C66) *
                        C6086 * C1045 +
                    (((C120 * C439 - C6152 * C480) * C163 +
                      (C120 * C642 - C6152 * C676) * C6151) *
                         C65 +
                     ((C1090 - C1091) * C163 + (C1320 - C1321) * C6151) * C66) *
                        C6086 * C1046) *
                       C1047 +
                   ((((C131 - C130) * C163 + (C359 - C358) * C6151) * C65 +
                     ((C134 - C135) * C163 + (C360 - C361) * C6151) * C66) *
                        C6086 * C1045 +
                    (((C1091 - C1090) * C163 + (C1321 - C1320) * C6151) * C65 +
                     ((C6152 * C1087 - C120 * C1049) * C163 +
                      (C6152 * C1318 - C120 * C1282) * C6151) *
                         C66) *
                        C6086 * C1046) *
                       C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) *
                         C6152 * C65 +
                     C407 * C66) *
                        C6086 * C1045 -
                    (C1364 * C66 +
                     (C163 * C514 - C387 * C439 - C163 * C642 + C6151 * C707) *
                         C6152 * C65) *
                        C6086 * C1046) *
                       C1047 +
                   ((C1364 * C65 + (C163 * C1127 - C387 * C1049 - C163 * C1282 +
                                    C6151 * C1355) *
                                       C6152 * C66) *
                        C6086 * C1046 -
                    (C408 * C66 + C407 * C65) * C6086 * C1045) *
                       C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                     C77 * C79 - C76 * C85 + C66 * C91) *
                        C6151 * C6152 * C1398 -
                    (C76 * C743 - C77 * C739 - C76 * C744 + C66 * C751 +
                     C74 * C745 - C75 * C740 - C74 * C746 + C65 * C752) *
                        C6151 * C6152 * C1399) *
                       C1045 +
                   ((C74 * C1751 - C75 * C1749 - C74 * C1752 + C65 * C1755 +
                     C76 * C1753 - C77 * C1750 - C76 * C1754 + C66 * C1756) *
                        C6151 * C6152 * C1399 -
                    (C76 * C442 - C77 * C438 - C76 * C443 + C66 * C450 +
                     C74 * C444 - C75 * C439 - C74 * C445 + C65 * C451) *
                        C6151 * C6152 * C1398) *
                       C1046) *
                  C6060) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6152 * C121 - C120 * C78) * C74 +
                     (C6152 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                     (C132 - C133) * C66) *
                        C6151 * C1398 +
                    ((C120 * C740 - C6152 * C781) * C74 +
                     (C120 * C746 - C6152 * C785) * C65 +
                     (C1441 - C1442) * C76 + (C1443 - C1444) * C66) *
                        C6151 * C1399) *
                       C1045 +
                   (((C120 * C439 - C6152 * C480) * C74 +
                     (C120 * C445 - C6152 * C484) * C65 +
                     (C1090 - C1091) * C76 + (C1092 - C1093) * C66) *
                        C6151 * C1398 +
                    ((C6152 * C1791 - C120 * C1749) * C74 +
                     (C6152 * C1793 - C120 * C1752) * C65 +
                     (C6152 * C1792 - C120 * C1750) * C76 +
                     (C6152 * C1794 - C120 * C1754) * C66) *
                        C6151 * C1399) *
                       C1046) *
                  C6060) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6151 * C164 - C163 * C78) * C74 +
                     (C6151 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                     (C175 - C176) * C66) *
                        C6152 * C1398 +
                    ((C163 * C740 - C6151 * C815) * C74 +
                     (C163 * C746 - C6151 * C819) * C65 +
                     (C1481 - C1482) * C76 + (C1483 - C1484) * C66) *
                        C6152 * C1399) *
                       C1045 +
                   (((C163 * C439 - C6151 * C514) * C74 +
                     (C163 * C445 - C6151 * C518) * C65 +
                     (C1130 - C1131) * C76 + (C1132 - C1133) * C66) *
                        C6152 * C1398 +
                    ((C6151 * C1829 - C163 * C1749) * C74 +
                     (C6151 * C1831 - C163 * C1752) * C65 +
                     (C6151 * C1830 - C163 * C1750) * C76 +
                     (C6151 * C1832 - C163 * C1754) * C66) *
                        C6152 * C1399) *
                       C1046) *
                  C6060) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
            (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C6152) *
               C6151 * C1398 +
           ((C74 * C740 - C65 * C745 + C76 * C739 - C66 * C743) * C120 +
            (C74 * C849 - C65 * C853 + C76 * C850 - C66 * C854) * C6152) *
               C6151 * C1399) *
              C1045 +
          (((C74 * C439 - C65 * C444 + C76 * C438 - C66 * C442) * C120 +
            (C74 * C548 - C65 * C552 + C76 * C549 - C66 * C553) * C6152) *
               C6151 * C1398 +
           ((C65 * C1751 - C74 * C1749 + C66 * C1753 - C76 * C1750) * C120 +
            (C65 * C1869 - C74 * C1867 + C66 * C1870 - C76 * C1868) * C6152) *
               C6151 * C1399) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C65 +
            C258 * C66) *
               C6151 * C1398 -
           (C1562 * C66 +
            (C120 * C781 - C240 * C740 - C120 * C849 + C6152 * C884) * C65) *
               C6151 * C1399) *
              C1045 +
          (((C120 * C1791 - C240 * C1749 - C120 * C1867 + C6152 * C1905) * C65 +
            (C120 * C1792 - C240 * C1750 - C120 * C1868 + C6152 * C1906) *
                C66) *
               C6151 * C1399 -
           (C1211 * C66 +
            (C120 * C480 - C240 * C439 - C120 * C548 + C6152 * C583) * C65) *
               C6151 * C1398) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C6151 * C164 - C163 * C78) * C120 +
                      (C6151 * C285 - C163 * C206) * C6152) *
                         C65 +
                     ((C173 - C174) * C120 + (C290 - C291) * C6152) * C66) *
                        C1398 +
                    (((C163 * C740 - C6151 * C815) * C120 +
                      (C163 * C849 - C6151 * C913) * C6152) *
                         C65 +
                     ((C1481 - C1482) * C120 + (C1598 - C1599) * C6152) * C66) *
                        C1399) *
                       C1045 +
                   ((((C163 * C439 - C6151 * C514) * C120 +
                      (C163 * C548 - C6151 * C612) * C6152) *
                         C65 +
                     ((C1130 - C1131) * C120 + (C1247 - C1248) * C6152) * C66) *
                        C1398 +
                    (((C6151 * C1829 - C163 * C1749) * C120 +
                      (C6151 * C1941 - C163 * C1867) * C6152) *
                         C65 +
                     ((C6151 * C1830 - C163 * C1750) * C120 +
                      (C6151 * C1942 - C163 * C1868) * C6152) *
                         C66) *
                        C1399) *
                       C1046) *
                  C6060) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
            (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C6151) *
               C6152 * C1398 +
           ((C74 * C740 - C65 * C745 + C76 * C739 - C66 * C743) * C163 +
            (C74 * C943 - C65 * C947 + C76 * C944 - C66 * C948) * C6151) *
               C6152 * C1399) *
              C1045 +
          (((C74 * C439 - C65 * C444 + C76 * C438 - C66 * C442) * C163 +
            (C74 * C642 - C65 * C646 + C76 * C643 - C66 * C647) * C6151) *
               C6152 * C1398 +
           ((C65 * C1751 - C74 * C1749 + C66 * C1753 - C76 * C1750) * C163 +
            (C65 * C1979 - C74 * C1977 + C66 * C1980 - C76 * C1978) * C6151) *
               C6152 * C1399) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C6152 * C121 - C120 * C78) * C163 +
                      (C6152 * C353 - C120 * C319) * C6151) *
                         C65 +
                     ((C130 - C131) * C163 + (C358 - C359) * C6151) * C66) *
                        C1398 +
                    (((C120 * C740 - C6152 * C781) * C163 +
                      (C120 * C943 - C6152 * C977) * C6151) *
                         C65 +
                     ((C1441 - C1442) * C163 + (C1671 - C1672) * C6151) * C66) *
                        C1399) *
                       C1045 +
                   ((((C120 * C439 - C6152 * C480) * C163 +
                      (C120 * C642 - C6152 * C676) * C6151) *
                         C65 +
                     ((C1090 - C1091) * C163 + (C1320 - C1321) * C6151) * C66) *
                        C1398 +
                    (((C6152 * C1791 - C120 * C1749) * C163 +
                      (C6152 * C2015 - C120 * C1977) * C6151) *
                         C65 +
                     ((C6152 * C1792 - C120 * C1750) * C163 +
                      (C6152 * C2016 - C120 * C1978) * C6151) *
                         C66) *
                        C1399) *
                       C1046) *
                  C6060) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) * C6152 *
                C65 +
            C407 * C66) *
               C1398 -
           (C1715 * C66 +
            (C163 * C815 - C387 * C740 - C163 * C943 + C6151 * C1008) * C6152 *
                C65) *
               C1399) *
              C1045 +
          (((C163 * C1829 - C387 * C1749 - C163 * C1977 + C6151 * C2051) *
                C6152 * C65 +
            (C163 * C1830 - C387 * C1750 - C163 * C1978 + C6151 * C2052) *
                C6152 * C66) *
               C1399 -
           (C1364 * C66 +
            (C163 * C514 - C387 * C439 - C163 * C642 + C6151 * C707) * C6152 *
                C65) *
               C1398) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::pow(Pi, 2.5) *
         ((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
           C77 * C79 - C76 * C85 + C66 * C91) *
              C6151 * C6152 * C6086 * C434 -
          (C76 * C442 - C77 * C438 - C76 * C443 + C66 * C450 + C74 * C444 -
           C75 * C439 - C74 * C445 + C65 * C451) *
              C6151 * C6152 * C6086 * C435 +
          (C74 * C446 - C75 * C440 - C74 * C447 + C65 * C452 + C76 * C448 -
           C77 * C441 - C76 * C449 + C66 * C453) *
              C6151 * C6152 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 +
                               C76 * C84 - C77 * C79 - C76 * C85 + C66 * C91) *
                                  C6151 * C6152 * C6086 * C6072 * C71 -
                              (C76 * C86 - C77 * C80 - C76 * C87 + C66 * C92 +
                               C74 * C84 - C75 * C79 - C74 * C85 + C65 * C91) *
                                  C6151 * C6152 * C6086 * C6072 * C72 +
                              (C74 * C86 - C75 * C80 - C74 * C87 + C65 * C92 +
                               C76 * C88 - C77 * C81 - C76 * C89 + C66 * C93) *
                                  C6151 * C6152 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
           C77 * C79 - C76 * C85 + C66 * C91) *
              C6151 * C6152 * C736 -
          (C76 * C743 - C77 * C739 - C76 * C744 + C66 * C751 + C74 * C745 -
           C75 * C740 - C74 * C746 + C65 * C752) *
              C6151 * C6152 * C737 +
          (C74 * C747 - C75 * C741 - C74 * C748 + C65 * C753 + C76 * C749 -
           C77 * C742 - C76 * C750 + C66 * C754) *
              C6151 * C6152 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         (((C6152 * C121 - C120 * C78) * C74 +
           (C6152 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
           (C132 - C133) * C66) *
              C6151 * C6086 * C434 +
          ((C120 * C439 - C6152 * C480) * C74 +
           (C120 * C445 - C6152 * C484) * C65 +
           (C120 * C438 - C6152 * C481) * C76 +
           (C120 * C443 - C6152 * C485) * C66) *
              C6151 * C6086 * C435 +
          ((C6152 * C482 - C120 * C440) * C74 +
           (C6152 * C486 - C120 * C447) * C65 +
           (C6152 * C483 - C120 * C441) * C76 +
           (C6152 * C487 - C120 * C449) * C66) *
              C6151 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C6152 * C121 - C120 * C78) * C74 +
                               (C6152 * C125 - C120 * C83) * C65 +
                               (C130 - C131) * C76 + (C132 - C133) * C66) *
                                  C6151 * C6086 * C6072 * C71 +
                              ((C131 - C130) * C74 + (C133 - C132) * C65 +
                               (C134 - C135) * C76 + (C136 - C137) * C66) *
                                  C6151 * C6086 * C6072 * C72 +
                              ((C135 - C134) * C74 + (C137 - C136) * C65 +
                               (C6152 * C124 - C120 * C81) * C76 +
                               (C6152 * C128 - C120 * C89) * C66) *
                                  C6151 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6152 * C121 - C120 * C78) * C74 +
           (C6152 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
           (C132 - C133) * C66) *
              C6151 * C736 +
          ((C120 * C740 - C6152 * C781) * C74 +
           (C120 * C746 - C6152 * C785) * C65 +
           (C120 * C739 - C6152 * C782) * C76 +
           (C120 * C744 - C6152 * C786) * C66) *
              C6151 * C737 +
          ((C6152 * C783 - C120 * C741) * C74 +
           (C6152 * C787 - C120 * C748) * C65 +
           (C6152 * C784 - C120 * C742) * C76 +
           (C6152 * C788 - C120 * C750) * C66) *
              C6151 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C6151 * C164 - C163 * C78) * C74 +
           (C6151 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
           (C175 - C176) * C66) *
              C6152 * C6086 * C434 +
          ((C163 * C439 - C6151 * C514) * C74 +
           (C163 * C445 - C6151 * C518) * C65 +
           (C163 * C438 - C6151 * C515) * C76 +
           (C163 * C443 - C6151 * C519) * C66) *
              C6152 * C6086 * C435 +
          ((C6151 * C516 - C163 * C440) * C74 +
           (C6151 * C520 - C163 * C447) * C65 +
           (C6151 * C517 - C163 * C441) * C76 +
           (C6151 * C521 - C163 * C449) * C66) *
              C6152 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C6151 * C164 - C163 * C78) * C74 +
                               (C6151 * C168 - C163 * C83) * C65 +
                               (C173 - C174) * C76 + (C175 - C176) * C66) *
                                  C6152 * C6086 * C6072 * C71 +
                              ((C174 - C173) * C74 + (C176 - C175) * C65 +
                               (C177 - C178) * C76 + (C179 - C180) * C66) *
                                  C6152 * C6086 * C6072 * C72 +
                              ((C178 - C177) * C74 + (C180 - C179) * C65 +
                               (C6151 * C167 - C163 * C81) * C76 +
                               (C6151 * C171 - C163 * C89) * C66) *
                                  C6152 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6151 * C164 - C163 * C78) * C74 +
           (C6151 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
           (C175 - C176) * C66) *
              C6152 * C736 +
          ((C163 * C740 - C6151 * C815) * C74 +
           (C163 * C746 - C6151 * C819) * C65 +
           (C163 * C739 - C6151 * C816) * C76 +
           (C163 * C744 - C6151 * C820) * C66) *
              C6152 * C737 +
          ((C6151 * C817 - C163 * C741) * C74 +
           (C6151 * C821 - C163 * C748) * C65 +
           (C6151 * C818 - C163 * C742) * C76 +
           (C6151 * C822 - C163 * C750) * C66) *
              C6152 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
           (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C6152) *
              C6151 * C6086 * C434 +
          ((C74 * C439 - C65 * C444 + C76 * C438 - C66 * C442) * C120 +
           (C74 * C548 - C65 * C552 + C76 * C549 - C66 * C553) * C6152) *
              C6151 * C6086 * C435 +
          ((C65 * C446 - C74 * C440 + C66 * C448 - C76 * C441) * C120 +
           (C65 * C554 - C74 * C550 + C66 * C555 - C76 * C551) * C6152) *
              C6151 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
           (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C6152) *
              C6151 * C6086 * C6072 * C71 +
          ((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C120 +
           (C74 * C207 - C65 * C211 + C76 * C208 - C66 * C212) * C6152) *
              C6151 * C6086 * C6072 * C72 +
          ((C65 * C86 - C74 * C80 + C66 * C88 - C76 * C81) * C120 +
           (C65 * C212 - C74 * C208 + C66 * C213 - C76 * C209) * C6152) *
              C6151 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
           (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C6152) *
              C6151 * C736 +
          ((C74 * C740 - C65 * C745 + C76 * C739 - C66 * C743) * C120 +
           (C74 * C849 - C65 * C853 + C76 * C850 - C66 * C854) * C6152) *
              C6151 * C737 +
          ((C65 * C747 - C74 * C741 + C66 * C749 - C76 * C742) * C120 +
           (C65 * C855 - C74 * C851 + C66 * C856 - C76 * C852) * C6152) *
              C6151 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C65 +
           C258 * C66) *
              C6151 * C6086 * C434 -
          ((C120 * C481 - C240 * C438 - C120 * C549 + C6152 * C582) * C66 +
           (C120 * C480 - C240 * C439 - C120 * C548 + C6152 * C583) * C65) *
              C6151 * C6086 * C435 +
          ((C120 * C482 - C240 * C440 - C120 * C550 + C6152 * C584) * C65 +
           (C120 * C483 - C240 * C441 - C120 * C551 + C6152 * C585) * C66) *
              C6151 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C65 +
           C258 * C66) *
              C6151 * C6086 * C6072 * C71 -
          (C259 * C66 + C258 * C65) * C6151 * C6086 * C6072 * C72 +
          (C259 * C65 +
           (C120 * C124 - C240 * C81 - C120 * C209 + C6152 * C244) * C66) *
              C6151 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C65 +
           C258 * C66) *
              C6151 * C736 -
          ((C120 * C782 - C240 * C739 - C120 * C850 + C6152 * C883) * C66 +
           (C120 * C781 - C240 * C740 - C120 * C849 + C6152 * C884) * C65) *
              C6151 * C737 +
          ((C120 * C783 - C240 * C741 - C120 * C851 + C6152 * C885) * C65 +
           (C120 * C784 - C240 * C742 - C120 * C852 + C6152 * C886) * C66) *
              C6151 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::pow(Pi, 2.5) *
                  ((((C6151 * C164 - C163 * C78) * C120 +
                     (C6151 * C285 - C163 * C206) * C6152) *
                        C65 +
                    ((C173 - C174) * C120 + (C290 - C291) * C6152) * C66) *
                       C6086 * C434 +
                   (((C163 * C439 - C6151 * C514) * C120 +
                     (C163 * C548 - C6151 * C612) * C6152) *
                        C65 +
                    ((C163 * C438 - C6151 * C515) * C120 +
                     (C163 * C549 - C6151 * C613) * C6152) *
                        C66) *
                       C6086 * C435 +
                   (((C6151 * C516 - C163 * C440) * C120 +
                     (C6151 * C614 - C163 * C550) * C6152) *
                        C65 +
                    ((C6151 * C517 - C163 * C441) * C120 +
                     (C6151 * C615 - C163 * C551) * C6152) *
                        C66) *
                       C6086 * C436) *
                  C6060) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C6151 * C164 - C163 * C78) * C120 +
                     (C6151 * C285 - C163 * C206) * C6152) *
                        C65 +
                    ((C173 - C174) * C120 + (C290 - C291) * C6152) * C66) *
                       C6086 * C6072 * C71 +
                   (((C174 - C173) * C120 + (C291 - C290) * C6152) * C65 +
                    ((C177 - C178) * C120 + (C292 - C293) * C6152) * C66) *
                       C6086 * C6072 * C72 +
                   (((C178 - C177) * C120 + (C293 - C292) * C6152) * C65 +
                    ((C6151 * C167 - C163 * C81) * C120 +
                     (C6151 * C288 - C163 * C209) * C6152) *
                        C66) *
                       C6086 * C6072 * C73)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C6151 * C164 - C163 * C78) * C120 +
                     (C6151 * C285 - C163 * C206) * C6152) *
                        C65 +
                    ((C173 - C174) * C120 + (C290 - C291) * C6152) * C66) *
                       C736 +
                   (((C163 * C740 - C6151 * C815) * C120 +
                     (C163 * C849 - C6151 * C913) * C6152) *
                        C65 +
                    ((C163 * C739 - C6151 * C816) * C120 +
                     (C163 * C850 - C6151 * C914) * C6152) *
                        C66) *
                       C737 +
                   (((C6151 * C817 - C163 * C741) * C120 +
                     (C6151 * C915 - C163 * C851) * C6152) *
                        C65 +
                    ((C6151 * C818 - C163 * C742) * C120 +
                     (C6151 * C916 - C163 * C852) * C6152) *
                        C66) *
                       C738) *
                  C6072 * C6060) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
           (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C6151) *
              C6152 * C6086 * C434 +
          ((C74 * C439 - C65 * C444 + C76 * C438 - C66 * C442) * C163 +
           (C74 * C642 - C65 * C646 + C76 * C643 - C66 * C647) * C6151) *
              C6152 * C6086 * C435 +
          ((C65 * C446 - C74 * C440 + C66 * C448 - C76 * C441) * C163 +
           (C65 * C648 - C74 * C644 + C66 * C649 - C76 * C645) * C6151) *
              C6152 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
           (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C6151) *
              C6152 * C6086 * C6072 * C71 +
          ((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C163 +
           (C74 * C320 - C65 * C324 + C76 * C321 - C66 * C325) * C6151) *
              C6152 * C6086 * C6072 * C72 +
          ((C65 * C86 - C74 * C80 + C66 * C88 - C76 * C81) * C163 +
           (C65 * C325 - C74 * C321 + C66 * C326 - C76 * C322) * C6151) *
              C6152 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
           (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C6151) *
              C6152 * C736 +
          ((C74 * C740 - C65 * C745 + C76 * C739 - C66 * C743) * C163 +
           (C74 * C943 - C65 * C947 + C76 * C944 - C66 * C948) * C6151) *
              C6152 * C737 +
          ((C65 * C747 - C74 * C741 + C66 * C749 - C76 * C742) * C163 +
           (C65 * C949 - C74 * C945 + C66 * C950 - C76 * C946) * C6151) *
              C6152 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] += (-std::pow(Pi, 2.5) *
                  ((((C6152 * C121 - C120 * C78) * C163 +
                     (C6152 * C353 - C120 * C319) * C6151) *
                        C65 +
                    ((C130 - C131) * C163 + (C358 - C359) * C6151) * C66) *
                       C6086 * C434 +
                   (((C120 * C439 - C6152 * C480) * C163 +
                     (C120 * C642 - C6152 * C676) * C6151) *
                        C65 +
                    ((C120 * C438 - C6152 * C481) * C163 +
                     (C120 * C643 - C6152 * C677) * C6151) *
                        C66) *
                       C6086 * C435 +
                   (((C6152 * C482 - C120 * C440) * C163 +
                     (C6152 * C678 - C120 * C644) * C6151) *
                        C65 +
                    ((C6152 * C483 - C120 * C441) * C163 +
                     (C6152 * C679 - C120 * C645) * C6151) *
                        C66) *
                       C6086 * C436) *
                  C6060) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C6152 * C121 - C120 * C78) * C163 +
                     (C6152 * C353 - C120 * C319) * C6151) *
                        C65 +
                    ((C130 - C131) * C163 + (C358 - C359) * C6151) * C66) *
                       C6086 * C6072 * C71 +
                   (((C131 - C130) * C163 + (C359 - C358) * C6151) * C65 +
                    ((C134 - C135) * C163 + (C360 - C361) * C6151) * C66) *
                       C6086 * C6072 * C72 +
                   (((C135 - C134) * C163 + (C361 - C360) * C6151) * C65 +
                    ((C6152 * C124 - C120 * C81) * C163 +
                     (C6152 * C356 - C120 * C322) * C6151) *
                        C66) *
                       C6086 * C6072 * C73)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C6152 * C121 - C120 * C78) * C163 +
                     (C6152 * C353 - C120 * C319) * C6151) *
                        C65 +
                    ((C130 - C131) * C163 + (C358 - C359) * C6151) * C66) *
                       C736 +
                   (((C120 * C740 - C6152 * C781) * C163 +
                     (C120 * C943 - C6152 * C977) * C6151) *
                        C65 +
                    ((C120 * C739 - C6152 * C782) * C163 +
                     (C120 * C944 - C6152 * C978) * C6151) *
                        C66) *
                       C737 +
                   (((C6152 * C783 - C120 * C741) * C163 +
                     (C6152 * C979 - C120 * C945) * C6151) *
                        C65 +
                    ((C6152 * C784 - C120 * C742) * C163 +
                     (C6152 * C980 - C120 * C946) * C6151) *
                        C66) *
                       C738) *
                  C6072 * C6060) /
                     (p * q * std::sqrt(p + q));
    d2eezz[2] += (-std::pow(Pi, 2.5) *
                  (((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) *
                        C6152 * C65 +
                    C407 * C66) *
                       C6086 * C434 -
                   ((C163 * C515 - C387 * C438 - C163 * C643 + C6151 * C706) *
                        C6152 * C66 +
                    (C163 * C514 - C387 * C439 - C163 * C642 + C6151 * C707) *
                        C6152 * C65) *
                       C6086 * C435 +
                   ((C163 * C516 - C387 * C440 - C163 * C644 + C6151 * C708) *
                        C6152 * C65 +
                    (C163 * C517 - C387 * C441 - C163 * C645 + C6151 * C709) *
                        C6152 * C66) *
                       C6086 * C436) *
                  C6060) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) *
                        C6152 * C65 +
                    C407 * C66) *
                       C6086 * C6072 * C71 -
                   (C408 * C66 + C407 * C65) * C6086 * C6072 * C72 +
                   (C408 * C65 +
                    (C163 * C167 - C387 * C81 - C163 * C322 + C6151 * C391) *
                        C6152 * C66) *
                       C6086 * C6072 * C73)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) *
                        C6152 * C65 +
                    C407 * C66) *
                       C736 -
                   ((C163 * C816 - C387 * C739 - C163 * C944 + C6151 * C1007) *
                        C6152 * C66 +
                    (C163 * C815 - C387 * C740 - C163 * C943 + C6151 * C1008) *
                        C6152 * C65) *
                       C737 +
                   ((C163 * C817 - C387 * C741 - C163 * C945 + C6151 * C1009) *
                        C6152 * C65 +
                    (C163 * C818 - C387 * C742 - C163 * C946 + C6151 * C1010) *
                        C6152 * C66) *
                       C738) *
                  C6072 * C6060) /
                     (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                     C77 * C79 - C76 * C85 + C66 * C91) *
                        C6151 * C6152 * C1398 -
                    (C76 * C743 - C77 * C739 - C76 * C744 + C66 * C751 +
                     C74 * C745 - C75 * C740 - C74 * C746 + C65 * C752) *
                        C6151 * C6152 * C1399) *
                       C6072 * C1047 +
                   ((C74 * C743 - C75 * C739 - C74 * C744 + C65 * C751 +
                     C76 * C1401 - C77 * C1400 - C76 * C1402 + C66 * C1403) *
                        C6151 * C6152 * C1399 -
                    (C76 * C86 - C77 * C80 - C76 * C87 + C66 * C92 + C74 * C84 -
                     C75 * C79 - C74 * C85 + C65 * C91) *
                        C6151 * C6152 * C1398) *
                       C6072 * C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6152 * C121 - C120 * C78) * C74 +
                     (C6152 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                     (C132 - C133) * C66) *
                        C6151 * C1398 +
                    ((C120 * C740 - C6152 * C781) * C74 +
                     (C120 * C746 - C6152 * C785) * C65 +
                     (C1441 - C1442) * C76 + (C1443 - C1444) * C66) *
                        C6151 * C1399) *
                       C6072 * C1047 +
                   (((C131 - C130) * C74 + (C133 - C132) * C65 +
                     (C134 - C135) * C76 + (C136 - C137) * C66) *
                        C6151 * C1398 +
                    ((C1442 - C1441) * C74 + (C1444 - C1443) * C65 +
                     (C6152 * C1438 - C120 * C1400) * C76 +
                     (C6152 * C1439 - C120 * C1402) * C66) *
                        C6151 * C1399) *
                       C6072 * C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6151 * C164 - C163 * C78) * C74 +
                     (C6151 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                     (C175 - C176) * C66) *
                        C6152 * C1398 +
                    ((C163 * C740 - C6151 * C815) * C74 +
                     (C163 * C746 - C6151 * C819) * C65 +
                     (C1481 - C1482) * C76 + (C1483 - C1484) * C66) *
                        C6152 * C1399) *
                       C6072 * C1047 +
                   (((C174 - C173) * C74 + (C176 - C175) * C65 +
                     (C177 - C178) * C76 + (C179 - C180) * C66) *
                        C6152 * C1398 +
                    ((C1482 - C1481) * C74 + (C1484 - C1483) * C65 +
                     (C6151 * C1478 - C163 * C1400) * C76 +
                     (C6151 * C1479 - C163 * C1402) * C66) *
                        C6152 * C1399) *
                       C6072 * C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
            (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C6152) *
               C6151 * C1398 +
           ((C74 * C740 - C65 * C745 + C76 * C739 - C66 * C743) * C120 +
            (C74 * C849 - C65 * C853 + C76 * C850 - C66 * C854) * C6152) *
               C6151 * C1399) *
              C6072 * C1047 +
          (((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C120 +
            (C74 * C207 - C65 * C211 + C76 * C208 - C66 * C212) * C6152) *
               C6151 * C1398 +
           ((C65 * C743 - C74 * C739 + C66 * C1401 - C76 * C1400) * C120 +
            (C65 * C854 - C74 * C850 + C66 * C1519 - C76 * C1518) * C6152) *
               C6151 * C1399) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C65 +
            C258 * C66) *
               C6151 * C1398 -
           (C1562 * C66 +
            (C120 * C781 - C240 * C740 - C120 * C849 + C6152 * C884) * C65) *
               C6151 * C1399) *
              C6072 * C1047 +
          ((C1562 * C65 +
            (C120 * C1438 - C240 * C1400 - C120 * C1518 + C6152 * C1554) *
                C66) *
               C6151 * C1399 -
           (C259 * C66 + C258 * C65) * C6151 * C1398) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C6151 * C164 - C163 * C78) * C120 +
                      (C6151 * C285 - C163 * C206) * C6152) *
                         C65 +
                     ((C173 - C174) * C120 + (C290 - C291) * C6152) * C66) *
                        C1398 +
                    (((C163 * C740 - C6151 * C815) * C120 +
                      (C163 * C849 - C6151 * C913) * C6152) *
                         C65 +
                     ((C1481 - C1482) * C120 + (C1598 - C1599) * C6152) * C66) *
                        C1399) *
                       C6072 * C1047 +
                   ((((C174 - C173) * C120 + (C291 - C290) * C6152) * C65 +
                     ((C177 - C178) * C120 + (C292 - C293) * C6152) * C66) *
                        C1398 +
                    (((C1482 - C1481) * C120 + (C1599 - C1598) * C6152) * C65 +
                     ((C6151 * C1478 - C163 * C1400) * C120 +
                      (C6151 * C1596 - C163 * C1518) * C6152) *
                         C66) *
                        C1399) *
                       C6072 * C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
            (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C6151) *
               C6152 * C1398 +
           ((C74 * C740 - C65 * C745 + C76 * C739 - C66 * C743) * C163 +
            (C74 * C943 - C65 * C947 + C76 * C944 - C66 * C948) * C6151) *
               C6152 * C1399) *
              C6072 * C1047 +
          (((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C163 +
            (C74 * C320 - C65 * C324 + C76 * C321 - C66 * C325) * C6151) *
               C6152 * C1398 +
           ((C65 * C743 - C74 * C739 + C66 * C1401 - C76 * C1400) * C163 +
            (C65 * C948 - C74 * C944 + C66 * C1634 - C76 * C1633) * C6151) *
               C6152 * C1399) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C6152 * C121 - C120 * C78) * C163 +
                      (C6152 * C353 - C120 * C319) * C6151) *
                         C65 +
                     ((C130 - C131) * C163 + (C358 - C359) * C6151) * C66) *
                        C1398 +
                    (((C120 * C740 - C6152 * C781) * C163 +
                      (C120 * C943 - C6152 * C977) * C6151) *
                         C65 +
                     ((C1441 - C1442) * C163 + (C1671 - C1672) * C6151) * C66) *
                        C1399) *
                       C6072 * C1047 +
                   ((((C131 - C130) * C163 + (C359 - C358) * C6151) * C65 +
                     ((C134 - C135) * C163 + (C360 - C361) * C6151) * C66) *
                        C1398 +
                    (((C1442 - C1441) * C163 + (C1672 - C1671) * C6151) * C65 +
                     ((C6152 * C1438 - C120 * C1400) * C163 +
                      (C6152 * C1669 - C120 * C1633) * C6151) *
                         C66) *
                        C1399) *
                       C6072 * C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) *
                         C6152 * C65 +
                     C407 * C66) *
                        C1398 -
                    (C1715 * C66 +
                     (C163 * C815 - C387 * C740 - C163 * C943 + C6151 * C1008) *
                         C6152 * C65) *
                        C1399) *
                       C6072 * C1047 +
                   ((C1715 * C65 + (C163 * C1478 - C387 * C1400 - C163 * C1633 +
                                    C6151 * C1706) *
                                       C6152 * C66) *
                        C1399 -
                    (C408 * C66 + C407 * C65) * C1398) *
                       C6072 * C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                    C77 * C79 - C76 * C85 + C66 * C91) *
                       C6151 * C6152 * C6086 * C6072 * C71 -
                   (C76 * C86 - C77 * C80 - C76 * C87 + C66 * C92 + C74 * C84 -
                    C75 * C79 - C74 * C85 + C65 * C91) *
                       C6151 * C6152 * C6086 * C6072 * C72 +
                   (C74 * C86 - C75 * C80 - C74 * C87 + C65 * C92 + C76 * C88 -
                    C77 * C81 - C76 * C89 + C66 * C93) *
                       C6151 * C6152 * C6086 * C6072 * C73)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                    C77 * C79 - C76 * C85 + C66 * C91) *
                       C6151 * C6152 * C6086 * C434 -
                   (C76 * C442 - C77 * C438 - C76 * C443 + C66 * C450 +
                    C74 * C444 - C75 * C439 - C74 * C445 + C65 * C451) *
                       C6151 * C6152 * C6086 * C435 +
                   (C74 * C446 - C75 * C440 - C74 * C447 + C65 * C452 +
                    C76 * C448 - C77 * C441 - C76 * C449 + C66 * C453) *
                       C6151 * C6152 * C6086 * C436) *
                  C6060) /
                     (p * q * std::sqrt(p + q));
    d2eexy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C6152 * C121 - C120 * C78) * C74 +
                    (C6152 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                    (C132 - C133) * C66) *
                       C6151 * C6086 * C6072 * C71 +
                   ((C131 - C130) * C74 + (C133 - C132) * C65 +
                    (C134 - C135) * C76 + (C136 - C137) * C66) *
                       C6151 * C6086 * C6072 * C72 +
                   ((C135 - C134) * C74 + (C137 - C136) * C65 +
                    (C6152 * C124 - C120 * C81) * C76 +
                    (C6152 * C128 - C120 * C89) * C66) *
                       C6151 * C6086 * C6072 * C73)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C6152 * C121 - C120 * C78) * C74 +
                    (C6152 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                    (C132 - C133) * C66) *
                       C6151 * C6086 * C434 +
                   ((C120 * C439 - C6152 * C480) * C74 +
                    (C120 * C445 - C6152 * C484) * C65 +
                    (C120 * C438 - C6152 * C481) * C76 +
                    (C120 * C443 - C6152 * C485) * C66) *
                       C6151 * C6086 * C435 +
                   ((C6152 * C482 - C120 * C440) * C74 +
                    (C6152 * C486 - C120 * C447) * C65 +
                    (C6152 * C483 - C120 * C441) * C76 +
                    (C6152 * C487 - C120 * C449) * C66) *
                       C6151 * C6086 * C436) *
                  C6060) /
                     (p * q * std::sqrt(p + q));
    d2eexz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C6151 * C164 - C163 * C78) * C74 +
                    (C6151 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                    (C175 - C176) * C66) *
                       C6152 * C6086 * C6072 * C71 +
                   ((C174 - C173) * C74 + (C176 - C175) * C65 +
                    (C177 - C178) * C76 + (C179 - C180) * C66) *
                       C6152 * C6086 * C6072 * C72 +
                   ((C178 - C177) * C74 + (C180 - C179) * C65 +
                    (C6151 * C167 - C163 * C81) * C76 +
                    (C6151 * C171 - C163 * C89) * C66) *
                       C6152 * C6086 * C6072 * C73)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C6151 * C164 - C163 * C78) * C74 +
                    (C6151 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                    (C175 - C176) * C66) *
                       C6152 * C6086 * C434 +
                   ((C163 * C439 - C6151 * C514) * C74 +
                    (C163 * C445 - C6151 * C518) * C65 +
                    (C163 * C438 - C6151 * C515) * C76 +
                    (C163 * C443 - C6151 * C519) * C66) *
                       C6152 * C6086 * C435 +
                   ((C6151 * C516 - C163 * C440) * C74 +
                    (C6151 * C520 - C163 * C447) * C65 +
                    (C6151 * C517 - C163 * C441) * C76 +
                    (C6151 * C521 - C163 * C449) * C66) *
                       C6152 * C6086 * C436) *
                  C6060) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
           (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C6152) *
              C6151 * C6086 * C6072 * C71 +
          ((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C120 +
           (C74 * C207 - C65 * C211 + C76 * C208 - C66 * C212) * C6152) *
              C6151 * C6086 * C6072 * C72 +
          ((C65 * C86 - C74 * C80 + C66 * C88 - C76 * C81) * C120 +
           (C65 * C212 - C74 * C208 + C66 * C213 - C76 * C209) * C6152) *
              C6151 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
           (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C6152) *
              C6151 * C6086 * C434 +
          ((C74 * C439 - C65 * C444 + C76 * C438 - C66 * C442) * C120 +
           (C74 * C548 - C65 * C552 + C76 * C549 - C66 * C553) * C6152) *
              C6151 * C6086 * C435 +
          ((C65 * C446 - C74 * C440 + C66 * C448 - C76 * C441) * C120 +
           (C65 * C554 - C74 * C550 + C66 * C555 - C76 * C551) * C6152) *
              C6151 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C65 +
           C258 * C66) *
              C6151 * C6086 * C6072 * C71 -
          (C259 * C66 + C258 * C65) * C6151 * C6086 * C6072 * C72 +
          (C259 * C65 +
           (C120 * C124 - C240 * C81 - C120 * C209 + C6152 * C244) * C66) *
              C6151 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C65 +
           C258 * C66) *
              C6151 * C6086 * C434 -
          ((C120 * C481 - C240 * C438 - C120 * C549 + C6152 * C582) * C66 +
           (C120 * C480 - C240 * C439 - C120 * C548 + C6152 * C583) * C65) *
              C6151 * C6086 * C435 +
          ((C120 * C482 - C240 * C440 - C120 * C550 + C6152 * C584) * C65 +
           (C120 * C483 - C240 * C441 - C120 * C551 + C6152 * C585) * C66) *
              C6151 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C6151 * C164 - C163 * C78) * C120 +
                     (C6151 * C285 - C163 * C206) * C6152) *
                        C65 +
                    ((C173 - C174) * C120 + (C290 - C291) * C6152) * C66) *
                       C6086 * C6072 * C71 +
                   (((C174 - C173) * C120 + (C291 - C290) * C6152) * C65 +
                    ((C177 - C178) * C120 + (C292 - C293) * C6152) * C66) *
                       C6086 * C6072 * C72 +
                   (((C178 - C177) * C120 + (C293 - C292) * C6152) * C65 +
                    ((C6151 * C167 - C163 * C81) * C120 +
                     (C6151 * C288 - C163 * C209) * C6152) *
                        C66) *
                       C6086 * C6072 * C73)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C6151 * C164 - C163 * C78) * C120 +
                     (C6151 * C285 - C163 * C206) * C6152) *
                        C65 +
                    ((C173 - C174) * C120 + (C290 - C291) * C6152) * C66) *
                       C6086 * C434 +
                   (((C163 * C439 - C6151 * C514) * C120 +
                     (C163 * C548 - C6151 * C612) * C6152) *
                        C65 +
                    ((C163 * C438 - C6151 * C515) * C120 +
                     (C163 * C549 - C6151 * C613) * C6152) *
                        C66) *
                       C6086 * C435 +
                   (((C6151 * C516 - C163 * C440) * C120 +
                     (C6151 * C614 - C163 * C550) * C6152) *
                        C65 +
                    ((C6151 * C517 - C163 * C441) * C120 +
                     (C6151 * C615 - C163 * C551) * C6152) *
                        C66) *
                       C6086 * C436) *
                  C6060) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
           (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C6151) *
              C6152 * C6086 * C6072 * C71 +
          ((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C163 +
           (C74 * C320 - C65 * C324 + C76 * C321 - C66 * C325) * C6151) *
              C6152 * C6086 * C6072 * C72 +
          ((C65 * C86 - C74 * C80 + C66 * C88 - C76 * C81) * C163 +
           (C65 * C325 - C74 * C321 + C66 * C326 - C76 * C322) * C6151) *
              C6152 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
           (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C6151) *
              C6152 * C6086 * C434 +
          ((C74 * C439 - C65 * C444 + C76 * C438 - C66 * C442) * C163 +
           (C74 * C642 - C65 * C646 + C76 * C643 - C66 * C647) * C6151) *
              C6152 * C6086 * C435 +
          ((C65 * C446 - C74 * C440 + C66 * C448 - C76 * C441) * C163 +
           (C65 * C648 - C74 * C644 + C66 * C649 - C76 * C645) * C6151) *
              C6152 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C6152 * C121 - C120 * C78) * C163 +
                     (C6152 * C353 - C120 * C319) * C6151) *
                        C65 +
                    ((C130 - C131) * C163 + (C358 - C359) * C6151) * C66) *
                       C6086 * C6072 * C71 +
                   (((C131 - C130) * C163 + (C359 - C358) * C6151) * C65 +
                    ((C134 - C135) * C163 + (C360 - C361) * C6151) * C66) *
                       C6086 * C6072 * C72 +
                   (((C135 - C134) * C163 + (C361 - C360) * C6151) * C65 +
                    ((C6152 * C124 - C120 * C81) * C163 +
                     (C6152 * C356 - C120 * C322) * C6151) *
                        C66) *
                       C6086 * C6072 * C73)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C6152 * C121 - C120 * C78) * C163 +
                     (C6152 * C353 - C120 * C319) * C6151) *
                        C65 +
                    ((C130 - C131) * C163 + (C358 - C359) * C6151) * C66) *
                       C6086 * C434 +
                   (((C120 * C439 - C6152 * C480) * C163 +
                     (C120 * C642 - C6152 * C676) * C6151) *
                        C65 +
                    ((C120 * C438 - C6152 * C481) * C163 +
                     (C120 * C643 - C6152 * C677) * C6151) *
                        C66) *
                       C6086 * C435 +
                   (((C6152 * C482 - C120 * C440) * C163 +
                     (C6152 * C678 - C120 * C644) * C6151) *
                        C65 +
                    ((C6152 * C483 - C120 * C441) * C163 +
                     (C6152 * C679 - C120 * C645) * C6151) *
                        C66) *
                       C6086 * C436) *
                  C6060) /
                     (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) *
                        C6152 * C65 +
                    C407 * C66) *
                       C6086 * C6072 * C71 -
                   (C408 * C66 + C407 * C65) * C6086 * C6072 * C72 +
                   (C408 * C65 +
                    (C163 * C167 - C387 * C81 - C163 * C322 + C6151 * C391) *
                        C6152 * C66) *
                       C6086 * C6072 * C73)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) *
                        C6152 * C65 +
                    C407 * C66) *
                       C6086 * C434 -
                   ((C163 * C515 - C387 * C438 - C163 * C643 + C6151 * C706) *
                        C6152 * C66 +
                    (C163 * C514 - C387 * C439 - C163 * C642 + C6151 * C707) *
                        C6152 * C65) *
                       C6086 * C435 +
                   ((C163 * C516 - C387 * C440 - C163 * C644 + C6151 * C708) *
                        C6152 * C65 +
                    (C163 * C517 - C387 * C441 - C163 * C645 + C6151 * C709) *
                        C6152 * C66) *
                       C6086 * C436) *
                  C6060) /
                     (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) *
                         C6151 * C2080 +
                     C2341 * C2081) *
                        C6086 * C1045 -
                    (C2342 * C2081 + C2341 * C2080) * C6086 * C1046) *
                       C1047 +
                   ((C2892 * C2080 + (C2082 * C448 - C2083 * C441 -
                                      C2082 * C449 + C6150 * C453) *
                                         C6151 * C2081) *
                        C6086 * C1046 -
                    (C2892 * C2081 +
                     (C2082 * C84 - C2083 * C79 - C2082 * C85 + C6150 * C91) *
                         C6151 * C2080) *
                        C6086 * C1045) *
                       C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C2082 +
            (C2080 * C125 - C2110 * C83 + C2081 * C484 - C2111 * C445) *
                C6150) *
               C6151 * C6086 * C1045 +
           ((C2110 * C439 - C2080 * C480 + C2111 * C440 - C2081 * C482) *
                C2082 +
            (C2110 * C445 - C2080 * C484 + C2111 * C447 - C2081 * C486) *
                C6150) *
               C6151 * C6086 * C1046) *
              C1047 +
          (((C2110 * C79 - C2080 * C122 + C2111 * C438 - C2081 * C481) * C2082 +
            (C2110 * C85 - C2080 * C126 + C2111 * C443 - C2081 * C485) *
                C6150) *
               C6151 * C6086 * C1045 +
           ((C2080 * C481 - C2110 * C438 + C2081 * C483 - C2111 * C441) *
                C2082 +
            (C2080 * C485 - C2110 * C443 + C2081 * C487 - C2111 * C449) *
                C6150) *
               C6151 * C6086 * C1046) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6151 * C164 - C163 * C78) * C2082 +
             (C6151 * C168 - C163 * C83) * C6150) *
                C2080 +
            ((C2399 - C2400) * C2082 + (C2401 - C2402) * C6150) * C2081) *
               C6086 * C1045 +
           (((C2400 - C2399) * C2082 + (C2402 - C2401) * C6150) * C2080 +
            ((C2403 - C2404) * C2082 + (C2405 - C2406) * C6150) * C2081) *
               C6086 * C1046) *
              C1047 +
          ((((C174 - C173) * C2082 + (C176 - C175) * C6150) * C2080 +
            ((C1130 - C1131) * C2082 + (C1132 - C1133) * C6150) * C2081) *
               C6086 * C1045 +
           (((C1131 - C1130) * C2082 + (C1133 - C1132) * C6150) * C2080 +
            ((C6151 * C517 - C163 * C441) * C2082 +
             (C6151 * C521 - C163 * C449) * C6150) *
                C2081) *
               C6086 * C1046) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6150 * C82 - C2082 * C78) * C2110 +
                     (C6150 * C210 - C2082 * C206) * C2080 +
                     (C2435 - C2436) * C2111 + (C2437 - C2438) * C2081) *
                        C6151 * C6086 * C1045 +
                    ((C2436 - C2435) * C2110 + (C2438 - C2437) * C2080 +
                     (C2439 - C2440) * C2111 + (C2441 - C2442) * C2081) *
                        C6151 * C6086 * C1046) *
                       C1047 +
                   (((C2082 * C79 - C6150 * C84) * C2110 +
                     (C2082 * C207 - C6150 * C211) * C2080 +
                     (C2995 - C2996) * C2111 + (C2997 - C2998) * C2081) *
                        C6151 * C6086 * C1045 +
                    ((C2996 - C2995) * C2110 + (C2998 - C2997) * C2080 +
                     (C6150 * C448 - C2082 * C441) * C2111 +
                     (C6150 * C555 - C2082 * C551) * C2081) *
                        C6151 * C6086 * C1046) *
                       C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2110 * C121 - C2190 * C78 - C2110 * C206 + C2080 * C241 +
            C2111 * C480 - C2191 * C439 - C2111 * C548 + C2081 * C583) *
               C6150 * C6151 * C6086 * C1045 -
           (C2111 * C482 - C2191 * C440 - C2111 * C550 + C2081 * C584 +
            C2110 * C480 - C2190 * C439 - C2110 * C548 + C2080 * C583) *
               C6150 * C6151 * C6086 * C1046) *
              C1047 +
          ((C2110 * C481 - C2190 * C438 - C2110 * C549 + C2080 * C582 +
            C2111 * C483 - C2191 * C441 - C2111 * C551 + C2081 * C585) *
               C6150 * C6151 * C6086 * C1046 -
           (C2111 * C481 - C2191 * C438 - C2111 * C549 + C2081 * C582 +
            C2110 * C122 - C2190 * C79 - C2110 * C207 + C2080 * C242) *
               C6150 * C6151 * C6086 * C1045) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6151 * C164 - C163 * C78) * C2110 +
                     (C6151 * C285 - C163 * C206) * C2080 +
                     (C2399 - C2400) * C2111 + (C2497 - C2498) * C2081) *
                        C6150 * C6086 * C1045 +
                    ((C2400 - C2399) * C2110 + (C2498 - C2497) * C2080 +
                     (C2403 - C2404) * C2111 + (C2499 - C2500) * C2081) *
                        C6150 * C6086 * C1046) *
                       C1047 +
                   (((C174 - C173) * C2110 + (C291 - C290) * C2080 +
                     (C1130 - C1131) * C2111 + (C1247 - C1248) * C2081) *
                        C6150 * C6086 * C1045 +
                    ((C1131 - C1130) * C2110 + (C1248 - C1247) * C2080 +
                     (C6151 * C517 - C163 * C441) * C2111 +
                     (C6151 * C615 - C163 * C551) * C2081) *
                        C6150 * C6086 * C1046) *
                       C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6150 * C82 - C2082 * C78) * C163 +
             (C6150 * C323 - C2082 * C319) * C6151) *
                C2080 +
            ((C2435 - C2436) * C163 + (C2529 - C2530) * C6151) * C2081) *
               C6086 * C1045 +
           (((C2436 - C2435) * C163 + (C2530 - C2529) * C6151) * C2080 +
            ((C2439 - C2440) * C163 + (C2531 - C2532) * C6151) * C2081) *
               C6086 * C1046) *
              C1047 +
          ((((C2082 * C79 - C6150 * C84) * C163 +
             (C2082 * C320 - C6150 * C324) * C6151) *
                C2080 +
            ((C2995 - C2996) * C163 + (C3101 - C3102) * C6151) * C2081) *
               C6086 * C1045 +
           (((C2996 - C2995) * C163 + (C3102 - C3101) * C6151) * C2080 +
            ((C6150 * C448 - C2082 * C441) * C163 +
             (C6150 * C649 - C2082 * C645) * C6151) *
                C2081) *
               C6086 * C1046) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C163 +
            (C2080 * C353 - C2110 * C319 + C2081 * C676 - C2111 * C642) *
                C6151) *
               C6150 * C6086 * C1045 +
           ((C2110 * C439 - C2080 * C480 + C2111 * C440 - C2081 * C482) * C163 +
            (C2110 * C642 - C2080 * C676 + C2111 * C644 - C2081 * C678) *
                C6151) *
               C6150 * C6086 * C1046) *
              C1047 +
          (((C2110 * C79 - C2080 * C122 + C2111 * C438 - C2081 * C481) * C163 +
            (C2110 * C320 - C2080 * C354 + C2111 * C643 - C2081 * C677) *
                C6151) *
               C6150 * C6086 * C1045 +
           ((C2080 * C481 - C2110 * C438 + C2081 * C483 - C2111 * C441) * C163 +
            (C2080 * C677 - C2110 * C643 + C2081 * C679 - C2111 * C645) *
                C6151) *
               C6150 * C6086 * C1046) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) * C2080 +
            C2599 * C2081) *
               C6150 * C6086 * C1045 -
           (C2600 * C2081 + C2599 * C2080) * C6150 * C6086 * C1046) *
              C1047 +
          ((C1363 * C2080 +
            (C163 * C517 - C387 * C441 - C163 * C645 + C6151 * C709) * C2081) *
               C6150 * C6086 * C1046 -
           (C1363 * C2081 + C405 * C2080) * C6150 * C6086 * C1045) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C6151 *
                C2080 +
            C2341 * C2081) *
               C1398 -
           (C3522 * C2081 +
            (C2082 * C745 - C2083 * C740 - C2082 * C746 + C6150 * C752) *
                C6151 * C2080) *
               C1399) *
              C1045 +
          ((C3522 * C2080 +
            (C2082 * C3511 - C2083 * C3510 - C2082 * C3512 + C6150 * C3513) *
                C6151 * C2081) *
               C1399 -
           (C2342 * C2081 + C2341 * C2080) * C1398) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C2082 +
            (C2080 * C125 - C2110 * C83 + C2081 * C484 - C2111 * C445) *
                C6150) *
               C6151 * C1398 +
           ((C2110 * C740 - C2080 * C781 + C2111 * C1749 - C2081 * C1791) *
                C2082 +
            (C2110 * C746 - C2080 * C785 + C2111 * C1752 - C2081 * C1793) *
                C6150) *
               C6151 * C1399) *
              C1045 +
          (((C2110 * C439 - C2080 * C480 + C2111 * C440 - C2081 * C482) *
                C2082 +
            (C2110 * C445 - C2080 * C484 + C2111 * C447 - C2081 * C486) *
                C6150) *
               C6151 * C1398 +
           ((C2080 * C1791 - C2110 * C1749 + C2081 * C3556 - C2111 * C3510) *
                C2082 +
            (C2080 * C1793 - C2110 * C1752 + C2081 * C3557 - C2111 * C3512) *
                C6150) *
               C6151 * C1399) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6151 * C164 - C163 * C78) * C2082 +
             (C6151 * C168 - C163 * C83) * C6150) *
                C2080 +
            ((C2399 - C2400) * C2082 + (C2401 - C2402) * C6150) * C2081) *
               C1398 +
           (((C163 * C740 - C6151 * C815) * C2082 +
             (C163 * C746 - C6151 * C819) * C6150) *
                C2080 +
            ((C3595 - C3596) * C2082 + (C3597 - C3598) * C6150) * C2081) *
               C1399) *
              C1045 +
          ((((C2400 - C2399) * C2082 + (C2402 - C2401) * C6150) * C2080 +
            ((C2403 - C2404) * C2082 + (C2405 - C2406) * C6150) * C2081) *
               C1398 +
           (((C3596 - C3595) * C2082 + (C3598 - C3597) * C6150) * C2080 +
            ((C6151 * C3592 - C163 * C3510) * C2082 +
             (C6151 * C3593 - C163 * C3512) * C6150) *
                C2081) *
               C1399) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6150 * C82 - C2082 * C78) * C2110 +
                     (C6150 * C210 - C2082 * C206) * C2080 +
                     (C2435 - C2436) * C2111 + (C2437 - C2438) * C2081) *
                        C6151 * C1398 +
                    ((C2082 * C740 - C6150 * C745) * C2110 +
                     (C2082 * C849 - C6150 * C853) * C2080 +
                     (C3635 - C3636) * C2111 + (C3637 - C3638) * C2081) *
                        C6151 * C1399) *
                       C1045 +
                   (((C2436 - C2435) * C2110 + (C2438 - C2437) * C2080 +
                     (C2439 - C2440) * C2111 + (C2441 - C2442) * C2081) *
                        C6151 * C1398 +
                    ((C3636 - C3635) * C2110 + (C3638 - C3637) * C2080 +
                     (C6150 * C3511 - C2082 * C3510) * C2111 +
                     (C6150 * C3633 - C2082 * C3632) * C2081) *
                        C6151 * C1399) *
                       C1046) *
                  C6060) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2110 * C121 - C2190 * C78 - C2110 * C206 + C2080 * C241 +
            C2111 * C480 - C2191 * C439 - C2111 * C548 + C2081 * C583) *
               C6150 * C6151 * C1398 -
           (C2111 * C1791 - C2191 * C1749 - C2111 * C1867 + C2081 * C1905 +
            C2110 * C781 - C2190 * C740 - C2110 * C849 + C2080 * C884) *
               C6150 * C6151 * C1399) *
              C1045 +
          ((C2110 * C1791 - C2190 * C1749 - C2110 * C1867 + C2080 * C1905 +
            C2111 * C3556 - C2191 * C3510 - C2111 * C3632 + C2081 * C3672) *
               C6150 * C6151 * C1399 -
           (C2111 * C482 - C2191 * C440 - C2111 * C550 + C2081 * C584 +
            C2110 * C480 - C2190 * C439 - C2110 * C548 + C2080 * C583) *
               C6150 * C6151 * C1398) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6151 * C164 - C163 * C78) * C2110 +
                     (C6151 * C285 - C163 * C206) * C2080 +
                     (C2399 - C2400) * C2111 + (C2497 - C2498) * C2081) *
                        C6150 * C1398 +
                    ((C163 * C740 - C6151 * C815) * C2110 +
                     (C163 * C849 - C6151 * C913) * C2080 +
                     (C3595 - C3596) * C2111 + (C3709 - C3710) * C2081) *
                        C6150 * C1399) *
                       C1045 +
                   (((C2400 - C2399) * C2110 + (C2498 - C2497) * C2080 +
                     (C2403 - C2404) * C2111 + (C2499 - C2500) * C2081) *
                        C6150 * C1398 +
                    ((C3596 - C3595) * C2110 + (C3710 - C3709) * C2080 +
                     (C6151 * C3592 - C163 * C3510) * C2111 +
                     (C6151 * C3707 - C163 * C3632) * C2081) *
                        C6150 * C1399) *
                       C1046) *
                  C6060) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6150 * C82 - C2082 * C78) * C163 +
             (C6150 * C323 - C2082 * C319) * C6151) *
                C2080 +
            ((C2435 - C2436) * C163 + (C2529 - C2530) * C6151) * C2081) *
               C1398 +
           (((C2082 * C740 - C6150 * C745) * C163 +
             (C2082 * C943 - C6150 * C947) * C6151) *
                C2080 +
            ((C3635 - C3636) * C163 + (C3747 - C3748) * C6151) * C2081) *
               C1399) *
              C1045 +
          ((((C2436 - C2435) * C163 + (C2530 - C2529) * C6151) * C2080 +
            ((C2439 - C2440) * C163 + (C2531 - C2532) * C6151) * C2081) *
               C1398 +
           (((C3636 - C3635) * C163 + (C3748 - C3747) * C6151) * C2080 +
            ((C6150 * C3511 - C2082 * C3510) * C163 +
             (C6150 * C3745 - C2082 * C3744) * C6151) *
                C2081) *
               C1399) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C163 +
            (C2080 * C353 - C2110 * C319 + C2081 * C676 - C2111 * C642) *
                C6151) *
               C6150 * C1398 +
           ((C2110 * C740 - C2080 * C781 + C2111 * C1749 - C2081 * C1791) *
                C163 +
            (C2110 * C943 - C2080 * C977 + C2111 * C1977 - C2081 * C2015) *
                C6151) *
               C6150 * C1399) *
              C1045 +
          (((C2110 * C439 - C2080 * C480 + C2111 * C440 - C2081 * C482) * C163 +
            (C2110 * C642 - C2080 * C676 + C2111 * C644 - C2081 * C678) *
                C6151) *
               C6150 * C1398 +
           ((C2080 * C1791 - C2110 * C1749 + C2081 * C3556 - C2111 * C3510) *
                C163 +
            (C2080 * C2015 - C2110 * C1977 + C2081 * C3782 - C2111 * C3744) *
                C6151) *
               C6150 * C1399) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) * C2080 +
            C2599 * C2081) *
               C6150 * C1398 -
           (C3825 * C2081 +
            (C163 * C815 - C387 * C740 - C163 * C943 + C6151 * C1008) * C2080) *
               C6150 * C1399) *
              C1045 +
          ((C3825 * C2080 +
            (C163 * C3592 - C387 * C3510 - C163 * C3744 + C6151 * C3817) *
                C2081) *
               C6150 * C1399 -
           (C2600 * C2081 + C2599 * C2080) * C6150 * C1398) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C6151 *
               C2080 +
           C2341 * C2081) *
              C6086 * C434 -
          (C2342 * C2081 + C2341 * C2080) * C6086 * C435 +
          (C2342 * C2080 +
           (C2082 * C2323 - C2083 * C2322 - C2082 * C2324 + C6150 * C2325) *
               C6151 * C2081) *
              C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C6151 *
               C2080 +
           (C2082 * C444 - C2083 * C439 - C2082 * C445 + C6150 * C451) * C6151 *
               C2081) *
              C6086 * C6072 * C71 -
          ((C2082 * C442 - C2083 * C438 - C2082 * C443 + C6150 * C450) * C6151 *
               C2081 +
           (C2082 * C84 - C2083 * C79 - C2082 * C85 + C6150 * C91) * C6151 *
               C2080) *
              C6086 * C6072 * C72 +
          ((C2082 * C86 - C2083 * C80 - C2082 * C87 + C6150 * C92) * C6151 *
               C2080 +
           (C2082 * C1050 - C2083 * C1049 - C2082 * C1051 + C6150 * C1052) *
               C6151 * C2081) *
              C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C6151 *
               C2080 +
           C2341 * C2081) *
              C736 -
          ((C2082 * C1751 - C2083 * C1749 - C2082 * C1752 + C6150 * C1755) *
               C6151 * C2081 +
           (C2082 * C745 - C2083 * C740 - C2082 * C746 + C6150 * C752) * C6151 *
               C2080) *
              C737 +
          ((C2082 * C747 - C2083 * C741 - C2082 * C748 + C6150 * C753) * C6151 *
               C2080 +
           (C2082 * C2627 - C2083 * C2626 - C2082 * C2628 + C6150 * C2629) *
               C6151 * C2081) *
              C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C2082 +
           (C2080 * C125 - C2110 * C83 + C2081 * C484 - C2111 * C445) * C6150) *
              C6151 * C6086 * C434 +
          ((C2110 * C439 - C2080 * C480 + C2111 * C440 - C2081 * C482) * C2082 +
           (C2110 * C445 - C2080 * C484 + C2111 * C447 - C2081 * C486) *
               C6150) *
              C6151 * C6086 * C435 +
          ((C2080 * C482 - C2110 * C440 + C2081 * C2368 - C2111 * C2322) *
               C2082 +
           (C2080 * C486 - C2110 * C447 + C2081 * C2369 - C2111 * C2324) *
               C6150) *
              C6151 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C2082 +
           (C2080 * C125 - C2110 * C83 + C2081 * C484 - C2111 * C445) * C6150) *
              C6151 * C6086 * C6072 * C71 +
          ((C2110 * C79 - C2080 * C122 + C2111 * C438 - C2081 * C481) * C2082 +
           (C2110 * C85 - C2080 * C126 + C2111 * C443 - C2081 * C485) * C6150) *
              C6151 * C6086 * C6072 * C72 +
          ((C2080 * C123 - C2110 * C80 + C2081 * C1087 - C2111 * C1049) *
               C2082 +
           (C2080 * C127 - C2110 * C87 + C2081 * C1088 - C2111 * C1051) *
               C6150) *
              C6151 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C2082 +
           (C2080 * C125 - C2110 * C83 + C2081 * C484 - C2111 * C445) * C6150) *
              C6151 * C736 +
          ((C2110 * C740 - C2080 * C781 + C2111 * C1749 - C2081 * C1791) *
               C2082 +
           (C2110 * C746 - C2080 * C785 + C2111 * C1752 - C2081 * C1793) *
               C6150) *
              C6151 * C737 +
          ((C2080 * C783 - C2110 * C741 + C2081 * C2656 - C2111 * C2626) *
               C2082 +
           (C2080 * C787 - C2110 * C748 + C2081 * C2657 - C2111 * C2628) *
               C6150) *
              C6151 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C6151 * C164 - C163 * C78) * C2082 +
            (C6151 * C168 - C163 * C83) * C6150) *
               C2080 +
           ((C2399 - C2400) * C2082 + (C2401 - C2402) * C6150) * C2081) *
              C6086 * C434 +
          (((C2400 - C2399) * C2082 + (C2402 - C2401) * C6150) * C2080 +
           ((C2403 - C2404) * C2082 + (C2405 - C2406) * C6150) * C2081) *
              C6086 * C435 +
          (((C2404 - C2403) * C2082 + (C2406 - C2405) * C6150) * C2080 +
           ((C6151 * C2396 - C163 * C2322) * C2082 +
            (C6151 * C2397 - C163 * C2324) * C6150) *
               C2081) *
              C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C6151 * C164 - C163 * C78) * C2082 +
            (C6151 * C168 - C163 * C83) * C6150) *
               C2080 +
           ((C6151 * C514 - C163 * C439) * C2082 +
            (C6151 * C518 - C163 * C445) * C6150) *
               C2081) *
              C6086 * C6072 * C71 +
          (((C174 - C173) * C2082 + (C176 - C175) * C6150) * C2080 +
           ((C1130 - C1131) * C2082 + (C1132 - C1133) * C6150) * C2081) *
              C6086 * C6072 * C72 +
          (((C178 - C177) * C2082 + (C180 - C179) * C6150) * C2080 +
           ((C6151 * C1127 - C163 * C1049) * C2082 +
            (C6151 * C1128 - C163 * C1051) * C6150) *
               C2081) *
              C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6151 * C164 - C163 * C78) * C2082 +
            (C6151 * C168 - C163 * C83) * C6150) *
               C2080 +
           ((C2399 - C2400) * C2082 + (C2401 - C2402) * C6150) * C2081) *
              C736 +
          (((C163 * C740 - C6151 * C815) * C2082 +
            (C163 * C746 - C6151 * C819) * C6150) *
               C2080 +
           ((C163 * C1749 - C6151 * C1829) * C2082 +
            (C163 * C1752 - C6151 * C1831) * C6150) *
               C2081) *
              C737 +
          (((C6151 * C817 - C163 * C741) * C2082 +
            (C6151 * C821 - C163 * C748) * C6150) *
               C2080 +
           ((C6151 * C2684 - C163 * C2626) * C2082 +
            (C6151 * C2685 - C163 * C2628) * C6150) *
               C2081) *
              C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C6150 * C82 - C2082 * C78) * C2110 +
           (C6150 * C210 - C2082 * C206) * C2080 + (C2435 - C2436) * C2111 +
           (C2437 - C2438) * C2081) *
              C6151 * C6086 * C434 +
          ((C2436 - C2435) * C2110 + (C2438 - C2437) * C2080 +
           (C2439 - C2440) * C2111 + (C2441 - C2442) * C2081) *
              C6151 * C6086 * C435 +
          ((C2440 - C2439) * C2110 + (C2442 - C2441) * C2080 +
           (C6150 * C2323 - C2082 * C2322) * C2111 +
           (C6150 * C2433 - C2082 * C2432) * C2081) *
              C6151 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C6150 * C82 - C2082 * C78) * C2110 +
                               (C6150 * C210 - C2082 * C206) * C2080 +
                               (C6150 * C444 - C2082 * C439) * C2111 +
                               (C6150 * C552 - C2082 * C548) * C2081) *
                                  C6151 * C6086 * C6072 * C71 +
                              ((C2082 * C79 - C6150 * C84) * C2110 +
                               (C2082 * C207 - C6150 * C211) * C2080 +
                               (C2082 * C438 - C6150 * C442) * C2111 +
                               (C2082 * C549 - C6150 * C553) * C2081) *
                                  C6151 * C6086 * C6072 * C72 +
                              ((C6150 * C86 - C2082 * C80) * C2110 +
                               (C6150 * C212 - C2082 * C208) * C2080 +
                               (C6150 * C1050 - C2082 * C1049) * C2111 +
                               (C6150 * C1168 - C2082 * C1167) * C2081) *
                                  C6151 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6150 * C82 - C2082 * C78) * C2110 +
           (C6150 * C210 - C2082 * C206) * C2080 + (C2435 - C2436) * C2111 +
           (C2437 - C2438) * C2081) *
              C6151 * C736 +
          ((C2082 * C740 - C6150 * C745) * C2110 +
           (C2082 * C849 - C6150 * C853) * C2080 +
           (C2082 * C1749 - C6150 * C1751) * C2111 +
           (C2082 * C1867 - C6150 * C1869) * C2081) *
              C6151 * C737 +
          ((C6150 * C747 - C2082 * C741) * C2110 +
           (C6150 * C855 - C2082 * C851) * C2080 +
           (C6150 * C2627 - C2082 * C2626) * C2111 +
           (C6150 * C2713 - C2082 * C2712) * C2081) *
              C6151 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C2110 * C121 - C2190 * C78 - C2110 * C206 + C2080 * C241 +
           C2111 * C480 - C2191 * C439 - C2111 * C548 + C2081 * C583) *
              C6150 * C6151 * C6086 * C434 -
          (C2111 * C482 - C2191 * C440 - C2111 * C550 + C2081 * C584 +
           C2110 * C480 - C2190 * C439 - C2110 * C548 + C2080 * C583) *
              C6150 * C6151 * C6086 * C435 +
          (C2110 * C482 - C2190 * C440 - C2110 * C550 + C2080 * C584 +
           C2111 * C2368 - C2191 * C2322 - C2111 * C2432 + C2081 * C2468) *
              C6150 * C6151 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C2110 * C121 - C2190 * C78 - C2110 * C206 + C2080 * C241 +
           C2111 * C480 - C2191 * C439 - C2111 * C548 + C2081 * C583) *
              C6150 * C6151 * C6086 * C6072 * C71 -
          (C2111 * C481 - C2191 * C438 - C2111 * C549 + C2081 * C582 +
           C2110 * C122 - C2190 * C79 - C2110 * C207 + C2080 * C242) *
              C6150 * C6151 * C6086 * C6072 * C72 +
          (C2110 * C123 - C2190 * C80 - C2110 * C208 + C2080 * C243 +
           C2111 * C1087 - C2191 * C1049 - C2111 * C1167 + C2081 * C1203) *
              C6150 * C6151 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C2110 * C121 - C2190 * C78 - C2110 * C206 + C2080 * C241 +
           C2111 * C480 - C2191 * C439 - C2111 * C548 + C2081 * C583) *
              C6150 * C6151 * C736 -
          (C2111 * C1791 - C2191 * C1749 - C2111 * C1867 + C2081 * C1905 +
           C2110 * C781 - C2190 * C740 - C2110 * C849 + C2080 * C884) *
              C6150 * C6151 * C737 +
          (C2110 * C783 - C2190 * C741 - C2110 * C851 + C2080 * C885 +
           C2111 * C2656 - C2191 * C2626 - C2111 * C2712 + C2081 * C2740) *
              C6150 * C6151 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] += (-std::pow(Pi, 2.5) *
                  (((C6151 * C164 - C163 * C78) * C2110 +
                    (C6151 * C285 - C163 * C206) * C2080 +
                    (C2399 - C2400) * C2111 + (C2497 - C2498) * C2081) *
                       C6150 * C6086 * C434 +
                   ((C2400 - C2399) * C2110 + (C2498 - C2497) * C2080 +
                    (C2403 - C2404) * C2111 + (C2499 - C2500) * C2081) *
                       C6150 * C6086 * C435 +
                   ((C2404 - C2403) * C2110 + (C2500 - C2499) * C2080 +
                    (C6151 * C2396 - C163 * C2322) * C2111 +
                    (C6151 * C2495 - C163 * C2432) * C2081) *
                       C6150 * C6086 * C436) *
                  C6060) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C6151 * C164 - C163 * C78) * C2110 +
                    (C6151 * C285 - C163 * C206) * C2080 +
                    (C6151 * C514 - C163 * C439) * C2111 +
                    (C6151 * C612 - C163 * C548) * C2081) *
                       C6150 * C6086 * C6072 * C71 +
                   ((C174 - C173) * C2110 + (C291 - C290) * C2080 +
                    (C1130 - C1131) * C2111 + (C1247 - C1248) * C2081) *
                       C6150 * C6086 * C6072 * C72 +
                   ((C178 - C177) * C2110 + (C293 - C292) * C2080 +
                    (C6151 * C1127 - C163 * C1049) * C2111 +
                    (C6151 * C1245 - C163 * C1167) * C2081) *
                       C6150 * C6086 * C6072 * C73)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C6151 * C164 - C163 * C78) * C2110 +
                    (C6151 * C285 - C163 * C206) * C2080 +
                    (C2399 - C2400) * C2111 + (C2497 - C2498) * C2081) *
                       C6150 * C736 +
                   ((C163 * C740 - C6151 * C815) * C2110 +
                    (C163 * C849 - C6151 * C913) * C2080 +
                    (C163 * C1749 - C6151 * C1829) * C2111 +
                    (C163 * C1867 - C6151 * C1941) * C2081) *
                       C6150 * C737 +
                   ((C6151 * C817 - C163 * C741) * C2110 +
                    (C6151 * C915 - C163 * C851) * C2080 +
                    (C6151 * C2684 - C163 * C2626) * C2111 +
                    (C6151 * C2767 - C163 * C2712) * C2081) *
                       C6150 * C738) *
                  C6072 * C6060) /
                     (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C6150 * C82 - C2082 * C78) * C163 +
            (C6150 * C323 - C2082 * C319) * C6151) *
               C2080 +
           ((C2435 - C2436) * C163 + (C2529 - C2530) * C6151) * C2081) *
              C6086 * C434 +
          (((C2436 - C2435) * C163 + (C2530 - C2529) * C6151) * C2080 +
           ((C2439 - C2440) * C163 + (C2531 - C2532) * C6151) * C2081) *
              C6086 * C435 +
          (((C2440 - C2439) * C163 + (C2532 - C2531) * C6151) * C2080 +
           ((C6150 * C2323 - C2082 * C2322) * C163 +
            (C6150 * C2527 - C2082 * C2526) * C6151) *
               C2081) *
              C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C6150 * C82 - C2082 * C78) * C163 +
                                (C6150 * C323 - C2082 * C319) * C6151) *
                                   C2080 +
                               ((C6150 * C444 - C2082 * C439) * C163 +
                                (C6150 * C646 - C2082 * C642) * C6151) *
                                   C2081) *
                                  C6086 * C6072 * C71 +
                              (((C2082 * C79 - C6150 * C84) * C163 +
                                (C2082 * C320 - C6150 * C324) * C6151) *
                                   C2080 +
                               ((C2082 * C438 - C6150 * C442) * C163 +
                                (C2082 * C643 - C6150 * C647) * C6151) *
                                   C2081) *
                                  C6086 * C6072 * C72 +
                              (((C6150 * C86 - C2082 * C80) * C163 +
                                (C6150 * C325 - C2082 * C321) * C6151) *
                                   C2080 +
                               ((C6150 * C1050 - C2082 * C1049) * C163 +
                                (C6150 * C1283 - C2082 * C1282) * C6151) *
                                   C2081) *
                                  C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6150 * C82 - C2082 * C78) * C163 +
            (C6150 * C323 - C2082 * C319) * C6151) *
               C2080 +
           ((C2435 - C2436) * C163 + (C2529 - C2530) * C6151) * C2081) *
              C736 +
          (((C2082 * C740 - C6150 * C745) * C163 +
            (C2082 * C943 - C6150 * C947) * C6151) *
               C2080 +
           ((C2082 * C1749 - C6150 * C1751) * C163 +
            (C2082 * C1977 - C6150 * C1979) * C6151) *
               C2081) *
              C737 +
          (((C6150 * C747 - C2082 * C741) * C163 +
            (C6150 * C949 - C2082 * C945) * C6151) *
               C2080 +
           ((C6150 * C2627 - C2082 * C2626) * C163 +
            (C6150 * C2795 - C2082 * C2794) * C6151) *
               C2081) *
              C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C163 +
           (C2080 * C353 - C2110 * C319 + C2081 * C676 - C2111 * C642) *
               C6151) *
              C6150 * C6086 * C434 +
          ((C2110 * C439 - C2080 * C480 + C2111 * C440 - C2081 * C482) * C163 +
           (C2110 * C642 - C2080 * C676 + C2111 * C644 - C2081 * C678) *
               C6151) *
              C6150 * C6086 * C435 +
          ((C2080 * C482 - C2110 * C440 + C2081 * C2368 - C2111 * C2322) *
               C163 +
           (C2080 * C678 - C2110 * C644 + C2081 * C2558 - C2111 * C2526) *
               C6151) *
              C6150 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C163 +
           (C2080 * C353 - C2110 * C319 + C2081 * C676 - C2111 * C642) *
               C6151) *
              C6150 * C6086 * C6072 * C71 +
          ((C2110 * C79 - C2080 * C122 + C2111 * C438 - C2081 * C481) * C163 +
           (C2110 * C320 - C2080 * C354 + C2111 * C643 - C2081 * C677) *
               C6151) *
              C6150 * C6086 * C6072 * C72 +
          ((C2080 * C123 - C2110 * C80 + C2081 * C1087 - C2111 * C1049) * C163 +
           (C2080 * C355 - C2110 * C321 + C2081 * C1318 - C2111 * C1282) *
               C6151) *
              C6150 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C163 +
           (C2080 * C353 - C2110 * C319 + C2081 * C676 - C2111 * C642) *
               C6151) *
              C6150 * C736 +
          ((C2110 * C740 - C2080 * C781 + C2111 * C1749 - C2081 * C1791) *
               C163 +
           (C2110 * C943 - C2080 * C977 + C2111 * C1977 - C2081 * C2015) *
               C6151) *
              C6150 * C737 +
          ((C2080 * C783 - C2110 * C741 + C2081 * C2656 - C2111 * C2626) *
               C163 +
           (C2080 * C979 - C2110 * C945 + C2081 * C2822 - C2111 * C2794) *
               C6151) *
              C6150 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::pow(Pi, 2.5) *
         (((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) * C2080 +
           C2599 * C2081) *
              C6150 * C6086 * C434 -
          (C2600 * C2081 + C2599 * C2080) * C6150 * C6086 * C435 +
          (C2600 * C2080 +
           (C163 * C2396 - C387 * C2322 - C163 * C2526 + C6151 * C2585) *
               C2081) *
              C6150 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) * C2080 +
           (C163 * C514 - C387 * C439 - C163 * C642 + C6151 * C707) * C2081) *
              C6150 * C6086 * C6072 * C71 -
          (C1363 * C2081 + C405 * C2080) * C6150 * C6086 * C6072 * C72 +
          (C406 * C2080 +
           (C163 * C1127 - C387 * C1049 - C163 * C1282 + C6151 * C1355) *
               C2081) *
              C6150 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) * C2080 +
           C2599 * C2081) *
              C6150 * C736 -
          ((C163 * C1829 - C387 * C1749 - C163 * C1977 + C6151 * C2051) *
               C2081 +
           (C163 * C815 - C387 * C740 - C163 * C943 + C6151 * C1008) * C2080) *
              C6150 * C737 +
          ((C163 * C817 - C387 * C741 - C163 * C945 + C6151 * C1009) * C2080 +
           (C163 * C2684 - C387 * C2626 - C163 * C2794 + C6151 * C2849) *
               C2081) *
              C6150 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C6151 *
                C2080 +
            C2341 * C2081) *
               C1398 -
           ((C2082 * C1751 - C2083 * C1749 - C2082 * C1752 + C6150 * C1755) *
                C6151 * C2081 +
            (C2082 * C745 - C2083 * C740 - C2082 * C746 + C6150 * C752) *
                C6151 * C2080) *
               C1399) *
              C6072 * C1047 +
          (((C2082 * C743 - C2083 * C739 - C2082 * C744 + C6150 * C751) *
                C6151 * C2080 +
            (C2082 * C1753 - C2083 * C1750 - C2082 * C1754 + C6150 * C1756) *
                C6151 * C2081) *
               C1399 -
           (C2892 * C2081 +
            (C2082 * C84 - C2083 * C79 - C2082 * C85 + C6150 * C91) * C6151 *
                C2080) *
               C1398) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C2082 +
            (C2080 * C125 - C2110 * C83 + C2081 * C484 - C2111 * C445) *
                C6150) *
               C6151 * C1398 +
           ((C2110 * C740 - C2080 * C781 + C2111 * C1749 - C2081 * C1791) *
                C2082 +
            (C2110 * C746 - C2080 * C785 + C2111 * C1752 - C2081 * C1793) *
                C6150) *
               C6151 * C1399) *
              C6072 * C1047 +
          (((C2110 * C79 - C2080 * C122 + C2111 * C438 - C2081 * C481) * C2082 +
            (C2110 * C85 - C2080 * C126 + C2111 * C443 - C2081 * C485) *
                C6150) *
               C6151 * C1398 +
           ((C2080 * C782 - C2110 * C739 + C2081 * C1792 - C2111 * C1750) *
                C2082 +
            (C2080 * C786 - C2110 * C744 + C2081 * C1794 - C2111 * C1754) *
                C6150) *
               C6151 * C1399) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6151 * C164 - C163 * C78) * C2082 +
             (C6151 * C168 - C163 * C83) * C6150) *
                C2080 +
            ((C2399 - C2400) * C2082 + (C2401 - C2402) * C6150) * C2081) *
               C1398 +
           (((C163 * C740 - C6151 * C815) * C2082 +
             (C163 * C746 - C6151 * C819) * C6150) *
                C2080 +
            ((C163 * C1749 - C6151 * C1829) * C2082 +
             (C163 * C1752 - C6151 * C1831) * C6150) *
                C2081) *
               C1399) *
              C6072 * C1047 +
          ((((C174 - C173) * C2082 + (C176 - C175) * C6150) * C2080 +
            ((C1130 - C1131) * C2082 + (C1132 - C1133) * C6150) * C2081) *
               C1398 +
           (((C1482 - C1481) * C2082 + (C1484 - C1483) * C6150) * C2080 +
            ((C6151 * C1830 - C163 * C1750) * C2082 +
             (C6151 * C1832 - C163 * C1754) * C6150) *
                C2081) *
               C1399) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6150 * C82 - C2082 * C78) * C2110 +
                     (C6150 * C210 - C2082 * C206) * C2080 +
                     (C2435 - C2436) * C2111 + (C2437 - C2438) * C2081) *
                        C6151 * C1398 +
                    ((C2082 * C740 - C6150 * C745) * C2110 +
                     (C2082 * C849 - C6150 * C853) * C2080 +
                     (C2082 * C1749 - C6150 * C1751) * C2111 +
                     (C2082 * C1867 - C6150 * C1869) * C2081) *
                        C6151 * C1399) *
                       C6072 * C1047 +
                   (((C2082 * C79 - C6150 * C84) * C2110 +
                     (C2082 * C207 - C6150 * C211) * C2080 +
                     (C2995 - C2996) * C2111 + (C2997 - C2998) * C2081) *
                        C6151 * C1398 +
                    ((C6150 * C743 - C2082 * C739) * C2110 +
                     (C6150 * C854 - C2082 * C850) * C2080 +
                     (C6150 * C1753 - C2082 * C1750) * C2111 +
                     (C6150 * C1870 - C2082 * C1868) * C2081) *
                        C6151 * C1399) *
                       C6072 * C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2110 * C121 - C2190 * C78 - C2110 * C206 + C2080 * C241 +
            C2111 * C480 - C2191 * C439 - C2111 * C548 + C2081 * C583) *
               C6150 * C6151 * C1398 -
           (C2111 * C1791 - C2191 * C1749 - C2111 * C1867 + C2081 * C1905 +
            C2110 * C781 - C2190 * C740 - C2110 * C849 + C2080 * C884) *
               C6150 * C6151 * C1399) *
              C6072 * C1047 +
          ((C2110 * C782 - C2190 * C739 - C2110 * C850 + C2080 * C883 +
            C2111 * C1792 - C2191 * C1750 - C2111 * C1868 + C2081 * C1906) *
               C6150 * C6151 * C1399 -
           (C2111 * C481 - C2191 * C438 - C2111 * C549 + C2081 * C582 +
            C2110 * C122 - C2190 * C79 - C2110 * C207 + C2080 * C242) *
               C6150 * C6151 * C1398) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6151 * C164 - C163 * C78) * C2110 +
                     (C6151 * C285 - C163 * C206) * C2080 +
                     (C2399 - C2400) * C2111 + (C2497 - C2498) * C2081) *
                        C6150 * C1398 +
                    ((C163 * C740 - C6151 * C815) * C2110 +
                     (C163 * C849 - C6151 * C913) * C2080 +
                     (C163 * C1749 - C6151 * C1829) * C2111 +
                     (C163 * C1867 - C6151 * C1941) * C2081) *
                        C6150 * C1399) *
                       C6072 * C1047 +
                   (((C174 - C173) * C2110 + (C291 - C290) * C2080 +
                     (C1130 - C1131) * C2111 + (C1247 - C1248) * C2081) *
                        C6150 * C1398 +
                    ((C1482 - C1481) * C2110 + (C1599 - C1598) * C2080 +
                     (C6151 * C1830 - C163 * C1750) * C2111 +
                     (C6151 * C1942 - C163 * C1868) * C2081) *
                        C6150 * C1399) *
                       C6072 * C1048)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6150 * C82 - C2082 * C78) * C163 +
             (C6150 * C323 - C2082 * C319) * C6151) *
                C2080 +
            ((C2435 - C2436) * C163 + (C2529 - C2530) * C6151) * C2081) *
               C1398 +
           (((C2082 * C740 - C6150 * C745) * C163 +
             (C2082 * C943 - C6150 * C947) * C6151) *
                C2080 +
            ((C2082 * C1749 - C6150 * C1751) * C163 +
             (C2082 * C1977 - C6150 * C1979) * C6151) *
                C2081) *
               C1399) *
              C6072 * C1047 +
          ((((C2082 * C79 - C6150 * C84) * C163 +
             (C2082 * C320 - C6150 * C324) * C6151) *
                C2080 +
            ((C2995 - C2996) * C163 + (C3101 - C3102) * C6151) * C2081) *
               C1398 +
           (((C6150 * C743 - C2082 * C739) * C163 +
             (C6150 * C948 - C2082 * C944) * C6151) *
                C2080 +
            ((C6150 * C1753 - C2082 * C1750) * C163 +
             (C6150 * C1980 - C2082 * C1978) * C6151) *
                C2081) *
               C1399) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C163 +
            (C2080 * C353 - C2110 * C319 + C2081 * C676 - C2111 * C642) *
                C6151) *
               C6150 * C1398 +
           ((C2110 * C740 - C2080 * C781 + C2111 * C1749 - C2081 * C1791) *
                C163 +
            (C2110 * C943 - C2080 * C977 + C2111 * C1977 - C2081 * C2015) *
                C6151) *
               C6150 * C1399) *
              C6072 * C1047 +
          (((C2110 * C79 - C2080 * C122 + C2111 * C438 - C2081 * C481) * C163 +
            (C2110 * C320 - C2080 * C354 + C2111 * C643 - C2081 * C677) *
                C6151) *
               C6150 * C1398 +
           ((C2080 * C782 - C2110 * C739 + C2081 * C1792 - C2111 * C1750) *
                C163 +
            (C2080 * C978 - C2110 * C944 + C2081 * C2016 - C2111 * C1978) *
                C6151) *
               C6150 * C1399) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) * C2080 +
            C2599 * C2081) *
               C6150 * C1398 -
           ((C163 * C1829 - C387 * C1749 - C163 * C1977 + C6151 * C2051) *
                C2081 +
            (C163 * C815 - C387 * C740 - C163 * C943 + C6151 * C1008) * C2080) *
               C6150 * C1399) *
              C6072 * C1047 +
          ((C1714 * C2080 +
            (C163 * C1830 - C387 * C1750 - C163 * C1978 + C6151 * C2052) *
                C2081) *
               C6150 * C1399 -
           (C1363 * C2081 + C405 * C2080) * C6150 * C1398) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C6151 *
               C2080 +
           (C2082 * C444 - C2083 * C439 - C2082 * C445 + C6150 * C451) * C6151 *
               C2081) *
              C6086 * C6072 * C71 -
          ((C2082 * C442 - C2083 * C438 - C2082 * C443 + C6150 * C450) * C6151 *
               C2081 +
           (C2082 * C84 - C2083 * C79 - C2082 * C85 + C6150 * C91) * C6151 *
               C2080) *
              C6086 * C6072 * C72 +
          ((C2082 * C86 - C2083 * C80 - C2082 * C87 + C6150 * C92) * C6151 *
               C2080 +
           (C2082 * C1050 - C2083 * C1049 - C2082 * C1051 + C6150 * C1052) *
               C6151 * C2081) *
              C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C6151 *
               C2080 +
           C2341 * C2081) *
              C6086 * C434 -
          (C2342 * C2081 + C2341 * C2080) * C6086 * C435 +
          (C2342 * C2080 +
           (C2082 * C2323 - C2083 * C2322 - C2082 * C2324 + C6150 * C2325) *
               C6151 * C2081) *
              C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C2082 +
           (C2080 * C125 - C2110 * C83 + C2081 * C484 - C2111 * C445) * C6150) *
              C6151 * C6086 * C6072 * C71 +
          ((C2110 * C79 - C2080 * C122 + C2111 * C438 - C2081 * C481) * C2082 +
           (C2110 * C85 - C2080 * C126 + C2111 * C443 - C2081 * C485) * C6150) *
              C6151 * C6086 * C6072 * C72 +
          ((C2080 * C123 - C2110 * C80 + C2081 * C1087 - C2111 * C1049) *
               C2082 +
           (C2080 * C127 - C2110 * C87 + C2081 * C1088 - C2111 * C1051) *
               C6150) *
              C6151 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C2082 +
           (C2080 * C125 - C2110 * C83 + C2081 * C484 - C2111 * C445) * C6150) *
              C6151 * C6086 * C434 +
          ((C2110 * C439 - C2080 * C480 + C2111 * C440 - C2081 * C482) * C2082 +
           (C2110 * C445 - C2080 * C484 + C2111 * C447 - C2081 * C486) *
               C6150) *
              C6151 * C6086 * C435 +
          ((C2080 * C482 - C2110 * C440 + C2081 * C2368 - C2111 * C2322) *
               C2082 +
           (C2080 * C486 - C2110 * C447 + C2081 * C2369 - C2111 * C2324) *
               C6150) *
              C6151 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6151 * C164 - C163 * C78) * C2082 +
            (C6151 * C168 - C163 * C83) * C6150) *
               C2080 +
           ((C6151 * C514 - C163 * C439) * C2082 +
            (C6151 * C518 - C163 * C445) * C6150) *
               C2081) *
              C6086 * C6072 * C71 +
          (((C174 - C173) * C2082 + (C176 - C175) * C6150) * C2080 +
           ((C1130 - C1131) * C2082 + (C1132 - C1133) * C6150) * C2081) *
              C6086 * C6072 * C72 +
          (((C178 - C177) * C2082 + (C180 - C179) * C6150) * C2080 +
           ((C6151 * C1127 - C163 * C1049) * C2082 +
            (C6151 * C1128 - C163 * C1051) * C6150) *
               C2081) *
              C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6151 * C164 - C163 * C78) * C2082 +
            (C6151 * C168 - C163 * C83) * C6150) *
               C2080 +
           ((C2399 - C2400) * C2082 + (C2401 - C2402) * C6150) * C2081) *
              C6086 * C434 +
          (((C2400 - C2399) * C2082 + (C2402 - C2401) * C6150) * C2080 +
           ((C2403 - C2404) * C2082 + (C2405 - C2406) * C6150) * C2081) *
              C6086 * C435 +
          (((C2404 - C2403) * C2082 + (C2406 - C2405) * C6150) * C2080 +
           ((C6151 * C2396 - C163 * C2322) * C2082 +
            (C6151 * C2397 - C163 * C2324) * C6150) *
               C2081) *
              C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C6150 * C82 - C2082 * C78) * C2110 +
                    (C6150 * C210 - C2082 * C206) * C2080 +
                    (C6150 * C444 - C2082 * C439) * C2111 +
                    (C6150 * C552 - C2082 * C548) * C2081) *
                       C6151 * C6086 * C6072 * C71 +
                   ((C2082 * C79 - C6150 * C84) * C2110 +
                    (C2082 * C207 - C6150 * C211) * C2080 +
                    (C2082 * C438 - C6150 * C442) * C2111 +
                    (C2082 * C549 - C6150 * C553) * C2081) *
                       C6151 * C6086 * C6072 * C72 +
                   ((C6150 * C86 - C2082 * C80) * C2110 +
                    (C6150 * C212 - C2082 * C208) * C2080 +
                    (C6150 * C1050 - C2082 * C1049) * C2111 +
                    (C6150 * C1168 - C2082 * C1167) * C2081) *
                       C6151 * C6086 * C6072 * C73)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C6150 * C82 - C2082 * C78) * C2110 +
                    (C6150 * C210 - C2082 * C206) * C2080 +
                    (C2435 - C2436) * C2111 + (C2437 - C2438) * C2081) *
                       C6151 * C6086 * C434 +
                   ((C2436 - C2435) * C2110 + (C2438 - C2437) * C2080 +
                    (C2439 - C2440) * C2111 + (C2441 - C2442) * C2081) *
                       C6151 * C6086 * C435 +
                   ((C2440 - C2439) * C2110 + (C2442 - C2441) * C2080 +
                    (C6150 * C2323 - C2082 * C2322) * C2111 +
                    (C6150 * C2433 - C2082 * C2432) * C2081) *
                       C6151 * C6086 * C436) *
                  C6060) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2110 * C121 - C2190 * C78 - C2110 * C206 + C2080 * C241 +
           C2111 * C480 - C2191 * C439 - C2111 * C548 + C2081 * C583) *
              C6150 * C6151 * C6086 * C6072 * C71 -
          (C2111 * C481 - C2191 * C438 - C2111 * C549 + C2081 * C582 +
           C2110 * C122 - C2190 * C79 - C2110 * C207 + C2080 * C242) *
              C6150 * C6151 * C6086 * C6072 * C72 +
          (C2110 * C123 - C2190 * C80 - C2110 * C208 + C2080 * C243 +
           C2111 * C1087 - C2191 * C1049 - C2111 * C1167 + C2081 * C1203) *
              C6150 * C6151 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2110 * C121 - C2190 * C78 - C2110 * C206 + C2080 * C241 +
           C2111 * C480 - C2191 * C439 - C2111 * C548 + C2081 * C583) *
              C6150 * C6151 * C6086 * C434 -
          (C2111 * C482 - C2191 * C440 - C2111 * C550 + C2081 * C584 +
           C2110 * C480 - C2190 * C439 - C2110 * C548 + C2080 * C583) *
              C6150 * C6151 * C6086 * C435 +
          (C2110 * C482 - C2190 * C440 - C2110 * C550 + C2080 * C584 +
           C2111 * C2368 - C2191 * C2322 - C2111 * C2432 + C2081 * C2468) *
              C6150 * C6151 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyz[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C6151 * C164 - C163 * C78) * C2110 +
                    (C6151 * C285 - C163 * C206) * C2080 +
                    (C6151 * C514 - C163 * C439) * C2111 +
                    (C6151 * C612 - C163 * C548) * C2081) *
                       C6150 * C6086 * C6072 * C71 +
                   ((C174 - C173) * C2110 + (C291 - C290) * C2080 +
                    (C1130 - C1131) * C2111 + (C1247 - C1248) * C2081) *
                       C6150 * C6086 * C6072 * C72 +
                   ((C178 - C177) * C2110 + (C293 - C292) * C2080 +
                    (C6151 * C1127 - C163 * C1049) * C2111 +
                    (C6151 * C1245 - C163 * C1167) * C2081) *
                       C6150 * C6086 * C6072 * C73)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C6151 * C164 - C163 * C78) * C2110 +
                    (C6151 * C285 - C163 * C206) * C2080 +
                    (C2399 - C2400) * C2111 + (C2497 - C2498) * C2081) *
                       C6150 * C6086 * C434 +
                   ((C2400 - C2399) * C2110 + (C2498 - C2497) * C2080 +
                    (C2403 - C2404) * C2111 + (C2499 - C2500) * C2081) *
                       C6150 * C6086 * C435 +
                   ((C2404 - C2403) * C2110 + (C2500 - C2499) * C2080 +
                    (C6151 * C2396 - C163 * C2322) * C2111 +
                    (C6151 * C2495 - C163 * C2432) * C2081) *
                       C6150 * C6086 * C436) *
                  C6060) /
                     (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6150 * C82 - C2082 * C78) * C163 +
            (C6150 * C323 - C2082 * C319) * C6151) *
               C2080 +
           ((C6150 * C444 - C2082 * C439) * C163 +
            (C6150 * C646 - C2082 * C642) * C6151) *
               C2081) *
              C6086 * C6072 * C71 +
          (((C2082 * C79 - C6150 * C84) * C163 +
            (C2082 * C320 - C6150 * C324) * C6151) *
               C2080 +
           ((C2082 * C438 - C6150 * C442) * C163 +
            (C2082 * C643 - C6150 * C647) * C6151) *
               C2081) *
              C6086 * C6072 * C72 +
          (((C6150 * C86 - C2082 * C80) * C163 +
            (C6150 * C325 - C2082 * C321) * C6151) *
               C2080 +
           ((C6150 * C1050 - C2082 * C1049) * C163 +
            (C6150 * C1283 - C2082 * C1282) * C6151) *
               C2081) *
              C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6150 * C82 - C2082 * C78) * C163 +
            (C6150 * C323 - C2082 * C319) * C6151) *
               C2080 +
           ((C2435 - C2436) * C163 + (C2529 - C2530) * C6151) * C2081) *
              C6086 * C434 +
          (((C2436 - C2435) * C163 + (C2530 - C2529) * C6151) * C2080 +
           ((C2439 - C2440) * C163 + (C2531 - C2532) * C6151) * C2081) *
              C6086 * C435 +
          (((C2440 - C2439) * C163 + (C2532 - C2531) * C6151) * C2080 +
           ((C6150 * C2323 - C2082 * C2322) * C163 +
            (C6150 * C2527 - C2082 * C2526) * C6151) *
               C2081) *
              C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C163 +
           (C2080 * C353 - C2110 * C319 + C2081 * C676 - C2111 * C642) *
               C6151) *
              C6150 * C6086 * C6072 * C71 +
          ((C2110 * C79 - C2080 * C122 + C2111 * C438 - C2081 * C481) * C163 +
           (C2110 * C320 - C2080 * C354 + C2111 * C643 - C2081 * C677) *
               C6151) *
              C6150 * C6086 * C6072 * C72 +
          ((C2080 * C123 - C2110 * C80 + C2081 * C1087 - C2111 * C1049) * C163 +
           (C2080 * C355 - C2110 * C321 + C2081 * C1318 - C2111 * C1282) *
               C6151) *
              C6150 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2080 * C121 - C2110 * C78 + C2081 * C480 - C2111 * C439) * C163 +
           (C2080 * C353 - C2110 * C319 + C2081 * C676 - C2111 * C642) *
               C6151) *
              C6150 * C6086 * C434 +
          ((C2110 * C439 - C2080 * C480 + C2111 * C440 - C2081 * C482) * C163 +
           (C2110 * C642 - C2080 * C676 + C2111 * C644 - C2081 * C678) *
               C6151) *
              C6150 * C6086 * C435 +
          ((C2080 * C482 - C2110 * C440 + C2081 * C2368 - C2111 * C2322) *
               C163 +
           (C2080 * C678 - C2110 * C644 + C2081 * C2558 - C2111 * C2526) *
               C6151) *
              C6150 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) * C2080 +
           (C163 * C514 - C387 * C439 - C163 * C642 + C6151 * C707) * C2081) *
              C6150 * C6086 * C6072 * C71 -
          (C1363 * C2081 + C405 * C2080) * C6150 * C6086 * C6072 * C72 +
          (C406 * C2080 +
           (C163 * C1127 - C387 * C1049 - C163 * C1282 + C6151 * C1355) *
               C2081) *
              C6150 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C163 * C164 - C387 * C78 - C163 * C319 + C6151 * C388) * C2080 +
           C2599 * C2081) *
              C6150 * C6086 * C434 -
          (C2600 * C2081 + C2599 * C2080) * C6150 * C6086 * C435 +
          (C2600 * C2080 +
           (C163 * C2396 - C387 * C2322 - C163 * C2526 + C6151 * C2585) *
               C2081) *
              C6150 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C3851 +
            C4342 * C3852) *
               C6152 * C6086 * C1045 -
           (C3521 * C3852 + C2339 * C3851) * C6152 * C6086 * C1046) *
              C1047 +
          ((C2891 * C3851 +
            (C2082 * C1753 - C2083 * C1750 - C2082 * C1754 + C6150 * C1756) *
                C3852) *
               C6152 * C6086 * C1046 -
           ((C2082 * C743 - C2083 * C739 - C2082 * C744 + C6150 * C751) *
                C3852 +
            (C2082 * C84 - C2083 * C79 - C2082 * C85 + C6150 * C91) * C3851) *
               C6152 * C6086 * C1045) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6152 * C121 - C120 * C78) * C2082 +
             (C6152 * C125 - C120 * C83) * C6150) *
                C3851 +
            ((C4372 - C4373) * C2082 + (C4374 - C4375) * C6150) * C3852) *
               C6086 * C1045 +
           (((C120 * C439 - C6152 * C480) * C2082 +
             (C120 * C445 - C6152 * C484) * C6150) *
                C3851 +
            ((C120 * C1749 - C6152 * C1791) * C2082 +
             (C120 * C1752 - C6152 * C1793) * C6150) *
                C3852) *
               C6086 * C1046) *
              C1047 +
          ((((C131 - C130) * C2082 + (C133 - C132) * C6150) * C3851 +
            ((C1441 - C1442) * C2082 + (C1443 - C1444) * C6150) * C3852) *
               C6086 * C1045 +
           (((C1091 - C1090) * C2082 + (C1093 - C1092) * C6150) * C3851 +
            ((C6152 * C1792 - C120 * C1750) * C2082 +
             (C6152 * C1794 - C120 * C1754) * C6150) *
                C3852) *
               C6086 * C1046) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C2082 +
            (C3851 * C168 - C3905 * C83 + C3852 * C819 - C3906 * C746) *
                C6150) *
               C6152 * C6086 * C1045 +
           ((C3905 * C439 - C3851 * C514 + C3906 * C1749 - C3852 * C1829) *
                C2082 +
            (C3905 * C445 - C3851 * C518 + C3906 * C1752 - C3852 * C1831) *
                C6150) *
               C6152 * C6086 * C1046) *
              C1047 +
          (((C3905 * C79 - C3851 * C165 + C3906 * C739 - C3852 * C816) * C2082 +
            (C3905 * C85 - C3851 * C169 + C3906 * C744 - C3852 * C820) *
                C6150) *
               C6152 * C6086 * C1045 +
           ((C3851 * C515 - C3905 * C438 + C3852 * C1830 - C3906 * C1750) *
                C2082 +
            (C3851 * C519 - C3905 * C443 + C3852 * C1832 - C3906 * C1754) *
                C6150) *
               C6152 * C6086 * C1046) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6150 * C82 - C2082 * C78) * C120 +
             (C6150 * C210 - C2082 * C206) * C6152) *
                C3851 +
            ((C4436 - C4437) * C120 + (C4438 - C4439) * C6152) * C3852) *
               C6086 * C1045 +
           (((C2436 - C2435) * C120 + (C2438 - C2437) * C6152) * C3851 +
            ((C3635 - C3636) * C120 + (C3637 - C3638) * C6152) * C3852) *
               C6086 * C1046) *
              C1047 +
          ((((C2082 * C79 - C6150 * C84) * C120 +
             (C2082 * C207 - C6150 * C211) * C6152) *
                C3851 +
            ((C2082 * C739 - C6150 * C743) * C120 +
             (C2082 * C850 - C6150 * C854) * C6152) *
                C3852) *
               C6086 * C1045 +
           (((C2996 - C2995) * C120 + (C2998 - C2997) * C6152) * C3851 +
            ((C6150 * C1753 - C2082 * C1750) * C120 +
             (C6150 * C1870 - C2082 * C1868) * C6152) *
                C3852) *
               C6086 * C1046) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C6150 *
                C3851 +
            C4485 * C3852) *
               C6086 * C1045 -
           ((C120 * C1791 - C240 * C1749 - C120 * C1867 + C6152 * C1905) *
                C6150 * C3852 +
            (C120 * C480 - C240 * C439 - C120 * C548 + C6152 * C583) * C6150 *
                C3851) *
               C6086 * C1046) *
              C1047 +
          ((C1211 * C6150 * C3851 +
            (C120 * C1792 - C240 * C1750 - C120 * C1868 + C6152 * C1906) *
                C6150 * C3852) *
               C6086 * C1046 -
           (C1562 * C6150 * C3852 + C258 * C6150 * C3851) * C6086 * C1045) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C120 +
            (C3851 * C285 - C3905 * C206 + C3852 * C913 - C3906 * C849) *
                C6152) *
               C6150 * C6086 * C1045 +
           ((C3905 * C439 - C3851 * C514 + C3906 * C1749 - C3852 * C1829) *
                C120 +
            (C3905 * C548 - C3851 * C612 + C3906 * C1867 - C3852 * C1941) *
                C6152) *
               C6150 * C6086 * C1046) *
              C1047 +
          (((C3905 * C79 - C3851 * C165 + C3906 * C739 - C3852 * C816) * C120 +
            (C3905 * C207 - C3851 * C286 + C3906 * C850 - C3852 * C914) *
                C6152) *
               C6150 * C6086 * C1045 +
           ((C3851 * C515 - C3905 * C438 + C3852 * C1830 - C3906 * C1750) *
                C120 +
            (C3851 * C613 - C3905 * C549 + C3852 * C1942 - C3906 * C1868) *
                C6152) *
               C6150 * C6086 * C1046) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6150 * C82 - C2082 * C78) * C3905 +
                      (C6150 * C323 - C2082 * C319) * C3851 +
                      (C4436 - C4437) * C3906 + (C4542 - C4543) * C3852) *
                         C6152 * C6086 * C1045 +
                     ((C2436 - C2435) * C3905 + (C2530 - C2529) * C3851 +
                      (C3635 - C3636) * C3906 + (C3747 - C3748) * C3852) *
                         C6152 * C6086 * C1046) *
                        C1047 +
                    (((C2082 * C79 - C6150 * C84) * C3905 +
                      (C2082 * C320 - C6150 * C324) * C3851 +
                      (C2082 * C739 - C6150 * C743) * C3906 +
                      (C2082 * C944 - C6150 * C948) * C3852) *
                         C6152 * C6086 * C1045 +
                     ((C2996 - C2995) * C3905 + (C3102 - C3101) * C3851 +
                      (C6150 * C1753 - C2082 * C1750) * C3906 +
                      (C6150 * C1980 - C2082 * C1978) * C3852) *
                         C6152 * C6086 * C1046) *
                        C1048)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6152 * C121 - C120 * C78) * C3905 +
                      (C6152 * C353 - C120 * C319) * C3851 +
                      (C4372 - C4373) * C3906 + (C4573 - C4574) * C3852) *
                         C6150 * C6086 * C1045 +
                     ((C120 * C439 - C6152 * C480) * C3905 +
                      (C120 * C642 - C6152 * C676) * C3851 +
                      (C120 * C1749 - C6152 * C1791) * C3906 +
                      (C120 * C1977 - C6152 * C2015) * C3852) *
                         C6150 * C6086 * C1046) *
                        C1047 +
                    (((C131 - C130) * C3905 + (C359 - C358) * C3851 +
                      (C1441 - C1442) * C3906 + (C1671 - C1672) * C3852) *
                         C6150 * C6086 * C1045 +
                     ((C1091 - C1090) * C3905 + (C1321 - C1320) * C3851 +
                      (C6152 * C1792 - C120 * C1750) * C3906 +
                      (C6152 * C2016 - C120 * C1978) * C3852) *
                         C6150 * C6086 * C1046) *
                        C1048)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3905 * C164 - C4063 * C78 - C3905 * C319 + C3851 * C388 +
            C3906 * C815 - C4064 * C740 - C3906 * C943 + C3852 * C1008) *
               C6152 * C6150 * C6086 * C1045 -
           (C3906 * C1829 - C4064 * C1749 - C3906 * C1977 + C3852 * C2051 +
            C3905 * C514 - C4063 * C439 - C3905 * C642 + C3851 * C707) *
               C6152 * C6150 * C6086 * C1046) *
              C1047 +
          ((C3905 * C515 - C4063 * C438 - C3905 * C643 + C3851 * C706 +
            C3906 * C1830 - C4064 * C1750 - C3906 * C1978 + C3852 * C2052) *
               C6152 * C6150 * C6086 * C1046 -
           (C3906 * C816 - C4064 * C739 - C3906 * C944 + C3852 * C1007 +
            C3905 * C165 - C4063 * C79 - C3905 * C320 + C3851 * C389) *
               C6152 * C6150 * C6086 * C1045) *
              C1048)) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C3851 +
            C4342 * C3852) *
               C6152 * C1398 -
           (C4343 * C3852 + C4342 * C3851) * C6152 * C1399) *
              C1045 +
          ((C3521 * C3851 +
            (C2082 * C2627 - C2083 * C2626 - C2082 * C2628 + C6150 * C2629) *
                C3852) *
               C6152 * C1399 -
           (C3521 * C3852 + C2339 * C3851) * C6152 * C1398) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6152 * C121 - C120 * C78) * C2082 +
             (C6152 * C125 - C120 * C83) * C6150) *
                C3851 +
            ((C4372 - C4373) * C2082 + (C4374 - C4375) * C6150) * C3852) *
               C1398 +
           (((C4373 - C4372) * C2082 + (C4375 - C4374) * C6150) * C3851 +
            ((C4376 - C4377) * C2082 + (C4378 - C4379) * C6150) * C3852) *
               C1399) *
              C1045 +
          ((((C120 * C439 - C6152 * C480) * C2082 +
             (C120 * C445 - C6152 * C484) * C6150) *
                C3851 +
            ((C5298 - C5299) * C2082 + (C5300 - C5301) * C6150) * C3852) *
               C1398 +
           (((C5299 - C5298) * C2082 + (C5301 - C5300) * C6150) * C3851 +
            ((C6152 * C2656 - C120 * C2626) * C2082 +
             (C6152 * C2657 - C120 * C2628) * C6150) *
                C3852) *
               C1399) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C2082 +
            (C3851 * C168 - C3905 * C83 + C3852 * C819 - C3906 * C746) *
                C6150) *
               C6152 * C1398 +
           ((C3905 * C740 - C3851 * C815 + C3906 * C741 - C3852 * C817) *
                C2082 +
            (C3905 * C746 - C3851 * C819 + C3906 * C748 - C3852 * C821) *
                C6150) *
               C6152 * C1399) *
              C1045 +
          (((C3905 * C439 - C3851 * C514 + C3906 * C1749 - C3852 * C1829) *
                C2082 +
            (C3905 * C445 - C3851 * C518 + C3906 * C1752 - C3852 * C1831) *
                C6150) *
               C6152 * C1398 +
           ((C3851 * C1829 - C3905 * C1749 + C3852 * C2684 - C3906 * C2626) *
                C2082 +
            (C3851 * C1831 - C3905 * C1752 + C3852 * C2685 - C3906 * C2628) *
                C6150) *
               C6152 * C1399) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6150 * C82 - C2082 * C78) * C120 +
             (C6150 * C210 - C2082 * C206) * C6152) *
                C3851 +
            ((C4436 - C4437) * C120 + (C4438 - C4439) * C6152) * C3852) *
               C1398 +
           (((C4437 - C4436) * C120 + (C4439 - C4438) * C6152) * C3851 +
            ((C4440 - C4441) * C120 + (C4442 - C4443) * C6152) * C3852) *
               C1399) *
              C1045 +
          ((((C2436 - C2435) * C120 + (C2438 - C2437) * C6152) * C3851 +
            ((C3635 - C3636) * C120 + (C3637 - C3638) * C6152) * C3852) *
               C1398 +
           (((C3636 - C3635) * C120 + (C3638 - C3637) * C6152) * C3851 +
            ((C6150 * C2627 - C2082 * C2626) * C120 +
             (C6150 * C2713 - C2082 * C2712) * C6152) *
                C3852) *
               C1399) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) *
                          C6150 * C3851 +
                      C4485 * C3852) *
                         C1398 -
                     (C4486 * C3852 + C4485 * C3851) * C1399) *
                        C1045 +
                    ((C5411 * C3851 + (C120 * C2656 - C240 * C2626 -
                                       C120 * C2712 + C6152 * C2740) *
                                          C6150 * C3852) *
                         C1399 -
                     (C5411 * C3852 +
                      (C120 * C480 - C240 * C439 - C120 * C548 + C6152 * C583) *
                          C6150 * C3851) *
                         C1398) *
                        C1046) *
                   C6060) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C120 +
            (C3851 * C285 - C3905 * C206 + C3852 * C913 - C3906 * C849) *
                C6152) *
               C6150 * C1398 +
           ((C3905 * C740 - C3851 * C815 + C3906 * C741 - C3852 * C817) * C120 +
            (C3905 * C849 - C3851 * C913 + C3906 * C851 - C3852 * C915) *
                C6152) *
               C6150 * C1399) *
              C1045 +
          (((C3905 * C439 - C3851 * C514 + C3906 * C1749 - C3852 * C1829) *
                C120 +
            (C3905 * C548 - C3851 * C612 + C3906 * C1867 - C3852 * C1941) *
                C6152) *
               C6150 * C1398 +
           ((C3851 * C1829 - C3905 * C1749 + C3852 * C2684 - C3906 * C2626) *
                C120 +
            (C3851 * C1941 - C3905 * C1867 + C3852 * C2767 - C3906 * C2712) *
                C6152) *
               C6150 * C1399) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6150 * C82 - C2082 * C78) * C3905 +
                      (C6150 * C323 - C2082 * C319) * C3851 +
                      (C4436 - C4437) * C3906 + (C4542 - C4543) * C3852) *
                         C6152 * C1398 +
                     ((C4437 - C4436) * C3905 + (C4543 - C4542) * C3851 +
                      (C4440 - C4441) * C3906 + (C4544 - C4545) * C3852) *
                         C6152 * C1399) *
                        C1045 +
                    (((C2436 - C2435) * C3905 + (C2530 - C2529) * C3851 +
                      (C3635 - C3636) * C3906 + (C3747 - C3748) * C3852) *
                         C6152 * C1398 +
                     ((C3636 - C3635) * C3905 + (C3748 - C3747) * C3851 +
                      (C6150 * C2627 - C2082 * C2626) * C3906 +
                      (C6150 * C2795 - C2082 * C2794) * C3852) *
                         C6152 * C1399) *
                        C1046) *
                   C6060) /
                  (p * q * std::sqrt(p + q));
    d2eezy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6152 * C121 - C120 * C78) * C3905 +
                      (C6152 * C353 - C120 * C319) * C3851 +
                      (C4372 - C4373) * C3906 + (C4573 - C4574) * C3852) *
                         C6150 * C1398 +
                     ((C4373 - C4372) * C3905 + (C4574 - C4573) * C3851 +
                      (C4376 - C4377) * C3906 + (C4575 - C4576) * C3852) *
                         C6150 * C1399) *
                        C1045 +
                    (((C120 * C439 - C6152 * C480) * C3905 +
                      (C120 * C642 - C6152 * C676) * C3851 +
                      (C5298 - C5299) * C3906 + (C5514 - C5515) * C3852) *
                         C6150 * C1398 +
                     ((C5299 - C5298) * C3905 + (C5515 - C5514) * C3851 +
                      (C6152 * C2656 - C120 * C2626) * C3906 +
                      (C6152 * C2822 - C120 * C2794) * C3852) *
                         C6150 * C1399) *
                        C1046) *
                   C6060) /
                  (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3905 * C164 - C4063 * C78 - C3905 * C319 + C3851 * C388 +
            C3906 * C815 - C4064 * C740 - C3906 * C943 + C3852 * C1008) *
               C6152 * C6150 * C1398 -
           (C3906 * C817 - C4064 * C741 - C3906 * C945 + C3852 * C1009 +
            C3905 * C815 - C4063 * C740 - C3905 * C943 + C3851 * C1008) *
               C6152 * C6150 * C1399) *
              C1045 +
          ((C3905 * C1829 - C4063 * C1749 - C3905 * C1977 + C3851 * C2051 +
            C3906 * C2684 - C4064 * C2626 - C3906 * C2794 + C3852 * C2849) *
               C6152 * C6150 * C1399 -
           (C3906 * C1829 - C4064 * C1749 - C3906 * C1977 + C3852 * C2051 +
            C3905 * C514 - C4063 * C439 - C3905 * C642 + C3851 * C707) *
               C6152 * C6150 * C1398) *
              C1046) *
         C6060) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (-std::pow(Pi, 2.5) *
         (((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C3851 +
           (C2082 * C745 - C2083 * C740 - C2082 * C746 + C6150 * C752) *
               C3852) *
              C6152 * C6086 * C434 -
          (C3521 * C3852 + C2339 * C3851) * C6152 * C6086 * C435 +
          (C2340 * C3851 +
           (C2082 * C3511 - C2083 * C3510 - C2082 * C3512 + C6150 * C3513) *
               C3852) *
              C6152 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C3851 +
           (C2082 * C745 - C2083 * C740 - C2082 * C746 + C6150 * C752) *
               C3852) *
              C6152 * C6086 * C6072 * C71 -
          ((C2082 * C743 - C2083 * C739 - C2082 * C744 + C6150 * C751) * C3852 +
           (C2082 * C84 - C2083 * C79 - C2082 * C85 + C6150 * C91) * C3851) *
              C6152 * C6086 * C6072 * C72 +
          ((C2082 * C86 - C2083 * C80 - C2082 * C87 + C6150 * C92) * C3851 +
           (C2082 * C1401 - C2083 * C1400 - C2082 * C1402 + C6150 * C1403) *
               C3852) *
              C6152 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C3851 +
           C4342 * C3852) *
              C6152 * C736 -
          (C4343 * C3852 + C4342 * C3851) * C6152 * C737 +
          (C4343 * C3851 +
           (C2082 * C4326 - C2083 * C4325 - C2082 * C4327 + C6150 * C4328) *
               C3852) *
              C6152 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C6152 * C121 - C120 * C78) * C2082 +
            (C6152 * C125 - C120 * C83) * C6150) *
               C3851 +
           ((C6152 * C781 - C120 * C740) * C2082 +
            (C6152 * C785 - C120 * C746) * C6150) *
               C3852) *
              C6086 * C434 +
          (((C120 * C439 - C6152 * C480) * C2082 +
            (C120 * C445 - C6152 * C484) * C6150) *
               C3851 +
           ((C120 * C1749 - C6152 * C1791) * C2082 +
            (C120 * C1752 - C6152 * C1793) * C6150) *
               C3852) *
              C6086 * C435 +
          (((C6152 * C482 - C120 * C440) * C2082 +
            (C6152 * C486 - C120 * C447) * C6150) *
               C3851 +
           ((C6152 * C3556 - C120 * C3510) * C2082 +
            (C6152 * C3557 - C120 * C3512) * C6150) *
               C3852) *
              C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C6152 * C121 - C120 * C78) * C2082 +
            (C6152 * C125 - C120 * C83) * C6150) *
               C3851 +
           ((C6152 * C781 - C120 * C740) * C2082 +
            (C6152 * C785 - C120 * C746) * C6150) *
               C3852) *
              C6086 * C6072 * C71 +
          (((C131 - C130) * C2082 + (C133 - C132) * C6150) * C3851 +
           ((C1441 - C1442) * C2082 + (C1443 - C1444) * C6150) * C3852) *
              C6086 * C6072 * C72 +
          (((C135 - C134) * C2082 + (C137 - C136) * C6150) * C3851 +
           ((C6152 * C1438 - C120 * C1400) * C2082 +
            (C6152 * C1439 - C120 * C1402) * C6150) *
               C3852) *
              C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6152 * C121 - C120 * C78) * C2082 +
            (C6152 * C125 - C120 * C83) * C6150) *
               C3851 +
           ((C4372 - C4373) * C2082 + (C4374 - C4375) * C6150) * C3852) *
              C736 +
          (((C4373 - C4372) * C2082 + (C4375 - C4374) * C6150) * C3851 +
           ((C4376 - C4377) * C2082 + (C4378 - C4379) * C6150) * C3852) *
              C737 +
          (((C4377 - C4376) * C2082 + (C4379 - C4378) * C6150) * C3851 +
           ((C6152 * C4369 - C120 * C4325) * C2082 +
            (C6152 * C4370 - C120 * C4327) * C6150) *
               C3852) *
              C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (-std::pow(Pi, 2.5) *
         (((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C2082 +
           (C3851 * C168 - C3905 * C83 + C3852 * C819 - C3906 * C746) * C6150) *
              C6152 * C6086 * C434 +
          ((C3905 * C439 - C3851 * C514 + C3906 * C1749 - C3852 * C1829) *
               C2082 +
           (C3905 * C445 - C3851 * C518 + C3906 * C1752 - C3852 * C1831) *
               C6150) *
              C6152 * C6086 * C435 +
          ((C3851 * C516 - C3905 * C440 + C3852 * C3592 - C3906 * C3510) *
               C2082 +
           (C3851 * C520 - C3905 * C447 + C3852 * C3593 - C3906 * C3512) *
               C6150) *
              C6152 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C2082 +
           (C3851 * C168 - C3905 * C83 + C3852 * C819 - C3906 * C746) * C6150) *
              C6152 * C6086 * C6072 * C71 +
          ((C3905 * C79 - C3851 * C165 + C3906 * C739 - C3852 * C816) * C2082 +
           (C3905 * C85 - C3851 * C169 + C3906 * C744 - C3852 * C820) * C6150) *
              C6152 * C6086 * C6072 * C72 +
          ((C3851 * C166 - C3905 * C80 + C3852 * C1478 - C3906 * C1400) *
               C2082 +
           (C3851 * C170 - C3905 * C87 + C3852 * C1479 - C3906 * C1402) *
               C6150) *
              C6152 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C2082 +
           (C3851 * C168 - C3905 * C83 + C3852 * C819 - C3906 * C746) * C6150) *
              C6152 * C736 +
          ((C3905 * C740 - C3851 * C815 + C3906 * C741 - C3852 * C817) * C2082 +
           (C3905 * C746 - C3851 * C819 + C3906 * C748 - C3852 * C821) *
               C6150) *
              C6152 * C737 +
          ((C3851 * C817 - C3905 * C741 + C3852 * C4405 - C3906 * C4325) *
               C2082 +
           (C3851 * C821 - C3905 * C748 + C3852 * C4406 - C3906 * C4327) *
               C6150) *
              C6152 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C6150 * C82 - C2082 * C78) * C120 +
            (C6150 * C210 - C2082 * C206) * C6152) *
               C3851 +
           ((C6150 * C745 - C2082 * C740) * C120 +
            (C6150 * C853 - C2082 * C849) * C6152) *
               C3852) *
              C6086 * C434 +
          (((C2436 - C2435) * C120 + (C2438 - C2437) * C6152) * C3851 +
           ((C3635 - C3636) * C120 + (C3637 - C3638) * C6152) * C3852) *
              C6086 * C435 +
          (((C2440 - C2439) * C120 + (C2442 - C2441) * C6152) * C3851 +
           ((C6150 * C3511 - C2082 * C3510) * C120 +
            (C6150 * C3633 - C2082 * C3632) * C6152) *
               C3852) *
              C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C6150 * C82 - C2082 * C78) * C120 +
                                (C6150 * C210 - C2082 * C206) * C6152) *
                                   C3851 +
                               ((C6150 * C745 - C2082 * C740) * C120 +
                                (C6150 * C853 - C2082 * C849) * C6152) *
                                   C3852) *
                                  C6086 * C6072 * C71 +
                              (((C2082 * C79 - C6150 * C84) * C120 +
                                (C2082 * C207 - C6150 * C211) * C6152) *
                                   C3851 +
                               ((C2082 * C739 - C6150 * C743) * C120 +
                                (C2082 * C850 - C6150 * C854) * C6152) *
                                   C3852) *
                                  C6086 * C6072 * C72 +
                              (((C6150 * C86 - C2082 * C80) * C120 +
                                (C6150 * C212 - C2082 * C208) * C6152) *
                                   C3851 +
                               ((C6150 * C1401 - C2082 * C1400) * C120 +
                                (C6150 * C1519 - C2082 * C1518) * C6152) *
                                   C3852) *
                                  C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6150 * C82 - C2082 * C78) * C120 +
            (C6150 * C210 - C2082 * C206) * C6152) *
               C3851 +
           ((C4436 - C4437) * C120 + (C4438 - C4439) * C6152) * C3852) *
              C736 +
          (((C4437 - C4436) * C120 + (C4439 - C4438) * C6152) * C3851 +
           ((C4440 - C4441) * C120 + (C4442 - C4443) * C6152) * C3852) *
              C737 +
          (((C4441 - C4440) * C120 + (C4443 - C4442) * C6152) * C3851 +
           ((C6150 * C4326 - C2082 * C4325) * C120 +
            (C6150 * C4434 - C2082 * C4433) * C6152) *
               C3852) *
              C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (-std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C6150 *
               C3851 +
           (C120 * C781 - C240 * C740 - C120 * C849 + C6152 * C884) * C6150 *
               C3852) *
              C6086 * C434 -
          ((C120 * C1791 - C240 * C1749 - C120 * C1867 + C6152 * C1905) *
               C6150 * C3852 +
           (C120 * C480 - C240 * C439 - C120 * C548 + C6152 * C583) * C6150 *
               C3851) *
              C6086 * C435 +
          ((C120 * C482 - C240 * C440 - C120 * C550 + C6152 * C584) * C6150 *
               C3851 +
           (C120 * C3556 - C240 * C3510 - C120 * C3632 + C6152 * C3672) *
               C6150 * C3852) *
              C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C6150 *
               C3851 +
           (C120 * C781 - C240 * C740 - C120 * C849 + C6152 * C884) * C6150 *
               C3852) *
              C6086 * C6072 * C71 -
          (C1562 * C6150 * C3852 + C258 * C6150 * C3851) * C6086 * C6072 * C72 +
          (C259 * C6150 * C3851 +
           (C120 * C1438 - C240 * C1400 - C120 * C1518 + C6152 * C1554) *
               C6150 * C3852) *
              C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C6150 *
               C3851 +
           C4485 * C3852) *
              C736 -
          (C4486 * C3852 + C4485 * C3851) * C737 +
          (C4486 * C3851 +
           (C120 * C4369 - C240 * C4325 - C120 * C4433 + C6152 * C4469) *
               C6150 * C3852) *
              C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (-std::pow(Pi, 2.5) *
         (((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C120 +
           (C3851 * C285 - C3905 * C206 + C3852 * C913 - C3906 * C849) *
               C6152) *
              C6150 * C6086 * C434 +
          ((C3905 * C439 - C3851 * C514 + C3906 * C1749 - C3852 * C1829) *
               C120 +
           (C3905 * C548 - C3851 * C612 + C3906 * C1867 - C3852 * C1941) *
               C6152) *
              C6150 * C6086 * C435 +
          ((C3851 * C516 - C3905 * C440 + C3852 * C3592 - C3906 * C3510) *
               C120 +
           (C3851 * C614 - C3905 * C550 + C3852 * C3707 - C3906 * C3632) *
               C6152) *
              C6150 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C120 +
           (C3851 * C285 - C3905 * C206 + C3852 * C913 - C3906 * C849) *
               C6152) *
              C6150 * C6086 * C6072 * C71 +
          ((C3905 * C79 - C3851 * C165 + C3906 * C739 - C3852 * C816) * C120 +
           (C3905 * C207 - C3851 * C286 + C3906 * C850 - C3852 * C914) *
               C6152) *
              C6150 * C6086 * C6072 * C72 +
          ((C3851 * C166 - C3905 * C80 + C3852 * C1478 - C3906 * C1400) * C120 +
           (C3851 * C287 - C3905 * C208 + C3852 * C1596 - C3906 * C1518) *
               C6152) *
              C6150 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C120 +
           (C3851 * C285 - C3905 * C206 + C3852 * C913 - C3906 * C849) *
               C6152) *
              C6150 * C736 +
          ((C3905 * C740 - C3851 * C815 + C3906 * C741 - C3852 * C817) * C120 +
           (C3905 * C849 - C3851 * C913 + C3906 * C851 - C3852 * C915) *
               C6152) *
              C6150 * C737 +
          ((C3851 * C817 - C3905 * C741 + C3852 * C4405 - C3906 * C4325) *
               C120 +
           (C3851 * C915 - C3905 * C851 + C3852 * C4512 - C3906 * C4433) *
               C6152) *
              C6150 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (-std::pow(Pi, 2.5) *
         (((C6150 * C82 - C2082 * C78) * C3905 +
           (C6150 * C323 - C2082 * C319) * C3851 +
           (C6150 * C745 - C2082 * C740) * C3906 +
           (C6150 * C947 - C2082 * C943) * C3852) *
              C6152 * C6086 * C434 +
          ((C2436 - C2435) * C3905 + (C2530 - C2529) * C3851 +
           (C3635 - C3636) * C3906 + (C3747 - C3748) * C3852) *
              C6152 * C6086 * C435 +
          ((C2440 - C2439) * C3905 + (C2532 - C2531) * C3851 +
           (C6150 * C3511 - C2082 * C3510) * C3906 +
           (C6150 * C3745 - C2082 * C3744) * C3852) *
              C6152 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C6150 * C82 - C2082 * C78) * C3905 +
                               (C6150 * C323 - C2082 * C319) * C3851 +
                               (C6150 * C745 - C2082 * C740) * C3906 +
                               (C6150 * C947 - C2082 * C943) * C3852) *
                                  C6152 * C6086 * C6072 * C71 +
                              ((C2082 * C79 - C6150 * C84) * C3905 +
                               (C2082 * C320 - C6150 * C324) * C3851 +
                               (C2082 * C739 - C6150 * C743) * C3906 +
                               (C2082 * C944 - C6150 * C948) * C3852) *
                                  C6152 * C6086 * C6072 * C72 +
                              ((C6150 * C86 - C2082 * C80) * C3905 +
                               (C6150 * C325 - C2082 * C321) * C3851 +
                               (C6150 * C1401 - C2082 * C1400) * C3906 +
                               (C6150 * C1634 - C2082 * C1633) * C3852) *
                                  C6152 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6150 * C82 - C2082 * C78) * C3905 +
           (C6150 * C323 - C2082 * C319) * C3851 + (C4436 - C4437) * C3906 +
           (C4542 - C4543) * C3852) *
              C6152 * C736 +
          ((C4437 - C4436) * C3905 + (C4543 - C4542) * C3851 +
           (C4440 - C4441) * C3906 + (C4544 - C4545) * C3852) *
              C6152 * C737 +
          ((C4441 - C4440) * C3905 + (C4545 - C4544) * C3851 +
           (C6150 * C4326 - C2082 * C4325) * C3906 +
           (C6150 * C4540 - C2082 * C4539) * C3852) *
              C6152 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] += (-std::pow(Pi, 2.5) *
                   (((C6152 * C121 - C120 * C78) * C3905 +
                     (C6152 * C353 - C120 * C319) * C3851 +
                     (C6152 * C781 - C120 * C740) * C3906 +
                     (C6152 * C977 - C120 * C943) * C3852) *
                        C6150 * C6086 * C434 +
                    ((C120 * C439 - C6152 * C480) * C3905 +
                     (C120 * C642 - C6152 * C676) * C3851 +
                     (C120 * C1749 - C6152 * C1791) * C3906 +
                     (C120 * C1977 - C6152 * C2015) * C3852) *
                        C6150 * C6086 * C435 +
                    ((C6152 * C482 - C120 * C440) * C3905 +
                     (C6152 * C678 - C120 * C644) * C3851 +
                     (C6152 * C3556 - C120 * C3510) * C3906 +
                     (C6152 * C3782 - C120 * C3744) * C3852) *
                        C6150 * C6086 * C436) *
                   C6060) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C6152 * C121 - C120 * C78) * C3905 +
                     (C6152 * C353 - C120 * C319) * C3851 +
                     (C6152 * C781 - C120 * C740) * C3906 +
                     (C6152 * C977 - C120 * C943) * C3852) *
                        C6150 * C6086 * C6072 * C71 +
                    ((C131 - C130) * C3905 + (C359 - C358) * C3851 +
                     (C1441 - C1442) * C3906 + (C1671 - C1672) * C3852) *
                        C6150 * C6086 * C6072 * C72 +
                    ((C135 - C134) * C3905 + (C361 - C360) * C3851 +
                     (C6152 * C1438 - C120 * C1400) * C3906 +
                     (C6152 * C1669 - C120 * C1633) * C3852) *
                        C6150 * C6086 * C6072 * C73)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C6152 * C121 - C120 * C78) * C3905 +
                     (C6152 * C353 - C120 * C319) * C3851 +
                     (C4372 - C4373) * C3906 + (C4573 - C4574) * C3852) *
                        C6150 * C736 +
                    ((C4373 - C4372) * C3905 + (C4574 - C4573) * C3851 +
                     (C4376 - C4377) * C3906 + (C4575 - C4576) * C3852) *
                        C6150 * C737 +
                    ((C4377 - C4376) * C3905 + (C4576 - C4575) * C3851 +
                     (C6152 * C4369 - C120 * C4325) * C3906 +
                     (C6152 * C4571 - C120 * C4539) * C3852) *
                        C6150 * C738) *
                   C6072 * C6060) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (-std::pow(Pi, 2.5) *
         ((C3905 * C164 - C4063 * C78 - C3905 * C319 + C3851 * C388 +
           C3906 * C815 - C4064 * C740 - C3906 * C943 + C3852 * C1008) *
              C6152 * C6150 * C6086 * C434 -
          (C3906 * C1829 - C4064 * C1749 - C3906 * C1977 + C3852 * C2051 +
           C3905 * C514 - C4063 * C439 - C3905 * C642 + C3851 * C707) *
              C6152 * C6150 * C6086 * C435 +
          (C3905 * C516 - C4063 * C440 - C3905 * C644 + C3851 * C708 +
           C3906 * C3592 - C4064 * C3510 - C3906 * C3744 + C3852 * C3817) *
              C6152 * C6150 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C3905 * C164 - C4063 * C78 - C3905 * C319 + C3851 * C388 +
           C3906 * C815 - C4064 * C740 - C3906 * C943 + C3852 * C1008) *
              C6152 * C6150 * C6086 * C6072 * C71 -
          (C3906 * C816 - C4064 * C739 - C3906 * C944 + C3852 * C1007 +
           C3905 * C165 - C4063 * C79 - C3905 * C320 + C3851 * C389) *
              C6152 * C6150 * C6086 * C6072 * C72 +
          (C3905 * C166 - C4063 * C80 - C3905 * C321 + C3851 * C390 +
           C3906 * C1478 - C4064 * C1400 - C3906 * C1633 + C3852 * C1706) *
              C6152 * C6150 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C3905 * C164 - C4063 * C78 - C3905 * C319 + C3851 * C388 +
           C3906 * C815 - C4064 * C740 - C3906 * C943 + C3852 * C1008) *
              C6152 * C6150 * C736 -
          (C3906 * C817 - C4064 * C741 - C3906 * C945 + C3852 * C1009 +
           C3905 * C815 - C4063 * C740 - C3905 * C943 + C3851 * C1008) *
              C6152 * C6150 * C737 +
          (C3905 * C817 - C4063 * C741 - C3905 * C945 + C3851 * C1009 +
           C3906 * C4405 - C4064 * C4325 - C3906 * C4539 + C3852 * C4602) *
              C6152 * C6150 * C738) *
         C6072 * C6060) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C3851 +
            C4342 * C3852) *
               C6152 * C1398 -
           (C4343 * C3852 + C4342 * C3851) * C6152 * C1399) *
              C6072 * C1047 +
          ((C4950 * C3851 +
            (C2082 * C749 - C2083 * C742 - C2082 * C750 + C6150 * C754) *
                C3852) *
               C6152 * C1399 -
           (C4950 * C3852 +
            (C2082 * C84 - C2083 * C79 - C2082 * C85 + C6150 * C91) * C3851) *
               C6152 * C1398) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6152 * C121 - C120 * C78) * C2082 +
             (C6152 * C125 - C120 * C83) * C6150) *
                C3851 +
            ((C4372 - C4373) * C2082 + (C4374 - C4375) * C6150) * C3852) *
               C1398 +
           (((C4373 - C4372) * C2082 + (C4375 - C4374) * C6150) * C3851 +
            ((C4376 - C4377) * C2082 + (C4378 - C4379) * C6150) * C3852) *
               C1399) *
              C6072 * C1047 +
          ((((C131 - C130) * C2082 + (C133 - C132) * C6150) * C3851 +
            ((C1441 - C1442) * C2082 + (C1443 - C1444) * C6150) * C3852) *
               C1398 +
           (((C1442 - C1441) * C2082 + (C1444 - C1443) * C6150) * C3851 +
            ((C6152 * C784 - C120 * C742) * C2082 +
             (C6152 * C788 - C120 * C750) * C6150) *
                C3852) *
               C1399) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C2082 +
            (C3851 * C168 - C3905 * C83 + C3852 * C819 - C3906 * C746) *
                C6150) *
               C6152 * C1398 +
           ((C3905 * C740 - C3851 * C815 + C3906 * C741 - C3852 * C817) *
                C2082 +
            (C3905 * C746 - C3851 * C819 + C3906 * C748 - C3852 * C821) *
                C6150) *
               C6152 * C1399) *
              C6072 * C1047 +
          (((C3905 * C79 - C3851 * C165 + C3906 * C739 - C3852 * C816) * C2082 +
            (C3905 * C85 - C3851 * C169 + C3906 * C744 - C3852 * C820) *
                C6150) *
               C6152 * C1398 +
           ((C3851 * C816 - C3905 * C739 + C3852 * C818 - C3906 * C742) *
                C2082 +
            (C3851 * C820 - C3905 * C744 + C3852 * C822 - C3906 * C750) *
                C6150) *
               C6152 * C1399) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6150 * C82 - C2082 * C78) * C120 +
             (C6150 * C210 - C2082 * C206) * C6152) *
                C3851 +
            ((C4436 - C4437) * C120 + (C4438 - C4439) * C6152) * C3852) *
               C1398 +
           (((C4437 - C4436) * C120 + (C4439 - C4438) * C6152) * C3851 +
            ((C4440 - C4441) * C120 + (C4442 - C4443) * C6152) * C3852) *
               C1399) *
              C6072 * C1047 +
          ((((C2082 * C79 - C6150 * C84) * C120 +
             (C2082 * C207 - C6150 * C211) * C6152) *
                C3851 +
            ((C5053 - C5054) * C120 + (C5055 - C5056) * C6152) * C3852) *
               C1398 +
           (((C5054 - C5053) * C120 + (C5056 - C5055) * C6152) * C3851 +
            ((C6150 * C749 - C2082 * C742) * C120 +
             (C6150 * C856 - C2082 * C852) * C6152) *
                C3852) *
               C1399) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) *
                          C6150 * C3851 +
                      C4485 * C3852) *
                         C1398 -
                     (C4486 * C3852 + C4485 * C3851) * C1399) *
                        C6072 * C1047 +
                    ((C5091 * C3851 +
                      (C120 * C784 - C240 * C742 - C120 * C852 + C6152 * C886) *
                          C6150 * C3852) *
                         C1399 -
                     (C5091 * C3852 + C258 * C6150 * C3851) * C1398) *
                        C6072 * C1048)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C120 +
            (C3851 * C285 - C3905 * C206 + C3852 * C913 - C3906 * C849) *
                C6152) *
               C6150 * C1398 +
           ((C3905 * C740 - C3851 * C815 + C3906 * C741 - C3852 * C817) * C120 +
            (C3905 * C849 - C3851 * C913 + C3906 * C851 - C3852 * C915) *
                C6152) *
               C6150 * C1399) *
              C6072 * C1047 +
          (((C3905 * C79 - C3851 * C165 + C3906 * C739 - C3852 * C816) * C120 +
            (C3905 * C207 - C3851 * C286 + C3906 * C850 - C3852 * C914) *
                C6152) *
               C6150 * C1398 +
           ((C3851 * C816 - C3905 * C739 + C3852 * C818 - C3906 * C742) * C120 +
            (C3851 * C914 - C3905 * C850 + C3852 * C916 - C3906 * C852) *
                C6152) *
               C6150 * C1399) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eezx[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6150 * C82 - C2082 * C78) * C3905 +
                      (C6150 * C323 - C2082 * C319) * C3851 +
                      (C4436 - C4437) * C3906 + (C4542 - C4543) * C3852) *
                         C6152 * C1398 +
                     ((C4437 - C4436) * C3905 + (C4543 - C4542) * C3851 +
                      (C4440 - C4441) * C3906 + (C4544 - C4545) * C3852) *
                         C6152 * C1399) *
                        C6072 * C1047 +
                    (((C2082 * C79 - C6150 * C84) * C3905 +
                      (C2082 * C320 - C6150 * C324) * C3851 +
                      (C5053 - C5054) * C3906 + (C5160 - C5161) * C3852) *
                         C6152 * C1398 +
                     ((C5054 - C5053) * C3905 + (C5161 - C5160) * C3851 +
                      (C6150 * C749 - C2082 * C742) * C3906 +
                      (C6150 * C950 - C2082 * C946) * C3852) *
                         C6152 * C1399) *
                        C6072 * C1048)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6152 * C121 - C120 * C78) * C3905 +
                      (C6152 * C353 - C120 * C319) * C3851 +
                      (C4372 - C4373) * C3906 + (C4573 - C4574) * C3852) *
                         C6150 * C1398 +
                     ((C4373 - C4372) * C3905 + (C4574 - C4573) * C3851 +
                      (C4376 - C4377) * C3906 + (C4575 - C4576) * C3852) *
                         C6150 * C1399) *
                        C6072 * C1047 +
                    (((C131 - C130) * C3905 + (C359 - C358) * C3851 +
                      (C1441 - C1442) * C3906 + (C1671 - C1672) * C3852) *
                         C6150 * C1398 +
                     ((C1442 - C1441) * C3905 + (C1672 - C1671) * C3851 +
                      (C6152 * C784 - C120 * C742) * C3906 +
                      (C6152 * C980 - C120 * C946) * C3852) *
                         C6150 * C1399) *
                        C6072 * C1048)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3905 * C164 - C4063 * C78 - C3905 * C319 + C3851 * C388 +
            C3906 * C815 - C4064 * C740 - C3906 * C943 + C3852 * C1008) *
               C6152 * C6150 * C1398 -
           (C3906 * C817 - C4064 * C741 - C3906 * C945 + C3852 * C1009 +
            C3905 * C815 - C4063 * C740 - C3905 * C943 + C3851 * C1008) *
               C6152 * C6150 * C1399) *
              C6072 * C1047 +
          ((C3905 * C816 - C4063 * C739 - C3905 * C944 + C3851 * C1007 +
            C3906 * C818 - C4064 * C742 - C3906 * C946 + C3852 * C1010) *
               C6152 * C6150 * C1399 -
           (C3906 * C816 - C4064 * C739 - C3906 * C944 + C3852 * C1007 +
            C3905 * C165 - C4063 * C79 - C3905 * C320 + C3851 * C389) *
               C6152 * C6150 * C1398) *
              C6072 * C1048)) /
        (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C3851 +
           (C2082 * C745 - C2083 * C740 - C2082 * C746 + C6150 * C752) *
               C3852) *
              C6152 * C6086 * C6072 * C71 -
          ((C2082 * C743 - C2083 * C739 - C2082 * C744 + C6150 * C751) * C3852 +
           (C2082 * C84 - C2083 * C79 - C2082 * C85 + C6150 * C91) * C3851) *
              C6152 * C6086 * C6072 * C72 +
          ((C2082 * C86 - C2083 * C80 - C2082 * C87 + C6150 * C92) * C3851 +
           (C2082 * C1401 - C2083 * C1400 - C2082 * C1402 + C6150 * C1403) *
               C3852) *
              C6152 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2082 * C82 - C2083 * C78 - C2082 * C83 + C6150 * C90) * C3851 +
           (C2082 * C745 - C2083 * C740 - C2082 * C746 + C6150 * C752) *
               C3852) *
              C6152 * C6086 * C434 -
          (C3521 * C3852 + C2339 * C3851) * C6152 * C6086 * C435 +
          (C2340 * C3851 +
           (C2082 * C3511 - C2083 * C3510 - C2082 * C3512 + C6150 * C3513) *
               C3852) *
              C6152 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6152 * C121 - C120 * C78) * C2082 +
            (C6152 * C125 - C120 * C83) * C6150) *
               C3851 +
           ((C6152 * C781 - C120 * C740) * C2082 +
            (C6152 * C785 - C120 * C746) * C6150) *
               C3852) *
              C6086 * C6072 * C71 +
          (((C131 - C130) * C2082 + (C133 - C132) * C6150) * C3851 +
           ((C1441 - C1442) * C2082 + (C1443 - C1444) * C6150) * C3852) *
              C6086 * C6072 * C72 +
          (((C135 - C134) * C2082 + (C137 - C136) * C6150) * C3851 +
           ((C6152 * C1438 - C120 * C1400) * C2082 +
            (C6152 * C1439 - C120 * C1402) * C6150) *
               C3852) *
              C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6152 * C121 - C120 * C78) * C2082 +
            (C6152 * C125 - C120 * C83) * C6150) *
               C3851 +
           ((C6152 * C781 - C120 * C740) * C2082 +
            (C6152 * C785 - C120 * C746) * C6150) *
               C3852) *
              C6086 * C434 +
          (((C120 * C439 - C6152 * C480) * C2082 +
            (C120 * C445 - C6152 * C484) * C6150) *
               C3851 +
           ((C120 * C1749 - C6152 * C1791) * C2082 +
            (C120 * C1752 - C6152 * C1793) * C6150) *
               C3852) *
              C6086 * C435 +
          (((C6152 * C482 - C120 * C440) * C2082 +
            (C6152 * C486 - C120 * C447) * C6150) *
               C3851 +
           ((C6152 * C3556 - C120 * C3510) * C2082 +
            (C6152 * C3557 - C120 * C3512) * C6150) *
               C3852) *
              C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C2082 +
           (C3851 * C168 - C3905 * C83 + C3852 * C819 - C3906 * C746) * C6150) *
              C6152 * C6086 * C6072 * C71 +
          ((C3905 * C79 - C3851 * C165 + C3906 * C739 - C3852 * C816) * C2082 +
           (C3905 * C85 - C3851 * C169 + C3906 * C744 - C3852 * C820) * C6150) *
              C6152 * C6086 * C6072 * C72 +
          ((C3851 * C166 - C3905 * C80 + C3852 * C1478 - C3906 * C1400) *
               C2082 +
           (C3851 * C170 - C3905 * C87 + C3852 * C1479 - C3906 * C1402) *
               C6150) *
              C6152 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C2082 +
           (C3851 * C168 - C3905 * C83 + C3852 * C819 - C3906 * C746) * C6150) *
              C6152 * C6086 * C434 +
          ((C3905 * C439 - C3851 * C514 + C3906 * C1749 - C3852 * C1829) *
               C2082 +
           (C3905 * C445 - C3851 * C518 + C3906 * C1752 - C3852 * C1831) *
               C6150) *
              C6152 * C6086 * C435 +
          ((C3851 * C516 - C3905 * C440 + C3852 * C3592 - C3906 * C3510) *
               C2082 +
           (C3851 * C520 - C3905 * C447 + C3852 * C3593 - C3906 * C3512) *
               C6150) *
              C6152 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6150 * C82 - C2082 * C78) * C120 +
            (C6150 * C210 - C2082 * C206) * C6152) *
               C3851 +
           ((C6150 * C745 - C2082 * C740) * C120 +
            (C6150 * C853 - C2082 * C849) * C6152) *
               C3852) *
              C6086 * C6072 * C71 +
          (((C2082 * C79 - C6150 * C84) * C120 +
            (C2082 * C207 - C6150 * C211) * C6152) *
               C3851 +
           ((C2082 * C739 - C6150 * C743) * C120 +
            (C2082 * C850 - C6150 * C854) * C6152) *
               C3852) *
              C6086 * C6072 * C72 +
          (((C6150 * C86 - C2082 * C80) * C120 +
            (C6150 * C212 - C2082 * C208) * C6152) *
               C3851 +
           ((C6150 * C1401 - C2082 * C1400) * C120 +
            (C6150 * C1519 - C2082 * C1518) * C6152) *
               C3852) *
              C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6150 * C82 - C2082 * C78) * C120 +
            (C6150 * C210 - C2082 * C206) * C6152) *
               C3851 +
           ((C6150 * C745 - C2082 * C740) * C120 +
            (C6150 * C853 - C2082 * C849) * C6152) *
               C3852) *
              C6086 * C434 +
          (((C2436 - C2435) * C120 + (C2438 - C2437) * C6152) * C3851 +
           ((C3635 - C3636) * C120 + (C3637 - C3638) * C6152) * C3852) *
              C6086 * C435 +
          (((C2440 - C2439) * C120 + (C2442 - C2441) * C6152) * C3851 +
           ((C6150 * C3511 - C2082 * C3510) * C120 +
            (C6150 * C3633 - C2082 * C3632) * C6152) *
               C3852) *
              C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C6150 *
               C3851 +
           (C120 * C781 - C240 * C740 - C120 * C849 + C6152 * C884) * C6150 *
               C3852) *
              C6086 * C6072 * C71 -
          (C1562 * C6150 * C3852 + C258 * C6150 * C3851) * C6086 * C6072 * C72 +
          (C259 * C6150 * C3851 +
           (C120 * C1438 - C240 * C1400 - C120 * C1518 + C6152 * C1554) *
               C6150 * C3852) *
              C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C6152 * C241) * C6150 *
               C3851 +
           (C120 * C781 - C240 * C740 - C120 * C849 + C6152 * C884) * C6150 *
               C3852) *
              C6086 * C434 -
          ((C120 * C1791 - C240 * C1749 - C120 * C1867 + C6152 * C1905) *
               C6150 * C3852 +
           (C120 * C480 - C240 * C439 - C120 * C548 + C6152 * C583) * C6150 *
               C3851) *
              C6086 * C435 +
          ((C120 * C482 - C240 * C440 - C120 * C550 + C6152 * C584) * C6150 *
               C3851 +
           (C120 * C3556 - C240 * C3510 - C120 * C3632 + C6152 * C3672) *
               C6150 * C3852) *
              C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C120 +
           (C3851 * C285 - C3905 * C206 + C3852 * C913 - C3906 * C849) *
               C6152) *
              C6150 * C6086 * C6072 * C71 +
          ((C3905 * C79 - C3851 * C165 + C3906 * C739 - C3852 * C816) * C120 +
           (C3905 * C207 - C3851 * C286 + C3906 * C850 - C3852 * C914) *
               C6152) *
              C6150 * C6086 * C6072 * C72 +
          ((C3851 * C166 - C3905 * C80 + C3852 * C1478 - C3906 * C1400) * C120 +
           (C3851 * C287 - C3905 * C208 + C3852 * C1596 - C3906 * C1518) *
               C6152) *
              C6150 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3851 * C164 - C3905 * C78 + C3852 * C815 - C3906 * C740) * C120 +
           (C3851 * C285 - C3905 * C206 + C3852 * C913 - C3906 * C849) *
               C6152) *
              C6150 * C6086 * C434 +
          ((C3905 * C439 - C3851 * C514 + C3906 * C1749 - C3852 * C1829) *
               C120 +
           (C3905 * C548 - C3851 * C612 + C3906 * C1867 - C3852 * C1941) *
               C6152) *
              C6150 * C6086 * C435 +
          ((C3851 * C516 - C3905 * C440 + C3852 * C3592 - C3906 * C3510) *
               C120 +
           (C3851 * C614 - C3905 * C550 + C3852 * C3707 - C3906 * C3632) *
               C6152) *
              C6150 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
    d2eezx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C6150 * C82 - C2082 * C78) * C3905 +
                     (C6150 * C323 - C2082 * C319) * C3851 +
                     (C6150 * C745 - C2082 * C740) * C3906 +
                     (C6150 * C947 - C2082 * C943) * C3852) *
                        C6152 * C6086 * C6072 * C71 +
                    ((C2082 * C79 - C6150 * C84) * C3905 +
                     (C2082 * C320 - C6150 * C324) * C3851 +
                     (C2082 * C739 - C6150 * C743) * C3906 +
                     (C2082 * C944 - C6150 * C948) * C3852) *
                        C6152 * C6086 * C6072 * C72 +
                    ((C6150 * C86 - C2082 * C80) * C3905 +
                     (C6150 * C325 - C2082 * C321) * C3851 +
                     (C6150 * C1401 - C2082 * C1400) * C3906 +
                     (C6150 * C1634 - C2082 * C1633) * C3852) *
                        C6152 * C6086 * C6072 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C6150 * C82 - C2082 * C78) * C3905 +
                     (C6150 * C323 - C2082 * C319) * C3851 +
                     (C6150 * C745 - C2082 * C740) * C3906 +
                     (C6150 * C947 - C2082 * C943) * C3852) *
                        C6152 * C6086 * C434 +
                    ((C2436 - C2435) * C3905 + (C2530 - C2529) * C3851 +
                     (C3635 - C3636) * C3906 + (C3747 - C3748) * C3852) *
                        C6152 * C6086 * C435 +
                    ((C2440 - C2439) * C3905 + (C2532 - C2531) * C3851 +
                     (C6150 * C3511 - C2082 * C3510) * C3906 +
                     (C6150 * C3745 - C2082 * C3744) * C3852) *
                        C6152 * C6086 * C436) *
                   C6060) /
                      (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C6152 * C121 - C120 * C78) * C3905 +
                     (C6152 * C353 - C120 * C319) * C3851 +
                     (C6152 * C781 - C120 * C740) * C3906 +
                     (C6152 * C977 - C120 * C943) * C3852) *
                        C6150 * C6086 * C6072 * C71 +
                    ((C131 - C130) * C3905 + (C359 - C358) * C3851 +
                     (C1441 - C1442) * C3906 + (C1671 - C1672) * C3852) *
                        C6150 * C6086 * C6072 * C72 +
                    ((C135 - C134) * C3905 + (C361 - C360) * C3851 +
                     (C6152 * C1438 - C120 * C1400) * C3906 +
                     (C6152 * C1669 - C120 * C1633) * C3852) *
                        C6150 * C6086 * C6072 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C6152 * C121 - C120 * C78) * C3905 +
                     (C6152 * C353 - C120 * C319) * C3851 +
                     (C6152 * C781 - C120 * C740) * C3906 +
                     (C6152 * C977 - C120 * C943) * C3852) *
                        C6150 * C6086 * C434 +
                    ((C120 * C439 - C6152 * C480) * C3905 +
                     (C120 * C642 - C6152 * C676) * C3851 +
                     (C120 * C1749 - C6152 * C1791) * C3906 +
                     (C120 * C1977 - C6152 * C2015) * C3852) *
                        C6150 * C6086 * C435 +
                    ((C6152 * C482 - C120 * C440) * C3905 +
                     (C6152 * C678 - C120 * C644) * C3851 +
                     (C6152 * C3556 - C120 * C3510) * C3906 +
                     (C6152 * C3782 - C120 * C3744) * C3852) *
                        C6150 * C6086 * C436) *
                   C6060) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3905 * C164 - C4063 * C78 - C3905 * C319 + C3851 * C388 +
           C3906 * C815 - C4064 * C740 - C3906 * C943 + C3852 * C1008) *
              C6152 * C6150 * C6086 * C6072 * C71 -
          (C3906 * C816 - C4064 * C739 - C3906 * C944 + C3852 * C1007 +
           C3905 * C165 - C4063 * C79 - C3905 * C320 + C3851 * C389) *
              C6152 * C6150 * C6086 * C6072 * C72 +
          (C3905 * C166 - C4063 * C80 - C3905 * C321 + C3851 * C390 +
           C3906 * C1478 - C4064 * C1400 - C3906 * C1633 + C3852 * C1706) *
              C6152 * C6150 * C6086 * C6072 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3905 * C164 - C4063 * C78 - C3905 * C319 + C3851 * C388 +
           C3906 * C815 - C4064 * C740 - C3906 * C943 + C3852 * C1008) *
              C6152 * C6150 * C6086 * C434 -
          (C3906 * C1829 - C4064 * C1749 - C3906 * C1977 + C3852 * C2051 +
           C3905 * C514 - C4063 * C439 - C3905 * C642 + C3851 * C707) *
              C6152 * C6150 * C6086 * C435 +
          (C3905 * C516 - C4063 * C440 - C3905 * C644 + C3851 * C708 +
           C3906 * C3592 - C4064 * C3510 - C3906 * C3744 + C3852 * C3817) *
              C6152 * C6150 * C6086 * C436) *
         C6060) /
            (p * q * std::sqrt(p + q));
}
