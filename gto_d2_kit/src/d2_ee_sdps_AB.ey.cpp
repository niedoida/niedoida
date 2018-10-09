/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sdps_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0210_12(const double ae,
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
    const double C5655 = ae * be;
    const double C5654 = ae + be;
    const double C5653 = 0 * be;
    const double C5652 = xA - xB;
    const double C5684 = yA - yB;
    const double C5687 = zA - zB;
    const double C5698 = 0 * be;
    const double C5724 = 0 * be;
    const double C5770 = p + q;
    const double C5769 = p * q;
    const double C5775 = xP - xQ;
    const double C5774 = bs[2];
    const double C5780 = bs[3];
    const double C5791 = bs[4];
    const double C5810 = yP - yQ;
    const double C5825 = zP - zQ;
    const double C80 = bs[0];
    const double C6226 = ce + de;
    const double C6225 = xC - xD;
    const double C6231 = yC - yD;
    const double C6238 = zC - zD;
    const double C6311 = ce * de;
    const double C5663 = 2 * C5655;
    const double C5656 = std::pow(C5654, 2);
    const double C6309 = 2 * C5654;
    const double C5657 = C5655 * C5652;
    const double C6206 = std::pow(C5652, 2);
    const double C6308 = C5652 * ae;
    const double C5699 = C5655 * C5684;
    const double C6245 = std::pow(C5684, 2);
    const double C6315 = C5684 * ae;
    const double C5725 = C5655 * C5687;
    const double C6256 = std::pow(C5687, 2);
    const double C6316 = C5687 * ae;
    const double C5771 = 2 * C5769;
    const double C5783 = C5775 * ae;
    const double C5782 = C5775 * be;
    const double C5779 = std::pow(C5775, 2);
    const double C5813 = C5810 * be;
    const double C5812 = C5775 * C5810;
    const double C5842 = C5810 * ae;
    const double C5841 = C5810 * C5775;
    const double C5855 = std::pow(C5810, 2);
    const double C5828 = C5825 * be;
    const double C5827 = C5775 * C5825;
    const double C5864 = C5810 * C5825;
    const double C5874 = C5825 * ae;
    const double C5873 = C5825 * C5775;
    const double C5887 = C5825 * C5810;
    const double C5896 = std::pow(C5825, 2);
    const double C6314 = 2 * C6226;
    const double C6313 = std::pow(C6225, 2);
    const double C6312 = std::pow(C6231, 2);
    const double C6310 = std::pow(C6238, 2);
    const double C5658 = 2 * C5656;
    const double C6319 = std::pow(C6309, -2);
    const double C6317 = std::pow(C6309, -1);
    const double C6207 = C6206 * C5655;
    const double C6246 = C6245 * C5655;
    const double C6257 = C6256 * C5655;
    const double C5773 = C5771 / C5770;
    const double C92 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C5771 / C5770, 2) -
          (bs[1] * C5771) / C5770) *
         C5655) /
        C5656;
    const double C81 = -(C5775 * bs[1] * C5771) / C5770;
    const double C441 = -(C5810 * bs[1] * C5771) / C5770;
    const double C725 = -(C5825 * bs[1] * C5771) / C5770;
    const double C5786 = C5780 * C5783;
    const double C5797 = C5791 * C5783;
    const double C85 = (-(bs[1] * C5783 * C5771) / C5770) / C5654;
    const double C5785 = C5780 * C5782;
    const double C5794 = C5791 * C5782;
    const double C84 = (-(bs[1] * C5782 * C5771) / C5770) / C5654;
    const double C5793 = C5779 * C5791;
    const double C5815 = C5780 * C5813;
    const double C5820 = C5791 * C5813;
    const double C123 = (-(bs[1] * C5813 * C5771) / C5770) / C5654;
    const double C5814 = C5812 * ae;
    const double C5844 = C5780 * C5842;
    const double C5849 = C5791 * C5842;
    const double C208 = (-(bs[1] * C5842 * C5771) / C5770) / C5654;
    const double C5843 = C5841 * ae;
    const double C5857 = C5855 * C5791;
    const double C5830 = C5780 * C5828;
    const double C5835 = C5791 * C5828;
    const double C166 = (-(bs[1] * C5828 * C5771) / C5770) / C5654;
    const double C5829 = C5827 * ae;
    const double C5865 = C5864 * ae;
    const double C5876 = C5780 * C5874;
    const double C5881 = C5791 * C5874;
    const double C321 = (-(bs[1] * C5874 * C5771) / C5770) / C5654;
    const double C5875 = C5873 * ae;
    const double C5888 = C5887 * ae;
    const double C5898 = C5896 * C5791;
    const double C6323 = std::pow(C6314, -1);
    const double C6322 = C6313 * C6311;
    const double C6321 = C6312 * C6311;
    const double C6320 = C6310 * C6311;
    const double C6208 = C6207 / C5654;
    const double C6247 = C6246 / C5654;
    const double C6258 = C6257 / C5654;
    const double C5776 = std::pow(C5773, 2);
    const double C5781 = -C5773;
    const double C5792 = std::pow(C5773, 4);
    const double C5816 = C5814 * be;
    const double C5845 = C5843 * be;
    const double C5831 = C5829 * be;
    const double C5866 = C5865 * be;
    const double C5877 = C5875 * be;
    const double C5889 = C5888 * be;
    const double C6328 = C6322 / C6226;
    const double C6327 = C6321 / C6226;
    const double C6326 = C6320 / C6226;
    const double C6209 = -C6208;
    const double C6248 = -C6247;
    const double C6259 = -C6258;
    const double C5778 = C5774 * C5776;
    const double C93 =
        (ae * C5776 * C5774 * C5775 * be + be * C5776 * C5774 * C5775 * ae +
         C5775 *
             (C5774 * C5776 +
              std::pow(C5775, 2) * bs[3] * std::pow(-C5773, 3)) *
             C5655) /
        C5656;
    const double C127 = (C5776 * C5774 * C5775 * (yP - yQ) * ae * be) / C5656;
    const double C170 = (C5776 * C5774 * C5775 * (zP - zQ) * ae * be) / C5656;
    const double C212 = (C5776 * C5774 * C5810 * C5775 * ae * be) / C5656;
    const double C243 =
        ((std::pow(C5810, 2) * C5774 * C5776 - (bs[1] * C5771) / C5770) *
         C5655) /
        C5656;
    const double C287 = (C5776 * C5774 * C5810 * C5825 * ae * be) / C5656;
    const double C325 = (C5776 * C5774 * C5825 * C5775 * ae * be) / C5656;
    const double C355 = (C5776 * C5774 * C5825 * C5810 * ae * be) / C5656;
    const double C390 =
        ((std::pow(C5825, 2) * C5774 * C5776 - (bs[1] * C5771) / C5770) *
         C5655) /
        C5656;
    const double C86 = (C5775 * C5776 * C5774 * C5782) / C5654 -
                       (be * bs[1] * C5771) / (C5770 * C5654);
    const double C87 = (C5775 * C5776 * C5774 * C5783) / C5654 -
                       (ae * bs[1] * C5771) / (C5770 * C5654);
    const double C124 = (C5775 * C5776 * C5774 * C5813) / C5654;
    const double C167 = (C5775 * C5776 * C5774 * C5828) / C5654;
    const double C209 = (C5775 * C5776 * C5774 * C5842) / C5654;
    const double C322 = (C5775 * C5776 * C5774 * C5874) / C5654;
    const double C446 = (C5810 * C5776 * C5774 * C5782) / C5654;
    const double C447 = (C5810 * C5776 * C5774 * C5783) / C5654;
    const double C477 = (C5810 * C5776 * C5774 * C5813) / C5654 -
                        (be * bs[1] * C5771) / (C5770 * C5654);
    const double C509 = (C5810 * C5776 * C5774 * C5828) / C5654;
    const double C541 = (C5810 * C5776 * C5774 * C5842) / C5654 -
                        (ae * bs[1] * C5771) / (C5770 * C5654);
    const double C631 = (C5810 * C5776 * C5774 * C5874) / C5654;
    const double C730 = (C5825 * C5776 * C5774 * C5782) / C5654;
    const double C731 = (C5825 * C5776 * C5774 * C5783) / C5654;
    const double C761 = (C5825 * C5776 * C5774 * C5813) / C5654;
    const double C793 = (C5825 * C5776 * C5774 * C5828) / C5654 -
                        (be * bs[1] * C5771) / (C5770 * C5654);
    const double C825 = (C5825 * C5776 * C5774 * C5842) / C5654;
    const double C915 = (C5825 * C5776 * C5774 * C5874) / C5654 -
                        (ae * bs[1] * C5771) / (C5770 * C5654);
    const double C5784 = std::pow(C5781, 3);
    const double C5801 = C5792 * C5797;
    const double C5800 = C5792 * C5794;
    const double C5799 = C5793 * C5792;
    const double C5822 = C5792 * C5820;
    const double C5837 = C5792 * C5835;
    const double C5851 = C5792 * C5849;
    const double C5858 = C5857 * C5792;
    const double C5883 = C5792 * C5881;
    const double C5899 = C5898 * C5792;
    const double C5819 = C5791 * C5816;
    const double C5848 = C5791 * C5845;
    const double C5834 = C5791 * C5831;
    const double C5868 = C5791 * C5866;
    const double C5880 = C5791 * C5877;
    const double C5891 = C5791 * C5889;
    const double C6331 = -C6328;
    const double C6330 = -C6327;
    const double C6329 = -C6326;
    const double C6210 = std::exp(C6209);
    const double C6249 = std::exp(C6248);
    const double C6260 = std::exp(C6259);
    const double C82 = C5778 * C5779 - (bs[1] * C5771) / C5770;
    const double C440 = C5810 * C5775 * C5778;
    const double C724 = C5825 * C5775 * C5778;
    const double C1011 = C5778 * C5855 - (bs[1] * C5771) / C5770;
    const double C1588 = C5825 * C5810 * C5778;
    const double C1856 = C5778 * C5896 - (bs[1] * C5771) / C5770;
    const double C5788 = C5784 * C5786;
    const double C5787 = C5784 * C5785;
    const double C5790 = C5780 * C5784;
    const double C5817 = C5784 * C5815;
    const double C5832 = C5784 * C5830;
    const double C5846 = C5784 * C5844;
    const double C5878 = C5784 * C5876;
    const double C128 = (ae * C5776 * C5774 * C5810 * be +
                         C5775 * C5784 * C5780 * C5775 * C5810 * ae * be) /
                        C5656;
    const double C171 = (ae * C5776 * C5774 * C5825 * be +
                         C5775 * C5784 * C5780 * C5775 * C5825 * ae * be) /
                        C5656;
    const double C213 = (be * C5776 * C5774 * C5810 * ae +
                         C5775 * C5784 * C5780 * C5810 * C5775 * ae * be) /
                        C5656;
    const double C244 =
        (C5775 * (C5778 + std::pow(C5810, 2) * C5780 * C5784) * C5655) / C5656;
    const double C288 =
        (C5775 * C5784 * C5780 * C5810 * C5825 * ae * be) / C5656;
    const double C289 =
        (C5784 * C5780 * C5866 + C5792 * C5791 * C5866 * C5779) / C5656;
    const double C326 = (be * C5776 * C5774 * C5825 * ae +
                         C5775 * C5784 * C5780 * C5825 * C5775 * ae * be) /
                        C5656;
    const double C356 =
        (C5775 * C5784 * C5780 * C5825 * C5810 * ae * be) / C5656;
    const double C357 =
        (C5784 * C5780 * C5889 + C5792 * C5791 * C5889 * C5779) / C5656;
    const double C391 =
        (C5775 * (C5778 + std::pow(C5825, 2) * C5780 * C5784) * C5655) / C5656;
    const double C450 =
        (C5810 * (C5778 + C5779 * C5780 * C5784) * C5655) / C5656;
    const double C480 =
        (be * C5776 * C5774 * C5783 + C5810 * C5784 * C5780 * C5816) / C5656;
    const double C512 = (C5810 * C5784 * C5780 * C5831) / C5656;
    const double C544 =
        (ae * C5776 * C5774 * C5782 + C5810 * C5784 * C5780 * C5845) / C5656;
    const double C575 =
        (ae * C5776 * C5774 * C5813 + be * C5776 * C5774 * C5842 +
         C5810 * (C5778 + C5855 * C5780 * C5784) * C5655) /
        C5656;
    const double C602 =
        (ae * C5776 * C5774 * C5828 + C5810 * C5784 * C5780 * C5866) / C5656;
    const double C634 = (C5810 * C5784 * C5780 * C5877) / C5656;
    const double C663 =
        (be * C5776 * C5774 * C5874 + C5810 * C5784 * C5780 * C5889) / C5656;
    const double C694 =
        (C5810 * (C5778 + C5896 * C5780 * C5784) * C5655) / C5656;
    const double C734 =
        (C5825 * (C5778 + C5779 * C5780 * C5784) * C5655) / C5656;
    const double C764 = (C5825 * C5784 * C5780 * C5816) / C5656;
    const double C796 =
        (be * C5776 * C5774 * C5783 + C5825 * C5784 * C5780 * C5831) / C5656;
    const double C828 = (C5825 * C5784 * C5780 * C5845) / C5656;
    const double C859 =
        (C5825 * (C5778 + C5855 * C5780 * C5784) * C5655) / C5656;
    const double C886 =
        (be * C5776 * C5774 * C5842 + C5825 * C5784 * C5780 * C5866) / C5656;
    const double C918 =
        (ae * C5776 * C5774 * C5782 + C5825 * C5784 * C5780 * C5877) / C5656;
    const double C947 =
        (ae * C5776 * C5774 * C5813 + C5825 * C5784 * C5780 * C5889) / C5656;
    const double C978 =
        (ae * C5776 * C5774 * C5828 + be * C5776 * C5774 * C5874 +
         C5825 * (C5778 + C5896 * C5780 * C5784) * C5655) /
        C5656;
    const double C5804 = C5775 * C5801;
    const double C6031 = C5810 * C5801;
    const double C5803 = C5775 * C5800;
    const double C6036 = C5810 * C5800;
    const double C5966 = C5775 * C5822;
    const double C5983 = C5810 * C5822;
    const double C5970 = C5775 * C5837;
    const double C6039 = C5810 * C5837;
    const double C6050 = C5825 * C5837;
    const double C5967 = C5775 * C5851;
    const double C5985 = C5810 * C5851;
    const double C5975 = C5775 * C5883;
    const double C6040 = C5810 * C5883;
    const double C6052 = C5825 * C5883;
    const double C5821 = C5792 * C5819;
    const double C5850 = C5792 * C5848;
    const double C5836 = C5792 * C5834;
    const double C5869 = C5792 * C5868;
    const double C5882 = C5792 * C5880;
    const double C5892 = C5792 * C5891;
    const double C6334 = std::exp(C6331);
    const double C6333 = std::exp(C6330);
    const double C6332 = std::exp(C6329);
    const double C1396 = C6210 * C446;
    const double C2489 = C6210 * C730;
    const double C5659 = C5657 * C6210;
    const double C6318 = C6210 * C6308;
    const double C65 = (C6210 * std::pow(C6308, 2)) / C5656 + C6210 / C6309;
    const double C67 = C6319 * C6210;
    const double C2691 = C6317 * C6210;
    const double C132 = C6249 * C124;
    const double C2425 = C6249 * C761;
    const double C5700 = C5699 * C6249;
    const double C122 = -(2 * C5655 * (yA - yB) * C6249) / C5654;
    const double C242 =
        -((C6249 - (C5684 * 2 * C5655 * C5684 * C6249) / C5654) * C5663) /
        C5654;
    const double C6324 = C6249 * C6315;
    const double C1006 = (C6249 * std::pow(C6315, 2)) / C5656 + C6249 / C6309;
    const double C1008 = C6319 * C6249;
    const double C2693 = C6317 * C6249;
    const double C175 = C6260 * C167;
    const double C1360 = C6260 * C509;
    const double C5726 = C5725 * C6260;
    const double C165 = -(2 * C5655 * (zA - zB) * C6260) / C5654;
    const double C389 =
        -((C6260 - (C5687 * 2 * C5655 * C5687 * C6260) / C5654) * C5663) /
        C5654;
    const double C6325 = C6260 * C6316;
    const double C1853 = (C6260 * std::pow(C6316, 2)) / C5656 + C6260 / C6309;
    const double C1855 = C6319 * C6260;
    const double C3704 = C6317 * C6260;
    const double C89 =
        (C5776 * C5774 * C5783 + C5775 * (C5775 * C5788 + C5778 * ae) +
         C5775 * C5778 * ae) /
        C5654;
    const double C445 = (C5810 * (C5775 * C5788 + C5778 * ae)) / C5654;
    const double C729 = (C5825 * (C5775 * C5788 + C5778 * ae)) / C5654;
    const double C1014 = (C5776 * C5774 * C5783 + C5788 * C5855) / C5654;
    const double C1285 =
        (2 * C5810 * C5788 + C5810 * (C5788 + C5801 * C5855)) / C5654;
    const double C1590 = (C5825 * (C5788 + C5801 * C5855)) / C5654;
    const double C1592 = (C5825 * C5810 * C5788) / C5654;
    const double C1859 = (C5776 * C5774 * C5783 + C5788 * C5896) / C5654;
    const double C2380 =
        (2 * C5825 * C5788 + C5825 * (C5788 + C5801 * C5896)) / C5654;
    const double C94 =
        ((C5778 + C5779 * C5780 * C5784) * C5655 +
         ae * (C5775 * C5787 + C5778 * be) + be * (C5775 * C5788 + C5778 * ae) +
         C5775 * (ae * C5787 + be * C5788 +
                  C5775 * (C5780 * C5784 + C5779 * bs[4] * std::pow(C5773, 4)) *
                      C5655)) /
        C5656;
    const double C88 =
        (C5776 * C5774 * C5782 + C5775 * (C5775 * C5787 + C5778 * be) +
         C5775 * C5778 * be) /
        C5654;
    const double C444 = (C5810 * (C5775 * C5787 + C5778 * be)) / C5654;
    const double C728 = (C5825 * (C5775 * C5787 + C5778 * be)) / C5654;
    const double C1013 = (C5776 * C5774 * C5782 + C5787 * C5855) / C5654;
    const double C1284 =
        (2 * C5810 * C5787 + C5810 * (C5787 + C5800 * C5855)) / C5654;
    const double C1589 = (C5825 * (C5787 + C5800 * C5855)) / C5654;
    const double C1591 = (C5825 * C5810 * C5787) / C5654;
    const double C1858 = (C5776 * C5774 * C5782 + C5787 * C5896) / C5654;
    const double C2379 =
        (2 * C5825 * C5787 + C5825 * (C5787 + C5800 * C5896)) / C5654;
    const double C5798 = C5790 * ae;
    const double C5796 = C5775 * C5790;
    const double C5795 = C5790 * be;
    const double C5802 = C5790 + C5799;
    const double C5859 = C5790 + C5858;
    const double C5900 = C5790 + C5899;
    const double C5984 = C5810 * C5790;
    const double C6051 = C5825 * C5790;
    const double C245 = ((C5778 + C5855 * C5780 * C5784) * C5655 +
                         (C5790 + C5855 * C5791 * C5792) * C5655 * C5779) /
                        C5656;
    const double C392 = ((C5778 + C5896 * C5780 * C5784) * C5655 +
                         (C5790 + C5896 * C5791 * C5792) * C5655 * C5779) /
                        C5656;
    const double C83 = 2 * C5775 * C5778 + C5775 * (C5778 + C5790 * C5779);
    const double C439 = C5810 * (C5778 + C5790 * C5779);
    const double C723 = C5825 * (C5778 + C5790 * C5779);
    const double C1283 = 2 * C5810 * C5778 + C5810 * (C5778 + C5790 * C5855);
    const double C1587 = C5825 * (C5778 + C5790 * C5855);
    const double C2378 = 2 * C5825 * C5778 + C5825 * (C5778 + C5790 * C5896);
    const double C129 = (C5784 * C5780 * C5816 + ae * C5775 * C5817 +
                         C5775 * (ae * C5817 + C5775 * C5792 * C5791 * C5816)) /
                        C5656;
    const double C125 = (C5776 * C5774 * C5813 + C5817 * C5779) / C5654;
    const double C126 =
        (2 * C5775 * C5817 + C5775 * (C5817 + C5822 * C5779)) / C5654;
    const double C478 = (C5810 * C5775 * C5817 + C5775 * C5778 * be) / C5654;
    const double C479 =
        (C5810 * (C5817 + C5822 * C5779) + (C5778 + C5790 * C5779) * be) /
        C5654;
    const double C762 = (C5825 * C5775 * C5817) / C5654;
    const double C763 = (C5825 * (C5817 + C5822 * C5779)) / C5654;
    const double C1048 =
        (C5776 * C5774 * C5813 + C5810 * (C5810 * C5817 + C5778 * be) +
         C5810 * C5778 * be) /
        C5654;
    const double C1621 = (C5825 * (C5810 * C5817 + C5778 * be)) / C5654;
    const double C1890 = (C5776 * C5774 * C5813 + C5817 * C5896) / C5654;
    const double C2422 =
        (2 * C5825 * C5817 + C5825 * (C5817 + C5822 * C5896)) / C5654;
    const double C172 = (C5784 * C5780 * C5831 + ae * C5775 * C5832 +
                         C5775 * (ae * C5832 + C5775 * C5792 * C5791 * C5831)) /
                        C5656;
    const double C168 = (C5776 * C5774 * C5828 + C5832 * C5779) / C5654;
    const double C169 =
        (2 * C5775 * C5832 + C5775 * (C5832 + C5837 * C5779)) / C5654;
    const double C510 = (C5810 * C5775 * C5832) / C5654;
    const double C511 = (C5810 * (C5832 + C5837 * C5779)) / C5654;
    const double C794 = (C5825 * C5775 * C5832 + C5775 * C5778 * be) / C5654;
    const double C795 =
        (C5825 * (C5832 + C5837 * C5779) + (C5778 + C5790 * C5779) * be) /
        C5654;
    const double C1078 = (C5776 * C5774 * C5828 + C5832 * C5855) / C5654;
    const double C1357 =
        (2 * C5810 * C5832 + C5810 * (C5832 + C5837 * C5855)) / C5654;
    const double C1651 = (C5825 * C5810 * C5832 + C5810 * C5778 * be) / C5654;
    const double C1652 =
        (C5825 * (C5832 + C5837 * C5855) + (C5778 + C5790 * C5855) * be) /
        C5654;
    const double C1923 =
        (C5776 * C5774 * C5828 + C5825 * (C5825 * C5832 + C5778 * be) +
         C5825 * C5778 * be) /
        C5654;
    const double C214 = (C5784 * C5780 * C5845 + be * C5775 * C5846 +
                         C5775 * (be * C5846 + C5775 * C5792 * C5791 * C5845)) /
                        C5656;
    const double C210 = (C5776 * C5774 * C5842 + C5846 * C5779) / C5654;
    const double C211 =
        (2 * C5775 * C5846 + C5775 * (C5846 + C5851 * C5779)) / C5654;
    const double C542 = (C5810 * C5775 * C5846 + C5775 * C5778 * ae) / C5654;
    const double C543 =
        (C5810 * (C5846 + C5851 * C5779) + (C5778 + C5790 * C5779) * ae) /
        C5654;
    const double C826 = (C5825 * C5775 * C5846) / C5654;
    const double C827 = (C5825 * (C5846 + C5851 * C5779)) / C5654;
    const double C1108 =
        (C5776 * C5774 * C5842 + C5810 * (C5810 * C5846 + C5778 * ae) +
         C5810 * C5778 * ae) /
        C5654;
    const double C1681 = (C5825 * (C5810 * C5846 + C5778 * ae)) / C5654;
    const double C1953 = (C5776 * C5774 * C5842 + C5846 * C5896) / C5654;
    const double C2486 =
        (2 * C5825 * C5846 + C5825 * (C5846 + C5851 * C5896)) / C5654;
    const double C327 = (C5784 * C5780 * C5877 + be * C5775 * C5878 +
                         C5775 * (be * C5878 + C5775 * C5792 * C5791 * C5877)) /
                        C5656;
    const double C323 = (C5776 * C5774 * C5874 + C5878 * C5779) / C5654;
    const double C324 =
        (2 * C5775 * C5878 + C5775 * (C5878 + C5883 * C5779)) / C5654;
    const double C632 = (C5810 * C5775 * C5878) / C5654;
    const double C633 = (C5810 * (C5878 + C5883 * C5779)) / C5654;
    const double C916 = (C5825 * C5775 * C5878 + C5775 * C5778 * ae) / C5654;
    const double C917 =
        (C5825 * (C5878 + C5883 * C5779) + (C5778 + C5790 * C5779) * ae) /
        C5654;
    const double C1197 = (C5776 * C5774 * C5874 + C5878 * C5855) / C5654;
    const double C1487 =
        (2 * C5810 * C5878 + C5810 * (C5878 + C5883 * C5855)) / C5654;
    const double C1767 = (C5825 * C5810 * C5878 + C5810 * C5778 * ae) / C5654;
    const double C1768 =
        (C5825 * (C5878 + C5883 * C5855) + (C5778 + C5790 * C5855) * ae) /
        C5654;
    const double C2039 =
        (C5776 * C5774 * C5874 + C5825 * (C5825 * C5878 + C5778 * ae) +
         C5825 * C5778 * ae) /
        C5654;
    const double C134 = C6249 * C128;
    const double C177 = C6260 * C171;
    const double C251 = C6249 * C244;
    const double C292 = C6260 * C288;
    const double C294 = C6260 * C289;
    const double C360 = C6249 * C356;
    const double C362 = C6249 * C357;
    const double C398 = C6260 * C391;
    const double C1291 = C6210 * C450;
    const double C1362 = C6260 * C512;
    const double C1398 = C6210 * C544;
    const double C1458 = C6260 * C602;
    const double C1490 = C6210 * C634;
    const double C1551 = C6260 * C694;
    const double C2386 = C6210 * C734;
    const double C2427 = C6249 * C764;
    const double C2491 = C6210 * C828;
    const double C2527 = C6249 * C859;
    const double C2595 = C6210 * C918;
    const double C2626 = C6249 * C947;
    const double C2130 = (C5810 * C5788 + C6031 * C5896) / C5654;
    const double C3384 =
        (ae * C5825 * C6036 + be * C5825 * C6031 +
         C5775 * C5825 * C5810 *
             (C5791 * C5792 + C5779 * bs[5] * std::pow(C5781, 5)) * C5655) /
        C5656;
    const double C2129 = (C5810 * C5787 + C6036 * C5896) / C5654;
    const double C1891 = (C5775 * C5817 + C5966 * C5896) / C5654;
    const double C1079 = (C5775 * C5832 + C5970 * C5855) / C5654;
    const double C3527 =
        (ae * C5825 * C5966 + be * C5825 * C5967 +
         C5810 * C5825 * C5775 *
             (C5791 * C5792 + C5855 * bs[5] * std::pow(C5781, 5)) * C5655) /
        C5656;
    const double C1954 = (C5775 * C5846 + C5967 * C5896) / C5654;
    const double C3668 =
        (ae * C5810 * C5970 + be * C5810 * C5975 +
         C5825 * C5810 * C5775 *
             (C5791 * C5792 + C5896 * bs[5] * std::pow(C5781, 5)) * C5655) /
        C5656;
    const double C1198 = (C5775 * C5878 + C5975 * C5855) / C5654;
    const double C130 =
        (2 * (ae * C5817 + C5775 * C5821) + ae * (C5817 + C5822 * C5779) +
         C5775 * (C5821 + ae * C5775 * C5822 +
                  C5775 * (ae * C5822 +
                           C5775 * std::pow(C5781, 5) * bs[5] * C5816))) /
        C5656;
    const double C481 = (be * (C5775 * C5788 + C5778 * ae) +
                         C5810 * (ae * C5817 + C5775 * C5821)) /
                        C5656;
    const double C765 = (C5825 * (ae * C5817 + C5775 * C5821)) / C5656;
    const double C766 =
        (C5825 *
         (C5821 + ae * C5775 * C5822 +
          C5775 * (ae * C5822 + C5775 * std::pow(C5781, 5) * bs[5] * C5816))) /
        C5656;
    const double C1050 = (C5784 * C5780 * C5816 + be * C5810 * C5788 +
                          C5810 * (be * C5788 + C5810 * C5821)) /
                         C5656;
    const double C1330 =
        (2 * (be * C5788 + C5810 * C5821) + be * (C5788 + C5801 * C5855) +
         C5810 * (C5821 + be * C5810 * C5801 +
                  C5810 * (be * C5801 +
                           C5810 * std::pow(C5781, 5) * bs[5] * C5816))) /
        C5656;
    const double C1623 = (C5825 * (be * C5788 + C5810 * C5821)) / C5656;
    const double C1624 =
        (C5825 *
         (C5821 + be * C5810 * C5801 +
          C5810 * (be * C5801 + C5810 * std::pow(C5781, 5) * bs[5] * C5816))) /
        C5656;
    const double C1892 = (C5784 * C5780 * C5816 + C5821 * C5896) / C5656;
    const double C1893 =
        (ae * C5817 + C5775 * C5821 +
         (ae * C5822 + C5775 * std::pow(C5781, 5) * bs[5] * C5816) * C5896) /
        C5656;
    const double C2159 =
        (be * C5788 + C5810 * C5821 +
         (be * C5801 + C5810 * std::pow(C5781, 5) * bs[5] * C5816) * C5896) /
        C5656;
    const double C2423 =
        (2 * C5825 * C5821 +
         C5825 * (C5821 + std::pow(C5781, 5) * bs[5] * C5816 * C5896)) /
        C5656;
    const double C215 =
        (2 * (be * C5846 + C5775 * C5850) + be * (C5846 + C5851 * C5779) +
         C5775 * (C5850 + be * C5775 * C5851 +
                  C5775 * (be * C5851 +
                           C5775 * std::pow(C5781, 5) * bs[5] * C5845))) /
        C5656;
    const double C545 = (ae * (C5775 * C5787 + C5778 * be) +
                         C5810 * (be * C5846 + C5775 * C5850)) /
                        C5656;
    const double C829 = (C5825 * (be * C5846 + C5775 * C5850)) / C5656;
    const double C830 =
        (C5825 *
         (C5850 + be * C5775 * C5851 +
          C5775 * (be * C5851 + C5775 * std::pow(C5781, 5) * bs[5] * C5845))) /
        C5656;
    const double C1110 = (C5784 * C5780 * C5845 + ae * C5810 * C5787 +
                          C5810 * (ae * C5787 + C5810 * C5850)) /
                         C5656;
    const double C1394 =
        (2 * (ae * C5787 + C5810 * C5850) + ae * (C5787 + C5800 * C5855) +
         C5810 * (C5850 + ae * C5810 * C5800 +
                  C5810 * (ae * C5800 +
                           C5810 * std::pow(C5781, 5) * bs[5] * C5845))) /
        C5656;
    const double C1683 = (ae * C5825 * C5787 + C5810 * C5825 * C5850) / C5656;
    const double C1684 =
        (C5825 * C5850 + ae * C5825 * C5810 * C5800 +
         C5810 * (ae * C5825 * C5800 +
                  C5810 * C5825 * std::pow(C5781, 5) * bs[5] * C5845)) /
        C5656;
    const double C1955 = (C5784 * C5780 * C5845 + C5850 * C5896) / C5656;
    const double C1956 =
        (be * C5846 + C5775 * C5850 +
         (be * C5851 + C5775 * std::pow(C5781, 5) * bs[5] * C5845) * C5896) /
        C5656;
    const double C2215 =
        (ae * (C5787 + C5800 * C5896) +
         C5810 * (C5850 + std::pow(C5781, 5) * bs[5] * C5845 * C5896)) /
        C5656;
    const double C2487 =
        (2 * C5825 * C5850 +
         C5825 * (C5850 + std::pow(C5781, 5) * bs[5] * C5845 * C5896)) /
        C5656;
    const double C173 =
        (2 * (ae * C5832 + C5775 * C5836) + ae * (C5832 + C5837 * C5779) +
         C5775 * (C5836 + ae * C5775 * C5837 +
                  C5775 * (ae * C5837 +
                           C5775 * std::pow(C5781, 5) * bs[5] * C5831))) /
        C5656;
    const double C513 = (C5810 * (ae * C5832 + C5775 * C5836)) / C5656;
    const double C514 =
        (C5810 *
         (C5836 + ae * C5775 * C5837 +
          C5775 * (ae * C5837 + C5775 * std::pow(C5781, 5) * bs[5] * C5831))) /
        C5656;
    const double C797 = (be * (C5775 * C5788 + C5778 * ae) +
                         C5825 * (ae * C5832 + C5775 * C5836)) /
                        C5656;
    const double C1080 = (C5784 * C5780 * C5831 + C5836 * C5855) / C5656;
    const double C1081 =
        (ae * C5832 + C5775 * C5836 +
         (ae * C5837 + C5775 * std::pow(C5781, 5) * bs[5] * C5831) * C5855) /
        C5656;
    const double C1358 =
        (2 * C5810 * C5836 +
         C5810 * (C5836 + std::pow(C5781, 5) * bs[5] * C5831 * C5855)) /
        C5656;
    const double C1653 = (be * C5810 * C5788 + C5825 * C5810 * C5836) / C5656;
    const double C1654 =
        (be * (C5788 + C5801 * C5855) +
         C5825 * (C5836 + std::pow(C5781, 5) * bs[5] * C5831 * C5855)) /
        C5656;
    const double C1925 = (C5784 * C5780 * C5831 + be * C5825 * C5788 +
                          C5825 * (be * C5788 + C5825 * C5836)) /
                         C5656;
    const double C2187 =
        (C5810 * C5836 + be * C5825 * C6031 +
         C5825 * (be * C6031 +
                  C5825 * C5810 * std::pow(C5781, 5) * bs[5] * C5831)) /
        C5656;
    const double C2459 =
        (2 * (be * C5788 + C5825 * C5836) + be * (C5788 + C5801 * C5896) +
         C5825 * (C5836 + be * C5825 * C5801 +
                  C5825 * (be * C5801 +
                           C5825 * std::pow(C5781, 5) * bs[5] * C5831))) /
        C5656;
    const double C290 =
        (2 * C5775 * C5869 +
         C5775 * (C5869 + std::pow(C5781, 5) * bs[5] * C5866 * C5779)) /
        C5656;
    const double C603 = (ae * C5775 * C5832 + C5810 * C5775 * C5869) / C5656;
    const double C604 =
        (ae * (C5832 + C5837 * C5779) +
         C5810 * (C5869 + std::pow(C5781, 5) * bs[5] * C5866 * C5779)) /
        C5656;
    const double C887 = (be * C5775 * C5846 + C5825 * C5775 * C5869) / C5656;
    const double C888 =
        (be * (C5846 + C5851 * C5779) +
         C5825 * (C5869 + std::pow(C5781, 5) * bs[5] * C5866 * C5779)) /
        C5656;
    const double C1169 = (C5784 * C5780 * C5866 + ae * C5810 * C5832 +
                          C5810 * (ae * C5832 + C5810 * C5869)) /
                         C5656;
    const double C1170 =
        (C5775 * C5869 + ae * C5810 * C5970 +
         C5810 * (ae * C5970 +
                  C5810 * C5775 * std::pow(C5781, 5) * bs[5] * C5866)) /
        C5656;
    const double C1456 =
        (2 * (ae * C5832 + C5810 * C5869) + ae * (C5832 + C5837 * C5855) +
         C5810 * (C5869 + ae * C5810 * C5837 +
                  C5810 * (ae * C5837 +
                           C5810 * std::pow(C5781, 5) * bs[5] * C5866))) /
        C5656;
    const double C1739 = (ae * (C5825 * C5832 + C5778 * be) +
                          C5810 * (be * C5846 + C5825 * C5869)) /
                         C5656;
    const double C2011 = (C5784 * C5780 * C5866 + be * C5825 * C5846 +
                          C5825 * (be * C5846 + C5825 * C5869)) /
                         C5656;
    const double C2012 =
        (C5775 * C5869 + be * C5825 * C5967 +
         C5825 * (be * C5967 +
                  C5825 * C5775 * std::pow(C5781, 5) * bs[5] * C5866)) /
        C5656;
    const double C2565 =
        (2 * (be * C5846 + C5825 * C5869) + be * (C5846 + C5851 * C5896) +
         C5825 * (C5869 + be * C5825 * C5851 +
                  C5825 * (be * C5851 +
                           C5825 * std::pow(C5781, 5) * bs[5] * C5866))) /
        C5656;
    const double C328 =
        (2 * (be * C5878 + C5775 * C5882) + be * (C5878 + C5883 * C5779) +
         C5775 * (C5882 + be * C5775 * C5883 +
                  C5775 * (be * C5883 +
                           C5775 * std::pow(C5781, 5) * bs[5] * C5877))) /
        C5656;
    const double C635 = (C5810 * (be * C5878 + C5775 * C5882)) / C5656;
    const double C636 =
        (C5810 *
         (C5882 + be * C5775 * C5883 +
          C5775 * (be * C5883 + C5775 * std::pow(C5781, 5) * bs[5] * C5877))) /
        C5656;
    const double C919 = (ae * (C5775 * C5787 + C5778 * be) +
                         C5825 * (be * C5878 + C5775 * C5882)) /
                        C5656;
    const double C1199 = (C5784 * C5780 * C5877 + C5882 * C5855) / C5656;
    const double C1200 =
        (be * C5878 + C5775 * C5882 +
         (be * C5883 + C5775 * std::pow(C5781, 5) * bs[5] * C5877) * C5855) /
        C5656;
    const double C1488 =
        (2 * C5810 * C5882 +
         C5810 * (C5882 + std::pow(C5781, 5) * bs[5] * C5877 * C5855)) /
        C5656;
    const double C1769 = (ae * C5810 * C5787 + C5825 * C5810 * C5882) / C5656;
    const double C1770 =
        (ae * (C5787 + C5800 * C5855) +
         C5825 * (C5882 + std::pow(C5781, 5) * bs[5] * C5877 * C5855)) /
        C5656;
    const double C2041 = (C5784 * C5780 * C5877 + ae * C5825 * C5787 +
                          C5825 * (ae * C5787 + C5825 * C5882)) /
                         C5656;
    const double C2297 =
        (C5810 * C5882 + ae * C5825 * C6036 +
         C5825 * (ae * C6036 +
                  C5825 * C5810 * std::pow(C5781, 5) * bs[5] * C5877)) /
        C5656;
    const double C2593 =
        (2 * (ae * C5787 + C5825 * C5882) + ae * (C5787 + C5800 * C5896) +
         C5825 * (C5882 + ae * C5825 * C5800 +
                  C5825 * (ae * C5800 +
                           C5825 * std::pow(C5781, 5) * bs[5] * C5877))) /
        C5656;
    const double C358 =
        (2 * C5775 * C5892 +
         C5775 * (C5892 + std::pow(C5781, 5) * bs[5] * C5889 * C5779)) /
        C5656;
    const double C664 = (be * C5775 * C5878 + C5810 * C5775 * C5892) / C5656;
    const double C665 =
        (be * (C5878 + C5883 * C5779) +
         C5810 * (C5892 + std::pow(C5781, 5) * bs[5] * C5889 * C5779)) /
        C5656;
    const double C948 = (ae * C5775 * C5817 + C5825 * C5775 * C5892) / C5656;
    const double C949 =
        (ae * (C5817 + C5822 * C5779) +
         C5825 * (C5892 + std::pow(C5781, 5) * bs[5] * C5889 * C5779)) /
        C5656;
    const double C1227 = (C5784 * C5780 * C5889 + be * C5810 * C5878 +
                          C5810 * (be * C5878 + C5810 * C5892)) /
                         C5656;
    const double C1228 =
        (C5775 * C5892 + be * C5810 * C5975 +
         C5810 * (be * C5975 +
                  C5810 * C5775 * std::pow(C5781, 5) * bs[5] * C5889)) /
        C5656;
    const double C1519 =
        (2 * (be * C5878 + C5810 * C5892) + be * (C5878 + C5883 * C5855) +
         C5810 * (C5892 + be * C5810 * C5883 +
                  C5810 * (be * C5883 +
                           C5810 * std::pow(C5781, 5) * bs[5] * C5889))) /
        C5656;
    const double C1797 = (ae * (C5810 * C5817 + C5778 * be) +
                          C5825 * (be * C5878 + C5810 * C5892)) /
                         C5656;
    const double C2069 = (C5784 * C5780 * C5889 + ae * C5825 * C5817 +
                          C5825 * (ae * C5817 + C5825 * C5892)) /
                         C5656;
    const double C2070 =
        (C5775 * C5892 + ae * C5825 * C5966 +
         C5825 * (ae * C5966 +
                  C5825 * C5775 * std::pow(C5781, 5) * bs[5] * C5889)) /
        C5656;
    const double C2624 =
        (2 * (ae * C5817 + C5825 * C5892) + ae * (C5817 + C5822 * C5896) +
         C5825 * (C5892 + ae * C5825 * C5822 +
                  C5825 * (ae * C5822 +
                           C5825 * std::pow(C5781, 5) * bs[5] * C5889))) /
        C5656;
    const double C72 = -(C6334 * C6225 * de) / C6226;
    const double C73 = C6323 * C6334;
    const double C436 = -(C6333 * C6231 * de) / C6226;
    const double C437 = C6323 * C6333;
    const double C721 = -(C6332 * C6238 * de) / C6226;
    const double C722 = C6323 * C6332;
    const double C5662 = 2 * C5659;
    const double C78 =
        ((0 * ae) / C5654 - C5659 / C5656) / (2 * C5654) + (0 * ae) / C5654;
    const double C2696 = (0 * ae) / C5654 - C5659 / C5656;
    const double C66 = (2 * C6317 * C6318) / C5654;
    const double C2690 = C6318 / C5654;
    const double C5708 = 2 * C5700;
    const double C1047 =
        ((0 * ae) / C5654 - C5700 / C5656) / (2 * C5654) + (0 * ae) / C5654;
    const double C2733 = (0 * ae) / C5654 - C5700 / C5656;
    const double C137 = C122 * C82;
    const double C135 = C122 * C87;
    const double C133 = C122 * C81;
    const double C250 = C122 * C209;
    const double C248 = C122 * C124;
    const double C361 = C122 * C322;
    const double C2430 = C122 * C1856;
    const double C2428 = C122 * C731;
    const double C2426 = C122 * C725;
    const double C2526 = C122 * C825;
    const double C2524 = C122 * C761;
    const double C2627 = C122 * C915;
    const double C3741 = C122 * C724;
    const double C253 = C242 * C82;
    const double C249 = C242 * C81;
    const double C2529 = C242 * C1856;
    const double C2525 = C242 * C725;
    const double C3857 = C242 * C724;
    const double C1007 = (2 * C6317 * C6324) / C5654;
    const double C2692 = C6324 / C5654;
    const double C1046 =
        (((C6249 - (C5684 * 2 * C5700) / C5654) * ae) / C5654 - C5698 / C5658) /
            (2 * C5654) +
        ((C5684 * ((0 * ae) / C5654 - C5700 / C5656) + C2693) * ae) / C5654;
    const double C5734 = 2 * C5726;
    const double C1922 =
        ((0 * ae) / C5654 - C5726 / C5656) / (2 * C5654) + (0 * ae) / C5654;
    const double C3778 = (0 * ae) / C5654 - C5726 / C5656;
    const double C180 = C165 * C82;
    const double C178 = C165 * C87;
    const double C176 = C165 * C81;
    const double C293 = C165 * C209;
    const double C397 = C165 * C322;
    const double C395 = C165 * C167;
    const double C1365 = C165 * C1011;
    const double C1363 = C165 * C447;
    const double C1361 = C165 * C441;
    const double C1459 = C165 * C541;
    const double C1550 = C165 * C631;
    const double C1548 = C165 * C509;
    const double C2778 = C165 * C440;
    const double C400 = C389 * C82;
    const double C396 = C389 * C81;
    const double C1553 = C389 * C1011;
    const double C1549 = C389 * C441;
    const double C3009 = C389 * C440;
    const double C1854 = (2 * C6317 * C6325) / C5654;
    const double C3703 = C6325 / C5654;
    const double C1921 =
        (((C6260 - (C5687 * 2 * C5726) / C5654) * ae) / C5654 - C5724 / C5658) /
            (2 * C5654) +
        ((C5687 * ((0 * ae) / C5654 - C5726 / C5656) + C3704) * ae) / C5654;
    const double C139 = C122 * C89;
    const double C182 = C165 * C89;
    const double C2780 = C165 * C445;
    const double C3743 = C122 * C729;
    const double C1367 = C165 * C1014;
    const double C2432 = C122 * C1859;
    const double C3168 = C2691 * C444;
    const double C4479 = C2691 * C728;
    const double C1400 = C6210 * C1013;
    const double C5120 = C6210 * C1591;
    const double C2493 = C6210 * C1858;
    const double C5807 = C5804 + C5798;
    const double C5987 = C5985 + C5798;
    const double C6054 = C6052 + C5798;
    const double C3562 =
        (ae * (C5825 * C5970 + C5796 * be) +
         C5810 * (be * C5967 +
                  C5825 * C5775 * std::pow(C5781, 5) * bs[5] * C5866)) /
        C5656;
    const double C3633 =
        (ae * (C5810 * C5966 + C5796 * be) +
         C5825 * (be * C5975 +
                  C5810 * C5775 * std::pow(C5781, 5) * bs[5] * C5889)) /
        C5656;
    const double C1049 = (C5775 * C5817 + C5810 * (C5810 * C5966 + C5796 * be) +
                          C5810 * C5796 * be) /
                         C5654;
    const double C1109 = (C5775 * C5846 + C5810 * (C5810 * C5967 + C5796 * ae) +
                          C5810 * C5796 * ae) /
                         C5654;
    const double C1924 = (C5775 * C5832 + C5825 * (C5825 * C5970 + C5796 * be) +
                          C5825 * C5796 * be) /
                         C5654;
    const double C2040 = (C5775 * C5878 + C5825 * (C5825 * C5975 + C5796 * ae) +
                          C5825 * C5796 * ae) /
                         C5654;
    const double C3419 = (C5825 * (C5810 * C5966 + C5796 * be)) / C5654;
    const double C3455 = (C5825 * C5810 * C5970 + C5810 * C5796 * be) / C5654;
    const double C3491 = (C5825 * (C5810 * C5967 + C5796 * ae)) / C5654;
    const double C3597 = (C5825 * C5810 * C5975 + C5810 * C5796 * ae) / C5654;
    const double C1012 = C5775 * C5778 + C5796 * C5855;
    const double C1857 = C5775 * C5778 + C5796 * C5896;
    const double C3381 = C5825 * C5810 * C5796;
    const double C5806 = C5803 + C5795;
    const double C5986 = C5983 + C5795;
    const double C6053 = C6050 + C5795;
    const double C2269 =
        (ae * (C5832 + C5825 * (C5825 * C5837 + C5795) + C5825 * C5790 * be) +
         C5810 * (C5869 + be * C5825 * C5851 +
                  C5825 * (be * C5851 +
                           C5825 * std::pow(C5781, 5) * bs[5] * C5866))) /
        C5656;
    const double C5805 = C5802 * C5655;
    const double C5860 = C5859 * C5655;
    const double C5901 = C5900 * C5655;
    const double C1740 =
        (be * C5846 + C5825 * C5869 +
         ae * (C5825 * C5810 * C5837 + C5984 * be) +
         C5810 * (ae * (C5825 * C5837 + C5795) +
                  C5810 * (be * C5851 +
                           C5825 * std::pow(C5781, 5) * bs[5] * C5866))) /
        C5656;
    const double C2186 = (C5810 * C5832 + C5825 * (C5825 * C6039 + C5984 * be) +
                          C5825 * C5984 * be) /
                         C5654;
    const double C2296 = (C5810 * C5878 + C5825 * (C5825 * C6040 + C5984 * ae) +
                          C5825 * C5984 * ae) /
                         C5654;
    const double C2128 = C5810 * C5778 + C5984 * C5896;
    const double C255 = C6249 * C245;
    const double C402 = C6260 * C392;
    const double C138 = C6249 * C129;
    const double C136 = C6249 * C125;
    const double C252 = C122 * C125;
    const double C2737 = C2693 * C478;
    const double C3740 = C6249 * C762;
    const double C3856 = C122 * C762;
    const double C5384 = C2693 * C1621;
    const double C2429 = C6249 * C1890;
    const double C2528 = C122 * C1890;
    const double C181 = C6260 * C172;
    const double C179 = C6260 * C168;
    const double C399 = C165 * C168;
    const double C2777 = C6260 * C510;
    const double C3008 = C165 * C510;
    const double C3782 = C3704 * C794;
    const double C1364 = C6260 * C1078;
    const double C1552 = C165 * C1078;
    const double C5080 = C3704 * C1651;
    const double C254 = C122 * C210;
    const double C295 = C165 * C210;
    const double C2900 = C165 * C542;
    const double C3858 = C122 * C826;
    const double C1461 = C165 * C1108;
    const double C2530 = C122 * C1953;
    const double C363 = C122 * C323;
    const double C401 = C165 * C323;
    const double C3010 = C165 * C632;
    const double C3970 = C122 * C916;
    const double C1554 = C165 * C1197;
    const double C2629 = C122 * C2039;
    const double C2741 = C2693 * C481;
    const double C3742 = C6249 * C765;
    const double C5388 = C2693 * C1623;
    const double C2431 = C6249 * C1892;
    const double C3172 = C2691 * C545;
    const double C4483 = C2691 * C829;
    const double C1402 = C6210 * C1110;
    const double C5122 = C6210 * C1683;
    const double C2495 = C6210 * C1955;
    const double C2779 = C6260 * C513;
    const double C3786 = C3704 * C797;
    const double C1366 = C6260 * C1080;
    const double C5084 = C3704 * C1653;
    const double C2899 = C6260 * C603;
    const double C3899 = C3704 * C887;
    const double C1460 = C6260 * C1169;
    const double C5194 = C3704 * C1739;
    const double C3278 = C2691 * C635;
    const double C4591 = C2691 * C919;
    const double C1492 = C6210 * C1199;
    const double C5230 = C6210 * C1769;
    const double C2597 = C6210 * C2041;
    const double C2971 = C2693 * C664;
    const double C3969 = C6249 * C948;
    const double C5610 = C2693 * C1797;
    const double C2628 = C6249 * C2069;
    const double C5664 = C5652 * C5662;
    const double C1009 = -C5662 / C5654;
    const double C3056 = C2696 * C445;
    const double C3054 = C2696 * C444;
    const double C3173 = C2696 * C542;
    const double C3169 = C2696 * C440;
    const double C3279 = C2696 * C632;
    const double C4367 = C2696 * C729;
    const double C4365 = C2696 * C728;
    const double C4484 = C2696 * C826;
    const double C4480 = C2696 * C724;
    const double C4592 = C2696 * C916;
    const double C3053 = C2690 * C450;
    const double C3170 = C2690 * C544;
    const double C3166 = C2690 * C446;
    const double C3276 = C2690 * C634;
    const double C4364 = C2690 * C734;
    const double C4481 = C2690 * C828;
    const double C4477 = C2690 * C730;
    const double C4589 = C2690 * C918;
    const double C74 =
        (((0 - (C5652 * C5653) / C5654) * ae) / C5654 - (0 * be) / C5658) /
            (2 * C5654) +
        ((C5652 * (((C6210 - (C5652 * 2 * C5659) / C5654) * ae) / C5654 -
                   C5653 / C5658) +
          C2690) *
         ae) /
            C5654 +
        (0 * ae) / C5654 - C5659 / C5656;
    const double C5709 = C5684 * C5708;
    const double C2742 = C2733 * C445;
    const double C2738 = C2733 * C440;
    const double C2857 = C2733 * C542;
    const double C2855 = C2733 * C478;
    const double C2972 = C2733 * C632;
    const double C5389 = C2733 * C1592;
    const double C5385 = C2733 * C1588;
    const double C5498 = C2733 * C1681;
    const double C5496 = C2733 * C1621;
    const double C5611 = C2733 * C1767;
    const double C256 = C248 - C249;
    const double C2532 = C2524 - C2525;
    const double C2739 = C2692 * C128;
    const double C2735 = C2692 * C124;
    const double C2854 = C2692 * C244;
    const double C2969 = C2692 * C356;
    const double C5386 = C2692 * C764;
    const double C5382 = C2692 * C761;
    const double C5495 = C2692 * C859;
    const double C5608 = C2692 * C947;
    const double C1045 =
        (((0 - (C5684 * C5698) / C5654) * ae) / C5654 - (0 * be) / C5658) /
            (2 * C5654) +
        ((C5684 * (((C6249 - (C5684 * 2 * C5700) / C5654) * ae) / C5654 -
                   C5698 / C5658) +
          C2692) *
         ae) /
            C5654 +
        (0 * ae) / C5654 - C5700 / C5656;
    const double C5735 = C5687 * C5734;
    const double C3787 = C3778 * C729;
    const double C3783 = C3778 * C724;
    const double C3900 = C3778 * C826;
    const double C4013 = C3778 * C916;
    const double C4011 = C3778 * C794;
    const double C5085 = C3778 * C1592;
    const double C5081 = C3778 * C1588;
    const double C5195 = C3778 * C1681;
    const double C5306 = C3778 * C1767;
    const double C5304 = C3778 * C1651;
    const double C403 = C395 - C396;
    const double C1556 = C1548 - C1549;
    const double C3784 = C3703 * C171;
    const double C3780 = C3703 * C167;
    const double C3897 = C3703 * C288;
    const double C4010 = C3703 * C391;
    const double C5082 = C3703 * C512;
    const double C5078 = C3703 * C509;
    const double C5192 = C3703 * C602;
    const double C5303 = C3703 * C694;
    const double C1920 =
        (((0 - (C5687 * C5724) / C5654) * ae) / C5654 - (0 * be) / C5658) /
            (2 * C5654) +
        ((C5687 * (((C6260 - (C5687 * 2 * C5726) / C5654) * ae) / C5654 -
                   C5724 / C5658) +
          C3703) *
         ae) /
            C5654 +
        (0 * ae) / C5654 - C5726 / C5656;
    const double C482 =
        (be * (C5788 + C5775 * C5807 + C5796 * ae) +
         C5810 * (C5821 + ae * C5775 * C5822 +
                  C5775 * (ae * C5822 +
                           C5775 * std::pow(C5781, 5) * bs[5] * C5816))) /
        C5656;
    const double C798 =
        (be * (C5788 + C5775 * C5807 + C5796 * ae) +
         C5825 * (C5836 + ae * C5775 * C5837 +
                  C5775 * (ae * C5837 +
                           C5775 * std::pow(C5781, 5) * bs[5] * C5831))) /
        C5656;
    const double C1051 =
        (ae * C5817 + C5775 * C5821 + be * C5810 * C5807 +
         C5810 *
             (be * C5807 + C5810 * (ae * C5822 + C5775 * std::pow(C5781, 5) *
                                                     bs[5] * C5816))) /
        C5656;
    const double C1926 =
        (ae * C5832 + C5775 * C5836 + be * C5825 * C5807 +
         C5825 *
             (be * C5807 + C5825 * (ae * C5837 + C5775 * std::pow(C5781, 5) *
                                                     bs[5] * C5831))) /
        C5656;
    const double C3420 =
        (C5825 *
         (be * C5807 +
          C5810 * (ae * C5822 + C5775 * std::pow(C5781, 5) * bs[5] * C5816))) /
        C5656;
    const double C3456 =
        (be * C5810 * C5807 +
         C5825 * C5810 *
             (ae * C5837 + C5775 * std::pow(C5781, 5) * bs[5] * C5831)) /
        C5656;
    const double C91 = (2 * (C5775 * C5788 + C5778 * ae) +
                        C5775 * (C5788 + C5775 * C5807 + C5796 * ae) +
                        (C5778 + C5790 * C5779) * ae) /
                       C5654;
    const double C443 = (C5810 * (C5788 + C5775 * C5807 + C5796 * ae)) / C5654;
    const double C727 = (C5825 * (C5788 + C5775 * C5807 + C5796 * ae)) / C5654;
    const double C1016 = (C5775 * C5788 + C5778 * ae + C5807 * C5855) / C5654;
    const double C1861 = (C5775 * C5788 + C5778 * ae + C5807 * C5896) / C5654;
    const double C3383 = (C5825 * C5810 * C5807) / C5654;
    const double C1393 = (2 * (C5810 * C5846 + C5778 * ae) +
                          C5810 * (C5846 + C5810 * C5987 + C5984 * ae) +
                          (C5778 + C5790 * C5855) * ae) /
                         C5654;
    const double C1682 = (C5825 * (C5846 + C5810 * C5987 + C5984 * ae)) / C5654;
    const double C2214 = (C5810 * C5846 + C5778 * ae + C5987 * C5896) / C5654;
    const double C2592 = (2 * (C5825 * C5878 + C5778 * ae) +
                          C5825 * (C5878 + C5825 * C6054 + C6051 * ae) +
                          (C5778 + C5790 * C5896) * ae) /
                         C5654;
    const double C546 =
        (ae * (C5787 + C5775 * C5806 + C5796 * be) +
         C5810 * (C5850 + be * C5775 * C5851 +
                  C5775 * (be * C5851 +
                           C5775 * std::pow(C5781, 5) * bs[5] * C5845))) /
        C5656;
    const double C920 =
        (ae * (C5787 + C5775 * C5806 + C5796 * be) +
         C5825 * (C5882 + be * C5775 * C5883 +
                  C5775 * (be * C5883 +
                           C5775 * std::pow(C5781, 5) * bs[5] * C5877))) /
        C5656;
    const double C1111 =
        (be * C5846 + C5775 * C5850 + ae * C5810 * C5806 +
         C5810 *
             (ae * C5806 + C5810 * (be * C5851 + C5775 * std::pow(C5781, 5) *
                                                     bs[5] * C5845))) /
        C5656;
    const double C2042 =
        (be * C5878 + C5775 * C5882 + ae * C5825 * C5806 +
         C5825 *
             (ae * C5806 + C5825 * (be * C5883 + C5775 * std::pow(C5781, 5) *
                                                     bs[5] * C5877))) /
        C5656;
    const double C3492 =
        (ae * C5825 * C5806 +
         C5810 * C5825 *
             (be * C5851 + C5775 * std::pow(C5781, 5) * bs[5] * C5845)) /
        C5656;
    const double C3598 =
        (ae * C5810 * C5806 +
         C5825 * C5810 *
             (be * C5883 + C5775 * std::pow(C5781, 5) * bs[5] * C5877)) /
        C5656;
    const double C90 = (2 * (C5775 * C5787 + C5778 * be) +
                        C5775 * (C5787 + C5775 * C5806 + C5796 * be) +
                        (C5778 + C5790 * C5779) * be) /
                       C5654;
    const double C442 = (C5810 * (C5787 + C5775 * C5806 + C5796 * be)) / C5654;
    const double C726 = (C5825 * (C5787 + C5775 * C5806 + C5796 * be)) / C5654;
    const double C1015 = (C5775 * C5787 + C5778 * be + C5806 * C5855) / C5654;
    const double C1860 = (C5775 * C5787 + C5778 * be + C5806 * C5896) / C5654;
    const double C3382 = (C5825 * C5810 * C5806) / C5654;
    const double C1798 =
        (ae * (C5817 + C5810 * C5986 + C5984 * be) +
         C5825 * (C5892 + be * C5810 * C5883 +
                  C5810 * (be * C5883 +
                           C5810 * std::pow(C5781, 5) * bs[5] * C5889))) /
        C5656;
    const double C2324 =
        (be * C5878 + C5810 * C5892 + ae * C5825 * C5986 +
         C5825 *
             (ae * C5986 + C5825 * (be * C5883 + C5810 * std::pow(C5781, 5) *
                                                     bs[5] * C5889))) /
        C5656;
    const double C1329 = (2 * (C5810 * C5817 + C5778 * be) +
                          C5810 * (C5817 + C5810 * C5986 + C5984 * be) +
                          (C5778 + C5790 * C5855) * be) /
                         C5654;
    const double C1622 = (C5825 * (C5817 + C5810 * C5986 + C5984 * be)) / C5654;
    const double C2158 = (C5810 * C5817 + C5778 * be + C5986 * C5896) / C5654;
    const double C2458 = (2 * (C5825 * C5832 + C5778 * be) +
                          C5825 * (C5832 + C5825 * C6053 + C6051 * be) +
                          (C5778 + C5790 * C5896) * be) /
                         C5654;
    const double C95 =
        (2 * (ae * C5787 + be * C5788 + C5775 * C5805) +
         ae * (C5787 + C5775 * C5806 + C5796 * be) +
         be * (C5788 + C5775 * C5807 + C5796 * ae) +
         C5775 * (C5805 + ae * C5806 + be * C5807 +
                  C5775 * (ae * C5800 + be * C5801 +
                           C5775 *
                               (C5791 * C5792 +
                                C5779 * bs[5] * std::pow(C5781, 5)) *
                               C5655))) /
        C5656;
    const double C448 =
        (C5810 * C5805 + ae * C5810 * C5806 + be * C5810 * C5807 +
         C5775 * (ae * C5810 * C5800 + be * C5810 * C5801 +
                  C5775 * C5810 *
                      (C5791 * C5792 + C5779 * bs[5] * std::pow(C5781, 5)) *
                      C5655)) /
        C5656;
    const double C449 =
        (ae * C5810 * C5787 + be * C5810 * C5788 + C5775 * C5810 * C5805) /
        C5656;
    const double C732 =
        (C5825 * C5805 + ae * C5825 * C5806 + be * C5825 * C5807 +
         C5775 * (ae * C5825 * C5800 + be * C5825 * C5801 +
                  C5775 * C5825 *
                      (C5791 * C5792 + C5779 * bs[5] * std::pow(C5781, 5)) *
                      C5655)) /
        C5656;
    const double C733 =
        (ae * C5825 * C5787 + be * C5825 * C5788 + C5775 * C5825 * C5805) /
        C5656;
    const double C1017 =
        ((C5778 + C5779 * C5780 * C5784) * C5655 + C5805 * C5855) / C5656;
    const double C1018 =
        (ae * (C5787 + C5800 * C5855) + be * (C5788 + C5801 * C5855) +
         C5775 * (C5805 + (C5791 * C5792 + C5779 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5855)) /
        C5656;
    const double C1286 =
        (2 * C5810 * C5805 +
         C5810 * (C5805 + (C5791 * C5792 + C5779 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5855)) /
        C5656;
    const double C1593 =
        (C5825 * (C5805 + (C5791 * C5792 + C5779 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5855)) /
        C5656;
    const double C1594 = (C5825 * C5810 * C5805) / C5656;
    const double C1862 =
        ((C5778 + C5779 * C5780 * C5784) * C5655 + C5805 * C5896) / C5656;
    const double C1863 =
        (ae * (C5787 + C5800 * C5896) + be * (C5788 + C5801 * C5896) +
         C5775 * (C5805 + (C5791 * C5792 + C5779 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5896)) /
        C5656;
    const double C2131 =
        (C5810 * C5805 +
         C5810 * (C5791 * C5792 + C5779 * bs[5] * std::pow(C5781, 5)) * C5655 *
             C5896) /
        C5656;
    const double C2381 =
        (2 * C5825 * C5805 +
         C5825 * (C5805 + (C5791 * C5792 + C5779 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5896)) /
        C5656;
    const double C246 =
        (2 * C5775 * C5860 +
         C5775 * (C5860 + (C5791 * C5792 + C5855 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5779)) /
        C5656;
    const double C573 =
        (ae * (C5817 + C5822 * C5779) + be * (C5846 + C5851 * C5779) +
         C5810 * (C5860 + (C5791 * C5792 + C5855 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5779)) /
        C5656;
    const double C574 =
        (ae * C5775 * C5817 + be * C5775 * C5846 + C5810 * C5775 * C5860) /
        C5656;
    const double C857 =
        (C5825 * (C5860 + (C5791 * C5792 + C5855 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5779)) /
        C5656;
    const double C858 = (C5825 * C5775 * C5860) / C5656;
    const double C1141 =
        ((C5778 + C5855 * C5780 * C5784) * C5655 +
         ae * (C5810 * C5817 + C5778 * be) + be * (C5810 * C5846 + C5778 * ae) +
         C5810 * (ae * C5817 + be * C5846 + C5810 * C5860)) /
        C5656;
    const double C1142 =
        (C5775 * C5860 + ae * (C5810 * C5966 + C5796 * be) +
         be * (C5810 * C5967 + C5796 * ae) +
         C5810 * (ae * C5966 + be * C5967 +
                  C5810 * C5775 *
                      (C5791 * C5792 + C5855 * bs[5] * std::pow(C5781, 5)) *
                      C5655)) /
        C5656;
    const double C1429 =
        (2 * (ae * C5817 + be * C5846 + C5810 * C5860) +
         ae * (C5817 + C5810 * C5986 + C5984 * be) +
         be * (C5846 + C5810 * C5987 + C5984 * ae) +
         C5810 * (C5860 + ae * C5986 + be * C5987 +
                  C5810 * (ae * C5822 + be * C5851 +
                           C5810 *
                               (C5791 * C5792 +
                                C5855 * bs[5] * std::pow(C5781, 5)) *
                               C5655))) /
        C5656;
    const double C1711 =
        (C5825 * C5860 + ae * C5825 * C5986 + be * C5825 * C5987 +
         C5810 * (ae * C5825 * C5822 + be * C5825 * C5851 +
                  C5810 * C5825 *
                      (C5791 * C5792 + C5855 * bs[5] * std::pow(C5781, 5)) *
                      C5655)) /
        C5656;
    const double C1712 =
        (ae * C5825 * C5817 + be * C5825 * C5846 + C5810 * C5825 * C5860) /
        C5656;
    const double C1983 =
        ((C5778 + C5855 * C5780 * C5784) * C5655 + C5860 * C5896) / C5656;
    const double C1984 =
        (C5775 * C5860 +
         C5775 * (C5791 * C5792 + C5855 * bs[5] * std::pow(C5781, 5)) * C5655 *
             C5896) /
        C5656;
    const double C2242 =
        (ae * (C5817 + C5822 * C5896) + be * (C5846 + C5851 * C5896) +
         C5810 * (C5860 + (C5791 * C5792 + C5855 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5896)) /
        C5656;
    const double C2522 =
        (2 * C5825 * C5860 +
         C5825 * (C5860 + (C5791 * C5792 + C5855 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5896)) /
        C5656;
    const double C393 =
        (2 * C5775 * C5901 +
         C5775 * (C5901 + (C5791 * C5792 + C5896 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5779)) /
        C5656;
    const double C692 =
        (C5810 * (C5901 + (C5791 * C5792 + C5896 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5779)) /
        C5656;
    const double C693 = (C5810 * C5775 * C5901) / C5656;
    const double C976 =
        (ae * (C5832 + C5837 * C5779) + be * (C5878 + C5883 * C5779) +
         C5825 * (C5901 + (C5791 * C5792 + C5896 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5779)) /
        C5656;
    const double C977 =
        (ae * C5775 * C5832 + be * C5775 * C5878 + C5825 * C5775 * C5901) /
        C5656;
    const double C1255 =
        ((C5778 + C5896 * C5780 * C5784) * C5655 + C5901 * C5855) / C5656;
    const double C1256 =
        (C5775 * C5901 +
         C5775 * (C5791 * C5792 + C5896 * bs[5] * std::pow(C5781, 5)) * C5655 *
             C5855) /
        C5656;
    const double C1546 =
        (2 * C5810 * C5901 +
         C5810 * (C5901 + (C5791 * C5792 + C5896 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5855)) /
        C5656;
    const double C1825 =
        (ae * (C5832 + C5837 * C5855) + be * (C5878 + C5883 * C5855) +
         C5825 * (C5901 + (C5791 * C5792 + C5896 * bs[5] * std::pow(C5781, 5)) *
                              C5655 * C5855)) /
        C5656;
    const double C1826 =
        (ae * C5810 * C5832 + be * C5810 * C5878 + C5825 * C5810 * C5901) /
        C5656;
    const double C2100 =
        ((C5778 + C5896 * C5780 * C5784) * C5655 +
         ae * (C5825 * C5832 + C5778 * be) + be * (C5825 * C5878 + C5778 * ae) +
         C5825 * (ae * C5832 + be * C5878 + C5825 * C5901)) /
        C5656;
    const double C2101 =
        (C5775 * C5901 + ae * (C5825 * C5970 + C5796 * be) +
         be * (C5825 * C5975 + C5796 * ae) +
         C5825 * (ae * C5970 + be * C5975 +
                  C5825 * C5775 *
                      (C5791 * C5792 + C5896 * bs[5] * std::pow(C5781, 5)) *
                      C5655)) /
        C5656;
    const double C2351 =
        (C5810 * C5901 + ae * (C5825 * C6039 + C5984 * be) +
         be * (C5825 * C6040 + C5984 * ae) +
         C5825 * (ae * C6039 + be * C6040 +
                  C5825 * C5810 *
                      (C5791 * C5792 + C5896 * bs[5] * std::pow(C5781, 5)) *
                      C5655)) /
        C5656;
    const double C2655 =
        (2 * (ae * C5832 + be * C5878 + C5825 * C5901) +
         ae * (C5832 + C5825 * C6053 + C6051 * be) +
         be * (C5878 + C5825 * C6054 + C6051 * ae) +
         C5825 * (C5901 + ae * C6053 + be * C6054 +
                  C5825 * (ae * C5837 + be * C5883 +
                           C5825 *
                               (C5791 * C5792 +
                                C5896 * bs[5] * std::pow(C5781, 5)) *
                               C5655))) /
        C5656;
    const double C257 = C252 - C253;
    const double C3860 = C3856 - C3857;
    const double C2533 = C2528 - C2529;
    const double C404 = C399 - C400;
    const double C3012 = C3008 - C3009;
    const double C1557 = C1552 - C1553;
    const double C5665 = C5664 / C5654;
    const double C1294 = C1009 * C1014;
    const double C1292 = C1009 * C1013;
    const double C1290 = C1009 * C447;
    const double C1288 = C1009 * C446;
    const double C1403 = C1009 * C1108;
    const double C1401 = C1009 * C1011;
    const double C1399 = C1009 * C541;
    const double C1397 = C1009 * C441;
    const double C1493 = C1009 * C1197;
    const double C1491 = C1009 * C631;
    const double C2389 = C1009 * C1859;
    const double C2387 = C1009 * C1858;
    const double C2385 = C1009 * C731;
    const double C2383 = C1009 * C730;
    const double C2496 = C1009 * C1953;
    const double C2494 = C1009 * C1856;
    const double C2492 = C1009 * C825;
    const double C2490 = C1009 * C725;
    const double C2598 = C1009 * C2039;
    const double C2596 = C1009 * C915;
    const double C5004 = C1009 * C1592;
    const double C5002 = C1009 * C1591;
    const double C5123 = C1009 * C1681;
    const double C5121 = C1009 * C1588;
    const double C5231 = C1009 * C1767;
    const double C5710 = C5709 / C5654;
    const double C258 = C256 - C250;
    const double C2534 = C2532 - C2526;
    const double C5736 = C5735 / C5654;
    const double C405 = C403 - C397;
    const double C1558 = C1556 - C1550;
    const double C3057 = C2691 * C449;
    const double C4368 = C2691 * C733;
    const double C1295 = C6210 * C1017;
    const double C5005 = C6210 * C1594;
    const double C2390 = C6210 * C1862;
    const double C2858 = C2693 * C574;
    const double C3859 = C6249 * C858;
    const double C5499 = C2693 * C1712;
    const double C2531 = C6249 * C1983;
    const double C3011 = C6260 * C693;
    const double C4014 = C3704 * C977;
    const double C1555 = C6260 * C1255;
    const double C5307 = C3704 * C1826;
    const double C259 = C257 - C254;
    const double C3861 = C3860 - C3858;
    const double C2535 = C2533 - C2530;
    const double C406 = C404 - C401;
    const double C3013 = C3012 - C3010;
    const double C1559 = C1557 - C1554;
    const double C5666 = C6210 - C5665;
    const double C5711 = C6249 - C5710;
    const double C260 = C258 + C251;
    const double C2536 = C2534 + C2527;
    const double C5737 = C6260 - C5736;
    const double C407 = C405 + C398;
    const double C1560 = C1558 + C1551;
    const double C261 = C259 + C255;
    const double C3862 = C3861 + C3859;
    const double C2537 = C2535 + C2531;
    const double C408 = C406 + C402;
    const double C3014 = C3013 + C3011;
    const double C1561 = C1559 + C1555;
    const double C5667 = C5666 * C5663;
    const double C76 =
        ((C5666 * ae) / C5654 - C5653 / C5658) / (2 * C5654) +
        ((C5652 * ((0 * ae) / C5654 - C5659 / C5656) + C2691) * ae) / C5654;
    const double C2694 = (C5666 * ae) / C5654 - C5653 / C5658;
    const double C5712 = C5711 * C5663;
    const double C2732 = (C5711 * ae) / C5654 - C5698 / C5658;
    const double C2538 = C2536 * C6210;
    const double C4519 = C2536 * C2690;
    const double C5738 = C5737 * C5663;
    const double C3777 = (C5737 * ae) / C5654 - C5724 / C5658;
    const double C409 = C407 * C6249;
    const double C3007 = C407 * C2692;
    const double C4520 = C3862 * C2691;
    const double C2539 = C2537 * C6210;
    const double C410 = C408 * C6249;
    const double C3015 = C3014 * C2693;
    const double C5672 = C5652 * C5667;
    const double C75 =
        (ae * -2 * C5653) / (C5656 * 2 * C5654) +
        (((C5652 * ((-4 * C5659) / C5654 - (C5652 * C5667) / C5654) * ae) /
              C5654 +
          2 * ((C5666 * ae) / C5654 - C5653 / C5658)) *
         ae) /
            C5654 -
        C5667 / C5658;
    const double C79 = (-C5667 / C5654) / (4 * C5656);
    const double C1010 = -C5667 / C5654;
    const double C2697 = (-C5667 / C5654) / (2 * C5654);
    const double C3052 = C2694 * C447;
    const double C3050 = C2694 * C446;
    const double C3171 = C2694 * C541;
    const double C3167 = C2694 * C441;
    const double C3277 = C2694 * C631;
    const double C4363 = C2694 * C731;
    const double C4361 = C2694 * C730;
    const double C4482 = C2694 * C825;
    const double C4478 = C2694 * C725;
    const double C4590 = C2694 * C915;
    const double C5715 = C5684 * C5712;
    const double C1138 =
        (ae * -2 * C5698) / (C5656 * 2 * C5654) +
        (((C5684 * ((-4 * C5700) / C5654 - (C5684 * C5712) / C5654) * ae) /
              C5654 +
          2 * ((C5711 * ae) / C5654 - C5698 / C5658)) *
         ae) /
            C5654 -
        C5712 / C5658;
    const double C1140 = (-C5712 / C5654) / (4 * C5656);
    const double C2849 = (-C5712 / C5654) / (2 * C5654);
    const double C2740 = C2732 * C87;
    const double C2736 = C2732 * C81;
    const double C2853 = C2732 * C209;
    const double C2851 = C2732 * C124;
    const double C2970 = C2732 * C322;
    const double C5387 = C2732 * C731;
    const double C5383 = C2732 * C725;
    const double C5494 = C2732 * C825;
    const double C5492 = C2732 * C761;
    const double C5609 = C2732 * C915;
    const double C5741 = C5687 * C5738;
    const double C2097 =
        (ae * -2 * C5724) / (C5656 * 2 * C5654) +
        (((C5687 * ((-4 * C5726) / C5654 - (C5687 * C5738) / C5654) * ae) /
              C5654 +
          2 * ((C5737 * ae) / C5654 - C5724 / C5658)) *
         ae) /
            C5654 -
        C5738 / C5658;
    const double C2099 = (-C5738 / C5654) / (4 * C5656);
    const double C4005 = (-C5738 / C5654) / (2 * C5654);
    const double C3785 = C3777 * C87;
    const double C3781 = C3777 * C81;
    const double C3898 = C3777 * C209;
    const double C4009 = C3777 * C322;
    const double C4007 = C3777 * C167;
    const double C5083 = C3777 * C447;
    const double C5079 = C3777 * C441;
    const double C5193 = C3777 * C541;
    const double C5302 = C3777 * C631;
    const double C5300 = C3777 * C509;
    const double C77 =
        (((-4 * C5659) / C5654 - C5672 / C5654) * ae) / C5658 +
        ((2 * ((0 * ae) / C5654 - C5659 / C5656) - C5672 / C5658) * ae) / C5654;
    const double C2695 = (((-4 * C5659) / C5654 - C5672 / C5654) * ae) / C5654;
    const double C1293 = C1010 * C1011;
    const double C1289 = C1010 * C441;
    const double C2388 = C1010 * C1856;
    const double C2384 = C1010 * C725;
    const double C5003 = C1010 * C1588;
    const double C3055 = C2697 * C440;
    const double C4366 = C2697 * C724;
    const double C1139 =
        (((-4 * C5700) / C5654 - C5715 / C5654) * ae) / C5658 +
        ((2 * ((0 * ae) / C5654 - C5700 / C5656) - C5715 / C5658) * ae) / C5654;
    const double C2848 = (((-4 * C5700) / C5654 - C5715 / C5654) * ae) / C5654;
    const double C2856 = C2849 * C440;
    const double C5497 = C2849 * C1588;
    const double C2098 =
        (((-4 * C5726) / C5654 - C5741 / C5654) * ae) / C5658 +
        ((2 * ((0 * ae) / C5654 - C5726 / C5656) - C5741 / C5658) * ae) / C5654;
    const double C4004 = (((-4 * C5726) / C5654 - C5741 / C5654) * ae) / C5654;
    const double C4012 = C4005 * C724;
    const double C5305 = C4005 * C1588;
    const double C3051 = C2695 * C441;
    const double C4362 = C2695 * C725;
    const double C1297 = C1292 - C1293;
    const double C1296 = C1288 - C1289;
    const double C2392 = C2387 - C2388;
    const double C2391 = C2383 - C2384;
    const double C5006 = C5002 - C5003;
    const double C3059 = C3054 - C3055;
    const double C4370 = C4365 - C4366;
    const double C2852 = C2848 * C81;
    const double C5493 = C2848 * C725;
    const double C2860 = C2855 - C2856;
    const double C5501 = C5496 - C5497;
    const double C4008 = C4004 * C81;
    const double C5301 = C4004 * C441;
    const double C4016 = C4011 - C4012;
    const double C5309 = C5304 - C5305;
    const double C3058 = C3050 - C3051;
    const double C4369 = C4361 - C4362;
    const double C1299 = C1297 - C1294;
    const double C1298 = C1296 - C1290;
    const double C2394 = C2392 - C2389;
    const double C2393 = C2391 - C2385;
    const double C5007 = C5006 - C5004;
    const double C3061 = C3059 - C3056;
    const double C4372 = C4370 - C4367;
    const double C2859 = C2851 - C2852;
    const double C5500 = C5492 - C5493;
    const double C2862 = C2860 - C2857;
    const double C5503 = C5501 - C5498;
    const double C4015 = C4007 - C4008;
    const double C5308 = C5300 - C5301;
    const double C4018 = C4016 - C4013;
    const double C5311 = C5309 - C5306;
    const double C3060 = C3058 - C3052;
    const double C4371 = C4369 - C4363;
    const double C1301 = C1299 + C1295;
    const double C1300 = C1298 + C1291;
    const double C2396 = C2394 + C2390;
    const double C2395 = C2393 + C2386;
    const double C5008 = C5007 + C5005;
    const double C3063 = C3061 + C3057;
    const double C4374 = C4372 + C4368;
    const double C2861 = C2859 - C2853;
    const double C5502 = C5500 - C5494;
    const double C2864 = C2862 + C2858;
    const double C5505 = C5503 + C5499;
    const double C4017 = C4015 - C4009;
    const double C5310 = C5308 - C5302;
    const double C4020 = C4018 + C4014;
    const double C5313 = C5311 + C5307;
    const double C3062 = C3060 + C3053;
    const double C4373 = C4371 + C4364;
    const double C1303 = C1301 * C6260;
    const double C1302 = C1300 * C6260;
    const double C5001 = C1300 * C3703;
    const double C5009 = C5008 * C3704;
    const double C2863 = C2861 + C2854;
    const double C5504 = C5502 + C5495;
    const double C4019 = C4017 + C4010;
    const double C5312 = C5310 + C5303;
    d2eexx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2694 * C84 - C2695 * C80 - C2694 * C85 + C2690 * C92 +
            C2696 * C86 - C2697 * C81 - C2696 * C87 + C2691 * C93) *
               C6260 * C2692 +
           (C2694 * C446 - C2695 * C441 - C2694 * C447 + C2690 * C450 +
            C2696 * C444 - C2697 * C440 - C2696 * C445 + C2691 * C449) *
               C6260 * C2693) *
              C6332 * C6333 * C72 -
          ((C2696 * C442 - C2697 * C439 - C2696 * C443 + C2691 * C448 +
            C2694 * C444 - C2695 * C440 - C2694 * C445 + C2690 * C449) *
               C6260 * C2693 +
           (C2696 * C88 - C2697 * C82 - C2696 * C89 + C2691 * C94 +
            C2694 * C86 - C2695 * C81 - C2694 * C87 + C2690 * C93) *
               C6260 * C2692) *
              C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2692 * C123 - C2732 * C80 + C2693 * C477 - C2733 * C441) * C2694 +
           (C2692 * C127 - C2732 * C85 + C2693 * C480 - C2733 * C447) * C2690 +
           (C2735 - C2736 + C2737 - C2738) * C2696 +
           (C2739 - C2740 + C2741 - C2742) * C2691) *
              C6260 * C6332 * C6333 * C72 +
          ((C2736 - C2735 + C2738 - C2737) * C2694 +
           (C2740 - C2739 + C2742 - C2741) * C2690 +
           (C2732 * C82 - C2692 * C125 + C2733 * C439 - C2693 * C479) * C2696 +
           (C2732 * C89 - C2692 * C129 + C2733 * C443 - C2693 * C482) * C2691) *
              C6260 * C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6260 * C166 - C165 * C80) * C2694 +
                     (C6260 * C170 - C165 * C85) * C2690 +
                     (C175 - C176) * C2696 + (C177 - C178) * C2691) *
                        C2692 +
                    ((C1360 - C1361) * C2694 + (C1362 - C1363) * C2690 +
                     (C2777 - C2778) * C2696 + (C2779 - C2780) * C2691) *
                        C2693) *
                       C6332 * C6333 * C72 +
                   (((C176 - C175) * C2694 + (C178 - C177) * C2690 +
                     (C180 - C179) * C2696 + (C182 - C181) * C2691) *
                        C2692 +
                    ((C2778 - C2777) * C2694 + (C2780 - C2779) * C2690 +
                     (C165 * C439 - C6260 * C511) * C2696 +
                     (C165 * C443 - C6260 * C514) * C2691) *
                        C2693) *
                       C6332 * C6333 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2690 * C84 - C2694 * C80 + C2691 * C86 - C2696 * C81) * C2732 +
           (C2690 * C212 - C2694 * C208 + C2691 * C213 - C2696 * C209) * C2692 +
           (C2690 * C446 - C2694 * C441 + C2691 * C444 - C2696 * C440) * C2733 +
           (C2690 * C544 - C2694 * C541 + C2691 * C545 - C2696 * C542) *
               C2693) *
              C6260 * C6332 * C6333 * C72 +
          ((C2694 * C81 - C2690 * C86 + C2696 * C82 - C2691 * C88) * C2732 +
           (C2694 * C209 - C2690 * C213 + C2696 * C210 - C2691 * C214) * C2692 +
           (C2694 * C440 - C2690 * C444 + C2696 * C439 - C2691 * C442) * C2733 +
           (C2694 * C542 - C2690 * C545 + C2696 * C543 - C2691 * C546) *
               C2693) *
              C6260 * C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2732 * C123 - C2848 * C80 - C2732 * C208 + C2692 * C243 +
            C2733 * C477 - C2849 * C441 - C2733 * C541 + C2693 * C575) *
               C2690 +
           (C2863 + C2864) * C2691) *
              C6260 * C6332 * C6333 * C72 -
          ((C2733 * C479 - C2849 * C439 - C2733 * C543 + C2693 * C573 +
            C2732 * C125 - C2848 * C82 - C2732 * C210 + C2692 * C245) *
               C2691 +
           (C2864 + C2863) * C2690) *
              C6260 * C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6260 * C166 - C165 * C80) * C2732 +
                     (C6260 * C287 - C165 * C208) * C2692 +
                     (C1360 - C1361) * C2733 + (C1458 - C1459) * C2693) *
                        C2690 +
                    ((C175 - C176) * C2732 + (C292 - C293) * C2692 +
                     (C2777 - C2778) * C2733 + (C2899 - C2900) * C2693) *
                        C2691) *
                       C6332 * C6333 * C72 +
                   (((C176 - C175) * C2732 + (C293 - C292) * C2692 +
                     (C2778 - C2777) * C2733 + (C2900 - C2899) * C2693) *
                        C2690 +
                    ((C180 - C179) * C2732 + (C295 - C294) * C2692 +
                     (C165 * C439 - C6260 * C511) * C2733 +
                     (C165 * C543 - C6260 * C604) * C2693) *
                        C2691) *
                       C6332 * C6333 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2690 * C84 - C2694 * C80 + C2691 * C86 - C2696 * C81) * C165 +
            (C2690 * C325 - C2694 * C321 + C2691 * C326 - C2696 * C322) *
                C6260) *
               C2692 +
           ((C2690 * C446 - C2694 * C441 + C2691 * C444 - C2696 * C440) * C165 +
            (C2690 * C634 - C2694 * C631 + C2691 * C635 - C2696 * C632) *
                C6260) *
               C2693) *
              C6332 * C6333 * C72 +
          (((C2694 * C81 - C2690 * C86 + C2696 * C82 - C2691 * C88) * C165 +
            (C2694 * C322 - C2690 * C326 + C2696 * C323 - C2691 * C327) *
                C6260) *
               C2692 +
           ((C2694 * C440 - C2690 * C444 + C2696 * C439 - C2691 * C442) * C165 +
            (C2694 * C632 - C2690 * C635 + C2696 * C633 - C2691 * C636) *
                C6260) *
               C2693) *
              C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2692 * C123 - C2732 * C80 + C2693 * C477 - C2733 * C441) * C165 +
            (C2692 * C355 - C2732 * C321 + C2693 * C663 - C2733 * C631) *
                C6260) *
               C2690 +
           ((C2735 - C2736 + C2737 - C2738) * C165 +
            (C2969 - C2970 + C2971 - C2972) * C6260) *
               C2691) *
              C6332 * C6333 * C72 +
          (((C2736 - C2735 + C2738 - C2737) * C165 +
            (C2970 - C2969 + C2972 - C2971) * C6260) *
               C2690 +
           ((C2732 * C82 - C2692 * C125 + C2733 * C439 - C2693 * C479) * C165 +
            (C2732 * C323 - C2692 * C357 + C2733 * C633 - C2693 * C665) *
                C6260) *
               C2691) *
              C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C2692 +
            C1560 * C2693) *
               C2690 +
           (C3007 + C3015) * C2691) *
              C6332 * C6333 * C72 -
          (((C165 * C511 - C389 * C439 - C165 * C633 + C6260 * C692) * C2693 +
            C408 * C2692) *
               C2691 +
           (C3015 + C3007) * C2690) *
              C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2694 * C84 - C2695 * C80 - C2694 * C85 + C2690 * C92 +
            C2696 * C86 - C2697 * C81 - C2696 * C87 + C2691 * C93) *
               C6260 * C2692 +
           (C3062 + C3063) * C6260 * C2693) *
              C6332 * C436 -
          ((C2696 * C1015 - C2697 * C1012 - C2696 * C1016 + C2691 * C1018 +
            C2694 * C1013 - C2695 * C1011 - C2694 * C1014 + C2690 * C1017) *
               C6260 * C2693 +
           (C3063 + C3062) * C6260 * C2692) *
              C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2692 * C123 - C2732 * C80 + C2693 * C477 - C2733 * C441) * C2694 +
           (C2692 * C127 - C2732 * C85 + C2693 * C480 - C2733 * C447) * C2690 +
           (C2735 - C2736 + C2737 - C2738) * C2696 +
           (C2739 - C2740 + C2741 - C2742) * C2691) *
              C6260 * C6332 * C436 +
          ((C2732 * C441 - C2692 * C477 + C2733 * C1011 - C2693 * C1048) *
               C2694 +
           (C2732 * C447 - C2692 * C480 + C2733 * C1014 - C2693 * C1050) *
               C2690 +
           (C2732 * C440 - C2692 * C478 + C2733 * C1012 - C2693 * C1049) *
               C2696 +
           (C2732 * C445 - C2692 * C481 + C2733 * C1016 - C2693 * C1051) *
               C2691) *
              C6260 * C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6260 * C166 - C165 * C80) * C2694 +
                     (C6260 * C170 - C165 * C85) * C2690 +
                     (C175 - C176) * C2696 + (C177 - C178) * C2691) *
                        C2692 +
                    ((C1360 - C1361) * C2694 + (C1362 - C1363) * C2690 +
                     (C2777 - C2778) * C2696 + (C2779 - C2780) * C2691) *
                        C2693) *
                       C6332 * C436 +
                   (((C1361 - C1360) * C2694 + (C1363 - C1362) * C2690 +
                     (C2778 - C2777) * C2696 + (C2780 - C2779) * C2691) *
                        C2692 +
                    ((C1365 - C1364) * C2694 + (C1367 - C1366) * C2690 +
                     (C165 * C1012 - C6260 * C1079) * C2696 +
                     (C165 * C1016 - C6260 * C1081) * C2691) *
                        C2693) *
                       C6332 * C437) *
                  C6334) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2690 * C84 - C2694 * C80 + C2691 * C86 - C2696 * C81) * C2732 +
           (C2690 * C212 - C2694 * C208 + C2691 * C213 - C2696 * C209) * C2692 +
           (C3166 - C3167 + C3168 - C3169) * C2733 +
           (C3170 - C3171 + C3172 - C3173) * C2693) *
              C6260 * C6332 * C436 +
          ((C3167 - C3166 + C3169 - C3168) * C2732 +
           (C3171 - C3170 + C3173 - C3172) * C2692 +
           (C2694 * C1011 - C2690 * C1013 + C2696 * C1012 - C2691 * C1015) *
               C2733 +
           (C2694 * C1108 - C2690 * C1110 + C2696 * C1109 - C2691 * C1111) *
               C2693) *
              C6260 * C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2732 * C123 - C2848 * C80 - C2732 * C208 + C2692 * C243 +
            C2733 * C477 - C2849 * C441 - C2733 * C541 + C2693 * C575) *
               C2690 +
           (C2863 + C2864) * C2691) *
              C6260 * C6332 * C436 -
          ((C2733 * C1049 - C2849 * C1012 - C2733 * C1109 + C2693 * C1142 +
            C2732 * C478 - C2848 * C440 - C2732 * C542 + C2692 * C574) *
               C2691 +
           (C2733 * C1048 - C2849 * C1011 - C2733 * C1108 + C2693 * C1141 +
            C2732 * C477 - C2848 * C441 - C2732 * C541 + C2692 * C575) *
               C2690) *
              C6260 * C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6260 * C166 - C165 * C80) * C2732 +
                     (C6260 * C287 - C165 * C208) * C2692 +
                     (C1360 - C1361) * C2733 + (C1458 - C1459) * C2693) *
                        C2690 +
                    ((C175 - C176) * C2732 + (C292 - C293) * C2692 +
                     (C2777 - C2778) * C2733 + (C2899 - C2900) * C2693) *
                        C2691) *
                       C6332 * C436 +
                   (((C1361 - C1360) * C2732 + (C1459 - C1458) * C2692 +
                     (C1365 - C1364) * C2733 + (C1461 - C1460) * C2693) *
                        C2690 +
                    ((C2778 - C2777) * C2732 + (C2900 - C2899) * C2692 +
                     (C165 * C1012 - C6260 * C1079) * C2733 +
                     (C165 * C1109 - C6260 * C1170) * C2693) *
                        C2691) *
                       C6332 * C437) *
                  C6334) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2690 * C84 - C2694 * C80 + C2691 * C86 - C2696 * C81) * C165 +
            (C2690 * C325 - C2694 * C321 + C2691 * C326 - C2696 * C322) *
                C6260) *
               C2692 +
           ((C3166 - C3167 + C3168 - C3169) * C165 +
            (C3276 - C3277 + C3278 - C3279) * C6260) *
               C2693) *
              C6332 * C436 +
          (((C3167 - C3166 + C3169 - C3168) * C165 +
            (C3277 - C3276 + C3279 - C3278) * C6260) *
               C2692 +
           ((C2694 * C1011 - C2690 * C1013 + C2696 * C1012 - C2691 * C1015) *
                C165 +
            (C2694 * C1197 - C2690 * C1199 + C2696 * C1198 - C2691 * C1200) *
                C6260) *
               C2693) *
              C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2692 * C123 - C2732 * C80 + C2693 * C477 - C2733 * C441) * C165 +
            (C2692 * C355 - C2732 * C321 + C2693 * C663 - C2733 * C631) *
                C6260) *
               C2690 +
           ((C2735 - C2736 + C2737 - C2738) * C165 +
            (C2969 - C2970 + C2971 - C2972) * C6260) *
               C2691) *
              C6332 * C436 +
          (((C2732 * C441 - C2692 * C477 + C2733 * C1011 - C2693 * C1048) *
                C165 +
            (C2732 * C631 - C2692 * C663 + C2733 * C1197 - C2693 * C1227) *
                C6260) *
               C2690 +
           ((C2732 * C440 - C2692 * C478 + C2733 * C1012 - C2693 * C1049) *
                C165 +
            (C2732 * C632 - C2692 * C664 + C2733 * C1198 - C2693 * C1228) *
                C6260) *
               C2691) *
              C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C2692 +
            C1560 * C2693) *
               C2690 +
           (C3007 + C3015) * C2691) *
              C6332 * C436 -
          (((C165 * C1079 - C389 * C1012 - C165 * C1198 + C6260 * C1256) *
                C2693 +
            C3014 * C2692) *
               C2691 +
           (C1561 * C2693 + C1560 * C2692) * C2690) *
              C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2694 * C84 - C2695 * C80 - C2694 * C85 + C2690 * C92 +
            C2696 * C86 - C2697 * C81 - C2696 * C87 + C2691 * C93) *
               C6260 * C2692 +
           (C3062 + C3063) * C6260 * C2693) *
              C721 -
          ((C2696 * C3382 - C2697 * C3381 - C2696 * C3383 + C2691 * C3384 +
            C2694 * C1591 - C2695 * C1588 - C2694 * C1592 + C2690 * C1594) *
               C6260 * C2693 +
           (C2696 * C728 - C2697 * C724 - C2696 * C729 + C2691 * C733 +
            C2694 * C730 - C2695 * C725 - C2694 * C731 + C2690 * C734) *
               C6260 * C2692) *
              C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2692 * C123 - C2732 * C80 + C2693 * C477 - C2733 * C441) * C2694 +
           (C2692 * C127 - C2732 * C85 + C2693 * C480 - C2733 * C447) * C2690 +
           (C2735 - C2736 + C2737 - C2738) * C2696 +
           (C2739 - C2740 + C2741 - C2742) * C2691) *
              C6260 * C721 +
          ((C2732 * C725 - C2692 * C761 + C2733 * C1588 - C2693 * C1621) *
               C2694 +
           (C2732 * C731 - C2692 * C764 + C2733 * C1592 - C2693 * C1623) *
               C2690 +
           (C2732 * C724 - C2692 * C762 + C2733 * C3381 - C2693 * C3419) *
               C2696 +
           (C2732 * C729 - C2692 * C765 + C2733 * C3383 - C2693 * C3420) *
               C2691) *
              C6260 * C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6260 * C166 - C165 * C80) * C2694 +
                     (C6260 * C170 - C165 * C85) * C2690 +
                     (C175 - C176) * C2696 + (C177 - C178) * C2691) *
                        C2692 +
                    ((C1360 - C1361) * C2694 + (C1362 - C1363) * C2690 +
                     (C2777 - C2778) * C2696 + (C2779 - C2780) * C2691) *
                        C2693) *
                       C721 +
                   (((C165 * C725 - C6260 * C793) * C2694 +
                     (C165 * C731 - C6260 * C796) * C2690 +
                     (C165 * C724 - C6260 * C794) * C2696 +
                     (C165 * C729 - C6260 * C797) * C2691) *
                        C2692 +
                    ((C165 * C1588 - C6260 * C1651) * C2694 +
                     (C165 * C1592 - C6260 * C1653) * C2690 +
                     (C165 * C3381 - C6260 * C3455) * C2696 +
                     (C165 * C3383 - C6260 * C3456) * C2691) *
                        C2693) *
                       C722) *
                  C6333 * C6334) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2690 * C84 - C2694 * C80 + C2691 * C86 - C2696 * C81) * C2732 +
           (C2690 * C212 - C2694 * C208 + C2691 * C213 - C2696 * C209) * C2692 +
           (C3166 - C3167 + C3168 - C3169) * C2733 +
           (C3170 - C3171 + C3172 - C3173) * C2693) *
              C6260 * C721 +
          ((C2694 * C725 - C2690 * C730 + C2696 * C724 - C2691 * C728) * C2732 +
           (C2694 * C825 - C2690 * C828 + C2696 * C826 - C2691 * C829) * C2692 +
           (C2694 * C1588 - C2690 * C1591 + C2696 * C3381 - C2691 * C3382) *
               C2733 +
           (C2694 * C1681 - C2690 * C1683 + C2696 * C3491 - C2691 * C3492) *
               C2693) *
              C6260 * C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2732 * C123 - C2848 * C80 - C2732 * C208 + C2692 * C243 +
            C2733 * C477 - C2849 * C441 - C2733 * C541 + C2693 * C575) *
               C2690 +
           (C2863 + C2864) * C2691) *
              C6260 * C721 -
          ((C2733 * C3419 - C2849 * C3381 - C2733 * C3491 + C2693 * C3527 +
            C2732 * C762 - C2848 * C724 - C2732 * C826 + C2692 * C858) *
               C2691 +
           (C2733 * C1621 - C2849 * C1588 - C2733 * C1681 + C2693 * C1712 +
            C2732 * C761 - C2848 * C725 - C2732 * C825 + C2692 * C859) *
               C2690) *
              C6260 * C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6260 * C166 - C165 * C80) * C2732 +
                     (C6260 * C287 - C165 * C208) * C2692 +
                     (C1360 - C1361) * C2733 + (C1458 - C1459) * C2693) *
                        C2690 +
                    ((C175 - C176) * C2732 + (C292 - C293) * C2692 +
                     (C2777 - C2778) * C2733 + (C2899 - C2900) * C2693) *
                        C2691) *
                       C721 +
                   (((C165 * C725 - C6260 * C793) * C2732 +
                     (C165 * C825 - C6260 * C886) * C2692 +
                     (C165 * C1588 - C6260 * C1651) * C2733 +
                     (C165 * C1681 - C6260 * C1739) * C2693) *
                        C2690 +
                    ((C165 * C724 - C6260 * C794) * C2732 +
                     (C165 * C826 - C6260 * C887) * C2692 +
                     (C165 * C3381 - C6260 * C3455) * C2733 +
                     (C165 * C3491 - C6260 * C3562) * C2693) *
                        C2691) *
                       C722) *
                  C6333 * C6334) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2690 * C84 - C2694 * C80 + C2691 * C86 - C2696 * C81) * C165 +
            (C2690 * C325 - C2694 * C321 + C2691 * C326 - C2696 * C322) *
                C6260) *
               C2692 +
           ((C3166 - C3167 + C3168 - C3169) * C165 +
            (C3276 - C3277 + C3278 - C3279) * C6260) *
               C2693) *
              C721 +
          (((C2694 * C725 - C2690 * C730 + C2696 * C724 - C2691 * C728) * C165 +
            (C2694 * C915 - C2690 * C918 + C2696 * C916 - C2691 * C919) *
                C6260) *
               C2692 +
           ((C2694 * C1588 - C2690 * C1591 + C2696 * C3381 - C2691 * C3382) *
                C165 +
            (C2694 * C1767 - C2690 * C1769 + C2696 * C3597 - C2691 * C3598) *
                C6260) *
               C2693) *
              C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2692 * C123 - C2732 * C80 + C2693 * C477 - C2733 * C441) * C165 +
            (C2692 * C355 - C2732 * C321 + C2693 * C663 - C2733 * C631) *
                C6260) *
               C2690 +
           ((C2735 - C2736 + C2737 - C2738) * C165 +
            (C2969 - C2970 + C2971 - C2972) * C6260) *
               C2691) *
              C721 +
          (((C2732 * C725 - C2692 * C761 + C2733 * C1588 - C2693 * C1621) *
                C165 +
            (C2732 * C915 - C2692 * C947 + C2733 * C1767 - C2693 * C1797) *
                C6260) *
               C2690 +
           ((C2732 * C724 - C2692 * C762 + C2733 * C3381 - C2693 * C3419) *
                C165 +
            (C2732 * C916 - C2692 * C948 + C2733 * C3597 - C2693 * C3633) *
                C6260) *
               C2691) *
              C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C2692 +
            C1560 * C2693) *
               C2690 +
           (C3007 + C3015) * C2691) *
              C721 -
          (((C165 * C3455 - C389 * C3381 - C165 * C3597 + C6260 * C3668) *
                C2693 +
            (C165 * C794 - C389 * C724 - C165 * C916 + C6260 * C977) * C2692) *
               C2691 +
           ((C165 * C1651 - C389 * C1588 - C165 * C1767 + C6260 * C1826) *
                C2693 +
            (C165 * C793 - C389 * C725 - C165 * C915 + C6260 * C978) * C2692) *
               C2690) *
              C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1009 * C84 - C1010 * C80 - C1009 * C85 + C6210 * C92) * C3703 +
            C2395 * C3704) *
               C2692 +
           (C1300 * C3703 +
            (C1009 * C1591 - C1010 * C1588 - C1009 * C1592 + C6210 * C1594) *
                C3704) *
               C2693) *
              C6332 * C6333 * C72 -
          (((C1009 * C3382 - C1010 * C3381 - C1009 * C3383 + C6210 * C3384) *
                C3704 +
            (C1009 * C444 - C1010 * C440 - C1009 * C445 + C6210 * C449) *
                C3703) *
               C2693 +
           ((C1009 * C728 - C1010 * C724 - C1009 * C729 + C6210 * C733) *
                C3704 +
            (C1009 * C86 - C1010 * C81 - C1009 * C87 + C6210 * C93) * C3703) *
               C2692) *
              C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2692 * C123 - C2732 * C80 + C2693 * C477 - C2733 * C441) * C1009 +
            (C2692 * C127 - C2732 * C85 + C2693 * C480 - C2733 * C447) *
                C6210) *
               C3703 +
           ((C2692 * C761 - C2732 * C725 + C2693 * C1621 - C2733 * C1588) *
                C1009 +
            (C2692 * C764 - C2732 * C731 + C2693 * C1623 - C2733 * C1592) *
                C6210) *
               C3704) *
              C6332 * C6333 * C72 +
          (((C2736 - C2735 + C2738 - C2737) * C1009 +
            (C2740 - C2739 + C2742 - C2741) * C6210) *
               C3703 +
           ((C2732 * C724 - C2692 * C762 + C2733 * C3381 - C2693 * C3419) *
                C1009 +
            (C2732 * C729 - C2692 * C765 + C2733 * C3383 - C2693 * C3420) *
                C6210) *
               C3704) *
              C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3703 * C166 - C3777 * C80 + C3704 * C793 - C3778 * C725) * C1009 +
            (C3703 * C170 - C3777 * C85 + C3704 * C796 - C3778 * C731) *
                C6210) *
               C2692 +
           ((C3703 * C509 - C3777 * C441 + C3704 * C1651 - C3778 * C1588) *
                C1009 +
            (C3703 * C512 - C3777 * C447 + C3704 * C1653 - C3778 * C1592) *
                C6210) *
               C2693) *
              C6332 * C6333 * C72 +
          (((C3781 - C3780 + C3783 - C3782) * C1009 +
            (C3785 - C3784 + C3787 - C3786) * C6210) *
               C2692 +
           ((C3777 * C440 - C3703 * C510 + C3778 * C3381 - C3704 * C3455) *
                C1009 +
            (C3777 * C445 - C3703 * C513 + C3778 * C3383 - C3704 * C3456) *
                C6210) *
               C2693) *
              C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6210 * C84 - C1009 * C80) * C2732 +
                     (C6210 * C212 - C1009 * C208) * C2692 +
                     (C1396 - C1397) * C2733 + (C1398 - C1399) * C2693) *
                        C3703 +
                    ((C2489 - C2490) * C2732 + (C2491 - C2492) * C2692 +
                     (C6210 * C1591 - C1009 * C1588) * C2733 +
                     (C6210 * C1683 - C1009 * C1681) * C2693) *
                        C3704) *
                       C6332 * C6333 * C72 +
                   (((C1009 * C81 - C6210 * C86) * C2732 +
                     (C1009 * C209 - C6210 * C213) * C2692 +
                     (C1009 * C440 - C6210 * C444) * C2733 +
                     (C1009 * C542 - C6210 * C545) * C2693) *
                        C3703 +
                    ((C1009 * C724 - C6210 * C728) * C2732 +
                     (C1009 * C826 - C6210 * C829) * C2692 +
                     (C1009 * C3381 - C6210 * C3382) * C2733 +
                     (C1009 * C3491 - C6210 * C3492) * C2693) *
                        C3704) *
                       C6332 * C6333 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2732 * C123 - C2848 * C80 - C2732 * C208 + C2692 * C243 +
            C2733 * C477 - C2849 * C441 - C2733 * C541 + C2693 * C575) *
               C6210 * C3703 +
           (C2732 * C761 - C2848 * C725 - C2732 * C825 + C2692 * C859 +
            C2733 * C1621 - C2849 * C1588 - C2733 * C1681 + C2693 * C1712) *
               C6210 * C3704) *
              C6332 * C6333 * C72 -
          ((C2733 * C3419 - C2849 * C3381 - C2733 * C3491 + C2693 * C3527 +
            C2732 * C762 - C2848 * C724 - C2732 * C826 + C2692 * C858) *
               C6210 * C3704 +
           (C2864 + C2863) * C6210 * C3703) *
              C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3703 * C166 - C3777 * C80 + C3704 * C793 - C3778 * C725) * C2732 +
           (C3703 * C287 - C3777 * C208 + C3704 * C886 - C3778 * C825) * C2692 +
           (C3703 * C509 - C3777 * C441 + C3704 * C1651 - C3778 * C1588) *
               C2733 +
           (C3703 * C602 - C3777 * C541 + C3704 * C1739 - C3778 * C1681) *
               C2693) *
              C6210 * C6332 * C6333 * C72 +
          ((C3781 - C3780 + C3783 - C3782) * C2732 +
           (C3898 - C3897 + C3900 - C3899) * C2692 +
           (C3777 * C440 - C3703 * C510 + C3778 * C3381 - C3704 * C3455) *
               C2733 +
           (C3777 * C542 - C3703 * C603 + C3778 * C3491 - C3704 * C3562) *
               C2693) *
              C6210 * C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6210 * C84 - C1009 * C80) * C3777 +
                     (C6210 * C325 - C1009 * C321) * C3703 +
                     (C2489 - C2490) * C3778 + (C2595 - C2596) * C3704) *
                        C2692 +
                    ((C1396 - C1397) * C3777 + (C1490 - C1491) * C3703 +
                     (C6210 * C1591 - C1009 * C1588) * C3778 +
                     (C6210 * C1769 - C1009 * C1767) * C3704) *
                        C2693) *
                       C6332 * C6333 * C72 +
                   (((C1009 * C81 - C6210 * C86) * C3777 +
                     (C1009 * C322 - C6210 * C326) * C3703 +
                     (C1009 * C724 - C6210 * C728) * C3778 +
                     (C1009 * C916 - C6210 * C919) * C3704) *
                        C2692 +
                    ((C1009 * C440 - C6210 * C444) * C3777 +
                     (C1009 * C632 - C6210 * C635) * C3703 +
                     (C1009 * C3381 - C6210 * C3382) * C3778 +
                     (C1009 * C3597 - C6210 * C3598) * C3704) *
                        C2693) *
                       C6332 * C6333 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2692 * C123 - C2732 * C80 + C2693 * C477 - C2733 * C441) * C3777 +
           (C2692 * C355 - C2732 * C321 + C2693 * C663 - C2733 * C631) * C3703 +
           (C2692 * C761 - C2732 * C725 + C2693 * C1621 - C2733 * C1588) *
               C3778 +
           (C2692 * C947 - C2732 * C915 + C2693 * C1797 - C2733 * C1767) *
               C3704) *
              C6210 * C6332 * C6333 * C72 +
          ((C2736 - C2735 + C2738 - C2737) * C3777 +
           (C2970 - C2969 + C2972 - C2971) * C3703 +
           (C2732 * C724 - C2692 * C762 + C2733 * C3381 - C2693 * C3419) *
               C3778 +
           (C2732 * C916 - C2692 * C948 + C2733 * C3597 - C2693 * C3633) *
               C3704) *
              C6210 * C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3777 * C166 - C4004 * C80 - C3777 * C321 + C3703 * C390 +
            C3778 * C793 - C4005 * C725 - C3778 * C915 + C3704 * C978) *
               C2692 +
           (C3777 * C509 - C4004 * C441 - C3777 * C631 + C3703 * C694 +
            C3778 * C1651 - C4005 * C1588 - C3778 * C1767 + C3704 * C1826) *
               C2693) *
              C6210 * C6332 * C6333 * C72 -
          ((C3778 * C3455 - C4005 * C3381 - C3778 * C3597 + C3704 * C3668 +
            C3777 * C510 - C4004 * C440 - C3777 * C632 + C3703 * C693) *
               C2693 +
           (C4020 + C4019) * C2692) *
              C6210 * C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1009 * C84 - C1010 * C80 - C1009 * C85 + C6210 * C92) * C3703 +
            C2395 * C3704) *
               C2692 +
           (C5001 + C5009) * C2693) *
              C6332 * C436 -
          (((C1009 * C1589 - C1010 * C1587 - C1009 * C1590 + C6210 * C1593) *
                C3704 +
            C1301 * C3703) *
               C2693 +
           (C5009 + C5001) * C2692) *
              C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2692 * C123 - C2732 * C80 + C2693 * C477 - C2733 * C441) * C1009 +
            (C2692 * C127 - C2732 * C85 + C2693 * C480 - C2733 * C447) *
                C6210) *
               C3703 +
           ((C2692 * C761 - C2732 * C725 + C2693 * C1621 - C2733 * C1588) *
                C1009 +
            (C2692 * C764 - C2732 * C731 + C2693 * C1623 - C2733 * C1592) *
                C6210) *
               C3704) *
              C6332 * C436 +
          (((C2732 * C441 - C2692 * C477 + C2733 * C1011 - C2693 * C1048) *
                C1009 +
            (C2732 * C447 - C2692 * C480 + C2733 * C1014 - C2693 * C1050) *
                C6210) *
               C3703 +
           ((C2732 * C1588 - C2692 * C1621 + C2733 * C1587 - C2693 * C1622) *
                C1009 +
            (C2732 * C1592 - C2692 * C1623 + C2733 * C1590 - C2693 * C1624) *
                C6210) *
               C3704) *
              C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3703 * C166 - C3777 * C80 + C3704 * C793 - C3778 * C725) * C1009 +
            (C3703 * C170 - C3777 * C85 + C3704 * C796 - C3778 * C731) *
                C6210) *
               C2692 +
           ((C5078 - C5079 + C5080 - C5081) * C1009 +
            (C5082 - C5083 + C5084 - C5085) * C6210) *
               C2693) *
              C6332 * C436 +
          (((C5079 - C5078 + C5081 - C5080) * C1009 +
            (C5083 - C5082 + C5085 - C5084) * C6210) *
               C2692 +
           ((C3777 * C1011 - C3703 * C1078 + C3778 * C1587 - C3704 * C1652) *
                C1009 +
            (C3777 * C1014 - C3703 * C1080 + C3778 * C1590 - C3704 * C1654) *
                C6210) *
               C2693) *
              C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyx[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6210 * C84 - C1009 * C80) * C2732 +
                     (C6210 * C212 - C1009 * C208) * C2692 +
                     (C1396 - C1397) * C2733 + (C1398 - C1399) * C2693) *
                        C3703 +
                    ((C2489 - C2490) * C2732 + (C2491 - C2492) * C2692 +
                     (C5120 - C5121) * C2733 + (C5122 - C5123) * C2693) *
                        C3704) *
                       C6332 * C436 +
                   (((C1397 - C1396) * C2732 + (C1399 - C1398) * C2692 +
                     (C1401 - C1400) * C2733 + (C1403 - C1402) * C2693) *
                        C3703 +
                    ((C5121 - C5120) * C2732 + (C5123 - C5122) * C2692 +
                     (C1009 * C1587 - C6210 * C1589) * C2733 +
                     (C1009 * C1682 - C6210 * C1684) * C2693) *
                        C3704) *
                       C6332 * C437) *
                  C6334) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2732 * C123 - C2848 * C80 - C2732 * C208 + C2692 * C243 +
            C2733 * C477 - C2849 * C441 - C2733 * C541 + C2693 * C575) *
               C6210 * C3703 +
           (C2732 * C761 - C2848 * C725 - C2732 * C825 + C2692 * C859 +
            C2733 * C1621 - C2849 * C1588 - C2733 * C1681 + C2693 * C1712) *
               C6210 * C3704) *
              C6332 * C436 -
          ((C2733 * C1622 - C2849 * C1587 - C2733 * C1682 + C2693 * C1711 +
            C2732 * C1621 - C2848 * C1588 - C2732 * C1681 + C2692 * C1712) *
               C6210 * C3704 +
           (C2733 * C1048 - C2849 * C1011 - C2733 * C1108 + C2693 * C1141 +
            C2732 * C477 - C2848 * C441 - C2732 * C541 + C2692 * C575) *
               C6210 * C3703) *
              C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3703 * C166 - C3777 * C80 + C3704 * C793 - C3778 * C725) * C2732 +
           (C3703 * C287 - C3777 * C208 + C3704 * C886 - C3778 * C825) * C2692 +
           (C5078 - C5079 + C5080 - C5081) * C2733 +
           (C5192 - C5193 + C5194 - C5195) * C2693) *
              C6210 * C6332 * C436 +
          ((C5079 - C5078 + C5081 - C5080) * C2732 +
           (C5193 - C5192 + C5195 - C5194) * C2692 +
           (C3777 * C1011 - C3703 * C1078 + C3778 * C1587 - C3704 * C1652) *
               C2733 +
           (C3777 * C1108 - C3703 * C1169 + C3778 * C1682 - C3704 * C1740) *
               C2693) *
              C6210 * C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6210 * C84 - C1009 * C80) * C3777 +
                     (C6210 * C325 - C1009 * C321) * C3703 +
                     (C2489 - C2490) * C3778 + (C2595 - C2596) * C3704) *
                        C2692 +
                    ((C1396 - C1397) * C3777 + (C1490 - C1491) * C3703 +
                     (C5120 - C5121) * C3778 + (C5230 - C5231) * C3704) *
                        C2693) *
                       C6332 * C436 +
                   (((C1397 - C1396) * C3777 + (C1491 - C1490) * C3703 +
                     (C5121 - C5120) * C3778 + (C5231 - C5230) * C3704) *
                        C2692 +
                    ((C1401 - C1400) * C3777 + (C1493 - C1492) * C3703 +
                     (C1009 * C1587 - C6210 * C1589) * C3778 +
                     (C1009 * C1768 - C6210 * C1770) * C3704) *
                        C2693) *
                       C6332 * C437) *
                  C6334) /
                 (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2692 * C123 - C2732 * C80 + C2693 * C477 - C2733 * C441) * C3777 +
           (C2692 * C355 - C2732 * C321 + C2693 * C663 - C2733 * C631) * C3703 +
           (C2692 * C761 - C2732 * C725 + C2693 * C1621 - C2733 * C1588) *
               C3778 +
           (C2692 * C947 - C2732 * C915 + C2693 * C1797 - C2733 * C1767) *
               C3704) *
              C6210 * C6332 * C436 +
          ((C2732 * C441 - C2692 * C477 + C2733 * C1011 - C2693 * C1048) *
               C3777 +
           (C2732 * C631 - C2692 * C663 + C2733 * C1197 - C2693 * C1227) *
               C3703 +
           (C2732 * C1588 - C2692 * C1621 + C2733 * C1587 - C2693 * C1622) *
               C3778 +
           (C2732 * C1767 - C2692 * C1797 + C2733 * C1768 - C2693 * C1798) *
               C3704) *
              C6210 * C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3777 * C166 - C4004 * C80 - C3777 * C321 + C3703 * C390 +
            C3778 * C793 - C4005 * C725 - C3778 * C915 + C3704 * C978) *
               C2692 +
           (C5312 + C5313) * C2693) *
              C6210 * C6332 * C436 -
          ((C3778 * C1652 - C4005 * C1587 - C3778 * C1768 + C3704 * C1825 +
            C3777 * C1078 - C4004 * C1011 - C3777 * C1197 + C3703 * C1255) *
               C2693 +
           (C5313 + C5312) * C2692) *
              C6210 * C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1009 * C84 - C1010 * C80 - C1009 * C85 + C6210 * C92) * C3703 +
            C2395 * C3704) *
               C2692 +
           (C5001 + C5009) * C2693) *
              C721 -
          (((C1009 * C2129 - C1010 * C2128 - C1009 * C2130 + C6210 * C2131) *
                C3704 +
            C5008 * C3703) *
               C2693 +
           (C2396 * C3704 + C2395 * C3703) * C2692) *
              C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2692 * C123 - C2732 * C80 + C2693 * C477 - C2733 * C441) * C1009 +
            (C2692 * C127 - C2732 * C85 + C2693 * C480 - C2733 * C447) *
                C6210) *
               C3703 +
           ((C5382 - C5383 + C5384 - C5385) * C1009 +
            (C5386 - C5387 + C5388 - C5389) * C6210) *
               C3704) *
              C721 +
          (((C5383 - C5382 + C5385 - C5384) * C1009 +
            (C5387 - C5386 + C5389 - C5388) * C6210) *
               C3703 +
           ((C2732 * C1856 - C2692 * C1890 + C2733 * C2128 - C2693 * C2158) *
                C1009 +
            (C2732 * C1859 - C2692 * C1892 + C2733 * C2130 - C2693 * C2159) *
                C6210) *
               C3704) *
              C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3703 * C166 - C3777 * C80 + C3704 * C793 - C3778 * C725) * C1009 +
            (C3703 * C170 - C3777 * C85 + C3704 * C796 - C3778 * C731) *
                C6210) *
               C2692 +
           ((C5078 - C5079 + C5080 - C5081) * C1009 +
            (C5082 - C5083 + C5084 - C5085) * C6210) *
               C2693) *
              C721 +
          (((C3777 * C725 - C3703 * C793 + C3778 * C1856 - C3704 * C1923) *
                C1009 +
            (C3777 * C731 - C3703 * C796 + C3778 * C1859 - C3704 * C1925) *
                C6210) *
               C2692 +
           ((C3777 * C1588 - C3703 * C1651 + C3778 * C2128 - C3704 * C2186) *
                C1009 +
            (C3777 * C1592 - C3703 * C1653 + C3778 * C2130 - C3704 * C2187) *
                C6210) *
               C2693) *
              C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6210 * C84 - C1009 * C80) * C2732 +
                     (C6210 * C212 - C1009 * C208) * C2692 +
                     (C1396 - C1397) * C2733 + (C1398 - C1399) * C2693) *
                        C3703 +
                    ((C2489 - C2490) * C2732 + (C2491 - C2492) * C2692 +
                     (C5120 - C5121) * C2733 + (C5122 - C5123) * C2693) *
                        C3704) *
                       C721 +
                   (((C2490 - C2489) * C2732 + (C2492 - C2491) * C2692 +
                     (C5121 - C5120) * C2733 + (C5123 - C5122) * C2693) *
                        C3703 +
                    ((C2494 - C2493) * C2732 + (C2496 - C2495) * C2692 +
                     (C1009 * C2128 - C6210 * C2129) * C2733 +
                     (C1009 * C2214 - C6210 * C2215) * C2693) *
                        C3704) *
                       C722) *
                  C6333 * C6334) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2732 * C123 - C2848 * C80 - C2732 * C208 + C2692 * C243 +
            C2733 * C477 - C2849 * C441 - C2733 * C541 + C2693 * C575) *
               C6210 * C3703 +
           (C5504 + C5505) * C6210 * C3704) *
              C721 -
          ((C2733 * C2158 - C2849 * C2128 - C2733 * C2214 + C2693 * C2242 +
            C2732 * C1890 - C2848 * C1856 - C2732 * C1953 + C2692 * C1983) *
               C6210 * C3704 +
           (C5505 + C5504) * C6210 * C3703) *
              C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3703 * C166 - C3777 * C80 + C3704 * C793 - C3778 * C725) * C2732 +
           (C3703 * C287 - C3777 * C208 + C3704 * C886 - C3778 * C825) * C2692 +
           (C5078 - C5079 + C5080 - C5081) * C2733 +
           (C5192 - C5193 + C5194 - C5195) * C2693) *
              C6210 * C721 +
          ((C3777 * C725 - C3703 * C793 + C3778 * C1856 - C3704 * C1923) *
               C2732 +
           (C3777 * C825 - C3703 * C886 + C3778 * C1953 - C3704 * C2011) *
               C2692 +
           (C3777 * C1588 - C3703 * C1651 + C3778 * C2128 - C3704 * C2186) *
               C2733 +
           (C3777 * C1681 - C3703 * C1739 + C3778 * C2214 - C3704 * C2269) *
               C2693) *
              C6210 * C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6210 * C84 - C1009 * C80) * C3777 +
                     (C6210 * C325 - C1009 * C321) * C3703 +
                     (C2489 - C2490) * C3778 + (C2595 - C2596) * C3704) *
                        C2692 +
                    ((C1396 - C1397) * C3777 + (C1490 - C1491) * C3703 +
                     (C5120 - C5121) * C3778 + (C5230 - C5231) * C3704) *
                        C2693) *
                       C721 +
                   (((C2490 - C2489) * C3777 + (C2596 - C2595) * C3703 +
                     (C2494 - C2493) * C3778 + (C2598 - C2597) * C3704) *
                        C2692 +
                    ((C5121 - C5120) * C3777 + (C5231 - C5230) * C3703 +
                     (C1009 * C2128 - C6210 * C2129) * C3778 +
                     (C1009 * C2296 - C6210 * C2297) * C3704) *
                        C2693) *
                       C722) *
                  C6333 * C6334) /
                 (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2692 * C123 - C2732 * C80 + C2693 * C477 - C2733 * C441) * C3777 +
           (C2692 * C355 - C2732 * C321 + C2693 * C663 - C2733 * C631) * C3703 +
           (C5382 - C5383 + C5384 - C5385) * C3778 +
           (C5608 - C5609 + C5610 - C5611) * C3704) *
              C6210 * C721 +
          ((C5383 - C5382 + C5385 - C5384) * C3777 +
           (C5609 - C5608 + C5611 - C5610) * C3703 +
           (C2732 * C1856 - C2692 * C1890 + C2733 * C2128 - C2693 * C2158) *
               C3778 +
           (C2732 * C2039 - C2692 * C2069 + C2733 * C2296 - C2693 * C2324) *
               C3704) *
              C6210 * C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3777 * C166 - C4004 * C80 - C3777 * C321 + C3703 * C390 +
            C3778 * C793 - C4005 * C725 - C3778 * C915 + C3704 * C978) *
               C2692 +
           (C5312 + C5313) * C2693) *
              C6210 * C721 -
          ((C3778 * C2186 - C4005 * C2128 - C3778 * C2296 + C3704 * C2351 +
            C3777 * C1651 - C4004 * C1588 - C3777 * C1767 + C3703 * C1826) *
               C2693 +
           (C3778 * C1923 - C4005 * C1856 - C3778 * C2039 + C3704 * C2100 +
            C3777 * C793 - C4004 * C725 - C3777 * C915 + C3703 * C978) *
               C2692) *
              C6210 * C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (-std::pow(Pi, 2.5) *
         (((C1009 * C84 - C1010 * C80 - C1009 * C85 + C6210 * C92) * C6260 *
               C1006 +
           (C1009 * C446 - C1010 * C441 - C1009 * C447 + C6210 * C450) * C6260 *
               C1007 +
           (C1009 * C1013 - C1010 * C1011 - C1009 * C1014 + C6210 * C1017) *
               C6260 * C1008) *
              C6332 * C6333 * C72 -
          ((C1009 * C1015 - C1010 * C1012 - C1009 * C1016 + C6210 * C1018) *
               C6260 * C1008 +
           (C1009 * C444 - C1010 * C440 - C1009 * C445 + C6210 * C449) * C6260 *
               C1007 +
           (C1009 * C86 - C1010 * C81 - C1009 * C87 + C6210 * C93) * C6260 *
               C1006) *
              C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C74 * C84 - C75 * C80 - C74 * C85 + C65 * C92 +
                               C76 * C86 - C77 * C81 - C76 * C87 + C66 * C93 +
                               C78 * C88 - C79 * C82 - C78 * C89 + C67 * C94) *
                                  C6260 * C6249 * C6332 * C6333 * C72 -
                              (C78 * C90 - C79 * C83 - C78 * C91 + C67 * C95 +
                               C76 * C88 - C77 * C82 - C76 * C89 + C66 * C94 +
                               C74 * C86 - C75 * C81 - C74 * C87 + C65 * C93) *
                                  C6260 * C6249 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1009 * C84 - C1010 * C80 - C1009 * C85 + C6210 * C92) * C1853 +
           (C1009 * C730 - C1010 * C725 - C1009 * C731 + C6210 * C734) * C1854 +
           (C1009 * C1858 - C1010 * C1856 - C1009 * C1859 + C6210 * C1862) *
               C1855) *
              C6249 * C6332 * C6333 * C72 -
          ((C1009 * C1860 - C1010 * C1857 - C1009 * C1861 + C6210 * C1863) *
               C1855 +
           (C1009 * C728 - C1010 * C724 - C1009 * C729 + C6210 * C733) * C1854 +
           (C1009 * C86 - C1010 * C81 - C1009 * C87 + C6210 * C93) * C1853) *
              C6249 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (-std::pow(Pi, 2.5) * (((C1006 * C123 - C1045 * C80 + C1007 * C477 -
                                 C1046 * C441 + C1008 * C1048 - C1047 * C1011) *
                                    C1009 +
                                (C1006 * C127 - C1045 * C85 + C1007 * C480 -
                                 C1046 * C447 + C1008 * C1050 - C1047 * C1014) *
                                    C6210) *
                                   C6260 * C6332 * C6333 * C72 +
                               ((C1045 * C81 - C1006 * C124 + C1046 * C440 -
                                 C1007 * C478 + C1047 * C1012 - C1008 * C1049) *
                                    C1009 +
                                (C1045 * C87 - C1006 * C128 + C1046 * C445 -
                                 C1007 * C481 + C1047 * C1016 - C1008 * C1051) *
                                    C6210) *
                                   C6260 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C6249 * C123 - C122 * C80) * C74 +
           (C6249 * C127 - C122 * C85) * C65 + (C132 - C133) * C76 +
           (C134 - C135) * C66 + (C136 - C137) * C78 + (C138 - C139) * C67) *
              C6260 * C6332 * C6333 * C72 +
          ((C133 - C132) * C74 + (C135 - C134) * C65 + (C137 - C136) * C76 +
           (C139 - C138) * C66 + (C122 * C83 - C6249 * C126) * C78 +
           (C122 * C91 - C6249 * C130) * C67) *
              C6260 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6249 * C123 - C122 * C80) * C1009 +
            (C6249 * C127 - C122 * C85) * C6210) *
               C1853 +
           ((C6249 * C761 - C122 * C725) * C1009 +
            (C6249 * C764 - C122 * C731) * C6210) *
               C1854 +
           ((C6249 * C1890 - C122 * C1856) * C1009 +
            (C6249 * C1892 - C122 * C1859) * C6210) *
               C1855) *
              C6332 * C6333 * C72 +
          (((C133 - C132) * C1009 + (C135 - C134) * C6210) * C1853 +
           ((C122 * C724 - C6249 * C762) * C1009 +
            (C122 * C729 - C6249 * C765) * C6210) *
               C1854 +
           ((C122 * C1857 - C6249 * C1891) * C1009 +
            (C122 * C1861 - C6249 * C1893) * C6210) *
               C1855) *
              C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (-std::pow(Pi, 2.5) *
         ((((C6260 * C166 - C165 * C80) * C1009 +
            (C6260 * C170 - C165 * C85) * C6210) *
               C1006 +
           ((C6260 * C509 - C165 * C441) * C1009 +
            (C6260 * C512 - C165 * C447) * C6210) *
               C1007 +
           ((C6260 * C1078 - C165 * C1011) * C1009 +
            (C6260 * C1080 - C165 * C1014) * C6210) *
               C1008) *
              C6332 * C6333 * C72 +
          (((C176 - C175) * C1009 + (C178 - C177) * C6210) * C1006 +
           ((C165 * C440 - C6260 * C510) * C1009 +
            (C165 * C445 - C6260 * C513) * C6210) *
               C1007 +
           ((C165 * C1012 - C6260 * C1079) * C1009 +
            (C165 * C1016 - C6260 * C1081) * C6210) *
               C1008) *
              C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C6260 * C166 - C165 * C80) * C74 +
           (C6260 * C170 - C165 * C85) * C65 + (C175 - C176) * C76 +
           (C177 - C178) * C66 + (C179 - C180) * C78 + (C181 - C182) * C67) *
              C6249 * C6332 * C6333 * C72 +
          ((C176 - C175) * C74 + (C178 - C177) * C65 + (C180 - C179) * C76 +
           (C182 - C181) * C66 + (C165 * C83 - C6260 * C169) * C78 +
           (C165 * C91 - C6260 * C173) * C67) *
              C6249 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1853 * C166 - C1920 * C80 + C1854 * C793 - C1921 * C725 +
            C1855 * C1923 - C1922 * C1856) *
               C1009 +
           (C1853 * C170 - C1920 * C85 + C1854 * C796 - C1921 * C731 +
            C1855 * C1925 - C1922 * C1859) *
               C6210) *
              C6249 * C6332 * C6333 * C72 +
          ((C1920 * C81 - C1853 * C167 + C1921 * C724 - C1854 * C794 +
            C1922 * C1857 - C1855 * C1924) *
               C1009 +
           (C1920 * C87 - C1853 * C171 + C1921 * C729 - C1854 * C797 +
            C1922 * C1861 - C1855 * C1926) *
               C6210) *
              C6249 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (-std::pow(Pi, 2.5) * (((C6210 * C84 - C1009 * C80) * C1045 +
                                (C6210 * C212 - C1009 * C208) * C1006 +
                                (C6210 * C446 - C1009 * C441) * C1046 +
                                (C6210 * C544 - C1009 * C541) * C1007 +
                                (C6210 * C1013 - C1009 * C1011) * C1047 +
                                (C6210 * C1110 - C1009 * C1108) * C1008) *
                                   C6260 * C6332 * C6333 * C72 +
                               ((C1009 * C81 - C6210 * C86) * C1045 +
                                (C1009 * C209 - C6210 * C213) * C1006 +
                                (C1009 * C440 - C6210 * C444) * C1046 +
                                (C1009 * C542 - C6210 * C545) * C1007 +
                                (C1009 * C1012 - C6210 * C1015) * C1047 +
                                (C1009 * C1109 - C6210 * C1111) * C1008) *
                                   C6260 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 +
                                C67 * C88 - C78 * C82) *
                                   C122 +
                               (C65 * C212 - C74 * C208 + C66 * C213 -
                                C76 * C209 + C67 * C214 - C78 * C210) *
                                   C6249) *
                                  C6260 * C6332 * C6333 * C72 +
                              ((C74 * C81 - C65 * C86 + C76 * C82 - C66 * C88 +
                                C78 * C83 - C67 * C90) *
                                   C122 +
                               (C74 * C209 - C65 * C213 + C76 * C210 -
                                C66 * C214 + C78 * C211 - C67 * C215) *
                                   C6249) *
                                  C6260 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6210 * C84 - C1009 * C80) * C122 +
            (C6210 * C212 - C1009 * C208) * C6249) *
               C1853 +
           ((C6210 * C730 - C1009 * C725) * C122 +
            (C6210 * C828 - C1009 * C825) * C6249) *
               C1854 +
           ((C6210 * C1858 - C1009 * C1856) * C122 +
            (C6210 * C1955 - C1009 * C1953) * C6249) *
               C1855) *
              C6332 * C6333 * C72 +
          (((C1009 * C81 - C6210 * C86) * C122 +
            (C1009 * C209 - C6210 * C213) * C6249) *
               C1853 +
           ((C1009 * C724 - C6210 * C728) * C122 +
            (C1009 * C826 - C6210 * C829) * C6249) *
               C1854 +
           ((C1009 * C1857 - C6210 * C1860) * C122 +
            (C1009 * C1954 - C6210 * C1956) * C6249) *
               C1855) *
              C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (-std::pow(Pi, 2.5) *
         ((C1045 * C123 - C1138 * C80 - C1045 * C208 + C1006 * C243 +
           C1046 * C477 - C1139 * C441 - C1046 * C541 + C1007 * C575 +
           C1047 * C1048 - C1140 * C1011 - C1047 * C1108 + C1008 * C1141) *
              C6210 * C6260 * C6332 * C6333 * C72 -
          (C1047 * C1049 - C1140 * C1012 - C1047 * C1109 + C1008 * C1142 +
           C1046 * C478 - C1139 * C440 - C1046 * C542 + C1007 * C574 +
           C1045 * C124 - C1138 * C81 - C1045 * C209 + C1006 * C244) *
              C6210 * C6260 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C6249 * C243) * C65 +
           C260 * C66 + C261 * C67) *
              C6260 * C6332 * C6333 * C72 -
          ((C122 * C126 - C242 * C83 - C122 * C211 + C6249 * C246) * C67 +
           C261 * C66 + C260 * C65) *
              C6260 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C6249 * C243) * C6210 *
               C1853 +
           (C122 * C761 - C242 * C725 - C122 * C825 + C6249 * C859) * C6210 *
               C1854 +
           (C122 * C1890 - C242 * C1856 - C122 * C1953 + C6249 * C1983) *
               C6210 * C1855) *
              C6332 * C6333 * C72 -
          ((C122 * C1891 - C242 * C1857 - C122 * C1954 + C6249 * C1984) *
               C6210 * C1855 +
           (C122 * C762 - C242 * C724 - C122 * C826 + C6249 * C858) * C6210 *
               C1854 +
           C260 * C6210 * C1853) *
              C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (-std::pow(Pi, 2.5) * (((C6260 * C166 - C165 * C80) * C1045 +
                                (C6260 * C287 - C165 * C208) * C1006 +
                                (C6260 * C509 - C165 * C441) * C1046 +
                                (C6260 * C602 - C165 * C541) * C1007 +
                                (C6260 * C1078 - C165 * C1011) * C1047 +
                                (C6260 * C1169 - C165 * C1108) * C1008) *
                                   C6210 * C6332 * C6333 * C72 +
                               ((C176 - C175) * C1045 + (C293 - C292) * C1006 +
                                (C165 * C440 - C6260 * C510) * C1046 +
                                (C165 * C542 - C6260 * C603) * C1007 +
                                (C165 * C1012 - C6260 * C1079) * C1047 +
                                (C165 * C1109 - C6260 * C1170) * C1008) *
                                   C6210 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C6260 * C166 - C165 * C80) * C122 +
            (C6260 * C287 - C165 * C208) * C6249) *
               C65 +
           ((C175 - C176) * C122 + (C292 - C293) * C6249) * C66 +
           ((C179 - C180) * C122 + (C294 - C295) * C6249) * C67) *
              C6332 * C6333 * C72 +
          (((C176 - C175) * C122 + (C293 - C292) * C6249) * C65 +
           ((C180 - C179) * C122 + (C295 - C294) * C6249) * C66 +
           ((C165 * C83 - C6260 * C169) * C122 +
            (C165 * C211 - C6260 * C290) * C6249) *
               C67) *
              C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1853 * C166 - C1920 * C80 + C1854 * C793 - C1921 * C725 +
            C1855 * C1923 - C1922 * C1856) *
               C122 +
           (C1853 * C287 - C1920 * C208 + C1854 * C886 - C1921 * C825 +
            C1855 * C2011 - C1922 * C1953) *
               C6249) *
              C6210 * C6332 * C6333 * C72 +
          ((C1920 * C81 - C1853 * C167 + C1921 * C724 - C1854 * C794 +
            C1922 * C1857 - C1855 * C1924) *
               C122 +
           (C1920 * C209 - C1853 * C288 + C1921 * C826 - C1854 * C887 +
            C1922 * C1954 - C1855 * C2012) *
               C6249) *
              C6210 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (-std::pow(Pi, 2.5) * ((((C6210 * C84 - C1009 * C80) * C165 +
                                 (C6210 * C325 - C1009 * C321) * C6260) *
                                    C1006 +
                                ((C6210 * C446 - C1009 * C441) * C165 +
                                 (C6210 * C634 - C1009 * C631) * C6260) *
                                    C1007 +
                                ((C6210 * C1013 - C1009 * C1011) * C165 +
                                 (C6210 * C1199 - C1009 * C1197) * C6260) *
                                    C1008) *
                                   C6332 * C6333 * C72 +
                               (((C1009 * C81 - C6210 * C86) * C165 +
                                 (C1009 * C322 - C6210 * C326) * C6260) *
                                    C1006 +
                                ((C1009 * C440 - C6210 * C444) * C165 +
                                 (C1009 * C632 - C6210 * C635) * C6260) *
                                    C1007 +
                                ((C1009 * C1012 - C6210 * C1015) * C165 +
                                 (C1009 * C1198 - C6210 * C1200) * C6260) *
                                    C1008) *
                                   C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 +
                                C67 * C88 - C78 * C82) *
                                   C165 +
                               (C65 * C325 - C74 * C321 + C66 * C326 -
                                C76 * C322 + C67 * C327 - C78 * C323) *
                                   C6260) *
                                  C6249 * C6332 * C6333 * C72 +
                              ((C74 * C81 - C65 * C86 + C76 * C82 - C66 * C88 +
                                C78 * C83 - C67 * C90) *
                                   C165 +
                               (C74 * C322 - C65 * C326 + C76 * C323 -
                                C66 * C327 + C78 * C324 - C67 * C328) *
                                   C6260) *
                                  C6249 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6210 * C84 - C1009 * C80) * C1920 +
           (C6210 * C325 - C1009 * C321) * C1853 +
           (C6210 * C730 - C1009 * C725) * C1921 +
           (C6210 * C918 - C1009 * C915) * C1854 +
           (C6210 * C1858 - C1009 * C1856) * C1922 +
           (C6210 * C2041 - C1009 * C2039) * C1855) *
              C6249 * C6332 * C6333 * C72 +
          ((C1009 * C81 - C6210 * C86) * C1920 +
           (C1009 * C322 - C6210 * C326) * C1853 +
           (C1009 * C724 - C6210 * C728) * C1921 +
           (C1009 * C916 - C6210 * C919) * C1854 +
           (C1009 * C1857 - C6210 * C1860) * C1922 +
           (C1009 * C2040 - C6210 * C2042) * C1855) *
              C6249 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (-std::pow(Pi, 2.5) * (((C1006 * C123 - C1045 * C80 + C1007 * C477 -
                                 C1046 * C441 + C1008 * C1048 - C1047 * C1011) *
                                    C165 +
                                (C1006 * C355 - C1045 * C321 + C1007 * C663 -
                                 C1046 * C631 + C1008 * C1227 - C1047 * C1197) *
                                    C6260) *
                                   C6210 * C6332 * C6333 * C72 +
                               ((C1045 * C81 - C1006 * C124 + C1046 * C440 -
                                 C1007 * C478 + C1047 * C1012 - C1008 * C1049) *
                                    C165 +
                                (C1045 * C322 - C1006 * C356 + C1046 * C632 -
                                 C1007 * C664 + C1047 * C1198 - C1008 * C1228) *
                                    C6260) *
                                   C6210 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C6249 * C123 - C122 * C80) * C165 +
            (C6249 * C355 - C122 * C321) * C6260) *
               C65 +
           ((C132 - C133) * C165 + (C360 - C361) * C6260) * C66 +
           ((C136 - C137) * C165 + (C362 - C363) * C6260) * C67) *
              C6332 * C6333 * C72 +
          (((C133 - C132) * C165 + (C361 - C360) * C6260) * C65 +
           ((C137 - C136) * C165 + (C363 - C362) * C6260) * C66 +
           ((C122 * C83 - C6249 * C126) * C165 +
            (C122 * C324 - C6249 * C358) * C6260) *
               C67) *
              C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6249 * C123 - C122 * C80) * C1920 +
           (C6249 * C355 - C122 * C321) * C1853 +
           (C6249 * C761 - C122 * C725) * C1921 +
           (C6249 * C947 - C122 * C915) * C1854 +
           (C6249 * C1890 - C122 * C1856) * C1922 +
           (C6249 * C2069 - C122 * C2039) * C1855) *
              C6210 * C6332 * C6333 * C72 +
          ((C133 - C132) * C1920 + (C361 - C360) * C1853 +
           (C122 * C724 - C6249 * C762) * C1921 +
           (C122 * C916 - C6249 * C948) * C1854 +
           (C122 * C1857 - C6249 * C1891) * C1922 +
           (C122 * C2040 - C6249 * C2070) * C1855) *
              C6210 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (-std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C1006 +
           (C165 * C509 - C389 * C441 - C165 * C631 + C6260 * C694) * C1007 +
           (C165 * C1078 - C389 * C1011 - C165 * C1197 + C6260 * C1255) *
               C1008) *
              C6210 * C6332 * C6333 * C72 -
          ((C165 * C1079 - C389 * C1012 - C165 * C1198 + C6260 * C1256) *
               C1008 +
           (C165 * C510 - C389 * C440 - C165 * C632 + C6260 * C693) * C1007 +
           C407 * C1006) *
              C6210 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C6249 *
               C65 +
           C409 * C66 + C410 * C67) *
              C6332 * C6333 * C72 -
          ((C165 * C169 - C389 * C83 - C165 * C324 + C6260 * C393) * C6249 *
               C67 +
           C410 * C66 + C409 * C65) *
              C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C1920 * C166 - C2097 * C80 - C1920 * C321 + C1853 * C390 +
           C1921 * C793 - C2098 * C725 - C1921 * C915 + C1854 * C978 +
           C1922 * C1923 - C2099 * C1856 - C1922 * C2039 + C1855 * C2100) *
              C6249 * C6210 * C6332 * C6333 * C72 -
          (C1922 * C1924 - C2099 * C1857 - C1922 * C2040 + C1855 * C2101 +
           C1921 * C794 - C2098 * C724 - C1921 * C916 + C1854 * C977 +
           C1920 * C167 - C2097 * C81 - C1920 * C322 + C1853 * C391) *
              C6249 * C6210 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C1009 * C84 - C1010 * C80 - C1009 * C85 + C6210 * C92) * C6260 *
               C1006 +
           C1302 * C1007 + C1303 * C1008) *
              C6332 * C436 -
          ((C1009 * C1284 - C1010 * C1283 - C1009 * C1285 + C6210 * C1286) *
               C6260 * C1008 +
           C1303 * C1007 + C1302 * C1006) *
              C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C74 * C84 - C75 * C80 - C74 * C85 + C65 * C92 + C76 * C86 -
           C77 * C81 - C76 * C87 + C66 * C93 + C78 * C88 - C79 * C82 -
           C78 * C89 + C67 * C94) *
              C6260 * C6249 * C6332 * C436 -
          (C78 * C442 - C79 * C439 - C78 * C443 + C67 * C448 + C76 * C444 -
           C77 * C440 - C76 * C445 + C66 * C449 + C74 * C446 - C75 * C441 -
           C74 * C447 + C65 * C450) *
              C6260 * C6249 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1009 * C84 - C1010 * C80 - C1009 * C85 + C6210 * C92) * C1853 +
           (C1009 * C730 - C1010 * C725 - C1009 * C731 + C6210 * C734) * C1854 +
           (C1009 * C1858 - C1010 * C1856 - C1009 * C1859 + C6210 * C1862) *
               C1855) *
              C6249 * C6332 * C436 -
          ((C1009 * C2129 - C1010 * C2128 - C1009 * C2130 + C6210 * C2131) *
               C1855 +
           (C1009 * C1591 - C1010 * C1588 - C1009 * C1592 + C6210 * C1594) *
               C1854 +
           C1300 * C1853) *
              C6249 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C1006 * C123 - C1045 * C80 + C1007 * C477 - C1046 * C441 +
            C1008 * C1048 - C1047 * C1011) *
               C1009 +
           (C1006 * C127 - C1045 * C85 + C1007 * C480 - C1046 * C447 +
            C1008 * C1050 - C1047 * C1014) *
               C6210) *
              C6260 * C6332 * C436 +
          ((C1045 * C441 - C1006 * C477 + C1046 * C1011 - C1007 * C1048 +
            C1047 * C1283 - C1008 * C1329) *
               C1009 +
           (C1045 * C447 - C1006 * C480 + C1046 * C1014 - C1007 * C1050 +
            C1047 * C1285 - C1008 * C1330) *
               C6210) *
              C6260 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C6249 * C123 - C122 * C80) * C74 +
           (C6249 * C127 - C122 * C85) * C65 + (C132 - C133) * C76 +
           (C134 - C135) * C66 + (C136 - C137) * C78 + (C138 - C139) * C67) *
              C6260 * C6332 * C436 +
          ((C122 * C441 - C6249 * C477) * C74 +
           (C122 * C447 - C6249 * C480) * C65 +
           (C122 * C440 - C6249 * C478) * C76 +
           (C122 * C445 - C6249 * C481) * C66 +
           (C122 * C439 - C6249 * C479) * C78 +
           (C122 * C443 - C6249 * C482) * C67) *
              C6260 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6249 * C123 - C122 * C80) * C1009 +
            (C6249 * C127 - C122 * C85) * C6210) *
               C1853 +
           ((C6249 * C761 - C122 * C725) * C1009 +
            (C6249 * C764 - C122 * C731) * C6210) *
               C1854 +
           ((C6249 * C1890 - C122 * C1856) * C1009 +
            (C6249 * C1892 - C122 * C1859) * C6210) *
               C1855) *
              C6332 * C436 +
          (((C122 * C441 - C6249 * C477) * C1009 +
            (C122 * C447 - C6249 * C480) * C6210) *
               C1853 +
           ((C122 * C1588 - C6249 * C1621) * C1009 +
            (C122 * C1592 - C6249 * C1623) * C6210) *
               C1854 +
           ((C122 * C2128 - C6249 * C2158) * C1009 +
            (C122 * C2130 - C6249 * C2159) * C6210) *
               C1855) *
              C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C6260 * C166 - C165 * C80) * C1009 +
            (C6260 * C170 - C165 * C85) * C6210) *
               C1006 +
           ((C1360 - C1361) * C1009 + (C1362 - C1363) * C6210) * C1007 +
           ((C1364 - C1365) * C1009 + (C1366 - C1367) * C6210) * C1008) *
              C6332 * C436 +
          (((C1361 - C1360) * C1009 + (C1363 - C1362) * C6210) * C1006 +
           ((C1365 - C1364) * C1009 + (C1367 - C1366) * C6210) * C1007 +
           ((C165 * C1283 - C6260 * C1357) * C1009 +
            (C165 * C1285 - C6260 * C1358) * C6210) *
               C1008) *
              C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C6260 * C166 - C165 * C80) * C74 +
           (C6260 * C170 - C165 * C85) * C65 + (C175 - C176) * C76 +
           (C177 - C178) * C66 + (C179 - C180) * C78 + (C181 - C182) * C67) *
              C6249 * C6332 * C436 +
          ((C165 * C441 - C6260 * C509) * C74 +
           (C165 * C447 - C6260 * C512) * C65 +
           (C165 * C440 - C6260 * C510) * C76 +
           (C165 * C445 - C6260 * C513) * C66 +
           (C165 * C439 - C6260 * C511) * C78 +
           (C165 * C443 - C6260 * C514) * C67) *
              C6249 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1853 * C166 - C1920 * C80 + C1854 * C793 - C1921 * C725 +
            C1855 * C1923 - C1922 * C1856) *
               C1009 +
           (C1853 * C170 - C1920 * C85 + C1854 * C796 - C1921 * C731 +
            C1855 * C1925 - C1922 * C1859) *
               C6210) *
              C6249 * C6332 * C436 +
          ((C1920 * C441 - C1853 * C509 + C1921 * C1588 - C1854 * C1651 +
            C1922 * C2128 - C1855 * C2186) *
               C1009 +
           (C1920 * C447 - C1853 * C512 + C1921 * C1592 - C1854 * C1653 +
            C1922 * C2130 - C1855 * C2187) *
               C6210) *
              C6249 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] += (-std::pow(Pi, 2.5) *
                  (((C6210 * C84 - C1009 * C80) * C1045 +
                    (C6210 * C212 - C1009 * C208) * C1006 +
                    (C1396 - C1397) * C1046 + (C1398 - C1399) * C1007 +
                    (C1400 - C1401) * C1047 + (C1402 - C1403) * C1008) *
                       C6260 * C6332 * C436 +
                   ((C1397 - C1396) * C1045 + (C1399 - C1398) * C1006 +
                    (C1401 - C1400) * C1046 + (C1403 - C1402) * C1007 +
                    (C1009 * C1283 - C6210 * C1284) * C1047 +
                    (C1009 * C1393 - C6210 * C1394) * C1008) *
                       C6260 * C6332 * C437) *
                  C6334) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 + C67 * C88 -
                     C78 * C82) *
                        C122 +
                    (C65 * C212 - C74 * C208 + C66 * C213 - C76 * C209 +
                     C67 * C214 - C78 * C210) *
                        C6249) *
                       C6260 * C6332 * C436 +
                   ((C74 * C441 - C65 * C446 + C76 * C440 - C66 * C444 +
                     C78 * C439 - C67 * C442) *
                        C122 +
                    (C74 * C541 - C65 * C544 + C76 * C542 - C66 * C545 +
                     C78 * C543 - C67 * C546) *
                        C6249) *
                       C6260 * C6332 * C437) *
                  C6334) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C6210 * C84 - C1009 * C80) * C122 +
                     (C6210 * C212 - C1009 * C208) * C6249) *
                        C1853 +
                    ((C6210 * C730 - C1009 * C725) * C122 +
                     (C6210 * C828 - C1009 * C825) * C6249) *
                        C1854 +
                    ((C6210 * C1858 - C1009 * C1856) * C122 +
                     (C6210 * C1955 - C1009 * C1953) * C6249) *
                        C1855) *
                       C6332 * C436 +
                   (((C1397 - C1396) * C122 + (C1399 - C1398) * C6249) * C1853 +
                    ((C1009 * C1588 - C6210 * C1591) * C122 +
                     (C1009 * C1681 - C6210 * C1683) * C6249) *
                        C1854 +
                    ((C1009 * C2128 - C6210 * C2129) * C122 +
                     (C1009 * C2214 - C6210 * C2215) * C6249) *
                        C1855) *
                       C6332 * C437) *
                  C6334) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C1045 * C123 - C1138 * C80 - C1045 * C208 + C1006 * C243 +
           C1046 * C477 - C1139 * C441 - C1046 * C541 + C1007 * C575 +
           C1047 * C1048 - C1140 * C1011 - C1047 * C1108 + C1008 * C1141) *
              C6210 * C6260 * C6332 * C436 -
          (C1047 * C1329 - C1140 * C1283 - C1047 * C1393 + C1008 * C1429 +
           C1046 * C1048 - C1139 * C1011 - C1046 * C1108 + C1007 * C1141 +
           C1045 * C477 - C1138 * C441 - C1045 * C541 + C1006 * C575) *
              C6210 * C6260 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C6249 * C243) * C65 +
           C260 * C66 + C261 * C67) *
              C6260 * C6332 * C436 -
          ((C122 * C479 - C242 * C439 - C122 * C543 + C6249 * C573) * C67 +
           (C122 * C478 - C242 * C440 - C122 * C542 + C6249 * C574) * C66 +
           (C122 * C477 - C242 * C441 - C122 * C541 + C6249 * C575) * C65) *
              C6260 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C6249 * C243) * C6210 *
               C1853 +
           (C122 * C761 - C242 * C725 - C122 * C825 + C6249 * C859) * C6210 *
               C1854 +
           (C122 * C1890 - C242 * C1856 - C122 * C1953 + C6249 * C1983) *
               C6210 * C1855) *
              C6332 * C436 -
          ((C122 * C2158 - C242 * C2128 - C122 * C2214 + C6249 * C2242) *
               C6210 * C1855 +
           (C122 * C1621 - C242 * C1588 - C122 * C1681 + C6249 * C1712) *
               C6210 * C1854 +
           (C122 * C477 - C242 * C441 - C122 * C541 + C6249 * C575) * C6210 *
               C1853) *
              C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] += (-std::pow(Pi, 2.5) *
                  (((C6260 * C166 - C165 * C80) * C1045 +
                    (C6260 * C287 - C165 * C208) * C1006 +
                    (C1360 - C1361) * C1046 + (C1458 - C1459) * C1007 +
                    (C1364 - C1365) * C1047 + (C1460 - C1461) * C1008) *
                       C6210 * C6332 * C436 +
                   ((C1361 - C1360) * C1045 + (C1459 - C1458) * C1006 +
                    (C1365 - C1364) * C1046 + (C1461 - C1460) * C1007 +
                    (C165 * C1283 - C6260 * C1357) * C1047 +
                    (C165 * C1393 - C6260 * C1456) * C1008) *
                       C6210 * C6332 * C437) *
                  C6334) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C6260 * C166 - C165 * C80) * C122 +
                     (C6260 * C287 - C165 * C208) * C6249) *
                        C65 +
                    ((C175 - C176) * C122 + (C292 - C293) * C6249) * C66 +
                    ((C179 - C180) * C122 + (C294 - C295) * C6249) * C67) *
                       C6332 * C436 +
                   (((C165 * C441 - C6260 * C509) * C122 +
                     (C165 * C541 - C6260 * C602) * C6249) *
                        C65 +
                    ((C165 * C440 - C6260 * C510) * C122 +
                     (C165 * C542 - C6260 * C603) * C6249) *
                        C66 +
                    ((C165 * C439 - C6260 * C511) * C122 +
                     (C165 * C543 - C6260 * C604) * C6249) *
                        C67) *
                       C6332 * C437) *
                  C6334) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1853 * C166 - C1920 * C80 + C1854 * C793 - C1921 * C725 +
                     C1855 * C1923 - C1922 * C1856) *
                        C122 +
                    (C1853 * C287 - C1920 * C208 + C1854 * C886 - C1921 * C825 +
                     C1855 * C2011 - C1922 * C1953) *
                        C6249) *
                       C6210 * C6332 * C436 +
                   ((C1920 * C441 - C1853 * C509 + C1921 * C1588 -
                     C1854 * C1651 + C1922 * C2128 - C1855 * C2186) *
                        C122 +
                    (C1920 * C541 - C1853 * C602 + C1921 * C1681 -
                     C1854 * C1739 + C1922 * C2214 - C1855 * C2269) *
                        C6249) *
                       C6210 * C6332 * C437) *
                  C6334) /
                     (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C6210 * C84 - C1009 * C80) * C165 +
            (C6210 * C325 - C1009 * C321) * C6260) *
               C1006 +
           ((C1396 - C1397) * C165 + (C1490 - C1491) * C6260) * C1007 +
           ((C1400 - C1401) * C165 + (C1492 - C1493) * C6260) * C1008) *
              C6332 * C436 +
          (((C1397 - C1396) * C165 + (C1491 - C1490) * C6260) * C1006 +
           ((C1401 - C1400) * C165 + (C1493 - C1492) * C6260) * C1007 +
           ((C1009 * C1283 - C6210 * C1284) * C165 +
            (C1009 * C1487 - C6210 * C1488) * C6260) *
               C1008) *
              C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 + C67 * C88 -
            C78 * C82) *
               C165 +
           (C65 * C325 - C74 * C321 + C66 * C326 - C76 * C322 + C67 * C327 -
            C78 * C323) *
               C6260) *
              C6249 * C6332 * C436 +
          ((C74 * C441 - C65 * C446 + C76 * C440 - C66 * C444 + C78 * C439 -
            C67 * C442) *
               C165 +
           (C74 * C631 - C65 * C634 + C76 * C632 - C66 * C635 + C78 * C633 -
            C67 * C636) *
               C6260) *
              C6249 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6210 * C84 - C1009 * C80) * C1920 +
           (C6210 * C325 - C1009 * C321) * C1853 +
           (C6210 * C730 - C1009 * C725) * C1921 +
           (C6210 * C918 - C1009 * C915) * C1854 +
           (C6210 * C1858 - C1009 * C1856) * C1922 +
           (C6210 * C2041 - C1009 * C2039) * C1855) *
              C6249 * C6332 * C436 +
          ((C1397 - C1396) * C1920 + (C1491 - C1490) * C1853 +
           (C1009 * C1588 - C6210 * C1591) * C1921 +
           (C1009 * C1767 - C6210 * C1769) * C1854 +
           (C1009 * C2128 - C6210 * C2129) * C1922 +
           (C1009 * C2296 - C6210 * C2297) * C1855) *
              C6249 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] += (-std::pow(Pi, 2.5) *
                  (((C1006 * C123 - C1045 * C80 + C1007 * C477 - C1046 * C441 +
                     C1008 * C1048 - C1047 * C1011) *
                        C165 +
                    (C1006 * C355 - C1045 * C321 + C1007 * C663 - C1046 * C631 +
                     C1008 * C1227 - C1047 * C1197) *
                        C6260) *
                       C6210 * C6332 * C436 +
                   ((C1045 * C441 - C1006 * C477 + C1046 * C1011 -
                     C1007 * C1048 + C1047 * C1283 - C1008 * C1329) *
                        C165 +
                    (C1045 * C631 - C1006 * C663 + C1046 * C1197 -
                     C1007 * C1227 + C1047 * C1487 - C1008 * C1519) *
                        C6260) *
                       C6210 * C6332 * C437) *
                  C6334) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C6249 * C123 - C122 * C80) * C165 +
                     (C6249 * C355 - C122 * C321) * C6260) *
                        C65 +
                    ((C132 - C133) * C165 + (C360 - C361) * C6260) * C66 +
                    ((C136 - C137) * C165 + (C362 - C363) * C6260) * C67) *
                       C6332 * C436 +
                   (((C122 * C441 - C6249 * C477) * C165 +
                     (C122 * C631 - C6249 * C663) * C6260) *
                        C65 +
                    ((C122 * C440 - C6249 * C478) * C165 +
                     (C122 * C632 - C6249 * C664) * C6260) *
                        C66 +
                    ((C122 * C439 - C6249 * C479) * C165 +
                     (C122 * C633 - C6249 * C665) * C6260) *
                        C67) *
                       C6332 * C437) *
                  C6334) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C6249 * C123 - C122 * C80) * C1920 +
                    (C6249 * C355 - C122 * C321) * C1853 +
                    (C6249 * C761 - C122 * C725) * C1921 +
                    (C6249 * C947 - C122 * C915) * C1854 +
                    (C6249 * C1890 - C122 * C1856) * C1922 +
                    (C6249 * C2069 - C122 * C2039) * C1855) *
                       C6210 * C6332 * C436 +
                   ((C122 * C441 - C6249 * C477) * C1920 +
                    (C122 * C631 - C6249 * C663) * C1853 +
                    (C122 * C1588 - C6249 * C1621) * C1921 +
                    (C122 * C1767 - C6249 * C1797) * C1854 +
                    (C122 * C2128 - C6249 * C2158) * C1922 +
                    (C122 * C2296 - C6249 * C2324) * C1855) *
                       C6210 * C6332 * C437) *
                  C6334) /
                     (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C1006 +
           C1560 * C1007 + C1561 * C1008) *
              C6210 * C6332 * C436 -
          ((C165 * C1357 - C389 * C1283 - C165 * C1487 + C6260 * C1546) *
               C1008 +
           C1561 * C1007 + C1560 * C1006) *
              C6210 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C6249 *
               C65 +
           C409 * C66 + C410 * C67) *
              C6332 * C436 -
          ((C165 * C511 - C389 * C439 - C165 * C633 + C6260 * C692) * C6249 *
               C67 +
           (C165 * C510 - C389 * C440 - C165 * C632 + C6260 * C693) * C6249 *
               C66 +
           (C165 * C509 - C389 * C441 - C165 * C631 + C6260 * C694) * C6249 *
               C65) *
              C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C1920 * C166 - C2097 * C80 - C1920 * C321 + C1853 * C390 +
           C1921 * C793 - C2098 * C725 - C1921 * C915 + C1854 * C978 +
           C1922 * C1923 - C2099 * C1856 - C1922 * C2039 + C1855 * C2100) *
              C6249 * C6210 * C6332 * C436 -
          (C1922 * C2186 - C2099 * C2128 - C1922 * C2296 + C1855 * C2351 +
           C1921 * C1651 - C2098 * C1588 - C1921 * C1767 + C1854 * C1826 +
           C1920 * C509 - C2097 * C441 - C1920 * C631 + C1853 * C694) *
              C6249 * C6210 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (-std::pow(Pi, 2.5) *
         (((C1009 * C84 - C1010 * C80 - C1009 * C85 + C6210 * C92) * C6260 *
               C1006 +
           C1302 * C1007 + C1303 * C1008) *
              C721 -
          ((C1009 * C1589 - C1010 * C1587 - C1009 * C1590 + C6210 * C1593) *
               C6260 * C1008 +
           (C1009 * C1591 - C1010 * C1588 - C1009 * C1592 + C6210 * C1594) *
               C6260 * C1007 +
           (C1009 * C730 - C1010 * C725 - C1009 * C731 + C6210 * C734) * C6260 *
               C1006) *
              C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C74 * C84 - C75 * C80 - C74 * C85 + C65 * C92 + C76 * C86 -
           C77 * C81 - C76 * C87 + C66 * C93 + C78 * C88 - C79 * C82 -
           C78 * C89 + C67 * C94) *
              C6260 * C6249 * C721 -
          (C78 * C726 - C79 * C723 - C78 * C727 + C67 * C732 + C76 * C728 -
           C77 * C724 - C76 * C729 + C66 * C733 + C74 * C730 - C75 * C725 -
           C74 * C731 + C65 * C734) *
              C6260 * C6249 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1009 * C84 - C1010 * C80 - C1009 * C85 + C6210 * C92) * C1853 +
           C2395 * C1854 + C2396 * C1855) *
              C6249 * C721 -
          ((C1009 * C2379 - C1010 * C2378 - C1009 * C2380 + C6210 * C2381) *
               C1855 +
           C2396 * C1854 + C2395 * C1853) *
              C6249 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (-std::pow(Pi, 2.5) *
         (((C1006 * C123 - C1045 * C80 + C1007 * C477 - C1046 * C441 +
            C1008 * C1048 - C1047 * C1011) *
               C1009 +
           (C1006 * C127 - C1045 * C85 + C1007 * C480 - C1046 * C447 +
            C1008 * C1050 - C1047 * C1014) *
               C6210) *
              C6260 * C721 +
          ((C1045 * C725 - C1006 * C761 + C1046 * C1588 - C1007 * C1621 +
            C1047 * C1587 - C1008 * C1622) *
               C1009 +
           (C1045 * C731 - C1006 * C764 + C1046 * C1592 - C1007 * C1623 +
            C1047 * C1590 - C1008 * C1624) *
               C6210) *
              C6260 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C6249 * C123 - C122 * C80) * C74 +
           (C6249 * C127 - C122 * C85) * C65 + (C132 - C133) * C76 +
           (C134 - C135) * C66 + (C136 - C137) * C78 + (C138 - C139) * C67) *
              C6260 * C721 +
          ((C122 * C725 - C6249 * C761) * C74 +
           (C122 * C731 - C6249 * C764) * C65 +
           (C122 * C724 - C6249 * C762) * C76 +
           (C122 * C729 - C6249 * C765) * C66 +
           (C122 * C723 - C6249 * C763) * C78 +
           (C122 * C727 - C6249 * C766) * C67) *
              C6260 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6249 * C123 - C122 * C80) * C1009 +
            (C6249 * C127 - C122 * C85) * C6210) *
               C1853 +
           ((C2425 - C2426) * C1009 + (C2427 - C2428) * C6210) * C1854 +
           ((C2429 - C2430) * C1009 + (C2431 - C2432) * C6210) * C1855) *
              C721 +
          (((C2426 - C2425) * C1009 + (C2428 - C2427) * C6210) * C1853 +
           ((C2430 - C2429) * C1009 + (C2432 - C2431) * C6210) * C1854 +
           ((C122 * C2378 - C6249 * C2422) * C1009 +
            (C122 * C2380 - C6249 * C2423) * C6210) *
               C1855) *
              C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C6260 * C166 - C165 * C80) * C1009 +
            (C6260 * C170 - C165 * C85) * C6210) *
               C1006 +
           ((C1360 - C1361) * C1009 + (C1362 - C1363) * C6210) * C1007 +
           ((C1364 - C1365) * C1009 + (C1366 - C1367) * C6210) * C1008) *
              C721 +
          (((C165 * C725 - C6260 * C793) * C1009 +
            (C165 * C731 - C6260 * C796) * C6210) *
               C1006 +
           ((C165 * C1588 - C6260 * C1651) * C1009 +
            (C165 * C1592 - C6260 * C1653) * C6210) *
               C1007 +
           ((C165 * C1587 - C6260 * C1652) * C1009 +
            (C165 * C1590 - C6260 * C1654) * C6210) *
               C1008) *
              C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C6260 * C166 - C165 * C80) * C74 +
           (C6260 * C170 - C165 * C85) * C65 + (C175 - C176) * C76 +
           (C177 - C178) * C66 + (C179 - C180) * C78 + (C181 - C182) * C67) *
              C6249 * C721 +
          ((C165 * C725 - C6260 * C793) * C74 +
           (C165 * C731 - C6260 * C796) * C65 +
           (C165 * C724 - C6260 * C794) * C76 +
           (C165 * C729 - C6260 * C797) * C66 +
           (C165 * C723 - C6260 * C795) * C78 +
           (C165 * C727 - C6260 * C798) * C67) *
              C6249 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1853 * C166 - C1920 * C80 + C1854 * C793 - C1921 * C725 +
            C1855 * C1923 - C1922 * C1856) *
               C1009 +
           (C1853 * C170 - C1920 * C85 + C1854 * C796 - C1921 * C731 +
            C1855 * C1925 - C1922 * C1859) *
               C6210) *
              C6249 * C721 +
          ((C1920 * C725 - C1853 * C793 + C1921 * C1856 - C1854 * C1923 +
            C1922 * C2378 - C1855 * C2458) *
               C1009 +
           (C1920 * C731 - C1853 * C796 + C1921 * C1859 - C1854 * C1925 +
            C1922 * C2380 - C1855 * C2459) *
               C6210) *
              C6249 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (-std::pow(Pi, 2.5) *
         (((C6210 * C84 - C1009 * C80) * C1045 +
           (C6210 * C212 - C1009 * C208) * C1006 + (C1396 - C1397) * C1046 +
           (C1398 - C1399) * C1007 + (C1400 - C1401) * C1047 +
           (C1402 - C1403) * C1008) *
              C6260 * C721 +
          ((C1009 * C725 - C6210 * C730) * C1045 +
           (C1009 * C825 - C6210 * C828) * C1006 +
           (C1009 * C1588 - C6210 * C1591) * C1046 +
           (C1009 * C1681 - C6210 * C1683) * C1007 +
           (C1009 * C1587 - C6210 * C1589) * C1047 +
           (C1009 * C1682 - C6210 * C1684) * C1008) *
              C6260 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 + C67 * C88 -
            C78 * C82) *
               C122 +
           (C65 * C212 - C74 * C208 + C66 * C213 - C76 * C209 + C67 * C214 -
            C78 * C210) *
               C6249) *
              C6260 * C721 +
          ((C74 * C725 - C65 * C730 + C76 * C724 - C66 * C728 + C78 * C723 -
            C67 * C726) *
               C122 +
           (C74 * C825 - C65 * C828 + C76 * C826 - C66 * C829 + C78 * C827 -
            C67 * C830) *
               C6249) *
              C6260 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6210 * C84 - C1009 * C80) * C122 +
            (C6210 * C212 - C1009 * C208) * C6249) *
               C1853 +
           ((C2489 - C2490) * C122 + (C2491 - C2492) * C6249) * C1854 +
           ((C2493 - C2494) * C122 + (C2495 - C2496) * C6249) * C1855) *
              C721 +
          (((C2490 - C2489) * C122 + (C2492 - C2491) * C6249) * C1853 +
           ((C2494 - C2493) * C122 + (C2496 - C2495) * C6249) * C1854 +
           ((C1009 * C2378 - C6210 * C2379) * C122 +
            (C1009 * C2486 - C6210 * C2487) * C6249) *
               C1855) *
              C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (-std::pow(Pi, 2.5) *
         ((C1045 * C123 - C1138 * C80 - C1045 * C208 + C1006 * C243 +
           C1046 * C477 - C1139 * C441 - C1046 * C541 + C1007 * C575 +
           C1047 * C1048 - C1140 * C1011 - C1047 * C1108 + C1008 * C1141) *
              C6210 * C6260 * C721 -
          (C1047 * C1622 - C1140 * C1587 - C1047 * C1682 + C1008 * C1711 +
           C1046 * C1621 - C1139 * C1588 - C1046 * C1681 + C1007 * C1712 +
           C1045 * C761 - C1138 * C725 - C1045 * C825 + C1006 * C859) *
              C6210 * C6260 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C6249 * C243) * C65 +
           C260 * C66 + C261 * C67) *
              C6260 * C721 -
          ((C122 * C763 - C242 * C723 - C122 * C827 + C6249 * C857) * C67 +
           (C122 * C762 - C242 * C724 - C122 * C826 + C6249 * C858) * C66 +
           (C122 * C761 - C242 * C725 - C122 * C825 + C6249 * C859) * C65) *
              C6260 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C6249 * C243) * C6210 *
               C1853 +
           C2538 * C1854 + C2539 * C1855) *
              C721 -
          ((C122 * C2422 - C242 * C2378 - C122 * C2486 + C6249 * C2522) *
               C6210 * C1855 +
           C2539 * C1854 + C2538 * C1853) *
              C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q));
    d2eeyz[8] += (-std::pow(Pi, 2.5) *
                  (((C6260 * C166 - C165 * C80) * C1045 +
                    (C6260 * C287 - C165 * C208) * C1006 +
                    (C1360 - C1361) * C1046 + (C1458 - C1459) * C1007 +
                    (C1364 - C1365) * C1047 + (C1460 - C1461) * C1008) *
                       C6210 * C721 +
                   ((C165 * C725 - C6260 * C793) * C1045 +
                    (C165 * C825 - C6260 * C886) * C1006 +
                    (C165 * C1588 - C6260 * C1651) * C1046 +
                    (C165 * C1681 - C6260 * C1739) * C1007 +
                    (C165 * C1587 - C6260 * C1652) * C1047 +
                    (C165 * C1682 - C6260 * C1740) * C1008) *
                       C6210 * C722) *
                  C6333 * C6334) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C6260 * C166 - C165 * C80) * C122 +
                     (C6260 * C287 - C165 * C208) * C6249) *
                        C65 +
                    ((C175 - C176) * C122 + (C292 - C293) * C6249) * C66 +
                    ((C179 - C180) * C122 + (C294 - C295) * C6249) * C67) *
                       C721 +
                   (((C165 * C725 - C6260 * C793) * C122 +
                     (C165 * C825 - C6260 * C886) * C6249) *
                        C65 +
                    ((C165 * C724 - C6260 * C794) * C122 +
                     (C165 * C826 - C6260 * C887) * C6249) *
                        C66 +
                    ((C165 * C723 - C6260 * C795) * C122 +
                     (C165 * C827 - C6260 * C888) * C6249) *
                        C67) *
                       C722) *
                  C6333 * C6334) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1853 * C166 - C1920 * C80 + C1854 * C793 - C1921 * C725 +
                     C1855 * C1923 - C1922 * C1856) *
                        C122 +
                    (C1853 * C287 - C1920 * C208 + C1854 * C886 - C1921 * C825 +
                     C1855 * C2011 - C1922 * C1953) *
                        C6249) *
                       C6210 * C721 +
                   ((C1920 * C725 - C1853 * C793 + C1921 * C1856 -
                     C1854 * C1923 + C1922 * C2378 - C1855 * C2458) *
                        C122 +
                    (C1920 * C825 - C1853 * C886 + C1921 * C1953 -
                     C1854 * C2011 + C1922 * C2486 - C1855 * C2565) *
                        C6249) *
                       C6210 * C722) *
                  C6333 * C6334) /
                     (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C6210 * C84 - C1009 * C80) * C165 +
            (C6210 * C325 - C1009 * C321) * C6260) *
               C1006 +
           ((C1396 - C1397) * C165 + (C1490 - C1491) * C6260) * C1007 +
           ((C1400 - C1401) * C165 + (C1492 - C1493) * C6260) * C1008) *
              C721 +
          (((C1009 * C725 - C6210 * C730) * C165 +
            (C1009 * C915 - C6210 * C918) * C6260) *
               C1006 +
           ((C1009 * C1588 - C6210 * C1591) * C165 +
            (C1009 * C1767 - C6210 * C1769) * C6260) *
               C1007 +
           ((C1009 * C1587 - C6210 * C1589) * C165 +
            (C1009 * C1768 - C6210 * C1770) * C6260) *
               C1008) *
              C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 + C67 * C88 -
            C78 * C82) *
               C165 +
           (C65 * C325 - C74 * C321 + C66 * C326 - C76 * C322 + C67 * C327 -
            C78 * C323) *
               C6260) *
              C6249 * C721 +
          ((C74 * C725 - C65 * C730 + C76 * C724 - C66 * C728 + C78 * C723 -
            C67 * C726) *
               C165 +
           (C74 * C915 - C65 * C918 + C76 * C916 - C66 * C919 + C78 * C917 -
            C67 * C920) *
               C6260) *
              C6249 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6210 * C84 - C1009 * C80) * C1920 +
           (C6210 * C325 - C1009 * C321) * C1853 + (C2489 - C2490) * C1921 +
           (C2595 - C2596) * C1854 + (C2493 - C2494) * C1922 +
           (C2597 - C2598) * C1855) *
              C6249 * C721 +
          ((C2490 - C2489) * C1920 + (C2596 - C2595) * C1853 +
           (C2494 - C2493) * C1921 + (C2598 - C2597) * C1854 +
           (C1009 * C2378 - C6210 * C2379) * C1922 +
           (C1009 * C2592 - C6210 * C2593) * C1855) *
              C6249 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q));
    d2eezy[8] += (-std::pow(Pi, 2.5) *
                  (((C1006 * C123 - C1045 * C80 + C1007 * C477 - C1046 * C441 +
                     C1008 * C1048 - C1047 * C1011) *
                        C165 +
                    (C1006 * C355 - C1045 * C321 + C1007 * C663 - C1046 * C631 +
                     C1008 * C1227 - C1047 * C1197) *
                        C6260) *
                       C6210 * C721 +
                   ((C1045 * C725 - C1006 * C761 + C1046 * C1588 -
                     C1007 * C1621 + C1047 * C1587 - C1008 * C1622) *
                        C165 +
                    (C1045 * C915 - C1006 * C947 + C1046 * C1767 -
                     C1007 * C1797 + C1047 * C1768 - C1008 * C1798) *
                        C6260) *
                       C6210 * C722) *
                  C6333 * C6334) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C6249 * C123 - C122 * C80) * C165 +
                     (C6249 * C355 - C122 * C321) * C6260) *
                        C65 +
                    ((C132 - C133) * C165 + (C360 - C361) * C6260) * C66 +
                    ((C136 - C137) * C165 + (C362 - C363) * C6260) * C67) *
                       C721 +
                   (((C122 * C725 - C6249 * C761) * C165 +
                     (C122 * C915 - C6249 * C947) * C6260) *
                        C65 +
                    ((C122 * C724 - C6249 * C762) * C165 +
                     (C122 * C916 - C6249 * C948) * C6260) *
                        C66 +
                    ((C122 * C723 - C6249 * C763) * C165 +
                     (C122 * C917 - C6249 * C949) * C6260) *
                        C67) *
                       C722) *
                  C6333 * C6334) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C6249 * C123 - C122 * C80) * C1920 +
                    (C6249 * C355 - C122 * C321) * C1853 +
                    (C2425 - C2426) * C1921 + (C2626 - C2627) * C1854 +
                    (C2429 - C2430) * C1922 + (C2628 - C2629) * C1855) *
                       C6210 * C721 +
                   ((C2426 - C2425) * C1920 + (C2627 - C2626) * C1853 +
                    (C2430 - C2429) * C1921 + (C2629 - C2628) * C1854 +
                    (C122 * C2378 - C6249 * C2422) * C1922 +
                    (C122 * C2592 - C6249 * C2624) * C1855) *
                       C6210 * C722) *
                  C6333 * C6334) /
                     (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (-std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C1006 +
           C1560 * C1007 + C1561 * C1008) *
              C6210 * C721 -
          ((C165 * C1652 - C389 * C1587 - C165 * C1768 + C6260 * C1825) *
               C1008 +
           (C165 * C1651 - C389 * C1588 - C165 * C1767 + C6260 * C1826) *
               C1007 +
           (C165 * C793 - C389 * C725 - C165 * C915 + C6260 * C978) * C1006) *
              C6210 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C6249 *
               C65 +
           C409 * C66 + C410 * C67) *
              C721 -
          ((C165 * C795 - C389 * C723 - C165 * C917 + C6260 * C976) * C6249 *
               C67 +
           (C165 * C794 - C389 * C724 - C165 * C916 + C6260 * C977) * C6249 *
               C66 +
           (C165 * C793 - C389 * C725 - C165 * C915 + C6260 * C978) * C6249 *
               C65) *
              C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C1920 * C166 - C2097 * C80 - C1920 * C321 + C1853 * C390 +
           C1921 * C793 - C2098 * C725 - C1921 * C915 + C1854 * C978 +
           C1922 * C1923 - C2099 * C1856 - C1922 * C2039 + C1855 * C2100) *
              C6249 * C6210 * C721 -
          (C1922 * C2458 - C2099 * C2378 - C1922 * C2592 + C1855 * C2655 +
           C1921 * C1923 - C2098 * C1856 - C1921 * C2039 + C1854 * C2100 +
           C1920 * C793 - C2097 * C725 - C1920 * C915 + C1853 * C978) *
              C6249 * C6210 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2694 * C84 - C2695 * C80 - C2694 * C85 + C2690 * C92 +
            C2696 * C86 - C2697 * C81 - C2696 * C87 + C2691 * C93) *
               C3703 +
           (C2694 * C730 - C2695 * C725 - C2694 * C731 + C2690 * C734 +
            C2696 * C728 - C2697 * C724 - C2696 * C729 + C2691 * C733) *
               C3704) *
              C6249 * C6332 * C6333 * C72 -
          ((C2696 * C726 - C2697 * C723 - C2696 * C727 + C2691 * C732 +
            C2694 * C728 - C2695 * C724 - C2694 * C729 + C2690 * C733) *
               C3704 +
           (C2696 * C88 - C2697 * C82 - C2696 * C89 + C2691 * C94 +
            C2694 * C86 - C2695 * C81 - C2694 * C87 + C2690 * C93) *
               C3703) *
              C6249 * C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6249 * C123 - C122 * C80) * C2694 +
                     (C6249 * C127 - C122 * C85) * C2690 +
                     (C132 - C133) * C2696 + (C134 - C135) * C2691) *
                        C3703 +
                    ((C2425 - C2426) * C2694 + (C2427 - C2428) * C2690 +
                     (C3740 - C3741) * C2696 + (C3742 - C3743) * C2691) *
                        C3704) *
                       C6332 * C6333 * C72 +
                   (((C133 - C132) * C2694 + (C135 - C134) * C2690 +
                     (C137 - C136) * C2696 + (C139 - C138) * C2691) *
                        C3703 +
                    ((C3741 - C3740) * C2694 + (C3743 - C3742) * C2690 +
                     (C122 * C723 - C6249 * C763) * C2696 +
                     (C122 * C727 - C6249 * C766) * C2691) *
                        C3704) *
                       C6332 * C6333 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3703 * C166 - C3777 * C80 + C3704 * C793 - C3778 * C725) * C2694 +
           (C3703 * C170 - C3777 * C85 + C3704 * C796 - C3778 * C731) * C2690 +
           (C3780 - C3781 + C3782 - C3783) * C2696 +
           (C3784 - C3785 + C3786 - C3787) * C2691) *
              C6249 * C6332 * C6333 * C72 +
          ((C3781 - C3780 + C3783 - C3782) * C2694 +
           (C3785 - C3784 + C3787 - C3786) * C2690 +
           (C3777 * C82 - C3703 * C168 + C3778 * C723 - C3704 * C795) * C2696 +
           (C3777 * C89 - C3703 * C172 + C3778 * C727 - C3704 * C798) * C2691) *
              C6249 * C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2690 * C84 - C2694 * C80 + C2691 * C86 - C2696 * C81) * C122 +
            (C2690 * C212 - C2694 * C208 + C2691 * C213 - C2696 * C209) *
                C6249) *
               C3703 +
           ((C2690 * C730 - C2694 * C725 + C2691 * C728 - C2696 * C724) * C122 +
            (C2690 * C828 - C2694 * C825 + C2691 * C829 - C2696 * C826) *
                C6249) *
               C3704) *
              C6332 * C6333 * C72 +
          (((C2694 * C81 - C2690 * C86 + C2696 * C82 - C2691 * C88) * C122 +
            (C2694 * C209 - C2690 * C213 + C2696 * C210 - C2691 * C214) *
                C6249) *
               C3703 +
           ((C2694 * C724 - C2690 * C728 + C2696 * C723 - C2691 * C726) * C122 +
            (C2694 * C826 - C2690 * C829 + C2696 * C827 - C2691 * C830) *
                C6249) *
               C3704) *
              C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C122 * C123 - C242 * C80 - C122 * C208 + C6249 * C243) * C2690 +
            C260 * C2691) *
               C3703 +
           (C2536 * C2690 + C3862 * C2691) * C3704) *
              C6332 * C6333 * C72 -
          (((C122 * C763 - C242 * C723 - C122 * C827 + C6249 * C857) * C2691 +
            C3862 * C2690) *
               C3704 +
           (C261 * C2691 + C260 * C2690) * C3703) *
              C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3703 * C166 - C3777 * C80 + C3704 * C793 - C3778 * C725) * C122 +
            (C3703 * C287 - C3777 * C208 + C3704 * C886 - C3778 * C825) *
                C6249) *
               C2690 +
           ((C3780 - C3781 + C3782 - C3783) * C122 +
            (C3897 - C3898 + C3899 - C3900) * C6249) *
               C2691) *
              C6332 * C6333 * C72 +
          (((C3781 - C3780 + C3783 - C3782) * C122 +
            (C3898 - C3897 + C3900 - C3899) * C6249) *
               C2690 +
           ((C3777 * C82 - C3703 * C168 + C3778 * C723 - C3704 * C795) * C122 +
            (C3777 * C210 - C3703 * C289 + C3778 * C827 - C3704 * C888) *
                C6249) *
               C2691) *
              C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2690 * C84 - C2694 * C80 + C2691 * C86 - C2696 * C81) * C3777 +
           (C2690 * C325 - C2694 * C321 + C2691 * C326 - C2696 * C322) * C3703 +
           (C2690 * C730 - C2694 * C725 + C2691 * C728 - C2696 * C724) * C3778 +
           (C2690 * C918 - C2694 * C915 + C2691 * C919 - C2696 * C916) *
               C3704) *
              C6249 * C6332 * C6333 * C72 +
          ((C2694 * C81 - C2690 * C86 + C2696 * C82 - C2691 * C88) * C3777 +
           (C2694 * C322 - C2690 * C326 + C2696 * C323 - C2691 * C327) * C3703 +
           (C2694 * C724 - C2690 * C728 + C2696 * C723 - C2691 * C726) * C3778 +
           (C2694 * C916 - C2690 * C919 + C2696 * C917 - C2691 * C920) *
               C3704) *
              C6249 * C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C6249 * C123 - C122 * C80) * C3777 +
                     (C6249 * C355 - C122 * C321) * C3703 +
                     (C2425 - C2426) * C3778 + (C2626 - C2627) * C3704) *
                        C2690 +
                    ((C132 - C133) * C3777 + (C360 - C361) * C3703 +
                     (C3740 - C3741) * C3778 + (C3969 - C3970) * C3704) *
                        C2691) *
                       C6332 * C6333 * C72 +
                   (((C133 - C132) * C3777 + (C361 - C360) * C3703 +
                     (C3741 - C3740) * C3778 + (C3970 - C3969) * C3704) *
                        C2690 +
                    ((C137 - C136) * C3777 + (C363 - C362) * C3703 +
                     (C122 * C723 - C6249 * C763) * C3778 +
                     (C122 * C917 - C6249 * C949) * C3704) *
                        C2691) *
                       C6332 * C6333 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3777 * C166 - C4004 * C80 - C3777 * C321 + C3703 * C390 +
            C3778 * C793 - C4005 * C725 - C3778 * C915 + C3704 * C978) *
               C6249 * C2690 +
           (C4019 + C4020) * C6249 * C2691) *
              C6332 * C6333 * C72 -
          ((C3778 * C795 - C4005 * C723 - C3778 * C917 + C3704 * C976 +
            C3777 * C168 - C4004 * C82 - C3777 * C323 + C3703 * C392) *
               C6249 * C2691 +
           (C4020 + C4019) * C6249 * C2690) *
              C6332 * C6333 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2694 * C84 - C2695 * C80 - C2694 * C85 + C2690 * C92 +
            C2696 * C86 - C2697 * C81 - C2696 * C87 + C2691 * C93) *
               C3703 +
           (C2694 * C730 - C2695 * C725 - C2694 * C731 + C2690 * C734 +
            C2696 * C728 - C2697 * C724 - C2696 * C729 + C2691 * C733) *
               C3704) *
              C6249 * C6332 * C436 -
          ((C2696 * C3382 - C2697 * C3381 - C2696 * C3383 + C2691 * C3384 +
            C2694 * C1591 - C2695 * C1588 - C2694 * C1592 + C2690 * C1594) *
               C3704 +
           (C3063 + C3062) * C3703) *
              C6249 * C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6249 * C123 - C122 * C80) * C2694 +
                      (C6249 * C127 - C122 * C85) * C2690 +
                      (C132 - C133) * C2696 + (C134 - C135) * C2691) *
                         C3703 +
                     ((C2425 - C2426) * C2694 + (C2427 - C2428) * C2690 +
                      (C3740 - C3741) * C2696 + (C3742 - C3743) * C2691) *
                         C3704) *
                        C6332 * C436 +
                    (((C122 * C441 - C6249 * C477) * C2694 +
                      (C122 * C447 - C6249 * C480) * C2690 +
                      (C122 * C440 - C6249 * C478) * C2696 +
                      (C122 * C445 - C6249 * C481) * C2691) *
                         C3703 +
                     ((C122 * C1588 - C6249 * C1621) * C2694 +
                      (C122 * C1592 - C6249 * C1623) * C2690 +
                      (C122 * C3381 - C6249 * C3419) * C2696 +
                      (C122 * C3383 - C6249 * C3420) * C2691) *
                         C3704) *
                        C6332 * C437) *
                   C6334) /
                  (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3703 * C166 - C3777 * C80 + C3704 * C793 - C3778 * C725) * C2694 +
           (C3703 * C170 - C3777 * C85 + C3704 * C796 - C3778 * C731) * C2690 +
           (C3780 - C3781 + C3782 - C3783) * C2696 +
           (C3784 - C3785 + C3786 - C3787) * C2691) *
              C6249 * C6332 * C436 +
          ((C3777 * C441 - C3703 * C509 + C3778 * C1588 - C3704 * C1651) *
               C2694 +
           (C3777 * C447 - C3703 * C512 + C3778 * C1592 - C3704 * C1653) *
               C2690 +
           (C3777 * C440 - C3703 * C510 + C3778 * C3381 - C3704 * C3455) *
               C2696 +
           (C3777 * C445 - C3703 * C513 + C3778 * C3383 - C3704 * C3456) *
               C2691) *
              C6249 * C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2690 * C84 - C2694 * C80 + C2691 * C86 - C2696 * C81) * C122 +
            (C2690 * C212 - C2694 * C208 + C2691 * C213 - C2696 * C209) *
                C6249) *
               C3703 +
           ((C2690 * C730 - C2694 * C725 + C2691 * C728 - C2696 * C724) * C122 +
            (C2690 * C828 - C2694 * C825 + C2691 * C829 - C2696 * C826) *
                C6249) *
               C3704) *
              C6332 * C436 +
          (((C3167 - C3166 + C3169 - C3168) * C122 +
            (C3171 - C3170 + C3173 - C3172) * C6249) *
               C3703 +
           ((C2694 * C1588 - C2690 * C1591 + C2696 * C3381 - C2691 * C3382) *
                C122 +
            (C2694 * C1681 - C2690 * C1683 + C2696 * C3491 - C2691 * C3492) *
                C6249) *
               C3704) *
              C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C122 * C123 - C242 * C80 - C122 * C208 + C6249 * C243) * C2690 +
            C260 * C2691) *
               C3703 +
           (C2536 * C2690 + C3862 * C2691) * C3704) *
              C6332 * C436 -
          (((C122 * C3419 - C242 * C3381 - C122 * C3491 + C6249 * C3527) *
                C2691 +
            (C122 * C1621 - C242 * C1588 - C122 * C1681 + C6249 * C1712) *
                C2690) *
               C3704 +
           ((C122 * C478 - C242 * C440 - C122 * C542 + C6249 * C574) * C2691 +
            (C122 * C477 - C242 * C441 - C122 * C541 + C6249 * C575) * C2690) *
               C3703) *
              C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3703 * C166 - C3777 * C80 + C3704 * C793 - C3778 * C725) * C122 +
            (C3703 * C287 - C3777 * C208 + C3704 * C886 - C3778 * C825) *
                C6249) *
               C2690 +
           ((C3780 - C3781 + C3782 - C3783) * C122 +
            (C3897 - C3898 + C3899 - C3900) * C6249) *
               C2691) *
              C6332 * C436 +
          (((C3777 * C441 - C3703 * C509 + C3778 * C1588 - C3704 * C1651) *
                C122 +
            (C3777 * C541 - C3703 * C602 + C3778 * C1681 - C3704 * C1739) *
                C6249) *
               C2690 +
           ((C3777 * C440 - C3703 * C510 + C3778 * C3381 - C3704 * C3455) *
                C122 +
            (C3777 * C542 - C3703 * C603 + C3778 * C3491 - C3704 * C3562) *
                C6249) *
               C2691) *
              C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2690 * C84 - C2694 * C80 + C2691 * C86 - C2696 * C81) * C3777 +
           (C2690 * C325 - C2694 * C321 + C2691 * C326 - C2696 * C322) * C3703 +
           (C2690 * C730 - C2694 * C725 + C2691 * C728 - C2696 * C724) * C3778 +
           (C2690 * C918 - C2694 * C915 + C2691 * C919 - C2696 * C916) *
               C3704) *
              C6249 * C6332 * C436 +
          ((C3167 - C3166 + C3169 - C3168) * C3777 +
           (C3277 - C3276 + C3279 - C3278) * C3703 +
           (C2694 * C1588 - C2690 * C1591 + C2696 * C3381 - C2691 * C3382) *
               C3778 +
           (C2694 * C1767 - C2690 * C1769 + C2696 * C3597 - C2691 * C3598) *
               C3704) *
              C6249 * C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6249 * C123 - C122 * C80) * C3777 +
                      (C6249 * C355 - C122 * C321) * C3703 +
                      (C2425 - C2426) * C3778 + (C2626 - C2627) * C3704) *
                         C2690 +
                     ((C132 - C133) * C3777 + (C360 - C361) * C3703 +
                      (C3740 - C3741) * C3778 + (C3969 - C3970) * C3704) *
                         C2691) *
                        C6332 * C436 +
                    (((C122 * C441 - C6249 * C477) * C3777 +
                      (C122 * C631 - C6249 * C663) * C3703 +
                      (C122 * C1588 - C6249 * C1621) * C3778 +
                      (C122 * C1767 - C6249 * C1797) * C3704) *
                         C2690 +
                     ((C122 * C440 - C6249 * C478) * C3777 +
                      (C122 * C632 - C6249 * C664) * C3703 +
                      (C122 * C3381 - C6249 * C3419) * C3778 +
                      (C122 * C3597 - C6249 * C3633) * C3704) *
                         C2691) *
                        C6332 * C437) *
                   C6334) /
                  (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3777 * C166 - C4004 * C80 - C3777 * C321 + C3703 * C390 +
            C3778 * C793 - C4005 * C725 - C3778 * C915 + C3704 * C978) *
               C6249 * C2690 +
           (C4019 + C4020) * C6249 * C2691) *
              C6332 * C436 -
          ((C3778 * C3455 - C4005 * C3381 - C3778 * C3597 + C3704 * C3668 +
            C3777 * C510 - C4004 * C440 - C3777 * C632 + C3703 * C693) *
               C6249 * C2691 +
           (C3778 * C1651 - C4005 * C1588 - C3778 * C1767 + C3704 * C1826 +
            C3777 * C509 - C4004 * C441 - C3777 * C631 + C3703 * C694) *
               C6249 * C2690) *
              C6332 * C437) *
         C6334) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2694 * C84 - C2695 * C80 - C2694 * C85 + C2690 * C92 +
            C2696 * C86 - C2697 * C81 - C2696 * C87 + C2691 * C93) *
               C3703 +
           (C4373 + C4374) * C3704) *
              C6249 * C721 -
          ((C2696 * C1860 - C2697 * C1857 - C2696 * C1861 + C2691 * C1863 +
            C2694 * C1858 - C2695 * C1856 - C2694 * C1859 + C2690 * C1862) *
               C3704 +
           (C4374 + C4373) * C3703) *
              C6249 * C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6249 * C123 - C122 * C80) * C2694 +
                      (C6249 * C127 - C122 * C85) * C2690 +
                      (C132 - C133) * C2696 + (C134 - C135) * C2691) *
                         C3703 +
                     ((C2425 - C2426) * C2694 + (C2427 - C2428) * C2690 +
                      (C3740 - C3741) * C2696 + (C3742 - C3743) * C2691) *
                         C3704) *
                        C721 +
                    (((C2426 - C2425) * C2694 + (C2428 - C2427) * C2690 +
                      (C3741 - C3740) * C2696 + (C3743 - C3742) * C2691) *
                         C3703 +
                     ((C2430 - C2429) * C2694 + (C2432 - C2431) * C2690 +
                      (C122 * C1857 - C6249 * C1891) * C2696 +
                      (C122 * C1861 - C6249 * C1893) * C2691) *
                         C3704) *
                        C722) *
                   C6333 * C6334) /
                  (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3703 * C166 - C3777 * C80 + C3704 * C793 - C3778 * C725) * C2694 +
           (C3703 * C170 - C3777 * C85 + C3704 * C796 - C3778 * C731) * C2690 +
           (C3780 - C3781 + C3782 - C3783) * C2696 +
           (C3784 - C3785 + C3786 - C3787) * C2691) *
              C6249 * C721 +
          ((C3777 * C725 - C3703 * C793 + C3778 * C1856 - C3704 * C1923) *
               C2694 +
           (C3777 * C731 - C3703 * C796 + C3778 * C1859 - C3704 * C1925) *
               C2690 +
           (C3777 * C724 - C3703 * C794 + C3778 * C1857 - C3704 * C1924) *
               C2696 +
           (C3777 * C729 - C3703 * C797 + C3778 * C1861 - C3704 * C1926) *
               C2691) *
              C6249 * C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2690 * C84 - C2694 * C80 + C2691 * C86 - C2696 * C81) * C122 +
            (C2690 * C212 - C2694 * C208 + C2691 * C213 - C2696 * C209) *
                C6249) *
               C3703 +
           ((C4477 - C4478 + C4479 - C4480) * C122 +
            (C4481 - C4482 + C4483 - C4484) * C6249) *
               C3704) *
              C721 +
          (((C4478 - C4477 + C4480 - C4479) * C122 +
            (C4482 - C4481 + C4484 - C4483) * C6249) *
               C3703 +
           ((C2694 * C1856 - C2690 * C1858 + C2696 * C1857 - C2691 * C1860) *
                C122 +
            (C2694 * C1953 - C2690 * C1955 + C2696 * C1954 - C2691 * C1956) *
                C6249) *
               C3704) *
              C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C122 * C123 - C242 * C80 - C122 * C208 + C6249 * C243) * C2690 +
            C260 * C2691) *
               C3703 +
           (C4519 + C4520) * C3704) *
              C721 -
          (((C122 * C1891 - C242 * C1857 - C122 * C1954 + C6249 * C1984) *
                C2691 +
            C2537 * C2690) *
               C3704 +
           (C4520 + C4519) * C3703) *
              C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3703 * C166 - C3777 * C80 + C3704 * C793 - C3778 * C725) * C122 +
            (C3703 * C287 - C3777 * C208 + C3704 * C886 - C3778 * C825) *
                C6249) *
               C2690 +
           ((C3780 - C3781 + C3782 - C3783) * C122 +
            (C3897 - C3898 + C3899 - C3900) * C6249) *
               C2691) *
              C721 +
          (((C3777 * C725 - C3703 * C793 + C3778 * C1856 - C3704 * C1923) *
                C122 +
            (C3777 * C825 - C3703 * C886 + C3778 * C1953 - C3704 * C2011) *
                C6249) *
               C2690 +
           ((C3777 * C724 - C3703 * C794 + C3778 * C1857 - C3704 * C1924) *
                C122 +
            (C3777 * C826 - C3703 * C887 + C3778 * C1954 - C3704 * C2012) *
                C6249) *
               C2691) *
              C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2690 * C84 - C2694 * C80 + C2691 * C86 - C2696 * C81) * C3777 +
           (C2690 * C325 - C2694 * C321 + C2691 * C326 - C2696 * C322) * C3703 +
           (C4477 - C4478 + C4479 - C4480) * C3778 +
           (C4589 - C4590 + C4591 - C4592) * C3704) *
              C6249 * C721 +
          ((C4478 - C4477 + C4480 - C4479) * C3777 +
           (C4590 - C4589 + C4592 - C4591) * C3703 +
           (C2694 * C1856 - C2690 * C1858 + C2696 * C1857 - C2691 * C1860) *
               C3778 +
           (C2694 * C2039 - C2690 * C2041 + C2696 * C2040 - C2691 * C2042) *
               C3704) *
              C6249 * C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6249 * C123 - C122 * C80) * C3777 +
                      (C6249 * C355 - C122 * C321) * C3703 +
                      (C2425 - C2426) * C3778 + (C2626 - C2627) * C3704) *
                         C2690 +
                     ((C132 - C133) * C3777 + (C360 - C361) * C3703 +
                      (C3740 - C3741) * C3778 + (C3969 - C3970) * C3704) *
                         C2691) *
                        C721 +
                    (((C2426 - C2425) * C3777 + (C2627 - C2626) * C3703 +
                      (C2430 - C2429) * C3778 + (C2629 - C2628) * C3704) *
                         C2690 +
                     ((C3741 - C3740) * C3777 + (C3970 - C3969) * C3703 +
                      (C122 * C1857 - C6249 * C1891) * C3778 +
                      (C122 * C2040 - C6249 * C2070) * C3704) *
                         C2691) *
                        C722) *
                   C6333 * C6334) /
                  (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3777 * C166 - C4004 * C80 - C3777 * C321 + C3703 * C390 +
            C3778 * C793 - C4005 * C725 - C3778 * C915 + C3704 * C978) *
               C6249 * C2690 +
           (C4019 + C4020) * C6249 * C2691) *
              C721 -
          ((C3778 * C1924 - C4005 * C1857 - C3778 * C2040 + C3704 * C2101 +
            C3777 * C794 - C4004 * C724 - C3777 * C916 + C3703 * C977) *
               C6249 * C2691 +
           (C3778 * C1923 - C4005 * C1856 - C3778 * C2039 + C3704 * C2100 +
            C3777 * C793 - C4004 * C725 - C3777 * C915 + C3703 * C978) *
               C6249 * C2690) *
              C722) *
         C6333 * C6334) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C74 * C84 - C75 * C80 - C74 * C85 + C65 * C92 + C76 * C86 -
           C77 * C81 - C76 * C87 + C66 * C93 + C78 * C88 - C79 * C82 -
           C78 * C89 + C67 * C94) *
              C6260 * C6249 * C6332 * C6333 * C72 -
          (C78 * C90 - C79 * C83 - C78 * C91 + C67 * C95 + C76 * C88 -
           C77 * C82 - C76 * C89 + C66 * C94 + C74 * C86 - C75 * C81 -
           C74 * C87 + C65 * C93) *
              C6260 * C6249 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1009 * C84 - C1010 * C80 - C1009 * C85 + C6210 * C92) * C6260 *
               C1006 +
           (C1009 * C446 - C1010 * C441 - C1009 * C447 + C6210 * C450) * C6260 *
               C1007 +
           (C1009 * C1013 - C1010 * C1011 - C1009 * C1014 + C6210 * C1017) *
               C6260 * C1008) *
              C6332 * C6333 * C72 -
          ((C1009 * C1015 - C1010 * C1012 - C1009 * C1016 + C6210 * C1018) *
               C6260 * C1008 +
           (C1009 * C444 - C1010 * C440 - C1009 * C445 + C6210 * C449) * C6260 *
               C1007 +
           (C1009 * C86 - C1010 * C81 - C1009 * C87 + C6210 * C93) * C6260 *
               C1006) *
              C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6249 * C123 - C122 * C80) * C74 +
           (C6249 * C127 - C122 * C85) * C65 + (C132 - C133) * C76 +
           (C134 - C135) * C66 + (C136 - C137) * C78 + (C138 - C139) * C67) *
              C6260 * C6332 * C6333 * C72 +
          ((C133 - C132) * C74 + (C135 - C134) * C65 + (C137 - C136) * C76 +
           (C139 - C138) * C66 + (C122 * C83 - C6249 * C126) * C78 +
           (C122 * C91 - C6249 * C130) * C67) *
              C6260 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1006 * C123 - C1045 * C80 + C1007 * C477 - C1046 * C441 +
            C1008 * C1048 - C1047 * C1011) *
               C1009 +
           (C1006 * C127 - C1045 * C85 + C1007 * C480 - C1046 * C447 +
            C1008 * C1050 - C1047 * C1014) *
               C6210) *
              C6260 * C6332 * C6333 * C72 +
          ((C1045 * C81 - C1006 * C124 + C1046 * C440 - C1007 * C478 +
            C1047 * C1012 - C1008 * C1049) *
               C1009 +
           (C1045 * C87 - C1006 * C128 + C1046 * C445 - C1007 * C481 +
            C1047 * C1016 - C1008 * C1051) *
               C6210) *
              C6260 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6260 * C166 - C165 * C80) * C74 +
           (C6260 * C170 - C165 * C85) * C65 + (C175 - C176) * C76 +
           (C177 - C178) * C66 + (C179 - C180) * C78 + (C181 - C182) * C67) *
              C6249 * C6332 * C6333 * C72 +
          ((C176 - C175) * C74 + (C178 - C177) * C65 + (C180 - C179) * C76 +
           (C182 - C181) * C66 + (C165 * C83 - C6260 * C169) * C78 +
           (C165 * C91 - C6260 * C173) * C67) *
              C6249 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6260 * C166 - C165 * C80) * C1009 +
            (C6260 * C170 - C165 * C85) * C6210) *
               C1006 +
           ((C6260 * C509 - C165 * C441) * C1009 +
            (C6260 * C512 - C165 * C447) * C6210) *
               C1007 +
           ((C6260 * C1078 - C165 * C1011) * C1009 +
            (C6260 * C1080 - C165 * C1014) * C6210) *
               C1008) *
              C6332 * C6333 * C72 +
          (((C176 - C175) * C1009 + (C178 - C177) * C6210) * C1006 +
           ((C165 * C440 - C6260 * C510) * C1009 +
            (C165 * C445 - C6260 * C513) * C6210) *
               C1007 +
           ((C165 * C1012 - C6260 * C1079) * C1009 +
            (C165 * C1016 - C6260 * C1081) * C6210) *
               C1008) *
              C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 +
                      C67 * C88 - C78 * C82) *
                         C122 +
                     (C65 * C212 - C74 * C208 + C66 * C213 - C76 * C209 +
                      C67 * C214 - C78 * C210) *
                         C6249) *
                        C6260 * C6332 * C6333 * C72 +
                    ((C74 * C81 - C65 * C86 + C76 * C82 - C66 * C88 +
                      C78 * C83 - C67 * C90) *
                         C122 +
                     (C74 * C209 - C65 * C213 + C76 * C210 - C66 * C214 +
                      C78 * C211 - C67 * C215) *
                         C6249) *
                        C6260 * C6332 * C6333 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C6210 * C84 - C1009 * C80) * C1045 +
                     (C6210 * C212 - C1009 * C208) * C1006 +
                     (C6210 * C446 - C1009 * C441) * C1046 +
                     (C6210 * C544 - C1009 * C541) * C1007 +
                     (C6210 * C1013 - C1009 * C1011) * C1047 +
                     (C6210 * C1110 - C1009 * C1108) * C1008) *
                        C6260 * C6332 * C6333 * C72 +
                    ((C1009 * C81 - C6210 * C86) * C1045 +
                     (C1009 * C209 - C6210 * C213) * C1006 +
                     (C1009 * C440 - C6210 * C444) * C1046 +
                     (C1009 * C542 - C6210 * C545) * C1007 +
                     (C1009 * C1012 - C6210 * C1015) * C1047 +
                     (C1009 * C1109 - C6210 * C1111) * C1008) *
                        C6260 * C6332 * C6333 * C73)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C6249 * C243) * C65 +
           C260 * C66 + C261 * C67) *
              C6260 * C6332 * C6333 * C72 -
          ((C122 * C126 - C242 * C83 - C122 * C211 + C6249 * C246) * C67 +
           C261 * C66 + C260 * C65) *
              C6260 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1045 * C123 - C1138 * C80 - C1045 * C208 + C1006 * C243 +
           C1046 * C477 - C1139 * C441 - C1046 * C541 + C1007 * C575 +
           C1047 * C1048 - C1140 * C1011 - C1047 * C1108 + C1008 * C1141) *
              C6210 * C6260 * C6332 * C6333 * C72 -
          (C1047 * C1049 - C1140 * C1012 - C1047 * C1109 + C1008 * C1142 +
           C1046 * C478 - C1139 * C440 - C1046 * C542 + C1007 * C574 +
           C1045 * C124 - C1138 * C81 - C1045 * C209 + C1006 * C244) *
              C6210 * C6260 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C6260 * C166 - C165 * C80) * C122 +
                      (C6260 * C287 - C165 * C208) * C6249) *
                         C65 +
                     ((C175 - C176) * C122 + (C292 - C293) * C6249) * C66 +
                     ((C179 - C180) * C122 + (C294 - C295) * C6249) * C67) *
                        C6332 * C6333 * C72 +
                    (((C176 - C175) * C122 + (C293 - C292) * C6249) * C65 +
                     ((C180 - C179) * C122 + (C295 - C294) * C6249) * C66 +
                     ((C165 * C83 - C6260 * C169) * C122 +
                      (C165 * C211 - C6260 * C290) * C6249) *
                         C67) *
                        C6332 * C6333 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C6260 * C166 - C165 * C80) * C1045 +
                     (C6260 * C287 - C165 * C208) * C1006 +
                     (C6260 * C509 - C165 * C441) * C1046 +
                     (C6260 * C602 - C165 * C541) * C1007 +
                     (C6260 * C1078 - C165 * C1011) * C1047 +
                     (C6260 * C1169 - C165 * C1108) * C1008) *
                        C6210 * C6332 * C6333 * C72 +
                    ((C176 - C175) * C1045 + (C293 - C292) * C1006 +
                     (C165 * C440 - C6260 * C510) * C1046 +
                     (C165 * C542 - C6260 * C603) * C1007 +
                     (C165 * C1012 - C6260 * C1079) * C1047 +
                     (C165 * C1109 - C6260 * C1170) * C1008) *
                        C6210 * C6332 * C6333 * C73)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 +
                      C67 * C88 - C78 * C82) *
                         C165 +
                     (C65 * C325 - C74 * C321 + C66 * C326 - C76 * C322 +
                      C67 * C327 - C78 * C323) *
                         C6260) *
                        C6249 * C6332 * C6333 * C72 +
                    ((C74 * C81 - C65 * C86 + C76 * C82 - C66 * C88 +
                      C78 * C83 - C67 * C90) *
                         C165 +
                     (C74 * C322 - C65 * C326 + C76 * C323 - C66 * C327 +
                      C78 * C324 - C67 * C328) *
                         C6260) *
                        C6249 * C6332 * C6333 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C6210 * C84 - C1009 * C80) * C165 +
                      (C6210 * C325 - C1009 * C321) * C6260) *
                         C1006 +
                     ((C6210 * C446 - C1009 * C441) * C165 +
                      (C6210 * C634 - C1009 * C631) * C6260) *
                         C1007 +
                     ((C6210 * C1013 - C1009 * C1011) * C165 +
                      (C6210 * C1199 - C1009 * C1197) * C6260) *
                         C1008) *
                        C6332 * C6333 * C72 +
                    (((C1009 * C81 - C6210 * C86) * C165 +
                      (C1009 * C322 - C6210 * C326) * C6260) *
                         C1006 +
                     ((C1009 * C440 - C6210 * C444) * C165 +
                      (C1009 * C632 - C6210 * C635) * C6260) *
                         C1007 +
                     ((C1009 * C1012 - C6210 * C1015) * C165 +
                      (C1009 * C1198 - C6210 * C1200) * C6260) *
                         C1008) *
                        C6332 * C6333 * C73)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C6249 * C123 - C122 * C80) * C165 +
                      (C6249 * C355 - C122 * C321) * C6260) *
                         C65 +
                     ((C132 - C133) * C165 + (C360 - C361) * C6260) * C66 +
                     ((C136 - C137) * C165 + (C362 - C363) * C6260) * C67) *
                        C6332 * C6333 * C72 +
                    (((C133 - C132) * C165 + (C361 - C360) * C6260) * C65 +
                     ((C137 - C136) * C165 + (C363 - C362) * C6260) * C66 +
                     ((C122 * C83 - C6249 * C126) * C165 +
                      (C122 * C324 - C6249 * C358) * C6260) *
                         C67) *
                        C6332 * C6333 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1006 * C123 - C1045 * C80 + C1007 * C477 - C1046 * C441 +
                      C1008 * C1048 - C1047 * C1011) *
                         C165 +
                     (C1006 * C355 - C1045 * C321 + C1007 * C663 -
                      C1046 * C631 + C1008 * C1227 - C1047 * C1197) *
                         C6260) *
                        C6210 * C6332 * C6333 * C72 +
                    ((C1045 * C81 - C1006 * C124 + C1046 * C440 - C1007 * C478 +
                      C1047 * C1012 - C1008 * C1049) *
                         C165 +
                     (C1045 * C322 - C1006 * C356 + C1046 * C632 -
                      C1007 * C664 + C1047 * C1198 - C1008 * C1228) *
                         C6260) *
                        C6210 * C6332 * C6333 * C73)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C6249 *
               C65 +
           C409 * C66 + C410 * C67) *
              C6332 * C6333 * C72 -
          ((C165 * C169 - C389 * C83 - C165 * C324 + C6260 * C393) * C6249 *
               C67 +
           C410 * C66 + C409 * C65) *
              C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C1006 +
           (C165 * C509 - C389 * C441 - C165 * C631 + C6260 * C694) * C1007 +
           (C165 * C1078 - C389 * C1011 - C165 * C1197 + C6260 * C1255) *
               C1008) *
              C6210 * C6332 * C6333 * C72 -
          ((C165 * C1079 - C389 * C1012 - C165 * C1198 + C6260 * C1256) *
               C1008 +
           (C165 * C510 - C389 * C440 - C165 * C632 + C6260 * C693) * C1007 +
           C407 * C1006) *
              C6210 * C6332 * C6333 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C74 * C84 - C75 * C80 - C74 * C85 + C65 * C92 + C76 * C86 -
           C77 * C81 - C76 * C87 + C66 * C93 + C78 * C88 - C79 * C82 -
           C78 * C89 + C67 * C94) *
              C6260 * C6249 * C6332 * C436 -
          (C78 * C442 - C79 * C439 - C78 * C443 + C67 * C448 + C76 * C444 -
           C77 * C440 - C76 * C445 + C66 * C449 + C74 * C446 - C75 * C441 -
           C74 * C447 + C65 * C450) *
              C6260 * C6249 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1009 * C84 - C1010 * C80 - C1009 * C85 + C6210 * C92) * C6260 *
               C1006 +
           C1302 * C1007 + C1303 * C1008) *
              C6332 * C436 -
          ((C1009 * C1284 - C1010 * C1283 - C1009 * C1285 + C6210 * C1286) *
               C6260 * C1008 +
           C1303 * C1007 + C1302 * C1006) *
              C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6249 * C123 - C122 * C80) * C74 +
           (C6249 * C127 - C122 * C85) * C65 + (C132 - C133) * C76 +
           (C134 - C135) * C66 + (C136 - C137) * C78 + (C138 - C139) * C67) *
              C6260 * C6332 * C436 +
          ((C122 * C441 - C6249 * C477) * C74 +
           (C122 * C447 - C6249 * C480) * C65 +
           (C122 * C440 - C6249 * C478) * C76 +
           (C122 * C445 - C6249 * C481) * C66 +
           (C122 * C439 - C6249 * C479) * C78 +
           (C122 * C443 - C6249 * C482) * C67) *
              C6260 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1006 * C123 - C1045 * C80 + C1007 * C477 - C1046 * C441 +
            C1008 * C1048 - C1047 * C1011) *
               C1009 +
           (C1006 * C127 - C1045 * C85 + C1007 * C480 - C1046 * C447 +
            C1008 * C1050 - C1047 * C1014) *
               C6210) *
              C6260 * C6332 * C436 +
          ((C1045 * C441 - C1006 * C477 + C1046 * C1011 - C1007 * C1048 +
            C1047 * C1283 - C1008 * C1329) *
               C1009 +
           (C1045 * C447 - C1006 * C480 + C1046 * C1014 - C1007 * C1050 +
            C1047 * C1285 - C1008 * C1330) *
               C6210) *
              C6260 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6260 * C166 - C165 * C80) * C74 +
           (C6260 * C170 - C165 * C85) * C65 + (C175 - C176) * C76 +
           (C177 - C178) * C66 + (C179 - C180) * C78 + (C181 - C182) * C67) *
              C6249 * C6332 * C436 +
          ((C165 * C441 - C6260 * C509) * C74 +
           (C165 * C447 - C6260 * C512) * C65 +
           (C165 * C440 - C6260 * C510) * C76 +
           (C165 * C445 - C6260 * C513) * C66 +
           (C165 * C439 - C6260 * C511) * C78 +
           (C165 * C443 - C6260 * C514) * C67) *
              C6249 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6260 * C166 - C165 * C80) * C1009 +
            (C6260 * C170 - C165 * C85) * C6210) *
               C1006 +
           ((C1360 - C1361) * C1009 + (C1362 - C1363) * C6210) * C1007 +
           ((C1364 - C1365) * C1009 + (C1366 - C1367) * C6210) * C1008) *
              C6332 * C436 +
          (((C1361 - C1360) * C1009 + (C1363 - C1362) * C6210) * C1006 +
           ((C1365 - C1364) * C1009 + (C1367 - C1366) * C6210) * C1007 +
           ((C165 * C1283 - C6260 * C1357) * C1009 +
            (C165 * C1285 - C6260 * C1358) * C6210) *
               C1008) *
              C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q));
    d2eeyx[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 +
                      C67 * C88 - C78 * C82) *
                         C122 +
                     (C65 * C212 - C74 * C208 + C66 * C213 - C76 * C209 +
                      C67 * C214 - C78 * C210) *
                         C6249) *
                        C6260 * C6332 * C436 +
                    ((C74 * C441 - C65 * C446 + C76 * C440 - C66 * C444 +
                      C78 * C439 - C67 * C442) *
                         C122 +
                     (C74 * C541 - C65 * C544 + C76 * C542 - C66 * C545 +
                      C78 * C543 - C67 * C546) *
                         C6249) *
                        C6260 * C6332 * C437) *
                   C6334) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C6210 * C84 - C1009 * C80) * C1045 +
                     (C6210 * C212 - C1009 * C208) * C1006 +
                     (C1396 - C1397) * C1046 + (C1398 - C1399) * C1007 +
                     (C1400 - C1401) * C1047 + (C1402 - C1403) * C1008) *
                        C6260 * C6332 * C436 +
                    ((C1397 - C1396) * C1045 + (C1399 - C1398) * C1006 +
                     (C1401 - C1400) * C1046 + (C1403 - C1402) * C1007 +
                     (C1009 * C1283 - C6210 * C1284) * C1047 +
                     (C1009 * C1393 - C6210 * C1394) * C1008) *
                        C6260 * C6332 * C437) *
                   C6334) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C6249 * C243) * C65 +
           C260 * C66 + C261 * C67) *
              C6260 * C6332 * C436 -
          ((C122 * C479 - C242 * C439 - C122 * C543 + C6249 * C573) * C67 +
           (C122 * C478 - C242 * C440 - C122 * C542 + C6249 * C574) * C66 +
           (C122 * C477 - C242 * C441 - C122 * C541 + C6249 * C575) * C65) *
              C6260 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1045 * C123 - C1138 * C80 - C1045 * C208 + C1006 * C243 +
           C1046 * C477 - C1139 * C441 - C1046 * C541 + C1007 * C575 +
           C1047 * C1048 - C1140 * C1011 - C1047 * C1108 + C1008 * C1141) *
              C6210 * C6260 * C6332 * C436 -
          (C1047 * C1329 - C1140 * C1283 - C1047 * C1393 + C1008 * C1429 +
           C1046 * C1048 - C1139 * C1011 - C1046 * C1108 + C1007 * C1141 +
           C1045 * C477 - C1138 * C441 - C1045 * C541 + C1006 * C575) *
              C6210 * C6260 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q));
    d2eeyz[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C6260 * C166 - C165 * C80) * C122 +
                      (C6260 * C287 - C165 * C208) * C6249) *
                         C65 +
                     ((C175 - C176) * C122 + (C292 - C293) * C6249) * C66 +
                     ((C179 - C180) * C122 + (C294 - C295) * C6249) * C67) *
                        C6332 * C436 +
                    (((C165 * C441 - C6260 * C509) * C122 +
                      (C165 * C541 - C6260 * C602) * C6249) *
                         C65 +
                     ((C165 * C440 - C6260 * C510) * C122 +
                      (C165 * C542 - C6260 * C603) * C6249) *
                         C66 +
                     ((C165 * C439 - C6260 * C511) * C122 +
                      (C165 * C543 - C6260 * C604) * C6249) *
                         C67) *
                        C6332 * C437) *
                   C6334) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C6260 * C166 - C165 * C80) * C1045 +
                     (C6260 * C287 - C165 * C208) * C1006 +
                     (C1360 - C1361) * C1046 + (C1458 - C1459) * C1007 +
                     (C1364 - C1365) * C1047 + (C1460 - C1461) * C1008) *
                        C6210 * C6332 * C436 +
                    ((C1361 - C1360) * C1045 + (C1459 - C1458) * C1006 +
                     (C1365 - C1364) * C1046 + (C1461 - C1460) * C1007 +
                     (C165 * C1283 - C6260 * C1357) * C1047 +
                     (C165 * C1393 - C6260 * C1456) * C1008) *
                        C6210 * C6332 * C437) *
                   C6334) /
                      (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 + C67 * C88 -
            C78 * C82) *
               C165 +
           (C65 * C325 - C74 * C321 + C66 * C326 - C76 * C322 + C67 * C327 -
            C78 * C323) *
               C6260) *
              C6249 * C6332 * C436 +
          ((C74 * C441 - C65 * C446 + C76 * C440 - C66 * C444 + C78 * C439 -
            C67 * C442) *
               C165 +
           (C74 * C631 - C65 * C634 + C76 * C632 - C66 * C635 + C78 * C633 -
            C67 * C636) *
               C6260) *
              C6249 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6210 * C84 - C1009 * C80) * C165 +
            (C6210 * C325 - C1009 * C321) * C6260) *
               C1006 +
           ((C1396 - C1397) * C165 + (C1490 - C1491) * C6260) * C1007 +
           ((C1400 - C1401) * C165 + (C1492 - C1493) * C6260) * C1008) *
              C6332 * C436 +
          (((C1397 - C1396) * C165 + (C1491 - C1490) * C6260) * C1006 +
           ((C1401 - C1400) * C165 + (C1493 - C1492) * C6260) * C1007 +
           ((C1009 * C1283 - C6210 * C1284) * C165 +
            (C1009 * C1487 - C6210 * C1488) * C6260) *
               C1008) *
              C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q));
    d2eezy[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C6249 * C123 - C122 * C80) * C165 +
                      (C6249 * C355 - C122 * C321) * C6260) *
                         C65 +
                     ((C132 - C133) * C165 + (C360 - C361) * C6260) * C66 +
                     ((C136 - C137) * C165 + (C362 - C363) * C6260) * C67) *
                        C6332 * C436 +
                    (((C122 * C441 - C6249 * C477) * C165 +
                      (C122 * C631 - C6249 * C663) * C6260) *
                         C65 +
                     ((C122 * C440 - C6249 * C478) * C165 +
                      (C122 * C632 - C6249 * C664) * C6260) *
                         C66 +
                     ((C122 * C439 - C6249 * C479) * C165 +
                      (C122 * C633 - C6249 * C665) * C6260) *
                         C67) *
                        C6332 * C437) *
                   C6334) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1006 * C123 - C1045 * C80 + C1007 * C477 - C1046 * C441 +
                      C1008 * C1048 - C1047 * C1011) *
                         C165 +
                     (C1006 * C355 - C1045 * C321 + C1007 * C663 -
                      C1046 * C631 + C1008 * C1227 - C1047 * C1197) *
                         C6260) *
                        C6210 * C6332 * C436 +
                    ((C1045 * C441 - C1006 * C477 + C1046 * C1011 -
                      C1007 * C1048 + C1047 * C1283 - C1008 * C1329) *
                         C165 +
                     (C1045 * C631 - C1006 * C663 + C1046 * C1197 -
                      C1007 * C1227 + C1047 * C1487 - C1008 * C1519) *
                         C6260) *
                        C6210 * C6332 * C437) *
                   C6334) /
                      (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C6249 *
               C65 +
           C409 * C66 + C410 * C67) *
              C6332 * C436 -
          ((C165 * C511 - C389 * C439 - C165 * C633 + C6260 * C692) * C6249 *
               C67 +
           (C165 * C510 - C389 * C440 - C165 * C632 + C6260 * C693) * C6249 *
               C66 +
           (C165 * C509 - C389 * C441 - C165 * C631 + C6260 * C694) * C6249 *
               C65) *
              C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C1006 +
           C1560 * C1007 + C1561 * C1008) *
              C6210 * C6332 * C436 -
          ((C165 * C1357 - C389 * C1283 - C165 * C1487 + C6260 * C1546) *
               C1008 +
           C1561 * C1007 + C1560 * C1006) *
              C6210 * C6332 * C437) *
         C6334) /
            (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C74 * C84 - C75 * C80 - C74 * C85 + C65 * C92 + C76 * C86 -
           C77 * C81 - C76 * C87 + C66 * C93 + C78 * C88 - C79 * C82 -
           C78 * C89 + C67 * C94) *
              C6260 * C6249 * C721 -
          (C78 * C726 - C79 * C723 - C78 * C727 + C67 * C732 + C76 * C728 -
           C77 * C724 - C76 * C729 + C66 * C733 + C74 * C730 - C75 * C725 -
           C74 * C731 + C65 * C734) *
              C6260 * C6249 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1009 * C84 - C1010 * C80 - C1009 * C85 + C6210 * C92) * C6260 *
               C1006 +
           C1302 * C1007 + C1303 * C1008) *
              C721 -
          ((C1009 * C1589 - C1010 * C1587 - C1009 * C1590 + C6210 * C1593) *
               C6260 * C1008 +
           (C1009 * C1591 - C1010 * C1588 - C1009 * C1592 + C6210 * C1594) *
               C6260 * C1007 +
           (C1009 * C730 - C1010 * C725 - C1009 * C731 + C6210 * C734) * C6260 *
               C1006) *
              C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6249 * C123 - C122 * C80) * C74 +
           (C6249 * C127 - C122 * C85) * C65 + (C132 - C133) * C76 +
           (C134 - C135) * C66 + (C136 - C137) * C78 + (C138 - C139) * C67) *
              C6260 * C721 +
          ((C122 * C725 - C6249 * C761) * C74 +
           (C122 * C731 - C6249 * C764) * C65 +
           (C122 * C724 - C6249 * C762) * C76 +
           (C122 * C729 - C6249 * C765) * C66 +
           (C122 * C723 - C6249 * C763) * C78 +
           (C122 * C727 - C6249 * C766) * C67) *
              C6260 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1006 * C123 - C1045 * C80 + C1007 * C477 - C1046 * C441 +
            C1008 * C1048 - C1047 * C1011) *
               C1009 +
           (C1006 * C127 - C1045 * C85 + C1007 * C480 - C1046 * C447 +
            C1008 * C1050 - C1047 * C1014) *
               C6210) *
              C6260 * C721 +
          ((C1045 * C725 - C1006 * C761 + C1046 * C1588 - C1007 * C1621 +
            C1047 * C1587 - C1008 * C1622) *
               C1009 +
           (C1045 * C731 - C1006 * C764 + C1046 * C1592 - C1007 * C1623 +
            C1047 * C1590 - C1008 * C1624) *
               C6210) *
              C6260 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6260 * C166 - C165 * C80) * C74 +
           (C6260 * C170 - C165 * C85) * C65 + (C175 - C176) * C76 +
           (C177 - C178) * C66 + (C179 - C180) * C78 + (C181 - C182) * C67) *
              C6249 * C721 +
          ((C165 * C725 - C6260 * C793) * C74 +
           (C165 * C731 - C6260 * C796) * C65 +
           (C165 * C724 - C6260 * C794) * C76 +
           (C165 * C729 - C6260 * C797) * C66 +
           (C165 * C723 - C6260 * C795) * C78 +
           (C165 * C727 - C6260 * C798) * C67) *
              C6249 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6260 * C166 - C165 * C80) * C1009 +
            (C6260 * C170 - C165 * C85) * C6210) *
               C1006 +
           ((C1360 - C1361) * C1009 + (C1362 - C1363) * C6210) * C1007 +
           ((C1364 - C1365) * C1009 + (C1366 - C1367) * C6210) * C1008) *
              C721 +
          (((C165 * C725 - C6260 * C793) * C1009 +
            (C165 * C731 - C6260 * C796) * C6210) *
               C1006 +
           ((C165 * C1588 - C6260 * C1651) * C1009 +
            (C165 * C1592 - C6260 * C1653) * C6210) *
               C1007 +
           ((C165 * C1587 - C6260 * C1652) * C1009 +
            (C165 * C1590 - C6260 * C1654) * C6210) *
               C1008) *
              C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 +
                      C67 * C88 - C78 * C82) *
                         C122 +
                     (C65 * C212 - C74 * C208 + C66 * C213 - C76 * C209 +
                      C67 * C214 - C78 * C210) *
                         C6249) *
                        C6260 * C721 +
                    ((C74 * C725 - C65 * C730 + C76 * C724 - C66 * C728 +
                      C78 * C723 - C67 * C726) *
                         C122 +
                     (C74 * C825 - C65 * C828 + C76 * C826 - C66 * C829 +
                      C78 * C827 - C67 * C830) *
                         C6249) *
                        C6260 * C722) *
                   C6333 * C6334) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C6210 * C84 - C1009 * C80) * C1045 +
                     (C6210 * C212 - C1009 * C208) * C1006 +
                     (C1396 - C1397) * C1046 + (C1398 - C1399) * C1007 +
                     (C1400 - C1401) * C1047 + (C1402 - C1403) * C1008) *
                        C6260 * C721 +
                    ((C1009 * C725 - C6210 * C730) * C1045 +
                     (C1009 * C825 - C6210 * C828) * C1006 +
                     (C1009 * C1588 - C6210 * C1591) * C1046 +
                     (C1009 * C1681 - C6210 * C1683) * C1007 +
                     (C1009 * C1587 - C6210 * C1589) * C1047 +
                     (C1009 * C1682 - C6210 * C1684) * C1008) *
                        C6260 * C722) *
                   C6333 * C6334) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C6249 * C243) * C65 +
           C260 * C66 + C261 * C67) *
              C6260 * C721 -
          ((C122 * C763 - C242 * C723 - C122 * C827 + C6249 * C857) * C67 +
           (C122 * C762 - C242 * C724 - C122 * C826 + C6249 * C858) * C66 +
           (C122 * C761 - C242 * C725 - C122 * C825 + C6249 * C859) * C65) *
              C6260 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1045 * C123 - C1138 * C80 - C1045 * C208 + C1006 * C243 +
           C1046 * C477 - C1139 * C441 - C1046 * C541 + C1007 * C575 +
           C1047 * C1048 - C1140 * C1011 - C1047 * C1108 + C1008 * C1141) *
              C6210 * C6260 * C721 -
          (C1047 * C1622 - C1140 * C1587 - C1047 * C1682 + C1008 * C1711 +
           C1046 * C1621 - C1139 * C1588 - C1046 * C1681 + C1007 * C1712 +
           C1045 * C761 - C1138 * C725 - C1045 * C825 + C1006 * C859) *
              C6210 * C6260 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C6260 * C166 - C165 * C80) * C122 +
                      (C6260 * C287 - C165 * C208) * C6249) *
                         C65 +
                     ((C175 - C176) * C122 + (C292 - C293) * C6249) * C66 +
                     ((C179 - C180) * C122 + (C294 - C295) * C6249) * C67) *
                        C721 +
                    (((C165 * C725 - C6260 * C793) * C122 +
                      (C165 * C825 - C6260 * C886) * C6249) *
                         C65 +
                     ((C165 * C724 - C6260 * C794) * C122 +
                      (C165 * C826 - C6260 * C887) * C6249) *
                         C66 +
                     ((C165 * C723 - C6260 * C795) * C122 +
                      (C165 * C827 - C6260 * C888) * C6249) *
                         C67) *
                        C722) *
                   C6333 * C6334) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C6260 * C166 - C165 * C80) * C1045 +
                     (C6260 * C287 - C165 * C208) * C1006 +
                     (C1360 - C1361) * C1046 + (C1458 - C1459) * C1007 +
                     (C1364 - C1365) * C1047 + (C1460 - C1461) * C1008) *
                        C6210 * C721 +
                    ((C165 * C725 - C6260 * C793) * C1045 +
                     (C165 * C825 - C6260 * C886) * C1006 +
                     (C165 * C1588 - C6260 * C1651) * C1046 +
                     (C165 * C1681 - C6260 * C1739) * C1007 +
                     (C165 * C1587 - C6260 * C1652) * C1047 +
                     (C165 * C1682 - C6260 * C1740) * C1008) *
                        C6210 * C722) *
                   C6333 * C6334) /
                      (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 + C67 * C88 -
            C78 * C82) *
               C165 +
           (C65 * C325 - C74 * C321 + C66 * C326 - C76 * C322 + C67 * C327 -
            C78 * C323) *
               C6260) *
              C6249 * C721 +
          ((C74 * C725 - C65 * C730 + C76 * C724 - C66 * C728 + C78 * C723 -
            C67 * C726) *
               C165 +
           (C74 * C915 - C65 * C918 + C76 * C916 - C66 * C919 + C78 * C917 -
            C67 * C920) *
               C6260) *
              C6249 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6210 * C84 - C1009 * C80) * C165 +
            (C6210 * C325 - C1009 * C321) * C6260) *
               C1006 +
           ((C1396 - C1397) * C165 + (C1490 - C1491) * C6260) * C1007 +
           ((C1400 - C1401) * C165 + (C1492 - C1493) * C6260) * C1008) *
              C721 +
          (((C1009 * C725 - C6210 * C730) * C165 +
            (C1009 * C915 - C6210 * C918) * C6260) *
               C1006 +
           ((C1009 * C1588 - C6210 * C1591) * C165 +
            (C1009 * C1767 - C6210 * C1769) * C6260) *
               C1007 +
           ((C1009 * C1587 - C6210 * C1589) * C165 +
            (C1009 * C1768 - C6210 * C1770) * C6260) *
               C1008) *
              C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C6249 * C123 - C122 * C80) * C165 +
                      (C6249 * C355 - C122 * C321) * C6260) *
                         C65 +
                     ((C132 - C133) * C165 + (C360 - C361) * C6260) * C66 +
                     ((C136 - C137) * C165 + (C362 - C363) * C6260) * C67) *
                        C721 +
                    (((C122 * C725 - C6249 * C761) * C165 +
                      (C122 * C915 - C6249 * C947) * C6260) *
                         C65 +
                     ((C122 * C724 - C6249 * C762) * C165 +
                      (C122 * C916 - C6249 * C948) * C6260) *
                         C66 +
                     ((C122 * C723 - C6249 * C763) * C165 +
                      (C122 * C917 - C6249 * C949) * C6260) *
                         C67) *
                        C722) *
                   C6333 * C6334) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1006 * C123 - C1045 * C80 + C1007 * C477 - C1046 * C441 +
                      C1008 * C1048 - C1047 * C1011) *
                         C165 +
                     (C1006 * C355 - C1045 * C321 + C1007 * C663 -
                      C1046 * C631 + C1008 * C1227 - C1047 * C1197) *
                         C6260) *
                        C6210 * C721 +
                    ((C1045 * C725 - C1006 * C761 + C1046 * C1588 -
                      C1007 * C1621 + C1047 * C1587 - C1008 * C1622) *
                         C165 +
                     (C1045 * C915 - C1006 * C947 + C1046 * C1767 -
                      C1007 * C1797 + C1047 * C1768 - C1008 * C1798) *
                         C6260) *
                        C6210 * C722) *
                   C6333 * C6334) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C6249 *
               C65 +
           C409 * C66 + C410 * C67) *
              C721 -
          ((C165 * C795 - C389 * C723 - C165 * C917 + C6260 * C976) * C6249 *
               C67 +
           (C165 * C794 - C389 * C724 - C165 * C916 + C6260 * C977) * C6249 *
               C66 +
           (C165 * C793 - C389 * C725 - C165 * C915 + C6260 * C978) * C6249 *
               C65) *
              C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C6260 * C390) * C1006 +
           C1560 * C1007 + C1561 * C1008) *
              C6210 * C721 -
          ((C165 * C1652 - C389 * C1587 - C165 * C1768 + C6260 * C1825) *
               C1008 +
           (C165 * C1651 - C389 * C1588 - C165 * C1767 + C6260 * C1826) *
               C1007 +
           (C165 * C793 - C389 * C725 - C165 * C915 + C6260 * C978) * C1006) *
              C6210 * C722) *
         C6333 * C6334) /
            (p * q * std::sqrt(p + q));
}
