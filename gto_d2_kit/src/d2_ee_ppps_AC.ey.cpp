/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ppps_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1110_13(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C8583 = ae * be;
    const double C8582 = ae + be;
    const double C8581 = 0 * be;
    const double C8580 = xA - xB;
    const double C8597 = xC - xD;
    const double C8596 = ce + de;
    const double C8614 = yC - yD;
    const double C8621 = zC - zD;
    const double C8632 = yA - yB;
    const double C8639 = zA - zB;
    const double C8657 = 0 * be;
    const double C8673 = 0 * be;
    const double C8683 = p + q;
    const double C8682 = p * q;
    const double C8688 = xP - xQ;
    const double C8687 = bs[2];
    const double C8697 = ae * ce;
    const double C8693 = bs[3];
    const double C8706 = bs[4];
    const double C8725 = yP - yQ;
    const double C8740 = zP - zQ;
    const double C79 = bs[0];
    const double C9248 = ce * de;
    const double C8584 = std::pow(C8582, 2);
    const double C9130 = 2 * C8582;
    const double C8585 = C8583 * C8580;
    const double C9121 = std::pow(C8580, 2);
    const double C9245 = C8580 * be;
    const double C9244 = C8580 * ae;
    const double C9247 = std::pow(C8597, 2);
    const double C8689 = C8596 * C8582;
    const double C9249 = 2 * C8596;
    const double C9251 = std::pow(C8614, 2);
    const double C9250 = std::pow(C8621, 2);
    const double C8658 = C8583 * C8632;
    const double C9177 = std::pow(C8632, 2);
    const double C9254 = C8632 * be;
    const double C9252 = C8632 * ae;
    const double C8674 = C8583 * C8639;
    const double C9192 = std::pow(C8639, 2);
    const double C9255 = C8639 * be;
    const double C9253 = C8639 * ae;
    const double C8684 = 2 * C8682;
    const double C8698 = C8688 * ae;
    const double C8696 = std::pow(C8688, 2);
    const double C8694 = C8688 * ce;
    const double C8728 = C8688 * C8725;
    const double C8727 = C8725 * ce;
    const double C8757 = C8725 * C8688;
    const double C8756 = C8725 * ae;
    const double C8770 = std::pow(C8725, 2);
    const double C8743 = C8688 * C8740;
    const double C8742 = C8740 * ce;
    const double C8779 = C8725 * C8740;
    const double C8789 = C8740 * C8688;
    const double C8788 = C8740 * ae;
    const double C8802 = C8740 * C8725;
    const double C8811 = std::pow(C8740, 2);
    const double C8586 = 2 * C8584;
    const double C9246 = std::pow(C9130, -1);
    const double C9122 = C9121 * C8583;
    const double C9258 = C9247 * C9248;
    const double C9259 = std::pow(C9249, -1);
    const double C9261 = C9251 * C9248;
    const double C9260 = C9250 * C9248;
    const double C9178 = C9177 * C8583;
    const double C9193 = C9192 * C8583;
    const double C8686 = C8684 / C8683;
    const double C91 =
        (-((std::pow(xP - xQ, 2) * bs[2] * std::pow(C8684 / C8683, 2) -
            (bs[1] * C8684) / C8683) *
           ae * ce) /
         C8596) /
        C8582;
    const double C80 = -(C8688 * bs[1] * C8684) / C8683;
    const double C451 = -(C8725 * bs[1] * C8684) / C8683;
    const double C737 = -(C8740 * bs[1] * C8684) / C8683;
    const double C8701 = C8693 * C8698;
    const double C8712 = C8706 * C8698;
    const double C83 = (-(bs[1] * C8698 * C8684) / C8683) / C8582;
    const double C8708 = C8696 * C8706;
    const double C8700 = C8693 * C8694;
    const double C8709 = C8706 * C8694;
    const double C86 = (bs[1] * C8694 * C8684) / (C8683 * C8596);
    const double C8730 = C8728 * ae;
    const double C8729 = C8693 * C8727;
    const double C8735 = C8706 * C8727;
    const double C122 = (bs[1] * C8727 * C8684) / (C8683 * C8596);
    const double C8759 = C8757 * ae;
    const double C8758 = C8693 * C8756;
    const double C8764 = C8706 * C8756;
    const double C192 = (-(bs[1] * C8756 * C8684) / C8683) / C8582;
    const double C8772 = C8770 * C8706;
    const double C8745 = C8743 * ae;
    const double C8744 = C8693 * C8742;
    const double C8750 = C8706 * C8742;
    const double C157 = (bs[1] * C8742 * C8684) / (C8683 * C8596);
    const double C8780 = C8779 * ae;
    const double C8791 = C8789 * ae;
    const double C8790 = C8693 * C8788;
    const double C8796 = C8706 * C8788;
    const double C319 = (-(bs[1] * C8788 * C8684) / C8683) / C8582;
    const double C8803 = C8802 * ae;
    const double C8813 = C8811 * C8706;
    const double C9123 = C9122 / C8582;
    const double C9266 = C9258 / C8596;
    const double C9268 = C9261 / C8596;
    const double C9267 = C9260 / C8596;
    const double C9179 = C9178 / C8582;
    const double C9194 = C9193 / C8582;
    const double C8690 = std::pow(C8686, 2);
    const double C8692 = -C8686;
    const double C8707 = std::pow(C8686, 4);
    const double C8732 = C8730 * ce;
    const double C8761 = C8759 * ce;
    const double C8747 = C8745 * ce;
    const double C8781 = C8780 * ce;
    const double C8793 = C8791 * ce;
    const double C8804 = C8803 * ce;
    const double C9124 = -C9123;
    const double C9269 = -C9266;
    const double C9271 = -C9268;
    const double C9270 = -C9267;
    const double C9180 = -C9179;
    const double C9195 = -C9194;
    const double C8695 = C8687 * C8690;
    const double C92 =
        (-(C8690 * C8687 * C8688 * ae * ce) / C8596) / C8582 -
        (ae * C8690 * C8687 * C8688 * ce) / C8689 -
        (C8688 *
         (C8687 * C8690 + std::pow(C8688, 2) * bs[3] * std::pow(-C8686, 3)) *
         ae * ce) /
            C8689;
    const double C126 =
        (-(C8690 * C8687 * C8688 * (yP - yQ) * ae * ce) / C8596) / C8582;
    const double C161 =
        (-(C8690 * C8687 * C8688 * (zP - zQ) * ae * ce) / C8596) / C8582;
    const double C196 =
        (-(C8690 * C8687 * C8725 * C8688 * ae * ce) / C8596) / C8582;
    const double C238 =
        (-((std::pow(C8725, 2) * C8687 * C8690 - (bs[1] * C8684) / C8683) *
           C8697) /
         C8596) /
        C8582;
    const double C278 =
        (-(C8690 * C8687 * C8725 * C8740 * ae * ce) / C8596) / C8582;
    const double C323 =
        (-(C8690 * C8687 * C8740 * C8688 * ae * ce) / C8596) / C8582;
    const double C365 =
        (-(C8690 * C8687 * C8740 * C8725 * ae * ce) / C8596) / C8582;
    const double C405 =
        (-((std::pow(C8740, 2) * C8687 * C8690 - (bs[1] * C8684) / C8683) *
           C8697) /
         C8596) /
        C8582;
    const double C84 = (C8688 * C8690 * C8687 * C8698) / C8582 -
                       (ae * bs[1] * C8684) / (C8683 * C8582);
    const double C87 = (ce * bs[1] * C8684) / (C8683 * C8596) -
                       (C8688 * C8690 * C8687 * C8694) / C8596;
    const double C123 = -(C8688 * C8690 * C8687 * C8727) / C8596;
    const double C158 = -(C8688 * C8690 * C8687 * C8742) / C8596;
    const double C193 = (C8688 * C8690 * C8687 * C8756) / C8582;
    const double C320 = (C8688 * C8690 * C8687 * C8788) / C8582;
    const double C454 = -(C8725 * C8690 * C8687 * C8694) / C8596;
    const double C457 = (C8725 * C8690 * C8687 * C8698) / C8582;
    const double C491 = (ce * bs[1] * C8684) / (C8683 * C8596) -
                        (C8725 * C8690 * C8687 * C8727) / C8596;
    const double C523 = -(C8725 * C8690 * C8687 * C8742) / C8596;
    const double C555 = (C8725 * C8690 * C8687 * C8756) / C8582 -
                        (ae * bs[1] * C8684) / (C8683 * C8582);
    const double C645 = (C8725 * C8690 * C8687 * C8788) / C8582;
    const double C740 = -(C8740 * C8690 * C8687 * C8694) / C8596;
    const double C743 = (C8740 * C8690 * C8687 * C8698) / C8582;
    const double C775 = -(C8740 * C8690 * C8687 * C8727) / C8596;
    const double C809 = (ce * bs[1] * C8684) / (C8683 * C8596) -
                        (C8740 * C8690 * C8687 * C8742) / C8596;
    const double C841 = (C8740 * C8690 * C8687 * C8756) / C8582;
    const double C931 = (C8740 * C8690 * C8687 * C8788) / C8582 -
                        (ae * bs[1] * C8684) / (C8683 * C8582);
    const double C8699 = std::pow(C8692, 3);
    const double C8716 = C8707 * C8712;
    const double C8715 = C8707 * C8709;
    const double C8714 = C8708 * C8707;
    const double C8737 = C8707 * C8735;
    const double C8752 = C8707 * C8750;
    const double C8766 = C8707 * C8764;
    const double C8773 = C8772 * C8707;
    const double C8798 = C8707 * C8796;
    const double C8814 = C8813 * C8707;
    const double C8734 = C8706 * C8732;
    const double C8763 = C8706 * C8761;
    const double C8749 = C8706 * C8747;
    const double C8783 = C8706 * C8781;
    const double C8795 = C8706 * C8793;
    const double C8806 = C8706 * C8804;
    const double C9125 = std::exp(C9124);
    const double C9272 = std::exp(C9269);
    const double C9274 = std::exp(C9271);
    const double C9273 = std::exp(C9270);
    const double C9181 = std::exp(C9180);
    const double C9196 = std::exp(C9195);
    const double C81 = C8695 * C8696 - (bs[1] * C8684) / C8683;
    const double C450 = C8725 * C8688 * C8695;
    const double C736 = C8740 * C8688 * C8695;
    const double C1382 = C8695 * C8770 - (bs[1] * C8684) / C8683;
    const double C1762 = C8740 * C8725 * C8695;
    const double C2756 = C8695 * C8811 - (bs[1] * C8684) / C8683;
    const double C8703 = C8699 * C8701;
    const double C8702 = C8699 * C8700;
    const double C8705 = C8693 * C8699;
    const double C8731 = C8699 * C8729;
    const double C8746 = C8699 * C8744;
    const double C8760 = C8699 * C8758;
    const double C8792 = C8699 * C8790;
    const double C127 =
        (-(C8688 * C8699 * C8693 * C8688 * C8725 * ae * ce) / C8596) / C8582 -
        (ae * C8690 * C8687 * C8725 * ce) / C8689;
    const double C162 =
        (-(C8688 * C8699 * C8693 * C8688 * C8740 * ae * ce) / C8596) / C8582 -
        (ae * C8690 * C8687 * C8740 * ce) / C8689;
    const double C197 =
        (-(C8688 * C8699 * C8693 * C8725 * C8688 * ae * ce) / C8596) / C8582 -
        (C8690 * C8687 * C8725 * ae * ce) / C8689;
    const double C239 =
        (-(C8688 * (C8695 + std::pow(C8725, 2) * C8693 * C8699) * C8697) /
         C8596) /
        C8582;
    const double C279 =
        (-(C8688 * C8699 * C8693 * C8725 * C8740 * ae * ce) / C8596) / C8582;
    const double C280 = (-(C8707 * C8706 * C8781 * C8696) / C8596) / C8582 -
                        (C8699 * C8693 * C8781) / C8689;
    const double C324 =
        (-(C8688 * C8699 * C8693 * C8740 * C8688 * ae * ce) / C8596) / C8582 -
        (C8690 * C8687 * C8740 * ae * ce) / C8689;
    const double C366 =
        (-(C8688 * C8699 * C8693 * C8740 * C8725 * ae * ce) / C8596) / C8582;
    const double C367 = (-(C8707 * C8706 * C8804 * C8696) / C8596) / C8582 -
                        (C8699 * C8693 * C8804) / C8689;
    const double C406 =
        (-(C8688 * (C8695 + std::pow(C8740, 2) * C8693 * C8699) * C8697) /
         C8596) /
        C8582;
    const double C460 =
        (-(C8725 * (C8695 + C8696 * C8693 * C8699) * C8697) / C8596) / C8582;
    const double C494 = (-(C8725 * C8699 * C8693 * C8732) / C8596) / C8582 -
                        (C8690 * C8687 * C8698 * ce) / C8689;
    const double C526 = (-(C8725 * C8699 * C8693 * C8747) / C8596) / C8582;
    const double C558 = (-(C8725 * C8699 * C8693 * C8761) / C8596) / C8582 -
                        (ae * C8690 * C8687 * C8694) / C8689;
    const double C585 =
        (-(C8690 * C8687 * C8756 * ce) / C8596) / C8582 -
        (ae * C8690 * C8687 * C8727) / C8689 -
        (C8725 * (C8695 + C8770 * C8693 * C8699) * C8697) / C8689;
    const double C616 = (-(C8725 * C8699 * C8693 * C8781) / C8596) / C8582 -
                        (ae * C8690 * C8687 * C8742) / C8689;
    const double C648 = (-(C8725 * C8699 * C8693 * C8793) / C8596) / C8582;
    const double C675 = (-(C8725 * C8699 * C8693 * C8804) / C8596) / C8582 -
                        (C8690 * C8687 * C8788 * ce) / C8689;
    const double C706 =
        (-(C8725 * (C8695 + C8811 * C8693 * C8699) * C8697) / C8596) / C8582;
    const double C746 =
        (-(C8740 * (C8695 + C8696 * C8693 * C8699) * C8697) / C8596) / C8582;
    const double C778 = (-(C8740 * C8699 * C8693 * C8732) / C8596) / C8582;
    const double C812 = (-(C8740 * C8699 * C8693 * C8747) / C8596) / C8582 -
                        (C8690 * C8687 * C8698 * ce) / C8689;
    const double C844 = (-(C8740 * C8699 * C8693 * C8761) / C8596) / C8582;
    const double C873 =
        (-(C8740 * (C8695 + C8770 * C8693 * C8699) * C8697) / C8596) / C8582;
    const double C900 = (-(C8740 * C8699 * C8693 * C8781) / C8596) / C8582 -
                        (C8690 * C8687 * C8756 * ce) / C8689;
    const double C934 = (-(C8740 * C8699 * C8693 * C8793) / C8596) / C8582 -
                        (ae * C8690 * C8687 * C8694) / C8689;
    const double C963 = (-(C8740 * C8699 * C8693 * C8804) / C8596) / C8582 -
                        (ae * C8690 * C8687 * C8727) / C8689;
    const double C990 =
        (-(C8690 * C8687 * C8788 * ce) / C8596) / C8582 -
        (ae * C8690 * C8687 * C8742) / C8689 -
        (C8740 * (C8695 + C8811 * C8693 * C8699) * C8697) / C8689;
    const double C8719 = C8688 * C8716;
    const double C8955 = C8725 * C8716;
    const double C8718 = C8688 * C8715;
    const double C8960 = C8725 * C8715;
    const double C1767 =
        (-(C8740 * C8725 * C8716 * ce) / C8596) / C8582 -
        (ae * C8740 * C8725 * C8715) / C8689 -
        (C8688 * C8740 * C8725 *
         (C8706 * C8707 + C8696 * bs[5] * std::pow(C8692, 5)) * C8697) /
            C8689;
    const double C8881 = C8688 * C8737;
    const double C8934 = C8725 * C8737;
    const double C8884 = C8688 * C8752;
    const double C8963 = C8725 * C8752;
    const double C8974 = C8740 * C8752;
    const double C8882 = C8688 * C8766;
    const double C8936 = C8725 * C8766;
    const double C8890 = C8688 * C8798;
    const double C8964 = C8725 * C8798;
    const double C8976 = C8740 * C8798;
    const double C8736 = C8707 * C8734;
    const double C8765 = C8707 * C8763;
    const double C8751 = C8707 * C8749;
    const double C8784 = C8707 * C8783;
    const double C8797 = C8707 * C8795;
    const double C8807 = C8707 * C8806;
    const double C4349 = C9125 * C457;
    const double C5557 = C9125 * C743;
    const double C8587 = C8585 * C9125;
    const double C9257 = C9246 * C9125;
    const double C9256 = C9125 * C9244;
    const double C1027 = -(C9125 * C9245) / C8582;
    const double C77 =
        (-(0 * de) / C8596) / (2 * C8596) -
        ((C9272 - (C8597 * 2 * ce * de * C8597 * C9272) / C8596) * de) / C8596;
    const double C78 = (-(2 * ce * de * C8597 * C9272) / C8596) / (2 * C8596) -
                       (0 * de) / C8596;
    const double C448 = -(2 * ce * de * C8597 * C9272) / C8596;
    const double C68 = -(C9272 * C8597 * de) / C8596;
    const double C69 = C9259 * C9272;
    const double C121 = -(2 * ce * de * (yC - yD) * C9274) / C8596;
    const double C487 =
        (-(0 * de) / C8596) / (2 * C8596) -
        ((C9274 - (C8614 * 2 * ce * de * C8614 * C9274) / C8596) * de) / C8596;
    const double C488 = (-(2 * ce * de * C8614 * C9274) / C8596) / (2 * C8596) -
                        (0 * de) / C8596;
    const double C446 = -(C9274 * C8614 * de) / C8596;
    const double C447 = C9259 * C9274;
    const double C156 = -(2 * ce * de * (zC - zD) * C9273) / C8596;
    const double C805 =
        (-(0 * de) / C8596) / (2 * C8596) -
        ((C9273 - (C8621 * 2 * ce * de * C8621 * C9273) / C8596) * de) / C8596;
    const double C806 = (-(2 * ce * de * C8621 * C9273) / C8596) / (2 * C8596) -
                        (0 * de) / C8596;
    const double C733 = -(C9273 * C8621 * de) / C8596;
    const double C734 = C9259 * C9273;
    const double C202 = C9181 * C193;
    const double C2903 = C9181 * C841;
    const double C8659 = C8658 * C9181;
    const double C191 = -(2 * C8583 * (yA - yB) * C9181) / C8582;
    const double C1135 =
        ((C9181 - (C8632 * 2 * C8583 * C8632 * C9181) / C8582) * ae) / C8582 -
        (0 * be) / C8586;
    const double C1136 = (0 * ae) / C8582 - (C8583 * C8632 * C9181) / C8584;
    const double C3243 =
        (-(0 * be) / C8582) / (2 * C8582) -
        ((C9181 - (C8632 * 2 * C8583 * C8632 * C9181) / C8582) * be) / C8582;
    const double C3244 =
        (-(2 * C8583 * C8632 * C9181) / C8582) / (2 * C8582) - (0 * be) / C8582;
    const double C9263 = C9246 * C9181;
    const double C9262 = C9181 * C9252;
    const double C3137 = -(C9181 * C9254) / C8582;
    const double C329 = C9196 * C320;
    const double C1639 = C9196 * C645;
    const double C8675 = C8674 * C9196;
    const double C318 = -(2 * C8583 * (zA - zB) * C9196) / C8582;
    const double C2321 =
        ((C9196 - (C8639 * 2 * C8583 * C8639 * C9196) / C8582) * ae) / C8582 -
        (0 * be) / C8586;
    const double C2322 = (0 * ae) / C8582 - (C8583 * C8639 * C9196) / C8584;
    const double C6121 =
        (-(0 * be) / C8582) / (2 * C8582) -
        ((C9196 - (C8639 * 2 * C8583 * C8639 * C9196) / C8582) * be) / C8582;
    const double C6122 =
        (-(2 * C8583 * C8639 * C9196) / C8582) / (2 * C8582) - (0 * be) / C8582;
    const double C9265 = C9246 * C9196;
    const double C9264 = C9196 * C9253;
    const double C5915 = -(C9196 * C9255) / C8582;
    const double C85 =
        (C8690 * C8687 * C8698 + C8688 * (C8688 * C8703 + C8695 * ae) +
         C8688 * C8695 * ae) /
        C8582;
    const double C456 = (C8725 * (C8688 * C8703 + C8695 * ae)) / C8582;
    const double C742 = (C8740 * (C8688 * C8703 + C8695 * ae)) / C8582;
    const double C1386 = (C8690 * C8687 * C8698 + C8703 * C8770) / C8582;
    const double C1766 = (C8740 * C8725 * C8703) / C8582;
    const double C2760 = (C8690 * C8687 * C8698 + C8703 * C8811) / C8582;
    const double C4345 =
        (2 * C8725 * C8703 + C8725 * (C8703 + C8716 * C8770)) / C8582;
    const double C4643 = (C8740 * (C8703 + C8716 * C8770)) / C8582;
    const double C8319 =
        (2 * C8740 * C8703 + C8740 * (C8703 + C8716 * C8811)) / C8582;
    const double C93 =
        (-(ae * (C8688 * C8702 + C8695 * ce)) / C8596) / C8582 -
        ((C8695 + C8696 * C8693 * C8699) * C8697) / C8689 -
        ((C8688 * C8703 + C8695 * ae) * ce) / C8689 +
        C8688 * ((-(C8703 * ce) / C8596) / C8582 - (ae * C8702) / C8689 -
                 (C8688 * (C8693 * C8699 + C8696 * bs[4] * std::pow(C8686, 4)) *
                  C8697) /
                     C8689);
    const double C88 = -(C8688 * (C8688 * C8702 + C8695 * ce) +
                         C8690 * C8687 * C8694 + C8688 * C8695 * ce) /
                       C8596;
    const double C453 = -(C8725 * (C8688 * C8702 + C8695 * ce)) / C8596;
    const double C739 = -(C8740 * (C8688 * C8702 + C8695 * ce)) / C8596;
    const double C1384 = -(C8702 * C8770 + C8690 * C8687 * C8694) / C8596;
    const double C1764 = -(C8740 * C8725 * C8702) / C8596;
    const double C2758 = -(C8702 * C8811 + C8690 * C8687 * C8694) / C8596;
    const double C4344 = (-2 * C8725 * C8702) / C8596 -
                         (C8725 * (C8715 * C8770 + C8702)) / C8596;
    const double C4642 = -(C8740 * (C8715 * C8770 + C8702)) / C8596;
    const double C8318 = (-2 * C8740 * C8702) / C8596 -
                         (C8740 * (C8715 * C8811 + C8702)) / C8596;
    const double C8713 = C8705 * ae;
    const double C8711 = C8688 * C8705;
    const double C8710 = C8705 * ce;
    const double C8717 = C8705 + C8714;
    const double C8774 = C8705 + C8773;
    const double C8815 = C8705 + C8814;
    const double C8935 = C8725 * C8705;
    const double C8975 = C8740 * C8705;
    const double C240 =
        (-((C8705 + C8770 * C8706 * C8707) * C8697 * C8696) / C8596) / C8582 -
        ((C8695 + C8770 * C8693 * C8699) * C8697) / C8689;
    const double C407 =
        (-((C8705 + C8811 * C8706 * C8707) * C8697 * C8696) / C8596) / C8582 -
        ((C8695 + C8811 * C8693 * C8699) * C8697) / C8689;
    const double C82 = 2 * C8688 * C8695 + C8688 * (C8695 + C8705 * C8696);
    const double C449 = C8725 * (C8695 + C8705 * C8696);
    const double C735 = C8740 * (C8695 + C8705 * C8696);
    const double C4343 = 2 * C8725 * C8695 + C8725 * (C8695 + C8705 * C8770);
    const double C4641 = C8740 * (C8695 + C8705 * C8770);
    const double C8317 = 2 * C8740 * C8695 + C8740 * (C8695 + C8705 * C8811);
    const double C128 =
        (-(ae * C8688 * C8731) / C8596) / C8582 -
        (C8699 * C8693 * C8732) / C8689 +
        C8688 * ((-(C8688 * C8707 * C8706 * C8732) / C8596) / C8582 -
                 (ae * C8731) / C8689);
    const double C124 = -(C8731 * C8696 + C8690 * C8687 * C8727) / C8596;
    const double C125 = (-2 * C8688 * C8731) / C8596 -
                        (C8688 * (C8737 * C8696 + C8731)) / C8596;
    const double C489 =
        -(C8725 * (C8737 * C8696 + C8731) + (C8695 + C8705 * C8696) * ce) /
        C8596;
    const double C490 = -(C8725 * C8688 * C8731 + C8688 * C8695 * ce) / C8596;
    const double C773 = -(C8740 * (C8737 * C8696 + C8731)) / C8596;
    const double C774 = -(C8740 * C8688 * C8731) / C8596;
    const double C1436 = -(C8725 * (C8725 * C8731 + C8695 * ce) +
                           C8690 * C8687 * C8727 + C8725 * C8695 * ce) /
                         C8596;
    const double C1804 = -(C8740 * (C8725 * C8731 + C8695 * ce)) / C8596;
    const double C2810 = -(C8731 * C8811 + C8690 * C8687 * C8727) / C8596;
    const double C8355 = (-2 * C8740 * C8731) / C8596 -
                         (C8740 * (C8737 * C8811 + C8731)) / C8596;
    const double C163 =
        (-(ae * C8688 * C8746) / C8596) / C8582 -
        (C8699 * C8693 * C8747) / C8689 +
        C8688 * ((-(C8688 * C8707 * C8706 * C8747) / C8596) / C8582 -
                 (ae * C8746) / C8689);
    const double C159 = -(C8746 * C8696 + C8690 * C8687 * C8742) / C8596;
    const double C160 = (-2 * C8688 * C8746) / C8596 -
                        (C8688 * (C8752 * C8696 + C8746)) / C8596;
    const double C521 = -(C8725 * (C8752 * C8696 + C8746)) / C8596;
    const double C522 = -(C8725 * C8688 * C8746) / C8596;
    const double C807 =
        -(C8740 * (C8752 * C8696 + C8746) + (C8695 + C8705 * C8696) * ce) /
        C8596;
    const double C808 = -(C8740 * C8688 * C8746 + C8688 * C8695 * ce) / C8596;
    const double C1480 = -(C8746 * C8770 + C8690 * C8687 * C8742) / C8596;
    const double C1842 = -(C8740 * C8725 * C8746 + C8725 * C8695 * ce) / C8596;
    const double C2854 = -(C8740 * (C8740 * C8746 + C8695 * ce) +
                           C8690 * C8687 * C8742 + C8740 * C8695 * ce) /
                         C8596;
    const double C4423 = (-2 * C8725 * C8746) / C8596 -
                         (C8725 * (C8752 * C8770 + C8746)) / C8596;
    const double C4699 =
        -(C8740 * (C8752 * C8770 + C8746) + (C8695 + C8705 * C8770) * ce) /
        C8596;
    const double C198 =
        (-(C8688 * C8760 * ce) / C8596) / C8582 -
        (C8699 * C8693 * C8761) / C8689 +
        C8688 * ((-(C8688 * C8707 * C8706 * C8761) / C8596) / C8582 -
                 (C8760 * ce) / C8689);
    const double C194 = (C8690 * C8687 * C8756 + C8760 * C8696) / C8582;
    const double C195 =
        (2 * C8688 * C8760 + C8688 * (C8760 + C8766 * C8696)) / C8582;
    const double C553 =
        (C8725 * (C8760 + C8766 * C8696) + (C8695 + C8705 * C8696) * ae) /
        C8582;
    const double C554 = (C8725 * C8688 * C8760 + C8688 * C8695 * ae) / C8582;
    const double C839 = (C8740 * (C8760 + C8766 * C8696)) / C8582;
    const double C840 = (C8740 * C8688 * C8760) / C8582;
    const double C1524 =
        (C8690 * C8687 * C8756 + C8725 * (C8725 * C8760 + C8695 * ae) +
         C8725 * C8695 * ae) /
        C8582;
    const double C1880 = (C8740 * (C8725 * C8760 + C8695 * ae)) / C8582;
    const double C2898 = (C8690 * C8687 * C8756 + C8760 * C8811) / C8582;
    const double C8419 =
        (2 * C8740 * C8760 + C8740 * (C8760 + C8766 * C8811)) / C8582;
    const double C325 =
        (-(C8688 * C8792 * ce) / C8596) / C8582 -
        (C8699 * C8693 * C8793) / C8689 +
        C8688 * ((-(C8688 * C8707 * C8706 * C8793) / C8596) / C8582 -
                 (C8792 * ce) / C8689);
    const double C321 = (C8690 * C8687 * C8788 + C8792 * C8696) / C8582;
    const double C322 =
        (2 * C8688 * C8792 + C8688 * (C8792 + C8798 * C8696)) / C8582;
    const double C643 = (C8725 * (C8792 + C8798 * C8696)) / C8582;
    const double C644 = (C8725 * C8688 * C8792) / C8582;
    const double C929 =
        (C8740 * (C8792 + C8798 * C8696) + (C8695 + C8705 * C8696) * ae) /
        C8582;
    const double C930 = (C8740 * C8688 * C8792 + C8688 * C8695 * ae) / C8582;
    const double C1634 = (C8690 * C8687 * C8788 + C8792 * C8770) / C8582;
    const double C1990 = (C8740 * C8725 * C8792 + C8725 * C8695 * ae) / C8582;
    const double C3026 =
        (C8690 * C8687 * C8788 + C8740 * (C8740 * C8792 + C8695 * ae) +
         C8740 * C8695 * ae) /
        C8582;
    const double C4543 =
        (2 * C8725 * C8792 + C8725 * (C8792 + C8798 * C8770)) / C8582;
    const double C4809 =
        (C8740 * (C8792 + C8798 * C8770) + (C8695 + C8705 * C8770) * ae) /
        C8582;
    const double C204 = C9181 * C197;
    const double C245 = C9181 * C239;
    const double C285 = C9181 * C279;
    const double C288 = C9181 * C280;
    const double C331 = C9196 * C324;
    const double C372 = C9196 * C366;
    const double C375 = C9196 * C367;
    const double C412 = C9196 * C406;
    const double C4351 = C9125 * C460;
    const double C4393 = C9125 * C494;
    const double C4428 = C9125 * C526;
    const double C1641 = C9196 * C648;
    const double C1685 = C9196 * C675;
    const double C1725 = C9196 * C706;
    const double C5559 = C9125 * C746;
    const double C5602 = C9125 * C778;
    const double C5644 = C9125 * C812;
    const double C2905 = C9181 * C844;
    const double C2950 = C9181 * C873;
    const double C2990 = C9181 * C900;
    const double C5553 = (C8725 * C8703 + C8955 * C8811) / C8582;
    const double C5552 = -(C8960 * C8811 + C8725 * C8702) / C8596;
    const double C2809 = -(C8881 * C8811 + C8688 * C8731) / C8596;
    const double C1479 = -(C8884 * C8770 + C8688 * C8746) / C8596;
    const double C1917 =
        (-(C8740 * C8882 * ce) / C8596) / C8582 - (ae * C8740 * C8881) / C8689 -
        (C8725 * C8740 * C8688 *
         (C8706 * C8707 + C8770 * bs[5] * std::pow(C8692, 5)) * C8697) /
            C8689;
    const double C2897 = (C8688 * C8760 + C8882 * C8811) / C8582;
    const double C2064 =
        (-(C8725 * C8890 * ce) / C8596) / C8582 - (ae * C8725 * C8884) / C8689 -
        (C8740 * C8725 * C8688 *
         (C8706 * C8707 + C8811 * bs[5] * std::pow(C8692, 5)) * C8697) /
            C8689;
    const double C1633 = (C8688 * C8792 + C8890 * C8770) / C8582;
    const double C129 =
        2 * ((-(C8688 * C8736) / C8596) / C8582 - (ae * C8731) / C8689) -
        (ae * (C8737 * C8696 + C8731)) / C8689 +
        C8688 *
            ((-(ae * C8688 * C8737) / C8596) / C8582 - C8736 / C8689 +
             C8688 * ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8732) / C8596) /
                          C8582 -
                      (ae * C8737) / C8689));
    const double C493 =
        C8725 * ((-(C8688 * C8736) / C8596) / C8582 - (ae * C8731) / C8689) -
        ((C8688 * C8703 + C8695 * ae) * ce) / C8689;
    const double C776 =
        C8740 *
        ((-(ae * C8688 * C8737) / C8596) / C8582 - C8736 / C8689 +
         C8688 *
             ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8732) / C8596) / C8582 -
              (ae * C8737) / C8689));
    const double C777 =
        C8740 * ((-(C8688 * C8736) / C8596) / C8582 - (ae * C8731) / C8689);
    const double C1438 =
        (-(C8725 * C8703 * ce) / C8596) / C8582 -
        (C8699 * C8693 * C8732) / C8689 +
        C8725 * ((-(C8725 * C8736) / C8596) / C8582 - (C8703 * ce) / C8689);
    const double C1806 =
        C8740 * ((-(C8725 * C8736) / C8596) / C8582 - (C8703 * ce) / C8689);
    const double C2811 =
        (-(C8688 * C8736) / C8596) / C8582 - (ae * C8731) / C8689 +
        ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8732) / C8596) / C8582 -
         (ae * C8737) / C8689) *
            C8811;
    const double C2812 =
        (-(C8736 * C8811) / C8596) / C8582 - (C8699 * C8693 * C8732) / C8689;
    const double C4390 =
        2 * ((-(C8725 * C8736) / C8596) / C8582 - (C8703 * ce) / C8689) -
        ((C8703 + C8716 * C8770) * ce) / C8689 +
        C8725 *
            ((-(C8725 * C8716 * ce) / C8596) / C8582 - C8736 / C8689 +
             C8725 * ((-(C8725 * std::pow(C8692, 5) * bs[5] * C8732) / C8596) /
                          C8582 -
                      (C8716 * ce) / C8689));
    const double C4672 =
        C8740 *
        ((-(C8725 * C8716 * ce) / C8596) / C8582 - C8736 / C8689 +
         C8725 *
             ((-(C8725 * std::pow(C8692, 5) * bs[5] * C8732) / C8596) / C8582 -
              (C8716 * ce) / C8689));
    const double C5598 =
        (-(C8725 * C8736) / C8596) / C8582 - (C8703 * ce) / C8689 +
        ((-(C8725 * std::pow(C8692, 5) * bs[5] * C8732) / C8596) / C8582 -
         (C8716 * ce) / C8689) *
            C8811;
    const double C8356 =
        (-2 * C8740 * C8736) / C8689 +
        C8740 *
            ((-(std::pow(C8692, 5) * bs[5] * C8732 * C8811) / C8596) / C8582 -
             C8736 / C8689);
    const double C199 =
        2 * ((-(C8688 * C8765) / C8596) / C8582 - (C8760 * ce) / C8689) -
        ((C8760 + C8766 * C8696) * ce) / C8689 +
        C8688 *
            ((-(C8688 * C8766 * ce) / C8596) / C8582 - C8765 / C8689 +
             C8688 * ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8761) / C8596) /
                          C8582 -
                      (C8766 * ce) / C8689));
    const double C557 =
        C8725 * ((-(C8688 * C8765) / C8596) / C8582 - (C8760 * ce) / C8689) -
        (ae * (C8688 * C8702 + C8695 * ce)) / C8689;
    const double C842 =
        C8740 *
        ((-(C8688 * C8766 * ce) / C8596) / C8582 - C8765 / C8689 +
         C8688 *
             ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8761) / C8596) / C8582 -
              (C8766 * ce) / C8689));
    const double C843 =
        C8740 * ((-(C8688 * C8765) / C8596) / C8582 - (C8760 * ce) / C8689);
    const double C1526 =
        (-(ae * C8725 * C8702) / C8596) / C8582 -
        (C8699 * C8693 * C8761) / C8689 +
        C8725 * ((-(C8725 * C8765) / C8596) / C8582 - (ae * C8702) / C8689);
    const double C1882 = (-(C8725 * C8740 * C8765) / C8596) / C8582 -
                         (ae * C8740 * C8702) / C8689;
    const double C2899 =
        (-(C8688 * C8765) / C8596) / C8582 - (C8760 * ce) / C8689 +
        ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8761) / C8596) / C8582 -
         (C8766 * ce) / C8689) *
            C8811;
    const double C2900 =
        (-(C8765 * C8811) / C8596) / C8582 - (C8699 * C8693 * C8761) / C8689;
    const double C4462 =
        2 * ((-(C8725 * C8765) / C8596) / C8582 - (ae * C8702) / C8689) -
        (ae * (C8715 * C8770 + C8702)) / C8689 +
        C8725 *
            ((-(ae * C8725 * C8715) / C8596) / C8582 - C8765 / C8689 +
             C8725 * ((-(C8725 * std::pow(C8692, 5) * bs[5] * C8761) / C8596) /
                          C8582 -
                      (ae * C8715) / C8689));
    const double C4728 =
        (-(ae * C8740 * C8725 * C8715) / C8596) / C8582 -
        (C8740 * C8765) / C8689 +
        C8725 *
            ((-(C8725 * C8740 * std::pow(C8692, 5) * bs[5] * C8761) / C8596) /
                 C8582 -
             (ae * C8740 * C8715) / C8689);
    const double C5680 =
        C8725 *
            ((-(std::pow(C8692, 5) * bs[5] * C8761 * C8811) / C8596) / C8582 -
             C8765 / C8689) -
        (ae * (C8715 * C8811 + C8702)) / C8689;
    const double C8420 =
        (-2 * C8740 * C8765) / C8689 +
        C8740 *
            ((-(std::pow(C8692, 5) * bs[5] * C8761 * C8811) / C8596) / C8582 -
             C8765 / C8689);
    const double C164 =
        2 * ((-(C8688 * C8751) / C8596) / C8582 - (ae * C8746) / C8689) -
        (ae * (C8752 * C8696 + C8746)) / C8689 +
        C8688 *
            ((-(ae * C8688 * C8752) / C8596) / C8582 - C8751 / C8689 +
             C8688 * ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8747) / C8596) /
                          C8582 -
                      (ae * C8752) / C8689));
    const double C524 =
        C8725 *
        ((-(ae * C8688 * C8752) / C8596) / C8582 - C8751 / C8689 +
         C8688 *
             ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8747) / C8596) / C8582 -
              (ae * C8752) / C8689));
    const double C525 =
        C8725 * ((-(C8688 * C8751) / C8596) / C8582 - (ae * C8746) / C8689);
    const double C811 =
        C8740 * ((-(C8688 * C8751) / C8596) / C8582 - (ae * C8746) / C8689) -
        ((C8688 * C8703 + C8695 * ae) * ce) / C8689;
    const double C1481 =
        (-(C8688 * C8751) / C8596) / C8582 - (ae * C8746) / C8689 +
        ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8747) / C8596) / C8582 -
         (ae * C8752) / C8689) *
            C8770;
    const double C1482 =
        (-(C8751 * C8770) / C8596) / C8582 - (C8699 * C8693 * C8747) / C8689;
    const double C1844 = (-(C8740 * C8725 * C8751) / C8596) / C8582 -
                         (C8725 * C8703 * ce) / C8689;
    const double C2856 =
        (-(C8740 * C8703 * ce) / C8596) / C8582 -
        (C8699 * C8693 * C8747) / C8689 +
        C8740 * ((-(C8740 * C8751) / C8596) / C8582 - (C8703 * ce) / C8689);
    const double C4424 =
        (-2 * C8725 * C8751) / C8689 +
        C8725 *
            ((-(std::pow(C8692, 5) * bs[5] * C8747 * C8770) / C8596) / C8582 -
             C8751 / C8689);
    const double C4700 =
        C8740 *
            ((-(std::pow(C8692, 5) * bs[5] * C8747 * C8770) / C8596) / C8582 -
             C8751 / C8689) -
        ((C8703 + C8716 * C8770) * ce) / C8689;
    const double C5641 =
        (-(C8740 * C8955 * ce) / C8596) / C8582 - (C8725 * C8751) / C8689 +
        C8740 *
            ((-(C8740 * C8725 * std::pow(C8692, 5) * bs[5] * C8747) / C8596) /
                 C8582 -
             (C8955 * ce) / C8689);
    const double C8389 =
        2 * ((-(C8740 * C8751) / C8596) / C8582 - (C8703 * ce) / C8689) -
        ((C8703 + C8716 * C8811) * ce) / C8689 +
        C8740 *
            ((-(C8740 * C8716 * ce) / C8596) / C8582 - C8751 / C8689 +
             C8740 * ((-(C8740 * std::pow(C8692, 5) * bs[5] * C8747) / C8596) /
                          C8582 -
                      (C8716 * ce) / C8689));
    const double C281 =
        (-2 * C8688 * C8784) / C8689 +
        C8688 *
            ((-(std::pow(C8692, 5) * bs[5] * C8781 * C8696) / C8596) / C8582 -
             C8784 / C8689);
    const double C614 =
        C8725 *
            ((-(std::pow(C8692, 5) * bs[5] * C8781 * C8696) / C8596) / C8582 -
             C8784 / C8689) -
        (ae * (C8752 * C8696 + C8746)) / C8689;
    const double C615 = (-(C8725 * C8688 * C8784) / C8596) / C8582 -
                        (ae * C8688 * C8746) / C8689;
    const double C901 = (-(C8740 * C8688 * C8784) / C8596) / C8582 -
                        (C8688 * C8760 * ce) / C8689;
    const double C902 =
        C8740 *
            ((-(std::pow(C8692, 5) * bs[5] * C8781 * C8696) / C8596) / C8582 -
             C8784 / C8689) -
        ((C8760 + C8766 * C8696) * ce) / C8689;
    const double C1597 =
        (-(ae * C8725 * C8884) / C8596) / C8582 - (C8688 * C8784) / C8689 +
        C8725 *
            ((-(C8725 * C8688 * std::pow(C8692, 5) * bs[5] * C8781) / C8596) /
                 C8582 -
             (ae * C8884) / C8689);
    const double C1598 =
        (-(ae * C8725 * C8746) / C8596) / C8582 -
        (C8699 * C8693 * C8781) / C8689 +
        C8725 * ((-(C8725 * C8784) / C8596) / C8582 - (ae * C8746) / C8689);
    const double C1953 =
        C8725 * ((-(C8740 * C8784) / C8596) / C8582 - (C8760 * ce) / C8689) -
        (ae * (C8740 * C8746 + C8695 * ce)) / C8689;
    const double C2986 =
        (-(C8740 * C8760 * ce) / C8596) / C8582 -
        (C8699 * C8693 * C8781) / C8689 +
        C8740 * ((-(C8740 * C8784) / C8596) / C8582 - (C8760 * ce) / C8689);
    const double C2987 =
        (-(C8740 * C8882 * ce) / C8596) / C8582 - (C8688 * C8784) / C8689 +
        C8740 *
            ((-(C8740 * C8688 * std::pow(C8692, 5) * bs[5] * C8781) / C8596) /
                 C8582 -
             (C8882 * ce) / C8689);
    const double C4516 =
        2 * ((-(C8725 * C8784) / C8596) / C8582 - (ae * C8746) / C8689) -
        (ae * (C8752 * C8770 + C8746)) / C8689 +
        C8725 *
            ((-(ae * C8725 * C8752) / C8596) / C8582 - C8784 / C8689 +
             C8725 * ((-(C8725 * std::pow(C8692, 5) * bs[5] * C8781) / C8596) /
                          C8582 -
                      (ae * C8752) / C8689));
    const double C8487 =
        2 * ((-(C8740 * C8784) / C8596) / C8582 - (C8760 * ce) / C8689) -
        ((C8760 + C8766 * C8811) * ce) / C8689 +
        C8740 *
            ((-(C8740 * C8766 * ce) / C8596) / C8582 - C8784 / C8689 +
             C8740 * ((-(C8740 * std::pow(C8692, 5) * bs[5] * C8781) / C8596) /
                          C8582 -
                      (C8766 * ce) / C8689));
    const double C326 =
        2 * ((-(C8688 * C8797) / C8596) / C8582 - (C8792 * ce) / C8689) -
        ((C8792 + C8798 * C8696) * ce) / C8689 +
        C8688 *
            ((-(C8688 * C8798 * ce) / C8596) / C8582 - C8797 / C8689 +
             C8688 * ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8793) / C8596) /
                          C8582 -
                      (C8798 * ce) / C8689));
    const double C646 =
        C8725 *
        ((-(C8688 * C8798 * ce) / C8596) / C8582 - C8797 / C8689 +
         C8688 *
             ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8793) / C8596) / C8582 -
              (C8798 * ce) / C8689));
    const double C647 =
        C8725 * ((-(C8688 * C8797) / C8596) / C8582 - (C8792 * ce) / C8689);
    const double C933 =
        C8740 * ((-(C8688 * C8797) / C8596) / C8582 - (C8792 * ce) / C8689) -
        (ae * (C8688 * C8702 + C8695 * ce)) / C8689;
    const double C1635 =
        (-(C8688 * C8797) / C8596) / C8582 - (C8792 * ce) / C8689 +
        ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8793) / C8596) / C8582 -
         (C8798 * ce) / C8689) *
            C8770;
    const double C1636 =
        (-(C8797 * C8770) / C8596) / C8582 - (C8699 * C8693 * C8793) / C8689;
    const double C1992 = (-(C8740 * C8725 * C8797) / C8596) / C8582 -
                         (ae * C8725 * C8702) / C8689;
    const double C3028 =
        (-(ae * C8740 * C8702) / C8596) / C8582 -
        (C8699 * C8693 * C8793) / C8689 +
        C8740 * ((-(C8740 * C8797) / C8596) / C8582 - (ae * C8702) / C8689);
    const double C4544 =
        (-2 * C8725 * C8797) / C8689 +
        C8725 *
            ((-(std::pow(C8692, 5) * bs[5] * C8793 * C8770) / C8596) / C8582 -
             C8797 / C8689);
    const double C4810 =
        C8740 *
            ((-(std::pow(C8692, 5) * bs[5] * C8793 * C8770) / C8596) / C8582 -
             C8797 / C8689) -
        (ae * (C8715 * C8770 + C8702)) / C8689;
    const double C5810 =
        (-(ae * C8740 * C8960) / C8596) / C8582 - (C8725 * C8797) / C8689 +
        C8740 *
            ((-(C8740 * C8725 * std::pow(C8692, 5) * bs[5] * C8793) / C8596) /
                 C8582 -
             (ae * C8960) / C8689);
    const double C8518 =
        2 * ((-(C8740 * C8797) / C8596) / C8582 - (ae * C8702) / C8689) -
        (ae * (C8715 * C8811 + C8702)) / C8689 +
        C8740 *
            ((-(ae * C8740 * C8715) / C8596) / C8582 - C8797 / C8689 +
             C8740 * ((-(C8740 * std::pow(C8692, 5) * bs[5] * C8793) / C8596) /
                          C8582 -
                      (ae * C8715) / C8689));
    const double C368 =
        (-2 * C8688 * C8807) / C8689 +
        C8688 *
            ((-(std::pow(C8692, 5) * bs[5] * C8804 * C8696) / C8596) / C8582 -
             C8807 / C8689);
    const double C676 = (-(C8725 * C8688 * C8807) / C8596) / C8582 -
                        (C8688 * C8792 * ce) / C8689;
    const double C677 =
        C8725 *
            ((-(std::pow(C8692, 5) * bs[5] * C8804 * C8696) / C8596) / C8582 -
             C8807 / C8689) -
        ((C8792 + C8798 * C8696) * ce) / C8689;
    const double C961 =
        C8740 *
            ((-(std::pow(C8692, 5) * bs[5] * C8804 * C8696) / C8596) / C8582 -
             C8807 / C8689) -
        (ae * (C8737 * C8696 + C8731)) / C8689;
    const double C962 = (-(C8740 * C8688 * C8807) / C8596) / C8582 -
                        (ae * C8688 * C8731) / C8689;
    const double C1681 =
        (-(C8725 * C8792 * ce) / C8596) / C8582 -
        (C8699 * C8693 * C8804) / C8689 +
        C8725 * ((-(C8725 * C8807) / C8596) / C8582 - (C8792 * ce) / C8689);
    const double C1682 =
        (-(C8725 * C8890 * ce) / C8596) / C8582 - (C8688 * C8807) / C8689 +
        C8725 *
            ((-(C8725 * C8688 * std::pow(C8692, 5) * bs[5] * C8804) / C8596) /
                 C8582 -
             (C8890 * ce) / C8689);
    const double C2028 =
        C8740 * ((-(C8725 * C8807) / C8596) / C8582 - (C8792 * ce) / C8689) -
        (ae * (C8725 * C8731 + C8695 * ce)) / C8689;
    const double C3063 =
        (-(ae * C8740 * C8881) / C8596) / C8582 - (C8688 * C8807) / C8689 +
        C8740 *
            ((-(C8740 * C8688 * std::pow(C8692, 5) * bs[5] * C8804) / C8596) /
                 C8582 -
             (ae * C8881) / C8689);
    const double C3064 =
        (-(ae * C8740 * C8731) / C8596) / C8582 -
        (C8699 * C8693 * C8804) / C8689 +
        C8740 * ((-(C8740 * C8807) / C8596) / C8582 - (ae * C8731) / C8689);
    const double C4579 =
        2 * ((-(C8725 * C8807) / C8596) / C8582 - (C8792 * ce) / C8689) -
        ((C8792 + C8798 * C8770) * ce) / C8689 +
        C8725 *
            ((-(C8725 * C8798 * ce) / C8596) / C8582 - C8807 / C8689 +
             C8725 * ((-(C8725 * std::pow(C8692, 5) * bs[5] * C8804) / C8596) /
                          C8582 -
                      (C8798 * ce) / C8689));
    const double C8545 =
        2 * ((-(C8740 * C8807) / C8596) / C8582 - (ae * C8731) / C8689) -
        (ae * (C8737 * C8811 + C8731)) / C8689 +
        C8740 *
            ((-(ae * C8740 * C8737) / C8596) / C8582 - C8807 / C8689 +
             C8740 * ((-(C8740 * std::pow(C8692, 5) * bs[5] * C8804) / C8596) /
                          C8582 -
                      (ae * C8737) / C8689));
    const double C76 =
        ((0 * ae) / C8582 - C8587 / C8584) / (2 * C8582) - (0 * be) / C8582;
    const double C1031 = (-C8581 / C8582) / (2 * C8582) -
                         ((C9125 - (C8580 * 2 * C8587) / C8582) * be) / C8582;
    const double C1032 =
        (-(2 * C8587) / C8582) / (2 * C8582) - (0 * be) / C8582;
    const double C3139 =
        ((C9125 - (C8580 * 2 * C8587) / C8582) * ae) / C8582 - C8581 / C8586;
    const double C3140 = (0 * ae) / C8582 - C8587 / C8584;
    const double C4105 = -(2 * C8587) / C8582;
    const double C75 =
        (((C9125 - (C8580 * 2 * C8587) / C8582) * ae) / C8582 - C8581 / C8586) /
            (2 * C8582) -
        ((C8580 * ((0 * ae) / C8582 - C8587 / C8584) + C9257) * be) / C8582;
    const double C67 = C9257 / C9130;
    const double C65 = C9125 / C9130 - (C9256 * C9245) / C8584;
    const double C66 = C9256 / C8586 - (C9257 * C9245) / C8582;
    const double C3135 = C9256 / C8582;
    const double C1395 = C1027 * C460;
    const double C1391 = C1027 * C457;
    const double C1443 = C1027 * C494;
    const double C1485 = C1027 * C526;
    const double C2769 = C1027 * C746;
    const double C2765 = C1027 * C743;
    const double C2815 = C1027 * C778;
    const double C2861 = C1027 * C812;
    const double C4186 =
        ((0 * ae) / C8582 - C8659 / C8584) / (2 * C8582) - (0 * be) / C8582;
    const double C205 = C191 * C81;
    const double C203 = C191 * C87;
    const double C201 = C191 * C80;
    const double C244 = C191 * C123;
    const double C284 = C191 * C158;
    const double C2204 = C191 * C736;
    const double C2904 = C191 * C740;
    const double C2902 = C191 * C737;
    const double C2949 = C191 * C775;
    const double C2989 = C191 * C809;
    const double C8422 = C191 * C2756;
    const double C1144 = C1135 * C87;
    const double C1140 = C1135 * C80;
    const double C1184 = C1135 * C123;
    const double C1224 = C1135 * C158;
    const double C7628 = C1135 * C740;
    const double C7624 = C1135 * C737;
    const double C7670 = C1135 * C775;
    const double C7712 = C1135 * C809;
    const double C1138 = C1136 * C450;
    const double C7626 = C1136 * C1762;
    const double C3252 = C3243 * C87;
    const double C3248 = C3243 * C80;
    const double C3292 = C3243 * C123;
    const double C3332 = C3243 * C158;
    const double C5686 = C3243 * C740;
    const double C5682 = C3243 * C737;
    const double C5729 = C3243 * C775;
    const double C5772 = C3243 * C809;
    const double C3246 = C3244 * C450;
    const double C5684 = C3244 * C1762;
    const double C4185 =
        (((C9181 - (C8632 * 2 * C8659) / C8582) * ae) / C8582 - C8657 / C8586) /
            (2 * C8582) -
        ((C8632 * ((0 * ae) / C8582 - C8659 / C8584) + C9263) * be) / C8582;
    const double C4104 = C9263 / C9130;
    const double C1029 = C9262 / C8582;
    const double C4102 = C9181 / C9130 - (C9262 * C9254) / C8584;
    const double C4103 = C9262 / C8586 - (C9263 * C9254) / C8582;
    const double C3253 = C3137 * C197;
    const double C3249 = C3137 * C193;
    const double C3293 = C3137 * C239;
    const double C3333 = C3137 * C279;
    const double C5687 = C3137 * C844;
    const double C5683 = C3137 * C841;
    const double C5730 = C3137 * C873;
    const double C5773 = C3137 * C900;
    const double C8004 =
        ((0 * ae) / C8582 - C8675 / C8584) / (2 * C8582) - (0 * be) / C8582;
    const double C332 = C318 * C81;
    const double C330 = C318 * C87;
    const double C328 = C318 * C80;
    const double C371 = C318 * C123;
    const double C411 = C318 * C158;
    const double C1264 = C318 * C450;
    const double C1640 = C318 * C454;
    const double C1638 = C318 * C451;
    const double C1684 = C318 * C491;
    const double C1724 = C318 * C523;
    const double C4546 = C318 * C1382;
    const double C2330 = C2321 * C87;
    const double C2326 = C2321 * C80;
    const double C2370 = C2321 * C123;
    const double C2410 = C2321 * C158;
    const double C5430 = C2321 * C454;
    const double C5426 = C2321 * C451;
    const double C5474 = C2321 * C491;
    const double C5512 = C2321 * C523;
    const double C2324 = C2322 * C736;
    const double C5428 = C2322 * C1762;
    const double C6130 = C6121 * C87;
    const double C6126 = C6121 * C80;
    const double C6170 = C6121 * C123;
    const double C6210 = C6121 * C158;
    const double C7400 = C6121 * C454;
    const double C7396 = C6121 * C451;
    const double C7444 = C6121 * C491;
    const double C7482 = C6121 * C523;
    const double C6124 = C6122 * C736;
    const double C7398 = C6122 * C1762;
    const double C8003 =
        (((C9196 - (C8639 * 2 * C8675) / C8582) * ae) / C8582 - C8673 / C8586) /
            (2 * C8582) -
        ((C8639 * ((0 * ae) / C8582 - C8675 / C8584) + C9265) * be) / C8582;
    const double C7845 = C9265 / C9130;
    const double C2099 = C9264 / C8582;
    const double C7843 = C9196 / C9130 - (C9264 * C9255) / C8584;
    const double C7844 = C9264 / C8586 - (C9265 * C9255) / C8582;
    const double C6131 = C5915 * C324;
    const double C6127 = C5915 * C320;
    const double C6171 = C5915 * C366;
    const double C6211 = C5915 * C406;
    const double C7401 = C5915 * C648;
    const double C7397 = C5915 * C645;
    const double C7445 = C5915 * C675;
    const double C7483 = C5915 * C706;
    const double C1393 = C9257 * C456;
    const double C3477 = C9257 * C456;
    const double C2767 = C9257 * C742;
    const double C6559 = C9257 * C742;
    const double C4353 = C9125 * C1386;
    const double C5207 = C9125 * C1766;
    const double C8323 = C9125 * C2760;
    const double C207 = C191 * C88;
    const double C334 = C318 * C88;
    const double C1142 = C1136 * C453;
    const double C1266 = C318 * C453;
    const double C3250 = C3244 * C453;
    const double C2206 = C191 * C739;
    const double C2328 = C2322 * C739;
    const double C6128 = C6122 * C739;
    const double C4548 = C318 * C1384;
    const double C5432 = C2322 * C1764;
    const double C5688 = C3244 * C1764;
    const double C7402 = C6122 * C1764;
    const double C7630 = C1136 * C1764;
    const double C8424 = C191 * C2758;
    const double C8722 = C8719 + C8713;
    const double C8938 = C8936 + C8713;
    const double C8978 = C8976 + C8713;
    const double C1954 =
        C8725 *
            ((-(C8740 * C8688 * std::pow(C8692, 5) * bs[5] * C8781) / C8596) /
                 C8582 -
             (C8882 * ce) / C8689) -
        (ae * (C8740 * C8884 + C8711 * ce)) / C8689;
    const double C2027 =
        C8740 *
            ((-(C8725 * C8688 * std::pow(C8692, 5) * bs[5] * C8804) / C8596) /
                 C8582 -
             (C8890 * ce) / C8689) -
        (ae * (C8725 * C8881 + C8711 * ce)) / C8689;
    const double C1435 = -(C8725 * (C8725 * C8881 + C8711 * ce) +
                           C8688 * C8731 + C8725 * C8711 * ce) /
                         C8596;
    const double C1523 = (C8688 * C8760 + C8725 * (C8725 * C8882 + C8711 * ae) +
                          C8725 * C8711 * ae) /
                         C8582;
    const double C1803 = -(C8740 * (C8725 * C8881 + C8711 * ce)) / C8596;
    const double C1841 = -(C8740 * C8725 * C8884 + C8725 * C8711 * ce) / C8596;
    const double C1879 = (C8740 * (C8725 * C8882 + C8711 * ae)) / C8582;
    const double C1989 = (C8740 * C8725 * C8890 + C8725 * C8711 * ae) / C8582;
    const double C2853 = -(C8740 * (C8740 * C8884 + C8711 * ce) +
                           C8688 * C8746 + C8740 * C8711 * ce) /
                         C8596;
    const double C3025 = (C8688 * C8792 + C8740 * (C8740 * C8890 + C8711 * ae) +
                          C8740 * C8711 * ae) /
                         C8582;
    const double C1381 = C8688 * C8695 + C8711 * C8770;
    const double C1761 = C8740 * C8725 * C8711;
    const double C2755 = C8688 * C8695 + C8711 * C8811;
    const double C8721 = C8718 + C8710;
    const double C8937 = C8934 + C8710;
    const double C8977 = C8974 + C8710;
    const double C5768 =
        C8725 *
            ((-(C8740 * C8766 * ce) / C8596) / C8582 - C8784 / C8689 +
             C8740 * ((-(C8740 * std::pow(C8692, 5) * bs[5] * C8781) / C8596) /
                          C8582 -
                      (C8766 * ce) / C8689)) -
        (ae * (C8740 * (C8740 * C8752 + C8710) + C8746 + C8740 * C8705 * ce)) /
            C8689;
    const double C8720 = C8717 * C8697;
    const double C8775 = C8774 * C8697;
    const double C8816 = C8815 * C8697;
    const double C4782 =
        (-(C8740 * C8784) / C8596) / C8582 - (C8760 * ce) / C8689 -
        (ae * (C8740 * C8725 * C8752 + C8935 * ce)) / C8689 +
        C8725 *
            (C8725 * ((-(C8740 * std::pow(C8692, 5) * bs[5] * C8781) / C8596) /
                          C8582 -
                      (C8766 * ce) / C8689) -
             (ae * (C8740 * C8752 + C8710)) / C8689);
    const double C5640 = -(C8740 * (C8740 * C8963 + C8935 * ce) +
                           C8725 * C8746 + C8740 * C8935 * ce) /
                         C8596;
    const double C5809 = (C8725 * C8792 + C8740 * (C8740 * C8964 + C8935 * ae) +
                          C8740 * C8935 * ae) /
                         C8582;
    const double C5551 = C8725 * C8695 + C8935 * C8811;
    const double C248 = C9181 * C240;
    const double C415 = C9196 * C407;
    const double C247 = C191 * C124;
    const double C374 = C318 * C124;
    const double C1186 = C1136 * C490;
    const double C1305 = C318 * C490;
    const double C3294 = C3244 * C490;
    const double C2245 = C191 * C774;
    const double C2372 = C2322 * C774;
    const double C6172 = C6122 * C774;
    const double C4581 = C318 * C1436;
    const double C5472 = C2322 * C1804;
    const double C5731 = C3244 * C1804;
    const double C7442 = C6122 * C1804;
    const double C7672 = C1136 * C1804;
    const double C8458 = C191 * C2810;
    const double C287 = C191 * C159;
    const double C414 = C318 * C159;
    const double C1226 = C1136 * C522;
    const double C1344 = C318 * C522;
    const double C3334 = C3244 * C522;
    const double C2284 = C191 * C808;
    const double C2412 = C2322 * C808;
    const double C6212 = C6122 * C808;
    const double C4612 = C318 * C1480;
    const double C5514 = C2322 * C1842;
    const double C5770 = C3244 * C1842;
    const double C7484 = C6122 * C1842;
    const double C7710 = C1136 * C1842;
    const double C8489 = C191 * C2854;
    const double C208 = C9181 * C198;
    const double C206 = C9181 * C194;
    const double C1139 = C9263 * C554;
    const double C3247 = C9263 * C554;
    const double C2205 = C9181 * C840;
    const double C5685 = C9263 * C1880;
    const double C7627 = C9263 * C1880;
    const double C8423 = C9181 * C2898;
    const double C335 = C9196 * C325;
    const double C333 = C9196 * C321;
    const double C1265 = C9196 * C644;
    const double C2325 = C9265 * C930;
    const double C6125 = C9265 * C930;
    const double C4547 = C9196 * C1634;
    const double C5429 = C9265 * C1990;
    const double C7399 = C9265 * C1990;
    const double C1441 = C9257 * C493;
    const double C3521 = C9257 * C493;
    const double C2817 = C9257 * C777;
    const double C6605 = C9257 * C777;
    const double C4395 = C9125 * C1438;
    const double C5249 = C9125 * C1806;
    const double C8360 = C9125 * C2812;
    const double C1143 = C9263 * C557;
    const double C3251 = C9263 * C557;
    const double C2207 = C9181 * C843;
    const double C5689 = C9263 * C1882;
    const double C7631 = C9263 * C1882;
    const double C8425 = C9181 * C2900;
    const double C1487 = C9257 * C525;
    const double C3563 = C9257 * C525;
    const double C2859 = C9257 * C811;
    const double C6643 = C9257 * C811;
    const double C4431 = C9125 * C1482;
    const double C5287 = C9125 * C1844;
    const double C8392 = C9125 * C2856;
    const double C1227 = C9263 * C615;
    const double C3335 = C9263 * C615;
    const double C2285 = C9181 * C901;
    const double C5771 = C9263 * C1953;
    const double C7711 = C9263 * C1953;
    const double C8490 = C9181 * C2986;
    const double C1267 = C9196 * C647;
    const double C2329 = C9265 * C933;
    const double C6129 = C9265 * C933;
    const double C4549 = C9196 * C1636;
    const double C5433 = C9265 * C1992;
    const double C7403 = C9265 * C1992;
    const double C1306 = C9196 * C676;
    const double C2373 = C9265 * C962;
    const double C6173 = C9265 * C962;
    const double C4582 = C9196 * C1681;
    const double C5473 = C9265 * C2028;
    const double C7443 = C9265 * C2028;
    const double C1394 = C1031 * C454;
    const double C1390 = C1031 * C451;
    const double C1442 = C1031 * C491;
    const double C1484 = C1031 * C523;
    const double C2768 = C1031 * C740;
    const double C2764 = C1031 * C737;
    const double C2814 = C1031 * C775;
    const double C2860 = C1031 * C809;
    const double C1396 = C1032 * C453;
    const double C1392 = C1032 * C450;
    const double C1440 = C1032 * C490;
    const double C1486 = C1032 * C522;
    const double C2770 = C1032 * C739;
    const double C2766 = C1032 * C736;
    const double C2816 = C1032 * C774;
    const double C2858 = C1032 * C808;
    const double C3478 = C3139 * C454;
    const double C3474 = C3139 * C451;
    const double C3522 = C3139 * C491;
    const double C3560 = C3139 * C523;
    const double C6560 = C3139 * C740;
    const double C6556 = C3139 * C737;
    const double C6602 = C3139 * C775;
    const double C6644 = C3139 * C809;
    const double C3480 = C3140 * C453;
    const double C3476 = C3140 * C450;
    const double C3520 = C3140 * C490;
    const double C3562 = C3140 * C522;
    const double C6562 = C3140 * C739;
    const double C6558 = C3140 * C736;
    const double C6604 = C3140 * C774;
    const double C6642 = C3140 * C808;
    const double C4354 = C4105 * C1384;
    const double C4352 = C4105 * C1382;
    const double C4350 = C4105 * C454;
    const double C4348 = C4105 * C451;
    const double C4394 = C4105 * C1436;
    const double C4392 = C4105 * C491;
    const double C4430 = C4105 * C1480;
    const double C4427 = C4105 * C523;
    const double C5208 = C4105 * C1764;
    const double C5206 = C4105 * C1762;
    const double C5248 = C4105 * C1804;
    const double C5286 = C4105 * C1842;
    const double C5558 = C4105 * C740;
    const double C5556 = C4105 * C737;
    const double C5601 = C4105 * C775;
    const double C5643 = C4105 * C809;
    const double C8324 = C4105 * C2758;
    const double C8322 = C4105 * C2756;
    const double C8359 = C4105 * C2810;
    const double C8391 = C4105 * C2854;
    const double C3479 = C3135 * C460;
    const double C3475 = C3135 * C457;
    const double C3523 = C3135 * C494;
    const double C3561 = C3135 * C526;
    const double C6561 = C3135 * C746;
    const double C6557 = C3135 * C743;
    const double C6603 = C3135 * C778;
    const double C6645 = C3135 * C812;
    const double C74 =
        (((0 - (C8580 * C8581) / C8582) * ae) / C8582 - (0 * be) / C8586) /
            (2 * C8582) -
        ((C8580 * (((C9125 - (C8580 * 2 * C8587) / C8582) * ae) / C8582 -
                   C8581 / C8586) +
          C3135) *
         be) /
            C8582 +
        (0 * ae) / C8582 - C8587 / C8584;
    const double C210 = C203 + C204;
    const double C209 = C201 + C202;
    const double C249 = C244 + C245;
    const double C289 = C284 + C285;
    const double C2909 = C2904 + C2905;
    const double C2908 = C2902 + C2903;
    const double C2951 = C2949 + C2950;
    const double C2991 = C2989 + C2990;
    const double C1145 = C1029 * C197;
    const double C1141 = C1029 * C193;
    const double C1185 = C1029 * C239;
    const double C1225 = C1029 * C279;
    const double C7629 = C1029 * C844;
    const double C7625 = C1029 * C841;
    const double C7671 = C1029 * C873;
    const double C7713 = C1029 * C900;
    const double C4184 =
        (((0 - (C8632 * C8657) / C8582) * ae) / C8582 - (0 * be) / C8586) /
            (2 * C8582) -
        ((C8632 * (((C9181 - (C8632 * 2 * C8659) / C8582) * ae) / C8582 -
                   C8657 / C8586) +
          C1029) *
         be) /
            C8582 +
        (0 * ae) / C8582 - C8659 / C8584;
    const double C3257 = C3252 + C3253;
    const double C3255 = C3248 + C3249;
    const double C3296 = C3292 + C3293;
    const double C3336 = C3332 + C3333;
    const double C5692 = C5686 + C5687;
    const double C5690 = C5682 + C5683;
    const double C5733 = C5729 + C5730;
    const double C5775 = C5772 + C5773;
    const double C337 = C330 + C331;
    const double C336 = C328 + C329;
    const double C376 = C371 + C372;
    const double C416 = C411 + C412;
    const double C1645 = C1640 + C1641;
    const double C1644 = C1638 + C1639;
    const double C1686 = C1684 + C1685;
    const double C1726 = C1724 + C1725;
    const double C2331 = C2099 * C324;
    const double C2327 = C2099 * C320;
    const double C2371 = C2099 * C366;
    const double C2411 = C2099 * C406;
    const double C5431 = C2099 * C648;
    const double C5427 = C2099 * C645;
    const double C5475 = C2099 * C675;
    const double C5513 = C2099 * C706;
    const double C8002 =
        (((0 - (C8639 * C8673) / C8582) * ae) / C8582 - (0 * be) / C8586) /
            (2 * C8582) -
        ((C8639 * (((C9196 - (C8639 * 2 * C8675) / C8582) * ae) / C8582 -
                   C8673 / C8586) +
          C2099) *
         be) /
            C8582 +
        (0 * ae) / C8582 - C8675 / C8584;
    const double C6135 = C6130 + C6131;
    const double C6133 = C6126 + C6127;
    const double C6174 = C6170 + C6171;
    const double C6214 = C6210 + C6211;
    const double C7406 = C7400 + C7401;
    const double C7404 = C7396 + C7397;
    const double C7447 = C7444 + C7445;
    const double C7486 = C7482 + C7483;
    const double C492 =
        C8725 *
            ((-(ae * C8688 * C8737) / C8596) / C8582 - C8736 / C8689 +
             C8688 * ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8732) / C8596) /
                          C8582 -
                      (ae * C8737) / C8689)) -
        ((C8703 + C8688 * C8722 + C8711 * ae) * ce) / C8689;
    const double C810 =
        C8740 *
            ((-(ae * C8688 * C8752) / C8596) / C8582 - C8751 / C8689 +
             C8688 * ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8747) / C8596) /
                          C8582 -
                      (ae * C8752) / C8689)) -
        ((C8703 + C8688 * C8722 + C8711 * ae) * ce) / C8689;
    const double C1437 =
        (-(C8688 * C8736) / C8596) / C8582 - (ae * C8731) / C8689 -
        (C8725 * C8722 * ce) / C8689 +
        C8725 *
            (C8725 * ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8732) / C8596) /
                          C8582 -
                      (ae * C8737) / C8689) -
             (C8722 * ce) / C8689);
    const double C1805 =
        C8740 *
        (C8725 *
             ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8732) / C8596) / C8582 -
              (ae * C8737) / C8689) -
         (C8722 * ce) / C8689);
    const double C1843 =
        C8740 * C8725 *
            ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8747) / C8596) / C8582 -
             (ae * C8752) / C8689) -
        (C8725 * C8722 * ce) / C8689;
    const double C2855 =
        (-(C8688 * C8751) / C8596) / C8582 - (ae * C8746) / C8689 -
        (C8740 * C8722 * ce) / C8689 +
        C8740 *
            (C8740 * ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8747) / C8596) /
                          C8582 -
                      (ae * C8752) / C8689) -
             (C8722 * ce) / C8689);
    const double C89 = (2 * (C8688 * C8703 + C8695 * ae) +
                        C8688 * (C8703 + C8688 * C8722 + C8711 * ae) +
                        (C8695 + C8705 * C8696) * ae) /
                       C8582;
    const double C455 = (C8725 * (C8703 + C8688 * C8722 + C8711 * ae)) / C8582;
    const double C741 = (C8740 * (C8703 + C8688 * C8722 + C8711 * ae)) / C8582;
    const double C1385 = (C8688 * C8703 + C8695 * ae + C8722 * C8770) / C8582;
    const double C1765 = (C8740 * C8725 * C8722) / C8582;
    const double C2759 = (C8688 * C8703 + C8695 * ae + C8722 * C8811) / C8582;
    const double C4461 = (2 * (C8725 * C8760 + C8695 * ae) +
                          C8725 * (C8760 + C8725 * C8938 + C8935 * ae) +
                          (C8695 + C8705 * C8770) * ae) /
                         C8582;
    const double C4727 = (C8740 * (C8760 + C8725 * C8938 + C8935 * ae)) / C8582;
    const double C5679 = (C8725 * C8760 + C8695 * ae + C8938 * C8811) / C8582;
    const double C8517 = (2 * (C8740 * C8792 + C8695 * ae) +
                          C8740 * (C8792 + C8740 * C8978 + C8975 * ae) +
                          (C8695 + C8705 * C8811) * ae) /
                         C8582;
    const double C556 =
        C8725 *
            ((-(C8688 * C8766 * ce) / C8596) / C8582 - C8765 / C8689 +
             C8688 * ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8761) / C8596) /
                          C8582 -
                      (C8766 * ce) / C8689)) -
        (ae * (C8688 * C8721 + C8702 + C8711 * ce)) / C8689;
    const double C932 =
        C8740 *
            ((-(C8688 * C8798 * ce) / C8596) / C8582 - C8797 / C8689 +
             C8688 * ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8793) / C8596) /
                          C8582 -
                      (C8798 * ce) / C8689)) -
        (ae * (C8688 * C8721 + C8702 + C8711 * ce)) / C8689;
    const double C1525 =
        (-(C8688 * C8765) / C8596) / C8582 - (C8760 * ce) / C8689 -
        (ae * C8725 * C8721) / C8689 +
        C8725 *
            (C8725 * ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8761) / C8596) /
                          C8582 -
                      (C8766 * ce) / C8689) -
             (ae * C8721) / C8689);
    const double C1881 =
        C8725 * C8740 *
            ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8761) / C8596) / C8582 -
             (C8766 * ce) / C8689) -
        (ae * C8740 * C8721) / C8689;
    const double C1991 =
        C8740 * C8725 *
            ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8793) / C8596) / C8582 -
             (C8798 * ce) / C8689) -
        (ae * C8725 * C8721) / C8689;
    const double C3027 =
        (-(C8688 * C8797) / C8596) / C8582 - (C8792 * ce) / C8689 -
        (ae * C8740 * C8721) / C8689 +
        C8740 *
            (C8740 * ((-(C8688 * std::pow(C8692, 5) * bs[5] * C8793) / C8596) /
                          C8582 -
                      (C8798 * ce) / C8689) -
             (ae * C8721) / C8689);
    const double C90 = (-2 * (C8688 * C8702 + C8695 * ce)) / C8596 -
                       (C8688 * (C8688 * C8721 + C8702 + C8711 * ce)) / C8596 -
                       ((C8695 + C8705 * C8696) * ce) / C8596;
    const double C452 = -(C8725 * (C8688 * C8721 + C8702 + C8711 * ce)) / C8596;
    const double C738 = -(C8740 * (C8688 * C8721 + C8702 + C8711 * ce)) / C8596;
    const double C1383 = -(C8721 * C8770 + C8688 * C8702 + C8695 * ce) / C8596;
    const double C1763 = -(C8740 * C8725 * C8721) / C8596;
    const double C2757 = -(C8721 * C8811 + C8688 * C8702 + C8695 * ce) / C8596;
    const double C4837 =
        C8740 *
            ((-(C8725 * C8798 * ce) / C8596) / C8582 - C8807 / C8689 +
             C8725 * ((-(C8725 * std::pow(C8692, 5) * bs[5] * C8804) / C8596) /
                          C8582 -
                      (C8798 * ce) / C8689)) -
        (ae * (C8725 * C8937 + C8731 + C8935 * ce)) / C8689;
    const double C5845 =
        (-(C8725 * C8807) / C8596) / C8582 - (C8792 * ce) / C8689 -
        (ae * C8740 * C8937) / C8689 +
        C8740 *
            (C8740 * ((-(C8725 * std::pow(C8692, 5) * bs[5] * C8804) / C8596) /
                          C8582 -
                      (C8798 * ce) / C8689) -
             (ae * C8937) / C8689);
    const double C4389 =
        (-2 * (C8725 * C8731 + C8695 * ce)) / C8596 -
        (C8725 * (C8725 * C8937 + C8731 + C8935 * ce)) / C8596 -
        ((C8695 + C8705 * C8770) * ce) / C8596;
    const double C4671 =
        -(C8740 * (C8725 * C8937 + C8731 + C8935 * ce)) / C8596;
    const double C5597 = -(C8937 * C8811 + C8725 * C8731 + C8695 * ce) / C8596;
    const double C8388 =
        (-2 * (C8740 * C8746 + C8695 * ce)) / C8596 -
        (C8740 * (C8740 * C8977 + C8746 + C8975 * ce)) / C8596 -
        ((C8695 + C8705 * C8811) * ce) / C8596;
    const double C94 =
        2 * ((-(C8703 * ce) / C8596) / C8582 - (ae * C8702) / C8689 -
             (C8688 * C8720) / C8689) -
        (ae * (C8688 * C8721 + C8702 + C8711 * ce)) / C8689 -
        ((C8703 + C8688 * C8722 + C8711 * ae) * ce) / C8689 +
        C8688 *
            ((-(ae * C8721) / C8596) / C8582 - C8720 / C8689 -
             (C8722 * ce) / C8689 +
             C8688 * ((-(C8716 * ce) / C8596) / C8582 - (ae * C8715) / C8689 -
                      (C8688 *
                       (C8706 * C8707 + C8696 * bs[5] * std::pow(C8692, 5)) *
                       C8697) /
                          C8689));
    const double C458 =
        (-(ae * C8725 * C8721) / C8596) / C8582 - (C8725 * C8720) / C8689 -
        (C8725 * C8722 * ce) / C8689 +
        C8688 *
            ((-(C8725 * C8716 * ce) / C8596) / C8582 -
             (ae * C8725 * C8715) / C8689 -
             (C8688 * C8725 *
              (C8706 * C8707 + C8696 * bs[5] * std::pow(C8692, 5)) * C8697) /
                 C8689);
    const double C459 = (-(C8725 * C8703 * ce) / C8596) / C8582 -
                        (ae * C8725 * C8702) / C8689 -
                        (C8688 * C8725 * C8720) / C8689;
    const double C744 =
        (-(ae * C8740 * C8721) / C8596) / C8582 - (C8740 * C8720) / C8689 -
        (C8740 * C8722 * ce) / C8689 +
        C8688 *
            ((-(C8740 * C8716 * ce) / C8596) / C8582 -
             (ae * C8740 * C8715) / C8689 -
             (C8688 * C8740 *
              (C8706 * C8707 + C8696 * bs[5] * std::pow(C8692, 5)) * C8697) /
                 C8689);
    const double C745 = (-(C8740 * C8703 * ce) / C8596) / C8582 -
                        (ae * C8740 * C8702) / C8689 -
                        (C8688 * C8740 * C8720) / C8689;
    const double C1387 =
        (-((C8703 + C8716 * C8770) * ce) / C8596) / C8582 -
        (ae * (C8715 * C8770 + C8702)) / C8689 +
        C8688 * ((-((C8706 * C8707 + C8696 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8770) /
                  C8596) /
                     C8582 -
                 C8720 / C8689);
    const double C1388 = (-(C8720 * C8770) / C8596) / C8582 -
                         ((C8695 + C8696 * C8693 * C8699) * C8697) / C8689;
    const double C1768 = (-(C8740 * C8725 * C8720) / C8596) / C8582;
    const double C2761 =
        (-((C8703 + C8716 * C8811) * ce) / C8596) / C8582 -
        (ae * (C8715 * C8811 + C8702)) / C8689 +
        C8688 * ((-((C8706 * C8707 + C8696 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8811) /
                  C8596) /
                     C8582 -
                 C8720 / C8689);
    const double C2762 = (-(C8720 * C8811) / C8596) / C8582 -
                         ((C8695 + C8696 * C8693 * C8699) * C8697) / C8689;
    const double C4346 =
        (-2 * C8725 * C8720) / C8689 +
        C8725 * ((-((C8706 * C8707 + C8696 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8770) /
                  C8596) /
                     C8582 -
                 C8720 / C8689);
    const double C4644 =
        C8740 * ((-((C8706 * C8707 + C8696 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8770) /
                  C8596) /
                     C8582 -
                 C8720 / C8689);
    const double C5554 =
        (-(C8725 * (C8706 * C8707 + C8696 * bs[5] * std::pow(C8692, 5)) *
           C8697 * C8811) /
         C8596) /
            C8582 -
        (C8725 * C8720) / C8689;
    const double C8320 =
        (-2 * C8740 * C8720) / C8689 +
        C8740 * ((-((C8706 * C8707 + C8696 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8811) /
                  C8596) /
                     C8582 -
                 C8720 / C8689);
    const double C241 =
        (-2 * C8688 * C8775) / C8689 +
        C8688 * ((-((C8706 * C8707 + C8770 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8696) /
                  C8596) /
                     C8582 -
                 C8775 / C8689);
    const double C586 = (-(C8688 * C8760 * ce) / C8596) / C8582 -
                        (ae * C8688 * C8731) / C8689 -
                        (C8725 * C8688 * C8775) / C8689;
    const double C587 =
        (-((C8760 + C8766 * C8696) * ce) / C8596) / C8582 -
        (ae * (C8737 * C8696 + C8731)) / C8689 +
        C8725 * ((-((C8706 * C8707 + C8770 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8696) /
                  C8596) /
                     C8582 -
                 C8775 / C8689);
    const double C871 =
        C8740 * ((-((C8706 * C8707 + C8770 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8696) /
                  C8596) /
                     C8582 -
                 C8775 / C8689);
    const double C872 = (-(C8740 * C8688 * C8775) / C8596) / C8582;
    const double C1561 =
        (-(ae * (C8725 * C8731 + C8695 * ce)) / C8596) / C8582 -
        ((C8695 + C8770 * C8693 * C8699) * C8697) / C8689 -
        ((C8725 * C8760 + C8695 * ae) * ce) / C8689 +
        C8725 * ((-(C8760 * ce) / C8596) / C8582 - (ae * C8731) / C8689 -
                 (C8725 * C8775) / C8689);
    const double C1562 =
        (-(ae * (C8725 * C8881 + C8711 * ce)) / C8596) / C8582 -
        (C8688 * C8775) / C8689 - ((C8725 * C8882 + C8711 * ae) * ce) / C8689 +
        C8725 *
            ((-(C8882 * ce) / C8596) / C8582 - (ae * C8881) / C8689 -
             (C8725 * C8688 *
              (C8706 * C8707 + C8770 * bs[5] * std::pow(C8692, 5)) * C8697) /
                 C8689);
    const double C1918 = (-(C8740 * C8760 * ce) / C8596) / C8582 -
                         (ae * C8740 * C8731) / C8689 -
                         (C8725 * C8740 * C8775) / C8689;
    const double C2945 =
        (-(C8688 * (C8706 * C8707 + C8770 * bs[5] * std::pow(C8692, 5)) *
           C8697 * C8811) /
         C8596) /
            C8582 -
        (C8688 * C8775) / C8689;
    const double C2946 = (-(C8775 * C8811) / C8596) / C8582 -
                         ((C8695 + C8770 * C8693 * C8699) * C8697) / C8689;
    const double C4489 =
        2 * ((-(C8760 * ce) / C8596) / C8582 - (ae * C8731) / C8689 -
             (C8725 * C8775) / C8689) -
        (ae * (C8725 * C8937 + C8731 + C8935 * ce)) / C8689 -
        ((C8760 + C8725 * C8938 + C8935 * ae) * ce) / C8689 +
        C8725 *
            ((-(ae * C8937) / C8596) / C8582 - C8775 / C8689 -
             (C8938 * ce) / C8689 +
             C8725 * ((-(C8766 * ce) / C8596) / C8582 - (ae * C8737) / C8689 -
                      (C8725 *
                       (C8706 * C8707 + C8770 * bs[5] * std::pow(C8692, 5)) *
                       C8697) /
                          C8689));
    const double C4755 =
        (-(ae * C8740 * C8937) / C8596) / C8582 - (C8740 * C8775) / C8689 -
        (C8740 * C8938 * ce) / C8689 +
        C8725 *
            ((-(C8740 * C8766 * ce) / C8596) / C8582 -
             (ae * C8740 * C8737) / C8689 -
             (C8725 * C8740 *
              (C8706 * C8707 + C8770 * bs[5] * std::pow(C8692, 5)) * C8697) /
                 C8689);
    const double C5727 =
        (-((C8760 + C8766 * C8811) * ce) / C8596) / C8582 -
        (ae * (C8737 * C8811 + C8731)) / C8689 +
        C8725 * ((-((C8706 * C8707 + C8770 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8811) /
                  C8596) /
                     C8582 -
                 C8775 / C8689);
    const double C8455 =
        (-2 * C8740 * C8775) / C8689 +
        C8740 * ((-((C8706 * C8707 + C8770 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8811) /
                  C8596) /
                     C8582 -
                 C8775 / C8689);
    const double C408 =
        (-2 * C8688 * C8816) / C8689 +
        C8688 * ((-((C8706 * C8707 + C8811 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8696) /
                  C8596) /
                     C8582 -
                 C8816 / C8689);
    const double C704 =
        C8725 * ((-((C8706 * C8707 + C8811 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8696) /
                  C8596) /
                     C8582 -
                 C8816 / C8689);
    const double C705 = (-(C8725 * C8688 * C8816) / C8596) / C8582;
    const double C991 = (-(C8688 * C8792 * ce) / C8596) / C8582 -
                        (ae * C8688 * C8746) / C8689 -
                        (C8740 * C8688 * C8816) / C8689;
    const double C992 =
        (-((C8792 + C8798 * C8696) * ce) / C8596) / C8582 -
        (ae * (C8752 * C8696 + C8746)) / C8689 +
        C8740 * ((-((C8706 * C8707 + C8811 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8696) /
                  C8596) /
                     C8582 -
                 C8816 / C8689);
    const double C1720 =
        (-(C8688 * (C8706 * C8707 + C8811 * bs[5] * std::pow(C8692, 5)) *
           C8697 * C8770) /
         C8596) /
            C8582 -
        (C8688 * C8816) / C8689;
    const double C1721 = (-(C8816 * C8770) / C8596) / C8582 -
                         ((C8695 + C8811 * C8693 * C8699) * C8697) / C8689;
    const double C2063 = (-(C8725 * C8792 * ce) / C8596) / C8582 -
                         (ae * C8725 * C8746) / C8689 -
                         (C8740 * C8725 * C8816) / C8689;
    const double C3099 =
        (-(ae * (C8740 * C8746 + C8695 * ce)) / C8596) / C8582 -
        ((C8695 + C8811 * C8693 * C8699) * C8697) / C8689 -
        ((C8740 * C8792 + C8695 * ae) * ce) / C8689 +
        C8740 * ((-(C8792 * ce) / C8596) / C8582 - (ae * C8746) / C8689 -
                 (C8740 * C8816) / C8689);
    const double C3100 =
        (-(ae * (C8740 * C8884 + C8711 * ce)) / C8596) / C8582 -
        (C8688 * C8816) / C8689 - ((C8740 * C8890 + C8711 * ae) * ce) / C8689 +
        C8740 *
            ((-(C8890 * ce) / C8596) / C8582 - (ae * C8884) / C8689 -
             (C8740 * C8688 *
              (C8706 * C8707 + C8811 * bs[5] * std::pow(C8692, 5)) * C8697) /
                 C8689);
    const double C4609 =
        (-2 * C8725 * C8816) / C8689 +
        C8725 * ((-((C8706 * C8707 + C8811 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8770) /
                  C8596) /
                     C8582 -
                 C8816 / C8689);
    const double C4864 =
        (-((C8792 + C8798 * C8770) * ce) / C8596) / C8582 -
        (ae * (C8752 * C8770 + C8746)) / C8689 +
        C8740 * ((-((C8706 * C8707 + C8811 * bs[5] * std::pow(C8692, 5)) *
                    C8697 * C8770) /
                  C8596) /
                     C8582 -
                 C8816 / C8689);
    const double C5880 =
        (-(ae * (C8740 * C8963 + C8935 * ce)) / C8596) / C8582 -
        (C8725 * C8816) / C8689 - ((C8740 * C8964 + C8935 * ae) * ce) / C8689 +
        C8740 *
            ((-(C8964 * ce) / C8596) / C8582 - (ae * C8963) / C8689 -
             (C8740 * C8725 *
              (C8706 * C8707 + C8811 * bs[5] * std::pow(C8692, 5)) * C8697) /
                 C8689);
    const double C8572 =
        2 * ((-(C8792 * ce) / C8596) / C8582 - (ae * C8746) / C8689 -
             (C8740 * C8816) / C8689) -
        (ae * (C8740 * C8977 + C8746 + C8975 * ce)) / C8689 -
        ((C8792 + C8740 * C8978 + C8975 * ae) * ce) / C8689 +
        C8740 *
            ((-(ae * C8977) / C8596) / C8582 - C8816 / C8689 -
             (C8978 * ce) / C8689 +
             C8740 * ((-(C8798 * ce) / C8596) / C8582 - (ae * C8752) / C8689 -
                      (C8740 *
                       (C8706 * C8707 + C8811 * bs[5] * std::pow(C8692, 5)) *
                       C8697) /
                          C8689));
    const double C250 = C247 + C248;
    const double C377 = C374 + C375;
    const double C290 = C287 + C288;
    const double C417 = C414 + C415;
    const double C212 = C207 + C208;
    const double C211 = C205 + C206;
    const double C1146 = C1138 + C1139;
    const double C3254 = C3246 + C3247;
    const double C2208 = C2204 + C2205;
    const double C5691 = C5684 + C5685;
    const double C7633 = C7626 + C7627;
    const double C8426 = C8422 + C8423;
    const double C339 = C334 + C335;
    const double C338 = C332 + C333;
    const double C1268 = C1264 + C1265;
    const double C2332 = C2324 + C2325;
    const double C6132 = C6124 + C6125;
    const double C4550 = C4546 + C4547;
    const double C5435 = C5428 + C5429;
    const double C7405 = C7398 + C7399;
    const double C1148 = C1142 + C1143;
    const double C3256 = C3250 + C3251;
    const double C2209 = C2206 + C2207;
    const double C5693 = C5688 + C5689;
    const double C7635 = C7630 + C7631;
    const double C8427 = C8424 + C8425;
    const double C1229 = C1226 + C1227;
    const double C3337 = C3334 + C3335;
    const double C2286 = C2284 + C2285;
    const double C5774 = C5770 + C5771;
    const double C7714 = C7710 + C7711;
    const double C8491 = C8489 + C8490;
    const double C1269 = C1266 + C1267;
    const double C2334 = C2328 + C2329;
    const double C6134 = C6128 + C6129;
    const double C4551 = C4548 + C4549;
    const double C5437 = C5432 + C5433;
    const double C7407 = C7402 + C7403;
    const double C1307 = C1305 + C1306;
    const double C2375 = C2372 + C2373;
    const double C6175 = C6172 + C6173;
    const double C4583 = C4581 + C4582;
    const double C5476 = C5472 + C5473;
    const double C7446 = C7442 + C7443;
    const double C1400 = C1394 + C1395;
    const double C1398 = C1390 + C1391;
    const double C1445 = C1442 + C1443;
    const double C1488 = C1484 + C1485;
    const double C2774 = C2768 + C2769;
    const double C2772 = C2764 + C2765;
    const double C2818 = C2814 + C2815;
    const double C2863 = C2860 + C2861;
    const double C1399 = C1392 + C1393;
    const double C1444 = C1440 + C1441;
    const double C1489 = C1486 + C1487;
    const double C2773 = C2766 + C2767;
    const double C2819 = C2816 + C2817;
    const double C2862 = C2858 + C2859;
    const double C3483 = C3476 + C3477;
    const double C3524 = C3520 + C3521;
    const double C3565 = C3562 + C3563;
    const double C6565 = C6558 + C6559;
    const double C6607 = C6604 + C6605;
    const double C6646 = C6642 + C6643;
    const double C4358 = C4352 + C4353;
    const double C4357 = C4350 + C4351;
    const double C4356 = C4348 + C4349;
    const double C4397 = C4394 + C4395;
    const double C4396 = C4392 + C4393;
    const double C4433 = C4430 + C4431;
    const double C4432 = C4427 + C4428;
    const double C5210 = C5206 + C5207;
    const double C5250 = C5248 + C5249;
    const double C5288 = C5286 + C5287;
    const double C5561 = C5558 + C5559;
    const double C5560 = C5556 + C5557;
    const double C5605 = C5601 + C5602;
    const double C5645 = C5643 + C5644;
    const double C8326 = C8322 + C8323;
    const double C8361 = C8359 + C8360;
    const double C8393 = C8391 + C8392;
    const double C3484 = C3478 + C3479;
    const double C3482 = C3474 + C3475;
    const double C3525 = C3522 + C3523;
    const double C3564 = C3560 + C3561;
    const double C6566 = C6560 + C6561;
    const double C6564 = C6556 + C6557;
    const double C6606 = C6602 + C6603;
    const double C6647 = C6644 + C6645;
    const double C243 = C209 * C121;
    const double C283 = C209 * C156;
    const double C251 = C249 * C9274;
    const double C291 = C289 * C9273;
    const double C2911 = C2909 * C9272;
    const double C2910 = C2908 * C448;
    const double C2948 = C2908 * C121;
    const double C2952 = C2951 * C9274;
    const double C1149 = C1144 + C1145;
    const double C1147 = C1140 + C1141;
    const double C1188 = C1184 + C1185;
    const double C1228 = C1224 + C1225;
    const double C7634 = C7628 + C7629;
    const double C7632 = C7624 + C7625;
    const double C7674 = C7670 + C7671;
    const double C7715 = C7712 + C7713;
    const double C370 = C336 * C121;
    const double C410 = C336 * C156;
    const double C378 = C376 * C9274;
    const double C418 = C416 * C9273;
    const double C1647 = C1645 * C9272;
    const double C1646 = C1644 * C448;
    const double C1723 = C1644 * C156;
    const double C1727 = C1726 * C9273;
    const double C2335 = C2330 + C2331;
    const double C2333 = C2326 + C2327;
    const double C2374 = C2370 + C2371;
    const double C2414 = C2410 + C2411;
    const double C5436 = C5430 + C5431;
    const double C5434 = C5426 + C5427;
    const double C5477 = C5474 + C5475;
    const double C5516 = C5512 + C5513;
    const double C1397 = C9257 * C459;
    const double C3481 = C9257 * C459;
    const double C2771 = C9257 * C745;
    const double C6563 = C9257 * C745;
    const double C4355 = C9125 * C1388;
    const double C5209 = C9125 * C1768;
    const double C8325 = C9125 * C2762;
    const double C1187 = C9263 * C586;
    const double C3295 = C9263 * C586;
    const double C2246 = C9181 * C872;
    const double C5732 = C9263 * C1918;
    const double C7673 = C9263 * C1918;
    const double C8459 = C9181 * C2946;
    const double C1345 = C9196 * C705;
    const double C2413 = C9265 * C991;
    const double C6213 = C9265 * C991;
    const double C4613 = C9196 * C1721;
    const double C5515 = C9265 * C2063;
    const double C7485 = C9265 * C2063;
    const double C252 = C250 * C9274;
    const double C379 = C377 * C9274;
    const double C292 = C290 * C9273;
    const double C419 = C417 * C9273;
    const double C246 = C211 * C121;
    const double C286 = C211 * C156;
    const double C2244 = C2208 * C121;
    const double C2283 = C2208 * C156;
    const double C2906 = C2208 * C448;
    const double C8428 = C8426 * C448;
    const double C8457 = C8426 * C121;
    const double C373 = C338 * C121;
    const double C413 = C338 * C156;
    const double C1304 = C1268 * C121;
    const double C1343 = C1268 * C156;
    const double C1642 = C1268 * C448;
    const double C4552 = C4550 * C448;
    const double C4611 = C4550 * C156;
    const double C2907 = C2209 * C9272;
    const double C8429 = C8427 * C9272;
    const double C2287 = C2286 * C9273;
    const double C1643 = C1269 * C9272;
    const double C4553 = C4551 * C9272;
    const double C1308 = C1307 * C9274;
    const double C4362 = C4358 * C448;
    const double C4429 = C4358 * C156;
    const double C4361 = C4357 * C9272;
    const double C4360 = C4356 * C448;
    const double C4426 = C4356 * C156;
    const double C4435 = C4433 * C9273;
    const double C4434 = C4432 * C9273;
    const double C5212 = C5210 * C448;
    const double C5285 = C5210 * C156;
    const double C5603 = C5210 * C121;
    const double C5604 = C5250 * C9274;
    const double C5289 = C5288 * C9273;
    const double C5563 = C5561 * C9272;
    const double C5562 = C5560 * C448;
    const double C5600 = C5560 * C121;
    const double C5606 = C5605 * C9274;
    const double C8328 = C8326 * C448;
    const double C8358 = C8326 * C121;
    const double C8362 = C8361 * C9274;
    const double C1401 = C1396 + C1397;
    const double C3485 = C3480 + C3481;
    const double C2775 = C2770 + C2771;
    const double C6567 = C6562 + C6563;
    const double C4359 = C4354 + C4355;
    const double C5211 = C5208 + C5209;
    const double C8327 = C8324 + C8325;
    const double C1189 = C1186 + C1187;
    const double C3297 = C3294 + C3295;
    const double C2247 = C2245 + C2246;
    const double C5734 = C5731 + C5732;
    const double C7675 = C7672 + C7673;
    const double C8460 = C8458 + C8459;
    const double C1346 = C1344 + C1345;
    const double C2415 = C2412 + C2413;
    const double C6215 = C6212 + C6213;
    const double C4614 = C4612 + C4613;
    const double C5517 = C5514 + C5515;
    const double C7487 = C7484 + C7485;
    const double C4363 = C4359 * C9272;
    const double C5213 = C5211 * C9272;
    const double C8329 = C8327 * C9272;
    const double C2248 = C2247 * C9274;
    const double C8461 = C8460 * C9274;
    const double C1347 = C1346 * C9273;
    const double C4615 = C4614 * C9273;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84 + C76 * C81 +
                    C67 * C85) *
                       C77 +
                   (C74 * C86 + C65 * C91 + C75 * C87 + C66 * C92 + C76 * C88 +
                    C67 * C93) *
                       C68 -
                   (C76 * C82 + C67 * C89 + C75 * C81 + C66 * C85 + C74 * C80 +
                    C65 * C84) *
                       C78 -
                   (C76 * C90 + C67 * C94 + C75 * C88 + C66 * C93 + C74 * C87 +
                    C65 * C92) *
                       C69) *
                  C9181 * C9196 * C9273 * C9274) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84 + C76 * C81 +
                     C67 * C85) *
                        C121 +
                    (C74 * C122 + C65 * C126 + C75 * C123 + C66 * C127 +
                     C76 * C124 + C67 * C128) *
                        C9274) *
                       C9181 * C9196 * C68 -
                   ((C76 * C125 + C67 * C129 + C75 * C124 + C66 * C128 +
                     C74 * C123 + C65 * C127) *
                        C9274 +
                    (C76 * C82 + C67 * C89 + C75 * C81 + C66 * C85 + C74 * C80 +
                     C65 * C84) *
                        C121) *
                       C9181 * C9196 * C69) *
                  C9273) /
                 (p * q * std::sqrt(p + q));
    d2eexz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84 + C76 * C81 +
                     C67 * C85) *
                        C156 +
                    (C74 * C157 + C65 * C161 + C75 * C158 + C66 * C162 +
                     C76 * C159 + C67 * C163) *
                        C9273) *
                       C9181 * C9196 * C9274 * C68 -
                   ((C76 * C160 + C67 * C164 + C75 * C159 + C66 * C163 +
                     C74 * C158 + C65 * C162) *
                        C9273 +
                    (C76 * C82 + C67 * C89 + C75 * C81 + C66 * C85 + C74 * C80 +
                     C65 * C84) *
                        C156) *
                       C9181 * C9196 * C9274 * C69)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C191 * C79 + C9181 * C192) * C77 +
           (C191 * C86 + C9181 * C196) * C68 - C209 * C78 - C210 * C69) *
              C9196 * C65 +
          (C209 * C77 + C210 * C68 - C211 * C78 - C212 * C69) * C9196 * C66 +
          (C211 * C77 + C212 * C68 - (C191 * C82 + C9181 * C195) * C78 -
           (C191 * C90 + C9181 * C199) * C69) *
              C9196 * C67) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C191 * C79 + C9181 * C192) * C121 +
                     (C191 * C122 + C9181 * C238) * C9274) *
                        C9196 * C65 +
                    (C243 + C251) * C9196 * C66 + (C246 + C252) * C9196 * C67) *
                       C68 -
                   (((C191 * C125 + C9181 * C241) * C9274 +
                     (C191 * C82 + C9181 * C195) * C121) *
                        C9196 * C67 +
                    (C252 + C246) * C9196 * C66 + (C251 + C243) * C9196 * C65) *
                       C69) *
                  C9273) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C191 * C79 + C9181 * C192) * C156 +
                     (C191 * C157 + C9181 * C278) * C9273) *
                        C9196 * C65 +
                    (C283 + C291) * C9196 * C66 + (C286 + C292) * C9196 * C67) *
                       C9274 * C68 -
                   (((C191 * C160 + C9181 * C281) * C9273 +
                     (C191 * C82 + C9181 * C195) * C156) *
                        C9196 * C67 +
                    (C292 + C286) * C9196 * C66 + (C291 + C283) * C9196 * C65) *
                       C9274 * C69)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C318 * C79 + C9196 * C319) * C77 +
           (C318 * C86 + C9196 * C323) * C68 - C336 * C78 - C337 * C69) *
              C65 +
          (C336 * C77 + C337 * C68 - C338 * C78 - C339 * C69) * C66 +
          (C338 * C77 + C339 * C68 - (C318 * C82 + C9196 * C322) * C78 -
           (C318 * C90 + C9196 * C326) * C69) *
              C67) *
         C9181 * C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C9196 * C319) * C121 +
                     (C318 * C122 + C9196 * C365) * C9274) *
                        C65 +
                    (C370 + C378) * C66 + (C373 + C379) * C67) *
                       C9181 * C68 -
                   (((C318 * C125 + C9196 * C368) * C9274 +
                     (C318 * C82 + C9196 * C322) * C121) *
                        C67 +
                    (C379 + C373) * C66 + (C378 + C370) * C65) *
                       C9181 * C69) *
                  C9273) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C9196 * C319) * C156 +
                     (C318 * C157 + C9196 * C405) * C9273) *
                        C65 +
                    (C410 + C418) * C66 + (C413 + C419) * C67) *
                       C9181 * C9274 * C68 -
                   (((C318 * C160 + C9196 * C408) * C9273 +
                     (C318 * C82 + C9196 * C322) * C156) *
                        C67 +
                    (C419 + C413) * C66 + (C418 + C410) * C65) *
                       C9181 * C9274 * C69)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84 + C76 * C81 +
                     C67 * C85) *
                        C448 +
                    (C74 * C86 + C65 * C91 + C75 * C87 + C66 * C92 + C76 * C88 +
                     C67 * C93) *
                        C9272) *
                       C9181 * C9196 * C9273 * C446 -
                   ((C76 * C452 + C67 * C458 + C75 * C453 + C66 * C459 +
                     C74 * C454 + C65 * C460) *
                        C9272 +
                    (C76 * C449 + C67 * C455 + C75 * C450 + C66 * C456 +
                     C74 * C451 + C65 * C457) *
                        C448) *
                       C9181 * C9196 * C9273 * C447)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84 + C76 * C81 +
                    C67 * C85) *
                       C487 +
                   (C74 * C122 + C65 * C126 + C75 * C123 + C66 * C127 +
                    C76 * C124 + C67 * C128) *
                       C446 -
                   (C76 * C449 + C67 * C455 + C75 * C450 + C66 * C456 +
                    C74 * C451 + C65 * C457) *
                       C488 -
                   (C76 * C489 + C67 * C492 + C75 * C490 + C66 * C493 +
                    C74 * C491 + C65 * C494) *
                       C447) *
                  C9181 * C9196 * C9272 * C9273) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84 + C76 * C81 +
                     C67 * C85) *
                        C156 +
                    (C74 * C157 + C65 * C161 + C75 * C158 + C66 * C162 +
                     C76 * C159 + C67 * C163) *
                        C9273) *
                       C9181 * C9196 * C446 -
                   ((C76 * C521 + C67 * C524 + C75 * C522 + C66 * C525 +
                     C74 * C523 + C65 * C526) *
                        C9273 +
                    (C76 * C449 + C67 * C455 + C75 * C450 + C66 * C456 +
                     C74 * C451 + C65 * C457) *
                        C156) *
                       C9181 * C9196 * C447) *
                  C9272) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C191 * C79 + C9181 * C192) * C448 +
                     (C191 * C86 + C9181 * C196) * C9272) *
                        C9196 * C65 +
                    (C209 * C448 + C210 * C9272) * C9196 * C66 +
                    (C211 * C448 + C212 * C9272) * C9196 * C67) *
                       C9273 * C446 -
                   (((C191 * C452 + C9181 * C556) * C9272 +
                     (C191 * C449 + C9181 * C553) * C448) *
                        C9196 * C67 +
                    ((C191 * C453 + C9181 * C557) * C9272 +
                     (C191 * C450 + C9181 * C554) * C448) *
                        C9196 * C66 +
                    ((C191 * C454 + C9181 * C558) * C9272 +
                     (C191 * C451 + C9181 * C555) * C448) *
                        C9196 * C65) *
                       C9273 * C447)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C191 * C79 + C9181 * C192) * C487 +
           (C191 * C122 + C9181 * C238) * C446 -
           (C191 * C451 + C9181 * C555) * C488 -
           (C191 * C491 + C9181 * C585) * C447) *
              C9196 * C65 +
          (C209 * C487 + C249 * C446 - (C191 * C450 + C9181 * C554) * C488 -
           (C191 * C490 + C9181 * C586) * C447) *
              C9196 * C66 +
          (C211 * C487 + C250 * C446 - (C191 * C449 + C9181 * C553) * C488 -
           (C191 * C489 + C9181 * C587) * C447) *
              C9196 * C67) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C191 * C79 + C9181 * C192) * C156 +
                     (C191 * C157 + C9181 * C278) * C9273) *
                        C9196 * C65 +
                    (C283 + C291) * C9196 * C66 + (C286 + C292) * C9196 * C67) *
                       C446 -
                   (((C191 * C521 + C9181 * C614) * C9273 +
                     (C191 * C449 + C9181 * C553) * C156) *
                        C9196 * C67 +
                    ((C191 * C522 + C9181 * C615) * C9273 +
                     (C191 * C450 + C9181 * C554) * C156) *
                        C9196 * C66 +
                    ((C191 * C523 + C9181 * C616) * C9273 +
                     (C191 * C451 + C9181 * C555) * C156) *
                        C9196 * C65) *
                       C447) *
                  C9272) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C9196 * C319) * C448 +
                     (C318 * C86 + C9196 * C323) * C9272) *
                        C65 +
                    (C336 * C448 + C337 * C9272) * C66 +
                    (C338 * C448 + C339 * C9272) * C67) *
                       C9181 * C9273 * C446 -
                   (((C318 * C452 + C9196 * C646) * C9272 +
                     (C318 * C449 + C9196 * C643) * C448) *
                        C67 +
                    ((C318 * C453 + C9196 * C647) * C9272 +
                     (C318 * C450 + C9196 * C644) * C448) *
                        C66 +
                    ((C318 * C454 + C9196 * C648) * C9272 +
                     (C318 * C451 + C9196 * C645) * C448) *
                        C65) *
                       C9181 * C9273 * C447)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C318 * C79 + C9196 * C319) * C487 +
           (C318 * C122 + C9196 * C365) * C446 -
           (C318 * C451 + C9196 * C645) * C488 -
           (C318 * C491 + C9196 * C675) * C447) *
              C65 +
          (C336 * C487 + C376 * C446 - (C318 * C450 + C9196 * C644) * C488 -
           (C318 * C490 + C9196 * C676) * C447) *
              C66 +
          (C338 * C487 + C377 * C446 - (C318 * C449 + C9196 * C643) * C488 -
           (C318 * C489 + C9196 * C677) * C447) *
              C67) *
         C9181 * C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C9196 * C319) * C156 +
                     (C318 * C157 + C9196 * C405) * C9273) *
                        C65 +
                    (C410 + C418) * C66 + (C413 + C419) * C67) *
                       C9181 * C446 -
                   (((C318 * C521 + C9196 * C704) * C9273 +
                     (C318 * C449 + C9196 * C643) * C156) *
                        C67 +
                    ((C318 * C522 + C9196 * C705) * C9273 +
                     (C318 * C450 + C9196 * C644) * C156) *
                        C66 +
                    ((C318 * C523 + C9196 * C706) * C9273 +
                     (C318 * C451 + C9196 * C645) * C156) *
                        C65) *
                       C9181 * C447) *
                  C9272) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84 + C76 * C81 +
                     C67 * C85) *
                        C448 +
                    (C74 * C86 + C65 * C91 + C75 * C87 + C66 * C92 + C76 * C88 +
                     C67 * C93) *
                        C9272) *
                       C9181 * C9196 * C733 -
                   ((C76 * C738 + C67 * C744 + C75 * C739 + C66 * C745 +
                     C74 * C740 + C65 * C746) *
                        C9272 +
                    (C76 * C735 + C67 * C741 + C75 * C736 + C66 * C742 +
                     C74 * C737 + C65 * C743) *
                        C448) *
                       C9181 * C9196 * C734) *
                  C9274) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84 + C76 * C81 +
                     C67 * C85) *
                        C121 +
                    (C74 * C122 + C65 * C126 + C75 * C123 + C66 * C127 +
                     C76 * C124 + C67 * C128) *
                        C9274) *
                       C9181 * C9196 * C9272 * C733 -
                   ((C76 * C773 + C67 * C776 + C75 * C774 + C66 * C777 +
                     C74 * C775 + C65 * C778) *
                        C9274 +
                    (C76 * C735 + C67 * C741 + C75 * C736 + C66 * C742 +
                     C74 * C737 + C65 * C743) *
                        C121) *
                       C9181 * C9196 * C9272 * C734)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[2] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C79 + C65 * C83 + C75 * C80 + C66 * C84 + C76 * C81 +
                    C67 * C85) *
                       C805 +
                   (C74 * C157 + C65 * C161 + C75 * C158 + C66 * C162 +
                    C76 * C159 + C67 * C163) *
                       C733 -
                   (C76 * C735 + C67 * C741 + C75 * C736 + C66 * C742 +
                    C74 * C737 + C65 * C743) *
                       C806 -
                   (C76 * C807 + C67 * C810 + C75 * C808 + C66 * C811 +
                    C74 * C809 + C65 * C812) *
                       C734) *
                  C9181 * C9196 * C9274 * C9272) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C191 * C79 + C9181 * C192) * C448 +
                     (C191 * C86 + C9181 * C196) * C9272) *
                        C9196 * C65 +
                    (C209 * C448 + C210 * C9272) * C9196 * C66 +
                    (C211 * C448 + C212 * C9272) * C9196 * C67) *
                       C733 -
                   (((C191 * C738 + C9181 * C842) * C9272 +
                     (C191 * C735 + C9181 * C839) * C448) *
                        C9196 * C67 +
                    ((C191 * C739 + C9181 * C843) * C9272 +
                     (C191 * C736 + C9181 * C840) * C448) *
                        C9196 * C66 +
                    ((C191 * C740 + C9181 * C844) * C9272 +
                     (C191 * C737 + C9181 * C841) * C448) *
                        C9196 * C65) *
                       C734) *
                  C9274) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C191 * C79 + C9181 * C192) * C121 +
                     (C191 * C122 + C9181 * C238) * C9274) *
                        C9196 * C65 +
                    (C243 + C251) * C9196 * C66 + (C246 + C252) * C9196 * C67) *
                       C9272 * C733 -
                   (((C191 * C773 + C9181 * C871) * C9274 +
                     (C191 * C735 + C9181 * C839) * C121) *
                        C9196 * C67 +
                    ((C191 * C774 + C9181 * C872) * C9274 +
                     (C191 * C736 + C9181 * C840) * C121) *
                        C9196 * C66 +
                    ((C191 * C775 + C9181 * C873) * C9274 +
                     (C191 * C737 + C9181 * C841) * C121) *
                        C9196 * C65) *
                       C9272 * C734)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C191 * C79 + C9181 * C192) * C805 +
           (C191 * C157 + C9181 * C278) * C733 -
           (C191 * C737 + C9181 * C841) * C806 -
           (C191 * C809 + C9181 * C900) * C734) *
              C9196 * C65 +
          (C209 * C805 + C289 * C733 - (C191 * C736 + C9181 * C840) * C806 -
           (C191 * C808 + C9181 * C901) * C734) *
              C9196 * C66 +
          (C211 * C805 + C290 * C733 - (C191 * C735 + C9181 * C839) * C806 -
           (C191 * C807 + C9181 * C902) * C734) *
              C9196 * C67) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eezx[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C9196 * C319) * C448 +
                     (C318 * C86 + C9196 * C323) * C9272) *
                        C65 +
                    (C336 * C448 + C337 * C9272) * C66 +
                    (C338 * C448 + C339 * C9272) * C67) *
                       C9181 * C733 -
                   (((C318 * C738 + C9196 * C932) * C9272 +
                     (C318 * C735 + C9196 * C929) * C448) *
                        C67 +
                    ((C318 * C739 + C9196 * C933) * C9272 +
                     (C318 * C736 + C9196 * C930) * C448) *
                        C66 +
                    ((C318 * C740 + C9196 * C934) * C9272 +
                     (C318 * C737 + C9196 * C931) * C448) *
                        C65) *
                       C9181 * C734) *
                  C9274) /
                 (p * q * std::sqrt(p + q));
    d2eezy[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C318 * C79 + C9196 * C319) * C121 +
                     (C318 * C122 + C9196 * C365) * C9274) *
                        C65 +
                    (C370 + C378) * C66 + (C373 + C379) * C67) *
                       C9181 * C9272 * C733 -
                   (((C318 * C773 + C9196 * C961) * C9274 +
                     (C318 * C735 + C9196 * C929) * C121) *
                        C67 +
                    ((C318 * C774 + C9196 * C962) * C9274 +
                     (C318 * C736 + C9196 * C930) * C121) *
                        C66 +
                    ((C318 * C775 + C9196 * C963) * C9274 +
                     (C318 * C737 + C9196 * C931) * C121) *
                        C65) *
                       C9181 * C9272 * C734)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C318 * C79 + C9196 * C319) * C805 +
           (C318 * C157 + C9196 * C405) * C733 -
           (C318 * C737 + C9196 * C931) * C806 -
           (C318 * C809 + C9196 * C990) * C734) *
              C65 +
          (C336 * C805 + C416 * C733 - (C318 * C736 + C9196 * C930) * C806 -
           (C318 * C808 + C9196 * C991) * C734) *
              C66 +
          (C338 * C805 + C417 * C733 - (C318 * C735 + C9196 * C929) * C806 -
           (C318 * C807 + C9196 * C992) * C734) *
              C67) *
         C9181 * C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C77 +
           (C1031 * C86 + C1027 * C91 + C1032 * C87 + C9257 * C92) * C68 -
           (C1032 * C81 + C9257 * C85 + C1031 * C80 + C1027 * C84) * C78 -
           (C1032 * C88 + C9257 * C93 + C1031 * C87 + C1027 * C92) * C69) *
              C1029 +
          ((C1031 * C451 + C1027 * C457 + C1032 * C450 + C9257 * C456) * C77 +
           (C1031 * C454 + C1027 * C460 + C1032 * C453 + C9257 * C459) * C68 -
           (C1032 * C449 + C9257 * C455 + C1031 * C450 + C1027 * C456) * C78 -
           (C1032 * C452 + C9257 * C458 + C1031 * C453 + C1027 * C459) * C69) *
              C9263) *
         C9196 * C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C121 +
            (C1031 * C122 + C1027 * C126 + C1032 * C123 + C9257 * C127) *
                C9274) *
               C1029 +
           ((C1031 * C451 + C1027 * C457 + C1032 * C450 + C9257 * C456) * C121 +
            (C1031 * C491 + C1027 * C494 + C1032 * C490 + C9257 * C493) *
                C9274) *
               C9263) *
              C9196 * C68 -
          (((C1032 * C489 + C9257 * C492 + C1031 * C490 + C1027 * C493) *
                C9274 +
            (C1032 * C449 + C9257 * C455 + C1031 * C450 + C1027 * C456) *
                C121) *
               C9263 +
           ((C1032 * C124 + C9257 * C128 + C1031 * C123 + C1027 * C127) *
                C9274 +
            (C1032 * C81 + C9257 * C85 + C1031 * C80 + C1027 * C84) * C121) *
               C1029) *
              C9196 * C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C156 +
            (C1031 * C157 + C1027 * C161 + C1032 * C158 + C9257 * C162) *
                C9273) *
               C1029 +
           ((C1031 * C451 + C1027 * C457 + C1032 * C450 + C9257 * C456) * C156 +
            (C1031 * C523 + C1027 * C526 + C1032 * C522 + C9257 * C525) *
                C9273) *
               C9263) *
              C9196 * C9274 * C68 -
          (((C1032 * C521 + C9257 * C524 + C1031 * C522 + C1027 * C525) *
                C9273 +
            (C1032 * C449 + C9257 * C455 + C1031 * C450 + C1027 * C456) *
                C156) *
               C9263 +
           ((C1032 * C159 + C9257 * C163 + C1031 * C158 + C1027 * C162) *
                C9273 +
            (C1032 * C81 + C9257 * C85 + C1031 * C80 + C1027 * C84) * C156) *
               C1029) *
              C9196 * C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C77 +
           (C1135 * C86 + C1029 * C196 + C1136 * C454 + C9263 * C558) * C68 -
           (C1146 + C1147) * C78 - (C1148 + C1149) * C69) *
              C9196 * C1027 +
          ((C1147 + C1146) * C77 + (C1149 + C1148) * C68 -
           (C1136 * C449 + C9263 * C553 + C1135 * C81 + C1029 * C194) * C78 -
           (C1136 * C452 + C9263 * C556 + C1135 * C88 + C1029 * C198) * C69) *
              C9196 * C9257) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C121 +
            (C1135 * C122 + C1029 * C238 + C1136 * C491 + C9263 * C585) *
                C9274) *
               C9196 * C1027 +
           ((C1147 + C1146) * C121 + (C1188 + C1189) * C9274) * C9196 * C9257) *
              C68 -
          (((C1136 * C489 + C9263 * C587 + C1135 * C124 + C1029 * C240) *
                C9274 +
            (C1136 * C449 + C9263 * C553 + C1135 * C81 + C1029 * C194) * C121) *
               C9196 * C9257 +
           ((C1189 + C1188) * C9274 + (C1146 + C1147) * C121) * C9196 * C1027) *
              C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C156 +
            (C1135 * C157 + C1029 * C278 + C1136 * C523 + C9263 * C616) *
                C9273) *
               C9196 * C1027 +
           ((C1147 + C1146) * C156 + (C1228 + C1229) * C9273) * C9196 * C9257) *
              C9274 * C68 -
          (((C1136 * C521 + C9263 * C614 + C1135 * C159 + C1029 * C280) *
                C9273 +
            (C1136 * C449 + C9263 * C553 + C1135 * C81 + C1029 * C194) * C156) *
               C9196 * C9257 +
           ((C1229 + C1228) * C9273 + (C1146 + C1147) * C156) * C9196 * C1027) *
              C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C9196 * C319) * C77 +
            (C318 * C86 + C9196 * C323) * C68 - C336 * C78 - C337 * C69) *
               C1027 +
           (C336 * C77 + C337 * C68 - C338 * C78 - C339 * C69) * C9257) *
              C1029 +
          (((C318 * C451 + C9196 * C645) * C77 +
            (C318 * C454 + C9196 * C648) * C68 - C1268 * C78 - C1269 * C69) *
               C1027 +
           (C1268 * C77 + C1269 * C68 - (C318 * C449 + C9196 * C643) * C78 -
            (C318 * C452 + C9196 * C646) * C69) *
               C9257) *
              C9263) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] += (2 * std::pow(Pi, 2.5) *
                  (((((C318 * C79 + C9196 * C319) * C121 +
                      (C318 * C122 + C9196 * C365) * C9274) *
                         C1027 +
                     (C370 + C378) * C9257) *
                        C1029 +
                    (((C318 * C451 + C9196 * C645) * C121 +
                      (C318 * C491 + C9196 * C675) * C9274) *
                         C1027 +
                     (C1304 + C1308) * C9257) *
                        C9263) *
                       C68 -
                   ((((C318 * C489 + C9196 * C677) * C9274 +
                      (C318 * C449 + C9196 * C643) * C121) *
                         C9257 +
                     (C1308 + C1304) * C1027) *
                        C9263 +
                    ((C379 + C373) * C9257 + (C378 + C370) * C1027) * C1029) *
                       C69) *
                  C9273) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (2 * std::pow(Pi, 2.5) *
                  (((((C318 * C79 + C9196 * C319) * C156 +
                      (C318 * C157 + C9196 * C405) * C9273) *
                         C1027 +
                     (C410 + C418) * C9257) *
                        C1029 +
                    (((C318 * C451 + C9196 * C645) * C156 +
                      (C318 * C523 + C9196 * C706) * C9273) *
                         C1027 +
                     (C1343 + C1347) * C9257) *
                        C9263) *
                       C9274 * C68 -
                   ((((C318 * C521 + C9196 * C704) * C9273 +
                      (C318 * C449 + C9196 * C643) * C156) *
                         C9257 +
                     (C1347 + C1343) * C1027) *
                        C9263 +
                    ((C419 + C413) * C9257 + (C418 + C410) * C1027) * C1029) *
                       C9274 * C69)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C448 +
            (C1031 * C86 + C1027 * C91 + C1032 * C87 + C9257 * C92) * C9272) *
               C1029 +
           ((C1398 + C1399) * C448 + (C1400 + C1401) * C9272) * C9263) *
              C9196 * C9273 * C446 -
          (((C1032 * C1383 + C9257 * C1387 + C1031 * C1384 + C1027 * C1388) *
                C9272 +
            (C1032 * C1381 + C9257 * C1385 + C1031 * C1382 + C1027 * C1386) *
                C448) *
               C9263 +
           ((C1401 + C1400) * C9272 + (C1399 + C1398) * C448) * C1029) *
              C9196 * C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C487 +
           (C1031 * C122 + C1027 * C126 + C1032 * C123 + C9257 * C127) * C446 -
           (C1399 + C1398) * C488 - (C1444 + C1445) * C447) *
              C1029 +
          ((C1398 + C1399) * C487 + (C1445 + C1444) * C446 -
           (C1032 * C1381 + C9257 * C1385 + C1031 * C1382 + C1027 * C1386) *
               C488 -
           (C1032 * C1435 + C9257 * C1437 + C1031 * C1436 + C1027 * C1438) *
               C447) *
              C9263) *
         C9196 * C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C156 +
            (C1031 * C157 + C1027 * C161 + C1032 * C158 + C9257 * C162) *
                C9273) *
               C1029 +
           ((C1398 + C1399) * C156 + (C1488 + C1489) * C9273) * C9263) *
              C9196 * C446 -
          (((C1032 * C1479 + C9257 * C1481 + C1031 * C1480 + C1027 * C1482) *
                C9273 +
            (C1032 * C1381 + C9257 * C1385 + C1031 * C1382 + C1027 * C1386) *
                C156) *
               C9263 +
           ((C1489 + C1488) * C9273 + (C1399 + C1398) * C156) * C1029) *
              C9196 * C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C448 +
            (C1135 * C86 + C1029 * C196 + C1136 * C454 + C9263 * C558) *
                C9272) *
               C9196 * C1027 +
           ((C1147 + C1146) * C448 + (C1149 + C1148) * C9272) * C9196 * C9257) *
              C9273 * C446 -
          (((C1136 * C1383 + C9263 * C1525 + C1135 * C453 + C1029 * C557) *
                C9272 +
            (C1136 * C1381 + C9263 * C1523 + C1135 * C450 + C1029 * C554) *
                C448) *
               C9196 * C9257 +
           ((C1136 * C1384 + C9263 * C1526 + C1135 * C454 + C1029 * C558) *
                C9272 +
            (C1136 * C1382 + C9263 * C1524 + C1135 * C451 + C1029 * C555) *
                C448) *
               C9196 * C1027) *
              C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C487 +
           (C1135 * C122 + C1029 * C238 + C1136 * C491 + C9263 * C585) * C446 -
           (C1136 * C1382 + C9263 * C1524 + C1135 * C451 + C1029 * C555) *
               C488 -
           (C1136 * C1436 + C9263 * C1561 + C1135 * C491 + C1029 * C585) *
               C447) *
              C9196 * C1027 +
          ((C1147 + C1146) * C487 + (C1188 + C1189) * C446 -
           (C1136 * C1381 + C9263 * C1523 + C1135 * C450 + C1029 * C554) *
               C488 -
           (C1136 * C1435 + C9263 * C1562 + C1135 * C490 + C1029 * C586) *
               C447) *
              C9196 * C9257) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C156 +
            (C1135 * C157 + C1029 * C278 + C1136 * C523 + C9263 * C616) *
                C9273) *
               C9196 * C1027 +
           ((C1147 + C1146) * C156 + (C1228 + C1229) * C9273) * C9196 * C9257) *
              C446 -
          (((C1136 * C1479 + C9263 * C1597 + C1135 * C522 + C1029 * C615) *
                C9273 +
            (C1136 * C1381 + C9263 * C1523 + C1135 * C450 + C1029 * C554) *
                C156) *
               C9196 * C9257 +
           ((C1136 * C1480 + C9263 * C1598 + C1135 * C523 + C1029 * C616) *
                C9273 +
            (C1136 * C1382 + C9263 * C1524 + C1135 * C451 + C1029 * C555) *
                C156) *
               C9196 * C1027) *
              C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C9196 * C319) * C448 +
             (C318 * C86 + C9196 * C323) * C9272) *
                C1027 +
            (C336 * C448 + C337 * C9272) * C9257) *
               C1029 +
           ((C1646 + C1647) * C1027 + (C1642 + C1643) * C9257) * C9263) *
              C9273 * C446 -
          ((((C318 * C1383 + C9196 * C1635) * C9272 +
             (C318 * C1381 + C9196 * C1633) * C448) *
                C9257 +
            ((C318 * C1384 + C9196 * C1636) * C9272 +
             (C318 * C1382 + C9196 * C1634) * C448) *
                C1027) *
               C9263 +
           ((C1643 + C1642) * C9257 + (C1647 + C1646) * C1027) * C1029) *
              C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C9196 * C319) * C487 +
            (C318 * C122 + C9196 * C365) * C446 - C1644 * C488 - C1686 * C447) *
               C1027 +
           (C336 * C487 + C376 * C446 - C1268 * C488 - C1307 * C447) * C9257) *
              C1029 +
          ((C1644 * C487 + C1686 * C446 -
            (C318 * C1382 + C9196 * C1634) * C488 -
            (C318 * C1436 + C9196 * C1681) * C447) *
               C1027 +
           (C1268 * C487 + C1307 * C446 -
            (C318 * C1381 + C9196 * C1633) * C488 -
            (C318 * C1435 + C9196 * C1682) * C447) *
               C9257) *
              C9263) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C9196 * C319) * C156 +
             (C318 * C157 + C9196 * C405) * C9273) *
                C1027 +
            (C410 + C418) * C9257) *
               C1029 +
           ((C1723 + C1727) * C1027 + (C1343 + C1347) * C9257) * C9263) *
              C446 -
          ((((C318 * C1479 + C9196 * C1720) * C9273 +
             (C318 * C1381 + C9196 * C1633) * C156) *
                C9257 +
            ((C318 * C1480 + C9196 * C1721) * C9273 +
             (C318 * C1382 + C9196 * C1634) * C156) *
                C1027) *
               C9263 +
           ((C1347 + C1343) * C9257 + (C1727 + C1723) * C1027) * C1029) *
              C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C448 +
            (C1031 * C86 + C1027 * C91 + C1032 * C87 + C9257 * C92) * C9272) *
               C1029 +
           ((C1398 + C1399) * C448 + (C1400 + C1401) * C9272) * C9263) *
              C9196 * C733 -
          (((C1032 * C1763 + C9257 * C1767 + C1031 * C1764 + C1027 * C1768) *
                C9272 +
            (C1032 * C1761 + C9257 * C1765 + C1031 * C1762 + C1027 * C1766) *
                C448) *
               C9263 +
           ((C1032 * C739 + C9257 * C745 + C1031 * C740 + C1027 * C746) *
                C9272 +
            (C1032 * C736 + C9257 * C742 + C1031 * C737 + C1027 * C743) *
                C448) *
               C1029) *
              C9196 * C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C121 +
            (C1031 * C122 + C1027 * C126 + C1032 * C123 + C9257 * C127) *
                C9274) *
               C1029 +
           ((C1398 + C1399) * C121 + (C1445 + C1444) * C9274) * C9263) *
              C9196 * C9272 * C733 -
          (((C1032 * C1803 + C9257 * C1805 + C1031 * C1804 + C1027 * C1806) *
                C9274 +
            (C1032 * C1761 + C9257 * C1765 + C1031 * C1762 + C1027 * C1766) *
                C121) *
               C9263 +
           ((C1032 * C774 + C9257 * C777 + C1031 * C775 + C1027 * C778) *
                C9274 +
            (C1032 * C736 + C9257 * C742 + C1031 * C737 + C1027 * C743) *
                C121) *
               C1029) *
              C9196 * C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C805 +
           (C1031 * C157 + C1027 * C161 + C1032 * C158 + C9257 * C162) * C733 -
           (C1032 * C736 + C9257 * C742 + C1031 * C737 + C1027 * C743) * C806 -
           (C1032 * C808 + C9257 * C811 + C1031 * C809 + C1027 * C812) * C734) *
              C1029 +
          ((C1398 + C1399) * C805 + (C1488 + C1489) * C733 -
           (C1032 * C1761 + C9257 * C1765 + C1031 * C1762 + C1027 * C1766) *
               C806 -
           (C1032 * C1841 + C9257 * C1843 + C1031 * C1842 + C1027 * C1844) *
               C734) *
              C9263) *
         C9196 * C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C448 +
            (C1135 * C86 + C1029 * C196 + C1136 * C454 + C9263 * C558) *
                C9272) *
               C9196 * C1027 +
           ((C1147 + C1146) * C448 + (C1149 + C1148) * C9272) * C9196 * C9257) *
              C733 -
          (((C1136 * C1763 + C9263 * C1881 + C1135 * C739 + C1029 * C843) *
                C9272 +
            (C1136 * C1761 + C9263 * C1879 + C1135 * C736 + C1029 * C840) *
                C448) *
               C9196 * C9257 +
           ((C1136 * C1764 + C9263 * C1882 + C1135 * C740 + C1029 * C844) *
                C9272 +
            (C1136 * C1762 + C9263 * C1880 + C1135 * C737 + C1029 * C841) *
                C448) *
               C9196 * C1027) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C121 +
            (C1135 * C122 + C1029 * C238 + C1136 * C491 + C9263 * C585) *
                C9274) *
               C9196 * C1027 +
           ((C1147 + C1146) * C121 + (C1188 + C1189) * C9274) * C9196 * C9257) *
              C9272 * C733 -
          (((C1136 * C1803 + C9263 * C1917 + C1135 * C774 + C1029 * C872) *
                C9274 +
            (C1136 * C1761 + C9263 * C1879 + C1135 * C736 + C1029 * C840) *
                C121) *
               C9196 * C9257 +
           ((C1136 * C1804 + C9263 * C1918 + C1135 * C775 + C1029 * C873) *
                C9274 +
            (C1136 * C1762 + C9263 * C1880 + C1135 * C737 + C1029 * C841) *
                C121) *
               C9196 * C1027) *
              C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C805 +
           (C1135 * C157 + C1029 * C278 + C1136 * C523 + C9263 * C616) * C733 -
           (C1136 * C1762 + C9263 * C1880 + C1135 * C737 + C1029 * C841) *
               C806 -
           (C1136 * C1842 + C9263 * C1953 + C1135 * C809 + C1029 * C900) *
               C734) *
              C9196 * C1027 +
          ((C1147 + C1146) * C805 + (C1228 + C1229) * C733 -
           (C1136 * C1761 + C9263 * C1879 + C1135 * C736 + C1029 * C840) *
               C806 -
           (C1136 * C1841 + C9263 * C1954 + C1135 * C808 + C1029 * C901) *
               C734) *
              C9196 * C9257) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C9196 * C319) * C448 +
             (C318 * C86 + C9196 * C323) * C9272) *
                C1027 +
            (C336 * C448 + C337 * C9272) * C9257) *
               C1029 +
           ((C1646 + C1647) * C1027 + (C1642 + C1643) * C9257) * C9263) *
              C733 -
          ((((C318 * C1763 + C9196 * C1991) * C9272 +
             (C318 * C1761 + C9196 * C1989) * C448) *
                C9257 +
            ((C318 * C1764 + C9196 * C1992) * C9272 +
             (C318 * C1762 + C9196 * C1990) * C448) *
                C1027) *
               C9263 +
           (((C318 * C739 + C9196 * C933) * C9272 +
             (C318 * C736 + C9196 * C930) * C448) *
                C9257 +
            ((C318 * C740 + C9196 * C934) * C9272 +
             (C318 * C737 + C9196 * C931) * C448) *
                C1027) *
               C1029) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C9196 * C319) * C121 +
             (C318 * C122 + C9196 * C365) * C9274) *
                C1027 +
            (C370 + C378) * C9257) *
               C1029 +
           ((C1644 * C121 + C1686 * C9274) * C1027 + (C1304 + C1308) * C9257) *
               C9263) *
              C9272 * C733 -
          ((((C318 * C1803 + C9196 * C2027) * C9274 +
             (C318 * C1761 + C9196 * C1989) * C121) *
                C9257 +
            ((C318 * C1804 + C9196 * C2028) * C9274 +
             (C318 * C1762 + C9196 * C1990) * C121) *
                C1027) *
               C9263 +
           (((C318 * C774 + C9196 * C962) * C9274 +
             (C318 * C736 + C9196 * C930) * C121) *
                C9257 +
            ((C318 * C775 + C9196 * C963) * C9274 +
             (C318 * C737 + C9196 * C931) * C121) *
                C1027) *
               C1029) *
              C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C9196 * C319) * C805 +
            (C318 * C157 + C9196 * C405) * C733 -
            (C318 * C737 + C9196 * C931) * C806 -
            (C318 * C809 + C9196 * C990) * C734) *
               C1027 +
           (C336 * C805 + C416 * C733 - (C318 * C736 + C9196 * C930) * C806 -
            (C318 * C808 + C9196 * C991) * C734) *
               C9257) *
              C1029 +
          ((C1644 * C805 + C1726 * C733 -
            (C318 * C1762 + C9196 * C1990) * C806 -
            (C318 * C1842 + C9196 * C2063) * C734) *
               C1027 +
           (C1268 * C805 + C1346 * C733 -
            (C318 * C1761 + C9196 * C1989) * C806 -
            (C318 * C1841 + C9196 * C2064) * C734) *
               C9257) *
              C9263) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C77 +
           (C1031 * C86 + C1027 * C91 + C1032 * C87 + C9257 * C92) * C68 -
           (C1032 * C81 + C9257 * C85 + C1031 * C80 + C1027 * C84) * C78 -
           (C1032 * C88 + C9257 * C93 + C1031 * C87 + C1027 * C92) * C69) *
              C9181 * C2099 +
          ((C1031 * C737 + C1027 * C743 + C1032 * C736 + C9257 * C742) * C77 +
           (C1031 * C740 + C1027 * C746 + C1032 * C739 + C9257 * C745) * C68 -
           (C1032 * C735 + C9257 * C741 + C1031 * C736 + C1027 * C742) * C78 -
           (C1032 * C738 + C9257 * C744 + C1031 * C739 + C1027 * C745) * C69) *
              C9181 * C9265) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C121 +
            (C1031 * C122 + C1027 * C126 + C1032 * C123 + C9257 * C127) *
                C9274) *
               C9181 * C2099 +
           ((C1031 * C737 + C1027 * C743 + C1032 * C736 + C9257 * C742) * C121 +
            (C1031 * C775 + C1027 * C778 + C1032 * C774 + C9257 * C777) *
                C9274) *
               C9181 * C9265) *
              C68 -
          (((C1032 * C773 + C9257 * C776 + C1031 * C774 + C1027 * C777) *
                C9274 +
            (C1032 * C735 + C9257 * C741 + C1031 * C736 + C1027 * C742) *
                C121) *
               C9181 * C9265 +
           ((C1032 * C124 + C9257 * C128 + C1031 * C123 + C1027 * C127) *
                C9274 +
            (C1032 * C81 + C9257 * C85 + C1031 * C80 + C1027 * C84) * C121) *
               C9181 * C2099) *
              C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C156 +
            (C1031 * C157 + C1027 * C161 + C1032 * C158 + C9257 * C162) *
                C9273) *
               C9181 * C2099 +
           ((C1031 * C737 + C1027 * C743 + C1032 * C736 + C9257 * C742) * C156 +
            (C1031 * C809 + C1027 * C812 + C1032 * C808 + C9257 * C811) *
                C9273) *
               C9181 * C9265) *
              C9274 * C68 -
          (((C1032 * C807 + C9257 * C810 + C1031 * C808 + C1027 * C811) *
                C9273 +
            (C1032 * C735 + C9257 * C741 + C1031 * C736 + C1027 * C742) *
                C156) *
               C9181 * C9265 +
           ((C1032 * C159 + C9257 * C163 + C1031 * C158 + C1027 * C162) *
                C9273 +
            (C1032 * C81 + C9257 * C85 + C1031 * C80 + C1027 * C84) * C156) *
               C9181 * C2099) *
              C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C9181 * C192) * C77 +
            (C191 * C86 + C9181 * C196) * C68 - C209 * C78 - C210 * C69) *
               C2099 +
           ((C191 * C737 + C9181 * C841) * C77 +
            (C191 * C740 + C9181 * C844) * C68 - C2208 * C78 - C2209 * C69) *
               C9265) *
              C1027 +
          ((C209 * C77 + C210 * C68 - C211 * C78 - C212 * C69) * C2099 +
           (C2208 * C77 + C2209 * C68 - (C191 * C735 + C9181 * C839) * C78 -
            (C191 * C738 + C9181 * C842) * C69) *
               C9265) *
              C9257) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] += (2 * std::pow(Pi, 2.5) *
                  (((((C191 * C79 + C9181 * C192) * C121 +
                      (C191 * C122 + C9181 * C238) * C9274) *
                         C2099 +
                     ((C191 * C737 + C9181 * C841) * C121 +
                      (C191 * C775 + C9181 * C873) * C9274) *
                         C9265) *
                        C1027 +
                    ((C243 + C251) * C2099 + (C2244 + C2248) * C9265) * C9257) *
                       C68 -
                   ((((C191 * C773 + C9181 * C871) * C9274 +
                      (C191 * C735 + C9181 * C839) * C121) *
                         C9265 +
                     (C252 + C246) * C2099) *
                        C9257 +
                    ((C2248 + C2244) * C9265 + (C251 + C243) * C2099) * C1027) *
                       C69) *
                  C9273) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] += (2 * std::pow(Pi, 2.5) *
                  (((((C191 * C79 + C9181 * C192) * C156 +
                      (C191 * C157 + C9181 * C278) * C9273) *
                         C2099 +
                     ((C191 * C737 + C9181 * C841) * C156 +
                      (C191 * C809 + C9181 * C900) * C9273) *
                         C9265) *
                        C1027 +
                    ((C283 + C291) * C2099 + (C2283 + C2287) * C9265) * C9257) *
                       C9274 * C68 -
                   ((((C191 * C807 + C9181 * C902) * C9273 +
                      (C191 * C735 + C9181 * C839) * C156) *
                         C9265 +
                     (C292 + C286) * C2099) *
                        C9257 +
                    ((C2287 + C2283) * C9265 + (C291 + C283) * C2099) * C1027) *
                       C9274 * C69)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C77 +
           (C2321 * C86 + C2099 * C323 + C2322 * C740 + C9265 * C934) * C68 -
           (C2332 + C2333) * C78 - (C2334 + C2335) * C69) *
              C1027 +
          ((C2333 + C2332) * C77 + (C2335 + C2334) * C68 -
           (C2322 * C735 + C9265 * C929 + C2321 * C81 + C2099 * C321) * C78 -
           (C2322 * C738 + C9265 * C932 + C2321 * C88 + C2099 * C325) * C69) *
              C9257) *
         C9181 * C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C121 +
            (C2321 * C122 + C2099 * C365 + C2322 * C775 + C9265 * C963) *
                C9274) *
               C1027 +
           ((C2333 + C2332) * C121 + (C2374 + C2375) * C9274) * C9257) *
              C9181 * C68 -
          (((C2322 * C773 + C9265 * C961 + C2321 * C124 + C2099 * C367) *
                C9274 +
            (C2322 * C735 + C9265 * C929 + C2321 * C81 + C2099 * C321) * C121) *
               C9257 +
           ((C2375 + C2374) * C9274 + (C2332 + C2333) * C121) * C1027) *
              C9181 * C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C156 +
            (C2321 * C157 + C2099 * C405 + C2322 * C809 + C9265 * C990) *
                C9273) *
               C1027 +
           ((C2333 + C2332) * C156 + (C2414 + C2415) * C9273) * C9257) *
              C9181 * C9274 * C68 -
          (((C2322 * C807 + C9265 * C992 + C2321 * C159 + C2099 * C407) *
                C9273 +
            (C2322 * C735 + C9265 * C929 + C2321 * C81 + C2099 * C321) * C156) *
               C9257 +
           ((C2415 + C2414) * C9273 + (C2332 + C2333) * C156) * C1027) *
              C9181 * C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C448 +
            (C1031 * C86 + C1027 * C91 + C1032 * C87 + C9257 * C92) * C9272) *
               C9181 * C2099 +
           ((C1031 * C737 + C1027 * C743 + C1032 * C736 + C9257 * C742) * C448 +
            (C1031 * C740 + C1027 * C746 + C1032 * C739 + C9257 * C745) *
                C9272) *
               C9181 * C9265) *
              C9273 * C446 -
          (((C1032 * C1763 + C9257 * C1767 + C1031 * C1764 + C1027 * C1768) *
                C9272 +
            (C1032 * C1761 + C9257 * C1765 + C1031 * C1762 + C1027 * C1766) *
                C448) *
               C9181 * C9265 +
           ((C1401 + C1400) * C9272 + (C1399 + C1398) * C448) * C9181 * C2099) *
              C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C487 +
           (C1031 * C122 + C1027 * C126 + C1032 * C123 + C9257 * C127) * C446 -
           (C1399 + C1398) * C488 - (C1444 + C1445) * C447) *
              C9181 * C2099 +
          ((C1031 * C737 + C1027 * C743 + C1032 * C736 + C9257 * C742) * C487 +
           (C1031 * C775 + C1027 * C778 + C1032 * C774 + C9257 * C777) * C446 -
           (C1032 * C1761 + C9257 * C1765 + C1031 * C1762 + C1027 * C1766) *
               C488 -
           (C1032 * C1803 + C9257 * C1805 + C1031 * C1804 + C1027 * C1806) *
               C447) *
              C9181 * C9265) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C156 +
            (C1031 * C157 + C1027 * C161 + C1032 * C158 + C9257 * C162) *
                C9273) *
               C9181 * C2099 +
           ((C1031 * C737 + C1027 * C743 + C1032 * C736 + C9257 * C742) * C156 +
            (C1031 * C809 + C1027 * C812 + C1032 * C808 + C9257 * C811) *
                C9273) *
               C9181 * C9265) *
              C446 -
          (((C1032 * C1841 + C9257 * C1843 + C1031 * C1842 + C1027 * C1844) *
                C9273 +
            (C1032 * C1761 + C9257 * C1765 + C1031 * C1762 + C1027 * C1766) *
                C156) *
               C9181 * C9265 +
           ((C1489 + C1488) * C9273 + (C1399 + C1398) * C156) * C9181 * C2099) *
              C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[7] += (2 * std::pow(Pi, 2.5) *
                  (((((C191 * C79 + C9181 * C192) * C448 +
                      (C191 * C86 + C9181 * C196) * C9272) *
                         C2099 +
                     ((C191 * C737 + C9181 * C841) * C448 +
                      (C191 * C740 + C9181 * C844) * C9272) *
                         C9265) *
                        C1027 +
                    ((C209 * C448 + C210 * C9272) * C2099 +
                     (C2208 * C448 + C2209 * C9272) * C9265) *
                        C9257) *
                       C9273 * C446 -
                   ((((C191 * C1763 + C9181 * C1881) * C9272 +
                      (C191 * C1761 + C9181 * C1879) * C448) *
                         C9265 +
                     ((C191 * C453 + C9181 * C557) * C9272 +
                      (C191 * C450 + C9181 * C554) * C448) *
                         C2099) *
                        C9257 +
                    (((C191 * C1764 + C9181 * C1882) * C9272 +
                      (C191 * C1762 + C9181 * C1880) * C448) *
                         C9265 +
                     ((C191 * C454 + C9181 * C558) * C9272 +
                      (C191 * C451 + C9181 * C555) * C448) *
                         C2099) *
                        C1027) *
                       C9273 * C447)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C9181 * C192) * C487 +
            (C191 * C122 + C9181 * C238) * C446 -
            (C191 * C451 + C9181 * C555) * C488 -
            (C191 * C491 + C9181 * C585) * C447) *
               C2099 +
           ((C191 * C737 + C9181 * C841) * C487 +
            (C191 * C775 + C9181 * C873) * C446 -
            (C191 * C1762 + C9181 * C1880) * C488 -
            (C191 * C1804 + C9181 * C1918) * C447) *
               C9265) *
              C1027 +
          ((C209 * C487 + C249 * C446 - (C191 * C450 + C9181 * C554) * C488 -
            (C191 * C490 + C9181 * C586) * C447) *
               C2099 +
           (C2208 * C487 + C2247 * C446 -
            (C191 * C1761 + C9181 * C1879) * C488 -
            (C191 * C1803 + C9181 * C1917) * C447) *
               C9265) *
              C9257) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eeyz[7] += (2 * std::pow(Pi, 2.5) *
                  (((((C191 * C79 + C9181 * C192) * C156 +
                      (C191 * C157 + C9181 * C278) * C9273) *
                         C2099 +
                     ((C191 * C737 + C9181 * C841) * C156 +
                      (C191 * C809 + C9181 * C900) * C9273) *
                         C9265) *
                        C1027 +
                    ((C283 + C291) * C2099 + (C2283 + C2287) * C9265) * C9257) *
                       C446 -
                   ((((C191 * C1841 + C9181 * C1954) * C9273 +
                      (C191 * C1761 + C9181 * C1879) * C156) *
                         C9265 +
                     ((C191 * C522 + C9181 * C615) * C9273 +
                      (C191 * C450 + C9181 * C554) * C156) *
                         C2099) *
                        C9257 +
                    (((C191 * C1842 + C9181 * C1953) * C9273 +
                      (C191 * C1762 + C9181 * C1880) * C156) *
                         C9265 +
                     ((C191 * C523 + C9181 * C616) * C9273 +
                      (C191 * C451 + C9181 * C555) * C156) *
                         C2099) *
                        C1027) *
                       C447) *
                  C9272) /
                 (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C448 +
            (C2321 * C86 + C2099 * C323 + C2322 * C740 + C9265 * C934) *
                C9272) *
               C1027 +
           ((C2333 + C2332) * C448 + (C2335 + C2334) * C9272) * C9257) *
              C9181 * C9273 * C446 -
          (((C2322 * C1763 + C9265 * C1991 + C2321 * C453 + C2099 * C647) *
                C9272 +
            (C2322 * C1761 + C9265 * C1989 + C2321 * C450 + C2099 * C644) *
                C448) *
               C9257 +
           ((C2322 * C1764 + C9265 * C1992 + C2321 * C454 + C2099 * C648) *
                C9272 +
            (C2322 * C1762 + C9265 * C1990 + C2321 * C451 + C2099 * C645) *
                C448) *
               C1027) *
              C9181 * C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C487 +
           (C2321 * C122 + C2099 * C365 + C2322 * C775 + C9265 * C963) * C446 -
           (C2322 * C1762 + C9265 * C1990 + C2321 * C451 + C2099 * C645) *
               C488 -
           (C2322 * C1804 + C9265 * C2028 + C2321 * C491 + C2099 * C675) *
               C447) *
              C1027 +
          ((C2333 + C2332) * C487 + (C2374 + C2375) * C446 -
           (C2322 * C1761 + C9265 * C1989 + C2321 * C450 + C2099 * C644) *
               C488 -
           (C2322 * C1803 + C9265 * C2027 + C2321 * C490 + C2099 * C676) *
               C447) *
              C9257) *
         C9181 * C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C156 +
            (C2321 * C157 + C2099 * C405 + C2322 * C809 + C9265 * C990) *
                C9273) *
               C1027 +
           ((C2333 + C2332) * C156 + (C2414 + C2415) * C9273) * C9257) *
              C9181 * C446 -
          (((C2322 * C1841 + C9265 * C2064 + C2321 * C522 + C2099 * C705) *
                C9273 +
            (C2322 * C1761 + C9265 * C1989 + C2321 * C450 + C2099 * C644) *
                C156) *
               C9257 +
           ((C2322 * C1842 + C9265 * C2063 + C2321 * C523 + C2099 * C706) *
                C9273 +
            (C2322 * C1762 + C9265 * C1990 + C2321 * C451 + C2099 * C645) *
                C156) *
               C1027) *
              C9181 * C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C448 +
            (C1031 * C86 + C1027 * C91 + C1032 * C87 + C9257 * C92) * C9272) *
               C9181 * C2099 +
           ((C2772 + C2773) * C448 + (C2774 + C2775) * C9272) * C9181 * C9265) *
              C733 -
          (((C1032 * C2757 + C9257 * C2761 + C1031 * C2758 + C1027 * C2762) *
                C9272 +
            (C1032 * C2755 + C9257 * C2759 + C1031 * C2756 + C1027 * C2760) *
                C448) *
               C9181 * C9265 +
           ((C2775 + C2774) * C9272 + (C2773 + C2772) * C448) * C9181 * C2099) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C121 +
            (C1031 * C122 + C1027 * C126 + C1032 * C123 + C9257 * C127) *
                C9274) *
               C9181 * C2099 +
           ((C2772 + C2773) * C121 + (C2818 + C2819) * C9274) * C9181 * C9265) *
              C9272 * C733 -
          (((C1032 * C2809 + C9257 * C2811 + C1031 * C2810 + C1027 * C2812) *
                C9274 +
            (C1032 * C2755 + C9257 * C2759 + C1031 * C2756 + C1027 * C2760) *
                C121) *
               C9181 * C9265 +
           ((C2819 + C2818) * C9274 + (C2773 + C2772) * C121) * C9181 * C2099) *
              C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1031 * C79 + C1027 * C83 + C1032 * C80 + C9257 * C84) * C805 +
           (C1031 * C157 + C1027 * C161 + C1032 * C158 + C9257 * C162) * C733 -
           (C2773 + C2772) * C806 - (C2862 + C2863) * C734) *
              C9181 * C2099 +
          ((C2772 + C2773) * C805 + (C2863 + C2862) * C733 -
           (C1032 * C2755 + C9257 * C2759 + C1031 * C2756 + C1027 * C2760) *
               C806 -
           (C1032 * C2853 + C9257 * C2855 + C1031 * C2854 + C1027 * C2856) *
               C734) *
              C9181 * C9265) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C191 * C79 + C9181 * C192) * C448 +
             (C191 * C86 + C9181 * C196) * C9272) *
                C2099 +
            (C2910 + C2911) * C9265) *
               C1027 +
           ((C209 * C448 + C210 * C9272) * C2099 + (C2906 + C2907) * C9265) *
               C9257) *
              C733 -
          ((((C191 * C2757 + C9181 * C2899) * C9272 +
             (C191 * C2755 + C9181 * C2897) * C448) *
                C9265 +
            (C2907 + C2906) * C2099) *
               C9257 +
           (((C191 * C2758 + C9181 * C2900) * C9272 +
             (C191 * C2756 + C9181 * C2898) * C448) *
                C9265 +
            (C2911 + C2910) * C2099) *
               C1027) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] += (2 * std::pow(Pi, 2.5) *
                  (((((C191 * C79 + C9181 * C192) * C121 +
                      (C191 * C122 + C9181 * C238) * C9274) *
                         C2099 +
                     (C2948 + C2952) * C9265) *
                        C1027 +
                    ((C243 + C251) * C2099 + (C2244 + C2248) * C9265) * C9257) *
                       C9272 * C733 -
                   ((((C191 * C2809 + C9181 * C2945) * C9274 +
                      (C191 * C2755 + C9181 * C2897) * C121) *
                         C9265 +
                     (C2248 + C2244) * C2099) *
                        C9257 +
                    (((C191 * C2810 + C9181 * C2946) * C9274 +
                      (C191 * C2756 + C9181 * C2898) * C121) *
                         C9265 +
                     (C2952 + C2948) * C2099) *
                        C1027) *
                       C9272 * C734)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C9181 * C192) * C805 +
            (C191 * C157 + C9181 * C278) * C733 - C2908 * C806 - C2991 * C734) *
               C2099 +
           (C2908 * C805 + C2991 * C733 -
            (C191 * C2756 + C9181 * C2898) * C806 -
            (C191 * C2854 + C9181 * C2986) * C734) *
               C9265) *
              C1027 +
          ((C209 * C805 + C289 * C733 - C2208 * C806 - C2286 * C734) * C2099 +
           (C2208 * C805 + C2286 * C733 -
            (C191 * C2755 + C9181 * C2897) * C806 -
            (C191 * C2853 + C9181 * C2987) * C734) *
               C9265) *
              C9257) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C448 +
            (C2321 * C86 + C2099 * C323 + C2322 * C740 + C9265 * C934) *
                C9272) *
               C1027 +
           ((C2333 + C2332) * C448 + (C2335 + C2334) * C9272) * C9257) *
              C9181 * C733 -
          (((C2322 * C2757 + C9265 * C3027 + C2321 * C739 + C2099 * C933) *
                C9272 +
            (C2322 * C2755 + C9265 * C3025 + C2321 * C736 + C2099 * C930) *
                C448) *
               C9257 +
           ((C2322 * C2758 + C9265 * C3028 + C2321 * C740 + C2099 * C934) *
                C9272 +
            (C2322 * C2756 + C9265 * C3026 + C2321 * C737 + C2099 * C931) *
                C448) *
               C1027) *
              C9181 * C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C121 +
            (C2321 * C122 + C2099 * C365 + C2322 * C775 + C9265 * C963) *
                C9274) *
               C1027 +
           ((C2333 + C2332) * C121 + (C2374 + C2375) * C9274) * C9257) *
              C9181 * C9272 * C733 -
          (((C2322 * C2809 + C9265 * C3063 + C2321 * C774 + C2099 * C962) *
                C9274 +
            (C2322 * C2755 + C9265 * C3025 + C2321 * C736 + C2099 * C930) *
                C121) *
               C9257 +
           ((C2322 * C2810 + C9265 * C3064 + C2321 * C775 + C2099 * C963) *
                C9274 +
            (C2322 * C2756 + C9265 * C3026 + C2321 * C737 + C2099 * C931) *
                C121) *
               C1027) *
              C9181 * C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C805 +
           (C2321 * C157 + C2099 * C405 + C2322 * C809 + C9265 * C990) * C733 -
           (C2322 * C2756 + C9265 * C3026 + C2321 * C737 + C2099 * C931) *
               C806 -
           (C2322 * C2854 + C9265 * C3099 + C2321 * C809 + C2099 * C990) *
               C734) *
              C1027 +
          ((C2333 + C2332) * C805 + (C2414 + C2415) * C733 -
           (C2322 * C2755 + C9265 * C3025 + C2321 * C736 + C2099 * C930) *
               C806 -
           (C2322 * C2853 + C9265 * C3100 + C2321 * C808 + C2099 * C991) *
               C734) *
              C9257) *
         C9181 * C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C77 +
           (C3139 * C86 + C3135 * C91 + C3140 * C87 + C9257 * C92) * C68 -
           (C3140 * C81 + C9257 * C85 + C3139 * C80 + C3135 * C84) * C78 -
           (C3140 * C88 + C9257 * C93 + C3139 * C87 + C3135 * C92) * C69) *
              C3137 +
          ((C3139 * C451 + C3135 * C457 + C3140 * C450 + C9257 * C456) * C77 +
           (C3139 * C454 + C3135 * C460 + C3140 * C453 + C9257 * C459) * C68 -
           (C3140 * C449 + C9257 * C455 + C3139 * C450 + C3135 * C456) * C78 -
           (C3140 * C452 + C9257 * C458 + C3139 * C453 + C3135 * C459) * C69) *
              C9263) *
         C9196 * C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C121 +
            (C3139 * C122 + C3135 * C126 + C3140 * C123 + C9257 * C127) *
                C9274) *
               C3137 +
           ((C3139 * C451 + C3135 * C457 + C3140 * C450 + C9257 * C456) * C121 +
            (C3139 * C491 + C3135 * C494 + C3140 * C490 + C9257 * C493) *
                C9274) *
               C9263) *
              C9196 * C68 -
          (((C3140 * C489 + C9257 * C492 + C3139 * C490 + C3135 * C493) *
                C9274 +
            (C3140 * C449 + C9257 * C455 + C3139 * C450 + C3135 * C456) *
                C121) *
               C9263 +
           ((C3140 * C124 + C9257 * C128 + C3139 * C123 + C3135 * C127) *
                C9274 +
            (C3140 * C81 + C9257 * C85 + C3139 * C80 + C3135 * C84) * C121) *
               C3137) *
              C9196 * C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C156 +
            (C3139 * C157 + C3135 * C161 + C3140 * C158 + C9257 * C162) *
                C9273) *
               C3137 +
           ((C3139 * C451 + C3135 * C457 + C3140 * C450 + C9257 * C456) * C156 +
            (C3139 * C523 + C3135 * C526 + C3140 * C522 + C9257 * C525) *
                C9273) *
               C9263) *
              C9196 * C9274 * C68 -
          (((C3140 * C521 + C9257 * C524 + C3139 * C522 + C3135 * C525) *
                C9273 +
            (C3140 * C449 + C9257 * C455 + C3139 * C450 + C3135 * C456) *
                C156) *
               C9263 +
           ((C3140 * C159 + C9257 * C163 + C3139 * C158 + C3135 * C162) *
                C9273 +
            (C3140 * C81 + C9257 * C85 + C3139 * C80 + C3135 * C84) * C156) *
               C3137) *
              C9196 * C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C77 +
           (C3243 * C86 + C3137 * C196 + C3244 * C454 + C9263 * C558) * C68 -
           (C3254 + C3255) * C78 - (C3256 + C3257) * C69) *
              C9196 * C3135 +
          ((C3255 + C3254) * C77 + (C3257 + C3256) * C68 -
           (C3244 * C449 + C9263 * C553 + C3243 * C81 + C3137 * C194) * C78 -
           (C3244 * C452 + C9263 * C556 + C3243 * C88 + C3137 * C198) * C69) *
              C9196 * C9257) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C121 +
            (C3243 * C122 + C3137 * C238 + C3244 * C491 + C9263 * C585) *
                C9274) *
               C9196 * C3135 +
           ((C3255 + C3254) * C121 + (C3296 + C3297) * C9274) * C9196 * C9257) *
              C68 -
          (((C3244 * C489 + C9263 * C587 + C3243 * C124 + C3137 * C240) *
                C9274 +
            (C3244 * C449 + C9263 * C553 + C3243 * C81 + C3137 * C194) * C121) *
               C9196 * C9257 +
           ((C3297 + C3296) * C9274 + (C3254 + C3255) * C121) * C9196 * C3135) *
              C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C156 +
            (C3243 * C157 + C3137 * C278 + C3244 * C523 + C9263 * C616) *
                C9273) *
               C9196 * C3135 +
           ((C3255 + C3254) * C156 + (C3336 + C3337) * C9273) * C9196 * C9257) *
              C9274 * C68 -
          (((C3244 * C521 + C9263 * C614 + C3243 * C159 + C3137 * C280) *
                C9273 +
            (C3244 * C449 + C9263 * C553 + C3243 * C81 + C3137 * C194) * C156) *
               C9196 * C9257 +
           ((C3337 + C3336) * C9273 + (C3254 + C3255) * C156) * C9196 * C3135) *
              C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C9196 * C319) * C77 +
            (C318 * C86 + C9196 * C323) * C68 - C336 * C78 - C337 * C69) *
               C3135 +
           (C336 * C77 + C337 * C68 - C338 * C78 - C339 * C69) * C9257) *
              C3137 +
          ((C1644 * C77 + C1645 * C68 - C1268 * C78 - C1269 * C69) * C3135 +
           (C1268 * C77 + C1269 * C68 - (C318 * C449 + C9196 * C643) * C78 -
            (C318 * C452 + C9196 * C646) * C69) *
               C9257) *
              C9263) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C9196 * C319) * C121 +
             (C318 * C122 + C9196 * C365) * C9274) *
                C3135 +
            (C370 + C378) * C9257) *
               C3137 +
           ((C1644 * C121 + C1686 * C9274) * C3135 + (C1304 + C1308) * C9257) *
               C9263) *
              C68 -
          ((((C318 * C489 + C9196 * C677) * C9274 +
             (C318 * C449 + C9196 * C643) * C121) *
                C9257 +
            (C1308 + C1304) * C3135) *
               C9263 +
           ((C379 + C373) * C9257 + (C378 + C370) * C3135) * C3137) *
              C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C9196 * C319) * C156 +
             (C318 * C157 + C9196 * C405) * C9273) *
                C3135 +
            (C410 + C418) * C9257) *
               C3137 +
           ((C1723 + C1727) * C3135 + (C1343 + C1347) * C9257) * C9263) *
              C9274 * C68 -
          ((((C318 * C521 + C9196 * C704) * C9273 +
             (C318 * C449 + C9196 * C643) * C156) *
                C9257 +
            (C1347 + C1343) * C3135) *
               C9263 +
           ((C419 + C413) * C9257 + (C418 + C410) * C3135) * C3137) *
              C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C448 +
            (C3139 * C86 + C3135 * C91 + C3140 * C87 + C9257 * C92) * C9272) *
               C3137 +
           ((C3482 + C3483) * C448 + (C3484 + C3485) * C9272) * C9263) *
              C9196 * C9273 * C446 -
          (((C3140 * C1383 + C9257 * C1387 + C3139 * C1384 + C3135 * C1388) *
                C9272 +
            (C3140 * C1381 + C9257 * C1385 + C3139 * C1382 + C3135 * C1386) *
                C448) *
               C9263 +
           ((C3485 + C3484) * C9272 + (C3483 + C3482) * C448) * C3137) *
              C9196 * C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C487 +
           (C3139 * C122 + C3135 * C126 + C3140 * C123 + C9257 * C127) * C446 -
           (C3483 + C3482) * C488 - (C3524 + C3525) * C447) *
              C3137 +
          ((C3482 + C3483) * C487 + (C3525 + C3524) * C446 -
           (C3140 * C1381 + C9257 * C1385 + C3139 * C1382 + C3135 * C1386) *
               C488 -
           (C3140 * C1435 + C9257 * C1437 + C3139 * C1436 + C3135 * C1438) *
               C447) *
              C9263) *
         C9196 * C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C156 +
            (C3139 * C157 + C3135 * C161 + C3140 * C158 + C9257 * C162) *
                C9273) *
               C3137 +
           ((C3482 + C3483) * C156 + (C3564 + C3565) * C9273) * C9263) *
              C9196 * C446 -
          (((C3140 * C1479 + C9257 * C1481 + C3139 * C1480 + C3135 * C1482) *
                C9273 +
            (C3140 * C1381 + C9257 * C1385 + C3139 * C1382 + C3135 * C1386) *
                C156) *
               C9263 +
           ((C3565 + C3564) * C9273 + (C3483 + C3482) * C156) * C3137) *
              C9196 * C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C448 +
            (C3243 * C86 + C3137 * C196 + C3244 * C454 + C9263 * C558) *
                C9272) *
               C9196 * C3135 +
           ((C3255 + C3254) * C448 + (C3257 + C3256) * C9272) * C9196 * C9257) *
              C9273 * C446 -
          (((C3244 * C1383 + C9263 * C1525 + C3243 * C453 + C3137 * C557) *
                C9272 +
            (C3244 * C1381 + C9263 * C1523 + C3243 * C450 + C3137 * C554) *
                C448) *
               C9196 * C9257 +
           ((C3244 * C1384 + C9263 * C1526 + C3243 * C454 + C3137 * C558) *
                C9272 +
            (C3244 * C1382 + C9263 * C1524 + C3243 * C451 + C3137 * C555) *
                C448) *
               C9196 * C3135) *
              C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C487 +
           (C3243 * C122 + C3137 * C238 + C3244 * C491 + C9263 * C585) * C446 -
           (C3244 * C1382 + C9263 * C1524 + C3243 * C451 + C3137 * C555) *
               C488 -
           (C3244 * C1436 + C9263 * C1561 + C3243 * C491 + C3137 * C585) *
               C447) *
              C9196 * C3135 +
          ((C3255 + C3254) * C487 + (C3296 + C3297) * C446 -
           (C3244 * C1381 + C9263 * C1523 + C3243 * C450 + C3137 * C554) *
               C488 -
           (C3244 * C1435 + C9263 * C1562 + C3243 * C490 + C3137 * C586) *
               C447) *
              C9196 * C9257) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C156 +
            (C3243 * C157 + C3137 * C278 + C3244 * C523 + C9263 * C616) *
                C9273) *
               C9196 * C3135 +
           ((C3255 + C3254) * C156 + (C3336 + C3337) * C9273) * C9196 * C9257) *
              C446 -
          (((C3244 * C1479 + C9263 * C1597 + C3243 * C522 + C3137 * C615) *
                C9273 +
            (C3244 * C1381 + C9263 * C1523 + C3243 * C450 + C3137 * C554) *
                C156) *
               C9196 * C9257 +
           ((C3244 * C1480 + C9263 * C1598 + C3243 * C523 + C3137 * C616) *
                C9273 +
            (C3244 * C1382 + C9263 * C1524 + C3243 * C451 + C3137 * C555) *
                C156) *
               C9196 * C3135) *
              C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C9196 * C319) * C448 +
             (C318 * C86 + C9196 * C323) * C9272) *
                C3135 +
            (C336 * C448 + C337 * C9272) * C9257) *
               C3137 +
           ((C1646 + C1647) * C3135 + (C1642 + C1643) * C9257) * C9263) *
              C9273 * C446 -
          ((((C318 * C1383 + C9196 * C1635) * C9272 +
             (C318 * C1381 + C9196 * C1633) * C448) *
                C9257 +
            ((C318 * C1384 + C9196 * C1636) * C9272 +
             (C318 * C1382 + C9196 * C1634) * C448) *
                C3135) *
               C9263 +
           ((C1643 + C1642) * C9257 + (C1647 + C1646) * C3135) * C3137) *
              C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C9196 * C319) * C487 +
            (C318 * C122 + C9196 * C365) * C446 - C1644 * C488 - C1686 * C447) *
               C3135 +
           (C336 * C487 + C376 * C446 - C1268 * C488 - C1307 * C447) * C9257) *
              C3137 +
          ((C1644 * C487 + C1686 * C446 -
            (C318 * C1382 + C9196 * C1634) * C488 -
            (C318 * C1436 + C9196 * C1681) * C447) *
               C3135 +
           (C1268 * C487 + C1307 * C446 -
            (C318 * C1381 + C9196 * C1633) * C488 -
            (C318 * C1435 + C9196 * C1682) * C447) *
               C9257) *
              C9263) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C9196 * C319) * C156 +
             (C318 * C157 + C9196 * C405) * C9273) *
                C3135 +
            (C410 + C418) * C9257) *
               C3137 +
           ((C1723 + C1727) * C3135 + (C1343 + C1347) * C9257) * C9263) *
              C446 -
          ((((C318 * C1479 + C9196 * C1720) * C9273 +
             (C318 * C1381 + C9196 * C1633) * C156) *
                C9257 +
            ((C318 * C1480 + C9196 * C1721) * C9273 +
             (C318 * C1382 + C9196 * C1634) * C156) *
                C3135) *
               C9263 +
           ((C1347 + C1343) * C9257 + (C1727 + C1723) * C3135) * C3137) *
              C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C448 +
            (C3139 * C86 + C3135 * C91 + C3140 * C87 + C9257 * C92) * C9272) *
               C3137 +
           ((C3482 + C3483) * C448 + (C3484 + C3485) * C9272) * C9263) *
              C9196 * C733 -
          (((C3140 * C1763 + C9257 * C1767 + C3139 * C1764 + C3135 * C1768) *
                C9272 +
            (C3140 * C1761 + C9257 * C1765 + C3139 * C1762 + C3135 * C1766) *
                C448) *
               C9263 +
           ((C3140 * C739 + C9257 * C745 + C3139 * C740 + C3135 * C746) *
                C9272 +
            (C3140 * C736 + C9257 * C742 + C3139 * C737 + C3135 * C743) *
                C448) *
               C3137) *
              C9196 * C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C121 +
            (C3139 * C122 + C3135 * C126 + C3140 * C123 + C9257 * C127) *
                C9274) *
               C3137 +
           ((C3482 + C3483) * C121 + (C3525 + C3524) * C9274) * C9263) *
              C9196 * C9272 * C733 -
          (((C3140 * C1803 + C9257 * C1805 + C3139 * C1804 + C3135 * C1806) *
                C9274 +
            (C3140 * C1761 + C9257 * C1765 + C3139 * C1762 + C3135 * C1766) *
                C121) *
               C9263 +
           ((C3140 * C774 + C9257 * C777 + C3139 * C775 + C3135 * C778) *
                C9274 +
            (C3140 * C736 + C9257 * C742 + C3139 * C737 + C3135 * C743) *
                C121) *
               C3137) *
              C9196 * C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C805 +
           (C3139 * C157 + C3135 * C161 + C3140 * C158 + C9257 * C162) * C733 -
           (C3140 * C736 + C9257 * C742 + C3139 * C737 + C3135 * C743) * C806 -
           (C3140 * C808 + C9257 * C811 + C3139 * C809 + C3135 * C812) * C734) *
              C3137 +
          ((C3482 + C3483) * C805 + (C3564 + C3565) * C733 -
           (C3140 * C1761 + C9257 * C1765 + C3139 * C1762 + C3135 * C1766) *
               C806 -
           (C3140 * C1841 + C9257 * C1843 + C3139 * C1842 + C3135 * C1844) *
               C734) *
              C9263) *
         C9196 * C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C448 +
            (C3243 * C86 + C3137 * C196 + C3244 * C454 + C9263 * C558) *
                C9272) *
               C9196 * C3135 +
           ((C3255 + C3254) * C448 + (C3257 + C3256) * C9272) * C9196 * C9257) *
              C733 -
          (((C3244 * C1763 + C9263 * C1881 + C3243 * C739 + C3137 * C843) *
                C9272 +
            (C3244 * C1761 + C9263 * C1879 + C3243 * C736 + C3137 * C840) *
                C448) *
               C9196 * C9257 +
           ((C3244 * C1764 + C9263 * C1882 + C3243 * C740 + C3137 * C844) *
                C9272 +
            (C3244 * C1762 + C9263 * C1880 + C3243 * C737 + C3137 * C841) *
                C448) *
               C9196 * C3135) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C121 +
            (C3243 * C122 + C3137 * C238 + C3244 * C491 + C9263 * C585) *
                C9274) *
               C9196 * C3135 +
           ((C3255 + C3254) * C121 + (C3296 + C3297) * C9274) * C9196 * C9257) *
              C9272 * C733 -
          (((C3244 * C1803 + C9263 * C1917 + C3243 * C774 + C3137 * C872) *
                C9274 +
            (C3244 * C1761 + C9263 * C1879 + C3243 * C736 + C3137 * C840) *
                C121) *
               C9196 * C9257 +
           ((C3244 * C1804 + C9263 * C1918 + C3243 * C775 + C3137 * C873) *
                C9274 +
            (C3244 * C1762 + C9263 * C1880 + C3243 * C737 + C3137 * C841) *
                C121) *
               C9196 * C3135) *
              C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C805 +
           (C3243 * C157 + C3137 * C278 + C3244 * C523 + C9263 * C616) * C733 -
           (C3244 * C1762 + C9263 * C1880 + C3243 * C737 + C3137 * C841) *
               C806 -
           (C3244 * C1842 + C9263 * C1953 + C3243 * C809 + C3137 * C900) *
               C734) *
              C9196 * C3135 +
          ((C3255 + C3254) * C805 + (C3336 + C3337) * C733 -
           (C3244 * C1761 + C9263 * C1879 + C3243 * C736 + C3137 * C840) *
               C806 -
           (C3244 * C1841 + C9263 * C1954 + C3243 * C808 + C3137 * C901) *
               C734) *
              C9196 * C9257) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C9196 * C319) * C448 +
             (C318 * C86 + C9196 * C323) * C9272) *
                C3135 +
            (C336 * C448 + C337 * C9272) * C9257) *
               C3137 +
           ((C1646 + C1647) * C3135 + (C1642 + C1643) * C9257) * C9263) *
              C733 -
          ((((C318 * C1763 + C9196 * C1991) * C9272 +
             (C318 * C1761 + C9196 * C1989) * C448) *
                C9257 +
            ((C318 * C1764 + C9196 * C1992) * C9272 +
             (C318 * C1762 + C9196 * C1990) * C448) *
                C3135) *
               C9263 +
           (((C318 * C739 + C9196 * C933) * C9272 +
             (C318 * C736 + C9196 * C930) * C448) *
                C9257 +
            ((C318 * C740 + C9196 * C934) * C9272 +
             (C318 * C737 + C9196 * C931) * C448) *
                C3135) *
               C3137) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C318 * C79 + C9196 * C319) * C121 +
             (C318 * C122 + C9196 * C365) * C9274) *
                C3135 +
            (C370 + C378) * C9257) *
               C3137 +
           ((C1644 * C121 + C1686 * C9274) * C3135 + (C1304 + C1308) * C9257) *
               C9263) *
              C9272 * C733 -
          ((((C318 * C1803 + C9196 * C2027) * C9274 +
             (C318 * C1761 + C9196 * C1989) * C121) *
                C9257 +
            ((C318 * C1804 + C9196 * C2028) * C9274 +
             (C318 * C1762 + C9196 * C1990) * C121) *
                C3135) *
               C9263 +
           (((C318 * C774 + C9196 * C962) * C9274 +
             (C318 * C736 + C9196 * C930) * C121) *
                C9257 +
            ((C318 * C775 + C9196 * C963) * C9274 +
             (C318 * C737 + C9196 * C931) * C121) *
                C3135) *
               C3137) *
              C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C9196 * C319) * C805 +
            (C318 * C157 + C9196 * C405) * C733 -
            (C318 * C737 + C9196 * C931) * C806 -
            (C318 * C809 + C9196 * C990) * C734) *
               C3135 +
           (C336 * C805 + C416 * C733 - (C318 * C736 + C9196 * C930) * C806 -
            (C318 * C808 + C9196 * C991) * C734) *
               C9257) *
              C3137 +
          ((C1644 * C805 + C1726 * C733 -
            (C318 * C1762 + C9196 * C1990) * C806 -
            (C318 * C1842 + C9196 * C2063) * C734) *
               C3135 +
           (C1268 * C805 + C1346 * C733 -
            (C318 * C1761 + C9196 * C1989) * C806 -
            (C318 * C1841 + C9196 * C2064) * C734) *
               C9257) *
              C9263) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] += (2 * std::pow(Pi, 2.5) *
                   (((C4105 * C79 + C9125 * C83) * C77 +
                     (C4105 * C86 + C9125 * C91) * C68 -
                     (C4105 * C80 + C9125 * C84) * C78 -
                     (C4105 * C87 + C9125 * C92) * C69) *
                        C4102 +
                    ((C4105 * C451 + C9125 * C457) * C77 +
                     (C4105 * C454 + C9125 * C460) * C68 -
                     (C4105 * C450 + C9125 * C456) * C78 -
                     (C4105 * C453 + C9125 * C459) * C69) *
                        C4103 +
                    ((C4105 * C1382 + C9125 * C1386) * C77 +
                     (C4105 * C1384 + C9125 * C1388) * C68 -
                     (C4105 * C1381 + C9125 * C1385) * C78 -
                     (C4105 * C1383 + C9125 * C1387) * C69) *
                        C4104) *
                   C9196 * C9273 * C9274) /
                  (p * q * std::sqrt(p + q));
    d2eexy[12] += (2 * std::pow(Pi, 2.5) *
                   ((((C4105 * C79 + C9125 * C83) * C121 +
                      (C4105 * C122 + C9125 * C126) * C9274) *
                         C4102 +
                     ((C4105 * C451 + C9125 * C457) * C121 +
                      (C4105 * C491 + C9125 * C494) * C9274) *
                         C4103 +
                     ((C4105 * C1382 + C9125 * C1386) * C121 +
                      (C4105 * C1436 + C9125 * C1438) * C9274) *
                         C4104) *
                        C9196 * C68 -
                    (((C4105 * C1435 + C9125 * C1437) * C9274 +
                      (C4105 * C1381 + C9125 * C1385) * C121) *
                         C4104 +
                     ((C4105 * C490 + C9125 * C493) * C9274 +
                      (C4105 * C450 + C9125 * C456) * C121) *
                         C4103 +
                     ((C4105 * C123 + C9125 * C127) * C9274 +
                      (C4105 * C80 + C9125 * C84) * C121) *
                         C4102) *
                        C9196 * C69) *
                   C9273) /
                  (p * q * std::sqrt(p + q));
    d2eexz[12] += (2 * std::pow(Pi, 2.5) *
                   ((((C4105 * C79 + C9125 * C83) * C156 +
                      (C4105 * C157 + C9125 * C161) * C9273) *
                         C4102 +
                     ((C4105 * C451 + C9125 * C457) * C156 +
                      (C4105 * C523 + C9125 * C526) * C9273) *
                         C4103 +
                     ((C4105 * C1382 + C9125 * C1386) * C156 +
                      (C4105 * C1480 + C9125 * C1482) * C9273) *
                         C4104) *
                        C9196 * C9274 * C68 -
                    (((C4105 * C1479 + C9125 * C1481) * C9273 +
                      (C4105 * C1381 + C9125 * C1385) * C156) *
                         C4104 +
                     ((C4105 * C522 + C9125 * C525) * C9273 +
                      (C4105 * C450 + C9125 * C456) * C156) *
                         C4103 +
                     ((C4105 * C158 + C9125 * C162) * C9273 +
                      (C4105 * C80 + C9125 * C84) * C156) *
                         C4102) *
                        C9196 * C9274 * C69)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[12] += (2 * std::pow(Pi, 2.5) *
                   ((C4184 * C79 + C4102 * C192 + C4185 * C451 + C4103 * C555 +
                     C4186 * C1382 + C4104 * C1524) *
                        C77 +
                    (C4184 * C86 + C4102 * C196 + C4185 * C454 + C4103 * C558 +
                     C4186 * C1384 + C4104 * C1526) *
                        C68 -
                    (C4186 * C1381 + C4104 * C1523 + C4185 * C450 +
                     C4103 * C554 + C4184 * C80 + C4102 * C193) *
                        C78 -
                    (C4186 * C1383 + C4104 * C1525 + C4185 * C453 +
                     C4103 * C557 + C4184 * C87 + C4102 * C197) *
                        C69) *
                   C9196 * C9125 * C9273 * C9274) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[12] += (2 * std::pow(Pi, 2.5) *
                   (((C4184 * C79 + C4102 * C192 + C4185 * C451 + C4103 * C555 +
                      C4186 * C1382 + C4104 * C1524) *
                         C121 +
                     (C4184 * C122 + C4102 * C238 + C4185 * C491 +
                      C4103 * C585 + C4186 * C1436 + C4104 * C1561) *
                         C9274) *
                        C9196 * C9125 * C68 -
                    ((C4186 * C1435 + C4104 * C1562 + C4185 * C490 +
                      C4103 * C586 + C4184 * C123 + C4102 * C239) *
                         C9274 +
                     (C4186 * C1381 + C4104 * C1523 + C4185 * C450 +
                      C4103 * C554 + C4184 * C80 + C4102 * C193) *
                         C121) *
                        C9196 * C9125 * C69) *
                   C9273) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[12] += (2 * std::pow(Pi, 2.5) *
                   (((C4184 * C79 + C4102 * C192 + C4185 * C451 + C4103 * C555 +
                      C4186 * C1382 + C4104 * C1524) *
                         C156 +
                     (C4184 * C157 + C4102 * C278 + C4185 * C523 +
                      C4103 * C616 + C4186 * C1480 + C4104 * C1598) *
                         C9273) *
                        C9196 * C9125 * C9274 * C68 -
                    ((C4186 * C1479 + C4104 * C1597 + C4185 * C522 +
                      C4103 * C615 + C4184 * C158 + C4102 * C279) *
                         C9273 +
                     (C4186 * C1381 + C4104 * C1523 + C4185 * C450 +
                      C4103 * C554 + C4184 * C80 + C4102 * C193) *
                         C156) *
                        C9196 * C9125 * C9274 * C69)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (2 * std::pow(Pi, 2.5) *
         (((C318 * C79 + C9196 * C319) * C77 +
           (C318 * C86 + C9196 * C323) * C68 - C336 * C78 - C337 * C69) *
              C9125 * C4102 +
          (C1644 * C77 + C1645 * C68 - C1268 * C78 - C1269 * C69) * C9125 *
              C4103 +
          ((C318 * C1382 + C9196 * C1634) * C77 +
           (C318 * C1384 + C9196 * C1636) * C68 -
           (C318 * C1381 + C9196 * C1633) * C78 -
           (C318 * C1383 + C9196 * C1635) * C69) *
              C9125 * C4104) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C9196 * C319) * C121 +
            (C318 * C122 + C9196 * C365) * C9274) *
               C9125 * C4102 +
           (C1644 * C121 + C1686 * C9274) * C9125 * C4103 +
           ((C318 * C1382 + C9196 * C1634) * C121 +
            (C318 * C1436 + C9196 * C1681) * C9274) *
               C9125 * C4104) *
              C68 -
          (((C318 * C1435 + C9196 * C1682) * C9274 +
            (C318 * C1381 + C9196 * C1633) * C121) *
               C9125 * C4104 +
           (C1308 + C1304) * C9125 * C4103 + (C378 + C370) * C9125 * C4102) *
              C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C9196 * C319) * C156 +
            (C318 * C157 + C9196 * C405) * C9273) *
               C9125 * C4102 +
           (C1723 + C1727) * C9125 * C4103 +
           ((C318 * C1382 + C9196 * C1634) * C156 +
            (C318 * C1480 + C9196 * C1721) * C9273) *
               C9125 * C4104) *
              C9274 * C68 -
          (((C318 * C1479 + C9196 * C1720) * C9273 +
            (C318 * C1381 + C9196 * C1633) * C156) *
               C9125 * C4104 +
           (C1347 + C1343) * C9125 * C4103 + (C418 + C410) * C9125 * C4102) *
              C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eexx[13] += (2 * std::pow(Pi, 2.5) *
                   ((((C4105 * C79 + C9125 * C83) * C448 +
                      (C4105 * C86 + C9125 * C91) * C9272) *
                         C4102 +
                     (C4360 + C4361) * C4103 + (C4362 + C4363) * C4104) *
                        C9196 * C9273 * C446 -
                    (((C4105 * C4344 + C9125 * C4346) * C9272 +
                      (C4105 * C4343 + C9125 * C4345) * C448) *
                         C4104 +
                     (C4363 + C4362) * C4103 + (C4361 + C4360) * C4102) *
                        C9196 * C9273 * C447)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4105 * C79 + C9125 * C83) * C487 +
           (C4105 * C122 + C9125 * C126) * C446 - C4356 * C488 - C4396 * C447) *
              C4102 +
          (C4356 * C487 + C4396 * C446 - C4358 * C488 - C4397 * C447) * C4103 +
          (C4358 * C487 + C4397 * C446 -
           (C4105 * C4343 + C9125 * C4345) * C488 -
           (C4105 * C4389 + C9125 * C4390) * C447) *
              C4104) *
         C9196 * C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eexz[13] += (2 * std::pow(Pi, 2.5) *
                   ((((C4105 * C79 + C9125 * C83) * C156 +
                      (C4105 * C157 + C9125 * C161) * C9273) *
                         C4102 +
                     (C4426 + C4434) * C4103 + (C4429 + C4435) * C4104) *
                        C9196 * C446 -
                    (((C4105 * C4423 + C9125 * C4424) * C9273 +
                      (C4105 * C4343 + C9125 * C4345) * C156) *
                         C4104 +
                     (C4435 + C4429) * C4103 + (C4434 + C4426) * C4102) *
                        C9196 * C447) *
                   C9272) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[13] += (2 * std::pow(Pi, 2.5) *
                   (((C4184 * C79 + C4102 * C192 + C4185 * C451 + C4103 * C555 +
                      C4186 * C1382 + C4104 * C1524) *
                         C448 +
                     (C4184 * C86 + C4102 * C196 + C4185 * C454 + C4103 * C558 +
                      C4186 * C1384 + C4104 * C1526) *
                         C9272) *
                        C9196 * C9125 * C9273 * C446 -
                    ((C4186 * C4344 + C4104 * C4462 + C4185 * C1384 +
                      C4103 * C1526 + C4184 * C454 + C4102 * C558) *
                         C9272 +
                     (C4186 * C4343 + C4104 * C4461 + C4185 * C1382 +
                      C4103 * C1524 + C4184 * C451 + C4102 * C555) *
                         C448) *
                        C9196 * C9125 * C9273 * C447)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[13] += (2 * std::pow(Pi, 2.5) *
                   ((C4184 * C79 + C4102 * C192 + C4185 * C451 + C4103 * C555 +
                     C4186 * C1382 + C4104 * C1524) *
                        C487 +
                    (C4184 * C122 + C4102 * C238 + C4185 * C491 + C4103 * C585 +
                     C4186 * C1436 + C4104 * C1561) *
                        C446 -
                    (C4186 * C4343 + C4104 * C4461 + C4185 * C1382 +
                     C4103 * C1524 + C4184 * C451 + C4102 * C555) *
                        C488 -
                    (C4186 * C4389 + C4104 * C4489 + C4185 * C1436 +
                     C4103 * C1561 + C4184 * C491 + C4102 * C585) *
                        C447) *
                   C9196 * C9125 * C9272 * C9273) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[13] += (2 * std::pow(Pi, 2.5) *
                   (((C4184 * C79 + C4102 * C192 + C4185 * C451 + C4103 * C555 +
                      C4186 * C1382 + C4104 * C1524) *
                         C156 +
                     (C4184 * C157 + C4102 * C278 + C4185 * C523 +
                      C4103 * C616 + C4186 * C1480 + C4104 * C1598) *
                         C9273) *
                        C9196 * C9125 * C446 -
                    ((C4186 * C4423 + C4104 * C4516 + C4185 * C1480 +
                      C4103 * C1598 + C4184 * C523 + C4102 * C616) *
                         C9273 +
                     (C4186 * C4343 + C4104 * C4461 + C4185 * C1382 +
                      C4103 * C1524 + C4184 * C451 + C4102 * C555) *
                         C156) *
                        C9196 * C9125 * C447) *
                   C9272) /
                  (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C9196 * C319) * C448 +
            (C318 * C86 + C9196 * C323) * C9272) *
               C9125 * C4102 +
           (C1646 + C1647) * C9125 * C4103 + (C4552 + C4553) * C9125 * C4104) *
              C9273 * C446 -
          (((C318 * C4344 + C9196 * C4544) * C9272 +
            (C318 * C4343 + C9196 * C4543) * C448) *
               C9125 * C4104 +
           (C4553 + C4552) * C9125 * C4103 + (C1647 + C1646) * C9125 * C4102) *
              C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C318 * C79 + C9196 * C319) * C487 +
           (C318 * C122 + C9196 * C365) * C446 - C1644 * C488 - C1686 * C447) *
              C9125 * C4102 +
          (C1644 * C487 + C1686 * C446 - C4550 * C488 - C4583 * C447) * C9125 *
              C4103 +
          (C4550 * C487 + C4583 * C446 - (C318 * C4343 + C9196 * C4543) * C488 -
           (C318 * C4389 + C9196 * C4579) * C447) *
              C9125 * C4104) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C9196 * C319) * C156 +
            (C318 * C157 + C9196 * C405) * C9273) *
               C9125 * C4102 +
           (C1723 + C1727) * C9125 * C4103 + (C4611 + C4615) * C9125 * C4104) *
              C446 -
          (((C318 * C4423 + C9196 * C4609) * C9273 +
            (C318 * C4343 + C9196 * C4543) * C156) *
               C9125 * C4104 +
           (C4615 + C4611) * C9125 * C4103 + (C1727 + C1723) * C9125 * C4102) *
              C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[14] += (2 * std::pow(Pi, 2.5) *
                   ((((C4105 * C79 + C9125 * C83) * C448 +
                      (C4105 * C86 + C9125 * C91) * C9272) *
                         C4102 +
                     (C4360 + C4361) * C4103 + (C4362 + C4363) * C4104) *
                        C9196 * C733 -
                    (((C4105 * C4642 + C9125 * C4644) * C9272 +
                      (C4105 * C4641 + C9125 * C4643) * C448) *
                         C4104 +
                     ((C4105 * C1764 + C9125 * C1768) * C9272 +
                      (C4105 * C1762 + C9125 * C1766) * C448) *
                         C4103 +
                     ((C4105 * C740 + C9125 * C746) * C9272 +
                      (C4105 * C737 + C9125 * C743) * C448) *
                         C4102) *
                        C9196 * C734) *
                   C9274) /
                  (p * q * std::sqrt(p + q));
    d2eexy[14] += (2 * std::pow(Pi, 2.5) *
                   ((((C4105 * C79 + C9125 * C83) * C121 +
                      (C4105 * C122 + C9125 * C126) * C9274) *
                         C4102 +
                     (C4356 * C121 + C4396 * C9274) * C4103 +
                     (C4358 * C121 + C4397 * C9274) * C4104) *
                        C9196 * C9272 * C733 -
                    (((C4105 * C4671 + C9125 * C4672) * C9274 +
                      (C4105 * C4641 + C9125 * C4643) * C121) *
                         C4104 +
                     ((C4105 * C1804 + C9125 * C1806) * C9274 +
                      (C4105 * C1762 + C9125 * C1766) * C121) *
                         C4103 +
                     ((C4105 * C775 + C9125 * C778) * C9274 +
                      (C4105 * C737 + C9125 * C743) * C121) *
                         C4102) *
                        C9196 * C9272 * C734)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[14] += (2 * std::pow(Pi, 2.5) *
                   (((C4105 * C79 + C9125 * C83) * C805 +
                     (C4105 * C157 + C9125 * C161) * C733 -
                     (C4105 * C737 + C9125 * C743) * C806 -
                     (C4105 * C809 + C9125 * C812) * C734) *
                        C4102 +
                    (C4356 * C805 + C4432 * C733 -
                     (C4105 * C1762 + C9125 * C1766) * C806 -
                     (C4105 * C1842 + C9125 * C1844) * C734) *
                        C4103 +
                    (C4358 * C805 + C4433 * C733 -
                     (C4105 * C4641 + C9125 * C4643) * C806 -
                     (C4105 * C4699 + C9125 * C4700) * C734) *
                        C4104) *
                   C9196 * C9274 * C9272) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[14] += (2 * std::pow(Pi, 2.5) *
                   (((C4184 * C79 + C4102 * C192 + C4185 * C451 + C4103 * C555 +
                      C4186 * C1382 + C4104 * C1524) *
                         C448 +
                     (C4184 * C86 + C4102 * C196 + C4185 * C454 + C4103 * C558 +
                      C4186 * C1384 + C4104 * C1526) *
                         C9272) *
                        C9196 * C9125 * C733 -
                    ((C4186 * C4642 + C4104 * C4728 + C4185 * C1764 +
                      C4103 * C1882 + C4184 * C740 + C4102 * C844) *
                         C9272 +
                     (C4186 * C4641 + C4104 * C4727 + C4185 * C1762 +
                      C4103 * C1880 + C4184 * C737 + C4102 * C841) *
                         C448) *
                        C9196 * C9125 * C734) *
                   C9274) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[14] += (2 * std::pow(Pi, 2.5) *
                   (((C4184 * C79 + C4102 * C192 + C4185 * C451 + C4103 * C555 +
                      C4186 * C1382 + C4104 * C1524) *
                         C121 +
                     (C4184 * C122 + C4102 * C238 + C4185 * C491 +
                      C4103 * C585 + C4186 * C1436 + C4104 * C1561) *
                         C9274) *
                        C9196 * C9125 * C9272 * C733 -
                    ((C4186 * C4671 + C4104 * C4755 + C4185 * C1804 +
                      C4103 * C1918 + C4184 * C775 + C4102 * C873) *
                         C9274 +
                     (C4186 * C4641 + C4104 * C4727 + C4185 * C1762 +
                      C4103 * C1880 + C4184 * C737 + C4102 * C841) *
                         C121) *
                        C9196 * C9125 * C9272 * C734)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[14] += (2 * std::pow(Pi, 2.5) *
                   ((C4184 * C79 + C4102 * C192 + C4185 * C451 + C4103 * C555 +
                     C4186 * C1382 + C4104 * C1524) *
                        C805 +
                    (C4184 * C157 + C4102 * C278 + C4185 * C523 + C4103 * C616 +
                     C4186 * C1480 + C4104 * C1598) *
                        C733 -
                    (C4186 * C4641 + C4104 * C4727 + C4185 * C1762 +
                     C4103 * C1880 + C4184 * C737 + C4102 * C841) *
                        C806 -
                    (C4186 * C4699 + C4104 * C4782 + C4185 * C1842 +
                     C4103 * C1953 + C4184 * C809 + C4102 * C900) *
                        C734) *
                   C9196 * C9125 * C9274 * C9272) /
                  (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C318 * C79 + C9196 * C319) * C448 +
            (C318 * C86 + C9196 * C323) * C9272) *
               C9125 * C4102 +
           (C1646 + C1647) * C9125 * C4103 + (C4552 + C4553) * C9125 * C4104) *
              C733 -
          (((C318 * C4642 + C9196 * C4810) * C9272 +
            (C318 * C4641 + C9196 * C4809) * C448) *
               C9125 * C4104 +
           ((C318 * C1764 + C9196 * C1992) * C9272 +
            (C318 * C1762 + C9196 * C1990) * C448) *
               C9125 * C4103 +
           ((C318 * C740 + C9196 * C934) * C9272 +
            (C318 * C737 + C9196 * C931) * C448) *
               C9125 * C4102) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[14] += (2 * std::pow(Pi, 2.5) *
                   ((((C318 * C79 + C9196 * C319) * C121 +
                      (C318 * C122 + C9196 * C365) * C9274) *
                         C9125 * C4102 +
                     (C1644 * C121 + C1686 * C9274) * C9125 * C4103 +
                     (C4550 * C121 + C4583 * C9274) * C9125 * C4104) *
                        C9272 * C733 -
                    (((C318 * C4671 + C9196 * C4837) * C9274 +
                      (C318 * C4641 + C9196 * C4809) * C121) *
                         C9125 * C4104 +
                     ((C318 * C1804 + C9196 * C2028) * C9274 +
                      (C318 * C1762 + C9196 * C1990) * C121) *
                         C9125 * C4103 +
                     ((C318 * C775 + C9196 * C963) * C9274 +
                      (C318 * C737 + C9196 * C931) * C121) *
                         C9125 * C4102) *
                        C9272 * C734)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (2 * std::pow(Pi, 2.5) *
         (((C318 * C79 + C9196 * C319) * C805 +
           (C318 * C157 + C9196 * C405) * C733 -
           (C318 * C737 + C9196 * C931) * C806 -
           (C318 * C809 + C9196 * C990) * C734) *
              C9125 * C4102 +
          (C1644 * C805 + C1726 * C733 - (C318 * C1762 + C9196 * C1990) * C806 -
           (C318 * C1842 + C9196 * C2063) * C734) *
              C9125 * C4103 +
          (C4550 * C805 + C4614 * C733 - (C318 * C4641 + C9196 * C4809) * C806 -
           (C318 * C4699 + C9196 * C4864) * C734) *
              C9125 * C4104) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4105 * C79 + C9125 * C83) * C77 +
            (C4105 * C86 + C9125 * C91) * C68 -
            (C4105 * C80 + C9125 * C84) * C78 -
            (C4105 * C87 + C9125 * C92) * C69) *
               C3137 +
           (C4356 * C77 + C4357 * C68 - (C4105 * C450 + C9125 * C456) * C78 -
            (C4105 * C453 + C9125 * C459) * C69) *
               C9263) *
              C2099 +
          (((C4105 * C737 + C9125 * C743) * C77 +
            (C4105 * C740 + C9125 * C746) * C68 -
            (C4105 * C736 + C9125 * C742) * C78 -
            (C4105 * C739 + C9125 * C745) * C69) *
               C3137 +
           ((C4105 * C1762 + C9125 * C1766) * C77 +
            (C4105 * C1764 + C9125 * C1768) * C68 -
            (C4105 * C1761 + C9125 * C1765) * C78 -
            (C4105 * C1763 + C9125 * C1767) * C69) *
               C9263) *
              C9265) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] += (2 * std::pow(Pi, 2.5) *
                   (((((C4105 * C79 + C9125 * C83) * C121 +
                       (C4105 * C122 + C9125 * C126) * C9274) *
                          C3137 +
                      (C4356 * C121 + C4396 * C9274) * C9263) *
                         C2099 +
                     (((C4105 * C737 + C9125 * C743) * C121 +
                       (C4105 * C775 + C9125 * C778) * C9274) *
                          C3137 +
                      ((C4105 * C1762 + C9125 * C1766) * C121 +
                       (C4105 * C1804 + C9125 * C1806) * C9274) *
                          C9263) *
                         C9265) *
                        C68 -
                    ((((C4105 * C1803 + C9125 * C1805) * C9274 +
                       (C4105 * C1761 + C9125 * C1765) * C121) *
                          C9263 +
                      ((C4105 * C774 + C9125 * C777) * C9274 +
                       (C4105 * C736 + C9125 * C742) * C121) *
                          C3137) *
                         C9265 +
                     (((C4105 * C490 + C9125 * C493) * C9274 +
                       (C4105 * C450 + C9125 * C456) * C121) *
                          C9263 +
                      ((C4105 * C123 + C9125 * C127) * C9274 +
                       (C4105 * C80 + C9125 * C84) * C121) *
                          C3137) *
                         C2099) *
                        C69) *
                   C9273) /
                  (p * q * std::sqrt(p + q));
    d2eexz[15] += (2 * std::pow(Pi, 2.5) *
                   (((((C4105 * C79 + C9125 * C83) * C156 +
                       (C4105 * C157 + C9125 * C161) * C9273) *
                          C3137 +
                      (C4426 + C4434) * C9263) *
                         C2099 +
                     (((C4105 * C737 + C9125 * C743) * C156 +
                       (C4105 * C809 + C9125 * C812) * C9273) *
                          C3137 +
                      ((C4105 * C1762 + C9125 * C1766) * C156 +
                       (C4105 * C1842 + C9125 * C1844) * C9273) *
                          C9263) *
                         C9265) *
                        C9274 * C68 -
                    ((((C4105 * C1841 + C9125 * C1843) * C9273 +
                       (C4105 * C1761 + C9125 * C1765) * C156) *
                          C9263 +
                      ((C4105 * C808 + C9125 * C811) * C9273 +
                       (C4105 * C736 + C9125 * C742) * C156) *
                          C3137) *
                         C9265 +
                     (((C4105 * C522 + C9125 * C525) * C9273 +
                       (C4105 * C450 + C9125 * C456) * C156) *
                          C9263 +
                      ((C4105 * C158 + C9125 * C162) * C9273 +
                       (C4105 * C80 + C9125 * C84) * C156) *
                          C3137) *
                         C2099) *
                        C9274 * C69)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[15] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C77 +
           (C3243 * C86 + C3137 * C196 + C3244 * C454 + C9263 * C558) * C68 -
           (C3254 + C3255) * C78 - (C3256 + C3257) * C69) *
              C2099 +
          ((C3243 * C737 + C3137 * C841 + C3244 * C1762 + C9263 * C1880) * C77 +
           (C3243 * C740 + C3137 * C844 + C3244 * C1764 + C9263 * C1882) * C68 -
           (C3244 * C1761 + C9263 * C1879 + C3243 * C736 + C3137 * C840) * C78 -
           (C3244 * C1763 + C9263 * C1881 + C3243 * C739 + C3137 * C843) *
               C69) *
              C9265) *
         C9125 * C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C121 +
            (C3243 * C122 + C3137 * C238 + C3244 * C491 + C9263 * C585) *
                C9274) *
               C2099 +
           ((C3243 * C737 + C3137 * C841 + C3244 * C1762 + C9263 * C1880) *
                C121 +
            (C3243 * C775 + C3137 * C873 + C3244 * C1804 + C9263 * C1918) *
                C9274) *
               C9265) *
              C9125 * C68 -
          (((C3244 * C1803 + C9263 * C1917 + C3243 * C774 + C3137 * C872) *
                C9274 +
            (C3244 * C1761 + C9263 * C1879 + C3243 * C736 + C3137 * C840) *
                C121) *
               C9265 +
           ((C3297 + C3296) * C9274 + (C3254 + C3255) * C121) * C2099) *
              C9125 * C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eeyz[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C156 +
            (C3243 * C157 + C3137 * C278 + C3244 * C523 + C9263 * C616) *
                C9273) *
               C2099 +
           ((C3243 * C737 + C3137 * C841 + C3244 * C1762 + C9263 * C1880) *
                C156 +
            (C3243 * C809 + C3137 * C900 + C3244 * C1842 + C9263 * C1953) *
                C9273) *
               C9265) *
              C9125 * C9274 * C68 -
          (((C3244 * C1841 + C9263 * C1954 + C3243 * C808 + C3137 * C901) *
                C9273 +
            (C3244 * C1761 + C9263 * C1879 + C3243 * C736 + C3137 * C840) *
                C156) *
               C9265 +
           ((C3337 + C3336) * C9273 + (C3254 + C3255) * C156) * C2099) *
              C9125 * C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C77 +
           (C2321 * C86 + C2099 * C323 + C2322 * C740 + C9265 * C934) * C68 -
           (C2332 + C2333) * C78 - (C2334 + C2335) * C69) *
              C9125 * C3137 +
          ((C2321 * C451 + C2099 * C645 + C2322 * C1762 + C9265 * C1990) * C77 +
           (C2321 * C454 + C2099 * C648 + C2322 * C1764 + C9265 * C1992) * C68 -
           (C2322 * C1761 + C9265 * C1989 + C2321 * C450 + C2099 * C644) * C78 -
           (C2322 * C1763 + C9265 * C1991 + C2321 * C453 + C2099 * C647) *
               C69) *
              C9125 * C9263) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C121 +
            (C2321 * C122 + C2099 * C365 + C2322 * C775 + C9265 * C963) *
                C9274) *
               C9125 * C3137 +
           ((C2321 * C451 + C2099 * C645 + C2322 * C1762 + C9265 * C1990) *
                C121 +
            (C2321 * C491 + C2099 * C675 + C2322 * C1804 + C9265 * C2028) *
                C9274) *
               C9125 * C9263) *
              C68 -
          (((C2322 * C1803 + C9265 * C2027 + C2321 * C490 + C2099 * C676) *
                C9274 +
            (C2322 * C1761 + C9265 * C1989 + C2321 * C450 + C2099 * C644) *
                C121) *
               C9125 * C9263 +
           ((C2375 + C2374) * C9274 + (C2332 + C2333) * C121) * C9125 * C3137) *
              C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C156 +
            (C2321 * C157 + C2099 * C405 + C2322 * C809 + C9265 * C990) *
                C9273) *
               C9125 * C3137 +
           ((C2321 * C451 + C2099 * C645 + C2322 * C1762 + C9265 * C1990) *
                C156 +
            (C2321 * C523 + C2099 * C706 + C2322 * C1842 + C9265 * C2063) *
                C9273) *
               C9125 * C9263) *
              C9274 * C68 -
          (((C2322 * C1841 + C9265 * C2064 + C2321 * C522 + C2099 * C705) *
                C9273 +
            (C2322 * C1761 + C9265 * C1989 + C2321 * C450 + C2099 * C644) *
                C156) *
               C9125 * C9263 +
           ((C2415 + C2414) * C9273 + (C2332 + C2333) * C156) * C9125 * C3137) *
              C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C4105 * C79 + C9125 * C83) * C448 +
             (C4105 * C86 + C9125 * C91) * C9272) *
                C3137 +
            (C4360 + C4361) * C9263) *
               C2099 +
           (((C4105 * C737 + C9125 * C743) * C448 +
             (C4105 * C740 + C9125 * C746) * C9272) *
                C3137 +
            (C5212 + C5213) * C9263) *
               C9265) *
              C9273 * C446 -
          ((((C4105 * C4642 + C9125 * C4644) * C9272 +
             (C4105 * C4641 + C9125 * C4643) * C448) *
                C9263 +
            (C5213 + C5212) * C3137) *
               C9265 +
           ((C4363 + C4362) * C9263 + (C4361 + C4360) * C3137) * C2099) *
              C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4105 * C79 + C9125 * C83) * C487 +
            (C4105 * C122 + C9125 * C126) * C446 - C4356 * C488 -
            C4396 * C447) *
               C3137 +
           (C4356 * C487 + C4396 * C446 - C4358 * C488 - C4397 * C447) *
               C9263) *
              C2099 +
          (((C4105 * C737 + C9125 * C743) * C487 +
            (C4105 * C775 + C9125 * C778) * C446 - C5210 * C488 -
            C5250 * C447) *
               C3137 +
           (C5210 * C487 + C5250 * C446 -
            (C4105 * C4641 + C9125 * C4643) * C488 -
            (C4105 * C4671 + C9125 * C4672) * C447) *
               C9263) *
              C9265) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C4105 * C79 + C9125 * C83) * C156 +
             (C4105 * C157 + C9125 * C161) * C9273) *
                C3137 +
            (C4426 + C4434) * C9263) *
               C2099 +
           (((C4105 * C737 + C9125 * C743) * C156 +
             (C4105 * C809 + C9125 * C812) * C9273) *
                C3137 +
            (C5285 + C5289) * C9263) *
               C9265) *
              C446 -
          ((((C4105 * C4699 + C9125 * C4700) * C9273 +
             (C4105 * C4641 + C9125 * C4643) * C156) *
                C9263 +
            (C5289 + C5285) * C3137) *
               C9265 +
           ((C4435 + C4429) * C9263 + (C4434 + C4426) * C3137) * C2099) *
              C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C448 +
            (C3243 * C86 + C3137 * C196 + C3244 * C454 + C9263 * C558) *
                C9272) *
               C2099 +
           ((C3243 * C737 + C3137 * C841 + C3244 * C1762 + C9263 * C1880) *
                C448 +
            (C3243 * C740 + C3137 * C844 + C3244 * C1764 + C9263 * C1882) *
                C9272) *
               C9265) *
              C9125 * C9273 * C446 -
          (((C3244 * C4642 + C9263 * C4728 + C3243 * C1764 + C3137 * C1882) *
                C9272 +
            (C3244 * C4641 + C9263 * C4727 + C3243 * C1762 + C3137 * C1880) *
                C448) *
               C9265 +
           ((C3244 * C1384 + C9263 * C1526 + C3243 * C454 + C3137 * C558) *
                C9272 +
            (C3244 * C1382 + C9263 * C1524 + C3243 * C451 + C3137 * C555) *
                C448) *
               C2099) *
              C9125 * C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C487 +
           (C3243 * C122 + C3137 * C238 + C3244 * C491 + C9263 * C585) * C446 -
           (C3244 * C1382 + C9263 * C1524 + C3243 * C451 + C3137 * C555) *
               C488 -
           (C3244 * C1436 + C9263 * C1561 + C3243 * C491 + C3137 * C585) *
               C447) *
              C2099 +
          ((C3243 * C737 + C3137 * C841 + C3244 * C1762 + C9263 * C1880) *
               C487 +
           (C3243 * C775 + C3137 * C873 + C3244 * C1804 + C9263 * C1918) *
               C446 -
           (C3244 * C4641 + C9263 * C4727 + C3243 * C1762 + C3137 * C1880) *
               C488 -
           (C3244 * C4671 + C9263 * C4755 + C3243 * C1804 + C3137 * C1918) *
               C447) *
              C9265) *
         C9125 * C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eeyz[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C156 +
            (C3243 * C157 + C3137 * C278 + C3244 * C523 + C9263 * C616) *
                C9273) *
               C2099 +
           ((C3243 * C737 + C3137 * C841 + C3244 * C1762 + C9263 * C1880) *
                C156 +
            (C3243 * C809 + C3137 * C900 + C3244 * C1842 + C9263 * C1953) *
                C9273) *
               C9265) *
              C9125 * C446 -
          (((C3244 * C4699 + C9263 * C4782 + C3243 * C1842 + C3137 * C1953) *
                C9273 +
            (C3244 * C4641 + C9263 * C4727 + C3243 * C1762 + C3137 * C1880) *
                C156) *
               C9265 +
           ((C3244 * C1480 + C9263 * C1598 + C3243 * C523 + C3137 * C616) *
                C9273 +
            (C3244 * C1382 + C9263 * C1524 + C3243 * C451 + C3137 * C555) *
                C156) *
               C2099) *
              C9125 * C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C448 +
            (C2321 * C86 + C2099 * C323 + C2322 * C740 + C9265 * C934) *
                C9272) *
               C9125 * C3137 +
           ((C5434 + C5435) * C448 + (C5436 + C5437) * C9272) * C9125 * C9263) *
              C9273 * C446 -
          (((C2322 * C4642 + C9265 * C4810 + C2321 * C1384 + C2099 * C1636) *
                C9272 +
            (C2322 * C4641 + C9265 * C4809 + C2321 * C1382 + C2099 * C1634) *
                C448) *
               C9125 * C9263 +
           ((C5437 + C5436) * C9272 + (C5435 + C5434) * C448) * C9125 * C3137) *
              C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C487 +
           (C2321 * C122 + C2099 * C365 + C2322 * C775 + C9265 * C963) * C446 -
           (C5435 + C5434) * C488 - (C5476 + C5477) * C447) *
              C9125 * C3137 +
          ((C5434 + C5435) * C487 + (C5477 + C5476) * C446 -
           (C2322 * C4641 + C9265 * C4809 + C2321 * C1382 + C2099 * C1634) *
               C488 -
           (C2322 * C4671 + C9265 * C4837 + C2321 * C1436 + C2099 * C1681) *
               C447) *
              C9125 * C9263) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C156 +
            (C2321 * C157 + C2099 * C405 + C2322 * C809 + C9265 * C990) *
                C9273) *
               C9125 * C3137 +
           ((C5434 + C5435) * C156 + (C5516 + C5517) * C9273) * C9125 * C9263) *
              C446 -
          (((C2322 * C4699 + C9265 * C4864 + C2321 * C1480 + C2099 * C1721) *
                C9273 +
            (C2322 * C4641 + C9265 * C4809 + C2321 * C1382 + C2099 * C1634) *
                C156) *
               C9125 * C9263 +
           ((C5517 + C5516) * C9273 + (C5435 + C5434) * C156) * C9125 * C3137) *
              C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C4105 * C79 + C9125 * C83) * C448 +
             (C4105 * C86 + C9125 * C91) * C9272) *
                C3137 +
            (C4360 + C4361) * C9263) *
               C2099 +
           ((C5562 + C5563) * C3137 + (C5212 + C5213) * C9263) * C9265) *
              C733 -
          ((((C4105 * C5552 + C9125 * C5554) * C9272 +
             (C4105 * C5551 + C9125 * C5553) * C448) *
                C9263 +
            ((C4105 * C2758 + C9125 * C2762) * C9272 +
             (C4105 * C2756 + C9125 * C2760) * C448) *
                C3137) *
               C9265 +
           ((C5213 + C5212) * C9263 + (C5563 + C5562) * C3137) * C2099) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C4105 * C79 + C9125 * C83) * C121 +
             (C4105 * C122 + C9125 * C126) * C9274) *
                C3137 +
            (C4356 * C121 + C4396 * C9274) * C9263) *
               C2099 +
           ((C5600 + C5606) * C3137 + (C5603 + C5604) * C9263) * C9265) *
              C9272 * C733 -
          ((((C4105 * C5597 + C9125 * C5598) * C9274 +
             (C4105 * C5551 + C9125 * C5553) * C121) *
                C9263 +
            ((C4105 * C2810 + C9125 * C2812) * C9274 +
             (C4105 * C2756 + C9125 * C2760) * C121) *
                C3137) *
               C9265 +
           ((C5604 + C5603) * C9263 + (C5606 + C5600) * C3137) * C2099) *
              C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4105 * C79 + C9125 * C83) * C805 +
            (C4105 * C157 + C9125 * C161) * C733 - C5560 * C806 -
            C5645 * C734) *
               C3137 +
           (C4356 * C805 + C4432 * C733 - C5210 * C806 - C5288 * C734) *
               C9263) *
              C2099 +
          ((C5560 * C805 + C5645 * C733 -
            (C4105 * C2756 + C9125 * C2760) * C806 -
            (C4105 * C2854 + C9125 * C2856) * C734) *
               C3137 +
           (C5210 * C805 + C5288 * C733 -
            (C4105 * C5551 + C9125 * C5553) * C806 -
            (C4105 * C5640 + C9125 * C5641) * C734) *
               C9263) *
              C9265) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C448 +
            (C3243 * C86 + C3137 * C196 + C3244 * C454 + C9263 * C558) *
                C9272) *
               C2099 +
           ((C5690 + C5691) * C448 + (C5692 + C5693) * C9272) * C9265) *
              C9125 * C733 -
          (((C3244 * C5552 + C9263 * C5680 + C3243 * C2758 + C3137 * C2900) *
                C9272 +
            (C3244 * C5551 + C9263 * C5679 + C3243 * C2756 + C3137 * C2898) *
                C448) *
               C9265 +
           ((C5693 + C5692) * C9272 + (C5691 + C5690) * C448) * C2099) *
              C9125 * C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C121 +
            (C3243 * C122 + C3137 * C238 + C3244 * C491 + C9263 * C585) *
                C9274) *
               C2099 +
           ((C5690 + C5691) * C121 + (C5733 + C5734) * C9274) * C9265) *
              C9125 * C9272 * C733 -
          (((C3244 * C5597 + C9263 * C5727 + C3243 * C2810 + C3137 * C2946) *
                C9274 +
            (C3244 * C5551 + C9263 * C5679 + C3243 * C2756 + C3137 * C2898) *
                C121) *
               C9265 +
           ((C5734 + C5733) * C9274 + (C5691 + C5690) * C121) * C2099) *
              C9125 * C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3243 * C79 + C3137 * C192 + C3244 * C451 + C9263 * C555) * C805 +
           (C3243 * C157 + C3137 * C278 + C3244 * C523 + C9263 * C616) * C733 -
           (C5691 + C5690) * C806 - (C5774 + C5775) * C734) *
              C2099 +
          ((C5690 + C5691) * C805 + (C5775 + C5774) * C733 -
           (C3244 * C5551 + C9263 * C5679 + C3243 * C2756 + C3137 * C2898) *
               C806 -
           (C3244 * C5640 + C9263 * C5768 + C3243 * C2854 + C3137 * C2986) *
               C734) *
              C9265) *
         C9125 * C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C448 +
            (C2321 * C86 + C2099 * C323 + C2322 * C740 + C9265 * C934) *
                C9272) *
               C9125 * C3137 +
           ((C5434 + C5435) * C448 + (C5436 + C5437) * C9272) * C9125 * C9263) *
              C733 -
          (((C2322 * C5552 + C9265 * C5810 + C2321 * C1764 + C2099 * C1992) *
                C9272 +
            (C2322 * C5551 + C9265 * C5809 + C2321 * C1762 + C2099 * C1990) *
                C448) *
               C9125 * C9263 +
           ((C2322 * C2758 + C9265 * C3028 + C2321 * C740 + C2099 * C934) *
                C9272 +
            (C2322 * C2756 + C9265 * C3026 + C2321 * C737 + C2099 * C931) *
                C448) *
               C9125 * C3137) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C121 +
            (C2321 * C122 + C2099 * C365 + C2322 * C775 + C9265 * C963) *
                C9274) *
               C9125 * C3137 +
           ((C5434 + C5435) * C121 + (C5477 + C5476) * C9274) * C9125 * C9263) *
              C9272 * C733 -
          (((C2322 * C5597 + C9265 * C5845 + C2321 * C1804 + C2099 * C2028) *
                C9274 +
            (C2322 * C5551 + C9265 * C5809 + C2321 * C1762 + C2099 * C1990) *
                C121) *
               C9125 * C9263 +
           ((C2322 * C2810 + C9265 * C3064 + C2321 * C775 + C2099 * C963) *
                C9274 +
            (C2322 * C2756 + C9265 * C3026 + C2321 * C737 + C2099 * C931) *
                C121) *
               C9125 * C3137) *
              C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2321 * C79 + C2099 * C319 + C2322 * C737 + C9265 * C931) * C805 +
           (C2321 * C157 + C2099 * C405 + C2322 * C809 + C9265 * C990) * C733 -
           (C2322 * C2756 + C9265 * C3026 + C2321 * C737 + C2099 * C931) *
               C806 -
           (C2322 * C2854 + C9265 * C3099 + C2321 * C809 + C2099 * C990) *
               C734) *
              C9125 * C3137 +
          ((C5434 + C5435) * C805 + (C5516 + C5517) * C733 -
           (C2322 * C5551 + C9265 * C5809 + C2321 * C1762 + C2099 * C1990) *
               C806 -
           (C2322 * C5640 + C9265 * C5880 + C2321 * C1842 + C2099 * C2063) *
               C734) *
              C9125 * C9263) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C77 +
           (C3139 * C86 + C3135 * C91 + C3140 * C87 + C9257 * C92) * C68 -
           (C3140 * C81 + C9257 * C85 + C3139 * C80 + C3135 * C84) * C78 -
           (C3140 * C88 + C9257 * C93 + C3139 * C87 + C3135 * C92) * C69) *
              C9181 * C5915 +
          ((C3139 * C737 + C3135 * C743 + C3140 * C736 + C9257 * C742) * C77 +
           (C3139 * C740 + C3135 * C746 + C3140 * C739 + C9257 * C745) * C68 -
           (C3140 * C735 + C9257 * C741 + C3139 * C736 + C3135 * C742) * C78 -
           (C3140 * C738 + C9257 * C744 + C3139 * C739 + C3135 * C745) * C69) *
              C9181 * C9265) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[18] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C121 +
            (C3139 * C122 + C3135 * C126 + C3140 * C123 + C9257 * C127) *
                C9274) *
               C9181 * C5915 +
           ((C3139 * C737 + C3135 * C743 + C3140 * C736 + C9257 * C742) * C121 +
            (C3139 * C775 + C3135 * C778 + C3140 * C774 + C9257 * C777) *
                C9274) *
               C9181 * C9265) *
              C68 -
          (((C3140 * C773 + C9257 * C776 + C3139 * C774 + C3135 * C777) *
                C9274 +
            (C3140 * C735 + C9257 * C741 + C3139 * C736 + C3135 * C742) *
                C121) *
               C9181 * C9265 +
           ((C3140 * C124 + C9257 * C128 + C3139 * C123 + C3135 * C127) *
                C9274 +
            (C3140 * C81 + C9257 * C85 + C3139 * C80 + C3135 * C84) * C121) *
               C9181 * C5915) *
              C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C156 +
            (C3139 * C157 + C3135 * C161 + C3140 * C158 + C9257 * C162) *
                C9273) *
               C9181 * C5915 +
           ((C3139 * C737 + C3135 * C743 + C3140 * C736 + C9257 * C742) * C156 +
            (C3139 * C809 + C3135 * C812 + C3140 * C808 + C9257 * C811) *
                C9273) *
               C9181 * C9265) *
              C9274 * C68 -
          (((C3140 * C807 + C9257 * C810 + C3139 * C808 + C3135 * C811) *
                C9273 +
            (C3140 * C735 + C9257 * C741 + C3139 * C736 + C3135 * C742) *
                C156) *
               C9181 * C9265 +
           ((C3140 * C159 + C9257 * C163 + C3139 * C158 + C3135 * C162) *
                C9273 +
            (C3140 * C81 + C9257 * C85 + C3139 * C80 + C3135 * C84) * C156) *
               C9181 * C5915) *
              C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C9181 * C192) * C77 +
            (C191 * C86 + C9181 * C196) * C68 - C209 * C78 - C210 * C69) *
               C5915 +
           (C2908 * C77 + C2909 * C68 - C2208 * C78 - C2209 * C69) * C9265) *
              C3135 +
          ((C209 * C77 + C210 * C68 - C211 * C78 - C212 * C69) * C5915 +
           (C2208 * C77 + C2209 * C68 - (C191 * C735 + C9181 * C839) * C78 -
            (C191 * C738 + C9181 * C842) * C69) *
               C9265) *
              C9257) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C191 * C79 + C9181 * C192) * C121 +
             (C191 * C122 + C9181 * C238) * C9274) *
                C5915 +
            (C2948 + C2952) * C9265) *
               C3135 +
           ((C243 + C251) * C5915 + (C2244 + C2248) * C9265) * C9257) *
              C68 -
          ((((C191 * C773 + C9181 * C871) * C9274 +
             (C191 * C735 + C9181 * C839) * C121) *
                C9265 +
            (C252 + C246) * C5915) *
               C9257 +
           ((C2248 + C2244) * C9265 + (C251 + C243) * C5915) * C3135) *
              C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C191 * C79 + C9181 * C192) * C156 +
             (C191 * C157 + C9181 * C278) * C9273) *
                C5915 +
            (C2908 * C156 + C2991 * C9273) * C9265) *
               C3135 +
           ((C283 + C291) * C5915 + (C2283 + C2287) * C9265) * C9257) *
              C9274 * C68 -
          ((((C191 * C807 + C9181 * C902) * C9273 +
             (C191 * C735 + C9181 * C839) * C156) *
                C9265 +
            (C292 + C286) * C5915) *
               C9257 +
           ((C2287 + C2283) * C9265 + (C291 + C283) * C5915) * C3135) *
              C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C77 +
           (C6121 * C86 + C5915 * C323 + C6122 * C740 + C9265 * C934) * C68 -
           (C6132 + C6133) * C78 - (C6134 + C6135) * C69) *
              C3135 +
          ((C6133 + C6132) * C77 + (C6135 + C6134) * C68 -
           (C6122 * C735 + C9265 * C929 + C6121 * C81 + C5915 * C321) * C78 -
           (C6122 * C738 + C9265 * C932 + C6121 * C88 + C5915 * C325) * C69) *
              C9257) *
         C9181 * C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[18] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C121 +
            (C6121 * C122 + C5915 * C365 + C6122 * C775 + C9265 * C963) *
                C9274) *
               C3135 +
           ((C6133 + C6132) * C121 + (C6174 + C6175) * C9274) * C9257) *
              C9181 * C68 -
          (((C6122 * C773 + C9265 * C961 + C6121 * C124 + C5915 * C367) *
                C9274 +
            (C6122 * C735 + C9265 * C929 + C6121 * C81 + C5915 * C321) * C121) *
               C9257 +
           ((C6175 + C6174) * C9274 + (C6132 + C6133) * C121) * C3135) *
              C9181 * C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[18] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C156 +
            (C6121 * C157 + C5915 * C405 + C6122 * C809 + C9265 * C990) *
                C9273) *
               C3135 +
           ((C6133 + C6132) * C156 + (C6214 + C6215) * C9273) * C9257) *
              C9181 * C9274 * C68 -
          (((C6122 * C807 + C9265 * C992 + C6121 * C159 + C5915 * C407) *
                C9273 +
            (C6122 * C735 + C9265 * C929 + C6121 * C81 + C5915 * C321) * C156) *
               C9257 +
           ((C6215 + C6214) * C9273 + (C6132 + C6133) * C156) * C3135) *
              C9181 * C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C448 +
            (C3139 * C86 + C3135 * C91 + C3140 * C87 + C9257 * C92) * C9272) *
               C9181 * C5915 +
           ((C3139 * C737 + C3135 * C743 + C3140 * C736 + C9257 * C742) * C448 +
            (C3139 * C740 + C3135 * C746 + C3140 * C739 + C9257 * C745) *
                C9272) *
               C9181 * C9265) *
              C9273 * C446 -
          (((C3140 * C1763 + C9257 * C1767 + C3139 * C1764 + C3135 * C1768) *
                C9272 +
            (C3140 * C1761 + C9257 * C1765 + C3139 * C1762 + C3135 * C1766) *
                C448) *
               C9181 * C9265 +
           ((C3485 + C3484) * C9272 + (C3483 + C3482) * C448) * C9181 * C5915) *
              C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eexy[19] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C487 +
           (C3139 * C122 + C3135 * C126 + C3140 * C123 + C9257 * C127) * C446 -
           (C3483 + C3482) * C488 - (C3524 + C3525) * C447) *
              C9181 * C5915 +
          ((C3139 * C737 + C3135 * C743 + C3140 * C736 + C9257 * C742) * C487 +
           (C3139 * C775 + C3135 * C778 + C3140 * C774 + C9257 * C777) * C446 -
           (C3140 * C1761 + C9257 * C1765 + C3139 * C1762 + C3135 * C1766) *
               C488 -
           (C3140 * C1803 + C9257 * C1805 + C3139 * C1804 + C3135 * C1806) *
               C447) *
              C9181 * C9265) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C156 +
            (C3139 * C157 + C3135 * C161 + C3140 * C158 + C9257 * C162) *
                C9273) *
               C9181 * C5915 +
           ((C3139 * C737 + C3135 * C743 + C3140 * C736 + C9257 * C742) * C156 +
            (C3139 * C809 + C3135 * C812 + C3140 * C808 + C9257 * C811) *
                C9273) *
               C9181 * C9265) *
              C446 -
          (((C3140 * C1841 + C9257 * C1843 + C3139 * C1842 + C3135 * C1844) *
                C9273 +
            (C3140 * C1761 + C9257 * C1765 + C3139 * C1762 + C3135 * C1766) *
                C156) *
               C9181 * C9265 +
           ((C3565 + C3564) * C9273 + (C3483 + C3482) * C156) * C9181 * C5915) *
              C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C191 * C79 + C9181 * C192) * C448 +
             (C191 * C86 + C9181 * C196) * C9272) *
                C5915 +
            (C2910 + C2911) * C9265) *
               C3135 +
           ((C209 * C448 + C210 * C9272) * C5915 + (C2906 + C2907) * C9265) *
               C9257) *
              C9273 * C446 -
          ((((C191 * C1763 + C9181 * C1881) * C9272 +
             (C191 * C1761 + C9181 * C1879) * C448) *
                C9265 +
            ((C191 * C453 + C9181 * C557) * C9272 +
             (C191 * C450 + C9181 * C554) * C448) *
                C5915) *
               C9257 +
           (((C191 * C1764 + C9181 * C1882) * C9272 +
             (C191 * C1762 + C9181 * C1880) * C448) *
                C9265 +
            ((C191 * C454 + C9181 * C558) * C9272 +
             (C191 * C451 + C9181 * C555) * C448) *
                C5915) *
               C3135) *
              C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C9181 * C192) * C487 +
            (C191 * C122 + C9181 * C238) * C446 -
            (C191 * C451 + C9181 * C555) * C488 -
            (C191 * C491 + C9181 * C585) * C447) *
               C5915 +
           (C2908 * C487 + C2951 * C446 -
            (C191 * C1762 + C9181 * C1880) * C488 -
            (C191 * C1804 + C9181 * C1918) * C447) *
               C9265) *
              C3135 +
          ((C209 * C487 + C249 * C446 - (C191 * C450 + C9181 * C554) * C488 -
            (C191 * C490 + C9181 * C586) * C447) *
               C5915 +
           (C2208 * C487 + C2247 * C446 -
            (C191 * C1761 + C9181 * C1879) * C488 -
            (C191 * C1803 + C9181 * C1917) * C447) *
               C9265) *
              C9257) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C191 * C79 + C9181 * C192) * C156 +
             (C191 * C157 + C9181 * C278) * C9273) *
                C5915 +
            (C2908 * C156 + C2991 * C9273) * C9265) *
               C3135 +
           ((C283 + C291) * C5915 + (C2283 + C2287) * C9265) * C9257) *
              C446 -
          ((((C191 * C1841 + C9181 * C1954) * C9273 +
             (C191 * C1761 + C9181 * C1879) * C156) *
                C9265 +
            ((C191 * C522 + C9181 * C615) * C9273 +
             (C191 * C450 + C9181 * C554) * C156) *
                C5915) *
               C9257 +
           (((C191 * C1842 + C9181 * C1953) * C9273 +
             (C191 * C1762 + C9181 * C1880) * C156) *
                C9265 +
            ((C191 * C523 + C9181 * C616) * C9273 +
             (C191 * C451 + C9181 * C555) * C156) *
                C5915) *
               C3135) *
              C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C448 +
            (C6121 * C86 + C5915 * C323 + C6122 * C740 + C9265 * C934) *
                C9272) *
               C3135 +
           ((C6133 + C6132) * C448 + (C6135 + C6134) * C9272) * C9257) *
              C9181 * C9273 * C446 -
          (((C6122 * C1763 + C9265 * C1991 + C6121 * C453 + C5915 * C647) *
                C9272 +
            (C6122 * C1761 + C9265 * C1989 + C6121 * C450 + C5915 * C644) *
                C448) *
               C9257 +
           ((C6122 * C1764 + C9265 * C1992 + C6121 * C454 + C5915 * C648) *
                C9272 +
            (C6122 * C1762 + C9265 * C1990 + C6121 * C451 + C5915 * C645) *
                C448) *
               C3135) *
              C9181 * C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eezy[19] +=
        (2 * std::pow(Pi, 2.5) *
         (((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C487 +
           (C6121 * C122 + C5915 * C365 + C6122 * C775 + C9265 * C963) * C446 -
           (C6122 * C1762 + C9265 * C1990 + C6121 * C451 + C5915 * C645) *
               C488 -
           (C6122 * C1804 + C9265 * C2028 + C6121 * C491 + C5915 * C675) *
               C447) *
              C3135 +
          ((C6133 + C6132) * C487 + (C6174 + C6175) * C446 -
           (C6122 * C1761 + C9265 * C1989 + C6121 * C450 + C5915 * C644) *
               C488 -
           (C6122 * C1803 + C9265 * C2027 + C6121 * C490 + C5915 * C676) *
               C447) *
              C9257) *
         C9181 * C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C156 +
            (C6121 * C157 + C5915 * C405 + C6122 * C809 + C9265 * C990) *
                C9273) *
               C3135 +
           ((C6133 + C6132) * C156 + (C6214 + C6215) * C9273) * C9257) *
              C9181 * C446 -
          (((C6122 * C1841 + C9265 * C2064 + C6121 * C522 + C5915 * C705) *
                C9273 +
            (C6122 * C1761 + C9265 * C1989 + C6121 * C450 + C5915 * C644) *
                C156) *
               C9257 +
           ((C6122 * C1842 + C9265 * C2063 + C6121 * C523 + C5915 * C706) *
                C9273 +
            (C6122 * C1762 + C9265 * C1990 + C6121 * C451 + C5915 * C645) *
                C156) *
               C3135) *
              C9181 * C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C448 +
            (C3139 * C86 + C3135 * C91 + C3140 * C87 + C9257 * C92) * C9272) *
               C9181 * C5915 +
           ((C6564 + C6565) * C448 + (C6566 + C6567) * C9272) * C9181 * C9265) *
              C733 -
          (((C3140 * C2757 + C9257 * C2761 + C3139 * C2758 + C3135 * C2762) *
                C9272 +
            (C3140 * C2755 + C9257 * C2759 + C3139 * C2756 + C3135 * C2760) *
                C448) *
               C9181 * C9265 +
           ((C6567 + C6566) * C9272 + (C6565 + C6564) * C448) * C9181 * C5915) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C121 +
            (C3139 * C122 + C3135 * C126 + C3140 * C123 + C9257 * C127) *
                C9274) *
               C9181 * C5915 +
           ((C6564 + C6565) * C121 + (C6606 + C6607) * C9274) * C9181 * C9265) *
              C9272 * C733 -
          (((C3140 * C2809 + C9257 * C2811 + C3139 * C2810 + C3135 * C2812) *
                C9274 +
            (C3140 * C2755 + C9257 * C2759 + C3139 * C2756 + C3135 * C2760) *
                C121) *
               C9181 * C9265 +
           ((C6607 + C6606) * C9274 + (C6565 + C6564) * C121) * C9181 * C5915) *
              C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3139 * C79 + C3135 * C83 + C3140 * C80 + C9257 * C84) * C805 +
           (C3139 * C157 + C3135 * C161 + C3140 * C158 + C9257 * C162) * C733 -
           (C6565 + C6564) * C806 - (C6646 + C6647) * C734) *
              C9181 * C5915 +
          ((C6564 + C6565) * C805 + (C6647 + C6646) * C733 -
           (C3140 * C2755 + C9257 * C2759 + C3139 * C2756 + C3135 * C2760) *
               C806 -
           (C3140 * C2853 + C9257 * C2855 + C3139 * C2854 + C3135 * C2856) *
               C734) *
              C9181 * C9265) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C191 * C79 + C9181 * C192) * C448 +
             (C191 * C86 + C9181 * C196) * C9272) *
                C5915 +
            (C2910 + C2911) * C9265) *
               C3135 +
           ((C209 * C448 + C210 * C9272) * C5915 + (C2906 + C2907) * C9265) *
               C9257) *
              C733 -
          ((((C191 * C2757 + C9181 * C2899) * C9272 +
             (C191 * C2755 + C9181 * C2897) * C448) *
                C9265 +
            (C2907 + C2906) * C5915) *
               C9257 +
           (((C191 * C2758 + C9181 * C2900) * C9272 +
             (C191 * C2756 + C9181 * C2898) * C448) *
                C9265 +
            (C2911 + C2910) * C5915) *
               C3135) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C191 * C79 + C9181 * C192) * C121 +
             (C191 * C122 + C9181 * C238) * C9274) *
                C5915 +
            (C2948 + C2952) * C9265) *
               C3135 +
           ((C243 + C251) * C5915 + (C2244 + C2248) * C9265) * C9257) *
              C9272 * C733 -
          ((((C191 * C2809 + C9181 * C2945) * C9274 +
             (C191 * C2755 + C9181 * C2897) * C121) *
                C9265 +
            (C2248 + C2244) * C5915) *
               C9257 +
           (((C191 * C2810 + C9181 * C2946) * C9274 +
             (C191 * C2756 + C9181 * C2898) * C121) *
                C9265 +
            (C2952 + C2948) * C5915) *
               C3135) *
              C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C191 * C79 + C9181 * C192) * C805 +
            (C191 * C157 + C9181 * C278) * C733 - C2908 * C806 - C2991 * C734) *
               C5915 +
           (C2908 * C805 + C2991 * C733 -
            (C191 * C2756 + C9181 * C2898) * C806 -
            (C191 * C2854 + C9181 * C2986) * C734) *
               C9265) *
              C3135 +
          ((C209 * C805 + C289 * C733 - C2208 * C806 - C2286 * C734) * C5915 +
           (C2208 * C805 + C2286 * C733 -
            (C191 * C2755 + C9181 * C2897) * C806 -
            (C191 * C2853 + C9181 * C2987) * C734) *
               C9265) *
              C9257) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C448 +
            (C6121 * C86 + C5915 * C323 + C6122 * C740 + C9265 * C934) *
                C9272) *
               C3135 +
           ((C6133 + C6132) * C448 + (C6135 + C6134) * C9272) * C9257) *
              C9181 * C733 -
          (((C6122 * C2757 + C9265 * C3027 + C6121 * C739 + C5915 * C933) *
                C9272 +
            (C6122 * C2755 + C9265 * C3025 + C6121 * C736 + C5915 * C930) *
                C448) *
               C9257 +
           ((C6122 * C2758 + C9265 * C3028 + C6121 * C740 + C5915 * C934) *
                C9272 +
            (C6122 * C2756 + C9265 * C3026 + C6121 * C737 + C5915 * C931) *
                C448) *
               C3135) *
              C9181 * C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C121 +
            (C6121 * C122 + C5915 * C365 + C6122 * C775 + C9265 * C963) *
                C9274) *
               C3135 +
           ((C6133 + C6132) * C121 + (C6174 + C6175) * C9274) * C9257) *
              C9181 * C9272 * C733 -
          (((C6122 * C2809 + C9265 * C3063 + C6121 * C774 + C5915 * C962) *
                C9274 +
            (C6122 * C2755 + C9265 * C3025 + C6121 * C736 + C5915 * C930) *
                C121) *
               C9257 +
           ((C6122 * C2810 + C9265 * C3064 + C6121 * C775 + C5915 * C963) *
                C9274 +
            (C6122 * C2756 + C9265 * C3026 + C6121 * C737 + C5915 * C931) *
                C121) *
               C3135) *
              C9181 * C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C805 +
           (C6121 * C157 + C5915 * C405 + C6122 * C809 + C9265 * C990) * C733 -
           (C6122 * C2756 + C9265 * C3026 + C6121 * C737 + C5915 * C931) *
               C806 -
           (C6122 * C2854 + C9265 * C3099 + C6121 * C809 + C5915 * C990) *
               C734) *
              C3135 +
          ((C6133 + C6132) * C805 + (C6214 + C6215) * C733 -
           (C6122 * C2755 + C9265 * C3025 + C6121 * C736 + C5915 * C930) *
               C806 -
           (C6122 * C2853 + C9265 * C3100 + C6121 * C808 + C5915 * C991) *
               C734) *
              C9257) *
         C9181 * C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4105 * C79 + C9125 * C83) * C77 +
            (C4105 * C86 + C9125 * C91) * C68 -
            (C4105 * C80 + C9125 * C84) * C78 -
            (C4105 * C87 + C9125 * C92) * C69) *
               C1029 +
           (C4356 * C77 + C4357 * C68 - (C4105 * C450 + C9125 * C456) * C78 -
            (C4105 * C453 + C9125 * C459) * C69) *
               C9263) *
              C5915 +
          ((C5560 * C77 + C5561 * C68 - (C4105 * C736 + C9125 * C742) * C78 -
            (C4105 * C739 + C9125 * C745) * C69) *
               C1029 +
           (C5210 * C77 + C5211 * C68 - (C4105 * C1761 + C9125 * C1765) * C78 -
            (C4105 * C1763 + C9125 * C1767) * C69) *
               C9263) *
              C9265) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C4105 * C79 + C9125 * C83) * C121 +
             (C4105 * C122 + C9125 * C126) * C9274) *
                C1029 +
            (C4356 * C121 + C4396 * C9274) * C9263) *
               C5915 +
           ((C5600 + C5606) * C1029 + (C5603 + C5604) * C9263) * C9265) *
              C68 -
          ((((C4105 * C1803 + C9125 * C1805) * C9274 +
             (C4105 * C1761 + C9125 * C1765) * C121) *
                C9263 +
            ((C4105 * C774 + C9125 * C777) * C9274 +
             (C4105 * C736 + C9125 * C742) * C121) *
                C1029) *
               C9265 +
           (((C4105 * C490 + C9125 * C493) * C9274 +
             (C4105 * C450 + C9125 * C456) * C121) *
                C9263 +
            ((C4105 * C123 + C9125 * C127) * C9274 +
             (C4105 * C80 + C9125 * C84) * C121) *
                C1029) *
               C5915) *
              C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C4105 * C79 + C9125 * C83) * C156 +
             (C4105 * C157 + C9125 * C161) * C9273) *
                C1029 +
            (C4426 + C4434) * C9263) *
               C5915 +
           ((C5560 * C156 + C5645 * C9273) * C1029 + (C5285 + C5289) * C9263) *
               C9265) *
              C9274 * C68 -
          ((((C4105 * C1841 + C9125 * C1843) * C9273 +
             (C4105 * C1761 + C9125 * C1765) * C156) *
                C9263 +
            ((C4105 * C808 + C9125 * C811) * C9273 +
             (C4105 * C736 + C9125 * C742) * C156) *
                C1029) *
               C9265 +
           (((C4105 * C522 + C9125 * C525) * C9273 +
             (C4105 * C450 + C9125 * C456) * C156) *
                C9263 +
            ((C4105 * C158 + C9125 * C162) * C9273 +
             (C4105 * C80 + C9125 * C84) * C156) *
                C1029) *
               C5915) *
              C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C77 +
           (C1135 * C86 + C1029 * C196 + C1136 * C454 + C9263 * C558) * C68 -
           (C1146 + C1147) * C78 - (C1148 + C1149) * C69) *
              C5915 +
          ((C1135 * C737 + C1029 * C841 + C1136 * C1762 + C9263 * C1880) * C77 +
           (C1135 * C740 + C1029 * C844 + C1136 * C1764 + C9263 * C1882) * C68 -
           (C1136 * C1761 + C9263 * C1879 + C1135 * C736 + C1029 * C840) * C78 -
           (C1136 * C1763 + C9263 * C1881 + C1135 * C739 + C1029 * C843) *
               C69) *
              C9265) *
         C9125 * C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C121 +
            (C1135 * C122 + C1029 * C238 + C1136 * C491 + C9263 * C585) *
                C9274) *
               C5915 +
           ((C1135 * C737 + C1029 * C841 + C1136 * C1762 + C9263 * C1880) *
                C121 +
            (C1135 * C775 + C1029 * C873 + C1136 * C1804 + C9263 * C1918) *
                C9274) *
               C9265) *
              C9125 * C68 -
          (((C1136 * C1803 + C9263 * C1917 + C1135 * C774 + C1029 * C872) *
                C9274 +
            (C1136 * C1761 + C9263 * C1879 + C1135 * C736 + C1029 * C840) *
                C121) *
               C9265 +
           ((C1189 + C1188) * C9274 + (C1146 + C1147) * C121) * C5915) *
              C9125 * C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C156 +
            (C1135 * C157 + C1029 * C278 + C1136 * C523 + C9263 * C616) *
                C9273) *
               C5915 +
           ((C1135 * C737 + C1029 * C841 + C1136 * C1762 + C9263 * C1880) *
                C156 +
            (C1135 * C809 + C1029 * C900 + C1136 * C1842 + C9263 * C1953) *
                C9273) *
               C9265) *
              C9125 * C9274 * C68 -
          (((C1136 * C1841 + C9263 * C1954 + C1135 * C808 + C1029 * C901) *
                C9273 +
            (C1136 * C1761 + C9263 * C1879 + C1135 * C736 + C1029 * C840) *
                C156) *
               C9265 +
           ((C1229 + C1228) * C9273 + (C1146 + C1147) * C156) * C5915) *
              C9125 * C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eezx[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C77 +
           (C6121 * C86 + C5915 * C323 + C6122 * C740 + C9265 * C934) * C68 -
           (C6132 + C6133) * C78 - (C6134 + C6135) * C69) *
              C9125 * C1029 +
          ((C6121 * C451 + C5915 * C645 + C6122 * C1762 + C9265 * C1990) * C77 +
           (C6121 * C454 + C5915 * C648 + C6122 * C1764 + C9265 * C1992) * C68 -
           (C6122 * C1761 + C9265 * C1989 + C6121 * C450 + C5915 * C644) * C78 -
           (C6122 * C1763 + C9265 * C1991 + C6121 * C453 + C5915 * C647) *
               C69) *
              C9125 * C9263) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C121 +
            (C6121 * C122 + C5915 * C365 + C6122 * C775 + C9265 * C963) *
                C9274) *
               C9125 * C1029 +
           ((C6121 * C451 + C5915 * C645 + C6122 * C1762 + C9265 * C1990) *
                C121 +
            (C6121 * C491 + C5915 * C675 + C6122 * C1804 + C9265 * C2028) *
                C9274) *
               C9125 * C9263) *
              C68 -
          (((C6122 * C1803 + C9265 * C2027 + C6121 * C490 + C5915 * C676) *
                C9274 +
            (C6122 * C1761 + C9265 * C1989 + C6121 * C450 + C5915 * C644) *
                C121) *
               C9125 * C9263 +
           ((C6175 + C6174) * C9274 + (C6132 + C6133) * C121) * C9125 * C1029) *
              C69) *
         C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C156 +
            (C6121 * C157 + C5915 * C405 + C6122 * C809 + C9265 * C990) *
                C9273) *
               C9125 * C1029 +
           ((C6121 * C451 + C5915 * C645 + C6122 * C1762 + C9265 * C1990) *
                C156 +
            (C6121 * C523 + C5915 * C706 + C6122 * C1842 + C9265 * C2063) *
                C9273) *
               C9125 * C9263) *
              C9274 * C68 -
          (((C6122 * C1841 + C9265 * C2064 + C6121 * C522 + C5915 * C705) *
                C9273 +
            (C6122 * C1761 + C9265 * C1989 + C6121 * C450 + C5915 * C644) *
                C156) *
               C9125 * C9263 +
           ((C6215 + C6214) * C9273 + (C6132 + C6133) * C156) * C9125 * C1029) *
              C9274 * C69)) /
        (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C4105 * C79 + C9125 * C83) * C448 +
             (C4105 * C86 + C9125 * C91) * C9272) *
                C1029 +
            (C4360 + C4361) * C9263) *
               C5915 +
           ((C5562 + C5563) * C1029 + (C5212 + C5213) * C9263) * C9265) *
              C9273 * C446 -
          ((((C4105 * C4642 + C9125 * C4644) * C9272 +
             (C4105 * C4641 + C9125 * C4643) * C448) *
                C9263 +
            (C5213 + C5212) * C1029) *
               C9265 +
           ((C4363 + C4362) * C9263 + (C4361 + C4360) * C1029) * C5915) *
              C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4105 * C79 + C9125 * C83) * C487 +
            (C4105 * C122 + C9125 * C126) * C446 - C4356 * C488 -
            C4396 * C447) *
               C1029 +
           (C4356 * C487 + C4396 * C446 - C4358 * C488 - C4397 * C447) *
               C9263) *
              C5915 +
          ((C5560 * C487 + C5605 * C446 - C5210 * C488 - C5250 * C447) * C1029 +
           (C5210 * C487 + C5250 * C446 -
            (C4105 * C4641 + C9125 * C4643) * C488 -
            (C4105 * C4671 + C9125 * C4672) * C447) *
               C9263) *
              C9265) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C4105 * C79 + C9125 * C83) * C156 +
             (C4105 * C157 + C9125 * C161) * C9273) *
                C1029 +
            (C4426 + C4434) * C9263) *
               C5915 +
           ((C5560 * C156 + C5645 * C9273) * C1029 + (C5285 + C5289) * C9263) *
               C9265) *
              C446 -
          ((((C4105 * C4699 + C9125 * C4700) * C9273 +
             (C4105 * C4641 + C9125 * C4643) * C156) *
                C9263 +
            (C5289 + C5285) * C1029) *
               C9265 +
           ((C4435 + C4429) * C9263 + (C4434 + C4426) * C1029) * C5915) *
              C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C448 +
            (C1135 * C86 + C1029 * C196 + C1136 * C454 + C9263 * C558) *
                C9272) *
               C5915 +
           ((C1135 * C737 + C1029 * C841 + C1136 * C1762 + C9263 * C1880) *
                C448 +
            (C1135 * C740 + C1029 * C844 + C1136 * C1764 + C9263 * C1882) *
                C9272) *
               C9265) *
              C9125 * C9273 * C446 -
          (((C1136 * C4642 + C9263 * C4728 + C1135 * C1764 + C1029 * C1882) *
                C9272 +
            (C1136 * C4641 + C9263 * C4727 + C1135 * C1762 + C1029 * C1880) *
                C448) *
               C9265 +
           ((C1136 * C1384 + C9263 * C1526 + C1135 * C454 + C1029 * C558) *
                C9272 +
            (C1136 * C1382 + C9263 * C1524 + C1135 * C451 + C1029 * C555) *
                C448) *
               C5915) *
              C9125 * C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C487 +
           (C1135 * C122 + C1029 * C238 + C1136 * C491 + C9263 * C585) * C446 -
           (C1136 * C1382 + C9263 * C1524 + C1135 * C451 + C1029 * C555) *
               C488 -
           (C1136 * C1436 + C9263 * C1561 + C1135 * C491 + C1029 * C585) *
               C447) *
              C5915 +
          ((C1135 * C737 + C1029 * C841 + C1136 * C1762 + C9263 * C1880) *
               C487 +
           (C1135 * C775 + C1029 * C873 + C1136 * C1804 + C9263 * C1918) *
               C446 -
           (C1136 * C4641 + C9263 * C4727 + C1135 * C1762 + C1029 * C1880) *
               C488 -
           (C1136 * C4671 + C9263 * C4755 + C1135 * C1804 + C1029 * C1918) *
               C447) *
              C9265) *
         C9125 * C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C156 +
            (C1135 * C157 + C1029 * C278 + C1136 * C523 + C9263 * C616) *
                C9273) *
               C5915 +
           ((C1135 * C737 + C1029 * C841 + C1136 * C1762 + C9263 * C1880) *
                C156 +
            (C1135 * C809 + C1029 * C900 + C1136 * C1842 + C9263 * C1953) *
                C9273) *
               C9265) *
              C9125 * C446 -
          (((C1136 * C4699 + C9263 * C4782 + C1135 * C1842 + C1029 * C1953) *
                C9273 +
            (C1136 * C4641 + C9263 * C4727 + C1135 * C1762 + C1029 * C1880) *
                C156) *
               C9265 +
           ((C1136 * C1480 + C9263 * C1598 + C1135 * C523 + C1029 * C616) *
                C9273 +
            (C1136 * C1382 + C9263 * C1524 + C1135 * C451 + C1029 * C555) *
                C156) *
               C5915) *
              C9125 * C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C448 +
            (C6121 * C86 + C5915 * C323 + C6122 * C740 + C9265 * C934) *
                C9272) *
               C9125 * C1029 +
           ((C7404 + C7405) * C448 + (C7406 + C7407) * C9272) * C9125 * C9263) *
              C9273 * C446 -
          (((C6122 * C4642 + C9265 * C4810 + C6121 * C1384 + C5915 * C1636) *
                C9272 +
            (C6122 * C4641 + C9265 * C4809 + C6121 * C1382 + C5915 * C1634) *
                C448) *
               C9125 * C9263 +
           ((C7407 + C7406) * C9272 + (C7405 + C7404) * C448) * C9125 * C1029) *
              C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eezy[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C487 +
           (C6121 * C122 + C5915 * C365 + C6122 * C775 + C9265 * C963) * C446 -
           (C7405 + C7404) * C488 - (C7446 + C7447) * C447) *
              C9125 * C1029 +
          ((C7404 + C7405) * C487 + (C7447 + C7446) * C446 -
           (C6122 * C4641 + C9265 * C4809 + C6121 * C1382 + C5915 * C1634) *
               C488 -
           (C6122 * C4671 + C9265 * C4837 + C6121 * C1436 + C5915 * C1681) *
               C447) *
              C9125 * C9263) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C156 +
            (C6121 * C157 + C5915 * C405 + C6122 * C809 + C9265 * C990) *
                C9273) *
               C9125 * C1029 +
           ((C7404 + C7405) * C156 + (C7486 + C7487) * C9273) * C9125 * C9263) *
              C446 -
          (((C6122 * C4699 + C9265 * C4864 + C6121 * C1480 + C5915 * C1721) *
                C9273 +
            (C6122 * C4641 + C9265 * C4809 + C6121 * C1382 + C5915 * C1634) *
                C156) *
               C9125 * C9263 +
           ((C7487 + C7486) * C9273 + (C7405 + C7404) * C156) * C9125 * C1029) *
              C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C4105 * C79 + C9125 * C83) * C448 +
             (C4105 * C86 + C9125 * C91) * C9272) *
                C1029 +
            (C4360 + C4361) * C9263) *
               C5915 +
           ((C5562 + C5563) * C1029 + (C5212 + C5213) * C9263) * C9265) *
              C733 -
          ((((C4105 * C5552 + C9125 * C5554) * C9272 +
             (C4105 * C5551 + C9125 * C5553) * C448) *
                C9263 +
            ((C4105 * C2758 + C9125 * C2762) * C9272 +
             (C4105 * C2756 + C9125 * C2760) * C448) *
                C1029) *
               C9265 +
           ((C5213 + C5212) * C9263 + (C5563 + C5562) * C1029) * C5915) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C4105 * C79 + C9125 * C83) * C121 +
             (C4105 * C122 + C9125 * C126) * C9274) *
                C1029 +
            (C4356 * C121 + C4396 * C9274) * C9263) *
               C5915 +
           ((C5600 + C5606) * C1029 + (C5603 + C5604) * C9263) * C9265) *
              C9272 * C733 -
          ((((C4105 * C5597 + C9125 * C5598) * C9274 +
             (C4105 * C5551 + C9125 * C5553) * C121) *
                C9263 +
            ((C4105 * C2810 + C9125 * C2812) * C9274 +
             (C4105 * C2756 + C9125 * C2760) * C121) *
                C1029) *
               C9265 +
           ((C5604 + C5603) * C9263 + (C5606 + C5600) * C1029) * C5915) *
              C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4105 * C79 + C9125 * C83) * C805 +
            (C4105 * C157 + C9125 * C161) * C733 - C5560 * C806 -
            C5645 * C734) *
               C1029 +
           (C4356 * C805 + C4432 * C733 - C5210 * C806 - C5288 * C734) *
               C9263) *
              C5915 +
          ((C5560 * C805 + C5645 * C733 -
            (C4105 * C2756 + C9125 * C2760) * C806 -
            (C4105 * C2854 + C9125 * C2856) * C734) *
               C1029 +
           (C5210 * C805 + C5288 * C733 -
            (C4105 * C5551 + C9125 * C5553) * C806 -
            (C4105 * C5640 + C9125 * C5641) * C734) *
               C9263) *
              C9265) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C448 +
            (C1135 * C86 + C1029 * C196 + C1136 * C454 + C9263 * C558) *
                C9272) *
               C5915 +
           ((C7632 + C7633) * C448 + (C7634 + C7635) * C9272) * C9265) *
              C9125 * C733 -
          (((C1136 * C5552 + C9263 * C5680 + C1135 * C2758 + C1029 * C2900) *
                C9272 +
            (C1136 * C5551 + C9263 * C5679 + C1135 * C2756 + C1029 * C2898) *
                C448) *
               C9265 +
           ((C7635 + C7634) * C9272 + (C7633 + C7632) * C448) * C5915) *
              C9125 * C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C121 +
            (C1135 * C122 + C1029 * C238 + C1136 * C491 + C9263 * C585) *
                C9274) *
               C5915 +
           ((C7632 + C7633) * C121 + (C7674 + C7675) * C9274) * C9265) *
              C9125 * C9272 * C733 -
          (((C1136 * C5597 + C9263 * C5727 + C1135 * C2810 + C1029 * C2946) *
                C9274 +
            (C1136 * C5551 + C9263 * C5679 + C1135 * C2756 + C1029 * C2898) *
                C121) *
               C9265 +
           ((C7675 + C7674) * C9274 + (C7633 + C7632) * C121) * C5915) *
              C9125 * C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1135 * C79 + C1029 * C192 + C1136 * C451 + C9263 * C555) * C805 +
           (C1135 * C157 + C1029 * C278 + C1136 * C523 + C9263 * C616) * C733 -
           (C7633 + C7632) * C806 - (C7714 + C7715) * C734) *
              C5915 +
          ((C7632 + C7633) * C805 + (C7715 + C7714) * C733 -
           (C1136 * C5551 + C9263 * C5679 + C1135 * C2756 + C1029 * C2898) *
               C806 -
           (C1136 * C5640 + C9263 * C5768 + C1135 * C2854 + C1029 * C2986) *
               C734) *
              C9265) *
         C9125 * C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C448 +
            (C6121 * C86 + C5915 * C323 + C6122 * C740 + C9265 * C934) *
                C9272) *
               C9125 * C1029 +
           ((C7404 + C7405) * C448 + (C7406 + C7407) * C9272) * C9125 * C9263) *
              C733 -
          (((C6122 * C5552 + C9265 * C5810 + C6121 * C1764 + C5915 * C1992) *
                C9272 +
            (C6122 * C5551 + C9265 * C5809 + C6121 * C1762 + C5915 * C1990) *
                C448) *
               C9125 * C9263 +
           ((C6122 * C2758 + C9265 * C3028 + C6121 * C740 + C5915 * C934) *
                C9272 +
            (C6122 * C2756 + C9265 * C3026 + C6121 * C737 + C5915 * C931) *
                C448) *
               C9125 * C1029) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eezy[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C121 +
            (C6121 * C122 + C5915 * C365 + C6122 * C775 + C9265 * C963) *
                C9274) *
               C9125 * C1029 +
           ((C7404 + C7405) * C121 + (C7447 + C7446) * C9274) * C9125 * C9263) *
              C9272 * C733 -
          (((C6122 * C5597 + C9265 * C5845 + C6121 * C1804 + C5915 * C2028) *
                C9274 +
            (C6122 * C5551 + C9265 * C5809 + C6121 * C1762 + C5915 * C1990) *
                C121) *
               C9125 * C9263 +
           ((C6122 * C2810 + C9265 * C3064 + C6121 * C775 + C5915 * C963) *
                C9274 +
            (C6122 * C2756 + C9265 * C3026 + C6121 * C737 + C5915 * C931) *
                C121) *
               C9125 * C1029) *
              C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((C6121 * C79 + C5915 * C319 + C6122 * C737 + C9265 * C931) * C805 +
           (C6121 * C157 + C5915 * C405 + C6122 * C809 + C9265 * C990) * C733 -
           (C6122 * C2756 + C9265 * C3026 + C6121 * C737 + C5915 * C931) *
               C806 -
           (C6122 * C2854 + C9265 * C3099 + C6121 * C809 + C5915 * C990) *
               C734) *
              C9125 * C1029 +
          ((C7404 + C7405) * C805 + (C7486 + C7487) * C733 -
           (C6122 * C5551 + C9265 * C5809 + C6121 * C1762 + C5915 * C1990) *
               C806 -
           (C6122 * C5640 + C9265 * C5880 + C6121 * C1842 + C5915 * C2063) *
               C734) *
              C9125 * C9263) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4105 * C79 + C9125 * C83) * C77 +
           (C4105 * C86 + C9125 * C91) * C68 -
           (C4105 * C80 + C9125 * C84) * C78 -
           (C4105 * C87 + C9125 * C92) * C69) *
              C9181 * C7843 +
          (C5560 * C77 + C5561 * C68 - (C4105 * C736 + C9125 * C742) * C78 -
           (C4105 * C739 + C9125 * C745) * C69) *
              C9181 * C7844 +
          ((C4105 * C2756 + C9125 * C2760) * C77 +
           (C4105 * C2758 + C9125 * C2762) * C68 -
           (C4105 * C2755 + C9125 * C2759) * C78 -
           (C4105 * C2757 + C9125 * C2761) * C69) *
              C9181 * C7845) *
         C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[24] += (2 * std::pow(Pi, 2.5) *
                   ((((C4105 * C79 + C9125 * C83) * C121 +
                      (C4105 * C122 + C9125 * C126) * C9274) *
                         C9181 * C7843 +
                     (C5600 + C5606) * C9181 * C7844 +
                     ((C4105 * C2756 + C9125 * C2760) * C121 +
                      (C4105 * C2810 + C9125 * C2812) * C9274) *
                         C9181 * C7845) *
                        C68 -
                    (((C4105 * C2809 + C9125 * C2811) * C9274 +
                      (C4105 * C2755 + C9125 * C2759) * C121) *
                         C9181 * C7845 +
                     ((C4105 * C774 + C9125 * C777) * C9274 +
                      (C4105 * C736 + C9125 * C742) * C121) *
                         C9181 * C7844 +
                     ((C4105 * C123 + C9125 * C127) * C9274 +
                      (C4105 * C80 + C9125 * C84) * C121) *
                         C9181 * C7843) *
                        C69) *
                   C9273) /
                  (p * q * std::sqrt(p + q));
    d2eexz[24] += (2 * std::pow(Pi, 2.5) *
                   ((((C4105 * C79 + C9125 * C83) * C156 +
                      (C4105 * C157 + C9125 * C161) * C9273) *
                         C9181 * C7843 +
                     (C5560 * C156 + C5645 * C9273) * C9181 * C7844 +
                     ((C4105 * C2756 + C9125 * C2760) * C156 +
                      (C4105 * C2854 + C9125 * C2856) * C9273) *
                         C9181 * C7845) *
                        C9274 * C68 -
                    (((C4105 * C2853 + C9125 * C2855) * C9273 +
                      (C4105 * C2755 + C9125 * C2759) * C156) *
                         C9181 * C7845 +
                     ((C4105 * C808 + C9125 * C811) * C9273 +
                      (C4105 * C736 + C9125 * C742) * C156) *
                         C9181 * C7844 +
                     ((C4105 * C158 + C9125 * C162) * C9273 +
                      (C4105 * C80 + C9125 * C84) * C156) *
                         C9181 * C7843) *
                        C9274 * C69)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (2 * std::pow(Pi, 2.5) *
         (((C191 * C79 + C9181 * C192) * C77 +
           (C191 * C86 + C9181 * C196) * C68 - C209 * C78 - C210 * C69) *
              C7843 +
          (C2908 * C77 + C2909 * C68 - C2208 * C78 - C2209 * C69) * C7844 +
          ((C191 * C2756 + C9181 * C2898) * C77 +
           (C191 * C2758 + C9181 * C2900) * C68 -
           (C191 * C2755 + C9181 * C2897) * C78 -
           (C191 * C2757 + C9181 * C2899) * C69) *
              C7845) *
         C9125 * C9273 * C9274) /
        (p * q * std::sqrt(p + q));
    d2eeyy[24] += (2 * std::pow(Pi, 2.5) *
                   ((((C191 * C79 + C9181 * C192) * C121 +
                      (C191 * C122 + C9181 * C238) * C9274) *
                         C7843 +
                     (C2948 + C2952) * C7844 +
                     ((C191 * C2756 + C9181 * C2898) * C121 +
                      (C191 * C2810 + C9181 * C2946) * C9274) *
                         C7845) *
                        C9125 * C68 -
                    (((C191 * C2809 + C9181 * C2945) * C9274 +
                      (C191 * C2755 + C9181 * C2897) * C121) *
                         C7845 +
                     (C2248 + C2244) * C7844 + (C251 + C243) * C7843) *
                        C9125 * C69) *
                   C9273) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[24] += (2 * std::pow(Pi, 2.5) *
                   ((((C191 * C79 + C9181 * C192) * C156 +
                      (C191 * C157 + C9181 * C278) * C9273) *
                         C7843 +
                     (C2908 * C156 + C2991 * C9273) * C7844 +
                     ((C191 * C2756 + C9181 * C2898) * C156 +
                      (C191 * C2854 + C9181 * C2986) * C9273) *
                         C7845) *
                        C9125 * C9274 * C68 -
                    (((C191 * C2853 + C9181 * C2987) * C9273 +
                      (C191 * C2755 + C9181 * C2897) * C156) *
                         C7845 +
                     (C2287 + C2283) * C7844 + (C291 + C283) * C7843) *
                        C9125 * C9274 * C69)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[24] += (2 * std::pow(Pi, 2.5) *
                   ((C8002 * C79 + C7843 * C319 + C8003 * C737 + C7844 * C931 +
                     C8004 * C2756 + C7845 * C3026) *
                        C77 +
                    (C8002 * C86 + C7843 * C323 + C8003 * C740 + C7844 * C934 +
                     C8004 * C2758 + C7845 * C3028) *
                        C68 -
                    (C8004 * C2755 + C7845 * C3025 + C8003 * C736 +
                     C7844 * C930 + C8002 * C80 + C7843 * C320) *
                        C78 -
                    (C8004 * C2757 + C7845 * C3027 + C8003 * C739 +
                     C7844 * C933 + C8002 * C87 + C7843 * C324) *
                        C69) *
                   C9125 * C9181 * C9273 * C9274) /
                  (p * q * std::sqrt(p + q));
    d2eezy[24] += (2 * std::pow(Pi, 2.5) *
                   (((C8002 * C79 + C7843 * C319 + C8003 * C737 + C7844 * C931 +
                      C8004 * C2756 + C7845 * C3026) *
                         C121 +
                     (C8002 * C122 + C7843 * C365 + C8003 * C775 +
                      C7844 * C963 + C8004 * C2810 + C7845 * C3064) *
                         C9274) *
                        C9125 * C9181 * C68 -
                    ((C8004 * C2809 + C7845 * C3063 + C8003 * C774 +
                      C7844 * C962 + C8002 * C123 + C7843 * C366) *
                         C9274 +
                     (C8004 * C2755 + C7845 * C3025 + C8003 * C736 +
                      C7844 * C930 + C8002 * C80 + C7843 * C320) *
                         C121) *
                        C9125 * C9181 * C69) *
                   C9273) /
                  (p * q * std::sqrt(p + q));
    d2eezz[24] += (2 * std::pow(Pi, 2.5) *
                   (((C8002 * C79 + C7843 * C319 + C8003 * C737 + C7844 * C931 +
                      C8004 * C2756 + C7845 * C3026) *
                         C156 +
                     (C8002 * C157 + C7843 * C405 + C8003 * C809 +
                      C7844 * C990 + C8004 * C2854 + C7845 * C3099) *
                         C9273) *
                        C9125 * C9181 * C9274 * C68 -
                    ((C8004 * C2853 + C7845 * C3100 + C8003 * C808 +
                      C7844 * C991 + C8002 * C158 + C7843 * C406) *
                         C9273 +
                     (C8004 * C2755 + C7845 * C3025 + C8003 * C736 +
                      C7844 * C930 + C8002 * C80 + C7843 * C320) *
                         C156) *
                        C9125 * C9181 * C9274 * C69)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[25] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4105 * C79 + C9125 * C83) * C448 +
            (C4105 * C86 + C9125 * C91) * C9272) *
               C9181 * C7843 +
           (C5562 + C5563) * C9181 * C7844 +
           ((C4105 * C2756 + C9125 * C2760) * C448 +
            (C4105 * C2758 + C9125 * C2762) * C9272) *
               C9181 * C7845) *
              C9273 * C446 -
          (((C4105 * C5552 + C9125 * C5554) * C9272 +
            (C4105 * C5551 + C9125 * C5553) * C448) *
               C9181 * C7845 +
           (C5213 + C5212) * C9181 * C7844 + (C4361 + C4360) * C9181 * C7843) *
              C9273 * C447)) /
        (p * q * std::sqrt(p + q));
    d2eexy[25] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4105 * C79 + C9125 * C83) * C487 +
           (C4105 * C122 + C9125 * C126) * C446 - C4356 * C488 - C4396 * C447) *
              C9181 * C7843 +
          (C5560 * C487 + C5605 * C446 - C5210 * C488 - C5250 * C447) * C9181 *
              C7844 +
          ((C4105 * C2756 + C9125 * C2760) * C487 +
           (C4105 * C2810 + C9125 * C2812) * C446 -
           (C4105 * C5551 + C9125 * C5553) * C488 -
           (C4105 * C5597 + C9125 * C5598) * C447) *
              C9181 * C7845) *
         C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eexz[25] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4105 * C79 + C9125 * C83) * C156 +
            (C4105 * C157 + C9125 * C161) * C9273) *
               C9181 * C7843 +
           (C5560 * C156 + C5645 * C9273) * C9181 * C7844 +
           ((C4105 * C2756 + C9125 * C2760) * C156 +
            (C4105 * C2854 + C9125 * C2856) * C9273) *
               C9181 * C7845) *
              C446 -
          (((C4105 * C5640 + C9125 * C5641) * C9273 +
            (C4105 * C5551 + C9125 * C5553) * C156) *
               C9181 * C7845 +
           (C5289 + C5285) * C9181 * C7844 + (C4434 + C4426) * C9181 * C7843) *
              C447) *
         C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[25] += (2 * std::pow(Pi, 2.5) *
                   ((((C191 * C79 + C9181 * C192) * C448 +
                      (C191 * C86 + C9181 * C196) * C9272) *
                         C7843 +
                     (C2910 + C2911) * C7844 +
                     ((C191 * C2756 + C9181 * C2898) * C448 +
                      (C191 * C2758 + C9181 * C2900) * C9272) *
                         C7845) *
                        C9125 * C9273 * C446 -
                    (((C191 * C5552 + C9181 * C5680) * C9272 +
                      (C191 * C5551 + C9181 * C5679) * C448) *
                         C7845 +
                     ((C191 * C1764 + C9181 * C1882) * C9272 +
                      (C191 * C1762 + C9181 * C1880) * C448) *
                         C7844 +
                     ((C191 * C454 + C9181 * C558) * C9272 +
                      (C191 * C451 + C9181 * C555) * C448) *
                         C7843) *
                        C9125 * C9273 * C447)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[25] +=
        (2 * std::pow(Pi, 2.5) *
         (((C191 * C79 + C9181 * C192) * C487 +
           (C191 * C122 + C9181 * C238) * C446 -
           (C191 * C451 + C9181 * C555) * C488 -
           (C191 * C491 + C9181 * C585) * C447) *
              C7843 +
          (C2908 * C487 + C2951 * C446 - (C191 * C1762 + C9181 * C1880) * C488 -
           (C191 * C1804 + C9181 * C1918) * C447) *
              C7844 +
          ((C191 * C2756 + C9181 * C2898) * C487 +
           (C191 * C2810 + C9181 * C2946) * C446 -
           (C191 * C5551 + C9181 * C5679) * C488 -
           (C191 * C5597 + C9181 * C5727) * C447) *
              C7845) *
         C9125 * C9272 * C9273) /
        (p * q * std::sqrt(p + q));
    d2eeyz[25] += (2 * std::pow(Pi, 2.5) *
                   ((((C191 * C79 + C9181 * C192) * C156 +
                      (C191 * C157 + C9181 * C278) * C9273) *
                         C7843 +
                     (C2908 * C156 + C2991 * C9273) * C7844 +
                     ((C191 * C2756 + C9181 * C2898) * C156 +
                      (C191 * C2854 + C9181 * C2986) * C9273) *
                         C7845) *
                        C9125 * C446 -
                    (((C191 * C5640 + C9181 * C5768) * C9273 +
                      (C191 * C5551 + C9181 * C5679) * C156) *
                         C7845 +
                     ((C191 * C1842 + C9181 * C1953) * C9273 +
                      (C191 * C1762 + C9181 * C1880) * C156) *
                         C7844 +
                     ((C191 * C523 + C9181 * C616) * C9273 +
                      (C191 * C451 + C9181 * C555) * C156) *
                         C7843) *
                        C9125 * C447) *
                   C9272) /
                  (p * q * std::sqrt(p + q));
    d2eezx[25] += (2 * std::pow(Pi, 2.5) *
                   (((C8002 * C79 + C7843 * C319 + C8003 * C737 + C7844 * C931 +
                      C8004 * C2756 + C7845 * C3026) *
                         C448 +
                     (C8002 * C86 + C7843 * C323 + C8003 * C740 + C7844 * C934 +
                      C8004 * C2758 + C7845 * C3028) *
                         C9272) *
                        C9125 * C9181 * C9273 * C446 -
                    ((C8004 * C5552 + C7845 * C5810 + C8003 * C1764 +
                      C7844 * C1992 + C8002 * C454 + C7843 * C648) *
                         C9272 +
                     (C8004 * C5551 + C7845 * C5809 + C8003 * C1762 +
                      C7844 * C1990 + C8002 * C451 + C7843 * C645) *
                         C448) *
                        C9125 * C9181 * C9273 * C447)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[25] += (2 * std::pow(Pi, 2.5) *
                   ((C8002 * C79 + C7843 * C319 + C8003 * C737 + C7844 * C931 +
                     C8004 * C2756 + C7845 * C3026) *
                        C487 +
                    (C8002 * C122 + C7843 * C365 + C8003 * C775 + C7844 * C963 +
                     C8004 * C2810 + C7845 * C3064) *
                        C446 -
                    (C8004 * C5551 + C7845 * C5809 + C8003 * C1762 +
                     C7844 * C1990 + C8002 * C451 + C7843 * C645) *
                        C488 -
                    (C8004 * C5597 + C7845 * C5845 + C8003 * C1804 +
                     C7844 * C2028 + C8002 * C491 + C7843 * C675) *
                        C447) *
                   C9125 * C9181 * C9272 * C9273) /
                  (p * q * std::sqrt(p + q));
    d2eezz[25] += (2 * std::pow(Pi, 2.5) *
                   (((C8002 * C79 + C7843 * C319 + C8003 * C737 + C7844 * C931 +
                      C8004 * C2756 + C7845 * C3026) *
                         C156 +
                     (C8002 * C157 + C7843 * C405 + C8003 * C809 +
                      C7844 * C990 + C8004 * C2854 + C7845 * C3099) *
                         C9273) *
                        C9125 * C9181 * C446 -
                    ((C8004 * C5640 + C7845 * C5880 + C8003 * C1842 +
                      C7844 * C2063 + C8002 * C523 + C7843 * C706) *
                         C9273 +
                     (C8004 * C5551 + C7845 * C5809 + C8003 * C1762 +
                      C7844 * C1990 + C8002 * C451 + C7843 * C645) *
                         C156) *
                        C9125 * C9181 * C447) *
                   C9272) /
                  (p * q * std::sqrt(p + q));
    d2eexx[26] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4105 * C79 + C9125 * C83) * C448 +
            (C4105 * C86 + C9125 * C91) * C9272) *
               C9181 * C7843 +
           (C5562 + C5563) * C9181 * C7844 + (C8328 + C8329) * C9181 * C7845) *
              C733 -
          (((C4105 * C8318 + C9125 * C8320) * C9272 +
            (C4105 * C8317 + C9125 * C8319) * C448) *
               C9181 * C7845 +
           (C8329 + C8328) * C9181 * C7844 + (C5563 + C5562) * C9181 * C7843) *
              C734) *
         C9274) /
        (p * q * std::sqrt(p + q));
    d2eexy[26] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4105 * C79 + C9125 * C83) * C121 +
            (C4105 * C122 + C9125 * C126) * C9274) *
               C9181 * C7843 +
           (C5600 + C5606) * C9181 * C7844 + (C8358 + C8362) * C9181 * C7845) *
              C9272 * C733 -
          (((C4105 * C8355 + C9125 * C8356) * C9274 +
            (C4105 * C8317 + C9125 * C8319) * C121) *
               C9181 * C7845 +
           (C8362 + C8358) * C9181 * C7844 + (C5606 + C5600) * C9181 * C7843) *
              C9272 * C734)) /
        (p * q * std::sqrt(p + q));
    d2eexz[26] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4105 * C79 + C9125 * C83) * C805 +
           (C4105 * C157 + C9125 * C161) * C733 - C5560 * C806 - C5645 * C734) *
              C9181 * C7843 +
          (C5560 * C805 + C5645 * C733 - C8326 * C806 - C8393 * C734) * C9181 *
              C7844 +
          (C8326 * C805 + C8393 * C733 -
           (C4105 * C8317 + C9125 * C8319) * C806 -
           (C4105 * C8388 + C9125 * C8389) * C734) *
              C9181 * C7845) *
         C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eeyx[26] += (2 * std::pow(Pi, 2.5) *
                   ((((C191 * C79 + C9181 * C192) * C448 +
                      (C191 * C86 + C9181 * C196) * C9272) *
                         C7843 +
                     (C2910 + C2911) * C7844 + (C8428 + C8429) * C7845) *
                        C9125 * C733 -
                    (((C191 * C8318 + C9181 * C8420) * C9272 +
                      (C191 * C8317 + C9181 * C8419) * C448) *
                         C7845 +
                     (C8429 + C8428) * C7844 + (C2911 + C2910) * C7843) *
                        C9125 * C734) *
                   C9274) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[26] += (2 * std::pow(Pi, 2.5) *
                   ((((C191 * C79 + C9181 * C192) * C121 +
                      (C191 * C122 + C9181 * C238) * C9274) *
                         C7843 +
                     (C2948 + C2952) * C7844 + (C8457 + C8461) * C7845) *
                        C9125 * C9272 * C733 -
                    (((C191 * C8355 + C9181 * C8455) * C9274 +
                      (C191 * C8317 + C9181 * C8419) * C121) *
                         C7845 +
                     (C8461 + C8457) * C7844 + (C2952 + C2948) * C7843) *
                        C9125 * C9272 * C734)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[26] +=
        (2 * std::pow(Pi, 2.5) *
         (((C191 * C79 + C9181 * C192) * C805 +
           (C191 * C157 + C9181 * C278) * C733 - C2908 * C806 - C2991 * C734) *
              C7843 +
          (C2908 * C805 + C2991 * C733 - C8426 * C806 - C8491 * C734) * C7844 +
          (C8426 * C805 + C8491 * C733 - (C191 * C8317 + C9181 * C8419) * C806 -
           (C191 * C8388 + C9181 * C8487) * C734) *
              C7845) *
         C9125 * C9274 * C9272) /
        (p * q * std::sqrt(p + q));
    d2eezx[26] += (2 * std::pow(Pi, 2.5) *
                   (((C8002 * C79 + C7843 * C319 + C8003 * C737 + C7844 * C931 +
                      C8004 * C2756 + C7845 * C3026) *
                         C448 +
                     (C8002 * C86 + C7843 * C323 + C8003 * C740 + C7844 * C934 +
                      C8004 * C2758 + C7845 * C3028) *
                         C9272) *
                        C9125 * C9181 * C733 -
                    ((C8004 * C8318 + C7845 * C8518 + C8003 * C2758 +
                      C7844 * C3028 + C8002 * C740 + C7843 * C934) *
                         C9272 +
                     (C8004 * C8317 + C7845 * C8517 + C8003 * C2756 +
                      C7844 * C3026 + C8002 * C737 + C7843 * C931) *
                         C448) *
                        C9125 * C9181 * C734) *
                   C9274) /
                  (p * q * std::sqrt(p + q));
    d2eezy[26] += (2 * std::pow(Pi, 2.5) *
                   (((C8002 * C79 + C7843 * C319 + C8003 * C737 + C7844 * C931 +
                      C8004 * C2756 + C7845 * C3026) *
                         C121 +
                     (C8002 * C122 + C7843 * C365 + C8003 * C775 +
                      C7844 * C963 + C8004 * C2810 + C7845 * C3064) *
                         C9274) *
                        C9125 * C9181 * C9272 * C733 -
                    ((C8004 * C8355 + C7845 * C8545 + C8003 * C2810 +
                      C7844 * C3064 + C8002 * C775 + C7843 * C963) *
                         C9274 +
                     (C8004 * C8317 + C7845 * C8517 + C8003 * C2756 +
                      C7844 * C3026 + C8002 * C737 + C7843 * C931) *
                         C121) *
                        C9125 * C9181 * C9272 * C734)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[26] += (2 * std::pow(Pi, 2.5) *
                   ((C8002 * C79 + C7843 * C319 + C8003 * C737 + C7844 * C931 +
                     C8004 * C2756 + C7845 * C3026) *
                        C805 +
                    (C8002 * C157 + C7843 * C405 + C8003 * C809 + C7844 * C990 +
                     C8004 * C2854 + C7845 * C3099) *
                        C733 -
                    (C8004 * C8317 + C7845 * C8517 + C8003 * C2756 +
                     C7844 * C3026 + C8002 * C737 + C7843 * C931) *
                        C806 -
                    (C8004 * C8388 + C7845 * C8572 + C8003 * C2854 +
                     C7844 * C3099 + C8002 * C809 + C7843 * C990) *
                        C734) *
                   C9125 * C9181 * C9274 * C9272) /
                  (p * q * std::sqrt(p + q));
    
}
