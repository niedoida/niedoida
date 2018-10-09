/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2020_1_hr(const double ae,
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
                            const double* const g,
                            const double* const etx,
                            const double* const ety,
                            const double* const etz,
                            double* const hrx,
                            double* const hry,
                            double* const hrz)
{
    const double C5791 = etx[0];
    const double C6160 = etx[1];
    const double C6530 = etx[2];
    const double C6900 = etx[3];
    const double C7270 = etx[4];
    const double C7640 = etx[5];
    const double C8010 = etx[6];
    const double C8380 = etx[7];
    const double C8750 = etx[8];
    const double C9120 = etx[9];
    const double C9490 = etx[10];
    const double C9860 = etx[11];
    const double C10230 = etx[12];
    const double C10600 = etx[13];
    const double C10970 = etx[14];
    const double C11340 = etx[15];
    const double C11710 = etx[16];
    const double C12080 = etx[17];
    const double C12450 = etx[18];
    const double C12820 = etx[19];
    const double C13190 = etx[20];
    const double C13560 = etx[21];
    const double C13930 = etx[22];
    const double C14300 = etx[23];
    const double C14670 = etx[24];
    const double C15040 = etx[25];
    const double C15410 = etx[26];
    const double C15780 = etx[27];
    const double C16150 = etx[28];
    const double C16520 = etx[29];
    const double C16890 = etx[30];
    const double C17260 = etx[31];
    const double C17630 = etx[32];
    const double C18000 = etx[33];
    const double C18370 = etx[34];
    const double C18740 = etx[35];
    const double C5913 = ety[0];
    const double C6283 = ety[1];
    const double C6653 = ety[2];
    const double C7023 = ety[3];
    const double C7393 = ety[4];
    const double C7763 = ety[5];
    const double C8133 = ety[6];
    const double C8503 = ety[7];
    const double C8873 = ety[8];
    const double C9243 = ety[9];
    const double C9613 = ety[10];
    const double C9983 = ety[11];
    const double C10353 = ety[12];
    const double C10723 = ety[13];
    const double C11093 = ety[14];
    const double C11463 = ety[15];
    const double C11833 = ety[16];
    const double C12203 = ety[17];
    const double C12573 = ety[18];
    const double C12943 = ety[19];
    const double C13313 = ety[20];
    const double C13683 = ety[21];
    const double C14053 = ety[22];
    const double C14423 = ety[23];
    const double C14793 = ety[24];
    const double C15163 = ety[25];
    const double C15533 = ety[26];
    const double C15903 = ety[27];
    const double C16273 = ety[28];
    const double C16643 = ety[29];
    const double C17013 = ety[30];
    const double C17383 = ety[31];
    const double C17753 = ety[32];
    const double C18123 = ety[33];
    const double C18493 = ety[34];
    const double C18863 = ety[35];
    const double C6036 = etz[0];
    const double C6406 = etz[1];
    const double C6776 = etz[2];
    const double C7146 = etz[3];
    const double C7516 = etz[4];
    const double C7886 = etz[5];
    const double C8256 = etz[6];
    const double C8626 = etz[7];
    const double C8996 = etz[8];
    const double C9366 = etz[9];
    const double C9736 = etz[10];
    const double C10106 = etz[11];
    const double C10476 = etz[12];
    const double C10846 = etz[13];
    const double C11216 = etz[14];
    const double C11586 = etz[15];
    const double C11956 = etz[16];
    const double C12326 = etz[17];
    const double C12696 = etz[18];
    const double C13066 = etz[19];
    const double C13436 = etz[20];
    const double C13806 = etz[21];
    const double C14176 = etz[22];
    const double C14546 = etz[23];
    const double C14916 = etz[24];
    const double C15286 = etz[25];
    const double C15656 = etz[26];
    const double C16026 = etz[27];
    const double C16396 = etz[28];
    const double C16766 = etz[29];
    const double C17136 = etz[30];
    const double C17506 = etz[31];
    const double C17876 = etz[32];
    const double C18246 = etz[33];
    const double C18616 = etz[34];
    const double C18986 = etz[35];
    hrx[0] = C5791;
    hrx[1] = C6160;
    hrx[2] = C6530;
    hrx[3] = C6900;
    hrx[4] = C7270;
    hrx[5] = C7640;
    hrx[6] = C8010;
    hrx[7] = C8380;
    hrx[8] = C8750;
    hrx[9] = C9120;
    hrx[10] = C9490;
    hrx[11] = C9860;
    hrx[12] = C10230;
    hrx[13] = C10600;
    hrx[14] = C10970;
    hrx[15] = C11340;
    hrx[16] = C11710;
    hrx[17] = C12080;
    hrx[18] = C12450;
    hrx[19] = C12820;
    hrx[20] = C13190;
    hrx[21] = C13560;
    hrx[22] = C13930;
    hrx[23] = C14300;
    hrx[24] = C14670;
    hrx[25] = C15040;
    hrx[26] = C15410;
    hrx[27] = C15780;
    hrx[28] = C16150;
    hrx[29] = C16520;
    hrx[30] = C16890;
    hrx[31] = C17260;
    hrx[32] = C17630;
    hrx[33] = C18000;
    hrx[34] = C18370;
    hrx[35] = C18740;
    hry[0] = C5913;
    hry[1] = C6283;
    hry[2] = C6653;
    hry[3] = C7023;
    hry[4] = C7393;
    hry[5] = C7763;
    hry[6] = C8133;
    hry[7] = C8503;
    hry[8] = C8873;
    hry[9] = C9243;
    hry[10] = C9613;
    hry[11] = C9983;
    hry[12] = C10353;
    hry[13] = C10723;
    hry[14] = C11093;
    hry[15] = C11463;
    hry[16] = C11833;
    hry[17] = C12203;
    hry[18] = C12573;
    hry[19] = C12943;
    hry[20] = C13313;
    hry[21] = C13683;
    hry[22] = C14053;
    hry[23] = C14423;
    hry[24] = C14793;
    hry[25] = C15163;
    hry[26] = C15533;
    hry[27] = C15903;
    hry[28] = C16273;
    hry[29] = C16643;
    hry[30] = C17013;
    hry[31] = C17383;
    hry[32] = C17753;
    hry[33] = C18123;
    hry[34] = C18493;
    hry[35] = C18863;
    hrz[0] = C6036;
    hrz[1] = C6406;
    hrz[2] = C6776;
    hrz[3] = C7146;
    hrz[4] = C7516;
    hrz[5] = C7886;
    hrz[6] = C8256;
    hrz[7] = C8626;
    hrz[8] = C8996;
    hrz[9] = C9366;
    hrz[10] = C9736;
    hrz[11] = C10106;
    hrz[12] = C10476;
    hrz[13] = C10846;
    hrz[14] = C11216;
    hrz[15] = C11586;
    hrz[16] = C11956;
    hrz[17] = C12326;
    hrz[18] = C12696;
    hrz[19] = C13066;
    hrz[20] = C13436;
    hrz[21] = C13806;
    hrz[22] = C14176;
    hrz[23] = C14546;
    hrz[24] = C14916;
    hrz[25] = C15286;
    hrz[26] = C15656;
    hrz[27] = C16026;
    hrz[28] = C16396;
    hrz[29] = C16766;
    hrz[30] = C17136;
    hrz[31] = C17506;
    hrz[32] = C17876;
    hrz[33] = C18246;
    hrz[34] = C18616;
    hrz[35] = C18986;
}
