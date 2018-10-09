/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sspd_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0012_11(const double ae,
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
    const double C4630 = ae + be;
    const double C4629 = ae * be;
    const double C4628 = xA - xB;
    const double C4639 = yA - yB;
    const double C4642 = zA - zB;
    const double C4645 = p + q;
    const double C4644 = p * q;
    const double C4650 = xP - xQ;
    const double C4649 = bs[2];
    const double C4657 = std::pow(ae, 2);
    const double C4655 = bs[3];
    const double C4668 = bs[4];
    const double C4688 = yP - yQ;
    const double C4702 = zP - zQ;
    const double C68 = bs[0];
    const double C5045 = ce + de;
    const double C5044 = ce * de;
    const double C5043 = xC - xD;
    const double C5067 = yC - yD;
    const double C5083 = zC - zD;
    const double C57 = std::exp(-(std::pow(C4628, 2) * C4629) / C4630);
    const double C59 = std::exp(-(std::pow(C4639, 2) * C4629) / C4630);
    const double C58 = std::exp(-(std::pow(C4642, 2) * C4629) / C4630);
    const double C4646 = 2 * C4644;
    const double C4658 = C4650 * ae;
    const double C4654 = std::pow(C4650, 2);
    const double C4691 = C4688 * ae;
    const double C4690 = C4650 * C4688;
    const double C4717 = C4688 * C4650;
    const double C4725 = std::pow(C4688, 2);
    const double C4705 = C4702 * ae;
    const double C4704 = C4650 * C4702;
    const double C4734 = C4688 * C4702;
    const double C4742 = C4702 * C4650;
    const double C4750 = C4702 * C4688;
    const double C4758 = std::pow(C4702, 2);
    const double C5047 = 2 * C5045;
    const double C5057 = std::pow(C5045, 2);
    const double C5049 = C5043 * de;
    const double C5048 = C5043 * ce;
    const double C5046 = std::pow(C5043, 2);
    const double C5068 = std::pow(C5067, 2);
    const double C5120 = C5067 * de;
    const double C5119 = C5067 * ce;
    const double C5084 = std::pow(C5083, 2);
    const double C5148 = C5083 * de;
    const double C5147 = C5083 * ce;
    const double C66 =
        -((C57 - (C4628 * 2 * C4629 * C4628 * C57) / C4630) * 2 * C4629) /
        C4630;
    const double C67 = -(2 * C4629 * C4628 * C57) / C4630;
    const double C102 = -(2 * C4629 * (yA - yB) * C59) / C4630;
    const double C178 =
        -((C59 - (C4639 * 2 * C4629 * C4639 * C59) / C4630) * 2 * C4629) /
        C4630;
    const double C129 = -(2 * C4629 * (zA - zB) * C58) / C4630;
    const double C271 =
        -((C58 - (C4642 * 2 * C4629 * C4642 * C58) / C4630) * 2 * C4629) /
        C4630;
    const double C4648 = C4646 / C4645;
    const double C76 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C4646 / C4645, 2) -
          (bs[1] * C4646) / C4645) *
         std::pow(ae, 2)) /
        std::pow(C4630, 2);
    const double C69 = -(C4650 * bs[1] * C4646) / C4645;
    const double C311 = -(C4688 * bs[1] * C4646) / C4645;
    const double C612 = -(C4702 * bs[1] * C4646) / C4645;
    const double C4660 = C4655 * C4658;
    const double C4671 = C4668 * C4658;
    const double C72 = (-(bs[1] * C4658 * C4646) / C4645) / C4630;
    const double C4670 = C4654 * C4668;
    const double C4693 = C4655 * C4691;
    const double C4697 = C4668 * C4691;
    const double C103 = (-(bs[1] * C4691 * C4646) / C4645) / C4630;
    const double C4692 = C4690 * C4657;
    const double C4718 = C4717 * C4657;
    const double C4727 = C4725 * C4668;
    const double C4707 = C4655 * C4705;
    const double C4711 = C4668 * C4705;
    const double C130 = (-(bs[1] * C4705 * C4646) / C4645) / C4630;
    const double C4706 = C4704 * C4657;
    const double C4735 = C4734 * C4657;
    const double C4743 = C4742 * C4657;
    const double C4751 = C4750 * C4657;
    const double C4760 = C4758 * C4668;
    const double C5058 = std::pow(C5047, -1);
    const double C5172 = std::pow(C5047, -2);
    const double C5062 = 2 * C5057;
    const double C5170 = 4 * C5057;
    const double C5050 = C5046 * C5044;
    const double C5069 = C5068 * C5044;
    const double C5085 = C5084 * C5044;
    const double C4651 = std::pow(C4648, 2);
    const double C4656 = -C4648;
    const double C4669 = std::pow(C4648, 4);
    const double C81 = C67 * C72;
    const double C184 = C102 * C103;
    const double C4696 = C4668 * C4692;
    const double C4720 = C4668 * C4718;
    const double C277 = C129 * C130;
    const double C4710 = C4668 * C4706;
    const double C4737 = C4668 * C4735;
    const double C4745 = C4668 * C4743;
    const double C4753 = C4668 * C4751;
    const double C5051 = C5050 / C5045;
    const double C5070 = C5069 / C5045;
    const double C5086 = C5085 / C5045;
    const double C4653 = C4649 * C4651;
    const double C77 = (2 * ae * C4651 * C4649 * C4650 * ae +
                        C4650 *
                            (C4649 * C4651 +
                             std::pow(C4650, 2) * bs[3] * std::pow(-C4648, 3)) *
                            std::pow(ae, 2)) /
                       std::pow(C4630, 2);
    const double C107 =
        (C4651 * C4649 * C4650 * (yP - yQ) * C4657) / std::pow(C4630, 2);
    const double C134 =
        (C4651 * C4649 * C4650 * (zP - zQ) * C4657) / std::pow(C4630, 2);
    const double C156 =
        (C4651 * C4649 * C4688 * C4650 * C4657) / std::pow(C4630, 2);
    const double C179 =
        ((std::pow(C4688, 2) * C4649 * C4651 - (bs[1] * C4646) / C4645) *
         C4657) /
        std::pow(C4630, 2);
    const double C205 =
        (C4651 * C4649 * C4688 * C4702 * C4657) / std::pow(C4630, 2);
    const double C227 =
        (C4651 * C4649 * C4702 * C4650 * C4657) / std::pow(C4630, 2);
    const double C249 =
        (C4651 * C4649 * C4702 * C4688 * C4657) / std::pow(C4630, 2);
    const double C272 =
        ((std::pow(C4702, 2) * C4649 * C4651 - (bs[1] * C4646) / C4645) *
         C4657) /
        std::pow(C4630, 2);
    const double C73 = (C4650 * C4651 * C4649 * C4658) / C4630 -
                       (ae * bs[1] * C4646) / (C4645 * C4630);
    const double C104 = (C4650 * C4651 * C4649 * C4691) / C4630;
    const double C131 = (C4650 * C4651 * C4649 * C4705) / C4630;
    const double C315 = (C4688 * C4651 * C4649 * C4658) / C4630;
    const double C353 = (C4688 * C4651 * C4649 * C4691) / C4630 -
                        (ae * bs[1] * C4646) / (C4645 * C4630);
    const double C387 = (C4688 * C4651 * C4649 * C4705) / C4630;
    const double C616 = (C4702 * C4651 * C4649 * C4658) / C4630;
    const double C654 = (C4702 * C4651 * C4649 * C4691) / C4630;
    const double C688 = (C4702 * C4651 * C4649 * C4705) / C4630 -
                        (ae * bs[1] * C4646) / (C4645 * C4630);
    const double C4659 = std::pow(C4656, 3);
    const double C4675 = C4669 * C4671;
    const double C4674 = C4670 * C4669;
    const double C4699 = C4669 * C4697;
    const double C4713 = C4669 * C4711;
    const double C4728 = C4727 * C4669;
    const double C4761 = C4760 * C4669;
    const double C4698 = C4669 * C4696;
    const double C4721 = C4669 * C4720;
    const double C4712 = C4669 * C4710;
    const double C4738 = C4669 * C4737;
    const double C4746 = C4669 * C4745;
    const double C4754 = C4669 * C4753;
    const double C5052 = -C5051;
    const double C5071 = -C5070;
    const double C5087 = -C5086;
    const double C4661 = C4653 * ae;
    const double C70 = C4653 * C4654 - (bs[1] * C4646) / C4645;
    const double C312 = C4653 * C4725 - (bs[1] * C4646) / C4645;
    const double C313 = C4688 * C4650 * C4653;
    const double C613 = C4653 * C4758 - (bs[1] * C4646) / C4645;
    const double C614 = C4702 * C4650 * C4653;
    const double C1425 = C4702 * C4688 * C4653;
    const double C82 = C67 * C73;
    const double C185 = C102 * C104;
    const double C278 = C129 * C131;
    const double C324 = C67 * C315;
    const double C456 = C102 * C353;
    const double C580 = C129 * C387;
    const double C625 = C67 * C616;
    const double C757 = C102 * C654;
    const double C881 = C129 * C688;
    const double C4662 = C4659 * C4660;
    const double C4667 = C4655 * C4659;
    const double C4694 = C4659 * C4693;
    const double C4708 = C4659 * C4707;
    const double C108 = (ae * C4651 * C4649 * C4688 * ae +
                         C4650 * C4659 * C4655 * C4650 * C4688 * C4657) /
                        std::pow(C4630, 2);
    const double C135 = (ae * C4651 * C4649 * C4702 * ae +
                         C4650 * C4659 * C4655 * C4650 * C4702 * C4657) /
                        std::pow(C4630, 2);
    const double C157 = (ae * C4651 * C4649 * C4691 +
                         C4650 * C4659 * C4655 * C4688 * C4650 * C4657) /
                        std::pow(C4630, 2);
    const double C180 =
        (C4650 * (C4653 + std::pow(C4688, 2) * C4655 * C4659) * C4657) /
        std::pow(C4630, 2);
    const double C206 =
        (C4650 * C4659 * C4655 * C4688 * C4702 * C4657) / std::pow(C4630, 2);
    const double C207 =
        (C4659 * C4655 * C4735 + C4669 * C4668 * C4735 * C4654) /
        std::pow(C4630, 2);
    const double C228 = (ae * C4651 * C4649 * C4705 +
                         C4650 * C4659 * C4655 * C4702 * C4650 * C4657) /
                        std::pow(C4630, 2);
    const double C250 =
        (C4650 * C4659 * C4655 * C4702 * C4688 * C4657) / std::pow(C4630, 2);
    const double C251 =
        (C4659 * C4655 * C4751 + C4669 * C4668 * C4751 * C4654) /
        std::pow(C4630, 2);
    const double C273 =
        (C4650 * (C4653 + std::pow(C4702, 2) * C4655 * C4659) * C4657) /
        std::pow(C4630, 2);
    const double C319 =
        (C4688 * (C4653 + C4654 * C4655 * C4659) * C4657) / std::pow(C4630, 2);
    const double C357 =
        (ae * C4651 * C4649 * C4658 + C4688 * C4659 * C4655 * C4692) /
        std::pow(C4630, 2);
    const double C391 = (C4688 * C4659 * C4655 * C4706) / std::pow(C4630, 2);
    const double C421 =
        (ae * C4651 * C4649 * C4658 + C4688 * C4659 * C4655 * C4718) /
        std::pow(C4630, 2);
    const double C451 = (2 * ae * C4651 * C4649 * C4691 +
                         C4688 * (C4653 + C4725 * C4655 * C4659) * C4657) /
                        std::pow(C4630, 2);
    const double C485 =
        (ae * C4651 * C4649 * C4705 + C4688 * C4659 * C4655 * C4735) /
        std::pow(C4630, 2);
    const double C515 = (C4688 * C4659 * C4655 * C4743) / std::pow(C4630, 2);
    const double C545 =
        (ae * C4651 * C4649 * C4705 + C4688 * C4659 * C4655 * C4751) /
        std::pow(C4630, 2);
    const double C575 =
        (C4688 * (C4653 + C4758 * C4655 * C4659) * C4657) / std::pow(C4630, 2);
    const double C620 =
        (C4702 * (C4653 + C4654 * C4655 * C4659) * C4657) / std::pow(C4630, 2);
    const double C658 = (C4702 * C4659 * C4655 * C4692) / std::pow(C4630, 2);
    const double C692 =
        (ae * C4651 * C4649 * C4658 + C4702 * C4659 * C4655 * C4706) /
        std::pow(C4630, 2);
    const double C722 = (C4702 * C4659 * C4655 * C4718) / std::pow(C4630, 2);
    const double C752 =
        (C4702 * (C4653 + C4725 * C4655 * C4659) * C4657) / std::pow(C4630, 2);
    const double C786 =
        (ae * C4651 * C4649 * C4691 + C4702 * C4659 * C4655 * C4735) /
        std::pow(C4630, 2);
    const double C816 =
        (ae * C4651 * C4649 * C4658 + C4702 * C4659 * C4655 * C4743) /
        std::pow(C4630, 2);
    const double C846 =
        (ae * C4651 * C4649 * C4691 + C4702 * C4659 * C4655 * C4751) /
        std::pow(C4630, 2);
    const double C876 = (2 * ae * C4651 * C4649 * C4705 +
                         C4702 * (C4653 + C4758 * C4655 * C4659) * C4657) /
                        std::pow(C4630, 2);
    const double C4678 = C4650 * C4675;
    const double C4911 = C4688 * C4675;
    const double C1430 =
        (2 * ae * C4702 * C4688 * C4675 +
         C4650 * C4702 * C4688 *
             (C4668 * C4669 + C4654 * bs[5] * std::pow(C4656, 5)) * C4657) /
        std::pow(C4630, 2);
    const double C4787 = C4650 * C4699;
    const double C4895 = C4688 * C4699;
    const double C4795 = C4650 * C4713;
    const double C4918 = C4688 * C4713;
    const double C4942 = C4702 * C4713;
    const double C659 =
        (C4659 * C4655 * C4692 + C4698 * C4758) / std::pow(C4630, 2);
    const double C3711 =
        (2 * C4702 * C4698 +
         C4702 * (C4698 + std::pow(C4656, 5) * bs[5] * C4692 * C4758)) /
        std::pow(C4630, 2);
    const double C723 =
        (C4659 * C4655 * C4718 + C4721 * C4758) / std::pow(C4630, 2);
    const double C3750 =
        (2 * C4702 * C4721 +
         C4702 * (C4721 + std::pow(C4656, 5) * bs[5] * C4718 * C4758)) /
        std::pow(C4630, 2);
    const double C392 =
        (C4659 * C4655 * C4706 + C4712 * C4725) / std::pow(C4630, 2);
    const double C2034 =
        (2 * C4688 * C4712 +
         C4688 * (C4712 + std::pow(C4656, 5) * bs[5] * C4706 * C4725)) /
        std::pow(C4630, 2);
    const double C208 =
        (2 * C4650 * C4738 +
         C4650 * (C4738 + std::pow(C4656, 5) * bs[5] * C4735 * C4654)) /
        std::pow(C4630, 2);
    const double C516 =
        (C4659 * C4655 * C4743 + C4746 * C4725) / std::pow(C4630, 2);
    const double C2111 =
        (2 * C4688 * C4746 +
         C4688 * (C4746 + std::pow(C4656, 5) * bs[5] * C4743 * C4725)) /
        std::pow(C4630, 2);
    const double C252 =
        (2 * C4650 * C4754 +
         C4650 * (C4754 + std::pow(C4656, 5) * bs[5] * C4751 * C4654)) /
        std::pow(C4630, 2);
    const double C5053 = std::exp(C5052);
    const double C5072 = std::exp(C5071);
    const double C5088 = std::exp(C5087);
    const double C4663 = C4650 * C4662;
    const double C358 = (C4659 * C4655 * C4692 + ae * C4688 * C4662 +
                         C4688 * (ae * C4662 + C4688 * C4698)) /
                        std::pow(C4630, 2);
    const double C422 = (C4659 * C4655 * C4718 + ae * C4688 * C4662 +
                         C4688 * (ae * C4662 + C4688 * C4721)) /
                        std::pow(C4630, 2);
    const double C693 = (C4659 * C4655 * C4706 + ae * C4702 * C4662 +
                         C4702 * (ae * C4662 + C4702 * C4712)) /
                        std::pow(C4630, 2);
    const double C817 = (C4659 * C4655 * C4743 + ae * C4702 * C4662 +
                         C4702 * (ae * C4662 + C4702 * C4746)) /
                        std::pow(C4630, 2);
    const double C1469 =
        (C4702 * (ae * C4662 + C4688 * C4698)) / std::pow(C4630, 2);
    const double C1507 =
        (ae * C4688 * C4662 + C4702 * C4688 * C4712) / std::pow(C4630, 2);
    const double C1543 =
        (ae * C4702 * C4662 + C4688 * C4702 * C4721) / std::pow(C4630, 2);
    const double C1653 =
        (ae * C4688 * C4662 + C4702 * C4688 * C4746) / std::pow(C4630, 2);
    const double C2014 =
        (2 * (ae * C4662 + C4688 * C4698) + ae * (C4662 + C4675 * C4725) +
         C4688 * (C4698 + ae * C4688 * C4675 +
                  C4688 * (ae * C4675 +
                           C4688 * std::pow(C4656, 5) * bs[5] * C4692))) /
        std::pow(C4630, 2);
    const double C2053 =
        (2 * (ae * C4662 + C4688 * C4721) + ae * (C4662 + C4675 * C4725) +
         C4688 * (C4721 + ae * C4688 * C4675 +
                  C4688 * (ae * C4675 +
                           C4688 * std::pow(C4656, 5) * bs[5] * C4718))) /
        std::pow(C4630, 2);
    const double C2208 =
        (ae * C4662 + C4688 * C4698 +
         (ae * C4675 + C4688 * std::pow(C4656, 5) * bs[5] * C4692) * C4758) /
        std::pow(C4630, 2);
    const double C2263 =
        (ae * (C4662 + C4675 * C4758) +
         C4688 * (C4721 + std::pow(C4656, 5) * bs[5] * C4718 * C4758)) /
        std::pow(C4630, 2);
    const double C3031 =
        (ae * (C4662 + C4675 * C4725) +
         C4702 * (C4712 + std::pow(C4656, 5) * bs[5] * C4706 * C4725)) /
        std::pow(C4630, 2);
    const double C3140 =
        (ae * (C4662 + C4675 * C4725) +
         C4702 * (C4746 + std::pow(C4656, 5) * bs[5] * C4743 * C4725)) /
        std::pow(C4630, 2);
    const double C3731 =
        (2 * (ae * C4662 + C4702 * C4712) + ae * (C4662 + C4675 * C4758) +
         C4702 * (C4712 + ae * C4702 * C4675 +
                  C4702 * (ae * C4675 +
                           C4702 * std::pow(C4656, 5) * bs[5] * C4706))) /
        std::pow(C4630, 2);
    const double C3808 =
        (2 * (ae * C4662 + C4702 * C4746) + ae * (C4662 + C4675 * C4758) +
         C4702 * (C4746 + ae * C4702 * C4675 +
                  C4702 * (ae * C4675 +
                           C4702 * std::pow(C4656, 5) * bs[5] * C4743))) /
        std::pow(C4630, 2);
    const double C316 = (C4651 * C4649 * C4658 + C4662 * C4725) / C4630;
    const double C617 = (C4651 * C4649 * C4658 + C4662 * C4758) / C4630;
    const double C1427 = (C4702 * C4688 * C4662) / C4630;
    const double C1992 =
        (2 * C4688 * C4662 + C4688 * (C4662 + C4675 * C4725)) / C4630;
    const double C2973 = (C4702 * (C4662 + C4675 * C4725)) / C4630;
    const double C3689 =
        (2 * C4702 * C4662 + C4702 * (C4662 + C4675 * C4758)) / C4630;
    const double C4673 = C4650 * C4667;
    const double C4672 = C4667 * ae;
    const double C4677 = C4667 + C4674;
    const double C4729 = C4667 + C4728;
    const double C4762 = C4667 + C4761;
    const double C4896 = C4688 * C4667;
    const double C4943 = C4702 * C4667;
    const double C181 = ((C4653 + C4725 * C4655 * C4659) * C4657 +
                         (C4667 + C4725 * C4668 * C4669) * C4657 * C4654) /
                        std::pow(C4630, 2);
    const double C274 = ((C4653 + C4758 * C4655 * C4659) * C4657 +
                         (C4667 + C4758 * C4668 * C4669) * C4657 * C4654) /
                        std::pow(C4630, 2);
    const double C71 = 2 * C4650 * C4653 + C4650 * (C4653 + C4667 * C4654);
    const double C915 = C4688 * (C4653 + C4667 * C4654);
    const double C1167 = C4702 * (C4653 + C4667 * C4654);
    const double C1991 = 2 * C4688 * C4653 + C4688 * (C4653 + C4667 * C4725);
    const double C2972 = C4702 * (C4653 + C4667 * C4725);
    const double C3688 = 2 * C4702 * C4653 + C4702 * (C4653 + C4667 * C4758);
    const double C4782 = C4688 * C4694;
    const double C109 = (C4659 * C4655 * C4692 + ae * C4650 * C4694 +
                         C4650 * (ae * C4694 + C4650 * C4669 * C4668 * C4692)) /
                        std::pow(C4630, 2);
    const double C110 =
        (2 * (ae * C4694 + C4650 * C4698) + ae * (C4694 + C4699 * C4654) +
         C4650 * (C4698 + ae * C4650 * C4699 +
                  C4650 * (ae * C4699 +
                           C4650 * std::pow(C4656, 5) * bs[5] * C4692))) /
        std::pow(C4630, 2);
    const double C158 = (C4659 * C4655 * C4718 + ae * C4650 * C4694 +
                         C4650 * (ae * C4694 + C4650 * C4669 * C4668 * C4718)) /
                        std::pow(C4630, 2);
    const double C159 =
        (2 * (ae * C4694 + C4650 * C4721) + ae * (C4694 + C4699 * C4654) +
         C4650 * (C4721 + ae * C4650 * C4699 +
                  C4650 * (ae * C4699 +
                           C4650 * std::pow(C4656, 5) * bs[5] * C4718))) /
        std::pow(C4630, 2);
    const double C660 =
        (C4702 * (ae * C4694 + C4650 * C4698)) / std::pow(C4630, 2);
    const double C661 =
        (ae * C4694 + C4650 * C4698 +
         (ae * C4699 + C4650 * std::pow(C4656, 5) * bs[5] * C4692) * C4758) /
        std::pow(C4630, 2);
    const double C724 =
        (C4702 * (ae * C4694 + C4650 * C4721)) / std::pow(C4630, 2);
    const double C725 =
        (ae * C4694 + C4650 * C4721 +
         (ae * C4699 + C4650 * std::pow(C4656, 5) * bs[5] * C4718) * C4758) /
        std::pow(C4630, 2);
    const double C787 = (C4659 * C4655 * C4735 + ae * C4702 * C4694 +
                         C4702 * (ae * C4694 + C4702 * C4738)) /
                        std::pow(C4630, 2);
    const double C788 =
        (ae * C4650 * C4694 + C4702 * C4650 * C4738) / std::pow(C4630, 2);
    const double C847 = (C4659 * C4655 * C4751 + ae * C4702 * C4694 +
                         C4702 * (ae * C4694 + C4702 * C4754)) /
                        std::pow(C4630, 2);
    const double C848 =
        (ae * C4650 * C4694 + C4702 * C4650 * C4754) / std::pow(C4630, 2);
    const double C1308 =
        (ae * (C4694 + C4699 * C4654) +
         C4702 * (C4738 + std::pow(C4656, 5) * bs[5] * C4735 * C4654)) /
        std::pow(C4630, 2);
    const double C1362 =
        (ae * (C4694 + C4699 * C4654) +
         C4702 * (C4754 + std::pow(C4656, 5) * bs[5] * C4751 * C4654)) /
        std::pow(C4630, 2);
    const double C3789 =
        (2 * (ae * C4694 + C4702 * C4738) + ae * (C4694 + C4699 * C4758) +
         C4702 * (C4738 + ae * C4702 * C4699 +
                  C4702 * (ae * C4699 +
                           C4702 * std::pow(C4656, 5) * bs[5] * C4735))) /
        std::pow(C4630, 2);
    const double C3827 =
        (2 * (ae * C4694 + C4702 * C4754) + ae * (C4694 + C4699 * C4758) +
         C4702 * (C4754 + ae * C4702 * C4699 +
                  C4702 * (ae * C4699 +
                           C4702 * std::pow(C4656, 5) * bs[5] * C4751))) /
        std::pow(C4630, 2);
    const double C105 = (C4651 * C4649 * C4691 + C4694 * C4654) / C4630;
    const double C106 =
        (2 * C4650 * C4694 + C4650 * (C4694 + C4699 * C4654)) / C4630;
    const double C355 = (C4688 * C4650 * C4694 + C4650 * C4653 * ae) / C4630;
    const double C655 = (C4651 * C4649 * C4691 + C4694 * C4758) / C4630;
    const double C656 = (C4702 * C4650 * C4694) / C4630;
    const double C945 =
        (C4688 * (C4694 + C4699 * C4654) + (C4653 + C4667 * C4654) * ae) /
        C4630;
    const double C1197 = (C4702 * (C4694 + C4699 * C4654)) / C4630;
    const double C3710 =
        (2 * C4702 * C4694 + C4702 * (C4694 + C4699 * C4758)) / C4630;
    const double C4842 = C4702 * C4708;
    const double C136 = (C4659 * C4655 * C4706 + ae * C4650 * C4708 +
                         C4650 * (ae * C4708 + C4650 * C4669 * C4668 * C4706)) /
                        std::pow(C4630, 2);
    const double C137 =
        (2 * (ae * C4708 + C4650 * C4712) + ae * (C4708 + C4713 * C4654) +
         C4650 * (C4712 + ae * C4650 * C4713 +
                  C4650 * (ae * C4713 +
                           C4650 * std::pow(C4656, 5) * bs[5] * C4706))) /
        std::pow(C4630, 2);
    const double C229 = (C4659 * C4655 * C4743 + ae * C4650 * C4708 +
                         C4650 * (ae * C4708 + C4650 * C4669 * C4668 * C4743)) /
                        std::pow(C4630, 2);
    const double C230 =
        (2 * (ae * C4708 + C4650 * C4746) + ae * (C4708 + C4713 * C4654) +
         C4650 * (C4746 + ae * C4650 * C4713 +
                  C4650 * (ae * C4713 +
                           C4650 * std::pow(C4656, 5) * bs[5] * C4743))) /
        std::pow(C4630, 2);
    const double C393 =
        (C4688 * (ae * C4708 + C4650 * C4712)) / std::pow(C4630, 2);
    const double C394 =
        (ae * C4708 + C4650 * C4712 +
         (ae * C4713 + C4650 * std::pow(C4656, 5) * bs[5] * C4706) * C4725) /
        std::pow(C4630, 2);
    const double C486 = (C4659 * C4655 * C4735 + ae * C4688 * C4708 +
                         C4688 * (ae * C4708 + C4688 * C4738)) /
                        std::pow(C4630, 2);
    const double C487 =
        (ae * C4650 * C4708 + C4688 * C4650 * C4738) / std::pow(C4630, 2);
    const double C517 =
        (C4688 * (ae * C4708 + C4650 * C4746)) / std::pow(C4630, 2);
    const double C518 =
        (ae * C4708 + C4650 * C4746 +
         (ae * C4713 + C4650 * std::pow(C4656, 5) * bs[5] * C4743) * C4725) /
        std::pow(C4630, 2);
    const double C546 = (C4659 * C4655 * C4751 + ae * C4688 * C4708 +
                         C4688 * (ae * C4708 + C4688 * C4754)) /
                        std::pow(C4630, 2);
    const double C547 =
        (ae * C4650 * C4708 + C4688 * C4650 * C4754) / std::pow(C4630, 2);
    const double C1056 =
        (ae * (C4708 + C4713 * C4654) +
         C4688 * (C4738 + std::pow(C4656, 5) * bs[5] * C4735 * C4654)) /
        std::pow(C4630, 2);
    const double C1110 =
        (ae * (C4708 + C4713 * C4654) +
         C4688 * (C4754 + std::pow(C4656, 5) * bs[5] * C4751 * C4654)) /
        std::pow(C4630, 2);
    const double C2092 =
        (2 * (ae * C4708 + C4688 * C4738) + ae * (C4708 + C4713 * C4725) +
         C4688 * (C4738 + ae * C4688 * C4713 +
                  C4688 * (ae * C4713 +
                           C4688 * std::pow(C4656, 5) * bs[5] * C4735))) /
        std::pow(C4630, 2);
    const double C2130 =
        (2 * (ae * C4708 + C4688 * C4754) + ae * (C4708 + C4713 * C4725) +
         C4688 * (C4754 + ae * C4688 * C4713 +
                  C4688 * (ae * C4713 +
                           C4688 * std::pow(C4656, 5) * bs[5] * C4751))) /
        std::pow(C4630, 2);
    const double C132 = (C4651 * C4649 * C4705 + C4708 * C4654) / C4630;
    const double C133 =
        (2 * C4650 * C4708 + C4650 * (C4708 + C4713 * C4654)) / C4630;
    const double C388 = (C4651 * C4649 * C4705 + C4708 * C4725) / C4630;
    const double C389 = (C4688 * C4650 * C4708) / C4630;
    const double C690 = (C4702 * C4650 * C4708 + C4650 * C4653 * ae) / C4630;
    const double C973 = (C4688 * (C4708 + C4713 * C4654)) / C4630;
    const double C1225 =
        (C4702 * (C4708 + C4713 * C4654) + (C4653 + C4667 * C4654) * ae) /
        C4630;
    const double C1505 = (C4702 * C4688 * C4708 + C4688 * C4653 * ae) / C4630;
    const double C2033 =
        (2 * C4688 * C4708 + C4688 * (C4708 + C4713 * C4725)) / C4630;
    const double C3030 =
        (C4702 * (C4708 + C4713 * C4725) + (C4653 + C4667 * C4725) * ae) /
        C4630;
    const double C2236 =
        (C4688 * C4712 + ae * C4702 * C4911 +
         C4702 * (ae * C4911 +
                  C4702 * C4688 * std::pow(C4656, 5) * bs[5] * C4706)) /
        std::pow(C4630, 2);
    const double C2345 =
        (C4688 * C4746 + ae * C4702 * C4911 +
         C4702 * (ae * C4911 +
                  C4702 * C4688 * std::pow(C4656, 5) * bs[5] * C4743)) /
        std::pow(C4630, 2);
    const double C3003 =
        (C4702 *
         (C4698 + ae * C4911 +
          C4688 * (ae * C4675 + C4688 * std::pow(C4656, 5) * bs[5] * C4692))) /
        std::pow(C4630, 2);
    const double C3058 =
        (C4702 * C4721 + ae * C4702 * C4911 +
         C4688 * (ae * C4702 * C4675 +
                  C4688 * C4702 * std::pow(C4656, 5) * bs[5] * C4718)) /
        std::pow(C4630, 2);
    const double C2178 = (C4688 * C4662 + C4911 * C4758) / C4630;
    const double C4788 = C4688 * C4787;
    const double C789 =
        (C4650 * C4738 + ae * C4702 * C4787 +
         C4702 * (ae * C4787 +
                  C4702 * C4650 * std::pow(C4656, 5) * bs[5] * C4735)) /
        std::pow(C4630, 2);
    const double C849 =
        (C4650 * C4754 + ae * C4702 * C4787 +
         C4702 * (ae * C4787 +
                  C4702 * C4650 * std::pow(C4656, 5) * bs[5] * C4751)) /
        std::pow(C4630, 2);
    const double C1198 =
        (C4702 *
         (C4698 + ae * C4787 +
          C4650 * (ae * C4699 + C4650 * std::pow(C4656, 5) * bs[5] * C4692))) /
        std::pow(C4630, 2);
    const double C1253 =
        (C4702 *
         (C4721 + ae * C4787 +
          C4650 * (ae * C4699 + C4650 * std::pow(C4656, 5) * bs[5] * C4718))) /
        std::pow(C4630, 2);
    const double C1580 =
        (2 * ae * C4702 * C4787 +
         C4688 * C4702 * C4650 *
             (C4668 * C4669 + C4725 * bs[5] * std::pow(C4656, 5)) * C4657) /
        std::pow(C4630, 2);
    const double C657 = (C4650 * C4694 + C4787 * C4758) / C4630;
    const double C4847 = C4702 * C4795;
    const double C488 =
        (C4650 * C4738 + ae * C4688 * C4795 +
         C4688 * (ae * C4795 +
                  C4688 * C4650 * std::pow(C4656, 5) * bs[5] * C4735)) /
        std::pow(C4630, 2);
    const double C548 =
        (C4650 * C4754 + ae * C4688 * C4795 +
         C4688 * (ae * C4795 +
                  C4688 * C4650 * std::pow(C4656, 5) * bs[5] * C4751)) /
        std::pow(C4630, 2);
    const double C974 =
        (C4688 *
         (C4712 + ae * C4795 +
          C4650 * (ae * C4713 + C4650 * std::pow(C4656, 5) * bs[5] * C4706))) /
        std::pow(C4630, 2);
    const double C1083 =
        (C4688 *
         (C4746 + ae * C4795 +
          C4650 * (ae * C4713 + C4650 * std::pow(C4656, 5) * bs[5] * C4743))) /
        std::pow(C4630, 2);
    const double C1726 =
        (2 * ae * C4688 * C4795 +
         C4702 * C4688 * C4650 *
             (C4668 * C4669 + C4758 * bs[5] * std::pow(C4656, 5)) * C4657) /
        std::pow(C4630, 2);
    const double C390 = (C4650 * C4708 + C4795 * C4725) / C4630;
    const double C4919 = C4702 * C4918;
    const double C5054 = C5053 * C5048;
    const double C5059 = C5058 * C5053;
    const double C5167 = C5053 * C5049;
    const double C5164 = C5053 / C5047;
    const double C1759 = C5172 * C5053;
    const double C5121 = C5072 * C5119;
    const double C5124 = C5058 * C5072;
    const double C5176 = C5072 * C5120;
    const double C5171 = C5072 / C5047;
    const double C308 = C5172 * C5072;
    const double C5149 = C5088 * C5147;
    const double C5152 = C5058 * C5088;
    const double C5180 = C5088 * C5148;
    const double C5173 = C5088 / C5047;
    const double C611 = C5172 * C5088;
    const double C4664 = C4663 + C4661;
    const double C325 = C67 * C316;
    const double C626 = C67 * C617;
    const double C1432 = C67 * C1427;
    const double C1995 = C67 * C1992;
    const double C2976 = C67 * C2973;
    const double C3692 = C67 * C3689;
    const double C4676 = C4673 * ae;
    const double C1506 = (C4702 * C4688 * C4795 + C4688 * C4673 * ae) / C4630;
    const double C314 = C4650 * C4653 + C4673 * C4725;
    const double C615 = C4650 * C4653 + C4673 * C4758;
    const double C1426 = C4702 * C4688 * C4673;
    const double C4680 = C4678 + C4672;
    const double C4897 = C4895 + C4672;
    const double C4944 = C4942 + C4672;
    const double C2318 =
        (ae * (C4708 + C4702 * (C4702 * C4713 + C4672) + C4702 * C4667 * ae) +
         C4688 * (C4738 + ae * C4702 * C4699 +
                  C4702 * (ae * C4699 +
                           C4702 * std::pow(C4656, 5) * bs[5] * C4735))) /
        std::pow(C4630, 2);
    const double C4679 = C4677 * C4657;
    const double C4730 = C4729 * C4657;
    const double C4763 = C4762 * C4657;
    const double C4898 = C4896 * ae;
    const double C2177 = C4688 * C4653 + C4896 * C4758;
    const double C4945 = C4943 * ae;
    const double C4783 = C4782 + C4661;
    const double C186 = C102 * C105;
    const double C187 = C102 * C106;
    const double C458 = C102 * C355;
    const double C758 = C102 * C655;
    const double C759 = C102 * C656;
    const double C1030 = C102 * C945;
    const double C1282 = C102 * C1197;
    const double C3771 = C102 * C3710;
    const double C4843 = C4842 + C4661;
    const double C279 = C129 * C132;
    const double C280 = C129 * C133;
    const double C581 = C129 * C388;
    const double C582 = C129 * C389;
    const double C883 = C129 * C690;
    const double C1139 = C129 * C973;
    const double C1391 = C129 * C1225;
    const double C1728 = C129 * C1505;
    const double C2151 = C129 * C2033;
    const double C3196 = C129 * C3030;
    const double C2181 = C67 * C2178;
    const double C760 = C102 * C657;
    const double C583 = C129 * C390;
    const double C5168 = C5054 / C5062;
    const double C5166 = C5054 / C5045;
    const double C5165 = C5054 * C5049;
    const double C1758 = (2 * C5058 * C5054) / C5045;
    const double C5169 = C5059 * C5049;
    const double C65 = C5059 / C5170;
    const double C914 = C5059 / C5047;
    const double C5185 = C5167 / C5045;
    const double C1757 = (C5053 * std::pow(C5048, 2)) / C5057 + C5164;
    const double C5178 = C5121 / C5062;
    const double C5177 = C5121 * C5120;
    const double C5174 = C5121 / C5045;
    const double C307 = (2 * C5058 * C5121) / C5045;
    const double C5179 = C5124 * C5120;
    const double C1989 = C5124 / C5170;
    const double C2429 = C5124 / C5047;
    const double C5187 = C5176 / C5045;
    const double C306 = (C5072 * std::pow(C5119, 2)) / C5057 + C5171;
    const double C5182 = C5149 / C5062;
    const double C5181 = C5149 * C5148;
    const double C5175 = C5149 / C5045;
    const double C610 = (2 * C5058 * C5149) / C5045;
    const double C5183 = C5152 * C5148;
    const double C3687 = C5152 / C5170;
    const double C4182 = C5152 / C5047;
    const double C5190 = C5180 / C5045;
    const double C609 = (C5088 * std::pow(C5147, 2)) / C5057 + C5173;
    const double C4665 = ae * C4664;
    const double C74 =
        (C4651 * C4649 * C4658 + C4650 * C4664 + C4650 * C4653 * ae) / C4630;
    const double C317 = (C4688 * C4664) / C4630;
    const double C618 = (C4702 * C4664) / C4630;
    const double C4789 = C4788 + C4676;
    const double C4848 = C4847 + C4676;
    const double C1729 = C129 * C1506;
    const double C4682 = ae * C4680;
    const double C4681 = C4650 * C4680;
    const double C4851 = C4688 * C4680;
    const double C4862 = C4702 * C4680;
    const double C318 = (C4664 + C4680 * C4725) / C4630;
    const double C619 = (C4664 + C4680 * C4758) / C4630;
    const double C4900 = ae * C4897;
    const double C4899 = C4688 * C4897;
    const double C4927 = C4702 * C4897;
    const double C4947 = ae * C4944;
    const double C4946 = C4702 * C4944;
    const double C320 =
        ((C4653 + C4654 * C4655 * C4659) * C4657 + C4679 * C4725) /
        std::pow(C4630, 2);
    const double C321 =
        (2 * ae * C4688 * C4662 + C4650 * C4688 * C4679) / std::pow(C4630, 2);
    const double C322 =
        (2 * ae * (C4662 + C4675 * C4725) +
         C4650 * (C4679 + (C4668 * C4669 + C4654 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4725)) /
        std::pow(C4630, 2);
    const double C621 =
        ((C4653 + C4654 * C4655 * C4659) * C4657 + C4679 * C4758) /
        std::pow(C4630, 2);
    const double C622 =
        (2 * ae * C4702 * C4662 + C4650 * C4702 * C4679) / std::pow(C4630, 2);
    const double C623 =
        (2 * ae * (C4662 + C4675 * C4758) +
         C4650 * (C4679 + (C4668 * C4669 + C4654 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4758)) /
        std::pow(C4630, 2);
    const double C1429 = (C4702 * C4688 * C4679) / std::pow(C4630, 2);
    const double C1993 =
        (2 * C4688 * C4679 +
         C4688 * (C4679 + (C4668 * C4669 + C4654 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4725)) /
        std::pow(C4630, 2);
    const double C2179 =
        (C4688 * C4679 +
         C4688 * (C4668 * C4669 + C4654 * bs[5] * std::pow(C4656, 5)) * C4657 *
             C4758) /
        std::pow(C4630, 2);
    const double C2974 =
        (C4702 * (C4679 + (C4668 * C4669 + C4654 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4725)) /
        std::pow(C4630, 2);
    const double C3690 =
        (2 * C4702 * C4679 +
         C4702 * (C4679 + (C4668 * C4669 + C4654 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4758)) /
        std::pow(C4630, 2);
    const double C182 =
        (2 * C4650 * C4730 +
         C4650 * (C4730 + (C4668 * C4669 + C4725 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4654)) /
        std::pow(C4630, 2);
    const double C453 =
        (2 * ae * C4650 * C4694 + C4688 * C4650 * C4730) / std::pow(C4630, 2);
    const double C753 =
        ((C4653 + C4725 * C4655 * C4659) * C4657 + C4730 * C4758) /
        std::pow(C4630, 2);
    const double C754 = (C4702 * C4650 * C4730) / std::pow(C4630, 2);
    const double C755 =
        (C4650 * C4730 +
         C4650 * (C4668 * C4669 + C4725 * bs[5] * std::pow(C4656, 5)) * C4657 *
             C4758) /
        std::pow(C4630, 2);
    const double C1028 =
        (2 * ae * (C4694 + C4699 * C4654) +
         C4688 * (C4730 + (C4668 * C4669 + C4725 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4654)) /
        std::pow(C4630, 2);
    const double C1280 =
        (C4702 * (C4730 + (C4668 * C4669 + C4725 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4654)) /
        std::pow(C4630, 2);
    const double C1579 =
        (2 * ae * C4702 * C4694 + C4688 * C4702 * C4730) / std::pow(C4630, 2);
    const double C2290 =
        (2 * ae * (C4694 + C4699 * C4758) +
         C4688 * (C4730 + (C4668 * C4669 + C4725 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4758)) /
        std::pow(C4630, 2);
    const double C3769 =
        (2 * C4702 * C4730 +
         C4702 * (C4730 + (C4668 * C4669 + C4725 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4758)) /
        std::pow(C4630, 2);
    const double C275 =
        (2 * C4650 * C4763 +
         C4650 * (C4763 + (C4668 * C4669 + C4758 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4654)) /
        std::pow(C4630, 2);
    const double C576 =
        ((C4653 + C4758 * C4655 * C4659) * C4657 + C4763 * C4725) /
        std::pow(C4630, 2);
    const double C577 = (C4688 * C4650 * C4763) / std::pow(C4630, 2);
    const double C578 =
        (C4650 * C4763 +
         C4650 * (C4668 * C4669 + C4758 * bs[5] * std::pow(C4656, 5)) * C4657 *
             C4725) /
        std::pow(C4630, 2);
    const double C878 =
        (2 * ae * C4650 * C4708 + C4702 * C4650 * C4763) / std::pow(C4630, 2);
    const double C1137 =
        (C4688 * (C4763 + (C4668 * C4669 + C4758 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4654)) /
        std::pow(C4630, 2);
    const double C1389 =
        (2 * ae * (C4708 + C4713 * C4654) +
         C4702 * (C4763 + (C4668 * C4669 + C4758 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4654)) /
        std::pow(C4630, 2);
    const double C1725 =
        (2 * ae * C4688 * C4708 + C4702 * C4688 * C4763) / std::pow(C4630, 2);
    const double C2149 =
        (2 * C4688 * C4763 +
         C4688 * (C4763 + (C4668 * C4669 + C4758 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4725)) /
        std::pow(C4630, 2);
    const double C3194 =
        (2 * ae * (C4708 + C4713 * C4725) +
         C4702 * (C4763 + (C4668 * C4669 + C4758 * bs[5] * std::pow(C4656, 5)) *
                              C4657 * C4725)) /
        std::pow(C4630, 2);
    const double C4920 = C4919 + C4898;
    const double C4784 = ae * C4783;
    const double C354 =
        (C4651 * C4649 * C4691 + C4688 * C4783 + C4688 * C4653 * ae) / C4630;
    const double C1467 = (C4702 * C4783) / C4630;
    const double C2207 = (C4783 + C4897 * C4758) / C4630;
    const double C4844 = ae * C4843;
    const double C689 =
        (C4651 * C4649 * C4705 + C4702 * C4843 + C4702 * C4653 * ae) / C4630;
    const double C5184 = C5165 / C5057;
    const double C5186 = C5169 / C5045;
    const double C309 = -C5185;
    const double C5188 = C5177 / C5057;
    const double C5189 = C5179 / C5045;
    const double C1755 = -C5187;
    const double C5191 = C5181 / C5057;
    const double C5192 = C5183 / C5045;
    const double C3222 = -C5190;
    const double C78 =
        ((C4653 + C4654 * C4655 * C4659) * C4657 + C4665 + C4665 +
         C4650 * (2 * ae * C4662 +
                  C4650 * (C4655 * C4659 + C4654 * bs[4] * std::pow(C4648, 4)) *
                      C4657)) /
        std::pow(C4630, 2);
    const double C359 =
        (C4665 + C4688 * (ae * C4694 + C4650 * C4698)) / std::pow(C4630, 2);
    const double C423 =
        (C4665 + C4688 * (ae * C4694 + C4650 * C4721)) / std::pow(C4630, 2);
    const double C694 =
        (C4665 + C4702 * (ae * C4708 + C4650 * C4712)) / std::pow(C4630, 2);
    const double C818 =
        (C4665 + C4702 * (ae * C4708 + C4650 * C4746)) / std::pow(C4630, 2);
    const double C83 = C67 * C74;
    const double C326 = C67 * C317;
    const double C627 = C67 * C618;
    const double C4790 = ae * C4789;
    const double C356 =
        (C4650 * C4694 + C4688 * C4789 + C4688 * C4673 * ae) / C4630;
    const double C1468 = (C4702 * C4789) / C4630;
    const double C4849 = ae * C4848;
    const double C691 =
        (C4650 * C4708 + C4702 * C4848 + C4702 * C4673 * ae) / C4630;
    const double C360 =
        (ae * C4694 + C4650 * C4698 + ae * C4688 * C4680 +
         C4688 * (C4682 + C4688 * (ae * C4699 + C4650 * std::pow(C4656, 5) *
                                                    bs[5] * C4692))) /
        std::pow(C4630, 2);
    const double C424 =
        (ae * C4694 + C4650 * C4721 + ae * C4688 * C4680 +
         C4688 * (C4682 + C4688 * (ae * C4699 + C4650 * std::pow(C4656, 5) *
                                                    bs[5] * C4718))) /
        std::pow(C4630, 2);
    const double C695 =
        (ae * C4708 + C4650 * C4712 + ae * C4702 * C4680 +
         C4702 * (C4682 + C4702 * (ae * C4713 + C4650 * std::pow(C4656, 5) *
                                                    bs[5] * C4706))) /
        std::pow(C4630, 2);
    const double C819 =
        (ae * C4708 + C4650 * C4746 + ae * C4702 * C4680 +
         C4702 * (C4682 + C4702 * (ae * C4713 + C4650 * std::pow(C4656, 5) *
                                                    bs[5] * C4743))) /
        std::pow(C4630, 2);
    const double C1470 =
        (C4702 * (C4682 + C4688 * (ae * C4699 + C4650 * std::pow(C4656, 5) *
                                                    bs[5] * C4692))) /
        std::pow(C4630, 2);
    const double C4683 = C4662 + C4681;
    const double C4852 = ae * C4851;
    const double C1428 = (C4702 * C4851) / C4630;
    const double C4863 = ae * C4862;
    const double C327 = C67 * C318;
    const double C628 = C67 * C619;
    const double C2372 =
        (ae * C4708 + C4688 * C4754 + ae * C4702 * C4897 +
         C4702 * (C4900 + C4702 * (ae * C4713 + C4688 * std::pow(C4656, 5) *
                                                    bs[5] * C4751))) /
        std::pow(C4630, 2);
    const double C4901 = C4694 + C4899;
    const double C4928 = ae * C4927;
    const double C4948 = C4708 + C4946;
    const double C4921 = ae * C4920;
    const double C2235 =
        (C4688 * C4708 + C4702 * C4920 + C4702 * C4896 * ae) / C4630;
    const double C452 = ((C4653 + C4725 * C4655 * C4659) * C4657 + C4784 +
                         C4784 + C4688 * (2 * ae * C4694 + C4688 * C4730)) /
                        std::pow(C4630, 2);
    const double C1689 =
        (C4784 + C4702 * (ae * C4708 + C4688 * C4754)) / std::pow(C4630, 2);
    const double C457 = C102 * C354;
    const double C1582 = C102 * C1467;
    const double C2292 = C102 * C2207;
    const double C877 = ((C4653 + C4758 * C4655 * C4659) * C4657 + C4844 +
                         C4844 + C4702 * (2 * ae * C4708 + C4702 * C4763)) /
                        std::pow(C4630, 2);
    const double C1617 =
        (C4844 + C4688 * (ae * C4694 + C4702 * C4738)) / std::pow(C4630, 2);
    const double C882 = C129 * C689;
    const double C5193 = C5164 - C5184;
    const double C5194 = C5168 - C5186;
    const double C5195 = C5171 - C5188;
    const double C5196 = C5178 - C5189;
    const double C5197 = C5173 - C5191;
    const double C5198 = C5182 - C5192;
    const double C454 =
        (C4650 * C4730 + C4790 + C4790 +
         C4688 * (2 * ae * C4787 +
                  C4688 * C4650 *
                      (C4668 * C4669 + C4725 * bs[5] * std::pow(C4656, 5)) *
                      C4657)) /
        std::pow(C4630, 2);
    const double C1690 =
        (C4790 + C4702 * (ae * C4795 +
                          C4688 * C4650 * std::pow(C4656, 5) * bs[5] * C4751)) /
        std::pow(C4630, 2);
    const double C459 = C102 * C356;
    const double C1583 = C102 * C1468;
    const double C879 =
        (C4650 * C4763 + C4849 + C4849 +
         C4702 * (2 * ae * C4795 +
                  C4702 * C4650 *
                      (C4668 * C4669 + C4758 * bs[5] * std::pow(C4656, 5)) *
                      C4657)) /
        std::pow(C4630, 2);
    const double C1618 =
        (C4849 + C4688 * (ae * C4787 +
                          C4702 * C4650 * std::pow(C4656, 5) * bs[5] * C4735)) /
        std::pow(C4630, 2);
    const double C884 = C129 * C691;
    const double C4684 = C4683 + C4676;
    const double C917 =
        (C4688 * C4679 + C4852 + C4852 +
         C4650 * (2 * ae * C4688 * C4675 +
                  C4650 * C4688 *
                      (C4668 * C4669 + C4654 * bs[5] * std::pow(C4656, 5)) *
                      C4657)) /
        std::pow(C4630, 2);
    const double C1508 = (C4852 + C4702 * C4688 *
                                      (ae * C4713 + C4650 * std::pow(C4656, 5) *
                                                        bs[5] * C4706)) /
                         std::pow(C4630, 2);
    const double C1654 = (C4852 + C4702 * C4688 *
                                      (ae * C4713 + C4650 * std::pow(C4656, 5) *
                                                        bs[5] * C4743)) /
                         std::pow(C4630, 2);
    const double C1433 = C67 * C1428;
    const double C1169 =
        (C4702 * C4679 + C4863 + C4863 +
         C4650 * (2 * ae * C4702 * C4675 +
                  C4650 * C4702 *
                      (C4668 * C4669 + C4654 * bs[5] * std::pow(C4656, 5)) *
                      C4657)) /
        std::pow(C4630, 2);
    const double C1544 = (C4863 + C4688 * C4702 *
                                      (ae * C4699 + C4650 * std::pow(C4656, 5) *
                                                        bs[5] * C4718)) /
                         std::pow(C4630, 2);
    const double C4902 = C4901 + C4898;
    const double C3085 =
        (C4702 * C4730 + C4928 + C4928 +
         C4688 * (2 * ae * C4702 * C4699 +
                  C4688 * C4702 *
                      (C4668 * C4669 + C4725 * bs[5] * std::pow(C4656, 5)) *
                      C4657)) /
        std::pow(C4630, 2);
    const double C4949 = C4948 + C4945;
    const double C2399 =
        (C4688 * C4763 + C4921 + C4921 +
         C4702 * (2 * ae * C4918 +
                  C4702 * C4688 *
                      (C4668 * C4669 + C4758 * bs[5] * std::pow(C4656, 5)) *
                      C4657)) /
        std::pow(C4630, 2);
    const double C3113 =
        (ae * C4694 + C4702 * C4738 + C4921 +
         C4688 * (ae * (C4702 * C4713 + C4672) +
                  C4688 * (ae * C4699 +
                           C4702 * std::pow(C4656, 5) * bs[5] * C4735))) /
        std::pow(C4630, 2);
    const double C2401 = C129 * C2235;
    const double C62 = (C5193 * C5048) / C5045 + (C5166 - C5185) / C5047;
    const double C63 = (C5194 * C5048) / C5045 + (2 * C5059 + C5193) / C5047;
    const double C64 = (C5048 * C5059) / C5062 + C5194 / C5047;
    const double C1986 = (C5195 * C5119) / C5045 + (C5174 - C5187) / C5047;
    const double C1987 = (C5196 * C5119) / C5045 + (2 * C5124 + C5195) / C5047;
    const double C1988 = (C5119 * C5124) / C5062 + C5196 / C5047;
    const double C3684 = (C5197 * C5147) / C5045 + (C5175 - C5190) / C5047;
    const double C3685 = (C5198 * C5147) / C5045 + (2 * C5152 + C5197) / C5047;
    const double C3686 = (C5147 * C5152) / C5062 + C5198 / C5047;
    const double C4685 = ae * C4684;
    const double C75 =
        (2 * C4664 + C4650 * C4684 + (C4653 + C4667 * C4654) * ae) / C4630;
    const double C916 = (C4688 * C4684) / C4630;
    const double C1168 = (C4702 * C4684) / C4630;
    const double C4903 = ae * C4902;
    const double C2013 =
        (2 * C4783 + C4688 * C4902 + (C4653 + C4667 * C4725) * ae) / C4630;
    const double C3002 = (C4702 * C4902) / C4630;
    const double C4950 = ae * C4949;
    const double C3730 =
        (2 * C4843 + C4702 * C4949 + (C4653 + C4667 * C4758) * ae) / C4630;
    const double C79 =
        (2 * (2 * ae * C4662 + C4650 * C4679) + C4685 + C4685 +
         C4650 * (C4679 + C4682 + C4682 +
                  C4650 * (2 * ae * C4675 +
                           C4650 *
                               (C4668 * C4669 +
                                C4654 * bs[5] * std::pow(C4656, 5)) *
                               C4657))) /
        std::pow(C4630, 2);
    const double C946 =
        (C4685 + C4688 * (C4698 + ae * C4787 +
                          C4650 * (ae * C4699 + C4650 * std::pow(C4656, 5) *
                                                    bs[5] * C4692))) /
        std::pow(C4630, 2);
    const double C1001 =
        (C4685 + C4688 * (C4721 + ae * C4787 +
                          C4650 * (ae * C4699 + C4650 * std::pow(C4656, 5) *
                                                    bs[5] * C4718))) /
        std::pow(C4630, 2);
    const double C1226 =
        (C4685 + C4702 * (C4712 + ae * C4795 +
                          C4650 * (ae * C4713 + C4650 * std::pow(C4656, 5) *
                                                    bs[5] * C4706))) /
        std::pow(C4630, 2);
    const double C1335 =
        (C4685 + C4702 * (C4746 + ae * C4795 +
                          C4650 * (ae * C4713 + C4650 * std::pow(C4656, 5) *
                                                    bs[5] * C4743))) /
        std::pow(C4630, 2);
    const double C84 = C67 * C75;
    const double C919 = C67 * C916;
    const double C1171 = C67 * C1168;
    const double C2072 =
        (2 * (2 * ae * C4694 + C4688 * C4730) + C4903 + C4903 +
         C4688 * (C4730 + C4900 + C4900 +
                  C4688 * (2 * ae * C4699 +
                           C4688 *
                               (C4668 * C4669 +
                                C4725 * bs[5] * std::pow(C4656, 5)) *
                               C4657))) /
        std::pow(C4630, 2);
    const double C3167 =
        (C4903 + C4702 * (C4754 + ae * C4918 +
                          C4688 * (ae * C4713 + C4688 * std::pow(C4656, 5) *
                                                    bs[5] * C4751))) /
        std::pow(C4630, 2);
    const double C2074 = C102 * C2013;
    const double C3087 = C102 * C3002;
    const double C3846 =
        (2 * (2 * ae * C4708 + C4702 * C4763) + C4950 + C4950 +
         C4702 * (C4763 + C4947 + C4947 +
                  C4702 * (2 * ae * C4713 +
                           C4702 *
                               (C4668 * C4669 +
                                C4758 * bs[5] * std::pow(C4656, 5)) *
                               C4657))) /
        std::pow(C4630, 2);
    const double C3848 = C129 * C3730;
    d2eexx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5088 * C5174 -
           (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C5088 *
               C5124) *
              C5193 +
          ((C66 * C313 + C326 + C326 + C57 * C321) * C58 * C59 * C5088 * C5124 -
           (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C5088 * C5174) *
              C5194 +
          ((C66 * C70 + C83 + C83 + C57 * C78) * C58 * C59 * C5088 * C5174 -
           (C66 * C915 + C919 + C919 + C57 * C917) * C58 * C59 * C5088 *
               C5124) *
              C914)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C5088 * C5174 -
           ((C102 * C315 + C59 * C357) * C57 +
            (C102 * C311 + C59 * C353) * C67) *
               C58 * C5088 * C5124) *
              C5193 +
          (((C102 * C313 + C59 * C355) * C67 +
            (C102 * C317 + C59 * C359) * C57) *
               C58 * C5088 * C5124 -
           ((C102 * C73 + C59 * C108) * C57 + (C102 * C69 + C59 * C104) * C67) *
               C58 * C5088 * C5174) *
              C5194 +
          (((C102 * C70 + C59 * C105) * C67 + (C102 * C74 + C59 * C109) * C57) *
               C58 * C5088 * C5174 -
           ((C102 * C916 + C59 * C946) * C57 +
            (C102 * C915 + C59 * C945) * C67) *
               C58 * C5088 * C5124) *
              C914)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C5088 * C5174 -
           ((C129 * C315 + C58 * C391) * C57 +
            (C129 * C311 + C58 * C387) * C67) *
               C59 * C5088 * C5124) *
              C5193 +
          (((C129 * C313 + C58 * C389) * C67 +
            (C129 * C317 + C58 * C393) * C57) *
               C59 * C5088 * C5124 -
           ((C129 * C73 + C58 * C135) * C57 + (C129 * C69 + C58 * C131) * C67) *
               C59 * C5088 * C5174) *
              C5194 +
          (((C129 * C70 + C58 * C132) * C67 + (C129 * C74 + C58 * C136) * C57) *
               C59 * C5088 * C5174 -
           ((C129 * C916 + C58 * C974) * C57 +
            (C129 * C915 + C58 * C973) * C67) *
               C59 * C5088 * C5124) *
              C914)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C5088 * C5174 -
           ((C67 * C353 + C57 * C421) * C59 +
            (C67 * C311 + C57 * C315) * C102) *
               C58 * C5088 * C5124) *
              C5193 +
          (((C67 * C313 + C57 * C317) * C102 +
            (C67 * C355 + C57 * C423) * C59) *
               C58 * C5088 * C5124 -
           ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
               C58 * C5088 * C5174) *
              C5194 +
          (((C67 * C70 + C57 * C74) * C102 + (C67 * C105 + C57 * C158) * C59) *
               C58 * C5088 * C5174 -
           ((C67 * C945 + C57 * C1001) * C59 +
            (C67 * C915 + C57 * C916) * C102) *
               C58 * C5088 * C5124) *
              C914)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5088 * C5174 -
           (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C5088 *
               C5124) *
              C5193 +
          ((C178 * C313 + C458 + C458 + C59 * C453) * C57 * C58 * C5088 *
               C5124 -
           (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C5088 *
               C5174) *
              C5194 +
          ((C178 * C70 + C186 + C186 + C59 * C181) * C57 * C58 * C5088 * C5174 -
           (C178 * C915 + C1030 + C1030 + C59 * C1028) * C57 * C58 * C5088 *
               C5124) *
              C914)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C129 * C68 + C58 * C130) * C102 +
                     (C129 * C103 + C58 * C205) * C59) *
                        C57 * C5088 * C5174 -
                    ((C129 * C353 + C58 * C485) * C59 +
                     (C129 * C311 + C58 * C387) * C102) *
                        C57 * C5088 * C5124) *
                       C5193 +
                   (((C129 * C313 + C58 * C389) * C102 +
                     (C129 * C355 + C58 * C487) * C59) *
                        C57 * C5088 * C5124 -
                    ((C129 * C104 + C58 * C206) * C59 +
                     (C129 * C69 + C58 * C131) * C102) *
                        C57 * C5088 * C5174) *
                       C5194 +
                   (((C129 * C70 + C58 * C132) * C102 +
                     (C129 * C105 + C58 * C207) * C59) *
                        C57 * C5088 * C5174 -
                    ((C129 * C945 + C58 * C1056) * C59 +
                     (C129 * C915 + C58 * C973) * C102) *
                        C57 * C5088 * C5124) *
                       C914)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C5088 * C5174 -
           ((C67 * C387 + C57 * C515) * C58 +
            (C67 * C311 + C57 * C315) * C129) *
               C59 * C5088 * C5124) *
              C5193 +
          (((C67 * C313 + C57 * C317) * C129 +
            (C67 * C389 + C57 * C517) * C58) *
               C59 * C5088 * C5124 -
           ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
               C59 * C5088 * C5174) *
              C5194 +
          (((C67 * C70 + C57 * C74) * C129 + (C67 * C132 + C57 * C229) * C58) *
               C59 * C5088 * C5174 -
           ((C67 * C973 + C57 * C1083) * C58 +
            (C67 * C915 + C57 * C916) * C129) *
               C59 * C5088 * C5124) *
              C914)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C102 * C68 + C59 * C103) * C129 +
                     (C102 * C130 + C59 * C249) * C58) *
                        C57 * C5088 * C5174 -
                    ((C102 * C387 + C59 * C545) * C58 +
                     (C102 * C311 + C59 * C353) * C129) *
                        C57 * C5088 * C5124) *
                       C5193 +
                   (((C102 * C313 + C59 * C355) * C129 +
                     (C102 * C389 + C59 * C547) * C58) *
                        C57 * C5088 * C5124 -
                    ((C102 * C131 + C59 * C250) * C58 +
                     (C102 * C69 + C59 * C104) * C129) *
                        C57 * C5088 * C5174) *
                       C5194 +
                   (((C102 * C70 + C59 * C105) * C129 +
                     (C102 * C132 + C59 * C251) * C58) *
                        C57 * C5088 * C5174 -
                    ((C102 * C973 + C59 * C1110) * C58 +
                     (C102 * C915 + C59 * C945) * C129) *
                        C57 * C5088 * C5124) *
                       C914)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5088 * C5174 -
           (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C5088 *
               C5124) *
              C5193 +
          ((C271 * C313 + C582 + C582 + C58 * C577) * C59 * C57 * C5088 *
               C5124 -
           (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C5088 *
               C5174) *
              C5194 +
          ((C271 * C70 + C279 + C279 + C58 * C274) * C59 * C57 * C5088 * C5174 -
           (C271 * C915 + C1139 + C1139 + C58 * C1137) * C59 * C57 * C5088 *
               C5124) *
              C914)) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5175 -
            (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C5152) *
               C5174 +
           ((C66 * C1425 + C1432 + C1432 + C57 * C1429) * C58 * C59 * C5152 -
            (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C5175) *
               C5124) *
              C309 +
          (((C66 * C614 + C627 + C627 + C57 * C622) * C58 * C59 * C5152 -
            (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C5175) *
               C5174 +
           ((C66 * C313 + C326 + C326 + C57 * C321) * C58 * C59 * C5175 -
            (C66 * C1426 + C1433 + C1433 + C57 * C1430) * C58 * C59 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C102 * C68 + C59 * C103) * C67 +
                      (C102 * C72 + C59 * C107) * C57) *
                         C58 * C5175 -
                     ((C102 * C616 + C59 * C658) * C57 +
                      (C102 * C612 + C59 * C654) * C67) *
                         C58 * C5152) *
                        C5174 +
                    (((C102 * C1425 + C59 * C1467) * C67 +
                      (C102 * C1427 + C59 * C1469) * C57) *
                         C58 * C5152 -
                     ((C102 * C315 + C59 * C357) * C57 +
                      (C102 * C311 + C59 * C353) * C67) *
                         C58 * C5175) *
                        C5124) *
                       C309 +
                   ((((C102 * C614 + C59 * C656) * C67 +
                      (C102 * C618 + C59 * C660) * C57) *
                         C58 * C5152 -
                     ((C102 * C73 + C59 * C108) * C57 +
                      (C102 * C69 + C59 * C104) * C67) *
                         C58 * C5175) *
                        C5174 +
                    (((C102 * C313 + C59 * C355) * C67 +
                      (C102 * C317 + C59 * C359) * C57) *
                         C58 * C5175 -
                     ((C102 * C1428 + C59 * C1470) * C57 +
                      (C102 * C1426 + C59 * C1468) * C67) *
                         C58 * C5152) *
                        C5124) *
                       C5059)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C129 * C68 + C58 * C130) * C67 +
                      (C129 * C72 + C58 * C134) * C57) *
                         C59 * C5175 -
                     ((C129 * C616 + C58 * C692) * C57 +
                      (C129 * C612 + C58 * C688) * C67) *
                         C59 * C5152) *
                        C5174 +
                    (((C129 * C1425 + C58 * C1505) * C67 +
                      (C129 * C1427 + C58 * C1507) * C57) *
                         C59 * C5152 -
                     ((C129 * C315 + C58 * C391) * C57 +
                      (C129 * C311 + C58 * C387) * C67) *
                         C59 * C5175) *
                        C5124) *
                       C309 +
                   ((((C129 * C614 + C58 * C690) * C67 +
                      (C129 * C618 + C58 * C694) * C57) *
                         C59 * C5152 -
                     ((C129 * C73 + C58 * C135) * C57 +
                      (C129 * C69 + C58 * C131) * C67) *
                         C59 * C5175) *
                        C5174 +
                    (((C129 * C313 + C58 * C389) * C67 +
                      (C129 * C317 + C58 * C393) * C57) *
                         C59 * C5175 -
                     ((C129 * C1428 + C58 * C1508) * C57 +
                      (C129 * C1426 + C58 * C1506) * C67) *
                         C59 * C5152) *
                        C5124) *
                       C5059)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
                C58 * C5175 -
            ((C67 * C654 + C57 * C722) * C59 +
             (C67 * C612 + C57 * C616) * C102) *
                C58 * C5152) *
               C5174 +
           (((C67 * C1425 + C57 * C1427) * C102 +
             (C67 * C1467 + C57 * C1543) * C59) *
                C58 * C5152 -
            ((C67 * C353 + C57 * C421) * C59 +
             (C67 * C311 + C57 * C315) * C102) *
                C58 * C5175) *
               C5124) *
              C309 +
          ((((C67 * C614 + C57 * C618) * C102 +
             (C67 * C656 + C57 * C724) * C59) *
                C58 * C5152 -
            ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
                C58 * C5175) *
               C5174 +
           (((C67 * C313 + C57 * C317) * C102 +
             (C67 * C355 + C57 * C423) * C59) *
                C58 * C5175 -
            ((C67 * C1468 + C57 * C1544) * C59 +
             (C67 * C1426 + C57 * C1428) * C102) *
                C58 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5175 -
            (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C5152) *
               C5174 +
           ((C178 * C1425 + C1582 + C1582 + C59 * C1579) * C57 * C58 * C5152 -
            (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C5175) *
               C5124) *
              C309 +
          (((C178 * C614 + C759 + C759 + C59 * C754) * C57 * C58 * C5152 -
            (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C5175) *
               C5174 +
           ((C178 * C313 + C458 + C458 + C59 * C453) * C57 * C58 * C5175 -
            (C178 * C1426 + C1583 + C1583 + C59 * C1580) * C57 * C58 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C129 * C68 + C58 * C130) * C102 +
                      (C129 * C103 + C58 * C205) * C59) *
                         C57 * C5175 -
                     ((C129 * C654 + C58 * C786) * C59 +
                      (C129 * C612 + C58 * C688) * C102) *
                         C57 * C5152) *
                        C5174 +
                    (((C129 * C1425 + C58 * C1505) * C102 +
                      (C129 * C1467 + C58 * C1617) * C59) *
                         C57 * C5152 -
                     ((C129 * C353 + C58 * C485) * C59 +
                      (C129 * C311 + C58 * C387) * C102) *
                         C57 * C5175) *
                        C5124) *
                       C309 +
                   ((((C129 * C614 + C58 * C690) * C102 +
                      (C129 * C656 + C58 * C788) * C59) *
                         C57 * C5152 -
                     ((C129 * C104 + C58 * C206) * C59 +
                      (C129 * C69 + C58 * C131) * C102) *
                         C57 * C5175) *
                        C5174 +
                    (((C129 * C313 + C58 * C389) * C102 +
                      (C129 * C355 + C58 * C487) * C59) *
                         C57 * C5175 -
                     ((C129 * C1468 + C58 * C1618) * C59 +
                      (C129 * C1426 + C58 * C1506) * C102) *
                         C57 * C5152) *
                        C5124) *
                       C5059)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
                C59 * C5175 -
            ((C67 * C688 + C57 * C816) * C58 +
             (C67 * C612 + C57 * C616) * C129) *
                C59 * C5152) *
               C5174 +
           (((C67 * C1425 + C57 * C1427) * C129 +
             (C67 * C1505 + C57 * C1653) * C58) *
                C59 * C5152 -
            ((C67 * C387 + C57 * C515) * C58 +
             (C67 * C311 + C57 * C315) * C129) *
                C59 * C5175) *
               C5124) *
              C309 +
          ((((C67 * C614 + C57 * C618) * C129 +
             (C67 * C690 + C57 * C818) * C58) *
                C59 * C5152 -
            ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
                C59 * C5175) *
               C5174 +
           (((C67 * C313 + C57 * C317) * C129 +
             (C67 * C389 + C57 * C517) * C58) *
                C59 * C5175 -
            ((C67 * C1506 + C57 * C1654) * C58 +
             (C67 * C1426 + C57 * C1428) * C129) *
                C59 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C102 * C68 + C59 * C103) * C129 +
                      (C102 * C130 + C59 * C249) * C58) *
                         C57 * C5175 -
                     ((C102 * C688 + C59 * C846) * C58 +
                      (C102 * C612 + C59 * C654) * C129) *
                         C57 * C5152) *
                        C5174 +
                    (((C102 * C1425 + C59 * C1467) * C129 +
                      (C102 * C1505 + C59 * C1689) * C58) *
                         C57 * C5152 -
                     ((C102 * C387 + C59 * C545) * C58 +
                      (C102 * C311 + C59 * C353) * C129) *
                         C57 * C5175) *
                        C5124) *
                       C309 +
                   ((((C102 * C614 + C59 * C656) * C129 +
                      (C102 * C690 + C59 * C848) * C58) *
                         C57 * C5152 -
                     ((C102 * C131 + C59 * C250) * C58 +
                      (C102 * C69 + C59 * C104) * C129) *
                         C57 * C5175) *
                        C5174 +
                    (((C102 * C313 + C59 * C355) * C129 +
                      (C102 * C389 + C59 * C547) * C58) *
                         C57 * C5175 -
                     ((C102 * C1506 + C59 * C1690) * C58 +
                      (C102 * C1426 + C59 * C1468) * C129) *
                         C57 * C5152) *
                        C5124) *
                       C5059)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5175 -
            (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C5152) *
               C5174 +
           ((C271 * C1425 + C1728 + C1728 + C58 * C1725) * C59 * C57 * C5152 -
            (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C5175) *
               C5124) *
              C309 +
          (((C271 * C614 + C883 + C883 + C58 * C878) * C59 * C57 * C5152 -
            (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C5175) *
               C5174 +
           ((C271 * C313 + C582 + C582 + C58 * C577) * C59 * C57 * C5175 -
            (C271 * C1426 + C1729 + C1729 + C58 * C1726) * C59 * C57 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5088 * C306 -
           (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C5088 * C307 +
           (C66 * C312 + C325 + C325 + C57 * C320) * C58 * C59 * C5088 * C308) *
              C309 +
          ((C66 * C313 + C326 + C326 + C57 * C321) * C58 * C59 * C5088 * C307 -
           (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C5088 * C306 -
           (C66 * C314 + C327 + C327 + C57 * C322) * C58 * C59 * C5088 * C308) *
              C5059)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 *
                                  C5088 * C5072 * C62 -
                              (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 *
                                  C5088 * C5072 * C63 +
                              (C66 * C70 + C83 + C83 + C57 * C78) * C58 * C59 *
                                  C5088 * C5072 * C64 -
                              (C66 * C71 + C84 + C84 + C57 * C79) * C58 * C59 *
                                  C5088 * C5072 * C65)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C609 -
           (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C610 +
           (C66 * C613 + C626 + C626 + C57 * C621) * C58 * C59 * C611) *
              C5072 * C309 +
          ((C66 * C614 + C627 + C627 + C57 * C622) * C58 * C59 * C610 -
           (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C609 -
           (C66 * C615 + C628 + C628 + C57 * C623) * C58 * C59 * C611) *
              C5072 * C5059)) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C5088 * C306 -
           ((C102 * C315 + C59 * C357) * C57 +
            (C102 * C311 + C59 * C353) * C67) *
               C58 * C5088 * C307 +
           ((C102 * C312 + C59 * C354) * C67 +
            (C102 * C316 + C59 * C358) * C57) *
               C58 * C5088 * C308) *
              C309 +
          (((C102 * C313 + C59 * C355) * C67 +
            (C102 * C317 + C59 * C359) * C57) *
               C58 * C5088 * C307 -
           ((C102 * C73 + C59 * C108) * C57 + (C102 * C69 + C59 * C104) * C67) *
               C58 * C5088 * C306 -
           ((C102 * C318 + C59 * C360) * C57 +
            (C102 * C314 + C59 * C356) * C67) *
               C58 * C5088 * C308) *
              C5059)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
              C58 * C5088 * C5072 * C62 -
          ((C102 * C73 + C59 * C108) * C57 + (C102 * C69 + C59 * C104) * C67) *
              C58 * C5088 * C5072 * C63 +
          ((C102 * C70 + C59 * C105) * C67 + (C102 * C74 + C59 * C109) * C57) *
              C58 * C5088 * C5072 * C64 -
          ((C102 * C75 + C59 * C110) * C57 + (C102 * C71 + C59 * C106) * C67) *
              C58 * C5088 * C5072 * C65)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C609 -
           ((C102 * C616 + C59 * C658) * C57 +
            (C102 * C612 + C59 * C654) * C67) *
               C58 * C610 +
           ((C102 * C613 + C59 * C655) * C67 +
            (C102 * C617 + C59 * C659) * C57) *
               C58 * C611) *
              C5072 * C309 +
          (((C102 * C614 + C59 * C656) * C67 +
            (C102 * C618 + C59 * C660) * C57) *
               C58 * C610 -
           ((C102 * C73 + C59 * C108) * C57 + (C102 * C69 + C59 * C104) * C67) *
               C58 * C609 -
           ((C102 * C619 + C59 * C661) * C57 +
            (C102 * C615 + C59 * C657) * C67) *
               C58 * C611) *
              C5072 * C5059)) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C5088 * C306 -
           ((C129 * C315 + C58 * C391) * C57 +
            (C129 * C311 + C58 * C387) * C67) *
               C59 * C5088 * C307 +
           ((C129 * C312 + C58 * C388) * C67 +
            (C129 * C316 + C58 * C392) * C57) *
               C59 * C5088 * C308) *
              C309 +
          (((C129 * C313 + C58 * C389) * C67 +
            (C129 * C317 + C58 * C393) * C57) *
               C59 * C5088 * C307 -
           ((C129 * C73 + C58 * C135) * C57 + (C129 * C69 + C58 * C131) * C67) *
               C59 * C5088 * C306 -
           ((C129 * C318 + C58 * C394) * C57 +
            (C129 * C314 + C58 * C390) * C67) *
               C59 * C5088 * C308) *
              C5059)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
              C59 * C5088 * C5072 * C62 -
          ((C129 * C73 + C58 * C135) * C57 + (C129 * C69 + C58 * C131) * C67) *
              C59 * C5088 * C5072 * C63 +
          ((C129 * C70 + C58 * C132) * C67 + (C129 * C74 + C58 * C136) * C57) *
              C59 * C5088 * C5072 * C64 -
          ((C129 * C75 + C58 * C137) * C57 + (C129 * C71 + C58 * C133) * C67) *
              C59 * C5088 * C5072 * C65)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C609 -
           ((C129 * C616 + C58 * C692) * C57 +
            (C129 * C612 + C58 * C688) * C67) *
               C59 * C610 +
           ((C129 * C613 + C58 * C689) * C67 +
            (C129 * C617 + C58 * C693) * C57) *
               C59 * C611) *
              C5072 * C309 +
          (((C129 * C614 + C58 * C690) * C67 +
            (C129 * C618 + C58 * C694) * C57) *
               C59 * C610 -
           ((C129 * C73 + C58 * C135) * C57 + (C129 * C69 + C58 * C131) * C67) *
               C59 * C609 -
           ((C129 * C619 + C58 * C695) * C57 +
            (C129 * C615 + C58 * C691) * C67) *
               C59 * C611) *
              C5072 * C5059)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C5088 * C306 -
           ((C67 * C353 + C57 * C421) * C59 +
            (C67 * C311 + C57 * C315) * C102) *
               C58 * C5088 * C307 +
           ((C67 * C312 + C57 * C316) * C102 +
            (C67 * C354 + C57 * C422) * C59) *
               C58 * C5088 * C308) *
              C309 +
          (((C67 * C313 + C57 * C317) * C102 +
            (C67 * C355 + C57 * C423) * C59) *
               C58 * C5088 * C307 -
           ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
               C58 * C5088 * C306 -
           ((C67 * C356 + C57 * C424) * C59 +
            (C67 * C314 + C57 * C318) * C102) *
               C58 * C5088 * C308) *
              C5059)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
              C58 * C5088 * C5072 * C62 -
          ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
              C58 * C5088 * C5072 * C63 +
          ((C67 * C70 + C57 * C74) * C102 + (C67 * C105 + C57 * C158) * C59) *
              C58 * C5088 * C5072 * C64 -
          ((C67 * C106 + C57 * C159) * C59 + (C67 * C71 + C57 * C75) * C102) *
              C58 * C5088 * C5072 * C65)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C609 -
           ((C67 * C654 + C57 * C722) * C59 +
            (C67 * C612 + C57 * C616) * C102) *
               C58 * C610 +
           ((C67 * C613 + C57 * C617) * C102 +
            (C67 * C655 + C57 * C723) * C59) *
               C58 * C611) *
              C5072 * C309 +
          (((C67 * C614 + C57 * C618) * C102 +
            (C67 * C656 + C57 * C724) * C59) *
               C58 * C610 -
           ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
               C58 * C609 -
           ((C67 * C657 + C57 * C725) * C59 +
            (C67 * C615 + C57 * C619) * C102) *
               C58 * C611) *
              C5072 * C5059)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5088 * C306 -
           (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C5088 * C307 +
           (C178 * C312 + C457 + C457 + C59 * C452) * C57 * C58 * C5088 *
               C308) *
              C309 +
          ((C178 * C313 + C458 + C458 + C59 * C453) * C57 * C58 * C5088 * C307 -
           (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C5088 * C306 -
           (C178 * C314 + C459 + C459 + C59 * C454) * C57 * C58 * C5088 *
               C308) *
              C5059)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C178 * C68 + C184 + C184 + C59 * C179) * C57 *
                                  C58 * C5088 * C5072 * C62 -
                              (C178 * C69 + C185 + C185 + C59 * C180) * C57 *
                                  C58 * C5088 * C5072 * C63 +
                              (C178 * C70 + C186 + C186 + C59 * C181) * C57 *
                                  C58 * C5088 * C5072 * C64 -
                              (C178 * C71 + C187 + C187 + C59 * C182) * C57 *
                                  C58 * C5088 * C5072 * C65)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C609 -
           (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C610 +
           (C178 * C613 + C758 + C758 + C59 * C753) * C57 * C58 * C611) *
              C5072 * C309 +
          ((C178 * C614 + C759 + C759 + C59 * C754) * C57 * C58 * C610 -
           (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C609 -
           (C178 * C615 + C760 + C760 + C59 * C755) * C57 * C58 * C611) *
              C5072 * C5059)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::pow(Pi, 2.5) * ((((C129 * C68 + C58 * C130) * C102 +
                                          (C129 * C103 + C58 * C205) * C59) *
                                             C57 * C5088 * C306 -
                                         ((C129 * C353 + C58 * C485) * C59 +
                                          (C129 * C311 + C58 * C387) * C102) *
                                             C57 * C5088 * C307 +
                                         ((C129 * C312 + C58 * C388) * C102 +
                                          (C129 * C354 + C58 * C486) * C59) *
                                             C57 * C5088 * C308) *
                                            C309 +
                                        (((C129 * C313 + C58 * C389) * C102 +
                                          (C129 * C355 + C58 * C487) * C59) *
                                             C57 * C5088 * C307 -
                                         ((C129 * C104 + C58 * C206) * C59 +
                                          (C129 * C69 + C58 * C131) * C102) *
                                             C57 * C5088 * C306 -
                                         ((C129 * C356 + C58 * C488) * C59 +
                                          (C129 * C314 + C58 * C390) * C102) *
                                             C57 * C5088 * C308) *
                                            C5059)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * (((C129 * C68 + C58 * C130) * C102 +
                                        (C129 * C103 + C58 * C205) * C59) *
                                           C57 * C5088 * C5072 * C62 -
                                       ((C129 * C104 + C58 * C206) * C59 +
                                        (C129 * C69 + C58 * C131) * C102) *
                                           C57 * C5088 * C5072 * C63 +
                                       ((C129 * C70 + C58 * C132) * C102 +
                                        (C129 * C105 + C58 * C207) * C59) *
                                           C57 * C5088 * C5072 * C64 -
                                       ((C129 * C106 + C58 * C208) * C59 +
                                        (C129 * C71 + C58 * C133) * C102) *
                                           C57 * C5088 * C5072 * C65)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C129 * C68 + C58 * C130) * C102 +
                     (C129 * C103 + C58 * C205) * C59) *
                        C57 * C609 -
                    ((C129 * C654 + C58 * C786) * C59 +
                     (C129 * C612 + C58 * C688) * C102) *
                        C57 * C610 +
                    ((C129 * C613 + C58 * C689) * C102 +
                     (C129 * C655 + C58 * C787) * C59) *
                        C57 * C611) *
                       C5072 * C309 +
                   (((C129 * C614 + C58 * C690) * C102 +
                     (C129 * C656 + C58 * C788) * C59) *
                        C57 * C610 -
                    ((C129 * C104 + C58 * C206) * C59 +
                     (C129 * C69 + C58 * C131) * C102) *
                        C57 * C609 -
                    ((C129 * C657 + C58 * C789) * C59 +
                     (C129 * C615 + C58 * C691) * C102) *
                        C57 * C611) *
                       C5072 * C5059)) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C5088 * C306 -
           ((C67 * C387 + C57 * C515) * C58 +
            (C67 * C311 + C57 * C315) * C129) *
               C59 * C5088 * C307 +
           ((C67 * C312 + C57 * C316) * C129 +
            (C67 * C388 + C57 * C516) * C58) *
               C59 * C5088 * C308) *
              C309 +
          (((C67 * C313 + C57 * C317) * C129 +
            (C67 * C389 + C57 * C517) * C58) *
               C59 * C5088 * C307 -
           ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
               C59 * C5088 * C306 -
           ((C67 * C390 + C57 * C518) * C58 +
            (C67 * C314 + C57 * C318) * C129) *
               C59 * C5088 * C308) *
              C5059)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
              C59 * C5088 * C5072 * C62 -
          ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
              C59 * C5088 * C5072 * C63 +
          ((C67 * C70 + C57 * C74) * C129 + (C67 * C132 + C57 * C229) * C58) *
              C59 * C5088 * C5072 * C64 -
          ((C67 * C133 + C57 * C230) * C58 + (C67 * C71 + C57 * C75) * C129) *
              C59 * C5088 * C5072 * C65)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C609 -
           ((C67 * C688 + C57 * C816) * C58 +
            (C67 * C612 + C57 * C616) * C129) *
               C59 * C610 +
           ((C67 * C613 + C57 * C617) * C129 +
            (C67 * C689 + C57 * C817) * C58) *
               C59 * C611) *
              C5072 * C309 +
          (((C67 * C614 + C57 * C618) * C129 +
            (C67 * C690 + C57 * C818) * C58) *
               C59 * C610 -
           ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
               C59 * C609 -
           ((C67 * C691 + C57 * C819) * C58 +
            (C67 * C615 + C57 * C619) * C129) *
               C59 * C611) *
              C5072 * C5059)) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] += (-std::pow(Pi, 2.5) * ((((C102 * C68 + C59 * C103) * C129 +
                                          (C102 * C130 + C59 * C249) * C58) *
                                             C57 * C5088 * C306 -
                                         ((C102 * C387 + C59 * C545) * C58 +
                                          (C102 * C311 + C59 * C353) * C129) *
                                             C57 * C5088 * C307 +
                                         ((C102 * C312 + C59 * C354) * C129 +
                                          (C102 * C388 + C59 * C546) * C58) *
                                             C57 * C5088 * C308) *
                                            C309 +
                                        (((C102 * C313 + C59 * C355) * C129 +
                                          (C102 * C389 + C59 * C547) * C58) *
                                             C57 * C5088 * C307 -
                                         ((C102 * C131 + C59 * C250) * C58 +
                                          (C102 * C69 + C59 * C104) * C129) *
                                             C57 * C5088 * C306 -
                                         ((C102 * C390 + C59 * C548) * C58 +
                                          (C102 * C314 + C59 * C356) * C129) *
                                             C57 * C5088 * C308) *
                                            C5059)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * (((C102 * C68 + C59 * C103) * C129 +
                                        (C102 * C130 + C59 * C249) * C58) *
                                           C57 * C5088 * C5072 * C62 -
                                       ((C102 * C131 + C59 * C250) * C58 +
                                        (C102 * C69 + C59 * C104) * C129) *
                                           C57 * C5088 * C5072 * C63 +
                                       ((C102 * C70 + C59 * C105) * C129 +
                                        (C102 * C132 + C59 * C251) * C58) *
                                           C57 * C5088 * C5072 * C64 -
                                       ((C102 * C133 + C59 * C252) * C58 +
                                        (C102 * C71 + C59 * C106) * C129) *
                                           C57 * C5088 * C5072 * C65)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C102 * C68 + C59 * C103) * C129 +
                     (C102 * C130 + C59 * C249) * C58) *
                        C57 * C609 -
                    ((C102 * C688 + C59 * C846) * C58 +
                     (C102 * C612 + C59 * C654) * C129) *
                        C57 * C610 +
                    ((C102 * C613 + C59 * C655) * C129 +
                     (C102 * C689 + C59 * C847) * C58) *
                        C57 * C611) *
                       C5072 * C309 +
                   (((C102 * C614 + C59 * C656) * C129 +
                     (C102 * C690 + C59 * C848) * C58) *
                        C57 * C610 -
                    ((C102 * C131 + C59 * C250) * C58 +
                     (C102 * C69 + C59 * C104) * C129) *
                        C57 * C609 -
                    ((C102 * C691 + C59 * C849) * C58 +
                     (C102 * C615 + C59 * C657) * C129) *
                        C57 * C611) *
                       C5072 * C5059)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5088 * C306 -
           (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C5088 * C307 +
           (C271 * C312 + C581 + C581 + C58 * C576) * C59 * C57 * C5088 *
               C308) *
              C309 +
          ((C271 * C313 + C582 + C582 + C58 * C577) * C59 * C57 * C5088 * C307 -
           (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C5088 * C306 -
           (C271 * C314 + C583 + C583 + C58 * C578) * C59 * C57 * C5088 *
               C308) *
              C5059)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C271 * C68 + C277 + C277 + C58 * C272) * C59 *
                                  C57 * C5088 * C5072 * C62 -
                              (C271 * C69 + C278 + C278 + C58 * C273) * C59 *
                                  C57 * C5088 * C5072 * C63 +
                              (C271 * C70 + C279 + C279 + C58 * C274) * C59 *
                                  C57 * C5088 * C5072 * C64 -
                              (C271 * C71 + C280 + C280 + C58 * C275) * C59 *
                                  C57 * C5088 * C5072 * C65)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C609 -
           (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C610 +
           (C271 * C613 + C882 + C882 + C58 * C877) * C59 * C57 * C611) *
              C5072 * C309 +
          ((C271 * C614 + C883 + C883 + C58 * C878) * C59 * C57 * C610 -
           (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C609 -
           (C271 * C615 + C884 + C884 + C58 * C879) * C59 * C57 * C611) *
              C5072 * C5059)) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5175 -
           (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C5152) *
              C5072 * C5193 +
          ((C66 * C614 + C627 + C627 + C57 * C622) * C58 * C59 * C5152 -
           (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C5175) *
              C5072 * C5194 +
          ((C66 * C70 + C83 + C83 + C57 * C78) * C58 * C59 * C5175 -
           (C66 * C1167 + C1171 + C1171 + C57 * C1169) * C58 * C59 * C5152) *
              C5072 * C914)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C5175 -
           ((C102 * C616 + C59 * C658) * C57 +
            (C102 * C612 + C59 * C654) * C67) *
               C58 * C5152) *
              C5072 * C5193 +
          (((C102 * C614 + C59 * C656) * C67 +
            (C102 * C618 + C59 * C660) * C57) *
               C58 * C5152 -
           ((C102 * C73 + C59 * C108) * C57 + (C102 * C69 + C59 * C104) * C67) *
               C58 * C5175) *
              C5072 * C5194 +
          (((C102 * C70 + C59 * C105) * C67 + (C102 * C74 + C59 * C109) * C57) *
               C58 * C5175 -
           ((C102 * C1168 + C59 * C1198) * C57 +
            (C102 * C1167 + C59 * C1197) * C67) *
               C58 * C5152) *
              C5072 * C914)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C5175 -
           ((C129 * C616 + C58 * C692) * C57 +
            (C129 * C612 + C58 * C688) * C67) *
               C59 * C5152) *
              C5072 * C5193 +
          (((C129 * C614 + C58 * C690) * C67 +
            (C129 * C618 + C58 * C694) * C57) *
               C59 * C5152 -
           ((C129 * C73 + C58 * C135) * C57 + (C129 * C69 + C58 * C131) * C67) *
               C59 * C5175) *
              C5072 * C5194 +
          (((C129 * C70 + C58 * C132) * C67 + (C129 * C74 + C58 * C136) * C57) *
               C59 * C5175 -
           ((C129 * C1168 + C58 * C1226) * C57 +
            (C129 * C1167 + C58 * C1225) * C67) *
               C59 * C5152) *
              C5072 * C914)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C5175 -
           ((C67 * C654 + C57 * C722) * C59 +
            (C67 * C612 + C57 * C616) * C102) *
               C58 * C5152) *
              C5072 * C5193 +
          (((C67 * C614 + C57 * C618) * C102 +
            (C67 * C656 + C57 * C724) * C59) *
               C58 * C5152 -
           ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
               C58 * C5175) *
              C5072 * C5194 +
          (((C67 * C70 + C57 * C74) * C102 + (C67 * C105 + C57 * C158) * C59) *
               C58 * C5175 -
           ((C67 * C1197 + C57 * C1253) * C59 +
            (C67 * C1167 + C57 * C1168) * C102) *
               C58 * C5152) *
              C5072 * C914)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5175 -
           (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C5152) *
              C5072 * C5193 +
          ((C178 * C614 + C759 + C759 + C59 * C754) * C57 * C58 * C5152 -
           (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C5175) *
              C5072 * C5194 +
          ((C178 * C70 + C186 + C186 + C59 * C181) * C57 * C58 * C5175 -
           (C178 * C1167 + C1282 + C1282 + C59 * C1280) * C57 * C58 * C5152) *
              C5072 * C914)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C129 * C68 + C58 * C130) * C102 +
                     (C129 * C103 + C58 * C205) * C59) *
                        C57 * C5175 -
                    ((C129 * C654 + C58 * C786) * C59 +
                     (C129 * C612 + C58 * C688) * C102) *
                        C57 * C5152) *
                       C5072 * C5193 +
                   (((C129 * C614 + C58 * C690) * C102 +
                     (C129 * C656 + C58 * C788) * C59) *
                        C57 * C5152 -
                    ((C129 * C104 + C58 * C206) * C59 +
                     (C129 * C69 + C58 * C131) * C102) *
                        C57 * C5175) *
                       C5072 * C5194 +
                   (((C129 * C70 + C58 * C132) * C102 +
                     (C129 * C105 + C58 * C207) * C59) *
                        C57 * C5175 -
                    ((C129 * C1197 + C58 * C1308) * C59 +
                     (C129 * C1167 + C58 * C1225) * C102) *
                        C57 * C5152) *
                       C5072 * C914)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C5175 -
           ((C67 * C688 + C57 * C816) * C58 +
            (C67 * C612 + C57 * C616) * C129) *
               C59 * C5152) *
              C5072 * C5193 +
          (((C67 * C614 + C57 * C618) * C129 +
            (C67 * C690 + C57 * C818) * C58) *
               C59 * C5152 -
           ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
               C59 * C5175) *
              C5072 * C5194 +
          (((C67 * C70 + C57 * C74) * C129 + (C67 * C132 + C57 * C229) * C58) *
               C59 * C5175 -
           ((C67 * C1225 + C57 * C1335) * C58 +
            (C67 * C1167 + C57 * C1168) * C129) *
               C59 * C5152) *
              C5072 * C914)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C102 * C68 + C59 * C103) * C129 +
                     (C102 * C130 + C59 * C249) * C58) *
                        C57 * C5175 -
                    ((C102 * C688 + C59 * C846) * C58 +
                     (C102 * C612 + C59 * C654) * C129) *
                        C57 * C5152) *
                       C5072 * C5193 +
                   (((C102 * C614 + C59 * C656) * C129 +
                     (C102 * C690 + C59 * C848) * C58) *
                        C57 * C5152 -
                    ((C102 * C131 + C59 * C250) * C58 +
                     (C102 * C69 + C59 * C104) * C129) *
                        C57 * C5175) *
                       C5072 * C5194 +
                   (((C102 * C70 + C59 * C105) * C129 +
                     (C102 * C132 + C59 * C251) * C58) *
                        C57 * C5175 -
                    ((C102 * C1225 + C59 * C1362) * C58 +
                     (C102 * C1167 + C59 * C1197) * C129) *
                        C57 * C5152) *
                       C5072 * C914)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5175 -
           (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C5152) *
              C5072 * C5193 +
          ((C271 * C614 + C883 + C883 + C58 * C878) * C59 * C57 * C5152 -
           (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C5175) *
              C5072 * C5194 +
          ((C271 * C70 + C279 + C279 + C58 * C274) * C59 * C57 * C5175 -
           (C271 * C1167 + C1391 + C1391 + C58 * C1389) * C59 * C57 * C5152) *
              C5072 * C914)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5088 * C5072 *
              C62 -
          (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C5088 * C5072 *
              C63 +
          (C66 * C70 + C83 + C83 + C57 * C78) * C58 * C59 * C5088 * C5072 *
              C64 -
          (C66 * C71 + C84 + C84 + C57 * C79) * C58 * C59 * C5088 * C5072 *
              C65)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5088 * C306 -
           (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C5088 * C307 +
           (C66 * C312 + C325 + C325 + C57 * C320) * C58 * C59 * C5088 * C308) *
              C309 +
          ((C66 * C313 + C326 + C326 + C57 * C321) * C58 * C59 * C5088 * C307 -
           (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C5088 * C306 -
           (C66 * C314 + C327 + C327 + C57 * C322) * C58 * C59 * C5088 * C308) *
              C5059)) /
            (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
              C58 * C5088 * C5072 * C62 -
          ((C102 * C73 + C59 * C108) * C57 + (C102 * C69 + C59 * C104) * C67) *
              C58 * C5088 * C5072 * C63 +
          ((C102 * C70 + C59 * C105) * C67 + (C102 * C74 + C59 * C109) * C57) *
              C58 * C5088 * C5072 * C64 -
          ((C102 * C75 + C59 * C110) * C57 + (C102 * C71 + C59 * C106) * C67) *
              C58 * C5088 * C5072 * C65)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C5088 * C306 -
           ((C102 * C315 + C59 * C357) * C57 +
            (C102 * C311 + C59 * C353) * C67) *
               C58 * C5088 * C307 +
           ((C102 * C312 + C59 * C354) * C67 +
            (C102 * C316 + C59 * C358) * C57) *
               C58 * C5088 * C308) *
              C309 +
          (((C102 * C313 + C59 * C355) * C67 +
            (C102 * C317 + C59 * C359) * C57) *
               C58 * C5088 * C307 -
           ((C102 * C73 + C59 * C108) * C57 + (C102 * C69 + C59 * C104) * C67) *
               C58 * C5088 * C306 -
           ((C102 * C318 + C59 * C360) * C57 +
            (C102 * C314 + C59 * C356) * C67) *
               C58 * C5088 * C308) *
              C5059)) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
              C59 * C5088 * C5072 * C62 -
          ((C129 * C73 + C58 * C135) * C57 + (C129 * C69 + C58 * C131) * C67) *
              C59 * C5088 * C5072 * C63 +
          ((C129 * C70 + C58 * C132) * C67 + (C129 * C74 + C58 * C136) * C57) *
              C59 * C5088 * C5072 * C64 -
          ((C129 * C75 + C58 * C137) * C57 + (C129 * C71 + C58 * C133) * C67) *
              C59 * C5088 * C5072 * C65)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C5088 * C306 -
           ((C129 * C315 + C58 * C391) * C57 +
            (C129 * C311 + C58 * C387) * C67) *
               C59 * C5088 * C307 +
           ((C129 * C312 + C58 * C388) * C67 +
            (C129 * C316 + C58 * C392) * C57) *
               C59 * C5088 * C308) *
              C309 +
          (((C129 * C313 + C58 * C389) * C67 +
            (C129 * C317 + C58 * C393) * C57) *
               C59 * C5088 * C307 -
           ((C129 * C73 + C58 * C135) * C57 + (C129 * C69 + C58 * C131) * C67) *
               C59 * C5088 * C306 -
           ((C129 * C318 + C58 * C394) * C57 +
            (C129 * C314 + C58 * C390) * C67) *
               C59 * C5088 * C308) *
              C5059)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
              C58 * C5088 * C5072 * C62 -
          ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
              C58 * C5088 * C5072 * C63 +
          ((C67 * C70 + C57 * C74) * C102 + (C67 * C105 + C57 * C158) * C59) *
              C58 * C5088 * C5072 * C64 -
          ((C67 * C106 + C57 * C159) * C59 + (C67 * C71 + C57 * C75) * C102) *
              C58 * C5088 * C5072 * C65)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C5088 * C306 -
           ((C67 * C353 + C57 * C421) * C59 +
            (C67 * C311 + C57 * C315) * C102) *
               C58 * C5088 * C307 +
           ((C67 * C312 + C57 * C316) * C102 +
            (C67 * C354 + C57 * C422) * C59) *
               C58 * C5088 * C308) *
              C309 +
          (((C67 * C313 + C57 * C317) * C102 +
            (C67 * C355 + C57 * C423) * C59) *
               C58 * C5088 * C307 -
           ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
               C58 * C5088 * C306 -
           ((C67 * C356 + C57 * C424) * C59 +
            (C67 * C314 + C57 * C318) * C102) *
               C58 * C5088 * C308) *
              C5059)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5088 * C5072 *
              C62 -
          (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C5088 * C5072 *
              C63 +
          (C178 * C70 + C186 + C186 + C59 * C181) * C57 * C58 * C5088 * C5072 *
              C64 -
          (C178 * C71 + C187 + C187 + C59 * C182) * C57 * C58 * C5088 * C5072 *
              C65)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5088 * C306 -
           (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C5088 * C307 +
           (C178 * C312 + C457 + C457 + C59 * C452) * C57 * C58 * C5088 *
               C308) *
              C309 +
          ((C178 * C313 + C458 + C458 + C59 * C453) * C57 * C58 * C5088 * C307 -
           (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C5088 * C306 -
           (C178 * C314 + C459 + C459 + C59 * C454) * C57 * C58 * C5088 *
               C308) *
              C5059)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C129 * C68 + C58 * C130) * C102 +
                    (C129 * C103 + C58 * C205) * C59) *
                       C57 * C5088 * C5072 * C62 -
                   ((C129 * C104 + C58 * C206) * C59 +
                    (C129 * C69 + C58 * C131) * C102) *
                       C57 * C5088 * C5072 * C63 +
                   ((C129 * C70 + C58 * C132) * C102 +
                    (C129 * C105 + C58 * C207) * C59) *
                       C57 * C5088 * C5072 * C64 -
                   ((C129 * C106 + C58 * C208) * C59 +
                    (C129 * C71 + C58 * C133) * C102) *
                       C57 * C5088 * C5072 * C65)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C129 * C68 + C58 * C130) * C102 +
                     (C129 * C103 + C58 * C205) * C59) *
                        C57 * C5088 * C306 -
                    ((C129 * C353 + C58 * C485) * C59 +
                     (C129 * C311 + C58 * C387) * C102) *
                        C57 * C5088 * C307 +
                    ((C129 * C312 + C58 * C388) * C102 +
                     (C129 * C354 + C58 * C486) * C59) *
                        C57 * C5088 * C308) *
                       C309 +
                   (((C129 * C313 + C58 * C389) * C102 +
                     (C129 * C355 + C58 * C487) * C59) *
                        C57 * C5088 * C307 -
                    ((C129 * C104 + C58 * C206) * C59 +
                     (C129 * C69 + C58 * C131) * C102) *
                        C57 * C5088 * C306 -
                    ((C129 * C356 + C58 * C488) * C59 +
                     (C129 * C314 + C58 * C390) * C102) *
                        C57 * C5088 * C308) *
                       C5059)) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
              C59 * C5088 * C5072 * C62 -
          ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
              C59 * C5088 * C5072 * C63 +
          ((C67 * C70 + C57 * C74) * C129 + (C67 * C132 + C57 * C229) * C58) *
              C59 * C5088 * C5072 * C64 -
          ((C67 * C133 + C57 * C230) * C58 + (C67 * C71 + C57 * C75) * C129) *
              C59 * C5088 * C5072 * C65)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C5088 * C306 -
           ((C67 * C387 + C57 * C515) * C58 +
            (C67 * C311 + C57 * C315) * C129) *
               C59 * C5088 * C307 +
           ((C67 * C312 + C57 * C316) * C129 +
            (C67 * C388 + C57 * C516) * C58) *
               C59 * C5088 * C308) *
              C309 +
          (((C67 * C313 + C57 * C317) * C129 +
            (C67 * C389 + C57 * C517) * C58) *
               C59 * C5088 * C307 -
           ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
               C59 * C5088 * C306 -
           ((C67 * C390 + C57 * C518) * C58 +
            (C67 * C314 + C57 * C318) * C129) *
               C59 * C5088 * C308) *
              C5059)) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C102 * C68 + C59 * C103) * C129 +
                    (C102 * C130 + C59 * C249) * C58) *
                       C57 * C5088 * C5072 * C62 -
                   ((C102 * C131 + C59 * C250) * C58 +
                    (C102 * C69 + C59 * C104) * C129) *
                       C57 * C5088 * C5072 * C63 +
                   ((C102 * C70 + C59 * C105) * C129 +
                    (C102 * C132 + C59 * C251) * C58) *
                       C57 * C5088 * C5072 * C64 -
                   ((C102 * C133 + C59 * C252) * C58 +
                    (C102 * C71 + C59 * C106) * C129) *
                       C57 * C5088 * C5072 * C65)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C102 * C68 + C59 * C103) * C129 +
                     (C102 * C130 + C59 * C249) * C58) *
                        C57 * C5088 * C306 -
                    ((C102 * C387 + C59 * C545) * C58 +
                     (C102 * C311 + C59 * C353) * C129) *
                        C57 * C5088 * C307 +
                    ((C102 * C312 + C59 * C354) * C129 +
                     (C102 * C388 + C59 * C546) * C58) *
                        C57 * C5088 * C308) *
                       C309 +
                   (((C102 * C313 + C59 * C355) * C129 +
                     (C102 * C389 + C59 * C547) * C58) *
                        C57 * C5088 * C307 -
                    ((C102 * C131 + C59 * C250) * C58 +
                     (C102 * C69 + C59 * C104) * C129) *
                        C57 * C5088 * C306 -
                    ((C102 * C390 + C59 * C548) * C58 +
                     (C102 * C314 + C59 * C356) * C129) *
                        C57 * C5088 * C308) *
                       C5059)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5088 * C5072 *
              C62 -
          (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C5088 * C5072 *
              C63 +
          (C271 * C70 + C279 + C279 + C58 * C274) * C59 * C57 * C5088 * C5072 *
              C64 -
          (C271 * C71 + C280 + C280 + C58 * C275) * C59 * C57 * C5088 * C5072 *
              C65)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5088 * C306 -
           (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C5088 * C307 +
           (C271 * C312 + C581 + C581 + C58 * C576) * C59 * C57 * C5088 *
               C308) *
              C309 +
          ((C271 * C313 + C582 + C582 + C58 * C577) * C59 * C57 * C5088 * C307 -
           (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C5088 * C306 -
           (C271 * C314 + C583 + C583 + C58 * C578) * C59 * C57 * C5088 *
               C308) *
              C5059)) /
            (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5088 * C5195 -
           (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C5088 * C5196 +
           (C66 * C312 + C325 + C325 + C57 * C320) * C58 * C59 * C5088 *
               C2429) *
              C5166 +
          ((C66 * C313 + C326 + C326 + C57 * C321) * C58 * C59 * C5088 * C5196 -
           (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C5088 * C5195 -
           (C66 * C314 + C327 + C327 + C57 * C322) * C58 * C59 * C5088 *
               C2429) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C5088 * C5195 -
           ((C102 * C315 + C59 * C357) * C57 +
            (C102 * C311 + C59 * C353) * C67) *
               C58 * C5088 * C5196 +
           ((C102 * C312 + C59 * C354) * C67 +
            (C102 * C316 + C59 * C358) * C57) *
               C58 * C5088 * C2429) *
              C5166 +
          (((C102 * C313 + C59 * C355) * C67 +
            (C102 * C317 + C59 * C359) * C57) *
               C58 * C5088 * C5196 -
           ((C102 * C73 + C59 * C108) * C57 + (C102 * C69 + C59 * C104) * C67) *
               C58 * C5088 * C5195 -
           ((C102 * C318 + C59 * C360) * C57 +
            (C102 * C314 + C59 * C356) * C67) *
               C58 * C5088 * C2429) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C5088 * C5195 -
           ((C129 * C315 + C58 * C391) * C57 +
            (C129 * C311 + C58 * C387) * C67) *
               C59 * C5088 * C5196 +
           ((C129 * C312 + C58 * C388) * C67 +
            (C129 * C316 + C58 * C392) * C57) *
               C59 * C5088 * C2429) *
              C5166 +
          (((C129 * C313 + C58 * C389) * C67 +
            (C129 * C317 + C58 * C393) * C57) *
               C59 * C5088 * C5196 -
           ((C129 * C73 + C58 * C135) * C57 + (C129 * C69 + C58 * C131) * C67) *
               C59 * C5088 * C5195 -
           ((C129 * C318 + C58 * C394) * C57 +
            (C129 * C314 + C58 * C390) * C67) *
               C59 * C5088 * C2429) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C5088 * C5195 -
           ((C67 * C353 + C57 * C421) * C59 +
            (C67 * C311 + C57 * C315) * C102) *
               C58 * C5088 * C5196 +
           ((C67 * C312 + C57 * C316) * C102 +
            (C67 * C354 + C57 * C422) * C59) *
               C58 * C5088 * C2429) *
              C5166 +
          (((C67 * C313 + C57 * C317) * C102 +
            (C67 * C355 + C57 * C423) * C59) *
               C58 * C5088 * C5196 -
           ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
               C58 * C5088 * C5195 -
           ((C67 * C356 + C57 * C424) * C59 +
            (C67 * C314 + C57 * C318) * C102) *
               C58 * C5088 * C2429) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5088 * C5195 -
           (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C5088 *
               C5196 +
           (C178 * C312 + C457 + C457 + C59 * C452) * C57 * C58 * C5088 *
               C2429) *
              C5166 +
          ((C178 * C313 + C458 + C458 + C59 * C453) * C57 * C58 * C5088 *
               C5196 -
           (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C5088 * C5195 -
           (C178 * C314 + C459 + C459 + C59 * C454) * C57 * C58 * C5088 *
               C2429) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C129 * C68 + C58 * C130) * C102 +
                     (C129 * C103 + C58 * C205) * C59) *
                        C57 * C5088 * C5195 -
                    ((C129 * C353 + C58 * C485) * C59 +
                     (C129 * C311 + C58 * C387) * C102) *
                        C57 * C5088 * C5196 +
                    ((C129 * C312 + C58 * C388) * C102 +
                     (C129 * C354 + C58 * C486) * C59) *
                        C57 * C5088 * C2429) *
                       C5166 +
                   (((C129 * C313 + C58 * C389) * C102 +
                     (C129 * C355 + C58 * C487) * C59) *
                        C57 * C5088 * C5196 -
                    ((C129 * C104 + C58 * C206) * C59 +
                     (C129 * C69 + C58 * C131) * C102) *
                        C57 * C5088 * C5195 -
                    ((C129 * C356 + C58 * C488) * C59 +
                     (C129 * C314 + C58 * C390) * C102) *
                        C57 * C5088 * C2429) *
                       C5059)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C5088 * C5195 -
           ((C67 * C387 + C57 * C515) * C58 +
            (C67 * C311 + C57 * C315) * C129) *
               C59 * C5088 * C5196 +
           ((C67 * C312 + C57 * C316) * C129 +
            (C67 * C388 + C57 * C516) * C58) *
               C59 * C5088 * C2429) *
              C5166 +
          (((C67 * C313 + C57 * C317) * C129 +
            (C67 * C389 + C57 * C517) * C58) *
               C59 * C5088 * C5196 -
           ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
               C59 * C5088 * C5195 -
           ((C67 * C390 + C57 * C518) * C58 +
            (C67 * C314 + C57 * C318) * C129) *
               C59 * C5088 * C2429) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C102 * C68 + C59 * C103) * C129 +
                     (C102 * C130 + C59 * C249) * C58) *
                        C57 * C5088 * C5195 -
                    ((C102 * C387 + C59 * C545) * C58 +
                     (C102 * C311 + C59 * C353) * C129) *
                        C57 * C5088 * C5196 +
                    ((C102 * C312 + C59 * C354) * C129 +
                     (C102 * C388 + C59 * C546) * C58) *
                        C57 * C5088 * C2429) *
                       C5166 +
                   (((C102 * C313 + C59 * C355) * C129 +
                     (C102 * C389 + C59 * C547) * C58) *
                        C57 * C5088 * C5196 -
                    ((C102 * C131 + C59 * C250) * C58 +
                     (C102 * C69 + C59 * C104) * C129) *
                        C57 * C5088 * C5195 -
                    ((C102 * C390 + C59 * C548) * C58 +
                     (C102 * C314 + C59 * C356) * C129) *
                        C57 * C5088 * C2429) *
                       C5059)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5088 * C5195 -
           (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C5088 *
               C5196 +
           (C271 * C312 + C581 + C581 + C58 * C576) * C59 * C57 * C5088 *
               C2429) *
              C5166 +
          ((C271 * C313 + C582 + C582 + C58 * C577) * C59 * C57 * C5088 *
               C5196 -
           (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C5088 * C5195 -
           (C271 * C314 + C583 + C583 + C58 * C578) * C59 * C57 * C5088 *
               C2429) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5175 -
           (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C5152) *
              C5195 +
          ((C66 * C1425 + C1432 + C1432 + C57 * C1429) * C58 * C59 * C5152 -
           (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C5175) *
              C5196 +
          ((C66 * C312 + C325 + C325 + C57 * C320) * C58 * C59 * C5175 -
           (C66 * C2972 + C2976 + C2976 + C57 * C2974) * C58 * C59 * C5152) *
              C2429) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C5175 -
           ((C102 * C616 + C59 * C658) * C57 +
            (C102 * C612 + C59 * C654) * C67) *
               C58 * C5152) *
              C5195 +
          (((C102 * C1425 + C59 * C1467) * C67 +
            (C102 * C1427 + C59 * C1469) * C57) *
               C58 * C5152 -
           ((C102 * C315 + C59 * C357) * C57 +
            (C102 * C311 + C59 * C353) * C67) *
               C58 * C5175) *
              C5196 +
          (((C102 * C312 + C59 * C354) * C67 +
            (C102 * C316 + C59 * C358) * C57) *
               C58 * C5175 -
           ((C102 * C2973 + C59 * C3003) * C57 +
            (C102 * C2972 + C59 * C3002) * C67) *
               C58 * C5152) *
              C2429) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C5175 -
           ((C129 * C616 + C58 * C692) * C57 +
            (C129 * C612 + C58 * C688) * C67) *
               C59 * C5152) *
              C5195 +
          (((C129 * C1425 + C58 * C1505) * C67 +
            (C129 * C1427 + C58 * C1507) * C57) *
               C59 * C5152 -
           ((C129 * C315 + C58 * C391) * C57 +
            (C129 * C311 + C58 * C387) * C67) *
               C59 * C5175) *
              C5196 +
          (((C129 * C312 + C58 * C388) * C67 +
            (C129 * C316 + C58 * C392) * C57) *
               C59 * C5175 -
           ((C129 * C2973 + C58 * C3031) * C57 +
            (C129 * C2972 + C58 * C3030) * C67) *
               C59 * C5152) *
              C2429) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C5175 -
           ((C67 * C654 + C57 * C722) * C59 +
            (C67 * C612 + C57 * C616) * C102) *
               C58 * C5152) *
              C5195 +
          (((C67 * C1425 + C57 * C1427) * C102 +
            (C67 * C1467 + C57 * C1543) * C59) *
               C58 * C5152 -
           ((C67 * C353 + C57 * C421) * C59 +
            (C67 * C311 + C57 * C315) * C102) *
               C58 * C5175) *
              C5196 +
          (((C67 * C312 + C57 * C316) * C102 +
            (C67 * C354 + C57 * C422) * C59) *
               C58 * C5175 -
           ((C67 * C3002 + C57 * C3058) * C59 +
            (C67 * C2972 + C57 * C2973) * C102) *
               C58 * C5152) *
              C2429) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5175 -
           (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C5152) *
              C5195 +
          ((C178 * C1425 + C1582 + C1582 + C59 * C1579) * C57 * C58 * C5152 -
           (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C5175) *
              C5196 +
          ((C178 * C312 + C457 + C457 + C59 * C452) * C57 * C58 * C5175 -
           (C178 * C2972 + C3087 + C3087 + C59 * C3085) * C57 * C58 * C5152) *
              C2429) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C129 * C68 + C58 * C130) * C102 +
                     (C129 * C103 + C58 * C205) * C59) *
                        C57 * C5175 -
                    ((C129 * C654 + C58 * C786) * C59 +
                     (C129 * C612 + C58 * C688) * C102) *
                        C57 * C5152) *
                       C5195 +
                   (((C129 * C1425 + C58 * C1505) * C102 +
                     (C129 * C1467 + C58 * C1617) * C59) *
                        C57 * C5152 -
                    ((C129 * C353 + C58 * C485) * C59 +
                     (C129 * C311 + C58 * C387) * C102) *
                        C57 * C5175) *
                       C5196 +
                   (((C129 * C312 + C58 * C388) * C102 +
                     (C129 * C354 + C58 * C486) * C59) *
                        C57 * C5175 -
                    ((C129 * C3002 + C58 * C3113) * C59 +
                     (C129 * C2972 + C58 * C3030) * C102) *
                        C57 * C5152) *
                       C2429) *
                  C5053) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C5175 -
           ((C67 * C688 + C57 * C816) * C58 +
            (C67 * C612 + C57 * C616) * C129) *
               C59 * C5152) *
              C5195 +
          (((C67 * C1425 + C57 * C1427) * C129 +
            (C67 * C1505 + C57 * C1653) * C58) *
               C59 * C5152 -
           ((C67 * C387 + C57 * C515) * C58 +
            (C67 * C311 + C57 * C315) * C129) *
               C59 * C5175) *
              C5196 +
          (((C67 * C312 + C57 * C316) * C129 +
            (C67 * C388 + C57 * C516) * C58) *
               C59 * C5175 -
           ((C67 * C3030 + C57 * C3140) * C58 +
            (C67 * C2972 + C57 * C2973) * C129) *
               C59 * C5152) *
              C2429) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C102 * C68 + C59 * C103) * C129 +
                     (C102 * C130 + C59 * C249) * C58) *
                        C57 * C5175 -
                    ((C102 * C688 + C59 * C846) * C58 +
                     (C102 * C612 + C59 * C654) * C129) *
                        C57 * C5152) *
                       C5195 +
                   (((C102 * C1425 + C59 * C1467) * C129 +
                     (C102 * C1505 + C59 * C1689) * C58) *
                        C57 * C5152 -
                    ((C102 * C387 + C59 * C545) * C58 +
                     (C102 * C311 + C59 * C353) * C129) *
                        C57 * C5175) *
                       C5196 +
                   (((C102 * C312 + C59 * C354) * C129 +
                     (C102 * C388 + C59 * C546) * C58) *
                        C57 * C5175 -
                    ((C102 * C3030 + C59 * C3167) * C58 +
                     (C102 * C2972 + C59 * C3002) * C129) *
                        C57 * C5152) *
                       C2429) *
                  C5053) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5175 -
           (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C5152) *
              C5195 +
          ((C271 * C1425 + C1728 + C1728 + C58 * C1725) * C59 * C57 * C5152 -
           (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C5175) *
              C5196 +
          ((C271 * C312 + C581 + C581 + C58 * C576) * C59 * C57 * C5175 -
           (C271 * C2972 + C3196 + C3196 + C58 * C3194) * C59 * C57 * C5152) *
              C2429) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         ((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5088 * C1986 -
          (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C5088 * C1987 +
          (C66 * C312 + C325 + C325 + C57 * C320) * C58 * C59 * C5088 * C1988 -
          (C66 * C1991 + C1995 + C1995 + C57 * C1993) * C58 * C59 * C5088 *
              C1989) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5088 * C1755 -
           (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C5088 *
               C5124) *
              C1757 +
          ((C66 * C313 + C326 + C326 + C57 * C321) * C58 * C59 * C5088 * C5124 -
           (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C5088 * C1755) *
              C1758 +
          ((C66 * C70 + C83 + C83 + C57 * C78) * C58 * C59 * C5088 * C1755 -
           (C66 * C915 + C919 + C919 + C57 * C917) * C58 * C59 * C5088 *
               C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C609 -
           (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C610 +
           (C66 * C613 + C626 + C626 + C57 * C621) * C58 * C59 * C611) *
              C1755 +
          ((C66 * C1425 + C1432 + C1432 + C57 * C1429) * C58 * C59 * C610 -
           (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C609 -
           (C66 * C2177 + C2181 + C2181 + C57 * C2179) * C58 * C59 * C611) *
              C5124) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
              C58 * C5088 * C1986 -
          ((C102 * C315 + C59 * C357) * C57 +
           (C102 * C311 + C59 * C353) * C67) *
              C58 * C5088 * C1987 +
          ((C102 * C312 + C59 * C354) * C67 +
           (C102 * C316 + C59 * C358) * C57) *
              C58 * C5088 * C1988 -
          ((C102 * C1992 + C59 * C2014) * C57 +
           (C102 * C1991 + C59 * C2013) * C67) *
              C58 * C5088 * C1989) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C5088 * C1755 -
           ((C102 * C315 + C59 * C357) * C57 +
            (C102 * C311 + C59 * C353) * C67) *
               C58 * C5088 * C5124) *
              C1757 +
          (((C102 * C313 + C59 * C355) * C67 +
            (C102 * C317 + C59 * C359) * C57) *
               C58 * C5088 * C5124 -
           ((C102 * C73 + C59 * C108) * C57 + (C102 * C69 + C59 * C104) * C67) *
               C58 * C5088 * C1755) *
              C1758 +
          (((C102 * C70 + C59 * C105) * C67 + (C102 * C74 + C59 * C109) * C57) *
               C58 * C5088 * C1755 -
           ((C102 * C916 + C59 * C946) * C57 +
            (C102 * C915 + C59 * C945) * C67) *
               C58 * C5088 * C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C609 -
           ((C102 * C616 + C59 * C658) * C57 +
            (C102 * C612 + C59 * C654) * C67) *
               C58 * C610 +
           ((C102 * C613 + C59 * C655) * C67 +
            (C102 * C617 + C59 * C659) * C57) *
               C58 * C611) *
              C1755 +
          (((C102 * C1425 + C59 * C1467) * C67 +
            (C102 * C1427 + C59 * C1469) * C57) *
               C58 * C610 -
           ((C102 * C315 + C59 * C357) * C57 +
            (C102 * C311 + C59 * C353) * C67) *
               C58 * C609 -
           ((C102 * C2178 + C59 * C2208) * C57 +
            (C102 * C2177 + C59 * C2207) * C67) *
               C58 * C611) *
              C5124) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::pow(Pi, 2.5) *
         (((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
              C59 * C5088 * C1986 -
          ((C129 * C315 + C58 * C391) * C57 +
           (C129 * C311 + C58 * C387) * C67) *
              C59 * C5088 * C1987 +
          ((C129 * C312 + C58 * C388) * C67 +
           (C129 * C316 + C58 * C392) * C57) *
              C59 * C5088 * C1988 -
          ((C129 * C1992 + C58 * C2034) * C57 +
           (C129 * C1991 + C58 * C2033) * C67) *
              C59 * C5088 * C1989) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C5088 * C1755 -
           ((C129 * C315 + C58 * C391) * C57 +
            (C129 * C311 + C58 * C387) * C67) *
               C59 * C5088 * C5124) *
              C1757 +
          (((C129 * C313 + C58 * C389) * C67 +
            (C129 * C317 + C58 * C393) * C57) *
               C59 * C5088 * C5124 -
           ((C129 * C73 + C58 * C135) * C57 + (C129 * C69 + C58 * C131) * C67) *
               C59 * C5088 * C1755) *
              C1758 +
          (((C129 * C70 + C58 * C132) * C67 + (C129 * C74 + C58 * C136) * C57) *
               C59 * C5088 * C1755 -
           ((C129 * C916 + C58 * C974) * C57 +
            (C129 * C915 + C58 * C973) * C67) *
               C59 * C5088 * C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C609 -
           ((C129 * C616 + C58 * C692) * C57 +
            (C129 * C612 + C58 * C688) * C67) *
               C59 * C610 +
           ((C129 * C613 + C58 * C689) * C67 +
            (C129 * C617 + C58 * C693) * C57) *
               C59 * C611) *
              C1755 +
          (((C129 * C1425 + C58 * C1505) * C67 +
            (C129 * C1427 + C58 * C1507) * C57) *
               C59 * C610 -
           ((C129 * C315 + C58 * C391) * C57 +
            (C129 * C311 + C58 * C387) * C67) *
               C59 * C609 -
           ((C129 * C2178 + C58 * C2236) * C57 +
            (C129 * C2177 + C58 * C2235) * C67) *
               C59 * C611) *
              C5124) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
              C58 * C5088 * C1986 -
          ((C67 * C353 + C57 * C421) * C59 + (C67 * C311 + C57 * C315) * C102) *
              C58 * C5088 * C1987 +
          ((C67 * C312 + C57 * C316) * C102 + (C67 * C354 + C57 * C422) * C59) *
              C58 * C5088 * C1988 -
          ((C67 * C2013 + C57 * C2053) * C59 +
           (C67 * C1991 + C57 * C1992) * C102) *
              C58 * C5088 * C1989) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C5088 * C1755 -
           ((C67 * C353 + C57 * C421) * C59 +
            (C67 * C311 + C57 * C315) * C102) *
               C58 * C5088 * C5124) *
              C1757 +
          (((C67 * C313 + C57 * C317) * C102 +
            (C67 * C355 + C57 * C423) * C59) *
               C58 * C5088 * C5124 -
           ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
               C58 * C5088 * C1755) *
              C1758 +
          (((C67 * C70 + C57 * C74) * C102 + (C67 * C105 + C57 * C158) * C59) *
               C58 * C5088 * C1755 -
           ((C67 * C945 + C57 * C1001) * C59 +
            (C67 * C915 + C57 * C916) * C102) *
               C58 * C5088 * C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C609 -
           ((C67 * C654 + C57 * C722) * C59 +
            (C67 * C612 + C57 * C616) * C102) *
               C58 * C610 +
           ((C67 * C613 + C57 * C617) * C102 +
            (C67 * C655 + C57 * C723) * C59) *
               C58 * C611) *
              C1755 +
          (((C67 * C1425 + C57 * C1427) * C102 +
            (C67 * C1467 + C57 * C1543) * C59) *
               C58 * C610 -
           ((C67 * C353 + C57 * C421) * C59 +
            (C67 * C311 + C57 * C315) * C102) *
               C58 * C609 -
           ((C67 * C2207 + C57 * C2263) * C59 +
            (C67 * C2177 + C57 * C2178) * C102) *
               C58 * C611) *
              C5124) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5088 * C1986 -
          (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C5088 * C1987 +
          (C178 * C312 + C457 + C457 + C59 * C452) * C57 * C58 * C5088 * C1988 -
          (C178 * C1991 + C2074 + C2074 + C59 * C2072) * C57 * C58 * C5088 *
              C1989) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5088 * C1755 -
           (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C5088 *
               C5124) *
              C1757 +
          ((C178 * C313 + C458 + C458 + C59 * C453) * C57 * C58 * C5088 *
               C5124 -
           (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C5088 *
               C1755) *
              C1758 +
          ((C178 * C70 + C186 + C186 + C59 * C181) * C57 * C58 * C5088 * C1755 -
           (C178 * C915 + C1030 + C1030 + C59 * C1028) * C57 * C58 * C5088 *
               C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C609 -
           (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C610 +
           (C178 * C613 + C758 + C758 + C59 * C753) * C57 * C58 * C611) *
              C1755 +
          ((C178 * C1425 + C1582 + C1582 + C59 * C1579) * C57 * C58 * C610 -
           (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C609 -
           (C178 * C2177 + C2292 + C2292 + C59 * C2290) * C57 * C58 * C611) *
              C5124) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] += (-std::pow(Pi, 2.5) *
                  (((C129 * C68 + C58 * C130) * C102 +
                    (C129 * C103 + C58 * C205) * C59) *
                       C57 * C5088 * C1986 -
                   ((C129 * C353 + C58 * C485) * C59 +
                    (C129 * C311 + C58 * C387) * C102) *
                       C57 * C5088 * C1987 +
                   ((C129 * C312 + C58 * C388) * C102 +
                    (C129 * C354 + C58 * C486) * C59) *
                       C57 * C5088 * C1988 -
                   ((C129 * C2013 + C58 * C2092) * C59 +
                    (C129 * C1991 + C58 * C2033) * C102) *
                       C57 * C5088 * C1989) *
                  C5053) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * ((((C129 * C68 + C58 * C130) * C102 +
                                         (C129 * C103 + C58 * C205) * C59) *
                                            C57 * C5088 * C1755 -
                                        ((C129 * C353 + C58 * C485) * C59 +
                                         (C129 * C311 + C58 * C387) * C102) *
                                            C57 * C5088 * C5124) *
                                           C1757 +
                                       (((C129 * C313 + C58 * C389) * C102 +
                                         (C129 * C355 + C58 * C487) * C59) *
                                            C57 * C5088 * C5124 -
                                        ((C129 * C104 + C58 * C206) * C59 +
                                         (C129 * C69 + C58 * C131) * C102) *
                                            C57 * C5088 * C1755) *
                                           C1758 +
                                       (((C129 * C70 + C58 * C132) * C102 +
                                         (C129 * C105 + C58 * C207) * C59) *
                                            C57 * C5088 * C1755 -
                                        ((C129 * C945 + C58 * C1056) * C59 +
                                         (C129 * C915 + C58 * C973) * C102) *
                                            C57 * C5088 * C5124) *
                                           C1759)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C129 * C68 + C58 * C130) * C102 +
                     (C129 * C103 + C58 * C205) * C59) *
                        C57 * C609 -
                    ((C129 * C654 + C58 * C786) * C59 +
                     (C129 * C612 + C58 * C688) * C102) *
                        C57 * C610 +
                    ((C129 * C613 + C58 * C689) * C102 +
                     (C129 * C655 + C58 * C787) * C59) *
                        C57 * C611) *
                       C1755 +
                   (((C129 * C1425 + C58 * C1505) * C102 +
                     (C129 * C1467 + C58 * C1617) * C59) *
                        C57 * C610 -
                    ((C129 * C353 + C58 * C485) * C59 +
                     (C129 * C311 + C58 * C387) * C102) *
                        C57 * C609 -
                    ((C129 * C2207 + C58 * C2318) * C59 +
                     (C129 * C2177 + C58 * C2235) * C102) *
                        C57 * C611) *
                       C5124) *
                  C5053) /
                     (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
              C59 * C5088 * C1986 -
          ((C67 * C387 + C57 * C515) * C58 + (C67 * C311 + C57 * C315) * C129) *
              C59 * C5088 * C1987 +
          ((C67 * C312 + C57 * C316) * C129 + (C67 * C388 + C57 * C516) * C58) *
              C59 * C5088 * C1988 -
          ((C67 * C2033 + C57 * C2111) * C58 +
           (C67 * C1991 + C57 * C1992) * C129) *
              C59 * C5088 * C1989) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C5088 * C1755 -
           ((C67 * C387 + C57 * C515) * C58 +
            (C67 * C311 + C57 * C315) * C129) *
               C59 * C5088 * C5124) *
              C1757 +
          (((C67 * C313 + C57 * C317) * C129 +
            (C67 * C389 + C57 * C517) * C58) *
               C59 * C5088 * C5124 -
           ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
               C59 * C5088 * C1755) *
              C1758 +
          (((C67 * C70 + C57 * C74) * C129 + (C67 * C132 + C57 * C229) * C58) *
               C59 * C5088 * C1755 -
           ((C67 * C973 + C57 * C1083) * C58 +
            (C67 * C915 + C57 * C916) * C129) *
               C59 * C5088 * C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C609 -
           ((C67 * C688 + C57 * C816) * C58 +
            (C67 * C612 + C57 * C616) * C129) *
               C59 * C610 +
           ((C67 * C613 + C57 * C617) * C129 +
            (C67 * C689 + C57 * C817) * C58) *
               C59 * C611) *
              C1755 +
          (((C67 * C1425 + C57 * C1427) * C129 +
            (C67 * C1505 + C57 * C1653) * C58) *
               C59 * C610 -
           ((C67 * C387 + C57 * C515) * C58 +
            (C67 * C311 + C57 * C315) * C129) *
               C59 * C609 -
           ((C67 * C2235 + C57 * C2345) * C58 +
            (C67 * C2177 + C57 * C2178) * C129) *
               C59 * C611) *
              C5124) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] += (-std::pow(Pi, 2.5) *
                  (((C102 * C68 + C59 * C103) * C129 +
                    (C102 * C130 + C59 * C249) * C58) *
                       C57 * C5088 * C1986 -
                   ((C102 * C387 + C59 * C545) * C58 +
                    (C102 * C311 + C59 * C353) * C129) *
                       C57 * C5088 * C1987 +
                   ((C102 * C312 + C59 * C354) * C129 +
                    (C102 * C388 + C59 * C546) * C58) *
                       C57 * C5088 * C1988 -
                   ((C102 * C2033 + C59 * C2130) * C58 +
                    (C102 * C1991 + C59 * C2013) * C129) *
                       C57 * C5088 * C1989) *
                  C5053) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * ((((C102 * C68 + C59 * C103) * C129 +
                                         (C102 * C130 + C59 * C249) * C58) *
                                            C57 * C5088 * C1755 -
                                        ((C102 * C387 + C59 * C545) * C58 +
                                         (C102 * C311 + C59 * C353) * C129) *
                                            C57 * C5088 * C5124) *
                                           C1757 +
                                       (((C102 * C313 + C59 * C355) * C129 +
                                         (C102 * C389 + C59 * C547) * C58) *
                                            C57 * C5088 * C5124 -
                                        ((C102 * C131 + C59 * C250) * C58 +
                                         (C102 * C69 + C59 * C104) * C129) *
                                            C57 * C5088 * C1755) *
                                           C1758 +
                                       (((C102 * C70 + C59 * C105) * C129 +
                                         (C102 * C132 + C59 * C251) * C58) *
                                            C57 * C5088 * C1755 -
                                        ((C102 * C973 + C59 * C1110) * C58 +
                                         (C102 * C915 + C59 * C945) * C129) *
                                            C57 * C5088 * C5124) *
                                           C1759)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C102 * C68 + C59 * C103) * C129 +
                     (C102 * C130 + C59 * C249) * C58) *
                        C57 * C609 -
                    ((C102 * C688 + C59 * C846) * C58 +
                     (C102 * C612 + C59 * C654) * C129) *
                        C57 * C610 +
                    ((C102 * C613 + C59 * C655) * C129 +
                     (C102 * C689 + C59 * C847) * C58) *
                        C57 * C611) *
                       C1755 +
                   (((C102 * C1425 + C59 * C1467) * C129 +
                     (C102 * C1505 + C59 * C1689) * C58) *
                        C57 * C610 -
                    ((C102 * C387 + C59 * C545) * C58 +
                     (C102 * C311 + C59 * C353) * C129) *
                        C57 * C609 -
                    ((C102 * C2235 + C59 * C2372) * C58 +
                     (C102 * C2177 + C59 * C2207) * C129) *
                        C57 * C611) *
                       C5124) *
                  C5053) /
                     (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::pow(Pi, 2.5) *
         ((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5088 * C1986 -
          (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C5088 * C1987 +
          (C271 * C312 + C581 + C581 + C58 * C576) * C59 * C57 * C5088 * C1988 -
          (C271 * C1991 + C2151 + C2151 + C58 * C2149) * C59 * C57 * C5088 *
              C1989) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5088 * C1755 -
           (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C5088 *
               C5124) *
              C1757 +
          ((C271 * C313 + C582 + C582 + C58 * C577) * C59 * C57 * C5088 *
               C5124 -
           (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C5088 *
               C1755) *
              C1758 +
          ((C271 * C70 + C279 + C279 + C58 * C274) * C59 * C57 * C5088 * C1755 -
           (C271 * C915 + C1139 + C1139 + C58 * C1137) * C59 * C57 * C5088 *
               C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C609 -
           (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C610 +
           (C271 * C613 + C882 + C882 + C58 * C877) * C59 * C57 * C611) *
              C1755 +
          ((C271 * C1425 + C1728 + C1728 + C58 * C1725) * C59 * C57 * C610 -
           (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C609 -
           (C271 * C2177 + C2401 + C2401 + C58 * C2399) * C59 * C57 * C611) *
              C5124) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5175 -
            (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C5152) *
               C1755 +
           ((C66 * C1425 + C1432 + C1432 + C57 * C1429) * C58 * C59 * C5152 -
            (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C5175) *
               C5124) *
              C5166 +
          (((C66 * C614 + C627 + C627 + C57 * C622) * C58 * C59 * C5152 -
            (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C5175) *
               C1755 +
           ((C66 * C313 + C326 + C326 + C57 * C321) * C58 * C59 * C5175 -
            (C66 * C1426 + C1433 + C1433 + C57 * C1430) * C58 * C59 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C102 * C68 + C59 * C103) * C67 +
                      (C102 * C72 + C59 * C107) * C57) *
                         C58 * C5175 -
                     ((C102 * C616 + C59 * C658) * C57 +
                      (C102 * C612 + C59 * C654) * C67) *
                         C58 * C5152) *
                        C1755 +
                    (((C102 * C1425 + C59 * C1467) * C67 +
                      (C102 * C1427 + C59 * C1469) * C57) *
                         C58 * C5152 -
                     ((C102 * C315 + C59 * C357) * C57 +
                      (C102 * C311 + C59 * C353) * C67) *
                         C58 * C5175) *
                        C5124) *
                       C5166 +
                   ((((C102 * C614 + C59 * C656) * C67 +
                      (C102 * C618 + C59 * C660) * C57) *
                         C58 * C5152 -
                     ((C102 * C73 + C59 * C108) * C57 +
                      (C102 * C69 + C59 * C104) * C67) *
                         C58 * C5175) *
                        C1755 +
                    (((C102 * C313 + C59 * C355) * C67 +
                      (C102 * C317 + C59 * C359) * C57) *
                         C58 * C5175 -
                     ((C102 * C1428 + C59 * C1470) * C57 +
                      (C102 * C1426 + C59 * C1468) * C67) *
                         C58 * C5152) *
                        C5124) *
                       C5059)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C129 * C68 + C58 * C130) * C67 +
                      (C129 * C72 + C58 * C134) * C57) *
                         C59 * C5175 -
                     ((C129 * C616 + C58 * C692) * C57 +
                      (C129 * C612 + C58 * C688) * C67) *
                         C59 * C5152) *
                        C1755 +
                    (((C129 * C1425 + C58 * C1505) * C67 +
                      (C129 * C1427 + C58 * C1507) * C57) *
                         C59 * C5152 -
                     ((C129 * C315 + C58 * C391) * C57 +
                      (C129 * C311 + C58 * C387) * C67) *
                         C59 * C5175) *
                        C5124) *
                       C5166 +
                   ((((C129 * C614 + C58 * C690) * C67 +
                      (C129 * C618 + C58 * C694) * C57) *
                         C59 * C5152 -
                     ((C129 * C73 + C58 * C135) * C57 +
                      (C129 * C69 + C58 * C131) * C67) *
                         C59 * C5175) *
                        C1755 +
                    (((C129 * C313 + C58 * C389) * C67 +
                      (C129 * C317 + C58 * C393) * C57) *
                         C59 * C5175 -
                     ((C129 * C1428 + C58 * C1508) * C57 +
                      (C129 * C1426 + C58 * C1506) * C67) *
                         C59 * C5152) *
                        C5124) *
                       C5059)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
                C58 * C5175 -
            ((C67 * C654 + C57 * C722) * C59 +
             (C67 * C612 + C57 * C616) * C102) *
                C58 * C5152) *
               C1755 +
           (((C67 * C1425 + C57 * C1427) * C102 +
             (C67 * C1467 + C57 * C1543) * C59) *
                C58 * C5152 -
            ((C67 * C353 + C57 * C421) * C59 +
             (C67 * C311 + C57 * C315) * C102) *
                C58 * C5175) *
               C5124) *
              C5166 +
          ((((C67 * C614 + C57 * C618) * C102 +
             (C67 * C656 + C57 * C724) * C59) *
                C58 * C5152 -
            ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
                C58 * C5175) *
               C1755 +
           (((C67 * C313 + C57 * C317) * C102 +
             (C67 * C355 + C57 * C423) * C59) *
                C58 * C5175 -
            ((C67 * C1468 + C57 * C1544) * C59 +
             (C67 * C1426 + C57 * C1428) * C102) *
                C58 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5175 -
            (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C5152) *
               C1755 +
           ((C178 * C1425 + C1582 + C1582 + C59 * C1579) * C57 * C58 * C5152 -
            (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C5175) *
               C5124) *
              C5166 +
          (((C178 * C614 + C759 + C759 + C59 * C754) * C57 * C58 * C5152 -
            (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C5175) *
               C1755 +
           ((C178 * C313 + C458 + C458 + C59 * C453) * C57 * C58 * C5175 -
            (C178 * C1426 + C1583 + C1583 + C59 * C1580) * C57 * C58 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C129 * C68 + C58 * C130) * C102 +
                      (C129 * C103 + C58 * C205) * C59) *
                         C57 * C5175 -
                     ((C129 * C654 + C58 * C786) * C59 +
                      (C129 * C612 + C58 * C688) * C102) *
                         C57 * C5152) *
                        C1755 +
                    (((C129 * C1425 + C58 * C1505) * C102 +
                      (C129 * C1467 + C58 * C1617) * C59) *
                         C57 * C5152 -
                     ((C129 * C353 + C58 * C485) * C59 +
                      (C129 * C311 + C58 * C387) * C102) *
                         C57 * C5175) *
                        C5124) *
                       C5166 +
                   ((((C129 * C614 + C58 * C690) * C102 +
                      (C129 * C656 + C58 * C788) * C59) *
                         C57 * C5152 -
                     ((C129 * C104 + C58 * C206) * C59 +
                      (C129 * C69 + C58 * C131) * C102) *
                         C57 * C5175) *
                        C1755 +
                    (((C129 * C313 + C58 * C389) * C102 +
                      (C129 * C355 + C58 * C487) * C59) *
                         C57 * C5175 -
                     ((C129 * C1468 + C58 * C1618) * C59 +
                      (C129 * C1426 + C58 * C1506) * C102) *
                         C57 * C5152) *
                        C5124) *
                       C5059)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
                C59 * C5175 -
            ((C67 * C688 + C57 * C816) * C58 +
             (C67 * C612 + C57 * C616) * C129) *
                C59 * C5152) *
               C1755 +
           (((C67 * C1425 + C57 * C1427) * C129 +
             (C67 * C1505 + C57 * C1653) * C58) *
                C59 * C5152 -
            ((C67 * C387 + C57 * C515) * C58 +
             (C67 * C311 + C57 * C315) * C129) *
                C59 * C5175) *
               C5124) *
              C5166 +
          ((((C67 * C614 + C57 * C618) * C129 +
             (C67 * C690 + C57 * C818) * C58) *
                C59 * C5152 -
            ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
                C59 * C5175) *
               C1755 +
           (((C67 * C313 + C57 * C317) * C129 +
             (C67 * C389 + C57 * C517) * C58) *
                C59 * C5175 -
            ((C67 * C1506 + C57 * C1654) * C58 +
             (C67 * C1426 + C57 * C1428) * C129) *
                C59 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C102 * C68 + C59 * C103) * C129 +
                      (C102 * C130 + C59 * C249) * C58) *
                         C57 * C5175 -
                     ((C102 * C688 + C59 * C846) * C58 +
                      (C102 * C612 + C59 * C654) * C129) *
                         C57 * C5152) *
                        C1755 +
                    (((C102 * C1425 + C59 * C1467) * C129 +
                      (C102 * C1505 + C59 * C1689) * C58) *
                         C57 * C5152 -
                     ((C102 * C387 + C59 * C545) * C58 +
                      (C102 * C311 + C59 * C353) * C129) *
                         C57 * C5175) *
                        C5124) *
                       C5166 +
                   ((((C102 * C614 + C59 * C656) * C129 +
                      (C102 * C690 + C59 * C848) * C58) *
                         C57 * C5152 -
                     ((C102 * C131 + C59 * C250) * C58 +
                      (C102 * C69 + C59 * C104) * C129) *
                         C57 * C5175) *
                        C1755 +
                    (((C102 * C313 + C59 * C355) * C129 +
                      (C102 * C389 + C59 * C547) * C58) *
                         C57 * C5175 -
                     ((C102 * C1506 + C59 * C1690) * C58 +
                      (C102 * C1426 + C59 * C1468) * C129) *
                         C57 * C5152) *
                        C5124) *
                       C5059)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5175 -
            (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C5152) *
               C1755 +
           ((C271 * C1425 + C1728 + C1728 + C58 * C1725) * C59 * C57 * C5152 -
            (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C5175) *
               C5124) *
              C5166 +
          (((C271 * C614 + C883 + C883 + C58 * C878) * C59 * C57 * C5152 -
            (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C5175) *
               C1755 +
           ((C271 * C313 + C582 + C582 + C58 * C577) * C59 * C57 * C5175 -
            (C271 * C1426 + C1729 + C1729 + C58 * C1726) * C59 * C57 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5088 * C1755 -
           (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C5088 *
               C5124) *
              C1757 +
          ((C66 * C313 + C326 + C326 + C57 * C321) * C58 * C59 * C5088 * C5124 -
           (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C5088 * C1755) *
              C1758 +
          ((C66 * C70 + C83 + C83 + C57 * C78) * C58 * C59 * C5088 * C1755 -
           (C66 * C915 + C919 + C919 + C57 * C917) * C58 * C59 * C5088 *
               C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5088 * C1986 -
          (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C5088 * C1987 +
          (C66 * C312 + C325 + C325 + C57 * C320) * C58 * C59 * C5088 * C1988 -
          (C66 * C1991 + C1995 + C1995 + C57 * C1993) * C58 * C59 * C5088 *
              C1989) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C5088 * C1755 -
           ((C102 * C315 + C59 * C357) * C57 +
            (C102 * C311 + C59 * C353) * C67) *
               C58 * C5088 * C5124) *
              C1757 +
          (((C102 * C313 + C59 * C355) * C67 +
            (C102 * C317 + C59 * C359) * C57) *
               C58 * C5088 * C5124 -
           ((C102 * C73 + C59 * C108) * C57 + (C102 * C69 + C59 * C104) * C67) *
               C58 * C5088 * C1755) *
              C1758 +
          (((C102 * C70 + C59 * C105) * C67 + (C102 * C74 + C59 * C109) * C57) *
               C58 * C5088 * C1755 -
           ((C102 * C916 + C59 * C946) * C57 +
            (C102 * C915 + C59 * C945) * C67) *
               C58 * C5088 * C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
              C58 * C5088 * C1986 -
          ((C102 * C315 + C59 * C357) * C57 +
           (C102 * C311 + C59 * C353) * C67) *
              C58 * C5088 * C1987 +
          ((C102 * C312 + C59 * C354) * C67 +
           (C102 * C316 + C59 * C358) * C57) *
              C58 * C5088 * C1988 -
          ((C102 * C1992 + C59 * C2014) * C57 +
           (C102 * C1991 + C59 * C2013) * C67) *
              C58 * C5088 * C1989) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C5088 * C1755 -
           ((C129 * C315 + C58 * C391) * C57 +
            (C129 * C311 + C58 * C387) * C67) *
               C59 * C5088 * C5124) *
              C1757 +
          (((C129 * C313 + C58 * C389) * C67 +
            (C129 * C317 + C58 * C393) * C57) *
               C59 * C5088 * C5124 -
           ((C129 * C73 + C58 * C135) * C57 + (C129 * C69 + C58 * C131) * C67) *
               C59 * C5088 * C1755) *
              C1758 +
          (((C129 * C70 + C58 * C132) * C67 + (C129 * C74 + C58 * C136) * C57) *
               C59 * C5088 * C1755 -
           ((C129 * C916 + C58 * C974) * C57 +
            (C129 * C915 + C58 * C973) * C67) *
               C59 * C5088 * C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
              C59 * C5088 * C1986 -
          ((C129 * C315 + C58 * C391) * C57 +
           (C129 * C311 + C58 * C387) * C67) *
              C59 * C5088 * C1987 +
          ((C129 * C312 + C58 * C388) * C67 +
           (C129 * C316 + C58 * C392) * C57) *
              C59 * C5088 * C1988 -
          ((C129 * C1992 + C58 * C2034) * C57 +
           (C129 * C1991 + C58 * C2033) * C67) *
              C59 * C5088 * C1989) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C5088 * C1755 -
           ((C67 * C353 + C57 * C421) * C59 +
            (C67 * C311 + C57 * C315) * C102) *
               C58 * C5088 * C5124) *
              C1757 +
          (((C67 * C313 + C57 * C317) * C102 +
            (C67 * C355 + C57 * C423) * C59) *
               C58 * C5088 * C5124 -
           ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
               C58 * C5088 * C1755) *
              C1758 +
          (((C67 * C70 + C57 * C74) * C102 + (C67 * C105 + C57 * C158) * C59) *
               C58 * C5088 * C1755 -
           ((C67 * C945 + C57 * C1001) * C59 +
            (C67 * C915 + C57 * C916) * C102) *
               C58 * C5088 * C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
              C58 * C5088 * C1986 -
          ((C67 * C353 + C57 * C421) * C59 + (C67 * C311 + C57 * C315) * C102) *
              C58 * C5088 * C1987 +
          ((C67 * C312 + C57 * C316) * C102 + (C67 * C354 + C57 * C422) * C59) *
              C58 * C5088 * C1988 -
          ((C67 * C2013 + C57 * C2053) * C59 +
           (C67 * C1991 + C57 * C1992) * C102) *
              C58 * C5088 * C1989) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5088 * C1755 -
           (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C5088 *
               C5124) *
              C1757 +
          ((C178 * C313 + C458 + C458 + C59 * C453) * C57 * C58 * C5088 *
               C5124 -
           (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C5088 *
               C1755) *
              C1758 +
          ((C178 * C70 + C186 + C186 + C59 * C181) * C57 * C58 * C5088 * C1755 -
           (C178 * C915 + C1030 + C1030 + C59 * C1028) * C57 * C58 * C5088 *
               C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5088 * C1986 -
          (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C5088 * C1987 +
          (C178 * C312 + C457 + C457 + C59 * C452) * C57 * C58 * C5088 * C1988 -
          (C178 * C1991 + C2074 + C2074 + C59 * C2072) * C57 * C58 * C5088 *
              C1989) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eeyz[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C129 * C68 + C58 * C130) * C102 +
                     (C129 * C103 + C58 * C205) * C59) *
                        C57 * C5088 * C1755 -
                    ((C129 * C353 + C58 * C485) * C59 +
                     (C129 * C311 + C58 * C387) * C102) *
                        C57 * C5088 * C5124) *
                       C1757 +
                   (((C129 * C313 + C58 * C389) * C102 +
                     (C129 * C355 + C58 * C487) * C59) *
                        C57 * C5088 * C5124 -
                    ((C129 * C104 + C58 * C206) * C59 +
                     (C129 * C69 + C58 * C131) * C102) *
                        C57 * C5088 * C1755) *
                       C1758 +
                   (((C129 * C70 + C58 * C132) * C102 +
                     (C129 * C105 + C58 * C207) * C59) *
                        C57 * C5088 * C1755 -
                    ((C129 * C945 + C58 * C1056) * C59 +
                     (C129 * C915 + C58 * C973) * C102) *
                        C57 * C5088 * C5124) *
                       C1759)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C129 * C68 + C58 * C130) * C102 +
                    (C129 * C103 + C58 * C205) * C59) *
                       C57 * C5088 * C1986 -
                   ((C129 * C353 + C58 * C485) * C59 +
                    (C129 * C311 + C58 * C387) * C102) *
                       C57 * C5088 * C1987 +
                   ((C129 * C312 + C58 * C388) * C102 +
                    (C129 * C354 + C58 * C486) * C59) *
                       C57 * C5088 * C1988 -
                   ((C129 * C2013 + C58 * C2092) * C59 +
                    (C129 * C1991 + C58 * C2033) * C102) *
                       C57 * C5088 * C1989) *
                  C5053) /
                     (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C5088 * C1755 -
           ((C67 * C387 + C57 * C515) * C58 +
            (C67 * C311 + C57 * C315) * C129) *
               C59 * C5088 * C5124) *
              C1757 +
          (((C67 * C313 + C57 * C317) * C129 +
            (C67 * C389 + C57 * C517) * C58) *
               C59 * C5088 * C5124 -
           ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
               C59 * C5088 * C1755) *
              C1758 +
          (((C67 * C70 + C57 * C74) * C129 + (C67 * C132 + C57 * C229) * C58) *
               C59 * C5088 * C1755 -
           ((C67 * C973 + C57 * C1083) * C58 +
            (C67 * C915 + C57 * C916) * C129) *
               C59 * C5088 * C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
              C59 * C5088 * C1986 -
          ((C67 * C387 + C57 * C515) * C58 + (C67 * C311 + C57 * C315) * C129) *
              C59 * C5088 * C1987 +
          ((C67 * C312 + C57 * C316) * C129 + (C67 * C388 + C57 * C516) * C58) *
              C59 * C5088 * C1988 -
          ((C67 * C2033 + C57 * C2111) * C58 +
           (C67 * C1991 + C57 * C1992) * C129) *
              C59 * C5088 * C1989) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eezy[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C102 * C68 + C59 * C103) * C129 +
                     (C102 * C130 + C59 * C249) * C58) *
                        C57 * C5088 * C1755 -
                    ((C102 * C387 + C59 * C545) * C58 +
                     (C102 * C311 + C59 * C353) * C129) *
                        C57 * C5088 * C5124) *
                       C1757 +
                   (((C102 * C313 + C59 * C355) * C129 +
                     (C102 * C389 + C59 * C547) * C58) *
                        C57 * C5088 * C5124 -
                    ((C102 * C131 + C59 * C250) * C58 +
                     (C102 * C69 + C59 * C104) * C129) *
                        C57 * C5088 * C1755) *
                       C1758 +
                   (((C102 * C70 + C59 * C105) * C129 +
                     (C102 * C132 + C59 * C251) * C58) *
                        C57 * C5088 * C1755 -
                    ((C102 * C973 + C59 * C1110) * C58 +
                     (C102 * C915 + C59 * C945) * C129) *
                        C57 * C5088 * C5124) *
                       C1759)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C102 * C68 + C59 * C103) * C129 +
                    (C102 * C130 + C59 * C249) * C58) *
                       C57 * C5088 * C1986 -
                   ((C102 * C387 + C59 * C545) * C58 +
                    (C102 * C311 + C59 * C353) * C129) *
                       C57 * C5088 * C1987 +
                   ((C102 * C312 + C59 * C354) * C129 +
                    (C102 * C388 + C59 * C546) * C58) *
                       C57 * C5088 * C1988 -
                   ((C102 * C2033 + C59 * C2130) * C58 +
                    (C102 * C1991 + C59 * C2013) * C129) *
                       C57 * C5088 * C1989) *
                  C5053) /
                     (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5088 * C1755 -
           (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C5088 *
               C5124) *
              C1757 +
          ((C271 * C313 + C582 + C582 + C58 * C577) * C59 * C57 * C5088 *
               C5124 -
           (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C5088 *
               C1755) *
              C1758 +
          ((C271 * C70 + C279 + C279 + C58 * C274) * C59 * C57 * C5088 * C1755 -
           (C271 * C915 + C1139 + C1139 + C58 * C1137) * C59 * C57 * C5088 *
               C5124) *
              C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5088 * C1986 -
          (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C5088 * C1987 +
          (C271 * C312 + C581 + C581 + C58 * C576) * C59 * C57 * C5088 * C1988 -
          (C271 * C1991 + C2151 + C2151 + C58 * C2149) * C59 * C57 * C5088 *
              C1989) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C3222 -
            (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C5152) *
               C5174 +
           ((C66 * C1425 + C1432 + C1432 + C57 * C1429) * C58 * C59 * C5152 -
            (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C3222) *
               C5124) *
              C5166 +
          (((C66 * C614 + C627 + C627 + C57 * C622) * C58 * C59 * C5152 -
            (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C3222) *
               C5174 +
           ((C66 * C313 + C326 + C326 + C57 * C321) * C58 * C59 * C3222 -
            (C66 * C1426 + C1433 + C1433 + C57 * C1430) * C58 * C59 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C102 * C68 + C59 * C103) * C67 +
                       (C102 * C72 + C59 * C107) * C57) *
                          C58 * C3222 -
                      ((C102 * C616 + C59 * C658) * C57 +
                       (C102 * C612 + C59 * C654) * C67) *
                          C58 * C5152) *
                         C5174 +
                     (((C102 * C1425 + C59 * C1467) * C67 +
                       (C102 * C1427 + C59 * C1469) * C57) *
                          C58 * C5152 -
                      ((C102 * C315 + C59 * C357) * C57 +
                       (C102 * C311 + C59 * C353) * C67) *
                          C58 * C3222) *
                         C5124) *
                        C5166 +
                    ((((C102 * C614 + C59 * C656) * C67 +
                       (C102 * C618 + C59 * C660) * C57) *
                          C58 * C5152 -
                      ((C102 * C73 + C59 * C108) * C57 +
                       (C102 * C69 + C59 * C104) * C67) *
                          C58 * C3222) *
                         C5174 +
                     (((C102 * C313 + C59 * C355) * C67 +
                       (C102 * C317 + C59 * C359) * C57) *
                          C58 * C3222 -
                      ((C102 * C1428 + C59 * C1470) * C57 +
                       (C102 * C1426 + C59 * C1468) * C67) *
                          C58 * C5152) *
                         C5124) *
                        C5059)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C129 * C68 + C58 * C130) * C67 +
                       (C129 * C72 + C58 * C134) * C57) *
                          C59 * C3222 -
                      ((C129 * C616 + C58 * C692) * C57 +
                       (C129 * C612 + C58 * C688) * C67) *
                          C59 * C5152) *
                         C5174 +
                     (((C129 * C1425 + C58 * C1505) * C67 +
                       (C129 * C1427 + C58 * C1507) * C57) *
                          C59 * C5152 -
                      ((C129 * C315 + C58 * C391) * C57 +
                       (C129 * C311 + C58 * C387) * C67) *
                          C59 * C3222) *
                         C5124) *
                        C5166 +
                    ((((C129 * C614 + C58 * C690) * C67 +
                       (C129 * C618 + C58 * C694) * C57) *
                          C59 * C5152 -
                      ((C129 * C73 + C58 * C135) * C57 +
                       (C129 * C69 + C58 * C131) * C67) *
                          C59 * C3222) *
                         C5174 +
                     (((C129 * C313 + C58 * C389) * C67 +
                       (C129 * C317 + C58 * C393) * C57) *
                          C59 * C3222 -
                      ((C129 * C1428 + C58 * C1508) * C57 +
                       (C129 * C1426 + C58 * C1506) * C67) *
                          C59 * C5152) *
                         C5124) *
                        C5059)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
                C58 * C3222 -
            ((C67 * C654 + C57 * C722) * C59 +
             (C67 * C612 + C57 * C616) * C102) *
                C58 * C5152) *
               C5174 +
           (((C67 * C1425 + C57 * C1427) * C102 +
             (C67 * C1467 + C57 * C1543) * C59) *
                C58 * C5152 -
            ((C67 * C353 + C57 * C421) * C59 +
             (C67 * C311 + C57 * C315) * C102) *
                C58 * C3222) *
               C5124) *
              C5166 +
          ((((C67 * C614 + C57 * C618) * C102 +
             (C67 * C656 + C57 * C724) * C59) *
                C58 * C5152 -
            ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
                C58 * C3222) *
               C5174 +
           (((C67 * C313 + C57 * C317) * C102 +
             (C67 * C355 + C57 * C423) * C59) *
                C58 * C3222 -
            ((C67 * C1468 + C57 * C1544) * C59 +
             (C67 * C1426 + C57 * C1428) * C102) *
                C58 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C3222 -
            (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C5152) *
               C5174 +
           ((C178 * C1425 + C1582 + C1582 + C59 * C1579) * C57 * C58 * C5152 -
            (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C3222) *
               C5124) *
              C5166 +
          (((C178 * C614 + C759 + C759 + C59 * C754) * C57 * C58 * C5152 -
            (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C3222) *
               C5174 +
           ((C178 * C313 + C458 + C458 + C59 * C453) * C57 * C58 * C3222 -
            (C178 * C1426 + C1583 + C1583 + C59 * C1580) * C57 * C58 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C129 * C68 + C58 * C130) * C102 +
                       (C129 * C103 + C58 * C205) * C59) *
                          C57 * C3222 -
                      ((C129 * C654 + C58 * C786) * C59 +
                       (C129 * C612 + C58 * C688) * C102) *
                          C57 * C5152) *
                         C5174 +
                     (((C129 * C1425 + C58 * C1505) * C102 +
                       (C129 * C1467 + C58 * C1617) * C59) *
                          C57 * C5152 -
                      ((C129 * C353 + C58 * C485) * C59 +
                       (C129 * C311 + C58 * C387) * C102) *
                          C57 * C3222) *
                         C5124) *
                        C5166 +
                    ((((C129 * C614 + C58 * C690) * C102 +
                       (C129 * C656 + C58 * C788) * C59) *
                          C57 * C5152 -
                      ((C129 * C104 + C58 * C206) * C59 +
                       (C129 * C69 + C58 * C131) * C102) *
                          C57 * C3222) *
                         C5174 +
                     (((C129 * C313 + C58 * C389) * C102 +
                       (C129 * C355 + C58 * C487) * C59) *
                          C57 * C3222 -
                      ((C129 * C1468 + C58 * C1618) * C59 +
                       (C129 * C1426 + C58 * C1506) * C102) *
                          C57 * C5152) *
                         C5124) *
                        C5059)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
                C59 * C3222 -
            ((C67 * C688 + C57 * C816) * C58 +
             (C67 * C612 + C57 * C616) * C129) *
                C59 * C5152) *
               C5174 +
           (((C67 * C1425 + C57 * C1427) * C129 +
             (C67 * C1505 + C57 * C1653) * C58) *
                C59 * C5152 -
            ((C67 * C387 + C57 * C515) * C58 +
             (C67 * C311 + C57 * C315) * C129) *
                C59 * C3222) *
               C5124) *
              C5166 +
          ((((C67 * C614 + C57 * C618) * C129 +
             (C67 * C690 + C57 * C818) * C58) *
                C59 * C5152 -
            ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
                C59 * C3222) *
               C5174 +
           (((C67 * C313 + C57 * C317) * C129 +
             (C67 * C389 + C57 * C517) * C58) *
                C59 * C3222 -
            ((C67 * C1506 + C57 * C1654) * C58 +
             (C67 * C1426 + C57 * C1428) * C129) *
                C59 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C102 * C68 + C59 * C103) * C129 +
                       (C102 * C130 + C59 * C249) * C58) *
                          C57 * C3222 -
                      ((C102 * C688 + C59 * C846) * C58 +
                       (C102 * C612 + C59 * C654) * C129) *
                          C57 * C5152) *
                         C5174 +
                     (((C102 * C1425 + C59 * C1467) * C129 +
                       (C102 * C1505 + C59 * C1689) * C58) *
                          C57 * C5152 -
                      ((C102 * C387 + C59 * C545) * C58 +
                       (C102 * C311 + C59 * C353) * C129) *
                          C57 * C3222) *
                         C5124) *
                        C5166 +
                    ((((C102 * C614 + C59 * C656) * C129 +
                       (C102 * C690 + C59 * C848) * C58) *
                          C57 * C5152 -
                      ((C102 * C131 + C59 * C250) * C58 +
                       (C102 * C69 + C59 * C104) * C129) *
                          C57 * C3222) *
                         C5174 +
                     (((C102 * C313 + C59 * C355) * C129 +
                       (C102 * C389 + C59 * C547) * C58) *
                          C57 * C3222 -
                      ((C102 * C1506 + C59 * C1690) * C58 +
                       (C102 * C1426 + C59 * C1468) * C129) *
                          C57 * C5152) *
                         C5124) *
                        C5059)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C3222 -
            (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C5152) *
               C5174 +
           ((C271 * C1425 + C1728 + C1728 + C58 * C1725) * C59 * C57 * C5152 -
            (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C3222) *
               C5124) *
              C5166 +
          (((C271 * C614 + C883 + C883 + C58 * C878) * C59 * C57 * C5152 -
            (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C3222) *
               C5174 +
           ((C271 * C313 + C582 + C582 + C58 * C577) * C59 * C57 * C3222 -
            (C271 * C1426 + C1729 + C1729 + C58 * C1726) * C59 * C57 * C5152) *
               C5124) *
              C5059)) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5197 -
           (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C5198 +
           (C66 * C613 + C626 + C626 + C57 * C621) * C58 * C59 * C4182) *
              C5174 +
          ((C66 * C1425 + C1432 + C1432 + C57 * C1429) * C58 * C59 * C5198 -
           (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C5197 -
           (C66 * C2177 + C2181 + C2181 + C57 * C2179) * C58 * C59 * C4182) *
              C5124) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C5197 -
           ((C102 * C616 + C59 * C658) * C57 +
            (C102 * C612 + C59 * C654) * C67) *
               C58 * C5198 +
           ((C102 * C613 + C59 * C655) * C67 +
            (C102 * C617 + C59 * C659) * C57) *
               C58 * C4182) *
              C5174 +
          (((C102 * C1425 + C59 * C1467) * C67 +
            (C102 * C1427 + C59 * C1469) * C57) *
               C58 * C5198 -
           ((C102 * C315 + C59 * C357) * C57 +
            (C102 * C311 + C59 * C353) * C67) *
               C58 * C5197 -
           ((C102 * C2178 + C59 * C2208) * C57 +
            (C102 * C2177 + C59 * C2207) * C67) *
               C58 * C4182) *
              C5124) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C5197 -
           ((C129 * C616 + C58 * C692) * C57 +
            (C129 * C612 + C58 * C688) * C67) *
               C59 * C5198 +
           ((C129 * C613 + C58 * C689) * C67 +
            (C129 * C617 + C58 * C693) * C57) *
               C59 * C4182) *
              C5174 +
          (((C129 * C1425 + C58 * C1505) * C67 +
            (C129 * C1427 + C58 * C1507) * C57) *
               C59 * C5198 -
           ((C129 * C315 + C58 * C391) * C57 +
            (C129 * C311 + C58 * C387) * C67) *
               C59 * C5197 -
           ((C129 * C2178 + C58 * C2236) * C57 +
            (C129 * C2177 + C58 * C2235) * C67) *
               C59 * C4182) *
              C5124) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C5197 -
           ((C67 * C654 + C57 * C722) * C59 +
            (C67 * C612 + C57 * C616) * C102) *
               C58 * C5198 +
           ((C67 * C613 + C57 * C617) * C102 +
            (C67 * C655 + C57 * C723) * C59) *
               C58 * C4182) *
              C5174 +
          (((C67 * C1425 + C57 * C1427) * C102 +
            (C67 * C1467 + C57 * C1543) * C59) *
               C58 * C5198 -
           ((C67 * C353 + C57 * C421) * C59 +
            (C67 * C311 + C57 * C315) * C102) *
               C58 * C5197 -
           ((C67 * C2207 + C57 * C2263) * C59 +
            (C67 * C2177 + C57 * C2178) * C102) *
               C58 * C4182) *
              C5124) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5197 -
           (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C5198 +
           (C178 * C613 + C758 + C758 + C59 * C753) * C57 * C58 * C4182) *
              C5174 +
          ((C178 * C1425 + C1582 + C1582 + C59 * C1579) * C57 * C58 * C5198 -
           (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C5197 -
           (C178 * C2177 + C2292 + C2292 + C59 * C2290) * C57 * C58 * C4182) *
              C5124) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C129 * C68 + C58 * C130) * C102 +
                      (C129 * C103 + C58 * C205) * C59) *
                         C57 * C5197 -
                     ((C129 * C654 + C58 * C786) * C59 +
                      (C129 * C612 + C58 * C688) * C102) *
                         C57 * C5198 +
                     ((C129 * C613 + C58 * C689) * C102 +
                      (C129 * C655 + C58 * C787) * C59) *
                         C57 * C4182) *
                        C5174 +
                    (((C129 * C1425 + C58 * C1505) * C102 +
                      (C129 * C1467 + C58 * C1617) * C59) *
                         C57 * C5198 -
                     ((C129 * C353 + C58 * C485) * C59 +
                      (C129 * C311 + C58 * C387) * C102) *
                         C57 * C5197 -
                     ((C129 * C2207 + C58 * C2318) * C59 +
                      (C129 * C2177 + C58 * C2235) * C102) *
                         C57 * C4182) *
                        C5124) *
                   C5053) /
                  (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C5197 -
           ((C67 * C688 + C57 * C816) * C58 +
            (C67 * C612 + C57 * C616) * C129) *
               C59 * C5198 +
           ((C67 * C613 + C57 * C617) * C129 +
            (C67 * C689 + C57 * C817) * C58) *
               C59 * C4182) *
              C5174 +
          (((C67 * C1425 + C57 * C1427) * C129 +
            (C67 * C1505 + C57 * C1653) * C58) *
               C59 * C5198 -
           ((C67 * C387 + C57 * C515) * C58 +
            (C67 * C311 + C57 * C315) * C129) *
               C59 * C5197 -
           ((C67 * C2235 + C57 * C2345) * C58 +
            (C67 * C2177 + C57 * C2178) * C129) *
               C59 * C4182) *
              C5124) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C102 * C68 + C59 * C103) * C129 +
                      (C102 * C130 + C59 * C249) * C58) *
                         C57 * C5197 -
                     ((C102 * C688 + C59 * C846) * C58 +
                      (C102 * C612 + C59 * C654) * C129) *
                         C57 * C5198 +
                     ((C102 * C613 + C59 * C655) * C129 +
                      (C102 * C689 + C59 * C847) * C58) *
                         C57 * C4182) *
                        C5174 +
                    (((C102 * C1425 + C59 * C1467) * C129 +
                      (C102 * C1505 + C59 * C1689) * C58) *
                         C57 * C5198 -
                     ((C102 * C387 + C59 * C545) * C58 +
                      (C102 * C311 + C59 * C353) * C129) *
                         C57 * C5197 -
                     ((C102 * C2235 + C59 * C2372) * C58 +
                      (C102 * C2177 + C59 * C2207) * C129) *
                         C57 * C4182) *
                        C5124) *
                   C5053) /
                  (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5197 -
           (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C5198 +
           (C271 * C613 + C882 + C882 + C58 * C877) * C59 * C57 * C4182) *
              C5174 +
          ((C271 * C1425 + C1728 + C1728 + C58 * C1725) * C59 * C57 * C5198 -
           (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C5197 -
           (C271 * C2177 + C2401 + C2401 + C58 * C2399) * C59 * C57 * C4182) *
              C5124) *
         C5053) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (-std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C3222 -
           (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C5152) *
              C306 +
          ((C66 * C1425 + C1432 + C1432 + C57 * C1429) * C58 * C59 * C5152 -
           (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C3222) *
              C307 +
          ((C66 * C312 + C325 + C325 + C57 * C320) * C58 * C59 * C3222 -
           (C66 * C2972 + C2976 + C2976 + C57 * C2974) * C58 * C59 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C3222 -
           (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C5152) *
              C5072 * C1757 +
          ((C66 * C614 + C627 + C627 + C57 * C622) * C58 * C59 * C5152 -
           (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C3222) *
              C5072 * C1758 +
          ((C66 * C70 + C83 + C83 + C57 * C78) * C58 * C59 * C3222 -
           (C66 * C1167 + C1171 + C1171 + C57 * C1169) * C58 * C59 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C3684 -
          (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C3685 +
          (C66 * C613 + C626 + C626 + C57 * C621) * C58 * C59 * C3686 -
          (C66 * C3688 + C3692 + C3692 + C57 * C3690) * C58 * C59 * C3687) *
         C5072 * C5053) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C3222 -
           ((C102 * C616 + C59 * C658) * C57 +
            (C102 * C612 + C59 * C654) * C67) *
               C58 * C5152) *
              C306 +
          (((C102 * C1425 + C59 * C1467) * C67 +
            (C102 * C1427 + C59 * C1469) * C57) *
               C58 * C5152 -
           ((C102 * C315 + C59 * C357) * C57 +
            (C102 * C311 + C59 * C353) * C67) *
               C58 * C3222) *
              C307 +
          (((C102 * C312 + C59 * C354) * C67 +
            (C102 * C316 + C59 * C358) * C57) *
               C58 * C3222 -
           ((C102 * C2973 + C59 * C3003) * C57 +
            (C102 * C2972 + C59 * C3002) * C67) *
               C58 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C3222 -
           ((C102 * C616 + C59 * C658) * C57 +
            (C102 * C612 + C59 * C654) * C67) *
               C58 * C5152) *
              C5072 * C1757 +
          (((C102 * C614 + C59 * C656) * C67 +
            (C102 * C618 + C59 * C660) * C57) *
               C58 * C5152 -
           ((C102 * C73 + C59 * C108) * C57 + (C102 * C69 + C59 * C104) * C67) *
               C58 * C3222) *
              C5072 * C1758 +
          (((C102 * C70 + C59 * C105) * C67 + (C102 * C74 + C59 * C109) * C57) *
               C58 * C3222 -
           ((C102 * C1168 + C59 * C1198) * C57 +
            (C102 * C1167 + C59 * C1197) * C67) *
               C58 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
              C58 * C3684 -
          ((C102 * C616 + C59 * C658) * C57 +
           (C102 * C612 + C59 * C654) * C67) *
              C58 * C3685 +
          ((C102 * C613 + C59 * C655) * C67 +
           (C102 * C617 + C59 * C659) * C57) *
              C58 * C3686 -
          ((C102 * C3689 + C59 * C3711) * C57 +
           (C102 * C3688 + C59 * C3710) * C67) *
              C58 * C3687) *
         C5072 * C5053) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C3222 -
           ((C129 * C616 + C58 * C692) * C57 +
            (C129 * C612 + C58 * C688) * C67) *
               C59 * C5152) *
              C306 +
          (((C129 * C1425 + C58 * C1505) * C67 +
            (C129 * C1427 + C58 * C1507) * C57) *
               C59 * C5152 -
           ((C129 * C315 + C58 * C391) * C57 +
            (C129 * C311 + C58 * C387) * C67) *
               C59 * C3222) *
              C307 +
          (((C129 * C312 + C58 * C388) * C67 +
            (C129 * C316 + C58 * C392) * C57) *
               C59 * C3222 -
           ((C129 * C2973 + C58 * C3031) * C57 +
            (C129 * C2972 + C58 * C3030) * C67) *
               C59 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C3222 -
           ((C129 * C616 + C58 * C692) * C57 +
            (C129 * C612 + C58 * C688) * C67) *
               C59 * C5152) *
              C5072 * C1757 +
          (((C129 * C614 + C58 * C690) * C67 +
            (C129 * C618 + C58 * C694) * C57) *
               C59 * C5152 -
           ((C129 * C73 + C58 * C135) * C57 + (C129 * C69 + C58 * C131) * C67) *
               C59 * C3222) *
              C5072 * C1758 +
          (((C129 * C70 + C58 * C132) * C67 + (C129 * C74 + C58 * C136) * C57) *
               C59 * C3222 -
           ((C129 * C1168 + C58 * C1226) * C57 +
            (C129 * C1167 + C58 * C1225) * C67) *
               C59 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
              C59 * C3684 -
          ((C129 * C616 + C58 * C692) * C57 +
           (C129 * C612 + C58 * C688) * C67) *
              C59 * C3685 +
          ((C129 * C613 + C58 * C689) * C67 +
           (C129 * C617 + C58 * C693) * C57) *
              C59 * C3686 -
          ((C129 * C3689 + C58 * C3731) * C57 +
           (C129 * C3688 + C58 * C3730) * C67) *
              C59 * C3687) *
         C5072 * C5053) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C3222 -
           ((C67 * C654 + C57 * C722) * C59 +
            (C67 * C612 + C57 * C616) * C102) *
               C58 * C5152) *
              C306 +
          (((C67 * C1425 + C57 * C1427) * C102 +
            (C67 * C1467 + C57 * C1543) * C59) *
               C58 * C5152 -
           ((C67 * C353 + C57 * C421) * C59 +
            (C67 * C311 + C57 * C315) * C102) *
               C58 * C3222) *
              C307 +
          (((C67 * C312 + C57 * C316) * C102 +
            (C67 * C354 + C57 * C422) * C59) *
               C58 * C3222 -
           ((C67 * C3002 + C57 * C3058) * C59 +
            (C67 * C2972 + C57 * C2973) * C102) *
               C58 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C3222 -
           ((C67 * C654 + C57 * C722) * C59 +
            (C67 * C612 + C57 * C616) * C102) *
               C58 * C5152) *
              C5072 * C1757 +
          (((C67 * C614 + C57 * C618) * C102 +
            (C67 * C656 + C57 * C724) * C59) *
               C58 * C5152 -
           ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
               C58 * C3222) *
              C5072 * C1758 +
          (((C67 * C70 + C57 * C74) * C102 + (C67 * C105 + C57 * C158) * C59) *
               C58 * C3222 -
           ((C67 * C1197 + C57 * C1253) * C59 +
            (C67 * C1167 + C57 * C1168) * C102) *
               C58 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
              C58 * C3684 -
          ((C67 * C654 + C57 * C722) * C59 + (C67 * C612 + C57 * C616) * C102) *
              C58 * C3685 +
          ((C67 * C613 + C57 * C617) * C102 + (C67 * C655 + C57 * C723) * C59) *
              C58 * C3686 -
          ((C67 * C3710 + C57 * C3750) * C59 +
           (C67 * C3688 + C57 * C3689) * C102) *
              C58 * C3687) *
         C5072 * C5053) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (-std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C3222 -
           (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C5152) *
              C306 +
          ((C178 * C1425 + C1582 + C1582 + C59 * C1579) * C57 * C58 * C5152 -
           (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C3222) *
              C307 +
          ((C178 * C312 + C457 + C457 + C59 * C452) * C57 * C58 * C3222 -
           (C178 * C2972 + C3087 + C3087 + C59 * C3085) * C57 * C58 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C3222 -
           (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C5152) *
              C5072 * C1757 +
          ((C178 * C614 + C759 + C759 + C59 * C754) * C57 * C58 * C5152 -
           (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C3222) *
              C5072 * C1758 +
          ((C178 * C70 + C186 + C186 + C59 * C181) * C57 * C58 * C3222 -
           (C178 * C1167 + C1282 + C1282 + C59 * C1280) * C57 * C58 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C3684 -
          (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C3685 +
          (C178 * C613 + C758 + C758 + C59 * C753) * C57 * C58 * C3686 -
          (C178 * C3688 + C3771 + C3771 + C59 * C3769) * C57 * C58 * C3687) *
         C5072 * C5053) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] += (-std::pow(Pi, 2.5) *
                   ((((C129 * C68 + C58 * C130) * C102 +
                      (C129 * C103 + C58 * C205) * C59) *
                         C57 * C3222 -
                     ((C129 * C654 + C58 * C786) * C59 +
                      (C129 * C612 + C58 * C688) * C102) *
                         C57 * C5152) *
                        C306 +
                    (((C129 * C1425 + C58 * C1505) * C102 +
                      (C129 * C1467 + C58 * C1617) * C59) *
                         C57 * C5152 -
                     ((C129 * C353 + C58 * C485) * C59 +
                      (C129 * C311 + C58 * C387) * C102) *
                         C57 * C3222) *
                        C307 +
                    (((C129 * C312 + C58 * C388) * C102 +
                      (C129 * C354 + C58 * C486) * C59) *
                         C57 * C3222 -
                     ((C129 * C3002 + C58 * C3113) * C59 +
                      (C129 * C2972 + C58 * C3030) * C102) *
                         C57 * C5152) *
                        C308) *
                   C5053) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * ((((C129 * C68 + C58 * C130) * C102 +
                                          (C129 * C103 + C58 * C205) * C59) *
                                             C57 * C3222 -
                                         ((C129 * C654 + C58 * C786) * C59 +
                                          (C129 * C612 + C58 * C688) * C102) *
                                             C57 * C5152) *
                                            C5072 * C1757 +
                                        (((C129 * C614 + C58 * C690) * C102 +
                                          (C129 * C656 + C58 * C788) * C59) *
                                             C57 * C5152 -
                                         ((C129 * C104 + C58 * C206) * C59 +
                                          (C129 * C69 + C58 * C131) * C102) *
                                             C57 * C3222) *
                                            C5072 * C1758 +
                                        (((C129 * C70 + C58 * C132) * C102 +
                                          (C129 * C105 + C58 * C207) * C59) *
                                             C57 * C3222 -
                                         ((C129 * C1197 + C58 * C1308) * C59 +
                                          (C129 * C1167 + C58 * C1225) * C102) *
                                             C57 * C5152) *
                                            C5072 * C1759)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C129 * C68 + C58 * C130) * C102 +
                     (C129 * C103 + C58 * C205) * C59) *
                        C57 * C3684 -
                    ((C129 * C654 + C58 * C786) * C59 +
                     (C129 * C612 + C58 * C688) * C102) *
                        C57 * C3685 +
                    ((C129 * C613 + C58 * C689) * C102 +
                     (C129 * C655 + C58 * C787) * C59) *
                        C57 * C3686 -
                    ((C129 * C3710 + C58 * C3789) * C59 +
                     (C129 * C3688 + C58 * C3730) * C102) *
                        C57 * C3687) *
                   C5072 * C5053) /
                      (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C3222 -
           ((C67 * C688 + C57 * C816) * C58 +
            (C67 * C612 + C57 * C616) * C129) *
               C59 * C5152) *
              C306 +
          (((C67 * C1425 + C57 * C1427) * C129 +
            (C67 * C1505 + C57 * C1653) * C58) *
               C59 * C5152 -
           ((C67 * C387 + C57 * C515) * C58 +
            (C67 * C311 + C57 * C315) * C129) *
               C59 * C3222) *
              C307 +
          (((C67 * C312 + C57 * C316) * C129 +
            (C67 * C388 + C57 * C516) * C58) *
               C59 * C3222 -
           ((C67 * C3030 + C57 * C3140) * C58 +
            (C67 * C2972 + C57 * C2973) * C129) *
               C59 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C3222 -
           ((C67 * C688 + C57 * C816) * C58 +
            (C67 * C612 + C57 * C616) * C129) *
               C59 * C5152) *
              C5072 * C1757 +
          (((C67 * C614 + C57 * C618) * C129 +
            (C67 * C690 + C57 * C818) * C58) *
               C59 * C5152 -
           ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
               C59 * C3222) *
              C5072 * C1758 +
          (((C67 * C70 + C57 * C74) * C129 + (C67 * C132 + C57 * C229) * C58) *
               C59 * C3222 -
           ((C67 * C1225 + C57 * C1335) * C58 +
            (C67 * C1167 + C57 * C1168) * C129) *
               C59 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
              C59 * C3684 -
          ((C67 * C688 + C57 * C816) * C58 + (C67 * C612 + C57 * C616) * C129) *
              C59 * C3685 +
          ((C67 * C613 + C57 * C617) * C129 + (C67 * C689 + C57 * C817) * C58) *
              C59 * C3686 -
          ((C67 * C3730 + C57 * C3808) * C58 +
           (C67 * C3688 + C57 * C3689) * C129) *
              C59 * C3687) *
         C5072 * C5053) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] += (-std::pow(Pi, 2.5) *
                   ((((C102 * C68 + C59 * C103) * C129 +
                      (C102 * C130 + C59 * C249) * C58) *
                         C57 * C3222 -
                     ((C102 * C688 + C59 * C846) * C58 +
                      (C102 * C612 + C59 * C654) * C129) *
                         C57 * C5152) *
                        C306 +
                    (((C102 * C1425 + C59 * C1467) * C129 +
                      (C102 * C1505 + C59 * C1689) * C58) *
                         C57 * C5152 -
                     ((C102 * C387 + C59 * C545) * C58 +
                      (C102 * C311 + C59 * C353) * C129) *
                         C57 * C3222) *
                        C307 +
                    (((C102 * C312 + C59 * C354) * C129 +
                      (C102 * C388 + C59 * C546) * C58) *
                         C57 * C3222 -
                     ((C102 * C3030 + C59 * C3167) * C58 +
                      (C102 * C2972 + C59 * C3002) * C129) *
                         C57 * C5152) *
                        C308) *
                   C5053) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * ((((C102 * C68 + C59 * C103) * C129 +
                                          (C102 * C130 + C59 * C249) * C58) *
                                             C57 * C3222 -
                                         ((C102 * C688 + C59 * C846) * C58 +
                                          (C102 * C612 + C59 * C654) * C129) *
                                             C57 * C5152) *
                                            C5072 * C1757 +
                                        (((C102 * C614 + C59 * C656) * C129 +
                                          (C102 * C690 + C59 * C848) * C58) *
                                             C57 * C5152 -
                                         ((C102 * C131 + C59 * C250) * C58 +
                                          (C102 * C69 + C59 * C104) * C129) *
                                             C57 * C3222) *
                                            C5072 * C1758 +
                                        (((C102 * C70 + C59 * C105) * C129 +
                                          (C102 * C132 + C59 * C251) * C58) *
                                             C57 * C3222 -
                                         ((C102 * C1225 + C59 * C1362) * C58 +
                                          (C102 * C1167 + C59 * C1197) * C129) *
                                             C57 * C5152) *
                                            C5072 * C1759)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C102 * C68 + C59 * C103) * C129 +
                     (C102 * C130 + C59 * C249) * C58) *
                        C57 * C3684 -
                    ((C102 * C688 + C59 * C846) * C58 +
                     (C102 * C612 + C59 * C654) * C129) *
                        C57 * C3685 +
                    ((C102 * C613 + C59 * C655) * C129 +
                     (C102 * C689 + C59 * C847) * C58) *
                        C57 * C3686 -
                    ((C102 * C3730 + C59 * C3827) * C58 +
                     (C102 * C3688 + C59 * C3710) * C129) *
                        C57 * C3687) *
                   C5072 * C5053) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (-std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C3222 -
           (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C5152) *
              C306 +
          ((C271 * C1425 + C1728 + C1728 + C58 * C1725) * C59 * C57 * C5152 -
           (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C3222) *
              C307 +
          ((C271 * C312 + C581 + C581 + C58 * C576) * C59 * C57 * C3222 -
           (C271 * C2972 + C3196 + C3196 + C58 * C3194) * C59 * C57 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C3222 -
           (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C5152) *
              C5072 * C1757 +
          ((C271 * C614 + C883 + C883 + C58 * C878) * C59 * C57 * C5152 -
           (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C3222) *
              C5072 * C1758 +
          ((C271 * C70 + C279 + C279 + C58 * C274) * C59 * C57 * C3222 -
           (C271 * C1167 + C1391 + C1391 + C58 * C1389) * C59 * C57 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C3684 -
          (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C3685 +
          (C271 * C613 + C882 + C882 + C58 * C877) * C59 * C57 * C3686 -
          (C271 * C3688 + C3848 + C3848 + C58 * C3846) * C59 * C57 * C3687) *
         C5072 * C5053) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C5197 -
           (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C5198 +
           (C66 * C613 + C626 + C626 + C57 * C621) * C58 * C59 * C4182) *
              C5072 * C5166 +
          ((C66 * C614 + C627 + C627 + C57 * C622) * C58 * C59 * C5198 -
           (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C5197 -
           (C66 * C615 + C628 + C628 + C57 * C623) * C58 * C59 * C4182) *
              C5072 * C5059)) /
        (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C5197 -
           ((C102 * C616 + C59 * C658) * C57 +
            (C102 * C612 + C59 * C654) * C67) *
               C58 * C5198 +
           ((C102 * C613 + C59 * C655) * C67 +
            (C102 * C617 + C59 * C659) * C57) *
               C58 * C4182) *
              C5072 * C5166 +
          (((C102 * C614 + C59 * C656) * C67 +
            (C102 * C618 + C59 * C660) * C57) *
               C58 * C5198 -
           ((C102 * C73 + C59 * C108) * C57 + (C102 * C69 + C59 * C104) * C67) *
               C58 * C5197 -
           ((C102 * C619 + C59 * C661) * C57 +
            (C102 * C615 + C59 * C657) * C67) *
               C58 * C4182) *
              C5072 * C5059)) /
        (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C5197 -
           ((C129 * C616 + C58 * C692) * C57 +
            (C129 * C612 + C58 * C688) * C67) *
               C59 * C5198 +
           ((C129 * C613 + C58 * C689) * C67 +
            (C129 * C617 + C58 * C693) * C57) *
               C59 * C4182) *
              C5072 * C5166 +
          (((C129 * C614 + C58 * C690) * C67 +
            (C129 * C618 + C58 * C694) * C57) *
               C59 * C5198 -
           ((C129 * C73 + C58 * C135) * C57 + (C129 * C69 + C58 * C131) * C67) *
               C59 * C5197 -
           ((C129 * C619 + C58 * C695) * C57 +
            (C129 * C615 + C58 * C691) * C67) *
               C59 * C4182) *
              C5072 * C5059)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C5197 -
           ((C67 * C654 + C57 * C722) * C59 +
            (C67 * C612 + C57 * C616) * C102) *
               C58 * C5198 +
           ((C67 * C613 + C57 * C617) * C102 +
            (C67 * C655 + C57 * C723) * C59) *
               C58 * C4182) *
              C5072 * C5166 +
          (((C67 * C614 + C57 * C618) * C102 +
            (C67 * C656 + C57 * C724) * C59) *
               C58 * C5198 -
           ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
               C58 * C5197 -
           ((C67 * C657 + C57 * C725) * C59 +
            (C67 * C615 + C57 * C619) * C102) *
               C58 * C4182) *
              C5072 * C5059)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C5197 -
           (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C5198 +
           (C178 * C613 + C758 + C758 + C59 * C753) * C57 * C58 * C4182) *
              C5072 * C5166 +
          ((C178 * C614 + C759 + C759 + C59 * C754) * C57 * C58 * C5198 -
           (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C5197 -
           (C178 * C615 + C760 + C760 + C59 * C755) * C57 * C58 * C4182) *
              C5072 * C5059)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C129 * C68 + C58 * C130) * C102 +
                      (C129 * C103 + C58 * C205) * C59) *
                         C57 * C5197 -
                     ((C129 * C654 + C58 * C786) * C59 +
                      (C129 * C612 + C58 * C688) * C102) *
                         C57 * C5198 +
                     ((C129 * C613 + C58 * C689) * C102 +
                      (C129 * C655 + C58 * C787) * C59) *
                         C57 * C4182) *
                        C5072 * C5166 +
                    (((C129 * C614 + C58 * C690) * C102 +
                      (C129 * C656 + C58 * C788) * C59) *
                         C57 * C5198 -
                     ((C129 * C104 + C58 * C206) * C59 +
                      (C129 * C69 + C58 * C131) * C102) *
                         C57 * C5197 -
                     ((C129 * C657 + C58 * C789) * C59 +
                      (C129 * C615 + C58 * C691) * C102) *
                         C57 * C4182) *
                        C5072 * C5059)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C5197 -
           ((C67 * C688 + C57 * C816) * C58 +
            (C67 * C612 + C57 * C616) * C129) *
               C59 * C5198 +
           ((C67 * C613 + C57 * C617) * C129 +
            (C67 * C689 + C57 * C817) * C58) *
               C59 * C4182) *
              C5072 * C5166 +
          (((C67 * C614 + C57 * C618) * C129 +
            (C67 * C690 + C57 * C818) * C58) *
               C59 * C5198 -
           ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
               C59 * C5197 -
           ((C67 * C691 + C57 * C819) * C58 +
            (C67 * C615 + C57 * C619) * C129) *
               C59 * C4182) *
              C5072 * C5059)) /
        (p * q * std::sqrt(p + q));
    d2eezy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C102 * C68 + C59 * C103) * C129 +
                      (C102 * C130 + C59 * C249) * C58) *
                         C57 * C5197 -
                     ((C102 * C688 + C59 * C846) * C58 +
                      (C102 * C612 + C59 * C654) * C129) *
                         C57 * C5198 +
                     ((C102 * C613 + C59 * C655) * C129 +
                      (C102 * C689 + C59 * C847) * C58) *
                         C57 * C4182) *
                        C5072 * C5166 +
                    (((C102 * C614 + C59 * C656) * C129 +
                      (C102 * C690 + C59 * C848) * C58) *
                         C57 * C5198 -
                     ((C102 * C131 + C59 * C250) * C58 +
                      (C102 * C69 + C59 * C104) * C129) *
                         C57 * C5197 -
                     ((C102 * C691 + C59 * C849) * C58 +
                      (C102 * C615 + C59 * C657) * C129) *
                         C57 * C4182) *
                        C5072 * C5059)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C5197 -
           (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C5198 +
           (C271 * C613 + C882 + C882 + C58 * C877) * C59 * C57 * C4182) *
              C5072 * C5166 +
          ((C271 * C614 + C883 + C883 + C58 * C878) * C59 * C57 * C5198 -
           (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C5197 -
           (C271 * C615 + C884 + C884 + C58 * C879) * C59 * C57 * C4182) *
              C5072 * C5059)) /
        (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C3222 -
           (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C5152) *
              C5072 * C1757 +
          ((C66 * C614 + C627 + C627 + C57 * C622) * C58 * C59 * C5152 -
           (C66 * C69 + C82 + C82 + C57 * C77) * C58 * C59 * C3222) *
              C5072 * C1758 +
          ((C66 * C70 + C83 + C83 + C57 * C78) * C58 * C59 * C3222 -
           (C66 * C1167 + C1171 + C1171 + C57 * C1169) * C58 * C59 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C68 + C81 + C81 + C57 * C76) * C58 * C59 * C3222 -
           (C66 * C612 + C625 + C625 + C57 * C620) * C58 * C59 * C5152) *
              C306 +
          ((C66 * C1425 + C1432 + C1432 + C57 * C1429) * C58 * C59 * C5152 -
           (C66 * C311 + C324 + C324 + C57 * C319) * C58 * C59 * C3222) *
              C307 +
          ((C66 * C312 + C325 + C325 + C57 * C320) * C58 * C59 * C3222 -
           (C66 * C2972 + C2976 + C2976 + C57 * C2974) * C58 * C59 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C3222 -
           ((C102 * C616 + C59 * C658) * C57 +
            (C102 * C612 + C59 * C654) * C67) *
               C58 * C5152) *
              C5072 * C1757 +
          (((C102 * C614 + C59 * C656) * C67 +
            (C102 * C618 + C59 * C660) * C57) *
               C58 * C5152 -
           ((C102 * C73 + C59 * C108) * C57 + (C102 * C69 + C59 * C104) * C67) *
               C58 * C3222) *
              C5072 * C1758 +
          (((C102 * C70 + C59 * C105) * C67 + (C102 * C74 + C59 * C109) * C57) *
               C58 * C3222 -
           ((C102 * C1168 + C59 * C1198) * C57 +
            (C102 * C1167 + C59 * C1197) * C67) *
               C58 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C102 * C68 + C59 * C103) * C67 + (C102 * C72 + C59 * C107) * C57) *
               C58 * C3222 -
           ((C102 * C616 + C59 * C658) * C57 +
            (C102 * C612 + C59 * C654) * C67) *
               C58 * C5152) *
              C306 +
          (((C102 * C1425 + C59 * C1467) * C67 +
            (C102 * C1427 + C59 * C1469) * C57) *
               C58 * C5152 -
           ((C102 * C315 + C59 * C357) * C57 +
            (C102 * C311 + C59 * C353) * C67) *
               C58 * C3222) *
              C307 +
          (((C102 * C312 + C59 * C354) * C67 +
            (C102 * C316 + C59 * C358) * C57) *
               C58 * C3222 -
           ((C102 * C2973 + C59 * C3003) * C57 +
            (C102 * C2972 + C59 * C3002) * C67) *
               C58 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C3222 -
           ((C129 * C616 + C58 * C692) * C57 +
            (C129 * C612 + C58 * C688) * C67) *
               C59 * C5152) *
              C5072 * C1757 +
          (((C129 * C614 + C58 * C690) * C67 +
            (C129 * C618 + C58 * C694) * C57) *
               C59 * C5152 -
           ((C129 * C73 + C58 * C135) * C57 + (C129 * C69 + C58 * C131) * C67) *
               C59 * C3222) *
              C5072 * C1758 +
          (((C129 * C70 + C58 * C132) * C67 + (C129 * C74 + C58 * C136) * C57) *
               C59 * C3222 -
           ((C129 * C1168 + C58 * C1226) * C57 +
            (C129 * C1167 + C58 * C1225) * C67) *
               C59 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C129 * C68 + C58 * C130) * C67 + (C129 * C72 + C58 * C134) * C57) *
               C59 * C3222 -
           ((C129 * C616 + C58 * C692) * C57 +
            (C129 * C612 + C58 * C688) * C67) *
               C59 * C5152) *
              C306 +
          (((C129 * C1425 + C58 * C1505) * C67 +
            (C129 * C1427 + C58 * C1507) * C57) *
               C59 * C5152 -
           ((C129 * C315 + C58 * C391) * C57 +
            (C129 * C311 + C58 * C387) * C67) *
               C59 * C3222) *
              C307 +
          (((C129 * C312 + C58 * C388) * C67 +
            (C129 * C316 + C58 * C392) * C57) *
               C59 * C3222 -
           ((C129 * C2973 + C58 * C3031) * C57 +
            (C129 * C2972 + C58 * C3030) * C67) *
               C59 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C3222 -
           ((C67 * C654 + C57 * C722) * C59 +
            (C67 * C612 + C57 * C616) * C102) *
               C58 * C5152) *
              C5072 * C1757 +
          (((C67 * C614 + C57 * C618) * C102 +
            (C67 * C656 + C57 * C724) * C59) *
               C58 * C5152 -
           ((C67 * C104 + C57 * C157) * C59 + (C67 * C69 + C57 * C73) * C102) *
               C58 * C3222) *
              C5072 * C1758 +
          (((C67 * C70 + C57 * C74) * C102 + (C67 * C105 + C57 * C158) * C59) *
               C58 * C3222 -
           ((C67 * C1197 + C57 * C1253) * C59 +
            (C67 * C1167 + C57 * C1168) * C102) *
               C58 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C102 + (C67 * C103 + C57 * C156) * C59) *
               C58 * C3222 -
           ((C67 * C654 + C57 * C722) * C59 +
            (C67 * C612 + C57 * C616) * C102) *
               C58 * C5152) *
              C306 +
          (((C67 * C1425 + C57 * C1427) * C102 +
            (C67 * C1467 + C57 * C1543) * C59) *
               C58 * C5152 -
           ((C67 * C353 + C57 * C421) * C59 +
            (C67 * C311 + C57 * C315) * C102) *
               C58 * C3222) *
              C307 +
          (((C67 * C312 + C57 * C316) * C102 +
            (C67 * C354 + C57 * C422) * C59) *
               C58 * C3222 -
           ((C67 * C3002 + C57 * C3058) * C59 +
            (C67 * C2972 + C57 * C2973) * C102) *
               C58 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C3222 -
           (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C5152) *
              C5072 * C1757 +
          ((C178 * C614 + C759 + C759 + C59 * C754) * C57 * C58 * C5152 -
           (C178 * C69 + C185 + C185 + C59 * C180) * C57 * C58 * C3222) *
              C5072 * C1758 +
          ((C178 * C70 + C186 + C186 + C59 * C181) * C57 * C58 * C3222 -
           (C178 * C1167 + C1282 + C1282 + C59 * C1280) * C57 * C58 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C178 * C68 + C184 + C184 + C59 * C179) * C57 * C58 * C3222 -
           (C178 * C612 + C757 + C757 + C59 * C752) * C57 * C58 * C5152) *
              C306 +
          ((C178 * C1425 + C1582 + C1582 + C59 * C1579) * C57 * C58 * C5152 -
           (C178 * C311 + C456 + C456 + C59 * C451) * C57 * C58 * C3222) *
              C307 +
          ((C178 * C312 + C457 + C457 + C59 * C452) * C57 * C58 * C3222 -
           (C178 * C2972 + C3087 + C3087 + C59 * C3085) * C57 * C58 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C129 * C68 + C58 * C130) * C102 +
                      (C129 * C103 + C58 * C205) * C59) *
                         C57 * C3222 -
                     ((C129 * C654 + C58 * C786) * C59 +
                      (C129 * C612 + C58 * C688) * C102) *
                         C57 * C5152) *
                        C5072 * C1757 +
                    (((C129 * C614 + C58 * C690) * C102 +
                      (C129 * C656 + C58 * C788) * C59) *
                         C57 * C5152 -
                     ((C129 * C104 + C58 * C206) * C59 +
                      (C129 * C69 + C58 * C131) * C102) *
                         C57 * C3222) *
                        C5072 * C1758 +
                    (((C129 * C70 + C58 * C132) * C102 +
                      (C129 * C105 + C58 * C207) * C59) *
                         C57 * C3222 -
                     ((C129 * C1197 + C58 * C1308) * C59 +
                      (C129 * C1167 + C58 * C1225) * C102) *
                         C57 * C5152) *
                        C5072 * C1759)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C129 * C68 + C58 * C130) * C102 +
                      (C129 * C103 + C58 * C205) * C59) *
                         C57 * C3222 -
                     ((C129 * C654 + C58 * C786) * C59 +
                      (C129 * C612 + C58 * C688) * C102) *
                         C57 * C5152) *
                        C306 +
                    (((C129 * C1425 + C58 * C1505) * C102 +
                      (C129 * C1467 + C58 * C1617) * C59) *
                         C57 * C5152 -
                     ((C129 * C353 + C58 * C485) * C59 +
                      (C129 * C311 + C58 * C387) * C102) *
                         C57 * C3222) *
                        C307 +
                    (((C129 * C312 + C58 * C388) * C102 +
                      (C129 * C354 + C58 * C486) * C59) *
                         C57 * C3222 -
                     ((C129 * C3002 + C58 * C3113) * C59 +
                      (C129 * C2972 + C58 * C3030) * C102) *
                         C57 * C5152) *
                        C308) *
                   C5053) /
                      (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C3222 -
           ((C67 * C688 + C57 * C816) * C58 +
            (C67 * C612 + C57 * C616) * C129) *
               C59 * C5152) *
              C5072 * C1757 +
          (((C67 * C614 + C57 * C618) * C129 +
            (C67 * C690 + C57 * C818) * C58) *
               C59 * C5152 -
           ((C67 * C131 + C57 * C228) * C58 + (C67 * C69 + C57 * C73) * C129) *
               C59 * C3222) *
              C5072 * C1758 +
          (((C67 * C70 + C57 * C74) * C129 + (C67 * C132 + C57 * C229) * C58) *
               C59 * C3222 -
           ((C67 * C1225 + C57 * C1335) * C58 +
            (C67 * C1167 + C57 * C1168) * C129) *
               C59 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C67 * C68 + C57 * C72) * C129 + (C67 * C130 + C57 * C227) * C58) *
               C59 * C3222 -
           ((C67 * C688 + C57 * C816) * C58 +
            (C67 * C612 + C57 * C616) * C129) *
               C59 * C5152) *
              C306 +
          (((C67 * C1425 + C57 * C1427) * C129 +
            (C67 * C1505 + C57 * C1653) * C58) *
               C59 * C5152 -
           ((C67 * C387 + C57 * C515) * C58 +
            (C67 * C311 + C57 * C315) * C129) *
               C59 * C3222) *
              C307 +
          (((C67 * C312 + C57 * C316) * C129 +
            (C67 * C388 + C57 * C516) * C58) *
               C59 * C3222 -
           ((C67 * C3030 + C57 * C3140) * C58 +
            (C67 * C2972 + C57 * C2973) * C129) *
               C59 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C102 * C68 + C59 * C103) * C129 +
                      (C102 * C130 + C59 * C249) * C58) *
                         C57 * C3222 -
                     ((C102 * C688 + C59 * C846) * C58 +
                      (C102 * C612 + C59 * C654) * C129) *
                         C57 * C5152) *
                        C5072 * C1757 +
                    (((C102 * C614 + C59 * C656) * C129 +
                      (C102 * C690 + C59 * C848) * C58) *
                         C57 * C5152 -
                     ((C102 * C131 + C59 * C250) * C58 +
                      (C102 * C69 + C59 * C104) * C129) *
                         C57 * C3222) *
                        C5072 * C1758 +
                    (((C102 * C70 + C59 * C105) * C129 +
                      (C102 * C132 + C59 * C251) * C58) *
                         C57 * C3222 -
                     ((C102 * C1225 + C59 * C1362) * C58 +
                      (C102 * C1167 + C59 * C1197) * C129) *
                         C57 * C5152) *
                        C5072 * C1759)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C102 * C68 + C59 * C103) * C129 +
                      (C102 * C130 + C59 * C249) * C58) *
                         C57 * C3222 -
                     ((C102 * C688 + C59 * C846) * C58 +
                      (C102 * C612 + C59 * C654) * C129) *
                         C57 * C5152) *
                        C306 +
                    (((C102 * C1425 + C59 * C1467) * C129 +
                      (C102 * C1505 + C59 * C1689) * C58) *
                         C57 * C5152 -
                     ((C102 * C387 + C59 * C545) * C58 +
                      (C102 * C311 + C59 * C353) * C129) *
                         C57 * C3222) *
                        C307 +
                    (((C102 * C312 + C59 * C354) * C129 +
                      (C102 * C388 + C59 * C546) * C58) *
                         C57 * C3222 -
                     ((C102 * C3030 + C59 * C3167) * C58 +
                      (C102 * C2972 + C59 * C3002) * C129) *
                         C57 * C5152) *
                        C308) *
                   C5053) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C3222 -
           (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C5152) *
              C5072 * C1757 +
          ((C271 * C614 + C883 + C883 + C58 * C878) * C59 * C57 * C5152 -
           (C271 * C69 + C278 + C278 + C58 * C273) * C59 * C57 * C3222) *
              C5072 * C1758 +
          ((C271 * C70 + C279 + C279 + C58 * C274) * C59 * C57 * C3222 -
           (C271 * C1167 + C1391 + C1391 + C58 * C1389) * C59 * C57 * C5152) *
              C5072 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C271 * C68 + C277 + C277 + C58 * C272) * C59 * C57 * C3222 -
           (C271 * C612 + C881 + C881 + C58 * C876) * C59 * C57 * C5152) *
              C306 +
          ((C271 * C1425 + C1728 + C1728 + C58 * C1725) * C59 * C57 * C5152 -
           (C271 * C311 + C580 + C580 + C58 * C575) * C59 * C57 * C3222) *
              C307 +
          ((C271 * C312 + C581 + C581 + C58 * C576) * C59 * C57 * C3222 -
           (C271 * C2972 + C3196 + C3196 + C58 * C3194) * C59 * C57 * C5152) *
              C308) *
         C5053) /
            (p * q * std::sqrt(p + q));
}
