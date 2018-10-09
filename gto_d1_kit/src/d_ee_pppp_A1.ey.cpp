/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1111_1_vr(const double ae,
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
    const double C4657 = g[28];
    const double C4672 = g[29];
    const double C5182 = g[40];
    const double C5310 = g[42];
    const double C5446 = g[46];
    const double C5578 = g[49];
    const double C5706 = g[51];
    const double C5825 = g[54];
    const double C5841 = g[55];
    const double C6019 = g[57];
    const double C6077 = g[58];
    const double C6181 = g[60];
    const double C7674 = g[61];
    const double C7734 = g[62];
    const double C7792 = g[63];
    const double C9387 = g[64];
    const double C9600 = g[65];
    const double C9620 = g[66];
    const double C9635 = g[67];
    const double C9672 = g[68];
    const double C9702 = g[69];
    const double C9732 = g[70];
    const double C9748 = g[71];
    const double C9778 = g[72];
    const double C9892 = g[73];
    const double C9936 = g[74];
    const double C9967 = g[75];
    const double C9983 = g[76];
    const double C9999 = g[77];
    const double C10015 = g[78];
    const double C10031 = g[79];
    const double C10117 = g[80];
    const double C10140 = g[81];
    const double C10228 = g[82];
    const double C10244 = g[83];
    const double C10274 = g[84];
    const double C10353 = g[85];
    const double C10397 = g[86];
    const double C10450 = g[87];
    const double C10840 = g[88];
    const double C11066 = g[89];
    const double C11082 = g[90];
    const double C11292 = g[91];
    const double C12183 = g[92];
    const double C9603 = p + q;
    const double C9602 = p * q;
    const double C12274 = bs[5];
    const double C12273 = bs[4];
    const double C12271 = bs[3];
    const double C12269 = bs[2];
    const double C12266 = zP - zQ;
    const double C12265 = be * zAB;
    const double C12264 = yP - yQ;
    const double C12263 = be * yAB;
    const double C12261 = std::pow(Pi, 2.5);
    const double C12258 = bs[1];
    const double C12257 = ae * be;
    const double C12256 = bs[0];
    const double C12255 = 2 * p;
    const double C12253 = xP - xQ;
    const double C12252 = std::pow(p, 2);
    const double C12250 = be * xAB;
    const double C12249 = ae / p;
    const double C9604 = C9603 * p;
    const double C12262 = std::sqrt(C9603);
    const double C12260 = p * C9603;
    const double C12259 = kab * C9602;
    const double C12251 = ae * C9602;
    const double C12297 = C12266 * C9602;
    const double C12295 = C12264 * C9602;
    const double C12293 = 4 * C12261;
    const double C12291 = kab * C12257;
    const double C12287 = C12253 * C9602;
    const double C12286 = C9603 * C12252;
    const double C12285 = C12249 - 1;
    const double C12294 = C9602 * C12262;
    const double C12292 = kcd * C12259;
    const double C12319 = C11082 * C12251;
    const double C12314 = C10450 * C12251;
    const double C12312 = C10353 * C12251;
    const double C12311 = C10274 * C12251;
    const double C12310 = C10244 * C12251;
    const double C12309 = C10228 * C12251;
    const double C12307 = C10117 * C12251;
    const double C12306 = C10031 * C12251;
    const double C12305 = C10015 * C12251;
    const double C12304 = C9983 * C12251;
    const double C12301 = C9892 * C12251;
    const double C12300 = C9778 * C12251;
    const double C12299 = C9732 * C12251;
    const double C12298 = C9702 * C12251;
    const double C12296 = C9672 * C12251;
    const double C12290 = C9635 * C12251;
    const double C12289 = C9620 * C12251;
    const double C12331 = kcd * C12291;
    const double C12373 = C12285 * C9702;
    const double C12366 = C12285 * C10353;
    const double C12362 = C12285 * C10117;
    const double C12359 = C12285 * C9778;
    const double C12357 = C12285 * C9732;
    const double C12355 = C12285 * C9635;
    const double C12351 = C12285 * C9620;
    const double C12349 = C12285 * C9387;
    const double C12347 = C12285 * C7792;
    const double C12345 = C12285 * C7674;
    const double C12341 = C12285 * C5825;
    const double C12339 = C12285 * C5706;
    const double C12337 = C12285 * C5310;
    const double C12335 = C12285 * C5578;
    const double C12333 = C12285 * C5182;
    const double C12329 = C12285 * C4657;
    const double C12327 = C12285 * C5841;
    const double C12368 = C12274 * C12292;
    const double C12365 = C12273 * C12292;
    const double C12361 = C12271 * C12292;
    const double C12353 = C12269 * C12292;
    const double C12332 = C12258 * C12292;
    const double C12374 = C12319 / C12286;
    const double C12367 = C12314 / C12286;
    const double C12363 = C12312 / C12286;
    const double C12360 = C12311 / C12286;
    const double C12358 = C12310 / C12286;
    const double C12356 = C12309 / C12286;
    const double C12352 = C12307 / C12286;
    const double C12350 = C12306 / C12286;
    const double C12348 = C12305 / C12286;
    const double C12346 = C12304 / C12286;
    const double C12342 = C12301 / C12286;
    const double C12340 = C12300 / C12286;
    const double C12338 = C12299 / C12286;
    const double C12336 = C12298 / C12286;
    const double C12334 = C12296 / C12286;
    const double C12330 = C12290 / C12286;
    const double C12328 = C12289 / C12286;
    const double C12393 = C12273 * C12331;
    const double C12391 = C12271 * C12331;
    const double C12388 = C12269 * C12331;
    const double C12385 = C12258 * C12331;
    const double C12382 = C12256 * C12331;
    const double C12394 = C12368 * ae;
    const double C12392 = C12365 * ae;
    const double C12389 = C12361 * ae;
    const double C12386 = C12353 * ae;
    const double C12383 = C12332 * ae;
    const double C10454 =
        -(((xAB * C12393) / p + (C12253 * C12394) / C12260) * C12293) / C12294;
    const double C11334 =
        -(((yAB * C12393) / p + (C12264 * C12394) / C12260) * C12293) / C12294;
    const double C12211 =
        -(((zAB * C12393) / p + (C12266 * C12394) / C12260) * C12293) / C12294;
    const double C10357 =
        -(((xAB * C12391) / p + (C12253 * C12392) / C12260) * C12293) / C12294;
    const double C11238 =
        -(((yAB * C12391) / p + (C12264 * C12392) / C12260) * C12293) / C12294;
    const double C12115 =
        -(((zAB * C12391) / p + (C12266 * C12392) / C12260) * C12293) / C12294;
    const double C10121 =
        -(((xAB * C12388) / p + (C12253 * C12389) / C12260) * C12293) / C12294;
    const double C11012 =
        -(((yAB * C12388) / p + (C12264 * C12389) / C12260) * C12293) / C12294;
    const double C11891 =
        -(((zAB * C12388) / p + (C12266 * C12389) / C12260) * C12293) / C12294;
    const double C9608 =
        -(((xAB * C12385) / p + (C12253 * C12386) / C12260) * C12293) / C12294;
    const double C10505 =
        -(((yAB * C12385) / p + (C12264 * C12386) / C12260) * C12293) / C12294;
    const double C11385 =
        -(((zAB * C12385) / p + (C12266 * C12386) / C12260) * C12293) / C12294;
    const double C4676 =
        -(((xAB * C12382) / p + (C12253 * C12383) / C12260) * C12293) / C12294;
    const double C6288 =
        -(((yAB * C12382) / p + (C12264 * C12383) / C12260) * C12293) / C12294;
    const double C7872 =
        -(((zAB * C12382) / p + (C12266 * C12383) / C12260) * C12293) / C12294;
    const double C12272 = C10357 * C9602;
    const double C10401 =
        C12366 - (C10357 * C12250) / p - C12367 - (C10454 * C12287) / C9604;
    const double C10416 = -((C10357 * C12263) / p + (C10454 * C12295) / C9604);
    const double C10431 = -((C10357 * C12265) / p + (C10454 * C12297) / C9604);
    const double C12279 = C11238 * C9602;
    const double C11281 = -((C11238 * C12250) / p + (C11334 * C12287) / C9604);
    const double C11297 =
        C12366 - (C11238 * C12263) / p - C12367 - (C11334 * C12295) / C9604;
    const double C11312 = -((C11238 * C12265) / p + (C11334 * C12297) / C9604);
    const double C12284 = C12115 * C9602;
    const double C12158 = -((C12115 * C12250) / p + (C12211 * C12287) / C9604);
    const double C12173 = -((C12115 * C12263) / p + (C12211 * C12295) / C9604);
    const double C12189 =
        C12366 - (C12115 * C12265) / p - C12367 - (C12211 * C12297) / C9604;
    const double C12270 = C10121 * C9602;
    const double C10144 =
        C12362 - (C10121 * C12250) / p - C12363 - (C10357 * C12287) / C9604;
    const double C10187 = -((C10121 * C12263) / p + (C10357 * C12295) / C9604);
    const double C10202 = -((C10121 * C12265) / p + (C10357 * C12297) / C9604);
    const double C12278 = C11012 * C9602;
    const double C11027 = -((C11012 * C12250) / p + (C11238 * C12287) / C9604);
    const double C11071 =
        C12362 - (C11012 * C12263) / p - C12363 - (C11238 * C12295) / C9604;
    const double C11087 = -((C11012 * C12265) / p + (C11238 * C12297) / C9604);
    const double C12283 = C11891 * C9602;
    const double C11906 = -((C11891 * C12250) / p + (C12115 * C12287) / C9604);
    const double C11949 = -((C11891 * C12263) / p + (C12115 * C12295) / C9604);
    const double C11964 =
        C12362 - (C11891 * C12265) / p - C12363 - (C12115 * C12297) / C9604;
    const double C12254 = C9608 * C9602;
    const double C9607 =
        C12351 - (C9608 * C12250) / p - C12352 - (C10121 * C12287) / C9604;
    const double C9676 = -((C9608 * C12263) / p + (C10121 * C12295) / C9604);
    const double C9706 = -((C9608 * C12265) / p + (C10121 * C12297) / C9604);
    const double C12275 = C10505 * C9602;
    const double C10506 = -((C10505 * C12250) / p + (C11012 * C12287) / C9604);
    const double C10571 =
        C12351 - (C10505 * C12263) / p - C12352 - (C11012 * C12295) / C9604;
    const double C10600 = -((C10505 * C12265) / p + (C11012 * C12297) / C9604);
    const double C12280 = C11385 * C9602;
    const double C11386 = -((C11385 * C12250) / p + (C11891 * C12287) / C9604);
    const double C11451 = -((C11385 * C12263) / p + (C11891 * C12295) / C9604);
    const double C11480 =
        C12351 - (C11385 * C12265) / p - C12352 - (C11891 * C12297) / C9604;
    const double C4645 =
        C12327 - (C4676 * C12250) / p - C12328 - (C9608 * C12287) / C9604;
    const double C4915 = -((C4676 * C12263) / p + (C9608 * C12295) / C9604);
    const double C5052 = -((C4676 * C12265) / p + (C9608 * C12297) / C9604);
    const double C6259 = -((C6288 * C12250) / p + (C10505 * C12287) / C9604);
    const double C6523 =
        C12327 - (C6288 * C12263) / p - C12328 - (C10505 * C12295) / C9604;
    const double C6656 = -((C6288 * C12265) / p + (C10505 * C12297) / C9604);
    const double C7843 = -((C7872 * C12250) / p + (C11385 * C12287) / C9604);
    const double C8107 = -((C7872 * C12263) / p + (C11385 * C12295) / C9604);
    const double C8240 =
        C12327 - (C7872 * C12265) / p - C12328 - (C11385 * C12297) / C9604;
    const double C12313 = C12272 / C9604;
    const double C12320 = C12279 / C9604;
    const double C12325 = C12284 / C9604;
    const double C12308 = C12270 / C9604;
    const double C12318 = C12278 / C9604;
    const double C12324 = C12283 / C9604;
    const double C12288 = C12254 / C9604;
    const double C9752 = -((C9706 * C12263) / p + (C10202 * C12295) / C9604);
    const double C12315 = C12275 / C9604;
    const double C10644 =
        C12373 - (C10600 * C12263) / p - C12374 - (C11087 * C12295) / C9604;
    const double C12321 = C12280 / C9604;
    const double C11524 = -((C11480 * C12263) / p + (C11964 * C12295) / C9604);
    const double C4766 =
        C12333 - (C4915 * C12250) / p - C12334 - (C9676 * C12287) / C9604;
    const double C4854 =
        C12335 - (C5052 * C12250) / p - C12336 - (C9706 * C12287) / C9604;
    const double C5268 = -((C5052 * C12263) / p + (C9706 * C12295) / C9604);
    const double C6376 = -((C6523 * C12250) / p + (C10571 * C12287) / C9604);
    const double C6464 = -((C6656 * C12250) / p + (C10600 * C12287) / C9604);
    const double C6869 =
        C12335 - (C6656 * C12263) / p - C12336 - (C10600 * C12295) / C9604;
    const double C7960 = -((C8107 * C12250) / p + (C11451 * C12287) / C9604);
    const double C8048 = -((C8240 * C12250) / p + (C11480 * C12287) / C9604);
    const double C8453 = -((C8240 * C12263) / p + (C11480 * C12295) / C9604);
    const double C12364 = C10121 - C12313;
    const double C12375 = C11012 - C12320;
    const double C12380 = C11891 - C12325;
    const double C12354 = C9608 - C12308;
    const double C12372 = C10505 - C12318;
    const double C12379 = C11385 - C12324;
    const double C12326 = C4676 - C12288;
    const double C12369 = C6288 - C12315;
    const double C12376 = C7872 - C12321;
    const double C5005 = C12285 * C5446 - (C5268 * C12250) / p -
                         (C9748 * C12251) / C12286 - (C9752 * C12287) / C9604;
    const double C6611 = -((C6869 * C12250) / p + (C10644 * C12287) / C9604);
    const double C8195 = -((C8453 * C12250) / p + (C11524 * C12287) / C9604);
    const double C12390 = C12364 / C12255;
    const double C12398 = C12375 / C12255;
    const double C12402 = C12380 / C12255;
    const double C12387 = C12354 / C12255;
    const double C12397 = C12372 / C12255;
    const double C12401 = C12379 / C12255;
    const double C12381 = C12326 / C12255;
    const double C12395 = C12369 / C12255;
    const double C12399 = C12376 / C12255;
    const double C10232 = C12285 * C10140 - (C10144 * C12250) / p -
                          (C10397 * C12251) / C12286 -
                          (C10401 * C12287) / C9604 + C12390;
    const double C10248 =
        C12390 - ((C10187 * C12263) / p + (C10416 * C12295) / C9604);
    const double C10278 =
        C12390 - ((C10202 * C12265) / p + (C10431 * C12297) / C9604);
    const double C11116 =
        C12398 - ((C11027 * C12250) / p + (C11281 * C12287) / C9604);
    const double C11131 = C12285 * C11066 - (C11071 * C12263) / p -
                          (C11292 * C12251) / C12286 -
                          (C11297 * C12295) / C9604 + C12398;
    const double C11160 =
        C12398 - ((C11087 * C12265) / p + (C11312 * C12297) / C9604);
    const double C11993 =
        C12402 - ((C11906 * C12250) / p + (C12158 * C12287) / C9604);
    const double C12008 =
        C12402 - ((C11949 * C12263) / p + (C12173 * C12295) / C9604);
    const double C12037 = C12285 * C11082 - (C11964 * C12265) / p -
                          (C12183 * C12251) / C12286 -
                          (C12189 * C12297) / C9604 + C12402;
    const double C9639 = C12285 * C9600 - (C9607 * C12250) / p -
                         (C10140 * C12251) / C12286 -
                         (C10144 * C12287) / C9604 + C12387;
    const double C9736 =
        C12387 - ((C9676 * C12263) / p + (C10187 * C12295) / C9604);
    const double C9782 =
        C12387 - ((C9706 * C12265) / p + (C10202 * C12297) / C9604);
    const double C10535 =
        C12397 - ((C10506 * C12250) / p + (C11027 * C12287) / C9604);
    const double C10629 = C12285 * C9672 - (C10571 * C12263) / p -
                          (C11066 * C12251) / C12286 -
                          (C11071 * C12295) / C9604 + C12397;
    const double C10673 =
        C12397 - ((C10600 * C12265) / p + (C11087 * C12297) / C9604);
    const double C11415 =
        C12401 - ((C11386 * C12250) / p + (C11906 * C12287) / C9604);
    const double C11509 =
        C12401 - ((C11451 * C12263) / p + (C11949 * C12295) / C9604);
    const double C11553 = C12373 - (C11480 * C12265) / p - C12374 -
                          (C11964 * C12297) / C9604 + C12401;
    const double C4628 = C12285 * C4672 - (C4645 * C12250) / p -
                         (C9600 * C12251) / C12286 - (C9607 * C12287) / C9604 +
                         C12381;
    const double C5227 =
        C12381 - ((C4915 * C12263) / p + (C9676 * C12295) / C9604);
    const double C5665 =
        C12381 - ((C5052 * C12265) / p + (C9706 * C12297) / C9604);
    const double C6243 =
        C12395 - ((C6259 * C12250) / p + (C10506 * C12287) / C9604);
    const double C6828 = C12333 - (C6523 * C12263) / p - C12334 -
                         (C10571 * C12295) / C9604 + C12395;
    const double C7257 =
        C12395 - ((C6656 * C12265) / p + (C10600 * C12297) / C9604);
    const double C7827 =
        C12399 - ((C7843 * C12250) / p + (C11386 * C12287) / C9604);
    const double C8412 =
        C12399 - ((C8107 * C12263) / p + (C11451 * C12295) / C9604);
    const double C8841 = C12335 - (C8240 * C12265) / p - C12336 -
                         (C11480 * C12297) / C9604 + C12399;
    const double C9896 = C12355 - (C9639 * C12250) / p - C12356 -
                         (C10232 * C12287) / C9604 +
                         (C9607 - (C10144 * C9602) / C9604) / p;
    const double C9955 = -((C9639 * C12265) / p + (C10232 * C12297) / C9604);
    const double C12267 = C9736 * C9602;
    const double C9940 =
        C12357 - (C9736 * C12250) / p - C12358 - (C10248 * C12287) / C9604;
    const double C9987 = (C9676 - (C10187 * C9602) / C9604) / p -
                         ((C9736 * C12263) / p + (C10248 * C12295) / C9604);
    const double C10003 = -((C9736 * C12265) / p + (C10248 * C12297) / C9604);
    const double C12268 = C9782 * C9602;
    const double C9971 =
        C12359 - (C9782 * C12250) / p - C12360 - (C10278 * C12287) / C9604;
    const double C10019 = -((C9782 * C12263) / p + (C10278 * C12295) / C9604);
    const double C10035 = (C9706 - (C10202 * C9602) / C9604) / p -
                          ((C9782 * C12265) / p + (C10278 * C12297) / C9604);
    const double C10786 = (C10506 - (C11027 * C9602) / C9604) / p -
                          ((C10535 * C12250) / p + (C11116 * C12287) / C9604);
    const double C10845 = -((C10535 * C12265) / p + (C11116 * C12297) / C9604);
    const double C12276 = C10629 * C9602;
    const double C10829 = -((C10629 * C12250) / p + (C11131 * C12287) / C9604);
    const double C10875 = C12357 - (C10629 * C12263) / p - C12358 -
                          (C11131 * C12295) / C9604 +
                          (C10571 - (C11071 * C9602) / C9604) / p;
    const double C10890 = -((C10629 * C12265) / p + (C11131 * C12297) / C9604);
    const double C12277 = C10673 * C9602;
    const double C10860 = -((C10673 * C12250) / p + (C11160 * C12287) / C9604);
    const double C10905 =
        C12359 - (C10673 * C12263) / p - C12360 - (C11160 * C12295) / C9604;
    const double C10920 = (C10600 - (C11087 * C9602) / C9604) / p -
                          ((C10673 * C12265) / p + (C11160 * C12297) / C9604);
    const double C11666 = (C11386 - (C11906 * C9602) / C9604) / p -
                          ((C11415 * C12250) / p + (C11993 * C12287) / C9604);
    const double C11724 =
        C12355 - (C11415 * C12265) / p - C12356 - (C11993 * C12297) / C9604;
    const double C12281 = C11509 * C9602;
    const double C11709 = -((C11509 * C12250) / p + (C12008 * C12287) / C9604);
    const double C11754 = (C11451 - (C11949 * C9602) / C9604) / p -
                          ((C11509 * C12263) / p + (C12008 * C12295) / C9604);
    const double C11769 =
        C12357 - (C11509 * C12265) / p - C12358 - (C12008 * C12297) / C9604;
    const double C12282 = C11553 * C9602;
    const double C11739 = -((C11553 * C12250) / p + (C12037 * C12287) / C9604);
    const double C11784 = -((C11553 * C12263) / p + (C12037 * C12295) / C9604);
    const double C11799 = C12359 - (C11553 * C12265) / p - C12360 -
                          (C12037 * C12297) / C9604 +
                          (C11480 - (C11964 * C9602) / C9604) / p;
    const double C4661 = C12329 - (C4628 * C12250) / p - C12330 -
                         (C9639 * C12287) / C9604 +
                         (C4645 - (C9607 * C9602) / C9604) / p;
    const double C4751 = -((C4628 * C12263) / p + (C9639 * C12295) / C9604);
    const double C4839 = -((C4628 * C12265) / p + (C9639 * C12297) / C9604);
    const double C4960 =
        C12337 - (C5227 * C12250) / p - C12338 - (C9736 * C12287) / C9604;
    const double C5358 = (C4915 - (C9676 * C9602) / C9604) / p -
                         ((C5227 * C12263) / p + (C9736 * C12295) / C9604);
    const double C5403 = -((C5227 * C12265) / p + (C9736 * C12297) / C9604);
    const double C5141 =
        C12339 - (C5665 * C12250) / p - C12340 - (C9782 * C12287) / C9604;
    const double C5537 = -((C5665 * C12263) / p + (C9782 * C12295) / C9604);
    const double C5798 = (C5052 - (C9706 * C9602) / C9604) / p -
                         ((C5665 * C12265) / p + (C9782 * C12297) / C9604);
    const double C6274 = (C6259 - (C10506 * C9602) / C9604) / p -
                         ((C6243 * C12250) / p + (C10535 * C12287) / C9604);
    const double C6361 =
        C12329 - (C6243 * C12263) / p - C12330 - (C10535 * C12295) / C9604;
    const double C6449 = -((C6243 * C12265) / p + (C10535 * C12297) / C9604);
    const double C6566 = -((C6828 * C12250) / p + (C10629 * C12287) / C9604);
    const double C6955 = C12337 - (C6828 * C12263) / p - C12338 -
                         (C10629 * C12295) / C9604 +
                         (C6523 - (C10571 * C9602) / C9604) / p;
    const double C7000 = -((C6828 * C12265) / p + (C10629 * C12297) / C9604);
    const double C6743 = -((C7257 * C12250) / p + (C10673 * C12287) / C9604);
    const double C7130 =
        C12339 - (C7257 * C12263) / p - C12340 - (C10673 * C12295) / C9604;
    const double C7386 = (C6656 - (C10600 * C9602) / C9604) / p -
                         ((C7257 * C12265) / p + (C10673 * C12297) / C9604);
    const double C7858 = (C7843 - (C11386 * C9602) / C9604) / p -
                         ((C7827 * C12250) / p + (C11415 * C12287) / C9604);
    const double C7945 = -((C7827 * C12263) / p + (C11415 * C12295) / C9604);
    const double C8033 =
        C12329 - (C7827 * C12265) / p - C12330 - (C11415 * C12297) / C9604;
    const double C8150 = -((C8412 * C12250) / p + (C11509 * C12287) / C9604);
    const double C8539 = (C8107 - (C11451 * C9602) / C9604) / p -
                         ((C8412 * C12263) / p + (C11509 * C12295) / C9604);
    const double C8584 =
        C12337 - (C8412 * C12265) / p - C12338 - (C11509 * C12297) / C9604;
    const double C8327 = -((C8841 * C12250) / p + (C11553 * C12287) / C9604);
    const double C8714 = -((C8841 * C12263) / p + (C11553 * C12295) / C9604);
    const double C8970 = C12339 - (C8841 * C12265) / p - C12340 -
                         (C11553 * C12297) / C9604 +
                         (C8240 - (C11480 * C9602) / C9604) / p;
    const double C12302 = C12267 / C9604;
    const double C12303 = C12268 / C9604;
    const double C12316 = C12276 / C9604;
    const double C12317 = C12277 / C9604;
    const double C12322 = C12281 / C9604;
    const double C12323 = C12282 / C9604;
    const double C5829 = C12341 - (C4661 * C12250) / p - C12342 -
                         (C9896 * C12287) / C9604 +
                         (3 * (C4628 - (C9639 * C9602) / C9604)) / C12255;
    const double C5859 = -((C4661 * C12263) / p + (C9896 * C12295) / C9604);
    const double C5888 = -((C4661 * C12265) / p + (C9896 * C12297) / C9604);
    const double C5932 = -((C4839 * C12263) / p + (C9955 * C12295) / C9604);
    const double C5977 =
        C12345 - (C5358 * C12250) / p - C12346 - (C9987 * C12287) / C9604;
    const double C6110 = -((C5358 * C12265) / p + (C9987 * C12297) / C9604);
    const double C5992 = C12285 * C7734 - (C5403 * C12250) / p -
                         (C9999 * C12251) / C12286 - (C10003 * C12287) / C9604;
    const double C6007 =
        C12347 - (C5537 * C12250) / p - C12348 - (C10019 * C12287) / C9604;
    const double C6065 =
        C12349 - (C5798 * C12250) / p - C12350 - (C10035 * C12287) / C9604;
    const double C6169 = -((C5798 * C12263) / p + (C10035 * C12295) / C9604);
    const double C7416 = (3 * (C6243 - (C10535 * C9602) / C9604)) / C12255 -
                         ((C6274 * C12250) / p + (C10786 * C12287) / C9604);
    const double C7445 =
        C12341 - (C6274 * C12263) / p - C12342 - (C10786 * C12295) / C9604;
    const double C7474 = -((C6274 * C12265) / p + (C10786 * C12297) / C9604);
    const double C7518 = C12285 * C6019 - (C6449 * C12263) / p -
                         (C10840 * C12251) / C12286 - (C10845 * C12295) / C9604;
    const double C7562 = -((C6955 * C12250) / p + (C10875 * C12287) / C9604);
    const double C7694 = -((C6955 * C12265) / p + (C10875 * C12297) / C9604);
    const double C7577 = -((C7000 * C12250) / p + (C10890 * C12287) / C9604);
    const double C7592 = -((C7130 * C12250) / p + (C10905 * C12287) / C9604);
    const double C7649 = -((C7386 * C12250) / p + (C10920 * C12287) / C9604);
    const double C7753 =
        C12349 - (C7386 * C12263) / p - C12350 - (C10920 * C12295) / C9604;
    const double C9000 = (3 * (C7827 - (C11415 * C9602) / C9604)) / C12255 -
                         ((C7858 * C12250) / p + (C11666 * C12287) / C9604);
    const double C9029 = -((C7858 * C12263) / p + (C11666 * C12295) / C9604);
    const double C9058 =
        C12341 - (C7858 * C12265) / p - C12342 - (C11666 * C12297) / C9604;
    const double C9102 = -((C8033 * C12263) / p + (C11724 * C12295) / C9604);
    const double C9146 = -((C8539 * C12250) / p + (C11754 * C12287) / C9604);
    const double C9277 =
        C12345 - (C8539 * C12265) / p - C12346 - (C11754 * C12297) / C9604;
    const double C9161 = -((C8584 * C12250) / p + (C11769 * C12287) / C9604);
    const double C9176 = -((C8714 * C12250) / p + (C11784 * C12287) / C9604);
    const double C9233 = -((C8970 * C12250) / p + (C11799 * C12287) / C9604);
    const double C9335 = -((C8970 * C12263) / p + (C11799 * C12295) / C9604);
    const double C12343 = C5227 - C12302;
    const double C12344 = C5665 - C12303;
    const double C12370 = C6828 - C12316;
    const double C12371 = C7257 - C12317;
    const double C12377 = C8412 - C12322;
    const double C12378 = C8841 - C12323;
    const double C5917 = C12285 * C6077 - (C4960 * C12250) / p -
                         (C9936 * C12251) / C12286 - (C9940 * C12287) / C9604 +
                         C12343 / C12255;
    const double C6095 = (3 * C12343) / C12255 -
                         ((C5358 * C12263) / p + (C9987 * C12295) / C9604);
    const double C12384 = C12344 / C12255;
    const double C6227 = (3 * C12344) / C12255 -
                         ((C5798 * C12265) / p + (C10035 * C12297) / C9604);
    const double C7503 =
        C12370 / C12255 - ((C6566 * C12250) / p + (C10829 * C12287) / C9604);
    const double C7679 = C12345 - (C6955 * C12263) / p - C12346 -
                         (C10875 * C12295) / C9604 + (3 * C12370) / C12255;
    const double C12396 = C12371 / C12255;
    const double C7811 = (3 * C12371) / C12255 -
                         ((C7386 * C12265) / p + (C10920 * C12297) / C9604);
    const double C9087 =
        C12377 / C12255 - ((C8150 * C12250) / p + (C11709 * C12287) / C9604);
    const double C9262 = (3 * C12377) / C12255 -
                         ((C8539 * C12263) / p + (C11754 * C12295) / C9604);
    const double C12400 = C12378 / C12255;
    const double C9393 = C12349 - (C8970 * C12265) / p - C12350 -
                         (C11799 * C12297) / C9604 + (3 * C12378) / C12255;
    const double C5947 = C12285 * C6181 - (C5141 * C12250) / p -
                         (C9967 * C12251) / C12286 - (C9971 * C12287) / C9604 +
                         C12384;
    const double C6125 =
        C12384 - ((C5537 * C12263) / p + (C10019 * C12295) / C9604);
    const double C7533 =
        C12396 - ((C6743 * C12250) / p + (C10860 * C12287) / C9604);
    const double C7709 = C12347 - (C7130 * C12263) / p - C12348 -
                         (C10905 * C12295) / C9604 + C12396;
    const double C9117 =
        C12400 - ((C8327 * C12250) / p + (C11739 * C12287) / C9604);
    const double C9292 =
        C12400 - ((C8714 * C12263) / p + (C11784 * C12295) / C9604);
    vrx[0] = C4628;
    vrx[1] = C4645;
    vrx[2] = C4661;
    vrx[3] = C4676;
    vrx[4] = C4751;
    vrx[5] = C4766;
    vrx[6] = C4839;
    vrx[7] = C4854;
    vrx[8] = C4915;
    vrx[9] = C4960;
    vrx[10] = C5005;
    vrx[11] = C5052;
    vrx[12] = C5141;
    vrx[13] = C5227;
    vrx[14] = C5268;
    vrx[15] = C5358;
    vrx[16] = C5403;
    vrx[17] = C5537;
    vrx[18] = C5665;
    vrx[19] = C5798;
    vrx[20] = C5829;
    vrx[21] = C5859;
    vrx[22] = C5888;
    vrx[23] = C5917;
    vrx[24] = C5932;
    vrx[25] = C5947;
    vrx[26] = C5977;
    vrx[27] = C5992;
    vrx[28] = C6007;
    vrx[29] = C6065;
    vrx[30] = C6095;
    vrx[31] = C6110;
    vrx[32] = C6125;
    vrx[33] = C6169;
    vrx[34] = C6227;
    vry[0] = C6243;
    vry[1] = C6259;
    vry[2] = C6274;
    vry[3] = C6288;
    vry[4] = C6361;
    vry[5] = C6376;
    vry[6] = C6449;
    vry[7] = C6464;
    vry[8] = C6523;
    vry[9] = C6566;
    vry[10] = C6611;
    vry[11] = C6656;
    vry[12] = C6743;
    vry[13] = C6828;
    vry[14] = C6869;
    vry[15] = C6955;
    vry[16] = C7000;
    vry[17] = C7130;
    vry[18] = C7257;
    vry[19] = C7386;
    vry[20] = C7416;
    vry[21] = C7445;
    vry[22] = C7474;
    vry[23] = C7503;
    vry[24] = C7518;
    vry[25] = C7533;
    vry[26] = C7562;
    vry[27] = C7577;
    vry[28] = C7592;
    vry[29] = C7649;
    vry[30] = C7679;
    vry[31] = C7694;
    vry[32] = C7709;
    vry[33] = C7753;
    vry[34] = C7811;
    vrz[0] = C7827;
    vrz[1] = C7843;
    vrz[2] = C7858;
    vrz[3] = C7872;
    vrz[4] = C7945;
    vrz[5] = C7960;
    vrz[6] = C8033;
    vrz[7] = C8048;
    vrz[8] = C8107;
    vrz[9] = C8150;
    vrz[10] = C8195;
    vrz[11] = C8240;
    vrz[12] = C8327;
    vrz[13] = C8412;
    vrz[14] = C8453;
    vrz[15] = C8539;
    vrz[16] = C8584;
    vrz[17] = C8714;
    vrz[18] = C8841;
    vrz[19] = C8970;
    vrz[20] = C9000;
    vrz[21] = C9029;
    vrz[22] = C9058;
    vrz[23] = C9087;
    vrz[24] = C9102;
    vrz[25] = C9117;
    vrz[26] = C9146;
    vrz[27] = C9161;
    vrz[28] = C9176;
    vrz[29] = C9233;
    vrz[30] = C9262;
    vrz[31] = C9277;
    vrz[32] = C9292;
    vrz[33] = C9335;
    vrz[34] = C9393;
}
