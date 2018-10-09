/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ppps_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1110_12(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C8589 = ae * be;
    const double C8588 = ae + be;
    const double C8587 = 0 * be;
    const double C8586 = xA - xB;
    const double C8618 = yA - yB;
    const double C8621 = zA - zB;
    const double C8678 = 0 * be;
    const double C8708 = 0 * be;
    const double C8728 = p + q;
    const double C8727 = p * q;
    const double C8733 = xP - xQ;
    const double C8732 = bs[2];
    const double C8738 = bs[3];
    const double C8749 = bs[4];
    const double C8768 = yP - yQ;
    const double C8783 = zP - zQ;
    const double C80 = bs[0];
    const double C9185 = ce + de;
    const double C9184 = xC - xD;
    const double C9190 = yC - yD;
    const double C9197 = zC - zD;
    const double C9283 = ce * de;
    const double C8597 = 2 * C8589;
    const double C8590 = std::pow(C8588, 2);
    const double C9173 = 2 * C8588;
    const double C8591 = C8589 * C8586;
    const double C9164 = std::pow(C8586, 2);
    const double C9280 = C8586 * be;
    const double C9279 = C8586 * ae;
    const double C8638 = C8589 * C8618;
    const double C9224 = std::pow(C8618, 2);
    const double C9289 = C8618 * be;
    const double C9287 = C8618 * ae;
    const double C8650 = C8589 * C8621;
    const double C9239 = std::pow(C8621, 2);
    const double C9290 = C8621 * be;
    const double C9288 = C8621 * ae;
    const double C8729 = 2 * C8727;
    const double C8741 = C8733 * ae;
    const double C8740 = C8733 * be;
    const double C8737 = std::pow(C8733, 2);
    const double C8771 = C8768 * be;
    const double C8770 = C8733 * C8768;
    const double C8800 = C8768 * ae;
    const double C8799 = C8768 * C8733;
    const double C8813 = std::pow(C8768, 2);
    const double C8786 = C8783 * be;
    const double C8785 = C8733 * C8783;
    const double C8822 = C8768 * C8783;
    const double C8832 = C8783 * ae;
    const double C8831 = C8783 * C8733;
    const double C8845 = C8783 * C8768;
    const double C8854 = std::pow(C8783, 2);
    const double C9286 = 2 * C9185;
    const double C9285 = std::pow(C9184, 2);
    const double C9284 = std::pow(C9190, 2);
    const double C9282 = std::pow(C9197, 2);
    const double C8592 = 2 * C8590;
    const double C9281 = std::pow(C9173, -1);
    const double C9165 = C9164 * C8589;
    const double C9225 = C9224 * C8589;
    const double C9240 = C9239 * C8589;
    const double C8731 = C8729 / C8728;
    const double C92 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C8729 / C8728, 2) -
          (bs[1] * C8729) / C8728) *
         C8589) /
        C8590;
    const double C81 = -(C8733 * bs[1] * C8729) / C8728;
    const double C441 = -(C8768 * bs[1] * C8729) / C8728;
    const double C725 = -(C8783 * bs[1] * C8729) / C8728;
    const double C8744 = C8738 * C8741;
    const double C8755 = C8749 * C8741;
    const double C85 = (-(bs[1] * C8741 * C8729) / C8728) / C8588;
    const double C8743 = C8738 * C8740;
    const double C8752 = C8749 * C8740;
    const double C84 = (-(bs[1] * C8740 * C8729) / C8728) / C8588;
    const double C8751 = C8737 * C8749;
    const double C8773 = C8738 * C8771;
    const double C8778 = C8749 * C8771;
    const double C123 = (-(bs[1] * C8771 * C8729) / C8728) / C8588;
    const double C8772 = C8770 * ae;
    const double C8802 = C8738 * C8800;
    const double C8807 = C8749 * C8800;
    const double C208 = (-(bs[1] * C8800 * C8729) / C8728) / C8588;
    const double C8801 = C8799 * ae;
    const double C8815 = C8813 * C8749;
    const double C8788 = C8738 * C8786;
    const double C8793 = C8749 * C8786;
    const double C166 = (-(bs[1] * C8786 * C8729) / C8728) / C8588;
    const double C8787 = C8785 * ae;
    const double C8823 = C8822 * ae;
    const double C8834 = C8738 * C8832;
    const double C8839 = C8749 * C8832;
    const double C321 = (-(bs[1] * C8832 * C8729) / C8728) / C8588;
    const double C8833 = C8831 * ae;
    const double C8846 = C8845 * ae;
    const double C8856 = C8854 * C8749;
    const double C9296 = std::pow(C9286, -1);
    const double C9295 = C9285 * C9283;
    const double C9294 = C9284 * C9283;
    const double C9293 = C9282 * C9283;
    const double C9166 = C9165 / C8588;
    const double C9226 = C9225 / C8588;
    const double C9241 = C9240 / C8588;
    const double C8734 = std::pow(C8731, 2);
    const double C8739 = -C8731;
    const double C8750 = std::pow(C8731, 4);
    const double C8774 = C8772 * be;
    const double C8803 = C8801 * be;
    const double C8789 = C8787 * be;
    const double C8824 = C8823 * be;
    const double C8835 = C8833 * be;
    const double C8847 = C8846 * be;
    const double C9303 = C9295 / C9185;
    const double C9302 = C9294 / C9185;
    const double C9301 = C9293 / C9185;
    const double C9167 = -C9166;
    const double C9227 = -C9226;
    const double C9242 = -C9241;
    const double C8736 = C8732 * C8734;
    const double C93 =
        (ae * C8734 * C8732 * C8733 * be + be * C8734 * C8732 * C8733 * ae +
         C8733 *
             (C8732 * C8734 +
              std::pow(C8733, 2) * bs[3] * std::pow(-C8731, 3)) *
             C8589) /
        C8590;
    const double C127 = (C8734 * C8732 * C8733 * (yP - yQ) * ae * be) / C8590;
    const double C170 = (C8734 * C8732 * C8733 * (zP - zQ) * ae * be) / C8590;
    const double C212 = (C8734 * C8732 * C8768 * C8733 * ae * be) / C8590;
    const double C243 =
        ((std::pow(C8768, 2) * C8732 * C8734 - (bs[1] * C8729) / C8728) *
         C8589) /
        C8590;
    const double C287 = (C8734 * C8732 * C8768 * C8783 * ae * be) / C8590;
    const double C325 = (C8734 * C8732 * C8783 * C8733 * ae * be) / C8590;
    const double C355 = (C8734 * C8732 * C8783 * C8768 * ae * be) / C8590;
    const double C390 =
        ((std::pow(C8783, 2) * C8732 * C8734 - (bs[1] * C8729) / C8728) *
         C8589) /
        C8590;
    const double C86 = (C8733 * C8734 * C8732 * C8740) / C8588 -
                       (be * bs[1] * C8729) / (C8728 * C8588);
    const double C87 = (C8733 * C8734 * C8732 * C8741) / C8588 -
                       (ae * bs[1] * C8729) / (C8728 * C8588);
    const double C124 = (C8733 * C8734 * C8732 * C8771) / C8588;
    const double C167 = (C8733 * C8734 * C8732 * C8786) / C8588;
    const double C209 = (C8733 * C8734 * C8732 * C8800) / C8588;
    const double C322 = (C8733 * C8734 * C8732 * C8832) / C8588;
    const double C446 = (C8768 * C8734 * C8732 * C8740) / C8588;
    const double C447 = (C8768 * C8734 * C8732 * C8741) / C8588;
    const double C477 = (C8768 * C8734 * C8732 * C8771) / C8588 -
                        (be * bs[1] * C8729) / (C8728 * C8588);
    const double C509 = (C8768 * C8734 * C8732 * C8786) / C8588;
    const double C541 = (C8768 * C8734 * C8732 * C8800) / C8588 -
                        (ae * bs[1] * C8729) / (C8728 * C8588);
    const double C631 = (C8768 * C8734 * C8732 * C8832) / C8588;
    const double C730 = (C8783 * C8734 * C8732 * C8740) / C8588;
    const double C731 = (C8783 * C8734 * C8732 * C8741) / C8588;
    const double C761 = (C8783 * C8734 * C8732 * C8771) / C8588;
    const double C793 = (C8783 * C8734 * C8732 * C8786) / C8588 -
                        (be * bs[1] * C8729) / (C8728 * C8588);
    const double C825 = (C8783 * C8734 * C8732 * C8800) / C8588;
    const double C915 = (C8783 * C8734 * C8732 * C8832) / C8588 -
                        (ae * bs[1] * C8729) / (C8728 * C8588);
    const double C8742 = std::pow(C8739, 3);
    const double C8759 = C8750 * C8755;
    const double C8758 = C8750 * C8752;
    const double C8757 = C8751 * C8750;
    const double C8780 = C8750 * C8778;
    const double C8795 = C8750 * C8793;
    const double C8809 = C8750 * C8807;
    const double C8816 = C8815 * C8750;
    const double C8841 = C8750 * C8839;
    const double C8857 = C8856 * C8750;
    const double C8777 = C8749 * C8774;
    const double C8806 = C8749 * C8803;
    const double C8792 = C8749 * C8789;
    const double C8826 = C8749 * C8824;
    const double C8838 = C8749 * C8835;
    const double C8849 = C8749 * C8847;
    const double C9306 = -C9303;
    const double C9305 = -C9302;
    const double C9304 = -C9301;
    const double C9168 = std::exp(C9167);
    const double C9228 = std::exp(C9227);
    const double C9243 = std::exp(C9242);
    const double C82 = C8736 * C8737 - (bs[1] * C8729) / C8728;
    const double C440 = C8768 * C8733 * C8736;
    const double C724 = C8783 * C8733 * C8736;
    const double C1373 = C8736 * C8813 - (bs[1] * C8729) / C8728;
    const double C1750 = C8783 * C8768 * C8736;
    const double C2745 = C8736 * C8854 - (bs[1] * C8729) / C8728;
    const double C8746 = C8742 * C8744;
    const double C8745 = C8742 * C8743;
    const double C8748 = C8738 * C8742;
    const double C8775 = C8742 * C8773;
    const double C8790 = C8742 * C8788;
    const double C8804 = C8742 * C8802;
    const double C8836 = C8742 * C8834;
    const double C128 = (ae * C8734 * C8732 * C8768 * be +
                         C8733 * C8742 * C8738 * C8733 * C8768 * ae * be) /
                        C8590;
    const double C171 = (ae * C8734 * C8732 * C8783 * be +
                         C8733 * C8742 * C8738 * C8733 * C8783 * ae * be) /
                        C8590;
    const double C213 = (be * C8734 * C8732 * C8768 * ae +
                         C8733 * C8742 * C8738 * C8768 * C8733 * ae * be) /
                        C8590;
    const double C244 =
        (C8733 * (C8736 + std::pow(C8768, 2) * C8738 * C8742) * C8589) / C8590;
    const double C288 =
        (C8733 * C8742 * C8738 * C8768 * C8783 * ae * be) / C8590;
    const double C289 =
        (C8742 * C8738 * C8824 + C8750 * C8749 * C8824 * C8737) / C8590;
    const double C326 = (be * C8734 * C8732 * C8783 * ae +
                         C8733 * C8742 * C8738 * C8783 * C8733 * ae * be) /
                        C8590;
    const double C356 =
        (C8733 * C8742 * C8738 * C8783 * C8768 * ae * be) / C8590;
    const double C357 =
        (C8742 * C8738 * C8847 + C8750 * C8749 * C8847 * C8737) / C8590;
    const double C391 =
        (C8733 * (C8736 + std::pow(C8783, 2) * C8738 * C8742) * C8589) / C8590;
    const double C450 =
        (C8768 * (C8736 + C8737 * C8738 * C8742) * C8589) / C8590;
    const double C480 =
        (be * C8734 * C8732 * C8741 + C8768 * C8742 * C8738 * C8774) / C8590;
    const double C512 = (C8768 * C8742 * C8738 * C8789) / C8590;
    const double C544 =
        (ae * C8734 * C8732 * C8740 + C8768 * C8742 * C8738 * C8803) / C8590;
    const double C575 =
        (ae * C8734 * C8732 * C8771 + be * C8734 * C8732 * C8800 +
         C8768 * (C8736 + C8813 * C8738 * C8742) * C8589) /
        C8590;
    const double C602 =
        (ae * C8734 * C8732 * C8786 + C8768 * C8742 * C8738 * C8824) / C8590;
    const double C634 = (C8768 * C8742 * C8738 * C8835) / C8590;
    const double C663 =
        (be * C8734 * C8732 * C8832 + C8768 * C8742 * C8738 * C8847) / C8590;
    const double C694 =
        (C8768 * (C8736 + C8854 * C8738 * C8742) * C8589) / C8590;
    const double C734 =
        (C8783 * (C8736 + C8737 * C8738 * C8742) * C8589) / C8590;
    const double C764 = (C8783 * C8742 * C8738 * C8774) / C8590;
    const double C796 =
        (be * C8734 * C8732 * C8741 + C8783 * C8742 * C8738 * C8789) / C8590;
    const double C828 = (C8783 * C8742 * C8738 * C8803) / C8590;
    const double C859 =
        (C8783 * (C8736 + C8813 * C8738 * C8742) * C8589) / C8590;
    const double C886 =
        (be * C8734 * C8732 * C8800 + C8783 * C8742 * C8738 * C8824) / C8590;
    const double C918 =
        (ae * C8734 * C8732 * C8740 + C8783 * C8742 * C8738 * C8835) / C8590;
    const double C947 =
        (ae * C8734 * C8732 * C8771 + C8783 * C8742 * C8738 * C8847) / C8590;
    const double C978 =
        (ae * C8734 * C8732 * C8786 + be * C8734 * C8732 * C8832 +
         C8783 * (C8736 + C8854 * C8738 * C8742) * C8589) /
        C8590;
    const double C8762 = C8733 * C8759;
    const double C8998 = C8768 * C8759;
    const double C8761 = C8733 * C8758;
    const double C9003 = C8768 * C8758;
    const double C1755 =
        (ae * C8783 * C8768 * C8758 + be * C8783 * C8768 * C8759 +
         C8733 * C8783 * C8768 *
             (C8749 * C8750 + C8737 * bs[5] * std::pow(C8739, 5)) * C8589) /
        C8590;
    const double C8923 = C8733 * C8780;
    const double C8977 = C8768 * C8780;
    const double C8928 = C8733 * C8795;
    const double C9006 = C8768 * C8795;
    const double C9017 = C8783 * C8795;
    const double C8924 = C8733 * C8809;
    const double C8979 = C8768 * C8809;
    const double C8933 = C8733 * C8841;
    const double C9007 = C8768 * C8841;
    const double C9019 = C8783 * C8841;
    const double C8779 = C8750 * C8777;
    const double C8808 = C8750 * C8806;
    const double C8794 = C8750 * C8792;
    const double C8827 = C8750 * C8826;
    const double C8840 = C8750 * C8838;
    const double C8850 = C8750 * C8849;
    const double C9309 = std::exp(C9306);
    const double C9308 = std::exp(C9305);
    const double C9307 = std::exp(C9304);
    const double C4454 = C9168 * C446;
    const double C5675 = C9168 * C730;
    const double C8593 = C8591 * C9168;
    const double C9292 = C9281 * C9168;
    const double C9291 = C9168 * C9279;
    const double C1013 = -(C9168 * C9280) / C8588;
    const double C132 = C9228 * C124;
    const double C2805 = C9228 * C761;
    const double C8639 = C8638 * C9228;
    const double C122 = -(2 * C8589 * (yA - yB) * C9228) / C8588;
    const double C242 =
        -((C9228 - (C8618 * 2 * C8589 * C8618 * C9228) / C8588) * C8597) /
        C8588;
    const double C1055 =
        ((C9228 - (C8618 * 2 * C8589 * C8618 * C9228) / C8588) * ae) / C8588 -
        (0 * be) / C8592;
    const double C1056 = (0 * ae) / C8588 - (C8589 * C8618 * C9228) / C8590;
    const double C9298 = C9281 * C9228;
    const double C9297 = C9228 * C9287;
    const double C3125 = -(C9228 * C9289) / C8588;
    const double C175 = C9243 * C167;
    const double C1471 = C9243 * C509;
    const double C8651 = C8650 * C9243;
    const double C165 = -(2 * C8589 * (zA - zB) * C9243) / C8588;
    const double C389 =
        -((C9243 - (C8621 * 2 * C8589 * C8621 * C9243) / C8588) * C8597) /
        C8588;
    const double C2161 =
        ((C9243 - (C8621 * 2 * C8589 * C8621 * C9243) / C8588) * ae) / C8588 -
        (0 * be) / C8592;
    const double C2162 = (0 * ae) / C8588 - (C8589 * C8621 * C9243) / C8590;
    const double C9300 = C9281 * C9243;
    const double C9299 = C9243 * C9288;
    const double C5908 = -(C9243 * C9290) / C8588;
    const double C89 =
        (C8734 * C8732 * C8741 + C8733 * (C8733 * C8746 + C8736 * ae) +
         C8733 * C8736 * ae) /
        C8588;
    const double C445 = (C8768 * (C8733 * C8746 + C8736 * ae)) / C8588;
    const double C729 = (C8783 * (C8733 * C8746 + C8736 * ae)) / C8588;
    const double C1377 = (C8734 * C8732 * C8741 + C8746 * C8813) / C8588;
    const double C1754 = (C8783 * C8768 * C8746) / C8588;
    const double C2749 = (C8734 * C8732 * C8741 + C8746 * C8854) / C8588;
    const double C4347 =
        (2 * C8768 * C8746 + C8768 * (C8746 + C8759 * C8813)) / C8588;
    const double C4638 = (C8783 * (C8746 + C8759 * C8813)) / C8588;
    const double C8329 =
        (2 * C8783 * C8746 + C8783 * (C8746 + C8759 * C8854)) / C8588;
    const double C94 =
        ((C8736 + C8737 * C8738 * C8742) * C8589 +
         ae * (C8733 * C8745 + C8736 * be) + be * (C8733 * C8746 + C8736 * ae) +
         C8733 * (ae * C8745 + be * C8746 +
                  C8733 * (C8738 * C8742 + C8737 * bs[4] * std::pow(C8731, 4)) *
                      C8589)) /
        C8590;
    const double C88 =
        (C8734 * C8732 * C8740 + C8733 * (C8733 * C8745 + C8736 * be) +
         C8733 * C8736 * be) /
        C8588;
    const double C444 = (C8768 * (C8733 * C8745 + C8736 * be)) / C8588;
    const double C728 = (C8783 * (C8733 * C8745 + C8736 * be)) / C8588;
    const double C1376 = (C8734 * C8732 * C8740 + C8745 * C8813) / C8588;
    const double C1753 = (C8783 * C8768 * C8745) / C8588;
    const double C2748 = (C8734 * C8732 * C8740 + C8745 * C8854) / C8588;
    const double C4346 =
        (2 * C8768 * C8745 + C8768 * (C8745 + C8758 * C8813)) / C8588;
    const double C4637 = (C8783 * (C8745 + C8758 * C8813)) / C8588;
    const double C8328 =
        (2 * C8783 * C8745 + C8783 * (C8745 + C8758 * C8854)) / C8588;
    const double C8756 = C8748 * ae;
    const double C8754 = C8733 * C8748;
    const double C8753 = C8748 * be;
    const double C8760 = C8748 + C8757;
    const double C8817 = C8748 + C8816;
    const double C8858 = C8748 + C8857;
    const double C8978 = C8768 * C8748;
    const double C9018 = C8783 * C8748;
    const double C245 = ((C8736 + C8813 * C8738 * C8742) * C8589 +
                         (C8748 + C8813 * C8749 * C8750) * C8589 * C8737) /
                        C8590;
    const double C392 = ((C8736 + C8854 * C8738 * C8742) * C8589 +
                         (C8748 + C8854 * C8749 * C8750) * C8589 * C8737) /
                        C8590;
    const double C83 = 2 * C8733 * C8736 + C8733 * (C8736 + C8748 * C8737);
    const double C439 = C8768 * (C8736 + C8748 * C8737);
    const double C723 = C8783 * (C8736 + C8748 * C8737);
    const double C4345 = 2 * C8768 * C8736 + C8768 * (C8736 + C8748 * C8813);
    const double C4636 = C8783 * (C8736 + C8748 * C8813);
    const double C8327 = 2 * C8783 * C8736 + C8783 * (C8736 + C8748 * C8854);
    const double C129 = (C8742 * C8738 * C8774 + ae * C8733 * C8775 +
                         C8733 * (ae * C8775 + C8733 * C8750 * C8749 * C8774)) /
                        C8590;
    const double C125 = (C8734 * C8732 * C8771 + C8775 * C8737) / C8588;
    const double C126 =
        (2 * C8733 * C8775 + C8733 * (C8775 + C8780 * C8737)) / C8588;
    const double C478 = (C8768 * C8733 * C8775 + C8733 * C8736 * be) / C8588;
    const double C479 =
        (C8768 * (C8775 + C8780 * C8737) + (C8736 + C8748 * C8737) * be) /
        C8588;
    const double C762 = (C8783 * C8733 * C8775) / C8588;
    const double C763 = (C8783 * (C8775 + C8780 * C8737)) / C8588;
    const double C1428 =
        (C8734 * C8732 * C8771 + C8768 * (C8768 * C8775 + C8736 * be) +
         C8768 * C8736 * be) /
        C8588;
    const double C1791 = (C8783 * (C8768 * C8775 + C8736 * be)) / C8588;
    const double C2800 = (C8734 * C8732 * C8771 + C8775 * C8854) / C8588;
    const double C8364 =
        (2 * C8783 * C8775 + C8783 * (C8775 + C8780 * C8854)) / C8588;
    const double C172 = (C8742 * C8738 * C8789 + ae * C8733 * C8790 +
                         C8733 * (ae * C8790 + C8733 * C8750 * C8749 * C8789)) /
                        C8590;
    const double C168 = (C8734 * C8732 * C8786 + C8790 * C8737) / C8588;
    const double C169 =
        (2 * C8733 * C8790 + C8733 * (C8790 + C8795 * C8737)) / C8588;
    const double C510 = (C8768 * C8733 * C8790) / C8588;
    const double C511 = (C8768 * (C8790 + C8795 * C8737)) / C8588;
    const double C794 = (C8783 * C8733 * C8790 + C8733 * C8736 * be) / C8588;
    const double C795 =
        (C8783 * (C8790 + C8795 * C8737) + (C8736 + C8748 * C8737) * be) /
        C8588;
    const double C1466 = (C8734 * C8732 * C8786 + C8790 * C8813) / C8588;
    const double C1829 = (C8783 * C8768 * C8790 + C8768 * C8736 * be) / C8588;
    const double C2842 =
        (C8734 * C8732 * C8786 + C8783 * (C8783 * C8790 + C8736 * be) +
         C8783 * C8736 * be) /
        C8588;
    const double C4419 =
        (2 * C8768 * C8790 + C8768 * (C8790 + C8795 * C8813)) / C8588;
    const double C4694 =
        (C8783 * (C8790 + C8795 * C8813) + (C8736 + C8748 * C8813) * be) /
        C8588;
    const double C214 = (C8742 * C8738 * C8803 + be * C8733 * C8804 +
                         C8733 * (be * C8804 + C8733 * C8750 * C8749 * C8803)) /
                        C8590;
    const double C210 = (C8734 * C8732 * C8800 + C8804 * C8737) / C8588;
    const double C211 =
        (2 * C8733 * C8804 + C8733 * (C8804 + C8809 * C8737)) / C8588;
    const double C542 = (C8768 * C8733 * C8804 + C8733 * C8736 * ae) / C8588;
    const double C543 =
        (C8768 * (C8804 + C8809 * C8737) + (C8736 + C8748 * C8737) * ae) /
        C8588;
    const double C826 = (C8783 * C8733 * C8804) / C8588;
    const double C827 = (C8783 * (C8804 + C8809 * C8737)) / C8588;
    const double C1508 =
        (C8734 * C8732 * C8800 + C8768 * (C8768 * C8804 + C8736 * ae) +
         C8768 * C8736 * ae) /
        C8588;
    const double C1867 = (C8783 * (C8768 * C8804 + C8736 * ae)) / C8588;
    const double C2880 = (C8734 * C8732 * C8800 + C8804 * C8854) / C8588;
    const double C8424 =
        (2 * C8783 * C8804 + C8783 * (C8804 + C8809 * C8854)) / C8588;
    const double C327 = (C8742 * C8738 * C8835 + be * C8733 * C8836 +
                         C8733 * (be * C8836 + C8733 * C8750 * C8749 * C8835)) /
                        C8590;
    const double C323 = (C8734 * C8732 * C8832 + C8836 * C8737) / C8588;
    const double C324 =
        (2 * C8733 * C8836 + C8733 * (C8836 + C8841 * C8737)) / C8588;
    const double C632 = (C8768 * C8733 * C8836) / C8588;
    const double C633 = (C8768 * (C8836 + C8841 * C8737)) / C8588;
    const double C916 = (C8783 * C8733 * C8836 + C8733 * C8736 * ae) / C8588;
    const double C917 =
        (C8783 * (C8836 + C8841 * C8737) + (C8736 + C8748 * C8737) * ae) /
        C8588;
    const double C1628 = (C8734 * C8732 * C8832 + C8836 * C8813) / C8588;
    const double C1977 = (C8783 * C8768 * C8836 + C8768 * C8736 * ae) / C8588;
    const double C3007 =
        (C8734 * C8732 * C8832 + C8783 * (C8783 * C8836 + C8736 * ae) +
         C8783 * C8736 * ae) /
        C8588;
    const double C4543 =
        (2 * C8768 * C8836 + C8768 * (C8836 + C8841 * C8813)) / C8588;
    const double C4804 =
        (C8783 * (C8836 + C8841 * C8813) + (C8736 + C8748 * C8813) * ae) /
        C8588;
    const double C134 = C9228 * C128;
    const double C177 = C9243 * C171;
    const double C251 = C9228 * C244;
    const double C292 = C9243 * C288;
    const double C294 = C9243 * C289;
    const double C360 = C9228 * C356;
    const double C362 = C9228 * C357;
    const double C398 = C9243 * C391;
    const double C4353 = C9168 * C450;
    const double C1473 = C9243 * C512;
    const double C4456 = C9168 * C544;
    const double C1593 = C9243 * C602;
    const double C4546 = C9168 * C634;
    const double C1712 = C9243 * C694;
    const double C5555 = C9168 * C734;
    const double C2807 = C9228 * C764;
    const double C5677 = C9168 * C828;
    const double C2932 = C9228 * C859;
    const double C5799 = C9168 * C918;
    const double C3052 = C9228 * C947;
    const double C5549 = (C8768 * C8746 + C8998 * C8854) / C8588;
    const double C5548 = (C8768 * C8745 + C9003 * C8854) / C8588;
    const double C2801 = (C8733 * C8775 + C8923 * C8854) / C8588;
    const double C1467 = (C8733 * C8790 + C8928 * C8813) / C8588;
    const double C1905 =
        (ae * C8783 * C8923 + be * C8783 * C8924 +
         C8768 * C8783 * C8733 *
             (C8749 * C8750 + C8813 * bs[5] * std::pow(C8739, 5)) * C8589) /
        C8590;
    const double C2881 = (C8733 * C8804 + C8924 * C8854) / C8588;
    const double C2051 =
        (ae * C8768 * C8928 + be * C8768 * C8933 +
         C8783 * C8768 * C8733 *
             (C8749 * C8750 + C8854 * bs[5] * std::pow(C8739, 5)) * C8589) /
        C8590;
    const double C1629 = (C8733 * C8836 + C8933 * C8813) / C8588;
    const double C130 =
        (2 * (ae * C8775 + C8733 * C8779) + ae * (C8775 + C8780 * C8737) +
         C8733 * (C8779 + ae * C8733 * C8780 +
                  C8733 * (ae * C8780 +
                           C8733 * std::pow(C8739, 5) * bs[5] * C8774))) /
        C8590;
    const double C481 = (be * (C8733 * C8746 + C8736 * ae) +
                         C8768 * (ae * C8775 + C8733 * C8779)) /
                        C8590;
    const double C765 = (C8783 * (ae * C8775 + C8733 * C8779)) / C8590;
    const double C766 =
        (C8783 *
         (C8779 + ae * C8733 * C8780 +
          C8733 * (ae * C8780 + C8733 * std::pow(C8739, 5) * bs[5] * C8774))) /
        C8590;
    const double C1430 = (C8742 * C8738 * C8774 + be * C8768 * C8746 +
                          C8768 * (be * C8746 + C8768 * C8779)) /
                         C8590;
    const double C1793 = (C8783 * (be * C8746 + C8768 * C8779)) / C8590;
    const double C2802 = (C8742 * C8738 * C8774 + C8779 * C8854) / C8590;
    const double C2803 =
        (ae * C8775 + C8733 * C8779 +
         (ae * C8780 + C8733 * std::pow(C8739, 5) * bs[5] * C8774) * C8854) /
        C8590;
    const double C4392 =
        (2 * (be * C8746 + C8768 * C8779) + be * (C8746 + C8759 * C8813) +
         C8768 * (C8779 + be * C8768 * C8759 +
                  C8768 * (be * C8759 +
                           C8768 * std::pow(C8739, 5) * bs[5] * C8774))) /
        C8590;
    const double C4667 =
        (C8783 *
         (C8779 + be * C8768 * C8759 +
          C8768 * (be * C8759 + C8768 * std::pow(C8739, 5) * bs[5] * C8774))) /
        C8590;
    const double C5593 =
        (be * C8746 + C8768 * C8779 +
         (be * C8759 + C8768 * std::pow(C8739, 5) * bs[5] * C8774) * C8854) /
        C8590;
    const double C8365 =
        (2 * C8783 * C8779 +
         C8783 * (C8779 + std::pow(C8739, 5) * bs[5] * C8774 * C8854)) /
        C8590;
    const double C215 =
        (2 * (be * C8804 + C8733 * C8808) + be * (C8804 + C8809 * C8737) +
         C8733 * (C8808 + be * C8733 * C8809 +
                  C8733 * (be * C8809 +
                           C8733 * std::pow(C8739, 5) * bs[5] * C8803))) /
        C8590;
    const double C545 = (ae * (C8733 * C8745 + C8736 * be) +
                         C8768 * (be * C8804 + C8733 * C8808)) /
                        C8590;
    const double C829 = (C8783 * (be * C8804 + C8733 * C8808)) / C8590;
    const double C830 =
        (C8783 *
         (C8808 + be * C8733 * C8809 +
          C8733 * (be * C8809 + C8733 * std::pow(C8739, 5) * bs[5] * C8803))) /
        C8590;
    const double C1510 = (C8742 * C8738 * C8803 + ae * C8768 * C8745 +
                          C8768 * (ae * C8745 + C8768 * C8808)) /
                         C8590;
    const double C1869 = (ae * C8783 * C8745 + C8768 * C8783 * C8808) / C8590;
    const double C2882 = (C8742 * C8738 * C8803 + C8808 * C8854) / C8590;
    const double C2883 =
        (be * C8804 + C8733 * C8808 +
         (be * C8809 + C8733 * std::pow(C8739, 5) * bs[5] * C8803) * C8854) /
        C8590;
    const double C4452 =
        (2 * (ae * C8745 + C8768 * C8808) + ae * (C8745 + C8758 * C8813) +
         C8768 * (C8808 + ae * C8768 * C8758 +
                  C8768 * (ae * C8758 +
                           C8768 * std::pow(C8739, 5) * bs[5] * C8803))) /
        C8590;
    const double C4723 =
        (C8783 * C8808 + ae * C8783 * C8768 * C8758 +
         C8768 * (ae * C8783 * C8758 +
                  C8768 * C8783 * std::pow(C8739, 5) * bs[5] * C8803)) /
        C8590;
    const double C5673 =
        (ae * (C8745 + C8758 * C8854) +
         C8768 * (C8808 + std::pow(C8739, 5) * bs[5] * C8803 * C8854)) /
        C8590;
    const double C8425 =
        (2 * C8783 * C8808 +
         C8783 * (C8808 + std::pow(C8739, 5) * bs[5] * C8803 * C8854)) /
        C8590;
    const double C173 =
        (2 * (ae * C8790 + C8733 * C8794) + ae * (C8790 + C8795 * C8737) +
         C8733 * (C8794 + ae * C8733 * C8795 +
                  C8733 * (ae * C8795 +
                           C8733 * std::pow(C8739, 5) * bs[5] * C8789))) /
        C8590;
    const double C513 = (C8768 * (ae * C8790 + C8733 * C8794)) / C8590;
    const double C514 =
        (C8768 *
         (C8794 + ae * C8733 * C8795 +
          C8733 * (ae * C8795 + C8733 * std::pow(C8739, 5) * bs[5] * C8789))) /
        C8590;
    const double C797 = (be * (C8733 * C8746 + C8736 * ae) +
                         C8783 * (ae * C8790 + C8733 * C8794)) /
                        C8590;
    const double C1468 = (C8742 * C8738 * C8789 + C8794 * C8813) / C8590;
    const double C1469 =
        (ae * C8790 + C8733 * C8794 +
         (ae * C8795 + C8733 * std::pow(C8739, 5) * bs[5] * C8789) * C8813) /
        C8590;
    const double C1831 = (be * C8768 * C8746 + C8783 * C8768 * C8794) / C8590;
    const double C2844 = (C8742 * C8738 * C8789 + be * C8783 * C8746 +
                          C8783 * (be * C8746 + C8783 * C8794)) /
                         C8590;
    const double C4420 =
        (2 * C8768 * C8794 +
         C8768 * (C8794 + std::pow(C8739, 5) * bs[5] * C8789 * C8813)) /
        C8590;
    const double C4695 =
        (be * (C8746 + C8759 * C8813) +
         C8783 * (C8794 + std::pow(C8739, 5) * bs[5] * C8789 * C8813)) /
        C8590;
    const double C5637 =
        (C8768 * C8794 + be * C8783 * C8998 +
         C8783 * (be * C8998 +
                  C8783 * C8768 * std::pow(C8739, 5) * bs[5] * C8789)) /
        C8590;
    const double C8397 =
        (2 * (be * C8746 + C8783 * C8794) + be * (C8746 + C8759 * C8854) +
         C8783 * (C8794 + be * C8783 * C8759 +
                  C8783 * (be * C8759 +
                           C8783 * std::pow(C8739, 5) * bs[5] * C8789))) /
        C8590;
    const double C290 =
        (2 * C8733 * C8827 +
         C8733 * (C8827 + std::pow(C8739, 5) * bs[5] * C8824 * C8737)) /
        C8590;
    const double C603 = (ae * C8733 * C8790 + C8768 * C8733 * C8827) / C8590;
    const double C604 =
        (ae * (C8790 + C8795 * C8737) +
         C8768 * (C8827 + std::pow(C8739, 5) * bs[5] * C8824 * C8737)) /
        C8590;
    const double C887 = (be * C8733 * C8804 + C8783 * C8733 * C8827) / C8590;
    const double C888 =
        (be * (C8804 + C8809 * C8737) +
         C8783 * (C8827 + std::pow(C8739, 5) * bs[5] * C8824 * C8737)) /
        C8590;
    const double C1590 = (C8742 * C8738 * C8824 + ae * C8768 * C8790 +
                          C8768 * (ae * C8790 + C8768 * C8827)) /
                         C8590;
    const double C1591 =
        (C8733 * C8827 + ae * C8768 * C8928 +
         C8768 * (ae * C8928 +
                  C8768 * C8733 * std::pow(C8739, 5) * bs[5] * C8824)) /
        C8590;
    const double C1941 = (ae * (C8783 * C8790 + C8736 * be) +
                          C8768 * (be * C8804 + C8783 * C8827)) /
                         C8590;
    const double C2971 = (C8742 * C8738 * C8824 + be * C8783 * C8804 +
                          C8783 * (be * C8804 + C8783 * C8827)) /
                         C8590;
    const double C2972 =
        (C8733 * C8827 + be * C8783 * C8924 +
         C8783 * (be * C8924 +
                  C8783 * C8733 * std::pow(C8739, 5) * bs[5] * C8824)) /
        C8590;
    const double C4514 =
        (2 * (ae * C8790 + C8768 * C8827) + ae * (C8790 + C8795 * C8813) +
         C8768 * (C8827 + ae * C8768 * C8795 +
                  C8768 * (ae * C8795 +
                           C8768 * std::pow(C8739, 5) * bs[5] * C8824))) /
        C8590;
    const double C8492 =
        (2 * (be * C8804 + C8783 * C8827) + be * (C8804 + C8809 * C8854) +
         C8783 * (C8827 + be * C8783 * C8809 +
                  C8783 * (be * C8809 +
                           C8783 * std::pow(C8739, 5) * bs[5] * C8824))) /
        C8590;
    const double C328 =
        (2 * (be * C8836 + C8733 * C8840) + be * (C8836 + C8841 * C8737) +
         C8733 * (C8840 + be * C8733 * C8841 +
                  C8733 * (be * C8841 +
                           C8733 * std::pow(C8739, 5) * bs[5] * C8835))) /
        C8590;
    const double C635 = (C8768 * (be * C8836 + C8733 * C8840)) / C8590;
    const double C636 =
        (C8768 *
         (C8840 + be * C8733 * C8841 +
          C8733 * (be * C8841 + C8733 * std::pow(C8739, 5) * bs[5] * C8835))) /
        C8590;
    const double C919 = (ae * (C8733 * C8745 + C8736 * be) +
                         C8783 * (be * C8836 + C8733 * C8840)) /
                        C8590;
    const double C1630 = (C8742 * C8738 * C8835 + C8840 * C8813) / C8590;
    const double C1631 =
        (be * C8836 + C8733 * C8840 +
         (be * C8841 + C8733 * std::pow(C8739, 5) * bs[5] * C8835) * C8813) /
        C8590;
    const double C1979 = (ae * C8768 * C8745 + C8783 * C8768 * C8840) / C8590;
    const double C3009 = (C8742 * C8738 * C8835 + ae * C8783 * C8745 +
                          C8783 * (ae * C8745 + C8783 * C8840)) /
                         C8590;
    const double C4544 =
        (2 * C8768 * C8840 +
         C8768 * (C8840 + std::pow(C8739, 5) * bs[5] * C8835 * C8813)) /
        C8590;
    const double C4805 =
        (ae * (C8745 + C8758 * C8813) +
         C8783 * (C8840 + std::pow(C8739, 5) * bs[5] * C8835 * C8813)) /
        C8590;
    const double C5797 =
        (C8768 * C8840 + ae * C8783 * C9003 +
         C8783 * (ae * C9003 +
                  C8783 * C8768 * std::pow(C8739, 5) * bs[5] * C8835)) /
        C8590;
    const double C8520 =
        (2 * (ae * C8745 + C8783 * C8840) + ae * (C8745 + C8758 * C8854) +
         C8783 * (C8840 + ae * C8783 * C8758 +
                  C8783 * (ae * C8758 +
                           C8783 * std::pow(C8739, 5) * bs[5] * C8835))) /
        C8590;
    const double C358 =
        (2 * C8733 * C8850 +
         C8733 * (C8850 + std::pow(C8739, 5) * bs[5] * C8847 * C8737)) /
        C8590;
    const double C664 = (be * C8733 * C8836 + C8768 * C8733 * C8850) / C8590;
    const double C665 =
        (be * (C8836 + C8841 * C8737) +
         C8768 * (C8850 + std::pow(C8739, 5) * bs[5] * C8847 * C8737)) /
        C8590;
    const double C948 = (ae * C8733 * C8775 + C8783 * C8733 * C8850) / C8590;
    const double C949 =
        (ae * (C8775 + C8780 * C8737) +
         C8783 * (C8850 + std::pow(C8739, 5) * bs[5] * C8847 * C8737)) /
        C8590;
    const double C1670 = (C8742 * C8738 * C8847 + be * C8768 * C8836 +
                          C8768 * (be * C8836 + C8768 * C8850)) /
                         C8590;
    const double C1671 =
        (C8733 * C8850 + be * C8768 * C8933 +
         C8768 * (be * C8933 +
                  C8768 * C8733 * std::pow(C8739, 5) * bs[5] * C8847)) /
        C8590;
    const double C2015 = (ae * (C8768 * C8775 + C8736 * be) +
                          C8783 * (be * C8836 + C8768 * C8850)) /
                         C8590;
    const double C3049 = (C8742 * C8738 * C8847 + ae * C8783 * C8775 +
                          C8783 * (ae * C8775 + C8783 * C8850)) /
                         C8590;
    const double C3050 =
        (C8733 * C8850 + ae * C8783 * C8923 +
         C8783 * (ae * C8923 +
                  C8783 * C8733 * std::pow(C8739, 5) * bs[5] * C8847)) /
        C8590;
    const double C4575 =
        (2 * (be * C8836 + C8768 * C8850) + be * (C8836 + C8841 * C8813) +
         C8768 * (C8850 + be * C8768 * C8841 +
                  C8768 * (be * C8841 +
                           C8768 * std::pow(C8739, 5) * bs[5] * C8847))) /
        C8590;
    const double C8549 =
        (2 * (ae * C8775 + C8783 * C8850) + ae * (C8775 + C8780 * C8854) +
         C8783 * (C8850 + ae * C8783 * C8780 +
                  C8783 * (ae * C8780 +
                           C8783 * std::pow(C8739, 5) * bs[5] * C8847))) /
        C8590;
    const double C72 = -(C9309 * C9184 * de) / C9185;
    const double C73 = C9296 * C9309;
    const double C436 = -(C9308 * C9190 * de) / C9185;
    const double C437 = C9296 * C9308;
    const double C721 = -(C9307 * C9197 * de) / C9185;
    const double C722 = C9296 * C9307;
    const double C8596 = 2 * C8593;
    const double C78 =
        ((0 * ae) / C8588 - C8593 / C8590) / (2 * C8588) - (0 * be) / C8588;
    const double C3129 = (0 * ae) / C8588 - C8593 / C8590;
    const double C67 = C9292 / C9173;
    const double C65 = C9168 / C9173 - (C9291 * C9280) / C8590;
    const double C66 = C9291 / C8592 - (C9292 * C9280) / C8588;
    const double C3123 = C9291 / C8588;
    const double C1384 = C1013 * C450;
    const double C1517 = C1013 * C544;
    const double C1513 = C1013 * C446;
    const double C1633 = C1013 * C634;
    const double C2756 = C1013 * C734;
    const double C2889 = C1013 * C828;
    const double C2885 = C1013 * C730;
    const double C3012 = C1013 * C918;
    const double C8686 = 2 * C8639;
    const double C1171 =
        (((-4 * C8639) / C8588 -
          (C8618 * (C9228 - (C8618 * 2 * C8639) / C8588) * C8597) / C8588) *
         ae) /
        C8588;
    const double C1172 =
        (-((C9228 - (C8618 * 2 * C8639) / C8588) * C8597) / C8588) /
        (2 * C8588);
    const double C3165 = (-(0 * be) / C8588) / (2 * C8588) -
                         ((C9228 - (C8618 * 2 * C8639) / C8588) * be) / C8588;
    const double C3166 =
        (-(2 * C8639) / C8588) / (2 * C8588) - (0 * be) / C8588;
    const double C3277 =
        -(((-4 * C8639) / C8588 -
           (C8618 * (C9228 - (C8618 * 2 * C8639) / C8588) * C8597) / C8588) *
          be) /
        C8588;
    const double C3278 =
        (-((C9228 - (C8618 * 2 * C8639) / C8588) * C8597) / C8588) /
        (2 * C8588);
    const double C4133 =
        ((0 * ae) / C8588 - C8639 / C8590) / (2 * C8588) - (0 * be) / C8588;
    const double C137 = C122 * C82;
    const double C135 = C122 * C87;
    const double C133 = C122 * C81;
    const double C250 = C122 * C209;
    const double C248 = C122 * C124;
    const double C361 = C122 * C322;
    const double C2125 = C122 * C724;
    const double C2808 = C122 * C731;
    const double C2806 = C122 * C725;
    const double C2931 = C122 * C825;
    const double C2929 = C122 * C761;
    const double C3053 = C122 * C915;
    const double C8368 = C122 * C2745;
    const double C253 = C242 * C82;
    const double C249 = C242 * C81;
    const double C2241 = C242 * C724;
    const double C2930 = C242 * C725;
    const double C8460 = C242 * C2745;
    const double C1063 = C1055 * C87;
    const double C1059 = C1055 * C81;
    const double C1176 = C1055 * C209;
    const double C1174 = C1055 * C124;
    const double C1293 = C1055 * C322;
    const double C7566 = C1055 * C731;
    const double C7562 = C1055 * C725;
    const double C7673 = C1055 * C825;
    const double C7671 = C1055 * C761;
    const double C7788 = C1055 * C915;
    const double C1061 = C1056 * C440;
    const double C7564 = C1056 * C1750;
    const double C4132 =
        (((C9228 - (C8618 * 2 * C8639) / C8588) * ae) / C8588 - C8678 / C8592) /
            (2 * C8588) -
        ((C8618 * ((0 * ae) / C8588 - C8639 / C8590) + C9298) * be) / C8588;
    const double C4102 = C9298 / C9173;
    const double C1015 = C9297 / C8588;
    const double C4100 = C9228 / C9173 - (C9297 * C9289) / C8590;
    const double C4101 = C9297 / C8592 - (C9298 * C9289) / C8588;
    const double C3172 = C3125 * C128;
    const double C3168 = C3125 * C124;
    const double C3283 = C3125 * C244;
    const double C3396 = C3125 * C356;
    const double C5599 = C3125 * C764;
    const double C5595 = C3125 * C761;
    const double C5717 = C3125 * C859;
    const double C5836 = C3125 * C947;
    const double C8716 = 2 * C8651;
    const double C2388 =
        (((-4 * C8651) / C8588 -
          (C8621 * (C9243 - (C8621 * 2 * C8651) / C8588) * C8597) / C8588) *
         ae) /
        C8588;
    const double C2389 =
        (-((C9243 - (C8621 * 2 * C8651) / C8588) * C8597) / C8588) /
        (2 * C8588);
    const double C5978 = (-(0 * be) / C8588) / (2 * C8588) -
                         ((C9243 - (C8621 * 2 * C8651) / C8588) * be) / C8588;
    const double C5979 =
        (-(2 * C8651) / C8588) / (2 * C8588) - (0 * be) / C8588;
    const double C6196 =
        -(((-4 * C8651) / C8588 -
           (C8621 * (C9243 - (C8621 * 2 * C8651) / C8588) * C8597) / C8588) *
          be) /
        C8588;
    const double C6197 =
        (-((C9243 - (C8621 * 2 * C8651) / C8588) * C8597) / C8588) /
        (2 * C8588);
    const double C7907 =
        ((0 * ae) / C8588 - C8651 / C8590) / (2 * C8588) - (0 * be) / C8588;
    const double C180 = C165 * C82;
    const double C178 = C165 * C87;
    const double C176 = C165 * C81;
    const double C293 = C165 * C209;
    const double C397 = C165 * C322;
    const double C395 = C165 * C167;
    const double C1101 = C165 * C440;
    const double C1474 = C165 * C447;
    const double C1472 = C165 * C441;
    const double C1594 = C165 * C541;
    const double C1711 = C165 * C631;
    const double C1709 = C165 * C509;
    const double C4423 = C165 * C1373;
    const double C400 = C389 * C82;
    const double C396 = C389 * C81;
    const double C1332 = C389 * C440;
    const double C1710 = C389 * C441;
    const double C4605 = C389 * C1373;
    const double C2169 = C2161 * C87;
    const double C2165 = C2161 * C81;
    const double C2282 = C2161 * C209;
    const double C2393 = C2161 * C322;
    const double C2391 = C2161 * C167;
    const double C5283 = C2161 * C447;
    const double C5279 = C2161 * C441;
    const double C5393 = C2161 * C541;
    const double C5502 = C2161 * C631;
    const double C5500 = C2161 * C509;
    const double C2167 = C2162 * C724;
    const double C5281 = C2162 * C1750;
    const double C7906 =
        (((C9243 - (C8621 * 2 * C8651) / C8588) * ae) / C8588 - C8708 / C8592) /
            (2 * C8588) -
        ((C8621 * ((0 * ae) / C8588 - C8651 / C8590) + C9300) * be) / C8588;
    const double C7852 = C9300 / C9173;
    const double C2087 = C9299 / C8588;
    const double C7850 = C9243 / C9173 - (C9299 * C9290) / C8590;
    const double C7851 = C9299 / C8592 - (C9300 * C9290) / C8588;
    const double C5985 = C5908 * C171;
    const double C5981 = C5908 * C167;
    const double C6091 = C5908 * C288;
    const double C6202 = C5908 * C391;
    const double C7267 = C5908 * C512;
    const double C7263 = C5908 * C509;
    const double C7373 = C5908 * C602;
    const double C7482 = C5908 * C694;
    const double C139 = C122 * C89;
    const double C182 = C165 * C89;
    const double C1065 = C1056 * C445;
    const double C1103 = C165 * C445;
    const double C2127 = C122 * C729;
    const double C2171 = C2162 * C729;
    const double C4425 = C165 * C1377;
    const double C5285 = C2162 * C1754;
    const double C7568 = C1056 * C1754;
    const double C8370 = C122 * C2749;
    const double C1515 = C9292 * C444;
    const double C3588 = C9292 * C444;
    const double C2887 = C9292 * C728;
    const double C6671 = C9292 * C728;
    const double C4458 = C9168 * C1376;
    const double C5320 = C9168 * C1753;
    const double C8427 = C9168 * C2748;
    const double C8765 = C8762 + C8756;
    const double C8981 = C8979 + C8756;
    const double C9021 = C9019 + C8756;
    const double C1942 =
        (ae * (C8783 * C8928 + C8754 * be) +
         C8768 * (be * C8924 +
                  C8783 * C8733 * std::pow(C8739, 5) * bs[5] * C8824)) /
        C8590;
    const double C2016 =
        (ae * (C8768 * C8923 + C8754 * be) +
         C8783 * (be * C8933 +
                  C8768 * C8733 * std::pow(C8739, 5) * bs[5] * C8847)) /
        C8590;
    const double C1429 = (C8733 * C8775 + C8768 * (C8768 * C8923 + C8754 * be) +
                          C8768 * C8754 * be) /
                         C8588;
    const double C1509 = (C8733 * C8804 + C8768 * (C8768 * C8924 + C8754 * ae) +
                          C8768 * C8754 * ae) /
                         C8588;
    const double C1792 = (C8783 * (C8768 * C8923 + C8754 * be)) / C8588;
    const double C1830 = (C8783 * C8768 * C8928 + C8768 * C8754 * be) / C8588;
    const double C1868 = (C8783 * (C8768 * C8924 + C8754 * ae)) / C8588;
    const double C1978 = (C8783 * C8768 * C8933 + C8768 * C8754 * ae) / C8588;
    const double C2843 = (C8733 * C8790 + C8783 * (C8783 * C8928 + C8754 * be) +
                          C8783 * C8754 * be) /
                         C8588;
    const double C3008 = (C8733 * C8836 + C8783 * (C8783 * C8933 + C8754 * ae) +
                          C8783 * C8754 * ae) /
                         C8588;
    const double C1372 = C8733 * C8736 + C8754 * C8813;
    const double C1749 = C8783 * C8768 * C8754;
    const double C2744 = C8733 * C8736 + C8754 * C8854;
    const double C8764 = C8761 + C8753;
    const double C8980 = C8977 + C8753;
    const double C9020 = C9017 + C8753;
    const double C5761 =
        (ae * (C8790 + C8783 * (C8783 * C8795 + C8753) + C8783 * C8748 * be) +
         C8768 * (C8827 + be * C8783 * C8809 +
                  C8783 * (be * C8809 +
                           C8783 * std::pow(C8739, 5) * bs[5] * C8824))) /
        C8590;
    const double C8763 = C8760 * C8589;
    const double C8818 = C8817 * C8589;
    const double C8859 = C8858 * C8589;
    const double C4777 =
        (be * C8804 + C8783 * C8827 +
         ae * (C8783 * C8768 * C8795 + C8978 * be) +
         C8768 * (ae * (C8783 * C8795 + C8753) +
                  C8768 * (be * C8809 +
                           C8783 * std::pow(C8739, 5) * bs[5] * C8824))) /
        C8590;
    const double C5636 = (C8768 * C8790 + C8783 * (C8783 * C9006 + C8978 * be) +
                          C8783 * C8978 * be) /
                         C8588;
    const double C5796 = (C8768 * C8836 + C8783 * (C8783 * C9007 + C8978 * ae) +
                          C8783 * C8978 * ae) /
                         C8588;
    const double C5547 = C8768 * C8736 + C8978 * C8854;
    const double C255 = C9228 * C245;
    const double C402 = C9243 * C392;
    const double C138 = C9228 * C129;
    const double C136 = C9228 * C125;
    const double C252 = C122 * C125;
    const double C1060 = C9298 * C478;
    const double C1178 = C1056 * C478;
    const double C3170 = C9298 * C478;
    const double C2124 = C9228 * C762;
    const double C2240 = C122 * C762;
    const double C5597 = C9298 * C1791;
    const double C7563 = C9298 * C1791;
    const double C7675 = C1056 * C1791;
    const double C8367 = C9228 * C2800;
    const double C8459 = C122 * C2800;
    const double C181 = C9243 * C172;
    const double C179 = C9243 * C168;
    const double C399 = C165 * C168;
    const double C1100 = C9243 * C510;
    const double C1331 = C165 * C510;
    const double C2166 = C9300 * C794;
    const double C2395 = C2162 * C794;
    const double C5983 = C9300 * C794;
    const double C4422 = C9243 * C1466;
    const double C4604 = C165 * C1466;
    const double C5280 = C9300 * C1829;
    const double C5504 = C2162 * C1829;
    const double C7265 = C9300 * C1829;
    const double C254 = C122 * C210;
    const double C295 = C165 * C210;
    const double C1180 = C1056 * C542;
    const double C1223 = C165 * C542;
    const double C2242 = C122 * C826;
    const double C2284 = C2162 * C826;
    const double C4517 = C165 * C1508;
    const double C5395 = C2162 * C1867;
    const double C7677 = C1056 * C1867;
    const double C8461 = C122 * C2880;
    const double C363 = C122 * C323;
    const double C401 = C165 * C323;
    const double C1295 = C1056 * C632;
    const double C1333 = C165 * C632;
    const double C2354 = C122 * C916;
    const double C2397 = C2162 * C916;
    const double C4606 = C165 * C1628;
    const double C5506 = C2162 * C1977;
    const double C7790 = C1056 * C1977;
    const double C8552 = C122 * C3007;
    const double C1064 = C9298 * C481;
    const double C3174 = C9298 * C481;
    const double C2126 = C9228 * C765;
    const double C5601 = C9298 * C1793;
    const double C7567 = C9298 * C1793;
    const double C8369 = C9228 * C2802;
    const double C1519 = C9292 * C545;
    const double C3592 = C9292 * C545;
    const double C2891 = C9292 * C829;
    const double C6675 = C9292 * C829;
    const double C4460 = C9168 * C1510;
    const double C5322 = C9168 * C1869;
    const double C8429 = C9168 * C2882;
    const double C1102 = C9243 * C513;
    const double C2170 = C9300 * C797;
    const double C5987 = C9300 * C797;
    const double C4424 = C9243 * C1468;
    const double C5284 = C9300 * C1831;
    const double C7269 = C9300 * C1831;
    const double C1222 = C9243 * C603;
    const double C2283 = C9300 * C887;
    const double C6093 = C9300 * C887;
    const double C4516 = C9243 * C1590;
    const double C5394 = C9300 * C1941;
    const double C7375 = C9300 * C1941;
    const double C1635 = C9292 * C635;
    const double C3698 = C9292 * C635;
    const double C3014 = C9292 * C919;
    const double C6783 = C9292 * C919;
    const double C4548 = C9168 * C1630;
    const double C5430 = C9168 * C1979;
    const double C8522 = C9168 * C3009;
    const double C1294 = C9298 * C664;
    const double C3398 = C9298 * C664;
    const double C2353 = C9228 * C948;
    const double C5838 = C9298 * C2015;
    const double C7789 = C9298 * C2015;
    const double C8551 = C9228 * C3049;
    const double C8598 = C8586 * C8596;
    const double C1019 = (-C8596 / C8588) / (2 * C8588) - (0 * be) / C8588;
    const double C4103 = -C8596 / C8588;
    const double C3476 = C3129 * C445;
    const double C3474 = C3129 * C444;
    const double C3593 = C3129 * C542;
    const double C3589 = C3129 * C440;
    const double C3699 = C3129 * C632;
    const double C6559 = C3129 * C729;
    const double C6557 = C3129 * C728;
    const double C6676 = C3129 * C826;
    const double C6672 = C3129 * C724;
    const double C6784 = C3129 * C916;
    const double C3473 = C3123 * C450;
    const double C3590 = C3123 * C544;
    const double C3586 = C3123 * C446;
    const double C3696 = C3123 * C634;
    const double C6556 = C3123 * C734;
    const double C6673 = C3123 * C828;
    const double C6669 = C3123 * C730;
    const double C6781 = C3123 * C918;
    const double C74 =
        (((0 - (C8586 * C8587) / C8588) * ae) / C8588 - (0 * be) / C8592) /
            (2 * C8588) -
        ((C8586 * (((C9168 - (C8586 * 2 * C8593) / C8588) * ae) / C8588 -
                   C8587 / C8592) +
          C3123) *
         be) /
            C8588 +
        (0 * ae) / C8588 - C8593 / C8590;
    const double C8687 = C8618 * C8686;
    const double C1175 = C1171 * C81;
    const double C7672 = C1171 * C725;
    const double C1179 = C1172 * C440;
    const double C7676 = C1172 * C1750;
    const double C3173 = C3165 * C87;
    const double C3169 = C3165 * C81;
    const double C3282 = C3165 * C209;
    const double C3280 = C3165 * C124;
    const double C3397 = C3165 * C322;
    const double C5600 = C3165 * C731;
    const double C5596 = C3165 * C725;
    const double C5716 = C3165 * C825;
    const double C5714 = C3165 * C761;
    const double C5837 = C3165 * C915;
    const double C3175 = C3166 * C445;
    const double C3171 = C3166 * C440;
    const double C3286 = C3166 * C542;
    const double C3284 = C3166 * C478;
    const double C3399 = C3166 * C632;
    const double C5602 = C3166 * C1754;
    const double C5598 = C3166 * C1750;
    const double C5720 = C3166 * C1867;
    const double C5718 = C3166 * C1791;
    const double C5839 = C3166 * C1977;
    const double C3281 = C3277 * C81;
    const double C5715 = C3277 * C725;
    const double C3285 = C3278 * C440;
    const double C5719 = C3278 * C1750;
    const double C256 = C248 - C249;
    const double C2934 = C2929 - C2930;
    const double C1062 = C1015 * C128;
    const double C1058 = C1015 * C124;
    const double C1177 = C1015 * C244;
    const double C1292 = C1015 * C356;
    const double C7565 = C1015 * C764;
    const double C7561 = C1015 * C761;
    const double C7674 = C1015 * C859;
    const double C7787 = C1015 * C947;
    const double C4131 =
        (((0 - (C8618 * C8678) / C8588) * ae) / C8588 - (0 * be) / C8592) /
            (2 * C8588) -
        ((C8618 * (((C9228 - (C8618 * 2 * C8639) / C8588) * ae) / C8588 -
                   C8678 / C8592) +
          C1015) *
         be) /
            C8588 +
        (0 * ae) / C8588 - C8639 / C8590;
    const double C8717 = C8621 * C8716;
    const double C2392 = C2388 * C81;
    const double C5501 = C2388 * C441;
    const double C2396 = C2389 * C724;
    const double C5505 = C2389 * C1750;
    const double C5986 = C5978 * C87;
    const double C5982 = C5978 * C81;
    const double C6092 = C5978 * C209;
    const double C6201 = C5978 * C322;
    const double C6199 = C5978 * C167;
    const double C7268 = C5978 * C447;
    const double C7264 = C5978 * C441;
    const double C7374 = C5978 * C541;
    const double C7481 = C5978 * C631;
    const double C7479 = C5978 * C509;
    const double C5988 = C5979 * C729;
    const double C5984 = C5979 * C724;
    const double C6094 = C5979 * C826;
    const double C6205 = C5979 * C916;
    const double C6203 = C5979 * C794;
    const double C7270 = C5979 * C1754;
    const double C7266 = C5979 * C1750;
    const double C7376 = C5979 * C1867;
    const double C7485 = C5979 * C1977;
    const double C7483 = C5979 * C1829;
    const double C6200 = C6196 * C81;
    const double C7480 = C6196 * C441;
    const double C6204 = C6197 * C724;
    const double C7484 = C6197 * C1750;
    const double C403 = C395 - C396;
    const double C1713 = C1709 - C1710;
    const double C2168 = C2087 * C171;
    const double C2164 = C2087 * C167;
    const double C2281 = C2087 * C288;
    const double C2394 = C2087 * C391;
    const double C5282 = C2087 * C512;
    const double C5278 = C2087 * C509;
    const double C5392 = C2087 * C602;
    const double C5503 = C2087 * C694;
    const double C7905 =
        (((0 - (C8621 * C8708) / C8588) * ae) / C8588 - (0 * be) / C8592) /
            (2 * C8588) -
        ((C8621 * (((C9243 - (C8621 * 2 * C8651) / C8588) * ae) / C8588 -
                   C8708 / C8592) +
          C2087) *
         be) /
            C8588 +
        (0 * ae) / C8588 - C8651 / C8590;
    const double C482 =
        (be * (C8746 + C8733 * C8765 + C8754 * ae) +
         C8768 * (C8779 + ae * C8733 * C8780 +
                  C8733 * (ae * C8780 +
                           C8733 * std::pow(C8739, 5) * bs[5] * C8774))) /
        C8590;
    const double C798 =
        (be * (C8746 + C8733 * C8765 + C8754 * ae) +
         C8783 * (C8794 + ae * C8733 * C8795 +
                  C8733 * (ae * C8795 +
                           C8733 * std::pow(C8739, 5) * bs[5] * C8789))) /
        C8590;
    const double C1431 =
        (ae * C8775 + C8733 * C8779 + be * C8768 * C8765 +
         C8768 *
             (be * C8765 + C8768 * (ae * C8780 + C8733 * std::pow(C8739, 5) *
                                                     bs[5] * C8774))) /
        C8590;
    const double C1794 =
        (C8783 *
         (be * C8765 +
          C8768 * (ae * C8780 + C8733 * std::pow(C8739, 5) * bs[5] * C8774))) /
        C8590;
    const double C1832 =
        (be * C8768 * C8765 +
         C8783 * C8768 *
             (ae * C8795 + C8733 * std::pow(C8739, 5) * bs[5] * C8789)) /
        C8590;
    const double C2845 =
        (ae * C8790 + C8733 * C8794 + be * C8783 * C8765 +
         C8783 *
             (be * C8765 + C8783 * (ae * C8795 + C8733 * std::pow(C8739, 5) *
                                                     bs[5] * C8789))) /
        C8590;
    const double C91 = (2 * (C8733 * C8746 + C8736 * ae) +
                        C8733 * (C8746 + C8733 * C8765 + C8754 * ae) +
                        (C8736 + C8748 * C8737) * ae) /
                       C8588;
    const double C443 = (C8768 * (C8746 + C8733 * C8765 + C8754 * ae)) / C8588;
    const double C727 = (C8783 * (C8746 + C8733 * C8765 + C8754 * ae)) / C8588;
    const double C1375 = (C8733 * C8746 + C8736 * ae + C8765 * C8813) / C8588;
    const double C1752 = (C8783 * C8768 * C8765) / C8588;
    const double C2747 = (C8733 * C8746 + C8736 * ae + C8765 * C8854) / C8588;
    const double C4451 = (2 * (C8768 * C8804 + C8736 * ae) +
                          C8768 * (C8804 + C8768 * C8981 + C8978 * ae) +
                          (C8736 + C8748 * C8813) * ae) /
                         C8588;
    const double C4722 = (C8783 * (C8804 + C8768 * C8981 + C8978 * ae)) / C8588;
    const double C5672 = (C8768 * C8804 + C8736 * ae + C8981 * C8854) / C8588;
    const double C8519 = (2 * (C8783 * C8836 + C8736 * ae) +
                          C8783 * (C8836 + C8783 * C9021 + C9018 * ae) +
                          (C8736 + C8748 * C8854) * ae) /
                         C8588;
    const double C546 =
        (ae * (C8745 + C8733 * C8764 + C8754 * be) +
         C8768 * (C8808 + be * C8733 * C8809 +
                  C8733 * (be * C8809 +
                           C8733 * std::pow(C8739, 5) * bs[5] * C8803))) /
        C8590;
    const double C920 =
        (ae * (C8745 + C8733 * C8764 + C8754 * be) +
         C8783 * (C8840 + be * C8733 * C8841 +
                  C8733 * (be * C8841 +
                           C8733 * std::pow(C8739, 5) * bs[5] * C8835))) /
        C8590;
    const double C1511 =
        (be * C8804 + C8733 * C8808 + ae * C8768 * C8764 +
         C8768 *
             (ae * C8764 + C8768 * (be * C8809 + C8733 * std::pow(C8739, 5) *
                                                     bs[5] * C8803))) /
        C8590;
    const double C1870 =
        (ae * C8783 * C8764 +
         C8768 * C8783 *
             (be * C8809 + C8733 * std::pow(C8739, 5) * bs[5] * C8803)) /
        C8590;
    const double C1980 =
        (ae * C8768 * C8764 +
         C8783 * C8768 *
             (be * C8841 + C8733 * std::pow(C8739, 5) * bs[5] * C8835)) /
        C8590;
    const double C3010 =
        (be * C8836 + C8733 * C8840 + ae * C8783 * C8764 +
         C8783 *
             (ae * C8764 + C8783 * (be * C8841 + C8733 * std::pow(C8739, 5) *
                                                     bs[5] * C8835))) /
        C8590;
    const double C90 = (2 * (C8733 * C8745 + C8736 * be) +
                        C8733 * (C8745 + C8733 * C8764 + C8754 * be) +
                        (C8736 + C8748 * C8737) * be) /
                       C8588;
    const double C442 = (C8768 * (C8745 + C8733 * C8764 + C8754 * be)) / C8588;
    const double C726 = (C8783 * (C8745 + C8733 * C8764 + C8754 * be)) / C8588;
    const double C1374 = (C8733 * C8745 + C8736 * be + C8764 * C8813) / C8588;
    const double C1751 = (C8783 * C8768 * C8764) / C8588;
    const double C2746 = (C8733 * C8745 + C8736 * be + C8764 * C8854) / C8588;
    const double C4832 =
        (ae * (C8775 + C8768 * C8980 + C8978 * be) +
         C8783 * (C8850 + be * C8768 * C8841 +
                  C8768 * (be * C8841 +
                           C8768 * std::pow(C8739, 5) * bs[5] * C8847))) /
        C8590;
    const double C5834 =
        (be * C8836 + C8768 * C8850 + ae * C8783 * C8980 +
         C8783 *
             (ae * C8980 + C8783 * (be * C8841 + C8768 * std::pow(C8739, 5) *
                                                     bs[5] * C8847))) /
        C8590;
    const double C4391 = (2 * (C8768 * C8775 + C8736 * be) +
                          C8768 * (C8775 + C8768 * C8980 + C8978 * be) +
                          (C8736 + C8748 * C8813) * be) /
                         C8588;
    const double C4666 = (C8783 * (C8775 + C8768 * C8980 + C8978 * be)) / C8588;
    const double C5592 = (C8768 * C8775 + C8736 * be + C8980 * C8854) / C8588;
    const double C8396 = (2 * (C8783 * C8790 + C8736 * be) +
                          C8783 * (C8790 + C8783 * C9020 + C9018 * be) +
                          (C8736 + C8748 * C8854) * be) /
                         C8588;
    const double C95 =
        (2 * (ae * C8745 + be * C8746 + C8733 * C8763) +
         ae * (C8745 + C8733 * C8764 + C8754 * be) +
         be * (C8746 + C8733 * C8765 + C8754 * ae) +
         C8733 * (C8763 + ae * C8764 + be * C8765 +
                  C8733 * (ae * C8758 + be * C8759 +
                           C8733 *
                               (C8749 * C8750 +
                                C8737 * bs[5] * std::pow(C8739, 5)) *
                               C8589))) /
        C8590;
    const double C448 =
        (C8768 * C8763 + ae * C8768 * C8764 + be * C8768 * C8765 +
         C8733 * (ae * C8768 * C8758 + be * C8768 * C8759 +
                  C8733 * C8768 *
                      (C8749 * C8750 + C8737 * bs[5] * std::pow(C8739, 5)) *
                      C8589)) /
        C8590;
    const double C449 =
        (ae * C8768 * C8745 + be * C8768 * C8746 + C8733 * C8768 * C8763) /
        C8590;
    const double C732 =
        (C8783 * C8763 + ae * C8783 * C8764 + be * C8783 * C8765 +
         C8733 * (ae * C8783 * C8758 + be * C8783 * C8759 +
                  C8733 * C8783 *
                      (C8749 * C8750 + C8737 * bs[5] * std::pow(C8739, 5)) *
                      C8589)) /
        C8590;
    const double C733 =
        (ae * C8783 * C8745 + be * C8783 * C8746 + C8733 * C8783 * C8763) /
        C8590;
    const double C1378 =
        (ae * (C8745 + C8758 * C8813) + be * (C8746 + C8759 * C8813) +
         C8733 * (C8763 + (C8749 * C8750 + C8737 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8813)) /
        C8590;
    const double C1379 =
        ((C8736 + C8737 * C8738 * C8742) * C8589 + C8763 * C8813) / C8590;
    const double C1756 = (C8783 * C8768 * C8763) / C8590;
    const double C2750 =
        (ae * (C8745 + C8758 * C8854) + be * (C8746 + C8759 * C8854) +
         C8733 * (C8763 + (C8749 * C8750 + C8737 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8854)) /
        C8590;
    const double C2751 =
        ((C8736 + C8737 * C8738 * C8742) * C8589 + C8763 * C8854) / C8590;
    const double C4348 =
        (2 * C8768 * C8763 +
         C8768 * (C8763 + (C8749 * C8750 + C8737 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8813)) /
        C8590;
    const double C4639 =
        (C8783 * (C8763 + (C8749 * C8750 + C8737 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8813)) /
        C8590;
    const double C5550 =
        (C8768 * C8763 +
         C8768 * (C8749 * C8750 + C8737 * bs[5] * std::pow(C8739, 5)) * C8589 *
             C8854) /
        C8590;
    const double C8330 =
        (2 * C8783 * C8763 +
         C8783 * (C8763 + (C8749 * C8750 + C8737 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8854)) /
        C8590;
    const double C246 =
        (2 * C8733 * C8818 +
         C8733 * (C8818 + (C8749 * C8750 + C8813 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8737)) /
        C8590;
    const double C573 =
        (ae * (C8775 + C8780 * C8737) + be * (C8804 + C8809 * C8737) +
         C8768 * (C8818 + (C8749 * C8750 + C8813 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8737)) /
        C8590;
    const double C574 =
        (ae * C8733 * C8775 + be * C8733 * C8804 + C8768 * C8733 * C8818) /
        C8590;
    const double C857 =
        (C8783 * (C8818 + (C8749 * C8750 + C8813 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8737)) /
        C8590;
    const double C858 = (C8783 * C8733 * C8818) / C8590;
    const double C1554 =
        (C8733 * C8818 + ae * (C8768 * C8923 + C8754 * be) +
         be * (C8768 * C8924 + C8754 * ae) +
         C8768 * (ae * C8923 + be * C8924 +
                  C8768 * C8733 *
                      (C8749 * C8750 + C8813 * bs[5] * std::pow(C8739, 5)) *
                      C8589)) /
        C8590;
    const double C1555 =
        ((C8736 + C8813 * C8738 * C8742) * C8589 +
         ae * (C8768 * C8775 + C8736 * be) + be * (C8768 * C8804 + C8736 * ae) +
         C8768 * (ae * C8775 + be * C8804 + C8768 * C8818)) /
        C8590;
    const double C1906 =
        (ae * C8783 * C8775 + be * C8783 * C8804 + C8768 * C8783 * C8818) /
        C8590;
    const double C2926 =
        (C8733 * C8818 +
         C8733 * (C8749 * C8750 + C8813 * bs[5] * std::pow(C8739, 5)) * C8589 *
             C8854) /
        C8590;
    const double C2927 =
        ((C8736 + C8813 * C8738 * C8742) * C8589 + C8818 * C8854) / C8590;
    const double C4487 =
        (2 * (ae * C8775 + be * C8804 + C8768 * C8818) +
         ae * (C8775 + C8768 * C8980 + C8978 * be) +
         be * (C8804 + C8768 * C8981 + C8978 * ae) +
         C8768 * (C8818 + ae * C8980 + be * C8981 +
                  C8768 * (ae * C8780 + be * C8809 +
                           C8768 *
                               (C8749 * C8750 +
                                C8813 * bs[5] * std::pow(C8739, 5)) *
                               C8589))) /
        C8590;
    const double C4750 =
        (C8783 * C8818 + ae * C8783 * C8980 + be * C8783 * C8981 +
         C8768 * (ae * C8783 * C8780 + be * C8783 * C8809 +
                  C8768 * C8783 *
                      (C8749 * C8750 + C8813 * bs[5] * std::pow(C8739, 5)) *
                      C8589)) /
        C8590;
    const double C5712 =
        (ae * (C8775 + C8780 * C8854) + be * (C8804 + C8809 * C8854) +
         C8768 * (C8818 + (C8749 * C8750 + C8813 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8854)) /
        C8590;
    const double C8456 =
        (2 * C8783 * C8818 +
         C8783 * (C8818 + (C8749 * C8750 + C8813 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8854)) /
        C8590;
    const double C393 =
        (2 * C8733 * C8859 +
         C8733 * (C8859 + (C8749 * C8750 + C8854 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8737)) /
        C8590;
    const double C692 =
        (C8768 * (C8859 + (C8749 * C8750 + C8854 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8737)) /
        C8590;
    const double C693 = (C8768 * C8733 * C8859) / C8590;
    const double C976 =
        (ae * (C8790 + C8795 * C8737) + be * (C8836 + C8841 * C8737) +
         C8783 * (C8859 + (C8749 * C8750 + C8854 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8737)) /
        C8590;
    const double C977 =
        (ae * C8733 * C8790 + be * C8733 * C8836 + C8783 * C8733 * C8859) /
        C8590;
    const double C1706 =
        (C8733 * C8859 +
         C8733 * (C8749 * C8750 + C8854 * bs[5] * std::pow(C8739, 5)) * C8589 *
             C8813) /
        C8590;
    const double C1707 =
        ((C8736 + C8854 * C8738 * C8742) * C8589 + C8859 * C8813) / C8590;
    const double C2052 =
        (ae * C8768 * C8790 + be * C8768 * C8836 + C8783 * C8768 * C8859) /
        C8590;
    const double C3087 =
        (C8733 * C8859 + ae * (C8783 * C8928 + C8754 * be) +
         be * (C8783 * C8933 + C8754 * ae) +
         C8783 * (ae * C8928 + be * C8933 +
                  C8783 * C8733 *
                      (C8749 * C8750 + C8854 * bs[5] * std::pow(C8739, 5)) *
                      C8589)) /
        C8590;
    const double C3088 =
        ((C8736 + C8854 * C8738 * C8742) * C8589 +
         ae * (C8783 * C8790 + C8736 * be) + be * (C8783 * C8836 + C8736 * ae) +
         C8783 * (ae * C8790 + be * C8836 + C8783 * C8859)) /
        C8590;
    const double C4602 =
        (2 * C8768 * C8859 +
         C8768 * (C8859 + (C8749 * C8750 + C8854 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8813)) /
        C8590;
    const double C4859 =
        (ae * (C8790 + C8795 * C8813) + be * (C8836 + C8841 * C8813) +
         C8783 * (C8859 + (C8749 * C8750 + C8854 * bs[5] * std::pow(C8739, 5)) *
                              C8589 * C8813)) /
        C8590;
    const double C5873 =
        (C8768 * C8859 + ae * (C8783 * C9006 + C8978 * be) +
         be * (C8783 * C9007 + C8978 * ae) +
         C8783 * (ae * C9006 + be * C9007 +
                  C8783 * C8768 *
                      (C8749 * C8750 + C8854 * bs[5] * std::pow(C8739, 5)) *
                      C8589)) /
        C8590;
    const double C8578 =
        (2 * (ae * C8790 + be * C8836 + C8783 * C8859) +
         ae * (C8790 + C8783 * C9020 + C9018 * be) +
         be * (C8836 + C8783 * C9021 + C9018 * ae) +
         C8783 * (C8859 + ae * C9020 + be * C9021 +
                  C8783 * (ae * C8795 + be * C8841 +
                           C8783 *
                               (C8749 * C8750 +
                                C8854 * bs[5] * std::pow(C8739, 5)) *
                               C8589))) /
        C8590;
    const double C257 = C252 - C253;
    const double C2244 = C2240 - C2241;
    const double C8463 = C8459 - C8460;
    const double C404 = C399 - C400;
    const double C1335 = C1331 - C1332;
    const double C4608 = C4604 - C4605;
    const double C8599 = C8598 / C8588;
    const double C1387 = C1019 * C445;
    const double C1385 = C1019 * C444;
    const double C1520 = C1019 * C542;
    const double C1516 = C1019 * C440;
    const double C1636 = C1019 * C632;
    const double C2759 = C1019 * C729;
    const double C2757 = C1019 * C728;
    const double C2892 = C1019 * C826;
    const double C2888 = C1019 * C724;
    const double C3015 = C1019 * C916;
    const double C4356 = C4103 * C1377;
    const double C4354 = C4103 * C1376;
    const double C4352 = C4103 * C447;
    const double C4350 = C4103 * C446;
    const double C4461 = C4103 * C1508;
    const double C4459 = C4103 * C1373;
    const double C4457 = C4103 * C541;
    const double C4455 = C4103 * C441;
    const double C4549 = C4103 * C1628;
    const double C4547 = C4103 * C631;
    const double C5204 = C4103 * C1754;
    const double C5202 = C4103 * C1753;
    const double C5323 = C4103 * C1867;
    const double C5321 = C4103 * C1750;
    const double C5431 = C4103 * C1977;
    const double C5554 = C4103 * C731;
    const double C5552 = C4103 * C730;
    const double C5678 = C4103 * C825;
    const double C5676 = C4103 * C725;
    const double C5800 = C4103 * C915;
    const double C8334 = C4103 * C2749;
    const double C8332 = C4103 * C2748;
    const double C8430 = C4103 * C2880;
    const double C8428 = C4103 * C2745;
    const double C8523 = C4103 * C3007;
    const double C8688 = C8687 / C8588;
    const double C1182 = C1174 - C1175;
    const double C7679 = C7671 - C7672;
    const double C1183 = C1178 - C1179;
    const double C7680 = C7675 - C7676;
    const double C3288 = C3280 - C3281;
    const double C5722 = C5714 - C5715;
    const double C3289 = C3284 - C3285;
    const double C5723 = C5718 - C5719;
    const double C258 = C256 - C250;
    const double C2935 = C2934 - C2931;
    const double C8718 = C8717 / C8588;
    const double C2399 = C2391 - C2392;
    const double C5508 = C5500 - C5501;
    const double C2400 = C2395 - C2396;
    const double C5509 = C5504 - C5505;
    const double C6207 = C6199 - C6200;
    const double C7487 = C7479 - C7480;
    const double C6208 = C6203 - C6204;
    const double C7488 = C7483 - C7484;
    const double C405 = C403 - C397;
    const double C1714 = C1713 - C1711;
    const double C1388 = C9292 * C449;
    const double C3477 = C9292 * C449;
    const double C2760 = C9292 * C733;
    const double C6560 = C9292 * C733;
    const double C4357 = C9168 * C1379;
    const double C5205 = C9168 * C1756;
    const double C8335 = C9168 * C2751;
    const double C1181 = C9298 * C574;
    const double C3287 = C9298 * C574;
    const double C2243 = C9228 * C858;
    const double C5721 = C9298 * C1906;
    const double C7678 = C9298 * C1906;
    const double C8462 = C9228 * C2927;
    const double C1334 = C9243 * C693;
    const double C2398 = C9300 * C977;
    const double C6206 = C9300 * C977;
    const double C4607 = C9243 * C1707;
    const double C5507 = C9300 * C2052;
    const double C7486 = C9300 * C2052;
    const double C259 = C257 - C254;
    const double C2245 = C2244 - C2242;
    const double C8464 = C8463 - C8461;
    const double C406 = C404 - C401;
    const double C1336 = C1335 - C1333;
    const double C4609 = C4608 - C4606;
    const double C8600 = C9168 - C8599;
    const double C8689 = C9228 - C8688;
    const double C1184 = C1182 - C1176;
    const double C7681 = C7679 - C7673;
    const double C1185 = C1183 - C1180;
    const double C7682 = C7680 - C7677;
    const double C3290 = C3288 - C3282;
    const double C5724 = C5722 - C5716;
    const double C3291 = C3289 - C3286;
    const double C5725 = C5723 - C5720;
    const double C260 = C258 + C251;
    const double C2936 = C2935 + C2932;
    const double C8719 = C9243 - C8718;
    const double C2401 = C2399 - C2393;
    const double C5510 = C5508 - C5502;
    const double C2402 = C2400 - C2397;
    const double C5511 = C5509 - C5506;
    const double C6209 = C6207 - C6201;
    const double C7489 = C7487 - C7481;
    const double C6210 = C6208 - C6205;
    const double C7490 = C7488 - C7485;
    const double C407 = C405 + C398;
    const double C1715 = C1714 + C1712;
    const double C261 = C259 + C255;
    const double C2246 = C2245 + C2243;
    const double C8465 = C8464 + C8462;
    const double C408 = C406 + C402;
    const double C1337 = C1336 + C1334;
    const double C4610 = C4609 + C4607;
    const double C8601 = C8600 * C8597;
    const double C76 =
        ((C8600 * ae) / C8588 - C8587 / C8592) / (2 * C8588) -
        ((C8586 * ((0 * ae) / C8588 - C8593 / C8590) + C9292) * be) / C8588;
    const double C1017 = (-C8587 / C8588) / (2 * C8588) - (C8600 * be) / C8588;
    const double C3127 = (C8600 * ae) / C8588 - C8587 / C8592;
    const double C8690 = C8689 * C8597;
    const double C1186 = C1184 + C1177;
    const double C7683 = C7681 + C7674;
    const double C1187 = C1185 + C1181;
    const double C7684 = C7682 + C7678;
    const double C3292 = C3290 + C3283;
    const double C5726 = C5724 + C5717;
    const double C3293 = C3291 + C3287;
    const double C5727 = C5725 + C5721;
    const double C2937 = C2936 * C1013;
    const double C6711 = C2936 * C3123;
    const double C8458 = C2936 * C9168;
    const double C8720 = C8719 * C8597;
    const double C2403 = C2401 + C2394;
    const double C5512 = C5510 + C5503;
    const double C2404 = C2402 + C2398;
    const double C5513 = C5511 + C5507;
    const double C6211 = C6209 + C6202;
    const double C7491 = C7489 + C7482;
    const double C6212 = C6210 + C6206;
    const double C7492 = C7490 + C7486;
    const double C409 = C407 * C9228;
    const double C1330 = C407 * C1015;
    const double C3434 = C407 * C3125;
    const double C2933 = C2246 * C9292;
    const double C6712 = C2246 * C9292;
    const double C8466 = C8465 * C9168;
    const double C410 = C408 * C9228;
    const double C1338 = C1337 * C9298;
    const double C3435 = C1337 * C9298;
    const double C8606 = C8586 * C8601;
    const double C75 =
        (ae * -2 * C8587) / (C8590 * 2 * C8588) -
        (((C8586 * ((-4 * C8593) / C8588 - (C8586 * C8601) / C8588) * ae) /
              C8588 +
          2 * ((C8600 * ae) / C8588 - C8587 / C8592)) *
         be) /
            C8588 -
        C8601 / C8592;
    const double C79 = (-C8601 / C8588) / (4 * C8590);
    const double C1020 = (-C8601 / C8588) / (2 * C8588);
    const double C3130 = (-C8601 / C8588) / (2 * C8588);
    const double C4104 = -C8601 / C8588;
    const double C1383 = C1017 * C447;
    const double C1381 = C1017 * C446;
    const double C1518 = C1017 * C541;
    const double C1514 = C1017 * C441;
    const double C1634 = C1017 * C631;
    const double C2755 = C1017 * C731;
    const double C2753 = C1017 * C730;
    const double C2890 = C1017 * C825;
    const double C2886 = C1017 * C725;
    const double C3013 = C1017 * C915;
    const double C3472 = C3127 * C447;
    const double C3470 = C3127 * C446;
    const double C3591 = C3127 * C541;
    const double C3587 = C3127 * C441;
    const double C3697 = C3127 * C631;
    const double C6555 = C3127 * C731;
    const double C6553 = C3127 * C730;
    const double C6674 = C3127 * C825;
    const double C6670 = C3127 * C725;
    const double C6782 = C3127 * C915;
    const double C8693 = C8618 * C8690;
    const double C4212 =
        (ae * -2 * C8678) / (C8590 * 2 * C8588) -
        (((C8618 * ((-4 * C8639) / C8588 - (C8618 * C8690) / C8588) * ae) /
              C8588 +
          2 * ((C8689 * ae) / C8588 - C8678 / C8592)) *
         be) /
            C8588 -
        C8690 / C8592;
    const double C4214 = (-C8690 / C8588) / (4 * C8590);
    const double C8723 = C8621 * C8720;
    const double C8064 =
        (ae * -2 * C8708) / (C8590 * 2 * C8588) -
        (((C8621 * ((-4 * C8651) / C8588 - (C8621 * C8720) / C8588) * ae) /
              C8588 +
          2 * ((C8719 * ae) / C8588 - C8708 / C8592)) *
         be) /
            C8588 -
        C8720 / C8592;
    const double C8066 = (-C8720 / C8588) / (4 * C8590);
    const double C77 =
        (((-4 * C8593) / C8588 - C8606 / C8588) * ae) / C8592 -
        ((2 * ((0 * ae) / C8588 - C8593 / C8590) - C8606 / C8592) * be) / C8588;
    const double C1018 = -(((-4 * C8593) / C8588 - C8606 / C8588) * be) / C8588;
    const double C3128 = (((-4 * C8593) / C8588 - C8606 / C8588) * ae) / C8588;
    const double C1386 = C1020 * C440;
    const double C2758 = C1020 * C724;
    const double C3475 = C3130 * C440;
    const double C6558 = C3130 * C724;
    const double C4355 = C4104 * C1373;
    const double C4351 = C4104 * C441;
    const double C5203 = C4104 * C1750;
    const double C5553 = C4104 * C725;
    const double C8333 = C4104 * C2745;
    const double C4213 =
        (((-4 * C8639) / C8588 - C8693 / C8588) * ae) / C8592 -
        ((2 * ((0 * ae) / C8588 - C8639 / C8590) - C8693 / C8592) * be) / C8588;
    const double C8065 =
        (((-4 * C8651) / C8588 - C8723 / C8588) * ae) / C8592 -
        ((2 * ((0 * ae) / C8588 - C8651 / C8590) - C8723 / C8592) * be) / C8588;
    const double C1382 = C1018 * C441;
    const double C2754 = C1018 * C725;
    const double C3471 = C3128 * C441;
    const double C6554 = C3128 * C725;
    const double C1390 = C1385 - C1386;
    const double C2762 = C2757 - C2758;
    const double C3479 = C3474 - C3475;
    const double C6562 = C6557 - C6558;
    const double C4359 = C4354 - C4355;
    const double C4358 = C4350 - C4351;
    const double C5206 = C5202 - C5203;
    const double C5556 = C5552 - C5553;
    const double C8336 = C8332 - C8333;
    const double C1389 = C1381 - C1382;
    const double C2761 = C2753 - C2754;
    const double C3478 = C3470 - C3471;
    const double C6561 = C6553 - C6554;
    const double C1392 = C1390 - C1387;
    const double C2764 = C2762 - C2759;
    const double C3481 = C3479 - C3476;
    const double C6564 = C6562 - C6559;
    const double C4361 = C4359 - C4356;
    const double C4360 = C4358 - C4352;
    const double C5207 = C5206 - C5204;
    const double C5557 = C5556 - C5554;
    const double C8337 = C8336 - C8334;
    const double C1391 = C1389 - C1383;
    const double C2763 = C2761 - C2755;
    const double C3480 = C3478 - C3472;
    const double C6563 = C6561 - C6555;
    const double C1394 = C1392 + C1388;
    const double C2766 = C2764 + C2760;
    const double C3483 = C3481 + C3477;
    const double C6566 = C6564 + C6560;
    const double C4363 = C4361 + C4357;
    const double C4362 = C4360 + C4353;
    const double C5208 = C5207 + C5205;
    const double C5558 = C5557 + C5555;
    const double C8338 = C8337 + C8335;
    const double C1393 = C1391 + C1384;
    const double C2765 = C2763 + C2756;
    const double C3482 = C3480 + C3473;
    const double C6565 = C6563 + C6556;
    const double C4365 = C4363 * C9243;
    const double C4364 = C4362 * C9243;
    const double C5201 = C4362 * C2087;
    const double C7193 = C4362 * C5908;
    const double C5209 = C5208 * C9300;
    const double C7194 = C5208 * C9300;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C84 - C75 * C80 - C74 * C85 + C65 * C92 + C76 * C86 -
                    C77 * C81 - C76 * C87 + C66 * C93 + C78 * C88 - C79 * C82 -
                    C78 * C89 + C67 * C94) *
                       C9243 * C9228 * C9307 * C9308 * C72 -
                   (C78 * C90 - C79 * C83 - C78 * C91 + C67 * C95 + C76 * C88 -
                    C77 * C82 - C76 * C89 + C66 * C94 + C74 * C86 - C75 * C81 -
                    C74 * C87 + C65 * C93) *
                       C9243 * C9228 * C9307 * C9308 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C9228 * C123 - C122 * C80) * C74 +
           (C9228 * C127 - C122 * C85) * C65 + (C132 - C133) * C76 +
           (C134 - C135) * C66 + (C136 - C137) * C78 + (C138 - C139) * C67) *
              C9243 * C9307 * C9308 * C72 +
          ((C133 - C132) * C74 + (C135 - C134) * C65 + (C137 - C136) * C76 +
           (C139 - C138) * C66 + (C122 * C83 - C9228 * C126) * C78 +
           (C122 * C91 - C9228 * C130) * C67) *
              C9243 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C9243 * C166 - C165 * C80) * C74 +
           (C9243 * C170 - C165 * C85) * C65 + (C175 - C176) * C76 +
           (C177 - C178) * C66 + (C179 - C180) * C78 + (C181 - C182) * C67) *
              C9228 * C9307 * C9308 * C72 +
          ((C176 - C175) * C74 + (C178 - C177) * C65 + (C180 - C179) * C76 +
           (C182 - C181) * C66 + (C165 * C83 - C9243 * C169) * C78 +
           (C165 * C91 - C9243 * C173) * C67) *
              C9228 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] += (2 * std::pow(Pi, 2.5) *
                  (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 + C67 * C88 -
                     C78 * C82) *
                        C122 +
                    (C65 * C212 - C74 * C208 + C66 * C213 - C76 * C209 +
                     C67 * C214 - C78 * C210) *
                        C9228) *
                       C9243 * C9307 * C9308 * C72 +
                   ((C74 * C81 - C65 * C86 + C76 * C82 - C66 * C88 + C78 * C83 -
                     C67 * C90) *
                        C122 +
                    (C74 * C209 - C65 * C213 + C76 * C210 - C66 * C214 +
                     C78 * C211 - C67 * C215) *
                        C9228) *
                       C9243 * C9307 * C9308 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C9228 * C243) * C65 +
           C260 * C66 + C261 * C67) *
              C9243 * C9307 * C9308 * C72 -
          ((C122 * C126 - C242 * C83 - C122 * C211 + C9228 * C246) * C67 +
           C261 * C66 + C260 * C65) *
              C9243 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C9243 * C166 - C165 * C80) * C122 +
                     (C9243 * C287 - C165 * C208) * C9228) *
                        C65 +
                    ((C175 - C176) * C122 + (C292 - C293) * C9228) * C66 +
                    ((C179 - C180) * C122 + (C294 - C295) * C9228) * C67) *
                       C9307 * C9308 * C72 +
                   (((C176 - C175) * C122 + (C293 - C292) * C9228) * C65 +
                    ((C180 - C179) * C122 + (C295 - C294) * C9228) * C66 +
                    ((C165 * C83 - C9243 * C169) * C122 +
                     (C165 * C211 - C9243 * C290) * C9228) *
                        C67) *
                       C9307 * C9308 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (2 * std::pow(Pi, 2.5) *
                  (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 + C67 * C88 -
                     C78 * C82) *
                        C165 +
                    (C65 * C325 - C74 * C321 + C66 * C326 - C76 * C322 +
                     C67 * C327 - C78 * C323) *
                        C9243) *
                       C9228 * C9307 * C9308 * C72 +
                   ((C74 * C81 - C65 * C86 + C76 * C82 - C66 * C88 + C78 * C83 -
                     C67 * C90) *
                        C165 +
                    (C74 * C322 - C65 * C326 + C76 * C323 - C66 * C327 +
                     C78 * C324 - C67 * C328) *
                        C9243) *
                       C9228 * C9307 * C9308 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C9228 * C123 - C122 * C80) * C165 +
                     (C9228 * C355 - C122 * C321) * C9243) *
                        C65 +
                    ((C132 - C133) * C165 + (C360 - C361) * C9243) * C66 +
                    ((C136 - C137) * C165 + (C362 - C363) * C9243) * C67) *
                       C9307 * C9308 * C72 +
                   (((C133 - C132) * C165 + (C361 - C360) * C9243) * C65 +
                    ((C137 - C136) * C165 + (C363 - C362) * C9243) * C66 +
                    ((C122 * C83 - C9228 * C126) * C165 +
                     (C122 * C324 - C9228 * C358) * C9243) *
                        C67) *
                       C9307 * C9308 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C165 * C166 - C389 * C80 - C165 * C321 + C9243 * C390) *
                        C9228 * C65 +
                    C409 * C66 + C410 * C67) *
                       C9307 * C9308 * C72 -
                   ((C165 * C169 - C389 * C83 - C165 * C324 + C9243 * C393) *
                        C9228 * C67 +
                    C410 * C66 + C409 * C65) *
                       C9307 * C9308 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C84 - C75 * C80 - C74 * C85 + C65 * C92 + C76 * C86 -
                    C77 * C81 - C76 * C87 + C66 * C93 + C78 * C88 - C79 * C82 -
                    C78 * C89 + C67 * C94) *
                       C9243 * C9228 * C9307 * C436 -
                   (C78 * C442 - C79 * C439 - C78 * C443 + C67 * C448 +
                    C76 * C444 - C77 * C440 - C76 * C445 + C66 * C449 +
                    C74 * C446 - C75 * C441 - C74 * C447 + C65 * C450) *
                       C9243 * C9228 * C9307 * C437) *
                  C9309) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C9228 * C123 - C122 * C80) * C74 +
           (C9228 * C127 - C122 * C85) * C65 + (C132 - C133) * C76 +
           (C134 - C135) * C66 + (C136 - C137) * C78 + (C138 - C139) * C67) *
              C9243 * C9307 * C436 +
          ((C122 * C441 - C9228 * C477) * C74 +
           (C122 * C447 - C9228 * C480) * C65 +
           (C122 * C440 - C9228 * C478) * C76 +
           (C122 * C445 - C9228 * C481) * C66 +
           (C122 * C439 - C9228 * C479) * C78 +
           (C122 * C443 - C9228 * C482) * C67) *
              C9243 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C9243 * C166 - C165 * C80) * C74 +
           (C9243 * C170 - C165 * C85) * C65 + (C175 - C176) * C76 +
           (C177 - C178) * C66 + (C179 - C180) * C78 + (C181 - C182) * C67) *
              C9228 * C9307 * C436 +
          ((C165 * C441 - C9243 * C509) * C74 +
           (C165 * C447 - C9243 * C512) * C65 +
           (C165 * C440 - C9243 * C510) * C76 +
           (C165 * C445 - C9243 * C513) * C66 +
           (C165 * C439 - C9243 * C511) * C78 +
           (C165 * C443 - C9243 * C514) * C67) *
              C9228 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] += (2 * std::pow(Pi, 2.5) *
                  (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 + C67 * C88 -
                     C78 * C82) *
                        C122 +
                    (C65 * C212 - C74 * C208 + C66 * C213 - C76 * C209 +
                     C67 * C214 - C78 * C210) *
                        C9228) *
                       C9243 * C9307 * C436 +
                   ((C74 * C441 - C65 * C446 + C76 * C440 - C66 * C444 +
                     C78 * C439 - C67 * C442) *
                        C122 +
                    (C74 * C541 - C65 * C544 + C76 * C542 - C66 * C545 +
                     C78 * C543 - C67 * C546) *
                        C9228) *
                       C9243 * C9307 * C437) *
                  C9309) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C9228 * C243) * C65 +
           C260 * C66 + C261 * C67) *
              C9243 * C9307 * C436 -
          ((C122 * C479 - C242 * C439 - C122 * C543 + C9228 * C573) * C67 +
           (C122 * C478 - C242 * C440 - C122 * C542 + C9228 * C574) * C66 +
           (C122 * C477 - C242 * C441 - C122 * C541 + C9228 * C575) * C65) *
              C9243 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C9243 * C166 - C165 * C80) * C122 +
                     (C9243 * C287 - C165 * C208) * C9228) *
                        C65 +
                    ((C175 - C176) * C122 + (C292 - C293) * C9228) * C66 +
                    ((C179 - C180) * C122 + (C294 - C295) * C9228) * C67) *
                       C9307 * C436 +
                   (((C165 * C441 - C9243 * C509) * C122 +
                     (C165 * C541 - C9243 * C602) * C9228) *
                        C65 +
                    ((C165 * C440 - C9243 * C510) * C122 +
                     (C165 * C542 - C9243 * C603) * C9228) *
                        C66 +
                    ((C165 * C439 - C9243 * C511) * C122 +
                     (C165 * C543 - C9243 * C604) * C9228) *
                        C67) *
                       C9307 * C437) *
                  C9309) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] += (2 * std::pow(Pi, 2.5) *
                  (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 + C67 * C88 -
                     C78 * C82) *
                        C165 +
                    (C65 * C325 - C74 * C321 + C66 * C326 - C76 * C322 +
                     C67 * C327 - C78 * C323) *
                        C9243) *
                       C9228 * C9307 * C436 +
                   ((C74 * C441 - C65 * C446 + C76 * C440 - C66 * C444 +
                     C78 * C439 - C67 * C442) *
                        C165 +
                    (C74 * C631 - C65 * C634 + C76 * C632 - C66 * C635 +
                     C78 * C633 - C67 * C636) *
                        C9243) *
                       C9228 * C9307 * C437) *
                  C9309) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C9228 * C123 - C122 * C80) * C165 +
                     (C9228 * C355 - C122 * C321) * C9243) *
                        C65 +
                    ((C132 - C133) * C165 + (C360 - C361) * C9243) * C66 +
                    ((C136 - C137) * C165 + (C362 - C363) * C9243) * C67) *
                       C9307 * C436 +
                   (((C122 * C441 - C9228 * C477) * C165 +
                     (C122 * C631 - C9228 * C663) * C9243) *
                        C65 +
                    ((C122 * C440 - C9228 * C478) * C165 +
                     (C122 * C632 - C9228 * C664) * C9243) *
                        C66 +
                    ((C122 * C439 - C9228 * C479) * C165 +
                     (C122 * C633 - C9228 * C665) * C9243) *
                        C67) *
                       C9307 * C437) *
                  C9309) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C165 * C166 - C389 * C80 - C165 * C321 + C9243 * C390) *
                        C9228 * C65 +
                    C409 * C66 + C410 * C67) *
                       C9307 * C436 -
                   ((C165 * C511 - C389 * C439 - C165 * C633 + C9243 * C692) *
                        C9228 * C67 +
                    (C165 * C510 - C389 * C440 - C165 * C632 + C9243 * C693) *
                        C9228 * C66 +
                    (C165 * C509 - C389 * C441 - C165 * C631 + C9243 * C694) *
                        C9228 * C65) *
                       C9307 * C437) *
                  C9309) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C84 - C75 * C80 - C74 * C85 + C65 * C92 + C76 * C86 -
                    C77 * C81 - C76 * C87 + C66 * C93 + C78 * C88 - C79 * C82 -
                    C78 * C89 + C67 * C94) *
                       C9243 * C9228 * C721 -
                   (C78 * C726 - C79 * C723 - C78 * C727 + C67 * C732 +
                    C76 * C728 - C77 * C724 - C76 * C729 + C66 * C733 +
                    C74 * C730 - C75 * C725 - C74 * C731 + C65 * C734) *
                       C9243 * C9228 * C722) *
                  C9308 * C9309) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C9228 * C123 - C122 * C80) * C74 +
           (C9228 * C127 - C122 * C85) * C65 + (C132 - C133) * C76 +
           (C134 - C135) * C66 + (C136 - C137) * C78 + (C138 - C139) * C67) *
              C9243 * C721 +
          ((C122 * C725 - C9228 * C761) * C74 +
           (C122 * C731 - C9228 * C764) * C65 +
           (C122 * C724 - C9228 * C762) * C76 +
           (C122 * C729 - C9228 * C765) * C66 +
           (C122 * C723 - C9228 * C763) * C78 +
           (C122 * C727 - C9228 * C766) * C67) *
              C9243 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C9243 * C166 - C165 * C80) * C74 +
           (C9243 * C170 - C165 * C85) * C65 + (C175 - C176) * C76 +
           (C177 - C178) * C66 + (C179 - C180) * C78 + (C181 - C182) * C67) *
              C9228 * C721 +
          ((C165 * C725 - C9243 * C793) * C74 +
           (C165 * C731 - C9243 * C796) * C65 +
           (C165 * C724 - C9243 * C794) * C76 +
           (C165 * C729 - C9243 * C797) * C66 +
           (C165 * C723 - C9243 * C795) * C78 +
           (C165 * C727 - C9243 * C798) * C67) *
              C9228 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] += (2 * std::pow(Pi, 2.5) *
                  (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 + C67 * C88 -
                     C78 * C82) *
                        C122 +
                    (C65 * C212 - C74 * C208 + C66 * C213 - C76 * C209 +
                     C67 * C214 - C78 * C210) *
                        C9228) *
                       C9243 * C721 +
                   ((C74 * C725 - C65 * C730 + C76 * C724 - C66 * C728 +
                     C78 * C723 - C67 * C726) *
                        C122 +
                    (C74 * C825 - C65 * C828 + C76 * C826 - C66 * C829 +
                     C78 * C827 - C67 * C830) *
                        C9228) *
                       C9243 * C722) *
                  C9308 * C9309) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C9228 * C243) * C65 +
           C260 * C66 + C261 * C67) *
              C9243 * C721 -
          ((C122 * C763 - C242 * C723 - C122 * C827 + C9228 * C857) * C67 +
           (C122 * C762 - C242 * C724 - C122 * C826 + C9228 * C858) * C66 +
           (C122 * C761 - C242 * C725 - C122 * C825 + C9228 * C859) * C65) *
              C9243 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C9243 * C166 - C165 * C80) * C122 +
                     (C9243 * C287 - C165 * C208) * C9228) *
                        C65 +
                    ((C175 - C176) * C122 + (C292 - C293) * C9228) * C66 +
                    ((C179 - C180) * C122 + (C294 - C295) * C9228) * C67) *
                       C721 +
                   (((C165 * C725 - C9243 * C793) * C122 +
                     (C165 * C825 - C9243 * C886) * C9228) *
                        C65 +
                    ((C165 * C724 - C9243 * C794) * C122 +
                     (C165 * C826 - C9243 * C887) * C9228) *
                        C66 +
                    ((C165 * C723 - C9243 * C795) * C122 +
                     (C165 * C827 - C9243 * C888) * C9228) *
                        C67) *
                       C722) *
                  C9308 * C9309) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] += (2 * std::pow(Pi, 2.5) *
                  (((C65 * C84 - C74 * C80 + C66 * C86 - C76 * C81 + C67 * C88 -
                     C78 * C82) *
                        C165 +
                    (C65 * C325 - C74 * C321 + C66 * C326 - C76 * C322 +
                     C67 * C327 - C78 * C323) *
                        C9243) *
                       C9228 * C721 +
                   ((C74 * C725 - C65 * C730 + C76 * C724 - C66 * C728 +
                     C78 * C723 - C67 * C726) *
                        C165 +
                    (C74 * C915 - C65 * C918 + C76 * C916 - C66 * C919 +
                     C78 * C917 - C67 * C920) *
                        C9243) *
                       C9228 * C722) *
                  C9308 * C9309) /
                 (p * q * std::sqrt(p + q));
    d2eezy[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C9228 * C123 - C122 * C80) * C165 +
                     (C9228 * C355 - C122 * C321) * C9243) *
                        C65 +
                    ((C132 - C133) * C165 + (C360 - C361) * C9243) * C66 +
                    ((C136 - C137) * C165 + (C362 - C363) * C9243) * C67) *
                       C721 +
                   (((C122 * C725 - C9228 * C761) * C165 +
                     (C122 * C915 - C9228 * C947) * C9243) *
                        C65 +
                    ((C122 * C724 - C9228 * C762) * C165 +
                     (C122 * C916 - C9228 * C948) * C9243) *
                        C66 +
                    ((C122 * C723 - C9228 * C763) * C165 +
                     (C122 * C917 - C9228 * C949) * C9243) *
                        C67) *
                       C722) *
                  C9308 * C9309) /
                 (p * q * std::sqrt(p + q));
    d2eezz[2] += (2 * std::pow(Pi, 2.5) *
                  (((C165 * C166 - C389 * C80 - C165 * C321 + C9243 * C390) *
                        C9228 * C65 +
                    C409 * C66 + C410 * C67) *
                       C721 -
                   ((C165 * C795 - C389 * C723 - C165 * C917 + C9243 * C976) *
                        C9228 * C67 +
                    (C165 * C794 - C389 * C724 - C165 * C916 + C9243 * C977) *
                        C9228 * C66 +
                    (C165 * C793 - C389 * C725 - C165 * C915 + C9243 * C978) *
                        C9228 * C65) *
                       C722) *
                  C9308 * C9309) /
                 (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1017 * C84 - C1018 * C80 - C1017 * C85 + C1013 * C92 +
            C1019 * C86 - C1020 * C81 - C1019 * C87 + C9292 * C93) *
               C9243 * C1015 +
           (C1017 * C446 - C1018 * C441 - C1017 * C447 + C1013 * C450 +
            C1019 * C444 - C1020 * C440 - C1019 * C445 + C9292 * C449) *
               C9243 * C9298) *
              C9307 * C9308 * C72 -
          ((C1019 * C442 - C1020 * C439 - C1019 * C443 + C9292 * C448 +
            C1017 * C444 - C1018 * C440 - C1017 * C445 + C1013 * C449) *
               C9243 * C9298 +
           (C1019 * C88 - C1020 * C82 - C1019 * C89 + C9292 * C94 +
            C1017 * C86 - C1018 * C81 - C1017 * C87 + C1013 * C93) *
               C9243 * C1015) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1015 * C123 - C1055 * C80 + C9298 * C477 - C1056 * C441) * C1017 +
           (C1015 * C127 - C1055 * C85 + C9298 * C480 - C1056 * C447) * C1013 +
           (C1058 - C1059 + C1060 - C1061) * C1019 +
           (C1062 - C1063 + C1064 - C1065) * C9292) *
              C9243 * C9307 * C9308 * C72 +
          ((C1059 - C1058 + C1061 - C1060) * C1017 +
           (C1063 - C1062 + C1065 - C1064) * C1013 +
           (C1055 * C82 - C1015 * C125 + C1056 * C439 - C9298 * C479) * C1019 +
           (C1055 * C89 - C1015 * C129 + C1056 * C443 - C9298 * C482) * C9292) *
              C9243 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C9243 * C166 - C165 * C80) * C1017 +
                     (C9243 * C170 - C165 * C85) * C1013 +
                     (C175 - C176) * C1019 + (C177 - C178) * C9292) *
                        C1015 +
                    ((C9243 * C509 - C165 * C441) * C1017 +
                     (C9243 * C512 - C165 * C447) * C1013 +
                     (C1100 - C1101) * C1019 + (C1102 - C1103) * C9292) *
                        C9298) *
                       C9307 * C9308 * C72 +
                   (((C176 - C175) * C1017 + (C178 - C177) * C1013 +
                     (C180 - C179) * C1019 + (C182 - C181) * C9292) *
                        C1015 +
                    ((C1101 - C1100) * C1017 + (C1103 - C1102) * C1013 +
                     (C165 * C439 - C9243 * C511) * C1019 +
                     (C165 * C443 - C9243 * C514) * C9292) *
                        C9298) *
                       C9307 * C9308 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1013 * C84 - C1017 * C80 + C9292 * C86 - C1019 * C81) * C1055 +
           (C1013 * C212 - C1017 * C208 + C9292 * C213 - C1019 * C209) * C1015 +
           (C1013 * C446 - C1017 * C441 + C9292 * C444 - C1019 * C440) * C1056 +
           (C1013 * C544 - C1017 * C541 + C9292 * C545 - C1019 * C542) *
               C9298) *
              C9243 * C9307 * C9308 * C72 +
          ((C1017 * C81 - C1013 * C86 + C1019 * C82 - C9292 * C88) * C1055 +
           (C1017 * C209 - C1013 * C213 + C1019 * C210 - C9292 * C214) * C1015 +
           (C1017 * C440 - C1013 * C444 + C1019 * C439 - C9292 * C442) * C1056 +
           (C1017 * C542 - C1013 * C545 + C1019 * C543 - C9292 * C546) *
               C9298) *
              C9243 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1055 * C123 - C1171 * C80 - C1055 * C208 + C1015 * C243 +
            C1056 * C477 - C1172 * C441 - C1056 * C541 + C9298 * C575) *
               C1013 +
           (C1186 + C1187) * C9292) *
              C9243 * C9307 * C9308 * C72 -
          ((C1056 * C479 - C1172 * C439 - C1056 * C543 + C9298 * C573 +
            C1055 * C125 - C1171 * C82 - C1055 * C210 + C1015 * C245) *
               C9292 +
           (C1187 + C1186) * C1013) *
              C9243 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C9243 * C166 - C165 * C80) * C1055 +
                     (C9243 * C287 - C165 * C208) * C1015 +
                     (C9243 * C509 - C165 * C441) * C1056 +
                     (C9243 * C602 - C165 * C541) * C9298) *
                        C1013 +
                    ((C175 - C176) * C1055 + (C292 - C293) * C1015 +
                     (C1100 - C1101) * C1056 + (C1222 - C1223) * C9298) *
                        C9292) *
                       C9307 * C9308 * C72 +
                   (((C176 - C175) * C1055 + (C293 - C292) * C1015 +
                     (C1101 - C1100) * C1056 + (C1223 - C1222) * C9298) *
                        C1013 +
                    ((C180 - C179) * C1055 + (C295 - C294) * C1015 +
                     (C165 * C439 - C9243 * C511) * C1056 +
                     (C165 * C543 - C9243 * C604) * C9298) *
                        C9292) *
                       C9307 * C9308 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1013 * C84 - C1017 * C80 + C9292 * C86 - C1019 * C81) * C165 +
            (C1013 * C325 - C1017 * C321 + C9292 * C326 - C1019 * C322) *
                C9243) *
               C1015 +
           ((C1013 * C446 - C1017 * C441 + C9292 * C444 - C1019 * C440) * C165 +
            (C1013 * C634 - C1017 * C631 + C9292 * C635 - C1019 * C632) *
                C9243) *
               C9298) *
              C9307 * C9308 * C72 +
          (((C1017 * C81 - C1013 * C86 + C1019 * C82 - C9292 * C88) * C165 +
            (C1017 * C322 - C1013 * C326 + C1019 * C323 - C9292 * C327) *
                C9243) *
               C1015 +
           ((C1017 * C440 - C1013 * C444 + C1019 * C439 - C9292 * C442) * C165 +
            (C1017 * C632 - C1013 * C635 + C1019 * C633 - C9292 * C636) *
                C9243) *
               C9298) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1015 * C123 - C1055 * C80 + C9298 * C477 - C1056 * C441) * C165 +
            (C1015 * C355 - C1055 * C321 + C9298 * C663 - C1056 * C631) *
                C9243) *
               C1013 +
           ((C1058 - C1059 + C1060 - C1061) * C165 +
            (C1292 - C1293 + C1294 - C1295) * C9243) *
               C9292) *
              C9307 * C9308 * C72 +
          (((C1059 - C1058 + C1061 - C1060) * C165 +
            (C1293 - C1292 + C1295 - C1294) * C9243) *
               C1013 +
           ((C1055 * C82 - C1015 * C125 + C1056 * C439 - C9298 * C479) * C165 +
            (C1055 * C323 - C1015 * C357 + C1056 * C633 - C9298 * C665) *
                C9243) *
               C9292) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C165 * C166 - C389 * C80 - C165 * C321 + C9243 * C390) * C1015 +
            (C165 * C509 - C389 * C441 - C165 * C631 + C9243 * C694) * C9298) *
               C1013 +
           (C1330 + C1338) * C9292) *
              C9307 * C9308 * C72 -
          (((C165 * C511 - C389 * C439 - C165 * C633 + C9243 * C692) * C9298 +
            C408 * C1015) *
               C9292 +
           (C1338 + C1330) * C1013) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1017 * C84 - C1018 * C80 - C1017 * C85 + C1013 * C92 +
            C1019 * C86 - C1020 * C81 - C1019 * C87 + C9292 * C93) *
               C9243 * C1015 +
           (C1393 + C1394) * C9243 * C9298) *
              C9307 * C436 -
          ((C1019 * C1374 - C1020 * C1372 - C1019 * C1375 + C9292 * C1378 +
            C1017 * C1376 - C1018 * C1373 - C1017 * C1377 + C1013 * C1379) *
               C9243 * C9298 +
           (C1394 + C1393) * C9243 * C1015) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1015 * C123 - C1055 * C80 + C9298 * C477 - C1056 * C441) * C1017 +
           (C1015 * C127 - C1055 * C85 + C9298 * C480 - C1056 * C447) * C1013 +
           (C1058 - C1059 + C1060 - C1061) * C1019 +
           (C1062 - C1063 + C1064 - C1065) * C9292) *
              C9243 * C9307 * C436 +
          ((C1055 * C441 - C1015 * C477 + C1056 * C1373 - C9298 * C1428) *
               C1017 +
           (C1055 * C447 - C1015 * C480 + C1056 * C1377 - C9298 * C1430) *
               C1013 +
           (C1055 * C440 - C1015 * C478 + C1056 * C1372 - C9298 * C1429) *
               C1019 +
           (C1055 * C445 - C1015 * C481 + C1056 * C1375 - C9298 * C1431) *
               C9292) *
              C9243 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] += (2 * std::pow(Pi, 2.5) *
                  ((((C9243 * C166 - C165 * C80) * C1017 +
                     (C9243 * C170 - C165 * C85) * C1013 +
                     (C175 - C176) * C1019 + (C177 - C178) * C9292) *
                        C1015 +
                    ((C1471 - C1472) * C1017 + (C1473 - C1474) * C1013 +
                     (C1100 - C1101) * C1019 + (C1102 - C1103) * C9292) *
                        C9298) *
                       C9307 * C436 +
                   (((C1472 - C1471) * C1017 + (C1474 - C1473) * C1013 +
                     (C1101 - C1100) * C1019 + (C1103 - C1102) * C9292) *
                        C1015 +
                    ((C165 * C1373 - C9243 * C1466) * C1017 +
                     (C165 * C1377 - C9243 * C1468) * C1013 +
                     (C165 * C1372 - C9243 * C1467) * C1019 +
                     (C165 * C1375 - C9243 * C1469) * C9292) *
                        C9298) *
                       C9307 * C437) *
                  C9309) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1013 * C84 - C1017 * C80 + C9292 * C86 - C1019 * C81) * C1055 +
           (C1013 * C212 - C1017 * C208 + C9292 * C213 - C1019 * C209) * C1015 +
           (C1513 - C1514 + C1515 - C1516) * C1056 +
           (C1517 - C1518 + C1519 - C1520) * C9298) *
              C9243 * C9307 * C436 +
          ((C1514 - C1513 + C1516 - C1515) * C1055 +
           (C1518 - C1517 + C1520 - C1519) * C1015 +
           (C1017 * C1373 - C1013 * C1376 + C1019 * C1372 - C9292 * C1374) *
               C1056 +
           (C1017 * C1508 - C1013 * C1510 + C1019 * C1509 - C9292 * C1511) *
               C9298) *
              C9243 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1055 * C123 - C1171 * C80 - C1055 * C208 + C1015 * C243 +
            C1056 * C477 - C1172 * C441 - C1056 * C541 + C9298 * C575) *
               C1013 +
           (C1186 + C1187) * C9292) *
              C9243 * C9307 * C436 -
          ((C1056 * C1429 - C1172 * C1372 - C1056 * C1509 + C9298 * C1554 +
            C1055 * C478 - C1171 * C440 - C1055 * C542 + C1015 * C574) *
               C9292 +
           (C1056 * C1428 - C1172 * C1373 - C1056 * C1508 + C9298 * C1555 +
            C1055 * C477 - C1171 * C441 - C1055 * C541 + C1015 * C575) *
               C1013) *
              C9243 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[4] += (2 * std::pow(Pi, 2.5) *
                  ((((C9243 * C166 - C165 * C80) * C1055 +
                     (C9243 * C287 - C165 * C208) * C1015 +
                     (C1471 - C1472) * C1056 + (C1593 - C1594) * C9298) *
                        C1013 +
                    ((C175 - C176) * C1055 + (C292 - C293) * C1015 +
                     (C1100 - C1101) * C1056 + (C1222 - C1223) * C9298) *
                        C9292) *
                       C9307 * C436 +
                   (((C1472 - C1471) * C1055 + (C1594 - C1593) * C1015 +
                     (C165 * C1373 - C9243 * C1466) * C1056 +
                     (C165 * C1508 - C9243 * C1590) * C9298) *
                        C1013 +
                    ((C1101 - C1100) * C1055 + (C1223 - C1222) * C1015 +
                     (C165 * C1372 - C9243 * C1467) * C1056 +
                     (C165 * C1509 - C9243 * C1591) * C9298) *
                        C9292) *
                       C9307 * C437) *
                  C9309) /
                 (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1013 * C84 - C1017 * C80 + C9292 * C86 - C1019 * C81) * C165 +
            (C1013 * C325 - C1017 * C321 + C9292 * C326 - C1019 * C322) *
                C9243) *
               C1015 +
           ((C1513 - C1514 + C1515 - C1516) * C165 +
            (C1633 - C1634 + C1635 - C1636) * C9243) *
               C9298) *
              C9307 * C436 +
          (((C1514 - C1513 + C1516 - C1515) * C165 +
            (C1634 - C1633 + C1636 - C1635) * C9243) *
               C1015 +
           ((C1017 * C1373 - C1013 * C1376 + C1019 * C1372 - C9292 * C1374) *
                C165 +
            (C1017 * C1628 - C1013 * C1630 + C1019 * C1629 - C9292 * C1631) *
                C9243) *
               C9298) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1015 * C123 - C1055 * C80 + C9298 * C477 - C1056 * C441) * C165 +
            (C1015 * C355 - C1055 * C321 + C9298 * C663 - C1056 * C631) *
                C9243) *
               C1013 +
           ((C1058 - C1059 + C1060 - C1061) * C165 +
            (C1292 - C1293 + C1294 - C1295) * C9243) *
               C9292) *
              C9307 * C436 +
          (((C1055 * C441 - C1015 * C477 + C1056 * C1373 - C9298 * C1428) *
                C165 +
            (C1055 * C631 - C1015 * C663 + C1056 * C1628 - C9298 * C1670) *
                C9243) *
               C1013 +
           ((C1055 * C440 - C1015 * C478 + C1056 * C1372 - C9298 * C1429) *
                C165 +
            (C1055 * C632 - C1015 * C664 + C1056 * C1629 - C9298 * C1671) *
                C9243) *
               C9292) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C165 * C166 - C389 * C80 - C165 * C321 + C9243 * C390) * C1015 +
            C1715 * C9298) *
               C1013 +
           (C1330 + C1338) * C9292) *
              C9307 * C436 -
          (((C165 * C1467 - C389 * C1372 - C165 * C1629 + C9243 * C1706) *
                C9298 +
            C1337 * C1015) *
               C9292 +
           ((C165 * C1466 - C389 * C1373 - C165 * C1628 + C9243 * C1707) *
                C9298 +
            C1715 * C1015) *
               C1013) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1017 * C84 - C1018 * C80 - C1017 * C85 + C1013 * C92 +
            C1019 * C86 - C1020 * C81 - C1019 * C87 + C9292 * C93) *
               C9243 * C1015 +
           (C1393 + C1394) * C9243 * C9298) *
              C721 -
          ((C1019 * C1751 - C1020 * C1749 - C1019 * C1752 + C9292 * C1755 +
            C1017 * C1753 - C1018 * C1750 - C1017 * C1754 + C1013 * C1756) *
               C9243 * C9298 +
           (C1019 * C728 - C1020 * C724 - C1019 * C729 + C9292 * C733 +
            C1017 * C730 - C1018 * C725 - C1017 * C731 + C1013 * C734) *
               C9243 * C1015) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1015 * C123 - C1055 * C80 + C9298 * C477 - C1056 * C441) * C1017 +
           (C1015 * C127 - C1055 * C85 + C9298 * C480 - C1056 * C447) * C1013 +
           (C1058 - C1059 + C1060 - C1061) * C1019 +
           (C1062 - C1063 + C1064 - C1065) * C9292) *
              C9243 * C721 +
          ((C1055 * C725 - C1015 * C761 + C1056 * C1750 - C9298 * C1791) *
               C1017 +
           (C1055 * C731 - C1015 * C764 + C1056 * C1754 - C9298 * C1793) *
               C1013 +
           (C1055 * C724 - C1015 * C762 + C1056 * C1749 - C9298 * C1792) *
               C1019 +
           (C1055 * C729 - C1015 * C765 + C1056 * C1752 - C9298 * C1794) *
               C9292) *
              C9243 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C9243 * C166 - C165 * C80) * C1017 +
                     (C9243 * C170 - C165 * C85) * C1013 +
                     (C175 - C176) * C1019 + (C177 - C178) * C9292) *
                        C1015 +
                    ((C1471 - C1472) * C1017 + (C1473 - C1474) * C1013 +
                     (C1100 - C1101) * C1019 + (C1102 - C1103) * C9292) *
                        C9298) *
                       C721 +
                   (((C165 * C725 - C9243 * C793) * C1017 +
                     (C165 * C731 - C9243 * C796) * C1013 +
                     (C165 * C724 - C9243 * C794) * C1019 +
                     (C165 * C729 - C9243 * C797) * C9292) *
                        C1015 +
                    ((C165 * C1750 - C9243 * C1829) * C1017 +
                     (C165 * C1754 - C9243 * C1831) * C1013 +
                     (C165 * C1749 - C9243 * C1830) * C1019 +
                     (C165 * C1752 - C9243 * C1832) * C9292) *
                        C9298) *
                       C722) *
                  C9308 * C9309) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1013 * C84 - C1017 * C80 + C9292 * C86 - C1019 * C81) * C1055 +
           (C1013 * C212 - C1017 * C208 + C9292 * C213 - C1019 * C209) * C1015 +
           (C1513 - C1514 + C1515 - C1516) * C1056 +
           (C1517 - C1518 + C1519 - C1520) * C9298) *
              C9243 * C721 +
          ((C1017 * C725 - C1013 * C730 + C1019 * C724 - C9292 * C728) * C1055 +
           (C1017 * C825 - C1013 * C828 + C1019 * C826 - C9292 * C829) * C1015 +
           (C1017 * C1750 - C1013 * C1753 + C1019 * C1749 - C9292 * C1751) *
               C1056 +
           (C1017 * C1867 - C1013 * C1869 + C1019 * C1868 - C9292 * C1870) *
               C9298) *
              C9243 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1055 * C123 - C1171 * C80 - C1055 * C208 + C1015 * C243 +
            C1056 * C477 - C1172 * C441 - C1056 * C541 + C9298 * C575) *
               C1013 +
           (C1186 + C1187) * C9292) *
              C9243 * C721 -
          ((C1056 * C1792 - C1172 * C1749 - C1056 * C1868 + C9298 * C1905 +
            C1055 * C762 - C1171 * C724 - C1055 * C826 + C1015 * C858) *
               C9292 +
           (C1056 * C1791 - C1172 * C1750 - C1056 * C1867 + C9298 * C1906 +
            C1055 * C761 - C1171 * C725 - C1055 * C825 + C1015 * C859) *
               C1013) *
              C9243 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C9243 * C166 - C165 * C80) * C1055 +
                     (C9243 * C287 - C165 * C208) * C1015 +
                     (C1471 - C1472) * C1056 + (C1593 - C1594) * C9298) *
                        C1013 +
                    ((C175 - C176) * C1055 + (C292 - C293) * C1015 +
                     (C1100 - C1101) * C1056 + (C1222 - C1223) * C9298) *
                        C9292) *
                       C721 +
                   (((C165 * C725 - C9243 * C793) * C1055 +
                     (C165 * C825 - C9243 * C886) * C1015 +
                     (C165 * C1750 - C9243 * C1829) * C1056 +
                     (C165 * C1867 - C9243 * C1941) * C9298) *
                        C1013 +
                    ((C165 * C724 - C9243 * C794) * C1055 +
                     (C165 * C826 - C9243 * C887) * C1015 +
                     (C165 * C1749 - C9243 * C1830) * C1056 +
                     (C165 * C1868 - C9243 * C1942) * C9298) *
                        C9292) *
                       C722) *
                  C9308 * C9309) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1013 * C84 - C1017 * C80 + C9292 * C86 - C1019 * C81) * C165 +
            (C1013 * C325 - C1017 * C321 + C9292 * C326 - C1019 * C322) *
                C9243) *
               C1015 +
           ((C1513 - C1514 + C1515 - C1516) * C165 +
            (C1633 - C1634 + C1635 - C1636) * C9243) *
               C9298) *
              C721 +
          (((C1017 * C725 - C1013 * C730 + C1019 * C724 - C9292 * C728) * C165 +
            (C1017 * C915 - C1013 * C918 + C1019 * C916 - C9292 * C919) *
                C9243) *
               C1015 +
           ((C1017 * C1750 - C1013 * C1753 + C1019 * C1749 - C9292 * C1751) *
                C165 +
            (C1017 * C1977 - C1013 * C1979 + C1019 * C1978 - C9292 * C1980) *
                C9243) *
               C9298) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1015 * C123 - C1055 * C80 + C9298 * C477 - C1056 * C441) * C165 +
            (C1015 * C355 - C1055 * C321 + C9298 * C663 - C1056 * C631) *
                C9243) *
               C1013 +
           ((C1058 - C1059 + C1060 - C1061) * C165 +
            (C1292 - C1293 + C1294 - C1295) * C9243) *
               C9292) *
              C721 +
          (((C1055 * C725 - C1015 * C761 + C1056 * C1750 - C9298 * C1791) *
                C165 +
            (C1055 * C915 - C1015 * C947 + C1056 * C1977 - C9298 * C2015) *
                C9243) *
               C1013 +
           ((C1055 * C724 - C1015 * C762 + C1056 * C1749 - C9298 * C1792) *
                C165 +
            (C1055 * C916 - C1015 * C948 + C1056 * C1978 - C9298 * C2016) *
                C9243) *
               C9292) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C165 * C166 - C389 * C80 - C165 * C321 + C9243 * C390) * C1015 +
            C1715 * C9298) *
               C1013 +
           (C1330 + C1338) * C9292) *
              C721 -
          (((C165 * C1830 - C389 * C1749 - C165 * C1978 + C9243 * C2051) *
                C9298 +
            (C165 * C794 - C389 * C724 - C165 * C916 + C9243 * C977) * C1015) *
               C9292 +
           ((C165 * C1829 - C389 * C1750 - C165 * C1977 + C9243 * C2052) *
                C9298 +
            (C165 * C793 - C389 * C725 - C165 * C915 + C9243 * C978) * C1015) *
               C1013) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1017 * C84 - C1018 * C80 - C1017 * C85 + C1013 * C92 +
            C1019 * C86 - C1020 * C81 - C1019 * C87 + C9292 * C93) *
               C2087 +
           (C1017 * C730 - C1018 * C725 - C1017 * C731 + C1013 * C734 +
            C1019 * C728 - C1020 * C724 - C1019 * C729 + C9292 * C733) *
               C9300) *
              C9228 * C9307 * C9308 * C72 -
          ((C1019 * C726 - C1020 * C723 - C1019 * C727 + C9292 * C732 +
            C1017 * C728 - C1018 * C724 - C1017 * C729 + C1013 * C733) *
               C9300 +
           (C1019 * C88 - C1020 * C82 - C1019 * C89 + C9292 * C94 +
            C1017 * C86 - C1018 * C81 - C1017 * C87 + C1013 * C93) *
               C2087) *
              C9228 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C9228 * C123 - C122 * C80) * C1017 +
                     (C9228 * C127 - C122 * C85) * C1013 +
                     (C132 - C133) * C1019 + (C134 - C135) * C9292) *
                        C2087 +
                    ((C9228 * C761 - C122 * C725) * C1017 +
                     (C9228 * C764 - C122 * C731) * C1013 +
                     (C2124 - C2125) * C1019 + (C2126 - C2127) * C9292) *
                        C9300) *
                       C9307 * C9308 * C72 +
                   (((C133 - C132) * C1017 + (C135 - C134) * C1013 +
                     (C137 - C136) * C1019 + (C139 - C138) * C9292) *
                        C2087 +
                    ((C2125 - C2124) * C1017 + (C2127 - C2126) * C1013 +
                     (C122 * C723 - C9228 * C763) * C1019 +
                     (C122 * C727 - C9228 * C766) * C9292) *
                        C9300) *
                       C9307 * C9308 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2087 * C166 - C2161 * C80 + C9300 * C793 - C2162 * C725) * C1017 +
           (C2087 * C170 - C2161 * C85 + C9300 * C796 - C2162 * C731) * C1013 +
           (C2164 - C2165 + C2166 - C2167) * C1019 +
           (C2168 - C2169 + C2170 - C2171) * C9292) *
              C9228 * C9307 * C9308 * C72 +
          ((C2165 - C2164 + C2167 - C2166) * C1017 +
           (C2169 - C2168 + C2171 - C2170) * C1013 +
           (C2161 * C82 - C2087 * C168 + C2162 * C723 - C9300 * C795) * C1019 +
           (C2161 * C89 - C2087 * C172 + C2162 * C727 - C9300 * C798) * C9292) *
              C9228 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1013 * C84 - C1017 * C80 + C9292 * C86 - C1019 * C81) * C122 +
            (C1013 * C212 - C1017 * C208 + C9292 * C213 - C1019 * C209) *
                C9228) *
               C2087 +
           ((C1013 * C730 - C1017 * C725 + C9292 * C728 - C1019 * C724) * C122 +
            (C1013 * C828 - C1017 * C825 + C9292 * C829 - C1019 * C826) *
                C9228) *
               C9300) *
              C9307 * C9308 * C72 +
          (((C1017 * C81 - C1013 * C86 + C1019 * C82 - C9292 * C88) * C122 +
            (C1017 * C209 - C1013 * C213 + C1019 * C210 - C9292 * C214) *
                C9228) *
               C2087 +
           ((C1017 * C724 - C1013 * C728 + C1019 * C723 - C9292 * C726) * C122 +
            (C1017 * C826 - C1013 * C829 + C1019 * C827 - C9292 * C830) *
                C9228) *
               C9300) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C123 - C242 * C80 - C122 * C208 + C9228 * C243) * C1013 +
            C260 * C9292) *
               C2087 +
           ((C122 * C761 - C242 * C725 - C122 * C825 + C9228 * C859) * C1013 +
            C2246 * C9292) *
               C9300) *
              C9307 * C9308 * C72 -
          (((C122 * C763 - C242 * C723 - C122 * C827 + C9228 * C857) * C9292 +
            C2246 * C1013) *
               C9300 +
           (C261 * C9292 + C260 * C1013) * C2087) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2087 * C166 - C2161 * C80 + C9300 * C793 - C2162 * C725) * C122 +
            (C2087 * C287 - C2161 * C208 + C9300 * C886 - C2162 * C825) *
                C9228) *
               C1013 +
           ((C2164 - C2165 + C2166 - C2167) * C122 +
            (C2281 - C2282 + C2283 - C2284) * C9228) *
               C9292) *
              C9307 * C9308 * C72 +
          (((C2165 - C2164 + C2167 - C2166) * C122 +
            (C2282 - C2281 + C2284 - C2283) * C9228) *
               C1013 +
           ((C2161 * C82 - C2087 * C168 + C2162 * C723 - C9300 * C795) * C122 +
            (C2161 * C210 - C2087 * C289 + C2162 * C827 - C9300 * C888) *
                C9228) *
               C9292) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1013 * C84 - C1017 * C80 + C9292 * C86 - C1019 * C81) * C2161 +
           (C1013 * C325 - C1017 * C321 + C9292 * C326 - C1019 * C322) * C2087 +
           (C1013 * C730 - C1017 * C725 + C9292 * C728 - C1019 * C724) * C2162 +
           (C1013 * C918 - C1017 * C915 + C9292 * C919 - C1019 * C916) *
               C9300) *
              C9228 * C9307 * C9308 * C72 +
          ((C1017 * C81 - C1013 * C86 + C1019 * C82 - C9292 * C88) * C2161 +
           (C1017 * C322 - C1013 * C326 + C1019 * C323 - C9292 * C327) * C2087 +
           (C1017 * C724 - C1013 * C728 + C1019 * C723 - C9292 * C726) * C2162 +
           (C1017 * C916 - C1013 * C919 + C1019 * C917 - C9292 * C920) *
               C9300) *
              C9228 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C9228 * C123 - C122 * C80) * C2161 +
                     (C9228 * C355 - C122 * C321) * C2087 +
                     (C9228 * C761 - C122 * C725) * C2162 +
                     (C9228 * C947 - C122 * C915) * C9300) *
                        C1013 +
                    ((C132 - C133) * C2161 + (C360 - C361) * C2087 +
                     (C2124 - C2125) * C2162 + (C2353 - C2354) * C9300) *
                        C9292) *
                       C9307 * C9308 * C72 +
                   (((C133 - C132) * C2161 + (C361 - C360) * C2087 +
                     (C2125 - C2124) * C2162 + (C2354 - C2353) * C9300) *
                        C1013 +
                    ((C137 - C136) * C2161 + (C363 - C362) * C2087 +
                     (C122 * C723 - C9228 * C763) * C2162 +
                     (C122 * C917 - C9228 * C949) * C9300) *
                        C9292) *
                       C9307 * C9308 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2161 * C166 - C2388 * C80 - C2161 * C321 + C2087 * C390 +
            C2162 * C793 - C2389 * C725 - C2162 * C915 + C9300 * C978) *
               C9228 * C1013 +
           (C2403 + C2404) * C9228 * C9292) *
              C9307 * C9308 * C72 -
          ((C2162 * C795 - C2389 * C723 - C2162 * C917 + C9300 * C976 +
            C2161 * C168 - C2388 * C82 - C2161 * C323 + C2087 * C392) *
               C9228 * C9292 +
           (C2404 + C2403) * C9228 * C1013) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1017 * C84 - C1018 * C80 - C1017 * C85 + C1013 * C92 +
            C1019 * C86 - C1020 * C81 - C1019 * C87 + C9292 * C93) *
               C2087 +
           (C1017 * C730 - C1018 * C725 - C1017 * C731 + C1013 * C734 +
            C1019 * C728 - C1020 * C724 - C1019 * C729 + C9292 * C733) *
               C9300) *
              C9228 * C9307 * C436 -
          ((C1019 * C1751 - C1020 * C1749 - C1019 * C1752 + C9292 * C1755 +
            C1017 * C1753 - C1018 * C1750 - C1017 * C1754 + C1013 * C1756) *
               C9300 +
           (C1394 + C1393) * C2087) *
              C9228 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C9228 * C123 - C122 * C80) * C1017 +
                     (C9228 * C127 - C122 * C85) * C1013 +
                     (C132 - C133) * C1019 + (C134 - C135) * C9292) *
                        C2087 +
                    ((C9228 * C761 - C122 * C725) * C1017 +
                     (C9228 * C764 - C122 * C731) * C1013 +
                     (C2124 - C2125) * C1019 + (C2126 - C2127) * C9292) *
                        C9300) *
                       C9307 * C436 +
                   (((C122 * C441 - C9228 * C477) * C1017 +
                     (C122 * C447 - C9228 * C480) * C1013 +
                     (C122 * C440 - C9228 * C478) * C1019 +
                     (C122 * C445 - C9228 * C481) * C9292) *
                        C2087 +
                    ((C122 * C1750 - C9228 * C1791) * C1017 +
                     (C122 * C1754 - C9228 * C1793) * C1013 +
                     (C122 * C1749 - C9228 * C1792) * C1019 +
                     (C122 * C1752 - C9228 * C1794) * C9292) *
                        C9300) *
                       C9307 * C437) *
                  C9309) /
                 (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2087 * C166 - C2161 * C80 + C9300 * C793 - C2162 * C725) * C1017 +
           (C2087 * C170 - C2161 * C85 + C9300 * C796 - C2162 * C731) * C1013 +
           (C2164 - C2165 + C2166 - C2167) * C1019 +
           (C2168 - C2169 + C2170 - C2171) * C9292) *
              C9228 * C9307 * C436 +
          ((C2161 * C441 - C2087 * C509 + C2162 * C1750 - C9300 * C1829) *
               C1017 +
           (C2161 * C447 - C2087 * C512 + C2162 * C1754 - C9300 * C1831) *
               C1013 +
           (C2161 * C440 - C2087 * C510 + C2162 * C1749 - C9300 * C1830) *
               C1019 +
           (C2161 * C445 - C2087 * C513 + C2162 * C1752 - C9300 * C1832) *
               C9292) *
              C9228 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1013 * C84 - C1017 * C80 + C9292 * C86 - C1019 * C81) * C122 +
            (C1013 * C212 - C1017 * C208 + C9292 * C213 - C1019 * C209) *
                C9228) *
               C2087 +
           ((C1013 * C730 - C1017 * C725 + C9292 * C728 - C1019 * C724) * C122 +
            (C1013 * C828 - C1017 * C825 + C9292 * C829 - C1019 * C826) *
                C9228) *
               C9300) *
              C9307 * C436 +
          (((C1514 - C1513 + C1516 - C1515) * C122 +
            (C1518 - C1517 + C1520 - C1519) * C9228) *
               C2087 +
           ((C1017 * C1750 - C1013 * C1753 + C1019 * C1749 - C9292 * C1751) *
                C122 +
            (C1017 * C1867 - C1013 * C1869 + C1019 * C1868 - C9292 * C1870) *
                C9228) *
               C9300) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C123 - C242 * C80 - C122 * C208 + C9228 * C243) * C1013 +
            C260 * C9292) *
               C2087 +
           ((C122 * C761 - C242 * C725 - C122 * C825 + C9228 * C859) * C1013 +
            C2246 * C9292) *
               C9300) *
              C9307 * C436 -
          (((C122 * C1792 - C242 * C1749 - C122 * C1868 + C9228 * C1905) *
                C9292 +
            (C122 * C1791 - C242 * C1750 - C122 * C1867 + C9228 * C1906) *
                C1013) *
               C9300 +
           ((C122 * C478 - C242 * C440 - C122 * C542 + C9228 * C574) * C9292 +
            (C122 * C477 - C242 * C441 - C122 * C541 + C9228 * C575) * C1013) *
               C2087) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2087 * C166 - C2161 * C80 + C9300 * C793 - C2162 * C725) * C122 +
            (C2087 * C287 - C2161 * C208 + C9300 * C886 - C2162 * C825) *
                C9228) *
               C1013 +
           ((C2164 - C2165 + C2166 - C2167) * C122 +
            (C2281 - C2282 + C2283 - C2284) * C9228) *
               C9292) *
              C9307 * C436 +
          (((C2161 * C441 - C2087 * C509 + C2162 * C1750 - C9300 * C1829) *
                C122 +
            (C2161 * C541 - C2087 * C602 + C2162 * C1867 - C9300 * C1941) *
                C9228) *
               C1013 +
           ((C2161 * C440 - C2087 * C510 + C2162 * C1749 - C9300 * C1830) *
                C122 +
            (C2161 * C542 - C2087 * C603 + C2162 * C1868 - C9300 * C1942) *
                C9228) *
               C9292) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1013 * C84 - C1017 * C80 + C9292 * C86 - C1019 * C81) * C2161 +
           (C1013 * C325 - C1017 * C321 + C9292 * C326 - C1019 * C322) * C2087 +
           (C1013 * C730 - C1017 * C725 + C9292 * C728 - C1019 * C724) * C2162 +
           (C1013 * C918 - C1017 * C915 + C9292 * C919 - C1019 * C916) *
               C9300) *
              C9228 * C9307 * C436 +
          ((C1514 - C1513 + C1516 - C1515) * C2161 +
           (C1634 - C1633 + C1636 - C1635) * C2087 +
           (C1017 * C1750 - C1013 * C1753 + C1019 * C1749 - C9292 * C1751) *
               C2162 +
           (C1017 * C1977 - C1013 * C1979 + C1019 * C1978 - C9292 * C1980) *
               C9300) *
              C9228 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezy[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C9228 * C123 - C122 * C80) * C2161 +
                     (C9228 * C355 - C122 * C321) * C2087 +
                     (C9228 * C761 - C122 * C725) * C2162 +
                     (C9228 * C947 - C122 * C915) * C9300) *
                        C1013 +
                    ((C132 - C133) * C2161 + (C360 - C361) * C2087 +
                     (C2124 - C2125) * C2162 + (C2353 - C2354) * C9300) *
                        C9292) *
                       C9307 * C436 +
                   (((C122 * C441 - C9228 * C477) * C2161 +
                     (C122 * C631 - C9228 * C663) * C2087 +
                     (C122 * C1750 - C9228 * C1791) * C2162 +
                     (C122 * C1977 - C9228 * C2015) * C9300) *
                        C1013 +
                    ((C122 * C440 - C9228 * C478) * C2161 +
                     (C122 * C632 - C9228 * C664) * C2087 +
                     (C122 * C1749 - C9228 * C1792) * C2162 +
                     (C122 * C1978 - C9228 * C2016) * C9300) *
                        C9292) *
                       C9307 * C437) *
                  C9309) /
                 (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2161 * C166 - C2388 * C80 - C2161 * C321 + C2087 * C390 +
            C2162 * C793 - C2389 * C725 - C2162 * C915 + C9300 * C978) *
               C9228 * C1013 +
           (C2403 + C2404) * C9228 * C9292) *
              C9307 * C436 -
          ((C2162 * C1830 - C2389 * C1749 - C2162 * C1978 + C9300 * C2051 +
            C2161 * C510 - C2388 * C440 - C2161 * C632 + C2087 * C693) *
               C9228 * C9292 +
           (C2162 * C1829 - C2389 * C1750 - C2162 * C1977 + C9300 * C2052 +
            C2161 * C509 - C2388 * C441 - C2161 * C631 + C2087 * C694) *
               C9228 * C1013) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1017 * C84 - C1018 * C80 - C1017 * C85 + C1013 * C92 +
            C1019 * C86 - C1020 * C81 - C1019 * C87 + C9292 * C93) *
               C2087 +
           (C2765 + C2766) * C9300) *
              C9228 * C721 -
          ((C1019 * C2746 - C1020 * C2744 - C1019 * C2747 + C9292 * C2750 +
            C1017 * C2748 - C1018 * C2745 - C1017 * C2749 + C1013 * C2751) *
               C9300 +
           (C2766 + C2765) * C2087) *
              C9228 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] += (2 * std::pow(Pi, 2.5) *
                  ((((C9228 * C123 - C122 * C80) * C1017 +
                     (C9228 * C127 - C122 * C85) * C1013 +
                     (C132 - C133) * C1019 + (C134 - C135) * C9292) *
                        C2087 +
                    ((C2805 - C2806) * C1017 + (C2807 - C2808) * C1013 +
                     (C2124 - C2125) * C1019 + (C2126 - C2127) * C9292) *
                        C9300) *
                       C721 +
                   (((C2806 - C2805) * C1017 + (C2808 - C2807) * C1013 +
                     (C2125 - C2124) * C1019 + (C2127 - C2126) * C9292) *
                        C2087 +
                    ((C122 * C2745 - C9228 * C2800) * C1017 +
                     (C122 * C2749 - C9228 * C2802) * C1013 +
                     (C122 * C2744 - C9228 * C2801) * C1019 +
                     (C122 * C2747 - C9228 * C2803) * C9292) *
                        C9300) *
                       C722) *
                  C9308 * C9309) /
                 (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2087 * C166 - C2161 * C80 + C9300 * C793 - C2162 * C725) * C1017 +
           (C2087 * C170 - C2161 * C85 + C9300 * C796 - C2162 * C731) * C1013 +
           (C2164 - C2165 + C2166 - C2167) * C1019 +
           (C2168 - C2169 + C2170 - C2171) * C9292) *
              C9228 * C721 +
          ((C2161 * C725 - C2087 * C793 + C2162 * C2745 - C9300 * C2842) *
               C1017 +
           (C2161 * C731 - C2087 * C796 + C2162 * C2749 - C9300 * C2844) *
               C1013 +
           (C2161 * C724 - C2087 * C794 + C2162 * C2744 - C9300 * C2843) *
               C1019 +
           (C2161 * C729 - C2087 * C797 + C2162 * C2747 - C9300 * C2845) *
               C9292) *
              C9228 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1013 * C84 - C1017 * C80 + C9292 * C86 - C1019 * C81) * C122 +
            (C1013 * C212 - C1017 * C208 + C9292 * C213 - C1019 * C209) *
                C9228) *
               C2087 +
           ((C2885 - C2886 + C2887 - C2888) * C122 +
            (C2889 - C2890 + C2891 - C2892) * C9228) *
               C9300) *
              C721 +
          (((C2886 - C2885 + C2888 - C2887) * C122 +
            (C2890 - C2889 + C2892 - C2891) * C9228) *
               C2087 +
           ((C1017 * C2745 - C1013 * C2748 + C1019 * C2744 - C9292 * C2746) *
                C122 +
            (C1017 * C2880 - C1013 * C2882 + C1019 * C2881 - C9292 * C2883) *
                C9228) *
               C9300) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C123 - C242 * C80 - C122 * C208 + C9228 * C243) * C1013 +
            C260 * C9292) *
               C2087 +
           (C2937 + C2933) * C9300) *
              C721 -
          (((C122 * C2801 - C242 * C2744 - C122 * C2881 + C9228 * C2926) *
                C9292 +
            (C122 * C2800 - C242 * C2745 - C122 * C2880 + C9228 * C2927) *
                C1013) *
               C9300 +
           (C2933 + C2937) * C2087) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2087 * C166 - C2161 * C80 + C9300 * C793 - C2162 * C725) * C122 +
            (C2087 * C287 - C2161 * C208 + C9300 * C886 - C2162 * C825) *
                C9228) *
               C1013 +
           ((C2164 - C2165 + C2166 - C2167) * C122 +
            (C2281 - C2282 + C2283 - C2284) * C9228) *
               C9292) *
              C721 +
          (((C2161 * C725 - C2087 * C793 + C2162 * C2745 - C9300 * C2842) *
                C122 +
            (C2161 * C825 - C2087 * C886 + C2162 * C2880 - C9300 * C2971) *
                C9228) *
               C1013 +
           ((C2161 * C724 - C2087 * C794 + C2162 * C2744 - C9300 * C2843) *
                C122 +
            (C2161 * C826 - C2087 * C887 + C2162 * C2881 - C9300 * C2972) *
                C9228) *
               C9292) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1013 * C84 - C1017 * C80 + C9292 * C86 - C1019 * C81) * C2161 +
           (C1013 * C325 - C1017 * C321 + C9292 * C326 - C1019 * C322) * C2087 +
           (C2885 - C2886 + C2887 - C2888) * C2162 +
           (C3012 - C3013 + C3014 - C3015) * C9300) *
              C9228 * C721 +
          ((C2886 - C2885 + C2888 - C2887) * C2161 +
           (C3013 - C3012 + C3015 - C3014) * C2087 +
           (C1017 * C2745 - C1013 * C2748 + C1019 * C2744 - C9292 * C2746) *
               C2162 +
           (C1017 * C3007 - C1013 * C3009 + C1019 * C3008 - C9292 * C3010) *
               C9300) *
              C9228 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] += (2 * std::pow(Pi, 2.5) *
                  ((((C9228 * C123 - C122 * C80) * C2161 +
                     (C9228 * C355 - C122 * C321) * C2087 +
                     (C2805 - C2806) * C2162 + (C3052 - C3053) * C9300) *
                        C1013 +
                    ((C132 - C133) * C2161 + (C360 - C361) * C2087 +
                     (C2124 - C2125) * C2162 + (C2353 - C2354) * C9300) *
                        C9292) *
                       C721 +
                   (((C2806 - C2805) * C2161 + (C3053 - C3052) * C2087 +
                     (C122 * C2745 - C9228 * C2800) * C2162 +
                     (C122 * C3007 - C9228 * C3049) * C9300) *
                        C1013 +
                    ((C2125 - C2124) * C2161 + (C2354 - C2353) * C2087 +
                     (C122 * C2744 - C9228 * C2801) * C2162 +
                     (C122 * C3008 - C9228 * C3050) * C9300) *
                        C9292) *
                       C722) *
                  C9308 * C9309) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2161 * C166 - C2388 * C80 - C2161 * C321 + C2087 * C390 +
            C2162 * C793 - C2389 * C725 - C2162 * C915 + C9300 * C978) *
               C9228 * C1013 +
           (C2403 + C2404) * C9228 * C9292) *
              C721 -
          ((C2162 * C2843 - C2389 * C2744 - C2162 * C3008 + C9300 * C3087 +
            C2161 * C794 - C2388 * C724 - C2161 * C916 + C2087 * C977) *
               C9228 * C9292 +
           (C2162 * C2842 - C2389 * C2745 - C2162 * C3007 + C9300 * C3088 +
            C2161 * C793 - C2388 * C725 - C2161 * C915 + C2087 * C978) *
               C9228 * C1013) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3127 * C84 - C3128 * C80 - C3127 * C85 + C3123 * C92 +
            C3129 * C86 - C3130 * C81 - C3129 * C87 + C9292 * C93) *
               C9243 * C3125 +
           (C3127 * C446 - C3128 * C441 - C3127 * C447 + C3123 * C450 +
            C3129 * C444 - C3130 * C440 - C3129 * C445 + C9292 * C449) *
               C9243 * C9298) *
              C9307 * C9308 * C72 -
          ((C3129 * C442 - C3130 * C439 - C3129 * C443 + C9292 * C448 +
            C3127 * C444 - C3128 * C440 - C3127 * C445 + C3123 * C449) *
               C9243 * C9298 +
           (C3129 * C88 - C3130 * C82 - C3129 * C89 + C9292 * C94 +
            C3127 * C86 - C3128 * C81 - C3127 * C87 + C3123 * C93) *
               C9243 * C3125) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3125 * C123 - C3165 * C80 + C9298 * C477 - C3166 * C441) * C3127 +
           (C3125 * C127 - C3165 * C85 + C9298 * C480 - C3166 * C447) * C3123 +
           (C3168 - C3169 + C3170 - C3171) * C3129 +
           (C3172 - C3173 + C3174 - C3175) * C9292) *
              C9243 * C9307 * C9308 * C72 +
          ((C3169 - C3168 + C3171 - C3170) * C3127 +
           (C3173 - C3172 + C3175 - C3174) * C3123 +
           (C3165 * C82 - C3125 * C125 + C3166 * C439 - C9298 * C479) * C3129 +
           (C3165 * C89 - C3125 * C129 + C3166 * C443 - C9298 * C482) * C9292) *
              C9243 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[9] += (2 * std::pow(Pi, 2.5) *
                  ((((C9243 * C166 - C165 * C80) * C3127 +
                     (C9243 * C170 - C165 * C85) * C3123 +
                     (C175 - C176) * C3129 + (C177 - C178) * C9292) *
                        C3125 +
                    ((C1471 - C1472) * C3127 + (C1473 - C1474) * C3123 +
                     (C1100 - C1101) * C3129 + (C1102 - C1103) * C9292) *
                        C9298) *
                       C9307 * C9308 * C72 +
                   (((C176 - C175) * C3127 + (C178 - C177) * C3123 +
                     (C180 - C179) * C3129 + (C182 - C181) * C9292) *
                        C3125 +
                    ((C1101 - C1100) * C3127 + (C1103 - C1102) * C3123 +
                     (C165 * C439 - C9243 * C511) * C3129 +
                     (C165 * C443 - C9243 * C514) * C9292) *
                        C9298) *
                       C9307 * C9308 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3123 * C84 - C3127 * C80 + C9292 * C86 - C3129 * C81) * C3165 +
           (C3123 * C212 - C3127 * C208 + C9292 * C213 - C3129 * C209) * C3125 +
           (C3123 * C446 - C3127 * C441 + C9292 * C444 - C3129 * C440) * C3166 +
           (C3123 * C544 - C3127 * C541 + C9292 * C545 - C3129 * C542) *
               C9298) *
              C9243 * C9307 * C9308 * C72 +
          ((C3127 * C81 - C3123 * C86 + C3129 * C82 - C9292 * C88) * C3165 +
           (C3127 * C209 - C3123 * C213 + C3129 * C210 - C9292 * C214) * C3125 +
           (C3127 * C440 - C3123 * C444 + C3129 * C439 - C9292 * C442) * C3166 +
           (C3127 * C542 - C3123 * C545 + C3129 * C543 - C9292 * C546) *
               C9298) *
              C9243 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3165 * C123 - C3277 * C80 - C3165 * C208 + C3125 * C243 +
            C3166 * C477 - C3278 * C441 - C3166 * C541 + C9298 * C575) *
               C3123 +
           (C3292 + C3293) * C9292) *
              C9243 * C9307 * C9308 * C72 -
          ((C3166 * C479 - C3278 * C439 - C3166 * C543 + C9298 * C573 +
            C3165 * C125 - C3277 * C82 - C3165 * C210 + C3125 * C245) *
               C9292 +
           (C3293 + C3292) * C3123) *
              C9243 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[9] += (2 * std::pow(Pi, 2.5) *
                  ((((C9243 * C166 - C165 * C80) * C3165 +
                     (C9243 * C287 - C165 * C208) * C3125 +
                     (C1471 - C1472) * C3166 + (C1593 - C1594) * C9298) *
                        C3123 +
                    ((C175 - C176) * C3165 + (C292 - C293) * C3125 +
                     (C1100 - C1101) * C3166 + (C1222 - C1223) * C9298) *
                        C9292) *
                       C9307 * C9308 * C72 +
                   (((C176 - C175) * C3165 + (C293 - C292) * C3125 +
                     (C1101 - C1100) * C3166 + (C1223 - C1222) * C9298) *
                        C3123 +
                    ((C180 - C179) * C3165 + (C295 - C294) * C3125 +
                     (C165 * C439 - C9243 * C511) * C3166 +
                     (C165 * C543 - C9243 * C604) * C9298) *
                        C9292) *
                       C9307 * C9308 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3123 * C84 - C3127 * C80 + C9292 * C86 - C3129 * C81) * C165 +
            (C3123 * C325 - C3127 * C321 + C9292 * C326 - C3129 * C322) *
                C9243) *
               C3125 +
           ((C3123 * C446 - C3127 * C441 + C9292 * C444 - C3129 * C440) * C165 +
            (C3123 * C634 - C3127 * C631 + C9292 * C635 - C3129 * C632) *
                C9243) *
               C9298) *
              C9307 * C9308 * C72 +
          (((C3127 * C81 - C3123 * C86 + C3129 * C82 - C9292 * C88) * C165 +
            (C3127 * C322 - C3123 * C326 + C3129 * C323 - C9292 * C327) *
                C9243) *
               C3125 +
           ((C3127 * C440 - C3123 * C444 + C3129 * C439 - C9292 * C442) * C165 +
            (C3127 * C632 - C3123 * C635 + C3129 * C633 - C9292 * C636) *
                C9243) *
               C9298) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3125 * C123 - C3165 * C80 + C9298 * C477 - C3166 * C441) * C165 +
            (C3125 * C355 - C3165 * C321 + C9298 * C663 - C3166 * C631) *
                C9243) *
               C3123 +
           ((C3168 - C3169 + C3170 - C3171) * C165 +
            (C3396 - C3397 + C3398 - C3399) * C9243) *
               C9292) *
              C9307 * C9308 * C72 +
          (((C3169 - C3168 + C3171 - C3170) * C165 +
            (C3397 - C3396 + C3399 - C3398) * C9243) *
               C3123 +
           ((C3165 * C82 - C3125 * C125 + C3166 * C439 - C9298 * C479) * C165 +
            (C3165 * C323 - C3125 * C357 + C3166 * C633 - C9298 * C665) *
                C9243) *
               C9292) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C165 * C166 - C389 * C80 - C165 * C321 + C9243 * C390) * C3125 +
            C1715 * C9298) *
               C3123 +
           (C3434 + C3435) * C9292) *
              C9307 * C9308 * C72 -
          (((C165 * C511 - C389 * C439 - C165 * C633 + C9243 * C692) * C9298 +
            C408 * C3125) *
               C9292 +
           (C3435 + C3434) * C3123) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3127 * C84 - C3128 * C80 - C3127 * C85 + C3123 * C92 +
            C3129 * C86 - C3130 * C81 - C3129 * C87 + C9292 * C93) *
               C9243 * C3125 +
           (C3482 + C3483) * C9243 * C9298) *
              C9307 * C436 -
          ((C3129 * C1374 - C3130 * C1372 - C3129 * C1375 + C9292 * C1378 +
            C3127 * C1376 - C3128 * C1373 - C3127 * C1377 + C3123 * C1379) *
               C9243 * C9298 +
           (C3483 + C3482) * C9243 * C3125) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3125 * C123 - C3165 * C80 + C9298 * C477 - C3166 * C441) * C3127 +
           (C3125 * C127 - C3165 * C85 + C9298 * C480 - C3166 * C447) * C3123 +
           (C3168 - C3169 + C3170 - C3171) * C3129 +
           (C3172 - C3173 + C3174 - C3175) * C9292) *
              C9243 * C9307 * C436 +
          ((C3165 * C441 - C3125 * C477 + C3166 * C1373 - C9298 * C1428) *
               C3127 +
           (C3165 * C447 - C3125 * C480 + C3166 * C1377 - C9298 * C1430) *
               C3123 +
           (C3165 * C440 - C3125 * C478 + C3166 * C1372 - C9298 * C1429) *
               C3129 +
           (C3165 * C445 - C3125 * C481 + C3166 * C1375 - C9298 * C1431) *
               C9292) *
              C9243 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] += (2 * std::pow(Pi, 2.5) *
                   ((((C9243 * C166 - C165 * C80) * C3127 +
                      (C9243 * C170 - C165 * C85) * C3123 +
                      (C175 - C176) * C3129 + (C177 - C178) * C9292) *
                         C3125 +
                     ((C1471 - C1472) * C3127 + (C1473 - C1474) * C3123 +
                      (C1100 - C1101) * C3129 + (C1102 - C1103) * C9292) *
                         C9298) *
                        C9307 * C436 +
                    (((C1472 - C1471) * C3127 + (C1474 - C1473) * C3123 +
                      (C1101 - C1100) * C3129 + (C1103 - C1102) * C9292) *
                         C3125 +
                     ((C165 * C1373 - C9243 * C1466) * C3127 +
                      (C165 * C1377 - C9243 * C1468) * C3123 +
                      (C165 * C1372 - C9243 * C1467) * C3129 +
                      (C165 * C1375 - C9243 * C1469) * C9292) *
                         C9298) *
                        C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3123 * C84 - C3127 * C80 + C9292 * C86 - C3129 * C81) * C3165 +
           (C3123 * C212 - C3127 * C208 + C9292 * C213 - C3129 * C209) * C3125 +
           (C3586 - C3587 + C3588 - C3589) * C3166 +
           (C3590 - C3591 + C3592 - C3593) * C9298) *
              C9243 * C9307 * C436 +
          ((C3587 - C3586 + C3589 - C3588) * C3165 +
           (C3591 - C3590 + C3593 - C3592) * C3125 +
           (C3127 * C1373 - C3123 * C1376 + C3129 * C1372 - C9292 * C1374) *
               C3166 +
           (C3127 * C1508 - C3123 * C1510 + C3129 * C1509 - C9292 * C1511) *
               C9298) *
              C9243 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3165 * C123 - C3277 * C80 - C3165 * C208 + C3125 * C243 +
            C3166 * C477 - C3278 * C441 - C3166 * C541 + C9298 * C575) *
               C3123 +
           (C3292 + C3293) * C9292) *
              C9243 * C9307 * C436 -
          ((C3166 * C1429 - C3278 * C1372 - C3166 * C1509 + C9298 * C1554 +
            C3165 * C478 - C3277 * C440 - C3165 * C542 + C3125 * C574) *
               C9292 +
           (C3166 * C1428 - C3278 * C1373 - C3166 * C1508 + C9298 * C1555 +
            C3165 * C477 - C3277 * C441 - C3165 * C541 + C3125 * C575) *
               C3123) *
              C9243 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] += (2 * std::pow(Pi, 2.5) *
                   ((((C9243 * C166 - C165 * C80) * C3165 +
                      (C9243 * C287 - C165 * C208) * C3125 +
                      (C1471 - C1472) * C3166 + (C1593 - C1594) * C9298) *
                         C3123 +
                     ((C175 - C176) * C3165 + (C292 - C293) * C3125 +
                      (C1100 - C1101) * C3166 + (C1222 - C1223) * C9298) *
                         C9292) *
                        C9307 * C436 +
                    (((C1472 - C1471) * C3165 + (C1594 - C1593) * C3125 +
                      (C165 * C1373 - C9243 * C1466) * C3166 +
                      (C165 * C1508 - C9243 * C1590) * C9298) *
                         C3123 +
                     ((C1101 - C1100) * C3165 + (C1223 - C1222) * C3125 +
                      (C165 * C1372 - C9243 * C1467) * C3166 +
                      (C165 * C1509 - C9243 * C1591) * C9298) *
                         C9292) *
                        C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3123 * C84 - C3127 * C80 + C9292 * C86 - C3129 * C81) * C165 +
            (C3123 * C325 - C3127 * C321 + C9292 * C326 - C3129 * C322) *
                C9243) *
               C3125 +
           ((C3586 - C3587 + C3588 - C3589) * C165 +
            (C3696 - C3697 + C3698 - C3699) * C9243) *
               C9298) *
              C9307 * C436 +
          (((C3587 - C3586 + C3589 - C3588) * C165 +
            (C3697 - C3696 + C3699 - C3698) * C9243) *
               C3125 +
           ((C3127 * C1373 - C3123 * C1376 + C3129 * C1372 - C9292 * C1374) *
                C165 +
            (C3127 * C1628 - C3123 * C1630 + C3129 * C1629 - C9292 * C1631) *
                C9243) *
               C9298) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3125 * C123 - C3165 * C80 + C9298 * C477 - C3166 * C441) * C165 +
            (C3125 * C355 - C3165 * C321 + C9298 * C663 - C3166 * C631) *
                C9243) *
               C3123 +
           ((C3168 - C3169 + C3170 - C3171) * C165 +
            (C3396 - C3397 + C3398 - C3399) * C9243) *
               C9292) *
              C9307 * C436 +
          (((C3165 * C441 - C3125 * C477 + C3166 * C1373 - C9298 * C1428) *
                C165 +
            (C3165 * C631 - C3125 * C663 + C3166 * C1628 - C9298 * C1670) *
                C9243) *
               C3123 +
           ((C3165 * C440 - C3125 * C478 + C3166 * C1372 - C9298 * C1429) *
                C165 +
            (C3165 * C632 - C3125 * C664 + C3166 * C1629 - C9298 * C1671) *
                C9243) *
               C9292) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C165 * C166 - C389 * C80 - C165 * C321 + C9243 * C390) * C3125 +
            C1715 * C9298) *
               C3123 +
           (C3434 + C3435) * C9292) *
              C9307 * C436 -
          (((C165 * C1467 - C389 * C1372 - C165 * C1629 + C9243 * C1706) *
                C9298 +
            C1337 * C3125) *
               C9292 +
           ((C165 * C1466 - C389 * C1373 - C165 * C1628 + C9243 * C1707) *
                C9298 +
            C1715 * C3125) *
               C3123) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3127 * C84 - C3128 * C80 - C3127 * C85 + C3123 * C92 +
            C3129 * C86 - C3130 * C81 - C3129 * C87 + C9292 * C93) *
               C9243 * C3125 +
           (C3482 + C3483) * C9243 * C9298) *
              C721 -
          ((C3129 * C1751 - C3130 * C1749 - C3129 * C1752 + C9292 * C1755 +
            C3127 * C1753 - C3128 * C1750 - C3127 * C1754 + C3123 * C1756) *
               C9243 * C9298 +
           (C3129 * C728 - C3130 * C724 - C3129 * C729 + C9292 * C733 +
            C3127 * C730 - C3128 * C725 - C3127 * C731 + C3123 * C734) *
               C9243 * C3125) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3125 * C123 - C3165 * C80 + C9298 * C477 - C3166 * C441) * C3127 +
           (C3125 * C127 - C3165 * C85 + C9298 * C480 - C3166 * C447) * C3123 +
           (C3168 - C3169 + C3170 - C3171) * C3129 +
           (C3172 - C3173 + C3174 - C3175) * C9292) *
              C9243 * C721 +
          ((C3165 * C725 - C3125 * C761 + C3166 * C1750 - C9298 * C1791) *
               C3127 +
           (C3165 * C731 - C3125 * C764 + C3166 * C1754 - C9298 * C1793) *
               C3123 +
           (C3165 * C724 - C3125 * C762 + C3166 * C1749 - C9298 * C1792) *
               C3129 +
           (C3165 * C729 - C3125 * C765 + C3166 * C1752 - C9298 * C1794) *
               C9292) *
              C9243 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] += (2 * std::pow(Pi, 2.5) *
                   ((((C9243 * C166 - C165 * C80) * C3127 +
                      (C9243 * C170 - C165 * C85) * C3123 +
                      (C175 - C176) * C3129 + (C177 - C178) * C9292) *
                         C3125 +
                     ((C1471 - C1472) * C3127 + (C1473 - C1474) * C3123 +
                      (C1100 - C1101) * C3129 + (C1102 - C1103) * C9292) *
                         C9298) *
                        C721 +
                    (((C165 * C725 - C9243 * C793) * C3127 +
                      (C165 * C731 - C9243 * C796) * C3123 +
                      (C165 * C724 - C9243 * C794) * C3129 +
                      (C165 * C729 - C9243 * C797) * C9292) *
                         C3125 +
                     ((C165 * C1750 - C9243 * C1829) * C3127 +
                      (C165 * C1754 - C9243 * C1831) * C3123 +
                      (C165 * C1749 - C9243 * C1830) * C3129 +
                      (C165 * C1752 - C9243 * C1832) * C9292) *
                         C9298) *
                        C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3123 * C84 - C3127 * C80 + C9292 * C86 - C3129 * C81) * C3165 +
           (C3123 * C212 - C3127 * C208 + C9292 * C213 - C3129 * C209) * C3125 +
           (C3586 - C3587 + C3588 - C3589) * C3166 +
           (C3590 - C3591 + C3592 - C3593) * C9298) *
              C9243 * C721 +
          ((C3127 * C725 - C3123 * C730 + C3129 * C724 - C9292 * C728) * C3165 +
           (C3127 * C825 - C3123 * C828 + C3129 * C826 - C9292 * C829) * C3125 +
           (C3127 * C1750 - C3123 * C1753 + C3129 * C1749 - C9292 * C1751) *
               C3166 +
           (C3127 * C1867 - C3123 * C1869 + C3129 * C1868 - C9292 * C1870) *
               C9298) *
              C9243 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3165 * C123 - C3277 * C80 - C3165 * C208 + C3125 * C243 +
            C3166 * C477 - C3278 * C441 - C3166 * C541 + C9298 * C575) *
               C3123 +
           (C3292 + C3293) * C9292) *
              C9243 * C721 -
          ((C3166 * C1792 - C3278 * C1749 - C3166 * C1868 + C9298 * C1905 +
            C3165 * C762 - C3277 * C724 - C3165 * C826 + C3125 * C858) *
               C9292 +
           (C3166 * C1791 - C3278 * C1750 - C3166 * C1867 + C9298 * C1906 +
            C3165 * C761 - C3277 * C725 - C3165 * C825 + C3125 * C859) *
               C3123) *
              C9243 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] += (2 * std::pow(Pi, 2.5) *
                   ((((C9243 * C166 - C165 * C80) * C3165 +
                      (C9243 * C287 - C165 * C208) * C3125 +
                      (C1471 - C1472) * C3166 + (C1593 - C1594) * C9298) *
                         C3123 +
                     ((C175 - C176) * C3165 + (C292 - C293) * C3125 +
                      (C1100 - C1101) * C3166 + (C1222 - C1223) * C9298) *
                         C9292) *
                        C721 +
                    (((C165 * C725 - C9243 * C793) * C3165 +
                      (C165 * C825 - C9243 * C886) * C3125 +
                      (C165 * C1750 - C9243 * C1829) * C3166 +
                      (C165 * C1867 - C9243 * C1941) * C9298) *
                         C3123 +
                     ((C165 * C724 - C9243 * C794) * C3165 +
                      (C165 * C826 - C9243 * C887) * C3125 +
                      (C165 * C1749 - C9243 * C1830) * C3166 +
                      (C165 * C1868 - C9243 * C1942) * C9298) *
                         C9292) *
                        C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3123 * C84 - C3127 * C80 + C9292 * C86 - C3129 * C81) * C165 +
            (C3123 * C325 - C3127 * C321 + C9292 * C326 - C3129 * C322) *
                C9243) *
               C3125 +
           ((C3586 - C3587 + C3588 - C3589) * C165 +
            (C3696 - C3697 + C3698 - C3699) * C9243) *
               C9298) *
              C721 +
          (((C3127 * C725 - C3123 * C730 + C3129 * C724 - C9292 * C728) * C165 +
            (C3127 * C915 - C3123 * C918 + C3129 * C916 - C9292 * C919) *
                C9243) *
               C3125 +
           ((C3127 * C1750 - C3123 * C1753 + C3129 * C1749 - C9292 * C1751) *
                C165 +
            (C3127 * C1977 - C3123 * C1979 + C3129 * C1978 - C9292 * C1980) *
                C9243) *
               C9298) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3125 * C123 - C3165 * C80 + C9298 * C477 - C3166 * C441) * C165 +
            (C3125 * C355 - C3165 * C321 + C9298 * C663 - C3166 * C631) *
                C9243) *
               C3123 +
           ((C3168 - C3169 + C3170 - C3171) * C165 +
            (C3396 - C3397 + C3398 - C3399) * C9243) *
               C9292) *
              C721 +
          (((C3165 * C725 - C3125 * C761 + C3166 * C1750 - C9298 * C1791) *
                C165 +
            (C3165 * C915 - C3125 * C947 + C3166 * C1977 - C9298 * C2015) *
                C9243) *
               C3123 +
           ((C3165 * C724 - C3125 * C762 + C3166 * C1749 - C9298 * C1792) *
                C165 +
            (C3165 * C916 - C3125 * C948 + C3166 * C1978 - C9298 * C2016) *
                C9243) *
               C9292) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C165 * C166 - C389 * C80 - C165 * C321 + C9243 * C390) * C3125 +
            C1715 * C9298) *
               C3123 +
           (C3434 + C3435) * C9292) *
              C721 -
          (((C165 * C1830 - C389 * C1749 - C165 * C1978 + C9243 * C2051) *
                C9298 +
            (C165 * C794 - C389 * C724 - C165 * C916 + C9243 * C977) * C3125) *
               C9292 +
           ((C165 * C1829 - C389 * C1750 - C165 * C1977 + C9243 * C2052) *
                C9298 +
            (C165 * C793 - C389 * C725 - C165 * C915 + C9243 * C978) * C3125) *
               C3123) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4103 * C84 - C4104 * C80 - C4103 * C85 + C9168 * C92) * C9243 *
               C4100 +
           (C4103 * C446 - C4104 * C441 - C4103 * C447 + C9168 * C450) * C9243 *
               C4101 +
           (C4103 * C1376 - C4104 * C1373 - C4103 * C1377 + C9168 * C1379) *
               C9243 * C4102) *
              C9307 * C9308 * C72 -
          ((C4103 * C1374 - C4104 * C1372 - C4103 * C1375 + C9168 * C1378) *
               C9243 * C4102 +
           (C4103 * C444 - C4104 * C440 - C4103 * C445 + C9168 * C449) * C9243 *
               C4101 +
           (C4103 * C86 - C4104 * C81 - C4103 * C87 + C9168 * C93) * C9243 *
               C4100) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[12] += (2 * std::pow(Pi, 2.5) *
                   (((C4100 * C123 - C4131 * C80 + C4101 * C477 - C4132 * C441 +
                      C4102 * C1428 - C4133 * C1373) *
                         C4103 +
                     (C4100 * C127 - C4131 * C85 + C4101 * C480 - C4132 * C447 +
                      C4102 * C1430 - C4133 * C1377) *
                         C9168) *
                        C9243 * C9307 * C9308 * C72 +
                    ((C4131 * C81 - C4100 * C124 + C4132 * C440 - C4101 * C478 +
                      C4133 * C1372 - C4102 * C1429) *
                         C4103 +
                     (C4131 * C87 - C4100 * C128 + C4132 * C445 - C4101 * C481 +
                      C4133 * C1375 - C4102 * C1431) *
                         C9168) *
                        C9243 * C9307 * C9308 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C9243 * C166 - C165 * C80) * C4103 +
            (C9243 * C170 - C165 * C85) * C9168) *
               C4100 +
           ((C1471 - C1472) * C4103 + (C1473 - C1474) * C9168) * C4101 +
           ((C9243 * C1466 - C165 * C1373) * C4103 +
            (C9243 * C1468 - C165 * C1377) * C9168) *
               C4102) *
              C9307 * C9308 * C72 +
          (((C176 - C175) * C4103 + (C178 - C177) * C9168) * C4100 +
           ((C1101 - C1100) * C4103 + (C1103 - C1102) * C9168) * C4101 +
           ((C165 * C1372 - C9243 * C1467) * C4103 +
            (C165 * C1375 - C9243 * C1469) * C9168) *
               C4102) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[12] += (2 * std::pow(Pi, 2.5) *
                   (((C9168 * C84 - C4103 * C80) * C4131 +
                     (C9168 * C212 - C4103 * C208) * C4100 +
                     (C9168 * C446 - C4103 * C441) * C4132 +
                     (C9168 * C544 - C4103 * C541) * C4101 +
                     (C9168 * C1376 - C4103 * C1373) * C4133 +
                     (C9168 * C1510 - C4103 * C1508) * C4102) *
                        C9243 * C9307 * C9308 * C72 +
                    ((C4103 * C81 - C9168 * C86) * C4131 +
                     (C4103 * C209 - C9168 * C213) * C4100 +
                     (C4103 * C440 - C9168 * C444) * C4132 +
                     (C4103 * C542 - C9168 * C545) * C4101 +
                     (C4103 * C1372 - C9168 * C1374) * C4133 +
                     (C4103 * C1509 - C9168 * C1511) * C4102) *
                        C9243 * C9307 * C9308 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (2 * std::pow(Pi, 2.5) *
         ((C4131 * C123 - C4212 * C80 - C4131 * C208 + C4100 * C243 +
           C4132 * C477 - C4213 * C441 - C4132 * C541 + C4101 * C575 +
           C4133 * C1428 - C4214 * C1373 - C4133 * C1508 + C4102 * C1555) *
              C9168 * C9243 * C9307 * C9308 * C72 -
          (C4133 * C1429 - C4214 * C1372 - C4133 * C1509 + C4102 * C1554 +
           C4132 * C478 - C4213 * C440 - C4132 * C542 + C4101 * C574 +
           C4131 * C124 - C4212 * C81 - C4131 * C209 + C4100 * C244) *
              C9168 * C9243 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (2 * std::pow(Pi, 2.5) *
         (((C9243 * C166 - C165 * C80) * C4131 +
           (C9243 * C287 - C165 * C208) * C4100 + (C1471 - C1472) * C4132 +
           (C1593 - C1594) * C4101 + (C9243 * C1466 - C165 * C1373) * C4133 +
           (C9243 * C1590 - C165 * C1508) * C4102) *
              C9168 * C9307 * C9308 * C72 +
          ((C176 - C175) * C4131 + (C293 - C292) * C4100 +
           (C1101 - C1100) * C4132 + (C1223 - C1222) * C4101 +
           (C165 * C1372 - C9243 * C1467) * C4133 +
           (C165 * C1509 - C9243 * C1591) * C4102) *
              C9168 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[12] += (2 * std::pow(Pi, 2.5) *
                   ((((C9168 * C84 - C4103 * C80) * C165 +
                      (C9168 * C325 - C4103 * C321) * C9243) *
                         C4100 +
                     ((C9168 * C446 - C4103 * C441) * C165 +
                      (C9168 * C634 - C4103 * C631) * C9243) *
                         C4101 +
                     ((C9168 * C1376 - C4103 * C1373) * C165 +
                      (C9168 * C1630 - C4103 * C1628) * C9243) *
                         C4102) *
                        C9307 * C9308 * C72 +
                    (((C4103 * C81 - C9168 * C86) * C165 +
                      (C4103 * C322 - C9168 * C326) * C9243) *
                         C4100 +
                     ((C4103 * C440 - C9168 * C444) * C165 +
                      (C4103 * C632 - C9168 * C635) * C9243) *
                         C4101 +
                     ((C4103 * C1372 - C9168 * C1374) * C165 +
                      (C4103 * C1629 - C9168 * C1631) * C9243) *
                         C4102) *
                        C9307 * C9308 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[12] += (2 * std::pow(Pi, 2.5) *
                   (((C4100 * C123 - C4131 * C80 + C4101 * C477 - C4132 * C441 +
                      C4102 * C1428 - C4133 * C1373) *
                         C165 +
                     (C4100 * C355 - C4131 * C321 + C4101 * C663 -
                      C4132 * C631 + C4102 * C1670 - C4133 * C1628) *
                         C9243) *
                        C9168 * C9307 * C9308 * C72 +
                    ((C4131 * C81 - C4100 * C124 + C4132 * C440 - C4101 * C478 +
                      C4133 * C1372 - C4102 * C1429) *
                         C165 +
                     (C4131 * C322 - C4100 * C356 + C4132 * C632 -
                      C4101 * C664 + C4133 * C1629 - C4102 * C1671) *
                         C9243) *
                        C9168 * C9307 * C9308 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (2 * std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C9243 * C390) * C4100 +
           C1715 * C4101 +
           (C165 * C1466 - C389 * C1373 - C165 * C1628 + C9243 * C1707) *
               C4102) *
              C9168 * C9307 * C9308 * C72 -
          ((C165 * C1467 - C389 * C1372 - C165 * C1629 + C9243 * C1706) *
               C4102 +
           C1337 * C4101 + C407 * C4100) *
              C9168 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4103 * C84 - C4104 * C80 - C4103 * C85 + C9168 * C92) * C9243 *
               C4100 +
           C4364 * C4101 + C4365 * C4102) *
              C9307 * C436 -
          ((C4103 * C4346 - C4104 * C4345 - C4103 * C4347 + C9168 * C4348) *
               C9243 * C4102 +
           C4365 * C4101 + C4364 * C4100) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[13] += (2 * std::pow(Pi, 2.5) *
                   (((C4100 * C123 - C4131 * C80 + C4101 * C477 - C4132 * C441 +
                      C4102 * C1428 - C4133 * C1373) *
                         C4103 +
                     (C4100 * C127 - C4131 * C85 + C4101 * C480 - C4132 * C447 +
                      C4102 * C1430 - C4133 * C1377) *
                         C9168) *
                        C9243 * C9307 * C436 +
                    ((C4131 * C441 - C4100 * C477 + C4132 * C1373 -
                      C4101 * C1428 + C4133 * C4345 - C4102 * C4391) *
                         C4103 +
                     (C4131 * C447 - C4100 * C480 + C4132 * C1377 -
                      C4101 * C1430 + C4133 * C4347 - C4102 * C4392) *
                         C9168) *
                        C9243 * C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C9243 * C166 - C165 * C80) * C4103 +
            (C9243 * C170 - C165 * C85) * C9168) *
               C4100 +
           ((C1471 - C1472) * C4103 + (C1473 - C1474) * C9168) * C4101 +
           ((C4422 - C4423) * C4103 + (C4424 - C4425) * C9168) * C4102) *
              C9307 * C436 +
          (((C1472 - C1471) * C4103 + (C1474 - C1473) * C9168) * C4100 +
           ((C4423 - C4422) * C4103 + (C4425 - C4424) * C9168) * C4101 +
           ((C165 * C4345 - C9243 * C4419) * C4103 +
            (C165 * C4347 - C9243 * C4420) * C9168) *
               C4102) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] += (2 * std::pow(Pi, 2.5) *
                   (((C9168 * C84 - C4103 * C80) * C4131 +
                     (C9168 * C212 - C4103 * C208) * C4100 +
                     (C4454 - C4455) * C4132 + (C4456 - C4457) * C4101 +
                     (C4458 - C4459) * C4133 + (C4460 - C4461) * C4102) *
                        C9243 * C9307 * C436 +
                    ((C4455 - C4454) * C4131 + (C4457 - C4456) * C4100 +
                     (C4459 - C4458) * C4132 + (C4461 - C4460) * C4101 +
                     (C4103 * C4345 - C9168 * C4346) * C4133 +
                     (C4103 * C4451 - C9168 * C4452) * C4102) *
                        C9243 * C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (2 * std::pow(Pi, 2.5) *
         ((C4131 * C123 - C4212 * C80 - C4131 * C208 + C4100 * C243 +
           C4132 * C477 - C4213 * C441 - C4132 * C541 + C4101 * C575 +
           C4133 * C1428 - C4214 * C1373 - C4133 * C1508 + C4102 * C1555) *
              C9168 * C9243 * C9307 * C436 -
          (C4133 * C4391 - C4214 * C4345 - C4133 * C4451 + C4102 * C4487 +
           C4132 * C1428 - C4213 * C1373 - C4132 * C1508 + C4101 * C1555 +
           C4131 * C477 - C4212 * C441 - C4131 * C541 + C4100 * C575) *
              C9168 * C9243 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[13] += (2 * std::pow(Pi, 2.5) *
                   (((C9243 * C166 - C165 * C80) * C4131 +
                     (C9243 * C287 - C165 * C208) * C4100 +
                     (C1471 - C1472) * C4132 + (C1593 - C1594) * C4101 +
                     (C4422 - C4423) * C4133 + (C4516 - C4517) * C4102) *
                        C9168 * C9307 * C436 +
                    ((C1472 - C1471) * C4131 + (C1594 - C1593) * C4100 +
                     (C4423 - C4422) * C4132 + (C4517 - C4516) * C4101 +
                     (C165 * C4345 - C9243 * C4419) * C4133 +
                     (C165 * C4451 - C9243 * C4514) * C4102) *
                        C9168 * C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C9168 * C84 - C4103 * C80) * C165 +
            (C9168 * C325 - C4103 * C321) * C9243) *
               C4100 +
           ((C4454 - C4455) * C165 + (C4546 - C4547) * C9243) * C4101 +
           ((C4458 - C4459) * C165 + (C4548 - C4549) * C9243) * C4102) *
              C9307 * C436 +
          (((C4455 - C4454) * C165 + (C4547 - C4546) * C9243) * C4100 +
           ((C4459 - C4458) * C165 + (C4549 - C4548) * C9243) * C4101 +
           ((C4103 * C4345 - C9168 * C4346) * C165 +
            (C4103 * C4543 - C9168 * C4544) * C9243) *
               C4102) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezy[13] += (2 * std::pow(Pi, 2.5) *
                   (((C4100 * C123 - C4131 * C80 + C4101 * C477 - C4132 * C441 +
                      C4102 * C1428 - C4133 * C1373) *
                         C165 +
                     (C4100 * C355 - C4131 * C321 + C4101 * C663 -
                      C4132 * C631 + C4102 * C1670 - C4133 * C1628) *
                         C9243) *
                        C9168 * C9307 * C436 +
                    ((C4131 * C441 - C4100 * C477 + C4132 * C1373 -
                      C4101 * C1428 + C4133 * C4345 - C4102 * C4391) *
                         C165 +
                     (C4131 * C631 - C4100 * C663 + C4132 * C1628 -
                      C4101 * C1670 + C4133 * C4543 - C4102 * C4575) *
                         C9243) *
                        C9168 * C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C9243 * C390) * C4100 +
           C1715 * C4101 + C4610 * C4102) *
              C9168 * C9307 * C436 -
          ((C165 * C4419 - C389 * C4345 - C165 * C4543 + C9243 * C4602) *
               C4102 +
           C4610 * C4101 + C1715 * C4100) *
              C9168 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4103 * C84 - C4104 * C80 - C4103 * C85 + C9168 * C92) * C9243 *
               C4100 +
           C4364 * C4101 + C4365 * C4102) *
              C721 -
          ((C4103 * C4637 - C4104 * C4636 - C4103 * C4638 + C9168 * C4639) *
               C9243 * C4102 +
           (C4103 * C1753 - C4104 * C1750 - C4103 * C1754 + C9168 * C1756) *
               C9243 * C4101 +
           (C4103 * C730 - C4104 * C725 - C4103 * C731 + C9168 * C734) * C9243 *
               C4100) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[14] += (2 * std::pow(Pi, 2.5) *
                   (((C4100 * C123 - C4131 * C80 + C4101 * C477 - C4132 * C441 +
                      C4102 * C1428 - C4133 * C1373) *
                         C4103 +
                     (C4100 * C127 - C4131 * C85 + C4101 * C480 - C4132 * C447 +
                      C4102 * C1430 - C4133 * C1377) *
                         C9168) *
                        C9243 * C721 +
                    ((C4131 * C725 - C4100 * C761 + C4132 * C1750 -
                      C4101 * C1791 + C4133 * C4636 - C4102 * C4666) *
                         C4103 +
                     (C4131 * C731 - C4100 * C764 + C4132 * C1754 -
                      C4101 * C1793 + C4133 * C4638 - C4102 * C4667) *
                         C9168) *
                        C9243 * C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C9243 * C166 - C165 * C80) * C4103 +
            (C9243 * C170 - C165 * C85) * C9168) *
               C4100 +
           ((C1471 - C1472) * C4103 + (C1473 - C1474) * C9168) * C4101 +
           ((C4422 - C4423) * C4103 + (C4424 - C4425) * C9168) * C4102) *
              C721 +
          (((C165 * C725 - C9243 * C793) * C4103 +
            (C165 * C731 - C9243 * C796) * C9168) *
               C4100 +
           ((C165 * C1750 - C9243 * C1829) * C4103 +
            (C165 * C1754 - C9243 * C1831) * C9168) *
               C4101 +
           ((C165 * C4636 - C9243 * C4694) * C4103 +
            (C165 * C4638 - C9243 * C4695) * C9168) *
               C4102) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyx[14] += (2 * std::pow(Pi, 2.5) *
                   (((C9168 * C84 - C4103 * C80) * C4131 +
                     (C9168 * C212 - C4103 * C208) * C4100 +
                     (C4454 - C4455) * C4132 + (C4456 - C4457) * C4101 +
                     (C4458 - C4459) * C4133 + (C4460 - C4461) * C4102) *
                        C9243 * C721 +
                    ((C4103 * C725 - C9168 * C730) * C4131 +
                     (C4103 * C825 - C9168 * C828) * C4100 +
                     (C4103 * C1750 - C9168 * C1753) * C4132 +
                     (C4103 * C1867 - C9168 * C1869) * C4101 +
                     (C4103 * C4636 - C9168 * C4637) * C4133 +
                     (C4103 * C4722 - C9168 * C4723) * C4102) *
                        C9243 * C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((C4131 * C123 - C4212 * C80 - C4131 * C208 + C4100 * C243 +
           C4132 * C477 - C4213 * C441 - C4132 * C541 + C4101 * C575 +
           C4133 * C1428 - C4214 * C1373 - C4133 * C1508 + C4102 * C1555) *
              C9168 * C9243 * C721 -
          (C4133 * C4666 - C4214 * C4636 - C4133 * C4722 + C4102 * C4750 +
           C4132 * C1791 - C4213 * C1750 - C4132 * C1867 + C4101 * C1906 +
           C4131 * C761 - C4212 * C725 - C4131 * C825 + C4100 * C859) *
              C9168 * C9243 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[14] += (2 * std::pow(Pi, 2.5) *
                   (((C9243 * C166 - C165 * C80) * C4131 +
                     (C9243 * C287 - C165 * C208) * C4100 +
                     (C1471 - C1472) * C4132 + (C1593 - C1594) * C4101 +
                     (C4422 - C4423) * C4133 + (C4516 - C4517) * C4102) *
                        C9168 * C721 +
                    ((C165 * C725 - C9243 * C793) * C4131 +
                     (C165 * C825 - C9243 * C886) * C4100 +
                     (C165 * C1750 - C9243 * C1829) * C4132 +
                     (C165 * C1867 - C9243 * C1941) * C4101 +
                     (C165 * C4636 - C9243 * C4694) * C4133 +
                     (C165 * C4722 - C9243 * C4777) * C4102) *
                        C9168 * C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C9168 * C84 - C4103 * C80) * C165 +
            (C9168 * C325 - C4103 * C321) * C9243) *
               C4100 +
           ((C4454 - C4455) * C165 + (C4546 - C4547) * C9243) * C4101 +
           ((C4458 - C4459) * C165 + (C4548 - C4549) * C9243) * C4102) *
              C721 +
          (((C4103 * C725 - C9168 * C730) * C165 +
            (C4103 * C915 - C9168 * C918) * C9243) *
               C4100 +
           ((C4103 * C1750 - C9168 * C1753) * C165 +
            (C4103 * C1977 - C9168 * C1979) * C9243) *
               C4101 +
           ((C4103 * C4636 - C9168 * C4637) * C165 +
            (C4103 * C4804 - C9168 * C4805) * C9243) *
               C4102) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eezy[14] += (2 * std::pow(Pi, 2.5) *
                   (((C4100 * C123 - C4131 * C80 + C4101 * C477 - C4132 * C441 +
                      C4102 * C1428 - C4133 * C1373) *
                         C165 +
                     (C4100 * C355 - C4131 * C321 + C4101 * C663 -
                      C4132 * C631 + C4102 * C1670 - C4133 * C1628) *
                         C9243) *
                        C9168 * C721 +
                    ((C4131 * C725 - C4100 * C761 + C4132 * C1750 -
                      C4101 * C1791 + C4133 * C4636 - C4102 * C4666) *
                         C165 +
                     (C4131 * C915 - C4100 * C947 + C4132 * C1977 -
                      C4101 * C2015 + C4133 * C4804 - C4102 * C4832) *
                         C9243) *
                        C9168 * C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (2 * std::pow(Pi, 2.5) *
         (((C165 * C166 - C389 * C80 - C165 * C321 + C9243 * C390) * C4100 +
           C1715 * C4101 + C4610 * C4102) *
              C9168 * C721 -
          ((C165 * C4694 - C389 * C4636 - C165 * C4804 + C9243 * C4859) *
               C4102 +
           (C165 * C1829 - C389 * C1750 - C165 * C1977 + C9243 * C2052) *
               C4101 +
           (C165 * C793 - C389 * C725 - C165 * C915 + C9243 * C978) * C4100) *
              C9168 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4103 * C84 - C4104 * C80 - C4103 * C85 + C9168 * C92) * C2087 +
            (C4103 * C730 - C4104 * C725 - C4103 * C731 + C9168 * C734) *
                C9300) *
               C3125 +
           (C4362 * C2087 +
            (C4103 * C1753 - C4104 * C1750 - C4103 * C1754 + C9168 * C1756) *
                C9300) *
               C9298) *
              C9307 * C9308 * C72 -
          (((C4103 * C1751 - C4104 * C1749 - C4103 * C1752 + C9168 * C1755) *
                C9300 +
            (C4103 * C444 - C4104 * C440 - C4103 * C445 + C9168 * C449) *
                C2087) *
               C9298 +
           ((C4103 * C728 - C4104 * C724 - C4103 * C729 + C9168 * C733) *
                C9300 +
            (C4103 * C86 - C4104 * C81 - C4103 * C87 + C9168 * C93) * C2087) *
               C3125) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3125 * C123 - C3165 * C80 + C9298 * C477 - C3166 * C441) * C4103 +
            (C3125 * C127 - C3165 * C85 + C9298 * C480 - C3166 * C447) *
                C9168) *
               C2087 +
           ((C3125 * C761 - C3165 * C725 + C9298 * C1791 - C3166 * C1750) *
                C4103 +
            (C3125 * C764 - C3165 * C731 + C9298 * C1793 - C3166 * C1754) *
                C9168) *
               C9300) *
              C9307 * C9308 * C72 +
          (((C3169 - C3168 + C3171 - C3170) * C4103 +
            (C3173 - C3172 + C3175 - C3174) * C9168) *
               C2087 +
           ((C3165 * C724 - C3125 * C762 + C3166 * C1749 - C9298 * C1792) *
                C4103 +
            (C3165 * C729 - C3125 * C765 + C3166 * C1752 - C9298 * C1794) *
                C9168) *
               C9300) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2087 * C166 - C2161 * C80 + C9300 * C793 - C2162 * C725) * C4103 +
            (C2087 * C170 - C2161 * C85 + C9300 * C796 - C2162 * C731) *
                C9168) *
               C3125 +
           ((C2087 * C509 - C2161 * C441 + C9300 * C1829 - C2162 * C1750) *
                C4103 +
            (C2087 * C512 - C2161 * C447 + C9300 * C1831 - C2162 * C1754) *
                C9168) *
               C9298) *
              C9307 * C9308 * C72 +
          (((C2165 - C2164 + C2167 - C2166) * C4103 +
            (C2169 - C2168 + C2171 - C2170) * C9168) *
               C3125 +
           ((C2161 * C440 - C2087 * C510 + C2162 * C1749 - C9300 * C1830) *
                C4103 +
            (C2161 * C445 - C2087 * C513 + C2162 * C1752 - C9300 * C1832) *
                C9168) *
               C9298) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] += (2 * std::pow(Pi, 2.5) *
                   ((((C9168 * C84 - C4103 * C80) * C3165 +
                      (C9168 * C212 - C4103 * C208) * C3125 +
                      (C4454 - C4455) * C3166 + (C4456 - C4457) * C9298) *
                         C2087 +
                     ((C9168 * C730 - C4103 * C725) * C3165 +
                      (C9168 * C828 - C4103 * C825) * C3125 +
                      (C9168 * C1753 - C4103 * C1750) * C3166 +
                      (C9168 * C1869 - C4103 * C1867) * C9298) *
                         C9300) *
                        C9307 * C9308 * C72 +
                    (((C4103 * C81 - C9168 * C86) * C3165 +
                      (C4103 * C209 - C9168 * C213) * C3125 +
                      (C4103 * C440 - C9168 * C444) * C3166 +
                      (C4103 * C542 - C9168 * C545) * C9298) *
                         C2087 +
                     ((C4103 * C724 - C9168 * C728) * C3165 +
                      (C4103 * C826 - C9168 * C829) * C3125 +
                      (C4103 * C1749 - C9168 * C1751) * C3166 +
                      (C4103 * C1868 - C9168 * C1870) * C9298) *
                         C9300) *
                        C9307 * C9308 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[15] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3165 * C123 - C3277 * C80 - C3165 * C208 + C3125 * C243 +
            C3166 * C477 - C3278 * C441 - C3166 * C541 + C9298 * C575) *
               C9168 * C2087 +
           (C3165 * C761 - C3277 * C725 - C3165 * C825 + C3125 * C859 +
            C3166 * C1791 - C3278 * C1750 - C3166 * C1867 + C9298 * C1906) *
               C9168 * C9300) *
              C9307 * C9308 * C72 -
          ((C3166 * C1792 - C3278 * C1749 - C3166 * C1868 + C9298 * C1905 +
            C3165 * C762 - C3277 * C724 - C3165 * C826 + C3125 * C858) *
               C9168 * C9300 +
           (C3293 + C3292) * C9168 * C2087) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[15] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2087 * C166 - C2161 * C80 + C9300 * C793 - C2162 * C725) * C3165 +
           (C2087 * C287 - C2161 * C208 + C9300 * C886 - C2162 * C825) * C3125 +
           (C2087 * C509 - C2161 * C441 + C9300 * C1829 - C2162 * C1750) *
               C3166 +
           (C2087 * C602 - C2161 * C541 + C9300 * C1941 - C2162 * C1867) *
               C9298) *
              C9168 * C9307 * C9308 * C72 +
          ((C2165 - C2164 + C2167 - C2166) * C3165 +
           (C2282 - C2281 + C2284 - C2283) * C3125 +
           (C2161 * C440 - C2087 * C510 + C2162 * C1749 - C9300 * C1830) *
               C3166 +
           (C2161 * C542 - C2087 * C603 + C2162 * C1868 - C9300 * C1942) *
               C9298) *
              C9168 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[15] += (2 * std::pow(Pi, 2.5) *
                   ((((C9168 * C84 - C4103 * C80) * C2161 +
                      (C9168 * C325 - C4103 * C321) * C2087 +
                      (C9168 * C730 - C4103 * C725) * C2162 +
                      (C9168 * C918 - C4103 * C915) * C9300) *
                         C3125 +
                     ((C4454 - C4455) * C2161 + (C4546 - C4547) * C2087 +
                      (C9168 * C1753 - C4103 * C1750) * C2162 +
                      (C9168 * C1979 - C4103 * C1977) * C9300) *
                         C9298) *
                        C9307 * C9308 * C72 +
                    (((C4103 * C81 - C9168 * C86) * C2161 +
                      (C4103 * C322 - C9168 * C326) * C2087 +
                      (C4103 * C724 - C9168 * C728) * C2162 +
                      (C4103 * C916 - C9168 * C919) * C9300) *
                         C3125 +
                     ((C4103 * C440 - C9168 * C444) * C2161 +
                      (C4103 * C632 - C9168 * C635) * C2087 +
                      (C4103 * C1749 - C9168 * C1751) * C2162 +
                      (C4103 * C1978 - C9168 * C1980) * C9300) *
                         C9298) *
                        C9307 * C9308 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3125 * C123 - C3165 * C80 + C9298 * C477 - C3166 * C441) * C2161 +
           (C3125 * C355 - C3165 * C321 + C9298 * C663 - C3166 * C631) * C2087 +
           (C3125 * C761 - C3165 * C725 + C9298 * C1791 - C3166 * C1750) *
               C2162 +
           (C3125 * C947 - C3165 * C915 + C9298 * C2015 - C3166 * C1977) *
               C9300) *
              C9168 * C9307 * C9308 * C72 +
          ((C3169 - C3168 + C3171 - C3170) * C2161 +
           (C3397 - C3396 + C3399 - C3398) * C2087 +
           (C3165 * C724 - C3125 * C762 + C3166 * C1749 - C9298 * C1792) *
               C2162 +
           (C3165 * C916 - C3125 * C948 + C3166 * C1978 - C9298 * C2016) *
               C9300) *
              C9168 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2161 * C166 - C2388 * C80 - C2161 * C321 + C2087 * C390 +
            C2162 * C793 - C2389 * C725 - C2162 * C915 + C9300 * C978) *
               C3125 +
           (C2161 * C509 - C2388 * C441 - C2161 * C631 + C2087 * C694 +
            C2162 * C1829 - C2389 * C1750 - C2162 * C1977 + C9300 * C2052) *
               C9298) *
              C9168 * C9307 * C9308 * C72 -
          ((C2162 * C1830 - C2389 * C1749 - C2162 * C1978 + C9300 * C2051 +
            C2161 * C510 - C2388 * C440 - C2161 * C632 + C2087 * C693) *
               C9298 +
           (C2404 + C2403) * C3125) *
              C9168 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4103 * C84 - C4104 * C80 - C4103 * C85 + C9168 * C92) * C2087 +
            (C4103 * C730 - C4104 * C725 - C4103 * C731 + C9168 * C734) *
                C9300) *
               C3125 +
           (C5201 + C5209) * C9298) *
              C9307 * C436 -
          (((C4103 * C4637 - C4104 * C4636 - C4103 * C4638 + C9168 * C4639) *
                C9300 +
            C4363 * C2087) *
               C9298 +
           (C5209 + C5201) * C3125) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3125 * C123 - C3165 * C80 + C9298 * C477 - C3166 * C441) * C4103 +
            (C3125 * C127 - C3165 * C85 + C9298 * C480 - C3166 * C447) *
                C9168) *
               C2087 +
           ((C3125 * C761 - C3165 * C725 + C9298 * C1791 - C3166 * C1750) *
                C4103 +
            (C3125 * C764 - C3165 * C731 + C9298 * C1793 - C3166 * C1754) *
                C9168) *
               C9300) *
              C9307 * C436 +
          (((C3165 * C441 - C3125 * C477 + C3166 * C1373 - C9298 * C1428) *
                C4103 +
            (C3165 * C447 - C3125 * C480 + C3166 * C1377 - C9298 * C1430) *
                C9168) *
               C2087 +
           ((C3165 * C1750 - C3125 * C1791 + C3166 * C4636 - C9298 * C4666) *
                C4103 +
            (C3165 * C1754 - C3125 * C1793 + C3166 * C4638 - C9298 * C4667) *
                C9168) *
               C9300) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2087 * C166 - C2161 * C80 + C9300 * C793 - C2162 * C725) * C4103 +
            (C2087 * C170 - C2161 * C85 + C9300 * C796 - C2162 * C731) *
                C9168) *
               C3125 +
           ((C5278 - C5279 + C5280 - C5281) * C4103 +
            (C5282 - C5283 + C5284 - C5285) * C9168) *
               C9298) *
              C9307 * C436 +
          (((C5279 - C5278 + C5281 - C5280) * C4103 +
            (C5283 - C5282 + C5285 - C5284) * C9168) *
               C3125 +
           ((C2161 * C1373 - C2087 * C1466 + C2162 * C4636 - C9300 * C4694) *
                C4103 +
            (C2161 * C1377 - C2087 * C1468 + C2162 * C4638 - C9300 * C4695) *
                C9168) *
               C9298) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyx[16] += (2 * std::pow(Pi, 2.5) *
                   ((((C9168 * C84 - C4103 * C80) * C3165 +
                      (C9168 * C212 - C4103 * C208) * C3125 +
                      (C4454 - C4455) * C3166 + (C4456 - C4457) * C9298) *
                         C2087 +
                     ((C9168 * C730 - C4103 * C725) * C3165 +
                      (C9168 * C828 - C4103 * C825) * C3125 +
                      (C5320 - C5321) * C3166 + (C5322 - C5323) * C9298) *
                         C9300) *
                        C9307 * C436 +
                    (((C4455 - C4454) * C3165 + (C4457 - C4456) * C3125 +
                      (C4459 - C4458) * C3166 + (C4461 - C4460) * C9298) *
                         C2087 +
                     ((C5321 - C5320) * C3165 + (C5323 - C5322) * C3125 +
                      (C4103 * C4636 - C9168 * C4637) * C3166 +
                      (C4103 * C4722 - C9168 * C4723) * C9298) *
                         C9300) *
                        C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3165 * C123 - C3277 * C80 - C3165 * C208 + C3125 * C243 +
            C3166 * C477 - C3278 * C441 - C3166 * C541 + C9298 * C575) *
               C9168 * C2087 +
           (C3165 * C761 - C3277 * C725 - C3165 * C825 + C3125 * C859 +
            C3166 * C1791 - C3278 * C1750 - C3166 * C1867 + C9298 * C1906) *
               C9168 * C9300) *
              C9307 * C436 -
          ((C3166 * C4666 - C3278 * C4636 - C3166 * C4722 + C9298 * C4750 +
            C3165 * C1791 - C3277 * C1750 - C3165 * C1867 + C3125 * C1906) *
               C9168 * C9300 +
           (C3166 * C1428 - C3278 * C1373 - C3166 * C1508 + C9298 * C1555 +
            C3165 * C477 - C3277 * C441 - C3165 * C541 + C3125 * C575) *
               C9168 * C2087) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2087 * C166 - C2161 * C80 + C9300 * C793 - C2162 * C725) * C3165 +
           (C2087 * C287 - C2161 * C208 + C9300 * C886 - C2162 * C825) * C3125 +
           (C5278 - C5279 + C5280 - C5281) * C3166 +
           (C5392 - C5393 + C5394 - C5395) * C9298) *
              C9168 * C9307 * C436 +
          ((C5279 - C5278 + C5281 - C5280) * C3165 +
           (C5393 - C5392 + C5395 - C5394) * C3125 +
           (C2161 * C1373 - C2087 * C1466 + C2162 * C4636 - C9300 * C4694) *
               C3166 +
           (C2161 * C1508 - C2087 * C1590 + C2162 * C4722 - C9300 * C4777) *
               C9298) *
              C9168 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezx[16] += (2 * std::pow(Pi, 2.5) *
                   ((((C9168 * C84 - C4103 * C80) * C2161 +
                      (C9168 * C325 - C4103 * C321) * C2087 +
                      (C9168 * C730 - C4103 * C725) * C2162 +
                      (C9168 * C918 - C4103 * C915) * C9300) *
                         C3125 +
                     ((C4454 - C4455) * C2161 + (C4546 - C4547) * C2087 +
                      (C5320 - C5321) * C2162 + (C5430 - C5431) * C9300) *
                         C9298) *
                        C9307 * C436 +
                    (((C4455 - C4454) * C2161 + (C4547 - C4546) * C2087 +
                      (C5321 - C5320) * C2162 + (C5431 - C5430) * C9300) *
                         C3125 +
                     ((C4459 - C4458) * C2161 + (C4549 - C4548) * C2087 +
                      (C4103 * C4636 - C9168 * C4637) * C2162 +
                      (C4103 * C4804 - C9168 * C4805) * C9300) *
                         C9298) *
                        C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3125 * C123 - C3165 * C80 + C9298 * C477 - C3166 * C441) * C2161 +
           (C3125 * C355 - C3165 * C321 + C9298 * C663 - C3166 * C631) * C2087 +
           (C3125 * C761 - C3165 * C725 + C9298 * C1791 - C3166 * C1750) *
               C2162 +
           (C3125 * C947 - C3165 * C915 + C9298 * C2015 - C3166 * C1977) *
               C9300) *
              C9168 * C9307 * C436 +
          ((C3165 * C441 - C3125 * C477 + C3166 * C1373 - C9298 * C1428) *
               C2161 +
           (C3165 * C631 - C3125 * C663 + C3166 * C1628 - C9298 * C1670) *
               C2087 +
           (C3165 * C1750 - C3125 * C1791 + C3166 * C4636 - C9298 * C4666) *
               C2162 +
           (C3165 * C1977 - C3125 * C2015 + C3166 * C4804 - C9298 * C4832) *
               C9300) *
              C9168 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2161 * C166 - C2388 * C80 - C2161 * C321 + C2087 * C390 +
            C2162 * C793 - C2389 * C725 - C2162 * C915 + C9300 * C978) *
               C3125 +
           (C5512 + C5513) * C9298) *
              C9168 * C9307 * C436 -
          ((C2162 * C4694 - C2389 * C4636 - C2162 * C4804 + C9300 * C4859 +
            C2161 * C1466 - C2388 * C1373 - C2161 * C1628 + C2087 * C1707) *
               C9298 +
           (C5513 + C5512) * C3125) *
              C9168 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4103 * C84 - C4104 * C80 - C4103 * C85 + C9168 * C92) * C2087 +
            C5558 * C9300) *
               C3125 +
           (C5201 + C5209) * C9298) *
              C721 -
          (((C4103 * C5548 - C4104 * C5547 - C4103 * C5549 + C9168 * C5550) *
                C9300 +
            C5208 * C2087) *
               C9298 +
           ((C4103 * C2748 - C4104 * C2745 - C4103 * C2749 + C9168 * C2751) *
                C9300 +
            C5558 * C2087) *
               C3125) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3125 * C123 - C3165 * C80 + C9298 * C477 - C3166 * C441) * C4103 +
            (C3125 * C127 - C3165 * C85 + C9298 * C480 - C3166 * C447) *
                C9168) *
               C2087 +
           ((C5595 - C5596 + C5597 - C5598) * C4103 +
            (C5599 - C5600 + C5601 - C5602) * C9168) *
               C9300) *
              C721 +
          (((C5596 - C5595 + C5598 - C5597) * C4103 +
            (C5600 - C5599 + C5602 - C5601) * C9168) *
               C2087 +
           ((C3165 * C2745 - C3125 * C2800 + C3166 * C5547 - C9298 * C5592) *
                C4103 +
            (C3165 * C2749 - C3125 * C2802 + C3166 * C5549 - C9298 * C5593) *
                C9168) *
               C9300) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2087 * C166 - C2161 * C80 + C9300 * C793 - C2162 * C725) * C4103 +
            (C2087 * C170 - C2161 * C85 + C9300 * C796 - C2162 * C731) *
                C9168) *
               C3125 +
           ((C5278 - C5279 + C5280 - C5281) * C4103 +
            (C5282 - C5283 + C5284 - C5285) * C9168) *
               C9298) *
              C721 +
          (((C2161 * C725 - C2087 * C793 + C2162 * C2745 - C9300 * C2842) *
                C4103 +
            (C2161 * C731 - C2087 * C796 + C2162 * C2749 - C9300 * C2844) *
                C9168) *
               C3125 +
           ((C2161 * C1750 - C2087 * C1829 + C2162 * C5547 - C9300 * C5636) *
                C4103 +
            (C2161 * C1754 - C2087 * C1831 + C2162 * C5549 - C9300 * C5637) *
                C9168) *
               C9298) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyx[17] += (2 * std::pow(Pi, 2.5) *
                   ((((C9168 * C84 - C4103 * C80) * C3165 +
                      (C9168 * C212 - C4103 * C208) * C3125 +
                      (C4454 - C4455) * C3166 + (C4456 - C4457) * C9298) *
                         C2087 +
                     ((C5675 - C5676) * C3165 + (C5677 - C5678) * C3125 +
                      (C5320 - C5321) * C3166 + (C5322 - C5323) * C9298) *
                         C9300) *
                        C721 +
                    (((C5676 - C5675) * C3165 + (C5678 - C5677) * C3125 +
                      (C5321 - C5320) * C3166 + (C5323 - C5322) * C9298) *
                         C2087 +
                     ((C4103 * C2745 - C9168 * C2748) * C3165 +
                      (C4103 * C2880 - C9168 * C2882) * C3125 +
                      (C4103 * C5547 - C9168 * C5548) * C3166 +
                      (C4103 * C5672 - C9168 * C5673) * C9298) *
                         C9300) *
                        C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3165 * C123 - C3277 * C80 - C3165 * C208 + C3125 * C243 +
            C3166 * C477 - C3278 * C441 - C3166 * C541 + C9298 * C575) *
               C9168 * C2087 +
           (C5726 + C5727) * C9168 * C9300) *
              C721 -
          ((C3166 * C5592 - C3278 * C5547 - C3166 * C5672 + C9298 * C5712 +
            C3165 * C2800 - C3277 * C2745 - C3165 * C2880 + C3125 * C2927) *
               C9168 * C9300 +
           (C5727 + C5726) * C9168 * C2087) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2087 * C166 - C2161 * C80 + C9300 * C793 - C2162 * C725) * C3165 +
           (C2087 * C287 - C2161 * C208 + C9300 * C886 - C2162 * C825) * C3125 +
           (C5278 - C5279 + C5280 - C5281) * C3166 +
           (C5392 - C5393 + C5394 - C5395) * C9298) *
              C9168 * C721 +
          ((C2161 * C725 - C2087 * C793 + C2162 * C2745 - C9300 * C2842) *
               C3165 +
           (C2161 * C825 - C2087 * C886 + C2162 * C2880 - C9300 * C2971) *
               C3125 +
           (C2161 * C1750 - C2087 * C1829 + C2162 * C5547 - C9300 * C5636) *
               C3166 +
           (C2161 * C1867 - C2087 * C1941 + C2162 * C5672 - C9300 * C5761) *
               C9298) *
              C9168 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eezx[17] += (2 * std::pow(Pi, 2.5) *
                   ((((C9168 * C84 - C4103 * C80) * C2161 +
                      (C9168 * C325 - C4103 * C321) * C2087 +
                      (C5675 - C5676) * C2162 + (C5799 - C5800) * C9300) *
                         C3125 +
                     ((C4454 - C4455) * C2161 + (C4546 - C4547) * C2087 +
                      (C5320 - C5321) * C2162 + (C5430 - C5431) * C9300) *
                         C9298) *
                        C721 +
                    (((C5676 - C5675) * C2161 + (C5800 - C5799) * C2087 +
                      (C4103 * C2745 - C9168 * C2748) * C2162 +
                      (C4103 * C3007 - C9168 * C3009) * C9300) *
                         C3125 +
                     ((C5321 - C5320) * C2161 + (C5431 - C5430) * C2087 +
                      (C4103 * C5547 - C9168 * C5548) * C2162 +
                      (C4103 * C5796 - C9168 * C5797) * C9300) *
                         C9298) *
                        C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezy[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3125 * C123 - C3165 * C80 + C9298 * C477 - C3166 * C441) * C2161 +
           (C3125 * C355 - C3165 * C321 + C9298 * C663 - C3166 * C631) * C2087 +
           (C5595 - C5596 + C5597 - C5598) * C2162 +
           (C5836 - C5837 + C5838 - C5839) * C9300) *
              C9168 * C721 +
          ((C5596 - C5595 + C5598 - C5597) * C2161 +
           (C5837 - C5836 + C5839 - C5838) * C2087 +
           (C3165 * C2745 - C3125 * C2800 + C3166 * C5547 - C9298 * C5592) *
               C2162 +
           (C3165 * C3007 - C3125 * C3049 + C3166 * C5796 - C9298 * C5834) *
               C9300) *
              C9168 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2161 * C166 - C2388 * C80 - C2161 * C321 + C2087 * C390 +
            C2162 * C793 - C2389 * C725 - C2162 * C915 + C9300 * C978) *
               C3125 +
           (C5512 + C5513) * C9298) *
              C9168 * C721 -
          ((C2162 * C5636 - C2389 * C5547 - C2162 * C5796 + C9300 * C5873 +
            C2161 * C1829 - C2388 * C1750 - C2161 * C1977 + C2087 * C2052) *
               C9298 +
           (C2162 * C2842 - C2389 * C2745 - C2162 * C3007 + C9300 * C3088 +
            C2161 * C793 - C2388 * C725 - C2161 * C915 + C2087 * C978) *
               C3125) *
              C9168 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3127 * C84 - C3128 * C80 - C3127 * C85 + C3123 * C92 +
            C3129 * C86 - C3130 * C81 - C3129 * C87 + C9292 * C93) *
               C5908 +
           (C3127 * C730 - C3128 * C725 - C3127 * C731 + C3123 * C734 +
            C3129 * C728 - C3130 * C724 - C3129 * C729 + C9292 * C733) *
               C9300) *
              C9228 * C9307 * C9308 * C72 -
          ((C3129 * C726 - C3130 * C723 - C3129 * C727 + C9292 * C732 +
            C3127 * C728 - C3128 * C724 - C3127 * C729 + C3123 * C733) *
               C9300 +
           (C3129 * C88 - C3130 * C82 - C3129 * C89 + C9292 * C94 +
            C3127 * C86 - C3128 * C81 - C3127 * C87 + C3123 * C93) *
               C5908) *
              C9228 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[18] += (2 * std::pow(Pi, 2.5) *
                   ((((C9228 * C123 - C122 * C80) * C3127 +
                      (C9228 * C127 - C122 * C85) * C3123 +
                      (C132 - C133) * C3129 + (C134 - C135) * C9292) *
                         C5908 +
                     ((C2805 - C2806) * C3127 + (C2807 - C2808) * C3123 +
                      (C2124 - C2125) * C3129 + (C2126 - C2127) * C9292) *
                         C9300) *
                        C9307 * C9308 * C72 +
                    (((C133 - C132) * C3127 + (C135 - C134) * C3123 +
                      (C137 - C136) * C3129 + (C139 - C138) * C9292) *
                         C5908 +
                     ((C2125 - C2124) * C3127 + (C2127 - C2126) * C3123 +
                      (C122 * C723 - C9228 * C763) * C3129 +
                      (C122 * C727 - C9228 * C766) * C9292) *
                         C9300) *
                        C9307 * C9308 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5908 * C166 - C5978 * C80 + C9300 * C793 - C5979 * C725) * C3127 +
           (C5908 * C170 - C5978 * C85 + C9300 * C796 - C5979 * C731) * C3123 +
           (C5981 - C5982 + C5983 - C5984) * C3129 +
           (C5985 - C5986 + C5987 - C5988) * C9292) *
              C9228 * C9307 * C9308 * C72 +
          ((C5982 - C5981 + C5984 - C5983) * C3127 +
           (C5986 - C5985 + C5988 - C5987) * C3123 +
           (C5978 * C82 - C5908 * C168 + C5979 * C723 - C9300 * C795) * C3129 +
           (C5978 * C89 - C5908 * C172 + C5979 * C727 - C9300 * C798) * C9292) *
              C9228 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3123 * C84 - C3127 * C80 + C9292 * C86 - C3129 * C81) * C122 +
            (C3123 * C212 - C3127 * C208 + C9292 * C213 - C3129 * C209) *
                C9228) *
               C5908 +
           ((C3123 * C730 - C3127 * C725 + C9292 * C728 - C3129 * C724) * C122 +
            (C3123 * C828 - C3127 * C825 + C9292 * C829 - C3129 * C826) *
                C9228) *
               C9300) *
              C9307 * C9308 * C72 +
          (((C3127 * C81 - C3123 * C86 + C3129 * C82 - C9292 * C88) * C122 +
            (C3127 * C209 - C3123 * C213 + C3129 * C210 - C9292 * C214) *
                C9228) *
               C5908 +
           ((C3127 * C724 - C3123 * C728 + C3129 * C723 - C9292 * C726) * C122 +
            (C3127 * C826 - C3123 * C829 + C3129 * C827 - C9292 * C830) *
                C9228) *
               C9300) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[18] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C123 - C242 * C80 - C122 * C208 + C9228 * C243) * C3123 +
            C260 * C9292) *
               C5908 +
           (C2936 * C3123 + C2246 * C9292) * C9300) *
              C9307 * C9308 * C72 -
          (((C122 * C763 - C242 * C723 - C122 * C827 + C9228 * C857) * C9292 +
            C2246 * C3123) *
               C9300 +
           (C261 * C9292 + C260 * C3123) * C5908) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5908 * C166 - C5978 * C80 + C9300 * C793 - C5979 * C725) * C122 +
            (C5908 * C287 - C5978 * C208 + C9300 * C886 - C5979 * C825) *
                C9228) *
               C3123 +
           ((C5981 - C5982 + C5983 - C5984) * C122 +
            (C6091 - C6092 + C6093 - C6094) * C9228) *
               C9292) *
              C9307 * C9308 * C72 +
          (((C5982 - C5981 + C5984 - C5983) * C122 +
            (C6092 - C6091 + C6094 - C6093) * C9228) *
               C3123 +
           ((C5978 * C82 - C5908 * C168 + C5979 * C723 - C9300 * C795) * C122 +
            (C5978 * C210 - C5908 * C289 + C5979 * C827 - C9300 * C888) *
                C9228) *
               C9292) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3123 * C84 - C3127 * C80 + C9292 * C86 - C3129 * C81) * C5978 +
           (C3123 * C325 - C3127 * C321 + C9292 * C326 - C3129 * C322) * C5908 +
           (C3123 * C730 - C3127 * C725 + C9292 * C728 - C3129 * C724) * C5979 +
           (C3123 * C918 - C3127 * C915 + C9292 * C919 - C3129 * C916) *
               C9300) *
              C9228 * C9307 * C9308 * C72 +
          ((C3127 * C81 - C3123 * C86 + C3129 * C82 - C9292 * C88) * C5978 +
           (C3127 * C322 - C3123 * C326 + C3129 * C323 - C9292 * C327) * C5908 +
           (C3127 * C724 - C3123 * C728 + C3129 * C723 - C9292 * C726) * C5979 +
           (C3127 * C916 - C3123 * C919 + C3129 * C917 - C9292 * C920) *
               C9300) *
              C9228 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[18] += (2 * std::pow(Pi, 2.5) *
                   ((((C9228 * C123 - C122 * C80) * C5978 +
                      (C9228 * C355 - C122 * C321) * C5908 +
                      (C2805 - C2806) * C5979 + (C3052 - C3053) * C9300) *
                         C3123 +
                     ((C132 - C133) * C5978 + (C360 - C361) * C5908 +
                      (C2124 - C2125) * C5979 + (C2353 - C2354) * C9300) *
                         C9292) *
                        C9307 * C9308 * C72 +
                    (((C133 - C132) * C5978 + (C361 - C360) * C5908 +
                      (C2125 - C2124) * C5979 + (C2354 - C2353) * C9300) *
                         C3123 +
                     ((C137 - C136) * C5978 + (C363 - C362) * C5908 +
                      (C122 * C723 - C9228 * C763) * C5979 +
                      (C122 * C917 - C9228 * C949) * C9300) *
                         C9292) *
                        C9307 * C9308 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5978 * C166 - C6196 * C80 - C5978 * C321 + C5908 * C390 +
            C5979 * C793 - C6197 * C725 - C5979 * C915 + C9300 * C978) *
               C9228 * C3123 +
           (C6211 + C6212) * C9228 * C9292) *
              C9307 * C9308 * C72 -
          ((C5979 * C795 - C6197 * C723 - C5979 * C917 + C9300 * C976 +
            C5978 * C168 - C6196 * C82 - C5978 * C323 + C5908 * C392) *
               C9228 * C9292 +
           (C6212 + C6211) * C9228 * C3123) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3127 * C84 - C3128 * C80 - C3127 * C85 + C3123 * C92 +
            C3129 * C86 - C3130 * C81 - C3129 * C87 + C9292 * C93) *
               C5908 +
           (C3127 * C730 - C3128 * C725 - C3127 * C731 + C3123 * C734 +
            C3129 * C728 - C3130 * C724 - C3129 * C729 + C9292 * C733) *
               C9300) *
              C9228 * C9307 * C436 -
          ((C3129 * C1751 - C3130 * C1749 - C3129 * C1752 + C9292 * C1755 +
            C3127 * C1753 - C3128 * C1750 - C3127 * C1754 + C3123 * C1756) *
               C9300 +
           (C3483 + C3482) * C5908) *
              C9228 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[19] += (2 * std::pow(Pi, 2.5) *
                   ((((C9228 * C123 - C122 * C80) * C3127 +
                      (C9228 * C127 - C122 * C85) * C3123 +
                      (C132 - C133) * C3129 + (C134 - C135) * C9292) *
                         C5908 +
                     ((C2805 - C2806) * C3127 + (C2807 - C2808) * C3123 +
                      (C2124 - C2125) * C3129 + (C2126 - C2127) * C9292) *
                         C9300) *
                        C9307 * C436 +
                    (((C122 * C441 - C9228 * C477) * C3127 +
                      (C122 * C447 - C9228 * C480) * C3123 +
                      (C122 * C440 - C9228 * C478) * C3129 +
                      (C122 * C445 - C9228 * C481) * C9292) *
                         C5908 +
                     ((C122 * C1750 - C9228 * C1791) * C3127 +
                      (C122 * C1754 - C9228 * C1793) * C3123 +
                      (C122 * C1749 - C9228 * C1792) * C3129 +
                      (C122 * C1752 - C9228 * C1794) * C9292) *
                         C9300) *
                        C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5908 * C166 - C5978 * C80 + C9300 * C793 - C5979 * C725) * C3127 +
           (C5908 * C170 - C5978 * C85 + C9300 * C796 - C5979 * C731) * C3123 +
           (C5981 - C5982 + C5983 - C5984) * C3129 +
           (C5985 - C5986 + C5987 - C5988) * C9292) *
              C9228 * C9307 * C436 +
          ((C5978 * C441 - C5908 * C509 + C5979 * C1750 - C9300 * C1829) *
               C3127 +
           (C5978 * C447 - C5908 * C512 + C5979 * C1754 - C9300 * C1831) *
               C3123 +
           (C5978 * C440 - C5908 * C510 + C5979 * C1749 - C9300 * C1830) *
               C3129 +
           (C5978 * C445 - C5908 * C513 + C5979 * C1752 - C9300 * C1832) *
               C9292) *
              C9228 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3123 * C84 - C3127 * C80 + C9292 * C86 - C3129 * C81) * C122 +
            (C3123 * C212 - C3127 * C208 + C9292 * C213 - C3129 * C209) *
                C9228) *
               C5908 +
           ((C3123 * C730 - C3127 * C725 + C9292 * C728 - C3129 * C724) * C122 +
            (C3123 * C828 - C3127 * C825 + C9292 * C829 - C3129 * C826) *
                C9228) *
               C9300) *
              C9307 * C436 +
          (((C3587 - C3586 + C3589 - C3588) * C122 +
            (C3591 - C3590 + C3593 - C3592) * C9228) *
               C5908 +
           ((C3127 * C1750 - C3123 * C1753 + C3129 * C1749 - C9292 * C1751) *
                C122 +
            (C3127 * C1867 - C3123 * C1869 + C3129 * C1868 - C9292 * C1870) *
                C9228) *
               C9300) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C123 - C242 * C80 - C122 * C208 + C9228 * C243) * C3123 +
            C260 * C9292) *
               C5908 +
           (C2936 * C3123 + C2246 * C9292) * C9300) *
              C9307 * C436 -
          (((C122 * C1792 - C242 * C1749 - C122 * C1868 + C9228 * C1905) *
                C9292 +
            (C122 * C1791 - C242 * C1750 - C122 * C1867 + C9228 * C1906) *
                C3123) *
               C9300 +
           ((C122 * C478 - C242 * C440 - C122 * C542 + C9228 * C574) * C9292 +
            (C122 * C477 - C242 * C441 - C122 * C541 + C9228 * C575) * C3123) *
               C5908) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5908 * C166 - C5978 * C80 + C9300 * C793 - C5979 * C725) * C122 +
            (C5908 * C287 - C5978 * C208 + C9300 * C886 - C5979 * C825) *
                C9228) *
               C3123 +
           ((C5981 - C5982 + C5983 - C5984) * C122 +
            (C6091 - C6092 + C6093 - C6094) * C9228) *
               C9292) *
              C9307 * C436 +
          (((C5978 * C441 - C5908 * C509 + C5979 * C1750 - C9300 * C1829) *
                C122 +
            (C5978 * C541 - C5908 * C602 + C5979 * C1867 - C9300 * C1941) *
                C9228) *
               C3123 +
           ((C5978 * C440 - C5908 * C510 + C5979 * C1749 - C9300 * C1830) *
                C122 +
            (C5978 * C542 - C5908 * C603 + C5979 * C1868 - C9300 * C1942) *
                C9228) *
               C9292) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3123 * C84 - C3127 * C80 + C9292 * C86 - C3129 * C81) * C5978 +
           (C3123 * C325 - C3127 * C321 + C9292 * C326 - C3129 * C322) * C5908 +
           (C3123 * C730 - C3127 * C725 + C9292 * C728 - C3129 * C724) * C5979 +
           (C3123 * C918 - C3127 * C915 + C9292 * C919 - C3129 * C916) *
               C9300) *
              C9228 * C9307 * C436 +
          ((C3587 - C3586 + C3589 - C3588) * C5978 +
           (C3697 - C3696 + C3699 - C3698) * C5908 +
           (C3127 * C1750 - C3123 * C1753 + C3129 * C1749 - C9292 * C1751) *
               C5979 +
           (C3127 * C1977 - C3123 * C1979 + C3129 * C1978 - C9292 * C1980) *
               C9300) *
              C9228 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezy[19] += (2 * std::pow(Pi, 2.5) *
                   ((((C9228 * C123 - C122 * C80) * C5978 +
                      (C9228 * C355 - C122 * C321) * C5908 +
                      (C2805 - C2806) * C5979 + (C3052 - C3053) * C9300) *
                         C3123 +
                     ((C132 - C133) * C5978 + (C360 - C361) * C5908 +
                      (C2124 - C2125) * C5979 + (C2353 - C2354) * C9300) *
                         C9292) *
                        C9307 * C436 +
                    (((C122 * C441 - C9228 * C477) * C5978 +
                      (C122 * C631 - C9228 * C663) * C5908 +
                      (C122 * C1750 - C9228 * C1791) * C5979 +
                      (C122 * C1977 - C9228 * C2015) * C9300) *
                         C3123 +
                     ((C122 * C440 - C9228 * C478) * C5978 +
                      (C122 * C632 - C9228 * C664) * C5908 +
                      (C122 * C1749 - C9228 * C1792) * C5979 +
                      (C122 * C1978 - C9228 * C2016) * C9300) *
                         C9292) *
                        C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5978 * C166 - C6196 * C80 - C5978 * C321 + C5908 * C390 +
            C5979 * C793 - C6197 * C725 - C5979 * C915 + C9300 * C978) *
               C9228 * C3123 +
           (C6211 + C6212) * C9228 * C9292) *
              C9307 * C436 -
          ((C5979 * C1830 - C6197 * C1749 - C5979 * C1978 + C9300 * C2051 +
            C5978 * C510 - C6196 * C440 - C5978 * C632 + C5908 * C693) *
               C9228 * C9292 +
           (C5979 * C1829 - C6197 * C1750 - C5979 * C1977 + C9300 * C2052 +
            C5978 * C509 - C6196 * C441 - C5978 * C631 + C5908 * C694) *
               C9228 * C3123) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3127 * C84 - C3128 * C80 - C3127 * C85 + C3123 * C92 +
            C3129 * C86 - C3130 * C81 - C3129 * C87 + C9292 * C93) *
               C5908 +
           (C6565 + C6566) * C9300) *
              C9228 * C721 -
          ((C3129 * C2746 - C3130 * C2744 - C3129 * C2747 + C9292 * C2750 +
            C3127 * C2748 - C3128 * C2745 - C3127 * C2749 + C3123 * C2751) *
               C9300 +
           (C6566 + C6565) * C5908) *
              C9228 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[20] += (2 * std::pow(Pi, 2.5) *
                   ((((C9228 * C123 - C122 * C80) * C3127 +
                      (C9228 * C127 - C122 * C85) * C3123 +
                      (C132 - C133) * C3129 + (C134 - C135) * C9292) *
                         C5908 +
                     ((C2805 - C2806) * C3127 + (C2807 - C2808) * C3123 +
                      (C2124 - C2125) * C3129 + (C2126 - C2127) * C9292) *
                         C9300) *
                        C721 +
                    (((C2806 - C2805) * C3127 + (C2808 - C2807) * C3123 +
                      (C2125 - C2124) * C3129 + (C2127 - C2126) * C9292) *
                         C5908 +
                     ((C122 * C2745 - C9228 * C2800) * C3127 +
                      (C122 * C2749 - C9228 * C2802) * C3123 +
                      (C122 * C2744 - C9228 * C2801) * C3129 +
                      (C122 * C2747 - C9228 * C2803) * C9292) *
                         C9300) *
                        C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5908 * C166 - C5978 * C80 + C9300 * C793 - C5979 * C725) * C3127 +
           (C5908 * C170 - C5978 * C85 + C9300 * C796 - C5979 * C731) * C3123 +
           (C5981 - C5982 + C5983 - C5984) * C3129 +
           (C5985 - C5986 + C5987 - C5988) * C9292) *
              C9228 * C721 +
          ((C5978 * C725 - C5908 * C793 + C5979 * C2745 - C9300 * C2842) *
               C3127 +
           (C5978 * C731 - C5908 * C796 + C5979 * C2749 - C9300 * C2844) *
               C3123 +
           (C5978 * C724 - C5908 * C794 + C5979 * C2744 - C9300 * C2843) *
               C3129 +
           (C5978 * C729 - C5908 * C797 + C5979 * C2747 - C9300 * C2845) *
               C9292) *
              C9228 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3123 * C84 - C3127 * C80 + C9292 * C86 - C3129 * C81) * C122 +
            (C3123 * C212 - C3127 * C208 + C9292 * C213 - C3129 * C209) *
                C9228) *
               C5908 +
           ((C6669 - C6670 + C6671 - C6672) * C122 +
            (C6673 - C6674 + C6675 - C6676) * C9228) *
               C9300) *
              C721 +
          (((C6670 - C6669 + C6672 - C6671) * C122 +
            (C6674 - C6673 + C6676 - C6675) * C9228) *
               C5908 +
           ((C3127 * C2745 - C3123 * C2748 + C3129 * C2744 - C9292 * C2746) *
                C122 +
            (C3127 * C2880 - C3123 * C2882 + C3129 * C2881 - C9292 * C2883) *
                C9228) *
               C9300) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C123 - C242 * C80 - C122 * C208 + C9228 * C243) * C3123 +
            C260 * C9292) *
               C5908 +
           (C6711 + C6712) * C9300) *
              C721 -
          (((C122 * C2801 - C242 * C2744 - C122 * C2881 + C9228 * C2926) *
                C9292 +
            (C122 * C2800 - C242 * C2745 - C122 * C2880 + C9228 * C2927) *
                C3123) *
               C9300 +
           (C6712 + C6711) * C5908) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5908 * C166 - C5978 * C80 + C9300 * C793 - C5979 * C725) * C122 +
            (C5908 * C287 - C5978 * C208 + C9300 * C886 - C5979 * C825) *
                C9228) *
               C3123 +
           ((C5981 - C5982 + C5983 - C5984) * C122 +
            (C6091 - C6092 + C6093 - C6094) * C9228) *
               C9292) *
              C721 +
          (((C5978 * C725 - C5908 * C793 + C5979 * C2745 - C9300 * C2842) *
                C122 +
            (C5978 * C825 - C5908 * C886 + C5979 * C2880 - C9300 * C2971) *
                C9228) *
               C3123 +
           ((C5978 * C724 - C5908 * C794 + C5979 * C2744 - C9300 * C2843) *
                C122 +
            (C5978 * C826 - C5908 * C887 + C5979 * C2881 - C9300 * C2972) *
                C9228) *
               C9292) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3123 * C84 - C3127 * C80 + C9292 * C86 - C3129 * C81) * C5978 +
           (C3123 * C325 - C3127 * C321 + C9292 * C326 - C3129 * C322) * C5908 +
           (C6669 - C6670 + C6671 - C6672) * C5979 +
           (C6781 - C6782 + C6783 - C6784) * C9300) *
              C9228 * C721 +
          ((C6670 - C6669 + C6672 - C6671) * C5978 +
           (C6782 - C6781 + C6784 - C6783) * C5908 +
           (C3127 * C2745 - C3123 * C2748 + C3129 * C2744 - C9292 * C2746) *
               C5979 +
           (C3127 * C3007 - C3123 * C3009 + C3129 * C3008 - C9292 * C3010) *
               C9300) *
              C9228 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eezy[20] += (2 * std::pow(Pi, 2.5) *
                   ((((C9228 * C123 - C122 * C80) * C5978 +
                      (C9228 * C355 - C122 * C321) * C5908 +
                      (C2805 - C2806) * C5979 + (C3052 - C3053) * C9300) *
                         C3123 +
                     ((C132 - C133) * C5978 + (C360 - C361) * C5908 +
                      (C2124 - C2125) * C5979 + (C2353 - C2354) * C9300) *
                         C9292) *
                        C721 +
                    (((C2806 - C2805) * C5978 + (C3053 - C3052) * C5908 +
                      (C122 * C2745 - C9228 * C2800) * C5979 +
                      (C122 * C3007 - C9228 * C3049) * C9300) *
                         C3123 +
                     ((C2125 - C2124) * C5978 + (C2354 - C2353) * C5908 +
                      (C122 * C2744 - C9228 * C2801) * C5979 +
                      (C122 * C3008 - C9228 * C3050) * C9300) *
                         C9292) *
                        C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5978 * C166 - C6196 * C80 - C5978 * C321 + C5908 * C390 +
            C5979 * C793 - C6197 * C725 - C5979 * C915 + C9300 * C978) *
               C9228 * C3123 +
           (C6211 + C6212) * C9228 * C9292) *
              C721 -
          ((C5979 * C2843 - C6197 * C2744 - C5979 * C3008 + C9300 * C3087 +
            C5978 * C794 - C6196 * C724 - C5978 * C916 + C5908 * C977) *
               C9228 * C9292 +
           (C5979 * C2842 - C6197 * C2745 - C5979 * C3007 + C9300 * C3088 +
            C5978 * C793 - C6196 * C725 - C5978 * C915 + C5908 * C978) *
               C9228 * C3123) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4103 * C84 - C4104 * C80 - C4103 * C85 + C9168 * C92) * C5908 +
            C5558 * C9300) *
               C1015 +
           (C4362 * C5908 + C5208 * C9300) * C9298) *
              C9307 * C9308 * C72 -
          (((C4103 * C1751 - C4104 * C1749 - C4103 * C1752 + C9168 * C1755) *
                C9300 +
            (C4103 * C444 - C4104 * C440 - C4103 * C445 + C9168 * C449) *
                C5908) *
               C9298 +
           ((C4103 * C728 - C4104 * C724 - C4103 * C729 + C9168 * C733) *
                C9300 +
            (C4103 * C86 - C4104 * C81 - C4103 * C87 + C9168 * C93) * C5908) *
               C1015) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1015 * C123 - C1055 * C80 + C9298 * C477 - C1056 * C441) * C4103 +
            (C1015 * C127 - C1055 * C85 + C9298 * C480 - C1056 * C447) *
                C9168) *
               C5908 +
           ((C1015 * C761 - C1055 * C725 + C9298 * C1791 - C1056 * C1750) *
                C4103 +
            (C1015 * C764 - C1055 * C731 + C9298 * C1793 - C1056 * C1754) *
                C9168) *
               C9300) *
              C9307 * C9308 * C72 +
          (((C1059 - C1058 + C1061 - C1060) * C4103 +
            (C1063 - C1062 + C1065 - C1064) * C9168) *
               C5908 +
           ((C1055 * C724 - C1015 * C762 + C1056 * C1749 - C9298 * C1792) *
                C4103 +
            (C1055 * C729 - C1015 * C765 + C1056 * C1752 - C9298 * C1794) *
                C9168) *
               C9300) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5908 * C166 - C5978 * C80 + C9300 * C793 - C5979 * C725) * C4103 +
            (C5908 * C170 - C5978 * C85 + C9300 * C796 - C5979 * C731) *
                C9168) *
               C1015 +
           ((C5908 * C509 - C5978 * C441 + C9300 * C1829 - C5979 * C1750) *
                C4103 +
            (C5908 * C512 - C5978 * C447 + C9300 * C1831 - C5979 * C1754) *
                C9168) *
               C9298) *
              C9307 * C9308 * C72 +
          (((C5982 - C5981 + C5984 - C5983) * C4103 +
            (C5986 - C5985 + C5988 - C5987) * C9168) *
               C1015 +
           ((C5978 * C440 - C5908 * C510 + C5979 * C1749 - C9300 * C1830) *
                C4103 +
            (C5978 * C445 - C5908 * C513 + C5979 * C1752 - C9300 * C1832) *
                C9168) *
               C9298) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[21] += (2 * std::pow(Pi, 2.5) *
                   ((((C9168 * C84 - C4103 * C80) * C1055 +
                      (C9168 * C212 - C4103 * C208) * C1015 +
                      (C4454 - C4455) * C1056 + (C4456 - C4457) * C9298) *
                         C5908 +
                     ((C5675 - C5676) * C1055 + (C5677 - C5678) * C1015 +
                      (C5320 - C5321) * C1056 + (C5322 - C5323) * C9298) *
                         C9300) *
                        C9307 * C9308 * C72 +
                    (((C4103 * C81 - C9168 * C86) * C1055 +
                      (C4103 * C209 - C9168 * C213) * C1015 +
                      (C4103 * C440 - C9168 * C444) * C1056 +
                      (C4103 * C542 - C9168 * C545) * C9298) *
                         C5908 +
                     ((C4103 * C724 - C9168 * C728) * C1055 +
                      (C4103 * C826 - C9168 * C829) * C1015 +
                      (C4103 * C1749 - C9168 * C1751) * C1056 +
                      (C4103 * C1868 - C9168 * C1870) * C9298) *
                         C9300) *
                        C9307 * C9308 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1055 * C123 - C1171 * C80 - C1055 * C208 + C1015 * C243 +
            C1056 * C477 - C1172 * C441 - C1056 * C541 + C9298 * C575) *
               C9168 * C5908 +
           (C1055 * C761 - C1171 * C725 - C1055 * C825 + C1015 * C859 +
            C1056 * C1791 - C1172 * C1750 - C1056 * C1867 + C9298 * C1906) *
               C9168 * C9300) *
              C9307 * C9308 * C72 -
          ((C1056 * C1792 - C1172 * C1749 - C1056 * C1868 + C9298 * C1905 +
            C1055 * C762 - C1171 * C724 - C1055 * C826 + C1015 * C858) *
               C9168 * C9300 +
           (C1187 + C1186) * C9168 * C5908) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5908 * C166 - C5978 * C80 + C9300 * C793 - C5979 * C725) * C1055 +
           (C5908 * C287 - C5978 * C208 + C9300 * C886 - C5979 * C825) * C1015 +
           (C5908 * C509 - C5978 * C441 + C9300 * C1829 - C5979 * C1750) *
               C1056 +
           (C5908 * C602 - C5978 * C541 + C9300 * C1941 - C5979 * C1867) *
               C9298) *
              C9168 * C9307 * C9308 * C72 +
          ((C5982 - C5981 + C5984 - C5983) * C1055 +
           (C6092 - C6091 + C6094 - C6093) * C1015 +
           (C5978 * C440 - C5908 * C510 + C5979 * C1749 - C9300 * C1830) *
               C1056 +
           (C5978 * C542 - C5908 * C603 + C5979 * C1868 - C9300 * C1942) *
               C9298) *
              C9168 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[21] += (2 * std::pow(Pi, 2.5) *
                   ((((C9168 * C84 - C4103 * C80) * C5978 +
                      (C9168 * C325 - C4103 * C321) * C5908 +
                      (C5675 - C5676) * C5979 + (C5799 - C5800) * C9300) *
                         C1015 +
                     ((C4454 - C4455) * C5978 + (C4546 - C4547) * C5908 +
                      (C5320 - C5321) * C5979 + (C5430 - C5431) * C9300) *
                         C9298) *
                        C9307 * C9308 * C72 +
                    (((C4103 * C81 - C9168 * C86) * C5978 +
                      (C4103 * C322 - C9168 * C326) * C5908 +
                      (C4103 * C724 - C9168 * C728) * C5979 +
                      (C4103 * C916 - C9168 * C919) * C9300) *
                         C1015 +
                     ((C4103 * C440 - C9168 * C444) * C5978 +
                      (C4103 * C632 - C9168 * C635) * C5908 +
                      (C4103 * C1749 - C9168 * C1751) * C5979 +
                      (C4103 * C1978 - C9168 * C1980) * C9300) *
                         C9298) *
                        C9307 * C9308 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1015 * C123 - C1055 * C80 + C9298 * C477 - C1056 * C441) * C5978 +
           (C1015 * C355 - C1055 * C321 + C9298 * C663 - C1056 * C631) * C5908 +
           (C1015 * C761 - C1055 * C725 + C9298 * C1791 - C1056 * C1750) *
               C5979 +
           (C1015 * C947 - C1055 * C915 + C9298 * C2015 - C1056 * C1977) *
               C9300) *
              C9168 * C9307 * C9308 * C72 +
          ((C1059 - C1058 + C1061 - C1060) * C5978 +
           (C1293 - C1292 + C1295 - C1294) * C5908 +
           (C1055 * C724 - C1015 * C762 + C1056 * C1749 - C9298 * C1792) *
               C5979 +
           (C1055 * C916 - C1015 * C948 + C1056 * C1978 - C9298 * C2016) *
               C9300) *
              C9168 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5978 * C166 - C6196 * C80 - C5978 * C321 + C5908 * C390 +
            C5979 * C793 - C6197 * C725 - C5979 * C915 + C9300 * C978) *
               C1015 +
           (C5978 * C509 - C6196 * C441 - C5978 * C631 + C5908 * C694 +
            C5979 * C1829 - C6197 * C1750 - C5979 * C1977 + C9300 * C2052) *
               C9298) *
              C9168 * C9307 * C9308 * C72 -
          ((C5979 * C1830 - C6197 * C1749 - C5979 * C1978 + C9300 * C2051 +
            C5978 * C510 - C6196 * C440 - C5978 * C632 + C5908 * C693) *
               C9298 +
           (C6212 + C6211) * C1015) *
              C9168 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4103 * C84 - C4104 * C80 - C4103 * C85 + C9168 * C92) * C5908 +
            C5558 * C9300) *
               C1015 +
           (C7193 + C7194) * C9298) *
              C9307 * C436 -
          (((C4103 * C4637 - C4104 * C4636 - C4103 * C4638 + C9168 * C4639) *
                C9300 +
            C4363 * C5908) *
               C9298 +
           (C7194 + C7193) * C1015) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1015 * C123 - C1055 * C80 + C9298 * C477 - C1056 * C441) * C4103 +
            (C1015 * C127 - C1055 * C85 + C9298 * C480 - C1056 * C447) *
                C9168) *
               C5908 +
           ((C1015 * C761 - C1055 * C725 + C9298 * C1791 - C1056 * C1750) *
                C4103 +
            (C1015 * C764 - C1055 * C731 + C9298 * C1793 - C1056 * C1754) *
                C9168) *
               C9300) *
              C9307 * C436 +
          (((C1055 * C441 - C1015 * C477 + C1056 * C1373 - C9298 * C1428) *
                C4103 +
            (C1055 * C447 - C1015 * C480 + C1056 * C1377 - C9298 * C1430) *
                C9168) *
               C5908 +
           ((C1055 * C1750 - C1015 * C1791 + C1056 * C4636 - C9298 * C4666) *
                C4103 +
            (C1055 * C1754 - C1015 * C1793 + C1056 * C4638 - C9298 * C4667) *
                C9168) *
               C9300) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5908 * C166 - C5978 * C80 + C9300 * C793 - C5979 * C725) * C4103 +
            (C5908 * C170 - C5978 * C85 + C9300 * C796 - C5979 * C731) *
                C9168) *
               C1015 +
           ((C7263 - C7264 + C7265 - C7266) * C4103 +
            (C7267 - C7268 + C7269 - C7270) * C9168) *
               C9298) *
              C9307 * C436 +
          (((C7264 - C7263 + C7266 - C7265) * C4103 +
            (C7268 - C7267 + C7270 - C7269) * C9168) *
               C1015 +
           ((C5978 * C1373 - C5908 * C1466 + C5979 * C4636 - C9300 * C4694) *
                C4103 +
            (C5978 * C1377 - C5908 * C1468 + C5979 * C4638 - C9300 * C4695) *
                C9168) *
               C9298) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyx[22] += (2 * std::pow(Pi, 2.5) *
                   ((((C9168 * C84 - C4103 * C80) * C1055 +
                      (C9168 * C212 - C4103 * C208) * C1015 +
                      (C4454 - C4455) * C1056 + (C4456 - C4457) * C9298) *
                         C5908 +
                     ((C5675 - C5676) * C1055 + (C5677 - C5678) * C1015 +
                      (C5320 - C5321) * C1056 + (C5322 - C5323) * C9298) *
                         C9300) *
                        C9307 * C436 +
                    (((C4455 - C4454) * C1055 + (C4457 - C4456) * C1015 +
                      (C4459 - C4458) * C1056 + (C4461 - C4460) * C9298) *
                         C5908 +
                     ((C5321 - C5320) * C1055 + (C5323 - C5322) * C1015 +
                      (C4103 * C4636 - C9168 * C4637) * C1056 +
                      (C4103 * C4722 - C9168 * C4723) * C9298) *
                         C9300) *
                        C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1055 * C123 - C1171 * C80 - C1055 * C208 + C1015 * C243 +
            C1056 * C477 - C1172 * C441 - C1056 * C541 + C9298 * C575) *
               C9168 * C5908 +
           (C1055 * C761 - C1171 * C725 - C1055 * C825 + C1015 * C859 +
            C1056 * C1791 - C1172 * C1750 - C1056 * C1867 + C9298 * C1906) *
               C9168 * C9300) *
              C9307 * C436 -
          ((C1056 * C4666 - C1172 * C4636 - C1056 * C4722 + C9298 * C4750 +
            C1055 * C1791 - C1171 * C1750 - C1055 * C1867 + C1015 * C1906) *
               C9168 * C9300 +
           (C1056 * C1428 - C1172 * C1373 - C1056 * C1508 + C9298 * C1555 +
            C1055 * C477 - C1171 * C441 - C1055 * C541 + C1015 * C575) *
               C9168 * C5908) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5908 * C166 - C5978 * C80 + C9300 * C793 - C5979 * C725) * C1055 +
           (C5908 * C287 - C5978 * C208 + C9300 * C886 - C5979 * C825) * C1015 +
           (C7263 - C7264 + C7265 - C7266) * C1056 +
           (C7373 - C7374 + C7375 - C7376) * C9298) *
              C9168 * C9307 * C436 +
          ((C7264 - C7263 + C7266 - C7265) * C1055 +
           (C7374 - C7373 + C7376 - C7375) * C1015 +
           (C5978 * C1373 - C5908 * C1466 + C5979 * C4636 - C9300 * C4694) *
               C1056 +
           (C5978 * C1508 - C5908 * C1590 + C5979 * C4722 - C9300 * C4777) *
               C9298) *
              C9168 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezx[22] += (2 * std::pow(Pi, 2.5) *
                   ((((C9168 * C84 - C4103 * C80) * C5978 +
                      (C9168 * C325 - C4103 * C321) * C5908 +
                      (C5675 - C5676) * C5979 + (C5799 - C5800) * C9300) *
                         C1015 +
                     ((C4454 - C4455) * C5978 + (C4546 - C4547) * C5908 +
                      (C5320 - C5321) * C5979 + (C5430 - C5431) * C9300) *
                         C9298) *
                        C9307 * C436 +
                    (((C4455 - C4454) * C5978 + (C4547 - C4546) * C5908 +
                      (C5321 - C5320) * C5979 + (C5431 - C5430) * C9300) *
                         C1015 +
                     ((C4459 - C4458) * C5978 + (C4549 - C4548) * C5908 +
                      (C4103 * C4636 - C9168 * C4637) * C5979 +
                      (C4103 * C4804 - C9168 * C4805) * C9300) *
                         C9298) *
                        C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezy[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1015 * C123 - C1055 * C80 + C9298 * C477 - C1056 * C441) * C5978 +
           (C1015 * C355 - C1055 * C321 + C9298 * C663 - C1056 * C631) * C5908 +
           (C1015 * C761 - C1055 * C725 + C9298 * C1791 - C1056 * C1750) *
               C5979 +
           (C1015 * C947 - C1055 * C915 + C9298 * C2015 - C1056 * C1977) *
               C9300) *
              C9168 * C9307 * C436 +
          ((C1055 * C441 - C1015 * C477 + C1056 * C1373 - C9298 * C1428) *
               C5978 +
           (C1055 * C631 - C1015 * C663 + C1056 * C1628 - C9298 * C1670) *
               C5908 +
           (C1055 * C1750 - C1015 * C1791 + C1056 * C4636 - C9298 * C4666) *
               C5979 +
           (C1055 * C1977 - C1015 * C2015 + C1056 * C4804 - C9298 * C4832) *
               C9300) *
              C9168 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5978 * C166 - C6196 * C80 - C5978 * C321 + C5908 * C390 +
            C5979 * C793 - C6197 * C725 - C5979 * C915 + C9300 * C978) *
               C1015 +
           (C7491 + C7492) * C9298) *
              C9168 * C9307 * C436 -
          ((C5979 * C4694 - C6197 * C4636 - C5979 * C4804 + C9300 * C4859 +
            C5978 * C1466 - C6196 * C1373 - C5978 * C1628 + C5908 * C1707) *
               C9298 +
           (C7492 + C7491) * C1015) *
              C9168 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4103 * C84 - C4104 * C80 - C4103 * C85 + C9168 * C92) * C5908 +
            C5558 * C9300) *
               C1015 +
           (C7193 + C7194) * C9298) *
              C721 -
          (((C4103 * C5548 - C4104 * C5547 - C4103 * C5549 + C9168 * C5550) *
                C9300 +
            C5208 * C5908) *
               C9298 +
           ((C4103 * C2748 - C4104 * C2745 - C4103 * C2749 + C9168 * C2751) *
                C9300 +
            C5558 * C5908) *
               C1015) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1015 * C123 - C1055 * C80 + C9298 * C477 - C1056 * C441) * C4103 +
            (C1015 * C127 - C1055 * C85 + C9298 * C480 - C1056 * C447) *
                C9168) *
               C5908 +
           ((C7561 - C7562 + C7563 - C7564) * C4103 +
            (C7565 - C7566 + C7567 - C7568) * C9168) *
               C9300) *
              C721 +
          (((C7562 - C7561 + C7564 - C7563) * C4103 +
            (C7566 - C7565 + C7568 - C7567) * C9168) *
               C5908 +
           ((C1055 * C2745 - C1015 * C2800 + C1056 * C5547 - C9298 * C5592) *
                C4103 +
            (C1055 * C2749 - C1015 * C2802 + C1056 * C5549 - C9298 * C5593) *
                C9168) *
               C9300) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5908 * C166 - C5978 * C80 + C9300 * C793 - C5979 * C725) * C4103 +
            (C5908 * C170 - C5978 * C85 + C9300 * C796 - C5979 * C731) *
                C9168) *
               C1015 +
           ((C7263 - C7264 + C7265 - C7266) * C4103 +
            (C7267 - C7268 + C7269 - C7270) * C9168) *
               C9298) *
              C721 +
          (((C5978 * C725 - C5908 * C793 + C5979 * C2745 - C9300 * C2842) *
                C4103 +
            (C5978 * C731 - C5908 * C796 + C5979 * C2749 - C9300 * C2844) *
                C9168) *
               C1015 +
           ((C5978 * C1750 - C5908 * C1829 + C5979 * C5547 - C9300 * C5636) *
                C4103 +
            (C5978 * C1754 - C5908 * C1831 + C5979 * C5549 - C9300 * C5637) *
                C9168) *
               C9298) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyx[23] += (2 * std::pow(Pi, 2.5) *
                   ((((C9168 * C84 - C4103 * C80) * C1055 +
                      (C9168 * C212 - C4103 * C208) * C1015 +
                      (C4454 - C4455) * C1056 + (C4456 - C4457) * C9298) *
                         C5908 +
                     ((C5675 - C5676) * C1055 + (C5677 - C5678) * C1015 +
                      (C5320 - C5321) * C1056 + (C5322 - C5323) * C9298) *
                         C9300) *
                        C721 +
                    (((C5676 - C5675) * C1055 + (C5678 - C5677) * C1015 +
                      (C5321 - C5320) * C1056 + (C5323 - C5322) * C9298) *
                         C5908 +
                     ((C4103 * C2745 - C9168 * C2748) * C1055 +
                      (C4103 * C2880 - C9168 * C2882) * C1015 +
                      (C4103 * C5547 - C9168 * C5548) * C1056 +
                      (C4103 * C5672 - C9168 * C5673) * C9298) *
                         C9300) *
                        C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1055 * C123 - C1171 * C80 - C1055 * C208 + C1015 * C243 +
            C1056 * C477 - C1172 * C441 - C1056 * C541 + C9298 * C575) *
               C9168 * C5908 +
           (C7683 + C7684) * C9168 * C9300) *
              C721 -
          ((C1056 * C5592 - C1172 * C5547 - C1056 * C5672 + C9298 * C5712 +
            C1055 * C2800 - C1171 * C2745 - C1055 * C2880 + C1015 * C2927) *
               C9168 * C9300 +
           (C7684 + C7683) * C9168 * C5908) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5908 * C166 - C5978 * C80 + C9300 * C793 - C5979 * C725) * C1055 +
           (C5908 * C287 - C5978 * C208 + C9300 * C886 - C5979 * C825) * C1015 +
           (C7263 - C7264 + C7265 - C7266) * C1056 +
           (C7373 - C7374 + C7375 - C7376) * C9298) *
              C9168 * C721 +
          ((C5978 * C725 - C5908 * C793 + C5979 * C2745 - C9300 * C2842) *
               C1055 +
           (C5978 * C825 - C5908 * C886 + C5979 * C2880 - C9300 * C2971) *
               C1015 +
           (C5978 * C1750 - C5908 * C1829 + C5979 * C5547 - C9300 * C5636) *
               C1056 +
           (C5978 * C1867 - C5908 * C1941 + C5979 * C5672 - C9300 * C5761) *
               C9298) *
              C9168 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eezx[23] += (2 * std::pow(Pi, 2.5) *
                   ((((C9168 * C84 - C4103 * C80) * C5978 +
                      (C9168 * C325 - C4103 * C321) * C5908 +
                      (C5675 - C5676) * C5979 + (C5799 - C5800) * C9300) *
                         C1015 +
                     ((C4454 - C4455) * C5978 + (C4546 - C4547) * C5908 +
                      (C5320 - C5321) * C5979 + (C5430 - C5431) * C9300) *
                         C9298) *
                        C721 +
                    (((C5676 - C5675) * C5978 + (C5800 - C5799) * C5908 +
                      (C4103 * C2745 - C9168 * C2748) * C5979 +
                      (C4103 * C3007 - C9168 * C3009) * C9300) *
                         C1015 +
                     ((C5321 - C5320) * C5978 + (C5431 - C5430) * C5908 +
                      (C4103 * C5547 - C9168 * C5548) * C5979 +
                      (C4103 * C5796 - C9168 * C5797) * C9300) *
                         C9298) *
                        C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezy[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1015 * C123 - C1055 * C80 + C9298 * C477 - C1056 * C441) * C5978 +
           (C1015 * C355 - C1055 * C321 + C9298 * C663 - C1056 * C631) * C5908 +
           (C7561 - C7562 + C7563 - C7564) * C5979 +
           (C7787 - C7788 + C7789 - C7790) * C9300) *
              C9168 * C721 +
          ((C7562 - C7561 + C7564 - C7563) * C5978 +
           (C7788 - C7787 + C7790 - C7789) * C5908 +
           (C1055 * C2745 - C1015 * C2800 + C1056 * C5547 - C9298 * C5592) *
               C5979 +
           (C1055 * C3007 - C1015 * C3049 + C1056 * C5796 - C9298 * C5834) *
               C9300) *
              C9168 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5978 * C166 - C6196 * C80 - C5978 * C321 + C5908 * C390 +
            C5979 * C793 - C6197 * C725 - C5979 * C915 + C9300 * C978) *
               C1015 +
           (C7491 + C7492) * C9298) *
              C9168 * C721 -
          ((C5979 * C5636 - C6197 * C5547 - C5979 * C5796 + C9300 * C5873 +
            C5978 * C1829 - C6196 * C1750 - C5978 * C1977 + C5908 * C2052) *
               C9298 +
           (C5979 * C2842 - C6197 * C2745 - C5979 * C3007 + C9300 * C3088 +
            C5978 * C793 - C6196 * C725 - C5978 * C915 + C5908 * C978) *
               C1015) *
              C9168 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4103 * C84 - C4104 * C80 - C4103 * C85 + C9168 * C92) * C7850 +
           C5558 * C7851 +
           (C4103 * C2748 - C4104 * C2745 - C4103 * C2749 + C9168 * C2751) *
               C7852) *
              C9228 * C9307 * C9308 * C72 -
          ((C4103 * C2746 - C4104 * C2744 - C4103 * C2747 + C9168 * C2750) *
               C7852 +
           (C4103 * C728 - C4104 * C724 - C4103 * C729 + C9168 * C733) * C7851 +
           (C4103 * C86 - C4104 * C81 - C4103 * C87 + C9168 * C93) * C7850) *
              C9228 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[24] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C9228 * C123 - C122 * C80) * C4103 +
            (C9228 * C127 - C122 * C85) * C9168) *
               C7850 +
           ((C2805 - C2806) * C4103 + (C2807 - C2808) * C9168) * C7851 +
           ((C9228 * C2800 - C122 * C2745) * C4103 +
            (C9228 * C2802 - C122 * C2749) * C9168) *
               C7852) *
              C9307 * C9308 * C72 +
          (((C133 - C132) * C4103 + (C135 - C134) * C9168) * C7850 +
           ((C2125 - C2124) * C4103 + (C2127 - C2126) * C9168) * C7851 +
           ((C122 * C2744 - C9228 * C2801) * C4103 +
            (C122 * C2747 - C9228 * C2803) * C9168) *
               C7852) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[24] += (2 * std::pow(Pi, 2.5) *
                   (((C7850 * C166 - C7905 * C80 + C7851 * C793 - C7906 * C725 +
                      C7852 * C2842 - C7907 * C2745) *
                         C4103 +
                     (C7850 * C170 - C7905 * C85 + C7851 * C796 - C7906 * C731 +
                      C7852 * C2844 - C7907 * C2749) *
                         C9168) *
                        C9228 * C9307 * C9308 * C72 +
                    ((C7905 * C81 - C7850 * C167 + C7906 * C724 - C7851 * C794 +
                      C7907 * C2744 - C7852 * C2843) *
                         C4103 +
                     (C7905 * C87 - C7850 * C171 + C7906 * C729 - C7851 * C797 +
                      C7907 * C2747 - C7852 * C2845) *
                         C9168) *
                        C9228 * C9307 * C9308 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C9168 * C84 - C4103 * C80) * C122 +
            (C9168 * C212 - C4103 * C208) * C9228) *
               C7850 +
           ((C5675 - C5676) * C122 + (C5677 - C5678) * C9228) * C7851 +
           ((C9168 * C2748 - C4103 * C2745) * C122 +
            (C9168 * C2882 - C4103 * C2880) * C9228) *
               C7852) *
              C9307 * C9308 * C72 +
          (((C4103 * C81 - C9168 * C86) * C122 +
            (C4103 * C209 - C9168 * C213) * C9228) *
               C7850 +
           ((C4103 * C724 - C9168 * C728) * C122 +
            (C4103 * C826 - C9168 * C829) * C9228) *
               C7851 +
           ((C4103 * C2744 - C9168 * C2746) * C122 +
            (C4103 * C2881 - C9168 * C2883) * C9228) *
               C7852) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C9228 * C243) * C9168 *
               C7850 +
           C2936 * C9168 * C7851 +
           (C122 * C2800 - C242 * C2745 - C122 * C2880 + C9228 * C2927) *
               C9168 * C7852) *
              C9307 * C9308 * C72 -
          ((C122 * C2801 - C242 * C2744 - C122 * C2881 + C9228 * C2926) *
               C9168 * C7852 +
           C2246 * C9168 * C7851 + C260 * C9168 * C7850) *
              C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[24] += (2 * std::pow(Pi, 2.5) *
                   (((C7850 * C166 - C7905 * C80 + C7851 * C793 - C7906 * C725 +
                      C7852 * C2842 - C7907 * C2745) *
                         C122 +
                     (C7850 * C287 - C7905 * C208 + C7851 * C886 -
                      C7906 * C825 + C7852 * C2971 - C7907 * C2880) *
                         C9228) *
                        C9168 * C9307 * C9308 * C72 +
                    ((C7905 * C81 - C7850 * C167 + C7906 * C724 - C7851 * C794 +
                      C7907 * C2744 - C7852 * C2843) *
                         C122 +
                     (C7905 * C209 - C7850 * C288 + C7906 * C826 -
                      C7851 * C887 + C7907 * C2881 - C7852 * C2972) *
                         C9228) *
                        C9168 * C9307 * C9308 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (2 * std::pow(Pi, 2.5) *
         (((C9168 * C84 - C4103 * C80) * C7905 +
           (C9168 * C325 - C4103 * C321) * C7850 + (C5675 - C5676) * C7906 +
           (C5799 - C5800) * C7851 + (C9168 * C2748 - C4103 * C2745) * C7907 +
           (C9168 * C3009 - C4103 * C3007) * C7852) *
              C9228 * C9307 * C9308 * C72 +
          ((C4103 * C81 - C9168 * C86) * C7905 +
           (C4103 * C322 - C9168 * C326) * C7850 +
           (C4103 * C724 - C9168 * C728) * C7906 +
           (C4103 * C916 - C9168 * C919) * C7851 +
           (C4103 * C2744 - C9168 * C2746) * C7907 +
           (C4103 * C3008 - C9168 * C3010) * C7852) *
              C9228 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[24] +=
        (2 * std::pow(Pi, 2.5) *
         (((C9228 * C123 - C122 * C80) * C7905 +
           (C9228 * C355 - C122 * C321) * C7850 + (C2805 - C2806) * C7906 +
           (C3052 - C3053) * C7851 + (C9228 * C2800 - C122 * C2745) * C7907 +
           (C9228 * C3049 - C122 * C3007) * C7852) *
              C9168 * C9307 * C9308 * C72 +
          ((C133 - C132) * C7905 + (C361 - C360) * C7850 +
           (C2125 - C2124) * C7906 + (C2354 - C2353) * C7851 +
           (C122 * C2744 - C9228 * C2801) * C7907 +
           (C122 * C3008 - C9228 * C3050) * C7852) *
              C9168 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (2 * std::pow(Pi, 2.5) *
         ((C7905 * C166 - C8064 * C80 - C7905 * C321 + C7850 * C390 +
           C7906 * C793 - C8065 * C725 - C7906 * C915 + C7851 * C978 +
           C7907 * C2842 - C8066 * C2745 - C7907 * C3007 + C7852 * C3088) *
              C9228 * C9168 * C9307 * C9308 * C72 -
          (C7907 * C2843 - C8066 * C2744 - C7907 * C3008 + C7852 * C3087 +
           C7906 * C794 - C8065 * C724 - C7906 * C916 + C7851 * C977 +
           C7905 * C167 - C8064 * C81 - C7905 * C322 + C7850 * C391) *
              C9228 * C9168 * C9307 * C9308 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[25] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4103 * C84 - C4104 * C80 - C4103 * C85 + C9168 * C92) * C7850 +
           C5558 * C7851 +
           (C4103 * C2748 - C4104 * C2745 - C4103 * C2749 + C9168 * C2751) *
               C7852) *
              C9228 * C9307 * C436 -
          ((C4103 * C5548 - C4104 * C5547 - C4103 * C5549 + C9168 * C5550) *
               C7852 +
           C5208 * C7851 + C4362 * C7850) *
              C9228 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[25] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C9228 * C123 - C122 * C80) * C4103 +
            (C9228 * C127 - C122 * C85) * C9168) *
               C7850 +
           ((C2805 - C2806) * C4103 + (C2807 - C2808) * C9168) * C7851 +
           ((C9228 * C2800 - C122 * C2745) * C4103 +
            (C9228 * C2802 - C122 * C2749) * C9168) *
               C7852) *
              C9307 * C436 +
          (((C122 * C441 - C9228 * C477) * C4103 +
            (C122 * C447 - C9228 * C480) * C9168) *
               C7850 +
           ((C122 * C1750 - C9228 * C1791) * C4103 +
            (C122 * C1754 - C9228 * C1793) * C9168) *
               C7851 +
           ((C122 * C5547 - C9228 * C5592) * C4103 +
            (C122 * C5549 - C9228 * C5593) * C9168) *
               C7852) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexz[25] += (2 * std::pow(Pi, 2.5) *
                   (((C7850 * C166 - C7905 * C80 + C7851 * C793 - C7906 * C725 +
                      C7852 * C2842 - C7907 * C2745) *
                         C4103 +
                     (C7850 * C170 - C7905 * C85 + C7851 * C796 - C7906 * C731 +
                      C7852 * C2844 - C7907 * C2749) *
                         C9168) *
                        C9228 * C9307 * C436 +
                    ((C7905 * C441 - C7850 * C509 + C7906 * C1750 -
                      C7851 * C1829 + C7907 * C5547 - C7852 * C5636) *
                         C4103 +
                     (C7905 * C447 - C7850 * C512 + C7906 * C1754 -
                      C7851 * C1831 + C7907 * C5549 - C7852 * C5637) *
                         C9168) *
                        C9228 * C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[25] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C9168 * C84 - C4103 * C80) * C122 +
            (C9168 * C212 - C4103 * C208) * C9228) *
               C7850 +
           ((C5675 - C5676) * C122 + (C5677 - C5678) * C9228) * C7851 +
           ((C9168 * C2748 - C4103 * C2745) * C122 +
            (C9168 * C2882 - C4103 * C2880) * C9228) *
               C7852) *
              C9307 * C436 +
          (((C4455 - C4454) * C122 + (C4457 - C4456) * C9228) * C7850 +
           ((C5321 - C5320) * C122 + (C5323 - C5322) * C9228) * C7851 +
           ((C4103 * C5547 - C9168 * C5548) * C122 +
            (C4103 * C5672 - C9168 * C5673) * C9228) *
               C7852) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyy[25] +=
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C9228 * C243) * C9168 *
               C7850 +
           C2936 * C9168 * C7851 +
           (C122 * C2800 - C242 * C2745 - C122 * C2880 + C9228 * C2927) *
               C9168 * C7852) *
              C9307 * C436 -
          ((C122 * C5592 - C242 * C5547 - C122 * C5672 + C9228 * C5712) *
               C9168 * C7852 +
           (C122 * C1791 - C242 * C1750 - C122 * C1867 + C9228 * C1906) *
               C9168 * C7851 +
           (C122 * C477 - C242 * C441 - C122 * C541 + C9228 * C575) * C9168 *
               C7850) *
              C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[25] += (2 * std::pow(Pi, 2.5) *
                   (((C7850 * C166 - C7905 * C80 + C7851 * C793 - C7906 * C725 +
                      C7852 * C2842 - C7907 * C2745) *
                         C122 +
                     (C7850 * C287 - C7905 * C208 + C7851 * C886 -
                      C7906 * C825 + C7852 * C2971 - C7907 * C2880) *
                         C9228) *
                        C9168 * C9307 * C436 +
                    ((C7905 * C441 - C7850 * C509 + C7906 * C1750 -
                      C7851 * C1829 + C7907 * C5547 - C7852 * C5636) *
                         C122 +
                     (C7905 * C541 - C7850 * C602 + C7906 * C1867 -
                      C7851 * C1941 + C7907 * C5672 - C7852 * C5761) *
                         C9228) *
                        C9168 * C9307 * C437) *
                   C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezx[25] +=
        (2 * std::pow(Pi, 2.5) *
         (((C9168 * C84 - C4103 * C80) * C7905 +
           (C9168 * C325 - C4103 * C321) * C7850 + (C5675 - C5676) * C7906 +
           (C5799 - C5800) * C7851 + (C9168 * C2748 - C4103 * C2745) * C7907 +
           (C9168 * C3009 - C4103 * C3007) * C7852) *
              C9228 * C9307 * C436 +
          ((C4455 - C4454) * C7905 + (C4547 - C4546) * C7850 +
           (C5321 - C5320) * C7906 + (C5431 - C5430) * C7851 +
           (C4103 * C5547 - C9168 * C5548) * C7907 +
           (C4103 * C5796 - C9168 * C5797) * C7852) *
              C9228 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezy[25] +=
        (2 * std::pow(Pi, 2.5) *
         (((C9228 * C123 - C122 * C80) * C7905 +
           (C9228 * C355 - C122 * C321) * C7850 + (C2805 - C2806) * C7906 +
           (C3052 - C3053) * C7851 + (C9228 * C2800 - C122 * C2745) * C7907 +
           (C9228 * C3049 - C122 * C3007) * C7852) *
              C9168 * C9307 * C436 +
          ((C122 * C441 - C9228 * C477) * C7905 +
           (C122 * C631 - C9228 * C663) * C7850 +
           (C122 * C1750 - C9228 * C1791) * C7906 +
           (C122 * C1977 - C9228 * C2015) * C7851 +
           (C122 * C5547 - C9228 * C5592) * C7907 +
           (C122 * C5796 - C9228 * C5834) * C7852) *
              C9168 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eezz[25] +=
        (2 * std::pow(Pi, 2.5) *
         ((C7905 * C166 - C8064 * C80 - C7905 * C321 + C7850 * C390 +
           C7906 * C793 - C8065 * C725 - C7906 * C915 + C7851 * C978 +
           C7907 * C2842 - C8066 * C2745 - C7907 * C3007 + C7852 * C3088) *
              C9228 * C9168 * C9307 * C436 -
          (C7907 * C5636 - C8066 * C5547 - C7907 * C5796 + C7852 * C5873 +
           C7906 * C1829 - C8065 * C1750 - C7906 * C1977 + C7851 * C2052 +
           C7905 * C509 - C8064 * C441 - C7905 * C631 + C7850 * C694) *
              C9228 * C9168 * C9307 * C437) *
         C9309) /
        (p * q * std::sqrt(p + q));
    d2eexx[26] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4103 * C84 - C4104 * C80 - C4103 * C85 + C9168 * C92) * C7850 +
           C5558 * C7851 + C8338 * C7852) *
              C9228 * C721 -
          ((C4103 * C8328 - C4104 * C8327 - C4103 * C8329 + C9168 * C8330) *
               C7852 +
           C8338 * C7851 + C5558 * C7850) *
              C9228 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexy[26] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C9228 * C123 - C122 * C80) * C4103 +
            (C9228 * C127 - C122 * C85) * C9168) *
               C7850 +
           ((C2805 - C2806) * C4103 + (C2807 - C2808) * C9168) * C7851 +
           ((C8367 - C8368) * C4103 + (C8369 - C8370) * C9168) * C7852) *
              C721 +
          (((C2806 - C2805) * C4103 + (C2808 - C2807) * C9168) * C7850 +
           ((C8368 - C8367) * C4103 + (C8370 - C8369) * C9168) * C7851 +
           ((C122 * C8327 - C9228 * C8364) * C4103 +
            (C122 * C8329 - C9228 * C8365) * C9168) *
               C7852) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eexz[26] += (2 * std::pow(Pi, 2.5) *
                   (((C7850 * C166 - C7905 * C80 + C7851 * C793 - C7906 * C725 +
                      C7852 * C2842 - C7907 * C2745) *
                         C4103 +
                     (C7850 * C170 - C7905 * C85 + C7851 * C796 - C7906 * C731 +
                      C7852 * C2844 - C7907 * C2749) *
                         C9168) *
                        C9228 * C721 +
                    ((C7905 * C725 - C7850 * C793 + C7906 * C2745 -
                      C7851 * C2842 + C7907 * C8327 - C7852 * C8396) *
                         C4103 +
                     (C7905 * C731 - C7850 * C796 + C7906 * C2749 -
                      C7851 * C2844 + C7907 * C8329 - C7852 * C8397) *
                         C9168) *
                        C9228 * C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[26] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C9168 * C84 - C4103 * C80) * C122 +
            (C9168 * C212 - C4103 * C208) * C9228) *
               C7850 +
           ((C5675 - C5676) * C122 + (C5677 - C5678) * C9228) * C7851 +
           ((C8427 - C8428) * C122 + (C8429 - C8430) * C9228) * C7852) *
              C721 +
          (((C5676 - C5675) * C122 + (C5678 - C5677) * C9228) * C7850 +
           ((C8428 - C8427) * C122 + (C8430 - C8429) * C9228) * C7851 +
           ((C4103 * C8327 - C9168 * C8328) * C122 +
            (C4103 * C8424 - C9168 * C8425) * C9228) *
               C7852) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyy[26] +=
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C123 - C242 * C80 - C122 * C208 + C9228 * C243) * C9168 *
               C7850 +
           C8458 * C7851 + C8466 * C7852) *
              C721 -
          ((C122 * C8364 - C242 * C8327 - C122 * C8424 + C9228 * C8456) *
               C9168 * C7852 +
           C8466 * C7851 + C8458 * C7850) *
              C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    d2eeyz[26] += (2 * std::pow(Pi, 2.5) *
                   (((C7850 * C166 - C7905 * C80 + C7851 * C793 - C7906 * C725 +
                      C7852 * C2842 - C7907 * C2745) *
                         C122 +
                     (C7850 * C287 - C7905 * C208 + C7851 * C886 -
                      C7906 * C825 + C7852 * C2971 - C7907 * C2880) *
                         C9228) *
                        C9168 * C721 +
                    ((C7905 * C725 - C7850 * C793 + C7906 * C2745 -
                      C7851 * C2842 + C7907 * C8327 - C7852 * C8396) *
                         C122 +
                     (C7905 * C825 - C7850 * C886 + C7906 * C2880 -
                      C7851 * C2971 + C7907 * C8424 - C7852 * C8492) *
                         C9228) *
                        C9168 * C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezx[26] += (2 * std::pow(Pi, 2.5) *
                   (((C9168 * C84 - C4103 * C80) * C7905 +
                     (C9168 * C325 - C4103 * C321) * C7850 +
                     (C5675 - C5676) * C7906 + (C5799 - C5800) * C7851 +
                     (C8427 - C8428) * C7907 + (C8522 - C8523) * C7852) *
                        C9228 * C721 +
                    ((C5676 - C5675) * C7905 + (C5800 - C5799) * C7850 +
                     (C8428 - C8427) * C7906 + (C8523 - C8522) * C7851 +
                     (C4103 * C8327 - C9168 * C8328) * C7907 +
                     (C4103 * C8519 - C9168 * C8520) * C7852) *
                        C9228 * C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezy[26] += (2 * std::pow(Pi, 2.5) *
                   (((C9228 * C123 - C122 * C80) * C7905 +
                     (C9228 * C355 - C122 * C321) * C7850 +
                     (C2805 - C2806) * C7906 + (C3052 - C3053) * C7851 +
                     (C8367 - C8368) * C7907 + (C8551 - C8552) * C7852) *
                        C9168 * C721 +
                    ((C2806 - C2805) * C7905 + (C3053 - C3052) * C7850 +
                     (C8368 - C8367) * C7906 + (C8552 - C8551) * C7851 +
                     (C122 * C8327 - C9228 * C8364) * C7907 +
                     (C122 * C8519 - C9228 * C8549) * C7852) *
                        C9168 * C722) *
                   C9308 * C9309) /
                  (p * q * std::sqrt(p + q));
    d2eezz[26] +=
        (2 * std::pow(Pi, 2.5) *
         ((C7905 * C166 - C8064 * C80 - C7905 * C321 + C7850 * C390 +
           C7906 * C793 - C8065 * C725 - C7906 * C915 + C7851 * C978 +
           C7907 * C2842 - C8066 * C2745 - C7907 * C3007 + C7852 * C3088) *
              C9228 * C9168 * C721 -
          (C7907 * C8396 - C8066 * C8327 - C7907 * C8519 + C7852 * C8578 +
           C7906 * C2842 - C8065 * C2745 - C7906 * C3007 + C7851 * C3088 +
           C7905 * C793 - C8064 * C725 - C7905 * C915 + C7850 * C978) *
              C9228 * C9168 * C722) *
         C9308 * C9309) /
        (p * q * std::sqrt(p + q));
    
}
