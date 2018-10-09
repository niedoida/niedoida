/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2220_1_vr(const double ae,
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
    const double C17372 = g[297];
    const double C17387 = g[298];
    const double C17403 = g[299];
    const double C17419 = g[300];
    const double C17434 = g[301];
    const double C17726 = g[302];
    const double C17741 = g[303];
    const double C17756 = g[304];
    const double C17802 = g[307];
    const double C17993 = g[308];
    const double C18008 = g[309];
    const double C18023 = g[310];
    const double C18054 = g[312];
    const double C18069 = g[313];
    const double C18285 = g[314];
    const double C18314 = g[315];
    const double C18444 = g[319];
    const double C18601 = g[320];
    const double C18616 = g[321];
    const double C18631 = g[322];
    const double C18646 = g[323];
    const double C18781 = g[324];
    const double C18796 = g[325];
    const double C18811 = g[326];
    const double C19042 = g[328];
    const double C19100 = g[330];
    const double C19144 = g[332];
    const double C19258 = g[333];
    const double C19303 = g[335];
    const double C19318 = g[336];
    const double C19333 = g[337];
    const double C19348 = g[338];
    const double C19537 = g[340];
    const double C19580 = g[341];
    const double C19624 = g[343];
    const double C19639 = g[344];
    const double C19654 = g[345];
    const double C23753 = g[346];
    const double C23943 = g[347];
    const double C24201 = g[348];
    const double C24442 = g[349];
    const double C24672 = g[350];
    const double C29556 = g[351];
    const double C30554 = g[352];
    const double C30574 = g[353];
    const double C30590 = g[354];
    const double C30606 = g[355];
    const double C30637 = g[356];
    const double C30711 = g[357];
    const double C30799 = g[358];
    const double C30814 = g[359];
    const double C30844 = g[360];
    const double C30917 = g[361];
    const double C30932 = g[362];
    const double C30961 = g[363];
    const double C30976 = g[364];
    const double C30992 = g[365];
    const double C31021 = g[366];
    const double C31037 = g[367];
    const double C31053 = g[368];
    const double C31054 = g[369];
    const double C31234 = g[370];
    const double C31250 = g[371];
    const double C31282 = g[372];
    const double C31314 = g[373];
    const double C31373 = g[374];
    const double C31389 = g[375];
    const double C31421 = g[376];
    const double C31451 = g[377];
    const double C31466 = g[378];
    const double C31481 = g[379];
    const double C31569 = g[380];
    const double C31584 = g[381];
    const double C31643 = g[382];
    const double C31659 = g[383];
    const double C31689 = g[384];
    const double C31704 = g[385];
    const double C31762 = g[386];
    const double C31777 = g[387];
    const double C31806 = g[388];
    const double C31823 = g[389];
    const double C31839 = g[390];
    const double C31861 = g[391];
    const double C31892 = g[392];
    const double C32035 = g[393];
    const double C32051 = g[394];
    const double C32123 = g[395];
    const double C32139 = g[396];
    const double C32169 = g[397];
    const double C32185 = g[398];
    const double C32216 = g[399];
    const double C32232 = g[400];
    const double C32263 = g[401];
    const double C32279 = g[402];
    const double C32324 = g[403];
    const double C32454 = g[404];
    const double C32471 = g[405];
    const double C32551 = g[406];
    const double C32567 = g[407];
    const double C32613 = g[408];
    const double C32658 = g[409];
    const double C32673 = g[410];
    const double C32745 = g[411];
    const double C32788 = g[412];
    const double C32839 = g[413];
    const double C32855 = g[414];
    const double C32952 = g[415];
    const double C32968 = g[416];
    const double C33049 = g[417];
    const double C33234 = g[418];
    const double C33616 = g[419];
    const double C33632 = g[420];
    const double C33720 = g[421];
    const double C33735 = g[422];
    const double C33826 = g[423];
    const double C33931 = g[424];
    const double C34372 = g[425];
    const double C34531 = g[426];
    const double C34691 = g[427];
    const double C34752 = g[428];
    const double C34927 = g[429];
    const double C35008 = g[430];
    const double C35142 = g[431];
    const double C35365 = g[432];
    const double C35381 = g[433];
    const double C35412 = g[434];
    const double C35493 = g[435];
    const double C36285 = g[436];
    const double C36347 = g[437];
    const double C37298 = g[438];
    const double C37399 = g[439];
    const double C37524 = g[440];
    const double C37881 = g[441];
    const double C38006 = g[442];
    const double C30557 = p + q;
    const double C30556 = p * q;
    const double C38113 = bs[7];
    const double C38112 = bs[6];
    const double C38110 = bs[5];
    const double C38108 = bs[4];
    const double C38106 = bs[3];
    const double C38099 = bs[2];
    const double C38092 = std::pow(Pi, 2.5);
    const double C38089 = bs[1];
    const double C38088 = ae * be;
    const double C38087 = bs[0];
    const double C38084 = zP - zQ;
    const double C38083 = be * zAB;
    const double C38081 = yP - yQ;
    const double C38080 = be * yAB;
    const double C38077 = 2 * p;
    const double C38076 = xP - xQ;
    const double C38075 = std::pow(p, 2);
    const double C38073 = be * xAB;
    const double C38072 = ae / p;
    const double C30558 = C30557 * p;
    const double C38093 = std::sqrt(C30557);
    const double C38091 = p * C30557;
    const double C38090 = kab * C30556;
    const double C38074 = ae * C30556;
    const double C38176 = 4 * C38092;
    const double C38174 = kab * C38088;
    const double C38161 = C38084 * C30556;
    const double C38159 = C38081 * C30556;
    const double C38155 = C38076 * C30556;
    const double C38154 = C30557 * C38075;
    const double C38152 = C38072 - 1;
    const double C38177 = C30556 * C38093;
    const double C38175 = kcd * C38090;
    const double C38243 = C35412 * C38074;
    const double C38234 = C34531 * C38074;
    const double C38228 = C33735 * C38074;
    const double C38227 = C33720 * C38074;
    const double C38221 = C33049 * C38074;
    const double C38219 = C32952 * C38074;
    const double C38217 = C32788 * C38074;
    const double C38216 = C32745 * C38074;
    const double C38215 = C32673 * C38074;
    const double C38214 = C32658 * C38074;
    const double C38212 = C32613 * C38074;
    const double C38211 = C32567 * C38074;
    const double C38210 = C32471 * C38074;
    const double C38207 = C32279 * C38074;
    const double C38206 = C32263 * C38074;
    const double C38202 = C32139 * C38074;
    const double C38201 = C32123 * C38074;
    const double C38199 = C32051 * C38074;
    const double C38198 = C32035 * C38074;
    const double C38197 = C31892 * C38074;
    const double C38196 = C31861 * C38074;
    const double C38195 = C31839 * C38074;
    const double C38193 = C31806 * C38074;
    const double C38192 = C31777 * C38074;
    const double C38191 = C31762 * C38074;
    const double C38190 = C31704 * C38074;
    const double C38189 = C31689 * C38074;
    const double C38188 = C31659 * C38074;
    const double C38187 = C31584 * C38074;
    const double C38186 = C31569 * C38074;
    const double C38185 = C31481 * C38074;
    const double C38184 = C31451 * C38074;
    const double C38183 = C31421 * C38074;
    const double C38180 = C31314 * C38074;
    const double C38173 = C31054 * C38074;
    const double C38171 = C31037 * C38074;
    const double C38169 = C31021 * C38074;
    const double C38168 = C30992 * C38074;
    const double C38167 = C30961 * C38074;
    const double C38166 = C30932 * C38074;
    const double C38165 = C30917 * C38074;
    const double C38164 = C30844 * C38074;
    const double C38163 = C30799 * C38074;
    const double C38162 = C30711 * C38074;
    const double C38156 = C30574 * C38074;
    const double C38153 = C30554 * C38074;
    const double C38293 = kcd * C38174;
    const double C38399 = C38152 * C32658;
    const double C38389 = C38152 * C30992;
    const double C38382 = C38152 * C18069;
    const double C38380 = C38152 * C18314;
    const double C38372 = C38152 * C32952;
    const double C38368 = C38152 * C32788;
    const double C38363 = C38152 * C32471;
    const double C38361 = C38152 * C32263;
    const double C38359 = C38152 * C32123;
    const double C38357 = C38152 * C31892;
    const double C38354 = C38152 * C31861;
    const double C38352 = C38152 * C32035;
    const double C38349 = C38152 * C31839;
    const double C38345 = C38152 * C31689;
    const double C38343 = C38152 * C30932;
    const double C38338 = C38152 * C31451;
    const double C38336 = C38152 * C30799;
    const double C38333 = C38152 * C31021;
    const double C38331 = C38152 * C30554;
    const double C38329 = C38152 * C30844;
    const double C38327 = C38152 * C30711;
    const double C38324 = C38152 * C31054;
    const double C38321 = C38152 * C30574;
    const double C38319 = C38152 * C29556;
    const double C38317 = C38152 * C24442;
    const double C38315 = C38152 * C19580;
    const double C38313 = C38152 * C19303;
    const double C38311 = C38152 * C24672;
    const double C38309 = C38152 * C24201;
    const double C38307 = C38152 * C23753;
    const double C38305 = C38152 * C19100;
    const double C38303 = C38152 * C18601;
    const double C38301 = C38152 * C19537;
    const double C38297 = C38152 * C19042;
    const double C38291 = C38152 * C31053;
    const double C38288 = C38152 * C17403;
    const double C38285 = C38152 * C17387;
    const double C38283 = C38152 * C19654;
    const double C38281 = C38152 * C19624;
    const double C38279 = C38152 * C19333;
    const double C38277 = C38152 * C19258;
    const double C38275 = C38152 * C19144;
    const double C38273 = C38152 * C18631;
    const double C38271 = C38152 * C18444;
    const double C38266 = C38152 * C17419;
    const double C38264 = C38152 * C17372;
    const double C38374 = C38113 * C38175;
    const double C38371 = C38112 * C38175;
    const double C38367 = C38110 * C38175;
    const double C38365 = C38108 * C38175;
    const double C38351 = C38106 * C38175;
    const double C38326 = C38099 * C38175;
    const double C38294 = C38089 * C38175;
    const double C38400 = C38243 / C38154;
    const double C38390 = C38234 / C38154;
    const double C38383 = C38228 / C38154;
    const double C38381 = C38227 / C38154;
    const double C38373 = C38221 / C38154;
    const double C38369 = C38219 / C38154;
    const double C38364 = C38217 / C38154;
    const double C38362 = C38216 / C38154;
    const double C38360 = C38215 / C38154;
    const double C38358 = C38214 / C38154;
    const double C38355 = C38212 / C38154;
    const double C38353 = C38211 / C38154;
    const double C38350 = C38210 / C38154;
    const double C38346 = C38207 / C38154;
    const double C38344 = C38206 / C38154;
    const double C38339 = C38202 / C38154;
    const double C38337 = C38201 / C38154;
    const double C38334 = C38199 / C38154;
    const double C38332 = C38198 / C38154;
    const double C38330 = C38197 / C38154;
    const double C38328 = C38196 / C38154;
    const double C38325 = C38195 / C38154;
    const double C38322 = C38193 / C38154;
    const double C38320 = C38192 / C38154;
    const double C38318 = C38191 / C38154;
    const double C38316 = C38190 / C38154;
    const double C38314 = C38189 / C38154;
    const double C38312 = C38188 / C38154;
    const double C38310 = C38187 / C38154;
    const double C38308 = C38186 / C38154;
    const double C38306 = C38185 / C38154;
    const double C38304 = C38184 / C38154;
    const double C38302 = C38183 / C38154;
    const double C38298 = C38180 / C38154;
    const double C38292 = C38173 / C38154;
    const double C38289 = C38171 / C38154;
    const double C38286 = C38169 / C38154;
    const double C38284 = C38168 / C38154;
    const double C38282 = C38167 / C38154;
    const double C38280 = C38166 / C38154;
    const double C38278 = C38165 / C38154;
    const double C38276 = C38164 / C38154;
    const double C38274 = C38163 / C38154;
    const double C38272 = C38162 / C38154;
    const double C38267 = C38156 / C38154;
    const double C38265 = C38153 / C38154;
    const double C38449 = C38112 * C38293;
    const double C38447 = C38110 * C38293;
    const double C38444 = C38108 * C38293;
    const double C38441 = C38106 * C38293;
    const double C38439 = C38099 * C38293;
    const double C38432 = C38089 * C38293;
    const double C38423 = C38087 * C38293;
    const double C38450 = C38374 * ae;
    const double C38448 = C38371 * ae;
    const double C38445 = C38367 * ae;
    const double C38442 = C38365 * ae;
    const double C38440 = C38351 * ae;
    const double C38433 = C38326 * ae;
    const double C38424 = C38294 * ae;
    const double C33053 =
        -(((xAB * C38449) / p + (C38076 * C38450) / C38091) * C38176) / C38177;
    const double C35549 =
        -(((yAB * C38449) / p + (C38081 * C38450) / C38091) * C38176) / C38177;
    const double C38034 =
        -(((zAB * C38449) / p + (C38084 * C38450) / C38091) * C38176) / C38177;
    const double C32956 =
        -(((xAB * C38447) / p + (C38076 * C38448) / C38091) * C38176) / C38177;
    const double C35453 =
        -(((yAB * C38447) / p + (C38081 * C38448) / C38091) * C38176) / C38177;
    const double C37938 =
        -(((zAB * C38447) / p + (C38084 * C38448) / C38091) * C38176) / C38177;
    const double C32792 =
        -(((xAB * C38444) / p + (C38076 * C38445) / C38091) * C38176) / C38177;
    const double C35296 =
        -(((yAB * C38444) / p + (C38081 * C38445) / C38091) * C38176) / C38177;
    const double C37783 =
        -(((zAB * C38444) / p + (C38084 * C38445) / C38091) * C38176) / C38177;
    const double C32459 =
        -(((xAB * C38441) / p + (C38076 * C38442) / C38091) * C38176) / C38177;
    const double C34968 =
        -(((yAB * C38441) / p + (C38081 * C38442) / C38091) * C38176) / C38177;
    const double C37456 =
        -(((zAB * C38441) / p + (C38084 * C38442) / C38091) * C38176) / C38177;
    const double C31827 =
        -(((xAB * C38439) / p + (C38076 * C38440) / C38091) * C38176) / C38177;
    const double C34324 =
        -(((yAB * C38439) / p + (C38081 * C38440) / C38091) * C38176) / C38177;
    const double C36815 =
        -(((zAB * C38439) / p + (C38084 * C38440) / C38091) * C38176) / C38177;
    const double C30594 =
        -(((xAB * C38432) / p + (C38076 * C38433) / C38091) * C38176) / C38177;
    const double C33135 =
        -(((yAB * C38432) / p + (C38081 * C38433) / C38091) * C38176) / C38177;
    const double C35631 =
        -(((zAB * C38432) / p + (C38084 * C38433) / C38091) * C38176) / C38177;
    const double C17438 =
        -(((xAB * C38423) / p + (C38076 * C38424) / C38091) * C38176) / C38177;
    const double C22538 =
        -(((yAB * C38423) / p + (C38081 * C38424) / C38091) * C38176) / C38177;
    const double C27599 =
        -(((zAB * C38423) / p + (C38084 * C38424) / C38091) * C38176) / C38177;
    const double C38111 = C32956 * C30556;
    const double C32972 =
        C38372 - (C32956 * C38073) / p - C38373 - (C33053 * C38155) / C30558;
    const double C33001 = -((C32956 * C38080) / p + (C33053 * C38159) / C30558);
    const double C33030 = -((C32956 * C38083) / p + (C33053 * C38161) / C30558);
    const double C38132 = C35453 * C30556;
    const double C35468 = -((C35453 * C38073) / p + (C35549 * C38155) / C30558);
    const double C35498 =
        C38372 - (C35453 * C38080) / p - C38373 - (C35549 * C38159) / C30558;
    const double C35527 = -((C35453 * C38083) / p + (C35549 * C38161) / C30558);
    const double C38151 = C37938 * C30556;
    const double C37953 = -((C37938 * C38073) / p + (C38034 * C38155) / C30558);
    const double C37982 = -((C37938 * C38080) / p + (C38034 * C38159) / C30558);
    const double C38012 =
        C38372 - (C37938 * C38083) / p - C38373 - (C38034 * C38161) / C30558;
    const double C38109 = C32792 * C30556;
    const double C32843 =
        C38368 - (C32792 * C38073) / p - C38369 - (C32956 * C38155) / C30558;
    const double C32874 = -((C32792 * C38080) / p + (C32956 * C38159) / C30558);
    const double C32904 = -((C32792 * C38083) / p + (C32956 * C38161) / C30558);
    const double C38131 = C35296 * C30556;
    const double C35339 = -((C35296 * C38073) / p + (C35453 * C38155) / C30558);
    const double C35370 =
        C38368 - (C35296 * C38080) / p - C38369 - (C35453 * C38159) / C30558;
    const double C35401 = -((C35296 * C38083) / p + (C35453 * C38161) / C30558);
    const double C38150 = C37783 * C30556;
    const double C37826 = -((C37783 * C38073) / p + (C37938 * C38155) / C30558);
    const double C37856 = -((C37783 * C38080) / p + (C37938 * C38159) / C30558);
    const double C37887 =
        C38368 - (C37783 * C38083) / p - C38369 - (C37938 * C38161) / C30558;
    const double C38105 = C32459 * C30556;
    const double C32458 =
        C38363 - (C32459 * C38073) / p - C38364 - (C32792 * C38155) / C30558;
    const double C32496 = -((C32459 * C38080) / p + (C32792 * C38159) / C30558);
    const double C32525 = -((C32459 * C38083) / p + (C32792 * C38161) / C30558);
    const double C38129 = C34968 * C30556;
    const double C34983 = -((C34968 * C38073) / p + (C35296 * C38155) / C30558);
    const double C35013 =
        C38363 - (C34968 * C38080) / p - C38364 - (C35296 * C38159) / C30558;
    const double C35042 = -((C34968 * C38083) / p + (C35296 * C38161) / C30558);
    const double C38148 = C37456 * C30556;
    const double C37471 = -((C37456 * C38073) / p + (C37783 * C38155) / C30558);
    const double C37500 = -((C37456 * C38080) / p + (C37783 * C38159) / C30558);
    const double C37530 =
        C38363 - (C37456 * C38083) / p - C38364 - (C37783 * C38161) / C30558;
    const double C38098 = C31827 * C30556;
    const double C31811 =
        C38349 - (C31827 * C38073) / p - C38350 - (C32459 * C38155) / C30558;
    const double C31880 = -((C31827 * C38080) / p + (C32459 * C38159) / C30558);
    const double C31911 = -((C31827 * C38083) / p + (C32459 * C38161) / C30558);
    const double C38123 = C34324 * C30556;
    const double C34325 = -((C34324 * C38073) / p + (C34968 * C38155) / C30558);
    const double C34377 =
        C38349 - (C34324 * C38080) / p - C38350 - (C34968 * C38159) / C30558;
    const double C34407 = -((C34324 * C38083) / p + (C34968 * C38161) / C30558);
    const double C38142 = C36815 * C30556;
    const double C36816 = -((C36815 * C38073) / p + (C37456 * C38155) / C30558);
    const double C36867 = -((C36815 * C38080) / p + (C37456 * C38159) / C30558);
    const double C36897 =
        C38349 - (C36815 * C38083) / p - C38350 - (C37456 * C38161) / C30558;
    const double C38078 = C30594 * C30556;
    const double C30578 =
        C38324 - (C30594 * C38073) / p - C38325 - (C31827 * C38155) / C30558;
    const double C30729 = -((C30594 * C38080) / p + (C31827 * C38159) / C30558);
    const double C30862 = -((C30594 * C38083) / p + (C31827 * C38161) / C30558);
    const double C38114 = C33135 * C30556;
    const double C33120 = -((C33135 * C38073) / p + (C34324 * C38155) / C30558);
    const double C33268 =
        C38324 - (C33135 * C38080) / p - C38325 - (C34324 * C38159) / C30558;
    const double C33398 = -((C33135 * C38083) / p + (C34324 * C38161) / C30558);
    const double C38133 = C35631 * C30556;
    const double C35616 = -((C35631 * C38073) / p + (C36815 * C38155) / C30558);
    const double C35763 = -((C35631 * C38080) / p + (C36815 * C38159) / C30558);
    const double C35893 =
        C38324 - (C35631 * C38083) / p - C38325 - (C36815 * C38161) / C30558;
    const double C17423 =
        C38291 - (C17438 * C38073) / p - C38292 - (C30594 * C38155) / C30558;
    const double C17775 = -((C17438 * C38080) / p + (C30594 * C38159) / C30558);
    const double C18042 = -((C17438 * C38083) / p + (C30594 * C38161) / C30558);
    const double C22524 = -((C22538 * C38073) / p + (C33135 * C38155) / C30558);
    const double C22871 =
        C38291 - (C22538 * C38080) / p - C38292 - (C33135 * C38159) / C30558;
    const double C23132 = -((C22538 * C38083) / p + (C33135 * C38161) / C30558);
    const double C27585 = -((C27599 * C38073) / p + (C35631 * C38155) / C30558);
    const double C27932 = -((C27599 * C38080) / p + (C35631 * C38159) / C30558);
    const double C28193 =
        C38291 - (C27599 * C38083) / p - C38292 - (C35631 * C38161) / C30558;
    const double C38220 = C38111 / C30558;
    const double C38244 = C38132 / C30558;
    const double C38263 = C38151 / C30558;
    const double C38218 = C38109 / C30558;
    const double C38242 = C38131 / C30558;
    const double C38262 = C38150 / C30558;
    const double C38209 = C38105 / C30558;
    const double C38240 = C38129 / C30558;
    const double C38260 = C38148 / C30558;
    const double C38194 = C38098 / C30558;
    const double C38233 = C38123 / C30558;
    const double C38254 = C38142 / C30558;
    const double C38157 = C38078 / C30558;
    const double C30980 = -((C30862 * C38080) / p + (C31911 * C38159) / C30558);
    const double C38222 = C38114 / C30558;
    const double C33512 =
        C38389 - (C33398 * C38080) / p - C38390 - (C34407 * C38159) / C30558;
    const double C38245 = C38133 / C30558;
    const double C36007 = -((C35893 * C38080) / p + (C36897 * C38159) / C30558);
    const double C17021 =
        C38281 - (C17775 * C38073) / p - C38282 - (C30729 * C38155) / C30558;
    const double C17199 =
        C38283 - (C18042 * C38073) / p - C38284 - (C30862 * C38155) / C30558;
    const double C17288 = -((C18042 * C38080) / p + (C30862 * C38159) / C30558);
    const double C22137 = -((C22871 * C38073) / p + (C33268 * C38155) / C30558);
    const double C22309 = -((C23132 * C38073) / p + (C33398 * C38155) / C30558);
    const double C22395 =
        C38283 - (C23132 * C38080) / p - C38284 - (C33398 * C38159) / C30558;
    const double C27198 = -((C27932 * C38073) / p + (C35763 * C38155) / C30558);
    const double C27370 = -((C28193 * C38073) / p + (C35893 * C38155) / C30558);
    const double C27456 = -((C28193 * C38080) / p + (C35893 * C38159) / C30558);
    const double C38370 = C32792 - C38220;
    const double C38401 = C35296 - C38244;
    const double C38420 = C37783 - C38263;
    const double C38366 = C32459 - C38218;
    const double C38398 = C34968 - C38242;
    const double C38419 = C37456 - C38262;
    const double C38348 = C31827 - C38209;
    const double C38396 = C34324 - C38240;
    const double C38417 = C36815 - C38260;
    const double C38323 = C30594 - C38194;
    const double C38388 = C33135 - C38233;
    const double C38411 = C35631 - C38254;
    const double C38268 = C17438 - C38157;
    const double C38375 = C22538 - C38222;
    const double C38402 = C27599 - C38245;
    const double C17110 = C38152 * C19639 - (C17288 * C38073) / p -
                          (C30976 * C38074) / C38154 -
                          (C30980 * C38155) / C30558;
    const double C22223 = -((C22395 * C38073) / p + (C33512 * C38155) / C30558);
    const double C27284 = -((C27456 * C38073) / p + (C36007 * C38155) / C30558);
    const double C38446 = C38370 / C38077;
    const double C38466 = C38401 / C38077;
    const double C38482 = C38420 / C38077;
    const double C38443 = C38366 / C38077;
    const double C38465 = C38398 / C38077;
    const double C38481 = C38419 / C38077;
    const double C38438 = C38348 / C38077;
    const double C38464 = C38396 / C38077;
    const double C38480 = C38417 / C38077;
    const double C38431 = C38323 / C38077;
    const double C38459 = C38388 / C38077;
    const double C38475 = C38411 / C38077;
    const double C38421 = C38268 / C38077;
    const double C38451 = C38375 / C38077;
    const double C38467 = C38402 / C38077;
    const double C32859 = C38152 * C32839 - (C32843 * C38073) / p -
                          (C32968 * C38074) / C38154 -
                          (C32972 * C38155) / C30558 + C38446;
    const double C32889 =
        C38446 - ((C32874 * C38080) / p + (C33001 * C38159) / C30558);
    const double C32919 =
        C38446 - ((C32904 * C38083) / p + (C33030 * C38161) / C30558);
    const double C35354 =
        C38466 - ((C35339 * C38073) / p + (C35468 * C38155) / C30558);
    const double C35386 = C38152 * C35365 - (C35370 * C38080) / p -
                          (C35493 * C38074) / C38154 -
                          (C35498 * C38159) / C30558 + C38466;
    const double C35417 =
        C38466 - ((C35401 * C38083) / p + (C35527 * C38161) / C30558);
    const double C37841 =
        C38482 - ((C37826 * C38073) / p + (C37953 * C38155) / C30558);
    const double C37871 =
        C38482 - ((C37856 * C38080) / p + (C37982 * C38159) / C30558);
    const double C37902 = C38152 * C37881 - (C37887 * C38083) / p -
                          (C38006 * C38074) / C38154 -
                          (C38012 * C38161) / C30558 + C38482;
    const double C32555 = C38152 * C32454 - (C32458 * C38073) / p -
                          (C32839 * C38074) / C38154 -
                          (C32843 * C38155) / C30558 + C38443;
    const double C32586 =
        C38443 - ((C32496 * C38080) / p + (C32874 * C38159) / C30558);
    const double C32631 =
        C38443 - ((C32525 * C38083) / p + (C32904 * C38161) / C30558);
    const double C35057 =
        C38465 - ((C34983 * C38073) / p + (C35339 * C38155) / C30558);
    const double C35087 = C38152 * C35008 - (C35013 * C38080) / p -
                          (C35365 * C38074) / C38154 -
                          (C35370 * C38159) / C30558 + C38465;
    const double C35131 =
        C38465 - ((C35042 * C38083) / p + (C35401 * C38161) / C30558);
    const double C37545 =
        C38481 - ((C37471 * C38073) / p + (C37826 * C38155) / C30558);
    const double C37575 =
        C38481 - ((C37500 * C38080) / p + (C37856 * C38159) / C30558);
    const double C37619 = C38152 * C37524 - (C37530 * C38083) / p -
                          (C37881 * C38074) / C38154 -
                          (C37887 * C38161) / C30558 + C38481;
    const double C31810 = C38152 * C31823 - (C31811 * C38073) / p -
                          (C32454 * C38074) / C38154 -
                          (C32458 * C38155) / C30558 + C38438;
    const double C31865 =
        C38438 - ((C31880 * C38080) / p + (C32496 * C38159) / C30558);
    const double C31896 =
        C38438 - ((C31911 * C38083) / p + (C32525 * C38161) / C30558);
    const double C34340 =
        C38464 - ((C34325 * C38073) / p + (C34983 * C38155) / C30558);
    const double C34392 = C38152 * C34372 - (C34377 * C38080) / p -
                          (C35008 * C38074) / C38154 -
                          (C35013 * C38159) / C30558 + C38464;
    const double C34422 =
        C38464 - ((C34407 * C38083) / p + (C35042 * C38161) / C30558);
    const double C36831 =
        C38480 - ((C36816 * C38073) / p + (C37471 * C38155) / C30558);
    const double C36882 =
        C38480 - ((C36867 * C38080) / p + (C37500 * C38159) / C30558);
    const double C36912 = C38152 * C34531 - (C36897 * C38083) / p -
                          (C37524 * C38074) / C38154 -
                          (C37530 * C38161) / C30558 + C38480;
    const double C30562 = C38152 * C30590 - (C30578 * C38073) / p -
                          (C31823 * C38074) / C38154 -
                          (C31811 * C38155) / C30558 + C38431;
    const double C30611 =
        C38431 - ((C30729 * C38080) / p + (C31880 * C38159) / C30558);
    const double C30642 =
        C38431 - ((C30862 * C38083) / p + (C31911 * C38161) / C30558);
    const double C33104 =
        C38459 - ((C33120 * C38073) / p + (C34325 * C38155) / C30558);
    const double C33150 = C38152 * C30961 - (C33268 * C38080) / p -
                          (C34372 * C38074) / C38154 -
                          (C34377 * C38159) / C30558 + C38459;
    const double C33180 =
        C38459 - ((C33398 * C38083) / p + (C34407 * C38161) / C30558);
    const double C35600 =
        C38475 - ((C35616 * C38073) / p + (C36816 * C38155) / C30558);
    const double C35646 =
        C38475 - ((C35763 * C38080) / p + (C36867 * C38159) / C30558);
    const double C35676 = C38389 - (C35893 * C38083) / p - C38390 -
                          (C36897 * C38161) / C30558 + C38475;
    const double C14527 = C38152 * C17434 - (C17423 * C38073) / p -
                          (C30590 * C38074) / C38154 -
                          (C30578 * C38155) / C30558 + C38421;
    const double C15460 =
        C38421 - ((C17775 * C38080) / p + (C30729 * C38159) / C30558);
    const double C16300 =
        C38421 - ((C18042 * C38083) / p + (C30862 * C38161) / C30558);
    const double C19722 =
        C38451 - ((C22524 * C38073) / p + (C33120 * C38155) / C30558);
    const double C20626 = C38281 - (C22871 * C38080) / p - C38282 -
                          (C33268 * C38159) / C30558 + C38451;
    const double C21439 =
        C38451 - ((C23132 * C38083) / p + (C33398 * C38161) / C30558);
    const double C24783 =
        C38467 - ((C27585 * C38073) / p + (C35616 * C38155) / C30558);
    const double C25687 =
        C38467 - ((C27932 * C38080) / p + (C35763 * C38159) / C30558);
    const double C26500 = C38283 - (C28193 * C38083) / p - C38284 -
                          (C35893 * C38161) / C30558 + C38467;
    const double C32571 =
        C38152 * C32551 - (C32555 * C38073) / p - (C32855 * C38074) / C38154 -
        (C32859 * C38155) / C30558 + (C32458 - (C32843 * C30556) / C30558) / p;
    const double C32601 = (C32496 - (C32874 * C30556) / C30558) / p -
                          ((C32586 * C38080) / p + (C32889 * C38159) / C30558);
    const double C38107 = C32631 * C30556;
    const double C32632 = -((C32631 * C38080) / p + (C32919 * C38159) / C30558);
    const double C32719 = (C32525 - (C32904 * C30556) / C30558) / p -
                          ((C32631 * C38083) / p + (C32919 * C38161) / C30558);
    const double C35072 = (C34983 - (C35339 * C30556) / C30558) / p -
                          ((C35057 * C38073) / p + (C35354 * C38155) / C30558);
    const double C35102 =
        C38152 * C32613 - (C35087 * C38080) / p - (C35381 * C38074) / C38154 -
        (C35386 * C38159) / C30558 + (C35013 - (C35370 * C30556) / C30558) / p;
    const double C38130 = C35131 * C30556;
    const double C35147 =
        C38399 - (C35131 * C38080) / p - C38400 - (C35417 * C38159) / C30558;
    const double C35218 = (C35042 - (C35401 * C30556) / C30558) / p -
                          ((C35131 * C38083) / p + (C35417 * C38161) / C30558);
    const double C37560 = (C37471 - (C37826 * C30556) / C30558) / p -
                          ((C37545 * C38073) / p + (C37841 * C38155) / C30558);
    const double C37590 = (C37500 - (C37856 * C30556) / C30558) / p -
                          ((C37575 * C38080) / p + (C37871 * C38159) / C30558);
    const double C38149 = C37619 * C30556;
    const double C37634 = -((C37619 * C38080) / p + (C37902 * C38159) / C30558);
    const double C37705 = C38399 - (C37619 * C38083) / p - C38400 -
                          (C37902 * C38161) / C30558 +
                          (C37530 - (C37887 * C30556) / C30558) / p;
    const double C32039 =
        C38152 * C31806 - (C31810 * C38073) / p - (C32551 * C38074) / C38154 -
        (C32555 * C38155) / C30558 + (C31811 - (C32458 * C30556) / C30558) / p;
    const double C38101 = C31865 * C30556;
    const double C32127 = (C31880 - (C32496 * C30556) / C30558) / p -
                          ((C31865 * C38080) / p + (C32586 * C38159) / C30558);
    const double C32173 =
        C38354 - (C31865 * C38073) / p - C38355 - (C32586 * C38155) / C30558;
    const double C38102 = C31896 * C30556;
    const double C32204 = -((C31896 * C38080) / p + (C32631 * C38159) / C30558);
    const double C32220 =
        C38357 - (C31896 * C38073) / p - C38358 - (C32631 * C38155) / C30558;
    const double C32267 = (C31911 - (C32525 * C30556) / C30558) / p -
                          ((C31896 * C38083) / p + (C32631 * C38161) / C30558);
    const double C34550 = (C34325 - (C34983 * C30556) / C30558) / p -
                          ((C34340 * C38073) / p + (C35057 * C38155) / C30558);
    const double C38125 = C34392 * C30556;
    const double C34636 = C38354 - (C34392 * C38080) / p - C38355 -
                          (C35087 * C38159) / C30558 +
                          (C34377 - (C35013 * C30556) / C30558) / p;
    const double C34680 = -((C34392 * C38073) / p + (C35087 * C38155) / C30558);
    const double C38126 = C34422 * C30556;
    const double C34696 =
        C38357 - (C34422 * C38080) / p - C38358 - (C35131 * C38159) / C30558;
    const double C34726 = -((C34422 * C38073) / p + (C35131 * C38155) / C30558);
    const double C34772 = (C34407 - (C35042 * C30556) / C30558) / p -
                          ((C34422 * C38083) / p + (C35131 * C38161) / C30558);
    const double C37039 = (C36816 - (C37471 * C30556) / C30558) / p -
                          ((C36831 * C38073) / p + (C37545 * C38155) / C30558);
    const double C38144 = C36882 * C30556;
    const double C37125 = (C36867 - (C37500 * C30556) / C30558) / p -
                          ((C36882 * C38080) / p + (C37575 * C38159) / C30558);
    const double C37169 = -((C36882 * C38073) / p + (C37575 * C38155) / C30558);
    const double C38145 = C36912 * C30556;
    const double C37184 = -((C36912 * C38080) / p + (C37619 * C38159) / C30558);
    const double C37214 = -((C36912 * C38073) / p + (C37619 * C38155) / C30558);
    const double C37259 = C38357 - (C36912 * C38083) / p - C38358 -
                          (C37619 * C38161) / C30558 +
                          (C36897 - (C37530 * C30556) / C30558) / p;
    const double C30561 = C38321 - (C30562 * C38073) / p - C38322 -
                          (C31810 * C38155) / C30558 +
                          (C30578 - (C31811 * C30556) / C30558) / p;
    const double C30699 = -((C30562 * C38083) / p + (C31810 * C38161) / C30558);
    const double C38079 = C30611 * C30556;
    const double C30610 =
        C38327 - (C30611 * C38073) / p - C38328 - (C31865 * C38155) / C30558;
    const double C30744 = (C30729 - (C31880 * C30556) / C30558) / p -
                          ((C30611 * C38080) / p + (C31865 * C38159) / C30558);
    const double C30818 = -((C30611 * C38083) / p + (C31865 * C38161) / C30558);
    const double C38082 = C30642 * C30556;
    const double C30641 =
        C38329 - (C30642 * C38073) / p - C38330 - (C31896 * C38155) / C30558;
    const double C30773 = -((C30642 * C38080) / p + (C31896 * C38159) / C30558);
    const double C30891 = (C30862 - (C31911 * C30556) / C30558) / p -
                          ((C30642 * C38083) / p + (C31896 * C38161) / C30558);
    const double C33105 = (C33120 - (C34325 * C30556) / C30558) / p -
                          ((C33104 * C38073) / p + (C34340 * C38155) / C30558);
    const double C33239 = -((C33104 * C38083) / p + (C34340 * C38161) / C30558);
    const double C38115 = C33150 * C30556;
    const double C33151 = -((C33150 * C38073) / p + (C34392 * C38155) / C30558);
    const double C33283 = C38327 - (C33150 * C38080) / p - C38328 -
                          (C34392 * C38159) / C30558 +
                          (C33268 - (C34377 * C30556) / C30558) / p;
    const double C33355 = -((C33150 * C38083) / p + (C34392 * C38161) / C30558);
    const double C38116 = C33180 * C30556;
    const double C33181 = -((C33180 * C38073) / p + (C34422 * C38155) / C30558);
    const double C33312 =
        C38329 - (C33180 * C38080) / p - C38330 - (C34422 * C38159) / C30558;
    const double C33427 = (C33398 - (C34407 * C30556) / C30558) / p -
                          ((C33180 * C38083) / p + (C34422 * C38161) / C30558);
    const double C35601 = (C35616 - (C36816 * C30556) / C30558) / p -
                          ((C35600 * C38073) / p + (C36831 * C38155) / C30558);
    const double C35734 =
        C38321 - (C35600 * C38083) / p - C38322 - (C36831 * C38161) / C30558;
    const double C38134 = C35646 * C30556;
    const double C35647 = -((C35646 * C38073) / p + (C36882 * C38155) / C30558);
    const double C35778 = (C35763 - (C36867 * C30556) / C30558) / p -
                          ((C35646 * C38080) / p + (C36882 * C38159) / C30558);
    const double C35850 =
        C38327 - (C35646 * C38083) / p - C38328 - (C36882 * C38161) / C30558;
    const double C38135 = C35676 * C30556;
    const double C35677 = -((C35676 * C38073) / p + (C36912 * C38155) / C30558);
    const double C35807 = -((C35676 * C38080) / p + (C36912 * C38159) / C30558);
    const double C35922 = C38329 - (C35676 * C38083) / p - C38330 -
                          (C36912 * C38161) / C30558 +
                          (C35893 - (C36897 * C30556) / C30558) / p;
    const double C14510 = C38266 - (C14527 * C38073) / p - C38267 -
                          (C30562 * C38155) / C30558 +
                          (C17423 - (C30578 * C30556) / C30558) / p;
    const double C14799 = -((C14527 * C38080) / p + (C30562 * C38159) / C30558);
    const double C14993 = -((C14527 * C38083) / p + (C30562 * C38161) / C30558);
    const double C15444 =
        C38271 - (C15460 * C38073) / p - C38272 - (C30611 * C38155) / C30558;
    const double C15648 = (C17775 - (C30729 * C30556) / C30558) / p -
                          ((C15460 * C38080) / p + (C30611 * C38159) / C30558);
    const double C15836 = -((C15460 * C38083) / p + (C30611 * C38161) / C30558);
    const double C16284 =
        C38275 - (C16300 * C38073) / p - C38276 - (C30642 * C38155) / C30558;
    const double C16467 = -((C16300 * C38080) / p + (C30642 * C38159) / C30558);
    const double C16576 = (C18042 - (C30862 * C30556) / C30558) / p -
                          ((C16300 * C38083) / p + (C30642 * C38161) / C30558);
    const double C19706 = (C22524 - (C33120 * C30556) / C30558) / p -
                          ((C19722 * C38073) / p + (C33104 * C38155) / C30558);
    const double C19986 =
        C38266 - (C19722 * C38080) / p - C38267 - (C33104 * C38159) / C30558;
    const double C20174 = -((C19722 * C38083) / p + (C33104 * C38161) / C30558);
    const double C20611 = -((C20626 * C38073) / p + (C33150 * C38155) / C30558);
    const double C20808 = C38271 - (C20626 * C38080) / p - C38272 -
                          (C33150 * C38159) / C30558 +
                          (C22871 - (C33268 * C30556) / C30558) / p;
    const double C20990 = -((C20626 * C38083) / p + (C33150 * C38161) / C30558);
    const double C21424 = -((C21439 * C38073) / p + (C33180 * C38155) / C30558);
    const double C21601 =
        C38275 - (C21439 * C38080) / p - C38276 - (C33180 * C38159) / C30558;
    const double C21706 = (C23132 - (C33398 * C30556) / C30558) / p -
                          ((C21439 * C38083) / p + (C33180 * C38161) / C30558);
    const double C24767 = (C27585 - (C35616 * C30556) / C30558) / p -
                          ((C24783 * C38073) / p + (C35600 * C38155) / C30558);
    const double C25047 = -((C24783 * C38080) / p + (C35600 * C38159) / C30558);
    const double C25235 =
        C38266 - (C24783 * C38083) / p - C38267 - (C35600 * C38161) / C30558;
    const double C25672 = -((C25687 * C38073) / p + (C35646 * C38155) / C30558);
    const double C25869 = (C27932 - (C35763 * C30556) / C30558) / p -
                          ((C25687 * C38080) / p + (C35646 * C38159) / C30558);
    const double C26051 =
        C38271 - (C25687 * C38083) / p - C38272 - (C35646 * C38161) / C30558;
    const double C26485 = -((C26500 * C38073) / p + (C35676 * C38155) / C30558);
    const double C26662 = -((C26500 * C38080) / p + (C35676 * C38159) / C30558);
    const double C26767 = C38275 - (C26500 * C38083) / p - C38276 -
                          (C35676 * C38161) / C30558 +
                          (C28193 - (C35893 * C30556) / C30558) / p;
    const double C38213 = C38107 / C30558;
    const double C38241 = C38130 / C30558;
    const double C38261 = C38149 / C30558;
    const double C38100 = C32039 * C30556;
    const double C32055 = C38352 - (C32039 * C38073) / p - C38353 -
                          (C32571 * C38155) / C30558 +
                          (3 * (C31810 - (C32555 * C30556) / C30558)) / C38077;
    const double C32251 = -((C32039 * C38080) / p + (C32571 * C38159) / C30558);
    const double C32312 = -((C32039 * C38083) / p + (C32571 * C38161) / C30558);
    const double C38203 = C38101 / C30558;
    const double C38103 = C32127 * C30556;
    const double C32143 = (3 * (C31865 - (C32586 * C30556) / C30558)) / C38077 -
                          ((C32127 * C38080) / p + (C32601 * C38159) / C30558);
    const double C32236 =
        C38359 - (C32127 * C38073) / p - C38360 - (C32601 * C38155) / C30558;
    const double C32413 = -((C32127 * C38083) / p + (C32601 * C38161) / C30558);
    const double C38204 = C38102 / C30558;
    const double C38104 = C32267 * C30556;
    const double C32328 =
        C38361 - (C32267 * C38073) / p - C38362 - (C32719 * C38155) / C30558;
    const double C32428 = -((C32267 * C38080) / p + (C32719 * C38159) / C30558);
    const double C38124 = C34550 * C30556;
    const double C34565 = (3 * (C34340 - (C35057 * C30556) / C30558)) / C38077 -
                          ((C34550 * C38073) / p + (C35072 * C38155) / C30558);
    const double C34757 =
        C38352 - (C34550 * C38080) / p - C38353 - (C35072 * C38159) / C30558;
    const double C34816 = -((C34550 * C38083) / p + (C35072 * C38161) / C30558);
    const double C38236 = C38125 / C30558;
    const double C38127 = C34636 * C30556;
    const double C34665 = C38359 - (C34636 * C38080) / p - C38360 -
                          (C35102 * C38159) / C30558 +
                          (3 * (C34392 - (C35087 * C30556) / C30558)) / C38077;
    const double C34741 = -((C34636 * C38073) / p + (C35102 * C38155) / C30558);
    const double C34916 = -((C34636 * C38083) / p + (C35102 * C38161) / C30558);
    const double C38237 = C38126 / C30558;
    const double C38128 = C34772 * C30556;
    const double C34831 = -((C34772 * C38073) / p + (C35218 * C38155) / C30558);
    const double C34932 =
        C38361 - (C34772 * C38080) / p - C38362 - (C35218 * C38159) / C30558;
    const double C38143 = C37039 * C30556;
    const double C37054 = (3 * (C36831 - (C37545 * C30556) / C30558)) / C38077 -
                          ((C37039 * C38073) / p + (C37560 * C38155) / C30558);
    const double C37244 = -((C37039 * C38080) / p + (C37560 * C38159) / C30558);
    const double C37304 =
        C38352 - (C37039 * C38083) / p - C38353 - (C37560 * C38161) / C30558;
    const double C38256 = C38144 / C30558;
    const double C38146 = C37125 * C30556;
    const double C37154 = (3 * (C36882 - (C37575 * C30556) / C30558)) / C38077 -
                          ((C37125 * C38080) / p + (C37590 * C38159) / C30558);
    const double C37229 = -((C37125 * C38073) / p + (C37590 * C38155) / C30558);
    const double C37405 =
        C38359 - (C37125 * C38083) / p - C38360 - (C37590 * C38161) / C30558;
    const double C38257 = C38145 / C30558;
    const double C38147 = C37259 * C30556;
    const double C37319 = -((C37259 * C38073) / p + (C37705 * C38155) / C30558);
    const double C37420 = -((C37259 * C38080) / p + (C37705 * C38159) / C30558);
    const double C38085 = C30561 * C30556;
    const double C31025 = C38331 - (C30561 * C38073) / p - C38332 -
                          (C32039 * C38155) / C30558 +
                          (3 * (C30562 - (C31810 * C30556) / C30558)) / C38077;
    const double C31108 = -((C30561 * C38080) / p + (C32039 * C38159) / C30558);
    const double C31152 = -((C30561 * C38083) / p + (C32039 * C38161) / C30558);
    const double C38158 = C38079 / C30558;
    const double C38094 = C30744 * C30556;
    const double C31238 =
        C38336 - (C30744 * C38073) / p - C38337 - (C32127 * C38155) / C30558;
    const double C31485 = -((C30744 * C38083) / p + (C32127 * C38161) / C30558);
    const double C38160 = C38082 / C30558;
    const double C38096 = C30891 * C30556;
    const double C31377 =
        C38343 - (C30891 * C38073) / p - C38344 - (C32267 * C38155) / C30558;
    const double C31616 = -((C30891 * C38080) / p + (C32267 * C38159) / C30558);
    const double C38117 = C33105 * C30556;
    const double C33555 = (3 * (C33104 - (C34340 * C30556) / C30558)) / C38077 -
                          ((C33105 * C38073) / p + (C34550 * C38155) / C30558);
    const double C33637 =
        C38331 - (C33105 * C38080) / p - C38332 - (C34550 * C38159) / C30558;
    const double C33681 = -((C33105 * C38083) / p + (C34550 * C38161) / C30558);
    const double C38223 = C38115 / C30558;
    const double C38119 = C33283 * C30556;
    const double C33768 = -((C33283 * C38073) / p + (C34636 * C38155) / C30558);
    const double C34008 = -((C33283 * C38083) / p + (C34636 * C38161) / C30558);
    const double C38224 = C38116 / C30558;
    const double C38121 = C33427 * C30556;
    const double C33904 = -((C33427 * C38073) / p + (C34772 * C38155) / C30558);
    const double C34137 =
        C38343 - (C33427 * C38080) / p - C38344 - (C34772 * C38159) / C30558;
    const double C38136 = C35601 * C30556;
    const double C36050 = (3 * (C35600 - (C36831 * C30556) / C30558)) / C38077 -
                          ((C35601 * C38073) / p + (C37039 * C38155) / C30558);
    const double C36130 = -((C35601 * C38080) / p + (C37039 * C38159) / C30558);
    const double C36174 =
        C38331 - (C35601 * C38083) / p - C38332 - (C37039 * C38161) / C30558;
    const double C38246 = C38134 / C30558;
    const double C38138 = C35778 * C30556;
    const double C36259 = -((C35778 * C38073) / p + (C37125 * C38155) / C30558);
    const double C36499 =
        C38336 - (C35778 * C38083) / p - C38337 - (C37125 * C38161) / C30558;
    const double C38247 = C38135 / C30558;
    const double C38140 = C35922 * C30556;
    const double C36396 = -((C35922 * C38073) / p + (C37259 * C38155) / C30558);
    const double C36628 = -((C35922 * C38080) / p + (C37259 * C38159) / C30558);
    const double C14491 = C38264 - (C14510 * C38073) / p - C38265 -
                          (C30561 * C38155) / C30558 +
                          (3 * (C14527 - (C30562 * C30556) / C30558)) / C38077;
    const double C15168 = -((C14510 * C38080) / p + (C30561 * C38159) / C30558);
    const double C15258 = -((C14510 * C38083) / p + (C30561 * C38161) / C30558);
    const double C15351 = -((C14993 * C38080) / p + (C30699 * C38159) / C30558);
    const double C16012 =
        C38273 - (C15648 * C38073) / p - C38274 - (C30744 * C38155) / C30558;
    const double C16192 = -((C15648 * C38083) / p + (C30744 * C38161) / C30558);
    const double C16102 = C38152 * C18811 - (C15836 * C38073) / p -
                          (C30814 * C38074) / C38154 -
                          (C30818 * C38155) / C30558;
    const double C16748 =
        C38277 - (C16467 * C38073) / p - C38278 - (C30773 * C38155) / C30558;
    const double C16838 =
        C38279 - (C16576 * C38073) / p - C38280 - (C30891 * C38155) / C30558;
    const double C16929 = -((C16576 * C38080) / p + (C30891 * C38159) / C30558);
    const double C19689 = (3 * (C19722 - (C33104 * C30556) / C30558)) / C38077 -
                          ((C19706 * C38073) / p + (C33105 * C38155) / C30558);
    const double C20344 =
        C38264 - (C19706 * C38080) / p - C38265 - (C33105 * C38159) / C30558;
    const double C20431 = -((C19706 * C38083) / p + (C33105 * C38161) / C30558);
    const double C20521 = C38152 * C18054 - (C20174 * C38080) / p -
                          (C33234 * C38074) / C38154 -
                          (C33239 * C38159) / C30558;
    const double C21161 = -((C20808 * C38073) / p + (C33283 * C38155) / C30558);
    const double C21335 = -((C20808 * C38083) / p + (C33283 * C38161) / C30558);
    const double C21248 = -((C20990 * C38073) / p + (C33355 * C38155) / C30558);
    const double C21873 = -((C21601 * C38073) / p + (C33312 * C38155) / C30558);
    const double C21960 = -((C21706 * C38073) / p + (C33427 * C38155) / C30558);
    const double C22048 =
        C38279 - (C21706 * C38080) / p - C38280 - (C33427 * C38159) / C30558;
    const double C24750 = (3 * (C24783 - (C35600 * C30556) / C30558)) / C38077 -
                          ((C24767 * C38073) / p + (C35601 * C38155) / C30558);
    const double C25405 = -((C24767 * C38080) / p + (C35601 * C38159) / C30558);
    const double C25492 =
        C38264 - (C24767 * C38083) / p - C38265 - (C35601 * C38161) / C30558;
    const double C25582 = -((C25235 * C38080) / p + (C35734 * C38159) / C30558);
    const double C26222 = -((C25869 * C38073) / p + (C35778 * C38155) / C30558);
    const double C26396 =
        C38273 - (C25869 * C38083) / p - C38274 - (C35778 * C38161) / C30558;
    const double C26309 = -((C26051 * C38073) / p + (C35850 * C38155) / C30558);
    const double C26934 = -((C26662 * C38073) / p + (C35807 * C38155) / C30558);
    const double C27021 = -((C26767 * C38073) / p + (C35922 * C38155) / C30558);
    const double C27109 = -((C26767 * C38080) / p + (C35922 * C38159) / C30558);
    const double C38356 = C31896 - C38213;
    const double C38397 = C34422 - C38241;
    const double C38418 = C36912 - C38261;
    const double C38200 = C38100 / C30558;
    const double C38340 = C30611 - C38203;
    const double C38205 = C38103 / C30558;
    const double C38341 = C30642 - C38204;
    const double C38208 = C38104 / C30558;
    const double C38235 = C38124 / C30558;
    const double C38392 = C33150 - C38236;
    const double C38238 = C38127 / C30558;
    const double C38393 = C33180 - C38237;
    const double C38239 = C38128 / C30558;
    const double C38255 = C38143 / C30558;
    const double C38413 = C35646 - C38256;
    const double C38258 = C38146 / C30558;
    const double C38414 = C35676 - C38257;
    const double C38259 = C38147 / C30558;
    const double C38170 = C38085 / C30558;
    const double C38086 = C31025 * C30556;
    const double C31093 = -((C31025 * C38080) / p + (C32055 * C38159) / C30558);
    const double C31137 = -((C31025 * C38083) / p + (C32055 * C38161) / C30558);
    const double C38269 = C15460 - C38158;
    const double C38178 = C38094 / C30558;
    const double C38270 = C16300 - C38160;
    const double C38181 = C38096 / C30558;
    const double C38225 = C38117 / C30558;
    const double C38118 = C33555 * C30556;
    const double C33621 =
        C38333 - (C33555 * C38080) / p - C38334 - (C34565 * C38159) / C30558;
    const double C33666 = -((C33555 * C38083) / p + (C34565 * C38161) / C30558);
    const double C38376 = C20626 - C38223;
    const double C38229 = C38119 / C30558;
    const double C38377 = C21439 - C38224;
    const double C38231 = C38121 / C30558;
    const double C38248 = C38136 / C30558;
    const double C38137 = C36050 * C30556;
    const double C36115 = -((C36050 * C38080) / p + (C37054 * C38159) / C30558);
    const double C36159 =
        C38333 - (C36050 * C38083) / p - C38334 - (C37054 * C38161) / C30558;
    const double C38403 = C25687 - C38246;
    const double C38250 = C38138 / C30558;
    const double C38404 = C26500 - C38247;
    const double C38252 = C38140 / C30558;
    const double C17453 = -((C14491 * C38080) / p + (C31025 * C38159) / C30558);
    const double C17540 = -((C14491 * C38083) / p + (C31025 * C38161) / C30558);
    const double C17700 = -((C15258 * C38080) / p + (C31152 * C38159) / C30558);
    const double C18561 =
        C38305 - (C16192 * C38073) / p - C38306 - (C31485 * C38155) / C30558;
    const double C19246 =
        C38315 - (C16929 * C38073) / p - C38316 - (C31616 * C38155) / C30558;
    const double C22553 =
        C38285 - (C19689 * C38080) / p - C38286 - (C33555 * C38159) / C30558;
    const double C22640 = -((C19689 * C38083) / p + (C33555 * C38161) / C30558);
    const double C22800 =
        C38382 - (C20431 * C38080) / p - C38383 - (C33681 * C38159) / C30558;
    const double C23643 = -((C21335 * C38073) / p + (C34008 * C38155) / C30558);
    const double C24318 = -((C22048 * C38073) / p + (C34137 * C38155) / C30558);
    const double C27614 = -((C24750 * C38080) / p + (C36050 * C38159) / C30558);
    const double C27701 =
        C38285 - (C24750 * C38083) / p - C38286 - (C36050 * C38161) / C30558;
    const double C27861 = -((C25492 * C38080) / p + (C36174 * C38159) / C30558);
    const double C28704 = -((C26396 * C38073) / p + (C36499 * C38155) / C30558);
    const double C29376 = -((C27109 * C38073) / p + (C36628 * C38155) / C30558);
    const double C32189 =
        C38356 / C38077 - ((C32204 * C38080) / p + (C32632 * C38159) / C30558);
    const double C32283 = (3 * C38356) / C38077 -
                          ((C32267 * C38083) / p + (C32719 * C38161) / C30558);
    const double C34711 = C38152 * C34691 - (C34696 * C38080) / p -
                          (C35142 * C38074) / C38154 -
                          (C35147 * C38159) / C30558 + C38397 / C38077;
    const double C34801 = (3 * C38397) / C38077 -
                          ((C34772 * C38083) / p + (C35218 * C38161) / C30558);
    const double C37199 =
        C38418 / C38077 - ((C37184 * C38080) / p + (C37634 * C38159) / C30558);
    const double C37288 = C38361 - (C37259 * C38083) / p - C38362 -
                          (C37705 * C38161) / C30558 + (3 * C38418) / C38077;
    const double C38335 = C30561 - C38200;
    const double C31255 = (3 * C38340) / C38077 -
                          ((C30744 * C38080) / p + (C32127 * C38159) / C30558);
    const double C31270 = C38152 * C30606 - (C30610 * C38073) / p -
                          (C32169 * C38074) / C38154 -
                          (C32173 * C38155) / C30558 + C38340 / C38077;
    const double C38342 = C30744 - C38205;
    const double C38434 = C38341 / C38077;
    const double C31394 = (3 * C38341) / C38077 -
                          ((C30891 * C38083) / p + (C32267 * C38161) / C30558);
    const double C38347 = C30891 - C38208;
    const double C38391 = C33105 - C38235;
    const double C33783 = C38336 - (C33283 * C38080) / p - C38337 -
                          (C34636 * C38159) / C30558 + (3 * C38392) / C38077;
    const double C33799 =
        C38392 / C38077 - ((C33151 * C38073) / p + (C34680 * C38155) / C30558);
    const double C38394 = C33283 - C38238;
    const double C38460 = C38393 / C38077;
    const double C33919 = (3 * C38393) / C38077 -
                          ((C33427 * C38083) / p + (C34772 * C38161) / C30558);
    const double C38395 = C33427 - C38239;
    const double C38412 = C35601 - C38255;
    const double C36274 = (3 * C38413) / C38077 -
                          ((C35778 * C38080) / p + (C37125 * C38159) / C30558);
    const double C36291 =
        C38413 / C38077 - ((C35647 * C38073) / p + (C37169 * C38155) / C30558);
    const double C38415 = C35778 - C38258;
    const double C38476 = C38414 / C38077;
    const double C36411 = C38343 - (C35922 * C38083) / p - C38344 -
                          (C37259 * C38161) / C30558 + (3 * C38414) / C38077;
    const double C38416 = C35922 - C38259;
    const double C38287 = C14510 - C38170;
    const double C38172 = C38086 / C30558;
    const double C14780 = C38152 * C17726 - (C15444 * C38073) / p -
                          (C30606 * C38074) / C38154 -
                          (C30610 * C38155) / C30558 + C38269 / C38077;
    const double C15630 = (3 * C38269) / C38077 -
                          ((C15648 * C38080) / p + (C30744 * C38159) / C30558);
    const double C38295 = C15648 - C38178;
    const double C38422 = C38270 / C38077;
    const double C16558 = (3 * C38270) / C38077 -
                          ((C16576 * C38083) / p + (C30891 * C38161) / C30558);
    const double C38299 = C16576 - C38181;
    const double C38378 = C19706 - C38225;
    const double C38226 = C38118 / C30558;
    const double C19968 =
        C38376 / C38077 - ((C20611 * C38073) / p + (C33151 * C38155) / C30558);
    const double C20791 = C38273 - (C20808 * C38080) / p - C38274 -
                          (C33283 * C38159) / C30558 + (3 * C38376) / C38077;
    const double C38384 = C20808 - C38229;
    const double C38452 = C38377 / C38077;
    const double C21689 = (3 * C38377) / C38077 -
                          ((C21706 * C38083) / p + (C33427 * C38161) / C30558);
    const double C38386 = C21706 - C38231;
    const double C38405 = C24767 - C38248;
    const double C38249 = C38137 / C30558;
    const double C25029 =
        C38403 / C38077 - ((C25672 * C38073) / p + (C35647 * C38155) / C30558);
    const double C25852 = (3 * C38403) / C38077 -
                          ((C25869 * C38080) / p + (C35778 * C38159) / C30558);
    const double C38407 = C25869 - C38250;
    const double C38468 = C38404 / C38077;
    const double C26750 = C38279 - (C26767 * C38083) / p - C38280 -
                          (C35922 * C38161) / C30558 + (3 * C38404) / C38077;
    const double C38409 = C26767 - C38252;
    const double C17685 = -((C17540 * C38080) / p + (C31137 * C38159) / C30558);
    const double C22785 =
        C38380 - (C22640 * C38080) / p - C38381 - (C33666 * C38159) / C30558;
    const double C27846 = -((C27701 * C38080) / p + (C36159 * C38159) / C30558);
    const double C38436 = C38335 / C38077;
    const double C31041 = C38333 - (C31025 * C38073) / p - C38334 -
                          (C32055 * C38155) / C30558 + (2 * C38335) / p;
    const double C38095 = C31255 * C30556;
    const double C31254 =
        C38338 - (C31255 * C38073) / p - C38339 - (C32143 * C38155) / C30558;
    const double C31543 = -((C31255 * C38083) / p + (C32143 * C38161) / C30558);
    const double C38435 = C38342 / C38077;
    const double C31514 =
        (2 * C38342) / p - ((C31255 * C38080) / p + (C32143 * C38159) / C30558);
    const double C31287 =
        C38434 - ((C30773 * C38080) / p + (C32204 * C38159) / C30558);
    const double C31302 = C38152 * C30637 - (C30641 * C38073) / p -
                          (C32216 * C38074) / C38154 -
                          (C32220 * C38155) / C30558 + C38434;
    const double C38097 = C31394 * C30556;
    const double C31393 =
        C38345 - (C31394 * C38073) / p - C38346 - (C32283 * C38155) / C30558;
    const double C31631 = -((C31394 * C38080) / p + (C32283 * C38159) / C30558);
    const double C38437 = C38347 / C38077;
    const double C31750 =
        (2 * C38347) / p - ((C31394 * C38083) / p + (C32283 * C38161) / C30558);
    const double C38462 = C38391 / C38077;
    const double C33570 =
        (2 * C38391) / p - ((C33555 * C38073) / p + (C34565 * C38155) / C30558);
    const double C38120 = C33783 * C30556;
    const double C33784 = -((C33783 * C38073) / p + (C34665 * C38155) / C30558);
    const double C34066 = -((C33783 * C38083) / p + (C34665 * C38161) / C30558);
    const double C38461 = C38394 / C38077;
    const double C34037 = C38338 - (C33783 * C38080) / p - C38339 -
                          (C34665 * C38159) / C30558 + (2 * C38394) / p;
    const double C33814 = C38152 * C30917 - (C33312 * C38080) / p -
                          (C34691 * C38074) / C38154 -
                          (C34696 * C38159) / C30558 + C38460;
    const double C33831 =
        C38460 - ((C33181 * C38073) / p + (C34726 * C38155) / C30558);
    const double C38122 = C33919 * C30556;
    const double C33920 = -((C33919 * C38073) / p + (C34801 * C38155) / C30558);
    const double C34152 =
        C38345 - (C33919 * C38080) / p - C38346 - (C34801 * C38159) / C30558;
    const double C38463 = C38395 / C38077;
    const double C34267 =
        (2 * C38395) / p - ((C33919 * C38083) / p + (C34801 * C38161) / C30558);
    const double C38478 = C38412 / C38077;
    const double C36065 =
        (2 * C38412) / p - ((C36050 * C38073) / p + (C37054 * C38155) / C30558);
    const double C38139 = C36274 * C30556;
    const double C36275 = -((C36274 * C38073) / p + (C37154 * C38155) / C30558);
    const double C36557 =
        C38338 - (C36274 * C38083) / p - C38339 - (C37154 * C38161) / C30558;
    const double C38477 = C38415 / C38077;
    const double C36528 =
        (2 * C38415) / p - ((C36274 * C38080) / p + (C37154 * C38159) / C30558);
    const double C36306 =
        C38476 - ((C35807 * C38080) / p + (C37184 * C38159) / C30558);
    const double C36322 =
        C38476 - ((C35677 * C38073) / p + (C37214 * C38155) / C30558);
    const double C38141 = C36411 * C30556;
    const double C36412 = -((C36411 * C38073) / p + (C37288 * C38155) / C30558);
    const double C36643 = -((C36411 * C38080) / p + (C37288 * C38159) / C30558);
    const double C38479 = C38416 / C38077;
    const double C36758 = C38345 - (C36411 * C38083) / p - C38346 -
                          (C37288 * C38161) / C30558 + (2 * C38416) / p;
    const double C38426 = C38287 / C38077;
    const double C17391 = C38285 - (C14491 * C38073) / p - C38286 -
                          (C31025 * C38155) / C30558 + (2 * C38287) / p;
    const double C38290 = C14491 - C38172;
    const double C17850 = -((C14780 * C38083) / p + (C31270 * C38161) / C30558);
    const double C18462 =
        C38303 - (C15630 * C38073) / p - C38304 - (C31255 * C38155) / C30558;
    const double C18694 = -((C15630 * C38083) / p + (C31255 * C38161) / C30558);
    const double C38427 = C38295 / C38077;
    const double C18664 =
        (2 * C38295) / p - ((C15630 * C38080) / p + (C31255 * C38159) / C30558);
    const double C14974 = C38152 * C17993 - (C16284 * C38073) / p -
                          (C30637 * C38074) / C38154 -
                          (C30641 * C38155) / C30558 + C38422;
    const double C15818 =
        C38422 - ((C16467 * C38080) / p + (C30773 * C38159) / C30558);
    const double C19190 =
        C38313 - (C16558 * C38073) / p - C38314 - (C31394 * C38155) / C30558;
    const double C19291 = -((C16558 * C38080) / p + (C31394 * C38159) / C30558);
    const double C38429 = C38299 / C38077;
    const double C19422 =
        (2 * C38299) / p - ((C16558 * C38083) / p + (C31394 * C38161) / C30558);
    const double C38454 = C38378 / C38077;
    const double C22494 =
        (2 * C38378) / p - ((C19689 * C38073) / p + (C33555 * C38155) / C30558);
    const double C38379 = C19689 - C38226;
    const double C22944 = -((C19968 * C38083) / p + (C33799 * C38161) / C30558);
    const double C23544 = -((C20791 * C38073) / p + (C33783 * C38155) / C30558);
    const double C23773 = -((C20791 * C38083) / p + (C33783 * C38161) / C30558);
    const double C38455 = C38384 / C38077;
    const double C23742 = C38303 - (C20791 * C38080) / p - C38304 -
                          (C33783 * C38159) / C30558 + (2 * C38384) / p;
    const double C20156 =
        C38452 - ((C21424 * C38073) / p + (C33181 * C38155) / C30558);
    const double C20973 = C38277 - (C21601 * C38080) / p - C38278 -
                          (C33312 * C38159) / C30558 + C38452;
    const double C24262 = -((C21689 * C38073) / p + (C33919 * C38155) / C30558);
    const double C24361 =
        C38313 - (C21689 * C38080) / p - C38314 - (C33919 * C38159) / C30558;
    const double C38457 = C38386 / C38077;
    const double C24489 =
        (2 * C38386) / p - ((C21689 * C38083) / p + (C33919 * C38161) / C30558);
    const double C38470 = C38405 / C38077;
    const double C27555 =
        (2 * C38405) / p - ((C24750 * C38073) / p + (C36050 * C38155) / C30558);
    const double C38406 = C24750 - C38249;
    const double C28005 = C38152 * C17741 - (C25029 * C38083) / p -
                          (C36285 * C38074) / C38154 -
                          (C36291 * C38161) / C30558;
    const double C28605 = -((C25852 * C38073) / p + (C36274 * C38155) / C30558);
    const double C28833 =
        C38303 - (C25852 * C38083) / p - C38304 - (C36274 * C38161) / C30558;
    const double C38471 = C38407 / C38077;
    const double C28803 =
        (2 * C38407) / p - ((C25852 * C38080) / p + (C36274 * C38159) / C30558);
    const double C25217 =
        C38468 - ((C26485 * C38073) / p + (C35677 * C38155) / C30558);
    const double C26034 =
        C38468 - ((C26662 * C38080) / p + (C35807 * C38159) / C30558);
    const double C29320 = -((C26750 * C38073) / p + (C36411 * C38155) / C30558);
    const double C29419 = -((C26750 * C38080) / p + (C36411 * C38159) / C30558);
    const double C38473 = C38409 / C38077;
    const double C29546 = C38313 - (C26750 * C38083) / p - C38314 -
                          (C36411 * C38161) / C30558 + (2 * C38409) / p;
    const double C31333 =
        C38436 - ((C31108 * C38080) / p + (C32251 * C38159) / C30558);
    const double C31409 =
        C38436 - ((C31152 * C38083) / p + (C32312 * C38161) / C30558);
    const double C38179 = C38095 / C30558;
    const double C31318 = C38152 * C31234 - (C31238 * C38073) / p -
                          (C32232 * C38074) / C38154 -
                          (C32236 * C38155) / C30558 + C38435;
    const double C31647 =
        C38435 - ((C31485 * C38083) / p + (C32413 * C38161) / C30558);
    const double C31286 = C38152 * C31466 - (C31287 * C38073) / p -
                          (C32185 * C38074) / C38154 -
                          (C32189 * C38155) / C30558;
    const double C38182 = C38097 / C30558;
    const double C31425 = C38152 * C31373 - (C31377 * C38073) / p -
                          (C32324 * C38074) / C38154 -
                          (C32328 * C38155) / C30558 + C38437;
    const double C31663 =
        C38437 - ((C31616 * C38080) / p + (C32428 * C38159) / C30558);
    const double C33861 = C38152 * C33632 - (C33637 * C38080) / p -
                          (C34752 * C38074) / C38154 -
                          (C34757 * C38159) / C30558 + C38462;
    const double C33936 =
        C38462 - ((C33681 * C38083) / p + (C34816 * C38161) / C30558);
    const double C38230 = C38120 / C30558;
    const double C33846 =
        C38461 - ((C33768 * C38073) / p + (C34741 * C38155) / C30558);
    const double C34167 =
        C38461 - ((C34008 * C38083) / p + (C34916 * C38161) / C30558);
    const double C33815 = -((C33814 * C38073) / p + (C34711 * C38155) / C30558);
    const double C38232 = C38122 / C30558;
    const double C33951 =
        C38463 - ((C33904 * C38073) / p + (C34831 * C38155) / C30558);
    const double C34182 = C38152 * C31704 - (C34137 * C38080) / p -
                          (C34927 * C38074) / C38154 -
                          (C34932 * C38159) / C30558 + C38463;
    const double C36353 =
        C38478 - ((C36130 * C38080) / p + (C37244 * C38159) / C30558);
    const double C36427 = C38152 * C33735 - (C36174 * C38083) / p -
                          (C37298 * C38074) / C38154 -
                          (C37304 * C38161) / C30558 + C38478;
    const double C38251 = C38139 / C30558;
    const double C36337 =
        C38477 - ((C36259 * C38073) / p + (C37229 * C38155) / C30558);
    const double C36658 = C38152 * C31481 - (C36499 * C38083) / p -
                          (C37399 * C38074) / C38154 -
                          (C37405 * C38161) / C30558 + C38477;
    const double C36307 = -((C36306 * C38073) / p + (C37199 * C38155) / C30558);
    const double C38253 = C38141 / C30558;
    const double C36442 =
        C38479 - ((C36396 * C38073) / p + (C37319 * C38155) / C30558);
    const double C36673 =
        C38479 - ((C36628 * C38080) / p + (C37420 * C38159) / C30558);
    const double C17497 =
        C38426 - ((C15168 * C38080) / p + (C31108 * C38159) / C30558);
    const double C17584 =
        C38426 - ((C15258 * C38083) / p + (C31152 * C38161) / C30558);
    const double C17627 = -((C17391 * C38080) / p + (C31041 * C38159) / C30558);
    const double C17656 = -((C17391 * C38083) / p + (C31041 * C38161) / C30558);
    const double C38425 = C38290 / C38077;
    const double C17407 = C38288 - (C17391 * C38073) / p - C38289 -
                          (C31041 * C38155) / C30558 + (5 * C38290) / C38077;
    const double C18754 =
        C38309 - (C18694 * C38073) / p - C38310 - (C31543 * C38155) / C30558;
    const double C17820 = C38152 * C18646 - (C16012 * C38073) / p -
                          (C31234 * C38074) / C38154 -
                          (C31238 * C38155) / C30558 + C38427;
    const double C18724 =
        C38427 - ((C16192 * C38083) / p + (C31485 * C38161) / C30558);
    const double C18739 =
        C38307 - (C18664 * C38073) / p - C38308 - (C31514 * C38155) / C30558;
    const double C18769 = -((C18664 * C38083) / p + (C31514 * C38161) / C30558);
    const double C17880 = -((C14974 * C38080) / p + (C31302 * C38159) / C30558);
    const double C18518 = C38152 * C18781 - (C15818 * C38073) / p -
                          (C31466 * C38074) / C38154 -
                          (C31287 * C38155) / C30558;
    const double C19452 =
        C38317 - (C19291 * C38073) / p - C38318 - (C31631 * C38155) / C30558;
    const double C18143 = C38152 * C19348 - (C16838 * C38073) / p -
                          (C31373 * C38074) / C38154 -
                          (C31377 * C38155) / C30558 + C38429;
    const double C18928 =
        C38429 - ((C16929 * C38080) / p + (C31616 * C38159) / C30558);
    const double C19481 =
        C38319 - (C19422 * C38073) / p - C38320 - (C31750 * C38155) / C30558;
    const double C19496 = -((C19422 * C38080) / p + (C31750 * C38159) / C30558);
    const double C22597 = C38152 * C17802 - (C20344 * C38080) / p -
                          (C33632 * C38074) / C38154 -
                          (C33637 * C38159) / C30558 + C38454;
    const double C22684 =
        C38454 - ((C20431 * C38083) / p + (C33681 * C38161) / C30558);
    const double C22727 =
        C38288 - (C22494 * C38080) / p - C38289 - (C33570 * C38159) / C30558;
    const double C22756 = -((C22494 * C38083) / p + (C33570 * C38161) / C30558);
    const double C38453 = C38379 / C38077;
    const double C22509 = (5 * C38379) / C38077 -
                          ((C22494 * C38073) / p + (C33570 * C38155) / C30558);
    const double C23833 = -((C23773 * C38073) / p + (C34066 * C38155) / C30558);
    const double C22914 =
        C38455 - ((C21161 * C38073) / p + (C33768 * C38155) / C30558);
    const double C23803 =
        C38455 - ((C21335 * C38083) / p + (C34008 * C38161) / C30558);
    const double C23818 = -((C23742 * C38073) / p + (C34037 * C38155) / C30558);
    const double C23848 = -((C23742 * C38083) / p + (C34037 * C38161) / C30558);
    const double C22974 = C38152 * C18008 - (C20156 * C38080) / p -
                          (C33826 * C38074) / C38154 -
                          (C33831 * C38159) / C30558;
    const double C23600 = -((C20973 * C38073) / p + (C33814 * C38155) / C30558);
    const double C24519 = -((C24361 * C38073) / p + (C34152 * C38155) / C30558);
    const double C23231 =
        C38457 - ((C21960 * C38073) / p + (C33904 * C38155) / C30558);
    const double C24004 = C38315 - (C22048 * C38080) / p - C38316 -
                          (C34137 * C38159) / C30558 + C38457;
    const double C24548 = -((C24489 * C38073) / p + (C34267 * C38155) / C30558);
    const double C24563 =
        C38319 - (C24489 * C38080) / p - C38320 - (C34267 * C38159) / C30558;
    const double C27658 =
        C38470 - ((C25405 * C38080) / p + (C36130 * C38159) / C30558);
    const double C27745 = C38382 - (C25492 * C38083) / p - C38383 -
                          (C36174 * C38161) / C30558 + C38470;
    const double C27788 = -((C27555 * C38080) / p + (C36065 * C38159) / C30558);
    const double C27817 =
        C38288 - (C27555 * C38083) / p - C38289 - (C36065 * C38161) / C30558;
    const double C38469 = C38406 / C38077;
    const double C27570 = (5 * C38406) / C38077 -
                          ((C27555 * C38073) / p + (C36065 * C38155) / C30558);
    const double C28893 = -((C28833 * C38073) / p + (C36557 * C38155) / C30558);
    const double C27975 =
        C38471 - ((C26222 * C38073) / p + (C36259 * C38155) / C30558);
    const double C28863 = C38305 - (C26396 * C38083) / p - C38306 -
                          (C36499 * C38161) / C30558 + C38471;
    const double C28878 = -((C28803 * C38073) / p + (C36528 * C38155) / C30558);
    const double C28908 =
        C38307 - (C28803 * C38083) / p - C38308 - (C36528 * C38161) / C30558;
    const double C28035 = -((C25217 * C38080) / p + (C36322 * C38159) / C30558);
    const double C28661 = -((C26034 * C38073) / p + (C36306 * C38155) / C30558);
    const double C29577 = -((C29419 * C38073) / p + (C36643 * C38155) / C30558);
    const double C28292 =
        C38473 - ((C27021 * C38073) / p + (C36396 * C38155) / C30558);
    const double C29063 =
        C38473 - ((C27109 * C38080) / p + (C36628 * C38159) / C30558);
    const double C29606 = -((C29546 * C38073) / p + (C36758 * C38155) / C30558);
    const double C29621 = -((C29546 * C38080) / p + (C36758 * C38159) / C30558);
    const double C38296 = C15630 - C38179;
    const double C38300 = C16558 - C38182;
    const double C38385 = C20791 - C38230;
    const double C38387 = C21689 - C38232;
    const double C38408 = C25852 - C38251;
    const double C38410 = C26750 - C38253;
    const double C17952 = -((C17497 * C38083) / p + (C31333 * C38161) / C30558);
    const double C18187 = -((C17584 * C38080) / p + (C31409 * C38159) / C30558);
    const double C17468 =
        C38425 - ((C17453 * C38080) / p + (C31093 * C38159) / C30558);
    const double C17555 =
        C38425 - ((C17540 * C38083) / p + (C31137 * C38161) / C30558);
    const double C17909 = C38297 - (C17820 * C38073) / p - C38298 -
                          (C31318 * C38155) / C30558 +
                          (C16012 - (C31238 * C30556) / C30558) / p;
    const double C17981 = -((C17820 * C38083) / p + (C31318 * C38161) / C30558);
    const double C18958 = C38152 * C23943 - (C18724 * C38073) / p -
                          (C31643 * C38074) / C38154 -
                          (C31647 * C38155) / C30558;
    const double C17865 = C38152 * C18796 - (C18518 * C38073) / p -
                          (C31282 * C38074) / C38154 -
                          (C31286 * C38155) / C30558 +
                          (C15818 - (C31287 * C30556) / C30558) / C38077;
    const double C18244 = C38301 - (C18143 * C38073) / p - C38302 -
                          (C31425 * C38155) / C30558 +
                          (C16838 - (C31377 * C30556) / C30558) / p;
    const double C18273 = -((C18143 * C38080) / p + (C31425 * C38159) / C30558);
    const double C18987 =
        C38311 - (C18928 * C38073) / p - C38312 - (C31663 * C38155) / C30558;
    const double C19016 = (C16929 - (C31616 * C30556) / C30558) / p -
                          ((C18928 * C38080) / p + (C31663 * C38159) / C30558);
    const double C23046 = -((C22597 * C38083) / p + (C33861 * C38161) / C30558);
    const double C23275 = C38152 * C18023 - (C22684 * C38080) / p -
                          (C33931 * C38074) / C38154 -
                          (C33936 * C38159) / C30558;
    const double C22568 = C38152 * C18285 - (C22553 * C38080) / p -
                          (C33616 * C38074) / C38154 -
                          (C33621 * C38159) / C30558 + C38453;
    const double C22655 =
        C38453 - ((C22640 * C38083) / p + (C33666 * C38161) / C30558);
    const double C23003 = (C21161 - (C33768 * C30556) / C30558) / p -
                          ((C22914 * C38073) / p + (C33846 * C38155) / C30558);
    const double C23075 = -((C22914 * C38083) / p + (C33846 * C38161) / C30558);
    const double C24034 = -((C23803 * C38073) / p + (C34167 * C38155) / C30558);
    const double C22959 = (C20973 - (C33814 * C30556) / C30558) / C38077 -
                          ((C23600 * C38073) / p + (C33815 * C38155) / C30558);
    const double C23332 = (C21960 - (C33904 * C30556) / C30558) / p -
                          ((C23231 * C38073) / p + (C33951 * C38155) / C30558);
    const double C23361 =
        C38301 - (C23231 * C38080) / p - C38302 - (C33951 * C38159) / C30558;
    const double C24063 = -((C24004 * C38073) / p + (C34182 * C38155) / C30558);
    const double C24092 = C38311 - (C24004 * C38080) / p - C38312 -
                          (C34182 * C38159) / C30558 +
                          (C22048 - (C34137 * C30556) / C30558) / p;
    const double C28107 = C38152 * C17756 - (C27658 * C38083) / p -
                          (C36347 * C38074) / C38154 -
                          (C36353 * C38161) / C30558;
    const double C28336 = -((C27745 * C38080) / p + (C36427 * C38159) / C30558);
    const double C27629 =
        C38469 - ((C27614 * C38080) / p + (C36115 * C38159) / C30558);
    const double C27716 = C38380 - (C27701 * C38083) / p - C38381 -
                          (C36159 * C38161) / C30558 + C38469;
    const double C28064 = (C26222 - (C36259 * C30556) / C30558) / p -
                          ((C27975 * C38073) / p + (C36337 * C38155) / C30558);
    const double C28136 =
        C38297 - (C27975 * C38083) / p - C38298 - (C36337 * C38161) / C30558;
    const double C29093 = -((C28863 * C38073) / p + (C36658 * C38155) / C30558);
    const double C28020 = (C26034 - (C36306 * C30556) / C30558) / C38077 -
                          ((C28661 * C38073) / p + (C36307 * C38155) / C30558);
    const double C28393 = (C27021 - (C36396 * C30556) / C30558) / p -
                          ((C28292 * C38073) / p + (C36442 * C38155) / C30558);
    const double C28422 = -((C28292 * C38080) / p + (C36442 * C38159) / C30558);
    const double C29122 = -((C29063 * C38073) / p + (C36673 * C38155) / C30558);
    const double C29151 = (C27109 - (C36628 * C30556) / C30558) / p -
                          ((C29063 * C38080) / p + (C36673 * C38159) / C30558);
    const double C38428 = C38296 / C38077;
    const double C18679 = (5 * C38296) / C38077 -
                          ((C18664 * C38080) / p + (C31514 * C38159) / C30558);
    const double C38430 = C38300 / C38077;
    const double C19437 = (5 * C38300) / C38077 -
                          ((C19422 * C38083) / p + (C31750 * C38161) / C30558);
    const double C38456 = C38385 / C38077;
    const double C23758 = C38307 - (C23742 * C38080) / p - C38308 -
                          (C34037 * C38159) / C30558 + (5 * C38385) / C38077;
    const double C38458 = C38387 / C38077;
    const double C24504 = (5 * C38387) / C38077 -
                          ((C24489 * C38083) / p + (C34267 * C38161) / C30558);
    const double C38472 = C38408 / C38077;
    const double C28818 = (5 * C38408) / C38077 -
                          ((C28803 * C38080) / p + (C36528 * C38159) / C30558);
    const double C38474 = C38410 / C38077;
    const double C29562 = C38319 - (C29546 * C38083) / p - C38320 -
                          (C36758 * C38161) / C30558 + (5 * C38410) / C38077;
    const double C17835 = C38152 * C18616 - (C18462 * C38073) / p -
                          (C31250 * C38074) / C38154 -
                          (C31254 * C38155) / C30558 + C38428;
    const double C18709 =
        C38428 - ((C18694 * C38083) / p + (C31543 * C38161) / C30558);
    const double C18158 = C38152 * C19318 - (C19190 * C38073) / p -
                          (C31389 * C38074) / C38154 -
                          (C31393 * C38155) / C30558 + C38430;
    const double C18943 =
        C38430 - ((C19291 * C38080) / p + (C31631 * C38159) / C30558);
    const double C22929 =
        C38456 - ((C23544 * C38073) / p + (C33784 * C38155) / C30558);
    const double C23788 =
        C38456 - ((C23773 * C38083) / p + (C34066 * C38161) / C30558);
    const double C23246 =
        C38458 - ((C24262 * C38073) / p + (C33920 * C38155) / C30558);
    const double C24019 = C38317 - (C24361 * C38080) / p - C38318 -
                          (C34152 * C38159) / C30558 + C38458;
    const double C27990 =
        C38472 - ((C28605 * C38073) / p + (C36275 * C38155) / C30558);
    const double C28848 = C38309 - (C28833 * C38083) / p - C38310 -
                          (C36557 * C38161) / C30558 + C38472;
    const double C28307 =
        C38474 - ((C29320 * C38073) / p + (C36412 * C38155) / C30558);
    const double C29078 =
        C38474 - ((C29419 * C38080) / p + (C36643 * C38159) / C30558);
    vrx[0] = C14491;
    vrx[1] = C14510;
    vrx[2] = C14527;
    vrx[3] = C14780;
    vrx[4] = C14799;
    vrx[5] = C14974;
    vrx[6] = C14993;
    vrx[7] = C15168;
    vrx[8] = C15258;
    vrx[9] = C15351;
    vrx[10] = C15444;
    vrx[11] = C15460;
    vrx[12] = C15630;
    vrx[13] = C15648;
    vrx[14] = C15818;
    vrx[15] = C15836;
    vrx[16] = C16012;
    vrx[17] = C16102;
    vrx[18] = C16192;
    vrx[19] = C16284;
    vrx[20] = C16300;
    vrx[21] = C16467;
    vrx[22] = C16558;
    vrx[23] = C16576;
    vrx[24] = C16748;
    vrx[25] = C16838;
    vrx[26] = C16929;
    vrx[27] = C17021;
    vrx[28] = C17110;
    vrx[29] = C17199;
    vrx[30] = C17288;
    vrx[31] = C17391;
    vrx[32] = C17407;
    vrx[33] = C17423;
    vrx[34] = C17438;
    vrx[35] = C17453;
    vrx[36] = C17468;
    vrx[37] = C17497;
    vrx[38] = C17540;
    vrx[39] = C17555;
    vrx[40] = C17584;
    vrx[41] = C17627;
    vrx[42] = C17656;
    vrx[43] = C17685;
    vrx[44] = C17700;
    vrx[45] = C17775;
    vrx[46] = C17820;
    vrx[47] = C17835;
    vrx[48] = C17850;
    vrx[49] = C17865;
    vrx[50] = C17880;
    vrx[51] = C17909;
    vrx[52] = C17952;
    vrx[53] = C17981;
    vrx[54] = C18042;
    vrx[55] = C18143;
    vrx[56] = C18158;
    vrx[57] = C18187;
    vrx[58] = C18244;
    vrx[59] = C18273;
    vrx[60] = C18462;
    vrx[61] = C18518;
    vrx[62] = C18561;
    vrx[63] = C18664;
    vrx[64] = C18679;
    vrx[65] = C18694;
    vrx[66] = C18709;
    vrx[67] = C18724;
    vrx[68] = C18739;
    vrx[69] = C18754;
    vrx[70] = C18769;
    vrx[71] = C18928;
    vrx[72] = C18943;
    vrx[73] = C18958;
    vrx[74] = C18987;
    vrx[75] = C19016;
    vrx[76] = C19190;
    vrx[77] = C19246;
    vrx[78] = C19291;
    vrx[79] = C19422;
    vrx[80] = C19437;
    vrx[81] = C19452;
    vrx[82] = C19481;
    vrx[83] = C19496;
    vry[0] = C19689;
    vry[1] = C19706;
    vry[2] = C19722;
    vry[3] = C19968;
    vry[4] = C19986;
    vry[5] = C20156;
    vry[6] = C20174;
    vry[7] = C20344;
    vry[8] = C20431;
    vry[9] = C20521;
    vry[10] = C20611;
    vry[11] = C20626;
    vry[12] = C20791;
    vry[13] = C20808;
    vry[14] = C20973;
    vry[15] = C20990;
    vry[16] = C21161;
    vry[17] = C21248;
    vry[18] = C21335;
    vry[19] = C21424;
    vry[20] = C21439;
    vry[21] = C21601;
    vry[22] = C21689;
    vry[23] = C21706;
    vry[24] = C21873;
    vry[25] = C21960;
    vry[26] = C22048;
    vry[27] = C22137;
    vry[28] = C22223;
    vry[29] = C22309;
    vry[30] = C22395;
    vry[31] = C22494;
    vry[32] = C22509;
    vry[33] = C22524;
    vry[34] = C22538;
    vry[35] = C22553;
    vry[36] = C22568;
    vry[37] = C22597;
    vry[38] = C22640;
    vry[39] = C22655;
    vry[40] = C22684;
    vry[41] = C22727;
    vry[42] = C22756;
    vry[43] = C22785;
    vry[44] = C22800;
    vry[45] = C22871;
    vry[46] = C22914;
    vry[47] = C22929;
    vry[48] = C22944;
    vry[49] = C22959;
    vry[50] = C22974;
    vry[51] = C23003;
    vry[52] = C23046;
    vry[53] = C23075;
    vry[54] = C23132;
    vry[55] = C23231;
    vry[56] = C23246;
    vry[57] = C23275;
    vry[58] = C23332;
    vry[59] = C23361;
    vry[60] = C23544;
    vry[61] = C23600;
    vry[62] = C23643;
    vry[63] = C23742;
    vry[64] = C23758;
    vry[65] = C23773;
    vry[66] = C23788;
    vry[67] = C23803;
    vry[68] = C23818;
    vry[69] = C23833;
    vry[70] = C23848;
    vry[71] = C24004;
    vry[72] = C24019;
    vry[73] = C24034;
    vry[74] = C24063;
    vry[75] = C24092;
    vry[76] = C24262;
    vry[77] = C24318;
    vry[78] = C24361;
    vry[79] = C24489;
    vry[80] = C24504;
    vry[81] = C24519;
    vry[82] = C24548;
    vry[83] = C24563;
    vrz[0] = C24750;
    vrz[1] = C24767;
    vrz[2] = C24783;
    vrz[3] = C25029;
    vrz[4] = C25047;
    vrz[5] = C25217;
    vrz[6] = C25235;
    vrz[7] = C25405;
    vrz[8] = C25492;
    vrz[9] = C25582;
    vrz[10] = C25672;
    vrz[11] = C25687;
    vrz[12] = C25852;
    vrz[13] = C25869;
    vrz[14] = C26034;
    vrz[15] = C26051;
    vrz[16] = C26222;
    vrz[17] = C26309;
    vrz[18] = C26396;
    vrz[19] = C26485;
    vrz[20] = C26500;
    vrz[21] = C26662;
    vrz[22] = C26750;
    vrz[23] = C26767;
    vrz[24] = C26934;
    vrz[25] = C27021;
    vrz[26] = C27109;
    vrz[27] = C27198;
    vrz[28] = C27284;
    vrz[29] = C27370;
    vrz[30] = C27456;
    vrz[31] = C27555;
    vrz[32] = C27570;
    vrz[33] = C27585;
    vrz[34] = C27599;
    vrz[35] = C27614;
    vrz[36] = C27629;
    vrz[37] = C27658;
    vrz[38] = C27701;
    vrz[39] = C27716;
    vrz[40] = C27745;
    vrz[41] = C27788;
    vrz[42] = C27817;
    vrz[43] = C27846;
    vrz[44] = C27861;
    vrz[45] = C27932;
    vrz[46] = C27975;
    vrz[47] = C27990;
    vrz[48] = C28005;
    vrz[49] = C28020;
    vrz[50] = C28035;
    vrz[51] = C28064;
    vrz[52] = C28107;
    vrz[53] = C28136;
    vrz[54] = C28193;
    vrz[55] = C28292;
    vrz[56] = C28307;
    vrz[57] = C28336;
    vrz[58] = C28393;
    vrz[59] = C28422;
    vrz[60] = C28605;
    vrz[61] = C28661;
    vrz[62] = C28704;
    vrz[63] = C28803;
    vrz[64] = C28818;
    vrz[65] = C28833;
    vrz[66] = C28848;
    vrz[67] = C28863;
    vrz[68] = C28878;
    vrz[69] = C28893;
    vrz[70] = C28908;
    vrz[71] = C29063;
    vrz[72] = C29078;
    vrz[73] = C29093;
    vrz[74] = C29122;
    vrz[75] = C29151;
    vrz[76] = C29320;
    vrz[77] = C29376;
    vrz[78] = C29419;
    vrz[79] = C29546;
    vrz[80] = C29562;
    vrz[81] = C29577;
    vrz[82] = C29606;
    vrz[83] = C29621;
}
