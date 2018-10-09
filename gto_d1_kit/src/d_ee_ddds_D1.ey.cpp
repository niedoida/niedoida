/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2220_4_vr(const double ae,
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
    const double C28991 = g[148];
    const double C29010 = g[149];
    const double C29025 = g[150];
    const double C29040 = g[151];
    const double C29069 = g[152];
    const double C29138 = g[153];
    const double C29220 = g[154];
    const double C29234 = g[155];
    const double C29262 = g[156];
    const double C29330 = g[157];
    const double C29344 = g[158];
    const double C29371 = g[159];
    const double C29385 = g[160];
    const double C29400 = g[161];
    const double C29427 = g[162];
    const double C29442 = g[163];
    const double C29457 = g[164];
    const double C29625 = g[165];
    const double C29640 = g[166];
    const double C29670 = g[167];
    const double C29700 = g[168];
    const double C29755 = g[169];
    const double C29770 = g[170];
    const double C29800 = g[171];
    const double C29828 = g[172];
    const double C29842 = g[173];
    const double C29856 = g[174];
    const double C29938 = g[175];
    const double C29952 = g[176];
    const double C30007 = g[177];
    const double C30022 = g[178];
    const double C30050 = g[179];
    const double C30064 = g[180];
    const double C30118 = g[181];
    const double C30132 = g[182];
    const double C30159 = g[183];
    const double C30175 = g[184];
    const double C30190 = g[185];
    const double C30211 = g[186];
    const double C30240 = g[187];
    const double C30373 = g[188];
    const double C30388 = g[189];
    const double C30455 = g[190];
    const double C30470 = g[191];
    const double C30498 = g[192];
    const double C30513 = g[193];
    const double C30542 = g[194];
    const double C30557 = g[195];
    const double C30586 = g[196];
    const double C30601 = g[197];
    const double C30643 = g[198];
    const double C30764 = g[199];
    const double C30780 = g[200];
    const double C30855 = g[201];
    const double C30870 = g[202];
    const double C30913 = g[203];
    const double C30955 = g[204];
    const double C30969 = g[205];
    const double C31036 = g[206];
    const double C31076 = g[207];
    const double C31124 = g[208];
    const double C31139 = g[209];
    const double C31230 = g[210];
    const double C31245 = g[211];
    const double C31321 = g[212];
    const double C31494 = g[213];
    const double C31850 = g[214];
    const double C31865 = g[215];
    const double C31947 = g[216];
    const double C31961 = g[217];
    const double C32046 = g[218];
    const double C32144 = g[219];
    const double C32555 = g[220];
    const double C32703 = g[221];
    const double C32852 = g[222];
    const double C32909 = g[223];
    const double C33072 = g[224];
    const double C33148 = g[225];
    const double C33273 = g[226];
    const double C33481 = g[227];
    const double C33496 = g[228];
    const double C33525 = g[229];
    const double C33601 = g[230];
    const double C34340 = g[231];
    const double C34398 = g[232];
    const double C35284 = g[233];
    const double C35378 = g[234];
    const double C35495 = g[235];
    const double C35828 = g[236];
    const double C35945 = g[237];
    const double C28994 = p + q;
    const double C28993 = p * q;
    const double C36048 = bs[7];
    const double C36047 = bs[6];
    const double C36045 = bs[5];
    const double C36043 = bs[4];
    const double C36041 = bs[3];
    const double C36034 = bs[2];
    const double C36027 = std::pow(Pi, 2.5);
    const double C36024 = bs[1];
    const double C36023 = ce * de;
    const double C36022 = bs[0];
    const double C36019 = zP - zQ;
    const double C36018 = be * zAB;
    const double C36016 = yP - yQ;
    const double C36015 = be * yAB;
    const double C36012 = 2 * p;
    const double C36011 = xP - xQ;
    const double C36010 = be * xAB;
    const double C28995 = C28994 * p;
    const double C36028 = std::sqrt(C28994);
    const double C36026 = q * C28994;
    const double C36025 = C28993 * de;
    const double C36009 = C28994 * C28993;
    const double C36008 = de * C28993;
    const double C36109 = 4 * C36027;
    const double C36107 = kab * C36023;
    const double C36094 = C36019 * C28993;
    const double C36092 = C36016 * C28993;
    const double C36088 = C36011 * C28993;
    const double C36110 = C28993 * C36028;
    const double C36108 = kab * C36025;
    const double C36176 = C33525 * C36008;
    const double C36167 = C32703 * C36008;
    const double C36161 = C31961 * C36008;
    const double C36160 = C31947 * C36008;
    const double C36154 = C31321 * C36008;
    const double C36152 = C31230 * C36008;
    const double C36150 = C31076 * C36008;
    const double C36149 = C31036 * C36008;
    const double C36148 = C30969 * C36008;
    const double C36147 = C30955 * C36008;
    const double C36145 = C30913 * C36008;
    const double C36144 = C30870 * C36008;
    const double C36143 = C30780 * C36008;
    const double C36140 = C30601 * C36008;
    const double C36139 = C30586 * C36008;
    const double C36135 = C30470 * C36008;
    const double C36134 = C30455 * C36008;
    const double C36132 = C30388 * C36008;
    const double C36131 = C30373 * C36008;
    const double C36130 = C30240 * C36008;
    const double C36129 = C30211 * C36008;
    const double C36128 = C30190 * C36008;
    const double C36126 = C30159 * C36008;
    const double C36125 = C30132 * C36008;
    const double C36124 = C30118 * C36008;
    const double C36123 = C30064 * C36008;
    const double C36122 = C30050 * C36008;
    const double C36121 = C30022 * C36008;
    const double C36120 = C29952 * C36008;
    const double C36119 = C29938 * C36008;
    const double C36118 = C29856 * C36008;
    const double C36117 = C29828 * C36008;
    const double C36116 = C29800 * C36008;
    const double C36113 = C29700 * C36008;
    const double C36106 = C29457 * C36008;
    const double C36104 = C29442 * C36008;
    const double C36102 = C29427 * C36008;
    const double C36101 = C29400 * C36008;
    const double C36100 = C29371 * C36008;
    const double C36099 = C29344 * C36008;
    const double C36098 = C29330 * C36008;
    const double C36097 = C29262 * C36008;
    const double C36096 = C29220 * C36008;
    const double C36095 = C29138 * C36008;
    const double C36089 = C29010 * C36008;
    const double C36087 = C28991 * C36008;
    const double C36214 = kcd * C36107;
    const double C36215 = kcd * C36108;
    const double C36281 = C36176 / C36009;
    const double C36272 = C36167 / C36009;
    const double C36266 = C36161 / C36009;
    const double C36265 = C36160 / C36009;
    const double C36259 = C36154 / C36009;
    const double C36257 = C36152 / C36009;
    const double C36255 = C36150 / C36009;
    const double C36254 = C36149 / C36009;
    const double C36253 = C36148 / C36009;
    const double C36252 = C36147 / C36009;
    const double C36250 = C36145 / C36009;
    const double C36249 = C36144 / C36009;
    const double C36248 = C36143 / C36009;
    const double C36245 = C36140 / C36009;
    const double C36244 = C36139 / C36009;
    const double C36240 = C36135 / C36009;
    const double C36239 = C36134 / C36009;
    const double C36237 = C36132 / C36009;
    const double C36236 = C36131 / C36009;
    const double C36235 = C36130 / C36009;
    const double C36234 = C36129 / C36009;
    const double C36233 = C36128 / C36009;
    const double C36231 = C36126 / C36009;
    const double C36230 = C36125 / C36009;
    const double C36229 = C36124 / C36009;
    const double C36228 = C36123 / C36009;
    const double C36227 = C36122 / C36009;
    const double C36226 = C36121 / C36009;
    const double C36225 = C36120 / C36009;
    const double C36224 = C36119 / C36009;
    const double C36223 = C36118 / C36009;
    const double C36222 = C36117 / C36009;
    const double C36221 = C36116 / C36009;
    const double C36218 = C36113 / C36009;
    const double C36213 = C36106 / C36009;
    const double C36211 = C36104 / C36009;
    const double C36209 = C36102 / C36009;
    const double C36208 = C36101 / C36009;
    const double C36207 = C36100 / C36009;
    const double C36206 = C36099 / C36009;
    const double C36205 = C36098 / C36009;
    const double C36204 = C36097 / C36009;
    const double C36203 = C36096 / C36009;
    const double C36202 = C36095 / C36009;
    const double C36198 = C36089 / C36009;
    const double C36197 = C36087 / C36009;
    const double C36330 = C36047 * C36214;
    const double C36328 = C36045 * C36214;
    const double C36325 = C36043 * C36214;
    const double C36322 = C36041 * C36214;
    const double C36320 = C36034 * C36214;
    const double C36313 = C36024 * C36214;
    const double C36304 = C36022 * C36214;
    const double C36331 = C36048 * C36215;
    const double C36329 = C36047 * C36215;
    const double C36326 = C36045 * C36215;
    const double C36323 = C36043 * C36215;
    const double C36321 = C36041 * C36215;
    const double C36314 = C36034 * C36215;
    const double C36305 = C36024 * C36215;
    const double C31325 =
        (((xCD * C36330) / q + (C36011 * C36331) / C36026) * C36109) / C36110;
    const double C33654 =
        (((yCD * C36330) / q + (C36016 * C36331) / C36026) * C36109) / C36110;
    const double C35972 =
        (((zCD * C36330) / q + (C36019 * C36331) / C36026) * C36109) / C36110;
    const double C31234 =
        (((xCD * C36328) / q + (C36011 * C36329) / C36026) * C36109) / C36110;
    const double C33564 =
        (((yCD * C36328) / q + (C36016 * C36329) / C36026) * C36109) / C36110;
    const double C35882 =
        (((zCD * C36328) / q + (C36019 * C36329) / C36026) * C36109) / C36110;
    const double C31080 =
        (((xCD * C36325) / q + (C36011 * C36326) / C36026) * C36109) / C36110;
    const double C33417 =
        (((yCD * C36325) / q + (C36016 * C36326) / C36026) * C36109) / C36110;
    const double C35737 =
        (((zCD * C36325) / q + (C36019 * C36326) / C36026) * C36109) / C36110;
    const double C30769 =
        (((xCD * C36322) / q + (C36011 * C36323) / C36026) * C36109) / C36110;
    const double C33111 =
        (((yCD * C36322) / q + (C36016 * C36323) / C36026) * C36109) / C36110;
    const double C35432 =
        (((zCD * C36322) / q + (C36019 * C36323) / C36026) * C36109) / C36110;
    const double C30179 =
        (((xCD * C36320) / q + (C36011 * C36321) / C36026) * C36109) / C36110;
    const double C32510 =
        (((yCD * C36320) / q + (C36016 * C36321) / C36026) * C36109) / C36110;
    const double C34834 =
        (((zCD * C36320) / q + (C36019 * C36321) / C36026) * C36109) / C36110;
    const double C29029 =
        (((xCD * C36313) / q + (C36011 * C36314) / C36026) * C36109) / C36110;
    const double C31402 =
        (((yCD * C36313) / q + (C36016 * C36314) / C36026) * C36109) / C36110;
    const double C33731 =
        (((zCD * C36313) / q + (C36019 * C36314) / C36026) * C36109) / C36110;
    const double C15812 =
        (((xCD * C36304) / q + (C36011 * C36305) / C36026) * C36109) / C36110;
    const double C20912 =
        (((yCD * C36304) / q + (C36016 * C36305) / C36026) * C36109) / C36110;
    const double C25973 =
        (((zCD * C36304) / q + (C36019 * C36305) / C36026) * C36109) / C36110;
    const double C36046 = C31234 * C28993;
    const double C31249 =
        C36259 - (C31234 * C36010) / p - (C31325 * C36088) / C28995;
    const double C31276 = -((C31234 * C36015) / p + (C31325 * C36092) / C28995);
    const double C31303 = -((C31234 * C36018) / p + (C31325 * C36094) / C28995);
    const double C36067 = C33564 * C28993;
    const double C33578 = -((C33564 * C36010) / p + (C33654 * C36088) / C28995);
    const double C33606 =
        C36259 - (C33564 * C36015) / p - (C33654 * C36092) / C28995;
    const double C33633 = -((C33564 * C36018) / p + (C33654 * C36094) / C28995);
    const double C36086 = C35882 * C28993;
    const double C35896 = -((C35882 * C36010) / p + (C35972 * C36088) / C28995);
    const double C35923 = -((C35882 * C36015) / p + (C35972 * C36092) / C28995);
    const double C35951 =
        C36259 - (C35882 * C36018) / p - (C35972 * C36094) / C28995;
    const double C36044 = C31080 * C28993;
    const double C31128 =
        C36257 - (C31080 * C36010) / p - (C31234 * C36088) / C28995;
    const double C31157 = -((C31080 * C36015) / p + (C31234 * C36092) / C28995);
    const double C31185 = -((C31080 * C36018) / p + (C31234 * C36094) / C28995);
    const double C36066 = C33417 * C28993;
    const double C33457 = -((C33417 * C36010) / p + (C33564 * C36088) / C28995);
    const double C33486 =
        C36257 - (C33417 * C36015) / p - (C33564 * C36092) / C28995;
    const double C33515 = -((C33417 * C36018) / p + (C33564 * C36094) / C28995);
    const double C36085 = C35737 * C28993;
    const double C35777 = -((C35737 * C36010) / p + (C35882 * C36088) / C28995);
    const double C35805 = -((C35737 * C36015) / p + (C35882 * C36092) / C28995);
    const double C35834 =
        C36257 - (C35737 * C36018) / p - (C35882 * C36094) / C28995;
    const double C36040 = C30769 * C28993;
    const double C30768 =
        C36255 - (C30769 * C36010) / p - (C31080 * C36088) / C28995;
    const double C30804 = -((C30769 * C36015) / p + (C31080 * C36092) / C28995);
    const double C30831 = -((C30769 * C36018) / p + (C31080 * C36094) / C28995);
    const double C36064 = C33111 * C28993;
    const double C33125 = -((C33111 * C36010) / p + (C33417 * C36088) / C28995);
    const double C33153 =
        C36255 - (C33111 * C36015) / p - (C33417 * C36092) / C28995;
    const double C33180 = -((C33111 * C36018) / p + (C33417 * C36094) / C28995);
    const double C36083 = C35432 * C28993;
    const double C35446 = -((C35432 * C36010) / p + (C35737 * C36088) / C28995);
    const double C35473 = -((C35432 * C36015) / p + (C35737 * C36092) / C28995);
    const double C35501 =
        C36255 - (C35432 * C36018) / p - (C35737 * C36094) / C28995;
    const double C36033 = C30179 * C28993;
    const double C30164 =
        C36248 - (C30179 * C36010) / p - (C30769 * C36088) / C28995;
    const double C30229 = -((C30179 * C36015) / p + (C30769 * C36092) / C28995);
    const double C30258 = -((C30179 * C36018) / p + (C30769 * C36094) / C28995);
    const double C36058 = C32510 * C28993;
    const double C32511 = -((C32510 * C36010) / p + (C33111 * C36088) / C28995);
    const double C32560 =
        C36248 - (C32510 * C36015) / p - (C33111 * C36092) / C28995;
    const double C32588 = -((C32510 * C36018) / p + (C33111 * C36094) / C28995);
    const double C36077 = C34834 * C28993;
    const double C34835 = -((C34834 * C36010) / p + (C35432 * C36088) / C28995);
    const double C34883 = -((C34834 * C36015) / p + (C35432 * C36092) / C28995);
    const double C34911 =
        C36248 - (C34834 * C36018) / p - (C35432 * C36094) / C28995;
    const double C36013 = C29029 * C28993;
    const double C29014 =
        C36233 - (C29029 * C36010) / p - (C30179 * C36088) / C28995;
    const double C29155 = -((C29029 * C36015) / p + (C30179 * C36092) / C28995);
    const double C29279 = -((C29029 * C36018) / p + (C30179 * C36094) / C28995);
    const double C36049 = C31402 * C28993;
    const double C31388 = -((C31402 * C36010) / p + (C32510 * C36088) / C28995);
    const double C31526 =
        C36233 - (C31402 * C36015) / p - (C32510 * C36092) / C28995;
    const double C31647 = -((C31402 * C36018) / p + (C32510 * C36094) / C28995);
    const double C36068 = C33731 * C28993;
    const double C33717 = -((C33731 * C36010) / p + (C34834 * C36088) / C28995);
    const double C33854 = -((C33731 * C36015) / p + (C34834 * C36092) / C28995);
    const double C33975 =
        C36233 - (C33731 * C36018) / p - (C34834 * C36094) / C28995;
    const double C15797 =
        C36213 - (C15812 * C36010) / p - (C29029 * C36088) / C28995;
    const double C16164 = -((C15812 * C36015) / p + (C29029 * C36092) / C28995);
    const double C16431 = -((C15812 * C36018) / p + (C29029 * C36094) / C28995);
    const double C20898 = -((C20912 * C36010) / p + (C31402 * C36088) / C28995);
    const double C21245 =
        C36213 - (C20912 * C36015) / p - (C31402 * C36092) / C28995;
    const double C21506 = -((C20912 * C36018) / p + (C31402 * C36094) / C28995);
    const double C25959 = -((C25973 * C36010) / p + (C33731 * C36088) / C28995);
    const double C26306 = -((C25973 * C36015) / p + (C33731 * C36092) / C28995);
    const double C26567 =
        C36213 - (C25973 * C36018) / p - (C33731 * C36094) / C28995;
    const double C36153 = C36046 / C28995;
    const double C36177 = C36067 / C28995;
    const double C36196 = C36086 / C28995;
    const double C36151 = C36044 / C28995;
    const double C36175 = C36066 / C28995;
    const double C36195 = C36085 / C28995;
    const double C36142 = C36040 / C28995;
    const double C36173 = C36064 / C28995;
    const double C36193 = C36083 / C28995;
    const double C36127 = C36033 / C28995;
    const double C36166 = C36058 / C28995;
    const double C36187 = C36077 / C28995;
    const double C36090 = C36013 / C28995;
    const double C29389 = -((C29279 * C36015) / p + (C30258 * C36092) / C28995);
    const double C36155 = C36049 / C28995;
    const double C31753 =
        C36272 - (C31647 * C36015) / p - (C32588 * C36092) / C28995;
    const double C36178 = C36068 / C28995;
    const double C34081 = -((C33975 * C36015) / p + (C34911 * C36092) / C28995);
    const double C15395 =
        C36207 - (C16164 * C36010) / p - (C29155 * C36088) / C28995;
    const double C15573 =
        C36208 - (C16431 * C36010) / p - (C29279 * C36088) / C28995;
    const double C15662 = -((C16431 * C36015) / p + (C29279 * C36092) / C28995);
    const double C20511 = -((C21245 * C36010) / p + (C31526 * C36088) / C28995);
    const double C20683 = -((C21506 * C36010) / p + (C31647 * C36088) / C28995);
    const double C20769 =
        C36208 - (C21506 * C36015) / p - (C31647 * C36092) / C28995;
    const double C25572 = -((C26306 * C36010) / p + (C33854 * C36088) / C28995);
    const double C25744 = -((C26567 * C36010) / p + (C33975 * C36088) / C28995);
    const double C25830 = -((C26567 * C36015) / p + (C33975 * C36092) / C28995);
    const double C36258 = C31080 - C36153;
    const double C36282 = C33417 - C36177;
    const double C36301 = C35737 - C36196;
    const double C36256 = C30769 - C36151;
    const double C36280 = C33111 - C36175;
    const double C36300 = C35432 - C36195;
    const double C36247 = C30179 - C36142;
    const double C36278 = C32510 - C36173;
    const double C36298 = C34834 - C36193;
    const double C36232 = C29029 - C36127;
    const double C36271 = C31402 - C36166;
    const double C36292 = C33731 - C36187;
    const double C36199 = C15812 - C36090;
    const double C36260 = C20912 - C36155;
    const double C36283 = C25973 - C36178;
    const double C15484 = (C29385 * C36008) / C36009 - (C15662 * C36010) / p -
                          (C29389 * C36088) / C28995;
    const double C20597 = -((C20769 * C36010) / p + (C31753 * C36088) / C28995);
    const double C25658 = -((C25830 * C36010) / p + (C34081 * C36088) / C28995);
    const double C36327 = C36258 / C36012;
    const double C36347 = C36282 / C36012;
    const double C36363 = C36301 / C36012;
    const double C36324 = C36256 / C36012;
    const double C36346 = C36280 / C36012;
    const double C36362 = C36300 / C36012;
    const double C36319 = C36247 / C36012;
    const double C36345 = C36278 / C36012;
    const double C36361 = C36298 / C36012;
    const double C36312 = C36232 / C36012;
    const double C36340 = C36271 / C36012;
    const double C36356 = C36292 / C36012;
    const double C36302 = C36199 / C36012;
    const double C36332 = C36260 / C36012;
    const double C36348 = C36283 / C36012;
    const double C31143 = (C31245 * C36008) / C36009 - (C31128 * C36010) / p -
                          (C31249 * C36088) / C28995 + C36327;
    const double C31171 =
        C36327 - ((C31157 * C36015) / p + (C31276 * C36092) / C28995);
    const double C31199 =
        C36327 - ((C31185 * C36018) / p + (C31303 * C36094) / C28995);
    const double C33471 =
        C36347 - ((C33457 * C36010) / p + (C33578 * C36088) / C28995);
    const double C33501 = (C33601 * C36008) / C36009 - (C33486 * C36015) / p -
                          (C33606 * C36092) / C28995 + C36347;
    const double C33530 =
        C36347 - ((C33515 * C36018) / p + (C33633 * C36094) / C28995);
    const double C35791 =
        C36363 - ((C35777 * C36010) / p + (C35896 * C36088) / C28995);
    const double C35819 =
        C36363 - ((C35805 * C36015) / p + (C35923 * C36092) / C28995);
    const double C35848 = (C35945 * C36008) / C36009 - (C35834 * C36018) / p -
                          (C35951 * C36094) / C28995 + C36363;
    const double C30859 = (C31124 * C36008) / C36009 - (C30768 * C36010) / p -
                          (C31128 * C36088) / C28995 + C36324;
    const double C30888 =
        C36324 - ((C30804 * C36015) / p + (C31157 * C36092) / C28995);
    const double C30930 =
        C36324 - ((C30831 * C36018) / p + (C31185 * C36094) / C28995);
    const double C33194 =
        C36346 - ((C33125 * C36010) / p + (C33457 * C36088) / C28995);
    const double C33222 = (C33481 * C36008) / C36009 - (C33153 * C36015) / p -
                          (C33486 * C36092) / C28995 + C36346;
    const double C33263 =
        C36346 - ((C33180 * C36018) / p + (C33515 * C36094) / C28995);
    const double C35515 =
        C36362 - ((C35446 * C36010) / p + (C35777 * C36088) / C28995);
    const double C35543 =
        C36362 - ((C35473 * C36015) / p + (C35805 * C36092) / C28995);
    const double C35584 = (C35828 * C36008) / C36009 - (C35501 * C36018) / p -
                          (C35834 * C36094) / C28995 + C36362;
    const double C30163 = (C30764 * C36008) / C36009 - (C30164 * C36010) / p -
                          (C30768 * C36088) / C28995 + C36319;
    const double C30215 =
        C36319 - ((C30229 * C36015) / p + (C30804 * C36092) / C28995);
    const double C30244 =
        C36319 - ((C30258 * C36018) / p + (C30831 * C36094) / C28995);
    const double C32525 =
        C36345 - ((C32511 * C36010) / p + (C33125 * C36088) / C28995);
    const double C32574 = (C33148 * C36008) / C36009 - (C32560 * C36015) / p -
                          (C33153 * C36092) / C28995 + C36345;
    const double C32602 =
        C36345 - ((C32588 * C36018) / p + (C33180 * C36094) / C28995);
    const double C34849 =
        C36361 - ((C34835 * C36010) / p + (C35446 * C36088) / C28995);
    const double C34897 =
        C36361 - ((C34883 * C36015) / p + (C35473 * C36092) / C28995);
    const double C34925 = (C35495 * C36008) / C36009 - (C34911 * C36018) / p -
                          (C35501 * C36094) / C28995 + C36361;
    const double C28999 = (C30175 * C36008) / C36009 - (C29014 * C36010) / p -
                          (C30164 * C36088) / C28995 + C36312;
    const double C29045 =
        C36312 - ((C29155 * C36015) / p + (C30229 * C36092) / C28995);
    const double C29074 =
        C36312 - ((C29279 * C36018) / p + (C30258 * C36094) / C28995);
    const double C31373 =
        C36340 - ((C31388 * C36010) / p + (C32511 * C36088) / C28995);
    const double C31416 = (C32555 * C36008) / C36009 - (C31526 * C36015) / p -
                          (C32560 * C36092) / C28995 + C36340;
    const double C31444 =
        C36340 - ((C31647 * C36018) / p + (C32588 * C36094) / C28995);
    const double C33702 =
        C36356 - ((C33717 * C36010) / p + (C34835 * C36088) / C28995);
    const double C33745 =
        C36356 - ((C33854 * C36015) / p + (C34883 * C36092) / C28995);
    const double C33773 =
        C36272 - (C33975 * C36018) / p - (C34911 * C36094) / C28995 + C36356;
    const double C12901 = (C29025 * C36008) / C36009 - (C15797 * C36010) / p -
                          (C29014 * C36088) / C28995 + C36302;
    const double C13834 =
        C36302 - ((C16164 * C36015) / p + (C29155 * C36092) / C28995);
    const double C14674 =
        C36302 - ((C16431 * C36018) / p + (C29279 * C36094) / C28995);
    const double C18096 =
        C36332 - ((C20898 * C36010) / p + (C31388 * C36088) / C28995);
    const double C19000 =
        C36207 - (C21245 * C36015) / p - (C31526 * C36092) / C28995 + C36332;
    const double C19813 =
        C36332 - ((C21506 * C36018) / p + (C31647 * C36094) / C28995);
    const double C23157 =
        C36348 - ((C25959 * C36010) / p + (C33717 * C36088) / C28995);
    const double C24061 =
        C36348 - ((C26306 * C36015) / p + (C33854 * C36092) / C28995);
    const double C24874 =
        C36208 - (C26567 * C36018) / p - (C33975 * C36094) / C28995 + C36348;
    const double C30874 = (C31139 * C36008) / C36009 - (C30859 * C36010) / p -
                          (C31143 * C36088) / C28995 +
                          (C30768 - (C31128 * C28993) / C28995) / p;
    const double C30902 = (C30804 - (C31157 * C28993) / C28995) / p -
                          ((C30888 * C36015) / p + (C31171 * C36092) / C28995);
    const double C36042 = C30930 * C28993;
    const double C30931 = -((C30930 * C36015) / p + (C31199 * C36092) / C28995);
    const double C31012 = (C30831 - (C31185 * C28993) / C28995) / p -
                          ((C30930 * C36018) / p + (C31199 * C36094) / C28995);
    const double C33208 = (C33125 - (C33457 * C28993) / C28995) / p -
                          ((C33194 * C36010) / p + (C33471 * C36088) / C28995);
    const double C33236 = (C33496 * C36008) / C36009 - (C33222 * C36015) / p -
                          (C33501 * C36092) / C28995 +
                          (C33153 - (C33486 * C28993) / C28995) / p;
    const double C36065 = C33263 * C28993;
    const double C33278 =
        C36281 - (C33263 * C36015) / p - (C33530 * C36092) / C28995;
    const double C33344 = (C33180 - (C33515 * C28993) / C28995) / p -
                          ((C33263 * C36018) / p + (C33530 * C36094) / C28995);
    const double C35529 = (C35446 - (C35777 * C28993) / C28995) / p -
                          ((C35515 * C36010) / p + (C35791 * C36088) / C28995);
    const double C35557 = (C35473 - (C35805 * C28993) / C28995) / p -
                          ((C35543 * C36015) / p + (C35819 * C36092) / C28995);
    const double C36084 = C35584 * C28993;
    const double C35598 = -((C35584 * C36015) / p + (C35848 * C36092) / C28995);
    const double C35664 = C36281 - (C35584 * C36018) / p -
                          (C35848 * C36094) / C28995 +
                          (C35501 - (C35834 * C28993) / C28995) / p;
    const double C30377 = (C30855 * C36008) / C36009 - (C30163 * C36010) / p -
                          (C30859 * C36088) / C28995 +
                          (C30164 - (C30768 * C28993) / C28995) / p;
    const double C36036 = C30215 * C28993;
    const double C30459 = (C30229 - (C30804 * C28993) / C28995) / p -
                          ((C30215 * C36015) / p + (C30888 * C36092) / C28995);
    const double C30502 =
        C36250 - (C30215 * C36010) / p - (C30888 * C36088) / C28995;
    const double C36037 = C30244 * C28993;
    const double C30531 = -((C30244 * C36015) / p + (C30930 * C36092) / C28995);
    const double C30546 =
        C36252 - (C30244 * C36010) / p - (C30930 * C36088) / C28995;
    const double C30590 = (C30258 - (C30831 * C28993) / C28995) / p -
                          ((C30244 * C36018) / p + (C30930 * C36094) / C28995);
    const double C32721 = (C32511 - (C33125 * C28993) / C28995) / p -
                          ((C32525 * C36010) / p + (C33194 * C36088) / C28995);
    const double C36060 = C32574 * C28993;
    const double C32801 = C36250 - (C32574 * C36015) / p -
                          (C33222 * C36092) / C28995 +
                          (C32560 - (C33153 * C28993) / C28995) / p;
    const double C32842 = -((C32574 * C36010) / p + (C33222 * C36088) / C28995);
    const double C36061 = C32602 * C28993;
    const double C32857 =
        C36252 - (C32602 * C36015) / p - (C33263 * C36092) / C28995;
    const double C32885 = -((C32602 * C36010) / p + (C33263 * C36088) / C28995);
    const double C32928 = (C32588 - (C33180 * C28993) / C28995) / p -
                          ((C32602 * C36018) / p + (C33263 * C36094) / C28995);
    const double C35043 = (C34835 - (C35446 * C28993) / C28995) / p -
                          ((C34849 * C36010) / p + (C35515 * C36088) / C28995);
    const double C36079 = C34897 * C28993;
    const double C35123 = (C34883 - (C35473 * C28993) / C28995) / p -
                          ((C34897 * C36015) / p + (C35543 * C36092) / C28995);
    const double C35164 = -((C34897 * C36010) / p + (C35543 * C36088) / C28995);
    const double C36080 = C34925 * C28993;
    const double C35178 = -((C34925 * C36015) / p + (C35584 * C36092) / C28995);
    const double C35206 = -((C34925 * C36010) / p + (C35584 * C36088) / C28995);
    const double C35248 = C36252 - (C34925 * C36018) / p -
                          (C35584 * C36094) / C28995 +
                          (C34911 - (C35501 * C28993) / C28995) / p;
    const double C28998 = C36231 - (C28999 * C36010) / p -
                          (C30163 * C36088) / C28995 +
                          (C29014 - (C30164 * C28993) / C28995) / p;
    const double C29127 = -((C28999 * C36018) / p + (C30163 * C36094) / C28995);
    const double C36014 = C29045 * C28993;
    const double C29044 =
        C36234 - (C29045 * C36010) / p - (C30215 * C36088) / C28995;
    const double C29169 = (C29155 - (C30229 * C28993) / C28995) / p -
                          ((C29045 * C36015) / p + (C30215 * C36092) / C28995);
    const double C29238 = -((C29045 * C36018) / p + (C30215 * C36094) / C28995);
    const double C36017 = C29074 * C28993;
    const double C29073 =
        C36235 - (C29074 * C36010) / p - (C30244 * C36088) / C28995;
    const double C29196 = -((C29074 * C36015) / p + (C30244 * C36092) / C28995);
    const double C29306 = (C29279 - (C30258 * C28993) / C28995) / p -
                          ((C29074 * C36018) / p + (C30244 * C36094) / C28995);
    const double C31374 = (C31388 - (C32511 * C28993) / C28995) / p -
                          ((C31373 * C36010) / p + (C32525 * C36088) / C28995);
    const double C31499 = -((C31373 * C36018) / p + (C32525 * C36094) / C28995);
    const double C36050 = C31416 * C28993;
    const double C31417 = -((C31416 * C36010) / p + (C32574 * C36088) / C28995);
    const double C31540 = C36234 - (C31416 * C36015) / p -
                          (C32574 * C36092) / C28995 +
                          (C31526 - (C32560 * C28993) / C28995) / p;
    const double C31607 = -((C31416 * C36018) / p + (C32574 * C36094) / C28995);
    const double C36051 = C31444 * C28993;
    const double C31445 = -((C31444 * C36010) / p + (C32602 * C36088) / C28995);
    const double C31567 =
        C36235 - (C31444 * C36015) / p - (C32602 * C36092) / C28995;
    const double C31674 = (C31647 - (C32588 * C28993) / C28995) / p -
                          ((C31444 * C36018) / p + (C32602 * C36094) / C28995);
    const double C33703 = (C33717 - (C34835 * C28993) / C28995) / p -
                          ((C33702 * C36010) / p + (C34849 * C36088) / C28995);
    const double C33827 =
        C36231 - (C33702 * C36018) / p - (C34849 * C36094) / C28995;
    const double C36069 = C33745 * C28993;
    const double C33746 = -((C33745 * C36010) / p + (C34897 * C36088) / C28995);
    const double C33868 = (C33854 - (C34883 * C28993) / C28995) / p -
                          ((C33745 * C36015) / p + (C34897 * C36092) / C28995);
    const double C33935 =
        C36234 - (C33745 * C36018) / p - (C34897 * C36094) / C28995;
    const double C36070 = C33773 * C28993;
    const double C33774 = -((C33773 * C36010) / p + (C34925 * C36088) / C28995);
    const double C33895 = -((C33773 * C36015) / p + (C34925 * C36092) / C28995);
    const double C34002 = C36235 - (C33773 * C36018) / p -
                          (C34925 * C36094) / C28995 +
                          (C33975 - (C34911 * C28993) / C28995) / p;
    const double C12884 = C36198 - (C12901 * C36010) / p -
                          (C28999 * C36088) / C28995 +
                          (C15797 - (C29014 * C28993) / C28995) / p;
    const double C13173 = -((C12901 * C36015) / p + (C28999 * C36092) / C28995);
    const double C13367 = -((C12901 * C36018) / p + (C28999 * C36094) / C28995);
    const double C13818 =
        C36202 - (C13834 * C36010) / p - (C29045 * C36088) / C28995;
    const double C14023 = (C16164 - (C29155 * C28993) / C28995) / p -
                          ((C13834 * C36015) / p + (C29045 * C36092) / C28995);
    const double C14211 = -((C13834 * C36018) / p + (C29045 * C36094) / C28995);
    const double C14658 =
        C36204 - (C14674 * C36010) / p - (C29074 * C36088) / C28995;
    const double C14842 = -((C14674 * C36015) / p + (C29074 * C36092) / C28995);
    const double C14951 = (C16431 - (C29279 * C28993) / C28995) / p -
                          ((C14674 * C36018) / p + (C29074 * C36094) / C28995);
    const double C18080 = (C20898 - (C31388 * C28993) / C28995) / p -
                          ((C18096 * C36010) / p + (C31373 * C36088) / C28995);
    const double C18360 =
        C36198 - (C18096 * C36015) / p - (C31373 * C36092) / C28995;
    const double C18548 = -((C18096 * C36018) / p + (C31373 * C36094) / C28995);
    const double C18985 = -((C19000 * C36010) / p + (C31416 * C36088) / C28995);
    const double C19182 = C36202 - (C19000 * C36015) / p -
                          (C31416 * C36092) / C28995 +
                          (C21245 - (C31526 * C28993) / C28995) / p;
    const double C19364 = -((C19000 * C36018) / p + (C31416 * C36094) / C28995);
    const double C19798 = -((C19813 * C36010) / p + (C31444 * C36088) / C28995);
    const double C19975 =
        C36204 - (C19813 * C36015) / p - (C31444 * C36092) / C28995;
    const double C20080 = (C21506 - (C31647 * C28993) / C28995) / p -
                          ((C19813 * C36018) / p + (C31444 * C36094) / C28995);
    const double C23141 = (C25959 - (C33717 * C28993) / C28995) / p -
                          ((C23157 * C36010) / p + (C33702 * C36088) / C28995);
    const double C23421 = -((C23157 * C36015) / p + (C33702 * C36092) / C28995);
    const double C23609 =
        C36198 - (C23157 * C36018) / p - (C33702 * C36094) / C28995;
    const double C24046 = -((C24061 * C36010) / p + (C33745 * C36088) / C28995);
    const double C24243 = (C26306 - (C33854 * C28993) / C28995) / p -
                          ((C24061 * C36015) / p + (C33745 * C36092) / C28995);
    const double C24425 =
        C36202 - (C24061 * C36018) / p - (C33745 * C36094) / C28995;
    const double C24859 = -((C24874 * C36010) / p + (C33773 * C36088) / C28995);
    const double C25036 = -((C24874 * C36015) / p + (C33773 * C36092) / C28995);
    const double C25141 = C36204 - (C24874 * C36018) / p -
                          (C33773 * C36094) / C28995 +
                          (C26567 - (C33975 * C28993) / C28995) / p;
    const double C36146 = C36042 / C28995;
    const double C36174 = C36065 / C28995;
    const double C36194 = C36084 / C28995;
    const double C36035 = C30377 * C28993;
    const double C30392 = C36249 - (C30377 * C36010) / p -
                          (C30874 * C36088) / C28995 +
                          (3 * (C30163 - (C30859 * C28993) / C28995)) / C36012;
    const double C30575 = -((C30377 * C36015) / p + (C30874 * C36092) / C28995);
    const double C30632 = -((C30377 * C36018) / p + (C30874 * C36094) / C28995);
    const double C36136 = C36036 / C28995;
    const double C36038 = C30459 * C28993;
    const double C30474 = (3 * (C30215 - (C30888 * C28993) / C28995)) / C36012 -
                          ((C30459 * C36015) / p + (C30902 * C36092) / C28995);
    const double C30561 =
        C36253 - (C30459 * C36010) / p - (C30902 * C36088) / C28995;
    const double C30726 = -((C30459 * C36018) / p + (C30902 * C36094) / C28995);
    const double C36137 = C36037 / C28995;
    const double C36039 = C30590 * C28993;
    const double C30647 =
        C36254 - (C30590 * C36010) / p - (C31012 * C36088) / C28995;
    const double C30740 = -((C30590 * C36015) / p + (C31012 * C36092) / C28995);
    const double C36059 = C32721 * C28993;
    const double C32735 = (3 * (C32525 - (C33194 * C28993) / C28995)) / C36012 -
                          ((C32721 * C36010) / p + (C33208 * C36088) / C28995);
    const double C32914 =
        C36249 - (C32721 * C36015) / p - (C33208 * C36092) / C28995;
    const double C32969 = -((C32721 * C36018) / p + (C33208 * C36094) / C28995);
    const double C36169 = C36060 / C28995;
    const double C36062 = C32801 * C28993;
    const double C32828 = C36253 - (C32801 * C36015) / p -
                          (C33236 * C36092) / C28995 +
                          (3 * (C32574 - (C33222 * C28993) / C28995)) / C36012;
    const double C32899 = -((C32801 * C36010) / p + (C33236 * C36088) / C28995);
    const double C33062 = -((C32801 * C36018) / p + (C33236 * C36094) / C28995);
    const double C36170 = C36061 / C28995;
    const double C36063 = C32928 * C28993;
    const double C32983 = -((C32928 * C36010) / p + (C33344 * C36088) / C28995);
    const double C33077 =
        C36254 - (C32928 * C36015) / p - (C33344 * C36092) / C28995;
    const double C36078 = C35043 * C28993;
    const double C35057 = (3 * (C34849 - (C35515 * C28993) / C28995)) / C36012 -
                          ((C35043 * C36010) / p + (C35529 * C36088) / C28995);
    const double C35234 = -((C35043 * C36015) / p + (C35529 * C36092) / C28995);
    const double C35290 =
        C36249 - (C35043 * C36018) / p - (C35529 * C36094) / C28995;
    const double C36189 = C36079 / C28995;
    const double C36081 = C35123 * C28993;
    const double C35150 = (3 * (C34897 - (C35543 * C28993) / C28995)) / C36012 -
                          ((C35123 * C36015) / p + (C35557 * C36092) / C28995);
    const double C35220 = -((C35123 * C36010) / p + (C35557 * C36088) / C28995);
    const double C35384 =
        C36253 - (C35123 * C36018) / p - (C35557 * C36094) / C28995;
    const double C36190 = C36080 / C28995;
    const double C36082 = C35248 * C28993;
    const double C35304 = -((C35248 * C36010) / p + (C35664 * C36088) / C28995);
    const double C35398 = -((C35248 * C36015) / p + (C35664 * C36092) / C28995);
    const double C36020 = C28998 * C28993;
    const double C29431 = C36236 - (C28998 * C36010) / p -
                          (C30377 * C36088) / C28995 +
                          (3 * (C28999 - (C30163 * C28993) / C28995)) / C36012;
    const double C29508 = -((C28998 * C36015) / p + (C30377 * C36092) / C28995);
    const double C29549 = -((C28998 * C36018) / p + (C30377 * C36094) / C28995);
    const double C36091 = C36014 / C28995;
    const double C36029 = C29169 * C28993;
    const double C29629 =
        C36239 - (C29169 * C36010) / p - (C30459 * C36088) / C28995;
    const double C29860 = -((C29169 * C36018) / p + (C30459 * C36094) / C28995);
    const double C36093 = C36017 / C28995;
    const double C36031 = C29306 * C28993;
    const double C29759 =
        C36244 - (C29306 * C36010) / p - (C30590 * C36088) / C28995;
    const double C29982 = -((C29306 * C36015) / p + (C30590 * C36092) / C28995);
    const double C36052 = C31374 * C28993;
    const double C31793 = (3 * (C31373 - (C32525 * C28993) / C28995)) / C36012 -
                          ((C31374 * C36010) / p + (C32721 * C36088) / C28995);
    const double C31870 =
        C36236 - (C31374 * C36015) / p - (C32721 * C36092) / C28995;
    const double C31911 = -((C31374 * C36018) / p + (C32721 * C36094) / C28995);
    const double C36156 = C36050 / C28995;
    const double C36054 = C31540 * C28993;
    const double C31992 = -((C31540 * C36010) / p + (C32801 * C36088) / C28995);
    const double C32216 = -((C31540 * C36018) / p + (C32801 * C36094) / C28995);
    const double C36157 = C36051 / C28995;
    const double C36056 = C31674 * C28993;
    const double C32119 = -((C31674 * C36010) / p + (C32928 * C36088) / C28995);
    const double C32336 =
        C36244 - (C31674 * C36015) / p - (C32928 * C36092) / C28995;
    const double C36071 = C33703 * C28993;
    const double C34121 = (3 * (C33702 - (C34849 * C28993) / C28995)) / C36012 -
                          ((C33703 * C36010) / p + (C35043 * C36088) / C28995);
    const double C34196 = -((C33703 * C36015) / p + (C35043 * C36092) / C28995);
    const double C34237 =
        C36236 - (C33703 * C36018) / p - (C35043 * C36094) / C28995;
    const double C36179 = C36069 / C28995;
    const double C36073 = C33868 * C28993;
    const double C34316 = -((C33868 * C36010) / p + (C35123 * C36088) / C28995);
    const double C34540 =
        C36239 - (C33868 * C36018) / p - (C35123 * C36094) / C28995;
    const double C36180 = C36070 / C28995;
    const double C36075 = C34002 * C28993;
    const double C34444 = -((C34002 * C36010) / p + (C35248 * C36088) / C28995);
    const double C34660 = -((C34002 * C36015) / p + (C35248 * C36092) / C28995);
    const double C12865 = C36197 - (C12884 * C36010) / p -
                          (C28998 * C36088) / C28995 +
                          (3 * (C12901 - (C28999 * C28993) / C28995)) / C36012;
    const double C13542 = -((C12884 * C36015) / p + (C28998 * C36092) / C28995);
    const double C13632 = -((C12884 * C36018) / p + (C28998 * C36094) / C28995);
    const double C13725 = -((C13367 * C36015) / p + (C29127 * C36092) / C28995);
    const double C14386 =
        C36203 - (C14023 * C36010) / p - (C29169 * C36088) / C28995;
    const double C14567 = -((C14023 * C36018) / p + (C29169 * C36094) / C28995);
    const double C14476 = (C29234 * C36008) / C36009 - (C14211 * C36010) / p -
                          (C29238 * C36088) / C28995;
    const double C15122 =
        C36205 - (C14842 * C36010) / p - (C29196 * C36088) / C28995;
    const double C15212 =
        C36206 - (C14951 * C36010) / p - (C29306 * C36088) / C28995;
    const double C15304 = -((C14951 * C36015) / p + (C29306 * C36092) / C28995);
    const double C18063 = (3 * (C18096 - (C31373 * C28993) / C28995)) / C36012 -
                          ((C18080 * C36010) / p + (C31374 * C36088) / C28995);
    const double C18718 =
        C36197 - (C18080 * C36015) / p - (C31374 * C36092) / C28995;
    const double C18805 = -((C18080 * C36018) / p + (C31374 * C36094) / C28995);
    const double C18895 = (C31494 * C36008) / C36009 - (C18548 * C36015) / p -
                          (C31499 * C36092) / C28995;
    const double C19535 = -((C19182 * C36010) / p + (C31540 * C36088) / C28995);
    const double C19709 = -((C19182 * C36018) / p + (C31540 * C36094) / C28995);
    const double C19622 = -((C19364 * C36010) / p + (C31607 * C36088) / C28995);
    const double C20247 = -((C19975 * C36010) / p + (C31567 * C36088) / C28995);
    const double C20334 = -((C20080 * C36010) / p + (C31674 * C36088) / C28995);
    const double C20422 =
        C36206 - (C20080 * C36015) / p - (C31674 * C36092) / C28995;
    const double C23124 = (3 * (C23157 - (C33702 * C28993) / C28995)) / C36012 -
                          ((C23141 * C36010) / p + (C33703 * C36088) / C28995);
    const double C23779 = -((C23141 * C36015) / p + (C33703 * C36092) / C28995);
    const double C23866 =
        C36197 - (C23141 * C36018) / p - (C33703 * C36094) / C28995;
    const double C23956 = -((C23609 * C36015) / p + (C33827 * C36092) / C28995);
    const double C24596 = -((C24243 * C36010) / p + (C33868 * C36088) / C28995);
    const double C24770 =
        C36203 - (C24243 * C36018) / p - (C33868 * C36094) / C28995;
    const double C24683 = -((C24425 * C36010) / p + (C33935 * C36088) / C28995);
    const double C25308 = -((C25036 * C36010) / p + (C33895 * C36088) / C28995);
    const double C25395 = -((C25141 * C36010) / p + (C34002 * C36088) / C28995);
    const double C25483 = -((C25141 * C36015) / p + (C34002 * C36092) / C28995);
    const double C36251 = C30244 - C36146;
    const double C36279 = C32602 - C36174;
    const double C36299 = C34925 - C36194;
    const double C36133 = C36035 / C28995;
    const double C36241 = C29045 - C36136;
    const double C36138 = C36038 / C28995;
    const double C36242 = C29074 - C36137;
    const double C36141 = C36039 / C28995;
    const double C36168 = C36059 / C28995;
    const double C36274 = C31416 - C36169;
    const double C36171 = C36062 / C28995;
    const double C36275 = C31444 - C36170;
    const double C36172 = C36063 / C28995;
    const double C36188 = C36078 / C28995;
    const double C36294 = C33745 - C36189;
    const double C36191 = C36081 / C28995;
    const double C36295 = C33773 - C36190;
    const double C36192 = C36082 / C28995;
    const double C36103 = C36020 / C28995;
    const double C36021 = C29431 * C28993;
    const double C29494 = -((C29431 * C36015) / p + (C30392 * C36092) / C28995);
    const double C29535 = -((C29431 * C36018) / p + (C30392 * C36094) / C28995);
    const double C36200 = C13834 - C36091;
    const double C36111 = C36029 / C28995;
    const double C36201 = C14674 - C36093;
    const double C36114 = C36031 / C28995;
    const double C36158 = C36052 / C28995;
    const double C36053 = C31793 * C28993;
    const double C31855 =
        C36237 - (C31793 * C36015) / p - (C32735 * C36092) / C28995;
    const double C31897 = -((C31793 * C36018) / p + (C32735 * C36094) / C28995);
    const double C36261 = C19000 - C36156;
    const double C36162 = C36054 / C28995;
    const double C36262 = C19813 - C36157;
    const double C36164 = C36056 / C28995;
    const double C36181 = C36071 / C28995;
    const double C36072 = C34121 * C28993;
    const double C34182 = -((C34121 * C36015) / p + (C35057 * C36092) / C28995);
    const double C34223 =
        C36237 - (C34121 * C36018) / p - (C35057 * C36094) / C28995;
    const double C36284 = C24061 - C36179;
    const double C36183 = C36073 / C28995;
    const double C36285 = C24874 - C36180;
    const double C36185 = C36075 / C28995;
    const double C15827 = -((C12865 * C36015) / p + (C29431 * C36092) / C28995);
    const double C15914 = -((C12865 * C36018) / p + (C29431 * C36094) / C28995);
    const double C16074 = -((C13632 * C36015) / p + (C29549 * C36092) / C28995);
    const double C16935 =
        C36223 - (C14567 * C36010) / p - (C29860 * C36088) / C28995;
    const double C17620 =
        C36228 - (C15304 * C36010) / p - (C29982 * C36088) / C28995;
    const double C20927 =
        C36209 - (C18063 * C36015) / p - (C31793 * C36092) / C28995;
    const double C21014 = -((C18063 * C36018) / p + (C31793 * C36094) / C28995);
    const double C21174 =
        C36266 - (C18805 * C36015) / p - (C31911 * C36092) / C28995;
    const double C22017 = -((C19709 * C36010) / p + (C32216 * C36088) / C28995);
    const double C22692 = -((C20422 * C36010) / p + (C32336 * C36088) / C28995);
    const double C25988 = -((C23124 * C36015) / p + (C34121 * C36092) / C28995);
    const double C26075 =
        C36209 - (C23124 * C36018) / p - (C34121 * C36094) / C28995;
    const double C26235 = -((C23866 * C36015) / p + (C34237 * C36092) / C28995);
    const double C27078 = -((C24770 * C36010) / p + (C34540 * C36088) / C28995);
    const double C27750 = -((C25483 * C36010) / p + (C34660 * C36088) / C28995);
    const double C30517 =
        C36251 / C36012 - ((C30531 * C36015) / p + (C30931 * C36092) / C28995);
    const double C30605 = (3 * C36251) / C36012 -
                          ((C30590 * C36018) / p + (C31012 * C36094) / C28995);
    const double C32871 = (C33273 * C36008) / C36009 - (C32857 * C36015) / p -
                          (C33278 * C36092) / C28995 + C36279 / C36012;
    const double C32955 = (3 * C36279) / C36012 -
                          ((C32928 * C36018) / p + (C33344 * C36094) / C28995);
    const double C35192 =
        C36299 / C36012 - ((C35178 * C36015) / p + (C35598 * C36092) / C28995);
    const double C35275 = C36254 - (C35248 * C36018) / p -
                          (C35664 * C36094) / C28995 + (3 * C36299) / C36012;
    const double C36238 = C28998 - C36133;
    const double C29645 = (3 * C36241) / C36012 -
                          ((C29169 * C36015) / p + (C30459 * C36092) / C28995);
    const double C29659 = (C30498 * C36008) / C36009 - (C29044 * C36010) / p -
                          (C30502 * C36088) / C28995 + C36241 / C36012;
    const double C36243 = C29169 - C36138;
    const double C36315 = C36242 / C36012;
    const double C29775 = (3 * C36242) / C36012 -
                          ((C29306 * C36018) / p + (C30590 * C36094) / C28995);
    const double C36246 = C29306 - C36141;
    const double C36273 = C31374 - C36168;
    const double C32006 = C36239 - (C31540 * C36015) / p -
                          (C32801 * C36092) / C28995 + (3 * C36274) / C36012;
    const double C32021 =
        C36274 / C36012 - ((C31417 * C36010) / p + (C32842 * C36088) / C28995);
    const double C36276 = C31540 - C36171;
    const double C36341 = C36275 / C36012;
    const double C32133 = (3 * C36275) / C36012 -
                          ((C31674 * C36018) / p + (C32928 * C36094) / C28995);
    const double C36277 = C31674 - C36172;
    const double C36293 = C33703 - C36188;
    const double C34330 = (3 * C36294) / C36012 -
                          ((C33868 * C36015) / p + (C35123 * C36092) / C28995);
    const double C34346 =
        C36294 / C36012 - ((C33746 * C36010) / p + (C35164 * C36088) / C28995);
    const double C36296 = C33868 - C36191;
    const double C36357 = C36295 / C36012;
    const double C34458 = C36244 - (C34002 * C36018) / p -
                          (C35248 * C36094) / C28995 + (3 * C36295) / C36012;
    const double C36297 = C34002 - C36192;
    const double C36210 = C12884 - C36103;
    const double C36105 = C36021 / C28995;
    const double C13154 = (C29040 * C36008) / C36009 - (C13818 * C36010) / p -
                          (C29044 * C36088) / C28995 + C36200 / C36012;
    const double C14005 = (3 * C36200) / C36012 -
                          ((C14023 * C36015) / p + (C29169 * C36092) / C28995);
    const double C36216 = C14023 - C36111;
    const double C36303 = C36201 / C36012;
    const double C14933 = (3 * C36201) / C36012 -
                          ((C14951 * C36018) / p + (C29306 * C36094) / C28995);
    const double C36219 = C14951 - C36114;
    const double C36263 = C18080 - C36158;
    const double C36159 = C36053 / C28995;
    const double C18342 =
        C36261 / C36012 - ((C18985 * C36010) / p + (C31417 * C36088) / C28995);
    const double C19165 = C36203 - (C19182 * C36015) / p -
                          (C31540 * C36092) / C28995 + (3 * C36261) / C36012;
    const double C36267 = C19182 - C36162;
    const double C36333 = C36262 / C36012;
    const double C20063 = (3 * C36262) / C36012 -
                          ((C20080 * C36018) / p + (C31674 * C36094) / C28995);
    const double C36269 = C20080 - C36164;
    const double C36286 = C23141 - C36181;
    const double C36182 = C36072 / C28995;
    const double C23403 =
        C36284 / C36012 - ((C24046 * C36010) / p + (C33746 * C36088) / C28995);
    const double C24226 = (3 * C36284) / C36012 -
                          ((C24243 * C36015) / p + (C33868 * C36092) / C28995);
    const double C36288 = C24243 - C36183;
    const double C36349 = C36285 / C36012;
    const double C25124 = C36206 - (C25141 * C36018) / p -
                          (C34002 * C36094) / C28995 + (3 * C36285) / C36012;
    const double C36290 = C25141 - C36185;
    const double C16059 = -((C15914 * C36015) / p + (C29535 * C36092) / C28995);
    const double C21159 =
        C36265 - (C21014 * C36015) / p - (C31897 * C36092) / C28995;
    const double C26220 = -((C26075 * C36015) / p + (C34223 * C36092) / C28995);
    const double C36317 = C36238 / C36012;
    const double C29446 = C36237 - (C29431 * C36010) / p -
                          (C30392 * C36088) / C28995 + (2 * C36238) / p;
    const double C36030 = C29645 * C28993;
    const double C29644 =
        C36240 - (C29645 * C36010) / p - (C30474 * C36088) / C28995;
    const double C29914 = -((C29645 * C36018) / p + (C30474 * C36094) / C28995);
    const double C36316 = C36243 / C36012;
    const double C29887 =
        (2 * C36243) / p - ((C29645 * C36015) / p + (C30474 * C36092) / C28995);
    const double C29675 =
        C36315 - ((C29196 * C36015) / p + (C30531 * C36092) / C28995);
    const double C29689 = (C30542 * C36008) / C36009 - (C29073 * C36010) / p -
                          (C30546 * C36088) / C28995 + C36315;
    const double C36032 = C29775 * C28993;
    const double C29774 =
        C36245 - (C29775 * C36010) / p - (C30605 * C36088) / C28995;
    const double C29996 = -((C29775 * C36015) / p + (C30605 * C36092) / C28995);
    const double C36318 = C36246 / C36012;
    const double C30107 =
        (2 * C36246) / p - ((C29775 * C36018) / p + (C30605 * C36094) / C28995);
    const double C36343 = C36273 / C36012;
    const double C31807 =
        (2 * C36273) / p - ((C31793 * C36010) / p + (C32735 * C36088) / C28995);
    const double C36055 = C32006 * C28993;
    const double C32007 = -((C32006 * C36010) / p + (C32828 * C36088) / C28995);
    const double C32270 = -((C32006 * C36018) / p + (C32828 * C36094) / C28995);
    const double C36342 = C36276 / C36012;
    const double C32243 = C36240 - (C32006 * C36015) / p -
                          (C32828 * C36092) / C28995 + (2 * C36276) / p;
    const double C32035 = (C32852 * C36008) / C36009 - (C31567 * C36015) / p -
                          (C32857 * C36092) / C28995 + C36341;
    const double C32051 =
        C36341 - ((C31445 * C36010) / p + (C32885 * C36088) / C28995);
    const double C36057 = C32133 * C28993;
    const double C32134 = -((C32133 * C36010) / p + (C32955 * C36088) / C28995);
    const double C32350 =
        C36245 - (C32133 * C36015) / p - (C32955 * C36092) / C28995;
    const double C36344 = C36277 / C36012;
    const double C32457 =
        (2 * C36277) / p - ((C32133 * C36018) / p + (C32955 * C36094) / C28995);
    const double C36359 = C36293 / C36012;
    const double C34135 =
        (2 * C36293) / p - ((C34121 * C36010) / p + (C35057 * C36088) / C28995);
    const double C36074 = C34330 * C28993;
    const double C34331 = -((C34330 * C36010) / p + (C35150 * C36088) / C28995);
    const double C34594 =
        C36240 - (C34330 * C36018) / p - (C35150 * C36094) / C28995;
    const double C36358 = C36296 / C36012;
    const double C34567 =
        (2 * C36296) / p - ((C34330 * C36015) / p + (C35150 * C36092) / C28995);
    const double C34360 =
        C36357 - ((C33895 * C36015) / p + (C35178 * C36092) / C28995);
    const double C34375 =
        C36357 - ((C33774 * C36010) / p + (C35206 * C36088) / C28995);
    const double C36076 = C34458 * C28993;
    const double C34459 = -((C34458 * C36010) / p + (C35275 * C36088) / C28995);
    const double C34674 = -((C34458 * C36015) / p + (C35275 * C36092) / C28995);
    const double C36360 = C36297 / C36012;
    const double C34781 = C36245 - (C34458 * C36018) / p -
                          (C35275 * C36094) / C28995 + (2 * C36297) / p;
    const double C36307 = C36210 / C36012;
    const double C15750 = C36209 - (C12865 * C36010) / p -
                          (C29431 * C36088) / C28995 + (2 * C36210) / p;
    const double C36212 = C12865 - C36105;
    const double C16224 = -((C13154 * C36018) / p + (C29659 * C36094) / C28995);
    const double C16836 =
        C36222 - (C14005 * C36010) / p - (C29645 * C36088) / C28995;
    const double C17068 = -((C14005 * C36018) / p + (C29645 * C36094) / C28995);
    const double C36308 = C36216 / C36012;
    const double C17038 =
        (2 * C36216) / p - ((C14005 * C36015) / p + (C29645 * C36092) / C28995);
    const double C13348 = (C29069 * C36008) / C36009 - (C14658 * C36010) / p -
                          (C29073 * C36088) / C28995 + C36303;
    const double C14193 =
        C36303 - ((C14842 * C36015) / p + (C29196 * C36092) / C28995);
    const double C17564 =
        C36227 - (C14933 * C36010) / p - (C29775 * C36088) / C28995;
    const double C17665 = -((C14933 * C36015) / p + (C29775 * C36092) / C28995);
    const double C36310 = C36219 / C36012;
    const double C17796 =
        (2 * C36219) / p - ((C14933 * C36018) / p + (C29775 * C36094) / C28995);
    const double C36335 = C36263 / C36012;
    const double C20868 =
        (2 * C36263) / p - ((C18063 * C36010) / p + (C31793 * C36088) / C28995);
    const double C36264 = C18063 - C36159;
    const double C21318 = -((C18342 * C36018) / p + (C32021 * C36094) / C28995);
    const double C21918 = -((C19165 * C36010) / p + (C32006 * C36088) / C28995);
    const double C22147 = -((C19165 * C36018) / p + (C32006 * C36094) / C28995);
    const double C36336 = C36267 / C36012;
    const double C22116 = C36222 - (C19165 * C36015) / p -
                          (C32006 * C36092) / C28995 + (2 * C36267) / p;
    const double C18530 =
        C36333 - ((C19798 * C36010) / p + (C31445 * C36088) / C28995);
    const double C19347 =
        C36205 - (C19975 * C36015) / p - (C31567 * C36092) / C28995 + C36333;
    const double C22636 = -((C20063 * C36010) / p + (C32133 * C36088) / C28995);
    const double C22735 =
        C36227 - (C20063 * C36015) / p - (C32133 * C36092) / C28995;
    const double C36338 = C36269 / C36012;
    const double C22863 =
        (2 * C36269) / p - ((C20063 * C36018) / p + (C32133 * C36094) / C28995);
    const double C36351 = C36286 / C36012;
    const double C25929 =
        (2 * C36286) / p - ((C23124 * C36010) / p + (C34121 * C36088) / C28995);
    const double C36287 = C23124 - C36182;
    const double C26379 = (C34340 * C36008) / C36009 - (C23403 * C36018) / p -
                          (C34346 * C36094) / C28995;
    const double C26979 = -((C24226 * C36010) / p + (C34330 * C36088) / C28995);
    const double C27207 =
        C36222 - (C24226 * C36018) / p - (C34330 * C36094) / C28995;
    const double C36352 = C36288 / C36012;
    const double C27177 =
        (2 * C36288) / p - ((C24226 * C36015) / p + (C34330 * C36092) / C28995);
    const double C23591 =
        C36349 - ((C24859 * C36010) / p + (C33774 * C36088) / C28995);
    const double C24408 =
        C36349 - ((C25036 * C36015) / p + (C33895 * C36092) / C28995);
    const double C27694 = -((C25124 * C36010) / p + (C34458 * C36088) / C28995);
    const double C27793 = -((C25124 * C36015) / p + (C34458 * C36092) / C28995);
    const double C36354 = C36290 / C36012;
    const double C27920 = C36227 - (C25124 * C36018) / p -
                          (C34458 * C36094) / C28995 + (2 * C36290) / p;
    const double C29718 =
        C36317 - ((C29508 * C36015) / p + (C30575 * C36092) / C28995);
    const double C29789 =
        C36317 - ((C29549 * C36018) / p + (C30632 * C36094) / C28995);
    const double C36112 = C36030 / C28995;
    const double C29704 = (C30557 * C36008) / C36009 - (C29629 * C36010) / p -
                          (C30561 * C36088) / C28995 + C36316;
    const double C30011 =
        C36316 - ((C29860 * C36018) / p + (C30726 * C36094) / C28995);
    const double C29674 = (C30513 * C36008) / C36009 - (C29675 * C36010) / p -
                          (C30517 * C36088) / C28995;
    const double C36115 = C36032 / C28995;
    const double C29804 = (C30643 * C36008) / C36009 - (C29759 * C36010) / p -
                          (C30647 * C36088) / C28995 + C36318;
    const double C30026 =
        C36318 - ((C29982 * C36015) / p + (C30740 * C36092) / C28995);
    const double C32079 = (C32909 * C36008) / C36009 - (C31870 * C36015) / p -
                          (C32914 * C36092) / C28995 + C36343;
    const double C32149 =
        C36343 - ((C31911 * C36018) / p + (C32969 * C36094) / C28995);
    const double C36163 = C36055 / C28995;
    const double C32065 =
        C36342 - ((C31992 * C36010) / p + (C32899 * C36088) / C28995);
    const double C32364 =
        C36342 - ((C32216 * C36018) / p + (C33062 * C36094) / C28995);
    const double C32036 = -((C32035 * C36010) / p + (C32871 * C36088) / C28995);
    const double C36165 = C36057 / C28995;
    const double C32163 =
        C36344 - ((C32119 * C36010) / p + (C32983 * C36088) / C28995);
    const double C32378 = (C33072 * C36008) / C36009 - (C32336 * C36015) / p -
                          (C33077 * C36092) / C28995 + C36344;
    const double C34404 =
        C36359 - ((C34196 * C36015) / p + (C35234 * C36092) / C28995);
    const double C34473 = (C35284 * C36008) / C36009 - (C34237 * C36018) / p -
                          (C35290 * C36094) / C28995 + C36359;
    const double C36184 = C36074 / C28995;
    const double C34389 =
        C36358 - ((C34316 * C36010) / p + (C35220 * C36088) / C28995);
    const double C34688 = (C35378 * C36008) / C36009 - (C34540 * C36018) / p -
                          (C35384 * C36094) / C28995 + C36358;
    const double C34361 = -((C34360 * C36010) / p + (C35192 * C36088) / C28995);
    const double C36186 = C36076 / C28995;
    const double C34487 =
        C36360 - ((C34444 * C36010) / p + (C35304 * C36088) / C28995);
    const double C34702 =
        C36360 - ((C34660 * C36015) / p + (C35398 * C36092) / C28995);
    const double C15871 =
        C36307 - ((C13542 * C36015) / p + (C29508 * C36092) / C28995);
    const double C15958 =
        C36307 - ((C13632 * C36018) / p + (C29549 * C36094) / C28995);
    const double C16001 = -((C15750 * C36015) / p + (C29446 * C36092) / C28995);
    const double C16030 = -((C15750 * C36018) / p + (C29446 * C36094) / C28995);
    const double C36306 = C36212 / C36012;
    const double C15781 = C36211 - (C15750 * C36010) / p -
                          (C29446 * C36088) / C28995 + (5 * C36212) / C36012;
    const double C17128 =
        C36225 - (C17068 * C36010) / p - (C29914 * C36088) / C28995;
    const double C16194 = (C29625 * C36008) / C36009 - (C14386 * C36010) / p -
                          (C29629 * C36088) / C28995 + C36308;
    const double C17098 =
        C36308 - ((C14567 * C36018) / p + (C29860 * C36094) / C28995);
    const double C17113 =
        C36224 - (C17038 * C36010) / p - (C29887 * C36088) / C28995;
    const double C17143 = -((C17038 * C36018) / p + (C29887 * C36094) / C28995);
    const double C16254 = -((C13348 * C36015) / p + (C29689 * C36092) / C28995);
    const double C16892 = (C29842 * C36008) / C36009 - (C14193 * C36010) / p -
                          (C29675 * C36088) / C28995;
    const double C17826 =
        C36229 - (C17665 * C36010) / p - (C29996 * C36088) / C28995;
    const double C16517 = (C29755 * C36008) / C36009 - (C15212 * C36010) / p -
                          (C29759 * C36088) / C28995 + C36310;
    const double C17302 =
        C36310 - ((C15304 * C36015) / p + (C29982 * C36092) / C28995);
    const double C17855 =
        C36230 - (C17796 * C36010) / p - (C30107 * C36088) / C28995;
    const double C17870 = -((C17796 * C36015) / p + (C30107 * C36092) / C28995);
    const double C20971 = (C31865 * C36008) / C36009 - (C18718 * C36015) / p -
                          (C31870 * C36092) / C28995 + C36335;
    const double C21058 =
        C36335 - ((C18805 * C36018) / p + (C31911 * C36094) / C28995);
    const double C21101 =
        C36211 - (C20868 * C36015) / p - (C31807 * C36092) / C28995;
    const double C21130 = -((C20868 * C36018) / p + (C31807 * C36094) / C28995);
    const double C36334 = C36264 / C36012;
    const double C20883 = (5 * C36264) / C36012 -
                          ((C20868 * C36010) / p + (C31807 * C36088) / C28995);
    const double C22207 = -((C22147 * C36010) / p + (C32270 * C36088) / C28995);
    const double C21288 =
        C36336 - ((C19535 * C36010) / p + (C31992 * C36088) / C28995);
    const double C22177 =
        C36336 - ((C19709 * C36018) / p + (C32216 * C36094) / C28995);
    const double C22192 = -((C22116 * C36010) / p + (C32243 * C36088) / C28995);
    const double C22222 = -((C22116 * C36018) / p + (C32243 * C36094) / C28995);
    const double C21348 = (C32046 * C36008) / C36009 - (C18530 * C36015) / p -
                          (C32051 * C36092) / C28995;
    const double C21974 = -((C19347 * C36010) / p + (C32035 * C36088) / C28995);
    const double C22893 = -((C22735 * C36010) / p + (C32350 * C36088) / C28995);
    const double C21605 =
        C36338 - ((C20334 * C36010) / p + (C32119 * C36088) / C28995);
    const double C22378 =
        C36228 - (C20422 * C36015) / p - (C32336 * C36092) / C28995 + C36338;
    const double C22922 = -((C22863 * C36010) / p + (C32457 * C36088) / C28995);
    const double C22937 =
        C36230 - (C22863 * C36015) / p - (C32457 * C36092) / C28995;
    const double C26032 =
        C36351 - ((C23779 * C36015) / p + (C34196 * C36092) / C28995);
    const double C26119 =
        C36266 - (C23866 * C36018) / p - (C34237 * C36094) / C28995 + C36351;
    const double C26162 = -((C25929 * C36015) / p + (C34135 * C36092) / C28995);
    const double C26191 =
        C36211 - (C25929 * C36018) / p - (C34135 * C36094) / C28995;
    const double C36350 = C36287 / C36012;
    const double C25944 = (5 * C36287) / C36012 -
                          ((C25929 * C36010) / p + (C34135 * C36088) / C28995);
    const double C27267 = -((C27207 * C36010) / p + (C34594 * C36088) / C28995);
    const double C26349 =
        C36352 - ((C24596 * C36010) / p + (C34316 * C36088) / C28995);
    const double C27237 =
        C36223 - (C24770 * C36018) / p - (C34540 * C36094) / C28995 + C36352;
    const double C27252 = -((C27177 * C36010) / p + (C34567 * C36088) / C28995);
    const double C27282 =
        C36224 - (C27177 * C36018) / p - (C34567 * C36094) / C28995;
    const double C26409 = -((C23591 * C36015) / p + (C34375 * C36092) / C28995);
    const double C27035 = -((C24408 * C36010) / p + (C34360 * C36088) / C28995);
    const double C27951 = -((C27793 * C36010) / p + (C34674 * C36088) / C28995);
    const double C26666 =
        C36354 - ((C25395 * C36010) / p + (C34444 * C36088) / C28995);
    const double C27437 =
        C36354 - ((C25483 * C36015) / p + (C34660 * C36092) / C28995);
    const double C27980 = -((C27920 * C36010) / p + (C34781 * C36088) / C28995);
    const double C27995 = -((C27920 * C36015) / p + (C34781 * C36092) / C28995);
    const double C36217 = C14005 - C36112;
    const double C36220 = C14933 - C36115;
    const double C36268 = C19165 - C36163;
    const double C36270 = C20063 - C36165;
    const double C36289 = C24226 - C36184;
    const double C36291 = C25124 - C36186;
    const double C16326 = -((C15871 * C36018) / p + (C29718 * C36094) / C28995);
    const double C16561 = -((C15958 * C36015) / p + (C29789 * C36092) / C28995);
    const double C15842 =
        C36306 - ((C15827 * C36015) / p + (C29494 * C36092) / C28995);
    const double C15929 =
        C36306 - ((C15914 * C36018) / p + (C29535 * C36094) / C28995);
    const double C16283 = C36218 - (C16194 * C36010) / p -
                          (C29704 * C36088) / C28995 +
                          (C14386 - (C29629 * C28993) / C28995) / p;
    const double C16355 = -((C16194 * C36018) / p + (C29704 * C36094) / C28995);
    const double C17332 = (C30007 * C36008) / C36009 - (C17098 * C36010) / p -
                          (C30011 * C36088) / C28995;
    const double C16239 = (C29670 * C36008) / C36009 - (C16892 * C36010) / p -
                          (C29674 * C36088) / C28995 +
                          (C14193 - (C29675 * C28993) / C28995) / C36012;
    const double C16618 = C36221 - (C16517 * C36010) / p -
                          (C29804 * C36088) / C28995 +
                          (C15212 - (C29759 * C28993) / C28995) / p;
    const double C16647 = -((C16517 * C36015) / p + (C29804 * C36092) / C28995);
    const double C17361 =
        C36226 - (C17302 * C36010) / p - (C30026 * C36088) / C28995;
    const double C17390 = (C15304 - (C29982 * C28993) / C28995) / p -
                          ((C17302 * C36015) / p + (C30026 * C36092) / C28995);
    const double C21420 = -((C20971 * C36018) / p + (C32079 * C36094) / C28995);
    const double C21649 = (C32144 * C36008) / C36009 - (C21058 * C36015) / p -
                          (C32149 * C36092) / C28995;
    const double C20942 = (C31850 * C36008) / C36009 - (C20927 * C36015) / p -
                          (C31855 * C36092) / C28995 + C36334;
    const double C21029 =
        C36334 - ((C21014 * C36018) / p + (C31897 * C36094) / C28995);
    const double C21377 = (C19535 - (C31992 * C28993) / C28995) / p -
                          ((C21288 * C36010) / p + (C32065 * C36088) / C28995);
    const double C21449 = -((C21288 * C36018) / p + (C32065 * C36094) / C28995);
    const double C22408 = -((C22177 * C36010) / p + (C32364 * C36088) / C28995);
    const double C21333 = (C19347 - (C32035 * C28993) / C28995) / C36012 -
                          ((C21974 * C36010) / p + (C32036 * C36088) / C28995);
    const double C21706 = (C20334 - (C32119 * C28993) / C28995) / p -
                          ((C21605 * C36010) / p + (C32163 * C36088) / C28995);
    const double C21735 =
        C36221 - (C21605 * C36015) / p - (C32163 * C36092) / C28995;
    const double C22437 = -((C22378 * C36010) / p + (C32378 * C36088) / C28995);
    const double C22466 = C36226 - (C22378 * C36015) / p -
                          (C32378 * C36092) / C28995 +
                          (C20422 - (C32336 * C28993) / C28995) / p;
    const double C26481 = (C34398 * C36008) / C36009 - (C26032 * C36018) / p -
                          (C34404 * C36094) / C28995;
    const double C26710 = -((C26119 * C36015) / p + (C34473 * C36092) / C28995);
    const double C26003 =
        C36350 - ((C25988 * C36015) / p + (C34182 * C36092) / C28995);
    const double C26090 =
        C36265 - (C26075 * C36018) / p - (C34223 * C36094) / C28995 + C36350;
    const double C26438 = (C24596 - (C34316 * C28993) / C28995) / p -
                          ((C26349 * C36010) / p + (C34389 * C36088) / C28995);
    const double C26510 =
        C36218 - (C26349 * C36018) / p - (C34389 * C36094) / C28995;
    const double C27467 = -((C27237 * C36010) / p + (C34688 * C36088) / C28995);
    const double C26394 = (C24408 - (C34360 * C28993) / C28995) / C36012 -
                          ((C27035 * C36010) / p + (C34361 * C36088) / C28995);
    const double C26767 = (C25395 - (C34444 * C28993) / C28995) / p -
                          ((C26666 * C36010) / p + (C34487 * C36088) / C28995);
    const double C26796 = -((C26666 * C36015) / p + (C34487 * C36092) / C28995);
    const double C27496 = -((C27437 * C36010) / p + (C34702 * C36088) / C28995);
    const double C27525 = (C25483 - (C34660 * C28993) / C28995) / p -
                          ((C27437 * C36015) / p + (C34702 * C36092) / C28995);
    const double C36309 = C36217 / C36012;
    const double C17053 = (5 * C36217) / C36012 -
                          ((C17038 * C36015) / p + (C29887 * C36092) / C28995);
    const double C36311 = C36220 / C36012;
    const double C17811 = (5 * C36220) / C36012 -
                          ((C17796 * C36018) / p + (C30107 * C36094) / C28995);
    const double C36337 = C36268 / C36012;
    const double C22132 = C36224 - (C22116 * C36015) / p -
                          (C32243 * C36092) / C28995 + (5 * C36268) / C36012;
    const double C36339 = C36270 / C36012;
    const double C22878 = (5 * C36270) / C36012 -
                          ((C22863 * C36018) / p + (C32457 * C36094) / C28995);
    const double C36353 = C36289 / C36012;
    const double C27192 = (5 * C36289) / C36012 -
                          ((C27177 * C36015) / p + (C34567 * C36092) / C28995);
    const double C36355 = C36291 / C36012;
    const double C27936 = C36230 - (C27920 * C36018) / p -
                          (C34781 * C36094) / C28995 + (5 * C36291) / C36012;
    const double C16209 = (C29640 * C36008) / C36009 - (C16836 * C36010) / p -
                          (C29644 * C36088) / C28995 + C36309;
    const double C17083 =
        C36309 - ((C17068 * C36018) / p + (C29914 * C36094) / C28995);
    const double C16532 = (C29770 * C36008) / C36009 - (C17564 * C36010) / p -
                          (C29774 * C36088) / C28995 + C36311;
    const double C17317 =
        C36311 - ((C17665 * C36015) / p + (C29996 * C36092) / C28995);
    const double C21303 =
        C36337 - ((C21918 * C36010) / p + (C32007 * C36088) / C28995);
    const double C22162 =
        C36337 - ((C22147 * C36018) / p + (C32270 * C36094) / C28995);
    const double C21620 =
        C36339 - ((C22636 * C36010) / p + (C32134 * C36088) / C28995);
    const double C22393 =
        C36229 - (C22735 * C36015) / p - (C32350 * C36092) / C28995 + C36339;
    const double C26364 =
        C36353 - ((C26979 * C36010) / p + (C34331 * C36088) / C28995);
    const double C27222 =
        C36225 - (C27207 * C36018) / p - (C34594 * C36094) / C28995 + C36353;
    const double C26681 =
        C36355 - ((C27694 * C36010) / p + (C34459 * C36088) / C28995);
    const double C27452 =
        C36355 - ((C27793 * C36015) / p + (C34674 * C36092) / C28995);
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
    vrx[12] = C14005;
    vrx[13] = C14023;
    vrx[14] = C14193;
    vrx[15] = C14211;
    vrx[16] = C14386;
    vrx[17] = C14476;
    vrx[18] = C14567;
    vrx[19] = C14658;
    vrx[20] = C14674;
    vrx[21] = C14842;
    vrx[22] = C14933;
    vrx[23] = C14951;
    vrx[24] = C15122;
    vrx[25] = C15212;
    vrx[26] = C15304;
    vrx[27] = C15395;
    vrx[28] = C15484;
    vrx[29] = C15573;
    vrx[30] = C15662;
    vrx[31] = C15750;
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
    vrx[45] = C16164;
    vrx[46] = C16194;
    vrx[47] = C16209;
    vrx[48] = C16224;
    vrx[49] = C16239;
    vrx[50] = C16254;
    vrx[51] = C16283;
    vrx[52] = C16326;
    vrx[53] = C16355;
    vrx[54] = C16431;
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
