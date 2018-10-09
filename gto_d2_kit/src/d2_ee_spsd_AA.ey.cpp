/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_spsd_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0102_11(const double ae,
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
    const double C5680 = ae + be;
    const double C5679 = xA - xB;
    const double C5678 = ae * be;
    const double C5697 = yA - yB;
    const double C5700 = zA - zB;
    const double C5731 = p + q;
    const double C5730 = p * q;
    const double C5736 = xP - xQ;
    const double C5735 = bs[2];
    const double C5743 = std::pow(ae, 2);
    const double C5741 = bs[3];
    const double C5754 = bs[4];
    const double C5774 = yP - yQ;
    const double C5788 = zP - zQ;
    const double C78 = bs[0];
    const double C6133 = ce + de;
    const double C6132 = ce * de;
    const double C6131 = xC - xD;
    const double C6145 = yC - yD;
    const double C6159 = zC - zD;
    const double C6205 = 2 * C5680;
    const double C6204 = std::pow(C5679, 2);
    const double C5681 = C5678 * C5679;
    const double C5713 = C5678 * C5697;
    const double C6207 = std::pow(C5697, 2);
    const double C5725 = C5678 * C5700;
    const double C6206 = std::pow(C5700, 2);
    const double C5732 = 2 * C5730;
    const double C5744 = C5736 * ae;
    const double C5740 = std::pow(C5736, 2);
    const double C5777 = C5774 * ae;
    const double C5776 = C5736 * C5774;
    const double C5803 = C5774 * C5736;
    const double C5811 = std::pow(C5774, 2);
    const double C5791 = C5788 * ae;
    const double C5790 = C5736 * C5788;
    const double C5820 = C5774 * C5788;
    const double C5828 = C5788 * C5736;
    const double C5836 = C5788 * C5774;
    const double C5844 = std::pow(C5788, 2);
    const double C6210 = 2 * C6133;
    const double C6209 = std::pow(C6133, 2);
    const double C6134 = std::pow(C6131, 2);
    const double C6208 = C6131 * ce;
    const double C6146 = std::pow(C6145, 2);
    const double C6211 = C6145 * ce;
    const double C6160 = std::pow(C6159, 2);
    const double C6212 = C6159 * ce;
    const double C6214 = std::pow(C6205, -1);
    const double C6213 = C6204 * C5678;
    const double C6216 = C6207 * C5678;
    const double C6215 = C6206 * C5678;
    const double C5734 = C5732 / C5731;
    const double C86 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C5732 / C5731, 2) -
          (bs[1] * C5732) / C5731) *
         std::pow(ae, 2)) /
        std::pow(C5680, 2);
    const double C79 = -(C5736 * bs[1] * C5732) / C5731;
    const double C453 = -(C5774 * bs[1] * C5732) / C5731;
    const double C754 = -(C5788 * bs[1] * C5732) / C5731;
    const double C5746 = C5741 * C5744;
    const double C5757 = C5754 * C5744;
    const double C82 = (-(bs[1] * C5744 * C5732) / C5731) / C5680;
    const double C5756 = C5740 * C5754;
    const double C5779 = C5741 * C5777;
    const double C5783 = C5754 * C5777;
    const double C123 = (-(bs[1] * C5777 * C5732) / C5731) / C5680;
    const double C5778 = C5776 * C5743;
    const double C5804 = C5803 * C5743;
    const double C5813 = C5811 * C5754;
    const double C5793 = C5741 * C5791;
    const double C5797 = C5754 * C5791;
    const double C170 = (-(bs[1] * C5791 * C5732) / C5731) / C5680;
    const double C5792 = C5790 * C5743;
    const double C5821 = C5820 * C5743;
    const double C5829 = C5828 * C5743;
    const double C5837 = C5836 * C5743;
    const double C5846 = C5844 * C5754;
    const double C6219 = std::pow(C6210, -2);
    const double C6217 = std::pow(C6210, -1);
    const double C6135 = C6134 * C6132;
    const double C6147 = C6146 * C6132;
    const double C6161 = C6160 * C6132;
    const double C6222 = C6213 / C5680;
    const double C6224 = C6216 / C5680;
    const double C6223 = C6215 / C5680;
    const double C5737 = std::pow(C5734, 2);
    const double C5742 = -C5734;
    const double C5755 = std::pow(C5734, 4);
    const double C5782 = C5754 * C5778;
    const double C5806 = C5754 * C5804;
    const double C5796 = C5754 * C5792;
    const double C5823 = C5754 * C5821;
    const double C5831 = C5754 * C5829;
    const double C5839 = C5754 * C5837;
    const double C6136 = C6135 / C6133;
    const double C6148 = C6147 / C6133;
    const double C6162 = C6161 / C6133;
    const double C6225 = -C6222;
    const double C6227 = -C6224;
    const double C6226 = -C6223;
    const double C5739 = C5735 * C5737;
    const double C87 = (2 * ae * C5737 * C5735 * C5736 * ae +
                        C5736 *
                            (C5735 * C5737 +
                             std::pow(C5736, 2) * bs[3] * std::pow(-C5734, 3)) *
                            std::pow(ae, 2)) /
                       std::pow(C5680, 2);
    const double C127 =
        (C5737 * C5735 * C5736 * (yP - yQ) * C5743) / std::pow(C5680, 2);
    const double C174 =
        (C5737 * C5735 * C5736 * (zP - zQ) * C5743) / std::pow(C5680, 2);
    const double C216 =
        (C5737 * C5735 * C5774 * C5736 * C5743) / std::pow(C5680, 2);
    const double C247 =
        ((std::pow(C5774, 2) * C5735 * C5737 - (bs[1] * C5732) / C5731) *
         C5743) /
        std::pow(C5680, 2);
    const double C291 =
        (C5737 * C5735 * C5774 * C5788 * C5743) / std::pow(C5680, 2);
    const double C331 =
        (C5737 * C5735 * C5788 * C5736 * C5743) / std::pow(C5680, 2);
    const double C361 =
        (C5737 * C5735 * C5788 * C5774 * C5743) / std::pow(C5680, 2);
    const double C402 =
        ((std::pow(C5788, 2) * C5735 * C5737 - (bs[1] * C5732) / C5731) *
         C5743) /
        std::pow(C5680, 2);
    const double C83 = (C5736 * C5737 * C5735 * C5744) / C5680 -
                       (ae * bs[1] * C5732) / (C5731 * C5680);
    const double C124 = (C5736 * C5737 * C5735 * C5777) / C5680;
    const double C171 = (C5736 * C5737 * C5735 * C5791) / C5680;
    const double C457 = (C5774 * C5737 * C5735 * C5744) / C5680;
    const double C495 = (C5774 * C5737 * C5735 * C5777) / C5680 -
                        (ae * bs[1] * C5732) / (C5731 * C5680);
    const double C529 = (C5774 * C5737 * C5735 * C5791) / C5680;
    const double C758 = (C5788 * C5737 * C5735 * C5744) / C5680;
    const double C796 = (C5788 * C5737 * C5735 * C5777) / C5680;
    const double C830 = (C5788 * C5737 * C5735 * C5791) / C5680 -
                        (ae * bs[1] * C5732) / (C5731 * C5680);
    const double C5745 = std::pow(C5742, 3);
    const double C5761 = C5755 * C5757;
    const double C5760 = C5756 * C5755;
    const double C5785 = C5755 * C5783;
    const double C5799 = C5755 * C5797;
    const double C5814 = C5813 * C5755;
    const double C5847 = C5846 * C5755;
    const double C5784 = C5755 * C5782;
    const double C5807 = C5755 * C5806;
    const double C5798 = C5755 * C5796;
    const double C5824 = C5755 * C5823;
    const double C5832 = C5755 * C5831;
    const double C5840 = C5755 * C5839;
    const double C6137 = -C6136;
    const double C6149 = -C6148;
    const double C6163 = -C6162;
    const double C6228 = std::exp(C6225);
    const double C6230 = std::exp(C6227);
    const double C6229 = std::exp(C6226);
    const double C5747 = C5739 * ae;
    const double C80 = C5739 * C5740 - (bs[1] * C5732) / C5731;
    const double C452 = C5774 * C5736 * C5739;
    const double C454 = C5739 * C5811 - (bs[1] * C5732) / C5731;
    const double C753 = C5788 * C5736 * C5739;
    const double C755 = C5739 * C5844 - (bs[1] * C5732) / C5731;
    const double C1777 = C5788 * C5774 * C5739;
    const double C5748 = C5745 * C5746;
    const double C5753 = C5741 * C5745;
    const double C5780 = C5745 * C5779;
    const double C5794 = C5745 * C5793;
    const double C128 = (ae * C5737 * C5735 * C5774 * ae +
                         C5736 * C5745 * C5741 * C5736 * C5774 * C5743) /
                        std::pow(C5680, 2);
    const double C175 = (ae * C5737 * C5735 * C5788 * ae +
                         C5736 * C5745 * C5741 * C5736 * C5788 * C5743) /
                        std::pow(C5680, 2);
    const double C217 = (ae * C5737 * C5735 * C5777 +
                         C5736 * C5745 * C5741 * C5774 * C5736 * C5743) /
                        std::pow(C5680, 2);
    const double C248 =
        (C5736 * (C5739 + std::pow(C5774, 2) * C5741 * C5745) * C5743) /
        std::pow(C5680, 2);
    const double C292 =
        (C5736 * C5745 * C5741 * C5774 * C5788 * C5743) / std::pow(C5680, 2);
    const double C293 =
        (C5745 * C5741 * C5821 + C5755 * C5754 * C5821 * C5740) /
        std::pow(C5680, 2);
    const double C332 = (ae * C5737 * C5735 * C5791 +
                         C5736 * C5745 * C5741 * C5788 * C5736 * C5743) /
                        std::pow(C5680, 2);
    const double C362 =
        (C5736 * C5745 * C5741 * C5788 * C5774 * C5743) / std::pow(C5680, 2);
    const double C363 =
        (C5745 * C5741 * C5837 + C5755 * C5754 * C5837 * C5740) /
        std::pow(C5680, 2);
    const double C403 =
        (C5736 * (C5739 + std::pow(C5788, 2) * C5741 * C5745) * C5743) /
        std::pow(C5680, 2);
    const double C461 =
        (C5774 * (C5739 + C5740 * C5741 * C5745) * C5743) / std::pow(C5680, 2);
    const double C499 =
        (ae * C5737 * C5735 * C5744 + C5774 * C5745 * C5741 * C5778) /
        std::pow(C5680, 2);
    const double C533 = (C5774 * C5745 * C5741 * C5792) / std::pow(C5680, 2);
    const double C563 =
        (ae * C5737 * C5735 * C5744 + C5774 * C5745 * C5741 * C5804) /
        std::pow(C5680, 2);
    const double C593 = (2 * ae * C5737 * C5735 * C5777 +
                         C5774 * (C5739 + C5811 * C5741 * C5745) * C5743) /
                        std::pow(C5680, 2);
    const double C627 =
        (ae * C5737 * C5735 * C5791 + C5774 * C5745 * C5741 * C5821) /
        std::pow(C5680, 2);
    const double C657 = (C5774 * C5745 * C5741 * C5829) / std::pow(C5680, 2);
    const double C687 =
        (ae * C5737 * C5735 * C5791 + C5774 * C5745 * C5741 * C5837) /
        std::pow(C5680, 2);
    const double C717 =
        (C5774 * (C5739 + C5844 * C5741 * C5745) * C5743) / std::pow(C5680, 2);
    const double C762 =
        (C5788 * (C5739 + C5740 * C5741 * C5745) * C5743) / std::pow(C5680, 2);
    const double C800 = (C5788 * C5745 * C5741 * C5778) / std::pow(C5680, 2);
    const double C834 =
        (ae * C5737 * C5735 * C5744 + C5788 * C5745 * C5741 * C5792) /
        std::pow(C5680, 2);
    const double C864 = (C5788 * C5745 * C5741 * C5804) / std::pow(C5680, 2);
    const double C894 =
        (C5788 * (C5739 + C5811 * C5741 * C5745) * C5743) / std::pow(C5680, 2);
    const double C928 =
        (ae * C5737 * C5735 * C5777 + C5788 * C5745 * C5741 * C5821) /
        std::pow(C5680, 2);
    const double C958 =
        (ae * C5737 * C5735 * C5744 + C5788 * C5745 * C5741 * C5829) /
        std::pow(C5680, 2);
    const double C988 =
        (ae * C5737 * C5735 * C5777 + C5788 * C5745 * C5741 * C5837) /
        std::pow(C5680, 2);
    const double C1018 = (2 * ae * C5737 * C5735 * C5791 +
                          C5788 * (C5739 + C5844 * C5741 * C5745) * C5743) /
                         std::pow(C5680, 2);
    const double C5764 = C5736 * C5761;
    const double C5997 = C5774 * C5761;
    const double C1782 =
        (2 * ae * C5788 * C5774 * C5761 +
         C5736 * C5788 * C5774 *
             (C5754 * C5755 + C5740 * bs[5] * std::pow(C5742, 5)) * C5743) /
        std::pow(C5680, 2);
    const double C5873 = C5736 * C5785;
    const double C5981 = C5774 * C5785;
    const double C5881 = C5736 * C5799;
    const double C6004 = C5774 * C5799;
    const double C6028 = C5788 * C5799;
    const double C801 =
        (C5745 * C5741 * C5778 + C5784 * C5844) / std::pow(C5680, 2);
    const double C4459 =
        (2 * C5788 * C5784 +
         C5788 * (C5784 + std::pow(C5742, 5) * bs[5] * C5778 * C5844)) /
        std::pow(C5680, 2);
    const double C865 =
        (C5745 * C5741 * C5804 + C5807 * C5844) / std::pow(C5680, 2);
    const double C4530 =
        (2 * C5788 * C5807 +
         C5788 * (C5807 + std::pow(C5742, 5) * bs[5] * C5804 * C5844)) /
        std::pow(C5680, 2);
    const double C534 =
        (C5745 * C5741 * C5792 + C5798 * C5811) / std::pow(C5680, 2);
    const double C2434 =
        (2 * C5774 * C5798 +
         C5774 * (C5798 + std::pow(C5742, 5) * bs[5] * C5792 * C5811)) /
        std::pow(C5680, 2);
    const double C294 =
        (2 * C5736 * C5824 +
         C5736 * (C5824 + std::pow(C5742, 5) * bs[5] * C5821 * C5740)) /
        std::pow(C5680, 2);
    const double C658 =
        (C5745 * C5741 * C5829 + C5832 * C5811) / std::pow(C5680, 2);
    const double C2580 =
        (2 * C5774 * C5832 +
         C5774 * (C5832 + std::pow(C5742, 5) * bs[5] * C5829 * C5811)) /
        std::pow(C5680, 2);
    const double C364 =
        (2 * C5736 * C5840 +
         C5736 * (C5840 + std::pow(C5742, 5) * bs[5] * C5837 * C5740)) /
        std::pow(C5680, 2);
    const double C6138 = std::exp(C6137);
    const double C6150 = std::exp(C6149);
    const double C6164 = std::exp(C6163);
    const double C2480 = C6228 * C457;
    const double C4533 = C6228 * C758;
    const double C5682 = C5681 * C6228;
    const double C65 = (C6228 * C5679 * ae) / C5680;
    const double C66 = C6214 * C6228;
    const double C133 = C6230 * C124;
    const double C4462 = C6230 * C796;
    const double C5714 = C5713 * C6230;
    const double C122 = -(2 * C5678 * (yA - yB) * C6230) / C5680;
    const double C246 =
        -((C6230 - (C5697 * 2 * C5678 * C5697 * C6230) / C5680) * 2 * C5678) /
        C5680;
    const double C2144 =
        ((C6230 - (C5697 * 2 * C5678 * C5697 * C6230) / C5680) * ae) / C5680 -
        (0 * be) / (2 * std::pow(C5680, 2));
    const double C2145 =
        (0 * ae) / C5680 - (C5678 * C5697 * C6230) / std::pow(C5680, 2);
    const double C2108 = (C6230 * C5697 * ae) / C5680;
    const double C2109 = C6214 * C6230;
    const double C180 = C6229 * C171;
    const double C2437 = C6229 * C529;
    const double C5726 = C5725 * C6229;
    const double C169 = -(2 * C5678 * (zA - zB) * C6229) / C5680;
    const double C401 =
        -((C6229 - (C5700 * 2 * C5678 * C5700 * C6229) / C5680) * 2 * C5678) /
        C5680;
    const double C3987 =
        ((C6229 - (C5700 * 2 * C5678 * C5700 * C6229) / C5680) * ae) / C5680 -
        (0 * be) / (2 * std::pow(C5680, 2));
    const double C3988 =
        (0 * ae) / C5680 - (C5678 * C5700 * C6229) / std::pow(C5680, 2);
    const double C3932 = (C6229 * C5700 * ae) / C5680;
    const double C3933 = C6214 * C6229;
    const double C5749 = C5736 * C5748;
    const double C500 = (C5745 * C5741 * C5778 + ae * C5774 * C5748 +
                         C5774 * (ae * C5748 + C5774 * C5784)) /
                        std::pow(C5680, 2);
    const double C564 = (C5745 * C5741 * C5804 + ae * C5774 * C5748 +
                         C5774 * (ae * C5748 + C5774 * C5807)) /
                        std::pow(C5680, 2);
    const double C835 = (C5745 * C5741 * C5792 + ae * C5788 * C5748 +
                         C5788 * (ae * C5748 + C5788 * C5798)) /
                        std::pow(C5680, 2);
    const double C959 = (C5745 * C5741 * C5829 + ae * C5788 * C5748 +
                         C5788 * (ae * C5748 + C5788 * C5832)) /
                        std::pow(C5680, 2);
    const double C1821 =
        (C5788 * (ae * C5748 + C5774 * C5784)) / std::pow(C5680, 2);
    const double C1859 =
        (ae * C5774 * C5748 + C5788 * C5774 * C5798) / std::pow(C5680, 2);
    const double C1895 =
        (ae * C5788 * C5748 + C5774 * C5788 * C5807) / std::pow(C5680, 2);
    const double C2005 =
        (ae * C5774 * C5748 + C5788 * C5774 * C5832) / std::pow(C5680, 2);
    const double C2406 =
        (2 * (ae * C5748 + C5774 * C5784) + ae * (C5748 + C5761 * C5811) +
         C5774 * (C5784 + ae * C5774 * C5761 +
                  C5774 * (ae * C5761 +
                           C5774 * std::pow(C5742, 5) * bs[5] * C5778))) /
        std::pow(C5680, 2);
    const double C2477 =
        (2 * (ae * C5748 + C5774 * C5807) + ae * (C5748 + C5761 * C5811) +
         C5774 * (C5807 + ae * C5774 * C5761 +
                  C5774 * (ae * C5761 +
                           C5774 * std::pow(C5742, 5) * bs[5] * C5804))) /
        std::pow(C5680, 2);
    const double C2716 =
        (ae * C5748 + C5774 * C5784 +
         (ae * C5761 + C5774 * std::pow(C5742, 5) * bs[5] * C5778) * C5844) /
        std::pow(C5680, 2);
    const double C2771 =
        (ae * (C5748 + C5761 * C5844) +
         C5774 * (C5807 + std::pow(C5742, 5) * bs[5] * C5804 * C5844)) /
        std::pow(C5680, 2);
    const double C3665 =
        (ae * (C5748 + C5761 * C5811) +
         C5788 * (C5798 + std::pow(C5742, 5) * bs[5] * C5792 * C5811)) /
        std::pow(C5680, 2);
    const double C3824 =
        (ae * (C5748 + C5761 * C5811) +
         C5788 * (C5832 + std::pow(C5742, 5) * bs[5] * C5829 * C5811)) /
        std::pow(C5680, 2);
    const double C4503 =
        (2 * (ae * C5748 + C5788 * C5798) + ae * (C5748 + C5761 * C5844) +
         C5788 * (C5798 + ae * C5788 * C5761 +
                  C5788 * (ae * C5761 +
                           C5788 * std::pow(C5742, 5) * bs[5] * C5792))) /
        std::pow(C5680, 2);
    const double C4640 =
        (2 * (ae * C5748 + C5788 * C5832) + ae * (C5748 + C5761 * C5844) +
         C5788 * (C5832 + ae * C5788 * C5761 +
                  C5788 * (ae * C5761 +
                           C5788 * std::pow(C5742, 5) * bs[5] * C5829))) /
        std::pow(C5680, 2);
    const double C458 = (C5737 * C5735 * C5744 + C5748 * C5811) / C5680;
    const double C759 = (C5737 * C5735 * C5744 + C5748 * C5844) / C5680;
    const double C1779 = (C5788 * C5774 * C5748) / C5680;
    const double C2363 =
        (2 * C5774 * C5748 + C5774 * (C5748 + C5761 * C5811)) / C5680;
    const double C3585 = (C5788 * (C5748 + C5761 * C5811)) / C5680;
    const double C4419 =
        (2 * C5788 * C5748 + C5788 * (C5748 + C5761 * C5844)) / C5680;
    const double C5759 = C5736 * C5753;
    const double C5758 = C5753 * ae;
    const double C5763 = C5753 + C5760;
    const double C5815 = C5753 + C5814;
    const double C5848 = C5753 + C5847;
    const double C5982 = C5774 * C5753;
    const double C6029 = C5788 * C5753;
    const double C249 = ((C5739 + C5811 * C5741 * C5745) * C5743 +
                         (C5753 + C5811 * C5754 * C5755) * C5743 * C5740) /
                        std::pow(C5680, 2);
    const double C404 = ((C5739 + C5844 * C5741 * C5745) * C5743 +
                         (C5753 + C5844 * C5754 * C5755) * C5743 * C5740) /
                        std::pow(C5680, 2);
    const double C81 = 2 * C5736 * C5739 + C5736 * (C5739 + C5753 * C5740);
    const double C1063 = C5774 * (C5739 + C5753 * C5740);
    const double C1421 = C5788 * (C5739 + C5753 * C5740);
    const double C2362 = 2 * C5774 * C5739 + C5774 * (C5739 + C5753 * C5811);
    const double C3584 = C5788 * (C5739 + C5753 * C5811);
    const double C4418 = 2 * C5788 * C5739 + C5788 * (C5739 + C5753 * C5844);
    const double C5869 = C5774 * C5780;
    const double C129 = (C5745 * C5741 * C5778 + ae * C5736 * C5780 +
                         C5736 * (ae * C5780 + C5736 * C5755 * C5754 * C5778)) /
                        std::pow(C5680, 2);
    const double C130 =
        (2 * (ae * C5780 + C5736 * C5784) + ae * (C5780 + C5785 * C5740) +
         C5736 * (C5784 + ae * C5736 * C5785 +
                  C5736 * (ae * C5785 +
                           C5736 * std::pow(C5742, 5) * bs[5] * C5778))) /
        std::pow(C5680, 2);
    const double C218 = (C5745 * C5741 * C5804 + ae * C5736 * C5780 +
                         C5736 * (ae * C5780 + C5736 * C5755 * C5754 * C5804)) /
                        std::pow(C5680, 2);
    const double C219 =
        (2 * (ae * C5780 + C5736 * C5807) + ae * (C5780 + C5785 * C5740) +
         C5736 * (C5807 + ae * C5736 * C5785 +
                  C5736 * (ae * C5785 +
                           C5736 * std::pow(C5742, 5) * bs[5] * C5804))) /
        std::pow(C5680, 2);
    const double C799 =
        (C5788 * (ae * C5780 + C5736 * C5784)) / std::pow(C5680, 2);
    const double C802 =
        (ae * C5780 + C5736 * C5784 +
         (ae * C5785 + C5736 * std::pow(C5742, 5) * bs[5] * C5778) * C5844) /
        std::pow(C5680, 2);
    const double C863 =
        (C5788 * (ae * C5780 + C5736 * C5807)) / std::pow(C5680, 2);
    const double C866 =
        (ae * C5780 + C5736 * C5807 +
         (ae * C5785 + C5736 * std::pow(C5742, 5) * bs[5] * C5804) * C5844) /
        std::pow(C5680, 2);
    const double C927 =
        (ae * C5736 * C5780 + C5788 * C5736 * C5824) / std::pow(C5680, 2);
    const double C929 = (C5745 * C5741 * C5821 + ae * C5788 * C5780 +
                         C5788 * (ae * C5780 + C5788 * C5824)) /
                        std::pow(C5680, 2);
    const double C987 =
        (ae * C5736 * C5780 + C5788 * C5736 * C5840) / std::pow(C5680, 2);
    const double C989 = (C5745 * C5741 * C5837 + ae * C5788 * C5780 +
                         C5788 * (ae * C5780 + C5788 * C5840)) /
                        std::pow(C5680, 2);
    const double C1620 =
        (ae * (C5780 + C5785 * C5740) +
         C5788 * (C5824 + std::pow(C5742, 5) * bs[5] * C5821 * C5740)) /
        std::pow(C5680, 2);
    const double C1695 =
        (ae * (C5780 + C5785 * C5740) +
         C5788 * (C5840 + std::pow(C5742, 5) * bs[5] * C5837 * C5740)) /
        std::pow(C5680, 2);
    const double C4613 =
        (2 * (ae * C5780 + C5788 * C5824) + ae * (C5780 + C5785 * C5844) +
         C5788 * (C5824 + ae * C5788 * C5785 +
                  C5788 * (ae * C5785 +
                           C5788 * std::pow(C5742, 5) * bs[5] * C5821))) /
        std::pow(C5680, 2);
    const double C4673 =
        (2 * (ae * C5780 + C5788 * C5840) + ae * (C5780 + C5785 * C5844) +
         C5788 * (C5840 + ae * C5788 * C5785 +
                  C5788 * (ae * C5785 +
                           C5788 * std::pow(C5742, 5) * bs[5] * C5837))) /
        std::pow(C5680, 2);
    const double C125 = (C5737 * C5735 * C5777 + C5780 * C5740) / C5680;
    const double C126 =
        (2 * C5736 * C5780 + C5736 * (C5780 + C5785 * C5740)) / C5680;
    const double C494 = (C5774 * C5736 * C5780 + C5736 * C5739 * ae) / C5680;
    const double C795 = (C5788 * C5736 * C5780) / C5680;
    const double C797 = (C5737 * C5735 * C5777 + C5780 * C5844) / C5680;
    const double C1102 =
        (C5774 * (C5780 + C5785 * C5740) + (C5739 + C5753 * C5740) * ae) /
        C5680;
    const double C1460 = (C5788 * (C5780 + C5785 * C5740)) / C5680;
    const double C4458 =
        (2 * C5788 * C5780 + C5788 * (C5780 + C5785 * C5844)) / C5680;
    const double C5929 = C5788 * C5794;
    const double C176 = (C5745 * C5741 * C5792 + ae * C5736 * C5794 +
                         C5736 * (ae * C5794 + C5736 * C5755 * C5754 * C5792)) /
                        std::pow(C5680, 2);
    const double C177 =
        (2 * (ae * C5794 + C5736 * C5798) + ae * (C5794 + C5799 * C5740) +
         C5736 * (C5798 + ae * C5736 * C5799 +
                  C5736 * (ae * C5799 +
                           C5736 * std::pow(C5742, 5) * bs[5] * C5792))) /
        std::pow(C5680, 2);
    const double C333 = (C5745 * C5741 * C5829 + ae * C5736 * C5794 +
                         C5736 * (ae * C5794 + C5736 * C5755 * C5754 * C5829)) /
                        std::pow(C5680, 2);
    const double C334 =
        (2 * (ae * C5794 + C5736 * C5832) + ae * (C5794 + C5799 * C5740) +
         C5736 * (C5832 + ae * C5736 * C5799 +
                  C5736 * (ae * C5799 +
                           C5736 * std::pow(C5742, 5) * bs[5] * C5829))) /
        std::pow(C5680, 2);
    const double C532 =
        (C5774 * (ae * C5794 + C5736 * C5798)) / std::pow(C5680, 2);
    const double C535 =
        (ae * C5794 + C5736 * C5798 +
         (ae * C5799 + C5736 * std::pow(C5742, 5) * bs[5] * C5792) * C5811) /
        std::pow(C5680, 2);
    const double C626 =
        (ae * C5736 * C5794 + C5774 * C5736 * C5824) / std::pow(C5680, 2);
    const double C628 = (C5745 * C5741 * C5821 + ae * C5774 * C5794 +
                         C5774 * (ae * C5794 + C5774 * C5824)) /
                        std::pow(C5680, 2);
    const double C656 =
        (C5774 * (ae * C5794 + C5736 * C5832)) / std::pow(C5680, 2);
    const double C659 =
        (ae * C5794 + C5736 * C5832 +
         (ae * C5799 + C5736 * std::pow(C5742, 5) * bs[5] * C5829) * C5811) /
        std::pow(C5680, 2);
    const double C686 =
        (ae * C5736 * C5794 + C5774 * C5736 * C5840) / std::pow(C5680, 2);
    const double C688 = (C5745 * C5741 * C5837 + ae * C5774 * C5794 +
                         C5774 * (ae * C5794 + C5774 * C5840)) /
                        std::pow(C5680, 2);
    const double C1262 =
        (ae * (C5794 + C5799 * C5740) +
         C5774 * (C5824 + std::pow(C5742, 5) * bs[5] * C5821 * C5740)) /
        std::pow(C5680, 2);
    const double C1337 =
        (ae * (C5794 + C5799 * C5740) +
         C5774 * (C5840 + std::pow(C5742, 5) * bs[5] * C5837 * C5740)) /
        std::pow(C5680, 2);
    const double C2547 =
        (2 * (ae * C5794 + C5774 * C5824) + ae * (C5794 + C5799 * C5811) +
         C5774 * (C5824 + ae * C5774 * C5799 +
                  C5774 * (ae * C5799 +
                           C5774 * std::pow(C5742, 5) * bs[5] * C5821))) /
        std::pow(C5680, 2);
    const double C2617 =
        (2 * (ae * C5794 + C5774 * C5840) + ae * (C5794 + C5799 * C5811) +
         C5774 * (C5840 + ae * C5774 * C5799 +
                  C5774 * (ae * C5799 +
                           C5774 * std::pow(C5742, 5) * bs[5] * C5837))) /
        std::pow(C5680, 2);
    const double C172 = (C5737 * C5735 * C5791 + C5794 * C5740) / C5680;
    const double C173 =
        (2 * C5736 * C5794 + C5736 * (C5794 + C5799 * C5740)) / C5680;
    const double C528 = (C5774 * C5736 * C5794) / C5680;
    const double C530 = (C5737 * C5735 * C5791 + C5794 * C5811) / C5680;
    const double C829 = (C5788 * C5736 * C5794 + C5736 * C5739 * ae) / C5680;
    const double C1144 = (C5774 * (C5794 + C5799 * C5740)) / C5680;
    const double C1502 =
        (C5788 * (C5794 + C5799 * C5740) + (C5739 + C5753 * C5740) * ae) /
        C5680;
    const double C1857 = (C5788 * C5774 * C5794 + C5774 * C5739 * ae) / C5680;
    const double C2433 =
        (2 * C5774 * C5794 + C5774 * (C5794 + C5799 * C5811)) / C5680;
    const double C3664 =
        (C5788 * (C5794 + C5799 * C5811) + (C5739 + C5753 * C5811) * ae) /
        C5680;
    const double C135 = C6230 * C128;
    const double C182 = C6229 * C175;
    const double C255 = C6230 * C248;
    const double C298 = C6229 * C292;
    const double C300 = C6229 * C293;
    const double C368 = C6230 * C362;
    const double C370 = C6230 * C363;
    const double C410 = C6229 * C403;
    const double C2367 = C6228 * C461;
    const double C2439 = C6229 * C533;
    const double C2482 = C6228 * C563;
    const double C2550 = C6229 * C627;
    const double C2584 = C6228 * C657;
    const double C2647 = C6229 * C717;
    const double C4423 = C6228 * C762;
    const double C4464 = C6230 * C800;
    const double C4535 = C6228 * C864;
    const double C4576 = C6230 * C894;
    const double C4643 = C6228 * C958;
    const double C4676 = C6230 * C988;
    const double C2744 =
        (C5774 * C5798 + ae * C5788 * C5997 +
         C5788 * (ae * C5997 +
                  C5788 * C5774 * std::pow(C5742, 5) * bs[5] * C5792)) /
        std::pow(C5680, 2);
    const double C2856 =
        (C5774 * C5832 + ae * C5788 * C5997 +
         C5788 * (ae * C5997 +
                  C5788 * C5774 * std::pow(C5742, 5) * bs[5] * C5829)) /
        std::pow(C5680, 2);
    const double C3629 =
        (C5788 *
         (C5784 + ae * C5997 +
          C5774 * (ae * C5761 + C5774 * std::pow(C5742, 5) * bs[5] * C5778))) /
        std::pow(C5680, 2);
    const double C3708 =
        (C5788 * C5807 + ae * C5788 * C5997 +
         C5774 * (ae * C5788 * C5761 +
                  C5774 * C5788 * std::pow(C5742, 5) * bs[5] * C5804)) /
        std::pow(C5680, 2);
    const double C2683 = (C5774 * C5748 + C5997 * C5844) / C5680;
    const double C5874 = C5774 * C5873;
    const double C930 =
        (C5736 * C5824 + ae * C5788 * C5873 +
         C5788 * (ae * C5873 +
                  C5788 * C5736 * std::pow(C5742, 5) * bs[5] * C5821)) /
        std::pow(C5680, 2);
    const double C990 =
        (C5736 * C5840 + ae * C5788 * C5873 +
         C5788 * (ae * C5873 +
                  C5788 * C5736 * std::pow(C5742, 5) * bs[5] * C5837)) /
        std::pow(C5680, 2);
    const double C1461 =
        (C5788 *
         (C5784 + ae * C5873 +
          C5736 * (ae * C5785 + C5736 * std::pow(C5742, 5) * bs[5] * C5778))) /
        std::pow(C5680, 2);
    const double C1544 =
        (C5788 *
         (C5807 + ae * C5873 +
          C5736 * (ae * C5785 + C5736 * std::pow(C5742, 5) * bs[5] * C5804))) /
        std::pow(C5680, 2);
    const double C1932 =
        (2 * ae * C5788 * C5873 +
         C5774 * C5788 * C5736 *
             (C5754 * C5755 + C5811 * bs[5] * std::pow(C5742, 5)) * C5743) /
        std::pow(C5680, 2);
    const double C798 = (C5736 * C5780 + C5873 * C5844) / C5680;
    const double C5933 = C5788 * C5881;
    const double C629 =
        (C5736 * C5824 + ae * C5774 * C5881 +
         C5774 * (ae * C5881 +
                  C5774 * C5736 * std::pow(C5742, 5) * bs[5] * C5821)) /
        std::pow(C5680, 2);
    const double C689 =
        (C5736 * C5840 + ae * C5774 * C5881 +
         C5774 * (ae * C5881 +
                  C5774 * C5736 * std::pow(C5742, 5) * bs[5] * C5837)) /
        std::pow(C5680, 2);
    const double C1145 =
        (C5774 *
         (C5798 + ae * C5881 +
          C5736 * (ae * C5799 + C5736 * std::pow(C5742, 5) * bs[5] * C5792))) /
        std::pow(C5680, 2);
    const double C1302 =
        (C5774 *
         (C5832 + ae * C5881 +
          C5736 * (ae * C5799 + C5736 * std::pow(C5742, 5) * bs[5] * C5829))) /
        std::pow(C5680, 2);
    const double C2078 =
        (2 * ae * C5774 * C5881 +
         C5788 * C5774 * C5736 *
             (C5754 * C5755 + C5844 * bs[5] * std::pow(C5742, 5)) * C5743) /
        std::pow(C5680, 2);
    const double C531 = (C5736 * C5794 + C5881 * C5811) / C5680;
    const double C6005 = C5788 * C6004;
    const double C4466 = C6230 * C801;
    const double C4537 = C6228 * C865;
    const double C2441 = C6229 * C534;
    const double C2586 = C6228 * C658;
    const double C6218 = C6138 * C6208;
    const double C71 = (C6138 * std::pow(C6208, 2)) / C6209 + C6138 / C6210;
    const double C73 = C6219 * C6138;
    const double C1062 = C6217 * C6138;
    const double C6220 = C6150 * C6211;
    const double C448 = (C6150 * std::pow(C6211, 2)) / C6209 + C6150 / C6210;
    const double C450 = C6219 * C6150;
    const double C1060 = C6217 * C6150;
    const double C6221 = C6164 * C6212;
    const double C750 = (C6164 * std::pow(C6212, 2)) / C6209 + C6164 / C6210;
    const double C752 = C6219 * C6164;
    const double C1420 = C6217 * C6164;
    const double C74 =
        (((-4 * C5682) / C5680 -
          (C5679 * (C6228 - (C5679 * 2 * C5682) / C5680) * 2 * C5678) / C5680) *
         ae) /
        C5680;
    const double C75 = ((C6228 - (C5679 * 2 * C5682) / C5680) * ae) / C5680 -
                       (0 * be) / (2 * std::pow(C5680, 2));
    const double C76 =
        (-((C6228 - (C5679 * 2 * C5682) / C5680) * 2 * C5678) / C5680) /
        (2 * C5680);
    const double C77 = (0 * ae) / C5680 - C5682 / std::pow(C5680, 2);
    const double C2110 =
        -((C6228 - (C5679 * 2 * C5682) / C5680) * 2 * C5678) / C5680;
    const double C2111 = -(2 * C5682) / C5680;
    const double C2224 =
        (((-4 * C5714) / C5680 -
          (C5697 * (C6230 - (C5697 * 2 * C5714) / C5680) * 2 * C5678) / C5680) *
         ae) /
        C5680;
    const double C2225 =
        (-((C6230 - (C5697 * 2 * C5714) / C5680) * 2 * C5678) / C5680) /
        (2 * C5680);
    const double C138 = C122 * C80;
    const double C134 = C122 * C83;
    const double C132 = C122 * C79;
    const double C254 = C122 * C124;
    const double C252 = C122 * C123;
    const double C367 = C122 * C171;
    const double C598 = C122 * C495;
    const double C899 = C122 * C796;
    const double C1107 = C122 * C452;
    const double C1465 = C122 * C753;
    const double C4467 = C122 * C755;
    const double C4463 = C122 * C758;
    const double C4461 = C122 * C754;
    const double C4675 = C122 * C830;
    const double C5416 = C122 * C1777;
    const double C256 = C246 * C80;
    const double C253 = C246 * C79;
    const double C1223 = C246 * C452;
    const double C1581 = C246 * C753;
    const double C4577 = C246 * C755;
    const double C4575 = C246 * C754;
    const double C5528 = C246 * C1777;
    const double C2230 = C2144 * C124;
    const double C2227 = C2144 * C123;
    const double C2519 = C2144 * C495;
    const double C2801 = C2144 * C796;
    const double C2228 = C2145 * C495;
    const double C4145 =
        (((-4 * C5726) / C5680 -
          (C5700 * (C6229 - (C5700 * 2 * C5726) / C5680) * 2 * C5678) / C5680) *
         ae) /
        C5680;
    const double C4146 =
        (-((C6229 - (C5700 * 2 * C5726) / C5680) * 2 * C5678) / C5680) /
        (2 * C5680);
    const double C185 = C169 * C80;
    const double C181 = C169 * C83;
    const double C179 = C169 * C79;
    const double C297 = C169 * C124;
    const double C409 = C169 * C171;
    const double C407 = C169 * C170;
    const double C722 = C169 * C529;
    const double C1023 = C169 * C830;
    const double C1149 = C169 * C452;
    const double C1507 = C169 * C753;
    const double C2442 = C169 * C454;
    const double C2438 = C169 * C457;
    const double C2436 = C169 * C453;
    const double C2549 = C169 * C495;
    const double C3669 = C169 * C1777;
    const double C411 = C401 * C80;
    const double C408 = C401 * C79;
    const double C1379 = C401 * C452;
    const double C1737 = C401 * C753;
    const double C2648 = C401 * C454;
    const double C2646 = C401 * C453;
    const double C3901 = C401 * C1777;
    const double C4151 = C3987 * C171;
    const double C4148 = C3987 * C170;
    const double C4390 = C3987 * C529;
    const double C4709 = C3987 * C830;
    const double C4149 = C3988 * C830;
    const double C5750 = C5749 + C5747;
    const double C2484 = C6228 * C564;
    const double C4645 = C6228 * C959;
    const double C5419 = C6230 * C1821;
    const double C3668 = C6229 * C1859;
    const double C3711 = C6228 * C1895;
    const double C3827 = C6228 * C2005;
    const double C2440 = C169 * C458;
    const double C2486 = C6228 * C458;
    const double C4465 = C122 * C759;
    const double C4539 = C6228 * C759;
    const double C3667 = C169 * C1779;
    const double C3713 = C6228 * C1779;
    const double C5418 = C122 * C1779;
    const double C5762 = C5759 * ae;
    const double C1858 = (C5788 * C5774 * C5881 + C5774 * C5759 * ae) / C5680;
    const double C455 = C5736 * C5739 + C5759 * C5811;
    const double C756 = C5736 * C5739 + C5759 * C5844;
    const double C1778 = C5788 * C5774 * C5759;
    const double C5766 = C5764 + C5758;
    const double C5983 = C5981 + C5758;
    const double C6030 = C6028 + C5758;
    const double C2829 =
        (ae * (C5794 + C5788 * (C5788 * C5799 + C5758) + C5788 * C5753 * ae) +
         C5774 * (C5824 + ae * C5788 * C5785 +
                  C5788 * (ae * C5785 +
                           C5788 * std::pow(C5742, 5) * bs[5] * C5821))) /
        std::pow(C5680, 2);
    const double C5765 = C5763 * C5743;
    const double C5816 = C5815 * C5743;
    const double C5849 = C5848 * C5743;
    const double C5984 = C5982 * ae;
    const double C2682 = C5774 * C5739 + C5982 * C5844;
    const double C6031 = C6029 * ae;
    const double C258 = C6230 * C249;
    const double C413 = C6229 * C404;
    const double C5870 = C5869 + C5747;
    const double C137 = C6230 * C129;
    const double C1464 = C6230 * C799;
    const double C5167 = C6228 * C863;
    const double C1623 = C6229 * C927;
    const double C1698 = C6230 * C987;
    const double C4678 = C6230 * C989;
    const double C139 = C6230 * C125;
    const double C257 = C122 * C125;
    const double C299 = C169 * C125;
    const double C2231 = C2144 * C125;
    const double C259 = C122 * C126;
    const double C597 = C122 * C494;
    const double C1108 = C6230 * C494;
    const double C1264 = C169 * C494;
    const double C2229 = C2145 * C494;
    const double C3098 = C2144 * C494;
    const double C898 = C122 * C795;
    const double C1466 = C6230 * C795;
    const double C1622 = C169 * C795;
    const double C3413 = C2144 * C795;
    const double C900 = C122 * C797;
    const double C2802 = C2144 * C797;
    const double C4468 = C6230 * C797;
    const double C1225 = C122 * C1102;
    const double C2232 = C2145 * C1102;
    const double C1583 = C122 * C1460;
    const double C4579 = C122 * C4458;
    const double C5930 = C5929 + C5747;
    const double C184 = C6229 * C176;
    const double C1148 = C6229 * C532;
    const double C1265 = C6229 * C626;
    const double C2552 = C6229 * C628;
    const double C3170 = C6228 * C656;
    const double C1340 = C6230 * C686;
    const double C186 = C6229 * C172;
    const double C369 = C122 * C172;
    const double C412 = C169 * C172;
    const double C4152 = C3987 * C172;
    const double C414 = C169 * C173;
    const double C721 = C169 * C528;
    const double C1150 = C6229 * C528;
    const double C1339 = C122 * C528;
    const double C5018 = C3987 * C528;
    const double C723 = C169 * C530;
    const double C2443 = C6229 * C530;
    const double C4391 = C3987 * C530;
    const double C1022 = C169 * C829;
    const double C1508 = C6229 * C829;
    const double C1697 = C122 * C829;
    const double C4150 = C3988 * C829;
    const double C5346 = C3987 * C829;
    const double C1381 = C169 * C1144;
    const double C1739 = C169 * C1502;
    const double C4153 = C3988 * C1502;
    const double C2080 = C169 * C1857;
    const double C3670 = C6229 * C1857;
    const double C4389 = C3988 * C1857;
    const double C5637 = C122 * C1857;
    const double C5674 = C3987 * C1857;
    const double C2650 = C169 * C2433;
    const double C3903 = C169 * C3664;
    const double C4392 = C3988 * C3664;
    const double C901 = C122 * C798;
    const double C724 = C169 * C531;
    const double C72 = (2 * C6217 * C6218) / C6133;
    const double C1061 = C6218 / C6133;
    const double C449 = (2 * C6217 * C6220) / C6133;
    const double C1059 = C6220 / C6133;
    const double C751 = (2 * C6217 * C6221) / C6133;
    const double C1419 = C6221 / C6133;
    const double C94 = C75 * C83;
    const double C91 = C75 * C82;
    const double C467 = C75 * C458;
    const double C466 = C75 * C457;
    const double C768 = C75 * C759;
    const double C767 = C75 * C758;
    const double C1784 = C75 * C1779;
    const double C92 = C77 * C83;
    const double C2368 = C2110 * C454;
    const double C2366 = C2110 * C453;
    const double C2947 = C2110 * C452;
    const double C3588 = C2110 * C1777;
    const double C4424 = C2110 * C755;
    const double C4422 = C2110 * C754;
    const double C5054 = C2110 * C753;
    const double C2116 = C2111 * C83;
    const double C2114 = C2111 * C457;
    const double C2113 = C2111 * C82;
    const double C2371 = C2111 * C2363;
    const double C2369 = C2111 * C458;
    const double C2485 = C2111 * C454;
    const double C2481 = C2111 * C495;
    const double C2479 = C2111 * C453;
    const double C2585 = C2111 * C530;
    const double C2583 = C2111 * C529;
    const double C2689 = C2111 * C2683;
    const double C2688 = C2111 * C759;
    const double C2687 = C2111 * C758;
    const double C2686 = C2111 * C1779;
    const double C3060 = C2111 * C494;
    const double C3058 = C2111 * C452;
    const double C3169 = C2111 * C528;
    const double C3590 = C2111 * C3585;
    const double C3712 = C2111 * C1777;
    const double C3826 = C2111 * C1857;
    const double C4426 = C2111 * C4419;
    const double C4538 = C2111 * C755;
    const double C4536 = C2111 * C797;
    const double C4534 = C2111 * C796;
    const double C4532 = C2111 * C754;
    const double C4642 = C2111 * C830;
    const double C5166 = C2111 * C795;
    const double C5164 = C2111 * C753;
    const double C5275 = C2111 * C829;
    const double C141 = C134 + C135;
    const double C140 = C132 + C133;
    const double C372 = C367 + C368;
    const double C4470 = C4463 + C4464;
    const double C4469 = C4461 + C4462;
    const double C4679 = C4675 + C4676;
    const double C260 = C253 + C254;
    const double C4580 = C4575 + C899;
    const double C188 = C181 + C182;
    const double C187 = C179 + C180;
    const double C302 = C297 + C298;
    const double C2445 = C2438 + C2439;
    const double C2444 = C2436 + C2437;
    const double C2553 = C2549 + C2550;
    const double C415 = C408 + C409;
    const double C2651 = C2646 + C722;
    const double C5751 = ae * C5750;
    const double C84 =
        (C5737 * C5735 * C5744 + C5736 * C5750 + C5736 * C5739 * ae) / C5680;
    const double C456 = (C5774 * C5750) / C5680;
    const double C757 = (C5788 * C5750) / C5680;
    const double C2446 = C2440 + C2441;
    const double C4471 = C4465 + C4466;
    const double C3671 = C3667 + C3668;
    const double C5421 = C5418 + C5419;
    const double C5875 = C5874 + C5762;
    const double C5934 = C5933 + C5762;
    const double C2081 = C169 * C1858;
    const double C5019 = C3988 * C1858;
    const double C5768 = ae * C5766;
    const double C5767 = C5736 * C5766;
    const double C5937 = C5774 * C5766;
    const double C5948 = C5788 * C5766;
    const double C459 = (C5750 + C5766 * C5811) / C5680;
    const double C760 = (C5750 + C5766 * C5844) / C5680;
    const double C5986 = ae * C5983;
    const double C5985 = C5774 * C5983;
    const double C6013 = C5788 * C5983;
    const double C6033 = ae * C6030;
    const double C6032 = C5788 * C6030;
    const double C460 =
        (2 * ae * C5774 * C5748 + C5736 * C5774 * C5765) / std::pow(C5680, 2);
    const double C462 =
        ((C5739 + C5740 * C5741 * C5745) * C5743 + C5765 * C5811) /
        std::pow(C5680, 2);
    const double C463 =
        (2 * ae * (C5748 + C5761 * C5811) +
         C5736 * (C5765 + (C5754 * C5755 + C5740 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5811)) /
        std::pow(C5680, 2);
    const double C761 =
        (2 * ae * C5788 * C5748 + C5736 * C5788 * C5765) / std::pow(C5680, 2);
    const double C763 =
        ((C5739 + C5740 * C5741 * C5745) * C5743 + C5765 * C5844) /
        std::pow(C5680, 2);
    const double C764 =
        (2 * ae * (C5748 + C5761 * C5844) +
         C5736 * (C5765 + (C5754 * C5755 + C5740 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5844)) /
        std::pow(C5680, 2);
    const double C1781 = (C5788 * C5774 * C5765) / std::pow(C5680, 2);
    const double C2364 =
        (2 * C5774 * C5765 +
         C5774 * (C5765 + (C5754 * C5755 + C5740 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5811)) /
        std::pow(C5680, 2);
    const double C2684 =
        (C5774 * C5765 +
         C5774 * (C5754 * C5755 + C5740 * bs[5] * std::pow(C5742, 5)) * C5743 *
             C5844) /
        std::pow(C5680, 2);
    const double C3586 =
        (C5788 * (C5765 + (C5754 * C5755 + C5740 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5811)) /
        std::pow(C5680, 2);
    const double C4420 =
        (2 * C5788 * C5765 +
         C5788 * (C5765 + (C5754 * C5755 + C5740 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5844)) /
        std::pow(C5680, 2);
    const double C250 =
        (2 * C5736 * C5816 +
         C5736 * (C5816 + (C5754 * C5755 + C5811 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5740)) /
        std::pow(C5680, 2);
    const double C592 =
        (2 * ae * C5736 * C5780 + C5774 * C5736 * C5816) / std::pow(C5680, 2);
    const double C893 = (C5788 * C5736 * C5816) / std::pow(C5680, 2);
    const double C895 =
        ((C5739 + C5811 * C5741 * C5745) * C5743 + C5816 * C5844) /
        std::pow(C5680, 2);
    const double C896 =
        (C5736 * C5816 +
         C5736 * (C5754 * C5755 + C5811 * bs[5] * std::pow(C5742, 5)) * C5743 *
             C5844) /
        std::pow(C5680, 2);
    const double C1221 =
        (2 * ae * (C5780 + C5785 * C5740) +
         C5774 * (C5816 + (C5754 * C5755 + C5811 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5740)) /
        std::pow(C5680, 2);
    const double C1579 =
        (C5788 * (C5816 + (C5754 * C5755 + C5811 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5740)) /
        std::pow(C5680, 2);
    const double C1931 =
        (2 * ae * C5788 * C5780 + C5774 * C5788 * C5816) / std::pow(C5680, 2);
    const double C2798 =
        (2 * ae * (C5780 + C5785 * C5844) +
         C5774 * (C5816 + (C5754 * C5755 + C5811 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5844)) /
        std::pow(C5680, 2);
    const double C4573 =
        (2 * C5788 * C5816 +
         C5788 * (C5816 + (C5754 * C5755 + C5811 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5844)) /
        std::pow(C5680, 2);
    const double C405 =
        (2 * C5736 * C5849 +
         C5736 * (C5849 + (C5754 * C5755 + C5844 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5740)) /
        std::pow(C5680, 2);
    const double C716 = (C5774 * C5736 * C5849) / std::pow(C5680, 2);
    const double C718 =
        ((C5739 + C5844 * C5741 * C5745) * C5743 + C5849 * C5811) /
        std::pow(C5680, 2);
    const double C719 =
        (C5736 * C5849 +
         C5736 * (C5754 * C5755 + C5844 * bs[5] * std::pow(C5742, 5)) * C5743 *
             C5811) /
        std::pow(C5680, 2);
    const double C1017 =
        (2 * ae * C5736 * C5794 + C5788 * C5736 * C5849) / std::pow(C5680, 2);
    const double C1377 =
        (C5774 * (C5849 + (C5754 * C5755 + C5844 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5740)) /
        std::pow(C5680, 2);
    const double C1735 =
        (2 * ae * (C5794 + C5799 * C5740) +
         C5788 * (C5849 + (C5754 * C5755 + C5844 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5740)) /
        std::pow(C5680, 2);
    const double C2077 =
        (2 * ae * C5774 * C5794 + C5788 * C5774 * C5849) / std::pow(C5680, 2);
    const double C2644 =
        (2 * C5774 * C5849 +
         C5774 * (C5849 + (C5754 * C5755 + C5844 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5811)) /
        std::pow(C5680, 2);
    const double C3899 =
        (2 * ae * (C5794 + C5799 * C5811) +
         C5788 * (C5849 + (C5754 * C5755 + C5844 * bs[5] * std::pow(C5742, 5)) *
                              C5743 * C5811)) /
        std::pow(C5680, 2);
    const double C6006 = C6005 + C5984;
    const double C5871 = ae * C5870;
    const double C496 =
        (C5737 * C5735 * C5777 + C5774 * C5870 + C5774 * C5739 * ae) / C5680;
    const double C1819 = (C5788 * C5870) / C5680;
    const double C2715 = (C5870 + C5983 * C5844) / C5680;
    const double C143 = C138 + C139;
    const double C261 = C256 + C257;
    const double C303 = C299 + C300;
    const double C1226 = C1223 + C597;
    const double C1110 = C1107 + C1108;
    const double C1584 = C1581 + C898;
    const double C1468 = C1465 + C1466;
    const double C1625 = C1622 + C1623;
    const double C4581 = C4577 + C900;
    const double C4472 = C4467 + C4468;
    const double C5931 = ae * C5930;
    const double C831 =
        (C5737 * C5735 * C5791 + C5788 * C5930 + C5788 * C5739 * ae) / C5680;
    const double C1267 = C1264 + C1265;
    const double C190 = C185 + C186;
    const double C373 = C369 + C370;
    const double C416 = C411 + C412;
    const double C1382 = C1379 + C721;
    const double C1152 = C1149 + C1150;
    const double C1342 = C1339 + C1340;
    const double C2652 = C2648 + C723;
    const double C2447 = C2442 + C2443;
    const double C1740 = C1737 + C1022;
    const double C1510 = C1507 + C1508;
    const double C1700 = C1697 + C1698;
    const double C3904 = C3901 + C2080;
    const double C3672 = C3669 + C3670;
    const double C2372 = C2366 + C2114;
    const double C2373 = C2368 + C2369;
    const double C2490 = C2485 + C2486;
    const double C2488 = C2481 + C2482;
    const double C2487 = C2479 + C2480;
    const double C2589 = C2585 + C2586;
    const double C2588 = C2583 + C2584;
    const double C4428 = C4424 + C2688;
    const double C4427 = C4422 + C2687;
    const double C3591 = C3588 + C2686;
    const double C3171 = C3169 + C3170;
    const double C3715 = C3712 + C3713;
    const double C3829 = C3826 + C3827;
    const double C4543 = C4538 + C4539;
    const double C4542 = C4536 + C4537;
    const double C4541 = C4534 + C4535;
    const double C4540 = C4532 + C4533;
    const double C4646 = C4642 + C4643;
    const double C5169 = C5166 + C5167;
    const double C366 = C140 * C169;
    const double C374 = C372 * C6229;
    const double C4474 = C4470 * C6228;
    const double C4473 = C4469 * C2111;
    const double C262 = C260 + C254;
    const double C4582 = C4580 + C899;
    const double C296 = C187 * C122;
    const double C304 = C302 * C6230;
    const double C2449 = C2445 * C6228;
    const double C2448 = C2444 * C2111;
    const double C417 = C415 + C409;
    const double C2653 = C2651 + C722;
    const double C88 =
        ((C5739 + C5740 * C5741 * C5745) * C5743 + C5751 + C5751 +
         C5736 * (2 * ae * C5748 +
                  C5736 * (C5741 * C5745 + C5740 * bs[4] * std::pow(C5734, 4)) *
                      C5743)) /
        std::pow(C5680, 2);
    const double C498 =
        (C5751 + C5774 * (ae * C5780 + C5736 * C5784)) / std::pow(C5680, 2);
    const double C562 =
        (C5751 + C5774 * (ae * C5780 + C5736 * C5807)) / std::pow(C5680, 2);
    const double C833 =
        (C5751 + C5788 * (ae * C5794 + C5736 * C5798)) / std::pow(C5680, 2);
    const double C957 =
        (C5751 + C5788 * (ae * C5794 + C5736 * C5832)) / std::pow(C5680, 2);
    const double C95 = C75 * C84;
    const double C93 = C77 * C84;
    const double C136 = C122 * C84;
    const double C183 = C169 * C84;
    const double C2117 = C2111 * C84;
    const double C465 = C77 * C456;
    const double C1067 = C75 * C456;
    const double C1105 = C122 * C456;
    const double C1147 = C169 * C456;
    const double C2115 = C2111 * C456;
    const double C3059 = C6228 * C456;
    const double C766 = C77 * C757;
    const double C1425 = C75 * C757;
    const double C1463 = C122 * C757;
    const double C1505 = C169 * C757;
    const double C3275 = C2111 * C757;
    const double C5165 = C6228 * C757;
    const double C2450 = C2446 * C6228;
    const double C4475 = C4471 * C6228;
    const double C3673 = C3671 * C6228;
    const double C5423 = C5421 * C6228;
    const double C5876 = ae * C5875;
    const double C497 =
        (C5736 * C5780 + C5774 * C5875 + C5774 * C5759 * ae) / C5680;
    const double C1820 = (C5788 * C5875) / C5680;
    const double C5935 = ae * C5934;
    const double C832 =
        (C5736 * C5794 + C5788 * C5934 + C5788 * C5759 * ae) / C5680;
    const double C501 =
        (ae * C5780 + C5736 * C5784 + ae * C5774 * C5766 +
         C5774 * (C5768 + C5774 * (ae * C5785 + C5736 * std::pow(C5742, 5) *
                                                    bs[5] * C5778))) /
        std::pow(C5680, 2);
    const double C565 =
        (ae * C5780 + C5736 * C5807 + ae * C5774 * C5766 +
         C5774 * (C5768 + C5774 * (ae * C5785 + C5736 * std::pow(C5742, 5) *
                                                    bs[5] * C5804))) /
        std::pow(C5680, 2);
    const double C836 =
        (ae * C5794 + C5736 * C5798 + ae * C5788 * C5766 +
         C5788 * (C5768 + C5788 * (ae * C5799 + C5736 * std::pow(C5742, 5) *
                                                    bs[5] * C5792))) /
        std::pow(C5680, 2);
    const double C960 =
        (ae * C5794 + C5736 * C5832 + ae * C5788 * C5766 +
         C5788 * (C5768 + C5788 * (ae * C5799 + C5736 * std::pow(C5742, 5) *
                                                    bs[5] * C5829))) /
        std::pow(C5680, 2);
    const double C1822 =
        (C5788 * (C5768 + C5774 * (ae * C5785 + C5736 * std::pow(C5742, 5) *
                                                    bs[5] * C5778))) /
        std::pow(C5680, 2);
    const double C5769 = C5748 + C5767;
    const double C5938 = ae * C5937;
    const double C1780 = (C5788 * C5937) / C5680;
    const double C5949 = ae * C5948;
    const double C468 = C77 * C459;
    const double C2949 = C2111 * C459;
    const double C769 = C77 * C760;
    const double C5056 = C2111 * C760;
    const double C2883 =
        (ae * C5794 + C5774 * C5840 + ae * C5788 * C5983 +
         C5788 * (C5986 + C5788 * (ae * C5799 + C5774 * std::pow(C5742, 5) *
                                                    bs[5] * C5837))) /
        std::pow(C5680, 2);
    const double C5987 = C5780 + C5985;
    const double C6014 = ae * C6013;
    const double C6034 = C5794 + C6032;
    const double C2948 = C6228 * C460;
    const double C2370 = C6228 * C462;
    const double C5055 = C6228 * C761;
    const double C4425 = C6228 * C763;
    const double C3589 = C6228 * C1781;
    const double C1224 = C6230 * C592;
    const double C1582 = C6230 * C893;
    const double C4578 = C6230 * C895;
    const double C5529 = C6230 * C1931;
    const double C1380 = C6229 * C716;
    const double C2649 = C6229 * C718;
    const double C1738 = C6229 * C1017;
    const double C3902 = C6229 * C2077;
    const double C6007 = ae * C6006;
    const double C2743 =
        (C5774 * C5794 + C5788 * C6006 + C5788 * C5982 * ae) / C5680;
    const double C594 = ((C5739 + C5811 * C5741 * C5745) * C5743 + C5871 +
                         C5871 + C5774 * (2 * ae * C5780 + C5774 * C5816)) /
                        std::pow(C5680, 2);
    const double C2041 =
        (C5871 + C5788 * (ae * C5794 + C5774 * C5840)) / std::pow(C5680, 2);
    const double C599 = C122 * C496;
    const double C2483 = C2111 * C496;
    const double C2520 = C2144 * C496;
    const double C2518 = C2145 * C496;
    const double C2551 = C169 * C496;
    const double C1934 = C122 * C1819;
    const double C2800 = C2145 * C1819;
    const double C3710 = C2111 * C1819;
    const double C3751 = C2144 * C1819;
    const double C3788 = C169 * C1819;
    const double C5417 = C6230 * C1819;
    const double C2803 = C2145 * C2715;
    const double C5530 = C122 * C2715;
    const double C371 = C143 * C169;
    const double C263 = C261 + C257;
    const double C305 = C303 * C6230;
    const double C1227 = C1226 + C597;
    const double C1341 = C1110 * C169;
    const double C1585 = C1584 + C898;
    const double C1699 = C1468 * C169;
    const double C5094 = C1468 * C2111;
    const double C1626 = C1625 * C6230;
    const double C4583 = C4581 + C900;
    const double C4476 = C4472 * C2111;
    const double C1019 = ((C5739 + C5844 * C5741 * C5745) * C5743 + C5931 +
                          C5931 + C5788 * (2 * ae * C5794 + C5788 * C5849)) /
                         std::pow(C5680, 2);
    const double C1969 =
        (C5931 + C5774 * (ae * C5780 + C5788 * C5824)) / std::pow(C5680, 2);
    const double C1024 = C169 * C831;
    const double C4644 = C2111 * C831;
    const double C4677 = C122 * C831;
    const double C4710 = C3987 * C831;
    const double C4708 = C3988 * C831;
    const double C1268 = C1267 * C6230;
    const double C301 = C190 * C122;
    const double C375 = C373 * C6229;
    const double C418 = C416 + C412;
    const double C1383 = C1382 + C721;
    const double C1266 = C1152 * C122;
    const double C3022 = C1152 * C2111;
    const double C1343 = C1342 * C6229;
    const double C2654 = C2652 + C723;
    const double C2451 = C2447 * C2111;
    const double C1741 = C1740 + C1022;
    const double C1624 = C1510 * C122;
    const double C1701 = C1700 * C6229;
    const double C3905 = C3904 + C2080;
    const double C3674 = C3672 * C2111;
    const double C2374 = C2372 + C2114;
    const double C2375 = C2373 + C2369;
    const double C2587 = C2490 * C169;
    const double C2582 = C2487 * C169;
    const double C2591 = C2589 * C6229;
    const double C2590 = C2588 * C6229;
    const double C4430 = C4428 + C2688;
    const double C4429 = C4427 + C2687;
    const double C3592 = C3591 + C2686;
    const double C3172 = C3171 * C6229;
    const double C3828 = C3715 * C169;
    const double C5492 = C3715 * C122;
    const double C3830 = C3829 * C6229;
    const double C4547 = C4543 * C122;
    const double C4546 = C4542 * C6230;
    const double C4545 = C4541 * C6230;
    const double C4544 = C4540 * C122;
    const double C5171 = C5169 * C6230;
    const double C264 = C262 + C255;
    const double C4584 = C4582 + C4576;
    const double C419 = C417 + C410;
    const double C2655 = C2653 + C2647;
    const double C1106 = C6230 * C498;
    const double C3061 = C6228 * C562;
    const double C1506 = C6229 * C833;
    const double C5276 = C6228 * C957;
    const double C142 = C136 + C137;
    const double C189 = C183 + C184;
    const double C1151 = C1147 + C1148;
    const double C2950 = C2947 + C2115;
    const double C3062 = C3058 + C3059;
    const double C1467 = C1463 + C1464;
    const double C5057 = C5054 + C3275;
    const double C5168 = C5164 + C5165;
    const double C595 =
        (C5736 * C5816 + C5876 + C5876 +
         C5774 * (2 * ae * C5873 +
                  C5774 * C5736 *
                      (C5754 * C5755 + C5811 * bs[5] * std::pow(C5742, 5)) *
                      C5743)) /
        std::pow(C5680, 2);
    const double C2042 =
        (C5876 + C5788 * (ae * C5881 +
                          C5774 * C5736 * std::pow(C5742, 5) * bs[5] * C5837)) /
        std::pow(C5680, 2);
    const double C600 = C122 * C497;
    const double C3099 = C2145 * C497;
    const double C1935 = C122 * C1820;
    const double C3414 = C2145 * C1820;
    const double C1020 =
        (C5736 * C5849 + C5935 + C5935 +
         C5788 * (2 * ae * C5881 +
                  C5788 * C5736 *
                      (C5754 * C5755 + C5844 * bs[5] * std::pow(C5742, 5)) *
                      C5743)) /
        std::pow(C5680, 2);
    const double C1970 =
        (C5935 + C5774 * (ae * C5873 +
                          C5788 * C5736 * std::pow(C5742, 5) * bs[5] * C5821)) /
        std::pow(C5680, 2);
    const double C1025 = C169 * C832;
    const double C5347 = C3988 * C832;
    const double C5770 = C5769 + C5762;
    const double C1065 =
        (C5774 * C5765 + C5938 + C5938 +
         C5736 * (2 * ae * C5774 * C5761 +
                  C5736 * C5774 *
                      (C5754 * C5755 + C5740 * bs[5] * std::pow(C5742, 5)) *
                      C5743)) /
        std::pow(C5680, 2);
    const double C1860 = (C5938 + C5788 * C5774 *
                                      (ae * C5799 + C5736 * std::pow(C5742, 5) *
                                                        bs[5] * C5792)) /
                         std::pow(C5680, 2);
    const double C2006 = (C5938 + C5788 * C5774 *
                                      (ae * C5799 + C5736 * std::pow(C5742, 5) *
                                                        bs[5] * C5829)) /
                         std::pow(C5680, 2);
    const double C1785 = C77 * C1780;
    const double C3276 = C2111 * C1780;
    const double C1423 =
        (C5788 * C5765 + C5949 + C5949 +
         C5736 * (2 * ae * C5788 * C5761 +
                  C5736 * C5788 *
                      (C5754 * C5755 + C5740 * bs[5] * std::pow(C5742, 5)) *
                      C5743)) /
        std::pow(C5680, 2);
    const double C1896 = (C5949 + C5774 * C5788 *
                                      (ae * C5785 + C5736 * std::pow(C5742, 5) *
                                                        bs[5] * C5804)) /
                         std::pow(C5680, 2);
    const double C5988 = C5987 + C5984;
    const double C3749 =
        (C5788 * C5816 + C6014 + C6014 +
         C5774 * (2 * ae * C5788 * C5785 +
                  C5774 * C5788 *
                      (C5754 * C5755 + C5811 * bs[5] * std::pow(C5742, 5)) *
                      C5743)) /
        std::pow(C5680, 2);
    const double C6035 = C6034 + C6031;
    const double C2910 =
        (C5774 * C5849 + C6007 + C6007 +
         C5788 * (2 * ae * C6004 +
                  C5788 * C5774 *
                      (C5754 * C5755 + C5844 * bs[5] * std::pow(C5742, 5)) *
                      C5743)) /
        std::pow(C5680, 2);
    const double C3786 =
        (ae * C5780 + C5788 * C5824 + C6007 +
         C5774 * (ae * (C5788 * C5799 + C5758) +
                  C5774 * (ae * C5785 +
                           C5788 * std::pow(C5742, 5) * bs[5] * C5821))) /
        std::pow(C5680, 2);
    const double C2912 = C169 * C2743;
    const double C5675 = C3988 * C2743;
    const double C5638 = C6230 * C2041;
    const double C2489 = C2483 + C2484;
    const double C2554 = C2551 + C2552;
    const double C5531 = C5528 + C1934;
    const double C3714 = C3710 + C3711;
    const double C5420 = C5416 + C5417;
    const double C265 = C263 + C258;
    const double C1228 = C1227 + C1224;
    const double C1586 = C1585 + C1582;
    const double C4585 = C4583 + C4578;
    const double C3789 = C6229 * C1969;
    const double C4647 = C4644 + C4645;
    const double C4680 = C4677 + C4678;
    const double C420 = C418 + C413;
    const double C1384 = C1383 + C1380;
    const double C2656 = C2654 + C2649;
    const double C1742 = C1741 + C1738;
    const double C3906 = C3905 + C3902;
    const double C2376 = C2374 + C2367;
    const double C2377 = C2375 + C2370;
    const double C4432 = C4430 + C4425;
    const double C4431 = C4429 + C4423;
    const double C3593 = C3592 + C3589;
    const double C4586 = C4584 * C6228;
    const double C421 = C419 * C6230;
    const double C1109 = C1105 + C1106;
    const double C3063 = C3060 + C3061;
    const double C1509 = C1505 + C1506;
    const double C5277 = C5275 + C5276;
    const double C3023 = C1151 * C6228;
    const double C2951 = C2950 + C2115;
    const double C3168 = C3062 * C169;
    const double C5095 = C1467 * C6228;
    const double C5058 = C5057 + C3275;
    const double C5170 = C5168 * C122;
    const double C5771 = ae * C5770;
    const double C85 =
        (2 * C5750 + C5736 * C5770 + (C5739 + C5753 * C5740) * ae) / C5680;
    const double C1064 = (C5774 * C5770) / C5680;
    const double C1422 = (C5788 * C5770) / C5680;
    const double C5989 = ae * C5988;
    const double C2405 =
        (2 * C5870 + C5774 * C5988 + (C5739 + C5753 * C5811) * ae) / C5680;
    const double C3628 = (C5788 * C5988) / C5680;
    const double C6036 = ae * C6035;
    const double C4502 =
        (2 * C5930 + C5788 * C6035 + (C5739 + C5753 * C5844) * ae) / C5680;
    const double C5639 = C5637 + C5638;
    const double C5532 = C5531 + C1934;
    const double C5493 = C3714 * C6230;
    const double C5422 = C5420 * C2111;
    const double C5206 = C1586 * C6228;
    const double C4587 = C4585 * C6228;
    const double C3790 = C3788 + C3789;
    const double C422 = C420 * C6230;
    const double C1385 = C1384 * C6230;
    const double C1743 = C1742 * C6230;
    const double C2378 = C2376 * C6229;
    const double C2379 = C2377 * C6229;
    const double C3594 = C3593 * C6229;
    const double C2952 = C2951 + C2948;
    const double C5059 = C5058 + C5055;
    const double C89 =
        (2 * (2 * ae * C5748 + C5736 * C5765) + C5771 + C5771 +
         C5736 * (C5765 + C5768 + C5768 +
                  C5736 * (2 * ae * C5761 +
                           C5736 *
                               (C5754 * C5755 +
                                C5740 * bs[5] * std::pow(C5742, 5)) *
                               C5743))) /
        std::pow(C5680, 2);
    const double C1103 =
        (C5771 + C5774 * (C5784 + ae * C5873 +
                          C5736 * (ae * C5785 + C5736 * std::pow(C5742, 5) *
                                                    bs[5] * C5778))) /
        std::pow(C5680, 2);
    const double C1186 =
        (C5771 + C5774 * (C5807 + ae * C5873 +
                          C5736 * (ae * C5785 + C5736 * std::pow(C5742, 5) *
                                                    bs[5] * C5804))) /
        std::pow(C5680, 2);
    const double C1503 =
        (C5771 + C5788 * (C5798 + ae * C5881 +
                          C5736 * (ae * C5799 + C5736 * std::pow(C5742, 5) *
                                                    bs[5] * C5792))) /
        std::pow(C5680, 2);
    const double C1660 =
        (C5771 + C5788 * (C5832 + ae * C5881 +
                          C5736 * (ae * C5799 + C5736 * std::pow(C5742, 5) *
                                                    bs[5] * C5829))) /
        std::pow(C5680, 2);
    const double C96 = C77 * C85;
    const double C1068 = C77 * C1064;
    const double C2118 = C2111 * C1064;
    const double C1426 = C77 * C1422;
    const double C3935 = C2111 * C1422;
    const double C2516 =
        (2 * (2 * ae * C5780 + C5774 * C5816) + C5989 + C5989 +
         C5774 * (C5816 + C5986 + C5986 +
                  C5774 * (2 * ae * C5785 +
                           C5774 *
                               (C5754 * C5755 +
                                C5811 * bs[5] * std::pow(C5742, 5)) *
                               C5743))) /
        std::pow(C5680, 2);
    const double C3864 =
        (C5989 + C5788 * (C5840 + ae * C6004 +
                          C5774 * (ae * C5799 + C5774 * std::pow(C5742, 5) *
                                                    bs[5] * C5837))) /
        std::pow(C5680, 2);
    const double C2521 = C2145 * C2405;
    const double C3752 = C2145 * C3628;
    const double C4284 = C122 * C3628;
    const double C4706 =
        (2 * (2 * ae * C5794 + C5788 * C5849) + C6036 + C6036 +
         C5788 * (C5849 + C6033 + C6033 +
                  C5788 * (2 * ae * C5799 +
                           C5788 *
                               (C5754 * C5755 +
                                C5844 * bs[5] * std::pow(C5742, 5)) *
                               C5743))) /
        std::pow(C5680, 2);
    const double C4711 = C3988 * C4502;
    const double C5533 = C5532 + C5529;
    const double C2953 = C2952 * C6229;
    const double C5534 = C5533 * C6228;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                     C66 * C87) *
                        C6229 * C6230 * C6164 * C1059 -
                    (C76 * C452 + C465 + C465 + C66 * C460 + C74 * C453 + C466 +
                     C466 + C65 * C461) *
                        C6229 * C6230 * C6164 * C1060) *
                       C1061 +
                   ((C74 * C452 + C1067 + C1067 + C65 * C460 + C76 * C1063 +
                     C1068 + C1068 + C66 * C1065) *
                        C6229 * C6230 * C6164 * C1060 -
                    (C76 * C80 + C93 + C93 + C66 * C88 + C74 * C79 + C94 + C94 +
                     C65 * C87) *
                        C6229 * C6230 * C6164 * C1059) *
                       C1062)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C6230 * C123) * C75 +
            (C122 * C82 + C6230 * C127) * C65 + C140 * C77 + C141 * C66) *
               C6229 * C6164 * C1059 -
           (C1109 * C66 + C1110 * C77 + (C122 * C457 + C6230 * C499) * C65 +
            (C122 * C453 + C6230 * C495) * C75) *
               C6229 * C6164 * C1060) *
              C1061 +
          ((C1110 * C75 + C1109 * C65 + (C122 * C1063 + C6230 * C1102) * C77 +
            (C122 * C1064 + C6230 * C1103) * C66) *
               C6229 * C6164 * C1060 -
           (C142 * C66 + C143 * C77 + C141 * C65 + C140 * C75) * C6229 * C6164 *
               C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C75 +
            (C169 * C82 + C6229 * C174) * C65 + C187 * C77 + C188 * C66) *
               C6230 * C6164 * C1059 -
           (C1151 * C66 + C1152 * C77 + (C169 * C457 + C6229 * C533) * C65 +
            (C169 * C453 + C6229 * C529) * C75) *
               C6230 * C6164 * C1060) *
              C1061 +
          ((C1152 * C75 + C1151 * C65 + (C169 * C1063 + C6229 * C1144) * C77 +
            (C169 * C1064 + C6229 * C1145) * C66) *
               C6230 * C6164 * C1060 -
           (C189 * C66 + C190 * C77 + C188 * C65 + C187 * C75) * C6230 * C6164 *
               C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
            (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C6230) *
               C6229 * C6164 * C1059 -
           ((C77 * C494 + C66 * C562 + C75 * C495 + C65 * C563) * C6230 +
            (C77 * C452 + C66 * C456 + C75 * C453 + C65 * C457) * C122) *
               C6229 * C6164 * C1060) *
              C1061 +
          (((C75 * C452 + C65 * C456 + C77 * C1063 + C66 * C1064) * C122 +
            (C75 * C494 + C65 * C562 + C77 * C1102 + C66 * C1186) * C6230) *
               C6229 * C6164 * C1060 -
           ((C77 * C125 + C66 * C218 + C75 * C124 + C65 * C217) * C6230 +
            (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C122) *
               C6229 * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C6230 * C247) * C65 + C264 * C66) *
               C6229 * C6164 * C1059 -
           (C1228 * C66 + (C246 * C453 + C598 + C598 + C6230 * C593) * C65) *
               C6229 * C6164 * C1060) *
              C1061 +
          ((C1228 * C65 +
            (C246 * C1063 + C1225 + C1225 + C6230 * C1221) * C66) *
               C6229 * C6164 * C1060 -
           (C265 * C66 + C264 * C65) * C6229 * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C6229 * C170) * C122 +
             (C169 * C123 + C6229 * C291) * C6230) *
                C65 +
            (C296 + C304) * C66) *
               C6164 * C1059 -
           ((C1268 + C1266) * C66 + ((C169 * C495 + C6229 * C627) * C6230 +
                                     (C169 * C453 + C6229 * C529) * C122) *
                                        C65) *
               C6164 * C1060) *
              C1061 +
          (((C1266 + C1268) * C65 + ((C169 * C1063 + C6229 * C1144) * C122 +
                                     (C169 * C1102 + C6229 * C1262) * C6230) *
                                        C66) *
               C6164 * C1060 -
           ((C305 + C301) * C66 + (C304 + C296) * C65) * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
            (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C6229) *
               C6230 * C6164 * C1059 -
           ((C77 * C528 + C66 * C656 + C75 * C529 + C65 * C657) * C6229 +
            (C77 * C452 + C66 * C456 + C75 * C453 + C65 * C457) * C169) *
               C6230 * C6164 * C1060) *
              C1061 +
          (((C75 * C452 + C65 * C456 + C77 * C1063 + C66 * C1064) * C169 +
            (C75 * C528 + C65 * C656 + C77 * C1144 + C66 * C1302) * C6229) *
               C6230 * C6164 * C1060 -
           ((C77 * C172 + C66 * C333 + C75 * C171 + C65 * C332) * C6229 +
            (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C169) *
               C6230 * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C6230 * C123) * C169 +
             (C122 * C170 + C6230 * C361) * C6229) *
                C65 +
            (C366 + C374) * C66) *
               C6164 * C1059 -
           ((C1343 + C1341) * C66 + ((C122 * C529 + C6230 * C687) * C6229 +
                                     (C122 * C453 + C6230 * C495) * C169) *
                                        C65) *
               C6164 * C1060) *
              C1061 +
          (((C1341 + C1343) * C65 + ((C122 * C1063 + C6230 * C1102) * C169 +
                                     (C122 * C1144 + C6230 * C1337) * C6229) *
                                        C66) *
               C6164 * C1060 -
           ((C375 + C371) * C66 + (C374 + C366) * C65) * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C6229 * C402) * C6230 * C65 +
            C421 * C66) *
               C6164 * C1059 -
           (C1385 * C66 +
            (C401 * C453 + C722 + C722 + C6229 * C717) * C6230 * C65) *
               C6164 * C1060) *
              C1061 +
          ((C1385 * C65 +
            (C401 * C1063 + C1381 + C1381 + C6229 * C1377) * C6230 * C66) *
               C6164 * C1060 -
           (C422 * C66 + C421 * C65) * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                     C66 * C87) *
                        C6229 * C6230 * C1419 -
                    (C76 * C753 + C766 + C766 + C66 * C761 + C74 * C754 + C767 +
                     C767 + C65 * C762) *
                        C6229 * C6230 * C1420) *
                       C1059 +
                   ((C74 * C1777 + C1784 + C1784 + C65 * C1781 + C76 * C1778 +
                     C1785 + C1785 + C66 * C1782) *
                        C6229 * C6230 * C1420 -
                    (C76 * C452 + C465 + C465 + C66 * C460 + C74 * C453 + C466 +
                     C466 + C65 * C461) *
                        C6229 * C6230 * C1419) *
                       C1060) *
                  C6138) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C6230 * C123) * C75 +
            (C122 * C82 + C6230 * C127) * C65 + C140 * C77 + C141 * C66) *
               C6229 * C1419 -
           (C1467 * C66 + C1468 * C77 + (C122 * C758 + C6230 * C800) * C65 +
            (C122 * C754 + C6230 * C796) * C75) *
               C6229 * C1420) *
              C1059 +
          (((C122 * C1777 + C6230 * C1819) * C75 +
            (C122 * C1779 + C6230 * C1821) * C65 +
            (C122 * C1778 + C6230 * C1820) * C77 +
            (C122 * C1780 + C6230 * C1822) * C66) *
               C6229 * C1420 -
           (C1109 * C66 + C1110 * C77 + (C122 * C457 + C6230 * C499) * C65 +
            (C122 * C453 + C6230 * C495) * C75) *
               C6229 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C75 +
            (C169 * C82 + C6229 * C174) * C65 + C187 * C77 + C188 * C66) *
               C6230 * C1419 -
           (C1509 * C66 + C1510 * C77 + (C169 * C758 + C6229 * C834) * C65 +
            (C169 * C754 + C6229 * C830) * C75) *
               C6230 * C1420) *
              C1059 +
          (((C169 * C1777 + C6229 * C1857) * C75 +
            (C169 * C1779 + C6229 * C1859) * C65 +
            (C169 * C1778 + C6229 * C1858) * C77 +
            (C169 * C1780 + C6229 * C1860) * C66) *
               C6230 * C1420 -
           (C1151 * C66 + C1152 * C77 + (C169 * C457 + C6229 * C533) * C65 +
            (C169 * C453 + C6229 * C529) * C75) *
               C6230 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
            (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C6230) *
               C6229 * C1419 -
           ((C77 * C795 + C66 * C863 + C75 * C796 + C65 * C864) * C6230 +
            (C77 * C753 + C66 * C757 + C75 * C754 + C65 * C758) * C122) *
               C6229 * C1420) *
              C1059 +
          (((C75 * C1777 + C65 * C1779 + C77 * C1778 + C66 * C1780) * C122 +
            (C75 * C1819 + C65 * C1895 + C77 * C1820 + C66 * C1896) * C6230) *
               C6229 * C1420 -
           ((C77 * C494 + C66 * C562 + C75 * C495 + C65 * C563) * C6230 +
            (C77 * C452 + C66 * C456 + C75 * C453 + C65 * C457) * C122) *
               C6229 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C6230 * C247) * C65 + C264 * C66) *
               C6229 * C1419 -
           (C1586 * C66 + (C246 * C754 + C899 + C899 + C6230 * C894) * C65) *
               C6229 * C1420) *
              C1059 +
          (((C246 * C1777 + C1934 + C1934 + C6230 * C1931) * C65 +
            (C246 * C1778 + C1935 + C1935 + C6230 * C1932) * C66) *
               C6229 * C1420 -
           (C1228 * C66 + (C246 * C453 + C598 + C598 + C6230 * C593) * C65) *
               C6229 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C6229 * C170) * C122 +
             (C169 * C123 + C6229 * C291) * C6230) *
                C65 +
            (C296 + C304) * C66) *
               C1419 -
           ((C1626 + C1624) * C66 + ((C169 * C796 + C6229 * C928) * C6230 +
                                     (C169 * C754 + C6229 * C830) * C122) *
                                        C65) *
               C1420) *
              C1059 +
          ((((C169 * C1777 + C6229 * C1857) * C122 +
             (C169 * C1819 + C6229 * C1969) * C6230) *
                C65 +
            ((C169 * C1778 + C6229 * C1858) * C122 +
             (C169 * C1820 + C6229 * C1970) * C6230) *
                C66) *
               C1420 -
           ((C1268 + C1266) * C66 + ((C169 * C495 + C6229 * C627) * C6230 +
                                     (C169 * C453 + C6229 * C529) * C122) *
                                        C65) *
               C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
            (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C6229) *
               C6230 * C1419 -
           ((C77 * C829 + C66 * C957 + C75 * C830 + C65 * C958) * C6229 +
            (C77 * C753 + C66 * C757 + C75 * C754 + C65 * C758) * C169) *
               C6230 * C1420) *
              C1059 +
          (((C75 * C1777 + C65 * C1779 + C77 * C1778 + C66 * C1780) * C169 +
            (C75 * C1857 + C65 * C2005 + C77 * C1858 + C66 * C2006) * C6229) *
               C6230 * C1420 -
           ((C77 * C528 + C66 * C656 + C75 * C529 + C65 * C657) * C6229 +
            (C77 * C452 + C66 * C456 + C75 * C453 + C65 * C457) * C169) *
               C6230 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C6230 * C123) * C169 +
             (C122 * C170 + C6230 * C361) * C6229) *
                C65 +
            (C366 + C374) * C66) *
               C1419 -
           ((C1701 + C1699) * C66 + ((C122 * C830 + C6230 * C988) * C6229 +
                                     (C122 * C754 + C6230 * C796) * C169) *
                                        C65) *
               C1420) *
              C1059 +
          ((((C122 * C1777 + C6230 * C1819) * C169 +
             (C122 * C1857 + C6230 * C2041) * C6229) *
                C65 +
            ((C122 * C1778 + C6230 * C1820) * C169 +
             (C122 * C1858 + C6230 * C2042) * C6229) *
                C66) *
               C1420 -
           ((C1343 + C1341) * C66 + ((C122 * C529 + C6230 * C687) * C6229 +
                                     (C122 * C453 + C6230 * C495) * C169) *
                                        C65) *
               C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C6229 * C402) * C6230 * C65 +
            C421 * C66) *
               C1419 -
           (C1743 * C66 +
            (C401 * C754 + C1023 + C1023 + C6229 * C1018) * C6230 * C65) *
               C1420) *
              C1059 +
          (((C401 * C1777 + C2080 + C2080 + C6229 * C2077) * C6230 * C65 +
            (C401 * C1778 + C2081 + C2081 + C6229 * C2078) * C6230 * C66) *
               C1420 -
           (C1385 * C66 +
            (C401 * C453 + C722 + C722 + C6229 * C717) * C6230 * C65) *
               C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::pow(Pi, 2.5) *
         ((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
           C66 * C87) *
              C6229 * C6230 * C6164 * C448 -
          (C76 * C452 + C465 + C465 + C66 * C460 + C74 * C453 + C466 + C466 +
           C65 * C461) *
              C6229 * C6230 * C6164 * C449 +
          (C74 * C454 + C467 + C467 + C65 * C462 + C76 * C455 + C468 + C468 +
           C66 * C463) *
              C6229 * C6230 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 +
                               C92 + C92 + C66 * C87) *
                                  C6229 * C6230 * C6164 * C6150 * C71 -
                              (C76 * C80 + C93 + C93 + C66 * C88 + C74 * C79 +
                               C94 + C94 + C65 * C87) *
                                  C6229 * C6230 * C6164 * C6150 * C72 +
                              (C74 * C80 + C95 + C95 + C65 * C88 + C76 * C81 +
                               C96 + C96 + C66 * C89) *
                                  C6229 * C6230 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
           C66 * C87) *
              C6229 * C6230 * C750 -
          (C76 * C753 + C766 + C766 + C66 * C761 + C74 * C754 + C767 + C767 +
           C65 * C762) *
              C6229 * C6230 * C751 +
          (C74 * C755 + C768 + C768 + C65 * C763 + C76 * C756 + C769 + C769 +
           C66 * C764) *
              C6229 * C6230 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         (((C122 * C78 + C6230 * C123) * C75 +
           (C122 * C82 + C6230 * C127) * C65 + C140 * C77 + C141 * C66) *
              C6229 * C6164 * C448 -
          ((C122 * C456 + C6230 * C498) * C66 +
           (C122 * C452 + C6230 * C494) * C77 +
           (C122 * C457 + C6230 * C499) * C65 +
           (C122 * C453 + C6230 * C495) * C75) *
              C6229 * C6164 * C449 +
          ((C122 * C454 + C6230 * C496) * C75 +
           (C122 * C458 + C6230 * C500) * C65 +
           (C122 * C455 + C6230 * C497) * C77 +
           (C122 * C459 + C6230 * C501) * C66) *
              C6229 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C122 * C78 + C6230 * C123) * C75 +
           (C122 * C82 + C6230 * C127) * C65 + C140 * C77 + C141 * C66) *
              C6229 * C6164 * C6150 * C71 -
          (C142 * C66 + C143 * C77 + C141 * C65 + C140 * C75) * C6229 * C6164 *
              C6150 * C72 +
          (C143 * C75 + C142 * C65 + (C122 * C81 + C6230 * C126) * C77 +
           (C122 * C85 + C6230 * C130) * C66) *
              C6229 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C78 + C6230 * C123) * C75 +
           (C122 * C82 + C6230 * C127) * C65 + C140 * C77 + C141 * C66) *
              C6229 * C750 -
          ((C122 * C757 + C6230 * C799) * C66 +
           (C122 * C753 + C6230 * C795) * C77 +
           (C122 * C758 + C6230 * C800) * C65 +
           (C122 * C754 + C6230 * C796) * C75) *
              C6229 * C751 +
          ((C122 * C755 + C6230 * C797) * C75 +
           (C122 * C759 + C6230 * C801) * C65 +
           (C122 * C756 + C6230 * C798) * C77 +
           (C122 * C760 + C6230 * C802) * C66) *
              C6229 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C169 * C78 + C6229 * C170) * C75 +
           (C169 * C82 + C6229 * C174) * C65 + C187 * C77 + C188 * C66) *
              C6230 * C6164 * C448 -
          ((C169 * C456 + C6229 * C532) * C66 +
           (C169 * C452 + C6229 * C528) * C77 +
           (C169 * C457 + C6229 * C533) * C65 +
           (C169 * C453 + C6229 * C529) * C75) *
              C6230 * C6164 * C449 +
          ((C169 * C454 + C6229 * C530) * C75 +
           (C169 * C458 + C6229 * C534) * C65 +
           (C169 * C455 + C6229 * C531) * C77 +
           (C169 * C459 + C6229 * C535) * C66) *
              C6230 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C169 * C78 + C6229 * C170) * C75 +
           (C169 * C82 + C6229 * C174) * C65 + C187 * C77 + C188 * C66) *
              C6230 * C6164 * C6150 * C71 -
          (C189 * C66 + C190 * C77 + C188 * C65 + C187 * C75) * C6230 * C6164 *
              C6150 * C72 +
          (C190 * C75 + C189 * C65 + (C169 * C81 + C6229 * C173) * C77 +
           (C169 * C85 + C6229 * C177) * C66) *
              C6230 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C169 * C78 + C6229 * C170) * C75 +
           (C169 * C82 + C6229 * C174) * C65 + C187 * C77 + C188 * C66) *
              C6230 * C750 -
          ((C169 * C757 + C6229 * C833) * C66 +
           (C169 * C753 + C6229 * C829) * C77 +
           (C169 * C758 + C6229 * C834) * C65 +
           (C169 * C754 + C6229 * C830) * C75) *
              C6230 * C751 +
          ((C169 * C755 + C6229 * C831) * C75 +
           (C169 * C759 + C6229 * C835) * C65 +
           (C169 * C756 + C6229 * C832) * C77 +
           (C169 * C760 + C6229 * C836) * C66) *
              C6230 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
           (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C6230) *
              C6229 * C6164 * C448 -
          ((C77 * C494 + C66 * C562 + C75 * C495 + C65 * C563) * C6230 +
           (C77 * C452 + C66 * C456 + C75 * C453 + C65 * C457) * C122) *
              C6229 * C6164 * C449 +
          ((C75 * C454 + C65 * C458 + C77 * C455 + C66 * C459) * C122 +
           (C75 * C496 + C65 * C564 + C77 * C497 + C66 * C565) * C6230) *
              C6229 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
           (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C6230) *
              C6229 * C6164 * C6150 * C71 -
          ((C77 * C125 + C66 * C218 + C75 * C124 + C65 * C217) * C6230 +
           (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C122) *
              C6229 * C6164 * C6150 * C72 +
          ((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85) * C122 +
           (C75 * C125 + C65 * C218 + C77 * C126 + C66 * C219) * C6230) *
              C6229 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
           (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C6230) *
              C6229 * C750 -
          ((C77 * C795 + C66 * C863 + C75 * C796 + C65 * C864) * C6230 +
           (C77 * C753 + C66 * C757 + C75 * C754 + C65 * C758) * C122) *
              C6229 * C751 +
          ((C75 * C755 + C65 * C759 + C77 * C756 + C66 * C760) * C122 +
           (C75 * C797 + C65 * C865 + C77 * C798 + C66 * C866) * C6230) *
              C6229 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C6230 * C247) * C65 + C264 * C66) *
              C6229 * C6164 * C448 -
          ((C246 * C452 + C597 + C597 + C6230 * C592) * C66 +
           (C246 * C453 + C598 + C598 + C6230 * C593) * C65) *
              C6229 * C6164 * C449 +
          ((C246 * C454 + C599 + C599 + C6230 * C594) * C65 +
           (C246 * C455 + C600 + C600 + C6230 * C595) * C66) *
              C6229 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C6230 * C247) * C65 + C264 * C66) *
              C6229 * C6164 * C6150 * C71 -
          (C265 * C66 + C264 * C65) * C6229 * C6164 * C6150 * C72 +
          (C265 * C65 + (C246 * C81 + C259 + C259 + C6230 * C250) * C66) *
              C6229 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C6230 * C247) * C65 + C264 * C66) *
              C6229 * C750 -
          ((C246 * C753 + C898 + C898 + C6230 * C893) * C66 +
           (C246 * C754 + C899 + C899 + C6230 * C894) * C65) *
              C6229 * C751 +
          ((C246 * C755 + C900 + C900 + C6230 * C895) * C65 +
           (C246 * C756 + C901 + C901 + C6230 * C896) * C66) *
              C6229 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C122 +
            (C169 * C123 + C6229 * C291) * C6230) *
               C65 +
           (C296 + C304) * C66) *
              C6164 * C448 -
          (((C169 * C494 + C6229 * C626) * C6230 +
            (C169 * C452 + C6229 * C528) * C122) *
               C66 +
           ((C169 * C495 + C6229 * C627) * C6230 +
            (C169 * C453 + C6229 * C529) * C122) *
               C65) *
              C6164 * C449 +
          (((C169 * C454 + C6229 * C530) * C122 +
            (C169 * C496 + C6229 * C628) * C6230) *
               C65 +
           ((C169 * C455 + C6229 * C531) * C122 +
            (C169 * C497 + C6229 * C629) * C6230) *
               C66) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C122 +
            (C169 * C123 + C6229 * C291) * C6230) *
               C65 +
           (C296 + C304) * C66) *
              C6164 * C6150 * C71 -
          ((C305 + C301) * C66 + (C304 + C296) * C65) * C6164 * C6150 * C72 +
          ((C301 + C305) * C65 + ((C169 * C81 + C6229 * C173) * C122 +
                                  (C169 * C126 + C6229 * C294) * C6230) *
                                     C66) *
              C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C122 +
            (C169 * C123 + C6229 * C291) * C6230) *
               C65 +
           (C296 + C304) * C66) *
              C750 -
          (((C169 * C795 + C6229 * C927) * C6230 +
            (C169 * C753 + C6229 * C829) * C122) *
               C66 +
           ((C169 * C796 + C6229 * C928) * C6230 +
            (C169 * C754 + C6229 * C830) * C122) *
               C65) *
              C751 +
          (((C169 * C755 + C6229 * C831) * C122 +
            (C169 * C797 + C6229 * C929) * C6230) *
               C65 +
           ((C169 * C756 + C6229 * C832) * C122 +
            (C169 * C798 + C6229 * C930) * C6230) *
               C66) *
              C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
           (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C6229) *
              C6230 * C6164 * C448 -
          ((C77 * C528 + C66 * C656 + C75 * C529 + C65 * C657) * C6229 +
           (C77 * C452 + C66 * C456 + C75 * C453 + C65 * C457) * C169) *
              C6230 * C6164 * C449 +
          ((C75 * C454 + C65 * C458 + C77 * C455 + C66 * C459) * C169 +
           (C75 * C530 + C65 * C658 + C77 * C531 + C66 * C659) * C6229) *
              C6230 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
           (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C6229) *
              C6230 * C6164 * C6150 * C71 -
          ((C77 * C172 + C66 * C333 + C75 * C171 + C65 * C332) * C6229 +
           (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C169) *
              C6230 * C6164 * C6150 * C72 +
          ((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85) * C169 +
           (C75 * C172 + C65 * C333 + C77 * C173 + C66 * C334) * C6229) *
              C6230 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
           (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C6229) *
              C6230 * C750 -
          ((C77 * C829 + C66 * C957 + C75 * C830 + C65 * C958) * C6229 +
           (C77 * C753 + C66 * C757 + C75 * C754 + C65 * C758) * C169) *
              C6230 * C751 +
          ((C75 * C755 + C65 * C759 + C77 * C756 + C66 * C760) * C169 +
           (C75 * C831 + C65 * C959 + C77 * C832 + C66 * C960) * C6229) *
              C6230 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C122 * C78 + C6230 * C123) * C169 +
            (C122 * C170 + C6230 * C361) * C6229) *
               C65 +
           (C366 + C374) * C66) *
              C6164 * C448 -
          (((C122 * C528 + C6230 * C686) * C6229 +
            (C122 * C452 + C6230 * C494) * C169) *
               C66 +
           ((C122 * C529 + C6230 * C687) * C6229 +
            (C122 * C453 + C6230 * C495) * C169) *
               C65) *
              C6164 * C449 +
          (((C122 * C454 + C6230 * C496) * C169 +
            (C122 * C530 + C6230 * C688) * C6229) *
               C65 +
           ((C122 * C455 + C6230 * C497) * C169 +
            (C122 * C531 + C6230 * C689) * C6229) *
               C66) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C122 * C78 + C6230 * C123) * C169 +
            (C122 * C170 + C6230 * C361) * C6229) *
               C65 +
           (C366 + C374) * C66) *
              C6164 * C6150 * C71 -
          ((C375 + C371) * C66 + (C374 + C366) * C65) * C6164 * C6150 * C72 +
          ((C371 + C375) * C65 + ((C122 * C81 + C6230 * C126) * C169 +
                                  (C122 * C173 + C6230 * C364) * C6229) *
                                     C66) *
              C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C6230 * C123) * C169 +
            (C122 * C170 + C6230 * C361) * C6229) *
               C65 +
           (C366 + C374) * C66) *
              C750 -
          (((C122 * C829 + C6230 * C987) * C6229 +
            (C122 * C753 + C6230 * C795) * C169) *
               C66 +
           ((C122 * C830 + C6230 * C988) * C6229 +
            (C122 * C754 + C6230 * C796) * C169) *
               C65) *
              C751 +
          (((C122 * C755 + C6230 * C797) * C169 +
            (C122 * C831 + C6230 * C989) * C6229) *
               C65 +
           ((C122 * C756 + C6230 * C798) * C169 +
            (C122 * C832 + C6230 * C990) * C6229) *
               C66) *
              C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C401 * C78 + C407 + C407 + C6229 * C402) * C6230 * C65 +
           C421 * C66) *
              C6164 * C448 -
          ((C401 * C452 + C721 + C721 + C6229 * C716) * C6230 * C66 +
           (C401 * C453 + C722 + C722 + C6229 * C717) * C6230 * C65) *
              C6164 * C449 +
          ((C401 * C454 + C723 + C723 + C6229 * C718) * C6230 * C65 +
           (C401 * C455 + C724 + C724 + C6229 * C719) * C6230 * C66) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C401 * C78 + C407 + C407 + C6229 * C402) * C6230 * C65 +
           C421 * C66) *
              C6164 * C6150 * C71 -
          (C422 * C66 + C421 * C65) * C6164 * C6150 * C72 +
          (C422 * C65 +
           (C401 * C81 + C414 + C414 + C6229 * C405) * C6230 * C66) *
              C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C401 * C78 + C407 + C407 + C6229 * C402) * C6230 * C65 +
           C421 * C66) *
              C750 -
          ((C401 * C753 + C1022 + C1022 + C6229 * C1017) * C6230 * C66 +
           (C401 * C754 + C1023 + C1023 + C6229 * C1018) * C6230 * C65) *
              C751 +
          ((C401 * C755 + C1024 + C1024 + C6229 * C1019) * C6230 * C65 +
           (C401 * C756 + C1025 + C1025 + C6229 * C1020) * C6230 * C66) *
              C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                     C66 * C87) *
                        C6229 * C6230 * C1419 -
                    (C76 * C753 + C766 + C766 + C66 * C761 + C74 * C754 + C767 +
                     C767 + C65 * C762) *
                        C6229 * C6230 * C1420) *
                       C6150 * C1061 +
                   ((C74 * C753 + C1425 + C1425 + C65 * C761 + C76 * C1421 +
                     C1426 + C1426 + C66 * C1423) *
                        C6229 * C6230 * C1420 -
                    (C76 * C80 + C93 + C93 + C66 * C88 + C74 * C79 + C94 + C94 +
                     C65 * C87) *
                        C6229 * C6230 * C1419) *
                       C6150 * C1062)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C6230 * C123) * C75 +
            (C122 * C82 + C6230 * C127) * C65 + C140 * C77 + C141 * C66) *
               C6229 * C1419 -
           (C1467 * C66 + C1468 * C77 + (C122 * C758 + C6230 * C800) * C65 +
            (C122 * C754 + C6230 * C796) * C75) *
               C6229 * C1420) *
              C6150 * C1061 +
          ((C1468 * C75 + C1467 * C65 + (C122 * C1421 + C6230 * C1460) * C77 +
            (C122 * C1422 + C6230 * C1461) * C66) *
               C6229 * C1420 -
           (C142 * C66 + C143 * C77 + C141 * C65 + C140 * C75) * C6229 *
               C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C75 +
            (C169 * C82 + C6229 * C174) * C65 + C187 * C77 + C188 * C66) *
               C6230 * C1419 -
           (C1509 * C66 + C1510 * C77 + (C169 * C758 + C6229 * C834) * C65 +
            (C169 * C754 + C6229 * C830) * C75) *
               C6230 * C1420) *
              C6150 * C1061 +
          ((C1510 * C75 + C1509 * C65 + (C169 * C1421 + C6229 * C1502) * C77 +
            (C169 * C1422 + C6229 * C1503) * C66) *
               C6230 * C1420 -
           (C189 * C66 + C190 * C77 + C188 * C65 + C187 * C75) * C6230 *
               C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
            (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C6230) *
               C6229 * C1419 -
           ((C77 * C795 + C66 * C863 + C75 * C796 + C65 * C864) * C6230 +
            (C77 * C753 + C66 * C757 + C75 * C754 + C65 * C758) * C122) *
               C6229 * C1420) *
              C6150 * C1061 +
          (((C75 * C753 + C65 * C757 + C77 * C1421 + C66 * C1422) * C122 +
            (C75 * C795 + C65 * C863 + C77 * C1460 + C66 * C1544) * C6230) *
               C6229 * C1420 -
           ((C77 * C125 + C66 * C218 + C75 * C124 + C65 * C217) * C6230 +
            (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C122) *
               C6229 * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C6230 * C247) * C65 + C264 * C66) *
               C6229 * C1419 -
           (C1586 * C66 + (C246 * C754 + C899 + C899 + C6230 * C894) * C65) *
               C6229 * C1420) *
              C6150 * C1061 +
          ((C1586 * C65 +
            (C246 * C1421 + C1583 + C1583 + C6230 * C1579) * C66) *
               C6229 * C1420 -
           (C265 * C66 + C264 * C65) * C6229 * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C6229 * C170) * C122 +
             (C169 * C123 + C6229 * C291) * C6230) *
                C65 +
            (C296 + C304) * C66) *
               C1419 -
           ((C1626 + C1624) * C66 + ((C169 * C796 + C6229 * C928) * C6230 +
                                     (C169 * C754 + C6229 * C830) * C122) *
                                        C65) *
               C1420) *
              C6150 * C1061 +
          (((C1624 + C1626) * C65 + ((C169 * C1421 + C6229 * C1502) * C122 +
                                     (C169 * C1460 + C6229 * C1620) * C6230) *
                                        C66) *
               C1420 -
           ((C305 + C301) * C66 + (C304 + C296) * C65) * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
            (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C6229) *
               C6230 * C1419 -
           ((C77 * C829 + C66 * C957 + C75 * C830 + C65 * C958) * C6229 +
            (C77 * C753 + C66 * C757 + C75 * C754 + C65 * C758) * C169) *
               C6230 * C1420) *
              C6150 * C1061 +
          (((C75 * C753 + C65 * C757 + C77 * C1421 + C66 * C1422) * C169 +
            (C75 * C829 + C65 * C957 + C77 * C1502 + C66 * C1660) * C6229) *
               C6230 * C1420 -
           ((C77 * C172 + C66 * C333 + C75 * C171 + C65 * C332) * C6229 +
            (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C169) *
               C6230 * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C6230 * C123) * C169 +
             (C122 * C170 + C6230 * C361) * C6229) *
                C65 +
            (C366 + C374) * C66) *
               C1419 -
           ((C1701 + C1699) * C66 + ((C122 * C830 + C6230 * C988) * C6229 +
                                     (C122 * C754 + C6230 * C796) * C169) *
                                        C65) *
               C1420) *
              C6150 * C1061 +
          (((C1699 + C1701) * C65 + ((C122 * C1421 + C6230 * C1460) * C169 +
                                     (C122 * C1502 + C6230 * C1695) * C6229) *
                                        C66) *
               C1420 -
           ((C375 + C371) * C66 + (C374 + C366) * C65) * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C6229 * C402) * C6230 * C65 +
            C421 * C66) *
               C1419 -
           (C1743 * C66 +
            (C401 * C754 + C1023 + C1023 + C6229 * C1018) * C6230 * C65) *
               C1420) *
              C6150 * C1061 +
          ((C1743 * C65 +
            (C401 * C1421 + C1739 + C1739 + C6229 * C1735) * C6230 * C66) *
               C1420 -
           (C422 * C66 + C421 * C65) * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                    C66 * C87) *
                       C6229 * C6230 * C6164 * C6150 * C71 -
                   (C76 * C80 + C93 + C93 + C66 * C88 + C74 * C79 + C94 + C94 +
                    C65 * C87) *
                       C6229 * C6230 * C6164 * C6150 * C72 +
                   (C74 * C80 + C95 + C95 + C65 * C88 + C76 * C81 + C96 + C96 +
                    C66 * C89) *
                       C6229 * C6230 * C6164 * C6150 * C73)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                    C66 * C87) *
                       C6229 * C6230 * C6164 * C448 -
                   (C76 * C452 + C465 + C465 + C66 * C460 + C74 * C453 + C466 +
                    C466 + C65 * C461) *
                       C6229 * C6230 * C6164 * C449 +
                   (C74 * C454 + C467 + C467 + C65 * C462 + C76 * C455 + C468 +
                    C468 + C66 * C463) *
                       C6229 * C6230 * C6164 * C450) *
                  C6138) /
                     (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C122 * C78 + C6230 * C123) * C75 +
           (C122 * C82 + C6230 * C127) * C65 + C140 * C77 + C141 * C66) *
              C6229 * C6164 * C6150 * C71 -
          (C142 * C66 + C143 * C77 + C141 * C65 + C140 * C75) * C6229 * C6164 *
              C6150 * C72 +
          (C143 * C75 + C142 * C65 + (C122 * C81 + C6230 * C126) * C77 +
           (C122 * C85 + C6230 * C130) * C66) *
              C6229 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C122 * C78 + C6230 * C123) * C75 +
           (C122 * C82 + C6230 * C127) * C65 + C140 * C77 + C141 * C66) *
              C6229 * C6164 * C448 -
          ((C122 * C456 + C6230 * C498) * C66 +
           (C122 * C452 + C6230 * C494) * C77 +
           (C122 * C457 + C6230 * C499) * C65 +
           (C122 * C453 + C6230 * C495) * C75) *
              C6229 * C6164 * C449 +
          ((C122 * C454 + C6230 * C496) * C75 +
           (C122 * C458 + C6230 * C500) * C65 +
           (C122 * C455 + C6230 * C497) * C77 +
           (C122 * C459 + C6230 * C501) * C66) *
              C6229 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C169 * C78 + C6229 * C170) * C75 +
           (C169 * C82 + C6229 * C174) * C65 + C187 * C77 + C188 * C66) *
              C6230 * C6164 * C6150 * C71 -
          (C189 * C66 + C190 * C77 + C188 * C65 + C187 * C75) * C6230 * C6164 *
              C6150 * C72 +
          (C190 * C75 + C189 * C65 + (C169 * C81 + C6229 * C173) * C77 +
           (C169 * C85 + C6229 * C177) * C66) *
              C6230 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C169 * C78 + C6229 * C170) * C75 +
           (C169 * C82 + C6229 * C174) * C65 + C187 * C77 + C188 * C66) *
              C6230 * C6164 * C448 -
          ((C169 * C456 + C6229 * C532) * C66 +
           (C169 * C452 + C6229 * C528) * C77 +
           (C169 * C457 + C6229 * C533) * C65 +
           (C169 * C453 + C6229 * C529) * C75) *
              C6230 * C6164 * C449 +
          ((C169 * C454 + C6229 * C530) * C75 +
           (C169 * C458 + C6229 * C534) * C65 +
           (C169 * C455 + C6229 * C531) * C77 +
           (C169 * C459 + C6229 * C535) * C66) *
              C6230 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
           (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C6230) *
              C6229 * C6164 * C6150 * C71 -
          ((C77 * C125 + C66 * C218 + C75 * C124 + C65 * C217) * C6230 +
           (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C122) *
              C6229 * C6164 * C6150 * C72 +
          ((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85) * C122 +
           (C75 * C125 + C65 * C218 + C77 * C126 + C66 * C219) * C6230) *
              C6229 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
           (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C6230) *
              C6229 * C6164 * C448 -
          ((C77 * C494 + C66 * C562 + C75 * C495 + C65 * C563) * C6230 +
           (C77 * C452 + C66 * C456 + C75 * C453 + C65 * C457) * C122) *
              C6229 * C6164 * C449 +
          ((C75 * C454 + C65 * C458 + C77 * C455 + C66 * C459) * C122 +
           (C75 * C496 + C65 * C564 + C77 * C497 + C66 * C565) * C6230) *
              C6229 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C6230 * C247) * C65 + C264 * C66) *
              C6229 * C6164 * C6150 * C71 -
          (C265 * C66 + C264 * C65) * C6229 * C6164 * C6150 * C72 +
          (C265 * C65 + (C246 * C81 + C259 + C259 + C6230 * C250) * C66) *
              C6229 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C6230 * C247) * C65 + C264 * C66) *
              C6229 * C6164 * C448 -
          ((C246 * C452 + C597 + C597 + C6230 * C592) * C66 +
           (C246 * C453 + C598 + C598 + C6230 * C593) * C65) *
              C6229 * C6164 * C449 +
          ((C246 * C454 + C599 + C599 + C6230 * C594) * C65 +
           (C246 * C455 + C600 + C600 + C6230 * C595) * C66) *
              C6229 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C122 +
            (C169 * C123 + C6229 * C291) * C6230) *
               C65 +
           (C296 + C304) * C66) *
              C6164 * C6150 * C71 -
          ((C305 + C301) * C66 + (C304 + C296) * C65) * C6164 * C6150 * C72 +
          ((C301 + C305) * C65 + ((C169 * C81 + C6229 * C173) * C122 +
                                  (C169 * C126 + C6229 * C294) * C6230) *
                                     C66) *
              C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C122 +
            (C169 * C123 + C6229 * C291) * C6230) *
               C65 +
           (C296 + C304) * C66) *
              C6164 * C448 -
          (((C169 * C494 + C6229 * C626) * C6230 +
            (C169 * C452 + C6229 * C528) * C122) *
               C66 +
           ((C169 * C495 + C6229 * C627) * C6230 +
            (C169 * C453 + C6229 * C529) * C122) *
               C65) *
              C6164 * C449 +
          (((C169 * C454 + C6229 * C530) * C122 +
            (C169 * C496 + C6229 * C628) * C6230) *
               C65 +
           ((C169 * C455 + C6229 * C531) * C122 +
            (C169 * C497 + C6229 * C629) * C6230) *
               C66) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
           (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C6229) *
              C6230 * C6164 * C6150 * C71 -
          ((C77 * C172 + C66 * C333 + C75 * C171 + C65 * C332) * C6229 +
           (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C169) *
              C6230 * C6164 * C6150 * C72 +
          ((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85) * C169 +
           (C75 * C172 + C65 * C333 + C77 * C173 + C66 * C334) * C6229) *
              C6230 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
           (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C6229) *
              C6230 * C6164 * C448 -
          ((C77 * C528 + C66 * C656 + C75 * C529 + C65 * C657) * C6229 +
           (C77 * C452 + C66 * C456 + C75 * C453 + C65 * C457) * C169) *
              C6230 * C6164 * C449 +
          ((C75 * C454 + C65 * C458 + C77 * C455 + C66 * C459) * C169 +
           (C75 * C530 + C65 * C658 + C77 * C531 + C66 * C659) * C6229) *
              C6230 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C6230 * C123) * C169 +
            (C122 * C170 + C6230 * C361) * C6229) *
               C65 +
           (C366 + C374) * C66) *
              C6164 * C6150 * C71 -
          ((C375 + C371) * C66 + (C374 + C366) * C65) * C6164 * C6150 * C72 +
          ((C371 + C375) * C65 + ((C122 * C81 + C6230 * C126) * C169 +
                                  (C122 * C173 + C6230 * C364) * C6229) *
                                     C66) *
              C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C6230 * C123) * C169 +
            (C122 * C170 + C6230 * C361) * C6229) *
               C65 +
           (C366 + C374) * C66) *
              C6164 * C448 -
          (((C122 * C528 + C6230 * C686) * C6229 +
            (C122 * C452 + C6230 * C494) * C169) *
               C66 +
           ((C122 * C529 + C6230 * C687) * C6229 +
            (C122 * C453 + C6230 * C495) * C169) *
               C65) *
              C6164 * C449 +
          (((C122 * C454 + C6230 * C496) * C169 +
            (C122 * C530 + C6230 * C688) * C6229) *
               C65 +
           ((C122 * C455 + C6230 * C497) * C169 +
            (C122 * C531 + C6230 * C689) * C6229) *
               C66) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C401 * C78 + C407 + C407 + C6229 * C402) * C6230 * C65 +
                    C421 * C66) *
                       C6164 * C6150 * C71 -
                   (C422 * C66 + C421 * C65) * C6164 * C6150 * C72 +
                   (C422 * C65 +
                    (C401 * C81 + C414 + C414 + C6229 * C405) * C6230 * C66) *
                       C6164 * C6150 * C73)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C401 * C78 + C407 + C407 + C6229 * C402) * C6230 * C65 +
                    C421 * C66) *
                       C6164 * C448 -
                   ((C401 * C452 + C721 + C721 + C6229 * C716) * C6230 * C66 +
                    (C401 * C453 + C722 + C722 + C6229 * C717) * C6230 * C65) *
                       C6164 * C449 +
                   ((C401 * C454 + C723 + C723 + C6229 * C718) * C6230 * C65 +
                    (C401 * C455 + C724 + C724 + C6229 * C719) * C6230 * C66) *
                       C6164 * C450) *
                  C6138) /
                     (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C6229 * C2108 +
            C2378 * C2109) *
               C6164 * C1059 -
           (C2379 * C2109 + C2378 * C2108) * C6164 * C1060) *
              C1061 +
          ((C2953 * C2108 +
            (C2110 * C455 + C2949 + C2949 + C6228 * C463) * C6229 * C2109) *
               C6164 * C1060 -
           (C2953 * C2109 +
            (C2110 * C79 + C2116 + C2116 + C6228 * C87) * C6229 * C2108) *
               C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C2111 +
            (C2144 * C82 + C2108 * C127 + C2145 * C457 + C2109 * C499) *
                C6228) *
               C6229 * C6164 * C1059 -
           ((C2145 * C458 + C2109 * C500 + C2144 * C457 + C2108 * C499) *
                C6228 +
            (C2145 * C454 + C2109 * C496 + C2144 * C453 + C2108 * C495) *
                C2111) *
               C6229 * C6164 * C1060) *
              C1061 +
          (((C2144 * C452 + C2108 * C494 + C2145 * C455 + C2109 * C497) *
                C2111 +
            (C2144 * C456 + C2108 * C498 + C2145 * C459 + C2109 * C501) *
                C6228) *
               C6229 * C6164 * C1060 -
           ((C2145 * C456 + C2109 * C498 + C2144 * C83 + C2108 * C128) * C6228 +
            (C2145 * C452 + C2109 * C494 + C2144 * C79 + C2108 * C124) *
                C2111) *
               C6229 * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C6229 * C170) * C2111 +
             (C169 * C82 + C6229 * C174) * C6228) *
                C2108 +
            (C2448 + C2449) * C2109) *
               C6164 * C1059 -
           ((C2450 + C2451) * C2109 + (C2449 + C2448) * C2108) * C6164 *
               C1060) *
              C1061 +
          (((C3022 + C3023) * C2108 + ((C169 * C455 + C6229 * C531) * C2111 +
                                       (C169 * C459 + C6229 * C535) * C6228) *
                                          C2109) *
               C6164 * C1060 -
           ((C3023 + C3022) * C2109 + (C188 * C6228 + C187 * C2111) * C2108) *
               C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2111 * C78 + C6228 * C82) * C2144 +
            (C2111 * C123 + C6228 * C216) * C2108 + C2487 * C2145 +
            C2488 * C2109) *
               C6229 * C6164 * C1059 -
           (C2489 * C2109 + C2490 * C2145 + C2488 * C2108 + C2487 * C2144) *
               C6229 * C6164 * C1060) *
              C1061 +
          ((C3062 * C2144 + C3063 * C2108 +
            (C2111 * C455 + C6228 * C459) * C2145 +
            (C2111 * C497 + C6228 * C565) * C2109) *
               C6229 * C6164 * C1060 -
           (C3063 * C2109 + C3062 * C2145 +
            (C2111 * C124 + C6228 * C217) * C2108 +
            (C2111 * C79 + C6228 * C83) * C2144) *
               C6229 * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2224 * C78 + C2227 + C2227 + C2108 * C247 + C2225 * C453 +
                     C2228 + C2228 + C2109 * C593) *
                        C6228 * C6229 * C6164 * C1059 -
                    (C2225 * C454 + C2518 + C2518 + C2109 * C594 +
                     C2224 * C453 + C2519 + C2519 + C2108 * C593) *
                        C6228 * C6229 * C6164 * C1060) *
                       C1061 +
                   ((C2224 * C452 + C3098 + C3098 + C2108 * C592 +
                     C2225 * C455 + C3099 + C3099 + C2109 * C595) *
                        C6228 * C6229 * C6164 * C1060 -
                    (C2225 * C452 + C2229 + C2229 + C2109 * C592 + C2224 * C79 +
                     C2230 + C2230 + C2108 * C248) *
                        C6228 * C6229 * C6164 * C1059) *
                       C1062)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C2144 +
            (C169 * C123 + C6229 * C291) * C2108 + C2444 * C2145 +
            C2553 * C2109) *
               C6228 * C6164 * C1059 -
           (C2554 * C2109 + C2447 * C2145 + C2553 * C2108 + C2444 * C2144) *
               C6228 * C6164 * C1060) *
              C1061 +
          ((C1152 * C2144 + C1267 * C2108 +
            (C169 * C455 + C6229 * C531) * C2145 +
            (C169 * C497 + C6229 * C629) * C2109) *
               C6228 * C6164 * C1060 -
           (C1267 * C2109 + C1152 * C2145 + C302 * C2108 + C187 * C2144) *
               C6228 * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2111 * C78 + C6228 * C82) * C169 +
             (C2111 * C170 + C6228 * C331) * C6229) *
                C2108 +
            (C2582 + C2590) * C2109) *
               C6164 * C1059 -
           ((C2591 + C2587) * C2109 + (C2590 + C2582) * C2108) * C6164 *
               C1060) *
              C1061 +
          (((C3168 + C3172) * C2108 + ((C2111 * C455 + C6228 * C459) * C169 +
                                       (C2111 * C531 + C6228 * C659) * C6229) *
                                          C2109) *
               C6164 * C1060 -
           ((C3172 + C3168) * C2109 + ((C2111 * C171 + C6228 * C332) * C6229 +
                                       (C2111 * C79 + C6228 * C83) * C169) *
                                          C2108) *
               C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C169 +
            (C2144 * C170 + C2108 * C361 + C2145 * C529 + C2109 * C687) *
                C6229) *
               C6228 * C6164 * C1059 -
           ((C2145 * C530 + C2109 * C688 + C2144 * C529 + C2108 * C687) *
                C6229 +
            (C2145 * C454 + C2109 * C496 + C2144 * C453 + C2108 * C495) *
                C169) *
               C6228 * C6164 * C1060) *
              C1061 +
          (((C2144 * C452 + C2108 * C494 + C2145 * C455 + C2109 * C497) * C169 +
            (C2144 * C528 + C2108 * C686 + C2145 * C531 + C2109 * C689) *
                C6229) *
               C6228 * C6164 * C1060 -
           ((C2145 * C528 + C2109 * C686 + C2144 * C171 + C2108 * C362) *
                C6229 +
            (C2145 * C452 + C2109 * C494 + C2144 * C79 + C2108 * C124) * C169) *
               C6228 * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C6229 * C402) * C2108 + C2655 * C2109) *
               C6228 * C6164 * C1059 -
           (C2656 * C2109 + C2655 * C2108) * C6228 * C6164 * C1060) *
              C1061 +
          ((C1384 * C2108 +
            (C401 * C455 + C724 + C724 + C6229 * C719) * C2109) *
               C6228 * C6164 * C1060 -
           (C1384 * C2109 + C419 * C2108) * C6228 * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C6229 * C2108 +
            C2378 * C2109) *
               C1419 -
           (C3594 * C2109 +
            (C2110 * C754 + C2687 + C2687 + C6228 * C762) * C6229 * C2108) *
               C1420) *
              C1059 +
          ((C3594 * C2108 +
            (C2110 * C3584 + C3590 + C3590 + C6228 * C3586) * C6229 * C2109) *
               C1420 -
           (C2379 * C2109 + C2378 * C2108) * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C2111 +
            (C2144 * C82 + C2108 * C127 + C2145 * C457 + C2109 * C499) *
                C6228) *
               C6229 * C1419 -
           ((C2145 * C1779 + C2109 * C1821 + C2144 * C758 + C2108 * C800) *
                C6228 +
            (C2145 * C1777 + C2109 * C1819 + C2144 * C754 + C2108 * C796) *
                C2111) *
               C6229 * C1420) *
              C1059 +
          (((C2144 * C1777 + C2108 * C1819 + C2145 * C3584 + C2109 * C3628) *
                C2111 +
            (C2144 * C1779 + C2108 * C1821 + C2145 * C3585 + C2109 * C3629) *
                C6228) *
               C6229 * C1420 -
           ((C2145 * C458 + C2109 * C500 + C2144 * C457 + C2108 * C499) *
                C6228 +
            (C2145 * C454 + C2109 * C496 + C2144 * C453 + C2108 * C495) *
                C2111) *
               C6229 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C6229 * C170) * C2111 +
             (C169 * C82 + C6229 * C174) * C6228) *
                C2108 +
            (C2448 + C2449) * C2109) *
               C1419 -
           ((C3673 + C3674) * C2109 + ((C169 * C758 + C6229 * C834) * C6228 +
                                       (C169 * C754 + C6229 * C830) * C2111) *
                                          C2108) *
               C1420) *
              C1059 +
          (((C3674 + C3673) * C2108 + ((C169 * C3584 + C6229 * C3664) * C2111 +
                                       (C169 * C3585 + C6229 * C3665) * C6228) *
                                          C2109) *
               C1420 -
           ((C2450 + C2451) * C2109 + (C2449 + C2448) * C2108) * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2111 * C78 + C6228 * C82) * C2144 +
            (C2111 * C123 + C6228 * C216) * C2108 + C2487 * C2145 +
            C2488 * C2109) *
               C6229 * C1419 -
           (C3714 * C2109 + C3715 * C2145 +
            (C2111 * C796 + C6228 * C864) * C2108 +
            (C2111 * C754 + C6228 * C758) * C2144) *
               C6229 * C1420) *
              C1059 +
          ((C3715 * C2144 + C3714 * C2108 +
            (C2111 * C3584 + C6228 * C3585) * C2145 +
            (C2111 * C3628 + C6228 * C3708) * C2109) *
               C6229 * C1420 -
           (C2489 * C2109 + C2490 * C2145 + C2488 * C2108 + C2487 * C2144) *
               C6229 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2224 * C78 + C2227 + C2227 + C2108 * C247 + C2225 * C453 +
                     C2228 + C2228 + C2109 * C593) *
                        C6228 * C6229 * C1419 -
                    (C2225 * C1777 + C2800 + C2800 + C2109 * C1931 +
                     C2224 * C754 + C2801 + C2801 + C2108 * C894) *
                        C6228 * C6229 * C1420) *
                       C1059 +
                   ((C2224 * C1777 + C3751 + C3751 + C2108 * C1931 +
                     C2225 * C3584 + C3752 + C3752 + C2109 * C3749) *
                        C6228 * C6229 * C1420 -
                    (C2225 * C454 + C2518 + C2518 + C2109 * C594 +
                     C2224 * C453 + C2519 + C2519 + C2108 * C593) *
                        C6228 * C6229 * C1419) *
                       C1060) *
                  C6138) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C2144 +
            (C169 * C123 + C6229 * C291) * C2108 + C2444 * C2145 +
            C2553 * C2109) *
               C6228 * C1419 -
           (C3790 * C2109 + C3672 * C2145 +
            (C169 * C796 + C6229 * C928) * C2108 +
            (C169 * C754 + C6229 * C830) * C2144) *
               C6228 * C1420) *
              C1059 +
          ((C3672 * C2144 + C3790 * C2108 +
            (C169 * C3584 + C6229 * C3664) * C2145 +
            (C169 * C3628 + C6229 * C3786) * C2109) *
               C6228 * C1420 -
           (C2554 * C2109 + C2447 * C2145 + C2553 * C2108 + C2444 * C2144) *
               C6228 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2111 * C78 + C6228 * C82) * C169 +
             (C2111 * C170 + C6228 * C331) * C6229) *
                C2108 +
            (C2582 + C2590) * C2109) *
               C1419 -
           ((C3830 + C3828) * C2109 + ((C2111 * C830 + C6228 * C958) * C6229 +
                                       (C2111 * C754 + C6228 * C758) * C169) *
                                          C2108) *
               C1420) *
              C1059 +
          (((C3828 + C3830) * C2108 +
            ((C2111 * C3584 + C6228 * C3585) * C169 +
             (C2111 * C3664 + C6228 * C3824) * C6229) *
                C2109) *
               C1420 -
           ((C2591 + C2587) * C2109 + (C2590 + C2582) * C2108) * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C169 +
            (C2144 * C170 + C2108 * C361 + C2145 * C529 + C2109 * C687) *
                C6229) *
               C6228 * C1419 -
           ((C2145 * C1857 + C2109 * C2041 + C2144 * C830 + C2108 * C988) *
                C6229 +
            (C2145 * C1777 + C2109 * C1819 + C2144 * C754 + C2108 * C796) *
                C169) *
               C6228 * C1420) *
              C1059 +
          (((C2144 * C1777 + C2108 * C1819 + C2145 * C3584 + C2109 * C3628) *
                C169 +
            (C2144 * C1857 + C2108 * C2041 + C2145 * C3664 + C2109 * C3864) *
                C6229) *
               C6228 * C1420 -
           ((C2145 * C530 + C2109 * C688 + C2144 * C529 + C2108 * C687) *
                C6229 +
            (C2145 * C454 + C2109 * C496 + C2144 * C453 + C2108 * C495) *
                C169) *
               C6228 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C6229 * C402) * C2108 + C2655 * C2109) *
               C6228 * C1419 -
           (C3906 * C2109 +
            (C401 * C754 + C1023 + C1023 + C6229 * C1018) * C2108) *
               C6228 * C1420) *
              C1059 +
          ((C3906 * C2108 +
            (C401 * C3584 + C3903 + C3903 + C6229 * C3899) * C2109) *
               C6228 * C1420 -
           (C2656 * C2109 + C2655 * C2108) * C6228 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C6229 * C2108 +
           C2378 * C2109) *
              C6164 * C448 -
          (C2379 * C2109 + C2378 * C2108) * C6164 * C449 +
          (C2379 * C2108 +
           (C2110 * C2362 + C2371 + C2371 + C6228 * C2364) * C6229 * C2109) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C6229 * C2108 +
           (C2110 * C453 + C2114 + C2114 + C6228 * C461) * C6229 * C2109) *
              C6164 * C6150 * C71 -
          ((C2110 * C452 + C2115 + C2115 + C6228 * C460) * C6229 * C2109 +
           (C2110 * C79 + C2116 + C2116 + C6228 * C87) * C6229 * C2108) *
              C6164 * C6150 * C72 +
          ((C2110 * C80 + C2117 + C2117 + C6228 * C88) * C6229 * C2108 +
           (C2110 * C1063 + C2118 + C2118 + C6228 * C1065) * C6229 * C2109) *
              C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C6229 * C2108 +
           C2378 * C2109) *
              C750 -
          ((C2110 * C1777 + C2686 + C2686 + C6228 * C1781) * C6229 * C2109 +
           (C2110 * C754 + C2687 + C2687 + C6228 * C762) * C6229 * C2108) *
              C751 +
          ((C2110 * C755 + C2688 + C2688 + C6228 * C763) * C6229 * C2108 +
           (C2110 * C2682 + C2689 + C2689 + C6228 * C2684) * C6229 * C2109) *
              C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C2111 +
           (C2144 * C82 + C2108 * C127 + C2145 * C457 + C2109 * C499) * C6228) *
              C6229 * C6164 * C448 -
          ((C2145 * C458 + C2109 * C500 + C2144 * C457 + C2108 * C499) * C6228 +
           (C2145 * C454 + C2109 * C496 + C2144 * C453 + C2108 * C495) *
               C2111) *
              C6229 * C6164 * C449 +
          ((C2144 * C454 + C2108 * C496 + C2145 * C2362 + C2109 * C2405) *
               C2111 +
           (C2144 * C458 + C2108 * C500 + C2145 * C2363 + C2109 * C2406) *
               C6228) *
              C6229 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C2111 +
           (C2144 * C82 + C2108 * C127 + C2145 * C457 + C2109 * C499) * C6228) *
              C6229 * C6164 * C6150 * C71 -
          ((C2145 * C456 + C2109 * C498 + C2144 * C83 + C2108 * C128) * C6228 +
           (C2145 * C452 + C2109 * C494 + C2144 * C79 + C2108 * C124) * C2111) *
              C6229 * C6164 * C6150 * C72 +
          ((C2144 * C80 + C2108 * C125 + C2145 * C1063 + C2109 * C1102) *
               C2111 +
           (C2144 * C84 + C2108 * C129 + C2145 * C1064 + C2109 * C1103) *
               C6228) *
              C6229 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C2111 +
           (C2144 * C82 + C2108 * C127 + C2145 * C457 + C2109 * C499) * C6228) *
              C6229 * C750 -
          ((C2145 * C1779 + C2109 * C1821 + C2144 * C758 + C2108 * C800) *
               C6228 +
           (C2145 * C1777 + C2109 * C1819 + C2144 * C754 + C2108 * C796) *
               C2111) *
              C6229 * C751 +
          ((C2144 * C755 + C2108 * C797 + C2145 * C2682 + C2109 * C2715) *
               C2111 +
           (C2144 * C759 + C2108 * C801 + C2145 * C2683 + C2109 * C2716) *
               C6228) *
              C6229 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C2111 +
            (C169 * C82 + C6229 * C174) * C6228) *
               C2108 +
           (C2448 + C2449) * C2109) *
              C6164 * C448 -
          ((C2450 + C2451) * C2109 + (C2449 + C2448) * C2108) * C6164 * C449 +
          ((C2451 + C2450) * C2108 + ((C169 * C2362 + C6229 * C2433) * C2111 +
                                      (C169 * C2363 + C6229 * C2434) * C6228) *
                                         C2109) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C169 * C78 + C6229 * C170) * C2111 +
                                (C169 * C82 + C6229 * C174) * C6228) *
                                   C2108 +
                               ((C169 * C453 + C6229 * C529) * C2111 +
                                (C169 * C457 + C6229 * C533) * C6228) *
                                   C2109) *
                                  C6164 * C6150 * C71 -
                              ((C1151 * C6228 + C1152 * C2111) * C2109 +
                               (C188 * C6228 + C187 * C2111) * C2108) *
                                  C6164 * C6150 * C72 +
                              ((C190 * C2111 + C189 * C6228) * C2108 +
                               ((C169 * C1063 + C6229 * C1144) * C2111 +
                                (C169 * C1064 + C6229 * C1145) * C6228) *
                                   C2109) *
                                  C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C2111 +
            (C169 * C82 + C6229 * C174) * C6228) *
               C2108 +
           (C2448 + C2449) * C2109) *
              C750 -
          (((C169 * C1779 + C6229 * C1859) * C6228 +
            (C169 * C1777 + C6229 * C1857) * C2111) *
               C2109 +
           ((C169 * C758 + C6229 * C834) * C6228 +
            (C169 * C754 + C6229 * C830) * C2111) *
               C2108) *
              C751 +
          (((C169 * C755 + C6229 * C831) * C2111 +
            (C169 * C759 + C6229 * C835) * C6228) *
               C2108 +
           ((C169 * C2682 + C6229 * C2743) * C2111 +
            (C169 * C2683 + C6229 * C2744) * C6228) *
               C2109) *
              C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C2111 * C78 + C6228 * C82) * C2144 +
           (C2111 * C123 + C6228 * C216) * C2108 + C2487 * C2145 +
           C2488 * C2109) *
              C6229 * C6164 * C448 -
          (C2489 * C2109 + C2490 * C2145 + C2488 * C2108 + C2487 * C2144) *
              C6229 * C6164 * C449 +
          (C2490 * C2144 + C2489 * C2108 +
           (C2111 * C2362 + C6228 * C2363) * C2145 +
           (C2111 * C2405 + C6228 * C2477) * C2109) *
              C6229 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C2111 * C78 + C6228 * C82) * C2144 +
                               (C2111 * C123 + C6228 * C216) * C2108 +
                               (C2111 * C453 + C6228 * C457) * C2145 +
                               (C2111 * C495 + C6228 * C563) * C2109) *
                                  C6229 * C6164 * C6150 * C71 -
                              ((C2111 * C494 + C6228 * C562) * C2109 +
                               (C2111 * C452 + C6228 * C456) * C2145 +
                               (C2111 * C124 + C6228 * C217) * C2108 +
                               (C2111 * C79 + C6228 * C83) * C2144) *
                                  C6229 * C6164 * C6150 * C72 +
                              ((C2111 * C80 + C6228 * C84) * C2144 +
                               (C2111 * C125 + C6228 * C218) * C2108 +
                               (C2111 * C1063 + C6228 * C1064) * C2145 +
                               (C2111 * C1102 + C6228 * C1186) * C2109) *
                                  C6229 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2111 * C78 + C6228 * C82) * C2144 +
           (C2111 * C123 + C6228 * C216) * C2108 + C2487 * C2145 +
           C2488 * C2109) *
              C6229 * C750 -
          ((C2111 * C1819 + C6228 * C1895) * C2109 +
           (C2111 * C1777 + C6228 * C1779) * C2145 +
           (C2111 * C796 + C6228 * C864) * C2108 +
           (C2111 * C754 + C6228 * C758) * C2144) *
              C6229 * C751 +
          ((C2111 * C755 + C6228 * C759) * C2144 +
           (C2111 * C797 + C6228 * C865) * C2108 +
           (C2111 * C2682 + C6228 * C2683) * C2145 +
           (C2111 * C2715 + C6228 * C2771) * C2109) *
              C6229 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C2224 * C78 + C2227 + C2227 + C2108 * C247 + C2225 * C453 + C2228 +
           C2228 + C2109 * C593) *
              C6228 * C6229 * C6164 * C448 -
          (C2225 * C454 + C2518 + C2518 + C2109 * C594 + C2224 * C453 + C2519 +
           C2519 + C2108 * C593) *
              C6228 * C6229 * C6164 * C449 +
          (C2224 * C454 + C2520 + C2520 + C2108 * C594 + C2225 * C2362 + C2521 +
           C2521 + C2109 * C2516) *
              C6228 * C6229 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C2224 * C78 + C2227 + C2227 + C2108 * C247 +
                               C2225 * C453 + C2228 + C2228 + C2109 * C593) *
                                  C6228 * C6229 * C6164 * C6150 * C71 -
                              (C2225 * C452 + C2229 + C2229 + C2109 * C592 +
                               C2224 * C79 + C2230 + C2230 + C2108 * C248) *
                                  C6228 * C6229 * C6164 * C6150 * C72 +
                              (C2224 * C80 + C2231 + C2231 + C2108 * C249 +
                               C2225 * C1063 + C2232 + C2232 + C2109 * C1221) *
                                  C6228 * C6229 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C2224 * C78 + C2227 + C2227 + C2108 * C247 + C2225 * C453 + C2228 +
           C2228 + C2109 * C593) *
              C6228 * C6229 * C750 -
          (C2225 * C1777 + C2800 + C2800 + C2109 * C1931 + C2224 * C754 +
           C2801 + C2801 + C2108 * C894) *
              C6228 * C6229 * C751 +
          (C2224 * C755 + C2802 + C2802 + C2108 * C895 + C2225 * C2682 + C2803 +
           C2803 + C2109 * C2798) *
              C6228 * C6229 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (-std::pow(Pi, 2.5) *
         (((C169 * C78 + C6229 * C170) * C2144 +
           (C169 * C123 + C6229 * C291) * C2108 + C2444 * C2145 +
           C2553 * C2109) *
              C6228 * C6164 * C448 -
          (C2554 * C2109 + C2447 * C2145 + C2553 * C2108 + C2444 * C2144) *
              C6228 * C6164 * C449 +
          (C2447 * C2144 + C2554 * C2108 +
           (C169 * C2362 + C6229 * C2433) * C2145 +
           (C169 * C2405 + C6229 * C2547) * C2109) *
              C6228 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C169 * C78 + C6229 * C170) * C2144 +
           (C169 * C123 + C6229 * C291) * C2108 +
           (C169 * C453 + C6229 * C529) * C2145 +
           (C169 * C495 + C6229 * C627) * C2109) *
              C6228 * C6164 * C6150 * C71 -
          (C1267 * C2109 + C1152 * C2145 + C302 * C2108 + C187 * C2144) *
              C6228 * C6164 * C6150 * C72 +
          (C190 * C2144 + C303 * C2108 +
           (C169 * C1063 + C6229 * C1144) * C2145 +
           (C169 * C1102 + C6229 * C1262) * C2109) *
              C6228 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C169 * C78 + C6229 * C170) * C2144 +
           (C169 * C123 + C6229 * C291) * C2108 + C2444 * C2145 +
           C2553 * C2109) *
              C6228 * C750 -
          ((C169 * C1819 + C6229 * C1969) * C2109 +
           (C169 * C1777 + C6229 * C1857) * C2145 +
           (C169 * C796 + C6229 * C928) * C2108 +
           (C169 * C754 + C6229 * C830) * C2144) *
              C6228 * C751 +
          ((C169 * C755 + C6229 * C831) * C2144 +
           (C169 * C797 + C6229 * C929) * C2108 +
           (C169 * C2682 + C6229 * C2743) * C2145 +
           (C169 * C2715 + C6229 * C2829) * C2109) *
              C6228 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C2111 * C78 + C6228 * C82) * C169 +
            (C2111 * C170 + C6228 * C331) * C6229) *
               C2108 +
           (C2582 + C2590) * C2109) *
              C6164 * C448 -
          ((C2591 + C2587) * C2109 + (C2590 + C2582) * C2108) * C6164 * C449 +
          ((C2587 + C2591) * C2108 + ((C2111 * C2362 + C6228 * C2363) * C169 +
                                      (C2111 * C2433 + C6228 * C2580) * C6229) *
                                         C2109) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C2111 * C78 + C6228 * C82) * C169 +
                                (C2111 * C170 + C6228 * C331) * C6229) *
                                   C2108 +
                               ((C2111 * C453 + C6228 * C457) * C169 +
                                (C2111 * C529 + C6228 * C657) * C6229) *
                                   C2109) *
                                  C6164 * C6150 * C71 -
                              (((C2111 * C528 + C6228 * C656) * C6229 +
                                (C2111 * C452 + C6228 * C456) * C169) *
                                   C2109 +
                               ((C2111 * C171 + C6228 * C332) * C6229 +
                                (C2111 * C79 + C6228 * C83) * C169) *
                                   C2108) *
                                  C6164 * C6150 * C72 +
                              (((C2111 * C80 + C6228 * C84) * C169 +
                                (C2111 * C172 + C6228 * C333) * C6229) *
                                   C2108 +
                               ((C2111 * C1063 + C6228 * C1064) * C169 +
                                (C2111 * C1144 + C6228 * C1302) * C6229) *
                                   C2109) *
                                  C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C2111 * C78 + C6228 * C82) * C169 +
            (C2111 * C170 + C6228 * C331) * C6229) *
               C2108 +
           (C2582 + C2590) * C2109) *
              C750 -
          (((C2111 * C1857 + C6228 * C2005) * C6229 +
            (C2111 * C1777 + C6228 * C1779) * C169) *
               C2109 +
           ((C2111 * C830 + C6228 * C958) * C6229 +
            (C2111 * C754 + C6228 * C758) * C169) *
               C2108) *
              C751 +
          (((C2111 * C755 + C6228 * C759) * C169 +
            (C2111 * C831 + C6228 * C959) * C6229) *
               C2108 +
           ((C2111 * C2682 + C6228 * C2683) * C169 +
            (C2111 * C2743 + C6228 * C2856) * C6229) *
               C2109) *
              C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C169 +
           (C2144 * C170 + C2108 * C361 + C2145 * C529 + C2109 * C687) *
               C6229) *
              C6228 * C6164 * C448 -
          ((C2145 * C530 + C2109 * C688 + C2144 * C529 + C2108 * C687) * C6229 +
           (C2145 * C454 + C2109 * C496 + C2144 * C453 + C2108 * C495) * C169) *
              C6228 * C6164 * C449 +
          ((C2144 * C454 + C2108 * C496 + C2145 * C2362 + C2109 * C2405) *
               C169 +
           (C2144 * C530 + C2108 * C688 + C2145 * C2433 + C2109 * C2617) *
               C6229) *
              C6228 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C169 +
           (C2144 * C170 + C2108 * C361 + C2145 * C529 + C2109 * C687) *
               C6229) *
              C6228 * C6164 * C6150 * C71 -
          ((C2145 * C528 + C2109 * C686 + C2144 * C171 + C2108 * C362) * C6229 +
           (C2145 * C452 + C2109 * C494 + C2144 * C79 + C2108 * C124) * C169) *
              C6228 * C6164 * C6150 * C72 +
          ((C2144 * C80 + C2108 * C125 + C2145 * C1063 + C2109 * C1102) * C169 +
           (C2144 * C172 + C2108 * C363 + C2145 * C1144 + C2109 * C1337) *
               C6229) *
              C6228 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C169 +
           (C2144 * C170 + C2108 * C361 + C2145 * C529 + C2109 * C687) *
               C6229) *
              C6228 * C750 -
          ((C2145 * C1857 + C2109 * C2041 + C2144 * C830 + C2108 * C988) *
               C6229 +
           (C2145 * C1777 + C2109 * C1819 + C2144 * C754 + C2108 * C796) *
               C169) *
              C6228 * C751 +
          ((C2144 * C755 + C2108 * C797 + C2145 * C2682 + C2109 * C2715) *
               C169 +
           (C2144 * C831 + C2108 * C989 + C2145 * C2743 + C2109 * C2883) *
               C6229) *
              C6228 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::pow(Pi, 2.5) *
         (((C401 * C78 + C407 + C407 + C6229 * C402) * C2108 + C2655 * C2109) *
              C6228 * C6164 * C448 -
          (C2656 * C2109 + C2655 * C2108) * C6228 * C6164 * C449 +
          (C2656 * C2108 +
           (C401 * C2362 + C2650 + C2650 + C6229 * C2644) * C2109) *
              C6228 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C401 * C78 + C407 + C407 + C6229 * C402) * C2108 +
           (C401 * C453 + C722 + C722 + C6229 * C717) * C2109) *
              C6228 * C6164 * C6150 * C71 -
          (C1384 * C2109 + C419 * C2108) * C6228 * C6164 * C6150 * C72 +
          (C420 * C2108 +
           (C401 * C1063 + C1381 + C1381 + C6229 * C1377) * C2109) *
              C6228 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C401 * C78 + C407 + C407 + C6229 * C402) * C2108 + C2655 * C2109) *
              C6228 * C750 -
          ((C401 * C1777 + C2080 + C2080 + C6229 * C2077) * C2109 +
           (C401 * C754 + C1023 + C1023 + C6229 * C1018) * C2108) *
              C6228 * C751 +
          ((C401 * C755 + C1024 + C1024 + C6229 * C1019) * C2108 +
           (C401 * C2682 + C2912 + C2912 + C6229 * C2910) * C2109) *
              C6228 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C6229 * C2108 +
            C2378 * C2109) *
               C1419 -
           ((C2110 * C1777 + C2686 + C2686 + C6228 * C1781) * C6229 * C2109 +
            (C2110 * C754 + C2687 + C2687 + C6228 * C762) * C6229 * C2108) *
               C1420) *
              C6150 * C1061 +
          (((C2110 * C753 + C3275 + C3275 + C6228 * C761) * C6229 * C2108 +
            (C2110 * C1778 + C3276 + C3276 + C6228 * C1782) * C6229 * C2109) *
               C1420 -
           (C2953 * C2109 +
            (C2110 * C79 + C2116 + C2116 + C6228 * C87) * C6229 * C2108) *
               C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C2111 +
            (C2144 * C82 + C2108 * C127 + C2145 * C457 + C2109 * C499) *
                C6228) *
               C6229 * C1419 -
           ((C2145 * C1779 + C2109 * C1821 + C2144 * C758 + C2108 * C800) *
                C6228 +
            (C2145 * C1777 + C2109 * C1819 + C2144 * C754 + C2108 * C796) *
                C2111) *
               C6229 * C1420) *
              C6150 * C1061 +
          (((C2144 * C753 + C2108 * C795 + C2145 * C1778 + C2109 * C1820) *
                C2111 +
            (C2144 * C757 + C2108 * C799 + C2145 * C1780 + C2109 * C1822) *
                C6228) *
               C6229 * C1420 -
           ((C2145 * C456 + C2109 * C498 + C2144 * C83 + C2108 * C128) * C6228 +
            (C2145 * C452 + C2109 * C494 + C2144 * C79 + C2108 * C124) *
                C2111) *
               C6229 * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C6229 * C170) * C2111 +
             (C169 * C82 + C6229 * C174) * C6228) *
                C2108 +
            (C2448 + C2449) * C2109) *
               C1419 -
           (((C169 * C1779 + C6229 * C1859) * C6228 +
             (C169 * C1777 + C6229 * C1857) * C2111) *
                C2109 +
            ((C169 * C758 + C6229 * C834) * C6228 +
             (C169 * C754 + C6229 * C830) * C2111) *
                C2108) *
               C1420) *
              C6150 * C1061 +
          (((C1510 * C2111 + C1509 * C6228) * C2108 +
            ((C169 * C1778 + C6229 * C1858) * C2111 +
             (C169 * C1780 + C6229 * C1860) * C6228) *
                C2109) *
               C1420 -
           ((C3023 + C3022) * C2109 + (C188 * C6228 + C187 * C2111) * C2108) *
               C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C2111 * C78 + C6228 * C82) * C2144 +
                     (C2111 * C123 + C6228 * C216) * C2108 + C2487 * C2145 +
                     C2488 * C2109) *
                        C6229 * C1419 -
                    ((C2111 * C1819 + C6228 * C1895) * C2109 +
                     (C2111 * C1777 + C6228 * C1779) * C2145 +
                     (C2111 * C796 + C6228 * C864) * C2108 +
                     (C2111 * C754 + C6228 * C758) * C2144) *
                        C6229 * C1420) *
                       C6150 * C1061 +
                   (((C2111 * C753 + C6228 * C757) * C2144 +
                     (C2111 * C795 + C6228 * C863) * C2108 +
                     (C2111 * C1778 + C6228 * C1780) * C2145 +
                     (C2111 * C1820 + C6228 * C1896) * C2109) *
                        C6229 * C1420 -
                    (C3063 * C2109 + C3062 * C2145 +
                     (C2111 * C124 + C6228 * C217) * C2108 +
                     (C2111 * C79 + C6228 * C83) * C2144) *
                        C6229 * C1419) *
                       C6150 * C1062)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2224 * C78 + C2227 + C2227 + C2108 * C247 + C2225 * C453 +
                     C2228 + C2228 + C2109 * C593) *
                        C6228 * C6229 * C1419 -
                    (C2225 * C1777 + C2800 + C2800 + C2109 * C1931 +
                     C2224 * C754 + C2801 + C2801 + C2108 * C894) *
                        C6228 * C6229 * C1420) *
                       C6150 * C1061 +
                   ((C2224 * C753 + C3413 + C3413 + C2108 * C893 +
                     C2225 * C1778 + C3414 + C3414 + C2109 * C1932) *
                        C6228 * C6229 * C1420 -
                    (C2225 * C452 + C2229 + C2229 + C2109 * C592 + C2224 * C79 +
                     C2230 + C2230 + C2108 * C248) *
                        C6228 * C6229 * C1419) *
                       C6150 * C1062)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C2144 +
            (C169 * C123 + C6229 * C291) * C2108 + C2444 * C2145 +
            C2553 * C2109) *
               C6228 * C1419 -
           ((C169 * C1819 + C6229 * C1969) * C2109 +
            (C169 * C1777 + C6229 * C1857) * C2145 +
            (C169 * C796 + C6229 * C928) * C2108 +
            (C169 * C754 + C6229 * C830) * C2144) *
               C6228 * C1420) *
              C6150 * C1061 +
          ((C1510 * C2144 + C1625 * C2108 +
            (C169 * C1778 + C6229 * C1858) * C2145 +
            (C169 * C1820 + C6229 * C1970) * C2109) *
               C6228 * C1420 -
           (C1267 * C2109 + C1152 * C2145 + C302 * C2108 + C187 * C2144) *
               C6228 * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2111 * C78 + C6228 * C82) * C169 +
             (C2111 * C170 + C6228 * C331) * C6229) *
                C2108 +
            (C2582 + C2590) * C2109) *
               C1419 -
           (((C2111 * C1857 + C6228 * C2005) * C6229 +
             (C2111 * C1777 + C6228 * C1779) * C169) *
                C2109 +
            ((C2111 * C830 + C6228 * C958) * C6229 +
             (C2111 * C754 + C6228 * C758) * C169) *
                C2108) *
               C1420) *
              C6150 * C1061 +
          ((((C2111 * C753 + C6228 * C757) * C169 +
             (C2111 * C829 + C6228 * C957) * C6229) *
                C2108 +
            ((C2111 * C1778 + C6228 * C1780) * C169 +
             (C2111 * C1858 + C6228 * C2006) * C6229) *
                C2109) *
               C1420 -
           ((C3172 + C3168) * C2109 + ((C2111 * C171 + C6228 * C332) * C6229 +
                                       (C2111 * C79 + C6228 * C83) * C169) *
                                          C2108) *
               C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C169 +
            (C2144 * C170 + C2108 * C361 + C2145 * C529 + C2109 * C687) *
                C6229) *
               C6228 * C1419 -
           ((C2145 * C1857 + C2109 * C2041 + C2144 * C830 + C2108 * C988) *
                C6229 +
            (C2145 * C1777 + C2109 * C1819 + C2144 * C754 + C2108 * C796) *
                C169) *
               C6228 * C1420) *
              C6150 * C1061 +
          (((C2144 * C753 + C2108 * C795 + C2145 * C1778 + C2109 * C1820) *
                C169 +
            (C2144 * C829 + C2108 * C987 + C2145 * C1858 + C2109 * C2042) *
                C6229) *
               C6228 * C1420 -
           ((C2145 * C528 + C2109 * C686 + C2144 * C171 + C2108 * C362) *
                C6229 +
            (C2145 * C452 + C2109 * C494 + C2144 * C79 + C2108 * C124) * C169) *
               C6228 * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C6229 * C402) * C2108 + C2655 * C2109) *
               C6228 * C1419 -
           ((C401 * C1777 + C2080 + C2080 + C6229 * C2077) * C2109 +
            (C401 * C754 + C1023 + C1023 + C6229 * C1018) * C2108) *
               C6228 * C1420) *
              C6150 * C1061 +
          ((C1742 * C2108 +
            (C401 * C1778 + C2081 + C2081 + C6229 * C2078) * C2109) *
               C6228 * C1420 -
           (C1384 * C2109 + C419 * C2108) * C6228 * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C6229 * C2108 +
           (C2110 * C453 + C2114 + C2114 + C6228 * C461) * C6229 * C2109) *
              C6164 * C6150 * C71 -
          ((C2110 * C452 + C2115 + C2115 + C6228 * C460) * C6229 * C2109 +
           (C2110 * C79 + C2116 + C2116 + C6228 * C87) * C6229 * C2108) *
              C6164 * C6150 * C72 +
          ((C2110 * C80 + C2117 + C2117 + C6228 * C88) * C6229 * C2108 +
           (C2110 * C1063 + C2118 + C2118 + C6228 * C1065) * C6229 * C2109) *
              C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C6229 * C2108 +
           C2378 * C2109) *
              C6164 * C448 -
          (C2379 * C2109 + C2378 * C2108) * C6164 * C449 +
          (C2379 * C2108 +
           (C2110 * C2362 + C2371 + C2371 + C6228 * C2364) * C6229 * C2109) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C2111 +
           (C2144 * C82 + C2108 * C127 + C2145 * C457 + C2109 * C499) * C6228) *
              C6229 * C6164 * C6150 * C71 -
          ((C2145 * C456 + C2109 * C498 + C2144 * C83 + C2108 * C128) * C6228 +
           (C2145 * C452 + C2109 * C494 + C2144 * C79 + C2108 * C124) * C2111) *
              C6229 * C6164 * C6150 * C72 +
          ((C2144 * C80 + C2108 * C125 + C2145 * C1063 + C2109 * C1102) *
               C2111 +
           (C2144 * C84 + C2108 * C129 + C2145 * C1064 + C2109 * C1103) *
               C6228) *
              C6229 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C2111 +
           (C2144 * C82 + C2108 * C127 + C2145 * C457 + C2109 * C499) * C6228) *
              C6229 * C6164 * C448 -
          ((C2145 * C458 + C2109 * C500 + C2144 * C457 + C2108 * C499) * C6228 +
           (C2145 * C454 + C2109 * C496 + C2144 * C453 + C2108 * C495) *
               C2111) *
              C6229 * C6164 * C449 +
          ((C2144 * C454 + C2108 * C496 + C2145 * C2362 + C2109 * C2405) *
               C2111 +
           (C2144 * C458 + C2108 * C500 + C2145 * C2363 + C2109 * C2406) *
               C6228) *
              C6229 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C2111 +
            (C169 * C82 + C6229 * C174) * C6228) *
               C2108 +
           ((C169 * C453 + C6229 * C529) * C2111 +
            (C169 * C457 + C6229 * C533) * C6228) *
               C2109) *
              C6164 * C6150 * C71 -
          ((C1151 * C6228 + C1152 * C2111) * C2109 +
           (C188 * C6228 + C187 * C2111) * C2108) *
              C6164 * C6150 * C72 +
          ((C190 * C2111 + C189 * C6228) * C2108 +
           ((C169 * C1063 + C6229 * C1144) * C2111 +
            (C169 * C1064 + C6229 * C1145) * C6228) *
               C2109) *
              C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C6229 * C170) * C2111 +
            (C169 * C82 + C6229 * C174) * C6228) *
               C2108 +
           (C2448 + C2449) * C2109) *
              C6164 * C448 -
          ((C2450 + C2451) * C2109 + (C2449 + C2448) * C2108) * C6164 * C449 +
          ((C2451 + C2450) * C2108 + ((C169 * C2362 + C6229 * C2433) * C2111 +
                                      (C169 * C2363 + C6229 * C2434) * C6228) *
                                         C2109) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2111 * C78 + C6228 * C82) * C2144 +
           (C2111 * C123 + C6228 * C216) * C2108 +
           (C2111 * C453 + C6228 * C457) * C2145 +
           (C2111 * C495 + C6228 * C563) * C2109) *
              C6229 * C6164 * C6150 * C71 -
          ((C2111 * C494 + C6228 * C562) * C2109 +
           (C2111 * C452 + C6228 * C456) * C2145 +
           (C2111 * C124 + C6228 * C217) * C2108 +
           (C2111 * C79 + C6228 * C83) * C2144) *
              C6229 * C6164 * C6150 * C72 +
          ((C2111 * C80 + C6228 * C84) * C2144 +
           (C2111 * C125 + C6228 * C218) * C2108 +
           (C2111 * C1063 + C6228 * C1064) * C2145 +
           (C2111 * C1102 + C6228 * C1186) * C2109) *
              C6229 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2111 * C78 + C6228 * C82) * C2144 +
           (C2111 * C123 + C6228 * C216) * C2108 + C2487 * C2145 +
           C2488 * C2109) *
              C6229 * C6164 * C448 -
          (C2489 * C2109 + C2490 * C2145 + C2488 * C2108 + C2487 * C2144) *
              C6229 * C6164 * C449 +
          (C2490 * C2144 + C2489 * C2108 +
           (C2111 * C2362 + C6228 * C2363) * C2145 +
           (C2111 * C2405 + C6228 * C2477) * C2109) *
              C6229 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyy[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C2224 * C78 + C2227 + C2227 + C2108 * C247 + C2225 * C453 +
                    C2228 + C2228 + C2109 * C593) *
                       C6228 * C6229 * C6164 * C6150 * C71 -
                   (C2225 * C452 + C2229 + C2229 + C2109 * C592 + C2224 * C79 +
                    C2230 + C2230 + C2108 * C248) *
                       C6228 * C6229 * C6164 * C6150 * C72 +
                   (C2224 * C80 + C2231 + C2231 + C2108 * C249 + C2225 * C1063 +
                    C2232 + C2232 + C2109 * C1221) *
                       C6228 * C6229 * C6164 * C6150 * C73)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C2224 * C78 + C2227 + C2227 + C2108 * C247 + C2225 * C453 +
                    C2228 + C2228 + C2109 * C593) *
                       C6228 * C6229 * C6164 * C448 -
                   (C2225 * C454 + C2518 + C2518 + C2109 * C594 + C2224 * C453 +
                    C2519 + C2519 + C2108 * C593) *
                       C6228 * C6229 * C6164 * C449 +
                   (C2224 * C454 + C2520 + C2520 + C2108 * C594 +
                    C2225 * C2362 + C2521 + C2521 + C2109 * C2516) *
                       C6228 * C6229 * C6164 * C450) *
                  C6138) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C169 * C78 + C6229 * C170) * C2144 +
           (C169 * C123 + C6229 * C291) * C2108 +
           (C169 * C453 + C6229 * C529) * C2145 +
           (C169 * C495 + C6229 * C627) * C2109) *
              C6228 * C6164 * C6150 * C71 -
          (C1267 * C2109 + C1152 * C2145 + C302 * C2108 + C187 * C2144) *
              C6228 * C6164 * C6150 * C72 +
          (C190 * C2144 + C303 * C2108 +
           (C169 * C1063 + C6229 * C1144) * C2145 +
           (C169 * C1102 + C6229 * C1262) * C2109) *
              C6228 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C169 * C78 + C6229 * C170) * C2144 +
           (C169 * C123 + C6229 * C291) * C2108 + C2444 * C2145 +
           C2553 * C2109) *
              C6228 * C6164 * C448 -
          (C2554 * C2109 + C2447 * C2145 + C2553 * C2108 + C2444 * C2144) *
              C6228 * C6164 * C449 +
          (C2447 * C2144 + C2554 * C2108 +
           (C169 * C2362 + C6229 * C2433) * C2145 +
           (C169 * C2405 + C6229 * C2547) * C2109) *
              C6228 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2111 * C78 + C6228 * C82) * C169 +
            (C2111 * C170 + C6228 * C331) * C6229) *
               C2108 +
           ((C2111 * C453 + C6228 * C457) * C169 +
            (C2111 * C529 + C6228 * C657) * C6229) *
               C2109) *
              C6164 * C6150 * C71 -
          (((C2111 * C528 + C6228 * C656) * C6229 +
            (C2111 * C452 + C6228 * C456) * C169) *
               C2109 +
           ((C2111 * C171 + C6228 * C332) * C6229 +
            (C2111 * C79 + C6228 * C83) * C169) *
               C2108) *
              C6164 * C6150 * C72 +
          (((C2111 * C80 + C6228 * C84) * C169 +
            (C2111 * C172 + C6228 * C333) * C6229) *
               C2108 +
           ((C2111 * C1063 + C6228 * C1064) * C169 +
            (C2111 * C1144 + C6228 * C1302) * C6229) *
               C2109) *
              C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2111 * C78 + C6228 * C82) * C169 +
            (C2111 * C170 + C6228 * C331) * C6229) *
               C2108 +
           (C2582 + C2590) * C2109) *
              C6164 * C448 -
          ((C2591 + C2587) * C2109 + (C2590 + C2582) * C2108) * C6164 * C449 +
          ((C2587 + C2591) * C2108 + ((C2111 * C2362 + C6228 * C2363) * C169 +
                                      (C2111 * C2433 + C6228 * C2580) * C6229) *
                                         C2109) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C169 +
           (C2144 * C170 + C2108 * C361 + C2145 * C529 + C2109 * C687) *
               C6229) *
              C6228 * C6164 * C6150 * C71 -
          ((C2145 * C528 + C2109 * C686 + C2144 * C171 + C2108 * C362) * C6229 +
           (C2145 * C452 + C2109 * C494 + C2144 * C79 + C2108 * C124) * C169) *
              C6228 * C6164 * C6150 * C72 +
          ((C2144 * C80 + C2108 * C125 + C2145 * C1063 + C2109 * C1102) * C169 +
           (C2144 * C172 + C2108 * C363 + C2145 * C1144 + C2109 * C1337) *
               C6229) *
              C6228 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2144 * C78 + C2108 * C123 + C2145 * C453 + C2109 * C495) * C169 +
           (C2144 * C170 + C2108 * C361 + C2145 * C529 + C2109 * C687) *
               C6229) *
              C6228 * C6164 * C448 -
          ((C2145 * C530 + C2109 * C688 + C2144 * C529 + C2108 * C687) * C6229 +
           (C2145 * C454 + C2109 * C496 + C2144 * C453 + C2108 * C495) * C169) *
              C6228 * C6164 * C449 +
          ((C2144 * C454 + C2108 * C496 + C2145 * C2362 + C2109 * C2405) *
               C169 +
           (C2144 * C530 + C2108 * C688 + C2145 * C2433 + C2109 * C2617) *
               C6229) *
              C6228 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C401 * C78 + C407 + C407 + C6229 * C402) * C2108 +
           (C401 * C453 + C722 + C722 + C6229 * C717) * C2109) *
              C6228 * C6164 * C6150 * C71 -
          (C1384 * C2109 + C419 * C2108) * C6228 * C6164 * C6150 * C72 +
          (C420 * C2108 +
           (C401 * C1063 + C1381 + C1381 + C6229 * C1377) * C2109) *
              C6228 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C401 * C78 + C407 + C407 + C6229 * C402) * C2108 + C2655 * C2109) *
              C6228 * C6164 * C448 -
          (C2656 * C2109 + C2655 * C2108) * C6228 * C6164 * C449 +
          (C2656 * C2108 +
           (C401 * C2362 + C2650 + C2650 + C6229 * C2644) * C2109) *
              C6228 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eexx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C3932 +
                      C4431 * C3933) *
                         C6230 * C6164 * C1059 -
                     (C3593 * C3933 + C2376 * C3932) * C6230 * C6164 * C1060) *
                        C1061 +
                    ((C2952 * C3932 +
                      (C2110 * C1778 + C3276 + C3276 + C6228 * C1782) * C3933) *
                         C6230 * C6164 * C1060 -
                     ((C2110 * C753 + C3275 + C3275 + C6228 * C761) * C3933 +
                      (C2110 * C79 + C2116 + C2116 + C6228 * C87) * C3932) *
                         C6230 * C6164 * C1059) *
                        C1062)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C122 * C78 + C6230 * C123) * C2111 +
                       (C122 * C82 + C6230 * C127) * C6228) *
                          C3932 +
                      (C4473 + C4474) * C3933) *
                         C6164 * C1059 -
                     (((C122 * C1779 + C6230 * C1821) * C6228 +
                       (C122 * C1777 + C6230 * C1819) * C2111) *
                          C3933 +
                      ((C122 * C457 + C6230 * C499) * C6228 +
                       (C122 * C453 + C6230 * C495) * C2111) *
                          C3932) *
                         C6164 * C1060) *
                        C1061 +
                    (((C1110 * C2111 + C1109 * C6228) * C3932 +
                      ((C122 * C1778 + C6230 * C1820) * C2111 +
                       (C122 * C1780 + C6230 * C1822) * C6228) *
                          C3933) *
                         C6164 * C1060 -
                     ((C1467 * C6228 + C1468 * C2111) * C3933 +
                      (C141 * C6228 + C140 * C2111) * C3932) *
                         C6164 * C1059) *
                        C1062)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C2111 +
            (C3987 * C82 + C3932 * C174 + C3988 * C758 + C3933 * C834) *
                C6228) *
               C6230 * C6164 * C1059 -
           ((C3988 * C1779 + C3933 * C1859 + C3987 * C457 + C3932 * C533) *
                C6228 +
            (C3988 * C1777 + C3933 * C1857 + C3987 * C453 + C3932 * C529) *
                C2111) *
               C6230 * C6164 * C1060) *
              C1061 +
          (((C3987 * C452 + C3932 * C528 + C3988 * C1778 + C3933 * C1858) *
                C2111 +
            (C3987 * C456 + C3932 * C532 + C3988 * C1780 + C3933 * C1860) *
                C6228) *
               C6230 * C6164 * C1060 -
           ((C3988 * C757 + C3933 * C833 + C3987 * C83 + C3932 * C175) * C6228 +
            (C3988 * C753 + C3933 * C829 + C3987 * C79 + C3932 * C171) *
                C2111) *
               C6230 * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C2111 * C78 + C6228 * C82) * C122 +
                       (C2111 * C123 + C6228 * C216) * C6230) *
                          C3932 +
                      (C4544 + C4545) * C3933) *
                         C6164 * C1059 -
                     ((C3714 * C6230 + C3715 * C122) * C3933 +
                      (C2488 * C6230 + C2487 * C122) * C3932) *
                         C6164 * C1060) *
                        C1061 +
                    (((C3062 * C122 + C3063 * C6230) * C3932 +
                      ((C2111 * C1778 + C6228 * C1780) * C122 +
                       (C2111 * C1820 + C6228 * C1896) * C6230) *
                          C3933) *
                         C6164 * C1060 -
                     (((C2111 * C795 + C6228 * C863) * C6230 +
                       (C2111 * C753 + C6228 * C757) * C122) *
                          C3933 +
                      ((C2111 * C124 + C6228 * C217) * C6230 +
                       (C2111 * C79 + C6228 * C83) * C122) *
                          C3932) *
                         C6164 * C1059) *
                        C1062)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C6230 * C247) * C6228 * C3932 +
            C4586 * C3933) *
               C6164 * C1059 -
           ((C246 * C1777 + C1934 + C1934 + C6230 * C1931) * C6228 * C3933 +
            (C246 * C453 + C598 + C598 + C6230 * C593) * C6228 * C3932) *
               C6164 * C1060) *
              C1061 +
          ((C1228 * C6228 * C3932 +
            (C246 * C1778 + C1935 + C1935 + C6230 * C1932) * C6228 * C3933) *
               C6164 * C1060 -
           (C1586 * C6228 * C3933 + C264 * C6228 * C3932) * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C122 +
            (C3987 * C123 + C3932 * C291 + C3988 * C796 + C3933 * C928) *
                C6230) *
               C6228 * C6164 * C1059 -
           ((C3988 * C1819 + C3933 * C1969 + C3987 * C495 + C3932 * C627) *
                C6230 +
            (C3988 * C1777 + C3933 * C1857 + C3987 * C453 + C3932 * C529) *
                C122) *
               C6228 * C6164 * C1060) *
              C1061 +
          (((C3987 * C452 + C3932 * C528 + C3988 * C1778 + C3933 * C1858) *
                C122 +
            (C3987 * C494 + C3932 * C626 + C3988 * C1820 + C3933 * C1970) *
                C6230) *
               C6228 * C6164 * C1060 -
           ((C3988 * C795 + C3933 * C927 + C3987 * C124 + C3932 * C292) *
                C6230 +
            (C3988 * C753 + C3933 * C829 + C3987 * C79 + C3932 * C171) * C122) *
               C6228 * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2111 * C78 + C6228 * C82) * C3987 +
            (C2111 * C170 + C6228 * C331) * C3932 + C4540 * C3988 +
            C4646 * C3933) *
               C6230 * C6164 * C1059 -
           (C3829 * C3933 + C3715 * C3988 + C2588 * C3932 + C2487 * C3987) *
               C6230 * C6164 * C1060) *
              C1061 +
          ((C3062 * C3987 + C3171 * C3932 +
            (C2111 * C1778 + C6228 * C1780) * C3988 +
            (C2111 * C1858 + C6228 * C2006) * C3933) *
               C6230 * C6164 * C1060 -
           ((C2111 * C829 + C6228 * C957) * C3933 +
            (C2111 * C753 + C6228 * C757) * C3988 +
            (C2111 * C171 + C6228 * C332) * C3932 +
            (C2111 * C79 + C6228 * C83) * C3987) *
               C6230 * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C6230 * C123) * C3987 +
            (C122 * C170 + C6230 * C361) * C3932 + C4469 * C3988 +
            C4679 * C3933) *
               C6228 * C6164 * C1059 -
           ((C122 * C1857 + C6230 * C2041) * C3933 +
            (C122 * C1777 + C6230 * C1819) * C3988 +
            (C122 * C529 + C6230 * C687) * C3932 +
            (C122 * C453 + C6230 * C495) * C3987) *
               C6228 * C6164 * C1060) *
              C1061 +
          ((C1110 * C3987 + C1342 * C3932 +
            (C122 * C1778 + C6230 * C1820) * C3988 +
            (C122 * C1858 + C6230 * C2042) * C3933) *
               C6228 * C6164 * C1060 -
           (C1700 * C3933 + C1468 * C3988 + C372 * C3932 + C140 * C3987) *
               C6228 * C6164 * C1059) *
              C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4145 * C78 + C4148 + C4148 + C3932 * C402 +
                      C4146 * C754 + C4149 + C4149 + C3933 * C1018) *
                         C6230 * C6228 * C6164 * C1059 -
                     (C4146 * C1777 + C4389 + C4389 + C3933 * C2077 +
                      C4145 * C453 + C4390 + C4390 + C3932 * C717) *
                         C6230 * C6228 * C6164 * C1060) *
                        C1061 +
                    ((C4145 * C452 + C5018 + C5018 + C3932 * C716 +
                      C4146 * C1778 + C5019 + C5019 + C3933 * C2078) *
                         C6230 * C6228 * C6164 * C1060 -
                     (C4146 * C753 + C4150 + C4150 + C3933 * C1017 +
                      C4145 * C79 + C4151 + C4151 + C3932 * C403) *
                         C6230 * C6228 * C6164 * C1059) *
                        C1062)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C3932 +
                      C4431 * C3933) *
                         C6230 * C1419 -
                     (C4432 * C3933 + C4431 * C3932) * C6230 * C1420) *
                        C1059 +
                    ((C3593 * C3932 +
                      (C2110 * C2682 + C2689 + C2689 + C6228 * C2684) * C3933) *
                         C6230 * C1420 -
                     (C3593 * C3933 + C2376 * C3932) * C6230 * C1419) *
                        C1060) *
                   C6138) /
                  (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C6230 * C123) * C2111 +
             (C122 * C82 + C6230 * C127) * C6228) *
                C3932 +
            (C4473 + C4474) * C3933) *
               C1419 -
           ((C4475 + C4476) * C3933 + (C4474 + C4473) * C3932) * C1420) *
              C1059 +
          (((C5422 + C5423) * C3932 + ((C122 * C2682 + C6230 * C2715) * C2111 +
                                       (C122 * C2683 + C6230 * C2716) * C6228) *
                                          C3933) *
               C1420 -
           ((C5423 + C5422) * C3933 + ((C122 * C457 + C6230 * C499) * C6228 +
                                       (C122 * C453 + C6230 * C495) * C2111) *
                                          C3932) *
               C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C2111 +
            (C3987 * C82 + C3932 * C174 + C3988 * C758 + C3933 * C834) *
                C6228) *
               C6230 * C1419 -
           ((C3988 * C759 + C3933 * C835 + C3987 * C758 + C3932 * C834) *
                C6228 +
            (C3988 * C755 + C3933 * C831 + C3987 * C754 + C3932 * C830) *
                C2111) *
               C6230 * C1420) *
              C1059 +
          (((C3987 * C1777 + C3932 * C1857 + C3988 * C2682 + C3933 * C2743) *
                C2111 +
            (C3987 * C1779 + C3932 * C1859 + C3988 * C2683 + C3933 * C2744) *
                C6228) *
               C6230 * C1420 -
           ((C3988 * C1779 + C3933 * C1859 + C3987 * C457 + C3932 * C533) *
                C6228 +
            (C3988 * C1777 + C3933 * C1857 + C3987 * C453 + C3932 * C529) *
                C2111) *
               C6230 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2111 * C78 + C6228 * C82) * C122 +
             (C2111 * C123 + C6228 * C216) * C6230) *
                C3932 +
            (C4544 + C4545) * C3933) *
               C1419 -
           ((C4546 + C4547) * C3933 + (C4545 + C4544) * C3932) * C1420) *
              C1059 +
          (((C5492 + C5493) * C3932 +
            ((C2111 * C2682 + C6228 * C2683) * C122 +
             (C2111 * C2715 + C6228 * C2771) * C6230) *
                C3933) *
               C1420 -
           ((C5493 + C5492) * C3933 + (C2488 * C6230 + C2487 * C122) * C3932) *
               C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C6230 * C247) * C6228 * C3932 +
            C4586 * C3933) *
               C1419 -
           (C4587 * C3933 + C4586 * C3932) * C1420) *
              C1059 +
          ((C5534 * C3932 +
            (C246 * C2682 + C5530 + C5530 + C6230 * C2798) * C6228 * C3933) *
               C1420 -
           (C5534 * C3933 +
            (C246 * C453 + C598 + C598 + C6230 * C593) * C6228 * C3932) *
               C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C122 +
            (C3987 * C123 + C3932 * C291 + C3988 * C796 + C3933 * C928) *
                C6230) *
               C6228 * C1419 -
           ((C3988 * C797 + C3933 * C929 + C3987 * C796 + C3932 * C928) *
                C6230 +
            (C3988 * C755 + C3933 * C831 + C3987 * C754 + C3932 * C830) *
                C122) *
               C6228 * C1420) *
              C1059 +
          (((C3987 * C1777 + C3932 * C1857 + C3988 * C2682 + C3933 * C2743) *
                C122 +
            (C3987 * C1819 + C3932 * C1969 + C3988 * C2715 + C3933 * C2829) *
                C6230) *
               C6228 * C1420 -
           ((C3988 * C1819 + C3933 * C1969 + C3987 * C495 + C3932 * C627) *
                C6230 +
            (C3988 * C1777 + C3933 * C1857 + C3987 * C453 + C3932 * C529) *
                C122) *
               C6228 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2111 * C78 + C6228 * C82) * C3987 +
            (C2111 * C170 + C6228 * C331) * C3932 + C4540 * C3988 +
            C4646 * C3933) *
               C6230 * C1419 -
           (C4647 * C3933 + C4543 * C3988 + C4646 * C3932 + C4540 * C3987) *
               C6230 * C1420) *
              C1059 +
          ((C3715 * C3987 + C3829 * C3932 +
            (C2111 * C2682 + C6228 * C2683) * C3988 +
            (C2111 * C2743 + C6228 * C2856) * C3933) *
               C6230 * C1420 -
           (C3829 * C3933 + C3715 * C3988 + C2588 * C3932 + C2487 * C3987) *
               C6230 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C6230 * C123) * C3987 +
            (C122 * C170 + C6230 * C361) * C3932 + C4469 * C3988 +
            C4679 * C3933) *
               C6228 * C1419 -
           (C4680 * C3933 + C4472 * C3988 + C4679 * C3932 + C4469 * C3987) *
               C6228 * C1420) *
              C1059 +
          ((C5420 * C3987 + C5639 * C3932 +
            (C122 * C2682 + C6230 * C2715) * C3988 +
            (C122 * C2743 + C6230 * C2883) * C3933) *
               C6228 * C1420 -
           (C5639 * C3933 + C5420 * C3988 +
            (C122 * C529 + C6230 * C687) * C3932 +
            (C122 * C453 + C6230 * C495) * C3987) *
               C6228 * C1419) *
              C1060) *
         C6138) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4145 * C78 + C4148 + C4148 + C3932 * C402 +
                      C4146 * C754 + C4149 + C4149 + C3933 * C1018) *
                         C6230 * C6228 * C1419 -
                     (C4146 * C755 + C4708 + C4708 + C3933 * C1019 +
                      C4145 * C754 + C4709 + C4709 + C3932 * C1018) *
                         C6230 * C6228 * C1420) *
                        C1059 +
                    ((C4145 * C1777 + C5674 + C5674 + C3932 * C2077 +
                      C4146 * C2682 + C5675 + C5675 + C3933 * C2910) *
                         C6230 * C6228 * C1420 -
                     (C4146 * C1777 + C4389 + C4389 + C3933 * C2077 +
                      C4145 * C453 + C4390 + C4390 + C3932 * C717) *
                         C6230 * C6228 * C1419) *
                        C1060) *
                   C6138) /
                  (p * q * std::sqrt(p + q));
    d2eexx[12] += (-std::pow(Pi, 2.5) *
                   (((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C3932 +
                     (C2110 * C754 + C2687 + C2687 + C6228 * C762) * C3933) *
                        C6230 * C6164 * C448 -
                    (C3593 * C3933 + C2376 * C3932) * C6230 * C6164 * C449 +
                    (C2377 * C3932 +
                     (C2110 * C3584 + C3590 + C3590 + C6228 * C3586) * C3933) *
                        C6230 * C6164 * C450) *
                   C6138) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C3932 +
                     (C2110 * C754 + C2687 + C2687 + C6228 * C762) * C3933) *
                        C6230 * C6164 * C6150 * C71 -
                    ((C2110 * C753 + C3275 + C3275 + C6228 * C761) * C3933 +
                     (C2110 * C79 + C2116 + C2116 + C6228 * C87) * C3932) *
                        C6230 * C6164 * C6150 * C72 +
                    ((C2110 * C80 + C2117 + C2117 + C6228 * C88) * C3932 +
                     (C2110 * C1421 + C3935 + C3935 + C6228 * C1423) * C3933) *
                        C6230 * C6164 * C6150 * C73)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C3932 +
                     C4431 * C3933) *
                        C6230 * C750 -
                    (C4432 * C3933 + C4431 * C3932) * C6230 * C751 +
                    (C4432 * C3932 +
                     (C2110 * C4418 + C4426 + C4426 + C6228 * C4420) * C3933) *
                        C6230 * C752) *
                   C6150 * C6138) /
                      (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C122 * C78 + C6230 * C123) * C2111 +
            (C122 * C82 + C6230 * C127) * C6228) *
               C3932 +
           ((C122 * C754 + C6230 * C796) * C2111 +
            (C122 * C758 + C6230 * C800) * C6228) *
               C3933) *
              C6164 * C448 -
          (((C122 * C1779 + C6230 * C1821) * C6228 +
            (C122 * C1777 + C6230 * C1819) * C2111) *
               C3933 +
           ((C122 * C457 + C6230 * C499) * C6228 +
            (C122 * C453 + C6230 * C495) * C2111) *
               C3932) *
              C6164 * C449 +
          (((C122 * C454 + C6230 * C496) * C2111 +
            (C122 * C458 + C6230 * C500) * C6228) *
               C3932 +
           ((C122 * C3584 + C6230 * C3628) * C2111 +
            (C122 * C3585 + C6230 * C3629) * C6228) *
               C3933) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C122 * C78 + C6230 * C123) * C2111 +
                                (C122 * C82 + C6230 * C127) * C6228) *
                                   C3932 +
                               ((C122 * C754 + C6230 * C796) * C2111 +
                                (C122 * C758 + C6230 * C800) * C6228) *
                                   C3933) *
                                  C6164 * C6150 * C71 -
                              ((C1467 * C6228 + C1468 * C2111) * C3933 +
                               (C141 * C6228 + C140 * C2111) * C3932) *
                                  C6164 * C6150 * C72 +
                              ((C143 * C2111 + C142 * C6228) * C3932 +
                               ((C122 * C1421 + C6230 * C1460) * C2111 +
                                (C122 * C1422 + C6230 * C1461) * C6228) *
                                   C3933) *
                                  C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C6230 * C123) * C2111 +
            (C122 * C82 + C6230 * C127) * C6228) *
               C3932 +
           (C4473 + C4474) * C3933) *
              C750 -
          ((C4475 + C4476) * C3933 + (C4474 + C4473) * C3932) * C751 +
          ((C4476 + C4475) * C3932 + ((C122 * C4418 + C6230 * C4458) * C2111 +
                                      (C122 * C4419 + C6230 * C4459) * C6228) *
                                         C3933) *
              C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (-std::pow(Pi, 2.5) *
         (((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C2111 +
           (C3987 * C82 + C3932 * C174 + C3988 * C758 + C3933 * C834) * C6228) *
              C6230 * C6164 * C448 -
          ((C3988 * C1779 + C3933 * C1859 + C3987 * C457 + C3932 * C533) *
               C6228 +
           (C3988 * C1777 + C3933 * C1857 + C3987 * C453 + C3932 * C529) *
               C2111) *
              C6230 * C6164 * C449 +
          ((C3987 * C454 + C3932 * C530 + C3988 * C3584 + C3933 * C3664) *
               C2111 +
           (C3987 * C458 + C3932 * C534 + C3988 * C3585 + C3933 * C3665) *
               C6228) *
              C6230 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C2111 +
           (C3987 * C82 + C3932 * C174 + C3988 * C758 + C3933 * C834) * C6228) *
              C6230 * C6164 * C6150 * C71 -
          ((C3988 * C757 + C3933 * C833 + C3987 * C83 + C3932 * C175) * C6228 +
           (C3988 * C753 + C3933 * C829 + C3987 * C79 + C3932 * C171) * C2111) *
              C6230 * C6164 * C6150 * C72 +
          ((C3987 * C80 + C3932 * C172 + C3988 * C1421 + C3933 * C1502) *
               C2111 +
           (C3987 * C84 + C3932 * C176 + C3988 * C1422 + C3933 * C1503) *
               C6228) *
              C6230 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C2111 +
           (C3987 * C82 + C3932 * C174 + C3988 * C758 + C3933 * C834) * C6228) *
              C6230 * C750 -
          ((C3988 * C759 + C3933 * C835 + C3987 * C758 + C3932 * C834) * C6228 +
           (C3988 * C755 + C3933 * C831 + C3987 * C754 + C3932 * C830) *
               C2111) *
              C6230 * C751 +
          ((C3987 * C755 + C3932 * C831 + C3988 * C4418 + C3933 * C4502) *
               C2111 +
           (C3987 * C759 + C3932 * C835 + C3988 * C4419 + C3933 * C4503) *
               C6228) *
              C6230 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C2111 * C78 + C6228 * C82) * C122 +
            (C2111 * C123 + C6228 * C216) * C6230) *
               C3932 +
           ((C2111 * C754 + C6228 * C758) * C122 +
            (C2111 * C796 + C6228 * C864) * C6230) *
               C3933) *
              C6164 * C448 -
          ((C3714 * C6230 + C3715 * C122) * C3933 +
           (C2488 * C6230 + C2487 * C122) * C3932) *
              C6164 * C449 +
          ((C2490 * C122 + C2489 * C6230) * C3932 +
           ((C2111 * C3584 + C6228 * C3585) * C122 +
            (C2111 * C3628 + C6228 * C3708) * C6230) *
               C3933) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C2111 * C78 + C6228 * C82) * C122 +
                                (C2111 * C123 + C6228 * C216) * C6230) *
                                   C3932 +
                               ((C2111 * C754 + C6228 * C758) * C122 +
                                (C2111 * C796 + C6228 * C864) * C6230) *
                                   C3933) *
                                  C6164 * C6150 * C71 -
                              (((C2111 * C795 + C6228 * C863) * C6230 +
                                (C2111 * C753 + C6228 * C757) * C122) *
                                   C3933 +
                               ((C2111 * C124 + C6228 * C217) * C6230 +
                                (C2111 * C79 + C6228 * C83) * C122) *
                                   C3932) *
                                  C6164 * C6150 * C72 +
                              (((C2111 * C80 + C6228 * C84) * C122 +
                                (C2111 * C125 + C6228 * C218) * C6230) *
                                   C3932 +
                               ((C2111 * C1421 + C6228 * C1422) * C122 +
                                (C2111 * C1460 + C6228 * C1544) * C6230) *
                                   C3933) *
                                  C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C2111 * C78 + C6228 * C82) * C122 +
            (C2111 * C123 + C6228 * C216) * C6230) *
               C3932 +
           (C4544 + C4545) * C3933) *
              C750 -
          ((C4546 + C4547) * C3933 + (C4545 + C4544) * C3932) * C751 +
          ((C4547 + C4546) * C3932 + ((C2111 * C4418 + C6228 * C4419) * C122 +
                                      (C2111 * C4458 + C6228 * C4530) * C6230) *
                                         C3933) *
              C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (-std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C6230 * C247) * C6228 * C3932 +
           (C246 * C754 + C899 + C899 + C6230 * C894) * C6228 * C3933) *
              C6164 * C448 -
          ((C246 * C1777 + C1934 + C1934 + C6230 * C1931) * C6228 * C3933 +
           (C246 * C453 + C598 + C598 + C6230 * C593) * C6228 * C3932) *
              C6164 * C449 +
          ((C246 * C454 + C599 + C599 + C6230 * C594) * C6228 * C3932 +
           (C246 * C3584 + C4284 + C4284 + C6230 * C3749) * C6228 * C3933) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C6230 * C247) * C6228 * C3932 +
           (C246 * C754 + C899 + C899 + C6230 * C894) * C6228 * C3933) *
              C6164 * C6150 * C71 -
          (C1586 * C6228 * C3933 + C264 * C6228 * C3932) * C6164 * C6150 * C72 +
          (C265 * C6228 * C3932 +
           (C246 * C1421 + C1583 + C1583 + C6230 * C1579) * C6228 * C3933) *
              C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C6230 * C247) * C6228 * C3932 +
           C4586 * C3933) *
              C750 -
          (C4587 * C3933 + C4586 * C3932) * C751 +
          (C4587 * C3932 +
           (C246 * C4418 + C4579 + C4579 + C6230 * C4573) * C6228 * C3933) *
              C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (-std::pow(Pi, 2.5) *
         (((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C122 +
           (C3987 * C123 + C3932 * C291 + C3988 * C796 + C3933 * C928) *
               C6230) *
              C6228 * C6164 * C448 -
          ((C3988 * C1819 + C3933 * C1969 + C3987 * C495 + C3932 * C627) *
               C6230 +
           (C3988 * C1777 + C3933 * C1857 + C3987 * C453 + C3932 * C529) *
               C122) *
              C6228 * C6164 * C449 +
          ((C3987 * C454 + C3932 * C530 + C3988 * C3584 + C3933 * C3664) *
               C122 +
           (C3987 * C496 + C3932 * C628 + C3988 * C3628 + C3933 * C3786) *
               C6230) *
              C6228 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C122 +
           (C3987 * C123 + C3932 * C291 + C3988 * C796 + C3933 * C928) *
               C6230) *
              C6228 * C6164 * C6150 * C71 -
          ((C3988 * C795 + C3933 * C927 + C3987 * C124 + C3932 * C292) * C6230 +
           (C3988 * C753 + C3933 * C829 + C3987 * C79 + C3932 * C171) * C122) *
              C6228 * C6164 * C6150 * C72 +
          ((C3987 * C80 + C3932 * C172 + C3988 * C1421 + C3933 * C1502) * C122 +
           (C3987 * C125 + C3932 * C293 + C3988 * C1460 + C3933 * C1620) *
               C6230) *
              C6228 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C122 +
           (C3987 * C123 + C3932 * C291 + C3988 * C796 + C3933 * C928) *
               C6230) *
              C6228 * C750 -
          ((C3988 * C797 + C3933 * C929 + C3987 * C796 + C3932 * C928) * C6230 +
           (C3988 * C755 + C3933 * C831 + C3987 * C754 + C3932 * C830) * C122) *
              C6228 * C751 +
          ((C3987 * C755 + C3932 * C831 + C3988 * C4418 + C3933 * C4502) *
               C122 +
           (C3987 * C797 + C3932 * C929 + C3988 * C4458 + C3933 * C4613) *
               C6230) *
              C6228 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (-std::pow(Pi, 2.5) *
         (((C2111 * C78 + C6228 * C82) * C3987 +
           (C2111 * C170 + C6228 * C331) * C3932 +
           (C2111 * C754 + C6228 * C758) * C3988 +
           (C2111 * C830 + C6228 * C958) * C3933) *
              C6230 * C6164 * C448 -
          (C3829 * C3933 + C3715 * C3988 + C2588 * C3932 + C2487 * C3987) *
              C6230 * C6164 * C449 +
          (C2490 * C3987 + C2589 * C3932 +
           (C2111 * C3584 + C6228 * C3585) * C3988 +
           (C2111 * C3664 + C6228 * C3824) * C3933) *
              C6230 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C2111 * C78 + C6228 * C82) * C3987 +
                               (C2111 * C170 + C6228 * C331) * C3932 +
                               (C2111 * C754 + C6228 * C758) * C3988 +
                               (C2111 * C830 + C6228 * C958) * C3933) *
                                  C6230 * C6164 * C6150 * C71 -
                              ((C2111 * C829 + C6228 * C957) * C3933 +
                               (C2111 * C753 + C6228 * C757) * C3988 +
                               (C2111 * C171 + C6228 * C332) * C3932 +
                               (C2111 * C79 + C6228 * C83) * C3987) *
                                  C6230 * C6164 * C6150 * C72 +
                              ((C2111 * C80 + C6228 * C84) * C3987 +
                               (C2111 * C172 + C6228 * C333) * C3932 +
                               (C2111 * C1421 + C6228 * C1422) * C3988 +
                               (C2111 * C1502 + C6228 * C1660) * C3933) *
                                  C6230 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2111 * C78 + C6228 * C82) * C3987 +
           (C2111 * C170 + C6228 * C331) * C3932 + C4540 * C3988 +
           C4646 * C3933) *
              C6230 * C750 -
          (C4647 * C3933 + C4543 * C3988 + C4646 * C3932 + C4540 * C3987) *
              C6230 * C751 +
          (C4543 * C3987 + C4647 * C3932 +
           (C2111 * C4418 + C6228 * C4419) * C3988 +
           (C2111 * C4502 + C6228 * C4640) * C3933) *
              C6230 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (-std::pow(Pi, 2.5) *
         (((C122 * C78 + C6230 * C123) * C3987 +
           (C122 * C170 + C6230 * C361) * C3932 +
           (C122 * C754 + C6230 * C796) * C3988 +
           (C122 * C830 + C6230 * C988) * C3933) *
              C6228 * C6164 * C448 -
          ((C122 * C1857 + C6230 * C2041) * C3933 +
           (C122 * C1777 + C6230 * C1819) * C3988 +
           (C122 * C529 + C6230 * C687) * C3932 +
           (C122 * C453 + C6230 * C495) * C3987) *
              C6228 * C6164 * C449 +
          ((C122 * C454 + C6230 * C496) * C3987 +
           (C122 * C530 + C6230 * C688) * C3932 +
           (C122 * C3584 + C6230 * C3628) * C3988 +
           (C122 * C3664 + C6230 * C3864) * C3933) *
              C6228 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C122 * C78 + C6230 * C123) * C3987 +
           (C122 * C170 + C6230 * C361) * C3932 +
           (C122 * C754 + C6230 * C796) * C3988 +
           (C122 * C830 + C6230 * C988) * C3933) *
              C6228 * C6164 * C6150 * C71 -
          (C1700 * C3933 + C1468 * C3988 + C372 * C3932 + C140 * C3987) *
              C6228 * C6164 * C6150 * C72 +
          (C143 * C3987 + C373 * C3932 +
           (C122 * C1421 + C6230 * C1460) * C3988 +
           (C122 * C1502 + C6230 * C1695) * C3933) *
              C6228 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C78 + C6230 * C123) * C3987 +
           (C122 * C170 + C6230 * C361) * C3932 + C4469 * C3988 +
           C4679 * C3933) *
              C6228 * C750 -
          (C4680 * C3933 + C4472 * C3988 + C4679 * C3932 + C4469 * C3987) *
              C6228 * C751 +
          (C4472 * C3987 + C4680 * C3932 +
           (C122 * C4418 + C6230 * C4458) * C3988 +
           (C122 * C4502 + C6230 * C4673) * C3933) *
              C6228 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (-std::pow(Pi, 2.5) *
         ((C4145 * C78 + C4148 + C4148 + C3932 * C402 + C4146 * C754 + C4149 +
           C4149 + C3933 * C1018) *
              C6230 * C6228 * C6164 * C448 -
          (C4146 * C1777 + C4389 + C4389 + C3933 * C2077 + C4145 * C453 +
           C4390 + C4390 + C3932 * C717) *
              C6230 * C6228 * C6164 * C449 +
          (C4145 * C454 + C4391 + C4391 + C3932 * C718 + C4146 * C3584 + C4392 +
           C4392 + C3933 * C3899) *
              C6230 * C6228 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C4145 * C78 + C4148 + C4148 + C3932 * C402 +
                               C4146 * C754 + C4149 + C4149 + C3933 * C1018) *
                                  C6230 * C6228 * C6164 * C6150 * C71 -
                              (C4146 * C753 + C4150 + C4150 + C3933 * C1017 +
                               C4145 * C79 + C4151 + C4151 + C3932 * C403) *
                                  C6230 * C6228 * C6164 * C6150 * C72 +
                              (C4145 * C80 + C4152 + C4152 + C3932 * C404 +
                               C4146 * C1421 + C4153 + C4153 + C3933 * C1735) *
                                  C6230 * C6228 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C4145 * C78 + C4148 + C4148 + C3932 * C402 + C4146 * C754 + C4149 +
           C4149 + C3933 * C1018) *
              C6230 * C6228 * C750 -
          (C4146 * C755 + C4708 + C4708 + C3933 * C1019 + C4145 * C754 + C4709 +
           C4709 + C3932 * C1018) *
              C6230 * C6228 * C751 +
          (C4145 * C755 + C4710 + C4710 + C3932 * C1019 + C4146 * C4418 +
           C4711 + C4711 + C3933 * C4706) *
              C6230 * C6228 * C752) *
         C6150 * C6138) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C3932 +
                      C4431 * C3933) *
                         C6230 * C1419 -
                     (C4432 * C3933 + C4431 * C3932) * C6230 * C1420) *
                        C6150 * C1061 +
                    ((C5059 * C3932 +
                      (C2110 * C756 + C5056 + C5056 + C6228 * C764) * C3933) *
                         C6230 * C1420 -
                     (C5059 * C3933 +
                      (C2110 * C79 + C2116 + C2116 + C6228 * C87) * C3932) *
                         C6230 * C1419) *
                        C6150 * C1062)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C6230 * C123) * C2111 +
             (C122 * C82 + C6230 * C127) * C6228) *
                C3932 +
            (C4473 + C4474) * C3933) *
               C1419 -
           ((C4475 + C4476) * C3933 + (C4474 + C4473) * C3932) * C1420) *
              C6150 * C1061 +
          (((C5094 + C5095) * C3932 + ((C122 * C756 + C6230 * C798) * C2111 +
                                       (C122 * C760 + C6230 * C802) * C6228) *
                                          C3933) *
               C1420 -
           ((C5095 + C5094) * C3933 + (C141 * C6228 + C140 * C2111) * C3932) *
               C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C2111 +
            (C3987 * C82 + C3932 * C174 + C3988 * C758 + C3933 * C834) *
                C6228) *
               C6230 * C1419 -
           ((C3988 * C759 + C3933 * C835 + C3987 * C758 + C3932 * C834) *
                C6228 +
            (C3988 * C755 + C3933 * C831 + C3987 * C754 + C3932 * C830) *
                C2111) *
               C6230 * C1420) *
              C6150 * C1061 +
          (((C3987 * C753 + C3932 * C829 + C3988 * C756 + C3933 * C832) *
                C2111 +
            (C3987 * C757 + C3932 * C833 + C3988 * C760 + C3933 * C836) *
                C6228) *
               C6230 * C1420 -
           ((C3988 * C757 + C3933 * C833 + C3987 * C83 + C3932 * C175) * C6228 +
            (C3988 * C753 + C3933 * C829 + C3987 * C79 + C3932 * C171) *
                C2111) *
               C6230 * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2111 * C78 + C6228 * C82) * C122 +
             (C2111 * C123 + C6228 * C216) * C6230) *
                C3932 +
            (C4544 + C4545) * C3933) *
               C1419 -
           ((C4546 + C4547) * C3933 + (C4545 + C4544) * C3932) * C1420) *
              C6150 * C1061 +
          (((C5170 + C5171) * C3932 + ((C2111 * C756 + C6228 * C760) * C122 +
                                       (C2111 * C798 + C6228 * C866) * C6230) *
                                          C3933) *
               C1420 -
           ((C5171 + C5170) * C3933 + ((C2111 * C124 + C6228 * C217) * C6230 +
                                       (C2111 * C79 + C6228 * C83) * C122) *
                                          C3932) *
               C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C6230 * C247) * C6228 * C3932 +
            C4586 * C3933) *
               C1419 -
           (C4587 * C3933 + C4586 * C3932) * C1420) *
              C6150 * C1061 +
          ((C5206 * C3932 +
            (C246 * C756 + C901 + C901 + C6230 * C896) * C6228 * C3933) *
               C1420 -
           (C5206 * C3933 + C264 * C6228 * C3932) * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C122 +
            (C3987 * C123 + C3932 * C291 + C3988 * C796 + C3933 * C928) *
                C6230) *
               C6228 * C1419 -
           ((C3988 * C797 + C3933 * C929 + C3987 * C796 + C3932 * C928) *
                C6230 +
            (C3988 * C755 + C3933 * C831 + C3987 * C754 + C3932 * C830) *
                C122) *
               C6228 * C1420) *
              C6150 * C1061 +
          (((C3987 * C753 + C3932 * C829 + C3988 * C756 + C3933 * C832) * C122 +
            (C3987 * C795 + C3932 * C927 + C3988 * C798 + C3933 * C930) *
                C6230) *
               C6228 * C1420 -
           ((C3988 * C795 + C3933 * C927 + C3987 * C124 + C3932 * C292) *
                C6230 +
            (C3988 * C753 + C3933 * C829 + C3987 * C79 + C3932 * C171) * C122) *
               C6228 * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2111 * C78 + C6228 * C82) * C3987 +
            (C2111 * C170 + C6228 * C331) * C3932 + C4540 * C3988 +
            C4646 * C3933) *
               C6230 * C1419 -
           (C4647 * C3933 + C4543 * C3988 + C4646 * C3932 + C4540 * C3987) *
               C6230 * C1420) *
              C6150 * C1061 +
          ((C5168 * C3987 + C5277 * C3932 +
            (C2111 * C756 + C6228 * C760) * C3988 +
            (C2111 * C832 + C6228 * C960) * C3933) *
               C6230 * C1420 -
           (C5277 * C3933 + C5168 * C3988 +
            (C2111 * C171 + C6228 * C332) * C3932 +
            (C2111 * C79 + C6228 * C83) * C3987) *
               C6230 * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C6230 * C123) * C3987 +
            (C122 * C170 + C6230 * C361) * C3932 + C4469 * C3988 +
            C4679 * C3933) *
               C6228 * C1419 -
           (C4680 * C3933 + C4472 * C3988 + C4679 * C3932 + C4469 * C3987) *
               C6228 * C1420) *
              C6150 * C1061 +
          ((C1468 * C3987 + C1700 * C3932 +
            (C122 * C756 + C6230 * C798) * C3988 +
            (C122 * C832 + C6230 * C990) * C3933) *
               C6228 * C1420 -
           (C1700 * C3933 + C1468 * C3988 + C372 * C3932 + C140 * C3987) *
               C6228 * C1419) *
              C6150 * C1062)) /
        (p * q * std::sqrt(p + q));
    d2eezz[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4145 * C78 + C4148 + C4148 + C3932 * C402 +
                      C4146 * C754 + C4149 + C4149 + C3933 * C1018) *
                         C6230 * C6228 * C1419 -
                     (C4146 * C755 + C4708 + C4708 + C3933 * C1019 +
                      C4145 * C754 + C4709 + C4709 + C3932 * C1018) *
                         C6230 * C6228 * C1420) *
                        C6150 * C1061 +
                    ((C4145 * C753 + C5346 + C5346 + C3932 * C1017 +
                      C4146 * C756 + C5347 + C5347 + C3933 * C1020) *
                         C6230 * C6228 * C1420 -
                     (C4146 * C753 + C4150 + C4150 + C3933 * C1017 +
                      C4145 * C79 + C4151 + C4151 + C3932 * C403) *
                         C6230 * C6228 * C1419) *
                        C6150 * C1062)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C3932 +
                     (C2110 * C754 + C2687 + C2687 + C6228 * C762) * C3933) *
                        C6230 * C6164 * C6150 * C71 -
                    ((C2110 * C753 + C3275 + C3275 + C6228 * C761) * C3933 +
                     (C2110 * C79 + C2116 + C2116 + C6228 * C87) * C3932) *
                        C6230 * C6164 * C6150 * C72 +
                    ((C2110 * C80 + C2117 + C2117 + C6228 * C88) * C3932 +
                     (C2110 * C1421 + C3935 + C3935 + C6228 * C1423) * C3933) *
                        C6230 * C6164 * C6150 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2110 * C78 + C2113 + C2113 + C6228 * C86) * C3932 +
                     (C2110 * C754 + C2687 + C2687 + C6228 * C762) * C3933) *
                        C6230 * C6164 * C448 -
                    (C3593 * C3933 + C2376 * C3932) * C6230 * C6164 * C449 +
                    (C2377 * C3932 +
                     (C2110 * C3584 + C3590 + C3590 + C6228 * C3586) * C3933) *
                        C6230 * C6164 * C450) *
                   C6138) /
                      (p * q * std::sqrt(p + q));
    d2eexy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C122 * C78 + C6230 * C123) * C2111 +
                      (C122 * C82 + C6230 * C127) * C6228) *
                         C3932 +
                     ((C122 * C754 + C6230 * C796) * C2111 +
                      (C122 * C758 + C6230 * C800) * C6228) *
                         C3933) *
                        C6164 * C6150 * C71 -
                    ((C1467 * C6228 + C1468 * C2111) * C3933 +
                     (C141 * C6228 + C140 * C2111) * C3932) *
                        C6164 * C6150 * C72 +
                    ((C143 * C2111 + C142 * C6228) * C3932 +
                     ((C122 * C1421 + C6230 * C1460) * C2111 +
                      (C122 * C1422 + C6230 * C1461) * C6228) *
                         C3933) *
                        C6164 * C6150 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C122 * C78 + C6230 * C123) * C2111 +
                      (C122 * C82 + C6230 * C127) * C6228) *
                         C3932 +
                     ((C122 * C754 + C6230 * C796) * C2111 +
                      (C122 * C758 + C6230 * C800) * C6228) *
                         C3933) *
                        C6164 * C448 -
                    (((C122 * C1779 + C6230 * C1821) * C6228 +
                      (C122 * C1777 + C6230 * C1819) * C2111) *
                         C3933 +
                     ((C122 * C457 + C6230 * C499) * C6228 +
                      (C122 * C453 + C6230 * C495) * C2111) *
                         C3932) *
                        C6164 * C449 +
                    (((C122 * C454 + C6230 * C496) * C2111 +
                      (C122 * C458 + C6230 * C500) * C6228) *
                         C3932 +
                     ((C122 * C3584 + C6230 * C3628) * C2111 +
                      (C122 * C3585 + C6230 * C3629) * C6228) *
                         C3933) *
                        C6164 * C450) *
                   C6138) /
                      (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C2111 +
           (C3987 * C82 + C3932 * C174 + C3988 * C758 + C3933 * C834) * C6228) *
              C6230 * C6164 * C6150 * C71 -
          ((C3988 * C757 + C3933 * C833 + C3987 * C83 + C3932 * C175) * C6228 +
           (C3988 * C753 + C3933 * C829 + C3987 * C79 + C3932 * C171) * C2111) *
              C6230 * C6164 * C6150 * C72 +
          ((C3987 * C80 + C3932 * C172 + C3988 * C1421 + C3933 * C1502) *
               C2111 +
           (C3987 * C84 + C3932 * C176 + C3988 * C1422 + C3933 * C1503) *
               C6228) *
              C6230 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C2111 +
           (C3987 * C82 + C3932 * C174 + C3988 * C758 + C3933 * C834) * C6228) *
              C6230 * C6164 * C448 -
          ((C3988 * C1779 + C3933 * C1859 + C3987 * C457 + C3932 * C533) *
               C6228 +
           (C3988 * C1777 + C3933 * C1857 + C3987 * C453 + C3932 * C529) *
               C2111) *
              C6230 * C6164 * C449 +
          ((C3987 * C454 + C3932 * C530 + C3988 * C3584 + C3933 * C3664) *
               C2111 +
           (C3987 * C458 + C3932 * C534 + C3988 * C3585 + C3933 * C3665) *
               C6228) *
              C6230 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C2111 * C78 + C6228 * C82) * C122 +
                      (C2111 * C123 + C6228 * C216) * C6230) *
                         C3932 +
                     ((C2111 * C754 + C6228 * C758) * C122 +
                      (C2111 * C796 + C6228 * C864) * C6230) *
                         C3933) *
                        C6164 * C6150 * C71 -
                    (((C2111 * C795 + C6228 * C863) * C6230 +
                      (C2111 * C753 + C6228 * C757) * C122) *
                         C3933 +
                     ((C2111 * C124 + C6228 * C217) * C6230 +
                      (C2111 * C79 + C6228 * C83) * C122) *
                         C3932) *
                        C6164 * C6150 * C72 +
                    (((C2111 * C80 + C6228 * C84) * C122 +
                      (C2111 * C125 + C6228 * C218) * C6230) *
                         C3932 +
                     ((C2111 * C1421 + C6228 * C1422) * C122 +
                      (C2111 * C1460 + C6228 * C1544) * C6230) *
                         C3933) *
                        C6164 * C6150 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C2111 * C78 + C6228 * C82) * C122 +
                      (C2111 * C123 + C6228 * C216) * C6230) *
                         C3932 +
                     ((C2111 * C754 + C6228 * C758) * C122 +
                      (C2111 * C796 + C6228 * C864) * C6230) *
                         C3933) *
                        C6164 * C448 -
                    ((C3714 * C6230 + C3715 * C122) * C3933 +
                     (C2488 * C6230 + C2487 * C122) * C3932) *
                        C6164 * C449 +
                    ((C2490 * C122 + C2489 * C6230) * C3932 +
                     ((C2111 * C3584 + C6228 * C3585) * C122 +
                      (C2111 * C3628 + C6228 * C3708) * C6230) *
                         C3933) *
                        C6164 * C450) *
                   C6138) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C6230 * C247) * C6228 * C3932 +
           (C246 * C754 + C899 + C899 + C6230 * C894) * C6228 * C3933) *
              C6164 * C6150 * C71 -
          (C1586 * C6228 * C3933 + C264 * C6228 * C3932) * C6164 * C6150 * C72 +
          (C265 * C6228 * C3932 +
           (C246 * C1421 + C1583 + C1583 + C6230 * C1579) * C6228 * C3933) *
              C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C6230 * C247) * C6228 * C3932 +
           (C246 * C754 + C899 + C899 + C6230 * C894) * C6228 * C3933) *
              C6164 * C448 -
          ((C246 * C1777 + C1934 + C1934 + C6230 * C1931) * C6228 * C3933 +
           (C246 * C453 + C598 + C598 + C6230 * C593) * C6228 * C3932) *
              C6164 * C449 +
          ((C246 * C454 + C599 + C599 + C6230 * C594) * C6228 * C3932 +
           (C246 * C3584 + C4284 + C4284 + C6230 * C3749) * C6228 * C3933) *
              C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C122 +
           (C3987 * C123 + C3932 * C291 + C3988 * C796 + C3933 * C928) *
               C6230) *
              C6228 * C6164 * C6150 * C71 -
          ((C3988 * C795 + C3933 * C927 + C3987 * C124 + C3932 * C292) * C6230 +
           (C3988 * C753 + C3933 * C829 + C3987 * C79 + C3932 * C171) * C122) *
              C6228 * C6164 * C6150 * C72 +
          ((C3987 * C80 + C3932 * C172 + C3988 * C1421 + C3933 * C1502) * C122 +
           (C3987 * C125 + C3932 * C293 + C3988 * C1460 + C3933 * C1620) *
               C6230) *
              C6228 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3987 * C78 + C3932 * C170 + C3988 * C754 + C3933 * C830) * C122 +
           (C3987 * C123 + C3932 * C291 + C3988 * C796 + C3933 * C928) *
               C6230) *
              C6228 * C6164 * C448 -
          ((C3988 * C1819 + C3933 * C1969 + C3987 * C495 + C3932 * C627) *
               C6230 +
           (C3988 * C1777 + C3933 * C1857 + C3987 * C453 + C3932 * C529) *
               C122) *
              C6228 * C6164 * C449 +
          ((C3987 * C454 + C3932 * C530 + C3988 * C3584 + C3933 * C3664) *
               C122 +
           (C3987 * C496 + C3932 * C628 + C3988 * C3628 + C3933 * C3786) *
               C6230) *
              C6228 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2111 * C78 + C6228 * C82) * C3987 +
           (C2111 * C170 + C6228 * C331) * C3932 +
           (C2111 * C754 + C6228 * C758) * C3988 +
           (C2111 * C830 + C6228 * C958) * C3933) *
              C6230 * C6164 * C6150 * C71 -
          ((C2111 * C829 + C6228 * C957) * C3933 +
           (C2111 * C753 + C6228 * C757) * C3988 +
           (C2111 * C171 + C6228 * C332) * C3932 +
           (C2111 * C79 + C6228 * C83) * C3987) *
              C6230 * C6164 * C6150 * C72 +
          ((C2111 * C80 + C6228 * C84) * C3987 +
           (C2111 * C172 + C6228 * C333) * C3932 +
           (C2111 * C1421 + C6228 * C1422) * C3988 +
           (C2111 * C1502 + C6228 * C1660) * C3933) *
              C6230 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2111 * C78 + C6228 * C82) * C3987 +
           (C2111 * C170 + C6228 * C331) * C3932 +
           (C2111 * C754 + C6228 * C758) * C3988 +
           (C2111 * C830 + C6228 * C958) * C3933) *
              C6230 * C6164 * C448 -
          (C3829 * C3933 + C3715 * C3988 + C2588 * C3932 + C2487 * C3987) *
              C6230 * C6164 * C449 +
          (C2490 * C3987 + C2589 * C3932 +
           (C2111 * C3584 + C6228 * C3585) * C3988 +
           (C2111 * C3664 + C6228 * C3824) * C3933) *
              C6230 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C122 * C78 + C6230 * C123) * C3987 +
           (C122 * C170 + C6230 * C361) * C3932 +
           (C122 * C754 + C6230 * C796) * C3988 +
           (C122 * C830 + C6230 * C988) * C3933) *
              C6228 * C6164 * C6150 * C71 -
          (C1700 * C3933 + C1468 * C3988 + C372 * C3932 + C140 * C3987) *
              C6228 * C6164 * C6150 * C72 +
          (C143 * C3987 + C373 * C3932 +
           (C122 * C1421 + C6230 * C1460) * C3988 +
           (C122 * C1502 + C6230 * C1695) * C3933) *
              C6228 * C6164 * C6150 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C122 * C78 + C6230 * C123) * C3987 +
           (C122 * C170 + C6230 * C361) * C3932 +
           (C122 * C754 + C6230 * C796) * C3988 +
           (C122 * C830 + C6230 * C988) * C3933) *
              C6228 * C6164 * C448 -
          ((C122 * C1857 + C6230 * C2041) * C3933 +
           (C122 * C1777 + C6230 * C1819) * C3988 +
           (C122 * C529 + C6230 * C687) * C3932 +
           (C122 * C453 + C6230 * C495) * C3987) *
              C6228 * C6164 * C449 +
          ((C122 * C454 + C6230 * C496) * C3987 +
           (C122 * C530 + C6230 * C688) * C3932 +
           (C122 * C3584 + C6230 * C3628) * C3988 +
           (C122 * C3664 + C6230 * C3864) * C3933) *
              C6228 * C6164 * C450) *
         C6138) /
            (p * q * std::sqrt(p + q));
    d2eezz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C4145 * C78 + C4148 + C4148 + C3932 * C402 + C4146 * C754 +
                     C4149 + C4149 + C3933 * C1018) *
                        C6230 * C6228 * C6164 * C6150 * C71 -
                    (C4146 * C753 + C4150 + C4150 + C3933 * C1017 +
                     C4145 * C79 + C4151 + C4151 + C3932 * C403) *
                        C6230 * C6228 * C6164 * C6150 * C72 +
                    (C4145 * C80 + C4152 + C4152 + C3932 * C404 +
                     C4146 * C1421 + C4153 + C4153 + C3933 * C1735) *
                        C6230 * C6228 * C6164 * C6150 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C4145 * C78 + C4148 + C4148 + C3932 * C402 + C4146 * C754 +
                     C4149 + C4149 + C3933 * C1018) *
                        C6230 * C6228 * C6164 * C448 -
                    (C4146 * C1777 + C4389 + C4389 + C3933 * C2077 +
                     C4145 * C453 + C4390 + C4390 + C3932 * C717) *
                        C6230 * C6228 * C6164 * C449 +
                    (C4145 * C454 + C4391 + C4391 + C3932 * C718 +
                     C4146 * C3584 + C4392 + C4392 + C3933 * C3899) *
                        C6230 * C6228 * C6164 * C450) *
                   C6138) /
                      (p * q * std::sqrt(p + q));
}
