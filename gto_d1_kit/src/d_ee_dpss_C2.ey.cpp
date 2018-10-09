/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2010_3_et(const double ae,
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
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double C184 = g[0];
    const double C232 = g[1];
    const double C280 = g[2];
    const double C328 = g[3];
    const double C373 = g[4];
    const double C417 = g[5];
    const double C188 = vrx[0];
    const double C189 = vrx[1];
    const double C190 = vrx[2];
    const double C205 = vrx[3];
    const double C220 = vrx[4];
    const double C236 = vrx[5];
    const double C237 = vrx[6];
    const double C252 = vrx[7];
    const double C253 = vrx[8];
    const double C268 = vrx[9];
    const double C284 = vrx[10];
    const double C285 = vrx[11];
    const double C300 = vrx[12];
    const double C315 = vrx[13];
    const double C316 = vrx[14];
    const double C332 = vrx[15];
    const double C361 = vrx[16];
    const double C377 = vrx[17];
    const double C421 = vrx[18];
    const double C465 = vry[0];
    const double C466 = vry[1];
    const double C467 = vry[2];
    const double C482 = vry[3];
    const double C497 = vry[4];
    const double C512 = vry[5];
    const double C513 = vry[6];
    const double C528 = vry[7];
    const double C529 = vry[8];
    const double C544 = vry[9];
    const double C559 = vry[10];
    const double C560 = vry[11];
    const double C575 = vry[12];
    const double C590 = vry[13];
    const double C591 = vry[14];
    const double C606 = vry[15];
    const double C635 = vry[16];
    const double C650 = vry[17];
    const double C693 = vry[18];
    const double C737 = vrz[0];
    const double C738 = vrz[1];
    const double C739 = vrz[2];
    const double C754 = vrz[3];
    const double C769 = vrz[4];
    const double C784 = vrz[5];
    const double C785 = vrz[6];
    const double C800 = vrz[7];
    const double C801 = vrz[8];
    const double C816 = vrz[9];
    const double C831 = vrz[10];
    const double C832 = vrz[11];
    const double C847 = vrz[12];
    const double C862 = vrz[13];
    const double C863 = vrz[14];
    const double C878 = vrz[15];
    const double C907 = vrz[16];
    const double C922 = vrz[17];
    const double C965 = vrz[18];
    const double C1009 = C361 * p;
    const double C1008 = 2 * q;
    const double C1007 = C300 * p;
    const double C1006 = C285 * p;
    const double C1005 = C268 * p;
    const double C1004 = C237 * p;
    const double C1003 = C220 * p;
    const double C1002 = de * zCD;
    const double C1001 = be * zAB;
    const double C1000 = C205 * p;
    const double C999 = de * yCD;
    const double C998 = be * yAB;
    const double C997 = de * xCD;
    const double C996 = be * xAB;
    const double C1028 = C635 * p;
    const double C1025 = C575 * p;
    const double C1024 = C560 * p;
    const double C1023 = C544 * p;
    const double C1022 = C513 * p;
    const double C1021 = C497 * p;
    const double C1020 = C482 * p;
    const double C1042 = C907 * p;
    const double C1039 = C847 * p;
    const double C1038 = C832 * p;
    const double C1037 = C816 * p;
    const double C1036 = C785 * p;
    const double C1035 = C769 * p;
    const double C1034 = C754 * p;
    const double C1015 = C315 / C1008;
    const double C1014 = C188 / C1008;
    const double C1013 = C252 / C1008;
    const double C1029 = C590 / C1008;
    const double C1027 = C465 / C1008;
    const double C1026 = C528 / C1008;
    const double C1043 = C862 / C1008;
    const double C1041 = C737 / C1008;
    const double C1040 = C800 / C1008;
    const double C1012 = C1001 + C1002;
    const double C1011 = C998 + C999;
    const double C1010 = C996 + C997;
    const double C56 = -(C189 * C1012 + C1003) / q;
    const double C77 = -(C236 * C1012 + C1005) / q;
    const double C98 = C315 / q - (C284 * C1012) / q - (C316 * p) / q;
    const double C119 = -(C332 * C1012 + C1009) / q;
    const double C140 = C1014 - (C377 * C1012) / q - C1006 / q;
    const double C161 = C1013 - (C421 * C1012) / q - C1007 / q;
    const double C58 = -(C466 * C1012 + C1021) / q;
    const double C79 = -(C512 * C1012 + C1023) / q;
    const double C100 = C590 / q - (C559 * C1012) / q - (C591 * p) / q;
    const double C121 = -(C606 * C1012 + C1028) / q;
    const double C142 = C1027 - (C650 * C1012) / q - C1024 / q;
    const double C163 = C1026 - (C693 * C1012) / q - C1025 / q;
    const double C60 = -(C184 * de + C738 * C1012 + C1035) / q;
    const double C81 = -(C232 * de + C784 * C1012 + C1037) / q;
    const double C102 =
        C862 / q - (C280 * de + C831 * C1012) / q - (C863 * p) / q;
    const double C123 = -(C328 * de + C878 * C1012 + C1042) / q;
    const double C144 = C1041 - (C373 * de + C922 * C1012) / q - C1038 / q;
    const double C165 = C1040 - (C417 * de + C965 * C1012) / q - C1039 / q;
    const double C49 = -(C189 * C1011 + C1000) / q;
    const double C70 = C252 / q - (C236 * C1011) / q - (C253 * p) / q;
    const double C91 = -(C284 * C1011 + C1007) / q;
    const double C112 = C1014 - (C332 * C1011) / q - C1004 / q;
    const double C133 = -(C377 * C1011 + C1009) / q;
    const double C154 = C1015 - (C421 * C1011) / q - C1005 / q;
    const double C51 = -(C184 * de + C466 * C1011 + C1020) / q;
    const double C72 =
        C528 / q - (C232 * de + C512 * C1011) / q - (C529 * p) / q;
    const double C93 = -(C280 * de + C559 * C1011 + C1025) / q;
    const double C114 = C1027 - (C328 * de + C606 * C1011) / q - C1022 / q;
    const double C135 = -(C373 * de + C650 * C1011 + C1028) / q;
    const double C156 = C1029 - (C417 * de + C693 * C1011) / q - C1023 / q;
    const double C53 = -(C738 * C1011 + C1034) / q;
    const double C74 = C800 / q - (C784 * C1011) / q - (C801 * p) / q;
    const double C95 = -(C831 * C1011 + C1039) / q;
    const double C116 = C1041 - (C878 * C1011) / q - C1036 / q;
    const double C137 = -(C922 * C1011 + C1042) / q;
    const double C158 = C1043 - (C965 * C1011) / q - C1037 / q;
    const double C40 =
        C188 / q - (C184 * de + C189 * C1010) / q - (C190 * p) / q;
    const double C63 = -(C232 * de + C236 * C1010 + C1004) / q;
    const double C84 = -(C280 * de + C284 * C1010 + C1006) / q;
    const double C105 = C1013 - (C328 * de + C332 * C1010) / q - C1000 / q;
    const double C126 = C1015 - (C373 * de + C377 * C1010) / q - C1003 / q;
    const double C147 = -(C417 * de + C421 * C1010 + C1009) / q;
    const double C44 = C465 / q - (C466 * C1010) / q - (C467 * p) / q;
    const double C65 = -(C512 * C1010 + C1022) / q;
    const double C86 = -(C559 * C1010 + C1024) / q;
    const double C107 = C1026 - (C606 * C1010) / q - C1020 / q;
    const double C128 = C1029 - (C650 * C1010) / q - C1021 / q;
    const double C149 = -(C693 * C1010 + C1028) / q;
    const double C46 = C737 / q - (C738 * C1010) / q - (C739 * p) / q;
    const double C67 = -(C784 * C1010 + C1036) / q;
    const double C88 = -(C831 * C1010 + C1038) / q;
    const double C109 = C1040 - (C878 * C1010) / q - C1034 / q;
    const double C130 = C1043 - (C922 * C1010) / q - C1035 / q;
    const double C151 = -(C965 * C1010 + C1042) / q;
    etx[0] = C40;
    etx[1] = C49;
    etx[2] = C56;
    etx[3] = C63;
    etx[4] = C70;
    etx[5] = C77;
    etx[6] = C84;
    etx[7] = C91;
    etx[8] = C98;
    etx[9] = C105;
    etx[10] = C112;
    etx[11] = C119;
    etx[12] = C126;
    etx[13] = C133;
    etx[14] = C140;
    etx[15] = C147;
    etx[16] = C154;
    etx[17] = C161;
    ety[0] = C44;
    ety[1] = C51;
    ety[2] = C58;
    ety[3] = C65;
    ety[4] = C72;
    ety[5] = C79;
    ety[6] = C86;
    ety[7] = C93;
    ety[8] = C100;
    ety[9] = C107;
    ety[10] = C114;
    ety[11] = C121;
    ety[12] = C128;
    ety[13] = C135;
    ety[14] = C142;
    ety[15] = C149;
    ety[16] = C156;
    ety[17] = C163;
    etz[0] = C46;
    etz[1] = C53;
    etz[2] = C60;
    etz[3] = C67;
    etz[4] = C74;
    etz[5] = C81;
    etz[6] = C88;
    etz[7] = C95;
    etz[8] = C102;
    etz[9] = C109;
    etz[10] = C116;
    etz[11] = C123;
    etz[12] = C130;
    etz[13] = C137;
    etz[14] = C144;
    etz[15] = C151;
    etz[16] = C158;
    etz[17] = C165;
}
