/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2200_1_et(const double ae,
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
                            const double* const vrx,
                            const double* const vry,
                            const double* const vrz,
                            double* const etx,
                            double* const ety,
                            double* const etz)
{
    const double C651 = vrx[0];
    const double C652 = vrx[1];
    const double C662 = vrx[2];
    const double C671 = vrx[3];
    const double C672 = vrx[4];
    const double C689 = vrx[5];
    const double C690 = vrx[6];
    const double C707 = vrx[7];
    const double C716 = vrx[8];
    const double C725 = vrx[9];
    const double C735 = vrx[10];
    const double C745 = vrx[11];
    const double C754 = vrx[12];
    const double C755 = vrx[13];
    const double C772 = vrx[14];
    const double C773 = vrx[15];
    const double C790 = vrx[16];
    const double C799 = vrx[17];
    const double C808 = vrx[18];
    const double C818 = vrx[19];
    const double C828 = vrx[20];
    const double C837 = vrx[21];
    const double C854 = vrx[22];
    const double C855 = vrx[23];
    const double C872 = vrx[24];
    const double C881 = vrx[25];
    const double C890 = vrx[26];
    const double C909 = vrx[27];
    const double C926 = vrx[28];
    const double C953 = vrx[29];
    const double C1004 = vrx[30];
    const double C1368 = vry[0];
    const double C1369 = vry[1];
    const double C1378 = vry[2];
    const double C1387 = vry[3];
    const double C1388 = vry[4];
    const double C1405 = vry[5];
    const double C1406 = vry[6];
    const double C1423 = vry[7];
    const double C1432 = vry[8];
    const double C1441 = vry[9];
    const double C1450 = vry[10];
    const double C1459 = vry[11];
    const double C1469 = vry[12];
    const double C1470 = vry[13];
    const double C1487 = vry[14];
    const double C1488 = vry[15];
    const double C1505 = vry[16];
    const double C1514 = vry[17];
    const double C1523 = vry[18];
    const double C1532 = vry[19];
    const double C1541 = vry[20];
    const double C1551 = vry[21];
    const double C1568 = vry[22];
    const double C1569 = vry[23];
    const double C1586 = vry[24];
    const double C1595 = vry[25];
    const double C1604 = vry[26];
    const double C1621 = vry[27];
    const double C1638 = vry[28];
    const double C1663 = vry[29];
    const double C1712 = vry[30];
    const double C2077 = vrz[0];
    const double C2078 = vrz[1];
    const double C2087 = vrz[2];
    const double C2096 = vrz[3];
    const double C2097 = vrz[4];
    const double C2114 = vrz[5];
    const double C2115 = vrz[6];
    const double C2132 = vrz[7];
    const double C2141 = vrz[8];
    const double C2150 = vrz[9];
    const double C2159 = vrz[10];
    const double C2168 = vrz[11];
    const double C2177 = vrz[12];
    const double C2178 = vrz[13];
    const double C2195 = vrz[14];
    const double C2196 = vrz[15];
    const double C2213 = vrz[16];
    const double C2222 = vrz[17];
    const double C2231 = vrz[18];
    const double C2240 = vrz[19];
    const double C2249 = vrz[20];
    const double C2258 = vrz[21];
    const double C2276 = vrz[22];
    const double C2277 = vrz[23];
    const double C2294 = vrz[24];
    const double C2303 = vrz[25];
    const double C2312 = vrz[26];
    const double C2329 = vrz[27];
    const double C2346 = vrz[28];
    const double C2371 = vrz[29];
    const double C2420 = vrz[30];
    etx[0] = C651;
    etx[1] = C652;
    etx[2] = C662;
    etx[3] = C671;
    etx[4] = C672;
    etx[5] = C689;
    etx[6] = C690;
    etx[7] = C707;
    etx[8] = C716;
    etx[9] = C725;
    etx[10] = C735;
    etx[11] = C745;
    etx[12] = C754;
    etx[13] = C755;
    etx[14] = C772;
    etx[15] = C773;
    etx[16] = C790;
    etx[17] = C799;
    etx[18] = C808;
    etx[19] = C818;
    etx[20] = C828;
    etx[21] = C837;
    etx[22] = C854;
    etx[23] = C855;
    etx[24] = C872;
    etx[25] = C881;
    etx[26] = C890;
    etx[27] = C909;
    etx[28] = C926;
    etx[29] = C953;
    etx[30] = C1004;
    ety[0] = C1368;
    ety[1] = C1369;
    ety[2] = C1378;
    ety[3] = C1387;
    ety[4] = C1388;
    ety[5] = C1405;
    ety[6] = C1406;
    ety[7] = C1423;
    ety[8] = C1432;
    ety[9] = C1441;
    ety[10] = C1450;
    ety[11] = C1459;
    ety[12] = C1469;
    ety[13] = C1470;
    ety[14] = C1487;
    ety[15] = C1488;
    ety[16] = C1505;
    ety[17] = C1514;
    ety[18] = C1523;
    ety[19] = C1532;
    ety[20] = C1541;
    ety[21] = C1551;
    ety[22] = C1568;
    ety[23] = C1569;
    ety[24] = C1586;
    ety[25] = C1595;
    ety[26] = C1604;
    ety[27] = C1621;
    ety[28] = C1638;
    ety[29] = C1663;
    ety[30] = C1712;
    etz[0] = C2077;
    etz[1] = C2078;
    etz[2] = C2087;
    etz[3] = C2096;
    etz[4] = C2097;
    etz[5] = C2114;
    etz[6] = C2115;
    etz[7] = C2132;
    etz[8] = C2141;
    etz[9] = C2150;
    etz[10] = C2159;
    etz[11] = C2168;
    etz[12] = C2177;
    etz[13] = C2178;
    etz[14] = C2195;
    etz[15] = C2196;
    etz[16] = C2213;
    etz[17] = C2222;
    etz[18] = C2231;
    etz[19] = C2240;
    etz[20] = C2249;
    etz[21] = C2258;
    etz[22] = C2276;
    etz[23] = C2277;
    etz[24] = C2294;
    etz[25] = C2303;
    etz[26] = C2312;
    etz[27] = C2329;
    etz[28] = C2346;
    etz[29] = C2371;
    etz[30] = C2420;
}
