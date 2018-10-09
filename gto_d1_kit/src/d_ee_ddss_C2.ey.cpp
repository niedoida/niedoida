/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2200_3_et(const double ae,
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
    const double C595 = vrx[0];
    const double C596 = vrx[1];
    const double C604 = vrx[2];
    const double C612 = vrx[3];
    const double C613 = vrx[4];
    const double C628 = vrx[5];
    const double C629 = vrx[6];
    const double C644 = vrx[7];
    const double C652 = vrx[8];
    const double C660 = vrx[9];
    const double C668 = vrx[10];
    const double C676 = vrx[11];
    const double C684 = vrx[12];
    const double C685 = vrx[13];
    const double C700 = vrx[14];
    const double C701 = vrx[15];
    const double C716 = vrx[16];
    const double C724 = vrx[17];
    const double C732 = vrx[18];
    const double C740 = vrx[19];
    const double C748 = vrx[20];
    const double C756 = vrx[21];
    const double C771 = vrx[22];
    const double C772 = vrx[23];
    const double C787 = vrx[24];
    const double C795 = vrx[25];
    const double C803 = vrx[26];
    const double C818 = vrx[27];
    const double C833 = vrx[28];
    const double C855 = vrx[29];
    const double C898 = vrx[30];
    const double C1222 = vry[0];
    const double C1223 = vry[1];
    const double C1231 = vry[2];
    const double C1239 = vry[3];
    const double C1240 = vry[4];
    const double C1255 = vry[5];
    const double C1256 = vry[6];
    const double C1271 = vry[7];
    const double C1279 = vry[8];
    const double C1287 = vry[9];
    const double C1295 = vry[10];
    const double C1303 = vry[11];
    const double C1311 = vry[12];
    const double C1312 = vry[13];
    const double C1327 = vry[14];
    const double C1328 = vry[15];
    const double C1343 = vry[16];
    const double C1351 = vry[17];
    const double C1359 = vry[18];
    const double C1367 = vry[19];
    const double C1375 = vry[20];
    const double C1383 = vry[21];
    const double C1398 = vry[22];
    const double C1399 = vry[23];
    const double C1414 = vry[24];
    const double C1422 = vry[25];
    const double C1430 = vry[26];
    const double C1445 = vry[27];
    const double C1460 = vry[28];
    const double C1482 = vry[29];
    const double C1525 = vry[30];
    const double C1849 = vrz[0];
    const double C1850 = vrz[1];
    const double C1858 = vrz[2];
    const double C1866 = vrz[3];
    const double C1867 = vrz[4];
    const double C1882 = vrz[5];
    const double C1883 = vrz[6];
    const double C1898 = vrz[7];
    const double C1906 = vrz[8];
    const double C1914 = vrz[9];
    const double C1922 = vrz[10];
    const double C1930 = vrz[11];
    const double C1938 = vrz[12];
    const double C1939 = vrz[13];
    const double C1954 = vrz[14];
    const double C1955 = vrz[15];
    const double C1970 = vrz[16];
    const double C1978 = vrz[17];
    const double C1986 = vrz[18];
    const double C1994 = vrz[19];
    const double C2002 = vrz[20];
    const double C2010 = vrz[21];
    const double C2025 = vrz[22];
    const double C2026 = vrz[23];
    const double C2041 = vrz[24];
    const double C2049 = vrz[25];
    const double C2057 = vrz[26];
    const double C2072 = vrz[27];
    const double C2087 = vrz[28];
    const double C2109 = vrz[29];
    const double C2152 = vrz[30];
    etx[0] = C595;
    etx[1] = C596;
    etx[2] = C604;
    etx[3] = C612;
    etx[4] = C613;
    etx[5] = C628;
    etx[6] = C629;
    etx[7] = C644;
    etx[8] = C652;
    etx[9] = C660;
    etx[10] = C668;
    etx[11] = C676;
    etx[12] = C684;
    etx[13] = C685;
    etx[14] = C700;
    etx[15] = C701;
    etx[16] = C716;
    etx[17] = C724;
    etx[18] = C732;
    etx[19] = C740;
    etx[20] = C748;
    etx[21] = C756;
    etx[22] = C771;
    etx[23] = C772;
    etx[24] = C787;
    etx[25] = C795;
    etx[26] = C803;
    etx[27] = C818;
    etx[28] = C833;
    etx[29] = C855;
    etx[30] = C898;
    ety[0] = C1222;
    ety[1] = C1223;
    ety[2] = C1231;
    ety[3] = C1239;
    ety[4] = C1240;
    ety[5] = C1255;
    ety[6] = C1256;
    ety[7] = C1271;
    ety[8] = C1279;
    ety[9] = C1287;
    ety[10] = C1295;
    ety[11] = C1303;
    ety[12] = C1311;
    ety[13] = C1312;
    ety[14] = C1327;
    ety[15] = C1328;
    ety[16] = C1343;
    ety[17] = C1351;
    ety[18] = C1359;
    ety[19] = C1367;
    ety[20] = C1375;
    ety[21] = C1383;
    ety[22] = C1398;
    ety[23] = C1399;
    ety[24] = C1414;
    ety[25] = C1422;
    ety[26] = C1430;
    ety[27] = C1445;
    ety[28] = C1460;
    ety[29] = C1482;
    ety[30] = C1525;
    etz[0] = C1849;
    etz[1] = C1850;
    etz[2] = C1858;
    etz[3] = C1866;
    etz[4] = C1867;
    etz[5] = C1882;
    etz[6] = C1883;
    etz[7] = C1898;
    etz[8] = C1906;
    etz[9] = C1914;
    etz[10] = C1922;
    etz[11] = C1930;
    etz[12] = C1938;
    etz[13] = C1939;
    etz[14] = C1954;
    etz[15] = C1955;
    etz[16] = C1970;
    etz[17] = C1978;
    etz[18] = C1986;
    etz[19] = C1994;
    etz[20] = C2002;
    etz[21] = C2010;
    etz[22] = C2025;
    etz[23] = C2026;
    etz[24] = C2041;
    etz[25] = C2049;
    etz[26] = C2057;
    etz[27] = C2072;
    etz[28] = C2087;
    etz[29] = C2109;
    etz[30] = C2152;
}
