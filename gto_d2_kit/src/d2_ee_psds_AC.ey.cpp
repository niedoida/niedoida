/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_psds_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1020_13(const double ae,
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
    const double C5644 = xA - xB;
    const double C5643 = ae + be;
    const double C5657 = ce * de;
    const double C5656 = 0 * de;
    const double C5655 = xC - xD;
    const double C5654 = ce + de;
    const double C5684 = 0 * de;
    const double C5683 = yC - yD;
    const double C5700 = 0 * de;
    const double C5699 = zC - zD;
    const double C5726 = yA - yB;
    const double C5733 = zA - zB;
    const double C5739 = p + q;
    const double C5738 = p * q;
    const double C5744 = xP - xQ;
    const double C5743 = bs[2];
    const double C5753 = ae * ce;
    const double C5749 = bs[3];
    const double C5762 = bs[4];
    const double C5781 = yP - yQ;
    const double C5796 = zP - zQ;
    const double C79 = bs[0];
    const double C6288 = ae * be;
    const double C6287 = std::pow(C5644, 2);
    const double C6289 = 2 * C5643;
    const double C5659 = C5657 * C5655;
    const double C6181 = std::pow(C5655, 2);
    const double C6290 = C5655 * de;
    const double C5658 = 2 * C5654;
    const double C5745 = C5654 * C5643;
    const double C6291 = std::pow(C5654, 2);
    const double C5685 = C5657 * C5683;
    const double C6202 = std::pow(C5683, 2);
    const double C6296 = C5683 * de;
    const double C5701 = C5657 * C5699;
    const double C6213 = std::pow(C5699, 2);
    const double C6297 = C5699 * de;
    const double C6294 = std::pow(C5726, 2);
    const double C6295 = std::pow(C5733, 2);
    const double C5740 = 2 * C5738;
    const double C5754 = C5744 * ae;
    const double C5752 = std::pow(C5744, 2);
    const double C5750 = C5744 * ce;
    const double C5784 = C5744 * C5781;
    const double C5783 = C5781 * ce;
    const double C5813 = C5781 * C5744;
    const double C5812 = C5781 * ae;
    const double C5826 = std::pow(C5781, 2);
    const double C5799 = C5744 * C5796;
    const double C5798 = C5796 * ce;
    const double C5835 = C5781 * C5796;
    const double C5845 = C5796 * C5744;
    const double C5844 = C5796 * ae;
    const double C5858 = C5796 * C5781;
    const double C5867 = std::pow(C5796, 2);
    const double C6298 = C6287 * C6288;
    const double C6299 = std::pow(C6289, -1);
    const double C6182 = C6181 * C5657;
    const double C6293 = std::pow(C5658, -2);
    const double C6292 = std::pow(C5658, -1);
    const double C6203 = C6202 * C5657;
    const double C6214 = C6213 * C5657;
    const double C6301 = C6294 * C6288;
    const double C6302 = C6295 * C6288;
    const double C5742 = C5740 / C5739;
    const double C91 =
        (-((std::pow(xP - xQ, 2) * bs[2] * std::pow(C5740 / C5739, 2) -
            (bs[1] * C5740) / C5739) *
           ae * ce) /
         C5654) /
        C5643;
    const double C80 = -(C5744 * bs[1] * C5740) / C5739;
    const double C451 = -(C5781 * bs[1] * C5740) / C5739;
    const double C755 = -(C5796 * bs[1] * C5740) / C5739;
    const double C5757 = C5749 * C5754;
    const double C5768 = C5762 * C5754;
    const double C83 = (-(bs[1] * C5754 * C5740) / C5739) / C5643;
    const double C5764 = C5752 * C5762;
    const double C5756 = C5749 * C5750;
    const double C5765 = C5762 * C5750;
    const double C85 = (bs[1] * C5750 * C5740) / (C5739 * C5654);
    const double C5786 = C5784 * ae;
    const double C5785 = C5749 * C5783;
    const double C5791 = C5762 * C5783;
    const double C122 = (bs[1] * C5783 * C5740) / (C5739 * C5654);
    const double C5815 = C5813 * ae;
    const double C5814 = C5749 * C5812;
    const double C5820 = C5762 * C5812;
    const double C192 = (-(bs[1] * C5812 * C5740) / C5739) / C5643;
    const double C5828 = C5826 * C5762;
    const double C5801 = C5799 * ae;
    const double C5800 = C5749 * C5798;
    const double C5806 = C5762 * C5798;
    const double C157 = (bs[1] * C5798 * C5740) / (C5739 * C5654);
    const double C5836 = C5835 * ae;
    const double C5847 = C5845 * ae;
    const double C5846 = C5749 * C5844;
    const double C5852 = C5762 * C5844;
    const double C319 = (-(bs[1] * C5844 * C5740) / C5739) / C5643;
    const double C5859 = C5858 * ae;
    const double C5869 = C5867 * C5762;
    const double C6305 = C6298 / C5643;
    const double C6183 = C6182 / C5654;
    const double C6204 = C6203 / C5654;
    const double C6215 = C6214 / C5654;
    const double C6306 = C6301 / C5643;
    const double C6307 = C6302 / C5643;
    const double C5746 = std::pow(C5742, 2);
    const double C5748 = -C5742;
    const double C5763 = std::pow(C5742, 4);
    const double C5788 = C5786 * ce;
    const double C5817 = C5815 * ce;
    const double C5803 = C5801 * ce;
    const double C5837 = C5836 * ce;
    const double C5849 = C5847 * ce;
    const double C5860 = C5859 * ce;
    const double C6308 = -C6305;
    const double C6184 = -C6183;
    const double C6205 = -C6204;
    const double C6216 = -C6215;
    const double C6309 = -C6306;
    const double C6310 = -C6307;
    const double C5751 = C5743 * C5746;
    const double C92 =
        (-(C5746 * C5743 * C5744 * ae * ce) / C5654) / C5643 -
        (ae * C5746 * C5743 * C5744 * ce) / C5745 -
        (C5744 *
         (C5743 * C5746 + std::pow(C5744, 2) * bs[3] * std::pow(-C5742, 3)) *
         ae * ce) /
            C5745;
    const double C126 =
        (-(C5746 * C5743 * C5744 * (yP - yQ) * ae * ce) / C5654) / C5643;
    const double C161 =
        (-(C5746 * C5743 * C5744 * (zP - zQ) * ae * ce) / C5654) / C5643;
    const double C196 =
        (-(C5746 * C5743 * C5781 * C5744 * ae * ce) / C5654) / C5643;
    const double C238 =
        (-((std::pow(C5781, 2) * C5743 * C5746 - (bs[1] * C5740) / C5739) *
           C5753) /
         C5654) /
        C5643;
    const double C278 =
        (-(C5746 * C5743 * C5781 * C5796 * ae * ce) / C5654) / C5643;
    const double C323 =
        (-(C5746 * C5743 * C5796 * C5744 * ae * ce) / C5654) / C5643;
    const double C365 =
        (-(C5746 * C5743 * C5796 * C5781 * ae * ce) / C5654) / C5643;
    const double C405 =
        (-((std::pow(C5796, 2) * C5743 * C5746 - (bs[1] * C5740) / C5739) *
           C5753) /
         C5654) /
        C5643;
    const double C84 = (C5744 * C5746 * C5743 * C5754) / C5643 -
                       (ae * bs[1] * C5740) / (C5739 * C5643);
    const double C86 = (ce * bs[1] * C5740) / (C5739 * C5654) -
                       (C5744 * C5746 * C5743 * C5750) / C5654;
    const double C123 = -(C5744 * C5746 * C5743 * C5783) / C5654;
    const double C158 = -(C5744 * C5746 * C5743 * C5798) / C5654;
    const double C193 = (C5744 * C5746 * C5743 * C5812) / C5643;
    const double C320 = (C5744 * C5746 * C5743 * C5844) / C5643;
    const double C455 = -(C5781 * C5746 * C5743 * C5750) / C5654;
    const double C457 = (C5781 * C5746 * C5743 * C5754) / C5643;
    const double C496 = (ce * bs[1] * C5740) / (C5739 * C5654) -
                        (C5781 * C5746 * C5743 * C5783) / C5654;
    const double C530 = -(C5781 * C5746 * C5743 * C5798) / C5654;
    const double C564 = (C5781 * C5746 * C5743 * C5812) / C5643 -
                        (ae * bs[1] * C5740) / (C5739 * C5643);
    const double C658 = (C5781 * C5746 * C5743 * C5844) / C5643;
    const double C759 = -(C5796 * C5746 * C5743 * C5750) / C5654;
    const double C761 = (C5796 * C5746 * C5743 * C5754) / C5643;
    const double C797 = -(C5796 * C5746 * C5743 * C5783) / C5654;
    const double C834 = (ce * bs[1] * C5740) / (C5739 * C5654) -
                        (C5796 * C5746 * C5743 * C5798) / C5654;
    const double C868 = (C5796 * C5746 * C5743 * C5812) / C5643;
    const double C962 = (C5796 * C5746 * C5743 * C5844) / C5643 -
                        (ae * bs[1] * C5740) / (C5739 * C5643);
    const double C5755 = std::pow(C5748, 3);
    const double C5772 = C5763 * C5768;
    const double C5771 = C5763 * C5765;
    const double C5770 = C5764 * C5763;
    const double C5793 = C5763 * C5791;
    const double C5808 = C5763 * C5806;
    const double C5822 = C5763 * C5820;
    const double C5829 = C5828 * C5763;
    const double C5854 = C5763 * C5852;
    const double C5870 = C5869 * C5763;
    const double C5790 = C5762 * C5788;
    const double C5819 = C5762 * C5817;
    const double C5805 = C5762 * C5803;
    const double C5839 = C5762 * C5837;
    const double C5851 = C5762 * C5849;
    const double C5862 = C5762 * C5860;
    const double C6311 = std::exp(C6308);
    const double C6185 = std::exp(C6184);
    const double C6206 = std::exp(C6205);
    const double C6217 = std::exp(C6216);
    const double C6312 = std::exp(C6309);
    const double C6313 = std::exp(C6310);
    const double C81 = C5751 * C5752 - (bs[1] * C5740) / C5739;
    const double C450 = C5781 * C5744 * C5751;
    const double C452 = C5751 * C5826 - (bs[1] * C5740) / C5739;
    const double C754 = C5796 * C5744 * C5751;
    const double C756 = C5751 * C5867 - (bs[1] * C5740) / C5739;
    const double C1791 = C5796 * C5781 * C5751;
    const double C5759 = C5755 * C5757;
    const double C5758 = C5755 * C5756;
    const double C5761 = C5749 * C5755;
    const double C5787 = C5755 * C5785;
    const double C5802 = C5755 * C5800;
    const double C5816 = C5755 * C5814;
    const double C5848 = C5755 * C5846;
    const double C127 =
        (-(C5744 * C5755 * C5749 * C5744 * C5781 * ae * ce) / C5654) / C5643 -
        (ae * C5746 * C5743 * C5781 * ce) / C5745;
    const double C162 =
        (-(C5744 * C5755 * C5749 * C5744 * C5796 * ae * ce) / C5654) / C5643 -
        (ae * C5746 * C5743 * C5796 * ce) / C5745;
    const double C197 =
        (-(C5744 * C5755 * C5749 * C5781 * C5744 * ae * ce) / C5654) / C5643 -
        (C5746 * C5743 * C5781 * ae * ce) / C5745;
    const double C239 =
        (-(C5744 * (C5751 + std::pow(C5781, 2) * C5749 * C5755) * C5753) /
         C5654) /
        C5643;
    const double C279 =
        (-(C5744 * C5755 * C5749 * C5781 * C5796 * ae * ce) / C5654) / C5643;
    const double C280 = (-(C5763 * C5762 * C5837 * C5752) / C5654) / C5643 -
                        (C5755 * C5749 * C5837) / C5745;
    const double C324 =
        (-(C5744 * C5755 * C5749 * C5796 * C5744 * ae * ce) / C5654) / C5643 -
        (C5746 * C5743 * C5796 * ae * ce) / C5745;
    const double C366 =
        (-(C5744 * C5755 * C5749 * C5796 * C5781 * ae * ce) / C5654) / C5643;
    const double C367 = (-(C5763 * C5762 * C5860 * C5752) / C5654) / C5643 -
                        (C5755 * C5749 * C5860) / C5745;
    const double C406 =
        (-(C5744 * (C5751 + std::pow(C5796, 2) * C5749 * C5755) * C5753) /
         C5654) /
        C5643;
    const double C463 =
        (-(C5781 * (C5751 + C5752 * C5749 * C5755) * C5753) / C5654) / C5643;
    const double C500 = (-(C5781 * C5755 * C5749 * C5788) / C5654) / C5643 -
                        (C5746 * C5743 * C5754 * ce) / C5745;
    const double C534 = (-(C5781 * C5755 * C5749 * C5803) / C5654) / C5643;
    const double C568 = (-(C5781 * C5755 * C5749 * C5817) / C5654) / C5643 -
                        (ae * C5746 * C5743 * C5750) / C5745;
    const double C597 =
        (-(C5746 * C5743 * C5812 * ce) / C5654) / C5643 -
        (ae * C5746 * C5743 * C5783) / C5745 -
        (C5781 * (C5751 + C5826 * C5749 * C5755) * C5753) / C5745;
    const double C628 = (-(C5781 * C5755 * C5749 * C5837) / C5654) / C5643 -
                        (ae * C5746 * C5743 * C5798) / C5745;
    const double C662 = (-(C5781 * C5755 * C5749 * C5849) / C5654) / C5643;
    const double C691 = (-(C5781 * C5755 * C5749 * C5860) / C5654) / C5643 -
                        (C5746 * C5743 * C5844 * ce) / C5745;
    const double C722 =
        (-(C5781 * (C5751 + C5867 * C5749 * C5755) * C5753) / C5654) / C5643;
    const double C767 =
        (-(C5796 * (C5751 + C5752 * C5749 * C5755) * C5753) / C5654) / C5643;
    const double C801 = (-(C5796 * C5755 * C5749 * C5788) / C5654) / C5643;
    const double C838 = (-(C5796 * C5755 * C5749 * C5803) / C5654) / C5643 -
                        (C5746 * C5743 * C5754 * ce) / C5745;
    const double C872 = (-(C5796 * C5755 * C5749 * C5817) / C5654) / C5643;
    const double C902 =
        (-(C5796 * (C5751 + C5826 * C5749 * C5755) * C5753) / C5654) / C5643;
    const double C931 = (-(C5796 * C5755 * C5749 * C5837) / C5654) / C5643 -
                        (C5746 * C5743 * C5812 * ce) / C5745;
    const double C966 = (-(C5796 * C5755 * C5749 * C5849) / C5654) / C5643 -
                        (ae * C5746 * C5743 * C5750) / C5745;
    const double C996 = (-(C5796 * C5755 * C5749 * C5860) / C5654) / C5643 -
                        (ae * C5746 * C5743 * C5783) / C5745;
    const double C1025 =
        (-(C5746 * C5743 * C5844 * ce) / C5654) / C5643 -
        (ae * C5746 * C5743 * C5798) / C5745 -
        (C5796 * (C5751 + C5867 * C5749 * C5755) * C5753) / C5745;
    const double C5775 = C5744 * C5772;
    const double C6002 = C5781 * C5772;
    const double C5774 = C5744 * C5771;
    const double C6007 = C5781 * C5771;
    const double C1798 =
        (-(C5796 * C5781 * C5772 * ce) / C5654) / C5643 -
        (ae * C5796 * C5781 * C5771) / C5745 -
        (C5744 * C5796 * C5781 *
         (C5762 * C5763 + C5752 * bs[5] * std::pow(C5748, 5)) * C5753) /
            C5745;
    const double C5893 = C5744 * C5793;
    const double C5990 = C5781 * C5793;
    const double C5899 = C5744 * C5808;
    const double C6010 = C5781 * C5808;
    const double C6030 = C5796 * C5808;
    const double C5894 = C5744 * C5822;
    const double C5992 = C5781 * C5822;
    const double C5908 = C5744 * C5854;
    const double C6011 = C5781 * C5854;
    const double C6032 = C5796 * C5854;
    const double C5792 = C5763 * C5790;
    const double C5821 = C5763 * C5819;
    const double C5807 = C5763 * C5805;
    const double C5840 = C5763 * C5839;
    const double C5853 = C5763 * C5851;
    const double C5863 = C5763 * C5862;
    const double C2367 = C6311 * C457;
    const double C4395 = C6311 * C761;
    const double C74 =
        (-(0 * be) / C5643) / (2 * C5643) -
        ((C6311 - (C5644 * 2 * ae * be * C5644 * C6311) / C5643) * be) / C5643;
    const double C75 = (-(2 * ae * be * C5644 * C6311) / C5643) / (2 * C5643) -
                       (0 * be) / C5643;
    const double C2124 = -(2 * ae * be * C5644 * C6311) / C5643;
    const double C65 = -(C6311 * C5644 * be) / C5643;
    const double C66 = C6299 * C6311;
    const double C5660 = C5659 * C6185;
    const double C6300 = C6185 * C6290;
    const double C67 = (C6185 * std::pow(C6290, 2)) / C6291 + C6185 / C5658;
    const double C69 = C6293 * C6185;
    const double C1064 = C6292 * C6185;
    const double C5686 = C5685 * C6206;
    const double C121 = -(2 * C5657 * (yC - yD) * C6206) / C5654;
    const double C6303 = C6206 * C6296;
    const double C446 = (C6206 * std::pow(C6296, 2)) / C6291 + C6206 / C5658;
    const double C448 = C6293 * C6206;
    const double C1066 = C6292 * C6206;
    const double C5702 = C5701 * C6217;
    const double C156 = -(2 * C5657 * (zC - zD) * C6217) / C5654;
    const double C6304 = C6217 * C6297;
    const double C751 = (C6217 * std::pow(C6297, 2)) / C6291 + C6217 / C5658;
    const double C753 = C6293 * C6217;
    const double C1430 = C6292 * C6217;
    const double C202 = C6312 * C193;
    const double C4511 = C6312 * C868;
    const double C191 = -(2 * ae * be * (yA - yB) * C6312) / C5643;
    const double C2203 =
        (-(0 * be) / C5643) / (2 * C5643) -
        ((C6312 - (C5726 * 2 * ae * be * C5726 * C6312) / C5643) * be) / C5643;
    const double C2204 =
        (-(2 * ae * be * C5726 * C6312) / C5643) / (2 * C5643) -
        (0 * be) / C5643;
    const double C2122 = -(C6312 * C5726 * be) / C5643;
    const double C2123 = C6299 * C6312;
    const double C329 = C6313 * C320;
    const double C2565 = C6313 * C658;
    const double C318 = -(2 * ae * be * (zA - zB) * C6313) / C5643;
    const double C4075 =
        (-(0 * be) / C5643) / (2 * C5643) -
        ((C6313 - (C5733 * 2 * ae * be * C5733 * C6313) / C5643) * be) / C5643;
    const double C4076 =
        (-(2 * ae * be * C5733 * C6313) / C5643) / (2 * C5643) -
        (0 * be) / C5643;
    const double C3917 = -(C6313 * C5733 * be) / C5643;
    const double C3918 = C6299 * C6313;
    const double C87 =
        (C5746 * C5743 * C5754 + C5744 * (C5744 * C5759 + C5751 * ae) +
         C5744 * C5751 * ae) /
        C5643;
    const double C456 = (C5781 * (C5744 * C5759 + C5751 * ae)) / C5643;
    const double C458 = (C5746 * C5743 * C5754 + C5759 * C5826) / C5643;
    const double C760 = (C5796 * (C5744 * C5759 + C5751 * ae)) / C5643;
    const double C762 = (C5746 * C5743 * C5754 + C5759 * C5867) / C5643;
    const double C1793 = (C5796 * C5781 * C5759) / C5643;
    const double C2362 =
        (2 * C5781 * C5759 + C5781 * (C5759 + C5772 * C5826)) / C5643;
    const double C3568 = (C5796 * (C5759 + C5772 * C5826)) / C5643;
    const double C4390 =
        (2 * C5796 * C5759 + C5796 * (C5759 + C5772 * C5867)) / C5643;
    const double C93 =
        (-(ae * (C5744 * C5758 + C5751 * ce)) / C5654) / C5643 -
        ((C5751 + C5752 * C5749 * C5755) * C5753) / C5745 -
        ((C5744 * C5759 + C5751 * ae) * ce) / C5745 +
        C5744 * ((-(C5759 * ce) / C5654) / C5643 - (ae * C5758) / C5745 -
                 (C5744 * (C5749 * C5755 + C5752 * bs[4] * std::pow(C5742, 4)) *
                  C5753) /
                     C5745);
    const double C88 = -(C5744 * (C5744 * C5758 + C5751 * ce) +
                         C5746 * C5743 * C5750 + C5744 * C5751 * ce) /
                       C5654;
    const double C454 = -(C5781 * (C5744 * C5758 + C5751 * ce)) / C5654;
    const double C460 = -(C5758 * C5826 + C5746 * C5743 * C5750) / C5654;
    const double C758 = -(C5796 * (C5744 * C5758 + C5751 * ce)) / C5654;
    const double C764 = -(C5758 * C5867 + C5746 * C5743 * C5750) / C5654;
    const double C1795 = -(C5796 * C5781 * C5758) / C5654;
    const double C2363 = (-2 * C5781 * C5758) / C5654 -
                         (C5781 * (C5771 * C5826 + C5758)) / C5654;
    const double C3569 = -(C5796 * (C5771 * C5826 + C5758)) / C5654;
    const double C4391 = (-2 * C5796 * C5758) / C5654 -
                         (C5796 * (C5771 * C5867 + C5758)) / C5654;
    const double C5769 = C5761 * ae;
    const double C5767 = C5744 * C5761;
    const double C5766 = C5761 * ce;
    const double C5773 = C5761 + C5770;
    const double C5830 = C5761 + C5829;
    const double C5871 = C5761 + C5870;
    const double C5991 = C5781 * C5761;
    const double C6031 = C5796 * C5761;
    const double C240 =
        (-((C5761 + C5826 * C5762 * C5763) * C5753 * C5752) / C5654) / C5643 -
        ((C5751 + C5826 * C5749 * C5755) * C5753) / C5745;
    const double C407 =
        (-((C5761 + C5867 * C5762 * C5763) * C5753 * C5752) / C5654) / C5643 -
        ((C5751 + C5867 * C5749 * C5755) * C5753) / C5745;
    const double C82 = 2 * C5744 * C5751 + C5744 * (C5751 + C5761 * C5752);
    const double C1069 = C5781 * (C5751 + C5761 * C5752);
    const double C1431 = C5796 * (C5751 + C5761 * C5752);
    const double C2361 = 2 * C5781 * C5751 + C5781 * (C5751 + C5761 * C5826);
    const double C3567 = C5796 * (C5751 + C5761 * C5826);
    const double C4389 = 2 * C5796 * C5751 + C5796 * (C5751 + C5761 * C5867);
    const double C128 =
        (-(ae * C5744 * C5787) / C5654) / C5643 -
        (C5755 * C5749 * C5788) / C5745 +
        C5744 * ((-(C5744 * C5763 * C5762 * C5788) / C5654) / C5643 -
                 (ae * C5787) / C5745);
    const double C124 = -(C5787 * C5752 + C5746 * C5743 * C5783) / C5654;
    const double C125 = (-2 * C5744 * C5787) / C5654 -
                        (C5744 * (C5793 * C5752 + C5787)) / C5654;
    const double C495 = -(C5781 * C5744 * C5787 + C5744 * C5751 * ce) / C5654;
    const double C497 = -(C5781 * (C5781 * C5787 + C5751 * ce) +
                          C5746 * C5743 * C5783 + C5781 * C5751 * ce) /
                        C5654;
    const double C796 = -(C5796 * C5744 * C5787) / C5654;
    const double C798 = -(C5787 * C5867 + C5746 * C5743 * C5783) / C5654;
    const double C1109 =
        -(C5781 * (C5793 * C5752 + C5787) + (C5751 + C5761 * C5752) * ce) /
        C5654;
    const double C1469 = -(C5796 * (C5793 * C5752 + C5787)) / C5654;
    const double C1833 = -(C5796 * (C5781 * C5787 + C5751 * ce)) / C5654;
    const double C4435 = (-2 * C5796 * C5787) / C5654 -
                         (C5796 * (C5793 * C5867 + C5787)) / C5654;
    const double C163 =
        (-(ae * C5744 * C5802) / C5654) / C5643 -
        (C5755 * C5749 * C5803) / C5745 +
        C5744 * ((-(C5744 * C5763 * C5762 * C5803) / C5654) / C5643 -
                 (ae * C5802) / C5745);
    const double C159 = -(C5802 * C5752 + C5746 * C5743 * C5798) / C5654;
    const double C160 = (-2 * C5744 * C5802) / C5654 -
                        (C5744 * (C5808 * C5752 + C5802)) / C5654;
    const double C529 = -(C5781 * C5744 * C5802) / C5654;
    const double C531 = -(C5802 * C5826 + C5746 * C5743 * C5798) / C5654;
    const double C833 = -(C5796 * C5744 * C5802 + C5744 * C5751 * ce) / C5654;
    const double C835 = -(C5796 * (C5796 * C5802 + C5751 * ce) +
                          C5746 * C5743 * C5798 + C5796 * C5751 * ce) /
                        C5654;
    const double C1145 = -(C5781 * (C5808 * C5752 + C5802)) / C5654;
    const double C1507 =
        -(C5796 * (C5808 * C5752 + C5802) + (C5751 + C5761 * C5752) * ce) /
        C5654;
    const double C1871 = -(C5796 * C5781 * C5802 + C5781 * C5751 * ce) / C5654;
    const double C2441 = (-2 * C5781 * C5802) / C5654 -
                         (C5781 * (C5808 * C5826 + C5802)) / C5654;
    const double C3652 =
        -(C5796 * (C5808 * C5826 + C5802) + (C5751 + C5761 * C5826) * ce) /
        C5654;
    const double C198 =
        (-(C5744 * C5816 * ce) / C5654) / C5643 -
        (C5755 * C5749 * C5817) / C5745 +
        C5744 * ((-(C5744 * C5763 * C5762 * C5817) / C5654) / C5643 -
                 (C5816 * ce) / C5745);
    const double C194 = (C5746 * C5743 * C5812 + C5816 * C5752) / C5643;
    const double C195 =
        (2 * C5744 * C5816 + C5744 * (C5816 + C5822 * C5752)) / C5643;
    const double C563 = (C5781 * C5744 * C5816 + C5744 * C5751 * ae) / C5643;
    const double C565 =
        (C5746 * C5743 * C5812 + C5781 * (C5781 * C5816 + C5751 * ae) +
         C5781 * C5751 * ae) /
        C5643;
    const double C867 = (C5796 * C5744 * C5816) / C5643;
    const double C869 = (C5746 * C5743 * C5812 + C5816 * C5867) / C5643;
    const double C1181 =
        (C5781 * (C5816 + C5822 * C5752) + (C5751 + C5761 * C5752) * ae) /
        C5643;
    const double C1543 = (C5796 * (C5816 + C5822 * C5752)) / C5643;
    const double C1909 = (C5796 * (C5781 * C5816 + C5751 * ae)) / C5643;
    const double C4507 =
        (2 * C5796 * C5816 + C5796 * (C5816 + C5822 * C5867)) / C5643;
    const double C325 =
        (-(C5744 * C5848 * ce) / C5654) / C5643 -
        (C5755 * C5749 * C5849) / C5745 +
        C5744 * ((-(C5744 * C5763 * C5762 * C5849) / C5654) / C5643 -
                 (C5848 * ce) / C5745);
    const double C321 = (C5746 * C5743 * C5844 + C5848 * C5752) / C5643;
    const double C322 =
        (2 * C5744 * C5848 + C5744 * (C5848 + C5854 * C5752)) / C5643;
    const double C657 = (C5781 * C5744 * C5848) / C5643;
    const double C659 = (C5746 * C5743 * C5844 + C5848 * C5826) / C5643;
    const double C961 = (C5796 * C5744 * C5848 + C5744 * C5751 * ae) / C5643;
    const double C963 =
        (C5746 * C5743 * C5844 + C5796 * (C5796 * C5848 + C5751 * ae) +
         C5796 * C5751 * ae) /
        C5643;
    const double C1305 = (C5781 * (C5848 + C5854 * C5752)) / C5643;
    const double C1667 =
        (C5796 * (C5848 + C5854 * C5752) + (C5751 + C5761 * C5752) * ae) /
        C5643;
    const double C2019 = (C5796 * C5781 * C5848 + C5781 * C5751 * ae) / C5643;
    const double C2561 =
        (2 * C5781 * C5848 + C5781 * (C5848 + C5854 * C5826)) / C5643;
    const double C3801 =
        (C5796 * (C5848 + C5854 * C5826) + (C5751 + C5761 * C5826) * ae) /
        C5643;
    const double C204 = C6312 * C197;
    const double C245 = C6312 * C239;
    const double C285 = C6312 * C279;
    const double C287 = C6312 * C280;
    const double C331 = C6313 * C324;
    const double C372 = C6313 * C366;
    const double C374 = C6313 * C367;
    const double C412 = C6313 * C406;
    const double C2369 = C6311 * C463;
    const double C2411 = C6311 * C500;
    const double C2446 = C6311 * C534;
    const double C2567 = C6313 * C662;
    const double C2608 = C6313 * C691;
    const double C2642 = C6313 * C722;
    const double C4397 = C6311 * C767;
    const double C4440 = C6311 * C801;
    const double C4477 = C6311 * C838;
    const double C4513 = C6312 * C872;
    const double C4555 = C6312 * C902;
    const double C4591 = C6312 * C931;
    const double C2676 = (C5781 * C5759 + C6002 * C5867) / C5643;
    const double C2677 = -(C6007 * C5867 + C5781 * C5758) / C5654;
    const double C799 = -(C5893 * C5867 + C5744 * C5787) / C5654;
    const double C532 = -(C5899 * C5826 + C5744 * C5802) / C5654;
    const double C1948 =
        (-(C5796 * C5894 * ce) / C5654) / C5643 - (ae * C5796 * C5893) / C5745 -
        (C5781 * C5796 * C5744 *
         (C5762 * C5763 + C5826 * bs[5] * std::pow(C5748, 5)) * C5753) /
            C5745;
    const double C870 = (C5744 * C5816 + C5894 * C5867) / C5643;
    const double C2094 =
        (-(C5781 * C5908 * ce) / C5654) / C5643 - (ae * C5781 * C5899) / C5745 -
        (C5796 * C5781 * C5744 *
         (C5762 * C5763 + C5867 * bs[5] * std::pow(C5748, 5)) * C5753) /
            C5745;
    const double C660 = (C5744 * C5848 + C5908 * C5826) / C5643;
    const double C129 =
        2 * ((-(C5744 * C5792) / C5654) / C5643 - (ae * C5787) / C5745) -
        (ae * (C5793 * C5752 + C5787)) / C5745 +
        C5744 *
            ((-(ae * C5744 * C5793) / C5654) / C5643 - C5792 / C5745 +
             C5744 * ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5788) / C5654) /
                          C5643 -
                      (ae * C5793) / C5745));
    const double C499 =
        C5781 * ((-(C5744 * C5792) / C5654) / C5643 - (ae * C5787) / C5745) -
        ((C5744 * C5759 + C5751 * ae) * ce) / C5745;
    const double C501 =
        (-(C5781 * C5759 * ce) / C5654) / C5643 -
        (C5755 * C5749 * C5788) / C5745 +
        C5781 * ((-(C5781 * C5792) / C5654) / C5643 - (C5759 * ce) / C5745);
    const double C800 =
        C5796 * ((-(C5744 * C5792) / C5654) / C5643 - (ae * C5787) / C5745);
    const double C802 =
        (-(C5792 * C5867) / C5654) / C5643 - (C5755 * C5749 * C5788) / C5745;
    const double C803 =
        (-(C5744 * C5792) / C5654) / C5643 - (ae * C5787) / C5745 +
        ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5788) / C5654) / C5643 -
         (ae * C5793) / C5745) *
            C5867;
    const double C1470 =
        C5796 *
        ((-(ae * C5893) / C5654) / C5643 - C5792 / C5745 +
         C5744 *
             ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5788) / C5654) / C5643 -
              (ae * C5793) / C5745));
    const double C1835 =
        C5796 * ((-(C5781 * C5792) / C5654) / C5643 - (C5759 * ce) / C5745);
    const double C2408 =
        2 * ((-(C5781 * C5792) / C5654) / C5643 - (C5759 * ce) / C5745) -
        ((C5759 + C5772 * C5826) * ce) / C5745 +
        C5781 *
            ((-(C5781 * C5772 * ce) / C5654) / C5643 - C5792 / C5745 +
             C5781 * ((-(C5781 * std::pow(C5748, 5) * bs[5] * C5788) / C5654) /
                          C5643 -
                      (C5772 * ce) / C5745));
    const double C2706 =
        (-(C5781 * C5792) / C5654) / C5643 - (C5759 * ce) / C5745 +
        ((-(C5781 * std::pow(C5748, 5) * bs[5] * C5788) / C5654) / C5643 -
         (C5772 * ce) / C5745) *
            C5867;
    const double C3614 =
        C5796 *
        ((-(C6002 * ce) / C5654) / C5643 - C5792 / C5745 +
         C5781 *
             ((-(C5781 * std::pow(C5748, 5) * bs[5] * C5788) / C5654) / C5643 -
              (C5772 * ce) / C5745));
    const double C4436 =
        (-2 * C5796 * C5792) / C5745 +
        C5796 *
            ((-(std::pow(C5748, 5) * bs[5] * C5788 * C5867) / C5654) / C5643 -
             C5792 / C5745);
    const double C199 =
        2 * ((-(C5744 * C5821) / C5654) / C5643 - (C5816 * ce) / C5745) -
        ((C5816 + C5822 * C5752) * ce) / C5745 +
        C5744 *
            ((-(C5744 * C5822 * ce) / C5654) / C5643 - C5821 / C5745 +
             C5744 * ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5817) / C5654) /
                          C5643 -
                      (C5822 * ce) / C5745));
    const double C567 =
        C5781 * ((-(C5744 * C5821) / C5654) / C5643 - (C5816 * ce) / C5745) -
        (ae * (C5744 * C5758 + C5751 * ce)) / C5745;
    const double C569 =
        (-(ae * C5781 * C5758) / C5654) / C5643 -
        (C5755 * C5749 * C5817) / C5745 +
        C5781 * ((-(C5781 * C5821) / C5654) / C5643 - (ae * C5758) / C5745);
    const double C871 =
        C5796 * ((-(C5744 * C5821) / C5654) / C5643 - (C5816 * ce) / C5745);
    const double C873 =
        (-(C5821 * C5867) / C5654) / C5643 - (C5755 * C5749 * C5817) / C5745;
    const double C874 =
        (-(C5744 * C5821) / C5654) / C5643 - (C5816 * ce) / C5745 +
        ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5817) / C5654) / C5643 -
         (C5822 * ce) / C5745) *
            C5867;
    const double C1544 =
        C5796 *
        ((-(C5894 * ce) / C5654) / C5643 - C5821 / C5745 +
         C5744 *
             ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5817) / C5654) / C5643 -
              (C5822 * ce) / C5745));
    const double C1911 = (-(C5781 * C5796 * C5821) / C5654) / C5643 -
                         (ae * C5796 * C5758) / C5745;
    const double C2480 =
        2 * ((-(C5781 * C5821) / C5654) / C5643 - (ae * C5758) / C5745) -
        (ae * (C5771 * C5826 + C5758)) / C5745 +
        C5781 *
            ((-(ae * C5781 * C5771) / C5654) / C5643 - C5821 / C5745 +
             C5781 * ((-(C5781 * std::pow(C5748, 5) * bs[5] * C5817) / C5654) /
                          C5643 -
                      (ae * C5771) / C5745));
    const double C2762 =
        C5781 *
            ((-(std::pow(C5748, 5) * bs[5] * C5817 * C5867) / C5654) / C5643 -
             C5821 / C5745) -
        (ae * (C5771 * C5867 + C5758)) / C5745;
    const double C3696 =
        (-(ae * C5796 * C6007) / C5654) / C5643 - (C5796 * C5821) / C5745 +
        C5781 *
            ((-(C5781 * C5796 * std::pow(C5748, 5) * bs[5] * C5817) / C5654) /
                 C5643 -
             (ae * C5796 * C5771) / C5745);
    const double C4508 =
        (-2 * C5796 * C5821) / C5745 +
        C5796 *
            ((-(std::pow(C5748, 5) * bs[5] * C5817 * C5867) / C5654) / C5643 -
             C5821 / C5745);
    const double C164 =
        2 * ((-(C5744 * C5807) / C5654) / C5643 - (ae * C5802) / C5745) -
        (ae * (C5808 * C5752 + C5802)) / C5745 +
        C5744 *
            ((-(ae * C5744 * C5808) / C5654) / C5643 - C5807 / C5745 +
             C5744 * ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5803) / C5654) /
                          C5643 -
                      (ae * C5808) / C5745));
    const double C533 =
        C5781 * ((-(C5744 * C5807) / C5654) / C5643 - (ae * C5802) / C5745);
    const double C535 =
        (-(C5807 * C5826) / C5654) / C5643 - (C5755 * C5749 * C5803) / C5745;
    const double C536 =
        (-(C5744 * C5807) / C5654) / C5643 - (ae * C5802) / C5745 +
        ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5803) / C5654) / C5643 -
         (ae * C5808) / C5745) *
            C5826;
    const double C837 =
        C5796 * ((-(C5744 * C5807) / C5654) / C5643 - (ae * C5802) / C5745) -
        ((C5744 * C5759 + C5751 * ae) * ce) / C5745;
    const double C839 =
        (-(C5796 * C5759 * ce) / C5654) / C5643 -
        (C5755 * C5749 * C5803) / C5745 +
        C5796 * ((-(C5796 * C5807) / C5654) / C5643 - (C5759 * ce) / C5745);
    const double C1146 =
        C5781 *
        ((-(ae * C5899) / C5654) / C5643 - C5807 / C5745 +
         C5744 *
             ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5803) / C5654) / C5643 -
              (ae * C5808) / C5745));
    const double C1873 = (-(C5796 * C5781 * C5807) / C5654) / C5643 -
                         (C5781 * C5759 * ce) / C5745;
    const double C2442 =
        (-2 * C5781 * C5807) / C5745 +
        C5781 *
            ((-(std::pow(C5748, 5) * bs[5] * C5803 * C5826) / C5654) / C5643 -
             C5807 / C5745);
    const double C2734 =
        (-(C5796 * C6002 * ce) / C5654) / C5643 - (C5781 * C5807) / C5745 +
        C5796 *
            ((-(C5796 * C5781 * std::pow(C5748, 5) * bs[5] * C5803) / C5654) /
                 C5643 -
             (C6002 * ce) / C5745);
    const double C3653 =
        C5796 *
            ((-(std::pow(C5748, 5) * bs[5] * C5803 * C5826) / C5654) / C5643 -
             C5807 / C5745) -
        ((C5759 + C5772 * C5826) * ce) / C5745;
    const double C4474 =
        2 * ((-(C5796 * C5807) / C5654) / C5643 - (C5759 * ce) / C5745) -
        ((C5759 + C5772 * C5867) * ce) / C5745 +
        C5796 *
            ((-(C5796 * C5772 * ce) / C5654) / C5643 - C5807 / C5745 +
             C5796 * ((-(C5796 * std::pow(C5748, 5) * bs[5] * C5803) / C5654) /
                          C5643 -
                      (C5772 * ce) / C5745));
    const double C281 =
        (-2 * C5744 * C5840) / C5745 +
        C5744 *
            ((-(std::pow(C5748, 5) * bs[5] * C5837 * C5752) / C5654) / C5643 -
             C5840 / C5745);
    const double C627 = (-(C5781 * C5744 * C5840) / C5654) / C5643 -
                        (ae * C5744 * C5802) / C5745;
    const double C629 =
        (-(ae * C5781 * C5802) / C5654) / C5643 -
        (C5755 * C5749 * C5837) / C5745 +
        C5781 * ((-(C5781 * C5840) / C5654) / C5643 - (ae * C5802) / C5745);
    const double C630 =
        (-(ae * C5781 * C5899) / C5654) / C5643 - (C5744 * C5840) / C5745 +
        C5781 *
            ((-(C5781 * C5744 * std::pow(C5748, 5) * bs[5] * C5837) / C5654) /
                 C5643 -
             (ae * C5899) / C5745);
    const double C932 =
        (-(C5796 * C5816 * ce) / C5654) / C5643 -
        (C5755 * C5749 * C5837) / C5745 +
        C5796 * ((-(C5796 * C5840) / C5654) / C5643 - (C5816 * ce) / C5745);
    const double C933 = (-(C5796 * C5744 * C5840) / C5654) / C5643 -
                        (C5744 * C5816 * ce) / C5745;
    const double C934 =
        (-(C5796 * C5894 * ce) / C5654) / C5643 - (C5744 * C5840) / C5745 +
        C5796 *
            ((-(C5796 * C5744 * std::pow(C5748, 5) * bs[5] * C5837) / C5654) /
                 C5643 -
             (C5894 * ce) / C5745);
    const double C1265 =
        C5781 *
            ((-(std::pow(C5748, 5) * bs[5] * C5837 * C5752) / C5654) / C5643 -
             C5840 / C5745) -
        (ae * (C5808 * C5752 + C5802)) / C5745;
    const double C1625 =
        C5796 *
            ((-(std::pow(C5748, 5) * bs[5] * C5837 * C5752) / C5654) / C5643 -
             C5840 / C5745) -
        ((C5816 + C5822 * C5752) * ce) / C5745;
    const double C1983 =
        C5781 * ((-(C5796 * C5840) / C5654) / C5643 - (C5816 * ce) / C5745) -
        (ae * (C5796 * C5802 + C5751 * ce)) / C5745;
    const double C2534 =
        2 * ((-(C5781 * C5840) / C5654) / C5643 - (ae * C5802) / C5745) -
        (ae * (C5808 * C5826 + C5802)) / C5745 +
        C5781 *
            ((-(ae * C5781 * C5808) / C5654) / C5643 - C5840 / C5745 +
             C5781 * ((-(C5781 * std::pow(C5748, 5) * bs[5] * C5837) / C5654) /
                          C5643 -
                      (ae * C5808) / C5745));
    const double C4588 =
        2 * ((-(C5796 * C5840) / C5654) / C5643 - (C5816 * ce) / C5745) -
        ((C5816 + C5822 * C5867) * ce) / C5745 +
        C5796 *
            ((-(C5796 * C5822 * ce) / C5654) / C5643 - C5840 / C5745 +
             C5796 * ((-(C5796 * std::pow(C5748, 5) * bs[5] * C5837) / C5654) /
                          C5643 -
                      (C5822 * ce) / C5745));
    const double C326 =
        2 * ((-(C5744 * C5853) / C5654) / C5643 - (C5848 * ce) / C5745) -
        ((C5848 + C5854 * C5752) * ce) / C5745 +
        C5744 *
            ((-(C5744 * C5854 * ce) / C5654) / C5643 - C5853 / C5745 +
             C5744 * ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5849) / C5654) /
                          C5643 -
                      (C5854 * ce) / C5745));
    const double C661 =
        C5781 * ((-(C5744 * C5853) / C5654) / C5643 - (C5848 * ce) / C5745);
    const double C663 =
        (-(C5853 * C5826) / C5654) / C5643 - (C5755 * C5749 * C5849) / C5745;
    const double C664 =
        (-(C5744 * C5853) / C5654) / C5643 - (C5848 * ce) / C5745 +
        ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5849) / C5654) / C5643 -
         (C5854 * ce) / C5745) *
            C5826;
    const double C965 =
        C5796 * ((-(C5744 * C5853) / C5654) / C5643 - (C5848 * ce) / C5745) -
        (ae * (C5744 * C5758 + C5751 * ce)) / C5745;
    const double C967 =
        (-(ae * C5796 * C5758) / C5654) / C5643 -
        (C5755 * C5749 * C5849) / C5745 +
        C5796 * ((-(C5796 * C5853) / C5654) / C5643 - (ae * C5758) / C5745);
    const double C1306 =
        C5781 *
        ((-(C5908 * ce) / C5654) / C5643 - C5853 / C5745 +
         C5744 *
             ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5849) / C5654) / C5643 -
              (C5854 * ce) / C5745));
    const double C2021 = (-(C5796 * C5781 * C5853) / C5654) / C5643 -
                         (ae * C5781 * C5758) / C5745;
    const double C2562 =
        (-2 * C5781 * C5853) / C5745 +
        C5781 *
            ((-(std::pow(C5748, 5) * bs[5] * C5849 * C5826) / C5654) / C5643 -
             C5853 / C5745);
    const double C2844 =
        (-(ae * C5796 * C6007) / C5654) / C5643 - (C5781 * C5853) / C5745 +
        C5796 *
            ((-(C5796 * C5781 * std::pow(C5748, 5) * bs[5] * C5849) / C5654) /
                 C5643 -
             (ae * C6007) / C5745);
    const double C3802 =
        C5796 *
            ((-(std::pow(C5748, 5) * bs[5] * C5849 * C5826) / C5654) / C5643 -
             C5853 / C5745) -
        (ae * (C5771 * C5826 + C5758)) / C5745;
    const double C4622 =
        2 * ((-(C5796 * C5853) / C5654) / C5643 - (ae * C5758) / C5745) -
        (ae * (C5771 * C5867 + C5758)) / C5745 +
        C5796 *
            ((-(ae * C5796 * C5771) / C5654) / C5643 - C5853 / C5745 +
             C5796 * ((-(C5796 * std::pow(C5748, 5) * bs[5] * C5849) / C5654) /
                          C5643 -
                      (ae * C5771) / C5745));
    const double C368 =
        (-2 * C5744 * C5863) / C5745 +
        C5744 *
            ((-(std::pow(C5748, 5) * bs[5] * C5860 * C5752) / C5654) / C5643 -
             C5863 / C5745);
    const double C692 =
        (-(C5781 * C5848 * ce) / C5654) / C5643 -
        (C5755 * C5749 * C5860) / C5745 +
        C5781 * ((-(C5781 * C5863) / C5654) / C5643 - (C5848 * ce) / C5745);
    const double C693 = (-(C5781 * C5744 * C5863) / C5654) / C5643 -
                        (C5744 * C5848 * ce) / C5745;
    const double C694 =
        (-(C5781 * C5908 * ce) / C5654) / C5643 - (C5744 * C5863) / C5745 +
        C5781 *
            ((-(C5781 * C5744 * std::pow(C5748, 5) * bs[5] * C5860) / C5654) /
                 C5643 -
             (C5908 * ce) / C5745);
    const double C995 = (-(C5796 * C5744 * C5863) / C5654) / C5643 -
                        (ae * C5744 * C5787) / C5745;
    const double C997 =
        (-(ae * C5796 * C5787) / C5654) / C5643 -
        (C5755 * C5749 * C5860) / C5745 +
        C5796 * ((-(C5796 * C5863) / C5654) / C5643 - (ae * C5787) / C5745);
    const double C998 =
        (-(ae * C5796 * C5893) / C5654) / C5643 - (C5744 * C5863) / C5745 +
        C5796 *
            ((-(C5796 * C5744 * std::pow(C5748, 5) * bs[5] * C5860) / C5654) /
                 C5643 -
             (ae * C5893) / C5745);
    const double C1347 =
        C5781 *
            ((-(std::pow(C5748, 5) * bs[5] * C5860 * C5752) / C5654) / C5643 -
             C5863 / C5745) -
        ((C5848 + C5854 * C5752) * ce) / C5745;
    const double C1709 =
        C5796 *
            ((-(std::pow(C5748, 5) * bs[5] * C5860 * C5752) / C5654) / C5643 -
             C5863 / C5745) -
        (ae * (C5793 * C5752 + C5787)) / C5745;
    const double C2057 =
        C5796 * ((-(C5781 * C5863) / C5654) / C5643 - (C5848 * ce) / C5745) -
        (ae * (C5781 * C5787 + C5751 * ce)) / C5745;
    const double C2605 =
        2 * ((-(C5781 * C5863) / C5654) / C5643 - (C5848 * ce) / C5745) -
        ((C5848 + C5854 * C5826) * ce) / C5745 +
        C5781 *
            ((-(C5781 * C5854 * ce) / C5654) / C5643 - C5863 / C5745 +
             C5781 * ((-(C5781 * std::pow(C5748, 5) * bs[5] * C5860) / C5654) /
                          C5643 -
                      (C5854 * ce) / C5745));
    const double C4649 =
        2 * ((-(C5796 * C5863) / C5654) / C5643 - (ae * C5787) / C5745) -
        (ae * (C5793 * C5867 + C5787)) / C5745 +
        C5796 *
            ((-(ae * C5796 * C5793) / C5654) / C5643 - C5863 / C5745 +
             C5796 * ((-(C5796 * std::pow(C5748, 5) * bs[5] * C5860) / C5654) /
                          C5643 -
                      (ae * C5793) / C5745));
    const double C2372 = C2124 * C452;
    const double C2368 = C2124 * C455;
    const double C2366 = C2124 * C451;
    const double C2410 = C2124 * C496;
    const double C2445 = C2124 * C530;
    const double C2936 = C2124 * C450;
    const double C3574 = C2124 * C1791;
    const double C4400 = C2124 * C756;
    const double C4396 = C2124 * C759;
    const double C4394 = C2124 * C755;
    const double C4439 = C2124 * C797;
    const double C4476 = C2124 * C834;
    const double C5020 = C2124 * C754;
    const double C5661 = 2 * C5660;
    const double C68 = (-2 * C6292 * C6300) / C5654;
    const double C1063 = -C6300 / C5654;
    const double C5687 = 2 * C5686;
    const double C447 = (-2 * C6292 * C6303) / C5654;
    const double C1065 = -C6303 / C5654;
    const double C5703 = 2 * C5702;
    const double C752 = (-2 * C6292 * C6304) / C5654;
    const double C1429 = -C6304 / C5654;
    const double C205 = C191 * C81;
    const double C203 = C191 * C86;
    const double C201 = C191 * C80;
    const double C244 = C191 * C123;
    const double C284 = C191 * C158;
    const double C1184 = C191 * C450;
    const double C1546 = C191 * C754;
    const double C4516 = C191 * C756;
    const double C4512 = C191 * C759;
    const double C4510 = C191 * C755;
    const double C4554 = C191 * C797;
    const double C4590 = C191 * C834;
    const double C5452 = C191 * C1791;
    const double C332 = C318 * C81;
    const double C330 = C318 * C86;
    const double C328 = C318 * C80;
    const double C371 = C318 * C123;
    const double C411 = C318 * C158;
    const double C1308 = C318 * C450;
    const double C1670 = C318 * C754;
    const double C2570 = C318 * C452;
    const double C2566 = C318 * C455;
    const double C2564 = C318 * C451;
    const double C2607 = C318 * C496;
    const double C2641 = C318 * C530;
    const double C3806 = C318 * C1791;
    const double C2937 = C6311 * C456;
    const double C2373 = C6311 * C458;
    const double C5021 = C6311 * C760;
    const double C4401 = C6311 * C762;
    const double C3575 = C6311 * C1793;
    const double C207 = C191 * C88;
    const double C334 = C318 * C88;
    const double C1186 = C191 * C454;
    const double C1310 = C318 * C454;
    const double C2938 = C2124 * C454;
    const double C2370 = C2124 * C460;
    const double C2568 = C318 * C460;
    const double C1548 = C191 * C758;
    const double C1672 = C318 * C758;
    const double C5022 = C2124 * C758;
    const double C4398 = C2124 * C764;
    const double C4514 = C191 * C764;
    const double C3572 = C2124 * C1795;
    const double C3804 = C318 * C1795;
    const double C5454 = C191 * C1795;
    const double C5778 = C5775 + C5769;
    const double C5994 = C5992 + C5769;
    const double C6034 = C6032 + C5769;
    const double C1984 =
        C5781 *
            ((-(C5796 * C5744 * std::pow(C5748, 5) * bs[5] * C5837) / C5654) /
                 C5643 -
             (C5894 * ce) / C5745) -
        (ae * (C5796 * C5899 + C5767 * ce)) / C5745;
    const double C2058 =
        C5796 *
            ((-(C5781 * C5744 * std::pow(C5748, 5) * bs[5] * C5860) / C5654) /
                 C5643 -
             (C5908 * ce) / C5745) -
        (ae * (C5781 * C5893 + C5767 * ce)) / C5745;
    const double C498 = -(C5781 * (C5781 * C5893 + C5767 * ce) + C5744 * C5787 +
                          C5781 * C5767 * ce) /
                        C5654;
    const double C566 = (C5744 * C5816 + C5781 * (C5781 * C5894 + C5767 * ae) +
                         C5781 * C5767 * ae) /
                        C5643;
    const double C836 = -(C5796 * (C5796 * C5899 + C5767 * ce) + C5744 * C5802 +
                          C5796 * C5767 * ce) /
                        C5654;
    const double C964 = (C5744 * C5848 + C5796 * (C5796 * C5908 + C5767 * ae) +
                         C5796 * C5767 * ae) /
                        C5643;
    const double C1834 = -(C5796 * (C5781 * C5893 + C5767 * ce)) / C5654;
    const double C1872 = -(C5796 * C5781 * C5899 + C5781 * C5767 * ce) / C5654;
    const double C1910 = (C5796 * (C5781 * C5894 + C5767 * ae)) / C5643;
    const double C2020 = (C5796 * C5781 * C5908 + C5781 * C5767 * ae) / C5643;
    const double C453 = C5744 * C5751 + C5767 * C5826;
    const double C757 = C5744 * C5751 + C5767 * C5867;
    const double C1792 = C5796 * C5781 * C5767;
    const double C5777 = C5774 + C5766;
    const double C5993 = C5990 + C5766;
    const double C6033 = C6030 + C5766;
    const double C2816 =
        C5781 *
            ((-(C5796 * C5822 * ce) / C5654) / C5643 - C5840 / C5745 +
             C5796 * ((-(C5796 * std::pow(C5748, 5) * bs[5] * C5837) / C5654) /
                          C5643 -
                      (C5822 * ce) / C5745)) -
        (ae * (C5796 * (C5796 * C5808 + C5766) + C5802 + C5796 * C5761 * ce)) /
            C5745;
    const double C5776 = C5773 * C5753;
    const double C5831 = C5830 * C5753;
    const double C5872 = C5871 * C5753;
    const double C3766 =
        (-(C5796 * C5840) / C5654) / C5643 - (C5816 * ce) / C5745 -
        (ae * (C5796 * C6010 + C5991 * ce)) / C5745 +
        C5781 *
            (C5781 * ((-(C5796 * std::pow(C5748, 5) * bs[5] * C5837) / C5654) /
                          C5643 -
                      (C5822 * ce) / C5745) -
             (ae * (C5796 * C5808 + C5766)) / C5745);
    const double C2733 = -(C5796 * (C5796 * C6010 + C5991 * ce) +
                           C5781 * C5802 + C5796 * C5991 * ce) /
                         C5654;
    const double C2843 = (C5781 * C5848 + C5796 * (C5796 * C6011 + C5991 * ae) +
                          C5796 * C5991 * ae) /
                         C5643;
    const double C2675 = C5781 * C5751 + C5991 * C5867;
    const double C247 = C6312 * C240;
    const double C414 = C6313 * C407;
    const double C246 = C191 * C124;
    const double C373 = C318 * C124;
    const double C1228 = C191 * C495;
    const double C1352 = C318 * C495;
    const double C2978 = C2124 * C495;
    const double C2412 = C2124 * C497;
    const double C2609 = C318 * C497;
    const double C1588 = C191 * C796;
    const double C1712 = C318 * C796;
    const double C5062 = C2124 * C796;
    const double C4441 = C2124 * C798;
    const double C4556 = C191 * C798;
    const double C3616 = C2124 * C1833;
    const double C3847 = C318 * C1833;
    const double C5497 = C191 * C1833;
    const double C286 = C191 * C159;
    const double C413 = C318 * C159;
    const double C1267 = C191 * C529;
    const double C1391 = C318 * C529;
    const double C3016 = C2124 * C529;
    const double C2447 = C2124 * C531;
    const double C2643 = C318 * C531;
    const double C1630 = C191 * C833;
    const double C1754 = C318 * C833;
    const double C5101 = C2124 * C833;
    const double C4478 = C2124 * C835;
    const double C4592 = C191 * C835;
    const double C3658 = C2124 * C1871;
    const double C3888 = C318 * C1871;
    const double C5535 = C191 * C1871;
    const double C208 = C6312 * C198;
    const double C206 = C6312 * C194;
    const double C1185 = C6312 * C563;
    const double C1547 = C6312 * C867;
    const double C4517 = C6312 * C869;
    const double C5453 = C6312 * C1909;
    const double C335 = C6313 * C325;
    const double C333 = C6313 * C321;
    const double C1309 = C6313 * C657;
    const double C2571 = C6313 * C659;
    const double C1671 = C6313 * C961;
    const double C3807 = C6313 * C2019;
    const double C2979 = C6311 * C499;
    const double C2413 = C6311 * C501;
    const double C5063 = C6311 * C800;
    const double C4442 = C6311 * C802;
    const double C3617 = C6311 * C1835;
    const double C1187 = C6312 * C567;
    const double C1549 = C6312 * C871;
    const double C4515 = C6312 * C873;
    const double C5455 = C6312 * C1911;
    const double C3017 = C6311 * C533;
    const double C2448 = C6311 * C535;
    const double C5102 = C6311 * C837;
    const double C4479 = C6311 * C839;
    const double C3659 = C6311 * C1873;
    const double C1268 = C6312 * C627;
    const double C4593 = C6312 * C932;
    const double C1631 = C6312 * C933;
    const double C5536 = C6312 * C1983;
    const double C1311 = C6313 * C661;
    const double C2569 = C6313 * C663;
    const double C1673 = C6313 * C965;
    const double C3805 = C6313 * C2021;
    const double C2610 = C6313 * C692;
    const double C1353 = C6313 * C693;
    const double C1713 = C6313 * C995;
    const double C3848 = C6313 * C2057;
    const double C2375 = C2368 + C2369;
    const double C2374 = C2366 + C2367;
    const double C2414 = C2410 + C2411;
    const double C2450 = C2445 + C2446;
    const double C4403 = C4396 + C4397;
    const double C4402 = C4394 + C4395;
    const double C4444 = C4439 + C4440;
    const double C4480 = C4476 + C4477;
    const double C77 =
        ((-C5656 / C5654) / C5658 -
         ((C6185 - (C5655 * C5661) / C5654) * de) / C5654) /
            C5658 -
        ((C5655 * ((-C5661 / C5654) / C5658 - (0 * de) / C5654) + C1064) * de) /
            C5654;
    const double C78 = ((-C5661 / C5654) / C5658 - (0 * de) / C5654) / C5658 -
                       (0 * de) / C5654;
    const double C449 = -C5661 / C5654;
    const double C1067 = (-C5656 / C5654) / C5658 -
                         ((C6185 - (C5655 * C5661) / C5654) * de) / C5654;
    const double C1068 = (-C5661 / C5654) / C5658 - (0 * de) / C5654;
    const double C76 =
        ((-(0 * de) / C5654) / C5658 -
         ((0 - (C5655 * C5656) / C5654) * de) / C5654) /
            C5658 -
        ((C5655 * ((-C5656 / C5654) / C5658 -
                   ((C6185 - (C5655 * C5661) / C5654) * de) / C5654) +
          C1063) *
         de) /
            C5654 +
        (-C5661 / C5654) / C5658 - (0 * de) / C5654;
    const double C493 =
        ((-C5684 / C5654) / C5658 -
         ((C6206 - (C5683 * C5687) / C5654) * de) / C5654) /
            C5658 -
        ((C5683 * ((-C5687 / C5654) / C5658 - (0 * de) / C5654) + C1066) * de) /
            C5654;
    const double C494 = ((-C5687 / C5654) / C5658 - (0 * de) / C5654) / C5658 -
                        (0 * de) / C5654;
    const double C1107 = (-C5684 / C5654) / C5658 -
                         ((C6206 - (C5683 * C5687) / C5654) * de) / C5654;
    const double C1108 = (-C5687 / C5654) / C5658 - (0 * de) / C5654;
    const double C492 =
        ((-(0 * de) / C5654) / C5658 -
         ((0 - (C5683 * C5684) / C5654) * de) / C5654) /
            C5658 -
        ((C5683 * ((-C5684 / C5654) / C5658 -
                   ((C6206 - (C5683 * C5687) / C5654) * de) / C5654) +
          C1065) *
         de) /
            C5654 +
        (-C5687 / C5654) / C5658 - (0 * de) / C5654;
    const double C831 =
        ((-C5700 / C5654) / C5658 -
         ((C6217 - (C5699 * C5703) / C5654) * de) / C5654) /
            C5658 -
        ((C5699 * ((-C5703 / C5654) / C5658 - (0 * de) / C5654) + C1430) * de) /
            C5654;
    const double C832 = ((-C5703 / C5654) / C5658 - (0 * de) / C5654) / C5658 -
                        (0 * de) / C5654;
    const double C1505 = (-C5700 / C5654) / C5658 -
                         ((C6217 - (C5699 * C5703) / C5654) * de) / C5654;
    const double C1506 = (-C5703 / C5654) / C5658 - (0 * de) / C5654;
    const double C830 =
        ((-(0 * de) / C5654) / C5658 -
         ((0 - (C5699 * C5700) / C5654) * de) / C5654) /
            C5658 -
        ((C5699 * ((-C5700 / C5654) / C5658 -
                   ((C6217 - (C5699 * C5703) / C5654) * de) / C5654) +
          C1429) *
         de) /
            C5654 +
        (-C5703 / C5654) / C5658 - (0 * de) / C5654;
    const double C210 = C203 + C204;
    const double C209 = C201 + C202;
    const double C249 = C244 + C245;
    const double C289 = C284 + C285;
    const double C4519 = C4512 + C4513;
    const double C4518 = C4510 + C4511;
    const double C4559 = C4554 + C4555;
    const double C4594 = C4590 + C4591;
    const double C337 = C330 + C331;
    const double C336 = C328 + C329;
    const double C376 = C371 + C372;
    const double C416 = C411 + C412;
    const double C2573 = C2566 + C2567;
    const double C2572 = C2564 + C2565;
    const double C2611 = C2607 + C2608;
    const double C2646 = C2641 + C2642;
    const double C2940 = C2936 + C2937;
    const double C2377 = C2372 + C2373;
    const double C5024 = C5020 + C5021;
    const double C4405 = C4400 + C4401;
    const double C3577 = C3574 + C3575;
    const double C502 =
        (-(C5744 * C5792) / C5654) / C5643 - (ae * C5787) / C5745 -
        (C5781 * C5778 * ce) / C5745 +
        C5781 *
            (C5781 * ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5788) / C5654) /
                          C5643 -
                      (ae * C5793) / C5745) -
             (C5778 * ce) / C5745);
    const double C840 =
        (-(C5744 * C5807) / C5654) / C5643 - (ae * C5802) / C5745 -
        (C5796 * C5778 * ce) / C5745 +
        C5796 *
            (C5796 * ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5803) / C5654) /
                          C5643 -
                      (ae * C5808) / C5745) -
             (C5778 * ce) / C5745);
    const double C1110 =
        C5781 *
            ((-(ae * C5893) / C5654) / C5643 - C5792 / C5745 +
             C5744 * ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5788) / C5654) /
                          C5643 -
                      (ae * C5793) / C5745)) -
        ((C5759 + C5744 * C5778 + C5767 * ae) * ce) / C5745;
    const double C1508 =
        C5796 *
            ((-(ae * C5899) / C5654) / C5643 - C5807 / C5745 +
             C5744 * ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5803) / C5654) /
                          C5643 -
                      (ae * C5808) / C5745)) -
        ((C5759 + C5744 * C5778 + C5767 * ae) * ce) / C5745;
    const double C1836 =
        C5796 *
        (C5781 *
             ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5788) / C5654) / C5643 -
              (ae * C5793) / C5745) -
         (C5778 * ce) / C5745);
    const double C1874 =
        C5796 * C5781 *
            ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5803) / C5654) / C5643 -
             (ae * C5808) / C5745) -
        (C5781 * C5778 * ce) / C5745;
    const double C89 = (2 * (C5744 * C5759 + C5751 * ae) +
                        C5744 * (C5759 + C5744 * C5778 + C5767 * ae) +
                        (C5751 + C5761 * C5752) * ae) /
                       C5643;
    const double C459 = (C5744 * C5759 + C5751 * ae + C5778 * C5826) / C5643;
    const double C763 = (C5744 * C5759 + C5751 * ae + C5778 * C5867) / C5643;
    const double C1070 = (C5781 * (C5759 + C5744 * C5778 + C5767 * ae)) / C5643;
    const double C1432 = (C5796 * (C5759 + C5744 * C5778 + C5767 * ae)) / C5643;
    const double C1794 = (C5796 * C5781 * C5778) / C5643;
    const double C2479 = (2 * (C5781 * C5816 + C5751 * ae) +
                          C5781 * (C5816 + C5781 * C5994 + C5991 * ae) +
                          (C5751 + C5761 * C5826) * ae) /
                         C5643;
    const double C2761 = (C5781 * C5816 + C5751 * ae + C5994 * C5867) / C5643;
    const double C3695 = (C5796 * (C5816 + C5781 * C5994 + C5991 * ae)) / C5643;
    const double C4621 = (2 * (C5796 * C5848 + C5751 * ae) +
                          C5796 * (C5848 + C5796 * C6034 + C6031 * ae) +
                          (C5751 + C5761 * C5867) * ae) /
                         C5643;
    const double C570 =
        (-(C5744 * C5821) / C5654) / C5643 - (C5816 * ce) / C5745 -
        (ae * C5781 * C5777) / C5745 +
        C5781 *
            (C5781 * ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5817) / C5654) /
                          C5643 -
                      (C5822 * ce) / C5745) -
             (ae * C5777) / C5745);
    const double C968 =
        (-(C5744 * C5853) / C5654) / C5643 - (C5848 * ce) / C5745 -
        (ae * C5796 * C5777) / C5745 +
        C5796 *
            (C5796 * ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5849) / C5654) /
                          C5643 -
                      (C5854 * ce) / C5745) -
             (ae * C5777) / C5745);
    const double C1182 =
        C5781 *
            ((-(C5894 * ce) / C5654) / C5643 - C5821 / C5745 +
             C5744 * ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5817) / C5654) /
                          C5643 -
                      (C5822 * ce) / C5745)) -
        (ae * (C5744 * C5777 + C5758 + C5767 * ce)) / C5745;
    const double C1668 =
        C5796 *
            ((-(C5908 * ce) / C5654) / C5643 - C5853 / C5745 +
             C5744 * ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5849) / C5654) /
                          C5643 -
                      (C5854 * ce) / C5745)) -
        (ae * (C5744 * C5777 + C5758 + C5767 * ce)) / C5745;
    const double C1912 =
        C5781 * C5796 *
            ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5817) / C5654) / C5643 -
             (C5822 * ce) / C5745) -
        (ae * C5796 * C5777) / C5745;
    const double C2022 =
        C5796 * C5781 *
            ((-(C5744 * std::pow(C5748, 5) * bs[5] * C5849) / C5654) / C5643 -
             (C5854 * ce) / C5745) -
        (ae * C5781 * C5777) / C5745;
    const double C90 = (-2 * (C5744 * C5758 + C5751 * ce)) / C5654 -
                       (C5744 * (C5744 * C5777 + C5758 + C5767 * ce)) / C5654 -
                       ((C5751 + C5761 * C5752) * ce) / C5654;
    const double C461 = -(C5777 * C5826 + C5744 * C5758 + C5751 * ce) / C5654;
    const double C765 = -(C5777 * C5867 + C5744 * C5758 + C5751 * ce) / C5654;
    const double C1071 =
        -(C5781 * (C5744 * C5777 + C5758 + C5767 * ce)) / C5654;
    const double C1433 =
        -(C5796 * (C5744 * C5777 + C5758 + C5767 * ce)) / C5654;
    const double C1796 = -(C5796 * C5781 * C5777) / C5654;
    const double C2871 =
        (-(C5781 * C5863) / C5654) / C5643 - (C5848 * ce) / C5745 -
        (ae * C5796 * C5993) / C5745 +
        C5796 *
            (C5796 * ((-(C5781 * std::pow(C5748, 5) * bs[5] * C5860) / C5654) /
                          C5643 -
                      (C5854 * ce) / C5745) -
             (ae * C5993) / C5745);
    const double C3845 =
        C5796 *
            ((-(C6011 * ce) / C5654) / C5643 - C5863 / C5745 +
             C5781 * ((-(C5781 * std::pow(C5748, 5) * bs[5] * C5860) / C5654) /
                          C5643 -
                      (C5854 * ce) / C5745)) -
        (ae * (C5781 * C5993 + C5787 + C5991 * ce)) / C5745;
    const double C2407 =
        (-2 * (C5781 * C5787 + C5751 * ce)) / C5654 -
        (C5781 * (C5781 * C5993 + C5787 + C5991 * ce)) / C5654 -
        ((C5751 + C5761 * C5826) * ce) / C5654;
    const double C2705 = -(C5993 * C5867 + C5781 * C5787 + C5751 * ce) / C5654;
    const double C3613 =
        -(C5796 * (C5781 * C5993 + C5787 + C5991 * ce)) / C5654;
    const double C4473 =
        (-2 * (C5796 * C5802 + C5751 * ce)) / C5654 -
        (C5796 * (C5796 * C6033 + C5802 + C6031 * ce)) / C5654 -
        ((C5751 + C5761 * C5867) * ce) / C5654;
    const double C94 =
        2 * ((-(C5759 * ce) / C5654) / C5643 - (ae * C5758) / C5745 -
             (C5744 * C5776) / C5745) -
        (ae * (C5744 * C5777 + C5758 + C5767 * ce)) / C5745 -
        ((C5759 + C5744 * C5778 + C5767 * ae) * ce) / C5745 +
        C5744 *
            ((-(ae * C5777) / C5654) / C5643 - C5776 / C5745 -
             (C5778 * ce) / C5745 +
             C5744 * ((-(C5772 * ce) / C5654) / C5643 - (ae * C5771) / C5745 -
                      (C5744 *
                       (C5762 * C5763 + C5752 * bs[5] * std::pow(C5748, 5)) *
                       C5753) /
                          C5745));
    const double C462 = (-(C5781 * C5759 * ce) / C5654) / C5643 -
                        (ae * C5781 * C5758) / C5745 -
                        (C5744 * C5781 * C5776) / C5745;
    const double C464 = (-(C5776 * C5826) / C5654) / C5643 -
                        ((C5751 + C5752 * C5749 * C5755) * C5753) / C5745;
    const double C465 =
        (-((C5759 + C5772 * C5826) * ce) / C5654) / C5643 -
        (ae * (C5771 * C5826 + C5758)) / C5745 +
        C5744 * ((-((C5762 * C5763 + C5752 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5826) /
                  C5654) /
                     C5643 -
                 C5776 / C5745);
    const double C766 = (-(C5796 * C5759 * ce) / C5654) / C5643 -
                        (ae * C5796 * C5758) / C5745 -
                        (C5744 * C5796 * C5776) / C5745;
    const double C768 = (-(C5776 * C5867) / C5654) / C5643 -
                        ((C5751 + C5752 * C5749 * C5755) * C5753) / C5745;
    const double C769 =
        (-((C5759 + C5772 * C5867) * ce) / C5654) / C5643 -
        (ae * (C5771 * C5867 + C5758)) / C5745 +
        C5744 * ((-((C5762 * C5763 + C5752 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5867) /
                  C5654) /
                     C5643 -
                 C5776 / C5745);
    const double C1072 =
        (-(ae * C5781 * C5777) / C5654) / C5643 - (C5781 * C5776) / C5745 -
        (C5781 * C5778 * ce) / C5745 +
        C5744 *
            ((-(C5781 * C5772 * ce) / C5654) / C5643 -
             (ae * C5781 * C5771) / C5745 -
             (C5744 * C5781 *
              (C5762 * C5763 + C5752 * bs[5] * std::pow(C5748, 5)) * C5753) /
                 C5745);
    const double C1434 =
        (-(ae * C5796 * C5777) / C5654) / C5643 - (C5796 * C5776) / C5745 -
        (C5796 * C5778 * ce) / C5745 +
        C5744 *
            ((-(C5796 * C5772 * ce) / C5654) / C5643 -
             (ae * C5796 * C5771) / C5745 -
             (C5744 * C5796 *
              (C5762 * C5763 + C5752 * bs[5] * std::pow(C5748, 5)) * C5753) /
                 C5745);
    const double C1797 = (-(C5796 * C5781 * C5776) / C5654) / C5643;
    const double C2364 =
        (-2 * C5781 * C5776) / C5745 +
        C5781 * ((-((C5762 * C5763 + C5752 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5826) /
                  C5654) /
                     C5643 -
                 C5776 / C5745);
    const double C2678 =
        (-(C5781 * (C5762 * C5763 + C5752 * bs[5] * std::pow(C5748, 5)) *
           C5753 * C5867) /
         C5654) /
            C5643 -
        (C5781 * C5776) / C5745;
    const double C3570 =
        C5796 * ((-((C5762 * C5763 + C5752 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5826) /
                  C5654) /
                     C5643 -
                 C5776 / C5745);
    const double C4392 =
        (-2 * C5796 * C5776) / C5745 +
        C5796 * ((-((C5762 * C5763 + C5752 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5867) /
                  C5654) /
                     C5643 -
                 C5776 / C5745);
    const double C241 =
        (-2 * C5744 * C5831) / C5745 +
        C5744 * ((-((C5762 * C5763 + C5826 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5752) /
                  C5654) /
                     C5643 -
                 C5831 / C5745);
    const double C598 =
        (-(ae * (C5781 * C5787 + C5751 * ce)) / C5654) / C5643 -
        ((C5751 + C5826 * C5749 * C5755) * C5753) / C5745 -
        ((C5781 * C5816 + C5751 * ae) * ce) / C5745 +
        C5781 * ((-(C5816 * ce) / C5654) / C5643 - (ae * C5787) / C5745 -
                 (C5781 * C5831) / C5745);
    const double C599 = (-(C5744 * C5816 * ce) / C5654) / C5643 -
                        (ae * C5744 * C5787) / C5745 -
                        (C5781 * C5744 * C5831) / C5745;
    const double C600 =
        (-(ae * (C5781 * C5893 + C5767 * ce)) / C5654) / C5643 -
        (C5744 * C5831) / C5745 - ((C5781 * C5894 + C5767 * ae) * ce) / C5745 +
        C5781 *
            ((-(C5894 * ce) / C5654) / C5643 - (ae * C5893) / C5745 -
             (C5781 * C5744 *
              (C5762 * C5763 + C5826 * bs[5] * std::pow(C5748, 5)) * C5753) /
                 C5745);
    const double C901 = (-(C5796 * C5744 * C5831) / C5654) / C5643;
    const double C903 = (-(C5831 * C5867) / C5654) / C5643 -
                        ((C5751 + C5826 * C5749 * C5755) * C5753) / C5745;
    const double C904 =
        (-(C5744 * (C5762 * C5763 + C5826 * bs[5] * std::pow(C5748, 5)) *
           C5753 * C5867) /
         C5654) /
            C5643 -
        (C5744 * C5831) / C5745;
    const double C1223 =
        (-((C5816 + C5822 * C5752) * ce) / C5654) / C5643 -
        (ae * (C5793 * C5752 + C5787)) / C5745 +
        C5781 * ((-((C5762 * C5763 + C5826 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5752) /
                  C5654) /
                     C5643 -
                 C5831 / C5745);
    const double C1585 =
        C5796 * ((-((C5762 * C5763 + C5826 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5752) /
                  C5654) /
                     C5643 -
                 C5831 / C5745);
    const double C1947 = (-(C5796 * C5816 * ce) / C5654) / C5643 -
                         (ae * C5796 * C5787) / C5745 -
                         (C5781 * C5796 * C5831) / C5745;
    const double C2507 =
        2 * ((-(C5816 * ce) / C5654) / C5643 - (ae * C5787) / C5745 -
             (C5781 * C5831) / C5745) -
        (ae * (C5781 * C5993 + C5787 + C5991 * ce)) / C5745 -
        ((C5816 + C5781 * C5994 + C5991 * ae) * ce) / C5745 +
        C5781 *
            ((-(ae * C5993) / C5654) / C5643 - C5831 / C5745 -
             (C5994 * ce) / C5745 +
             C5781 * ((-(C5822 * ce) / C5654) / C5643 - (ae * C5793) / C5745 -
                      (C5781 *
                       (C5762 * C5763 + C5826 * bs[5] * std::pow(C5748, 5)) *
                       C5753) /
                          C5745));
    const double C2789 =
        (-((C5816 + C5822 * C5867) * ce) / C5654) / C5643 -
        (ae * (C5793 * C5867 + C5787)) / C5745 +
        C5781 * ((-((C5762 * C5763 + C5826 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5867) /
                  C5654) /
                     C5643 -
                 C5831 / C5745);
    const double C3731 =
        (-(ae * C5796 * C5993) / C5654) / C5643 - (C5796 * C5831) / C5745 -
        (C5796 * C5994 * ce) / C5745 +
        C5781 *
            ((-(C5796 * C5822 * ce) / C5654) / C5643 -
             (ae * C5796 * C5793) / C5745 -
             (C5781 * C5796 *
              (C5762 * C5763 + C5826 * bs[5] * std::pow(C5748, 5)) * C5753) /
                 C5745);
    const double C4551 =
        (-2 * C5796 * C5831) / C5745 +
        C5796 * ((-((C5762 * C5763 + C5826 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5867) /
                  C5654) /
                     C5643 -
                 C5831 / C5745);
    const double C408 =
        (-2 * C5744 * C5872) / C5745 +
        C5744 * ((-((C5762 * C5763 + C5867 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5752) /
                  C5654) /
                     C5643 -
                 C5872 / C5745);
    const double C721 = (-(C5781 * C5744 * C5872) / C5654) / C5643;
    const double C723 = (-(C5872 * C5826) / C5654) / C5643 -
                        ((C5751 + C5867 * C5749 * C5755) * C5753) / C5745;
    const double C724 =
        (-(C5744 * (C5762 * C5763 + C5867 * bs[5] * std::pow(C5748, 5)) *
           C5753 * C5826) /
         C5654) /
            C5643 -
        (C5744 * C5872) / C5745;
    const double C1026 =
        (-(ae * (C5796 * C5802 + C5751 * ce)) / C5654) / C5643 -
        ((C5751 + C5867 * C5749 * C5755) * C5753) / C5745 -
        ((C5796 * C5848 + C5751 * ae) * ce) / C5745 +
        C5796 * ((-(C5848 * ce) / C5654) / C5643 - (ae * C5802) / C5745 -
                 (C5796 * C5872) / C5745);
    const double C1027 = (-(C5744 * C5848 * ce) / C5654) / C5643 -
                         (ae * C5744 * C5802) / C5745 -
                         (C5796 * C5744 * C5872) / C5745;
    const double C1028 =
        (-(ae * (C5796 * C5899 + C5767 * ce)) / C5654) / C5643 -
        (C5744 * C5872) / C5745 - ((C5796 * C5908 + C5767 * ae) * ce) / C5745 +
        C5796 *
            ((-(C5908 * ce) / C5654) / C5643 - (ae * C5899) / C5745 -
             (C5796 * C5744 *
              (C5762 * C5763 + C5867 * bs[5] * std::pow(C5748, 5)) * C5753) /
                 C5745);
    const double C1389 =
        C5781 * ((-((C5762 * C5763 + C5867 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5752) /
                  C5654) /
                     C5643 -
                 C5872 / C5745);
    const double C1749 =
        (-((C5848 + C5854 * C5752) * ce) / C5654) / C5643 -
        (ae * (C5808 * C5752 + C5802)) / C5745 +
        C5796 * ((-((C5762 * C5763 + C5867 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5752) /
                  C5654) /
                     C5643 -
                 C5872 / C5745);
    const double C2093 = (-(C5781 * C5848 * ce) / C5654) / C5643 -
                         (ae * C5781 * C5802) / C5745 -
                         (C5796 * C5781 * C5872) / C5745;
    const double C2638 =
        (-2 * C5781 * C5872) / C5745 +
        C5781 * ((-((C5762 * C5763 + C5867 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5826) /
                  C5654) /
                     C5643 -
                 C5872 / C5745);
    const double C2898 =
        (-(ae * (C5796 * C6010 + C5991 * ce)) / C5654) / C5643 -
        (C5781 * C5872) / C5745 - ((C5796 * C6011 + C5991 * ae) * ce) / C5745 +
        C5796 *
            ((-(C6011 * ce) / C5654) / C5643 - (ae * C6010) / C5745 -
             (C5796 * C5781 *
              (C5762 * C5763 + C5867 * bs[5] * std::pow(C5748, 5)) * C5753) /
                 C5745);
    const double C3883 =
        (-((C5848 + C5854 * C5826) * ce) / C5654) / C5643 -
        (ae * (C5808 * C5826 + C5802)) / C5745 +
        C5796 * ((-((C5762 * C5763 + C5867 * bs[5] * std::pow(C5748, 5)) *
                    C5753 * C5826) /
                  C5654) /
                     C5643 -
                 C5872 / C5745);
    const double C4676 =
        2 * ((-(C5848 * ce) / C5654) / C5643 - (ae * C5802) / C5745 -
             (C5796 * C5872) / C5745) -
        (ae * (C5796 * C6033 + C5802 + C6031 * ce)) / C5745 -
        ((C5848 + C5796 * C6034 + C6031 * ae) * ce) / C5745 +
        C5796 *
            ((-(ae * C6033) / C5654) / C5643 - C5872 / C5745 -
             (C6034 * ce) / C5745 +
             C5796 * ((-(C5854 * ce) / C5654) / C5643 - (ae * C5808) / C5745 -
                      (C5796 *
                       (C5762 * C5763 + C5867 * bs[5] * std::pow(C5748, 5)) *
                       C5753) /
                          C5745));
    const double C250 = C246 + C247;
    const double C377 = C373 + C374;
    const double C290 = C286 + C287;
    const double C417 = C413 + C414;
    const double C212 = C207 + C208;
    const double C211 = C205 + C206;
    const double C1188 = C1184 + C1185;
    const double C1550 = C1546 + C1547;
    const double C4521 = C4516 + C4517;
    const double C5456 = C5452 + C5453;
    const double C339 = C334 + C335;
    const double C338 = C332 + C333;
    const double C1312 = C1308 + C1309;
    const double C2575 = C2570 + C2571;
    const double C1674 = C1670 + C1671;
    const double C3809 = C3806 + C3807;
    const double C2980 = C2978 + C2979;
    const double C2415 = C2412 + C2413;
    const double C5065 = C5062 + C5063;
    const double C4445 = C4441 + C4442;
    const double C3618 = C3616 + C3617;
    const double C1189 = C1186 + C1187;
    const double C1551 = C1548 + C1549;
    const double C4520 = C4514 + C4515;
    const double C5457 = C5454 + C5455;
    const double C3018 = C3016 + C3017;
    const double C2451 = C2447 + C2448;
    const double C5103 = C5101 + C5102;
    const double C4481 = C4478 + C4479;
    const double C3660 = C3658 + C3659;
    const double C1270 = C1267 + C1268;
    const double C4595 = C4592 + C4593;
    const double C1632 = C1630 + C1631;
    const double C5537 = C5535 + C5536;
    const double C1313 = C1310 + C1311;
    const double C2574 = C2568 + C2569;
    const double C1675 = C1672 + C1673;
    const double C3808 = C3804 + C3805;
    const double C2612 = C2609 + C2610;
    const double C1354 = C1352 + C1353;
    const double C1714 = C1712 + C1713;
    const double C3849 = C3847 + C3848;
    const double C2379 = C2375 * C6185;
    const double C2935 = C2375 * C1063;
    const double C2444 = C2374 * C156;
    const double C2452 = C2450 * C6217;
    const double C3656 = C2450 * C1429;
    const double C4407 = C4403 * C6185;
    const double C5019 = C4403 * C1063;
    const double C4438 = C4402 * C121;
    const double C4446 = C4444 * C6206;
    const double C5381 = C4444 * C1065;
    const double C2378 = C2374 * C449;
    const double C4406 = C4402 * C449;
    const double C2934 = C2374 * C1067;
    const double C5018 = C4402 * C1067;
    const double C5380 = C4402 * C1107;
    const double C3655 = C2374 * C1505;
    const double C243 = C209 * C121;
    const double C283 = C209 * C156;
    const double C1225 = C209 * C1107;
    const double C1627 = C209 * C1505;
    const double C251 = C249 * C6206;
    const double C1226 = C249 * C1065;
    const double C291 = C289 * C6217;
    const double C1628 = C289 * C1429;
    const double C4523 = C4519 * C6185;
    const double C5139 = C4519 * C1063;
    const double C4522 = C4518 * C449;
    const double C4553 = C4518 * C121;
    const double C5138 = C4518 * C1067;
    const double C5494 = C4518 * C1107;
    const double C4561 = C4559 * C6206;
    const double C5495 = C4559 * C1065;
    const double C370 = C336 * C121;
    const double C410 = C336 * C156;
    const double C1349 = C336 * C1107;
    const double C1751 = C336 * C1505;
    const double C378 = C376 * C6206;
    const double C1350 = C376 * C1065;
    const double C418 = C416 * C6217;
    const double C1752 = C416 * C1429;
    const double C2577 = C2573 * C6185;
    const double C3157 = C2573 * C1063;
    const double C2576 = C2572 * C449;
    const double C2640 = C2572 * C156;
    const double C3156 = C2572 * C1067;
    const double C3885 = C2572 * C1505;
    const double C2648 = C2646 * C6217;
    const double C3886 = C2646 * C1429;
    const double C2942 = C2940 * C1068;
    const double C3015 = C2940 * C156;
    const double C2381 = C2377 * C449;
    const double C2449 = C2377 * C156;
    const double C5026 = C5024 * C1068;
    const double C5064 = C5024 * C121;
    const double C4409 = C4405 * C449;
    const double C4443 = C4405 * C121;
    const double C3579 = C3577 * C449;
    const double C3657 = C3577 * C1506;
    const double C5382 = C3577 * C1108;
    const double C2939 = C6311 * C462;
    const double C2371 = C6311 * C464;
    const double C5023 = C6311 * C766;
    const double C4399 = C6311 * C768;
    const double C3573 = C6311 * C1797;
    const double C1229 = C6312 * C599;
    const double C1589 = C6312 * C901;
    const double C4557 = C6312 * C903;
    const double C5498 = C6312 * C1947;
    const double C1392 = C6313 * C721;
    const double C2644 = C6313 * C723;
    const double C1755 = C6313 * C1027;
    const double C3889 = C6313 * C2093;
    const double C252 = C250 * C6206;
    const double C379 = C377 * C6206;
    const double C292 = C290 * C6217;
    const double C419 = C417 * C6217;
    const double C248 = C211 * C121;
    const double C288 = C211 * C156;
    const double C1227 = C1188 * C1108;
    const double C1269 = C1188 * C156;
    const double C1587 = C1550 * C121;
    const double C1629 = C1550 * C1506;
    const double C5140 = C1550 * C1068;
    const double C4525 = C4521 * C449;
    const double C4558 = C4521 * C121;
    const double C5458 = C5456 * C449;
    const double C5496 = C5456 * C1108;
    const double C375 = C338 * C121;
    const double C415 = C338 * C156;
    const double C1351 = C1312 * C1108;
    const double C1393 = C1312 * C156;
    const double C3158 = C1312 * C1068;
    const double C2579 = C2575 * C449;
    const double C2645 = C2575 * C156;
    const double C1711 = C1674 * C121;
    const double C1753 = C1674 * C1506;
    const double C3811 = C3809 * C449;
    const double C3887 = C3809 * C1506;
    const double C5066 = C5065 * C6206;
    const double C4447 = C4445 * C6206;
    const double C5383 = C3618 * C1066;
    const double C5141 = C1551 * C1064;
    const double C4524 = C4520 * C6185;
    const double C5459 = C5457 * C6185;
    const double C3019 = C3018 * C6217;
    const double C2453 = C2451 * C6217;
    const double C3661 = C3660 * C1430;
    const double C1271 = C1270 * C6217;
    const double C1633 = C1632 * C1430;
    const double C3159 = C1313 * C1064;
    const double C2578 = C2574 * C6185;
    const double C3810 = C3808 * C6185;
    const double C1355 = C1354 * C1066;
    const double C1715 = C1714 * C6206;
    const double C2941 = C2938 + C2939;
    const double C2376 = C2370 + C2371;
    const double C5025 = C5022 + C5023;
    const double C4404 = C4398 + C4399;
    const double C3576 = C3572 + C3573;
    const double C1230 = C1228 + C1229;
    const double C1590 = C1588 + C1589;
    const double C4560 = C4556 + C4557;
    const double C5499 = C5497 + C5498;
    const double C1394 = C1391 + C1392;
    const double C2647 = C2643 + C2644;
    const double C1756 = C1754 + C1755;
    const double C3890 = C3888 + C3889;
    const double C2943 = C2941 * C1064;
    const double C2380 = C2376 * C6185;
    const double C5027 = C5025 * C1064;
    const double C4408 = C4404 * C6185;
    const double C3578 = C3576 * C6185;
    const double C1231 = C1230 * C1066;
    const double C1591 = C1590 * C6206;
    const double C4562 = C4560 * C6206;
    const double C5500 = C5499 * C1066;
    const double C1395 = C1394 * C6217;
    const double C2649 = C2647 * C6217;
    const double C1757 = C1756 * C1430;
    const double C3891 = C3890 * C1430;
    d2eexx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C1067 +
           (C74 * C85 + C65 * C91 + C75 * C86 + C66 * C92) * C1063 -
           (C75 * C81 + C66 * C87 + C74 * C80 + C65 * C84) * C1068 -
           (C75 * C88 + C66 * C93 + C74 * C86 + C65 * C92) * C1064) *
              C6312 * C6313 * C6217 * C1065 +
          ((C74 * C450 + C65 * C456 + C75 * C1069 + C66 * C1070) * C1068 -
           ((C75 * C454 + C66 * C462 + C74 * C455 + C65 * C463) * C1063 +
            (C75 * C450 + C66 * C456 + C74 * C451 + C65 * C457) * C1067) +
           (C74 * C454 + C65 * C462 + C75 * C1071 + C66 * C1072) * C1064) *
              C6312 * C6313 * C6217 * C1066)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C1107 +
           (C74 * C122 + C65 * C126 + C75 * C123 + C66 * C127) * C1065 -
           (C75 * C450 + C66 * C456 + C74 * C451 + C65 * C457) * C1108 -
           (C75 * C495 + C66 * C499 + C74 * C496 + C65 * C500) * C1066) *
              C6312 * C6313 * C1063 +
          ((C74 * C450 + C65 * C456 + C75 * C1069 + C66 * C1070) * C1108 -
           ((C75 * C124 + C66 * C128 + C74 * C123 + C65 * C127) * C1065 +
            (C75 * C81 + C66 * C87 + C74 * C80 + C65 * C84) * C1107) +
           (C74 * C495 + C65 * C499 + C75 * C1109 + C66 * C1110) * C1066) *
              C6312 * C6313 * C1064) *
         C6217) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C156 +
            (C74 * C157 + C65 * C161 + C75 * C158 + C66 * C162) * C6217) *
               C6312 * C6313 * C1065 -
           ((C75 * C529 + C66 * C533 + C74 * C530 + C65 * C534) * C6217 +
            (C75 * C450 + C66 * C456 + C74 * C451 + C65 * C457) * C156) *
               C6312 * C6313 * C1066) *
              C1063 +
          (((C74 * C450 + C65 * C456 + C75 * C1069 + C66 * C1070) * C156 +
            (C74 * C529 + C65 * C533 + C75 * C1145 + C66 * C1146) * C6217) *
               C6312 * C6313 * C1066 -
           ((C75 * C159 + C66 * C163 + C74 * C158 + C65 * C162) * C6217 +
            (C75 * C81 + C66 * C87 + C74 * C80 + C65 * C84) * C156) *
               C6312 * C6313 * C1065) *
              C1064)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C1067 +
            (C191 * C85 + C6312 * C196) * C1063 - C209 * C1068 - C210 * C1064) *
               C6313 * C65 +
           (C209 * C1067 + C210 * C1063 - C211 * C1068 - C212 * C1064) * C6313 *
               C66) *
              C6217 * C1065 +
          ((C1188 * C1068 -
            ((C191 * C455 + C6312 * C568) * C1063 +
             (C191 * C451 + C6312 * C564) * C1067) +
            C1189 * C1064) *
               C6313 * C65 +
           ((C191 * C1069 + C6312 * C1181) * C1068 -
            (C1189 * C1063 + C1188 * C1067) +
            (C191 * C1071 + C6312 * C1182) * C1064) *
               C6313 * C66) *
              C6217 * C1066)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C191 * C79 + C6312 * C192) * C1107 +
                     (C191 * C122 + C6312 * C238) * C1065 -
                     (C191 * C451 + C6312 * C564) * C1108 -
                     (C191 * C496 + C6312 * C597) * C1066) *
                        C6313 * C65 +
                    (C1225 + C1226 - C1227 - C1231) * C6313 * C66) *
                       C1063 +
                   ((C1227 - (C1226 + C1225) + C1231) * C6313 * C65 +
                    ((C191 * C1069 + C6312 * C1181) * C1108 -
                     (C250 * C1065 + C211 * C1107) +
                     (C191 * C1109 + C6312 * C1223) * C1066) *
                        C6313 * C66) *
                       C1064) *
                  C6217) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C191 * C79 + C6312 * C192) * C156 +
             (C191 * C157 + C6312 * C278) * C6217) *
                C6313 * C65 +
            (C283 + C291) * C6313 * C66) *
               C1065 -
           ((C1271 + C1269) * C6313 * C66 +
            ((C191 * C530 + C6312 * C628) * C6217 +
             (C191 * C451 + C6312 * C564) * C156) *
                C6313 * C65) *
               C1066) *
              C1063 +
          (((C1269 + C1271) * C6313 * C65 +
            ((C191 * C1069 + C6312 * C1181) * C156 +
             (C191 * C1145 + C6312 * C1265) * C6217) *
                C6313 * C66) *
               C1066 -
           ((C292 + C288) * C6313 * C66 + (C291 + C283) * C6313 * C65) *
               C1065) *
              C1064)) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C1067 +
            (C318 * C85 + C6313 * C323) * C1063 - C336 * C1068 - C337 * C1064) *
               C65 +
           (C336 * C1067 + C337 * C1063 - C338 * C1068 - C339 * C1064) * C66) *
              C6312 * C6217 * C1065 +
          ((C1312 * C1068 -
            ((C318 * C455 + C6313 * C662) * C1063 +
             (C318 * C451 + C6313 * C658) * C1067) +
            C1313 * C1064) *
               C65 +
           ((C318 * C1069 + C6313 * C1305) * C1068 -
            (C1313 * C1063 + C1312 * C1067) +
            (C318 * C1071 + C6313 * C1306) * C1064) *
               C66) *
              C6312 * C6217 * C1066)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C6313 * C319) * C1107 +
                     (C318 * C122 + C6313 * C365) * C1065 -
                     (C318 * C451 + C6313 * C658) * C1108 -
                     (C318 * C496 + C6313 * C691) * C1066) *
                        C65 +
                    (C1349 + C1350 - C1351 - C1355) * C66) *
                       C6312 * C1063 +
                   ((C1351 - (C1350 + C1349) + C1355) * C65 +
                    ((C318 * C1069 + C6313 * C1305) * C1108 -
                     (C377 * C1065 + C338 * C1107) +
                     (C318 * C1109 + C6313 * C1347) * C1066) *
                        C66) *
                       C6312 * C1064) *
                  C6217) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C6313 * C319) * C156 +
             (C318 * C157 + C6313 * C405) * C6217) *
                C65 +
            (C410 + C418) * C66) *
               C6312 * C1065 -
           ((C1395 + C1393) * C66 + ((C318 * C530 + C6313 * C722) * C6217 +
                                     (C318 * C451 + C6313 * C658) * C156) *
                                        C65) *
               C6312 * C1066) *
              C1063 +
          (((C1393 + C1395) * C65 + ((C318 * C1069 + C6313 * C1305) * C156 +
                                     (C318 * C1145 + C6313 * C1389) * C6217) *
                                        C66) *
               C6312 * C1066 -
           ((C419 + C415) * C66 + (C418 + C410) * C65) * C6312 * C1065) *
              C1064)) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C449 +
            (C74 * C85 + C65 * C91 + C75 * C86 + C66 * C92) * C6185) *
               C6312 * C6313 * C1429 -
           ((C75 * C758 + C66 * C766 + C74 * C759 + C65 * C767) * C6185 +
            (C75 * C754 + C66 * C760 + C74 * C755 + C65 * C761) * C449) *
               C6312 * C6313 * C1430) *
              C1065 +
          (((C74 * C1791 + C65 * C1793 + C75 * C1792 + C66 * C1794) * C449 +
            (C74 * C1795 + C65 * C1797 + C75 * C1796 + C66 * C1798) * C6185) *
               C6312 * C6313 * C1430 -
           ((C75 * C454 + C66 * C462 + C74 * C455 + C65 * C463) * C6185 +
            (C75 * C450 + C66 * C456 + C74 * C451 + C65 * C457) * C449) *
               C6312 * C6313 * C1429) *
              C1066)) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C1107 +
           (C74 * C122 + C65 * C126 + C75 * C123 + C66 * C127) * C1065 -
           (C75 * C450 + C66 * C456 + C74 * C451 + C65 * C457) * C1108 -
           (C75 * C495 + C66 * C499 + C74 * C496 + C65 * C500) * C1066) *
              C6312 * C6313 * C6185 * C1429 +
          ((C74 * C1791 + C65 * C1793 + C75 * C1792 + C66 * C1794) * C1108 -
           ((C75 * C796 + C66 * C800 + C74 * C797 + C65 * C801) * C1065 +
            (C75 * C754 + C66 * C760 + C74 * C755 + C65 * C761) * C1107) +
           (C74 * C1833 + C65 * C1835 + C75 * C1834 + C66 * C1836) * C1066) *
              C6312 * C6313 * C6185 * C1430)) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C1505 +
           (C74 * C157 + C65 * C161 + C75 * C158 + C66 * C162) * C1429 -
           (C75 * C754 + C66 * C760 + C74 * C755 + C65 * C761) * C1506 -
           (C75 * C833 + C66 * C837 + C74 * C834 + C65 * C838) * C1430) *
              C6312 * C6313 * C1065 +
          ((C74 * C1791 + C65 * C1793 + C75 * C1792 + C66 * C1794) * C1506 -
           ((C75 * C529 + C66 * C533 + C74 * C530 + C65 * C534) * C1429 +
            (C75 * C450 + C66 * C456 + C74 * C451 + C65 * C457) * C1505) +
           (C74 * C1871 + C65 * C1873 + C75 * C1872 + C66 * C1874) * C1430) *
              C6312 * C6313 * C1066) *
         C6185) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C191 * C79 + C6312 * C192) * C449 +
                      (C191 * C85 + C6312 * C196) * C6185) *
                         C6313 * C65 +
                     (C209 * C449 + C210 * C6185) * C6313 * C66) *
                        C1429 -
                    ((C1551 * C6185 + C1550 * C449) * C6313 * C66 +
                     ((C191 * C759 + C6312 * C872) * C6185 +
                      (C191 * C755 + C6312 * C868) * C449) *
                         C6313 * C65) *
                        C1430) *
                       C1065 +
                   ((((C191 * C1791 + C6312 * C1909) * C449 +
                      (C191 * C1795 + C6312 * C1911) * C6185) *
                         C6313 * C65 +
                     ((C191 * C1792 + C6312 * C1910) * C449 +
                      (C191 * C1796 + C6312 * C1912) * C6185) *
                         C6313 * C66) *
                        C1430 -
                    ((C1189 * C6185 + C1188 * C449) * C6313 * C66 +
                     ((C191 * C455 + C6312 * C568) * C6185 +
                      (C191 * C451 + C6312 * C564) * C449) *
                         C6313 * C65) *
                        C1429) *
                       C1066)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C191 * C79 + C6312 * C192) * C1107 +
                     (C191 * C122 + C6312 * C238) * C1065 -
                     (C191 * C451 + C6312 * C564) * C1108 -
                     (C191 * C496 + C6312 * C597) * C1066) *
                        C6313 * C65 +
                    (C1225 + C1226 - C1227 - C1231) * C6313 * C66) *
                       C6185 * C1429 +
                   (((C191 * C1791 + C6312 * C1909) * C1108 -
                     ((C191 * C797 + C6312 * C902) * C1065 +
                      (C191 * C755 + C6312 * C868) * C1107) +
                     (C191 * C1833 + C6312 * C1947) * C1066) *
                        C6313 * C65 +
                    ((C191 * C1792 + C6312 * C1910) * C1108 -
                     (C1590 * C1065 + C1550 * C1107) +
                     (C191 * C1834 + C6312 * C1948) * C1066) *
                        C6313 * C66) *
                       C6185 * C1430)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C191 * C79 + C6312 * C192) * C1505 +
                     (C191 * C157 + C6312 * C278) * C1429 -
                     (C191 * C755 + C6312 * C868) * C1506 -
                     (C191 * C834 + C6312 * C931) * C1430) *
                        C6313 * C65 +
                    (C1627 + C1628 - C1629 - C1633) * C6313 * C66) *
                       C1065 +
                   (((C191 * C1791 + C6312 * C1909) * C1506 -
                     ((C191 * C530 + C6312 * C628) * C1429 +
                      (C191 * C451 + C6312 * C564) * C1505) +
                     (C191 * C1871 + C6312 * C1983) * C1430) *
                        C6313 * C65 +
                    ((C191 * C1792 + C6312 * C1910) * C1506 -
                     (C1270 * C1429 + C1188 * C1505) +
                     (C191 * C1872 + C6312 * C1984) * C1430) *
                        C6313 * C66) *
                       C1066) *
                  C6185) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C318 * C79 + C6313 * C319) * C449 +
                      (C318 * C85 + C6313 * C323) * C6185) *
                         C65 +
                     (C336 * C449 + C337 * C6185) * C66) *
                        C6312 * C1429 -
                    ((C1675 * C6185 + C1674 * C449) * C66 +
                     ((C318 * C759 + C6313 * C966) * C6185 +
                      (C318 * C755 + C6313 * C962) * C449) *
                         C65) *
                        C6312 * C1430) *
                       C1065 +
                   ((((C318 * C1791 + C6313 * C2019) * C449 +
                      (C318 * C1795 + C6313 * C2021) * C6185) *
                         C65 +
                     ((C318 * C1792 + C6313 * C2020) * C449 +
                      (C318 * C1796 + C6313 * C2022) * C6185) *
                         C66) *
                        C6312 * C1430 -
                    ((C1313 * C6185 + C1312 * C449) * C66 +
                     ((C318 * C455 + C6313 * C662) * C6185 +
                      (C318 * C451 + C6313 * C658) * C449) *
                         C65) *
                        C6312 * C1429) *
                       C1066)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C6313 * C319) * C1107 +
                     (C318 * C122 + C6313 * C365) * C1065 -
                     (C318 * C451 + C6313 * C658) * C1108 -
                     (C318 * C496 + C6313 * C691) * C1066) *
                        C65 +
                    (C1349 + C1350 - C1351 - C1355) * C66) *
                       C6312 * C6185 * C1429 +
                   (((C318 * C1791 + C6313 * C2019) * C1108 -
                     ((C318 * C797 + C6313 * C996) * C1065 +
                      (C318 * C755 + C6313 * C962) * C1107) +
                     (C318 * C1833 + C6313 * C2057) * C1066) *
                        C65 +
                    ((C318 * C1792 + C6313 * C2020) * C1108 -
                     (C1714 * C1065 + C1674 * C1107) +
                     (C318 * C1834 + C6313 * C2058) * C1066) *
                        C66) *
                       C6312 * C6185 * C1430)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C6313 * C319) * C1505 +
                     (C318 * C157 + C6313 * C405) * C1429 -
                     (C318 * C755 + C6313 * C962) * C1506 -
                     (C318 * C834 + C6313 * C1025) * C1430) *
                        C65 +
                    (C1751 + C1752 - C1753 - C1757) * C66) *
                       C6312 * C1065 +
                   (((C318 * C1791 + C6313 * C2019) * C1506 -
                     ((C318 * C530 + C6313 * C722) * C1429 +
                      (C318 * C451 + C6313 * C658) * C1505) +
                     (C318 * C1871 + C6313 * C2093) * C1430) *
                        C65 +
                    ((C318 * C1792 + C6313 * C2020) * C1506 -
                     (C1394 * C1429 + C1312 * C1505) +
                     (C318 * C1872 + C6313 * C2094) * C1430) *
                        C66) *
                       C6312 * C1066) *
                  C6185) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C449 +
           (C74 * C85 + C65 * C91 + C75 * C86 + C66 * C92) * C6185) *
              C6312 * C6313 * C6217 * C446 -
          ((C75 * C454 + C66 * C462 + C74 * C455 + C65 * C463) * C6185 +
           (C75 * C450 + C66 * C456 + C74 * C451 + C65 * C457) * C449) *
              C6312 * C6313 * C6217 * C447 +
          ((C74 * C452 + C65 * C458 + C75 * C453 + C66 * C459) * C449 +
           (C74 * C460 + C65 * C464 + C75 * C461 + C66 * C465) * C6185) *
              C6312 * C6313 * C6217 * C448)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C76 +
          (C74 * C85 + C65 * C91 + C75 * C86 + C66 * C92) * C67 -
          (C75 * C81 + C66 * C87 + C74 * C80 + C65 * C84) * C77 -
          (C75 * C88 + C66 * C93 + C74 * C86 + C65 * C92) * C68 +
          (C74 * C81 + C65 * C87 + C75 * C82 + C66 * C89) * C78 +
          (C74 * C88 + C65 * C93 + C75 * C90 + C66 * C94) * C69) *
         C6312 * C6313 * C6217 * C6206) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C449 +
           (C74 * C85 + C65 * C91 + C75 * C86 + C66 * C92) * C6185) *
              C6312 * C6313 * C751 -
          ((C75 * C758 + C66 * C766 + C74 * C759 + C65 * C767) * C6185 +
           (C75 * C754 + C66 * C760 + C74 * C755 + C65 * C761) * C449) *
              C6312 * C6313 * C752 +
          ((C74 * C756 + C65 * C762 + C75 * C757 + C66 * C763) * C449 +
           (C74 * C764 + C65 * C768 + C75 * C765 + C66 * C769) * C6185) *
              C6312 * C6313 * C753) *
         C6206) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         ((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C492 +
          (C74 * C122 + C65 * C126 + C75 * C123 + C66 * C127) * C446 -
          (C75 * C450 + C66 * C456 + C74 * C451 + C65 * C457) * C493 -
          (C75 * C495 + C66 * C499 + C74 * C496 + C65 * C500) * C447 +
          (C74 * C452 + C65 * C458 + C75 * C453 + C66 * C459) * C494 +
          (C74 * C497 + C65 * C501 + C75 * C498 + C66 * C502) * C448) *
         C6312 * C6313 * C6185 * C6217) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C121 +
           (C74 * C122 + C65 * C126 + C75 * C123 + C66 * C127) * C6206) *
              C6312 * C6313 * C67 -
          ((C75 * C124 + C66 * C128 + C74 * C123 + C65 * C127) * C6206 +
           (C75 * C81 + C66 * C87 + C74 * C80 + C65 * C84) * C121) *
              C6312 * C6313 * C68 +
          ((C74 * C81 + C65 * C87 + C75 * C82 + C66 * C89) * C121 +
           (C74 * C124 + C65 * C128 + C75 * C125 + C66 * C129) * C6206) *
              C6312 * C6313 * C69) *
         C6217) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C121 +
           (C74 * C122 + C65 * C126 + C75 * C123 + C66 * C127) * C6206) *
              C6312 * C6313 * C6185 * C751 -
          ((C75 * C796 + C66 * C800 + C74 * C797 + C65 * C801) * C6206 +
           (C75 * C754 + C66 * C760 + C74 * C755 + C65 * C761) * C121) *
              C6312 * C6313 * C6185 * C752 +
          ((C74 * C756 + C65 * C762 + C75 * C757 + C66 * C763) * C121 +
           (C74 * C798 + C65 * C802 + C75 * C799 + C66 * C803) * C6206) *
              C6312 * C6313 * C6185 * C753)) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C156 +
           (C74 * C157 + C65 * C161 + C75 * C158 + C66 * C162) * C6217) *
              C6312 * C6313 * C446 -
          ((C75 * C529 + C66 * C533 + C74 * C530 + C65 * C534) * C6217 +
           (C75 * C450 + C66 * C456 + C74 * C451 + C65 * C457) * C156) *
              C6312 * C6313 * C447 +
          ((C74 * C452 + C65 * C458 + C75 * C453 + C66 * C459) * C156 +
           (C74 * C531 + C65 * C535 + C75 * C532 + C66 * C536) * C6217) *
              C6312 * C6313 * C448) *
         C6185) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C156 +
           (C74 * C157 + C65 * C161 + C75 * C158 + C66 * C162) * C6217) *
              C6312 * C6313 * C6206 * C67 -
          ((C75 * C159 + C66 * C163 + C74 * C158 + C65 * C162) * C6217 +
           (C75 * C81 + C66 * C87 + C74 * C80 + C65 * C84) * C156) *
              C6312 * C6313 * C6206 * C68 +
          ((C74 * C81 + C65 * C87 + C75 * C82 + C66 * C89) * C156 +
           (C74 * C159 + C65 * C163 + C75 * C160 + C66 * C164) * C6217) *
              C6312 * C6313 * C6206 * C69)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C830 +
          (C74 * C157 + C65 * C161 + C75 * C158 + C66 * C162) * C751 -
          (C75 * C754 + C66 * C760 + C74 * C755 + C65 * C761) * C831 -
          (C75 * C833 + C66 * C837 + C74 * C834 + C65 * C838) * C752 +
          (C74 * C756 + C65 * C762 + C75 * C757 + C66 * C763) * C832 +
          (C74 * C835 + C65 * C839 + C75 * C836 + C66 * C840) * C753) *
         C6312 * C6313 * C6206 * C6185) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::pow(Pi, 2.5) * ((((C191 * C79 + C6312 * C192) * C449 +
                                 (C191 * C85 + C6312 * C196) * C6185) *
                                    C6313 * C65 +
                                (C209 * C449 + C210 * C6185) * C6313 * C66) *
                                   C6217 * C446 -
                               (((C191 * C454 + C6312 * C567) * C6185 +
                                 (C191 * C450 + C6312 * C563) * C449) *
                                    C6313 * C66 +
                                ((C191 * C455 + C6312 * C568) * C6185 +
                                 (C191 * C451 + C6312 * C564) * C449) *
                                    C6313 * C65) *
                                   C6217 * C447 +
                               (((C191 * C452 + C6312 * C565) * C449 +
                                 (C191 * C460 + C6312 * C569) * C6185) *
                                    C6313 * C65 +
                                ((C191 * C453 + C6312 * C566) * C449 +
                                 (C191 * C461 + C6312 * C570) * C6185) *
                                    C6313 * C66) *
                                   C6217 * C448)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C191 * C79 + C6312 * C192) * C76 +
           (C191 * C85 + C6312 * C196) * C67 - C209 * C77 - C210 * C68 +
           C211 * C78 + C212 * C69) *
              C6313 * C65 +
          (C209 * C76 + C210 * C67 - C211 * C77 - C212 * C68 +
           (C191 * C82 + C6312 * C195) * C78 +
           (C191 * C90 + C6312 * C199) * C69) *
              C6313 * C66) *
         C6217 * C6206) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C449 +
            (C191 * C85 + C6312 * C196) * C6185) *
               C6313 * C65 +
           (C209 * C449 + C210 * C6185) * C6313 * C66) *
              C751 -
          (((C191 * C758 + C6312 * C871) * C6185 +
            (C191 * C754 + C6312 * C867) * C449) *
               C6313 * C66 +
           ((C191 * C759 + C6312 * C872) * C6185 +
            (C191 * C755 + C6312 * C868) * C449) *
               C6313 * C65) *
              C752 +
          (((C191 * C756 + C6312 * C869) * C449 +
            (C191 * C764 + C6312 * C873) * C6185) *
               C6313 * C65 +
           ((C191 * C757 + C6312 * C870) * C449 +
            (C191 * C765 + C6312 * C874) * C6185) *
               C6313 * C66) *
              C753) *
         C6206) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::pow(Pi, 2.5) *
         (((C191 * C79 + C6312 * C192) * C492 +
           (C191 * C122 + C6312 * C238) * C446 -
           (C191 * C451 + C6312 * C564) * C493 -
           (C191 * C496 + C6312 * C597) * C447 +
           (C191 * C452 + C6312 * C565) * C494 +
           (C191 * C497 + C6312 * C598) * C448) *
              C6313 * C65 +
          (C209 * C492 + C249 * C446 - (C191 * C450 + C6312 * C563) * C493 -
           (C191 * C495 + C6312 * C599) * C447 +
           (C191 * C453 + C6312 * C566) * C494 +
           (C191 * C498 + C6312 * C600) * C448) *
              C6313 * C66) *
         C6185 * C6217) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C121 +
            (C191 * C122 + C6312 * C238) * C6206) *
               C6313 * C65 +
           (C243 + C251) * C6313 * C66) *
              C67 -
          ((C252 + C248) * C6313 * C66 + (C251 + C243) * C6313 * C65) * C68 +
          ((C248 + C252) * C6313 * C65 +
           ((C191 * C82 + C6312 * C195) * C121 +
            (C191 * C125 + C6312 * C241) * C6206) *
               C6313 * C66) *
              C69) *
         C6217) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C121 +
            (C191 * C122 + C6312 * C238) * C6206) *
               C6313 * C65 +
           (C243 + C251) * C6313 * C66) *
              C6185 * C751 -
          (((C191 * C796 + C6312 * C901) * C6206 +
            (C191 * C754 + C6312 * C867) * C121) *
               C6313 * C66 +
           ((C191 * C797 + C6312 * C902) * C6206 +
            (C191 * C755 + C6312 * C868) * C121) *
               C6313 * C65) *
              C6185 * C752 +
          (((C191 * C756 + C6312 * C869) * C121 +
            (C191 * C798 + C6312 * C903) * C6206) *
               C6313 * C65 +
           ((C191 * C757 + C6312 * C870) * C121 +
            (C191 * C799 + C6312 * C904) * C6206) *
               C6313 * C66) *
              C6185 * C753)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C156 +
            (C191 * C157 + C6312 * C278) * C6217) *
               C6313 * C65 +
           (C283 + C291) * C6313 * C66) *
              C446 -
          (((C191 * C529 + C6312 * C627) * C6217 +
            (C191 * C450 + C6312 * C563) * C156) *
               C6313 * C66 +
           ((C191 * C530 + C6312 * C628) * C6217 +
            (C191 * C451 + C6312 * C564) * C156) *
               C6313 * C65) *
              C447 +
          (((C191 * C452 + C6312 * C565) * C156 +
            (C191 * C531 + C6312 * C629) * C6217) *
               C6313 * C65 +
           ((C191 * C453 + C6312 * C566) * C156 +
            (C191 * C532 + C6312 * C630) * C6217) *
               C6313 * C66) *
              C448) *
         C6185) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C156 +
            (C191 * C157 + C6312 * C278) * C6217) *
               C6313 * C65 +
           (C283 + C291) * C6313 * C66) *
              C6206 * C67 -
          ((C292 + C288) * C6313 * C66 + (C291 + C283) * C6313 * C65) * C6206 *
              C68 +
          ((C288 + C292) * C6313 * C65 +
           ((C191 * C82 + C6312 * C195) * C156 +
            (C191 * C160 + C6312 * C281) * C6217) *
               C6313 * C66) *
              C6206 * C69)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C191 * C79 + C6312 * C192) * C830 +
           (C191 * C157 + C6312 * C278) * C751 -
           (C191 * C755 + C6312 * C868) * C831 -
           (C191 * C834 + C6312 * C931) * C752 +
           (C191 * C756 + C6312 * C869) * C832 +
           (C191 * C835 + C6312 * C932) * C753) *
              C6313 * C65 +
          (C209 * C830 + C289 * C751 - (C191 * C754 + C6312 * C867) * C831 -
           (C191 * C833 + C6312 * C933) * C752 +
           (C191 * C757 + C6312 * C870) * C832 +
           (C191 * C836 + C6312 * C934) * C753) *
              C6313 * C66) *
         C6206 * C6185) /
            (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::pow(Pi, 2.5) * ((((C318 * C79 + C6313 * C319) * C449 +
                                 (C318 * C85 + C6313 * C323) * C6185) *
                                    C65 +
                                (C336 * C449 + C337 * C6185) * C66) *
                                   C6312 * C6217 * C446 -
                               (((C318 * C454 + C6313 * C661) * C6185 +
                                 (C318 * C450 + C6313 * C657) * C449) *
                                    C66 +
                                ((C318 * C455 + C6313 * C662) * C6185 +
                                 (C318 * C451 + C6313 * C658) * C449) *
                                    C65) *
                                   C6312 * C6217 * C447 +
                               (((C318 * C452 + C6313 * C659) * C449 +
                                 (C318 * C460 + C6313 * C663) * C6185) *
                                    C65 +
                                ((C318 * C453 + C6313 * C660) * C449 +
                                 (C318 * C461 + C6313 * C664) * C6185) *
                                    C66) *
                                   C6312 * C6217 * C448)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C318 * C79 + C6313 * C319) * C76 +
           (C318 * C85 + C6313 * C323) * C67 - C336 * C77 - C337 * C68 +
           C338 * C78 + C339 * C69) *
              C65 +
          (C336 * C76 + C337 * C67 - C338 * C77 - C339 * C68 +
           (C318 * C82 + C6313 * C322) * C78 +
           (C318 * C90 + C6313 * C326) * C69) *
              C66) *
         C6312 * C6217 * C6206) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C449 +
            (C318 * C85 + C6313 * C323) * C6185) *
               C65 +
           (C336 * C449 + C337 * C6185) * C66) *
              C6312 * C751 -
          (((C318 * C758 + C6313 * C965) * C6185 +
            (C318 * C754 + C6313 * C961) * C449) *
               C66 +
           ((C318 * C759 + C6313 * C966) * C6185 +
            (C318 * C755 + C6313 * C962) * C449) *
               C65) *
              C6312 * C752 +
          (((C318 * C756 + C6313 * C963) * C449 +
            (C318 * C764 + C6313 * C967) * C6185) *
               C65 +
           ((C318 * C757 + C6313 * C964) * C449 +
            (C318 * C765 + C6313 * C968) * C6185) *
               C66) *
              C6312 * C753) *
         C6206) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (-std::pow(Pi, 2.5) *
         (((C318 * C79 + C6313 * C319) * C492 +
           (C318 * C122 + C6313 * C365) * C446 -
           (C318 * C451 + C6313 * C658) * C493 -
           (C318 * C496 + C6313 * C691) * C447 +
           (C318 * C452 + C6313 * C659) * C494 +
           (C318 * C497 + C6313 * C692) * C448) *
              C65 +
          (C336 * C492 + C376 * C446 - (C318 * C450 + C6313 * C657) * C493 -
           (C318 * C495 + C6313 * C693) * C447 +
           (C318 * C453 + C6313 * C660) * C494 +
           (C318 * C498 + C6313 * C694) * C448) *
              C66) *
         C6312 * C6185 * C6217) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C121 +
            (C318 * C122 + C6313 * C365) * C6206) *
               C65 +
           (C370 + C378) * C66) *
              C6312 * C67 -
          ((C379 + C375) * C66 + (C378 + C370) * C65) * C6312 * C68 +
          ((C375 + C379) * C65 + ((C318 * C82 + C6313 * C322) * C121 +
                                  (C318 * C125 + C6313 * C368) * C6206) *
                                     C66) *
              C6312 * C69) *
         C6217) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C121 +
            (C318 * C122 + C6313 * C365) * C6206) *
               C65 +
           (C370 + C378) * C66) *
              C6312 * C6185 * C751 -
          (((C318 * C796 + C6313 * C995) * C6206 +
            (C318 * C754 + C6313 * C961) * C121) *
               C66 +
           ((C318 * C797 + C6313 * C996) * C6206 +
            (C318 * C755 + C6313 * C962) * C121) *
               C65) *
              C6312 * C6185 * C752 +
          (((C318 * C756 + C6313 * C963) * C121 +
            (C318 * C798 + C6313 * C997) * C6206) *
               C65 +
           ((C318 * C757 + C6313 * C964) * C121 +
            (C318 * C799 + C6313 * C998) * C6206) *
               C66) *
              C6312 * C6185 * C753)) /
            (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C156 +
            (C318 * C157 + C6313 * C405) * C6217) *
               C65 +
           (C410 + C418) * C66) *
              C6312 * C446 -
          (((C318 * C529 + C6313 * C721) * C6217 +
            (C318 * C450 + C6313 * C657) * C156) *
               C66 +
           ((C318 * C530 + C6313 * C722) * C6217 +
            (C318 * C451 + C6313 * C658) * C156) *
               C65) *
              C6312 * C447 +
          (((C318 * C452 + C6313 * C659) * C156 +
            (C318 * C531 + C6313 * C723) * C6217) *
               C65 +
           ((C318 * C453 + C6313 * C660) * C156 +
            (C318 * C532 + C6313 * C724) * C6217) *
               C66) *
              C6312 * C448) *
         C6185) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C156 +
            (C318 * C157 + C6313 * C405) * C6217) *
               C65 +
           (C410 + C418) * C66) *
              C6312 * C6206 * C67 -
          ((C419 + C415) * C66 + (C418 + C410) * C65) * C6312 * C6206 * C68 +
          ((C415 + C419) * C65 + ((C318 * C82 + C6313 * C322) * C156 +
                                  (C318 * C160 + C6313 * C408) * C6217) *
                                     C66) *
              C6312 * C6206 * C69)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C318 * C79 + C6313 * C319) * C830 +
           (C318 * C157 + C6313 * C405) * C751 -
           (C318 * C755 + C6313 * C962) * C831 -
           (C318 * C834 + C6313 * C1025) * C752 +
           (C318 * C756 + C6313 * C963) * C832 +
           (C318 * C835 + C6313 * C1026) * C753) *
              C65 +
          (C336 * C830 + C416 * C751 - (C318 * C754 + C6313 * C961) * C831 -
           (C318 * C833 + C6313 * C1027) * C752 +
           (C318 * C757 + C6313 * C964) * C832 +
           (C318 * C836 + C6313 * C1028) * C753) *
              C66) *
         C6312 * C6206 * C6185) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C1067 +
           (C74 * C85 + C65 * C91 + C75 * C86 + C66 * C92) * C1063 -
           (C75 * C81 + C66 * C87 + C74 * C80 + C65 * C84) * C1068 -
           (C75 * C88 + C66 * C93 + C74 * C86 + C65 * C92) * C1064) *
              C6312 * C6313 * C1429 +
          ((C74 * C754 + C65 * C760 + C75 * C1431 + C66 * C1432) * C1068 -
           ((C75 * C758 + C66 * C766 + C74 * C759 + C65 * C767) * C1063 +
            (C75 * C754 + C66 * C760 + C74 * C755 + C65 * C761) * C1067) +
           (C74 * C758 + C65 * C766 + C75 * C1433 + C66 * C1434) * C1064) *
              C6312 * C6313 * C1430) *
         C6206) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C121 +
            (C74 * C122 + C65 * C126 + C75 * C123 + C66 * C127) * C6206) *
               C6312 * C6313 * C1063 -
           ((C75 * C124 + C66 * C128 + C74 * C123 + C65 * C127) * C6206 +
            (C75 * C81 + C66 * C87 + C74 * C80 + C65 * C84) * C121) *
               C6312 * C6313 * C1064) *
              C1429 +
          (((C74 * C754 + C65 * C760 + C75 * C1431 + C66 * C1432) * C121 +
            (C74 * C796 + C65 * C800 + C75 * C1469 + C66 * C1470) * C6206) *
               C6312 * C6313 * C1064 -
           ((C75 * C796 + C66 * C800 + C74 * C797 + C65 * C801) * C6206 +
            (C75 * C754 + C66 * C760 + C74 * C755 + C65 * C761) * C121) *
               C6312 * C6313 * C1063) *
              C1430)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C1505 +
           (C74 * C157 + C65 * C161 + C75 * C158 + C66 * C162) * C1429 -
           (C75 * C754 + C66 * C760 + C74 * C755 + C65 * C761) * C1506 -
           (C75 * C833 + C66 * C837 + C74 * C834 + C65 * C838) * C1430) *
              C6312 * C6313 * C6206 * C1063 +
          ((C74 * C754 + C65 * C760 + C75 * C1431 + C66 * C1432) * C1506 -
           ((C75 * C159 + C66 * C163 + C74 * C158 + C65 * C162) * C1429 +
            (C75 * C81 + C66 * C87 + C74 * C80 + C65 * C84) * C1505) +
           (C74 * C833 + C65 * C837 + C75 * C1507 + C66 * C1508) * C1430) *
              C6312 * C6313 * C6206 * C1064)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C1067 +
            (C191 * C85 + C6312 * C196) * C1063 - C209 * C1068 - C210 * C1064) *
               C6313 * C65 +
           (C209 * C1067 + C210 * C1063 - C211 * C1068 - C212 * C1064) * C6313 *
               C66) *
              C1429 +
          ((C1550 * C1068 -
            ((C191 * C759 + C6312 * C872) * C1063 +
             (C191 * C755 + C6312 * C868) * C1067) +
            C1551 * C1064) *
               C6313 * C65 +
           ((C191 * C1431 + C6312 * C1543) * C1068 -
            (C1551 * C1063 + C1550 * C1067) +
            (C191 * C1433 + C6312 * C1544) * C1064) *
               C6313 * C66) *
              C1430) *
         C6206) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C191 * C79 + C6312 * C192) * C121 +
             (C191 * C122 + C6312 * C238) * C6206) *
                C6313 * C65 +
            (C243 + C251) * C6313 * C66) *
               C1063 -
           ((C252 + C248) * C6313 * C66 + (C251 + C243) * C6313 * C65) *
               C1064) *
              C1429 +
          (((C1587 + C1591) * C6313 * C65 +
            ((C191 * C1431 + C6312 * C1543) * C121 +
             (C191 * C1469 + C6312 * C1585) * C6206) *
                C6313 * C66) *
               C1064 -
           ((C1591 + C1587) * C6313 * C66 +
            ((C191 * C797 + C6312 * C902) * C6206 +
             (C191 * C755 + C6312 * C868) * C121) *
                C6313 * C65) *
               C1063) *
              C1430)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C191 * C79 + C6312 * C192) * C1505 +
                     (C191 * C157 + C6312 * C278) * C1429 -
                     (C191 * C755 + C6312 * C868) * C1506 -
                     (C191 * C834 + C6312 * C931) * C1430) *
                        C6313 * C65 +
                    (C1627 + C1628 - C1629 - C1633) * C6313 * C66) *
                       C6206 * C1063 +
                   ((C1629 - (C1628 + C1627) + C1633) * C6313 * C65 +
                    ((C191 * C1431 + C6312 * C1543) * C1506 -
                     (C290 * C1429 + C211 * C1505) +
                     (C191 * C1507 + C6312 * C1625) * C1430) *
                        C6313 * C66) *
                       C6206 * C1064)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C1067 +
            (C318 * C85 + C6313 * C323) * C1063 - C336 * C1068 - C337 * C1064) *
               C65 +
           (C336 * C1067 + C337 * C1063 - C338 * C1068 - C339 * C1064) * C66) *
              C6312 * C1429 +
          ((C1674 * C1068 -
            ((C318 * C759 + C6313 * C966) * C1063 +
             (C318 * C755 + C6313 * C962) * C1067) +
            C1675 * C1064) *
               C65 +
           ((C318 * C1431 + C6313 * C1667) * C1068 -
            (C1675 * C1063 + C1674 * C1067) +
            (C318 * C1433 + C6313 * C1668) * C1064) *
               C66) *
              C6312 * C1430) *
         C6206) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C6313 * C319) * C121 +
             (C318 * C122 + C6313 * C365) * C6206) *
                C65 +
            (C370 + C378) * C66) *
               C6312 * C1063 -
           ((C379 + C375) * C66 + (C378 + C370) * C65) * C6312 * C1064) *
              C1429 +
          (((C1711 + C1715) * C65 + ((C318 * C1431 + C6313 * C1667) * C121 +
                                     (C318 * C1469 + C6313 * C1709) * C6206) *
                                        C66) *
               C6312 * C1064 -
           ((C1715 + C1711) * C66 + ((C318 * C797 + C6313 * C996) * C6206 +
                                     (C318 * C755 + C6313 * C962) * C121) *
                                        C65) *
               C6312 * C1063) *
              C1430)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C6313 * C319) * C1505 +
                     (C318 * C157 + C6313 * C405) * C1429 -
                     (C318 * C755 + C6313 * C962) * C1506 -
                     (C318 * C834 + C6313 * C1025) * C1430) *
                        C65 +
                    (C1751 + C1752 - C1753 - C1757) * C66) *
                       C6312 * C6206 * C1063 +
                   ((C1753 - (C1752 + C1751) + C1757) * C65 +
                    ((C318 * C1431 + C6313 * C1667) * C1506 -
                     (C417 * C1429 + C338 * C1505) +
                     (C318 * C1507 + C6313 * C1749) * C1430) *
                        C66) *
                       C6312 * C6206 * C1064)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C76 +
          (C74 * C85 + C65 * C91 + C75 * C86 + C66 * C92) * C67 -
          (C75 * C81 + C66 * C87 + C74 * C80 + C65 * C84) * C77 -
          (C75 * C88 + C66 * C93 + C74 * C86 + C65 * C92) * C68 +
          (C74 * C81 + C65 * C87 + C75 * C82 + C66 * C89) * C78 +
          (C74 * C88 + C65 * C93 + C75 * C90 + C66 * C94) * C69) *
         C6312 * C6313 * C6217 * C6206) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C449 +
           (C74 * C85 + C65 * C91 + C75 * C86 + C66 * C92) * C6185) *
              C6312 * C6313 * C6217 * C446 -
          ((C75 * C454 + C66 * C462 + C74 * C455 + C65 * C463) * C6185 +
           (C75 * C450 + C66 * C456 + C74 * C451 + C65 * C457) * C449) *
              C6312 * C6313 * C6217 * C447 +
          ((C74 * C452 + C65 * C458 + C75 * C453 + C66 * C459) * C449 +
           (C74 * C460 + C65 * C464 + C75 * C461 + C66 * C465) * C6185) *
              C6312 * C6313 * C6217 * C448)) /
            (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C121 +
           (C74 * C122 + C65 * C126 + C75 * C123 + C66 * C127) * C6206) *
              C6312 * C6313 * C67 -
          ((C75 * C124 + C66 * C128 + C74 * C123 + C65 * C127) * C6206 +
           (C75 * C81 + C66 * C87 + C74 * C80 + C65 * C84) * C121) *
              C6312 * C6313 * C68 +
          ((C74 * C81 + C65 * C87 + C75 * C82 + C66 * C89) * C121 +
           (C74 * C124 + C65 * C128 + C75 * C125 + C66 * C129) * C6206) *
              C6312 * C6313 * C69) *
         C6217) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C492 +
          (C74 * C122 + C65 * C126 + C75 * C123 + C66 * C127) * C446 -
          (C75 * C450 + C66 * C456 + C74 * C451 + C65 * C457) * C493 -
          (C75 * C495 + C66 * C499 + C74 * C496 + C65 * C500) * C447 +
          (C74 * C452 + C65 * C458 + C75 * C453 + C66 * C459) * C494 +
          (C74 * C497 + C65 * C501 + C75 * C498 + C66 * C502) * C448) *
         C6312 * C6313 * C6185 * C6217) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C156 +
           (C74 * C157 + C65 * C161 + C75 * C158 + C66 * C162) * C6217) *
              C6312 * C6313 * C6206 * C67 -
          ((C75 * C159 + C66 * C163 + C74 * C158 + C65 * C162) * C6217 +
           (C75 * C81 + C66 * C87 + C74 * C80 + C65 * C84) * C156) *
              C6312 * C6313 * C6206 * C68 +
          ((C74 * C81 + C65 * C87 + C75 * C82 + C66 * C89) * C156 +
           (C74 * C159 + C65 * C163 + C75 * C160 + C66 * C164) * C6217) *
              C6312 * C6313 * C6206 * C69)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84) * C156 +
           (C74 * C157 + C65 * C161 + C75 * C158 + C66 * C162) * C6217) *
              C6312 * C6313 * C446 -
          ((C75 * C529 + C66 * C533 + C74 * C530 + C65 * C534) * C6217 +
           (C75 * C450 + C66 * C456 + C74 * C451 + C65 * C457) * C156) *
              C6312 * C6313 * C447 +
          ((C74 * C452 + C65 * C458 + C75 * C453 + C66 * C459) * C156 +
           (C74 * C531 + C65 * C535 + C75 * C532 + C66 * C536) * C6217) *
              C6312 * C6313 * C448) *
         C6185) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C191 * C79 + C6312 * C192) * C76 +
                    (C191 * C85 + C6312 * C196) * C67 - C209 * C77 -
                    C210 * C68 + C211 * C78 + C212 * C69) *
                       C6313 * C65 +
                   (C209 * C76 + C210 * C67 - C211 * C77 - C212 * C68 +
                    (C191 * C82 + C6312 * C195) * C78 +
                    (C191 * C90 + C6312 * C199) * C69) *
                       C6313 * C66) *
                  C6217 * C6206) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C191 * C79 + C6312 * C192) * C449 +
                     (C191 * C85 + C6312 * C196) * C6185) *
                        C6313 * C65 +
                    (C209 * C449 + C210 * C6185) * C6313 * C66) *
                       C6217 * C446 -
                   (((C191 * C454 + C6312 * C567) * C6185 +
                     (C191 * C450 + C6312 * C563) * C449) *
                        C6313 * C66 +
                    ((C191 * C455 + C6312 * C568) * C6185 +
                     (C191 * C451 + C6312 * C564) * C449) *
                        C6313 * C65) *
                       C6217 * C447 +
                   (((C191 * C452 + C6312 * C565) * C449 +
                     (C191 * C460 + C6312 * C569) * C6185) *
                        C6313 * C65 +
                    ((C191 * C453 + C6312 * C566) * C449 +
                     (C191 * C461 + C6312 * C570) * C6185) *
                        C6313 * C66) *
                       C6217 * C448)) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C121 +
            (C191 * C122 + C6312 * C238) * C6206) *
               C6313 * C65 +
           (C243 + C251) * C6313 * C66) *
              C67 -
          ((C252 + C248) * C6313 * C66 + (C251 + C243) * C6313 * C65) * C68 +
          ((C248 + C252) * C6313 * C65 +
           ((C191 * C82 + C6312 * C195) * C121 +
            (C191 * C125 + C6312 * C241) * C6206) *
               C6313 * C66) *
              C69) *
         C6217) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C191 * C79 + C6312 * C192) * C492 +
           (C191 * C122 + C6312 * C238) * C446 -
           (C191 * C451 + C6312 * C564) * C493 -
           (C191 * C496 + C6312 * C597) * C447 +
           (C191 * C452 + C6312 * C565) * C494 +
           (C191 * C497 + C6312 * C598) * C448) *
              C6313 * C65 +
          (C209 * C492 + C249 * C446 - (C191 * C450 + C6312 * C563) * C493 -
           (C191 * C495 + C6312 * C599) * C447 +
           (C191 * C453 + C6312 * C566) * C494 +
           (C191 * C498 + C6312 * C600) * C448) *
              C6313 * C66) *
         C6185 * C6217) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C191 * C79 + C6312 * C192) * C156 +
                     (C191 * C157 + C6312 * C278) * C6217) *
                        C6313 * C65 +
                    (C283 + C291) * C6313 * C66) *
                       C6206 * C67 -
                   ((C292 + C288) * C6313 * C66 + (C291 + C283) * C6313 * C65) *
                       C6206 * C68 +
                   ((C288 + C292) * C6313 * C65 +
                    ((C191 * C82 + C6312 * C195) * C156 +
                     (C191 * C160 + C6312 * C281) * C6217) *
                        C6313 * C66) *
                       C6206 * C69)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C191 * C79 + C6312 * C192) * C156 +
                     (C191 * C157 + C6312 * C278) * C6217) *
                        C6313 * C65 +
                    (C283 + C291) * C6313 * C66) *
                       C446 -
                   (((C191 * C529 + C6312 * C627) * C6217 +
                     (C191 * C450 + C6312 * C563) * C156) *
                        C6313 * C66 +
                    ((C191 * C530 + C6312 * C628) * C6217 +
                     (C191 * C451 + C6312 * C564) * C156) *
                        C6313 * C65) *
                       C447 +
                   (((C191 * C452 + C6312 * C565) * C156 +
                     (C191 * C531 + C6312 * C629) * C6217) *
                        C6313 * C65 +
                    ((C191 * C453 + C6312 * C566) * C156 +
                     (C191 * C532 + C6312 * C630) * C6217) *
                        C6313 * C66) *
                       C448) *
                  C6185) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C318 * C79 + C6313 * C319) * C76 +
                    (C318 * C85 + C6313 * C323) * C67 - C336 * C77 -
                    C337 * C68 + C338 * C78 + C339 * C69) *
                       C65 +
                   (C336 * C76 + C337 * C67 - C338 * C77 - C339 * C68 +
                    (C318 * C82 + C6313 * C322) * C78 +
                    (C318 * C90 + C6313 * C326) * C69) *
                       C66) *
                  C6312 * C6217 * C6206) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C6313 * C319) * C449 +
                     (C318 * C85 + C6313 * C323) * C6185) *
                        C65 +
                    (C336 * C449 + C337 * C6185) * C66) *
                       C6312 * C6217 * C446 -
                   (((C318 * C454 + C6313 * C661) * C6185 +
                     (C318 * C450 + C6313 * C657) * C449) *
                        C66 +
                    ((C318 * C455 + C6313 * C662) * C6185 +
                     (C318 * C451 + C6313 * C658) * C449) *
                        C65) *
                       C6312 * C6217 * C447 +
                   (((C318 * C452 + C6313 * C659) * C449 +
                     (C318 * C460 + C6313 * C663) * C6185) *
                        C65 +
                    ((C318 * C453 + C6313 * C660) * C449 +
                     (C318 * C461 + C6313 * C664) * C6185) *
                        C66) *
                       C6312 * C6217 * C448)) /
                     (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C121 +
            (C318 * C122 + C6313 * C365) * C6206) *
               C65 +
           (C370 + C378) * C66) *
              C6312 * C67 -
          ((C379 + C375) * C66 + (C378 + C370) * C65) * C6312 * C68 +
          ((C375 + C379) * C65 + ((C318 * C82 + C6313 * C322) * C121 +
                                  (C318 * C125 + C6313 * C368) * C6206) *
                                     C66) *
              C6312 * C69) *
         C6217) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C318 * C79 + C6313 * C319) * C492 +
           (C318 * C122 + C6313 * C365) * C446 -
           (C318 * C451 + C6313 * C658) * C493 -
           (C318 * C496 + C6313 * C691) * C447 +
           (C318 * C452 + C6313 * C659) * C494 +
           (C318 * C497 + C6313 * C692) * C448) *
              C65 +
          (C336 * C492 + C376 * C446 - (C318 * C450 + C6313 * C657) * C493 -
           (C318 * C495 + C6313 * C693) * C447 +
           (C318 * C453 + C6313 * C660) * C494 +
           (C318 * C498 + C6313 * C694) * C448) *
              C66) *
         C6312 * C6185 * C6217) /
            (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C156 +
            (C318 * C157 + C6313 * C405) * C6217) *
               C65 +
           (C410 + C418) * C66) *
              C6312 * C6206 * C67 -
          ((C419 + C415) * C66 + (C418 + C410) * C65) * C6312 * C6206 * C68 +
          ((C415 + C419) * C65 + ((C318 * C82 + C6313 * C322) * C156 +
                                  (C318 * C160 + C6313 * C408) * C6217) *
                                     C66) *
              C6312 * C6206 * C69)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C156 +
            (C318 * C157 + C6313 * C405) * C6217) *
               C65 +
           (C410 + C418) * C66) *
              C6312 * C446 -
          (((C318 * C529 + C6313 * C721) * C6217 +
            (C318 * C450 + C6313 * C657) * C156) *
               C66 +
           ((C318 * C530 + C6313 * C722) * C6217 +
            (C318 * C451 + C6313 * C658) * C156) *
               C65) *
              C6312 * C447 +
          (((C318 * C452 + C6313 * C659) * C156 +
            (C318 * C531 + C6313 * C723) * C6217) *
               C65 +
           ((C318 * C453 + C6313 * C660) * C156 +
            (C318 * C532 + C6313 * C724) * C6217) *
               C66) *
              C6312 * C448) *
         C6185) /
            (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C2124 * C79 + C6311 * C83) * C1067 +
                     (C2124 * C85 + C6311 * C91) * C1063 -
                     (C2124 * C80 + C6311 * C84) * C1068 -
                     (C2124 * C86 + C6311 * C92) * C1064) *
                        C2122 +
                    (C2934 + C2935 - C2942 - C2943) * C2123) *
                       C6313 * C6217 * C1065 +
                   ((C2942 - (C2935 + C2934) + C2943) * C2122 +
                    ((C2124 * C453 + C6311 * C459) * C1068 -
                     (C2376 * C1063 + C2377 * C1067) +
                     (C2124 * C461 + C6311 * C465) * C1064) *
                        C2123) *
                       C6313 * C6217 * C1066)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C1107 +
            (C2124 * C122 + C6311 * C126) * C1065 - C2374 * C1108 -
            C2414 * C1066) *
               C2122 +
           (C2374 * C1107 + C2414 * C1065 - C2377 * C1108 - C2415 * C1066) *
               C2123) *
              C6313 * C1063 +
          ((C2940 * C1108 -
            ((C2124 * C123 + C6311 * C127) * C1065 +
             (C2124 * C80 + C6311 * C84) * C1107) +
            C2980 * C1066) *
               C2122 +
           ((C2124 * C453 + C6311 * C459) * C1108 -
            (C2980 * C1065 + C2940 * C1107) +
            (C2124 * C498 + C6311 * C502) * C1066) *
               C2123) *
              C6313 * C1064) *
         C6217) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2124 * C79 + C6311 * C83) * C156 +
             (C2124 * C157 + C6311 * C161) * C6217) *
                C2122 +
            (C2444 + C2452) * C2123) *
               C6313 * C1065 -
           ((C2453 + C2449) * C2123 + (C2452 + C2444) * C2122) * C6313 *
               C1066) *
              C1063 +
          (((C3015 + C3019) * C2122 + ((C2124 * C453 + C6311 * C459) * C156 +
                                       (C2124 * C532 + C6311 * C536) * C6217) *
                                          C2123) *
               C6313 * C1066 -
           ((C3019 + C3015) * C2123 + ((C2124 * C158 + C6311 * C162) * C6217 +
                                       (C2124 * C80 + C6311 * C84) * C156) *
                                          C2122) *
               C6313 * C1065) *
              C1064)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C1067 +
           (C2203 * C85 + C2122 * C196 + C2204 * C455 + C2123 * C568) * C1063 -
           (C2204 * C450 + C2123 * C563 + C2203 * C80 + C2122 * C193) * C1068 -
           (C2204 * C454 + C2123 * C567 + C2203 * C86 + C2122 * C197) * C1064) *
              C6313 * C6311 * C6217 * C1065 +
          ((C2203 * C450 + C2122 * C563 + C2204 * C453 + C2123 * C566) * C1068 -
           ((C2204 * C460 + C2123 * C569 + C2203 * C455 + C2122 * C568) *
                C1063 +
            (C2204 * C452 + C2123 * C565 + C2203 * C451 + C2122 * C564) *
                C1067) +
           (C2203 * C454 + C2122 * C567 + C2204 * C461 + C2123 * C570) *
               C1064) *
              C6313 * C6311 * C6217 * C1066)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C1107 +
           (C2203 * C122 + C2122 * C238 + C2204 * C496 + C2123 * C597) * C1065 -
           (C2204 * C452 + C2123 * C565 + C2203 * C451 + C2122 * C564) * C1108 -
           (C2204 * C497 + C2123 * C598 + C2203 * C496 + C2122 * C597) *
               C1066) *
              C6313 * C6311 * C1063 +
          ((C2203 * C450 + C2122 * C563 + C2204 * C453 + C2123 * C566) * C1108 -
           ((C2204 * C495 + C2123 * C599 + C2203 * C123 + C2122 * C239) *
                C1065 +
            (C2204 * C450 + C2123 * C563 + C2203 * C80 + C2122 * C193) *
                C1107) +
           (C2203 * C495 + C2122 * C599 + C2204 * C498 + C2123 * C600) *
               C1066) *
              C6313 * C6311 * C1064) *
         C6217) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C156 +
            (C2203 * C157 + C2122 * C278 + C2204 * C530 + C2123 * C628) *
                C6217) *
               C6313 * C6311 * C1065 -
           ((C2204 * C531 + C2123 * C629 + C2203 * C530 + C2122 * C628) *
                C6217 +
            (C2204 * C452 + C2123 * C565 + C2203 * C451 + C2122 * C564) *
                C156) *
               C6313 * C6311 * C1066) *
              C1063 +
          (((C2203 * C450 + C2122 * C563 + C2204 * C453 + C2123 * C566) * C156 +
            (C2203 * C529 + C2122 * C627 + C2204 * C532 + C2123 * C630) *
                C6217) *
               C6313 * C6311 * C1066 -
           ((C2204 * C529 + C2123 * C627 + C2203 * C158 + C2122 * C279) *
                C6217 +
            (C2204 * C450 + C2123 * C563 + C2203 * C80 + C2122 * C193) * C156) *
               C6313 * C6311 * C1065) *
              C1064)) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C1067 +
            (C318 * C85 + C6313 * C323) * C1063 - C336 * C1068 - C337 * C1064) *
               C6311 * C2122 +
           (C3156 + C3157 - C3158 - C3159) * C6311 * C2123) *
              C6217 * C1065 +
          ((C3158 - (C3157 + C3156) + C3159) * C6311 * C2122 +
           ((C318 * C453 + C6313 * C660) * C1068 -
            (C2574 * C1063 + C2575 * C1067) +
            (C318 * C461 + C6313 * C664) * C1064) *
               C6311 * C2123) *
              C6217 * C1066)) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C1107 +
            (C318 * C122 + C6313 * C365) * C1065 - C2572 * C1108 -
            C2611 * C1066) *
               C6311 * C2122 +
           (C2572 * C1107 + C2611 * C1065 - C2575 * C1108 - C2612 * C1066) *
               C6311 * C2123) *
              C1063 +
          ((C1351 - (C1350 + C1349) + C1355) * C6311 * C2122 +
           ((C318 * C453 + C6313 * C660) * C1108 -
            (C1354 * C1065 + C1312 * C1107) +
            (C318 * C498 + C6313 * C694) * C1066) *
               C6311 * C2123) *
              C1064) *
         C6217) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C6313 * C319) * C156 +
             (C318 * C157 + C6313 * C405) * C6217) *
                C6311 * C2122 +
            (C2640 + C2648) * C6311 * C2123) *
               C1065 -
           ((C2649 + C2645) * C6311 * C2123 + (C2648 + C2640) * C6311 * C2122) *
               C1066) *
              C1063 +
          (((C1393 + C1395) * C6311 * C2122 +
            ((C318 * C453 + C6313 * C660) * C156 +
             (C318 * C532 + C6313 * C724) * C6217) *
                C6311 * C2123) *
               C1066 -
           ((C1395 + C1393) * C6311 * C2123 + (C418 + C410) * C6311 * C2122) *
               C1065) *
              C1064)) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2124 * C79 + C6311 * C83) * C449 +
             (C2124 * C85 + C6311 * C91) * C6185) *
                C2122 +
            (C2378 + C2379) * C2123) *
               C6313 * C1429 -
           ((C3578 + C3579) * C2123 + ((C2124 * C759 + C6311 * C767) * C6185 +
                                       (C2124 * C755 + C6311 * C761) * C449) *
                                          C2122) *
               C6313 * C1430) *
              C1065 +
          (((C3579 + C3578) * C2122 +
            ((C2124 * C3567 + C6311 * C3568) * C449 +
             (C2124 * C3569 + C6311 * C3570) * C6185) *
                C2123) *
               C6313 * C1430 -
           ((C2380 + C2381) * C2123 + (C2379 + C2378) * C2122) * C6313 *
               C1429) *
              C1066)) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C1107 +
            (C2124 * C122 + C6311 * C126) * C1065 - C2374 * C1108 -
            C2414 * C1066) *
               C2122 +
           (C2374 * C1107 + C2414 * C1065 - C2377 * C1108 - C2415 * C1066) *
               C2123) *
              C6313 * C6185 * C1429 +
          ((C3577 * C1108 -
            ((C2124 * C797 + C6311 * C801) * C1065 +
             (C2124 * C755 + C6311 * C761) * C1107) +
            C3618 * C1066) *
               C2122 +
           ((C2124 * C3567 + C6311 * C3568) * C1108 -
            (C3618 * C1065 + C3577 * C1107) +
            (C2124 * C3613 + C6311 * C3614) * C1066) *
               C2123) *
              C6313 * C6185 * C1430)) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C2124 * C79 + C6311 * C83) * C1505 +
                     (C2124 * C157 + C6311 * C161) * C1429 -
                     (C2124 * C755 + C6311 * C761) * C1506 -
                     (C2124 * C834 + C6311 * C838) * C1430) *
                        C2122 +
                    (C3655 + C3656 - C3657 - C3661) * C2123) *
                       C6313 * C1065 +
                   ((C3657 - (C3656 + C3655) + C3661) * C2122 +
                    ((C2124 * C3567 + C6311 * C3568) * C1506 -
                     (C2451 * C1429 + C2377 * C1505) +
                     (C2124 * C3652 + C6311 * C3653) * C1430) *
                        C2123) *
                       C6313 * C1066) *
                  C6185) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C449 +
            (C2203 * C85 + C2122 * C196 + C2204 * C455 + C2123 * C568) *
                C6185) *
               C6313 * C6311 * C1429 -
           ((C2204 * C1795 + C2123 * C1911 + C2203 * C759 + C2122 * C872) *
                C6185 +
            (C2204 * C1791 + C2123 * C1909 + C2203 * C755 + C2122 * C868) *
                C449) *
               C6313 * C6311 * C1430) *
              C1065 +
          (((C2203 * C1791 + C2122 * C1909 + C2204 * C3567 + C2123 * C3695) *
                C449 +
            (C2203 * C1795 + C2122 * C1911 + C2204 * C3569 + C2123 * C3696) *
                C6185) *
               C6313 * C6311 * C1430 -
           ((C2204 * C460 + C2123 * C569 + C2203 * C455 + C2122 * C568) *
                C6185 +
            (C2204 * C452 + C2123 * C565 + C2203 * C451 + C2122 * C564) *
                C449) *
               C6313 * C6311 * C1429) *
              C1066)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C1107 +
           (C2203 * C122 + C2122 * C238 + C2204 * C496 + C2123 * C597) * C1065 -
           (C2204 * C452 + C2123 * C565 + C2203 * C451 + C2122 * C564) * C1108 -
           (C2204 * C497 + C2123 * C598 + C2203 * C496 + C2122 * C597) *
               C1066) *
              C6313 * C6311 * C6185 * C1429 +
          ((C2203 * C1791 + C2122 * C1909 + C2204 * C3567 + C2123 * C3695) *
               C1108 -
           ((C2204 * C1833 + C2123 * C1947 + C2203 * C797 + C2122 * C902) *
                C1065 +
            (C2204 * C1791 + C2123 * C1909 + C2203 * C755 + C2122 * C868) *
                C1107) +
           (C2203 * C1833 + C2122 * C1947 + C2204 * C3613 + C2123 * C3731) *
               C1066) *
              C6313 * C6311 * C6185 * C1430)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C1505 +
           (C2203 * C157 + C2122 * C278 + C2204 * C530 + C2123 * C628) * C1429 -
           (C2204 * C1791 + C2123 * C1909 + C2203 * C755 + C2122 * C868) *
               C1506 -
           (C2204 * C1871 + C2123 * C1983 + C2203 * C834 + C2122 * C931) *
               C1430) *
              C6313 * C6311 * C1065 +
          ((C2203 * C1791 + C2122 * C1909 + C2204 * C3567 + C2123 * C3695) *
               C1506 -
           ((C2204 * C531 + C2123 * C629 + C2203 * C530 + C2122 * C628) *
                C1429 +
            (C2204 * C452 + C2123 * C565 + C2203 * C451 + C2122 * C564) *
                C1505) +
           (C2203 * C1871 + C2122 * C1983 + C2204 * C3652 + C2123 * C3766) *
               C1430) *
              C6313 * C6311 * C1066) *
         C6185) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C6313 * C319) * C449 +
             (C318 * C85 + C6313 * C323) * C6185) *
                C6311 * C2122 +
            (C2576 + C2577) * C6311 * C2123) *
               C1429 -
           ((C3810 + C3811) * C6311 * C2123 +
            ((C318 * C759 + C6313 * C966) * C6185 +
             (C318 * C755 + C6313 * C962) * C449) *
                C6311 * C2122) *
               C1430) *
              C1065 +
          (((C3811 + C3810) * C6311 * C2122 +
            ((C318 * C3567 + C6313 * C3801) * C449 +
             (C318 * C3569 + C6313 * C3802) * C6185) *
                C6311 * C2123) *
               C1430 -
           ((C2578 + C2579) * C6311 * C2123 + (C2577 + C2576) * C6311 * C2122) *
               C1429) *
              C1066)) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C1107 +
            (C318 * C122 + C6313 * C365) * C1065 - C2572 * C1108 -
            C2611 * C1066) *
               C6311 * C2122 +
           (C2572 * C1107 + C2611 * C1065 - C2575 * C1108 - C2612 * C1066) *
               C6311 * C2123) *
              C6185 * C1429 +
          ((C3809 * C1108 -
            ((C318 * C797 + C6313 * C996) * C1065 +
             (C318 * C755 + C6313 * C962) * C1107) +
            C3849 * C1066) *
               C6311 * C2122 +
           ((C318 * C3567 + C6313 * C3801) * C1108 -
            (C3849 * C1065 + C3809 * C1107) +
            (C318 * C3613 + C6313 * C3845) * C1066) *
               C6311 * C2123) *
              C6185 * C1430)) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C6313 * C319) * C1505 +
                     (C318 * C157 + C6313 * C405) * C1429 -
                     (C318 * C755 + C6313 * C962) * C1506 -
                     (C318 * C834 + C6313 * C1025) * C1430) *
                        C6311 * C2122 +
                    (C3885 + C3886 - C3887 - C3891) * C6311 * C2123) *
                       C1065 +
                   ((C3887 - (C3886 + C3885) + C3891) * C6311 * C2122 +
                    ((C318 * C3567 + C6313 * C3801) * C1506 -
                     (C2647 * C1429 + C2575 * C1505) +
                     (C318 * C3652 + C6313 * C3883) * C1430) *
                        C6311 * C2123) *
                       C1066) *
                  C6185) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C449 +
            (C2124 * C85 + C6311 * C91) * C6185) *
               C2122 +
           (C2378 + C2379) * C2123) *
              C6313 * C6217 * C446 -
          ((C2380 + C2381) * C2123 + (C2379 + C2378) * C2122) * C6313 * C6217 *
              C447 +
          ((C2381 + C2380) * C2122 + ((C2124 * C2361 + C6311 * C2362) * C449 +
                                      (C2124 * C2363 + C6311 * C2364) * C6185) *
                                         C2123) *
              C6313 * C6217 * C448)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2124 * C79 + C6311 * C83) * C76 +
           (C2124 * C85 + C6311 * C91) * C67 -
           (C2124 * C80 + C6311 * C84) * C77 -
           (C2124 * C86 + C6311 * C92) * C68 +
           (C2124 * C81 + C6311 * C87) * C78 +
           (C2124 * C88 + C6311 * C93) * C69) *
              C2122 +
          ((C2124 * C451 + C6311 * C457) * C76 +
           (C2124 * C455 + C6311 * C463) * C67 -
           (C2124 * C450 + C6311 * C456) * C77 -
           (C2124 * C454 + C6311 * C462) * C68 +
           (C2124 * C1069 + C6311 * C1070) * C78 +
           (C2124 * C1071 + C6311 * C1072) * C69) *
              C2123) *
         C6313 * C6217 * C6206) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C449 +
            (C2124 * C85 + C6311 * C91) * C6185) *
               C2122 +
           (C2378 + C2379) * C2123) *
              C6313 * C751 -
          (((C2124 * C1795 + C6311 * C1797) * C6185 +
            (C2124 * C1791 + C6311 * C1793) * C449) *
               C2123 +
           ((C2124 * C759 + C6311 * C767) * C6185 +
            (C2124 * C755 + C6311 * C761) * C449) *
               C2122) *
              C6313 * C752 +
          (((C2124 * C756 + C6311 * C762) * C449 +
            (C2124 * C764 + C6311 * C768) * C6185) *
               C2122 +
           ((C2124 * C2675 + C6311 * C2676) * C449 +
            (C2124 * C2677 + C6311 * C2678) * C6185) *
               C2123) *
              C6313 * C753) *
         C6206) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] += (-std::pow(Pi, 2.5) *
                  (((C2124 * C79 + C6311 * C83) * C492 +
                    (C2124 * C122 + C6311 * C126) * C446 - C2374 * C493 -
                    C2414 * C447 + C2377 * C494 + C2415 * C448) *
                       C2122 +
                   (C2374 * C492 + C2414 * C446 - C2377 * C493 - C2415 * C447 +
                    (C2124 * C2361 + C6311 * C2362) * C494 +
                    (C2124 * C2407 + C6311 * C2408) * C448) *
                       C2123) *
                  C6313 * C6185 * C6217) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C2124 * C79 + C6311 * C83) * C121 +
                     (C2124 * C122 + C6311 * C126) * C6206) *
                        C2122 +
                    ((C2124 * C451 + C6311 * C457) * C121 +
                     (C2124 * C496 + C6311 * C500) * C6206) *
                        C2123) *
                       C6313 * C67 -
                   (((C2124 * C495 + C6311 * C499) * C6206 +
                     (C2124 * C450 + C6311 * C456) * C121) *
                        C2123 +
                    ((C2124 * C123 + C6311 * C127) * C6206 +
                     (C2124 * C80 + C6311 * C84) * C121) *
                        C2122) *
                       C6313 * C68 +
                   (((C2124 * C81 + C6311 * C87) * C121 +
                     (C2124 * C124 + C6311 * C128) * C6206) *
                        C2122 +
                    ((C2124 * C1069 + C6311 * C1070) * C121 +
                     (C2124 * C1109 + C6311 * C1110) * C6206) *
                        C2123) *
                       C6313 * C69) *
                  C6217) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C2124 * C79 + C6311 * C83) * C121 +
                     (C2124 * C122 + C6311 * C126) * C6206) *
                        C2122 +
                    (C2374 * C121 + C2414 * C6206) * C2123) *
                       C6313 * C6185 * C751 -
                   (((C2124 * C1833 + C6311 * C1835) * C6206 +
                     (C2124 * C1791 + C6311 * C1793) * C121) *
                        C2123 +
                    ((C2124 * C797 + C6311 * C801) * C6206 +
                     (C2124 * C755 + C6311 * C761) * C121) *
                        C2122) *
                       C6313 * C6185 * C752 +
                   (((C2124 * C756 + C6311 * C762) * C121 +
                     (C2124 * C798 + C6311 * C802) * C6206) *
                        C2122 +
                    ((C2124 * C2675 + C6311 * C2676) * C121 +
                     (C2124 * C2705 + C6311 * C2706) * C6206) *
                        C2123) *
                       C6313 * C6185 * C753)) /
                     (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C156 +
            (C2124 * C157 + C6311 * C161) * C6217) *
               C2122 +
           (C2444 + C2452) * C2123) *
              C6313 * C446 -
          ((C2453 + C2449) * C2123 + (C2452 + C2444) * C2122) * C6313 * C447 +
          ((C2449 + C2453) * C2122 + ((C2124 * C2361 + C6311 * C2362) * C156 +
                                      (C2124 * C2441 + C6311 * C2442) * C6217) *
                                         C2123) *
              C6313 * C448) *
         C6185) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C2124 * C79 + C6311 * C83) * C156 +
                                (C2124 * C157 + C6311 * C161) * C6217) *
                                   C2122 +
                               ((C2124 * C451 + C6311 * C457) * C156 +
                                (C2124 * C530 + C6311 * C534) * C6217) *
                                   C2123) *
                                  C6313 * C6206 * C67 -
                              (((C2124 * C529 + C6311 * C533) * C6217 +
                                (C2124 * C450 + C6311 * C456) * C156) *
                                   C2123 +
                               ((C2124 * C158 + C6311 * C162) * C6217 +
                                (C2124 * C80 + C6311 * C84) * C156) *
                                   C2122) *
                                  C6313 * C6206 * C68 +
                              (((C2124 * C81 + C6311 * C87) * C156 +
                                (C2124 * C159 + C6311 * C163) * C6217) *
                                   C2122 +
                               ((C2124 * C1069 + C6311 * C1070) * C156 +
                                (C2124 * C1145 + C6311 * C1146) * C6217) *
                                   C2123) *
                                  C6313 * C6206 * C69)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2124 * C79 + C6311 * C83) * C830 +
           (C2124 * C157 + C6311 * C161) * C751 -
           (C2124 * C755 + C6311 * C761) * C831 -
           (C2124 * C834 + C6311 * C838) * C752 +
           (C2124 * C756 + C6311 * C762) * C832 +
           (C2124 * C835 + C6311 * C839) * C753) *
              C2122 +
          (C2374 * C830 + C2450 * C751 -
           (C2124 * C1791 + C6311 * C1793) * C831 -
           (C2124 * C1871 + C6311 * C1873) * C752 +
           (C2124 * C2675 + C6311 * C2676) * C832 +
           (C2124 * C2733 + C6311 * C2734) * C753) *
              C2123) *
         C6313 * C6206 * C6185) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C449 +
           (C2203 * C85 + C2122 * C196 + C2204 * C455 + C2123 * C568) * C6185) *
              C6313 * C6311 * C6217 * C446 -
          ((C2204 * C460 + C2123 * C569 + C2203 * C455 + C2122 * C568) * C6185 +
           (C2204 * C452 + C2123 * C565 + C2203 * C451 + C2122 * C564) * C449) *
              C6313 * C6311 * C6217 * C447 +
          ((C2203 * C452 + C2122 * C565 + C2204 * C2361 + C2123 * C2479) *
               C449 +
           (C2203 * C460 + C2122 * C569 + C2204 * C2363 + C2123 * C2480) *
               C6185) *
              C6313 * C6311 * C6217 * C448)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C76 +
          (C2203 * C85 + C2122 * C196 + C2204 * C455 + C2123 * C568) * C67 -
          (C2204 * C450 + C2123 * C563 + C2203 * C80 + C2122 * C193) * C77 -
          (C2204 * C454 + C2123 * C567 + C2203 * C86 + C2122 * C197) * C68 +
          (C2203 * C81 + C2122 * C194 + C2204 * C1069 + C2123 * C1181) * C78 +
          (C2203 * C88 + C2122 * C198 + C2204 * C1071 + C2123 * C1182) * C69) *
         C6313 * C6311 * C6217 * C6206) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C449 +
           (C2203 * C85 + C2122 * C196 + C2204 * C455 + C2123 * C568) * C6185) *
              C6313 * C6311 * C751 -
          ((C2204 * C1795 + C2123 * C1911 + C2203 * C759 + C2122 * C872) *
               C6185 +
           (C2204 * C1791 + C2123 * C1909 + C2203 * C755 + C2122 * C868) *
               C449) *
              C6313 * C6311 * C752 +
          ((C2203 * C756 + C2122 * C869 + C2204 * C2675 + C2123 * C2761) *
               C449 +
           (C2203 * C764 + C2122 * C873 + C2204 * C2677 + C2123 * C2762) *
               C6185) *
              C6313 * C6311 * C753) *
         C6206) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C492 +
          (C2203 * C122 + C2122 * C238 + C2204 * C496 + C2123 * C597) * C446 -
          (C2204 * C452 + C2123 * C565 + C2203 * C451 + C2122 * C564) * C493 -
          (C2204 * C497 + C2123 * C598 + C2203 * C496 + C2122 * C597) * C447 +
          (C2203 * C452 + C2122 * C565 + C2204 * C2361 + C2123 * C2479) * C494 +
          (C2203 * C497 + C2122 * C598 + C2204 * C2407 + C2123 * C2507) *
              C448) *
         C6313 * C6311 * C6185 * C6217) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C121 +
           (C2203 * C122 + C2122 * C238 + C2204 * C496 + C2123 * C597) *
               C6206) *
              C6313 * C6311 * C67 -
          ((C2204 * C495 + C2123 * C599 + C2203 * C123 + C2122 * C239) * C6206 +
           (C2204 * C450 + C2123 * C563 + C2203 * C80 + C2122 * C193) * C121) *
              C6313 * C6311 * C68 +
          ((C2203 * C81 + C2122 * C194 + C2204 * C1069 + C2123 * C1181) * C121 +
           (C2203 * C124 + C2122 * C240 + C2204 * C1109 + C2123 * C1223) *
               C6206) *
              C6313 * C6311 * C69) *
         C6217) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C121 +
           (C2203 * C122 + C2122 * C238 + C2204 * C496 + C2123 * C597) *
               C6206) *
              C6313 * C6311 * C6185 * C751 -
          ((C2204 * C1833 + C2123 * C1947 + C2203 * C797 + C2122 * C902) *
               C6206 +
           (C2204 * C1791 + C2123 * C1909 + C2203 * C755 + C2122 * C868) *
               C121) *
              C6313 * C6311 * C6185 * C752 +
          ((C2203 * C756 + C2122 * C869 + C2204 * C2675 + C2123 * C2761) *
               C121 +
           (C2203 * C798 + C2122 * C903 + C2204 * C2705 + C2123 * C2789) *
               C6206) *
              C6313 * C6311 * C6185 * C753)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (-std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C156 +
           (C2203 * C157 + C2122 * C278 + C2204 * C530 + C2123 * C628) *
               C6217) *
              C6313 * C6311 * C446 -
          ((C2204 * C531 + C2123 * C629 + C2203 * C530 + C2122 * C628) * C6217 +
           (C2204 * C452 + C2123 * C565 + C2203 * C451 + C2122 * C564) * C156) *
              C6313 * C6311 * C447 +
          ((C2203 * C452 + C2122 * C565 + C2204 * C2361 + C2123 * C2479) *
               C156 +
           (C2203 * C531 + C2122 * C629 + C2204 * C2441 + C2123 * C2534) *
               C6217) *
              C6313 * C6311 * C448) *
         C6185) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C156 +
           (C2203 * C157 + C2122 * C278 + C2204 * C530 + C2123 * C628) *
               C6217) *
              C6313 * C6311 * C6206 * C67 -
          ((C2204 * C529 + C2123 * C627 + C2203 * C158 + C2122 * C279) * C6217 +
           (C2204 * C450 + C2123 * C563 + C2203 * C80 + C2122 * C193) * C156) *
              C6313 * C6311 * C6206 * C68 +
          ((C2203 * C81 + C2122 * C194 + C2204 * C1069 + C2123 * C1181) * C156 +
           (C2203 * C159 + C2122 * C280 + C2204 * C1145 + C2123 * C1265) *
               C6217) *
              C6313 * C6311 * C6206 * C69)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C830 +
          (C2203 * C157 + C2122 * C278 + C2204 * C530 + C2123 * C628) * C751 -
          (C2204 * C1791 + C2123 * C1909 + C2203 * C755 + C2122 * C868) * C831 -
          (C2204 * C1871 + C2123 * C1983 + C2203 * C834 + C2122 * C931) * C752 +
          (C2203 * C756 + C2122 * C869 + C2204 * C2675 + C2123 * C2761) * C832 +
          (C2203 * C835 + C2122 * C932 + C2204 * C2733 + C2123 * C2816) *
              C753) *
         C6313 * C6311 * C6206 * C6185) /
            (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C449 +
            (C318 * C85 + C6313 * C323) * C6185) *
               C6311 * C2122 +
           (C2576 + C2577) * C6311 * C2123) *
              C6217 * C446 -
          ((C2578 + C2579) * C6311 * C2123 + (C2577 + C2576) * C6311 * C2122) *
              C6217 * C447 +
          ((C2579 + C2578) * C6311 * C2122 +
           ((C318 * C2361 + C6313 * C2561) * C449 +
            (C318 * C2363 + C6313 * C2562) * C6185) *
               C6311 * C2123) *
              C6217 * C448)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C318 * C79 + C6313 * C319) * C76 +
           (C318 * C85 + C6313 * C323) * C67 - C336 * C77 - C337 * C68 +
           C338 * C78 + C339 * C69) *
              C6311 * C2122 +
          ((C318 * C451 + C6313 * C658) * C76 +
           (C318 * C455 + C6313 * C662) * C67 - C1312 * C77 - C1313 * C68 +
           (C318 * C1069 + C6313 * C1305) * C78 +
           (C318 * C1071 + C6313 * C1306) * C69) *
              C6311 * C2123) *
         C6217 * C6206) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C449 +
            (C318 * C85 + C6313 * C323) * C6185) *
               C6311 * C2122 +
           (C2576 + C2577) * C6311 * C2123) *
              C751 -
          (((C318 * C1795 + C6313 * C2021) * C6185 +
            (C318 * C1791 + C6313 * C2019) * C449) *
               C6311 * C2123 +
           ((C318 * C759 + C6313 * C966) * C6185 +
            (C318 * C755 + C6313 * C962) * C449) *
               C6311 * C2122) *
              C752 +
          (((C318 * C756 + C6313 * C963) * C449 +
            (C318 * C764 + C6313 * C967) * C6185) *
               C6311 * C2122 +
           ((C318 * C2675 + C6313 * C2843) * C449 +
            (C318 * C2677 + C6313 * C2844) * C6185) *
               C6311 * C2123) *
              C753) *
         C6206) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] += (-std::pow(Pi, 2.5) *
                  (((C318 * C79 + C6313 * C319) * C492 +
                    (C318 * C122 + C6313 * C365) * C446 - C2572 * C493 -
                    C2611 * C447 + C2575 * C494 + C2612 * C448) *
                       C6311 * C2122 +
                   (C2572 * C492 + C2611 * C446 - C2575 * C493 - C2612 * C447 +
                    (C318 * C2361 + C6313 * C2561) * C494 +
                    (C318 * C2407 + C6313 * C2605) * C448) *
                       C6311 * C2123) *
                  C6185 * C6217) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C6313 * C319) * C121 +
                     (C318 * C122 + C6313 * C365) * C6206) *
                        C6311 * C2122 +
                    ((C318 * C451 + C6313 * C658) * C121 +
                     (C318 * C496 + C6313 * C691) * C6206) *
                        C6311 * C2123) *
                       C67 -
                   ((C1354 * C6206 + C1312 * C121) * C6311 * C2123 +
                    (C378 + C370) * C6311 * C2122) *
                       C68 +
                   ((C375 + C379) * C6311 * C2122 +
                    ((C318 * C1069 + C6313 * C1305) * C121 +
                     (C318 * C1109 + C6313 * C1347) * C6206) *
                        C6311 * C2123) *
                       C69) *
                  C6217) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C6313 * C319) * C121 +
                     (C318 * C122 + C6313 * C365) * C6206) *
                        C6311 * C2122 +
                    (C2572 * C121 + C2611 * C6206) * C6311 * C2123) *
                       C6185 * C751 -
                   (((C318 * C1833 + C6313 * C2057) * C6206 +
                     (C318 * C1791 + C6313 * C2019) * C121) *
                        C6311 * C2123 +
                    ((C318 * C797 + C6313 * C996) * C6206 +
                     (C318 * C755 + C6313 * C962) * C121) *
                        C6311 * C2122) *
                       C6185 * C752 +
                   (((C318 * C756 + C6313 * C963) * C121 +
                     (C318 * C798 + C6313 * C997) * C6206) *
                        C6311 * C2122 +
                    ((C318 * C2675 + C6313 * C2843) * C121 +
                     (C318 * C2705 + C6313 * C2871) * C6206) *
                        C6311 * C2123) *
                       C6185 * C753)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C156 +
            (C318 * C157 + C6313 * C405) * C6217) *
               C6311 * C2122 +
           (C2640 + C2648) * C6311 * C2123) *
              C446 -
          ((C2649 + C2645) * C6311 * C2123 + (C2648 + C2640) * C6311 * C2122) *
              C447 +
          ((C2645 + C2649) * C6311 * C2122 +
           ((C318 * C2361 + C6313 * C2561) * C156 +
            (C318 * C2441 + C6313 * C2638) * C6217) *
               C6311 * C2123) *
              C448) *
         C6185) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C156 +
            (C318 * C157 + C6313 * C405) * C6217) *
               C6311 * C2122 +
           ((C318 * C451 + C6313 * C658) * C156 +
            (C318 * C530 + C6313 * C722) * C6217) *
               C6311 * C2123) *
              C6206 * C67 -
          ((C1395 + C1393) * C6311 * C2123 + (C418 + C410) * C6311 * C2122) *
              C6206 * C68 +
          ((C415 + C419) * C6311 * C2122 +
           ((C318 * C1069 + C6313 * C1305) * C156 +
            (C318 * C1145 + C6313 * C1389) * C6217) *
               C6311 * C2123) *
              C6206 * C69)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C318 * C79 + C6313 * C319) * C830 +
           (C318 * C157 + C6313 * C405) * C751 -
           (C318 * C755 + C6313 * C962) * C831 -
           (C318 * C834 + C6313 * C1025) * C752 +
           (C318 * C756 + C6313 * C963) * C832 +
           (C318 * C835 + C6313 * C1026) * C753) *
              C6311 * C2122 +
          (C2572 * C830 + C2646 * C751 - (C318 * C1791 + C6313 * C2019) * C831 -
           (C318 * C1871 + C6313 * C2093) * C752 +
           (C318 * C2675 + C6313 * C2843) * C832 +
           (C318 * C2733 + C6313 * C2898) * C753) *
              C6311 * C2123) *
         C6206 * C6185) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C2124 * C79 + C6311 * C83) * C1067 +
                     (C2124 * C85 + C6311 * C91) * C1063 -
                     (C2124 * C80 + C6311 * C84) * C1068 -
                     (C2124 * C86 + C6311 * C92) * C1064) *
                        C2122 +
                    (C2934 + C2935 - C2942 - C2943) * C2123) *
                       C6313 * C1429 +
                   (((C2124 * C754 + C6311 * C760) * C1068 -
                     ((C2124 * C759 + C6311 * C767) * C1063 +
                      (C2124 * C755 + C6311 * C761) * C1067) +
                     (C2124 * C758 + C6311 * C766) * C1064) *
                        C2122 +
                    ((C2124 * C1792 + C6311 * C1794) * C1068 -
                     ((C2124 * C1795 + C6311 * C1797) * C1063 +
                      (C2124 * C1791 + C6311 * C1793) * C1067) +
                     (C2124 * C1796 + C6311 * C1798) * C1064) *
                        C2123) *
                       C6313 * C1430) *
                  C6206) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C2124 * C79 + C6311 * C83) * C121 +
                      (C2124 * C122 + C6311 * C126) * C6206) *
                         C2122 +
                     (C2374 * C121 + C2414 * C6206) * C2123) *
                        C6313 * C1063 -
                    ((C2980 * C6206 + C2940 * C121) * C2123 +
                     ((C2124 * C123 + C6311 * C127) * C6206 +
                      (C2124 * C80 + C6311 * C84) * C121) *
                         C2122) *
                        C6313 * C1064) *
                       C1429 +
                   ((((C2124 * C754 + C6311 * C760) * C121 +
                      (C2124 * C796 + C6311 * C800) * C6206) *
                         C2122 +
                     ((C2124 * C1792 + C6311 * C1794) * C121 +
                      (C2124 * C1834 + C6311 * C1836) * C6206) *
                         C2123) *
                        C6313 * C1064 -
                    (((C2124 * C1833 + C6311 * C1835) * C6206 +
                      (C2124 * C1791 + C6311 * C1793) * C121) *
                         C2123 +
                     ((C2124 * C797 + C6311 * C801) * C6206 +
                      (C2124 * C755 + C6311 * C761) * C121) *
                         C2122) *
                        C6313 * C1063) *
                       C1430)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C2124 * C79 + C6311 * C83) * C1505 +
                     (C2124 * C157 + C6311 * C161) * C1429 -
                     (C2124 * C755 + C6311 * C761) * C1506 -
                     (C2124 * C834 + C6311 * C838) * C1430) *
                        C2122 +
                    (C2374 * C1505 + C2450 * C1429 -
                     (C2124 * C1791 + C6311 * C1793) * C1506 -
                     (C2124 * C1871 + C6311 * C1873) * C1430) *
                        C2123) *
                       C6313 * C6206 * C1063 +
                   (((C2124 * C754 + C6311 * C760) * C1506 -
                     ((C2124 * C158 + C6311 * C162) * C1429 +
                      (C2124 * C80 + C6311 * C84) * C1505) +
                     (C2124 * C833 + C6311 * C837) * C1430) *
                        C2122 +
                    ((C2124 * C1792 + C6311 * C1794) * C1506 -
                     (C3018 * C1429 + C2940 * C1505) +
                     (C2124 * C1872 + C6311 * C1874) * C1430) *
                        C2123) *
                       C6313 * C6206 * C1064)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C1067 +
           (C2203 * C85 + C2122 * C196 + C2204 * C455 + C2123 * C568) * C1063 -
           (C2204 * C450 + C2123 * C563 + C2203 * C80 + C2122 * C193) * C1068 -
           (C2204 * C454 + C2123 * C567 + C2203 * C86 + C2122 * C197) * C1064) *
              C6313 * C6311 * C1429 +
          ((C2203 * C754 + C2122 * C867 + C2204 * C1792 + C2123 * C1910) *
               C1068 -
           ((C2204 * C1795 + C2123 * C1911 + C2203 * C759 + C2122 * C872) *
                C1063 +
            (C2204 * C1791 + C2123 * C1909 + C2203 * C755 + C2122 * C868) *
                C1067) +
           (C2203 * C758 + C2122 * C871 + C2204 * C1796 + C2123 * C1912) *
               C1064) *
              C6313 * C6311 * C1430) *
         C6206) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C121 +
            (C2203 * C122 + C2122 * C238 + C2204 * C496 + C2123 * C597) *
                C6206) *
               C6313 * C6311 * C1063 -
           ((C2204 * C495 + C2123 * C599 + C2203 * C123 + C2122 * C239) *
                C6206 +
            (C2204 * C450 + C2123 * C563 + C2203 * C80 + C2122 * C193) * C121) *
               C6313 * C6311 * C1064) *
              C1429 +
          (((C2203 * C754 + C2122 * C867 + C2204 * C1792 + C2123 * C1910) *
                C121 +
            (C2203 * C796 + C2122 * C901 + C2204 * C1834 + C2123 * C1948) *
                C6206) *
               C6313 * C6311 * C1064 -
           ((C2204 * C1833 + C2123 * C1947 + C2203 * C797 + C2122 * C902) *
                C6206 +
            (C2204 * C1791 + C2123 * C1909 + C2203 * C755 + C2122 * C868) *
                C121) *
               C6313 * C6311 * C1063) *
              C1430)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C1505 +
           (C2203 * C157 + C2122 * C278 + C2204 * C530 + C2123 * C628) * C1429 -
           (C2204 * C1791 + C2123 * C1909 + C2203 * C755 + C2122 * C868) *
               C1506 -
           (C2204 * C1871 + C2123 * C1983 + C2203 * C834 + C2122 * C931) *
               C1430) *
              C6313 * C6311 * C6206 * C1063 +
          ((C2203 * C754 + C2122 * C867 + C2204 * C1792 + C2123 * C1910) *
               C1506 -
           ((C2204 * C529 + C2123 * C627 + C2203 * C158 + C2122 * C279) *
                C1429 +
            (C2204 * C450 + C2123 * C563 + C2203 * C80 + C2122 * C193) *
                C1505) +
           (C2203 * C833 + C2122 * C933 + C2204 * C1872 + C2123 * C1984) *
               C1430) *
              C6313 * C6311 * C6206 * C1064)) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C1067 +
            (C318 * C85 + C6313 * C323) * C1063 - C336 * C1068 - C337 * C1064) *
               C6311 * C2122 +
           (C3156 + C3157 - C3158 - C3159) * C6311 * C2123) *
              C1429 +
          ((C1674 * C1068 -
            ((C318 * C759 + C6313 * C966) * C1063 +
             (C318 * C755 + C6313 * C962) * C1067) +
            C1675 * C1064) *
               C6311 * C2122 +
           ((C318 * C1792 + C6313 * C2020) * C1068 -
            ((C318 * C1795 + C6313 * C2021) * C1063 +
             (C318 * C1791 + C6313 * C2019) * C1067) +
            (C318 * C1796 + C6313 * C2022) * C1064) *
               C6311 * C2123) *
              C1430) *
         C6206) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C318 * C79 + C6313 * C319) * C121 +
                      (C318 * C122 + C6313 * C365) * C6206) *
                         C6311 * C2122 +
                     (C2572 * C121 + C2611 * C6206) * C6311 * C2123) *
                        C1063 -
                    ((C1354 * C6206 + C1312 * C121) * C6311 * C2123 +
                     (C378 + C370) * C6311 * C2122) *
                        C1064) *
                       C1429 +
                   (((C1711 + C1715) * C6311 * C2122 +
                     ((C318 * C1792 + C6313 * C2020) * C121 +
                      (C318 * C1834 + C6313 * C2058) * C6206) *
                         C6311 * C2123) *
                        C1064 -
                    (((C318 * C1833 + C6313 * C2057) * C6206 +
                      (C318 * C1791 + C6313 * C2019) * C121) *
                         C6311 * C2123 +
                     ((C318 * C797 + C6313 * C996) * C6206 +
                      (C318 * C755 + C6313 * C962) * C121) *
                         C6311 * C2122) *
                        C1063) *
                       C1430)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C6313 * C319) * C1505 +
                     (C318 * C157 + C6313 * C405) * C1429 -
                     (C318 * C755 + C6313 * C962) * C1506 -
                     (C318 * C834 + C6313 * C1025) * C1430) *
                        C6311 * C2122 +
                    (C2572 * C1505 + C2646 * C1429 -
                     (C318 * C1791 + C6313 * C2019) * C1506 -
                     (C318 * C1871 + C6313 * C2093) * C1430) *
                        C6311 * C2123) *
                       C6206 * C1063 +
                   ((C1753 - (C1752 + C1751) + C1757) * C6311 * C2122 +
                    ((C318 * C1792 + C6313 * C2020) * C1506 -
                     (C1394 * C1429 + C1312 * C1505) +
                     (C318 * C1872 + C6313 * C2094) * C1430) *
                        C6311 * C2123) *
                       C6206 * C1064)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2124 * C79 + C6311 * C83) * C76 +
           (C2124 * C85 + C6311 * C91) * C67 -
           (C2124 * C80 + C6311 * C84) * C77 -
           (C2124 * C86 + C6311 * C92) * C68 +
           (C2124 * C81 + C6311 * C87) * C78 +
           (C2124 * C88 + C6311 * C93) * C69) *
              C2122 +
          ((C2124 * C451 + C6311 * C457) * C76 +
           (C2124 * C455 + C6311 * C463) * C67 -
           (C2124 * C450 + C6311 * C456) * C77 -
           (C2124 * C454 + C6311 * C462) * C68 +
           (C2124 * C1069 + C6311 * C1070) * C78 +
           (C2124 * C1071 + C6311 * C1072) * C69) *
              C2123) *
         C6313 * C6217 * C6206) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C449 +
            (C2124 * C85 + C6311 * C91) * C6185) *
               C2122 +
           (C2378 + C2379) * C2123) *
              C6313 * C6217 * C446 -
          ((C2380 + C2381) * C2123 + (C2379 + C2378) * C2122) * C6313 * C6217 *
              C447 +
          ((C2381 + C2380) * C2122 + ((C2124 * C2361 + C6311 * C2362) * C449 +
                                      (C2124 * C2363 + C6311 * C2364) * C6185) *
                                         C2123) *
              C6313 * C6217 * C448)) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C2124 * C79 + C6311 * C83) * C121 +
                     (C2124 * C122 + C6311 * C126) * C6206) *
                        C2122 +
                    ((C2124 * C451 + C6311 * C457) * C121 +
                     (C2124 * C496 + C6311 * C500) * C6206) *
                        C2123) *
                       C6313 * C67 -
                   (((C2124 * C495 + C6311 * C499) * C6206 +
                     (C2124 * C450 + C6311 * C456) * C121) *
                        C2123 +
                    ((C2124 * C123 + C6311 * C127) * C6206 +
                     (C2124 * C80 + C6311 * C84) * C121) *
                        C2122) *
                       C6313 * C68 +
                   (((C2124 * C81 + C6311 * C87) * C121 +
                     (C2124 * C124 + C6311 * C128) * C6206) *
                        C2122 +
                    ((C2124 * C1069 + C6311 * C1070) * C121 +
                     (C2124 * C1109 + C6311 * C1110) * C6206) *
                        C2123) *
                       C6313 * C69) *
                  C6217) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C2124 * C79 + C6311 * C83) * C492 +
                    (C2124 * C122 + C6311 * C126) * C446 - C2374 * C493 -
                    C2414 * C447 + C2377 * C494 + C2415 * C448) *
                       C2122 +
                   (C2374 * C492 + C2414 * C446 - C2377 * C493 - C2415 * C447 +
                    (C2124 * C2361 + C6311 * C2362) * C494 +
                    (C2124 * C2407 + C6311 * C2408) * C448) *
                       C2123) *
                  C6313 * C6185 * C6217) /
                     (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C156 +
            (C2124 * C157 + C6311 * C161) * C6217) *
               C2122 +
           ((C2124 * C451 + C6311 * C457) * C156 +
            (C2124 * C530 + C6311 * C534) * C6217) *
               C2123) *
              C6313 * C6206 * C67 -
          (((C2124 * C529 + C6311 * C533) * C6217 +
            (C2124 * C450 + C6311 * C456) * C156) *
               C2123 +
           ((C2124 * C158 + C6311 * C162) * C6217 +
            (C2124 * C80 + C6311 * C84) * C156) *
               C2122) *
              C6313 * C6206 * C68 +
          (((C2124 * C81 + C6311 * C87) * C156 +
            (C2124 * C159 + C6311 * C163) * C6217) *
               C2122 +
           ((C2124 * C1069 + C6311 * C1070) * C156 +
            (C2124 * C1145 + C6311 * C1146) * C6217) *
               C2123) *
              C6313 * C6206 * C69)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C156 +
            (C2124 * C157 + C6311 * C161) * C6217) *
               C2122 +
           (C2444 + C2452) * C2123) *
              C6313 * C446 -
          ((C2453 + C2449) * C2123 + (C2452 + C2444) * C2122) * C6313 * C447 +
          ((C2449 + C2453) * C2122 + ((C2124 * C2361 + C6311 * C2362) * C156 +
                                      (C2124 * C2441 + C6311 * C2442) * C6217) *
                                         C2123) *
              C6313 * C448) *
         C6185) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C76 +
          (C2203 * C85 + C2122 * C196 + C2204 * C455 + C2123 * C568) * C67 -
          (C2204 * C450 + C2123 * C563 + C2203 * C80 + C2122 * C193) * C77 -
          (C2204 * C454 + C2123 * C567 + C2203 * C86 + C2122 * C197) * C68 +
          (C2203 * C81 + C2122 * C194 + C2204 * C1069 + C2123 * C1181) * C78 +
          (C2203 * C88 + C2122 * C198 + C2204 * C1071 + C2123 * C1182) * C69) *
         C6313 * C6311 * C6217 * C6206) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C449 +
           (C2203 * C85 + C2122 * C196 + C2204 * C455 + C2123 * C568) * C6185) *
              C6313 * C6311 * C6217 * C446 -
          ((C2204 * C460 + C2123 * C569 + C2203 * C455 + C2122 * C568) * C6185 +
           (C2204 * C452 + C2123 * C565 + C2203 * C451 + C2122 * C564) * C449) *
              C6313 * C6311 * C6217 * C447 +
          ((C2203 * C452 + C2122 * C565 + C2204 * C2361 + C2123 * C2479) *
               C449 +
           (C2203 * C460 + C2122 * C569 + C2204 * C2363 + C2123 * C2480) *
               C6185) *
              C6313 * C6311 * C6217 * C448)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C121 +
           (C2203 * C122 + C2122 * C238 + C2204 * C496 + C2123 * C597) *
               C6206) *
              C6313 * C6311 * C67 -
          ((C2204 * C495 + C2123 * C599 + C2203 * C123 + C2122 * C239) * C6206 +
           (C2204 * C450 + C2123 * C563 + C2203 * C80 + C2122 * C193) * C121) *
              C6313 * C6311 * C68 +
          ((C2203 * C81 + C2122 * C194 + C2204 * C1069 + C2123 * C1181) * C121 +
           (C2203 * C124 + C2122 * C240 + C2204 * C1109 + C2123 * C1223) *
               C6206) *
              C6313 * C6311 * C69) *
         C6217) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C492 +
          (C2203 * C122 + C2122 * C238 + C2204 * C496 + C2123 * C597) * C446 -
          (C2204 * C452 + C2123 * C565 + C2203 * C451 + C2122 * C564) * C493 -
          (C2204 * C497 + C2123 * C598 + C2203 * C496 + C2122 * C597) * C447 +
          (C2203 * C452 + C2122 * C565 + C2204 * C2361 + C2123 * C2479) * C494 +
          (C2203 * C497 + C2122 * C598 + C2204 * C2407 + C2123 * C2507) *
              C448) *
         C6313 * C6311 * C6185 * C6217) /
            (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C156 +
           (C2203 * C157 + C2122 * C278 + C2204 * C530 + C2123 * C628) *
               C6217) *
              C6313 * C6311 * C6206 * C67 -
          ((C2204 * C529 + C2123 * C627 + C2203 * C158 + C2122 * C279) * C6217 +
           (C2204 * C450 + C2123 * C563 + C2203 * C80 + C2122 * C193) * C156) *
              C6313 * C6311 * C6206 * C68 +
          ((C2203 * C81 + C2122 * C194 + C2204 * C1069 + C2123 * C1181) * C156 +
           (C2203 * C159 + C2122 * C280 + C2204 * C1145 + C2123 * C1265) *
               C6217) *
              C6313 * C6311 * C6206 * C69)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2203 * C79 + C2122 * C192 + C2204 * C451 + C2123 * C564) * C156 +
           (C2203 * C157 + C2122 * C278 + C2204 * C530 + C2123 * C628) *
               C6217) *
              C6313 * C6311 * C446 -
          ((C2204 * C531 + C2123 * C629 + C2203 * C530 + C2122 * C628) * C6217 +
           (C2204 * C452 + C2123 * C565 + C2203 * C451 + C2122 * C564) * C156) *
              C6313 * C6311 * C447 +
          ((C2203 * C452 + C2122 * C565 + C2204 * C2361 + C2123 * C2479) *
               C156 +
           (C2203 * C531 + C2122 * C629 + C2204 * C2441 + C2123 * C2534) *
               C6217) *
              C6313 * C6311 * C448) *
         C6185) /
            (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C318 * C79 + C6313 * C319) * C76 +
           (C318 * C85 + C6313 * C323) * C67 - C336 * C77 - C337 * C68 +
           C338 * C78 + C339 * C69) *
              C6311 * C2122 +
          ((C318 * C451 + C6313 * C658) * C76 +
           (C318 * C455 + C6313 * C662) * C67 - C1312 * C77 - C1313 * C68 +
           (C318 * C1069 + C6313 * C1305) * C78 +
           (C318 * C1071 + C6313 * C1306) * C69) *
              C6311 * C2123) *
         C6217 * C6206) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C449 +
            (C318 * C85 + C6313 * C323) * C6185) *
               C6311 * C2122 +
           (C2576 + C2577) * C6311 * C2123) *
              C6217 * C446 -
          ((C2578 + C2579) * C6311 * C2123 + (C2577 + C2576) * C6311 * C2122) *
              C6217 * C447 +
          ((C2579 + C2578) * C6311 * C2122 +
           ((C318 * C2361 + C6313 * C2561) * C449 +
            (C318 * C2363 + C6313 * C2562) * C6185) *
               C6311 * C2123) *
              C6217 * C448)) /
            (p * q * std::sqrt(p + q));
    d2eezy[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C6313 * C319) * C121 +
                     (C318 * C122 + C6313 * C365) * C6206) *
                        C6311 * C2122 +
                    ((C318 * C451 + C6313 * C658) * C121 +
                     (C318 * C496 + C6313 * C691) * C6206) *
                        C6311 * C2123) *
                       C67 -
                   ((C1354 * C6206 + C1312 * C121) * C6311 * C2123 +
                    (C378 + C370) * C6311 * C2122) *
                       C68 +
                   ((C375 + C379) * C6311 * C2122 +
                    ((C318 * C1069 + C6313 * C1305) * C121 +
                     (C318 * C1109 + C6313 * C1347) * C6206) *
                        C6311 * C2123) *
                       C69) *
                  C6217) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C318 * C79 + C6313 * C319) * C492 +
                    (C318 * C122 + C6313 * C365) * C446 - C2572 * C493 -
                    C2611 * C447 + C2575 * C494 + C2612 * C448) *
                       C6311 * C2122 +
                   (C2572 * C492 + C2611 * C446 - C2575 * C493 - C2612 * C447 +
                    (C318 * C2361 + C6313 * C2561) * C494 +
                    (C318 * C2407 + C6313 * C2605) * C448) *
                       C6311 * C2123) *
                  C6185 * C6217) /
                     (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C156 +
            (C318 * C157 + C6313 * C405) * C6217) *
               C6311 * C2122 +
           ((C318 * C451 + C6313 * C658) * C156 +
            (C318 * C530 + C6313 * C722) * C6217) *
               C6311 * C2123) *
              C6206 * C67 -
          ((C1395 + C1393) * C6311 * C2123 + (C418 + C410) * C6311 * C2122) *
              C6206 * C68 +
          ((C415 + C419) * C6311 * C2122 +
           ((C318 * C1069 + C6313 * C1305) * C156 +
            (C318 * C1145 + C6313 * C1389) * C6217) *
               C6311 * C2123) *
              C6206 * C69)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C6313 * C319) * C156 +
            (C318 * C157 + C6313 * C405) * C6217) *
               C6311 * C2122 +
           (C2640 + C2648) * C6311 * C2123) *
              C446 -
          ((C2649 + C2645) * C6311 * C2123 + (C2648 + C2640) * C6311 * C2122) *
              C447 +
          ((C2645 + C2649) * C6311 * C2122 +
           ((C318 * C2361 + C6313 * C2561) * C156 +
            (C318 * C2441 + C6313 * C2638) * C6217) *
               C6311 * C2123) *
              C448) *
         C6185) /
            (p * q * std::sqrt(p + q));
    d2eexx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C2124 * C79 + C6311 * C83) * C1067 +
                      (C2124 * C85 + C6311 * C91) * C1063 -
                      (C2124 * C80 + C6311 * C84) * C1068 -
                      (C2124 * C86 + C6311 * C92) * C1064) *
                         C6312 * C3917 +
                     (C4402 * C1067 + C4403 * C1063 -
                      (C2124 * C754 + C6311 * C760) * C1068 -
                      (C2124 * C758 + C6311 * C766) * C1064) *
                         C6312 * C3918) *
                        C6217 * C1065 +
                    ((C2942 - (C2935 + C2934) + C2943) * C6312 * C3917 +
                     ((C2124 * C1792 + C6311 * C1794) * C1068 -
                      (C3576 * C1063 + C3577 * C1067) +
                      (C2124 * C1796 + C6311 * C1798) * C1064) *
                         C6312 * C3918) *
                        C6217 * C1066)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C1107 +
            (C2124 * C122 + C6311 * C126) * C1065 - C2374 * C1108 -
            C2414 * C1066) *
               C6312 * C3917 +
           (C4402 * C1107 + C4444 * C1065 - C3577 * C1108 - C3618 * C1066) *
               C6312 * C3918) *
              C1063 +
          ((C2940 * C1108 -
            ((C2124 * C123 + C6311 * C127) * C1065 +
             (C2124 * C80 + C6311 * C84) * C1107) +
            C2980 * C1066) *
               C6312 * C3917 +
           ((C2124 * C1792 + C6311 * C1794) * C1108 -
            ((C2124 * C796 + C6311 * C800) * C1065 +
             (C2124 * C754 + C6311 * C760) * C1107) +
            (C2124 * C1834 + C6311 * C1836) * C1066) *
               C6312 * C3918) *
              C1064) *
         C6217) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C2124 * C79 + C6311 * C83) * C156 +
                       (C2124 * C157 + C6311 * C161) * C6217) *
                          C6312 * C3917 +
                      (C4402 * C156 + C4480 * C6217) * C6312 * C3918) *
                         C1065 -
                     ((C3660 * C6217 + C3577 * C156) * C6312 * C3918 +
                      (C2452 + C2444) * C6312 * C3917) *
                         C1066) *
                        C1063 +
                    (((C3015 + C3019) * C6312 * C3917 +
                      ((C2124 * C1792 + C6311 * C1794) * C156 +
                       (C2124 * C1872 + C6311 * C1874) * C6217) *
                          C6312 * C3918) *
                         C1066 -
                     (((C2124 * C833 + C6311 * C837) * C6217 +
                       (C2124 * C754 + C6311 * C760) * C156) *
                          C6312 * C3918 +
                      ((C2124 * C158 + C6311 * C162) * C6217 +
                       (C2124 * C80 + C6311 * C84) * C156) *
                          C6312 * C3917) *
                         C1065) *
                        C1064)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C1067 +
            (C191 * C85 + C6312 * C196) * C1063 - C209 * C1068 - C210 * C1064) *
               C3917 +
           (C4518 * C1067 + C4519 * C1063 - C1550 * C1068 - C1551 * C1064) *
               C3918) *
              C6311 * C6217 * C1065 +
          ((C1188 * C1068 -
            ((C191 * C455 + C6312 * C568) * C1063 +
             (C191 * C451 + C6312 * C564) * C1067) +
            C1189 * C1064) *
               C3917 +
           ((C191 * C1792 + C6312 * C1910) * C1068 -
            ((C191 * C1795 + C6312 * C1911) * C1063 +
             (C191 * C1791 + C6312 * C1909) * C1067) +
            (C191 * C1796 + C6312 * C1912) * C1064) *
               C3918) *
              C6311 * C6217 * C1066)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C191 * C79 + C6312 * C192) * C1107 +
                      (C191 * C122 + C6312 * C238) * C1065 -
                      (C191 * C451 + C6312 * C564) * C1108 -
                      (C191 * C496 + C6312 * C597) * C1066) *
                         C3917 +
                     (C4518 * C1107 + C4559 * C1065 -
                      (C191 * C1791 + C6312 * C1909) * C1108 -
                      (C191 * C1833 + C6312 * C1947) * C1066) *
                         C3918) *
                        C6311 * C1063 +
                    ((C1227 - (C1226 + C1225) + C1231) * C3917 +
                     ((C191 * C1792 + C6312 * C1910) * C1108 -
                      (C1590 * C1065 + C1550 * C1107) +
                      (C191 * C1834 + C6312 * C1948) * C1066) *
                         C3918) *
                        C6311 * C1064) *
                   C6217) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C191 * C79 + C6312 * C192) * C156 +
             (C191 * C157 + C6312 * C278) * C6217) *
                C3917 +
            (C4518 * C156 + C4594 * C6217) * C3918) *
               C6311 * C1065 -
           (((C191 * C1871 + C6312 * C1983) * C6217 +
             (C191 * C1791 + C6312 * C1909) * C156) *
                C3918 +
            ((C191 * C530 + C6312 * C628) * C6217 +
             (C191 * C451 + C6312 * C564) * C156) *
                C3917) *
               C6311 * C1066) *
              C1063 +
          (((C1269 + C1271) * C3917 + ((C191 * C1792 + C6312 * C1910) * C156 +
                                       (C191 * C1872 + C6312 * C1984) * C6217) *
                                          C3918) *
               C6311 * C1066 -
           ((C1632 * C6217 + C1550 * C156) * C3918 + (C291 + C283) * C3917) *
               C6311 * C1065) *
              C1064)) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C1067 +
           (C4075 * C85 + C3917 * C323 + C4076 * C759 + C3918 * C966) * C1063 -
           (C4076 * C754 + C3918 * C961 + C4075 * C80 + C3917 * C320) * C1068 -
           (C4076 * C758 + C3918 * C965 + C4075 * C86 + C3917 * C324) * C1064) *
              C6311 * C6312 * C6217 * C1065 +
          ((C4075 * C450 + C3917 * C657 + C4076 * C1792 + C3918 * C2020) *
               C1068 -
           ((C4076 * C1795 + C3918 * C2021 + C4075 * C455 + C3917 * C662) *
                C1063 +
            (C4076 * C1791 + C3918 * C2019 + C4075 * C451 + C3917 * C658) *
                C1067) +
           (C4075 * C454 + C3917 * C661 + C4076 * C1796 + C3918 * C2022) *
               C1064) *
              C6311 * C6312 * C6217 * C1066)) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C1107 +
           (C4075 * C122 + C3917 * C365 + C4076 * C797 + C3918 * C996) * C1065 -
           (C4076 * C1791 + C3918 * C2019 + C4075 * C451 + C3917 * C658) *
               C1108 -
           (C4076 * C1833 + C3918 * C2057 + C4075 * C496 + C3917 * C691) *
               C1066) *
              C6311 * C6312 * C1063 +
          ((C4075 * C450 + C3917 * C657 + C4076 * C1792 + C3918 * C2020) *
               C1108 -
           ((C4076 * C796 + C3918 * C995 + C4075 * C123 + C3917 * C366) *
                C1065 +
            (C4076 * C754 + C3918 * C961 + C4075 * C80 + C3917 * C320) *
                C1107) +
           (C4075 * C495 + C3917 * C693 + C4076 * C1834 + C3918 * C2058) *
               C1066) *
              C6311 * C6312 * C1064) *
         C6217) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C156 +
            (C4075 * C157 + C3917 * C405 + C4076 * C834 + C3918 * C1025) *
                C6217) *
               C6311 * C6312 * C1065 -
           ((C4076 * C1871 + C3918 * C2093 + C4075 * C530 + C3917 * C722) *
                C6217 +
            (C4076 * C1791 + C3918 * C2019 + C4075 * C451 + C3917 * C658) *
                C156) *
               C6311 * C6312 * C1066) *
              C1063 +
          (((C4075 * C450 + C3917 * C657 + C4076 * C1792 + C3918 * C2020) *
                C156 +
            (C4075 * C529 + C3917 * C721 + C4076 * C1872 + C3918 * C2094) *
                C6217) *
               C6311 * C6312 * C1066 -
           ((C4076 * C833 + C3918 * C1027 + C4075 * C158 + C3917 * C406) *
                C6217 +
            (C4076 * C754 + C3918 * C961 + C4075 * C80 + C3917 * C320) * C156) *
               C6311 * C6312 * C1065) *
              C1064)) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2124 * C79 + C6311 * C83) * C449 +
             (C2124 * C85 + C6311 * C91) * C6185) *
                C6312 * C3917 +
            (C4406 + C4407) * C6312 * C3918) *
               C1429 -
           ((C4408 + C4409) * C6312 * C3918 + (C4407 + C4406) * C6312 * C3917) *
               C1430) *
              C1065 +
          (((C3579 + C3578) * C6312 * C3917 +
            ((C2124 * C2675 + C6311 * C2676) * C449 +
             (C2124 * C2677 + C6311 * C2678) * C6185) *
                C6312 * C3918) *
               C1430 -
           ((C3578 + C3579) * C6312 * C3918 + (C2379 + C2378) * C6312 * C3917) *
               C1429) *
              C1066)) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C2124 * C79 + C6311 * C83) * C1107 +
                      (C2124 * C122 + C6311 * C126) * C1065 - C2374 * C1108 -
                      C2414 * C1066) *
                         C6312 * C3917 +
                     (C5380 + C5381 - C5382 - C5383) * C6312 * C3918) *
                        C6185 * C1429 +
                    ((C5382 - (C5381 + C5380) + C5383) * C6312 * C3917 +
                     ((C2124 * C2675 + C6311 * C2676) * C1108 -
                      (C4445 * C1065 + C4405 * C1107) +
                      (C2124 * C2705 + C6311 * C2706) * C1066) *
                         C6312 * C3918) *
                        C6185 * C1430)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C1505 +
            (C2124 * C157 + C6311 * C161) * C1429 - C4402 * C1506 -
            C4480 * C1430) *
               C6312 * C3917 +
           (C4402 * C1505 + C4480 * C1429 - C4405 * C1506 - C4481 * C1430) *
               C6312 * C3918) *
              C1065 +
          ((C3657 - (C3656 + C3655) + C3661) * C6312 * C3917 +
           ((C2124 * C2675 + C6311 * C2676) * C1506 -
            (C3660 * C1429 + C3577 * C1505) +
            (C2124 * C2733 + C6311 * C2734) * C1430) *
               C6312 * C3918) *
              C1066) *
         C6185) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C191 * C79 + C6312 * C192) * C449 +
             (C191 * C85 + C6312 * C196) * C6185) *
                C3917 +
            (C4522 + C4523) * C3918) *
               C6311 * C1429 -
           ((C4524 + C4525) * C3918 + (C4523 + C4522) * C3917) * C6311 *
               C1430) *
              C1065 +
          (((C5458 + C5459) * C3917 + ((C191 * C2675 + C6312 * C2761) * C449 +
                                       (C191 * C2677 + C6312 * C2762) * C6185) *
                                          C3918) *
               C6311 * C1430 -
           ((C5459 + C5458) * C3918 + ((C191 * C455 + C6312 * C568) * C6185 +
                                       (C191 * C451 + C6312 * C564) * C449) *
                                          C3917) *
               C6311 * C1429) *
              C1066)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C191 * C79 + C6312 * C192) * C1107 +
                      (C191 * C122 + C6312 * C238) * C1065 -
                      (C191 * C451 + C6312 * C564) * C1108 -
                      (C191 * C496 + C6312 * C597) * C1066) *
                         C3917 +
                     (C5494 + C5495 - C5496 - C5500) * C3918) *
                        C6311 * C6185 * C1429 +
                    ((C5496 - (C5495 + C5494) + C5500) * C3917 +
                     ((C191 * C2675 + C6312 * C2761) * C1108 -
                      (C4560 * C1065 + C4521 * C1107) +
                      (C191 * C2705 + C6312 * C2789) * C1066) *
                         C3918) *
                        C6311 * C6185 * C1430)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C1505 +
            (C191 * C157 + C6312 * C278) * C1429 - C4518 * C1506 -
            C4594 * C1430) *
               C3917 +
           (C4518 * C1505 + C4594 * C1429 - C4521 * C1506 - C4595 * C1430) *
               C3918) *
              C6311 * C1065 +
          ((C5456 * C1506 -
            ((C191 * C530 + C6312 * C628) * C1429 +
             (C191 * C451 + C6312 * C564) * C1505) +
            C5537 * C1430) *
               C3917 +
           ((C191 * C2675 + C6312 * C2761) * C1506 -
            (C5537 * C1429 + C5456 * C1505) +
            (C191 * C2733 + C6312 * C2816) * C1430) *
               C3918) *
              C6311 * C1066) *
         C6185) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C449 +
            (C4075 * C85 + C3917 * C323 + C4076 * C759 + C3918 * C966) *
                C6185) *
               C6311 * C6312 * C1429 -
           ((C4076 * C764 + C3918 * C967 + C4075 * C759 + C3917 * C966) *
                C6185 +
            (C4076 * C756 + C3918 * C963 + C4075 * C755 + C3917 * C962) *
                C449) *
               C6311 * C6312 * C1430) *
              C1065 +
          (((C4075 * C1791 + C3917 * C2019 + C4076 * C2675 + C3918 * C2843) *
                C449 +
            (C4075 * C1795 + C3917 * C2021 + C4076 * C2677 + C3918 * C2844) *
                C6185) *
               C6311 * C6312 * C1430 -
           ((C4076 * C1795 + C3918 * C2021 + C4075 * C455 + C3917 * C662) *
                C6185 +
            (C4076 * C1791 + C3918 * C2019 + C4075 * C451 + C3917 * C658) *
                C449) *
               C6311 * C6312 * C1429) *
              C1066)) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C1107 +
           (C4075 * C122 + C3917 * C365 + C4076 * C797 + C3918 * C996) * C1065 -
           (C4076 * C1791 + C3918 * C2019 + C4075 * C451 + C3917 * C658) *
               C1108 -
           (C4076 * C1833 + C3918 * C2057 + C4075 * C496 + C3917 * C691) *
               C1066) *
              C6311 * C6312 * C6185 * C1429 +
          ((C4075 * C1791 + C3917 * C2019 + C4076 * C2675 + C3918 * C2843) *
               C1108 -
           ((C4076 * C798 + C3918 * C997 + C4075 * C797 + C3917 * C996) *
                C1065 +
            (C4076 * C756 + C3918 * C963 + C4075 * C755 + C3917 * C962) *
                C1107) +
           (C4075 * C1833 + C3917 * C2057 + C4076 * C2705 + C3918 * C2871) *
               C1066) *
              C6311 * C6312 * C6185 * C1430)) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C1505 +
           (C4075 * C157 + C3917 * C405 + C4076 * C834 + C3918 * C1025) *
               C1429 -
           (C4076 * C756 + C3918 * C963 + C4075 * C755 + C3917 * C962) * C1506 -
           (C4076 * C835 + C3918 * C1026 + C4075 * C834 + C3917 * C1025) *
               C1430) *
              C6311 * C6312 * C1065 +
          ((C4075 * C1791 + C3917 * C2019 + C4076 * C2675 + C3918 * C2843) *
               C1506 -
           ((C4076 * C1871 + C3918 * C2093 + C4075 * C530 + C3917 * C722) *
                C1429 +
            (C4076 * C1791 + C3918 * C2019 + C4075 * C451 + C3917 * C658) *
                C1505) +
           (C4075 * C1871 + C3917 * C2093 + C4076 * C2733 + C3918 * C2898) *
               C1430) *
              C6311 * C6312 * C1066) *
         C6185) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C449 +
            (C2124 * C85 + C6311 * C91) * C6185) *
               C6312 * C3917 +
           ((C2124 * C755 + C6311 * C761) * C449 +
            (C2124 * C759 + C6311 * C767) * C6185) *
               C6312 * C3918) *
              C6217 * C446 -
          ((C3578 + C3579) * C6312 * C3918 + (C2379 + C2378) * C6312 * C3917) *
              C6217 * C447 +
          ((C2381 + C2380) * C6312 * C3917 +
           ((C2124 * C3567 + C6311 * C3568) * C449 +
            (C2124 * C3569 + C6311 * C3570) * C6185) *
               C6312 * C3918) *
              C6217 * C448)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2124 * C79 + C6311 * C83) * C76 +
           (C2124 * C85 + C6311 * C91) * C67 -
           (C2124 * C80 + C6311 * C84) * C77 -
           (C2124 * C86 + C6311 * C92) * C68 +
           (C2124 * C81 + C6311 * C87) * C78 +
           (C2124 * C88 + C6311 * C93) * C69) *
              C6312 * C3917 +
          ((C2124 * C755 + C6311 * C761) * C76 +
           (C2124 * C759 + C6311 * C767) * C67 -
           (C2124 * C754 + C6311 * C760) * C77 -
           (C2124 * C758 + C6311 * C766) * C68 +
           (C2124 * C1431 + C6311 * C1432) * C78 +
           (C2124 * C1433 + C6311 * C1434) * C69) *
              C6312 * C3918) *
         C6217 * C6206) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C449 +
            (C2124 * C85 + C6311 * C91) * C6185) *
               C6312 * C3917 +
           (C4406 + C4407) * C6312 * C3918) *
              C751 -
          ((C4408 + C4409) * C6312 * C3918 + (C4407 + C4406) * C6312 * C3917) *
              C752 +
          ((C4409 + C4408) * C6312 * C3917 +
           ((C2124 * C4389 + C6311 * C4390) * C449 +
            (C2124 * C4391 + C6311 * C4392) * C6185) *
               C6312 * C3918) *
              C753) *
         C6206) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (-std::pow(Pi, 2.5) *
         (((C2124 * C79 + C6311 * C83) * C492 +
           (C2124 * C122 + C6311 * C126) * C446 - C2374 * C493 - C2414 * C447 +
           C2377 * C494 + C2415 * C448) *
              C6312 * C3917 +
          ((C2124 * C755 + C6311 * C761) * C492 +
           (C2124 * C797 + C6311 * C801) * C446 - C3577 * C493 - C3618 * C447 +
           (C2124 * C3567 + C6311 * C3568) * C494 +
           (C2124 * C3613 + C6311 * C3614) * C448) *
              C6312 * C3918) *
         C6185 * C6217) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C121 +
            (C2124 * C122 + C6311 * C126) * C6206) *
               C6312 * C3917 +
           ((C2124 * C755 + C6311 * C761) * C121 +
            (C2124 * C797 + C6311 * C801) * C6206) *
               C6312 * C3918) *
              C67 -
          (((C2124 * C796 + C6311 * C800) * C6206 +
            (C2124 * C754 + C6311 * C760) * C121) *
               C6312 * C3918 +
           ((C2124 * C123 + C6311 * C127) * C6206 +
            (C2124 * C80 + C6311 * C84) * C121) *
               C6312 * C3917) *
              C68 +
          (((C2124 * C81 + C6311 * C87) * C121 +
            (C2124 * C124 + C6311 * C128) * C6206) *
               C6312 * C3917 +
           ((C2124 * C1431 + C6311 * C1432) * C121 +
            (C2124 * C1469 + C6311 * C1470) * C6206) *
               C6312 * C3918) *
              C69) *
         C6217) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C121 +
            (C2124 * C122 + C6311 * C126) * C6206) *
               C6312 * C3917 +
           (C4438 + C4446) * C6312 * C3918) *
              C6185 * C751 -
          ((C4447 + C4443) * C6312 * C3918 + (C4446 + C4438) * C6312 * C3917) *
              C6185 * C752 +
          ((C4443 + C4447) * C6312 * C3917 +
           ((C2124 * C4389 + C6311 * C4390) * C121 +
            (C2124 * C4435 + C6311 * C4436) * C6206) *
               C6312 * C3918) *
              C6185 * C753)) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C156 +
            (C2124 * C157 + C6311 * C161) * C6217) *
               C6312 * C3917 +
           ((C2124 * C755 + C6311 * C761) * C156 +
            (C2124 * C834 + C6311 * C838) * C6217) *
               C6312 * C3918) *
              C446 -
          ((C3660 * C6217 + C3577 * C156) * C6312 * C3918 +
           (C2452 + C2444) * C6312 * C3917) *
              C447 +
          ((C2449 + C2453) * C6312 * C3917 +
           ((C2124 * C3567 + C6311 * C3568) * C156 +
            (C2124 * C3652 + C6311 * C3653) * C6217) *
               C6312 * C3918) *
              C448) *
         C6185) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C2124 * C79 + C6311 * C83) * C156 +
                                (C2124 * C157 + C6311 * C161) * C6217) *
                                   C6312 * C3917 +
                               ((C2124 * C755 + C6311 * C761) * C156 +
                                (C2124 * C834 + C6311 * C838) * C6217) *
                                   C6312 * C3918) *
                                  C6206 * C67 -
                              (((C2124 * C833 + C6311 * C837) * C6217 +
                                (C2124 * C754 + C6311 * C760) * C156) *
                                   C6312 * C3918 +
                               ((C2124 * C158 + C6311 * C162) * C6217 +
                                (C2124 * C80 + C6311 * C84) * C156) *
                                   C6312 * C3917) *
                                  C6206 * C68 +
                              (((C2124 * C81 + C6311 * C87) * C156 +
                                (C2124 * C159 + C6311 * C163) * C6217) *
                                   C6312 * C3917 +
                               ((C2124 * C1431 + C6311 * C1432) * C156 +
                                (C2124 * C1507 + C6311 * C1508) * C6217) *
                                   C6312 * C3918) *
                                  C6206 * C69)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2124 * C79 + C6311 * C83) * C830 +
           (C2124 * C157 + C6311 * C161) * C751 - C4402 * C831 - C4480 * C752 +
           C4405 * C832 + C4481 * C753) *
              C6312 * C3917 +
          (C4402 * C830 + C4480 * C751 - C4405 * C831 - C4481 * C752 +
           (C2124 * C4389 + C6311 * C4390) * C832 +
           (C2124 * C4473 + C6311 * C4474) * C753) *
              C6312 * C3918) *
         C6206 * C6185) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (-std::pow(Pi, 2.5) * ((((C191 * C79 + C6312 * C192) * C449 +
                                 (C191 * C85 + C6312 * C196) * C6185) *
                                    C3917 +
                                ((C191 * C755 + C6312 * C868) * C449 +
                                 (C191 * C759 + C6312 * C872) * C6185) *
                                    C3918) *
                                   C6311 * C6217 * C446 -
                               (((C191 * C1795 + C6312 * C1911) * C6185 +
                                 (C191 * C1791 + C6312 * C1909) * C449) *
                                    C3918 +
                                ((C191 * C455 + C6312 * C568) * C6185 +
                                 (C191 * C451 + C6312 * C564) * C449) *
                                    C3917) *
                                   C6311 * C6217 * C447 +
                               (((C191 * C452 + C6312 * C565) * C449 +
                                 (C191 * C460 + C6312 * C569) * C6185) *
                                    C3917 +
                                ((C191 * C3567 + C6312 * C3695) * C449 +
                                 (C191 * C3569 + C6312 * C3696) * C6185) *
                                    C3918) *
                                   C6311 * C6217 * C448)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C191 * C79 + C6312 * C192) * C76 +
           (C191 * C85 + C6312 * C196) * C67 - C209 * C77 - C210 * C68 +
           C211 * C78 + C212 * C69) *
              C3917 +
          ((C191 * C755 + C6312 * C868) * C76 +
           (C191 * C759 + C6312 * C872) * C67 - C1550 * C77 - C1551 * C68 +
           (C191 * C1431 + C6312 * C1543) * C78 +
           (C191 * C1433 + C6312 * C1544) * C69) *
              C3918) *
         C6311 * C6217 * C6206) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C449 +
            (C191 * C85 + C6312 * C196) * C6185) *
               C3917 +
           (C4522 + C4523) * C3918) *
              C6311 * C751 -
          ((C4524 + C4525) * C3918 + (C4523 + C4522) * C3917) * C6311 * C752 +
          ((C4525 + C4524) * C3917 + ((C191 * C4389 + C6312 * C4507) * C449 +
                                      (C191 * C4391 + C6312 * C4508) * C6185) *
                                         C3918) *
              C6311 * C753) *
         C6206) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (-std::pow(Pi, 2.5) *
         (((C191 * C79 + C6312 * C192) * C492 +
           (C191 * C122 + C6312 * C238) * C446 -
           (C191 * C451 + C6312 * C564) * C493 -
           (C191 * C496 + C6312 * C597) * C447 +
           (C191 * C452 + C6312 * C565) * C494 +
           (C191 * C497 + C6312 * C598) * C448) *
              C3917 +
          ((C191 * C755 + C6312 * C868) * C492 +
           (C191 * C797 + C6312 * C902) * C446 -
           (C191 * C1791 + C6312 * C1909) * C493 -
           (C191 * C1833 + C6312 * C1947) * C447 +
           (C191 * C3567 + C6312 * C3695) * C494 +
           (C191 * C3613 + C6312 * C3731) * C448) *
              C3918) *
         C6311 * C6185 * C6217) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C121 +
            (C191 * C122 + C6312 * C238) * C6206) *
               C3917 +
           ((C191 * C755 + C6312 * C868) * C121 +
            (C191 * C797 + C6312 * C902) * C6206) *
               C3918) *
              C6311 * C67 -
          ((C1591 + C1587) * C3918 + (C251 + C243) * C3917) * C6311 * C68 +
          ((C248 + C252) * C3917 + ((C191 * C1431 + C6312 * C1543) * C121 +
                                    (C191 * C1469 + C6312 * C1585) * C6206) *
                                       C3918) *
              C6311 * C69) *
         C6217) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C121 +
            (C191 * C122 + C6312 * C238) * C6206) *
               C3917 +
           (C4553 + C4561) * C3918) *
              C6311 * C6185 * C751 -
          ((C4562 + C4558) * C3918 + (C4561 + C4553) * C3917) * C6311 * C6185 *
              C752 +
          ((C4558 + C4562) * C3917 + ((C191 * C4389 + C6312 * C4507) * C121 +
                                      (C191 * C4435 + C6312 * C4551) * C6206) *
                                         C3918) *
              C6311 * C6185 * C753)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C156 +
            (C191 * C157 + C6312 * C278) * C6217) *
               C3917 +
           ((C191 * C755 + C6312 * C868) * C156 +
            (C191 * C834 + C6312 * C931) * C6217) *
               C3918) *
              C6311 * C446 -
          (((C191 * C1871 + C6312 * C1983) * C6217 +
            (C191 * C1791 + C6312 * C1909) * C156) *
               C3918 +
           ((C191 * C530 + C6312 * C628) * C6217 +
            (C191 * C451 + C6312 * C564) * C156) *
               C3917) *
              C6311 * C447 +
          (((C191 * C452 + C6312 * C565) * C156 +
            (C191 * C531 + C6312 * C629) * C6217) *
               C3917 +
           ((C191 * C3567 + C6312 * C3695) * C156 +
            (C191 * C3652 + C6312 * C3766) * C6217) *
               C3918) *
              C6311 * C448) *
         C6185) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C156 +
            (C191 * C157 + C6312 * C278) * C6217) *
               C3917 +
           ((C191 * C755 + C6312 * C868) * C156 +
            (C191 * C834 + C6312 * C931) * C6217) *
               C3918) *
              C6311 * C6206 * C67 -
          ((C1632 * C6217 + C1550 * C156) * C3918 + (C291 + C283) * C3917) *
              C6311 * C6206 * C68 +
          ((C288 + C292) * C3917 + ((C191 * C1431 + C6312 * C1543) * C156 +
                                    (C191 * C1507 + C6312 * C1625) * C6217) *
                                       C3918) *
              C6311 * C6206 * C69)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C191 * C79 + C6312 * C192) * C830 +
           (C191 * C157 + C6312 * C278) * C751 - C4518 * C831 - C4594 * C752 +
           C4521 * C832 + C4595 * C753) *
              C3917 +
          (C4518 * C830 + C4594 * C751 - C4521 * C831 - C4595 * C752 +
           (C191 * C4389 + C6312 * C4507) * C832 +
           (C191 * C4473 + C6312 * C4588) * C753) *
              C3918) *
         C6311 * C6206 * C6185) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (-std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C449 +
           (C4075 * C85 + C3917 * C323 + C4076 * C759 + C3918 * C966) * C6185) *
              C6311 * C6312 * C6217 * C446 -
          ((C4076 * C1795 + C3918 * C2021 + C4075 * C455 + C3917 * C662) *
               C6185 +
           (C4076 * C1791 + C3918 * C2019 + C4075 * C451 + C3917 * C658) *
               C449) *
              C6311 * C6312 * C6217 * C447 +
          ((C4075 * C452 + C3917 * C659 + C4076 * C3567 + C3918 * C3801) *
               C449 +
           (C4075 * C460 + C3917 * C663 + C4076 * C3569 + C3918 * C3802) *
               C6185) *
              C6311 * C6312 * C6217 * C448)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C76 +
          (C4075 * C85 + C3917 * C323 + C4076 * C759 + C3918 * C966) * C67 -
          (C4076 * C754 + C3918 * C961 + C4075 * C80 + C3917 * C320) * C77 -
          (C4076 * C758 + C3918 * C965 + C4075 * C86 + C3917 * C324) * C68 +
          (C4075 * C81 + C3917 * C321 + C4076 * C1431 + C3918 * C1667) * C78 +
          (C4075 * C88 + C3917 * C325 + C4076 * C1433 + C3918 * C1668) * C69) *
         C6311 * C6312 * C6217 * C6206) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C449 +
           (C4075 * C85 + C3917 * C323 + C4076 * C759 + C3918 * C966) * C6185) *
              C6311 * C6312 * C751 -
          ((C4076 * C764 + C3918 * C967 + C4075 * C759 + C3917 * C966) * C6185 +
           (C4076 * C756 + C3918 * C963 + C4075 * C755 + C3917 * C962) * C449) *
              C6311 * C6312 * C752 +
          ((C4075 * C756 + C3917 * C963 + C4076 * C4389 + C3918 * C4621) *
               C449 +
           (C4075 * C764 + C3917 * C967 + C4076 * C4391 + C3918 * C4622) *
               C6185) *
              C6311 * C6312 * C753) *
         C6206) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (-std::pow(Pi, 2.5) *
         ((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C492 +
          (C4075 * C122 + C3917 * C365 + C4076 * C797 + C3918 * C996) * C446 -
          (C4076 * C1791 + C3918 * C2019 + C4075 * C451 + C3917 * C658) * C493 -
          (C4076 * C1833 + C3918 * C2057 + C4075 * C496 + C3917 * C691) * C447 +
          (C4075 * C452 + C3917 * C659 + C4076 * C3567 + C3918 * C3801) * C494 +
          (C4075 * C497 + C3917 * C692 + C4076 * C3613 + C3918 * C3845) *
              C448) *
         C6311 * C6312 * C6185 * C6217) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C121 +
           (C4075 * C122 + C3917 * C365 + C4076 * C797 + C3918 * C996) *
               C6206) *
              C6311 * C6312 * C67 -
          ((C4076 * C796 + C3918 * C995 + C4075 * C123 + C3917 * C366) * C6206 +
           (C4076 * C754 + C3918 * C961 + C4075 * C80 + C3917 * C320) * C121) *
              C6311 * C6312 * C68 +
          ((C4075 * C81 + C3917 * C321 + C4076 * C1431 + C3918 * C1667) * C121 +
           (C4075 * C124 + C3917 * C367 + C4076 * C1469 + C3918 * C1709) *
               C6206) *
              C6311 * C6312 * C69) *
         C6217) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C121 +
           (C4075 * C122 + C3917 * C365 + C4076 * C797 + C3918 * C996) *
               C6206) *
              C6311 * C6312 * C6185 * C751 -
          ((C4076 * C798 + C3918 * C997 + C4075 * C797 + C3917 * C996) * C6206 +
           (C4076 * C756 + C3918 * C963 + C4075 * C755 + C3917 * C962) * C121) *
              C6311 * C6312 * C6185 * C752 +
          ((C4075 * C756 + C3917 * C963 + C4076 * C4389 + C3918 * C4621) *
               C121 +
           (C4075 * C798 + C3917 * C997 + C4076 * C4435 + C3918 * C4649) *
               C6206) *
              C6311 * C6312 * C6185 * C753)) /
            (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (-std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C156 +
           (C4075 * C157 + C3917 * C405 + C4076 * C834 + C3918 * C1025) *
               C6217) *
              C6311 * C6312 * C446 -
          ((C4076 * C1871 + C3918 * C2093 + C4075 * C530 + C3917 * C722) *
               C6217 +
           (C4076 * C1791 + C3918 * C2019 + C4075 * C451 + C3917 * C658) *
               C156) *
              C6311 * C6312 * C447 +
          ((C4075 * C452 + C3917 * C659 + C4076 * C3567 + C3918 * C3801) *
               C156 +
           (C4075 * C531 + C3917 * C723 + C4076 * C3652 + C3918 * C3883) *
               C6217) *
              C6311 * C6312 * C448) *
         C6185) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C156 +
           (C4075 * C157 + C3917 * C405 + C4076 * C834 + C3918 * C1025) *
               C6217) *
              C6311 * C6312 * C6206 * C67 -
          ((C4076 * C833 + C3918 * C1027 + C4075 * C158 + C3917 * C406) *
               C6217 +
           (C4076 * C754 + C3918 * C961 + C4075 * C80 + C3917 * C320) * C156) *
              C6311 * C6312 * C6206 * C68 +
          ((C4075 * C81 + C3917 * C321 + C4076 * C1431 + C3918 * C1667) * C156 +
           (C4075 * C159 + C3917 * C407 + C4076 * C1507 + C3918 * C1749) *
               C6217) *
              C6311 * C6312 * C6206 * C69)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C830 +
          (C4075 * C157 + C3917 * C405 + C4076 * C834 + C3918 * C1025) * C751 -
          (C4076 * C756 + C3918 * C963 + C4075 * C755 + C3917 * C962) * C831 -
          (C4076 * C835 + C3918 * C1026 + C4075 * C834 + C3917 * C1025) * C752 +
          (C4075 * C756 + C3917 * C963 + C4076 * C4389 + C3918 * C4621) * C832 +
          (C4075 * C835 + C3917 * C1026 + C4076 * C4473 + C3918 * C4676) *
              C753) *
         C6311 * C6312 * C6206 * C6185) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C2124 * C79 + C6311 * C83) * C1067 +
                      (C2124 * C85 + C6311 * C91) * C1063 -
                      (C2124 * C80 + C6311 * C84) * C1068 -
                      (C2124 * C86 + C6311 * C92) * C1064) *
                         C6312 * C3917 +
                     (C5018 + C5019 - C5026 - C5027) * C6312 * C3918) *
                        C1429 +
                    ((C5026 - (C5019 + C5018) + C5027) * C6312 * C3917 +
                     ((C2124 * C757 + C6311 * C763) * C1068 -
                      (C4404 * C1063 + C4405 * C1067) +
                      (C2124 * C765 + C6311 * C769) * C1064) *
                         C6312 * C3918) *
                        C1430) *
                   C6206) /
                  (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2124 * C79 + C6311 * C83) * C121 +
             (C2124 * C122 + C6311 * C126) * C6206) *
                C6312 * C3917 +
            (C4438 + C4446) * C6312 * C3918) *
               C1063 -
           ((C5066 + C5064) * C6312 * C3918 +
            ((C2124 * C123 + C6311 * C127) * C6206 +
             (C2124 * C80 + C6311 * C84) * C121) *
                C6312 * C3917) *
               C1064) *
              C1429 +
          (((C5064 + C5066) * C6312 * C3917 +
            ((C2124 * C757 + C6311 * C763) * C121 +
             (C2124 * C799 + C6311 * C803) * C6206) *
                C6312 * C3918) *
               C1064 -
           ((C4447 + C4443) * C6312 * C3918 + (C4446 + C4438) * C6312 * C3917) *
               C1063) *
              C1430)) /
        (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C1505 +
            (C2124 * C157 + C6311 * C161) * C1429 - C4402 * C1506 -
            C4480 * C1430) *
               C6312 * C3917 +
           (C4402 * C1505 + C4480 * C1429 - C4405 * C1506 - C4481 * C1430) *
               C6312 * C3918) *
              C6206 * C1063 +
          ((C5024 * C1506 -
            ((C2124 * C158 + C6311 * C162) * C1429 +
             (C2124 * C80 + C6311 * C84) * C1505) +
            C5103 * C1430) *
               C6312 * C3917 +
           ((C2124 * C757 + C6311 * C763) * C1506 -
            (C5103 * C1429 + C5024 * C1505) +
            (C2124 * C836 + C6311 * C840) * C1430) *
               C6312 * C3918) *
              C6206 * C1064)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C1067 +
            (C191 * C85 + C6312 * C196) * C1063 - C209 * C1068 - C210 * C1064) *
               C3917 +
           (C5138 + C5139 - C5140 - C5141) * C3918) *
              C6311 * C1429 +
          ((C5140 - (C5139 + C5138) + C5141) * C3917 +
           ((C191 * C757 + C6312 * C870) * C1068 -
            (C4520 * C1063 + C4521 * C1067) +
            (C191 * C765 + C6312 * C874) * C1064) *
               C3918) *
              C6311 * C1430) *
         C6206) /
        (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C191 * C79 + C6312 * C192) * C121 +
             (C191 * C122 + C6312 * C238) * C6206) *
                C3917 +
            (C4553 + C4561) * C3918) *
               C6311 * C1063 -
           ((C1591 + C1587) * C3918 + (C251 + C243) * C3917) * C6311 * C1064) *
              C1429 +
          (((C1587 + C1591) * C3917 + ((C191 * C757 + C6312 * C870) * C121 +
                                       (C191 * C799 + C6312 * C904) * C6206) *
                                          C3918) *
               C6311 * C1064 -
           ((C4562 + C4558) * C3918 + (C4561 + C4553) * C3917) * C6311 *
               C1063) *
              C1430)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C1505 +
            (C191 * C157 + C6312 * C278) * C1429 - C4518 * C1506 -
            C4594 * C1430) *
               C3917 +
           (C4518 * C1505 + C4594 * C1429 - C4521 * C1506 - C4595 * C1430) *
               C3918) *
              C6311 * C6206 * C1063 +
          ((C1629 - (C1628 + C1627) + C1633) * C3917 +
           ((C191 * C757 + C6312 * C870) * C1506 -
            (C1632 * C1429 + C1550 * C1505) +
            (C191 * C836 + C6312 * C934) * C1430) *
               C3918) *
              C6311 * C6206 * C1064)) /
        (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C1067 +
           (C4075 * C85 + C3917 * C323 + C4076 * C759 + C3918 * C966) * C1063 -
           (C4076 * C754 + C3918 * C961 + C4075 * C80 + C3917 * C320) * C1068 -
           (C4076 * C758 + C3918 * C965 + C4075 * C86 + C3917 * C324) * C1064) *
              C6311 * C6312 * C1429 +
          ((C4075 * C754 + C3917 * C961 + C4076 * C757 + C3918 * C964) * C1068 -
           ((C4076 * C764 + C3918 * C967 + C4075 * C759 + C3917 * C966) *
                C1063 +
            (C4076 * C756 + C3918 * C963 + C4075 * C755 + C3917 * C962) *
                C1067) +
           (C4075 * C758 + C3917 * C965 + C4076 * C765 + C3918 * C968) *
               C1064) *
              C6311 * C6312 * C1430) *
         C6206) /
        (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C121 +
            (C4075 * C122 + C3917 * C365 + C4076 * C797 + C3918 * C996) *
                C6206) *
               C6311 * C6312 * C1063 -
           ((C4076 * C796 + C3918 * C995 + C4075 * C123 + C3917 * C366) *
                C6206 +
            (C4076 * C754 + C3918 * C961 + C4075 * C80 + C3917 * C320) * C121) *
               C6311 * C6312 * C1064) *
              C1429 +
          (((C4075 * C754 + C3917 * C961 + C4076 * C757 + C3918 * C964) * C121 +
            (C4075 * C796 + C3917 * C995 + C4076 * C799 + C3918 * C998) *
                C6206) *
               C6311 * C6312 * C1064 -
           ((C4076 * C798 + C3918 * C997 + C4075 * C797 + C3917 * C996) *
                C6206 +
            (C4076 * C756 + C3918 * C963 + C4075 * C755 + C3917 * C962) *
                C121) *
               C6311 * C6312 * C1063) *
              C1430)) /
        (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C1505 +
           (C4075 * C157 + C3917 * C405 + C4076 * C834 + C3918 * C1025) *
               C1429 -
           (C4076 * C756 + C3918 * C963 + C4075 * C755 + C3917 * C962) * C1506 -
           (C4076 * C835 + C3918 * C1026 + C4075 * C834 + C3917 * C1025) *
               C1430) *
              C6311 * C6312 * C6206 * C1063 +
          ((C4075 * C754 + C3917 * C961 + C4076 * C757 + C3918 * C964) * C1506 -
           ((C4076 * C833 + C3918 * C1027 + C4075 * C158 + C3917 * C406) *
                C1429 +
            (C4076 * C754 + C3918 * C961 + C4075 * C80 + C3917 * C320) *
                C1505) +
           (C4075 * C833 + C3917 * C1027 + C4076 * C836 + C3918 * C1028) *
               C1430) *
              C6311 * C6312 * C6206 * C1064)) /
        (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2124 * C79 + C6311 * C83) * C76 +
           (C2124 * C85 + C6311 * C91) * C67 -
           (C2124 * C80 + C6311 * C84) * C77 -
           (C2124 * C86 + C6311 * C92) * C68 +
           (C2124 * C81 + C6311 * C87) * C78 +
           (C2124 * C88 + C6311 * C93) * C69) *
              C6312 * C3917 +
          ((C2124 * C755 + C6311 * C761) * C76 +
           (C2124 * C759 + C6311 * C767) * C67 -
           (C2124 * C754 + C6311 * C760) * C77 -
           (C2124 * C758 + C6311 * C766) * C68 +
           (C2124 * C1431 + C6311 * C1432) * C78 +
           (C2124 * C1433 + C6311 * C1434) * C69) *
              C6312 * C3918) *
         C6217 * C6206) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2124 * C79 + C6311 * C83) * C449 +
            (C2124 * C85 + C6311 * C91) * C6185) *
               C6312 * C3917 +
           ((C2124 * C755 + C6311 * C761) * C449 +
            (C2124 * C759 + C6311 * C767) * C6185) *
               C6312 * C3918) *
              C6217 * C446 -
          ((C3578 + C3579) * C6312 * C3918 + (C2379 + C2378) * C6312 * C3917) *
              C6217 * C447 +
          ((C2381 + C2380) * C6312 * C3917 +
           ((C2124 * C3567 + C6311 * C3568) * C449 +
            (C2124 * C3569 + C6311 * C3570) * C6185) *
               C6312 * C3918) *
              C6217 * C448)) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C2124 * C79 + C6311 * C83) * C121 +
                      (C2124 * C122 + C6311 * C126) * C6206) *
                         C6312 * C3917 +
                     ((C2124 * C755 + C6311 * C761) * C121 +
                      (C2124 * C797 + C6311 * C801) * C6206) *
                         C6312 * C3918) *
                        C67 -
                    (((C2124 * C796 + C6311 * C800) * C6206 +
                      (C2124 * C754 + C6311 * C760) * C121) *
                         C6312 * C3918 +
                     ((C2124 * C123 + C6311 * C127) * C6206 +
                      (C2124 * C80 + C6311 * C84) * C121) *
                         C6312 * C3917) *
                        C68 +
                    (((C2124 * C81 + C6311 * C87) * C121 +
                      (C2124 * C124 + C6311 * C128) * C6206) *
                         C6312 * C3917 +
                     ((C2124 * C1431 + C6311 * C1432) * C121 +
                      (C2124 * C1469 + C6311 * C1470) * C6206) *
                         C6312 * C3918) *
                        C69) *
                   C6217) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2124 * C79 + C6311 * C83) * C492 +
                     (C2124 * C122 + C6311 * C126) * C446 - C2374 * C493 -
                     C2414 * C447 + C2377 * C494 + C2415 * C448) *
                        C6312 * C3917 +
                    ((C2124 * C755 + C6311 * C761) * C492 +
                     (C2124 * C797 + C6311 * C801) * C446 - C3577 * C493 -
                     C3618 * C447 + (C2124 * C3567 + C6311 * C3568) * C494 +
                     (C2124 * C3613 + C6311 * C3614) * C448) *
                        C6312 * C3918) *
                   C6185 * C6217) /
                      (p * q * std::sqrt(p + q));
    d2eexz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C2124 * C79 + C6311 * C83) * C156 +
                      (C2124 * C157 + C6311 * C161) * C6217) *
                         C6312 * C3917 +
                     ((C2124 * C755 + C6311 * C761) * C156 +
                      (C2124 * C834 + C6311 * C838) * C6217) *
                         C6312 * C3918) *
                        C6206 * C67 -
                    (((C2124 * C833 + C6311 * C837) * C6217 +
                      (C2124 * C754 + C6311 * C760) * C156) *
                         C6312 * C3918 +
                     ((C2124 * C158 + C6311 * C162) * C6217 +
                      (C2124 * C80 + C6311 * C84) * C156) *
                         C6312 * C3917) *
                        C6206 * C68 +
                    (((C2124 * C81 + C6311 * C87) * C156 +
                      (C2124 * C159 + C6311 * C163) * C6217) *
                         C6312 * C3917 +
                     ((C2124 * C1431 + C6311 * C1432) * C156 +
                      (C2124 * C1507 + C6311 * C1508) * C6217) *
                         C6312 * C3918) *
                        C6206 * C69)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C2124 * C79 + C6311 * C83) * C156 +
                      (C2124 * C157 + C6311 * C161) * C6217) *
                         C6312 * C3917 +
                     ((C2124 * C755 + C6311 * C761) * C156 +
                      (C2124 * C834 + C6311 * C838) * C6217) *
                         C6312 * C3918) *
                        C446 -
                    ((C3660 * C6217 + C3577 * C156) * C6312 * C3918 +
                     (C2452 + C2444) * C6312 * C3917) *
                        C447 +
                    ((C2449 + C2453) * C6312 * C3917 +
                     ((C2124 * C3567 + C6311 * C3568) * C156 +
                      (C2124 * C3652 + C6311 * C3653) * C6217) *
                         C6312 * C3918) *
                        C448) *
                   C6185) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C191 * C79 + C6312 * C192) * C76 +
                     (C191 * C85 + C6312 * C196) * C67 - C209 * C77 -
                     C210 * C68 + C211 * C78 + C212 * C69) *
                        C3917 +
                    ((C191 * C755 + C6312 * C868) * C76 +
                     (C191 * C759 + C6312 * C872) * C67 - C1550 * C77 -
                     C1551 * C68 + (C191 * C1431 + C6312 * C1543) * C78 +
                     (C191 * C1433 + C6312 * C1544) * C69) *
                        C3918) *
                   C6311 * C6217 * C6206) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C191 * C79 + C6312 * C192) * C449 +
                      (C191 * C85 + C6312 * C196) * C6185) *
                         C3917 +
                     ((C191 * C755 + C6312 * C868) * C449 +
                      (C191 * C759 + C6312 * C872) * C6185) *
                         C3918) *
                        C6311 * C6217 * C446 -
                    (((C191 * C1795 + C6312 * C1911) * C6185 +
                      (C191 * C1791 + C6312 * C1909) * C449) *
                         C3918 +
                     ((C191 * C455 + C6312 * C568) * C6185 +
                      (C191 * C451 + C6312 * C564) * C449) *
                         C3917) *
                        C6311 * C6217 * C447 +
                    (((C191 * C452 + C6312 * C565) * C449 +
                      (C191 * C460 + C6312 * C569) * C6185) *
                         C3917 +
                     ((C191 * C3567 + C6312 * C3695) * C449 +
                      (C191 * C3569 + C6312 * C3696) * C6185) *
                         C3918) *
                        C6311 * C6217 * C448)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C121 +
            (C191 * C122 + C6312 * C238) * C6206) *
               C3917 +
           ((C191 * C755 + C6312 * C868) * C121 +
            (C191 * C797 + C6312 * C902) * C6206) *
               C3918) *
              C6311 * C67 -
          ((C1591 + C1587) * C3918 + (C251 + C243) * C3917) * C6311 * C68 +
          ((C248 + C252) * C3917 + ((C191 * C1431 + C6312 * C1543) * C121 +
                                    (C191 * C1469 + C6312 * C1585) * C6206) *
                                       C3918) *
              C6311 * C69) *
         C6217) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C191 * C79 + C6312 * C192) * C492 +
           (C191 * C122 + C6312 * C238) * C446 -
           (C191 * C451 + C6312 * C564) * C493 -
           (C191 * C496 + C6312 * C597) * C447 +
           (C191 * C452 + C6312 * C565) * C494 +
           (C191 * C497 + C6312 * C598) * C448) *
              C3917 +
          ((C191 * C755 + C6312 * C868) * C492 +
           (C191 * C797 + C6312 * C902) * C446 -
           (C191 * C1791 + C6312 * C1909) * C493 -
           (C191 * C1833 + C6312 * C1947) * C447 +
           (C191 * C3567 + C6312 * C3695) * C494 +
           (C191 * C3613 + C6312 * C3731) * C448) *
              C3918) *
         C6311 * C6185 * C6217) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C156 +
            (C191 * C157 + C6312 * C278) * C6217) *
               C3917 +
           ((C191 * C755 + C6312 * C868) * C156 +
            (C191 * C834 + C6312 * C931) * C6217) *
               C3918) *
              C6311 * C6206 * C67 -
          ((C1632 * C6217 + C1550 * C156) * C3918 + (C291 + C283) * C3917) *
              C6311 * C6206 * C68 +
          ((C288 + C292) * C3917 + ((C191 * C1431 + C6312 * C1543) * C156 +
                                    (C191 * C1507 + C6312 * C1625) * C6217) *
                                       C3918) *
              C6311 * C6206 * C69)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C6312 * C192) * C156 +
            (C191 * C157 + C6312 * C278) * C6217) *
               C3917 +
           ((C191 * C755 + C6312 * C868) * C156 +
            (C191 * C834 + C6312 * C931) * C6217) *
               C3918) *
              C6311 * C446 -
          (((C191 * C1871 + C6312 * C1983) * C6217 +
            (C191 * C1791 + C6312 * C1909) * C156) *
               C3918 +
           ((C191 * C530 + C6312 * C628) * C6217 +
            (C191 * C451 + C6312 * C564) * C156) *
               C3917) *
              C6311 * C447 +
          (((C191 * C452 + C6312 * C565) * C156 +
            (C191 * C531 + C6312 * C629) * C6217) *
               C3917 +
           ((C191 * C3567 + C6312 * C3695) * C156 +
            (C191 * C3652 + C6312 * C3766) * C6217) *
               C3918) *
              C6311 * C448) *
         C6185) /
            (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C76 +
          (C4075 * C85 + C3917 * C323 + C4076 * C759 + C3918 * C966) * C67 -
          (C4076 * C754 + C3918 * C961 + C4075 * C80 + C3917 * C320) * C77 -
          (C4076 * C758 + C3918 * C965 + C4075 * C86 + C3917 * C324) * C68 +
          (C4075 * C81 + C3917 * C321 + C4076 * C1431 + C3918 * C1667) * C78 +
          (C4075 * C88 + C3917 * C325 + C4076 * C1433 + C3918 * C1668) * C69) *
         C6311 * C6312 * C6217 * C6206) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C449 +
           (C4075 * C85 + C3917 * C323 + C4076 * C759 + C3918 * C966) * C6185) *
              C6311 * C6312 * C6217 * C446 -
          ((C4076 * C1795 + C3918 * C2021 + C4075 * C455 + C3917 * C662) *
               C6185 +
           (C4076 * C1791 + C3918 * C2019 + C4075 * C451 + C3917 * C658) *
               C449) *
              C6311 * C6312 * C6217 * C447 +
          ((C4075 * C452 + C3917 * C659 + C4076 * C3567 + C3918 * C3801) *
               C449 +
           (C4075 * C460 + C3917 * C663 + C4076 * C3569 + C3918 * C3802) *
               C6185) *
              C6311 * C6312 * C6217 * C448)) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C121 +
           (C4075 * C122 + C3917 * C365 + C4076 * C797 + C3918 * C996) *
               C6206) *
              C6311 * C6312 * C67 -
          ((C4076 * C796 + C3918 * C995 + C4075 * C123 + C3917 * C366) * C6206 +
           (C4076 * C754 + C3918 * C961 + C4075 * C80 + C3917 * C320) * C121) *
              C6311 * C6312 * C68 +
          ((C4075 * C81 + C3917 * C321 + C4076 * C1431 + C3918 * C1667) * C121 +
           (C4075 * C124 + C3917 * C367 + C4076 * C1469 + C3918 * C1709) *
               C6206) *
              C6311 * C6312 * C69) *
         C6217) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C492 +
          (C4075 * C122 + C3917 * C365 + C4076 * C797 + C3918 * C996) * C446 -
          (C4076 * C1791 + C3918 * C2019 + C4075 * C451 + C3917 * C658) * C493 -
          (C4076 * C1833 + C3918 * C2057 + C4075 * C496 + C3917 * C691) * C447 +
          (C4075 * C452 + C3917 * C659 + C4076 * C3567 + C3918 * C3801) * C494 +
          (C4075 * C497 + C3917 * C692 + C4076 * C3613 + C3918 * C3845) *
              C448) *
         C6311 * C6312 * C6185 * C6217) /
            (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C156 +
           (C4075 * C157 + C3917 * C405 + C4076 * C834 + C3918 * C1025) *
               C6217) *
              C6311 * C6312 * C6206 * C67 -
          ((C4076 * C833 + C3918 * C1027 + C4075 * C158 + C3917 * C406) *
               C6217 +
           (C4076 * C754 + C3918 * C961 + C4075 * C80 + C3917 * C320) * C156) *
              C6311 * C6312 * C6206 * C68 +
          ((C4075 * C81 + C3917 * C321 + C4076 * C1431 + C3918 * C1667) * C156 +
           (C4075 * C159 + C3917 * C407 + C4076 * C1507 + C3918 * C1749) *
               C6217) *
              C6311 * C6312 * C6206 * C69)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4075 * C79 + C3917 * C319 + C4076 * C755 + C3918 * C962) * C156 +
           (C4075 * C157 + C3917 * C405 + C4076 * C834 + C3918 * C1025) *
               C6217) *
              C6311 * C6312 * C446 -
          ((C4076 * C1871 + C3918 * C2093 + C4075 * C530 + C3917 * C722) *
               C6217 +
           (C4076 * C1791 + C3918 * C2019 + C4075 * C451 + C3917 * C658) *
               C156) *
              C6311 * C6312 * C447 +
          ((C4075 * C452 + C3917 * C659 + C4076 * C3567 + C3918 * C3801) *
               C156 +
           (C4075 * C531 + C3917 * C723 + C4076 * C3652 + C3918 * C3883) *
               C6217) *
              C6311 * C6312 * C448) *
         C6185) /
            (p * q * std::sqrt(p + q));
}
