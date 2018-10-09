/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sdpp_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0211_11(const double ae,
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
                                  double* const d2eexx,
                                  double* const d2eexy,
                                  double* const d2eexz,
                                  double* const d2eeyx,
                                  double* const d2eeyy,
                                  double* const d2eeyz,
                                  double* const d2eezx,
                                  double* const d2eezy,
                                  double* const d2eezz)
{
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double C28203 = ae * be;
    const double C28202 = xA - xB;
    const double C28201 = ae + be;
    const double C28200 = 0 * be;
    const double C28235 = yA - yB;
    const double C28238 = zA - zB;
    const double C28249 = 0 * be;
    const double C28275 = 0 * be;
    const double C28321 = p + q;
    const double C28320 = p * q;
    const double C28326 = xP - xQ;
    const double C28325 = bs[2];
    const double C28333 = std::pow(ae, 2);
    const double C28331 = bs[3];
    const double C28344 = bs[4];
    const double C28365 = bs[5];
    const double C28396 = yP - yQ;
    const double C28421 = zP - zQ;
    const double C93 = bs[0];
    const double C29140 = ce + de;
    const double C29139 = ce * de;
    const double C29138 = xC - xD;
    const double C29153 = yC - yD;
    const double C29162 = zC - zD;
    const double C28206 = 2 * C28203;
    const double C28205 = C28203 * C28202;
    const double C29119 = std::pow(C28202, 2);
    const double C29268 = C28202 * ae;
    const double C28204 = std::pow(C28201, 2);
    const double C29269 = 2 * C28201;
    const double C28250 = C28203 * C28235;
    const double C29205 = std::pow(C28235, 2);
    const double C29278 = C28235 * ae;
    const double C28276 = C28203 * C28238;
    const double C29216 = std::pow(C28238, 2);
    const double C29279 = C28238 * ae;
    const double C28322 = 2 * C28320;
    const double C28334 = C28326 * ae;
    const double C28330 = std::pow(C28326, 2);
    const double C28399 = C28396 * ae;
    const double C28398 = C28326 * C28396;
    const double C28447 = C28396 * C28326;
    const double C28460 = std::pow(C28396, 2);
    const double C28424 = C28421 * ae;
    const double C28423 = C28326 * C28421;
    const double C28474 = C28396 * C28421;
    const double C28485 = C28421 * C28326;
    const double C28498 = C28421 * C28396;
    const double C28509 = std::pow(C28421, 2);
    const double C29150 = 2 * C29140;
    const double C29272 = std::pow(C29140, 2);
    const double C29141 = std::pow(C29138, 2);
    const double C29271 = C29138 * de;
    const double C29270 = C29138 * ce;
    const double C29175 = std::pow(C29153, 2);
    const double C29276 = C29153 * de;
    const double C29274 = C29153 * ce;
    const double C29192 = std::pow(C29162, 2);
    const double C29277 = C29162 * de;
    const double C29275 = C29162 * ce;
    const double C29120 = C29119 * C28203;
    const double C28208 = 2 * C28204;
    const double C29282 = std::pow(C29269, -2);
    const double C29280 = std::pow(C29269, -1);
    const double C29206 = C29205 * C28203;
    const double C29217 = C29216 * C28203;
    const double C28324 = C28322 / C28321;
    const double C103 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C28322 / C28321, 2) -
          (bs[1] * C28322) / C28321) *
         std::pow(ae, 2)) /
        C28204;
    const double C94 = -(C28326 * bs[1] * C28322) / C28321;
    const double C642 = -(C28396 * bs[1] * C28322) / C28321;
    const double C1226 = -(C28421 * bs[1] * C28322) / C28321;
    const double C28336 = C28331 * C28334;
    const double C28347 = C28344 * C28334;
    const double C28370 = C28365 * C28334;
    const double C98 = (-(bs[1] * C28334 * C28322) / C28321) / C28201;
    const double C28346 = C28330 * C28344;
    const double C28369 = C28330 * C28365;
    const double C28401 = C28331 * C28399;
    const double C28405 = C28344 * C28399;
    const double C28412 = C28365 * C28399;
    const double C156 = (-(bs[1] * C28399 * C28322) / C28321) / C28201;
    const double C28400 = C28398 * C28333;
    const double C28448 = C28447 * C28333;
    const double C28462 = C28460 * C28344;
    const double C28467 = C28460 * C28365;
    const double C28426 = C28331 * C28424;
    const double C28430 = C28344 * C28424;
    const double C28437 = C28365 * C28424;
    const double C223 = (-(bs[1] * C28424 * C28322) / C28321) / C28201;
    const double C28425 = C28423 * C28333;
    const double C28475 = C28474 * C28333;
    const double C28486 = C28485 * C28333;
    const double C28499 = C28498 * C28333;
    const double C28511 = C28509 * C28344;
    const double C28516 = C28509 * C28365;
    const double C29273 = std::pow(C29150, -1);
    const double C29284 = 2 * C29272;
    const double C29142 = C29141 * C29139;
    const double C29176 = C29175 * C29139;
    const double C29193 = C29192 * C29139;
    const double C29121 = C29120 / C28201;
    const double C29207 = C29206 / C28201;
    const double C29218 = C29217 / C28201;
    const double C28327 = std::pow(C28324, 2);
    const double C28332 = -C28324;
    const double C28345 = std::pow(C28324, 4);
    const double C28404 = C28344 * C28400;
    const double C28411 = C28365 * C28400;
    const double C28450 = C28344 * C28448;
    const double C28453 = C28365 * C28448;
    const double C28429 = C28344 * C28425;
    const double C28436 = C28365 * C28425;
    const double C28477 = C28344 * C28475;
    const double C28480 = C28365 * C28475;
    const double C28488 = C28344 * C28486;
    const double C28491 = C28365 * C28486;
    const double C28501 = C28344 * C28499;
    const double C28504 = C28365 * C28499;
    const double C29143 = C29142 / C29140;
    const double C29177 = C29176 / C29140;
    const double C29194 = C29193 / C29140;
    const double C29122 = -C29121;
    const double C29208 = -C29207;
    const double C29219 = -C29218;
    const double C28329 = C28325 * C28327;
    const double C104 = (2 * ae * C28327 * C28325 * C28326 * ae +
                         C28326 *
                             (C28325 * C28327 + std::pow(C28326, 2) * bs[3] *
                                                    std::pow(-C28324, 3)) *
                             std::pow(ae, 2)) /
                        C28204;
    const double C161 =
        (C28327 * C28325 * C28326 * (yP - yQ) * C28333) / C28204;
    const double C228 =
        (C28327 * C28325 * C28326 * (zP - zQ) * C28333) / C28204;
    const double C289 = (C28327 * C28325 * C28396 * C28326 * C28333) / C28204;
    const double C333 =
        ((std::pow(C28396, 2) * C28325 * C28327 - (bs[1] * C28322) / C28321) *
         C28333) /
        C28204;
    const double C396 = (C28327 * C28325 * C28396 * C28421 * C28333) / C28204;
    const double C455 = (C28327 * C28325 * C28421 * C28326 * C28333) / C28204;
    const double C498 = (C28327 * C28325 * C28421 * C28396 * C28333) / C28204;
    const double C558 =
        ((std::pow(C28421, 2) * C28325 * C28327 - (bs[1] * C28322) / C28321) *
         C28333) /
        C28204;
    const double C99 = (C28326 * C28327 * C28325 * C28334) / C28201 -
                       (ae * bs[1] * C28322) / (C28321 * C28201);
    const double C157 = (C28326 * C28327 * C28325 * C28399) / C28201;
    const double C224 = (C28326 * C28327 * C28325 * C28424) / C28201;
    const double C646 = (C28396 * C28327 * C28325 * C28334) / C28201;
    const double C710 = (C28396 * C28327 * C28325 * C28399) / C28201 -
                        (ae * bs[1] * C28322) / (C28321 * C28201);
    const double C780 = (C28396 * C28327 * C28325 * C28424) / C28201;
    const double C1230 = (C28421 * C28327 * C28325 * C28334) / C28201;
    const double C1294 = (C28421 * C28327 * C28325 * C28399) / C28201;
    const double C1364 = (C28421 * C28327 * C28325 * C28424) / C28201 -
                         (ae * bs[1] * C28322) / (C28321 * C28201);
    const double C28335 = std::pow(C28332, 3);
    const double C28366 = std::pow(C28332, 5);
    const double C28351 = C28345 * C28347;
    const double C28350 = C28346 * C28345;
    const double C28364 = C28344 * C28345;
    const double C28407 = C28345 * C28405;
    const double C28432 = C28345 * C28430;
    const double C28463 = C28462 * C28345;
    const double C28512 = C28511 * C28345;
    const double C28406 = C28345 * C28404;
    const double C28451 = C28345 * C28450;
    const double C28431 = C28345 * C28429;
    const double C28478 = C28345 * C28477;
    const double C28489 = C28345 * C28488;
    const double C28502 = C28345 * C28501;
    const double C29144 = -C29143;
    const double C29178 = -C29177;
    const double C29195 = -C29194;
    const double C29123 = std::exp(C29122);
    const double C29209 = std::exp(C29208);
    const double C29220 = std::exp(C29219);
    const double C28337 = C28329 * ae;
    const double C95 = C28329 * C28330 - (bs[1] * C28322) / C28321;
    const double C641 = C28396 * C28326 * C28329;
    const double C1225 = C28421 * C28326 * C28329;
    const double C2252 = C28329 * C28460 - (bs[1] * C28322) / C28321;
    const double C2654 = C28421 * C28396 * C28329;
    const double C4045 = C28329 * C28509 - (bs[1] * C28322) / C28321;
    const double C28338 = C28335 * C28336;
    const double C28343 = C28331 * C28335;
    const double C28402 = C28335 * C28401;
    const double C28427 = C28335 * C28426;
    const double C162 = (ae * C28327 * C28325 * C28396 * ae +
                         C28326 * C28335 * C28331 * C28326 * C28396 * C28333) /
                        C28204;
    const double C229 = (ae * C28327 * C28325 * C28421 * ae +
                         C28326 * C28335 * C28331 * C28326 * C28421 * C28333) /
                        C28204;
    const double C290 = (ae * C28327 * C28325 * C28399 +
                         C28326 * C28335 * C28331 * C28396 * C28326 * C28333) /
                        C28204;
    const double C334 =
        (C28326 * (C28329 + std::pow(C28396, 2) * C28331 * C28335) * C28333) /
        C28204;
    const double C397 =
        (C28326 * C28335 * C28331 * C28396 * C28421 * C28333) / C28204;
    const double C398 =
        (C28335 * C28331 * C28475 + C28345 * C28344 * C28475 * C28330) / C28204;
    const double C456 = (ae * C28327 * C28325 * C28424 +
                         C28326 * C28335 * C28331 * C28421 * C28326 * C28333) /
                        C28204;
    const double C499 =
        (C28326 * C28335 * C28331 * C28421 * C28396 * C28333) / C28204;
    const double C500 =
        (C28335 * C28331 * C28499 + C28345 * C28344 * C28499 * C28330) / C28204;
    const double C559 =
        (C28326 * (C28329 + std::pow(C28421, 2) * C28331 * C28335) * C28333) /
        C28204;
    const double C650 =
        (C28396 * (C28329 + C28330 * C28331 * C28335) * C28333) / C28204;
    const double C714 =
        (ae * C28327 * C28325 * C28334 + C28396 * C28335 * C28331 * C28400) /
        C28204;
    const double C784 = (C28396 * C28335 * C28331 * C28425) / C28204;
    const double C850 =
        (ae * C28327 * C28325 * C28334 + C28396 * C28335 * C28331 * C28448) /
        C28204;
    const double C904 =
        (2 * ae * C28327 * C28325 * C28399 +
         C28396 * (C28329 + C28460 * C28331 * C28335) * C28333) /
        C28204;
    const double C972 =
        (ae * C28327 * C28325 * C28424 + C28396 * C28335 * C28331 * C28475) /
        C28204;
    const double C1036 = (C28396 * C28335 * C28331 * C28486) / C28204;
    const double C1090 =
        (ae * C28327 * C28325 * C28424 + C28396 * C28335 * C28331 * C28499) /
        C28204;
    const double C1154 =
        (C28396 * (C28329 + C28509 * C28331 * C28335) * C28333) / C28204;
    const double C1234 =
        (C28421 * (C28329 + C28330 * C28331 * C28335) * C28333) / C28204;
    const double C1298 = (C28421 * C28335 * C28331 * C28400) / C28204;
    const double C1368 =
        (ae * C28327 * C28325 * C28334 + C28421 * C28335 * C28331 * C28425) /
        C28204;
    const double C1434 = (C28421 * C28335 * C28331 * C28448) / C28204;
    const double C1488 =
        (C28421 * (C28329 + C28460 * C28331 * C28335) * C28333) / C28204;
    const double C1556 =
        (ae * C28327 * C28325 * C28399 + C28421 * C28335 * C28331 * C28475) /
        C28204;
    const double C1620 =
        (ae * C28327 * C28325 * C28334 + C28421 * C28335 * C28331 * C28486) /
        C28204;
    const double C1674 =
        (ae * C28327 * C28325 * C28399 + C28421 * C28335 * C28331 * C28499) /
        C28204;
    const double C1738 =
        (2 * ae * C28327 * C28325 * C28424 +
         C28421 * (C28329 + C28509 * C28331 * C28335) * C28333) /
        C28204;
    const double C28375 = C28366 * C28370;
    const double C28374 = C28369 * C28366;
    const double C28414 = C28366 * C28412;
    const double C28413 = C28366 * C28411;
    const double C28439 = C28366 * C28437;
    const double C28438 = C28366 * C28436;
    const double C28454 = C28366 * C28453;
    const double C28468 = C28467 * C28366;
    const double C28481 = C28366 * C28480;
    const double C28492 = C28366 * C28491;
    const double C28505 = C28366 * C28504;
    const double C28517 = C28516 * C28366;
    const double C28354 = C28326 * C28351;
    const double C28363 = ae * C28351;
    const double C28779 = C28396 * C28351;
    const double C28939 = C28421 * C28351;
    const double C28373 = C28364 * C28330;
    const double C28372 = C28326 * C28364;
    const double C28371 = C28364 * ae;
    const double C28794 = C28364 * C28460;
    const double C28793 = C28396 * C28364;
    const double C28962 = C28364 * C28509;
    const double C28961 = C28421 * C28364;
    const double C28410 = ae * C28407;
    const double C28409 = C28326 * C28407;
    const double C28722 = C28396 * C28407;
    const double C28947 = C28421 * C28407;
    const double C28435 = ae * C28432;
    const double C28434 = C28326 * C28432;
    const double C28810 = C28396 * C28432;
    const double C28894 = C28421 * C28432;
    const double C4098 = (C28335 * C28331 * C28400 + C28406 * C28509) / C28204;
    const double C4183 = (C28335 * C28331 * C28448 + C28451 * C28509) / C28204;
    const double C2349 = (C28335 * C28331 * C28425 + C28431 * C28460) / C28204;
    const double C399 =
        (2 * C28326 * C28478 +
         C28326 * (C28478 + C28366 * C28365 * C28475 * C28330)) /
        C28204;
    const double C2516 = (C28335 * C28331 * C28486 + C28489 * C28460) / C28204;
    const double C501 =
        (2 * C28326 * C28502 +
         C28326 * (C28502 + C28366 * C28365 * C28499 * C28330)) /
        C28204;
    const double C29145 = std::exp(C29144);
    const double C29179 = std::exp(C29178);
    const double C29196 = std::exp(C29195);
    const double C5039 = C29123 * C646;
    const double C9619 = C29123 * C1230;
    const double C28207 = C28205 * C29123;
    const double C29281 = C29123 * C29268;
    const double C77 =
        (C29123 * std::pow(C29268, 2)) / C28204 + C29123 / C29269;
    const double C79 = C29282 * C29123;
    const double C12620 = C29280 * C29123;
    const double C168 = C29209 * C157;
    const double C9487 = C29209 * C1294;
    const double C28251 = C28250 * C29209;
    const double C155 = -(2 * C28203 * (yA - yB) * C29209) / C28201;
    const double C332 =
        -((C29209 - (C28235 * 2 * C28203 * C28235 * C29209) / C28201) *
          C28206) /
        C28201;
    const double C29290 = C29209 * C29278;
    const double C4436 =
        (C29209 * std::pow(C29278, 2)) / C28204 + C29209 / C29269;
    const double C4438 = C29282 * C29209;
    const double C12622 = C29280 * C29209;
    const double C235 = C29220 * C224;
    const double C4961 = C29220 * C780;
    const double C28277 = C28276 * C29220;
    const double C222 = -(2 * C28203 * (zA - zB) * C29220) / C28201;
    const double C557 =
        -((C29220 - (C28238 * 2 * C28203 * C28238 * C29220) / C28201) *
          C28206) /
        C28201;
    const double C29291 = C29220 * C29279;
    const double C8556 =
        (C29220 * std::pow(C29279, 2)) / C28204 + C29220 / C29269;
    const double C8558 = C29282 * C29220;
    const double C17889 = C29280 * C29220;
    const double C28339 = C28326 * C28338;
    const double C2305 = (C28335 * C28331 * C28400 + ae * C28396 * C28338 +
                          C28396 * (ae * C28338 + C28396 * C28406)) /
                         C28204;
    const double C2390 = (C28335 * C28331 * C28448 + ae * C28396 * C28338 +
                          C28396 * (ae * C28338 + C28396 * C28451)) /
                         C28204;
    const double C2719 = (C28421 * (ae * C28338 + C28396 * C28406)) / C28204;
    const double C2775 =
        (ae * C28396 * C28338 + C28421 * C28396 * C28431) / C28204;
    const double C2828 =
        (ae * C28421 * C28338 + C28396 * C28421 * C28451) / C28204;
    const double C2990 =
        (ae * C28396 * C28338 + C28421 * C28396 * C28489) / C28204;
    const double C4142 = (C28335 * C28331 * C28425 + ae * C28421 * C28338 +
                          C28421 * (ae * C28338 + C28421 * C28431)) /
                         C28204;
    const double C4309 = (C28335 * C28331 * C28486 + ae * C28421 * C28338 +
                          C28421 * (ae * C28338 + C28421 * C28489)) /
                         C28204;
    const double C2255 = (C28327 * C28325 * C28334 + C28338 * C28460) / C28201;
    const double C2657 = (C28421 * C28396 * C28338) / C28201;
    const double C4048 = (C28327 * C28325 * C28334 + C28338 * C28509) / C28201;
    const double C4821 =
        (2 * C28396 * C28338 + C28396 * (C28338 + C28351 * C28460)) / C28201;
    const double C5425 = (C28421 * (C28338 + C28351 * C28460)) / C28201;
    const double C9405 =
        (2 * C28421 * C28338 + C28421 * (C28338 + C28351 * C28509)) / C28201;
    const double C28349 = C28326 * C28343;
    const double C28348 = C28343 * ae;
    const double C28353 = C28343 + C28350;
    const double C28464 = C28343 + C28463;
    const double C28513 = C28343 + C28512;
    const double C28723 = C28396 * C28343;
    const double C28895 = C28421 * C28343;
    const double C335 =
        ((C28329 + C28460 * C28331 * C28335) * C28333 +
         (C28343 + C28460 * C28344 * C28345) * C28333 * C28330) /
        C28204;
    const double C560 =
        ((C28329 + C28509 * C28331 * C28335) * C28333 +
         (C28343 + C28509 * C28344 * C28345) * C28333 * C28330) /
        C28204;
    const double C96 =
        2 * C28326 * C28329 + C28326 * (C28329 + C28343 * C28330);
    const double C640 = C28396 * (C28329 + C28343 * C28330);
    const double C1224 = C28421 * (C28329 + C28343 * C28330);
    const double C4819 =
        2 * C28396 * C28329 + C28396 * (C28329 + C28343 * C28460);
    const double C5423 = C28421 * (C28329 + C28343 * C28460);
    const double C9403 =
        2 * C28421 * C28329 + C28421 * (C28329 + C28343 * C28509);
    const double C28622 = C28396 * C28402;
    const double C163 =
        (C28335 * C28331 * C28400 + ae * C28326 * C28402 +
         C28326 * (ae * C28402 + C28326 * C28345 * C28344 * C28400)) /
        C28204;
    const double C164 =
        (2 * (ae * C28402 + C28326 * C28406) + ae * (C28402 + C28407 * C28330) +
         C28326 *
             (C28406 + ae * C28326 * C28407 +
              C28326 * (ae * C28407 + C28326 * C28366 * C28365 * C28400))) /
        C28204;
    const double C291 =
        (C28335 * C28331 * C28448 + ae * C28326 * C28402 +
         C28326 * (ae * C28402 + C28326 * C28345 * C28344 * C28448)) /
        C28204;
    const double C1297 = (C28421 * (ae * C28402 + C28326 * C28406)) / C28204;
    const double C1433 = (C28421 * (ae * C28402 + C28326 * C28451)) / C28204;
    const double C1555 =
        (ae * C28326 * C28402 + C28421 * C28326 * C28478) / C28204;
    const double C1673 =
        (ae * C28326 * C28402 + C28421 * C28326 * C28502) / C28204;
    const double C4268 = (C28335 * C28331 * C28475 + ae * C28421 * C28402 +
                          C28421 * (ae * C28402 + C28421 * C28478)) /
                         C28204;
    const double C4350 = (C28335 * C28331 * C28499 + ae * C28421 * C28402 +
                          C28421 * (ae * C28402 + C28421 * C28502)) /
                         C28204;
    const double C158 = (C28327 * C28325 * C28399 + C28402 * C28330) / C28201;
    const double C159 =
        (2 * C28326 * C28402 + C28326 * (C28402 + C28407 * C28330)) / C28201;
    const double C708 = (C28396 * (C28402 + C28407 * C28330) +
                         (C28329 + C28343 * C28330) * ae) /
                        C28201;
    const double C709 =
        (C28396 * C28326 * C28402 + C28326 * C28329 * ae) / C28201;
    const double C1292 = (C28421 * (C28402 + C28407 * C28330)) / C28201;
    const double C1293 = (C28421 * C28326 * C28402) / C28201;
    const double C4095 = (C28327 * C28325 * C28399 + C28402 * C28509) / C28201;
    const double C9481 =
        (2 * C28421 * C28402 + C28421 * (C28402 + C28407 * C28509)) / C28201;
    const double C28702 = C28421 * C28427;
    const double C230 =
        (C28335 * C28331 * C28425 + ae * C28326 * C28427 +
         C28326 * (ae * C28427 + C28326 * C28345 * C28344 * C28425)) /
        C28204;
    const double C231 =
        (2 * (ae * C28427 + C28326 * C28431) + ae * (C28427 + C28432 * C28330) +
         C28326 *
             (C28431 + ae * C28326 * C28432 +
              C28326 * (ae * C28432 + C28326 * C28366 * C28365 * C28425))) /
        C28204;
    const double C457 =
        (C28335 * C28331 * C28486 + ae * C28326 * C28427 +
         C28326 * (ae * C28427 + C28326 * C28345 * C28344 * C28486)) /
        C28204;
    const double C783 = (C28396 * (ae * C28427 + C28326 * C28431)) / C28204;
    const double C971 =
        (ae * C28326 * C28427 + C28396 * C28326 * C28478) / C28204;
    const double C1035 = (C28396 * (ae * C28427 + C28326 * C28489)) / C28204;
    const double C1089 =
        (ae * C28326 * C28427 + C28396 * C28326 * C28502) / C28204;
    const double C2475 = (C28335 * C28331 * C28475 + ae * C28396 * C28427 +
                          C28396 * (ae * C28427 + C28396 * C28478)) /
                         C28204;
    const double C2557 = (C28335 * C28331 * C28499 + ae * C28396 * C28427 +
                          C28396 * (ae * C28427 + C28396 * C28502)) /
                         C28204;
    const double C2937 = (ae * (C28421 * C28427 + C28337) +
                          C28396 * (ae * C28402 + C28421 * C28478)) /
                         C28204;
    const double C225 = (C28327 * C28325 * C28424 + C28427 * C28330) / C28201;
    const double C226 =
        (2 * C28326 * C28427 + C28326 * (C28427 + C28432 * C28330)) / C28201;
    const double C778 = (C28396 * (C28427 + C28432 * C28330)) / C28201;
    const double C779 = (C28396 * C28326 * C28427) / C28201;
    const double C1362 = (C28421 * (C28427 + C28432 * C28330) +
                          (C28329 + C28343 * C28330) * ae) /
                         C28201;
    const double C1363 =
        (C28421 * C28326 * C28427 + C28326 * C28329 * ae) / C28201;
    const double C2346 = (C28327 * C28325 * C28424 + C28427 * C28460) / C28201;
    const double C2772 =
        (C28421 * C28396 * C28427 + C28396 * C28329 * ae) / C28201;
    const double C4955 =
        (2 * C28396 * C28427 + C28396 * (C28427 + C28432 * C28460)) / C28201;
    const double C5539 = (C28421 * (C28427 + C28432 * C28460) +
                          (C28329 + C28343 * C28460) * ae) /
                         C28201;
    const double C170 = C29209 * C162;
    const double C237 = C29220 * C229;
    const double C342 = C29209 * C334;
    const double C404 = C29220 * C397;
    const double C407 = C29220 * C398;
    const double C506 = C29209 * C499;
    const double C509 = C29209 * C500;
    const double C567 = C29220 * C559;
    const double C4827 = C29123 * C650;
    const double C4963 = C29220 * C784;
    const double C5041 = C29123 * C850;
    const double C5173 = C29220 * C972;
    const double C5235 = C29123 * C1036;
    const double C5358 = C29220 * C1154;
    const double C9411 = C29123 * C1234;
    const double C9489 = C29209 * C1298;
    const double C9621 = C29123 * C1434;
    const double C9703 = C29209 * C1488;
    const double C9828 = C29123 * C1620;
    const double C9892 = C29209 * C1674;
    const double C28379 = C28326 * C28375;
    const double C28781 = C28375 * C28460;
    const double C28917 = C28396 * C28375;
    const double C28941 = C28375 * C28509;
    const double C28378 = C28364 + C28374;
    const double C28416 = C28414 * C28330;
    const double C28733 = C28326 * C28414;
    const double C28792 = C28396 * C28414;
    const double C28948 = C28414 * C28509;
    const double C28415 = C28326 * C28413;
    const double C28780 = C28396 * C28413;
    const double C9483 =
        (2 * C28421 * C28406 + C28421 * (C28406 + C28413 * C28509)) / C28204;
    const double C12260 =
        (3 * (C28406 + C28413 * C28509) +
         C28421 * (2 * C28421 * C28413 +
                   C28421 * (C28413 +
                             std::pow(C28324, 6) * bs[6] * C28400 * C28509))) /
        C28204;
    const double C28441 = C28439 * C28330;
    const double C28746 = C28326 * C28439;
    const double C28812 = C28439 * C28460;
    const double C28926 = C28396 * C28439;
    const double C28960 = C28421 * C28439;
    const double C28440 = C28326 * C28438;
    const double C28916 = C28396 * C28438;
    const double C28940 = C28421 * C28438;
    const double C4957 =
        (2 * C28396 * C28431 + C28396 * (C28431 + C28438 * C28460)) / C28204;
    const double C5541 = (ae * (C28338 + C28351 * C28460) +
                          C28421 * (C28431 + C28438 * C28460)) /
                         C28204;
    const double C6440 =
        (3 * (C28431 + C28438 * C28460) +
         C28396 * (2 * C28396 * C28438 +
                   C28396 * (C28438 +
                             std::pow(C28324, 6) * bs[6] * C28425 * C28460))) /
        C28204;
    const double C28455 = C28326 * C28454;
    const double C28786 = C28396 * C28454;
    const double C28824 = C28421 * C28454;
    const double C5593 =
        (C28421 * C28451 + ae * C28421 * C28396 * C28351 +
         C28396 * (ae * C28421 * C28351 + C28396 * C28421 * C28454)) /
        C28204;
    const double C8311 = (ae * (C28338 + C28351 * C28509) +
                          C28396 * (C28451 + C28454 * C28509)) /
                         C28204;
    const double C9615 =
        (2 * C28421 * C28451 + C28421 * (C28451 + C28454 * C28509)) / C28204;
    const double C28469 = C28364 + C28468;
    const double C28745 = C28326 * C28481;
    const double C28811 = C28396 * C28481;
    const double C28832 = C28421 * C28481;
    const double C400 =
        (3 * (C28478 + C28481 * C28330) +
         C28326 * (2 * C28326 * C28481 +
                   C28326 * (C28481 +
                             std::pow(C28324, 6) * bs[6] * C28475 * C28330))) /
        C28204;
    const double C970 = (ae * (C28427 + C28432 * C28330) +
                         C28396 * (C28478 + C28481 * C28330)) /
                        C28204;
    const double C1554 = (ae * (C28402 + C28407 * C28330) +
                          C28421 * (C28478 + C28481 * C28330)) /
                         C28204;
    const double C28493 = C28326 * C28492;
    const double C28922 = C28396 * C28492;
    const double C28951 = C28421 * C28492;
    const double C5230 =
        (2 * C28396 * C28489 + C28396 * (C28489 + C28492 * C28460)) / C28204;
    const double C5755 = (ae * (C28338 + C28351 * C28460) +
                          C28421 * (C28489 + C28492 * C28460)) /
                         C28204;
    const double C6617 =
        (3 * (C28489 + C28492 * C28460) +
         C28396 * (2 * C28396 * C28492 +
                   C28396 * (C28492 +
                             std::pow(C28324, 6) * bs[6] * C28486 * C28460))) /
        C28204;
    const double C28751 = C28326 * C28505;
    const double C28817 = C28396 * C28505;
    const double C28954 = C28421 * C28505;
    const double C502 =
        (3 * (C28502 + C28505 * C28330) +
         C28326 * (2 * C28326 * C28505 +
                   C28326 * (C28505 +
                             std::pow(C28324, 6) * bs[6] * C28499 * C28330))) /
        C28204;
    const double C1088 = (ae * (C28427 + C28432 * C28330) +
                          C28396 * (C28502 + C28505 * C28330)) /
                         C28204;
    const double C1672 = (ae * (C28402 + C28407 * C28330) +
                          C28421 * (C28502 + C28505 * C28330)) /
                         C28204;
    const double C28518 = C28364 + C28517;
    const double C28368 = 2 * C28363;
    const double C4903 =
        (2 * (ae * C28338 + C28396 * C28406) + ae * (C28338 + C28351 * C28460) +
         C28396 * (C28406 + ae * C28396 * C28351 +
                   C28396 * (C28363 + C28396 * C28413))) /
        C28204;
    const double C5035 =
        (2 * (ae * C28338 + C28396 * C28451) + ae * (C28338 + C28351 * C28460) +
         C28396 * (C28451 + ae * C28396 * C28351 +
                   C28396 * (C28363 + C28396 * C28454))) /
        C28204;
    const double C5487 = (C28421 * (C28406 + ae * C28396 * C28351 +
                                    C28396 * (C28363 + C28396 * C28413))) /
                         C28204;
    const double C9563 =
        (2 * (ae * C28338 + C28421 * C28431) + ae * (C28338 + C28351 * C28509) +
         C28421 * (C28431 + ae * C28421 * C28351 +
                   C28421 * (C28363 + C28421 * C28438))) /
        C28204;
    const double C9824 =
        (2 * (ae * C28338 + C28421 * C28489) + ae * (C28338 + C28351 * C28509) +
         C28421 * (C28489 + ae * C28421 * C28351 +
                   C28421 * (C28363 + C28421 * C28492))) /
        C28204;
    const double C8271 = (C28396 * C28431 + ae * C28421 * C28779 +
                          C28421 * (ae * C28779 + C28421 * C28396 * C28438)) /
                         C28204;
    const double C8312 =
        (C28451 + C28454 * C28509 + ae * (C28779 + C28396 * C28375 * C28509) +
         C28396 * (ae * (C28351 + C28375 * C28509) +
                   C28396 * (C28454 +
                             std::pow(C28324, 6) * bs[6] * C28448 * C28509))) /
        C28204;
    const double C8434 = (C28396 * C28489 + ae * C28421 * C28779 +
                          C28421 * (ae * C28779 + C28421 * C28396 * C28492)) /
                         C28204;
    const double C8182 = (C28396 * C28338 + C28779 * C28509) / C28201;
    const double C28377 = C28343 + C28373;
    const double C28376 = C28372 * ae;
    const double C28734 = C28396 * C28372;
    const double C28905 = C28421 * C28372;
    const double C28798 = C28343 + C28794;
    const double C28797 = C28793 * ae;
    const double C28927 = C28421 * C28793;
    const double C28966 = C28343 + C28962;
    const double C28965 = C28961 * ae;
    const double C28789 = 2 * C28410;
    const double C9888 =
        (2 * (ae * C28402 + C28421 * C28502) + ae * (C28402 + C28407 * C28509) +
         C28421 * (C28502 + ae * C28421 * C28407 +
                   C28421 * (C28410 + C28421 * C28505))) /
        C28204;
    const double C28626 = C28396 * C28409;
    const double C292 =
        (2 * (ae * C28402 + C28326 * C28451) + ae * (C28402 + C28407 * C28330) +
         C28326 * (C28451 + ae * C28409 +
                   C28326 * (C28410 + C28326 * C28366 * C28365 * C28448))) /
        C28204;
    const double C4269 = (C28326 * C28478 + ae * C28421 * C28409 +
                          C28421 * (ae * C28409 + C28421 * C28326 * C28481)) /
                         C28204;
    const double C4351 = (C28326 * C28502 + ae * C28421 * C28409 +
                          C28421 * (ae * C28409 + C28421 * C28326 * C28505)) /
                         C28204;
    const double C4096 = (C28326 * C28402 + C28409 * C28509) / C28201;
    const double C28957 = 2 * C28435;
    const double C5169 =
        (2 * (ae * C28427 + C28396 * C28478) + ae * (C28427 + C28432 * C28460) +
         C28396 * (C28478 + ae * C28396 * C28432 +
                   C28396 * (C28435 + C28396 * C28481))) /
        C28204;
    const double C5302 =
        (2 * (ae * C28427 + C28396 * C28502) + ae * (C28427 + C28432 * C28460) +
         C28396 * (C28502 + ae * C28396 * C28432 +
                   C28396 * (C28435 + C28396 * C28505))) /
        C28204;
    const double C28706 = C28421 * C28434;
    const double C458 =
        (2 * (ae * C28427 + C28326 * C28489) + ae * (C28427 + C28432 * C28330) +
         C28326 * (C28489 + ae * C28434 +
                   C28326 * (C28435 + C28326 * C28366 * C28365 * C28486))) /
        C28204;
    const double C2476 = (C28326 * C28478 + ae * C28396 * C28434 +
                          C28396 * (ae * C28434 + C28396 * C28326 * C28481)) /
                         C28204;
    const double C2558 = (C28326 * C28502 + ae * C28396 * C28434 +
                          C28396 * (ae * C28434 + C28396 * C28326 * C28505)) /
                         C28204;
    const double C2347 = (C28326 * C28427 + C28434 * C28460) / C28201;
    const double C28857 = C28421 * C28810;
    const double C9493 = C29209 * C4098;
    const double C9625 = C29123 * C4183;
    const double C4967 = C29220 * C2349;
    const double C409 = C29220 * C399;
    const double C5238 = C29123 * C2516;
    const double C511 = C29209 * C501;
    const double C29285 = C29273 * C29145;
    const double C29283 = C29145 * C29270;
    const double C638 = -(C29145 * C29271) / C29140;
    const double C29287 = C29273 * C29179;
    const double C29286 = C29179 * C29274;
    const double C1806 = -(C29179 * C29276) / C29140;
    const double C29289 = C29273 * C29196;
    const double C29288 = C29196 * C29275;
    const double C3152 = -(C29196 * C29277) / C29140;
    const double C28209 = 2 * C28207;
    const double C92 = ((0 * ae) / C28201 - C28207 / C28204) / (2 * C28201) +
                       (0 * ae) / C28201;
    const double C12626 = (0 * ae) / C28201 - C28207 / C28204;
    const double C78 = (2 * C29280 * C29281) / C28201;
    const double C12619 = C29281 / C28201;
    const double C28259 = 2 * C28251;
    const double C4490 = ((0 * ae) / C28201 - C28251 / C28204) / (2 * C28201) +
                         (0 * ae) / C28201;
    const double C12690 = (0 * ae) / C28201 - C28251 / C28204;
    const double C171 = C155 * C95;
    const double C169 = C155 * C99;
    const double C167 = C155 * C94;
    const double C341 = C155 * C157;
    const double C339 = C155 * C156;
    const double C505 = C155 * C224;
    const double C723 = C155 * C641;
    const double C913 = C155 * C710;
    const double C1307 = C155 * C1225;
    const double C1497 = C155 * C1294;
    const double C9490 = C155 * C4045;
    const double C9488 = C155 * C1230;
    const double C9486 = C155 * C1226;
    const double C9891 = C155 * C1364;
    const double C10866 = C155 * C2654;
    const double C343 = C332 * C95;
    const double C340 = C332 * C94;
    const double C910 = C332 * C641;
    const double C1494 = C332 * C1225;
    const double C9704 = C332 * C4045;
    const double C9702 = C332 * C1226;
    const double C11046 = C332 * C2654;
    const double C4437 = (2 * C29280 * C29290) / C28201;
    const double C12621 = C29290 / C28201;
    const double C4489 =
        (((C29209 - (C28235 * 2 * C28251) / C28201) * ae) / C28201 -
         C28249 / C28208) /
            (2 * C28201) +
        ((C28235 * ((0 * ae) / C28201 - C28251 / C28204) + C12622) * ae) /
            C28201;
    const double C28285 = 2 * C28277;
    const double C8640 = ((0 * ae) / C28201 - C28277 / C28204) / (2 * C28201) +
                         (0 * ae) / C28201;
    const double C17993 = (0 * ae) / C28201 - C28277 / C28204;
    const double C238 = C222 * C95;
    const double C236 = C222 * C99;
    const double C234 = C222 * C94;
    const double C403 = C222 * C157;
    const double C566 = C222 * C224;
    const double C564 = C222 * C223;
    const double C793 = C222 * C641;
    const double C1163 = C222 * C780;
    const double C1377 = C222 * C1225;
    const double C1747 = C222 * C1364;
    const double C4964 = C222 * C2252;
    const double C4962 = C222 * C646;
    const double C4960 = C222 * C642;
    const double C5172 = C222 * C710;
    const double C6885 = C222 * C2654;
    const double C568 = C557 * C95;
    const double C565 = C557 * C94;
    const double C1160 = C557 * C641;
    const double C1744 = C557 * C1225;
    const double C5359 = C557 * C2252;
    const double C5357 = C557 * C642;
    const double C7234 = C557 * C2654;
    const double C8557 = (2 * C29280 * C29291) / C28201;
    const double C17888 = C29291 / C28201;
    const double C8639 =
        (((C29220 - (C28238 * 2 * C28277) / C28201) * ae) / C28201 -
         C28275 / C28208) /
            (2 * C28201) +
        ((C28238 * ((0 * ae) / C28201 - C28277 / C28204) + C17889) * ae) /
            C28201;
    const double C28340 = C28339 + C28337;
    const double C5045 = C29123 * C2390;
    const double C10869 = C29209 * C2719;
    const double C24286 = C12622 * C2719;
    const double C6884 = C29220 * C2775;
    const double C23713 = C17889 * C2775;
    const double C6951 = C29123 * C2828;
    const double C7124 = C29123 * C2990;
    const double C9830 = C29123 * C4309;
    const double C4966 = C222 * C2255;
    const double C5043 = C29123 * C2255;
    const double C6883 = C222 * C2657;
    const double C6953 = C29123 * C2657;
    const double C10868 = C155 * C2657;
    const double C9492 = C155 * C4048;
    const double C9623 = C29123 * C4048;
    const double C6443 = C222 * C4821;
    const double C6493 = C29123 * C4821;
    const double C6879 = C222 * C5425;
    const double C6949 = C29123 * C5425;
    const double C12263 = C155 * C9405;
    const double C12354 = C29123 * C9405;
    const double C28352 = C28349 * ae;
    const double C2773 =
        (C28421 * C28396 * C28434 + C28396 * C28349 * ae) / C28201;
    const double C2253 = C28326 * C28329 + C28349 * C28460;
    const double C2655 = C28421 * C28396 * C28349;
    const double C4046 = C28326 * C28329 + C28349 * C28509;
    const double C4820 =
        2 * C28396 * C28349 + C28396 * (C28349 + C28372 * C28460);
    const double C5424 = C28421 * (C28349 + C28372 * C28460);
    const double C9404 =
        2 * C28421 * C28349 + C28421 * (C28349 + C28372 * C28509);
    const double C28356 = C28354 + C28348;
    const double C28724 = C28722 + C28348;
    const double C28896 = C28894 + C28348;
    const double C28355 = C28353 * C28333;
    const double C28465 = C28464 * C28333;
    const double C28514 = C28513 * C28333;
    const double C28725 = C28723 * ae;
    const double C8180 = C28396 * C28329 + C28723 * C28509;
    const double C10804 =
        2 * C28421 * C28723 + C28421 * (C28723 + C28793 * C28509);
    const double C28897 = C28895 * ae;
    const double C345 = C29209 * C335;
    const double C570 = C29220 * C560;
    const double C177 = C155 * C96;
    const double C244 = C222 * C96;
    const double C346 = C332 * C96;
    const double C571 = C557 * C96;
    const double C719 = C155 * C640;
    const double C789 = C222 * C640;
    const double C907 = C332 * C640;
    const double C1157 = C557 * C640;
    const double C1303 = C155 * C1224;
    const double C1373 = C222 * C1224;
    const double C1491 = C332 * C1224;
    const double C1741 = C557 * C1224;
    const double C6445 = C222 * C4819;
    const double C6703 = C557 * C4819;
    const double C6881 = C222 * C5423;
    const double C7232 = C557 * C5423;
    const double C12265 = C155 * C9403;
    const double C12398 = C332 * C9403;
    const double C28623 = C28622 + C28337;
    const double C174 = C29209 * C163;
    const double C176 = C29209 * C164;
    const double C1306 = C29209 * C1297;
    const double C9629 = C29123 * C1433;
    const double C19328 = C12620 * C1433;
    const double C1563 = C29220 * C1555;
    const double C18172 = C17889 * C1555;
    const double C1681 = C29209 * C1673;
    const double C9894 = C29209 * C4350;
    const double C172 = C29209 * C158;
    const double C344 = C155 * C158;
    const double C406 = C222 * C158;
    const double C178 = C29209 * C159;
    const double C347 = C155 * C159;
    const double C408 = C222 * C159;
    const double C720 = C29209 * C708;
    const double C908 = C155 * C708;
    const double C975 = C222 * C708;
    const double C12705 = C12622 * C708;
    const double C724 = C29209 * C709;
    const double C911 = C155 * C709;
    const double C978 = C222 * C709;
    const double C12695 = C12622 * C709;
    const double C1304 = C29209 * C1292;
    const double C1492 = C155 * C1292;
    const double C1559 = C222 * C1292;
    const double C1308 = C29209 * C1293;
    const double C1495 = C155 * C1293;
    const double C1562 = C222 * C1293;
    const double C4228 = C155 * C4095;
    const double C9491 = C29209 * C4095;
    const double C9706 = C155 * C9481;
    const double C12266 = C29209 * C9481;
    const double C28703 = C28702 + C28337;
    const double C241 = C29220 * C230;
    const double C243 = C29220 * C231;
    const double C792 = C29220 * C783;
    const double C979 = C29220 * C971;
    const double C5241 = C29123 * C1035;
    const double C13673 = C12620 * C1035;
    const double C1097 = C29209 * C1089;
    const double C13057 = C12622 * C1089;
    const double C5175 = C29220 * C2475;
    const double C7066 = C29220 * C2937;
    const double C23925 = C17889 * C2937;
    const double C239 = C29220 * C225;
    const double C508 = C155 * C225;
    const double C569 = C222 * C225;
    const double C245 = C29220 * C226;
    const double C510 = C155 * C226;
    const double C572 = C222 * C226;
    const double C790 = C29220 * C778;
    const double C1093 = C155 * C778;
    const double C1158 = C222 * C778;
    const double C794 = C29220 * C779;
    const double C1096 = C155 * C779;
    const double C1161 = C222 * C779;
    const double C1374 = C29220 * C1362;
    const double C1677 = C155 * C1362;
    const double C1742 = C222 * C1362;
    const double C18008 = C17889 * C1362;
    const double C1378 = C29220 * C1363;
    const double C1680 = C155 * C1363;
    const double C1745 = C222 * C1363;
    const double C17998 = C17889 * C1363;
    const double C2602 = C222 * C2346;
    const double C4965 = C29220 * C2346;
    const double C3100 = C222 * C2772;
    const double C6886 = C29220 * C2772;
    const double C11215 = C155 * C2772;
    const double C23709 = C17889 * C2772;
    const double C5361 = C222 * C4955;
    const double C6446 = C29220 * C4955;
    const double C5862 = C222 * C5539;
    const double C6882 = C29220 * C5539;
    const double C25528 = C17889 * C5539;
    const double C28382 = C28379 + C28371;
    const double C28783 = C28351 + C28781;
    const double C10805 =
        (2 * C28421 * C28779 + C28421 * (C28779 + C28917 * C28509)) / C28201;
    const double C28943 = C28351 + C28941;
    const double C28381 = C28378 * C28333;
    const double C28418 = C28407 + C28416;
    const double C28735 = C28396 * C28733;
    const double C9482 =
        (2 * C28421 * C28409 + C28421 * (C28409 + C28733 * C28509)) / C28201;
    const double C28796 = C28792 + C28371;
    const double C28949 = C28407 + C28948;
    const double C28417 = C28410 + C28415;
    const double C28782 = C28363 + C28780;
    const double C12264 = C29209 * C9483;
    const double C28443 = C28432 + C28441;
    const double C28873 = C28396 * C28746;
    const double C28904 = C28421 * C28746;
    const double C4956 =
        (2 * C28396 * C28434 + C28396 * (C28434 + C28746 * C28460)) / C28201;
    const double C5540 = (C28421 * (C28434 + C28746 * C28460) +
                          (C28349 + C28372 * C28460) * ae) /
                         C28201;
    const double C28814 = C28432 + C28812;
    const double C28928 = C28421 * C28926;
    const double C28964 = C28960 + C28371;
    const double C28442 = C28435 + C28440;
    const double C10932 =
        (2 * (ae * C28779 + C28421 * C28916) + ae * (C28779 + C28917 * C28509) +
         C28421 *
             (C28916 + ae * C28421 * C28917 +
              C28421 * (ae * C28917 + C28421 * C28396 * std::pow(C28324, 6) *
                                          bs[6] * C28425))) /
        C28204;
    const double C28942 = C28363 + C28940;
    const double C6444 = C29220 * C4957;
    const double C6880 = C29220 * C5541;
    const double C25524 = C17889 * C5541;
    const double C28456 = C28410 + C28455;
    const double C28787 = C28363 + C28786;
    const double C10983 =
        (ae * (2 * C28421 * C28351 + C28421 * (C28351 + C28375 * C28509)) +
         C28396 * (2 * C28824 + C28421 * (C28454 + std::pow(C28324, 6) * bs[6] *
                                                       C28448 * C28509))) /
        C28204;
    const double C12348 =
        (3 * (C28451 + C28454 * C28509) +
         C28421 * (2 * C28824 + C28421 * (C28454 + std::pow(C28324, 6) * bs[6] *
                                                       C28448 * C28509))) /
        C28204;
    const double C6947 = C29123 * C5593;
    const double C10990 = C29123 * C8311;
    const double C12352 = C29123 * C9615;
    const double C28470 = C28469 * C28333;
    const double C5170 =
        (2 * (ae * C28434 + C28396 * C28745) + ae * (C28434 + C28746 * C28460) +
         C28396 *
             (C28745 + ae * C28396 * C28746 +
              C28396 * (ae * C28746 + C28396 * C28326 * std::pow(C28324, 6) *
                                          bs[6] * C28475))) /
        C28204;
    const double C9773 =
        (2 * (ae * C28409 + C28421 * C28745) + ae * (C28409 + C28733 * C28509) +
         C28421 *
             (C28745 + ae * C28421 * C28733 +
              C28421 * (ae * C28733 + C28421 * C28326 * std::pow(C28324, 6) *
                                          bs[6] * C28475))) /
        C28204;
    const double C28813 = C28435 + C28811;
    const double C28833 = C28410 + C28832;
    const double C976 = C29220 * C970;
    const double C1560 = C29220 * C1554;
    const double C18174 = C17889 * C1554;
    const double C28494 = C28435 + C28493;
    const double C11159 =
        (2 * (ae * C28779 + C28421 * C28922) + ae * (C28779 + C28917 * C28509) +
         C28421 *
             (C28922 + ae * C28421 * C28917 +
              C28421 * (ae * C28917 + C28421 * C28396 * std::pow(C28324, 6) *
                                          bs[6] * C28486))) /
        C28204;
    const double C28952 = C28363 + C28951;
    const double C6621 = C29123 * C5230;
    const double C7121 = C29123 * C5755;
    const double C5303 =
        (2 * (ae * C28434 + C28396 * C28751) + ae * (C28434 + C28746 * C28460) +
         C28396 *
             (C28751 + ae * C28396 * C28746 +
              C28396 * (ae * C28746 + C28396 * C28326 * std::pow(C28324, 6) *
                                          bs[6] * C28499))) /
        C28204;
    const double C9889 =
        (2 * (ae * C28409 + C28421 * C28751) + ae * (C28409 + C28733 * C28509) +
         C28421 *
             (C28751 + ae * C28421 * C28733 +
              C28421 * (ae * C28733 + C28421 * C28326 * std::pow(C28324, 6) *
                                          bs[6] * C28499))) /
        C28204;
    const double C28818 = C28435 + C28817;
    const double C28955 = C28410 + C28954;
    const double C1094 = C29209 * C1088;
    const double C13059 = C12622 * C1088;
    const double C1678 = C29209 * C1672;
    const double C28519 = C28518 * C28333;
    const double C6491 = C29123 * C5035;
    const double C26000 = C12622 * C5487;
    const double C12484 = C29123 * C9824;
    const double C26072 = C17889 * C8271;
    const double C11162 = C29123 * C8434;
    const double C10872 = C155 * C8182;
    const double C10988 = C29123 * C8182;
    const double C28380 = C28377 * ae;
    const double C97 = 3 * (C28329 + C28343 * C28330) +
                       C28326 * (2 * C28349 + C28326 * C28377);
    const double C643 = C28396 * (2 * C28349 + C28326 * C28377);
    const double C1227 = C28421 * (2 * C28349 + C28326 * C28377);
    const double C2254 = C28329 + C28343 * C28330 + C28377 * C28460;
    const double C2656 = C28421 * C28396 * C28377;
    const double C4047 = C28329 + C28343 * C28330 + C28377 * C28509;
    const double C9193 =
        (ae * (C28434 + C28421 * (C28421 * C28746 + C28376) +
               C28421 * C28372 * ae) +
         C28396 *
             (C28745 + ae * C28421 * C28733 +
              C28421 * (ae * C28733 + C28421 * C28326 * std::pow(C28324, 6) *
                                          bs[6] * C28475))) /
        C28204;
    const double C28736 = C28734 * ae;
    const double C8931 = C28396 * C28349 + C28734 * C28509;
    const double C28907 = C28905 * ae;
    const double C28800 = C28798 * ae;
    const double C6351 = 3 * (C28329 + C28343 * C28460) +
                         C28396 * (2 * C28723 + C28396 * C28798);
    const double C6758 = C28421 * (2 * C28723 + C28396 * C28798);
    const double C8181 = C28329 + C28343 * C28460 + C28798 * C28509;
    const double C28929 = C28927 * ae;
    const double C28968 = C28966 * ae;
    const double C12212 = 3 * (C28329 + C28343 * C28509) +
                          C28421 * (2 * C28895 + C28421 * C28966);
    const double C12526 = C29209 * C9888;
    const double C19482 = C17889 * C4269;
    const double C9896 = C29209 * C4351;
    const double C4229 = C155 * C4096;
    const double C9497 = C29209 * C4096;
    const double C6578 = C29220 * C5169;
    const double C5177 = C29220 * C2476;
    const double C13749 = C12622 * C2558;
    const double C2603 = C222 * C2347;
    const double C4971 = C29220 * C2347;
    const double C86 = C29285 / C29150;
    const double C84 = C29145 / C29150 - (C29283 * C29271) / C29272;
    const double C85 = C29283 / C29284 - (C29285 * C29271) / C29140;
    const double C1808 = C29283 / C29140;
    const double C2250 = C29287 / C29150;
    const double C636 = C29286 / C29140;
    const double C2248 = C29179 / C29150 - (C29286 * C29276) / C29272;
    const double C2249 = C29286 / C29284 - (C29287 * C29276) / C29140;
    const double C4044 = C29289 / C29150;
    const double C1222 = C29288 / C29140;
    const double C4042 = C29196 / C29150 - (C29288 * C29277) / C29272;
    const double C4043 = C29288 / C29284 - (C29289 * C29277) / C29140;
    const double C28210 = C28202 * C28209;
    const double C4440 = -C28209 / C28201;
    const double C12629 = C12626 * C99;
    const double C13442 = C12626 * C708;
    const double C13438 = C12626 * C640;
    const double C13434 = C12626 * C709;
    const double C13430 = C12626 * C641;
    const double C13676 = C12626 * C778;
    const double C13672 = C12626 * C779;
    const double C15454 = C12626 * C2347;
    const double C19335 = C12626 * C1292;
    const double C19331 = C12626 * C1224;
    const double C19327 = C12626 * C1293;
    const double C19323 = C12626 * C1225;
    const double C19559 = C12626 * C1362;
    const double C19555 = C12626 * C1363;
    const double C22774 = C12626 * C4096;
    const double C13187 = C12619 * C650;
    const double C13433 = C12619 * C850;
    const double C13429 = C12619 * C646;
    const double C13675 = C12619 * C1035;
    const double C13671 = C12619 * C1036;
    const double C15295 = C12619 * C2255;
    const double C15291 = C12619 * C2390;
    const double C15457 = C12619 * C2516;
    const double C15847 = C12619 * C2657;
    const double C15843 = C12619 * C2828;
    const double C16057 = C12619 * C2990;
    const double C19082 = C12619 * C1234;
    const double C19334 = C12619 * C1433;
    const double C19326 = C12619 * C1434;
    const double C19322 = C12619 * C1230;
    const double C19554 = C12619 * C1620;
    const double C22781 = C12619 * C4048;
    const double C22777 = C12619 * C4183;
    const double C22941 = C12619 * C4309;
    const double C28260 = C28235 * C28259;
    const double C12704 = C12690 * C640;
    const double C12694 = C12690 * C641;
    const double C12877 = C12690 * C708;
    const double C12874 = C12690 * C709;
    const double C12869 = C12690 * C710;
    const double C13058 = C12690 * C778;
    const double C13056 = C12690 * C779;
    const double C13748 = C12690 * C2347;
    const double C24285 = C12690 * C2657;
    const double C24281 = C12690 * C2654;
    const double C24707 = C12690 * C2772;
    const double C25999 = C12690 * C5425;
    const double C25995 = C12690 * C5423;
    const double C26441 = C12690 * C5539;
    const double C27811 = C12690 * C8182;
    const double C180 = C169 + C170;
    const double C179 = C167 + C168;
    const double C513 = C505 + C506;
    const double C9501 = C9488 + C9489;
    const double C9500 = C9486 + C9487;
    const double C9897 = C9891 + C9892;
    const double C350 = C340 + C341;
    const double C9711 = C9702 + C1497;
    const double C12707 = C12621 * C158;
    const double C12703 = C12621 * C163;
    const double C12697 = C12621 * C162;
    const double C12693 = C12621 * C157;
    const double C12881 = C12621 * C335;
    const double C12872 = C12621 * C334;
    const double C13061 = C12621 * C500;
    const double C13055 = C12621 * C499;
    const double C13283 = C12621 * C709;
    const double C13751 = C12621 * C1089;
    const double C13969 = C12621 * C1293;
    const double C13965 = C12621 * C1297;
    const double C14402 = C12621 * C1673;
    const double C24284 = C12621 * C1298;
    const double C24280 = C12621 * C1294;
    const double C24498 = C12621 * C1488;
    const double C24706 = C12621 * C1674;
    const double C25998 = C12621 * C2719;
    const double C27818 = C12621 * C4095;
    const double C27814 = C12621 * C4098;
    const double C28142 = C12621 * C4350;
    const double C4488 =
        (((0 - (C28235 * C28249) / C28201) * ae) / C28201 - (0 * be) / C28208) /
            (2 * C28201) +
        ((C28235 * (((C29209 - (C28235 * 2 * C28251) / C28201) * ae) / C28201 -
                    C28249 / C28208) +
          C12621) *
         ae) /
            C28201 +
        (0 * ae) / C28201 - C28251 / C28204;
    const double C4616 = C4489 * C708;
    const double C4613 = C4489 * C709;
    const double C4610 = C4489 * C710;
    const double C28286 = C28238 * C28285;
    const double C18007 = C17993 * C1224;
    const double C17997 = C17993 * C1225;
    const double C18173 = C17993 * C1292;
    const double C18171 = C17993 * C1293;
    const double C18350 = C17993 * C1362;
    const double C18347 = C17993 * C1363;
    const double C18342 = C17993 * C1364;
    const double C19005 = C17993 * C2772;
    const double C19481 = C17993 * C4096;
    const double C20763 = C17993 * C5539;
    const double C23712 = C17993 * C2657;
    const double C23708 = C17993 * C2654;
    const double C25527 = C17993 * C5423;
    const double C25523 = C17993 * C5425;
    const double C26071 = C17993 * C8182;
    const double C247 = C236 + C237;
    const double C246 = C234 + C235;
    const double C411 = C403 + C404;
    const double C4975 = C4962 + C4963;
    const double C4974 = C4960 + C4961;
    const double C5178 = C5172 + C5173;
    const double C575 = C565 + C566;
    const double C5365 = C5357 + C1163;
    const double C18010 = C17888 * C225;
    const double C18006 = C17888 * C230;
    const double C18000 = C17888 * C229;
    const double C17996 = C17888 * C224;
    const double C18176 = C17888 * C398;
    const double C18170 = C17888 * C397;
    const double C18354 = C17888 * C560;
    const double C18345 = C17888 * C559;
    const double C18580 = C17888 * C779;
    const double C18576 = C17888 * C783;
    const double C18791 = C17888 * C971;
    const double C19250 = C17888 * C1363;
    const double C19484 = C17888 * C1555;
    const double C23711 = C17888 * C784;
    const double C23707 = C17888 * C780;
    const double C23923 = C17888 * C972;
    const double C24138 = C17888 * C1154;
    const double C25530 = C17888 * C2346;
    const double C25526 = C17888 * C2349;
    const double C25690 = C17888 * C2475;
    const double C26078 = C17888 * C2772;
    const double C26074 = C17888 * C2775;
    const double C26300 = C17888 * C2937;
    const double C8638 =
        (((0 - (C28238 * C28275) / C28201) * ae) / C28201 - (0 * be) / C28208) /
            (2 * C28201) +
        ((C28238 * (((C29220 - (C28238 * 2 * C28277) / C28201) * ae) / C28201 -
                    C28275 / C28208) +
          C17888) *
         ae) /
            C28201 +
        (0 * ae) / C28201 - C28277 / C28204;
    const double C8880 = C8639 * C1362;
    const double C8877 = C8639 * C1363;
    const double C8874 = C8639 * C1364;
    const double C9349 = C8639 * C2772;
    const double C10753 = C8639 * C5539;
    const double C28341 = ae * C28340;
    const double C100 =
        (C28327 * C28325 * C28334 + C28326 * C28340 + C28326 * C28329 * ae) /
        C28201;
    const double C645 = (C28396 * C28340) / C28201;
    const double C1229 = (C28421 * C28340) / C28201;
    const double C4977 = C4966 + C4967;
    const double C6889 = C6883 + C6884;
    const double C10875 = C10868 + C10869;
    const double C9503 = C9492 + C9493;
    const double C28627 = C28626 + C28352;
    const double C28707 = C28706 + C28352;
    const double C2938 = (ae * (C28421 * C28434 + C28352) +
                          C28396 * (ae * C28409 + C28421 * C28326 * C28481)) /
                         C28204;
    const double C3101 = C222 * C2773;
    const double C9352 = C8639 * C2773;
    const double C14043 = C29220 * C2773;
    const double C14399 = C12690 * C2773;
    const double C16054 = C12626 * C2773;
    const double C18578 = C17889 * C2773;
    const double C18926 = C155 * C2773;
    const double C19000 = C17993 * C2773;
    const double C4970 = C222 * C2253;
    const double C5362 = C557 * C2253;
    const double C13280 = C12690 * C2253;
    const double C15292 = C12626 * C2253;
    const double C13966 = C12690 * C2655;
    const double C14042 = C222 * C2655;
    const double C14471 = C557 * C2655;
    const double C15844 = C12626 * C2655;
    const double C18503 = C155 * C2655;
    const double C18577 = C17993 * C2655;
    const double C18717 = C332 * C2655;
    const double C9496 = C155 * C4046;
    const double C9708 = C332 * C4046;
    const double C19247 = C17993 * C4046;
    const double C22778 = C12626 * C4046;
    const double C28358 = ae * C28356;
    const double C28357 = C28326 * C28356;
    const double C28367 = 2 * C28356;
    const double C28521 = C28396 * C28356;
    const double C28564 = C28421 * C28356;
    const double C2256 = (C28340 + C28356 * C28460) / C28201;
    const double C4049 = (C28340 + C28356 * C28509) / C28201;
    const double C28727 = ae * C28724;
    const double C28726 = C28396 * C28724;
    const double C28764 = C28421 * C28724;
    const double C28791 = 2 * C28724;
    const double C28899 = ae * C28896;
    const double C28898 = C28421 * C28896;
    const double C28959 = 2 * C28896;
    const double C649 =
        (2 * ae * C28396 * C28338 + C28326 * C28396 * C28355) / C28204;
    const double C1233 =
        (2 * ae * C28421 * C28338 + C28326 * C28421 * C28355) / C28204;
    const double C2258 =
        ((C28329 + C28330 * C28331 * C28335) * C28333 + C28355 * C28460) /
        C28204;
    const double C2660 = (C28421 * C28396 * C28355) / C28204;
    const double C4051 =
        ((C28329 + C28330 * C28331 * C28335) * C28333 + C28355 * C28509) /
        C28204;
    const double C336 =
        (2 * C28326 * C28465 +
         C28326 *
             (C28465 + (C28364 + C28460 * C28365 * C28366) * C28333 * C28330)) /
        C28204;
    const double C903 =
        (2 * ae * C28326 * C28402 + C28396 * C28326 * C28465) / C28204;
    const double C1487 = (C28421 * C28326 * C28465) / C28204;
    const double C2881 =
        (2 * ae * C28421 * C28402 + C28396 * C28421 * C28465) / C28204;
    const double C4224 =
        ((C28329 + C28460 * C28331 * C28335) * C28333 + C28465 * C28509) /
        C28204;
    const double C561 =
        (2 * C28326 * C28514 +
         C28326 *
             (C28514 + (C28364 + C28509 * C28365 * C28366) * C28333 * C28330)) /
        C28204;
    const double C1153 = (C28396 * C28326 * C28514) / C28204;
    const double C1737 =
        (2 * ae * C28326 * C28427 + C28421 * C28326 * C28514) / C28204;
    const double C2598 =
        ((C28329 + C28509 * C28331 * C28335) * C28333 + C28514 * C28460) /
        C28204;
    const double C3096 =
        (2 * ae * C28396 * C28427 + C28421 * C28396 * C28514) / C28204;
    const double C28858 = C28857 + C28725;
    const double C5703 = (ae * C28402 + C28421 * C28478 +
                          ae * (C28421 * C28396 * C28432 + C28725) +
                          C28396 * (ae * (C28421 * C28432 + C28348) +
                                    C28396 * (C28410 + C28421 * C28481))) /
                         C28204;
    const double C10870 = C155 * C8180;
    const double C11048 = C332 * C8180;
    const double C26075 = C17993 * C8180;
    const double C27815 = C12690 * C8180;
    const double C28624 = ae * C28623;
    const double C2302 =
        (C28327 * C28325 * C28399 + C28396 * C28623 + C28396 * C28329 * ae) /
        C28201;
    const double C2716 = (C28421 * C28623) / C28201;
    const double C8227 = (C28623 + C28724 * C28509) / C28201;
    const double C181 = C171 + C172;
    const double C351 = C343 + C344;
    const double C412 = C406 + C407;
    const double C184 = C177 + C178;
    const double C352 = C346 + C347;
    const double C413 = C408 + C409;
    const double C726 = C719 + C720;
    const double C915 = C907 + C908;
    const double C728 = C723 + C724;
    const double C916 = C910 + C911;
    const double C1310 = C1303 + C1304;
    const double C1499 = C1491 + C1492;
    const double C1312 = C1307 + C1308;
    const double C1500 = C1494 + C1495;
    const double C1566 = C1562 + C1563;
    const double C9712 = C9704 + C4228;
    const double C9502 = C9490 + C9491;
    const double C12401 = C12398 + C9706;
    const double C12268 = C12265 + C12266;
    const double C28704 = ae * C28703;
    const double C4139 =
        (C28327 * C28325 * C28424 + C28421 * C28703 + C28421 * C28329 * ae) /
        C28201;
    const double C982 = C978 + C979;
    const double C248 = C238 + C239;
    const double C514 = C508 + C509;
    const double C576 = C568 + C569;
    const double C251 = C244 + C245;
    const double C515 = C510 + C511;
    const double C577 = C571 + C572;
    const double C796 = C789 + C790;
    const double C1165 = C1157 + C1158;
    const double C798 = C793 + C794;
    const double C1100 = C1096 + C1097;
    const double C1166 = C1160 + C1161;
    const double C1380 = C1373 + C1374;
    const double C1749 = C1741 + C1742;
    const double C1382 = C1377 + C1378;
    const double C1684 = C1680 + C1681;
    const double C1750 = C1744 + C1745;
    const double C5366 = C5359 + C2602;
    const double C4976 = C4964 + C4965;
    const double C7238 = C7234 + C3100;
    const double C6890 = C6885 + C6886;
    const double C6706 = C6703 + C5361;
    const double C6448 = C6445 + C6446;
    const double C7237 = C7232 + C5862;
    const double C6888 = C6881 + C6882;
    const double C28385 = ae * C28382;
    const double C28384 = C28326 * C28382;
    const double C28528 = C28396 * C28382;
    const double C28571 = C28421 * C28382;
    const double C28609 = C28382 * C28460;
    const double C28677 = C28382 * C28509;
    const double C6877 =
        (ae * (2 * C28779 + C28396 * C28783) +
         C28421 * (2 * C28396 * C28438 +
                   C28396 * (C28438 +
                             std::pow(C28324, 6) * bs[6] * C28425 * C28460))) /
        C28204;
    const double C6944 =
        (2 * (ae * C28421 * C28351 + C28396 * C28824) + ae * C28421 * C28783 +
         C28396 * (C28824 + ae * C28421 * C28396 * C28375 +
                   C28396 * (ae * C28421 * C28375 + C28396 * C28421 *
                                                        std::pow(C28324, 6) *
                                                        bs[6] * C28448))) /
        C28204;
    const double C7118 =
        (ae * (2 * C28779 + C28396 * C28783) +
         C28421 * (2 * C28396 * C28492 +
                   C28396 * (C28492 +
                             std::pow(C28324, 6) * bs[6] * C28486 * C28460))) /
        C28204;
    const double C8272 =
        (C28431 + C28438 * C28460 + ae * C28421 * C28783 +
         C28421 *
             (ae * C28783 + C28421 * (C28438 + std::pow(C28324, 6) * bs[6] *
                                                   C28425 * C28460))) /
        C28204;
    const double C8435 =
        (C28489 + C28492 * C28460 + ae * C28421 * C28783 +
         C28421 *
             (ae * C28783 + C28421 * (C28492 + std::pow(C28324, 6) * bs[6] *
                                                   C28486 * C28460))) /
        C28204;
    const double C6352 = (3 * (C28338 + C28351 * C28460) +
                          C28396 * (2 * C28779 + C28396 * C28783)) /
                         C28201;
    const double C6759 = (C28421 * (2 * C28779 + C28396 * C28783)) / C28201;
    const double C8183 = (C28338 + C28351 * C28460 + C28783 * C28509) / C28201;
    const double C12213 = (3 * (C28338 + C28351 * C28509) +
                           C28421 * (2 * C28939 + C28421 * C28943)) /
                          C28201;
    const double C28383 = C28326 * C28381;
    const double C28526 = C28396 * C28381;
    const double C28569 = C28421 * C28381;
    const double C2259 = (2 * ae * (C28338 + C28351 * C28460) +
                          C28326 * (C28355 + C28381 * C28460)) /
                         C28204;
    const double C4052 = (2 * ae * (C28338 + C28351 * C28509) +
                          C28326 * (C28355 + C28381 * C28509)) /
                         C28204;
    const double C4823 =
        (2 * C28396 * C28355 + C28396 * (C28355 + C28381 * C28460)) / C28204;
    const double C5427 = (C28421 * (C28355 + C28381 * C28460)) / C28204;
    const double C5428 = (2 * ae * C28421 * (C28351 + C28375 * C28460) +
                          C28326 * C28421 *
                              (C28381 + (C28365 * C28366 +
                                         C28330 * bs[6] * std::pow(C28324, 6)) *
                                            C28333 * C28460)) /
                         C28204;
    const double C8185 =
        (C28355 + C28381 * C28460 +
         (C28381 + (C28365 * C28366 + C28330 * bs[6] * std::pow(C28324, 6)) *
                       C28333 * C28460) *
             C28509) /
        C28204;
    const double C9407 =
        (2 * C28421 * C28355 + C28421 * (C28355 + C28381 * C28509)) / C28204;
    const double C28630 = C28396 * C28418;
    const double C1557 =
        (ae * (2 * C28409 + C28326 * C28418) +
         C28421 * (2 * C28326 * C28481 +
                   C28326 * (C28481 +
                             std::pow(C28324, 6) * bs[6] * C28475 * C28330))) /
        C28204;
    const double C1675 =
        (ae * (2 * C28409 + C28326 * C28418) +
         C28421 * (2 * C28326 * C28505 +
                   C28326 * (C28505 +
                             std::pow(C28324, 6) * bs[6] * C28499 * C28330))) /
        C28204;
    const double C4270 =
        (C28478 + C28481 * C28330 + ae * C28421 * C28418 +
         C28421 *
             (ae * C28418 + C28421 * (C28481 + std::pow(C28324, 6) * bs[6] *
                                                   C28475 * C28330))) /
        C28204;
    const double C4352 =
        (C28502 + C28505 * C28330 + ae * C28421 * C28418 +
         C28421 *
             (ae * C28418 + C28421 * (C28505 + std::pow(C28324, 6) * bs[6] *
                                                   C28499 * C28330))) /
        C28204;
    const double C160 = (3 * (C28402 + C28407 * C28330) +
                         C28326 * (2 * C28409 + C28326 * C28418)) /
                        C28201;
    const double C711 = (C28396 * (2 * C28409 + C28326 * C28418) +
                         (2 * C28349 + C28326 * C28377) * ae) /
                        C28201;
    const double C1295 = (C28421 * (2 * C28409 + C28326 * C28418)) / C28201;
    const double C4097 = (C28402 + C28407 * C28330 + C28418 * C28509) / C28201;
    const double C28737 = C28735 + C28376;
    const double C9710 = C155 * C9482;
    const double C28801 = ae * C28796;
    const double C28799 = C28396 * C28796;
    const double C28828 = C28421 * C28796;
    const double C28847 = C28796 * C28509;
    const double C12259 = (3 * (C28402 + C28407 * C28509) +
                           C28421 * (2 * C28947 + C28421 * C28949)) /
                          C28201;
    const double C165 =
        (3 * (C28406 + ae * C28409 + C28326 * C28417) +
         ae * (2 * C28409 + C28326 * C28418) +
         C28326 *
             (2 * C28417 + ae * C28418 +
              C28326 * (C28413 + ae * C28326 * C28414 +
                        C28326 * (ae * C28414 + C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28400)))) /
        C28204;
    const double C1296 =
        (C28421 * (C28406 + ae * C28409 + C28326 * C28417)) / C28204;
    const double C1299 =
        (C28421 *
         (2 * C28417 + ae * C28418 +
          C28326 * (C28413 + ae * C28326 * C28414 +
                    C28326 * (ae * C28414 + C28326 * std::pow(C28324, 6) *
                                                bs[6] * C28400)))) /
        C28204;
    const double C4099 =
        (ae * C28402 + C28326 * C28406 + C28417 * C28509) / C28204;
    const double C4100 =
        (C28406 + ae * C28409 + C28326 * C28417 +
         (C28413 + ae * C28326 * C28414 +
          C28326 *
              (ae * C28414 + C28326 * std::pow(C28324, 6) * bs[6] * C28400)) *
             C28509) /
        C28204;
    const double C9484 =
        (2 * C28421 * C28417 +
         C28421 * (C28417 + (ae * C28414 +
                             C28326 * std::pow(C28324, 6) * bs[6] * C28400) *
                                C28509)) /
        C28204;
    const double C6400 =
        (3 * (C28406 + ae * C28779 + C28396 * C28782) +
         ae * (2 * C28779 + C28396 * C28783) +
         C28396 *
             (2 * C28782 + ae * C28783 +
              C28396 * (C28413 + ae * C28396 * C28375 +
                        C28396 * (ae * C28375 + C28396 * std::pow(C28324, 6) *
                                                    bs[6] * C28400)))) /
        C28204;
    const double C6825 =
        (C28421 *
         (2 * C28782 + ae * C28783 +
          C28396 * (C28413 + ae * C28396 * C28375 +
                    C28396 * (ae * C28375 + C28396 * std::pow(C28324, 6) *
                                                bs[6] * C28400)))) /
        C28204;
    const double C8229 =
        (ae * C28338 + C28396 * C28406 + C28782 * C28509) / C28204;
    const double C8230 =
        (C28406 + ae * C28779 + C28396 * C28782 +
         (C28413 + ae * C28396 * C28375 +
          C28396 *
              (ae * C28375 + C28396 * std::pow(C28324, 6) * bs[6] * C28400)) *
             C28509) /
        C28204;
    const double C10864 =
        (2 * C28421 * C28782 +
         C28421 * (C28782 + (ae * C28375 +
                             C28396 * std::pow(C28324, 6) * bs[6] * C28400) *
                                C28509)) /
        C28204;
    const double C12267 = C12263 + C12264;
    const double C28710 = C28421 * C28443;
    const double C973 =
        (ae * (2 * C28434 + C28326 * C28443) +
         C28396 * (2 * C28326 * C28481 +
                   C28326 * (C28481 +
                             std::pow(C28324, 6) * bs[6] * C28475 * C28330))) /
        C28204;
    const double C1091 =
        (ae * (2 * C28434 + C28326 * C28443) +
         C28396 * (2 * C28326 * C28505 +
                   C28326 * (C28505 +
                             std::pow(C28324, 6) * bs[6] * C28499 * C28330))) /
        C28204;
    const double C2477 =
        (C28478 + C28481 * C28330 + ae * C28396 * C28443 +
         C28396 *
             (ae * C28443 + C28396 * (C28481 + std::pow(C28324, 6) * bs[6] *
                                                   C28475 * C28330))) /
        C28204;
    const double C2559 =
        (C28502 + C28505 * C28330 + ae * C28396 * C28443 +
         C28396 *
             (ae * C28443 + C28396 * (C28505 + std::pow(C28324, 6) * bs[6] *
                                                   C28499 * C28330))) /
        C28204;
    const double C227 = (3 * (C28427 + C28432 * C28330) +
                         C28326 * (2 * C28434 + C28326 * C28443)) /
                        C28201;
    const double C781 = (C28396 * (2 * C28434 + C28326 * C28443)) / C28201;
    const double C1365 = (C28421 * (2 * C28434 + C28326 * C28443) +
                          (2 * C28349 + C28326 * C28377) * ae) /
                         C28201;
    const double C2348 = (C28427 + C28432 * C28330 + C28443 * C28460) / C28201;
    const double C2774 =
        (C28421 * C28396 * C28443 + C28396 * C28377 * ae) / C28201;
    const double C28874 = C28421 * C28873;
    const double C28906 = C28904 + C28376;
    const double C5364 = C222 * C4956;
    const double C5863 = C222 * C5540;
    const double C20765 = C17993 * C5540;
    const double C28861 = C28421 * C28814;
    const double C6439 = (3 * (C28427 + C28432 * C28460) +
                          C28396 * (2 * C28810 + C28396 * C28814)) /
                         C28201;
    const double C6876 = (C28421 * (2 * C28810 + C28396 * C28814) +
                          (2 * C28723 + C28396 * C28798) * ae) /
                         C28201;
    const double C28930 = C28928 + C28797;
    const double C28969 = ae * C28964;
    const double C28967 = C28421 * C28964;
    const double C232 =
        (3 * (C28431 + ae * C28434 + C28326 * C28442) +
         ae * (2 * C28434 + C28326 * C28443) +
         C28326 *
             (2 * C28442 + ae * C28443 +
              C28326 * (C28438 + ae * C28326 * C28439 +
                        C28326 * (ae * C28439 + C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28425)))) /
        C28204;
    const double C782 =
        (C28396 * (C28431 + ae * C28434 + C28326 * C28442)) / C28204;
    const double C785 =
        (C28396 *
         (2 * C28442 + ae * C28443 +
          C28326 * (C28438 + ae * C28326 * C28439 +
                    C28326 * (ae * C28439 + C28326 * std::pow(C28324, 6) *
                                                bs[6] * C28425)))) /
        C28204;
    const double C2350 =
        (ae * C28427 + C28326 * C28431 + C28442 * C28460) / C28204;
    const double C2351 =
        (C28431 + ae * C28434 + C28326 * C28442 +
         (C28438 + ae * C28326 * C28439 +
          C28326 *
              (ae * C28439 + C28326 * std::pow(C28324, 6) * bs[6] * C28425)) *
             C28460) /
        C28204;
    const double C4958 =
        (2 * C28396 * C28442 +
         C28396 * (C28442 + (ae * C28439 +
                             C28326 * std::pow(C28324, 6) * bs[6] * C28425) *
                                C28460)) /
        C28204;
    const double C12309 =
        (3 * (C28431 + ae * C28939 + C28421 * C28942) +
         ae * (2 * C28939 + C28421 * C28943) +
         C28421 *
             (2 * C28942 + ae * C28943 +
              C28421 * (C28438 + ae * C28421 * C28375 +
                        C28421 * (ae * C28375 + C28421 * std::pow(C28324, 6) *
                                                    bs[6] * C28425)))) /
        C28204;
    const double C6447 = C6443 + C6444;
    const double C6887 = C6879 + C6880;
    const double C293 =
        (3 * (C28451 + ae * C28409 + C28326 * C28456) +
         ae * (2 * C28409 + C28326 * C28418) +
         C28326 *
             (2 * C28456 + ae * C28418 +
              C28326 * (C28454 + ae * C28326 * C28414 +
                        C28326 * (ae * C28414 + C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28448)))) /
        C28204;
    const double C1432 =
        (C28421 * (C28451 + ae * C28409 + C28326 * C28456)) / C28204;
    const double C1435 =
        (C28421 *
         (2 * C28456 + ae * C28418 +
          C28326 * (C28454 + ae * C28326 * C28414 +
                    C28326 * (ae * C28414 + C28326 * std::pow(C28324, 6) *
                                                bs[6] * C28448)))) /
        C28204;
    const double C4184 =
        (ae * C28402 + C28326 * C28451 + C28456 * C28509) / C28204;
    const double C4185 =
        (C28451 + ae * C28409 + C28326 * C28456 +
         (C28454 + ae * C28326 * C28414 +
          C28326 *
              (ae * C28414 + C28326 * std::pow(C28324, 6) * bs[6] * C28448)) *
             C28509) /
        C28204;
    const double C9616 =
        (2 * C28421 * C28456 +
         C28421 * (C28456 + (ae * C28414 +
                             C28326 * std::pow(C28324, 6) * bs[6] * C28448) *
                                C28509)) /
        C28204;
    const double C6488 =
        (3 * (C28451 + ae * C28779 + C28396 * C28787) +
         ae * (2 * C28779 + C28396 * C28783) +
         C28396 *
             (2 * C28787 + ae * C28783 +
              C28396 * (C28454 + ae * C28396 * C28375 +
                        C28396 * (ae * C28375 + C28396 * std::pow(C28324, 6) *
                                                    bs[6] * C28448)))) /
        C28204;
    const double C28732 = C28326 * C28470;
    const double C28790 = C28396 * C28470;
    const double C28826 = C28421 * C28470;
    const double C337 =
        (3 * (C28465 + C28470 * C28330) +
         C28326 * (2 * C28326 * C28470 +
                   C28326 * (C28470 + (C28365 * C28366 +
                                       C28460 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28330))) /
        C28204;
    const double C902 = (2 * ae * (C28402 + C28407 * C28330) +
                         C28396 * (C28465 + C28470 * C28330)) /
                        C28204;
    const double C905 =
        (2 * ae * (2 * C28409 + C28326 * C28418) +
         C28396 * (2 * C28326 * C28470 +
                   C28326 * (C28470 + (C28365 * C28366 +
                                       C28460 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28330))) /
        C28204;
    const double C1486 = (C28421 * (C28465 + C28470 * C28330)) / C28204;
    const double C1489 =
        (C28421 * (2 * C28326 * C28470 +
                   C28326 * (C28470 + (C28365 * C28366 +
                                       C28460 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28330))) /
        C28204;
    const double C2882 =
        (2 * ae * C28421 * C28409 + C28396 * C28421 * C28326 * C28470) / C28204;
    const double C2883 = (2 * ae * C28421 * C28418 +
                          C28396 * C28421 *
                              (C28470 + (C28365 * C28366 +
                                         C28460 * bs[6] * std::pow(C28324, 6)) *
                                            C28333 * C28330)) /
                         C28204;
    const double C4225 = (C28326 * C28465 + C28326 * C28470 * C28509) / C28204;
    const double C4226 =
        (C28465 + C28470 * C28330 +
         (C28470 + (C28365 * C28366 + C28460 * bs[6] * std::pow(C28324, 6)) *
                       C28333 * C28330) *
             C28509) /
        C28204;
    const double C8351 = (2 * ae * (C28402 + C28407 * C28509) +
                          C28396 * (C28465 + C28470 * C28509)) /
                         C28204;
    const double C9699 =
        (2 * C28421 * C28465 + C28421 * (C28465 + C28470 * C28509)) / C28204;
    const double C6575 =
        (3 * (C28478 + ae * C28810 + C28396 * C28813) +
         ae * (2 * C28810 + C28396 * C28814) +
         C28396 *
             (2 * C28813 + ae * C28814 +
              C28396 * (C28481 + ae * C28396 * C28439 +
                        C28396 * (ae * C28439 + C28396 * std::pow(C28324, 6) *
                                                    bs[6] * C28475)))) /
        C28204;
    const double C8394 =
        (ae * (C28427 + C28421 * (C28421 * C28432 + C28348) +
               C28421 * C28343 * ae) +
         C28396 * (C28478 + ae * C28421 * C28407 + C28421 * C28833)) /
        C28204;
    const double C8395 =
        (C28478 + ae * C28421 * C28407 + C28421 * C28833 +
         ae * (C28810 + C28421 * (C28421 * C28396 * C28439 + C28797) +
               C28421 * C28793 * ae) +
         C28396 *
             (ae * (C28432 + C28421 * (C28421 * C28439 + C28371) +
                    C28421 * C28364 * ae) +
              C28396 * (C28481 + ae * C28421 * C28414 +
                        C28421 * (ae * C28414 + C28421 * std::pow(C28324, 6) *
                                                    bs[6] * C28475)))) /
        C28204;
    const double C9772 =
        (2 * (ae * C28402 + C28421 * C28478) + ae * (C28402 + C28407 * C28509) +
         C28421 * (C28478 + ae * C28421 * C28407 + C28421 * C28833)) /
        C28204;
    const double C11108 =
        (ae * (2 * C28896 +
               C28421 * (C28432 + C28421 * (C28421 * C28439 + C28371) +
                         C28421 * C28364 * ae) +
               (C28343 + C28364 * C28509) * ae) +
         C28396 *
             (2 * C28833 + ae * (C28407 + C28414 * C28509) +
              C28421 * (C28481 + ae * C28421 * C28414 +
                        C28421 * (ae * C28414 + C28421 * std::pow(C28324, 6) *
                                                    bs[6] * C28475)))) /
        C28204;
    const double C12442 =
        (3 * (C28478 + ae * C28947 + C28421 * C28833) +
         ae * (2 * C28947 + C28421 * C28949) +
         C28421 *
             (2 * C28833 + ae * C28949 +
              C28421 * (C28481 + ae * C28421 * C28414 +
                        C28421 * (ae * C28414 + C28421 * std::pow(C28324, 6) *
                                                    bs[6] * C28475)))) /
        C28204;
    const double C981 = C975 + C976;
    const double C1565 = C1559 + C1560;
    const double C459 =
        (3 * (C28489 + ae * C28434 + C28326 * C28494) +
         ae * (2 * C28434 + C28326 * C28443) +
         C28326 *
             (2 * C28494 + ae * C28443 +
              C28326 * (C28492 + ae * C28326 * C28439 +
                        C28326 * (ae * C28439 + C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28486)))) /
        C28204;
    const double C1034 =
        (C28396 * (C28489 + ae * C28434 + C28326 * C28494)) / C28204;
    const double C1037 =
        (C28396 *
         (2 * C28494 + ae * C28443 +
          C28326 * (C28492 + ae * C28326 * C28439 +
                    C28326 * (ae * C28439 + C28326 * std::pow(C28324, 6) *
                                                bs[6] * C28486)))) /
        C28204;
    const double C2517 =
        (ae * C28427 + C28326 * C28489 + C28494 * C28460) / C28204;
    const double C2518 =
        (C28489 + ae * C28434 + C28326 * C28494 +
         (C28492 + ae * C28326 * C28439 +
          C28326 *
              (ae * C28439 + C28326 * std::pow(C28324, 6) * bs[6] * C28486)) *
             C28460) /
        C28204;
    const double C5231 =
        (2 * C28396 * C28494 +
         C28396 * (C28494 + (ae * C28439 +
                             C28326 * std::pow(C28324, 6) * bs[6] * C28486) *
                                C28460)) /
        C28204;
    const double C12481 =
        (3 * (C28489 + ae * C28939 + C28421 * C28952) +
         ae * (2 * C28939 + C28421 * C28943) +
         C28421 *
             (2 * C28952 + ae * C28943 +
              C28421 * (C28492 + ae * C28421 * C28375 +
                        C28421 * (ae * C28375 + C28421 * std::pow(C28324, 6) *
                                                    bs[6] * C28486)))) /
        C28204;
    const double C6662 =
        (3 * (C28502 + ae * C28810 + C28396 * C28818) +
         ae * (2 * C28810 + C28396 * C28814) +
         C28396 *
             (2 * C28818 + ae * C28814 +
              C28396 * (C28505 + ae * C28396 * C28439 +
                        C28396 * (ae * C28439 + C28396 * std::pow(C28324, 6) *
                                                    bs[6] * C28499)))) /
        C28204;
    const double C12523 =
        (3 * (C28502 + ae * C28947 + C28421 * C28955) +
         ae * (2 * C28947 + C28421 * C28949) +
         C28421 *
             (2 * C28955 + ae * C28949 +
              C28421 * (C28505 + ae * C28421 * C28414 +
                        C28421 * (ae * C28414 + C28421 * std::pow(C28324, 6) *
                                                    bs[6] * C28499)))) /
        C28204;
    const double C1099 = C1093 + C1094;
    const double C1683 = C1677 + C1678;
    const double C28754 = C28326 * C28519;
    const double C28925 = C28396 * C28519;
    const double C28958 = C28421 * C28519;
    const double C562 =
        (3 * (C28514 + C28519 * C28330) +
         C28326 * (2 * C28326 * C28519 +
                   C28326 * (C28519 + (C28365 * C28366 +
                                       C28509 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28330))) /
        C28204;
    const double C1152 = (C28396 * (C28514 + C28519 * C28330)) / C28204;
    const double C1155 =
        (C28396 * (2 * C28326 * C28519 +
                   C28326 * (C28519 + (C28365 * C28366 +
                                       C28509 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28330))) /
        C28204;
    const double C1736 = (2 * ae * (C28427 + C28432 * C28330) +
                          C28421 * (C28514 + C28519 * C28330)) /
                         C28204;
    const double C1739 =
        (2 * ae * (2 * C28434 + C28326 * C28443) +
         C28421 * (2 * C28326 * C28519 +
                   C28326 * (C28519 + (C28365 * C28366 +
                                       C28509 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28330))) /
        C28204;
    const double C2599 = (C28326 * C28514 + C28326 * C28519 * C28460) / C28204;
    const double C2600 =
        (C28514 + C28519 * C28330 +
         (C28519 + (C28365 * C28366 + C28509 * bs[6] * std::pow(C28324, 6)) *
                       C28333 * C28330) *
             C28460) /
        C28204;
    const double C3097 =
        (2 * ae * C28396 * C28434 + C28421 * C28396 * C28326 * C28519) / C28204;
    const double C3098 = (2 * ae * C28396 * C28443 +
                          C28421 * C28396 *
                              (C28519 + (C28365 * C28366 +
                                         C28509 * bs[6] * std::pow(C28324, 6)) *
                                            C28333 * C28330)) /
                         C28204;
    const double C5354 =
        (2 * C28396 * C28514 + C28396 * (C28514 + C28519 * C28460)) / C28204;
    const double C5859 = (2 * ae * (C28427 + C28432 * C28460) +
                          C28421 * (C28514 + C28519 * C28460)) /
                         C28204;
    const double C6701 =
        (3 * (C28514 + C28519 * C28460) +
         C28396 * (2 * C28396 * C28519 +
                   C28396 * (C28519 + (C28365 * C28366 +
                                       C28509 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28460))) /
        C28204;
    const double C7230 =
        (2 * ae * (2 * C28810 + C28396 * C28814) +
         C28421 * (2 * C28396 * C28519 +
                   C28396 * (C28519 + (C28365 * C28366 +
                                       C28509 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28460))) /
        C28204;
    const double C2939 =
        (ae * (C28421 * C28443 + C28380) +
         C28396 *
             (ae * C28418 + C28421 * (C28481 + std::pow(C28324, 6) * bs[6] *
                                                   C28475 * C28330))) /
        C28204;
    const double C5704 =
        (ae * C28409 + C28421 * C28745 +
         ae * (C28421 * C28396 * C28746 + C28736) +
         C28396 *
             (ae * (C28421 * C28746 + C28376) +
              C28396 * (ae * C28733 + C28421 * C28326 * std::pow(C28324, 6) *
                                          bs[6] * C28475))) /
        C28204;
    const double C7061 =
        (2 * (ae * (C28421 * C28432 + C28348) + C28396 * C28833) +
         ae * (C28421 * C28814 + C28800) +
         C28396 *
             (C28833 + ae * (C28421 * C28396 * C28439 + C28797) +
              C28396 * (ae * (C28421 * C28439 + C28371) +
                        C28396 * (ae * C28414 + C28421 * std::pow(C28324, 6) *
                                                    bs[6] * C28475)))) /
        C28204;
    const double C28211 = C28210 / C28201;
    const double C4447 = C4440 * C99;
    const double C4444 = C4440 * C2255;
    const double C4443 = C4440 * C646;
    const double C4442 = C4440 * C98;
    const double C4830 = C4440 * C4821;
    const double C5050 = C4440 * C2253;
    const double C5048 = C4440 * C709;
    const double C5046 = C4440 * C641;
    const double C5042 = C4440 * C2252;
    const double C5040 = C4440 * C710;
    const double C5038 = C4440 * C642;
    const double C5243 = C4440 * C2347;
    const double C5240 = C4440 * C779;
    const double C5237 = C4440 * C2346;
    const double C5234 = C4440 * C780;
    const double C5432 = C4440 * C1230;
    const double C5431 = C4440 * C2657;
    const double C5430 = C4440 * C5425;
    const double C6492 = C4440 * C4819;
    const double C6620 = C4440 * C4955;
    const double C6952 = C4440 * C2654;
    const double C6948 = C4440 * C5423;
    const double C7123 = C4440 * C2772;
    const double C7120 = C4440 * C5539;
    const double C8188 = C4440 * C8182;
    const double C8187 = C4440 * C4048;
    const double C9414 = C4440 * C9405;
    const double C9632 = C4440 * C4096;
    const double C9630 = C4440 * C4046;
    const double C9628 = C4440 * C1293;
    const double C9626 = C4440 * C1225;
    const double C9624 = C4440 * C4095;
    const double C9622 = C4440 * C4045;
    const double C9620 = C4440 * C1294;
    const double C9618 = C4440 * C1226;
    const double C9831 = C4440 * C1363;
    const double C9827 = C4440 * C1364;
    const double C10810 = C4440 * C10805;
    const double C10987 = C4440 * C8180;
    const double C12353 = C4440 * C9403;
    const double C12351 = C4440 * C9481;
    const double C23784 = C4440 * C2655;
    const double C24001 = C4440 * C2773;
    const double C13679 = C13672 + C13673;
    const double C19340 = C19327 + C19328;
    const double C28261 = C28260 / C28201;
    const double C12714 = C12704 + C12705;
    const double C12709 = C12694 + C12695;
    const double C13064 = C13058 + C13059;
    const double C13063 = C13056 + C13057;
    const double C13752 = C13748 + C13749;
    const double C24290 = C24285 + C24286;
    const double C26004 = C25999 + C26000;
    const double C504 = C179 * C222;
    const double C516 = C513 * C29220;
    const double C18282 = C513 * C17888;
    const double C9507 = C9501 * C29123;
    const double C19170 = C9501 * C12619;
    const double C9506 = C9500 * C4440;
    const double C353 = C350 + C341;
    const double C9714 = C9711 + C1497;
    const double C4615 = C4488 * C158;
    const double C4614 = C4488 * C157;
    const double C4609 = C4488 * C156;
    const double C5117 = C4488 * C709;
    const double C5116 = C4488 * C710;
    const double C5651 = C4488 * C1293;
    const double C5650 = C4488 * C1294;
    const double C8354 = C4488 * C4095;
    const double C28287 = C28286 / C28201;
    const double C18017 = C18007 + C18008;
    const double C18012 = C17997 + C17998;
    const double C18179 = C18173 + C18174;
    const double C18178 = C18171 + C18172;
    const double C19485 = C19481 + C19482;
    const double C23717 = C23712 + C23713;
    const double C23715 = C23708 + C23709;
    const double C25533 = C25527 + C25528;
    const double C25531 = C25523 + C25524;
    const double C26079 = C26071 + C26072;
    const double C402 = C246 * C155;
    const double C414 = C411 * C29209;
    const double C12947 = C411 * C12621;
    const double C4981 = C4975 * C29123;
    const double C13355 = C4975 * C12619;
    const double C4980 = C4974 * C4440;
    const double C578 = C575 + C566;
    const double C5368 = C5365 + C1163;
    const double C8879 = C8638 * C225;
    const double C8878 = C8638 * C224;
    const double C8873 = C8638 * C223;
    const double C9351 = C8638 * C779;
    const double C9350 = C8638 * C780;
    const double C9955 = C8638 * C1363;
    const double C9954 = C8638 * C1364;
    const double C10752 = C8638 * C2346;
    const double C11272 = C8638 * C2772;
    const double C105 =
        ((C28329 + C28330 * C28331 * C28335) * C28333 + C28341 + C28341 +
         C28326 *
             (2 * ae * C28338 +
              C28326 *
                  (C28331 * C28335 + C28330 * bs[4] * std::pow(C28324, 4)) *
                  C28333)) /
        C28204;
    const double C713 =
        (C28341 + C28396 * (ae * C28402 + C28326 * C28406)) / C28204;
    const double C849 =
        (C28341 + C28396 * (ae * C28402 + C28326 * C28451)) / C28204;
    const double C1367 =
        (C28341 + C28421 * (ae * C28427 + C28326 * C28431)) / C28204;
    const double C1619 =
        (C28341 + C28421 * (ae * C28427 + C28326 * C28489)) / C28204;
    const double C111 = C92 * C100;
    const double C173 = C155 * C100;
    const double C240 = C222 * C100;
    const double C4448 = C4440 * C100;
    const double C12634 = C12626 * C100;
    const double C721 = C155 * C645;
    const double C791 = C222 * C645;
    const double C4446 = C4440 * C645;
    const double C5047 = C29123 * C645;
    const double C12631 = C12626 * C645;
    const double C12698 = C12690 * C645;
    const double C13437 = C12619 * C645;
    const double C13431 = C12620 * C645;
    const double C1305 = C155 * C1229;
    const double C1375 = C222 * C1229;
    const double C5433 = C4440 * C1229;
    const double C9627 = C29123 * C1229;
    const double C13890 = C12626 * C1229;
    const double C18001 = C17993 * C1229;
    const double C19330 = C12619 * C1229;
    const double C19324 = C12620 * C1229;
    const double C4983 = C4977 * C29123;
    const double C15236 = C4977 * C12619;
    const double C6893 = C6889 * C29123;
    const double C15772 = C6889 * C12619;
    const double C10879 = C10875 * C29123;
    const double C20899 = C10875 * C12619;
    const double C9509 = C9503 * C29123;
    const double C22672 = C9503 * C12619;
    const double C28628 = ae * C28627;
    const double C2303 =
        (C28326 * C28402 + C28396 * C28627 + C28396 * C28349 * ae) / C28201;
    const double C2717 = (C28421 * C28627) / C28201;
    const double C28708 = ae * C28707;
    const double C4140 =
        (C28326 * C28427 + C28421 * C28707 + C28421 * C28349 * ae) / C28201;
    const double C14261 = C29220 * C2938;
    const double C18789 = C17889 * C2938;
    const double C4978 = C4970 + C4971;
    const double C5367 = C5362 + C2603;
    const double C14045 = C14042 + C14043;
    const double C14474 = C14471 + C3101;
    const double C18583 = C18577 + C18578;
    const double C9504 = C9496 + C9497;
    const double C9713 = C9708 + C4229;
    const double C2720 = (C28421 * (C28358 + C28396 * C28417)) / C28204;
    const double C28359 = C28338 + C28357;
    const double C28522 = ae * C28521;
    const double C2658 = (C28421 * C28521) / C28201;
    const double C28565 = ae * C28564;
    const double C4445 = C4440 * C2256;
    const double C4972 = C222 * C2256;
    const double C5051 = C29123 * C2256;
    const double C13190 = C12626 * C2256;
    const double C13276 = C12690 * C2256;
    const double C15293 = C12620 * C2256;
    const double C8560 = C4440 * C4049;
    const double C9498 = C155 * C4049;
    const double C9631 = C29123 * C4049;
    const double C17431 = C12626 * C4049;
    const double C19243 = C17993 * C4049;
    const double C22779 = C12620 * C4049;
    const double C28728 = C28402 + C28726;
    const double C28765 = ae * C28764;
    const double C28900 = C28427 + C28898;
    const double C4832 = C29123 * C649;
    const double C13193 = C12619 * C649;
    const double C13189 = C12620 * C649;
    const double C9416 = C29123 * C1233;
    const double C19086 = C12619 * C1233;
    const double C19084 = C12620 * C1233;
    const double C4829 = C29123 * C2258;
    const double C15125 = C12619 * C2258;
    const double C6765 = C29123 * C2660;
    const double C15629 = C12619 * C2660;
    const double C9413 = C29123 * C4051;
    const double C22611 = C12619 * C4051;
    const double C348 = C29209 * C336;
    const double C912 = C29209 * C903;
    const double C12875 = C12622 * C903;
    const double C13523 = C12621 * C903;
    const double C1496 = C29209 * C1487;
    const double C14183 = C12621 * C1487;
    const double C11047 = C29209 * C2881;
    const double C24500 = C12622 * C2881;
    const double C26220 = C12621 * C2881;
    const double C9705 = C29209 * C4224;
    const double C27980 = C12621 * C4224;
    const double C573 = C29220 * C561;
    const double C1162 = C29220 * C1153;
    const double C19004 = C17888 * C1153;
    const double C1746 = C29220 * C1737;
    const double C18348 = C17889 * C1737;
    const double C19706 = C17888 * C1737;
    const double C5360 = C29220 * C2598;
    const double C25850 = C17888 * C2598;
    const double C7235 = C29220 * C3096;
    const double C24140 = C17889 * C3096;
    const double C26514 = C17888 * C3096;
    const double C28859 = ae * C28858;
    const double C8269 =
        (C28396 * C28427 + C28421 * C28858 + C28421 * C28723 * ae) / C28201;
    const double C7064 = C29220 * C5703;
    const double C25688 = C17889 * C5703;
    const double C2431 =
        ((C28329 + C28460 * C28331 * C28335) * C28333 + C28624 + C28624 +
         C28396 * (2 * ae * C28402 + C28396 * C28465)) /
        C28204;
    const double C3043 =
        (C28624 + C28421 * (ae * C28427 + C28396 * C28502)) / C28204;
    const double C2435 = C155 * C2302;
    const double C4611 = C4490 * C2302;
    const double C5044 = C4440 * C2302;
    const double C5115 = C4489 * C2302;
    const double C5174 = C222 * C2302;
    const double C6535 = C4488 * C2302;
    const double C13524 = C12690 * C2302;
    const double C2885 = C155 * C2716;
    const double C5649 = C4489 * C2716;
    const double C6950 = C4440 * C2716;
    const double C7009 = C4488 * C2716;
    const double C7065 = C222 * C2716;
    const double C10867 = C29209 * C2716;
    const double C14184 = C12690 * C2716;
    const double C23924 = C17993 * C2716;
    const double C24282 = C12622 * C2716;
    const double C25994 = C12621 * C2716;
    const double C8355 = C4489 * C8227;
    const double C9142 = C155 * C8227;
    const double C10871 = C29209 * C8227;
    const double C10989 = C4440 * C8227;
    const double C17635 = C12690 * C8227;
    const double C26297 = C17993 * C8227;
    const double C27816 = C12622 * C8227;
    const double C507 = C181 * C222;
    const double C354 = C351 + C344;
    const double C415 = C412 * C29209;
    const double C12952 = C412 * C12621;
    const double C512 = C184 * C222;
    const double C355 = C352 + C347;
    const double C416 = C413 * C29209;
    const double C1095 = C726 * C222;
    const double C917 = C915 + C908;
    const double C1098 = C728 * C222;
    const double C918 = C916 + C911;
    const double C1679 = C1310 * C222;
    const double C18286 = C1310 * C17993;
    const double C19175 = C1310 * C12626;
    const double C1501 = C1499 + C1492;
    const double C1682 = C1312 * C222;
    const double C9494 = C1312 * C4440;
    const double C18283 = C1312 * C17993;
    const double C19171 = C1312 * C12626;
    const double C1502 = C1500 + C1495;
    const double C1568 = C1566 * C29209;
    const double C14263 = C1566 * C12621;
    const double C9715 = C9712 + C4228;
    const double C9508 = C9502 * C4440;
    const double C12402 = C12401 + C9706;
    const double C12270 = C12268 * C4440;
    const double C4391 =
        ((C28329 + C28509 * C28331 * C28335) * C28333 + C28704 + C28704 +
         C28421 * (2 * ae * C28427 + C28421 * C28514)) /
        C28204;
    const double C4395 = C222 * C4139;
    const double C8875 = C8640 * C4139;
    const double C9829 = C4440 * C4139;
    const double C9893 = C155 * C4139;
    const double C9953 = C8639 * C4139;
    const double C12567 = C8638 * C4139;
    const double C19707 = C17993 * C4139;
    const double C984 = C982 * C29209;
    const double C12949 = C982 * C12622;
    const double C13602 = C982 * C12621;
    const double C405 = C248 * C155;
    const double C517 = C514 * C29220;
    const double C18287 = C514 * C17888;
    const double C579 = C576 + C569;
    const double C410 = C251 * C155;
    const double C518 = C515 * C29220;
    const double C580 = C577 + C572;
    const double C977 = C796 * C155;
    const double C12951 = C796 * C12690;
    const double C13360 = C796 * C12626;
    const double C1167 = C1165 + C1158;
    const double C980 = C798 * C155;
    const double C4968 = C798 * C4440;
    const double C12948 = C798 * C12690;
    const double C13356 = C798 * C12626;
    const double C1102 = C1100 * C29220;
    const double C18929 = C1100 * C17888;
    const double C1168 = C1166 + C1161;
    const double C1561 = C1380 * C155;
    const double C1751 = C1749 + C1742;
    const double C1564 = C1382 * C155;
    const double C1686 = C1684 * C29220;
    const double C18284 = C1684 * C17889;
    const double C19633 = C1684 * C17888;
    const double C1752 = C1750 + C1745;
    const double C5369 = C5366 + C2602;
    const double C4982 = C4976 * C4440;
    const double C7240 = C7238 + C3100;
    const double C6894 = C6890 * C4440;
    const double C6707 = C6706 + C5361;
    const double C6450 = C6448 * C4440;
    const double C7239 = C7237 + C5862;
    const double C6892 = C6888 * C4440;
    const double C8986 =
        (C28358 + C28396 * C28417 +
         (C28385 + C28396 * (ae * C28414 +
                             C28326 * std::pow(C28324, 6) * bs[6] * C28400)) *
             C28509) /
        C28204;
    const double C28387 = C28351 + C28384;
    const double C28530 = ae * C28528;
    const double C28648 = C28421 * C28528;
    const double C8932 = (C28521 + C28528 * C28509) / C28201;
    const double C28573 = ae * C28571;
    const double C28610 = C28356 + C28609;
    const double C28678 = C28356 + C28677;
    const double C6357 = C4440 * C6352;
    const double C6766 = C4440 * C6759;
    const double C8189 = C4440 * C8183;
    const double C12218 = C4440 * C12213;
    const double C28386 = C28368 + C28383;
    const double C2661 =
        (2 * ae * C28421 * C28396 * C28351 + C28326 * C28421 * C28526) / C28204;
    const double C4824 =
        (2 * ae * (2 * C28396 * C28351 + C28396 * (C28351 + C28375 * C28460)) +
         C28326 * (2 * C28526 +
                   C28396 * (C28381 + (C28365 * C28366 +
                                       C28330 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28460))) /
        C28204;
    const double C6353 =
        (3 * (C28355 + C28381 * C28460) +
         C28396 * (2 * C28526 +
                   C28396 * (C28381 + (C28365 * C28366 +
                                       C28330 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28460))) /
        C28204;
    const double C6760 =
        (C28421 * (2 * C28526 +
                   C28396 * (C28381 + (C28365 * C28366 +
                                       C28330 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28460))) /
        C28204;
    const double C8184 = (C28396 * C28355 + C28526 * C28509) / C28204;
    const double C8933 =
        (2 * ae * (C28779 + C28396 * C28375 * C28509) +
         C28326 * (C28526 + C28396 *
                                (C28365 * C28366 +
                                 C28330 * bs[6] * std::pow(C28324, 6)) *
                                C28333 * C28509)) /
        C28204;
    const double C10806 =
        (2 * C28421 * C28526 +
         C28421 * (C28526 + C28396 *
                                (C28365 * C28366 +
                                 C28330 * bs[6] * std::pow(C28324, 6)) *
                                C28333 * C28509)) /
        C28204;
    const double C9408 =
        (2 * ae * (2 * C28421 * C28351 + C28421 * (C28351 + C28375 * C28509)) +
         C28326 * (2 * C28569 +
                   C28421 * (C28381 + (C28365 * C28366 +
                                       C28330 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28509))) /
        C28204;
    const double C12214 =
        (3 * (C28355 + C28381 * C28509) +
         C28421 * (2 * C28569 +
                   C28421 * (C28381 + (C28365 * C28366 +
                                       C28330 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28509))) /
        C28204;
    const double C4834 = C29123 * C2259;
    const double C15123 = C12620 * C2259;
    const double C9418 = C29123 * C4052;
    const double C22609 = C12620 * C4052;
    const double C6356 = C29123 * C4823;
    const double C6763 = C29123 * C5427;
    const double C12217 = C29123 * C9407;
    const double C28631 = C28630 + C28380;
    const double C349 = C155 * C160;
    const double C914 = C155 * C711;
    const double C12883 = C12690 * C711;
    const double C1498 = C155 * C1295;
    const double C4230 = C155 * C4097;
    const double C28739 = ae * C28737;
    const double C28738 = C28396 * C28737;
    const double C28767 = C28421 * C28737;
    const double C8985 = (C28627 + C28737 * C28509) / C28201;
    const double C28802 = C28407 + C28799;
    const double C28830 = ae * C28828;
    const double C28848 = C28724 + C28847;
    const double C12400 = C155 * C12259;
    const double C1302 = C29209 * C1296;
    const double C9499 = C29209 * C4099;
    const double C10873 = C29209 * C8229;
    const double C27812 = C12622 * C8229;
    const double C12269 = C12267 * C29123;
    const double C28711 = C28710 + C28380;
    const double C574 = C222 * C227;
    const double C1164 = C222 * C781;
    const double C1748 = C222 * C1365;
    const double C18356 = C17993 * C1365;
    const double C2604 = C222 * C2348;
    const double C3102 = C222 * C2774;
    const double C19008 = C17993 * C2774;
    const double C28875 = C28874 + C28736;
    const double C28909 = ae * C28906;
    const double C28908 = C28421 * C28906;
    const double C28862 = C28861 + C28800;
    const double C6705 = C222 * C6439;
    const double C7236 = C222 * C6876;
    const double C25852 = C17993 * C6876;
    const double C28932 = ae * C28930;
    const double C28931 = C28421 * C28930;
    const double C28970 = C28432 + C28967;
    const double C788 = C29220 * C782;
    const double C4973 = C29220 * C2350;
    const double C6449 = C6447 * C29123;
    const double C6891 = C6887 * C29123;
    const double C19336 = C12620 * C1432;
    const double C9633 = C29123 * C4184;
    const double C22775 = C12620 * C4184;
    const double C9140 =
        (2 * ae * (C28409 + C28733 * C28509) +
         C28396 * (C28732 + C28326 *
                                (C28365 * C28366 +
                                 C28460 * bs[6] * std::pow(C28324, 6)) *
                                C28333 * C28509)) /
        C28204;
    const double C9700 =
        (2 * C28421 * C28732 +
         C28421 * (C28732 + C28326 *
                                (C28365 * C28366 +
                                 C28460 * bs[6] * std::pow(C28324, 6)) *
                                C28333 * C28509)) /
        C28204;
    const double C28795 = C28789 + C28790;
    const double C11044 =
        (2 * ae * (2 * C28421 * C28407 + C28421 * (C28407 + C28414 * C28509)) +
         C28396 * (2 * C28826 +
                   C28421 * (C28470 + (C28365 * C28366 +
                                       C28460 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28509))) /
        C28204;
    const double C12396 =
        (3 * (C28465 + C28470 * C28509) +
         C28421 * (2 * C28826 +
                   C28421 * (C28470 + (C28365 * C28366 +
                                       C28460 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28509))) /
        C28204;
    const double C909 = C29209 * C902;
    const double C12878 = C12622 * C902;
    const double C1493 = C29209 * C1486;
    const double C14180 = C12622 * C2882;
    const double C18718 = C29209 * C2882;
    const double C9709 = C29209 * C4225;
    const double C11049 = C29209 * C8351;
    const double C27978 = C12622 * C8351;
    const double C12399 = C29209 * C9699;
    const double C26298 = C17889 * C8394;
    const double C983 = C981 * C29209;
    const double C12950 = C981 * C12622;
    const double C1567 = C1565 * C29209;
    const double C13677 = C12620 * C1034;
    const double C5244 = C29123 * C2517;
    const double C15455 = C12620 * C2517;
    const double C1101 = C1099 * C29220;
    const double C1685 = C1683 * C29220;
    const double C18285 = C1683 * C17889;
    const double C5355 =
        (2 * C28396 * C28754 +
         C28396 * (C28754 + C28326 *
                                (C28365 * C28366 +
                                 C28509 * bs[6] * std::pow(C28324, 6)) *
                                C28333 * C28460)) /
        C28204;
    const double C5860 =
        (2 * ae * (C28434 + C28746 * C28460) +
         C28421 * (C28754 + C28326 *
                                (C28365 * C28366 +
                                 C28509 * bs[6] * std::pow(C28324, 6)) *
                                C28333 * C28460)) /
        C28204;
    const double C28963 = C28957 + C28958;
    const double C1159 = C29220 * C1152;
    const double C1743 = C29220 * C1736;
    const double C18351 = C17889 * C1736;
    const double C5363 = C29220 * C2599;
    const double C14472 = C29220 * C3097;
    const double C19001 = C17889 * C3097;
    const double C6704 = C29220 * C5354;
    const double C7233 = C29220 * C5859;
    const double C25848 = C17889 * C5859;
    const double C28212 = C29123 - C28211;
    const double C5056 = C5042 + C5043;
    const double C5055 = C5040 + C5041;
    const double C5054 = C5038 + C5039;
    const double C5247 = C5240 + C5241;
    const double C5246 = C5237 + C5238;
    const double C5245 = C5234 + C5235;
    const double C6495 = C6492 + C6493;
    const double C6623 = C6620 + C6621;
    const double C6957 = C6952 + C6953;
    const double C6955 = C6948 + C6949;
    const double C7127 = C7123 + C7124;
    const double C7126 = C7120 + C7121;
    const double C9639 = C9628 + C9629;
    const double C9637 = C9624 + C9625;
    const double C9636 = C9622 + C9623;
    const double C9635 = C9620 + C9621;
    const double C9634 = C9618 + C9619;
    const double C9835 = C9827 + C9828;
    const double C10991 = C10987 + C10988;
    const double C12356 = C12353 + C12354;
    const double C12355 = C12351 + C12352;
    const double C28262 = C29209 - C28261;
    const double C356 = C353 + C342;
    const double C9717 = C9714 + C9703;
    const double C28288 = C29220 - C28287;
    const double C581 = C578 + C567;
    const double C5371 = C5368 + C5358;
    const double C722 = C29209 * C713;
    const double C12699 = C12622 * C713;
    const double C13279 = C12621 * C713;
    const double C5049 = C29123 * C849;
    const double C13441 = C12619 * C849;
    const double C13435 = C12620 * C849;
    const double C1376 = C29220 * C1367;
    const double C18002 = C17889 * C1367;
    const double C19246 = C17888 * C1367;
    const double C9832 = C29123 * C1619;
    const double C19558 = C12619 * C1619;
    const double C19556 = C12620 * C1619;
    const double C182 = C173 + C174;
    const double C249 = C240 + C241;
    const double C797 = C791 + C792;
    const double C5058 = C5046 + C5047;
    const double C13445 = C13430 + C13431;
    const double C1311 = C1305 + C1306;
    const double C9638 = C9626 + C9627;
    const double C19338 = C19323 + C19324;
    const double C2432 =
        (C28326 * C28465 + C28628 + C28628 +
         C28396 * (2 * ae * C28409 + C28396 * C28326 * C28470)) /
        C28204;
    const double C3044 =
        (C28628 + C28421 * (ae * C28434 + C28396 * C28326 * C28505)) / C28204;
    const double C2436 = C155 * C2303;
    const double C4612 = C4490 * C2303;
    const double C5052 = C4440 * C2303;
    const double C5118 = C4489 * C2303;
    const double C5176 = C222 * C2303;
    const double C13281 = C12622 * C2303;
    const double C13519 = C12690 * C2303;
    const double C15288 = C12626 * C2303;
    const double C2886 = C155 * C2717;
    const double C5652 = C4489 * C2717;
    const double C13967 = C12622 * C2717;
    const double C14179 = C12690 * C2717;
    const double C14260 = C222 * C2717;
    const double C15840 = C12626 * C2717;
    const double C18504 = C29209 * C2717;
    const double C18788 = C17993 * C2717;
    const double C23786 = C4440 * C2717;
    const double C4392 =
        (C28326 * C28514 + C28708 + C28708 +
         C28421 * (2 * ae * C28434 + C28421 * C28326 * C28519)) /
        C28204;
    const double C4396 = C222 * C4140;
    const double C8876 = C8640 * C4140;
    const double C9833 = C4440 * C4140;
    const double C9895 = C155 * C4140;
    const double C9956 = C8639 * C4140;
    const double C19248 = C17889 * C4140;
    const double C19702 = C17993 * C4140;
    const double C22938 = C12626 * C4140;
    const double C4984 = C4978 * C4440;
    const double C13601 = C4978 * C12690;
    const double C15235 = C4978 * C12626;
    const double C5370 = C5367 + C2603;
    const double C14262 = C14045 * C12690;
    const double C15771 = C14045 * C12626;
    const double C14475 = C14474 + C3101;
    const double C9510 = C9504 * C4440;
    const double C19632 = C9504 * C17993;
    const double C22671 = C9504 * C12626;
    const double C9716 = C9713 + C4229;
    const double C13963 = C12622 * C2720;
    const double C18502 = C29209 * C2720;
    const double C28360 = C28359 + C28352;
    const double C648 =
        (C28396 * C28355 + C28522 + C28522 +
         C28326 * (2 * ae * C28396 * C28351 + C28326 * C28396 * C28381)) /
        C28204;
    const double C2306 = (ae * C28402 + C28326 * C28406 + C28522 +
                          C28396 * (C28358 + C28396 * C28417)) /
                         C28204;
    const double C2391 = (ae * C28402 + C28326 * C28451 + C28522 +
                          C28396 * (C28358 + C28396 * C28456)) /
                         C28204;
    const double C2776 = (C28522 + C28421 * C28396 * C28442) / C28204;
    const double C2991 = (C28522 + C28421 * C28396 * C28494) / C28204;
    const double C5434 = C4440 * C2658;
    const double C13888 = C12626 * C2658;
    const double C13962 = C12690 * C2658;
    const double C14040 = C222 * C2658;
    const double C15845 = C12620 * C2658;
    const double C18501 = C155 * C2658;
    const double C18573 = C17993 * C2658;
    const double C23785 = C29123 * C2658;
    const double C1232 =
        (C28421 * C28355 + C28565 + C28565 +
         C28326 * (2 * ae * C28421 * C28351 + C28326 * C28421 * C28381)) /
        C28204;
    const double C2829 = (C28565 + C28396 * C28421 * C28456) / C28204;
    const double C4143 = (ae * C28427 + C28326 * C28431 + C28565 +
                          C28421 * (C28358 + C28421 * C28442)) /
                         C28204;
    const double C4310 = (ae * C28427 + C28326 * C28489 + C28565 +
                          C28421 * (C28358 + C28421 * C28494)) /
                         C28204;
    const double C5060 = C5050 + C5051;
    const double C15298 = C15292 + C15293;
    const double C9640 = C9630 + C9631;
    const double C22784 = C22778 + C22779;
    const double C28729 = C28728 + C28725;
    const double C5645 =
        (C28421 * C28465 + C28765 + C28765 +
         C28396 * (2 * ae * C28421 * C28407 + C28396 * C28421 * C28470)) /
        C28204;
    const double C8474 = (ae * C28427 + C28396 * C28502 + C28765 +
                          C28421 * (C28727 + C28421 * C28818)) /
                         C28204;
    const double C28901 = C28900 + C28897;
    const double C8514 =
        (C28396 * C28514 + C28859 + C28859 +
         C28421 * (2 * ae * C28810 + C28421 * C28396 * C28519)) /
        C28204;
    const double C8517 = C222 * C8269;
    const double C9348 = C8640 * C8269;
    const double C11161 = C4440 * C8269;
    const double C11217 = C155 * C8269;
    const double C11273 = C8639 * C8269;
    const double C21367 = C17993 * C8269;
    const double C26076 = C17889 * C8269;
    const double C28139 = C12690 * C8269;
    const double C11216 = C29209 * C3043;
    const double C24708 = C12622 * C3043;
    const double C26440 = C12621 * C3043;
    const double C5057 = C5044 + C5045;
    const double C5179 = C5174 + C5175;
    const double C11051 = C11046 + C2885;
    const double C6956 = C6950 + C6951;
    const double C7068 = C7065 + C7066;
    const double C10874 = C10866 + C10867;
    const double C23927 = C23924 + C23925;
    const double C24288 = C24281 + C24282;
    const double C11052 = C11048 + C9142;
    const double C10876 = C10870 + C10871;
    const double C10992 = C10989 + C10990;
    const double C27821 = C27815 + C27816;
    const double C357 = C354 + C345;
    const double C358 = C355 + C348;
    const double C920 = C918 + C912;
    const double C1504 = C1502 + C1496;
    const double C9718 = C9715 + C9705;
    const double C12262 = C9508 + C9509;
    const double C9836 = C9829 + C9830;
    const double C9898 = C9893 + C9894;
    const double C417 = C405 + C415;
    const double C519 = C507 + C517;
    const double C582 = C579 + C570;
    const double C583 = C580 + C573;
    const double C1170 = C1168 + C1162;
    const double C1754 = C1752 + C1746;
    const double C5372 = C5369 + C5360;
    const double C6442 = C4982 + C4983;
    const double C7242 = C7240 + C7235;
    const double C28388 = C28387 + C28376;
    const double C5488 =
        (C28421 * (C28417 + C28530 +
                   C28396 * (C28385 + C28396 * (ae * C28414 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28400)))) /
        C28204;
    const double C28649 = ae * C28648;
    const double C8935 = C4440 * C8932;
    const double C17433 = C12626 * C8932;
    const double C28611 = ae * C28610;
    const double C4822 = (2 * C28521 + C28396 * C28610) / C28201;
    const double C5426 = (C28421 * C28610) / C28201;
    const double C28679 = ae * C28678;
    const double C9406 = (2 * C28564 + C28421 * C28678) / C28201;
    const double C15627 = C12620 * C2661;
    const double C23569 = C29123 * C2661;
    const double C10809 = C29123 * C8184;
    const double C28632 = ae * C28631;
    const double C2304 =
        (C28402 + C28407 * C28330 + C28396 * C28631 + C28396 * C28377 * ae) /
        C28201;
    const double C2718 = (C28421 * C28631) / C28201;
    const double C28740 = C28409 + C28738;
    const double C28768 = ae * C28767;
    const double C9143 = C155 * C8985;
    const double C17637 = C12690 * C8985;
    const double C28803 = C28802 + C28797;
    const double C28849 = ae * C28848;
    const double C10863 = (2 * C28764 + C28421 * C28848) / C28201;
    const double C9505 = C9498 + C9499;
    const double C10877 = C10872 + C10873;
    const double C27819 = C27811 + C27812;
    const double C28712 = ae * C28711;
    const double C4141 =
        (C28427 + C28432 * C28330 + C28421 * C28711 + C28421 * C28377 * ae) /
        C28201;
    const double C28876 = ae * C28875;
    const double C9037 =
        (C28396 * C28434 + C28421 * C28875 + C28421 * C28734 * ae) / C28201;
    const double C28910 = C28434 + C28908;
    const double C28863 = ae * C28862;
    const double C8270 =
        (C28427 + C28432 * C28460 + C28421 * C28862 + C28421 * C28798 * ae) /
        C28201;
    const double C28933 = C28810 + C28931;
    const double C28971 = C28970 + C28965;
    const double C4979 = C4972 + C4973;
    const double C19344 = C19335 + C19336;
    const double C9641 = C9632 + C9633;
    const double C22782 = C22774 + C22775;
    const double C919 = C917 + C909;
    const double C1503 = C1501 + C1493;
    const double C12403 = C12402 + C12399;
    const double C26301 = C26297 + C26298;
    const double C13681 = C13676 + C13677;
    const double C5248 = C5243 + C5244;
    const double C15458 = C15454 + C15455;
    const double C1169 = C1167 + C1159;
    const double C1753 = C1751 + C1743;
    const double C6708 = C6707 + C6704;
    const double C7241 = C7239 + C7233;
    const double C28213 = C28212 * C28206;
    const double C88 =
        (((0 - (C28202 * C28200) / C28201) * ae) / C28201 - (0 * be) / C28208) /
            (2 * C28201) +
        ((C28202 * ((C28212 * ae) / C28201 - C28200 / C28208) + C12619) * ae) /
            C28201 +
        (0 * ae) / C28201 - C28207 / C28204;
    const double C90 =
        ((C28212 * ae) / C28201 - C28200 / C28208) / (2 * C28201) +
        ((C28202 * ((0 * ae) / C28201 - C28207 / C28204) + C12620) * ae) /
            C28201;
    const double C12624 = (C28212 * ae) / C28201 - C28200 / C28208;
    const double C5236 = C5056 * C222;
    const double C5233 = C5054 * C222;
    const double C5251 = C5247 * C29220;
    const double C23999 = C5247 * C17888;
    const double C5250 = C5246 * C29220;
    const double C25745 = C5246 * C17888;
    const double C5249 = C5245 * C29220;
    const double C23995 = C5245 * C17888;
    const double C6622 = C6495 * C222;
    const double C6624 = C6623 * C29220;
    const double C7125 = C6957 * C222;
    const double C10985 = C6957 * C155;
    const double C23996 = C6957 * C17993;
    const double C24425 = C6957 * C12690;
    const double C7122 = C6955 * C222;
    const double C25744 = C6955 * C17993;
    const double C26151 = C6955 * C12690;
    const double C7129 = C7127 * C29220;
    const double C23997 = C7127 * C17889;
    const double C26371 = C7127 * C17888;
    const double C7128 = C7126 * C29220;
    const double C25743 = C7126 * C17889;
    const double C9647 = C9639 * C29209;
    const double C24428 = C9639 * C12621;
    const double C9645 = C9637 * C29209;
    const double C27925 = C9637 * C12621;
    const double C9644 = C9636 * C155;
    const double C9643 = C9635 * C29209;
    const double C24424 = C9635 * C12621;
    const double C9642 = C9634 * C155;
    const double C10993 = C10991 * C155;
    const double C26370 = C10991 * C17993;
    const double C27924 = C10991 * C12690;
    const double C12358 = C12356 * C155;
    const double C12357 = C12355 * C29209;
    const double C28263 = C28262 * C28206;
    const double C12689 = (C28262 * ae) / C28201 - C28249 / C28208;
    const double C9720 = C9717 * C29123;
    const double C19411 = C9717 * C12619;
    const double C28289 = C28288 * C28206;
    const double C17992 = (C28288 * ae) / C28201 - C28275 / C28208;
    const double C584 = C581 * C29209;
    const double C13116 = C581 * C12621;
    const double C727 = C721 + C722;
    const double C12711 = C12698 + C12699;
    const double C5059 = C5048 + C5049;
    const double C13447 = C13434 + C13435;
    const double C1381 = C1375 + C1376;
    const double C18014 = C18001 + C18002;
    const double C9837 = C9831 + C9832;
    const double C19562 = C19555 + C19556;
    const double C4969 = C797 * C29123;
    const double C13359 = C797 * C12619;
    const double C13357 = C797 * C12620;
    const double C5239 = C5058 * C222;
    const double C9495 = C1311 * C29123;
    const double C19174 = C1311 * C12619;
    const double C19172 = C1311 * C12620;
    const double C9646 = C9638 * C155;
    const double C13520 = C12622 * C2432;
    const double C14400 = C12622 * C3044;
    const double C18927 = C29209 * C3044;
    const double C5180 = C5176 + C5177;
    const double C13286 = C13280 + C13281;
    const double C18719 = C18717 + C2886;
    const double C13972 = C13966 + C13967;
    const double C14265 = C14260 + C14261;
    const double C18506 = C18503 + C18504;
    const double C18792 = C18788 + C18789;
    const double C19703 = C17889 * C4392;
    const double C9899 = C9895 + C9896;
    const double C19253 = C19247 + C19248;
    const double C5373 = C5370 + C5363;
    const double C14476 = C14475 + C14472;
    const double C9719 = C9716 + C9709;
    const double C28361 = ae * C28360;
    const double C101 =
        (2 * C28340 + C28326 * C28360 + (C28329 + C28343 * C28330) * ae) /
        C28201;
    const double C644 = (C28396 * C28360) / C28201;
    const double C1228 = (C28421 * C28360) / C28201;
    const double C13195 = C12620 * C648;
    const double C13277 = C12622 * C2306;
    const double C5053 = C29123 * C2391;
    const double C15289 = C12620 * C2391;
    const double C14041 = C29220 * C2776;
    const double C18574 = C17889 * C2776;
    const double C16055 = C12620 * C2991;
    const double C24002 = C29123 * C2991;
    const double C13970 = C13962 + C13963;
    const double C15850 = C15844 + C15845;
    const double C18505 = C18501 + C18502;
    const double C23788 = C23784 + C23785;
    const double C19088 = C12620 * C1232;
    const double C15841 = C12620 * C2829;
    const double C23787 = C29123 * C2829;
    const double C19244 = C17889 * C4143;
    const double C9834 = C29123 * C4310;
    const double C22939 = C12620 * C4310;
    const double C5242 = C5060 * C222;
    const double C9648 = C9640 * C155;
    const double C28730 = ae * C28729;
    const double C4901 =
        (2 * C28623 + C28396 * C28729 + (C28329 + C28343 * C28460) * ae) /
        C28201;
    const double C5485 = (C28421 * C28729) / C28201;
    const double C26222 = C12622 * C5645;
    const double C11218 = C29209 * C8474;
    const double C28140 = C12622 * C8474;
    const double C28902 = ae * C28901;
    const double C9561 =
        (2 * C28703 + C28421 * C28901 + (C28329 + C28343 * C28509) * ae) /
        C28201;
    const double C26512 = C17889 * C8514;
    const double C11163 = C11161 + C11162;
    const double C26081 = C26075 + C26076;
    const double C11219 = C11215 + C11216;
    const double C24710 = C24707 + C24708;
    const double C11053 = C11051 + C2885;
    const double C10986 = C6956 * C29209;
    const double C24426 = C6956 * C12622;
    const double C26150 = C6956 * C12621;
    const double C10878 = C10874 * C4440;
    const double C11054 = C11052 + C9142;
    const double C10880 = C10876 * C4440;
    const double C10994 = C10992 * C29209;
    const double C27923 = C10992 * C12622;
    const double C9707 = C1504 * C29123;
    const double C19413 = C1504 * C12619;
    const double C19412 = C1504 * C12620;
    const double C9721 = C9718 * C29123;
    const double C22837 = C9718 * C12619;
    const double C585 = C582 * C29209;
    const double C13119 = C582 * C12621;
    const double C586 = C583 * C29209;
    const double C1172 = C1170 * C29209;
    const double C13117 = C1170 * C12622;
    const double C13821 = C1170 * C12621;
    const double C1756 = C1754 * C29209;
    const double C14473 = C1754 * C12621;
    const double C28390 = ae * C28388;
    const double C28389 = C28326 * C28388;
    const double C28527 = C28396 * C28388;
    const double C28570 = C28421 * C28388;
    const double C2257 = (C28360 + C28388 * C28460) / C28201;
    const double C4050 = (C28360 + C28388 * C28509) / C28201;
    const double C2662 =
        (C28421 * C28526 + C28649 + C28649 +
         C28326 *
             (2 * ae * C28421 * C28396 * C28375 +
              C28326 * C28421 * C28396 *
                  (C28365 * C28366 + C28330 * bs[6] * std::pow(C28324, 6)) *
                  C28333)) /
        C28204;
    const double C5594 =
        (C28421 * C28456 + C28649 +
         C28396 * (C28573 + C28396 * C28421 *
                                (ae * C28414 + C28326 * std::pow(C28324, 6) *
                                                   bs[6] * C28448))) /
        C28204;
    const double C9038 =
        (C28396 * C28442 + C28649 +
         C28421 * (C28530 + C28421 * C28396 *
                                (ae * C28439 + C28326 * std::pow(C28324, 6) *
                                                   bs[6] * C28425))) /
        C28204;
    const double C9244 =
        (C28396 * C28494 + C28649 +
         C28421 * (C28530 + C28421 * C28396 *
                                (ae * C28439 + C28326 * std::pow(C28324, 6) *
                                                   bs[6] * C28486))) /
        C28204;
    const double C2260 =
        (C28355 + C28381 * C28460 + C28611 + C28611 +
         C28326 * (2 * ae * (C28351 + C28375 * C28460) +
                   C28326 * (C28381 + (C28365 * C28366 +
                                       C28330 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28460))) /
        C28204;
    const double C4904 =
        (2 * (C28358 + C28396 * C28417) + C28611 +
         C28396 * (C28417 + C28530 +
                   C28396 * (C28385 + C28396 * (ae * C28414 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28400)))) /
        C28204;
    const double C5036 =
        (2 * (C28358 + C28396 * C28456) + C28611 +
         C28396 * (C28456 + C28530 +
                   C28396 * (C28385 + C28396 * (ae * C28414 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28448)))) /
        C28204;
    const double C5542 =
        (C28611 +
         C28421 * (C28442 + (ae * C28439 +
                             C28326 * std::pow(C28324, 6) * bs[6] * C28425) *
                                C28460)) /
        C28204;
    const double C5756 =
        (C28611 +
         C28421 * (C28494 + (ae * C28439 +
                             C28326 * std::pow(C28324, 6) * bs[6] * C28486) *
                                C28460)) /
        C28204;
    const double C4835 = C4440 * C4822;
    const double C15127 = C12626 * C4822;
    const double C5435 = C4440 * C5426;
    const double C15631 = C12626 * C5426;
    const double C4053 =
        (C28355 + C28381 * C28509 + C28679 + C28679 +
         C28326 * (2 * ae * (C28351 + C28375 * C28509) +
                   C28326 * (C28381 + (C28365 * C28366 +
                                       C28330 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28509))) /
        C28204;
    const double C9089 =
        (C28679 +
         C28396 * (C28456 + (ae * C28414 +
                             C28326 * std::pow(C28324, 6) * bs[6] * C28448) *
                                C28509)) /
        C28204;
    const double C9564 =
        (2 * (C28358 + C28421 * C28442) + C28679 +
         C28421 * (C28442 + C28573 +
                   C28421 * (C28385 + C28421 * (ae * C28439 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28425)))) /
        C28204;
    const double C9825 =
        (2 * (C28358 + C28421 * C28494) + C28679 +
         C28421 * (C28494 + C28573 +
                   C28421 * (C28385 + C28421 * (ae * C28439 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28486)))) /
        C28204;
    const double C9419 = C4440 * C9406;
    const double C22613 = C12626 * C9406;
    const double C2433 =
        (C28465 + C28470 * C28330 + C28632 + C28632 +
         C28396 * (2 * ae * C28418 +
                   C28396 * (C28470 + (C28365 * C28366 +
                                       C28460 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28330))) /
        C28204;
    const double C3045 =
        (C28632 + C28421 * (ae * C28443 +
                            C28396 * (C28505 + std::pow(C28324, 6) * bs[6] *
                                                   C28499 * C28330))) /
        C28204;
    const double C2437 = C155 * C2304;
    const double C4617 = C4490 * C2304;
    const double C13527 = C12690 * C2304;
    const double C2887 = C155 * C2718;
    const double C14187 = C12690 * C2718;
    const double C28741 = C28740 + C28736;
    const double C5646 =
        (C28421 * C28732 + C28768 + C28768 +
         C28396 *
             (2 * ae * C28421 * C28733 +
              C28396 * C28421 * C28326 *
                  (C28365 * C28366 + C28460 * bs[6] * std::pow(C28324, 6)) *
                  C28333)) /
        C28204;
    const double C9295 =
        (ae * C28434 + C28396 * C28751 + C28768 +
         C28421 * (C28739 + C28421 * (ae * C28746 + C28396 * C28326 *
                                                        std::pow(C28324, 6) *
                                                        bs[6] * C28499))) /
        C28204;
    const double C28805 = ae * C28803;
    const double C28804 = C28396 * C28803;
    const double C28827 = C28421 * C28803;
    const double C8228 = (C28729 + C28803 * C28509) / C28201;
    const double C8352 =
        (C28465 + C28470 * C28509 + C28849 + C28849 +
         C28396 * (2 * ae * (C28407 + C28414 * C28509) +
                   C28396 * (C28470 + (C28365 * C28366 +
                                       C28460 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28509))) /
        C28204;
    const double C11213 =
        (2 * (C28727 + C28421 * C28818) + C28849 +
         C28421 * (C28818 + C28830 +
                   C28421 * (C28801 + C28421 * (ae * C28439 +
                                                C28396 * std::pow(C28324, 6) *
                                                    bs[6] * C28499)))) /
        C28204;
    const double C11050 = C155 * C10863;
    const double C27982 = C12690 * C10863;
    const double C9511 = C9505 * C29123;
    const double C22670 = C9505 * C12620;
    const double C10881 = C10877 * C29123;
    const double C4393 =
        (C28514 + C28519 * C28330 + C28712 + C28712 +
         C28421 * (2 * ae * C28443 +
                   C28421 * (C28519 + (C28365 * C28366 +
                                       C28509 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28330))) /
        C28204;
    const double C4397 = C222 * C4141;
    const double C8881 = C8640 * C4141;
    const double C19710 = C17993 * C4141;
    const double C9346 =
        (C28396 * C28754 + C28876 + C28876 +
         C28421 *
             (2 * ae * C28873 +
              C28421 * C28396 * C28326 *
                  (C28365 * C28366 + C28509 * bs[6] * std::pow(C28324, 6)) *
                  C28333)) /
        C28204;
    const double C9353 = C8640 * C9037;
    const double C17838 = C222 * C9037;
    const double C21369 = C17993 * C9037;
    const double C28911 = C28910 + C28907;
    const double C8515 =
        (C28514 + C28519 * C28460 + C28863 + C28863 +
         C28421 * (2 * ae * C28814 +
                   C28421 * (C28519 + (C28365 * C28366 +
                                       C28509 * bs[6] * std::pow(C28324, 6)) *
                                          C28333 * C28460))) /
        C28204;
    const double C8518 = C222 * C8270;
    const double C10754 = C8640 * C8270;
    const double C26516 = C17993 * C8270;
    const double C28934 = C28933 + C28929;
    const double C28973 = ae * C28971;
    const double C28972 = C28421 * C28971;
    const double C4985 = C4979 * C29123;
    const double C15234 = C4979 * C12620;
    const double C9649 = C9641 * C29209;
    const double C19414 = C1503 * C12620;
    const double C12404 = C12403 * C29123;
    const double C5252 = C5248 * C29220;
    const double C1171 = C1169 * C29209;
    const double C13118 = C1169 * C12622;
    const double C1755 = C1753 * C29209;
    const double C28221 = C28202 * C28213;
    const double C87 =
        (ae * -2 * C28200) / (C28204 * 2 * C28201) +
        (((C28202 * ((-4 * C28207) / C28201 - (C28202 * C28213) / C28201) *
           ae) /
              C28201 +
          2 * ((C28212 * ae) / C28201 - C28200 / C28208)) *
         ae) /
            C28201 -
        C28213 / C28208;
    const double C91 = (-C28213 / C28201) / (4 * C28204);
    const double C4439 = -C28213 / C28201;
    const double C12625 = (-C28213 / C28201) / (2 * C28201);
    const double C115 = C88 * C100;
    const double C114 = C88 * C99;
    const double C109 = C88 * C98;
    const double C656 = C88 * C645;
    const double C655 = C88 * C646;
    const double C1240 = C88 * C1229;
    const double C1239 = C88 * C1230;
    const double C2262 = C88 * C2255;
    const double C2664 = C88 * C2657;
    const double C4055 = C88 * C4048;
    const double C113 = C90 * C100;
    const double C110 = C90 * C99;
    const double C654 = C90 * C645;
    const double C1238 = C90 * C1229;
    const double C2263 = C90 * C2256;
    const double C2665 = C90 * C2658;
    const double C4056 = C90 * C4049;
    const double C12636 = C12624 * C100;
    const double C12635 = C12624 * C99;
    const double C12633 = C12624 * C645;
    const double C12630 = C12624 * C646;
    const double C12628 = C12624 * C98;
    const double C13196 = C12624 * C2256;
    const double C13191 = C12624 * C2255;
    const double C13358 = C798 * C12624;
    const double C13354 = C4974 * C12624;
    const double C13440 = C12624 * C709;
    const double C13436 = C12624 * C641;
    const double C13432 = C12624 * C710;
    const double C13428 = C12624 * C642;
    const double C13674 = C12624 * C779;
    const double C13670 = C12624 * C780;
    const double C13894 = C12624 * C2658;
    const double C13892 = C12624 * C1229;
    const double C13891 = C12624 * C1230;
    const double C13889 = C12624 * C2657;
    const double C15126 = C12624 * C4821;
    const double C15237 = C4976 * C12624;
    const double C15294 = C12624 * C2252;
    const double C15290 = C12624 * C2302;
    const double C15456 = C12624 * C2346;
    const double C15630 = C12624 * C5425;
    const double C15773 = C6890 * C12624;
    const double C15846 = C12624 * C2654;
    const double C15842 = C12624 * C2716;
    const double C16056 = C12624 * C2772;
    const double C17432 = C12624 * C8182;
    const double C17430 = C12624 * C4048;
    const double C19089 = C12624 * C4049;
    const double C19173 = C1312 * C12624;
    const double C19169 = C9500 * C12624;
    const double C19333 = C12624 * C1293;
    const double C19329 = C12624 * C1225;
    const double C19325 = C12624 * C1294;
    const double C19321 = C12624 * C1226;
    const double C19557 = C12624 * C1363;
    const double C19553 = C12624 * C1364;
    const double C20898 = C10874 * C12624;
    const double C22612 = C12624 * C9405;
    const double C22673 = C9502 * C12624;
    const double C22780 = C12624 * C4045;
    const double C22776 = C12624 * C4095;
    const double C22940 = C12624 * C4139;
    const double C6619 = C5236 + C5250;
    const double C12350 = C9644 + C9645;
    const double C28266 = C28235 * C28263;
    const double C4605 =
        (ae * -2 * C28249) / (C28204 * 2 * C28201) +
        (((C28235 * ((-4 * C28251) / C28201 - (C28235 * C28263) / C28201) *
           ae) /
              C28201 +
          2 * ((C28262 * ae) / C28201 - C28249 / C28208)) *
         ae) /
            C28201 -
        C28263 / C28208;
    const double C4607 = (-C28263 / C28201) / (4 * C28204);
    const double C12866 = (-C28263 / C28201) / (2 * C28201);
    const double C12706 = C12689 * C95;
    const double C12702 = C12689 * C100;
    const double C12696 = C12689 * C99;
    const double C12692 = C12689 * C94;
    const double C12882 = C12689 * C159;
    const double C12880 = C12689 * C158;
    const double C12871 = C12689 * C157;
    const double C12868 = C12689 * C156;
    const double C12953 = C248 * C12689;
    const double C12946 = C246 * C12689;
    const double C13060 = C12689 * C225;
    const double C13054 = C12689 * C224;
    const double C13282 = C12689 * C641;
    const double C13278 = C12689 * C645;
    const double C13526 = C12689 * C708;
    const double C13525 = C12689 * C710;
    const double C13522 = C12689 * C709;
    const double C13603 = C798 * C12689;
    const double C13750 = C12689 * C779;
    const double C13968 = C12689 * C1225;
    const double C13964 = C12689 * C1229;
    const double C14186 = C12689 * C1292;
    const double C14185 = C12689 * C1294;
    const double C14182 = C12689 * C1293;
    const double C14264 = C1382 * C12689;
    const double C14401 = C12689 * C1363;
    const double C15352 = C12689 * C2303;
    const double C15350 = C12689 * C2302;
    const double C15920 = C12689 * C2717;
    const double C15918 = C12689 * C2716;
    const double C17636 = C12689 * C4096;
    const double C17634 = C12689 * C4095;
    const double C24283 = C12689 * C1230;
    const double C24279 = C12689 * C1226;
    const double C24427 = C9638 * C12689;
    const double C24423 = C9634 * C12689;
    const double C24705 = C12689 * C1364;
    const double C25997 = C12689 * C2657;
    const double C25993 = C12689 * C2654;
    const double C26149 = C6957 * C12689;
    const double C26223 = C12689 * C8227;
    const double C26439 = C12689 * C2772;
    const double C27817 = C12689 * C4045;
    const double C27813 = C12689 * C4048;
    const double C27926 = C9636 * C12689;
    const double C27981 = C12689 * C9481;
    const double C28141 = C12689 * C4139;
    const double C28292 = C28238 * C28289;
    const double C8869 =
        (ae * -2 * C28275) / (C28204 * 2 * C28201) +
        (((C28238 * ((-4 * C28277) / C28201 - (C28238 * C28289) / C28201) *
           ae) /
              C28201 +
          2 * ((C28288 * ae) / C28201 - C28275 / C28208)) *
         ae) /
            C28201 -
        C28289 / C28208;
    const double C8871 = (-C28289 / C28201) / (4 * C28204);
    const double C18339 = (-C28289 / C28201) / (2 * C28201);
    const double C18009 = C17992 * C95;
    const double C18005 = C17992 * C100;
    const double C17999 = C17992 * C99;
    const double C17995 = C17992 * C94;
    const double C18175 = C17992 * C158;
    const double C18169 = C17992 * C157;
    const double C18288 = C181 * C17992;
    const double C18281 = C179 * C17992;
    const double C18355 = C17992 * C226;
    const double C18353 = C17992 * C225;
    const double C18344 = C17992 * C224;
    const double C18341 = C17992 * C223;
    const double C18579 = C17992 * C641;
    const double C18575 = C17992 * C645;
    const double C18790 = C17992 * C709;
    const double C18930 = C728 * C17992;
    const double C19007 = C17992 * C778;
    const double C19006 = C17992 * C780;
    const double C19003 = C17992 * C779;
    const double C19249 = C17992 * C1225;
    const double C19245 = C17992 * C1229;
    const double C19483 = C17992 * C1293;
    const double C19634 = C1312 * C17992;
    const double C19709 = C17992 * C1362;
    const double C19708 = C17992 * C1364;
    const double C19705 = C17992 * C1363;
    const double C20764 = C17992 * C2347;
    const double C20762 = C17992 * C2346;
    const double C21368 = C17992 * C2773;
    const double C21366 = C17992 * C2772;
    const double C23046 = C17992 * C4140;
    const double C23044 = C17992 * C4139;
    const double C23710 = C17992 * C646;
    const double C23706 = C17992 * C642;
    const double C23922 = C17992 * C710;
    const double C23998 = C5058 * C17992;
    const double C23994 = C5054 * C17992;
    const double C25529 = C17992 * C2252;
    const double C25525 = C17992 * C2255;
    const double C25689 = C17992 * C2302;
    const double C25746 = C5056 * C17992;
    const double C25851 = C17992 * C4955;
    const double C26077 = C17992 * C2654;
    const double C26073 = C17992 * C2657;
    const double C26299 = C17992 * C2716;
    const double C26372 = C6957 * C17992;
    const double C26515 = C17992 * C5539;
    const double C28195 = C17992 * C8269;
    const double C14403 = C14399 + C14400;
    const double C18931 = C18926 + C18927;
    const double C13600 = C5180 * C12622;
    const double C18720 = C18719 + C2886;
    const double C14266 = C14265 * C12622;
    const double C18928 = C18506 * C17993;
    const double C20900 = C18506 * C12626;
    const double C19631 = C9899 * C17889;
    const double C13820 = C5373 * C12622;
    const double C14477 = C14476 * C12622;
    const double C9722 = C9719 * C29123;
    const double C22836 = C9719 * C12620;
    const double C106 =
        (2 * (2 * ae * C28338 + C28326 * C28355) + C28361 + C28361 +
         C28326 * (C28355 + C28358 + C28358 +
                   C28326 * (2 * ae * C28351 +
                             C28326 *
                                 (C28344 * C28345 +
                                  C28330 * bs[5] * std::pow(C28332, 5)) *
                                 C28333))) /
        C28204;
    const double C712 =
        (C28361 + C28396 * (C28406 + ae * C28409 + C28326 * C28417)) / C28204;
    const double C848 =
        (C28361 + C28396 * (C28451 + ae * C28409 + C28326 * C28456)) / C28204;
    const double C1366 =
        (C28361 + C28421 * (C28431 + ae * C28434 + C28326 * C28442)) / C28204;
    const double C1618 =
        (C28361 + C28421 * (C28489 + ae * C28434 + C28326 * C28494)) / C28204;
    const double C116 = C90 * C101;
    const double C112 = C92 * C101;
    const double C175 = C155 * C101;
    const double C242 = C222 * C101;
    const double C12637 = C12626 * C101;
    const double C657 = C90 * C644;
    const double C653 = C92 * C644;
    const double C717 = C155 * C644;
    const double C787 = C222 * C644;
    const double C4449 = C4440 * C644;
    const double C12638 = C12624 * C644;
    const double C12632 = C12626 * C644;
    const double C12700 = C12690 * C644;
    const double C13439 = C12620 * C644;
    const double C1241 = C90 * C1228;
    const double C1237 = C92 * C1228;
    const double C1301 = C155 * C1228;
    const double C1371 = C222 * C1228;
    const double C8561 = C4440 * C1228;
    const double C13893 = C12626 * C1228;
    const double C17891 = C12624 * C1228;
    const double C18003 = C17993 * C1228;
    const double C19332 = C12620 * C1228;
    const double C13284 = C13276 + C13277;
    const double C5061 = C5052 + C5053;
    const double C15296 = C15288 + C15289;
    const double C14044 = C14040 + C14041;
    const double C18581 = C18573 + C18574;
    const double C16058 = C16054 + C16055;
    const double C24003 = C24001 + C24002;
    const double C20901 = C18505 * C12620;
    const double C24000 = C23788 * C17993;
    const double C24429 = C23788 * C12690;
    const double C15848 = C15840 + C15841;
    const double C23789 = C23786 + C23787;
    const double C19251 = C19243 + C19244;
    const double C9838 = C9833 + C9834;
    const double C22942 = C22938 + C22939;
    const double C5111 =
        (2 * (2 * ae * C28402 + C28396 * C28465) + C28730 + C28730 +
         C28396 * (C28465 + C28727 + C28727 +
                   C28396 * (2 * C28410 + C28396 * C28470))) /
        C28204;
    const double C5807 =
        (C28730 + C28421 * (C28502 + ae * C28396 * C28432 +
                            C28396 * (C28435 + C28396 * C28505))) /
        C28204;
    const double C5114 = C4490 * C4901;
    const double C6490 = C4440 * C4901;
    const double C6536 = C4489 * C4901;
    const double C6577 = C222 * C4901;
    const double C15351 = C12690 * C4901;
    const double C5648 = C4490 * C5485;
    const double C6946 = C4440 * C5485;
    const double C7010 = C4489 * C5485;
    const double C7063 = C222 * C5485;
    const double C10598 = C155 * C5485;
    const double C15919 = C12690 * C5485;
    const double C25635 = C12689 * C5485;
    const double C25687 = C17993 * C5485;
    const double C25996 = C12622 * C5485;
    const double C11220 = C11217 + C11218;
    const double C28143 = C28139 + C28140;
    const double C9949 =
        (2 * (2 * ae * C28427 + C28421 * C28514) + C28902 + C28902 +
         C28421 * (C28514 + C28899 + C28899 +
                   C28421 * (2 * C28435 + C28421 * C28519))) /
        C28204;
    const double C9952 = C8640 * C9561;
    const double C12483 = C4440 * C9561;
    const double C12525 = C155 * C9561;
    const double C12568 = C8639 * C9561;
    const double C23045 = C17993 * C9561;
    const double C26369 = C11163 * C17889;
    const double C11055 = C11053 + C11047;
    const double C11056 = C11054 + C11049;
    const double C2721 =
        (C28421 * (C28390 + C28396 * (C28413 + ae * C28326 * C28414 +
                                      C28326 * (ae * C28414 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28400)))) /
        C28204;
    const double C28391 = C28367 + C28389;
    const double C28529 = ae * C28527;
    const double C2659 = (C28421 * C28527) / C28201;
    const double C28572 = ae * C28570;
    const double C2264 = C92 * C2257;
    const double C4450 = C4440 * C2257;
    const double C13197 = C12626 * C2257;
    const double C4057 = C92 * C4050;
    const double C8562 = C4440 * C4050;
    const double C19090 = C12626 * C4050;
    const double C28742 = ae * C28741;
    const double C4902 =
        (2 * C28627 + C28396 * C28741 + (C28349 + C28372 * C28460) * ae) /
        C28201;
    const double C5486 = (C28421 * C28741) / C28201;
    const double C28806 = C28791 + C28804;
    const double C28829 = ae * C28827;
    const double C8356 = C4490 * C8228;
    const double C10599 = C155 * C8228;
    const double C26224 = C12690 * C8228;
    const double C28912 = ae * C28911;
    const double C9562 =
        (2 * C28707 + C28421 * C28911 + (C28349 + C28372 * C28509) * ae) /
        C28201;
    const double C28935 = ae * C28934;
    const double C10931 =
        (2 * C28858 + C28421 * C28934 + (C28723 + C28793 * C28509) * ae) /
        C28201;
    const double C28974 = C28959 + C28972;
    const double C89 =
        (((-4 * C28207) / C28201 - C28221 / C28201) * ae) / C28208 +
        ((2 * ((0 * ae) / C28201 - C28207 / C28204) - C28221 / C28208) * ae) /
            C28201;
    const double C12623 =
        (((-4 * C28207) / C28201 - C28221 / C28201) * ae) / C28201;
    const double C4833 = C4439 * C2253;
    const double C4831 = C4439 * C641;
    const double C4828 = C4439 * C2252;
    const double C4826 = C4439 * C642;
    const double C6355 = C4439 * C4819;
    const double C6764 = C4439 * C2654;
    const double C6762 = C4439 * C5423;
    const double C9417 = C4439 * C4046;
    const double C9415 = C4439 * C1225;
    const double C9412 = C4439 * C4045;
    const double C9410 = C4439 * C1226;
    const double C10808 = C4439 * C8180;
    const double C12216 = C4439 * C9403;
    const double C23568 = C4439 * C2655;
    const double C13194 = C12625 * C640;
    const double C13188 = C12625 * C641;
    const double C15122 = C12625 * C2253;
    const double C15626 = C12625 * C2655;
    const double C19087 = C12625 * C1224;
    const double C19083 = C12625 * C1225;
    const double C22608 = C12625 * C4046;
    const double C13450 = C13440 + C13441;
    const double C13448 = C13436 + C13437;
    const double C13446 = C13432 + C13433;
    const double C13444 = C13428 + C13429;
    const double C13680 = C13674 + C13675;
    const double C13678 = C13670 + C13671;
    const double C15299 = C15294 + C15295;
    const double C15297 = C15290 + C15291;
    const double C15459 = C15456 + C15457;
    const double C15851 = C15846 + C15847;
    const double C15849 = C15842 + C15843;
    const double C16059 = C16056 + C16057;
    const double C19343 = C19333 + C19334;
    const double C19341 = C19329 + C19330;
    const double C19339 = C19325 + C19326;
    const double C19337 = C19321 + C19322;
    const double C19563 = C19557 + C19558;
    const double C19561 = C19553 + C19554;
    const double C22785 = C22780 + C22781;
    const double C22783 = C22776 + C22777;
    const double C22943 = C22940 + C22941;
    const double C4606 =
        (((-4 * C28251) / C28201 - C28266 / C28201) * ae) / C28208 +
        ((2 * ((0 * ae) / C28201 - C28251 / C28204) - C28266 / C28208) * ae) /
            C28201;
    const double C12865 =
        (((-4 * C28251) / C28201 - C28266 / C28201) * ae) / C28201;
    const double C12876 = C12866 * C640;
    const double C12873 = C12866 * C641;
    const double C13518 = C12866 * C2253;
    const double C14178 = C12866 * C2655;
    const double C24499 = C12866 * C2654;
    const double C26221 = C12866 * C5423;
    const double C27977 = C12866 * C8180;
    const double C12715 = C12706 + C12707;
    const double C12713 = C12702 + C12703;
    const double C12710 = C12696 + C12697;
    const double C12708 = C12692 + C12693;
    const double C13065 = C13060 + C13061;
    const double C13062 = C13054 + C13055;
    const double C13287 = C13282 + C13283;
    const double C13285 = C13278 + C13279;
    const double C13753 = C13750 + C13751;
    const double C13973 = C13968 + C13969;
    const double C13971 = C13964 + C13965;
    const double C14404 = C14401 + C14402;
    const double C24289 = C24283 + C24284;
    const double C24287 = C24279 + C24280;
    const double C24709 = C24705 + C24706;
    const double C26003 = C25997 + C25998;
    const double C26001 = C25993 + C25994;
    const double C26443 = C26439 + C26440;
    const double C27822 = C27817 + C27818;
    const double C27820 = C27813 + C27814;
    const double C28144 = C28141 + C28142;
    const double C8870 =
        (((-4 * C28277) / C28201 - C28292 / C28201) * ae) / C28208 +
        ((2 * ((0 * ae) / C28201 - C28277 / C28204) - C28292 / C28208) * ae) /
            C28201;
    const double C18338 =
        (((-4 * C28277) / C28201 - C28292 / C28201) * ae) / C28201;
    const double C18349 = C18339 * C1224;
    const double C18346 = C18339 * C1225;
    const double C18999 = C18339 * C2655;
    const double C19701 = C18339 * C4046;
    const double C24139 = C18339 * C2654;
    const double C25847 = C18339 * C5423;
    const double C26511 = C18339 * C8180;
    const double C18018 = C18009 + C18010;
    const double C18016 = C18005 + C18006;
    const double C18013 = C17999 + C18000;
    const double C18011 = C17995 + C17996;
    const double C18180 = C18175 + C18176;
    const double C18177 = C18169 + C18170;
    const double C18584 = C18579 + C18580;
    const double C18582 = C18575 + C18576;
    const double C18793 = C18790 + C18791;
    const double C19254 = C19249 + C19250;
    const double C19252 = C19245 + C19246;
    const double C19486 = C19483 + C19484;
    const double C23716 = C23710 + C23711;
    const double C23714 = C23706 + C23707;
    const double C23926 = C23922 + C23923;
    const double C25534 = C25529 + C25530;
    const double C25532 = C25525 + C25526;
    const double C25692 = C25689 + C25690;
    const double C26082 = C26077 + C26078;
    const double C26080 = C26073 + C26074;
    const double C26302 = C26299 + C26300;
    const double C18932 = C18931 * C17889;
    const double C18721 = C18720 + C18718;
    const double C718 = C29209 * C712;
    const double C12701 = C12622 * C712;
    const double C13443 = C12620 * C848;
    const double C1372 = C29220 * C1366;
    const double C18004 = C17889 * C1366;
    const double C19560 = C12620 * C1618;
    const double C183 = C175 + C176;
    const double C250 = C242 + C243;
    const double C795 = C787 + C788;
    const double C13449 = C13438 + C13439;
    const double C1309 = C1301 + C1302;
    const double C19342 = C19331 + C19332;
    const double C15770 = C14044 * C12620;
    const double C24004 = C24003 * C17889;
    const double C24430 = C23789 * C12622;
    const double C26442 = C12622 * C5807;
    const double C6494 = C6490 + C6491;
    const double C6579 = C6577 + C6578;
    const double C6954 = C6946 + C6947;
    const double C7067 = C7063 + C7064;
    const double C25691 = C25687 + C25688;
    const double C26002 = C25995 + C25996;
    const double C12485 = C12483 + C12484;
    const double C12527 = C12525 + C12526;
    const double C11057 = C11055 * C29123;
    const double C21100 = C11055 * C12619;
    const double C11058 = C11056 * C29123;
    const double C28392 = C28391 + C28380;
    const double C651 =
        (2 * (2 * ae * C28396 * C28351 + C28326 * C28526) + C28529 + C28529 +
         C28326 * (C28526 + C28530 + C28530 +
                   C28326 * (2 * ae * C28396 * C28375 +
                             C28326 * C28396 *
                                 (C28365 * C28366 +
                                  C28330 * bs[6] * std::pow(C28324, 6)) *
                                 C28333))) /
        C28204;
    const double C2307 =
        (C28406 + ae * C28409 + C28326 * C28417 + C28529 +
         C28396 * (C28390 + C28396 * (C28413 + ae * C28326 * C28414 +
                                      C28326 * (ae * C28414 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28400)))) /
        C28204;
    const double C2392 =
        (C28451 + ae * C28409 + C28326 * C28456 + C28529 +
         C28396 * (C28390 + C28396 * (C28454 + ae * C28326 * C28414 +
                                      C28326 * (ae * C28414 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28448)))) /
        C28204;
    const double C2777 =
        (C28529 + C28421 * C28396 *
                      (C28438 + ae * C28326 * C28439 +
                       C28326 * (ae * C28439 + C28326 * std::pow(C28324, 6) *
                                                   bs[6] * C28425))) /
        C28204;
    const double C2992 =
        (C28529 + C28421 * C28396 *
                      (C28492 + ae * C28326 * C28439 +
                       C28326 * (ae * C28439 + C28326 * std::pow(C28324, 6) *
                                                   bs[6] * C28486))) /
        C28204;
    const double C2666 = C92 * C2659;
    const double C13895 = C12626 * C2659;
    const double C23098 = C4440 * C2659;
    const double C1235 =
        (2 * (2 * ae * C28421 * C28351 + C28326 * C28569) + C28572 + C28572 +
         C28326 * (C28569 + C28573 + C28573 +
                   C28326 * (2 * ae * C28421 * C28375 +
                             C28326 * C28421 *
                                 (C28365 * C28366 +
                                  C28330 * bs[6] * std::pow(C28324, 6)) *
                                 C28333))) /
        C28204;
    const double C2830 =
        (C28572 + C28396 * C28421 *
                      (C28454 + ae * C28326 * C28414 +
                       C28326 * (ae * C28414 + C28326 * std::pow(C28324, 6) *
                                                   bs[6] * C28448))) /
        C28204;
    const double C4144 =
        (C28431 + ae * C28434 + C28326 * C28442 + C28572 +
         C28421 * (C28390 + C28421 * (C28438 + ae * C28326 * C28439 +
                                      C28326 * (ae * C28439 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28425)))) /
        C28204;
    const double C4311 =
        (C28489 + ae * C28434 + C28326 * C28494 + C28572 +
         C28421 * (C28390 + C28421 * (C28492 + ae * C28326 * C28439 +
                                      C28326 * (ae * C28439 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28486)))) /
        C28204;
    const double C5112 =
        (2 * (2 * ae * C28409 + C28396 * C28732) + C28742 + C28742 +
         C28396 * (C28732 + C28739 + C28739 +
                   C28396 * (2 * ae * C28733 +
                             C28396 * C28326 *
                                 (C28365 * C28366 +
                                  C28460 * bs[6] * std::pow(C28324, 6)) *
                                 C28333))) /
        C28204;
    const double C5808 =
        (C28742 + C28421 * (C28751 + ae * C28396 * C28746 +
                            C28396 * (ae * C28746 + C28396 * C28326 *
                                                        std::pow(C28324, 6) *
                                                        bs[6] * C28499))) /
        C28204;
    const double C5119 = C4490 * C4902;
    const double C15353 = C12690 * C4902;
    const double C5653 = C4490 * C5486;
    const double C15921 = C12690 * C5486;
    const double C20561 = C155 * C5486;
    const double C28807 = C28806 + C28800;
    const double C7007 =
        (2 * (2 * ae * C28421 * C28407 + C28396 * C28826) + C28829 + C28829 +
         C28396 * (C28826 + C28830 + C28830 +
                   C28396 * (2 * ae * C28421 * C28414 +
                             C28396 * C28421 *
                                 (C28365 * C28366 +
                                  C28460 * bs[6] * std::pow(C28324, 6)) *
                                 C28333))) /
        C28204;
    const double C8475 =
        (C28502 + ae * C28810 + C28396 * C28818 + C28829 +
         C28421 * (C28805 + C28421 * (C28505 + ae * C28396 * C28439 +
                                      C28396 * (ae * C28439 +
                                                C28396 * std::pow(C28324, 6) *
                                                    bs[6] * C28499)))) /
        C28204;
    const double C9950 =
        (2 * (2 * ae * C28434 + C28421 * C28754) + C28912 + C28912 +
         C28421 * (C28754 + C28909 + C28909 +
                   C28421 * (2 * ae * C28746 +
                             C28421 * C28326 *
                                 (C28365 * C28366 +
                                  C28509 * bs[6] * std::pow(C28324, 6)) *
                                 C28333))) /
        C28204;
    const double C9957 = C8640 * C9562;
    const double C23047 = C17993 * C9562;
    const double C11270 =
        (2 * (2 * ae * C28810 + C28421 * C28925) + C28935 + C28935 +
         C28421 * (C28925 + C28932 + C28932 +
                   C28421 * (2 * ae * C28926 +
                             C28421 * C28396 *
                                 (C28365 * C28366 +
                                  C28509 * bs[6] * std::pow(C28324, 6)) *
                                 C28333))) /
        C28204;
    const double C11274 = C8640 * C10931;
    const double C28196 = C17993 * C10931;
    const double C28975 = C28974 + C28968;
    const double C13192 = C12623 * C641;
    const double C13186 = C12623 * C642;
    const double C15124 = C12623 * C2252;
    const double C15628 = C12623 * C2654;
    const double C19085 = C12623 * C1225;
    const double C19081 = C12623 * C1226;
    const double C22610 = C12623 * C4045;
    const double C4839 = C4833 + C4445;
    const double C4838 = C4831 + C4446;
    const double C4837 = C4828 + C4444;
    const double C4836 = C4826 + C4443;
    const double C6358 = C6355 + C4830;
    const double C6768 = C6764 + C5431;
    const double C6767 = C6762 + C5430;
    const double C9423 = C9417 + C8560;
    const double C9422 = C9415 + C5433;
    const double C9421 = C9412 + C8187;
    const double C9420 = C9410 + C5432;
    const double C10811 = C10808 + C8188;
    const double C12219 = C12216 + C9414;
    const double C23570 = C23568 + C5434;
    const double C13201 = C13194 + C12632;
    const double C13199 = C13188 + C12631;
    const double C15128 = C15122 + C13190;
    const double C15632 = C15626 + C13888;
    const double C19094 = C19087 + C13893;
    const double C19092 = C19083 + C13890;
    const double C22614 = C22608 + C17431;
    const double C12879 = C12865 * C95;
    const double C12870 = C12865 * C94;
    const double C13521 = C12865 * C641;
    const double C14181 = C12865 * C1225;
    const double C24497 = C12865 * C1226;
    const double C26219 = C12865 * C2654;
    const double C27979 = C12865 * C4045;
    const double C12886 = C12876 + C12877;
    const double C12885 = C12873 + C12874;
    const double C13528 = C13518 + C13519;
    const double C14188 = C14178 + C14179;
    const double C24502 = C24499 + C14184;
    const double C26226 = C26221 + C15919;
    const double C27983 = C27977 + C17635;
    const double C18352 = C18338 * C95;
    const double C18343 = C18338 * C94;
    const double C19002 = C18338 * C641;
    const double C19704 = C18338 * C1225;
    const double C24137 = C18338 * C642;
    const double C25849 = C18338 * C2252;
    const double C26513 = C18338 * C2654;
    const double C18359 = C18349 + C18350;
    const double C18358 = C18346 + C18347;
    const double C19009 = C18999 + C19000;
    const double C19711 = C19701 + C19702;
    const double C24142 = C24139 + C19005;
    const double C25853 = C25847 + C20763;
    const double C26517 = C26511 + C21367;
    const double C21101 = C18721 * C12620;
    const double C725 = C717 + C718;
    const double C12712 = C12700 + C12701;
    const double C13451 = C13442 + C13443;
    const double C1379 = C1371 + C1372;
    const double C18015 = C18003 + C18004;
    const double C19564 = C19559 + C19560;
    const double C13361 = C795 * C12620;
    const double C19176 = C1309 * C12620;
    const double C26444 = C26441 + C26442;
    const double C26152 = C6954 * C12622;
    const double C28393 = ae * C28392;
    const double C102 =
        (3 * C28360 + C28326 * C28392 + (2 * C28349 + C28326 * C28377) * ae) /
        C28201;
    const double C647 = (C28396 * C28392) / C28201;
    const double C1231 = (C28421 * C28392) / C28201;
    const double C28808 = ae * C28807;
    const double C6399 =
        (3 * C28729 + C28396 * C28807 + (2 * C28723 + C28396 * C28798) * ae) /
        C28201;
    const double C6824 = (C28421 * C28807) / C28201;
    const double C28976 = ae * C28975;
    const double C12308 =
        (3 * C28901 + C28421 * C28975 + (2 * C28895 + C28421 * C28966) * ae) /
        C28201;
    const double C13200 = C13192 + C12633;
    const double C13198 = C13186 + C12630;
    const double C15129 = C15124 + C13191;
    const double C15633 = C15628 + C13889;
    const double C19093 = C19085 + C13892;
    const double C19091 = C19081 + C13891;
    const double C22615 = C22610 + C17430;
    const double C4843 = C4839 + C4445;
    const double C4842 = C4838 + C4446;
    const double C4841 = C4837 + C4444;
    const double C4840 = C4836 + C4443;
    const double C6359 = C6358 + C4830;
    const double C6770 = C6768 + C5431;
    const double C6769 = C6767 + C5430;
    const double C9427 = C9423 + C8560;
    const double C9426 = C9422 + C5433;
    const double C9425 = C9421 + C8187;
    const double C9424 = C9420 + C5432;
    const double C10812 = C10811 + C8188;
    const double C12220 = C12219 + C9414;
    const double C23571 = C23570 + C5434;
    const double C13205 = C13201 + C12632;
    const double C13203 = C13199 + C12631;
    const double C15130 = C15128 + C13190;
    const double C15634 = C15632 + C13888;
    const double C19098 = C19094 + C13893;
    const double C19096 = C19092 + C13890;
    const double C22616 = C22614 + C17431;
    const double C12887 = C12879 + C12880;
    const double C12884 = C12870 + C12871;
    const double C13529 = C13521 + C13522;
    const double C14189 = C14181 + C14182;
    const double C24501 = C24497 + C14185;
    const double C26225 = C26219 + C15918;
    const double C27984 = C27979 + C17634;
    const double C12890 = C12886 + C12877;
    const double C12889 = C12885 + C12874;
    const double C13530 = C13528 + C13519;
    const double C14190 = C14188 + C14179;
    const double C24504 = C24502 + C14184;
    const double C26228 = C26226 + C15919;
    const double C27985 = C27983 + C17635;
    const double C18360 = C18352 + C18353;
    const double C18357 = C18343 + C18344;
    const double C19010 = C19002 + C19003;
    const double C19712 = C19704 + C19705;
    const double C24141 = C24137 + C19006;
    const double C25854 = C25849 + C20762;
    const double C26518 = C26513 + C21366;
    const double C18363 = C18359 + C18350;
    const double C18362 = C18358 + C18347;
    const double C19011 = C19009 + C19000;
    const double C19713 = C19711 + C19702;
    const double C24144 = C24142 + C19005;
    const double C25855 = C25853 + C20763;
    const double C26519 = C26517 + C21367;
    const double C107 =
        (3 * (C28355 + C28358 + C28358 + C28326 * C28386) + C28393 + C28393 +
         C28326 *
             (2 * C28386 + C28390 + C28390 +
              C28326 * (C28381 + C28385 + C28385 +
                        C28326 * (2 * ae * C28375 +
                                  C28326 *
                                      (C28365 * C28366 +
                                       C28330 * bs[6] * std::pow(C28324, 6)) *
                                      C28333)))) /
        C28204;
    const double C715 =
        (C28393 + C28396 * (2 * C28417 + ae * C28418 +
                            C28326 * (C28413 + ae * C28326 * C28414 +
                                      C28326 * (ae * C28414 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28400)))) /
        C28204;
    const double C851 =
        (C28393 + C28396 * (2 * C28456 + ae * C28418 +
                            C28326 * (C28454 + ae * C28326 * C28414 +
                                      C28326 * (ae * C28414 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28448)))) /
        C28204;
    const double C1369 =
        (C28393 + C28421 * (2 * C28442 + ae * C28443 +
                            C28326 * (C28438 + ae * C28326 * C28439 +
                                      C28326 * (ae * C28439 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28425)))) /
        C28204;
    const double C1621 =
        (C28393 + C28421 * (2 * C28494 + ae * C28443 +
                            C28326 * (C28492 + ae * C28326 * C28439 +
                                      C28326 * (ae * C28439 +
                                                C28326 * std::pow(C28324, 6) *
                                                    bs[6] * C28486)))) /
        C28204;
    const double C117 = C92 * C102;
    const double C658 = C92 * C647;
    const double C12639 = C12626 * C647;
    const double C1242 = C92 * C1231;
    const double C17892 = C12626 * C1231;
    const double C6533 =
        (3 * (C28465 + C28727 + C28727 + C28396 * C28795) + C28808 + C28808 +
         C28396 *
             (2 * C28795 + C28805 + C28805 +
              C28396 * (C28470 + C28801 + C28801 +
                        C28396 * (2 * ae * C28414 +
                                  C28396 *
                                      (C28365 * C28366 +
                                       C28460 * bs[6] * std::pow(C28324, 6)) *
                                      C28333)))) /
        C28204;
    const double C7179 =
        (C28808 + C28421 * (2 * C28818 + ae * C28814 +
                            C28396 * (C28505 + ae * C28396 * C28439 +
                                      C28396 * (ae * C28439 +
                                                C28396 * std::pow(C28324, 6) *
                                                    bs[6] * C28499)))) /
        C28204;
    const double C6537 = C4490 * C6399;
    const double C7011 = C4490 * C6824;
    const double C25636 = C12690 * C6824;
    const double C12565 =
        (3 * (C28514 + C28899 + C28899 + C28421 * C28963) + C28976 + C28976 +
         C28421 *
             (2 * C28963 + C28973 + C28973 +
              C28421 * (C28519 + C28969 + C28969 +
                        C28421 * (2 * ae * C28439 +
                                  C28421 *
                                      (C28365 * C28366 +
                                       C28509 * bs[6] * std::pow(C28324, 6)) *
                                      C28333)))) /
        C28204;
    const double C12569 = C8640 * C12308;
    const double C13204 = C13200 + C12633;
    const double C13202 = C13198 + C12630;
    const double C15131 = C15129 + C13191;
    const double C15635 = C15633 + C13889;
    const double C19097 = C19093 + C13892;
    const double C19095 = C19091 + C13891;
    const double C22617 = C22615 + C17430;
    const double C4847 = C4843 + C4834;
    const double C4846 = C4842 + C4832;
    const double C4845 = C4841 + C4829;
    const double C4844 = C4840 + C4827;
    const double C6360 = C6359 + C6356;
    const double C6772 = C6770 + C6765;
    const double C6771 = C6769 + C6763;
    const double C9431 = C9427 + C9418;
    const double C9430 = C9426 + C9416;
    const double C9429 = C9425 + C9413;
    const double C9428 = C9424 + C9411;
    const double C10813 = C10812 + C10809;
    const double C12221 = C12220 + C12217;
    const double C23572 = C23571 + C23569;
    const double C13209 = C13205 + C13195;
    const double C13207 = C13203 + C13189;
    const double C15132 = C15130 + C15123;
    const double C15636 = C15634 + C15627;
    const double C19102 = C19098 + C19088;
    const double C19100 = C19096 + C19084;
    const double C22618 = C22616 + C22609;
    const double C12891 = C12887 + C12880;
    const double C12888 = C12884 + C12871;
    const double C13531 = C13529 + C13522;
    const double C14191 = C14189 + C14182;
    const double C24503 = C24501 + C14185;
    const double C26227 = C26225 + C15918;
    const double C27986 = C27984 + C17634;
    const double C12894 = C12890 + C12878;
    const double C12893 = C12889 + C12875;
    const double C13532 = C13530 + C13520;
    const double C14192 = C14190 + C14180;
    const double C24506 = C24504 + C24500;
    const double C26230 = C26228 + C26222;
    const double C27987 = C27985 + C27978;
    const double C18364 = C18360 + C18353;
    const double C18361 = C18357 + C18344;
    const double C19012 = C19010 + C19003;
    const double C19714 = C19712 + C19705;
    const double C24143 = C24141 + C19006;
    const double C25856 = C25854 + C20762;
    const double C26520 = C26518 + C21366;
    const double C18367 = C18363 + C18351;
    const double C18366 = C18362 + C18348;
    const double C19013 = C19011 + C19001;
    const double C19715 = C19713 + C19703;
    const double C24146 = C24144 + C24140;
    const double C25857 = C25855 + C25848;
    const double C26521 = C26519 + C26512;
    const double C13208 = C13204 + C13193;
    const double C13206 = C13202 + C13187;
    const double C15133 = C15131 + C15125;
    const double C15637 = C15635 + C15629;
    const double C19101 = C19097 + C19086;
    const double C19099 = C19095 + C19082;
    const double C22619 = C22617 + C22611;
    const double C4851 = C4847 * C29220;
    const double C4850 = C4846 * C29220;
    const double C23567 = C4846 * C17888;
    const double C4849 = C4845 * C29220;
    const double C25422 = C4845 * C17888;
    const double C4848 = C4844 * C29220;
    const double C23565 = C4844 * C17888;
    const double C6361 = C6360 * C29220;
    const double C6774 = C6772 * C29220;
    const double C23566 = C6772 * C17889;
    const double C25926 = C6772 * C17888;
    const double C6773 = C6771 * C29220;
    const double C25421 = C6771 * C17889;
    const double C25925 = C10813 * C17889;
    const double C23573 = C23572 * C17889;
    const double C12895 = C12891 + C12881;
    const double C12892 = C12888 + C12872;
    const double C13533 = C13531 + C13523;
    const double C14193 = C14191 + C14183;
    const double C24505 = C24503 + C24498;
    const double C26229 = C26227 + C26220;
    const double C27988 = C27986 + C27980;
    const double C18368 = C18364 + C18354;
    const double C18365 = C18361 + C18345;
    const double C19014 = C19012 + C19004;
    const double C19716 = C19714 + C19706;
    const double C24145 = C24143 + C24138;
    const double C25858 = C25856 + C25850;
    const double C26522 = C26520 + C26514;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                     C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                        C29220 * C12621 +
                    (C12623 * C642 + C12630 + C12630 + C12619 * C650 +
                     C12625 * C641 + C12631 + C12631 + C12620 * C649) *
                        C29220 * C12622) *
                       C29196 * C29179 * C84 -
                   ((C12625 * C640 + C12632 + C12632 + C12620 * C648 +
                     C12623 * C641 + C12633 + C12633 + C12619 * C649) *
                        C29220 * C12622 +
                    (C12625 * C95 + C12634 + C12634 + C12620 * C105 +
                     C12623 * C94 + C12635 + C12635 + C12619 * C104) *
                        C29220 * C12621) *
                       C29196 * C29179 * C85 +
                   ((C12623 * C95 + C12636 + C12636 + C12619 * C105 +
                     C12625 * C96 + C12637 + C12637 + C12620 * C106) *
                        C29220 * C12621 +
                    (C12623 * C640 + C12638 + C12638 + C12619 * C648 +
                     C12625 * C643 + C12639 + C12639 + C12620 * C651) *
                        C29220 * C12622) *
                       C29196 * C29179 * C86)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
               C12624 +
           (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
               C12619 +
           (C12708 + C12709) * C12626 + (C12710 + C12711) * C12620) *
              C29220 * C29196 * C29179 * C84 -
          ((C12712 + C12713) * C12620 + (C12714 + C12715) * C12626 +
           (C12711 + C12710) * C12619 + (C12709 + C12708) * C12624) *
              C29220 * C29196 * C29179 * C85 +
          ((C12715 + C12714) * C12624 + (C12713 + C12712) * C12619 +
           (C12689 * C96 + C12621 * C159 + C12690 * C643 + C12622 * C711) *
               C12626 +
           (C12689 * C101 + C12621 * C164 + C12690 * C647 + C12622 * C715) *
               C12620) *
              C29220 * C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C29220 * C223) * C12624 +
            (C222 * C98 + C29220 * C228) * C12619 + C246 * C12626 +
            C247 * C12620) *
               C12621 +
           (C4974 * C12624 + C4975 * C12619 + C798 * C12626 + C797 * C12620) *
               C12622) *
              C29196 * C29179 * C84 -
          ((C795 * C12620 + C796 * C12626 + C797 * C12619 + C798 * C12624) *
               C12622 +
           (C249 * C12620 + C248 * C12626 + C247 * C12619 + C246 * C12624) *
               C12621) *
              C29196 * C29179 * C85 +
          ((C248 * C12624 + C249 * C12619 + C251 * C12626 + C250 * C12620) *
               C12621 +
           (C796 * C12624 + C795 * C12619 +
            (C222 * C643 + C29220 * C781) * C12626 +
            (C222 * C647 + C29220 * C785) * C12620) *
               C12622) *
              C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
               C12689 +
           (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
               C12621 +
           (C12624 * C642 + C12619 * C646 + C12626 * C641 + C12620 * C645) *
               C12690 +
           (C12624 * C710 + C12619 * C850 + C12626 * C709 + C12620 * C849) *
               C12622) *
              C29220 * C29196 * C29179 * C84 -
          ((C12626 * C708 + C12620 * C848 + C12624 * C709 + C12619 * C849) *
               C12622 +
           (C12626 * C640 + C12620 * C644 + C12624 * C641 + C12619 * C645) *
               C12690 +
           (C12626 * C158 + C12620 * C291 + C12624 * C157 + C12619 * C290) *
               C12621 +
           (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
               C12689) *
              C29220 * C29196 * C29179 * C85 +
          ((C12624 * C95 + C12619 * C100 + C12626 * C96 + C12620 * C101) *
               C12689 +
           (C12624 * C158 + C12619 * C291 + C12626 * C159 + C12620 * C292) *
               C12621 +
           (C12624 * C640 + C12619 * C644 + C12626 * C643 + C12620 * C647) *
               C12690 +
           (C12624 * C708 + C12619 * C848 + C12626 * C711 + C12620 * C851) *
               C12622) *
              C29220 * C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                     C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                        C12619 +
                    (C12892 + C12893) * C12620) *
                       C29220 * C29196 * C29179 * C84 -
                   ((C12894 + C12895) * C12620 + (C12893 + C12892) * C12619) *
                       C29220 * C29196 * C29179 * C85 +
                   ((C12895 + C12894) * C12619 +
                    (C12865 * C96 + C12882 + C12882 + C12621 * C336 +
                     C12866 * C643 + C12883 + C12883 + C12622 * C905) *
                        C12620) *
                       C29220 * C29196 * C29179 * C86)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C222 * C93 + C29220 * C223) * C12689 +
                     (C222 * C156 + C29220 * C396) * C12621 + C4974 * C12690 +
                     C5178 * C12622) *
                        C12619 +
                    (C12946 + C12947 + C12948 + C12949) * C12620) *
                       C29196 * C29179 * C84 -
                   ((C12950 + C12951 + C12952 + C12953) * C12620 +
                    (C12949 + C12948 + C12947 + C12946) * C12619) *
                       C29196 * C29179 * C85 +
                   ((C12953 + C12952 + C12951 + C12950) * C12619 +
                    (C251 * C12689 + C413 * C12621 +
                     (C222 * C643 + C29220 * C781) * C12690 +
                     (C222 * C711 + C29220 * C973) * C12622) *
                        C12620) *
                       C29196 * C29179 * C86)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) * C222 +
            (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                C29220) *
               C12621 +
           ((C12624 * C642 + C12619 * C646 + C12626 * C641 + C12620 * C645) *
                C222 +
            (C12624 * C780 + C12619 * C1036 + C12626 * C779 + C12620 * C1035) *
                C29220) *
               C12622) *
              C29196 * C29179 * C84 -
          (((C12626 * C778 + C12620 * C1034 + C12624 * C779 + C12619 * C1035) *
                C29220 +
            (C12626 * C640 + C12620 * C644 + C12624 * C641 + C12619 * C645) *
                C222) *
               C12622 +
           ((C12626 * C225 + C12620 * C457 + C12624 * C224 + C12619 * C456) *
                C29220 +
            (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                C222) *
               C12621) *
              C29196 * C29179 * C85 +
          (((C12624 * C95 + C12619 * C100 + C12626 * C96 + C12620 * C101) *
                C222 +
            (C12624 * C225 + C12619 * C457 + C12626 * C226 + C12620 * C458) *
                C29220) *
               C12621 +
           ((C12624 * C640 + C12619 * C644 + C12626 * C643 + C12620 * C647) *
                C222 +
            (C12624 * C778 + C12619 * C1034 + C12626 * C781 + C12620 * C1037) *
                C29220) *
               C12622) *
              C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C222 +
            (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                C29220) *
               C12619 +
           ((C12708 + C12709) * C222 + (C13062 + C13063) * C29220) * C12620) *
              C29196 * C29179 * C84 -
          (((C13064 + C13065) * C29220 + (C12714 + C12715) * C222) * C12620 +
           ((C13063 + C13062) * C29220 + (C12709 + C12708) * C222) * C12619) *
              C29196 * C29179 * C85 +
          (((C12715 + C12714) * C222 + (C13065 + C13064) * C29220) * C12619 +
           ((C12689 * C96 + C12621 * C159 + C12690 * C643 + C12622 * C711) *
                C222 +
            (C12689 * C226 + C12621 * C501 + C12690 * C781 + C12622 * C1091) *
                C29220) *
               C12620) *
              C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C557 * C93 + C564 + C564 + C29220 * C558) * C12621 +
                     C5371 * C12622) *
                        C12619 +
                    (C13116 + C13117) * C12620) *
                       C29196 * C29179 * C84 -
                   ((C13118 + C13119) * C12620 + (C13117 + C13116) * C12619) *
                       C29196 * C29179 * C85 +
                   ((C13119 + C13118) * C12619 +
                    (C583 * C12621 +
                     (C557 * C643 + C1164 + C1164 + C29220 * C1155) * C12622) *
                        C12620) *
                       C29196 * C29179 * C86)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                      C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                         C29220 * C12621 +
                     (C13206 + C13207) * C29220 * C12622) *
                        C29196 * C636 -
                    ((C12625 * C2253 + C13190 + C13190 + C12620 * C2259 +
                      C12623 * C2252 + C13191 + C13191 + C12619 * C2258) *
                         C29220 * C12622 +
                     (C13207 + C13206) * C29220 * C12621) *
                        C29196 * C29287) *
                       C638 +
                   (((C13208 + C13209) * C29220 * C12621 +
                     (C12623 * C2253 + C13196 + C13196 + C12619 * C2259 +
                      C12625 * C2254 + C13197 + C13197 + C12620 * C2260) *
                         C29220 * C12622) *
                        C29196 * C29287 -
                    ((C13209 + C13208) * C29220 * C12622 +
                     (C12625 * C95 + C12634 + C12634 + C12620 * C105 +
                      C12623 * C94 + C12635 + C12635 + C12619 * C104) *
                         C29220 * C12621) *
                        C29196 * C636) *
                       C29285)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C12624 +
            (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                C12619 +
            (C12708 + C12709) * C12626 + (C12710 + C12711) * C12620) *
               C29220 * C29196 * C636 -
           ((C13284 + C13285) * C12620 + (C13286 + C13287) * C12626 +
            (C12690 * C2255 + C12622 * C2305 + C12689 * C646 + C12621 * C714) *
                C12619 +
            (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                C12624) *
               C29220 * C29196 * C29287) *
              C638 +
          (((C13287 + C13286) * C12624 + (C13285 + C13284) * C12619 +
            (C12689 * C640 + C12621 * C708 + C12690 * C2254 + C12622 * C2304) *
                C12626 +
            (C12689 * C644 + C12621 * C712 + C12690 * C2257 + C12622 * C2307) *
                C12620) *
               C29220 * C29196 * C29287 -
           ((C12712 + C12713) * C12620 + (C12714 + C12715) * C12626 +
            (C12711 + C12710) * C12619 + (C12709 + C12708) * C12624) *
               C29220 * C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C29220 * C223) * C12624 +
             (C222 * C98 + C29220 * C228) * C12619 + C246 * C12626 +
             C247 * C12620) *
                C12621 +
            (C13354 + C13355 + C13356 + C13357) * C12622) *
               C29196 * C636 -
           ((C4979 * C12620 + C4978 * C12626 + C4977 * C12619 +
             C4976 * C12624) *
                C12622 +
            (C13357 + C13356 + C13355 + C13354) * C12621) *
               C29196 * C29287) *
              C638 +
          (((C13358 + C13359 + C13360 + C13361) * C12621 +
            (C4978 * C12624 + C4979 * C12619 +
             (C222 * C2254 + C29220 * C2348) * C12626 +
             (C222 * C2257 + C29220 * C2351) * C12620) *
                C12622) *
               C29196 * C29287 -
           ((C13361 + C13360 + C13359 + C13358) * C12622 +
            (C249 * C12620 + C248 * C12626 + C247 * C12619 + C246 * C12624) *
                C12621) *
               C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                C12689 +
            (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                C12621 +
            (C13444 + C13445) * C12690 + (C13446 + C13447) * C12622) *
               C29220 * C29196 * C636 -
           ((C12626 * C2303 + C12620 * C2391 + C12624 * C2302 +
             C12619 * C2390) *
                C12622 +
            (C12626 * C2253 + C12620 * C2256 + C12624 * C2252 +
             C12619 * C2255) *
                C12690 +
            (C13447 + C13446) * C12621 + (C13445 + C13444) * C12689) *
               C29220 * C29196 * C29287) *
              C638 +
          (((C13448 + C13449) * C12689 + (C13450 + C13451) * C12621 +
            (C12624 * C2253 + C12619 * C2256 + C12626 * C2254 +
             C12620 * C2257) *
                C12690 +
            (C12624 * C2303 + C12619 * C2391 + C12626 * C2304 +
             C12620 * C2392) *
                C12622) *
               C29220 * C29196 * C29287 -
           ((C13451 + C13450) * C12622 + (C13449 + C13448) * C12690 +
            (C12626 * C158 + C12620 * C291 + C12624 * C157 + C12619 * C290) *
                C12621 +
            (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                C12689) *
               C29220 * C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                      C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                         C12619 +
                     (C12892 + C12893) * C12620) *
                        C29220 * C29196 * C636 -
                    ((C13532 + C13533) * C12620 +
                     (C12866 * C2252 + C13524 + C13524 + C12622 * C2431 +
                      C12865 * C642 + C13525 + C13525 + C12621 * C904) *
                         C12619) *
                        C29220 * C29196 * C29287) *
                       C638 +
                   (((C13533 + C13532) * C12619 +
                     (C12865 * C640 + C13526 + C13526 + C12621 * C902 +
                      C12866 * C2254 + C13527 + C13527 + C12622 * C2433) *
                         C12620) *
                        C29220 * C29196 * C29287 -
                    ((C12894 + C12895) * C12620 + (C12893 + C12892) * C12619) *
                        C29220 * C29196 * C636) *
                       C29285)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C222 * C93 + C29220 * C223) * C12689 +
                      (C222 * C156 + C29220 * C396) * C12621 + C4974 * C12690 +
                      C5178 * C12622) *
                         C12619 +
                     (C12946 + C12947 + C12948 + C12949) * C12620) *
                        C29196 * C636 -
                    ((C13600 + C13601 + C13602 + C13603) * C12620 +
                     (C5179 * C12622 + C4976 * C12690 + C5178 * C12621 +
                      C4974 * C12689) *
                         C12619) *
                        C29196 * C29287) *
                       C638 +
                   (((C13603 + C13602 + C13601 + C13600) * C12619 +
                     (C796 * C12689 + C981 * C12621 +
                      (C222 * C2254 + C29220 * C2348) * C12690 +
                      (C222 * C2304 + C29220 * C2477) * C12622) *
                         C12620) *
                        C29196 * C29287 -
                    ((C12950 + C12951 + C12952 + C12953) * C12620 +
                     (C12949 + C12948 + C12947 + C12946) * C12619) *
                        C29196 * C636) *
                       C29285)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                 C222 +
             (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                 C29220) *
                C12621 +
            ((C13444 + C13445) * C222 + (C13678 + C13679) * C29220) * C12622) *
               C29196 * C636 -
           (((C12626 * C2347 + C12620 * C2517 + C12624 * C2346 +
              C12619 * C2516) *
                 C29220 +
             (C12626 * C2253 + C12620 * C2256 + C12624 * C2252 +
              C12619 * C2255) *
                 C222) *
                C12622 +
            ((C13679 + C13678) * C29220 + (C13445 + C13444) * C222) * C12621) *
               C29196 * C29287) *
              C638 +
          ((((C13448 + C13449) * C222 + (C13680 + C13681) * C29220) * C12621 +
            ((C12624 * C2253 + C12619 * C2256 + C12626 * C2254 +
              C12620 * C2257) *
                 C222 +
             (C12624 * C2347 + C12619 * C2517 + C12626 * C2348 +
              C12620 * C2518) *
                 C29220) *
                C12622) *
               C29196 * C29287 -
           (((C13681 + C13680) * C29220 + (C13449 + C13448) * C222) * C12622 +
            ((C12626 * C225 + C12620 * C457 + C12624 * C224 + C12619 * C456) *
                 C29220 +
             (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                 C222) *
                C12621) *
               C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                 C222 +
             (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                 C29220) *
                C12619 +
            ((C12708 + C12709) * C222 + (C13062 + C13063) * C29220) * C12620) *
               C29196 * C636 -
           (((C13752 + C13753) * C29220 + (C13286 + C13287) * C222) * C12620 +
            ((C12690 * C2346 + C12622 * C2557 + C12689 * C780 +
              C12621 * C1090) *
                 C29220 +
             (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                 C222) *
                C12619) *
               C29196 * C29287) *
              C638 +
          ((((C13287 + C13286) * C222 + (C13753 + C13752) * C29220) * C12619 +
            ((C12689 * C640 + C12621 * C708 + C12690 * C2254 + C12622 * C2304) *
                 C222 +
             (C12689 * C778 + C12621 * C1088 + C12690 * C2348 +
              C12622 * C2559) *
                 C29220) *
                C12620) *
               C29196 * C29287 -
           (((C13064 + C13065) * C29220 + (C12714 + C12715) * C222) * C12620 +
            ((C13063 + C13062) * C29220 + (C12709 + C12708) * C222) * C12619) *
               C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C557 * C93 + C564 + C564 + C29220 * C558) * C12621 +
             C5371 * C12622) *
                C12619 +
            (C13116 + C13117) * C12620) *
               C29196 * C636 -
           ((C13820 + C13821) * C12620 +
            (C5372 * C12622 + C5371 * C12621) * C12619) *
               C29196 * C29287) *
              C638 +
          (((C13821 + C13820) * C12619 +
            (C1169 * C12621 +
             (C557 * C2254 + C2604 + C2604 + C29220 * C2600) * C12622) *
                C12620) *
               C29196 * C29287 -
           ((C13118 + C13119) * C12620 + (C13117 + C13116) * C12619) * C29196 *
               C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                      C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                         C29220 * C12621 +
                     (C13206 + C13207) * C29220 * C12622) *
                        C1222 -
                    ((C12625 * C2655 + C13888 + C13888 + C12620 * C2661 +
                      C12623 * C2654 + C13889 + C13889 + C12619 * C2660) *
                         C29220 * C12622 +
                     (C12625 * C1225 + C13890 + C13890 + C12620 * C1233 +
                      C12623 * C1226 + C13891 + C13891 + C12619 * C1234) *
                         C29220 * C12621) *
                        C29289) *
                       C29179 * C638 +
                   (((C12623 * C1225 + C13892 + C13892 + C12619 * C1233 +
                      C12625 * C1224 + C13893 + C13893 + C12620 * C1232) *
                         C29220 * C12621 +
                     (C12623 * C2655 + C13894 + C13894 + C12619 * C2661 +
                      C12625 * C2656 + C13895 + C13895 + C12620 * C2662) *
                         C29220 * C12622) *
                        C29289 -
                    ((C13209 + C13208) * C29220 * C12622 +
                     (C12625 * C95 + C12634 + C12634 + C12620 * C105 +
                      C12623 * C94 + C12635 + C12635 + C12619 * C104) *
                         C29220 * C12621) *
                        C1222) *
                       C29179 * C29285)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C12624 +
            (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                C12619 +
            (C12708 + C12709) * C12626 + (C12710 + C12711) * C12620) *
               C29220 * C1222 -
           ((C13970 + C13971) * C12620 + (C13972 + C13973) * C12626 +
            (C12690 * C2657 + C12622 * C2719 + C12689 * C1230 +
             C12621 * C1298) *
                C12619 +
            (C12690 * C2654 + C12622 * C2716 + C12689 * C1226 +
             C12621 * C1294) *
                C12624) *
               C29220 * C29289) *
              C29179 * C638 +
          (((C13973 + C13972) * C12624 + (C13971 + C13970) * C12619 +
            (C12689 * C1224 + C12621 * C1292 + C12690 * C2656 +
             C12622 * C2718) *
                C12626 +
            (C12689 * C1228 + C12621 * C1296 + C12690 * C2659 +
             C12622 * C2721) *
                C12620) *
               C29220 * C29289 -
           ((C12712 + C12713) * C12620 + (C12714 + C12715) * C12626 +
            (C12711 + C12710) * C12619 + (C12709 + C12708) * C12624) *
               C29220 * C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C29220 * C223) * C12624 +
             (C222 * C98 + C29220 * C228) * C12619 + C246 * C12626 +
             C247 * C12620) *
                C12621 +
            (C13354 + C13355 + C13356 + C13357) * C12622) *
               C1222 -
           ((C14044 * C12620 + C14045 * C12626 + C6889 * C12619 +
             C6890 * C12624) *
                C12622 +
            (C1381 * C12620 + C1382 * C12626 +
             (C222 * C1230 + C29220 * C1368) * C12619 +
             (C222 * C1226 + C29220 * C1364) * C12624) *
                C12621) *
               C29289) *
              C29179 * C638 +
          (((C1382 * C12624 + C1381 * C12619 + C1380 * C12626 +
             C1379 * C12620) *
                C12621 +
            (C14045 * C12624 + C14044 * C12619 +
             (C222 * C2656 + C29220 * C2774) * C12626 +
             (C222 * C2659 + C29220 * C2777) * C12620) *
                C12622) *
               C29289 -
           ((C13361 + C13360 + C13359 + C13358) * C12622 +
            (C249 * C12620 + C248 * C12626 + C247 * C12619 + C246 * C12624) *
                C12621) *
               C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                C12689 +
            (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                C12621 +
            (C13444 + C13445) * C12690 + (C13446 + C13447) * C12622) *
               C29220 * C1222 -
           ((C12626 * C2717 + C12620 * C2829 + C12624 * C2716 +
             C12619 * C2828) *
                C12622 +
            (C12626 * C2655 + C12620 * C2658 + C12624 * C2654 +
             C12619 * C2657) *
                C12690 +
            (C12626 * C1293 + C12620 * C1433 + C12624 * C1294 +
             C12619 * C1434) *
                C12621 +
            (C12626 * C1225 + C12620 * C1229 + C12624 * C1226 +
             C12619 * C1230) *
                C12689) *
               C29220 * C29289) *
              C29179 * C638 +
          (((C12624 * C1225 + C12619 * C1229 + C12626 * C1224 +
             C12620 * C1228) *
                C12689 +
            (C12624 * C1293 + C12619 * C1433 + C12626 * C1292 +
             C12620 * C1432) *
                C12621 +
            (C12624 * C2655 + C12619 * C2658 + C12626 * C2656 +
             C12620 * C2659) *
                C12690 +
            (C12624 * C2717 + C12619 * C2829 + C12626 * C2718 +
             C12620 * C2830) *
                C12622) *
               C29220 * C29289 -
           ((C13451 + C13450) * C12622 + (C13449 + C13448) * C12690 +
            (C12626 * C158 + C12620 * C291 + C12624 * C157 + C12619 * C290) *
                C12621 +
            (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                C12689) *
               C29220 * C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                      C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                         C12619 +
                     (C12892 + C12893) * C12620) *
                        C29220 * C1222 -
                    ((C14192 + C14193) * C12620 +
                     (C12866 * C2654 + C14184 + C14184 + C12622 * C2881 +
                      C12865 * C1226 + C14185 + C14185 + C12621 * C1488) *
                         C12619) *
                        C29220 * C29289) *
                       C29179 * C638 +
                   (((C14193 + C14192) * C12619 +
                     (C12865 * C1224 + C14186 + C14186 + C12621 * C1486 +
                      C12866 * C2656 + C14187 + C14187 + C12622 * C2883) *
                         C12620) *
                        C29220 * C29289 -
                    ((C12894 + C12895) * C12620 + (C12893 + C12892) * C12619) *
                        C29220 * C1222) *
                       C29179 * C29285)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C222 * C93 + C29220 * C223) * C12689 +
                      (C222 * C156 + C29220 * C396) * C12621 + C4974 * C12690 +
                      C5178 * C12622) *
                         C12619 +
                     (C12946 + C12947 + C12948 + C12949) * C12620) *
                        C1222 -
                    ((C14266 + C14262 + C14263 + C14264) * C12620 +
                     (C7068 * C12622 + C6890 * C12690 +
                      (C222 * C1294 + C29220 * C1556) * C12621 +
                      (C222 * C1226 + C29220 * C1364) * C12689) *
                         C12619) *
                        C29289) *
                       C29179 * C638 +
                   (((C14264 + C14263 + C14262 + C14266) * C12619 +
                     (C1380 * C12689 + C1565 * C12621 +
                      (C222 * C2656 + C29220 * C2774) * C12690 +
                      (C222 * C2718 + C29220 * C2939) * C12622) *
                         C12620) *
                        C29289 -
                    ((C12950 + C12951 + C12952 + C12953) * C12620 +
                     (C12949 + C12948 + C12947 + C12946) * C12619) *
                        C1222) *
                       C29179 * C29285)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                 C222 +
             (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                 C29220) *
                C12621 +
            ((C13444 + C13445) * C222 + (C13678 + C13679) * C29220) * C12622) *
               C1222 -
           (((C12626 * C2773 + C12620 * C2991 + C12624 * C2772 +
              C12619 * C2990) *
                 C29220 +
             (C12626 * C2655 + C12620 * C2658 + C12624 * C2654 +
              C12619 * C2657) *
                 C222) *
                C12622 +
            ((C12626 * C1363 + C12620 * C1619 + C12624 * C1364 +
              C12619 * C1620) *
                 C29220 +
             (C12626 * C1225 + C12620 * C1229 + C12624 * C1226 +
              C12619 * C1230) *
                 C222) *
                C12621) *
               C29289) *
              C29179 * C638 +
          ((((C12624 * C1225 + C12619 * C1229 + C12626 * C1224 +
              C12620 * C1228) *
                 C222 +
             (C12624 * C1363 + C12619 * C1619 + C12626 * C1362 +
              C12620 * C1618) *
                 C29220) *
                C12621 +
            ((C12624 * C2655 + C12619 * C2658 + C12626 * C2656 +
              C12620 * C2659) *
                 C222 +
             (C12624 * C2773 + C12619 * C2991 + C12626 * C2774 +
              C12620 * C2992) *
                 C29220) *
                C12622) *
               C29289 -
           (((C13681 + C13680) * C29220 + (C13449 + C13448) * C222) * C12622 +
            ((C12626 * C225 + C12620 * C457 + C12624 * C224 + C12619 * C456) *
                 C29220 +
             (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                 C222) *
                C12621) *
               C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                 C222 +
             (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                 C29220) *
                C12619 +
            ((C12708 + C12709) * C222 + (C13062 + C13063) * C29220) * C12620) *
               C1222 -
           (((C14403 + C14404) * C29220 + (C13972 + C13973) * C222) * C12620 +
            ((C12690 * C2772 + C12622 * C3043 + C12689 * C1364 +
              C12621 * C1674) *
                 C29220 +
             (C12690 * C2654 + C12622 * C2716 + C12689 * C1226 +
              C12621 * C1294) *
                 C222) *
                C12619) *
               C29289) *
              C29179 * C638 +
          ((((C13973 + C13972) * C222 + (C14404 + C14403) * C29220) * C12619 +
            ((C12689 * C1224 + C12621 * C1292 + C12690 * C2656 +
              C12622 * C2718) *
                 C222 +
             (C12689 * C1362 + C12621 * C1672 + C12690 * C2774 +
              C12622 * C3045) *
                 C29220) *
                C12620) *
               C29289 -
           (((C13064 + C13065) * C29220 + (C12714 + C12715) * C222) * C12620 +
            ((C13063 + C13062) * C29220 + (C12709 + C12708) * C222) * C12619) *
               C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C557 * C93 + C564 + C564 + C29220 * C558) * C12621 +
             C5371 * C12622) *
                C12619 +
            (C13116 + C13117) * C12620) *
               C1222 -
           ((C14477 + C14473) * C12620 +
            (C7242 * C12622 +
             (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C12621) *
                C12619) *
               C29289) *
              C29179 * C638 +
          (((C14473 + C14477) * C12619 +
            (C1753 * C12621 +
             (C557 * C2656 + C3102 + C3102 + C29220 * C3098) * C12622) *
                C12620) *
               C29289 -
           ((C13118 + C13119) * C12620 + (C13117 + C13116) * C12619) * C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                      C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                         C29220 * C12621 +
                     (C13206 + C13207) * C29220 * C12622) *
                        C29196 * C1806 -
                    ((C12625 * C2253 + C13190 + C13190 + C12620 * C2259 +
                      C12623 * C2252 + C13191 + C13191 + C12619 * C2258) *
                         C29220 * C12622 +
                     (C13207 + C13206) * C29220 * C12621) *
                        C29196 * C29287) *
                       C1808 +
                   (((C13208 + C13209) * C29220 * C12621 +
                     (C12623 * C2253 + C13196 + C13196 + C12619 * C2259 +
                      C12625 * C2254 + C13197 + C13197 + C12620 * C2260) *
                         C29220 * C12622) *
                        C29196 * C29287 -
                    ((C13209 + C13208) * C29220 * C12622 +
                     (C12625 * C95 + C12634 + C12634 + C12620 * C105 +
                      C12623 * C94 + C12635 + C12635 + C12619 * C104) *
                         C29220 * C12621) *
                        C29196 * C1806) *
                       C29285)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C12624 +
            (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                C12619 +
            (C12708 + C12709) * C12626 + (C12710 + C12711) * C12620) *
               C29220 * C29196 * C1806 -
           ((C13284 + C13285) * C12620 + (C13286 + C13287) * C12626 +
            (C12690 * C2255 + C12622 * C2305 + C12689 * C646 + C12621 * C714) *
                C12619 +
            (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                C12624) *
               C29220 * C29196 * C29287) *
              C1808 +
          (((C13287 + C13286) * C12624 + (C13285 + C13284) * C12619 +
            (C12689 * C640 + C12621 * C708 + C12690 * C2254 + C12622 * C2304) *
                C12626 +
            (C12689 * C644 + C12621 * C712 + C12690 * C2257 + C12622 * C2307) *
                C12620) *
               C29220 * C29196 * C29287 -
           ((C12712 + C12713) * C12620 + (C12714 + C12715) * C12626 +
            (C12711 + C12710) * C12619 + (C12709 + C12708) * C12624) *
               C29220 * C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C29220 * C223) * C12624 +
             (C222 * C98 + C29220 * C228) * C12619 + C246 * C12626 +
             C247 * C12620) *
                C12621 +
            (C13354 + C13355 + C13356 + C13357) * C12622) *
               C29196 * C1806 -
           ((C4979 * C12620 + C4978 * C12626 + C4977 * C12619 +
             C4976 * C12624) *
                C12622 +
            (C13357 + C13356 + C13355 + C13354) * C12621) *
               C29196 * C29287) *
              C1808 +
          (((C13358 + C13359 + C13360 + C13361) * C12621 +
            (C4978 * C12624 + C4979 * C12619 +
             (C222 * C2254 + C29220 * C2348) * C12626 +
             (C222 * C2257 + C29220 * C2351) * C12620) *
                C12622) *
               C29196 * C29287 -
           ((C13361 + C13360 + C13359 + C13358) * C12622 +
            (C249 * C12620 + C248 * C12626 + C247 * C12619 + C246 * C12624) *
                C12621) *
               C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                C12689 +
            (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                C12621 +
            (C13444 + C13445) * C12690 + (C13446 + C13447) * C12622) *
               C29220 * C29196 * C1806 -
           ((C12626 * C2303 + C12620 * C2391 + C12624 * C2302 +
             C12619 * C2390) *
                C12622 +
            (C12626 * C2253 + C12620 * C2256 + C12624 * C2252 +
             C12619 * C2255) *
                C12690 +
            (C13447 + C13446) * C12621 + (C13445 + C13444) * C12689) *
               C29220 * C29196 * C29287) *
              C1808 +
          (((C13448 + C13449) * C12689 + (C13450 + C13451) * C12621 +
            (C12624 * C2253 + C12619 * C2256 + C12626 * C2254 +
             C12620 * C2257) *
                C12690 +
            (C12624 * C2303 + C12619 * C2391 + C12626 * C2304 +
             C12620 * C2392) *
                C12622) *
               C29220 * C29196 * C29287 -
           ((C13451 + C13450) * C12622 + (C13449 + C13448) * C12690 +
            (C12626 * C158 + C12620 * C291 + C12624 * C157 + C12619 * C290) *
                C12621 +
            (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                C12689) *
               C29220 * C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                      C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                         C12619 +
                     (C12892 + C12893) * C12620) *
                        C29220 * C29196 * C1806 -
                    ((C13532 + C13533) * C12620 +
                     (C12866 * C2252 + C13524 + C13524 + C12622 * C2431 +
                      C12865 * C642 + C13525 + C13525 + C12621 * C904) *
                         C12619) *
                        C29220 * C29196 * C29287) *
                       C1808 +
                   (((C13533 + C13532) * C12619 +
                     (C12865 * C640 + C13526 + C13526 + C12621 * C902 +
                      C12866 * C2254 + C13527 + C13527 + C12622 * C2433) *
                         C12620) *
                        C29220 * C29196 * C29287 -
                    ((C12894 + C12895) * C12620 + (C12893 + C12892) * C12619) *
                        C29220 * C29196 * C1806) *
                       C29285)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C222 * C93 + C29220 * C223) * C12689 +
                      (C222 * C156 + C29220 * C396) * C12621 + C4974 * C12690 +
                      C5178 * C12622) *
                         C12619 +
                     (C12946 + C12947 + C12948 + C12949) * C12620) *
                        C29196 * C1806 -
                    ((C13600 + C13601 + C13602 + C13603) * C12620 +
                     (C5179 * C12622 + C4976 * C12690 + C5178 * C12621 +
                      C4974 * C12689) *
                         C12619) *
                        C29196 * C29287) *
                       C1808 +
                   (((C13603 + C13602 + C13601 + C13600) * C12619 +
                     (C796 * C12689 + C981 * C12621 +
                      (C222 * C2254 + C29220 * C2348) * C12690 +
                      (C222 * C2304 + C29220 * C2477) * C12622) *
                         C12620) *
                        C29196 * C29287 -
                    ((C12950 + C12951 + C12952 + C12953) * C12620 +
                     (C12949 + C12948 + C12947 + C12946) * C12619) *
                        C29196 * C1806) *
                       C29285)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                 C222 +
             (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                 C29220) *
                C12621 +
            ((C13444 + C13445) * C222 + (C13678 + C13679) * C29220) * C12622) *
               C29196 * C1806 -
           (((C12626 * C2347 + C12620 * C2517 + C12624 * C2346 +
              C12619 * C2516) *
                 C29220 +
             (C12626 * C2253 + C12620 * C2256 + C12624 * C2252 +
              C12619 * C2255) *
                 C222) *
                C12622 +
            ((C13679 + C13678) * C29220 + (C13445 + C13444) * C222) * C12621) *
               C29196 * C29287) *
              C1808 +
          ((((C13448 + C13449) * C222 + (C13680 + C13681) * C29220) * C12621 +
            ((C12624 * C2253 + C12619 * C2256 + C12626 * C2254 +
              C12620 * C2257) *
                 C222 +
             (C12624 * C2347 + C12619 * C2517 + C12626 * C2348 +
              C12620 * C2518) *
                 C29220) *
                C12622) *
               C29196 * C29287 -
           (((C13681 + C13680) * C29220 + (C13449 + C13448) * C222) * C12622 +
            ((C12626 * C225 + C12620 * C457 + C12624 * C224 + C12619 * C456) *
                 C29220 +
             (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                 C222) *
                C12621) *
               C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                 C222 +
             (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                 C29220) *
                C12619 +
            ((C12708 + C12709) * C222 + (C13062 + C13063) * C29220) * C12620) *
               C29196 * C1806 -
           (((C13752 + C13753) * C29220 + (C13286 + C13287) * C222) * C12620 +
            ((C12690 * C2346 + C12622 * C2557 + C12689 * C780 +
              C12621 * C1090) *
                 C29220 +
             (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                 C222) *
                C12619) *
               C29196 * C29287) *
              C1808 +
          ((((C13287 + C13286) * C222 + (C13753 + C13752) * C29220) * C12619 +
            ((C12689 * C640 + C12621 * C708 + C12690 * C2254 + C12622 * C2304) *
                 C222 +
             (C12689 * C778 + C12621 * C1088 + C12690 * C2348 +
              C12622 * C2559) *
                 C29220) *
                C12620) *
               C29196 * C29287 -
           (((C13064 + C13065) * C29220 + (C12714 + C12715) * C222) * C12620 +
            ((C13063 + C13062) * C29220 + (C12709 + C12708) * C222) * C12619) *
               C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C557 * C93 + C564 + C564 + C29220 * C558) * C12621 +
             C5371 * C12622) *
                C12619 +
            (C13116 + C13117) * C12620) *
               C29196 * C1806 -
           ((C13820 + C13821) * C12620 +
            (C5372 * C12622 + C5371 * C12621) * C12619) *
               C29196 * C29287) *
              C1808 +
          (((C13821 + C13820) * C12619 +
            (C1169 * C12621 +
             (C557 * C2254 + C2604 + C2604 + C29220 * C2600) * C12622) *
                C12620) *
               C29196 * C29287 -
           ((C13118 + C13119) * C12620 + (C13117 + C13116) * C12619) * C29196 *
               C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                     C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                        C29220 * C12621 +
                    (C13206 + C13207) * C29220 * C12622) *
                       C29196 * C2248 -
                   ((C15132 + C15133) * C29220 * C12622 +
                    (C13207 + C13206) * C29220 * C12621) *
                       C29196 * C2249 +
                   ((C15133 + C15132) * C29220 * C12621 +
                    (C12623 * C4819 + C15126 + C15126 + C12619 * C4823 +
                     C12625 * C4820 + C15127 + C15127 + C12620 * C4824) *
                        C29220 * C12622) *
                       C29196 * C2250) *
                  C29145) /
                 (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
               C12624 +
           (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
               C12619 +
           (C12708 + C12709) * C12626 + (C12710 + C12711) * C12620) *
              C29220 * C29196 * C2248 -
          ((C13284 + C13285) * C12620 + (C13286 + C13287) * C12626 +
           (C12690 * C2255 + C12622 * C2305 + C12689 * C646 + C12621 * C714) *
               C12619 +
           (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
               C12624) *
              C29220 * C29196 * C2249 +
          ((C12689 * C2252 + C12621 * C2302 + C12690 * C4819 + C12622 * C4901) *
               C12624 +
           (C12689 * C2255 + C12621 * C2305 + C12690 * C4821 + C12622 * C4903) *
               C12619 +
           (C12689 * C2253 + C12621 * C2303 + C12690 * C4820 + C12622 * C4902) *
               C12626 +
           (C12689 * C2256 + C12621 * C2306 + C12690 * C4822 + C12622 * C4904) *
               C12620) *
              C29220 * C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C222 * C93 + C29220 * C223) * C12624 +
                     (C222 * C98 + C29220 * C228) * C12619 + C246 * C12626 +
                     C247 * C12620) *
                        C12621 +
                    (C13354 + C13355 + C13356 + C13357) * C12622) *
                       C29196 * C2248 -
                   ((C15234 + C15235 + C15236 + C15237) * C12622 +
                    (C13357 + C13356 + C13355 + C13354) * C12621) *
                       C29196 * C2249 +
                   ((C15237 + C15236 + C15235 + C15234) * C12621 +
                    (C6448 * C12624 + C6447 * C12619 +
                     (C222 * C4820 + C29220 * C4956) * C12626 +
                     (C222 * C4822 + C29220 * C4958) * C12620) *
                        C12622) *
                       C29196 * C2250) *
                  C29145) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
               C12689 +
           (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
               C12621 +
           (C13444 + C13445) * C12690 + (C13446 + C13447) * C12622) *
              C29220 * C29196 * C2248 -
          ((C15296 + C15297) * C12622 + (C15298 + C15299) * C12690 +
           (C13447 + C13446) * C12621 + (C13445 + C13444) * C12689) *
              C29220 * C29196 * C2249 +
          ((C15299 + C15298) * C12689 + (C15297 + C15296) * C12621 +
           (C12624 * C4819 + C12619 * C4821 + C12626 * C4820 + C12620 * C4822) *
               C12690 +
           (C12624 * C4901 + C12619 * C5035 + C12626 * C4902 + C12620 * C5036) *
               C12622) *
              C29220 * C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                     C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                        C12619 +
                    (C12892 + C12893) * C12620) *
                       C29220 * C29196 * C2248 -
                   ((C13532 + C13533) * C12620 +
                    (C12866 * C2252 + C13524 + C13524 + C12622 * C2431 +
                     C12865 * C642 + C13525 + C13525 + C12621 * C904) *
                        C12619) *
                       C29220 * C29196 * C2249 +
                   ((C12865 * C2252 + C15350 + C15350 + C12621 * C2431 +
                     C12866 * C4819 + C15351 + C15351 + C12622 * C5111) *
                        C12619 +
                    (C12865 * C2253 + C15352 + C15352 + C12621 * C2432 +
                     C12866 * C4820 + C15353 + C15353 + C12622 * C5112) *
                        C12620) *
                       C29220 * C29196 * C2250) *
                  C29145) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C29220 * C223) * C12689 +
            (C222 * C156 + C29220 * C396) * C12621 + C4974 * C12690 +
            C5178 * C12622) *
               C12619 +
           (C12946 + C12947 + C12948 + C12949) * C12620) *
              C29196 * C2248 -
          ((C13600 + C13601 + C13602 + C13603) * C12620 +
           (C5179 * C12622 + C4976 * C12690 + C5178 * C12621 + C4974 * C12689) *
               C12619) *
              C29196 * C2249 +
          ((C4976 * C12689 + C5179 * C12621 + C6448 * C12690 + C6579 * C12622) *
               C12619 +
           (C4978 * C12689 + C5180 * C12621 +
            (C222 * C4820 + C29220 * C4956) * C12690 +
            (C222 * C4902 + C29220 * C5170) * C12622) *
               C12620) *
              C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) * C222 +
            (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                C29220) *
               C12621 +
           ((C13444 + C13445) * C222 + (C13678 + C13679) * C29220) * C12622) *
              C29196 * C2248 -
          (((C15458 + C15459) * C29220 + (C15298 + C15299) * C222) * C12622 +
           ((C13679 + C13678) * C29220 + (C13445 + C13444) * C222) * C12621) *
              C29196 * C2249 +
          (((C15299 + C15298) * C222 + (C15459 + C15458) * C29220) * C12621 +
           ((C12624 * C4819 + C12619 * C4821 + C12626 * C4820 +
             C12620 * C4822) *
                C222 +
            (C12624 * C4955 + C12619 * C5230 + C12626 * C4956 +
             C12620 * C5231) *
                C29220) *
               C12622) *
              C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C222 +
            (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                C29220) *
               C12619 +
           ((C12708 + C12709) * C222 + (C13062 + C13063) * C29220) * C12620) *
              C29196 * C2248 -
          (((C13752 + C13753) * C29220 + (C13286 + C13287) * C222) * C12620 +
           ((C12690 * C2346 + C12622 * C2557 + C12689 * C780 + C12621 * C1090) *
                C29220 +
            (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                C222) *
               C12619) *
              C29196 * C2249 +
          (((C12689 * C2252 + C12621 * C2302 + C12690 * C4819 +
             C12622 * C4901) *
                C222 +
            (C12689 * C2346 + C12621 * C2557 + C12690 * C4955 +
             C12622 * C5302) *
                C29220) *
               C12619 +
           ((C12689 * C2253 + C12621 * C2303 + C12690 * C4820 +
             C12622 * C4902) *
                C222 +
            (C12689 * C2347 + C12621 * C2558 + C12690 * C4956 +
             C12622 * C5303) *
                C29220) *
               C12620) *
              C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C557 * C93 + C564 + C564 + C29220 * C558) * C12621 +
                     C5371 * C12622) *
                        C12619 +
                    (C13116 + C13117) * C12620) *
                       C29196 * C2248 -
                   ((C13820 + C13821) * C12620 +
                    (C5372 * C12622 + C5371 * C12621) * C12619) *
                       C29196 * C2249 +
                   ((C5372 * C12621 + C6708 * C12622) * C12619 +
                    (C5373 * C12621 +
                     (C557 * C4820 + C5364 + C5364 + C29220 * C5355) * C12622) *
                        C12620) *
                       C29196 * C2250) *
                  C29145) /
                 (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                      C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                         C29220 * C12621 +
                     (C13206 + C13207) * C29220 * C12622) *
                        C1222 -
                    ((C15636 + C15637) * C29220 * C12622 +
                     (C12625 * C1225 + C13890 + C13890 + C12620 * C1233 +
                      C12623 * C1226 + C13891 + C13891 + C12619 * C1234) *
                         C29220 * C12621) *
                        C29289) *
                       C1806 +
                   (((C15637 + C15636) * C29220 * C12621 +
                     (C12623 * C5423 + C15630 + C15630 + C12619 * C5427 +
                      C12625 * C5424 + C15631 + C15631 + C12620 * C5428) *
                         C29220 * C12622) *
                        C29289 -
                    ((C15132 + C15133) * C29220 * C12622 +
                     (C13207 + C13206) * C29220 * C12621) *
                        C1222) *
                       C29287) *
                  C29145) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C12624 +
            (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                C12619 +
            (C12708 + C12709) * C12626 + (C12710 + C12711) * C12620) *
               C29220 * C1222 -
           ((C13970 + C13971) * C12620 + (C13972 + C13973) * C12626 +
            (C12690 * C2657 + C12622 * C2719 + C12689 * C1230 +
             C12621 * C1298) *
                C12619 +
            (C12690 * C2654 + C12622 * C2716 + C12689 * C1226 +
             C12621 * C1294) *
                C12624) *
               C29220 * C29289) *
              C1806 +
          (((C12689 * C2654 + C12621 * C2716 + C12690 * C5423 +
             C12622 * C5485) *
                C12624 +
            (C12689 * C2657 + C12621 * C2719 + C12690 * C5425 +
             C12622 * C5487) *
                C12619 +
            (C12689 * C2655 + C12621 * C2717 + C12690 * C5424 +
             C12622 * C5486) *
                C12626 +
            (C12689 * C2658 + C12621 * C2720 + C12690 * C5426 +
             C12622 * C5488) *
                C12620) *
               C29220 * C29289 -
           ((C13284 + C13285) * C12620 + (C13286 + C13287) * C12626 +
            (C12690 * C2255 + C12622 * C2305 + C12689 * C646 + C12621 * C714) *
                C12619 +
            (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                C12624) *
               C29220 * C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C222 * C93 + C29220 * C223) * C12624 +
                      (C222 * C98 + C29220 * C228) * C12619 + C246 * C12626 +
                      C247 * C12620) *
                         C12621 +
                     (C13354 + C13355 + C13356 + C13357) * C12622) *
                        C1222 -
                    ((C15770 + C15771 + C15772 + C15773) * C12622 +
                     (C1381 * C12620 + C1382 * C12626 +
                      (C222 * C1230 + C29220 * C1368) * C12619 +
                      (C222 * C1226 + C29220 * C1364) * C12624) *
                         C12621) *
                        C29289) *
                       C1806 +
                   (((C15773 + C15772 + C15771 + C15770) * C12621 +
                     (C6888 * C12624 + C6887 * C12619 +
                      (C222 * C5424 + C29220 * C5540) * C12626 +
                      (C222 * C5426 + C29220 * C5542) * C12620) *
                         C12622) *
                        C29289 -
                    ((C15234 + C15235 + C15236 + C15237) * C12622 +
                     (C13357 + C13356 + C13355 + C13354) * C12621) *
                        C1222) *
                       C29287) *
                  C29145) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                C12689 +
            (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                C12621 +
            (C13444 + C13445) * C12690 + (C13446 + C13447) * C12622) *
               C29220 * C1222 -
           ((C15848 + C15849) * C12622 + (C15850 + C15851) * C12690 +
            (C12626 * C1293 + C12620 * C1433 + C12624 * C1294 +
             C12619 * C1434) *
                C12621 +
            (C12626 * C1225 + C12620 * C1229 + C12624 * C1226 +
             C12619 * C1230) *
                C12689) *
               C29220 * C29289) *
              C1806 +
          (((C15851 + C15850) * C12689 + (C15849 + C15848) * C12621 +
            (C12624 * C5423 + C12619 * C5425 + C12626 * C5424 +
             C12620 * C5426) *
                C12690 +
            (C12624 * C5485 + C12619 * C5593 + C12626 * C5486 +
             C12620 * C5594) *
                C12622) *
               C29220 * C29289 -
           ((C15296 + C15297) * C12622 + (C15298 + C15299) * C12690 +
            (C13447 + C13446) * C12621 + (C13445 + C13444) * C12689) *
               C29220 * C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                      C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                         C12619 +
                     (C12892 + C12893) * C12620) *
                        C29220 * C1222 -
                    ((C14192 + C14193) * C12620 +
                     (C12866 * C2654 + C14184 + C14184 + C12622 * C2881 +
                      C12865 * C1226 + C14185 + C14185 + C12621 * C1488) *
                         C12619) *
                        C29220 * C29289) *
                       C1806 +
                   (((C12865 * C2654 + C15918 + C15918 + C12621 * C2881 +
                      C12866 * C5423 + C15919 + C15919 + C12622 * C5645) *
                         C12619 +
                     (C12865 * C2655 + C15920 + C15920 + C12621 * C2882 +
                      C12866 * C5424 + C15921 + C15921 + C12622 * C5646) *
                         C12620) *
                        C29220 * C29289 -
                    ((C13532 + C13533) * C12620 +
                     (C12866 * C2252 + C13524 + C13524 + C12622 * C2431 +
                      C12865 * C642 + C13525 + C13525 + C12621 * C904) *
                         C12619) *
                        C29220 * C1222) *
                       C29287) *
                  C29145) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C222 * C93 + C29220 * C223) * C12689 +
                      (C222 * C156 + C29220 * C396) * C12621 + C4974 * C12690 +
                      C5178 * C12622) *
                         C12619 +
                     (C12946 + C12947 + C12948 + C12949) * C12620) *
                        C1222 -
                    ((C14266 + C14262 + C14263 + C14264) * C12620 +
                     (C7068 * C12622 + C6890 * C12690 +
                      (C222 * C1294 + C29220 * C1556) * C12621 +
                      (C222 * C1226 + C29220 * C1364) * C12689) *
                         C12619) *
                        C29289) *
                       C1806 +
                   (((C6890 * C12689 + C7068 * C12621 + C6888 * C12690 +
                      C7067 * C12622) *
                         C12619 +
                     (C14045 * C12689 + C14265 * C12621 +
                      (C222 * C5424 + C29220 * C5540) * C12690 +
                      (C222 * C5486 + C29220 * C5704) * C12622) *
                         C12620) *
                        C29289 -
                    ((C13600 + C13601 + C13602 + C13603) * C12620 +
                     (C5179 * C12622 + C4976 * C12690 + C5178 * C12621 +
                      C4974 * C12689) *
                         C12619) *
                        C1222) *
                       C29287) *
                  C29145) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                 C222 +
             (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                 C29220) *
                C12621 +
            ((C13444 + C13445) * C222 + (C13678 + C13679) * C29220) * C12622) *
               C1222 -
           (((C16058 + C16059) * C29220 + (C15850 + C15851) * C222) * C12622 +
            ((C12626 * C1363 + C12620 * C1619 + C12624 * C1364 +
              C12619 * C1620) *
                 C29220 +
             (C12626 * C1225 + C12620 * C1229 + C12624 * C1226 +
              C12619 * C1230) *
                 C222) *
                C12621) *
               C29289) *
              C1806 +
          ((((C15851 + C15850) * C222 + (C16059 + C16058) * C29220) * C12621 +
            ((C12624 * C5423 + C12619 * C5425 + C12626 * C5424 +
              C12620 * C5426) *
                 C222 +
             (C12624 * C5539 + C12619 * C5755 + C12626 * C5540 +
              C12620 * C5756) *
                 C29220) *
                C12622) *
               C29289 -
           (((C15458 + C15459) * C29220 + (C15298 + C15299) * C222) * C12622 +
            ((C13679 + C13678) * C29220 + (C13445 + C13444) * C222) * C12621) *
               C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                 C222 +
             (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                 C29220) *
                C12619 +
            ((C12708 + C12709) * C222 + (C13062 + C13063) * C29220) * C12620) *
               C1222 -
           (((C14403 + C14404) * C29220 + (C13972 + C13973) * C222) * C12620 +
            ((C12690 * C2772 + C12622 * C3043 + C12689 * C1364 +
              C12621 * C1674) *
                 C29220 +
             (C12690 * C2654 + C12622 * C2716 + C12689 * C1226 +
              C12621 * C1294) *
                 C222) *
                C12619) *
               C29289) *
              C1806 +
          ((((C12689 * C2654 + C12621 * C2716 + C12690 * C5423 +
              C12622 * C5485) *
                 C222 +
             (C12689 * C2772 + C12621 * C3043 + C12690 * C5539 +
              C12622 * C5807) *
                 C29220) *
                C12619 +
            ((C12689 * C2655 + C12621 * C2717 + C12690 * C5424 +
              C12622 * C5486) *
                 C222 +
             (C12689 * C2773 + C12621 * C3044 + C12690 * C5540 +
              C12622 * C5808) *
                 C29220) *
                C12620) *
               C29289 -
           (((C13752 + C13753) * C29220 + (C13286 + C13287) * C222) * C12620 +
            ((C12690 * C2346 + C12622 * C2557 + C12689 * C780 +
              C12621 * C1090) *
                 C29220 +
             (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                 C222) *
                C12619) *
               C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C557 * C93 + C564 + C564 + C29220 * C558) * C12621 +
             C5371 * C12622) *
                C12619 +
            (C13116 + C13117) * C12620) *
               C1222 -
           ((C14477 + C14473) * C12620 +
            (C7242 * C12622 +
             (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C12621) *
                C12619) *
               C29289) *
              C1806 +
          (((C7242 * C12621 + C7241 * C12622) * C12619 +
            (C14476 * C12621 +
             (C557 * C5424 + C5863 + C5863 + C29220 * C5860) * C12622) *
                C12620) *
               C29289 -
           ((C13820 + C13821) * C12620 +
            (C5372 * C12622 + C5371 * C12621) * C12619) *
               C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                      C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                         C29220 * C12621 +
                     (C13206 + C13207) * C29220 * C12622) *
                        C3152 -
                    ((C15636 + C15637) * C29220 * C12622 +
                     (C12625 * C1225 + C13890 + C13890 + C12620 * C1233 +
                      C12623 * C1226 + C13891 + C13891 + C12619 * C1234) *
                         C29220 * C12621) *
                        C29289) *
                       C29179 * C1808 +
                   (((C12623 * C1225 + C13892 + C13892 + C12619 * C1233 +
                      C12625 * C1224 + C13893 + C13893 + C12620 * C1232) *
                         C29220 * C12621 +
                     (C12623 * C2655 + C13894 + C13894 + C12619 * C2661 +
                      C12625 * C2656 + C13895 + C13895 + C12620 * C2662) *
                         C29220 * C12622) *
                        C29289 -
                    ((C13209 + C13208) * C29220 * C12622 +
                     (C12625 * C95 + C12634 + C12634 + C12620 * C105 +
                      C12623 * C94 + C12635 + C12635 + C12619 * C104) *
                         C29220 * C12621) *
                        C3152) *
                       C29179 * C29285)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C12624 +
            (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                C12619 +
            (C12708 + C12709) * C12626 + (C12710 + C12711) * C12620) *
               C29220 * C3152 -
           ((C13970 + C13971) * C12620 + (C13972 + C13973) * C12626 +
            (C12690 * C2657 + C12622 * C2719 + C12689 * C1230 +
             C12621 * C1298) *
                C12619 +
            (C12690 * C2654 + C12622 * C2716 + C12689 * C1226 +
             C12621 * C1294) *
                C12624) *
               C29220 * C29289) *
              C29179 * C1808 +
          (((C13973 + C13972) * C12624 + (C13971 + C13970) * C12619 +
            (C12689 * C1224 + C12621 * C1292 + C12690 * C2656 +
             C12622 * C2718) *
                C12626 +
            (C12689 * C1228 + C12621 * C1296 + C12690 * C2659 +
             C12622 * C2721) *
                C12620) *
               C29220 * C29289 -
           ((C12712 + C12713) * C12620 + (C12714 + C12715) * C12626 +
            (C12711 + C12710) * C12619 + (C12709 + C12708) * C12624) *
               C29220 * C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C29220 * C223) * C12624 +
             (C222 * C98 + C29220 * C228) * C12619 + C246 * C12626 +
             C247 * C12620) *
                C12621 +
            (C13354 + C13355 + C13356 + C13357) * C12622) *
               C3152 -
           ((C15770 + C15771 + C15772 + C15773) * C12622 +
            (C1381 * C12620 + C1382 * C12626 +
             (C222 * C1230 + C29220 * C1368) * C12619 +
             (C222 * C1226 + C29220 * C1364) * C12624) *
                C12621) *
               C29289) *
              C29179 * C1808 +
          (((C1382 * C12624 + C1381 * C12619 + C1380 * C12626 +
             C1379 * C12620) *
                C12621 +
            (C14045 * C12624 + C14044 * C12619 +
             (C222 * C2656 + C29220 * C2774) * C12626 +
             (C222 * C2659 + C29220 * C2777) * C12620) *
                C12622) *
               C29289 -
           ((C13361 + C13360 + C13359 + C13358) * C12622 +
            (C249 * C12620 + C248 * C12626 + C247 * C12619 + C246 * C12624) *
                C12621) *
               C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                C12689 +
            (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                C12621 +
            (C13444 + C13445) * C12690 + (C13446 + C13447) * C12622) *
               C29220 * C3152 -
           ((C15848 + C15849) * C12622 + (C15850 + C15851) * C12690 +
            (C12626 * C1293 + C12620 * C1433 + C12624 * C1294 +
             C12619 * C1434) *
                C12621 +
            (C12626 * C1225 + C12620 * C1229 + C12624 * C1226 +
             C12619 * C1230) *
                C12689) *
               C29220 * C29289) *
              C29179 * C1808 +
          (((C12624 * C1225 + C12619 * C1229 + C12626 * C1224 +
             C12620 * C1228) *
                C12689 +
            (C12624 * C1293 + C12619 * C1433 + C12626 * C1292 +
             C12620 * C1432) *
                C12621 +
            (C12624 * C2655 + C12619 * C2658 + C12626 * C2656 +
             C12620 * C2659) *
                C12690 +
            (C12624 * C2717 + C12619 * C2829 + C12626 * C2718 +
             C12620 * C2830) *
                C12622) *
               C29220 * C29289 -
           ((C13451 + C13450) * C12622 + (C13449 + C13448) * C12690 +
            (C12626 * C158 + C12620 * C291 + C12624 * C157 + C12619 * C290) *
                C12621 +
            (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                C12689) *
               C29220 * C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                      C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                         C12619 +
                     (C12892 + C12893) * C12620) *
                        C29220 * C3152 -
                    ((C14192 + C14193) * C12620 +
                     (C12866 * C2654 + C14184 + C14184 + C12622 * C2881 +
                      C12865 * C1226 + C14185 + C14185 + C12621 * C1488) *
                         C12619) *
                        C29220 * C29289) *
                       C29179 * C1808 +
                   (((C14193 + C14192) * C12619 +
                     (C12865 * C1224 + C14186 + C14186 + C12621 * C1486 +
                      C12866 * C2656 + C14187 + C14187 + C12622 * C2883) *
                         C12620) *
                        C29220 * C29289 -
                    ((C12894 + C12895) * C12620 + (C12893 + C12892) * C12619) *
                        C29220 * C3152) *
                       C29179 * C29285)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C222 * C93 + C29220 * C223) * C12689 +
                      (C222 * C156 + C29220 * C396) * C12621 + C4974 * C12690 +
                      C5178 * C12622) *
                         C12619 +
                     (C12946 + C12947 + C12948 + C12949) * C12620) *
                        C3152 -
                    ((C14266 + C14262 + C14263 + C14264) * C12620 +
                     (C7068 * C12622 + C6890 * C12690 +
                      (C222 * C1294 + C29220 * C1556) * C12621 +
                      (C222 * C1226 + C29220 * C1364) * C12689) *
                         C12619) *
                        C29289) *
                       C29179 * C1808 +
                   (((C14264 + C14263 + C14262 + C14266) * C12619 +
                     (C1380 * C12689 + C1565 * C12621 +
                      (C222 * C2656 + C29220 * C2774) * C12690 +
                      (C222 * C2718 + C29220 * C2939) * C12622) *
                         C12620) *
                        C29289 -
                    ((C12950 + C12951 + C12952 + C12953) * C12620 +
                     (C12949 + C12948 + C12947 + C12946) * C12619) *
                        C3152) *
                       C29179 * C29285)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                 C222 +
             (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                 C29220) *
                C12621 +
            ((C13444 + C13445) * C222 + (C13678 + C13679) * C29220) * C12622) *
               C3152 -
           (((C16058 + C16059) * C29220 + (C15850 + C15851) * C222) * C12622 +
            ((C12626 * C1363 + C12620 * C1619 + C12624 * C1364 +
              C12619 * C1620) *
                 C29220 +
             (C12626 * C1225 + C12620 * C1229 + C12624 * C1226 +
              C12619 * C1230) *
                 C222) *
                C12621) *
               C29289) *
              C29179 * C1808 +
          ((((C12624 * C1225 + C12619 * C1229 + C12626 * C1224 +
              C12620 * C1228) *
                 C222 +
             (C12624 * C1363 + C12619 * C1619 + C12626 * C1362 +
              C12620 * C1618) *
                 C29220) *
                C12621 +
            ((C12624 * C2655 + C12619 * C2658 + C12626 * C2656 +
              C12620 * C2659) *
                 C222 +
             (C12624 * C2773 + C12619 * C2991 + C12626 * C2774 +
              C12620 * C2992) *
                 C29220) *
                C12622) *
               C29289 -
           (((C13681 + C13680) * C29220 + (C13449 + C13448) * C222) * C12622 +
            ((C12626 * C225 + C12620 * C457 + C12624 * C224 + C12619 * C456) *
                 C29220 +
             (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                 C222) *
                C12621) *
               C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                 C222 +
             (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                 C29220) *
                C12619 +
            ((C12708 + C12709) * C222 + (C13062 + C13063) * C29220) * C12620) *
               C3152 -
           (((C14403 + C14404) * C29220 + (C13972 + C13973) * C222) * C12620 +
            ((C12690 * C2772 + C12622 * C3043 + C12689 * C1364 +
              C12621 * C1674) *
                 C29220 +
             (C12690 * C2654 + C12622 * C2716 + C12689 * C1226 +
              C12621 * C1294) *
                 C222) *
                C12619) *
               C29289) *
              C29179 * C1808 +
          ((((C13973 + C13972) * C222 + (C14404 + C14403) * C29220) * C12619 +
            ((C12689 * C1224 + C12621 * C1292 + C12690 * C2656 +
              C12622 * C2718) *
                 C222 +
             (C12689 * C1362 + C12621 * C1672 + C12690 * C2774 +
              C12622 * C3045) *
                 C29220) *
                C12620) *
               C29289 -
           (((C13064 + C13065) * C29220 + (C12714 + C12715) * C222) * C12620 +
            ((C13063 + C13062) * C29220 + (C12709 + C12708) * C222) * C12619) *
               C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C557 * C93 + C564 + C564 + C29220 * C558) * C12621 +
             C5371 * C12622) *
                C12619 +
            (C13116 + C13117) * C12620) *
               C3152 -
           ((C14477 + C14473) * C12620 +
            (C7242 * C12622 +
             (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C12621) *
                C12619) *
               C29289) *
              C29179 * C1808 +
          (((C14473 + C14477) * C12619 +
            (C1753 * C12621 +
             (C557 * C2656 + C3102 + C3102 + C29220 * C3098) * C12622) *
                C12620) *
               C29289 -
           ((C13118 + C13119) * C12620 + (C13117 + C13116) * C12619) * C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                      C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                         C29220 * C12621 +
                     (C13206 + C13207) * C29220 * C12622) *
                        C3152 -
                    ((C15636 + C15637) * C29220 * C12622 +
                     (C12625 * C1225 + C13890 + C13890 + C12620 * C1233 +
                      C12623 * C1226 + C13891 + C13891 + C12619 * C1234) *
                         C29220 * C12621) *
                        C29289) *
                       C636 +
                   (((C15637 + C15636) * C29220 * C12621 +
                     (C12623 * C5423 + C15630 + C15630 + C12619 * C5427 +
                      C12625 * C5424 + C15631 + C15631 + C12620 * C5428) *
                         C29220 * C12622) *
                        C29289 -
                    ((C15132 + C15133) * C29220 * C12622 +
                     (C13207 + C13206) * C29220 * C12621) *
                        C3152) *
                       C29287) *
                  C29145) /
                 (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C12624 +
            (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                C12619 +
            (C12708 + C12709) * C12626 + (C12710 + C12711) * C12620) *
               C29220 * C3152 -
           ((C13970 + C13971) * C12620 + (C13972 + C13973) * C12626 +
            (C12690 * C2657 + C12622 * C2719 + C12689 * C1230 +
             C12621 * C1298) *
                C12619 +
            (C12690 * C2654 + C12622 * C2716 + C12689 * C1226 +
             C12621 * C1294) *
                C12624) *
               C29220 * C29289) *
              C636 +
          (((C12689 * C2654 + C12621 * C2716 + C12690 * C5423 +
             C12622 * C5485) *
                C12624 +
            (C12689 * C2657 + C12621 * C2719 + C12690 * C5425 +
             C12622 * C5487) *
                C12619 +
            (C12689 * C2655 + C12621 * C2717 + C12690 * C5424 +
             C12622 * C5486) *
                C12626 +
            (C12689 * C2658 + C12621 * C2720 + C12690 * C5426 +
             C12622 * C5488) *
                C12620) *
               C29220 * C29289 -
           ((C13284 + C13285) * C12620 + (C13286 + C13287) * C12626 +
            (C12690 * C2255 + C12622 * C2305 + C12689 * C646 + C12621 * C714) *
                C12619 +
            (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                C12624) *
               C29220 * C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eexz[7] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C222 * C93 + C29220 * C223) * C12624 +
                      (C222 * C98 + C29220 * C228) * C12619 + C246 * C12626 +
                      C247 * C12620) *
                         C12621 +
                     (C13354 + C13355 + C13356 + C13357) * C12622) *
                        C3152 -
                    ((C15770 + C15771 + C15772 + C15773) * C12622 +
                     (C1381 * C12620 + C1382 * C12626 +
                      (C222 * C1230 + C29220 * C1368) * C12619 +
                      (C222 * C1226 + C29220 * C1364) * C12624) *
                         C12621) *
                        C29289) *
                       C636 +
                   (((C15773 + C15772 + C15771 + C15770) * C12621 +
                     (C6888 * C12624 + C6887 * C12619 +
                      (C222 * C5424 + C29220 * C5540) * C12626 +
                      (C222 * C5426 + C29220 * C5542) * C12620) *
                         C12622) *
                        C29289 -
                    ((C15234 + C15235 + C15236 + C15237) * C12622 +
                     (C13357 + C13356 + C13355 + C13354) * C12621) *
                        C3152) *
                       C29287) *
                  C29145) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                C12689 +
            (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                C12621 +
            (C13444 + C13445) * C12690 + (C13446 + C13447) * C12622) *
               C29220 * C3152 -
           ((C15848 + C15849) * C12622 + (C15850 + C15851) * C12690 +
            (C12626 * C1293 + C12620 * C1433 + C12624 * C1294 +
             C12619 * C1434) *
                C12621 +
            (C12626 * C1225 + C12620 * C1229 + C12624 * C1226 +
             C12619 * C1230) *
                C12689) *
               C29220 * C29289) *
              C636 +
          (((C15851 + C15850) * C12689 + (C15849 + C15848) * C12621 +
            (C12624 * C5423 + C12619 * C5425 + C12626 * C5424 +
             C12620 * C5426) *
                C12690 +
            (C12624 * C5485 + C12619 * C5593 + C12626 * C5486 +
             C12620 * C5594) *
                C12622) *
               C29220 * C29289 -
           ((C15296 + C15297) * C12622 + (C15298 + C15299) * C12690 +
            (C13447 + C13446) * C12621 + (C13445 + C13444) * C12689) *
               C29220 * C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyy[7] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                      C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                         C12619 +
                     (C12892 + C12893) * C12620) *
                        C29220 * C3152 -
                    ((C14192 + C14193) * C12620 +
                     (C12866 * C2654 + C14184 + C14184 + C12622 * C2881 +
                      C12865 * C1226 + C14185 + C14185 + C12621 * C1488) *
                         C12619) *
                        C29220 * C29289) *
                       C636 +
                   (((C12865 * C2654 + C15918 + C15918 + C12621 * C2881 +
                      C12866 * C5423 + C15919 + C15919 + C12622 * C5645) *
                         C12619 +
                     (C12865 * C2655 + C15920 + C15920 + C12621 * C2882 +
                      C12866 * C5424 + C15921 + C15921 + C12622 * C5646) *
                         C12620) *
                        C29220 * C29289 -
                    ((C13532 + C13533) * C12620 +
                     (C12866 * C2252 + C13524 + C13524 + C12622 * C2431 +
                      C12865 * C642 + C13525 + C13525 + C12621 * C904) *
                         C12619) *
                        C29220 * C3152) *
                       C29287) *
                  C29145) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[7] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C222 * C93 + C29220 * C223) * C12689 +
                      (C222 * C156 + C29220 * C396) * C12621 + C4974 * C12690 +
                      C5178 * C12622) *
                         C12619 +
                     (C12946 + C12947 + C12948 + C12949) * C12620) *
                        C3152 -
                    ((C14266 + C14262 + C14263 + C14264) * C12620 +
                     (C7068 * C12622 + C6890 * C12690 +
                      (C222 * C1294 + C29220 * C1556) * C12621 +
                      (C222 * C1226 + C29220 * C1364) * C12689) *
                         C12619) *
                        C29289) *
                       C636 +
                   (((C6890 * C12689 + C7068 * C12621 + C6888 * C12690 +
                      C7067 * C12622) *
                         C12619 +
                     (C14045 * C12689 + C14265 * C12621 +
                      (C222 * C5424 + C29220 * C5540) * C12690 +
                      (C222 * C5486 + C29220 * C5704) * C12622) *
                         C12620) *
                        C29289 -
                    ((C13600 + C13601 + C13602 + C13603) * C12620 +
                     (C5179 * C12622 + C4976 * C12690 + C5178 * C12621 +
                      C4974 * C12689) *
                         C12619) *
                        C3152) *
                       C29287) *
                  C29145) /
                 (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                 C222 +
             (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                 C29220) *
                C12621 +
            ((C13444 + C13445) * C222 + (C13678 + C13679) * C29220) * C12622) *
               C3152 -
           (((C16058 + C16059) * C29220 + (C15850 + C15851) * C222) * C12622 +
            ((C12626 * C1363 + C12620 * C1619 + C12624 * C1364 +
              C12619 * C1620) *
                 C29220 +
             (C12626 * C1225 + C12620 * C1229 + C12624 * C1226 +
              C12619 * C1230) *
                 C222) *
                C12621) *
               C29289) *
              C636 +
          ((((C15851 + C15850) * C222 + (C16059 + C16058) * C29220) * C12621 +
            ((C12624 * C5423 + C12619 * C5425 + C12626 * C5424 +
              C12620 * C5426) *
                 C222 +
             (C12624 * C5539 + C12619 * C5755 + C12626 * C5540 +
              C12620 * C5756) *
                 C29220) *
                C12622) *
               C29289 -
           (((C15458 + C15459) * C29220 + (C15298 + C15299) * C222) * C12622 +
            ((C13679 + C13678) * C29220 + (C13445 + C13444) * C222) * C12621) *
               C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                 C222 +
             (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                 C29220) *
                C12619 +
            ((C12708 + C12709) * C222 + (C13062 + C13063) * C29220) * C12620) *
               C3152 -
           (((C14403 + C14404) * C29220 + (C13972 + C13973) * C222) * C12620 +
            ((C12690 * C2772 + C12622 * C3043 + C12689 * C1364 +
              C12621 * C1674) *
                 C29220 +
             (C12690 * C2654 + C12622 * C2716 + C12689 * C1226 +
              C12621 * C1294) *
                 C222) *
                C12619) *
               C29289) *
              C636 +
          ((((C12689 * C2654 + C12621 * C2716 + C12690 * C5423 +
              C12622 * C5485) *
                 C222 +
             (C12689 * C2772 + C12621 * C3043 + C12690 * C5539 +
              C12622 * C5807) *
                 C29220) *
                C12619 +
            ((C12689 * C2655 + C12621 * C2717 + C12690 * C5424 +
              C12622 * C5486) *
                 C222 +
             (C12689 * C2773 + C12621 * C3044 + C12690 * C5540 +
              C12622 * C5808) *
                 C29220) *
                C12620) *
               C29289 -
           (((C13752 + C13753) * C29220 + (C13286 + C13287) * C222) * C12620 +
            ((C12690 * C2346 + C12622 * C2557 + C12689 * C780 +
              C12621 * C1090) *
                 C29220 +
             (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                 C222) *
                C12619) *
               C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C557 * C93 + C564 + C564 + C29220 * C558) * C12621 +
             C5371 * C12622) *
                C12619 +
            (C13116 + C13117) * C12620) *
               C3152 -
           ((C14477 + C14473) * C12620 +
            (C7242 * C12622 +
             (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C12621) *
                C12619) *
               C29289) *
              C636 +
          (((C7242 * C12621 + C7241 * C12622) * C12619 +
            (C14476 * C12621 +
             (C557 * C5424 + C5863 + C5863 + C29220 * C5860) * C12622) *
                C12620) *
               C29289 -
           ((C13820 + C13821) * C12620 +
            (C5372 * C12622 + C5371 * C12621) * C12619) *
               C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eexx[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                     C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                        C29220 * C12621 +
                    (C13206 + C13207) * C29220 * C12622) *
                       C4042 -
                   ((C15636 + C15637) * C29220 * C12622 +
                    (C12625 * C1225 + C13890 + C13890 + C12620 * C1233 +
                     C12623 * C1226 + C13891 + C13891 + C12619 * C1234) *
                        C29220 * C12621) *
                       C4043 +
                   ((C12623 * C4045 + C17430 + C17430 + C12619 * C4051 +
                     C12625 * C4046 + C17431 + C17431 + C12620 * C4052) *
                        C29220 * C12621 +
                    (C12623 * C8180 + C17432 + C17432 + C12619 * C8184 +
                     C12625 * C8931 + C17433 + C17433 + C12620 * C8933) *
                        C29220 * C12622) *
                       C4044) *
                  C29179 * C29145) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
               C12624 +
           (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
               C12619 +
           (C12708 + C12709) * C12626 + (C12710 + C12711) * C12620) *
              C29220 * C4042 -
          ((C13970 + C13971) * C12620 + (C13972 + C13973) * C12626 +
           (C12690 * C2657 + C12622 * C2719 + C12689 * C1230 + C12621 * C1298) *
               C12619 +
           (C12690 * C2654 + C12622 * C2716 + C12689 * C1226 + C12621 * C1294) *
               C12624) *
              C29220 * C4043 +
          ((C12689 * C4045 + C12621 * C4095 + C12690 * C8180 + C12622 * C8227) *
               C12624 +
           (C12689 * C4048 + C12621 * C4098 + C12690 * C8182 + C12622 * C8229) *
               C12619 +
           (C12689 * C4046 + C12621 * C4096 + C12690 * C8931 + C12622 * C8985) *
               C12626 +
           (C12689 * C4049 + C12621 * C4099 + C12690 * C8932 + C12622 * C8986) *
               C12620) *
              C29220 * C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C222 * C93 + C29220 * C223) * C12624 +
                     (C222 * C98 + C29220 * C228) * C12619 + C246 * C12626 +
                     C247 * C12620) *
                        C12621 +
                    (C13354 + C13355 + C13356 + C13357) * C12622) *
                       C4042 -
                   ((C15770 + C15771 + C15772 + C15773) * C12622 +
                    (C1381 * C12620 + C1382 * C12626 +
                     (C222 * C1230 + C29220 * C1368) * C12619 +
                     (C222 * C1226 + C29220 * C1364) * C12624) *
                        C12621) *
                       C4043 +
                   (((C222 * C4045 + C29220 * C4139) * C12624 +
                     (C222 * C4048 + C29220 * C4142) * C12619 +
                     (C222 * C4046 + C29220 * C4140) * C12626 +
                     (C222 * C4049 + C29220 * C4143) * C12620) *
                        C12621 +
                    ((C222 * C8180 + C29220 * C8269) * C12624 +
                     (C222 * C8182 + C29220 * C8271) * C12619 +
                     (C222 * C8931 + C29220 * C9037) * C12626 +
                     (C222 * C8932 + C29220 * C9038) * C12620) *
                        C12622) *
                       C4044) *
                  C29179 * C29145) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
               C12689 +
           (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
               C12621 +
           (C13444 + C13445) * C12690 + (C13446 + C13447) * C12622) *
              C29220 * C4042 -
          ((C15848 + C15849) * C12622 + (C15850 + C15851) * C12690 +
           (C12626 * C1293 + C12620 * C1433 + C12624 * C1294 + C12619 * C1434) *
               C12621 +
           (C12626 * C1225 + C12620 * C1229 + C12624 * C1226 + C12619 * C1230) *
               C12689) *
              C29220 * C4043 +
          ((C12624 * C4045 + C12619 * C4048 + C12626 * C4046 + C12620 * C4049) *
               C12689 +
           (C12624 * C4095 + C12619 * C4183 + C12626 * C4096 + C12620 * C4184) *
               C12621 +
           (C12624 * C8180 + C12619 * C8182 + C12626 * C8931 + C12620 * C8932) *
               C12690 +
           (C12624 * C8227 + C12619 * C8311 + C12626 * C8985 + C12620 * C9089) *
               C12622) *
              C29220 * C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                     C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                        C12619 +
                    (C12892 + C12893) * C12620) *
                       C29220 * C4042 -
                   ((C14192 + C14193) * C12620 +
                    (C12866 * C2654 + C14184 + C14184 + C12622 * C2881 +
                     C12865 * C1226 + C14185 + C14185 + C12621 * C1488) *
                        C12619) *
                       C29220 * C4043 +
                   ((C12865 * C4045 + C17634 + C17634 + C12621 * C4224 +
                     C12866 * C8180 + C17635 + C17635 + C12622 * C8351) *
                        C12619 +
                    (C12865 * C4046 + C17636 + C17636 + C12621 * C4225 +
                     C12866 * C8931 + C17637 + C17637 + C12622 * C9140) *
                        C12620) *
                       C29220 * C4044) *
                  C29179 * C29145) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C222 * C93 + C29220 * C223) * C12689 +
                     (C222 * C156 + C29220 * C396) * C12621 + C4974 * C12690 +
                     C5178 * C12622) *
                        C12619 +
                    (C12946 + C12947 + C12948 + C12949) * C12620) *
                       C4042 -
                   ((C14266 + C14262 + C14263 + C14264) * C12620 +
                    (C7068 * C12622 + C6890 * C12690 +
                     (C222 * C1294 + C29220 * C1556) * C12621 +
                     (C222 * C1226 + C29220 * C1364) * C12689) *
                        C12619) *
                       C4043 +
                   (((C222 * C4045 + C29220 * C4139) * C12689 +
                     (C222 * C4095 + C29220 * C4268) * C12621 +
                     (C222 * C8180 + C29220 * C8269) * C12690 +
                     (C222 * C8227 + C29220 * C8394) * C12622) *
                        C12619 +
                    ((C222 * C4046 + C29220 * C4140) * C12689 +
                     (C222 * C4096 + C29220 * C4269) * C12621 +
                     (C222 * C8931 + C29220 * C9037) * C12690 +
                     (C222 * C8985 + C29220 * C9193) * C12622) *
                        C12620) *
                       C4044) *
                  C29179 * C29145) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) * C222 +
            (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                C29220) *
               C12621 +
           ((C13444 + C13445) * C222 + (C13678 + C13679) * C29220) * C12622) *
              C4042 -
          (((C16058 + C16059) * C29220 + (C15850 + C15851) * C222) * C12622 +
           ((C12626 * C1363 + C12620 * C1619 + C12624 * C1364 +
             C12619 * C1620) *
                C29220 +
            (C12626 * C1225 + C12620 * C1229 + C12624 * C1226 +
             C12619 * C1230) *
                C222) *
               C12621) *
              C4043 +
          (((C12624 * C4045 + C12619 * C4048 + C12626 * C4046 +
             C12620 * C4049) *
                C222 +
            (C12624 * C4139 + C12619 * C4309 + C12626 * C4140 +
             C12620 * C4310) *
                C29220) *
               C12621 +
           ((C12624 * C8180 + C12619 * C8182 + C12626 * C8931 +
             C12620 * C8932) *
                C222 +
            (C12624 * C8269 + C12619 * C8434 + C12626 * C9037 +
             C12620 * C9244) *
                C29220) *
               C12622) *
              C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C222 +
            (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                C29220) *
               C12619 +
           ((C12708 + C12709) * C222 + (C13062 + C13063) * C29220) * C12620) *
              C4042 -
          (((C14403 + C14404) * C29220 + (C13972 + C13973) * C222) * C12620 +
           ((C12690 * C2772 + C12622 * C3043 + C12689 * C1364 +
             C12621 * C1674) *
                C29220 +
            (C12690 * C2654 + C12622 * C2716 + C12689 * C1226 +
             C12621 * C1294) *
                C222) *
               C12619) *
              C4043 +
          (((C12689 * C4045 + C12621 * C4095 + C12690 * C8180 +
             C12622 * C8227) *
                C222 +
            (C12689 * C4139 + C12621 * C4350 + C12690 * C8269 +
             C12622 * C8474) *
                C29220) *
               C12619 +
           ((C12689 * C4046 + C12621 * C4096 + C12690 * C8931 +
             C12622 * C8985) *
                C222 +
            (C12689 * C4140 + C12621 * C4351 + C12690 * C9037 +
             C12622 * C9295) *
                C29220) *
               C12620) *
              C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C12621 +
            C5371 * C12622) *
               C12619 +
           (C13116 + C13117) * C12620) *
              C4042 -
          ((C14477 + C14473) * C12620 +
           (C7242 * C12622 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C12621) *
               C12619) *
              C4043 +
          (((C557 * C4045 + C4395 + C4395 + C29220 * C4391) * C12621 +
            (C557 * C8180 + C8517 + C8517 + C29220 * C8514) * C12622) *
               C12619 +
           ((C557 * C4046 + C4396 + C4396 + C29220 * C4392) * C12621 +
            (C557 * C8931 + C17838 + C17838 + C29220 * C9346) * C12622) *
               C12620) *
              C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C17888 +
            C9428 * C17889) *
               C12621 +
           (C4844 * C17888 + C6772 * C17889) * C12622) *
              C29196 * C29179 * C84 -
          (((C4439 * C2655 + C5434 + C5434 + C29123 * C2661) * C17889 +
            C4846 * C17888) *
               C12622 +
           (C9430 * C17889 +
            (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C17888) *
               C12621) *
              C29196 * C29179 * C85 +
          (((C4439 * C95 + C4448 + C4448 + C29123 * C105) * C17888 +
            (C4439 * C1224 + C8561 + C8561 + C29123 * C1232) * C17889) *
               C12621 +
           ((C4439 * C640 + C4449 + C4449 + C29123 * C648) * C17888 +
            (C4439 * C2656 + C23098 + C23098 + C29123 * C2662) * C17889) *
               C12622) *
              C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C4440 +
            (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                C29123) *
               C17888 +
           ((C12689 * C1226 + C12621 * C1294 + C12690 * C2654 +
             C12622 * C2716) *
                C4440 +
            (C12689 * C1230 + C12621 * C1298 + C12690 * C2657 +
             C12622 * C2719) *
                C29123) *
               C17889) *
              C29196 * C29179 * C84 -
          (((C13970 + C13971) * C29123 + (C13972 + C13973) * C4440) * C17889 +
           ((C12711 + C12710) * C29123 + (C12709 + C12708) * C4440) * C17888) *
              C29196 * C29179 * C85 +
          (((C12715 + C12714) * C4440 + (C12713 + C12712) * C29123) * C17888 +
           ((C12689 * C1224 + C12621 * C1292 + C12690 * C2656 +
             C12622 * C2718) *
                C4440 +
            (C12689 * C1228 + C12621 * C1296 + C12690 * C2659 +
             C12622 * C2721) *
                C29123) *
               C17889) *
              C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C4440 +
            (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                C29123) *
               C12621 +
           ((C17992 * C642 + C17888 * C780 + C17993 * C2654 + C17889 * C2772) *
                C4440 +
            (C17992 * C646 + C17888 * C784 + C17993 * C2657 + C17889 * C2775) *
                C29123) *
               C12622) *
              C29196 * C29179 * C84 -
          (((C18581 + C18582) * C29123 + (C18583 + C18584) * C4440) * C12622 +
           ((C18014 + C18013) * C29123 + (C18012 + C18011) * C4440) * C12621) *
              C29196 * C29179 * C85 +
          (((C18018 + C18017) * C4440 + (C18016 + C18015) * C29123) * C12621 +
           ((C17992 * C640 + C17888 * C778 + C17993 * C2656 + C17889 * C2774) *
                C4440 +
            (C17992 * C644 + C17888 * C782 + C17993 * C2659 + C17889 * C2777) *
                C29123) *
               C12622) *
              C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C12689 +
            (C4440 * C156 + C29123 * C289) * C12621 + C5054 * C12690 +
            C5055 * C12622) *
               C17888 +
           (C9634 * C12689 + C9635 * C12621 + C6957 * C12690 + C6956 * C12622) *
               C17889) *
              C29196 * C29179 * C84 -
          (((C4440 * C2717 + C29123 * C2829) * C12622 +
            (C4440 * C2655 + C29123 * C2658) * C12690 + C9639 * C12621 +
            C9638 * C12689) *
               C17889 +
           (C5059 * C12622 + C5058 * C12690 +
            (C4440 * C157 + C29123 * C290) * C12621 +
            (C4440 * C94 + C29123 * C99) * C12689) *
               C17888) *
              C29196 * C29179 * C85 +
          (((C4440 * C95 + C29123 * C100) * C12689 +
            (C4440 * C158 + C29123 * C291) * C12621 +
            (C4440 * C640 + C29123 * C644) * C12690 +
            (C4440 * C708 + C29123 * C848) * C12622) *
               C17888 +
           ((C4440 * C1224 + C29123 * C1228) * C12689 +
            (C4440 * C1292 + C29123 * C1432) * C12621 +
            (C4440 * C2656 + C29123 * C2659) * C12690 +
            (C4440 * C2718 + C29123 * C2830) * C12622) *
               C17889) *
              C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                     C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                        C29123 * C17888 +
                    (C12865 * C1226 + C14185 + C14185 + C12621 * C1488 +
                     C12866 * C2654 + C14184 + C14184 + C12622 * C2881) *
                        C29123 * C17889) *
                       C29196 * C29179 * C84 -
                   ((C14192 + C14193) * C29123 * C17889 +
                    (C12893 + C12892) * C29123 * C17888) *
                       C29196 * C29179 * C85 +
                   ((C12895 + C12894) * C29123 * C17888 +
                    (C12865 * C1224 + C14186 + C14186 + C12621 * C1486 +
                     C12866 * C2656 + C14187 + C14187 + C12622 * C2883) *
                        C29123 * C17889) *
                       C29196 * C29179 * C86)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
               C12689 +
           (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
               C12621 +
           (C17992 * C642 + C17888 * C780 + C17993 * C2654 + C17889 * C2772) *
               C12690 +
           (C17992 * C710 + C17888 * C972 + C17993 * C2716 + C17889 * C2937) *
               C12622) *
              C29123 * C29196 * C29179 * C84 -
          ((C18792 + C18793) * C12622 + (C18583 + C18584) * C12690 +
           (C18178 + C18177) * C12621 + (C18012 + C18011) * C12689) *
              C29123 * C29196 * C29179 * C85 +
          ((C18018 + C18017) * C12689 + (C18180 + C18179) * C12621 +
           (C17992 * C640 + C17888 * C778 + C17993 * C2656 + C17889 * C2774) *
               C12690 +
           (C17992 * C708 + C17888 * C970 + C17993 * C2718 + C17889 * C2939) *
               C12622) *
              C29123 * C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C17992 +
            (C4440 * C223 + C29123 * C455) * C17888 + C9634 * C17993 +
            C9835 * C17889) *
               C12621 +
           (C5054 * C17992 + C5245 * C17888 + C6957 * C17993 + C7127 * C17889) *
               C12622) *
              C29196 * C29179 * C84 -
          (((C4440 * C2773 + C29123 * C2991) * C17889 +
            (C4440 * C2655 + C29123 * C2658) * C17993 + C5247 * C17888 +
            C5058 * C17992) *
               C12622 +
           (C9837 * C17889 + C9638 * C17993 +
            (C4440 * C224 + C29123 * C456) * C17888 +
            (C4440 * C94 + C29123 * C99) * C17992) *
               C12621) *
              C29196 * C29179 * C85 +
          (((C4440 * C95 + C29123 * C100) * C17992 +
            (C4440 * C225 + C29123 * C457) * C17888 +
            (C4440 * C1224 + C29123 * C1228) * C17993 +
            (C4440 * C1362 + C29123 * C1618) * C17889) *
               C12621 +
           ((C4440 * C640 + C29123 * C644) * C17992 +
            (C4440 * C778 + C29123 * C1034) * C17888 +
            (C4440 * C2656 + C29123 * C2659) * C17993 +
            (C4440 * C2774 + C29123 * C2992) * C17889) *
               C12622) *
              C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
               C17992 +
           (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
               C17888 +
           (C12689 * C1226 + C12621 * C1294 + C12690 * C2654 + C12622 * C2716) *
               C17993 +
           (C12689 * C1364 + C12621 * C1674 + C12690 * C2772 + C12622 * C3043) *
               C17889) *
              C29123 * C29196 * C29179 * C84 -
          ((C14403 + C14404) * C17889 + (C13972 + C13973) * C17993 +
           (C13063 + C13062) * C17888 + (C12709 + C12708) * C17992) *
              C29123 * C29196 * C29179 * C85 +
          ((C12715 + C12714) * C17992 + (C13065 + C13064) * C17888 +
           (C12689 * C1224 + C12621 * C1292 + C12690 * C2656 + C12622 * C2718) *
               C17993 +
           (C12689 * C1362 + C12621 * C1672 + C12690 * C2774 + C12622 * C3045) *
               C17889) *
              C29123 * C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eezz[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                     C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                        C12621 +
                    (C18338 * C642 + C19006 + C19006 + C17888 * C1154 +
                     C18339 * C2654 + C19005 + C19005 + C17889 * C3096) *
                        C12622) *
                       C29123 * C29196 * C29179 * C84 -
                   ((C19013 + C19014) * C12622 + (C18366 + C18365) * C12621) *
                       C29123 * C29196 * C29179 * C85 +
                   ((C18368 + C18367) * C12621 +
                    (C18338 * C640 + C19007 + C19007 + C17888 * C1152 +
                     C18339 * C2656 + C19008 + C19008 + C17889 * C3098) *
                        C12622) *
                       C29123 * C29196 * C29179 * C86)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C17888 +
             C9428 * C17889) *
                C12621 +
            (C23565 + C23566) * C12622) *
               C29196 * C636 -
           ((C6771 * C17889 + C4845 * C17888) * C12622 +
            (C23566 + C23565) * C12621) *
               C29196 * C29287) *
              C638 +
          (((C23567 + C23573) * C12621 +
            (C4847 * C17888 +
             (C4439 * C5424 + C5435 + C5435 + C29123 * C5428) * C17889) *
                C12622) *
               C29196 * C29287 -
           ((C23573 + C23567) * C12622 +
            (C9430 * C17889 +
             (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C17888) *
                C12621) *
               C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                 C4440 +
             (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                 C29123) *
                C17888 +
            ((C12689 * C1226 + C12621 * C1294 + C12690 * C2654 +
              C12622 * C2716) *
                 C4440 +
             (C12689 * C1230 + C12621 * C1298 + C12690 * C2657 +
              C12622 * C2719) *
                 C29123) *
                C17889) *
               C29196 * C636 -
           (((C12690 * C5425 + C12622 * C5487 + C12689 * C2657 +
              C12621 * C2719) *
                 C29123 +
             (C12690 * C5423 + C12622 * C5485 + C12689 * C2654 +
              C12621 * C2716) *
                 C4440) *
                C17889 +
            ((C12690 * C2255 + C12622 * C2305 + C12689 * C646 + C12621 * C714) *
                 C29123 +
             (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                 C4440) *
                C17888) *
               C29196 * C29287) *
              C638 +
          ((((C13287 + C13286) * C4440 + (C13285 + C13284) * C29123) * C17888 +
            ((C12689 * C2655 + C12621 * C2717 + C12690 * C5424 +
              C12622 * C5486) *
                 C4440 +
             (C12689 * C2658 + C12621 * C2720 + C12690 * C5426 +
              C12622 * C5488) *
                 C29123) *
                C17889) *
               C29196 * C29287 -
           (((C13970 + C13971) * C29123 + (C13972 + C13973) * C4440) * C17889 +
            ((C12711 + C12710) * C29123 + (C12709 + C12708) * C4440) * C17888) *
               C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                 C4440 +
             (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                 C29123) *
                C12621 +
            ((C23714 + C23715) * C4440 + (C23716 + C23717) * C29123) * C12622) *
               C29196 * C636 -
           (((C17993 * C5425 + C17889 * C5541 + C17992 * C2255 +
              C17888 * C2349) *
                 C29123 +
             (C17993 * C5423 + C17889 * C5539 + C17992 * C2252 +
              C17888 * C2346) *
                 C4440) *
                C12622 +
            ((C23717 + C23716) * C29123 + (C23715 + C23714) * C4440) * C12621) *
               C29196 * C29287) *
              C638 +
          ((((C18584 + C18583) * C4440 + (C18582 + C18581) * C29123) * C12621 +
            ((C17992 * C2253 + C17888 * C2347 + C17993 * C5424 +
              C17889 * C5540) *
                 C4440 +
             (C17992 * C2256 + C17888 * C2350 + C17993 * C5426 +
              C17889 * C5542) *
                 C29123) *
                C12622) *
               C29196 * C29287 -
           (((C18581 + C18582) * C29123 + (C18583 + C18584) * C4440) * C12622 +
            ((C18014 + C18013) * C29123 + (C18012 + C18011) * C4440) * C12621) *
               C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C12689 +
                       (C4440 * C156 + C29123 * C289) * C12621 +
                       C5054 * C12690 + C5055 * C12622) *
                          C17888 +
                      (C9634 * C12689 + C9635 * C12621 + C6957 * C12690 +
                       C6956 * C12622) *
                          C17889) *
                         C29196 * C636 -
                     ((C6954 * C12622 + C6955 * C12690 + C6956 * C12621 +
                       C6957 * C12689) *
                          C17889 +
                      (C5057 * C12622 + C5056 * C12690 + C5055 * C12621 +
                       C5054 * C12689) *
                          C17888) *
                         C29196 * C29287) *
                        C638 +
                    (((C5058 * C12689 + C5059 * C12621 + C5060 * C12690 +
                       C5061 * C12622) *
                          C17888 +
                      (C23788 * C12689 + C23789 * C12621 +
                       (C4440 * C5424 + C29123 * C5426) * C12690 +
                       (C4440 * C5486 + C29123 * C5594) * C12622) *
                          C17889) *
                         C29196 * C29287 -
                     ((C23789 * C12622 + C23788 * C12690 + C9639 * C12621 +
                       C9638 * C12689) *
                          C17889 +
                      (C5059 * C12622 + C5058 * C12690 +
                       (C4440 * C157 + C29123 * C290) * C12621 +
                       (C4440 * C94 + C29123 * C99) * C12689) *
                          C17888) *
                         C29196 * C636) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                       C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                          C29123 * C17888 +
                      (C12865 * C1226 + C14185 + C14185 + C12621 * C1488 +
                       C12866 * C2654 + C14184 + C14184 + C12622 * C2881) *
                          C29123 * C17889) *
                         C29196 * C636 -
                     ((C12866 * C5423 + C15919 + C15919 + C12622 * C5645 +
                       C12865 * C2654 + C15918 + C15918 + C12621 * C2881) *
                          C29123 * C17889 +
                      (C12866 * C2252 + C13524 + C13524 + C12622 * C2431 +
                       C12865 * C642 + C13525 + C13525 + C12621 * C904) *
                          C29123 * C17888) *
                         C29196 * C29287) *
                        C638 +
                    (((C13533 + C13532) * C29123 * C17888 +
                      (C12865 * C2655 + C15920 + C15920 + C12621 * C2882 +
                       C12866 * C5424 + C15921 + C15921 + C12622 * C5646) *
                          C29123 * C17889) *
                         C29196 * C29287 -
                     ((C14192 + C14193) * C29123 * C17889 +
                      (C12893 + C12892) * C29123 * C17888) *
                         C29196 * C636) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C12689 +
            (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                C12621 +
            (C23714 + C23715) * C12690 + (C23926 + C23927) * C12622) *
               C29123 * C29196 * C636 -
           ((C17993 * C5485 + C17889 * C5703 + C17992 * C2302 +
             C17888 * C2475) *
                C12622 +
            (C17993 * C5423 + C17889 * C5539 + C17992 * C2252 +
             C17888 * C2346) *
                C12690 +
            (C23927 + C23926) * C12621 + (C23715 + C23714) * C12689) *
               C29123 * C29196 * C29287) *
              C638 +
          (((C18584 + C18583) * C12689 + (C18793 + C18792) * C12621 +
            (C17992 * C2253 + C17888 * C2347 + C17993 * C5424 +
             C17889 * C5540) *
                C12690 +
            (C17992 * C2303 + C17888 * C2476 + C17993 * C5486 +
             C17889 * C5704) *
                C12622) *
               C29123 * C29196 * C29287 -
           ((C18792 + C18793) * C12622 + (C18583 + C18584) * C12690 +
            (C18178 + C18177) * C12621 + (C18012 + C18011) * C12689) *
               C29123 * C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C17992 +
                       (C4440 * C223 + C29123 * C455) * C17888 +
                       C9634 * C17993 + C9835 * C17889) *
                          C12621 +
                      (C23994 + C23995 + C23996 + C23997) * C12622) *
                         C29196 * C636 -
                     ((C7126 * C17889 + C6955 * C17993 + C5246 * C17888 +
                       C5056 * C17992) *
                          C12622 +
                      (C23997 + C23996 + C23995 + C23994) * C12621) *
                         C29196 * C29287) *
                        C638 +
                    (((C23998 + C23999 + C24000 + C24004) * C12621 +
                      (C5060 * C17992 + C5248 * C17888 +
                       (C4440 * C5424 + C29123 * C5426) * C17993 +
                       (C4440 * C5540 + C29123 * C5756) * C17889) *
                          C12622) *
                         C29196 * C29287 -
                     ((C24004 + C24000 + C23999 + C23998) * C12622 +
                      (C9837 * C17889 + C9638 * C17993 +
                       (C4440 * C224 + C29123 * C456) * C17888 +
                       (C4440 * C94 + C29123 * C99) * C17992) *
                          C12621) *
                         C29196 * C636) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C17992 +
            (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                C17888 +
            (C12689 * C1226 + C12621 * C1294 + C12690 * C2654 +
             C12622 * C2716) *
                C17993 +
            (C12689 * C1364 + C12621 * C1674 + C12690 * C2772 +
             C12622 * C3043) *
                C17889) *
               C29123 * C29196 * C636 -
           ((C12690 * C5539 + C12622 * C5807 + C12689 * C2772 +
             C12621 * C3043) *
                C17889 +
            (C12690 * C5423 + C12622 * C5485 + C12689 * C2654 +
             C12621 * C2716) *
                C17993 +
            (C12690 * C2346 + C12622 * C2557 + C12689 * C780 + C12621 * C1090) *
                C17888 +
            (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                C17992) *
               C29123 * C29196 * C29287) *
              C638 +
          (((C13287 + C13286) * C17992 + (C13753 + C13752) * C17888 +
            (C12689 * C2655 + C12621 * C2717 + C12690 * C5424 +
             C12622 * C5486) *
                C17993 +
            (C12689 * C2773 + C12621 * C3044 + C12690 * C5540 +
             C12622 * C5808) *
                C17889) *
               C29123 * C29196 * C29287 -
           ((C14403 + C14404) * C17889 + (C13972 + C13973) * C17993 +
            (C13063 + C13062) * C17888 + (C12709 + C12708) * C17992) *
               C29123 * C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                       C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                          C12621 +
                      (C24145 + C24146) * C12622) *
                         C29123 * C29196 * C636 -
                     ((C18339 * C5423 + C20763 + C20763 + C17889 * C5859 +
                       C18338 * C2252 + C20762 + C20762 + C17888 * C2598) *
                          C12622 +
                      (C24146 + C24145) * C12621) *
                         C29123 * C29196 * C29287) *
                        C638 +
                    (((C19014 + C19013) * C12621 +
                      (C18338 * C2253 + C20764 + C20764 + C17888 * C2599 +
                       C18339 * C5424 + C20765 + C20765 + C17889 * C5860) *
                          C12622) *
                         C29123 * C29196 * C29287 -
                     ((C19013 + C19014) * C12622 + (C18366 + C18365) * C12621) *
                         C29123 * C29196 * C636) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C17888 +
             C9428 * C17889) *
                C12621 +
            (C23565 + C23566) * C12622) *
               C1222 -
           ((C10813 * C17889 + C6772 * C17888) * C12622 +
            (C9429 * C17889 + C9428 * C17888) * C12621) *
               C29289) *
              C29179 * C638 +
          (((C9430 * C17888 + C9431 * C17889) * C12621 +
            (C23572 * C17888 +
             (C4439 * C8931 + C8935 + C8935 + C29123 * C8933) * C17889) *
                C12622) *
               C29289 -
           ((C23573 + C23567) * C12622 +
            (C9430 * C17889 +
             (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C17888) *
                C12621) *
               C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                 C4440 +
             (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                 C29123) *
                C17888 +
            ((C24287 + C24288) * C4440 + (C24289 + C24290) * C29123) * C17889) *
               C1222 -
           (((C12690 * C8182 + C12622 * C8229 + C12689 * C4048 +
              C12621 * C4098) *
                 C29123 +
             (C12690 * C8180 + C12622 * C8227 + C12689 * C4045 +
              C12621 * C4095) *
                 C4440) *
                C17889 +
            ((C24290 + C24289) * C29123 + (C24288 + C24287) * C4440) * C17888) *
               C29289) *
              C29179 * C638 +
          ((((C13973 + C13972) * C4440 + (C13971 + C13970) * C29123) * C17888 +
            ((C12689 * C4046 + C12621 * C4096 + C12690 * C8931 +
              C12622 * C8985) *
                 C4440 +
             (C12689 * C4049 + C12621 * C4099 + C12690 * C8932 +
              C12622 * C8986) *
                 C29123) *
                C17889) *
               C29289 -
           (((C13970 + C13971) * C29123 + (C13972 + C13973) * C4440) * C17889 +
            ((C12711 + C12710) * C29123 + (C12709 + C12708) * C4440) * C17888) *
               C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                 C4440 +
             (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                 C29123) *
                C12621 +
            ((C23714 + C23715) * C4440 + (C23716 + C23717) * C29123) * C12622) *
               C1222 -
           (((C17993 * C8182 + C17889 * C8271 + C17992 * C2657 +
              C17888 * C2775) *
                 C29123 +
             (C17993 * C8180 + C17889 * C8269 + C17992 * C2654 +
              C17888 * C2772) *
                 C4440) *
                C12622 +
            ((C17993 * C4048 + C17889 * C4142 + C17992 * C1230 +
              C17888 * C1368) *
                 C29123 +
             (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
              C17888 * C1364) *
                 C4440) *
                C12621) *
               C29289) *
              C29179 * C638 +
          ((((C19254 + C19253) * C4440 + (C19252 + C19251) * C29123) * C12621 +
            ((C17992 * C2655 + C17888 * C2773 + C17993 * C8931 +
              C17889 * C9037) *
                 C4440 +
             (C17992 * C2658 + C17888 * C2776 + C17993 * C8932 +
              C17889 * C9038) *
                 C29123) *
                C12622) *
               C29289 -
           (((C18581 + C18582) * C29123 + (C18583 + C18584) * C4440) * C12622 +
            ((C18014 + C18013) * C29123 + (C18012 + C18011) * C4440) * C12621) *
               C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C12689 +
                       (C4440 * C156 + C29123 * C289) * C12621 +
                       C5054 * C12690 + C5055 * C12622) *
                          C17888 +
                      (C24423 + C24424 + C24425 + C24426) * C17889) *
                         C1222 -
                     ((C10992 * C12622 + C10991 * C12690 + C9637 * C12621 +
                       C9636 * C12689) *
                          C17889 +
                      (C24426 + C24425 + C24424 + C24423) * C17888) *
                         C29289) *
                        C29179 * C638 +
                    (((C24427 + C24428 + C24429 + C24430) * C17888 +
                      (C9640 * C12689 + C9641 * C12621 +
                       (C4440 * C8931 + C29123 * C8932) * C12690 +
                       (C4440 * C8985 + C29123 * C9089) * C12622) *
                          C17889) *
                         C29289 -
                     ((C24430 + C24429 + C24428 + C24427) * C17889 +
                      (C5059 * C12622 + C5058 * C12690 +
                       (C4440 * C157 + C29123 * C290) * C12621 +
                       (C4440 * C94 + C29123 * C99) * C12689) *
                          C17888) *
                         C1222) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                       C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                          C29123 * C17888 +
                      (C24505 + C24506) * C29123 * C17889) *
                         C1222 -
                     ((C12866 * C8180 + C17635 + C17635 + C12622 * C8351 +
                       C12865 * C4045 + C17634 + C17634 + C12621 * C4224) *
                          C29123 * C17889 +
                      (C24506 + C24505) * C29123 * C17888) *
                         C29289) *
                        C29179 * C638 +
                    (((C14193 + C14192) * C29123 * C17888 +
                      (C12865 * C4046 + C17636 + C17636 + C12621 * C4225 +
                       C12866 * C8931 + C17637 + C17637 + C12622 * C9140) *
                          C29123 * C17889) *
                         C29289 -
                     ((C14192 + C14193) * C29123 * C17889 +
                      (C12893 + C12892) * C29123 * C17888) *
                         C1222) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C12689 +
            (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                C12621 +
            (C23714 + C23715) * C12690 + (C23926 + C23927) * C12622) *
               C29123 * C1222 -
           ((C17993 * C8227 + C17889 * C8394 + C17992 * C2716 +
             C17888 * C2937) *
                C12622 +
            (C17993 * C8180 + C17889 * C8269 + C17992 * C2654 +
             C17888 * C2772) *
                C12690 +
            (C17993 * C4095 + C17889 * C4268 + C17992 * C1294 +
             C17888 * C1556) *
                C12621 +
            (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
             C17888 * C1364) *
                C12689) *
               C29123 * C29289) *
              C29179 * C638 +
          (((C19254 + C19253) * C12689 + (C19486 + C19485) * C12621 +
            (C17992 * C2655 + C17888 * C2773 + C17993 * C8931 +
             C17889 * C9037) *
                C12690 +
            (C17992 * C2717 + C17888 * C2938 + C17993 * C8985 +
             C17889 * C9193) *
                C12622) *
               C29123 * C29289 -
           ((C18792 + C18793) * C12622 + (C18583 + C18584) * C12690 +
            (C18178 + C18177) * C12621 + (C18012 + C18011) * C12689) *
               C29123 * C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C17992 +
                       (C4440 * C223 + C29123 * C455) * C17888 +
                       C9634 * C17993 + C9835 * C17889) *
                          C12621 +
                      (C23994 + C23995 + C23996 + C23997) * C12622) *
                         C1222 -
                     ((C11163 * C17889 + C10991 * C17993 + C7127 * C17888 +
                       C6957 * C17992) *
                          C12622 +
                      (C9836 * C17889 + C9636 * C17993 + C9835 * C17888 +
                       C9634 * C17992) *
                          C12621) *
                         C29289) *
                        C29179 * C638 +
                    (((C9638 * C17992 + C9837 * C17888 + C9640 * C17993 +
                       C9838 * C17889) *
                          C12621 +
                      (C23788 * C17992 + C24003 * C17888 +
                       (C4440 * C8931 + C29123 * C8932) * C17993 +
                       (C4440 * C9037 + C29123 * C9244) * C17889) *
                          C12622) *
                         C29289 -
                     ((C24004 + C24000 + C23999 + C23998) * C12622 +
                      (C9837 * C17889 + C9638 * C17993 +
                       (C4440 * C224 + C29123 * C456) * C17888 +
                       (C4440 * C94 + C29123 * C99) * C17992) *
                          C12621) *
                         C1222) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C17992 +
            (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                C17888 +
            (C24287 + C24288) * C17993 + (C24709 + C24710) * C17889) *
               C29123 * C1222 -
           ((C12690 * C8269 + C12622 * C8474 + C12689 * C4139 +
             C12621 * C4350) *
                C17889 +
            (C12690 * C8180 + C12622 * C8227 + C12689 * C4045 +
             C12621 * C4095) *
                C17993 +
            (C24710 + C24709) * C17888 + (C24288 + C24287) * C17992) *
               C29123 * C29289) *
              C29179 * C638 +
          (((C13973 + C13972) * C17992 + (C14404 + C14403) * C17888 +
            (C12689 * C4046 + C12621 * C4096 + C12690 * C8931 +
             C12622 * C8985) *
                C17993 +
            (C12689 * C4140 + C12621 * C4351 + C12690 * C9037 +
             C12622 * C9295) *
                C17889) *
               C29123 * C29289 -
           ((C14403 + C14404) * C17889 + (C13972 + C13973) * C17993 +
            (C13063 + C13062) * C17888 + (C12709 + C12708) * C17992) *
               C29123 * C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                       C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                          C12621 +
                      (C24145 + C24146) * C12622) *
                         C29123 * C1222 -
                     ((C18339 * C8180 + C21367 + C21367 + C17889 * C8514 +
                       C18338 * C2654 + C21366 + C21366 + C17888 * C3096) *
                          C12622 +
                      (C18339 * C4045 + C19707 + C19707 + C17889 * C4391 +
                       C18338 * C1226 + C19708 + C19708 + C17888 * C1738) *
                          C12621) *
                         C29123 * C29289) *
                        C29179 * C638 +
                    (((C19716 + C19715) * C12621 +
                      (C18338 * C2655 + C21368 + C21368 + C17888 * C3097 +
                       C18339 * C8931 + C21369 + C21369 + C17889 * C9346) *
                          C12622) *
                         C29123 * C29289 -
                     ((C19013 + C19014) * C12622 + (C18366 + C18365) * C12621) *
                         C29123 * C1222) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C17888 +
             C9428 * C17889) *
                C12621 +
            (C23565 + C23566) * C12622) *
               C29196 * C1806 -
           ((C6771 * C17889 + C4845 * C17888) * C12622 +
            (C23566 + C23565) * C12621) *
               C29196 * C29287) *
              C1808 +
          (((C23567 + C23573) * C12621 +
            (C4847 * C17888 +
             (C4439 * C5424 + C5435 + C5435 + C29123 * C5428) * C17889) *
                C12622) *
               C29196 * C29287 -
           ((C23573 + C23567) * C12622 +
            (C9430 * C17889 +
             (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C17888) *
                C12621) *
               C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                 C4440 +
             (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                 C29123) *
                C17888 +
            ((C24287 + C24288) * C4440 + (C24289 + C24290) * C29123) * C17889) *
               C29196 * C1806 -
           (((C12690 * C5425 + C12622 * C5487 + C12689 * C2657 +
              C12621 * C2719) *
                 C29123 +
             (C12690 * C5423 + C12622 * C5485 + C12689 * C2654 +
              C12621 * C2716) *
                 C4440) *
                C17889 +
            ((C12690 * C2255 + C12622 * C2305 + C12689 * C646 + C12621 * C714) *
                 C29123 +
             (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                 C4440) *
                C17888) *
               C29196 * C29287) *
              C1808 +
          ((((C13287 + C13286) * C4440 + (C13285 + C13284) * C29123) * C17888 +
            ((C12689 * C2655 + C12621 * C2717 + C12690 * C5424 +
              C12622 * C5486) *
                 C4440 +
             (C12689 * C2658 + C12621 * C2720 + C12690 * C5426 +
              C12622 * C5488) *
                 C29123) *
                C17889) *
               C29196 * C29287 -
           (((C13970 + C13971) * C29123 + (C13972 + C13973) * C4440) * C17889 +
            ((C12711 + C12710) * C29123 + (C12709 + C12708) * C4440) * C17888) *
               C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                 C4440 +
             (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                 C29123) *
                C12621 +
            ((C23714 + C23715) * C4440 + (C23716 + C23717) * C29123) * C12622) *
               C29196 * C1806 -
           (((C17993 * C5425 + C17889 * C5541 + C17992 * C2255 +
              C17888 * C2349) *
                 C29123 +
             (C17993 * C5423 + C17889 * C5539 + C17992 * C2252 +
              C17888 * C2346) *
                 C4440) *
                C12622 +
            ((C23717 + C23716) * C29123 + (C23715 + C23714) * C4440) * C12621) *
               C29196 * C29287) *
              C1808 +
          ((((C18584 + C18583) * C4440 + (C18582 + C18581) * C29123) * C12621 +
            ((C17992 * C2253 + C17888 * C2347 + C17993 * C5424 +
              C17889 * C5540) *
                 C4440 +
             (C17992 * C2256 + C17888 * C2350 + C17993 * C5426 +
              C17889 * C5542) *
                 C29123) *
                C12622) *
               C29196 * C29287 -
           (((C18581 + C18582) * C29123 + (C18583 + C18584) * C4440) * C12622 +
            ((C18014 + C18013) * C29123 + (C18012 + C18011) * C4440) * C12621) *
               C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[12] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C12689 +
                       (C4440 * C156 + C29123 * C289) * C12621 +
                       C5054 * C12690 + C5055 * C12622) *
                          C17888 +
                      (C24423 + C24424 + C24425 + C24426) * C17889) *
                         C29196 * C1806 -
                     ((C6954 * C12622 + C6955 * C12690 + C6956 * C12621 +
                       C6957 * C12689) *
                          C17889 +
                      (C5057 * C12622 + C5056 * C12690 + C5055 * C12621 +
                       C5054 * C12689) *
                          C17888) *
                         C29196 * C29287) *
                        C1808 +
                    (((C5058 * C12689 + C5059 * C12621 + C5060 * C12690 +
                       C5061 * C12622) *
                          C17888 +
                      (C23788 * C12689 + C23789 * C12621 +
                       (C4440 * C5424 + C29123 * C5426) * C12690 +
                       (C4440 * C5486 + C29123 * C5594) * C12622) *
                          C17889) *
                         C29196 * C29287 -
                     ((C24430 + C24429 + C24428 + C24427) * C17889 +
                      (C5059 * C12622 + C5058 * C12690 +
                       (C4440 * C157 + C29123 * C290) * C12621 +
                       (C4440 * C94 + C29123 * C99) * C12689) *
                          C17888) *
                         C29196 * C1806) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[12] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                       C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                          C29123 * C17888 +
                      (C24505 + C24506) * C29123 * C17889) *
                         C29196 * C1806 -
                     ((C12866 * C5423 + C15919 + C15919 + C12622 * C5645 +
                       C12865 * C2654 + C15918 + C15918 + C12621 * C2881) *
                          C29123 * C17889 +
                      (C12866 * C2252 + C13524 + C13524 + C12622 * C2431 +
                       C12865 * C642 + C13525 + C13525 + C12621 * C904) *
                          C29123 * C17888) *
                         C29196 * C29287) *
                        C1808 +
                    (((C13533 + C13532) * C29123 * C17888 +
                      (C12865 * C2655 + C15920 + C15920 + C12621 * C2882 +
                       C12866 * C5424 + C15921 + C15921 + C12622 * C5646) *
                          C29123 * C17889) *
                         C29196 * C29287 -
                     ((C14192 + C14193) * C29123 * C17889 +
                      (C12893 + C12892) * C29123 * C17888) *
                         C29196 * C1806) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C12689 +
            (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                C12621 +
            (C23714 + C23715) * C12690 + (C23926 + C23927) * C12622) *
               C29123 * C29196 * C1806 -
           ((C17993 * C5485 + C17889 * C5703 + C17992 * C2302 +
             C17888 * C2475) *
                C12622 +
            (C17993 * C5423 + C17889 * C5539 + C17992 * C2252 +
             C17888 * C2346) *
                C12690 +
            (C23927 + C23926) * C12621 + (C23715 + C23714) * C12689) *
               C29123 * C29196 * C29287) *
              C1808 +
          (((C18584 + C18583) * C12689 + (C18793 + C18792) * C12621 +
            (C17992 * C2253 + C17888 * C2347 + C17993 * C5424 +
             C17889 * C5540) *
                C12690 +
            (C17992 * C2303 + C17888 * C2476 + C17993 * C5486 +
             C17889 * C5704) *
                C12622) *
               C29123 * C29196 * C29287 -
           ((C18792 + C18793) * C12622 + (C18583 + C18584) * C12690 +
            (C18178 + C18177) * C12621 + (C18012 + C18011) * C12689) *
               C29123 * C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezx[12] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C17992 +
                       (C4440 * C223 + C29123 * C455) * C17888 +
                       C9634 * C17993 + C9835 * C17889) *
                          C12621 +
                      (C23994 + C23995 + C23996 + C23997) * C12622) *
                         C29196 * C1806 -
                     ((C7126 * C17889 + C6955 * C17993 + C5246 * C17888 +
                       C5056 * C17992) *
                          C12622 +
                      (C23997 + C23996 + C23995 + C23994) * C12621) *
                         C29196 * C29287) *
                        C1808 +
                    (((C23998 + C23999 + C24000 + C24004) * C12621 +
                      (C5060 * C17992 + C5248 * C17888 +
                       (C4440 * C5424 + C29123 * C5426) * C17993 +
                       (C4440 * C5540 + C29123 * C5756) * C17889) *
                          C12622) *
                         C29196 * C29287 -
                     ((C24004 + C24000 + C23999 + C23998) * C12622 +
                      (C9837 * C17889 + C9638 * C17993 +
                       (C4440 * C224 + C29123 * C456) * C17888 +
                       (C4440 * C94 + C29123 * C99) * C17992) *
                          C12621) *
                         C29196 * C1806) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C17992 +
            (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                C17888 +
            (C24287 + C24288) * C17993 + (C24709 + C24710) * C17889) *
               C29123 * C29196 * C1806 -
           ((C12690 * C5539 + C12622 * C5807 + C12689 * C2772 +
             C12621 * C3043) *
                C17889 +
            (C12690 * C5423 + C12622 * C5485 + C12689 * C2654 +
             C12621 * C2716) *
                C17993 +
            (C12690 * C2346 + C12622 * C2557 + C12689 * C780 + C12621 * C1090) *
                C17888 +
            (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                C17992) *
               C29123 * C29196 * C29287) *
              C1808 +
          (((C13287 + C13286) * C17992 + (C13753 + C13752) * C17888 +
            (C12689 * C2655 + C12621 * C2717 + C12690 * C5424 +
             C12622 * C5486) *
                C17993 +
            (C12689 * C2773 + C12621 * C3044 + C12690 * C5540 +
             C12622 * C5808) *
                C17889) *
               C29123 * C29196 * C29287 -
           ((C14403 + C14404) * C17889 + (C13972 + C13973) * C17993 +
            (C13063 + C13062) * C17888 + (C12709 + C12708) * C17992) *
               C29123 * C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezz[12] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                       C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                          C12621 +
                      (C24145 + C24146) * C12622) *
                         C29123 * C29196 * C1806 -
                     ((C18339 * C5423 + C20763 + C20763 + C17889 * C5859 +
                       C18338 * C2252 + C20762 + C20762 + C17888 * C2598) *
                          C12622 +
                      (C24146 + C24145) * C12621) *
                         C29123 * C29196 * C29287) *
                        C1808 +
                    (((C19014 + C19013) * C12621 +
                      (C18338 * C2253 + C20764 + C20764 + C17888 * C2599 +
                       C18339 * C5424 + C20765 + C20765 + C17889 * C5860) *
                          C12622) *
                         C29123 * C29196 * C29287 -
                     ((C19013 + C19014) * C12622 + (C18366 + C18365) * C12621) *
                         C29123 * C29196 * C1806) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C17888 +
            C9428 * C17889) *
               C12621 +
           (C23565 + C23566) * C12622) *
              C29196 * C2248 -
          ((C25421 + C25422) * C12622 + (C23566 + C23565) * C12621) * C29196 *
              C2249 +
          ((C25422 + C25421) * C12621 +
           (C6360 * C17888 +
            (C4439 * C6758 + C6766 + C6766 + C29123 * C6760) * C17889) *
               C12622) *
              C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C4440 +
            (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                C29123) *
               C17888 +
           ((C24287 + C24288) * C4440 + (C24289 + C24290) * C29123) * C17889) *
              C29196 * C2248 -
          (((C12690 * C5425 + C12622 * C5487 + C12689 * C2657 +
             C12621 * C2719) *
                C29123 +
            (C12690 * C5423 + C12622 * C5485 + C12689 * C2654 +
             C12621 * C2716) *
                C4440) *
               C17889 +
           ((C12690 * C2255 + C12622 * C2305 + C12689 * C646 + C12621 * C714) *
                C29123 +
            (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                C4440) *
               C17888) *
              C29196 * C2249 +
          (((C12689 * C2252 + C12621 * C2302 + C12690 * C4819 +
             C12622 * C4901) *
                C4440 +
            (C12689 * C2255 + C12621 * C2305 + C12690 * C4821 +
             C12622 * C4903) *
                C29123) *
               C17888 +
           ((C12689 * C5423 + C12621 * C5485 + C12690 * C6758 +
             C12622 * C6824) *
                C4440 +
            (C12689 * C5425 + C12621 * C5487 + C12690 * C6759 +
             C12622 * C6825) *
                C29123) *
               C17889) *
              C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C4440 +
            (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                C29123) *
               C12621 +
           ((C23714 + C23715) * C4440 + (C23716 + C23717) * C29123) * C12622) *
              C29196 * C2248 -
          (((C25531 + C25532) * C29123 + (C25533 + C25534) * C4440) * C12622 +
           ((C23717 + C23716) * C29123 + (C23715 + C23714) * C4440) * C12621) *
              C29196 * C2249 +
          (((C25534 + C25533) * C4440 + (C25532 + C25531) * C29123) * C12621 +
           ((C17992 * C4819 + C17888 * C4955 + C17993 * C6758 +
             C17889 * C6876) *
                C4440 +
            (C17992 * C4821 + C17888 * C4957 + C17993 * C6759 +
             C17889 * C6877) *
                C29123) *
               C12622) *
              C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C12689 +
            (C4440 * C156 + C29123 * C289) * C12621 + C5054 * C12690 +
            C5055 * C12622) *
               C17888 +
           (C24423 + C24424 + C24425 + C24426) * C17889) *
              C29196 * C2248 -
          ((C6954 * C12622 + C6955 * C12690 + C6956 * C12621 + C6957 * C12689) *
               C17889 +
           (C5057 * C12622 + C5056 * C12690 + C5055 * C12621 + C5054 * C12689) *
               C17888) *
              C29196 * C2249 +
          ((C5056 * C12689 + C5057 * C12621 + C6495 * C12690 + C6494 * C12622) *
               C17888 +
           (C6955 * C12689 + C6954 * C12621 +
            (C4440 * C6758 + C29123 * C6759) * C12690 +
            (C4440 * C6824 + C29123 * C6944) * C12622) *
               C17889) *
              C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                      C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                         C29123 * C17888 +
                     (C24505 + C24506) * C29123 * C17889) *
                        C29196 * C2248 -
                    ((C12866 * C5423 + C15919 + C15919 + C12622 * C5645 +
                      C12865 * C2654 + C15918 + C15918 + C12621 * C2881) *
                         C29123 * C17889 +
                     (C12866 * C2252 + C13524 + C13524 + C12622 * C2431 +
                      C12865 * C642 + C13525 + C13525 + C12621 * C904) *
                         C29123 * C17888) *
                        C29196 * C2249 +
                    ((C12865 * C2252 + C15350 + C15350 + C12621 * C2431 +
                      C12866 * C4819 + C15351 + C15351 + C12622 * C5111) *
                         C29123 * C17888 +
                     (C12865 * C5423 + C25635 + C25635 + C12621 * C5645 +
                      C12866 * C6758 + C25636 + C25636 + C12622 * C7007) *
                         C29123 * C17889) *
                        C29196 * C2250) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
               C12689 +
           (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
               C12621 +
           (C23714 + C23715) * C12690 + (C23926 + C23927) * C12622) *
              C29123 * C29196 * C2248 -
          ((C25691 + C25692) * C12622 + (C25533 + C25534) * C12690 +
           (C23927 + C23926) * C12621 + (C23715 + C23714) * C12689) *
              C29123 * C29196 * C2249 +
          ((C25534 + C25533) * C12689 + (C25692 + C25691) * C12621 +
           (C17992 * C4819 + C17888 * C4955 + C17993 * C6758 + C17889 * C6876) *
               C12690 +
           (C17992 * C4901 + C17888 * C5169 + C17993 * C6824 + C17889 * C7061) *
               C12622) *
              C29123 * C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezx[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C17992 +
                      (C4440 * C223 + C29123 * C455) * C17888 + C9634 * C17993 +
                      C9835 * C17889) *
                         C12621 +
                     (C23994 + C23995 + C23996 + C23997) * C12622) *
                        C29196 * C2248 -
                    ((C25743 + C25744 + C25745 + C25746) * C12622 +
                     (C23997 + C23996 + C23995 + C23994) * C12621) *
                        C29196 * C2249 +
                    ((C25746 + C25745 + C25744 + C25743) * C12621 +
                     (C6495 * C17992 + C6623 * C17888 +
                      (C4440 * C6758 + C29123 * C6759) * C17993 +
                      (C4440 * C6876 + C29123 * C7118) * C17889) *
                         C12622) *
                        C29196 * C2250) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
               C17992 +
           (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
               C17888 +
           (C24287 + C24288) * C17993 + (C24709 + C24710) * C17889) *
              C29123 * C29196 * C2248 -
          ((C12690 * C5539 + C12622 * C5807 + C12689 * C2772 + C12621 * C3043) *
               C17889 +
           (C12690 * C5423 + C12622 * C5485 + C12689 * C2654 + C12621 * C2716) *
               C17993 +
           (C12690 * C2346 + C12622 * C2557 + C12689 * C780 + C12621 * C1090) *
               C17888 +
           (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
               C17992) *
              C29123 * C29196 * C2249 +
          ((C12689 * C2252 + C12621 * C2302 + C12690 * C4819 + C12622 * C4901) *
               C17992 +
           (C12689 * C2346 + C12621 * C2557 + C12690 * C4955 + C12622 * C5302) *
               C17888 +
           (C12689 * C5423 + C12621 * C5485 + C12690 * C6758 + C12622 * C6824) *
               C17993 +
           (C12689 * C5539 + C12621 * C5807 + C12690 * C6876 + C12622 * C7179) *
               C17889) *
              C29123 * C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezz[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                      C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                         C12621 +
                     (C24145 + C24146) * C12622) *
                        C29123 * C29196 * C2248 -
                    ((C25857 + C25858) * C12622 + (C24146 + C24145) * C12621) *
                        C29123 * C29196 * C2249 +
                    ((C25858 + C25857) * C12621 +
                     (C18338 * C4819 + C25851 + C25851 + C17888 * C5354 +
                      C18339 * C6758 + C25852 + C25852 + C17889 * C7230) *
                         C12622) *
                        C29123 * C29196 * C2250) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C17888 +
             C9428 * C17889) *
                C12621 +
            (C23565 + C23566) * C12622) *
               C1222 -
           ((C25925 + C25926) * C12622 +
            (C9429 * C17889 + C9428 * C17888) * C12621) *
               C29289) *
              C1806 +
          (((C25926 + C25925) * C12621 +
            (C6771 * C17888 +
             (C4439 * C8181 + C8189 + C8189 + C29123 * C8185) * C17889) *
                C12622) *
               C29289 -
           ((C25421 + C25422) * C12622 + (C23566 + C23565) * C12621) * C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                 C4440 +
             (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                 C29123) *
                C17888 +
            ((C24287 + C24288) * C4440 + (C24289 + C24290) * C29123) * C17889) *
               C1222 -
           (((C12690 * C8182 + C12622 * C8229 + C12689 * C4048 +
              C12621 * C4098) *
                 C29123 +
             (C12690 * C8180 + C12622 * C8227 + C12689 * C4045 +
              C12621 * C4095) *
                 C4440) *
                C17889 +
            ((C24290 + C24289) * C29123 + (C24288 + C24287) * C4440) * C17888) *
               C29289) *
              C1806 +
          ((((C26001 + C26002) * C4440 + (C26003 + C26004) * C29123) * C17888 +
            ((C12689 * C8180 + C12621 * C8227 + C12690 * C8181 +
              C12622 * C8228) *
                 C4440 +
             (C12689 * C8182 + C12621 * C8229 + C12690 * C8183 +
              C12622 * C8230) *
                 C29123) *
                C17889) *
               C29289 -
           (((C26004 + C26003) * C29123 + (C26002 + C26001) * C4440) * C17889 +
            ((C12690 * C2255 + C12622 * C2305 + C12689 * C646 + C12621 * C714) *
                 C29123 +
             (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                 C4440) *
                C17888) *
               C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                 C4440 +
             (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                 C29123) *
                C12621 +
            ((C23714 + C23715) * C4440 + (C23716 + C23717) * C29123) * C12622) *
               C1222 -
           (((C26079 + C26080) * C29123 + (C26081 + C26082) * C4440) * C12622 +
            ((C17993 * C4048 + C17889 * C4142 + C17992 * C1230 +
              C17888 * C1368) *
                 C29123 +
             (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
              C17888 * C1364) *
                 C4440) *
                C12621) *
               C29289) *
              C1806 +
          ((((C26082 + C26081) * C4440 + (C26080 + C26079) * C29123) * C12621 +
            ((C17992 * C5423 + C17888 * C5539 + C17993 * C8181 +
              C17889 * C8270) *
                 C4440 +
             (C17992 * C5425 + C17888 * C5541 + C17993 * C8183 +
              C17889 * C8272) *
                 C29123) *
                C12622) *
               C29289 -
           (((C25531 + C25532) * C29123 + (C25533 + C25534) * C4440) * C12622 +
            ((C23717 + C23716) * C29123 + (C23715 + C23714) * C4440) * C12621) *
               C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyx[14] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C12689 +
                       (C4440 * C156 + C29123 * C289) * C12621 +
                       C5054 * C12690 + C5055 * C12622) *
                          C17888 +
                      (C24423 + C24424 + C24425 + C24426) * C17889) *
                         C1222 -
                     ((C10992 * C12622 + C10991 * C12690 + C9637 * C12621 +
                       C9636 * C12689) *
                          C17889 +
                      (C24426 + C24425 + C24424 + C24423) * C17888) *
                         C29289) *
                        C1806 +
                    (((C26149 + C26150 + C26151 + C26152) * C17888 +
                      (C10991 * C12689 + C10992 * C12621 +
                       (C4440 * C8181 + C29123 * C8183) * C12690 +
                       (C4440 * C8228 + C29123 * C8312) * C12622) *
                          C17889) *
                         C29289 -
                     ((C26152 + C26151 + C26150 + C26149) * C17889 +
                      (C5057 * C12622 + C5056 * C12690 + C5055 * C12621 +
                       C5054 * C12689) *
                          C17888) *
                         C1222) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[14] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                       C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                          C29123 * C17888 +
                      (C24505 + C24506) * C29123 * C17889) *
                         C1222 -
                     ((C12866 * C8180 + C17635 + C17635 + C12622 * C8351 +
                       C12865 * C4045 + C17634 + C17634 + C12621 * C4224) *
                          C29123 * C17889 +
                      (C24506 + C24505) * C29123 * C17888) *
                         C29289) *
                        C1806 +
                    (((C26229 + C26230) * C29123 * C17888 +
                      (C12865 * C8180 + C26223 + C26223 + C12621 * C8351 +
                       C12866 * C8181 + C26224 + C26224 + C12622 * C8352) *
                          C29123 * C17889) *
                         C29289 -
                     ((C26230 + C26229) * C29123 * C17889 +
                      (C12866 * C2252 + C13524 + C13524 + C12622 * C2431 +
                       C12865 * C642 + C13525 + C13525 + C12621 * C904) *
                          C29123 * C17888) *
                         C1222) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C12689 +
            (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                C12621 +
            (C23714 + C23715) * C12690 + (C23926 + C23927) * C12622) *
               C29123 * C1222 -
           ((C26301 + C26302) * C12622 + (C26081 + C26082) * C12690 +
            (C17993 * C4095 + C17889 * C4268 + C17992 * C1294 +
             C17888 * C1556) *
                C12621 +
            (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
             C17888 * C1364) *
                C12689) *
               C29123 * C29289) *
              C1806 +
          (((C26082 + C26081) * C12689 + (C26302 + C26301) * C12621 +
            (C17992 * C5423 + C17888 * C5539 + C17993 * C8181 +
             C17889 * C8270) *
                C12690 +
            (C17992 * C5485 + C17888 * C5703 + C17993 * C8228 +
             C17889 * C8395) *
                C12622) *
               C29123 * C29289 -
           ((C25691 + C25692) * C12622 + (C25533 + C25534) * C12690 +
            (C23927 + C23926) * C12621 + (C23715 + C23714) * C12689) *
               C29123 * C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezx[14] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C17992 +
                       (C4440 * C223 + C29123 * C455) * C17888 +
                       C9634 * C17993 + C9835 * C17889) *
                          C12621 +
                      (C23994 + C23995 + C23996 + C23997) * C12622) *
                         C1222 -
                     ((C26369 + C26370 + C26371 + C26372) * C12622 +
                      (C9836 * C17889 + C9636 * C17993 + C9835 * C17888 +
                       C9634 * C17992) *
                          C12621) *
                         C29289) *
                        C1806 +
                    (((C26372 + C26371 + C26370 + C26369) * C12621 +
                      (C6955 * C17992 + C7126 * C17888 +
                       (C4440 * C8181 + C29123 * C8183) * C17993 +
                       (C4440 * C8270 + C29123 * C8435) * C17889) *
                          C12622) *
                         C29289 -
                     ((C25743 + C25744 + C25745 + C25746) * C12622 +
                      (C23997 + C23996 + C23995 + C23994) * C12621) *
                         C1222) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C17992 +
            (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                C17888 +
            (C24287 + C24288) * C17993 + (C24709 + C24710) * C17889) *
               C29123 * C1222 -
           ((C12690 * C8269 + C12622 * C8474 + C12689 * C4139 +
             C12621 * C4350) *
                C17889 +
            (C12690 * C8180 + C12622 * C8227 + C12689 * C4045 +
             C12621 * C4095) *
                C17993 +
            (C24710 + C24709) * C17888 + (C24288 + C24287) * C17992) *
               C29123 * C29289) *
              C1806 +
          (((C26001 + C26002) * C17992 + (C26443 + C26444) * C17888 +
            (C12689 * C8180 + C12621 * C8227 + C12690 * C8181 +
             C12622 * C8228) *
                C17993 +
            (C12689 * C8269 + C12621 * C8474 + C12690 * C8270 +
             C12622 * C8475) *
                C17889) *
               C29123 * C29289 -
           ((C26444 + C26443) * C17889 + (C26002 + C26001) * C17993 +
            (C12690 * C2346 + C12622 * C2557 + C12689 * C780 + C12621 * C1090) *
                C17888 +
            (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                C17992) *
               C29123 * C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezz[14] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                       C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                          C12621 +
                      (C24145 + C24146) * C12622) *
                         C29123 * C1222 -
                     ((C26521 + C26522) * C12622 +
                      (C18339 * C4045 + C19707 + C19707 + C17889 * C4391 +
                       C18338 * C1226 + C19708 + C19708 + C17888 * C1738) *
                          C12621) *
                         C29123 * C29289) *
                        C1806 +
                    (((C26522 + C26521) * C12621 +
                      (C18338 * C5423 + C26515 + C26515 + C17888 * C5859 +
                       C18339 * C8181 + C26516 + C26516 + C17889 * C8515) *
                          C12622) *
                         C29123 * C29289 -
                     ((C25857 + C25858) * C12622 + (C24146 + C24145) * C12621) *
                         C29123 * C1222) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C17888 +
             C9428 * C17889) *
                C12621 +
            (C23565 + C23566) * C12622) *
               C3152 -
           ((C25925 + C25926) * C12622 +
            (C9429 * C17889 + C9428 * C17888) * C12621) *
               C29289) *
              C29179 * C1808 +
          (((C9430 * C17888 + C9431 * C17889) * C12621 +
            (C23572 * C17888 +
             (C4439 * C8931 + C8935 + C8935 + C29123 * C8933) * C17889) *
                C12622) *
               C29289 -
           ((C23573 + C23567) * C12622 +
            (C9430 * C17889 +
             (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C17888) *
                C12621) *
               C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                 C4440 +
             (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                 C29123) *
                C17888 +
            ((C24287 + C24288) * C4440 + (C24289 + C24290) * C29123) * C17889) *
               C3152 -
           (((C12690 * C8182 + C12622 * C8229 + C12689 * C4048 +
              C12621 * C4098) *
                 C29123 +
             (C12690 * C8180 + C12622 * C8227 + C12689 * C4045 +
              C12621 * C4095) *
                 C4440) *
                C17889 +
            ((C24290 + C24289) * C29123 + (C24288 + C24287) * C4440) * C17888) *
               C29289) *
              C29179 * C1808 +
          ((((C13973 + C13972) * C4440 + (C13971 + C13970) * C29123) * C17888 +
            ((C12689 * C4046 + C12621 * C4096 + C12690 * C8931 +
              C12622 * C8985) *
                 C4440 +
             (C12689 * C4049 + C12621 * C4099 + C12690 * C8932 +
              C12622 * C8986) *
                 C29123) *
                C17889) *
               C29289 -
           (((C13970 + C13971) * C29123 + (C13972 + C13973) * C4440) * C17889 +
            ((C12711 + C12710) * C29123 + (C12709 + C12708) * C4440) * C17888) *
               C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                 C4440 +
             (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                 C29123) *
                C12621 +
            ((C23714 + C23715) * C4440 + (C23716 + C23717) * C29123) * C12622) *
               C3152 -
           (((C26079 + C26080) * C29123 + (C26081 + C26082) * C4440) * C12622 +
            ((C17993 * C4048 + C17889 * C4142 + C17992 * C1230 +
              C17888 * C1368) *
                 C29123 +
             (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
              C17888 * C1364) *
                 C4440) *
                C12621) *
               C29289) *
              C29179 * C1808 +
          ((((C19254 + C19253) * C4440 + (C19252 + C19251) * C29123) * C12621 +
            ((C17992 * C2655 + C17888 * C2773 + C17993 * C8931 +
              C17889 * C9037) *
                 C4440 +
             (C17992 * C2658 + C17888 * C2776 + C17993 * C8932 +
              C17889 * C9038) *
                 C29123) *
                C12622) *
               C29289 -
           (((C18581 + C18582) * C29123 + (C18583 + C18584) * C4440) * C12622 +
            ((C18014 + C18013) * C29123 + (C18012 + C18011) * C4440) * C12621) *
               C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C12689 +
                       (C4440 * C156 + C29123 * C289) * C12621 +
                       C5054 * C12690 + C5055 * C12622) *
                          C17888 +
                      (C24423 + C24424 + C24425 + C24426) * C17889) *
                         C3152 -
                     ((C10992 * C12622 + C10991 * C12690 + C9637 * C12621 +
                       C9636 * C12689) *
                          C17889 +
                      (C24426 + C24425 + C24424 + C24423) * C17888) *
                         C29289) *
                        C29179 * C1808 +
                    (((C24427 + C24428 + C24429 + C24430) * C17888 +
                      (C9640 * C12689 + C9641 * C12621 +
                       (C4440 * C8931 + C29123 * C8932) * C12690 +
                       (C4440 * C8985 + C29123 * C9089) * C12622) *
                          C17889) *
                         C29289 -
                     ((C24430 + C24429 + C24428 + C24427) * C17889 +
                      (C5059 * C12622 + C5058 * C12690 +
                       (C4440 * C157 + C29123 * C290) * C12621 +
                       (C4440 * C94 + C29123 * C99) * C12689) *
                          C17888) *
                         C3152) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                       C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                          C29123 * C17888 +
                      (C24505 + C24506) * C29123 * C17889) *
                         C3152 -
                     ((C12866 * C8180 + C17635 + C17635 + C12622 * C8351 +
                       C12865 * C4045 + C17634 + C17634 + C12621 * C4224) *
                          C29123 * C17889 +
                      (C24506 + C24505) * C29123 * C17888) *
                         C29289) *
                        C29179 * C1808 +
                    (((C14193 + C14192) * C29123 * C17888 +
                      (C12865 * C4046 + C17636 + C17636 + C12621 * C4225 +
                       C12866 * C8931 + C17637 + C17637 + C12622 * C9140) *
                          C29123 * C17889) *
                         C29289 -
                     ((C14192 + C14193) * C29123 * C17889 +
                      (C12893 + C12892) * C29123 * C17888) *
                         C3152) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C12689 +
            (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                C12621 +
            (C23714 + C23715) * C12690 + (C23926 + C23927) * C12622) *
               C29123 * C3152 -
           ((C26301 + C26302) * C12622 + (C26081 + C26082) * C12690 +
            (C17993 * C4095 + C17889 * C4268 + C17992 * C1294 +
             C17888 * C1556) *
                C12621 +
            (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
             C17888 * C1364) *
                C12689) *
               C29123 * C29289) *
              C29179 * C1808 +
          (((C19254 + C19253) * C12689 + (C19486 + C19485) * C12621 +
            (C17992 * C2655 + C17888 * C2773 + C17993 * C8931 +
             C17889 * C9037) *
                C12690 +
            (C17992 * C2717 + C17888 * C2938 + C17993 * C8985 +
             C17889 * C9193) *
                C12622) *
               C29123 * C29289 -
           ((C18792 + C18793) * C12622 + (C18583 + C18584) * C12690 +
            (C18178 + C18177) * C12621 + (C18012 + C18011) * C12689) *
               C29123 * C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezx[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C17992 +
                       (C4440 * C223 + C29123 * C455) * C17888 +
                       C9634 * C17993 + C9835 * C17889) *
                          C12621 +
                      (C23994 + C23995 + C23996 + C23997) * C12622) *
                         C3152 -
                     ((C26369 + C26370 + C26371 + C26372) * C12622 +
                      (C9836 * C17889 + C9636 * C17993 + C9835 * C17888 +
                       C9634 * C17992) *
                          C12621) *
                         C29289) *
                        C29179 * C1808 +
                    (((C9638 * C17992 + C9837 * C17888 + C9640 * C17993 +
                       C9838 * C17889) *
                          C12621 +
                      (C23788 * C17992 + C24003 * C17888 +
                       (C4440 * C8931 + C29123 * C8932) * C17993 +
                       (C4440 * C9037 + C29123 * C9244) * C17889) *
                          C12622) *
                         C29289 -
                     ((C24004 + C24000 + C23999 + C23998) * C12622 +
                      (C9837 * C17889 + C9638 * C17993 +
                       (C4440 * C224 + C29123 * C456) * C17888 +
                       (C4440 * C94 + C29123 * C99) * C17992) *
                          C12621) *
                         C3152) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C17992 +
            (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                C17888 +
            (C24287 + C24288) * C17993 + (C24709 + C24710) * C17889) *
               C29123 * C3152 -
           ((C12690 * C8269 + C12622 * C8474 + C12689 * C4139 +
             C12621 * C4350) *
                C17889 +
            (C12690 * C8180 + C12622 * C8227 + C12689 * C4045 +
             C12621 * C4095) *
                C17993 +
            (C24710 + C24709) * C17888 + (C24288 + C24287) * C17992) *
               C29123 * C29289) *
              C29179 * C1808 +
          (((C13973 + C13972) * C17992 + (C14404 + C14403) * C17888 +
            (C12689 * C4046 + C12621 * C4096 + C12690 * C8931 +
             C12622 * C8985) *
                C17993 +
            (C12689 * C4140 + C12621 * C4351 + C12690 * C9037 +
             C12622 * C9295) *
                C17889) *
               C29123 * C29289 -
           ((C14403 + C14404) * C17889 + (C13972 + C13973) * C17993 +
            (C13063 + C13062) * C17888 + (C12709 + C12708) * C17992) *
               C29123 * C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                       C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                          C12621 +
                      (C24145 + C24146) * C12622) *
                         C29123 * C3152 -
                     ((C26521 + C26522) * C12622 +
                      (C18339 * C4045 + C19707 + C19707 + C17889 * C4391 +
                       C18338 * C1226 + C19708 + C19708 + C17888 * C1738) *
                          C12621) *
                         C29123 * C29289) *
                        C29179 * C1808 +
                    (((C19716 + C19715) * C12621 +
                      (C18338 * C2655 + C21368 + C21368 + C17888 * C3097 +
                       C18339 * C8931 + C21369 + C21369 + C17889 * C9346) *
                          C12622) *
                         C29123 * C29289 -
                     ((C19013 + C19014) * C12622 + (C18366 + C18365) * C12621) *
                         C29123 * C3152) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C17888 +
             C9428 * C17889) *
                C12621 +
            (C23565 + C23566) * C12622) *
               C3152 -
           ((C25925 + C25926) * C12622 +
            (C9429 * C17889 + C9428 * C17888) * C12621) *
               C29289) *
              C636 +
          (((C25926 + C25925) * C12621 +
            (C6771 * C17888 +
             (C4439 * C8181 + C8189 + C8189 + C29123 * C8185) * C17889) *
                C12622) *
               C29289 -
           ((C25421 + C25422) * C12622 + (C23566 + C23565) * C12621) * C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                 C4440 +
             (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                 C29123) *
                C17888 +
            ((C24287 + C24288) * C4440 + (C24289 + C24290) * C29123) * C17889) *
               C3152 -
           (((C12690 * C8182 + C12622 * C8229 + C12689 * C4048 +
              C12621 * C4098) *
                 C29123 +
             (C12690 * C8180 + C12622 * C8227 + C12689 * C4045 +
              C12621 * C4095) *
                 C4440) *
                C17889 +
            ((C24290 + C24289) * C29123 + (C24288 + C24287) * C4440) * C17888) *
               C29289) *
              C636 +
          ((((C26001 + C26002) * C4440 + (C26003 + C26004) * C29123) * C17888 +
            ((C12689 * C8180 + C12621 * C8227 + C12690 * C8181 +
              C12622 * C8228) *
                 C4440 +
             (C12689 * C8182 + C12621 * C8229 + C12690 * C8183 +
              C12622 * C8230) *
                 C29123) *
                C17889) *
               C29289 -
           (((C26004 + C26003) * C29123 + (C26002 + C26001) * C4440) * C17889 +
            ((C12690 * C2255 + C12622 * C2305 + C12689 * C646 + C12621 * C714) *
                 C29123 +
             (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                 C4440) *
                C17888) *
               C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                 C4440 +
             (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                 C29123) *
                C12621 +
            ((C23714 + C23715) * C4440 + (C23716 + C23717) * C29123) * C12622) *
               C3152 -
           (((C26079 + C26080) * C29123 + (C26081 + C26082) * C4440) * C12622 +
            ((C17993 * C4048 + C17889 * C4142 + C17992 * C1230 +
              C17888 * C1368) *
                 C29123 +
             (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
              C17888 * C1364) *
                 C4440) *
                C12621) *
               C29289) *
              C636 +
          ((((C26082 + C26081) * C4440 + (C26080 + C26079) * C29123) * C12621 +
            ((C17992 * C5423 + C17888 * C5539 + C17993 * C8181 +
              C17889 * C8270) *
                 C4440 +
             (C17992 * C5425 + C17888 * C5541 + C17993 * C8183 +
              C17889 * C8272) *
                 C29123) *
                C12622) *
               C29289 -
           (((C25531 + C25532) * C29123 + (C25533 + C25534) * C4440) * C12622 +
            ((C23717 + C23716) * C29123 + (C23715 + C23714) * C4440) * C12621) *
               C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyx[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C12689 +
                       (C4440 * C156 + C29123 * C289) * C12621 +
                       C5054 * C12690 + C5055 * C12622) *
                          C17888 +
                      (C24423 + C24424 + C24425 + C24426) * C17889) *
                         C3152 -
                     ((C10992 * C12622 + C10991 * C12690 + C9637 * C12621 +
                       C9636 * C12689) *
                          C17889 +
                      (C24426 + C24425 + C24424 + C24423) * C17888) *
                         C29289) *
                        C636 +
                    (((C26149 + C26150 + C26151 + C26152) * C17888 +
                      (C10991 * C12689 + C10992 * C12621 +
                       (C4440 * C8181 + C29123 * C8183) * C12690 +
                       (C4440 * C8228 + C29123 * C8312) * C12622) *
                          C17889) *
                         C29289 -
                     ((C26152 + C26151 + C26150 + C26149) * C17889 +
                      (C5057 * C12622 + C5056 * C12690 + C5055 * C12621 +
                       C5054 * C12689) *
                          C17888) *
                         C3152) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                       C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                          C29123 * C17888 +
                      (C24505 + C24506) * C29123 * C17889) *
                         C3152 -
                     ((C12866 * C8180 + C17635 + C17635 + C12622 * C8351 +
                       C12865 * C4045 + C17634 + C17634 + C12621 * C4224) *
                          C29123 * C17889 +
                      (C24506 + C24505) * C29123 * C17888) *
                         C29289) *
                        C636 +
                    (((C26229 + C26230) * C29123 * C17888 +
                      (C12865 * C8180 + C26223 + C26223 + C12621 * C8351 +
                       C12866 * C8181 + C26224 + C26224 + C12622 * C8352) *
                          C29123 * C17889) *
                         C29289 -
                     ((C26230 + C26229) * C29123 * C17889 +
                      (C12866 * C2252 + C13524 + C13524 + C12622 * C2431 +
                       C12865 * C642 + C13525 + C13525 + C12621 * C904) *
                          C29123 * C17888) *
                         C3152) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C12689 +
            (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                C12621 +
            (C23714 + C23715) * C12690 + (C23926 + C23927) * C12622) *
               C29123 * C3152 -
           ((C26301 + C26302) * C12622 + (C26081 + C26082) * C12690 +
            (C17993 * C4095 + C17889 * C4268 + C17992 * C1294 +
             C17888 * C1556) *
                C12621 +
            (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
             C17888 * C1364) *
                C12689) *
               C29123 * C29289) *
              C636 +
          (((C26082 + C26081) * C12689 + (C26302 + C26301) * C12621 +
            (C17992 * C5423 + C17888 * C5539 + C17993 * C8181 +
             C17889 * C8270) *
                C12690 +
            (C17992 * C5485 + C17888 * C5703 + C17993 * C8228 +
             C17889 * C8395) *
                C12622) *
               C29123 * C29289 -
           ((C25691 + C25692) * C12622 + (C25533 + C25534) * C12690 +
            (C23927 + C23926) * C12621 + (C23715 + C23714) * C12689) *
               C29123 * C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezx[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C17992 +
                       (C4440 * C223 + C29123 * C455) * C17888 +
                       C9634 * C17993 + C9835 * C17889) *
                          C12621 +
                      (C23994 + C23995 + C23996 + C23997) * C12622) *
                         C3152 -
                     ((C26369 + C26370 + C26371 + C26372) * C12622 +
                      (C9836 * C17889 + C9636 * C17993 + C9835 * C17888 +
                       C9634 * C17992) *
                          C12621) *
                         C29289) *
                        C636 +
                    (((C26372 + C26371 + C26370 + C26369) * C12621 +
                      (C6955 * C17992 + C7126 * C17888 +
                       (C4440 * C8181 + C29123 * C8183) * C17993 +
                       (C4440 * C8270 + C29123 * C8435) * C17889) *
                          C12622) *
                         C29289 -
                     ((C25743 + C25744 + C25745 + C25746) * C12622 +
                      (C23997 + C23996 + C23995 + C23994) * C12621) *
                         C3152) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C17992 +
            (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
                C17888 +
            (C24287 + C24288) * C17993 + (C24709 + C24710) * C17889) *
               C29123 * C3152 -
           ((C12690 * C8269 + C12622 * C8474 + C12689 * C4139 +
             C12621 * C4350) *
                C17889 +
            (C12690 * C8180 + C12622 * C8227 + C12689 * C4045 +
             C12621 * C4095) *
                C17993 +
            (C24710 + C24709) * C17888 + (C24288 + C24287) * C17992) *
               C29123 * C29289) *
              C636 +
          (((C26001 + C26002) * C17992 + (C26443 + C26444) * C17888 +
            (C12689 * C8180 + C12621 * C8227 + C12690 * C8181 +
             C12622 * C8228) *
                C17993 +
            (C12689 * C8269 + C12621 * C8474 + C12690 * C8270 +
             C12622 * C8475) *
                C17889) *
               C29123 * C29289 -
           ((C26444 + C26443) * C17889 + (C26002 + C26001) * C17993 +
            (C12690 * C2346 + C12622 * C2557 + C12689 * C780 + C12621 * C1090) *
                C17888 +
            (C12690 * C2252 + C12622 * C2302 + C12689 * C642 + C12621 * C710) *
                C17992) *
               C29123 * C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                       C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                          C12621 +
                      (C24145 + C24146) * C12622) *
                         C29123 * C3152 -
                     ((C26521 + C26522) * C12622 +
                      (C18339 * C4045 + C19707 + C19707 + C17889 * C4391 +
                       C18338 * C1226 + C19708 + C19708 + C17888 * C1738) *
                          C12621) *
                         C29123 * C29289) *
                        C636 +
                    (((C26522 + C26521) * C12621 +
                      (C18338 * C5423 + C26515 + C26515 + C17888 * C5859 +
                       C18339 * C8181 + C26516 + C26516 + C17889 * C8515) *
                          C12622) *
                         C29123 * C29289 -
                     ((C25857 + C25858) * C12622 + (C24146 + C24145) * C12621) *
                         C29123 * C3152) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C17888 +
            C9428 * C17889) *
               C12621 +
           (C23565 + C23566) * C12622) *
              C4042 -
          ((C25925 + C25926) * C12622 +
           (C9429 * C17889 + C9428 * C17888) * C12621) *
              C4043 +
          ((C9429 * C17888 + C12221 * C17889) * C12621 +
           (C10813 * C17888 +
            (C4439 * C10804 + C10810 + C10810 + C29123 * C10806) * C17889) *
               C12622) *
              C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
                C4440 +
            (C12689 * C98 + C12621 * C161 + C12690 * C646 + C12622 * C714) *
                C29123) *
               C17888 +
           ((C24287 + C24288) * C4440 + (C24289 + C24290) * C29123) * C17889) *
              C4042 -
          (((C27819 + C27820) * C29123 + (C27821 + C27822) * C4440) * C17889 +
           ((C24290 + C24289) * C29123 + (C24288 + C24287) * C4440) * C17888) *
              C4043 +
          (((C27822 + C27821) * C4440 + (C27820 + C27819) * C29123) * C17888 +
           ((C12689 * C9403 + C12621 * C9481 + C12690 * C10804 +
             C12622 * C10863) *
                C4440 +
            (C12689 * C9405 + C12621 * C9483 + C12690 * C10805 +
             C12622 * C10864) *
                C29123) *
               C17889) *
              C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C4440 +
            (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                C29123) *
               C12621 +
           ((C23714 + C23715) * C4440 + (C23716 + C23717) * C29123) * C12622) *
              C4042 -
          (((C26079 + C26080) * C29123 + (C26081 + C26082) * C4440) * C12622 +
           ((C17993 * C4048 + C17889 * C4142 + C17992 * C1230 +
             C17888 * C1368) *
                C29123 +
            (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
             C17888 * C1364) *
                C4440) *
               C12621) *
              C4043 +
          (((C17992 * C4045 + C17888 * C4139 + C17993 * C9403 +
             C17889 * C9561) *
                C4440 +
            (C17992 * C4048 + C17888 * C4142 + C17993 * C9405 +
             C17889 * C9563) *
                C29123) *
               C12621 +
           ((C17992 * C8180 + C17888 * C8269 + C17993 * C10804 +
             C17889 * C10931) *
                C4440 +
            (C17992 * C8182 + C17888 * C8271 + C17993 * C10805 +
             C17889 * C10932) *
                C29123) *
               C12622) *
              C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyx[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C12689 +
                      (C4440 * C156 + C29123 * C289) * C12621 + C5054 * C12690 +
                      C5055 * C12622) *
                         C17888 +
                     (C24423 + C24424 + C24425 + C24426) * C17889) *
                        C4042 -
                    ((C27923 + C27924 + C27925 + C27926) * C17889 +
                     (C24426 + C24425 + C24424 + C24423) * C17888) *
                        C4043 +
                    ((C27926 + C27925 + C27924 + C27923) * C17888 +
                     (C12356 * C12689 + C12355 * C12621 +
                      (C4440 * C10804 + C29123 * C10805) * C12690 +
                      (C4440 * C10863 + C29123 * C10983) * C12622) *
                         C17889) *
                        C4044) *
                   C29179 * C29145) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C12865 * C93 + C12868 + C12868 + C12621 * C333 +
                      C12866 * C642 + C12869 + C12869 + C12622 * C904) *
                         C29123 * C17888 +
                     (C24505 + C24506) * C29123 * C17889) *
                        C4042 -
                    ((C27987 + C27988) * C29123 * C17889 +
                     (C24506 + C24505) * C29123 * C17888) *
                        C4043 +
                    ((C27988 + C27987) * C29123 * C17888 +
                     (C12865 * C9403 + C27981 + C27981 + C12621 * C9699 +
                      C12866 * C10804 + C27982 + C27982 + C12622 * C11044) *
                         C29123 * C17889) *
                        C4044) *
                   C29179 * C29145) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
               C12689 +
           (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
               C12621 +
           (C23714 + C23715) * C12690 + (C23926 + C23927) * C12622) *
              C29123 * C4042 -
          ((C26301 + C26302) * C12622 + (C26081 + C26082) * C12690 +
           (C17993 * C4095 + C17889 * C4268 + C17992 * C1294 + C17888 * C1556) *
               C12621 +
           (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 + C17888 * C1364) *
               C12689) *
              C29123 * C4043 +
          ((C17992 * C4045 + C17888 * C4139 + C17993 * C9403 + C17889 * C9561) *
               C12689 +
           (C17992 * C4095 + C17888 * C4268 + C17993 * C9481 + C17889 * C9772) *
               C12621 +
           (C17992 * C8180 + C17888 * C8269 + C17993 * C10804 +
            C17889 * C10931) *
               C12690 +
           (C17992 * C8227 + C17888 * C8394 + C17993 * C10863 +
            C17889 * C11108) *
               C12622) *
              C29123 * C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C17992 +
            (C4440 * C223 + C29123 * C455) * C17888 + C9634 * C17993 +
            C9835 * C17889) *
               C12621 +
           (C23994 + C23995 + C23996 + C23997) * C12622) *
              C4042 -
          ((C26369 + C26370 + C26371 + C26372) * C12622 +
           (C9836 * C17889 + C9636 * C17993 + C9835 * C17888 + C9634 * C17992) *
               C12621) *
              C4043 +
          ((C9636 * C17992 + C9836 * C17888 + C12356 * C17993 +
            C12485 * C17889) *
               C12621 +
           (C10991 * C17992 + C11163 * C17888 +
            (C4440 * C10804 + C29123 * C10805) * C17993 +
            (C4440 * C10931 + C29123 * C11159) * C17889) *
               C12622) *
              C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eezy[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12689 * C93 + C12621 * C156 + C12690 * C642 + C12622 * C710) *
               C17992 +
           (C12689 * C223 + C12621 * C498 + C12690 * C780 + C12622 * C1090) *
               C17888 +
           (C24287 + C24288) * C17993 + (C24709 + C24710) * C17889) *
              C29123 * C4042 -
          ((C28143 + C28144) * C17889 + (C27821 + C27822) * C17993 +
           (C24710 + C24709) * C17888 + (C24288 + C24287) * C17992) *
              C29123 * C4043 +
          ((C27822 + C27821) * C17992 + (C28144 + C28143) * C17888 +
           (C12689 * C9403 + C12621 * C9481 + C12690 * C10804 +
            C12622 * C10863) *
               C17993 +
           (C12689 * C9561 + C12621 * C9888 + C12690 * C10931 +
            C12622 * C11213) *
               C17889) *
              C29123 * C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eezz[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                      C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                         C12621 +
                     (C24145 + C24146) * C12622) *
                        C29123 * C4042 -
                    ((C26521 + C26522) * C12622 +
                     (C18339 * C4045 + C19707 + C19707 + C17889 * C4391 +
                      C18338 * C1226 + C19708 + C19708 + C17888 * C1738) *
                         C12621) *
                        C29123 * C4043 +
                    ((C18338 * C4045 + C23044 + C23044 + C17888 * C4391 +
                      C18339 * C9403 + C23045 + C23045 + C17889 * C9949) *
                         C12621 +
                     (C18338 * C8180 + C28195 + C28195 + C17888 * C8514 +
                      C18339 * C10804 + C28196 + C28196 + C17889 * C11270) *
                         C12622) *
                        C29123 * C4044) *
                   C29179 * C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (-std::pow(Pi, 2.5) *
         (((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
           (C4439 * C642 + C4443 + C4443 + C29123 * C650) * C29220 * C4437 +
           (C4439 * C2252 + C4444 + C4444 + C29123 * C2258) * C29220 * C4438) *
              C29196 * C29179 * C84 -
          ((C4439 * C2253 + C4445 + C4445 + C29123 * C2259) * C29220 * C4438 +
           (C4439 * C641 + C4446 + C4446 + C29123 * C649) * C29220 * C4437 +
           (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C29220 * C4436) *
              C29196 * C29179 * C85 +
          ((C4439 * C95 + C4448 + C4448 + C29123 * C105) * C29220 * C4436 +
           (C4439 * C640 + C4449 + C4449 + C29123 * C648) * C29220 * C4437 +
           (C4439 * C2254 + C4450 + C4450 + C29123 * C2260) * C29220 * C4438) *
              C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C29220 * C29209 * C29196 * C29179 * C84 -
          (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
           C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
              C29220 * C29209 * C29196 * C29179 * C85 +
          (C87 * C95 + C115 + C115 + C77 * C105 + C89 * C96 + C116 + C116 +
           C78 * C106 + C91 * C97 + C117 + C117 + C79 * C107) *
              C29220 * C29209 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C8556 +
           (C4439 * C1226 + C5432 + C5432 + C29123 * C1234) * C8557 +
           (C4439 * C4045 + C8187 + C8187 + C29123 * C4051) * C8558) *
              C29209 * C29196 * C29179 * C84 -
          ((C4439 * C4046 + C8560 + C8560 + C29123 * C4052) * C8558 +
           (C4439 * C1225 + C5433 + C5433 + C29123 * C1233) * C8557 +
           (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C8556) *
              C29209 * C29196 * C29179 * C85 +
          ((C4439 * C95 + C4448 + C4448 + C29123 * C105) * C8556 +
           (C4439 * C1224 + C8561 + C8561 + C29123 * C1232) * C8557 +
           (C4439 * C4047 + C8562 + C8562 + C29123 * C4053) * C8558) *
              C29209 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eexy[18] +=
        (-std::pow(Pi, 2.5) * (((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                                 C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                                    C4440 +
                                (C4488 * C98 + C4436 * C161 + C4489 * C646 +
                                 C4437 * C714 + C4490 * C2255 + C4438 * C2305) *
                                    C29123) *
                                   C29220 * C29196 * C29179 * C84 -
                               ((C4490 * C2256 + C4438 * C2306 + C4489 * C645 +
                                 C4437 * C713 + C4488 * C99 + C4436 * C162) *
                                    C29123 +
                                (C4490 * C2253 + C4438 * C2303 + C4489 * C641 +
                                 C4437 * C709 + C4488 * C94 + C4436 * C157) *
                                    C4440) *
                                   C29220 * C29196 * C29179 * C85 +
                               ((C4488 * C95 + C4436 * C158 + C4489 * C640 +
                                 C4437 * C708 + C4490 * C2254 + C4438 * C2304) *
                                    C4440 +
                                (C4488 * C100 + C4436 * C163 + C4489 * C644 +
                                 C4437 * C712 + C4490 * C2257 + C4438 * C2307) *
                                    C29123) *
                                   C29220 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C155 * C93 + C29209 * C156) * C88 +
                               (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                               C180 * C78 + C181 * C92 + C182 * C79) *
                                  C29220 * C29196 * C29179 * C84 -
                              (C183 * C79 + C184 * C92 + C182 * C78 +
                               C181 * C90 + C180 * C77 + C179 * C88) *
                                  C29220 * C29196 * C29179 * C85 +
                              (C181 * C88 + C182 * C77 + C184 * C90 +
                               C183 * C78 + (C155 * C97 + C29209 * C160) * C92 +
                               (C155 * C102 + C29209 * C165) * C79) *
                                  C29220 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C29209 * C156) * C4440 +
            (C155 * C98 + C29209 * C161) * C29123) *
               C8556 +
           ((C155 * C1226 + C29209 * C1294) * C4440 +
            (C155 * C1230 + C29209 * C1298) * C29123) *
               C8557 +
           ((C155 * C4045 + C29209 * C4095) * C4440 +
            (C155 * C4048 + C29209 * C4098) * C29123) *
               C8558) *
              C29196 * C29179 * C84 -
          (((C155 * C4049 + C29209 * C4099) * C29123 +
            (C155 * C4046 + C29209 * C4096) * C4440) *
               C8558 +
           (C1311 * C29123 + C1312 * C4440) * C8557 +
           (C180 * C29123 + C179 * C4440) * C8556) *
              C29196 * C29179 * C85 +
          ((C181 * C4440 + C182 * C29123) * C8556 +
           (C1310 * C4440 + C1309 * C29123) * C8557 +
           ((C155 * C4047 + C29209 * C4097) * C4440 +
            (C155 * C4050 + C29209 * C4100) * C29123) *
               C8558) *
              C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (-std::pow(Pi, 2.5) * ((((C222 * C93 + C29220 * C223) * C4440 +
                                 (C222 * C98 + C29220 * C228) * C29123) *
                                    C4436 +
                                ((C222 * C642 + C29220 * C780) * C4440 +
                                 (C222 * C646 + C29220 * C784) * C29123) *
                                    C4437 +
                                ((C222 * C2252 + C29220 * C2346) * C4440 +
                                 (C222 * C2255 + C29220 * C2349) * C29123) *
                                    C4438) *
                                   C29196 * C29179 * C84 -
                               (((C222 * C2256 + C29220 * C2350) * C29123 +
                                 (C222 * C2253 + C29220 * C2347) * C4440) *
                                    C4438 +
                                (C797 * C29123 + C798 * C4440) * C4437 +
                                (C247 * C29123 + C246 * C4440) * C4436) *
                                   C29196 * C29179 * C85 +
                               ((C248 * C4440 + C249 * C29123) * C4436 +
                                (C796 * C4440 + C795 * C29123) * C4437 +
                                ((C222 * C2254 + C29220 * C2348) * C4440 +
                                 (C222 * C2257 + C29220 * C2351) * C29123) *
                                    C4438) *
                                   C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C222 * C93 + C29220 * C223) * C88 +
                               (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                               C247 * C78 + C248 * C92 + C249 * C79) *
                                  C29209 * C29196 * C29179 * C84 -
                              (C250 * C79 + C251 * C92 + C249 * C78 +
                               C248 * C90 + C247 * C77 + C246 * C88) *
                                  C29209 * C29196 * C29179 * C85 +
                              (C248 * C88 + C249 * C77 + C251 * C90 +
                               C250 * C78 + (C222 * C97 + C29220 * C227) * C92 +
                               (C222 * C102 + C29220 * C232) * C79) *
                                  C29209 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8638 * C93 + C8556 * C223 + C8639 * C1226 + C8557 * C1364 +
            C8640 * C4045 + C8558 * C4139) *
               C4440 +
           (C8638 * C98 + C8556 * C228 + C8639 * C1230 + C8557 * C1368 +
            C8640 * C4048 + C8558 * C4142) *
               C29123) *
              C29209 * C29196 * C29179 * C84 -
          ((C8640 * C4049 + C8558 * C4143 + C8639 * C1229 + C8557 * C1367 +
            C8638 * C99 + C8556 * C229) *
               C29123 +
           (C8640 * C4046 + C8558 * C4140 + C8639 * C1225 + C8557 * C1363 +
            C8638 * C94 + C8556 * C224) *
               C4440) *
              C29209 * C29196 * C29179 * C85 +
          ((C8638 * C95 + C8556 * C225 + C8639 * C1224 + C8557 * C1362 +
            C8640 * C4047 + C8558 * C4141) *
               C4440 +
           (C8638 * C100 + C8556 * C230 + C8639 * C1228 + C8557 * C1366 +
            C8640 * C4050 + C8558 * C4144) *
               C29123) *
              C29209 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[18] +=
        (-std::pow(Pi, 2.5) * (((C4440 * C93 + C29123 * C98) * C4488 +
                                (C4440 * C156 + C29123 * C289) * C4436 +
                                (C4440 * C642 + C29123 * C646) * C4489 +
                                (C4440 * C710 + C29123 * C850) * C4437 +
                                (C4440 * C2252 + C29123 * C2255) * C4490 +
                                (C4440 * C2302 + C29123 * C2390) * C4438) *
                                   C29220 * C29196 * C29179 * C84 -
                               ((C4440 * C2303 + C29123 * C2391) * C4438 +
                                (C4440 * C2253 + C29123 * C2256) * C4490 +
                                (C4440 * C709 + C29123 * C849) * C4437 +
                                (C4440 * C641 + C29123 * C645) * C4489 +
                                (C4440 * C157 + C29123 * C290) * C4436 +
                                (C4440 * C94 + C29123 * C99) * C4488) *
                                   C29220 * C29196 * C29179 * C85 +
                               ((C4440 * C95 + C29123 * C100) * C4488 +
                                (C4440 * C158 + C29123 * C291) * C4436 +
                                (C4440 * C640 + C29123 * C644) * C4489 +
                                (C4440 * C708 + C29123 * C848) * C4437 +
                                (C4440 * C2254 + C29123 * C2257) * C4490 +
                                (C4440 * C2304 + C29123 * C2392) * C4438) *
                                   C29220 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                                C92 * C95 + C79 * C100) *
                                   C155 +
                               (C88 * C156 + C77 * C289 + C90 * C157 +
                                C78 * C290 + C92 * C158 + C79 * C291) *
                                   C29209) *
                                  C29220 * C29196 * C29179 * C84 -
                              ((C92 * C159 + C79 * C292 + C90 * C158 +
                                C78 * C291 + C88 * C157 + C77 * C290) *
                                   C29209 +
                               (C92 * C96 + C79 * C101 + C90 * C95 +
                                C78 * C100 + C88 * C94 + C77 * C99) *
                                   C155) *
                                  C29220 * C29196 * C29179 * C85 +
                              ((C88 * C95 + C77 * C100 + C90 * C96 +
                                C78 * C101 + C92 * C97 + C79 * C102) *
                                   C155 +
                               (C88 * C158 + C77 * C291 + C90 * C159 +
                                C78 * C292 + C92 * C160 + C79 * C293) *
                                   C29209) *
                                  C29220 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C155 +
            (C4440 * C156 + C29123 * C289) * C29209) *
               C8556 +
           ((C4440 * C1226 + C29123 * C1230) * C155 +
            (C4440 * C1294 + C29123 * C1434) * C29209) *
               C8557 +
           ((C4440 * C4045 + C29123 * C4048) * C155 +
            (C4440 * C4095 + C29123 * C4183) * C29209) *
               C8558) *
              C29196 * C29179 * C84 -
          (((C4440 * C4096 + C29123 * C4184) * C29209 +
            (C4440 * C4046 + C29123 * C4049) * C155) *
               C8558 +
           ((C4440 * C1293 + C29123 * C1433) * C29209 +
            (C4440 * C1225 + C29123 * C1229) * C155) *
               C8557 +
           ((C4440 * C157 + C29123 * C290) * C29209 +
            (C4440 * C94 + C29123 * C99) * C155) *
               C8556) *
              C29196 * C29179 * C85 +
          (((C4440 * C95 + C29123 * C100) * C155 +
            (C4440 * C158 + C29123 * C291) * C29209) *
               C8556 +
           ((C4440 * C1224 + C29123 * C1228) * C155 +
            (C4440 * C1292 + C29123 * C1432) * C29209) *
               C8557 +
           ((C4440 * C4047 + C29123 * C4050) * C155 +
            (C4440 * C4097 + C29123 * C4185) * C29209) *
               C8558) *
              C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[18] +=
        (-std::pow(Pi, 2.5) * ((C4605 * C93 + C4609 + C4609 + C4436 * C333 +
                                C4606 * C642 + C4610 + C4610 + C4437 * C904 +
                                C4607 * C2252 + C4611 + C4611 + C4438 * C2431) *
                                   C29123 * C29220 * C29196 * C29179 * C84 -
                               (C4607 * C2253 + C4612 + C4612 + C4438 * C2432 +
                                C4606 * C641 + C4613 + C4613 + C4437 * C903 +
                                C4605 * C94 + C4614 + C4614 + C4436 * C334) *
                                   C29123 * C29220 * C29196 * C29179 * C85 +
                               (C4605 * C95 + C4615 + C4615 + C4436 * C335 +
                                C4606 * C640 + C4616 + C4616 + C4437 * C902 +
                                C4607 * C2254 + C4617 + C4617 + C4438 * C2433) *
                                   C29123 * C29220 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C29209 * C333) * C77 + C356 * C78 +
           C357 * C79) *
              C29220 * C29196 * C29179 * C84 -
          (C358 * C79 + C357 * C78 + C356 * C77) * C29220 * C29196 * C29179 *
              C85 +
          (C357 * C77 + C358 * C78 +
           (C332 * C97 + C349 + C349 + C29209 * C337) * C79) *
              C29220 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C29209 * C333) * C29123 * C8556 +
           (C332 * C1226 + C1497 + C1497 + C29209 * C1488) * C29123 * C8557 +
           (C332 * C4045 + C4228 + C4228 + C29209 * C4224) * C29123 * C8558) *
              C29196 * C29179 * C84 -
          ((C332 * C4046 + C4229 + C4229 + C29209 * C4225) * C29123 * C8558 +
           C1504 * C29123 * C8557 + C356 * C29123 * C8556) *
              C29196 * C29179 * C85 +
          (C357 * C29123 * C8556 + C1503 * C29123 * C8557 +
           (C332 * C4047 + C4230 + C4230 + C29209 * C4226) * C29123 * C8558) *
              C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (-std::pow(Pi, 2.5) *
         (((C222 * C93 + C29220 * C223) * C4488 +
           (C222 * C156 + C29220 * C396) * C4436 +
           (C222 * C642 + C29220 * C780) * C4489 +
           (C222 * C710 + C29220 * C972) * C4437 +
           (C222 * C2252 + C29220 * C2346) * C4490 +
           (C222 * C2302 + C29220 * C2475) * C4438) *
              C29123 * C29196 * C29179 * C84 -
          ((C222 * C2303 + C29220 * C2476) * C4438 +
           (C222 * C2253 + C29220 * C2347) * C4490 + C982 * C4437 +
           C798 * C4489 + C411 * C4436 + C246 * C4488) *
              C29123 * C29196 * C29179 * C85 +
          (C248 * C4488 + C412 * C4436 + C796 * C4489 + C981 * C4437 +
           (C222 * C2254 + C29220 * C2348) * C4490 +
           (C222 * C2304 + C29220 * C2477) * C4438) *
              C29123 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C222 * C93 + C29220 * C223) * C155 +
            (C222 * C156 + C29220 * C396) * C29209) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C29196 * C29179 * C84 -
          ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
              C29196 * C29179 * C85 +
          (C417 * C77 + (C410 + C416) * C78 +
           ((C222 * C97 + C29220 * C227) * C155 +
            (C222 * C160 + C29220 * C400) * C29209) *
               C79) *
              C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8638 * C93 + C8556 * C223 + C8639 * C1226 + C8557 * C1364 +
            C8640 * C4045 + C8558 * C4139) *
               C155 +
           (C8638 * C156 + C8556 * C396 + C8639 * C1294 + C8557 * C1556 +
            C8640 * C4095 + C8558 * C4268) *
               C29209) *
              C29123 * C29196 * C29179 * C84 -
          ((C8640 * C4096 + C8558 * C4269 + C8639 * C1293 + C8557 * C1555 +
            C8638 * C157 + C8556 * C397) *
               C29209 +
           (C8640 * C4046 + C8558 * C4140 + C8639 * C1225 + C8557 * C1363 +
            C8638 * C94 + C8556 * C224) *
               C155) *
              C29123 * C29196 * C29179 * C85 +
          ((C8638 * C95 + C8556 * C225 + C8639 * C1224 + C8557 * C1362 +
            C8640 * C4047 + C8558 * C4141) *
               C155 +
           (C8638 * C158 + C8556 * C398 + C8639 * C1292 + C8557 * C1554 +
            C8640 * C4097 + C8558 * C4270) *
               C29209) *
              C29123 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (-std::pow(Pi, 2.5) * ((((C4440 * C93 + C29123 * C98) * C222 +
                                 (C4440 * C223 + C29123 * C455) * C29220) *
                                    C4436 +
                                ((C4440 * C642 + C29123 * C646) * C222 +
                                 (C4440 * C780 + C29123 * C1036) * C29220) *
                                    C4437 +
                                ((C4440 * C2252 + C29123 * C2255) * C222 +
                                 (C4440 * C2346 + C29123 * C2516) * C29220) *
                                    C4438) *
                                   C29196 * C29179 * C84 -
                               (((C4440 * C2347 + C29123 * C2517) * C29220 +
                                 (C4440 * C2253 + C29123 * C2256) * C222) *
                                    C4438 +
                                ((C4440 * C779 + C29123 * C1035) * C29220 +
                                 (C4440 * C641 + C29123 * C645) * C222) *
                                    C4437 +
                                ((C4440 * C224 + C29123 * C456) * C29220 +
                                 (C4440 * C94 + C29123 * C99) * C222) *
                                    C4436) *
                                   C29196 * C29179 * C85 +
                               (((C4440 * C95 + C29123 * C100) * C222 +
                                 (C4440 * C225 + C29123 * C457) * C29220) *
                                    C4436 +
                                ((C4440 * C640 + C29123 * C644) * C222 +
                                 (C4440 * C778 + C29123 * C1034) * C29220) *
                                    C4437 +
                                ((C4440 * C2254 + C29123 * C2257) * C222 +
                                 (C4440 * C2348 + C29123 * C2518) * C29220) *
                                    C4438) *
                                   C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                                C92 * C95 + C79 * C100) *
                                   C222 +
                               (C88 * C223 + C77 * C455 + C90 * C224 +
                                C78 * C456 + C92 * C225 + C79 * C457) *
                                   C29220) *
                                  C29209 * C29196 * C29179 * C84 -
                              ((C92 * C226 + C79 * C458 + C90 * C225 +
                                C78 * C457 + C88 * C224 + C77 * C456) *
                                   C29220 +
                               (C92 * C96 + C79 * C101 + C90 * C95 +
                                C78 * C100 + C88 * C94 + C77 * C99) *
                                   C222) *
                                  C29209 * C29196 * C29179 * C85 +
                              ((C88 * C95 + C77 * C100 + C90 * C96 +
                                C78 * C101 + C92 * C97 + C79 * C102) *
                                   C222 +
                               (C88 * C225 + C77 * C457 + C90 * C226 +
                                C78 * C458 + C92 * C227 + C79 * C459) *
                                   C29220) *
                                  C29209 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C4440 * C93 + C29123 * C98) * C8638 +
           (C4440 * C223 + C29123 * C455) * C8556 +
           (C4440 * C1226 + C29123 * C1230) * C8639 +
           (C4440 * C1364 + C29123 * C1620) * C8557 +
           (C4440 * C4045 + C29123 * C4048) * C8640 +
           (C4440 * C4139 + C29123 * C4309) * C8558) *
              C29209 * C29196 * C29179 * C84 -
          ((C4440 * C4140 + C29123 * C4310) * C8558 +
           (C4440 * C4046 + C29123 * C4049) * C8640 +
           (C4440 * C1363 + C29123 * C1619) * C8557 +
           (C4440 * C1225 + C29123 * C1229) * C8639 +
           (C4440 * C224 + C29123 * C456) * C8556 +
           (C4440 * C94 + C29123 * C99) * C8638) *
              C29209 * C29196 * C29179 * C85 +
          ((C4440 * C95 + C29123 * C100) * C8638 +
           (C4440 * C225 + C29123 * C457) * C8556 +
           (C4440 * C1224 + C29123 * C1228) * C8639 +
           (C4440 * C1362 + C29123 * C1618) * C8557 +
           (C4440 * C4047 + C29123 * C4050) * C8640 +
           (C4440 * C4141 + C29123 * C4311) * C8558) *
              C29209 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eezy[18] +=
        (-std::pow(Pi, 2.5) *
         (((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
            C4490 * C2252 + C4438 * C2302) *
               C222 +
           (C4488 * C223 + C4436 * C498 + C4489 * C780 + C4437 * C1090 +
            C4490 * C2346 + C4438 * C2557) *
               C29220) *
              C29123 * C29196 * C29179 * C84 -
          ((C4490 * C2347 + C4438 * C2558 + C4489 * C779 + C4437 * C1089 +
            C4488 * C224 + C4436 * C499) *
               C29220 +
           (C4490 * C2253 + C4438 * C2303 + C4489 * C641 + C4437 * C709 +
            C4488 * C94 + C4436 * C157) *
               C222) *
              C29123 * C29196 * C29179 * C85 +
          ((C4488 * C95 + C4436 * C158 + C4489 * C640 + C4437 * C708 +
            C4490 * C2254 + C4438 * C2304) *
               C222 +
           (C4488 * C225 + C4436 * C500 + C4489 * C778 + C4437 * C1088 +
            C4490 * C2348 + C4438 * C2559) *
               C29220) *
              C29123 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C155 * C93 + C29209 * C156) * C222 +
            (C155 * C223 + C29209 * C498) * C29220) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C29196 * C29179 * C84 -
          ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
              C29196 * C29179 * C85 +
          (C519 * C77 + (C512 + C518) * C78 +
           ((C155 * C97 + C29209 * C160) * C222 +
            (C155 * C227 + C29209 * C502) * C29220) *
               C79) *
              C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C155 * C93 + C29209 * C156) * C8638 +
           (C155 * C223 + C29209 * C498) * C8556 +
           (C155 * C1226 + C29209 * C1294) * C8639 +
           (C155 * C1364 + C29209 * C1674) * C8557 +
           (C155 * C4045 + C29209 * C4095) * C8640 +
           (C155 * C4139 + C29209 * C4350) * C8558) *
              C29123 * C29196 * C29179 * C84 -
          ((C155 * C4140 + C29209 * C4351) * C8558 +
           (C155 * C4046 + C29209 * C4096) * C8640 + C1684 * C8557 +
           C1312 * C8639 + C513 * C8556 + C179 * C8638) *
              C29123 * C29196 * C29179 * C85 +
          (C181 * C8638 + C514 * C8556 + C1310 * C8639 + C1683 * C8557 +
           (C155 * C4047 + C29209 * C4097) * C8640 +
           (C155 * C4141 + C29209 * C4352) * C8558) *
              C29123 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eezz[18] +=
        (-std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 +
           (C557 * C642 + C1163 + C1163 + C29220 * C1154) * C4437 +
           (C557 * C2252 + C2602 + C2602 + C29220 * C2598) * C4438) *
              C29123 * C29196 * C29179 * C84 -
          ((C557 * C2253 + C2603 + C2603 + C29220 * C2599) * C4438 +
           C1170 * C4437 + C581 * C4436) *
              C29123 * C29196 * C29179 * C85 +
          (C582 * C4436 + C1169 * C4437 +
           (C557 * C2254 + C2604 + C2604 + C29220 * C2600) * C4438) *
              C29123 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
           C584 * C78 + C585 * C79) *
              C29196 * C29179 * C84 -
          (C586 * C79 + C585 * C78 + C584 * C77) * C29196 * C29179 * C85 +
          (C585 * C77 + C586 * C78 +
           (C557 * C97 + C574 + C574 + C29220 * C562) * C29209 * C79) *
              C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C8869 * C93 + C8873 + C8873 + C8556 * C558 + C8870 * C1226 + C8874 +
           C8874 + C8557 * C1738 + C8871 * C4045 + C8875 + C8875 +
           C8558 * C4391) *
              C29209 * C29123 * C29196 * C29179 * C84 -
          (C8871 * C4046 + C8876 + C8876 + C8558 * C4392 + C8870 * C1225 +
           C8877 + C8877 + C8557 * C1737 + C8869 * C94 + C8878 + C8878 +
           C8556 * C559) *
              C29209 * C29123 * C29196 * C29179 * C85 +
          (C8869 * C95 + C8879 + C8879 + C8556 * C560 + C8870 * C1224 + C8880 +
           C8880 + C8557 * C1736 + C8871 * C4047 + C8881 + C8881 +
           C8558 * C4393) *
              C29209 * C29123 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
            C4848 * C4437 + C4849 * C4438) *
               C29196 * C636 -
           ((C4439 * C4819 + C4830 + C4830 + C29123 * C4823) * C29220 * C4438 +
            C4849 * C4437 + C4848 * C4436) *
               C29196 * C29287) *
              C638 +
          ((C4850 * C4436 + C4851 * C4437 +
            (C4439 * C4820 + C4835 + C4835 + C29123 * C4824) * C29220 * C4438) *
               C29196 * C29287 -
           (C4851 * C4438 + C4850 * C4437 +
            (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C29220 * C4436) *
               C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C29220 * C29209 * C29196 * C636 -
           (C91 * C640 + C653 + C653 + C79 * C648 + C89 * C641 + C654 + C654 +
            C78 * C649 + C87 * C642 + C655 + C655 + C77 * C650) *
               C29220 * C29209 * C29196 * C29287) *
              C638 +
          ((C87 * C641 + C656 + C656 + C77 * C649 + C89 * C640 + C657 + C657 +
            C78 * C648 + C91 * C643 + C658 + C658 + C79 * C651) *
               C29220 * C29209 * C29196 * C29287 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C29220 * C29209 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C8556 +
            (C4439 * C1226 + C5432 + C5432 + C29123 * C1234) * C8557 +
            (C4439 * C4045 + C8187 + C8187 + C29123 * C4051) * C8558) *
               C29209 * C29196 * C636 -
           ((C4439 * C8180 + C8188 + C8188 + C29123 * C8184) * C8558 +
            C6772 * C8557 + C4844 * C8556) *
               C29209 * C29196 * C29287) *
              C638 +
          ((C4846 * C8556 +
            (C4439 * C2655 + C5434 + C5434 + C29123 * C2661) * C8557 +
            (C4439 * C8931 + C8935 + C8935 + C29123 * C8933) * C8558) *
               C29209 * C29196 * C29287 -
           ((C4439 * C4046 + C8560 + C8560 + C29123 * C4052) * C8558 +
            (C4439 * C1225 + C5433 + C5433 + C29123 * C1233) * C8557 +
            (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C8556) *
               C29209 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexy[19] += (-std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C4440 +
                      (C4488 * C98 + C4436 * C161 + C4489 * C646 +
                       C4437 * C714 + C4490 * C2255 + C4438 * C2305) *
                          C29123) *
                         C29220 * C29196 * C636 -
                     ((C4490 * C4821 + C4438 * C4903 + C4489 * C2255 +
                       C4437 * C2305 + C4488 * C646 + C4436 * C714) *
                          C29123 +
                      (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                       C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                          C4440) *
                         C29220 * C29196 * C29287) *
                        C638 +
                    (((C4488 * C641 + C4436 * C709 + C4489 * C2253 +
                       C4437 * C2303 + C4490 * C4820 + C4438 * C4902) *
                          C4440 +
                      (C4488 * C645 + C4436 * C713 + C4489 * C2256 +
                       C4437 * C2306 + C4490 * C4822 + C4438 * C4904) *
                          C29123) *
                         C29220 * C29196 * C29287 -
                     ((C4490 * C2256 + C4438 * C2306 + C4489 * C645 +
                       C4437 * C713 + C4488 * C99 + C4436 * C162) *
                          C29123 +
                      (C4490 * C2253 + C4438 * C2303 + C4489 * C641 +
                       C4437 * C709 + C4488 * C94 + C4436 * C157) *
                          C4440) *
                         C29220 * C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C88 +
                      (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C29220 * C29196 * C636 -
                     (C725 * C79 + C726 * C92 + C727 * C78 + C728 * C90 +
                      (C155 * C646 + C29209 * C714) * C77 +
                      (C155 * C642 + C29209 * C710) * C88) *
                         C29220 * C29196 * C29287) *
                        C638 +
                    ((C728 * C88 + C727 * C77 + C726 * C90 + C725 * C78 +
                      (C155 * C643 + C29209 * C711) * C92 +
                      (C155 * C647 + C29209 * C715) * C79) *
                         C29220 * C29196 * C29287 -
                     (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                      C180 * C77 + C179 * C88) *
                         C29220 * C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C4440 +
                       (C155 * C98 + C29209 * C161) * C29123) *
                          C8556 +
                      ((C155 * C1226 + C29209 * C1294) * C4440 +
                       (C155 * C1230 + C29209 * C1298) * C29123) *
                          C8557 +
                      ((C155 * C4045 + C29209 * C4095) * C4440 +
                       (C155 * C4048 + C29209 * C4098) * C29123) *
                          C8558) *
                         C29196 * C636 -
                     (((C155 * C8182 + C29209 * C8229) * C29123 +
                       (C155 * C8180 + C29209 * C8227) * C4440) *
                          C8558 +
                      ((C155 * C2657 + C29209 * C2719) * C29123 +
                       (C155 * C2654 + C29209 * C2716) * C4440) *
                          C8557 +
                      ((C155 * C646 + C29209 * C714) * C29123 +
                       (C155 * C642 + C29209 * C710) * C4440) *
                          C8556) *
                         C29196 * C29287) *
                        C638 +
                    (((C728 * C4440 + C727 * C29123) * C8556 +
                      ((C155 * C2655 + C29209 * C2717) * C4440 +
                       (C155 * C2658 + C29209 * C2720) * C29123) *
                          C8557 +
                      ((C155 * C8931 + C29209 * C8985) * C4440 +
                       (C155 * C8932 + C29209 * C8986) * C29123) *
                          C8558) *
                         C29196 * C29287 -
                     (((C155 * C4049 + C29209 * C4099) * C29123 +
                       (C155 * C4046 + C29209 * C4096) * C4440) *
                          C8558 +
                      (C1311 * C29123 + C1312 * C4440) * C8557 +
                      (C180 * C29123 + C179 * C4440) * C8556) *
                         C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[19] += (-std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C4440 +
                       (C222 * C98 + C29220 * C228) * C29123) *
                          C4436 +
                      (C4980 + C4981) * C4437 + (C4982 + C4983) * C4438) *
                         C29196 * C636 -
                     (((C222 * C4821 + C29220 * C4957) * C29123 +
                       (C222 * C4819 + C29220 * C4955) * C4440) *
                          C4438 +
                      (C4983 + C4982) * C4437 + (C4981 + C4980) * C4436) *
                         C29196 * C29287) *
                        C638 +
                    (((C4968 + C4969) * C4436 + (C4984 + C4985) * C4437 +
                      ((C222 * C4820 + C29220 * C4956) * C4440 +
                       (C222 * C4822 + C29220 * C4958) * C29123) *
                          C4438) *
                         C29196 * C29287 -
                     ((C4985 + C4984) * C4438 + (C4969 + C4968) * C4437 +
                      (C247 * C29123 + C246 * C4440) * C4436) *
                         C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C88 +
                      (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C29209 * C29196 * C636 -
                     (C795 * C79 + C796 * C92 + C797 * C78 + C798 * C90 +
                      (C222 * C646 + C29220 * C784) * C77 +
                      (C222 * C642 + C29220 * C780) * C88) *
                         C29209 * C29196 * C29287) *
                        C638 +
                    ((C798 * C88 + C797 * C77 + C796 * C90 + C795 * C78 +
                      (C222 * C643 + C29220 * C781) * C92 +
                      (C222 * C647 + C29220 * C785) * C79) *
                         C29209 * C29196 * C29287 -
                     (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                      C247 * C77 + C246 * C88) *
                         C29209 * C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C8638 * C93 + C8556 * C223 + C8639 * C1226 +
                       C8557 * C1364 + C8640 * C4045 + C8558 * C4139) *
                          C4440 +
                      (C8638 * C98 + C8556 * C228 + C8639 * C1230 +
                       C8557 * C1368 + C8640 * C4048 + C8558 * C4142) *
                          C29123) *
                         C29209 * C29196 * C636 -
                     ((C8640 * C8182 + C8558 * C8271 + C8639 * C2657 +
                       C8557 * C2775 + C8638 * C646 + C8556 * C784) *
                          C29123 +
                      (C8640 * C8180 + C8558 * C8269 + C8639 * C2654 +
                       C8557 * C2772 + C8638 * C642 + C8556 * C780) *
                          C4440) *
                         C29209 * C29196 * C29287) *
                        C638 +
                    (((C8638 * C641 + C8556 * C779 + C8639 * C2655 +
                       C8557 * C2773 + C8640 * C8931 + C8558 * C9037) *
                          C4440 +
                      (C8638 * C645 + C8556 * C783 + C8639 * C2658 +
                       C8557 * C2776 + C8640 * C8932 + C8558 * C9038) *
                          C29123) *
                         C29209 * C29196 * C29287 -
                     ((C8640 * C4049 + C8558 * C4143 + C8639 * C1229 +
                       C8557 * C1367 + C8638 * C99 + C8556 * C229) *
                          C29123 +
                      (C8640 * C4046 + C8558 * C4140 + C8639 * C1225 +
                       C8557 * C1363 + C8638 * C94 + C8556 * C224) *
                          C4440) *
                         C29209 * C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C4488 +
            (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
            C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
               C29220 * C29196 * C636 -
           ((C4440 * C4901 + C29123 * C5035) * C4438 +
            (C4440 * C4819 + C29123 * C4821) * C4490 + C5057 * C4437 +
            C5056 * C4489 + C5055 * C4436 + C5054 * C4488) *
               C29220 * C29196 * C29287) *
              C638 +
          ((C5058 * C4488 + C5059 * C4436 + C5060 * C4489 + C5061 * C4437 +
            (C4440 * C4820 + C29123 * C4822) * C4490 +
            (C4440 * C4902 + C29123 * C5036) * C4438) *
               C29220 * C29196 * C29287 -
           (C5061 * C4438 + C5060 * C4490 + C5059 * C4437 + C5058 * C4489 +
            (C4440 * C157 + C29123 * C290) * C4436 +
            (C4440 * C94 + C29123 * C99) * C4488) *
               C29220 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                                 C92 * C95 + C79 * C100) *
                                    C155 +
                                (C88 * C156 + C77 * C289 + C90 * C157 +
                                 C78 * C290 + C92 * C158 + C79 * C291) *
                                    C29209) *
                                   C29220 * C29196 * C636 -
                               ((C92 * C708 + C79 * C848 + C90 * C709 +
                                 C78 * C849 + C88 * C710 + C77 * C850) *
                                    C29209 +
                                (C92 * C640 + C79 * C644 + C90 * C641 +
                                 C78 * C645 + C88 * C642 + C77 * C646) *
                                    C155) *
                                   C29220 * C29196 * C29287) *
                                  C638 +
                              (((C88 * C641 + C77 * C645 + C90 * C640 +
                                 C78 * C644 + C92 * C643 + C79 * C647) *
                                    C155 +
                                (C88 * C709 + C77 * C849 + C90 * C708 +
                                 C78 * C848 + C92 * C711 + C79 * C851) *
                                    C29209) *
                                   C29220 * C29196 * C29287 -
                               ((C92 * C159 + C79 * C292 + C90 * C158 +
                                 C78 * C291 + C88 * C157 + C77 * C290) *
                                    C29209 +
                                (C92 * C96 + C79 * C101 + C90 * C95 +
                                 C78 * C100 + C88 * C94 + C77 * C99) *
                                    C155) *
                                   C29220 * C29196 * C636) *
                                  C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C4440 * C93 + C29123 * C98) * C155 +
             (C4440 * C156 + C29123 * C289) * C29209) *
                C8556 +
            ((C4440 * C1226 + C29123 * C1230) * C155 +
             (C4440 * C1294 + C29123 * C1434) * C29209) *
                C8557 +
            ((C4440 * C4045 + C29123 * C4048) * C155 +
             (C4440 * C4095 + C29123 * C4183) * C29209) *
                C8558) *
               C29196 * C636 -
           (((C4440 * C8227 + C29123 * C8311) * C29209 +
             (C4440 * C8180 + C29123 * C8182) * C155) *
                C8558 +
            (C6956 * C29209 + C6957 * C155) * C8557 +
            (C5055 * C29209 + C5054 * C155) * C8556) *
               C29196 * C29287) *
              C638 +
          (((C5058 * C155 + C5059 * C29209) * C8556 +
            ((C4440 * C2655 + C29123 * C2658) * C155 +
             (C4440 * C2717 + C29123 * C2829) * C29209) *
                C8557 +
            ((C4440 * C8931 + C29123 * C8932) * C155 +
             (C4440 * C8985 + C29123 * C9089) * C29209) *
                C8558) *
               C29196 * C29287 -
           (((C4440 * C4096 + C29123 * C4184) * C29209 +
             (C4440 * C4046 + C29123 * C4049) * C155) *
                C8558 +
            ((C4440 * C1293 + C29123 * C1433) * C29209 +
             (C4440 * C1225 + C29123 * C1229) * C155) *
                C8557 +
            ((C4440 * C157 + C29123 * C290) * C29209 +
             (C4440 * C94 + C29123 * C99) * C155) *
                C8556) *
               C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (-std::pow(Pi, 2.5) *
         (((C4605 * C93 + C4609 + C4609 + C4436 * C333 + C4606 * C642 + C4610 +
            C4610 + C4437 * C904 + C4607 * C2252 + C4611 + C4611 +
            C4438 * C2431) *
               C29123 * C29220 * C29196 * C636 -
           (C4607 * C4819 + C5114 + C5114 + C4438 * C5111 + C4606 * C2252 +
            C5115 + C5115 + C4437 * C2431 + C4605 * C642 + C5116 + C5116 +
            C4436 * C904) *
               C29123 * C29220 * C29196 * C29287) *
              C638 +
          ((C4605 * C641 + C5117 + C5117 + C4436 * C903 + C4606 * C2253 +
            C5118 + C5118 + C4437 * C2432 + C4607 * C4820 + C5119 + C5119 +
            C4438 * C5112) *
               C29123 * C29220 * C29196 * C29287 -
           (C4607 * C2253 + C4612 + C4612 + C4438 * C2432 + C4606 * C641 +
            C4613 + C4613 + C4437 * C903 + C4605 * C94 + C4614 + C4614 +
            C4436 * C334) *
               C29123 * C29220 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C29220 * C29196 * C636 -
           (C919 * C79 + C920 * C78 +
            (C332 * C642 + C913 + C913 + C29209 * C904) * C77) *
               C29220 * C29196 * C29287) *
              C638 +
          ((C920 * C77 + C919 * C78 +
            (C332 * C643 + C914 + C914 + C29209 * C905) * C79) *
               C29220 * C29196 * C29287 -
           (C358 * C79 + C357 * C78 + C356 * C77) * C29220 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C29123 * C8556 +
            (C332 * C1226 + C1497 + C1497 + C29209 * C1488) * C29123 * C8557 +
            (C332 * C4045 + C4228 + C4228 + C29209 * C4224) * C29123 * C8558) *
               C29196 * C636 -
           ((C332 * C8180 + C9142 + C9142 + C29209 * C8351) * C29123 * C8558 +
            (C332 * C2654 + C2885 + C2885 + C29209 * C2881) * C29123 * C8557 +
            (C332 * C642 + C913 + C913 + C29209 * C904) * C29123 * C8556) *
               C29196 * C29287) *
              C638 +
          ((C920 * C29123 * C8556 +
            (C332 * C2655 + C2886 + C2886 + C29209 * C2882) * C29123 * C8557 +
            (C332 * C8931 + C9143 + C9143 + C29209 * C9140) * C29123 * C8558) *
               C29196 * C29287 -
           ((C332 * C4046 + C4229 + C4229 + C29209 * C4225) * C29123 * C8558 +
            C1504 * C29123 * C8557 + C356 * C29123 * C8556) *
               C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C222 * C93 + C29220 * C223) * C4488 +
            (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
            C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
               C29123 * C29196 * C636 -
           ((C222 * C4901 + C29220 * C5169) * C4438 +
            (C222 * C4819 + C29220 * C4955) * C4490 + C5179 * C4437 +
            C4976 * C4489 + C5178 * C4436 + C4974 * C4488) *
               C29123 * C29196 * C29287) *
              C638 +
          ((C798 * C4488 + C982 * C4436 + C4978 * C4489 + C5180 * C4437 +
            (C222 * C4820 + C29220 * C4956) * C4490 +
            (C222 * C4902 + C29220 * C5170) * C4438) *
               C29123 * C29196 * C29287 -
           (C5180 * C4438 + C4978 * C4490 + C982 * C4437 + C798 * C4489 +
            C411 * C4436 + C246 * C4488) *
               C29123 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C222 * C93 + C29220 * C223) * C155 +
             (C222 * C156 + C29220 * C396) * C29209) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C29196 * C636 -
           ((C983 + C977) * C79 + (C984 + C980) * C78 +
            ((C222 * C710 + C29220 * C972) * C29209 +
             (C222 * C642 + C29220 * C780) * C155) *
                C77) *
               C29196 * C29287) *
              C638 +
          (((C980 + C984) * C77 + (C977 + C983) * C78 +
            ((C222 * C643 + C29220 * C781) * C155 +
             (C222 * C711 + C29220 * C973) * C29209) *
                C79) *
               C29196 * C29287 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8638 * C93 + C8556 * C223 + C8639 * C1226 + C8557 * C1364 +
             C8640 * C4045 + C8558 * C4139) *
                C155 +
            (C8638 * C156 + C8556 * C396 + C8639 * C1294 + C8557 * C1556 +
             C8640 * C4095 + C8558 * C4268) *
                C29209) *
               C29123 * C29196 * C636 -
           ((C8640 * C8227 + C8558 * C8394 + C8639 * C2716 + C8557 * C2937 +
             C8638 * C710 + C8556 * C972) *
                C29209 +
            (C8640 * C8180 + C8558 * C8269 + C8639 * C2654 + C8557 * C2772 +
             C8638 * C642 + C8556 * C780) *
                C155) *
               C29123 * C29196 * C29287) *
              C638 +
          (((C8638 * C641 + C8556 * C779 + C8639 * C2655 + C8557 * C2773 +
             C8640 * C8931 + C8558 * C9037) *
                C155 +
            (C8638 * C709 + C8556 * C971 + C8639 * C2717 + C8557 * C2938 +
             C8640 * C8985 + C8558 * C9193) *
                C29209) *
               C29123 * C29196 * C29287 -
           ((C8640 * C4096 + C8558 * C4269 + C8639 * C1293 + C8557 * C1555 +
             C8638 * C157 + C8556 * C397) *
                C29209 +
            (C8640 * C4046 + C8558 * C4140 + C8639 * C1225 + C8557 * C1363 +
             C8638 * C94 + C8556 * C224) *
                C155) *
               C29123 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (-std::pow(Pi, 2.5) *
         (((((C4440 * C93 + C29123 * C98) * C222 +
             (C4440 * C223 + C29123 * C455) * C29220) *
                C4436 +
            (C5233 + C5249) * C4437 + (C5236 + C5250) * C4438) *
               C29196 * C636 -
           (((C4440 * C4955 + C29123 * C5230) * C29220 +
             (C4440 * C4819 + C29123 * C4821) * C222) *
                C4438 +
            (C5250 + C5236) * C4437 + (C5249 + C5233) * C4436) *
               C29196 * C29287) *
              C638 +
          (((C5239 + C5251) * C4436 + (C5242 + C5252) * C4437 +
            ((C4440 * C4820 + C29123 * C4822) * C222 +
             (C4440 * C4956 + C29123 * C5231) * C29220) *
                C4438) *
               C29196 * C29287 -
           ((C5252 + C5242) * C4438 + (C5251 + C5239) * C4437 +
            ((C4440 * C224 + C29123 * C456) * C29220 +
             (C4440 * C94 + C29123 * C99) * C222) *
                C4436) *
               C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                                 C92 * C95 + C79 * C100) *
                                    C222 +
                                (C88 * C223 + C77 * C455 + C90 * C224 +
                                 C78 * C456 + C92 * C225 + C79 * C457) *
                                    C29220) *
                                   C29209 * C29196 * C636 -
                               ((C92 * C778 + C79 * C1034 + C90 * C779 +
                                 C78 * C1035 + C88 * C780 + C77 * C1036) *
                                    C29220 +
                                (C92 * C640 + C79 * C644 + C90 * C641 +
                                 C78 * C645 + C88 * C642 + C77 * C646) *
                                    C222) *
                                   C29209 * C29196 * C29287) *
                                  C638 +
                              (((C88 * C641 + C77 * C645 + C90 * C640 +
                                 C78 * C644 + C92 * C643 + C79 * C647) *
                                    C222 +
                                (C88 * C779 + C77 * C1035 + C90 * C778 +
                                 C78 * C1034 + C92 * C781 + C79 * C1037) *
                                    C29220) *
                                   C29209 * C29196 * C29287 -
                               ((C92 * C226 + C79 * C458 + C90 * C225 +
                                 C78 * C457 + C88 * C224 + C77 * C456) *
                                    C29220 +
                                (C92 * C96 + C79 * C101 + C90 * C95 +
                                 C78 * C100 + C88 * C94 + C77 * C99) *
                                    C222) *
                                   C29209 * C29196 * C636) *
                                  C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C8638 +
            (C4440 * C223 + C29123 * C455) * C8556 +
            (C4440 * C1226 + C29123 * C1230) * C8639 +
            (C4440 * C1364 + C29123 * C1620) * C8557 +
            (C4440 * C4045 + C29123 * C4048) * C8640 +
            (C4440 * C4139 + C29123 * C4309) * C8558) *
               C29209 * C29196 * C636 -
           ((C4440 * C8269 + C29123 * C8434) * C8558 +
            (C4440 * C8180 + C29123 * C8182) * C8640 + C7127 * C8557 +
            C6957 * C8639 + C5245 * C8556 + C5054 * C8638) *
               C29209 * C29196 * C29287) *
              C638 +
          ((C5058 * C8638 + C5247 * C8556 +
            (C4440 * C2655 + C29123 * C2658) * C8639 +
            (C4440 * C2773 + C29123 * C2991) * C8557 +
            (C4440 * C8931 + C29123 * C8932) * C8640 +
            (C4440 * C9037 + C29123 * C9244) * C8558) *
               C29209 * C29196 * C29287 -
           ((C4440 * C4140 + C29123 * C4310) * C8558 +
            (C4440 * C4046 + C29123 * C4049) * C8640 +
            (C4440 * C1363 + C29123 * C1619) * C8557 +
            (C4440 * C1225 + C29123 * C1229) * C8639 +
            (C4440 * C224 + C29123 * C456) * C8556 +
            (C4440 * C94 + C29123 * C99) * C8638) *
               C29209 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezy[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
             C4490 * C2252 + C4438 * C2302) *
                C222 +
            (C4488 * C223 + C4436 * C498 + C4489 * C780 + C4437 * C1090 +
             C4490 * C2346 + C4438 * C2557) *
                C29220) *
               C29123 * C29196 * C636 -
           ((C4490 * C4955 + C4438 * C5302 + C4489 * C2346 + C4437 * C2557 +
             C4488 * C780 + C4436 * C1090) *
                C29220 +
            (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 + C4437 * C2302 +
             C4488 * C642 + C4436 * C710) *
                C222) *
               C29123 * C29196 * C29287) *
              C638 +
          (((C4488 * C641 + C4436 * C709 + C4489 * C2253 + C4437 * C2303 +
             C4490 * C4820 + C4438 * C4902) *
                C222 +
            (C4488 * C779 + C4436 * C1089 + C4489 * C2347 + C4437 * C2558 +
             C4490 * C4956 + C4438 * C5303) *
                C29220) *
               C29123 * C29196 * C29287 -
           ((C4490 * C2347 + C4438 * C2558 + C4489 * C779 + C4437 * C1089 +
             C4488 * C224 + C4436 * C499) *
                C29220 +
            (C4490 * C2253 + C4438 * C2303 + C4489 * C641 + C4437 * C709 +
             C4488 * C94 + C4436 * C157) *
                C222) *
               C29123 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C222 +
             (C155 * C223 + C29209 * C498) * C29220) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C29196 * C636 -
           ((C1101 + C1095) * C79 + (C1102 + C1098) * C78 +
            ((C155 * C780 + C29209 * C1090) * C29220 +
             (C155 * C642 + C29209 * C710) * C222) *
                C77) *
               C29196 * C29287) *
              C638 +
          (((C1098 + C1102) * C77 + (C1095 + C1101) * C78 +
            ((C155 * C643 + C29209 * C711) * C222 +
             (C155 * C781 + C29209 * C1091) * C29220) *
                C79) *
               C29196 * C29287 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C29209 * C156) * C8638 +
            (C155 * C223 + C29209 * C498) * C8556 +
            (C155 * C1226 + C29209 * C1294) * C8639 +
            (C155 * C1364 + C29209 * C1674) * C8557 +
            (C155 * C4045 + C29209 * C4095) * C8640 +
            (C155 * C4139 + C29209 * C4350) * C8558) *
               C29123 * C29196 * C636 -
           ((C155 * C8269 + C29209 * C8474) * C8558 +
            (C155 * C8180 + C29209 * C8227) * C8640 +
            (C155 * C2772 + C29209 * C3043) * C8557 +
            (C155 * C2654 + C29209 * C2716) * C8639 +
            (C155 * C780 + C29209 * C1090) * C8556 +
            (C155 * C642 + C29209 * C710) * C8638) *
               C29123 * C29196 * C29287) *
              C638 +
          ((C728 * C8638 + C1100 * C8556 +
            (C155 * C2655 + C29209 * C2717) * C8639 +
            (C155 * C2773 + C29209 * C3044) * C8557 +
            (C155 * C8931 + C29209 * C8985) * C8640 +
            (C155 * C9037 + C29209 * C9295) * C8558) *
               C29123 * C29196 * C29287 -
           ((C155 * C4140 + C29209 * C4351) * C8558 +
            (C155 * C4046 + C29209 * C4096) * C8640 + C1684 * C8557 +
            C1312 * C8639 + C513 * C8556 + C179 * C8638) *
               C29123 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
            C5372 * C4438) *
               C29123 * C29196 * C636 -
           ((C557 * C4819 + C5361 + C5361 + C29220 * C5354) * C4438 +
            C5372 * C4437 + C5371 * C4436) *
               C29123 * C29196 * C29287) *
              C638 +
          ((C1170 * C4436 + C5373 * C4437 +
            (C557 * C4820 + C5364 + C5364 + C29220 * C5355) * C4438) *
               C29123 * C29196 * C29287 -
           (C5373 * C4438 + C1170 * C4437 + C581 * C4436) * C29123 * C29196 *
               C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
            C584 * C78 + C585 * C79) *
               C29196 * C636 -
           (C1171 * C79 + C1172 * C78 +
            (C557 * C642 + C1163 + C1163 + C29220 * C1154) * C29209 * C77) *
               C29196 * C29287) *
              C638 +
          ((C1172 * C77 + C1171 * C78 +
            (C557 * C643 + C1164 + C1164 + C29220 * C1155) * C29209 * C79) *
               C29196 * C29287 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8869 * C93 + C8873 + C8873 + C8556 * C558 + C8870 * C1226 + C8874 +
            C8874 + C8557 * C1738 + C8871 * C4045 + C8875 + C8875 +
            C8558 * C4391) *
               C29209 * C29123 * C29196 * C636 -
           (C8871 * C8180 + C9348 + C9348 + C8558 * C8514 + C8870 * C2654 +
            C9349 + C9349 + C8557 * C3096 + C8869 * C642 + C9350 + C9350 +
            C8556 * C1154) *
               C29209 * C29123 * C29196 * C29287) *
              C638 +
          ((C8869 * C641 + C9351 + C9351 + C8556 * C1153 + C8870 * C2655 +
            C9352 + C9352 + C8557 * C3097 + C8871 * C8931 + C9353 + C9353 +
            C8558 * C9346) *
               C29209 * C29123 * C29196 * C29287 -
           (C8871 * C4046 + C8876 + C8876 + C8558 * C4392 + C8870 * C1225 +
            C8877 + C8877 + C8557 * C1737 + C8869 * C94 + C8878 + C8878 +
            C8556 * C559) *
               C29209 * C29123 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
            C4848 * C4437 + C4849 * C4438) *
               C1222 -
           ((C4439 * C5423 + C5430 + C5430 + C29123 * C5427) * C29220 * C4438 +
            (C4439 * C2654 + C5431 + C5431 + C29123 * C2660) * C29220 * C4437 +
            (C4439 * C1226 + C5432 + C5432 + C29123 * C1234) * C29220 * C4436) *
               C29289) *
              C29179 * C638 +
          (((C4439 * C1225 + C5433 + C5433 + C29123 * C1233) * C29220 * C4436 +
            (C4439 * C2655 + C5434 + C5434 + C29123 * C2661) * C29220 * C4437 +
            (C4439 * C5424 + C5435 + C5435 + C29123 * C5428) * C29220 * C4438) *
               C29289 -
           (C4851 * C4438 + C4850 * C4437 +
            (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C29220 * C4436) *
               C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C29220 * C29209 * C1222 -
           (C91 * C1224 + C1237 + C1237 + C79 * C1232 + C89 * C1225 + C1238 +
            C1238 + C78 * C1233 + C87 * C1226 + C1239 + C1239 + C77 * C1234) *
               C29220 * C29209 * C29289) *
              C29179 * C638 +
          ((C87 * C1225 + C1240 + C1240 + C77 * C1233 + C89 * C1224 + C1241 +
            C1241 + C78 * C1232 + C91 * C1227 + C1242 + C1242 + C79 * C1235) *
               C29220 * C29209 * C29289 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C29220 * C29209 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C8556 +
            C9428 * C8557 + C9429 * C8558) *
               C29209 * C1222 -
           ((C4439 * C9403 + C9414 + C9414 + C29123 * C9407) * C8558 +
            C9429 * C8557 + C9428 * C8556) *
               C29209 * C29289) *
              C29179 * C638 +
          ((C9430 * C8556 + C9431 * C8557 +
            (C4439 * C9404 + C9419 + C9419 + C29123 * C9408) * C8558) *
               C29209 * C29289 -
           (C9431 * C8558 + C9430 * C8557 +
            (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C8556) *
               C29209 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexy[20] += (-std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C4440 +
                      (C4488 * C98 + C4436 * C161 + C4489 * C646 +
                       C4437 * C714 + C4490 * C2255 + C4438 * C2305) *
                          C29123) *
                         C29220 * C1222 -
                     ((C4490 * C5425 + C4438 * C5487 + C4489 * C2657 +
                       C4437 * C2719 + C4488 * C1230 + C4436 * C1298) *
                          C29123 +
                      (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 +
                       C4437 * C2716 + C4488 * C1226 + C4436 * C1294) *
                          C4440) *
                         C29220 * C29289) *
                        C29179 * C638 +
                    (((C4488 * C1225 + C4436 * C1293 + C4489 * C2655 +
                       C4437 * C2717 + C4490 * C5424 + C4438 * C5486) *
                          C4440 +
                      (C4488 * C1229 + C4436 * C1297 + C4489 * C2658 +
                       C4437 * C2720 + C4490 * C5426 + C4438 * C5488) *
                          C29123) *
                         C29220 * C29289 -
                     ((C4490 * C2256 + C4438 * C2306 + C4489 * C645 +
                       C4437 * C713 + C4488 * C99 + C4436 * C162) *
                          C29123 +
                      (C4490 * C2253 + C4438 * C2303 + C4489 * C641 +
                       C4437 * C709 + C4488 * C94 + C4436 * C157) *
                          C4440) *
                         C29220 * C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C88 +
                      (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C29220 * C1222 -
                     (C1309 * C79 + C1310 * C92 + C1311 * C78 + C1312 * C90 +
                      (C155 * C1230 + C29209 * C1298) * C77 +
                      (C155 * C1226 + C29209 * C1294) * C88) *
                         C29220 * C29289) *
                        C29179 * C638 +
                    ((C1312 * C88 + C1311 * C77 + C1310 * C90 + C1309 * C78 +
                      (C155 * C1227 + C29209 * C1295) * C92 +
                      (C155 * C1231 + C29209 * C1299) * C79) *
                         C29220 * C29289 -
                     (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                      C180 * C77 + C179 * C88) *
                         C29220 * C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C4440 +
                       (C155 * C98 + C29209 * C161) * C29123) *
                          C8556 +
                      (C9506 + C9507) * C8557 + (C9508 + C9509) * C8558) *
                         C1222 -
                     (((C155 * C9405 + C29209 * C9483) * C29123 +
                       (C155 * C9403 + C29209 * C9481) * C4440) *
                          C8558 +
                      (C9509 + C9508) * C8557 + (C9507 + C9506) * C8556) *
                         C29289) *
                        C29179 * C638 +
                    (((C9494 + C9495) * C8556 + (C9510 + C9511) * C8557 +
                      ((C155 * C9404 + C29209 * C9482) * C4440 +
                       (C155 * C9406 + C29209 * C9484) * C29123) *
                          C8558) *
                         C29289 -
                     ((C9511 + C9510) * C8558 + (C9495 + C9494) * C8557 +
                      (C180 * C29123 + C179 * C4440) * C8556) *
                         C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[20] += (-std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C4440 +
                       (C222 * C98 + C29220 * C228) * C29123) *
                          C4436 +
                      (C4980 + C4981) * C4437 + (C4982 + C4983) * C4438) *
                         C1222 -
                     (((C222 * C5425 + C29220 * C5541) * C29123 +
                       (C222 * C5423 + C29220 * C5539) * C4440) *
                          C4438 +
                      ((C222 * C2657 + C29220 * C2775) * C29123 +
                       (C222 * C2654 + C29220 * C2772) * C4440) *
                          C4437 +
                      ((C222 * C1230 + C29220 * C1368) * C29123 +
                       (C222 * C1226 + C29220 * C1364) * C4440) *
                          C4436) *
                         C29289) *
                        C29179 * C638 +
                    (((C1382 * C4440 + C1381 * C29123) * C4436 +
                      ((C222 * C2655 + C29220 * C2773) * C4440 +
                       (C222 * C2658 + C29220 * C2776) * C29123) *
                          C4437 +
                      ((C222 * C5424 + C29220 * C5540) * C4440 +
                       (C222 * C5426 + C29220 * C5542) * C29123) *
                          C4438) *
                         C29289 -
                     ((C4985 + C4984) * C4438 + (C4969 + C4968) * C4437 +
                      (C247 * C29123 + C246 * C4440) * C4436) *
                         C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C88 +
                      (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C29209 * C1222 -
                     (C1379 * C79 + C1380 * C92 + C1381 * C78 + C1382 * C90 +
                      (C222 * C1230 + C29220 * C1368) * C77 +
                      (C222 * C1226 + C29220 * C1364) * C88) *
                         C29209 * C29289) *
                        C29179 * C638 +
                    ((C1382 * C88 + C1381 * C77 + C1380 * C90 + C1379 * C78 +
                      (C222 * C1227 + C29220 * C1365) * C92 +
                      (C222 * C1231 + C29220 * C1369) * C79) *
                         C29209 * C29289 -
                     (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                      C247 * C77 + C246 * C88) *
                         C29209 * C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C8638 * C93 + C8556 * C223 + C8639 * C1226 +
                       C8557 * C1364 + C8640 * C4045 + C8558 * C4139) *
                          C4440 +
                      (C8638 * C98 + C8556 * C228 + C8639 * C1230 +
                       C8557 * C1368 + C8640 * C4048 + C8558 * C4142) *
                          C29123) *
                         C29209 * C1222 -
                     ((C8640 * C9405 + C8558 * C9563 + C8639 * C4048 +
                       C8557 * C4142 + C8638 * C1230 + C8556 * C1368) *
                          C29123 +
                      (C8640 * C9403 + C8558 * C9561 + C8639 * C4045 +
                       C8557 * C4139 + C8638 * C1226 + C8556 * C1364) *
                          C4440) *
                         C29209 * C29289) *
                        C29179 * C638 +
                    (((C8638 * C1225 + C8556 * C1363 + C8639 * C4046 +
                       C8557 * C4140 + C8640 * C9404 + C8558 * C9562) *
                          C4440 +
                      (C8638 * C1229 + C8556 * C1367 + C8639 * C4049 +
                       C8557 * C4143 + C8640 * C9406 + C8558 * C9564) *
                          C29123) *
                         C29209 * C29289 -
                     ((C8640 * C4049 + C8558 * C4143 + C8639 * C1229 +
                       C8557 * C1367 + C8638 * C99 + C8556 * C229) *
                          C29123 +
                      (C8640 * C4046 + C8558 * C4140 + C8639 * C1225 +
                       C8557 * C1363 + C8638 * C94 + C8556 * C224) *
                          C4440) *
                         C29209 * C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C4488 +
            (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
            C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
               C29220 * C1222 -
           ((C4440 * C5485 + C29123 * C5593) * C4438 +
            (C4440 * C5423 + C29123 * C5425) * C4490 +
            (C4440 * C2716 + C29123 * C2828) * C4437 +
            (C4440 * C2654 + C29123 * C2657) * C4489 +
            (C4440 * C1294 + C29123 * C1434) * C4436 +
            (C4440 * C1226 + C29123 * C1230) * C4488) *
               C29220 * C29289) *
              C29179 * C638 +
          (((C4440 * C1225 + C29123 * C1229) * C4488 +
            (C4440 * C1293 + C29123 * C1433) * C4436 +
            (C4440 * C2655 + C29123 * C2658) * C4489 +
            (C4440 * C2717 + C29123 * C2829) * C4437 +
            (C4440 * C5424 + C29123 * C5426) * C4490 +
            (C4440 * C5486 + C29123 * C5594) * C4438) *
               C29220 * C29289 -
           (C5061 * C4438 + C5060 * C4490 + C5059 * C4437 + C5058 * C4489 +
            (C4440 * C157 + C29123 * C290) * C4436 +
            (C4440 * C94 + C29123 * C99) * C4488) *
               C29220 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                                 C92 * C95 + C79 * C100) *
                                    C155 +
                                (C88 * C156 + C77 * C289 + C90 * C157 +
                                 C78 * C290 + C92 * C158 + C79 * C291) *
                                    C29209) *
                                   C29220 * C1222 -
                               ((C92 * C1292 + C79 * C1432 + C90 * C1293 +
                                 C78 * C1433 + C88 * C1294 + C77 * C1434) *
                                    C29209 +
                                (C92 * C1224 + C79 * C1228 + C90 * C1225 +
                                 C78 * C1229 + C88 * C1226 + C77 * C1230) *
                                    C155) *
                                   C29220 * C29289) *
                                  C29179 * C638 +
                              (((C88 * C1225 + C77 * C1229 + C90 * C1224 +
                                 C78 * C1228 + C92 * C1227 + C79 * C1231) *
                                    C155 +
                                (C88 * C1293 + C77 * C1433 + C90 * C1292 +
                                 C78 * C1432 + C92 * C1295 + C79 * C1435) *
                                    C29209) *
                                   C29220 * C29289 -
                               ((C92 * C159 + C79 * C292 + C90 * C158 +
                                 C78 * C291 + C88 * C157 + C77 * C290) *
                                    C29209 +
                                (C92 * C96 + C79 * C101 + C90 * C95 +
                                 C78 * C100 + C88 * C94 + C77 * C99) *
                                    C155) *
                                   C29220 * C1222) *
                                  C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C4440 * C93 + C29123 * C98) * C155 +
             (C4440 * C156 + C29123 * C289) * C29209) *
                C8556 +
            (C9642 + C9643) * C8557 + (C9644 + C9645) * C8558) *
               C1222 -
           (((C4440 * C9481 + C29123 * C9615) * C29209 +
             (C4440 * C9403 + C29123 * C9405) * C155) *
                C8558 +
            (C9645 + C9644) * C8557 + (C9643 + C9642) * C8556) *
               C29289) *
              C29179 * C638 +
          (((C9646 + C9647) * C8556 + (C9648 + C9649) * C8557 +
            ((C4440 * C9404 + C29123 * C9406) * C155 +
             (C4440 * C9482 + C29123 * C9616) * C29209) *
                C8558) *
               C29289 -
           ((C9649 + C9648) * C8558 + (C9647 + C9646) * C8557 +
            ((C4440 * C157 + C29123 * C290) * C29209 +
             (C4440 * C94 + C29123 * C99) * C155) *
                C8556) *
               C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (-std::pow(Pi, 2.5) *
         (((C4605 * C93 + C4609 + C4609 + C4436 * C333 + C4606 * C642 + C4610 +
            C4610 + C4437 * C904 + C4607 * C2252 + C4611 + C4611 +
            C4438 * C2431) *
               C29123 * C29220 * C1222 -
           (C4607 * C5423 + C5648 + C5648 + C4438 * C5645 + C4606 * C2654 +
            C5649 + C5649 + C4437 * C2881 + C4605 * C1226 + C5650 + C5650 +
            C4436 * C1488) *
               C29123 * C29220 * C29289) *
              C29179 * C638 +
          ((C4605 * C1225 + C5651 + C5651 + C4436 * C1487 + C4606 * C2655 +
            C5652 + C5652 + C4437 * C2882 + C4607 * C5424 + C5653 + C5653 +
            C4438 * C5646) *
               C29123 * C29220 * C29289 -
           (C4607 * C2253 + C4612 + C4612 + C4438 * C2432 + C4606 * C641 +
            C4613 + C4613 + C4437 * C903 + C4605 * C94 + C4614 + C4614 +
            C4436 * C334) *
               C29123 * C29220 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C29220 * C1222 -
           (C1503 * C79 + C1504 * C78 +
            (C332 * C1226 + C1497 + C1497 + C29209 * C1488) * C77) *
               C29220 * C29289) *
              C29179 * C638 +
          ((C1504 * C77 + C1503 * C78 +
            (C332 * C1227 + C1498 + C1498 + C29209 * C1489) * C79) *
               C29220 * C29289 -
           (C358 * C79 + C357 * C78 + C356 * C77) * C29220 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C29123 * C8556 +
            C9720 * C8557 + C9721 * C8558) *
               C1222 -
           ((C332 * C9403 + C9706 + C9706 + C29209 * C9699) * C29123 * C8558 +
            C9721 * C8557 + C9720 * C8556) *
               C29289) *
              C29179 * C638 +
          ((C9707 * C8556 + C9722 * C8557 +
            (C332 * C9404 + C9710 + C9710 + C29209 * C9700) * C29123 * C8558) *
               C29289 -
           (C9722 * C8558 + C9707 * C8557 + C356 * C29123 * C8556) * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C222 * C93 + C29220 * C223) * C4488 +
            (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
            C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
               C29123 * C1222 -
           ((C222 * C5485 + C29220 * C5703) * C4438 +
            (C222 * C5423 + C29220 * C5539) * C4490 +
            (C222 * C2716 + C29220 * C2937) * C4437 +
            (C222 * C2654 + C29220 * C2772) * C4489 +
            (C222 * C1294 + C29220 * C1556) * C4436 +
            (C222 * C1226 + C29220 * C1364) * C4488) *
               C29123 * C29289) *
              C29179 * C638 +
          ((C1382 * C4488 + C1566 * C4436 +
            (C222 * C2655 + C29220 * C2773) * C4489 +
            (C222 * C2717 + C29220 * C2938) * C4437 +
            (C222 * C5424 + C29220 * C5540) * C4490 +
            (C222 * C5486 + C29220 * C5704) * C4438) *
               C29123 * C29289 -
           (C5180 * C4438 + C4978 * C4490 + C982 * C4437 + C798 * C4489 +
            C411 * C4436 + C246 * C4488) *
               C29123 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C222 * C93 + C29220 * C223) * C155 +
             (C222 * C156 + C29220 * C396) * C29209) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C1222 -
           ((C1567 + C1561) * C79 + (C1568 + C1564) * C78 +
            ((C222 * C1294 + C29220 * C1556) * C29209 +
             (C222 * C1226 + C29220 * C1364) * C155) *
                C77) *
               C29289) *
              C29179 * C638 +
          (((C1564 + C1568) * C77 + (C1561 + C1567) * C78 +
            ((C222 * C1227 + C29220 * C1365) * C155 +
             (C222 * C1295 + C29220 * C1557) * C29209) *
                C79) *
               C29289 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8638 * C93 + C8556 * C223 + C8639 * C1226 + C8557 * C1364 +
             C8640 * C4045 + C8558 * C4139) *
                C155 +
            (C8638 * C156 + C8556 * C396 + C8639 * C1294 + C8557 * C1556 +
             C8640 * C4095 + C8558 * C4268) *
                C29209) *
               C29123 * C1222 -
           ((C8640 * C9481 + C8558 * C9772 + C8639 * C4095 + C8557 * C4268 +
             C8638 * C1294 + C8556 * C1556) *
                C29209 +
            (C8640 * C9403 + C8558 * C9561 + C8639 * C4045 + C8557 * C4139 +
             C8638 * C1226 + C8556 * C1364) *
                C155) *
               C29123 * C29289) *
              C29179 * C638 +
          (((C8638 * C1225 + C8556 * C1363 + C8639 * C4046 + C8557 * C4140 +
             C8640 * C9404 + C8558 * C9562) *
                C155 +
            (C8638 * C1293 + C8556 * C1555 + C8639 * C4096 + C8557 * C4269 +
             C8640 * C9482 + C8558 * C9773) *
                C29209) *
               C29123 * C29289 -
           ((C8640 * C4096 + C8558 * C4269 + C8639 * C1293 + C8557 * C1555 +
             C8638 * C157 + C8556 * C397) *
                C29209 +
            (C8640 * C4046 + C8558 * C4140 + C8639 * C1225 + C8557 * C1363 +
             C8638 * C94 + C8556 * C224) *
                C155) *
               C29123 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (-std::pow(Pi, 2.5) *
         (((((C4440 * C93 + C29123 * C98) * C222 +
             (C4440 * C223 + C29123 * C455) * C29220) *
                C4436 +
            (C5233 + C5249) * C4437 + (C5236 + C5250) * C4438) *
               C1222 -
           (((C4440 * C5539 + C29123 * C5755) * C29220 +
             (C4440 * C5423 + C29123 * C5425) * C222) *
                C4438 +
            ((C4440 * C2772 + C29123 * C2990) * C29220 +
             (C4440 * C2654 + C29123 * C2657) * C222) *
                C4437 +
            ((C4440 * C1364 + C29123 * C1620) * C29220 +
             (C4440 * C1226 + C29123 * C1230) * C222) *
                C4436) *
               C29289) *
              C29179 * C638 +
          ((((C4440 * C1225 + C29123 * C1229) * C222 +
             (C4440 * C1363 + C29123 * C1619) * C29220) *
                C4436 +
            ((C4440 * C2655 + C29123 * C2658) * C222 +
             (C4440 * C2773 + C29123 * C2991) * C29220) *
                C4437 +
            ((C4440 * C5424 + C29123 * C5426) * C222 +
             (C4440 * C5540 + C29123 * C5756) * C29220) *
                C4438) *
               C29289 -
           ((C5252 + C5242) * C4438 + (C5251 + C5239) * C4437 +
            ((C4440 * C224 + C29123 * C456) * C29220 +
             (C4440 * C94 + C29123 * C99) * C222) *
                C4436) *
               C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                                 C92 * C95 + C79 * C100) *
                                    C222 +
                                (C88 * C223 + C77 * C455 + C90 * C224 +
                                 C78 * C456 + C92 * C225 + C79 * C457) *
                                    C29220) *
                                   C29209 * C1222 -
                               ((C92 * C1362 + C79 * C1618 + C90 * C1363 +
                                 C78 * C1619 + C88 * C1364 + C77 * C1620) *
                                    C29220 +
                                (C92 * C1224 + C79 * C1228 + C90 * C1225 +
                                 C78 * C1229 + C88 * C1226 + C77 * C1230) *
                                    C222) *
                                   C29209 * C29289) *
                                  C29179 * C638 +
                              (((C88 * C1225 + C77 * C1229 + C90 * C1224 +
                                 C78 * C1228 + C92 * C1227 + C79 * C1231) *
                                    C222 +
                                (C88 * C1363 + C77 * C1619 + C90 * C1362 +
                                 C78 * C1618 + C92 * C1365 + C79 * C1621) *
                                    C29220) *
                                   C29209 * C29289 -
                               ((C92 * C226 + C79 * C458 + C90 * C225 +
                                 C78 * C457 + C88 * C224 + C77 * C456) *
                                    C29220 +
                                (C92 * C96 + C79 * C101 + C90 * C95 +
                                 C78 * C100 + C88 * C94 + C77 * C99) *
                                    C222) *
                                   C29209 * C1222) *
                                  C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C8638 +
            (C4440 * C223 + C29123 * C455) * C8556 + C9634 * C8639 +
            C9835 * C8557 + C9636 * C8640 + C9836 * C8558) *
               C29209 * C1222 -
           ((C4440 * C9561 + C29123 * C9824) * C8558 +
            (C4440 * C9403 + C29123 * C9405) * C8640 + C9836 * C8557 +
            C9636 * C8639 + C9835 * C8556 + C9634 * C8638) *
               C29209 * C29289) *
              C29179 * C638 +
          ((C9638 * C8638 + C9837 * C8556 + C9640 * C8639 + C9838 * C8557 +
            (C4440 * C9404 + C29123 * C9406) * C8640 +
            (C4440 * C9562 + C29123 * C9825) * C8558) *
               C29209 * C29289 -
           (C9838 * C8558 + C9640 * C8640 + C9837 * C8557 + C9638 * C8639 +
            (C4440 * C224 + C29123 * C456) * C8556 +
            (C4440 * C94 + C29123 * C99) * C8638) *
               C29209 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezy[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
             C4490 * C2252 + C4438 * C2302) *
                C222 +
            (C4488 * C223 + C4436 * C498 + C4489 * C780 + C4437 * C1090 +
             C4490 * C2346 + C4438 * C2557) *
                C29220) *
               C29123 * C1222 -
           ((C4490 * C5539 + C4438 * C5807 + C4489 * C2772 + C4437 * C3043 +
             C4488 * C1364 + C4436 * C1674) *
                C29220 +
            (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 + C4437 * C2716 +
             C4488 * C1226 + C4436 * C1294) *
                C222) *
               C29123 * C29289) *
              C29179 * C638 +
          (((C4488 * C1225 + C4436 * C1293 + C4489 * C2655 + C4437 * C2717 +
             C4490 * C5424 + C4438 * C5486) *
                C222 +
            (C4488 * C1363 + C4436 * C1673 + C4489 * C2773 + C4437 * C3044 +
             C4490 * C5540 + C4438 * C5808) *
                C29220) *
               C29123 * C29289 -
           ((C4490 * C2347 + C4438 * C2558 + C4489 * C779 + C4437 * C1089 +
             C4488 * C224 + C4436 * C499) *
                C29220 +
            (C4490 * C2253 + C4438 * C2303 + C4489 * C641 + C4437 * C709 +
             C4488 * C94 + C4436 * C157) *
                C222) *
               C29123 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C222 +
             (C155 * C223 + C29209 * C498) * C29220) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C1222 -
           ((C1685 + C1679) * C79 + (C1686 + C1682) * C78 +
            ((C155 * C1364 + C29209 * C1674) * C29220 +
             (C155 * C1226 + C29209 * C1294) * C222) *
                C77) *
               C29289) *
              C29179 * C638 +
          (((C1682 + C1686) * C77 + (C1679 + C1685) * C78 +
            ((C155 * C1227 + C29209 * C1295) * C222 +
             (C155 * C1365 + C29209 * C1675) * C29220) *
                C79) *
               C29289 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C29209 * C156) * C8638 +
            (C155 * C223 + C29209 * C498) * C8556 + C9500 * C8639 +
            C9897 * C8557 + C9502 * C8640 + C9898 * C8558) *
               C29123 * C1222 -
           ((C155 * C9561 + C29209 * C9888) * C8558 +
            (C155 * C9403 + C29209 * C9481) * C8640 + C9898 * C8557 +
            C9502 * C8639 + C9897 * C8556 + C9500 * C8638) *
               C29123 * C29289) *
              C29179 * C638 +
          ((C1312 * C8638 + C1684 * C8556 + C9504 * C8639 + C9899 * C8557 +
            (C155 * C9404 + C29209 * C9482) * C8640 +
            (C155 * C9562 + C29209 * C9889) * C8558) *
               C29123 * C29289 -
           (C9899 * C8558 + C9504 * C8640 + C1684 * C8557 + C1312 * C8639 +
            C513 * C8556 + C179 * C8638) *
               C29123 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
            C5372 * C4438) *
               C29123 * C1222 -
           ((C557 * C5423 + C5862 + C5862 + C29220 * C5859) * C4438 +
            (C557 * C2654 + C3100 + C3100 + C29220 * C3096) * C4437 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C4436) *
               C29123 * C29289) *
              C29179 * C638 +
          ((C1754 * C4436 +
            (C557 * C2655 + C3101 + C3101 + C29220 * C3097) * C4437 +
            (C557 * C5424 + C5863 + C5863 + C29220 * C5860) * C4438) *
               C29123 * C29289 -
           (C5373 * C4438 + C1170 * C4437 + C581 * C4436) * C29123 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
            C584 * C78 + C585 * C79) *
               C1222 -
           (C1755 * C79 + C1756 * C78 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C29209 * C77) *
               C29289) *
              C29179 * C638 +
          ((C1756 * C77 + C1755 * C78 +
            (C557 * C1227 + C1748 + C1748 + C29220 * C1739) * C29209 * C79) *
               C29289 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8869 * C93 + C8873 + C8873 + C8556 * C558 + C8870 * C1226 + C8874 +
            C8874 + C8557 * C1738 + C8871 * C4045 + C8875 + C8875 +
            C8558 * C4391) *
               C29209 * C29123 * C1222 -
           (C8871 * C9403 + C9952 + C9952 + C8558 * C9949 + C8870 * C4045 +
            C9953 + C9953 + C8557 * C4391 + C8869 * C1226 + C9954 + C9954 +
            C8556 * C1738) *
               C29209 * C29123 * C29289) *
              C29179 * C638 +
          ((C8869 * C1225 + C9955 + C9955 + C8556 * C1737 + C8870 * C4046 +
            C9956 + C9956 + C8557 * C4392 + C8871 * C9404 + C9957 + C9957 +
            C8558 * C9950) *
               C29209 * C29123 * C29289 -
           (C8871 * C4046 + C8876 + C8876 + C8558 * C4392 + C8870 * C1225 +
            C8877 + C8877 + C8557 * C1737 + C8869 * C94 + C8878 + C8878 +
            C8556 * C559) *
               C29209 * C29123 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (-std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
            C4848 * C4437 + C4849 * C4438) *
               C29196 * C1806 -
           ((C4439 * C4819 + C4830 + C4830 + C29123 * C4823) * C29220 * C4438 +
            C4849 * C4437 + C4848 * C4436) *
               C29196 * C29287) *
              C1808 +
          ((C4850 * C4436 + C4851 * C4437 +
            (C4439 * C4820 + C4835 + C4835 + C29123 * C4824) * C29220 * C4438) *
               C29196 * C29287 -
           (C4851 * C4438 + C4850 * C4437 +
            (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C29220 * C4436) *
               C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C29220 * C29209 * C29196 * C1806 -
           (C91 * C640 + C653 + C653 + C79 * C648 + C89 * C641 + C654 + C654 +
            C78 * C649 + C87 * C642 + C655 + C655 + C77 * C650) *
               C29220 * C29209 * C29196 * C29287) *
              C1808 +
          ((C87 * C641 + C656 + C656 + C77 * C649 + C89 * C640 + C657 + C657 +
            C78 * C648 + C91 * C643 + C658 + C658 + C79 * C651) *
               C29220 * C29209 * C29196 * C29287 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C29220 * C29209 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C8556 +
            C9428 * C8557 + C9429 * C8558) *
               C29209 * C29196 * C1806 -
           ((C4439 * C8180 + C8188 + C8188 + C29123 * C8184) * C8558 +
            C6772 * C8557 + C4844 * C8556) *
               C29209 * C29196 * C29287) *
              C1808 +
          ((C4846 * C8556 +
            (C4439 * C2655 + C5434 + C5434 + C29123 * C2661) * C8557 +
            (C4439 * C8931 + C8935 + C8935 + C29123 * C8933) * C8558) *
               C29209 * C29196 * C29287 -
           (C9431 * C8558 + C9430 * C8557 +
            (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C8556) *
               C29209 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexy[21] += (-std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C4440 +
                      (C4488 * C98 + C4436 * C161 + C4489 * C646 +
                       C4437 * C714 + C4490 * C2255 + C4438 * C2305) *
                          C29123) *
                         C29220 * C29196 * C1806 -
                     ((C4490 * C4821 + C4438 * C4903 + C4489 * C2255 +
                       C4437 * C2305 + C4488 * C646 + C4436 * C714) *
                          C29123 +
                      (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                       C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                          C4440) *
                         C29220 * C29196 * C29287) *
                        C1808 +
                    (((C4488 * C641 + C4436 * C709 + C4489 * C2253 +
                       C4437 * C2303 + C4490 * C4820 + C4438 * C4902) *
                          C4440 +
                      (C4488 * C645 + C4436 * C713 + C4489 * C2256 +
                       C4437 * C2306 + C4490 * C4822 + C4438 * C4904) *
                          C29123) *
                         C29220 * C29196 * C29287 -
                     ((C4490 * C2256 + C4438 * C2306 + C4489 * C645 +
                       C4437 * C713 + C4488 * C99 + C4436 * C162) *
                          C29123 +
                      (C4490 * C2253 + C4438 * C2303 + C4489 * C641 +
                       C4437 * C709 + C4488 * C94 + C4436 * C157) *
                          C4440) *
                         C29220 * C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C88 +
                      (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C29220 * C29196 * C1806 -
                     (C725 * C79 + C726 * C92 + C727 * C78 + C728 * C90 +
                      (C155 * C646 + C29209 * C714) * C77 +
                      (C155 * C642 + C29209 * C710) * C88) *
                         C29220 * C29196 * C29287) *
                        C1808 +
                    ((C728 * C88 + C727 * C77 + C726 * C90 + C725 * C78 +
                      (C155 * C643 + C29209 * C711) * C92 +
                      (C155 * C647 + C29209 * C715) * C79) *
                         C29220 * C29196 * C29287 -
                     (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                      C180 * C77 + C179 * C88) *
                         C29220 * C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C4440 +
                       (C155 * C98 + C29209 * C161) * C29123) *
                          C8556 +
                      (C9506 + C9507) * C8557 + (C9508 + C9509) * C8558) *
                         C29196 * C1806 -
                     (((C155 * C8182 + C29209 * C8229) * C29123 +
                       (C155 * C8180 + C29209 * C8227) * C4440) *
                          C8558 +
                      ((C155 * C2657 + C29209 * C2719) * C29123 +
                       (C155 * C2654 + C29209 * C2716) * C4440) *
                          C8557 +
                      ((C155 * C646 + C29209 * C714) * C29123 +
                       (C155 * C642 + C29209 * C710) * C4440) *
                          C8556) *
                         C29196 * C29287) *
                        C1808 +
                    (((C728 * C4440 + C727 * C29123) * C8556 +
                      ((C155 * C2655 + C29209 * C2717) * C4440 +
                       (C155 * C2658 + C29209 * C2720) * C29123) *
                          C8557 +
                      ((C155 * C8931 + C29209 * C8985) * C4440 +
                       (C155 * C8932 + C29209 * C8986) * C29123) *
                          C8558) *
                         C29196 * C29287 -
                     ((C9511 + C9510) * C8558 + (C9495 + C9494) * C8557 +
                      (C180 * C29123 + C179 * C4440) * C8556) *
                         C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[21] += (-std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C4440 +
                       (C222 * C98 + C29220 * C228) * C29123) *
                          C4436 +
                      (C4980 + C4981) * C4437 + (C4982 + C4983) * C4438) *
                         C29196 * C1806 -
                     (((C222 * C4821 + C29220 * C4957) * C29123 +
                       (C222 * C4819 + C29220 * C4955) * C4440) *
                          C4438 +
                      (C4983 + C4982) * C4437 + (C4981 + C4980) * C4436) *
                         C29196 * C29287) *
                        C1808 +
                    (((C4968 + C4969) * C4436 + (C4984 + C4985) * C4437 +
                      ((C222 * C4820 + C29220 * C4956) * C4440 +
                       (C222 * C4822 + C29220 * C4958) * C29123) *
                          C4438) *
                         C29196 * C29287 -
                     ((C4985 + C4984) * C4438 + (C4969 + C4968) * C4437 +
                      (C247 * C29123 + C246 * C4440) * C4436) *
                         C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C88 +
                      (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C29209 * C29196 * C1806 -
                     (C795 * C79 + C796 * C92 + C797 * C78 + C798 * C90 +
                      (C222 * C646 + C29220 * C784) * C77 +
                      (C222 * C642 + C29220 * C780) * C88) *
                         C29209 * C29196 * C29287) *
                        C1808 +
                    ((C798 * C88 + C797 * C77 + C796 * C90 + C795 * C78 +
                      (C222 * C643 + C29220 * C781) * C92 +
                      (C222 * C647 + C29220 * C785) * C79) *
                         C29209 * C29196 * C29287 -
                     (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                      C247 * C77 + C246 * C88) *
                         C29209 * C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C8638 * C93 + C8556 * C223 + C8639 * C1226 +
                       C8557 * C1364 + C8640 * C4045 + C8558 * C4139) *
                          C4440 +
                      (C8638 * C98 + C8556 * C228 + C8639 * C1230 +
                       C8557 * C1368 + C8640 * C4048 + C8558 * C4142) *
                          C29123) *
                         C29209 * C29196 * C1806 -
                     ((C8640 * C8182 + C8558 * C8271 + C8639 * C2657 +
                       C8557 * C2775 + C8638 * C646 + C8556 * C784) *
                          C29123 +
                      (C8640 * C8180 + C8558 * C8269 + C8639 * C2654 +
                       C8557 * C2772 + C8638 * C642 + C8556 * C780) *
                          C4440) *
                         C29209 * C29196 * C29287) *
                        C1808 +
                    (((C8638 * C641 + C8556 * C779 + C8639 * C2655 +
                       C8557 * C2773 + C8640 * C8931 + C8558 * C9037) *
                          C4440 +
                      (C8638 * C645 + C8556 * C783 + C8639 * C2658 +
                       C8557 * C2776 + C8640 * C8932 + C8558 * C9038) *
                          C29123) *
                         C29209 * C29196 * C29287 -
                     ((C8640 * C4049 + C8558 * C4143 + C8639 * C1229 +
                       C8557 * C1367 + C8638 * C99 + C8556 * C229) *
                          C29123 +
                      (C8640 * C4046 + C8558 * C4140 + C8639 * C1225 +
                       C8557 * C1363 + C8638 * C94 + C8556 * C224) *
                          C4440) *
                         C29209 * C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (-std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C4488 +
            (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
            C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
               C29220 * C29196 * C1806 -
           ((C4440 * C4901 + C29123 * C5035) * C4438 +
            (C4440 * C4819 + C29123 * C4821) * C4490 + C5057 * C4437 +
            C5056 * C4489 + C5055 * C4436 + C5054 * C4488) *
               C29220 * C29196 * C29287) *
              C1808 +
          ((C5058 * C4488 + C5059 * C4436 + C5060 * C4489 + C5061 * C4437 +
            (C4440 * C4820 + C29123 * C4822) * C4490 +
            (C4440 * C4902 + C29123 * C5036) * C4438) *
               C29220 * C29196 * C29287 -
           (C5061 * C4438 + C5060 * C4490 + C5059 * C4437 + C5058 * C4489 +
            (C4440 * C157 + C29123 * C290) * C4436 +
            (C4440 * C94 + C29123 * C99) * C4488) *
               C29220 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                                 C92 * C95 + C79 * C100) *
                                    C155 +
                                (C88 * C156 + C77 * C289 + C90 * C157 +
                                 C78 * C290 + C92 * C158 + C79 * C291) *
                                    C29209) *
                                   C29220 * C29196 * C1806 -
                               ((C92 * C708 + C79 * C848 + C90 * C709 +
                                 C78 * C849 + C88 * C710 + C77 * C850) *
                                    C29209 +
                                (C92 * C640 + C79 * C644 + C90 * C641 +
                                 C78 * C645 + C88 * C642 + C77 * C646) *
                                    C155) *
                                   C29220 * C29196 * C29287) *
                                  C1808 +
                              (((C88 * C641 + C77 * C645 + C90 * C640 +
                                 C78 * C644 + C92 * C643 + C79 * C647) *
                                    C155 +
                                (C88 * C709 + C77 * C849 + C90 * C708 +
                                 C78 * C848 + C92 * C711 + C79 * C851) *
                                    C29209) *
                                   C29220 * C29196 * C29287 -
                               ((C92 * C159 + C79 * C292 + C90 * C158 +
                                 C78 * C291 + C88 * C157 + C77 * C290) *
                                    C29209 +
                                (C92 * C96 + C79 * C101 + C90 * C95 +
                                 C78 * C100 + C88 * C94 + C77 * C99) *
                                    C155) *
                                   C29220 * C29196 * C1806) *
                                  C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C4440 * C93 + C29123 * C98) * C155 +
             (C4440 * C156 + C29123 * C289) * C29209) *
                C8556 +
            (C9642 + C9643) * C8557 + (C9644 + C9645) * C8558) *
               C29196 * C1806 -
           (((C4440 * C8227 + C29123 * C8311) * C29209 +
             (C4440 * C8180 + C29123 * C8182) * C155) *
                C8558 +
            (C6956 * C29209 + C6957 * C155) * C8557 +
            (C5055 * C29209 + C5054 * C155) * C8556) *
               C29196 * C29287) *
              C1808 +
          (((C5058 * C155 + C5059 * C29209) * C8556 +
            ((C4440 * C2655 + C29123 * C2658) * C155 +
             (C4440 * C2717 + C29123 * C2829) * C29209) *
                C8557 +
            ((C4440 * C8931 + C29123 * C8932) * C155 +
             (C4440 * C8985 + C29123 * C9089) * C29209) *
                C8558) *
               C29196 * C29287 -
           ((C9649 + C9648) * C8558 + (C9647 + C9646) * C8557 +
            ((C4440 * C157 + C29123 * C290) * C29209 +
             (C4440 * C94 + C29123 * C99) * C155) *
                C8556) *
               C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (-std::pow(Pi, 2.5) *
         (((C4605 * C93 + C4609 + C4609 + C4436 * C333 + C4606 * C642 + C4610 +
            C4610 + C4437 * C904 + C4607 * C2252 + C4611 + C4611 +
            C4438 * C2431) *
               C29123 * C29220 * C29196 * C1806 -
           (C4607 * C4819 + C5114 + C5114 + C4438 * C5111 + C4606 * C2252 +
            C5115 + C5115 + C4437 * C2431 + C4605 * C642 + C5116 + C5116 +
            C4436 * C904) *
               C29123 * C29220 * C29196 * C29287) *
              C1808 +
          ((C4605 * C641 + C5117 + C5117 + C4436 * C903 + C4606 * C2253 +
            C5118 + C5118 + C4437 * C2432 + C4607 * C4820 + C5119 + C5119 +
            C4438 * C5112) *
               C29123 * C29220 * C29196 * C29287 -
           (C4607 * C2253 + C4612 + C4612 + C4438 * C2432 + C4606 * C641 +
            C4613 + C4613 + C4437 * C903 + C4605 * C94 + C4614 + C4614 +
            C4436 * C334) *
               C29123 * C29220 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C29220 * C29196 * C1806 -
           (C919 * C79 + C920 * C78 +
            (C332 * C642 + C913 + C913 + C29209 * C904) * C77) *
               C29220 * C29196 * C29287) *
              C1808 +
          ((C920 * C77 + C919 * C78 +
            (C332 * C643 + C914 + C914 + C29209 * C905) * C79) *
               C29220 * C29196 * C29287 -
           (C358 * C79 + C357 * C78 + C356 * C77) * C29220 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C29123 * C8556 +
            C9720 * C8557 + C9721 * C8558) *
               C29196 * C1806 -
           ((C332 * C8180 + C9142 + C9142 + C29209 * C8351) * C29123 * C8558 +
            (C332 * C2654 + C2885 + C2885 + C29209 * C2881) * C29123 * C8557 +
            (C332 * C642 + C913 + C913 + C29209 * C904) * C29123 * C8556) *
               C29196 * C29287) *
              C1808 +
          ((C920 * C29123 * C8556 +
            (C332 * C2655 + C2886 + C2886 + C29209 * C2882) * C29123 * C8557 +
            (C332 * C8931 + C9143 + C9143 + C29209 * C9140) * C29123 * C8558) *
               C29196 * C29287 -
           (C9722 * C8558 + C9707 * C8557 + C356 * C29123 * C8556) * C29196 *
               C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (-std::pow(Pi, 2.5) *
         ((((C222 * C93 + C29220 * C223) * C4488 +
            (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
            C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
               C29123 * C29196 * C1806 -
           ((C222 * C4901 + C29220 * C5169) * C4438 +
            (C222 * C4819 + C29220 * C4955) * C4490 + C5179 * C4437 +
            C4976 * C4489 + C5178 * C4436 + C4974 * C4488) *
               C29123 * C29196 * C29287) *
              C1808 +
          ((C798 * C4488 + C982 * C4436 + C4978 * C4489 + C5180 * C4437 +
            (C222 * C4820 + C29220 * C4956) * C4490 +
            (C222 * C4902 + C29220 * C5170) * C4438) *
               C29123 * C29196 * C29287 -
           (C5180 * C4438 + C4978 * C4490 + C982 * C4437 + C798 * C4489 +
            C411 * C4436 + C246 * C4488) *
               C29123 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C222 * C93 + C29220 * C223) * C155 +
             (C222 * C156 + C29220 * C396) * C29209) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C29196 * C1806 -
           ((C983 + C977) * C79 + (C984 + C980) * C78 +
            ((C222 * C710 + C29220 * C972) * C29209 +
             (C222 * C642 + C29220 * C780) * C155) *
                C77) *
               C29196 * C29287) *
              C1808 +
          (((C980 + C984) * C77 + (C977 + C983) * C78 +
            ((C222 * C643 + C29220 * C781) * C155 +
             (C222 * C711 + C29220 * C973) * C29209) *
                C79) *
               C29196 * C29287 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8638 * C93 + C8556 * C223 + C8639 * C1226 + C8557 * C1364 +
             C8640 * C4045 + C8558 * C4139) *
                C155 +
            (C8638 * C156 + C8556 * C396 + C8639 * C1294 + C8557 * C1556 +
             C8640 * C4095 + C8558 * C4268) *
                C29209) *
               C29123 * C29196 * C1806 -
           ((C8640 * C8227 + C8558 * C8394 + C8639 * C2716 + C8557 * C2937 +
             C8638 * C710 + C8556 * C972) *
                C29209 +
            (C8640 * C8180 + C8558 * C8269 + C8639 * C2654 + C8557 * C2772 +
             C8638 * C642 + C8556 * C780) *
                C155) *
               C29123 * C29196 * C29287) *
              C1808 +
          (((C8638 * C641 + C8556 * C779 + C8639 * C2655 + C8557 * C2773 +
             C8640 * C8931 + C8558 * C9037) *
                C155 +
            (C8638 * C709 + C8556 * C971 + C8639 * C2717 + C8557 * C2938 +
             C8640 * C8985 + C8558 * C9193) *
                C29209) *
               C29123 * C29196 * C29287 -
           ((C8640 * C4096 + C8558 * C4269 + C8639 * C1293 + C8557 * C1555 +
             C8638 * C157 + C8556 * C397) *
                C29209 +
            (C8640 * C4046 + C8558 * C4140 + C8639 * C1225 + C8557 * C1363 +
             C8638 * C94 + C8556 * C224) *
                C155) *
               C29123 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezx[21] +=
        (-std::pow(Pi, 2.5) *
         (((((C4440 * C93 + C29123 * C98) * C222 +
             (C4440 * C223 + C29123 * C455) * C29220) *
                C4436 +
            (C5233 + C5249) * C4437 + (C5236 + C5250) * C4438) *
               C29196 * C1806 -
           (((C4440 * C4955 + C29123 * C5230) * C29220 +
             (C4440 * C4819 + C29123 * C4821) * C222) *
                C4438 +
            (C5250 + C5236) * C4437 + (C5249 + C5233) * C4436) *
               C29196 * C29287) *
              C1808 +
          (((C5239 + C5251) * C4436 + (C5242 + C5252) * C4437 +
            ((C4440 * C4820 + C29123 * C4822) * C222 +
             (C4440 * C4956 + C29123 * C5231) * C29220) *
                C4438) *
               C29196 * C29287 -
           ((C5252 + C5242) * C4438 + (C5251 + C5239) * C4437 +
            ((C4440 * C224 + C29123 * C456) * C29220 +
             (C4440 * C94 + C29123 * C99) * C222) *
                C4436) *
               C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                                 C92 * C95 + C79 * C100) *
                                    C222 +
                                (C88 * C223 + C77 * C455 + C90 * C224 +
                                 C78 * C456 + C92 * C225 + C79 * C457) *
                                    C29220) *
                                   C29209 * C29196 * C1806 -
                               ((C92 * C778 + C79 * C1034 + C90 * C779 +
                                 C78 * C1035 + C88 * C780 + C77 * C1036) *
                                    C29220 +
                                (C92 * C640 + C79 * C644 + C90 * C641 +
                                 C78 * C645 + C88 * C642 + C77 * C646) *
                                    C222) *
                                   C29209 * C29196 * C29287) *
                                  C1808 +
                              (((C88 * C641 + C77 * C645 + C90 * C640 +
                                 C78 * C644 + C92 * C643 + C79 * C647) *
                                    C222 +
                                (C88 * C779 + C77 * C1035 + C90 * C778 +
                                 C78 * C1034 + C92 * C781 + C79 * C1037) *
                                    C29220) *
                                   C29209 * C29196 * C29287 -
                               ((C92 * C226 + C79 * C458 + C90 * C225 +
                                 C78 * C457 + C88 * C224 + C77 * C456) *
                                    C29220 +
                                (C92 * C96 + C79 * C101 + C90 * C95 +
                                 C78 * C100 + C88 * C94 + C77 * C99) *
                                    C222) *
                                   C29209 * C29196 * C1806) *
                                  C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C8638 +
            (C4440 * C223 + C29123 * C455) * C8556 + C9634 * C8639 +
            C9835 * C8557 + C9636 * C8640 + C9836 * C8558) *
               C29209 * C29196 * C1806 -
           ((C4440 * C8269 + C29123 * C8434) * C8558 +
            (C4440 * C8180 + C29123 * C8182) * C8640 + C7127 * C8557 +
            C6957 * C8639 + C5245 * C8556 + C5054 * C8638) *
               C29209 * C29196 * C29287) *
              C1808 +
          ((C5058 * C8638 + C5247 * C8556 +
            (C4440 * C2655 + C29123 * C2658) * C8639 +
            (C4440 * C2773 + C29123 * C2991) * C8557 +
            (C4440 * C8931 + C29123 * C8932) * C8640 +
            (C4440 * C9037 + C29123 * C9244) * C8558) *
               C29209 * C29196 * C29287 -
           (C9838 * C8558 + C9640 * C8640 + C9837 * C8557 + C9638 * C8639 +
            (C4440 * C224 + C29123 * C456) * C8556 +
            (C4440 * C94 + C29123 * C99) * C8638) *
               C29209 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (-std::pow(Pi, 2.5) *
         ((((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
             C4490 * C2252 + C4438 * C2302) *
                C222 +
            (C4488 * C223 + C4436 * C498 + C4489 * C780 + C4437 * C1090 +
             C4490 * C2346 + C4438 * C2557) *
                C29220) *
               C29123 * C29196 * C1806 -
           ((C4490 * C4955 + C4438 * C5302 + C4489 * C2346 + C4437 * C2557 +
             C4488 * C780 + C4436 * C1090) *
                C29220 +
            (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 + C4437 * C2302 +
             C4488 * C642 + C4436 * C710) *
                C222) *
               C29123 * C29196 * C29287) *
              C1808 +
          (((C4488 * C641 + C4436 * C709 + C4489 * C2253 + C4437 * C2303 +
             C4490 * C4820 + C4438 * C4902) *
                C222 +
            (C4488 * C779 + C4436 * C1089 + C4489 * C2347 + C4437 * C2558 +
             C4490 * C4956 + C4438 * C5303) *
                C29220) *
               C29123 * C29196 * C29287 -
           ((C4490 * C2347 + C4438 * C2558 + C4489 * C779 + C4437 * C1089 +
             C4488 * C224 + C4436 * C499) *
                C29220 +
            (C4490 * C2253 + C4438 * C2303 + C4489 * C641 + C4437 * C709 +
             C4488 * C94 + C4436 * C157) *
                C222) *
               C29123 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C222 +
             (C155 * C223 + C29209 * C498) * C29220) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C29196 * C1806 -
           ((C1101 + C1095) * C79 + (C1102 + C1098) * C78 +
            ((C155 * C780 + C29209 * C1090) * C29220 +
             (C155 * C642 + C29209 * C710) * C222) *
                C77) *
               C29196 * C29287) *
              C1808 +
          (((C1098 + C1102) * C77 + (C1095 + C1101) * C78 +
            ((C155 * C643 + C29209 * C711) * C222 +
             (C155 * C781 + C29209 * C1091) * C29220) *
                C79) *
               C29196 * C29287 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C29209 * C156) * C8638 +
            (C155 * C223 + C29209 * C498) * C8556 + C9500 * C8639 +
            C9897 * C8557 + C9502 * C8640 + C9898 * C8558) *
               C29123 * C29196 * C1806 -
           ((C155 * C8269 + C29209 * C8474) * C8558 +
            (C155 * C8180 + C29209 * C8227) * C8640 +
            (C155 * C2772 + C29209 * C3043) * C8557 +
            (C155 * C2654 + C29209 * C2716) * C8639 +
            (C155 * C780 + C29209 * C1090) * C8556 +
            (C155 * C642 + C29209 * C710) * C8638) *
               C29123 * C29196 * C29287) *
              C1808 +
          ((C728 * C8638 + C1100 * C8556 +
            (C155 * C2655 + C29209 * C2717) * C8639 +
            (C155 * C2773 + C29209 * C3044) * C8557 +
            (C155 * C8931 + C29209 * C8985) * C8640 +
            (C155 * C9037 + C29209 * C9295) * C8558) *
               C29123 * C29196 * C29287 -
           (C9899 * C8558 + C9504 * C8640 + C1684 * C8557 + C1312 * C8639 +
            C513 * C8556 + C179 * C8638) *
               C29123 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (-std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
            C5372 * C4438) *
               C29123 * C29196 * C1806 -
           ((C557 * C4819 + C5361 + C5361 + C29220 * C5354) * C4438 +
            C5372 * C4437 + C5371 * C4436) *
               C29123 * C29196 * C29287) *
              C1808 +
          ((C1170 * C4436 + C5373 * C4437 +
            (C557 * C4820 + C5364 + C5364 + C29220 * C5355) * C4438) *
               C29123 * C29196 * C29287 -
           (C5373 * C4438 + C1170 * C4437 + C581 * C4436) * C29123 * C29196 *
               C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
            C584 * C78 + C585 * C79) *
               C29196 * C1806 -
           (C1171 * C79 + C1172 * C78 +
            (C557 * C642 + C1163 + C1163 + C29220 * C1154) * C29209 * C77) *
               C29196 * C29287) *
              C1808 +
          ((C1172 * C77 + C1171 * C78 +
            (C557 * C643 + C1164 + C1164 + C29220 * C1155) * C29209 * C79) *
               C29196 * C29287 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8869 * C93 + C8873 + C8873 + C8556 * C558 + C8870 * C1226 + C8874 +
            C8874 + C8557 * C1738 + C8871 * C4045 + C8875 + C8875 +
            C8558 * C4391) *
               C29209 * C29123 * C29196 * C1806 -
           (C8871 * C8180 + C9348 + C9348 + C8558 * C8514 + C8870 * C2654 +
            C9349 + C9349 + C8557 * C3096 + C8869 * C642 + C9350 + C9350 +
            C8556 * C1154) *
               C29209 * C29123 * C29196 * C29287) *
              C1808 +
          ((C8869 * C641 + C9351 + C9351 + C8556 * C1153 + C8870 * C2655 +
            C9352 + C9352 + C8557 * C3097 + C8871 * C8931 + C9353 + C9353 +
            C8558 * C9346) *
               C29209 * C29123 * C29196 * C29287 -
           (C8871 * C4046 + C8876 + C8876 + C8558 * C4392 + C8870 * C1225 +
            C8877 + C8877 + C8557 * C1737 + C8869 * C94 + C8878 + C8878 +
            C8556 * C559) *
               C29209 * C29123 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::pow(Pi, 2.5) *
         (((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
           C4848 * C4437 + C4849 * C4438) *
              C29196 * C2248 -
          (C6361 * C4438 + C4849 * C4437 + C4848 * C4436) * C29196 * C2249 +
          (C4849 * C4436 + C6361 * C4437 +
           (C4439 * C6351 + C6357 + C6357 + C29123 * C6353) * C29220 * C4438) *
              C29196 * C2250) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C29220 * C29209 * C29196 * C2248 -
          (C91 * C640 + C653 + C653 + C79 * C648 + C89 * C641 + C654 + C654 +
           C78 * C649 + C87 * C642 + C655 + C655 + C77 * C650) *
              C29220 * C29209 * C29196 * C2249 +
          (C87 * C2252 + C2262 + C2262 + C77 * C2258 + C89 * C2253 + C2263 +
           C2263 + C78 * C2259 + C91 * C2254 + C2264 + C2264 + C79 * C2260) *
              C29220 * C29209 * C29196 * C2250) *
         C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C8556 +
           C9428 * C8557 + C9429 * C8558) *
              C29209 * C29196 * C2248 -
          ((C4439 * C8180 + C8188 + C8188 + C29123 * C8184) * C8558 +
           C6772 * C8557 + C4844 * C8556) *
              C29209 * C29196 * C2249 +
          (C4845 * C8556 + C6771 * C8557 +
           (C4439 * C8181 + C8189 + C8189 + C29123 * C8185) * C8558) *
              C29209 * C29196 * C2250) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] += (-std::pow(Pi, 2.5) *
                   (((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
                      C4490 * C2252 + C4438 * C2302) *
                         C4440 +
                     (C4488 * C98 + C4436 * C161 + C4489 * C646 + C4437 * C714 +
                      C4490 * C2255 + C4438 * C2305) *
                         C29123) *
                        C29220 * C29196 * C2248 -
                    ((C4490 * C4821 + C4438 * C4903 + C4489 * C2255 +
                      C4437 * C2305 + C4488 * C646 + C4436 * C714) *
                         C29123 +
                     (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                      C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                         C4440) *
                        C29220 * C29196 * C2249 +
                    ((C4488 * C2252 + C4436 * C2302 + C4489 * C4819 +
                      C4437 * C4901 + C4490 * C6351 + C4438 * C6399) *
                         C4440 +
                     (C4488 * C2255 + C4436 * C2305 + C4489 * C4821 +
                      C4437 * C4903 + C4490 * C6352 + C4438 * C6400) *
                         C29123) *
                        C29220 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C155 * C93 + C29209 * C156) * C88 +
                     (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C29220 * C29196 * C2248 -
                    (C725 * C79 + C726 * C92 + C727 * C78 + C728 * C90 +
                     (C155 * C646 + C29209 * C714) * C77 +
                     (C155 * C642 + C29209 * C710) * C88) *
                        C29220 * C29196 * C2249 +
                    ((C155 * C2252 + C29209 * C2302) * C88 +
                     (C155 * C2255 + C29209 * C2305) * C77 +
                     (C155 * C2253 + C29209 * C2303) * C90 +
                     (C155 * C2256 + C29209 * C2306) * C78 +
                     (C155 * C2254 + C29209 * C2304) * C92 +
                     (C155 * C2257 + C29209 * C2307) * C79) *
                        C29220 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C4440 +
                      (C155 * C98 + C29209 * C161) * C29123) *
                         C8556 +
                     (C9506 + C9507) * C8557 + (C9508 + C9509) * C8558) *
                        C29196 * C2248 -
                    (((C155 * C8182 + C29209 * C8229) * C29123 +
                      (C155 * C8180 + C29209 * C8227) * C4440) *
                         C8558 +
                     ((C155 * C2657 + C29209 * C2719) * C29123 +
                      (C155 * C2654 + C29209 * C2716) * C4440) *
                         C8557 +
                     ((C155 * C646 + C29209 * C714) * C29123 +
                      (C155 * C642 + C29209 * C710) * C4440) *
                         C8556) *
                        C29196 * C2249 +
                    (((C155 * C2252 + C29209 * C2302) * C4440 +
                      (C155 * C2255 + C29209 * C2305) * C29123) *
                         C8556 +
                     ((C155 * C5423 + C29209 * C5485) * C4440 +
                      (C155 * C5425 + C29209 * C5487) * C29123) *
                         C8557 +
                     ((C155 * C8181 + C29209 * C8228) * C4440 +
                      (C155 * C8183 + C29209 * C8230) * C29123) *
                         C8558) *
                        C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eexz[22] += (-std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C4440 +
                      (C222 * C98 + C29220 * C228) * C29123) *
                         C4436 +
                     (C4980 + C4981) * C4437 + C6442 * C4438) *
                        C29196 * C2248 -
                    ((C6449 + C6450) * C4438 + (C4983 + C4982) * C4437 +
                     (C4981 + C4980) * C4436) *
                        C29196 * C2249 +
                    (C6442 * C4436 + (C6450 + C6449) * C4437 +
                     ((C222 * C6351 + C29220 * C6439) * C4440 +
                      (C222 * C6352 + C29220 * C6440) * C29123) *
                         C4438) *
                        C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C222 * C93 + C29220 * C223) * C88 +
                     (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C29209 * C29196 * C2248 -
                    (C795 * C79 + C796 * C92 + C797 * C78 + C798 * C90 +
                     (C222 * C646 + C29220 * C784) * C77 +
                     (C222 * C642 + C29220 * C780) * C88) *
                        C29209 * C29196 * C2249 +
                    ((C222 * C2252 + C29220 * C2346) * C88 +
                     (C222 * C2255 + C29220 * C2349) * C77 +
                     (C222 * C2253 + C29220 * C2347) * C90 +
                     (C222 * C2256 + C29220 * C2350) * C78 +
                     (C222 * C2254 + C29220 * C2348) * C92 +
                     (C222 * C2257 + C29220 * C2351) * C79) *
                        C29209 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C8638 * C93 + C8556 * C223 + C8639 * C1226 +
                      C8557 * C1364 + C8640 * C4045 + C8558 * C4139) *
                         C4440 +
                     (C8638 * C98 + C8556 * C228 + C8639 * C1230 +
                      C8557 * C1368 + C8640 * C4048 + C8558 * C4142) *
                         C29123) *
                        C29209 * C29196 * C2248 -
                    ((C8640 * C8182 + C8558 * C8271 + C8639 * C2657 +
                      C8557 * C2775 + C8638 * C646 + C8556 * C784) *
                         C29123 +
                     (C8640 * C8180 + C8558 * C8269 + C8639 * C2654 +
                      C8557 * C2772 + C8638 * C642 + C8556 * C780) *
                         C4440) *
                        C29209 * C29196 * C2249 +
                    ((C8638 * C2252 + C8556 * C2346 + C8639 * C5423 +
                      C8557 * C5539 + C8640 * C8181 + C8558 * C8270) *
                         C4440 +
                     (C8638 * C2255 + C8556 * C2349 + C8639 * C5425 +
                      C8557 * C5541 + C8640 * C8183 + C8558 * C8272) *
                         C29123) *
                        C29209 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[22] += (-std::pow(Pi, 2.5) *
                   (((C4440 * C93 + C29123 * C98) * C4488 +
                     (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
                     C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
                        C29220 * C29196 * C2248 -
                    (C6494 * C4438 + C6495 * C4490 + C5057 * C4437 +
                     C5056 * C4489 + C5055 * C4436 + C5054 * C4488) *
                        C29220 * C29196 * C2249 +
                    (C5056 * C4488 + C5057 * C4436 + C6495 * C4489 +
                     C6494 * C4437 + (C4440 * C6351 + C29123 * C6352) * C4490 +
                     (C4440 * C6399 + C29123 * C6488) * C4438) *
                        C29220 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C29209) *
                        C29220 * C29196 * C2248 -
                    ((C92 * C708 + C79 * C848 + C90 * C709 + C78 * C849 +
                      C88 * C710 + C77 * C850) *
                         C29209 +
                     (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                      C88 * C642 + C77 * C646) *
                         C155) *
                        C29220 * C29196 * C2249 +
                    ((C88 * C2252 + C77 * C2255 + C90 * C2253 + C78 * C2256 +
                      C92 * C2254 + C79 * C2257) *
                         C155 +
                     (C88 * C2302 + C77 * C2390 + C90 * C2303 + C78 * C2391 +
                      C92 * C2304 + C79 * C2392) *
                         C29209) *
                        C29220 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C155 +
                      (C4440 * C156 + C29123 * C289) * C29209) *
                         C8556 +
                     (C9642 + C9643) * C8557 + (C9644 + C9645) * C8558) *
                        C29196 * C2248 -
                    (((C4440 * C8227 + C29123 * C8311) * C29209 +
                      (C4440 * C8180 + C29123 * C8182) * C155) *
                         C8558 +
                     (C6956 * C29209 + C6957 * C155) * C8557 +
                     (C5055 * C29209 + C5054 * C155) * C8556) *
                        C29196 * C2249 +
                    ((C5056 * C155 + C5057 * C29209) * C8556 +
                     (C6955 * C155 + C6954 * C29209) * C8557 +
                     ((C4440 * C8181 + C29123 * C8183) * C155 +
                      (C4440 * C8228 + C29123 * C8312) * C29209) *
                         C8558) *
                        C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::pow(Pi, 2.5) *
         ((C4605 * C93 + C4609 + C4609 + C4436 * C333 + C4606 * C642 + C4610 +
           C4610 + C4437 * C904 + C4607 * C2252 + C4611 + C4611 +
           C4438 * C2431) *
              C29123 * C29220 * C29196 * C2248 -
          (C4607 * C4819 + C5114 + C5114 + C4438 * C5111 + C4606 * C2252 +
           C5115 + C5115 + C4437 * C2431 + C4605 * C642 + C5116 + C5116 +
           C4436 * C904) *
              C29123 * C29220 * C29196 * C2249 +
          (C4605 * C2252 + C6535 + C6535 + C4436 * C2431 + C4606 * C4819 +
           C6536 + C6536 + C4437 * C5111 + C4607 * C6351 + C6537 + C6537 +
           C4438 * C6533) *
              C29123 * C29220 * C29196 * C2250) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C29209 * C333) * C77 + C356 * C78 +
           C357 * C79) *
              C29220 * C29196 * C2248 -
          (C919 * C79 + C920 * C78 +
           (C332 * C642 + C913 + C913 + C29209 * C904) * C77) *
              C29220 * C29196 * C2249 +
          ((C332 * C2252 + C2435 + C2435 + C29209 * C2431) * C77 +
           (C332 * C2253 + C2436 + C2436 + C29209 * C2432) * C78 +
           (C332 * C2254 + C2437 + C2437 + C29209 * C2433) * C79) *
              C29220 * C29196 * C2250) *
         C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C29209 * C333) * C29123 * C8556 +
           C9720 * C8557 + C9721 * C8558) *
              C29196 * C2248 -
          ((C332 * C8180 + C9142 + C9142 + C29209 * C8351) * C29123 * C8558 +
           (C332 * C2654 + C2885 + C2885 + C29209 * C2881) * C29123 * C8557 +
           (C332 * C642 + C913 + C913 + C29209 * C904) * C29123 * C8556) *
              C29196 * C2249 +
          ((C332 * C2252 + C2435 + C2435 + C29209 * C2431) * C29123 * C8556 +
           (C332 * C5423 + C10598 + C10598 + C29209 * C5645) * C29123 * C8557 +
           (C332 * C8181 + C10599 + C10599 + C29209 * C8352) * C29123 * C8558) *
              C29196 * C2250) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] += (-std::pow(Pi, 2.5) *
                   (((C222 * C93 + C29220 * C223) * C4488 +
                     (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
                     C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
                        C29123 * C29196 * C2248 -
                    (C6579 * C4438 + C6448 * C4490 + C5179 * C4437 +
                     C4976 * C4489 + C5178 * C4436 + C4974 * C4488) *
                        C29123 * C29196 * C2249 +
                    (C4976 * C4488 + C5179 * C4436 + C6448 * C4489 +
                     C6579 * C4437 + (C222 * C6351 + C29220 * C6439) * C4490 +
                     (C222 * C6399 + C29220 * C6575) * C4438) *
                        C29123 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C155 +
                      (C222 * C156 + C29220 * C396) * C29209) *
                         C77 +
                     (C402 + C414) * C78 + C417 * C79) *
                        C29196 * C2248 -
                    ((C983 + C977) * C79 + (C984 + C980) * C78 +
                     ((C222 * C710 + C29220 * C972) * C29209 +
                      (C222 * C642 + C29220 * C780) * C155) *
                         C77) *
                        C29196 * C2249 +
                    (((C222 * C2252 + C29220 * C2346) * C155 +
                      (C222 * C2302 + C29220 * C2475) * C29209) *
                         C77 +
                     ((C222 * C2253 + C29220 * C2347) * C155 +
                      (C222 * C2303 + C29220 * C2476) * C29209) *
                         C78 +
                     ((C222 * C2254 + C29220 * C2348) * C155 +
                      (C222 * C2304 + C29220 * C2477) * C29209) *
                         C79) *
                        C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C8638 * C93 + C8556 * C223 + C8639 * C1226 +
                      C8557 * C1364 + C8640 * C4045 + C8558 * C4139) *
                         C155 +
                     (C8638 * C156 + C8556 * C396 + C8639 * C1294 +
                      C8557 * C1556 + C8640 * C4095 + C8558 * C4268) *
                         C29209) *
                        C29123 * C29196 * C2248 -
                    ((C8640 * C8227 + C8558 * C8394 + C8639 * C2716 +
                      C8557 * C2937 + C8638 * C710 + C8556 * C972) *
                         C29209 +
                     (C8640 * C8180 + C8558 * C8269 + C8639 * C2654 +
                      C8557 * C2772 + C8638 * C642 + C8556 * C780) *
                         C155) *
                        C29123 * C29196 * C2249 +
                    ((C8638 * C2252 + C8556 * C2346 + C8639 * C5423 +
                      C8557 * C5539 + C8640 * C8181 + C8558 * C8270) *
                         C155 +
                     (C8638 * C2302 + C8556 * C2475 + C8639 * C5485 +
                      C8557 * C5703 + C8640 * C8228 + C8558 * C8395) *
                         C29209) *
                        C29123 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezx[22] += (-std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C222 +
                      (C4440 * C223 + C29123 * C455) * C29220) *
                         C4436 +
                     (C5233 + C5249) * C4437 + C6619 * C4438) *
                        C29196 * C2248 -
                    ((C6624 + C6622) * C4438 + (C5250 + C5236) * C4437 +
                     (C5249 + C5233) * C4436) *
                        C29196 * C2249 +
                    (C6619 * C4436 + (C6622 + C6624) * C4437 +
                     ((C4440 * C6351 + C29123 * C6352) * C222 +
                      (C4440 * C6439 + C29123 * C6617) * C29220) *
                         C4438) *
                        C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C29220) *
                        C29209 * C29196 * C2248 -
                    ((C92 * C778 + C79 * C1034 + C90 * C779 + C78 * C1035 +
                      C88 * C780 + C77 * C1036) *
                         C29220 +
                     (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                      C88 * C642 + C77 * C646) *
                         C222) *
                        C29209 * C29196 * C2249 +
                    ((C88 * C2252 + C77 * C2255 + C90 * C2253 + C78 * C2256 +
                      C92 * C2254 + C79 * C2257) *
                         C222 +
                     (C88 * C2346 + C77 * C2516 + C90 * C2347 + C78 * C2517 +
                      C92 * C2348 + C79 * C2518) *
                         C29220) *
                        C29209 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C4440 * C93 + C29123 * C98) * C8638 +
                     (C4440 * C223 + C29123 * C455) * C8556 + C9634 * C8639 +
                     C9835 * C8557 + C9636 * C8640 + C9836 * C8558) *
                        C29209 * C29196 * C2248 -
                    ((C4440 * C8269 + C29123 * C8434) * C8558 +
                     (C4440 * C8180 + C29123 * C8182) * C8640 + C7127 * C8557 +
                     C6957 * C8639 + C5245 * C8556 + C5054 * C8638) *
                        C29209 * C29196 * C2249 +
                    (C5056 * C8638 + C5246 * C8556 + C6955 * C8639 +
                     C7126 * C8557 + (C4440 * C8181 + C29123 * C8183) * C8640 +
                     (C4440 * C8270 + C29123 * C8435) * C8558) *
                        C29209 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezy[22] += (-std::pow(Pi, 2.5) *
                   (((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
                      C4490 * C2252 + C4438 * C2302) *
                         C222 +
                     (C4488 * C223 + C4436 * C498 + C4489 * C780 +
                      C4437 * C1090 + C4490 * C2346 + C4438 * C2557) *
                         C29220) *
                        C29123 * C29196 * C2248 -
                    ((C4490 * C4955 + C4438 * C5302 + C4489 * C2346 +
                      C4437 * C2557 + C4488 * C780 + C4436 * C1090) *
                         C29220 +
                     (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                      C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                         C222) *
                        C29123 * C29196 * C2249 +
                    ((C4488 * C2252 + C4436 * C2302 + C4489 * C4819 +
                      C4437 * C4901 + C4490 * C6351 + C4438 * C6399) *
                         C222 +
                     (C4488 * C2346 + C4436 * C2557 + C4489 * C4955 +
                      C4437 * C5302 + C4490 * C6439 + C4438 * C6662) *
                         C29220) *
                        C29123 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C222 +
                      (C155 * C223 + C29209 * C498) * C29220) *
                         C77 +
                     (C504 + C516) * C78 + C519 * C79) *
                        C29196 * C2248 -
                    ((C1101 + C1095) * C79 + (C1102 + C1098) * C78 +
                     ((C155 * C780 + C29209 * C1090) * C29220 +
                      (C155 * C642 + C29209 * C710) * C222) *
                         C77) *
                        C29196 * C2249 +
                    (((C155 * C2252 + C29209 * C2302) * C222 +
                      (C155 * C2346 + C29209 * C2557) * C29220) *
                         C77 +
                     ((C155 * C2253 + C29209 * C2303) * C222 +
                      (C155 * C2347 + C29209 * C2558) * C29220) *
                         C78 +
                     ((C155 * C2254 + C29209 * C2304) * C222 +
                      (C155 * C2348 + C29209 * C2559) * C29220) *
                         C79) *
                        C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C155 * C93 + C29209 * C156) * C8638 +
                     (C155 * C223 + C29209 * C498) * C8556 + C9500 * C8639 +
                     C9897 * C8557 + C9502 * C8640 + C9898 * C8558) *
                        C29123 * C29196 * C2248 -
                    ((C155 * C8269 + C29209 * C8474) * C8558 +
                     (C155 * C8180 + C29209 * C8227) * C8640 +
                     (C155 * C2772 + C29209 * C3043) * C8557 +
                     (C155 * C2654 + C29209 * C2716) * C8639 +
                     (C155 * C780 + C29209 * C1090) * C8556 +
                     (C155 * C642 + C29209 * C710) * C8638) *
                        C29123 * C29196 * C2249 +
                    ((C155 * C2252 + C29209 * C2302) * C8638 +
                     (C155 * C2346 + C29209 * C2557) * C8556 +
                     (C155 * C5423 + C29209 * C5485) * C8639 +
                     (C155 * C5539 + C29209 * C5807) * C8557 +
                     (C155 * C8181 + C29209 * C8228) * C8640 +
                     (C155 * C8270 + C29209 * C8475) * C8558) *
                        C29123 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (-std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
           C5372 * C4438) *
              C29123 * C29196 * C2248 -
          (C6708 * C4438 + C5372 * C4437 + C5371 * C4436) * C29123 * C29196 *
              C2249 +
          (C5372 * C4436 + C6708 * C4437 +
           (C557 * C6351 + C6705 + C6705 + C29220 * C6701) * C4438) *
              C29123 * C29196 * C2250) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
           C584 * C78 + C585 * C79) *
              C29196 * C2248 -
          (C1171 * C79 + C1172 * C78 +
           (C557 * C642 + C1163 + C1163 + C29220 * C1154) * C29209 * C77) *
              C29196 * C2249 +
          ((C557 * C2252 + C2602 + C2602 + C29220 * C2598) * C29209 * C77 +
           (C557 * C2253 + C2603 + C2603 + C29220 * C2599) * C29209 * C78 +
           (C557 * C2254 + C2604 + C2604 + C29220 * C2600) * C29209 * C79) *
              C29196 * C2250) *
         C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C8869 * C93 + C8873 + C8873 + C8556 * C558 + C8870 * C1226 + C8874 +
           C8874 + C8557 * C1738 + C8871 * C4045 + C8875 + C8875 +
           C8558 * C4391) *
              C29209 * C29123 * C29196 * C2248 -
          (C8871 * C8180 + C9348 + C9348 + C8558 * C8514 + C8870 * C2654 +
           C9349 + C9349 + C8557 * C3096 + C8869 * C642 + C9350 + C9350 +
           C8556 * C1154) *
              C29209 * C29123 * C29196 * C2249 +
          (C8869 * C2252 + C10752 + C10752 + C8556 * C2598 + C8870 * C5423 +
           C10753 + C10753 + C8557 * C5859 + C8871 * C8181 + C10754 + C10754 +
           C8558 * C8515) *
              C29209 * C29123 * C29196 * C2250) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
            C4848 * C4437 + C4849 * C4438) *
               C1222 -
           (C6773 * C4438 + C6774 * C4437 +
            (C4439 * C1226 + C5432 + C5432 + C29123 * C1234) * C29220 * C4436) *
               C29289) *
              C1806 +
          ((C6774 * C4436 + C6773 * C4437 +
            (C4439 * C6758 + C6766 + C6766 + C29123 * C6760) * C29220 * C4438) *
               C29289 -
           (C6361 * C4438 + C4849 * C4437 + C4848 * C4436) * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C29220 * C29209 * C1222 -
           (C91 * C1224 + C1237 + C1237 + C79 * C1232 + C89 * C1225 + C1238 +
            C1238 + C78 * C1233 + C87 * C1226 + C1239 + C1239 + C77 * C1234) *
               C29220 * C29209 * C29289) *
              C1806 +
          ((C87 * C2654 + C2664 + C2664 + C77 * C2660 + C89 * C2655 + C2665 +
            C2665 + C78 * C2661 + C91 * C2656 + C2666 + C2666 + C79 * C2662) *
               C29220 * C29209 * C29289 -
           (C91 * C640 + C653 + C653 + C79 * C648 + C89 * C641 + C654 + C654 +
            C78 * C649 + C87 * C642 + C655 + C655 + C77 * C650) *
               C29220 * C29209 * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C8556 +
            C9428 * C8557 + C9429 * C8558) *
               C29209 * C1222 -
           ((C4439 * C9403 + C9414 + C9414 + C29123 * C9407) * C8558 +
            C9429 * C8557 + C9428 * C8556) *
               C29209 * C29289) *
              C1806 +
          ((C6772 * C8556 + C10813 * C8557 +
            (C4439 * C10804 + C10810 + C10810 + C29123 * C10806) * C8558) *
               C29209 * C29289 -
           (C10813 * C8558 + C6772 * C8557 + C4844 * C8556) * C29209 * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eexy[23] += (-std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C4440 +
                      (C4488 * C98 + C4436 * C161 + C4489 * C646 +
                       C4437 * C714 + C4490 * C2255 + C4438 * C2305) *
                          C29123) *
                         C29220 * C1222 -
                     ((C4490 * C5425 + C4438 * C5487 + C4489 * C2657 +
                       C4437 * C2719 + C4488 * C1230 + C4436 * C1298) *
                          C29123 +
                      (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 +
                       C4437 * C2716 + C4488 * C1226 + C4436 * C1294) *
                          C4440) *
                         C29220 * C29289) *
                        C1806 +
                    (((C4488 * C2654 + C4436 * C2716 + C4489 * C5423 +
                       C4437 * C5485 + C4490 * C6758 + C4438 * C6824) *
                          C4440 +
                      (C4488 * C2657 + C4436 * C2719 + C4489 * C5425 +
                       C4437 * C5487 + C4490 * C6759 + C4438 * C6825) *
                          C29123) *
                         C29220 * C29289 -
                     ((C4490 * C4821 + C4438 * C4903 + C4489 * C2255 +
                       C4437 * C2305 + C4488 * C646 + C4436 * C714) *
                          C29123 +
                      (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                       C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                          C4440) *
                         C29220 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C88 +
                      (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C29220 * C1222 -
                     (C1309 * C79 + C1310 * C92 + C1311 * C78 + C1312 * C90 +
                      (C155 * C1230 + C29209 * C1298) * C77 +
                      (C155 * C1226 + C29209 * C1294) * C88) *
                         C29220 * C29289) *
                        C1806 +
                    (((C155 * C2654 + C29209 * C2716) * C88 +
                      (C155 * C2657 + C29209 * C2719) * C77 +
                      (C155 * C2655 + C29209 * C2717) * C90 +
                      (C155 * C2658 + C29209 * C2720) * C78 +
                      (C155 * C2656 + C29209 * C2718) * C92 +
                      (C155 * C2659 + C29209 * C2721) * C79) *
                         C29220 * C29289 -
                     (C725 * C79 + C726 * C92 + C727 * C78 + C728 * C90 +
                      (C155 * C646 + C29209 * C714) * C77 +
                      (C155 * C642 + C29209 * C710) * C88) *
                         C29220 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C4440 +
                       (C155 * C98 + C29209 * C161) * C29123) *
                          C8556 +
                      (C9506 + C9507) * C8557 + (C9508 + C9509) * C8558) *
                         C1222 -
                     (((C155 * C9405 + C29209 * C9483) * C29123 +
                       (C155 * C9403 + C29209 * C9481) * C4440) *
                          C8558 +
                      (C9509 + C9508) * C8557 + (C9507 + C9506) * C8556) *
                         C29289) *
                        C1806 +
                    (((C10878 + C10879) * C8556 + (C10880 + C10881) * C8557 +
                      ((C155 * C10804 + C29209 * C10863) * C4440 +
                       (C155 * C10805 + C29209 * C10864) * C29123) *
                          C8558) *
                         C29289 -
                     ((C10881 + C10880) * C8558 + (C10879 + C10878) * C8557 +
                      ((C155 * C646 + C29209 * C714) * C29123 +
                       (C155 * C642 + C29209 * C710) * C4440) *
                          C8556) *
                         C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eexz[23] += (-std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C4440 +
                       (C222 * C98 + C29220 * C228) * C29123) *
                          C4436 +
                      (C4980 + C4981) * C4437 + C6442 * C4438) *
                         C1222 -
                     ((C6891 + C6892) * C4438 + (C6893 + C6894) * C4437 +
                      ((C222 * C1230 + C29220 * C1368) * C29123 +
                       (C222 * C1226 + C29220 * C1364) * C4440) *
                          C4436) *
                         C29289) *
                        C1806 +
                    (((C6894 + C6893) * C4436 + (C6892 + C6891) * C4437 +
                      ((C222 * C6758 + C29220 * C6876) * C4440 +
                       (C222 * C6759 + C29220 * C6877) * C29123) *
                          C4438) *
                         C29289 -
                     ((C6449 + C6450) * C4438 + (C4983 + C4982) * C4437 +
                      (C4981 + C4980) * C4436) *
                         C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C88 +
                      (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C29209 * C1222 -
                     (C1379 * C79 + C1380 * C92 + C1381 * C78 + C1382 * C90 +
                      (C222 * C1230 + C29220 * C1368) * C77 +
                      (C222 * C1226 + C29220 * C1364) * C88) *
                         C29209 * C29289) *
                        C1806 +
                    (((C222 * C2654 + C29220 * C2772) * C88 +
                      (C222 * C2657 + C29220 * C2775) * C77 +
                      (C222 * C2655 + C29220 * C2773) * C90 +
                      (C222 * C2658 + C29220 * C2776) * C78 +
                      (C222 * C2656 + C29220 * C2774) * C92 +
                      (C222 * C2659 + C29220 * C2777) * C79) *
                         C29209 * C29289 -
                     (C795 * C79 + C796 * C92 + C797 * C78 + C798 * C90 +
                      (C222 * C646 + C29220 * C784) * C77 +
                      (C222 * C642 + C29220 * C780) * C88) *
                         C29209 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C8638 * C93 + C8556 * C223 + C8639 * C1226 +
                       C8557 * C1364 + C8640 * C4045 + C8558 * C4139) *
                          C4440 +
                      (C8638 * C98 + C8556 * C228 + C8639 * C1230 +
                       C8557 * C1368 + C8640 * C4048 + C8558 * C4142) *
                          C29123) *
                         C29209 * C1222 -
                     ((C8640 * C9405 + C8558 * C9563 + C8639 * C4048 +
                       C8557 * C4142 + C8638 * C1230 + C8556 * C1368) *
                          C29123 +
                      (C8640 * C9403 + C8558 * C9561 + C8639 * C4045 +
                       C8557 * C4139 + C8638 * C1226 + C8556 * C1364) *
                          C4440) *
                         C29209 * C29289) *
                        C1806 +
                    (((C8638 * C2654 + C8556 * C2772 + C8639 * C8180 +
                       C8557 * C8269 + C8640 * C10804 + C8558 * C10931) *
                          C4440 +
                      (C8638 * C2657 + C8556 * C2775 + C8639 * C8182 +
                       C8557 * C8271 + C8640 * C10805 + C8558 * C10932) *
                          C29123) *
                         C29209 * C29289 -
                     ((C8640 * C8182 + C8558 * C8271 + C8639 * C2657 +
                       C8557 * C2775 + C8638 * C646 + C8556 * C784) *
                          C29123 +
                      (C8640 * C8180 + C8558 * C8269 + C8639 * C2654 +
                       C8557 * C2772 + C8638 * C642 + C8556 * C780) *
                          C4440) *
                         C29209 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[23] += (-std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C4488 +
                      (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
                      C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
                         C29220 * C1222 -
                     (C6954 * C4438 + C6955 * C4490 + C6956 * C4437 +
                      C6957 * C4489 + (C4440 * C1294 + C29123 * C1434) * C4436 +
                      (C4440 * C1226 + C29123 * C1230) * C4488) *
                         C29220 * C29289) *
                        C1806 +
                    ((C6957 * C4488 + C6956 * C4436 + C6955 * C4489 +
                      C6954 * C4437 + (C4440 * C6758 + C29123 * C6759) * C4490 +
                      (C4440 * C6824 + C29123 * C6944) * C4438) *
                         C29220 * C29289 -
                     (C6494 * C4438 + C6495 * C4490 + C5057 * C4437 +
                      C5056 * C4489 + C5055 * C4436 + C5054 * C4488) *
                         C29220 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C29209) *
                         C29220 * C1222 -
                     ((C92 * C1292 + C79 * C1432 + C90 * C1293 + C78 * C1433 +
                       C88 * C1294 + C77 * C1434) *
                          C29209 +
                      (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
                       C88 * C1226 + C77 * C1230) *
                          C155) *
                         C29220 * C29289) *
                        C1806 +
                    (((C88 * C2654 + C77 * C2657 + C90 * C2655 + C78 * C2658 +
                       C92 * C2656 + C79 * C2659) *
                          C155 +
                      (C88 * C2716 + C77 * C2828 + C90 * C2717 + C78 * C2829 +
                       C92 * C2718 + C79 * C2830) *
                          C29209) *
                         C29220 * C29289 -
                     ((C92 * C708 + C79 * C848 + C90 * C709 + C78 * C849 +
                       C88 * C710 + C77 * C850) *
                          C29209 +
                      (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                       C88 * C642 + C77 * C646) *
                          C155) *
                         C29220 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C155 +
                       (C4440 * C156 + C29123 * C289) * C29209) *
                          C8556 +
                      (C9642 + C9643) * C8557 + (C9644 + C9645) * C8558) *
                         C1222 -
                     (((C4440 * C9481 + C29123 * C9615) * C29209 +
                       (C4440 * C9403 + C29123 * C9405) * C155) *
                          C8558 +
                      (C9645 + C9644) * C8557 + (C9643 + C9642) * C8556) *
                         C29289) *
                        C1806 +
                    (((C10985 + C10986) * C8556 + (C10993 + C10994) * C8557 +
                      ((C4440 * C10804 + C29123 * C10805) * C155 +
                       (C4440 * C10863 + C29123 * C10983) * C29209) *
                          C8558) *
                         C29289 -
                     ((C10994 + C10993) * C8558 + (C10986 + C10985) * C8557 +
                      (C5055 * C29209 + C5054 * C155) * C8556) *
                         C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (-std::pow(Pi, 2.5) *
         (((C4605 * C93 + C4609 + C4609 + C4436 * C333 + C4606 * C642 + C4610 +
            C4610 + C4437 * C904 + C4607 * C2252 + C4611 + C4611 +
            C4438 * C2431) *
               C29123 * C29220 * C1222 -
           (C4607 * C5423 + C5648 + C5648 + C4438 * C5645 + C4606 * C2654 +
            C5649 + C5649 + C4437 * C2881 + C4605 * C1226 + C5650 + C5650 +
            C4436 * C1488) *
               C29123 * C29220 * C29289) *
              C1806 +
          ((C4605 * C2654 + C7009 + C7009 + C4436 * C2881 + C4606 * C5423 +
            C7010 + C7010 + C4437 * C5645 + C4607 * C6758 + C7011 + C7011 +
            C4438 * C7007) *
               C29123 * C29220 * C29289 -
           (C4607 * C4819 + C5114 + C5114 + C4438 * C5111 + C4606 * C2252 +
            C5115 + C5115 + C4437 * C2431 + C4605 * C642 + C5116 + C5116 +
            C4436 * C904) *
               C29123 * C29220 * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C29220 * C1222 -
           (C1503 * C79 + C1504 * C78 +
            (C332 * C1226 + C1497 + C1497 + C29209 * C1488) * C77) *
               C29220 * C29289) *
              C1806 +
          (((C332 * C2654 + C2885 + C2885 + C29209 * C2881) * C77 +
            (C332 * C2655 + C2886 + C2886 + C29209 * C2882) * C78 +
            (C332 * C2656 + C2887 + C2887 + C29209 * C2883) * C79) *
               C29220 * C29289 -
           (C919 * C79 + C920 * C78 +
            (C332 * C642 + C913 + C913 + C29209 * C904) * C77) *
               C29220 * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C29123 * C8556 +
            C9720 * C8557 + C9721 * C8558) *
               C1222 -
           ((C332 * C9403 + C9706 + C9706 + C29209 * C9699) * C29123 * C8558 +
            C9721 * C8557 + C9720 * C8556) *
               C29289) *
              C1806 +
          ((C11057 * C8556 + C11058 * C8557 +
            (C332 * C10804 + C11050 + C11050 + C29209 * C11044) * C29123 *
                C8558) *
               C29289 -
           (C11058 * C8558 + C11057 * C8557 +
            (C332 * C642 + C913 + C913 + C29209 * C904) * C29123 * C8556) *
               C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eeyz[23] += (-std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C4488 +
                      (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
                      C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
                         C29123 * C1222 -
                     (C7067 * C4438 + C6888 * C4490 + C7068 * C4437 +
                      C6890 * C4489 + (C222 * C1294 + C29220 * C1556) * C4436 +
                      (C222 * C1226 + C29220 * C1364) * C4488) *
                         C29123 * C29289) *
                        C1806 +
                    ((C6890 * C4488 + C7068 * C4436 + C6888 * C4489 +
                      C7067 * C4437 + (C222 * C6758 + C29220 * C6876) * C4490 +
                      (C222 * C6824 + C29220 * C7061) * C4438) *
                         C29123 * C29289 -
                     (C6579 * C4438 + C6448 * C4490 + C5179 * C4437 +
                      C4976 * C4489 + C5178 * C4436 + C4974 * C4488) *
                         C29123 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C155 +
                       (C222 * C156 + C29220 * C396) * C29209) *
                          C77 +
                      (C402 + C414) * C78 + C417 * C79) *
                         C1222 -
                     ((C1567 + C1561) * C79 + (C1568 + C1564) * C78 +
                      ((C222 * C1294 + C29220 * C1556) * C29209 +
                       (C222 * C1226 + C29220 * C1364) * C155) *
                          C77) *
                         C29289) *
                        C1806 +
                    ((((C222 * C2654 + C29220 * C2772) * C155 +
                       (C222 * C2716 + C29220 * C2937) * C29209) *
                          C77 +
                      ((C222 * C2655 + C29220 * C2773) * C155 +
                       (C222 * C2717 + C29220 * C2938) * C29209) *
                          C78 +
                      ((C222 * C2656 + C29220 * C2774) * C155 +
                       (C222 * C2718 + C29220 * C2939) * C29209) *
                          C79) *
                         C29289 -
                     ((C983 + C977) * C79 + (C984 + C980) * C78 +
                      ((C222 * C710 + C29220 * C972) * C29209 +
                       (C222 * C642 + C29220 * C780) * C155) *
                          C77) *
                         C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C8638 * C93 + C8556 * C223 + C8639 * C1226 +
                       C8557 * C1364 + C8640 * C4045 + C8558 * C4139) *
                          C155 +
                      (C8638 * C156 + C8556 * C396 + C8639 * C1294 +
                       C8557 * C1556 + C8640 * C4095 + C8558 * C4268) *
                          C29209) *
                         C29123 * C1222 -
                     ((C8640 * C9481 + C8558 * C9772 + C8639 * C4095 +
                       C8557 * C4268 + C8638 * C1294 + C8556 * C1556) *
                          C29209 +
                      (C8640 * C9403 + C8558 * C9561 + C8639 * C4045 +
                       C8557 * C4139 + C8638 * C1226 + C8556 * C1364) *
                          C155) *
                         C29123 * C29289) *
                        C1806 +
                    (((C8638 * C2654 + C8556 * C2772 + C8639 * C8180 +
                       C8557 * C8269 + C8640 * C10804 + C8558 * C10931) *
                          C155 +
                      (C8638 * C2716 + C8556 * C2937 + C8639 * C8227 +
                       C8557 * C8394 + C8640 * C10863 + C8558 * C11108) *
                          C29209) *
                         C29123 * C29289 -
                     ((C8640 * C8227 + C8558 * C8394 + C8639 * C2716 +
                       C8557 * C2937 + C8638 * C710 + C8556 * C972) *
                          C29209 +
                      (C8640 * C8180 + C8558 * C8269 + C8639 * C2654 +
                       C8557 * C2772 + C8638 * C642 + C8556 * C780) *
                          C155) *
                         C29123 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (-std::pow(Pi, 2.5) *
         (((((C4440 * C93 + C29123 * C98) * C222 +
             (C4440 * C223 + C29123 * C455) * C29220) *
                C4436 +
            (C5233 + C5249) * C4437 + C6619 * C4438) *
               C1222 -
           ((C7128 + C7122) * C4438 + (C7129 + C7125) * C4437 +
            ((C4440 * C1364 + C29123 * C1620) * C29220 +
             (C4440 * C1226 + C29123 * C1230) * C222) *
                C4436) *
               C29289) *
              C1806 +
          (((C7125 + C7129) * C4436 + (C7122 + C7128) * C4437 +
            ((C4440 * C6758 + C29123 * C6759) * C222 +
             (C4440 * C6876 + C29123 * C7118) * C29220) *
                C4438) *
               C29289 -
           ((C6624 + C6622) * C4438 + (C5250 + C5236) * C4437 +
            (C5249 + C5233) * C4436) *
               C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
             C79 * C100) *
                C222 +
            (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 + C92 * C225 +
             C79 * C457) *
                C29220) *
               C29209 * C1222 -
           ((C92 * C1362 + C79 * C1618 + C90 * C1363 + C78 * C1619 +
             C88 * C1364 + C77 * C1620) *
                C29220 +
            (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
             C88 * C1226 + C77 * C1230) *
                C222) *
               C29209 * C29289) *
              C1806 +
          (((C88 * C2654 + C77 * C2657 + C90 * C2655 + C78 * C2658 +
             C92 * C2656 + C79 * C2659) *
                C222 +
            (C88 * C2772 + C77 * C2990 + C90 * C2773 + C78 * C2991 +
             C92 * C2774 + C79 * C2992) *
                C29220) *
               C29209 * C29289 -
           ((C92 * C778 + C79 * C1034 + C90 * C779 + C78 * C1035 + C88 * C780 +
             C77 * C1036) *
                C29220 +
            (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 + C88 * C642 +
             C77 * C646) *
                C222) *
               C29209 * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C8638 +
            (C4440 * C223 + C29123 * C455) * C8556 + C9634 * C8639 +
            C9835 * C8557 + C9636 * C8640 + C9836 * C8558) *
               C29209 * C1222 -
           ((C4440 * C9561 + C29123 * C9824) * C8558 +
            (C4440 * C9403 + C29123 * C9405) * C8640 + C9836 * C8557 +
            C9636 * C8639 + C9835 * C8556 + C9634 * C8638) *
               C29209 * C29289) *
              C1806 +
          ((C6957 * C8638 + C7127 * C8556 + C10991 * C8639 + C11163 * C8557 +
            (C4440 * C10804 + C29123 * C10805) * C8640 +
            (C4440 * C10931 + C29123 * C11159) * C8558) *
               C29209 * C29289 -
           (C11163 * C8558 + C10991 * C8640 + C7127 * C8557 + C6957 * C8639 +
            C5245 * C8556 + C5054 * C8638) *
               C29209 * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eezy[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
             C4490 * C2252 + C4438 * C2302) *
                C222 +
            (C4488 * C223 + C4436 * C498 + C4489 * C780 + C4437 * C1090 +
             C4490 * C2346 + C4438 * C2557) *
                C29220) *
               C29123 * C1222 -
           ((C4490 * C5539 + C4438 * C5807 + C4489 * C2772 + C4437 * C3043 +
             C4488 * C1364 + C4436 * C1674) *
                C29220 +
            (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 + C4437 * C2716 +
             C4488 * C1226 + C4436 * C1294) *
                C222) *
               C29123 * C29289) *
              C1806 +
          (((C4488 * C2654 + C4436 * C2716 + C4489 * C5423 + C4437 * C5485 +
             C4490 * C6758 + C4438 * C6824) *
                C222 +
            (C4488 * C2772 + C4436 * C3043 + C4489 * C5539 + C4437 * C5807 +
             C4490 * C6876 + C4438 * C7179) *
                C29220) *
               C29123 * C29289 -
           ((C4490 * C4955 + C4438 * C5302 + C4489 * C2346 + C4437 * C2557 +
             C4488 * C780 + C4436 * C1090) *
                C29220 +
            (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 + C4437 * C2302 +
             C4488 * C642 + C4436 * C710) *
                C222) *
               C29123 * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C222 +
             (C155 * C223 + C29209 * C498) * C29220) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C1222 -
           ((C1685 + C1679) * C79 + (C1686 + C1682) * C78 +
            ((C155 * C1364 + C29209 * C1674) * C29220 +
             (C155 * C1226 + C29209 * C1294) * C222) *
                C77) *
               C29289) *
              C1806 +
          ((((C155 * C2654 + C29209 * C2716) * C222 +
             (C155 * C2772 + C29209 * C3043) * C29220) *
                C77 +
            ((C155 * C2655 + C29209 * C2717) * C222 +
             (C155 * C2773 + C29209 * C3044) * C29220) *
                C78 +
            ((C155 * C2656 + C29209 * C2718) * C222 +
             (C155 * C2774 + C29209 * C3045) * C29220) *
                C79) *
               C29289 -
           ((C1101 + C1095) * C79 + (C1102 + C1098) * C78 +
            ((C155 * C780 + C29209 * C1090) * C29220 +
             (C155 * C642 + C29209 * C710) * C222) *
                C77) *
               C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C29209 * C156) * C8638 +
            (C155 * C223 + C29209 * C498) * C8556 + C9500 * C8639 +
            C9897 * C8557 + C9502 * C8640 + C9898 * C8558) *
               C29123 * C1222 -
           ((C155 * C9561 + C29209 * C9888) * C8558 +
            (C155 * C9403 + C29209 * C9481) * C8640 + C9898 * C8557 +
            C9502 * C8639 + C9897 * C8556 + C9500 * C8638) *
               C29123 * C29289) *
              C1806 +
          ((C10874 * C8638 + C11219 * C8556 + C10876 * C8639 + C11220 * C8557 +
            (C155 * C10804 + C29209 * C10863) * C8640 +
            (C155 * C10931 + C29209 * C11213) * C8558) *
               C29123 * C29289 -
           (C11220 * C8558 + C10876 * C8640 + C11219 * C8557 + C10874 * C8639 +
            (C155 * C780 + C29209 * C1090) * C8556 +
            (C155 * C642 + C29209 * C710) * C8638) *
               C29123 * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
            C5372 * C4438) *
               C29123 * C1222 -
           (C7241 * C4438 + C7242 * C4437 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C4436) *
               C29123 * C29289) *
              C1806 +
          ((C7242 * C4436 + C7241 * C4437 +
            (C557 * C6758 + C7236 + C7236 + C29220 * C7230) * C4438) *
               C29123 * C29289 -
           (C6708 * C4438 + C5372 * C4437 + C5371 * C4436) * C29123 * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
            C584 * C78 + C585 * C79) *
               C1222 -
           (C1755 * C79 + C1756 * C78 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C29209 * C77) *
               C29289) *
              C1806 +
          (((C557 * C2654 + C3100 + C3100 + C29220 * C3096) * C29209 * C77 +
            (C557 * C2655 + C3101 + C3101 + C29220 * C3097) * C29209 * C78 +
            (C557 * C2656 + C3102 + C3102 + C29220 * C3098) * C29209 * C79) *
               C29289 -
           (C1171 * C79 + C1172 * C78 +
            (C557 * C642 + C1163 + C1163 + C29220 * C1154) * C29209 * C77) *
               C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8869 * C93 + C8873 + C8873 + C8556 * C558 + C8870 * C1226 + C8874 +
            C8874 + C8557 * C1738 + C8871 * C4045 + C8875 + C8875 +
            C8558 * C4391) *
               C29209 * C29123 * C1222 -
           (C8871 * C9403 + C9952 + C9952 + C8558 * C9949 + C8870 * C4045 +
            C9953 + C9953 + C8557 * C4391 + C8869 * C1226 + C9954 + C9954 +
            C8556 * C1738) *
               C29209 * C29123 * C29289) *
              C1806 +
          ((C8869 * C2654 + C11272 + C11272 + C8556 * C3096 + C8870 * C8180 +
            C11273 + C11273 + C8557 * C8514 + C8871 * C10804 + C11274 + C11274 +
            C8558 * C11270) *
               C29209 * C29123 * C29289 -
           (C8871 * C8180 + C9348 + C9348 + C8558 * C8514 + C8870 * C2654 +
            C9349 + C9349 + C8557 * C3096 + C8869 * C642 + C9350 + C9350 +
            C8556 * C1154) *
               C29209 * C29123 * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (-std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
            C4848 * C4437 + C4849 * C4438) *
               C3152 -
           (C6773 * C4438 + C6774 * C4437 +
            (C4439 * C1226 + C5432 + C5432 + C29123 * C1234) * C29220 * C4436) *
               C29289) *
              C29179 * C1808 +
          (((C4439 * C1225 + C5433 + C5433 + C29123 * C1233) * C29220 * C4436 +
            (C4439 * C2655 + C5434 + C5434 + C29123 * C2661) * C29220 * C4437 +
            (C4439 * C5424 + C5435 + C5435 + C29123 * C5428) * C29220 * C4438) *
               C29289 -
           (C4851 * C4438 + C4850 * C4437 +
            (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C29220 * C4436) *
               C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C29220 * C29209 * C3152 -
           (C91 * C1224 + C1237 + C1237 + C79 * C1232 + C89 * C1225 + C1238 +
            C1238 + C78 * C1233 + C87 * C1226 + C1239 + C1239 + C77 * C1234) *
               C29220 * C29209 * C29289) *
              C29179 * C1808 +
          ((C87 * C1225 + C1240 + C1240 + C77 * C1233 + C89 * C1224 + C1241 +
            C1241 + C78 * C1232 + C91 * C1227 + C1242 + C1242 + C79 * C1235) *
               C29220 * C29209 * C29289 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C29220 * C29209 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C8556 +
            C9428 * C8557 + C9429 * C8558) *
               C29209 * C3152 -
           ((C4439 * C9403 + C9414 + C9414 + C29123 * C9407) * C8558 +
            C9429 * C8557 + C9428 * C8556) *
               C29209 * C29289) *
              C29179 * C1808 +
          ((C9430 * C8556 + C9431 * C8557 +
            (C4439 * C9404 + C9419 + C9419 + C29123 * C9408) * C8558) *
               C29209 * C29289 -
           (C9431 * C8558 + C9430 * C8557 +
            (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C8556) *
               C29209 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexy[24] += (-std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C4440 +
                      (C4488 * C98 + C4436 * C161 + C4489 * C646 +
                       C4437 * C714 + C4490 * C2255 + C4438 * C2305) *
                          C29123) *
                         C29220 * C3152 -
                     ((C4490 * C5425 + C4438 * C5487 + C4489 * C2657 +
                       C4437 * C2719 + C4488 * C1230 + C4436 * C1298) *
                          C29123 +
                      (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 +
                       C4437 * C2716 + C4488 * C1226 + C4436 * C1294) *
                          C4440) *
                         C29220 * C29289) *
                        C29179 * C1808 +
                    (((C4488 * C1225 + C4436 * C1293 + C4489 * C2655 +
                       C4437 * C2717 + C4490 * C5424 + C4438 * C5486) *
                          C4440 +
                      (C4488 * C1229 + C4436 * C1297 + C4489 * C2658 +
                       C4437 * C2720 + C4490 * C5426 + C4438 * C5488) *
                          C29123) *
                         C29220 * C29289 -
                     ((C4490 * C2256 + C4438 * C2306 + C4489 * C645 +
                       C4437 * C713 + C4488 * C99 + C4436 * C162) *
                          C29123 +
                      (C4490 * C2253 + C4438 * C2303 + C4489 * C641 +
                       C4437 * C709 + C4488 * C94 + C4436 * C157) *
                          C4440) *
                         C29220 * C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C88 +
                      (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C29220 * C3152 -
                     (C1309 * C79 + C1310 * C92 + C1311 * C78 + C1312 * C90 +
                      (C155 * C1230 + C29209 * C1298) * C77 +
                      (C155 * C1226 + C29209 * C1294) * C88) *
                         C29220 * C29289) *
                        C29179 * C1808 +
                    ((C1312 * C88 + C1311 * C77 + C1310 * C90 + C1309 * C78 +
                      (C155 * C1227 + C29209 * C1295) * C92 +
                      (C155 * C1231 + C29209 * C1299) * C79) *
                         C29220 * C29289 -
                     (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                      C180 * C77 + C179 * C88) *
                         C29220 * C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C4440 +
                       (C155 * C98 + C29209 * C161) * C29123) *
                          C8556 +
                      (C9506 + C9507) * C8557 + (C9508 + C9509) * C8558) *
                         C3152 -
                     (((C155 * C9405 + C29209 * C9483) * C29123 +
                       (C155 * C9403 + C29209 * C9481) * C4440) *
                          C8558 +
                      (C9509 + C9508) * C8557 + (C9507 + C9506) * C8556) *
                         C29289) *
                        C29179 * C1808 +
                    (((C9494 + C9495) * C8556 + (C9510 + C9511) * C8557 +
                      ((C155 * C9404 + C29209 * C9482) * C4440 +
                       (C155 * C9406 + C29209 * C9484) * C29123) *
                          C8558) *
                         C29289 -
                     ((C9511 + C9510) * C8558 + (C9495 + C9494) * C8557 +
                      (C180 * C29123 + C179 * C4440) * C8556) *
                         C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[24] += (-std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C4440 +
                       (C222 * C98 + C29220 * C228) * C29123) *
                          C4436 +
                      (C4980 + C4981) * C4437 + C6442 * C4438) *
                         C3152 -
                     ((C6891 + C6892) * C4438 + (C6893 + C6894) * C4437 +
                      ((C222 * C1230 + C29220 * C1368) * C29123 +
                       (C222 * C1226 + C29220 * C1364) * C4440) *
                          C4436) *
                         C29289) *
                        C29179 * C1808 +
                    (((C1382 * C4440 + C1381 * C29123) * C4436 +
                      ((C222 * C2655 + C29220 * C2773) * C4440 +
                       (C222 * C2658 + C29220 * C2776) * C29123) *
                          C4437 +
                      ((C222 * C5424 + C29220 * C5540) * C4440 +
                       (C222 * C5426 + C29220 * C5542) * C29123) *
                          C4438) *
                         C29289 -
                     ((C4985 + C4984) * C4438 + (C4969 + C4968) * C4437 +
                      (C247 * C29123 + C246 * C4440) * C4436) *
                         C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C88 +
                      (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C29209 * C3152 -
                     (C1379 * C79 + C1380 * C92 + C1381 * C78 + C1382 * C90 +
                      (C222 * C1230 + C29220 * C1368) * C77 +
                      (C222 * C1226 + C29220 * C1364) * C88) *
                         C29209 * C29289) *
                        C29179 * C1808 +
                    ((C1382 * C88 + C1381 * C77 + C1380 * C90 + C1379 * C78 +
                      (C222 * C1227 + C29220 * C1365) * C92 +
                      (C222 * C1231 + C29220 * C1369) * C79) *
                         C29209 * C29289 -
                     (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                      C247 * C77 + C246 * C88) *
                         C29209 * C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C8638 * C93 + C8556 * C223 + C8639 * C1226 +
                       C8557 * C1364 + C8640 * C4045 + C8558 * C4139) *
                          C4440 +
                      (C8638 * C98 + C8556 * C228 + C8639 * C1230 +
                       C8557 * C1368 + C8640 * C4048 + C8558 * C4142) *
                          C29123) *
                         C29209 * C3152 -
                     ((C8640 * C9405 + C8558 * C9563 + C8639 * C4048 +
                       C8557 * C4142 + C8638 * C1230 + C8556 * C1368) *
                          C29123 +
                      (C8640 * C9403 + C8558 * C9561 + C8639 * C4045 +
                       C8557 * C4139 + C8638 * C1226 + C8556 * C1364) *
                          C4440) *
                         C29209 * C29289) *
                        C29179 * C1808 +
                    (((C8638 * C1225 + C8556 * C1363 + C8639 * C4046 +
                       C8557 * C4140 + C8640 * C9404 + C8558 * C9562) *
                          C4440 +
                      (C8638 * C1229 + C8556 * C1367 + C8639 * C4049 +
                       C8557 * C4143 + C8640 * C9406 + C8558 * C9564) *
                          C29123) *
                         C29209 * C29289 -
                     ((C8640 * C4049 + C8558 * C4143 + C8639 * C1229 +
                       C8557 * C1367 + C8638 * C99 + C8556 * C229) *
                          C29123 +
                      (C8640 * C4046 + C8558 * C4140 + C8639 * C1225 +
                       C8557 * C1363 + C8638 * C94 + C8556 * C224) *
                          C4440) *
                         C29209 * C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (-std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C4488 +
            (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
            C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
               C29220 * C3152 -
           (C6954 * C4438 + C6955 * C4490 + C6956 * C4437 + C6957 * C4489 +
            (C4440 * C1294 + C29123 * C1434) * C4436 +
            (C4440 * C1226 + C29123 * C1230) * C4488) *
               C29220 * C29289) *
              C29179 * C1808 +
          (((C4440 * C1225 + C29123 * C1229) * C4488 +
            (C4440 * C1293 + C29123 * C1433) * C4436 +
            (C4440 * C2655 + C29123 * C2658) * C4489 +
            (C4440 * C2717 + C29123 * C2829) * C4437 +
            (C4440 * C5424 + C29123 * C5426) * C4490 +
            (C4440 * C5486 + C29123 * C5594) * C4438) *
               C29220 * C29289 -
           (C5061 * C4438 + C5060 * C4490 + C5059 * C4437 + C5058 * C4489 +
            (C4440 * C157 + C29123 * C290) * C4436 +
            (C4440 * C94 + C29123 * C99) * C4488) *
               C29220 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                                 C92 * C95 + C79 * C100) *
                                    C155 +
                                (C88 * C156 + C77 * C289 + C90 * C157 +
                                 C78 * C290 + C92 * C158 + C79 * C291) *
                                    C29209) *
                                   C29220 * C3152 -
                               ((C92 * C1292 + C79 * C1432 + C90 * C1293 +
                                 C78 * C1433 + C88 * C1294 + C77 * C1434) *
                                    C29209 +
                                (C92 * C1224 + C79 * C1228 + C90 * C1225 +
                                 C78 * C1229 + C88 * C1226 + C77 * C1230) *
                                    C155) *
                                   C29220 * C29289) *
                                  C29179 * C1808 +
                              (((C88 * C1225 + C77 * C1229 + C90 * C1224 +
                                 C78 * C1228 + C92 * C1227 + C79 * C1231) *
                                    C155 +
                                (C88 * C1293 + C77 * C1433 + C90 * C1292 +
                                 C78 * C1432 + C92 * C1295 + C79 * C1435) *
                                    C29209) *
                                   C29220 * C29289 -
                               ((C92 * C159 + C79 * C292 + C90 * C158 +
                                 C78 * C291 + C88 * C157 + C77 * C290) *
                                    C29209 +
                                (C92 * C96 + C79 * C101 + C90 * C95 +
                                 C78 * C100 + C88 * C94 + C77 * C99) *
                                    C155) *
                                   C29220 * C3152) *
                                  C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C4440 * C93 + C29123 * C98) * C155 +
             (C4440 * C156 + C29123 * C289) * C29209) *
                C8556 +
            (C9642 + C9643) * C8557 + (C9644 + C9645) * C8558) *
               C3152 -
           (((C4440 * C9481 + C29123 * C9615) * C29209 +
             (C4440 * C9403 + C29123 * C9405) * C155) *
                C8558 +
            (C9645 + C9644) * C8557 + (C9643 + C9642) * C8556) *
               C29289) *
              C29179 * C1808 +
          (((C9646 + C9647) * C8556 + (C9648 + C9649) * C8557 +
            ((C4440 * C9404 + C29123 * C9406) * C155 +
             (C4440 * C9482 + C29123 * C9616) * C29209) *
                C8558) *
               C29289 -
           ((C9649 + C9648) * C8558 + (C9647 + C9646) * C8557 +
            ((C4440 * C157 + C29123 * C290) * C29209 +
             (C4440 * C94 + C29123 * C99) * C155) *
                C8556) *
               C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (-std::pow(Pi, 2.5) *
         (((C4605 * C93 + C4609 + C4609 + C4436 * C333 + C4606 * C642 + C4610 +
            C4610 + C4437 * C904 + C4607 * C2252 + C4611 + C4611 +
            C4438 * C2431) *
               C29123 * C29220 * C3152 -
           (C4607 * C5423 + C5648 + C5648 + C4438 * C5645 + C4606 * C2654 +
            C5649 + C5649 + C4437 * C2881 + C4605 * C1226 + C5650 + C5650 +
            C4436 * C1488) *
               C29123 * C29220 * C29289) *
              C29179 * C1808 +
          ((C4605 * C1225 + C5651 + C5651 + C4436 * C1487 + C4606 * C2655 +
            C5652 + C5652 + C4437 * C2882 + C4607 * C5424 + C5653 + C5653 +
            C4438 * C5646) *
               C29123 * C29220 * C29289 -
           (C4607 * C2253 + C4612 + C4612 + C4438 * C2432 + C4606 * C641 +
            C4613 + C4613 + C4437 * C903 + C4605 * C94 + C4614 + C4614 +
            C4436 * C334) *
               C29123 * C29220 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C29220 * C3152 -
           (C1503 * C79 + C1504 * C78 +
            (C332 * C1226 + C1497 + C1497 + C29209 * C1488) * C77) *
               C29220 * C29289) *
              C29179 * C1808 +
          ((C1504 * C77 + C1503 * C78 +
            (C332 * C1227 + C1498 + C1498 + C29209 * C1489) * C79) *
               C29220 * C29289 -
           (C358 * C79 + C357 * C78 + C356 * C77) * C29220 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C29123 * C8556 +
            C9720 * C8557 + C9721 * C8558) *
               C3152 -
           ((C332 * C9403 + C9706 + C9706 + C29209 * C9699) * C29123 * C8558 +
            C9721 * C8557 + C9720 * C8556) *
               C29289) *
              C29179 * C1808 +
          ((C9707 * C8556 + C9722 * C8557 +
            (C332 * C9404 + C9710 + C9710 + C29209 * C9700) * C29123 * C8558) *
               C29289 -
           (C9722 * C8558 + C9707 * C8557 + C356 * C29123 * C8556) * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[24] +=
        (-std::pow(Pi, 2.5) *
         ((((C222 * C93 + C29220 * C223) * C4488 +
            (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
            C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
               C29123 * C3152 -
           (C7067 * C4438 + C6888 * C4490 + C7068 * C4437 + C6890 * C4489 +
            (C222 * C1294 + C29220 * C1556) * C4436 +
            (C222 * C1226 + C29220 * C1364) * C4488) *
               C29123 * C29289) *
              C29179 * C1808 +
          ((C1382 * C4488 + C1566 * C4436 +
            (C222 * C2655 + C29220 * C2773) * C4489 +
            (C222 * C2717 + C29220 * C2938) * C4437 +
            (C222 * C5424 + C29220 * C5540) * C4490 +
            (C222 * C5486 + C29220 * C5704) * C4438) *
               C29123 * C29289 -
           (C5180 * C4438 + C4978 * C4490 + C982 * C4437 + C798 * C4489 +
            C411 * C4436 + C246 * C4488) *
               C29123 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C222 * C93 + C29220 * C223) * C155 +
             (C222 * C156 + C29220 * C396) * C29209) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C3152 -
           ((C1567 + C1561) * C79 + (C1568 + C1564) * C78 +
            ((C222 * C1294 + C29220 * C1556) * C29209 +
             (C222 * C1226 + C29220 * C1364) * C155) *
                C77) *
               C29289) *
              C29179 * C1808 +
          (((C1564 + C1568) * C77 + (C1561 + C1567) * C78 +
            ((C222 * C1227 + C29220 * C1365) * C155 +
             (C222 * C1295 + C29220 * C1557) * C29209) *
                C79) *
               C29289 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8638 * C93 + C8556 * C223 + C8639 * C1226 + C8557 * C1364 +
             C8640 * C4045 + C8558 * C4139) *
                C155 +
            (C8638 * C156 + C8556 * C396 + C8639 * C1294 + C8557 * C1556 +
             C8640 * C4095 + C8558 * C4268) *
                C29209) *
               C29123 * C3152 -
           ((C8640 * C9481 + C8558 * C9772 + C8639 * C4095 + C8557 * C4268 +
             C8638 * C1294 + C8556 * C1556) *
                C29209 +
            (C8640 * C9403 + C8558 * C9561 + C8639 * C4045 + C8557 * C4139 +
             C8638 * C1226 + C8556 * C1364) *
                C155) *
               C29123 * C29289) *
              C29179 * C1808 +
          (((C8638 * C1225 + C8556 * C1363 + C8639 * C4046 + C8557 * C4140 +
             C8640 * C9404 + C8558 * C9562) *
                C155 +
            (C8638 * C1293 + C8556 * C1555 + C8639 * C4096 + C8557 * C4269 +
             C8640 * C9482 + C8558 * C9773) *
                C29209) *
               C29123 * C29289 -
           ((C8640 * C4096 + C8558 * C4269 + C8639 * C1293 + C8557 * C1555 +
             C8638 * C157 + C8556 * C397) *
                C29209 +
            (C8640 * C4046 + C8558 * C4140 + C8639 * C1225 + C8557 * C1363 +
             C8638 * C94 + C8556 * C224) *
                C155) *
               C29123 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (-std::pow(Pi, 2.5) *
         (((((C4440 * C93 + C29123 * C98) * C222 +
             (C4440 * C223 + C29123 * C455) * C29220) *
                C4436 +
            (C5233 + C5249) * C4437 + C6619 * C4438) *
               C3152 -
           ((C7128 + C7122) * C4438 + (C7129 + C7125) * C4437 +
            ((C4440 * C1364 + C29123 * C1620) * C29220 +
             (C4440 * C1226 + C29123 * C1230) * C222) *
                C4436) *
               C29289) *
              C29179 * C1808 +
          ((((C4440 * C1225 + C29123 * C1229) * C222 +
             (C4440 * C1363 + C29123 * C1619) * C29220) *
                C4436 +
            ((C4440 * C2655 + C29123 * C2658) * C222 +
             (C4440 * C2773 + C29123 * C2991) * C29220) *
                C4437 +
            ((C4440 * C5424 + C29123 * C5426) * C222 +
             (C4440 * C5540 + C29123 * C5756) * C29220) *
                C4438) *
               C29289 -
           ((C5252 + C5242) * C4438 + (C5251 + C5239) * C4437 +
            ((C4440 * C224 + C29123 * C456) * C29220 +
             (C4440 * C94 + C29123 * C99) * C222) *
                C4436) *
               C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                                 C92 * C95 + C79 * C100) *
                                    C222 +
                                (C88 * C223 + C77 * C455 + C90 * C224 +
                                 C78 * C456 + C92 * C225 + C79 * C457) *
                                    C29220) *
                                   C29209 * C3152 -
                               ((C92 * C1362 + C79 * C1618 + C90 * C1363 +
                                 C78 * C1619 + C88 * C1364 + C77 * C1620) *
                                    C29220 +
                                (C92 * C1224 + C79 * C1228 + C90 * C1225 +
                                 C78 * C1229 + C88 * C1226 + C77 * C1230) *
                                    C222) *
                                   C29209 * C29289) *
                                  C29179 * C1808 +
                              (((C88 * C1225 + C77 * C1229 + C90 * C1224 +
                                 C78 * C1228 + C92 * C1227 + C79 * C1231) *
                                    C222 +
                                (C88 * C1363 + C77 * C1619 + C90 * C1362 +
                                 C78 * C1618 + C92 * C1365 + C79 * C1621) *
                                    C29220) *
                                   C29209 * C29289 -
                               ((C92 * C226 + C79 * C458 + C90 * C225 +
                                 C78 * C457 + C88 * C224 + C77 * C456) *
                                    C29220 +
                                (C92 * C96 + C79 * C101 + C90 * C95 +
                                 C78 * C100 + C88 * C94 + C77 * C99) *
                                    C222) *
                                   C29209 * C3152) *
                                  C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C8638 +
            (C4440 * C223 + C29123 * C455) * C8556 + C9634 * C8639 +
            C9835 * C8557 + C9636 * C8640 + C9836 * C8558) *
               C29209 * C3152 -
           ((C4440 * C9561 + C29123 * C9824) * C8558 +
            (C4440 * C9403 + C29123 * C9405) * C8640 + C9836 * C8557 +
            C9636 * C8639 + C9835 * C8556 + C9634 * C8638) *
               C29209 * C29289) *
              C29179 * C1808 +
          ((C9638 * C8638 + C9837 * C8556 + C9640 * C8639 + C9838 * C8557 +
            (C4440 * C9404 + C29123 * C9406) * C8640 +
            (C4440 * C9562 + C29123 * C9825) * C8558) *
               C29209 * C29289 -
           (C9838 * C8558 + C9640 * C8640 + C9837 * C8557 + C9638 * C8639 +
            (C4440 * C224 + C29123 * C456) * C8556 +
            (C4440 * C94 + C29123 * C99) * C8638) *
               C29209 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezy[24] +=
        (-std::pow(Pi, 2.5) *
         ((((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
             C4490 * C2252 + C4438 * C2302) *
                C222 +
            (C4488 * C223 + C4436 * C498 + C4489 * C780 + C4437 * C1090 +
             C4490 * C2346 + C4438 * C2557) *
                C29220) *
               C29123 * C3152 -
           ((C4490 * C5539 + C4438 * C5807 + C4489 * C2772 + C4437 * C3043 +
             C4488 * C1364 + C4436 * C1674) *
                C29220 +
            (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 + C4437 * C2716 +
             C4488 * C1226 + C4436 * C1294) *
                C222) *
               C29123 * C29289) *
              C29179 * C1808 +
          (((C4488 * C1225 + C4436 * C1293 + C4489 * C2655 + C4437 * C2717 +
             C4490 * C5424 + C4438 * C5486) *
                C222 +
            (C4488 * C1363 + C4436 * C1673 + C4489 * C2773 + C4437 * C3044 +
             C4490 * C5540 + C4438 * C5808) *
                C29220) *
               C29123 * C29289 -
           ((C4490 * C2347 + C4438 * C2558 + C4489 * C779 + C4437 * C1089 +
             C4488 * C224 + C4436 * C499) *
                C29220 +
            (C4490 * C2253 + C4438 * C2303 + C4489 * C641 + C4437 * C709 +
             C4488 * C94 + C4436 * C157) *
                C222) *
               C29123 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C222 +
             (C155 * C223 + C29209 * C498) * C29220) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C3152 -
           ((C1685 + C1679) * C79 + (C1686 + C1682) * C78 +
            ((C155 * C1364 + C29209 * C1674) * C29220 +
             (C155 * C1226 + C29209 * C1294) * C222) *
                C77) *
               C29289) *
              C29179 * C1808 +
          (((C1682 + C1686) * C77 + (C1679 + C1685) * C78 +
            ((C155 * C1227 + C29209 * C1295) * C222 +
             (C155 * C1365 + C29209 * C1675) * C29220) *
                C79) *
               C29289 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C29209 * C156) * C8638 +
            (C155 * C223 + C29209 * C498) * C8556 + C9500 * C8639 +
            C9897 * C8557 + C9502 * C8640 + C9898 * C8558) *
               C29123 * C3152 -
           ((C155 * C9561 + C29209 * C9888) * C8558 +
            (C155 * C9403 + C29209 * C9481) * C8640 + C9898 * C8557 +
            C9502 * C8639 + C9897 * C8556 + C9500 * C8638) *
               C29123 * C29289) *
              C29179 * C1808 +
          ((C1312 * C8638 + C1684 * C8556 + C9504 * C8639 + C9899 * C8557 +
            (C155 * C9404 + C29209 * C9482) * C8640 +
            (C155 * C9562 + C29209 * C9889) * C8558) *
               C29123 * C29289 -
           (C9899 * C8558 + C9504 * C8640 + C1684 * C8557 + C1312 * C8639 +
            C513 * C8556 + C179 * C8638) *
               C29123 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (-std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
            C5372 * C4438) *
               C29123 * C3152 -
           (C7241 * C4438 + C7242 * C4437 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C4436) *
               C29123 * C29289) *
              C29179 * C1808 +
          ((C1754 * C4436 +
            (C557 * C2655 + C3101 + C3101 + C29220 * C3097) * C4437 +
            (C557 * C5424 + C5863 + C5863 + C29220 * C5860) * C4438) *
               C29123 * C29289 -
           (C5373 * C4438 + C1170 * C4437 + C581 * C4436) * C29123 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
            C584 * C78 + C585 * C79) *
               C3152 -
           (C1755 * C79 + C1756 * C78 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C29209 * C77) *
               C29289) *
              C29179 * C1808 +
          ((C1756 * C77 + C1755 * C78 +
            (C557 * C1227 + C1748 + C1748 + C29220 * C1739) * C29209 * C79) *
               C29289 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8869 * C93 + C8873 + C8873 + C8556 * C558 + C8870 * C1226 + C8874 +
            C8874 + C8557 * C1738 + C8871 * C4045 + C8875 + C8875 +
            C8558 * C4391) *
               C29209 * C29123 * C3152 -
           (C8871 * C9403 + C9952 + C9952 + C8558 * C9949 + C8870 * C4045 +
            C9953 + C9953 + C8557 * C4391 + C8869 * C1226 + C9954 + C9954 +
            C8556 * C1738) *
               C29209 * C29123 * C29289) *
              C29179 * C1808 +
          ((C8869 * C1225 + C9955 + C9955 + C8556 * C1737 + C8870 * C4046 +
            C9956 + C9956 + C8557 * C4392 + C8871 * C9404 + C9957 + C9957 +
            C8558 * C9950) *
               C29209 * C29123 * C29289 -
           (C8871 * C4046 + C8876 + C8876 + C8558 * C4392 + C8870 * C1225 +
            C8877 + C8877 + C8557 * C1737 + C8869 * C94 + C8878 + C8878 +
            C8556 * C559) *
               C29209 * C29123 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexx[25] +=
        (-std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
            C4848 * C4437 + C4849 * C4438) *
               C3152 -
           (C6773 * C4438 + C6774 * C4437 +
            (C4439 * C1226 + C5432 + C5432 + C29123 * C1234) * C29220 * C4436) *
               C29289) *
              C636 +
          ((C6774 * C4436 + C6773 * C4437 +
            (C4439 * C6758 + C6766 + C6766 + C29123 * C6760) * C29220 * C4438) *
               C29289 -
           (C6361 * C4438 + C4849 * C4437 + C4848 * C4436) * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C29220 * C29209 * C3152 -
           (C91 * C1224 + C1237 + C1237 + C79 * C1232 + C89 * C1225 + C1238 +
            C1238 + C78 * C1233 + C87 * C1226 + C1239 + C1239 + C77 * C1234) *
               C29220 * C29209 * C29289) *
              C636 +
          ((C87 * C2654 + C2664 + C2664 + C77 * C2660 + C89 * C2655 + C2665 +
            C2665 + C78 * C2661 + C91 * C2656 + C2666 + C2666 + C79 * C2662) *
               C29220 * C29209 * C29289 -
           (C91 * C640 + C653 + C653 + C79 * C648 + C89 * C641 + C654 + C654 +
            C78 * C649 + C87 * C642 + C655 + C655 + C77 * C650) *
               C29220 * C29209 * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C8556 +
            C9428 * C8557 + C9429 * C8558) *
               C29209 * C3152 -
           ((C4439 * C9403 + C9414 + C9414 + C29123 * C9407) * C8558 +
            C9429 * C8557 + C9428 * C8556) *
               C29209 * C29289) *
              C636 +
          ((C6772 * C8556 + C10813 * C8557 +
            (C4439 * C10804 + C10810 + C10810 + C29123 * C10806) * C8558) *
               C29209 * C29289 -
           (C10813 * C8558 + C6772 * C8557 + C4844 * C8556) * C29209 * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eexy[25] += (-std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C4440 +
                      (C4488 * C98 + C4436 * C161 + C4489 * C646 +
                       C4437 * C714 + C4490 * C2255 + C4438 * C2305) *
                          C29123) *
                         C29220 * C3152 -
                     ((C4490 * C5425 + C4438 * C5487 + C4489 * C2657 +
                       C4437 * C2719 + C4488 * C1230 + C4436 * C1298) *
                          C29123 +
                      (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 +
                       C4437 * C2716 + C4488 * C1226 + C4436 * C1294) *
                          C4440) *
                         C29220 * C29289) *
                        C636 +
                    (((C4488 * C2654 + C4436 * C2716 + C4489 * C5423 +
                       C4437 * C5485 + C4490 * C6758 + C4438 * C6824) *
                          C4440 +
                      (C4488 * C2657 + C4436 * C2719 + C4489 * C5425 +
                       C4437 * C5487 + C4490 * C6759 + C4438 * C6825) *
                          C29123) *
                         C29220 * C29289 -
                     ((C4490 * C4821 + C4438 * C4903 + C4489 * C2255 +
                       C4437 * C2305 + C4488 * C646 + C4436 * C714) *
                          C29123 +
                      (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                       C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                          C4440) *
                         C29220 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C88 +
                      (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C29220 * C3152 -
                     (C1309 * C79 + C1310 * C92 + C1311 * C78 + C1312 * C90 +
                      (C155 * C1230 + C29209 * C1298) * C77 +
                      (C155 * C1226 + C29209 * C1294) * C88) *
                         C29220 * C29289) *
                        C636 +
                    (((C155 * C2654 + C29209 * C2716) * C88 +
                      (C155 * C2657 + C29209 * C2719) * C77 +
                      (C155 * C2655 + C29209 * C2717) * C90 +
                      (C155 * C2658 + C29209 * C2720) * C78 +
                      (C155 * C2656 + C29209 * C2718) * C92 +
                      (C155 * C2659 + C29209 * C2721) * C79) *
                         C29220 * C29289 -
                     (C725 * C79 + C726 * C92 + C727 * C78 + C728 * C90 +
                      (C155 * C646 + C29209 * C714) * C77 +
                      (C155 * C642 + C29209 * C710) * C88) *
                         C29220 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C4440 +
                       (C155 * C98 + C29209 * C161) * C29123) *
                          C8556 +
                      (C9506 + C9507) * C8557 + (C9508 + C9509) * C8558) *
                         C3152 -
                     (((C155 * C9405 + C29209 * C9483) * C29123 +
                       (C155 * C9403 + C29209 * C9481) * C4440) *
                          C8558 +
                      (C9509 + C9508) * C8557 + (C9507 + C9506) * C8556) *
                         C29289) *
                        C636 +
                    (((C10878 + C10879) * C8556 + (C10880 + C10881) * C8557 +
                      ((C155 * C10804 + C29209 * C10863) * C4440 +
                       (C155 * C10805 + C29209 * C10864) * C29123) *
                          C8558) *
                         C29289 -
                     ((C10881 + C10880) * C8558 + (C10879 + C10878) * C8557 +
                      ((C155 * C646 + C29209 * C714) * C29123 +
                       (C155 * C642 + C29209 * C710) * C4440) *
                          C8556) *
                         C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eexz[25] += (-std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C4440 +
                       (C222 * C98 + C29220 * C228) * C29123) *
                          C4436 +
                      (C4980 + C4981) * C4437 + C6442 * C4438) *
                         C3152 -
                     ((C6891 + C6892) * C4438 + (C6893 + C6894) * C4437 +
                      ((C222 * C1230 + C29220 * C1368) * C29123 +
                       (C222 * C1226 + C29220 * C1364) * C4440) *
                          C4436) *
                         C29289) *
                        C636 +
                    (((C6894 + C6893) * C4436 + (C6892 + C6891) * C4437 +
                      ((C222 * C6758 + C29220 * C6876) * C4440 +
                       (C222 * C6759 + C29220 * C6877) * C29123) *
                          C4438) *
                         C29289 -
                     ((C6449 + C6450) * C4438 + (C4983 + C4982) * C4437 +
                      (C4981 + C4980) * C4436) *
                         C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C88 +
                      (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C29209 * C3152 -
                     (C1379 * C79 + C1380 * C92 + C1381 * C78 + C1382 * C90 +
                      (C222 * C1230 + C29220 * C1368) * C77 +
                      (C222 * C1226 + C29220 * C1364) * C88) *
                         C29209 * C29289) *
                        C636 +
                    (((C222 * C2654 + C29220 * C2772) * C88 +
                      (C222 * C2657 + C29220 * C2775) * C77 +
                      (C222 * C2655 + C29220 * C2773) * C90 +
                      (C222 * C2658 + C29220 * C2776) * C78 +
                      (C222 * C2656 + C29220 * C2774) * C92 +
                      (C222 * C2659 + C29220 * C2777) * C79) *
                         C29209 * C29289 -
                     (C795 * C79 + C796 * C92 + C797 * C78 + C798 * C90 +
                      (C222 * C646 + C29220 * C784) * C77 +
                      (C222 * C642 + C29220 * C780) * C88) *
                         C29209 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C8638 * C93 + C8556 * C223 + C8639 * C1226 +
                       C8557 * C1364 + C8640 * C4045 + C8558 * C4139) *
                          C4440 +
                      (C8638 * C98 + C8556 * C228 + C8639 * C1230 +
                       C8557 * C1368 + C8640 * C4048 + C8558 * C4142) *
                          C29123) *
                         C29209 * C3152 -
                     ((C8640 * C9405 + C8558 * C9563 + C8639 * C4048 +
                       C8557 * C4142 + C8638 * C1230 + C8556 * C1368) *
                          C29123 +
                      (C8640 * C9403 + C8558 * C9561 + C8639 * C4045 +
                       C8557 * C4139 + C8638 * C1226 + C8556 * C1364) *
                          C4440) *
                         C29209 * C29289) *
                        C636 +
                    (((C8638 * C2654 + C8556 * C2772 + C8639 * C8180 +
                       C8557 * C8269 + C8640 * C10804 + C8558 * C10931) *
                          C4440 +
                      (C8638 * C2657 + C8556 * C2775 + C8639 * C8182 +
                       C8557 * C8271 + C8640 * C10805 + C8558 * C10932) *
                          C29123) *
                         C29209 * C29289 -
                     ((C8640 * C8182 + C8558 * C8271 + C8639 * C2657 +
                       C8557 * C2775 + C8638 * C646 + C8556 * C784) *
                          C29123 +
                      (C8640 * C8180 + C8558 * C8269 + C8639 * C2654 +
                       C8557 * C2772 + C8638 * C642 + C8556 * C780) *
                          C4440) *
                         C29209 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[25] += (-std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C4488 +
                      (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
                      C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
                         C29220 * C3152 -
                     (C6954 * C4438 + C6955 * C4490 + C6956 * C4437 +
                      C6957 * C4489 + (C4440 * C1294 + C29123 * C1434) * C4436 +
                      (C4440 * C1226 + C29123 * C1230) * C4488) *
                         C29220 * C29289) *
                        C636 +
                    ((C6957 * C4488 + C6956 * C4436 + C6955 * C4489 +
                      C6954 * C4437 + (C4440 * C6758 + C29123 * C6759) * C4490 +
                      (C4440 * C6824 + C29123 * C6944) * C4438) *
                         C29220 * C29289 -
                     (C6494 * C4438 + C6495 * C4490 + C5057 * C4437 +
                      C5056 * C4489 + C5055 * C4436 + C5054 * C4488) *
                         C29220 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C29209) *
                         C29220 * C3152 -
                     ((C92 * C1292 + C79 * C1432 + C90 * C1293 + C78 * C1433 +
                       C88 * C1294 + C77 * C1434) *
                          C29209 +
                      (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
                       C88 * C1226 + C77 * C1230) *
                          C155) *
                         C29220 * C29289) *
                        C636 +
                    (((C88 * C2654 + C77 * C2657 + C90 * C2655 + C78 * C2658 +
                       C92 * C2656 + C79 * C2659) *
                          C155 +
                      (C88 * C2716 + C77 * C2828 + C90 * C2717 + C78 * C2829 +
                       C92 * C2718 + C79 * C2830) *
                          C29209) *
                         C29220 * C29289 -
                     ((C92 * C708 + C79 * C848 + C90 * C709 + C78 * C849 +
                       C88 * C710 + C77 * C850) *
                          C29209 +
                      (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                       C88 * C642 + C77 * C646) *
                          C155) *
                         C29220 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C155 +
                       (C4440 * C156 + C29123 * C289) * C29209) *
                          C8556 +
                      (C9642 + C9643) * C8557 + (C9644 + C9645) * C8558) *
                         C3152 -
                     (((C4440 * C9481 + C29123 * C9615) * C29209 +
                       (C4440 * C9403 + C29123 * C9405) * C155) *
                          C8558 +
                      (C9645 + C9644) * C8557 + (C9643 + C9642) * C8556) *
                         C29289) *
                        C636 +
                    (((C10985 + C10986) * C8556 + (C10993 + C10994) * C8557 +
                      ((C4440 * C10804 + C29123 * C10805) * C155 +
                       (C4440 * C10863 + C29123 * C10983) * C29209) *
                          C8558) *
                         C29289 -
                     ((C10994 + C10993) * C8558 + (C10986 + C10985) * C8557 +
                      (C5055 * C29209 + C5054 * C155) * C8556) *
                         C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[25] +=
        (-std::pow(Pi, 2.5) *
         (((C4605 * C93 + C4609 + C4609 + C4436 * C333 + C4606 * C642 + C4610 +
            C4610 + C4437 * C904 + C4607 * C2252 + C4611 + C4611 +
            C4438 * C2431) *
               C29123 * C29220 * C3152 -
           (C4607 * C5423 + C5648 + C5648 + C4438 * C5645 + C4606 * C2654 +
            C5649 + C5649 + C4437 * C2881 + C4605 * C1226 + C5650 + C5650 +
            C4436 * C1488) *
               C29123 * C29220 * C29289) *
              C636 +
          ((C4605 * C2654 + C7009 + C7009 + C4436 * C2881 + C4606 * C5423 +
            C7010 + C7010 + C4437 * C5645 + C4607 * C6758 + C7011 + C7011 +
            C4438 * C7007) *
               C29123 * C29220 * C29289 -
           (C4607 * C4819 + C5114 + C5114 + C4438 * C5111 + C4606 * C2252 +
            C5115 + C5115 + C4437 * C2431 + C4605 * C642 + C5116 + C5116 +
            C4436 * C904) *
               C29123 * C29220 * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C29220 * C3152 -
           (C1503 * C79 + C1504 * C78 +
            (C332 * C1226 + C1497 + C1497 + C29209 * C1488) * C77) *
               C29220 * C29289) *
              C636 +
          (((C332 * C2654 + C2885 + C2885 + C29209 * C2881) * C77 +
            (C332 * C2655 + C2886 + C2886 + C29209 * C2882) * C78 +
            (C332 * C2656 + C2887 + C2887 + C29209 * C2883) * C79) *
               C29220 * C29289 -
           (C919 * C79 + C920 * C78 +
            (C332 * C642 + C913 + C913 + C29209 * C904) * C77) *
               C29220 * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C29123 * C8556 +
            C9720 * C8557 + C9721 * C8558) *
               C3152 -
           ((C332 * C9403 + C9706 + C9706 + C29209 * C9699) * C29123 * C8558 +
            C9721 * C8557 + C9720 * C8556) *
               C29289) *
              C636 +
          ((C11057 * C8556 + C11058 * C8557 +
            (C332 * C10804 + C11050 + C11050 + C29209 * C11044) * C29123 *
                C8558) *
               C29289 -
           (C11058 * C8558 + C11057 * C8557 +
            (C332 * C642 + C913 + C913 + C29209 * C904) * C29123 * C8556) *
               C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eeyz[25] += (-std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C4488 +
                      (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
                      C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
                         C29123 * C3152 -
                     (C7067 * C4438 + C6888 * C4490 + C7068 * C4437 +
                      C6890 * C4489 + (C222 * C1294 + C29220 * C1556) * C4436 +
                      (C222 * C1226 + C29220 * C1364) * C4488) *
                         C29123 * C29289) *
                        C636 +
                    ((C6890 * C4488 + C7068 * C4436 + C6888 * C4489 +
                      C7067 * C4437 + (C222 * C6758 + C29220 * C6876) * C4490 +
                      (C222 * C6824 + C29220 * C7061) * C4438) *
                         C29123 * C29289 -
                     (C6579 * C4438 + C6448 * C4490 + C5179 * C4437 +
                      C4976 * C4489 + C5178 * C4436 + C4974 * C4488) *
                         C29123 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C155 +
                       (C222 * C156 + C29220 * C396) * C29209) *
                          C77 +
                      (C402 + C414) * C78 + C417 * C79) *
                         C3152 -
                     ((C1567 + C1561) * C79 + (C1568 + C1564) * C78 +
                      ((C222 * C1294 + C29220 * C1556) * C29209 +
                       (C222 * C1226 + C29220 * C1364) * C155) *
                          C77) *
                         C29289) *
                        C636 +
                    ((((C222 * C2654 + C29220 * C2772) * C155 +
                       (C222 * C2716 + C29220 * C2937) * C29209) *
                          C77 +
                      ((C222 * C2655 + C29220 * C2773) * C155 +
                       (C222 * C2717 + C29220 * C2938) * C29209) *
                          C78 +
                      ((C222 * C2656 + C29220 * C2774) * C155 +
                       (C222 * C2718 + C29220 * C2939) * C29209) *
                          C79) *
                         C29289 -
                     ((C983 + C977) * C79 + (C984 + C980) * C78 +
                      ((C222 * C710 + C29220 * C972) * C29209 +
                       (C222 * C642 + C29220 * C780) * C155) *
                          C77) *
                         C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C8638 * C93 + C8556 * C223 + C8639 * C1226 +
                       C8557 * C1364 + C8640 * C4045 + C8558 * C4139) *
                          C155 +
                      (C8638 * C156 + C8556 * C396 + C8639 * C1294 +
                       C8557 * C1556 + C8640 * C4095 + C8558 * C4268) *
                          C29209) *
                         C29123 * C3152 -
                     ((C8640 * C9481 + C8558 * C9772 + C8639 * C4095 +
                       C8557 * C4268 + C8638 * C1294 + C8556 * C1556) *
                          C29209 +
                      (C8640 * C9403 + C8558 * C9561 + C8639 * C4045 +
                       C8557 * C4139 + C8638 * C1226 + C8556 * C1364) *
                          C155) *
                         C29123 * C29289) *
                        C636 +
                    (((C8638 * C2654 + C8556 * C2772 + C8639 * C8180 +
                       C8557 * C8269 + C8640 * C10804 + C8558 * C10931) *
                          C155 +
                      (C8638 * C2716 + C8556 * C2937 + C8639 * C8227 +
                       C8557 * C8394 + C8640 * C10863 + C8558 * C11108) *
                          C29209) *
                         C29123 * C29289 -
                     ((C8640 * C8227 + C8558 * C8394 + C8639 * C2716 +
                       C8557 * C2937 + C8638 * C710 + C8556 * C972) *
                          C29209 +
                      (C8640 * C8180 + C8558 * C8269 + C8639 * C2654 +
                       C8557 * C2772 + C8638 * C642 + C8556 * C780) *
                          C155) *
                         C29123 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezx[25] +=
        (-std::pow(Pi, 2.5) *
         (((((C4440 * C93 + C29123 * C98) * C222 +
             (C4440 * C223 + C29123 * C455) * C29220) *
                C4436 +
            (C5233 + C5249) * C4437 + C6619 * C4438) *
               C3152 -
           ((C7128 + C7122) * C4438 + (C7129 + C7125) * C4437 +
            ((C4440 * C1364 + C29123 * C1620) * C29220 +
             (C4440 * C1226 + C29123 * C1230) * C222) *
                C4436) *
               C29289) *
              C636 +
          (((C7125 + C7129) * C4436 + (C7122 + C7128) * C4437 +
            ((C4440 * C6758 + C29123 * C6759) * C222 +
             (C4440 * C6876 + C29123 * C7118) * C29220) *
                C4438) *
               C29289 -
           ((C6624 + C6622) * C4438 + (C5250 + C5236) * C4437 +
            (C5249 + C5233) * C4436) *
               C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
             C79 * C100) *
                C222 +
            (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 + C92 * C225 +
             C79 * C457) *
                C29220) *
               C29209 * C3152 -
           ((C92 * C1362 + C79 * C1618 + C90 * C1363 + C78 * C1619 +
             C88 * C1364 + C77 * C1620) *
                C29220 +
            (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
             C88 * C1226 + C77 * C1230) *
                C222) *
               C29209 * C29289) *
              C636 +
          (((C88 * C2654 + C77 * C2657 + C90 * C2655 + C78 * C2658 +
             C92 * C2656 + C79 * C2659) *
                C222 +
            (C88 * C2772 + C77 * C2990 + C90 * C2773 + C78 * C2991 +
             C92 * C2774 + C79 * C2992) *
                C29220) *
               C29209 * C29289 -
           ((C92 * C778 + C79 * C1034 + C90 * C779 + C78 * C1035 + C88 * C780 +
             C77 * C1036) *
                C29220 +
            (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 + C88 * C642 +
             C77 * C646) *
                C222) *
               C29209 * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C8638 +
            (C4440 * C223 + C29123 * C455) * C8556 + C9634 * C8639 +
            C9835 * C8557 + C9636 * C8640 + C9836 * C8558) *
               C29209 * C3152 -
           ((C4440 * C9561 + C29123 * C9824) * C8558 +
            (C4440 * C9403 + C29123 * C9405) * C8640 + C9836 * C8557 +
            C9636 * C8639 + C9835 * C8556 + C9634 * C8638) *
               C29209 * C29289) *
              C636 +
          ((C6957 * C8638 + C7127 * C8556 + C10991 * C8639 + C11163 * C8557 +
            (C4440 * C10804 + C29123 * C10805) * C8640 +
            (C4440 * C10931 + C29123 * C11159) * C8558) *
               C29209 * C29289 -
           (C11163 * C8558 + C10991 * C8640 + C7127 * C8557 + C6957 * C8639 +
            C5245 * C8556 + C5054 * C8638) *
               C29209 * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eezy[25] +=
        (-std::pow(Pi, 2.5) *
         ((((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
             C4490 * C2252 + C4438 * C2302) *
                C222 +
            (C4488 * C223 + C4436 * C498 + C4489 * C780 + C4437 * C1090 +
             C4490 * C2346 + C4438 * C2557) *
                C29220) *
               C29123 * C3152 -
           ((C4490 * C5539 + C4438 * C5807 + C4489 * C2772 + C4437 * C3043 +
             C4488 * C1364 + C4436 * C1674) *
                C29220 +
            (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 + C4437 * C2716 +
             C4488 * C1226 + C4436 * C1294) *
                C222) *
               C29123 * C29289) *
              C636 +
          (((C4488 * C2654 + C4436 * C2716 + C4489 * C5423 + C4437 * C5485 +
             C4490 * C6758 + C4438 * C6824) *
                C222 +
            (C4488 * C2772 + C4436 * C3043 + C4489 * C5539 + C4437 * C5807 +
             C4490 * C6876 + C4438 * C7179) *
                C29220) *
               C29123 * C29289 -
           ((C4490 * C4955 + C4438 * C5302 + C4489 * C2346 + C4437 * C2557 +
             C4488 * C780 + C4436 * C1090) *
                C29220 +
            (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 + C4437 * C2302 +
             C4488 * C642 + C4436 * C710) *
                C222) *
               C29123 * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C222 +
             (C155 * C223 + C29209 * C498) * C29220) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C3152 -
           ((C1685 + C1679) * C79 + (C1686 + C1682) * C78 +
            ((C155 * C1364 + C29209 * C1674) * C29220 +
             (C155 * C1226 + C29209 * C1294) * C222) *
                C77) *
               C29289) *
              C636 +
          ((((C155 * C2654 + C29209 * C2716) * C222 +
             (C155 * C2772 + C29209 * C3043) * C29220) *
                C77 +
            ((C155 * C2655 + C29209 * C2717) * C222 +
             (C155 * C2773 + C29209 * C3044) * C29220) *
                C78 +
            ((C155 * C2656 + C29209 * C2718) * C222 +
             (C155 * C2774 + C29209 * C3045) * C29220) *
                C79) *
               C29289 -
           ((C1101 + C1095) * C79 + (C1102 + C1098) * C78 +
            ((C155 * C780 + C29209 * C1090) * C29220 +
             (C155 * C642 + C29209 * C710) * C222) *
                C77) *
               C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C29209 * C156) * C8638 +
            (C155 * C223 + C29209 * C498) * C8556 + C9500 * C8639 +
            C9897 * C8557 + C9502 * C8640 + C9898 * C8558) *
               C29123 * C3152 -
           ((C155 * C9561 + C29209 * C9888) * C8558 +
            (C155 * C9403 + C29209 * C9481) * C8640 + C9898 * C8557 +
            C9502 * C8639 + C9897 * C8556 + C9500 * C8638) *
               C29123 * C29289) *
              C636 +
          ((C10874 * C8638 + C11219 * C8556 + C10876 * C8639 + C11220 * C8557 +
            (C155 * C10804 + C29209 * C10863) * C8640 +
            (C155 * C10931 + C29209 * C11213) * C8558) *
               C29123 * C29289 -
           (C11220 * C8558 + C10876 * C8640 + C11219 * C8557 + C10874 * C8639 +
            (C155 * C780 + C29209 * C1090) * C8556 +
            (C155 * C642 + C29209 * C710) * C8638) *
               C29123 * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eezz[25] +=
        (-std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
            C5372 * C4438) *
               C29123 * C3152 -
           (C7241 * C4438 + C7242 * C4437 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C4436) *
               C29123 * C29289) *
              C636 +
          ((C7242 * C4436 + C7241 * C4437 +
            (C557 * C6758 + C7236 + C7236 + C29220 * C7230) * C4438) *
               C29123 * C29289 -
           (C6708 * C4438 + C5372 * C4437 + C5371 * C4436) * C29123 * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
            C584 * C78 + C585 * C79) *
               C3152 -
           (C1755 * C79 + C1756 * C78 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C29209 * C77) *
               C29289) *
              C636 +
          (((C557 * C2654 + C3100 + C3100 + C29220 * C3096) * C29209 * C77 +
            (C557 * C2655 + C3101 + C3101 + C29220 * C3097) * C29209 * C78 +
            (C557 * C2656 + C3102 + C3102 + C29220 * C3098) * C29209 * C79) *
               C29289 -
           (C1171 * C79 + C1172 * C78 +
            (C557 * C642 + C1163 + C1163 + C29220 * C1154) * C29209 * C77) *
               C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8869 * C93 + C8873 + C8873 + C8556 * C558 + C8870 * C1226 + C8874 +
            C8874 + C8557 * C1738 + C8871 * C4045 + C8875 + C8875 +
            C8558 * C4391) *
               C29209 * C29123 * C3152 -
           (C8871 * C9403 + C9952 + C9952 + C8558 * C9949 + C8870 * C4045 +
            C9953 + C9953 + C8557 * C4391 + C8869 * C1226 + C9954 + C9954 +
            C8556 * C1738) *
               C29209 * C29123 * C29289) *
              C636 +
          ((C8869 * C2654 + C11272 + C11272 + C8556 * C3096 + C8870 * C8180 +
            C11273 + C11273 + C8557 * C8514 + C8871 * C10804 + C11274 + C11274 +
            C8558 * C11270) *
               C29209 * C29123 * C29289 -
           (C8871 * C8180 + C9348 + C9348 + C8558 * C8514 + C8870 * C2654 +
            C9349 + C9349 + C8557 * C3096 + C8869 * C642 + C9350 + C9350 +
            C8556 * C1154) *
               C29209 * C29123 * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eexx[26] +=
        (-std::pow(Pi, 2.5) *
         (((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
           C4848 * C4437 + C4849 * C4438) *
              C4042 -
          (C6773 * C4438 + C6774 * C4437 +
           (C4439 * C1226 + C5432 + C5432 + C29123 * C1234) * C29220 * C4436) *
              C4043 +
          ((C4439 * C4045 + C8187 + C8187 + C29123 * C4051) * C29220 * C4436 +
           (C4439 * C8180 + C8188 + C8188 + C29123 * C8184) * C29220 * C4437 +
           (C4439 * C8181 + C8189 + C8189 + C29123 * C8185) * C29220 * C4438) *
              C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C29220 * C29209 * C4042 -
          (C91 * C1224 + C1237 + C1237 + C79 * C1232 + C89 * C1225 + C1238 +
           C1238 + C78 * C1233 + C87 * C1226 + C1239 + C1239 + C77 * C1234) *
              C29220 * C29209 * C4043 +
          (C87 * C4045 + C4055 + C4055 + C77 * C4051 + C89 * C4046 + C4056 +
           C4056 + C78 * C4052 + C91 * C4047 + C4057 + C4057 + C79 * C4053) *
              C29220 * C29209 * C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C8556 +
           C9428 * C8557 + C9429 * C8558) *
              C29209 * C4042 -
          (C12221 * C8558 + C9429 * C8557 + C9428 * C8556) * C29209 * C4043 +
          (C9429 * C8556 + C12221 * C8557 +
           (C4439 * C12212 + C12218 + C12218 + C29123 * C12214) * C8558) *
              C29209 * C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q));
    d2eexy[26] += (-std::pow(Pi, 2.5) *
                   (((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
                      C4490 * C2252 + C4438 * C2302) *
                         C4440 +
                     (C4488 * C98 + C4436 * C161 + C4489 * C646 + C4437 * C714 +
                      C4490 * C2255 + C4438 * C2305) *
                         C29123) *
                        C29220 * C4042 -
                    ((C4490 * C5425 + C4438 * C5487 + C4489 * C2657 +
                      C4437 * C2719 + C4488 * C1230 + C4436 * C1298) *
                         C29123 +
                     (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 +
                      C4437 * C2716 + C4488 * C1226 + C4436 * C1294) *
                         C4440) *
                        C29220 * C4043 +
                    ((C4488 * C4045 + C4436 * C4095 + C4489 * C8180 +
                      C4437 * C8227 + C4490 * C8181 + C4438 * C8228) *
                         C4440 +
                     (C4488 * C4048 + C4436 * C4098 + C4489 * C8182 +
                      C4437 * C8229 + C4490 * C8183 + C4438 * C8230) *
                         C29123) *
                        C29220 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C155 * C93 + C29209 * C156) * C88 +
                     (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C29220 * C4042 -
                    (C1309 * C79 + C1310 * C92 + C1311 * C78 + C1312 * C90 +
                     (C155 * C1230 + C29209 * C1298) * C77 +
                     (C155 * C1226 + C29209 * C1294) * C88) *
                        C29220 * C4043 +
                    ((C155 * C4045 + C29209 * C4095) * C88 +
                     (C155 * C4048 + C29209 * C4098) * C77 +
                     (C155 * C4046 + C29209 * C4096) * C90 +
                     (C155 * C4049 + C29209 * C4099) * C78 +
                     (C155 * C4047 + C29209 * C4097) * C92 +
                     (C155 * C4050 + C29209 * C4100) * C79) *
                        C29220 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C4440 +
                      (C155 * C98 + C29209 * C161) * C29123) *
                         C8556 +
                     (C9506 + C9507) * C8557 + C12262 * C8558) *
                        C4042 -
                    ((C12269 + C12270) * C8558 + (C9509 + C9508) * C8557 +
                     (C9507 + C9506) * C8556) *
                        C4043 +
                    (C12262 * C8556 + (C12270 + C12269) * C8557 +
                     ((C155 * C12212 + C29209 * C12259) * C4440 +
                      (C155 * C12213 + C29209 * C12260) * C29123) *
                         C8558) *
                        C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q));
    d2eexz[26] += (-std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C4440 +
                      (C222 * C98 + C29220 * C228) * C29123) *
                         C4436 +
                     (C4980 + C4981) * C4437 + C6442 * C4438) *
                        C4042 -
                    ((C6891 + C6892) * C4438 + (C6893 + C6894) * C4437 +
                     ((C222 * C1230 + C29220 * C1368) * C29123 +
                      (C222 * C1226 + C29220 * C1364) * C4440) *
                         C4436) *
                        C4043 +
                    (((C222 * C4045 + C29220 * C4139) * C4440 +
                      (C222 * C4048 + C29220 * C4142) * C29123) *
                         C4436 +
                     ((C222 * C8180 + C29220 * C8269) * C4440 +
                      (C222 * C8182 + C29220 * C8271) * C29123) *
                         C4437 +
                     ((C222 * C8181 + C29220 * C8270) * C4440 +
                      (C222 * C8183 + C29220 * C8272) * C29123) *
                         C4438) *
                        C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C222 * C93 + C29220 * C223) * C88 +
                     (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C29209 * C4042 -
                    (C1379 * C79 + C1380 * C92 + C1381 * C78 + C1382 * C90 +
                     (C222 * C1230 + C29220 * C1368) * C77 +
                     (C222 * C1226 + C29220 * C1364) * C88) *
                        C29209 * C4043 +
                    ((C222 * C4045 + C29220 * C4139) * C88 +
                     (C222 * C4048 + C29220 * C4142) * C77 +
                     (C222 * C4046 + C29220 * C4140) * C90 +
                     (C222 * C4049 + C29220 * C4143) * C78 +
                     (C222 * C4047 + C29220 * C4141) * C92 +
                     (C222 * C4050 + C29220 * C4144) * C79) *
                        C29209 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C8638 * C93 + C8556 * C223 + C8639 * C1226 +
                      C8557 * C1364 + C8640 * C4045 + C8558 * C4139) *
                         C4440 +
                     (C8638 * C98 + C8556 * C228 + C8639 * C1230 +
                      C8557 * C1368 + C8640 * C4048 + C8558 * C4142) *
                         C29123) *
                        C29209 * C4042 -
                    ((C8640 * C9405 + C8558 * C9563 + C8639 * C4048 +
                      C8557 * C4142 + C8638 * C1230 + C8556 * C1368) *
                         C29123 +
                     (C8640 * C9403 + C8558 * C9561 + C8639 * C4045 +
                      C8557 * C4139 + C8638 * C1226 + C8556 * C1364) *
                         C4440) *
                        C29209 * C4043 +
                    ((C8638 * C4045 + C8556 * C4139 + C8639 * C9403 +
                      C8557 * C9561 + C8640 * C12212 + C8558 * C12308) *
                         C4440 +
                     (C8638 * C4048 + C8556 * C4142 + C8639 * C9405 +
                      C8557 * C9563 + C8640 * C12213 + C8558 * C12309) *
                         C29123) *
                        C29209 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[26] += (-std::pow(Pi, 2.5) *
                   (((C4440 * C93 + C29123 * C98) * C4488 +
                     (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
                     C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
                        C29220 * C4042 -
                    (C6954 * C4438 + C6955 * C4490 + C6956 * C4437 +
                     C6957 * C4489 + (C4440 * C1294 + C29123 * C1434) * C4436 +
                     (C4440 * C1226 + C29123 * C1230) * C4488) *
                        C29220 * C4043 +
                    ((C4440 * C4045 + C29123 * C4048) * C4488 +
                     (C4440 * C4095 + C29123 * C4183) * C4436 +
                     (C4440 * C8180 + C29123 * C8182) * C4489 +
                     (C4440 * C8227 + C29123 * C8311) * C4437 +
                     (C4440 * C8181 + C29123 * C8183) * C4490 +
                     (C4440 * C8228 + C29123 * C8312) * C4438) *
                        C29220 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C29209) *
                        C29220 * C4042 -
                    ((C92 * C1292 + C79 * C1432 + C90 * C1293 + C78 * C1433 +
                      C88 * C1294 + C77 * C1434) *
                         C29209 +
                     (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
                      C88 * C1226 + C77 * C1230) *
                         C155) *
                        C29220 * C4043 +
                    ((C88 * C4045 + C77 * C4048 + C90 * C4046 + C78 * C4049 +
                      C92 * C4047 + C79 * C4050) *
                         C155 +
                     (C88 * C4095 + C77 * C4183 + C90 * C4096 + C78 * C4184 +
                      C92 * C4097 + C79 * C4185) *
                         C29209) *
                        C29220 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C155 +
                      (C4440 * C156 + C29123 * C289) * C29209) *
                         C8556 +
                     (C9642 + C9643) * C8557 + C12350 * C8558) *
                        C4042 -
                    ((C12357 + C12358) * C8558 + (C9645 + C9644) * C8557 +
                     (C9643 + C9642) * C8556) *
                        C4043 +
                    (C12350 * C8556 + (C12358 + C12357) * C8557 +
                     ((C4440 * C12212 + C29123 * C12213) * C155 +
                      (C4440 * C12259 + C29123 * C12348) * C29209) *
                         C8558) *
                        C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[26] +=
        (-std::pow(Pi, 2.5) *
         ((C4605 * C93 + C4609 + C4609 + C4436 * C333 + C4606 * C642 + C4610 +
           C4610 + C4437 * C904 + C4607 * C2252 + C4611 + C4611 +
           C4438 * C2431) *
              C29123 * C29220 * C4042 -
          (C4607 * C5423 + C5648 + C5648 + C4438 * C5645 + C4606 * C2654 +
           C5649 + C5649 + C4437 * C2881 + C4605 * C1226 + C5650 + C5650 +
           C4436 * C1488) *
              C29123 * C29220 * C4043 +
          (C4605 * C4045 + C8354 + C8354 + C4436 * C4224 + C4606 * C8180 +
           C8355 + C8355 + C4437 * C8351 + C4607 * C8181 + C8356 + C8356 +
           C4438 * C8352) *
              C29123 * C29220 * C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C29209 * C333) * C77 + C356 * C78 +
           C357 * C79) *
              C29220 * C4042 -
          (C1503 * C79 + C1504 * C78 +
           (C332 * C1226 + C1497 + C1497 + C29209 * C1488) * C77) *
              C29220 * C4043 +
          ((C332 * C4045 + C4228 + C4228 + C29209 * C4224) * C77 +
           (C332 * C4046 + C4229 + C4229 + C29209 * C4225) * C78 +
           (C332 * C4047 + C4230 + C4230 + C29209 * C4226) * C79) *
              C29220 * C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C29209 * C333) * C29123 * C8556 +
           C9720 * C8557 + C9721 * C8558) *
              C4042 -
          (C12404 * C8558 + C9721 * C8557 + C9720 * C8556) * C4043 +
          (C9721 * C8556 + C12404 * C8557 +
           (C332 * C12212 + C12400 + C12400 + C29209 * C12396) * C29123 *
               C8558) *
              C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q));
    d2eeyz[26] += (-std::pow(Pi, 2.5) *
                   (((C222 * C93 + C29220 * C223) * C4488 +
                     (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
                     C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
                        C29123 * C4042 -
                    (C7067 * C4438 + C6888 * C4490 + C7068 * C4437 +
                     C6890 * C4489 + (C222 * C1294 + C29220 * C1556) * C4436 +
                     (C222 * C1226 + C29220 * C1364) * C4488) *
                        C29123 * C4043 +
                    ((C222 * C4045 + C29220 * C4139) * C4488 +
                     (C222 * C4095 + C29220 * C4268) * C4436 +
                     (C222 * C8180 + C29220 * C8269) * C4489 +
                     (C222 * C8227 + C29220 * C8394) * C4437 +
                     (C222 * C8181 + C29220 * C8270) * C4490 +
                     (C222 * C8228 + C29220 * C8395) * C4438) *
                        C29123 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C155 +
                      (C222 * C156 + C29220 * C396) * C29209) *
                         C77 +
                     (C402 + C414) * C78 + C417 * C79) *
                        C4042 -
                    ((C1567 + C1561) * C79 + (C1568 + C1564) * C78 +
                     ((C222 * C1294 + C29220 * C1556) * C29209 +
                      (C222 * C1226 + C29220 * C1364) * C155) *
                         C77) *
                        C4043 +
                    (((C222 * C4045 + C29220 * C4139) * C155 +
                      (C222 * C4095 + C29220 * C4268) * C29209) *
                         C77 +
                     ((C222 * C4046 + C29220 * C4140) * C155 +
                      (C222 * C4096 + C29220 * C4269) * C29209) *
                         C78 +
                     ((C222 * C4047 + C29220 * C4141) * C155 +
                      (C222 * C4097 + C29220 * C4270) * C29209) *
                         C79) *
                        C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C8638 * C93 + C8556 * C223 + C8639 * C1226 +
                      C8557 * C1364 + C8640 * C4045 + C8558 * C4139) *
                         C155 +
                     (C8638 * C156 + C8556 * C396 + C8639 * C1294 +
                      C8557 * C1556 + C8640 * C4095 + C8558 * C4268) *
                         C29209) *
                        C29123 * C4042 -
                    ((C8640 * C9481 + C8558 * C9772 + C8639 * C4095 +
                      C8557 * C4268 + C8638 * C1294 + C8556 * C1556) *
                         C29209 +
                     (C8640 * C9403 + C8558 * C9561 + C8639 * C4045 +
                      C8557 * C4139 + C8638 * C1226 + C8556 * C1364) *
                         C155) *
                        C29123 * C4043 +
                    ((C8638 * C4045 + C8556 * C4139 + C8639 * C9403 +
                      C8557 * C9561 + C8640 * C12212 + C8558 * C12308) *
                         C155 +
                     (C8638 * C4095 + C8556 * C4268 + C8639 * C9481 +
                      C8557 * C9772 + C8640 * C12259 + C8558 * C12442) *
                         C29209) *
                        C29123 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezx[26] +=
        (-std::pow(Pi, 2.5) *
         ((((C4440 * C93 + C29123 * C98) * C222 +
            (C4440 * C223 + C29123 * C455) * C29220) *
               C4436 +
           (C5233 + C5249) * C4437 + C6619 * C4438) *
              C4042 -
          ((C7128 + C7122) * C4438 + (C7129 + C7125) * C4437 +
           ((C4440 * C1364 + C29123 * C1620) * C29220 +
            (C4440 * C1226 + C29123 * C1230) * C222) *
               C4436) *
              C4043 +
          (((C4440 * C4045 + C29123 * C4048) * C222 +
            (C4440 * C4139 + C29123 * C4309) * C29220) *
               C4436 +
           ((C4440 * C8180 + C29123 * C8182) * C222 +
            (C4440 * C8269 + C29123 * C8434) * C29220) *
               C4437 +
           ((C4440 * C8181 + C29123 * C8183) * C222 +
            (C4440 * C8270 + C29123 * C8435) * C29220) *
               C4438) *
              C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
            C79 * C100) *
               C222 +
           (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 + C92 * C225 +
            C79 * C457) *
               C29220) *
              C29209 * C4042 -
          ((C92 * C1362 + C79 * C1618 + C90 * C1363 + C78 * C1619 +
            C88 * C1364 + C77 * C1620) *
               C29220 +
           (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
            C88 * C1226 + C77 * C1230) *
               C222) *
              C29209 * C4043 +
          ((C88 * C4045 + C77 * C4048 + C90 * C4046 + C78 * C4049 +
            C92 * C4047 + C79 * C4050) *
               C222 +
           (C88 * C4139 + C77 * C4309 + C90 * C4140 + C78 * C4310 +
            C92 * C4141 + C79 * C4311) *
               C29220) *
              C29209 * C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C4440 * C93 + C29123 * C98) * C8638 +
           (C4440 * C223 + C29123 * C455) * C8556 + C9634 * C8639 +
           C9835 * C8557 + C9636 * C8640 + C9836 * C8558) *
              C29209 * C4042 -
          (C12485 * C8558 + C12356 * C8640 + C9836 * C8557 + C9636 * C8639 +
           C9835 * C8556 + C9634 * C8638) *
              C29209 * C4043 +
          (C9636 * C8638 + C9836 * C8556 + C12356 * C8639 + C12485 * C8557 +
           (C4440 * C12212 + C29123 * C12213) * C8640 +
           (C4440 * C12308 + C29123 * C12481) * C8558) *
              C29209 * C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q));
    d2eezy[26] +=
        (-std::pow(Pi, 2.5) *
         (((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
            C4490 * C2252 + C4438 * C2302) *
               C222 +
           (C4488 * C223 + C4436 * C498 + C4489 * C780 + C4437 * C1090 +
            C4490 * C2346 + C4438 * C2557) *
               C29220) *
              C29123 * C4042 -
          ((C4490 * C5539 + C4438 * C5807 + C4489 * C2772 + C4437 * C3043 +
            C4488 * C1364 + C4436 * C1674) *
               C29220 +
           (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 + C4437 * C2716 +
            C4488 * C1226 + C4436 * C1294) *
               C222) *
              C29123 * C4043 +
          ((C4488 * C4045 + C4436 * C4095 + C4489 * C8180 + C4437 * C8227 +
            C4490 * C8181 + C4438 * C8228) *
               C222 +
           (C4488 * C4139 + C4436 * C4350 + C4489 * C8269 + C4437 * C8474 +
            C4490 * C8270 + C4438 * C8475) *
               C29220) *
              C29123 * C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C155 * C93 + C29209 * C156) * C222 +
            (C155 * C223 + C29209 * C498) * C29220) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C4042 -
          ((C1685 + C1679) * C79 + (C1686 + C1682) * C78 +
           ((C155 * C1364 + C29209 * C1674) * C29220 +
            (C155 * C1226 + C29209 * C1294) * C222) *
               C77) *
              C4043 +
          (((C155 * C4045 + C29209 * C4095) * C222 +
            (C155 * C4139 + C29209 * C4350) * C29220) *
               C77 +
           ((C155 * C4046 + C29209 * C4096) * C222 +
            (C155 * C4140 + C29209 * C4351) * C29220) *
               C78 +
           ((C155 * C4047 + C29209 * C4097) * C222 +
            (C155 * C4141 + C29209 * C4352) * C29220) *
               C79) *
              C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C155 * C93 + C29209 * C156) * C8638 +
           (C155 * C223 + C29209 * C498) * C8556 + C9500 * C8639 +
           C9897 * C8557 + C9502 * C8640 + C9898 * C8558) *
              C29123 * C4042 -
          (C12527 * C8558 + C12268 * C8640 + C9898 * C8557 + C9502 * C8639 +
           C9897 * C8556 + C9500 * C8638) *
              C29123 * C4043 +
          (C9502 * C8638 + C9898 * C8556 + C12268 * C8639 + C12527 * C8557 +
           (C155 * C12212 + C29209 * C12259) * C8640 +
           (C155 * C12308 + C29209 * C12523) * C8558) *
              C29123 * C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q));
    d2eezz[26] +=
        (-std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
           C5372 * C4438) *
              C29123 * C4042 -
          (C7241 * C4438 + C7242 * C4437 +
           (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C4436) *
              C29123 * C4043 +
          ((C557 * C4045 + C4395 + C4395 + C29220 * C4391) * C4436 +
           (C557 * C8180 + C8517 + C8517 + C29220 * C8514) * C4437 +
           (C557 * C8181 + C8518 + C8518 + C29220 * C8515) * C4438) *
              C29123 * C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
           C584 * C78 + C585 * C79) *
              C4042 -
          (C1755 * C79 + C1756 * C78 +
           (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C29209 * C77) *
              C4043 +
          ((C557 * C4045 + C4395 + C4395 + C29220 * C4391) * C29209 * C77 +
           (C557 * C4046 + C4396 + C4396 + C29220 * C4392) * C29209 * C78 +
           (C557 * C4047 + C4397 + C4397 + C29220 * C4393) * C29209 * C79) *
              C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C8869 * C93 + C8873 + C8873 + C8556 * C558 + C8870 * C1226 + C8874 +
           C8874 + C8557 * C1738 + C8871 * C4045 + C8875 + C8875 +
           C8558 * C4391) *
              C29209 * C29123 * C4042 -
          (C8871 * C9403 + C9952 + C9952 + C8558 * C9949 + C8870 * C4045 +
           C9953 + C9953 + C8557 * C4391 + C8869 * C1226 + C9954 + C9954 +
           C8556 * C1738) *
              C29209 * C29123 * C4043 +
          (C8869 * C4045 + C12567 + C12567 + C8556 * C4391 + C8870 * C9403 +
           C12568 + C12568 + C8557 * C9949 + C8871 * C12212 + C12569 + C12569 +
           C8558 * C12565) *
              C29209 * C29123 * C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q));
    d2eexx[27] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                      C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                         C17888 +
                     (C12623 * C1226 + C13891 + C13891 + C12619 * C1234 +
                      C12625 * C1225 + C13890 + C13890 + C12620 * C1233) *
                         C17889) *
                        C29209 * C29196 * C29179 * C84 -
                    ((C12625 * C1224 + C13893 + C13893 + C12620 * C1232 +
                      C12623 * C1225 + C13892 + C13892 + C12619 * C1233) *
                         C17889 +
                     (C12625 * C95 + C12634 + C12634 + C12620 * C105 +
                      C12623 * C94 + C12635 + C12635 + C12619 * C104) *
                         C17888) *
                        C29209 * C29196 * C29179 * C85 +
                    ((C12623 * C95 + C12636 + C12636 + C12619 * C105 +
                      C12625 * C96 + C12637 + C12637 + C12620 * C106) *
                         C17888 +
                     (C12623 * C1224 + C17891 + C17891 + C12619 * C1232 +
                      C12625 * C1227 + C17892 + C17892 + C12620 * C1235) *
                         C17889) *
                        C29209 * C29196 * C29179 * C86)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C29209 * C156) * C12624 +
            (C155 * C98 + C29209 * C161) * C12619 + C179 * C12626 +
            C180 * C12620) *
               C17888 +
           (C9500 * C12624 + C9501 * C12619 + C1312 * C12626 + C1311 * C12620) *
               C17889) *
              C29196 * C29179 * C84 -
          ((C1309 * C12620 + C1310 * C12626 + C1311 * C12619 + C1312 * C12624) *
               C17889 +
           (C182 * C12620 + C181 * C12626 + C180 * C12619 + C179 * C12624) *
               C17888) *
              C29196 * C29179 * C85 +
          ((C181 * C12624 + C182 * C12619 + C184 * C12626 + C183 * C12620) *
               C17888 +
           (C1310 * C12624 + C1309 * C12619 +
            (C155 * C1227 + C29209 * C1295) * C12626 +
            (C155 * C1231 + C29209 * C1299) * C12620) *
               C17889) *
              C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eexz[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
               C12624 +
           (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
               C12619 +
           (C18011 + C18012) * C12626 + (C18013 + C18014) * C12620) *
              C29209 * C29196 * C29179 * C84 -
          ((C18015 + C18016) * C12620 + (C18017 + C18018) * C12626 +
           (C18014 + C18013) * C12619 + (C18012 + C18011) * C12624) *
              C29209 * C29196 * C29179 * C85 +
          ((C18018 + C18017) * C12624 + (C18016 + C18015) * C12619 +
           (C17992 * C96 + C17888 * C226 + C17993 * C1227 + C17889 * C1365) *
               C12626 +
           (C17992 * C101 + C17888 * C231 + C17993 * C1231 + C17889 * C1369) *
               C12620) *
              C29209 * C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) * C155 +
            (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                C29209) *
               C17888 +
           ((C12624 * C1226 + C12619 * C1230 + C12626 * C1225 +
             C12620 * C1229) *
                C155 +
            (C12624 * C1294 + C12619 * C1434 + C12626 * C1293 +
             C12620 * C1433) *
                C29209) *
               C17889) *
              C29196 * C29179 * C84 -
          (((C12626 * C1292 + C12620 * C1432 + C12624 * C1293 +
             C12619 * C1433) *
                C29209 +
            (C12626 * C1224 + C12620 * C1228 + C12624 * C1225 +
             C12619 * C1229) *
                C155) *
               C17889 +
           ((C12626 * C158 + C12620 * C291 + C12624 * C157 + C12619 * C290) *
                C29209 +
            (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                C155) *
               C17888) *
              C29196 * C29179 * C85 +
          (((C12624 * C95 + C12619 * C100 + C12626 * C96 + C12620 * C101) *
                C155 +
            (C12624 * C158 + C12619 * C291 + C12626 * C159 + C12620 * C292) *
                C29209) *
               C17888 +
           ((C12624 * C1224 + C12619 * C1228 + C12626 * C1227 +
             C12620 * C1231) *
                C155 +
            (C12624 * C1292 + C12619 * C1432 + C12626 * C1295 +
             C12620 * C1435) *
                C29209) *
               C17889) *
              C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C12619 +
            C356 * C12620) *
               C17888 +
           (C9717 * C12619 + C1504 * C12620) * C17889) *
              C29196 * C29179 * C84 -
          ((C1503 * C12620 + C1504 * C12619) * C17889 +
           (C357 * C12620 + C356 * C12619) * C17888) *
              C29196 * C29179 * C85 +
          ((C357 * C12619 + C358 * C12620) * C17888 +
           (C1503 * C12619 +
            (C332 * C1227 + C1498 + C1498 + C29209 * C1489) * C12620) *
               C17889) *
              C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C155 +
            (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                C29209) *
               C12619 +
           ((C18011 + C18012) * C155 + (C18177 + C18178) * C29209) * C12620) *
              C29196 * C29179 * C84 -
          (((C18179 + C18180) * C29209 + (C18017 + C18018) * C155) * C12620 +
           ((C18178 + C18177) * C29209 + (C18012 + C18011) * C155) * C12619) *
              C29196 * C29179 * C85 +
          (((C18018 + C18017) * C155 + (C18180 + C18179) * C29209) * C12619 +
           ((C17992 * C96 + C17888 * C226 + C17993 * C1227 + C17889 * C1365) *
                C155 +
            (C17992 * C159 + C17888 * C399 + C17993 * C1295 + C17889 * C1557) *
                C29209) *
               C12620) *
              C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eezx[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
               C17992 +
           (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
               C17888 +
           (C12624 * C1226 + C12619 * C1230 + C12626 * C1225 + C12620 * C1229) *
               C17993 +
           (C12624 * C1364 + C12619 * C1620 + C12626 * C1363 + C12620 * C1619) *
               C17889) *
              C29209 * C29196 * C29179 * C84 -
          ((C12626 * C1362 + C12620 * C1618 + C12624 * C1363 + C12619 * C1619) *
               C17889 +
           (C12626 * C1224 + C12620 * C1228 + C12624 * C1225 + C12619 * C1229) *
               C17993 +
           (C12626 * C225 + C12620 * C457 + C12624 * C224 + C12619 * C456) *
               C17888 +
           (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
               C17992) *
              C29209 * C29196 * C29179 * C85 +
          ((C12624 * C95 + C12619 * C100 + C12626 * C96 + C12620 * C101) *
               C17992 +
           (C12624 * C225 + C12619 * C457 + C12626 * C226 + C12620 * C458) *
               C17888 +
           (C12624 * C1224 + C12619 * C1228 + C12626 * C1227 + C12620 * C1231) *
               C17993 +
           (C12624 * C1362 + C12619 * C1618 + C12626 * C1365 + C12620 * C1621) *
               C17889) *
              C29209 * C29196 * C29179 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eezy[27] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C17992 +
                      (C155 * C223 + C29209 * C498) * C17888 + C9500 * C17993 +
                      C9897 * C17889) *
                         C12619 +
                     (C18281 + C18282 + C18283 + C18284) * C12620) *
                        C29196 * C29179 * C84 -
                    ((C18285 + C18286 + C18287 + C18288) * C12620 +
                     (C18284 + C18283 + C18282 + C18281) * C12619) *
                        C29196 * C29179 * C85 +
                    ((C18288 + C18287 + C18286 + C18285) * C12619 +
                     (C184 * C17992 + C515 * C17888 +
                      (C155 * C1227 + C29209 * C1295) * C17993 +
                      (C155 * C1365 + C29209 * C1675) * C17889) *
                         C12620) *
                        C29196 * C29179 * C86)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[27] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                      C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                         C29209 * C12619 +
                     (C18365 + C18366) * C29209 * C12620) *
                        C29196 * C29179 * C84 -
                    ((C18367 + C18368) * C29209 * C12620 +
                     (C18366 + C18365) * C29209 * C12619) *
                        C29196 * C29179 * C85 +
                    ((C18368 + C18367) * C29209 * C12619 +
                     (C18338 * C96 + C18355 + C18355 + C17888 * C561 +
                      C18339 * C1227 + C18356 + C18356 + C17889 * C1739) *
                         C29209 * C12620) *
                        C29196 * C29179 * C86)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                       C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                          C17888 +
                      (C12623 * C1226 + C13891 + C13891 + C12619 * C1234 +
                       C12625 * C1225 + C13890 + C13890 + C12620 * C1233) *
                          C17889) *
                         C29209 * C29196 * C636 -
                     ((C15636 + C15637) * C17889 + (C13207 + C13206) * C17888) *
                         C29209 * C29196 * C29287) *
                        C638 +
                    (((C13208 + C13209) * C17888 +
                      (C12623 * C2655 + C13894 + C13894 + C12619 * C2661 +
                       C12625 * C2656 + C13895 + C13895 + C12620 * C2662) *
                          C17889) *
                         C29209 * C29196 * C29287 -
                     ((C12625 * C1224 + C13893 + C13893 + C12620 * C1232 +
                       C12623 * C1225 + C13892 + C13892 + C12619 * C1233) *
                          C17889 +
                      (C12625 * C95 + C12634 + C12634 + C12620 * C105 +
                       C12623 * C94 + C12635 + C12635 + C12619 * C104) *
                          C17888) *
                         C29209 * C29196 * C636) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C12624 +
             (C155 * C98 + C29209 * C161) * C12619 + C179 * C12626 +
             C180 * C12620) *
                C17888 +
            (C9500 * C12624 + C9501 * C12619 + C1312 * C12626 +
             C1311 * C12620) *
                C17889) *
               C29196 * C636 -
           ((C18505 * C12620 + C18506 * C12626 + C10875 * C12619 +
             C10874 * C12624) *
                C17889 +
            (C727 * C12620 + C728 * C12626 +
             (C155 * C646 + C29209 * C714) * C12619 +
             (C155 * C642 + C29209 * C710) * C12624) *
                C17888) *
               C29196 * C29287) *
              C638 +
          (((C728 * C12624 + C727 * C12619 + C726 * C12626 + C725 * C12620) *
                C17888 +
            (C18506 * C12624 + C18505 * C12619 +
             (C155 * C2656 + C29209 * C2718) * C12626 +
             (C155 * C2659 + C29209 * C2721) * C12620) *
                C17889) *
               C29196 * C29287 -
           ((C1309 * C12620 + C1310 * C12626 + C1311 * C12619 +
             C1312 * C12624) *
                C17889 +
            (C182 * C12620 + C181 * C12626 + C180 * C12619 + C179 * C12624) *
                C17888) *
               C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexz[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C12624 +
            (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                C12619 +
            (C18011 + C18012) * C12626 + (C18013 + C18014) * C12620) *
               C29209 * C29196 * C636 -
           ((C18581 + C18582) * C12620 + (C18583 + C18584) * C12626 +
            (C17993 * C2657 + C17889 * C2775 + C17992 * C646 + C17888 * C784) *
                C12619 +
            (C17993 * C2654 + C17889 * C2772 + C17992 * C642 + C17888 * C780) *
                C12624) *
               C29209 * C29196 * C29287) *
              C638 +
          (((C18584 + C18583) * C12624 + (C18582 + C18581) * C12619 +
            (C17992 * C640 + C17888 * C778 + C17993 * C2656 + C17889 * C2774) *
                C12626 +
            (C17992 * C644 + C17888 * C782 + C17993 * C2659 + C17889 * C2777) *
                C12620) *
               C29209 * C29196 * C29287 -
           ((C18015 + C18016) * C12620 + (C18017 + C18018) * C12626 +
            (C18014 + C18013) * C12619 + (C18012 + C18011) * C12624) *
               C29209 * C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                 C155 +
             (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                 C29209) *
                C17888 +
            ((C12624 * C1226 + C12619 * C1230 + C12626 * C1225 +
              C12620 * C1229) *
                 C155 +
             (C12624 * C1294 + C12619 * C1434 + C12626 * C1293 +
              C12620 * C1433) *
                 C29209) *
                C17889) *
               C29196 * C636 -
           (((C15848 + C15849) * C29209 + (C15850 + C15851) * C155) * C17889 +
            ((C13447 + C13446) * C29209 + (C13445 + C13444) * C155) * C17888) *
               C29196 * C29287) *
              C638 +
          ((((C13448 + C13449) * C155 + (C13450 + C13451) * C29209) * C17888 +
            ((C12624 * C2655 + C12619 * C2658 + C12626 * C2656 +
              C12620 * C2659) *
                 C155 +
             (C12624 * C2717 + C12619 * C2829 + C12626 * C2718 +
              C12620 * C2830) *
                 C29209) *
                C17889) *
               C29196 * C29287 -
           (((C12626 * C1292 + C12620 * C1432 + C12624 * C1293 +
              C12619 * C1433) *
                 C29209 +
             (C12626 * C1224 + C12620 * C1228 + C12624 * C1225 +
              C12619 * C1229) *
                 C155) *
                C17889 +
            ((C12626 * C158 + C12620 * C291 + C12624 * C157 + C12619 * C290) *
                 C29209 +
             (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                 C155) *
                C17888) *
               C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C29209 * C333) * C12619 +
             C356 * C12620) *
                C17888 +
            (C9717 * C12619 + C1504 * C12620) * C17889) *
               C29196 * C636 -
           ((C18721 * C12620 + C11055 * C12619) * C17889 +
            (C920 * C12620 +
             (C332 * C642 + C913 + C913 + C29209 * C904) * C12619) *
                C17888) *
               C29196 * C29287) *
              C638 +
          (((C920 * C12619 + C919 * C12620) * C17888 +
            (C18721 * C12619 +
             (C332 * C2656 + C2887 + C2887 + C29209 * C2883) * C12620) *
                C17889) *
               C29196 * C29287 -
           ((C1503 * C12620 + C1504 * C12619) * C17889 +
            (C357 * C12620 + C356 * C12619) * C17888) *
               C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                 C155 +
             (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                 C29209) *
                C12619 +
            ((C18011 + C18012) * C155 + (C18177 + C18178) * C29209) * C12620) *
               C29196 * C636 -
           (((C18792 + C18793) * C29209 + (C18583 + C18584) * C155) * C12620 +
            ((C17993 * C2716 + C17889 * C2937 + C17992 * C710 + C17888 * C972) *
                 C29209 +
             (C17993 * C2654 + C17889 * C2772 + C17992 * C642 + C17888 * C780) *
                 C155) *
                C12619) *
               C29196 * C29287) *
              C638 +
          ((((C18584 + C18583) * C155 + (C18793 + C18792) * C29209) * C12619 +
            ((C17992 * C640 + C17888 * C778 + C17993 * C2656 + C17889 * C2774) *
                 C155 +
             (C17992 * C708 + C17888 * C970 + C17993 * C2718 + C17889 * C2939) *
                 C29209) *
                C12620) *
               C29196 * C29287 -
           (((C18179 + C18180) * C29209 + (C18017 + C18018) * C155) * C12620 +
            ((C18178 + C18177) * C29209 + (C18012 + C18011) * C155) * C12619) *
               C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezx[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                C17992 +
            (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                C17888 +
            (C12624 * C1226 + C12619 * C1230 + C12626 * C1225 +
             C12620 * C1229) *
                C17993 +
            (C12624 * C1364 + C12619 * C1620 + C12626 * C1363 +
             C12620 * C1619) *
                C17889) *
               C29209 * C29196 * C636 -
           ((C16058 + C16059) * C17889 + (C15850 + C15851) * C17993 +
            (C13679 + C13678) * C17888 + (C13445 + C13444) * C17992) *
               C29209 * C29196 * C29287) *
              C638 +
          (((C13448 + C13449) * C17992 + (C13680 + C13681) * C17888 +
            (C12624 * C2655 + C12619 * C2658 + C12626 * C2656 +
             C12620 * C2659) *
                C17993 +
            (C12624 * C2773 + C12619 * C2991 + C12626 * C2774 +
             C12620 * C2992) *
                C17889) *
               C29209 * C29196 * C29287 -
           ((C12626 * C1362 + C12620 * C1618 + C12624 * C1363 +
             C12619 * C1619) *
                C17889 +
            (C12626 * C1224 + C12620 * C1228 + C12624 * C1225 +
             C12619 * C1229) *
                C17993 +
            (C12626 * C225 + C12620 * C457 + C12624 * C224 + C12619 * C456) *
                C17888 +
            (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                C17992) *
               C29209 * C29196 * C636) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezy[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C17992 +
                       (C155 * C223 + C29209 * C498) * C17888 + C9500 * C17993 +
                       C9897 * C17889) *
                          C12619 +
                      (C18281 + C18282 + C18283 + C18284) * C12620) *
                         C29196 * C636 -
                     ((C18932 + C18928 + C18929 + C18930) * C12620 +
                      (C11219 * C17889 + C10874 * C17993 +
                       (C155 * C780 + C29209 * C1090) * C17888 +
                       (C155 * C642 + C29209 * C710) * C17992) *
                          C12619) *
                         C29196 * C29287) *
                        C638 +
                    (((C18930 + C18929 + C18928 + C18932) * C12619 +
                      (C726 * C17992 + C1099 * C17888 +
                       (C155 * C2656 + C29209 * C2718) * C17993 +
                       (C155 * C2774 + C29209 * C3045) * C17889) *
                          C12620) *
                         C29196 * C29287 -
                     ((C18285 + C18286 + C18287 + C18288) * C12620 +
                      (C18284 + C18283 + C18282 + C18281) * C12619) *
                         C29196 * C636) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                       C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                          C29209 * C12619 +
                      (C18365 + C18366) * C29209 * C12620) *
                         C29196 * C636 -
                     ((C19013 + C19014) * C29209 * C12620 +
                      (C18339 * C2654 + C19005 + C19005 + C17889 * C3096 +
                       C18338 * C642 + C19006 + C19006 + C17888 * C1154) *
                          C29209 * C12619) *
                         C29196 * C29287) *
                        C638 +
                    (((C19014 + C19013) * C29209 * C12619 +
                      (C18338 * C640 + C19007 + C19007 + C17888 * C1152 +
                       C18339 * C2656 + C19008 + C19008 + C17889 * C3098) *
                          C29209 * C12620) *
                         C29196 * C29287 -
                     ((C18367 + C18368) * C29209 * C12620 +
                      (C18366 + C18365) * C29209 * C12619) *
                         C29196 * C636) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[29] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                       C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                          C17888 +
                      (C19099 + C19100) * C17889) *
                         C29209 * C1222 -
                     ((C12625 * C4046 + C17431 + C17431 + C12620 * C4052 +
                       C12623 * C4045 + C17430 + C17430 + C12619 * C4051) *
                          C17889 +
                      (C19100 + C19099) * C17888) *
                         C29209 * C29289) *
                        C29179 * C638 +
                    (((C19101 + C19102) * C17888 +
                      (C12623 * C4046 + C19089 + C19089 + C12619 * C4052 +
                       C12625 * C4047 + C19090 + C19090 + C12620 * C4053) *
                          C17889) *
                         C29209 * C29289 -
                     ((C19102 + C19101) * C17889 +
                      (C12625 * C95 + C12634 + C12634 + C12620 * C105 +
                       C12623 * C94 + C12635 + C12635 + C12619 * C104) *
                          C17888) *
                         C29209 * C1222) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C12624 +
             (C155 * C98 + C29209 * C161) * C12619 + C179 * C12626 +
             C180 * C12620) *
                C17888 +
            (C19169 + C19170 + C19171 + C19172) * C17889) *
               C1222 -
           ((C9505 * C12620 + C9504 * C12626 + C9503 * C12619 +
             C9502 * C12624) *
                C17889 +
            (C19172 + C19171 + C19170 + C19169) * C17888) *
               C29289) *
              C29179 * C638 +
          (((C19173 + C19174 + C19175 + C19176) * C17888 +
            (C9504 * C12624 + C9505 * C12619 +
             (C155 * C4047 + C29209 * C4097) * C12626 +
             (C155 * C4050 + C29209 * C4100) * C12620) *
                C17889) *
               C29289 -
           ((C19176 + C19175 + C19174 + C19173) * C17889 +
            (C182 * C12620 + C181 * C12626 + C180 * C12619 + C179 * C12624) *
                C17888) *
               C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexz[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C12624 +
            (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                C12619 +
            (C18011 + C18012) * C12626 + (C18013 + C18014) * C12620) *
               C29209 * C1222 -
           ((C19251 + C19252) * C12620 + (C19253 + C19254) * C12626 +
            (C17993 * C4048 + C17889 * C4142 + C17992 * C1230 +
             C17888 * C1368) *
                C12619 +
            (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
             C17888 * C1364) *
                C12624) *
               C29209 * C29289) *
              C29179 * C638 +
          (((C19254 + C19253) * C12624 + (C19252 + C19251) * C12619 +
            (C17992 * C1224 + C17888 * C1362 + C17993 * C4047 +
             C17889 * C4141) *
                C12626 +
            (C17992 * C1228 + C17888 * C1366 + C17993 * C4050 +
             C17889 * C4144) *
                C12620) *
               C29209 * C29289 -
           ((C18015 + C18016) * C12620 + (C18017 + C18018) * C12626 +
            (C18014 + C18013) * C12619 + (C18012 + C18011) * C12624) *
               C29209 * C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                 C155 +
             (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                 C29209) *
                C17888 +
            ((C19337 + C19338) * C155 + (C19339 + C19340) * C29209) * C17889) *
               C1222 -
           (((C12626 * C4096 + C12620 * C4184 + C12624 * C4095 +
              C12619 * C4183) *
                 C29209 +
             (C12626 * C4046 + C12620 * C4049 + C12624 * C4045 +
              C12619 * C4048) *
                 C155) *
                C17889 +
            ((C19340 + C19339) * C29209 + (C19338 + C19337) * C155) * C17888) *
               C29289) *
              C29179 * C638 +
          ((((C19341 + C19342) * C155 + (C19343 + C19344) * C29209) * C17888 +
            ((C12624 * C4046 + C12619 * C4049 + C12626 * C4047 +
              C12620 * C4050) *
                 C155 +
             (C12624 * C4096 + C12619 * C4184 + C12626 * C4097 +
              C12620 * C4185) *
                 C29209) *
                C17889) *
               C29289 -
           (((C19344 + C19343) * C29209 + (C19342 + C19341) * C155) * C17889 +
            ((C12626 * C158 + C12620 * C291 + C12624 * C157 + C12619 * C290) *
                 C29209 +
             (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                 C155) *
                C17888) *
               C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C29209 * C333) * C12619 +
             C356 * C12620) *
                C17888 +
            (C19411 + C19412) * C17889) *
               C1222 -
           ((C9719 * C12620 + C9718 * C12619) * C17889 +
            (C19412 + C19411) * C17888) *
               C29289) *
              C29179 * C638 +
          (((C19413 + C19414) * C17888 +
            (C9719 * C12619 +
             (C332 * C4047 + C4230 + C4230 + C29209 * C4226) * C12620) *
                C17889) *
               C29289 -
           ((C19414 + C19413) * C17889 +
            (C357 * C12620 + C356 * C12619) * C17888) *
               C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                 C155 +
             (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                 C29209) *
                C12619 +
            ((C18011 + C18012) * C155 + (C18177 + C18178) * C29209) * C12620) *
               C1222 -
           (((C19485 + C19486) * C29209 + (C19253 + C19254) * C155) * C12620 +
            ((C17993 * C4095 + C17889 * C4268 + C17992 * C1294 +
              C17888 * C1556) *
                 C29209 +
             (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
              C17888 * C1364) *
                 C155) *
                C12619) *
               C29289) *
              C29179 * C638 +
          ((((C19254 + C19253) * C155 + (C19486 + C19485) * C29209) * C12619 +
            ((C17992 * C1224 + C17888 * C1362 + C17993 * C4047 +
              C17889 * C4141) *
                 C155 +
             (C17992 * C1292 + C17888 * C1554 + C17993 * C4097 +
              C17889 * C4270) *
                 C29209) *
                C12620) *
               C29289 -
           (((C18179 + C18180) * C29209 + (C18017 + C18018) * C155) * C12620 +
            ((C18178 + C18177) * C29209 + (C18012 + C18011) * C155) * C12619) *
               C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezx[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                C17992 +
            (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                C17888 +
            (C19337 + C19338) * C17993 + (C19561 + C19562) * C17889) *
               C29209 * C1222 -
           ((C12626 * C4140 + C12620 * C4310 + C12624 * C4139 +
             C12619 * C4309) *
                C17889 +
            (C12626 * C4046 + C12620 * C4049 + C12624 * C4045 +
             C12619 * C4048) *
                C17993 +
            (C19562 + C19561) * C17888 + (C19338 + C19337) * C17992) *
               C29209 * C29289) *
              C29179 * C638 +
          (((C19341 + C19342) * C17992 + (C19563 + C19564) * C17888 +
            (C12624 * C4046 + C12619 * C4049 + C12626 * C4047 +
             C12620 * C4050) *
                C17993 +
            (C12624 * C4140 + C12619 * C4310 + C12626 * C4141 +
             C12620 * C4311) *
                C17889) *
               C29209 * C29289 -
           ((C19564 + C19563) * C17889 + (C19342 + C19341) * C17993 +
            (C12626 * C225 + C12620 * C457 + C12624 * C224 + C12619 * C456) *
                C17888 +
            (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                C17992) *
               C29209 * C1222) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezy[29] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C17992 +
                       (C155 * C223 + C29209 * C498) * C17888 + C9500 * C17993 +
                       C9897 * C17889) *
                          C12619 +
                      (C18281 + C18282 + C18283 + C18284) * C12620) *
                         C1222 -
                     ((C19631 + C19632 + C19633 + C19634) * C12620 +
                      (C9898 * C17889 + C9502 * C17993 + C9897 * C17888 +
                       C9500 * C17992) *
                          C12619) *
                         C29289) *
                        C29179 * C638 +
                    (((C19634 + C19633 + C19632 + C19631) * C12619 +
                      (C1310 * C17992 + C1683 * C17888 +
                       (C155 * C4047 + C29209 * C4097) * C17993 +
                       (C155 * C4141 + C29209 * C4352) * C17889) *
                          C12620) *
                         C29289 -
                     ((C18285 + C18286 + C18287 + C18288) * C12620 +
                      (C18284 + C18283 + C18282 + C18281) * C12619) *
                         C1222) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[29] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                       C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                          C29209 * C12619 +
                      (C18365 + C18366) * C29209 * C12620) *
                         C1222 -
                     ((C19715 + C19716) * C29209 * C12620 +
                      (C18339 * C4045 + C19707 + C19707 + C17889 * C4391 +
                       C18338 * C1226 + C19708 + C19708 + C17888 * C1738) *
                          C29209 * C12619) *
                         C29289) *
                        C29179 * C638 +
                    (((C19716 + C19715) * C29209 * C12619 +
                      (C18338 * C1224 + C19709 + C19709 + C17888 * C1736 +
                       C18339 * C4047 + C19710 + C19710 + C17889 * C4393) *
                          C29209 * C12620) *
                         C29289 -
                     ((C18367 + C18368) * C29209 * C12620 +
                      (C18366 + C18365) * C29209 * C12619) *
                         C1222) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[30] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                       C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                          C17888 +
                      (C19099 + C19100) * C17889) *
                         C29209 * C29196 * C1806 -
                     ((C15636 + C15637) * C17889 + (C13207 + C13206) * C17888) *
                         C29209 * C29196 * C29287) *
                        C1808 +
                    (((C13208 + C13209) * C17888 +
                      (C12623 * C2655 + C13894 + C13894 + C12619 * C2661 +
                       C12625 * C2656 + C13895 + C13895 + C12620 * C2662) *
                          C17889) *
                         C29209 * C29196 * C29287 -
                     ((C19102 + C19101) * C17889 +
                      (C12625 * C95 + C12634 + C12634 + C12620 * C105 +
                       C12623 * C94 + C12635 + C12635 + C12619 * C104) *
                          C17888) *
                         C29209 * C29196 * C1806) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C12624 +
             (C155 * C98 + C29209 * C161) * C12619 + C179 * C12626 +
             C180 * C12620) *
                C17888 +
            (C19169 + C19170 + C19171 + C19172) * C17889) *
               C29196 * C1806 -
           ((C18505 * C12620 + C18506 * C12626 + C10875 * C12619 +
             C10874 * C12624) *
                C17889 +
            (C727 * C12620 + C728 * C12626 +
             (C155 * C646 + C29209 * C714) * C12619 +
             (C155 * C642 + C29209 * C710) * C12624) *
                C17888) *
               C29196 * C29287) *
              C1808 +
          (((C728 * C12624 + C727 * C12619 + C726 * C12626 + C725 * C12620) *
                C17888 +
            (C18506 * C12624 + C18505 * C12619 +
             (C155 * C2656 + C29209 * C2718) * C12626 +
             (C155 * C2659 + C29209 * C2721) * C12620) *
                C17889) *
               C29196 * C29287 -
           ((C19176 + C19175 + C19174 + C19173) * C17889 +
            (C182 * C12620 + C181 * C12626 + C180 * C12619 + C179 * C12624) *
                C17888) *
               C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C12624 +
            (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                C12619 +
            (C18011 + C18012) * C12626 + (C18013 + C18014) * C12620) *
               C29209 * C29196 * C1806 -
           ((C18581 + C18582) * C12620 + (C18583 + C18584) * C12626 +
            (C17993 * C2657 + C17889 * C2775 + C17992 * C646 + C17888 * C784) *
                C12619 +
            (C17993 * C2654 + C17889 * C2772 + C17992 * C642 + C17888 * C780) *
                C12624) *
               C29209 * C29196 * C29287) *
              C1808 +
          (((C18584 + C18583) * C12624 + (C18582 + C18581) * C12619 +
            (C17992 * C640 + C17888 * C778 + C17993 * C2656 + C17889 * C2774) *
                C12626 +
            (C17992 * C644 + C17888 * C782 + C17993 * C2659 + C17889 * C2777) *
                C12620) *
               C29209 * C29196 * C29287 -
           ((C18015 + C18016) * C12620 + (C18017 + C18018) * C12626 +
            (C18014 + C18013) * C12619 + (C18012 + C18011) * C12624) *
               C29209 * C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                 C155 +
             (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                 C29209) *
                C17888 +
            ((C19337 + C19338) * C155 + (C19339 + C19340) * C29209) * C17889) *
               C29196 * C1806 -
           (((C15848 + C15849) * C29209 + (C15850 + C15851) * C155) * C17889 +
            ((C13447 + C13446) * C29209 + (C13445 + C13444) * C155) * C17888) *
               C29196 * C29287) *
              C1808 +
          ((((C13448 + C13449) * C155 + (C13450 + C13451) * C29209) * C17888 +
            ((C12624 * C2655 + C12619 * C2658 + C12626 * C2656 +
              C12620 * C2659) *
                 C155 +
             (C12624 * C2717 + C12619 * C2829 + C12626 * C2718 +
              C12620 * C2830) *
                 C29209) *
                C17889) *
               C29196 * C29287 -
           (((C19344 + C19343) * C29209 + (C19342 + C19341) * C155) * C17889 +
            ((C12626 * C158 + C12620 * C291 + C12624 * C157 + C12619 * C290) *
                 C29209 +
             (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                 C155) *
                C17888) *
               C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C29209 * C333) * C12619 +
             C356 * C12620) *
                C17888 +
            (C19411 + C19412) * C17889) *
               C29196 * C1806 -
           ((C18721 * C12620 + C11055 * C12619) * C17889 +
            (C920 * C12620 +
             (C332 * C642 + C913 + C913 + C29209 * C904) * C12619) *
                C17888) *
               C29196 * C29287) *
              C1808 +
          (((C920 * C12619 + C919 * C12620) * C17888 +
            (C18721 * C12619 +
             (C332 * C2656 + C2887 + C2887 + C29209 * C2883) * C12620) *
                C17889) *
               C29196 * C29287 -
           ((C19414 + C19413) * C17889 +
            (C357 * C12620 + C356 * C12619) * C17888) *
               C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                 C155 +
             (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                 C29209) *
                C12619 +
            ((C18011 + C18012) * C155 + (C18177 + C18178) * C29209) * C12620) *
               C29196 * C1806 -
           (((C18792 + C18793) * C29209 + (C18583 + C18584) * C155) * C12620 +
            ((C17993 * C2716 + C17889 * C2937 + C17992 * C710 + C17888 * C972) *
                 C29209 +
             (C17993 * C2654 + C17889 * C2772 + C17992 * C642 + C17888 * C780) *
                 C155) *
                C12619) *
               C29196 * C29287) *
              C1808 +
          ((((C18584 + C18583) * C155 + (C18793 + C18792) * C29209) * C12619 +
            ((C17992 * C640 + C17888 * C778 + C17993 * C2656 + C17889 * C2774) *
                 C155 +
             (C17992 * C708 + C17888 * C970 + C17993 * C2718 + C17889 * C2939) *
                 C29209) *
                C12620) *
               C29196 * C29287 -
           (((C18179 + C18180) * C29209 + (C18017 + C18018) * C155) * C12620 +
            ((C18178 + C18177) * C29209 + (C18012 + C18011) * C155) * C12619) *
               C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                C17992 +
            (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                C17888 +
            (C19337 + C19338) * C17993 + (C19561 + C19562) * C17889) *
               C29209 * C29196 * C1806 -
           ((C16058 + C16059) * C17889 + (C15850 + C15851) * C17993 +
            (C13679 + C13678) * C17888 + (C13445 + C13444) * C17992) *
               C29209 * C29196 * C29287) *
              C1808 +
          (((C13448 + C13449) * C17992 + (C13680 + C13681) * C17888 +
            (C12624 * C2655 + C12619 * C2658 + C12626 * C2656 +
             C12620 * C2659) *
                C17993 +
            (C12624 * C2773 + C12619 * C2991 + C12626 * C2774 +
             C12620 * C2992) *
                C17889) *
               C29209 * C29196 * C29287 -
           ((C19564 + C19563) * C17889 + (C19342 + C19341) * C17993 +
            (C12626 * C225 + C12620 * C457 + C12624 * C224 + C12619 * C456) *
                C17888 +
            (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                C17992) *
               C29209 * C29196 * C1806) *
              C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezy[30] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C17992 +
                       (C155 * C223 + C29209 * C498) * C17888 + C9500 * C17993 +
                       C9897 * C17889) *
                          C12619 +
                      (C18281 + C18282 + C18283 + C18284) * C12620) *
                         C29196 * C1806 -
                     ((C18932 + C18928 + C18929 + C18930) * C12620 +
                      (C11219 * C17889 + C10874 * C17993 +
                       (C155 * C780 + C29209 * C1090) * C17888 +
                       (C155 * C642 + C29209 * C710) * C17992) *
                          C12619) *
                         C29196 * C29287) *
                        C1808 +
                    (((C18930 + C18929 + C18928 + C18932) * C12619 +
                      (C726 * C17992 + C1099 * C17888 +
                       (C155 * C2656 + C29209 * C2718) * C17993 +
                       (C155 * C2774 + C29209 * C3045) * C17889) *
                          C12620) *
                         C29196 * C29287 -
                     ((C18285 + C18286 + C18287 + C18288) * C12620 +
                      (C18284 + C18283 + C18282 + C18281) * C12619) *
                         C29196 * C1806) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[30] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                       C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                          C29209 * C12619 +
                      (C18365 + C18366) * C29209 * C12620) *
                         C29196 * C1806 -
                     ((C19013 + C19014) * C29209 * C12620 +
                      (C18339 * C2654 + C19005 + C19005 + C17889 * C3096 +
                       C18338 * C642 + C19006 + C19006 + C17888 * C1154) *
                          C29209 * C12619) *
                         C29196 * C29287) *
                        C1808 +
                    (((C19014 + C19013) * C29209 * C12619 +
                      (C18338 * C640 + C19007 + C19007 + C17888 * C1152 +
                       C18339 * C2656 + C19008 + C19008 + C17889 * C3098) *
                          C29209 * C12620) *
                         C29196 * C29287 -
                     ((C18367 + C18368) * C29209 * C12620 +
                      (C18366 + C18365) * C29209 * C12619) *
                         C29196 * C1806) *
                        C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[31] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                      C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                         C17888 +
                     (C19099 + C19100) * C17889) *
                        C29209 * C29196 * C2248 -
                    ((C15636 + C15637) * C17889 + (C13207 + C13206) * C17888) *
                        C29209 * C29196 * C2249 +
                    ((C15133 + C15132) * C17888 +
                     (C12623 * C5423 + C15630 + C15630 + C12619 * C5427 +
                      C12625 * C5424 + C15631 + C15631 + C12620 * C5428) *
                         C17889) *
                        C29209 * C29196 * C2250) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexy[31] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C12624 +
                      (C155 * C98 + C29209 * C161) * C12619 + C179 * C12626 +
                      C180 * C12620) *
                         C17888 +
                     (C19169 + C19170 + C19171 + C19172) * C17889) *
                        C29196 * C2248 -
                    ((C18505 * C12620 + C18506 * C12626 + C10875 * C12619 +
                      C10874 * C12624) *
                         C17889 +
                     (C727 * C12620 + C728 * C12626 +
                      (C155 * C646 + C29209 * C714) * C12619 +
                      (C155 * C642 + C29209 * C710) * C12624) *
                         C17888) *
                        C29196 * C2249 +
                    (((C155 * C2252 + C29209 * C2302) * C12624 +
                      (C155 * C2255 + C29209 * C2305) * C12619 +
                      (C155 * C2253 + C29209 * C2303) * C12626 +
                      (C155 * C2256 + C29209 * C2306) * C12620) *
                         C17888 +
                     ((C155 * C5423 + C29209 * C5485) * C12624 +
                      (C155 * C5425 + C29209 * C5487) * C12619 +
                      (C155 * C5424 + C29209 * C5486) * C12626 +
                      (C155 * C5426 + C29209 * C5488) * C12620) *
                         C17889) *
                        C29196 * C2250) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
               C12624 +
           (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
               C12619 +
           (C18011 + C18012) * C12626 + (C18013 + C18014) * C12620) *
              C29209 * C29196 * C2248 -
          ((C18581 + C18582) * C12620 + (C18583 + C18584) * C12626 +
           (C17993 * C2657 + C17889 * C2775 + C17992 * C646 + C17888 * C784) *
               C12619 +
           (C17993 * C2654 + C17889 * C2772 + C17992 * C642 + C17888 * C780) *
               C12624) *
              C29209 * C29196 * C2249 +
          ((C17992 * C2252 + C17888 * C2346 + C17993 * C5423 + C17889 * C5539) *
               C12624 +
           (C17992 * C2255 + C17888 * C2349 + C17993 * C5425 + C17889 * C5541) *
               C12619 +
           (C17992 * C2253 + C17888 * C2347 + C17993 * C5424 + C17889 * C5540) *
               C12626 +
           (C17992 * C2256 + C17888 * C2350 + C17993 * C5426 + C17889 * C5542) *
               C12620) *
              C29209 * C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) * C155 +
            (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                C29209) *
               C17888 +
           ((C19337 + C19338) * C155 + (C19339 + C19340) * C29209) * C17889) *
              C29196 * C2248 -
          (((C15848 + C15849) * C29209 + (C15850 + C15851) * C155) * C17889 +
           ((C13447 + C13446) * C29209 + (C13445 + C13444) * C155) * C17888) *
              C29196 * C2249 +
          (((C15299 + C15298) * C155 + (C15297 + C15296) * C29209) * C17888 +
           ((C12624 * C5423 + C12619 * C5425 + C12626 * C5424 +
             C12620 * C5426) *
                C155 +
            (C12624 * C5485 + C12619 * C5593 + C12626 * C5486 +
             C12620 * C5594) *
                C29209) *
               C17889) *
              C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C12619 +
            C356 * C12620) *
               C17888 +
           (C19411 + C19412) * C17889) *
              C29196 * C2248 -
          ((C18721 * C12620 + C11055 * C12619) * C17889 +
           (C920 * C12620 +
            (C332 * C642 + C913 + C913 + C29209 * C904) * C12619) *
               C17888) *
              C29196 * C2249 +
          (((C332 * C2252 + C2435 + C2435 + C29209 * C2431) * C12619 +
            (C332 * C2253 + C2436 + C2436 + C29209 * C2432) * C12620) *
               C17888 +
           ((C332 * C5423 + C10598 + C10598 + C29209 * C5645) * C12619 +
            (C332 * C5424 + C20561 + C20561 + C29209 * C5646) * C12620) *
               C17889) *
              C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C155 +
            (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                C29209) *
               C12619 +
           ((C18011 + C18012) * C155 + (C18177 + C18178) * C29209) * C12620) *
              C29196 * C2248 -
          (((C18792 + C18793) * C29209 + (C18583 + C18584) * C155) * C12620 +
           ((C17993 * C2716 + C17889 * C2937 + C17992 * C710 + C17888 * C972) *
                C29209 +
            (C17993 * C2654 + C17889 * C2772 + C17992 * C642 + C17888 * C780) *
                C155) *
               C12619) *
              C29196 * C2249 +
          (((C17992 * C2252 + C17888 * C2346 + C17993 * C5423 +
             C17889 * C5539) *
                C155 +
            (C17992 * C2302 + C17888 * C2475 + C17993 * C5485 +
             C17889 * C5703) *
                C29209) *
               C12619 +
           ((C17992 * C2253 + C17888 * C2347 + C17993 * C5424 +
             C17889 * C5540) *
                C155 +
            (C17992 * C2303 + C17888 * C2476 + C17993 * C5486 +
             C17889 * C5704) *
                C29209) *
               C12620) *
              C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
               C17992 +
           (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
               C17888 +
           (C19337 + C19338) * C17993 + (C19561 + C19562) * C17889) *
              C29209 * C29196 * C2248 -
          ((C16058 + C16059) * C17889 + (C15850 + C15851) * C17993 +
           (C13679 + C13678) * C17888 + (C13445 + C13444) * C17992) *
              C29209 * C29196 * C2249 +
          ((C15299 + C15298) * C17992 + (C15459 + C15458) * C17888 +
           (C12624 * C5423 + C12619 * C5425 + C12626 * C5424 + C12620 * C5426) *
               C17993 +
           (C12624 * C5539 + C12619 * C5755 + C12626 * C5540 + C12620 * C5756) *
               C17889) *
              C29209 * C29196 * C2250) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezy[31] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C17992 +
                      (C155 * C223 + C29209 * C498) * C17888 + C9500 * C17993 +
                      C9897 * C17889) *
                         C12619 +
                     (C18281 + C18282 + C18283 + C18284) * C12620) *
                        C29196 * C2248 -
                    ((C18932 + C18928 + C18929 + C18930) * C12620 +
                     (C11219 * C17889 + C10874 * C17993 +
                      (C155 * C780 + C29209 * C1090) * C17888 +
                      (C155 * C642 + C29209 * C710) * C17992) *
                         C12619) *
                        C29196 * C2249 +
                    (((C155 * C2252 + C29209 * C2302) * C17992 +
                      (C155 * C2346 + C29209 * C2557) * C17888 +
                      (C155 * C5423 + C29209 * C5485) * C17993 +
                      (C155 * C5539 + C29209 * C5807) * C17889) *
                         C12619 +
                     ((C155 * C2253 + C29209 * C2303) * C17992 +
                      (C155 * C2347 + C29209 * C2558) * C17888 +
                      (C155 * C5424 + C29209 * C5486) * C17993 +
                      (C155 * C5540 + C29209 * C5808) * C17889) *
                         C12620) *
                        C29196 * C2250) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eezz[31] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                      C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                         C29209 * C12619 +
                     (C18365 + C18366) * C29209 * C12620) *
                        C29196 * C2248 -
                    ((C19013 + C19014) * C29209 * C12620 +
                     (C18339 * C2654 + C19005 + C19005 + C17889 * C3096 +
                      C18338 * C642 + C19006 + C19006 + C17888 * C1154) *
                         C29209 * C12619) *
                        C29196 * C2249 +
                    ((C18338 * C2252 + C20762 + C20762 + C17888 * C2598 +
                      C18339 * C5423 + C20763 + C20763 + C17889 * C5859) *
                         C29209 * C12619 +
                     (C18338 * C2253 + C20764 + C20764 + C17888 * C2599 +
                      C18339 * C5424 + C20765 + C20765 + C17889 * C5860) *
                         C29209 * C12620) *
                        C29196 * C2250) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexx[32] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                       C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                          C17888 +
                      (C19099 + C19100) * C17889) *
                         C29209 * C1222 -
                     ((C12625 * C4046 + C17431 + C17431 + C12620 * C4052 +
                       C12623 * C4045 + C17430 + C17430 + C12619 * C4051) *
                          C17889 +
                      (C19100 + C19099) * C17888) *
                         C29209 * C29289) *
                        C1806 +
                    (((C15637 + C15636) * C17888 +
                      (C12623 * C8180 + C17432 + C17432 + C12619 * C8184 +
                       C12625 * C8931 + C17433 + C17433 + C12620 * C8933) *
                          C17889) *
                         C29209 * C29289 -
                     ((C15636 + C15637) * C17889 + (C13207 + C13206) * C17888) *
                         C29209 * C1222) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexy[32] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C12624 +
                       (C155 * C98 + C29209 * C161) * C12619 + C179 * C12626 +
                       C180 * C12620) *
                          C17888 +
                      (C19169 + C19170 + C19171 + C19172) * C17889) *
                         C1222 -
                     ((C9505 * C12620 + C9504 * C12626 + C9503 * C12619 +
                       C9502 * C12624) *
                          C17889 +
                      (C19172 + C19171 + C19170 + C19169) * C17888) *
                         C29289) *
                        C1806 +
                    (((C20898 + C20899 + C20900 + C20901) * C17888 +
                      (C10876 * C12624 + C10877 * C12619 +
                       (C155 * C8931 + C29209 * C8985) * C12626 +
                       (C155 * C8932 + C29209 * C8986) * C12620) *
                          C17889) *
                         C29289 -
                     ((C20901 + C20900 + C20899 + C20898) * C17889 +
                      (C727 * C12620 + C728 * C12626 +
                       (C155 * C646 + C29209 * C714) * C12619 +
                       (C155 * C642 + C29209 * C710) * C12624) *
                          C17888) *
                         C1222) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C12624 +
            (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                C12619 +
            (C18011 + C18012) * C12626 + (C18013 + C18014) * C12620) *
               C29209 * C1222 -
           ((C19251 + C19252) * C12620 + (C19253 + C19254) * C12626 +
            (C17993 * C4048 + C17889 * C4142 + C17992 * C1230 +
             C17888 * C1368) *
                C12619 +
            (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
             C17888 * C1364) *
                C12624) *
               C29209 * C29289) *
              C1806 +
          (((C17992 * C2654 + C17888 * C2772 + C17993 * C8180 +
             C17889 * C8269) *
                C12624 +
            (C17992 * C2657 + C17888 * C2775 + C17993 * C8182 +
             C17889 * C8271) *
                C12619 +
            (C17992 * C2655 + C17888 * C2773 + C17993 * C8931 +
             C17889 * C9037) *
                C12626 +
            (C17992 * C2658 + C17888 * C2776 + C17993 * C8932 +
             C17889 * C9038) *
                C12620) *
               C29209 * C29289 -
           ((C18581 + C18582) * C12620 + (C18583 + C18584) * C12626 +
            (C17993 * C2657 + C17889 * C2775 + C17992 * C646 + C17888 * C784) *
                C12619 +
            (C17993 * C2654 + C17889 * C2772 + C17992 * C642 + C17888 * C780) *
                C12624) *
               C29209 * C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                 C155 +
             (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                 C29209) *
                C17888 +
            ((C19337 + C19338) * C155 + (C19339 + C19340) * C29209) * C17889) *
               C1222 -
           (((C12626 * C4096 + C12620 * C4184 + C12624 * C4095 +
              C12619 * C4183) *
                 C29209 +
             (C12626 * C4046 + C12620 * C4049 + C12624 * C4045 +
              C12619 * C4048) *
                 C155) *
                C17889 +
            ((C19340 + C19339) * C29209 + (C19338 + C19337) * C155) * C17888) *
               C29289) *
              C1806 +
          ((((C15851 + C15850) * C155 + (C15849 + C15848) * C29209) * C17888 +
            ((C12624 * C8180 + C12619 * C8182 + C12626 * C8931 +
              C12620 * C8932) *
                 C155 +
             (C12624 * C8227 + C12619 * C8311 + C12626 * C8985 +
              C12620 * C9089) *
                 C29209) *
                C17889) *
               C29289 -
           (((C15848 + C15849) * C29209 + (C15850 + C15851) * C155) * C17889 +
            ((C13447 + C13446) * C29209 + (C13445 + C13444) * C155) * C17888) *
               C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C29209 * C333) * C12619 +
             C356 * C12620) *
                C17888 +
            (C19411 + C19412) * C17889) *
               C1222 -
           ((C9719 * C12620 + C9718 * C12619) * C17889 +
            (C19412 + C19411) * C17888) *
               C29289) *
              C1806 +
          (((C21100 + C21101) * C17888 +
            (C11056 * C12619 +
             (C332 * C8931 + C9143 + C9143 + C29209 * C9140) * C12620) *
                C17889) *
               C29289 -
           ((C21101 + C21100) * C17889 +
            (C920 * C12620 +
             (C332 * C642 + C913 + C913 + C29209 * C904) * C12619) *
                C17888) *
               C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                 C155 +
             (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                 C29209) *
                C12619 +
            ((C18011 + C18012) * C155 + (C18177 + C18178) * C29209) * C12620) *
               C1222 -
           (((C19485 + C19486) * C29209 + (C19253 + C19254) * C155) * C12620 +
            ((C17993 * C4095 + C17889 * C4268 + C17992 * C1294 +
              C17888 * C1556) *
                 C29209 +
             (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
              C17888 * C1364) *
                 C155) *
                C12619) *
               C29289) *
              C1806 +
          ((((C17992 * C2654 + C17888 * C2772 + C17993 * C8180 +
              C17889 * C8269) *
                 C155 +
             (C17992 * C2716 + C17888 * C2937 + C17993 * C8227 +
              C17889 * C8394) *
                 C29209) *
                C12619 +
            ((C17992 * C2655 + C17888 * C2773 + C17993 * C8931 +
              C17889 * C9037) *
                 C155 +
             (C17992 * C2717 + C17888 * C2938 + C17993 * C8985 +
              C17889 * C9193) *
                 C29209) *
                C12620) *
               C29289 -
           (((C18792 + C18793) * C29209 + (C18583 + C18584) * C155) * C12620 +
            ((C17993 * C2716 + C17889 * C2937 + C17992 * C710 + C17888 * C972) *
                 C29209 +
             (C17993 * C2654 + C17889 * C2772 + C17992 * C642 + C17888 * C780) *
                 C155) *
                C12619) *
               C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                C17992 +
            (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                C17888 +
            (C19337 + C19338) * C17993 + (C19561 + C19562) * C17889) *
               C29209 * C1222 -
           ((C12626 * C4140 + C12620 * C4310 + C12624 * C4139 +
             C12619 * C4309) *
                C17889 +
            (C12626 * C4046 + C12620 * C4049 + C12624 * C4045 +
             C12619 * C4048) *
                C17993 +
            (C19562 + C19561) * C17888 + (C19338 + C19337) * C17992) *
               C29209 * C29289) *
              C1806 +
          (((C15851 + C15850) * C17992 + (C16059 + C16058) * C17888 +
            (C12624 * C8180 + C12619 * C8182 + C12626 * C8931 +
             C12620 * C8932) *
                C17993 +
            (C12624 * C8269 + C12619 * C8434 + C12626 * C9037 +
             C12620 * C9244) *
                C17889) *
               C29209 * C29289 -
           ((C16058 + C16059) * C17889 + (C15850 + C15851) * C17993 +
            (C13679 + C13678) * C17888 + (C13445 + C13444) * C17992) *
               C29209 * C1222) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezy[32] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C17992 +
                       (C155 * C223 + C29209 * C498) * C17888 + C9500 * C17993 +
                       C9897 * C17889) *
                          C12619 +
                      (C18281 + C18282 + C18283 + C18284) * C12620) *
                         C1222 -
                     ((C19631 + C19632 + C19633 + C19634) * C12620 +
                      (C9898 * C17889 + C9502 * C17993 + C9897 * C17888 +
                       C9500 * C17992) *
                          C12619) *
                         C29289) *
                        C1806 +
                    (((C10874 * C17992 + C11219 * C17888 + C10876 * C17993 +
                       C11220 * C17889) *
                          C12619 +
                      (C18506 * C17992 + C18931 * C17888 +
                       (C155 * C8931 + C29209 * C8985) * C17993 +
                       (C155 * C9037 + C29209 * C9295) * C17889) *
                          C12620) *
                         C29289 -
                     ((C18932 + C18928 + C18929 + C18930) * C12620 +
                      (C11219 * C17889 + C10874 * C17993 +
                       (C155 * C780 + C29209 * C1090) * C17888 +
                       (C155 * C642 + C29209 * C710) * C17992) *
                          C12619) *
                         C1222) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eezz[32] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                       C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                          C29209 * C12619 +
                      (C18365 + C18366) * C29209 * C12620) *
                         C1222 -
                     ((C19715 + C19716) * C29209 * C12620 +
                      (C18339 * C4045 + C19707 + C19707 + C17889 * C4391 +
                       C18338 * C1226 + C19708 + C19708 + C17888 * C1738) *
                          C29209 * C12619) *
                         C29289) *
                        C1806 +
                    (((C18338 * C2654 + C21366 + C21366 + C17888 * C3096 +
                       C18339 * C8180 + C21367 + C21367 + C17889 * C8514) *
                          C29209 * C12619 +
                      (C18338 * C2655 + C21368 + C21368 + C17888 * C3097 +
                       C18339 * C8931 + C21369 + C21369 + C17889 * C9346) *
                          C29209 * C12620) *
                         C29289 -
                     ((C19013 + C19014) * C29209 * C12620 +
                      (C18339 * C2654 + C19005 + C19005 + C17889 * C3096 +
                       C18338 * C642 + C19006 + C19006 + C17888 * C1154) *
                          C29209 * C12619) *
                         C1222) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexx[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                       C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                          C17888 +
                      (C19099 + C19100) * C17889) *
                         C29209 * C3152 -
                     ((C12625 * C4046 + C17431 + C17431 + C12620 * C4052 +
                       C12623 * C4045 + C17430 + C17430 + C12619 * C4051) *
                          C17889 +
                      (C19100 + C19099) * C17888) *
                         C29209 * C29289) *
                        C29179 * C1808 +
                    (((C19101 + C19102) * C17888 +
                      (C12623 * C4046 + C19089 + C19089 + C12619 * C4052 +
                       C12625 * C4047 + C19090 + C19090 + C12620 * C4053) *
                          C17889) *
                         C29209 * C29289 -
                     ((C19102 + C19101) * C17889 +
                      (C12625 * C95 + C12634 + C12634 + C12620 * C105 +
                       C12623 * C94 + C12635 + C12635 + C12619 * C104) *
                          C17888) *
                         C29209 * C3152) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C12624 +
             (C155 * C98 + C29209 * C161) * C12619 + C179 * C12626 +
             C180 * C12620) *
                C17888 +
            (C19169 + C19170 + C19171 + C19172) * C17889) *
               C3152 -
           ((C9505 * C12620 + C9504 * C12626 + C9503 * C12619 +
             C9502 * C12624) *
                C17889 +
            (C19172 + C19171 + C19170 + C19169) * C17888) *
               C29289) *
              C29179 * C1808 +
          (((C19173 + C19174 + C19175 + C19176) * C17888 +
            (C9504 * C12624 + C9505 * C12619 +
             (C155 * C4047 + C29209 * C4097) * C12626 +
             (C155 * C4050 + C29209 * C4100) * C12620) *
                C17889) *
               C29289 -
           ((C19176 + C19175 + C19174 + C19173) * C17889 +
            (C182 * C12620 + C181 * C12626 + C180 * C12619 + C179 * C12624) *
                C17888) *
               C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eexz[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C12624 +
            (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                C12619 +
            (C18011 + C18012) * C12626 + (C18013 + C18014) * C12620) *
               C29209 * C3152 -
           ((C19251 + C19252) * C12620 + (C19253 + C19254) * C12626 +
            (C17993 * C4048 + C17889 * C4142 + C17992 * C1230 +
             C17888 * C1368) *
                C12619 +
            (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
             C17888 * C1364) *
                C12624) *
               C29209 * C29289) *
              C29179 * C1808 +
          (((C19254 + C19253) * C12624 + (C19252 + C19251) * C12619 +
            (C17992 * C1224 + C17888 * C1362 + C17993 * C4047 +
             C17889 * C4141) *
                C12626 +
            (C17992 * C1228 + C17888 * C1366 + C17993 * C4050 +
             C17889 * C4144) *
                C12620) *
               C29209 * C29289 -
           ((C18015 + C18016) * C12620 + (C18017 + C18018) * C12626 +
            (C18014 + C18013) * C12619 + (C18012 + C18011) * C12624) *
               C29209 * C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                 C155 +
             (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                 C29209) *
                C17888 +
            ((C19337 + C19338) * C155 + (C19339 + C19340) * C29209) * C17889) *
               C3152 -
           (((C12626 * C4096 + C12620 * C4184 + C12624 * C4095 +
              C12619 * C4183) *
                 C29209 +
             (C12626 * C4046 + C12620 * C4049 + C12624 * C4045 +
              C12619 * C4048) *
                 C155) *
                C17889 +
            ((C19340 + C19339) * C29209 + (C19338 + C19337) * C155) * C17888) *
               C29289) *
              C29179 * C1808 +
          ((((C19341 + C19342) * C155 + (C19343 + C19344) * C29209) * C17888 +
            ((C12624 * C4046 + C12619 * C4049 + C12626 * C4047 +
              C12620 * C4050) *
                 C155 +
             (C12624 * C4096 + C12619 * C4184 + C12626 * C4097 +
              C12620 * C4185) *
                 C29209) *
                C17889) *
               C29289 -
           (((C19344 + C19343) * C29209 + (C19342 + C19341) * C155) * C17889 +
            ((C12626 * C158 + C12620 * C291 + C12624 * C157 + C12619 * C290) *
                 C29209 +
             (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                 C155) *
                C17888) *
               C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C29209 * C333) * C12619 +
             C356 * C12620) *
                C17888 +
            (C19411 + C19412) * C17889) *
               C3152 -
           ((C9719 * C12620 + C9718 * C12619) * C17889 +
            (C19412 + C19411) * C17888) *
               C29289) *
              C29179 * C1808 +
          (((C19413 + C19414) * C17888 +
            (C9719 * C12619 +
             (C332 * C4047 + C4230 + C4230 + C29209 * C4226) * C12620) *
                C17889) *
               C29289 -
           ((C19414 + C19413) * C17889 +
            (C357 * C12620 + C356 * C12619) * C17888) *
               C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                 C155 +
             (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                 C29209) *
                C12619 +
            ((C18011 + C18012) * C155 + (C18177 + C18178) * C29209) * C12620) *
               C3152 -
           (((C19485 + C19486) * C29209 + (C19253 + C19254) * C155) * C12620 +
            ((C17993 * C4095 + C17889 * C4268 + C17992 * C1294 +
              C17888 * C1556) *
                 C29209 +
             (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
              C17888 * C1364) *
                 C155) *
                C12619) *
               C29289) *
              C29179 * C1808 +
          ((((C19254 + C19253) * C155 + (C19486 + C19485) * C29209) * C12619 +
            ((C17992 * C1224 + C17888 * C1362 + C17993 * C4047 +
              C17889 * C4141) *
                 C155 +
             (C17992 * C1292 + C17888 * C1554 + C17993 * C4097 +
              C17889 * C4270) *
                 C29209) *
                C12620) *
               C29289 -
           (((C18179 + C18180) * C29209 + (C18017 + C18018) * C155) * C12620 +
            ((C18178 + C18177) * C29209 + (C18012 + C18011) * C155) * C12619) *
               C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                C17992 +
            (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                C17888 +
            (C19337 + C19338) * C17993 + (C19561 + C19562) * C17889) *
               C29209 * C3152 -
           ((C12626 * C4140 + C12620 * C4310 + C12624 * C4139 +
             C12619 * C4309) *
                C17889 +
            (C12626 * C4046 + C12620 * C4049 + C12624 * C4045 +
             C12619 * C4048) *
                C17993 +
            (C19562 + C19561) * C17888 + (C19338 + C19337) * C17992) *
               C29209 * C29289) *
              C29179 * C1808 +
          (((C19341 + C19342) * C17992 + (C19563 + C19564) * C17888 +
            (C12624 * C4046 + C12619 * C4049 + C12626 * C4047 +
             C12620 * C4050) *
                C17993 +
            (C12624 * C4140 + C12619 * C4310 + C12626 * C4141 +
             C12620 * C4311) *
                C17889) *
               C29209 * C29289 -
           ((C19564 + C19563) * C17889 + (C19342 + C19341) * C17993 +
            (C12626 * C225 + C12620 * C457 + C12624 * C224 + C12619 * C456) *
                C17888 +
            (C12626 * C95 + C12620 * C100 + C12624 * C94 + C12619 * C99) *
                C17992) *
               C29209 * C3152) *
              C29179 * C29285)) /
        (p * q * std::sqrt(p + q));
    d2eezy[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C17992 +
                       (C155 * C223 + C29209 * C498) * C17888 + C9500 * C17993 +
                       C9897 * C17889) *
                          C12619 +
                      (C18281 + C18282 + C18283 + C18284) * C12620) *
                         C3152 -
                     ((C19631 + C19632 + C19633 + C19634) * C12620 +
                      (C9898 * C17889 + C9502 * C17993 + C9897 * C17888 +
                       C9500 * C17992) *
                          C12619) *
                         C29289) *
                        C29179 * C1808 +
                    (((C19634 + C19633 + C19632 + C19631) * C12619 +
                      (C1310 * C17992 + C1683 * C17888 +
                       (C155 * C4047 + C29209 * C4097) * C17993 +
                       (C155 * C4141 + C29209 * C4352) * C17889) *
                          C12620) *
                         C29289 -
                     ((C18285 + C18286 + C18287 + C18288) * C12620 +
                      (C18284 + C18283 + C18282 + C18281) * C12619) *
                         C3152) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                       C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                          C29209 * C12619 +
                      (C18365 + C18366) * C29209 * C12620) *
                         C3152 -
                     ((C19715 + C19716) * C29209 * C12620 +
                      (C18339 * C4045 + C19707 + C19707 + C17889 * C4391 +
                       C18338 * C1226 + C19708 + C19708 + C17888 * C1738) *
                          C29209 * C12619) *
                         C29289) *
                        C29179 * C1808 +
                    (((C19716 + C19715) * C29209 * C12619 +
                      (C18338 * C1224 + C19709 + C19709 + C17888 * C1736 +
                       C18339 * C4047 + C19710 + C19710 + C17889 * C4393) *
                          C29209 * C12620) *
                         C29289 -
                     ((C18367 + C18368) * C29209 * C12620 +
                      (C18366 + C18365) * C29209 * C12619) *
                         C3152) *
                        C29179 * C29285)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                       C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                          C17888 +
                      (C19099 + C19100) * C17889) *
                         C29209 * C3152 -
                     ((C12625 * C4046 + C17431 + C17431 + C12620 * C4052 +
                       C12623 * C4045 + C17430 + C17430 + C12619 * C4051) *
                          C17889 +
                      (C19100 + C19099) * C17888) *
                         C29209 * C29289) *
                        C636 +
                    (((C15637 + C15636) * C17888 +
                      (C12623 * C8180 + C17432 + C17432 + C12619 * C8184 +
                       C12625 * C8931 + C17433 + C17433 + C12620 * C8933) *
                          C17889) *
                         C29209 * C29289 -
                     ((C15636 + C15637) * C17889 + (C13207 + C13206) * C17888) *
                         C29209 * C3152) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexy[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C12624 +
                       (C155 * C98 + C29209 * C161) * C12619 + C179 * C12626 +
                       C180 * C12620) *
                          C17888 +
                      (C19169 + C19170 + C19171 + C19172) * C17889) *
                         C3152 -
                     ((C9505 * C12620 + C9504 * C12626 + C9503 * C12619 +
                       C9502 * C12624) *
                          C17889 +
                      (C19172 + C19171 + C19170 + C19169) * C17888) *
                         C29289) *
                        C636 +
                    (((C20898 + C20899 + C20900 + C20901) * C17888 +
                      (C10876 * C12624 + C10877 * C12619 +
                       (C155 * C8931 + C29209 * C8985) * C12626 +
                       (C155 * C8932 + C29209 * C8986) * C12620) *
                          C17889) *
                         C29289 -
                     ((C20901 + C20900 + C20899 + C20898) * C17889 +
                      (C727 * C12620 + C728 * C12626 +
                       (C155 * C646 + C29209 * C714) * C12619 +
                       (C155 * C642 + C29209 * C710) * C12624) *
                          C17888) *
                         C3152) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexz[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C12624 +
            (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
                C12619 +
            (C18011 + C18012) * C12626 + (C18013 + C18014) * C12620) *
               C29209 * C3152 -
           ((C19251 + C19252) * C12620 + (C19253 + C19254) * C12626 +
            (C17993 * C4048 + C17889 * C4142 + C17992 * C1230 +
             C17888 * C1368) *
                C12619 +
            (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
             C17888 * C1364) *
                C12624) *
               C29209 * C29289) *
              C636 +
          (((C17992 * C2654 + C17888 * C2772 + C17993 * C8180 +
             C17889 * C8269) *
                C12624 +
            (C17992 * C2657 + C17888 * C2775 + C17993 * C8182 +
             C17889 * C8271) *
                C12619 +
            (C17992 * C2655 + C17888 * C2773 + C17993 * C8931 +
             C17889 * C9037) *
                C12626 +
            (C17992 * C2658 + C17888 * C2776 + C17993 * C8932 +
             C17889 * C9038) *
                C12620) *
               C29209 * C29289 -
           ((C18581 + C18582) * C12620 + (C18583 + C18584) * C12626 +
            (C17993 * C2657 + C17889 * C2775 + C17992 * C646 + C17888 * C784) *
                C12619 +
            (C17993 * C2654 + C17889 * C2772 + C17992 * C642 + C17888 * C780) *
                C12624) *
               C29209 * C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyx[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                 C155 +
             (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                 C29209) *
                C17888 +
            ((C19337 + C19338) * C155 + (C19339 + C19340) * C29209) * C17889) *
               C3152 -
           (((C12626 * C4096 + C12620 * C4184 + C12624 * C4095 +
              C12619 * C4183) *
                 C29209 +
             (C12626 * C4046 + C12620 * C4049 + C12624 * C4045 +
              C12619 * C4048) *
                 C155) *
                C17889 +
            ((C19340 + C19339) * C29209 + (C19338 + C19337) * C155) * C17888) *
               C29289) *
              C636 +
          ((((C15851 + C15850) * C155 + (C15849 + C15848) * C29209) * C17888 +
            ((C12624 * C8180 + C12619 * C8182 + C12626 * C8931 +
              C12620 * C8932) *
                 C155 +
             (C12624 * C8227 + C12619 * C8311 + C12626 * C8985 +
              C12620 * C9089) *
                 C29209) *
                C17889) *
               C29289 -
           (((C15848 + C15849) * C29209 + (C15850 + C15851) * C155) * C17889 +
            ((C13447 + C13446) * C29209 + (C13445 + C13444) * C155) * C17888) *
               C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C29209 * C333) * C12619 +
             C356 * C12620) *
                C17888 +
            (C19411 + C19412) * C17889) *
               C3152 -
           ((C9719 * C12620 + C9718 * C12619) * C17889 +
            (C19412 + C19411) * C17888) *
               C29289) *
              C636 +
          (((C21100 + C21101) * C17888 +
            (C11056 * C12619 +
             (C332 * C8931 + C9143 + C9143 + C29209 * C9140) * C12620) *
                C17889) *
               C29289 -
           ((C21101 + C21100) * C17889 +
            (C920 * C12620 +
             (C332 * C642 + C913 + C913 + C29209 * C904) * C12619) *
                C17888) *
               C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyz[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                 C155 +
             (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                 C29209) *
                C12619 +
            ((C18011 + C18012) * C155 + (C18177 + C18178) * C29209) * C12620) *
               C3152 -
           (((C19485 + C19486) * C29209 + (C19253 + C19254) * C155) * C12620 +
            ((C17993 * C4095 + C17889 * C4268 + C17992 * C1294 +
              C17888 * C1556) *
                 C29209 +
             (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
              C17888 * C1364) *
                 C155) *
                C12619) *
               C29289) *
              C636 +
          ((((C17992 * C2654 + C17888 * C2772 + C17993 * C8180 +
              C17889 * C8269) *
                 C155 +
             (C17992 * C2716 + C17888 * C2937 + C17993 * C8227 +
              C17889 * C8394) *
                 C29209) *
                C12619 +
            ((C17992 * C2655 + C17888 * C2773 + C17993 * C8931 +
              C17889 * C9037) *
                 C155 +
             (C17992 * C2717 + C17888 * C2938 + C17993 * C8985 +
              C17889 * C9193) *
                 C29209) *
                C12620) *
               C29289 -
           (((C18792 + C18793) * C29209 + (C18583 + C18584) * C155) * C12620 +
            ((C17993 * C2716 + C17889 * C2937 + C17992 * C710 + C17888 * C972) *
                 C29209 +
             (C17993 * C2654 + C17889 * C2772 + C17992 * C642 + C17888 * C780) *
                 C155) *
                C12619) *
               C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezx[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
                C17992 +
            (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
                C17888 +
            (C19337 + C19338) * C17993 + (C19561 + C19562) * C17889) *
               C29209 * C3152 -
           ((C12626 * C4140 + C12620 * C4310 + C12624 * C4139 +
             C12619 * C4309) *
                C17889 +
            (C12626 * C4046 + C12620 * C4049 + C12624 * C4045 +
             C12619 * C4048) *
                C17993 +
            (C19562 + C19561) * C17888 + (C19338 + C19337) * C17992) *
               C29209 * C29289) *
              C636 +
          (((C15851 + C15850) * C17992 + (C16059 + C16058) * C17888 +
            (C12624 * C8180 + C12619 * C8182 + C12626 * C8931 +
             C12620 * C8932) *
                C17993 +
            (C12624 * C8269 + C12619 * C8434 + C12626 * C9037 +
             C12620 * C9244) *
                C17889) *
               C29209 * C29289 -
           ((C16058 + C16059) * C17889 + (C15850 + C15851) * C17993 +
            (C13679 + C13678) * C17888 + (C13445 + C13444) * C17992) *
               C29209 * C3152) *
              C29287) *
         C29145) /
        (p * q * std::sqrt(p + q));
    d2eezy[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C17992 +
                       (C155 * C223 + C29209 * C498) * C17888 + C9500 * C17993 +
                       C9897 * C17889) *
                          C12619 +
                      (C18281 + C18282 + C18283 + C18284) * C12620) *
                         C3152 -
                     ((C19631 + C19632 + C19633 + C19634) * C12620 +
                      (C9898 * C17889 + C9502 * C17993 + C9897 * C17888 +
                       C9500 * C17992) *
                          C12619) *
                         C29289) *
                        C636 +
                    (((C10874 * C17992 + C11219 * C17888 + C10876 * C17993 +
                       C11220 * C17889) *
                          C12619 +
                      (C18506 * C17992 + C18931 * C17888 +
                       (C155 * C8931 + C29209 * C8985) * C17993 +
                       (C155 * C9037 + C29209 * C9295) * C17889) *
                          C12620) *
                         C29289 -
                     ((C18932 + C18928 + C18929 + C18930) * C12620 +
                      (C11219 * C17889 + C10874 * C17993 +
                       (C155 * C780 + C29209 * C1090) * C17888 +
                       (C155 * C642 + C29209 * C710) * C17992) *
                          C12619) *
                         C3152) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eezz[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                       C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                          C29209 * C12619 +
                      (C18365 + C18366) * C29209 * C12620) *
                         C3152 -
                     ((C19715 + C19716) * C29209 * C12620 +
                      (C18339 * C4045 + C19707 + C19707 + C17889 * C4391 +
                       C18338 * C1226 + C19708 + C19708 + C17888 * C1738) *
                          C29209 * C12619) *
                         C29289) *
                        C636 +
                    (((C18338 * C2654 + C21366 + C21366 + C17888 * C3096 +
                       C18339 * C8180 + C21367 + C21367 + C17889 * C8514) *
                          C29209 * C12619 +
                      (C18338 * C2655 + C21368 + C21368 + C17888 * C3097 +
                       C18339 * C8931 + C21369 + C21369 + C17889 * C9346) *
                          C29209 * C12620) *
                         C29289 -
                     ((C19013 + C19014) * C29209 * C12620 +
                      (C18339 * C2654 + C19005 + C19005 + C17889 * C3096 +
                       C18338 * C642 + C19006 + C19006 + C17888 * C1154) *
                          C29209 * C12619) *
                         C3152) *
                        C29287) *
                   C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexx[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C12623 * C93 + C12628 + C12628 + C12619 * C103 +
                      C12625 * C94 + C12629 + C12629 + C12620 * C104) *
                         C17888 +
                     (C19099 + C19100) * C17889) *
                        C29209 * C4042 -
                    ((C22618 + C22619) * C17889 + (C19100 + C19099) * C17888) *
                        C29209 * C4043 +
                    ((C22619 + C22618) * C17888 +
                     (C12623 * C9403 + C22612 + C22612 + C12619 * C9407 +
                      C12625 * C9404 + C22613 + C22613 + C12620 * C9408) *
                         C17889) *
                        C29209 * C4044) *
                   C29179 * C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexy[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C12624 +
                      (C155 * C98 + C29209 * C161) * C12619 + C179 * C12626 +
                      C180 * C12620) *
                         C17888 +
                     (C19169 + C19170 + C19171 + C19172) * C17889) *
                        C4042 -
                    ((C22670 + C22671 + C22672 + C22673) * C17889 +
                     (C19172 + C19171 + C19170 + C19169) * C17888) *
                        C4043 +
                    ((C22673 + C22672 + C22671 + C22670) * C17888 +
                     (C12268 * C12624 + C12267 * C12619 +
                      (C155 * C9404 + C29209 * C9482) * C12626 +
                      (C155 * C9406 + C29209 * C9484) * C12620) *
                         C17889) *
                        C4044) *
                   C29179 * C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
               C12624 +
           (C17992 * C98 + C17888 * C228 + C17993 * C1230 + C17889 * C1368) *
               C12619 +
           (C18011 + C18012) * C12626 + (C18013 + C18014) * C12620) *
              C29209 * C4042 -
          ((C19251 + C19252) * C12620 + (C19253 + C19254) * C12626 +
           (C17993 * C4048 + C17889 * C4142 + C17992 * C1230 + C17888 * C1368) *
               C12619 +
           (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 + C17888 * C1364) *
               C12624) *
              C29209 * C4043 +
          ((C17992 * C4045 + C17888 * C4139 + C17993 * C9403 + C17889 * C9561) *
               C12624 +
           (C17992 * C4048 + C17888 * C4142 + C17993 * C9405 + C17889 * C9563) *
               C12619 +
           (C17992 * C4046 + C17888 * C4140 + C17993 * C9404 + C17889 * C9562) *
               C12626 +
           (C17992 * C4049 + C17888 * C4143 + C17993 * C9406 + C17889 * C9564) *
               C12620) *
              C29209 * C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) * C155 +
            (C12624 * C156 + C12619 * C289 + C12626 * C157 + C12620 * C290) *
                C29209) *
               C17888 +
           ((C19337 + C19338) * C155 + (C19339 + C19340) * C29209) * C17889) *
              C4042 -
          (((C22782 + C22783) * C29209 + (C22784 + C22785) * C155) * C17889 +
           ((C19340 + C19339) * C29209 + (C19338 + C19337) * C155) * C17888) *
              C4043 +
          (((C22785 + C22784) * C155 + (C22783 + C22782) * C29209) * C17888 +
           ((C12624 * C9403 + C12619 * C9405 + C12626 * C9404 +
             C12620 * C9406) *
                C155 +
            (C12624 * C9481 + C12619 * C9615 + C12626 * C9482 +
             C12620 * C9616) *
                C29209) *
               C17889) *
              C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C12619 +
            C356 * C12620) *
               C17888 +
           (C19411 + C19412) * C17889) *
              C4042 -
          ((C22836 + C22837) * C17889 + (C19412 + C19411) * C17888) * C4043 +
          ((C22837 + C22836) * C17888 +
           (C12403 * C12619 +
            (C332 * C9404 + C9710 + C9710 + C29209 * C9700) * C12620) *
               C17889) *
              C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eeyz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17992 * C93 + C17888 * C223 + C17993 * C1226 + C17889 * C1364) *
                C155 +
            (C17992 * C156 + C17888 * C396 + C17993 * C1294 + C17889 * C1556) *
                C29209) *
               C12619 +
           ((C18011 + C18012) * C155 + (C18177 + C18178) * C29209) * C12620) *
              C4042 -
          (((C19485 + C19486) * C29209 + (C19253 + C19254) * C155) * C12620 +
           ((C17993 * C4095 + C17889 * C4268 + C17992 * C1294 +
             C17888 * C1556) *
                C29209 +
            (C17993 * C4045 + C17889 * C4139 + C17992 * C1226 +
             C17888 * C1364) *
                C155) *
               C12619) *
              C4043 +
          (((C17992 * C4045 + C17888 * C4139 + C17993 * C9403 +
             C17889 * C9561) *
                C155 +
            (C17992 * C4095 + C17888 * C4268 + C17993 * C9481 +
             C17889 * C9772) *
                C29209) *
               C12619 +
           ((C17992 * C4046 + C17888 * C4140 + C17993 * C9404 +
             C17889 * C9562) *
                C155 +
            (C17992 * C4096 + C17888 * C4269 + C17993 * C9482 +
             C17889 * C9773) *
                C29209) *
               C12620) *
              C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eezx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12624 * C93 + C12619 * C98 + C12626 * C94 + C12620 * C99) *
               C17992 +
           (C12624 * C223 + C12619 * C455 + C12626 * C224 + C12620 * C456) *
               C17888 +
           (C19337 + C19338) * C17993 + (C19561 + C19562) * C17889) *
              C29209 * C4042 -
          ((C22942 + C22943) * C17889 + (C22784 + C22785) * C17993 +
           (C19562 + C19561) * C17888 + (C19338 + C19337) * C17992) *
              C29209 * C4043 +
          ((C22785 + C22784) * C17992 + (C22943 + C22942) * C17888 +
           (C12624 * C9403 + C12619 * C9405 + C12626 * C9404 + C12620 * C9406) *
               C17993 +
           (C12624 * C9561 + C12619 * C9824 + C12626 * C9562 + C12620 * C9825) *
               C17889) *
              C29209 * C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eezy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C29209 * C156) * C17992 +
            (C155 * C223 + C29209 * C498) * C17888 + C9500 * C17993 +
            C9897 * C17889) *
               C12619 +
           (C18281 + C18282 + C18283 + C18284) * C12620) *
              C4042 -
          ((C19631 + C19632 + C19633 + C19634) * C12620 +
           (C9898 * C17889 + C9502 * C17993 + C9897 * C17888 + C9500 * C17992) *
               C12619) *
              C4043 +
          ((C9502 * C17992 + C9898 * C17888 + C12268 * C17993 +
            C12527 * C17889) *
               C12619 +
           (C9504 * C17992 + C9899 * C17888 +
            (C155 * C9404 + C29209 * C9482) * C17993 +
            (C155 * C9562 + C29209 * C9889) * C17889) *
               C12620) *
              C4044) *
         C29179 * C29145) /
        (p * q * std::sqrt(p + q));
    d2eezz[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C18338 * C93 + C18341 + C18341 + C17888 * C558 +
                      C18339 * C1226 + C18342 + C18342 + C17889 * C1738) *
                         C29209 * C12619 +
                     (C18365 + C18366) * C29209 * C12620) *
                        C4042 -
                    ((C19715 + C19716) * C29209 * C12620 +
                     (C18339 * C4045 + C19707 + C19707 + C17889 * C4391 +
                      C18338 * C1226 + C19708 + C19708 + C17888 * C1738) *
                         C29209 * C12619) *
                        C4043 +
                    ((C18338 * C4045 + C23044 + C23044 + C17888 * C4391 +
                      C18339 * C9403 + C23045 + C23045 + C17889 * C9949) *
                         C29209 * C12619 +
                     (C18338 * C4046 + C23046 + C23046 + C17888 * C4392 +
                      C18339 * C9404 + C23047 + C23047 + C17889 * C9950) *
                         C29209 * C12620) *
                        C4044) *
                   C29179 * C29145) /
                  (p * q * std::sqrt(p + q));
    d2eexx[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C29220 * C29209 * C29196 * C29179 * C84 -
          (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
           C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
              C29220 * C29209 * C29196 * C29179 * C85 +
          (C87 * C95 + C115 + C115 + C77 * C105 + C89 * C96 + C116 + C116 +
           C78 * C106 + C91 * C97 + C117 + C117 + C79 * C107) *
              C29220 * C29209 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
           (C4439 * C642 + C4443 + C4443 + C29123 * C650) * C29220 * C4437 +
           (C4439 * C2252 + C4444 + C4444 + C29123 * C2258) * C29220 * C4438) *
              C29196 * C29179 * C84 -
          ((C4439 * C2253 + C4445 + C4445 + C29123 * C2259) * C29220 * C4438 +
           (C4439 * C641 + C4446 + C4446 + C29123 * C649) * C29220 * C4437 +
           (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C29220 * C4436) *
              C29196 * C29179 * C85 +
          ((C4439 * C95 + C4448 + C4448 + C29123 * C105) * C29220 * C4436 +
           (C4439 * C640 + C4449 + C4449 + C29123 * C648) * C29220 * C4437 +
           (C4439 * C2254 + C4450 + C4450 + C29123 * C2260) * C29220 * C4438) *
              C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eexy[36] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C155 * C93 + C29209 * C156) * C88 +
                     (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C29220 * C29196 * C29179 * C84 -
                    (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                     C180 * C77 + C179 * C88) *
                        C29220 * C29196 * C29179 * C85 +
                    (C181 * C88 + C182 * C77 + C184 * C90 + C183 * C78 +
                     (C155 * C97 + C29209 * C160) * C92 +
                     (C155 * C102 + C29209 * C165) * C79) *
                        C29220 * C29196 * C29179 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
                      C4490 * C2252 + C4438 * C2302) *
                         C4440 +
                     (C4488 * C98 + C4436 * C161 + C4489 * C646 + C4437 * C714 +
                      C4490 * C2255 + C4438 * C2305) *
                         C29123) *
                        C29220 * C29196 * C29179 * C84 -
                    ((C4490 * C2256 + C4438 * C2306 + C4489 * C645 +
                      C4437 * C713 + C4488 * C99 + C4436 * C162) *
                         C29123 +
                     (C4490 * C2253 + C4438 * C2303 + C4489 * C641 +
                      C4437 * C709 + C4488 * C94 + C4436 * C157) *
                         C4440) *
                        C29220 * C29196 * C29179 * C85 +
                    ((C4488 * C95 + C4436 * C158 + C4489 * C640 + C4437 * C708 +
                      C4490 * C2254 + C4438 * C2304) *
                         C4440 +
                     (C4488 * C100 + C4436 * C163 + C4489 * C644 +
                      C4437 * C712 + C4490 * C2257 + C4438 * C2307) *
                         C29123) *
                        C29220 * C29196 * C29179 * C86)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[36] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C222 * C93 + C29220 * C223) * C88 +
                     (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C29209 * C29196 * C29179 * C84 -
                    (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                     C247 * C77 + C246 * C88) *
                        C29209 * C29196 * C29179 * C85 +
                    (C248 * C88 + C249 * C77 + C251 * C90 + C250 * C78 +
                     (C222 * C97 + C29220 * C227) * C92 +
                     (C222 * C102 + C29220 * C232) * C79) *
                        C29209 * C29196 * C29179 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C4440 +
                      (C222 * C98 + C29220 * C228) * C29123) *
                         C4436 +
                     ((C222 * C642 + C29220 * C780) * C4440 +
                      (C222 * C646 + C29220 * C784) * C29123) *
                         C4437 +
                     ((C222 * C2252 + C29220 * C2346) * C4440 +
                      (C222 * C2255 + C29220 * C2349) * C29123) *
                         C4438) *
                        C29196 * C29179 * C84 -
                    (((C222 * C2256 + C29220 * C2350) * C29123 +
                      (C222 * C2253 + C29220 * C2347) * C4440) *
                         C4438 +
                     (C797 * C29123 + C798 * C4440) * C4437 +
                     (C247 * C29123 + C246 * C4440) * C4436) *
                        C29196 * C29179 * C85 +
                    ((C248 * C4440 + C249 * C29123) * C4436 +
                     (C796 * C4440 + C795 * C29123) * C4437 +
                     ((C222 * C2254 + C29220 * C2348) * C4440 +
                      (C222 * C2257 + C29220 * C2351) * C29123) *
                         C4438) *
                        C29196 * C29179 * C86)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[36] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C29209) *
                        C29220 * C29196 * C29179 * C84 -
                    ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                      C88 * C157 + C77 * C290) *
                         C29209 +
                     (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                      C88 * C94 + C77 * C99) *
                         C155) *
                        C29220 * C29196 * C29179 * C85 +
                    ((C88 * C95 + C77 * C100 + C90 * C96 + C78 * C101 +
                      C92 * C97 + C79 * C102) *
                         C155 +
                     (C88 * C158 + C77 * C291 + C90 * C159 + C78 * C292 +
                      C92 * C160 + C79 * C293) *
                         C29209) *
                        C29220 * C29196 * C29179 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4440 * C93 + C29123 * C98) * C4488 +
                     (C4440 * C156 + C29123 * C289) * C4436 +
                     (C4440 * C642 + C29123 * C646) * C4489 +
                     (C4440 * C710 + C29123 * C850) * C4437 +
                     (C4440 * C2252 + C29123 * C2255) * C4490 +
                     (C4440 * C2302 + C29123 * C2390) * C4438) *
                        C29220 * C29196 * C29179 * C84 -
                    ((C4440 * C2303 + C29123 * C2391) * C4438 +
                     (C4440 * C2253 + C29123 * C2256) * C4490 +
                     (C4440 * C709 + C29123 * C849) * C4437 +
                     (C4440 * C641 + C29123 * C645) * C4489 +
                     (C4440 * C157 + C29123 * C290) * C4436 +
                     (C4440 * C94 + C29123 * C99) * C4488) *
                        C29220 * C29196 * C29179 * C85 +
                    ((C4440 * C95 + C29123 * C100) * C4488 +
                     (C4440 * C158 + C29123 * C291) * C4436 +
                     (C4440 * C640 + C29123 * C644) * C4489 +
                     (C4440 * C708 + C29123 * C848) * C4437 +
                     (C4440 * C2254 + C29123 * C2257) * C4490 +
                     (C4440 * C2304 + C29123 * C2392) * C4438) *
                        C29220 * C29196 * C29179 * C86)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[36] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C332 * C93 + C339 + C339 + C29209 * C333) * C77 +
                     C356 * C78 + C357 * C79) *
                        C29220 * C29196 * C29179 * C84 -
                    (C358 * C79 + C357 * C78 + C356 * C77) * C29220 * C29196 *
                        C29179 * C85 +
                    (C357 * C77 + C358 * C78 +
                     (C332 * C97 + C349 + C349 + C29209 * C337) * C79) *
                        C29220 * C29196 * C29179 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C4605 * C93 + C4609 + C4609 + C4436 * C333 + C4606 * C642 +
                     C4610 + C4610 + C4437 * C904 + C4607 * C2252 + C4611 +
                     C4611 + C4438 * C2431) *
                        C29123 * C29220 * C29196 * C29179 * C84 -
                    (C4607 * C2253 + C4612 + C4612 + C4438 * C2432 +
                     C4606 * C641 + C4613 + C4613 + C4437 * C903 + C4605 * C94 +
                     C4614 + C4614 + C4436 * C334) *
                        C29123 * C29220 * C29196 * C29179 * C85 +
                    (C4605 * C95 + C4615 + C4615 + C4436 * C335 + C4606 * C640 +
                     C4616 + C4616 + C4437 * C902 + C4607 * C2254 + C4617 +
                     C4617 + C4438 * C2433) *
                        C29123 * C29220 * C29196 * C29179 * C86)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C29220 * C223) * C155 +
            (C222 * C156 + C29220 * C396) * C29209) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C29196 * C29179 * C84 -
          ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
              C29196 * C29179 * C85 +
          (C417 * C77 + (C410 + C416) * C78 +
           ((C222 * C97 + C29220 * C227) * C155 +
            (C222 * C160 + C29220 * C400) * C29209) *
               C79) *
              C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C29220 * C223) * C4488 +
           (C222 * C156 + C29220 * C396) * C4436 +
           (C222 * C642 + C29220 * C780) * C4489 +
           (C222 * C710 + C29220 * C972) * C4437 +
           (C222 * C2252 + C29220 * C2346) * C4490 +
           (C222 * C2302 + C29220 * C2475) * C4438) *
              C29123 * C29196 * C29179 * C84 -
          ((C222 * C2303 + C29220 * C2476) * C4438 +
           (C222 * C2253 + C29220 * C2347) * C4490 + C982 * C4437 +
           C798 * C4489 + C411 * C4436 + C246 * C4488) *
              C29123 * C29196 * C29179 * C85 +
          (C248 * C4488 + C412 * C4436 + C796 * C4489 + C981 * C4437 +
           (C222 * C2254 + C29220 * C2348) * C4490 +
           (C222 * C2304 + C29220 * C2477) * C4438) *
              C29123 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eezx[36] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C29220) *
                        C29209 * C29196 * C29179 * C84 -
                    ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                      C88 * C224 + C77 * C456) *
                         C29220 +
                     (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                      C88 * C94 + C77 * C99) *
                         C222) *
                        C29209 * C29196 * C29179 * C85 +
                    ((C88 * C95 + C77 * C100 + C90 * C96 + C78 * C101 +
                      C92 * C97 + C79 * C102) *
                         C222 +
                     (C88 * C225 + C77 * C457 + C90 * C226 + C78 * C458 +
                      C92 * C227 + C79 * C459) *
                         C29220) *
                        C29209 * C29196 * C29179 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C222 +
                      (C4440 * C223 + C29123 * C455) * C29220) *
                         C4436 +
                     ((C4440 * C642 + C29123 * C646) * C222 +
                      (C4440 * C780 + C29123 * C1036) * C29220) *
                         C4437 +
                     ((C4440 * C2252 + C29123 * C2255) * C222 +
                      (C4440 * C2346 + C29123 * C2516) * C29220) *
                         C4438) *
                        C29196 * C29179 * C84 -
                    (((C4440 * C2347 + C29123 * C2517) * C29220 +
                      (C4440 * C2253 + C29123 * C2256) * C222) *
                         C4438 +
                     ((C4440 * C779 + C29123 * C1035) * C29220 +
                      (C4440 * C641 + C29123 * C645) * C222) *
                         C4437 +
                     ((C4440 * C224 + C29123 * C456) * C29220 +
                      (C4440 * C94 + C29123 * C99) * C222) *
                         C4436) *
                        C29196 * C29179 * C85 +
                    (((C4440 * C95 + C29123 * C100) * C222 +
                      (C4440 * C225 + C29123 * C457) * C29220) *
                         C4436 +
                     ((C4440 * C640 + C29123 * C644) * C222 +
                      (C4440 * C778 + C29123 * C1034) * C29220) *
                         C4437 +
                     ((C4440 * C2254 + C29123 * C2257) * C222 +
                      (C4440 * C2348 + C29123 * C2518) * C29220) *
                         C4438) *
                        C29196 * C29179 * C86)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C29209 * C156) * C222 +
            (C155 * C223 + C29209 * C498) * C29220) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C29196 * C29179 * C84 -
          ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
              C29196 * C29179 * C85 +
          (C519 * C77 + (C512 + C518) * C78 +
           ((C155 * C97 + C29209 * C160) * C222 +
            (C155 * C227 + C29209 * C502) * C29220) *
               C79) *
              C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
            C4490 * C2252 + C4438 * C2302) *
               C222 +
           (C4488 * C223 + C4436 * C498 + C4489 * C780 + C4437 * C1090 +
            C4490 * C2346 + C4438 * C2557) *
               C29220) *
              C29123 * C29196 * C29179 * C84 -
          ((C4490 * C2347 + C4438 * C2558 + C4489 * C779 + C4437 * C1089 +
            C4488 * C224 + C4436 * C499) *
               C29220 +
           (C4490 * C2253 + C4438 * C2303 + C4489 * C641 + C4437 * C709 +
            C4488 * C94 + C4436 * C157) *
               C222) *
              C29123 * C29196 * C29179 * C85 +
          ((C4488 * C95 + C4436 * C158 + C4489 * C640 + C4437 * C708 +
            C4490 * C2254 + C4438 * C2304) *
               C222 +
           (C4488 * C225 + C4436 * C500 + C4489 * C778 + C4437 * C1088 +
            C4490 * C2348 + C4438 * C2559) *
               C29220) *
              C29123 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eezz[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
           C584 * C78 + C585 * C79) *
              C29196 * C29179 * C84 -
          (C586 * C79 + C585 * C78 + C584 * C77) * C29196 * C29179 * C85 +
          (C585 * C77 + C586 * C78 +
           (C557 * C97 + C574 + C574 + C29220 * C562) * C29209 * C79) *
              C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 +
           (C557 * C642 + C1163 + C1163 + C29220 * C1154) * C4437 +
           (C557 * C2252 + C2602 + C2602 + C29220 * C2598) * C4438) *
              C29123 * C29196 * C29179 * C84 -
          ((C557 * C2253 + C2603 + C2603 + C29220 * C2599) * C4438 +
           C1170 * C4437 + C581 * C4436) *
              C29123 * C29196 * C29179 * C85 +
          (C582 * C4436 + C1169 * C4437 +
           (C557 * C2254 + C2604 + C2604 + C29220 * C2600) * C4438) *
              C29123 * C29196 * C29179 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eexx[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C29220 * C29209 * C29196 * C636 -
           (C91 * C640 + C653 + C653 + C79 * C648 + C89 * C641 + C654 + C654 +
            C78 * C649 + C87 * C642 + C655 + C655 + C77 * C650) *
               C29220 * C29209 * C29196 * C29287) *
              C638 +
          ((C87 * C641 + C656 + C656 + C77 * C649 + C89 * C640 + C657 + C657 +
            C78 * C648 + C91 * C643 + C658 + C658 + C79 * C651) *
               C29220 * C29209 * C29196 * C29287 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C29220 * C29209 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
            C4848 * C4437 + C4849 * C4438) *
               C29196 * C636 -
           ((C4439 * C4819 + C4830 + C4830 + C29123 * C4823) * C29220 * C4438 +
            C4849 * C4437 + C4848 * C4436) *
               C29196 * C29287) *
              C638 +
          ((C4850 * C4436 + C4851 * C4437 +
            (C4439 * C4820 + C4835 + C4835 + C29123 * C4824) * C29220 * C4438) *
               C29196 * C29287 -
           (C4851 * C4438 + C4850 * C4437 +
            (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C29220 * C4436) *
               C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexy[37] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C88 +
                      (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C29220 * C29196 * C636 -
                     (C725 * C79 + C726 * C92 + C727 * C78 + C728 * C90 +
                      (C155 * C646 + C29209 * C714) * C77 +
                      (C155 * C642 + C29209 * C710) * C88) *
                         C29220 * C29196 * C29287) *
                        C638 +
                    ((C728 * C88 + C727 * C77 + C726 * C90 + C725 * C78 +
                      (C155 * C643 + C29209 * C711) * C92 +
                      (C155 * C647 + C29209 * C715) * C79) *
                         C29220 * C29196 * C29287 -
                     (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                      C180 * C77 + C179 * C88) *
                         C29220 * C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C4440 +
                      (C4488 * C98 + C4436 * C161 + C4489 * C646 +
                       C4437 * C714 + C4490 * C2255 + C4438 * C2305) *
                          C29123) *
                         C29220 * C29196 * C636 -
                     ((C4490 * C4821 + C4438 * C4903 + C4489 * C2255 +
                       C4437 * C2305 + C4488 * C646 + C4436 * C714) *
                          C29123 +
                      (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                       C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                          C4440) *
                         C29220 * C29196 * C29287) *
                        C638 +
                    (((C4488 * C641 + C4436 * C709 + C4489 * C2253 +
                       C4437 * C2303 + C4490 * C4820 + C4438 * C4902) *
                          C4440 +
                      (C4488 * C645 + C4436 * C713 + C4489 * C2256 +
                       C4437 * C2306 + C4490 * C4822 + C4438 * C4904) *
                          C29123) *
                         C29220 * C29196 * C29287 -
                     ((C4490 * C2256 + C4438 * C2306 + C4489 * C645 +
                       C4437 * C713 + C4488 * C99 + C4436 * C162) *
                          C29123 +
                      (C4490 * C2253 + C4438 * C2303 + C4489 * C641 +
                       C4437 * C709 + C4488 * C94 + C4436 * C157) *
                          C4440) *
                         C29220 * C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[37] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C88 +
                      (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C29209 * C29196 * C636 -
                     (C795 * C79 + C796 * C92 + C797 * C78 + C798 * C90 +
                      (C222 * C646 + C29220 * C784) * C77 +
                      (C222 * C642 + C29220 * C780) * C88) *
                         C29209 * C29196 * C29287) *
                        C638 +
                    ((C798 * C88 + C797 * C77 + C796 * C90 + C795 * C78 +
                      (C222 * C643 + C29220 * C781) * C92 +
                      (C222 * C647 + C29220 * C785) * C79) *
                         C29209 * C29196 * C29287 -
                     (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                      C247 * C77 + C246 * C88) *
                         C29209 * C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C4440 +
                       (C222 * C98 + C29220 * C228) * C29123) *
                          C4436 +
                      (C4980 + C4981) * C4437 + (C4982 + C4983) * C4438) *
                         C29196 * C636 -
                     (((C222 * C4821 + C29220 * C4957) * C29123 +
                       (C222 * C4819 + C29220 * C4955) * C4440) *
                          C4438 +
                      (C4983 + C4982) * C4437 + (C4981 + C4980) * C4436) *
                         C29196 * C29287) *
                        C638 +
                    (((C4968 + C4969) * C4436 + (C4984 + C4985) * C4437 +
                      ((C222 * C4820 + C29220 * C4956) * C4440 +
                       (C222 * C4822 + C29220 * C4958) * C29123) *
                          C4438) *
                         C29196 * C29287 -
                     ((C4985 + C4984) * C4438 + (C4969 + C4968) * C4437 +
                      (C247 * C29123 + C246 * C4440) * C4436) *
                         C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[37] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C29209) *
                         C29220 * C29196 * C636 -
                     ((C92 * C708 + C79 * C848 + C90 * C709 + C78 * C849 +
                       C88 * C710 + C77 * C850) *
                          C29209 +
                      (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                       C88 * C642 + C77 * C646) *
                          C155) *
                         C29220 * C29196 * C29287) *
                        C638 +
                    (((C88 * C641 + C77 * C645 + C90 * C640 + C78 * C644 +
                       C92 * C643 + C79 * C647) *
                          C155 +
                      (C88 * C709 + C77 * C849 + C90 * C708 + C78 * C848 +
                       C92 * C711 + C79 * C851) *
                          C29209) *
                         C29220 * C29196 * C29287 -
                     ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                       C88 * C157 + C77 * C290) *
                          C29209 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C155) *
                         C29220 * C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C4488 +
                      (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
                      C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
                         C29220 * C29196 * C636 -
                     ((C4440 * C4901 + C29123 * C5035) * C4438 +
                      (C4440 * C4819 + C29123 * C4821) * C4490 + C5057 * C4437 +
                      C5056 * C4489 + C5055 * C4436 + C5054 * C4488) *
                         C29220 * C29196 * C29287) *
                        C638 +
                    ((C5058 * C4488 + C5059 * C4436 + C5060 * C4489 +
                      C5061 * C4437 + (C4440 * C4820 + C29123 * C4822) * C4490 +
                      (C4440 * C4902 + C29123 * C5036) * C4438) *
                         C29220 * C29196 * C29287 -
                     (C5061 * C4438 + C5060 * C4490 + C5059 * C4437 +
                      C5058 * C4489 + (C4440 * C157 + C29123 * C290) * C4436 +
                      (C4440 * C94 + C29123 * C99) * C4488) *
                         C29220 * C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C29220 * C29196 * C636 -
           (C919 * C79 + C920 * C78 +
            (C332 * C642 + C913 + C913 + C29209 * C904) * C77) *
               C29220 * C29196 * C29287) *
              C638 +
          ((C920 * C77 + C919 * C78 +
            (C332 * C643 + C914 + C914 + C29209 * C905) * C79) *
               C29220 * C29196 * C29287 -
           (C358 * C79 + C357 * C78 + C356 * C77) * C29220 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4605 * C93 + C4609 + C4609 + C4436 * C333 + C4606 * C642 + C4610 +
            C4610 + C4437 * C904 + C4607 * C2252 + C4611 + C4611 +
            C4438 * C2431) *
               C29123 * C29220 * C29196 * C636 -
           (C4607 * C4819 + C5114 + C5114 + C4438 * C5111 + C4606 * C2252 +
            C5115 + C5115 + C4437 * C2431 + C4605 * C642 + C5116 + C5116 +
            C4436 * C904) *
               C29123 * C29220 * C29196 * C29287) *
              C638 +
          ((C4605 * C641 + C5117 + C5117 + C4436 * C903 + C4606 * C2253 +
            C5118 + C5118 + C4437 * C2432 + C4607 * C4820 + C5119 + C5119 +
            C4438 * C5112) *
               C29123 * C29220 * C29196 * C29287 -
           (C4607 * C2253 + C4612 + C4612 + C4438 * C2432 + C4606 * C641 +
            C4613 + C4613 + C4437 * C903 + C4605 * C94 + C4614 + C4614 +
            C4436 * C334) *
               C29123 * C29220 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C29220 * C223) * C155 +
             (C222 * C156 + C29220 * C396) * C29209) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C29196 * C636 -
           ((C983 + C977) * C79 + (C984 + C980) * C78 +
            ((C222 * C710 + C29220 * C972) * C29209 +
             (C222 * C642 + C29220 * C780) * C155) *
                C77) *
               C29196 * C29287) *
              C638 +
          (((C980 + C984) * C77 + (C977 + C983) * C78 +
            ((C222 * C643 + C29220 * C781) * C155 +
             (C222 * C711 + C29220 * C973) * C29209) *
                C79) *
               C29196 * C29287 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C29220 * C223) * C4488 +
            (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
            C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
               C29123 * C29196 * C636 -
           ((C222 * C4901 + C29220 * C5169) * C4438 +
            (C222 * C4819 + C29220 * C4955) * C4490 + C5179 * C4437 +
            C4976 * C4489 + C5178 * C4436 + C4974 * C4488) *
               C29123 * C29196 * C29287) *
              C638 +
          ((C798 * C4488 + C982 * C4436 + C4978 * C4489 + C5180 * C4437 +
            (C222 * C4820 + C29220 * C4956) * C4490 +
            (C222 * C4902 + C29220 * C5170) * C4438) *
               C29123 * C29196 * C29287 -
           (C5180 * C4438 + C4978 * C4490 + C982 * C4437 + C798 * C4489 +
            C411 * C4436 + C246 * C4488) *
               C29123 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezx[37] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C222 +
                      (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                       C92 * C225 + C79 * C457) *
                          C29220) *
                         C29209 * C29196 * C636 -
                     ((C92 * C778 + C79 * C1034 + C90 * C779 + C78 * C1035 +
                       C88 * C780 + C77 * C1036) *
                          C29220 +
                      (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                       C88 * C642 + C77 * C646) *
                          C222) *
                         C29209 * C29196 * C29287) *
                        C638 +
                    (((C88 * C641 + C77 * C645 + C90 * C640 + C78 * C644 +
                       C92 * C643 + C79 * C647) *
                          C222 +
                      (C88 * C779 + C77 * C1035 + C90 * C778 + C78 * C1034 +
                       C92 * C781 + C79 * C1037) *
                          C29220) *
                         C29209 * C29196 * C29287 -
                     ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                       C88 * C224 + C77 * C456) *
                          C29220 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C222) *
                         C29209 * C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C222 +
                       (C4440 * C223 + C29123 * C455) * C29220) *
                          C4436 +
                      (C5233 + C5249) * C4437 + (C5236 + C5250) * C4438) *
                         C29196 * C636 -
                     (((C4440 * C4955 + C29123 * C5230) * C29220 +
                       (C4440 * C4819 + C29123 * C4821) * C222) *
                          C4438 +
                      (C5250 + C5236) * C4437 + (C5249 + C5233) * C4436) *
                         C29196 * C29287) *
                        C638 +
                    (((C5239 + C5251) * C4436 + (C5242 + C5252) * C4437 +
                      ((C4440 * C4820 + C29123 * C4822) * C222 +
                       (C4440 * C4956 + C29123 * C5231) * C29220) *
                          C4438) *
                         C29196 * C29287 -
                     ((C5252 + C5242) * C4438 + (C5251 + C5239) * C4437 +
                      ((C4440 * C224 + C29123 * C456) * C29220 +
                       (C4440 * C94 + C29123 * C99) * C222) *
                          C4436) *
                         C29196 * C636) *
                        C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C222 +
             (C155 * C223 + C29209 * C498) * C29220) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C29196 * C636 -
           ((C1101 + C1095) * C79 + (C1102 + C1098) * C78 +
            ((C155 * C780 + C29209 * C1090) * C29220 +
             (C155 * C642 + C29209 * C710) * C222) *
                C77) *
               C29196 * C29287) *
              C638 +
          (((C1098 + C1102) * C77 + (C1095 + C1101) * C78 +
            ((C155 * C643 + C29209 * C711) * C222 +
             (C155 * C781 + C29209 * C1091) * C29220) *
                C79) *
               C29196 * C29287 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
             C4490 * C2252 + C4438 * C2302) *
                C222 +
            (C4488 * C223 + C4436 * C498 + C4489 * C780 + C4437 * C1090 +
             C4490 * C2346 + C4438 * C2557) *
                C29220) *
               C29123 * C29196 * C636 -
           ((C4490 * C4955 + C4438 * C5302 + C4489 * C2346 + C4437 * C2557 +
             C4488 * C780 + C4436 * C1090) *
                C29220 +
            (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 + C4437 * C2302 +
             C4488 * C642 + C4436 * C710) *
                C222) *
               C29123 * C29196 * C29287) *
              C638 +
          (((C4488 * C641 + C4436 * C709 + C4489 * C2253 + C4437 * C2303 +
             C4490 * C4820 + C4438 * C4902) *
                C222 +
            (C4488 * C779 + C4436 * C1089 + C4489 * C2347 + C4437 * C2558 +
             C4490 * C4956 + C4438 * C5303) *
                C29220) *
               C29123 * C29196 * C29287 -
           ((C4490 * C2347 + C4438 * C2558 + C4489 * C779 + C4437 * C1089 +
             C4488 * C224 + C4436 * C499) *
                C29220 +
            (C4490 * C2253 + C4438 * C2303 + C4489 * C641 + C4437 * C709 +
             C4488 * C94 + C4436 * C157) *
                C222) *
               C29123 * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezz[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
            C584 * C78 + C585 * C79) *
               C29196 * C636 -
           (C1171 * C79 + C1172 * C78 +
            (C557 * C642 + C1163 + C1163 + C29220 * C1154) * C29209 * C77) *
               C29196 * C29287) *
              C638 +
          ((C1172 * C77 + C1171 * C78 +
            (C557 * C643 + C1164 + C1164 + C29220 * C1155) * C29209 * C79) *
               C29196 * C29287 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C29196 * C636) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
            C5372 * C4438) *
               C29123 * C29196 * C636 -
           ((C557 * C4819 + C5361 + C5361 + C29220 * C5354) * C4438 +
            C5372 * C4437 + C5371 * C4436) *
               C29123 * C29196 * C29287) *
              C638 +
          ((C1170 * C4436 + C5373 * C4437 +
            (C557 * C4820 + C5364 + C5364 + C29220 * C5355) * C4438) *
               C29123 * C29196 * C29287 -
           (C5373 * C4438 + C1170 * C4437 + C581 * C4436) * C29123 * C29196 *
               C636) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexx[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C29220 * C29209 * C1222 -
           (C91 * C1224 + C1237 + C1237 + C79 * C1232 + C89 * C1225 + C1238 +
            C1238 + C78 * C1233 + C87 * C1226 + C1239 + C1239 + C77 * C1234) *
               C29220 * C29209 * C29289) *
              C29179 * C638 +
          ((C87 * C1225 + C1240 + C1240 + C77 * C1233 + C89 * C1224 + C1241 +
            C1241 + C78 * C1232 + C91 * C1227 + C1242 + C1242 + C79 * C1235) *
               C29220 * C29209 * C29289 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C29220 * C29209 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
            C4848 * C4437 + C4849 * C4438) *
               C1222 -
           ((C4439 * C5423 + C5430 + C5430 + C29123 * C5427) * C29220 * C4438 +
            (C4439 * C2654 + C5431 + C5431 + C29123 * C2660) * C29220 * C4437 +
            (C4439 * C1226 + C5432 + C5432 + C29123 * C1234) * C29220 * C4436) *
               C29289) *
              C29179 * C638 +
          (((C4439 * C1225 + C5433 + C5433 + C29123 * C1233) * C29220 * C4436 +
            (C4439 * C2655 + C5434 + C5434 + C29123 * C2661) * C29220 * C4437 +
            (C4439 * C5424 + C5435 + C5435 + C29123 * C5428) * C29220 * C4438) *
               C29289 -
           (C4851 * C4438 + C4850 * C4437 +
            (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C29220 * C4436) *
               C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexy[38] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C88 +
                      (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C29220 * C1222 -
                     (C1309 * C79 + C1310 * C92 + C1311 * C78 + C1312 * C90 +
                      (C155 * C1230 + C29209 * C1298) * C77 +
                      (C155 * C1226 + C29209 * C1294) * C88) *
                         C29220 * C29289) *
                        C29179 * C638 +
                    ((C1312 * C88 + C1311 * C77 + C1310 * C90 + C1309 * C78 +
                      (C155 * C1227 + C29209 * C1295) * C92 +
                      (C155 * C1231 + C29209 * C1299) * C79) *
                         C29220 * C29289 -
                     (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                      C180 * C77 + C179 * C88) *
                         C29220 * C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C4440 +
                      (C4488 * C98 + C4436 * C161 + C4489 * C646 +
                       C4437 * C714 + C4490 * C2255 + C4438 * C2305) *
                          C29123) *
                         C29220 * C1222 -
                     ((C4490 * C5425 + C4438 * C5487 + C4489 * C2657 +
                       C4437 * C2719 + C4488 * C1230 + C4436 * C1298) *
                          C29123 +
                      (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 +
                       C4437 * C2716 + C4488 * C1226 + C4436 * C1294) *
                          C4440) *
                         C29220 * C29289) *
                        C29179 * C638 +
                    (((C4488 * C1225 + C4436 * C1293 + C4489 * C2655 +
                       C4437 * C2717 + C4490 * C5424 + C4438 * C5486) *
                          C4440 +
                      (C4488 * C1229 + C4436 * C1297 + C4489 * C2658 +
                       C4437 * C2720 + C4490 * C5426 + C4438 * C5488) *
                          C29123) *
                         C29220 * C29289 -
                     ((C4490 * C2256 + C4438 * C2306 + C4489 * C645 +
                       C4437 * C713 + C4488 * C99 + C4436 * C162) *
                          C29123 +
                      (C4490 * C2253 + C4438 * C2303 + C4489 * C641 +
                       C4437 * C709 + C4488 * C94 + C4436 * C157) *
                          C4440) *
                         C29220 * C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[38] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C88 +
                      (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C29209 * C1222 -
                     (C1379 * C79 + C1380 * C92 + C1381 * C78 + C1382 * C90 +
                      (C222 * C1230 + C29220 * C1368) * C77 +
                      (C222 * C1226 + C29220 * C1364) * C88) *
                         C29209 * C29289) *
                        C29179 * C638 +
                    ((C1382 * C88 + C1381 * C77 + C1380 * C90 + C1379 * C78 +
                      (C222 * C1227 + C29220 * C1365) * C92 +
                      (C222 * C1231 + C29220 * C1369) * C79) *
                         C29209 * C29289 -
                     (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                      C247 * C77 + C246 * C88) *
                         C29209 * C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C4440 +
                       (C222 * C98 + C29220 * C228) * C29123) *
                          C4436 +
                      (C4980 + C4981) * C4437 + (C4982 + C4983) * C4438) *
                         C1222 -
                     (((C222 * C5425 + C29220 * C5541) * C29123 +
                       (C222 * C5423 + C29220 * C5539) * C4440) *
                          C4438 +
                      ((C222 * C2657 + C29220 * C2775) * C29123 +
                       (C222 * C2654 + C29220 * C2772) * C4440) *
                          C4437 +
                      ((C222 * C1230 + C29220 * C1368) * C29123 +
                       (C222 * C1226 + C29220 * C1364) * C4440) *
                          C4436) *
                         C29289) *
                        C29179 * C638 +
                    (((C1382 * C4440 + C1381 * C29123) * C4436 +
                      ((C222 * C2655 + C29220 * C2773) * C4440 +
                       (C222 * C2658 + C29220 * C2776) * C29123) *
                          C4437 +
                      ((C222 * C5424 + C29220 * C5540) * C4440 +
                       (C222 * C5426 + C29220 * C5542) * C29123) *
                          C4438) *
                         C29289 -
                     ((C4985 + C4984) * C4438 + (C4969 + C4968) * C4437 +
                      (C247 * C29123 + C246 * C4440) * C4436) *
                         C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[38] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C29209) *
                         C29220 * C1222 -
                     ((C92 * C1292 + C79 * C1432 + C90 * C1293 + C78 * C1433 +
                       C88 * C1294 + C77 * C1434) *
                          C29209 +
                      (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
                       C88 * C1226 + C77 * C1230) *
                          C155) *
                         C29220 * C29289) *
                        C29179 * C638 +
                    (((C88 * C1225 + C77 * C1229 + C90 * C1224 + C78 * C1228 +
                       C92 * C1227 + C79 * C1231) *
                          C155 +
                      (C88 * C1293 + C77 * C1433 + C90 * C1292 + C78 * C1432 +
                       C92 * C1295 + C79 * C1435) *
                          C29209) *
                         C29220 * C29289 -
                     ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                       C88 * C157 + C77 * C290) *
                          C29209 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C155) *
                         C29220 * C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C4488 +
                      (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
                      C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
                         C29220 * C1222 -
                     ((C4440 * C5485 + C29123 * C5593) * C4438 +
                      (C4440 * C5423 + C29123 * C5425) * C4490 +
                      (C4440 * C2716 + C29123 * C2828) * C4437 +
                      (C4440 * C2654 + C29123 * C2657) * C4489 +
                      (C4440 * C1294 + C29123 * C1434) * C4436 +
                      (C4440 * C1226 + C29123 * C1230) * C4488) *
                         C29220 * C29289) *
                        C29179 * C638 +
                    (((C4440 * C1225 + C29123 * C1229) * C4488 +
                      (C4440 * C1293 + C29123 * C1433) * C4436 +
                      (C4440 * C2655 + C29123 * C2658) * C4489 +
                      (C4440 * C2717 + C29123 * C2829) * C4437 +
                      (C4440 * C5424 + C29123 * C5426) * C4490 +
                      (C4440 * C5486 + C29123 * C5594) * C4438) *
                         C29220 * C29289 -
                     (C5061 * C4438 + C5060 * C4490 + C5059 * C4437 +
                      C5058 * C4489 + (C4440 * C157 + C29123 * C290) * C4436 +
                      (C4440 * C94 + C29123 * C99) * C4488) *
                         C29220 * C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[38] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C332 * C93 + C339 + C339 + C29209 * C333) * C77 +
                      C356 * C78 + C357 * C79) *
                         C29220 * C1222 -
                     (C1503 * C79 + C1504 * C78 +
                      (C332 * C1226 + C1497 + C1497 + C29209 * C1488) * C77) *
                         C29220 * C29289) *
                        C29179 * C638 +
                    ((C1504 * C77 + C1503 * C78 +
                      (C332 * C1227 + C1498 + C1498 + C29209 * C1489) * C79) *
                         C29220 * C29289 -
                     (C358 * C79 + C357 * C78 + C356 * C77) * C29220 * C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4605 * C93 + C4609 + C4609 + C4436 * C333 +
                      C4606 * C642 + C4610 + C4610 + C4437 * C904 +
                      C4607 * C2252 + C4611 + C4611 + C4438 * C2431) *
                         C29123 * C29220 * C1222 -
                     (C4607 * C5423 + C5648 + C5648 + C4438 * C5645 +
                      C4606 * C2654 + C5649 + C5649 + C4437 * C2881 +
                      C4605 * C1226 + C5650 + C5650 + C4436 * C1488) *
                         C29123 * C29220 * C29289) *
                        C29179 * C638 +
                    ((C4605 * C1225 + C5651 + C5651 + C4436 * C1487 +
                      C4606 * C2655 + C5652 + C5652 + C4437 * C2882 +
                      C4607 * C5424 + C5653 + C5653 + C4438 * C5646) *
                         C29123 * C29220 * C29289 -
                     (C4607 * C2253 + C4612 + C4612 + C4438 * C2432 +
                      C4606 * C641 + C4613 + C4613 + C4437 * C903 +
                      C4605 * C94 + C4614 + C4614 + C4436 * C334) *
                         C29123 * C29220 * C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C29220 * C223) * C155 +
             (C222 * C156 + C29220 * C396) * C29209) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C1222 -
           ((C1567 + C1561) * C79 + (C1568 + C1564) * C78 +
            ((C222 * C1294 + C29220 * C1556) * C29209 +
             (C222 * C1226 + C29220 * C1364) * C155) *
                C77) *
               C29289) *
              C29179 * C638 +
          (((C1564 + C1568) * C77 + (C1561 + C1567) * C78 +
            ((C222 * C1227 + C29220 * C1365) * C155 +
             (C222 * C1295 + C29220 * C1557) * C29209) *
                C79) *
               C29289 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C29220 * C223) * C4488 +
            (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
            C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
               C29123 * C1222 -
           ((C222 * C5485 + C29220 * C5703) * C4438 +
            (C222 * C5423 + C29220 * C5539) * C4490 +
            (C222 * C2716 + C29220 * C2937) * C4437 +
            (C222 * C2654 + C29220 * C2772) * C4489 +
            (C222 * C1294 + C29220 * C1556) * C4436 +
            (C222 * C1226 + C29220 * C1364) * C4488) *
               C29123 * C29289) *
              C29179 * C638 +
          ((C1382 * C4488 + C1566 * C4436 +
            (C222 * C2655 + C29220 * C2773) * C4489 +
            (C222 * C2717 + C29220 * C2938) * C4437 +
            (C222 * C5424 + C29220 * C5540) * C4490 +
            (C222 * C5486 + C29220 * C5704) * C4438) *
               C29123 * C29289 -
           (C5180 * C4438 + C4978 * C4490 + C982 * C4437 + C798 * C4489 +
            C411 * C4436 + C246 * C4488) *
               C29123 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezx[38] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C222 +
                      (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                       C92 * C225 + C79 * C457) *
                          C29220) *
                         C29209 * C1222 -
                     ((C92 * C1362 + C79 * C1618 + C90 * C1363 + C78 * C1619 +
                       C88 * C1364 + C77 * C1620) *
                          C29220 +
                      (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
                       C88 * C1226 + C77 * C1230) *
                          C222) *
                         C29209 * C29289) *
                        C29179 * C638 +
                    (((C88 * C1225 + C77 * C1229 + C90 * C1224 + C78 * C1228 +
                       C92 * C1227 + C79 * C1231) *
                          C222 +
                      (C88 * C1363 + C77 * C1619 + C90 * C1362 + C78 * C1618 +
                       C92 * C1365 + C79 * C1621) *
                          C29220) *
                         C29209 * C29289 -
                     ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                       C88 * C224 + C77 * C456) *
                          C29220 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C222) *
                         C29209 * C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C222 +
                       (C4440 * C223 + C29123 * C455) * C29220) *
                          C4436 +
                      (C5233 + C5249) * C4437 + (C5236 + C5250) * C4438) *
                         C1222 -
                     (((C4440 * C5539 + C29123 * C5755) * C29220 +
                       (C4440 * C5423 + C29123 * C5425) * C222) *
                          C4438 +
                      ((C4440 * C2772 + C29123 * C2990) * C29220 +
                       (C4440 * C2654 + C29123 * C2657) * C222) *
                          C4437 +
                      ((C4440 * C1364 + C29123 * C1620) * C29220 +
                       (C4440 * C1226 + C29123 * C1230) * C222) *
                          C4436) *
                         C29289) *
                        C29179 * C638 +
                    ((((C4440 * C1225 + C29123 * C1229) * C222 +
                       (C4440 * C1363 + C29123 * C1619) * C29220) *
                          C4436 +
                      ((C4440 * C2655 + C29123 * C2658) * C222 +
                       (C4440 * C2773 + C29123 * C2991) * C29220) *
                          C4437 +
                      ((C4440 * C5424 + C29123 * C5426) * C222 +
                       (C4440 * C5540 + C29123 * C5756) * C29220) *
                          C4438) *
                         C29289 -
                     ((C5252 + C5242) * C4438 + (C5251 + C5239) * C4437 +
                      ((C4440 * C224 + C29123 * C456) * C29220 +
                       (C4440 * C94 + C29123 * C99) * C222) *
                          C4436) *
                         C1222) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C222 +
             (C155 * C223 + C29209 * C498) * C29220) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C1222 -
           ((C1685 + C1679) * C79 + (C1686 + C1682) * C78 +
            ((C155 * C1364 + C29209 * C1674) * C29220 +
             (C155 * C1226 + C29209 * C1294) * C222) *
                C77) *
               C29289) *
              C29179 * C638 +
          (((C1682 + C1686) * C77 + (C1679 + C1685) * C78 +
            ((C155 * C1227 + C29209 * C1295) * C222 +
             (C155 * C1365 + C29209 * C1675) * C29220) *
                C79) *
               C29289 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
             C4490 * C2252 + C4438 * C2302) *
                C222 +
            (C4488 * C223 + C4436 * C498 + C4489 * C780 + C4437 * C1090 +
             C4490 * C2346 + C4438 * C2557) *
                C29220) *
               C29123 * C1222 -
           ((C4490 * C5539 + C4438 * C5807 + C4489 * C2772 + C4437 * C3043 +
             C4488 * C1364 + C4436 * C1674) *
                C29220 +
            (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 + C4437 * C2716 +
             C4488 * C1226 + C4436 * C1294) *
                C222) *
               C29123 * C29289) *
              C29179 * C638 +
          (((C4488 * C1225 + C4436 * C1293 + C4489 * C2655 + C4437 * C2717 +
             C4490 * C5424 + C4438 * C5486) *
                C222 +
            (C4488 * C1363 + C4436 * C1673 + C4489 * C2773 + C4437 * C3044 +
             C4490 * C5540 + C4438 * C5808) *
                C29220) *
               C29123 * C29289 -
           ((C4490 * C2347 + C4438 * C2558 + C4489 * C779 + C4437 * C1089 +
             C4488 * C224 + C4436 * C499) *
                C29220 +
            (C4490 * C2253 + C4438 * C2303 + C4489 * C641 + C4437 * C709 +
             C4488 * C94 + C4436 * C157) *
                C222) *
               C29123 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezz[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
            C584 * C78 + C585 * C79) *
               C1222 -
           (C1755 * C79 + C1756 * C78 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C29209 * C77) *
               C29289) *
              C29179 * C638 +
          ((C1756 * C77 + C1755 * C78 +
            (C557 * C1227 + C1748 + C1748 + C29220 * C1739) * C29209 * C79) *
               C29289 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
            C5372 * C4438) *
               C29123 * C1222 -
           ((C557 * C5423 + C5862 + C5862 + C29220 * C5859) * C4438 +
            (C557 * C2654 + C3100 + C3100 + C29220 * C3096) * C4437 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C4436) *
               C29123 * C29289) *
              C29179 * C638 +
          ((C1754 * C4436 +
            (C557 * C2655 + C3101 + C3101 + C29220 * C3097) * C4437 +
            (C557 * C5424 + C5863 + C5863 + C29220 * C5860) * C4438) *
               C29123 * C29289 -
           (C5373 * C4438 + C1170 * C4437 + C581 * C4436) * C29123 * C1222) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexx[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C29220 * C29209 * C29196 * C1806 -
           (C91 * C640 + C653 + C653 + C79 * C648 + C89 * C641 + C654 + C654 +
            C78 * C649 + C87 * C642 + C655 + C655 + C77 * C650) *
               C29220 * C29209 * C29196 * C29287) *
              C1808 +
          ((C87 * C641 + C656 + C656 + C77 * C649 + C89 * C640 + C657 + C657 +
            C78 * C648 + C91 * C643 + C658 + C658 + C79 * C651) *
               C29220 * C29209 * C29196 * C29287 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C29220 * C29209 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
            C4848 * C4437 + C4849 * C4438) *
               C29196 * C1806 -
           ((C4439 * C4819 + C4830 + C4830 + C29123 * C4823) * C29220 * C4438 +
            C4849 * C4437 + C4848 * C4436) *
               C29196 * C29287) *
              C1808 +
          ((C4850 * C4436 + C4851 * C4437 +
            (C4439 * C4820 + C4835 + C4835 + C29123 * C4824) * C29220 * C4438) *
               C29196 * C29287 -
           (C4851 * C4438 + C4850 * C4437 +
            (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C29220 * C4436) *
               C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexy[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C88 +
                      (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C29220 * C29196 * C1806 -
                     (C725 * C79 + C726 * C92 + C727 * C78 + C728 * C90 +
                      (C155 * C646 + C29209 * C714) * C77 +
                      (C155 * C642 + C29209 * C710) * C88) *
                         C29220 * C29196 * C29287) *
                        C1808 +
                    ((C728 * C88 + C727 * C77 + C726 * C90 + C725 * C78 +
                      (C155 * C643 + C29209 * C711) * C92 +
                      (C155 * C647 + C29209 * C715) * C79) *
                         C29220 * C29196 * C29287 -
                     (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                      C180 * C77 + C179 * C88) *
                         C29220 * C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C4440 +
                      (C4488 * C98 + C4436 * C161 + C4489 * C646 +
                       C4437 * C714 + C4490 * C2255 + C4438 * C2305) *
                          C29123) *
                         C29220 * C29196 * C1806 -
                     ((C4490 * C4821 + C4438 * C4903 + C4489 * C2255 +
                       C4437 * C2305 + C4488 * C646 + C4436 * C714) *
                          C29123 +
                      (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                       C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                          C4440) *
                         C29220 * C29196 * C29287) *
                        C1808 +
                    (((C4488 * C641 + C4436 * C709 + C4489 * C2253 +
                       C4437 * C2303 + C4490 * C4820 + C4438 * C4902) *
                          C4440 +
                      (C4488 * C645 + C4436 * C713 + C4489 * C2256 +
                       C4437 * C2306 + C4490 * C4822 + C4438 * C4904) *
                          C29123) *
                         C29220 * C29196 * C29287 -
                     ((C4490 * C2256 + C4438 * C2306 + C4489 * C645 +
                       C4437 * C713 + C4488 * C99 + C4436 * C162) *
                          C29123 +
                      (C4490 * C2253 + C4438 * C2303 + C4489 * C641 +
                       C4437 * C709 + C4488 * C94 + C4436 * C157) *
                          C4440) *
                         C29220 * C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C88 +
                      (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C29209 * C29196 * C1806 -
                     (C795 * C79 + C796 * C92 + C797 * C78 + C798 * C90 +
                      (C222 * C646 + C29220 * C784) * C77 +
                      (C222 * C642 + C29220 * C780) * C88) *
                         C29209 * C29196 * C29287) *
                        C1808 +
                    ((C798 * C88 + C797 * C77 + C796 * C90 + C795 * C78 +
                      (C222 * C643 + C29220 * C781) * C92 +
                      (C222 * C647 + C29220 * C785) * C79) *
                         C29209 * C29196 * C29287 -
                     (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                      C247 * C77 + C246 * C88) *
                         C29209 * C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C4440 +
                       (C222 * C98 + C29220 * C228) * C29123) *
                          C4436 +
                      (C4980 + C4981) * C4437 + (C4982 + C4983) * C4438) *
                         C29196 * C1806 -
                     (((C222 * C4821 + C29220 * C4957) * C29123 +
                       (C222 * C4819 + C29220 * C4955) * C4440) *
                          C4438 +
                      (C4983 + C4982) * C4437 + (C4981 + C4980) * C4436) *
                         C29196 * C29287) *
                        C1808 +
                    (((C4968 + C4969) * C4436 + (C4984 + C4985) * C4437 +
                      ((C222 * C4820 + C29220 * C4956) * C4440 +
                       (C222 * C4822 + C29220 * C4958) * C29123) *
                          C4438) *
                         C29196 * C29287 -
                     ((C4985 + C4984) * C4438 + (C4969 + C4968) * C4437 +
                      (C247 * C29123 + C246 * C4440) * C4436) *
                         C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C29209) *
                         C29220 * C29196 * C1806 -
                     ((C92 * C708 + C79 * C848 + C90 * C709 + C78 * C849 +
                       C88 * C710 + C77 * C850) *
                          C29209 +
                      (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                       C88 * C642 + C77 * C646) *
                          C155) *
                         C29220 * C29196 * C29287) *
                        C1808 +
                    (((C88 * C641 + C77 * C645 + C90 * C640 + C78 * C644 +
                       C92 * C643 + C79 * C647) *
                          C155 +
                      (C88 * C709 + C77 * C849 + C90 * C708 + C78 * C848 +
                       C92 * C711 + C79 * C851) *
                          C29209) *
                         C29220 * C29196 * C29287 -
                     ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                       C88 * C157 + C77 * C290) *
                          C29209 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C155) *
                         C29220 * C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C4488 +
                      (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
                      C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
                         C29220 * C29196 * C1806 -
                     ((C4440 * C4901 + C29123 * C5035) * C4438 +
                      (C4440 * C4819 + C29123 * C4821) * C4490 + C5057 * C4437 +
                      C5056 * C4489 + C5055 * C4436 + C5054 * C4488) *
                         C29220 * C29196 * C29287) *
                        C1808 +
                    ((C5058 * C4488 + C5059 * C4436 + C5060 * C4489 +
                      C5061 * C4437 + (C4440 * C4820 + C29123 * C4822) * C4490 +
                      (C4440 * C4902 + C29123 * C5036) * C4438) *
                         C29220 * C29196 * C29287 -
                     (C5061 * C4438 + C5060 * C4490 + C5059 * C4437 +
                      C5058 * C4489 + (C4440 * C157 + C29123 * C290) * C4436 +
                      (C4440 * C94 + C29123 * C99) * C4488) *
                         C29220 * C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C29209 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C29220 * C29196 * C1806 -
           (C919 * C79 + C920 * C78 +
            (C332 * C642 + C913 + C913 + C29209 * C904) * C77) *
               C29220 * C29196 * C29287) *
              C1808 +
          ((C920 * C77 + C919 * C78 +
            (C332 * C643 + C914 + C914 + C29209 * C905) * C79) *
               C29220 * C29196 * C29287 -
           (C358 * C79 + C357 * C78 + C356 * C77) * C29220 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4605 * C93 + C4609 + C4609 + C4436 * C333 + C4606 * C642 + C4610 +
            C4610 + C4437 * C904 + C4607 * C2252 + C4611 + C4611 +
            C4438 * C2431) *
               C29123 * C29220 * C29196 * C1806 -
           (C4607 * C4819 + C5114 + C5114 + C4438 * C5111 + C4606 * C2252 +
            C5115 + C5115 + C4437 * C2431 + C4605 * C642 + C5116 + C5116 +
            C4436 * C904) *
               C29123 * C29220 * C29196 * C29287) *
              C1808 +
          ((C4605 * C641 + C5117 + C5117 + C4436 * C903 + C4606 * C2253 +
            C5118 + C5118 + C4437 * C2432 + C4607 * C4820 + C5119 + C5119 +
            C4438 * C5112) *
               C29123 * C29220 * C29196 * C29287 -
           (C4607 * C2253 + C4612 + C4612 + C4438 * C2432 + C4606 * C641 +
            C4613 + C4613 + C4437 * C903 + C4605 * C94 + C4614 + C4614 +
            C4436 * C334) *
               C29123 * C29220 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C29220 * C223) * C155 +
             (C222 * C156 + C29220 * C396) * C29209) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C29196 * C1806 -
           ((C983 + C977) * C79 + (C984 + C980) * C78 +
            ((C222 * C710 + C29220 * C972) * C29209 +
             (C222 * C642 + C29220 * C780) * C155) *
                C77) *
               C29196 * C29287) *
              C1808 +
          (((C980 + C984) * C77 + (C977 + C983) * C78 +
            ((C222 * C643 + C29220 * C781) * C155 +
             (C222 * C711 + C29220 * C973) * C29209) *
                C79) *
               C29196 * C29287 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C29220 * C223) * C4488 +
            (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
            C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
               C29123 * C29196 * C1806 -
           ((C222 * C4901 + C29220 * C5169) * C4438 +
            (C222 * C4819 + C29220 * C4955) * C4490 + C5179 * C4437 +
            C4976 * C4489 + C5178 * C4436 + C4974 * C4488) *
               C29123 * C29196 * C29287) *
              C1808 +
          ((C798 * C4488 + C982 * C4436 + C4978 * C4489 + C5180 * C4437 +
            (C222 * C4820 + C29220 * C4956) * C4490 +
            (C222 * C4902 + C29220 * C5170) * C4438) *
               C29123 * C29196 * C29287 -
           (C5180 * C4438 + C4978 * C4490 + C982 * C4437 + C798 * C4489 +
            C411 * C4436 + C246 * C4488) *
               C29123 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezx[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C222 +
                      (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                       C92 * C225 + C79 * C457) *
                          C29220) *
                         C29209 * C29196 * C1806 -
                     ((C92 * C778 + C79 * C1034 + C90 * C779 + C78 * C1035 +
                       C88 * C780 + C77 * C1036) *
                          C29220 +
                      (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                       C88 * C642 + C77 * C646) *
                          C222) *
                         C29209 * C29196 * C29287) *
                        C1808 +
                    (((C88 * C641 + C77 * C645 + C90 * C640 + C78 * C644 +
                       C92 * C643 + C79 * C647) *
                          C222 +
                      (C88 * C779 + C77 * C1035 + C90 * C778 + C78 * C1034 +
                       C92 * C781 + C79 * C1037) *
                          C29220) *
                         C29209 * C29196 * C29287 -
                     ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                       C88 * C224 + C77 * C456) *
                          C29220 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C222) *
                         C29209 * C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C222 +
                       (C4440 * C223 + C29123 * C455) * C29220) *
                          C4436 +
                      (C5233 + C5249) * C4437 + (C5236 + C5250) * C4438) *
                         C29196 * C1806 -
                     (((C4440 * C4955 + C29123 * C5230) * C29220 +
                       (C4440 * C4819 + C29123 * C4821) * C222) *
                          C4438 +
                      (C5250 + C5236) * C4437 + (C5249 + C5233) * C4436) *
                         C29196 * C29287) *
                        C1808 +
                    (((C5239 + C5251) * C4436 + (C5242 + C5252) * C4437 +
                      ((C4440 * C4820 + C29123 * C4822) * C222 +
                       (C4440 * C4956 + C29123 * C5231) * C29220) *
                          C4438) *
                         C29196 * C29287 -
                     ((C5252 + C5242) * C4438 + (C5251 + C5239) * C4437 +
                      ((C4440 * C224 + C29123 * C456) * C29220 +
                       (C4440 * C94 + C29123 * C99) * C222) *
                          C4436) *
                         C29196 * C1806) *
                        C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C222 +
             (C155 * C223 + C29209 * C498) * C29220) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C29196 * C1806 -
           ((C1101 + C1095) * C79 + (C1102 + C1098) * C78 +
            ((C155 * C780 + C29209 * C1090) * C29220 +
             (C155 * C642 + C29209 * C710) * C222) *
                C77) *
               C29196 * C29287) *
              C1808 +
          (((C1098 + C1102) * C77 + (C1095 + C1101) * C78 +
            ((C155 * C643 + C29209 * C711) * C222 +
             (C155 * C781 + C29209 * C1091) * C29220) *
                C79) *
               C29196 * C29287 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
             C4490 * C2252 + C4438 * C2302) *
                C222 +
            (C4488 * C223 + C4436 * C498 + C4489 * C780 + C4437 * C1090 +
             C4490 * C2346 + C4438 * C2557) *
                C29220) *
               C29123 * C29196 * C1806 -
           ((C4490 * C4955 + C4438 * C5302 + C4489 * C2346 + C4437 * C2557 +
             C4488 * C780 + C4436 * C1090) *
                C29220 +
            (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 + C4437 * C2302 +
             C4488 * C642 + C4436 * C710) *
                C222) *
               C29123 * C29196 * C29287) *
              C1808 +
          (((C4488 * C641 + C4436 * C709 + C4489 * C2253 + C4437 * C2303 +
             C4490 * C4820 + C4438 * C4902) *
                C222 +
            (C4488 * C779 + C4436 * C1089 + C4489 * C2347 + C4437 * C2558 +
             C4490 * C4956 + C4438 * C5303) *
                C29220) *
               C29123 * C29196 * C29287 -
           ((C4490 * C2347 + C4438 * C2558 + C4489 * C779 + C4437 * C1089 +
             C4488 * C224 + C4436 * C499) *
                C29220 +
            (C4490 * C2253 + C4438 * C2303 + C4489 * C641 + C4437 * C709 +
             C4488 * C94 + C4436 * C157) *
                C222) *
               C29123 * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezz[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
            C584 * C78 + C585 * C79) *
               C29196 * C1806 -
           (C1171 * C79 + C1172 * C78 +
            (C557 * C642 + C1163 + C1163 + C29220 * C1154) * C29209 * C77) *
               C29196 * C29287) *
              C1808 +
          ((C1172 * C77 + C1171 * C78 +
            (C557 * C643 + C1164 + C1164 + C29220 * C1155) * C29209 * C79) *
               C29196 * C29287 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C29196 * C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
            C5372 * C4438) *
               C29123 * C29196 * C1806 -
           ((C557 * C4819 + C5361 + C5361 + C29220 * C5354) * C4438 +
            C5372 * C4437 + C5371 * C4436) *
               C29123 * C29196 * C29287) *
              C1808 +
          ((C1170 * C4436 + C5373 * C4437 +
            (C557 * C4820 + C5364 + C5364 + C29220 * C5355) * C4438) *
               C29123 * C29196 * C29287 -
           (C5373 * C4438 + C1170 * C4437 + C581 * C4436) * C29123 * C29196 *
               C1806) *
              C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexx[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C29220 * C29209 * C29196 * C2248 -
          (C91 * C640 + C653 + C653 + C79 * C648 + C89 * C641 + C654 + C654 +
           C78 * C649 + C87 * C642 + C655 + C655 + C77 * C650) *
              C29220 * C29209 * C29196 * C2249 +
          (C87 * C2252 + C2262 + C2262 + C77 * C2258 + C89 * C2253 + C2263 +
           C2263 + C78 * C2259 + C91 * C2254 + C2264 + C2264 + C79 * C2260) *
              C29220 * C29209 * C29196 * C2250) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
           C4848 * C4437 + C4849 * C4438) *
              C29196 * C2248 -
          (C6361 * C4438 + C4849 * C4437 + C4848 * C4436) * C29196 * C2249 +
          (C4849 * C4436 + C6361 * C4437 +
           (C4439 * C6351 + C6357 + C6357 + C29123 * C6353) * C29220 * C4438) *
              C29196 * C2250) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eexy[40] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C155 * C93 + C29209 * C156) * C88 +
                     (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C29220 * C29196 * C2248 -
                    (C725 * C79 + C726 * C92 + C727 * C78 + C728 * C90 +
                     (C155 * C646 + C29209 * C714) * C77 +
                     (C155 * C642 + C29209 * C710) * C88) *
                        C29220 * C29196 * C2249 +
                    ((C155 * C2252 + C29209 * C2302) * C88 +
                     (C155 * C2255 + C29209 * C2305) * C77 +
                     (C155 * C2253 + C29209 * C2303) * C90 +
                     (C155 * C2256 + C29209 * C2306) * C78 +
                     (C155 * C2254 + C29209 * C2304) * C92 +
                     (C155 * C2257 + C29209 * C2307) * C79) *
                        C29220 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
                      C4490 * C2252 + C4438 * C2302) *
                         C4440 +
                     (C4488 * C98 + C4436 * C161 + C4489 * C646 + C4437 * C714 +
                      C4490 * C2255 + C4438 * C2305) *
                         C29123) *
                        C29220 * C29196 * C2248 -
                    ((C4490 * C4821 + C4438 * C4903 + C4489 * C2255 +
                      C4437 * C2305 + C4488 * C646 + C4436 * C714) *
                         C29123 +
                     (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                      C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                         C4440) *
                        C29220 * C29196 * C2249 +
                    ((C4488 * C2252 + C4436 * C2302 + C4489 * C4819 +
                      C4437 * C4901 + C4490 * C6351 + C4438 * C6399) *
                         C4440 +
                     (C4488 * C2255 + C4436 * C2305 + C4489 * C4821 +
                      C4437 * C4903 + C4490 * C6352 + C4438 * C6400) *
                         C29123) *
                        C29220 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eexz[40] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C222 * C93 + C29220 * C223) * C88 +
                     (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C29209 * C29196 * C2248 -
                    (C795 * C79 + C796 * C92 + C797 * C78 + C798 * C90 +
                     (C222 * C646 + C29220 * C784) * C77 +
                     (C222 * C642 + C29220 * C780) * C88) *
                        C29209 * C29196 * C2249 +
                    ((C222 * C2252 + C29220 * C2346) * C88 +
                     (C222 * C2255 + C29220 * C2349) * C77 +
                     (C222 * C2253 + C29220 * C2347) * C90 +
                     (C222 * C2256 + C29220 * C2350) * C78 +
                     (C222 * C2254 + C29220 * C2348) * C92 +
                     (C222 * C2257 + C29220 * C2351) * C79) *
                        C29209 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C4440 +
                      (C222 * C98 + C29220 * C228) * C29123) *
                         C4436 +
                     (C4980 + C4981) * C4437 + C6442 * C4438) *
                        C29196 * C2248 -
                    ((C6449 + C6450) * C4438 + (C4983 + C4982) * C4437 +
                     (C4981 + C4980) * C4436) *
                        C29196 * C2249 +
                    (C6442 * C4436 + (C6450 + C6449) * C4437 +
                     ((C222 * C6351 + C29220 * C6439) * C4440 +
                      (C222 * C6352 + C29220 * C6440) * C29123) *
                         C4438) *
                        C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[40] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C29209) *
                        C29220 * C29196 * C2248 -
                    ((C92 * C708 + C79 * C848 + C90 * C709 + C78 * C849 +
                      C88 * C710 + C77 * C850) *
                         C29209 +
                     (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                      C88 * C642 + C77 * C646) *
                         C155) *
                        C29220 * C29196 * C2249 +
                    ((C88 * C2252 + C77 * C2255 + C90 * C2253 + C78 * C2256 +
                      C92 * C2254 + C79 * C2257) *
                         C155 +
                     (C88 * C2302 + C77 * C2390 + C90 * C2303 + C78 * C2391 +
                      C92 * C2304 + C79 * C2392) *
                         C29209) *
                        C29220 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4440 * C93 + C29123 * C98) * C4488 +
                     (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
                     C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
                        C29220 * C29196 * C2248 -
                    (C6494 * C4438 + C6495 * C4490 + C5057 * C4437 +
                     C5056 * C4489 + C5055 * C4436 + C5054 * C4488) *
                        C29220 * C29196 * C2249 +
                    (C5056 * C4488 + C5057 * C4436 + C6495 * C4489 +
                     C6494 * C4437 + (C4440 * C6351 + C29123 * C6352) * C4490 +
                     (C4440 * C6399 + C29123 * C6488) * C4438) *
                        C29220 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[40] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C332 * C93 + C339 + C339 + C29209 * C333) * C77 +
                     C356 * C78 + C357 * C79) *
                        C29220 * C29196 * C2248 -
                    (C919 * C79 + C920 * C78 +
                     (C332 * C642 + C913 + C913 + C29209 * C904) * C77) *
                        C29220 * C29196 * C2249 +
                    ((C332 * C2252 + C2435 + C2435 + C29209 * C2431) * C77 +
                     (C332 * C2253 + C2436 + C2436 + C29209 * C2432) * C78 +
                     (C332 * C2254 + C2437 + C2437 + C29209 * C2433) * C79) *
                        C29220 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C4605 * C93 + C4609 + C4609 + C4436 * C333 + C4606 * C642 +
                     C4610 + C4610 + C4437 * C904 + C4607 * C2252 + C4611 +
                     C4611 + C4438 * C2431) *
                        C29123 * C29220 * C29196 * C2248 -
                    (C4607 * C4819 + C5114 + C5114 + C4438 * C5111 +
                     C4606 * C2252 + C5115 + C5115 + C4437 * C2431 +
                     C4605 * C642 + C5116 + C5116 + C4436 * C904) *
                        C29123 * C29220 * C29196 * C2249 +
                    (C4605 * C2252 + C6535 + C6535 + C4436 * C2431 +
                     C4606 * C4819 + C6536 + C6536 + C4437 * C5111 +
                     C4607 * C6351 + C6537 + C6537 + C4438 * C6533) *
                        C29123 * C29220 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[40] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C155 +
                      (C222 * C156 + C29220 * C396) * C29209) *
                         C77 +
                     (C402 + C414) * C78 + C417 * C79) *
                        C29196 * C2248 -
                    ((C983 + C977) * C79 + (C984 + C980) * C78 +
                     ((C222 * C710 + C29220 * C972) * C29209 +
                      (C222 * C642 + C29220 * C780) * C155) *
                         C77) *
                        C29196 * C2249 +
                    (((C222 * C2252 + C29220 * C2346) * C155 +
                      (C222 * C2302 + C29220 * C2475) * C29209) *
                         C77 +
                     ((C222 * C2253 + C29220 * C2347) * C155 +
                      (C222 * C2303 + C29220 * C2476) * C29209) *
                         C78 +
                     ((C222 * C2254 + C29220 * C2348) * C155 +
                      (C222 * C2304 + C29220 * C2477) * C29209) *
                         C79) *
                        C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C222 * C93 + C29220 * C223) * C4488 +
                     (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
                     C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
                        C29123 * C29196 * C2248 -
                    (C6579 * C4438 + C6448 * C4490 + C5179 * C4437 +
                     C4976 * C4489 + C5178 * C4436 + C4974 * C4488) *
                        C29123 * C29196 * C2249 +
                    (C4976 * C4488 + C5179 * C4436 + C6448 * C4489 +
                     C6579 * C4437 + (C222 * C6351 + C29220 * C6439) * C4490 +
                     (C222 * C6399 + C29220 * C6575) * C4438) *
                        C29123 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezx[40] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C29220) *
                        C29209 * C29196 * C2248 -
                    ((C92 * C778 + C79 * C1034 + C90 * C779 + C78 * C1035 +
                      C88 * C780 + C77 * C1036) *
                         C29220 +
                     (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                      C88 * C642 + C77 * C646) *
                         C222) *
                        C29209 * C29196 * C2249 +
                    ((C88 * C2252 + C77 * C2255 + C90 * C2253 + C78 * C2256 +
                      C92 * C2254 + C79 * C2257) *
                         C222 +
                     (C88 * C2346 + C77 * C2516 + C90 * C2347 + C78 * C2517 +
                      C92 * C2348 + C79 * C2518) *
                         C29220) *
                        C29209 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C222 +
                      (C4440 * C223 + C29123 * C455) * C29220) *
                         C4436 +
                     (C5233 + C5249) * C4437 + C6619 * C4438) *
                        C29196 * C2248 -
                    ((C6624 + C6622) * C4438 + (C5250 + C5236) * C4437 +
                     (C5249 + C5233) * C4436) *
                        C29196 * C2249 +
                    (C6619 * C4436 + (C6622 + C6624) * C4437 +
                     ((C4440 * C6351 + C29123 * C6352) * C222 +
                      (C4440 * C6439 + C29123 * C6617) * C29220) *
                         C4438) *
                        C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezy[40] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C222 +
                      (C155 * C223 + C29209 * C498) * C29220) *
                         C77 +
                     (C504 + C516) * C78 + C519 * C79) *
                        C29196 * C2248 -
                    ((C1101 + C1095) * C79 + (C1102 + C1098) * C78 +
                     ((C155 * C780 + C29209 * C1090) * C29220 +
                      (C155 * C642 + C29209 * C710) * C222) *
                         C77) *
                        C29196 * C2249 +
                    (((C155 * C2252 + C29209 * C2302) * C222 +
                      (C155 * C2346 + C29209 * C2557) * C29220) *
                         C77 +
                     ((C155 * C2253 + C29209 * C2303) * C222 +
                      (C155 * C2347 + C29209 * C2558) * C29220) *
                         C78 +
                     ((C155 * C2254 + C29209 * C2304) * C222 +
                      (C155 * C2348 + C29209 * C2559) * C29220) *
                         C79) *
                        C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
                      C4490 * C2252 + C4438 * C2302) *
                         C222 +
                     (C4488 * C223 + C4436 * C498 + C4489 * C780 +
                      C4437 * C1090 + C4490 * C2346 + C4438 * C2557) *
                         C29220) *
                        C29123 * C29196 * C2248 -
                    ((C4490 * C4955 + C4438 * C5302 + C4489 * C2346 +
                      C4437 * C2557 + C4488 * C780 + C4436 * C1090) *
                         C29220 +
                     (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                      C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                         C222) *
                        C29123 * C29196 * C2249 +
                    ((C4488 * C2252 + C4436 * C2302 + C4489 * C4819 +
                      C4437 * C4901 + C4490 * C6351 + C4438 * C6399) *
                         C222 +
                     (C4488 * C2346 + C4436 * C2557 + C4489 * C4955 +
                      C4437 * C5302 + C4490 * C6439 + C4438 * C6662) *
                         C29220) *
                        C29123 * C29196 * C2250) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezz[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
           C584 * C78 + C585 * C79) *
              C29196 * C2248 -
          (C1171 * C79 + C1172 * C78 +
           (C557 * C642 + C1163 + C1163 + C29220 * C1154) * C29209 * C77) *
              C29196 * C2249 +
          ((C557 * C2252 + C2602 + C2602 + C29220 * C2598) * C29209 * C77 +
           (C557 * C2253 + C2603 + C2603 + C29220 * C2599) * C29209 * C78 +
           (C557 * C2254 + C2604 + C2604 + C29220 * C2600) * C29209 * C79) *
              C29196 * C2250) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
           C5372 * C4438) *
              C29123 * C29196 * C2248 -
          (C6708 * C4438 + C5372 * C4437 + C5371 * C4436) * C29123 * C29196 *
              C2249 +
          (C5372 * C4436 + C6708 * C4437 +
           (C557 * C6351 + C6705 + C6705 + C29220 * C6701) * C4438) *
              C29123 * C29196 * C2250) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eexx[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C29220 * C29209 * C1222 -
           (C91 * C1224 + C1237 + C1237 + C79 * C1232 + C89 * C1225 + C1238 +
            C1238 + C78 * C1233 + C87 * C1226 + C1239 + C1239 + C77 * C1234) *
               C29220 * C29209 * C29289) *
              C1806 +
          ((C87 * C2654 + C2664 + C2664 + C77 * C2660 + C89 * C2655 + C2665 +
            C2665 + C78 * C2661 + C91 * C2656 + C2666 + C2666 + C79 * C2662) *
               C29220 * C29209 * C29289 -
           (C91 * C640 + C653 + C653 + C79 * C648 + C89 * C641 + C654 + C654 +
            C78 * C649 + C87 * C642 + C655 + C655 + C77 * C650) *
               C29220 * C29209 * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
            C4848 * C4437 + C4849 * C4438) *
               C1222 -
           (C6773 * C4438 + C6774 * C4437 +
            (C4439 * C1226 + C5432 + C5432 + C29123 * C1234) * C29220 * C4436) *
               C29289) *
              C1806 +
          ((C6774 * C4436 + C6773 * C4437 +
            (C4439 * C6758 + C6766 + C6766 + C29123 * C6760) * C29220 * C4438) *
               C29289 -
           (C6361 * C4438 + C4849 * C4437 + C4848 * C4436) * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eexy[41] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C88 +
                      (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C29220 * C1222 -
                     (C1309 * C79 + C1310 * C92 + C1311 * C78 + C1312 * C90 +
                      (C155 * C1230 + C29209 * C1298) * C77 +
                      (C155 * C1226 + C29209 * C1294) * C88) *
                         C29220 * C29289) *
                        C1806 +
                    (((C155 * C2654 + C29209 * C2716) * C88 +
                      (C155 * C2657 + C29209 * C2719) * C77 +
                      (C155 * C2655 + C29209 * C2717) * C90 +
                      (C155 * C2658 + C29209 * C2720) * C78 +
                      (C155 * C2656 + C29209 * C2718) * C92 +
                      (C155 * C2659 + C29209 * C2721) * C79) *
                         C29220 * C29289 -
                     (C725 * C79 + C726 * C92 + C727 * C78 + C728 * C90 +
                      (C155 * C646 + C29209 * C714) * C77 +
                      (C155 * C642 + C29209 * C710) * C88) *
                         C29220 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C4440 +
                      (C4488 * C98 + C4436 * C161 + C4489 * C646 +
                       C4437 * C714 + C4490 * C2255 + C4438 * C2305) *
                          C29123) *
                         C29220 * C1222 -
                     ((C4490 * C5425 + C4438 * C5487 + C4489 * C2657 +
                       C4437 * C2719 + C4488 * C1230 + C4436 * C1298) *
                          C29123 +
                      (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 +
                       C4437 * C2716 + C4488 * C1226 + C4436 * C1294) *
                          C4440) *
                         C29220 * C29289) *
                        C1806 +
                    (((C4488 * C2654 + C4436 * C2716 + C4489 * C5423 +
                       C4437 * C5485 + C4490 * C6758 + C4438 * C6824) *
                          C4440 +
                      (C4488 * C2657 + C4436 * C2719 + C4489 * C5425 +
                       C4437 * C5487 + C4490 * C6759 + C4438 * C6825) *
                          C29123) *
                         C29220 * C29289 -
                     ((C4490 * C4821 + C4438 * C4903 + C4489 * C2255 +
                       C4437 * C2305 + C4488 * C646 + C4436 * C714) *
                          C29123 +
                      (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                       C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                          C4440) *
                         C29220 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eexz[41] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C88 +
                      (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C29209 * C1222 -
                     (C1379 * C79 + C1380 * C92 + C1381 * C78 + C1382 * C90 +
                      (C222 * C1230 + C29220 * C1368) * C77 +
                      (C222 * C1226 + C29220 * C1364) * C88) *
                         C29209 * C29289) *
                        C1806 +
                    (((C222 * C2654 + C29220 * C2772) * C88 +
                      (C222 * C2657 + C29220 * C2775) * C77 +
                      (C222 * C2655 + C29220 * C2773) * C90 +
                      (C222 * C2658 + C29220 * C2776) * C78 +
                      (C222 * C2656 + C29220 * C2774) * C92 +
                      (C222 * C2659 + C29220 * C2777) * C79) *
                         C29209 * C29289 -
                     (C795 * C79 + C796 * C92 + C797 * C78 + C798 * C90 +
                      (C222 * C646 + C29220 * C784) * C77 +
                      (C222 * C642 + C29220 * C780) * C88) *
                         C29209 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C4440 +
                       (C222 * C98 + C29220 * C228) * C29123) *
                          C4436 +
                      (C4980 + C4981) * C4437 + C6442 * C4438) *
                         C1222 -
                     ((C6891 + C6892) * C4438 + (C6893 + C6894) * C4437 +
                      ((C222 * C1230 + C29220 * C1368) * C29123 +
                       (C222 * C1226 + C29220 * C1364) * C4440) *
                          C4436) *
                         C29289) *
                        C1806 +
                    (((C6894 + C6893) * C4436 + (C6892 + C6891) * C4437 +
                      ((C222 * C6758 + C29220 * C6876) * C4440 +
                       (C222 * C6759 + C29220 * C6877) * C29123) *
                          C4438) *
                         C29289 -
                     ((C6449 + C6450) * C4438 + (C4983 + C4982) * C4437 +
                      (C4981 + C4980) * C4436) *
                         C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[41] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C29209) *
                         C29220 * C1222 -
                     ((C92 * C1292 + C79 * C1432 + C90 * C1293 + C78 * C1433 +
                       C88 * C1294 + C77 * C1434) *
                          C29209 +
                      (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
                       C88 * C1226 + C77 * C1230) *
                          C155) *
                         C29220 * C29289) *
                        C1806 +
                    (((C88 * C2654 + C77 * C2657 + C90 * C2655 + C78 * C2658 +
                       C92 * C2656 + C79 * C2659) *
                          C155 +
                      (C88 * C2716 + C77 * C2828 + C90 * C2717 + C78 * C2829 +
                       C92 * C2718 + C79 * C2830) *
                          C29209) *
                         C29220 * C29289 -
                     ((C92 * C708 + C79 * C848 + C90 * C709 + C78 * C849 +
                       C88 * C710 + C77 * C850) *
                          C29209 +
                      (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                       C88 * C642 + C77 * C646) *
                          C155) *
                         C29220 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C4488 +
                      (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
                      C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
                         C29220 * C1222 -
                     (C6954 * C4438 + C6955 * C4490 + C6956 * C4437 +
                      C6957 * C4489 + (C4440 * C1294 + C29123 * C1434) * C4436 +
                      (C4440 * C1226 + C29123 * C1230) * C4488) *
                         C29220 * C29289) *
                        C1806 +
                    ((C6957 * C4488 + C6956 * C4436 + C6955 * C4489 +
                      C6954 * C4437 + (C4440 * C6758 + C29123 * C6759) * C4490 +
                      (C4440 * C6824 + C29123 * C6944) * C4438) *
                         C29220 * C29289 -
                     (C6494 * C4438 + C6495 * C4490 + C5057 * C4437 +
                      C5056 * C4489 + C5055 * C4436 + C5054 * C4488) *
                         C29220 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[41] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C332 * C93 + C339 + C339 + C29209 * C333) * C77 +
                      C356 * C78 + C357 * C79) *
                         C29220 * C1222 -
                     (C1503 * C79 + C1504 * C78 +
                      (C332 * C1226 + C1497 + C1497 + C29209 * C1488) * C77) *
                         C29220 * C29289) *
                        C1806 +
                    (((C332 * C2654 + C2885 + C2885 + C29209 * C2881) * C77 +
                      (C332 * C2655 + C2886 + C2886 + C29209 * C2882) * C78 +
                      (C332 * C2656 + C2887 + C2887 + C29209 * C2883) * C79) *
                         C29220 * C29289 -
                     (C919 * C79 + C920 * C78 +
                      (C332 * C642 + C913 + C913 + C29209 * C904) * C77) *
                         C29220 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4605 * C93 + C4609 + C4609 + C4436 * C333 +
                      C4606 * C642 + C4610 + C4610 + C4437 * C904 +
                      C4607 * C2252 + C4611 + C4611 + C4438 * C2431) *
                         C29123 * C29220 * C1222 -
                     (C4607 * C5423 + C5648 + C5648 + C4438 * C5645 +
                      C4606 * C2654 + C5649 + C5649 + C4437 * C2881 +
                      C4605 * C1226 + C5650 + C5650 + C4436 * C1488) *
                         C29123 * C29220 * C29289) *
                        C1806 +
                    ((C4605 * C2654 + C7009 + C7009 + C4436 * C2881 +
                      C4606 * C5423 + C7010 + C7010 + C4437 * C5645 +
                      C4607 * C6758 + C7011 + C7011 + C4438 * C7007) *
                         C29123 * C29220 * C29289 -
                     (C4607 * C4819 + C5114 + C5114 + C4438 * C5111 +
                      C4606 * C2252 + C5115 + C5115 + C4437 * C2431 +
                      C4605 * C642 + C5116 + C5116 + C4436 * C904) *
                         C29123 * C29220 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[41] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C155 +
                       (C222 * C156 + C29220 * C396) * C29209) *
                          C77 +
                      (C402 + C414) * C78 + C417 * C79) *
                         C1222 -
                     ((C1567 + C1561) * C79 + (C1568 + C1564) * C78 +
                      ((C222 * C1294 + C29220 * C1556) * C29209 +
                       (C222 * C1226 + C29220 * C1364) * C155) *
                          C77) *
                         C29289) *
                        C1806 +
                    ((((C222 * C2654 + C29220 * C2772) * C155 +
                       (C222 * C2716 + C29220 * C2937) * C29209) *
                          C77 +
                      ((C222 * C2655 + C29220 * C2773) * C155 +
                       (C222 * C2717 + C29220 * C2938) * C29209) *
                          C78 +
                      ((C222 * C2656 + C29220 * C2774) * C155 +
                       (C222 * C2718 + C29220 * C2939) * C29209) *
                          C79) *
                         C29289 -
                     ((C983 + C977) * C79 + (C984 + C980) * C78 +
                      ((C222 * C710 + C29220 * C972) * C29209 +
                       (C222 * C642 + C29220 * C780) * C155) *
                          C77) *
                         C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C4488 +
                      (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
                      C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
                         C29123 * C1222 -
                     (C7067 * C4438 + C6888 * C4490 + C7068 * C4437 +
                      C6890 * C4489 + (C222 * C1294 + C29220 * C1556) * C4436 +
                      (C222 * C1226 + C29220 * C1364) * C4488) *
                         C29123 * C29289) *
                        C1806 +
                    ((C6890 * C4488 + C7068 * C4436 + C6888 * C4489 +
                      C7067 * C4437 + (C222 * C6758 + C29220 * C6876) * C4490 +
                      (C222 * C6824 + C29220 * C7061) * C4438) *
                         C29123 * C29289 -
                     (C6579 * C4438 + C6448 * C4490 + C5179 * C4437 +
                      C4976 * C4489 + C5178 * C4436 + C4974 * C4488) *
                         C29123 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezx[41] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C222 +
                      (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                       C92 * C225 + C79 * C457) *
                          C29220) *
                         C29209 * C1222 -
                     ((C92 * C1362 + C79 * C1618 + C90 * C1363 + C78 * C1619 +
                       C88 * C1364 + C77 * C1620) *
                          C29220 +
                      (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
                       C88 * C1226 + C77 * C1230) *
                          C222) *
                         C29209 * C29289) *
                        C1806 +
                    (((C88 * C2654 + C77 * C2657 + C90 * C2655 + C78 * C2658 +
                       C92 * C2656 + C79 * C2659) *
                          C222 +
                      (C88 * C2772 + C77 * C2990 + C90 * C2773 + C78 * C2991 +
                       C92 * C2774 + C79 * C2992) *
                          C29220) *
                         C29209 * C29289 -
                     ((C92 * C778 + C79 * C1034 + C90 * C779 + C78 * C1035 +
                       C88 * C780 + C77 * C1036) *
                          C29220 +
                      (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                       C88 * C642 + C77 * C646) *
                          C222) *
                         C29209 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C222 +
                       (C4440 * C223 + C29123 * C455) * C29220) *
                          C4436 +
                      (C5233 + C5249) * C4437 + C6619 * C4438) *
                         C1222 -
                     ((C7128 + C7122) * C4438 + (C7129 + C7125) * C4437 +
                      ((C4440 * C1364 + C29123 * C1620) * C29220 +
                       (C4440 * C1226 + C29123 * C1230) * C222) *
                          C4436) *
                         C29289) *
                        C1806 +
                    (((C7125 + C7129) * C4436 + (C7122 + C7128) * C4437 +
                      ((C4440 * C6758 + C29123 * C6759) * C222 +
                       (C4440 * C6876 + C29123 * C7118) * C29220) *
                          C4438) *
                         C29289 -
                     ((C6624 + C6622) * C4438 + (C5250 + C5236) * C4437 +
                      (C5249 + C5233) * C4436) *
                         C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezy[41] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C222 +
                       (C155 * C223 + C29209 * C498) * C29220) *
                          C77 +
                      (C504 + C516) * C78 + C519 * C79) *
                         C1222 -
                     ((C1685 + C1679) * C79 + (C1686 + C1682) * C78 +
                      ((C155 * C1364 + C29209 * C1674) * C29220 +
                       (C155 * C1226 + C29209 * C1294) * C222) *
                          C77) *
                         C29289) *
                        C1806 +
                    ((((C155 * C2654 + C29209 * C2716) * C222 +
                       (C155 * C2772 + C29209 * C3043) * C29220) *
                          C77 +
                      ((C155 * C2655 + C29209 * C2717) * C222 +
                       (C155 * C2773 + C29209 * C3044) * C29220) *
                          C78 +
                      ((C155 * C2656 + C29209 * C2718) * C222 +
                       (C155 * C2774 + C29209 * C3045) * C29220) *
                          C79) *
                         C29289 -
                     ((C1101 + C1095) * C79 + (C1102 + C1098) * C78 +
                      ((C155 * C780 + C29209 * C1090) * C29220 +
                       (C155 * C642 + C29209 * C710) * C222) *
                          C77) *
                         C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C222 +
                      (C4488 * C223 + C4436 * C498 + C4489 * C780 +
                       C4437 * C1090 + C4490 * C2346 + C4438 * C2557) *
                          C29220) *
                         C29123 * C1222 -
                     ((C4490 * C5539 + C4438 * C5807 + C4489 * C2772 +
                       C4437 * C3043 + C4488 * C1364 + C4436 * C1674) *
                          C29220 +
                      (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 +
                       C4437 * C2716 + C4488 * C1226 + C4436 * C1294) *
                          C222) *
                         C29123 * C29289) *
                        C1806 +
                    (((C4488 * C2654 + C4436 * C2716 + C4489 * C5423 +
                       C4437 * C5485 + C4490 * C6758 + C4438 * C6824) *
                          C222 +
                      (C4488 * C2772 + C4436 * C3043 + C4489 * C5539 +
                       C4437 * C5807 + C4490 * C6876 + C4438 * C7179) *
                          C29220) *
                         C29123 * C29289 -
                     ((C4490 * C4955 + C4438 * C5302 + C4489 * C2346 +
                       C4437 * C2557 + C4488 * C780 + C4436 * C1090) *
                          C29220 +
                      (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                       C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                          C222) *
                         C29123 * C1222) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezz[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
            C584 * C78 + C585 * C79) *
               C1222 -
           (C1755 * C79 + C1756 * C78 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C29209 * C77) *
               C29289) *
              C1806 +
          (((C557 * C2654 + C3100 + C3100 + C29220 * C3096) * C29209 * C77 +
            (C557 * C2655 + C3101 + C3101 + C29220 * C3097) * C29209 * C78 +
            (C557 * C2656 + C3102 + C3102 + C29220 * C3098) * C29209 * C79) *
               C29289 -
           (C1171 * C79 + C1172 * C78 +
            (C557 * C642 + C1163 + C1163 + C29220 * C1154) * C29209 * C77) *
               C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
            C5372 * C4438) *
               C29123 * C1222 -
           (C7241 * C4438 + C7242 * C4437 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C4436) *
               C29123 * C29289) *
              C1806 +
          ((C7242 * C4436 + C7241 * C4437 +
            (C557 * C6758 + C7236 + C7236 + C29220 * C7230) * C4438) *
               C29123 * C29289 -
           (C6708 * C4438 + C5372 * C4437 + C5371 * C4436) * C29123 * C1222) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eexx[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C29220 * C29209 * C3152 -
           (C91 * C1224 + C1237 + C1237 + C79 * C1232 + C89 * C1225 + C1238 +
            C1238 + C78 * C1233 + C87 * C1226 + C1239 + C1239 + C77 * C1234) *
               C29220 * C29209 * C29289) *
              C29179 * C1808 +
          ((C87 * C1225 + C1240 + C1240 + C77 * C1233 + C89 * C1224 + C1241 +
            C1241 + C78 * C1232 + C91 * C1227 + C1242 + C1242 + C79 * C1235) *
               C29220 * C29209 * C29289 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C29220 * C29209 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
            C4848 * C4437 + C4849 * C4438) *
               C3152 -
           (C6773 * C4438 + C6774 * C4437 +
            (C4439 * C1226 + C5432 + C5432 + C29123 * C1234) * C29220 * C4436) *
               C29289) *
              C29179 * C1808 +
          (((C4439 * C1225 + C5433 + C5433 + C29123 * C1233) * C29220 * C4436 +
            (C4439 * C2655 + C5434 + C5434 + C29123 * C2661) * C29220 * C4437 +
            (C4439 * C5424 + C5435 + C5435 + C29123 * C5428) * C29220 * C4438) *
               C29289 -
           (C4851 * C4438 + C4850 * C4437 +
            (C4439 * C94 + C4447 + C4447 + C29123 * C104) * C29220 * C4436) *
               C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexy[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C88 +
                      (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C29220 * C3152 -
                     (C1309 * C79 + C1310 * C92 + C1311 * C78 + C1312 * C90 +
                      (C155 * C1230 + C29209 * C1298) * C77 +
                      (C155 * C1226 + C29209 * C1294) * C88) *
                         C29220 * C29289) *
                        C29179 * C1808 +
                    ((C1312 * C88 + C1311 * C77 + C1310 * C90 + C1309 * C78 +
                      (C155 * C1227 + C29209 * C1295) * C92 +
                      (C155 * C1231 + C29209 * C1299) * C79) *
                         C29220 * C29289 -
                     (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                      C180 * C77 + C179 * C88) *
                         C29220 * C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C4440 +
                      (C4488 * C98 + C4436 * C161 + C4489 * C646 +
                       C4437 * C714 + C4490 * C2255 + C4438 * C2305) *
                          C29123) *
                         C29220 * C3152 -
                     ((C4490 * C5425 + C4438 * C5487 + C4489 * C2657 +
                       C4437 * C2719 + C4488 * C1230 + C4436 * C1298) *
                          C29123 +
                      (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 +
                       C4437 * C2716 + C4488 * C1226 + C4436 * C1294) *
                          C4440) *
                         C29220 * C29289) *
                        C29179 * C1808 +
                    (((C4488 * C1225 + C4436 * C1293 + C4489 * C2655 +
                       C4437 * C2717 + C4490 * C5424 + C4438 * C5486) *
                          C4440 +
                      (C4488 * C1229 + C4436 * C1297 + C4489 * C2658 +
                       C4437 * C2720 + C4490 * C5426 + C4438 * C5488) *
                          C29123) *
                         C29220 * C29289 -
                     ((C4490 * C2256 + C4438 * C2306 + C4489 * C645 +
                       C4437 * C713 + C4488 * C99 + C4436 * C162) *
                          C29123 +
                      (C4490 * C2253 + C4438 * C2303 + C4489 * C641 +
                       C4437 * C709 + C4488 * C94 + C4436 * C157) *
                          C4440) *
                         C29220 * C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C88 +
                      (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C29209 * C3152 -
                     (C1379 * C79 + C1380 * C92 + C1381 * C78 + C1382 * C90 +
                      (C222 * C1230 + C29220 * C1368) * C77 +
                      (C222 * C1226 + C29220 * C1364) * C88) *
                         C29209 * C29289) *
                        C29179 * C1808 +
                    ((C1382 * C88 + C1381 * C77 + C1380 * C90 + C1379 * C78 +
                      (C222 * C1227 + C29220 * C1365) * C92 +
                      (C222 * C1231 + C29220 * C1369) * C79) *
                         C29209 * C29289 -
                     (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                      C247 * C77 + C246 * C88) *
                         C29209 * C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C4440 +
                       (C222 * C98 + C29220 * C228) * C29123) *
                          C4436 +
                      (C4980 + C4981) * C4437 + C6442 * C4438) *
                         C3152 -
                     ((C6891 + C6892) * C4438 + (C6893 + C6894) * C4437 +
                      ((C222 * C1230 + C29220 * C1368) * C29123 +
                       (C222 * C1226 + C29220 * C1364) * C4440) *
                          C4436) *
                         C29289) *
                        C29179 * C1808 +
                    (((C1382 * C4440 + C1381 * C29123) * C4436 +
                      ((C222 * C2655 + C29220 * C2773) * C4440 +
                       (C222 * C2658 + C29220 * C2776) * C29123) *
                          C4437 +
                      ((C222 * C5424 + C29220 * C5540) * C4440 +
                       (C222 * C5426 + C29220 * C5542) * C29123) *
                          C4438) *
                         C29289 -
                     ((C4985 + C4984) * C4438 + (C4969 + C4968) * C4437 +
                      (C247 * C29123 + C246 * C4440) * C4436) *
                         C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C29209) *
                         C29220 * C3152 -
                     ((C92 * C1292 + C79 * C1432 + C90 * C1293 + C78 * C1433 +
                       C88 * C1294 + C77 * C1434) *
                          C29209 +
                      (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
                       C88 * C1226 + C77 * C1230) *
                          C155) *
                         C29220 * C29289) *
                        C29179 * C1808 +
                    (((C88 * C1225 + C77 * C1229 + C90 * C1224 + C78 * C1228 +
                       C92 * C1227 + C79 * C1231) *
                          C155 +
                      (C88 * C1293 + C77 * C1433 + C90 * C1292 + C78 * C1432 +
                       C92 * C1295 + C79 * C1435) *
                          C29209) *
                         C29220 * C29289 -
                     ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                       C88 * C157 + C77 * C290) *
                          C29209 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C155) *
                         C29220 * C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C4488 +
                      (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
                      C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
                         C29220 * C3152 -
                     (C6954 * C4438 + C6955 * C4490 + C6956 * C4437 +
                      C6957 * C4489 + (C4440 * C1294 + C29123 * C1434) * C4436 +
                      (C4440 * C1226 + C29123 * C1230) * C4488) *
                         C29220 * C29289) *
                        C29179 * C1808 +
                    (((C4440 * C1225 + C29123 * C1229) * C4488 +
                      (C4440 * C1293 + C29123 * C1433) * C4436 +
                      (C4440 * C2655 + C29123 * C2658) * C4489 +
                      (C4440 * C2717 + C29123 * C2829) * C4437 +
                      (C4440 * C5424 + C29123 * C5426) * C4490 +
                      (C4440 * C5486 + C29123 * C5594) * C4438) *
                         C29220 * C29289 -
                     (C5061 * C4438 + C5060 * C4490 + C5059 * C4437 +
                      C5058 * C4489 + (C4440 * C157 + C29123 * C290) * C4436 +
                      (C4440 * C94 + C29123 * C99) * C4488) *
                         C29220 * C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C332 * C93 + C339 + C339 + C29209 * C333) * C77 +
                      C356 * C78 + C357 * C79) *
                         C29220 * C3152 -
                     (C1503 * C79 + C1504 * C78 +
                      (C332 * C1226 + C1497 + C1497 + C29209 * C1488) * C77) *
                         C29220 * C29289) *
                        C29179 * C1808 +
                    ((C1504 * C77 + C1503 * C78 +
                      (C332 * C1227 + C1498 + C1498 + C29209 * C1489) * C79) *
                         C29220 * C29289 -
                     (C358 * C79 + C357 * C78 + C356 * C77) * C29220 * C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4605 * C93 + C4609 + C4609 + C4436 * C333 +
                      C4606 * C642 + C4610 + C4610 + C4437 * C904 +
                      C4607 * C2252 + C4611 + C4611 + C4438 * C2431) *
                         C29123 * C29220 * C3152 -
                     (C4607 * C5423 + C5648 + C5648 + C4438 * C5645 +
                      C4606 * C2654 + C5649 + C5649 + C4437 * C2881 +
                      C4605 * C1226 + C5650 + C5650 + C4436 * C1488) *
                         C29123 * C29220 * C29289) *
                        C29179 * C1808 +
                    ((C4605 * C1225 + C5651 + C5651 + C4436 * C1487 +
                      C4606 * C2655 + C5652 + C5652 + C4437 * C2882 +
                      C4607 * C5424 + C5653 + C5653 + C4438 * C5646) *
                         C29123 * C29220 * C29289 -
                     (C4607 * C2253 + C4612 + C4612 + C4438 * C2432 +
                      C4606 * C641 + C4613 + C4613 + C4437 * C903 +
                      C4605 * C94 + C4614 + C4614 + C4436 * C334) *
                         C29123 * C29220 * C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C29220 * C223) * C155 +
             (C222 * C156 + C29220 * C396) * C29209) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C3152 -
           ((C1567 + C1561) * C79 + (C1568 + C1564) * C78 +
            ((C222 * C1294 + C29220 * C1556) * C29209 +
             (C222 * C1226 + C29220 * C1364) * C155) *
                C77) *
               C29289) *
              C29179 * C1808 +
          (((C1564 + C1568) * C77 + (C1561 + C1567) * C78 +
            ((C222 * C1227 + C29220 * C1365) * C155 +
             (C222 * C1295 + C29220 * C1557) * C29209) *
                C79) *
               C29289 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C29220 * C223) * C4488 +
            (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
            C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
               C29123 * C3152 -
           (C7067 * C4438 + C6888 * C4490 + C7068 * C4437 + C6890 * C4489 +
            (C222 * C1294 + C29220 * C1556) * C4436 +
            (C222 * C1226 + C29220 * C1364) * C4488) *
               C29123 * C29289) *
              C29179 * C1808 +
          ((C1382 * C4488 + C1566 * C4436 +
            (C222 * C2655 + C29220 * C2773) * C4489 +
            (C222 * C2717 + C29220 * C2938) * C4437 +
            (C222 * C5424 + C29220 * C5540) * C4490 +
            (C222 * C5486 + C29220 * C5704) * C4438) *
               C29123 * C29289 -
           (C5180 * C4438 + C4978 * C4490 + C982 * C4437 + C798 * C4489 +
            C411 * C4436 + C246 * C4488) *
               C29123 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezx[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C222 +
                      (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                       C92 * C225 + C79 * C457) *
                          C29220) *
                         C29209 * C3152 -
                     ((C92 * C1362 + C79 * C1618 + C90 * C1363 + C78 * C1619 +
                       C88 * C1364 + C77 * C1620) *
                          C29220 +
                      (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
                       C88 * C1226 + C77 * C1230) *
                          C222) *
                         C29209 * C29289) *
                        C29179 * C1808 +
                    (((C88 * C1225 + C77 * C1229 + C90 * C1224 + C78 * C1228 +
                       C92 * C1227 + C79 * C1231) *
                          C222 +
                      (C88 * C1363 + C77 * C1619 + C90 * C1362 + C78 * C1618 +
                       C92 * C1365 + C79 * C1621) *
                          C29220) *
                         C29209 * C29289 -
                     ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                       C88 * C224 + C77 * C456) *
                          C29220 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C222) *
                         C29209 * C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C222 +
                       (C4440 * C223 + C29123 * C455) * C29220) *
                          C4436 +
                      (C5233 + C5249) * C4437 + C6619 * C4438) *
                         C3152 -
                     ((C7128 + C7122) * C4438 + (C7129 + C7125) * C4437 +
                      ((C4440 * C1364 + C29123 * C1620) * C29220 +
                       (C4440 * C1226 + C29123 * C1230) * C222) *
                          C4436) *
                         C29289) *
                        C29179 * C1808 +
                    ((((C4440 * C1225 + C29123 * C1229) * C222 +
                       (C4440 * C1363 + C29123 * C1619) * C29220) *
                          C4436 +
                      ((C4440 * C2655 + C29123 * C2658) * C222 +
                       (C4440 * C2773 + C29123 * C2991) * C29220) *
                          C4437 +
                      ((C4440 * C5424 + C29123 * C5426) * C222 +
                       (C4440 * C5540 + C29123 * C5756) * C29220) *
                          C4438) *
                         C29289 -
                     ((C5252 + C5242) * C4438 + (C5251 + C5239) * C4437 +
                      ((C4440 * C224 + C29123 * C456) * C29220 +
                       (C4440 * C94 + C29123 * C99) * C222) *
                          C4436) *
                         C3152) *
                        C29179 * C29285)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C29209 * C156) * C222 +
             (C155 * C223 + C29209 * C498) * C29220) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C3152 -
           ((C1685 + C1679) * C79 + (C1686 + C1682) * C78 +
            ((C155 * C1364 + C29209 * C1674) * C29220 +
             (C155 * C1226 + C29209 * C1294) * C222) *
                C77) *
               C29289) *
              C29179 * C1808 +
          (((C1682 + C1686) * C77 + (C1679 + C1685) * C78 +
            ((C155 * C1227 + C29209 * C1295) * C222 +
             (C155 * C1365 + C29209 * C1675) * C29220) *
                C79) *
               C29289 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
             C4490 * C2252 + C4438 * C2302) *
                C222 +
            (C4488 * C223 + C4436 * C498 + C4489 * C780 + C4437 * C1090 +
             C4490 * C2346 + C4438 * C2557) *
                C29220) *
               C29123 * C3152 -
           ((C4490 * C5539 + C4438 * C5807 + C4489 * C2772 + C4437 * C3043 +
             C4488 * C1364 + C4436 * C1674) *
                C29220 +
            (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 + C4437 * C2716 +
             C4488 * C1226 + C4436 * C1294) *
                C222) *
               C29123 * C29289) *
              C29179 * C1808 +
          (((C4488 * C1225 + C4436 * C1293 + C4489 * C2655 + C4437 * C2717 +
             C4490 * C5424 + C4438 * C5486) *
                C222 +
            (C4488 * C1363 + C4436 * C1673 + C4489 * C2773 + C4437 * C3044 +
             C4490 * C5540 + C4438 * C5808) *
                C29220) *
               C29123 * C29289 -
           ((C4490 * C2347 + C4438 * C2558 + C4489 * C779 + C4437 * C1089 +
             C4488 * C224 + C4436 * C499) *
                C29220 +
            (C4490 * C2253 + C4438 * C2303 + C4489 * C641 + C4437 * C709 +
             C4488 * C94 + C4436 * C157) *
                C222) *
               C29123 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eezz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
            C584 * C78 + C585 * C79) *
               C3152 -
           (C1755 * C79 + C1756 * C78 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C29209 * C77) *
               C29289) *
              C29179 * C1808 +
          ((C1756 * C77 + C1755 * C78 +
            (C557 * C1227 + C1748 + C1748 + C29220 * C1739) * C29209 * C79) *
               C29289 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
            C5372 * C4438) *
               C29123 * C3152 -
           (C7241 * C4438 + C7242 * C4437 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C4436) *
               C29123 * C29289) *
              C29179 * C1808 +
          ((C1754 * C4436 +
            (C557 * C2655 + C3101 + C3101 + C29220 * C3097) * C4437 +
            (C557 * C5424 + C5863 + C5863 + C29220 * C5860) * C4438) *
               C29123 * C29289 -
           (C5373 * C4438 + C1170 * C4437 + C581 * C4436) * C29123 * C3152) *
              C29179 * C29285)) /
            (p * q * std::sqrt(p + q));
    d2eexx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C29220 * C29209 * C3152 -
           (C91 * C1224 + C1237 + C1237 + C79 * C1232 + C89 * C1225 + C1238 +
            C1238 + C78 * C1233 + C87 * C1226 + C1239 + C1239 + C77 * C1234) *
               C29220 * C29209 * C29289) *
              C636 +
          ((C87 * C2654 + C2664 + C2664 + C77 * C2660 + C89 * C2655 + C2665 +
            C2665 + C78 * C2661 + C91 * C2656 + C2666 + C2666 + C79 * C2662) *
               C29220 * C29209 * C29289 -
           (C91 * C640 + C653 + C653 + C79 * C648 + C89 * C641 + C654 + C654 +
            C78 * C649 + C87 * C642 + C655 + C655 + C77 * C650) *
               C29220 * C29209 * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
            C4848 * C4437 + C4849 * C4438) *
               C3152 -
           (C6773 * C4438 + C6774 * C4437 +
            (C4439 * C1226 + C5432 + C5432 + C29123 * C1234) * C29220 * C4436) *
               C29289) *
              C636 +
          ((C6774 * C4436 + C6773 * C4437 +
            (C4439 * C6758 + C6766 + C6766 + C29123 * C6760) * C29220 * C4438) *
               C29289 -
           (C6361 * C4438 + C4849 * C4437 + C4848 * C4436) * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eexy[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C88 +
                      (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C29220 * C3152 -
                     (C1309 * C79 + C1310 * C92 + C1311 * C78 + C1312 * C90 +
                      (C155 * C1230 + C29209 * C1298) * C77 +
                      (C155 * C1226 + C29209 * C1294) * C88) *
                         C29220 * C29289) *
                        C636 +
                    (((C155 * C2654 + C29209 * C2716) * C88 +
                      (C155 * C2657 + C29209 * C2719) * C77 +
                      (C155 * C2655 + C29209 * C2717) * C90 +
                      (C155 * C2658 + C29209 * C2720) * C78 +
                      (C155 * C2656 + C29209 * C2718) * C92 +
                      (C155 * C2659 + C29209 * C2721) * C79) *
                         C29220 * C29289 -
                     (C725 * C79 + C726 * C92 + C727 * C78 + C728 * C90 +
                      (C155 * C646 + C29209 * C714) * C77 +
                      (C155 * C642 + C29209 * C710) * C88) *
                         C29220 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C4440 +
                      (C4488 * C98 + C4436 * C161 + C4489 * C646 +
                       C4437 * C714 + C4490 * C2255 + C4438 * C2305) *
                          C29123) *
                         C29220 * C3152 -
                     ((C4490 * C5425 + C4438 * C5487 + C4489 * C2657 +
                       C4437 * C2719 + C4488 * C1230 + C4436 * C1298) *
                          C29123 +
                      (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 +
                       C4437 * C2716 + C4488 * C1226 + C4436 * C1294) *
                          C4440) *
                         C29220 * C29289) *
                        C636 +
                    (((C4488 * C2654 + C4436 * C2716 + C4489 * C5423 +
                       C4437 * C5485 + C4490 * C6758 + C4438 * C6824) *
                          C4440 +
                      (C4488 * C2657 + C4436 * C2719 + C4489 * C5425 +
                       C4437 * C5487 + C4490 * C6759 + C4438 * C6825) *
                          C29123) *
                         C29220 * C29289 -
                     ((C4490 * C4821 + C4438 * C4903 + C4489 * C2255 +
                       C4437 * C2305 + C4488 * C646 + C4436 * C714) *
                          C29123 +
                      (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                       C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                          C4440) *
                         C29220 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eexz[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C88 +
                      (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C29209 * C3152 -
                     (C1379 * C79 + C1380 * C92 + C1381 * C78 + C1382 * C90 +
                      (C222 * C1230 + C29220 * C1368) * C77 +
                      (C222 * C1226 + C29220 * C1364) * C88) *
                         C29209 * C29289) *
                        C636 +
                    (((C222 * C2654 + C29220 * C2772) * C88 +
                      (C222 * C2657 + C29220 * C2775) * C77 +
                      (C222 * C2655 + C29220 * C2773) * C90 +
                      (C222 * C2658 + C29220 * C2776) * C78 +
                      (C222 * C2656 + C29220 * C2774) * C92 +
                      (C222 * C2659 + C29220 * C2777) * C79) *
                         C29209 * C29289 -
                     (C795 * C79 + C796 * C92 + C797 * C78 + C798 * C90 +
                      (C222 * C646 + C29220 * C784) * C77 +
                      (C222 * C642 + C29220 * C780) * C88) *
                         C29209 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C4440 +
                       (C222 * C98 + C29220 * C228) * C29123) *
                          C4436 +
                      (C4980 + C4981) * C4437 + C6442 * C4438) *
                         C3152 -
                     ((C6891 + C6892) * C4438 + (C6893 + C6894) * C4437 +
                      ((C222 * C1230 + C29220 * C1368) * C29123 +
                       (C222 * C1226 + C29220 * C1364) * C4440) *
                          C4436) *
                         C29289) *
                        C636 +
                    (((C6894 + C6893) * C4436 + (C6892 + C6891) * C4437 +
                      ((C222 * C6758 + C29220 * C6876) * C4440 +
                       (C222 * C6759 + C29220 * C6877) * C29123) *
                          C4438) *
                         C29289 -
                     ((C6449 + C6450) * C4438 + (C4983 + C4982) * C4437 +
                      (C4981 + C4980) * C4436) *
                         C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C29209) *
                         C29220 * C3152 -
                     ((C92 * C1292 + C79 * C1432 + C90 * C1293 + C78 * C1433 +
                       C88 * C1294 + C77 * C1434) *
                          C29209 +
                      (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
                       C88 * C1226 + C77 * C1230) *
                          C155) *
                         C29220 * C29289) *
                        C636 +
                    (((C88 * C2654 + C77 * C2657 + C90 * C2655 + C78 * C2658 +
                       C92 * C2656 + C79 * C2659) *
                          C155 +
                      (C88 * C2716 + C77 * C2828 + C90 * C2717 + C78 * C2829 +
                       C92 * C2718 + C79 * C2830) *
                          C29209) *
                         C29220 * C29289 -
                     ((C92 * C708 + C79 * C848 + C90 * C709 + C78 * C849 +
                       C88 * C710 + C77 * C850) *
                          C29209 +
                      (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                       C88 * C642 + C77 * C646) *
                          C155) *
                         C29220 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C4488 +
                      (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
                      C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
                         C29220 * C3152 -
                     (C6954 * C4438 + C6955 * C4490 + C6956 * C4437 +
                      C6957 * C4489 + (C4440 * C1294 + C29123 * C1434) * C4436 +
                      (C4440 * C1226 + C29123 * C1230) * C4488) *
                         C29220 * C29289) *
                        C636 +
                    ((C6957 * C4488 + C6956 * C4436 + C6955 * C4489 +
                      C6954 * C4437 + (C4440 * C6758 + C29123 * C6759) * C4490 +
                      (C4440 * C6824 + C29123 * C6944) * C4438) *
                         C29220 * C29289 -
                     (C6494 * C4438 + C6495 * C4490 + C5057 * C4437 +
                      C5056 * C4489 + C5055 * C4436 + C5054 * C4488) *
                         C29220 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C332 * C93 + C339 + C339 + C29209 * C333) * C77 +
                      C356 * C78 + C357 * C79) *
                         C29220 * C3152 -
                     (C1503 * C79 + C1504 * C78 +
                      (C332 * C1226 + C1497 + C1497 + C29209 * C1488) * C77) *
                         C29220 * C29289) *
                        C636 +
                    (((C332 * C2654 + C2885 + C2885 + C29209 * C2881) * C77 +
                      (C332 * C2655 + C2886 + C2886 + C29209 * C2882) * C78 +
                      (C332 * C2656 + C2887 + C2887 + C29209 * C2883) * C79) *
                         C29220 * C29289 -
                     (C919 * C79 + C920 * C78 +
                      (C332 * C642 + C913 + C913 + C29209 * C904) * C77) *
                         C29220 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4605 * C93 + C4609 + C4609 + C4436 * C333 +
                      C4606 * C642 + C4610 + C4610 + C4437 * C904 +
                      C4607 * C2252 + C4611 + C4611 + C4438 * C2431) *
                         C29123 * C29220 * C3152 -
                     (C4607 * C5423 + C5648 + C5648 + C4438 * C5645 +
                      C4606 * C2654 + C5649 + C5649 + C4437 * C2881 +
                      C4605 * C1226 + C5650 + C5650 + C4436 * C1488) *
                         C29123 * C29220 * C29289) *
                        C636 +
                    ((C4605 * C2654 + C7009 + C7009 + C4436 * C2881 +
                      C4606 * C5423 + C7010 + C7010 + C4437 * C5645 +
                      C4607 * C6758 + C7011 + C7011 + C4438 * C7007) *
                         C29123 * C29220 * C29289 -
                     (C4607 * C4819 + C5114 + C5114 + C4438 * C5111 +
                      C4606 * C2252 + C5115 + C5115 + C4437 * C2431 +
                      C4605 * C642 + C5116 + C5116 + C4436 * C904) *
                         C29123 * C29220 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C29220 * C223) * C155 +
                       (C222 * C156 + C29220 * C396) * C29209) *
                          C77 +
                      (C402 + C414) * C78 + C417 * C79) *
                         C3152 -
                     ((C1567 + C1561) * C79 + (C1568 + C1564) * C78 +
                      ((C222 * C1294 + C29220 * C1556) * C29209 +
                       (C222 * C1226 + C29220 * C1364) * C155) *
                          C77) *
                         C29289) *
                        C636 +
                    ((((C222 * C2654 + C29220 * C2772) * C155 +
                       (C222 * C2716 + C29220 * C2937) * C29209) *
                          C77 +
                      ((C222 * C2655 + C29220 * C2773) * C155 +
                       (C222 * C2717 + C29220 * C2938) * C29209) *
                          C78 +
                      ((C222 * C2656 + C29220 * C2774) * C155 +
                       (C222 * C2718 + C29220 * C2939) * C29209) *
                          C79) *
                         C29289 -
                     ((C983 + C977) * C79 + (C984 + C980) * C78 +
                      ((C222 * C710 + C29220 * C972) * C29209 +
                       (C222 * C642 + C29220 * C780) * C155) *
                          C77) *
                         C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C4488 +
                      (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
                      C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
                         C29123 * C3152 -
                     (C7067 * C4438 + C6888 * C4490 + C7068 * C4437 +
                      C6890 * C4489 + (C222 * C1294 + C29220 * C1556) * C4436 +
                      (C222 * C1226 + C29220 * C1364) * C4488) *
                         C29123 * C29289) *
                        C636 +
                    ((C6890 * C4488 + C7068 * C4436 + C6888 * C4489 +
                      C7067 * C4437 + (C222 * C6758 + C29220 * C6876) * C4490 +
                      (C222 * C6824 + C29220 * C7061) * C4438) *
                         C29123 * C29289 -
                     (C6579 * C4438 + C6448 * C4490 + C5179 * C4437 +
                      C4976 * C4489 + C5178 * C4436 + C4974 * C4488) *
                         C29123 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezx[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C222 +
                      (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                       C92 * C225 + C79 * C457) *
                          C29220) *
                         C29209 * C3152 -
                     ((C92 * C1362 + C79 * C1618 + C90 * C1363 + C78 * C1619 +
                       C88 * C1364 + C77 * C1620) *
                          C29220 +
                      (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
                       C88 * C1226 + C77 * C1230) *
                          C222) *
                         C29209 * C29289) *
                        C636 +
                    (((C88 * C2654 + C77 * C2657 + C90 * C2655 + C78 * C2658 +
                       C92 * C2656 + C79 * C2659) *
                          C222 +
                      (C88 * C2772 + C77 * C2990 + C90 * C2773 + C78 * C2991 +
                       C92 * C2774 + C79 * C2992) *
                          C29220) *
                         C29209 * C29289 -
                     ((C92 * C778 + C79 * C1034 + C90 * C779 + C78 * C1035 +
                       C88 * C780 + C77 * C1036) *
                          C29220 +
                      (C92 * C640 + C79 * C644 + C90 * C641 + C78 * C645 +
                       C88 * C642 + C77 * C646) *
                          C222) *
                         C29209 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C4440 * C93 + C29123 * C98) * C222 +
                       (C4440 * C223 + C29123 * C455) * C29220) *
                          C4436 +
                      (C5233 + C5249) * C4437 + C6619 * C4438) *
                         C3152 -
                     ((C7128 + C7122) * C4438 + (C7129 + C7125) * C4437 +
                      ((C4440 * C1364 + C29123 * C1620) * C29220 +
                       (C4440 * C1226 + C29123 * C1230) * C222) *
                          C4436) *
                         C29289) *
                        C636 +
                    (((C7125 + C7129) * C4436 + (C7122 + C7128) * C4437 +
                      ((C4440 * C6758 + C29123 * C6759) * C222 +
                       (C4440 * C6876 + C29123 * C7118) * C29220) *
                          C4438) *
                         C29289 -
                     ((C6624 + C6622) * C4438 + (C5250 + C5236) * C4437 +
                      (C5249 + C5233) * C4436) *
                         C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezy[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C29209 * C156) * C222 +
                       (C155 * C223 + C29209 * C498) * C29220) *
                          C77 +
                      (C504 + C516) * C78 + C519 * C79) *
                         C3152 -
                     ((C1685 + C1679) * C79 + (C1686 + C1682) * C78 +
                      ((C155 * C1364 + C29209 * C1674) * C29220 +
                       (C155 * C1226 + C29209 * C1294) * C222) *
                          C77) *
                         C29289) *
                        C636 +
                    ((((C155 * C2654 + C29209 * C2716) * C222 +
                       (C155 * C2772 + C29209 * C3043) * C29220) *
                          C77 +
                      ((C155 * C2655 + C29209 * C2717) * C222 +
                       (C155 * C2773 + C29209 * C3044) * C29220) *
                          C78 +
                      ((C155 * C2656 + C29209 * C2718) * C222 +
                       (C155 * C2774 + C29209 * C3045) * C29220) *
                          C79) *
                         C29289 -
                     ((C1101 + C1095) * C79 + (C1102 + C1098) * C78 +
                      ((C155 * C780 + C29209 * C1090) * C29220 +
                       (C155 * C642 + C29209 * C710) * C222) *
                          C77) *
                         C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4488 * C93 + C4436 * C156 + C4489 * C642 +
                       C4437 * C710 + C4490 * C2252 + C4438 * C2302) *
                          C222 +
                      (C4488 * C223 + C4436 * C498 + C4489 * C780 +
                       C4437 * C1090 + C4490 * C2346 + C4438 * C2557) *
                          C29220) *
                         C29123 * C3152 -
                     ((C4490 * C5539 + C4438 * C5807 + C4489 * C2772 +
                       C4437 * C3043 + C4488 * C1364 + C4436 * C1674) *
                          C29220 +
                      (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 +
                       C4437 * C2716 + C4488 * C1226 + C4436 * C1294) *
                          C222) *
                         C29123 * C29289) *
                        C636 +
                    (((C4488 * C2654 + C4436 * C2716 + C4489 * C5423 +
                       C4437 * C5485 + C4490 * C6758 + C4438 * C6824) *
                          C222 +
                      (C4488 * C2772 + C4436 * C3043 + C4489 * C5539 +
                       C4437 * C5807 + C4490 * C6876 + C4438 * C7179) *
                          C29220) *
                         C29123 * C29289 -
                     ((C4490 * C4955 + C4438 * C5302 + C4489 * C2346 +
                       C4437 * C2557 + C4488 * C780 + C4436 * C1090) *
                          C29220 +
                      (C4490 * C4819 + C4438 * C4901 + C4489 * C2252 +
                       C4437 * C2302 + C4488 * C642 + C4436 * C710) *
                          C222) *
                         C29123 * C3152) *
                        C29287) *
                   C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezz[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
            C584 * C78 + C585 * C79) *
               C3152 -
           (C1755 * C79 + C1756 * C78 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C29209 * C77) *
               C29289) *
              C636 +
          (((C557 * C2654 + C3100 + C3100 + C29220 * C3096) * C29209 * C77 +
            (C557 * C2655 + C3101 + C3101 + C29220 * C3097) * C29209 * C78 +
            (C557 * C2656 + C3102 + C3102 + C29220 * C3098) * C29209 * C79) *
               C29289 -
           (C1171 * C79 + C1172 * C78 +
            (C557 * C642 + C1163 + C1163 + C29220 * C1154) * C29209 * C77) *
               C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
            C5372 * C4438) *
               C29123 * C3152 -
           (C7241 * C4438 + C7242 * C4437 +
            (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C4436) *
               C29123 * C29289) *
              C636 +
          ((C7242 * C4436 + C7241 * C4437 +
            (C557 * C6758 + C7236 + C7236 + C29220 * C7230) * C4438) *
               C29123 * C29289 -
           (C6708 * C4438 + C5372 * C4437 + C5371 * C4436) * C29123 * C3152) *
              C29287) *
         C29145) /
            (p * q * std::sqrt(p + q));
    d2eexx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C29220 * C29209 * C4042 -
          (C91 * C1224 + C1237 + C1237 + C79 * C1232 + C89 * C1225 + C1238 +
           C1238 + C78 * C1233 + C87 * C1226 + C1239 + C1239 + C77 * C1234) *
              C29220 * C29209 * C4043 +
          (C87 * C4045 + C4055 + C4055 + C77 * C4051 + C89 * C4046 + C4056 +
           C4056 + C78 * C4052 + C91 * C4047 + C4057 + C4057 + C79 * C4053) *
              C29220 * C29209 * C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4439 * C93 + C4442 + C4442 + C29123 * C103) * C29220 * C4436 +
           C4848 * C4437 + C4849 * C4438) *
              C4042 -
          (C6773 * C4438 + C6774 * C4437 +
           (C4439 * C1226 + C5432 + C5432 + C29123 * C1234) * C29220 * C4436) *
              C4043 +
          ((C4439 * C4045 + C8187 + C8187 + C29123 * C4051) * C29220 * C4436 +
           (C4439 * C8180 + C8188 + C8188 + C29123 * C8184) * C29220 * C4437 +
           (C4439 * C8181 + C8189 + C8189 + C29123 * C8185) * C29220 * C4438) *
              C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q));
    d2eexy[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C155 * C93 + C29209 * C156) * C88 +
                     (C155 * C98 + C29209 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C29220 * C4042 -
                    (C1309 * C79 + C1310 * C92 + C1311 * C78 + C1312 * C90 +
                     (C155 * C1230 + C29209 * C1298) * C77 +
                     (C155 * C1226 + C29209 * C1294) * C88) *
                        C29220 * C4043 +
                    ((C155 * C4045 + C29209 * C4095) * C88 +
                     (C155 * C4048 + C29209 * C4098) * C77 +
                     (C155 * C4046 + C29209 * C4096) * C90 +
                     (C155 * C4049 + C29209 * C4099) * C78 +
                     (C155 * C4047 + C29209 * C4097) * C92 +
                     (C155 * C4050 + C29209 * C4100) * C79) *
                        C29220 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
                      C4490 * C2252 + C4438 * C2302) *
                         C4440 +
                     (C4488 * C98 + C4436 * C161 + C4489 * C646 + C4437 * C714 +
                      C4490 * C2255 + C4438 * C2305) *
                         C29123) *
                        C29220 * C4042 -
                    ((C4490 * C5425 + C4438 * C5487 + C4489 * C2657 +
                      C4437 * C2719 + C4488 * C1230 + C4436 * C1298) *
                         C29123 +
                     (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 +
                      C4437 * C2716 + C4488 * C1226 + C4436 * C1294) *
                         C4440) *
                        C29220 * C4043 +
                    ((C4488 * C4045 + C4436 * C4095 + C4489 * C8180 +
                      C4437 * C8227 + C4490 * C8181 + C4438 * C8228) *
                         C4440 +
                     (C4488 * C4048 + C4436 * C4098 + C4489 * C8182 +
                      C4437 * C8229 + C4490 * C8183 + C4438 * C8230) *
                         C29123) *
                        C29220 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q));
    d2eexz[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C222 * C93 + C29220 * C223) * C88 +
                     (C222 * C98 + C29220 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C29209 * C4042 -
                    (C1379 * C79 + C1380 * C92 + C1381 * C78 + C1382 * C90 +
                     (C222 * C1230 + C29220 * C1368) * C77 +
                     (C222 * C1226 + C29220 * C1364) * C88) *
                        C29209 * C4043 +
                    ((C222 * C4045 + C29220 * C4139) * C88 +
                     (C222 * C4048 + C29220 * C4142) * C77 +
                     (C222 * C4046 + C29220 * C4140) * C90 +
                     (C222 * C4049 + C29220 * C4143) * C78 +
                     (C222 * C4047 + C29220 * C4141) * C92 +
                     (C222 * C4050 + C29220 * C4144) * C79) *
                        C29209 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C4440 +
                      (C222 * C98 + C29220 * C228) * C29123) *
                         C4436 +
                     (C4980 + C4981) * C4437 + C6442 * C4438) *
                        C4042 -
                    ((C6891 + C6892) * C4438 + (C6893 + C6894) * C4437 +
                     ((C222 * C1230 + C29220 * C1368) * C29123 +
                      (C222 * C1226 + C29220 * C1364) * C4440) *
                         C4436) *
                        C4043 +
                    (((C222 * C4045 + C29220 * C4139) * C4440 +
                      (C222 * C4048 + C29220 * C4142) * C29123) *
                         C4436 +
                     ((C222 * C8180 + C29220 * C8269) * C4440 +
                      (C222 * C8182 + C29220 * C8271) * C29123) *
                         C4437 +
                     ((C222 * C8181 + C29220 * C8270) * C4440 +
                      (C222 * C8183 + C29220 * C8272) * C29123) *
                         C4438) *
                        C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C29209) *
                        C29220 * C4042 -
                    ((C92 * C1292 + C79 * C1432 + C90 * C1293 + C78 * C1433 +
                      C88 * C1294 + C77 * C1434) *
                         C29209 +
                     (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
                      C88 * C1226 + C77 * C1230) *
                         C155) *
                        C29220 * C4043 +
                    ((C88 * C4045 + C77 * C4048 + C90 * C4046 + C78 * C4049 +
                      C92 * C4047 + C79 * C4050) *
                         C155 +
                     (C88 * C4095 + C77 * C4183 + C90 * C4096 + C78 * C4184 +
                      C92 * C4097 + C79 * C4185) *
                         C29209) *
                        C29220 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4440 * C93 + C29123 * C98) * C4488 +
                     (C4440 * C156 + C29123 * C289) * C4436 + C5054 * C4489 +
                     C5055 * C4437 + C5056 * C4490 + C5057 * C4438) *
                        C29220 * C4042 -
                    (C6954 * C4438 + C6955 * C4490 + C6956 * C4437 +
                     C6957 * C4489 + (C4440 * C1294 + C29123 * C1434) * C4436 +
                     (C4440 * C1226 + C29123 * C1230) * C4488) *
                        C29220 * C4043 +
                    ((C4440 * C4045 + C29123 * C4048) * C4488 +
                     (C4440 * C4095 + C29123 * C4183) * C4436 +
                     (C4440 * C8180 + C29123 * C8182) * C4489 +
                     (C4440 * C8227 + C29123 * C8311) * C4437 +
                     (C4440 * C8181 + C29123 * C8183) * C4490 +
                     (C4440 * C8228 + C29123 * C8312) * C4438) *
                        C29220 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C332 * C93 + C339 + C339 + C29209 * C333) * C77 +
                     C356 * C78 + C357 * C79) *
                        C29220 * C4042 -
                    (C1503 * C79 + C1504 * C78 +
                     (C332 * C1226 + C1497 + C1497 + C29209 * C1488) * C77) *
                        C29220 * C4043 +
                    ((C332 * C4045 + C4228 + C4228 + C29209 * C4224) * C77 +
                     (C332 * C4046 + C4229 + C4229 + C29209 * C4225) * C78 +
                     (C332 * C4047 + C4230 + C4230 + C29209 * C4226) * C79) *
                        C29220 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C4605 * C93 + C4609 + C4609 + C4436 * C333 + C4606 * C642 +
                     C4610 + C4610 + C4437 * C904 + C4607 * C2252 + C4611 +
                     C4611 + C4438 * C2431) *
                        C29123 * C29220 * C4042 -
                    (C4607 * C5423 + C5648 + C5648 + C4438 * C5645 +
                     C4606 * C2654 + C5649 + C5649 + C4437 * C2881 +
                     C4605 * C1226 + C5650 + C5650 + C4436 * C1488) *
                        C29123 * C29220 * C4043 +
                    (C4605 * C4045 + C8354 + C8354 + C4436 * C4224 +
                     C4606 * C8180 + C8355 + C8355 + C4437 * C8351 +
                     C4607 * C8181 + C8356 + C8356 + C4438 * C8352) *
                        C29123 * C29220 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C29220 * C223) * C155 +
                      (C222 * C156 + C29220 * C396) * C29209) *
                         C77 +
                     (C402 + C414) * C78 + C417 * C79) *
                        C4042 -
                    ((C1567 + C1561) * C79 + (C1568 + C1564) * C78 +
                     ((C222 * C1294 + C29220 * C1556) * C29209 +
                      (C222 * C1226 + C29220 * C1364) * C155) *
                         C77) *
                        C4043 +
                    (((C222 * C4045 + C29220 * C4139) * C155 +
                      (C222 * C4095 + C29220 * C4268) * C29209) *
                         C77 +
                     ((C222 * C4046 + C29220 * C4140) * C155 +
                      (C222 * C4096 + C29220 * C4269) * C29209) *
                         C78 +
                     ((C222 * C4047 + C29220 * C4141) * C155 +
                      (C222 * C4097 + C29220 * C4270) * C29209) *
                         C79) *
                        C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C222 * C93 + C29220 * C223) * C4488 +
                     (C222 * C156 + C29220 * C396) * C4436 + C4974 * C4489 +
                     C5178 * C4437 + C4976 * C4490 + C5179 * C4438) *
                        C29123 * C4042 -
                    (C7067 * C4438 + C6888 * C4490 + C7068 * C4437 +
                     C6890 * C4489 + (C222 * C1294 + C29220 * C1556) * C4436 +
                     (C222 * C1226 + C29220 * C1364) * C4488) *
                        C29123 * C4043 +
                    ((C222 * C4045 + C29220 * C4139) * C4488 +
                     (C222 * C4095 + C29220 * C4268) * C4436 +
                     (C222 * C8180 + C29220 * C8269) * C4489 +
                     (C222 * C8227 + C29220 * C8394) * C4437 +
                     (C222 * C8181 + C29220 * C8270) * C4490 +
                     (C222 * C8228 + C29220 * C8395) * C4438) *
                        C29123 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezx[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C29220) *
                        C29209 * C4042 -
                    ((C92 * C1362 + C79 * C1618 + C90 * C1363 + C78 * C1619 +
                      C88 * C1364 + C77 * C1620) *
                         C29220 +
                     (C92 * C1224 + C79 * C1228 + C90 * C1225 + C78 * C1229 +
                      C88 * C1226 + C77 * C1230) *
                         C222) *
                        C29209 * C4043 +
                    ((C88 * C4045 + C77 * C4048 + C90 * C4046 + C78 * C4049 +
                      C92 * C4047 + C79 * C4050) *
                         C222 +
                     (C88 * C4139 + C77 * C4309 + C90 * C4140 + C78 * C4310 +
                      C92 * C4141 + C79 * C4311) *
                         C29220) *
                        C29209 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4440 * C93 + C29123 * C98) * C222 +
                      (C4440 * C223 + C29123 * C455) * C29220) *
                         C4436 +
                     (C5233 + C5249) * C4437 + C6619 * C4438) *
                        C4042 -
                    ((C7128 + C7122) * C4438 + (C7129 + C7125) * C4437 +
                     ((C4440 * C1364 + C29123 * C1620) * C29220 +
                      (C4440 * C1226 + C29123 * C1230) * C222) *
                         C4436) *
                        C4043 +
                    (((C4440 * C4045 + C29123 * C4048) * C222 +
                      (C4440 * C4139 + C29123 * C4309) * C29220) *
                         C4436 +
                     ((C4440 * C8180 + C29123 * C8182) * C222 +
                      (C4440 * C8269 + C29123 * C8434) * C29220) *
                         C4437 +
                     ((C4440 * C8181 + C29123 * C8183) * C222 +
                      (C4440 * C8270 + C29123 * C8435) * C29220) *
                         C4438) *
                        C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezy[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C29209 * C156) * C222 +
                      (C155 * C223 + C29209 * C498) * C29220) *
                         C77 +
                     (C504 + C516) * C78 + C519 * C79) *
                        C4042 -
                    ((C1685 + C1679) * C79 + (C1686 + C1682) * C78 +
                     ((C155 * C1364 + C29209 * C1674) * C29220 +
                      (C155 * C1226 + C29209 * C1294) * C222) *
                         C77) *
                        C4043 +
                    (((C155 * C4045 + C29209 * C4095) * C222 +
                      (C155 * C4139 + C29209 * C4350) * C29220) *
                         C77 +
                     ((C155 * C4046 + C29209 * C4096) * C222 +
                      (C155 * C4140 + C29209 * C4351) * C29220) *
                         C78 +
                     ((C155 * C4047 + C29209 * C4097) * C222 +
                      (C155 * C4141 + C29209 * C4352) * C29220) *
                         C79) *
                        C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4488 * C93 + C4436 * C156 + C4489 * C642 + C4437 * C710 +
                      C4490 * C2252 + C4438 * C2302) *
                         C222 +
                     (C4488 * C223 + C4436 * C498 + C4489 * C780 +
                      C4437 * C1090 + C4490 * C2346 + C4438 * C2557) *
                         C29220) *
                        C29123 * C4042 -
                    ((C4490 * C5539 + C4438 * C5807 + C4489 * C2772 +
                      C4437 * C3043 + C4488 * C1364 + C4436 * C1674) *
                         C29220 +
                     (C4490 * C5423 + C4438 * C5485 + C4489 * C2654 +
                      C4437 * C2716 + C4488 * C1226 + C4436 * C1294) *
                         C222) *
                        C29123 * C4043 +
                    ((C4488 * C4045 + C4436 * C4095 + C4489 * C8180 +
                      C4437 * C8227 + C4490 * C8181 + C4438 * C8228) *
                         C222 +
                     (C4488 * C4139 + C4436 * C4350 + C4489 * C8269 +
                      C4437 * C8474 + C4490 * C8270 + C4438 * C8475) *
                         C29220) *
                        C29123 * C4044) *
                   C29179 * C29145) /
                      (p * q * std::sqrt(p + q));
    d2eezz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C29220 * C558) * C29209 * C77 +
           C584 * C78 + C585 * C79) *
              C4042 -
          (C1755 * C79 + C1756 * C78 +
           (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C29209 * C77) *
              C4043 +
          ((C557 * C4045 + C4395 + C4395 + C29220 * C4391) * C29209 * C77 +
           (C557 * C4046 + C4396 + C4396 + C29220 * C4392) * C29209 * C78 +
           (C557 * C4047 + C4397 + C4397 + C29220 * C4393) * C29209 * C79) *
              C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C29220 * C558) * C4436 + C5371 * C4437 +
           C5372 * C4438) *
              C29123 * C4042 -
          (C7241 * C4438 + C7242 * C4437 +
           (C557 * C1226 + C1747 + C1747 + C29220 * C1738) * C4436) *
              C29123 * C4043 +
          ((C557 * C4045 + C4395 + C4395 + C29220 * C4391) * C4436 +
           (C557 * C8180 + C8517 + C8517 + C29220 * C8514) * C4437 +
           (C557 * C8181 + C8518 + C8518 + C29220 * C8515) * C4438) *
              C29123 * C4044) *
         C29179 * C29145) /
            (p * q * std::sqrt(p + q));
}
