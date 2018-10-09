/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2011_1_ints(const double ae,
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
    const double C33925 = 2 * q;
    const double C33919 = de * zCD;
    const double C33918 = be * zAB;
    const double C33916 = de * yCD;
    const double C33915 = be * yAB;
    const double C33914 = de * xCD;
    const double C33913 = be * xAB;
    const double C33944 = p + q;
    const double C34214 = p * q;
    const double C34213 = std::pow(Pi, 2.5);
    const double C34212 = zP - zQ;
    const double C34211 = yP - yQ;
    const double C34210 = xP - xQ;
    const double C34209 = 2 * p;
    const double C33929 = C33918 + C33919;
    const double C33928 = C33915 + C33916;
    const double C33927 = C33913 + C33914;
    const double C34215 = std::sqrt(C33944);
    const double C34222 = C34213 * kab;
    const double C34221 = C34212 * q;
    const double C34220 = C34211 * q;
    const double C34219 = C34210 * q;
    const double C34223 = C34214 * C34215;
    const double C34227 = C34222 * kcd;
    const double C30966 = (2. * C34227 * bs[0]) / C34223;
    const double C30967 = (2. * C34227 * bs[1]) / C34223;
    const double C31464 = (2. * C34227 * bs[2]) / C34223;
    const double C31700 = (2. * C34227 * bs[3]) / C34223;
    const double C31797 = (2. * C34227 * bs[4]) / C34223;
    const double C34208 = C30967 * q;
    const double C27668 = -((C30966 * C33913) / p + (C30967 * C34219) / C33944);
    const double C28022 = -((C30966 * C33915) / p + (C30967 * C34220) / C33944);
    const double C28066 = -((C30966 * C33918) / p + (C30967 * C34221) / C33944);
    const double C34216 = C31464 * q;
    const double C30946 = -((C30967 * C33913) / p + (C31464 * C34219) / C33944);
    const double C31172 = -((C30967 * C33915) / p + (C31464 * C34220) / C33944);
    const double C31203 = -((C30967 * C33918) / p + (C31464 * C34221) / C33944);
    const double C34217 = C31700 * q;
    const double C31487 = -((C31464 * C33913) / p + (C31700 * C34219) / C33944);
    const double C32399 = -((C31464 * C33915) / p + (C31700 * C34220) / C33944);
    const double C32444 = -((C31464 * C33918) / p + (C31700 * C34221) / C33944);
    const double C31744 = -((C31700 * C33913) / p + (C31797 * C34219) / C33944);
    const double C32639 = -((C31700 * C33915) / p + (C31797 * C34220) / C33944);
    const double C33530 = -((C31700 * C33918) / p + (C31797 * C34221) / C33944);
    const double C34218 = C34208 / C33944;
    const double C33931 = C27668 / C33925;
    const double C33930 = C28022 / C33925;
    const double C33932 = C28066 / C33925;
    const double C34224 = C34216 / C33944;
    const double C27283 = -((C28022 * C33913) / p + (C31172 * C34219) / C33944);
    const double C27418 = -((C28066 * C33913) / p + (C31203 * C34219) / C33944);
    const double C27553 = -((C28066 * C33915) / p + (C31203 * C34220) / C33944);
    const double C34225 = C34217 / C33944;
    const double C31187 = -((C31203 * C33915) / p + (C32444 * C34220) / C33944);
    const double C34226 = C30966 - C34218;
    const double C34228 = C30967 - C34224;
    const double C34229 = C31464 - C34225;
    const double C28138 = -((C27553 * C33913) / p + (C31187 * C34219) / C33944);
    const double C34230 = C34226 / C34209;
    const double C34231 = C34228 / C34209;
    const double C34232 = C34229 / C34209;
    const double C33926 = C28138 * p;
    const double C26853 =
        C34230 - ((C27668 * C33913) / p + (C30946 * C34219) / C33944);
    const double C26996 =
        C34230 - ((C28022 * C33915) / p + (C31172 * C34220) / C33944);
    const double C27139 =
        C34230 - ((C28066 * C33918) / p + (C31203 * C34221) / C33944);
    const double C30982 =
        C34231 - ((C30946 * C33913) / p + (C31487 * C34219) / C33944);
    const double C31041 =
        C34231 - ((C31172 * C33915) / p + (C32399 * C34220) / C33944);
    const double C31114 =
        C34231 - ((C31203 * C33918) / p + (C32444 * C34221) / C33944);
    const double C31575 =
        C34232 - ((C31487 * C33913) / p + (C31744 * C34219) / C33944);
    const double C31591 =
        C34232 - ((C32399 * C33915) / p + (C32639 * C34220) / C33944);
    const double C31621 =
        C34232 - ((C32444 * C33918) / p + (C33530 * C34221) / C33944);
    const double C27313 = -(C27283 * C33929 + C33926) / q;
    const double C27433 = -(C27418 * C33928 + C33926) / q;
    const double C27536 = -(C27553 * C33927 + C33926) / q;
    const double C27684 = (C27668 - (C30946 * q) / C33944) / p -
                          ((C26853 * C33913) / p + (C30982 * C34219) / C33944);
    const double C28037 = -((C26853 * C33915) / p + (C30982 * C34220) / C33944);
    const double C28081 = -((C26853 * C33918) / p + (C30982 * C34221) / C33944);
    const double C27803 = -((C26996 * C33913) / p + (C31041 * C34219) / C33944);
    const double C29165 = (C28022 - (C31172 * q) / C33944) / p -
                          ((C26996 * C33915) / p + (C31041 * C34220) / C33944);
    const double C29453 = -((C26996 * C33918) / p + (C31041 * C34221) / C33944);
    const double C27920 = -((C27139 * C33913) / p + (C31114 * C34219) / C33944);
    const double C29269 = -((C27139 * C33915) / p + (C31114 * C34220) / C33944);
    const double C30611 = (C28066 - (C31203 * q) / C33944) / p -
                          ((C27139 * C33918) / p + (C31114 * C34221) / C33944);
    const double C31239 = (C30946 - (C31487 * q) / C33944) / p -
                          ((C30982 * C33913) / p + (C31575 * C34219) / C33944);
    const double C32187 = -((C30982 * C33918) / p + (C31575 * C34221) / C33944);
    const double C31283 = -((C31041 * C33913) / p + (C31591 * C34219) / C33944);
    const double C31330 = (C31172 - (C32399 * q) / C33944) / p -
                          ((C31041 * C33915) / p + (C31591 * C34220) / C33944);
    const double C31346 = -((C31041 * C33918) / p + (C31591 * C34221) / C33944);
    const double C31314 = -((C31114 * C33913) / p + (C31621 * C34219) / C33944);
    const double C31405 = -((C31114 * C33915) / p + (C31621 * C34220) / C33944);
    const double C31420 = (C31203 - (C32444 * q) / C33944) / p -
                          ((C31114 * C33918) / p + (C31621 * C34221) / C33944);
    const double C26835 = C27668 / q - (C26853 * C33927) / q - (C27684 * p) / q;
    const double C33917 = C28037 * p;
    const double C33920 = C28081 * p;
    const double C33921 = C27803 * p;
    const double C27012 = C28022 / q - (C26996 * C33928) / q - (C29165 * p) / q;
    const double C33922 = C29453 * p;
    const double C33923 = C27920 * p;
    const double C33924 = C29269 * p;
    const double C27171 = C28066 / q - (C27139 * C33929) / q - (C30611 * p) / q;
    const double C26870 = -(C26853 * C33928 + C33917) / q;
    const double C27264 = C33930 - (C27283 * C33927) / q - C33917 / q;
    const double C26887 = -(C26853 * C33929 + C33920) / q;
    const double C27400 = C33932 - (C27418 * C33927) / q - C33920 / q;
    const double C26979 = -(C26996 * C33927 + C33921) / q;
    const double C27298 = C33931 - (C27283 * C33928) / q - C33921 / q;
    const double C27028 = -(C26996 * C33929 + C33922) / q;
    const double C27568 = C33932 - (C27553 * C33928) / q - C33922 / q;
    const double C27122 = -(C27139 * C33927 + C33923) / q;
    const double C27450 = C33931 - (C27418 * C33929) / q - C33923 / q;
    const double C27155 = -(C27139 * C33928 + C33924) / q;
    const double C27583 = C33930 - (C27553 * C33929) / q - C33924 / q;
    g[0] = C26835;
    g[1] = C26853;
    g[2] = C26870;
    g[3] = C26887;
    g[4] = C26979;
    g[5] = C26996;
    g[6] = C27012;
    g[7] = C27028;
    g[8] = C27122;
    g[9] = C27139;
    g[10] = C27155;
    g[11] = C27171;
    g[12] = C27264;
    g[13] = C27283;
    g[14] = C27298;
    g[15] = C27313;
    g[16] = C27400;
    g[17] = C27418;
    g[18] = C27433;
    g[19] = C27450;
    g[20] = C27536;
    g[21] = C27553;
    g[22] = C27568;
    g[23] = C27583;
    g[24] = C27668;
    g[25] = C27684;
    g[26] = C27803;
    g[27] = C27920;
    g[28] = C28022;
    g[29] = C28037;
    g[30] = C28066;
    g[31] = C28081;
    g[32] = C28138;
    g[33] = C29165;
    g[34] = C29269;
    g[35] = C29453;
    g[36] = C30611;
    g[37] = C30946;
    g[38] = C30966;
    g[39] = C30967;
    g[40] = C30982;
    g[41] = C31041;
    g[42] = C31114;
    g[43] = C31172;
    g[44] = C31187;
    g[45] = C31203;
    g[46] = C31239;
    g[47] = C31283;
    g[48] = C31314;
    g[49] = C31330;
    g[50] = C31346;
    g[51] = C31405;
    g[52] = C31420;
    g[53] = C31464;
    g[54] = C31487;
    g[55] = C31575;
    g[56] = C31591;
    g[57] = C31621;
    g[58] = C31700;
    g[59] = C31744;
    g[60] = C31797;
    g[61] = C32187;
    g[62] = C32399;
    g[63] = C32444;
    g[64] = C32639;
    g[65] = C33530;
}
