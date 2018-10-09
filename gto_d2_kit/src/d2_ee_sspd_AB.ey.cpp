/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sspd_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0012_12(const double ae,
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
    const double C4632 = ae + be;
    const double C4631 = ae * be;
    const double C4630 = xA - xB;
    const double C4639 = yA - yB;
    const double C4642 = zA - zB;
    const double C4645 = p + q;
    const double C4644 = p * q;
    const double C4650 = xP - xQ;
    const double C4649 = bs[2];
    const double C4655 = bs[3];
    const double C4666 = bs[4];
    const double C4685 = yP - yQ;
    const double C4700 = zP - zQ;
    const double C68 = bs[0];
    const double C5093 = ce + de;
    const double C5092 = ce * de;
    const double C5091 = xC - xD;
    const double C5115 = yC - yD;
    const double C5131 = zC - zD;
    const double C57 = std::exp(-(std::pow(C4630, 2) * C4631) / C4632);
    const double C59 = std::exp(-(std::pow(C4639, 2) * C4631) / C4632);
    const double C58 = std::exp(-(std::pow(C4642, 2) * C4631) / C4632);
    const double C4646 = 2 * C4644;
    const double C4658 = C4650 * ae;
    const double C4657 = C4650 * be;
    const double C4654 = std::pow(C4650, 2);
    const double C4688 = C4685 * be;
    const double C4687 = C4650 * C4685;
    const double C4717 = C4685 * ae;
    const double C4716 = C4685 * C4650;
    const double C4730 = std::pow(C4685, 2);
    const double C4703 = C4700 * be;
    const double C4702 = C4650 * C4700;
    const double C4739 = C4685 * C4700;
    const double C4749 = C4700 * ae;
    const double C4748 = C4700 * C4650;
    const double C4762 = C4700 * C4685;
    const double C4771 = std::pow(C4700, 2);
    const double C5095 = 2 * C5093;
    const double C5105 = std::pow(C5093, 2);
    const double C5097 = C5091 * de;
    const double C5096 = C5091 * ce;
    const double C5094 = std::pow(C5091, 2);
    const double C5116 = std::pow(C5115, 2);
    const double C5168 = C5115 * de;
    const double C5167 = C5115 * ce;
    const double C5132 = std::pow(C5131, 2);
    const double C5196 = C5131 * de;
    const double C5195 = C5131 * ce;
    const double C66 = -(2 * ae * be * (xA - xB) * C57) / (ae + be);
    const double C67 =
        -((C57 - (C4630 * 2 * C4631 * C4630 * C57) / C4632) * 2 * C4631) /
        C4632;
    const double C102 = -(2 * C4631 * (yA - yB) * C59) / C4632;
    const double C182 =
        -((C59 - (C4639 * 2 * C4631 * C4639 * C59) / C4632) * 2 * C4631) /
        C4632;
    const double C129 = -(2 * C4631 * (zA - zB) * C58) / C4632;
    const double C275 =
        -((C58 - (C4642 * 2 * C4631 * C4642 * C58) / C4632) * 2 * C4631) /
        C4632;
    const double C4648 = C4646 / C4645;
    const double C80 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C4646 / C4645, 2) -
          (bs[1] * C4646) / C4645) *
         C4631) /
        std::pow(C4632, 2);
    const double C69 = -(C4650 * bs[1] * C4646) / C4645;
    const double C311 = -(C4685 * bs[1] * C4646) / C4645;
    const double C612 = -(C4700 * bs[1] * C4646) / C4645;
    const double C4661 = C4655 * C4658;
    const double C4672 = C4666 * C4658;
    const double C73 = (-(bs[1] * C4658 * C4646) / C4645) / C4632;
    const double C4660 = C4655 * C4657;
    const double C4669 = C4666 * C4657;
    const double C72 = (-(bs[1] * C4657 * C4646) / C4645) / C4632;
    const double C4668 = C4654 * C4666;
    const double C4690 = C4655 * C4688;
    const double C4695 = C4666 * C4688;
    const double C103 = (-(bs[1] * C4688 * C4646) / C4645) / C4632;
    const double C4689 = C4687 * ae;
    const double C4719 = C4655 * C4717;
    const double C4724 = C4666 * C4717;
    const double C156 = (-(bs[1] * C4717 * C4646) / C4645) / C4632;
    const double C4718 = C4716 * ae;
    const double C4732 = C4730 * C4666;
    const double C4705 = C4655 * C4703;
    const double C4710 = C4666 * C4703;
    const double C130 = (-(bs[1] * C4703 * C4646) / C4645) / C4632;
    const double C4704 = C4702 * ae;
    const double C4740 = C4739 * ae;
    const double C4751 = C4655 * C4749;
    const double C4756 = C4666 * C4749;
    const double C227 = (-(bs[1] * C4749 * C4646) / C4645) / C4632;
    const double C4750 = C4748 * ae;
    const double C4763 = C4762 * ae;
    const double C4773 = C4771 * C4666;
    const double C5106 = std::pow(C5095, -1);
    const double C5220 = std::pow(C5095, -2);
    const double C5110 = 2 * C5105;
    const double C5218 = 4 * C5105;
    const double C5098 = C5094 * C5092;
    const double C5117 = C5116 * C5092;
    const double C5133 = C5132 * C5092;
    const double C4651 = std::pow(C4648, 2);
    const double C4656 = -C4648;
    const double C4667 = std::pow(C4648, 4);
    const double C4691 = C4689 * be;
    const double C4720 = C4718 * be;
    const double C4706 = C4704 * be;
    const double C4741 = C4740 * be;
    const double C4752 = C4750 * be;
    const double C4764 = C4763 * be;
    const double C5099 = C5098 / C5093;
    const double C5118 = C5117 / C5093;
    const double C5134 = C5133 / C5093;
    const double C4653 = C4649 * C4651;
    const double C81 =
        (ae * C4651 * C4649 * C4650 * be + be * C4651 * C4649 * C4650 * ae +
         C4650 *
             (C4649 * C4651 +
              std::pow(C4650, 2) * bs[3] * std::pow(-C4648, 3)) *
             C4631) /
        std::pow(C4632, 2);
    const double C107 =
        (C4651 * C4649 * C4650 * (yP - yQ) * ae * be) / std::pow(C4632, 2);
    const double C134 =
        (C4651 * C4649 * C4650 * (zP - zQ) * ae * be) / std::pow(C4632, 2);
    const double C160 =
        (C4651 * C4649 * C4685 * C4650 * ae * be) / std::pow(C4632, 2);
    const double C183 =
        ((std::pow(C4685, 2) * C4649 * C4651 - (bs[1] * C4646) / C4645) *
         C4631) /
        std::pow(C4632, 2);
    const double C205 =
        (C4651 * C4649 * C4685 * C4700 * ae * be) / std::pow(C4632, 2);
    const double C231 =
        (C4651 * C4649 * C4700 * C4650 * ae * be) / std::pow(C4632, 2);
    const double C253 =
        (C4651 * C4649 * C4700 * C4685 * ae * be) / std::pow(C4632, 2);
    const double C276 =
        ((std::pow(C4700, 2) * C4649 * C4651 - (bs[1] * C4646) / C4645) *
         C4631) /
        std::pow(C4632, 2);
    const double C74 = (C4650 * C4651 * C4649 * C4657) / C4632 -
                       (be * bs[1] * C4646) / (C4645 * C4632);
    const double C75 = (C4650 * C4651 * C4649 * C4658) / C4632 -
                       (ae * bs[1] * C4646) / (C4645 * C4632);
    const double C104 = (C4650 * C4651 * C4649 * C4688) / C4632;
    const double C131 = (C4650 * C4651 * C4649 * C4703) / C4632;
    const double C157 = (C4650 * C4651 * C4649 * C4717) / C4632;
    const double C228 = (C4650 * C4651 * C4649 * C4749) / C4632;
    const double C315 = (C4685 * C4651 * C4649 * C4657) / C4632;
    const double C316 = (C4685 * C4651 * C4649 * C4658) / C4632;
    const double C353 = (C4685 * C4651 * C4649 * C4688) / C4632 -
                        (be * bs[1] * C4646) / (C4645 * C4632);
    const double C387 = (C4685 * C4651 * C4649 * C4703) / C4632;
    const double C421 = (C4685 * C4651 * C4649 * C4717) / C4632 -
                        (ae * bs[1] * C4646) / (C4645 * C4632);
    const double C515 = (C4685 * C4651 * C4649 * C4749) / C4632;
    const double C616 = (C4700 * C4651 * C4649 * C4657) / C4632;
    const double C617 = (C4700 * C4651 * C4649 * C4658) / C4632;
    const double C654 = (C4700 * C4651 * C4649 * C4688) / C4632;
    const double C688 = (C4700 * C4651 * C4649 * C4703) / C4632 -
                        (be * bs[1] * C4646) / (C4645 * C4632);
    const double C722 = (C4700 * C4651 * C4649 * C4717) / C4632;
    const double C816 = (C4700 * C4651 * C4649 * C4749) / C4632 -
                        (ae * bs[1] * C4646) / (C4645 * C4632);
    const double C4659 = std::pow(C4656, 3);
    const double C4676 = C4667 * C4672;
    const double C4675 = C4667 * C4669;
    const double C4674 = C4668 * C4667;
    const double C4697 = C4667 * C4695;
    const double C4712 = C4667 * C4710;
    const double C4726 = C4667 * C4724;
    const double C4733 = C4732 * C4667;
    const double C4758 = C4667 * C4756;
    const double C4774 = C4773 * C4667;
    const double C4694 = C4666 * C4691;
    const double C4723 = C4666 * C4720;
    const double C4709 = C4666 * C4706;
    const double C4743 = C4666 * C4741;
    const double C4755 = C4666 * C4752;
    const double C4766 = C4666 * C4764;
    const double C5100 = -C5099;
    const double C5119 = -C5118;
    const double C5135 = -C5134;
    const double C70 = C4653 * C4654 - (bs[1] * C4646) / C4645;
    const double C312 = C4653 * C4730 - (bs[1] * C4646) / C4645;
    const double C313 = C4685 * C4650 * C4653;
    const double C613 = C4653 * C4771 - (bs[1] * C4646) / C4645;
    const double C614 = C4700 * C4650 * C4653;
    const double C1425 = C4700 * C4685 * C4653;
    const double C4663 = C4659 * C4661;
    const double C4662 = C4659 * C4660;
    const double C4665 = C4655 * C4659;
    const double C4692 = C4659 * C4690;
    const double C4707 = C4659 * C4705;
    const double C4721 = C4659 * C4719;
    const double C4753 = C4659 * C4751;
    const double C108 = (ae * C4651 * C4649 * C4685 * be +
                         C4650 * C4659 * C4655 * C4650 * C4685 * ae * be) /
                        std::pow(C4632, 2);
    const double C135 = (ae * C4651 * C4649 * C4700 * be +
                         C4650 * C4659 * C4655 * C4650 * C4700 * ae * be) /
                        std::pow(C4632, 2);
    const double C161 = (be * C4651 * C4649 * C4685 * ae +
                         C4650 * C4659 * C4655 * C4685 * C4650 * ae * be) /
                        std::pow(C4632, 2);
    const double C184 =
        (C4650 * (C4653 + std::pow(C4685, 2) * C4655 * C4659) * C4631) /
        std::pow(C4632, 2);
    const double C206 =
        (C4650 * C4659 * C4655 * C4685 * C4700 * ae * be) / std::pow(C4632, 2);
    const double C207 =
        (C4659 * C4655 * C4741 + C4667 * C4666 * C4741 * C4654) /
        std::pow(C4632, 2);
    const double C232 = (be * C4651 * C4649 * C4700 * ae +
                         C4650 * C4659 * C4655 * C4700 * C4650 * ae * be) /
                        std::pow(C4632, 2);
    const double C254 =
        (C4650 * C4659 * C4655 * C4700 * C4685 * ae * be) / std::pow(C4632, 2);
    const double C255 =
        (C4659 * C4655 * C4764 + C4667 * C4666 * C4764 * C4654) /
        std::pow(C4632, 2);
    const double C277 =
        (C4650 * (C4653 + std::pow(C4700, 2) * C4655 * C4659) * C4631) /
        std::pow(C4632, 2);
    const double C323 =
        (C4685 * (C4653 + C4654 * C4655 * C4659) * C4631) / std::pow(C4632, 2);
    const double C357 =
        (be * C4651 * C4649 * C4658 + C4685 * C4659 * C4655 * C4691) /
        std::pow(C4632, 2);
    const double C391 = (C4685 * C4659 * C4655 * C4706) / std::pow(C4632, 2);
    const double C425 =
        (ae * C4651 * C4649 * C4657 + C4685 * C4659 * C4655 * C4720) /
        std::pow(C4632, 2);
    const double C455 =
        (ae * C4651 * C4649 * C4688 + be * C4651 * C4649 * C4717 +
         C4685 * (C4653 + C4730 * C4655 * C4659) * C4631) /
        std::pow(C4632, 2);
    const double C485 =
        (ae * C4651 * C4649 * C4703 + C4685 * C4659 * C4655 * C4741) /
        std::pow(C4632, 2);
    const double C519 = (C4685 * C4659 * C4655 * C4752) / std::pow(C4632, 2);
    const double C549 =
        (be * C4651 * C4649 * C4749 + C4685 * C4659 * C4655 * C4764) /
        std::pow(C4632, 2);
    const double C579 =
        (C4685 * (C4653 + C4771 * C4655 * C4659) * C4631) / std::pow(C4632, 2);
    const double C624 =
        (C4700 * (C4653 + C4654 * C4655 * C4659) * C4631) / std::pow(C4632, 2);
    const double C658 = (C4700 * C4659 * C4655 * C4691) / std::pow(C4632, 2);
    const double C692 =
        (be * C4651 * C4649 * C4658 + C4700 * C4659 * C4655 * C4706) /
        std::pow(C4632, 2);
    const double C726 = (C4700 * C4659 * C4655 * C4720) / std::pow(C4632, 2);
    const double C756 =
        (C4700 * (C4653 + C4730 * C4655 * C4659) * C4631) / std::pow(C4632, 2);
    const double C786 =
        (be * C4651 * C4649 * C4717 + C4700 * C4659 * C4655 * C4741) /
        std::pow(C4632, 2);
    const double C820 =
        (ae * C4651 * C4649 * C4657 + C4700 * C4659 * C4655 * C4752) /
        std::pow(C4632, 2);
    const double C850 =
        (ae * C4651 * C4649 * C4688 + C4700 * C4659 * C4655 * C4764) /
        std::pow(C4632, 2);
    const double C880 =
        (ae * C4651 * C4649 * C4703 + be * C4651 * C4649 * C4749 +
         C4700 * (C4653 + C4771 * C4655 * C4659) * C4631) /
        std::pow(C4632, 2);
    const double C4679 = C4650 * C4676;
    const double C4906 = C4685 * C4676;
    const double C4678 = C4650 * C4675;
    const double C4911 = C4685 * C4675;
    const double C1432 =
        (ae * C4700 * C4685 * C4675 + be * C4700 * C4685 * C4676 +
         C4650 * C4700 * C4685 *
             (C4666 * C4667 + C4654 * bs[5] * std::pow(C4656, 5)) * C4631) /
        std::pow(C4632, 2);
    const double C4797 = C4650 * C4697;
    const double C4894 = C4685 * C4697;
    const double C4803 = C4650 * C4712;
    const double C4914 = C4685 * C4712;
    const double C4934 = C4700 * C4712;
    const double C4798 = C4650 * C4726;
    const double C4896 = C4685 * C4726;
    const double C4812 = C4650 * C4758;
    const double C4915 = C4685 * C4758;
    const double C4936 = C4700 * C4758;
    const double C4696 = C4667 * C4694;
    const double C4725 = C4667 * C4723;
    const double C4711 = C4667 * C4709;
    const double C4744 = C4667 * C4743;
    const double C4757 = C4667 * C4755;
    const double C4767 = C4667 * C4766;
    const double C5101 = std::exp(C5100);
    const double C5120 = std::exp(C5119);
    const double C5136 = std::exp(C5135);
    const double C77 =
        (C4651 * C4649 * C4658 + C4650 * (C4650 * C4663 + C4653 * ae) +
         C4650 * C4653 * ae) /
        C4632;
    const double C318 = (C4651 * C4649 * C4658 + C4663 * C4730) / C4632;
    const double C320 = (C4685 * (C4650 * C4663 + C4653 * ae)) / C4632;
    const double C619 = (C4651 * C4649 * C4658 + C4663 * C4771) / C4632;
    const double C621 = (C4700 * (C4650 * C4663 + C4653 * ae)) / C4632;
    const double C1428 = (C4700 * C4685 * C4663) / C4632;
    const double C1993 =
        (2 * C4685 * C4663 + C4685 * (C4663 + C4676 * C4730)) / C4632;
    const double C2974 = (C4700 * (C4663 + C4676 * C4730)) / C4632;
    const double C3690 =
        (2 * C4700 * C4663 + C4700 * (C4663 + C4676 * C4771)) / C4632;
    const double C82 =
        ((C4653 + C4654 * C4655 * C4659) * C4631 +
         ae * (C4650 * C4662 + C4653 * be) + be * (C4650 * C4663 + C4653 * ae) +
         C4650 * (ae * C4662 + be * C4663 +
                  C4650 * (C4655 * C4659 + C4654 * bs[4] * std::pow(C4648, 4)) *
                      C4631)) /
        std::pow(C4632, 2);
    const double C76 =
        (C4651 * C4649 * C4657 + C4650 * (C4650 * C4662 + C4653 * be) +
         C4650 * C4653 * be) /
        C4632;
    const double C317 = (C4651 * C4649 * C4657 + C4662 * C4730) / C4632;
    const double C319 = (C4685 * (C4650 * C4662 + C4653 * be)) / C4632;
    const double C618 = (C4651 * C4649 * C4657 + C4662 * C4771) / C4632;
    const double C620 = (C4700 * (C4650 * C4662 + C4653 * be)) / C4632;
    const double C1427 = (C4700 * C4685 * C4662) / C4632;
    const double C1992 =
        (2 * C4685 * C4662 + C4685 * (C4662 + C4675 * C4730)) / C4632;
    const double C2973 = (C4700 * (C4662 + C4675 * C4730)) / C4632;
    const double C3689 =
        (2 * C4700 * C4662 + C4700 * (C4662 + C4675 * C4771)) / C4632;
    const double C4673 = C4665 * ae;
    const double C4671 = C4650 * C4665;
    const double C4670 = C4665 * be;
    const double C4677 = C4665 + C4674;
    const double C4734 = C4665 + C4733;
    const double C4775 = C4665 + C4774;
    const double C4895 = C4685 * C4665;
    const double C4935 = C4700 * C4665;
    const double C185 = ((C4653 + C4730 * C4655 * C4659) * C4631 +
                         (C4665 + C4730 * C4666 * C4667) * C4631 * C4654) /
                        std::pow(C4632, 2);
    const double C278 = ((C4653 + C4771 * C4655 * C4659) * C4631 +
                         (C4665 + C4771 * C4666 * C4667) * C4631 * C4654) /
                        std::pow(C4632, 2);
    const double C71 = 2 * C4650 * C4653 + C4650 * (C4653 + C4665 * C4654);
    const double C915 = C4685 * (C4653 + C4665 * C4654);
    const double C1167 = C4700 * (C4653 + C4665 * C4654);
    const double C1991 = 2 * C4685 * C4653 + C4685 * (C4653 + C4665 * C4730);
    const double C2972 = C4700 * (C4653 + C4665 * C4730);
    const double C3688 = 2 * C4700 * C4653 + C4700 * (C4653 + C4665 * C4771);
    const double C109 = (C4659 * C4655 * C4691 + ae * C4650 * C4692 +
                         C4650 * (ae * C4692 + C4650 * C4667 * C4666 * C4691)) /
                        std::pow(C4632, 2);
    const double C105 = (C4651 * C4649 * C4688 + C4692 * C4654) / C4632;
    const double C106 =
        (2 * C4650 * C4692 + C4650 * (C4692 + C4697 * C4654)) / C4632;
    const double C354 =
        (C4651 * C4649 * C4688 + C4685 * (C4685 * C4692 + C4653 * be) +
         C4685 * C4653 * be) /
        C4632;
    const double C355 = (C4685 * C4650 * C4692 + C4650 * C4653 * be) / C4632;
    const double C655 = (C4651 * C4649 * C4688 + C4692 * C4771) / C4632;
    const double C656 = (C4700 * C4650 * C4692) / C4632;
    const double C945 =
        (C4685 * (C4692 + C4697 * C4654) + (C4653 + C4665 * C4654) * be) /
        C4632;
    const double C1197 = (C4700 * (C4692 + C4697 * C4654)) / C4632;
    const double C1467 = (C4700 * (C4685 * C4692 + C4653 * be)) / C4632;
    const double C3710 =
        (2 * C4700 * C4692 + C4700 * (C4692 + C4697 * C4771)) / C4632;
    const double C136 = (C4659 * C4655 * C4706 + ae * C4650 * C4707 +
                         C4650 * (ae * C4707 + C4650 * C4667 * C4666 * C4706)) /
                        std::pow(C4632, 2);
    const double C132 = (C4651 * C4649 * C4703 + C4707 * C4654) / C4632;
    const double C133 =
        (2 * C4650 * C4707 + C4650 * (C4707 + C4712 * C4654)) / C4632;
    const double C388 = (C4651 * C4649 * C4703 + C4707 * C4730) / C4632;
    const double C389 = (C4685 * C4650 * C4707) / C4632;
    const double C689 =
        (C4651 * C4649 * C4703 + C4700 * (C4700 * C4707 + C4653 * be) +
         C4700 * C4653 * be) /
        C4632;
    const double C690 = (C4700 * C4650 * C4707 + C4650 * C4653 * be) / C4632;
    const double C973 = (C4685 * (C4707 + C4712 * C4654)) / C4632;
    const double C1225 =
        (C4700 * (C4707 + C4712 * C4654) + (C4653 + C4665 * C4654) * be) /
        C4632;
    const double C1505 = (C4700 * C4685 * C4707 + C4685 * C4653 * be) / C4632;
    const double C2033 =
        (2 * C4685 * C4707 + C4685 * (C4707 + C4712 * C4730)) / C4632;
    const double C3030 =
        (C4700 * (C4707 + C4712 * C4730) + (C4653 + C4665 * C4730) * be) /
        C4632;
    const double C162 = (C4659 * C4655 * C4720 + be * C4650 * C4721 +
                         C4650 * (be * C4721 + C4650 * C4667 * C4666 * C4720)) /
                        std::pow(C4632, 2);
    const double C158 = (C4651 * C4649 * C4717 + C4721 * C4654) / C4632;
    const double C159 =
        (2 * C4650 * C4721 + C4650 * (C4721 + C4726 * C4654)) / C4632;
    const double C422 =
        (C4651 * C4649 * C4717 + C4685 * (C4685 * C4721 + C4653 * ae) +
         C4685 * C4653 * ae) /
        C4632;
    const double C423 = (C4685 * C4650 * C4721 + C4650 * C4653 * ae) / C4632;
    const double C723 = (C4651 * C4649 * C4717 + C4721 * C4771) / C4632;
    const double C724 = (C4700 * C4650 * C4721) / C4632;
    const double C1001 =
        (C4685 * (C4721 + C4726 * C4654) + (C4653 + C4665 * C4654) * ae) /
        C4632;
    const double C1253 = (C4700 * (C4721 + C4726 * C4654)) / C4632;
    const double C1543 = (C4700 * (C4685 * C4721 + C4653 * ae)) / C4632;
    const double C3750 =
        (2 * C4700 * C4721 + C4700 * (C4721 + C4726 * C4771)) / C4632;
    const double C233 = (C4659 * C4655 * C4752 + be * C4650 * C4753 +
                         C4650 * (be * C4753 + C4650 * C4667 * C4666 * C4752)) /
                        std::pow(C4632, 2);
    const double C229 = (C4651 * C4649 * C4749 + C4753 * C4654) / C4632;
    const double C230 =
        (2 * C4650 * C4753 + C4650 * (C4753 + C4758 * C4654)) / C4632;
    const double C516 = (C4651 * C4649 * C4749 + C4753 * C4730) / C4632;
    const double C517 = (C4685 * C4650 * C4753) / C4632;
    const double C817 =
        (C4651 * C4649 * C4749 + C4700 * (C4700 * C4753 + C4653 * ae) +
         C4700 * C4653 * ae) /
        C4632;
    const double C818 = (C4700 * C4650 * C4753 + C4650 * C4653 * ae) / C4632;
    const double C1083 = (C4685 * (C4753 + C4758 * C4654)) / C4632;
    const double C1335 =
        (C4700 * (C4753 + C4758 * C4654) + (C4653 + C4665 * C4654) * ae) /
        C4632;
    const double C1653 = (C4700 * C4685 * C4753 + C4685 * C4653 * ae) / C4632;
    const double C2111 =
        (2 * C4685 * C4753 + C4685 * (C4753 + C4758 * C4730)) / C4632;
    const double C3140 =
        (C4700 * (C4753 + C4758 * C4730) + (C4653 + C4665 * C4730) * ae) /
        C4632;
    const double C2179 = (C4685 * C4663 + C4906 * C4771) / C4632;
    const double C2178 = (C4685 * C4662 + C4911 * C4771) / C4632;
    const double C657 = (C4650 * C4692 + C4797 * C4771) / C4632;
    const double C390 = (C4650 * C4707 + C4803 * C4730) / C4632;
    const double C1582 =
        (ae * C4700 * C4797 + be * C4700 * C4798 +
         C4685 * C4700 * C4650 *
             (C4666 * C4667 + C4730 * bs[5] * std::pow(C4656, 5)) * C4631) /
        std::pow(C4632, 2);
    const double C725 = (C4650 * C4721 + C4798 * C4771) / C4632;
    const double C1728 =
        (ae * C4685 * C4803 + be * C4685 * C4812 +
         C4700 * C4685 * C4650 *
             (C4666 * C4667 + C4771 * bs[5] * std::pow(C4656, 5)) * C4631) /
        std::pow(C4632, 2);
    const double C518 = (C4650 * C4753 + C4812 * C4730) / C4632;
    const double C110 =
        (2 * (ae * C4692 + C4650 * C4696) + ae * (C4692 + C4697 * C4654) +
         C4650 * (C4696 + ae * C4650 * C4697 +
                  C4650 * (ae * C4697 +
                           C4650 * std::pow(C4656, 5) * bs[5] * C4691))) /
        std::pow(C4632, 2);
    const double C358 = (C4659 * C4655 * C4691 + be * C4685 * C4663 +
                         C4685 * (be * C4663 + C4685 * C4696)) /
                        std::pow(C4632, 2);
    const double C359 = (be * (C4650 * C4663 + C4653 * ae) +
                         C4685 * (ae * C4692 + C4650 * C4696)) /
                        std::pow(C4632, 2);
    const double C659 =
        (C4659 * C4655 * C4691 + C4696 * C4771) / std::pow(C4632, 2);
    const double C660 =
        (C4700 * (ae * C4692 + C4650 * C4696)) / std::pow(C4632, 2);
    const double C661 =
        (ae * C4692 + C4650 * C4696 +
         (ae * C4697 + C4650 * std::pow(C4656, 5) * bs[5] * C4691) * C4771) /
        std::pow(C4632, 2);
    const double C1198 =
        (C4700 *
         (C4696 + ae * C4797 +
          C4650 * (ae * C4697 + C4650 * std::pow(C4656, 5) * bs[5] * C4691))) /
        std::pow(C4632, 2);
    const double C1469 =
        (C4700 * (be * C4663 + C4685 * C4696)) / std::pow(C4632, 2);
    const double C2014 =
        (2 * (be * C4663 + C4685 * C4696) + be * (C4663 + C4676 * C4730) +
         C4685 * (C4696 + be * C4685 * C4676 +
                  C4685 * (be * C4676 +
                           C4685 * std::pow(C4656, 5) * bs[5] * C4691))) /
        std::pow(C4632, 2);
    const double C2208 =
        (be * C4663 + C4685 * C4696 +
         (be * C4676 + C4685 * std::pow(C4656, 5) * bs[5] * C4691) * C4771) /
        std::pow(C4632, 2);
    const double C3003 =
        (C4700 *
         (C4696 + be * C4906 +
          C4685 * (be * C4676 + C4685 * std::pow(C4656, 5) * bs[5] * C4691))) /
        std::pow(C4632, 2);
    const double C3711 =
        (2 * C4700 * C4696 +
         C4700 * (C4696 + std::pow(C4656, 5) * bs[5] * C4691 * C4771)) /
        std::pow(C4632, 2);
    const double C163 =
        (2 * (be * C4721 + C4650 * C4725) + be * (C4721 + C4726 * C4654) +
         C4650 * (C4725 + be * C4650 * C4726 +
                  C4650 * (be * C4726 +
                           C4650 * std::pow(C4656, 5) * bs[5] * C4720))) /
        std::pow(C4632, 2);
    const double C426 = (C4659 * C4655 * C4720 + ae * C4685 * C4662 +
                         C4685 * (ae * C4662 + C4685 * C4725)) /
                        std::pow(C4632, 2);
    const double C427 = (ae * (C4650 * C4662 + C4653 * be) +
                         C4685 * (be * C4721 + C4650 * C4725)) /
                        std::pow(C4632, 2);
    const double C727 =
        (C4659 * C4655 * C4720 + C4725 * C4771) / std::pow(C4632, 2);
    const double C728 =
        (C4700 * (be * C4721 + C4650 * C4725)) / std::pow(C4632, 2);
    const double C729 =
        (be * C4721 + C4650 * C4725 +
         (be * C4726 + C4650 * std::pow(C4656, 5) * bs[5] * C4720) * C4771) /
        std::pow(C4632, 2);
    const double C1254 =
        (C4700 *
         (C4725 + be * C4798 +
          C4650 * (be * C4726 + C4650 * std::pow(C4656, 5) * bs[5] * C4720))) /
        std::pow(C4632, 2);
    const double C1545 =
        (ae * C4700 * C4662 + C4685 * C4700 * C4725) / std::pow(C4632, 2);
    const double C2054 =
        (2 * (ae * C4662 + C4685 * C4725) + ae * (C4662 + C4675 * C4730) +
         C4685 * (C4725 + ae * C4685 * C4675 +
                  C4685 * (ae * C4675 +
                           C4685 * std::pow(C4656, 5) * bs[5] * C4720))) /
        std::pow(C4632, 2);
    const double C2264 =
        (ae * (C4662 + C4675 * C4771) +
         C4685 * (C4725 + std::pow(C4656, 5) * bs[5] * C4720 * C4771)) /
        std::pow(C4632, 2);
    const double C3059 =
        (C4700 * C4725 + ae * C4700 * C4911 +
         C4685 * (ae * C4700 * C4675 +
                  C4685 * C4700 * std::pow(C4656, 5) * bs[5] * C4720)) /
        std::pow(C4632, 2);
    const double C3751 =
        (2 * C4700 * C4725 +
         C4700 * (C4725 + std::pow(C4656, 5) * bs[5] * C4720 * C4771)) /
        std::pow(C4632, 2);
    const double C137 =
        (2 * (ae * C4707 + C4650 * C4711) + ae * (C4707 + C4712 * C4654) +
         C4650 * (C4711 + ae * C4650 * C4712 +
                  C4650 * (ae * C4712 +
                           C4650 * std::pow(C4656, 5) * bs[5] * C4706))) /
        std::pow(C4632, 2);
    const double C392 =
        (C4659 * C4655 * C4706 + C4711 * C4730) / std::pow(C4632, 2);
    const double C393 =
        (C4685 * (ae * C4707 + C4650 * C4711)) / std::pow(C4632, 2);
    const double C394 =
        (ae * C4707 + C4650 * C4711 +
         (ae * C4712 + C4650 * std::pow(C4656, 5) * bs[5] * C4706) * C4730) /
        std::pow(C4632, 2);
    const double C693 = (C4659 * C4655 * C4706 + be * C4700 * C4663 +
                         C4700 * (be * C4663 + C4700 * C4711)) /
                        std::pow(C4632, 2);
    const double C694 = (be * (C4650 * C4663 + C4653 * ae) +
                         C4700 * (ae * C4707 + C4650 * C4711)) /
                        std::pow(C4632, 2);
    const double C974 =
        (C4685 *
         (C4711 + ae * C4803 +
          C4650 * (ae * C4712 + C4650 * std::pow(C4656, 5) * bs[5] * C4706))) /
        std::pow(C4632, 2);
    const double C1507 =
        (be * C4685 * C4663 + C4700 * C4685 * C4711) / std::pow(C4632, 2);
    const double C2034 =
        (2 * C4685 * C4711 +
         C4685 * (C4711 + std::pow(C4656, 5) * bs[5] * C4706 * C4730)) /
        std::pow(C4632, 2);
    const double C2236 =
        (C4685 * C4711 + be * C4700 * C4906 +
         C4700 * (be * C4906 +
                  C4700 * C4685 * std::pow(C4656, 5) * bs[5] * C4706)) /
        std::pow(C4632, 2);
    const double C3031 =
        (be * (C4663 + C4676 * C4730) +
         C4700 * (C4711 + std::pow(C4656, 5) * bs[5] * C4706 * C4730)) /
        std::pow(C4632, 2);
    const double C3731 =
        (2 * (be * C4663 + C4700 * C4711) + be * (C4663 + C4676 * C4771) +
         C4700 * (C4711 + be * C4700 * C4676 +
                  C4700 * (be * C4676 +
                           C4700 * std::pow(C4656, 5) * bs[5] * C4706))) /
        std::pow(C4632, 2);
    const double C208 =
        (2 * C4650 * C4744 +
         C4650 * (C4744 + std::pow(C4656, 5) * bs[5] * C4741 * C4654)) /
        std::pow(C4632, 2);
    const double C486 = (C4659 * C4655 * C4741 + ae * C4685 * C4707 +
                         C4685 * (ae * C4707 + C4685 * C4744)) /
                        std::pow(C4632, 2);
    const double C487 =
        (ae * C4650 * C4707 + C4685 * C4650 * C4744) / std::pow(C4632, 2);
    const double C488 =
        (C4650 * C4744 + ae * C4685 * C4803 +
         C4685 * (ae * C4803 +
                  C4685 * C4650 * std::pow(C4656, 5) * bs[5] * C4741)) /
        std::pow(C4632, 2);
    const double C787 = (C4659 * C4655 * C4741 + be * C4700 * C4721 +
                         C4700 * (be * C4721 + C4700 * C4744)) /
                        std::pow(C4632, 2);
    const double C788 =
        (be * C4650 * C4721 + C4700 * C4650 * C4744) / std::pow(C4632, 2);
    const double C789 =
        (C4650 * C4744 + be * C4700 * C4798 +
         C4700 * (be * C4798 +
                  C4700 * C4650 * std::pow(C4656, 5) * bs[5] * C4741)) /
        std::pow(C4632, 2);
    const double C1056 =
        (ae * (C4707 + C4712 * C4654) +
         C4685 * (C4744 + std::pow(C4656, 5) * bs[5] * C4741 * C4654)) /
        std::pow(C4632, 2);
    const double C1308 =
        (be * (C4721 + C4726 * C4654) +
         C4700 * (C4744 + std::pow(C4656, 5) * bs[5] * C4741 * C4654)) /
        std::pow(C4632, 2);
    const double C1617 = (ae * (C4700 * C4707 + C4653 * be) +
                          C4685 * (be * C4721 + C4700 * C4744)) /
                         std::pow(C4632, 2);
    const double C2092 =
        (2 * (ae * C4707 + C4685 * C4744) + ae * (C4707 + C4712 * C4730) +
         C4685 * (C4744 + ae * C4685 * C4712 +
                  C4685 * (ae * C4712 +
                           C4685 * std::pow(C4656, 5) * bs[5] * C4741))) /
        std::pow(C4632, 2);
    const double C3789 =
        (2 * (be * C4721 + C4700 * C4744) + be * (C4721 + C4726 * C4771) +
         C4700 * (C4744 + be * C4700 * C4726 +
                  C4700 * (be * C4726 +
                           C4700 * std::pow(C4656, 5) * bs[5] * C4741))) /
        std::pow(C4632, 2);
    const double C234 =
        (2 * (be * C4753 + C4650 * C4757) + be * (C4753 + C4758 * C4654) +
         C4650 * (C4757 + be * C4650 * C4758 +
                  C4650 * (be * C4758 +
                           C4650 * std::pow(C4656, 5) * bs[5] * C4752))) /
        std::pow(C4632, 2);
    const double C520 =
        (C4659 * C4655 * C4752 + C4757 * C4730) / std::pow(C4632, 2);
    const double C521 =
        (C4685 * (be * C4753 + C4650 * C4757)) / std::pow(C4632, 2);
    const double C522 =
        (be * C4753 + C4650 * C4757 +
         (be * C4758 + C4650 * std::pow(C4656, 5) * bs[5] * C4752) * C4730) /
        std::pow(C4632, 2);
    const double C821 = (C4659 * C4655 * C4752 + ae * C4700 * C4662 +
                         C4700 * (ae * C4662 + C4700 * C4757)) /
                        std::pow(C4632, 2);
    const double C822 = (ae * (C4650 * C4662 + C4653 * be) +
                         C4700 * (be * C4753 + C4650 * C4757)) /
                        std::pow(C4632, 2);
    const double C1084 =
        (C4685 *
         (C4757 + be * C4812 +
          C4650 * (be * C4758 + C4650 * std::pow(C4656, 5) * bs[5] * C4752))) /
        std::pow(C4632, 2);
    const double C1655 =
        (ae * C4685 * C4662 + C4700 * C4685 * C4757) / std::pow(C4632, 2);
    const double C2112 =
        (2 * C4685 * C4757 +
         C4685 * (C4757 + std::pow(C4656, 5) * bs[5] * C4752 * C4730)) /
        std::pow(C4632, 2);
    const double C2346 =
        (C4685 * C4757 + ae * C4700 * C4911 +
         C4700 * (ae * C4911 +
                  C4700 * C4685 * std::pow(C4656, 5) * bs[5] * C4752)) /
        std::pow(C4632, 2);
    const double C3141 =
        (ae * (C4662 + C4675 * C4730) +
         C4700 * (C4757 + std::pow(C4656, 5) * bs[5] * C4752 * C4730)) /
        std::pow(C4632, 2);
    const double C3809 =
        (2 * (ae * C4662 + C4700 * C4757) + ae * (C4662 + C4675 * C4771) +
         C4700 * (C4757 + ae * C4700 * C4675 +
                  C4700 * (ae * C4675 +
                           C4700 * std::pow(C4656, 5) * bs[5] * C4752))) /
        std::pow(C4632, 2);
    const double C256 =
        (2 * C4650 * C4767 +
         C4650 * (C4767 + std::pow(C4656, 5) * bs[5] * C4764 * C4654)) /
        std::pow(C4632, 2);
    const double C550 = (C4659 * C4655 * C4764 + be * C4685 * C4753 +
                         C4685 * (be * C4753 + C4685 * C4767)) /
                        std::pow(C4632, 2);
    const double C551 =
        (be * C4650 * C4753 + C4685 * C4650 * C4767) / std::pow(C4632, 2);
    const double C552 =
        (C4650 * C4767 + be * C4685 * C4812 +
         C4685 * (be * C4812 +
                  C4685 * C4650 * std::pow(C4656, 5) * bs[5] * C4764)) /
        std::pow(C4632, 2);
    const double C851 = (C4659 * C4655 * C4764 + ae * C4700 * C4692 +
                         C4700 * (ae * C4692 + C4700 * C4767)) /
                        std::pow(C4632, 2);
    const double C852 =
        (ae * C4650 * C4692 + C4700 * C4650 * C4767) / std::pow(C4632, 2);
    const double C853 =
        (C4650 * C4767 + ae * C4700 * C4797 +
         C4700 * (ae * C4797 +
                  C4700 * C4650 * std::pow(C4656, 5) * bs[5] * C4764)) /
        std::pow(C4632, 2);
    const double C1111 =
        (be * (C4753 + C4758 * C4654) +
         C4685 * (C4767 + std::pow(C4656, 5) * bs[5] * C4764 * C4654)) /
        std::pow(C4632, 2);
    const double C1363 =
        (ae * (C4692 + C4697 * C4654) +
         C4700 * (C4767 + std::pow(C4656, 5) * bs[5] * C4764 * C4654)) /
        std::pow(C4632, 2);
    const double C1691 = (ae * (C4685 * C4692 + C4653 * be) +
                          C4700 * (be * C4753 + C4685 * C4767)) /
                         std::pow(C4632, 2);
    const double C2131 =
        (2 * (be * C4753 + C4685 * C4767) + be * (C4753 + C4758 * C4730) +
         C4685 * (C4767 + be * C4685 * C4758 +
                  C4685 * (be * C4758 +
                           C4685 * std::pow(C4656, 5) * bs[5] * C4764))) /
        std::pow(C4632, 2);
    const double C3828 =
        (2 * (ae * C4692 + C4700 * C4767) + ae * (C4692 + C4697 * C4771) +
         C4700 * (C4767 + ae * C4700 * C4697 +
                  C4700 * (ae * C4697 +
                           C4700 * std::pow(C4656, 5) * bs[5] * C4764))) /
        std::pow(C4632, 2);
    const double C5102 = C5101 * C5096;
    const double C5107 = C5106 * C5101;
    const double C5215 = C5101 * C5097;
    const double C5212 = C5101 / C5095;
    const double C1759 = C5220 * C5101;
    const double C5169 = C5120 * C5167;
    const double C5172 = C5106 * C5120;
    const double C5224 = C5120 * C5168;
    const double C5219 = C5120 / C5095;
    const double C308 = C5220 * C5120;
    const double C5197 = C5136 * C5195;
    const double C5200 = C5106 * C5136;
    const double C5228 = C5136 * C5196;
    const double C5221 = C5136 / C5095;
    const double C611 = C5220 * C5136;
    const double C4682 = C4679 + C4673;
    const double C4898 = C4896 + C4673;
    const double C4938 = C4936 + C4673;
    const double C1618 =
        (ae * (C4700 * C4803 + C4671 * be) +
         C4685 * (be * C4798 +
                  C4700 * C4650 * std::pow(C4656, 5) * bs[5] * C4741)) /
        std::pow(C4632, 2);
    const double C1692 =
        (ae * (C4685 * C4797 + C4671 * be) +
         C4700 * (be * C4812 +
                  C4685 * C4650 * std::pow(C4656, 5) * bs[5] * C4764)) /
        std::pow(C4632, 2);
    const double C356 = (C4650 * C4692 + C4685 * (C4685 * C4797 + C4671 * be) +
                         C4685 * C4671 * be) /
                        C4632;
    const double C424 = (C4650 * C4721 + C4685 * (C4685 * C4798 + C4671 * ae) +
                         C4685 * C4671 * ae) /
                        C4632;
    const double C691 = (C4650 * C4707 + C4700 * (C4700 * C4803 + C4671 * be) +
                         C4700 * C4671 * be) /
                        C4632;
    const double C819 = (C4650 * C4753 + C4700 * (C4700 * C4812 + C4671 * ae) +
                         C4700 * C4671 * ae) /
                        C4632;
    const double C1468 = (C4700 * (C4685 * C4797 + C4671 * be)) / C4632;
    const double C1506 = (C4700 * C4685 * C4803 + C4685 * C4671 * be) / C4632;
    const double C1544 = (C4700 * (C4685 * C4798 + C4671 * ae)) / C4632;
    const double C1654 = (C4700 * C4685 * C4812 + C4685 * C4671 * ae) / C4632;
    const double C314 = C4650 * C4653 + C4671 * C4730;
    const double C615 = C4650 * C4653 + C4671 * C4771;
    const double C1426 = C4700 * C4685 * C4671;
    const double C4681 = C4678 + C4670;
    const double C4897 = C4894 + C4670;
    const double C4937 = C4934 + C4670;
    const double C2318 =
        (ae * (C4707 + C4700 * (C4700 * C4712 + C4670) + C4700 * C4665 * be) +
         C4685 * (C4744 + be * C4700 * C4726 +
                  C4700 * (be * C4726 +
                           C4700 * std::pow(C4656, 5) * bs[5] * C4741))) /
        std::pow(C4632, 2);
    const double C4680 = C4677 * C4631;
    const double C4735 = C4734 * C4631;
    const double C4776 = C4775 * C4631;
    const double C3113 =
        (be * C4721 + C4700 * C4744 + ae * (C4700 * C4914 + C4895 * be) +
         C4685 * (ae * (C4700 * C4712 + C4670) +
                  C4685 * (be * C4726 +
                           C4700 * std::pow(C4656, 5) * bs[5] * C4741))) /
        std::pow(C4632, 2);
    const double C2235 = (C4685 * C4707 + C4700 * (C4700 * C4914 + C4895 * be) +
                          C4700 * C4895 * be) /
                         C4632;
    const double C2345 = (C4685 * C4753 + C4700 * (C4700 * C4915 + C4895 * ae) +
                          C4700 * C4895 * ae) /
                         C4632;
    const double C2177 = C4685 * C4653 + C4895 * C4771;
    const double C5216 = C5102 / C5110;
    const double C5214 = C5102 / C5093;
    const double C5213 = C5102 * C5097;
    const double C1758 = (2 * C5106 * C5102) / C5093;
    const double C5217 = C5107 * C5097;
    const double C65 = C5107 / C5218;
    const double C914 = C5107 / C5095;
    const double C5233 = C5215 / C5093;
    const double C1757 = (C5101 * std::pow(C5096, 2)) / C5105 + C5212;
    const double C5226 = C5169 / C5110;
    const double C5225 = C5169 * C5168;
    const double C5222 = C5169 / C5093;
    const double C307 = (2 * C5106 * C5169) / C5093;
    const double C5227 = C5172 * C5168;
    const double C1989 = C5172 / C5218;
    const double C2429 = C5172 / C5095;
    const double C5235 = C5224 / C5093;
    const double C306 = (C5120 * std::pow(C5167, 2)) / C5105 + C5219;
    const double C5230 = C5197 / C5110;
    const double C5229 = C5197 * C5196;
    const double C5223 = C5197 / C5093;
    const double C610 = (2 * C5106 * C5197) / C5093;
    const double C5231 = C5200 * C5196;
    const double C3687 = C5200 / C5218;
    const double C4182 = C5200 / C5095;
    const double C5238 = C5228 / C5093;
    const double C609 = (C5136 * std::pow(C5195, 2)) / C5105 + C5221;
    const double C360 =
        (ae * C4692 + C4650 * C4696 + be * C4685 * C4682 +
         C4685 *
             (be * C4682 + C4685 * (ae * C4697 + C4650 * std::pow(C4656, 5) *
                                                     bs[5] * C4691))) /
        std::pow(C4632, 2);
    const double C695 =
        (ae * C4707 + C4650 * C4711 + be * C4700 * C4682 +
         C4700 *
             (be * C4682 + C4700 * (ae * C4712 + C4650 * std::pow(C4656, 5) *
                                                     bs[5] * C4706))) /
        std::pow(C4632, 2);
    const double C946 =
        (be * (C4663 + C4650 * C4682 + C4671 * ae) +
         C4685 * (C4696 + ae * C4797 +
                  C4650 * (ae * C4697 +
                           C4650 * std::pow(C4656, 5) * bs[5] * C4691))) /
        std::pow(C4632, 2);
    const double C1226 =
        (be * (C4663 + C4650 * C4682 + C4671 * ae) +
         C4700 * (C4711 + ae * C4803 +
                  C4650 * (ae * C4712 +
                           C4650 * std::pow(C4656, 5) * bs[5] * C4706))) /
        std::pow(C4632, 2);
    const double C1470 =
        (C4700 *
         (be * C4682 +
          C4685 * (ae * C4697 + C4650 * std::pow(C4656, 5) * bs[5] * C4691))) /
        std::pow(C4632, 2);
    const double C1508 =
        (be * C4685 * C4682 +
         C4700 * C4685 *
             (ae * C4712 + C4650 * std::pow(C4656, 5) * bs[5] * C4706)) /
        std::pow(C4632, 2);
    const double C79 = (2 * (C4650 * C4663 + C4653 * ae) +
                        C4650 * (C4663 + C4650 * C4682 + C4671 * ae) +
                        (C4653 + C4665 * C4654) * ae) /
                       C4632;
    const double C322 = (C4650 * C4663 + C4653 * ae + C4682 * C4730) / C4632;
    const double C623 = (C4650 * C4663 + C4653 * ae + C4682 * C4771) / C4632;
    const double C917 = (C4685 * (C4663 + C4650 * C4682 + C4671 * ae)) / C4632;
    const double C1169 = (C4700 * (C4663 + C4650 * C4682 + C4671 * ae)) / C4632;
    const double C1430 = (C4700 * C4685 * C4682) / C4632;
    const double C2053 = (2 * (C4685 * C4721 + C4653 * ae) +
                          C4685 * (C4721 + C4685 * C4898 + C4895 * ae) +
                          (C4653 + C4665 * C4730) * ae) /
                         C4632;
    const double C2263 = (C4685 * C4721 + C4653 * ae + C4898 * C4771) / C4632;
    const double C3058 = (C4700 * (C4721 + C4685 * C4898 + C4895 * ae)) / C4632;
    const double C3808 = (2 * (C4700 * C4753 + C4653 * ae) +
                          C4700 * (C4753 + C4700 * C4938 + C4935 * ae) +
                          (C4653 + C4665 * C4771) * ae) /
                         C4632;
    const double C428 =
        (be * C4721 + C4650 * C4725 + ae * C4685 * C4681 +
         C4685 *
             (ae * C4681 + C4685 * (be * C4726 + C4650 * std::pow(C4656, 5) *
                                                     bs[5] * C4720))) /
        std::pow(C4632, 2);
    const double C823 =
        (be * C4753 + C4650 * C4757 + ae * C4700 * C4681 +
         C4700 *
             (ae * C4681 + C4700 * (be * C4758 + C4650 * std::pow(C4656, 5) *
                                                     bs[5] * C4752))) /
        std::pow(C4632, 2);
    const double C1002 =
        (ae * (C4662 + C4650 * C4681 + C4671 * be) +
         C4685 * (C4725 + be * C4798 +
                  C4650 * (be * C4726 +
                           C4650 * std::pow(C4656, 5) * bs[5] * C4720))) /
        std::pow(C4632, 2);
    const double C1336 =
        (ae * (C4662 + C4650 * C4681 + C4671 * be) +
         C4700 * (C4757 + be * C4812 +
                  C4650 * (be * C4758 +
                           C4650 * std::pow(C4656, 5) * bs[5] * C4752))) /
        std::pow(C4632, 2);
    const double C1546 =
        (ae * C4700 * C4681 +
         C4685 * C4700 *
             (be * C4726 + C4650 * std::pow(C4656, 5) * bs[5] * C4720)) /
        std::pow(C4632, 2);
    const double C1656 =
        (ae * C4685 * C4681 +
         C4700 * C4685 *
             (be * C4758 + C4650 * std::pow(C4656, 5) * bs[5] * C4752)) /
        std::pow(C4632, 2);
    const double C78 = (2 * (C4650 * C4662 + C4653 * be) +
                        C4650 * (C4662 + C4650 * C4681 + C4671 * be) +
                        (C4653 + C4665 * C4654) * be) /
                       C4632;
    const double C321 = (C4650 * C4662 + C4653 * be + C4681 * C4730) / C4632;
    const double C622 = (C4650 * C4662 + C4653 * be + C4681 * C4771) / C4632;
    const double C916 = (C4685 * (C4662 + C4650 * C4681 + C4671 * be)) / C4632;
    const double C1168 = (C4700 * (C4662 + C4650 * C4681 + C4671 * be)) / C4632;
    const double C1429 = (C4700 * C4685 * C4681) / C4632;
    const double C2373 =
        (be * C4753 + C4685 * C4767 + ae * C4700 * C4897 +
         C4700 *
             (ae * C4897 + C4700 * (be * C4758 + C4685 * std::pow(C4656, 5) *
                                                     bs[5] * C4764))) /
        std::pow(C4632, 2);
    const double C3168 =
        (ae * (C4692 + C4685 * C4897 + C4895 * be) +
         C4700 * (C4767 + be * C4915 +
                  C4685 * (be * C4758 +
                           C4685 * std::pow(C4656, 5) * bs[5] * C4764))) /
        std::pow(C4632, 2);
    const double C2013 = (2 * (C4685 * C4692 + C4653 * be) +
                          C4685 * (C4692 + C4685 * C4897 + C4895 * be) +
                          (C4653 + C4665 * C4730) * be) /
                         C4632;
    const double C2207 = (C4685 * C4692 + C4653 * be + C4897 * C4771) / C4632;
    const double C3002 = (C4700 * (C4692 + C4685 * C4897 + C4895 * be)) / C4632;
    const double C3730 = (2 * (C4700 * C4707 + C4653 * be) +
                          C4700 * (C4707 + C4700 * C4937 + C4935 * be) +
                          (C4653 + C4665 * C4771) * be) /
                         C4632;
    const double C83 =
        (2 * (ae * C4662 + be * C4663 + C4650 * C4680) +
         ae * (C4662 + C4650 * C4681 + C4671 * be) +
         be * (C4663 + C4650 * C4682 + C4671 * ae) +
         C4650 * (C4680 + ae * C4681 + be * C4682 +
                  C4650 * (ae * C4675 + be * C4676 +
                           C4650 *
                               (C4666 * C4667 +
                                C4654 * bs[5] * std::pow(C4656, 5)) *
                               C4631))) /
        std::pow(C4632, 2);
    const double C324 =
        ((C4653 + C4654 * C4655 * C4659) * C4631 + C4680 * C4730) /
        std::pow(C4632, 2);
    const double C325 =
        (ae * C4685 * C4662 + be * C4685 * C4663 + C4650 * C4685 * C4680) /
        std::pow(C4632, 2);
    const double C326 =
        (ae * (C4662 + C4675 * C4730) + be * (C4663 + C4676 * C4730) +
         C4650 * (C4680 + (C4666 * C4667 + C4654 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4730)) /
        std::pow(C4632, 2);
    const double C625 =
        ((C4653 + C4654 * C4655 * C4659) * C4631 + C4680 * C4771) /
        std::pow(C4632, 2);
    const double C626 =
        (ae * C4700 * C4662 + be * C4700 * C4663 + C4650 * C4700 * C4680) /
        std::pow(C4632, 2);
    const double C627 =
        (ae * (C4662 + C4675 * C4771) + be * (C4663 + C4676 * C4771) +
         C4650 * (C4680 + (C4666 * C4667 + C4654 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4771)) /
        std::pow(C4632, 2);
    const double C918 =
        (C4685 * C4680 + ae * C4685 * C4681 + be * C4685 * C4682 +
         C4650 * (ae * C4685 * C4675 + be * C4685 * C4676 +
                  C4650 * C4685 *
                      (C4666 * C4667 + C4654 * bs[5] * std::pow(C4656, 5)) *
                      C4631)) /
        std::pow(C4632, 2);
    const double C1170 =
        (C4700 * C4680 + ae * C4700 * C4681 + be * C4700 * C4682 +
         C4650 * (ae * C4700 * C4675 + be * C4700 * C4676 +
                  C4650 * C4700 *
                      (C4666 * C4667 + C4654 * bs[5] * std::pow(C4656, 5)) *
                      C4631)) /
        std::pow(C4632, 2);
    const double C1431 = (C4700 * C4685 * C4680) / std::pow(C4632, 2);
    const double C1994 =
        (2 * C4685 * C4680 +
         C4685 * (C4680 + (C4666 * C4667 + C4654 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4730)) /
        std::pow(C4632, 2);
    const double C2180 =
        (C4685 * C4680 +
         C4685 * (C4666 * C4667 + C4654 * bs[5] * std::pow(C4656, 5)) * C4631 *
             C4771) /
        std::pow(C4632, 2);
    const double C2975 =
        (C4700 * (C4680 + (C4666 * C4667 + C4654 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4730)) /
        std::pow(C4632, 2);
    const double C3691 =
        (2 * C4700 * C4680 +
         C4700 * (C4680 + (C4666 * C4667 + C4654 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4771)) /
        std::pow(C4632, 2);
    const double C186 =
        (2 * C4650 * C4735 +
         C4650 * (C4735 + (C4666 * C4667 + C4730 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4654)) /
        std::pow(C4632, 2);
    const double C456 =
        ((C4653 + C4730 * C4655 * C4659) * C4631 +
         ae * (C4685 * C4692 + C4653 * be) + be * (C4685 * C4721 + C4653 * ae) +
         C4685 * (ae * C4692 + be * C4721 + C4685 * C4735)) /
        std::pow(C4632, 2);
    const double C457 =
        (ae * C4650 * C4692 + be * C4650 * C4721 + C4685 * C4650 * C4735) /
        std::pow(C4632, 2);
    const double C458 =
        (C4650 * C4735 + ae * (C4685 * C4797 + C4671 * be) +
         be * (C4685 * C4798 + C4671 * ae) +
         C4685 * (ae * C4797 + be * C4798 +
                  C4685 * C4650 *
                      (C4666 * C4667 + C4730 * bs[5] * std::pow(C4656, 5)) *
                      C4631)) /
        std::pow(C4632, 2);
    const double C757 =
        ((C4653 + C4730 * C4655 * C4659) * C4631 + C4735 * C4771) /
        std::pow(C4632, 2);
    const double C758 = (C4700 * C4650 * C4735) / std::pow(C4632, 2);
    const double C759 =
        (C4650 * C4735 +
         C4650 * (C4666 * C4667 + C4730 * bs[5] * std::pow(C4656, 5)) * C4631 *
             C4771) /
        std::pow(C4632, 2);
    const double C1029 =
        (ae * (C4692 + C4697 * C4654) + be * (C4721 + C4726 * C4654) +
         C4685 * (C4735 + (C4666 * C4667 + C4730 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4654)) /
        std::pow(C4632, 2);
    const double C1281 =
        (C4700 * (C4735 + (C4666 * C4667 + C4730 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4654)) /
        std::pow(C4632, 2);
    const double C1581 =
        (ae * C4700 * C4692 + be * C4700 * C4721 + C4685 * C4700 * C4735) /
        std::pow(C4632, 2);
    const double C2073 =
        (2 * (ae * C4692 + be * C4721 + C4685 * C4735) +
         ae * (C4692 + C4685 * C4897 + C4895 * be) +
         be * (C4721 + C4685 * C4898 + C4895 * ae) +
         C4685 * (C4735 + ae * C4897 + be * C4898 +
                  C4685 * (ae * C4697 + be * C4726 +
                           C4685 *
                               (C4666 * C4667 +
                                C4730 * bs[5] * std::pow(C4656, 5)) *
                               C4631))) /
        std::pow(C4632, 2);
    const double C2291 =
        (ae * (C4692 + C4697 * C4771) + be * (C4721 + C4726 * C4771) +
         C4685 * (C4735 + (C4666 * C4667 + C4730 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4771)) /
        std::pow(C4632, 2);
    const double C3086 =
        (C4700 * C4735 + ae * C4700 * C4897 + be * C4700 * C4898 +
         C4685 * (ae * C4700 * C4697 + be * C4700 * C4726 +
                  C4685 * C4700 *
                      (C4666 * C4667 + C4730 * bs[5] * std::pow(C4656, 5)) *
                      C4631)) /
        std::pow(C4632, 2);
    const double C3770 =
        (2 * C4700 * C4735 +
         C4700 * (C4735 + (C4666 * C4667 + C4730 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4771)) /
        std::pow(C4632, 2);
    const double C279 =
        (2 * C4650 * C4776 +
         C4650 * (C4776 + (C4666 * C4667 + C4771 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4654)) /
        std::pow(C4632, 2);
    const double C580 =
        ((C4653 + C4771 * C4655 * C4659) * C4631 + C4776 * C4730) /
        std::pow(C4632, 2);
    const double C581 = (C4685 * C4650 * C4776) / std::pow(C4632, 2);
    const double C582 =
        (C4650 * C4776 +
         C4650 * (C4666 * C4667 + C4771 * bs[5] * std::pow(C4656, 5)) * C4631 *
             C4730) /
        std::pow(C4632, 2);
    const double C881 =
        ((C4653 + C4771 * C4655 * C4659) * C4631 +
         ae * (C4700 * C4707 + C4653 * be) + be * (C4700 * C4753 + C4653 * ae) +
         C4700 * (ae * C4707 + be * C4753 + C4700 * C4776)) /
        std::pow(C4632, 2);
    const double C882 =
        (ae * C4650 * C4707 + be * C4650 * C4753 + C4700 * C4650 * C4776) /
        std::pow(C4632, 2);
    const double C883 =
        (C4650 * C4776 + ae * (C4700 * C4803 + C4671 * be) +
         be * (C4700 * C4812 + C4671 * ae) +
         C4700 * (ae * C4803 + be * C4812 +
                  C4700 * C4650 *
                      (C4666 * C4667 + C4771 * bs[5] * std::pow(C4656, 5)) *
                      C4631)) /
        std::pow(C4632, 2);
    const double C1138 =
        (C4685 * (C4776 + (C4666 * C4667 + C4771 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4654)) /
        std::pow(C4632, 2);
    const double C1390 =
        (ae * (C4707 + C4712 * C4654) + be * (C4753 + C4758 * C4654) +
         C4700 * (C4776 + (C4666 * C4667 + C4771 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4654)) /
        std::pow(C4632, 2);
    const double C1727 =
        (ae * C4685 * C4707 + be * C4685 * C4753 + C4700 * C4685 * C4776) /
        std::pow(C4632, 2);
    const double C2150 =
        (2 * C4685 * C4776 +
         C4685 * (C4776 + (C4666 * C4667 + C4771 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4730)) /
        std::pow(C4632, 2);
    const double C2400 =
        (C4685 * C4776 + ae * (C4700 * C4914 + C4895 * be) +
         be * (C4700 * C4915 + C4895 * ae) +
         C4700 * (ae * C4914 + be * C4915 +
                  C4700 * C4685 *
                      (C4666 * C4667 + C4771 * bs[5] * std::pow(C4656, 5)) *
                      C4631)) /
        std::pow(C4632, 2);
    const double C3195 =
        (ae * (C4707 + C4712 * C4730) + be * (C4753 + C4758 * C4730) +
         C4700 * (C4776 + (C4666 * C4667 + C4771 * bs[5] * std::pow(C4656, 5)) *
                              C4631 * C4730)) /
        std::pow(C4632, 2);
    const double C3847 =
        (2 * (ae * C4707 + be * C4753 + C4700 * C4776) +
         ae * (C4707 + C4700 * C4937 + C4935 * be) +
         be * (C4753 + C4700 * C4938 + C4935 * ae) +
         C4700 * (C4776 + ae * C4937 + be * C4938 +
                  C4700 * (ae * C4712 + be * C4758 +
                           C4700 *
                               (C4666 * C4667 +
                                C4771 * bs[5] * std::pow(C4656, 5)) *
                               C4631))) /
        std::pow(C4632, 2);
    const double C5232 = C5213 / C5105;
    const double C5234 = C5217 / C5093;
    const double C309 = -C5233;
    const double C5236 = C5225 / C5105;
    const double C5237 = C5227 / C5093;
    const double C1755 = -C5235;
    const double C5239 = C5229 / C5105;
    const double C5240 = C5231 / C5093;
    const double C3222 = -C5238;
    const double C5241 = C5212 - C5232;
    const double C5242 = C5216 - C5234;
    const double C5243 = C5219 - C5236;
    const double C5244 = C5226 - C5237;
    const double C5245 = C5221 - C5239;
    const double C5246 = C5230 - C5240;
    const double C62 = (C5241 * C5096) / C5093 + (C5214 - C5233) / C5095;
    const double C63 = (C5242 * C5096) / C5093 + (2 * C5107 + C5241) / C5095;
    const double C64 = (C5096 * C5107) / C5110 + C5242 / C5095;
    const double C1986 = (C5243 * C5167) / C5093 + (C5222 - C5235) / C5095;
    const double C1987 = (C5244 * C5167) / C5093 + (2 * C5172 + C5243) / C5095;
    const double C1988 = (C5167 * C5172) / C5110 + C5244 / C5095;
    const double C3684 = (C5245 * C5195) / C5093 + (C5223 - C5238) / C5095;
    const double C3685 = (C5246 * C5195) / C5093 + (2 * C5200 + C5245) / C5095;
    const double C3686 = (C5195 * C5200) / C5110 + C5246 / C5095;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 *
                        C59 * C5136 * C5222 -
                    (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 *
                        C59 * C5136 * C5172) *
                       C5241 +
                   ((C66 * C319 - C67 * C313 - C66 * C320 + C57 * C325) * C58 *
                        C59 * C5136 * C5172 -
                    (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 *
                        C59 * C5136 * C5222) *
                       C5242 +
                   ((C66 * C76 - C67 * C70 - C66 * C77 + C57 * C82) * C58 *
                        C59 * C5136 * C5222 -
                    (C66 * C916 - C67 * C915 - C66 * C917 + C57 * C918) * C58 *
                        C59 * C5136 * C5172) *
                       C914)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C5136 * C5222 +
           ((C102 * C311 - C59 * C353) * C66 +
            (C102 * C316 - C59 * C357) * C57) *
               C58 * C5136 * C5172) *
              C5241 +
          (((C102 * C69 - C59 * C104) * C66 + (C102 * C75 - C59 * C108) * C57) *
               C58 * C5136 * C5222 +
           ((C59 * C355 - C102 * C313) * C66 +
            (C59 * C359 - C102 * C320) * C57) *
               C58 * C5136 * C5172) *
              C5242 +
          (((C59 * C105 - C102 * C70) * C66 + (C59 * C109 - C102 * C77) * C57) *
               C58 * C5136 * C5222 +
           ((C102 * C915 - C59 * C945) * C66 +
            (C102 * C917 - C59 * C946) * C57) *
               C58 * C5136 * C5172) *
              C914)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C5136 * C5222 +
           ((C129 * C311 - C58 * C387) * C66 +
            (C129 * C316 - C58 * C391) * C57) *
               C59 * C5136 * C5172) *
              C5241 +
          (((C129 * C69 - C58 * C131) * C66 + (C129 * C75 - C58 * C135) * C57) *
               C59 * C5136 * C5222 +
           ((C58 * C389 - C129 * C313) * C66 +
            (C58 * C393 - C129 * C320) * C57) *
               C59 * C5136 * C5172) *
              C5242 +
          (((C58 * C132 - C129 * C70) * C66 + (C58 * C136 - C129 * C77) * C57) *
               C59 * C5136 * C5222 +
           ((C129 * C915 - C58 * C973) * C66 +
            (C129 * C917 - C58 * C974) * C57) *
               C59 * C5136 * C5172) *
              C914)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C5136 * C5222 +
           ((C66 * C311 - C57 * C315) * C102 +
            (C66 * C421 - C57 * C425) * C59) *
               C58 * C5136 * C5172) *
              C5241 +
          (((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
               C58 * C5136 * C5222 +
           ((C57 * C319 - C66 * C313) * C102 +
            (C57 * C427 - C66 * C423) * C59) *
               C58 * C5136 * C5172) *
              C5242 +
          (((C57 * C76 - C66 * C70) * C102 + (C57 * C162 - C66 * C158) * C59) *
               C58 * C5136 * C5222 +
           ((C66 * C915 - C57 * C916) * C102 +
            (C66 * C1001 - C57 * C1002) * C59) *
               C58 * C5136 * C5172) *
              C914)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) *
                        C57 * C58 * C5136 * C5222 -
                    (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) *
                        C57 * C58 * C5136 * C5172) *
                       C5241 +
                   ((C102 * C355 - C182 * C313 - C102 * C423 + C59 * C457) *
                        C57 * C58 * C5136 * C5172 -
                    (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) *
                        C57 * C58 * C5136 * C5222) *
                       C5242 +
                   ((C102 * C105 - C182 * C70 - C102 * C158 + C59 * C185) *
                        C57 * C58 * C5136 * C5222 -
                    (C102 * C945 - C182 * C915 - C102 * C1001 + C59 * C1029) *
                        C57 * C58 * C5136 * C5172) *
                       C914)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C58 * C130 - C129 * C68) * C102 +
                     (C58 * C205 - C129 * C156) * C59) *
                        C57 * C5136 * C5222 +
                    ((C129 * C311 - C58 * C387) * C102 +
                     (C129 * C421 - C58 * C485) * C59) *
                        C57 * C5136 * C5172) *
                       C5241 +
                   (((C129 * C69 - C58 * C131) * C102 +
                     (C129 * C157 - C58 * C206) * C59) *
                        C57 * C5136 * C5222 +
                    ((C58 * C389 - C129 * C313) * C102 +
                     (C58 * C487 - C129 * C423) * C59) *
                        C57 * C5136 * C5172) *
                       C5242 +
                   (((C58 * C132 - C129 * C70) * C102 +
                     (C58 * C207 - C129 * C158) * C59) *
                        C57 * C5136 * C5222 +
                    ((C129 * C915 - C58 * C973) * C102 +
                     (C129 * C1001 - C58 * C1056) * C59) *
                        C57 * C5136 * C5172) *
                       C914)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C5136 * C5222 +
           ((C66 * C311 - C57 * C315) * C129 +
            (C66 * C515 - C57 * C519) * C58) *
               C59 * C5136 * C5172) *
              C5241 +
          (((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
               C59 * C5136 * C5222 +
           ((C57 * C319 - C66 * C313) * C129 +
            (C57 * C521 - C66 * C517) * C58) *
               C59 * C5136 * C5172) *
              C5242 +
          (((C57 * C76 - C66 * C70) * C129 + (C57 * C233 - C66 * C229) * C58) *
               C59 * C5136 * C5222 +
           ((C66 * C915 - C57 * C916) * C129 +
            (C66 * C1083 - C57 * C1084) * C58) *
               C59 * C5136 * C5172) *
              C914)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C59 * C103 - C102 * C68) * C129 +
                     (C59 * C253 - C102 * C227) * C58) *
                        C57 * C5136 * C5222 +
                    ((C102 * C311 - C59 * C353) * C129 +
                     (C102 * C515 - C59 * C549) * C58) *
                        C57 * C5136 * C5172) *
                       C5241 +
                   (((C102 * C69 - C59 * C104) * C129 +
                     (C102 * C228 - C59 * C254) * C58) *
                        C57 * C5136 * C5222 +
                    ((C59 * C355 - C102 * C313) * C129 +
                     (C59 * C551 - C102 * C517) * C58) *
                        C57 * C5136 * C5172) *
                       C5242 +
                   (((C59 * C105 - C102 * C70) * C129 +
                     (C59 * C255 - C102 * C229) * C58) *
                        C57 * C5136 * C5222 +
                    ((C102 * C915 - C59 * C945) * C129 +
                     (C102 * C1083 - C59 * C1111) * C58) *
                        C57 * C5136 * C5172) *
                       C914)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) *
                        C59 * C57 * C5136 * C5222 -
                    (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) *
                        C59 * C57 * C5136 * C5172) *
                       C5241 +
                   ((C129 * C389 - C275 * C313 - C129 * C517 + C58 * C581) *
                        C59 * C57 * C5136 * C5172 -
                    (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) *
                        C59 * C57 * C5136 * C5222) *
                       C5242 +
                   ((C129 * C132 - C275 * C70 - C129 * C229 + C58 * C278) *
                        C59 * C57 * C5136 * C5222 -
                    (C129 * C973 - C275 * C915 - C129 * C1083 + C58 * C1138) *
                        C59 * C57 * C5136 * C5172) *
                       C914)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 *
                         C59 * C5223 -
                     (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) * C58 *
                         C59 * C5200) *
                        C5222 +
                    ((C66 * C1427 - C67 * C1425 - C66 * C1428 + C57 * C1431) *
                         C58 * C59 * C5200 -
                     (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 *
                         C59 * C5223) *
                        C5172) *
                       C309 +
                   (((C66 * C620 - C67 * C614 - C66 * C621 + C57 * C626) * C58 *
                         C59 * C5200 -
                     (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 *
                         C59 * C5223) *
                        C5222 +
                    ((C66 * C319 - C67 * C313 - C66 * C320 + C57 * C325) * C58 *
                         C59 * C5223 -
                     (C66 * C1429 - C67 * C1426 - C66 * C1430 + C57 * C1432) *
                         C58 * C59 * C5200) *
                        C5172) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C59 * C103 - C102 * C68) * C66 +
                      (C59 * C107 - C102 * C73) * C57) *
                         C58 * C5223 +
                     ((C102 * C612 - C59 * C654) * C66 +
                      (C102 * C617 - C59 * C658) * C57) *
                         C58 * C5200) *
                        C5222 +
                    (((C102 * C311 - C59 * C353) * C66 +
                      (C102 * C316 - C59 * C357) * C57) *
                         C58 * C5223 +
                     ((C59 * C1467 - C102 * C1425) * C66 +
                      (C59 * C1469 - C102 * C1428) * C57) *
                         C58 * C5200) *
                        C5172) *
                       C309 +
                   ((((C102 * C69 - C59 * C104) * C66 +
                      (C102 * C75 - C59 * C108) * C57) *
                         C58 * C5223 +
                     ((C59 * C656 - C102 * C614) * C66 +
                      (C59 * C660 - C102 * C621) * C57) *
                         C58 * C5200) *
                        C5222 +
                    (((C59 * C355 - C102 * C313) * C66 +
                      (C59 * C359 - C102 * C320) * C57) *
                         C58 * C5223 +
                     ((C102 * C1426 - C59 * C1468) * C66 +
                      (C102 * C1430 - C59 * C1470) * C57) *
                         C58 * C5200) *
                        C5172) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C58 * C130 - C129 * C68) * C66 +
                      (C58 * C134 - C129 * C73) * C57) *
                         C59 * C5223 +
                     ((C129 * C612 - C58 * C688) * C66 +
                      (C129 * C617 - C58 * C692) * C57) *
                         C59 * C5200) *
                        C5222 +
                    (((C129 * C311 - C58 * C387) * C66 +
                      (C129 * C316 - C58 * C391) * C57) *
                         C59 * C5223 +
                     ((C58 * C1505 - C129 * C1425) * C66 +
                      (C58 * C1507 - C129 * C1428) * C57) *
                         C59 * C5200) *
                        C5172) *
                       C309 +
                   ((((C129 * C69 - C58 * C131) * C66 +
                      (C129 * C75 - C58 * C135) * C57) *
                         C59 * C5223 +
                     ((C58 * C690 - C129 * C614) * C66 +
                      (C58 * C694 - C129 * C621) * C57) *
                         C59 * C5200) *
                        C5222 +
                    (((C58 * C389 - C129 * C313) * C66 +
                      (C58 * C393 - C129 * C320) * C57) *
                         C59 * C5223 +
                     ((C129 * C1426 - C58 * C1506) * C66 +
                      (C129 * C1430 - C58 * C1508) * C57) *
                         C59 * C5200) *
                        C5172) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
                C58 * C5223 +
            ((C66 * C612 - C57 * C616) * C102 +
             (C66 * C722 - C57 * C726) * C59) *
                C58 * C5200) *
               C5222 +
           (((C66 * C311 - C57 * C315) * C102 +
             (C66 * C421 - C57 * C425) * C59) *
                C58 * C5223 +
            ((C57 * C1427 - C66 * C1425) * C102 +
             (C57 * C1545 - C66 * C1543) * C59) *
                C58 * C5200) *
               C5172) *
              C309 +
          ((((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
                C58 * C5223 +
            ((C57 * C620 - C66 * C614) * C102 +
             (C57 * C728 - C66 * C724) * C59) *
                C58 * C5200) *
               C5222 +
           (((C57 * C319 - C66 * C313) * C102 +
             (C57 * C427 - C66 * C423) * C59) *
                C58 * C5223 +
            ((C66 * C1426 - C57 * C1429) * C102 +
             (C66 * C1544 - C57 * C1546) * C59) *
                C58 * C5200) *
               C5172) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) * C57 * C58 *
                C5223 -
            (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) * C57 * C58 *
                C5200) *
               C5222 +
           ((C102 * C1467 - C182 * C1425 - C102 * C1543 + C59 * C1581) * C57 *
                C58 * C5200 -
            (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) * C57 * C58 *
                C5223) *
               C5172) *
              C309 +
          (((C102 * C656 - C182 * C614 - C102 * C724 + C59 * C758) * C57 * C58 *
                C5200 -
            (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) * C57 * C58 *
                C5223) *
               C5222 +
           ((C102 * C355 - C182 * C313 - C102 * C423 + C59 * C457) * C57 * C58 *
                C5223 -
            (C102 * C1468 - C182 * C1426 - C102 * C1544 + C59 * C1582) * C57 *
                C58 * C5200) *
               C5172) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C58 * C130 - C129 * C68) * C102 +
                      (C58 * C205 - C129 * C156) * C59) *
                         C57 * C5223 +
                     ((C129 * C612 - C58 * C688) * C102 +
                      (C129 * C722 - C58 * C786) * C59) *
                         C57 * C5200) *
                        C5222 +
                    (((C129 * C311 - C58 * C387) * C102 +
                      (C129 * C421 - C58 * C485) * C59) *
                         C57 * C5223 +
                     ((C58 * C1505 - C129 * C1425) * C102 +
                      (C58 * C1617 - C129 * C1543) * C59) *
                         C57 * C5200) *
                        C5172) *
                       C309 +
                   ((((C129 * C69 - C58 * C131) * C102 +
                      (C129 * C157 - C58 * C206) * C59) *
                         C57 * C5223 +
                     ((C58 * C690 - C129 * C614) * C102 +
                      (C58 * C788 - C129 * C724) * C59) *
                         C57 * C5200) *
                        C5222 +
                    (((C58 * C389 - C129 * C313) * C102 +
                      (C58 * C487 - C129 * C423) * C59) *
                         C57 * C5223 +
                     ((C129 * C1426 - C58 * C1506) * C102 +
                      (C129 * C1544 - C58 * C1618) * C59) *
                         C57 * C5200) *
                        C5172) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
                C59 * C5223 +
            ((C66 * C612 - C57 * C616) * C129 +
             (C66 * C816 - C57 * C820) * C58) *
                C59 * C5200) *
               C5222 +
           (((C66 * C311 - C57 * C315) * C129 +
             (C66 * C515 - C57 * C519) * C58) *
                C59 * C5223 +
            ((C57 * C1427 - C66 * C1425) * C129 +
             (C57 * C1655 - C66 * C1653) * C58) *
                C59 * C5200) *
               C5172) *
              C309 +
          ((((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
                C59 * C5223 +
            ((C57 * C620 - C66 * C614) * C129 +
             (C57 * C822 - C66 * C818) * C58) *
                C59 * C5200) *
               C5222 +
           (((C57 * C319 - C66 * C313) * C129 +
             (C57 * C521 - C66 * C517) * C58) *
                C59 * C5223 +
            ((C66 * C1426 - C57 * C1429) * C129 +
             (C66 * C1654 - C57 * C1656) * C58) *
                C59 * C5200) *
               C5172) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C59 * C103 - C102 * C68) * C129 +
                      (C59 * C253 - C102 * C227) * C58) *
                         C57 * C5223 +
                     ((C102 * C612 - C59 * C654) * C129 +
                      (C102 * C816 - C59 * C850) * C58) *
                         C57 * C5200) *
                        C5222 +
                    (((C102 * C311 - C59 * C353) * C129 +
                      (C102 * C515 - C59 * C549) * C58) *
                         C57 * C5223 +
                     ((C59 * C1467 - C102 * C1425) * C129 +
                      (C59 * C1691 - C102 * C1653) * C58) *
                         C57 * C5200) *
                        C5172) *
                       C309 +
                   ((((C102 * C69 - C59 * C104) * C129 +
                      (C102 * C228 - C59 * C254) * C58) *
                         C57 * C5223 +
                     ((C59 * C656 - C102 * C614) * C129 +
                      (C59 * C852 - C102 * C818) * C58) *
                         C57 * C5200) *
                        C5222 +
                    (((C59 * C355 - C102 * C313) * C129 +
                      (C59 * C551 - C102 * C517) * C58) *
                         C57 * C5223 +
                     ((C102 * C1426 - C59 * C1468) * C129 +
                      (C102 * C1654 - C59 * C1692) * C58) *
                         C57 * C5200) *
                        C5172) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) * C59 * C57 *
                C5223 -
            (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) * C59 * C57 *
                C5200) *
               C5222 +
           ((C129 * C1505 - C275 * C1425 - C129 * C1653 + C58 * C1727) * C59 *
                C57 * C5200 -
            (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) * C59 * C57 *
                C5223) *
               C5172) *
              C309 +
          (((C129 * C690 - C275 * C614 - C129 * C818 + C58 * C882) * C59 * C57 *
                C5200 -
            (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) * C59 * C57 *
                C5223) *
               C5222 +
           ((C129 * C389 - C275 * C313 - C129 * C517 + C58 * C581) * C59 * C57 *
                C5223 -
            (C129 * C1506 - C275 * C1426 - C129 * C1654 + C58 * C1728) * C59 *
                C57 * C5200) *
               C5172) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C5136 *
               C306 -
           (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 * C59 *
               C5136 * C307 +
           (C66 * C317 - C67 * C312 - C66 * C318 + C57 * C324) * C58 * C59 *
               C5136 * C308) *
              C309 +
          ((C66 * C319 - C67 * C313 - C66 * C320 + C57 * C325) * C58 * C59 *
               C5136 * C307 -
           (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 * C59 * C5136 *
               C306 -
           (C66 * C321 - C67 * C314 - C66 * C322 + C57 * C326) * C58 * C59 *
               C5136 * C308) *
              C5107)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) *
                                  C58 * C59 * C5136 * C5120 * C62 -
                              (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) *
                                  C58 * C59 * C5136 * C5120 * C63 +
                              (C66 * C76 - C67 * C70 - C66 * C77 + C57 * C82) *
                                  C58 * C59 * C5136 * C5120 * C64 -
                              (C66 * C78 - C67 * C71 - C66 * C79 + C57 * C83) *
                                  C58 * C59 * C5136 * C5120 * C65)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C609 -
           (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) * C58 * C59 *
               C610 +
           (C66 * C618 - C67 * C613 - C66 * C619 + C57 * C625) * C58 * C59 *
               C611) *
              C5120 * C309 +
          ((C66 * C620 - C67 * C614 - C66 * C621 + C57 * C626) * C58 * C59 *
               C610 -
           (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 * C59 * C609 -
           (C66 * C622 - C67 * C615 - C66 * C623 + C57 * C627) * C58 * C59 *
               C611) *
              C5120 * C5107)) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C5136 * C306 +
           ((C102 * C311 - C59 * C353) * C66 +
            (C102 * C316 - C59 * C357) * C57) *
               C58 * C5136 * C307 +
           ((C59 * C354 - C102 * C312) * C66 +
            (C59 * C358 - C102 * C318) * C57) *
               C58 * C5136 * C308) *
              C309 +
          (((C102 * C69 - C59 * C104) * C66 + (C102 * C75 - C59 * C108) * C57) *
               C58 * C5136 * C306 +
           ((C59 * C355 - C102 * C313) * C66 +
            (C59 * C359 - C102 * C320) * C57) *
               C58 * C5136 * C307 +
           ((C102 * C314 - C59 * C356) * C66 +
            (C102 * C322 - C59 * C360) * C57) *
               C58 * C5136 * C308) *
              C5107)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
              C58 * C5136 * C5120 * C62 +
          ((C102 * C69 - C59 * C104) * C66 + (C102 * C75 - C59 * C108) * C57) *
              C58 * C5136 * C5120 * C63 +
          ((C59 * C105 - C102 * C70) * C66 + (C59 * C109 - C102 * C77) * C57) *
              C58 * C5136 * C5120 * C64 +
          ((C102 * C71 - C59 * C106) * C66 + (C102 * C79 - C59 * C110) * C57) *
              C58 * C5136 * C5120 * C65)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C609 +
           ((C102 * C612 - C59 * C654) * C66 +
            (C102 * C617 - C59 * C658) * C57) *
               C58 * C610 +
           ((C59 * C655 - C102 * C613) * C66 +
            (C59 * C659 - C102 * C619) * C57) *
               C58 * C611) *
              C5120 * C309 +
          (((C102 * C69 - C59 * C104) * C66 + (C102 * C75 - C59 * C108) * C57) *
               C58 * C609 +
           ((C59 * C656 - C102 * C614) * C66 +
            (C59 * C660 - C102 * C621) * C57) *
               C58 * C610 +
           ((C102 * C615 - C59 * C657) * C66 +
            (C102 * C623 - C59 * C661) * C57) *
               C58 * C611) *
              C5120 * C5107)) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C5136 * C306 +
           ((C129 * C311 - C58 * C387) * C66 +
            (C129 * C316 - C58 * C391) * C57) *
               C59 * C5136 * C307 +
           ((C58 * C388 - C129 * C312) * C66 +
            (C58 * C392 - C129 * C318) * C57) *
               C59 * C5136 * C308) *
              C309 +
          (((C129 * C69 - C58 * C131) * C66 + (C129 * C75 - C58 * C135) * C57) *
               C59 * C5136 * C306 +
           ((C58 * C389 - C129 * C313) * C66 +
            (C58 * C393 - C129 * C320) * C57) *
               C59 * C5136 * C307 +
           ((C129 * C314 - C58 * C390) * C66 +
            (C129 * C322 - C58 * C394) * C57) *
               C59 * C5136 * C308) *
              C5107)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
              C59 * C5136 * C5120 * C62 +
          ((C129 * C69 - C58 * C131) * C66 + (C129 * C75 - C58 * C135) * C57) *
              C59 * C5136 * C5120 * C63 +
          ((C58 * C132 - C129 * C70) * C66 + (C58 * C136 - C129 * C77) * C57) *
              C59 * C5136 * C5120 * C64 +
          ((C129 * C71 - C58 * C133) * C66 + (C129 * C79 - C58 * C137) * C57) *
              C59 * C5136 * C5120 * C65)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C609 +
           ((C129 * C612 - C58 * C688) * C66 +
            (C129 * C617 - C58 * C692) * C57) *
               C59 * C610 +
           ((C58 * C689 - C129 * C613) * C66 +
            (C58 * C693 - C129 * C619) * C57) *
               C59 * C611) *
              C5120 * C309 +
          (((C129 * C69 - C58 * C131) * C66 + (C129 * C75 - C58 * C135) * C57) *
               C59 * C609 +
           ((C58 * C690 - C129 * C614) * C66 +
            (C58 * C694 - C129 * C621) * C57) *
               C59 * C610 +
           ((C129 * C615 - C58 * C691) * C66 +
            (C129 * C623 - C58 * C695) * C57) *
               C59 * C611) *
              C5120 * C5107)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C5136 * C306 +
           ((C66 * C311 - C57 * C315) * C102 +
            (C66 * C421 - C57 * C425) * C59) *
               C58 * C5136 * C307 +
           ((C57 * C317 - C66 * C312) * C102 +
            (C57 * C426 - C66 * C422) * C59) *
               C58 * C5136 * C308) *
              C309 +
          (((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
               C58 * C5136 * C306 +
           ((C57 * C319 - C66 * C313) * C102 +
            (C57 * C427 - C66 * C423) * C59) *
               C58 * C5136 * C307 +
           ((C66 * C314 - C57 * C321) * C102 +
            (C66 * C424 - C57 * C428) * C59) *
               C58 * C5136 * C308) *
              C5107)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
              C58 * C5136 * C5120 * C62 +
          ((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
              C58 * C5136 * C5120 * C63 +
          ((C57 * C76 - C66 * C70) * C102 + (C57 * C162 - C66 * C158) * C59) *
              C58 * C5136 * C5120 * C64 +
          ((C66 * C71 - C57 * C78) * C102 + (C66 * C159 - C57 * C163) * C59) *
              C58 * C5136 * C5120 * C65)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C609 +
           ((C66 * C612 - C57 * C616) * C102 +
            (C66 * C722 - C57 * C726) * C59) *
               C58 * C610 +
           ((C57 * C618 - C66 * C613) * C102 +
            (C57 * C727 - C66 * C723) * C59) *
               C58 * C611) *
              C5120 * C309 +
          (((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
               C58 * C609 +
           ((C57 * C620 - C66 * C614) * C102 +
            (C57 * C728 - C66 * C724) * C59) *
               C58 * C610 +
           ((C66 * C615 - C57 * C622) * C102 +
            (C66 * C725 - C57 * C729) * C59) *
               C58 * C611) *
              C5120 * C5107)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] += (-std::pow(Pi, 2.5) *
                  (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) *
                        C57 * C58 * C5136 * C306 -
                    (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) *
                        C57 * C58 * C5136 * C307 +
                    (C102 * C354 - C182 * C312 - C102 * C422 + C59 * C456) *
                        C57 * C58 * C5136 * C308) *
                       C309 +
                   ((C102 * C355 - C182 * C313 - C102 * C423 + C59 * C457) *
                        C57 * C58 * C5136 * C307 -
                    (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) *
                        C57 * C58 * C5136 * C306 -
                    (C102 * C356 - C182 * C314 - C102 * C424 + C59 * C458) *
                        C57 * C58 * C5136 * C308) *
                       C5107)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) * C57 *
                       C58 * C5136 * C5120 * C62 -
                   (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) * C57 *
                       C58 * C5136 * C5120 * C63 +
                   (C102 * C105 - C182 * C70 - C102 * C158 + C59 * C185) * C57 *
                       C58 * C5136 * C5120 * C64 -
                   (C102 * C106 - C182 * C71 - C102 * C159 + C59 * C186) * C57 *
                       C58 * C5136 * C5120 * C65)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) *
                        C57 * C58 * C609 -
                    (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) *
                        C57 * C58 * C610 +
                    (C102 * C655 - C182 * C613 - C102 * C723 + C59 * C757) *
                        C57 * C58 * C611) *
                       C5120 * C309 +
                   ((C102 * C656 - C182 * C614 - C102 * C724 + C59 * C758) *
                        C57 * C58 * C610 -
                    (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) *
                        C57 * C58 * C609 -
                    (C102 * C657 - C182 * C615 - C102 * C725 + C59 * C759) *
                        C57 * C58 * C611) *
                       C5120 * C5107)) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::pow(Pi, 2.5) * ((((C58 * C130 - C129 * C68) * C102 +
                                          (C58 * C205 - C129 * C156) * C59) *
                                             C57 * C5136 * C306 +
                                         ((C129 * C311 - C58 * C387) * C102 +
                                          (C129 * C421 - C58 * C485) * C59) *
                                             C57 * C5136 * C307 +
                                         ((C58 * C388 - C129 * C312) * C102 +
                                          (C58 * C486 - C129 * C422) * C59) *
                                             C57 * C5136 * C308) *
                                            C309 +
                                        (((C129 * C69 - C58 * C131) * C102 +
                                          (C129 * C157 - C58 * C206) * C59) *
                                             C57 * C5136 * C306 +
                                         ((C58 * C389 - C129 * C313) * C102 +
                                          (C58 * C487 - C129 * C423) * C59) *
                                             C57 * C5136 * C307 +
                                         ((C129 * C314 - C58 * C390) * C102 +
                                          (C129 * C424 - C58 * C488) * C59) *
                                             C57 * C5136 * C308) *
                                            C5107)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * (((C58 * C130 - C129 * C68) * C102 +
                                        (C58 * C205 - C129 * C156) * C59) *
                                           C57 * C5136 * C5120 * C62 +
                                       ((C129 * C69 - C58 * C131) * C102 +
                                        (C129 * C157 - C58 * C206) * C59) *
                                           C57 * C5136 * C5120 * C63 +
                                       ((C58 * C132 - C129 * C70) * C102 +
                                        (C58 * C207 - C129 * C158) * C59) *
                                           C57 * C5136 * C5120 * C64 +
                                       ((C129 * C71 - C58 * C133) * C102 +
                                        (C129 * C159 - C58 * C208) * C59) *
                                           C57 * C5136 * C5120 * C65)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C58 * C130 - C129 * C68) * C102 +
                     (C58 * C205 - C129 * C156) * C59) *
                        C57 * C609 +
                    ((C129 * C612 - C58 * C688) * C102 +
                     (C129 * C722 - C58 * C786) * C59) *
                        C57 * C610 +
                    ((C58 * C689 - C129 * C613) * C102 +
                     (C58 * C787 - C129 * C723) * C59) *
                        C57 * C611) *
                       C5120 * C309 +
                   (((C129 * C69 - C58 * C131) * C102 +
                     (C129 * C157 - C58 * C206) * C59) *
                        C57 * C609 +
                    ((C58 * C690 - C129 * C614) * C102 +
                     (C58 * C788 - C129 * C724) * C59) *
                        C57 * C610 +
                    ((C129 * C615 - C58 * C691) * C102 +
                     (C129 * C725 - C58 * C789) * C59) *
                        C57 * C611) *
                       C5120 * C5107)) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C5136 * C306 +
           ((C66 * C311 - C57 * C315) * C129 +
            (C66 * C515 - C57 * C519) * C58) *
               C59 * C5136 * C307 +
           ((C57 * C317 - C66 * C312) * C129 +
            (C57 * C520 - C66 * C516) * C58) *
               C59 * C5136 * C308) *
              C309 +
          (((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
               C59 * C5136 * C306 +
           ((C57 * C319 - C66 * C313) * C129 +
            (C57 * C521 - C66 * C517) * C58) *
               C59 * C5136 * C307 +
           ((C66 * C314 - C57 * C321) * C129 +
            (C66 * C518 - C57 * C522) * C58) *
               C59 * C5136 * C308) *
              C5107)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
              C59 * C5136 * C5120 * C62 +
          ((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
              C59 * C5136 * C5120 * C63 +
          ((C57 * C76 - C66 * C70) * C129 + (C57 * C233 - C66 * C229) * C58) *
              C59 * C5136 * C5120 * C64 +
          ((C66 * C71 - C57 * C78) * C129 + (C66 * C230 - C57 * C234) * C58) *
              C59 * C5136 * C5120 * C65)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C609 +
           ((C66 * C612 - C57 * C616) * C129 +
            (C66 * C816 - C57 * C820) * C58) *
               C59 * C610 +
           ((C57 * C618 - C66 * C613) * C129 +
            (C57 * C821 - C66 * C817) * C58) *
               C59 * C611) *
              C5120 * C309 +
          (((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
               C59 * C609 +
           ((C57 * C620 - C66 * C614) * C129 +
            (C57 * C822 - C66 * C818) * C58) *
               C59 * C610 +
           ((C66 * C615 - C57 * C622) * C129 +
            (C66 * C819 - C57 * C823) * C58) *
               C59 * C611) *
              C5120 * C5107)) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] += (-std::pow(Pi, 2.5) * ((((C59 * C103 - C102 * C68) * C129 +
                                          (C59 * C253 - C102 * C227) * C58) *
                                             C57 * C5136 * C306 +
                                         ((C102 * C311 - C59 * C353) * C129 +
                                          (C102 * C515 - C59 * C549) * C58) *
                                             C57 * C5136 * C307 +
                                         ((C59 * C354 - C102 * C312) * C129 +
                                          (C59 * C550 - C102 * C516) * C58) *
                                             C57 * C5136 * C308) *
                                            C309 +
                                        (((C102 * C69 - C59 * C104) * C129 +
                                          (C102 * C228 - C59 * C254) * C58) *
                                             C57 * C5136 * C306 +
                                         ((C59 * C355 - C102 * C313) * C129 +
                                          (C59 * C551 - C102 * C517) * C58) *
                                             C57 * C5136 * C307 +
                                         ((C102 * C314 - C59 * C356) * C129 +
                                          (C102 * C518 - C59 * C552) * C58) *
                                             C57 * C5136 * C308) *
                                            C5107)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * (((C59 * C103 - C102 * C68) * C129 +
                                        (C59 * C253 - C102 * C227) * C58) *
                                           C57 * C5136 * C5120 * C62 +
                                       ((C102 * C69 - C59 * C104) * C129 +
                                        (C102 * C228 - C59 * C254) * C58) *
                                           C57 * C5136 * C5120 * C63 +
                                       ((C59 * C105 - C102 * C70) * C129 +
                                        (C59 * C255 - C102 * C229) * C58) *
                                           C57 * C5136 * C5120 * C64 +
                                       ((C102 * C71 - C59 * C106) * C129 +
                                        (C102 * C230 - C59 * C256) * C58) *
                                           C57 * C5136 * C5120 * C65)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C59 * C103 - C102 * C68) * C129 +
                     (C59 * C253 - C102 * C227) * C58) *
                        C57 * C609 +
                    ((C102 * C612 - C59 * C654) * C129 +
                     (C102 * C816 - C59 * C850) * C58) *
                        C57 * C610 +
                    ((C59 * C655 - C102 * C613) * C129 +
                     (C59 * C851 - C102 * C817) * C58) *
                        C57 * C611) *
                       C5120 * C309 +
                   (((C102 * C69 - C59 * C104) * C129 +
                     (C102 * C228 - C59 * C254) * C58) *
                        C57 * C609 +
                    ((C59 * C656 - C102 * C614) * C129 +
                     (C59 * C852 - C102 * C818) * C58) *
                        C57 * C610 +
                    ((C102 * C615 - C59 * C657) * C129 +
                     (C102 * C819 - C59 * C853) * C58) *
                        C57 * C611) *
                       C5120 * C5107)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[2] += (-std::pow(Pi, 2.5) *
                  (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) *
                        C59 * C57 * C5136 * C306 -
                    (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) *
                        C59 * C57 * C5136 * C307 +
                    (C129 * C388 - C275 * C312 - C129 * C516 + C58 * C580) *
                        C59 * C57 * C5136 * C308) *
                       C309 +
                   ((C129 * C389 - C275 * C313 - C129 * C517 + C58 * C581) *
                        C59 * C57 * C5136 * C307 -
                    (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) *
                        C59 * C57 * C5136 * C306 -
                    (C129 * C390 - C275 * C314 - C129 * C518 + C58 * C582) *
                        C59 * C57 * C5136 * C308) *
                       C5107)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) * C59 *
                       C57 * C5136 * C5120 * C62 -
                   (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) * C59 *
                       C57 * C5136 * C5120 * C63 +
                   (C129 * C132 - C275 * C70 - C129 * C229 + C58 * C278) * C59 *
                       C57 * C5136 * C5120 * C64 -
                   (C129 * C133 - C275 * C71 - C129 * C230 + C58 * C279) * C59 *
                       C57 * C5136 * C5120 * C65)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) *
                        C59 * C57 * C609 -
                    (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) *
                        C59 * C57 * C610 +
                    (C129 * C689 - C275 * C613 - C129 * C817 + C58 * C881) *
                        C59 * C57 * C611) *
                       C5120 * C309 +
                   ((C129 * C690 - C275 * C614 - C129 * C818 + C58 * C882) *
                        C59 * C57 * C610 -
                    (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) *
                        C59 * C57 * C609 -
                    (C129 * C691 - C275 * C615 - C129 * C819 + C58 * C883) *
                        C59 * C57 * C611) *
                       C5120 * C5107)) /
                     (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C5223 -
           (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) * C58 * C59 *
               C5200) *
              C5120 * C5241 +
          ((C66 * C620 - C67 * C614 - C66 * C621 + C57 * C626) * C58 * C59 *
               C5200 -
           (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 * C59 *
               C5223) *
              C5120 * C5242 +
          ((C66 * C76 - C67 * C70 - C66 * C77 + C57 * C82) * C58 * C59 * C5223 -
           (C66 * C1168 - C67 * C1167 - C66 * C1169 + C57 * C1170) * C58 * C59 *
               C5200) *
              C5120 * C914)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C5223 +
           ((C102 * C612 - C59 * C654) * C66 +
            (C102 * C617 - C59 * C658) * C57) *
               C58 * C5200) *
              C5120 * C5241 +
          (((C102 * C69 - C59 * C104) * C66 + (C102 * C75 - C59 * C108) * C57) *
               C58 * C5223 +
           ((C59 * C656 - C102 * C614) * C66 +
            (C59 * C660 - C102 * C621) * C57) *
               C58 * C5200) *
              C5120 * C5242 +
          (((C59 * C105 - C102 * C70) * C66 + (C59 * C109 - C102 * C77) * C57) *
               C58 * C5223 +
           ((C102 * C1167 - C59 * C1197) * C66 +
            (C102 * C1169 - C59 * C1198) * C57) *
               C58 * C5200) *
              C5120 * C914)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C5223 +
           ((C129 * C612 - C58 * C688) * C66 +
            (C129 * C617 - C58 * C692) * C57) *
               C59 * C5200) *
              C5120 * C5241 +
          (((C129 * C69 - C58 * C131) * C66 + (C129 * C75 - C58 * C135) * C57) *
               C59 * C5223 +
           ((C58 * C690 - C129 * C614) * C66 +
            (C58 * C694 - C129 * C621) * C57) *
               C59 * C5200) *
              C5120 * C5242 +
          (((C58 * C132 - C129 * C70) * C66 + (C58 * C136 - C129 * C77) * C57) *
               C59 * C5223 +
           ((C129 * C1167 - C58 * C1225) * C66 +
            (C129 * C1169 - C58 * C1226) * C57) *
               C59 * C5200) *
              C5120 * C914)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C5223 +
           ((C66 * C612 - C57 * C616) * C102 +
            (C66 * C722 - C57 * C726) * C59) *
               C58 * C5200) *
              C5120 * C5241 +
          (((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
               C58 * C5223 +
           ((C57 * C620 - C66 * C614) * C102 +
            (C57 * C728 - C66 * C724) * C59) *
               C58 * C5200) *
              C5120 * C5242 +
          (((C57 * C76 - C66 * C70) * C102 + (C57 * C162 - C66 * C158) * C59) *
               C58 * C5223 +
           ((C66 * C1167 - C57 * C1168) * C102 +
            (C66 * C1253 - C57 * C1254) * C59) *
               C58 * C5200) *
              C5120 * C914)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) *
                        C57 * C58 * C5223 -
                    (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) *
                        C57 * C58 * C5200) *
                       C5120 * C5241 +
                   ((C102 * C656 - C182 * C614 - C102 * C724 + C59 * C758) *
                        C57 * C58 * C5200 -
                    (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) *
                        C57 * C58 * C5223) *
                       C5120 * C5242 +
                   ((C102 * C105 - C182 * C70 - C102 * C158 + C59 * C185) *
                        C57 * C58 * C5223 -
                    (C102 * C1197 - C182 * C1167 - C102 * C1253 + C59 * C1281) *
                        C57 * C58 * C5200) *
                       C5120 * C914)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C58 * C130 - C129 * C68) * C102 +
                     (C58 * C205 - C129 * C156) * C59) *
                        C57 * C5223 +
                    ((C129 * C612 - C58 * C688) * C102 +
                     (C129 * C722 - C58 * C786) * C59) *
                        C57 * C5200) *
                       C5120 * C5241 +
                   (((C129 * C69 - C58 * C131) * C102 +
                     (C129 * C157 - C58 * C206) * C59) *
                        C57 * C5223 +
                    ((C58 * C690 - C129 * C614) * C102 +
                     (C58 * C788 - C129 * C724) * C59) *
                        C57 * C5200) *
                       C5120 * C5242 +
                   (((C58 * C132 - C129 * C70) * C102 +
                     (C58 * C207 - C129 * C158) * C59) *
                        C57 * C5223 +
                    ((C129 * C1167 - C58 * C1225) * C102 +
                     (C129 * C1253 - C58 * C1308) * C59) *
                        C57 * C5200) *
                       C5120 * C914)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C5223 +
           ((C66 * C612 - C57 * C616) * C129 +
            (C66 * C816 - C57 * C820) * C58) *
               C59 * C5200) *
              C5120 * C5241 +
          (((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
               C59 * C5223 +
           ((C57 * C620 - C66 * C614) * C129 +
            (C57 * C822 - C66 * C818) * C58) *
               C59 * C5200) *
              C5120 * C5242 +
          (((C57 * C76 - C66 * C70) * C129 + (C57 * C233 - C66 * C229) * C58) *
               C59 * C5223 +
           ((C66 * C1167 - C57 * C1168) * C129 +
            (C66 * C1335 - C57 * C1336) * C58) *
               C59 * C5200) *
              C5120 * C914)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C59 * C103 - C102 * C68) * C129 +
                     (C59 * C253 - C102 * C227) * C58) *
                        C57 * C5223 +
                    ((C102 * C612 - C59 * C654) * C129 +
                     (C102 * C816 - C59 * C850) * C58) *
                        C57 * C5200) *
                       C5120 * C5241 +
                   (((C102 * C69 - C59 * C104) * C129 +
                     (C102 * C228 - C59 * C254) * C58) *
                        C57 * C5223 +
                    ((C59 * C656 - C102 * C614) * C129 +
                     (C59 * C852 - C102 * C818) * C58) *
                        C57 * C5200) *
                       C5120 * C5242 +
                   (((C59 * C105 - C102 * C70) * C129 +
                     (C59 * C255 - C102 * C229) * C58) *
                        C57 * C5223 +
                    ((C102 * C1167 - C59 * C1197) * C129 +
                     (C102 * C1335 - C59 * C1363) * C58) *
                        C57 * C5200) *
                       C5120 * C914)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) *
                        C59 * C57 * C5223 -
                    (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) *
                        C59 * C57 * C5200) *
                       C5120 * C5241 +
                   ((C129 * C690 - C275 * C614 - C129 * C818 + C58 * C882) *
                        C59 * C57 * C5200 -
                    (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) *
                        C59 * C57 * C5223) *
                       C5120 * C5242 +
                   ((C129 * C132 - C275 * C70 - C129 * C229 + C58 * C278) *
                        C59 * C57 * C5223 -
                    (C129 * C1225 - C275 * C1167 - C129 * C1335 + C58 * C1390) *
                        C59 * C57 * C5200) *
                       C5120 * C914)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 *
                       C5136 * C5120 * C62 -
                   (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 * C59 *
                       C5136 * C5120 * C63 +
                   (C66 * C76 - C67 * C70 - C66 * C77 + C57 * C82) * C58 * C59 *
                       C5136 * C5120 * C64 -
                   (C66 * C78 - C67 * C71 - C66 * C79 + C57 * C83) * C58 * C59 *
                       C5136 * C5120 * C65)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 *
                        C59 * C5136 * C306 -
                    (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 *
                        C59 * C5136 * C307 +
                    (C66 * C317 - C67 * C312 - C66 * C318 + C57 * C324) * C58 *
                        C59 * C5136 * C308) *
                       C309 +
                   ((C66 * C319 - C67 * C313 - C66 * C320 + C57 * C325) * C58 *
                        C59 * C5136 * C307 -
                    (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 *
                        C59 * C5136 * C306 -
                    (C66 * C321 - C67 * C314 - C66 * C322 + C57 * C326) * C58 *
                        C59 * C5136 * C308) *
                       C5107)) /
                     (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
              C58 * C5136 * C5120 * C62 +
          ((C102 * C69 - C59 * C104) * C66 + (C102 * C75 - C59 * C108) * C57) *
              C58 * C5136 * C5120 * C63 +
          ((C59 * C105 - C102 * C70) * C66 + (C59 * C109 - C102 * C77) * C57) *
              C58 * C5136 * C5120 * C64 +
          ((C102 * C71 - C59 * C106) * C66 + (C102 * C79 - C59 * C110) * C57) *
              C58 * C5136 * C5120 * C65)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C5136 * C306 +
           ((C102 * C311 - C59 * C353) * C66 +
            (C102 * C316 - C59 * C357) * C57) *
               C58 * C5136 * C307 +
           ((C59 * C354 - C102 * C312) * C66 +
            (C59 * C358 - C102 * C318) * C57) *
               C58 * C5136 * C308) *
              C309 +
          (((C102 * C69 - C59 * C104) * C66 + (C102 * C75 - C59 * C108) * C57) *
               C58 * C5136 * C306 +
           ((C59 * C355 - C102 * C313) * C66 +
            (C59 * C359 - C102 * C320) * C57) *
               C58 * C5136 * C307 +
           ((C102 * C314 - C59 * C356) * C66 +
            (C102 * C322 - C59 * C360) * C57) *
               C58 * C5136 * C308) *
              C5107)) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
              C59 * C5136 * C5120 * C62 +
          ((C129 * C69 - C58 * C131) * C66 + (C129 * C75 - C58 * C135) * C57) *
              C59 * C5136 * C5120 * C63 +
          ((C58 * C132 - C129 * C70) * C66 + (C58 * C136 - C129 * C77) * C57) *
              C59 * C5136 * C5120 * C64 +
          ((C129 * C71 - C58 * C133) * C66 + (C129 * C79 - C58 * C137) * C57) *
              C59 * C5136 * C5120 * C65)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C5136 * C306 +
           ((C129 * C311 - C58 * C387) * C66 +
            (C129 * C316 - C58 * C391) * C57) *
               C59 * C5136 * C307 +
           ((C58 * C388 - C129 * C312) * C66 +
            (C58 * C392 - C129 * C318) * C57) *
               C59 * C5136 * C308) *
              C309 +
          (((C129 * C69 - C58 * C131) * C66 + (C129 * C75 - C58 * C135) * C57) *
               C59 * C5136 * C306 +
           ((C58 * C389 - C129 * C313) * C66 +
            (C58 * C393 - C129 * C320) * C57) *
               C59 * C5136 * C307 +
           ((C129 * C314 - C58 * C390) * C66 +
            (C129 * C322 - C58 * C394) * C57) *
               C59 * C5136 * C308) *
              C5107)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
              C58 * C5136 * C5120 * C62 +
          ((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
              C58 * C5136 * C5120 * C63 +
          ((C57 * C76 - C66 * C70) * C102 + (C57 * C162 - C66 * C158) * C59) *
              C58 * C5136 * C5120 * C64 +
          ((C66 * C71 - C57 * C78) * C102 + (C66 * C159 - C57 * C163) * C59) *
              C58 * C5136 * C5120 * C65)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C5136 * C306 +
           ((C66 * C311 - C57 * C315) * C102 +
            (C66 * C421 - C57 * C425) * C59) *
               C58 * C5136 * C307 +
           ((C57 * C317 - C66 * C312) * C102 +
            (C57 * C426 - C66 * C422) * C59) *
               C58 * C5136 * C308) *
              C309 +
          (((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
               C58 * C5136 * C306 +
           ((C57 * C319 - C66 * C313) * C102 +
            (C57 * C427 - C66 * C423) * C59) *
               C58 * C5136 * C307 +
           ((C66 * C314 - C57 * C321) * C102 +
            (C66 * C424 - C57 * C428) * C59) *
               C58 * C5136 * C308) *
              C5107)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) * C57 *
                       C58 * C5136 * C5120 * C62 -
                   (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) * C57 *
                       C58 * C5136 * C5120 * C63 +
                   (C102 * C105 - C182 * C70 - C102 * C158 + C59 * C185) * C57 *
                       C58 * C5136 * C5120 * C64 -
                   (C102 * C106 - C182 * C71 - C102 * C159 + C59 * C186) * C57 *
                       C58 * C5136 * C5120 * C65)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) *
                        C57 * C58 * C5136 * C306 -
                    (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) *
                        C57 * C58 * C5136 * C307 +
                    (C102 * C354 - C182 * C312 - C102 * C422 + C59 * C456) *
                        C57 * C58 * C5136 * C308) *
                       C309 +
                   ((C102 * C355 - C182 * C313 - C102 * C423 + C59 * C457) *
                        C57 * C58 * C5136 * C307 -
                    (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) *
                        C57 * C58 * C5136 * C306 -
                    (C102 * C356 - C182 * C314 - C102 * C424 + C59 * C458) *
                        C57 * C58 * C5136 * C308) *
                       C5107)) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C58 * C130 - C129 * C68) * C102 +
                    (C58 * C205 - C129 * C156) * C59) *
                       C57 * C5136 * C5120 * C62 +
                   ((C129 * C69 - C58 * C131) * C102 +
                    (C129 * C157 - C58 * C206) * C59) *
                       C57 * C5136 * C5120 * C63 +
                   ((C58 * C132 - C129 * C70) * C102 +
                    (C58 * C207 - C129 * C158) * C59) *
                       C57 * C5136 * C5120 * C64 +
                   ((C129 * C71 - C58 * C133) * C102 +
                    (C129 * C159 - C58 * C208) * C59) *
                       C57 * C5136 * C5120 * C65)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C58 * C130 - C129 * C68) * C102 +
                     (C58 * C205 - C129 * C156) * C59) *
                        C57 * C5136 * C306 +
                    ((C129 * C311 - C58 * C387) * C102 +
                     (C129 * C421 - C58 * C485) * C59) *
                        C57 * C5136 * C307 +
                    ((C58 * C388 - C129 * C312) * C102 +
                     (C58 * C486 - C129 * C422) * C59) *
                        C57 * C5136 * C308) *
                       C309 +
                   (((C129 * C69 - C58 * C131) * C102 +
                     (C129 * C157 - C58 * C206) * C59) *
                        C57 * C5136 * C306 +
                    ((C58 * C389 - C129 * C313) * C102 +
                     (C58 * C487 - C129 * C423) * C59) *
                        C57 * C5136 * C307 +
                    ((C129 * C314 - C58 * C390) * C102 +
                     (C129 * C424 - C58 * C488) * C59) *
                        C57 * C5136 * C308) *
                       C5107)) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
              C59 * C5136 * C5120 * C62 +
          ((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
              C59 * C5136 * C5120 * C63 +
          ((C57 * C76 - C66 * C70) * C129 + (C57 * C233 - C66 * C229) * C58) *
              C59 * C5136 * C5120 * C64 +
          ((C66 * C71 - C57 * C78) * C129 + (C66 * C230 - C57 * C234) * C58) *
              C59 * C5136 * C5120 * C65)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C5136 * C306 +
           ((C66 * C311 - C57 * C315) * C129 +
            (C66 * C515 - C57 * C519) * C58) *
               C59 * C5136 * C307 +
           ((C57 * C317 - C66 * C312) * C129 +
            (C57 * C520 - C66 * C516) * C58) *
               C59 * C5136 * C308) *
              C309 +
          (((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
               C59 * C5136 * C306 +
           ((C57 * C319 - C66 * C313) * C129 +
            (C57 * C521 - C66 * C517) * C58) *
               C59 * C5136 * C307 +
           ((C66 * C314 - C57 * C321) * C129 +
            (C66 * C518 - C57 * C522) * C58) *
               C59 * C5136 * C308) *
              C5107)) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C59 * C103 - C102 * C68) * C129 +
                    (C59 * C253 - C102 * C227) * C58) *
                       C57 * C5136 * C5120 * C62 +
                   ((C102 * C69 - C59 * C104) * C129 +
                    (C102 * C228 - C59 * C254) * C58) *
                       C57 * C5136 * C5120 * C63 +
                   ((C59 * C105 - C102 * C70) * C129 +
                    (C59 * C255 - C102 * C229) * C58) *
                       C57 * C5136 * C5120 * C64 +
                   ((C102 * C71 - C59 * C106) * C129 +
                    (C102 * C230 - C59 * C256) * C58) *
                       C57 * C5136 * C5120 * C65)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C59 * C103 - C102 * C68) * C129 +
                     (C59 * C253 - C102 * C227) * C58) *
                        C57 * C5136 * C306 +
                    ((C102 * C311 - C59 * C353) * C129 +
                     (C102 * C515 - C59 * C549) * C58) *
                        C57 * C5136 * C307 +
                    ((C59 * C354 - C102 * C312) * C129 +
                     (C59 * C550 - C102 * C516) * C58) *
                        C57 * C5136 * C308) *
                       C309 +
                   (((C102 * C69 - C59 * C104) * C129 +
                     (C102 * C228 - C59 * C254) * C58) *
                        C57 * C5136 * C306 +
                    ((C59 * C355 - C102 * C313) * C129 +
                     (C59 * C551 - C102 * C517) * C58) *
                        C57 * C5136 * C307 +
                    ((C102 * C314 - C59 * C356) * C129 +
                     (C102 * C518 - C59 * C552) * C58) *
                        C57 * C5136 * C308) *
                       C5107)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) * C59 *
                       C57 * C5136 * C5120 * C62 -
                   (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) * C59 *
                       C57 * C5136 * C5120 * C63 +
                   (C129 * C132 - C275 * C70 - C129 * C229 + C58 * C278) * C59 *
                       C57 * C5136 * C5120 * C64 -
                   (C129 * C133 - C275 * C71 - C129 * C230 + C58 * C279) * C59 *
                       C57 * C5136 * C5120 * C65)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) *
                        C59 * C57 * C5136 * C306 -
                    (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) *
                        C59 * C57 * C5136 * C307 +
                    (C129 * C388 - C275 * C312 - C129 * C516 + C58 * C580) *
                        C59 * C57 * C5136 * C308) *
                       C309 +
                   ((C129 * C389 - C275 * C313 - C129 * C517 + C58 * C581) *
                        C59 * C57 * C5136 * C307 -
                    (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) *
                        C59 * C57 * C5136 * C306 -
                    (C129 * C390 - C275 * C314 - C129 * C518 + C58 * C582) *
                        C59 * C57 * C5136 * C308) *
                       C5107)) /
                     (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 *
                        C59 * C5136 * C5243 -
                    (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 *
                        C59 * C5136 * C5244 +
                    (C66 * C317 - C67 * C312 - C66 * C318 + C57 * C324) * C58 *
                        C59 * C5136 * C2429) *
                       C5214 +
                   ((C66 * C319 - C67 * C313 - C66 * C320 + C57 * C325) * C58 *
                        C59 * C5136 * C5244 -
                    (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 *
                        C59 * C5136 * C5243 -
                    (C66 * C321 - C67 * C314 - C66 * C322 + C57 * C326) * C58 *
                        C59 * C5136 * C2429) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C5136 * C5243 +
           ((C102 * C311 - C59 * C353) * C66 +
            (C102 * C316 - C59 * C357) * C57) *
               C58 * C5136 * C5244 +
           ((C59 * C354 - C102 * C312) * C66 +
            (C59 * C358 - C102 * C318) * C57) *
               C58 * C5136 * C2429) *
              C5214 +
          (((C102 * C69 - C59 * C104) * C66 + (C102 * C75 - C59 * C108) * C57) *
               C58 * C5136 * C5243 +
           ((C59 * C355 - C102 * C313) * C66 +
            (C59 * C359 - C102 * C320) * C57) *
               C58 * C5136 * C5244 +
           ((C102 * C314 - C59 * C356) * C66 +
            (C102 * C322 - C59 * C360) * C57) *
               C58 * C5136 * C2429) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C5136 * C5243 +
           ((C129 * C311 - C58 * C387) * C66 +
            (C129 * C316 - C58 * C391) * C57) *
               C59 * C5136 * C5244 +
           ((C58 * C388 - C129 * C312) * C66 +
            (C58 * C392 - C129 * C318) * C57) *
               C59 * C5136 * C2429) *
              C5214 +
          (((C129 * C69 - C58 * C131) * C66 + (C129 * C75 - C58 * C135) * C57) *
               C59 * C5136 * C5243 +
           ((C58 * C389 - C129 * C313) * C66 +
            (C58 * C393 - C129 * C320) * C57) *
               C59 * C5136 * C5244 +
           ((C129 * C314 - C58 * C390) * C66 +
            (C129 * C322 - C58 * C394) * C57) *
               C59 * C5136 * C2429) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C5136 * C5243 +
           ((C66 * C311 - C57 * C315) * C102 +
            (C66 * C421 - C57 * C425) * C59) *
               C58 * C5136 * C5244 +
           ((C57 * C317 - C66 * C312) * C102 +
            (C57 * C426 - C66 * C422) * C59) *
               C58 * C5136 * C2429) *
              C5214 +
          (((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
               C58 * C5136 * C5243 +
           ((C57 * C319 - C66 * C313) * C102 +
            (C57 * C427 - C66 * C423) * C59) *
               C58 * C5136 * C5244 +
           ((C66 * C314 - C57 * C321) * C102 +
            (C66 * C424 - C57 * C428) * C59) *
               C58 * C5136 * C2429) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) *
                        C57 * C58 * C5136 * C5243 -
                    (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) *
                        C57 * C58 * C5136 * C5244 +
                    (C102 * C354 - C182 * C312 - C102 * C422 + C59 * C456) *
                        C57 * C58 * C5136 * C2429) *
                       C5214 +
                   ((C102 * C355 - C182 * C313 - C102 * C423 + C59 * C457) *
                        C57 * C58 * C5136 * C5244 -
                    (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) *
                        C57 * C58 * C5136 * C5243 -
                    (C102 * C356 - C182 * C314 - C102 * C424 + C59 * C458) *
                        C57 * C58 * C5136 * C2429) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C58 * C130 - C129 * C68) * C102 +
                     (C58 * C205 - C129 * C156) * C59) *
                        C57 * C5136 * C5243 +
                    ((C129 * C311 - C58 * C387) * C102 +
                     (C129 * C421 - C58 * C485) * C59) *
                        C57 * C5136 * C5244 +
                    ((C58 * C388 - C129 * C312) * C102 +
                     (C58 * C486 - C129 * C422) * C59) *
                        C57 * C5136 * C2429) *
                       C5214 +
                   (((C129 * C69 - C58 * C131) * C102 +
                     (C129 * C157 - C58 * C206) * C59) *
                        C57 * C5136 * C5243 +
                    ((C58 * C389 - C129 * C313) * C102 +
                     (C58 * C487 - C129 * C423) * C59) *
                        C57 * C5136 * C5244 +
                    ((C129 * C314 - C58 * C390) * C102 +
                     (C129 * C424 - C58 * C488) * C59) *
                        C57 * C5136 * C2429) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C5136 * C5243 +
           ((C66 * C311 - C57 * C315) * C129 +
            (C66 * C515 - C57 * C519) * C58) *
               C59 * C5136 * C5244 +
           ((C57 * C317 - C66 * C312) * C129 +
            (C57 * C520 - C66 * C516) * C58) *
               C59 * C5136 * C2429) *
              C5214 +
          (((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
               C59 * C5136 * C5243 +
           ((C57 * C319 - C66 * C313) * C129 +
            (C57 * C521 - C66 * C517) * C58) *
               C59 * C5136 * C5244 +
           ((C66 * C314 - C57 * C321) * C129 +
            (C66 * C518 - C57 * C522) * C58) *
               C59 * C5136 * C2429) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C59 * C103 - C102 * C68) * C129 +
                     (C59 * C253 - C102 * C227) * C58) *
                        C57 * C5136 * C5243 +
                    ((C102 * C311 - C59 * C353) * C129 +
                     (C102 * C515 - C59 * C549) * C58) *
                        C57 * C5136 * C5244 +
                    ((C59 * C354 - C102 * C312) * C129 +
                     (C59 * C550 - C102 * C516) * C58) *
                        C57 * C5136 * C2429) *
                       C5214 +
                   (((C102 * C69 - C59 * C104) * C129 +
                     (C102 * C228 - C59 * C254) * C58) *
                        C57 * C5136 * C5243 +
                    ((C59 * C355 - C102 * C313) * C129 +
                     (C59 * C551 - C102 * C517) * C58) *
                        C57 * C5136 * C5244 +
                    ((C102 * C314 - C59 * C356) * C129 +
                     (C102 * C518 - C59 * C552) * C58) *
                        C57 * C5136 * C2429) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) *
                        C59 * C57 * C5136 * C5243 -
                    (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) *
                        C59 * C57 * C5136 * C5244 +
                    (C129 * C388 - C275 * C312 - C129 * C516 + C58 * C580) *
                        C59 * C57 * C5136 * C2429) *
                       C5214 +
                   ((C129 * C389 - C275 * C313 - C129 * C517 + C58 * C581) *
                        C59 * C57 * C5136 * C5244 -
                    (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) *
                        C59 * C57 * C5136 * C5243 -
                    (C129 * C390 - C275 * C314 - C129 * C518 + C58 * C582) *
                        C59 * C57 * C5136 * C2429) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C5223 -
           (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) * C58 * C59 *
               C5200) *
              C5243 +
          ((C66 * C1427 - C67 * C1425 - C66 * C1428 + C57 * C1431) * C58 * C59 *
               C5200 -
           (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 * C59 *
               C5223) *
              C5244 +
          ((C66 * C317 - C67 * C312 - C66 * C318 + C57 * C324) * C58 * C59 *
               C5223 -
           (C66 * C2973 - C67 * C2972 - C66 * C2974 + C57 * C2975) * C58 * C59 *
               C5200) *
              C2429) *
         C5101) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C5223 +
           ((C102 * C612 - C59 * C654) * C66 +
            (C102 * C617 - C59 * C658) * C57) *
               C58 * C5200) *
              C5243 +
          (((C102 * C311 - C59 * C353) * C66 +
            (C102 * C316 - C59 * C357) * C57) *
               C58 * C5223 +
           ((C59 * C1467 - C102 * C1425) * C66 +
            (C59 * C1469 - C102 * C1428) * C57) *
               C58 * C5200) *
              C5244 +
          (((C59 * C354 - C102 * C312) * C66 +
            (C59 * C358 - C102 * C318) * C57) *
               C58 * C5223 +
           ((C102 * C2972 - C59 * C3002) * C66 +
            (C102 * C2974 - C59 * C3003) * C57) *
               C58 * C5200) *
              C2429) *
         C5101) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C5223 +
           ((C129 * C612 - C58 * C688) * C66 +
            (C129 * C617 - C58 * C692) * C57) *
               C59 * C5200) *
              C5243 +
          (((C129 * C311 - C58 * C387) * C66 +
            (C129 * C316 - C58 * C391) * C57) *
               C59 * C5223 +
           ((C58 * C1505 - C129 * C1425) * C66 +
            (C58 * C1507 - C129 * C1428) * C57) *
               C59 * C5200) *
              C5244 +
          (((C58 * C388 - C129 * C312) * C66 +
            (C58 * C392 - C129 * C318) * C57) *
               C59 * C5223 +
           ((C129 * C2972 - C58 * C3030) * C66 +
            (C129 * C2974 - C58 * C3031) * C57) *
               C59 * C5200) *
              C2429) *
         C5101) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C5223 +
           ((C66 * C612 - C57 * C616) * C102 +
            (C66 * C722 - C57 * C726) * C59) *
               C58 * C5200) *
              C5243 +
          (((C66 * C311 - C57 * C315) * C102 +
            (C66 * C421 - C57 * C425) * C59) *
               C58 * C5223 +
           ((C57 * C1427 - C66 * C1425) * C102 +
            (C57 * C1545 - C66 * C1543) * C59) *
               C58 * C5200) *
              C5244 +
          (((C57 * C317 - C66 * C312) * C102 +
            (C57 * C426 - C66 * C422) * C59) *
               C58 * C5223 +
           ((C66 * C2972 - C57 * C2973) * C102 +
            (C66 * C3058 - C57 * C3059) * C59) *
               C58 * C5200) *
              C2429) *
         C5101) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) *
                        C57 * C58 * C5223 -
                    (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) *
                        C57 * C58 * C5200) *
                       C5243 +
                   ((C102 * C1467 - C182 * C1425 - C102 * C1543 + C59 * C1581) *
                        C57 * C58 * C5200 -
                    (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) *
                        C57 * C58 * C5223) *
                       C5244 +
                   ((C102 * C354 - C182 * C312 - C102 * C422 + C59 * C456) *
                        C57 * C58 * C5223 -
                    (C102 * C3002 - C182 * C2972 - C102 * C3058 + C59 * C3086) *
                        C57 * C58 * C5200) *
                       C2429) *
                  C5101) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C58 * C130 - C129 * C68) * C102 +
                     (C58 * C205 - C129 * C156) * C59) *
                        C57 * C5223 +
                    ((C129 * C612 - C58 * C688) * C102 +
                     (C129 * C722 - C58 * C786) * C59) *
                        C57 * C5200) *
                       C5243 +
                   (((C129 * C311 - C58 * C387) * C102 +
                     (C129 * C421 - C58 * C485) * C59) *
                        C57 * C5223 +
                    ((C58 * C1505 - C129 * C1425) * C102 +
                     (C58 * C1617 - C129 * C1543) * C59) *
                        C57 * C5200) *
                       C5244 +
                   (((C58 * C388 - C129 * C312) * C102 +
                     (C58 * C486 - C129 * C422) * C59) *
                        C57 * C5223 +
                    ((C129 * C2972 - C58 * C3030) * C102 +
                     (C129 * C3058 - C58 * C3113) * C59) *
                        C57 * C5200) *
                       C2429) *
                  C5101) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C5223 +
           ((C66 * C612 - C57 * C616) * C129 +
            (C66 * C816 - C57 * C820) * C58) *
               C59 * C5200) *
              C5243 +
          (((C66 * C311 - C57 * C315) * C129 +
            (C66 * C515 - C57 * C519) * C58) *
               C59 * C5223 +
           ((C57 * C1427 - C66 * C1425) * C129 +
            (C57 * C1655 - C66 * C1653) * C58) *
               C59 * C5200) *
              C5244 +
          (((C57 * C317 - C66 * C312) * C129 +
            (C57 * C520 - C66 * C516) * C58) *
               C59 * C5223 +
           ((C66 * C2972 - C57 * C2973) * C129 +
            (C66 * C3140 - C57 * C3141) * C58) *
               C59 * C5200) *
              C2429) *
         C5101) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C59 * C103 - C102 * C68) * C129 +
                     (C59 * C253 - C102 * C227) * C58) *
                        C57 * C5223 +
                    ((C102 * C612 - C59 * C654) * C129 +
                     (C102 * C816 - C59 * C850) * C58) *
                        C57 * C5200) *
                       C5243 +
                   (((C102 * C311 - C59 * C353) * C129 +
                     (C102 * C515 - C59 * C549) * C58) *
                        C57 * C5223 +
                    ((C59 * C1467 - C102 * C1425) * C129 +
                     (C59 * C1691 - C102 * C1653) * C58) *
                        C57 * C5200) *
                       C5244 +
                   (((C59 * C354 - C102 * C312) * C129 +
                     (C59 * C550 - C102 * C516) * C58) *
                        C57 * C5223 +
                    ((C102 * C2972 - C59 * C3002) * C129 +
                     (C102 * C3140 - C59 * C3168) * C58) *
                        C57 * C5200) *
                       C2429) *
                  C5101) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) *
                        C59 * C57 * C5223 -
                    (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) *
                        C59 * C57 * C5200) *
                       C5243 +
                   ((C129 * C1505 - C275 * C1425 - C129 * C1653 + C58 * C1727) *
                        C59 * C57 * C5200 -
                    (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) *
                        C59 * C57 * C5223) *
                       C5244 +
                   ((C129 * C388 - C275 * C312 - C129 * C516 + C58 * C580) *
                        C59 * C57 * C5223 -
                    (C129 * C3030 - C275 * C2972 - C129 * C3140 + C58 * C3195) *
                        C59 * C57 * C5200) *
                       C2429) *
                  C5101) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         ((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C5136 *
              C1986 -
          (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 * C59 *
              C5136 * C1987 +
          (C66 * C317 - C67 * C312 - C66 * C318 + C57 * C324) * C58 * C59 *
              C5136 * C1988 -
          (C66 * C1992 - C67 * C1991 - C66 * C1993 + C57 * C1994) * C58 * C59 *
              C5136 * C1989) *
         C5101) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C5136 *
               C1755 -
           (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 * C59 *
               C5136 * C5172) *
              C1757 +
          ((C66 * C319 - C67 * C313 - C66 * C320 + C57 * C325) * C58 * C59 *
               C5136 * C5172 -
           (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 * C59 * C5136 *
               C1755) *
              C1758 +
          ((C66 * C76 - C67 * C70 - C66 * C77 + C57 * C82) * C58 * C59 * C5136 *
               C1755 -
           (C66 * C916 - C67 * C915 - C66 * C917 + C57 * C918) * C58 * C59 *
               C5136 * C5172) *
              C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C609 -
           (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) * C58 * C59 *
               C610 +
           (C66 * C618 - C67 * C613 - C66 * C619 + C57 * C625) * C58 * C59 *
               C611) *
              C1755 +
          ((C66 * C1427 - C67 * C1425 - C66 * C1428 + C57 * C1431) * C58 * C59 *
               C610 -
           (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 * C59 *
               C609 -
           (C66 * C2178 - C67 * C2177 - C66 * C2179 + C57 * C2180) * C58 * C59 *
               C611) *
              C5172) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
              C58 * C5136 * C1986 +
          ((C102 * C311 - C59 * C353) * C66 +
           (C102 * C316 - C59 * C357) * C57) *
              C58 * C5136 * C1987 +
          ((C59 * C354 - C102 * C312) * C66 +
           (C59 * C358 - C102 * C318) * C57) *
              C58 * C5136 * C1988 +
          ((C102 * C1991 - C59 * C2013) * C66 +
           (C102 * C1993 - C59 * C2014) * C57) *
              C58 * C5136 * C1989) *
         C5101) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C5136 * C1755 +
           ((C102 * C311 - C59 * C353) * C66 +
            (C102 * C316 - C59 * C357) * C57) *
               C58 * C5136 * C5172) *
              C1757 +
          (((C102 * C69 - C59 * C104) * C66 + (C102 * C75 - C59 * C108) * C57) *
               C58 * C5136 * C1755 +
           ((C59 * C355 - C102 * C313) * C66 +
            (C59 * C359 - C102 * C320) * C57) *
               C58 * C5136 * C5172) *
              C1758 +
          (((C59 * C105 - C102 * C70) * C66 + (C59 * C109 - C102 * C77) * C57) *
               C58 * C5136 * C1755 +
           ((C102 * C915 - C59 * C945) * C66 +
            (C102 * C917 - C59 * C946) * C57) *
               C58 * C5136 * C5172) *
              C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C609 +
           ((C102 * C612 - C59 * C654) * C66 +
            (C102 * C617 - C59 * C658) * C57) *
               C58 * C610 +
           ((C59 * C655 - C102 * C613) * C66 +
            (C59 * C659 - C102 * C619) * C57) *
               C58 * C611) *
              C1755 +
          (((C102 * C311 - C59 * C353) * C66 +
            (C102 * C316 - C59 * C357) * C57) *
               C58 * C609 +
           ((C59 * C1467 - C102 * C1425) * C66 +
            (C59 * C1469 - C102 * C1428) * C57) *
               C58 * C610 +
           ((C102 * C2177 - C59 * C2207) * C66 +
            (C102 * C2179 - C59 * C2208) * C57) *
               C58 * C611) *
              C5172) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::pow(Pi, 2.5) *
         (((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
              C59 * C5136 * C1986 +
          ((C129 * C311 - C58 * C387) * C66 +
           (C129 * C316 - C58 * C391) * C57) *
              C59 * C5136 * C1987 +
          ((C58 * C388 - C129 * C312) * C66 +
           (C58 * C392 - C129 * C318) * C57) *
              C59 * C5136 * C1988 +
          ((C129 * C1991 - C58 * C2033) * C66 +
           (C129 * C1993 - C58 * C2034) * C57) *
              C59 * C5136 * C1989) *
         C5101) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C5136 * C1755 +
           ((C129 * C311 - C58 * C387) * C66 +
            (C129 * C316 - C58 * C391) * C57) *
               C59 * C5136 * C5172) *
              C1757 +
          (((C129 * C69 - C58 * C131) * C66 + (C129 * C75 - C58 * C135) * C57) *
               C59 * C5136 * C1755 +
           ((C58 * C389 - C129 * C313) * C66 +
            (C58 * C393 - C129 * C320) * C57) *
               C59 * C5136 * C5172) *
              C1758 +
          (((C58 * C132 - C129 * C70) * C66 + (C58 * C136 - C129 * C77) * C57) *
               C59 * C5136 * C1755 +
           ((C129 * C915 - C58 * C973) * C66 +
            (C129 * C917 - C58 * C974) * C57) *
               C59 * C5136 * C5172) *
              C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C609 +
           ((C129 * C612 - C58 * C688) * C66 +
            (C129 * C617 - C58 * C692) * C57) *
               C59 * C610 +
           ((C58 * C689 - C129 * C613) * C66 +
            (C58 * C693 - C129 * C619) * C57) *
               C59 * C611) *
              C1755 +
          (((C129 * C311 - C58 * C387) * C66 +
            (C129 * C316 - C58 * C391) * C57) *
               C59 * C609 +
           ((C58 * C1505 - C129 * C1425) * C66 +
            (C58 * C1507 - C129 * C1428) * C57) *
               C59 * C610 +
           ((C129 * C2177 - C58 * C2235) * C66 +
            (C129 * C2179 - C58 * C2236) * C57) *
               C59 * C611) *
              C5172) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
              C58 * C5136 * C1986 +
          ((C66 * C311 - C57 * C315) * C102 + (C66 * C421 - C57 * C425) * C59) *
              C58 * C5136 * C1987 +
          ((C57 * C317 - C66 * C312) * C102 + (C57 * C426 - C66 * C422) * C59) *
              C58 * C5136 * C1988 +
          ((C66 * C1991 - C57 * C1992) * C102 +
           (C66 * C2053 - C57 * C2054) * C59) *
              C58 * C5136 * C1989) *
         C5101) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C5136 * C1755 +
           ((C66 * C311 - C57 * C315) * C102 +
            (C66 * C421 - C57 * C425) * C59) *
               C58 * C5136 * C5172) *
              C1757 +
          (((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
               C58 * C5136 * C1755 +
           ((C57 * C319 - C66 * C313) * C102 +
            (C57 * C427 - C66 * C423) * C59) *
               C58 * C5136 * C5172) *
              C1758 +
          (((C57 * C76 - C66 * C70) * C102 + (C57 * C162 - C66 * C158) * C59) *
               C58 * C5136 * C1755 +
           ((C66 * C915 - C57 * C916) * C102 +
            (C66 * C1001 - C57 * C1002) * C59) *
               C58 * C5136 * C5172) *
              C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C609 +
           ((C66 * C612 - C57 * C616) * C102 +
            (C66 * C722 - C57 * C726) * C59) *
               C58 * C610 +
           ((C57 * C618 - C66 * C613) * C102 +
            (C57 * C727 - C66 * C723) * C59) *
               C58 * C611) *
              C1755 +
          (((C66 * C311 - C57 * C315) * C102 +
            (C66 * C421 - C57 * C425) * C59) *
               C58 * C609 +
           ((C57 * C1427 - C66 * C1425) * C102 +
            (C57 * C1545 - C66 * C1543) * C59) *
               C58 * C610 +
           ((C66 * C2177 - C57 * C2178) * C102 +
            (C66 * C2263 - C57 * C2264) * C59) *
               C58 * C611) *
              C5172) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] += (-std::pow(Pi, 2.5) *
                  ((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) * C57 *
                       C58 * C5136 * C1986 -
                   (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) *
                       C57 * C58 * C5136 * C1987 +
                   (C102 * C354 - C182 * C312 - C102 * C422 + C59 * C456) *
                       C57 * C58 * C5136 * C1988 -
                   (C102 * C2013 - C182 * C1991 - C102 * C2053 + C59 * C2073) *
                       C57 * C58 * C5136 * C1989) *
                  C5101) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) *
                        C57 * C58 * C5136 * C1755 -
                    (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) *
                        C57 * C58 * C5136 * C5172) *
                       C1757 +
                   ((C102 * C355 - C182 * C313 - C102 * C423 + C59 * C457) *
                        C57 * C58 * C5136 * C5172 -
                    (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) *
                        C57 * C58 * C5136 * C1755) *
                       C1758 +
                   ((C102 * C105 - C182 * C70 - C102 * C158 + C59 * C185) *
                        C57 * C58 * C5136 * C1755 -
                    (C102 * C945 - C182 * C915 - C102 * C1001 + C59 * C1029) *
                        C57 * C58 * C5136 * C5172) *
                       C1759)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) *
                        C57 * C58 * C609 -
                    (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) *
                        C57 * C58 * C610 +
                    (C102 * C655 - C182 * C613 - C102 * C723 + C59 * C757) *
                        C57 * C58 * C611) *
                       C1755 +
                   ((C102 * C1467 - C182 * C1425 - C102 * C1543 + C59 * C1581) *
                        C57 * C58 * C610 -
                    (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) *
                        C57 * C58 * C609 -
                    (C102 * C2207 - C182 * C2177 - C102 * C2263 + C59 * C2291) *
                        C57 * C58 * C611) *
                       C5172) *
                  C5101) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[7] += (-std::pow(Pi, 2.5) *
                  (((C58 * C130 - C129 * C68) * C102 +
                    (C58 * C205 - C129 * C156) * C59) *
                       C57 * C5136 * C1986 +
                   ((C129 * C311 - C58 * C387) * C102 +
                    (C129 * C421 - C58 * C485) * C59) *
                       C57 * C5136 * C1987 +
                   ((C58 * C388 - C129 * C312) * C102 +
                    (C58 * C486 - C129 * C422) * C59) *
                       C57 * C5136 * C1988 +
                   ((C129 * C1991 - C58 * C2033) * C102 +
                    (C129 * C2053 - C58 * C2092) * C59) *
                       C57 * C5136 * C1989) *
                  C5101) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * ((((C58 * C130 - C129 * C68) * C102 +
                                         (C58 * C205 - C129 * C156) * C59) *
                                            C57 * C5136 * C1755 +
                                        ((C129 * C311 - C58 * C387) * C102 +
                                         (C129 * C421 - C58 * C485) * C59) *
                                            C57 * C5136 * C5172) *
                                           C1757 +
                                       (((C129 * C69 - C58 * C131) * C102 +
                                         (C129 * C157 - C58 * C206) * C59) *
                                            C57 * C5136 * C1755 +
                                        ((C58 * C389 - C129 * C313) * C102 +
                                         (C58 * C487 - C129 * C423) * C59) *
                                            C57 * C5136 * C5172) *
                                           C1758 +
                                       (((C58 * C132 - C129 * C70) * C102 +
                                         (C58 * C207 - C129 * C158) * C59) *
                                            C57 * C5136 * C1755 +
                                        ((C129 * C915 - C58 * C973) * C102 +
                                         (C129 * C1001 - C58 * C1056) * C59) *
                                            C57 * C5136 * C5172) *
                                           C1759)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C58 * C130 - C129 * C68) * C102 +
                     (C58 * C205 - C129 * C156) * C59) *
                        C57 * C609 +
                    ((C129 * C612 - C58 * C688) * C102 +
                     (C129 * C722 - C58 * C786) * C59) *
                        C57 * C610 +
                    ((C58 * C689 - C129 * C613) * C102 +
                     (C58 * C787 - C129 * C723) * C59) *
                        C57 * C611) *
                       C1755 +
                   (((C129 * C311 - C58 * C387) * C102 +
                     (C129 * C421 - C58 * C485) * C59) *
                        C57 * C609 +
                    ((C58 * C1505 - C129 * C1425) * C102 +
                     (C58 * C1617 - C129 * C1543) * C59) *
                        C57 * C610 +
                    ((C129 * C2177 - C58 * C2235) * C102 +
                     (C129 * C2263 - C58 * C2318) * C59) *
                        C57 * C611) *
                       C5172) *
                  C5101) /
                     (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
              C59 * C5136 * C1986 +
          ((C66 * C311 - C57 * C315) * C129 + (C66 * C515 - C57 * C519) * C58) *
              C59 * C5136 * C1987 +
          ((C57 * C317 - C66 * C312) * C129 + (C57 * C520 - C66 * C516) * C58) *
              C59 * C5136 * C1988 +
          ((C66 * C1991 - C57 * C1992) * C129 +
           (C66 * C2111 - C57 * C2112) * C58) *
              C59 * C5136 * C1989) *
         C5101) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C5136 * C1755 +
           ((C66 * C311 - C57 * C315) * C129 +
            (C66 * C515 - C57 * C519) * C58) *
               C59 * C5136 * C5172) *
              C1757 +
          (((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
               C59 * C5136 * C1755 +
           ((C57 * C319 - C66 * C313) * C129 +
            (C57 * C521 - C66 * C517) * C58) *
               C59 * C5136 * C5172) *
              C1758 +
          (((C57 * C76 - C66 * C70) * C129 + (C57 * C233 - C66 * C229) * C58) *
               C59 * C5136 * C1755 +
           ((C66 * C915 - C57 * C916) * C129 +
            (C66 * C1083 - C57 * C1084) * C58) *
               C59 * C5136 * C5172) *
              C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C609 +
           ((C66 * C612 - C57 * C616) * C129 +
            (C66 * C816 - C57 * C820) * C58) *
               C59 * C610 +
           ((C57 * C618 - C66 * C613) * C129 +
            (C57 * C821 - C66 * C817) * C58) *
               C59 * C611) *
              C1755 +
          (((C66 * C311 - C57 * C315) * C129 +
            (C66 * C515 - C57 * C519) * C58) *
               C59 * C609 +
           ((C57 * C1427 - C66 * C1425) * C129 +
            (C57 * C1655 - C66 * C1653) * C58) *
               C59 * C610 +
           ((C66 * C2177 - C57 * C2178) * C129 +
            (C66 * C2345 - C57 * C2346) * C58) *
               C59 * C611) *
              C5172) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] += (-std::pow(Pi, 2.5) *
                  (((C59 * C103 - C102 * C68) * C129 +
                    (C59 * C253 - C102 * C227) * C58) *
                       C57 * C5136 * C1986 +
                   ((C102 * C311 - C59 * C353) * C129 +
                    (C102 * C515 - C59 * C549) * C58) *
                       C57 * C5136 * C1987 +
                   ((C59 * C354 - C102 * C312) * C129 +
                    (C59 * C550 - C102 * C516) * C58) *
                       C57 * C5136 * C1988 +
                   ((C102 * C1991 - C59 * C2013) * C129 +
                    (C102 * C2111 - C59 * C2131) * C58) *
                       C57 * C5136 * C1989) *
                  C5101) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * ((((C59 * C103 - C102 * C68) * C129 +
                                         (C59 * C253 - C102 * C227) * C58) *
                                            C57 * C5136 * C1755 +
                                        ((C102 * C311 - C59 * C353) * C129 +
                                         (C102 * C515 - C59 * C549) * C58) *
                                            C57 * C5136 * C5172) *
                                           C1757 +
                                       (((C102 * C69 - C59 * C104) * C129 +
                                         (C102 * C228 - C59 * C254) * C58) *
                                            C57 * C5136 * C1755 +
                                        ((C59 * C355 - C102 * C313) * C129 +
                                         (C59 * C551 - C102 * C517) * C58) *
                                            C57 * C5136 * C5172) *
                                           C1758 +
                                       (((C59 * C105 - C102 * C70) * C129 +
                                         (C59 * C255 - C102 * C229) * C58) *
                                            C57 * C5136 * C1755 +
                                        ((C102 * C915 - C59 * C945) * C129 +
                                         (C102 * C1083 - C59 * C1111) * C58) *
                                            C57 * C5136 * C5172) *
                                           C1759)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C59 * C103 - C102 * C68) * C129 +
                     (C59 * C253 - C102 * C227) * C58) *
                        C57 * C609 +
                    ((C102 * C612 - C59 * C654) * C129 +
                     (C102 * C816 - C59 * C850) * C58) *
                        C57 * C610 +
                    ((C59 * C655 - C102 * C613) * C129 +
                     (C59 * C851 - C102 * C817) * C58) *
                        C57 * C611) *
                       C1755 +
                   (((C102 * C311 - C59 * C353) * C129 +
                     (C102 * C515 - C59 * C549) * C58) *
                        C57 * C609 +
                    ((C59 * C1467 - C102 * C1425) * C129 +
                     (C59 * C1691 - C102 * C1653) * C58) *
                        C57 * C610 +
                    ((C102 * C2177 - C59 * C2207) * C129 +
                     (C102 * C2345 - C59 * C2373) * C58) *
                        C57 * C611) *
                       C5172) *
                  C5101) /
                     (p * q * std::sqrt(p + q));
    d2eezz[7] += (-std::pow(Pi, 2.5) *
                  ((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) * C59 *
                       C57 * C5136 * C1986 -
                   (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) *
                       C59 * C57 * C5136 * C1987 +
                   (C129 * C388 - C275 * C312 - C129 * C516 + C58 * C580) *
                       C59 * C57 * C5136 * C1988 -
                   (C129 * C2033 - C275 * C1991 - C129 * C2111 + C58 * C2150) *
                       C59 * C57 * C5136 * C1989) *
                  C5101) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) *
                        C59 * C57 * C5136 * C1755 -
                    (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) *
                        C59 * C57 * C5136 * C5172) *
                       C1757 +
                   ((C129 * C389 - C275 * C313 - C129 * C517 + C58 * C581) *
                        C59 * C57 * C5136 * C5172 -
                    (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) *
                        C59 * C57 * C5136 * C1755) *
                       C1758 +
                   ((C129 * C132 - C275 * C70 - C129 * C229 + C58 * C278) *
                        C59 * C57 * C5136 * C1755 -
                    (C129 * C973 - C275 * C915 - C129 * C1083 + C58 * C1138) *
                        C59 * C57 * C5136 * C5172) *
                       C1759)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) *
                        C59 * C57 * C609 -
                    (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) *
                        C59 * C57 * C610 +
                    (C129 * C689 - C275 * C613 - C129 * C817 + C58 * C881) *
                        C59 * C57 * C611) *
                       C1755 +
                   ((C129 * C1505 - C275 * C1425 - C129 * C1653 + C58 * C1727) *
                        C59 * C57 * C610 -
                    (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) *
                        C59 * C57 * C609 -
                    (C129 * C2235 - C275 * C2177 - C129 * C2345 + C58 * C2400) *
                        C59 * C57 * C611) *
                       C5172) *
                  C5101) /
                     (p * q * std::sqrt(p + q));
    d2eexx[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 *
                         C59 * C5223 -
                     (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) * C58 *
                         C59 * C5200) *
                        C1755 +
                    ((C66 * C1427 - C67 * C1425 - C66 * C1428 + C57 * C1431) *
                         C58 * C59 * C5200 -
                     (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 *
                         C59 * C5223) *
                        C5172) *
                       C5214 +
                   (((C66 * C620 - C67 * C614 - C66 * C621 + C57 * C626) * C58 *
                         C59 * C5200 -
                     (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 *
                         C59 * C5223) *
                        C1755 +
                    ((C66 * C319 - C67 * C313 - C66 * C320 + C57 * C325) * C58 *
                         C59 * C5223 -
                     (C66 * C1429 - C67 * C1426 - C66 * C1430 + C57 * C1432) *
                         C58 * C59 * C5200) *
                        C5172) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C59 * C103 - C102 * C68) * C66 +
                      (C59 * C107 - C102 * C73) * C57) *
                         C58 * C5223 +
                     ((C102 * C612 - C59 * C654) * C66 +
                      (C102 * C617 - C59 * C658) * C57) *
                         C58 * C5200) *
                        C1755 +
                    (((C102 * C311 - C59 * C353) * C66 +
                      (C102 * C316 - C59 * C357) * C57) *
                         C58 * C5223 +
                     ((C59 * C1467 - C102 * C1425) * C66 +
                      (C59 * C1469 - C102 * C1428) * C57) *
                         C58 * C5200) *
                        C5172) *
                       C5214 +
                   ((((C102 * C69 - C59 * C104) * C66 +
                      (C102 * C75 - C59 * C108) * C57) *
                         C58 * C5223 +
                     ((C59 * C656 - C102 * C614) * C66 +
                      (C59 * C660 - C102 * C621) * C57) *
                         C58 * C5200) *
                        C1755 +
                    (((C59 * C355 - C102 * C313) * C66 +
                      (C59 * C359 - C102 * C320) * C57) *
                         C58 * C5223 +
                     ((C102 * C1426 - C59 * C1468) * C66 +
                      (C102 * C1430 - C59 * C1470) * C57) *
                         C58 * C5200) *
                        C5172) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C58 * C130 - C129 * C68) * C66 +
                      (C58 * C134 - C129 * C73) * C57) *
                         C59 * C5223 +
                     ((C129 * C612 - C58 * C688) * C66 +
                      (C129 * C617 - C58 * C692) * C57) *
                         C59 * C5200) *
                        C1755 +
                    (((C129 * C311 - C58 * C387) * C66 +
                      (C129 * C316 - C58 * C391) * C57) *
                         C59 * C5223 +
                     ((C58 * C1505 - C129 * C1425) * C66 +
                      (C58 * C1507 - C129 * C1428) * C57) *
                         C59 * C5200) *
                        C5172) *
                       C5214 +
                   ((((C129 * C69 - C58 * C131) * C66 +
                      (C129 * C75 - C58 * C135) * C57) *
                         C59 * C5223 +
                     ((C58 * C690 - C129 * C614) * C66 +
                      (C58 * C694 - C129 * C621) * C57) *
                         C59 * C5200) *
                        C1755 +
                    (((C58 * C389 - C129 * C313) * C66 +
                      (C58 * C393 - C129 * C320) * C57) *
                         C59 * C5223 +
                     ((C129 * C1426 - C58 * C1506) * C66 +
                      (C129 * C1430 - C58 * C1508) * C57) *
                         C59 * C5200) *
                        C5172) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
                C58 * C5223 +
            ((C66 * C612 - C57 * C616) * C102 +
             (C66 * C722 - C57 * C726) * C59) *
                C58 * C5200) *
               C1755 +
           (((C66 * C311 - C57 * C315) * C102 +
             (C66 * C421 - C57 * C425) * C59) *
                C58 * C5223 +
            ((C57 * C1427 - C66 * C1425) * C102 +
             (C57 * C1545 - C66 * C1543) * C59) *
                C58 * C5200) *
               C5172) *
              C5214 +
          ((((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
                C58 * C5223 +
            ((C57 * C620 - C66 * C614) * C102 +
             (C57 * C728 - C66 * C724) * C59) *
                C58 * C5200) *
               C1755 +
           (((C57 * C319 - C66 * C313) * C102 +
             (C57 * C427 - C66 * C423) * C59) *
                C58 * C5223 +
            ((C66 * C1426 - C57 * C1429) * C102 +
             (C66 * C1544 - C57 * C1546) * C59) *
                C58 * C5200) *
               C5172) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) * C57 * C58 *
                C5223 -
            (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) * C57 * C58 *
                C5200) *
               C1755 +
           ((C102 * C1467 - C182 * C1425 - C102 * C1543 + C59 * C1581) * C57 *
                C58 * C5200 -
            (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) * C57 * C58 *
                C5223) *
               C5172) *
              C5214 +
          (((C102 * C656 - C182 * C614 - C102 * C724 + C59 * C758) * C57 * C58 *
                C5200 -
            (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) * C57 * C58 *
                C5223) *
               C1755 +
           ((C102 * C355 - C182 * C313 - C102 * C423 + C59 * C457) * C57 * C58 *
                C5223 -
            (C102 * C1468 - C182 * C1426 - C102 * C1544 + C59 * C1582) * C57 *
                C58 * C5200) *
               C5172) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C58 * C130 - C129 * C68) * C102 +
                      (C58 * C205 - C129 * C156) * C59) *
                         C57 * C5223 +
                     ((C129 * C612 - C58 * C688) * C102 +
                      (C129 * C722 - C58 * C786) * C59) *
                         C57 * C5200) *
                        C1755 +
                    (((C129 * C311 - C58 * C387) * C102 +
                      (C129 * C421 - C58 * C485) * C59) *
                         C57 * C5223 +
                     ((C58 * C1505 - C129 * C1425) * C102 +
                      (C58 * C1617 - C129 * C1543) * C59) *
                         C57 * C5200) *
                        C5172) *
                       C5214 +
                   ((((C129 * C69 - C58 * C131) * C102 +
                      (C129 * C157 - C58 * C206) * C59) *
                         C57 * C5223 +
                     ((C58 * C690 - C129 * C614) * C102 +
                      (C58 * C788 - C129 * C724) * C59) *
                         C57 * C5200) *
                        C1755 +
                    (((C58 * C389 - C129 * C313) * C102 +
                      (C58 * C487 - C129 * C423) * C59) *
                         C57 * C5223 +
                     ((C129 * C1426 - C58 * C1506) * C102 +
                      (C129 * C1544 - C58 * C1618) * C59) *
                         C57 * C5200) *
                        C5172) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
                C59 * C5223 +
            ((C66 * C612 - C57 * C616) * C129 +
             (C66 * C816 - C57 * C820) * C58) *
                C59 * C5200) *
               C1755 +
           (((C66 * C311 - C57 * C315) * C129 +
             (C66 * C515 - C57 * C519) * C58) *
                C59 * C5223 +
            ((C57 * C1427 - C66 * C1425) * C129 +
             (C57 * C1655 - C66 * C1653) * C58) *
                C59 * C5200) *
               C5172) *
              C5214 +
          ((((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
                C59 * C5223 +
            ((C57 * C620 - C66 * C614) * C129 +
             (C57 * C822 - C66 * C818) * C58) *
                C59 * C5200) *
               C1755 +
           (((C57 * C319 - C66 * C313) * C129 +
             (C57 * C521 - C66 * C517) * C58) *
                C59 * C5223 +
            ((C66 * C1426 - C57 * C1429) * C129 +
             (C66 * C1654 - C57 * C1656) * C58) *
                C59 * C5200) *
               C5172) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C59 * C103 - C102 * C68) * C129 +
                      (C59 * C253 - C102 * C227) * C58) *
                         C57 * C5223 +
                     ((C102 * C612 - C59 * C654) * C129 +
                      (C102 * C816 - C59 * C850) * C58) *
                         C57 * C5200) *
                        C1755 +
                    (((C102 * C311 - C59 * C353) * C129 +
                      (C102 * C515 - C59 * C549) * C58) *
                         C57 * C5223 +
                     ((C59 * C1467 - C102 * C1425) * C129 +
                      (C59 * C1691 - C102 * C1653) * C58) *
                         C57 * C5200) *
                        C5172) *
                       C5214 +
                   ((((C102 * C69 - C59 * C104) * C129 +
                      (C102 * C228 - C59 * C254) * C58) *
                         C57 * C5223 +
                     ((C59 * C656 - C102 * C614) * C129 +
                      (C59 * C852 - C102 * C818) * C58) *
                         C57 * C5200) *
                        C1755 +
                    (((C59 * C355 - C102 * C313) * C129 +
                      (C59 * C551 - C102 * C517) * C58) *
                         C57 * C5223 +
                     ((C102 * C1426 - C59 * C1468) * C129 +
                      (C102 * C1654 - C59 * C1692) * C58) *
                         C57 * C5200) *
                        C5172) *
                       C5107)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) * C59 * C57 *
                C5223 -
            (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) * C59 * C57 *
                C5200) *
               C1755 +
           ((C129 * C1505 - C275 * C1425 - C129 * C1653 + C58 * C1727) * C59 *
                C57 * C5200 -
            (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) * C59 * C57 *
                C5223) *
               C5172) *
              C5214 +
          (((C129 * C690 - C275 * C614 - C129 * C818 + C58 * C882) * C59 * C57 *
                C5200 -
            (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) * C59 * C57 *
                C5223) *
               C1755 +
           ((C129 * C389 - C275 * C313 - C129 * C517 + C58 * C581) * C59 * C57 *
                C5223 -
            (C129 * C1506 - C275 * C1426 - C129 * C1654 + C58 * C1728) * C59 *
                C57 * C5200) *
               C5172) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 *
                        C59 * C5136 * C1755 -
                    (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 *
                        C59 * C5136 * C5172) *
                       C1757 +
                   ((C66 * C319 - C67 * C313 - C66 * C320 + C57 * C325) * C58 *
                        C59 * C5136 * C5172 -
                    (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 *
                        C59 * C5136 * C1755) *
                       C1758 +
                   ((C66 * C76 - C67 * C70 - C66 * C77 + C57 * C82) * C58 *
                        C59 * C5136 * C1755 -
                    (C66 * C916 - C67 * C915 - C66 * C917 + C57 * C918) * C58 *
                        C59 * C5136 * C5172) *
                       C1759)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 *
                       C5136 * C1986 -
                   (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 *
                       C59 * C5136 * C1987 +
                   (C66 * C317 - C67 * C312 - C66 * C318 + C57 * C324) * C58 *
                       C59 * C5136 * C1988 -
                   (C66 * C1992 - C67 * C1991 - C66 * C1993 + C57 * C1994) *
                       C58 * C59 * C5136 * C1989) *
                  C5101) /
                     (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C5136 * C1755 +
           ((C102 * C311 - C59 * C353) * C66 +
            (C102 * C316 - C59 * C357) * C57) *
               C58 * C5136 * C5172) *
              C1757 +
          (((C102 * C69 - C59 * C104) * C66 + (C102 * C75 - C59 * C108) * C57) *
               C58 * C5136 * C1755 +
           ((C59 * C355 - C102 * C313) * C66 +
            (C59 * C359 - C102 * C320) * C57) *
               C58 * C5136 * C5172) *
              C1758 +
          (((C59 * C105 - C102 * C70) * C66 + (C59 * C109 - C102 * C77) * C57) *
               C58 * C5136 * C1755 +
           ((C102 * C915 - C59 * C945) * C66 +
            (C102 * C917 - C59 * C946) * C57) *
               C58 * C5136 * C5172) *
              C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
              C58 * C5136 * C1986 +
          ((C102 * C311 - C59 * C353) * C66 +
           (C102 * C316 - C59 * C357) * C57) *
              C58 * C5136 * C1987 +
          ((C59 * C354 - C102 * C312) * C66 +
           (C59 * C358 - C102 * C318) * C57) *
              C58 * C5136 * C1988 +
          ((C102 * C1991 - C59 * C2013) * C66 +
           (C102 * C1993 - C59 * C2014) * C57) *
              C58 * C5136 * C1989) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C5136 * C1755 +
           ((C129 * C311 - C58 * C387) * C66 +
            (C129 * C316 - C58 * C391) * C57) *
               C59 * C5136 * C5172) *
              C1757 +
          (((C129 * C69 - C58 * C131) * C66 + (C129 * C75 - C58 * C135) * C57) *
               C59 * C5136 * C1755 +
           ((C58 * C389 - C129 * C313) * C66 +
            (C58 * C393 - C129 * C320) * C57) *
               C59 * C5136 * C5172) *
              C1758 +
          (((C58 * C132 - C129 * C70) * C66 + (C58 * C136 - C129 * C77) * C57) *
               C59 * C5136 * C1755 +
           ((C129 * C915 - C58 * C973) * C66 +
            (C129 * C917 - C58 * C974) * C57) *
               C59 * C5136 * C5172) *
              C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
              C59 * C5136 * C1986 +
          ((C129 * C311 - C58 * C387) * C66 +
           (C129 * C316 - C58 * C391) * C57) *
              C59 * C5136 * C1987 +
          ((C58 * C388 - C129 * C312) * C66 +
           (C58 * C392 - C129 * C318) * C57) *
              C59 * C5136 * C1988 +
          ((C129 * C1991 - C58 * C2033) * C66 +
           (C129 * C1993 - C58 * C2034) * C57) *
              C59 * C5136 * C1989) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C5136 * C1755 +
           ((C66 * C311 - C57 * C315) * C102 +
            (C66 * C421 - C57 * C425) * C59) *
               C58 * C5136 * C5172) *
              C1757 +
          (((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
               C58 * C5136 * C1755 +
           ((C57 * C319 - C66 * C313) * C102 +
            (C57 * C427 - C66 * C423) * C59) *
               C58 * C5136 * C5172) *
              C1758 +
          (((C57 * C76 - C66 * C70) * C102 + (C57 * C162 - C66 * C158) * C59) *
               C58 * C5136 * C1755 +
           ((C66 * C915 - C57 * C916) * C102 +
            (C66 * C1001 - C57 * C1002) * C59) *
               C58 * C5136 * C5172) *
              C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
              C58 * C5136 * C1986 +
          ((C66 * C311 - C57 * C315) * C102 + (C66 * C421 - C57 * C425) * C59) *
              C58 * C5136 * C1987 +
          ((C57 * C317 - C66 * C312) * C102 + (C57 * C426 - C66 * C422) * C59) *
              C58 * C5136 * C1988 +
          ((C66 * C1991 - C57 * C1992) * C102 +
           (C66 * C2053 - C57 * C2054) * C59) *
              C58 * C5136 * C1989) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eeyy[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) *
                        C57 * C58 * C5136 * C1755 -
                    (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) *
                        C57 * C58 * C5136 * C5172) *
                       C1757 +
                   ((C102 * C355 - C182 * C313 - C102 * C423 + C59 * C457) *
                        C57 * C58 * C5136 * C5172 -
                    (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) *
                        C57 * C58 * C5136 * C1755) *
                       C1758 +
                   ((C102 * C105 - C182 * C70 - C102 * C158 + C59 * C185) *
                        C57 * C58 * C5136 * C1755 -
                    (C102 * C945 - C182 * C915 - C102 * C1001 + C59 * C1029) *
                        C57 * C58 * C5136 * C5172) *
                       C1759)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) * C57 *
                       C58 * C5136 * C1986 -
                   (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) *
                       C57 * C58 * C5136 * C1987 +
                   (C102 * C354 - C182 * C312 - C102 * C422 + C59 * C456) *
                       C57 * C58 * C5136 * C1988 -
                   (C102 * C2013 - C182 * C1991 - C102 * C2053 + C59 * C2073) *
                       C57 * C58 * C5136 * C1989) *
                  C5101) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C58 * C130 - C129 * C68) * C102 +
                     (C58 * C205 - C129 * C156) * C59) *
                        C57 * C5136 * C1755 +
                    ((C129 * C311 - C58 * C387) * C102 +
                     (C129 * C421 - C58 * C485) * C59) *
                        C57 * C5136 * C5172) *
                       C1757 +
                   (((C129 * C69 - C58 * C131) * C102 +
                     (C129 * C157 - C58 * C206) * C59) *
                        C57 * C5136 * C1755 +
                    ((C58 * C389 - C129 * C313) * C102 +
                     (C58 * C487 - C129 * C423) * C59) *
                        C57 * C5136 * C5172) *
                       C1758 +
                   (((C58 * C132 - C129 * C70) * C102 +
                     (C58 * C207 - C129 * C158) * C59) *
                        C57 * C5136 * C1755 +
                    ((C129 * C915 - C58 * C973) * C102 +
                     (C129 * C1001 - C58 * C1056) * C59) *
                        C57 * C5136 * C5172) *
                       C1759)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C58 * C130 - C129 * C68) * C102 +
                    (C58 * C205 - C129 * C156) * C59) *
                       C57 * C5136 * C1986 +
                   ((C129 * C311 - C58 * C387) * C102 +
                    (C129 * C421 - C58 * C485) * C59) *
                       C57 * C5136 * C1987 +
                   ((C58 * C388 - C129 * C312) * C102 +
                    (C58 * C486 - C129 * C422) * C59) *
                       C57 * C5136 * C1988 +
                   ((C129 * C1991 - C58 * C2033) * C102 +
                    (C129 * C2053 - C58 * C2092) * C59) *
                       C57 * C5136 * C1989) *
                  C5101) /
                     (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C5136 * C1755 +
           ((C66 * C311 - C57 * C315) * C129 +
            (C66 * C515 - C57 * C519) * C58) *
               C59 * C5136 * C5172) *
              C1757 +
          (((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
               C59 * C5136 * C1755 +
           ((C57 * C319 - C66 * C313) * C129 +
            (C57 * C521 - C66 * C517) * C58) *
               C59 * C5136 * C5172) *
              C1758 +
          (((C57 * C76 - C66 * C70) * C129 + (C57 * C233 - C66 * C229) * C58) *
               C59 * C5136 * C1755 +
           ((C66 * C915 - C57 * C916) * C129 +
            (C66 * C1083 - C57 * C1084) * C58) *
               C59 * C5136 * C5172) *
              C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
              C59 * C5136 * C1986 +
          ((C66 * C311 - C57 * C315) * C129 + (C66 * C515 - C57 * C519) * C58) *
              C59 * C5136 * C1987 +
          ((C57 * C317 - C66 * C312) * C129 + (C57 * C520 - C66 * C516) * C58) *
              C59 * C5136 * C1988 +
          ((C66 * C1991 - C57 * C1992) * C129 +
           (C66 * C2111 - C57 * C2112) * C58) *
              C59 * C5136 * C1989) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eezy[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C59 * C103 - C102 * C68) * C129 +
                     (C59 * C253 - C102 * C227) * C58) *
                        C57 * C5136 * C1755 +
                    ((C102 * C311 - C59 * C353) * C129 +
                     (C102 * C515 - C59 * C549) * C58) *
                        C57 * C5136 * C5172) *
                       C1757 +
                   (((C102 * C69 - C59 * C104) * C129 +
                     (C102 * C228 - C59 * C254) * C58) *
                        C57 * C5136 * C1755 +
                    ((C59 * C355 - C102 * C313) * C129 +
                     (C59 * C551 - C102 * C517) * C58) *
                        C57 * C5136 * C5172) *
                       C1758 +
                   (((C59 * C105 - C102 * C70) * C129 +
                     (C59 * C255 - C102 * C229) * C58) *
                        C57 * C5136 * C1755 +
                    ((C102 * C915 - C59 * C945) * C129 +
                     (C102 * C1083 - C59 * C1111) * C58) *
                        C57 * C5136 * C5172) *
                       C1759)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C59 * C103 - C102 * C68) * C129 +
                    (C59 * C253 - C102 * C227) * C58) *
                       C57 * C5136 * C1986 +
                   ((C102 * C311 - C59 * C353) * C129 +
                    (C102 * C515 - C59 * C549) * C58) *
                       C57 * C5136 * C1987 +
                   ((C59 * C354 - C102 * C312) * C129 +
                    (C59 * C550 - C102 * C516) * C58) *
                       C57 * C5136 * C1988 +
                   ((C102 * C1991 - C59 * C2013) * C129 +
                    (C102 * C2111 - C59 * C2131) * C58) *
                       C57 * C5136 * C1989) *
                  C5101) /
                     (p * q * std::sqrt(p + q));
    d2eezz[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) *
                        C59 * C57 * C5136 * C1755 -
                    (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) *
                        C59 * C57 * C5136 * C5172) *
                       C1757 +
                   ((C129 * C389 - C275 * C313 - C129 * C517 + C58 * C581) *
                        C59 * C57 * C5136 * C5172 -
                    (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) *
                        C59 * C57 * C5136 * C1755) *
                       C1758 +
                   ((C129 * C132 - C275 * C70 - C129 * C229 + C58 * C278) *
                        C59 * C57 * C5136 * C1755 -
                    (C129 * C973 - C275 * C915 - C129 * C1083 + C58 * C1138) *
                        C59 * C57 * C5136 * C5172) *
                       C1759)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) * C59 *
                       C57 * C5136 * C1986 -
                   (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) *
                       C59 * C57 * C5136 * C1987 +
                   (C129 * C388 - C275 * C312 - C129 * C516 + C58 * C580) *
                       C59 * C57 * C5136 * C1988 -
                   (C129 * C2033 - C275 * C1991 - C129 * C2111 + C58 * C2150) *
                       C59 * C57 * C5136 * C1989) *
                  C5101) /
                     (p * q * std::sqrt(p + q));
    d2eexx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 *
                          C59 * C3222 -
                      (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) *
                          C58 * C59 * C5200) *
                         C5222 +
                     ((C66 * C1427 - C67 * C1425 - C66 * C1428 + C57 * C1431) *
                          C58 * C59 * C5200 -
                      (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) *
                          C58 * C59 * C3222) *
                         C5172) *
                        C5214 +
                    (((C66 * C620 - C67 * C614 - C66 * C621 + C57 * C626) *
                          C58 * C59 * C5200 -
                      (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 *
                          C59 * C3222) *
                         C5222 +
                     ((C66 * C319 - C67 * C313 - C66 * C320 + C57 * C325) *
                          C58 * C59 * C3222 -
                      (C66 * C1429 - C67 * C1426 - C66 * C1430 + C57 * C1432) *
                          C58 * C59 * C5200) *
                         C5172) *
                        C5107)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C59 * C103 - C102 * C68) * C66 +
                       (C59 * C107 - C102 * C73) * C57) *
                          C58 * C3222 +
                      ((C102 * C612 - C59 * C654) * C66 +
                       (C102 * C617 - C59 * C658) * C57) *
                          C58 * C5200) *
                         C5222 +
                     (((C102 * C311 - C59 * C353) * C66 +
                       (C102 * C316 - C59 * C357) * C57) *
                          C58 * C3222 +
                      ((C59 * C1467 - C102 * C1425) * C66 +
                       (C59 * C1469 - C102 * C1428) * C57) *
                          C58 * C5200) *
                         C5172) *
                        C5214 +
                    ((((C102 * C69 - C59 * C104) * C66 +
                       (C102 * C75 - C59 * C108) * C57) *
                          C58 * C3222 +
                      ((C59 * C656 - C102 * C614) * C66 +
                       (C59 * C660 - C102 * C621) * C57) *
                          C58 * C5200) *
                         C5222 +
                     (((C59 * C355 - C102 * C313) * C66 +
                       (C59 * C359 - C102 * C320) * C57) *
                          C58 * C3222 +
                      ((C102 * C1426 - C59 * C1468) * C66 +
                       (C102 * C1430 - C59 * C1470) * C57) *
                          C58 * C5200) *
                         C5172) *
                        C5107)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C58 * C130 - C129 * C68) * C66 +
                       (C58 * C134 - C129 * C73) * C57) *
                          C59 * C3222 +
                      ((C129 * C612 - C58 * C688) * C66 +
                       (C129 * C617 - C58 * C692) * C57) *
                          C59 * C5200) *
                         C5222 +
                     (((C129 * C311 - C58 * C387) * C66 +
                       (C129 * C316 - C58 * C391) * C57) *
                          C59 * C3222 +
                      ((C58 * C1505 - C129 * C1425) * C66 +
                       (C58 * C1507 - C129 * C1428) * C57) *
                          C59 * C5200) *
                         C5172) *
                        C5214 +
                    ((((C129 * C69 - C58 * C131) * C66 +
                       (C129 * C75 - C58 * C135) * C57) *
                          C59 * C3222 +
                      ((C58 * C690 - C129 * C614) * C66 +
                       (C58 * C694 - C129 * C621) * C57) *
                          C59 * C5200) *
                         C5222 +
                     (((C58 * C389 - C129 * C313) * C66 +
                       (C58 * C393 - C129 * C320) * C57) *
                          C59 * C3222 +
                      ((C129 * C1426 - C58 * C1506) * C66 +
                       (C129 * C1430 - C58 * C1508) * C57) *
                          C59 * C5200) *
                         C5172) *
                        C5107)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
                C58 * C3222 +
            ((C66 * C612 - C57 * C616) * C102 +
             (C66 * C722 - C57 * C726) * C59) *
                C58 * C5200) *
               C5222 +
           (((C66 * C311 - C57 * C315) * C102 +
             (C66 * C421 - C57 * C425) * C59) *
                C58 * C3222 +
            ((C57 * C1427 - C66 * C1425) * C102 +
             (C57 * C1545 - C66 * C1543) * C59) *
                C58 * C5200) *
               C5172) *
              C5214 +
          ((((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
                C58 * C3222 +
            ((C57 * C620 - C66 * C614) * C102 +
             (C57 * C728 - C66 * C724) * C59) *
                C58 * C5200) *
               C5222 +
           (((C57 * C319 - C66 * C313) * C102 +
             (C57 * C427 - C66 * C423) * C59) *
                C58 * C3222 +
            ((C66 * C1426 - C57 * C1429) * C102 +
             (C66 * C1544 - C57 * C1546) * C59) *
                C58 * C5200) *
               C5172) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) * C57 * C58 *
                C3222 -
            (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) * C57 * C58 *
                C5200) *
               C5222 +
           ((C102 * C1467 - C182 * C1425 - C102 * C1543 + C59 * C1581) * C57 *
                C58 * C5200 -
            (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) * C57 * C58 *
                C3222) *
               C5172) *
              C5214 +
          (((C102 * C656 - C182 * C614 - C102 * C724 + C59 * C758) * C57 * C58 *
                C5200 -
            (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) * C57 * C58 *
                C3222) *
               C5222 +
           ((C102 * C355 - C182 * C313 - C102 * C423 + C59 * C457) * C57 * C58 *
                C3222 -
            (C102 * C1468 - C182 * C1426 - C102 * C1544 + C59 * C1582) * C57 *
                C58 * C5200) *
               C5172) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C58 * C130 - C129 * C68) * C102 +
                       (C58 * C205 - C129 * C156) * C59) *
                          C57 * C3222 +
                      ((C129 * C612 - C58 * C688) * C102 +
                       (C129 * C722 - C58 * C786) * C59) *
                          C57 * C5200) *
                         C5222 +
                     (((C129 * C311 - C58 * C387) * C102 +
                       (C129 * C421 - C58 * C485) * C59) *
                          C57 * C3222 +
                      ((C58 * C1505 - C129 * C1425) * C102 +
                       (C58 * C1617 - C129 * C1543) * C59) *
                          C57 * C5200) *
                         C5172) *
                        C5214 +
                    ((((C129 * C69 - C58 * C131) * C102 +
                       (C129 * C157 - C58 * C206) * C59) *
                          C57 * C3222 +
                      ((C58 * C690 - C129 * C614) * C102 +
                       (C58 * C788 - C129 * C724) * C59) *
                          C57 * C5200) *
                         C5222 +
                     (((C58 * C389 - C129 * C313) * C102 +
                       (C58 * C487 - C129 * C423) * C59) *
                          C57 * C3222 +
                      ((C129 * C1426 - C58 * C1506) * C102 +
                       (C129 * C1544 - C58 * C1618) * C59) *
                          C57 * C5200) *
                         C5172) *
                        C5107)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
                C59 * C3222 +
            ((C66 * C612 - C57 * C616) * C129 +
             (C66 * C816 - C57 * C820) * C58) *
                C59 * C5200) *
               C5222 +
           (((C66 * C311 - C57 * C315) * C129 +
             (C66 * C515 - C57 * C519) * C58) *
                C59 * C3222 +
            ((C57 * C1427 - C66 * C1425) * C129 +
             (C57 * C1655 - C66 * C1653) * C58) *
                C59 * C5200) *
               C5172) *
              C5214 +
          ((((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
                C59 * C3222 +
            ((C57 * C620 - C66 * C614) * C129 +
             (C57 * C822 - C66 * C818) * C58) *
                C59 * C5200) *
               C5222 +
           (((C57 * C319 - C66 * C313) * C129 +
             (C57 * C521 - C66 * C517) * C58) *
                C59 * C3222 +
            ((C66 * C1426 - C57 * C1429) * C129 +
             (C66 * C1654 - C57 * C1656) * C58) *
                C59 * C5200) *
               C5172) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C59 * C103 - C102 * C68) * C129 +
                       (C59 * C253 - C102 * C227) * C58) *
                          C57 * C3222 +
                      ((C102 * C612 - C59 * C654) * C129 +
                       (C102 * C816 - C59 * C850) * C58) *
                          C57 * C5200) *
                         C5222 +
                     (((C102 * C311 - C59 * C353) * C129 +
                       (C102 * C515 - C59 * C549) * C58) *
                          C57 * C3222 +
                      ((C59 * C1467 - C102 * C1425) * C129 +
                       (C59 * C1691 - C102 * C1653) * C58) *
                          C57 * C5200) *
                         C5172) *
                        C5214 +
                    ((((C102 * C69 - C59 * C104) * C129 +
                       (C102 * C228 - C59 * C254) * C58) *
                          C57 * C3222 +
                      ((C59 * C656 - C102 * C614) * C129 +
                       (C59 * C852 - C102 * C818) * C58) *
                          C57 * C5200) *
                         C5222 +
                     (((C59 * C355 - C102 * C313) * C129 +
                       (C59 * C551 - C102 * C517) * C58) *
                          C57 * C3222 +
                      ((C102 * C1426 - C59 * C1468) * C129 +
                       (C102 * C1654 - C59 * C1692) * C58) *
                          C57 * C5200) *
                         C5172) *
                        C5107)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) * C59 * C57 *
                C3222 -
            (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) * C59 * C57 *
                C5200) *
               C5222 +
           ((C129 * C1505 - C275 * C1425 - C129 * C1653 + C58 * C1727) * C59 *
                C57 * C5200 -
            (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) * C59 * C57 *
                C3222) *
               C5172) *
              C5214 +
          (((C129 * C690 - C275 * C614 - C129 * C818 + C58 * C882) * C59 * C57 *
                C5200 -
            (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) * C59 * C57 *
                C3222) *
               C5222 +
           ((C129 * C389 - C275 * C313 - C129 * C517 + C58 * C581) * C59 * C57 *
                C3222 -
            (C129 * C1506 - C275 * C1426 - C129 * C1654 + C58 * C1728) * C59 *
                C57 * C5200) *
               C5172) *
              C5107)) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C5245 -
           (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) * C58 * C59 *
               C5246 +
           (C66 * C618 - C67 * C613 - C66 * C619 + C57 * C625) * C58 * C59 *
               C4182) *
              C5222 +
          ((C66 * C1427 - C67 * C1425 - C66 * C1428 + C57 * C1431) * C58 * C59 *
               C5246 -
           (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 * C59 *
               C5245 -
           (C66 * C2178 - C67 * C2177 - C66 * C2179 + C57 * C2180) * C58 * C59 *
               C4182) *
              C5172) *
         C5101) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C5245 +
           ((C102 * C612 - C59 * C654) * C66 +
            (C102 * C617 - C59 * C658) * C57) *
               C58 * C5246 +
           ((C59 * C655 - C102 * C613) * C66 +
            (C59 * C659 - C102 * C619) * C57) *
               C58 * C4182) *
              C5222 +
          (((C102 * C311 - C59 * C353) * C66 +
            (C102 * C316 - C59 * C357) * C57) *
               C58 * C5245 +
           ((C59 * C1467 - C102 * C1425) * C66 +
            (C59 * C1469 - C102 * C1428) * C57) *
               C58 * C5246 +
           ((C102 * C2177 - C59 * C2207) * C66 +
            (C102 * C2179 - C59 * C2208) * C57) *
               C58 * C4182) *
              C5172) *
         C5101) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C5245 +
           ((C129 * C612 - C58 * C688) * C66 +
            (C129 * C617 - C58 * C692) * C57) *
               C59 * C5246 +
           ((C58 * C689 - C129 * C613) * C66 +
            (C58 * C693 - C129 * C619) * C57) *
               C59 * C4182) *
              C5222 +
          (((C129 * C311 - C58 * C387) * C66 +
            (C129 * C316 - C58 * C391) * C57) *
               C59 * C5245 +
           ((C58 * C1505 - C129 * C1425) * C66 +
            (C58 * C1507 - C129 * C1428) * C57) *
               C59 * C5246 +
           ((C129 * C2177 - C58 * C2235) * C66 +
            (C129 * C2179 - C58 * C2236) * C57) *
               C59 * C4182) *
              C5172) *
         C5101) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C5245 +
           ((C66 * C612 - C57 * C616) * C102 +
            (C66 * C722 - C57 * C726) * C59) *
               C58 * C5246 +
           ((C57 * C618 - C66 * C613) * C102 +
            (C57 * C727 - C66 * C723) * C59) *
               C58 * C4182) *
              C5222 +
          (((C66 * C311 - C57 * C315) * C102 +
            (C66 * C421 - C57 * C425) * C59) *
               C58 * C5245 +
           ((C57 * C1427 - C66 * C1425) * C102 +
            (C57 * C1545 - C66 * C1543) * C59) *
               C58 * C5246 +
           ((C66 * C2177 - C57 * C2178) * C102 +
            (C66 * C2263 - C57 * C2264) * C59) *
               C58 * C4182) *
              C5172) *
         C5101) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) * C57 * C58 *
               C5245 -
           (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) * C57 * C58 *
               C5246 +
           (C102 * C655 - C182 * C613 - C102 * C723 + C59 * C757) * C57 * C58 *
               C4182) *
              C5222 +
          ((C102 * C1467 - C182 * C1425 - C102 * C1543 + C59 * C1581) * C57 *
               C58 * C5246 -
           (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) * C57 * C58 *
               C5245 -
           (C102 * C2207 - C182 * C2177 - C102 * C2263 + C59 * C2291) * C57 *
               C58 * C4182) *
              C5172) *
         C5101) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C58 * C130 - C129 * C68) * C102 +
                      (C58 * C205 - C129 * C156) * C59) *
                         C57 * C5245 +
                     ((C129 * C612 - C58 * C688) * C102 +
                      (C129 * C722 - C58 * C786) * C59) *
                         C57 * C5246 +
                     ((C58 * C689 - C129 * C613) * C102 +
                      (C58 * C787 - C129 * C723) * C59) *
                         C57 * C4182) *
                        C5222 +
                    (((C129 * C311 - C58 * C387) * C102 +
                      (C129 * C421 - C58 * C485) * C59) *
                         C57 * C5245 +
                     ((C58 * C1505 - C129 * C1425) * C102 +
                      (C58 * C1617 - C129 * C1543) * C59) *
                         C57 * C5246 +
                     ((C129 * C2177 - C58 * C2235) * C102 +
                      (C129 * C2263 - C58 * C2318) * C59) *
                         C57 * C4182) *
                        C5172) *
                   C5101) /
                  (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C5245 +
           ((C66 * C612 - C57 * C616) * C129 +
            (C66 * C816 - C57 * C820) * C58) *
               C59 * C5246 +
           ((C57 * C618 - C66 * C613) * C129 +
            (C57 * C821 - C66 * C817) * C58) *
               C59 * C4182) *
              C5222 +
          (((C66 * C311 - C57 * C315) * C129 +
            (C66 * C515 - C57 * C519) * C58) *
               C59 * C5245 +
           ((C57 * C1427 - C66 * C1425) * C129 +
            (C57 * C1655 - C66 * C1653) * C58) *
               C59 * C5246 +
           ((C66 * C2177 - C57 * C2178) * C129 +
            (C66 * C2345 - C57 * C2346) * C58) *
               C59 * C4182) *
              C5172) *
         C5101) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C59 * C103 - C102 * C68) * C129 +
                      (C59 * C253 - C102 * C227) * C58) *
                         C57 * C5245 +
                     ((C102 * C612 - C59 * C654) * C129 +
                      (C102 * C816 - C59 * C850) * C58) *
                         C57 * C5246 +
                     ((C59 * C655 - C102 * C613) * C129 +
                      (C59 * C851 - C102 * C817) * C58) *
                         C57 * C4182) *
                        C5222 +
                    (((C102 * C311 - C59 * C353) * C129 +
                      (C102 * C515 - C59 * C549) * C58) *
                         C57 * C5245 +
                     ((C59 * C1467 - C102 * C1425) * C129 +
                      (C59 * C1691 - C102 * C1653) * C58) *
                         C57 * C5246 +
                     ((C102 * C2177 - C59 * C2207) * C129 +
                      (C102 * C2345 - C59 * C2373) * C58) *
                         C57 * C4182) *
                        C5172) *
                   C5101) /
                  (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) * C59 * C57 *
               C5245 -
           (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) * C59 * C57 *
               C5246 +
           (C129 * C689 - C275 * C613 - C129 * C817 + C58 * C881) * C59 * C57 *
               C4182) *
              C5222 +
          ((C129 * C1505 - C275 * C1425 - C129 * C1653 + C58 * C1727) * C59 *
               C57 * C5246 -
           (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) * C59 * C57 *
               C5245 -
           (C129 * C2235 - C275 * C2177 - C129 * C2345 + C58 * C2400) * C59 *
               C57 * C4182) *
              C5172) *
         C5101) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (-std::pow(Pi, 2.5) *
         (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C3222 -
           (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) * C58 * C59 *
               C5200) *
              C306 +
          ((C66 * C1427 - C67 * C1425 - C66 * C1428 + C57 * C1431) * C58 * C59 *
               C5200 -
           (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 * C59 *
               C3222) *
              C307 +
          ((C66 * C317 - C67 * C312 - C66 * C318 + C57 * C324) * C58 * C59 *
               C3222 -
           (C66 * C2973 - C67 * C2972 - C66 * C2974 + C57 * C2975) * C58 * C59 *
               C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C3222 -
           (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) * C58 * C59 *
               C5200) *
              C5120 * C1757 +
          ((C66 * C620 - C67 * C614 - C66 * C621 + C57 * C626) * C58 * C59 *
               C5200 -
           (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 * C59 *
               C3222) *
              C5120 * C1758 +
          ((C66 * C76 - C67 * C70 - C66 * C77 + C57 * C82) * C58 * C59 * C3222 -
           (C66 * C1168 - C67 * C1167 - C66 * C1169 + C57 * C1170) * C58 * C59 *
               C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C3684 -
          (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) * C58 * C59 *
              C3685 +
          (C66 * C618 - C67 * C613 - C66 * C619 + C57 * C625) * C58 * C59 *
              C3686 -
          (C66 * C3689 - C67 * C3688 - C66 * C3690 + C57 * C3691) * C58 * C59 *
              C3687) *
         C5120 * C5101) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C3222 +
           ((C102 * C612 - C59 * C654) * C66 +
            (C102 * C617 - C59 * C658) * C57) *
               C58 * C5200) *
              C306 +
          (((C102 * C311 - C59 * C353) * C66 +
            (C102 * C316 - C59 * C357) * C57) *
               C58 * C3222 +
           ((C59 * C1467 - C102 * C1425) * C66 +
            (C59 * C1469 - C102 * C1428) * C57) *
               C58 * C5200) *
              C307 +
          (((C59 * C354 - C102 * C312) * C66 +
            (C59 * C358 - C102 * C318) * C57) *
               C58 * C3222 +
           ((C102 * C2972 - C59 * C3002) * C66 +
            (C102 * C2974 - C59 * C3003) * C57) *
               C58 * C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C3222 +
           ((C102 * C612 - C59 * C654) * C66 +
            (C102 * C617 - C59 * C658) * C57) *
               C58 * C5200) *
              C5120 * C1757 +
          (((C102 * C69 - C59 * C104) * C66 + (C102 * C75 - C59 * C108) * C57) *
               C58 * C3222 +
           ((C59 * C656 - C102 * C614) * C66 +
            (C59 * C660 - C102 * C621) * C57) *
               C58 * C5200) *
              C5120 * C1758 +
          (((C59 * C105 - C102 * C70) * C66 + (C59 * C109 - C102 * C77) * C57) *
               C58 * C3222 +
           ((C102 * C1167 - C59 * C1197) * C66 +
            (C102 * C1169 - C59 * C1198) * C57) *
               C58 * C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
              C58 * C3684 +
          ((C102 * C612 - C59 * C654) * C66 +
           (C102 * C617 - C59 * C658) * C57) *
              C58 * C3685 +
          ((C59 * C655 - C102 * C613) * C66 +
           (C59 * C659 - C102 * C619) * C57) *
              C58 * C3686 +
          ((C102 * C3688 - C59 * C3710) * C66 +
           (C102 * C3690 - C59 * C3711) * C57) *
              C58 * C3687) *
         C5120 * C5101) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C3222 +
           ((C129 * C612 - C58 * C688) * C66 +
            (C129 * C617 - C58 * C692) * C57) *
               C59 * C5200) *
              C306 +
          (((C129 * C311 - C58 * C387) * C66 +
            (C129 * C316 - C58 * C391) * C57) *
               C59 * C3222 +
           ((C58 * C1505 - C129 * C1425) * C66 +
            (C58 * C1507 - C129 * C1428) * C57) *
               C59 * C5200) *
              C307 +
          (((C58 * C388 - C129 * C312) * C66 +
            (C58 * C392 - C129 * C318) * C57) *
               C59 * C3222 +
           ((C129 * C2972 - C58 * C3030) * C66 +
            (C129 * C2974 - C58 * C3031) * C57) *
               C59 * C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C3222 +
           ((C129 * C612 - C58 * C688) * C66 +
            (C129 * C617 - C58 * C692) * C57) *
               C59 * C5200) *
              C5120 * C1757 +
          (((C129 * C69 - C58 * C131) * C66 + (C129 * C75 - C58 * C135) * C57) *
               C59 * C3222 +
           ((C58 * C690 - C129 * C614) * C66 +
            (C58 * C694 - C129 * C621) * C57) *
               C59 * C5200) *
              C5120 * C1758 +
          (((C58 * C132 - C129 * C70) * C66 + (C58 * C136 - C129 * C77) * C57) *
               C59 * C3222 +
           ((C129 * C1167 - C58 * C1225) * C66 +
            (C129 * C1169 - C58 * C1226) * C57) *
               C59 * C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
              C59 * C3684 +
          ((C129 * C612 - C58 * C688) * C66 +
           (C129 * C617 - C58 * C692) * C57) *
              C59 * C3685 +
          ((C58 * C689 - C129 * C613) * C66 +
           (C58 * C693 - C129 * C619) * C57) *
              C59 * C3686 +
          ((C129 * C3688 - C58 * C3730) * C66 +
           (C129 * C3690 - C58 * C3731) * C57) *
              C59 * C3687) *
         C5120 * C5101) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C3222 +
           ((C66 * C612 - C57 * C616) * C102 +
            (C66 * C722 - C57 * C726) * C59) *
               C58 * C5200) *
              C306 +
          (((C66 * C311 - C57 * C315) * C102 +
            (C66 * C421 - C57 * C425) * C59) *
               C58 * C3222 +
           ((C57 * C1427 - C66 * C1425) * C102 +
            (C57 * C1545 - C66 * C1543) * C59) *
               C58 * C5200) *
              C307 +
          (((C57 * C317 - C66 * C312) * C102 +
            (C57 * C426 - C66 * C422) * C59) *
               C58 * C3222 +
           ((C66 * C2972 - C57 * C2973) * C102 +
            (C66 * C3058 - C57 * C3059) * C59) *
               C58 * C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C3222 +
           ((C66 * C612 - C57 * C616) * C102 +
            (C66 * C722 - C57 * C726) * C59) *
               C58 * C5200) *
              C5120 * C1757 +
          (((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
               C58 * C3222 +
           ((C57 * C620 - C66 * C614) * C102 +
            (C57 * C728 - C66 * C724) * C59) *
               C58 * C5200) *
              C5120 * C1758 +
          (((C57 * C76 - C66 * C70) * C102 + (C57 * C162 - C66 * C158) * C59) *
               C58 * C3222 +
           ((C66 * C1167 - C57 * C1168) * C102 +
            (C66 * C1253 - C57 * C1254) * C59) *
               C58 * C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
              C58 * C3684 +
          ((C66 * C612 - C57 * C616) * C102 + (C66 * C722 - C57 * C726) * C59) *
              C58 * C3685 +
          ((C57 * C618 - C66 * C613) * C102 + (C57 * C727 - C66 * C723) * C59) *
              C58 * C3686 +
          ((C66 * C3688 - C57 * C3689) * C102 +
           (C66 * C3750 - C57 * C3751) * C59) *
              C58 * C3687) *
         C5120 * C5101) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (-std::pow(Pi, 2.5) *
         (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) * C57 * C58 *
               C3222 -
           (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) * C57 * C58 *
               C5200) *
              C306 +
          ((C102 * C1467 - C182 * C1425 - C102 * C1543 + C59 * C1581) * C57 *
               C58 * C5200 -
           (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) * C57 * C58 *
               C3222) *
              C307 +
          ((C102 * C354 - C182 * C312 - C102 * C422 + C59 * C456) * C57 * C58 *
               C3222 -
           (C102 * C3002 - C182 * C2972 - C102 * C3058 + C59 * C3086) * C57 *
               C58 * C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) * C57 * C58 *
               C3222 -
           (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) * C57 * C58 *
               C5200) *
              C5120 * C1757 +
          ((C102 * C656 - C182 * C614 - C102 * C724 + C59 * C758) * C57 * C58 *
               C5200 -
           (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) * C57 * C58 *
               C3222) *
              C5120 * C1758 +
          ((C102 * C105 - C182 * C70 - C102 * C158 + C59 * C185) * C57 * C58 *
               C3222 -
           (C102 * C1197 - C182 * C1167 - C102 * C1253 + C59 * C1281) * C57 *
               C58 * C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) * C57 * C58 *
              C3684 -
          (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) * C57 * C58 *
              C3685 +
          (C102 * C655 - C182 * C613 - C102 * C723 + C59 * C757) * C57 * C58 *
              C3686 -
          (C102 * C3710 - C182 * C3688 - C102 * C3750 + C59 * C3770) * C57 *
              C58 * C3687) *
         C5120 * C5101) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] += (-std::pow(Pi, 2.5) *
                   ((((C58 * C130 - C129 * C68) * C102 +
                      (C58 * C205 - C129 * C156) * C59) *
                         C57 * C3222 +
                     ((C129 * C612 - C58 * C688) * C102 +
                      (C129 * C722 - C58 * C786) * C59) *
                         C57 * C5200) *
                        C306 +
                    (((C129 * C311 - C58 * C387) * C102 +
                      (C129 * C421 - C58 * C485) * C59) *
                         C57 * C3222 +
                     ((C58 * C1505 - C129 * C1425) * C102 +
                      (C58 * C1617 - C129 * C1543) * C59) *
                         C57 * C5200) *
                        C307 +
                    (((C58 * C388 - C129 * C312) * C102 +
                      (C58 * C486 - C129 * C422) * C59) *
                         C57 * C3222 +
                     ((C129 * C2972 - C58 * C3030) * C102 +
                      (C129 * C3058 - C58 * C3113) * C59) *
                         C57 * C5200) *
                        C308) *
                   C5101) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * ((((C58 * C130 - C129 * C68) * C102 +
                                          (C58 * C205 - C129 * C156) * C59) *
                                             C57 * C3222 +
                                         ((C129 * C612 - C58 * C688) * C102 +
                                          (C129 * C722 - C58 * C786) * C59) *
                                             C57 * C5200) *
                                            C5120 * C1757 +
                                        (((C129 * C69 - C58 * C131) * C102 +
                                          (C129 * C157 - C58 * C206) * C59) *
                                             C57 * C3222 +
                                         ((C58 * C690 - C129 * C614) * C102 +
                                          (C58 * C788 - C129 * C724) * C59) *
                                             C57 * C5200) *
                                            C5120 * C1758 +
                                        (((C58 * C132 - C129 * C70) * C102 +
                                          (C58 * C207 - C129 * C158) * C59) *
                                             C57 * C3222 +
                                         ((C129 * C1167 - C58 * C1225) * C102 +
                                          (C129 * C1253 - C58 * C1308) * C59) *
                                             C57 * C5200) *
                                            C5120 * C1759)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C58 * C130 - C129 * C68) * C102 +
                     (C58 * C205 - C129 * C156) * C59) *
                        C57 * C3684 +
                    ((C129 * C612 - C58 * C688) * C102 +
                     (C129 * C722 - C58 * C786) * C59) *
                        C57 * C3685 +
                    ((C58 * C689 - C129 * C613) * C102 +
                     (C58 * C787 - C129 * C723) * C59) *
                        C57 * C3686 +
                    ((C129 * C3688 - C58 * C3730) * C102 +
                     (C129 * C3750 - C58 * C3789) * C59) *
                        C57 * C3687) *
                   C5120 * C5101) /
                      (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C3222 +
           ((C66 * C612 - C57 * C616) * C129 +
            (C66 * C816 - C57 * C820) * C58) *
               C59 * C5200) *
              C306 +
          (((C66 * C311 - C57 * C315) * C129 +
            (C66 * C515 - C57 * C519) * C58) *
               C59 * C3222 +
           ((C57 * C1427 - C66 * C1425) * C129 +
            (C57 * C1655 - C66 * C1653) * C58) *
               C59 * C5200) *
              C307 +
          (((C57 * C317 - C66 * C312) * C129 +
            (C57 * C520 - C66 * C516) * C58) *
               C59 * C3222 +
           ((C66 * C2972 - C57 * C2973) * C129 +
            (C66 * C3140 - C57 * C3141) * C58) *
               C59 * C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C3222 +
           ((C66 * C612 - C57 * C616) * C129 +
            (C66 * C816 - C57 * C820) * C58) *
               C59 * C5200) *
              C5120 * C1757 +
          (((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
               C59 * C3222 +
           ((C57 * C620 - C66 * C614) * C129 +
            (C57 * C822 - C66 * C818) * C58) *
               C59 * C5200) *
              C5120 * C1758 +
          (((C57 * C76 - C66 * C70) * C129 + (C57 * C233 - C66 * C229) * C58) *
               C59 * C3222 +
           ((C66 * C1167 - C57 * C1168) * C129 +
            (C66 * C1335 - C57 * C1336) * C58) *
               C59 * C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
              C59 * C3684 +
          ((C66 * C612 - C57 * C616) * C129 + (C66 * C816 - C57 * C820) * C58) *
              C59 * C3685 +
          ((C57 * C618 - C66 * C613) * C129 + (C57 * C821 - C66 * C817) * C58) *
              C59 * C3686 +
          ((C66 * C3688 - C57 * C3689) * C129 +
           (C66 * C3808 - C57 * C3809) * C58) *
              C59 * C3687) *
         C5120 * C5101) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] += (-std::pow(Pi, 2.5) *
                   ((((C59 * C103 - C102 * C68) * C129 +
                      (C59 * C253 - C102 * C227) * C58) *
                         C57 * C3222 +
                     ((C102 * C612 - C59 * C654) * C129 +
                      (C102 * C816 - C59 * C850) * C58) *
                         C57 * C5200) *
                        C306 +
                    (((C102 * C311 - C59 * C353) * C129 +
                      (C102 * C515 - C59 * C549) * C58) *
                         C57 * C3222 +
                     ((C59 * C1467 - C102 * C1425) * C129 +
                      (C59 * C1691 - C102 * C1653) * C58) *
                         C57 * C5200) *
                        C307 +
                    (((C59 * C354 - C102 * C312) * C129 +
                      (C59 * C550 - C102 * C516) * C58) *
                         C57 * C3222 +
                     ((C102 * C2972 - C59 * C3002) * C129 +
                      (C102 * C3140 - C59 * C3168) * C58) *
                         C57 * C5200) *
                        C308) *
                   C5101) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * ((((C59 * C103 - C102 * C68) * C129 +
                                          (C59 * C253 - C102 * C227) * C58) *
                                             C57 * C3222 +
                                         ((C102 * C612 - C59 * C654) * C129 +
                                          (C102 * C816 - C59 * C850) * C58) *
                                             C57 * C5200) *
                                            C5120 * C1757 +
                                        (((C102 * C69 - C59 * C104) * C129 +
                                          (C102 * C228 - C59 * C254) * C58) *
                                             C57 * C3222 +
                                         ((C59 * C656 - C102 * C614) * C129 +
                                          (C59 * C852 - C102 * C818) * C58) *
                                             C57 * C5200) *
                                            C5120 * C1758 +
                                        (((C59 * C105 - C102 * C70) * C129 +
                                          (C59 * C255 - C102 * C229) * C58) *
                                             C57 * C3222 +
                                         ((C102 * C1167 - C59 * C1197) * C129 +
                                          (C102 * C1335 - C59 * C1363) * C58) *
                                             C57 * C5200) *
                                            C5120 * C1759)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C59 * C103 - C102 * C68) * C129 +
                     (C59 * C253 - C102 * C227) * C58) *
                        C57 * C3684 +
                    ((C102 * C612 - C59 * C654) * C129 +
                     (C102 * C816 - C59 * C850) * C58) *
                        C57 * C3685 +
                    ((C59 * C655 - C102 * C613) * C129 +
                     (C59 * C851 - C102 * C817) * C58) *
                        C57 * C3686 +
                    ((C102 * C3688 - C59 * C3710) * C129 +
                     (C102 * C3808 - C59 * C3828) * C58) *
                        C57 * C3687) *
                   C5120 * C5101) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (-std::pow(Pi, 2.5) *
         (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) * C59 * C57 *
               C3222 -
           (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) * C59 * C57 *
               C5200) *
              C306 +
          ((C129 * C1505 - C275 * C1425 - C129 * C1653 + C58 * C1727) * C59 *
               C57 * C5200 -
           (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) * C59 * C57 *
               C3222) *
              C307 +
          ((C129 * C388 - C275 * C312 - C129 * C516 + C58 * C580) * C59 * C57 *
               C3222 -
           (C129 * C3030 - C275 * C2972 - C129 * C3140 + C58 * C3195) * C59 *
               C57 * C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) * C59 * C57 *
               C3222 -
           (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) * C59 * C57 *
               C5200) *
              C5120 * C1757 +
          ((C129 * C690 - C275 * C614 - C129 * C818 + C58 * C882) * C59 * C57 *
               C5200 -
           (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) * C59 * C57 *
               C3222) *
              C5120 * C1758 +
          ((C129 * C132 - C275 * C70 - C129 * C229 + C58 * C278) * C59 * C57 *
               C3222 -
           (C129 * C1225 - C275 * C1167 - C129 * C1335 + C58 * C1390) * C59 *
               C57 * C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) * C59 * C57 *
              C3684 -
          (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) * C59 * C57 *
              C3685 +
          (C129 * C689 - C275 * C613 - C129 * C817 + C58 * C881) * C59 * C57 *
              C3686 -
          (C129 * C3730 - C275 * C3688 - C129 * C3808 + C58 * C3847) * C59 *
              C57 * C3687) *
         C5120 * C5101) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C5245 -
           (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) * C58 * C59 *
               C5246 +
           (C66 * C618 - C67 * C613 - C66 * C619 + C57 * C625) * C58 * C59 *
               C4182) *
              C5120 * C5214 +
          ((C66 * C620 - C67 * C614 - C66 * C621 + C57 * C626) * C58 * C59 *
               C5246 -
           (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 * C59 * C5245 -
           (C66 * C622 - C67 * C615 - C66 * C623 + C57 * C627) * C58 * C59 *
               C4182) *
              C5120 * C5107)) /
        (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C5245 +
           ((C102 * C612 - C59 * C654) * C66 +
            (C102 * C617 - C59 * C658) * C57) *
               C58 * C5246 +
           ((C59 * C655 - C102 * C613) * C66 +
            (C59 * C659 - C102 * C619) * C57) *
               C58 * C4182) *
              C5120 * C5214 +
          (((C102 * C69 - C59 * C104) * C66 + (C102 * C75 - C59 * C108) * C57) *
               C58 * C5245 +
           ((C59 * C656 - C102 * C614) * C66 +
            (C59 * C660 - C102 * C621) * C57) *
               C58 * C5246 +
           ((C102 * C615 - C59 * C657) * C66 +
            (C102 * C623 - C59 * C661) * C57) *
               C58 * C4182) *
              C5120 * C5107)) /
        (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C5245 +
           ((C129 * C612 - C58 * C688) * C66 +
            (C129 * C617 - C58 * C692) * C57) *
               C59 * C5246 +
           ((C58 * C689 - C129 * C613) * C66 +
            (C58 * C693 - C129 * C619) * C57) *
               C59 * C4182) *
              C5120 * C5214 +
          (((C129 * C69 - C58 * C131) * C66 + (C129 * C75 - C58 * C135) * C57) *
               C59 * C5245 +
           ((C58 * C690 - C129 * C614) * C66 +
            (C58 * C694 - C129 * C621) * C57) *
               C59 * C5246 +
           ((C129 * C615 - C58 * C691) * C66 +
            (C129 * C623 - C58 * C695) * C57) *
               C59 * C4182) *
              C5120 * C5107)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C5245 +
           ((C66 * C612 - C57 * C616) * C102 +
            (C66 * C722 - C57 * C726) * C59) *
               C58 * C5246 +
           ((C57 * C618 - C66 * C613) * C102 +
            (C57 * C727 - C66 * C723) * C59) *
               C58 * C4182) *
              C5120 * C5214 +
          (((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
               C58 * C5245 +
           ((C57 * C620 - C66 * C614) * C102 +
            (C57 * C728 - C66 * C724) * C59) *
               C58 * C5246 +
           ((C66 * C615 - C57 * C622) * C102 +
            (C66 * C725 - C57 * C729) * C59) *
               C58 * C4182) *
              C5120 * C5107)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) *
                         C57 * C58 * C5245 -
                     (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) *
                         C57 * C58 * C5246 +
                     (C102 * C655 - C182 * C613 - C102 * C723 + C59 * C757) *
                         C57 * C58 * C4182) *
                        C5120 * C5214 +
                    ((C102 * C656 - C182 * C614 - C102 * C724 + C59 * C758) *
                         C57 * C58 * C5246 -
                     (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) *
                         C57 * C58 * C5245 -
                     (C102 * C657 - C182 * C615 - C102 * C725 + C59 * C759) *
                         C57 * C58 * C4182) *
                        C5120 * C5107)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C58 * C130 - C129 * C68) * C102 +
                      (C58 * C205 - C129 * C156) * C59) *
                         C57 * C5245 +
                     ((C129 * C612 - C58 * C688) * C102 +
                      (C129 * C722 - C58 * C786) * C59) *
                         C57 * C5246 +
                     ((C58 * C689 - C129 * C613) * C102 +
                      (C58 * C787 - C129 * C723) * C59) *
                         C57 * C4182) *
                        C5120 * C5214 +
                    (((C129 * C69 - C58 * C131) * C102 +
                      (C129 * C157 - C58 * C206) * C59) *
                         C57 * C5245 +
                     ((C58 * C690 - C129 * C614) * C102 +
                      (C58 * C788 - C129 * C724) * C59) *
                         C57 * C5246 +
                     ((C129 * C615 - C58 * C691) * C102 +
                      (C129 * C725 - C58 * C789) * C59) *
                         C57 * C4182) *
                        C5120 * C5107)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C5245 +
           ((C66 * C612 - C57 * C616) * C129 +
            (C66 * C816 - C57 * C820) * C58) *
               C59 * C5246 +
           ((C57 * C618 - C66 * C613) * C129 +
            (C57 * C821 - C66 * C817) * C58) *
               C59 * C4182) *
              C5120 * C5214 +
          (((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
               C59 * C5245 +
           ((C57 * C620 - C66 * C614) * C129 +
            (C57 * C822 - C66 * C818) * C58) *
               C59 * C5246 +
           ((C66 * C615 - C57 * C622) * C129 +
            (C66 * C819 - C57 * C823) * C58) *
               C59 * C4182) *
              C5120 * C5107)) /
        (p * q * std::sqrt(p + q));
    d2eezy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C59 * C103 - C102 * C68) * C129 +
                      (C59 * C253 - C102 * C227) * C58) *
                         C57 * C5245 +
                     ((C102 * C612 - C59 * C654) * C129 +
                      (C102 * C816 - C59 * C850) * C58) *
                         C57 * C5246 +
                     ((C59 * C655 - C102 * C613) * C129 +
                      (C59 * C851 - C102 * C817) * C58) *
                         C57 * C4182) *
                        C5120 * C5214 +
                    (((C102 * C69 - C59 * C104) * C129 +
                      (C102 * C228 - C59 * C254) * C58) *
                         C57 * C5245 +
                     ((C59 * C656 - C102 * C614) * C129 +
                      (C59 * C852 - C102 * C818) * C58) *
                         C57 * C5246 +
                     ((C102 * C615 - C59 * C657) * C129 +
                      (C102 * C819 - C59 * C853) * C58) *
                         C57 * C4182) *
                        C5120 * C5107)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) *
                         C59 * C57 * C5245 -
                     (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) *
                         C59 * C57 * C5246 +
                     (C129 * C689 - C275 * C613 - C129 * C817 + C58 * C881) *
                         C59 * C57 * C4182) *
                        C5120 * C5214 +
                    ((C129 * C690 - C275 * C614 - C129 * C818 + C58 * C882) *
                         C59 * C57 * C5246 -
                     (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) *
                         C59 * C57 * C5245 -
                     (C129 * C691 - C275 * C615 - C129 * C819 + C58 * C883) *
                         C59 * C57 * C4182) *
                        C5120 * C5107)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C3222 -
           (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) * C58 * C59 *
               C5200) *
              C5120 * C1757 +
          ((C66 * C620 - C67 * C614 - C66 * C621 + C57 * C626) * C58 * C59 *
               C5200 -
           (C66 * C74 - C67 * C69 - C66 * C75 + C57 * C81) * C58 * C59 *
               C3222) *
              C5120 * C1758 +
          ((C66 * C76 - C67 * C70 - C66 * C77 + C57 * C82) * C58 * C59 * C3222 -
           (C66 * C1168 - C67 * C1167 - C66 * C1169 + C57 * C1170) * C58 * C59 *
               C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C72 - C67 * C68 - C66 * C73 + C57 * C80) * C58 * C59 * C3222 -
           (C66 * C616 - C67 * C612 - C66 * C617 + C57 * C624) * C58 * C59 *
               C5200) *
              C306 +
          ((C66 * C1427 - C67 * C1425 - C66 * C1428 + C57 * C1431) * C58 * C59 *
               C5200 -
           (C66 * C315 - C67 * C311 - C66 * C316 + C57 * C323) * C58 * C59 *
               C3222) *
              C307 +
          ((C66 * C317 - C67 * C312 - C66 * C318 + C57 * C324) * C58 * C59 *
               C3222 -
           (C66 * C2973 - C67 * C2972 - C66 * C2974 + C57 * C2975) * C58 * C59 *
               C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C3222 +
           ((C102 * C612 - C59 * C654) * C66 +
            (C102 * C617 - C59 * C658) * C57) *
               C58 * C5200) *
              C5120 * C1757 +
          (((C102 * C69 - C59 * C104) * C66 + (C102 * C75 - C59 * C108) * C57) *
               C58 * C3222 +
           ((C59 * C656 - C102 * C614) * C66 +
            (C59 * C660 - C102 * C621) * C57) *
               C58 * C5200) *
              C5120 * C1758 +
          (((C59 * C105 - C102 * C70) * C66 + (C59 * C109 - C102 * C77) * C57) *
               C58 * C3222 +
           ((C102 * C1167 - C59 * C1197) * C66 +
            (C102 * C1169 - C59 * C1198) * C57) *
               C58 * C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C59 * C103 - C102 * C68) * C66 + (C59 * C107 - C102 * C73) * C57) *
               C58 * C3222 +
           ((C102 * C612 - C59 * C654) * C66 +
            (C102 * C617 - C59 * C658) * C57) *
               C58 * C5200) *
              C306 +
          (((C102 * C311 - C59 * C353) * C66 +
            (C102 * C316 - C59 * C357) * C57) *
               C58 * C3222 +
           ((C59 * C1467 - C102 * C1425) * C66 +
            (C59 * C1469 - C102 * C1428) * C57) *
               C58 * C5200) *
              C307 +
          (((C59 * C354 - C102 * C312) * C66 +
            (C59 * C358 - C102 * C318) * C57) *
               C58 * C3222 +
           ((C102 * C2972 - C59 * C3002) * C66 +
            (C102 * C2974 - C59 * C3003) * C57) *
               C58 * C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C3222 +
           ((C129 * C612 - C58 * C688) * C66 +
            (C129 * C617 - C58 * C692) * C57) *
               C59 * C5200) *
              C5120 * C1757 +
          (((C129 * C69 - C58 * C131) * C66 + (C129 * C75 - C58 * C135) * C57) *
               C59 * C3222 +
           ((C58 * C690 - C129 * C614) * C66 +
            (C58 * C694 - C129 * C621) * C57) *
               C59 * C5200) *
              C5120 * C1758 +
          (((C58 * C132 - C129 * C70) * C66 + (C58 * C136 - C129 * C77) * C57) *
               C59 * C3222 +
           ((C129 * C1167 - C58 * C1225) * C66 +
            (C129 * C1169 - C58 * C1226) * C57) *
               C59 * C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C58 * C130 - C129 * C68) * C66 + (C58 * C134 - C129 * C73) * C57) *
               C59 * C3222 +
           ((C129 * C612 - C58 * C688) * C66 +
            (C129 * C617 - C58 * C692) * C57) *
               C59 * C5200) *
              C306 +
          (((C129 * C311 - C58 * C387) * C66 +
            (C129 * C316 - C58 * C391) * C57) *
               C59 * C3222 +
           ((C58 * C1505 - C129 * C1425) * C66 +
            (C58 * C1507 - C129 * C1428) * C57) *
               C59 * C5200) *
              C307 +
          (((C58 * C388 - C129 * C312) * C66 +
            (C58 * C392 - C129 * C318) * C57) *
               C59 * C3222 +
           ((C129 * C2972 - C58 * C3030) * C66 +
            (C129 * C2974 - C58 * C3031) * C57) *
               C59 * C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C3222 +
           ((C66 * C612 - C57 * C616) * C102 +
            (C66 * C722 - C57 * C726) * C59) *
               C58 * C5200) *
              C5120 * C1757 +
          (((C66 * C69 - C57 * C74) * C102 + (C66 * C157 - C57 * C161) * C59) *
               C58 * C3222 +
           ((C57 * C620 - C66 * C614) * C102 +
            (C57 * C728 - C66 * C724) * C59) *
               C58 * C5200) *
              C5120 * C1758 +
          (((C57 * C76 - C66 * C70) * C102 + (C57 * C162 - C66 * C158) * C59) *
               C58 * C3222 +
           ((C66 * C1167 - C57 * C1168) * C102 +
            (C66 * C1253 - C57 * C1254) * C59) *
               C58 * C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C102 + (C57 * C160 - C66 * C156) * C59) *
               C58 * C3222 +
           ((C66 * C612 - C57 * C616) * C102 +
            (C66 * C722 - C57 * C726) * C59) *
               C58 * C5200) *
              C306 +
          (((C66 * C311 - C57 * C315) * C102 +
            (C66 * C421 - C57 * C425) * C59) *
               C58 * C3222 +
           ((C57 * C1427 - C66 * C1425) * C102 +
            (C57 * C1545 - C66 * C1543) * C59) *
               C58 * C5200) *
              C307 +
          (((C57 * C317 - C66 * C312) * C102 +
            (C57 * C426 - C66 * C422) * C59) *
               C58 * C3222 +
           ((C66 * C2972 - C57 * C2973) * C102 +
            (C66 * C3058 - C57 * C3059) * C59) *
               C58 * C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) * C57 * C58 *
               C3222 -
           (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) * C57 * C58 *
               C5200) *
              C5120 * C1757 +
          ((C102 * C656 - C182 * C614 - C102 * C724 + C59 * C758) * C57 * C58 *
               C5200 -
           (C102 * C104 - C182 * C69 - C102 * C157 + C59 * C184) * C57 * C58 *
               C3222) *
              C5120 * C1758 +
          ((C102 * C105 - C182 * C70 - C102 * C158 + C59 * C185) * C57 * C58 *
               C3222 -
           (C102 * C1197 - C182 * C1167 - C102 * C1253 + C59 * C1281) * C57 *
               C58 * C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C102 * C103 - C182 * C68 - C102 * C156 + C59 * C183) * C57 * C58 *
               C3222 -
           (C102 * C654 - C182 * C612 - C102 * C722 + C59 * C756) * C57 * C58 *
               C5200) *
              C306 +
          ((C102 * C1467 - C182 * C1425 - C102 * C1543 + C59 * C1581) * C57 *
               C58 * C5200 -
           (C102 * C353 - C182 * C311 - C102 * C421 + C59 * C455) * C57 * C58 *
               C3222) *
              C307 +
          ((C102 * C354 - C182 * C312 - C102 * C422 + C59 * C456) * C57 * C58 *
               C3222 -
           (C102 * C3002 - C182 * C2972 - C102 * C3058 + C59 * C3086) * C57 *
               C58 * C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C58 * C130 - C129 * C68) * C102 +
                      (C58 * C205 - C129 * C156) * C59) *
                         C57 * C3222 +
                     ((C129 * C612 - C58 * C688) * C102 +
                      (C129 * C722 - C58 * C786) * C59) *
                         C57 * C5200) *
                        C5120 * C1757 +
                    (((C129 * C69 - C58 * C131) * C102 +
                      (C129 * C157 - C58 * C206) * C59) *
                         C57 * C3222 +
                     ((C58 * C690 - C129 * C614) * C102 +
                      (C58 * C788 - C129 * C724) * C59) *
                         C57 * C5200) *
                        C5120 * C1758 +
                    (((C58 * C132 - C129 * C70) * C102 +
                      (C58 * C207 - C129 * C158) * C59) *
                         C57 * C3222 +
                     ((C129 * C1167 - C58 * C1225) * C102 +
                      (C129 * C1253 - C58 * C1308) * C59) *
                         C57 * C5200) *
                        C5120 * C1759)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C58 * C130 - C129 * C68) * C102 +
                      (C58 * C205 - C129 * C156) * C59) *
                         C57 * C3222 +
                     ((C129 * C612 - C58 * C688) * C102 +
                      (C129 * C722 - C58 * C786) * C59) *
                         C57 * C5200) *
                        C306 +
                    (((C129 * C311 - C58 * C387) * C102 +
                      (C129 * C421 - C58 * C485) * C59) *
                         C57 * C3222 +
                     ((C58 * C1505 - C129 * C1425) * C102 +
                      (C58 * C1617 - C129 * C1543) * C59) *
                         C57 * C5200) *
                        C307 +
                    (((C58 * C388 - C129 * C312) * C102 +
                      (C58 * C486 - C129 * C422) * C59) *
                         C57 * C3222 +
                     ((C129 * C2972 - C58 * C3030) * C102 +
                      (C129 * C3058 - C58 * C3113) * C59) *
                         C57 * C5200) *
                        C308) *
                   C5101) /
                      (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C3222 +
           ((C66 * C612 - C57 * C616) * C129 +
            (C66 * C816 - C57 * C820) * C58) *
               C59 * C5200) *
              C5120 * C1757 +
          (((C66 * C69 - C57 * C74) * C129 + (C66 * C228 - C57 * C232) * C58) *
               C59 * C3222 +
           ((C57 * C620 - C66 * C614) * C129 +
            (C57 * C822 - C66 * C818) * C58) *
               C59 * C5200) *
              C5120 * C1758 +
          (((C57 * C76 - C66 * C70) * C129 + (C57 * C233 - C66 * C229) * C58) *
               C59 * C3222 +
           ((C66 * C1167 - C57 * C1168) * C129 +
            (C66 * C1335 - C57 * C1336) * C58) *
               C59 * C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C57 * C72 - C66 * C68) * C129 + (C57 * C231 - C66 * C227) * C58) *
               C59 * C3222 +
           ((C66 * C612 - C57 * C616) * C129 +
            (C66 * C816 - C57 * C820) * C58) *
               C59 * C5200) *
              C306 +
          (((C66 * C311 - C57 * C315) * C129 +
            (C66 * C515 - C57 * C519) * C58) *
               C59 * C3222 +
           ((C57 * C1427 - C66 * C1425) * C129 +
            (C57 * C1655 - C66 * C1653) * C58) *
               C59 * C5200) *
              C307 +
          (((C57 * C317 - C66 * C312) * C129 +
            (C57 * C520 - C66 * C516) * C58) *
               C59 * C3222 +
           ((C66 * C2972 - C57 * C2973) * C129 +
            (C66 * C3140 - C57 * C3141) * C58) *
               C59 * C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C59 * C103 - C102 * C68) * C129 +
                      (C59 * C253 - C102 * C227) * C58) *
                         C57 * C3222 +
                     ((C102 * C612 - C59 * C654) * C129 +
                      (C102 * C816 - C59 * C850) * C58) *
                         C57 * C5200) *
                        C5120 * C1757 +
                    (((C102 * C69 - C59 * C104) * C129 +
                      (C102 * C228 - C59 * C254) * C58) *
                         C57 * C3222 +
                     ((C59 * C656 - C102 * C614) * C129 +
                      (C59 * C852 - C102 * C818) * C58) *
                         C57 * C5200) *
                        C5120 * C1758 +
                    (((C59 * C105 - C102 * C70) * C129 +
                      (C59 * C255 - C102 * C229) * C58) *
                         C57 * C3222 +
                     ((C102 * C1167 - C59 * C1197) * C129 +
                      (C102 * C1335 - C59 * C1363) * C58) *
                         C57 * C5200) *
                        C5120 * C1759)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C59 * C103 - C102 * C68) * C129 +
                      (C59 * C253 - C102 * C227) * C58) *
                         C57 * C3222 +
                     ((C102 * C612 - C59 * C654) * C129 +
                      (C102 * C816 - C59 * C850) * C58) *
                         C57 * C5200) *
                        C306 +
                    (((C102 * C311 - C59 * C353) * C129 +
                      (C102 * C515 - C59 * C549) * C58) *
                         C57 * C3222 +
                     ((C59 * C1467 - C102 * C1425) * C129 +
                      (C59 * C1691 - C102 * C1653) * C58) *
                         C57 * C5200) *
                        C307 +
                    (((C59 * C354 - C102 * C312) * C129 +
                      (C59 * C550 - C102 * C516) * C58) *
                         C57 * C3222 +
                     ((C102 * C2972 - C59 * C3002) * C129 +
                      (C102 * C3140 - C59 * C3168) * C58) *
                         C57 * C5200) *
                        C308) *
                   C5101) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) * C59 * C57 *
               C3222 -
           (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) * C59 * C57 *
               C5200) *
              C5120 * C1757 +
          ((C129 * C690 - C275 * C614 - C129 * C818 + C58 * C882) * C59 * C57 *
               C5200 -
           (C129 * C131 - C275 * C69 - C129 * C228 + C58 * C277) * C59 * C57 *
               C3222) *
              C5120 * C1758 +
          ((C129 * C132 - C275 * C70 - C129 * C229 + C58 * C278) * C59 * C57 *
               C3222 -
           (C129 * C1225 - C275 * C1167 - C129 * C1335 + C58 * C1390) * C59 *
               C57 * C5200) *
              C5120 * C1759)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C129 * C130 - C275 * C68 - C129 * C227 + C58 * C276) * C59 * C57 *
               C3222 -
           (C129 * C688 - C275 * C612 - C129 * C816 + C58 * C880) * C59 * C57 *
               C5200) *
              C306 +
          ((C129 * C1505 - C275 * C1425 - C129 * C1653 + C58 * C1727) * C59 *
               C57 * C5200 -
           (C129 * C387 - C275 * C311 - C129 * C515 + C58 * C579) * C59 * C57 *
               C3222) *
              C307 +
          ((C129 * C388 - C275 * C312 - C129 * C516 + C58 * C580) * C59 * C57 *
               C3222 -
           (C129 * C3030 - C275 * C2972 - C129 * C3140 + C58 * C3195) * C59 *
               C57 * C5200) *
              C308) *
         C5101) /
            (p * q * std::sqrt(p + q));
}
