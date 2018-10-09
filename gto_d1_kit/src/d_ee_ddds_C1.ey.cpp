/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2220_3_vr(const double ae,
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
    const double C28927 = g[148];
    const double C28946 = g[149];
    const double C28961 = g[150];
    const double C28976 = g[151];
    const double C29005 = g[152];
    const double C29074 = g[153];
    const double C29156 = g[154];
    const double C29170 = g[155];
    const double C29198 = g[156];
    const double C29266 = g[157];
    const double C29280 = g[158];
    const double C29307 = g[159];
    const double C29321 = g[160];
    const double C29336 = g[161];
    const double C29363 = g[162];
    const double C29378 = g[163];
    const double C29393 = g[164];
    const double C29561 = g[165];
    const double C29576 = g[166];
    const double C29606 = g[167];
    const double C29636 = g[168];
    const double C29691 = g[169];
    const double C29706 = g[170];
    const double C29736 = g[171];
    const double C29764 = g[172];
    const double C29778 = g[173];
    const double C29792 = g[174];
    const double C29874 = g[175];
    const double C29888 = g[176];
    const double C29943 = g[177];
    const double C29958 = g[178];
    const double C29986 = g[179];
    const double C30000 = g[180];
    const double C30054 = g[181];
    const double C30068 = g[182];
    const double C30095 = g[183];
    const double C30111 = g[184];
    const double C30126 = g[185];
    const double C30147 = g[186];
    const double C30176 = g[187];
    const double C30309 = g[188];
    const double C30324 = g[189];
    const double C30391 = g[190];
    const double C30406 = g[191];
    const double C30434 = g[192];
    const double C30449 = g[193];
    const double C30478 = g[194];
    const double C30493 = g[195];
    const double C30522 = g[196];
    const double C30537 = g[197];
    const double C30579 = g[198];
    const double C30700 = g[199];
    const double C30716 = g[200];
    const double C30791 = g[201];
    const double C30806 = g[202];
    const double C30849 = g[203];
    const double C30891 = g[204];
    const double C30905 = g[205];
    const double C30972 = g[206];
    const double C31012 = g[207];
    const double C31060 = g[208];
    const double C31075 = g[209];
    const double C31166 = g[210];
    const double C31181 = g[211];
    const double C31257 = g[212];
    const double C31430 = g[213];
    const double C31786 = g[214];
    const double C31801 = g[215];
    const double C31883 = g[216];
    const double C31897 = g[217];
    const double C31982 = g[218];
    const double C32080 = g[219];
    const double C32491 = g[220];
    const double C32639 = g[221];
    const double C32788 = g[222];
    const double C32845 = g[223];
    const double C33008 = g[224];
    const double C33084 = g[225];
    const double C33209 = g[226];
    const double C33417 = g[227];
    const double C33432 = g[228];
    const double C33461 = g[229];
    const double C33537 = g[230];
    const double C34276 = g[231];
    const double C34334 = g[232];
    const double C35220 = g[233];
    const double C35314 = g[234];
    const double C35431 = g[235];
    const double C35764 = g[236];
    const double C35881 = g[237];
    const double C28930 = p + q;
    const double C28929 = p * q;
    const double C35984 = bs[7];
    const double C35983 = bs[6];
    const double C35981 = bs[5];
    const double C35979 = bs[4];
    const double C35977 = bs[3];
    const double C35970 = bs[2];
    const double C35963 = std::pow(Pi, 2.5);
    const double C35962 = ce * de;
    const double C35961 = bs[0];
    const double C35958 = bs[1];
    const double C35955 = zP - zQ;
    const double C35954 = be * zAB;
    const double C35952 = yP - yQ;
    const double C35951 = be * yAB;
    const double C35948 = 2 * p;
    const double C35947 = xP - xQ;
    const double C35946 = be * xAB;
    const double C28931 = C28930 * p;
    const double C35964 = std::sqrt(C28930);
    const double C35960 = q * C28930;
    const double C35959 = C28929 * ce;
    const double C35945 = C28930 * C28929;
    const double C35944 = ce * C28929;
    const double C36045 = 4 * C35963;
    const double C36044 = kab * C35962;
    const double C36030 = C35955 * C28929;
    const double C36028 = C35952 * C28929;
    const double C36024 = C35947 * C28929;
    const double C36046 = C28929 * C35964;
    const double C36043 = kab * C35959;
    const double C36112 = C33461 * C35944;
    const double C36103 = C32639 * C35944;
    const double C36097 = C31897 * C35944;
    const double C36096 = C31883 * C35944;
    const double C36090 = C31257 * C35944;
    const double C36088 = C31166 * C35944;
    const double C36086 = C31012 * C35944;
    const double C36085 = C30972 * C35944;
    const double C36084 = C30905 * C35944;
    const double C36083 = C30891 * C35944;
    const double C36081 = C30849 * C35944;
    const double C36080 = C30806 * C35944;
    const double C36079 = C30716 * C35944;
    const double C36076 = C30537 * C35944;
    const double C36075 = C30522 * C35944;
    const double C36071 = C30406 * C35944;
    const double C36070 = C30391 * C35944;
    const double C36068 = C30324 * C35944;
    const double C36067 = C30309 * C35944;
    const double C36066 = C30176 * C35944;
    const double C36065 = C30147 * C35944;
    const double C36064 = C30126 * C35944;
    const double C36062 = C30095 * C35944;
    const double C36061 = C30068 * C35944;
    const double C36060 = C30054 * C35944;
    const double C36059 = C30000 * C35944;
    const double C36058 = C29986 * C35944;
    const double C36057 = C29958 * C35944;
    const double C36056 = C29888 * C35944;
    const double C36055 = C29874 * C35944;
    const double C36054 = C29792 * C35944;
    const double C36053 = C29764 * C35944;
    const double C36052 = C29736 * C35944;
    const double C36049 = C29636 * C35944;
    const double C36042 = C29393 * C35944;
    const double C36040 = C29378 * C35944;
    const double C36038 = C29363 * C35944;
    const double C36037 = C29336 * C35944;
    const double C36036 = C29307 * C35944;
    const double C36035 = C29280 * C35944;
    const double C36034 = C29266 * C35944;
    const double C36033 = C29198 * C35944;
    const double C36032 = C29156 * C35944;
    const double C36031 = C29074 * C35944;
    const double C36025 = C28946 * C35944;
    const double C36023 = C28927 * C35944;
    const double C36151 = kcd * C36044;
    const double C36150 = kcd * C36043;
    const double C36217 = C36112 / C35945;
    const double C36208 = C36103 / C35945;
    const double C36202 = C36097 / C35945;
    const double C36201 = C36096 / C35945;
    const double C36195 = C36090 / C35945;
    const double C36193 = C36088 / C35945;
    const double C36191 = C36086 / C35945;
    const double C36190 = C36085 / C35945;
    const double C36189 = C36084 / C35945;
    const double C36188 = C36083 / C35945;
    const double C36186 = C36081 / C35945;
    const double C36185 = C36080 / C35945;
    const double C36184 = C36079 / C35945;
    const double C36181 = C36076 / C35945;
    const double C36180 = C36075 / C35945;
    const double C36176 = C36071 / C35945;
    const double C36175 = C36070 / C35945;
    const double C36173 = C36068 / C35945;
    const double C36172 = C36067 / C35945;
    const double C36171 = C36066 / C35945;
    const double C36170 = C36065 / C35945;
    const double C36169 = C36064 / C35945;
    const double C36167 = C36062 / C35945;
    const double C36166 = C36061 / C35945;
    const double C36165 = C36060 / C35945;
    const double C36164 = C36059 / C35945;
    const double C36163 = C36058 / C35945;
    const double C36162 = C36057 / C35945;
    const double C36161 = C36056 / C35945;
    const double C36160 = C36055 / C35945;
    const double C36159 = C36054 / C35945;
    const double C36158 = C36053 / C35945;
    const double C36157 = C36052 / C35945;
    const double C36154 = C36049 / C35945;
    const double C36149 = C36042 / C35945;
    const double C36147 = C36040 / C35945;
    const double C36145 = C36038 / C35945;
    const double C36144 = C36037 / C35945;
    const double C36143 = C36036 / C35945;
    const double C36142 = C36035 / C35945;
    const double C36141 = C36034 / C35945;
    const double C36140 = C36033 / C35945;
    const double C36139 = C36032 / C35945;
    const double C36138 = C36031 / C35945;
    const double C36134 = C36025 / C35945;
    const double C36133 = C36023 / C35945;
    const double C36267 = C35983 * C36151;
    const double C36265 = C35981 * C36151;
    const double C36262 = C35979 * C36151;
    const double C36259 = C35977 * C36151;
    const double C36257 = C35970 * C36151;
    const double C36250 = C35958 * C36151;
    const double C36241 = C35961 * C36151;
    const double C36266 = C35984 * C36150;
    const double C36264 = C35983 * C36150;
    const double C36261 = C35981 * C36150;
    const double C36258 = C35979 * C36150;
    const double C36256 = C35977 * C36150;
    const double C36249 = C35970 * C36150;
    const double C36240 = C35958 * C36150;
    const double C31261 =
        (((C35947 * C36266) / C35960 - (xCD * C36267) / q) * C36045) / C36046;
    const double C33590 =
        (((C35952 * C36266) / C35960 - (yCD * C36267) / q) * C36045) / C36046;
    const double C35908 =
        (((C35955 * C36266) / C35960 - (zCD * C36267) / q) * C36045) / C36046;
    const double C31170 =
        (((C35947 * C36264) / C35960 - (xCD * C36265) / q) * C36045) / C36046;
    const double C33500 =
        (((C35952 * C36264) / C35960 - (yCD * C36265) / q) * C36045) / C36046;
    const double C35818 =
        (((C35955 * C36264) / C35960 - (zCD * C36265) / q) * C36045) / C36046;
    const double C31016 =
        (((C35947 * C36261) / C35960 - (xCD * C36262) / q) * C36045) / C36046;
    const double C33353 =
        (((C35952 * C36261) / C35960 - (yCD * C36262) / q) * C36045) / C36046;
    const double C35673 =
        (((C35955 * C36261) / C35960 - (zCD * C36262) / q) * C36045) / C36046;
    const double C30705 =
        (((C35947 * C36258) / C35960 - (xCD * C36259) / q) * C36045) / C36046;
    const double C33047 =
        (((C35952 * C36258) / C35960 - (yCD * C36259) / q) * C36045) / C36046;
    const double C35368 =
        (((C35955 * C36258) / C35960 - (zCD * C36259) / q) * C36045) / C36046;
    const double C30115 =
        (((C35947 * C36256) / C35960 - (xCD * C36257) / q) * C36045) / C36046;
    const double C32446 =
        (((C35952 * C36256) / C35960 - (yCD * C36257) / q) * C36045) / C36046;
    const double C34770 =
        (((C35955 * C36256) / C35960 - (zCD * C36257) / q) * C36045) / C36046;
    const double C28965 =
        (((C35947 * C36249) / C35960 - (xCD * C36250) / q) * C36045) / C36046;
    const double C31338 =
        (((C35952 * C36249) / C35960 - (yCD * C36250) / q) * C36045) / C36046;
    const double C33667 =
        (((C35955 * C36249) / C35960 - (zCD * C36250) / q) * C36045) / C36046;
    const double C15812 =
        (((C35947 * C36240) / C35960 - (xCD * C36241) / q) * C36045) / C36046;
    const double C20912 =
        (((C35952 * C36240) / C35960 - (yCD * C36241) / q) * C36045) / C36046;
    const double C25973 =
        (((C35955 * C36240) / C35960 - (zCD * C36241) / q) * C36045) / C36046;
    const double C35982 = C31170 * C28929;
    const double C31185 =
        C36195 - (C31170 * C35946) / p - (C31261 * C36024) / C28931;
    const double C31212 = -((C31170 * C35951) / p + (C31261 * C36028) / C28931);
    const double C31239 = -((C31170 * C35954) / p + (C31261 * C36030) / C28931);
    const double C36003 = C33500 * C28929;
    const double C33514 = -((C33500 * C35946) / p + (C33590 * C36024) / C28931);
    const double C33542 =
        C36195 - (C33500 * C35951) / p - (C33590 * C36028) / C28931;
    const double C33569 = -((C33500 * C35954) / p + (C33590 * C36030) / C28931);
    const double C36022 = C35818 * C28929;
    const double C35832 = -((C35818 * C35946) / p + (C35908 * C36024) / C28931);
    const double C35859 = -((C35818 * C35951) / p + (C35908 * C36028) / C28931);
    const double C35887 =
        C36195 - (C35818 * C35954) / p - (C35908 * C36030) / C28931;
    const double C35980 = C31016 * C28929;
    const double C31064 =
        C36193 - (C31016 * C35946) / p - (C31170 * C36024) / C28931;
    const double C31093 = -((C31016 * C35951) / p + (C31170 * C36028) / C28931);
    const double C31121 = -((C31016 * C35954) / p + (C31170 * C36030) / C28931);
    const double C36002 = C33353 * C28929;
    const double C33393 = -((C33353 * C35946) / p + (C33500 * C36024) / C28931);
    const double C33422 =
        C36193 - (C33353 * C35951) / p - (C33500 * C36028) / C28931;
    const double C33451 = -((C33353 * C35954) / p + (C33500 * C36030) / C28931);
    const double C36021 = C35673 * C28929;
    const double C35713 = -((C35673 * C35946) / p + (C35818 * C36024) / C28931);
    const double C35741 = -((C35673 * C35951) / p + (C35818 * C36028) / C28931);
    const double C35770 =
        C36193 - (C35673 * C35954) / p - (C35818 * C36030) / C28931;
    const double C35976 = C30705 * C28929;
    const double C30704 =
        C36191 - (C30705 * C35946) / p - (C31016 * C36024) / C28931;
    const double C30740 = -((C30705 * C35951) / p + (C31016 * C36028) / C28931);
    const double C30767 = -((C30705 * C35954) / p + (C31016 * C36030) / C28931);
    const double C36000 = C33047 * C28929;
    const double C33061 = -((C33047 * C35946) / p + (C33353 * C36024) / C28931);
    const double C33089 =
        C36191 - (C33047 * C35951) / p - (C33353 * C36028) / C28931;
    const double C33116 = -((C33047 * C35954) / p + (C33353 * C36030) / C28931);
    const double C36019 = C35368 * C28929;
    const double C35382 = -((C35368 * C35946) / p + (C35673 * C36024) / C28931);
    const double C35409 = -((C35368 * C35951) / p + (C35673 * C36028) / C28931);
    const double C35437 =
        C36191 - (C35368 * C35954) / p - (C35673 * C36030) / C28931;
    const double C35969 = C30115 * C28929;
    const double C30100 =
        C36184 - (C30115 * C35946) / p - (C30705 * C36024) / C28931;
    const double C30165 = -((C30115 * C35951) / p + (C30705 * C36028) / C28931);
    const double C30194 = -((C30115 * C35954) / p + (C30705 * C36030) / C28931);
    const double C35994 = C32446 * C28929;
    const double C32447 = -((C32446 * C35946) / p + (C33047 * C36024) / C28931);
    const double C32496 =
        C36184 - (C32446 * C35951) / p - (C33047 * C36028) / C28931;
    const double C32524 = -((C32446 * C35954) / p + (C33047 * C36030) / C28931);
    const double C36013 = C34770 * C28929;
    const double C34771 = -((C34770 * C35946) / p + (C35368 * C36024) / C28931);
    const double C34819 = -((C34770 * C35951) / p + (C35368 * C36028) / C28931);
    const double C34847 =
        C36184 - (C34770 * C35954) / p - (C35368 * C36030) / C28931;
    const double C35949 = C28965 * C28929;
    const double C28950 =
        C36169 - (C28965 * C35946) / p - (C30115 * C36024) / C28931;
    const double C29091 = -((C28965 * C35951) / p + (C30115 * C36028) / C28931);
    const double C29215 = -((C28965 * C35954) / p + (C30115 * C36030) / C28931);
    const double C35985 = C31338 * C28929;
    const double C31324 = -((C31338 * C35946) / p + (C32446 * C36024) / C28931);
    const double C31462 =
        C36169 - (C31338 * C35951) / p - (C32446 * C36028) / C28931;
    const double C31583 = -((C31338 * C35954) / p + (C32446 * C36030) / C28931);
    const double C36004 = C33667 * C28929;
    const double C33653 = -((C33667 * C35946) / p + (C34770 * C36024) / C28931);
    const double C33790 = -((C33667 * C35951) / p + (C34770 * C36028) / C28931);
    const double C33911 =
        C36169 - (C33667 * C35954) / p - (C34770 * C36030) / C28931;
    const double C15797 =
        C36149 - (C15812 * C35946) / p - (C28965 * C36024) / C28931;
    const double C16149 = -((C15812 * C35951) / p + (C28965 * C36028) / C28931);
    const double C16416 = -((C15812 * C35954) / p + (C28965 * C36030) / C28931);
    const double C20898 = -((C20912 * C35946) / p + (C31338 * C36024) / C28931);
    const double C21245 =
        C36149 - (C20912 * C35951) / p - (C31338 * C36028) / C28931;
    const double C21506 = -((C20912 * C35954) / p + (C31338 * C36030) / C28931);
    const double C25959 = -((C25973 * C35946) / p + (C33667 * C36024) / C28931);
    const double C26306 = -((C25973 * C35951) / p + (C33667 * C36028) / C28931);
    const double C26567 =
        C36149 - (C25973 * C35954) / p - (C33667 * C36030) / C28931;
    const double C36089 = C35982 / C28931;
    const double C36113 = C36003 / C28931;
    const double C36132 = C36022 / C28931;
    const double C36087 = C35980 / C28931;
    const double C36111 = C36002 / C28931;
    const double C36131 = C36021 / C28931;
    const double C36078 = C35976 / C28931;
    const double C36109 = C36000 / C28931;
    const double C36129 = C36019 / C28931;
    const double C36063 = C35969 / C28931;
    const double C36102 = C35994 / C28931;
    const double C36123 = C36013 / C28931;
    const double C36026 = C35949 / C28931;
    const double C29325 = -((C29215 * C35951) / p + (C30194 * C36028) / C28931);
    const double C36091 = C35985 / C28931;
    const double C31689 =
        C36208 - (C31583 * C35951) / p - (C32524 * C36028) / C28931;
    const double C36114 = C36004 / C28931;
    const double C34017 = -((C33911 * C35951) / p + (C34847 * C36028) / C28931);
    const double C15395 =
        C36143 - (C16149 * C35946) / p - (C29091 * C36024) / C28931;
    const double C15573 =
        C36144 - (C16416 * C35946) / p - (C29215 * C36024) / C28931;
    const double C15662 = -((C16416 * C35951) / p + (C29215 * C36028) / C28931);
    const double C20511 = -((C21245 * C35946) / p + (C31462 * C36024) / C28931);
    const double C20683 = -((C21506 * C35946) / p + (C31583 * C36024) / C28931);
    const double C20769 =
        C36144 - (C21506 * C35951) / p - (C31583 * C36028) / C28931;
    const double C25572 = -((C26306 * C35946) / p + (C33790 * C36024) / C28931);
    const double C25744 = -((C26567 * C35946) / p + (C33911 * C36024) / C28931);
    const double C25830 = -((C26567 * C35951) / p + (C33911 * C36028) / C28931);
    const double C36194 = C31016 - C36089;
    const double C36218 = C33353 - C36113;
    const double C36237 = C35673 - C36132;
    const double C36192 = C30705 - C36087;
    const double C36216 = C33047 - C36111;
    const double C36236 = C35368 - C36131;
    const double C36183 = C30115 - C36078;
    const double C36214 = C32446 - C36109;
    const double C36234 = C34770 - C36129;
    const double C36168 = C28965 - C36063;
    const double C36207 = C31338 - C36102;
    const double C36228 = C33667 - C36123;
    const double C36135 = C15812 - C36026;
    const double C36196 = C20912 - C36091;
    const double C36219 = C25973 - C36114;
    const double C15484 = (C29321 * C35944) / C35945 - (C15662 * C35946) / p -
                          (C29325 * C36024) / C28931;
    const double C20597 = -((C20769 * C35946) / p + (C31689 * C36024) / C28931);
    const double C25658 = -((C25830 * C35946) / p + (C34017 * C36024) / C28931);
    const double C36263 = C36194 / C35948;
    const double C36283 = C36218 / C35948;
    const double C36299 = C36237 / C35948;
    const double C36260 = C36192 / C35948;
    const double C36282 = C36216 / C35948;
    const double C36298 = C36236 / C35948;
    const double C36255 = C36183 / C35948;
    const double C36281 = C36214 / C35948;
    const double C36297 = C36234 / C35948;
    const double C36248 = C36168 / C35948;
    const double C36276 = C36207 / C35948;
    const double C36292 = C36228 / C35948;
    const double C36238 = C36135 / C35948;
    const double C36268 = C36196 / C35948;
    const double C36284 = C36219 / C35948;
    const double C31079 = (C31181 * C35944) / C35945 - (C31064 * C35946) / p -
                          (C31185 * C36024) / C28931 + C36263;
    const double C31107 =
        C36263 - ((C31093 * C35951) / p + (C31212 * C36028) / C28931);
    const double C31135 =
        C36263 - ((C31121 * C35954) / p + (C31239 * C36030) / C28931);
    const double C33407 =
        C36283 - ((C33393 * C35946) / p + (C33514 * C36024) / C28931);
    const double C33437 = (C33537 * C35944) / C35945 - (C33422 * C35951) / p -
                          (C33542 * C36028) / C28931 + C36283;
    const double C33466 =
        C36283 - ((C33451 * C35954) / p + (C33569 * C36030) / C28931);
    const double C35727 =
        C36299 - ((C35713 * C35946) / p + (C35832 * C36024) / C28931);
    const double C35755 =
        C36299 - ((C35741 * C35951) / p + (C35859 * C36028) / C28931);
    const double C35784 = (C35881 * C35944) / C35945 - (C35770 * C35954) / p -
                          (C35887 * C36030) / C28931 + C36299;
    const double C30795 = (C31060 * C35944) / C35945 - (C30704 * C35946) / p -
                          (C31064 * C36024) / C28931 + C36260;
    const double C30824 =
        C36260 - ((C30740 * C35951) / p + (C31093 * C36028) / C28931);
    const double C30866 =
        C36260 - ((C30767 * C35954) / p + (C31121 * C36030) / C28931);
    const double C33130 =
        C36282 - ((C33061 * C35946) / p + (C33393 * C36024) / C28931);
    const double C33158 = (C33417 * C35944) / C35945 - (C33089 * C35951) / p -
                          (C33422 * C36028) / C28931 + C36282;
    const double C33199 =
        C36282 - ((C33116 * C35954) / p + (C33451 * C36030) / C28931);
    const double C35451 =
        C36298 - ((C35382 * C35946) / p + (C35713 * C36024) / C28931);
    const double C35479 =
        C36298 - ((C35409 * C35951) / p + (C35741 * C36028) / C28931);
    const double C35520 = (C35764 * C35944) / C35945 - (C35437 * C35954) / p -
                          (C35770 * C36030) / C28931 + C36298;
    const double C30099 = (C30700 * C35944) / C35945 - (C30100 * C35946) / p -
                          (C30704 * C36024) / C28931 + C36255;
    const double C30151 =
        C36255 - ((C30165 * C35951) / p + (C30740 * C36028) / C28931);
    const double C30180 =
        C36255 - ((C30194 * C35954) / p + (C30767 * C36030) / C28931);
    const double C32461 =
        C36281 - ((C32447 * C35946) / p + (C33061 * C36024) / C28931);
    const double C32510 = (C33084 * C35944) / C35945 - (C32496 * C35951) / p -
                          (C33089 * C36028) / C28931 + C36281;
    const double C32538 =
        C36281 - ((C32524 * C35954) / p + (C33116 * C36030) / C28931);
    const double C34785 =
        C36297 - ((C34771 * C35946) / p + (C35382 * C36024) / C28931);
    const double C34833 =
        C36297 - ((C34819 * C35951) / p + (C35409 * C36028) / C28931);
    const double C34861 = (C35431 * C35944) / C35945 - (C34847 * C35954) / p -
                          (C35437 * C36030) / C28931 + C36297;
    const double C28935 = (C30111 * C35944) / C35945 - (C28950 * C35946) / p -
                          (C30100 * C36024) / C28931 + C36248;
    const double C28981 =
        C36248 - ((C29091 * C35951) / p + (C30165 * C36028) / C28931);
    const double C29010 =
        C36248 - ((C29215 * C35954) / p + (C30194 * C36030) / C28931);
    const double C31309 =
        C36276 - ((C31324 * C35946) / p + (C32447 * C36024) / C28931);
    const double C31352 = (C32491 * C35944) / C35945 - (C31462 * C35951) / p -
                          (C32496 * C36028) / C28931 + C36276;
    const double C31380 =
        C36276 - ((C31583 * C35954) / p + (C32524 * C36030) / C28931);
    const double C33638 =
        C36292 - ((C33653 * C35946) / p + (C34771 * C36024) / C28931);
    const double C33681 =
        C36292 - ((C33790 * C35951) / p + (C34819 * C36028) / C28931);
    const double C33709 =
        C36208 - (C33911 * C35954) / p - (C34847 * C36030) / C28931 + C36292;
    const double C12901 = (C28961 * C35944) / C35945 - (C15797 * C35946) / p -
                          (C28950 * C36024) / C28931 + C36238;
    const double C13834 =
        C36238 - ((C16149 * C35951) / p + (C29091 * C36028) / C28931);
    const double C14674 =
        C36238 - ((C16416 * C35954) / p + (C29215 * C36030) / C28931);
    const double C18096 =
        C36268 - ((C20898 * C35946) / p + (C31324 * C36024) / C28931);
    const double C19000 =
        C36143 - (C21245 * C35951) / p - (C31462 * C36028) / C28931 + C36268;
    const double C19813 =
        C36268 - ((C21506 * C35954) / p + (C31583 * C36030) / C28931);
    const double C23157 =
        C36284 - ((C25959 * C35946) / p + (C33653 * C36024) / C28931);
    const double C24061 =
        C36284 - ((C26306 * C35951) / p + (C33790 * C36028) / C28931);
    const double C24874 =
        C36144 - (C26567 * C35954) / p - (C33911 * C36030) / C28931 + C36284;
    const double C30810 = (C31075 * C35944) / C35945 - (C30795 * C35946) / p -
                          (C31079 * C36024) / C28931 +
                          (C30704 - (C31064 * C28929) / C28931) / p;
    const double C30838 = (C30740 - (C31093 * C28929) / C28931) / p -
                          ((C30824 * C35951) / p + (C31107 * C36028) / C28931);
    const double C35978 = C30866 * C28929;
    const double C30867 = -((C30866 * C35951) / p + (C31135 * C36028) / C28931);
    const double C30948 = (C30767 - (C31121 * C28929) / C28931) / p -
                          ((C30866 * C35954) / p + (C31135 * C36030) / C28931);
    const double C33144 = (C33061 - (C33393 * C28929) / C28931) / p -
                          ((C33130 * C35946) / p + (C33407 * C36024) / C28931);
    const double C33172 = (C33432 * C35944) / C35945 - (C33158 * C35951) / p -
                          (C33437 * C36028) / C28931 +
                          (C33089 - (C33422 * C28929) / C28931) / p;
    const double C36001 = C33199 * C28929;
    const double C33214 =
        C36217 - (C33199 * C35951) / p - (C33466 * C36028) / C28931;
    const double C33280 = (C33116 - (C33451 * C28929) / C28931) / p -
                          ((C33199 * C35954) / p + (C33466 * C36030) / C28931);
    const double C35465 = (C35382 - (C35713 * C28929) / C28931) / p -
                          ((C35451 * C35946) / p + (C35727 * C36024) / C28931);
    const double C35493 = (C35409 - (C35741 * C28929) / C28931) / p -
                          ((C35479 * C35951) / p + (C35755 * C36028) / C28931);
    const double C36020 = C35520 * C28929;
    const double C35534 = -((C35520 * C35951) / p + (C35784 * C36028) / C28931);
    const double C35600 = C36217 - (C35520 * C35954) / p -
                          (C35784 * C36030) / C28931 +
                          (C35437 - (C35770 * C28929) / C28931) / p;
    const double C30313 = (C30791 * C35944) / C35945 - (C30099 * C35946) / p -
                          (C30795 * C36024) / C28931 +
                          (C30100 - (C30704 * C28929) / C28931) / p;
    const double C35972 = C30151 * C28929;
    const double C30395 = (C30165 - (C30740 * C28929) / C28931) / p -
                          ((C30151 * C35951) / p + (C30824 * C36028) / C28931);
    const double C30438 =
        C36186 - (C30151 * C35946) / p - (C30824 * C36024) / C28931;
    const double C35973 = C30180 * C28929;
    const double C30467 = -((C30180 * C35951) / p + (C30866 * C36028) / C28931);
    const double C30482 =
        C36188 - (C30180 * C35946) / p - (C30866 * C36024) / C28931;
    const double C30526 = (C30194 - (C30767 * C28929) / C28931) / p -
                          ((C30180 * C35954) / p + (C30866 * C36030) / C28931);
    const double C32657 = (C32447 - (C33061 * C28929) / C28931) / p -
                          ((C32461 * C35946) / p + (C33130 * C36024) / C28931);
    const double C35996 = C32510 * C28929;
    const double C32737 = C36186 - (C32510 * C35951) / p -
                          (C33158 * C36028) / C28931 +
                          (C32496 - (C33089 * C28929) / C28931) / p;
    const double C32778 = -((C32510 * C35946) / p + (C33158 * C36024) / C28931);
    const double C35997 = C32538 * C28929;
    const double C32793 =
        C36188 - (C32538 * C35951) / p - (C33199 * C36028) / C28931;
    const double C32821 = -((C32538 * C35946) / p + (C33199 * C36024) / C28931);
    const double C32864 = (C32524 - (C33116 * C28929) / C28931) / p -
                          ((C32538 * C35954) / p + (C33199 * C36030) / C28931);
    const double C34979 = (C34771 - (C35382 * C28929) / C28931) / p -
                          ((C34785 * C35946) / p + (C35451 * C36024) / C28931);
    const double C36015 = C34833 * C28929;
    const double C35059 = (C34819 - (C35409 * C28929) / C28931) / p -
                          ((C34833 * C35951) / p + (C35479 * C36028) / C28931);
    const double C35100 = -((C34833 * C35946) / p + (C35479 * C36024) / C28931);
    const double C36016 = C34861 * C28929;
    const double C35114 = -((C34861 * C35951) / p + (C35520 * C36028) / C28931);
    const double C35142 = -((C34861 * C35946) / p + (C35520 * C36024) / C28931);
    const double C35184 = C36188 - (C34861 * C35954) / p -
                          (C35520 * C36030) / C28931 +
                          (C34847 - (C35437 * C28929) / C28931) / p;
    const double C28934 = C36167 - (C28935 * C35946) / p -
                          (C30099 * C36024) / C28931 +
                          (C28950 - (C30100 * C28929) / C28931) / p;
    const double C29063 = -((C28935 * C35954) / p + (C30099 * C36030) / C28931);
    const double C35950 = C28981 * C28929;
    const double C28980 =
        C36170 - (C28981 * C35946) / p - (C30151 * C36024) / C28931;
    const double C29105 = (C29091 - (C30165 * C28929) / C28931) / p -
                          ((C28981 * C35951) / p + (C30151 * C36028) / C28931);
    const double C29174 = -((C28981 * C35954) / p + (C30151 * C36030) / C28931);
    const double C35953 = C29010 * C28929;
    const double C29009 =
        C36171 - (C29010 * C35946) / p - (C30180 * C36024) / C28931;
    const double C29132 = -((C29010 * C35951) / p + (C30180 * C36028) / C28931);
    const double C29242 = (C29215 - (C30194 * C28929) / C28931) / p -
                          ((C29010 * C35954) / p + (C30180 * C36030) / C28931);
    const double C31310 = (C31324 - (C32447 * C28929) / C28931) / p -
                          ((C31309 * C35946) / p + (C32461 * C36024) / C28931);
    const double C31435 = -((C31309 * C35954) / p + (C32461 * C36030) / C28931);
    const double C35986 = C31352 * C28929;
    const double C31353 = -((C31352 * C35946) / p + (C32510 * C36024) / C28931);
    const double C31476 = C36170 - (C31352 * C35951) / p -
                          (C32510 * C36028) / C28931 +
                          (C31462 - (C32496 * C28929) / C28931) / p;
    const double C31543 = -((C31352 * C35954) / p + (C32510 * C36030) / C28931);
    const double C35987 = C31380 * C28929;
    const double C31381 = -((C31380 * C35946) / p + (C32538 * C36024) / C28931);
    const double C31503 =
        C36171 - (C31380 * C35951) / p - (C32538 * C36028) / C28931;
    const double C31610 = (C31583 - (C32524 * C28929) / C28931) / p -
                          ((C31380 * C35954) / p + (C32538 * C36030) / C28931);
    const double C33639 = (C33653 - (C34771 * C28929) / C28931) / p -
                          ((C33638 * C35946) / p + (C34785 * C36024) / C28931);
    const double C33763 =
        C36167 - (C33638 * C35954) / p - (C34785 * C36030) / C28931;
    const double C36005 = C33681 * C28929;
    const double C33682 = -((C33681 * C35946) / p + (C34833 * C36024) / C28931);
    const double C33804 = (C33790 - (C34819 * C28929) / C28931) / p -
                          ((C33681 * C35951) / p + (C34833 * C36028) / C28931);
    const double C33871 =
        C36170 - (C33681 * C35954) / p - (C34833 * C36030) / C28931;
    const double C36006 = C33709 * C28929;
    const double C33710 = -((C33709 * C35946) / p + (C34861 * C36024) / C28931);
    const double C33831 = -((C33709 * C35951) / p + (C34861 * C36028) / C28931);
    const double C33938 = C36171 - (C33709 * C35954) / p -
                          (C34861 * C36030) / C28931 +
                          (C33911 - (C34847 * C28929) / C28931) / p;
    const double C12884 = C36134 - (C12901 * C35946) / p -
                          (C28935 * C36024) / C28931 +
                          (C15797 - (C28950 * C28929) / C28931) / p;
    const double C13173 = -((C12901 * C35951) / p + (C28935 * C36028) / C28931);
    const double C13367 = -((C12901 * C35954) / p + (C28935 * C36030) / C28931);
    const double C13818 =
        C36138 - (C13834 * C35946) / p - (C28981 * C36024) / C28931;
    const double C14022 = (C16149 - (C29091 * C28929) / C28931) / p -
                          ((C13834 * C35951) / p + (C28981 * C36028) / C28931);
    const double C14210 = -((C13834 * C35954) / p + (C28981 * C36030) / C28931);
    const double C14658 =
        C36140 - (C14674 * C35946) / p - (C29010 * C36024) / C28931;
    const double C14841 = -((C14674 * C35951) / p + (C29010 * C36028) / C28931);
    const double C14950 = (C16416 - (C29215 * C28929) / C28931) / p -
                          ((C14674 * C35954) / p + (C29010 * C36030) / C28931);
    const double C18080 = (C20898 - (C31324 * C28929) / C28931) / p -
                          ((C18096 * C35946) / p + (C31309 * C36024) / C28931);
    const double C18360 =
        C36134 - (C18096 * C35951) / p - (C31309 * C36028) / C28931;
    const double C18548 = -((C18096 * C35954) / p + (C31309 * C36030) / C28931);
    const double C18985 = -((C19000 * C35946) / p + (C31352 * C36024) / C28931);
    const double C19182 = C36138 - (C19000 * C35951) / p -
                          (C31352 * C36028) / C28931 +
                          (C21245 - (C31462 * C28929) / C28931) / p;
    const double C19364 = -((C19000 * C35954) / p + (C31352 * C36030) / C28931);
    const double C19798 = -((C19813 * C35946) / p + (C31380 * C36024) / C28931);
    const double C19975 =
        C36140 - (C19813 * C35951) / p - (C31380 * C36028) / C28931;
    const double C20080 = (C21506 - (C31583 * C28929) / C28931) / p -
                          ((C19813 * C35954) / p + (C31380 * C36030) / C28931);
    const double C23141 = (C25959 - (C33653 * C28929) / C28931) / p -
                          ((C23157 * C35946) / p + (C33638 * C36024) / C28931);
    const double C23421 = -((C23157 * C35951) / p + (C33638 * C36028) / C28931);
    const double C23609 =
        C36134 - (C23157 * C35954) / p - (C33638 * C36030) / C28931;
    const double C24046 = -((C24061 * C35946) / p + (C33681 * C36024) / C28931);
    const double C24243 = (C26306 - (C33790 * C28929) / C28931) / p -
                          ((C24061 * C35951) / p + (C33681 * C36028) / C28931);
    const double C24425 =
        C36138 - (C24061 * C35954) / p - (C33681 * C36030) / C28931;
    const double C24859 = -((C24874 * C35946) / p + (C33709 * C36024) / C28931);
    const double C25036 = -((C24874 * C35951) / p + (C33709 * C36028) / C28931);
    const double C25141 = C36140 - (C24874 * C35954) / p -
                          (C33709 * C36030) / C28931 +
                          (C26567 - (C33911 * C28929) / C28931) / p;
    const double C36082 = C35978 / C28931;
    const double C36110 = C36001 / C28931;
    const double C36130 = C36020 / C28931;
    const double C35971 = C30313 * C28929;
    const double C30328 = C36185 - (C30313 * C35946) / p -
                          (C30810 * C36024) / C28931 +
                          (3 * (C30099 - (C30795 * C28929) / C28931)) / C35948;
    const double C30511 = -((C30313 * C35951) / p + (C30810 * C36028) / C28931);
    const double C30568 = -((C30313 * C35954) / p + (C30810 * C36030) / C28931);
    const double C36072 = C35972 / C28931;
    const double C35974 = C30395 * C28929;
    const double C30410 = (3 * (C30151 - (C30824 * C28929) / C28931)) / C35948 -
                          ((C30395 * C35951) / p + (C30838 * C36028) / C28931);
    const double C30497 =
        C36189 - (C30395 * C35946) / p - (C30838 * C36024) / C28931;
    const double C30662 = -((C30395 * C35954) / p + (C30838 * C36030) / C28931);
    const double C36073 = C35973 / C28931;
    const double C35975 = C30526 * C28929;
    const double C30583 =
        C36190 - (C30526 * C35946) / p - (C30948 * C36024) / C28931;
    const double C30676 = -((C30526 * C35951) / p + (C30948 * C36028) / C28931);
    const double C35995 = C32657 * C28929;
    const double C32671 = (3 * (C32461 - (C33130 * C28929) / C28931)) / C35948 -
                          ((C32657 * C35946) / p + (C33144 * C36024) / C28931);
    const double C32850 =
        C36185 - (C32657 * C35951) / p - (C33144 * C36028) / C28931;
    const double C32905 = -((C32657 * C35954) / p + (C33144 * C36030) / C28931);
    const double C36105 = C35996 / C28931;
    const double C35998 = C32737 * C28929;
    const double C32764 = C36189 - (C32737 * C35951) / p -
                          (C33172 * C36028) / C28931 +
                          (3 * (C32510 - (C33158 * C28929) / C28931)) / C35948;
    const double C32835 = -((C32737 * C35946) / p + (C33172 * C36024) / C28931);
    const double C32998 = -((C32737 * C35954) / p + (C33172 * C36030) / C28931);
    const double C36106 = C35997 / C28931;
    const double C35999 = C32864 * C28929;
    const double C32919 = -((C32864 * C35946) / p + (C33280 * C36024) / C28931);
    const double C33013 =
        C36190 - (C32864 * C35951) / p - (C33280 * C36028) / C28931;
    const double C36014 = C34979 * C28929;
    const double C34993 = (3 * (C34785 - (C35451 * C28929) / C28931)) / C35948 -
                          ((C34979 * C35946) / p + (C35465 * C36024) / C28931);
    const double C35170 = -((C34979 * C35951) / p + (C35465 * C36028) / C28931);
    const double C35226 =
        C36185 - (C34979 * C35954) / p - (C35465 * C36030) / C28931;
    const double C36125 = C36015 / C28931;
    const double C36017 = C35059 * C28929;
    const double C35086 = (3 * (C34833 - (C35479 * C28929) / C28931)) / C35948 -
                          ((C35059 * C35951) / p + (C35493 * C36028) / C28931);
    const double C35156 = -((C35059 * C35946) / p + (C35493 * C36024) / C28931);
    const double C35320 =
        C36189 - (C35059 * C35954) / p - (C35493 * C36030) / C28931;
    const double C36126 = C36016 / C28931;
    const double C36018 = C35184 * C28929;
    const double C35240 = -((C35184 * C35946) / p + (C35600 * C36024) / C28931);
    const double C35334 = -((C35184 * C35951) / p + (C35600 * C36028) / C28931);
    const double C35956 = C28934 * C28929;
    const double C29367 = C36172 - (C28934 * C35946) / p -
                          (C30313 * C36024) / C28931 +
                          (3 * (C28935 - (C30099 * C28929) / C28931)) / C35948;
    const double C29444 = -((C28934 * C35951) / p + (C30313 * C36028) / C28931);
    const double C29485 = -((C28934 * C35954) / p + (C30313 * C36030) / C28931);
    const double C36027 = C35950 / C28931;
    const double C35965 = C29105 * C28929;
    const double C29565 =
        C36175 - (C29105 * C35946) / p - (C30395 * C36024) / C28931;
    const double C29796 = -((C29105 * C35954) / p + (C30395 * C36030) / C28931);
    const double C36029 = C35953 / C28931;
    const double C35967 = C29242 * C28929;
    const double C29695 =
        C36180 - (C29242 * C35946) / p - (C30526 * C36024) / C28931;
    const double C29918 = -((C29242 * C35951) / p + (C30526 * C36028) / C28931);
    const double C35988 = C31310 * C28929;
    const double C31729 = (3 * (C31309 - (C32461 * C28929) / C28931)) / C35948 -
                          ((C31310 * C35946) / p + (C32657 * C36024) / C28931);
    const double C31806 =
        C36172 - (C31310 * C35951) / p - (C32657 * C36028) / C28931;
    const double C31847 = -((C31310 * C35954) / p + (C32657 * C36030) / C28931);
    const double C36092 = C35986 / C28931;
    const double C35990 = C31476 * C28929;
    const double C31928 = -((C31476 * C35946) / p + (C32737 * C36024) / C28931);
    const double C32152 = -((C31476 * C35954) / p + (C32737 * C36030) / C28931);
    const double C36093 = C35987 / C28931;
    const double C35992 = C31610 * C28929;
    const double C32055 = -((C31610 * C35946) / p + (C32864 * C36024) / C28931);
    const double C32272 =
        C36180 - (C31610 * C35951) / p - (C32864 * C36028) / C28931;
    const double C36007 = C33639 * C28929;
    const double C34057 = (3 * (C33638 - (C34785 * C28929) / C28931)) / C35948 -
                          ((C33639 * C35946) / p + (C34979 * C36024) / C28931);
    const double C34132 = -((C33639 * C35951) / p + (C34979 * C36028) / C28931);
    const double C34173 =
        C36172 - (C33639 * C35954) / p - (C34979 * C36030) / C28931;
    const double C36115 = C36005 / C28931;
    const double C36009 = C33804 * C28929;
    const double C34252 = -((C33804 * C35946) / p + (C35059 * C36024) / C28931);
    const double C34476 =
        C36175 - (C33804 * C35954) / p - (C35059 * C36030) / C28931;
    const double C36116 = C36006 / C28931;
    const double C36011 = C33938 * C28929;
    const double C34380 = -((C33938 * C35946) / p + (C35184 * C36024) / C28931);
    const double C34596 = -((C33938 * C35951) / p + (C35184 * C36028) / C28931);
    const double C12865 = C36133 - (C12884 * C35946) / p -
                          (C28934 * C36024) / C28931 +
                          (3 * (C12901 - (C28935 * C28929) / C28931)) / C35948;
    const double C13542 = -((C12884 * C35951) / p + (C28934 * C36028) / C28931);
    const double C13632 = -((C12884 * C35954) / p + (C28934 * C36030) / C28931);
    const double C13725 = -((C13367 * C35951) / p + (C29063 * C36028) / C28931);
    const double C14386 =
        C36139 - (C14022 * C35946) / p - (C29105 * C36024) / C28931;
    const double C14566 = -((C14022 * C35954) / p + (C29105 * C36030) / C28931);
    const double C14476 = (C29170 * C35944) / C35945 - (C14210 * C35946) / p -
                          (C29174 * C36024) / C28931;
    const double C15122 =
        C36141 - (C14841 * C35946) / p - (C29132 * C36024) / C28931;
    const double C15212 =
        C36142 - (C14950 * C35946) / p - (C29242 * C36024) / C28931;
    const double C15303 = -((C14950 * C35951) / p + (C29242 * C36028) / C28931);
    const double C18063 = (3 * (C18096 - (C31309 * C28929) / C28931)) / C35948 -
                          ((C18080 * C35946) / p + (C31310 * C36024) / C28931);
    const double C18718 =
        C36133 - (C18080 * C35951) / p - (C31310 * C36028) / C28931;
    const double C18805 = -((C18080 * C35954) / p + (C31310 * C36030) / C28931);
    const double C18895 = (C31430 * C35944) / C35945 - (C18548 * C35951) / p -
                          (C31435 * C36028) / C28931;
    const double C19535 = -((C19182 * C35946) / p + (C31476 * C36024) / C28931);
    const double C19709 = -((C19182 * C35954) / p + (C31476 * C36030) / C28931);
    const double C19622 = -((C19364 * C35946) / p + (C31543 * C36024) / C28931);
    const double C20247 = -((C19975 * C35946) / p + (C31503 * C36024) / C28931);
    const double C20334 = -((C20080 * C35946) / p + (C31610 * C36024) / C28931);
    const double C20422 =
        C36142 - (C20080 * C35951) / p - (C31610 * C36028) / C28931;
    const double C23124 = (3 * (C23157 - (C33638 * C28929) / C28931)) / C35948 -
                          ((C23141 * C35946) / p + (C33639 * C36024) / C28931);
    const double C23779 = -((C23141 * C35951) / p + (C33639 * C36028) / C28931);
    const double C23866 =
        C36133 - (C23141 * C35954) / p - (C33639 * C36030) / C28931;
    const double C23956 = -((C23609 * C35951) / p + (C33763 * C36028) / C28931);
    const double C24596 = -((C24243 * C35946) / p + (C33804 * C36024) / C28931);
    const double C24770 =
        C36139 - (C24243 * C35954) / p - (C33804 * C36030) / C28931;
    const double C24683 = -((C24425 * C35946) / p + (C33871 * C36024) / C28931);
    const double C25308 = -((C25036 * C35946) / p + (C33831 * C36024) / C28931);
    const double C25395 = -((C25141 * C35946) / p + (C33938 * C36024) / C28931);
    const double C25483 = -((C25141 * C35951) / p + (C33938 * C36028) / C28931);
    const double C36187 = C30180 - C36082;
    const double C36215 = C32538 - C36110;
    const double C36235 = C34861 - C36130;
    const double C36069 = C35971 / C28931;
    const double C36177 = C28981 - C36072;
    const double C36074 = C35974 / C28931;
    const double C36178 = C29010 - C36073;
    const double C36077 = C35975 / C28931;
    const double C36104 = C35995 / C28931;
    const double C36210 = C31352 - C36105;
    const double C36107 = C35998 / C28931;
    const double C36211 = C31380 - C36106;
    const double C36108 = C35999 / C28931;
    const double C36124 = C36014 / C28931;
    const double C36230 = C33681 - C36125;
    const double C36127 = C36017 / C28931;
    const double C36231 = C33709 - C36126;
    const double C36128 = C36018 / C28931;
    const double C36039 = C35956 / C28931;
    const double C35957 = C29367 * C28929;
    const double C29430 = -((C29367 * C35951) / p + (C30328 * C36028) / C28931);
    const double C29471 = -((C29367 * C35954) / p + (C30328 * C36030) / C28931);
    const double C36136 = C13834 - C36027;
    const double C36047 = C35965 / C28931;
    const double C36137 = C14674 - C36029;
    const double C36050 = C35967 / C28931;
    const double C36094 = C35988 / C28931;
    const double C35989 = C31729 * C28929;
    const double C31791 =
        C36173 - (C31729 * C35951) / p - (C32671 * C36028) / C28931;
    const double C31833 = -((C31729 * C35954) / p + (C32671 * C36030) / C28931);
    const double C36197 = C19000 - C36092;
    const double C36098 = C35990 / C28931;
    const double C36198 = C19813 - C36093;
    const double C36100 = C35992 / C28931;
    const double C36117 = C36007 / C28931;
    const double C36008 = C34057 * C28929;
    const double C34118 = -((C34057 * C35951) / p + (C34993 * C36028) / C28931);
    const double C34159 =
        C36173 - (C34057 * C35954) / p - (C34993 * C36030) / C28931;
    const double C36220 = C24061 - C36115;
    const double C36119 = C36009 / C28931;
    const double C36221 = C24874 - C36116;
    const double C36121 = C36011 / C28931;
    const double C15827 = -((C12865 * C35951) / p + (C29367 * C36028) / C28931);
    const double C15914 = -((C12865 * C35954) / p + (C29367 * C36030) / C28931);
    const double C16074 = -((C13632 * C35951) / p + (C29485 * C36028) / C28931);
    const double C16935 =
        C36159 - (C14566 * C35946) / p - (C29796 * C36024) / C28931;
    const double C17620 =
        C36164 - (C15303 * C35946) / p - (C29918 * C36024) / C28931;
    const double C20927 =
        C36145 - (C18063 * C35951) / p - (C31729 * C36028) / C28931;
    const double C21014 = -((C18063 * C35954) / p + (C31729 * C36030) / C28931);
    const double C21174 =
        C36202 - (C18805 * C35951) / p - (C31847 * C36028) / C28931;
    const double C22017 = -((C19709 * C35946) / p + (C32152 * C36024) / C28931);
    const double C22692 = -((C20422 * C35946) / p + (C32272 * C36024) / C28931);
    const double C25988 = -((C23124 * C35951) / p + (C34057 * C36028) / C28931);
    const double C26075 =
        C36145 - (C23124 * C35954) / p - (C34057 * C36030) / C28931;
    const double C26235 = -((C23866 * C35951) / p + (C34173 * C36028) / C28931);
    const double C27078 = -((C24770 * C35946) / p + (C34476 * C36024) / C28931);
    const double C27750 = -((C25483 * C35946) / p + (C34596 * C36024) / C28931);
    const double C30453 =
        C36187 / C35948 - ((C30467 * C35951) / p + (C30867 * C36028) / C28931);
    const double C30541 = (3 * C36187) / C35948 -
                          ((C30526 * C35954) / p + (C30948 * C36030) / C28931);
    const double C32807 = (C33209 * C35944) / C35945 - (C32793 * C35951) / p -
                          (C33214 * C36028) / C28931 + C36215 / C35948;
    const double C32891 = (3 * C36215) / C35948 -
                          ((C32864 * C35954) / p + (C33280 * C36030) / C28931);
    const double C35128 =
        C36235 / C35948 - ((C35114 * C35951) / p + (C35534 * C36028) / C28931);
    const double C35211 = C36190 - (C35184 * C35954) / p -
                          (C35600 * C36030) / C28931 + (3 * C36235) / C35948;
    const double C36174 = C28934 - C36069;
    const double C29581 = (3 * C36177) / C35948 -
                          ((C29105 * C35951) / p + (C30395 * C36028) / C28931);
    const double C29595 = (C30434 * C35944) / C35945 - (C28980 * C35946) / p -
                          (C30438 * C36024) / C28931 + C36177 / C35948;
    const double C36179 = C29105 - C36074;
    const double C36251 = C36178 / C35948;
    const double C29711 = (3 * C36178) / C35948 -
                          ((C29242 * C35954) / p + (C30526 * C36030) / C28931);
    const double C36182 = C29242 - C36077;
    const double C36209 = C31310 - C36104;
    const double C31942 = C36175 - (C31476 * C35951) / p -
                          (C32737 * C36028) / C28931 + (3 * C36210) / C35948;
    const double C31957 =
        C36210 / C35948 - ((C31353 * C35946) / p + (C32778 * C36024) / C28931);
    const double C36212 = C31476 - C36107;
    const double C36277 = C36211 / C35948;
    const double C32069 = (3 * C36211) / C35948 -
                          ((C31610 * C35954) / p + (C32864 * C36030) / C28931);
    const double C36213 = C31610 - C36108;
    const double C36229 = C33639 - C36124;
    const double C34266 = (3 * C36230) / C35948 -
                          ((C33804 * C35951) / p + (C35059 * C36028) / C28931);
    const double C34282 =
        C36230 / C35948 - ((C33682 * C35946) / p + (C35100 * C36024) / C28931);
    const double C36232 = C33804 - C36127;
    const double C36293 = C36231 / C35948;
    const double C34394 = C36180 - (C33938 * C35954) / p -
                          (C35184 * C36030) / C28931 + (3 * C36231) / C35948;
    const double C36233 = C33938 - C36128;
    const double C36146 = C12884 - C36039;
    const double C36041 = C35957 / C28931;
    const double C13154 = (C28976 * C35944) / C35945 - (C13818 * C35946) / p -
                          (C28980 * C36024) / C28931 + C36136 / C35948;
    const double C14004 = (3 * C36136) / C35948 -
                          ((C14022 * C35951) / p + (C29105 * C36028) / C28931);
    const double C36152 = C14022 - C36047;
    const double C36239 = C36137 / C35948;
    const double C14932 = (3 * C36137) / C35948 -
                          ((C14950 * C35954) / p + (C29242 * C36030) / C28931);
    const double C36155 = C14950 - C36050;
    const double C36199 = C18080 - C36094;
    const double C36095 = C35989 / C28931;
    const double C18342 =
        C36197 / C35948 - ((C18985 * C35946) / p + (C31353 * C36024) / C28931);
    const double C19165 = C36139 - (C19182 * C35951) / p -
                          (C31476 * C36028) / C28931 + (3 * C36197) / C35948;
    const double C36203 = C19182 - C36098;
    const double C36269 = C36198 / C35948;
    const double C20063 = (3 * C36198) / C35948 -
                          ((C20080 * C35954) / p + (C31610 * C36030) / C28931);
    const double C36205 = C20080 - C36100;
    const double C36222 = C23141 - C36117;
    const double C36118 = C36008 / C28931;
    const double C23403 =
        C36220 / C35948 - ((C24046 * C35946) / p + (C33682 * C36024) / C28931);
    const double C24226 = (3 * C36220) / C35948 -
                          ((C24243 * C35951) / p + (C33804 * C36028) / C28931);
    const double C36224 = C24243 - C36119;
    const double C36285 = C36221 / C35948;
    const double C25124 = C36142 - (C25141 * C35954) / p -
                          (C33938 * C36030) / C28931 + (3 * C36221) / C35948;
    const double C36226 = C25141 - C36121;
    const double C16059 = -((C15914 * C35951) / p + (C29471 * C36028) / C28931);
    const double C21159 =
        C36201 - (C21014 * C35951) / p - (C31833 * C36028) / C28931;
    const double C26220 = -((C26075 * C35951) / p + (C34159 * C36028) / C28931);
    const double C36253 = C36174 / C35948;
    const double C29382 = C36173 - (C29367 * C35946) / p -
                          (C30328 * C36024) / C28931 + (2 * C36174) / p;
    const double C35966 = C29581 * C28929;
    const double C29580 =
        C36176 - (C29581 * C35946) / p - (C30410 * C36024) / C28931;
    const double C29850 = -((C29581 * C35954) / p + (C30410 * C36030) / C28931);
    const double C36252 = C36179 / C35948;
    const double C29823 =
        (2 * C36179) / p - ((C29581 * C35951) / p + (C30410 * C36028) / C28931);
    const double C29611 =
        C36251 - ((C29132 * C35951) / p + (C30467 * C36028) / C28931);
    const double C29625 = (C30478 * C35944) / C35945 - (C29009 * C35946) / p -
                          (C30482 * C36024) / C28931 + C36251;
    const double C35968 = C29711 * C28929;
    const double C29710 =
        C36181 - (C29711 * C35946) / p - (C30541 * C36024) / C28931;
    const double C29932 = -((C29711 * C35951) / p + (C30541 * C36028) / C28931);
    const double C36254 = C36182 / C35948;
    const double C30043 =
        (2 * C36182) / p - ((C29711 * C35954) / p + (C30541 * C36030) / C28931);
    const double C36279 = C36209 / C35948;
    const double C31743 =
        (2 * C36209) / p - ((C31729 * C35946) / p + (C32671 * C36024) / C28931);
    const double C35991 = C31942 * C28929;
    const double C31943 = -((C31942 * C35946) / p + (C32764 * C36024) / C28931);
    const double C32206 = -((C31942 * C35954) / p + (C32764 * C36030) / C28931);
    const double C36278 = C36212 / C35948;
    const double C32179 = C36176 - (C31942 * C35951) / p -
                          (C32764 * C36028) / C28931 + (2 * C36212) / p;
    const double C31971 = (C32788 * C35944) / C35945 - (C31503 * C35951) / p -
                          (C32793 * C36028) / C28931 + C36277;
    const double C31987 =
        C36277 - ((C31381 * C35946) / p + (C32821 * C36024) / C28931);
    const double C35993 = C32069 * C28929;
    const double C32070 = -((C32069 * C35946) / p + (C32891 * C36024) / C28931);
    const double C32286 =
        C36181 - (C32069 * C35951) / p - (C32891 * C36028) / C28931;
    const double C36280 = C36213 / C35948;
    const double C32393 =
        (2 * C36213) / p - ((C32069 * C35954) / p + (C32891 * C36030) / C28931);
    const double C36295 = C36229 / C35948;
    const double C34071 =
        (2 * C36229) / p - ((C34057 * C35946) / p + (C34993 * C36024) / C28931);
    const double C36010 = C34266 * C28929;
    const double C34267 = -((C34266 * C35946) / p + (C35086 * C36024) / C28931);
    const double C34530 =
        C36176 - (C34266 * C35954) / p - (C35086 * C36030) / C28931;
    const double C36294 = C36232 / C35948;
    const double C34503 =
        (2 * C36232) / p - ((C34266 * C35951) / p + (C35086 * C36028) / C28931);
    const double C34296 =
        C36293 - ((C33831 * C35951) / p + (C35114 * C36028) / C28931);
    const double C34311 =
        C36293 - ((C33710 * C35946) / p + (C35142 * C36024) / C28931);
    const double C36012 = C34394 * C28929;
    const double C34395 = -((C34394 * C35946) / p + (C35211 * C36024) / C28931);
    const double C34610 = -((C34394 * C35951) / p + (C35211 * C36028) / C28931);
    const double C36296 = C36233 / C35948;
    const double C34717 = C36181 - (C34394 * C35954) / p -
                          (C35211 * C36030) / C28931 + (2 * C36233) / p;
    const double C36243 = C36146 / C35948;
    const double C15765 = C36145 - (C12865 * C35946) / p -
                          (C29367 * C36024) / C28931 + (2 * C36146) / p;
    const double C36148 = C12865 - C36041;
    const double C16224 = -((C13154 * C35954) / p + (C29595 * C36030) / C28931);
    const double C16836 =
        C36158 - (C14004 * C35946) / p - (C29581 * C36024) / C28931;
    const double C17068 = -((C14004 * C35954) / p + (C29581 * C36030) / C28931);
    const double C36244 = C36152 / C35948;
    const double C17038 =
        (2 * C36152) / p - ((C14004 * C35951) / p + (C29581 * C36028) / C28931);
    const double C13348 = (C29005 * C35944) / C35945 - (C14658 * C35946) / p -
                          (C29009 * C36024) / C28931 + C36239;
    const double C14192 =
        C36239 - ((C14841 * C35951) / p + (C29132 * C36028) / C28931);
    const double C17564 =
        C36163 - (C14932 * C35946) / p - (C29711 * C36024) / C28931;
    const double C17665 = -((C14932 * C35951) / p + (C29711 * C36028) / C28931);
    const double C36246 = C36155 / C35948;
    const double C17796 =
        (2 * C36155) / p - ((C14932 * C35954) / p + (C29711 * C36030) / C28931);
    const double C36271 = C36199 / C35948;
    const double C20868 =
        (2 * C36199) / p - ((C18063 * C35946) / p + (C31729 * C36024) / C28931);
    const double C36200 = C18063 - C36095;
    const double C21318 = -((C18342 * C35954) / p + (C31957 * C36030) / C28931);
    const double C21918 = -((C19165 * C35946) / p + (C31942 * C36024) / C28931);
    const double C22147 = -((C19165 * C35954) / p + (C31942 * C36030) / C28931);
    const double C36272 = C36203 / C35948;
    const double C22116 = C36158 - (C19165 * C35951) / p -
                          (C31942 * C36028) / C28931 + (2 * C36203) / p;
    const double C18530 =
        C36269 - ((C19798 * C35946) / p + (C31381 * C36024) / C28931);
    const double C19347 =
        C36141 - (C19975 * C35951) / p - (C31503 * C36028) / C28931 + C36269;
    const double C22636 = -((C20063 * C35946) / p + (C32069 * C36024) / C28931);
    const double C22735 =
        C36163 - (C20063 * C35951) / p - (C32069 * C36028) / C28931;
    const double C36274 = C36205 / C35948;
    const double C22863 =
        (2 * C36205) / p - ((C20063 * C35954) / p + (C32069 * C36030) / C28931);
    const double C36287 = C36222 / C35948;
    const double C25929 =
        (2 * C36222) / p - ((C23124 * C35946) / p + (C34057 * C36024) / C28931);
    const double C36223 = C23124 - C36118;
    const double C26379 = (C34276 * C35944) / C35945 - (C23403 * C35954) / p -
                          (C34282 * C36030) / C28931;
    const double C26979 = -((C24226 * C35946) / p + (C34266 * C36024) / C28931);
    const double C27207 =
        C36158 - (C24226 * C35954) / p - (C34266 * C36030) / C28931;
    const double C36288 = C36224 / C35948;
    const double C27177 =
        (2 * C36224) / p - ((C24226 * C35951) / p + (C34266 * C36028) / C28931);
    const double C23591 =
        C36285 - ((C24859 * C35946) / p + (C33710 * C36024) / C28931);
    const double C24408 =
        C36285 - ((C25036 * C35951) / p + (C33831 * C36028) / C28931);
    const double C27694 = -((C25124 * C35946) / p + (C34394 * C36024) / C28931);
    const double C27793 = -((C25124 * C35951) / p + (C34394 * C36028) / C28931);
    const double C36290 = C36226 / C35948;
    const double C27920 = C36163 - (C25124 * C35954) / p -
                          (C34394 * C36030) / C28931 + (2 * C36226) / p;
    const double C29654 =
        C36253 - ((C29444 * C35951) / p + (C30511 * C36028) / C28931);
    const double C29725 =
        C36253 - ((C29485 * C35954) / p + (C30568 * C36030) / C28931);
    const double C36048 = C35966 / C28931;
    const double C29640 = (C30493 * C35944) / C35945 - (C29565 * C35946) / p -
                          (C30497 * C36024) / C28931 + C36252;
    const double C29947 =
        C36252 - ((C29796 * C35954) / p + (C30662 * C36030) / C28931);
    const double C29610 = (C30449 * C35944) / C35945 - (C29611 * C35946) / p -
                          (C30453 * C36024) / C28931;
    const double C36051 = C35968 / C28931;
    const double C29740 = (C30579 * C35944) / C35945 - (C29695 * C35946) / p -
                          (C30583 * C36024) / C28931 + C36254;
    const double C29962 =
        C36254 - ((C29918 * C35951) / p + (C30676 * C36028) / C28931);
    const double C32015 = (C32845 * C35944) / C35945 - (C31806 * C35951) / p -
                          (C32850 * C36028) / C28931 + C36279;
    const double C32085 =
        C36279 - ((C31847 * C35954) / p + (C32905 * C36030) / C28931);
    const double C36099 = C35991 / C28931;
    const double C32001 =
        C36278 - ((C31928 * C35946) / p + (C32835 * C36024) / C28931);
    const double C32300 =
        C36278 - ((C32152 * C35954) / p + (C32998 * C36030) / C28931);
    const double C31972 = -((C31971 * C35946) / p + (C32807 * C36024) / C28931);
    const double C36101 = C35993 / C28931;
    const double C32099 =
        C36280 - ((C32055 * C35946) / p + (C32919 * C36024) / C28931);
    const double C32314 = (C33008 * C35944) / C35945 - (C32272 * C35951) / p -
                          (C33013 * C36028) / C28931 + C36280;
    const double C34340 =
        C36295 - ((C34132 * C35951) / p + (C35170 * C36028) / C28931);
    const double C34409 = (C35220 * C35944) / C35945 - (C34173 * C35954) / p -
                          (C35226 * C36030) / C28931 + C36295;
    const double C36120 = C36010 / C28931;
    const double C34325 =
        C36294 - ((C34252 * C35946) / p + (C35156 * C36024) / C28931);
    const double C34624 = (C35314 * C35944) / C35945 - (C34476 * C35954) / p -
                          (C35320 * C36030) / C28931 + C36294;
    const double C34297 = -((C34296 * C35946) / p + (C35128 * C36024) / C28931);
    const double C36122 = C36012 / C28931;
    const double C34423 =
        C36296 - ((C34380 * C35946) / p + (C35240 * C36024) / C28931);
    const double C34638 =
        C36296 - ((C34596 * C35951) / p + (C35334 * C36028) / C28931);
    const double C15871 =
        C36243 - ((C13542 * C35951) / p + (C29444 * C36028) / C28931);
    const double C15958 =
        C36243 - ((C13632 * C35954) / p + (C29485 * C36030) / C28931);
    const double C16001 = -((C15765 * C35951) / p + (C29382 * C36028) / C28931);
    const double C16030 = -((C15765 * C35954) / p + (C29382 * C36030) / C28931);
    const double C36242 = C36148 / C35948;
    const double C15781 = C36147 - (C15765 * C35946) / p -
                          (C29382 * C36024) / C28931 + (5 * C36148) / C35948;
    const double C17128 =
        C36161 - (C17068 * C35946) / p - (C29850 * C36024) / C28931;
    const double C16194 = (C29561 * C35944) / C35945 - (C14386 * C35946) / p -
                          (C29565 * C36024) / C28931 + C36244;
    const double C17098 =
        C36244 - ((C14566 * C35954) / p + (C29796 * C36030) / C28931);
    const double C17113 =
        C36160 - (C17038 * C35946) / p - (C29823 * C36024) / C28931;
    const double C17143 = -((C17038 * C35954) / p + (C29823 * C36030) / C28931);
    const double C16254 = -((C13348 * C35951) / p + (C29625 * C36028) / C28931);
    const double C16892 = (C29778 * C35944) / C35945 - (C14192 * C35946) / p -
                          (C29611 * C36024) / C28931;
    const double C17826 =
        C36165 - (C17665 * C35946) / p - (C29932 * C36024) / C28931;
    const double C16517 = (C29691 * C35944) / C35945 - (C15212 * C35946) / p -
                          (C29695 * C36024) / C28931 + C36246;
    const double C17302 =
        C36246 - ((C15303 * C35951) / p + (C29918 * C36028) / C28931);
    const double C17855 =
        C36166 - (C17796 * C35946) / p - (C30043 * C36024) / C28931;
    const double C17870 = -((C17796 * C35951) / p + (C30043 * C36028) / C28931);
    const double C20971 = (C31801 * C35944) / C35945 - (C18718 * C35951) / p -
                          (C31806 * C36028) / C28931 + C36271;
    const double C21058 =
        C36271 - ((C18805 * C35954) / p + (C31847 * C36030) / C28931);
    const double C21101 =
        C36147 - (C20868 * C35951) / p - (C31743 * C36028) / C28931;
    const double C21130 = -((C20868 * C35954) / p + (C31743 * C36030) / C28931);
    const double C36270 = C36200 / C35948;
    const double C20883 = (5 * C36200) / C35948 -
                          ((C20868 * C35946) / p + (C31743 * C36024) / C28931);
    const double C22207 = -((C22147 * C35946) / p + (C32206 * C36024) / C28931);
    const double C21288 =
        C36272 - ((C19535 * C35946) / p + (C31928 * C36024) / C28931);
    const double C22177 =
        C36272 - ((C19709 * C35954) / p + (C32152 * C36030) / C28931);
    const double C22192 = -((C22116 * C35946) / p + (C32179 * C36024) / C28931);
    const double C22222 = -((C22116 * C35954) / p + (C32179 * C36030) / C28931);
    const double C21348 = (C31982 * C35944) / C35945 - (C18530 * C35951) / p -
                          (C31987 * C36028) / C28931;
    const double C21974 = -((C19347 * C35946) / p + (C31971 * C36024) / C28931);
    const double C22893 = -((C22735 * C35946) / p + (C32286 * C36024) / C28931);
    const double C21605 =
        C36274 - ((C20334 * C35946) / p + (C32055 * C36024) / C28931);
    const double C22378 =
        C36164 - (C20422 * C35951) / p - (C32272 * C36028) / C28931 + C36274;
    const double C22922 = -((C22863 * C35946) / p + (C32393 * C36024) / C28931);
    const double C22937 =
        C36166 - (C22863 * C35951) / p - (C32393 * C36028) / C28931;
    const double C26032 =
        C36287 - ((C23779 * C35951) / p + (C34132 * C36028) / C28931);
    const double C26119 =
        C36202 - (C23866 * C35954) / p - (C34173 * C36030) / C28931 + C36287;
    const double C26162 = -((C25929 * C35951) / p + (C34071 * C36028) / C28931);
    const double C26191 =
        C36147 - (C25929 * C35954) / p - (C34071 * C36030) / C28931;
    const double C36286 = C36223 / C35948;
    const double C25944 = (5 * C36223) / C35948 -
                          ((C25929 * C35946) / p + (C34071 * C36024) / C28931);
    const double C27267 = -((C27207 * C35946) / p + (C34530 * C36024) / C28931);
    const double C26349 =
        C36288 - ((C24596 * C35946) / p + (C34252 * C36024) / C28931);
    const double C27237 =
        C36159 - (C24770 * C35954) / p - (C34476 * C36030) / C28931 + C36288;
    const double C27252 = -((C27177 * C35946) / p + (C34503 * C36024) / C28931);
    const double C27282 =
        C36160 - (C27177 * C35954) / p - (C34503 * C36030) / C28931;
    const double C26409 = -((C23591 * C35951) / p + (C34311 * C36028) / C28931);
    const double C27035 = -((C24408 * C35946) / p + (C34296 * C36024) / C28931);
    const double C27951 = -((C27793 * C35946) / p + (C34610 * C36024) / C28931);
    const double C26666 =
        C36290 - ((C25395 * C35946) / p + (C34380 * C36024) / C28931);
    const double C27437 =
        C36290 - ((C25483 * C35951) / p + (C34596 * C36028) / C28931);
    const double C27980 = -((C27920 * C35946) / p + (C34717 * C36024) / C28931);
    const double C27995 = -((C27920 * C35951) / p + (C34717 * C36028) / C28931);
    const double C36153 = C14004 - C36048;
    const double C36156 = C14932 - C36051;
    const double C36204 = C19165 - C36099;
    const double C36206 = C20063 - C36101;
    const double C36225 = C24226 - C36120;
    const double C36227 = C25124 - C36122;
    const double C16326 = -((C15871 * C35954) / p + (C29654 * C36030) / C28931);
    const double C16561 = -((C15958 * C35951) / p + (C29725 * C36028) / C28931);
    const double C15842 =
        C36242 - ((C15827 * C35951) / p + (C29430 * C36028) / C28931);
    const double C15929 =
        C36242 - ((C15914 * C35954) / p + (C29471 * C36030) / C28931);
    const double C16283 = C36154 - (C16194 * C35946) / p -
                          (C29640 * C36024) / C28931 +
                          (C14386 - (C29565 * C28929) / C28931) / p;
    const double C16355 = -((C16194 * C35954) / p + (C29640 * C36030) / C28931);
    const double C17332 = (C29943 * C35944) / C35945 - (C17098 * C35946) / p -
                          (C29947 * C36024) / C28931;
    const double C16239 = (C29606 * C35944) / C35945 - (C16892 * C35946) / p -
                          (C29610 * C36024) / C28931 +
                          (C14192 - (C29611 * C28929) / C28931) / C35948;
    const double C16618 = C36157 - (C16517 * C35946) / p -
                          (C29740 * C36024) / C28931 +
                          (C15212 - (C29695 * C28929) / C28931) / p;
    const double C16647 = -((C16517 * C35951) / p + (C29740 * C36028) / C28931);
    const double C17361 =
        C36162 - (C17302 * C35946) / p - (C29962 * C36024) / C28931;
    const double C17390 = (C15303 - (C29918 * C28929) / C28931) / p -
                          ((C17302 * C35951) / p + (C29962 * C36028) / C28931);
    const double C21420 = -((C20971 * C35954) / p + (C32015 * C36030) / C28931);
    const double C21649 = (C32080 * C35944) / C35945 - (C21058 * C35951) / p -
                          (C32085 * C36028) / C28931;
    const double C20942 = (C31786 * C35944) / C35945 - (C20927 * C35951) / p -
                          (C31791 * C36028) / C28931 + C36270;
    const double C21029 =
        C36270 - ((C21014 * C35954) / p + (C31833 * C36030) / C28931);
    const double C21377 = (C19535 - (C31928 * C28929) / C28931) / p -
                          ((C21288 * C35946) / p + (C32001 * C36024) / C28931);
    const double C21449 = -((C21288 * C35954) / p + (C32001 * C36030) / C28931);
    const double C22408 = -((C22177 * C35946) / p + (C32300 * C36024) / C28931);
    const double C21333 = (C19347 - (C31971 * C28929) / C28931) / C35948 -
                          ((C21974 * C35946) / p + (C31972 * C36024) / C28931);
    const double C21706 = (C20334 - (C32055 * C28929) / C28931) / p -
                          ((C21605 * C35946) / p + (C32099 * C36024) / C28931);
    const double C21735 =
        C36157 - (C21605 * C35951) / p - (C32099 * C36028) / C28931;
    const double C22437 = -((C22378 * C35946) / p + (C32314 * C36024) / C28931);
    const double C22466 = C36162 - (C22378 * C35951) / p -
                          (C32314 * C36028) / C28931 +
                          (C20422 - (C32272 * C28929) / C28931) / p;
    const double C26481 = (C34334 * C35944) / C35945 - (C26032 * C35954) / p -
                          (C34340 * C36030) / C28931;
    const double C26710 = -((C26119 * C35951) / p + (C34409 * C36028) / C28931);
    const double C26003 =
        C36286 - ((C25988 * C35951) / p + (C34118 * C36028) / C28931);
    const double C26090 =
        C36201 - (C26075 * C35954) / p - (C34159 * C36030) / C28931 + C36286;
    const double C26438 = (C24596 - (C34252 * C28929) / C28931) / p -
                          ((C26349 * C35946) / p + (C34325 * C36024) / C28931);
    const double C26510 =
        C36154 - (C26349 * C35954) / p - (C34325 * C36030) / C28931;
    const double C27467 = -((C27237 * C35946) / p + (C34624 * C36024) / C28931);
    const double C26394 = (C24408 - (C34296 * C28929) / C28931) / C35948 -
                          ((C27035 * C35946) / p + (C34297 * C36024) / C28931);
    const double C26767 = (C25395 - (C34380 * C28929) / C28931) / p -
                          ((C26666 * C35946) / p + (C34423 * C36024) / C28931);
    const double C26796 = -((C26666 * C35951) / p + (C34423 * C36028) / C28931);
    const double C27496 = -((C27437 * C35946) / p + (C34638 * C36024) / C28931);
    const double C27525 = (C25483 - (C34596 * C28929) / C28931) / p -
                          ((C27437 * C35951) / p + (C34638 * C36028) / C28931);
    const double C36245 = C36153 / C35948;
    const double C17053 = (5 * C36153) / C35948 -
                          ((C17038 * C35951) / p + (C29823 * C36028) / C28931);
    const double C36247 = C36156 / C35948;
    const double C17811 = (5 * C36156) / C35948 -
                          ((C17796 * C35954) / p + (C30043 * C36030) / C28931);
    const double C36273 = C36204 / C35948;
    const double C22132 = C36160 - (C22116 * C35951) / p -
                          (C32179 * C36028) / C28931 + (5 * C36204) / C35948;
    const double C36275 = C36206 / C35948;
    const double C22878 = (5 * C36206) / C35948 -
                          ((C22863 * C35954) / p + (C32393 * C36030) / C28931);
    const double C36289 = C36225 / C35948;
    const double C27192 = (5 * C36225) / C35948 -
                          ((C27177 * C35951) / p + (C34503 * C36028) / C28931);
    const double C36291 = C36227 / C35948;
    const double C27936 = C36166 - (C27920 * C35954) / p -
                          (C34717 * C36030) / C28931 + (5 * C36227) / C35948;
    const double C16209 = (C29576 * C35944) / C35945 - (C16836 * C35946) / p -
                          (C29580 * C36024) / C28931 + C36245;
    const double C17083 =
        C36245 - ((C17068 * C35954) / p + (C29850 * C36030) / C28931);
    const double C16532 = (C29706 * C35944) / C35945 - (C17564 * C35946) / p -
                          (C29710 * C36024) / C28931 + C36247;
    const double C17317 =
        C36247 - ((C17665 * C35951) / p + (C29932 * C36028) / C28931);
    const double C21303 =
        C36273 - ((C21918 * C35946) / p + (C31943 * C36024) / C28931);
    const double C22162 =
        C36273 - ((C22147 * C35954) / p + (C32206 * C36030) / C28931);
    const double C21620 =
        C36275 - ((C22636 * C35946) / p + (C32070 * C36024) / C28931);
    const double C22393 =
        C36165 - (C22735 * C35951) / p - (C32286 * C36028) / C28931 + C36275;
    const double C26364 =
        C36289 - ((C26979 * C35946) / p + (C34267 * C36024) / C28931);
    const double C27222 =
        C36161 - (C27207 * C35954) / p - (C34530 * C36030) / C28931 + C36289;
    const double C26681 =
        C36291 - ((C27694 * C35946) / p + (C34395 * C36024) / C28931);
    const double C27452 =
        C36291 - ((C27793 * C35951) / p + (C34610 * C36028) / C28931);
    vrx[0] = C12865;
    vrx[1] = C12884;
    vrx[2] = C12901;
    vrx[3] = C13154;
    vrx[4] = C13173;
    vrx[5] = C13348;
    vrx[6] = C13367;
    vrx[7] = C13542;
    vrx[8] = C13632;
    vrx[9] = C13725;
    vrx[10] = C13818;
    vrx[11] = C13834;
    vrx[12] = C14004;
    vrx[13] = C14022;
    vrx[14] = C14192;
    vrx[15] = C14210;
    vrx[16] = C14386;
    vrx[17] = C14476;
    vrx[18] = C14566;
    vrx[19] = C14658;
    vrx[20] = C14674;
    vrx[21] = C14841;
    vrx[22] = C14932;
    vrx[23] = C14950;
    vrx[24] = C15122;
    vrx[25] = C15212;
    vrx[26] = C15303;
    vrx[27] = C15395;
    vrx[28] = C15484;
    vrx[29] = C15573;
    vrx[30] = C15662;
    vrx[31] = C15765;
    vrx[32] = C15781;
    vrx[33] = C15797;
    vrx[34] = C15812;
    vrx[35] = C15827;
    vrx[36] = C15842;
    vrx[37] = C15871;
    vrx[38] = C15914;
    vrx[39] = C15929;
    vrx[40] = C15958;
    vrx[41] = C16001;
    vrx[42] = C16030;
    vrx[43] = C16059;
    vrx[44] = C16074;
    vrx[45] = C16149;
    vrx[46] = C16194;
    vrx[47] = C16209;
    vrx[48] = C16224;
    vrx[49] = C16239;
    vrx[50] = C16254;
    vrx[51] = C16283;
    vrx[52] = C16326;
    vrx[53] = C16355;
    vrx[54] = C16416;
    vrx[55] = C16517;
    vrx[56] = C16532;
    vrx[57] = C16561;
    vrx[58] = C16618;
    vrx[59] = C16647;
    vrx[60] = C16836;
    vrx[61] = C16892;
    vrx[62] = C16935;
    vrx[63] = C17038;
    vrx[64] = C17053;
    vrx[65] = C17068;
    vrx[66] = C17083;
    vrx[67] = C17098;
    vrx[68] = C17113;
    vrx[69] = C17128;
    vrx[70] = C17143;
    vrx[71] = C17302;
    vrx[72] = C17317;
    vrx[73] = C17332;
    vrx[74] = C17361;
    vrx[75] = C17390;
    vrx[76] = C17564;
    vrx[77] = C17620;
    vrx[78] = C17665;
    vrx[79] = C17796;
    vrx[80] = C17811;
    vrx[81] = C17826;
    vrx[82] = C17855;
    vrx[83] = C17870;
    vry[0] = C18063;
    vry[1] = C18080;
    vry[2] = C18096;
    vry[3] = C18342;
    vry[4] = C18360;
    vry[5] = C18530;
    vry[6] = C18548;
    vry[7] = C18718;
    vry[8] = C18805;
    vry[9] = C18895;
    vry[10] = C18985;
    vry[11] = C19000;
    vry[12] = C19165;
    vry[13] = C19182;
    vry[14] = C19347;
    vry[15] = C19364;
    vry[16] = C19535;
    vry[17] = C19622;
    vry[18] = C19709;
    vry[19] = C19798;
    vry[20] = C19813;
    vry[21] = C19975;
    vry[22] = C20063;
    vry[23] = C20080;
    vry[24] = C20247;
    vry[25] = C20334;
    vry[26] = C20422;
    vry[27] = C20511;
    vry[28] = C20597;
    vry[29] = C20683;
    vry[30] = C20769;
    vry[31] = C20868;
    vry[32] = C20883;
    vry[33] = C20898;
    vry[34] = C20912;
    vry[35] = C20927;
    vry[36] = C20942;
    vry[37] = C20971;
    vry[38] = C21014;
    vry[39] = C21029;
    vry[40] = C21058;
    vry[41] = C21101;
    vry[42] = C21130;
    vry[43] = C21159;
    vry[44] = C21174;
    vry[45] = C21245;
    vry[46] = C21288;
    vry[47] = C21303;
    vry[48] = C21318;
    vry[49] = C21333;
    vry[50] = C21348;
    vry[51] = C21377;
    vry[52] = C21420;
    vry[53] = C21449;
    vry[54] = C21506;
    vry[55] = C21605;
    vry[56] = C21620;
    vry[57] = C21649;
    vry[58] = C21706;
    vry[59] = C21735;
    vry[60] = C21918;
    vry[61] = C21974;
    vry[62] = C22017;
    vry[63] = C22116;
    vry[64] = C22132;
    vry[65] = C22147;
    vry[66] = C22162;
    vry[67] = C22177;
    vry[68] = C22192;
    vry[69] = C22207;
    vry[70] = C22222;
    vry[71] = C22378;
    vry[72] = C22393;
    vry[73] = C22408;
    vry[74] = C22437;
    vry[75] = C22466;
    vry[76] = C22636;
    vry[77] = C22692;
    vry[78] = C22735;
    vry[79] = C22863;
    vry[80] = C22878;
    vry[81] = C22893;
    vry[82] = C22922;
    vry[83] = C22937;
    vrz[0] = C23124;
    vrz[1] = C23141;
    vrz[2] = C23157;
    vrz[3] = C23403;
    vrz[4] = C23421;
    vrz[5] = C23591;
    vrz[6] = C23609;
    vrz[7] = C23779;
    vrz[8] = C23866;
    vrz[9] = C23956;
    vrz[10] = C24046;
    vrz[11] = C24061;
    vrz[12] = C24226;
    vrz[13] = C24243;
    vrz[14] = C24408;
    vrz[15] = C24425;
    vrz[16] = C24596;
    vrz[17] = C24683;
    vrz[18] = C24770;
    vrz[19] = C24859;
    vrz[20] = C24874;
    vrz[21] = C25036;
    vrz[22] = C25124;
    vrz[23] = C25141;
    vrz[24] = C25308;
    vrz[25] = C25395;
    vrz[26] = C25483;
    vrz[27] = C25572;
    vrz[28] = C25658;
    vrz[29] = C25744;
    vrz[30] = C25830;
    vrz[31] = C25929;
    vrz[32] = C25944;
    vrz[33] = C25959;
    vrz[34] = C25973;
    vrz[35] = C25988;
    vrz[36] = C26003;
    vrz[37] = C26032;
    vrz[38] = C26075;
    vrz[39] = C26090;
    vrz[40] = C26119;
    vrz[41] = C26162;
    vrz[42] = C26191;
    vrz[43] = C26220;
    vrz[44] = C26235;
    vrz[45] = C26306;
    vrz[46] = C26349;
    vrz[47] = C26364;
    vrz[48] = C26379;
    vrz[49] = C26394;
    vrz[50] = C26409;
    vrz[51] = C26438;
    vrz[52] = C26481;
    vrz[53] = C26510;
    vrz[54] = C26567;
    vrz[55] = C26666;
    vrz[56] = C26681;
    vrz[57] = C26710;
    vrz[58] = C26767;
    vrz[59] = C26796;
    vrz[60] = C26979;
    vrz[61] = C27035;
    vrz[62] = C27078;
    vrz[63] = C27177;
    vrz[64] = C27192;
    vrz[65] = C27207;
    vrz[66] = C27222;
    vrz[67] = C27237;
    vrz[68] = C27252;
    vrz[69] = C27267;
    vrz[70] = C27282;
    vrz[71] = C27437;
    vrz[72] = C27452;
    vrz[73] = C27467;
    vrz[74] = C27496;
    vrz[75] = C27525;
    vrz[76] = C27694;
    vrz[77] = C27750;
    vrz[78] = C27793;
    vrz[79] = C27920;
    vrz[80] = C27936;
    vrz[81] = C27951;
    vrz[82] = C27980;
    vrz[83] = C27995;
}
