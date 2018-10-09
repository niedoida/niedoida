/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_23(double ae,
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
    const double C13276 = ae + be;
    const double C13279 = Pi / C13276;
    const double C13280 = std::sqrt(C13279);
    const double C13283 = std::pow(C13276, 2);
    const double C13282 = be * xAB;
    const double C13289 = C13280 * C13282;
    const double C13288 = ae * xAB;
    const double C13287 = 2. * C13276;
    const double C13286 = std::pow(C13282, 2);
    const double C13291 = C13280 / C13287;
    const double C13290 = C13280 * C13286;
    const double C13292 = C13290 / C13283;
    const double C13293 = C13292 + C13291;
    const double C13301 = C13288 * C13289;
    const double C13300 = 2. * C13283;
    const double C13299 = -2. * C13289;
    const double C13298 = C13293 * C13288;
    const double C13304 = C13301 / C13283;
    const double C13303 = C13299 / C13300;
    const double C13302 = C13298 / C13276;
    const double C13306 = C13291 - C13304;
    const double C13305 = C13302 + C13303;
    const double C13309 = ae * yAB;
    const double C13313 = ae * zAB;
    const double C13321 = be * yAB;
    const double C13323 = C13280 * C13321;
    const double C13322 = std::pow(C13321, 2);
    const double C13326 = C13309 * C13323;
    const double C13325 = -2. * C13323;
    const double C13324 = C13280 * C13322;
    const double C13329 = C13326 / C13283;
    const double C13328 = C13325 / C13300;
    const double C13327 = C13324 / C13283;
    const double C13331 = C13291 - C13329;
    const double C13330 = C13327 + C13291;
    const double C13332 = C13330 * C13309;
    const double C13333 = C13332 / C13276;
    const double C13334 = C13333 + C13328;
    const double C13340 = be * zAB;
    const double C13342 = C13280 * C13340;
    const double C13341 = std::pow(C13340, 2);
    const double C13345 = C13313 * C13342;
    const double C13344 = -2. * C13342;
    const double C13343 = C13280 * C13341;
    const double C13348 = C13345 / C13283;
    const double C13347 = C13344 / C13300;
    const double C13346 = C13343 / C13283;
    const double C13350 = C13291 - C13348;
    const double C13349 = C13346 + C13291;
    const double C13351 = C13349 * C13313;
    const double C13352 = C13351 / C13276;
    const double C13353 = C13352 + C13347;
    const double C13388 = C13342 / C13276;
    const double C13387 = C13350 * C13313;
    const double C13386 = 2 * C13350;
    const double C13385 = C13353 * C13313;
    const double C13384 = C13323 / C13276;
    const double C13383 = C13331 * C13309;
    const double C13382 = 2 * C13331;
    const double C13381 = C13334 * C13309;
    const double C13380 = std::pow(C13288, 2);
    const double C13379 = C13280 * C13313;
    const double C13378 = std::pow(C13313, 2);
    const double C13377 = C13280 * C13309;
    const double C13376 = std::pow(C13309, 2);
    const double C13375 = be * zAB;
    const double C13374 = C13289 / C13276;
    const double C13373 = C13280 * C13288;
    const double C13372 = C13306 * C13288;
    const double C13371 = 2 * C13306;
    const double C13370 = be * yAB;
    const double C13369 = 2. * C13283;
    const double C13368 = C13280 * C13282;
    const double C13367 = ae * xAB;
    const double C13366 = 2. * C13276;
    const double C13365 = be * xAB;
    const double C13364 = Pi / C13276;
    const double C13403 = C13387 / C13276;
    const double C13402 = C13386 + C13349;
    const double C13401 = C13385 / C13276;
    const double C13400 = C13383 / C13276;
    const double C13399 = C13382 + C13330;
    const double C13398 = C13381 / C13276;
    const double C13397 = C13280 * C13380;
    const double C13396 = C13379 / C13276;
    const double C13395 = C13280 * C13378;
    const double C13394 = C13377 / C13276;
    const double C13393 = C13280 * C13376;
    const double C13392 = C13373 / C13276;
    const double C13391 = C13372 / C13276;
    const double C13390 = C13280 / C13366;
    const double C13389 = std::sqrt(C13364);
    const double C13411 = C13396 - C13388;
    const double C13410 = C13402 / C13287;
    const double C13409 = C13394 - C13384;
    const double C13408 = C13399 / C13287;
    const double C13407 = C13397 / C13283;
    const double C13406 = C13395 / C13283;
    const double C13405 = C13393 / C13283;
    const double C13404 = C13392 - C13374;
    const double C13419 = C13411 / C13287;
    const double C13418 = C13401 + C13410;
    const double C13417 = C13409 / C13287;
    const double C13416 = C13398 + C13408;
    const double C13415 = C13407 + C13291;
    const double C13414 = C13406 + C13291;
    const double C13413 = C13405 + C13291;
    const double C13412 = C13404 / C13287;
    const double C13422 = C13403 + C13419;
    const double C13421 = C13400 + C13417;
    const double C13420 = C13391 + C13412;
    const double C12132 = -(C13389 * C13365) / C13276;
    const double C12134 =
        (C13280 * std::pow(C13365, 2)) / std::pow(C13276, 2) + C13390;
    const double C12135 =
        (((C13280 * std::pow(C13282, 2)) / C13283 + C13390) * C13367) / C13276 +
        (-2. * C13368) / C13369;
    const double C12136 = C13390 - (C13367 * C13368) / C13283;
    const double C12137 =
        (((C13293 * C13288) / C13276 + (-2. * C13289) / C13369) * C13288) /
            C13276 +
        (2 * (C13291 - (C13288 * C13289) / C13283) + C13293) / C13287;
    const double C12140 = -(C13280 * C13370) / C13276;
    const double C12141 =
        (((C13305 * C13288) / C13276 + (C13371 + C13293) / C13287) * C13288) /
            C13276 +
        (2 * C13420 + 2 * C13305) / C13287;
    const double C12142 = -(C13280 * C13375) / C13276;
    const double C12419 = (C13413 * C13309) / C13276 + (2. * C13377) / C13300;
    const double C12516 = (C13414 * C13313) / C13276 + (2. * C13379) / C13300;
    const double C12629 = (C13280 * std::pow(C13370, 2)) / C13283 + C13291;
    const double C12630 = (C13415 * C13288) / C13276 + (2. * C13373) / C13300;
    const double C12717 =
        (C13416 * C13309) / C13276 + (2 * C13421 + 2 * C13334) / C13287;
    const double C12910 = (C13280 * std::pow(C13375, 2)) / C13283 + C13291;
    const double C12944 =
        (C13418 * C13313) / C13276 + (2 * C13422 + 2 * C13353) / C13287;
    const double C13136 =
        (C13420 * C13288) / C13276 + (C13415 + C13371) / C13287;
    const double C13164 =
        (C13421 * C13309) / C13276 + (C13413 + C13382) / C13287;
    const double C13213 =
        (C13422 * C13313) / C13276 + (C13414 + C13386) / C13287;
    const double C12158 = ae * C12142;
    const double C12157 = ae * C12140;
    const double C12156 = be * zAB;
    const double C12155 = be * yAB;
    const double C12154 = std::pow(ae, 2);
    const double C12153 = ae * C12137;
    const double C12152 = ae * C12136;
    const double C12151 = ae * C13389;
    const double C12150 = ae * C12135;
    const double C12149 = ae * C12134;
    const double C12148 = ae * xAB;
    const double C12147 = be * xAB;
    const double C12146 = be * C13389;
    const double C12145 = ae + be;
    const double C12144 = be * C12132;
    const double C12143 = ae * C12132;
    const double C12178 = 2 * C12158;
    const double C12177 = 2 * C12157;
    const double C12176 = std::pow(C12147, 2);
    const double C12175 = std::pow(C12145, 2);
    const double C12174 = C12147 / C12145;
    const double C12173 = C12156 / C12145;
    const double C12172 = Pi / C12145;
    const double C12171 = C12155 / C12145;
    const double C12170 = 2 * C12153;
    const double C12169 = 2 * C12152;
    const double C12168 = 2. * C12151;
    const double C12167 = C12143 * C12148;
    const double C12166 = 2 * C12150;
    const double C12165 = 4. * C12143;
    const double C12164 = 2 * C12149;
    const double C12163 = C12143 * C12147;
    const double C12162 = 2 * C12146;
    const double C12161 = 2. * C12145;
    const double C12160 = 2 * C12144;
    const double C12159 = 2 * C12143;
    const double C12191 = 2. * C12175;
    const double C12190 = std::pow(C12174, 2);
    const double C12189 = std::pow(C12173, 2);
    const double C12188 = be * C12159;
    const double C12187 = std::sqrt(C12172);
    const double C12186 = 1 / C12161;
    const double C12185 = std::pow(C12171, 2);
    const double C12184 = C12168 / C12161;
    const double C12183 = 2 * C12167;
    const double C12182 = C12165 / C12161;
    const double C12181 = 2 * C12163;
    const double C12180 = -C12162;
    const double C12179 = C12159 - C12160;
    const double C12203 = C12187 * C12148;
    const double C12202 = C12187 / C12161;
    const double C12201 = C12187 * C12176;
    const double C12200 = C12187 * C12147;
    const double C12199 = C12190 + C12186;
    const double C12198 = C12189 + C12186;
    const double C12197 = 4 * C12188;
    const double C12196 = C12185 + C12186;
    const double C12195 = C12183 / C12145;
    const double C12194 = C12181 / C12145;
    const double C12193 = C12180 / C12161;
    const double C12192 = C12179 / C12161;
    const double C12216 = C12200 / C12145;
    const double C12215 = C12203 / C12145;
    const double C12214 = be * C12203;
    const double C12213 = C12148 * C12200;
    const double C12212 = -2. * C12200;
    const double C12211 = C12201 / C12175;
    const double C12210 = ae * C12200;
    const double C12209 = C12154 * C12199;
    const double C12208 = C12154 * C12198;
    const double C12207 = -C12197;
    const double C12206 = C12154 * C12196;
    const double C12205 = C12195 + C12184;
    const double C12204 = C12193 - C12194;
    const double C12232 = C12215 - C12216;
    const double C12231 = 2 * C12214;
    const double C12230 = C12213 / C12175;
    const double C12229 = C12212 / C12191;
    const double C12228 = C12211 + C12202;
    const double C12227 = -2 * C12210;
    const double C12226 = 2 * C12209;
    const double C12225 = 2 * C12208;
    const double C12224 = be * C12204;
    const double C12223 = ae * C12204;
    const double C12222 = C12207 / C12161;
    const double C12221 = 2 * C12206;
    const double C12220 = C12205 + C12204;
    const double C12219 = C12204 * C12148;
    const double C12218 = 2 * C12204;
    const double C12217 = C12204 * C12147;
    const double C12249 = C12232 / C12161;
    const double C12248 = ae * C12231;
    const double C12247 = C12202 - C12230;
    const double C12246 = C12228 * C12148;
    const double C12245 = ae * C12228;
    const double C12244 = be * C12227;
    const double C12243 = ae - C12226;
    const double C12242 = ae - C12225;
    const double C12241 = 4 * C12223;
    const double C12240 = 4 * C12224;
    const double C12239 = 2 * C12223;
    const double C12238 = C12223 * C12147;
    const double C12237 = ae - C12221;
    const double C12236 = C12220 + C12169;
    const double C12235 = C12219 / C12145;
    const double C12234 = C12218 + C12164;
    const double C12233 = C12217 / C12145;
    const double C12267 = C12247 * C12148;
    const double C12266 = C12248 / C12175;
    const double C12265 = 2 * C12247;
    const double C12264 = be * C12247;
    const double C12263 = C12246 / C12145;
    const double C12262 = 2 * C12245;
    const double C12261 = C12244 / C12175;
    const double C12260 = C12243 * C12187;
    const double C12259 = C12242 * C12187;
    const double C12258 = C12239 + C12241;
    const double C12257 = C12239 - C12240;
    const double C12256 = be * C12239;
    const double C12255 = 2 * C12238;
    const double C12254 = C12237 * C12187;
    const double C12253 = C12236 / C12161;
    const double C12252 = C12235 + C12182;
    const double C12251 = C12234 / C12161;
    const double C12250 = C12192 - C12233;
    const double C12283 = C12267 / C12145;
    const double C12282 = C12260 * C12148;
    const double C12281 = C12265 + C12228;
    const double C12280 = C12264 * ae;
    const double C12279 = C12263 + C12229;
    const double C12278 = C12262 - C12187;
    const double C12277 = C12260 * C12147;
    const double C12276 = C12260 / C12161;
    const double C12275 = C12258 / C12161;
    const double C12274 = ae * C12250;
    const double C12273 = C12257 / C12161;
    const double C12272 = 6 * C12256;
    const double C12271 = C12255 / C12145;
    const double C12270 = C12252 * C12148;
    const double C12269 = 2 * C12252;
    const double C12268 = C12250 * C12148;
    const double C12298 = 2 * C12279;
    const double C12297 = C12283 + C12249;
    const double C12296 = C12282 / C12145;
    const double C12295 = C12281 / C12161;
    const double C12294 = C12279 * C12148;
    const double C12293 = 2 * C12280;
    const double C12292 = be * C12279;
    const double C12291 = C12278 * be;
    const double C12290 = C12277 / C12145;
    const double C12289 = 4 * C12274;
    const double C12288 = -C12272;
    const double C12287 = C12222 - C12271;
    const double C12286 = C12270 / C12145;
    const double C12285 = C12269 + C12250;
    const double C12284 = C12268 / C12145;
    const double C12315 = 2 * C12297;
    const double C12314 = be * C12297;
    const double C12313 = C12296 + C12266;
    const double C12312 = C12294 / C12145;
    const double C12311 = C12293 / C12145;
    const double C12310 = C12292 * ae;
    const double C12309 = C12291 / C12145;
    const double C12308 = C12261 - C12290;
    const double C12307 = C12287 * C12148;
    const double C12306 = 2 * C12287;
    const double C12305 = C12287 * C12147;
    const double C12304 = C12288 / C12161;
    const double C12303 = be * C12287;
    const double C12302 = ae * C12287;
    const double C12301 = C12286 + C12253;
    const double C12300 = C12285 + C12166;
    const double C12299 = C12284 + C12251;
    const double C12333 = C12315 + C12298;
    const double C12332 = 2 * C12314;
    const double C12331 = C12313 + C12308;
    const double C12330 = C12312 + C12295;
    const double C12329 = C12308 * C12148;
    const double C12328 = 2 * C12310;
    const double C12327 = C12308 * C12147;
    const double C12326 = C12307 / C12145;
    const double C12325 = C12306 + C12289;
    const double C12324 = 6 * C12302;
    const double C12323 = C12305 / C12145;
    const double C12322 = C12302 * C12147;
    const double C12321 = 6 * C12303;
    const double C12320 = 2 * C12302;
    const double C12319 = 2 * C12299;
    const double C12318 = 2 * C12301;
    const double C12317 = C12300 / C12161;
    const double C12316 = C12299 * C12148;
    const double C12348 = C12333 / C12161;
    const double C12347 = C12330 * C12148;
    const double C12346 = C12332 + C12216;
    const double C12345 = C12331 / C12161;
    const double C12344 = be * C12330;
    const double C12343 = C12329 / C12145;
    const double C12342 = C12327 / C12145;
    const double C12341 = C12326 + C12275;
    const double C12340 = C12325 / C12161;
    const double C12339 = C12320 + C12324;
    const double C12338 = C12273 - C12323;
    const double C12337 = 2 * C12322;
    const double C12336 = C12320 - C12321;
    const double C12335 = C12318 + C12319;
    const double C12334 = C12316 / C12145;
    const double C12360 = C12347 / C12145;
    const double C12359 = C12346 * ae;
    const double C12358 = 2 * C12344;
    const double C12357 = C12343 + C12276;
    const double C12356 = C12276 - C12342;
    const double C12355 = C12338 * C12148;
    const double C12354 = C12339 / C12161;
    const double C12353 = ae * C12338;
    const double C12352 = C12337 / C12145;
    const double C12351 = C12336 / C12161;
    const double C12350 = C12335 + C12170;
    const double C12349 = C12334 + C12317;
    const double C12370 = C12360 + C12348;
    const double C12369 = C12359 / C12145;
    const double C12368 = C12358 - C12228;
    const double C12367 = C12357 + C12311;
    const double C12366 = C12356 + C12309;
    const double C12365 = C12355 / C12145;
    const double C12364 = 6 * C12353;
    const double C12363 = C12304 - C12352;
    const double C12362 = C12350 / C12161;
    const double C12361 = C12349 * C12148;
    const double C12380 = be * C12370;
    const double C12379 = C12367 * C12148;
    const double C12378 = C12368 * ae;
    const double C12377 = 2 * C12367;
    const double C12376 = C12366 * C12148;
    const double C12375 = C12365 + C12340;
    const double C12374 = C12363 * C12148;
    const double C12373 = 2 * C12363;
    const double C12372 = C12363 * C12147;
    const double C12371 = C12361 / C12145;
    const double C12389 = 2 * C12380;
    const double C12388 = C12379 / C12145;
    const double C12387 = C12378 / C12145;
    const double C12386 = C12377 + C12366;
    const double C12385 = C12376 + C12308;
    const double C12384 = C12374 / C12145;
    const double C12383 = C12373 + C12364;
    const double C12382 = C12372 / C12145;
    const double C12381 = C12371 + C12362;
    const double C12396 = C12389 - C12298;
    const double C12395 = C12388 + C12345;
    const double C12394 = C12386 / C12161;
    const double C12393 = C12385 + C12328;
    const double C12392 = C12384 + C12354;
    const double C12391 = C12383 / C12161;
    const double C12390 = C12351 - C12382;
    const double C12401 = C12396 * ae;
    const double C12400 = 2 * C12393;
    const double C12399 = C12395 + C12369;
    const double C12398 = C12148 * C12393;
    const double C12397 = C12390 * C12148;
    const double C12406 = C12401 / C12145;
    const double C12405 = C12400 / C12145;
    const double C12404 = 2 * C12399;
    const double C12403 = C12398 / C12175;
    const double C12402 = C12397 / C12145;
    const double C12409 = C12404 + C12405;
    const double C12408 = C12403 + C12394;
    const double C12407 = C12402 + C12391;
    const double C12411 = C12409 / C12161;
    const double C12410 = C12408 + C12387;
    const double C12412 = C12410 * C12148;
    const double C12413 = C12412 / C12145;
    const double C12414 = C12413 + C12411;
    const double C12415 = C12414 + C12406;
    const double C12430 = ae * C12177;
    const double C12429 = C12157 * C12155;
    const double C12428 = be * C13280;
    const double C12427 = be * C12177;
    const double C12426 = ae * C13413;
    const double C12425 = ae * C13394;
    const double C12424 = ae * C13280;
    const double C12423 = C12254 / C12161;
    const double C12422 = ae * yAB;
    const double C12441 = 4. * C12430;
    const double C12440 = 2 * C12429;
    const double C12439 = 2 * C12428;
    const double C12438 = 4 * C12427;
    const double C12437 = 2 * C12426;
    const double C12436 = 2 * C12425;
    const double C12435 = 2. * C12424;
    const double C12434 = C12157 * C12422;
    const double C12433 = std::pow(C12422, 2);
    const double C12432 = C12187 * C12422;
    const double C12431 = C12254 * C12422;
    const double C12452 = C12441 / C12161;
    const double C12451 = C12440 / C12145;
    const double C12450 = -C12439;
    const double C12449 = -C12438;
    const double C12448 = C12177 + C12436;
    const double C12447 = C12435 / C12161;
    const double C12446 = 2 * C12434;
    const double C12445 = 2. * C12432;
    const double C12444 = C12187 * C12433;
    const double C12443 = be * C12432;
    const double C12442 = C12431 / C12145;
    const double C12460 = C12450 / C12161;
    const double C12459 = C12449 / C12161;
    const double C12458 = C12448 / C12161;
    const double C12457 = C12446 / C12145;
    const double C12456 = C12445 / C12145;
    const double C12455 = C12445 / C12191;
    const double C12454 = C12444 / C12175;
    const double C12453 = 2 * C12443;
    const double C12464 = C12460 - C12451;
    const double C12463 = C12457 + C12447;
    const double C12462 = C12454 + C12202;
    const double C12461 = ae * C12453;
    const double C12470 = ae * C12464;
    const double C12469 = 2 * C12463;
    const double C12468 = C12463 * C12422;
    const double C12467 = C12462 * C12422;
    const double C12466 = be * C12462;
    const double C12465 = C12461 / C12175;
    const double C12478 = C12470 * C12422;
    const double C12477 = 2 * C12470;
    const double C12476 = C12470 * C12155;
    const double C12475 = C12469 + C12437;
    const double C12474 = C12468 / C12145;
    const double C12473 = C12467 / C12145;
    const double C12472 = 2 * C12466;
    const double C12471 = C12442 + C12465;
    const double C12486 = 2 * C12478;
    const double C12485 = ae * C12477;
    const double C12484 = 2 * C12476;
    const double C12483 = C12475 / C12161;
    const double C12482 = C12474 + C12458;
    const double C12481 = C12473 + C12455;
    const double C12480 = C12472 - C12187;
    const double C12479 = C12471 * C12422;
    const double C12493 = C12486 / C12145;
    const double C12492 = 6. * C12485;
    const double C12491 = C12484 / C12145;
    const double C12490 = C12482 * C12422;
    const double C12489 = be * C12481;
    const double C12488 = C12480 * ae;
    const double C12487 = C12479 / C12145;
    const double C12500 = C12493 + C12452;
    const double C12499 = C12492 / C12161;
    const double C12498 = C12459 - C12491;
    const double C12497 = C12490 / C12145;
    const double C12496 = 2 * C12489;
    const double C12495 = C12488 / C12145;
    const double C12494 = C12487 + C12423;
    const double C12504 = ae * C12498;
    const double C12503 = C12497 + C12483;
    const double C12502 = C12496 - C12456;
    const double C12501 = C12494 + C12495;
    const double C12507 = C12504 * C12422;
    const double C12506 = C12502 * ae;
    const double C12505 = C12501 * C12422;
    const double C12509 = 2 * C12507;
    const double C12508 = C12505 + C12471;
    const double C12511 = C12509 / C12145;
    const double C12510 = C12508 + C12506;
    const double C12512 = C12511 + C12499;
    const double C12527 = ae * C12178;
    const double C12526 = C12158 * C12156;
    const double C12525 = be * C13280;
    const double C12524 = be * C12178;
    const double C12523 = ae * C13414;
    const double C12522 = ae * C13396;
    const double C12521 = ae * C13280;
    const double C12520 = C12259 / C12161;
    const double C12519 = ae * zAB;
    const double C12538 = 4. * C12527;
    const double C12537 = 2 * C12526;
    const double C12536 = 2 * C12525;
    const double C12535 = 4 * C12524;
    const double C12534 = 2 * C12523;
    const double C12533 = 2 * C12522;
    const double C12532 = 2. * C12521;
    const double C12531 = C12158 * C12519;
    const double C12530 = std::pow(C12519, 2);
    const double C12529 = C12187 * C12519;
    const double C12528 = C12259 * C12519;
    const double C12549 = C12538 / C12161;
    const double C12548 = C12537 / C12145;
    const double C12547 = -C12536;
    const double C12546 = -C12535;
    const double C12545 = C12178 + C12533;
    const double C12544 = C12532 / C12161;
    const double C12543 = 2 * C12531;
    const double C12542 = 2. * C12529;
    const double C12541 = C12187 * C12530;
    const double C12540 = be * C12529;
    const double C12539 = C12528 / C12145;
    const double C12557 = C12547 / C12161;
    const double C12556 = C12546 / C12161;
    const double C12555 = C12545 / C12161;
    const double C12554 = C12543 / C12145;
    const double C12553 = C12542 / C12145;
    const double C12552 = C12542 / C12191;
    const double C12551 = C12541 / C12175;
    const double C12550 = 2 * C12540;
    const double C12561 = C12557 - C12548;
    const double C12560 = C12554 + C12544;
    const double C12559 = C12551 + C12202;
    const double C12558 = ae * C12550;
    const double C12567 = ae * C12561;
    const double C12566 = 2 * C12560;
    const double C12565 = C12560 * C12519;
    const double C12564 = C12559 * C12519;
    const double C12563 = be * C12559;
    const double C12562 = C12558 / C12175;
    const double C12575 = C12567 * C12519;
    const double C12574 = 2 * C12567;
    const double C12573 = C12567 * C12156;
    const double C12572 = C12566 + C12534;
    const double C12571 = C12565 / C12145;
    const double C12570 = C12564 / C12145;
    const double C12569 = 2 * C12563;
    const double C12568 = C12539 + C12562;
    const double C12583 = 2 * C12575;
    const double C12582 = ae * C12574;
    const double C12581 = 2 * C12573;
    const double C12580 = C12572 / C12161;
    const double C12579 = C12571 + C12555;
    const double C12578 = C12570 + C12552;
    const double C12577 = C12569 - C12187;
    const double C12576 = C12568 * C12519;
    const double C12590 = C12583 / C12145;
    const double C12589 = 6. * C12582;
    const double C12588 = C12581 / C12145;
    const double C12587 = C12579 * C12519;
    const double C12586 = be * C12578;
    const double C12585 = C12577 * ae;
    const double C12584 = C12576 / C12145;
    const double C12597 = C12590 + C12549;
    const double C12596 = C12589 / C12161;
    const double C12595 = C12556 - C12588;
    const double C12594 = C12587 / C12145;
    const double C12593 = 2 * C12586;
    const double C12592 = C12585 / C12145;
    const double C12591 = C12584 + C12520;
    const double C12601 = ae * C12595;
    const double C12600 = C12594 + C12580;
    const double C12599 = C12593 - C12553;
    const double C12598 = C12591 + C12592;
    const double C12604 = C12601 * C12519;
    const double C12603 = C12599 * ae;
    const double C12602 = C12598 * C12519;
    const double C12606 = 2 * C12604;
    const double C12605 = C12602 + C12568;
    const double C12608 = C12606 / C12145;
    const double C12607 = C12605 + C12603;
    const double C12609 = C12608 + C12596;
    const double C12646 = 2. * C12203;
    const double C12645 = std::pow(C12148, 2);
    const double C12644 = C12313 * C12148;
    const double C12643 = C12464 * C12155;
    const double C12642 = be * C12140;
    const double C12641 = ae * C12159;
    const double C12640 = C12223 * C12148;
    const double C12639 = ae * C12239;
    const double C12638 = C12302 * C12148;
    const double C12637 = std::pow(C12155, 2);
    const double C12636 = C12254 * C12155;
    const double C12635 = C12187 * C12155;
    const double C12634 = ae * C13415;
    const double C12633 = 2 * C12205;
    const double C12632 = ae * C13392;
    const double C12631 = C12205 * C12148;
    const double C12662 = C12646 / C12145;
    const double C12661 = C12646 / C12191;
    const double C12660 = C12187 * C12645;
    const double C12659 = C12644 / C12145;
    const double C12658 = C12643 / C12145;
    const double C12657 = 2 * C12642;
    const double C12656 = 4. * C12641;
    const double C12655 = 2 * C12640;
    const double C12654 = 6. * C12639;
    const double C12653 = 2 * C12638;
    const double C12652 = C12187 * C12637;
    const double C12651 = C12636 / C12145;
    const double C12650 = ae * C12635;
    const double C12649 = 2 * C12634;
    const double C12648 = 2 * C12632;
    const double C12647 = C12631 / C12145;
    const double C12673 = C12660 / C12175;
    const double C12672 = C12659 + C12276;
    const double C12671 = C12177 - C12657;
    const double C12670 = C12656 / C12161;
    const double C12669 = C12655 / C12145;
    const double C12668 = C12654 / C12161;
    const double C12667 = C12653 / C12145;
    const double C12666 = C12652 / C12175;
    const double C12665 = -2 * C12650;
    const double C12664 = C12633 + C12649;
    const double C12663 = C12159 + C12648;
    const double C12681 = C12673 + C12202;
    const double C12680 = C12671 / C12161;
    const double C12679 = C12669 + C12670;
    const double C12678 = C12667 + C12668;
    const double C12677 = C12666 + C12202;
    const double C12676 = be * C12665;
    const double C12675 = C12664 / C12161;
    const double C12674 = C12663 / C12161;
    const double C12687 = C12681 * C12148;
    const double C12686 = be * C12681;
    const double C12685 = C12680 - C12658;
    const double C12684 = ae * C12677;
    const double C12683 = C12676 / C12175;
    const double C12682 = C12647 + C12674;
    const double C12692 = C12687 / C12145;
    const double C12691 = 2 * C12686;
    const double C12690 = 2 * C12684;
    const double C12689 = C12683 - C12651;
    const double C12688 = C12682 * C12148;
    const double C12697 = C12692 + C12661;
    const double C12696 = C12691 - C12187;
    const double C12695 = C12690 - C12187;
    const double C12694 = C12689 * C12155;
    const double C12693 = C12688 / C12145;
    const double C12702 = be * C12697;
    const double C12701 = C12696 * ae;
    const double C12700 = C12695 * be;
    const double C12699 = C12694 / C12145;
    const double C12698 = C12693 + C12675;
    const double C12706 = 2 * C12702;
    const double C12705 = C12701 / C12145;
    const double C12704 = C12700 / C12145;
    const double C12703 = C12423 - C12699;
    const double C12709 = C12706 - C12662;
    const double C12708 = C12672 + C12705;
    const double C12707 = C12703 + C12704;
    const double C12711 = C12709 * ae;
    const double C12710 = C12708 * C12148;
    const double C12712 = C12710 + C12313;
    const double C12713 = C12712 + C12711;
    const double C12748 = 4 * C12470;
    const double C12747 = C12498 * C12422;
    const double C12746 = ae * C12685;
    const double C12745 = 2 * C12498;
    const double C12744 = 6 * C12504;
    const double C12743 = C12498 * C12155;
    const double C12742 = be * C12464;
    const double C12741 = C12504 * C12155;
    const double C12740 = be * C12477;
    const double C12739 = be * C12498;
    const double C12738 = 2 * C12504;
    const double C12737 = ae * C13416;
    const double C12736 = ae * C13331;
    const double C12735 = C12463 + C12464;
    const double C12734 = ae * C13334;
    const double C12733 = 4. * C12157;
    const double C12732 = C12464 * C12422;
    const double C12731 = ae * C12629;
    const double C12730 = 2 * C12464;
    const double C12729 = C12685 * C12422;
    const double C12728 = C12635 / C12145;
    const double C12727 = C12432 / C12145;
    const double C12726 = C12471 + C12689;
    const double C12725 = C12422 * C12635;
    const double C12724 = C12689 * C12422;
    const double C12723 = -2. * C12635;
    const double C12722 = C12677 * C12422;
    const double C12721 = C12707 * C12422;
    const double C12771 = C12477 + C12748;
    const double C12770 = C12747 / C12145;
    const double C12769 = 4 * C12746;
    const double C12768 = C12738 + C12744;
    const double C12767 = C12743 / C12145;
    const double C12766 = 4 * C12742;
    const double C12765 = 2 * C12741;
    const double C12764 = 6 * C12740;
    const double C12763 = 6 * C12739;
    const double C12762 = 2 * C12737;
    const double C12761 = 2 * C12736;
    const double C12760 = 2 * C12734;
    const double C12759 = C12733 / C12161;
    const double C12758 = C12732 / C12145;
    const double C12757 = 2 * C12731;
    const double C12756 = C12729 / C12145;
    const double C12755 = C12727 - C12728;
    const double C12754 = C12726 / C12161;
    const double C12753 = C12725 / C12175;
    const double C12752 = C12724 / C12145;
    const double C12751 = C12723 / C12191;
    const double C12750 = C12722 / C12145;
    const double C12749 = C12721 + C12689;
    const double C12785 = C12771 / C12161;
    const double C12784 = C12745 + C12769;
    const double C12783 = C12768 / C12161;
    const double C12782 = C12477 - C12766;
    const double C12781 = C12765 / C12145;
    const double C12780 = -C12764;
    const double C12779 = C12738 - C12763;
    const double C12778 = C12735 + C12761;
    const double C12777 = C12758 + C12759;
    const double C12776 = C12730 + C12757;
    const double C12775 = C12755 / C12161;
    const double C12774 = C12202 - C12753;
    const double C12773 = C12752 + C12423;
    const double C12772 = C12750 + C12751;
    const double C12800 = C12770 + C12785;
    const double C12799 = C12784 / C12161;
    const double C12798 = C12782 / C12161;
    const double C12797 = C12780 / C12161;
    const double C12796 = C12779 / C12161;
    const double C12795 = C12778 / C12161;
    const double C12794 = C12777 * C12422;
    const double C12793 = 2 * C12777;
    const double C12792 = C12776 / C12161;
    const double C12791 = 2 * C12772;
    const double C12790 = C12774 * C12422;
    const double C12789 = 2 * C12774;
    const double C12788 = C12772 * C12422;
    const double C12787 = be * C12774;
    const double C12786 = be * C12772;
    const double C12810 = C12798 - C12767;
    const double C12809 = C12797 - C12781;
    const double C12808 = C12794 / C12145;
    const double C12807 = C12793 + C12685;
    const double C12806 = C12756 + C12792;
    const double C12805 = C12790 / C12145;
    const double C12804 = C12789 + C12677;
    const double C12803 = C12788 / C12145;
    const double C12802 = C12787 * ae;
    const double C12801 = C12786 * ae;
    const double C12823 = C12810 * C12422;
    const double C12822 = C12809 * C12422;
    const double C12821 = ae * C12810;
    const double C12820 = 2 * C12809;
    const double C12819 = C12809 * C12155;
    const double C12818 = 2 * C12806;
    const double C12817 = C12808 + C12795;
    const double C12816 = C12807 + C12760;
    const double C12815 = C12806 * C12422;
    const double C12814 = C12805 + C12775;
    const double C12813 = C12804 / C12161;
    const double C12812 = 2 * C12802;
    const double C12811 = 2 * C12801;
    const double C12835 = C12823 / C12145;
    const double C12834 = C12822 / C12145;
    const double C12833 = 6 * C12821;
    const double C12832 = C12819 / C12145;
    const double C12831 = 2 * C12817;
    const double C12830 = C12816 / C12161;
    const double C12829 = C12815 / C12145;
    const double C12828 = 2 * C12814;
    const double C12827 = be * C12814;
    const double C12826 = C12803 + C12813;
    const double C12825 = C12812 / C12145;
    const double C12824 = C12749 + C12811;
    const double C12848 = C12835 + C12799;
    const double C12847 = C12834 + C12783;
    const double C12846 = C12820 + C12833;
    const double C12845 = C12796 - C12832;
    const double C12844 = C12831 + C12818;
    const double C12843 = C12829 + C12830;
    const double C12842 = C12828 + C12791;
    const double C12841 = C12826 * C12422;
    const double C12840 = 2 * C12824;
    const double C12839 = 2 * C12827;
    const double C12838 = be * C12826;
    const double C12837 = C12773 + C12825;
    const double C12836 = C12422 * C12824;
    const double C12860 = C12846 / C12161;
    const double C12859 = C12845 * C12422;
    const double C12858 = C12844 + C12762;
    const double C12857 = C12843 * C12422;
    const double C12856 = C12842 / C12161;
    const double C12855 = C12841 / C12145;
    const double C12854 = C12840 / C12145;
    const double C12853 = C12839 + C12728;
    const double C12852 = C12837 * C12422;
    const double C12851 = 2 * C12838;
    const double C12850 = 2 * C12837;
    const double C12849 = C12836 / C12175;
    const double C12868 = C12859 / C12145;
    const double C12867 = C12858 / C12161;
    const double C12866 = C12857 / C12145;
    const double C12865 = C12855 + C12856;
    const double C12864 = C12853 * ae;
    const double C12863 = C12852 / C12145;
    const double C12862 = C12851 - C12677;
    const double C12861 = C12850 + C12707;
    const double C12875 = C12868 + C12860;
    const double C12874 = C12866 + C12867;
    const double C12873 = be * C12865;
    const double C12872 = C12864 / C12145;
    const double C12871 = C12863 + C12754;
    const double C12870 = C12862 * ae;
    const double C12869 = C12861 / C12161;
    const double C12879 = 2 * C12873;
    const double C12878 = C12871 + C12872;
    const double C12877 = C12870 / C12145;
    const double C12876 = C12849 + C12869;
    const double C12882 = C12879 - C12791;
    const double C12881 = 2 * C12878;
    const double C12880 = C12876 + C12877;
    const double C12885 = C12882 * ae;
    const double C12884 = C12881 + C12854;
    const double C12883 = C12880 * C12422;
    const double C12888 = C12885 / C12145;
    const double C12887 = C12884 / C12161;
    const double C12886 = C12883 / C12145;
    const double C12889 = C12886 + C12887;
    const double C12890 = C12889 + C12888;
    const double C12915 = C12561 * C12156;
    const double C12914 = be * C12142;
    const double C12913 = std::pow(C12156, 2);
    const double C12912 = C12259 * C12156;
    const double C12911 = C12187 * C12156;
    const double C12920 = C12915 / C12145;
    const double C12919 = 2 * C12914;
    const double C12918 = C12187 * C12913;
    const double C12917 = C12912 / C12145;
    const double C12916 = ae * C12911;
    const double C12923 = C12178 - C12919;
    const double C12922 = C12918 / C12175;
    const double C12921 = -2 * C12916;
    const double C12926 = C12923 / C12161;
    const double C12925 = C12922 + C12202;
    const double C12924 = be * C12921;
    const double C12929 = C12926 - C12920;
    const double C12928 = ae * C12925;
    const double C12927 = C12924 / C12175;
    const double C12931 = 2 * C12928;
    const double C12930 = C12927 - C12917;
    const double C12933 = C12931 - C12187;
    const double C12932 = C12930 * C12156;
    const double C12935 = C12933 * be;
    const double C12934 = C12932 / C12145;
    const double C12937 = C12935 / C12145;
    const double C12936 = C12520 - C12934;
    const double C12938 = C12936 + C12937;
    const double C12975 = 4 * C12567;
    const double C12974 = C12595 * C12519;
    const double C12973 = ae * C12929;
    const double C12972 = 2 * C12595;
    const double C12971 = 6 * C12601;
    const double C12970 = C12595 * C12156;
    const double C12969 = be * C12561;
    const double C12968 = C12601 * C12156;
    const double C12967 = be * C12574;
    const double C12966 = be * C12595;
    const double C12965 = 2 * C12601;
    const double C12964 = ae * C13418;
    const double C12963 = ae * C13350;
    const double C12962 = C12560 + C12561;
    const double C12961 = ae * C13353;
    const double C12960 = 4. * C12158;
    const double C12959 = C12561 * C12519;
    const double C12958 = ae * C12910;
    const double C12957 = 2 * C12561;
    const double C12956 = C12929 * C12519;
    const double C12955 = C12911 / C12145;
    const double C12954 = C12529 / C12145;
    const double C12953 = C12568 + C12930;
    const double C12952 = C12519 * C12911;
    const double C12951 = C12930 * C12519;
    const double C12950 = -2. * C12911;
    const double C12949 = C12925 * C12519;
    const double C12948 = C12938 * C12519;
    const double C12998 = C12574 + C12975;
    const double C12997 = C12974 / C12145;
    const double C12996 = 4 * C12973;
    const double C12995 = C12965 + C12971;
    const double C12994 = C12970 / C12145;
    const double C12993 = 4 * C12969;
    const double C12992 = 2 * C12968;
    const double C12991 = 6 * C12967;
    const double C12990 = 6 * C12966;
    const double C12989 = 2 * C12964;
    const double C12988 = 2 * C12963;
    const double C12987 = 2 * C12961;
    const double C12986 = C12960 / C12161;
    const double C12985 = C12959 / C12145;
    const double C12984 = 2 * C12958;
    const double C12983 = C12956 / C12145;
    const double C12982 = C12954 - C12955;
    const double C12981 = C12953 / C12161;
    const double C12980 = C12952 / C12175;
    const double C12979 = C12951 / C12145;
    const double C12978 = C12950 / C12191;
    const double C12977 = C12949 / C12145;
    const double C12976 = C12948 + C12930;
    const double C13012 = C12998 / C12161;
    const double C13011 = C12972 + C12996;
    const double C13010 = C12995 / C12161;
    const double C13009 = C12574 - C12993;
    const double C13008 = C12992 / C12145;
    const double C13007 = -C12991;
    const double C13006 = C12965 - C12990;
    const double C13005 = C12962 + C12988;
    const double C13004 = C12985 + C12986;
    const double C13003 = C12957 + C12984;
    const double C13002 = C12982 / C12161;
    const double C13001 = C12202 - C12980;
    const double C13000 = C12979 + C12520;
    const double C12999 = C12977 + C12978;
    const double C13027 = C12997 + C13012;
    const double C13026 = C13011 / C12161;
    const double C13025 = C13009 / C12161;
    const double C13024 = C13007 / C12161;
    const double C13023 = C13006 / C12161;
    const double C13022 = C13005 / C12161;
    const double C13021 = C13004 * C12519;
    const double C13020 = 2 * C13004;
    const double C13019 = C13003 / C12161;
    const double C13018 = 2 * C12999;
    const double C13017 = C13001 * C12519;
    const double C13016 = 2 * C13001;
    const double C13015 = C12999 * C12519;
    const double C13014 = be * C13001;
    const double C13013 = be * C12999;
    const double C13037 = C13025 - C12994;
    const double C13036 = C13024 - C13008;
    const double C13035 = C13021 / C12145;
    const double C13034 = C13020 + C12929;
    const double C13033 = C12983 + C13019;
    const double C13032 = C13017 / C12145;
    const double C13031 = C13016 + C12925;
    const double C13030 = C13015 / C12145;
    const double C13029 = C13014 * ae;
    const double C13028 = C13013 * ae;
    const double C13050 = C13037 * C12519;
    const double C13049 = C13036 * C12519;
    const double C13048 = ae * C13037;
    const double C13047 = 2 * C13036;
    const double C13046 = C13036 * C12156;
    const double C13045 = 2 * C13033;
    const double C13044 = C13035 + C13022;
    const double C13043 = C13034 + C12987;
    const double C13042 = C13033 * C12519;
    const double C13041 = C13032 + C13002;
    const double C13040 = C13031 / C12161;
    const double C13039 = 2 * C13029;
    const double C13038 = 2 * C13028;
    const double C13062 = C13050 / C12145;
    const double C13061 = C13049 / C12145;
    const double C13060 = 6 * C13048;
    const double C13059 = C13046 / C12145;
    const double C13058 = 2 * C13044;
    const double C13057 = C13043 / C12161;
    const double C13056 = C13042 / C12145;
    const double C13055 = 2 * C13041;
    const double C13054 = be * C13041;
    const double C13053 = C13030 + C13040;
    const double C13052 = C13039 / C12145;
    const double C13051 = C12976 + C13038;
    const double C13075 = C13062 + C13026;
    const double C13074 = C13061 + C13010;
    const double C13073 = C13047 + C13060;
    const double C13072 = C13023 - C13059;
    const double C13071 = C13058 + C13045;
    const double C13070 = C13056 + C13057;
    const double C13069 = C13055 + C13018;
    const double C13068 = C13053 * C12519;
    const double C13067 = 2 * C13051;
    const double C13066 = 2 * C13054;
    const double C13065 = be * C13053;
    const double C13064 = C13000 + C13052;
    const double C13063 = C12519 * C13051;
    const double C13087 = C13073 / C12161;
    const double C13086 = C13072 * C12519;
    const double C13085 = C13071 + C12989;
    const double C13084 = C13070 * C12519;
    const double C13083 = C13069 / C12161;
    const double C13082 = C13068 / C12145;
    const double C13081 = C13067 / C12145;
    const double C13080 = C13066 + C12955;
    const double C13079 = C13064 * C12519;
    const double C13078 = 2 * C13065;
    const double C13077 = 2 * C13064;
    const double C13076 = C13063 / C12175;
    const double C13095 = C13086 / C12145;
    const double C13094 = C13085 / C12161;
    const double C13093 = C13084 / C12145;
    const double C13092 = C13082 + C13083;
    const double C13091 = C13080 * ae;
    const double C13090 = C13079 / C12145;
    const double C13089 = C13078 - C12925;
    const double C13088 = C13077 + C12938;
    const double C13102 = C13095 + C13087;
    const double C13101 = C13093 + C13094;
    const double C13100 = be * C13092;
    const double C13099 = C13091 / C12145;
    const double C13098 = C13090 + C12981;
    const double C13097 = C13089 * ae;
    const double C13096 = C13088 / C12161;
    const double C13106 = 2 * C13100;
    const double C13105 = C13098 + C13099;
    const double C13104 = C13097 / C12145;
    const double C13103 = C13076 + C13096;
    const double C13109 = C13106 - C13018;
    const double C13108 = 2 * C13105;
    const double C13107 = C13103 + C13104;
    const double C13112 = C13109 * ae;
    const double C13111 = C13108 + C13081;
    const double C13110 = C13107 * C12519;
    const double C13115 = C13112 / C12145;
    const double C13114 = C13111 / C12161;
    const double C13113 = C13110 / C12145;
    const double C13116 = C13113 + C13114;
    const double C13117 = C13116 + C13115;
    const double C13143 = C12681 + C12265;
    const double C13142 = C12297 * C12148;
    const double C13141 = C12708 + C12377;
    const double C13140 = C12399 * C12148;
    const double C13139 = ae * C13420;
    const double C13138 = C12682 + C12269;
    const double C13137 = C12301 * C12148;
    const double C13149 = C13143 / C12161;
    const double C13148 = C13142 / C12145;
    const double C13147 = C13141 / C12161;
    const double C13146 = C13140 / C12145;
    const double C13145 = 2 * C13139;
    const double C13144 = C13137 / C12145;
    const double C13152 = C13148 + C13149;
    const double C13151 = C13146 + C13147;
    const double C13150 = C13138 + C13145;
    const double C13154 = be * C13152;
    const double C13153 = C13150 / C12161;
    const double C13156 = 2 * C13154;
    const double C13155 = C13144 + C13153;
    const double C13157 = C13156 - C12265;
    const double C13158 = C13157 * ae;
    const double C13159 = C13158 / C12145;
    const double C13160 = C13151 + C13159;
    const double C13172 = ae * C13421;
    const double C13171 = C12482 + C12793;
    const double C13170 = C12817 * C12422;
    const double C13169 = C12462 + C12789;
    const double C13168 = C12814 * C12422;
    const double C13167 = C12501 + C12850;
    const double C13166 = C12878 * C12422;
    const double C13178 = 2 * C13172;
    const double C13177 = C13170 / C12145;
    const double C13176 = C13169 / C12161;
    const double C13175 = C13168 / C12145;
    const double C13174 = C13167 / C12161;
    const double C13173 = C13166 / C12145;
    const double C13181 = C13171 + C13178;
    const double C13180 = C13175 + C13176;
    const double C13179 = C13173 + C13174;
    const double C13183 = C13181 / C12161;
    const double C13182 = be * C13180;
    const double C13185 = C13177 + C13183;
    const double C13184 = 2 * C13182;
    const double C13186 = C13184 - C12789;
    const double C13187 = C13186 * ae;
    const double C13188 = C13187 / C12145;
    const double C13189 = C13179 + C13188;
    const double C13221 = ae * C13422;
    const double C13220 = C12579 + C13020;
    const double C13219 = C13044 * C12519;
    const double C13218 = C12559 + C13016;
    const double C13217 = C13041 * C12519;
    const double C13216 = C12598 + C13077;
    const double C13215 = C13105 * C12519;
    const double C13227 = 2 * C13221;
    const double C13226 = C13219 / C12145;
    const double C13225 = C13218 / C12161;
    const double C13224 = C13217 / C12145;
    const double C13223 = C13216 / C12161;
    const double C13222 = C13215 / C12145;
    const double C13230 = C13220 + C13227;
    const double C13229 = C13224 + C13225;
    const double C13228 = C13222 + C13223;
    const double C13232 = C13230 / C12161;
    const double C13231 = be * C13229;
    const double C13234 = C13226 + C13232;
    const double C13233 = 2 * C13231;
    const double C13235 = C13233 - C13016;
    const double C13236 = C13235 * ae;
    const double C13237 = C13236 / C12145;
    const double C13238 = C13228 + C13237;
    const double C13478 = ae * C13004;
    const double C13477 = C12597 + C12595;
    const double C13476 = C13027 * C12519;
    const double C13475 = C13008 - C13024;
    const double C13474 = ae * C12777;
    const double C13473 = C12500 + C12498;
    const double C13472 = C12800 * C12422;
    const double C13471 = C12352 - C12304;
    const double C13470 = C12781 - C12797;
    const double C13469 = ae * C12252;
    const double C13468 = C12679 + C12287;
    const double C13467 = C12341 * C12148;
    const double C13466 = ae * C13027;
    const double C13465 = C12609 + C13036;
    const double C13464 = C13074 * C12519;
    const double C13463 = ae * C13075;
    const double C13462 = 2 * C13074;
    const double C13461 = C13102 * C12519;
    const double C13460 = C13059 - C13023;
    const double C13459 = ae * C12800;
    const double C13458 = C12512 + C12809;
    const double C13457 = C12847 * C12422;
    const double C13456 = ae * C12848;
    const double C13455 = 2 * C12847;
    const double C13454 = C12875 * C12422;
    const double C13453 = -2 * C12302;
    const double C13452 = C12832 - C12796;
    const double C13451 = ae * C12205;
    const double C13450 = C12679 * C12148;
    const double C13449 = 2 * C12678;
    const double C13448 = ae * C12679;
    const double C13447 = C12678 * C12148;
    const double C13446 = -2 * C12601;
    const double C13445 = ae * C12560;
    const double C13444 = C12597 * C12519;
    const double C13443 = 2 * C12609;
    const double C13442 = ae * C12597;
    const double C13441 = C12609 * C12519;
    const double C13440 = ae * C12463;
    const double C13439 = C12500 * C12422;
    const double C13438 = 2 * C12512;
    const double C13437 = ae * C12500;
    const double C13436 = C12512 * C12422;
    const double C13435 = C12382 - C12351;
    const double C13434 = C12460 - C12548;
    const double C13433 = -2 * C12504;
    const double C13432 = ae * C12341;
    const double C13431 = C12678 + C12363;
    const double C13430 = C12392 * C12148;
    const double C13429 = ae * C12375;
    const double C13428 = 2 * C12392;
    const double C13427 = C12407 * C12148;
    const double C13512 = 4 * C13478;
    const double C13511 = C13476 / C12145;
    const double C13510 = 4 * C13474;
    const double C13509 = C13472 / C12145;
    const double C13508 = 4 * C13469;
    const double C13507 = C13467 / C12145;
    const double C13506 = 6 * C13466;
    const double C13505 = C13464 / C12145;
    const double C13504 = 6 * C13463;
    const double C13503 = C13462 + C13072;
    const double C13502 = C13461 / C12145;
    const double C13501 = 6 * C13459;
    const double C13500 = C13457 / C12145;
    const double C13499 = 6 * C13456;
    const double C13498 = C13455 + C12845;
    const double C13497 = C13454 / C12145;
    const double C13496 = 4 * C13451;
    const double C13495 = C13450 / C12145;
    const double C13494 = 6 * C13448;
    const double C13493 = C13447 / C12145;
    const double C13492 = 4 * C13445;
    const double C13491 = C13444 / C12145;
    const double C13490 = 6 * C13442;
    const double C13489 = C13441 / C12145;
    const double C13488 = 4 * C13440;
    const double C13487 = C13439 / C12145;
    const double C13486 = 6 * C13437;
    const double C13485 = C13436 / C12145;
    const double C13484 = ae * C13434;
    const double C13483 = 6 * C13432;
    const double C13482 = C13430 / C12145;
    const double C13481 = 6 * C13429;
    const double C13480 = C13428 + C12390;
    const double C13479 = C13427 / C12145;
    const double C13528 = C13477 + C13512;
    const double C13527 = C13473 + C13510;
    const double C13526 = C13468 + C13508;
    const double C13525 = C13465 + C13506;
    const double C13524 = C13503 + C13504;
    const double C13523 = C13458 + C13501;
    const double C13522 = C13498 + C13499;
    const double C13521 = C12239 + C13496;
    const double C13520 = C12320 + C13494;
    const double C13519 = C12574 + C13492;
    const double C13518 = C12965 + C13490;
    const double C13517 = C12477 + C13488;
    const double C13516 = C12738 + C13486;
    const double C13515 = C13484 * C12156;
    const double C13514 = C13431 + C13483;
    const double C13513 = C13480 + C13481;
    const double C13544 = C13528 / C12161;
    const double C13543 = C13527 / C12161;
    const double C13542 = C13526 / C12161;
    const double C13541 = C13525 / C12161;
    const double C13540 = C13524 / C12161;
    const double C13539 = C13523 / C12161;
    const double C13538 = C13522 / C12161;
    const double C13537 = C13521 / C12161;
    const double C13536 = C13520 / C12161;
    const double C13535 = C13519 / C12161;
    const double C13534 = C13518 / C12161;
    const double C13533 = C13517 / C12161;
    const double C13532 = C13516 / C12161;
    const double C13531 = 2 * C13515;
    const double C13530 = C13514 / C12161;
    const double C13529 = C13513 / C12161;
    const double C13560 = C13511 + C13544;
    const double C13559 = C13509 + C13543;
    const double C13558 = C13507 + C13542;
    const double C13557 = C13505 + C13541;
    const double C13556 = C13502 + C13540;
    const double C13555 = C13500 + C13539;
    const double C13554 = C13497 + C13538;
    const double C13553 = C13495 + C13537;
    const double C13552 = C13493 + C13536;
    const double C13551 = C13491 + C13535;
    const double C13550 = C13489 + C13534;
    const double C13549 = C13487 + C13533;
    const double C13548 = C13485 + C13532;
    const double C13547 = C13531 / C12145;
    const double C13546 = C13482 + C13530;
    const double C13545 = C13479 + C13529;
    const double C13576 = ae * C13560;
    const double C13575 = C13550 + C13462;
    const double C13574 = C13557 * C12519;
    const double C13573 = ae * C13559;
    const double C13572 = C13548 + C13455;
    const double C13571 = C13555 * C12422;
    const double C13570 = ae * C13558;
    const double C13569 = C13552 + C13428;
    const double C13568 = C13546 * C12148;
    const double C13567 = ae * C13553;
    const double C13566 = C13552 * C12148;
    const double C13565 = ae * C13551;
    const double C13564 = C13550 * C12519;
    const double C13563 = ae * C13549;
    const double C13562 = C13548 * C12422;
    const double C13561 = C12556 - C13547;
    const double C13589 = 6 * C13576;
    const double C13588 = C13574 / C12145;
    const double C13587 = 6 * C13573;
    const double C13586 = C13571 / C12145;
    const double C13585 = 6 * C13570;
    const double C13584 = C13568 / C12145;
    const double C13583 = 6 * C13567;
    const double C13582 = C13566 / C12145;
    const double C13581 = 6 * C13565;
    const double C13580 = C13564 / C12145;
    const double C13579 = 6 * C13563;
    const double C13578 = C13562 / C12145;
    const double C13577 = ae * C13561;
    const double C13596 = C13575 + C13589;
    const double C13595 = C13572 + C13587;
    const double C13594 = C13569 + C13585;
    const double C13593 = C13449 + C13583;
    const double C13592 = C13443 + C13581;
    const double C13591 = C13438 + C13579;
    const double C13590 = -2 * C13577;
    const double C13602 = C13596 / C12161;
    const double C13601 = C13595 / C12161;
    const double C13600 = C13594 / C12161;
    const double C13599 = C13593 / C12161;
    const double C13598 = C13592 / C12161;
    const double C13597 = C13591 / C12161;
    const double C13608 = C13588 + C13602;
    const double C13607 = C13586 + C13601;
    const double C13606 = C13584 + C13600;
    const double C13605 = C13582 + C13599;
    const double C13604 = C13580 + C13598;
    const double C13603 = C13578 + C13597;
    const double gx200300 =
        C12381 * C12254 * C13280 -
        (((C13545 * C12148) / C12145 +
          (2 * C13546 + 2 * C12407 +
           6 * ae *
               ((C12375 * C12148) / C12145 +
                (2 * C12341 + C12338 + 4 * ae * C12299) / C12161)) /
              C12161) *
         std::pow(C13280, 2)) /
            2.0 +
        C12381 * C13280 * C12259;
    const double gx200030 = (C13280 * C12419 * C13435) / 2.0 +
                            (C13280 * C12250 * C12510) / C12145 +
                            C12250 * C12419 * C12259;
    const double gx200003 = (C12516 * C13280 * C13435) / 2.0 +
                            C12250 * C12254 * C12516 +
                            (C12250 * C13280 * C12607) / C12145;
    const double gx200210 = C12349 * C12471 * C13280 -
                            (C13280 * C13394 * C13545) / 2.0 +
                            C12349 * C13394 * C12259;
    const double gx200201 = C12349 * C12254 * C13396 -
                            (C13396 * C13280 * C13545) / 2.0 +
                            C12349 * C13280 * C12568;
    const double gx200021 = (C13396 * C13413 * C13435) / 2.0 +
                            C12250 * C12501 * C13396 + C12250 * C13413 * C12568;
    const double gx200120 = C12299 * C12501 * C13280 -
                            (C13280 * C13413 * C12407) / 2.0 +
                            C12299 * C13413 * C12259;
    const double gx200102 = C12299 * C12254 * C13414 -
                            (C13414 * C13280 * C12407) / 2.0 +
                            C12299 * C13280 * C12598;
    const double gx200012 = (C13414 * C13394 * C13435) / 2.0 +
                            C12250 * C12471 * C13414 + C12250 * C13394 * C12598;
    const double gx200111 = C12299 * C12471 * C13396 -
                            (C13396 * C13394 * C12407) / 2.0 +
                            C12299 * C13394 * C12568;
    const double gx020300 = C12698 * C12707 * C13280 -
                            (C13280 * C12629 * C13605) / 2.0 +
                            C12698 * C12629 * C12259;
    const double gx020030 = (C13280 * C12717 * C13453) / 2.0 +
                            2 * C12143 * C12890 * C13280 +
                            2 * C12143 * C12717 * C12259;
    const double gx020003 = (C12516 * C12629 * C13453) / 2.0 +
                            2 * C12143 * C12707 * C12516 +
                            (2 * C12143 * C12629 * C12607) / C12145;
    const double gx020210 = (C13280 * C12682 * C12824) / C12145 -
                            (C13280 * C13334 * C13552) / 2.0 +
                            C12682 * C13334 * C12259;
    const double gx020201 = C12682 * C12707 * C13396 -
                            (C13396 * C12629 * C13552) / 2.0 +
                            C12682 * C12629 * C12568;
    const double gx020021 = (C13396 * C13416 * C13453) / 2.0 +
                            2 * C12143 * C12880 * C13396 +
                            2 * C12143 * C13416 * C12568;
    const double gx020120 = C12205 * C12880 * C13280 -
                            (C13280 * C13416 * C12678) / 2.0 +
                            C12205 * C13416 * C12259;
    const double gx020102 = C12205 * C12707 * C13414 -
                            (C13414 * C12629 * C12678) / 2.0 +
                            C12205 * C12629 * C12598;
    const double gx020012 = (C13414 * C13334 * C13453) / 2.0 +
                            (C13414 * 2 * C12143 * C12824) / C12145 +
                            2 * C12143 * C13334 * C12598;
    const double gx020111 = (C13396 * C12205 * C12824) / C12145 -
                            (C13396 * C13334 * C12678) / 2.0 +
                            C12205 * C13334 * C12568;
    const double gx002300 = C12698 * C12254 * C12910 -
                            (C12910 * C13280 * C13605) / 2.0 +
                            C12698 * C13280 * C12938;
    const double gx002030 = (C12910 * C12419 * C13453) / 2.0 +
                            (C12910 * 2 * C12143 * C12510) / C12145 +
                            2 * C12143 * C12419 * C12938;
    const double gx002003 = (C12944 * C13280 * C13453) / 2.0 +
                            2 * C12143 * C12254 * C12944 +
                            2 * C12143 * C13280 * C13117;
    const double gx002210 = C12682 * C12471 * C12910 -
                            (C12910 * C13394 * C13552) / 2.0 +
                            C12682 * C13394 * C12938;
    const double gx002201 = C12682 * C12254 * C13353 -
                            (C13353 * C13280 * C13552) / 2.0 +
                            (C12682 * C13280 * C13051) / C12145;
    const double gx002021 = (C13353 * C13413 * C13453) / 2.0 +
                            2 * C12143 * C12501 * C13353 +
                            (2 * C12143 * C13413 * C13051) / C12145;
    const double gx002120 = C12205 * C12501 * C12910 -
                            (C12910 * C13413 * C12678) / 2.0 +
                            C12205 * C13413 * C12938;
    const double gx002102 = C12205 * C12254 * C13418 -
                            (C13418 * C13280 * C12678) / 2.0 +
                            C12205 * C13280 * C13107;
    const double gx002012 = (C13418 * C13394 * C13453) / 2.0 +
                            2 * C12143 * C12471 * C13418 +
                            2 * C12143 * C13394 * C13107;
    const double gx002111 = C12205 * C12471 * C13353 -
                            (C13353 * C13394 * C12678) / 2.0 +
                            (C12205 * C13394 * C13051) / C12145;
    const double gx110300 = C13155 * C12689 * C13280 -
                            (C13280 * C12140 * C13606) / 2.0 +
                            C13155 * C12140 * C12259;
    const double gx110030 = (C13280 * C13164 * C13471) / 2.0 +
                            C12204 * C13189 * C13280 + C12204 * C13164 * C12259;
    const double gx110003 = (C12516 * C12140 * C13471) / 2.0 +
                            C12204 * C12689 * C12516 +
                            (C12204 * C12140 * C12607) / C12145;
    const double gx110210 = C12301 * C12837 * C13280 -
                            (C13280 * C13331 * C13546) / 2.0 +
                            C12301 * C13331 * C12259;
    const double gx110201 = C12301 * C12689 * C13396 -
                            (C13396 * C12140 * C13546) / 2.0 +
                            C12301 * C12140 * C12568;
    const double gx110021 = (C13396 * C13421 * C13471) / 2.0 +
                            C12204 * C12878 * C13396 + C12204 * C13421 * C12568;
    const double gx110120 = C12252 * C12878 * C13280 -
                            (C13280 * C13421 * C12392) / 2.0 +
                            C12252 * C13421 * C12259;
    const double gx110102 = C12252 * C12689 * C13414 -
                            (C13414 * C12140 * C12392) / 2.0 +
                            C12252 * C12140 * C12598;
    const double gx110012 = (C13414 * C13331 * C13471) / 2.0 +
                            C12204 * C12837 * C13414 + C12204 * C13331 * C12598;
    const double gx110111 = C12252 * C12837 * C13396 -
                            (C13396 * C13331 * C12392) / 2.0 +
                            C12252 * C13331 * C12568;
    const double gx101300 = C13155 * C12254 * C12142 -
                            (C12142 * C13280 * C13606) / 2.0 +
                            C13155 * C13280 * C12930;
    const double gx101030 = (C12142 * C12419 * C13471) / 2.0 +
                            (C12142 * C12204 * C12510) / C12145 +
                            C12204 * C12419 * C12930;
    const double gx101003 = (C13213 * C13280 * C13471) / 2.0 +
                            C12204 * C12254 * C13213 + C12204 * C13280 * C13238;
    const double gx101210 = C12301 * C12471 * C12142 -
                            (C12142 * C13394 * C13546) / 2.0 +
                            C12301 * C13394 * C12930;
    const double gx101201 = C12301 * C12254 * C13350 -
                            (C13350 * C13280 * C13546) / 2.0 +
                            C12301 * C13280 * C13064;
    const double gx101021 = (C13350 * C13413 * C13471) / 2.0 +
                            C12204 * C12501 * C13350 + C12204 * C13413 * C13064;
    const double gx101120 = C12252 * C12501 * C12142 -
                            (C12142 * C13413 * C12392) / 2.0 +
                            C12252 * C13413 * C12930;
    const double gx101102 = C12252 * C12254 * C13422 -
                            (C13422 * C13280 * C12392) / 2.0 +
                            C12252 * C13280 * C13105;
    const double gx101012 = (C13422 * C13394 * C13471) / 2.0 +
                            C12204 * C12471 * C13422 + C12204 * C13394 * C13105;
    const double gx101111 = C12252 * C12471 * C13350 -
                            (C13350 * C13394 * C12392) / 2.0 +
                            C12252 * C13394 * C13064;
    const double gx011300 = C12698 * C12689 * C12142 -
                            (C12142 * C12140 * C13605) / 2.0 +
                            C12698 * C12140 * C12930;
    const double gx011030 = (C12142 * C13164 * C13453) / 2.0 +
                            2 * C12143 * C13189 * C12142 +
                            2 * C12143 * C13164 * C12930;
    const double gx011003 = (C13213 * C12140 * C13453) / 2.0 +
                            2 * C12143 * C12689 * C13213 +
                            2 * C12143 * C12140 * C13238;
    const double gx011210 = C12682 * C12837 * C12142 -
                            (C12142 * C13331 * C13552) / 2.0 +
                            C12682 * C13331 * C12930;
    const double gx011201 = C12682 * C12689 * C13350 -
                            (C13350 * C12140 * C13552) / 2.0 +
                            C12682 * C12140 * C13064;
    const double gx011021 = (C13350 * C13421 * C13453) / 2.0 +
                            2 * C12143 * C12878 * C13350 +
                            2 * C12143 * C13421 * C13064;
    const double gx011120 = C12205 * C12878 * C12142 -
                            (C12142 * C13421 * C12678) / 2.0 +
                            C12205 * C13421 * C12930;
    const double gx011102 = C12205 * C12689 * C13422 -
                            (C13422 * C12140 * C12678) / 2.0 +
                            C12205 * C12140 * C13105;
    const double gx011012 = (C13422 * C13331 * C13453) / 2.0 +
                            2 * C12143 * C12837 * C13422 +
                            2 * C12143 * C13331 * C13105;
    const double gx011111 = C12205 * C12837 * C13350 -
                            (C13350 * C13331 * C12678) / 2.0 +
                            C12205 * C13331 * C13064;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gx110210 - std::sqrt(15. / 8.0) * gx110030);
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gx110111;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gx110012 + std::sqrt(9. / 8.0) * gx110210 +
               std::sqrt(9. / 8.0) * gx110030);
    gx[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gx110003 - std::sqrt(6.75) * gx110201 -
              std::sqrt(6.75) * gx110021);
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gx110102 - (std::sqrt(9. / 8.0) * gx110120 +
                                           std::sqrt(9. / 8.0) * gx110300));
    gx[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gx110201 - std::sqrt(22.5) * gx110021);
    gx[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gx110300 + std::sqrt(135. / 8.0) * gx110120);
    gx[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gx011210 - std::sqrt(15. / 8.0) * gx011030);
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gx011111;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gx011012 + std::sqrt(9. / 8.0) * gx011210 +
               std::sqrt(9. / 8.0) * gx011030);
    gx[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gx011003 - std::sqrt(6.75) * gx011201 -
              std::sqrt(6.75) * gx011021);
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gx011102 - (std::sqrt(9. / 8.0) * gx011120 +
                                           std::sqrt(9. / 8.0) * gx011300));
    gx[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gx011201 - std::sqrt(22.5) * gx011021);
    gx[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gx011300 + std::sqrt(135. / 8.0) * gx011120);
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(1.25 / 8.0) * gx200030 - std::sqrt(11.25 / 8.0) * gx200210 +
         std::sqrt(1.25 / 8.0) * gx020030 - std::sqrt(11.25 / 8.0) * gx020210 -
         std::sqrt(5.0 / 8.0) * gx002030 + std::sqrt(45. / 8.0) * gx002210);
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(15.0) * gx002111 -
              (std::sqrt(3.75) * gx020111 + std::sqrt(3.75) * gx200111));
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gx200030 + std::sqrt(0.75 / 8.0) * gx200210 +
         std::sqrt(1.5) * gx200012 + std::sqrt(0.75 / 8.0) * gx020030 +
         std::sqrt(0.75 / 8.0) * gx020210 + std::sqrt(1.5) * gx020012 -
         std::sqrt(3.0 / 8.0) * gx002030 - std::sqrt(3.0 / 8.0) * gx002210 -
         std::sqrt(6.0) * gx002012);
    gx[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (-0.5 * gx200003 + 0.75 * gx200201 + 0.75 * gx200021 -
              0.5 * gx020003 + 0.75 * gx020201 + 0.75 * gx020021 + gx002003 -
              1.5 * gx002201 - 1.5 * gx002021);
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gx200300 + std::sqrt(0.75 / 8.0) * gx200120 -
         std::sqrt(1.5) * gx200102 + std::sqrt(0.75 / 8.0) * gx020300 +
         std::sqrt(0.75 / 8.0) * gx020120 - std::sqrt(1.5) * gx020102 -
         std::sqrt(3.0 / 8.0) * gx002300 - std::sqrt(3.0 / 8.0) * gx002120 +
         std::sqrt(6.0) * gx002102);
    gx[(Ai + 2) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(1.875) * gx200021 - std::sqrt(1.875) * gx200201 -
              std::sqrt(1.875) * gx020201 + std::sqrt(1.875) * gx020021 +
              std::sqrt(7.5) * gx002201 - std::sqrt(7.5) * gx002021);
    gx[(Ai + 2) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx002300 -
         (std::sqrt(11.25 / 8.0) * gx020120 + std::sqrt(1.25 / 8.0) * gx020300 +
          std::sqrt(11.25 / 8.0) * gx200120 +
          std::sqrt(1.25 / 8.0) * gx200300) +
         std::sqrt(45.0 / 8.0) * gx002120);
    gx[(Ai + 3) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gx101210 - std::sqrt(15. / 8.0) * gx101030);
    gx[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gx101111;
    gx[(Ai + 3) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gx101012 + std::sqrt(9. / 8.0) * gx101210 +
               std::sqrt(9. / 8.0) * gx101030);
    gx[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gx101003 - std::sqrt(6.75) * gx101201 -
              std::sqrt(6.75) * gx101021);
    gx[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gx101102 - (std::sqrt(9. / 8.0) * gx101120 +
                                           std::sqrt(9. / 8.0) * gx101300));
    gx[(Ai + 3) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gx101201 - std::sqrt(22.5) * gx101021);
    gx[(Ai + 3) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gx101300 + std::sqrt(135. / 8.0) * gx101120);
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(33.75 / 8.0) * gx200210 - std::sqrt(3.75 / 8.0) * gx200030 +
         std::sqrt(3.75 / 8.0) * gx020030 - std::sqrt(33.75 / 8.0) * gx020210);
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(11.25) * gx200111 - std::sqrt(11.25) * gx020111);
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(2.25 / 8.0) * gx020030 -
              (std::sqrt(4.5) * gx200012 + std::sqrt(2.25 / 8.0) * gx200210 +
               std::sqrt(2.25 / 8.0) * gx200030) +
              std::sqrt(2.25 / 8.0) * gx020210 + std::sqrt(4.5) * gx020012);
    gx[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(0.75) * gx200003 - std::sqrt(1.6875) * gx200201 -
              std::sqrt(1.6875) * gx200021 - std::sqrt(0.75) * gx020003 +
              std::sqrt(1.6875) * gx020201 + std::sqrt(1.6875) * gx020021);
    gx[(Ai + 4) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(4.5) * gx200102 -
         (std::sqrt(2.25 / 8.0) * gx200120 + std::sqrt(2.25 / 8.0) * gx200300) +
         std::sqrt(2.25 / 8.0) * gx020300 + std::sqrt(2.25 / 8.0) * gx020120 -
         std::sqrt(4.5) * gx020102);
    gx[(Ai + 4) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(5.625) * gx200201 - std::sqrt(5.625) * gx200021 -
              std::sqrt(5.625) * gx020201 + std::sqrt(5.625) * gx020021);
    gx[(Ai + 4) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gx200300 + std::sqrt(33.75 / 8.0) * gx200120 -
         std::sqrt(3.75 / 8.0) * gx020300 - std::sqrt(33.75 / 8.0) * gx020120);
    const double gy200300 = C12415 * C12177 * C13280 +
                            (C13280 * C12141 * C13433) / 2.0 +
                            C12141 * C12177 * C12259;
    const double gy200030 = C12366 * C12503 * C13280 -
                            (C13280 * C12134 * C13603) / 2.0 +
                            C12134 * C12503 * C12259;
    const double gy200003 = C12366 * C12177 * C12516 +
                            (C12516 * C12134 * C13433) / 2.0 +
                            (C12134 * C12177 * C12607) / C12145;
    const double gy200210 = C12410 * C12463 * C13280 -
                            (C13280 * C12137 * C12512) / 2.0 +
                            C12137 * C12463 * C12259;
    const double gy200201 = C12410 * C12177 * C13396 +
                            (C13396 * C12137 * C13433) / 2.0 +
                            C12137 * C12177 * C12568;
    const double gy200021 = C12366 * C12482 * C13396 -
                            (C13396 * C12134 * C13548) / 2.0 +
                            C12134 * C12482 * C12568;
    const double gy200120 = (C13280 * C12482 * C12393) / C12145 -
                            (C13280 * C12135 * C13548) / 2.0 +
                            C12135 * C12482 * C12259;
    const double gy200102 = (C13414 * 2 * C12157 * C12393) / C12145 +
                            (C13414 * C12135 * C13433) / 2.0 +
                            C12135 * C12177 * C12598;
    const double gy200012 = C12366 * C12463 * C13414 -
                            (C13414 * C12134 * C12512) / 2.0 +
                            C12134 * C12463 * C12598;
    const double gy200111 = (C13396 * C12463 * C12393) / C12145 -
                            (C13396 * C12135 * C12512) / 2.0 +
                            C12135 * C12463 * C12568;
    const double gy020300 = (C13280 * C12685 * C12713) / C12145 +
                            (C13280 * C12630 * C13452) / 2.0 +
                            C12630 * C12685 * C12259;
    const double gy020030 =
        C12260 * C12874 * C13280 -
        (C13280 * C13389 *
         ((C13554 * C12422) / C12145 +
          (2 * C13555 + 2 * C12875 +
           6 * ae *
               ((C12848 * C12422) / C12145 +
                (2 * C12800 + C12810 + 4 * ae * C12806) / C12161)) /
              C12161)) /
            2.0 +
        C13389 * C12874 * C12259;
    const double gy020003 = C12260 * C12685 * C12516 +
                            (C12516 * C13389 * C13452) / 2.0 +
                            (C13389 * C12685 * C12607) / C12145;
    const double gy020210 = C12708 * C12806 * C13280 -
                            (C13280 * C13415 * C12875) / 2.0 +
                            C13415 * C12806 * C12259;
    const double gy020201 = C12708 * C12685 * C13396 +
                            (C13396 * C13415 * C13452) / 2.0 +
                            C13415 * C12685 * C12568;
    const double gy020021 = C12260 * C12843 * C13396 -
                            (C13396 * C13389 * C13554) / 2.0 +
                            C13389 * C12843 * C12568;
    const double gy020120 = C12313 * C12843 * C13280 -
                            (C13280 * C13392 * C13554) / 2.0 +
                            C13392 * C12843 * C12259;
    const double gy020102 = C12313 * C12685 * C13414 +
                            (C13414 * C13392 * C13452) / 2.0 +
                            C13392 * C12685 * C12598;
    const double gy020012 = C12260 * C12806 * C13414 -
                            (C13414 * C13389 * C12875) / 2.0 +
                            C13389 * C12806 * C12598;
    const double gy020111 = C12313 * C12806 * C13396 -
                            (C13396 * C13392 * C12875) / 2.0 +
                            C13392 * C12806 * C12568;
    const double gy002300 = (C12910 * 2 * C12157 * C12713) / C12145 +
                            (C12910 * C12630 * C13433) / 2.0 +
                            C12630 * C12177 * C12938;
    const double gy002030 = C12260 * C12503 * C12910 -
                            (C12910 * C13389 * C13603) / 2.0 +
                            C13389 * C12503 * C12938;
    const double gy002003 = C12260 * C12177 * C12944 +
                            (C12944 * C13389 * C13433) / 2.0 +
                            C13389 * C12177 * C13117;
    const double gy002210 = C12708 * C12463 * C12910 -
                            (C12910 * C13415 * C12512) / 2.0 +
                            C13415 * C12463 * C12938;
    const double gy002201 = C12708 * C12177 * C13353 +
                            (C13353 * C13415 * C13433) / 2.0 +
                            (C13415 * C12177 * C13051) / C12145;
    const double gy002021 = C12260 * C12482 * C13353 -
                            (C13353 * C13389 * C13548) / 2.0 +
                            (C13389 * C12482 * C13051) / C12145;
    const double gy002120 = C12313 * C12482 * C12910 -
                            (C12910 * C13392 * C13548) / 2.0 +
                            C13392 * C12482 * C12938;
    const double gy002102 = C12313 * C12177 * C13418 +
                            (C13418 * C13392 * C13433) / 2.0 +
                            C13392 * C12177 * C13107;
    const double gy002012 = C12260 * C12463 * C13418 -
                            (C13418 * C13389 * C12512) / 2.0 +
                            C13389 * C12463 * C13107;
    const double gy002111 = C12313 * C12463 * C13353 -
                            (C13353 * C13392 * C12512) / 2.0 +
                            (C13392 * C12463 * C13051) / C12145;
    const double gy110300 = C13160 * C12464 * C13280 +
                            (C13280 * C13136 * C13470) / 2.0 +
                            C13136 * C12464 * C12259;
    const double gy110030 = C12308 * C13185 * C13280 -
                            (C13280 * C12132 * C13607) / 2.0 +
                            C12132 * C13185 * C12259;
    const double gy110003 = C12308 * C12464 * C12516 +
                            (C12516 * C12132 * C13470) / 2.0 +
                            (C12132 * C12464 * C12607) / C12145;
    const double gy110210 = C12399 * C12777 * C13280 -
                            (C13280 * C13420 * C12847) / 2.0 +
                            C13420 * C12777 * C12259;
    const double gy110201 = C12399 * C12464 * C13396 +
                            (C13396 * C13420 * C13470) / 2.0 +
                            C13420 * C12464 * C12568;
    const double gy110021 = C12308 * C12817 * C13396 -
                            (C13396 * C12132 * C13555) / 2.0 +
                            C12132 * C12817 * C12568;
    const double gy110120 = C12367 * C12817 * C13280 -
                            (C13280 * C12136 * C13555) / 2.0 +
                            C12136 * C12817 * C12259;
    const double gy110102 = C12367 * C12464 * C13414 +
                            (C13414 * C12136 * C13470) / 2.0 +
                            C12136 * C12464 * C12598;
    const double gy110012 = C12308 * C12777 * C13414 -
                            (C13414 * C12132 * C12847) / 2.0 +
                            C12132 * C12777 * C12598;
    const double gy110111 = C12367 * C12777 * C13396 -
                            (C13396 * C12136 * C12847) / 2.0 +
                            C12136 * C12777 * C12568;
    const double gy101300 = C13160 * C12177 * C12142 +
                            (C12142 * C13136 * C13433) / 2.0 +
                            C13136 * C12177 * C12930;
    const double gy101030 = C12308 * C12503 * C12142 -
                            (C12142 * C12132 * C13603) / 2.0 +
                            C12132 * C12503 * C12930;
    const double gy101003 = C12308 * C12177 * C13213 +
                            (C13213 * C12132 * C13433) / 2.0 +
                            C12132 * C12177 * C13238;
    const double gy101210 = C12399 * C12463 * C12142 -
                            (C12142 * C13420 * C12512) / 2.0 +
                            C13420 * C12463 * C12930;
    const double gy101201 = C12399 * C12177 * C13350 +
                            (C13350 * C13420 * C13433) / 2.0 +
                            C13420 * C12177 * C13064;
    const double gy101021 = C12308 * C12482 * C13350 -
                            (C13350 * C12132 * C13548) / 2.0 +
                            C12132 * C12482 * C13064;
    const double gy101120 = C12367 * C12482 * C12142 -
                            (C12142 * C12136 * C13548) / 2.0 +
                            C12136 * C12482 * C12930;
    const double gy101102 = C12367 * C12177 * C13422 +
                            (C13422 * C12136 * C13433) / 2.0 +
                            C12136 * C12177 * C13105;
    const double gy101012 = C12308 * C12463 * C13422 -
                            (C13422 * C12132 * C12512) / 2.0 +
                            C12132 * C12463 * C13105;
    const double gy101111 = C12367 * C12463 * C13350 -
                            (C13350 * C12136 * C12512) / 2.0 +
                            C12136 * C12463 * C13064;
    const double gy011300 = (C12142 * C12464 * C12713) / C12145 +
                            (C12142 * C12630 * C13470) / 2.0 +
                            C12630 * C12464 * C12930;
    const double gy011030 = C12260 * C13185 * C12142 -
                            (C12142 * C13389 * C13607) / 2.0 +
                            C13389 * C13185 * C12930;
    const double gy011003 = C12260 * C12464 * C13213 +
                            (C13213 * C13389 * C13470) / 2.0 +
                            C13389 * C12464 * C13238;
    const double gy011210 = C12708 * C12777 * C12142 -
                            (C12142 * C13415 * C12847) / 2.0 +
                            C13415 * C12777 * C12930;
    const double gy011201 = C12708 * C12464 * C13350 +
                            (C13350 * C13415 * C13470) / 2.0 +
                            C13415 * C12464 * C13064;
    const double gy011021 = C12260 * C12817 * C13350 -
                            (C13350 * C13389 * C13555) / 2.0 +
                            C13389 * C12817 * C13064;
    const double gy011120 = C12313 * C12817 * C12142 -
                            (C12142 * C13392 * C13555) / 2.0 +
                            C13392 * C12817 * C12930;
    const double gy011102 = C12313 * C12464 * C13422 +
                            (C13422 * C13392 * C13470) / 2.0 +
                            C13392 * C12464 * C13105;
    const double gy011012 = C12260 * C12777 * C13422 -
                            (C13422 * C13389 * C12847) / 2.0 +
                            C13389 * C12777 * C13105;
    const double gy011111 = C12313 * C12777 * C13350 -
                            (C13350 * C13392 * C12847) / 2.0 +
                            C13392 * C12777 * C13064;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gy110210 - std::sqrt(15. / 8.0) * gy110030);
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gy110111;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gy110012 + std::sqrt(9. / 8.0) * gy110210 +
               std::sqrt(9. / 8.0) * gy110030);
    gy[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gy110003 - std::sqrt(6.75) * gy110201 -
              std::sqrt(6.75) * gy110021);
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gy110102 - (std::sqrt(9. / 8.0) * gy110120 +
                                           std::sqrt(9. / 8.0) * gy110300));
    gy[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gy110201 - std::sqrt(22.5) * gy110021);
    gy[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gy110300 + std::sqrt(135. / 8.0) * gy110120);
    gy[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gy011210 - std::sqrt(15. / 8.0) * gy011030);
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gy011111;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gy011012 + std::sqrt(9. / 8.0) * gy011210 +
               std::sqrt(9. / 8.0) * gy011030);
    gy[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gy011003 - std::sqrt(6.75) * gy011201 -
              std::sqrt(6.75) * gy011021);
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gy011102 - (std::sqrt(9. / 8.0) * gy011120 +
                                           std::sqrt(9. / 8.0) * gy011300));
    gy[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gy011201 - std::sqrt(22.5) * gy011021);
    gy[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gy011300 + std::sqrt(135. / 8.0) * gy011120);
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(1.25 / 8.0) * gy200030 - std::sqrt(11.25 / 8.0) * gy200210 +
         std::sqrt(1.25 / 8.0) * gy020030 - std::sqrt(11.25 / 8.0) * gy020210 -
         std::sqrt(5.0 / 8.0) * gy002030 + std::sqrt(45. / 8.0) * gy002210);
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(15.0) * gy002111 -
              (std::sqrt(3.75) * gy020111 + std::sqrt(3.75) * gy200111));
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gy200030 + std::sqrt(0.75 / 8.0) * gy200210 +
         std::sqrt(1.5) * gy200012 + std::sqrt(0.75 / 8.0) * gy020030 +
         std::sqrt(0.75 / 8.0) * gy020210 + std::sqrt(1.5) * gy020012 -
         std::sqrt(3.0 / 8.0) * gy002030 - std::sqrt(3.0 / 8.0) * gy002210 -
         std::sqrt(6.0) * gy002012);
    gy[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (-0.5 * gy200003 + 0.75 * gy200201 + 0.75 * gy200021 -
              0.5 * gy020003 + 0.75 * gy020201 + 0.75 * gy020021 + gy002003 -
              1.5 * gy002201 - 1.5 * gy002021);
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gy200300 + std::sqrt(0.75 / 8.0) * gy200120 -
         std::sqrt(1.5) * gy200102 + std::sqrt(0.75 / 8.0) * gy020300 +
         std::sqrt(0.75 / 8.0) * gy020120 - std::sqrt(1.5) * gy020102 -
         std::sqrt(3.0 / 8.0) * gy002300 - std::sqrt(3.0 / 8.0) * gy002120 +
         std::sqrt(6.0) * gy002102);
    gy[(Ai + 2) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(1.875) * gy200021 - std::sqrt(1.875) * gy200201 -
              std::sqrt(1.875) * gy020201 + std::sqrt(1.875) * gy020021 +
              std::sqrt(7.5) * gy002201 - std::sqrt(7.5) * gy002021);
    gy[(Ai + 2) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy002300 -
         (std::sqrt(11.25 / 8.0) * gy020120 + std::sqrt(1.25 / 8.0) * gy020300 +
          std::sqrt(11.25 / 8.0) * gy200120 +
          std::sqrt(1.25 / 8.0) * gy200300) +
         std::sqrt(45.0 / 8.0) * gy002120);
    gy[(Ai + 3) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gy101210 - std::sqrt(15. / 8.0) * gy101030);
    gy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gy101111;
    gy[(Ai + 3) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gy101012 + std::sqrt(9. / 8.0) * gy101210 +
               std::sqrt(9. / 8.0) * gy101030);
    gy[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gy101003 - std::sqrt(6.75) * gy101201 -
              std::sqrt(6.75) * gy101021);
    gy[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gy101102 - (std::sqrt(9. / 8.0) * gy101120 +
                                           std::sqrt(9. / 8.0) * gy101300));
    gy[(Ai + 3) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gy101201 - std::sqrt(22.5) * gy101021);
    gy[(Ai + 3) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gy101300 + std::sqrt(135. / 8.0) * gy101120);
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(33.75 / 8.0) * gy200210 - std::sqrt(3.75 / 8.0) * gy200030 +
         std::sqrt(3.75 / 8.0) * gy020030 - std::sqrt(33.75 / 8.0) * gy020210);
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(11.25) * gy200111 - std::sqrt(11.25) * gy020111);
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(2.25 / 8.0) * gy020030 -
              (std::sqrt(4.5) * gy200012 + std::sqrt(2.25 / 8.0) * gy200210 +
               std::sqrt(2.25 / 8.0) * gy200030) +
              std::sqrt(2.25 / 8.0) * gy020210 + std::sqrt(4.5) * gy020012);
    gy[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(0.75) * gy200003 - std::sqrt(1.6875) * gy200201 -
              std::sqrt(1.6875) * gy200021 - std::sqrt(0.75) * gy020003 +
              std::sqrt(1.6875) * gy020201 + std::sqrt(1.6875) * gy020021);
    gy[(Ai + 4) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(4.5) * gy200102 -
         (std::sqrt(2.25 / 8.0) * gy200120 + std::sqrt(2.25 / 8.0) * gy200300) +
         std::sqrt(2.25 / 8.0) * gy020300 + std::sqrt(2.25 / 8.0) * gy020120 -
         std::sqrt(4.5) * gy020102);
    gy[(Ai + 4) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(5.625) * gy200201 - std::sqrt(5.625) * gy200021 -
              std::sqrt(5.625) * gy020201 + std::sqrt(5.625) * gy020021);
    gy[(Ai + 4) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gy200300 + std::sqrt(33.75 / 8.0) * gy200120 -
         std::sqrt(3.75 / 8.0) * gy020300 - std::sqrt(33.75 / 8.0) * gy020120);
    const double gz200300 = C12415 * C13280 * C12178 +
                            C12141 * C12254 * C12178 +
                            (C12141 * C13280 * C13590) / 2.0;
    const double gz200030 = C12366 * C12419 * C12178 +
                            (2 * C12158 * C12134 * C12510) / C12145 +
                            (C12134 * C12419 * C13590) / 2.0;
    const double gz200003 = C12366 * C13280 * C12600 +
                            C12134 * C12254 * C12600 -
                            (C12134 * C13280 * C13604) / 2.0;
    const double gz200210 = C12410 * C13394 * C12178 +
                            C12137 * C12471 * C12178 +
                            (C12137 * C13394 * C13446) / 2.0;
    const double gz200201 = C12410 * C13280 * C12560 +
                            C12137 * C12254 * C12560 -
                            (C12137 * C13280 * C12609) / 2.0;
    const double gz200021 = C12366 * C13413 * C12560 +
                            C12134 * C12501 * C12560 -
                            (C12134 * C13413 * C12609) / 2.0;
    const double gz200120 = (2 * C12158 * C13413 * C12393) / C12145 +
                            C12135 * C12501 * C12178 +
                            (C12135 * C13413 * C13446) / 2.0;
    const double gz200102 = (C12579 * C13280 * C12393) / C12145 +
                            C12135 * C12254 * C12579 -
                            (C12135 * C13280 * C13550) / 2.0;
    const double gz200012 = C12366 * C13394 * C12579 +
                            C12134 * C12471 * C12579 -
                            (C12134 * C13394 * C13550) / 2.0;
    const double gz200111 = (C12560 * C13394 * C12393) / C12145 +
                            C12135 * C12471 * C12560 -
                            (C12135 * C13394 * C12609) / 2.0;
    const double gz020300 = (2 * C12158 * C12629 * C12713) / C12145 +
                            C12630 * C12707 * C12178 +
                            (C12630 * C12629 * C13446) / 2.0;
    const double gz020030 = C12260 * C12717 * C12178 +
                            C13389 * C12890 * C12178 +
                            (C13389 * C12717 * C13446) / 2.0;
    const double gz020003 = C12260 * C12629 * C12600 +
                            C13389 * C12707 * C12600 -
                            (C13389 * C12629 * C13604) / 2.0;
    const double gz020210 = C12708 * C13334 * C12178 +
                            (2 * C12158 * C13415 * C12824) / C12145 +
                            (C13415 * C13334 * C13446) / 2.0;
    const double gz020201 = C12708 * C12629 * C12560 +
                            C13415 * C12707 * C12560 -
                            (C13415 * C12629 * C12609) / 2.0;
    const double gz020021 = C12260 * C13416 * C12560 +
                            C13389 * C12880 * C12560 -
                            (C13389 * C13416 * C12609) / 2.0;
    const double gz020120 = C12313 * C13416 * C12178 +
                            C13392 * C12880 * C12178 +
                            (C13392 * C13416 * C13446) / 2.0;
    const double gz020102 = C12313 * C12629 * C12579 +
                            C13392 * C12707 * C12579 -
                            (C13392 * C12629 * C13550) / 2.0;
    const double gz020012 = C12260 * C13334 * C12579 +
                            (C12579 * C13389 * C12824) / C12145 -
                            (C13389 * C13334 * C13550) / 2.0;
    const double gz020111 = C12313 * C13334 * C12560 +
                            (C12560 * C13392 * C12824) / C12145 -
                            (C13392 * C13334 * C12609) / 2.0;
    const double gz002300 = (C12929 * C13280 * C12713) / C12145 +
                            C12630 * C12254 * C12929 +
                            (C12630 * C13280 * C13460) / 2.0;
    const double gz002030 = C12260 * C12419 * C12929 +
                            (C12929 * C13389 * C12510) / C12145 +
                            (C13389 * C12419 * C13460) / 2.0;
    const double gz002003 =
        C12260 * C13280 * C13101 + C13389 * C12254 * C13101 -
        (C13389 * C13280 *
         ((C13556 * C12519) / C12145 +
          (2 * C13557 + 2 * C13102 +
           6 * ae *
               ((C13075 * C12519) / C12145 +
                (2 * C13027 + C13037 + 4 * ae * C13033) / C12161)) /
              C12161)) /
            2.0;
    const double gz002210 = C12708 * C13394 * C12929 +
                            C13415 * C12471 * C12929 +
                            (C13415 * C13394 * C13460) / 2.0;
    const double gz002201 = C12708 * C13280 * C13033 +
                            C13415 * C12254 * C13033 -
                            (C13415 * C13280 * C13102) / 2.0;
    const double gz002021 = C12260 * C13413 * C13033 +
                            C13389 * C12501 * C13033 -
                            (C13389 * C13413 * C13102) / 2.0;
    const double gz002120 = C12313 * C13413 * C12929 +
                            C13392 * C12501 * C12929 +
                            (C13392 * C13413 * C13460) / 2.0;
    const double gz002102 = C12313 * C13280 * C13070 +
                            C13392 * C12254 * C13070 -
                            (C13392 * C13280 * C13556) / 2.0;
    const double gz002012 = C12260 * C13394 * C13070 +
                            C13389 * C12471 * C13070 -
                            (C13389 * C13394 * C13556) / 2.0;
    const double gz002111 = C12313 * C13394 * C13033 +
                            C13392 * C12471 * C13033 -
                            (C13392 * C13394 * C13102) / 2.0;
    const double gz110300 = C13160 * C12140 * C12178 +
                            C13136 * C12689 * C12178 +
                            (C13136 * C12140 * C13446) / 2.0;
    const double gz110030 = C12308 * C13164 * C12178 +
                            C12132 * C13189 * C12178 +
                            (C12132 * C13164 * C13446) / 2.0;
    const double gz110003 = C12308 * C12140 * C12600 +
                            C12132 * C12689 * C12600 -
                            (C12132 * C12140 * C13604) / 2.0;
    const double gz110210 = C12399 * C13331 * C12178 +
                            C13420 * C12837 * C12178 +
                            (C13420 * C13331 * C13446) / 2.0;
    const double gz110201 = C12399 * C12140 * C12560 +
                            C13420 * C12689 * C12560 -
                            (C13420 * C12140 * C12609) / 2.0;
    const double gz110021 = C12308 * C13421 * C12560 +
                            C12132 * C12878 * C12560 -
                            (C12132 * C13421 * C12609) / 2.0;
    const double gz110120 = C12367 * C13421 * C12178 +
                            C12136 * C12878 * C12178 +
                            (C12136 * C13421 * C13446) / 2.0;
    const double gz110102 = C12367 * C12140 * C12579 +
                            C12136 * C12689 * C12579 -
                            (C12136 * C12140 * C13550) / 2.0;
    const double gz110012 = C12308 * C13331 * C12579 +
                            C12132 * C12837 * C12579 -
                            (C12132 * C13331 * C13550) / 2.0;
    const double gz110111 = C12367 * C13331 * C12560 +
                            C12136 * C12837 * C12560 -
                            (C12136 * C13331 * C12609) / 2.0;
    const double gz101300 = C13160 * C13280 * C12561 +
                            C13136 * C12254 * C12561 +
                            (C13136 * C13280 * C13475) / 2.0;
    const double gz101030 = C12308 * C12419 * C12561 +
                            (C12561 * C12132 * C12510) / C12145 +
                            (C12132 * C12419 * C13475) / 2.0;
    const double gz101003 = C12308 * C13280 * C13234 +
                            C12132 * C12254 * C13234 -
                            (C12132 * C13280 * C13608) / 2.0;
    const double gz101210 = C12399 * C13394 * C12561 +
                            C13420 * C12471 * C12561 +
                            (C13420 * C13394 * C13475) / 2.0;
    const double gz101201 = C12399 * C13280 * C13004 +
                            C13420 * C12254 * C13004 -
                            (C13420 * C13280 * C13074) / 2.0;
    const double gz101021 = C12308 * C13413 * C13004 +
                            C12132 * C12501 * C13004 -
                            (C12132 * C13413 * C13074) / 2.0;
    const double gz101120 = C12367 * C13413 * C12561 +
                            C12136 * C12501 * C12561 +
                            (C12136 * C13413 * C13475) / 2.0;
    const double gz101102 = C12367 * C13280 * C13044 +
                            C12136 * C12254 * C13044 -
                            (C12136 * C13280 * C13557) / 2.0;
    const double gz101012 = C12308 * C13394 * C13044 +
                            C12132 * C12471 * C13044 -
                            (C12132 * C13394 * C13557) / 2.0;
    const double gz101111 = C12367 * C13394 * C13004 +
                            C12136 * C12471 * C13004 -
                            (C12136 * C13394 * C13074) / 2.0;
    const double gz011300 = (C12561 * C12140 * C12713) / C12145 +
                            C12630 * C12689 * C12561 +
                            (C12630 * C12140 * C13475) / 2.0;
    const double gz011030 = C12260 * C13164 * C12561 +
                            C13389 * C13189 * C12561 +
                            (C13389 * C13164 * C13475) / 2.0;
    const double gz011003 = C12260 * C12140 * C13234 +
                            C13389 * C12689 * C13234 -
                            (C13389 * C12140 * C13608) / 2.0;
    const double gz011210 = C12708 * C13331 * C12561 +
                            C13415 * C12837 * C12561 +
                            (C13415 * C13331 * C13475) / 2.0;
    const double gz011201 = C12708 * C12140 * C13004 +
                            C13415 * C12689 * C13004 -
                            (C13415 * C12140 * C13074) / 2.0;
    const double gz011021 = C12260 * C13421 * C13004 +
                            C13389 * C12878 * C13004 -
                            (C13389 * C13421 * C13074) / 2.0;
    const double gz011120 = C12313 * C13421 * C12561 +
                            C13392 * C12878 * C12561 +
                            (C13392 * C13421 * C13475) / 2.0;
    const double gz011102 = C12313 * C12140 * C13044 +
                            C13392 * C12689 * C13044 -
                            (C13392 * C12140 * C13557) / 2.0;
    const double gz011012 = C12260 * C13331 * C13044 +
                            C13389 * C12837 * C13044 -
                            (C13389 * C13331 * C13557) / 2.0;
    const double gz011111 = C12313 * C13331 * C13004 +
                            C13392 * C12837 * C13004 -
                            (C13392 * C13331 * C13074) / 2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gz110210 - std::sqrt(15. / 8.0) * gz110030);
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gz110111;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gz110012 + std::sqrt(9. / 8.0) * gz110210 +
               std::sqrt(9. / 8.0) * gz110030);
    gz[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gz110003 - std::sqrt(6.75) * gz110201 -
              std::sqrt(6.75) * gz110021);
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gz110102 - (std::sqrt(9. / 8.0) * gz110120 +
                                           std::sqrt(9. / 8.0) * gz110300));
    gz[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gz110201 - std::sqrt(22.5) * gz110021);
    gz[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gz110300 + std::sqrt(135. / 8.0) * gz110120);
    gz[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gz011210 - std::sqrt(15. / 8.0) * gz011030);
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gz011111;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gz011012 + std::sqrt(9. / 8.0) * gz011210 +
               std::sqrt(9. / 8.0) * gz011030);
    gz[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gz011003 - std::sqrt(6.75) * gz011201 -
              std::sqrt(6.75) * gz011021);
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gz011102 - (std::sqrt(9. / 8.0) * gz011120 +
                                           std::sqrt(9. / 8.0) * gz011300));
    gz[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gz011201 - std::sqrt(22.5) * gz011021);
    gz[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gz011300 + std::sqrt(135. / 8.0) * gz011120);
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(1.25 / 8.0) * gz200030 - std::sqrt(11.25 / 8.0) * gz200210 +
         std::sqrt(1.25 / 8.0) * gz020030 - std::sqrt(11.25 / 8.0) * gz020210 -
         std::sqrt(5.0 / 8.0) * gz002030 + std::sqrt(45. / 8.0) * gz002210);
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(15.0) * gz002111 -
              (std::sqrt(3.75) * gz020111 + std::sqrt(3.75) * gz200111));
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gz200030 + std::sqrt(0.75 / 8.0) * gz200210 +
         std::sqrt(1.5) * gz200012 + std::sqrt(0.75 / 8.0) * gz020030 +
         std::sqrt(0.75 / 8.0) * gz020210 + std::sqrt(1.5) * gz020012 -
         std::sqrt(3.0 / 8.0) * gz002030 - std::sqrt(3.0 / 8.0) * gz002210 -
         std::sqrt(6.0) * gz002012);
    gz[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (-0.5 * gz200003 + 0.75 * gz200201 + 0.75 * gz200021 -
              0.5 * gz020003 + 0.75 * gz020201 + 0.75 * gz020021 + gz002003 -
              1.5 * gz002201 - 1.5 * gz002021);
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gz200300 + std::sqrt(0.75 / 8.0) * gz200120 -
         std::sqrt(1.5) * gz200102 + std::sqrt(0.75 / 8.0) * gz020300 +
         std::sqrt(0.75 / 8.0) * gz020120 - std::sqrt(1.5) * gz020102 -
         std::sqrt(3.0 / 8.0) * gz002300 - std::sqrt(3.0 / 8.0) * gz002120 +
         std::sqrt(6.0) * gz002102);
    gz[(Ai + 2) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(1.875) * gz200021 - std::sqrt(1.875) * gz200201 -
              std::sqrt(1.875) * gz020201 + std::sqrt(1.875) * gz020021 +
              std::sqrt(7.5) * gz002201 - std::sqrt(7.5) * gz002021);
    gz[(Ai + 2) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz002300 -
         (std::sqrt(11.25 / 8.0) * gz020120 + std::sqrt(1.25 / 8.0) * gz020300 +
          std::sqrt(11.25 / 8.0) * gz200120 +
          std::sqrt(1.25 / 8.0) * gz200300) +
         std::sqrt(45.0 / 8.0) * gz002120);
    gz[(Ai + 3) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gz101210 - std::sqrt(15. / 8.0) * gz101030);
    gz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gz101111;
    gz[(Ai + 3) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(18.) * gz101012 + std::sqrt(9. / 8.0) * gz101210 +
               std::sqrt(9. / 8.0) * gz101030);
    gz[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gz101003 - std::sqrt(6.75) * gz101201 -
              std::sqrt(6.75) * gz101021);
    gz[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(18.) * gz101102 - (std::sqrt(9. / 8.0) * gz101120 +
                                           std::sqrt(9. / 8.0) * gz101300));
    gz[(Ai + 3) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(22.5) * gz101201 - std::sqrt(22.5) * gz101021);
    gz[(Ai + 3) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(15. / 8.0) * gz101300 + std::sqrt(135. / 8.0) * gz101120);
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(33.75 / 8.0) * gz200210 - std::sqrt(3.75 / 8.0) * gz200030 +
         std::sqrt(3.75 / 8.0) * gz020030 - std::sqrt(33.75 / 8.0) * gz020210);
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(11.25) * gz200111 - std::sqrt(11.25) * gz020111);
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(2.25 / 8.0) * gz020030 -
              (std::sqrt(4.5) * gz200012 + std::sqrt(2.25 / 8.0) * gz200210 +
               std::sqrt(2.25 / 8.0) * gz200030) +
              std::sqrt(2.25 / 8.0) * gz020210 + std::sqrt(4.5) * gz020012);
    gz[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(0.75) * gz200003 - std::sqrt(1.6875) * gz200201 -
              std::sqrt(1.6875) * gz200021 - std::sqrt(0.75) * gz020003 +
              std::sqrt(1.6875) * gz020201 + std::sqrt(1.6875) * gz020021);
    gz[(Ai + 4) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(4.5) * gz200102 -
         (std::sqrt(2.25 / 8.0) * gz200120 + std::sqrt(2.25 / 8.0) * gz200300) +
         std::sqrt(2.25 / 8.0) * gz020300 + std::sqrt(2.25 / 8.0) * gz020120 -
         std::sqrt(4.5) * gz020102);
    gz[(Ai + 4) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(5.625) * gz200201 - std::sqrt(5.625) * gz200021 -
              std::sqrt(5.625) * gz020201 + std::sqrt(5.625) * gz020021);
    gz[(Ai + 4) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gz200300 + std::sqrt(33.75 / 8.0) * gz200120 -
         std::sqrt(3.75 / 8.0) * gz020300 - std::sqrt(33.75 / 8.0) * gz020120);
}

// Automatically generated, do not edit
