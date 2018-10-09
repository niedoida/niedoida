/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2020_1(const double ae,
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
                         double* const gx,
                         double* const gy,
                         double* const gz)
{
    double g[66];
    eri_gradient_2020_1_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[35];
    double vry[35];
    double vrz[35];
    eri_gradient_2020_1_vr(ae,
                           xA,
                           yA,
                           zA,
                           be,
                           xB,
                           yB,
                           zB,
                           ce,
                           xC,
                           yC,
                           zC,
                           de,
                           xD,
                           yD,
                           zD,
                           bs,
                           g,
                           vrx,
                           vry,
                           vrz);
    double etx[36];
    double ety[36];
    double etz[36];
    eri_gradient_2020_1_et(ae,
                           xA,
                           yA,
                           zA,
                           be,
                           xB,
                           yB,
                           zB,
                           ce,
                           xC,
                           yC,
                           zC,
                           de,
                           xD,
                           yD,
                           zD,
                           bs,
                           g,
                           vrx,
                           vry,
                           vrz,
                           etx,
                           ety,
                           etz);
    double hrx[36];
    double hry[36];
    double hrz[36];
    eri_gradient_2020_1_hr(ae,
                           xA,
                           yA,
                           zA,
                           be,
                           xB,
                           yB,
                           zB,
                           ce,
                           xC,
                           yC,
                           zC,
                           de,
                           xD,
                           yD,
                           zD,
                           bs,
                           g,
                           etx,
                           ety,
                           etz,
                           hrx,
                           hry,
                           hrz);
    const double C5791 = hrx[0];
    const double C6160 = hrx[1];
    const double C6530 = hrx[2];
    const double C6900 = hrx[3];
    const double C7270 = hrx[4];
    const double C7640 = hrx[5];
    const double C8010 = hrx[6];
    const double C8380 = hrx[7];
    const double C8750 = hrx[8];
    const double C9120 = hrx[9];
    const double C9490 = hrx[10];
    const double C9860 = hrx[11];
    const double C10230 = hrx[12];
    const double C10600 = hrx[13];
    const double C10970 = hrx[14];
    const double C11340 = hrx[15];
    const double C11710 = hrx[16];
    const double C12080 = hrx[17];
    const double C12450 = hrx[18];
    const double C12820 = hrx[19];
    const double C13190 = hrx[20];
    const double C13560 = hrx[21];
    const double C13930 = hrx[22];
    const double C14300 = hrx[23];
    const double C14670 = hrx[24];
    const double C15040 = hrx[25];
    const double C15410 = hrx[26];
    const double C15780 = hrx[27];
    const double C16150 = hrx[28];
    const double C16520 = hrx[29];
    const double C16890 = hrx[30];
    const double C17260 = hrx[31];
    const double C17630 = hrx[32];
    const double C18000 = hrx[33];
    const double C18370 = hrx[34];
    const double C18740 = hrx[35];
    const double C5913 = hry[0];
    const double C6283 = hry[1];
    const double C6653 = hry[2];
    const double C7023 = hry[3];
    const double C7393 = hry[4];
    const double C7763 = hry[5];
    const double C8133 = hry[6];
    const double C8503 = hry[7];
    const double C8873 = hry[8];
    const double C9243 = hry[9];
    const double C9613 = hry[10];
    const double C9983 = hry[11];
    const double C10353 = hry[12];
    const double C10723 = hry[13];
    const double C11093 = hry[14];
    const double C11463 = hry[15];
    const double C11833 = hry[16];
    const double C12203 = hry[17];
    const double C12573 = hry[18];
    const double C12943 = hry[19];
    const double C13313 = hry[20];
    const double C13683 = hry[21];
    const double C14053 = hry[22];
    const double C14423 = hry[23];
    const double C14793 = hry[24];
    const double C15163 = hry[25];
    const double C15533 = hry[26];
    const double C15903 = hry[27];
    const double C16273 = hry[28];
    const double C16643 = hry[29];
    const double C17013 = hry[30];
    const double C17383 = hry[31];
    const double C17753 = hry[32];
    const double C18123 = hry[33];
    const double C18493 = hry[34];
    const double C18863 = hry[35];
    const double C6036 = hrz[0];
    const double C6406 = hrz[1];
    const double C6776 = hrz[2];
    const double C7146 = hrz[3];
    const double C7516 = hrz[4];
    const double C7886 = hrz[5];
    const double C8256 = hrz[6];
    const double C8626 = hrz[7];
    const double C8996 = hrz[8];
    const double C9366 = hrz[9];
    const double C9736 = hrz[10];
    const double C10106 = hrz[11];
    const double C10476 = hrz[12];
    const double C10846 = hrz[13];
    const double C11216 = hrz[14];
    const double C11586 = hrz[15];
    const double C11956 = hrz[16];
    const double C12326 = hrz[17];
    const double C12696 = hrz[18];
    const double C13066 = hrz[19];
    const double C13436 = hrz[20];
    const double C13806 = hrz[21];
    const double C14176 = hrz[22];
    const double C14546 = hrz[23];
    const double C14916 = hrz[24];
    const double C15286 = hrz[25];
    const double C15656 = hrz[26];
    const double C16026 = hrz[27];
    const double C16396 = hrz[28];
    const double C16766 = hrz[29];
    const double C17136 = hrz[30];
    const double C17506 = hrz[31];
    const double C17876 = hrz[32];
    const double C18246 = hrz[33];
    const double C18616 = hrz[34];
    const double C18986 = hrz[35];
    gx[0] += std::sqrt(9.) * C13560;
    gy[0] += std::sqrt(9.) * C13683;
    gz[0] += std::sqrt(9.) * C13806;
    gx[1] += std::sqrt(9.) * C14300;
    gy[1] += std::sqrt(9.) * C14423;
    gz[1] += std::sqrt(9.) * C14546;
    gx[2] += std::sqrt(3.0) * C13190 -
             (std::sqrt(0.75) * C12820 + std::sqrt(0.75) * C12450);
    gy[2] += std::sqrt(3.0) * C13313 -
             (std::sqrt(0.75) * C12943 + std::sqrt(0.75) * C12573);
    gz[2] += std::sqrt(3.0) * C13436 -
             (std::sqrt(0.75) * C13066 + std::sqrt(0.75) * C12696);
    gx[3] += std::sqrt(9.) * C13930;
    gy[3] += std::sqrt(9.) * C14053;
    gz[3] += std::sqrt(9.) * C14176;
    gx[4] += std::sqrt(2.25) * C12450 - std::sqrt(2.25) * C12820;
    gy[4] += std::sqrt(2.25) * C12573 - std::sqrt(2.25) * C12943;
    gz[4] += std::sqrt(2.25) * C12696 - std::sqrt(2.25) * C13066;
    gx[5] += std::sqrt(9.) * C18000;
    gy[5] += std::sqrt(9.) * C18123;
    gz[5] += std::sqrt(9.) * C18246;
    gx[6] += std::sqrt(9.) * C18740;
    gy[6] += std::sqrt(9.) * C18863;
    gz[6] += std::sqrt(9.) * C18986;
    gx[7] += std::sqrt(3.0) * C17630 -
             (std::sqrt(0.75) * C17260 + std::sqrt(0.75) * C16890);
    gy[7] += std::sqrt(3.0) * C17753 -
             (std::sqrt(0.75) * C17383 + std::sqrt(0.75) * C17013);
    gz[7] += std::sqrt(3.0) * C17876 -
             (std::sqrt(0.75) * C17506 + std::sqrt(0.75) * C17136);
    gx[8] += std::sqrt(9.) * C18370;
    gy[8] += std::sqrt(9.) * C18493;
    gz[8] += std::sqrt(9.) * C18616;
    gx[9] += std::sqrt(2.25) * C16890 - std::sqrt(2.25) * C17260;
    gy[9] += std::sqrt(2.25) * C17013 - std::sqrt(2.25) * C17383;
    gz[9] += std::sqrt(2.25) * C17136 - std::sqrt(2.25) * C17506;
    gx[10] += std::sqrt(3.0) * C11340 -
              (std::sqrt(0.75) * C9120 + std::sqrt(0.75) * C6900);
    gy[10] += std::sqrt(3.0) * C11463 -
              (std::sqrt(0.75) * C9243 + std::sqrt(0.75) * C7023);
    gz[10] += std::sqrt(3.0) * C11586 -
              (std::sqrt(0.75) * C9366 + std::sqrt(0.75) * C7146);
    gx[11] += std::sqrt(3.0) * C12080 -
              (std::sqrt(0.75) * C9860 + std::sqrt(0.75) * C7640);
    gy[11] += std::sqrt(3.0) * C12203 -
              (std::sqrt(0.75) * C9983 + std::sqrt(0.75) * C7763);
    gz[11] += std::sqrt(3.0) * C12326 -
              (std::sqrt(0.75) * C10106 + std::sqrt(0.75) * C7886);
    gx[12] += 0.25 * C5791 + 0.25 * C6160 - 0.5 * C6530 + 0.25 * C8010 +
              0.25 * C8380 - 0.5 * C8750 - 0.5 * C10230 - 0.5 * C10600 + C10970;
    gy[12] += 0.25 * C5913 + 0.25 * C6283 - 0.5 * C6653 + 0.25 * C8133 +
              0.25 * C8503 - 0.5 * C8873 - 0.5 * C10353 - 0.5 * C10723 + C11093;
    gz[12] += 0.25 * C6036 + 0.25 * C6406 - 0.5 * C6776 + 0.25 * C8256 +
              0.25 * C8626 - 0.5 * C8996 - 0.5 * C10476 - 0.5 * C10846 + C11216;
    gx[13] += std::sqrt(3.0) * C11710 -
              (std::sqrt(0.75) * C9490 + std::sqrt(0.75) * C7270);
    gy[13] += std::sqrt(3.0) * C11833 -
              (std::sqrt(0.75) * C9613 + std::sqrt(0.75) * C7393);
    gz[13] += std::sqrt(3.0) * C11956 -
              (std::sqrt(0.75) * C9736 + std::sqrt(0.75) * C7516);
    gx[14] += std::sqrt(0.1875) * C6160 - std::sqrt(0.1875) * C5791 -
              std::sqrt(0.1875) * C8010 + std::sqrt(0.1875) * C8380 +
              std::sqrt(0.75) * C10230 - std::sqrt(0.75) * C10600;
    gy[14] += std::sqrt(0.1875) * C6283 - std::sqrt(0.1875) * C5913 -
              std::sqrt(0.1875) * C8133 + std::sqrt(0.1875) * C8503 +
              std::sqrt(0.75) * C10353 - std::sqrt(0.75) * C10723;
    gz[14] += std::sqrt(0.1875) * C6406 - std::sqrt(0.1875) * C6036 -
              std::sqrt(0.1875) * C8256 + std::sqrt(0.1875) * C8626 +
              std::sqrt(0.75) * C10476 - std::sqrt(0.75) * C10846;
    gx[15] += std::sqrt(9.) * C15780;
    gy[15] += std::sqrt(9.) * C15903;
    gz[15] += std::sqrt(9.) * C16026;
    gx[16] += std::sqrt(9.) * C16520;
    gy[16] += std::sqrt(9.) * C16643;
    gz[16] += std::sqrt(9.) * C16766;
    gx[17] += std::sqrt(3.0) * C15410 -
              (std::sqrt(0.75) * C15040 + std::sqrt(0.75) * C14670);
    gy[17] += std::sqrt(3.0) * C15533 -
              (std::sqrt(0.75) * C15163 + std::sqrt(0.75) * C14793);
    gz[17] += std::sqrt(3.0) * C15656 -
              (std::sqrt(0.75) * C15286 + std::sqrt(0.75) * C14916);
    gx[18] += std::sqrt(9.) * C16150;
    gy[18] += std::sqrt(9.) * C16273;
    gz[18] += std::sqrt(9.) * C16396;
    gx[19] += std::sqrt(2.25) * C14670 - std::sqrt(2.25) * C15040;
    gy[19] += std::sqrt(2.25) * C14793 - std::sqrt(2.25) * C15163;
    gz[19] += std::sqrt(2.25) * C14916 - std::sqrt(2.25) * C15286;
    gx[20] += std::sqrt(2.25) * C6900 - std::sqrt(2.25) * C9120;
    gy[20] += std::sqrt(2.25) * C7023 - std::sqrt(2.25) * C9243;
    gz[20] += std::sqrt(2.25) * C7146 - std::sqrt(2.25) * C9366;
    gx[21] += std::sqrt(2.25) * C7640 - std::sqrt(2.25) * C9860;
    gy[21] += std::sqrt(2.25) * C7763 - std::sqrt(2.25) * C9983;
    gz[21] += std::sqrt(2.25) * C7886 - std::sqrt(2.25) * C10106;
    gx[22] += std::sqrt(0.75) * C6530 -
              (std::sqrt(0.1875) * C6160 + std::sqrt(0.1875) * C5791) +
              std::sqrt(0.1875) * C8010 + std::sqrt(0.1875) * C8380 -
              std::sqrt(0.75) * C8750;
    gy[22] += std::sqrt(0.75) * C6653 -
              (std::sqrt(0.1875) * C6283 + std::sqrt(0.1875) * C5913) +
              std::sqrt(0.1875) * C8133 + std::sqrt(0.1875) * C8503 -
              std::sqrt(0.75) * C8873;
    gz[22] += std::sqrt(0.75) * C6776 -
              (std::sqrt(0.1875) * C6406 + std::sqrt(0.1875) * C6036) +
              std::sqrt(0.1875) * C8256 + std::sqrt(0.1875) * C8626 -
              std::sqrt(0.75) * C8996;
    gx[23] += std::sqrt(2.25) * C7270 - std::sqrt(2.25) * C9490;
    gy[23] += std::sqrt(2.25) * C7393 - std::sqrt(2.25) * C9613;
    gz[23] += std::sqrt(2.25) * C7516 - std::sqrt(2.25) * C9736;
    gx[24] += std::sqrt(0.5625) * C5791 - std::sqrt(0.5625) * C6160 -
              std::sqrt(0.5625) * C8010 + std::sqrt(0.5625) * C8380;
    gy[24] += std::sqrt(0.5625) * C5913 - std::sqrt(0.5625) * C6283 -
              std::sqrt(0.5625) * C8133 + std::sqrt(0.5625) * C8503;
    gz[24] += std::sqrt(0.5625) * C6036 - std::sqrt(0.5625) * C6406 -
              std::sqrt(0.5625) * C8256 + std::sqrt(0.5625) * C8626;
}
