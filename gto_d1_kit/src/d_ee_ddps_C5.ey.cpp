/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2210_3_ints(const double ae,
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
    const double C92143 = p + q;
    const double C92659 = p * q;
    const double C92658 = std::pow(Pi, 2.5);
    const double C92656 = zP - zQ;
    const double C92655 = be * zAB;
    const double C92653 = yP - yQ;
    const double C92652 = be * yAB;
    const double C92649 = xP - xQ;
    const double C92648 = be * xAB;
    const double C92647 = 2 * p;
    const double C92660 = std::sqrt(C92143);
    const double C92672 = C92658 * kab;
    const double C92670 = C92656 * q;
    const double C92668 = C92653 * q;
    const double C92665 = C92649 * q;
    const double C92673 = C92659 * C92660;
    const double C92682 = C92672 * kcd;
    const double C87599 = (2. * C92682 * bs[1]) / C92673;
    const double C88320 = (2. * C92682 * bs[2]) / C92673;
    const double C88692 = (2. * C92682 * bs[3]) / C92673;
    const double C88874 = (2. * C92682 * bs[4]) / C92673;
    const double C88965 = (2. * C92682 * bs[5]) / C92673;
    const double C92156 = (2. * C92682 * bs[0]) / C92673;
    const double C92650 = C87599 * q;
    const double C92657 = C88320 * q;
    const double C87583 = -((C87599 * C92648) / p + (C88320 * C92665) / C92143);
    const double C87735 = -((C87599 * C92652) / p + (C88320 * C92668) / C92143);
    const double C87838 = -((C87599 * C92655) / p + (C88320 * C92670) / C92143);
    const double C92663 = C88692 * q;
    const double C88304 = -((C88320 * C92648) / p + (C88692 * C92665) / C92143);
    const double C89831 = -((C88320 * C92652) / p + (C88692 * C92668) / C92143);
    const double C90035 = -((C88320 * C92655) / p + (C88692 * C92670) / C92143);
    const double C92664 = C88874 * q;
    const double C88714 = -((C88692 * C92648) / p + (C88874 * C92665) / C92143);
    const double C90204 = -((C88692 * C92652) / p + (C88874 * C92668) / C92143);
    const double C91696 = -((C88692 * C92655) / p + (C88874 * C92670) / C92143);
    const double C88889 = -((C88874 * C92648) / p + (C88965 * C92665) / C92143);
    const double C90361 = -((C88874 * C92652) / p + (C88965 * C92668) / C92143);
    const double C91826 = -((C88874 * C92655) / p + (C88965 * C92670) / C92143);
    const double C92149 = -((C92156 * C92648) / p + (C87599 * C92665) / C92143);
    const double C92211 = -((C92156 * C92652) / p + (C87599 * C92668) / C92143);
    const double C92266 = -((C92156 * C92655) / p + (C87599 * C92670) / C92143);
    const double C92666 = C92650 / C92143;
    const double C92671 = C92657 / C92143;
    const double C92676 = C92663 / C92143;
    const double C87896 = -((C87838 * C92652) / p + (C90035 * C92668) / C92143);
    const double C92677 = C92664 / C92143;
    const double C84439 = -((C92211 * C92648) / p + (C87735 * C92665) / C92143);
    const double C84525 = -((C92266 * C92648) / p + (C87838 * C92665) / C92143);
    const double C84568 = -((C92266 * C92652) / p + (C87838 * C92668) / C92143);
    const double C92678 = C92156 - C92666;
    const double C92681 = C87599 - C92671;
    const double C92685 = C88320 - C92676;
    const double C92686 = C88692 - C92677;
    const double C84482 = -((C84568 * C92648) / p + (C87896 * C92665) / C92143);
    const double C92687 = C92678 / C92647;
    const double C92689 = C92681 / C92647;
    const double C92691 = C92685 / C92647;
    const double C92692 = C92686 / C92647;
    const double C83257 =
        C92687 - ((C92149 * C92648) / p + (C87583 * C92665) / C92143);
    const double C83695 =
        C92687 - ((C92211 * C92652) / p + (C87735 * C92668) / C92143);
    const double C84100 =
        C92687 - ((C92266 * C92655) / p + (C87838 * C92670) / C92143);
    const double C87534 =
        C92689 - ((C87583 * C92648) / p + (C88304 * C92665) / C92143);
    const double C87691 =
        C92689 - ((C87735 * C92652) / p + (C89831 * C92668) / C92143);
    const double C87794 =
        C92689 - ((C87838 * C92655) / p + (C90035 * C92670) / C92143);
    const double C88334 =
        C92691 - ((C88304 * C92648) / p + (C88714 * C92665) / C92143);
    const double C88392 =
        C92691 - ((C89831 * C92652) / p + (C90204 * C92668) / C92143);
    const double C88503 =
        C92691 - ((C90035 * C92655) / p + (C91696 * C92670) / C92143);
    const double C88729 =
        C92692 - ((C88714 * C92648) / p + (C88889 * C92665) / C92143);
    const double C88785 =
        C92692 - ((C90204 * C92652) / p + (C90361 * C92668) / C92143);
    const double C88826 =
        C92692 - ((C91696 * C92655) / p + (C91826 * C92670) / C92143);
    const double C83241 = (C92149 - (C87583 * q) / C92143) / p -
                          ((C83257 * C92648) / p + (C87534 * C92665) / C92143);
    const double C83381 = -((C83257 * C92652) / p + (C87534 * C92668) / C92143);
    const double C83474 = -((C83257 * C92655) / p + (C87534 * C92670) / C92143);
    const double C92651 = C87691 * q;
    const double C83679 = -((C83695 * C92648) / p + (C87691 * C92665) / C92143);
    const double C83788 = (C92211 - (C87735 * q) / C92143) / p -
                          ((C83695 * C92652) / p + (C87691 * C92668) / C92143);
    const double C83879 = -((C83695 * C92655) / p + (C87691 * C92670) / C92143);
    const double C92654 = C87794 * q;
    const double C84084 = -((C84100 * C92648) / p + (C87794 * C92665) / C92143);
    const double C84175 = -((C84100 * C92652) / p + (C87794 * C92668) / C92143);
    const double C84236 = (C92266 - (C87838 * q) / C92143) / p -
                          ((C84100 * C92655) / p + (C87794 * C92670) / C92143);
    const double C87553 = (C87583 - (C88304 * q) / C92143) / p -
                          ((C87534 * C92648) / p + (C88334 * C92665) / C92143);
    const double C89248 = -((C87534 * C92655) / p + (C88334 * C92670) / C92143);
    const double C92661 = C88392 * q;
    const double C87706 = -((C87691 * C92648) / p + (C88392 * C92665) / C92143);
    const double C87924 = (C87735 - (C89831 * q) / C92143) / p -
                          ((C87691 * C92652) / p + (C88392 * C92668) / C92143);
    const double C87964 = -((C87691 * C92655) / p + (C88392 * C92670) / C92143);
    const double C92662 = C88503 * q;
    const double C87809 = -((C87794 * C92648) / p + (C88503 * C92665) / C92143);
    const double C88169 = -((C87794 * C92652) / p + (C88503 * C92668) / C92143);
    const double C88183 = (C87838 - (C90035 * q) / C92143) / p -
                          ((C87794 * C92655) / p + (C88503 * C92670) / C92143);
    const double C88349 = (C88304 - (C88714 * q) / C92143) / p -
                          ((C88334 * C92648) / p + (C88729 * C92665) / C92143);
    const double C88433 = (C89831 - (C90204 * q) / C92143) / p -
                          ((C88392 * C92652) / p + (C88785 * C92668) / C92143);
    const double C88461 = -((C88392 * C92648) / p + (C88785 * C92665) / C92143);
    const double C88544 = -((C88503 * C92648) / p + (C88826 * C92665) / C92143);
    const double C88559 = (C90035 - (C91696 * q) / C92143) / p -
                          ((C88503 * C92655) / p + (C88826 * C92670) / C92143);
    const double C90088 = -((C88503 * C92652) / p + (C88826 * C92668) / C92143);
    const double C92667 = C92651 / C92143;
    const double C92669 = C92654 / C92143;
    const double C83223 = (3 * (C83257 - (C87534 * q) / C92143)) / C92647 -
                          ((C83241 * C92648) / p + (C87553 * C92665) / C92143);
    const double C83548 = -((C83241 * C92652) / p + (C87553 * C92668) / C92143);
    const double C83592 = -((C83241 * C92655) / p + (C87553 * C92670) / C92143);
    const double C83635 = -((C83474 * C92652) / p + (C89248 * C92668) / C92143);
    const double C92674 = C92661 / C92143;
    const double C83954 = -((C83788 * C92648) / p + (C87924 * C92665) / C92143);
    const double C84041 = -((C83788 * C92655) / p + (C87924 * C92670) / C92143);
    const double C83998 = -((C83879 * C92648) / p + (C87964 * C92665) / C92143);
    const double C92675 = C92662 / C92143;
    const double C84309 = -((C84175 * C92648) / p + (C88169 * C92665) / C92143);
    const double C84353 = -((C84236 * C92648) / p + (C88183 * C92665) / C92143);
    const double C84396 = -((C84236 * C92652) / p + (C88183 * C92668) / C92143);
    const double C87568 = (3 * (C87534 - (C88334 * q) / C92143)) / C92647 -
                          ((C87553 * C92648) / p + (C88349 * C92665) / C92143);
    const double C89190 = -((C87553 * C92652) / p + (C88349 * C92668) / C92143);
    const double C89349 = -((C87553 * C92655) / p + (C88349 * C92670) / C92143);
    const double C87750 = -((C87924 * C92648) / p + (C88433 * C92665) / C92143);
    const double C88142 = -((C87924 * C92655) / p + (C88433 * C92670) / C92143);
    const double C87867 = -((C88183 * C92648) / p + (C88559 * C92665) / C92143);
    const double C88290 = -((C88183 * C92652) / p + (C88559 * C92668) / C92143);
    const double C92679 = C83695 - C92667;
    const double C92680 = C84100 - C92669;
    const double C92683 = C87691 - C92674;
    const double C92684 = C87794 - C92675;
    const double C83363 =
        C92679 / C92647 - ((C83679 * C92648) / p + (C87706 * C92665) / C92143);
    const double C83771 = (3 * C92679) / C92647 -
                          ((C83788 * C92652) / p + (C87924 * C92668) / C92143);
    const double C92688 = C92680 / C92647;
    const double C84219 = (3 * C92680) / C92647 -
                          ((C84236 * C92655) / p + (C88183 * C92670) / C92143);
    const double C88005 = (3 * C92683) / C92647 -
                          ((C87924 * C92652) / p + (C88433 * C92668) / C92143);
    const double C90677 =
        C92683 / C92647 - ((C87706 * C92648) / p + (C88461 * C92665) / C92143);
    const double C92690 = C92684 / C92647;
    const double C88249 = (3 * C92684) / C92647 -
                          ((C88183 * C92655) / p + (C88559 * C92670) / C92143);
    const double C83456 =
        C92688 - ((C84084 * C92648) / p + (C87809 * C92665) / C92143);
    const double C83862 =
        C92688 - ((C84175 * C92652) / p + (C88169 * C92668) / C92143);
    const double C88073 =
        C92690 - ((C88169 * C92652) / p + (C90088 * C92668) / C92143);
    const double C89319 =
        C92690 - ((C87809 * C92648) / p + (C88544 * C92665) / C92143);
    g[0] = C83223;
    g[1] = C83241;
    g[2] = C83257;
    g[3] = C83363;
    g[4] = C83381;
    g[5] = C83456;
    g[6] = C83474;
    g[7] = C83548;
    g[8] = C83592;
    g[9] = C83635;
    g[10] = C83679;
    g[11] = C83695;
    g[12] = C83771;
    g[13] = C83788;
    g[14] = C83862;
    g[15] = C83879;
    g[16] = C83954;
    g[17] = C83998;
    g[18] = C84041;
    g[19] = C84084;
    g[20] = C84100;
    g[21] = C84175;
    g[22] = C84219;
    g[23] = C84236;
    g[24] = C84309;
    g[25] = C84353;
    g[26] = C84396;
    g[27] = C84439;
    g[28] = C84482;
    g[29] = C84525;
    g[30] = C84568;
    g[31] = C87534;
    g[32] = C87553;
    g[33] = C87568;
    g[34] = C87583;
    g[35] = C87599;
    g[36] = C87691;
    g[37] = C87706;
    g[38] = C87735;
    g[39] = C87750;
    g[40] = C87794;
    g[41] = C87809;
    g[42] = C87838;
    g[43] = C87867;
    g[44] = C87896;
    g[45] = C87924;
    g[46] = C87964;
    g[47] = C88005;
    g[48] = C88073;
    g[49] = C88142;
    g[50] = C88169;
    g[51] = C88183;
    g[52] = C88249;
    g[53] = C88290;
    g[54] = C88304;
    g[55] = C88320;
    g[56] = C88334;
    g[57] = C88349;
    g[58] = C88392;
    g[59] = C88433;
    g[60] = C88461;
    g[61] = C88503;
    g[62] = C88544;
    g[63] = C88559;
    g[64] = C88692;
    g[65] = C88714;
    g[66] = C88729;
    g[67] = C88785;
    g[68] = C88826;
    g[69] = C88874;
    g[70] = C88889;
    g[71] = C88965;
    g[72] = C89190;
    g[73] = C89248;
    g[74] = C89319;
    g[75] = C89349;
    g[76] = C89831;
    g[77] = C90035;
    g[78] = C90088;
    g[79] = C90204;
    g[80] = C90361;
    g[81] = C90677;
    g[82] = C91696;
    g[83] = C91826;
}
