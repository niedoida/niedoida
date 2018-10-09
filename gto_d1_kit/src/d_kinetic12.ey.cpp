/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_30(double ae,
                         double be,
                         double cc,
                         double xAB,
                         double yAB,
                         double zAB,
                         double* const gx,
                         double* const gy,
                         double* const gz,
                         std::size_t matrix_size,
                         std::size_t Ai,
                         std::size_t Bi)
{
    const double C20409 = ae + be;
    const double C20412 = Pi / C20409;
    const double C20413 = std::sqrt(C20412);
    const double C20417 = std::pow(C20409, 2);
    const double C20416 = be * xAB;
    const double C20420 = be * yAB;
    const double C20423 = be * zAB;
    const double C20432 = std::pow(C20423, 2);
    const double C20431 = std::pow(C20420, 2);
    const double C20430 = 2. * C20417;
    const double C20429 = 2. * C20409;
    const double C20428 = be * xAB;
    const double C20427 = Pi / C20409;
    const double C20426 = ae + be;
    const double C20437 = C20413 * C20432;
    const double C20436 = C20413 * C20431;
    const double C20435 = C20413 / C20429;
    const double C20434 = std::sqrt(C20427);
    const double C20433 = Pi / C20426;
    const double C20440 = C20437 / C20417;
    const double C20439 = C20436 / C20417;
    const double C20438 = std::sqrt(C20433);
    const double C20442 = C20440 + C20435;
    const double C20441 = C20439 + C20435;
    const double C20095 = -(C20434 * C20428) / C20409;
    const double C20097 =
        (C20413 * std::pow(C20428, 2)) / std::pow(C20409, 2) + C20435;
    const double C20098 = -(C20413 * be * yAB) / C20409;
    const double C20099 =
        (-2. * C20413 * C20416) / C20430 -
        (((C20413 * std::pow(C20416, 2)) / C20417 + C20435) * C20416) / C20409;
    const double C20100 = -(C20413 * be * zAB) / C20409;
    const double C20223 =
        (-2. * C20413 * C20420) / C20430 - (C20441 * C20420) / C20409;
    const double C20308 =
        (-2. * C20413 * C20423) / C20430 - (C20442 * C20423) / C20409;
    const double C20111 = ae * C20100;
    const double C20110 = ae * C20098;
    const double C20109 = be * zAB;
    const double C20108 = be * yAB;
    const double C20107 = std::pow(ae, 2);
    const double C20106 = be * C20095;
    const double C20105 = be * C20097;
    const double C20104 = be * xAB;
    const double C20103 = be * C20434;
    const double C20102 = ae + be;
    const double C20101 = ae * C20095;
    const double C20125 = 2 * C20111;
    const double C20124 = 2 * C20110;
    const double C20123 = std::pow(C20104, 2);
    const double C20122 = C20104 / C20102;
    const double C20121 = std::pow(C20102, 2);
    const double C20120 = C20109 / C20102;
    const double C20119 = Pi / C20102;
    const double C20118 = C20108 / C20102;
    const double C20117 = 2 * C20106;
    const double C20116 = 2 * C20105;
    const double C20115 = C20101 * C20104;
    const double C20114 = 2 * C20103;
    const double C20113 = 2. * C20102;
    const double C20112 = 2 * C20101;
    const double C20135 = 2. * C20121;
    const double C20134 = std::pow(C20122, 2);
    const double C20133 = std::pow(C20120, 2);
    const double C20132 = std::sqrt(C20119);
    const double C20131 = 1 / C20113;
    const double C20130 = std::pow(C20118, 2);
    const double C20129 = C20112 - C20117;
    const double C20128 = 2 * C20115;
    const double C20127 = -C20114;
    const double C20126 = be * C20112;
    const double C20145 = C20132 / C20113;
    const double C20144 = C20132 * C20123;
    const double C20143 = C20134 + C20131;
    const double C20142 = C20132 * C20104;
    const double C20141 = C20133 + C20131;
    const double C20140 = C20130 + C20131;
    const double C20139 = C20129 / C20113;
    const double C20138 = C20128 / C20102;
    const double C20137 = C20127 / C20113;
    const double C20136 = 4 * C20126;
    const double C20153 = -2. * C20142;
    const double C20152 = C20144 / C20121;
    const double C20151 = C20107 * C20143;
    const double C20150 = ae * C20142;
    const double C20149 = C20107 * C20141;
    const double C20148 = C20107 * C20140;
    const double C20147 = C20137 - C20138;
    const double C20146 = -C20136;
    const double C20164 = C20153 / C20102;
    const double C20163 = C20153 / C20135;
    const double C20162 = C20152 + C20145;
    const double C20161 = 2 * C20151;
    const double C20160 = -2 * C20150;
    const double C20159 = 2 * C20149;
    const double C20158 = 2 * C20148;
    const double C20157 = C20147 * C20104;
    const double C20156 = 2 * C20147;
    const double C20155 = ae * C20147;
    const double C20154 = C20146 / C20113;
    const double C20174 = C20162 * C20104;
    const double C20173 = ae * C20162;
    const double C20172 = ae - C20161;
    const double C20171 = be * C20160;
    const double C20170 = ae - C20159;
    const double C20169 = ae - C20158;
    const double C20168 = C20157 / C20102;
    const double C20167 = C20156 - C20116;
    const double C20166 = 2 * C20155;
    const double C20165 = C20155 * C20104;
    const double C20184 = C20174 / C20102;
    const double C20183 = 2 * C20173;
    const double C20182 = C20172 * C20132;
    const double C20181 = C20171 / C20121;
    const double C20180 = C20170 * C20132;
    const double C20179 = C20169 * C20132;
    const double C20178 = C20139 - C20168;
    const double C20177 = C20167 / C20113;
    const double C20176 = be * C20166;
    const double C20175 = 2 * C20165;
    const double C20191 = C20163 - C20184;
    const double C20190 = C20183 - C20132;
    const double C20189 = C20182 / C20113;
    const double C20188 = C20182 * C20104;
    const double C20187 = C20178 * C20104;
    const double C20186 = 6 * C20176;
    const double C20185 = C20175 / C20102;
    const double C20197 = ae * C20191;
    const double C20196 = C20190 * be;
    const double C20195 = C20188 / C20102;
    const double C20194 = C20187 / C20102;
    const double C20193 = -C20186;
    const double C20192 = C20154 - C20185;
    const double C20203 = 2 * C20197;
    const double C20202 = C20196 / C20102;
    const double C20201 = C20181 - C20195;
    const double C20200 = C20177 - C20194;
    const double C20199 = C20193 / C20113;
    const double C20198 = ae * C20192;
    const double C20207 = C20203 - C20164;
    const double C20206 = C20201 * C20104;
    const double C20205 = C20201 / C20102;
    const double C20204 = C20198 * C20104;
    const double C20210 = C20207 * be;
    const double C20209 = C20206 / C20102;
    const double C20208 = 2 * C20204;
    const double C20213 = C20210 / C20102;
    const double C20212 = C20189 - C20209;
    const double C20211 = C20208 / C20102;
    const double C20215 = C20212 + C20202;
    const double C20214 = C20199 - C20211;
    const double C20216 = C20215 * C20104;
    const double C20217 = C20216 / C20102;
    const double C20218 = C20205 - C20217;
    const double C20219 = C20218 + C20213;
    const double C20233 = be * C20124;
    const double C20232 = be * C20098;
    const double C20231 = be * C20441;
    const double C20230 = C20110 * C20108;
    const double C20229 = be * C20438;
    const double C20228 = std::pow(C20108, 2);
    const double C20227 = C20179 / C20113;
    const double C20226 = C20179 * C20108;
    const double C20225 = C20132 * C20108;
    const double C20242 = 4 * C20233;
    const double C20241 = 2 * C20232;
    const double C20240 = 2 * C20231;
    const double C20239 = 2 * C20230;
    const double C20238 = 2 * C20229;
    const double C20237 = -2. * C20225;
    const double C20236 = C20132 * C20228;
    const double C20235 = C20226 / C20102;
    const double C20234 = ae * C20225;
    const double C20250 = -C20242;
    const double C20249 = C20124 - C20241;
    const double C20248 = C20239 / C20102;
    const double C20247 = -C20238;
    const double C20246 = C20237 / C20102;
    const double C20245 = C20237 / C20135;
    const double C20244 = C20236 / C20121;
    const double C20243 = -2 * C20234;
    const double C20255 = C20250 / C20113;
    const double C20254 = C20249 / C20113;
    const double C20253 = C20247 / C20113;
    const double C20252 = C20244 + C20145;
    const double C20251 = be * C20243;
    const double C20259 = C20253 - C20248;
    const double C20258 = C20252 * C20108;
    const double C20257 = ae * C20252;
    const double C20256 = C20251 / C20121;
    const double C20265 = ae * C20259;
    const double C20264 = C20259 * C20108;
    const double C20263 = 2 * C20259;
    const double C20262 = C20258 / C20102;
    const double C20261 = 2 * C20257;
    const double C20260 = C20256 - C20235;
    const double C20273 = 2 * C20265;
    const double C20272 = C20265 * C20108;
    const double C20271 = C20264 / C20102;
    const double C20270 = C20263 - C20240;
    const double C20269 = C20245 - C20262;
    const double C20268 = C20261 - C20132;
    const double C20267 = C20260 * C20108;
    const double C20266 = C20260 / C20102;
    const double C20280 = be * C20273;
    const double C20279 = 2 * C20272;
    const double C20278 = C20254 - C20271;
    const double C20277 = C20270 / C20113;
    const double C20276 = ae * C20269;
    const double C20275 = C20268 * be;
    const double C20274 = C20267 / C20102;
    const double C20286 = 6 * C20280;
    const double C20285 = C20279 / C20102;
    const double C20284 = C20278 * C20108;
    const double C20283 = 2 * C20276;
    const double C20282 = C20275 / C20102;
    const double C20281 = C20227 - C20274;
    const double C20291 = -C20286;
    const double C20290 = C20255 - C20285;
    const double C20289 = C20284 / C20102;
    const double C20288 = C20283 - C20246;
    const double C20287 = C20281 + C20282;
    const double C20296 = C20291 / C20113;
    const double C20295 = ae * C20290;
    const double C20294 = C20277 - C20289;
    const double C20293 = C20288 * be;
    const double C20292 = C20287 * C20108;
    const double C20299 = C20295 * C20108;
    const double C20298 = C20293 / C20102;
    const double C20297 = C20292 / C20102;
    const double C20301 = 2 * C20299;
    const double C20300 = C20266 - C20297;
    const double C20303 = C20301 / C20102;
    const double C20302 = C20300 + C20298;
    const double C20304 = C20296 - C20303;
    const double C20318 = be * C20125;
    const double C20317 = be * C20100;
    const double C20316 = be * C20442;
    const double C20315 = C20111 * C20109;
    const double C20314 = be * C20438;
    const double C20313 = std::pow(C20109, 2);
    const double C20312 = C20180 / C20113;
    const double C20311 = C20180 * C20109;
    const double C20310 = C20132 * C20109;
    const double C20327 = 4 * C20318;
    const double C20326 = 2 * C20317;
    const double C20325 = 2 * C20316;
    const double C20324 = 2 * C20315;
    const double C20323 = 2 * C20314;
    const double C20322 = -2. * C20310;
    const double C20321 = C20132 * C20313;
    const double C20320 = C20311 / C20102;
    const double C20319 = ae * C20310;
    const double C20335 = -C20327;
    const double C20334 = C20125 - C20326;
    const double C20333 = C20324 / C20102;
    const double C20332 = -C20323;
    const double C20331 = C20322 / C20102;
    const double C20330 = C20322 / C20135;
    const double C20329 = C20321 / C20121;
    const double C20328 = -2 * C20319;
    const double C20340 = C20335 / C20113;
    const double C20339 = C20334 / C20113;
    const double C20338 = C20332 / C20113;
    const double C20337 = C20329 + C20145;
    const double C20336 = be * C20328;
    const double C20344 = C20338 - C20333;
    const double C20343 = C20337 * C20109;
    const double C20342 = ae * C20337;
    const double C20341 = C20336 / C20121;
    const double C20350 = ae * C20344;
    const double C20349 = C20344 * C20109;
    const double C20348 = 2 * C20344;
    const double C20347 = C20343 / C20102;
    const double C20346 = 2 * C20342;
    const double C20345 = C20341 - C20320;
    const double C20358 = 2 * C20350;
    const double C20357 = C20350 * C20109;
    const double C20356 = C20349 / C20102;
    const double C20355 = C20348 - C20325;
    const double C20354 = C20330 - C20347;
    const double C20353 = C20346 - C20132;
    const double C20352 = C20345 * C20109;
    const double C20351 = C20345 / C20102;
    const double C20365 = be * C20358;
    const double C20364 = 2 * C20357;
    const double C20363 = C20339 - C20356;
    const double C20362 = C20355 / C20113;
    const double C20361 = ae * C20354;
    const double C20360 = C20353 * be;
    const double C20359 = C20352 / C20102;
    const double C20371 = 6 * C20365;
    const double C20370 = C20364 / C20102;
    const double C20369 = C20363 * C20109;
    const double C20368 = 2 * C20361;
    const double C20367 = C20360 / C20102;
    const double C20366 = C20312 - C20359;
    const double C20376 = -C20371;
    const double C20375 = C20340 - C20370;
    const double C20374 = C20369 / C20102;
    const double C20373 = C20368 - C20331;
    const double C20372 = C20366 + C20367;
    const double C20381 = C20376 / C20113;
    const double C20380 = ae * C20375;
    const double C20379 = C20362 - C20374;
    const double C20378 = C20373 * be;
    const double C20377 = C20372 * C20109;
    const double C20384 = C20380 * C20109;
    const double C20383 = C20378 / C20102;
    const double C20382 = C20377 / C20102;
    const double C20386 = 2 * C20384;
    const double C20385 = C20351 - C20382;
    const double C20388 = C20386 / C20102;
    const double C20387 = C20385 + C20383;
    const double C20389 = C20381 - C20388;
    const double C20462 = C20211 - C20199;
    const double C20461 = C20388 - C20381;
    const double C20460 = -2 * C20380;
    const double C20459 = C20303 - C20296;
    const double C20458 = C20389 * C20109;
    const double C20457 = be * C20375;
    const double C20456 = 2 * C20380;
    const double C20455 = C20304 * C20108;
    const double C20454 = be * C20290;
    const double C20453 = 2 * C20295;
    const double C20452 = -2 * C20198;
    const double C20451 = C20253 - C20333;
    const double C20450 = -2 * C20295;
    const double C20449 = C20214 * C20104;
    const double C20448 = be * C20192;
    const double C20447 = 2 * C20198;
    const double C20469 = C20458 / C20102;
    const double C20468 = 6 * C20457;
    const double C20467 = C20455 / C20102;
    const double C20466 = 6 * C20454;
    const double C20465 = ae * C20451;
    const double C20464 = C20449 / C20102;
    const double C20463 = 6 * C20448;
    const double C20473 = C20456 - C20468;
    const double C20472 = C20453 - C20466;
    const double C20471 = C20465 * C20109;
    const double C20470 = C20447 - C20463;
    const double C20477 = C20473 / C20113;
    const double C20476 = C20472 / C20113;
    const double C20475 = 2 * C20471;
    const double C20474 = C20470 / C20113;
    const double C20481 = C20469 - C20477;
    const double C20480 = C20467 - C20476;
    const double C20479 = C20464 - C20474;
    const double C20478 = C20475 / C20102;
    const double C20482 = C20340 - C20478;
    const double C20483 = ae * C20482;
    const double C20484 = -2 * C20483;
    const double gx300000 =
        ((((C20474 - C20464) * C20104) / C20102 -
          (2 * C20214 - 6 * be *
                            ((C20166 - 4 * be * C20147) / C20113 -
                             (C20192 * C20104) / C20102)) /
              C20113) *
         std::pow(C20438, 2)) /
            2.0 +
        C20200 * C20179 * C20438 + C20200 * C20438 * C20180;
    const double gx030000 = (C20438 * C20223 * C20452) / 2.0 +
                            2 * C20101 * C20302 * C20438 +
                            2 * C20101 * C20223 * C20180;
    const double gx003000 = (C20308 * C20438 * C20452) / 2.0 +
                            2 * C20101 * C20179 * C20308 +
                            2 * C20101 * C20438 * C20387;
    const double gx210000 = (C20438 * C20098 * C20479) / 2.0 +
                            C20178 * C20260 * C20438 + C20178 * C20098 * C20180;
    const double gx201000 = (C20100 * C20438 * C20479) / 2.0 +
                            C20178 * C20179 * C20100 + C20178 * C20438 * C20345;
    const double gx021000 = (C20100 * C20441 * C20452) / 2.0 +
                            2 * C20101 * C20287 * C20100 +
                            2 * C20101 * C20441 * C20345;
    const double gx120000 = (C20438 * C20441 * C20462) / 2.0 +
                            C20147 * C20287 * C20438 + C20147 * C20441 * C20180;
    const double gx102000 = (C20442 * C20438 * C20462) / 2.0 +
                            C20147 * C20179 * C20442 + C20147 * C20438 * C20372;
    const double gx012000 = (C20442 * C20098 * C20452) / 2.0 +
                            2 * C20101 * C20260 * C20442 +
                            2 * C20101 * C20098 * C20372;
    const double gx111000 = (C20100 * C20098 * C20462) / 2.0 +
                            C20147 * C20260 * C20100 + C20147 * C20098 * C20345;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx210000 - std::sqrt(5.0 / 8.0) * gx030000);
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(15.0) * gx111000;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(6.0) * gx012000 + std::sqrt(3.0 / 8.0) * gx210000 +
               std::sqrt(3.0 / 8.0) * gx030000);
    gx[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (gx003000 - 1.5 * gx201000 - 1.5 * gx021000);
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(6.0) * gx102000 - (std::sqrt(3.0 / 8.0) * gx120000 +
                                           std::sqrt(3.0 / 8.0) * gx300000));
    gx[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(7.5) * gx201000 - std::sqrt(7.5) * gx021000);
    gx[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx300000 + std::sqrt(45.0 / 8.0) * gx120000);
    const double gy300000 = C20219 * C20124 * C20438 +
                            (C20438 * C20099 * C20450) / 2.0 +
                            C20099 * C20124 * C20180;
    const double gy030000 =
        C20182 * C20294 * C20438 +
        (C20438 * C20434 *
         (((C20476 - C20467) * C20108) / C20102 -
          (2 * C20304 - 6 * be *
                            ((C20273 - 4 * be * C20259) / C20113 -
                             (C20290 * C20108) / C20102)) /
              C20113)) /
            2.0 +
        C20434 * C20294 * C20180;
    const double gy003000 = C20182 * C20124 * C20308 +
                            (C20308 * C20434 * C20450) / 2.0 +
                            C20434 * C20124 * C20387;
    const double gy210000 = C20215 * C20259 * C20438 +
                            (C20438 * C20097 * C20459) / 2.0 +
                            C20097 * C20259 * C20180;
    const double gy201000 = C20215 * C20124 * C20100 +
                            (C20100 * C20097 * C20450) / 2.0 +
                            C20097 * C20124 * C20345;
    const double gy021000 = C20182 * C20278 * C20100 +
                            (C20100 * C20434 * C20480) / 2.0 +
                            C20434 * C20278 * C20345;
    const double gy120000 = C20201 * C20278 * C20438 +
                            (C20438 * C20095 * C20480) / 2.0 +
                            C20095 * C20278 * C20180;
    const double gy102000 = C20201 * C20124 * C20442 +
                            (C20442 * C20095 * C20450) / 2.0 +
                            C20095 * C20124 * C20372;
    const double gy012000 = C20182 * C20259 * C20442 +
                            (C20442 * C20434 * C20459) / 2.0 +
                            C20434 * C20259 * C20372;
    const double gy111000 = C20201 * C20259 * C20100 +
                            (C20100 * C20095 * C20459) / 2.0 +
                            C20095 * C20259 * C20345;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy210000 - std::sqrt(5.0 / 8.0) * gy030000);
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(15.0) * gy111000;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(6.0) * gy012000 + std::sqrt(3.0 / 8.0) * gy210000 +
               std::sqrt(3.0 / 8.0) * gy030000);
    gy[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (gy003000 - 1.5 * gy201000 - 1.5 * gy021000);
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(6.0) * gy102000 - (std::sqrt(3.0 / 8.0) * gy120000 +
                                           std::sqrt(3.0 / 8.0) * gy300000));
    gy[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(7.5) * gy201000 - std::sqrt(7.5) * gy021000);
    gy[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy300000 + std::sqrt(45.0 / 8.0) * gy120000);
    const double gz300000 = C20219 * C20438 * C20125 +
                            C20099 * C20179 * C20125 +
                            (C20099 * C20438 * C20484) / 2.0;
    const double gz030000 = C20182 * C20223 * C20125 +
                            C20434 * C20302 * C20125 +
                            (C20434 * C20223 * C20484) / 2.0;
    const double gz003000 =
        C20182 * C20438 * C20379 + C20434 * C20179 * C20379 +
        (C20434 * C20438 *
         (((C20477 - C20469) * C20109) / C20102 -
          (2 * C20389 - 6 * be *
                            ((C20358 - 4 * be * C20344) / C20113 -
                             (C20375 * C20109) / C20102)) /
              C20113)) /
            2.0;
    const double gz210000 = C20215 * C20098 * C20125 +
                            C20097 * C20260 * C20125 +
                            (C20097 * C20098 * C20460) / 2.0;
    const double gz201000 = C20215 * C20438 * C20344 +
                            C20097 * C20179 * C20344 +
                            (C20097 * C20438 * C20461) / 2.0;
    const double gz021000 = C20182 * C20441 * C20344 +
                            C20434 * C20287 * C20344 +
                            (C20434 * C20441 * C20461) / 2.0;
    const double gz120000 = C20201 * C20441 * C20125 +
                            C20095 * C20287 * C20125 +
                            (C20095 * C20441 * C20460) / 2.0;
    const double gz102000 = C20201 * C20438 * C20363 +
                            C20095 * C20179 * C20363 +
                            (C20095 * C20438 * C20481) / 2.0;
    const double gz012000 = C20182 * C20098 * C20363 +
                            C20434 * C20260 * C20363 +
                            (C20434 * C20098 * C20481) / 2.0;
    const double gz111000 = C20201 * C20098 * C20344 +
                            C20095 * C20260 * C20344 +
                            (C20095 * C20098 * C20461) / 2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz210000 - std::sqrt(5.0 / 8.0) * gz030000);
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(15.0) * gz111000;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(6.0) * gz012000 + std::sqrt(3.0 / 8.0) * gz210000 +
               std::sqrt(3.0 / 8.0) * gz030000);
    gz[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (gz003000 - 1.5 * gz201000 - 1.5 * gz021000);
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(6.0) * gz102000 - (std::sqrt(3.0 / 8.0) * gz120000 +
                                           std::sqrt(3.0 / 8.0) * gz300000));
    gz[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(7.5) * gz201000 - std::sqrt(7.5) * gz021000);
    gz[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz300000 + std::sqrt(45.0 / 8.0) * gz120000);
}

// Automatically generated, do not edit
