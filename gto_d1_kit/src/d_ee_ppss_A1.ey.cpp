/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1100_1_vr(const double ae,
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
                            double* const vrx,
                            double* const vry,
                            double* const vrz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C109 = g[0];
    const double C138 = g[1];
    const double C165 = g[2];
    const double C369 = g[3];
    const double C390 = g[4];
    const double C391 = g[5];
    const double C406 = g[6];
    const double C422 = g[7];
    const double C508 = g[8];
    const double C372 = p + q;
    const double C371 = p * q;
    const double C975 = bs[3];
    const double C974 = bs[2];
    const double C972 = std::pow(Pi, 2.5);
    const double C969 = bs[1];
    const double C968 = ae * be;
    const double C967 = bs[0];
    const double C966 = zP - zQ;
    const double C965 = be * zAB;
    const double C964 = yP - yQ;
    const double C963 = be * yAB;
    const double C962 = 2 * p;
    const double C960 = xP - xQ;
    const double C959 = std::pow(p, 2);
    const double C957 = be * xAB;
    const double C956 = ae / p;
    const double C373 = C372 * p;
    const double C973 = std::sqrt(C372);
    const double C971 = p * C372;
    const double C970 = kab * C371;
    const double C958 = ae * C371;
    const double C990 = 4 * C972;
    const double C988 = kab * C968;
    const double C986 = C966 * C371;
    const double C985 = C964 * C371;
    const double C980 = C960 * C371;
    const double C979 = C372 * C959;
    const double C978 = C956 - 1;
    const double C991 = C371 * C973;
    const double C989 = kcd * C970;
    const double C987 = C508 * C958;
    const double C984 = C422 * C958;
    const double C983 = C406 * C958;
    const double C982 = C391 * C958;
    const double C1003 = kcd * C988;
    const double C1001 = C978 * C391;
    const double C999 = C978 * C165;
    const double C997 = C978 * C138;
    const double C995 = C978 * C390;
    const double C1006 = C975 * C989;
    const double C1005 = C974 * C989;
    const double C1004 = C969 * C989;
    const double C1002 = C987 / C979;
    const double C1000 = C984 / C979;
    const double C998 = C983 / C979;
    const double C996 = C982 / C979;
    const double C1014 = C974 * C1003;
    const double C1012 = C969 * C1003;
    const double C1010 = C967 * C1003;
    const double C1015 = C1006 * ae;
    const double C1013 = C1005 * ae;
    const double C1011 = C1004 * ae;
    const double C512 =
        -(((xAB * C1014) / p + (C960 * C1015) / C971) * C990) / C991;
    const double C722 =
        -(((yAB * C1014) / p + (C964 * C1015) / C971) * C990) / C991;
    const double C918 =
        -(((zAB * C1014) / p + (C966 * C1015) / C971) * C990) / C991;
    const double C378 =
        -(((xAB * C1012) / p + (C960 * C1013) / C971) * C990) / C991;
    const double C578 =
        -(((yAB * C1012) / p + (C964 * C1013) / C971) * C990) / C991;
    const double C774 =
        -(((zAB * C1012) / p + (C966 * C1013) / C971) * C990) / C991;
    const double C377 =
        -(((xAB * C1010) / p + (C960 * C1011) / C971) * C990) / C991;
    const double C577 =
        -(((yAB * C1010) / p + (C964 * C1011) / C971) * C990) / C991;
    const double C773 =
        -(((zAB * C1010) / p + (C966 * C1011) / C971) * C990) / C991;
    const double C961 = C378 * C371;
    const double C376 =
        C1001 - (C378 * C957) / p - C1002 - (C512 * C980) / C373;
    const double C410 = -((C378 * C963) / p + (C512 * C985) / C373);
    const double C426 = -((C378 * C965) / p + (C512 * C986) / C373);
    const double C976 = C578 * C371;
    const double C579 = -((C578 * C957) / p + (C722 * C980) / C373);
    const double C608 =
        C1001 - (C578 * C963) / p - C1002 - (C722 * C985) / C373;
    const double C623 = -((C578 * C965) / p + (C722 * C986) / C373);
    const double C977 = C774 * C371;
    const double C775 = -((C774 * C957) / p + (C918 * C980) / C373);
    const double C804 = -((C774 * C963) / p + (C918 * C985) / C373);
    const double C819 =
        C1001 - (C774 * C965) / p - C1002 - (C918 * C986) / C373;
    const double C113 = C995 - (C377 * C957) / p - C996 - (C378 * C980) / C373;
    const double C141 = -((C377 * C963) / p + (C378 * C985) / C373);
    const double C168 = -((C377 * C965) / p + (C378 * C986) / C373);
    const double C193 = -((C577 * C957) / p + (C578 * C980) / C373);
    const double C220 = C995 - (C577 * C963) / p - C996 - (C578 * C985) / C373;
    const double C246 = -((C577 * C965) / p + (C578 * C986) / C373);
    const double C271 = -((C773 * C957) / p + (C774 * C980) / C373);
    const double C298 = -((C773 * C963) / p + (C774 * C985) / C373);
    const double C324 = C995 - (C773 * C965) / p - C996 - (C774 * C986) / C373;
    const double C981 = C961 / C373;
    const double C992 = C976 / C373;
    const double C993 = C977 / C373;
    const double C122 = C997 - (C141 * C957) / p - C998 - (C410 * C980) / C373;
    const double C131 = C999 - (C168 * C957) / p - C1000 - (C426 * C980) / C373;
    const double C158 = -((C168 * C963) / p + (C426 * C985) / C373);
    const double C202 = -((C220 * C957) / p + (C608 * C980) / C373);
    const double C211 = -((C246 * C957) / p + (C623 * C980) / C373);
    const double C237 = C999 - (C246 * C963) / p - C1000 - (C623 * C985) / C373;
    const double C280 = -((C298 * C957) / p + (C804 * C980) / C373);
    const double C289 = -((C324 * C957) / p + (C819 * C980) / C373);
    const double C315 = -((C324 * C963) / p + (C819 * C985) / C373);
    const double C994 = C377 - C981;
    const double C1007 = C577 - C992;
    const double C1008 = C773 - C993;
    const double C1009 = C994 / C962;
    const double C1016 = C1007 / C962;
    const double C1017 = C1008 / C962;
    const double C112 = C978 * C109 - (C113 * C957) / p - (C369 * C958) / C979 -
                        (C376 * C980) / C373 + C1009;
    const double C149 = C1009 - ((C141 * C963) / p + (C410 * C985) / C373);
    const double C184 = C1009 - ((C168 * C965) / p + (C426 * C986) / C373);
    const double C192 = C1016 - ((C193 * C957) / p + (C579 * C980) / C373);
    const double C228 =
        C997 - (C220 * C963) / p - C998 - (C608 * C985) / C373 + C1016;
    const double C262 = C1016 - ((C246 * C965) / p + (C623 * C986) / C373);
    const double C270 = C1017 - ((C271 * C957) / p + (C775 * C980) / C373);
    const double C306 = C1017 - ((C298 * C963) / p + (C804 * C985) / C373);
    const double C340 =
        C999 - (C324 * C965) / p - C1000 - (C819 * C986) / C373 + C1017;
    vrx[0] = C112;
    vrx[1] = C113;
    vrx[2] = C122;
    vrx[3] = C131;
    vrx[4] = C141;
    vrx[5] = C149;
    vrx[6] = C158;
    vrx[7] = C168;
    vrx[8] = C184;
    vry[0] = C192;
    vry[1] = C193;
    vry[2] = C202;
    vry[3] = C211;
    vry[4] = C220;
    vry[5] = C228;
    vry[6] = C237;
    vry[7] = C246;
    vry[8] = C262;
    vrz[0] = C270;
    vrz[1] = C271;
    vrz[2] = C280;
    vrz[3] = C289;
    vrz[4] = C298;
    vrz[5] = C306;
    vrz[6] = C315;
    vrz[7] = C324;
    vrz[8] = C340;
}
