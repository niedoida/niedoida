/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2210_4_ints(const double ae,
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
                              double* const g)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C92215 = p + q;
    const double C92731 = p * q;
    const double C92730 = std::pow(Pi, 2.5);
    const double C92728 = zP - zQ;
    const double C92727 = be * zAB;
    const double C92725 = yP - yQ;
    const double C92724 = be * yAB;
    const double C92721 = xP - xQ;
    const double C92720 = be * xAB;
    const double C92719 = 2 * p;
    const double C92732 = std::sqrt(C92215);
    const double C92744 = C92730 * kab;
    const double C92742 = C92728 * q;
    const double C92740 = C92725 * q;
    const double C92737 = C92721 * q;
    const double C92745 = C92731 * C92732;
    const double C92754 = C92744 * kcd;
    const double C87671 = (2. * C92754 * bs[1]) / C92745;
    const double C88407 = (2. * C92754 * bs[2]) / C92745;
    const double C88780 = (2. * C92754 * bs[3]) / C92745;
    const double C88939 = (2. * C92754 * bs[4]) / C92745;
    const double C89037 = (2. * C92754 * bs[5]) / C92745;
    const double C92228 = (2. * C92754 * bs[0]) / C92745;
    const double C92722 = C87671 * q;
    const double C92729 = C88407 * q;
    const double C87655 = -((C87671 * C92720) / p + (C88407 * C92737) / C92215);
    const double C87807 = -((C87671 * C92724) / p + (C88407 * C92740) / C92215);
    const double C87910 = -((C87671 * C92727) / p + (C88407 * C92742) / C92215);
    const double C92735 = C88780 * q;
    const double C88392 = -((C88407 * C92720) / p + (C88780 * C92737) / C92215);
    const double C89903 = -((C88407 * C92724) / p + (C88780 * C92740) / C92215);
    const double C90107 = -((C88407 * C92727) / p + (C88780 * C92742) / C92215);
    const double C92736 = C88939 * q;
    const double C88764 = -((C88780 * C92720) / p + (C88939 * C92737) / C92215);
    const double C90276 = -((C88780 * C92724) / p + (C88939 * C92740) / C92215);
    const double C91768 = -((C88780 * C92727) / p + (C88939 * C92742) / C92215);
    const double C88961 = -((C88939 * C92720) / p + (C89037 * C92737) / C92215);
    const double C90433 = -((C88939 * C92724) / p + (C89037 * C92740) / C92215);
    const double C91898 = -((C88939 * C92727) / p + (C89037 * C92742) / C92215);
    const double C92221 = -((C92228 * C92720) / p + (C87671 * C92737) / C92215);
    const double C92283 = -((C92228 * C92724) / p + (C87671 * C92740) / C92215);
    const double C92338 = -((C92228 * C92727) / p + (C87671 * C92742) / C92215);
    const double C92738 = C92722 / C92215;
    const double C92743 = C92729 / C92215;
    const double C92748 = C92735 / C92215;
    const double C87968 = -((C87910 * C92724) / p + (C90107 * C92740) / C92215);
    const double C92749 = C92736 / C92215;
    const double C84481 = -((C92283 * C92720) / p + (C87807 * C92737) / C92215);
    const double C84567 = -((C92338 * C92720) / p + (C87910 * C92737) / C92215);
    const double C84610 = -((C92338 * C92724) / p + (C87910 * C92740) / C92215);
    const double C92750 = C92228 - C92738;
    const double C92753 = C87671 - C92743;
    const double C92757 = C88407 - C92748;
    const double C92758 = C88780 - C92749;
    const double C84524 = -((C84610 * C92720) / p + (C87968 * C92737) / C92215);
    const double C92759 = C92750 / C92719;
    const double C92761 = C92753 / C92719;
    const double C92763 = C92757 / C92719;
    const double C92764 = C92758 / C92719;
    const double C83299 =
        C92759 - ((C92221 * C92720) / p + (C87655 * C92737) / C92215);
    const double C83737 =
        C92759 - ((C92283 * C92724) / p + (C87807 * C92740) / C92215);
    const double C84142 =
        C92759 - ((C92338 * C92727) / p + (C87910 * C92742) / C92215);
    const double C87625 =
        C92761 - ((C87655 * C92720) / p + (C88392 * C92737) / C92215);
    const double C87779 =
        C92761 - ((C87807 * C92724) / p + (C89903 * C92740) / C92215);
    const double C87882 =
        C92761 - ((C87910 * C92727) / p + (C90107 * C92742) / C92215);
    const double C88376 =
        C92763 - ((C88392 * C92720) / p + (C88764 * C92737) / C92215);
    const double C88450 =
        C92763 - ((C89903 * C92724) / p + (C90276 * C92740) / C92215);
    const double C88561 =
        C92763 - ((C90107 * C92727) / p + (C91768 * C92742) / C92215);
    const double C88801 =
        C92764 - ((C88764 * C92720) / p + (C88961 * C92737) / C92215);
    const double C88857 =
        C92764 - ((C90276 * C92724) / p + (C90433 * C92740) / C92215);
    const double C88898 =
        C92764 - ((C91768 * C92727) / p + (C91898 * C92742) / C92215);
    const double C83283 = (C92221 - (C87655 * q) / C92215) / p -
                          ((C83299 * C92720) / p + (C87625 * C92737) / C92215);
    const double C83423 = -((C83299 * C92724) / p + (C87625 * C92740) / C92215);
    const double C83516 = -((C83299 * C92727) / p + (C87625 * C92742) / C92215);
    const double C92723 = C87779 * q;
    const double C83721 = -((C83737 * C92720) / p + (C87779 * C92737) / C92215);
    const double C83830 = (C92283 - (C87807 * q) / C92215) / p -
                          ((C83737 * C92724) / p + (C87779 * C92740) / C92215);
    const double C83921 = -((C83737 * C92727) / p + (C87779 * C92742) / C92215);
    const double C92726 = C87882 * q;
    const double C84126 = -((C84142 * C92720) / p + (C87882 * C92737) / C92215);
    const double C84217 = -((C84142 * C92724) / p + (C87882 * C92740) / C92215);
    const double C84278 = (C92338 - (C87910 * q) / C92215) / p -
                          ((C84142 * C92727) / p + (C87882 * C92742) / C92215);
    const double C87606 = (C87655 - (C88392 * q) / C92215) / p -
                          ((C87625 * C92720) / p + (C88376 * C92737) / C92215);
    const double C89320 = -((C87625 * C92727) / p + (C88376 * C92742) / C92215);
    const double C92733 = C88450 * q;
    const double C87763 = -((C87779 * C92720) / p + (C88450 * C92737) / C92215);
    const double C87996 = (C87807 - (C89903 * q) / C92215) / p -
                          ((C87779 * C92724) / p + (C88450 * C92740) / C92215);
    const double C88036 = -((C87779 * C92727) / p + (C88450 * C92742) / C92215);
    const double C92734 = C88561 * q;
    const double C87866 = -((C87882 * C92720) / p + (C88561 * C92737) / C92215);
    const double C88241 = -((C87882 * C92724) / p + (C88561 * C92740) / C92215);
    const double C88255 = (C87910 - (C90107 * q) / C92215) / p -
                          ((C87882 * C92727) / p + (C88561 * C92742) / C92215);
    const double C88421 = (C88392 - (C88764 * q) / C92215) / p -
                          ((C88376 * C92720) / p + (C88801 * C92737) / C92215);
    const double C88505 = (C89903 - (C90276 * q) / C92215) / p -
                          ((C88450 * C92724) / p + (C88857 * C92740) / C92215);
    const double C88533 = -((C88450 * C92720) / p + (C88857 * C92737) / C92215);
    const double C88616 = -((C88561 * C92720) / p + (C88898 * C92737) / C92215);
    const double C88631 = (C90107 - (C91768 * q) / C92215) / p -
                          ((C88561 * C92727) / p + (C88898 * C92742) / C92215);
    const double C90160 = -((C88561 * C92724) / p + (C88898 * C92740) / C92215);
    const double C92739 = C92723 / C92215;
    const double C92741 = C92726 / C92215;
    const double C83265 = (3 * (C83299 - (C87625 * q) / C92215)) / C92719 -
                          ((C83283 * C92720) / p + (C87606 * C92737) / C92215);
    const double C83590 = -((C83283 * C92724) / p + (C87606 * C92740) / C92215);
    const double C83634 = -((C83283 * C92727) / p + (C87606 * C92742) / C92215);
    const double C83677 = -((C83516 * C92724) / p + (C89320 * C92740) / C92215);
    const double C92746 = C92733 / C92215;
    const double C83996 = -((C83830 * C92720) / p + (C87996 * C92737) / C92215);
    const double C84083 = -((C83830 * C92727) / p + (C87996 * C92742) / C92215);
    const double C84040 = -((C83921 * C92720) / p + (C88036 * C92737) / C92215);
    const double C92747 = C92734 / C92215;
    const double C84351 = -((C84217 * C92720) / p + (C88241 * C92737) / C92215);
    const double C84395 = -((C84278 * C92720) / p + (C88255 * C92737) / C92215);
    const double C84438 = -((C84278 * C92724) / p + (C88255 * C92740) / C92215);
    const double C87640 = (3 * (C87625 - (C88376 * q) / C92215)) / C92719 -
                          ((C87606 * C92720) / p + (C88421 * C92737) / C92215);
    const double C89262 = -((C87606 * C92724) / p + (C88421 * C92740) / C92215);
    const double C89421 = -((C87606 * C92727) / p + (C88421 * C92742) / C92215);
    const double C87822 = -((C87996 * C92720) / p + (C88505 * C92737) / C92215);
    const double C88214 = -((C87996 * C92727) / p + (C88505 * C92742) / C92215);
    const double C87939 = -((C88255 * C92720) / p + (C88631 * C92737) / C92215);
    const double C88362 = -((C88255 * C92724) / p + (C88631 * C92740) / C92215);
    const double C92751 = C83737 - C92739;
    const double C92752 = C84142 - C92741;
    const double C92755 = C87779 - C92746;
    const double C92756 = C87882 - C92747;
    const double C83405 =
        C92751 / C92719 - ((C83721 * C92720) / p + (C87763 * C92737) / C92215);
    const double C83813 = (3 * C92751) / C92719 -
                          ((C83830 * C92724) / p + (C87996 * C92740) / C92215);
    const double C92760 = C92752 / C92719;
    const double C84261 = (3 * C92752) / C92719 -
                          ((C84278 * C92727) / p + (C88255 * C92742) / C92215);
    const double C88077 = (3 * C92755) / C92719 -
                          ((C87996 * C92724) / p + (C88505 * C92740) / C92215);
    const double C90749 =
        C92755 / C92719 - ((C87763 * C92720) / p + (C88533 * C92737) / C92215);
    const double C92762 = C92756 / C92719;
    const double C88321 = (3 * C92756) / C92719 -
                          ((C88255 * C92727) / p + (C88631 * C92742) / C92215);
    const double C83498 =
        C92760 - ((C84126 * C92720) / p + (C87866 * C92737) / C92215);
    const double C83904 =
        C92760 - ((C84217 * C92724) / p + (C88241 * C92740) / C92215);
    const double C88145 =
        C92762 - ((C88241 * C92724) / p + (C90160 * C92740) / C92215);
    const double C89391 =
        C92762 - ((C87866 * C92720) / p + (C88616 * C92737) / C92215);
    g[0] = C83265;
    g[1] = C83283;
    g[2] = C83299;
    g[3] = C83405;
    g[4] = C83423;
    g[5] = C83498;
    g[6] = C83516;
    g[7] = C83590;
    g[8] = C83634;
    g[9] = C83677;
    g[10] = C83721;
    g[11] = C83737;
    g[12] = C83813;
    g[13] = C83830;
    g[14] = C83904;
    g[15] = C83921;
    g[16] = C83996;
    g[17] = C84040;
    g[18] = C84083;
    g[19] = C84126;
    g[20] = C84142;
    g[21] = C84217;
    g[22] = C84261;
    g[23] = C84278;
    g[24] = C84351;
    g[25] = C84395;
    g[26] = C84438;
    g[27] = C84481;
    g[28] = C84524;
    g[29] = C84567;
    g[30] = C84610;
    g[31] = C87606;
    g[32] = C87625;
    g[33] = C87640;
    g[34] = C87655;
    g[35] = C87671;
    g[36] = C87763;
    g[37] = C87779;
    g[38] = C87807;
    g[39] = C87822;
    g[40] = C87866;
    g[41] = C87882;
    g[42] = C87910;
    g[43] = C87939;
    g[44] = C87968;
    g[45] = C87996;
    g[46] = C88036;
    g[47] = C88077;
    g[48] = C88145;
    g[49] = C88214;
    g[50] = C88241;
    g[51] = C88255;
    g[52] = C88321;
    g[53] = C88362;
    g[54] = C88376;
    g[55] = C88392;
    g[56] = C88407;
    g[57] = C88421;
    g[58] = C88450;
    g[59] = C88505;
    g[60] = C88533;
    g[61] = C88561;
    g[62] = C88616;
    g[63] = C88631;
    g[64] = C88764;
    g[65] = C88780;
    g[66] = C88801;
    g[67] = C88857;
    g[68] = C88898;
    g[69] = C88939;
    g[70] = C88961;
    g[71] = C89037;
    g[72] = C89262;
    g[73] = C89320;
    g[74] = C89391;
    g[75] = C89421;
    g[76] = C89903;
    g[77] = C90107;
    g[78] = C90160;
    g[79] = C90276;
    g[80] = C90433;
    g[81] = C90749;
    g[82] = C91768;
    g[83] = C91898;
}
