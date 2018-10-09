/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2200_1_ints(const double ae,
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
    const double C5411 = p + q;
    const double C5686 = p * q;
    const double C5685 = std::pow(Pi, 2.5);
    const double C5682 = zP - zQ;
    const double C5681 = be * zAB;
    const double C5680 = yP - yQ;
    const double C5679 = be * yAB;
    const double C5678 = 2 * p;
    const double C5676 = xP - xQ;
    const double C5675 = be * xAB;
    const double C5687 = std::sqrt(C5411);
    const double C5694 = C5685 * kab;
    const double C5691 = C5682 * q;
    const double C5690 = C5680 * q;
    const double C5688 = C5676 * q;
    const double C5695 = C5686 * C5687;
    const double C5699 = C5694 * kcd;
    const double C2980 = (2. * C5699 * bs[0]) / C5695;
    const double C2981 = (2. * C5699 * bs[1]) / C5695;
    const double C2996 = (2. * C5699 * bs[2]) / C5695;
    const double C3244 = (2. * C5699 * bs[3]) / C5695;
    const double C3324 = (2. * C5699 * bs[4]) / C5695;
    const double C5677 = C2981 * q;
    const double C2510 = -((C2980 * C5675) / p + (C2981 * C5688) / C5411);
    const double C2885 = -((C2980 * C5679) / p + (C2981 * C5690) / C5411);
    const double C2917 = -((C2980 * C5681) / p + (C2981 * C5691) / C5411);
    const double C5683 = C2996 * q;
    const double C2511 = -((C2981 * C5675) / p + (C2996 * C5688) / C5411);
    const double C2886 = -((C2981 * C5679) / p + (C2996 * C5690) / C5411);
    const double C2918 = -((C2981 * C5681) / p + (C2996 * C5691) / C5411);
    const double C5684 = C3244 * q;
    const double C2964 = -((C2996 * C5675) / p + (C3244 * C5688) / C5411);
    const double C3910 = -((C2996 * C5679) / p + (C3244 * C5690) / C5411);
    const double C4097 = -((C2996 * C5681) / p + (C3244 * C5691) / C5411);
    const double C3227 = -((C3244 * C5675) / p + (C3324 * C5688) / C5411);
    const double C4163 = -((C3244 * C5679) / p + (C3324 * C5690) / C5411);
    const double C5072 = -((C3244 * C5681) / p + (C3324 * C5691) / C5411);
    const double C5689 = C5677 / C5411;
    const double C5692 = C5683 / C5411;
    const double C906 = -((C2885 * C5675) / p + (C2886 * C5688) / C5411);
    const double C950 = -((C2917 * C5675) / p + (C2918 * C5688) / C5411);
    const double C1001 = -((C2917 * C5679) / p + (C2918 * C5690) / C5411);
    const double C5693 = C5684 / C5411;
    const double C2901 = -((C2918 * C5679) / p + (C4097 * C5690) / C5411);
    const double C5696 = C2980 - C5689;
    const double C5697 = C2981 - C5692;
    const double C5698 = C2996 - C5693;
    const double C992 = -((C1001 * C5675) / p + (C2901 * C5688) / C5411);
    const double C5700 = C5696 / C5678;
    const double C5701 = C5697 / C5678;
    const double C5702 = C5698 / C5678;
    const double C518 = C992 + zAB * C906;
    const double C565 = C992 + yAB * C950;
    const double C592 = C992 + xAB * C1001;
    const double C659 = C5700 - ((C2510 * C5675) / p + (C2511 * C5688) / C5411);
    const double C742 = C5700 - ((C2885 * C5679) / p + (C2886 * C5690) / C5411);
    const double C825 = C5700 - ((C2917 * C5681) / p + (C2918 * C5691) / C5411);
    const double C2493 =
        C5701 - ((C2511 * C5675) / p + (C2964 * C5688) / C5411);
    const double C2633 =
        C5701 - ((C2886 * C5679) / p + (C3910 * C5690) / C5411);
    const double C2767 =
        C5701 - ((C2918 * C5681) / p + (C4097 * C5691) / C5411);
    const double C2947 =
        C5702 - ((C2964 * C5675) / p + (C3227 * C5688) / C5411);
    const double C3025 =
        C5702 - ((C3910 * C5679) / p + (C4163 * C5690) / C5411);
    const double C3056 =
        C5702 - ((C4097 * C5681) / p + (C5072 * C5691) / C5411);
    const double C648 = (C2510 - (C2511 * q) / C5411) / p -
                        ((C659 * C5675) / p + (C2493 * C5688) / C5411);
    const double C897 = -((C659 * C5679) / p + (C2493 * C5690) / C5411);
    const double C941 = -((C659 * C5681) / p + (C2493 * C5691) / C5411);
    const double C732 = -((C742 * C5675) / p + (C2633 * C5688) / C5411);
    const double C1466 = (C2885 - (C2886 * q) / C5411) / p -
                         ((C742 * C5679) / p + (C2633 * C5690) / C5411);
    const double C1719 = -((C742 * C5681) / p + (C2633 * C5691) / C5411);
    const double C815 = -((C825 * C5675) / p + (C2767 * C5688) / C5411);
    const double C1548 = -((C825 * C5679) / p + (C2767 * C5690) / C5411);
    const double C2273 = (C2917 - (C2918 * q) / C5411) / p -
                         ((C825 * C5681) / p + (C2767 * C5691) / C5411);
    const double C2473 = (C2511 - (C2964 * q) / C5411) / p -
                         ((C2493 * C5675) / p + (C2947 * C5688) / C5411);
    const double C3518 = -((C2493 * C5681) / p + (C2947 * C5691) / C5411);
    const double C2528 = -((C2633 * C5675) / p + (C3025 * C5688) / C5411);
    const double C2722 = (C2886 - (C3910 * q) / C5411) / p -
                         ((C2633 * C5679) / p + (C3025 * C5690) / C5411);
    const double C2737 = -((C2633 * C5681) / p + (C3025 * C5691) / C5411);
    const double C2559 = -((C2767 * C5675) / p + (C3056 * C5688) / C5411);
    const double C2841 = -((C2767 * C5679) / p + (C3056 * C5690) / C5411);
    const double C2856 = (C2918 - (C4097 * q) / C5411) / p -
                         ((C2767 * C5681) / p + (C3056 * C5691) / C5411);
    const double C299 = C648 + xAB * C659;
    const double C330 = C897 + yAB * C659;
    const double C479 = C897 + xAB * C906;
    const double C340 = C941 + zAB * C659;
    const double C535 = C941 + xAB * C950;
    const double C359 = C732 + xAB * C742;
    const double C509 = C732 + yAB * C906;
    const double C390 = C1466 + yAB * C742;
    const double C400 = C1719 + zAB * C742;
    const double C622 = C1719 + yAB * C1001;
    const double C419 = C815 + xAB * C825;
    const double C575 = C815 + zAB * C950;
    const double C450 = C1548 + yAB * C825;
    const double C631 = C1548 + zAB * C1001;
    const double C460 = C2273 + zAB * C825;
    g[0] = C299;
    g[1] = C330;
    g[2] = C340;
    g[3] = C359;
    g[4] = C390;
    g[5] = C400;
    g[6] = C419;
    g[7] = C450;
    g[8] = C460;
    g[9] = C479;
    g[10] = C509;
    g[11] = C518;
    g[12] = C535;
    g[13] = C565;
    g[14] = C575;
    g[15] = C592;
    g[16] = C622;
    g[17] = C631;
    g[18] = C648;
    g[19] = C659;
    g[20] = C732;
    g[21] = C742;
    g[22] = C815;
    g[23] = C825;
    g[24] = C897;
    g[25] = C906;
    g[26] = C941;
    g[27] = C950;
    g[28] = C992;
    g[29] = C1001;
    g[30] = C1466;
    g[31] = C1548;
    g[32] = C1719;
    g[33] = C2273;
    g[34] = C2473;
    g[35] = C2493;
    g[36] = C2510;
    g[37] = C2511;
    g[38] = C2528;
    g[39] = C2559;
    g[40] = C2633;
    g[41] = C2722;
    g[42] = C2737;
    g[43] = C2767;
    g[44] = C2841;
    g[45] = C2856;
    g[46] = C2885;
    g[47] = C2886;
    g[48] = C2901;
    g[49] = C2917;
    g[50] = C2918;
    g[51] = C2947;
    g[52] = C2964;
    g[53] = C2980;
    g[54] = C2981;
    g[55] = C2996;
    g[56] = C3025;
    g[57] = C3056;
    g[58] = C3227;
    g[59] = C3244;
    g[60] = C3324;
    g[61] = C3518;
    g[62] = C3910;
    g[63] = C4097;
    g[64] = C4163;
    g[65] = C5072;
}
