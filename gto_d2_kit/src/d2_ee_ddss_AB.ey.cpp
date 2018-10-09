/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ddss_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_2200_12(const double ae,
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
    const double C13610 = 0 * ae;
    const double C13609 = ae * be;
    const double C13608 = 0 * be;
    const double C13607 = 0 * be;
    const double C13606 = ae + be;
    const double C13605 = 0 * be;
    const double C13604 = xA - xB;
    const double C13705 = 0 * be;
    const double C13733 = yA - yB;
    const double C13736 = zA - zB;
    const double C13756 = 0 * be;
    const double C13782 = 0 * be;
    const double C13878 = 0 * ae;
    const double C13873 = 0 * be;
    const double C13872 = 0 * be;
    const double C13920 = 0 * be;
    const double C14028 = 0 * ae;
    const double C14023 = 0 * be;
    const double C14022 = 0 * be;
    const double C14070 = 0 * be;
    const double C14252 = p + q;
    const double C14251 = p * q;
    const double C14257 = xP - xQ;
    const double C14256 = bs[2];
    const double C14262 = bs[3];
    const double C14273 = bs[4];
    const double C14294 = bs[5];
    const double C14326 = yP - yQ;
    const double C14352 = zP - zQ;
    const double C81 = bs[0];
    const double C15440 = ce + de;
    const double C15439 = ce * de;
    const double C13669 = 2 * C13609;
    const double C13666 = -2 * C13608;
    const double C13665 = -2 * C13607;
    const double C13617 = C13610 / C13606;
    const double C13614 = C13608 / C13606;
    const double C13612 = 2 * C13606;
    const double C13611 = std::pow(C13606, 2);
    const double C13616 = C13609 * C13604;
    const double C13615 = C13604 * C13608;
    const double C13613 = C13604 * C13607;
    const double C15121 = C13604 * be;
    const double C15120 = C13604 * ae;
    const double C15119 = std::pow(C13604, 2);
    const double C13706 = C13705 / C13606;
    const double C13757 = C13609 * C13733;
    const double C15163 = std::pow(C13733, 2);
    const double C15217 = C13733 * be;
    const double C15215 = C13733 * ae;
    const double C13783 = C13609 * C13736;
    const double C15174 = std::pow(C13736, 2);
    const double C15257 = C13736 * be;
    const double C15255 = C13736 * ae;
    const double C13875 = C13733 * C13756;
    const double C13874 = C13756 / C13606;
    const double C13934 = -2 * C13756;
    const double C14025 = C13736 * C13782;
    const double C14024 = C13782 / C13606;
    const double C14084 = -2 * C13782;
    const double C13885 = C13878 / C13606;
    const double C13880 = C13733 * C13873;
    const double C13933 = -2 * C13873;
    const double C13921 = C13920 / C13606;
    const double C14035 = C14028 / C13606;
    const double C14030 = C13736 * C14023;
    const double C14083 = -2 * C14023;
    const double C14071 = C14070 / C13606;
    const double C14253 = 2 * C14251;
    const double C14265 = C14257 * ae;
    const double C14264 = C14257 * be;
    const double C14261 = std::pow(C14257, 2);
    const double C14329 = C14326 * be;
    const double C14328 = C14257 * C14326;
    const double C14380 = C14326 * ae;
    const double C14379 = C14326 * C14257;
    const double C14404 = std::pow(C14326, 2);
    const double C14355 = C14352 * be;
    const double C14354 = C14257 * C14352;
    const double C14418 = C14326 * C14352;
    const double C14431 = C14352 * ae;
    const double C14430 = C14352 * C14257;
    const double C14455 = C14352 * C14326;
    const double C14467 = std::pow(C14352, 2);
    const double C68 = std::exp(-(std::pow(zC - zD, 2) * C15439) / C15440);
    const double C69 = std::exp(-(std::pow(yC - yD, 2) * C15439) / C15440);
    const double C70 = std::exp(-(std::pow(xC - xD, 2) * C15439) / C15440);
    const double C13673 = ae * C13666;
    const double C13672 = ae * C13665;
    const double C15133 = std::pow(C13612, -1);
    const double C15435 = std::pow(C13612, -2);
    const double C13618 = 2 * C13611;
    const double C13664 = C13611 * C13612;
    const double C13710 = 4 * C13611;
    const double C13620 = C13615 / C13606;
    const double C13619 = C13613 / C13606;
    const double C15428 = std::pow(C15120, 2);
    const double C15122 = C15119 * C13609;
    const double C15164 = C15163 * C13609;
    const double C15441 = std::pow(C15215, 2);
    const double C15175 = C15174 * C13609;
    const double C15443 = std::pow(C15255, 2);
    const double C13883 = C13875 / C13606;
    const double C13943 = ae * C13934;
    const double C14033 = C14025 / C13606;
    const double C14093 = ae * C14084;
    const double C13886 = C13880 / C13606;
    const double C13942 = ae * C13933;
    const double C14036 = C14030 / C13606;
    const double C14092 = ae * C14083;
    const double C14255 = C14253 / C14252;
    const double C96 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C14253 / C14252, 2) -
          (bs[1] * C14253) / C14252) *
         C13609) /
        C13611;
    const double C82 = -(C14257 * bs[1] * C14253) / C14252;
    const double C391 = -(C14326 * bs[1] * C14253) / C14252;
    const double C838 = -(C14352 * bs[1] * C14253) / C14252;
    const double C14268 = C14262 * C14265;
    const double C14279 = C14273 * C14265;
    const double C14302 = C14294 * C14265;
    const double C87 = (-(bs[1] * C14265 * C14253) / C14252) / C13606;
    const double C14267 = C14262 * C14264;
    const double C14276 = C14273 * C14264;
    const double C14298 = C14294 * C14264;
    const double C86 = (-(bs[1] * C14264 * C14253) / C14252) / C13606;
    const double C14275 = C14261 * C14273;
    const double C14297 = C14261 * C14294;
    const double C14331 = C14262 * C14329;
    const double C14336 = C14273 * C14329;
    const double C14343 = C14294 * C14329;
    const double C124 = (-(bs[1] * C14329 * C14253) / C14252) / C13606;
    const double C14330 = C14328 * ae;
    const double C14382 = C14262 * C14380;
    const double C14387 = C14273 * C14380;
    const double C14394 = C14294 * C14380;
    const double C189 = (-(bs[1] * C14380 * C14253) / C14252) / C13606;
    const double C14381 = C14379 * ae;
    const double C14406 = C14404 * C14273;
    const double C14411 = C14404 * C14294;
    const double C14357 = C14262 * C14355;
    const double C14362 = C14273 * C14355;
    const double C14369 = C14294 * C14355;
    const double C157 = (-(bs[1] * C14355 * C14253) / C14252) / C13606;
    const double C14356 = C14354 * ae;
    const double C14419 = C14418 * ae;
    const double C14433 = C14262 * C14431;
    const double C14438 = C14273 * C14431;
    const double C14445 = C14294 * C14431;
    const double C276 = (-(bs[1] * C14431 * C14253) / C14252) / C13606;
    const double C14432 = C14430 * ae;
    const double C14456 = C14455 * ae;
    const double C14469 = C14467 * C14273;
    const double C14474 = C14467 * C14294;
    const double C13677 = C13604 * C13673;
    const double C13627 = C13608 / C13618;
    const double C13624 = C13607 / C13618;
    const double C13623 = C13605 / C13618;
    const double C13877 = C13756 / C13618;
    const double C13882 = C13873 / C13618;
    const double C13881 = C13872 / C13618;
    const double C14027 = C13782 / C13618;
    const double C14032 = C14023 / C13618;
    const double C14031 = C14022 / C13618;
    const double C13678 = C13673 / C13664;
    const double C13676 = C13672 / C13664;
    const double C15438 = 4 * C13664;
    const double C13712 = C13606 * C13710;
    const double C13625 = 0 - C13620;
    const double C13622 = 0 - C13619;
    const double C15123 = C15122 / C13606;
    const double C15165 = C15164 / C13606;
    const double C15176 = C15175 / C13606;
    const double C13887 = 0 - C13883;
    const double C13948 = C13943 / C13664;
    const double C13947 = C13733 * C13943;
    const double C14037 = 0 - C14033;
    const double C14098 = C14093 / C13664;
    const double C14097 = C13736 * C14093;
    const double C13890 = 0 - C13886;
    const double C13946 = C13942 / C13664;
    const double C14040 = 0 - C14036;
    const double C14096 = C14092 / C13664;
    const double C14258 = std::pow(C14255, 2);
    const double C14263 = -C14255;
    const double C14274 = std::pow(C14255, 4);
    const double C14332 = C14330 * be;
    const double C14383 = C14381 * be;
    const double C14358 = C14356 * be;
    const double C14420 = C14419 * be;
    const double C14434 = C14432 * be;
    const double C14457 = C14456 * be;
    const double C13681 = C13677 / C13611;
    const double C13630 = C13625 * ae;
    const double C13629 = C13622 * ae;
    const double C15124 = -C15123;
    const double C15166 = -C15165;
    const double C15177 = -C15176;
    const double C13891 = C13887 * ae;
    const double C13951 = C13947 / C13611;
    const double C14041 = C14037 * ae;
    const double C14101 = C14097 / C13611;
    const double C13895 = C13890 * ae;
    const double C14045 = C14040 * ae;
    const double C14260 = C14256 * C14258;
    const double C97 = (ae * C14258 * C14256 * C14257 * be +
                        be * C14258 * C14256 * C14257 * ae +
                        C14257 *
                            (C14256 * C14258 + std::pow(C14257, 2) * bs[3] *
                                                   std::pow(-C14255, 3)) *
                            C13609) /
                       C13611;
    const double C129 =
        (C14258 * C14256 * C14257 * (yP - yQ) * ae * be) / C13611;
    const double C162 =
        (C14258 * C14256 * C14257 * (zP - zQ) * ae * be) / C13611;
    const double C194 = (C14258 * C14256 * C14326 * C14257 * ae * be) / C13611;
    const double C222 =
        ((std::pow(C14326, 2) * C14256 * C14258 - (bs[1] * C14253) / C14252) *
         C13609) /
        C13611;
    const double C249 = (C14258 * C14256 * C14326 * C14352 * ae * be) / C13611;
    const double C281 = (C14258 * C14256 * C14352 * C14257 * ae * be) / C13611;
    const double C308 = (C14258 * C14256 * C14352 * C14326 * ae * be) / C13611;
    const double C336 =
        ((std::pow(C14352, 2) * C14256 * C14258 - (bs[1] * C14253) / C14252) *
         C13609) /
        C13611;
    const double C88 = (C14257 * C14258 * C14256 * C14264) / C13606 -
                       (be * bs[1] * C14253) / (C14252 * C13606);
    const double C89 = (C14257 * C14258 * C14256 * C14265) / C13606 -
                       (ae * bs[1] * C14253) / (C14252 * C13606);
    const double C125 = (C14257 * C14258 * C14256 * C14329) / C13606;
    const double C158 = (C14257 * C14258 * C14256 * C14355) / C13606;
    const double C190 = (C14257 * C14258 * C14256 * C14380) / C13606;
    const double C277 = (C14257 * C14258 * C14256 * C14431) / C13606;
    const double C397 = (C14326 * C14258 * C14256 * C14264) / C13606;
    const double C398 = (C14326 * C14258 * C14256 * C14265) / C13606;
    const double C456 = (C14326 * C14258 * C14256 * C14329) / C13606 -
                        (be * bs[1] * C14253) / (C14252 * C13606);
    const double C506 = (C14326 * C14258 * C14256 * C14355) / C13606;
    const double C556 = (C14326 * C14258 * C14256 * C14380) / C13606 -
                        (ae * bs[1] * C14253) / (C14252 * C13606);
    const double C697 = (C14326 * C14258 * C14256 * C14431) / C13606;
    const double C844 = (C14352 * C14258 * C14256 * C14264) / C13606;
    const double C845 = (C14352 * C14258 * C14256 * C14265) / C13606;
    const double C900 = (C14352 * C14258 * C14256 * C14329) / C13606;
    const double C953 = (C14352 * C14258 * C14256 * C14355) / C13606 -
                        (be * bs[1] * C14253) / (C14252 * C13606);
    const double C1003 = (C14352 * C14258 * C14256 * C14380) / C13606;
    const double C1141 = (C14352 * C14258 * C14256 * C14431) / C13606 -
                         (ae * bs[1] * C14253) / (C14252 * C13606);
    const double C14266 = std::pow(C14263, 3);
    const double C14295 = std::pow(C14263, 5);
    const double C14283 = C14274 * C14279;
    const double C14282 = C14274 * C14276;
    const double C14281 = C14275 * C14274;
    const double C14293 = C14273 * C14274;
    const double C14338 = C14274 * C14336;
    const double C14364 = C14274 * C14362;
    const double C14389 = C14274 * C14387;
    const double C14407 = C14406 * C14274;
    const double C14440 = C14274 * C14438;
    const double C14470 = C14469 * C14274;
    const double C14335 = C14273 * C14332;
    const double C14342 = C14294 * C14332;
    const double C14386 = C14273 * C14383;
    const double C14393 = C14294 * C14383;
    const double C14361 = C14273 * C14358;
    const double C14368 = C14294 * C14358;
    const double C14422 = C14273 * C14420;
    const double C14425 = C14294 * C14420;
    const double C14437 = C14273 * C14434;
    const double C14444 = C14294 * C14434;
    const double C14459 = C14273 * C14457;
    const double C14462 = C14294 * C14457;
    const double C13634 = C13630 / C13606;
    const double C13633 = C13629 / C13606;
    const double C15125 = std::exp(C15124);
    const double C15167 = std::exp(C15166);
    const double C15178 = std::exp(C15177);
    const double C13896 = C13891 / C13606;
    const double C14046 = C14041 / C13606;
    const double C13899 = C13895 / C13606;
    const double C14049 = C14045 / C13606;
    const double C83 = C14260 * C14261 - (bs[1] * C14253) / C14252;
    const double C392 = C14326 * C14257 * C14260;
    const double C394 = C14260 * C14404 - (bs[1] * C14253) / C14252;
    const double C839 = C14352 * C14257 * C14260;
    const double C841 = C14260 * C14467 - (bs[1] * C14253) / C14252;
    const double C1962 = C14352 * C14326 * C14260;
    const double C14270 = C14266 * C14268;
    const double C14269 = C14266 * C14267;
    const double C14272 = C14262 * C14266;
    const double C14333 = C14266 * C14331;
    const double C14359 = C14266 * C14357;
    const double C14384 = C14266 * C14382;
    const double C14435 = C14266 * C14433;
    const double C130 = (ae * C14258 * C14256 * C14326 * be +
                         C14257 * C14266 * C14262 * C14257 * C14326 * ae * be) /
                        C13611;
    const double C163 = (ae * C14258 * C14256 * C14352 * be +
                         C14257 * C14266 * C14262 * C14257 * C14352 * ae * be) /
                        C13611;
    const double C195 = (be * C14258 * C14256 * C14326 * ae +
                         C14257 * C14266 * C14262 * C14326 * C14257 * ae * be) /
                        C13611;
    const double C223 =
        (C14257 * (C14260 + std::pow(C14326, 2) * C14262 * C14266) * C13609) /
        C13611;
    const double C250 =
        (C14257 * C14266 * C14262 * C14326 * C14352 * ae * be) / C13611;
    const double C251 =
        (C14266 * C14262 * C14420 + C14274 * C14273 * C14420 * C14261) / C13611;
    const double C282 = (be * C14258 * C14256 * C14352 * ae +
                         C14257 * C14266 * C14262 * C14352 * C14257 * ae * be) /
                        C13611;
    const double C309 =
        (C14257 * C14266 * C14262 * C14352 * C14326 * ae * be) / C13611;
    const double C310 =
        (C14266 * C14262 * C14457 + C14274 * C14273 * C14457 * C14261) / C13611;
    const double C337 =
        (C14257 * (C14260 + std::pow(C14352, 2) * C14262 * C14266) * C13609) /
        C13611;
    const double C409 =
        (C14326 * (C14260 + C14261 * C14262 * C14266) * C13609) / C13611;
    const double C462 =
        (be * C14258 * C14256 * C14265 + C14326 * C14266 * C14262 * C14332) /
        C13611;
    const double C512 = (C14326 * C14266 * C14262 * C14358) / C13611;
    const double C562 =
        (ae * C14258 * C14256 * C14264 + C14326 * C14266 * C14262 * C14383) /
        C13611;
    const double C609 =
        (ae * C14258 * C14256 * C14329 + be * C14258 * C14256 * C14380 +
         C14326 * (C14260 + C14404 * C14262 * C14266) * C13609) /
        C13611;
    const double C653 =
        (ae * C14258 * C14256 * C14355 + C14326 * C14266 * C14262 * C14420) /
        C13611;
    const double C703 = (C14326 * C14266 * C14262 * C14434) / C13611;
    const double C747 =
        (be * C14258 * C14256 * C14431 + C14326 * C14266 * C14262 * C14457) /
        C13611;
    const double C791 =
        (C14326 * (C14260 + C14467 * C14262 * C14266) * C13609) / C13611;
    const double C856 =
        (C14352 * (C14260 + C14261 * C14262 * C14266) * C13609) / C13611;
    const double C906 = (C14352 * C14266 * C14262 * C14332) / C13611;
    const double C959 =
        (be * C14258 * C14256 * C14265 + C14352 * C14266 * C14262 * C14358) /
        C13611;
    const double C1009 = (C14352 * C14266 * C14262 * C14383) / C13611;
    const double C1053 =
        (C14352 * (C14260 + C14404 * C14262 * C14266) * C13609) / C13611;
    const double C1097 =
        (be * C14258 * C14256 * C14380 + C14352 * C14266 * C14262 * C14420) /
        C13611;
    const double C1147 =
        (ae * C14258 * C14256 * C14264 + C14352 * C14266 * C14262 * C14434) /
        C13611;
    const double C1191 =
        (ae * C14258 * C14256 * C14329 + C14352 * C14266 * C14262 * C14457) /
        C13611;
    const double C1238 =
        (ae * C14258 * C14256 * C14355 + be * C14258 * C14256 * C14431 +
         C14352 * (C14260 + C14467 * C14262 * C14266) * C13609) /
        C13611;
    const double C14308 = C14295 * C14302;
    const double C14305 = C14295 * C14298;
    const double C14304 = C14297 * C14295;
    const double C14345 = C14295 * C14343;
    const double C14371 = C14295 * C14369;
    const double C14396 = C14295 * C14394;
    const double C14412 = C14411 * C14295;
    const double C14447 = C14295 * C14445;
    const double C14475 = C14474 * C14295;
    const double C14286 = C14257 * C14283;
    const double C14292 = be * C14283;
    const double C14637 = C14326 * C14283;
    const double C14771 = C14352 * C14283;
    const double C14285 = C14257 * C14282;
    const double C14291 = ae * C14282;
    const double C14646 = C14326 * C14282;
    const double C14787 = C14352 * C14282;
    const double C14303 = C14293 * ae;
    const double C14301 = C14293 * C14261;
    const double C14300 = C14257 * C14293;
    const double C14299 = C14293 * be;
    const double C14662 = C14293 * C14404;
    const double C14661 = C14326 * C14293;
    const double C14810 = C14293 * C14467;
    const double C14809 = C14352 * C14293;
    const double C14341 = ae * C14338;
    const double C14340 = C14257 * C14338;
    const double C14652 = C14326 * C14338;
    const double C14794 = C14352 * C14338;
    const double C14367 = ae * C14364;
    const double C14366 = C14257 * C14364;
    const double C14678 = C14326 * C14364;
    const double C14800 = C14352 * C14364;
    const double C14392 = be * C14389;
    const double C14391 = C14257 * C14389;
    const double C14654 = C14326 * C14389;
    const double C14782 = C14352 * C14389;
    const double C14443 = be * C14440;
    const double C14442 = C14257 * C14440;
    const double C14687 = C14326 * C14440;
    const double C14802 = C14352 * C14440;
    const double C14337 = C14274 * C14335;
    const double C14344 = C14295 * C14342;
    const double C14388 = C14274 * C14386;
    const double C14395 = C14295 * C14393;
    const double C14363 = C14274 * C14361;
    const double C14370 = C14295 * C14368;
    const double C14423 = C14274 * C14422;
    const double C14426 = C14295 * C14425;
    const double C14439 = C14274 * C14437;
    const double C14446 = C14295 * C14444;
    const double C14460 = C14274 * C14459;
    const double C14463 = C14295 * C14462;
    const double C13638 = C13634 - C13624;
    const double C13637 = C13633 - C13623;
    const double C13621 = C13616 * C15125;
    const double C15127 = C15125 * C15120;
    const double C15126 = C15125 / C13612;
    const double C15135 = C15133 * C15125;
    const double C15431 = C15125 * C15121;
    const double C15468 = C15435 * C15125;
    const double C15462 = C15125 * C15428;
    const double C13758 = C13757 * C15167;
    const double C123 = -(2 * C13609 * (yA - yB) * C15167) / C13606;
    const double C221 =
        -((C15167 - (C13733 * 2 * C13609 * C13733 * C15167) / C13606) *
          C13669) /
        C13606;
    const double C15216 = C15167 / C13612;
    const double C15218 = C15167 * C15215;
    const double C15225 = C15133 * C15167;
    const double C15448 = C15167 * C15217;
    const double C15472 = C15435 * C15167;
    const double C15470 = C15167 * C15441;
    const double C13784 = C13783 * C15178;
    const double C156 = -(2 * C13609 * (zA - zB) * C15178) / C13606;
    const double C335 =
        -((C15178 - (C13736 * 2 * C13609 * C13736 * C15178) / C13606) *
          C13669) /
        C13606;
    const double C15256 = C15178 / C13612;
    const double C15258 = C15178 * C15255;
    const double C15265 = C15133 * C15178;
    const double C15455 = C15178 * C15257;
    const double C15475 = C15435 * C15178;
    const double C15473 = C15178 * C15443;
    const double C13900 = C13896 - C13882;
    const double C14050 = C14046 - C14032;
    const double C13903 = C13899 - C13881;
    const double C14053 = C14049 - C14031;
    const double C91 =
        (C14258 * C14256 * C14265 + C14257 * (C14257 * C14270 + C14260 * ae) +
         C14257 * C14260 * ae) /
        C13606;
    const double C400 = (C14326 * (C14257 * C14270 + C14260 * ae)) / C13606;
    const double C404 = (C14258 * C14256 * C14265 + C14270 * C14404) / C13606;
    const double C847 = (C14352 * (C14257 * C14270 + C14260 * ae)) / C13606;
    const double C851 = (C14258 * C14256 * C14265 + C14270 * C14467) / C13606;
    const double C1966 = (C14352 * C14326 * C14270) / C13606;
    const double C2803 =
        (2 * C14326 * C14270 + C14326 * (C14270 + C14283 * C14404)) / C13606;
    const double C3062 = (C14352 * (C14270 + C14283 * C14404)) / C13606;
    const double C5259 =
        (2 * C14352 * C14270 + C14352 * (C14270 + C14283 * C14467)) / C13606;
    const double C98 =
        ((C14260 + C14261 * C14262 * C14266) * C13609 +
         ae * (C14257 * C14269 + C14260 * be) +
         be * (C14257 * C14270 + C14260 * ae) +
         C14257 *
             (ae * C14269 + be * C14270 +
              C14257 *
                  (C14262 * C14266 + C14261 * bs[4] * std::pow(C14255, 4)) *
                  C13609)) /
        C13611;
    const double C90 =
        (C14258 * C14256 * C14264 + C14257 * (C14257 * C14269 + C14260 * be) +
         C14257 * C14260 * be) /
        C13606;
    const double C399 = (C14326 * (C14257 * C14269 + C14260 * be)) / C13606;
    const double C403 = (C14258 * C14256 * C14264 + C14269 * C14404) / C13606;
    const double C846 = (C14352 * (C14257 * C14269 + C14260 * be)) / C13606;
    const double C850 = (C14258 * C14256 * C14264 + C14269 * C14467) / C13606;
    const double C1965 = (C14352 * C14326 * C14269) / C13606;
    const double C2802 =
        (2 * C14326 * C14269 + C14326 * (C14269 + C14282 * C14404)) / C13606;
    const double C3061 = (C14352 * (C14269 + C14282 * C14404)) / C13606;
    const double C5258 =
        (2 * C14352 * C14269 + C14352 * (C14269 + C14282 * C14467)) / C13606;
    const double C14280 = C14272 * ae;
    const double C14278 = C14257 * C14272;
    const double C14277 = C14272 * be;
    const double C14284 = C14272 + C14281;
    const double C14408 = C14272 + C14407;
    const double C14471 = C14272 + C14470;
    const double C14653 = C14326 * C14272;
    const double C14801 = C14352 * C14272;
    const double C224 =
        ((C14260 + C14404 * C14262 * C14266) * C13609 +
         (C14272 + C14404 * C14273 * C14274) * C13609 * C14261) /
        C13611;
    const double C338 =
        ((C14260 + C14467 * C14262 * C14266) * C13609 +
         (C14272 + C14467 * C14273 * C14274) * C13609 * C14261) /
        C13611;
    const double C84 =
        2 * C14257 * C14260 + C14257 * (C14260 + C14272 * C14261);
    const double C393 = C14326 * (C14260 + C14272 * C14261);
    const double C840 = C14352 * (C14260 + C14272 * C14261);
    const double C2800 =
        2 * C14326 * C14260 + C14326 * (C14260 + C14272 * C14404);
    const double C3057 = C14352 * (C14260 + C14272 * C14404);
    const double C5256 =
        2 * C14352 * C14260 + C14352 * (C14260 + C14272 * C14467);
    const double C131 =
        (C14266 * C14262 * C14332 + ae * C14257 * C14333 +
         C14257 * (ae * C14333 + C14257 * C14274 * C14273 * C14332)) /
        C13611;
    const double C126 = (C14258 * C14256 * C14329 + C14333 * C14261) / C13606;
    const double C127 =
        (2 * C14257 * C14333 + C14257 * (C14333 + C14338 * C14261)) / C13606;
    const double C457 =
        (C14258 * C14256 * C14329 + C14326 * (C14326 * C14333 + C14260 * be) +
         C14326 * C14260 * be) /
        C13606;
    const double C458 =
        (C14326 * C14257 * C14333 + C14257 * C14260 * be) / C13606;
    const double C460 = (C14326 * (C14333 + C14338 * C14261) +
                         (C14260 + C14272 * C14261) * be) /
                        C13606;
    const double C901 = (C14352 * C14257 * C14333) / C13606;
    const double C902 = (C14352 * (C14333 + C14338 * C14261)) / C13606;
    const double C903 = (C14258 * C14256 * C14329 + C14333 * C14467) / C13606;
    const double C2024 = (C14352 * (C14326 * C14333 + C14260 * be)) / C13606;
    const double C5286 =
        (2 * C14352 * C14333 + C14352 * (C14333 + C14338 * C14467)) / C13606;
    const double C164 =
        (C14266 * C14262 * C14358 + ae * C14257 * C14359 +
         C14257 * (ae * C14359 + C14257 * C14274 * C14273 * C14358)) /
        C13611;
    const double C159 = (C14258 * C14256 * C14355 + C14359 * C14261) / C13606;
    const double C160 =
        (2 * C14257 * C14359 + C14257 * (C14359 + C14364 * C14261)) / C13606;
    const double C507 = (C14326 * C14257 * C14359) / C13606;
    const double C508 = (C14326 * (C14359 + C14364 * C14261)) / C13606;
    const double C509 = (C14258 * C14256 * C14355 + C14359 * C14404) / C13606;
    const double C954 =
        (C14258 * C14256 * C14355 + C14352 * (C14352 * C14359 + C14260 * be) +
         C14352 * C14260 * be) /
        C13606;
    const double C955 =
        (C14352 * C14257 * C14359 + C14257 * C14260 * be) / C13606;
    const double C957 = (C14352 * (C14359 + C14364 * C14261) +
                         (C14260 + C14272 * C14261) * be) /
                        C13606;
    const double C2080 =
        (C14352 * C14326 * C14359 + C14326 * C14260 * be) / C13606;
    const double C2861 =
        (2 * C14326 * C14359 + C14326 * (C14359 + C14364 * C14404)) / C13606;
    const double C3151 = (C14352 * (C14359 + C14364 * C14404) +
                          (C14260 + C14272 * C14404) * be) /
                         C13606;
    const double C196 =
        (C14266 * C14262 * C14383 + be * C14257 * C14384 +
         C14257 * (be * C14384 + C14257 * C14274 * C14273 * C14383)) /
        C13611;
    const double C191 = (C14258 * C14256 * C14380 + C14384 * C14261) / C13606;
    const double C192 =
        (2 * C14257 * C14384 + C14257 * (C14384 + C14389 * C14261)) / C13606;
    const double C557 =
        (C14326 * C14257 * C14384 + C14257 * C14260 * ae) / C13606;
    const double C558 = (C14326 * (C14384 + C14389 * C14261) +
                         (C14260 + C14272 * C14261) * ae) /
                        C13606;
    const double C559 =
        (C14258 * C14256 * C14380 + C14326 * (C14326 * C14384 + C14260 * ae) +
         C14326 * C14260 * ae) /
        C13606;
    const double C1004 = (C14352 * C14257 * C14384) / C13606;
    const double C1005 = (C14352 * (C14384 + C14389 * C14261)) / C13606;
    const double C1006 = (C14258 * C14256 * C14380 + C14384 * C14467) / C13606;
    const double C2136 = (C14352 * (C14326 * C14384 + C14260 * ae)) / C13606;
    const double C5343 =
        (2 * C14352 * C14384 + C14352 * (C14384 + C14389 * C14467)) / C13606;
    const double C283 =
        (C14266 * C14262 * C14434 + be * C14257 * C14435 +
         C14257 * (be * C14435 + C14257 * C14274 * C14273 * C14434)) /
        C13611;
    const double C278 = (C14258 * C14256 * C14431 + C14435 * C14261) / C13606;
    const double C279 =
        (2 * C14257 * C14435 + C14257 * (C14435 + C14440 * C14261)) / C13606;
    const double C698 = (C14326 * C14257 * C14435) / C13606;
    const double C699 = (C14326 * (C14435 + C14440 * C14261)) / C13606;
    const double C700 = (C14258 * C14256 * C14431 + C14435 * C14404) / C13606;
    const double C1142 =
        (C14352 * C14257 * C14435 + C14257 * C14260 * ae) / C13606;
    const double C1143 = (C14352 * (C14435 + C14440 * C14261) +
                          (C14260 + C14272 * C14261) * ae) /
                         C13606;
    const double C1144 =
        (C14258 * C14256 * C14431 + C14352 * (C14352 * C14435 + C14260 * ae) +
         C14352 * C14260 * ae) /
        C13606;
    const double C2298 =
        (C14352 * C14326 * C14435 + C14326 * C14260 * ae) / C13606;
    const double C2966 =
        (2 * C14326 * C14435 + C14326 * (C14435 + C14440 * C14404)) / C13606;
    const double C3321 = (C14352 * (C14435 + C14440 * C14404) +
                          (C14260 + C14272 * C14404) * ae) /
                         C13606;
    const double C14312 = C14257 * C14308;
    const double C14639 = C14308 * C14404;
    const double C14773 = C14308 * C14467;
    const double C14855 = C14326 * C14308;
    const double C14311 = C14257 * C14305;
    const double C14648 = C14305 * C14404;
    const double C14789 = C14305 * C14467;
    const double C14861 = C14326 * C14305;
    const double C14310 = C14293 + C14304;
    const double C14347 = C14345 * C14261;
    const double C14660 = C14326 * C14345;
    const double C14727 = C14257 * C14345;
    const double C14796 = C14345 * C14467;
    const double C14373 = C14371 * C14261;
    const double C14680 = C14371 * C14404;
    const double C14736 = C14257 * C14371;
    const double C14808 = C14352 * C14371;
    const double C14865 = C14326 * C14371;
    const double C14398 = C14396 * C14261;
    const double C14663 = C14326 * C14396;
    const double C14729 = C14257 * C14396;
    const double C14783 = C14396 * C14467;
    const double C14413 = C14293 + C14412;
    const double C14449 = C14447 * C14261;
    const double C14689 = C14447 * C14404;
    const double C14740 = C14257 * C14447;
    const double C14811 = C14352 * C14447;
    const double C14867 = C14326 * C14447;
    const double C14476 = C14293 + C14475;
    const double C3060 = (C14326 * C14270 + C14637 * C14467) / C13606;
    const double C14296 = C14291 + C14292;
    const double C3059 = (C14326 * C14269 + C14646 * C14467) / C13606;
    const double C14307 = C14272 + C14301;
    const double C14309 = C14300 * ae;
    const double C14306 = C14300 * be;
    const double C14728 = C14326 * C14300;
    const double C14847 = C14352 * C14300;
    const double C14667 = C14272 + C14662;
    const double C14669 = C14661 * ae;
    const double C14666 = C14661 * be;
    const double C14866 = C14352 * C14661;
    const double C14815 = C14272 + C14810;
    const double C14817 = C14809 * ae;
    const double C14814 = C14809 * be;
    const double C904 = (C14257 * C14333 + C14340 * C14467) / C13606;
    const double C510 = (C14257 * C14359 + C14366 * C14404) / C13606;
    const double C14658 = C14341 + C14392;
    const double C1007 = (C14257 * C14384 + C14391 * C14467) / C13606;
    const double C14806 = C14367 + C14443;
    const double C701 = (C14257 * C14435 + C14442 * C14404) / C13606;
    const double C132 =
        (2 * (ae * C14333 + C14257 * C14337) + ae * (C14333 + C14338 * C14261) +
         C14257 *
             (C14337 + ae * C14257 * C14338 +
              C14257 * (ae * C14338 + C14257 * C14295 * C14294 * C14332))) /
        C13611;
    const double C463 = (C14266 * C14262 * C14332 + be * C14326 * C14270 +
                         C14326 * (be * C14270 + C14326 * C14337)) /
                        C13611;
    const double C464 = (be * (C14257 * C14270 + C14260 * ae) +
                         C14326 * (ae * C14333 + C14257 * C14337)) /
                        C13611;
    const double C907 = (C14352 * (ae * C14333 + C14257 * C14337)) / C13611;
    const double C909 = (C14266 * C14262 * C14332 + C14337 * C14467) / C13611;
    const double C2027 = (C14352 * (be * C14270 + C14326 * C14337)) / C13611;
    const double C14346 = C14257 * C14344;
    const double C14638 = C14326 * C14344;
    const double C2837 =
        (2 * (be * C14270 + C14326 * C14337) + be * (C14270 + C14283 * C14404) +
         C14326 * (C14337 + be * C14326 * C14283 +
                   C14326 * (C14292 + C14326 * C14344))) /
        C13611;
    const double C5288 =
        (2 * C14352 * C14337 + C14352 * (C14337 + C14344 * C14467)) / C13611;
    const double C5289 =
        (3 * (C14337 + C14344 * C14467) +
         C14352 * (2 * C14352 * C14344 +
                   C14352 * (C14344 +
                             std::pow(C14255, 6) * bs[6] * C14332 * C14467))) /
        C13611;
    const double C197 =
        (2 * (be * C14384 + C14257 * C14388) + be * (C14384 + C14389 * C14261) +
         C14257 *
             (C14388 + be * C14257 * C14389 +
              C14257 * (be * C14389 + C14257 * C14295 * C14294 * C14383))) /
        C13611;
    const double C563 = (ae * (C14257 * C14269 + C14260 * be) +
                         C14326 * (be * C14384 + C14257 * C14388)) /
                        C13611;
    const double C565 = (C14266 * C14262 * C14383 + ae * C14326 * C14269 +
                         C14326 * (ae * C14269 + C14326 * C14388)) /
                        C13611;
    const double C1010 = (C14352 * (be * C14384 + C14257 * C14388)) / C13611;
    const double C1012 = (C14266 * C14262 * C14383 + C14388 * C14467) / C13611;
    const double C2139 =
        (ae * C14352 * C14269 + C14326 * C14352 * C14388) / C13611;
    const double C14397 = C14257 * C14395;
    const double C14647 = C14326 * C14395;
    const double C14756 = C14352 * C14395;
    const double C2889 =
        (2 * (ae * C14269 + C14326 * C14388) + ae * (C14269 + C14282 * C14404) +
         C14326 * (C14388 + ae * C14326 * C14282 +
                   C14326 * (C14291 + C14326 * C14395))) /
        C13611;
    const double C3197 =
        (C14352 * C14388 + ae * C14352 * C14646 +
         C14326 * (ae * C14352 * C14282 + C14326 * C14352 * C14395)) /
        C13611;
    const double C3198 = (ae * (C14269 + C14282 * C14467) +
                          C14326 * (C14388 + C14395 * C14467)) /
                         C13611;
    const double C3199 =
        (C14388 + C14395 * C14467 + ae * (C14646 + C14326 * C14305 * C14467) +
         C14326 * (ae * (C14282 + C14305 * C14467) +
                   C14326 * (C14395 +
                             std::pow(C14255, 6) * bs[6] * C14383 * C14467))) /
        C13611;
    const double C5345 =
        (2 * C14352 * C14388 + C14352 * (C14388 + C14395 * C14467)) / C13611;
    const double C165 =
        (2 * (ae * C14359 + C14257 * C14363) + ae * (C14359 + C14364 * C14261) +
         C14257 *
             (C14363 + ae * C14257 * C14364 +
              C14257 * (ae * C14364 + C14257 * C14295 * C14294 * C14358))) /
        C13611;
    const double C513 = (C14326 * (ae * C14359 + C14257 * C14363)) / C13611;
    const double C515 = (C14266 * C14262 * C14358 + C14363 * C14404) / C13611;
    const double C960 = (C14266 * C14262 * C14358 + be * C14352 * C14270 +
                         C14352 * (be * C14270 + C14352 * C14363)) /
                        C13611;
    const double C961 = (be * (C14257 * C14270 + C14260 * ae) +
                         C14352 * (ae * C14359 + C14257 * C14363)) /
                        C13611;
    const double C2083 =
        (be * C14326 * C14270 + C14352 * C14326 * C14363) / C13611;
    const double C14372 = C14257 * C14370;
    const double C14772 = C14352 * C14370;
    const double C14854 = C14326 * C14370;
    const double C2863 =
        (2 * C14326 * C14363 + C14326 * (C14363 + C14370 * C14404)) / C13611;
    const double C2864 =
        (3 * (C14363 + C14370 * C14404) +
         C14326 * (2 * C14326 * C14370 +
                   C14326 * (C14370 +
                             std::pow(C14255, 6) * bs[6] * C14358 * C14404))) /
        C13611;
    const double C3153 = (C14326 * C14363 + be * C14352 * C14637 +
                          C14352 * (be * C14637 + C14352 * C14326 * C14370)) /
                         C13611;
    const double C3154 = (be * (C14270 + C14283 * C14404) +
                          C14352 * (C14363 + C14370 * C14404)) /
                         C13611;
    const double C5319 =
        (2 * (be * C14270 + C14352 * C14363) + be * (C14270 + C14283 * C14467) +
         C14352 * (C14363 + be * C14352 * C14283 +
                   C14352 * (C14292 + C14352 * C14370))) /
        C13611;
    const double C252 =
        (2 * C14257 * C14423 +
         C14257 * (C14423 + C14295 * C14294 * C14420 * C14261)) /
        C13611;
    const double C654 = (C14266 * C14262 * C14420 + ae * C14326 * C14359 +
                         C14326 * (ae * C14359 + C14326 * C14423)) /
                        C13611;
    const double C655 =
        (ae * C14257 * C14359 + C14326 * C14257 * C14423) / C13611;
    const double C1098 = (C14266 * C14262 * C14420 + be * C14352 * C14384 +
                          C14352 * (be * C14384 + C14352 * C14423)) /
                         C13611;
    const double C1099 =
        (be * C14257 * C14384 + C14352 * C14257 * C14423) / C13611;
    const double C2245 = (ae * (C14352 * C14359 + C14260 * be) +
                          C14326 * (be * C14384 + C14352 * C14423)) /
                         C13611;
    const double C14679 = C14326 * C14426;
    const double C14735 = C14257 * C14426;
    const double C14760 = C14352 * C14426;
    const double C253 =
        (3 * (C14423 + C14426 * C14261) +
         C14257 * (2 * C14257 * C14426 +
                   C14257 * (C14426 +
                             std::pow(C14255, 6) * bs[6] * C14420 * C14261))) /
        C13611;
    const double C656 = (C14257 * C14423 + ae * C14326 * C14366 +
                         C14326 * (ae * C14366 + C14326 * C14257 * C14426)) /
                        C13611;
    const double C657 = (ae * (C14359 + C14364 * C14261) +
                         C14326 * (C14423 + C14426 * C14261)) /
                        C13611;
    const double C1100 = (C14257 * C14423 + be * C14352 * C14391 +
                          C14352 * (be * C14391 + C14352 * C14257 * C14426)) /
                         C13611;
    const double C1101 = (be * (C14384 + C14389 * C14261) +
                          C14352 * (C14423 + C14426 * C14261)) /
                         C13611;
    const double C2942 =
        (2 * (ae * C14359 + C14326 * C14423) + ae * (C14359 + C14364 * C14404) +
         C14326 * (C14423 + ae * C14326 * C14364 +
                   C14326 * (C14367 + C14326 * C14426))) /
        C13611;
    const double C284 =
        (2 * (be * C14435 + C14257 * C14439) + be * (C14435 + C14440 * C14261) +
         C14257 *
             (C14439 + be * C14257 * C14440 +
              C14257 * (be * C14440 + C14257 * C14295 * C14294 * C14434))) /
        C13611;
    const double C704 = (C14326 * (be * C14435 + C14257 * C14439)) / C13611;
    const double C706 = (C14266 * C14262 * C14434 + C14439 * C14404) / C13611;
    const double C1148 = (ae * (C14257 * C14269 + C14260 * be) +
                          C14352 * (be * C14435 + C14257 * C14439)) /
                         C13611;
    const double C1150 = (C14266 * C14262 * C14434 + ae * C14352 * C14269 +
                          C14352 * (ae * C14269 + C14352 * C14439)) /
                         C13611;
    const double C2301 =
        (ae * C14326 * C14269 + C14352 * C14326 * C14439) / C13611;
    const double C14448 = C14257 * C14446;
    const double C14788 = C14352 * C14446;
    const double C14860 = C14326 * C14446;
    const double C2968 =
        (2 * C14326 * C14439 + C14326 * (C14439 + C14446 * C14404)) / C13611;
    const double C2969 =
        (3 * (C14439 + C14446 * C14404) +
         C14326 * (2 * C14326 * C14446 +
                   C14326 * (C14446 +
                             std::pow(C14255, 6) * bs[6] * C14434 * C14404))) /
        C13611;
    const double C3323 = (C14326 * C14439 + ae * C14352 * C14646 +
                          C14352 * (ae * C14646 + C14352 * C14326 * C14446)) /
                         C13611;
    const double C3324 = (ae * (C14269 + C14282 * C14404) +
                          C14352 * (C14439 + C14446 * C14404)) /
                         C13611;
    const double C5419 =
        (2 * (ae * C14269 + C14352 * C14439) + ae * (C14269 + C14282 * C14467) +
         C14352 * (C14439 + ae * C14352 * C14282 +
                   C14352 * (C14291 + C14352 * C14446))) /
        C13611;
    const double C311 =
        (2 * C14257 * C14460 +
         C14257 * (C14460 + C14295 * C14294 * C14457 * C14261)) /
        C13611;
    const double C748 = (C14266 * C14262 * C14457 + be * C14326 * C14435 +
                         C14326 * (be * C14435 + C14326 * C14460)) /
                        C13611;
    const double C749 =
        (be * C14257 * C14435 + C14326 * C14257 * C14460) / C13611;
    const double C1192 = (C14266 * C14262 * C14457 + ae * C14352 * C14333 +
                          C14352 * (ae * C14333 + C14352 * C14460)) /
                         C13611;
    const double C1193 =
        (ae * C14257 * C14333 + C14352 * C14257 * C14460) / C13611;
    const double C2354 = (ae * (C14326 * C14333 + C14260 * be) +
                          C14352 * (be * C14435 + C14326 * C14460)) /
                         C13611;
    const double C14688 = C14326 * C14463;
    const double C14739 = C14257 * C14463;
    const double C14795 = C14352 * C14463;
    const double C312 =
        (3 * (C14460 + C14463 * C14261) +
         C14257 * (2 * C14257 * C14463 +
                   C14257 * (C14463 +
                             std::pow(C14255, 6) * bs[6] * C14457 * C14261))) /
        C13611;
    const double C750 = (C14257 * C14460 + be * C14326 * C14442 +
                         C14326 * (be * C14442 + C14326 * C14257 * C14463)) /
                        C13611;
    const double C751 = (be * (C14435 + C14440 * C14261) +
                         C14326 * (C14460 + C14463 * C14261)) /
                        C13611;
    const double C1194 = (C14257 * C14460 + ae * C14352 * C14340 +
                          C14352 * (ae * C14340 + C14352 * C14257 * C14463)) /
                         C13611;
    const double C1195 = (ae * (C14333 + C14338 * C14261) +
                          C14352 * (C14460 + C14463 * C14261)) /
                         C13611;
    const double C2992 =
        (2 * (be * C14435 + C14326 * C14460) + be * (C14435 + C14440 * C14404) +
         C14326 * (C14460 + be * C14326 * C14440 +
                   C14326 * (C14443 + C14326 * C14463))) /
        C13611;
    const double C5443 =
        (2 * (ae * C14333 + C14352 * C14460) + ae * (C14333 + C14338 * C14467) +
         C14352 * (C14460 + ae * C14352 * C14338 +
                   C14352 * (C14341 + C14352 * C14463))) /
        C13611;
    const double C13643 = C13638 / C13612;
    const double C13642 = C13604 * C13638;
    const double C13667 = 2 * C13638;
    const double C13641 = C13637 + C13614;
    const double C13628 = C13621 / C13611;
    const double C13626 = 2 * C13621;
    const double C13668 = -4 * C13621;
    const double C15128 = C15127 * C15121;
    const double C15134 = C15127 / C13618;
    const double C15432 = C15133 * C15127;
    const double C15430 = C15127 / C13606;
    const double C379 = (C15125 * std::pow(C15121, 2)) / C13611 + C15126;
    const double C15136 = C15135 * C15121;
    const double C15445 = C15135 / C13710;
    const double C15436 = C15120 * C15135;
    const double C15434 = 2 * C15135;
    const double C65 = C15135 / C15438;
    const double C7734 = C15135 / C13612;
    const double C15464 = C15431 / C13606;
    const double C380 = (-2 * C15133 * C15431) / C13606;
    const double C15486 = C15462 / C13611;
    const double C13766 = 2 * C13758;
    const double C13879 = C13758 / C13611;
    const double C13936 = -4 * C13758;
    const double C455 =
        ((0 * ae) / C13606 - C13758 / C13611) / C13612 + (0 * ae) / C13606;
    const double C1331 = (0 * ae) / C13606 - C13758 / C13611;
    const double C2451 = (C15167 * std::pow(C15217, 2)) / C13611 + C15216;
    const double C15219 = C15218 * C15217;
    const double C15224 = C15218 / C13618;
    const double C15446 = C15218 / C13606;
    const double C15442 = C15133 * C15218;
    const double C454 =
        (((C15167 - (C13733 * 2 * C13758) / C13606) * ae) / C13606 -
         C13756 / C13618) /
            C13612 +
        ((C13733 * ((0 * ae) / C13606 - C13758 / C13611) + C15225) * ae) /
            C13606;
    const double C15226 = C15225 * C15217;
    const double C15454 = C15225 / C13710;
    const double C15452 = C15215 * C15225;
    const double C15451 = 2 * C15225;
    const double C2797 = C15225 / C15438;
    const double C7737 = C15225 / C13612;
    const double C15477 = C15448 / C13606;
    const double C2452 = (-2 * C15133 * C15448) / C13606;
    const double C15491 = C15470 / C13611;
    const double C13792 = 2 * C13784;
    const double C14029 = C13784 / C13611;
    const double C14086 = -4 * C13784;
    const double C952 =
        ((0 * ae) / C13606 - C13784 / C13611) / C13612 + (0 * ae) / C13606;
    const double C1695 = (0 * ae) / C13606 - C13784 / C13611;
    const double C4574 = (C15178 * std::pow(C15257, 2)) / C13611 + C15256;
    const double C15259 = C15258 * C15257;
    const double C15264 = C15258 / C13618;
    const double C15447 = C15258 / C13606;
    const double C15444 = C15133 * C15258;
    const double C951 =
        (((C15178 - (C13736 * 2 * C13784) / C13606) * ae) / C13606 -
         C13782 / C13618) /
            C13612 +
        ((C13736 * ((0 * ae) / C13606 - C13784 / C13611) + C15265) * ae) /
            C13606;
    const double C15266 = C15265 * C15257;
    const double C15461 = C15265 / C13710;
    const double C15459 = C15255 * C15265;
    const double C15458 = 2 * C15265;
    const double C5255 = C15265 / C15438;
    const double C10524 = C15265 / C13612;
    const double C15482 = C15455 / C13606;
    const double C4575 = (-2 * C15133 * C15455) / C13606;
    const double C15493 = C15473 / C13611;
    const double C13905 = C13900 / C13612;
    const double C13904 = C13733 * C13900;
    const double C13935 = 2 * C13900;
    const double C14055 = C14050 / C13612;
    const double C14054 = C13736 * C14050;
    const double C14085 = 2 * C14050;
    const double C13908 = C13903 + C13874;
    const double C14058 = C14053 + C14024;
    const double C14289 = C14286 + C14280;
    const double C14656 = C14654 + C14280;
    const double C14804 = C14802 + C14280;
    const double C2246 = (ae * (C14352 * C14366 + C14278 * be) +
                          C14326 * (be * C14391 + C14352 * C14257 * C14426)) /
                         C13611;
    const double C2355 = (ae * (C14326 * C14340 + C14278 * be) +
                          C14352 * (be * C14442 + C14326 * C14257 * C14463)) /
                         C13611;
    const double C459 =
        (C14257 * C14333 + C14326 * (C14326 * C14340 + C14278 * be) +
         C14326 * C14278 * be) /
        C13606;
    const double C560 =
        (C14257 * C14384 + C14326 * (C14326 * C14391 + C14278 * ae) +
         C14326 * C14278 * ae) /
        C13606;
    const double C956 =
        (C14257 * C14359 + C14352 * (C14352 * C14366 + C14278 * be) +
         C14352 * C14278 * be) /
        C13606;
    const double C1145 =
        (C14257 * C14435 + C14352 * (C14352 * C14442 + C14278 * ae) +
         C14352 * C14278 * ae) /
        C13606;
    const double C2025 = (C14352 * (C14326 * C14340 + C14278 * be)) / C13606;
    const double C2081 =
        (C14352 * C14326 * C14366 + C14326 * C14278 * be) / C13606;
    const double C2137 = (C14352 * (C14326 * C14391 + C14278 * ae)) / C13606;
    const double C2299 =
        (C14352 * C14326 * C14442 + C14326 * C14278 * ae) / C13606;
    const double C395 = C14257 * C14260 + C14278 * C14404;
    const double C842 = C14257 * C14260 + C14278 * C14467;
    const double C1963 = C14352 * C14326 * C14278;
    const double C3452 =
        2 * C14326 * C14278 + C14326 * (C14278 + C14300 * C14404);
    const double C3798 = C14352 * (C14278 + C14300 * C14404);
    const double C5978 =
        2 * C14352 * C14278 + C14352 * (C14278 + C14300 * C14467);
    const double C14288 = C14285 + C14277;
    const double C14655 = C14652 + C14277;
    const double C14803 = C14800 + C14277;
    const double C3279 = (ae * (C14359 + C14352 * (C14352 * C14364 + C14277) +
                                C14352 * C14272 * be) +
                          C14326 * (C14423 + be * C14352 * C14389 +
                                    C14352 * (C14392 + C14352 * C14426))) /
                         C13611;
    const double C14287 = C14284 * C13609;
    const double C14409 = C14408 * C13609;
    const double C14472 = C14471 * C13609;
    const double C3280 =
        (be * C14384 + C14352 * C14423 + ae * (C14352 * C14678 + C14653 * be) +
         C14326 * (ae * (C14352 * C14364 + C14277) +
                   C14326 * (C14392 + C14352 * C14426))) /
        C13611;
    const double C3150 =
        (C14326 * C14359 + C14352 * (C14352 * C14678 + C14653 * be) +
         C14352 * C14653 * be) /
        C13606;
    const double C3320 =
        (C14326 * C14435 + C14352 * (C14352 * C14687 + C14653 * ae) +
         C14352 * C14653 * ae) /
        C13606;
    const double C3056 = C14326 * C14260 + C14653 * C14467;
    const double C6308 =
        2 * C14352 * C14653 + C14352 * (C14653 + C14661 * C14467);
    const double C14315 = C14312 + C14303;
    const double C14641 = C14283 + C14639;
    const double C14775 = C14283 + C14773;
    const double C6310 =
        (2 * C14352 * C14637 + C14352 * (C14637 + C14855 * C14467)) / C13606;
    const double C14314 = C14311 + C14299;
    const double C14650 = C14282 + C14648;
    const double C14791 = C14282 + C14789;
    const double C6309 =
        (2 * C14352 * C14646 + C14352 * (C14646 + C14861 * C14467)) / C13606;
    const double C14313 = C14310 * C13609;
    const double C14349 = C14338 + C14347;
    const double C14665 = C14660 + C14299;
    const double C14730 = C14326 * C14727;
    const double C6016 =
        (2 * C14352 * C14340 + C14352 * (C14340 + C14727 * C14467)) / C13606;
    const double C14798 = C14338 + C14796;
    const double C14375 = C14364 + C14373;
    const double C14682 = C14364 + C14680;
    const double C14835 = C14326 * C14736;
    const double C14846 = C14352 * C14736;
    const double C3530 =
        (2 * C14326 * C14366 + C14326 * (C14366 + C14736 * C14404)) / C13606;
    const double C3904 = (C14352 * (C14366 + C14736 * C14404) +
                          (C14278 + C14300 * C14404) * be) /
                         C13606;
    const double C14813 = C14808 + C14299;
    const double C14868 = C14352 * C14865;
    const double C14400 = C14389 + C14398;
    const double C14668 = C14663 + C14303;
    const double C14731 = C14326 * C14729;
    const double C6092 =
        (2 * C14352 * C14391 + C14352 * (C14391 + C14729 * C14467)) / C13606;
    const double C14784 = C14389 + C14783;
    const double C14414 = C14413 * C13609;
    const double C14451 = C14440 + C14449;
    const double C14691 = C14440 + C14689;
    const double C14836 = C14326 * C14740;
    const double C14848 = C14352 * C14740;
    const double C3676 =
        (2 * C14326 * C14442 + C14326 * (C14442 + C14740 * C14404)) / C13606;
    const double C4110 = (C14352 * (C14442 + C14740 * C14404) +
                          (C14278 + C14300 * C14404) * ae) /
                         C13606;
    const double C14816 = C14811 + C14303;
    const double C14869 = C14352 * C14867;
    const double C14477 = C14476 * C13609;
    const double C85 = 3 * (C14260 + C14272 * C14261) +
                       C14257 * (2 * C14278 + C14257 * C14307);
    const double C396 = C14260 + C14272 * C14261 + C14307 * C14404;
    const double C843 = C14260 + C14272 * C14261 + C14307 * C14467;
    const double C1292 = C14326 * (2 * C14278 + C14257 * C14307);
    const double C1620 = C14352 * (2 * C14278 + C14257 * C14307);
    const double C1964 = C14352 * C14326 * C14307;
    const double C5524 = C14326 * C14278 + C14728 * C14467;
    const double C2801 = 3 * (C14260 + C14272 * C14404) +
                         C14326 * (2 * C14653 + C14326 * C14667);
    const double C3058 = C14260 + C14272 * C14404 + C14667 * C14467;
    const double C4248 = C14352 * (2 * C14653 + C14326 * C14667);
    const double C3281 =
        (C14423 + be * C14352 * C14389 + C14352 * (C14392 + C14352 * C14426) +
         ae * (C14678 + C14352 * (C14352 * C14326 * C14371 + C14666) +
               C14352 * C14661 * be) +
         C14326 *
             (ae * (C14364 + C14352 * (C14352 * C14371 + C14299) +
                    C14352 * C14293 * be) +
              C14326 * (C14426 + be * C14352 * C14396 +
                        C14352 * (be * C14396 + C14352 * std::pow(C14255, 6) *
                                                    bs[6] * C14420)))) /
        C13611;
    const double C5257 = 3 * (C14260 + C14272 * C14467) +
                         C14352 * (2 * C14801 + C14352 * C14815);
    const double C14348 = C14341 + C14346;
    const double C14640 = C14292 + C14638;
    const double C14399 = C14392 + C14397;
    const double C14649 = C14291 + C14647;
    const double C5346 =
        (3 * (C14388 + C14395 * C14467) +
         C14352 * (2 * C14756 + C14352 * (C14395 + std::pow(C14255, 6) * bs[6] *
                                                       C14383 * C14467))) /
        C13611;
    const double C14374 = C14367 + C14372;
    const double C14774 = C14292 + C14772;
    const double C6383 =
        (2 * (be * C14637 + C14352 * C14854) + be * (C14637 + C14855 * C14467) +
         C14352 *
             (C14854 + be * C14352 * C14855 +
              C14352 * (be * C14855 + C14352 * C14326 * std::pow(C14255, 6) *
                                          bs[6] * C14358))) /
        C13611;
    const double C14681 = C14367 + C14679;
    const double C3641 =
        (2 * (ae * C14366 + C14326 * C14735) + ae * (C14366 + C14736 * C14404) +
         C14326 *
             (C14735 + ae * C14326 * C14736 +
              C14326 * (ae * C14736 + C14326 * C14257 * std::pow(C14255, 6) *
                                          bs[6] * C14420))) /
        C13611;
    const double C4059 =
        (be * C14391 + C14352 * C14735 +
         ae * (C14352 * C14326 * C14736 + C14728 * be) +
         C14326 *
             (ae * (C14352 * C14736 + C14306) +
              C14326 * (be * C14729 + C14352 * C14257 * std::pow(C14255, 6) *
                                          bs[6] * C14420))) /
        C13611;
    const double C5785 =
        (ae * (C14366 + C14352 * (C14352 * C14736 + C14306) +
               C14352 * C14300 * be) +
         C14326 *
             (C14735 + be * C14352 * C14729 +
              C14352 * (be * C14729 + C14352 * C14257 * std::pow(C14255, 6) *
                                          bs[6] * C14420))) /
        C13611;
    const double C6163 =
        (2 * (be * C14391 + C14352 * C14735) + be * (C14391 + C14729 * C14467) +
         C14352 *
             (C14735 + be * C14352 * C14729 +
              C14352 * (be * C14729 + C14352 * C14257 * std::pow(C14255, 6) *
                                          bs[6] * C14420))) /
        C13611;
    const double C14761 = C14392 + C14760;
    const double C14450 = C14443 + C14448;
    const double C14790 = C14291 + C14788;
    const double C6525 =
        (2 * (ae * C14646 + C14352 * C14860) + ae * (C14646 + C14861 * C14467) +
         C14352 *
             (C14860 + ae * C14352 * C14861 +
              C14352 * (ae * C14861 + C14352 * C14326 * std::pow(C14255, 6) *
                                          bs[6] * C14434))) /
        C13611;
    const double C14690 = C14443 + C14688;
    const double C3712 =
        (2 * (be * C14442 + C14326 * C14739) + be * (C14442 + C14740 * C14404) +
         C14326 *
             (C14739 + be * C14326 * C14740 +
              C14326 * (be * C14740 + C14326 * C14257 * std::pow(C14255, 6) *
                                          bs[6] * C14457))) /
        C13611;
    const double C6234 =
        (2 * (ae * C14340 + C14352 * C14739) + ae * (C14340 + C14727 * C14467) +
         C14352 *
             (C14739 + ae * C14352 * C14727 +
              C14352 * (ae * C14727 + C14352 * C14257 * std::pow(C14255, 6) *
                                          bs[6] * C14457))) /
        C13611;
    const double C14797 = C14341 + C14795;
    const double C13647 = C13642 + 0;
    const double C13684 = C13681 + C13667;
    const double C13646 = C13641 / C13612;
    const double C13632 = C13617 - C13628;
    const double C13631 = C13604 * C13626;
    const double C389 =
        ((-C13626 / C13606) / C13612 - (0 * be) / C13606) / C13612 -
        (0 * be) / C13606;
    const double C2798 = -C13626 / C13606;
    const double C6962 = (-C13626 / C13606) / C13612 - (0 * be) / C13606;
    const double C13674 = C13668 / C13606;
    const double C15129 = C15128 / C13611;
    const double C15465 = 2 * C15432;
    const double C15137 = C15136 / C13606;
    const double C15469 = C15436 / C13618;
    const double C15487 = C15430 - C15464;
    const double C6954 = -C15464;
    const double C15501 = C15486 + C15126;
    const double C13767 = C13733 * C13766;
    const double C2500 =
        ((-C13766 / C13606) / C13612 - (0 * be) / C13606) / C13612 -
        (0 * be) / C13606;
    const double C6679 = (-C13766 / C13606) / C13612 - (0 * be) / C13606;
    const double C13889 = C13885 - C13879;
    const double C13944 = C13936 / C13606;
    const double C15220 = C15219 / C13611;
    const double C453 =
        (((0 - (C13733 * C13756) / C13606) * ae) / C13606 - (0 * be) / C13618) /
            C13612 +
        ((C13733 * (((C15167 - (C13733 * 2 * C13758) / C13606) * ae) / C13606 -
                    C13756 / C13618) +
          C15446) *
         ae) /
            C13606 +
        (0 * ae) / C13606 - C13758 / C13611;
    const double C15471 = 2 * C15442;
    const double C15227 = C15226 / C13606;
    const double C15480 = C15452 / C13618;
    const double C15495 = C15446 - C15477;
    const double C6634 = -C15477;
    const double C15504 = C15491 + C15216;
    const double C13793 = C13736 * C13792;
    const double C4655 =
        ((-C13792 / C13606) / C13612 - (0 * be) / C13606) / C13612 -
        (0 * be) / C13606;
    const double C9059 = (-C13792 / C13606) / C13612 - (0 * be) / C13606;
    const double C14039 = C14035 - C14029;
    const double C14094 = C14086 / C13606;
    const double C15260 = C15259 / C13611;
    const double C950 =
        (((0 - (C13736 * C13782) / C13606) * ae) / C13606 - (0 * be) / C13618) /
            C13612 +
        ((C13736 * (((C15178 - (C13736 * 2 * C13784) / C13606) * ae) / C13606 -
                    C13782 / C13618) +
          C15447) *
         ae) /
            C13606 +
        (0 * ae) / C13606 - C13784 / C13611;
    const double C15474 = 2 * C15444;
    const double C15267 = C15266 / C13606;
    const double C15485 = C15459 / C13618;
    const double C15498 = C15447 - C15482;
    const double C8988 = -C15482;
    const double C15505 = C15493 + C15256;
    const double C13909 = C13904 + 0;
    const double C13954 = C13951 + C13935;
    const double C14059 = C14054 + 0;
    const double C14104 = C14101 + C14085;
    const double C13912 = C13908 / C13612;
    const double C14062 = C14058 / C13612;
    const double C93 = (2 * (C14257 * C14270 + C14260 * ae) +
                        C14257 * (C14270 + C14257 * C14289 + C14278 * ae) +
                        (C14260 + C14272 * C14261) * ae) /
                       C13606;
    const double C402 =
        (C14326 * (C14270 + C14257 * C14289 + C14278 * ae)) / C13606;
    const double C406 =
        (C14257 * C14270 + C14260 * ae + C14289 * C14404) / C13606;
    const double C849 =
        (C14352 * (C14270 + C14257 * C14289 + C14278 * ae)) / C13606;
    const double C853 =
        (C14257 * C14270 + C14260 * ae + C14289 * C14467) / C13606;
    const double C1968 = (C14352 * C14326 * C14289) / C13606;
    const double C2887 = (2 * (C14326 * C14384 + C14260 * ae) +
                          C14326 * (C14384 + C14326 * C14656 + C14653 * ae) +
                          (C14260 + C14272 * C14404) * ae) /
                         C13606;
    const double C3194 =
        (C14352 * (C14384 + C14326 * C14656 + C14653 * ae)) / C13606;
    const double C3195 =
        (C14326 * C14384 + C14260 * ae + C14656 * C14467) / C13606;
    const double C5417 = (2 * (C14352 * C14435 + C14260 * ae) +
                          C14352 * (C14435 + C14352 * C14804 + C14801 * ae) +
                          (C14260 + C14272 * C14467) * ae) /
                         C13606;
    const double C92 = (2 * (C14257 * C14269 + C14260 * be) +
                        C14257 * (C14269 + C14257 * C14288 + C14278 * be) +
                        (C14260 + C14272 * C14261) * be) /
                       C13606;
    const double C401 =
        (C14326 * (C14269 + C14257 * C14288 + C14278 * be)) / C13606;
    const double C405 =
        (C14257 * C14269 + C14260 * be + C14288 * C14404) / C13606;
    const double C848 =
        (C14352 * (C14269 + C14257 * C14288 + C14278 * be)) / C13606;
    const double C852 =
        (C14257 * C14269 + C14260 * be + C14288 * C14467) / C13606;
    const double C1967 = (C14352 * C14326 * C14288) / C13606;
    const double C2835 = (2 * (C14326 * C14333 + C14260 * be) +
                          C14326 * (C14333 + C14326 * C14655 + C14653 * be) +
                          (C14260 + C14272 * C14404) * be) /
                         C13606;
    const double C3106 =
        (C14352 * (C14333 + C14326 * C14655 + C14653 * be)) / C13606;
    const double C3107 =
        (C14326 * C14333 + C14260 * be + C14655 * C14467) / C13606;
    const double C5317 = (2 * (C14352 * C14359 + C14260 * be) +
                          C14352 * (C14359 + C14352 * C14803 + C14801 * be) +
                          (C14260 + C14272 * C14467) * be) /
                         C13606;
    const double C99 =
        (2 * (ae * C14269 + be * C14270 + C14257 * C14287) +
         ae * (C14269 + C14257 * C14288 + C14278 * be) +
         be * (C14270 + C14257 * C14289 + C14278 * ae) +
         C14257 * (C14287 + ae * C14288 + be * C14289 +
                   C14257 * (ae * C14282 + be * C14283 +
                             C14257 *
                                 (C14273 * C14274 +
                                  C14261 * bs[5] * std::pow(C14263, 5)) *
                                 C13609))) /
        C13611;
    const double C410 = (ae * C14326 * C14269 + be * C14326 * C14270 +
                         C14257 * C14326 * C14287) /
                        C13611;
    const double C412 =
        ((C14260 + C14261 * C14262 * C14266) * C13609 + C14287 * C14404) /
        C13611;
    const double C857 = (ae * C14352 * C14269 + be * C14352 * C14270 +
                         C14257 * C14352 * C14287) /
                        C13611;
    const double C859 =
        ((C14260 + C14261 * C14262 * C14266) * C13609 + C14287 * C14467) /
        C13611;
    const double C1971 = (C14352 * C14326 * C14287) / C13611;
    const double C225 =
        (2 * C14257 * C14409 +
         C14257 *
             (C14409 + (C14293 + C14404 * C14294 * C14295) * C13609 * C14261)) /
        C13611;
    const double C610 =
        ((C14260 + C14404 * C14262 * C14266) * C13609 +
         ae * (C14326 * C14333 + C14260 * be) +
         be * (C14326 * C14384 + C14260 * ae) +
         C14326 * (ae * C14333 + be * C14384 + C14326 * C14409)) /
        C13611;
    const double C611 = (ae * C14257 * C14333 + be * C14257 * C14384 +
                         C14326 * C14257 * C14409) /
                        C13611;
    const double C1054 = (C14352 * C14257 * C14409) / C13611;
    const double C1056 =
        ((C14260 + C14404 * C14262 * C14266) * C13609 + C14409 * C14467) /
        C13611;
    const double C2192 = (ae * C14352 * C14333 + be * C14352 * C14384 +
                          C14326 * C14352 * C14409) /
                         C13611;
    const double C339 =
        (2 * C14257 * C14472 +
         C14257 *
             (C14472 + (C14293 + C14467 * C14294 * C14295) * C13609 * C14261)) /
        C13611;
    const double C792 =
        ((C14260 + C14467 * C14262 * C14266) * C13609 + C14472 * C14404) /
        C13611;
    const double C793 = (C14326 * C14257 * C14472) / C13611;
    const double C1239 =
        ((C14260 + C14467 * C14262 * C14266) * C13609 +
         ae * (C14352 * C14359 + C14260 * be) +
         be * (C14352 * C14435 + C14260 * ae) +
         C14352 * (ae * C14359 + be * C14435 + C14352 * C14472)) /
        C13611;
    const double C1240 = (ae * C14257 * C14359 + be * C14257 * C14435 +
                          C14352 * C14257 * C14472) /
                         C13611;
    const double C2407 = (ae * C14326 * C14359 + be * C14326 * C14435 +
                          C14352 * C14326 * C14472) /
                         C13611;
    const double C14318 = C14257 * C14315;
    const double C14827 = C14326 * C14315;
    const double C3454 =
        (2 * C14326 * C14289 + C14326 * (C14289 + C14315 * C14404)) / C13606;
    const double C3800 = (C14352 * (C14289 + C14315 * C14404)) / C13606;
    const double C5980 =
        (2 * C14352 * C14289 + C14352 * (C14289 + C14315 * C14467)) / C13606;
    const double C3155 =
        (C14363 + C14370 * C14404 + be * C14352 * C14641 +
         C14352 *
             (be * C14641 + C14352 * (C14370 + std::pow(C14255, 6) * bs[6] *
                                                   C14358 * C14404))) /
        C13611;
    const double C4323 =
        (be * (2 * C14637 + C14326 * C14641) +
         C14352 * (2 * C14326 * C14370 +
                   C14326 * (C14370 +
                             std::pow(C14255, 6) * bs[6] * C14358 * C14404))) /
        C13611;
    const double C2805 = (3 * (C14270 + C14283 * C14404) +
                          C14326 * (2 * C14637 + C14326 * C14641)) /
                         C13606;
    const double C3064 = (C14270 + C14283 * C14404 + C14641 * C14467) / C13606;
    const double C4250 = (C14352 * (2 * C14637 + C14326 * C14641)) / C13606;
    const double C5261 = (3 * (C14270 + C14283 * C14467) +
                          C14352 * (2 * C14771 + C14352 * C14775)) /
                         C13606;
    const double C14317 = C14257 * C14314;
    const double C14832 = C14326 * C14314;
    const double C3453 =
        (2 * C14326 * C14288 + C14326 * (C14288 + C14314 * C14404)) / C13606;
    const double C3799 = (C14352 * (C14288 + C14314 * C14404)) / C13606;
    const double C5979 =
        (2 * C14352 * C14288 + C14352 * (C14288 + C14314 * C14467)) / C13606;
    const double C3325 =
        (C14439 + C14446 * C14404 + ae * C14352 * C14650 +
         C14352 *
             (ae * C14650 + C14352 * (C14446 + std::pow(C14255, 6) * bs[6] *
                                                   C14434 * C14404))) /
        C13611;
    const double C4359 =
        (2 * (ae * C14352 * C14282 + C14326 * C14756) + ae * C14352 * C14650 +
         C14326 * (C14756 + ae * C14352 * C14326 * C14305 +
                   C14326 * (ae * C14352 * C14305 + C14326 * C14352 *
                                                        std::pow(C14255, 6) *
                                                        bs[6] * C14383))) /
        C13611;
    const double C4465 =
        (ae * (2 * C14646 + C14326 * C14650) +
         C14352 * (2 * C14326 * C14446 +
                   C14326 * (C14446 +
                             std::pow(C14255, 6) * bs[6] * C14434 * C14404))) /
        C13611;
    const double C2804 = (3 * (C14269 + C14282 * C14404) +
                          C14326 * (2 * C14646 + C14326 * C14650)) /
                         C13606;
    const double C3063 = (C14269 + C14282 * C14404 + C14650 * C14467) / C13606;
    const double C4249 = (C14352 * (2 * C14646 + C14326 * C14650)) / C13606;
    const double C6419 =
        (ae * (2 * C14787 + C14352 * C14791) +
         C14326 * (2 * C14756 + C14352 * (C14395 + std::pow(C14255, 6) * bs[6] *
                                                       C14383 * C14467))) /
        C13611;
    const double C5260 = (3 * (C14269 + C14282 * C14467) +
                          C14352 * (2 * C14787 + C14352 * C14791)) /
                         C13606;
    const double C14316 = C14257 * C14313;
    const double C14587 = C14326 * C14313;
    const double C14597 = C14352 * C14313;
    const double C411 =
        (C14326 * C14287 + ae * C14326 * C14288 + be * C14326 * C14289 +
         C14257 * (ae * C14326 * C14282 + be * C14326 * C14283 +
                   C14257 * C14326 * C14313)) /
        C13611;
    const double C413 =
        (ae * (C14269 + C14282 * C14404) + be * (C14270 + C14283 * C14404) +
         C14257 * (C14287 + C14313 * C14404)) /
        C13611;
    const double C414 =
        (C14287 + C14313 * C14404 + ae * (C14288 + C14314 * C14404) +
         be * (C14289 + C14315 * C14404) +
         C14257 * (ae * (C14282 + C14305 * C14404) +
                   be * (C14283 + C14308 * C14404) +
                   C14257 * (C14313 + (C14294 * C14295 +
                                       C14261 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14404))) /
        C13611;
    const double C858 =
        (C14352 * C14287 + ae * C14352 * C14288 + be * C14352 * C14289 +
         C14257 * (ae * C14352 * C14282 + be * C14352 * C14283 +
                   C14257 * C14352 * C14313)) /
        C13611;
    const double C860 =
        (ae * (C14269 + C14282 * C14467) + be * (C14270 + C14283 * C14467) +
         C14257 * (C14287 + C14313 * C14467)) /
        C13611;
    const double C861 =
        (C14287 + C14313 * C14467 + ae * (C14288 + C14314 * C14467) +
         be * (C14289 + C14315 * C14467) +
         C14257 * (ae * (C14282 + C14305 * C14467) +
                   be * (C14283 + C14308 * C14467) +
                   C14257 * (C14313 + (C14294 * C14295 +
                                       C14261 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14467))) /
        C13611;
    const double C2806 =
        (2 * C14326 * C14287 + C14326 * (C14287 + C14313 * C14404)) / C13611;
    const double C3066 = (C14352 * (C14287 + C14313 * C14404)) / C13611;
    const double C3067 =
        (C14287 + C14313 * C14404 +
         (C14313 + (C14294 * C14295 + C14261 * bs[6] * std::pow(C14255, 6)) *
                       C13609 * C14404) *
             C14467) /
        C13611;
    const double C3801 = (ae * C14352 * C14650 + be * C14352 * C14641 +
                          C14257 * C14352 *
                              (C14313 + (C14294 * C14295 +
                                         C14261 * bs[6] * std::pow(C14255, 6)) *
                                            C13609 * C14404)) /
                         C13611;
    const double C5262 =
        (2 * C14352 * C14287 + C14352 * (C14287 + C14313 * C14467)) / C13611;
    const double C1196 =
        (C14460 + C14463 * C14261 + ae * C14352 * C14349 +
         C14352 *
             (ae * C14349 + C14352 * (C14463 + std::pow(C14255, 6) * bs[6] *
                                                   C14457 * C14261))) /
        C13611;
    const double C1874 =
        (ae * (2 * C14340 + C14257 * C14349) +
         C14352 * (2 * C14257 * C14463 +
                   C14257 * (C14463 +
                             std::pow(C14255, 6) * bs[6] * C14457 * C14261))) /
        C13611;
    const double C128 = (3 * (C14333 + C14338 * C14261) +
                         C14257 * (2 * C14340 + C14257 * C14349)) /
                        C13606;
    const double C461 =
        (C14333 + C14338 * C14261 + C14326 * (C14326 * C14349 + C14307 * be) +
         C14326 * C14307 * be) /
        C13606;
    const double C905 = (C14333 + C14338 * C14261 + C14349 * C14467) / C13606;
    const double C1332 = (C14326 * (2 * C14340 + C14257 * C14349) +
                          (2 * C14278 + C14257 * C14307) * be) /
                         C13606;
    const double C1658 = (C14352 * (2 * C14340 + C14257 * C14349)) / C13606;
    const double C2026 = (C14352 * (C14326 * C14349 + C14307 * be)) / C13606;
    const double C14670 = C14326 * C14665;
    const double C6346 =
        (2 * C14352 * C14655 + C14352 * (C14655 + C14665 * C14467)) / C13606;
    const double C14732 = C14730 + C14306;
    const double C5287 = (3 * (C14333 + C14338 * C14467) +
                          C14352 * (2 * C14794 + C14352 * C14798)) /
                         C13606;
    const double C658 =
        (C14423 + C14426 * C14261 + ae * C14326 * C14375 +
         C14326 *
             (ae * C14375 + C14326 * (C14426 + std::pow(C14255, 6) * bs[6] *
                                                   C14420 * C14261))) /
        C13611;
    const double C1477 =
        (ae * (2 * C14366 + C14257 * C14375) +
         C14326 * (2 * C14257 * C14426 +
                   C14257 * (C14426 +
                             std::pow(C14255, 6) * bs[6] * C14420 * C14261))) /
        C13611;
    const double C161 = (3 * (C14359 + C14364 * C14261) +
                         C14257 * (2 * C14366 + C14257 * C14375)) /
                        C13606;
    const double C511 = (C14359 + C14364 * C14261 + C14375 * C14404) / C13606;
    const double C958 =
        (C14359 + C14364 * C14261 + C14352 * (C14352 * C14375 + C14307 * be) +
         C14352 * C14307 * be) /
        C13606;
    const double C1368 = (C14326 * (2 * C14366 + C14257 * C14375)) / C13606;
    const double C1696 = (C14352 * (2 * C14366 + C14257 * C14375) +
                          (2 * C14278 + C14257 * C14307) * be) /
                         C13606;
    const double C2082 =
        (C14352 * C14326 * C14375 + C14326 * C14307 * be) / C13606;
    const double C2862 = (3 * (C14359 + C14364 * C14404) +
                          C14326 * (2 * C14678 + C14326 * C14682)) /
                         C13606;
    const double C3152 =
        (C14359 + C14364 * C14404 + C14352 * (C14352 * C14682 + C14667 * be) +
         C14352 * C14667 * be) /
        C13606;
    const double C4322 = (C14352 * (2 * C14678 + C14326 * C14682) +
                          (2 * C14653 + C14326 * C14667) * be) /
                         C13606;
    const double C5630 =
        (C14326 * C14366 + C14352 * (C14352 * C14835 + C14728 * be) +
         C14352 * C14728 * be) /
        C13606;
    const double C14849 = C14846 + C14306;
    const double C14818 = C14352 * C14813;
    const double C14870 = C14868 + C14666;
    const double C1102 =
        (C14423 + C14426 * C14261 + be * C14352 * C14400 +
         C14352 *
             (be * C14400 + C14352 * (C14426 + std::pow(C14255, 6) * bs[6] *
                                                   C14420 * C14261))) /
        C13611;
    const double C1803 =
        (be * (2 * C14391 + C14257 * C14400) +
         C14352 * (2 * C14257 * C14426 +
                   C14257 * (C14426 +
                             std::pow(C14255, 6) * bs[6] * C14420 * C14261))) /
        C13611;
    const double C2247 =
        (ae * (C14352 * C14375 + C14307 * be) +
         C14326 *
             (be * C14400 + C14352 * (C14426 + std::pow(C14255, 6) * bs[6] *
                                                   C14420 * C14261))) /
        C13611;
    const double C193 = (3 * (C14384 + C14389 * C14261) +
                         C14257 * (2 * C14391 + C14257 * C14400)) /
                        C13606;
    const double C561 =
        (C14384 + C14389 * C14261 + C14326 * (C14326 * C14400 + C14307 * ae) +
         C14326 * C14307 * ae) /
        C13606;
    const double C1008 = (C14384 + C14389 * C14261 + C14400 * C14467) / C13606;
    const double C1404 = (C14326 * (2 * C14391 + C14257 * C14400) +
                          (2 * C14278 + C14257 * C14307) * ae) /
                         C13606;
    const double C1732 = (C14352 * (2 * C14391 + C14257 * C14400)) / C13606;
    const double C2138 = (C14352 * (C14326 * C14400 + C14307 * ae)) / C13606;
    const double C14671 = C14326 * C14668;
    const double C6418 =
        (2 * C14352 * C14656 + C14352 * (C14656 + C14668 * C14467)) / C13606;
    const double C14733 = C14731 + C14309;
    const double C5344 = (3 * (C14384 + C14389 * C14467) +
                          C14352 * (2 * C14782 + C14352 * C14784)) /
                         C13606;
    const double C14659 = C14326 * C14414;
    const double C14726 = C14257 * C14414;
    const double C14758 = C14352 * C14414;
    const double C226 =
        (3 * (C14409 + C14414 * C14261) +
         C14257 * (2 * C14257 * C14414 +
                   C14257 * (C14414 + (C14294 * C14295 +
                                       C14404 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14261))) /
        C13611;
    const double C612 =
        (C14257 * C14409 + ae * (C14326 * C14340 + C14278 * be) +
         be * (C14326 * C14391 + C14278 * ae) +
         C14326 * (ae * C14340 + be * C14391 + C14326 * C14257 * C14414)) /
        C13611;
    const double C613 =
        (ae * (C14333 + C14338 * C14261) + be * (C14384 + C14389 * C14261) +
         C14326 * (C14409 + C14414 * C14261)) /
        C13611;
    const double C614 =
        (C14409 + C14414 * C14261 + ae * (C14326 * C14349 + C14307 * be) +
         be * (C14326 * C14400 + C14307 * ae) +
         C14326 * (ae * C14349 + be * C14400 +
                   C14326 * (C14414 + (C14294 * C14295 +
                                       C14404 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14261))) /
        C13611;
    const double C1055 = (C14352 * (C14409 + C14414 * C14261)) / C13611;
    const double C1057 = (C14257 * C14409 + C14257 * C14414 * C14467) / C13611;
    const double C1058 =
        (C14409 + C14414 * C14261 +
         (C14414 + (C14294 * C14295 + C14404 * bs[6] * std::pow(C14255, 6)) *
                       C13609 * C14261) *
             C14467) /
        C13611;
    const double C1442 =
        (ae * (2 * C14340 + C14257 * C14349) +
         be * (2 * C14391 + C14257 * C14400) +
         C14326 * (2 * C14257 * C14414 +
                   C14257 * (C14414 + (C14294 * C14295 +
                                       C14404 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14261))) /
        C13611;
    const double C1768 =
        (C14352 * (2 * C14257 * C14414 +
                   C14257 * (C14414 + (C14294 * C14295 +
                                       C14404 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14261))) /
        C13611;
    const double C2193 = (ae * C14352 * C14340 + be * C14352 * C14391 +
                          C14326 * C14352 * C14257 * C14414) /
                         C13611;
    const double C2194 = (ae * C14352 * C14349 + be * C14352 * C14400 +
                          C14326 * C14352 *
                              (C14414 + (C14294 * C14295 +
                                         C14404 * bs[6] * std::pow(C14255, 6)) *
                                            C13609 * C14261)) /
                         C13611;
    const double C2918 =
        (2 * (ae * C14333 + be * C14384 + C14326 * C14409) +
         ae * (C14333 + C14326 * C14655 + C14653 * be) +
         be * (C14384 + C14326 * C14656 + C14653 * ae) +
         C14326 * (C14409 + ae * C14655 + be * C14656 +
                   C14326 * (C14341 + C14392 + C14326 * C14414))) /
        C13611;
    const double C3238 =
        (C14352 * C14409 + ae * C14352 * C14655 + be * C14352 * C14656 +
         C14326 * (ae * C14352 * C14338 + be * C14352 * C14389 +
                   C14326 * C14352 * C14414)) /
        C13611;
    const double C3239 =
        (ae * (C14333 + C14338 * C14467) + be * (C14384 + C14389 * C14467) +
         C14326 * (C14409 + C14414 * C14467)) /
        C13611;
    const double C3240 =
        (C14409 + C14414 * C14467 + ae * (C14655 + C14665 * C14467) +
         be * (C14656 + C14668 * C14467) +
         C14326 * (ae * (C14338 + C14345 * C14467) +
                   be * (C14389 + C14396 * C14467) +
                   C14326 * (C14414 + (C14294 * C14295 +
                                       C14404 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14467))) /
        C13611;
    const double C5369 =
        (2 * C14352 * C14409 + C14352 * (C14409 + C14414 * C14467)) / C13611;
    const double C752 =
        (C14460 + C14463 * C14261 + be * C14326 * C14451 +
         C14326 *
             (be * C14451 + C14326 * (C14463 + std::pow(C14255, 6) * bs[6] *
                                                   C14457 * C14261))) /
        C13611;
    const double C1548 =
        (be * (2 * C14442 + C14257 * C14451) +
         C14326 * (2 * C14257 * C14463 +
                   C14257 * (C14463 +
                             std::pow(C14255, 6) * bs[6] * C14457 * C14261))) /
        C13611;
    const double C2356 =
        (ae * (C14326 * C14349 + C14307 * be) +
         C14352 *
             (be * C14451 + C14326 * (C14463 + std::pow(C14255, 6) * bs[6] *
                                                   C14457 * C14261))) /
        C13611;
    const double C280 = (3 * (C14435 + C14440 * C14261) +
                         C14257 * (2 * C14442 + C14257 * C14451)) /
                        C13606;
    const double C702 = (C14435 + C14440 * C14261 + C14451 * C14404) / C13606;
    const double C1146 =
        (C14435 + C14440 * C14261 + C14352 * (C14352 * C14451 + C14307 * ae) +
         C14352 * C14307 * ae) /
        C13606;
    const double C1512 = (C14326 * (2 * C14442 + C14257 * C14451)) / C13606;
    const double C1838 = (C14352 * (2 * C14442 + C14257 * C14451) +
                          (2 * C14278 + C14257 * C14307) * ae) /
                         C13606;
    const double C2300 =
        (C14352 * C14326 * C14451 + C14326 * C14307 * ae) / C13606;
    const double C2967 = (3 * (C14435 + C14440 * C14404) +
                          C14326 * (2 * C14687 + C14326 * C14691)) /
                         C13606;
    const double C3322 =
        (C14435 + C14440 * C14404 + C14352 * (C14352 * C14691 + C14667 * ae) +
         C14352 * C14667 * ae) /
        C13606;
    const double C4464 = (C14352 * (2 * C14687 + C14326 * C14691) +
                          (2 * C14653 + C14326 * C14667) * ae) /
                         C13606;
    const double C5836 =
        (C14326 * C14442 + C14352 * (C14352 * C14836 + C14728 * ae) +
         C14352 * C14728 * ae) /
        C13606;
    const double C14850 = C14848 + C14309;
    const double C14819 = C14352 * C14816;
    const double C14871 = C14869 + C14669;
    const double C14742 = C14257 * C14477;
    const double C14807 = C14352 * C14477;
    const double C14864 = C14326 * C14477;
    const double C340 =
        (3 * (C14472 + C14477 * C14261) +
         C14257 * (2 * C14257 * C14477 +
                   C14257 * (C14477 + (C14294 * C14295 +
                                       C14467 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14261))) /
        C13611;
    const double C794 = (C14257 * C14472 + C14257 * C14477 * C14404) / C13611;
    const double C795 = (C14326 * (C14472 + C14477 * C14261)) / C13611;
    const double C796 =
        (C14472 + C14477 * C14261 +
         (C14477 + (C14294 * C14295 + C14467 * bs[6] * std::pow(C14255, 6)) *
                       C13609 * C14261) *
             C14404) /
        C13611;
    const double C1241 =
        (C14257 * C14472 + ae * (C14352 * C14366 + C14278 * be) +
         be * (C14352 * C14442 + C14278 * ae) +
         C14352 * (ae * C14366 + be * C14442 + C14352 * C14257 * C14477)) /
        C13611;
    const double C1242 =
        (ae * (C14359 + C14364 * C14261) + be * (C14435 + C14440 * C14261) +
         C14352 * (C14472 + C14477 * C14261)) /
        C13611;
    const double C1243 =
        (C14472 + C14477 * C14261 + ae * (C14352 * C14375 + C14307 * be) +
         be * (C14352 * C14451 + C14307 * ae) +
         C14352 * (ae * C14375 + be * C14451 +
                   C14352 * (C14477 + (C14294 * C14295 +
                                       C14467 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14261))) /
        C13611;
    const double C1583 =
        (C14326 * (2 * C14257 * C14477 +
                   C14257 * (C14477 + (C14294 * C14295 +
                                       C14467 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14261))) /
        C13611;
    const double C1911 =
        (ae * (2 * C14366 + C14257 * C14375) +
         be * (2 * C14442 + C14257 * C14451) +
         C14352 * (2 * C14257 * C14477 +
                   C14257 * (C14477 + (C14294 * C14295 +
                                       C14467 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14261))) /
        C13611;
    const double C2408 = (ae * C14326 * C14366 + be * C14326 * C14442 +
                          C14352 * C14326 * C14257 * C14477) /
                         C13611;
    const double C2409 = (ae * C14326 * C14375 + be * C14326 * C14451 +
                          C14352 * C14326 *
                              (C14477 + (C14294 * C14295 +
                                         C14467 * bs[6] * std::pow(C14255, 6)) *
                                            C13609 * C14261)) /
                         C13611;
    const double C3016 =
        (2 * C14326 * C14472 + C14326 * (C14472 + C14477 * C14404)) / C13611;
    const double C3017 =
        (3 * (C14472 + C14477 * C14404) +
         C14326 * (2 * C14326 * C14477 +
                   C14326 * (C14477 + (C14294 * C14295 +
                                       C14467 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14404))) /
        C13611;
    const double C3405 =
        (C14326 * C14472 + ae * (C14352 * C14678 + C14653 * be) +
         be * (C14352 * C14687 + C14653 * ae) +
         C14352 * (ae * C14678 + be * C14687 + C14352 * C14326 * C14477)) /
        C13611;
    const double C3406 =
        (ae * (C14359 + C14364 * C14404) + be * (C14435 + C14440 * C14404) +
         C14352 * (C14472 + C14477 * C14404)) /
        C13611;
    const double C3407 =
        (C14472 + C14477 * C14404 + ae * (C14352 * C14682 + C14667 * be) +
         be * (C14352 * C14691 + C14667 * ae) +
         C14352 * (ae * C14682 + be * C14691 +
                   C14352 * (C14477 + (C14294 * C14295 +
                                       C14467 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14404))) /
        C13611;
    const double C4535 =
        (ae * (2 * C14678 + C14326 * C14682) +
         be * (2 * C14687 + C14326 * C14691) +
         C14352 * (2 * C14326 * C14477 +
                   C14326 * (C14477 + (C14294 * C14295 +
                                       C14467 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14404))) /
        C13611;
    const double C5472 =
        (2 * (ae * C14359 + be * C14435 + C14352 * C14472) +
         ae * (C14359 + C14352 * C14803 + C14801 * be) +
         be * (C14435 + C14352 * C14804 + C14801 * ae) +
         C14352 * (C14472 + ae * C14803 + be * C14804 +
                   C14352 * (C14367 + C14443 + C14352 * C14477))) /
        C13611;
    const double C133 =
        (3 * (C14337 + ae * C14340 + C14257 * C14348) +
         ae * (2 * C14340 + C14257 * C14349) +
         C14257 *
             (2 * C14348 + ae * C14349 +
              C14257 * (C14344 + ae * C14257 * C14345 +
                        C14257 * (ae * C14345 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14332)))) /
        C13611;
    const double C465 = (ae * C14333 + C14257 * C14337 + be * C14326 * C14289 +
                         C14326 * (be * C14289 + C14326 * C14348)) /
                        C13611;
    const double C466 = (be * (C14270 + C14257 * C14289 + C14278 * ae) +
                         C14326 * (C14337 + ae * C14340 + C14257 * C14348)) /
                        C13611;
    const double C908 =
        (C14352 * (C14337 + ae * C14340 + C14257 * C14348)) / C13611;
    const double C910 =
        (ae * C14333 + C14257 * C14337 + C14348 * C14467) / C13611;
    const double C911 = (C14337 + ae * C14340 + C14257 * C14348 +
                         (C14344 + ae * C14257 * C14345 +
                          C14257 * (ae * C14345 + C14257 * std::pow(C14255, 6) *
                                                      bs[6] * C14332)) *
                             C14467) /
                        C13611;
    const double C1659 =
        (C14352 *
         (2 * C14348 + ae * C14349 +
          C14257 * (C14344 + ae * C14257 * C14345 +
                    C14257 * (ae * C14345 + C14257 * std::pow(C14255, 6) *
                                                bs[6] * C14332)))) /
        C13611;
    const double C2028 = (C14352 * (be * C14289 + C14326 * C14348)) / C13611;
    const double C3495 =
        (2 * (be * C14289 + C14326 * C14348) + be * (C14289 + C14315 * C14404) +
         C14326 *
             (C14348 + be * C14326 * C14315 +
              C14326 * (be * C14315 +
                        C14326 * (ae * C14345 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14332)))) /
        C13611;
    const double C3853 =
        (C14352 *
         (C14348 + be * C14326 * C14315 +
          C14326 * (be * C14315 +
                    C14326 * (ae * C14345 + C14257 * std::pow(C14255, 6) *
                                                bs[6] * C14332)))) /
        C13611;
    const double C5579 =
        (be * C14289 + C14326 * C14348 +
         (be * C14315 + C14326 * (ae * C14345 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14332)) *
             C14467) /
        C13611;
    const double C6017 =
        (2 * C14352 * C14348 +
         C14352 * (C14348 + (ae * C14345 +
                             C14257 * std::pow(C14255, 6) * bs[6] * C14332) *
                                C14467)) /
        C13611;
    const double C2838 =
        (3 * (C14337 + be * C14637 + C14326 * C14640) +
         be * (2 * C14637 + C14326 * C14641) +
         C14326 *
             (2 * C14640 + be * C14641 +
              C14326 * (C14344 + be * C14326 * C14308 +
                        C14326 * (be * C14308 + C14326 * std::pow(C14255, 6) *
                                                    bs[6] * C14332)))) /
        C13611;
    const double C3109 =
        (C14352 * (C14337 + be * C14637 + C14326 * C14640)) / C13611;
    const double C3110 =
        (be * C14270 + C14326 * C14337 + C14640 * C14467) / C13611;
    const double C3111 =
        (C14337 + be * C14637 + C14326 * C14640 +
         (C14344 + be * C14326 * C14308 +
          C14326 *
              (be * C14308 + C14326 * std::pow(C14255, 6) * bs[6] * C14332)) *
             C14467) /
        C13611;
    const double C4287 =
        (C14352 *
         (2 * C14640 + be * C14641 +
          C14326 * (C14344 + be * C14326 * C14308 +
                    C14326 * (be * C14308 + C14326 * std::pow(C14255, 6) *
                                                bs[6] * C14332)))) /
        C13611;
    const double C6347 =
        (2 * C14352 * C14640 +
         C14352 * (C14640 + (be * C14308 +
                             C14326 * std::pow(C14255, 6) * bs[6] * C14332) *
                                C14467)) /
        C13611;
    const double C198 =
        (3 * (C14388 + be * C14391 + C14257 * C14399) +
         be * (2 * C14391 + C14257 * C14400) +
         C14257 *
             (2 * C14399 + be * C14400 +
              C14257 * (C14395 + be * C14257 * C14396 +
                        C14257 * (be * C14396 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14383)))) /
        C13611;
    const double C564 = (ae * (C14269 + C14257 * C14288 + C14278 * be) +
                         C14326 * (C14388 + be * C14391 + C14257 * C14399)) /
                        C13611;
    const double C566 = (be * C14384 + C14257 * C14388 + ae * C14326 * C14288 +
                         C14326 * (ae * C14288 + C14326 * C14399)) /
                        C13611;
    const double C1011 =
        (C14352 * (C14388 + be * C14391 + C14257 * C14399)) / C13611;
    const double C1013 =
        (be * C14384 + C14257 * C14388 + C14399 * C14467) / C13611;
    const double C1014 =
        (C14388 + be * C14391 + C14257 * C14399 +
         (C14395 + be * C14257 * C14396 +
          C14257 *
              (be * C14396 + C14257 * std::pow(C14255, 6) * bs[6] * C14383)) *
             C14467) /
        C13611;
    const double C1733 =
        (C14352 *
         (2 * C14399 + be * C14400 +
          C14257 * (C14395 + be * C14257 * C14396 +
                    C14257 * (be * C14396 + C14257 * std::pow(C14255, 6) *
                                                bs[6] * C14383)))) /
        C13611;
    const double C2140 =
        (ae * C14352 * C14288 + C14326 * C14352 * C14399) / C13611;
    const double C3567 =
        (2 * (ae * C14288 + C14326 * C14399) + ae * (C14288 + C14314 * C14404) +
         C14326 *
             (C14399 + ae * C14326 * C14314 +
              C14326 * (ae * C14314 +
                        C14326 * (be * C14396 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14383)))) /
        C13611;
    const double C3957 =
        (C14352 * C14399 + ae * C14352 * C14326 * C14314 +
         C14326 * (ae * C14352 * C14314 +
                   C14326 * C14352 *
                       (be * C14396 +
                        C14257 * std::pow(C14255, 6) * bs[6] * C14383))) /
        C13611;
    const double C5683 =
        (ae * (C14288 + C14314 * C14467) +
         C14326 * (C14399 + (be * C14396 +
                             C14257 * std::pow(C14255, 6) * bs[6] * C14383) *
                                C14467)) /
        C13611;
    const double C6093 =
        (2 * C14352 * C14399 +
         C14352 * (C14399 + (be * C14396 +
                             C14257 * std::pow(C14255, 6) * bs[6] * C14383) *
                                C14467)) /
        C13611;
    const double C2890 =
        (3 * (C14388 + ae * C14646 + C14326 * C14649) +
         ae * (2 * C14646 + C14326 * C14650) +
         C14326 *
             (2 * C14649 + ae * C14650 +
              C14326 * (C14395 + ae * C14326 * C14305 +
                        C14326 * (ae * C14305 + C14326 * std::pow(C14255, 6) *
                                                    bs[6] * C14383)))) /
        C13611;
    const double C166 =
        (3 * (C14363 + ae * C14366 + C14257 * C14374) +
         ae * (2 * C14366 + C14257 * C14375) +
         C14257 *
             (2 * C14374 + ae * C14375 +
              C14257 * (C14370 + ae * C14257 * C14371 +
                        C14257 * (ae * C14371 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14358)))) /
        C13611;
    const double C514 =
        (C14326 * (C14363 + ae * C14366 + C14257 * C14374)) / C13611;
    const double C516 =
        (ae * C14359 + C14257 * C14363 + C14374 * C14404) / C13611;
    const double C517 = (C14363 + ae * C14366 + C14257 * C14374 +
                         (C14370 + ae * C14257 * C14371 +
                          C14257 * (ae * C14371 + C14257 * std::pow(C14255, 6) *
                                                      bs[6] * C14358)) *
                             C14404) /
                        C13611;
    const double C962 = (ae * C14359 + C14257 * C14363 + be * C14352 * C14289 +
                         C14352 * (be * C14289 + C14352 * C14374)) /
                        C13611;
    const double C963 = (be * (C14270 + C14257 * C14289 + C14278 * ae) +
                         C14352 * (C14363 + ae * C14366 + C14257 * C14374)) /
                        C13611;
    const double C1369 =
        (C14326 *
         (2 * C14374 + ae * C14375 +
          C14257 * (C14370 + ae * C14257 * C14371 +
                    C14257 * (ae * C14371 + C14257 * std::pow(C14255, 6) *
                                                bs[6] * C14358)))) /
        C13611;
    const double C2084 =
        (be * C14326 * C14289 + C14352 * C14326 * C14374) / C13611;
    const double C3531 =
        (2 * C14326 * C14374 +
         C14326 * (C14374 + (ae * C14371 +
                             C14257 * std::pow(C14255, 6) * bs[6] * C14358) *
                                C14404)) /
        C13611;
    const double C3905 =
        (be * (C14289 + C14315 * C14404) +
         C14352 * (C14374 + (ae * C14371 +
                             C14257 * std::pow(C14255, 6) * bs[6] * C14358) *
                                C14404)) /
        C13611;
    const double C6057 =
        (2 * (be * C14289 + C14352 * C14374) + be * (C14289 + C14315 * C14467) +
         C14352 *
             (C14374 + be * C14352 * C14315 +
              C14352 * (be * C14315 +
                        C14352 * (ae * C14371 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14358)))) /
        C13611;
    const double C5320 =
        (3 * (C14363 + be * C14771 + C14352 * C14774) +
         be * (2 * C14771 + C14352 * C14775) +
         C14352 *
             (2 * C14774 + be * C14775 +
              C14352 * (C14370 + be * C14352 * C14308 +
                        C14352 * (be * C14308 + C14352 * std::pow(C14255, 6) *
                                                    bs[6] * C14358)))) /
        C13611;
    const double C2943 =
        (3 * (C14423 + ae * C14678 + C14326 * C14681) +
         ae * (2 * C14678 + C14326 * C14682) +
         C14326 *
             (2 * C14681 + ae * C14682 +
              C14326 * (C14426 + ae * C14326 * C14371 +
                        C14326 * (ae * C14371 + C14326 * std::pow(C14255, 6) *
                                                    bs[6] * C14420)))) /
        C13611;
    const double C4429 =
        (2 * (ae * (C14352 * C14364 + C14277) + C14326 * C14761) +
         ae * (C14352 * C14682 + C14667 * be) +
         C14326 *
             (C14761 + ae * (C14352 * C14326 * C14371 + C14666) +
              C14326 * (ae * (C14352 * C14371 + C14299) +
                        C14326 * (be * C14396 + C14352 * std::pow(C14255, 6) *
                                                    bs[6] * C14420)))) /
        C13611;
    const double C5393 =
        (2 * (be * C14384 + C14352 * C14423) + be * (C14384 + C14389 * C14467) +
         C14352 * (C14423 + be * C14352 * C14389 + C14352 * C14761)) /
        C13611;
    const double C5394 =
        (3 * (C14423 + be * C14782 + C14352 * C14761) +
         be * (2 * C14782 + C14352 * C14784) +
         C14352 *
             (2 * C14761 + be * C14784 +
              C14352 * (C14426 + be * C14352 * C14396 +
                        C14352 * (be * C14396 + C14352 * std::pow(C14255, 6) *
                                                    bs[6] * C14420)))) /
        C13611;
    const double C285 =
        (3 * (C14439 + be * C14442 + C14257 * C14450) +
         be * (2 * C14442 + C14257 * C14451) +
         C14257 *
             (2 * C14450 + be * C14451 +
              C14257 * (C14446 + be * C14257 * C14447 +
                        C14257 * (be * C14447 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14434)))) /
        C13611;
    const double C705 =
        (C14326 * (C14439 + be * C14442 + C14257 * C14450)) / C13611;
    const double C707 =
        (be * C14435 + C14257 * C14439 + C14450 * C14404) / C13611;
    const double C708 = (C14439 + be * C14442 + C14257 * C14450 +
                         (C14446 + be * C14257 * C14447 +
                          C14257 * (be * C14447 + C14257 * std::pow(C14255, 6) *
                                                      bs[6] * C14434)) *
                             C14404) /
                        C13611;
    const double C1149 = (ae * (C14269 + C14257 * C14288 + C14278 * be) +
                          C14352 * (C14439 + be * C14442 + C14257 * C14450)) /
                         C13611;
    const double C1151 = (be * C14435 + C14257 * C14439 + ae * C14352 * C14288 +
                          C14352 * (ae * C14288 + C14352 * C14450)) /
                         C13611;
    const double C1513 =
        (C14326 *
         (2 * C14450 + be * C14451 +
          C14257 * (C14446 + be * C14257 * C14447 +
                    C14257 * (be * C14447 + C14257 * std::pow(C14255, 6) *
                                                bs[6] * C14434)))) /
        C13611;
    const double C2302 =
        (ae * C14326 * C14288 + C14352 * C14326 * C14450) / C13611;
    const double C3677 =
        (2 * C14326 * C14450 +
         C14326 * (C14450 + (be * C14447 +
                             C14257 * std::pow(C14255, 6) * bs[6] * C14434) *
                                C14404)) /
        C13611;
    const double C4111 =
        (ae * (C14288 + C14314 * C14404) +
         C14352 * (C14450 + (be * C14447 +
                             C14257 * std::pow(C14255, 6) * bs[6] * C14434) *
                                C14404)) /
        C13611;
    const double C6199 =
        (2 * (ae * C14288 + C14352 * C14450) + ae * (C14288 + C14314 * C14467) +
         C14352 *
             (C14450 + ae * C14352 * C14314 +
              C14352 * (ae * C14314 +
                        C14352 * (be * C14447 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14434)))) /
        C13611;
    const double C5420 =
        (3 * (C14439 + ae * C14787 + C14352 * C14790) +
         ae * (2 * C14787 + C14352 * C14791) +
         C14352 *
             (2 * C14790 + ae * C14791 +
              C14352 * (C14446 + ae * C14352 * C14305 +
                        C14352 * (ae * C14305 + C14352 * std::pow(C14255, 6) *
                                                    bs[6] * C14434)))) /
        C13611;
    const double C2993 =
        (3 * (C14460 + be * C14687 + C14326 * C14690) +
         be * (2 * C14687 + C14326 * C14691) +
         C14326 *
             (2 * C14690 + be * C14691 +
              C14326 * (C14463 + be * C14326 * C14447 +
                        C14326 * (be * C14447 + C14326 * std::pow(C14255, 6) *
                                                    bs[6] * C14457)))) /
        C13611;
    const double C3364 = (ae * (C14333 + C14326 * C14655 + C14653 * be) +
                          C14352 * (C14460 + be * C14687 + C14326 * C14690)) /
                         C13611;
    const double C3365 = (be * C14435 + C14326 * C14460 + ae * C14352 * C14655 +
                          C14352 * (ae * C14655 + C14352 * C14690)) /
                         C13611;
    const double C6560 =
        (2 * (ae * C14655 + C14352 * C14690) + ae * (C14655 + C14665 * C14467) +
         C14352 *
             (C14690 + ae * C14352 * C14665 +
              C14352 * (ae * C14665 +
                        C14352 * (be * C14447 + C14326 * std::pow(C14255, 6) *
                                                    bs[6] * C14457)))) /
        C13611;
    const double C5444 =
        (3 * (C14460 + ae * C14794 + C14352 * C14797) +
         ae * (2 * C14794 + C14352 * C14798) +
         C14352 *
             (2 * C14797 + ae * C14798 +
              C14352 * (C14463 + ae * C14352 * C14345 +
                        C14352 * (ae * C14345 + C14352 * std::pow(C14255, 6) *
                                                    bs[6] * C14457)))) /
        C13611;
    const double C13650 = C13647 * be;
    const double C13687 = C13684 * be;
    const double C13636 = C13604 * C13632;
    const double C13671 = 2 * C13632;
    const double C13704 = C13632 / C13612;
    const double C13635 = C13631 / C13606;
    const double C15130 = C15126 - C15129;
    const double C15488 = C15465 / C13606;
    const double C15138 = C15134 - C15137;
    const double C15502 = C15487 / C13612;
    const double C13768 = C13767 / C13606;
    const double C13894 = C13733 * C13889;
    const double C13919 = C13889 / C13612;
    const double C13940 = 2 * C13889;
    const double C15221 = C15216 - C15220;
    const double C15492 = C15471 / C13606;
    const double C15228 = C15224 - C15227;
    const double C15506 = C15495 / C13612;
    const double C13794 = C13793 / C13606;
    const double C14044 = C13736 * C14039;
    const double C14069 = C14039 / C13612;
    const double C14090 = 2 * C14039;
    const double C15261 = C15256 - C15260;
    const double C15494 = C15474 / C13606;
    const double C15268 = C15264 - C15267;
    const double C15508 = C15498 / C13612;
    const double C13913 = C13909 * be;
    const double C13957 = C13954 * be;
    const double C14063 = C14059 * be;
    const double C14107 = C14104 * be;
    const double C14321 = C14283 + C14318;
    const double C5631 =
        (C14326 * C14374 + be * C14352 * C14827 +
         C14352 *
             (be * C14827 + C14352 * C14326 *
                                (ae * C14371 + C14257 * std::pow(C14255, 6) *
                                                   bs[6] * C14358))) /
        C13611;
    const double C5526 = (C14326 * C14289 + C14827 * C14467) / C13606;
    const double C14320 = C14282 + C14317;
    const double C5837 =
        (C14326 * C14450 + ae * C14352 * C14832 +
         C14352 *
             (ae * C14832 + C14352 * C14326 *
                                (be * C14447 + C14257 * std::pow(C14255, 6) *
                                                   bs[6] * C14434))) /
        C13611;
    const double C5525 = (C14326 * C14288 + C14832 * C14467) / C13606;
    const double C14319 = C14296 + C14316;
    const double C1972 =
        (ae * C14352 * C14326 * C14282 + be * C14352 * C14326 * C14283 +
         C14257 * C14352 * C14587) /
        C13611;
    const double C1973 =
        (C14352 * C14587 + ae * C14352 * C14326 * C14314 +
         be * C14352 * C14326 * C14315 +
         C14257 *
             (ae * C14352 * C14326 * C14305 + be * C14352 * C14326 * C14308 +
              C14257 * C14352 * C14326 *
                  (C14294 * C14295 + C14261 * bs[6] * std::pow(C14255, 6)) *
                  C13609)) /
        C13611;
    const double C2807 =
        (3 * (C14287 + C14313 * C14404) +
         C14326 * (2 * C14587 +
                   C14326 * (C14313 + (C14294 * C14295 +
                                       C14261 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14404))) /
        C13611;
    const double C3065 = (C14326 * C14287 + C14587 * C14467) / C13611;
    const double C3455 =
        (ae * (2 * C14646 + C14326 * C14650) +
         be * (2 * C14637 + C14326 * C14641) +
         C14257 * (2 * C14587 +
                   C14326 * (C14313 + (C14294 * C14295 +
                                       C14261 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14404))) /
        C13611;
    const double C4251 =
        (C14352 * (2 * C14587 +
                   C14326 * (C14313 + (C14294 * C14295 +
                                       C14261 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14404))) /
        C13611;
    const double C5527 =
        (ae * (C14646 + C14326 * C14305 * C14467) +
         be * (C14637 + C14326 * C14308 * C14467) +
         C14257 * (C14587 + C14326 *
                                (C14294 * C14295 +
                                 C14261 * bs[6] * std::pow(C14255, 6)) *
                                C13609 * C14467)) /
        C13611;
    const double C6311 =
        (2 * C14352 * C14587 +
         C14352 * (C14587 + C14326 *
                                (C14294 * C14295 +
                                 C14261 * bs[6] * std::pow(C14255, 6)) *
                                C13609 * C14467)) /
        C13611;
    const double C5263 =
        (3 * (C14287 + C14313 * C14467) +
         C14352 * (2 * C14597 +
                   C14352 * (C14313 + (C14294 * C14295 +
                                       C14261 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14467))) /
        C13611;
    const double C5981 =
        (ae * (2 * C14787 + C14352 * C14791) +
         be * (2 * C14771 + C14352 * C14775) +
         C14257 * (2 * C14597 +
                   C14352 * (C14313 + (C14294 * C14295 +
                                       C14261 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14467))) /
        C13611;
    const double C14672 = C14338 + C14670;
    const double C4162 =
        (ae * (C14340 + C14326 * C14732 + C14728 * be) +
         C14352 *
             (C14739 + be * C14326 * C14740 +
              C14326 * (be * C14740 + C14326 * C14257 * std::pow(C14255, 6) *
                                          bs[6] * C14457))) /
        C13611;
    const double C5888 =
        (be * C14442 + C14326 * C14739 + ae * C14352 * C14732 +
         C14352 *
             (ae * C14732 +
              C14352 * (be * C14740 + C14326 * C14257 * std::pow(C14255, 6) *
                                          bs[6] * C14457))) /
        C13611;
    const double C3494 = (2 * (C14326 * C14340 + C14278 * be) +
                          C14326 * (C14340 + C14326 * C14732 + C14728 * be) +
                          (C14278 + C14300 * C14404) * be) /
                         C13606;
    const double C3852 =
        (C14352 * (C14340 + C14326 * C14732 + C14728 * be)) / C13606;
    const double C5578 =
        (C14326 * C14340 + C14278 * be + C14732 * C14467) / C13606;
    const double C6056 = (2 * (C14352 * C14366 + C14278 * be) +
                          C14352 * (C14366 + C14352 * C14849 + C14847 * be) +
                          (C14278 + C14300 * C14467) * be) /
                         C13606;
    const double C14820 = C14364 + C14818;
    const double C6382 = (2 * (C14352 * C14678 + C14653 * be) +
                          C14352 * (C14678 + C14352 * C14870 + C14866 * be) +
                          (C14653 + C14661 * C14467) * be) /
                         C13606;
    const double C14673 = C14389 + C14671;
    const double C3566 = (2 * (C14326 * C14391 + C14278 * ae) +
                          C14326 * (C14391 + C14326 * C14733 + C14728 * ae) +
                          (C14278 + C14300 * C14404) * ae) /
                         C13606;
    const double C3956 =
        (C14352 * (C14391 + C14326 * C14733 + C14728 * ae)) / C13606;
    const double C5682 =
        (C14326 * C14391 + C14278 * ae + C14733 * C14467) / C13606;
    const double C14664 = C14658 + C14659;
    const double C3606 =
        (2 * (ae * C14340 + be * C14391 + C14326 * C14726) +
         ae * (C14340 + C14326 * C14732 + C14728 * be) +
         be * (C14391 + C14326 * C14733 + C14728 * ae) +
         C14326 * (C14726 + ae * C14732 + be * C14733 +
                   C14326 * (ae * C14727 + be * C14729 +
                             C14326 * C14257 *
                                 (C14294 * C14295 +
                                  C14404 * bs[6] * std::pow(C14255, 6)) *
                                 C13609))) /
        C13611;
    const double C4008 =
        (C14352 * C14726 + ae * C14352 * C14732 + be * C14352 * C14733 +
         C14326 *
             (ae * C14352 * C14727 + be * C14352 * C14729 +
              C14326 * C14352 * C14257 *
                  (C14294 * C14295 + C14404 * bs[6] * std::pow(C14255, 6)) *
                  C13609)) /
        C13611;
    const double C5734 =
        (ae * (C14340 + C14727 * C14467) + be * (C14391 + C14729 * C14467) +
         C14326 * (C14726 + C14257 *
                                (C14294 * C14295 +
                                 C14404 * bs[6] * std::pow(C14255, 6)) *
                                C13609 * C14467)) /
        C13611;
    const double C6128 =
        (2 * C14352 * C14726 +
         C14352 * (C14726 + C14257 *
                                (C14294 * C14295 +
                                 C14404 * bs[6] * std::pow(C14255, 6)) *
                                C13609 * C14467)) /
        C13611;
    const double C5370 =
        (3 * (C14409 + C14414 * C14467) +
         C14352 * (2 * C14758 +
                   C14352 * (C14414 + (C14294 * C14295 +
                                       C14404 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14467))) /
        C13611;
    const double C6454 =
        (ae * (2 * C14794 + C14352 * C14798) +
         be * (2 * C14782 + C14352 * C14784) +
         C14326 * (2 * C14758 +
                   C14352 * (C14414 + (C14294 * C14295 +
                                       C14404 * bs[6] * std::pow(C14255, 6)) *
                                          C13609 * C14467))) /
        C13611;
    const double C6198 = (2 * (C14352 * C14442 + C14278 * ae) +
                          C14352 * (C14442 + C14352 * C14850 + C14847 * ae) +
                          (C14278 + C14300 * C14467) * ae) /
                         C13606;
    const double C14821 = C14440 + C14819;
    const double C6524 = (2 * (C14352 * C14687 + C14653 * ae) +
                          C14352 * (C14687 + C14352 * C14871 + C14866 * ae) +
                          (C14653 + C14661 * C14467) * ae) /
                         C13606;
    const double C3747 =
        (2 * C14326 * C14742 +
         C14326 * (C14742 + C14257 *
                                (C14294 * C14295 +
                                 C14467 * bs[6] * std::pow(C14255, 6)) *
                                C13609 * C14404)) /
        C13611;
    const double C4213 =
        (ae * (C14366 + C14736 * C14404) + be * (C14442 + C14740 * C14404) +
         C14352 * (C14742 + C14257 *
                                (C14294 * C14295 +
                                 C14467 * bs[6] * std::pow(C14255, 6)) *
                                C13609 * C14404)) /
        C13611;
    const double C5939 =
        (C14326 * C14742 + ae * (C14352 * C14835 + C14728 * be) +
         be * (C14352 * C14836 + C14728 * ae) +
         C14352 *
             (ae * C14835 + be * C14836 +
              C14352 * C14326 * C14257 *
                  (C14294 * C14295 + C14467 * bs[6] * std::pow(C14255, 6)) *
                  C13609)) /
        C13611;
    const double C6273 =
        (2 * (ae * C14366 + be * C14442 + C14352 * C14742) +
         ae * (C14366 + C14352 * C14849 + C14847 * be) +
         be * (C14442 + C14352 * C14850 + C14847 * ae) +
         C14352 * (C14742 + ae * C14849 + be * C14850 +
                   C14352 * (ae * C14736 + be * C14740 +
                             C14352 * C14257 *
                                 (C14294 * C14295 +
                                  C14467 * bs[6] * std::pow(C14255, 6)) *
                                 C13609))) /
        C13611;
    const double C14812 = C14806 + C14807;
    const double C6595 =
        (2 * (ae * C14678 + be * C14687 + C14352 * C14864) +
         ae * (C14678 + C14352 * C14870 + C14866 * be) +
         be * (C14687 + C14352 * C14871 + C14866 * ae) +
         C14352 * (C14864 + ae * C14870 + be * C14871 +
                   C14352 * (ae * C14865 + be * C14867 +
                             C14352 * C14326 *
                                 (C14294 * C14295 +
                                  C14467 * bs[6] * std::pow(C14255, 6)) *
                                 C13609))) /
        C13611;
    const double C13652 = C13650 / C13606;
    const double C13690 = C13687 / C13606;
    const double C13640 = C13636 + C15135;
    const double C13707 = C13704 - C13706;
    const double C2458 = C13704 + (0 * ae) / C13606;
    const double C13639 = C15125 - C13635;
    const double C15429 = C15130 * C15120;
    const double C15467 = C15434 + C15130;
    const double C15437 = C15138 / C13612;
    const double C15433 = C15138 * C15120;
    const double C1278 = C15502 - (C15130 * C15121) / C13606;
    const double C13769 = C15167 - C13768;
    const double C13898 = C13894 + C15225;
    const double C13922 = C13919 - C13921;
    const double C15449 = C15221 * C15215;
    const double C15479 = C15451 + C15221;
    const double C15453 = C15228 / C13612;
    const double C15450 = C15228 * C15215;
    const double C3444 = C15506 - (C15221 * C15217) / C13606;
    const double C13795 = C15178 - C13794;
    const double C14048 = C14044 + C15265;
    const double C14072 = C14069 - C14071;
    const double C15456 = C15261 * C15255;
    const double C15484 = C15458 + C15261;
    const double C15460 = C15268 / C13612;
    const double C15457 = C15268 * C15255;
    const double C5974 = C15508 - (C15261 * C15257) / C13606;
    const double C13915 = C13913 / C13606;
    const double C13960 = C13957 / C13606;
    const double C14065 = C14063 / C13606;
    const double C14110 = C14107 / C13606;
    const double C14323 = C14321 + C14309;
    const double C14322 = C14320 + C14306;
    const double C14674 = C14672 + C14666;
    const double C14822 = C14820 + C14814;
    const double C14675 = C14673 + C14669;
    const double C14823 = C14821 + C14817;
    const double C13655 = C13646 - C13652;
    const double C13694 = C13676 - C13690;
    const double C13645 = C13640 * be;
    const double C13711 = 2 * C13707;
    const double C79 =
        (C13707 / C13612 + (0 * ae) / C13606) / C13612 - (0 * be) / C13606;
    const double C1290 = C13707 / C13612 - (0 * be) / C13606;
    const double C6642 = C13707 / C13612 + (0 * ae) / C13606;
    const double C13644 = C13639 * ae;
    const double C13675 = C13639 * C13669;
    const double C385 =
        ((-C13607 / C13606) / C13612 - (C13625 * be) / C13606) / C13612 -
        ((C13604 * ((-C13614) / C13612 - (C13639 * be) / C13606) + C6954) *
         be) /
            C13606 +
        (-C13626 / C13606) / C13612 - (0 * be) / C13606;
    const double C387 =
        ((-C13614) / C13612 - (C13639 * be) / C13606) / C13612 -
        ((C13604 * ((-C13626 / C13606) / C13612 - (0 * be) / C13606) + C15135) *
         be) /
            C13606;
    const double C6960 = (-C13614) / C13612 - (C13639 * be) / C13606;
    const double C15463 = C15429 / C13606;
    const double C15489 = C15467 / C13612;
    const double C15490 = C15469 + C15437;
    const double C1280 = C15437 - C15136 / C13618;
    const double C15466 = C15433 / C13606;
    const double C13770 = C13769 * C13669;
    const double C13876 = C13769 * ae;
    const double C1330 = (C13769 * ae) / C13606 - C13756 / C13618;
    const double C2498 =
        ((-(0 * be) / C13606) / C13612 -
         ((0 - (C13733 * C13756) / C13606) * be) / C13606) /
            C13612 -
        ((C13733 * ((-C13756 / C13606) / C13612 - (C13769 * be) / C13606) +
          C6634) *
         be) /
            C13606 +
        (-C13766 / C13606) / C13612 - (0 * be) / C13606;
    const double C2499 =
        ((-C13756 / C13606) / C13612 - (C13769 * be) / C13606) / C13612 -
        ((C13733 * ((-C13766 / C13606) / C13612 - (0 * be) / C13606) + C15225) *
         be) /
            C13606;
    const double C6678 = (-C13874) / C13612 - (C13769 * be) / C13606;
    const double C13902 = C13898 * be;
    const double C13969 = 2 * C13922;
    const double C2834 =
        (C13922 / C13612 + (0 * ae) / C13606) / C13612 - (0 * be) / C13606;
    const double C3493 = C13922 / C13612 - (0 * be) / C13606;
    const double C7001 = C13922 / C13612 + (0 * ae) / C13606;
    const double C15476 = C15449 / C13606;
    const double C15496 = C15479 / C13612;
    const double C15497 = C15480 + C15453;
    const double C3446 = C15453 - C15226 / C13618;
    const double C15478 = C15450 / C13606;
    const double C13796 = C13795 * C13669;
    const double C14026 = C13795 * ae;
    const double C1694 = (C13795 * ae) / C13606 - C13782 / C13618;
    const double C4653 =
        ((-(0 * be) / C13606) / C13612 -
         ((0 - (C13736 * C13782) / C13606) * be) / C13606) /
            C13612 -
        ((C13736 * ((-C13782 / C13606) / C13612 - (C13795 * be) / C13606) +
          C8988) *
         be) /
            C13606 +
        (-C13792 / C13606) / C13612 - (0 * be) / C13606;
    const double C4654 =
        ((-C13782 / C13606) / C13612 - (C13795 * be) / C13606) / C13612 -
        ((C13736 * ((-C13792 / C13606) / C13612 - (0 * be) / C13606) + C15265) *
         be) /
            C13606;
    const double C9058 = (-C14024) / C13612 - (C13795 * be) / C13606;
    const double C14052 = C14048 * be;
    const double C14119 = 2 * C14072;
    const double C5316 =
        (C14072 / C13612 + (0 * ae) / C13606) / C13612 - (0 * be) / C13606;
    const double C6055 = C14072 / C13612 - (0 * be) / C13606;
    const double C9825 = C14072 / C13612 + (0 * ae) / C13606;
    const double C15481 = C15456 / C13606;
    const double C15499 = C15484 / C13612;
    const double C15500 = C15485 + C15460;
    const double C5976 = C15460 - C15266 / C13618;
    const double C15483 = C15457 / C13606;
    const double C13916 = C13912 - C13915;
    const double C13962 = C13946 - C13960;
    const double C14066 = C14062 - C14065;
    const double C14112 = C14096 - C14110;
    const double C467 =
        (C14337 + ae * C14340 + C14257 * C14348 + be * C14326 * C14323 +
         C14326 *
             (be * C14323 +
              C14326 * (C14344 + ae * C14257 * C14345 +
                        C14257 * (ae * C14345 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14332)))) /
        C13611;
    const double C964 =
        (C14363 + ae * C14366 + C14257 * C14374 + be * C14352 * C14323 +
         C14352 *
             (be * C14323 +
              C14352 * (C14370 + ae * C14257 * C14371 +
                        C14257 * (ae * C14371 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14358)))) /
        C13611;
    const double C1333 =
        (be * (2 * C14289 + C14257 * C14323 + C14307 * ae) +
         C14326 *
             (2 * C14348 + ae * C14349 +
              C14257 * (C14344 + ae * C14257 * C14345 +
                        C14257 * (ae * C14345 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14332)))) /
        C13611;
    const double C1697 =
        (be * (2 * C14289 + C14257 * C14323 + C14307 * ae) +
         C14352 *
             (2 * C14374 + ae * C14375 +
              C14257 * (C14370 + ae * C14257 * C14371 +
                        C14257 * (ae * C14371 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14358)))) /
        C13611;
    const double C2029 =
        (C14352 *
         (be * C14323 +
          C14326 * (C14344 + ae * C14257 * C14345 +
                    C14257 * (ae * C14345 + C14257 * std::pow(C14255, 6) *
                                                bs[6] * C14332)))) /
        C13611;
    const double C2085 =
        (be * C14326 * C14323 +
         C14352 * C14326 *
             (C14370 + ae * C14257 * C14371 +
              C14257 * (ae * C14371 +
                        C14257 * std::pow(C14255, 6) * bs[6] * C14358))) /
        C13611;
    const double C95 = (3 * (C14270 + C14257 * C14289 + C14278 * ae) +
                        C14257 * (2 * C14289 + C14257 * C14323 + C14307 * ae) +
                        (2 * C14278 + C14257 * C14307) * ae) /
                       C13606;
    const double C408 =
        (C14270 + C14257 * C14289 + C14278 * ae + C14323 * C14404) / C13606;
    const double C855 =
        (C14270 + C14257 * C14289 + C14278 * ae + C14323 * C14467) / C13606;
    const double C1294 =
        (C14326 * (2 * C14289 + C14257 * C14323 + C14307 * ae)) / C13606;
    const double C1622 =
        (C14352 * (2 * C14289 + C14257 * C14323 + C14307 * ae)) / C13606;
    const double C1970 = (C14352 * C14326 * C14323) / C13606;
    const double C100 =
        (3 * (C14287 + ae * C14288 + be * C14289 + C14257 * C14319) +
         ae * (2 * C14288 + C14257 * C14322 + C14307 * be) +
         be * (2 * C14289 + C14257 * C14323 + C14307 * ae) +
         C14257 *
             (2 * C14319 + ae * C14322 + be * C14323 +
              C14257 * (C14313 + ae * C14314 + be * C14315 +
                        C14257 * (ae * C14305 + be * C14308 +
                                  C14257 *
                                      (C14294 * C14295 +
                                       C14261 * bs[6] * std::pow(C14255, 6)) *
                                      C13609)))) /
        C13611;
    const double C567 =
        (C14388 + be * C14391 + C14257 * C14399 + ae * C14326 * C14322 +
         C14326 *
             (ae * C14322 +
              C14326 * (C14395 + be * C14257 * C14396 +
                        C14257 * (be * C14396 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14383)))) /
        C13611;
    const double C1152 =
        (C14439 + be * C14442 + C14257 * C14450 + ae * C14352 * C14322 +
         C14352 *
             (ae * C14322 +
              C14352 * (C14446 + be * C14257 * C14447 +
                        C14257 * (be * C14447 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14434)))) /
        C13611;
    const double C1295 =
        (2 * (ae * C14326 * C14282 + be * C14326 * C14283 + C14257 * C14587) +
         ae * C14326 * C14322 + be * C14326 * C14323 +
         C14257 * (C14587 + ae * C14326 * C14314 + be * C14326 * C14315 +
                   C14257 * (ae * C14326 * C14305 + be * C14326 * C14308 +
                             C14257 * C14326 *
                                 (C14294 * C14295 +
                                  C14261 * bs[6] * std::pow(C14255, 6)) *
                                 C13609))) /
        C13611;
    const double C1405 =
        (ae * (2 * C14288 + C14257 * C14322 + C14307 * be) +
         C14326 *
             (2 * C14399 + be * C14400 +
              C14257 * (C14395 + be * C14257 * C14396 +
                        C14257 * (be * C14396 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14383)))) /
        C13611;
    const double C1623 =
        (2 * (ae * C14352 * C14282 + be * C14352 * C14283 + C14257 * C14597) +
         ae * C14352 * C14322 + be * C14352 * C14323 +
         C14257 * (C14597 + ae * C14352 * C14314 + be * C14352 * C14315 +
                   C14257 * (ae * C14352 * C14305 + be * C14352 * C14308 +
                             C14257 * C14352 *
                                 (C14294 * C14295 +
                                  C14261 * bs[6] * std::pow(C14255, 6)) *
                                 C13609))) /
        C13611;
    const double C1839 =
        (ae * (2 * C14288 + C14257 * C14322 + C14307 * be) +
         C14352 *
             (2 * C14450 + be * C14451 +
              C14257 * (C14446 + be * C14257 * C14447 +
                        C14257 * (be * C14447 + C14257 * std::pow(C14255, 6) *
                                                    bs[6] * C14434)))) /
        C13611;
    const double C2141 =
        (ae * C14352 * C14322 +
         C14326 * C14352 *
             (C14395 + be * C14257 * C14396 +
              C14257 * (be * C14396 +
                        C14257 * std::pow(C14255, 6) * bs[6] * C14383))) /
        C13611;
    const double C2303 =
        (ae * C14326 * C14322 +
         C14352 * C14326 *
             (C14446 + be * C14257 * C14447 +
              C14257 * (be * C14447 +
                        C14257 * std::pow(C14255, 6) * bs[6] * C14434))) /
        C13611;
    const double C94 = (3 * (C14269 + C14257 * C14288 + C14278 * be) +
                        C14257 * (2 * C14288 + C14257 * C14322 + C14307 * be) +
                        (2 * C14278 + C14257 * C14307) * be) /
                       C13606;
    const double C407 =
        (C14269 + C14257 * C14288 + C14278 * be + C14322 * C14404) / C13606;
    const double C854 =
        (C14269 + C14257 * C14288 + C14278 * be + C14322 * C14467) / C13606;
    const double C1293 =
        (C14326 * (2 * C14288 + C14257 * C14322 + C14307 * be)) / C13606;
    const double C1621 =
        (C14352 * (2 * C14288 + C14257 * C14322 + C14307 * be)) / C13606;
    const double C1969 = (C14352 * C14326 * C14322) / C13606;
    const double C3366 =
        (C14460 + be * C14687 + C14326 * C14690 + ae * C14352 * C14674 +
         C14352 *
             (ae * C14674 +
              C14352 * (C14463 + be * C14326 * C14447 +
                        C14326 * (be * C14447 + C14326 * std::pow(C14255, 6) *
                                                    bs[6] * C14457)))) /
        C13611;
    const double C4500 =
        (ae * (2 * C14655 + C14326 * C14674 + C14667 * be) +
         C14352 *
             (2 * C14690 + be * C14691 +
              C14326 * (C14463 + be * C14326 * C14447 +
                        C14326 * (be * C14447 + C14326 * std::pow(C14255, 6) *
                                                    bs[6] * C14457)))) /
        C13611;
    const double C2836 =
        (3 * (C14333 + C14326 * C14655 + C14653 * be) +
         C14326 * (2 * C14655 + C14326 * C14674 + C14667 * be) +
         (2 * C14653 + C14326 * C14667) * be) /
        C13606;
    const double C3108 =
        (C14333 + C14326 * C14655 + C14653 * be + C14674 * C14467) / C13606;
    const double C4286 =
        (C14352 * (2 * C14655 + C14326 * C14674 + C14667 * be)) / C13606;
    const double C6489 =
        (ae * (2 * C14803 + C14352 * C14822 + C14815 * be) +
         C14326 *
             (2 * C14761 + be * C14784 +
              C14352 * (C14426 + be * C14352 * C14396 +
                        C14352 * (be * C14396 + C14352 * std::pow(C14255, 6) *
                                                    bs[6] * C14420)))) /
        C13611;
    const double C5318 =
        (3 * (C14359 + C14352 * C14803 + C14801 * be) +
         C14352 * (2 * C14803 + C14352 * C14822 + C14815 * be) +
         (2 * C14801 + C14352 * C14815) * be) /
        C13606;
    const double C2919 =
        (3 * (C14409 + ae * C14655 + be * C14656 + C14326 * C14664) +
         ae * (2 * C14655 + C14326 * C14674 + C14667 * be) +
         be * (2 * C14656 + C14326 * C14675 + C14667 * ae) +
         C14326 *
             (2 * C14664 + ae * C14674 + be * C14675 +
              C14326 * (C14414 + ae * C14665 + be * C14668 +
                        C14326 * (ae * C14345 + be * C14396 +
                                  C14326 *
                                      (C14294 * C14295 +
                                       C14404 * bs[6] * std::pow(C14255, 6)) *
                                      C13609)))) /
        C13611;
    const double C4394 =
        (2 * (ae * C14352 * C14338 + be * C14352 * C14389 + C14326 * C14758) +
         ae * C14352 * C14674 + be * C14352 * C14675 +
         C14326 * (C14758 + ae * C14352 * C14665 + be * C14352 * C14668 +
                   C14326 * (ae * C14352 * C14345 + be * C14352 * C14396 +
                             C14326 * C14352 *
                                 (C14294 * C14295 +
                                  C14404 * bs[6] * std::pow(C14255, 6)) *
                                 C13609))) /
        C13611;
    const double C2888 =
        (3 * (C14384 + C14326 * C14656 + C14653 * ae) +
         C14326 * (2 * C14656 + C14326 * C14675 + C14667 * ae) +
         (2 * C14653 + C14326 * C14667) * ae) /
        C13606;
    const double C3196 =
        (C14384 + C14326 * C14656 + C14653 * ae + C14675 * C14467) / C13606;
    const double C4358 =
        (C14352 * (2 * C14656 + C14326 * C14675 + C14667 * ae)) / C13606;
    const double C5473 =
        (3 * (C14472 + ae * C14803 + be * C14804 + C14352 * C14812) +
         ae * (2 * C14803 + C14352 * C14822 + C14815 * be) +
         be * (2 * C14804 + C14352 * C14823 + C14815 * ae) +
         C14352 *
             (2 * C14812 + ae * C14822 + be * C14823 +
              C14352 * (C14477 + ae * C14813 + be * C14816 +
                        C14352 * (ae * C14371 + be * C14447 +
                                  C14352 *
                                      (C14294 * C14295 +
                                       C14467 * bs[6] * std::pow(C14255, 6)) *
                                      C13609)))) /
        C13611;
    const double C5418 =
        (3 * (C14435 + C14352 * C14804 + C14801 * ae) +
         C14352 * (2 * C14804 + C14352 * C14823 + C14815 * ae) +
         (2 * C14801 + C14352 * C14815) * ae) /
        C13606;
    const double C13649 = C13645 / C13606;
    const double C13648 = C13644 / C13606;
    const double C13680 = C13675 / C13618;
    const double C13679 = C13604 * C13675;
    const double C80 = (-C13675 / C13606) / (4 * C13611 * std::pow(C13612, 2));
    const double C390 = (-C13675 / C13606) / C13710;
    const double C1291 = (-C13675 / C13606) / (4 * C13664);
    const double C2459 = (-C13675 / C13606) / C13710;
    const double C2799 = -C13675 / C13606;
    const double C3451 = (-C13675 / C13606) / C13612;
    const double C6643 = (-C13675 / C13606) / (4 * C13664);
    const double C6963 = (-C13675 / C13606) / C13612;
    const double C7743 = (-C13675 / C13606) / C13710;
    const double C15510 = C15463 + C15502;
    const double C1279 = C15489 - (C15138 * C15121) / C13606;
    const double C64 = C15490 / C13612 - C15136 / C13712;
    const double C15503 = C15466 + C15489;
    const double C13773 = C13733 * C13770;
    const double C13939 = C13770 / C13618;
    const double C606 =
        (ae * -2 * C13756) / C13664 +
        (((C13733 * ((-4 * C13758) / C13606 - (C13733 * C13770) / C13606) *
           ae) /
              C13606 +
          2 * ((C13769 * ae) / C13606 - C13756 / C13618)) *
         ae) /
            C13606 -
        C13770 / C13618;
    const double C608 = (-C13770 / C13606) / C13710;
    const double C1441 = (-C13770 / C13606) / C13612;
    const double C2617 = (-C13770 / C13606) / C13710;
    const double C2917 =
        (-C13770 / C13606) / (4 * C13611 * std::pow(C13612, 2));
    const double C3605 = (-C13770 / C13606) / (4 * C13664);
    const double C6783 = (-C13770 / C13606) / C13612;
    const double C7107 = (-C13770 / C13606) / (4 * C13664);
    const double C7901 = (-C13770 / C13606) / C13710;
    const double C13884 = C13876 / C13606;
    const double C13907 = C13902 / C13606;
    const double C15511 = C15476 + C15506;
    const double C3445 = C15496 - (C15228 * C15217) / C13606;
    const double C2796 = C15497 / C13612 - C15226 / C13712;
    const double C15507 = C15478 + C15496;
    const double C13799 = C13736 * C13796;
    const double C14089 = C13796 / C13618;
    const double C1235 =
        (ae * -2 * C13782) / C13664 +
        (((C13736 * ((-4 * C13784) / C13606 - (C13736 * C13796) / C13606) *
           ae) /
              C13606 +
          2 * ((C13795 * ae) / C13606 - C13782 / C13618)) *
         ae) /
            C13606 -
        C13796 / C13618;
    const double C1237 = (-C13796 / C13606) / C13710;
    const double C1910 = (-C13796 / C13606) / C13612;
    const double C4886 = (-C13796 / C13606) / C13710;
    const double C5471 =
        (-C13796 / C13606) / (4 * C13611 * std::pow(C13612, 2));
    const double C6272 = (-C13796 / C13606) / (4 * C13664);
    const double C9265 = (-C13796 / C13606) / C13612;
    const double C10033 = (-C13796 / C13606) / (4 * C13664);
    const double C10834 = (-C13796 / C13606) / C13710;
    const double C14034 = C14026 / C13606;
    const double C14057 = C14052 / C13606;
    const double C15512 = C15481 + C15508;
    const double C5975 = C15499 - (C15268 * C15257) / C13606;
    const double C5254 = C15500 / C13612 - C15266 / C13712;
    const double C15509 = C15483 + C15499;
    const double C13651 = C13648 - C13627;
    const double C13683 = C13679 / C13618;
    const double C13682 = C13679 / C13606;
    const double C61 =
        (C15501 + 2 * C15130) / C13612 - (C15510 * C15121) / C13606;
    const double C62 =
        (C15488 + 2 * C15138 + C15510) / C13612 - (C15503 * C15121) / C13606;
    const double C63 = (C15468 + C15135 / C13606 + C15503) / C13612 -
                       (C15490 * C15121) / C13606;
    const double C13941 = C13773 / C13618;
    const double C13937 = C13773 / C13606;
    const double C607 =
        (((-4 * C13758) / C13606 - C13773 / C13606) * ae) / C13618 +
        ((2 * ((0 * ae) / C13606 - C13758 / C13611) - C13773 / C13618) * ae) /
            C13606;
    const double C1440 =
        (((-4 * C13758) / C13606 - C13773 / C13606) * ae) / C13606;
    const double C2615 =
        (-(be * -2 * C13756) / C13611) / C13612 -
        ((2 * ((-C13756 / C13606) / C13612 - (C13769 * be) / C13606) -
          (C13733 * ((-4 * C13758) / C13606 - C13773 / C13606) * be) / C13606) *
         be) /
            C13606 -
        C13770 / C13618;
    const double C2616 =
        (-(((-4 * C13758) / C13606 - C13773 / C13606) * be) / C13606) / C13612 -
        ((2 * ((-C13766 / C13606) / C13612 - (0 * be) / C13606) -
          C13773 / C13618) *
         be) /
            C13606;
    const double C13888 = C13884 - C13877;
    const double C2793 =
        (C15504 + 2 * C15221) / C13612 - (C15511 * C15217) / C13606;
    const double C2794 =
        (C15492 + 2 * C15228 + C15511) / C13612 - (C15507 * C15217) / C13606;
    const double C2795 = (C15472 + C15225 / C13606 + C15507) / C13612 -
                         (C15497 * C15217) / C13606;
    const double C14091 = C13799 / C13618;
    const double C14087 = C13799 / C13606;
    const double C1236 =
        (((-4 * C13784) / C13606 - C13799 / C13606) * ae) / C13618 +
        ((2 * ((0 * ae) / C13606 - C13784 / C13611) - C13799 / C13618) * ae) /
            C13606;
    const double C1909 =
        (((-4 * C13784) / C13606 - C13799 / C13606) * ae) / C13606;
    const double C4884 =
        (-(be * -2 * C13782) / C13611) / C13612 -
        ((2 * ((-C13782 / C13606) / C13612 - (C13795 * be) / C13606) -
          (C13736 * ((-4 * C13784) / C13606 - C13799 / C13606) * be) / C13606) *
         be) /
            C13606 -
        C13796 / C13618;
    const double C4885 =
        (-(((-4 * C13784) / C13606 - C13799 / C13606) * be) / C13606) / C13612 -
        ((2 * ((-C13792 / C13606) / C13612 - (0 * be) / C13606) -
          C13799 / C13618) *
         be) /
            C13606;
    const double C14038 = C14034 - C14027;
    const double C5251 =
        (C15505 + 2 * C15261) / C13612 - (C15512 * C15257) / C13606;
    const double C5252 =
        (C15494 + 2 * C15268 + C15512) / C13612 - (C15509 * C15257) / C13606;
    const double C5253 = (C15475 + C15265 / C13606 + C15509) / C13612 -
                         (C15500 * C15257) / C13606;
    const double C13654 = C13651 / C13612;
    const double C13653 = C13604 * C13651;
    const double C13670 = 2 * C13651;
    const double C13686 = C13671 - C13683;
    const double C13685 = C13674 - C13682;
    const double C13945 = C13940 - C13941;
    const double C13949 = C13944 - C13937;
    const double C13893 = C13888 / C13612;
    const double C13892 = C13733 * C13888;
    const double C13938 = 2 * C13888;
    const double C14095 = C14090 - C14091;
    const double C14099 = C14094 - C14087;
    const double C14043 = C14038 / C13612;
    const double C14042 = C13736 * C14038;
    const double C14088 = 2 * C14038;
    const double C13657 = C13654 - C13649;
    const double C2456 = C13654 + (C13640 * ae) / C13606;
    const double C13656 = C13653 + C15430;
    const double C13689 = C13686 * be;
    const double C13688 = C13685 * ae;
    const double C386 = (-(be * C13666) / C13611) / C13612 -
                        ((2 * ((-C13614) / C13612 - (C13639 * be) / C13606) -
                          (C13604 * C13685 * be) / C13606) *
                         be) /
                            C13606 -
                        C13680;
    const double C388 =
        (-(C13685 * be) / C13606) / C13612 -
        ((2 * ((-C13626 / C13606) / C13612 - (0 * be) / C13606) - C13683) *
         be) /
            C13606;
    const double C6961 = -(C13685 * be) / C13606;
    const double C13950 = C13945 * be;
    const double C13952 = C13949 * ae;
    const double C6782 = -(C13949 * be) / C13606;
    const double C13911 = C13893 - C13907;
    const double C13897 = C13892 + C15446;
    const double C14100 = C14095 * be;
    const double C14102 = C14099 * ae;
    const double C9264 = -(C14099 * be) / C13606;
    const double C14061 = C14043 - C14057;
    const double C14047 = C14042 + C15447;
    const double C77 =
        (C13657 / C13612 + ((C13604 * C13707 + C7734) * ae) / C13606) / C13612 -
        ((C13604 * (C13707 / C13612 + (0 * ae) / C13606) + C15445) * be) /
            C13606;
    const double C1288 =
        C13657 / C13612 - ((C13604 * C13707 + C7734) * be) / C13606;
    const double C6640 =
        C13657 / C13612 + ((C13604 * C13707 + C7734) * ae) / C13606;
    const double C13658 = C13656 * be;
    const double C2454 = C13643 + (C13656 * ae) / C13606 + C13632;
    const double C13693 = C13689 / C13606;
    const double C13692 = C13688 / C13618;
    const double C13691 = C13604 * C13688;
    const double C3449 = C13688 / C13606;
    const double C13953 = C13950 / C13606;
    const double C13956 = C13952 / C13618;
    const double C13955 = C13733 * C13952;
    const double C2833 =
        (C13911 / C13612 + ((C13733 * C13922 + C7737) * ae) / C13606) / C13612 -
        ((C13733 * (C13922 / C13612 + (0 * ae) / C13606) + C15454) * be) /
            C13606;
    const double C3492 =
        C13911 / C13612 - ((C13733 * C13922 + C7737) * be) / C13606;
    const double C7000 =
        C13911 / C13612 + ((C13733 * C13922 + C7737) * ae) / C13606;
    const double C13901 = C13897 * be;
    const double C14103 = C14100 / C13606;
    const double C14106 = C14102 / C13618;
    const double C14105 = C13736 * C14102;
    const double C5315 =
        (C14061 / C13612 + ((C13736 * C14072 + C10524) * ae) / C13606) /
            C13612 -
        ((C13736 * (C14072 / C13612 + (0 * ae) / C13606) + C15461) * be) /
            C13606;
    const double C6054 =
        C14061 / C13612 - ((C13736 * C14072 + C10524) * be) / C13606;
    const double C9824 =
        C14061 / C13612 + ((C13736 * C14072 + C10524) * ae) / C13606;
    const double C14051 = C14047 * be;
    const double C13659 = C13658 / C13606;
    const double C13696 = C13692 - C13693;
    const double C2457 = C13692 + (C13686 * ae) / C13606;
    const double C13695 = C13691 / C13606;
    const double C13959 = C13956 - C13953;
    const double C13958 = C13955 / C13606;
    const double C13906 = C13901 / C13606;
    const double C14109 = C14106 - C14103;
    const double C14108 = C14105 / C13606;
    const double C14056 = C14051 / C13606;
    const double C13660 = C13643 - C13659;
    const double C78 =
        (C13696 / C13612 + ((C13711 - C13679 / C13712) * ae) / C13606) /
            C13612 -
        ((2 * (C13707 / C13612 + (0 * ae) / C13606) -
          C13679 / (C13606 * 4 * C13664)) *
         be) /
            C13606;
    const double C1289 =
        C13696 / C13612 - ((C13711 - C13679 / C13712) * be) / C13606;
    const double C6641 =
        C13696 / C13612 + ((C13711 - C13679 / C13712) * ae) / C13606;
    const double C13697 = C13695 + C13670;
    const double C2916 =
        (C13959 / C13612 + ((C13969 - C13773 / C13712) * ae) / C13606) /
            C13612 -
        ((2 * (C13922 / C13612 + (0 * ae) / C13606) -
          C13773 / (C13606 * 4 * C13664)) *
         be) /
            C13606;
    const double C3604 =
        C13959 / C13612 - ((C13969 - C13773 / C13712) * be) / C13606;
    const double C7106 =
        C13959 / C13612 + ((C13969 - C13773 / C13712) * ae) / C13606;
    const double C13961 = C13958 + C13938;
    const double C13910 = C13905 - C13906;
    const double C5470 =
        (C14109 / C13612 + ((C14119 - C13799 / C13712) * ae) / C13606) /
            C13612 -
        ((2 * (C14072 / C13612 + (0 * ae) / C13606) -
          C13799 / (C13606 * 4 * C13664)) *
         be) /
            C13606;
    const double C6271 =
        C14109 / C13612 - ((C14119 - C13799 / C13712) * be) / C13606;
    const double C10032 =
        C14109 / C13612 + ((C14119 - C13799 / C13712) * ae) / C13606;
    const double C14111 = C14108 + C14088;
    const double C14060 = C14055 - C14056;
    const double C13661 = C13660 + C13632;
    const double C13698 = C13697 * be;
    const double C2455 = C13678 + (C13697 * ae) / C13606 - C13680;
    const double C13963 = C13961 * be;
    const double C13914 = C13910 + C13889;
    const double C14113 = C14111 * be;
    const double C14064 = C14060 + C14039;
    const double C71 =
        (((((0 - (C13604 * C13605) / C13606) * ae) / C13606 -
           (0 * be) / C13618 + (2 * C13607) / C13606) /
              C13612 -
          ((C13604 * C13641 + 0) * be) / C13606 + C13624 - C13634) /
             C13612 +
         ((C13604 * C13655 + 0) * ae) / C13606) /
            C13612 -
        ((C13604 * (C13655 / C13612 +
                    ((C13604 * C13661 + C15130) * ae) / C13606 + C13657) +
          C15510) *
         be) /
            C13606 +
        C13661 / C13612 + ((C13604 * C13657 + C15138) * ae) / C13606 +
        2 * (C13632 / C13612 - (0 * be) / C13606);
    const double C73 =
        (C13655 / C13612 + ((C13604 * C13661 + C15130) * ae) / C13606 +
         C13657) /
            C13612 -
        ((C13604 * (C13661 / C13612 +
                    ((C13604 * C13657 + C15138) * ae) / C13606 + 2 * C13707) +
          C15503) *
         be) /
            C13606 +
        2 * (C13657 / C13612 + ((C13604 * C13707 + C7734) * ae) / C13606);
    const double C75 = (C13661 / C13612 +
                        ((C13604 * C13657 + C15138) * ae) / C13606 + C13711) /
                           C13612 -
                       ((C13604 * (C13657 / C13612 +
                                   ((C13604 * C13707 + C7734) * ae) / C13606) +
                         C15490) *
                        be) /
                           C13606 +
                       3 * (C13707 / C13612 + (0 * ae) / C13606);
    const double C1284 =
        C13655 / C13612 - ((C13604 * C13661 + C15130) * be) / C13606 + C13657;
    const double C1286 =
        C13661 / C13612 - ((C13604 * C13657 + C15138) * be) / C13606 + C13711;
    const double C6636 =
        C13655 / C13612 + ((C13604 * C13661 + C15130) * ae) / C13606 + C13657;
    const double C6638 =
        C13661 / C13612 + ((C13604 * C13657 + C15138) * ae) / C13606 + C13711;
    const double C13699 = C13698 / C13606;
    const double C13964 = C13963 / C13606;
    const double C2830 =
        (((((0 - (C13733 * C13872) / C13606) * ae) / C13606 -
           (0 * be) / C13618 + (2 * C13873) / C13606) /
              C13612 -
          ((C13733 * C13908 + 0) * be) / C13606 + C13882 - C13896) /
             C13612 +
         ((C13733 * C13916 + 0) * ae) / C13606) /
            C13612 -
        ((C13733 * (C13916 / C13612 +
                    ((C13733 * C13914 + C15221) * ae) / C13606 + C13911) +
          C15511) *
         be) /
            C13606 +
        C13914 / C13612 + ((C13733 * C13911 + C15228) * ae) / C13606 +
        2 * (C13889 / C13612 - (0 * be) / C13606);
    const double C2831 =
        (C13916 / C13612 + ((C13733 * C13914 + C15221) * ae) / C13606 +
         C13911) /
            C13612 -
        ((C13733 * (C13914 / C13612 +
                    ((C13733 * C13911 + C15228) * ae) / C13606 + 2 * C13922) +
          C15507) *
         be) /
            C13606 +
        2 * (C13911 / C13612 + ((C13733 * C13922 + C7737) * ae) / C13606);
    const double C2832 =
        (C13914 / C13612 + ((C13733 * C13911 + C15228) * ae) / C13606 +
         2 * C13922) /
            C13612 -
        ((C13733 *
              (C13911 / C13612 + ((C13733 * C13922 + C7737) * ae) / C13606) +
          C15497) *
         be) /
            C13606 +
        3 * (C13922 / C13612 + (0 * ae) / C13606);
    const double C3490 =
        C13916 / C13612 - ((C13733 * C13914 + C15221) * be) / C13606 + C13911;
    const double C3491 =
        C13914 / C13612 - ((C13733 * C13911 + C15228) * be) / C13606 + C13969;
    const double C6998 =
        C13916 / C13612 + ((C13733 * C13914 + C15221) * ae) / C13606 + C13911;
    const double C6999 =
        C13914 / C13612 + ((C13733 * C13911 + C15228) * ae) / C13606 + C13969;
    const double C14114 = C14113 / C13606;
    const double C5312 =
        (((((0 - (C13736 * C14022) / C13606) * ae) / C13606 -
           (0 * be) / C13618 + (2 * C14023) / C13606) /
              C13612 -
          ((C13736 * C14058 + 0) * be) / C13606 + C14032 - C14046) /
             C13612 +
         ((C13736 * C14066 + 0) * ae) / C13606) /
            C13612 -
        ((C13736 * (C14066 / C13612 +
                    ((C13736 * C14064 + C15261) * ae) / C13606 + C14061) +
          C15512) *
         be) /
            C13606 +
        C14064 / C13612 + ((C13736 * C14061 + C15268) * ae) / C13606 +
        2 * (C14039 / C13612 - (0 * be) / C13606);
    const double C5313 =
        (C14066 / C13612 + ((C13736 * C14064 + C15261) * ae) / C13606 +
         C14061) /
            C13612 -
        ((C13736 * (C14064 / C13612 +
                    ((C13736 * C14061 + C15268) * ae) / C13606 + 2 * C14072) +
          C15509) *
         be) /
            C13606 +
        2 * (C14061 / C13612 + ((C13736 * C14072 + C10524) * ae) / C13606);
    const double C5314 =
        (C14064 / C13612 + ((C13736 * C14061 + C15268) * ae) / C13606 +
         2 * C14072) /
            C13612 -
        ((C13736 *
              (C14061 / C13612 + ((C13736 * C14072 + C10524) * ae) / C13606) +
          C15500) *
         be) /
            C13606 +
        3 * (C14072 / C13612 + (0 * ae) / C13606);
    const double C6052 =
        C14066 / C13612 - ((C13736 * C14064 + C15261) * be) / C13606 + C14061;
    const double C6053 =
        C14064 / C13612 - ((C13736 * C14061 + C15268) * be) / C13606 + C14119;
    const double C9822 =
        C14066 / C13612 + ((C13736 * C14064 + C15261) * ae) / C13606 + C14061;
    const double C9823 =
        C14064 / C13612 + ((C13736 * C14061 + C15268) * ae) / C13606 + C14119;
    const double C13700 = C13678 - C13699;
    const double C13965 = C13948 - C13964;
    const double C14115 = C14098 - C14114;
    const double C13701 = C13700 - C13680;
    const double C13966 = C13965 - C13939;
    const double C14116 = C14115 - C14089;
    const double C72 =
        (((ae * -2 * C13605) / C13664 -
          (((C13604 * C13672) / C13611 + 2 * C13641) * be) / C13606 -
          C13673 / C13611) /
             C13612 +
         ((C13604 * C13694 + 2 * C13655) * ae) / C13606) /
            C13612 -
        ((C13604 * (C13694 / C13612 +
                    ((C13604 * C13701 + 2 * C13661) * ae) / C13606 + C13696) +
          2 * (C13655 / C13612 + ((C13604 * C13661 + C15130) * ae) / C13606 +
               C13657)) *
         be) /
            C13606 +
        C13701 / C13612 + ((C13604 * C13696 + 2 * C13657) * ae) / C13606 +
        (-2 * C13675) / (C13606 * 4 * C13611);
    const double C74 =
        (C13694 / C13612 + ((C13604 * C13701 + 2 * C13661) * ae) / C13606 +
         C13696) /
            C13612 -
        ((C13604 * (C13701 / C13612 +
                    ((C13604 * C13696 + 2 * C13657) * ae) / C13606 +
                    (-2 * C13675) / C13712) +
          2 * (C13661 / C13612 + ((C13604 * C13657 + C15138) * ae) / C13606 +
               C13711)) *
         be) /
            C13606 +
        2 * (C13696 / C13612 + ((C13711 - C13679 / C13712) * ae) / C13606);
    const double C76 =
        (C13701 / C13612 + ((C13604 * C13696 + 2 * C13657) * ae) / C13606 +
         (-2 * C13675) / C13712) /
            C13612 -
        ((C13604 *
              (C13696 / C13612 + ((C13711 - C13679 / C13712) * ae) / C13606) +
          2 * (C13657 / C13612 + ((C13604 * C13707 + C7734) * ae) / C13606)) *
         be) /
            C13606 +
        (-3 * C13675) / (C13606 * 4 * C13664);
    const double C1285 = C13694 / C13612 -
                         ((C13604 * C13701 + 2 * C13661) * be) / C13606 +
                         C13696;
    const double C1287 = C13701 / C13612 -
                         ((C13604 * C13696 + 2 * C13657) * be) / C13606 +
                         (-2 * C13675) / C13712;
    const double C6637 = C13694 / C13612 +
                         ((C13604 * C13701 + 2 * C13661) * ae) / C13606 +
                         C13696;
    const double C6639 = C13701 / C13612 +
                         ((C13604 * C13696 + 2 * C13657) * ae) / C13606 +
                         (-2 * C13675) / C13712;
    const double C2913 =
        (((ae * -2 * C13872) / C13664 -
          (((C13733 * C13942) / C13611 + 2 * C13908) * be) / C13606 -
          C13943 / C13611) /
             C13612 +
         ((C13733 * C13962 + 2 * C13916) * ae) / C13606) /
            C13612 -
        ((C13733 * (C13962 / C13612 +
                    ((C13733 * C13966 + 2 * C13914) * ae) / C13606 + C13959) +
          2 * (C13916 / C13612 + ((C13733 * C13914 + C15221) * ae) / C13606 +
               C13911)) *
         be) /
            C13606 +
        C13966 / C13612 + ((C13733 * C13959 + 2 * C13911) * ae) / C13606 +
        (-2 * C13770) / C13712;
    const double C2914 =
        (C13962 / C13612 + ((C13733 * C13966 + 2 * C13914) * ae) / C13606 +
         C13959) /
            C13612 -
        ((C13733 * (C13966 / C13612 +
                    ((C13733 * C13959 + 2 * C13911) * ae) / C13606 +
                    (-2 * C13770) / C13712) +
          2 * (C13914 / C13612 + ((C13733 * C13911 + C15228) * ae) / C13606 +
               C13969)) *
         be) /
            C13606 +
        2 * (C13959 / C13612 + ((C13969 - C13773 / C13712) * ae) / C13606);
    const double C2915 =
        (C13966 / C13612 + ((C13733 * C13959 + 2 * C13911) * ae) / C13606 +
         (-2 * C13770) / C13712) /
            C13612 -
        ((C13733 *
              (C13959 / C13612 + ((C13969 - C13773 / C13712) * ae) / C13606) +
          2 * (C13911 / C13612 + ((C13733 * C13922 + C7737) * ae) / C13606)) *
         be) /
            C13606 +
        (-3 * C13770) / (C13606 * 4 * C13664);
    const double C3602 = C13962 / C13612 -
                         ((C13733 * C13966 + 2 * C13914) * be) / C13606 +
                         C13959;
    const double C3603 = C13966 / C13612 -
                         ((C13733 * C13959 + 2 * C13911) * be) / C13606 +
                         (-2 * C13770) / C13712;
    const double C7104 = C13962 / C13612 +
                         ((C13733 * C13966 + 2 * C13914) * ae) / C13606 +
                         C13959;
    const double C7105 = C13966 / C13612 +
                         ((C13733 * C13959 + 2 * C13911) * ae) / C13606 +
                         (-2 * C13770) / C13712;
    const double C5467 =
        (((ae * -2 * C14022) / C13664 -
          (((C13736 * C14092) / C13611 + 2 * C14058) * be) / C13606 -
          C14093 / C13611) /
             C13612 +
         ((C13736 * C14112 + 2 * C14066) * ae) / C13606) /
            C13612 -
        ((C13736 * (C14112 / C13612 +
                    ((C13736 * C14116 + 2 * C14064) * ae) / C13606 + C14109) +
          2 * (C14066 / C13612 + ((C13736 * C14064 + C15261) * ae) / C13606 +
               C14061)) *
         be) /
            C13606 +
        C14116 / C13612 + ((C13736 * C14109 + 2 * C14061) * ae) / C13606 +
        (-2 * C13796) / C13712;
    const double C5468 =
        (C14112 / C13612 + ((C13736 * C14116 + 2 * C14064) * ae) / C13606 +
         C14109) /
            C13612 -
        ((C13736 * (C14116 / C13612 +
                    ((C13736 * C14109 + 2 * C14061) * ae) / C13606 +
                    (-2 * C13796) / C13712) +
          2 * (C14064 / C13612 + ((C13736 * C14061 + C15268) * ae) / C13606 +
               C14119)) *
         be) /
            C13606 +
        2 * (C14109 / C13612 + ((C14119 - C13799 / C13712) * ae) / C13606);
    const double C5469 =
        (C14116 / C13612 + ((C13736 * C14109 + 2 * C14061) * ae) / C13606 +
         (-2 * C13796) / C13712) /
            C13612 -
        ((C13736 *
              (C14109 / C13612 + ((C14119 - C13799 / C13712) * ae) / C13606) +
          2 * (C14061 / C13612 + ((C13736 * C14072 + C10524) * ae) / C13606)) *
         be) /
            C13606 +
        (-3 * C13796) / (C13606 * 4 * C13664);
    const double C6269 = C14112 / C13612 -
                         ((C13736 * C14116 + 2 * C14064) * be) / C13606 +
                         C14109;
    const double C6270 = C14116 / C13612 -
                         ((C13736 * C14109 + 2 * C14061) * be) / C13606 +
                         (-2 * C13796) / C13712;
    const double C10030 = C14112 / C13612 +
                          ((C13736 * C14116 + 2 * C14064) * ae) / C13606 +
                          C14109;
    const double C10031 = C14116 / C13612 +
                          ((C13736 * C14109 + 2 * C14061) * ae) / C13606 +
                          (-2 * C13796) / C13712;
    d2eexx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((C13661 * C86 - C13701 * C81 - C13661 * C87 + C15130 * C96 +
           C13657 * C88 - C13696 * C82 - C13657 * C89 + C15138 * C97 +
           C13707 * C90 - C7743 * C83 - C13707 * C91 + C7734 * C98) *
              C15178 * C15221 +
          (C13661 * C397 - C13701 * C391 - C13661 * C398 + C15130 * C409 +
           C13657 * C399 - C13696 * C392 - C13657 * C400 + C15138 * C410 +
           C13707 * C401 - C7743 * C393 - C13707 * C402 + C7734 * C411) *
              C15178 * C15228 +
          (C13661 * C403 - C13701 * C394 - C13661 * C404 + C15130 * C412 +
           C13657 * C405 - C13696 * C395 - C13657 * C406 + C15138 * C413 +
           C13707 * C407 - C7743 * C396 - C13707 * C408 + C7734 * C414) *
              C15178 * C7737) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((C15221 * C124 - C13914 * C81 + C15228 * C456 -
                    C13911 * C391 + C7737 * C457 - C13922 * C394) *
                       C13661 +
                   (C15221 * C129 - C13914 * C87 + C15228 * C462 -
                    C13911 * C398 + C7737 * C463 - C13922 * C404) *
                       C15130 +
                   (C15221 * C125 - C13914 * C82 + C15228 * C458 -
                    C13911 * C392 + C7737 * C459 - C13922 * C395) *
                       C13657 +
                   (C15221 * C130 - C13914 * C89 + C15228 * C464 -
                    C13911 * C400 + C7737 * C465 - C13922 * C406) *
                       C15138 +
                   (C15221 * C126 - C13914 * C83 + C15228 * C460 -
                    C13911 * C393 + C7737 * C461 - C13922 * C396) *
                       C13707 +
                   (C15221 * C131 - C13914 * C91 + C15228 * C466 -
                    C13911 * C402 + C7737 * C467 - C13922 * C408) *
                       C7734) *
                  C15178 * C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15178 * C157 - C156 * C81) * C13661 +
                    (C15178 * C162 - C156 * C87) * C15130 +
                    (C15178 * C158 - C156 * C82) * C13657 +
                    (C15178 * C163 - C156 * C89) * C15138 +
                    (C15178 * C159 - C156 * C83) * C13707 +
                    (C15178 * C164 - C156 * C91) * C7734) *
                       C15221 +
                   ((C15178 * C506 - C156 * C391) * C13661 +
                    (C15178 * C512 - C156 * C398) * C15130 +
                    (C15178 * C507 - C156 * C392) * C13657 +
                    (C15178 * C513 - C156 * C400) * C15138 +
                    (C15178 * C508 - C156 * C393) * C13707 +
                    (C15178 * C514 - C156 * C402) * C7734) *
                       C15228 +
                   ((C15178 * C509 - C156 * C394) * C13661 +
                    (C15178 * C515 - C156 * C404) * C15130 +
                    (C15178 * C510 - C156 * C395) * C13657 +
                    (C15178 * C516 - C156 * C406) * C15138 +
                    (C15178 * C511 - C156 * C396) * C13707 +
                    (C15178 * C517 - C156 * C408) * C7734) *
                       C7737) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((C15130 * C86 - C13661 * C81 + C15138 * C88 - C13657 * C82 +
                    C7734 * C90 - C13707 * C83) *
                       C13914 +
                   (C15130 * C194 - C13661 * C189 + C15138 * C195 -
                    C13657 * C190 + C7734 * C196 - C13707 * C191) *
                       C15221 +
                   (C15130 * C397 - C13661 * C391 + C15138 * C399 -
                    C13657 * C392 + C7734 * C401 - C13707 * C393) *
                       C13911 +
                   (C15130 * C562 - C13661 * C556 + C15138 * C563 -
                    C13657 * C557 + C7734 * C564 - C13707 * C558) *
                       C15228 +
                   (C15130 * C403 - C13661 * C394 + C15138 * C405 -
                    C13657 * C395 + C7734 * C407 - C13707 * C396) *
                       C13922 +
                   (C15130 * C565 - C13661 * C559 + C15138 * C566 -
                    C13657 * C560 + C7734 * C567 - C13707 * C561) *
                       C7737) *
                  C15178 * C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((C13914 * C124 - C13966 * C81 - C13914 * C189 + C15221 * C222 +
           C13911 * C456 - C13959 * C391 - C13911 * C556 + C15228 * C609 +
           C13922 * C457 - C7901 * C394 - C13922 * C559 + C7737 * C610) *
              C15130 +
          (C13914 * C125 - C13966 * C82 - C13914 * C190 + C15221 * C223 +
           C13911 * C458 - C13959 * C392 - C13911 * C557 + C15228 * C611 +
           C13922 * C459 - C7901 * C395 - C13922 * C560 + C7737 * C612) *
              C15138 +
          (C13914 * C126 - C13966 * C83 - C13914 * C191 + C15221 * C224 +
           C13911 * C460 - C13959 * C393 - C13911 * C558 + C15228 * C613 +
           C13922 * C461 - C7901 * C396 - C13922 * C561 + C7737 * C614) *
              C7734) *
         C15178 * C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15178 * C157 - C156 * C81) * C13914 +
                    (C15178 * C249 - C156 * C189) * C15221 +
                    (C15178 * C506 - C156 * C391) * C13911 +
                    (C15178 * C653 - C156 * C556) * C15228 +
                    (C15178 * C509 - C156 * C394) * C13922 +
                    (C15178 * C654 - C156 * C559) * C7737) *
                       C15130 +
                   ((C15178 * C158 - C156 * C82) * C13914 +
                    (C15178 * C250 - C156 * C190) * C15221 +
                    (C15178 * C507 - C156 * C392) * C13911 +
                    (C15178 * C655 - C156 * C557) * C15228 +
                    (C15178 * C510 - C156 * C395) * C13922 +
                    (C15178 * C656 - C156 * C560) * C7737) *
                       C15138 +
                   ((C15178 * C159 - C156 * C83) * C13914 +
                    (C15178 * C251 - C156 * C191) * C15221 +
                    (C15178 * C508 - C156 * C393) * C13911 +
                    (C15178 * C657 - C156 * C558) * C15228 +
                    (C15178 * C511 - C156 * C396) * C13922 +
                    (C15178 * C658 - C156 * C561) * C7737) *
                       C7734) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15130 * C86 - C13661 * C81 + C15138 * C88 - C13657 * C82 +
                     C7734 * C90 - C13707 * C83) *
                        C156 +
                    (C15130 * C281 - C13661 * C276 + C15138 * C282 -
                     C13657 * C277 + C7734 * C283 - C13707 * C278) *
                        C15178) *
                       C15221 +
                   ((C15130 * C397 - C13661 * C391 + C15138 * C399 -
                     C13657 * C392 + C7734 * C401 - C13707 * C393) *
                        C156 +
                    (C15130 * C703 - C13661 * C697 + C15138 * C704 -
                     C13657 * C698 + C7734 * C705 - C13707 * C699) *
                        C15178) *
                       C15228 +
                   ((C15130 * C403 - C13661 * C394 + C15138 * C405 -
                     C13657 * C395 + C7734 * C407 - C13707 * C396) *
                        C156 +
                    (C15130 * C706 - C13661 * C700 + C15138 * C707 -
                     C13657 * C701 + C7734 * C708 - C13707 * C702) *
                        C15178) *
                       C7737) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15221 * C124 - C13914 * C81 + C15228 * C456 -
                     C13911 * C391 + C7737 * C457 - C13922 * C394) *
                        C156 +
                    (C15221 * C308 - C13914 * C276 + C15228 * C747 -
                     C13911 * C697 + C7737 * C748 - C13922 * C700) *
                        C15178) *
                       C15130 +
                   ((C15221 * C125 - C13914 * C82 + C15228 * C458 -
                     C13911 * C392 + C7737 * C459 - C13922 * C395) *
                        C156 +
                    (C15221 * C309 - C13914 * C277 + C15228 * C749 -
                     C13911 * C698 + C7737 * C750 - C13922 * C701) *
                        C15178) *
                       C15138 +
                   ((C15221 * C126 - C13914 * C83 + C15228 * C460 -
                     C13911 * C393 + C7737 * C461 - C13922 * C396) *
                        C156 +
                    (C15221 * C310 - C13914 * C278 + C15228 * C751 -
                     C13911 * C699 + C7737 * C752 - C13922 * C702) *
                        C15178) *
                       C7734) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C15221 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C15228 +
           (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C7737) *
              C15130 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C15221 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C15228 +
           (C156 * C510 - C335 * C395 - C156 * C701 + C15178 * C794) * C7737) *
              C15138 +
          ((C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C15221 +
           (C156 * C508 - C335 * C393 - C156 * C699 + C15178 * C795) * C15228 +
           (C156 * C511 - C335 * C396 - C156 * C702 + C15178 * C796) * C7737) *
              C7734) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6960 * C86 - C6961 * C81 - C6960 * C87 + C6954 * C96 +
            C6962 * C88 - C6963 * C82 - C6962 * C89 + C15135 * C97) *
               C15447 +
           (C6960 * C844 - C6961 * C838 - C6960 * C845 + C6954 * C856 +
            C6962 * C846 - C6963 * C839 - C6962 * C847 + C15135 * C857) *
               C15265) *
              C15221 +
          ((C6960 * C397 - C6961 * C391 - C6960 * C398 + C6954 * C409 +
            C6962 * C399 - C6963 * C392 - C6962 * C400 + C15135 * C410) *
               C15447 +
           (C6960 * C1965 - C6961 * C1962 - C6960 * C1966 + C6954 * C1971 +
            C6962 * C1967 - C6963 * C1963 - C6962 * C1968 + C15135 * C1972) *
               C15265) *
              C15228 +
          ((C6960 * C403 - C6961 * C394 - C6960 * C404 + C6954 * C412 +
            C6962 * C405 - C6963 * C395 - C6962 * C406 + C15135 * C413) *
               C15447 +
           (C6960 * C3061 - C6961 * C3057 - C6960 * C3062 + C6954 * C3066 +
            C6962 * C3799 - C6963 * C3798 - C6962 * C3800 + C15135 * C3801) *
               C15265) *
              C7737) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15221 * C124 - C13914 * C81 + C15228 * C456 -
                     C13911 * C391 + C7737 * C457 - C13922 * C394) *
                        C6960 +
                    (C15221 * C129 - C13914 * C87 + C15228 * C462 -
                     C13911 * C398 + C7737 * C463 - C13922 * C404) *
                        C6954 +
                    (C15221 * C125 - C13914 * C82 + C15228 * C458 -
                     C13911 * C392 + C7737 * C459 - C13922 * C395) *
                        C6962 +
                    (C15221 * C130 - C13914 * C89 + C15228 * C464 -
                     C13911 * C400 + C7737 * C465 - C13922 * C406) *
                        C15135) *
                       C15447 +
                   ((C15221 * C900 - C13914 * C838 + C15228 * C2024 -
                     C13911 * C1962 + C7737 * C3106 - C13922 * C3057) *
                        C6960 +
                    (C15221 * C906 - C13914 * C845 + C15228 * C2027 -
                     C13911 * C1966 + C7737 * C3109 - C13922 * C3062) *
                        C6954 +
                    (C15221 * C901 - C13914 * C839 + C15228 * C2025 -
                     C13911 * C1963 + C7737 * C3852 - C13922 * C3798) *
                        C6962 +
                    (C15221 * C907 - C13914 * C847 + C15228 * C2028 -
                     C13911 * C1968 + C7737 * C3853 - C13922 * C3800) *
                        C15135) *
                       C15265) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) *
               C6960 +
           (C15447 * C162 - C1694 * C87 + C15265 * C959 - C1695 * C845) *
               C6954 +
           (C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) *
               C6962 +
           (C15447 * C163 - C1694 * C89 + C15265 * C961 - C1695 * C847) *
               C15135) *
              C15221 +
          ((C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C6960 +
           (C15447 * C512 - C1694 * C398 + C15265 * C2083 - C1695 * C1966) *
               C6954 +
           (C15447 * C507 - C1694 * C392 + C15265 * C2081 - C1695 * C1963) *
               C6962 +
           (C15447 * C513 - C1694 * C400 + C15265 * C2084 - C1695 * C1968) *
               C15135) *
              C15228 +
          ((C15447 * C509 - C1694 * C394 + C15265 * C3151 - C1695 * C3057) *
               C6960 +
           (C15447 * C515 - C1694 * C404 + C15265 * C3154 - C1695 * C3062) *
               C6954 +
           (C15447 * C510 - C1694 * C395 + C15265 * C3904 - C1695 * C3798) *
               C6962 +
           (C15447 * C516 - C1694 * C406 + C15265 * C3905 - C1695 * C3800) *
               C15135) *
              C7737) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C13914 +
           (C6954 * C194 - C6960 * C189 + C15135 * C195 - C6962 * C190) *
               C15221 +
           (C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) *
               C13911 +
           (C6954 * C562 - C6960 * C556 + C15135 * C563 - C6962 * C557) *
               C15228 +
           (C6954 * C403 - C6960 * C394 + C15135 * C405 - C6962 * C395) *
               C13922 +
           (C6954 * C565 - C6960 * C559 + C15135 * C566 - C6962 * C560) *
               C7737) *
              C15447 +
          ((C6954 * C844 - C6960 * C838 + C15135 * C846 - C6962 * C839) *
               C13914 +
           (C6954 * C1009 - C6960 * C1003 + C15135 * C1010 - C6962 * C1004) *
               C15221 +
           (C6954 * C1965 - C6960 * C1962 + C15135 * C1967 - C6962 * C1963) *
               C13911 +
           (C6954 * C2139 - C6960 * C2136 + C15135 * C2140 - C6962 * C2137) *
               C15228 +
           (C6954 * C3061 - C6960 * C3057 + C15135 * C3799 - C6962 * C3798) *
               C13922 +
           (C6954 * C3197 - C6960 * C3194 + C15135 * C3957 - C6962 * C3956) *
               C7737) *
              C15265) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C13914 * C124 - C13966 * C81 - C13914 * C189 + C15221 * C222 +
            C13911 * C456 - C13959 * C391 - C13911 * C556 + C15228 * C609 +
            C13922 * C457 - C7901 * C394 - C13922 * C559 + C7737 * C610) *
               C6954 +
           (C13914 * C125 - C13966 * C82 - C13914 * C190 + C15221 * C223 +
            C13911 * C458 - C13959 * C392 - C13911 * C557 + C15228 * C611 +
            C13922 * C459 - C7901 * C395 - C13922 * C560 + C7737 * C612) *
               C15135) *
              C15447 +
          ((C13914 * C900 - C13966 * C838 - C13914 * C1003 + C15221 * C1053 +
            C13911 * C2024 - C13959 * C1962 - C13911 * C2136 + C15228 * C2192 +
            C13922 * C3106 - C7901 * C3057 - C13922 * C3194 + C7737 * C3238) *
               C6954 +
           (C13914 * C901 - C13966 * C839 - C13914 * C1004 + C15221 * C1054 +
            C13911 * C2025 - C13959 * C1963 - C13911 * C2137 + C15228 * C2193 +
            C13922 * C3852 - C7901 * C3798 - C13922 * C3956 + C7737 * C4008) *
               C15135) *
              C15265) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) *
               C13914 +
           (C15447 * C249 - C1694 * C189 + C15265 * C1097 - C1695 * C1003) *
               C15221 +
           (C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C13911 +
           (C15447 * C653 - C1694 * C556 + C15265 * C2245 - C1695 * C2136) *
               C15228 +
           (C15447 * C509 - C1694 * C394 + C15265 * C3151 - C1695 * C3057) *
               C13922 +
           (C15447 * C654 - C1694 * C559 + C15265 * C3280 - C1695 * C3194) *
               C7737) *
              C6954 +
          ((C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) *
               C13914 +
           (C15447 * C250 - C1694 * C190 + C15265 * C1099 - C1695 * C1004) *
               C15221 +
           (C15447 * C507 - C1694 * C392 + C15265 * C2081 - C1695 * C1963) *
               C13911 +
           (C15447 * C655 - C1694 * C557 + C15265 * C2246 - C1695 * C2137) *
               C15228 +
           (C15447 * C510 - C1694 * C395 + C15265 * C3904 - C1695 * C3798) *
               C13922 +
           (C15447 * C656 - C1694 * C560 + C15265 * C4059 - C1695 * C3956) *
               C7737) *
              C15135) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C1694 +
           (C6954 * C281 - C6960 * C276 + C15135 * C282 - C6962 * C277) *
               C15447 +
           (C6954 * C844 - C6960 * C838 + C15135 * C846 - C6962 * C839) *
               C1695 +
           (C6954 * C1147 - C6960 * C1141 + C15135 * C1148 - C6962 * C1142) *
               C15265) *
              C15221 +
          ((C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) *
               C1694 +
           (C6954 * C703 - C6960 * C697 + C15135 * C704 - C6962 * C698) *
               C15447 +
           (C6954 * C1965 - C6960 * C1962 + C15135 * C1967 - C6962 * C1963) *
               C1695 +
           (C6954 * C2301 - C6960 * C2298 + C15135 * C2302 - C6962 * C2299) *
               C15265) *
              C15228 +
          ((C6954 * C403 - C6960 * C394 + C15135 * C405 - C6962 * C395) *
               C1694 +
           (C6954 * C706 - C6960 * C700 + C15135 * C707 - C6962 * C701) *
               C15447 +
           (C6954 * C3061 - C6960 * C3057 + C15135 * C3799 - C6962 * C3798) *
               C1695 +
           (C6954 * C3324 - C6960 * C3321 + C15135 * C4111 - C6962 * C4110) *
               C15265) *
              C7737) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15221 * C124 - C13914 * C81 + C15228 * C456 -
                     C13911 * C391 + C7737 * C457 - C13922 * C394) *
                        C1694 +
                    (C15221 * C308 - C13914 * C276 + C15228 * C747 -
                     C13911 * C697 + C7737 * C748 - C13922 * C700) *
                        C15447 +
                    (C15221 * C900 - C13914 * C838 + C15228 * C2024 -
                     C13911 * C1962 + C7737 * C3106 - C13922 * C3057) *
                        C1695 +
                    (C15221 * C1191 - C13914 * C1141 + C15228 * C2354 -
                     C13911 * C2298 + C7737 * C3364 - C13922 * C3321) *
                        C15265) *
                       C6954 +
                   ((C15221 * C125 - C13914 * C82 + C15228 * C458 -
                     C13911 * C392 + C7737 * C459 - C13922 * C395) *
                        C1694 +
                    (C15221 * C309 - C13914 * C277 + C15228 * C749 -
                     C13911 * C698 + C7737 * C750 - C13922 * C701) *
                        C15447 +
                    (C15221 * C901 - C13914 * C839 + C15228 * C2025 -
                     C13911 * C1963 + C7737 * C3852 - C13922 * C3798) *
                        C1695 +
                    (C15221 * C1193 - C13914 * C1142 + C15228 * C2355 -
                     C13911 * C2299 + C7737 * C4162 - C13922 * C4110) *
                        C15265) *
                       C15135) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C1694 * C157 - C1909 * C81 - C1694 * C276 + C15447 * C336 +
            C1695 * C953 - C1910 * C838 - C1695 * C1141 + C15265 * C1238) *
               C15221 +
           (C1694 * C506 - C1909 * C391 - C1694 * C697 + C15447 * C791 +
            C1695 * C2080 - C1910 * C1962 - C1695 * C2298 + C15265 * C2407) *
               C15228 +
           (C1694 * C509 - C1909 * C394 - C1694 * C700 + C15447 * C792 +
            C1695 * C3151 - C1910 * C3057 - C1695 * C3321 + C15265 * C3406) *
               C7737) *
              C6954 +
          ((C1694 * C158 - C1909 * C82 - C1694 * C277 + C15447 * C337 +
            C1695 * C955 - C1910 * C839 - C1695 * C1142 + C15265 * C1240) *
               C15221 +
           (C1694 * C507 - C1909 * C392 - C1694 * C698 + C15447 * C793 +
            C1695 * C2081 - C1910 * C1963 - C1695 * C2299 + C15265 * C2408) *
               C15228 +
           (C1694 * C510 - C1909 * C395 - C1694 * C701 + C15447 * C794 +
            C1695 * C3904 - C1910 * C3798 - C1695 * C4110 + C15265 * C4213) *
               C7737) *
              C15135) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6960 * C86 - C6961 * C81 - C6960 * C87 + C6954 * C96 + C6962 * C88 -
           C6963 * C82 - C6962 * C89 + C15135 * C97) *
              C15178 * C15511 +
          (C6960 * C397 - C6961 * C391 - C6960 * C398 + C6954 * C409 +
           C6962 * C399 - C6963 * C392 - C6962 * C400 + C15135 * C410) *
              C15178 * C15507 +
          (C6960 * C403 - C6961 * C394 - C6960 * C404 + C6954 * C412 +
           C6962 * C405 - C6963 * C395 - C6962 * C406 + C15135 * C413) *
              C15178 * C15497 +
          (C6960 * C2802 - C6961 * C2800 - C6960 * C2803 + C6954 * C2806 +
           C6962 * C3453 - C6963 * C3452 - C6962 * C3454 + C15135 * C3455) *
              C15178 * C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6636 * C86 - C6637 * C81 - C6636 * C87 + C15510 * C96 +
           C6638 * C88 - C6639 * C82 - C6638 * C89 + C15503 * C97 +
           C6640 * C90 - C6641 * C83 - C6640 * C91 + C15490 * C98 +
           C6642 * C92 - C6643 * C84 - C6642 * C93 + C15445 * C99) *
              C15178 * C6634 +
          (C6636 * C397 - C6637 * C391 - C6636 * C398 + C15510 * C409 +
           C6638 * C399 - C6639 * C392 - C6638 * C400 + C15503 * C410 +
           C6640 * C401 - C6641 * C393 - C6640 * C402 + C15490 * C411 +
           C6642 * C1293 - C6643 * C1292 - C6642 * C1294 + C15445 * C1295) *
              C15178 * C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6960 * C86 - C6961 * C81 - C6960 * C87 + C6954 * C96 +
            C6962 * C88 - C6963 * C82 - C6962 * C89 + C15135 * C97) *
               C15505 +
           (C6960 * C844 - C6961 * C838 - C6960 * C845 + C6954 * C856 +
            C6962 * C846 - C6963 * C839 - C6962 * C847 + C15135 * C857) *
               C15494 +
           (C6960 * C850 - C6961 * C841 - C6960 * C851 + C6954 * C859 +
            C6962 * C852 - C6963 * C842 - C6962 * C853 + C15135 * C860) *
               C15475) *
              C6634 +
          ((C6960 * C397 - C6961 * C391 - C6960 * C398 + C6954 * C409 +
            C6962 * C399 - C6963 * C392 - C6962 * C400 + C15135 * C410) *
               C15505 +
           (C6960 * C1965 - C6961 * C1962 - C6960 * C1966 + C6954 * C1971 +
            C6962 * C1967 - C6963 * C1963 - C6962 * C1968 + C15135 * C1972) *
               C15494 +
           (C6960 * C3059 - C6961 * C3056 - C6960 * C3060 + C6954 * C3065 +
            C6962 * C5525 - C6963 * C5524 - C6962 * C5526 + C15135 * C5527) *
               C15475) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C15511 * C124 - C6998 * C81 + C15507 * C456 - C6999 * C391 +
           C15497 * C457 - C7000 * C394 + C15454 * C2835 - C7001 * C2800) *
              C6960 +
          (C15511 * C129 - C6998 * C87 + C15507 * C462 - C6999 * C398 +
           C15497 * C463 - C7000 * C404 + C15454 * C2837 - C7001 * C2803) *
              C6954 +
          (C15511 * C125 - C6998 * C82 + C15507 * C458 - C6999 * C392 +
           C15497 * C459 - C7000 * C395 + C15454 * C3494 - C7001 * C3452) *
              C6962 +
          (C15511 * C130 - C6998 * C89 + C15507 * C464 - C6999 * C400 +
           C15497 * C465 - C7000 * C406 + C15454 * C3495 - C7001 * C3454) *
              C15135) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) * C6636 +
          (C6634 * C129 - C6678 * C87 + C15225 * C462 - C6679 * C398) * C15510 +
          (C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) * C6638 +
          (C6634 * C130 - C6678 * C89 + C15225 * C464 - C6679 * C400) * C15503 +
          (C6634 * C126 - C6678 * C83 + C15225 * C460 - C6679 * C393) * C6640 +
          (C6634 * C131 - C6678 * C91 + C15225 * C466 - C6679 * C402) * C15490 +
          (C6634 * C127 - C6678 * C84 + C15225 * C1332 - C6679 * C1292) *
              C6642 +
          (C6634 * C132 - C6678 * C93 + C15225 * C1333 - C6679 * C1294) *
              C15445) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) * C6960 +
           (C6634 * C129 - C6678 * C87 + C15225 * C462 - C6679 * C398) * C6954 +
           (C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) * C6962 +
           (C6634 * C130 - C6678 * C89 + C15225 * C464 - C6679 * C400) *
               C15135) *
              C15505 +
          ((C6634 * C900 - C6678 * C838 + C15225 * C2024 - C6679 * C1962) *
               C6960 +
           (C6634 * C906 - C6678 * C845 + C15225 * C2027 - C6679 * C1966) *
               C6954 +
           (C6634 * C901 - C6678 * C839 + C15225 * C2025 - C6679 * C1963) *
               C6962 +
           (C6634 * C907 - C6678 * C847 + C15225 * C2028 - C6679 * C1968) *
               C15135) *
              C15494 +
          ((C6634 * C903 - C6678 * C841 + C15225 * C3107 - C6679 * C3056) *
               C6960 +
           (C6634 * C909 - C6678 * C851 + C15225 * C3110 - C6679 * C3060) *
               C6954 +
           (C6634 * C904 - C6678 * C842 + C15225 * C5578 - C6679 * C5524) *
               C6962 +
           (C6634 * C910 - C6678 * C853 + C15225 * C5579 - C6679 * C5526) *
               C15135) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C15178 * C157 - C156 * C81) * C6960 +
                    (C15178 * C162 - C156 * C87) * C6954 +
                    (C15178 * C158 - C156 * C82) * C6962 +
                    (C15178 * C163 - C156 * C89) * C15135) *
                       C15511 +
                   ((C15178 * C506 - C156 * C391) * C6960 +
                    (C15178 * C512 - C156 * C398) * C6954 +
                    (C15178 * C507 - C156 * C392) * C6962 +
                    (C15178 * C513 - C156 * C400) * C15135) *
                       C15507 +
                   ((C15178 * C509 - C156 * C394) * C6960 +
                    (C15178 * C515 - C156 * C404) * C6954 +
                    (C15178 * C510 - C156 * C395) * C6962 +
                    (C15178 * C516 - C156 * C406) * C15135) *
                       C15497 +
                   ((C15178 * C2861 - C156 * C2800) * C6960 +
                    (C15178 * C2863 - C156 * C2803) * C6954 +
                    (C15178 * C3530 - C156 * C3452) * C6962 +
                    (C15178 * C3531 - C156 * C3454) * C15135) *
                       C15454) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C15178 * C157 - C156 * C81) * C6636 +
                    (C15178 * C162 - C156 * C87) * C15510 +
                    (C15178 * C158 - C156 * C82) * C6638 +
                    (C15178 * C163 - C156 * C89) * C15503 +
                    (C15178 * C159 - C156 * C83) * C6640 +
                    (C15178 * C164 - C156 * C91) * C15490 +
                    (C15178 * C160 - C156 * C84) * C6642 +
                    (C15178 * C165 - C156 * C93) * C15445) *
                       C6634 +
                   ((C15178 * C506 - C156 * C391) * C6636 +
                    (C15178 * C512 - C156 * C398) * C15510 +
                    (C15178 * C507 - C156 * C392) * C6638 +
                    (C15178 * C513 - C156 * C400) * C15503 +
                    (C15178 * C508 - C156 * C393) * C6640 +
                    (C15178 * C514 - C156 * C402) * C15490 +
                    (C15178 * C1368 - C156 * C1292) * C6642 +
                    (C15178 * C1369 - C156 * C1294) * C15445) *
                       C15225) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C15505 * C157 - C950 * C81 + C15494 * C953 - C951 * C838 +
                     C15475 * C954 - C952 * C841) *
                        C6960 +
                    (C15505 * C162 - C950 * C87 + C15494 * C959 - C951 * C845 +
                     C15475 * C960 - C952 * C851) *
                        C6954 +
                    (C15505 * C158 - C950 * C82 + C15494 * C955 - C951 * C839 +
                     C15475 * C956 - C952 * C842) *
                        C6962 +
                    (C15505 * C163 - C950 * C89 + C15494 * C961 - C951 * C847 +
                     C15475 * C962 - C952 * C853) *
                        C15135) *
                       C6634 +
                   ((C15505 * C506 - C950 * C391 + C15494 * C2080 -
                     C951 * C1962 + C15475 * C3150 - C952 * C3056) *
                        C6960 +
                    (C15505 * C512 - C950 * C398 + C15494 * C2083 -
                     C951 * C1966 + C15475 * C3153 - C952 * C3060) *
                        C6954 +
                    (C15505 * C507 - C950 * C392 + C15494 * C2081 -
                     C951 * C1963 + C15475 * C5630 - C952 * C5524) *
                        C6962 +
                    (C15505 * C513 - C950 * C400 + C15494 * C2084 -
                     C951 * C1968 + C15475 * C5631 - C952 * C5526) *
                        C15135) *
                       C15225) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C6998 +
          (C6954 * C194 - C6960 * C189 + C15135 * C195 - C6962 * C190) *
              C15511 +
          (C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) * C6999 +
          (C6954 * C562 - C6960 * C556 + C15135 * C563 - C6962 * C557) *
              C15507 +
          (C6954 * C403 - C6960 * C394 + C15135 * C405 - C6962 * C395) * C7000 +
          (C6954 * C565 - C6960 * C559 + C15135 * C566 - C6962 * C560) *
              C15497 +
          (C6954 * C2802 - C6960 * C2800 + C15135 * C3453 - C6962 * C3452) *
              C7001 +
          (C6954 * C2889 - C6960 * C2887 + C15135 * C3567 - C6962 * C3566) *
              C15454) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C15510 * C86 - C6636 * C81 + C15503 * C88 - C6638 * C82 +
           C15490 * C90 - C6640 * C83 + C15445 * C92 - C6642 * C84) *
              C6678 +
          (C15510 * C194 - C6636 * C189 + C15503 * C195 - C6638 * C190 +
           C15490 * C196 - C6640 * C191 + C15445 * C197 - C6642 * C192) *
              C6634 +
          (C15510 * C397 - C6636 * C391 + C15503 * C399 - C6638 * C392 +
           C15490 * C401 - C6640 * C393 + C15445 * C1293 - C6642 * C1292) *
              C6679 +
          (C15510 * C562 - C6636 * C556 + C15503 * C563 - C6638 * C557 +
           C15490 * C564 - C6640 * C558 + C15445 * C1405 - C6642 * C1404) *
              C15225) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C6678 +
           (C6954 * C194 - C6960 * C189 + C15135 * C195 - C6962 * C190) *
               C6634 +
           (C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) *
               C6679 +
           (C6954 * C562 - C6960 * C556 + C15135 * C563 - C6962 * C557) *
               C15225) *
              C15505 +
          ((C6954 * C844 - C6960 * C838 + C15135 * C846 - C6962 * C839) *
               C6678 +
           (C6954 * C1009 - C6960 * C1003 + C15135 * C1010 - C6962 * C1004) *
               C6634 +
           (C6954 * C1965 - C6960 * C1962 + C15135 * C1967 - C6962 * C1963) *
               C6679 +
           (C6954 * C2139 - C6960 * C2136 + C15135 * C2140 - C6962 * C2137) *
               C15225) *
              C15494 +
          ((C6954 * C850 - C6960 * C841 + C15135 * C852 - C6962 * C842) *
               C6678 +
           (C6954 * C1012 - C6960 * C1006 + C15135 * C1013 - C6962 * C1007) *
               C6634 +
           (C6954 * C3059 - C6960 * C3056 + C15135 * C5525 - C6962 * C5524) *
               C6679 +
           (C6954 * C3198 - C6960 * C3195 + C15135 * C5683 - C6962 * C5682) *
               C15225) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6998 * C124 - C7104 * C81 - C6998 * C189 + C15511 * C222 +
           C6999 * C456 - C7105 * C391 - C6999 * C556 + C15507 * C609 +
           C7000 * C457 - C7106 * C394 - C7000 * C559 + C15497 * C610 +
           C7001 * C2835 - C7107 * C2800 - C7001 * C2887 + C15454 * C2918) *
              C6954 +
          (C6998 * C125 - C7104 * C82 - C6998 * C190 + C15511 * C223 +
           C6999 * C458 - C7105 * C392 - C6999 * C557 + C15507 * C611 +
           C7000 * C459 - C7106 * C395 - C7000 * C560 + C15497 * C612 +
           C7001 * C3494 - C7107 * C3452 - C7001 * C3566 + C15454 * C3606) *
              C15135) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6678 * C124 - C6782 * C81 - C6678 * C189 + C6634 * C222 +
           C6679 * C456 - C6783 * C391 - C6679 * C556 + C15225 * C609) *
              C15510 +
          (C6678 * C125 - C6782 * C82 - C6678 * C190 + C6634 * C223 +
           C6679 * C458 - C6783 * C392 - C6679 * C557 + C15225 * C611) *
              C15503 +
          (C6678 * C126 - C6782 * C83 - C6678 * C191 + C6634 * C224 +
           C6679 * C460 - C6783 * C393 - C6679 * C558 + C15225 * C613) *
              C15490 +
          (C6678 * C127 - C6782 * C84 - C6678 * C192 + C6634 * C225 +
           C6679 * C1332 - C6783 * C1292 - C6679 * C1404 + C15225 * C1442) *
              C15445) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6678 * C124 - C6782 * C81 - C6678 * C189 + C6634 * C222 +
            C6679 * C456 - C6783 * C391 - C6679 * C556 + C15225 * C609) *
               C6954 +
           (C6678 * C125 - C6782 * C82 - C6678 * C190 + C6634 * C223 +
            C6679 * C458 - C6783 * C392 - C6679 * C557 + C15225 * C611) *
               C15135) *
              C15505 +
          ((C6678 * C900 - C6782 * C838 - C6678 * C1003 + C6634 * C1053 +
            C6679 * C2024 - C6783 * C1962 - C6679 * C2136 + C15225 * C2192) *
               C6954 +
           (C6678 * C901 - C6782 * C839 - C6678 * C1004 + C6634 * C1054 +
            C6679 * C2025 - C6783 * C1963 - C6679 * C2137 + C15225 * C2193) *
               C15135) *
              C15494 +
          ((C6678 * C903 - C6782 * C841 - C6678 * C1006 + C6634 * C1056 +
            C6679 * C3107 - C6783 * C3056 - C6679 * C3195 + C15225 * C3239) *
               C6954 +
           (C6678 * C904 - C6782 * C842 - C6678 * C1007 + C6634 * C1057 +
            C6679 * C5578 - C6783 * C5524 - C6679 * C5682 + C15225 * C5734) *
               C15135) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C15178 * C157 - C156 * C81) * C6998 +
                    (C15178 * C249 - C156 * C189) * C15511 +
                    (C15178 * C506 - C156 * C391) * C6999 +
                    (C15178 * C653 - C156 * C556) * C15507 +
                    (C15178 * C509 - C156 * C394) * C7000 +
                    (C15178 * C654 - C156 * C559) * C15497 +
                    (C15178 * C2861 - C156 * C2800) * C7001 +
                    (C15178 * C2942 - C156 * C2887) * C15454) *
                       C6954 +
                   ((C15178 * C158 - C156 * C82) * C6998 +
                    (C15178 * C250 - C156 * C190) * C15511 +
                    (C15178 * C507 - C156 * C392) * C6999 +
                    (C15178 * C655 - C156 * C557) * C15507 +
                    (C15178 * C510 - C156 * C395) * C7000 +
                    (C15178 * C656 - C156 * C560) * C15497 +
                    (C15178 * C3530 - C156 * C3452) * C7001 +
                    (C15178 * C3641 - C156 * C3566) * C15454) *
                       C15135) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C15178 * C157 - C156 * C81) * C6678 +
                    (C15178 * C249 - C156 * C189) * C6634 +
                    (C15178 * C506 - C156 * C391) * C6679 +
                    (C15178 * C653 - C156 * C556) * C15225) *
                       C15510 +
                   ((C15178 * C158 - C156 * C82) * C6678 +
                    (C15178 * C250 - C156 * C190) * C6634 +
                    (C15178 * C507 - C156 * C392) * C6679 +
                    (C15178 * C655 - C156 * C557) * C15225) *
                       C15503 +
                   ((C15178 * C159 - C156 * C83) * C6678 +
                    (C15178 * C251 - C156 * C191) * C6634 +
                    (C15178 * C508 - C156 * C393) * C6679 +
                    (C15178 * C657 - C156 * C558) * C15225) *
                       C15490 +
                   ((C15178 * C160 - C156 * C84) * C6678 +
                    (C15178 * C252 - C156 * C192) * C6634 +
                    (C15178 * C1368 - C156 * C1292) * C6679 +
                    (C15178 * C1477 - C156 * C1404) * C15225) *
                       C15445) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C15505 * C157 - C950 * C81 + C15494 * C953 - C951 * C838 +
                     C15475 * C954 - C952 * C841) *
                        C6678 +
                    (C15505 * C249 - C950 * C189 + C15494 * C1097 -
                     C951 * C1003 + C15475 * C1098 - C952 * C1006) *
                        C6634 +
                    (C15505 * C506 - C950 * C391 + C15494 * C2080 -
                     C951 * C1962 + C15475 * C3150 - C952 * C3056) *
                        C6679 +
                    (C15505 * C653 - C950 * C556 + C15494 * C2245 -
                     C951 * C2136 + C15475 * C3279 - C952 * C3195) *
                        C15225) *
                       C6954 +
                   ((C15505 * C158 - C950 * C82 + C15494 * C955 - C951 * C839 +
                     C15475 * C956 - C952 * C842) *
                        C6678 +
                    (C15505 * C250 - C950 * C190 + C15494 * C1099 -
                     C951 * C1004 + C15475 * C1100 - C952 * C1007) *
                        C6634 +
                    (C15505 * C507 - C950 * C392 + C15494 * C2081 -
                     C951 * C1963 + C15475 * C5630 - C952 * C5524) *
                        C6679 +
                    (C15505 * C655 - C950 * C557 + C15494 * C2246 -
                     C951 * C2137 + C15475 * C5785 - C952 * C5682) *
                        C15225) *
                       C15135) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C156 +
           (C6954 * C281 - C6960 * C276 + C15135 * C282 - C6962 * C277) *
               C15178) *
              C15511 +
          ((C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) * C156 +
           (C6954 * C703 - C6960 * C697 + C15135 * C704 - C6962 * C698) *
               C15178) *
              C15507 +
          ((C6954 * C403 - C6960 * C394 + C15135 * C405 - C6962 * C395) * C156 +
           (C6954 * C706 - C6960 * C700 + C15135 * C707 - C6962 * C701) *
               C15178) *
              C15497 +
          ((C6954 * C2802 - C6960 * C2800 + C15135 * C3453 - C6962 * C3452) *
               C156 +
           (C6954 * C2968 - C6960 * C2966 + C15135 * C3677 - C6962 * C3676) *
               C15178) *
              C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15510 * C86 - C6636 * C81 + C15503 * C88 - C6638 * C82 +
            C15490 * C90 - C6640 * C83 + C15445 * C92 - C6642 * C84) *
               C156 +
           (C15510 * C281 - C6636 * C276 + C15503 * C282 - C6638 * C277 +
            C15490 * C283 - C6640 * C278 + C15445 * C284 - C6642 * C279) *
               C15178) *
              C6634 +
          ((C15510 * C397 - C6636 * C391 + C15503 * C399 - C6638 * C392 +
            C15490 * C401 - C6640 * C393 + C15445 * C1293 - C6642 * C1292) *
               C156 +
           (C15510 * C703 - C6636 * C697 + C15503 * C704 - C6638 * C698 +
            C15490 * C705 - C6640 * C699 + C15445 * C1513 - C6642 * C1512) *
               C15178) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C950 +
           (C6954 * C281 - C6960 * C276 + C15135 * C282 - C6962 * C277) *
               C15505 +
           (C6954 * C844 - C6960 * C838 + C15135 * C846 - C6962 * C839) * C951 +
           (C6954 * C1147 - C6960 * C1141 + C15135 * C1148 - C6962 * C1142) *
               C15494 +
           (C6954 * C850 - C6960 * C841 + C15135 * C852 - C6962 * C842) * C952 +
           (C6954 * C1150 - C6960 * C1144 + C15135 * C1151 - C6962 * C1145) *
               C15475) *
              C6634 +
          ((C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) * C950 +
           (C6954 * C703 - C6960 * C697 + C15135 * C704 - C6962 * C698) *
               C15505 +
           (C6954 * C1965 - C6960 * C1962 + C15135 * C1967 - C6962 * C1963) *
               C951 +
           (C6954 * C2301 - C6960 * C2298 + C15135 * C2302 - C6962 * C2299) *
               C15494 +
           (C6954 * C3059 - C6960 * C3056 + C15135 * C5525 - C6962 * C5524) *
               C952 +
           (C6954 * C3323 - C6960 * C3320 + C15135 * C5837 - C6962 * C5836) *
               C15475) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15511 * C124 - C6998 * C81 + C15507 * C456 - C6999 * C391 +
            C15497 * C457 - C7000 * C394 + C15454 * C2835 - C7001 * C2800) *
               C156 +
           (C15511 * C308 - C6998 * C276 + C15507 * C747 - C6999 * C697 +
            C15497 * C748 - C7000 * C700 + C15454 * C2992 - C7001 * C2966) *
               C15178) *
              C6954 +
          ((C15511 * C125 - C6998 * C82 + C15507 * C458 - C6999 * C392 +
            C15497 * C459 - C7000 * C395 + C15454 * C3494 - C7001 * C3452) *
               C156 +
           (C15511 * C309 - C6998 * C277 + C15507 * C749 - C6999 * C698 +
            C15497 * C750 - C7000 * C701 + C15454 * C3712 - C7001 * C3676) *
               C15178) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) * C156 +
           (C6634 * C308 - C6678 * C276 + C15225 * C747 - C6679 * C697) *
               C15178) *
              C15510 +
          ((C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) * C156 +
           (C6634 * C309 - C6678 * C277 + C15225 * C749 - C6679 * C698) *
               C15178) *
              C15503 +
          ((C6634 * C126 - C6678 * C83 + C15225 * C460 - C6679 * C393) * C156 +
           (C6634 * C310 - C6678 * C278 + C15225 * C751 - C6679 * C699) *
               C15178) *
              C15490 +
          ((C6634 * C127 - C6678 * C84 + C15225 * C1332 - C6679 * C1292) *
               C156 +
           (C6634 * C311 - C6678 * C279 + C15225 * C1548 - C6679 * C1512) *
               C15178) *
              C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) * C950 +
           (C6634 * C308 - C6678 * C276 + C15225 * C747 - C6679 * C697) *
               C15505 +
           (C6634 * C900 - C6678 * C838 + C15225 * C2024 - C6679 * C1962) *
               C951 +
           (C6634 * C1191 - C6678 * C1141 + C15225 * C2354 - C6679 * C2298) *
               C15494 +
           (C6634 * C903 - C6678 * C841 + C15225 * C3107 - C6679 * C3056) *
               C952 +
           (C6634 * C1192 - C6678 * C1144 + C15225 * C3365 - C6679 * C3320) *
               C15475) *
              C6954 +
          ((C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) * C950 +
           (C6634 * C309 - C6678 * C277 + C15225 * C749 - C6679 * C698) *
               C15505 +
           (C6634 * C901 - C6678 * C839 + C15225 * C2025 - C6679 * C1963) *
               C951 +
           (C6634 * C1193 - C6678 * C1142 + C15225 * C2355 - C6679 * C2299) *
               C15494 +
           (C6634 * C904 - C6678 * C842 + C15225 * C5578 - C6679 * C5524) *
               C952 +
           (C6634 * C1194 - C6678 * C1145 + C15225 * C5888 - C6679 * C5836) *
               C15475) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C15511 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C15507 +
           (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C15497 +
           (C156 * C2861 - C335 * C2800 - C156 * C2966 + C15178 * C3016) *
               C15454) *
              C6954 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C15511 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C15507 +
           (C156 * C510 - C335 * C395 - C156 * C701 + C15178 * C794) * C15497 +
           (C156 * C3530 - C335 * C3452 - C156 * C3676 + C15178 * C3747) *
               C15454) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C6634 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C15225) *
              C15510 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C6634 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C15225) *
              C15503 +
          ((C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C6634 +
           (C156 * C508 - C335 * C393 - C156 * C699 + C15178 * C795) * C15225) *
              C15490 +
          ((C156 * C160 - C335 * C84 - C156 * C279 + C15178 * C339) * C6634 +
           (C156 * C1368 - C335 * C1292 - C156 * C1512 + C15178 * C1583) *
               C15225) *
              C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C950 * C157 - C1235 * C81 - C950 * C276 + C15505 * C336 +
            C951 * C953 - C1236 * C838 - C951 * C1141 + C15494 * C1238 +
            C952 * C954 - C1237 * C841 - C952 * C1144 + C15475 * C1239) *
               C6634 +
           (C950 * C506 - C1235 * C391 - C950 * C697 + C15505 * C791 +
            C951 * C2080 - C1236 * C1962 - C951 * C2298 + C15494 * C2407 +
            C952 * C3150 - C1237 * C3056 - C952 * C3320 + C15475 * C3405) *
               C15225) *
              C6954 +
          ((C950 * C158 - C1235 * C82 - C950 * C277 + C15505 * C337 +
            C951 * C955 - C1236 * C839 - C951 * C1142 + C15494 * C1240 +
            C952 * C956 - C1237 * C842 - C952 * C1145 + C15475 * C1241) *
               C6634 +
           (C950 * C507 - C1235 * C392 - C950 * C698 + C15505 * C793 +
            C951 * C2081 - C1236 * C1963 - C951 * C2299 + C15494 * C2408 +
            C952 * C5630 - C1237 * C5524 - C952 * C5836 + C15475 * C5939) *
               C15225) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C13661 * C86 - C13701 * C81 - C13661 * C87 + C15130 * C96 +
            C13657 * C88 - C13696 * C82 - C13657 * C89 + C15138 * C97 +
            C13707 * C90 - C7743 * C83 - C13707 * C91 + C7734 * C98) *
               C15447 +
           (C13661 * C844 - C13701 * C838 - C13661 * C845 + C15130 * C856 +
            C13657 * C846 - C13696 * C839 - C13657 * C847 + C15138 * C857 +
            C13707 * C848 - C7743 * C840 - C13707 * C849 + C7734 * C858) *
               C15265) *
              C6634 +
          ((C13661 * C397 - C13701 * C391 - C13661 * C398 + C15130 * C409 +
            C13657 * C399 - C13696 * C392 - C13657 * C400 + C15138 * C410 +
            C13707 * C401 - C7743 * C393 - C13707 * C402 + C7734 * C411) *
               C15447 +
           (C13661 * C1965 - C13701 * C1962 - C13661 * C1966 + C15130 * C1971 +
            C13657 * C1967 - C13696 * C1963 - C13657 * C1968 + C15138 * C1972 +
            C13707 * C1969 - C7743 * C1964 - C13707 * C1970 + C7734 * C1973) *
               C15265) *
              C15225) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) *
               C13661 +
           (C6634 * C129 - C6678 * C87 + C15225 * C462 - C6679 * C398) *
               C15130 +
           (C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) *
               C13657 +
           (C6634 * C130 - C6678 * C89 + C15225 * C464 - C6679 * C400) *
               C15138 +
           (C6634 * C126 - C6678 * C83 + C15225 * C460 - C6679 * C393) *
               C13707 +
           (C6634 * C131 - C6678 * C91 + C15225 * C466 - C6679 * C402) *
               C7734) *
              C15447 +
          ((C6634 * C900 - C6678 * C838 + C15225 * C2024 - C6679 * C1962) *
               C13661 +
           (C6634 * C906 - C6678 * C845 + C15225 * C2027 - C6679 * C1966) *
               C15130 +
           (C6634 * C901 - C6678 * C839 + C15225 * C2025 - C6679 * C1963) *
               C13657 +
           (C6634 * C907 - C6678 * C847 + C15225 * C2028 - C6679 * C1968) *
               C15138 +
           (C6634 * C902 - C6678 * C840 + C15225 * C2026 - C6679 * C1964) *
               C13707 +
           (C6634 * C908 - C6678 * C849 + C15225 * C2029 - C6679 * C1970) *
               C7734) *
              C15265) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) *
               C13661 +
           (C15447 * C162 - C1694 * C87 + C15265 * C959 - C1695 * C845) *
               C15130 +
           (C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) *
               C13657 +
           (C15447 * C163 - C1694 * C89 + C15265 * C961 - C1695 * C847) *
               C15138 +
           (C15447 * C159 - C1694 * C83 + C15265 * C957 - C1695 * C840) *
               C13707 +
           (C15447 * C164 - C1694 * C91 + C15265 * C963 - C1695 * C849) *
               C7734) *
              C6634 +
          ((C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C13661 +
           (C15447 * C512 - C1694 * C398 + C15265 * C2083 - C1695 * C1966) *
               C15130 +
           (C15447 * C507 - C1694 * C392 + C15265 * C2081 - C1695 * C1963) *
               C13657 +
           (C15447 * C513 - C1694 * C400 + C15265 * C2084 - C1695 * C1968) *
               C15138 +
           (C15447 * C508 - C1694 * C393 + C15265 * C2082 - C1695 * C1964) *
               C13707 +
           (C15447 * C514 - C1694 * C402 + C15265 * C2085 - C1695 * C1970) *
               C7734) *
              C15225) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15130 * C86 - C13661 * C81 + C15138 * C88 - C13657 * C82 +
                     C7734 * C90 - C13707 * C83) *
                        C6678 +
                    (C15130 * C194 - C13661 * C189 + C15138 * C195 -
                     C13657 * C190 + C7734 * C196 - C13707 * C191) *
                        C6634 +
                    (C15130 * C397 - C13661 * C391 + C15138 * C399 -
                     C13657 * C392 + C7734 * C401 - C13707 * C393) *
                        C6679 +
                    (C15130 * C562 - C13661 * C556 + C15138 * C563 -
                     C13657 * C557 + C7734 * C564 - C13707 * C558) *
                        C15225) *
                       C15447 +
                   ((C15130 * C844 - C13661 * C838 + C15138 * C846 -
                     C13657 * C839 + C7734 * C848 - C13707 * C840) *
                        C6678 +
                    (C15130 * C1009 - C13661 * C1003 + C15138 * C1010 -
                     C13657 * C1004 + C7734 * C1011 - C13707 * C1005) *
                        C6634 +
                    (C15130 * C1965 - C13661 * C1962 + C15138 * C1967 -
                     C13657 * C1963 + C7734 * C1969 - C13707 * C1964) *
                        C6679 +
                    (C15130 * C2139 - C13661 * C2136 + C15138 * C2140 -
                     C13657 * C2137 + C7734 * C2141 - C13707 * C2138) *
                        C15225) *
                       C15265) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6678 * C124 - C6782 * C81 - C6678 * C189 + C6634 * C222 +
            C6679 * C456 - C6783 * C391 - C6679 * C556 + C15225 * C609) *
               C15130 +
           (C6678 * C125 - C6782 * C82 - C6678 * C190 + C6634 * C223 +
            C6679 * C458 - C6783 * C392 - C6679 * C557 + C15225 * C611) *
               C15138 +
           (C6678 * C126 - C6782 * C83 - C6678 * C191 + C6634 * C224 +
            C6679 * C460 - C6783 * C393 - C6679 * C558 + C15225 * C613) *
               C7734) *
              C15447 +
          ((C6678 * C900 - C6782 * C838 - C6678 * C1003 + C6634 * C1053 +
            C6679 * C2024 - C6783 * C1962 - C6679 * C2136 + C15225 * C2192) *
               C15130 +
           (C6678 * C901 - C6782 * C839 - C6678 * C1004 + C6634 * C1054 +
            C6679 * C2025 - C6783 * C1963 - C6679 * C2137 + C15225 * C2193) *
               C15138 +
           (C6678 * C902 - C6782 * C840 - C6678 * C1005 + C6634 * C1055 +
            C6679 * C2026 - C6783 * C1964 - C6679 * C2138 + C15225 * C2194) *
               C7734) *
              C15265) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) *
               C6678 +
           (C15447 * C249 - C1694 * C189 + C15265 * C1097 - C1695 * C1003) *
               C6634 +
           (C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C6679 +
           (C15447 * C653 - C1694 * C556 + C15265 * C2245 - C1695 * C2136) *
               C15225) *
              C15130 +
          ((C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) *
               C6678 +
           (C15447 * C250 - C1694 * C190 + C15265 * C1099 - C1695 * C1004) *
               C6634 +
           (C15447 * C507 - C1694 * C392 + C15265 * C2081 - C1695 * C1963) *
               C6679 +
           (C15447 * C655 - C1694 * C557 + C15265 * C2246 - C1695 * C2137) *
               C15225) *
              C15138 +
          ((C15447 * C159 - C1694 * C83 + C15265 * C957 - C1695 * C840) *
               C6678 +
           (C15447 * C251 - C1694 * C191 + C15265 * C1101 - C1695 * C1005) *
               C6634 +
           (C15447 * C508 - C1694 * C393 + C15265 * C2082 - C1695 * C1964) *
               C6679 +
           (C15447 * C657 - C1694 * C558 + C15265 * C2247 - C1695 * C2138) *
               C15225) *
              C7734) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15130 * C86 - C13661 * C81 + C15138 * C88 - C13657 * C82 +
                     C7734 * C90 - C13707 * C83) *
                        C1694 +
                    (C15130 * C281 - C13661 * C276 + C15138 * C282 -
                     C13657 * C277 + C7734 * C283 - C13707 * C278) *
                        C15447 +
                    (C15130 * C844 - C13661 * C838 + C15138 * C846 -
                     C13657 * C839 + C7734 * C848 - C13707 * C840) *
                        C1695 +
                    (C15130 * C1147 - C13661 * C1141 + C15138 * C1148 -
                     C13657 * C1142 + C7734 * C1149 - C13707 * C1143) *
                        C15265) *
                       C6634 +
                   ((C15130 * C397 - C13661 * C391 + C15138 * C399 -
                     C13657 * C392 + C7734 * C401 - C13707 * C393) *
                        C1694 +
                    (C15130 * C703 - C13661 * C697 + C15138 * C704 -
                     C13657 * C698 + C7734 * C705 - C13707 * C699) *
                        C15447 +
                    (C15130 * C1965 - C13661 * C1962 + C15138 * C1967 -
                     C13657 * C1963 + C7734 * C1969 - C13707 * C1964) *
                        C1695 +
                    (C15130 * C2301 - C13661 * C2298 + C15138 * C2302 -
                     C13657 * C2299 + C7734 * C2303 - C13707 * C2300) *
                        C15265) *
                       C15225) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) * C1694 +
           (C6634 * C308 - C6678 * C276 + C15225 * C747 - C6679 * C697) *
               C15447 +
           (C6634 * C900 - C6678 * C838 + C15225 * C2024 - C6679 * C1962) *
               C1695 +
           (C6634 * C1191 - C6678 * C1141 + C15225 * C2354 - C6679 * C2298) *
               C15265) *
              C15130 +
          ((C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) * C1694 +
           (C6634 * C309 - C6678 * C277 + C15225 * C749 - C6679 * C698) *
               C15447 +
           (C6634 * C901 - C6678 * C839 + C15225 * C2025 - C6679 * C1963) *
               C1695 +
           (C6634 * C1193 - C6678 * C1142 + C15225 * C2355 - C6679 * C2299) *
               C15265) *
              C15138 +
          ((C6634 * C126 - C6678 * C83 + C15225 * C460 - C6679 * C393) * C1694 +
           (C6634 * C310 - C6678 * C278 + C15225 * C751 - C6679 * C699) *
               C15447 +
           (C6634 * C902 - C6678 * C840 + C15225 * C2026 - C6679 * C1964) *
               C1695 +
           (C6634 * C1195 - C6678 * C1143 + C15225 * C2356 - C6679 * C2300) *
               C15265) *
              C7734) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C1694 * C157 - C1909 * C81 - C1694 * C276 + C15447 * C336 +
            C1695 * C953 - C1910 * C838 - C1695 * C1141 + C15265 * C1238) *
               C6634 +
           (C1694 * C506 - C1909 * C391 - C1694 * C697 + C15447 * C791 +
            C1695 * C2080 - C1910 * C1962 - C1695 * C2298 + C15265 * C2407) *
               C15225) *
              C15130 +
          ((C1694 * C158 - C1909 * C82 - C1694 * C277 + C15447 * C337 +
            C1695 * C955 - C1910 * C839 - C1695 * C1142 + C15265 * C1240) *
               C6634 +
           (C1694 * C507 - C1909 * C392 - C1694 * C698 + C15447 * C793 +
            C1695 * C2081 - C1910 * C1963 - C1695 * C2299 + C15265 * C2408) *
               C15225) *
              C15138 +
          ((C1694 * C159 - C1909 * C83 - C1694 * C278 + C15447 * C338 +
            C1695 * C957 - C1910 * C840 - C1695 * C1143 + C15265 * C1242) *
               C6634 +
           (C1694 * C508 - C1909 * C393 - C1694 * C699 + C15447 * C795 +
            C1695 * C2082 - C1910 * C1964 - C1695 * C2300 + C15265 * C2409) *
               C15225) *
              C7734) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6636 * C86 - C6637 * C81 - C6636 * C87 + C15510 * C96 +
           C6638 * C88 - C6639 * C82 - C6638 * C89 + C15503 * C97 +
           C6640 * C90 - C6641 * C83 - C6640 * C91 + C15490 * C98 +
           C6642 * C92 - C6643 * C84 - C6642 * C93 + C15445 * C99) *
              C15178 * C6634 +
          (C6636 * C397 - C6637 * C391 - C6636 * C398 + C15510 * C409 +
           C6638 * C399 - C6639 * C392 - C6638 * C400 + C15503 * C410 +
           C6640 * C401 - C6641 * C393 - C6640 * C402 + C15490 * C411 +
           C6642 * C1293 - C6643 * C1292 - C6642 * C1294 + C15445 * C1295) *
              C15178 * C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6960 * C86 - C6961 * C81 - C6960 * C87 + C6954 * C96 + C6962 * C88 -
           C6963 * C82 - C6962 * C89 + C15135 * C97) *
              C15178 * C15511 +
          (C6960 * C397 - C6961 * C391 - C6960 * C398 + C6954 * C409 +
           C6962 * C399 - C6963 * C392 - C6962 * C400 + C15135 * C410) *
              C15178 * C15507 +
          (C6960 * C403 - C6961 * C394 - C6960 * C404 + C6954 * C412 +
           C6962 * C405 - C6963 * C395 - C6962 * C406 + C15135 * C413) *
              C15178 * C15497 +
          (C6960 * C2802 - C6961 * C2800 - C6960 * C2803 + C6954 * C2806 +
           C6962 * C3453 - C6963 * C3452 - C6962 * C3454 + C15135 * C3455) *
              C15178 * C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) * C6636 +
          (C6634 * C129 - C6678 * C87 + C15225 * C462 - C6679 * C398) * C15510 +
          (C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) * C6638 +
          (C6634 * C130 - C6678 * C89 + C15225 * C464 - C6679 * C400) * C15503 +
          (C6634 * C126 - C6678 * C83 + C15225 * C460 - C6679 * C393) * C6640 +
          (C6634 * C131 - C6678 * C91 + C15225 * C466 - C6679 * C402) * C15490 +
          (C6634 * C127 - C6678 * C84 + C15225 * C1332 - C6679 * C1292) *
              C6642 +
          (C6634 * C132 - C6678 * C93 + C15225 * C1333 - C6679 * C1294) *
              C15445) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C15511 * C124 - C6998 * C81 + C15507 * C456 - C6999 * C391 +
           C15497 * C457 - C7000 * C394 + C15454 * C2835 - C7001 * C2800) *
              C6960 +
          (C15511 * C129 - C6998 * C87 + C15507 * C462 - C6999 * C398 +
           C15497 * C463 - C7000 * C404 + C15454 * C2837 - C7001 * C2803) *
              C6954 +
          (C15511 * C125 - C6998 * C82 + C15507 * C458 - C6999 * C392 +
           C15497 * C459 - C7000 * C395 + C15454 * C3494 - C7001 * C3452) *
              C6962 +
          (C15511 * C130 - C6998 * C89 + C15507 * C464 - C6999 * C400 +
           C15497 * C465 - C7000 * C406 + C15454 * C3495 - C7001 * C3454) *
              C15135) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C15178 * C157 - C156 * C81) * C6636 +
                    (C15178 * C162 - C156 * C87) * C15510 +
                    (C15178 * C158 - C156 * C82) * C6638 +
                    (C15178 * C163 - C156 * C89) * C15503 +
                    (C15178 * C159 - C156 * C83) * C6640 +
                    (C15178 * C164 - C156 * C91) * C15490 +
                    (C15178 * C160 - C156 * C84) * C6642 +
                    (C15178 * C165 - C156 * C93) * C15445) *
                       C6634 +
                   ((C15178 * C506 - C156 * C391) * C6636 +
                    (C15178 * C512 - C156 * C398) * C15510 +
                    (C15178 * C507 - C156 * C392) * C6638 +
                    (C15178 * C513 - C156 * C400) * C15503 +
                    (C15178 * C508 - C156 * C393) * C6640 +
                    (C15178 * C514 - C156 * C402) * C15490 +
                    (C15178 * C1368 - C156 * C1292) * C6642 +
                    (C15178 * C1369 - C156 * C1294) * C15445) *
                       C15225) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C15178 * C157 - C156 * C81) * C6960 +
                    (C15178 * C162 - C156 * C87) * C6954 +
                    (C15178 * C158 - C156 * C82) * C6962 +
                    (C15178 * C163 - C156 * C89) * C15135) *
                       C15511 +
                   ((C15178 * C506 - C156 * C391) * C6960 +
                    (C15178 * C512 - C156 * C398) * C6954 +
                    (C15178 * C507 - C156 * C392) * C6962 +
                    (C15178 * C513 - C156 * C400) * C15135) *
                       C15507 +
                   ((C15178 * C509 - C156 * C394) * C6960 +
                    (C15178 * C515 - C156 * C404) * C6954 +
                    (C15178 * C510 - C156 * C395) * C6962 +
                    (C15178 * C516 - C156 * C406) * C15135) *
                       C15497 +
                   ((C15178 * C2861 - C156 * C2800) * C6960 +
                    (C15178 * C2863 - C156 * C2803) * C6954 +
                    (C15178 * C3530 - C156 * C3452) * C6962 +
                    (C15178 * C3531 - C156 * C3454) * C15135) *
                       C15454) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C15510 * C86 - C6636 * C81 + C15503 * C88 - C6638 * C82 +
           C15490 * C90 - C6640 * C83 + C15445 * C92 - C6642 * C84) *
              C6678 +
          (C15510 * C194 - C6636 * C189 + C15503 * C195 - C6638 * C190 +
           C15490 * C196 - C6640 * C191 + C15445 * C197 - C6642 * C192) *
              C6634 +
          (C15510 * C397 - C6636 * C391 + C15503 * C399 - C6638 * C392 +
           C15490 * C401 - C6640 * C393 + C15445 * C1293 - C6642 * C1292) *
              C6679 +
          (C15510 * C562 - C6636 * C556 + C15503 * C563 - C6638 * C557 +
           C15490 * C564 - C6640 * C558 + C15445 * C1405 - C6642 * C1404) *
              C15225) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C6998 +
          (C6954 * C194 - C6960 * C189 + C15135 * C195 - C6962 * C190) *
              C15511 +
          (C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) * C6999 +
          (C6954 * C562 - C6960 * C556 + C15135 * C563 - C6962 * C557) *
              C15507 +
          (C6954 * C403 - C6960 * C394 + C15135 * C405 - C6962 * C395) * C7000 +
          (C6954 * C565 - C6960 * C559 + C15135 * C566 - C6962 * C560) *
              C15497 +
          (C6954 * C2802 - C6960 * C2800 + C15135 * C3453 - C6962 * C3452) *
              C7001 +
          (C6954 * C2889 - C6960 * C2887 + C15135 * C3567 - C6962 * C3566) *
              C15454) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6678 * C124 - C6782 * C81 - C6678 * C189 + C6634 * C222 +
           C6679 * C456 - C6783 * C391 - C6679 * C556 + C15225 * C609) *
              C15510 +
          (C6678 * C125 - C6782 * C82 - C6678 * C190 + C6634 * C223 +
           C6679 * C458 - C6783 * C392 - C6679 * C557 + C15225 * C611) *
              C15503 +
          (C6678 * C126 - C6782 * C83 - C6678 * C191 + C6634 * C224 +
           C6679 * C460 - C6783 * C393 - C6679 * C558 + C15225 * C613) *
              C15490 +
          (C6678 * C127 - C6782 * C84 - C6678 * C192 + C6634 * C225 +
           C6679 * C1332 - C6783 * C1292 - C6679 * C1404 + C15225 * C1442) *
              C15445) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6998 * C124 - C7104 * C81 - C6998 * C189 + C15511 * C222 +
           C6999 * C456 - C7105 * C391 - C6999 * C556 + C15507 * C609 +
           C7000 * C457 - C7106 * C394 - C7000 * C559 + C15497 * C610 +
           C7001 * C2835 - C7107 * C2800 - C7001 * C2887 + C15454 * C2918) *
              C6954 +
          (C6998 * C125 - C7104 * C82 - C6998 * C190 + C15511 * C223 +
           C6999 * C458 - C7105 * C392 - C6999 * C557 + C15507 * C611 +
           C7000 * C459 - C7106 * C395 - C7000 * C560 + C15497 * C612 +
           C7001 * C3494 - C7107 * C3452 - C7001 * C3566 + C15454 * C3606) *
              C15135) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C15178 * C157 - C156 * C81) * C6678 +
                    (C15178 * C249 - C156 * C189) * C6634 +
                    (C15178 * C506 - C156 * C391) * C6679 +
                    (C15178 * C653 - C156 * C556) * C15225) *
                       C15510 +
                   ((C15178 * C158 - C156 * C82) * C6678 +
                    (C15178 * C250 - C156 * C190) * C6634 +
                    (C15178 * C507 - C156 * C392) * C6679 +
                    (C15178 * C655 - C156 * C557) * C15225) *
                       C15503 +
                   ((C15178 * C159 - C156 * C83) * C6678 +
                    (C15178 * C251 - C156 * C191) * C6634 +
                    (C15178 * C508 - C156 * C393) * C6679 +
                    (C15178 * C657 - C156 * C558) * C15225) *
                       C15490 +
                   ((C15178 * C160 - C156 * C84) * C6678 +
                    (C15178 * C252 - C156 * C192) * C6634 +
                    (C15178 * C1368 - C156 * C1292) * C6679 +
                    (C15178 * C1477 - C156 * C1404) * C15225) *
                       C15445) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C15178 * C157 - C156 * C81) * C6998 +
                    (C15178 * C249 - C156 * C189) * C15511 +
                    (C15178 * C506 - C156 * C391) * C6999 +
                    (C15178 * C653 - C156 * C556) * C15507 +
                    (C15178 * C509 - C156 * C394) * C7000 +
                    (C15178 * C654 - C156 * C559) * C15497 +
                    (C15178 * C2861 - C156 * C2800) * C7001 +
                    (C15178 * C2942 - C156 * C2887) * C15454) *
                       C6954 +
                   ((C15178 * C158 - C156 * C82) * C6998 +
                    (C15178 * C250 - C156 * C190) * C15511 +
                    (C15178 * C507 - C156 * C392) * C6999 +
                    (C15178 * C655 - C156 * C557) * C15507 +
                    (C15178 * C510 - C156 * C395) * C7000 +
                    (C15178 * C656 - C156 * C560) * C15497 +
                    (C15178 * C3530 - C156 * C3452) * C7001 +
                    (C15178 * C3641 - C156 * C3566) * C15454) *
                       C15135) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15510 * C86 - C6636 * C81 + C15503 * C88 - C6638 * C82 +
            C15490 * C90 - C6640 * C83 + C15445 * C92 - C6642 * C84) *
               C156 +
           (C15510 * C281 - C6636 * C276 + C15503 * C282 - C6638 * C277 +
            C15490 * C283 - C6640 * C278 + C15445 * C284 - C6642 * C279) *
               C15178) *
              C6634 +
          ((C15510 * C397 - C6636 * C391 + C15503 * C399 - C6638 * C392 +
            C15490 * C401 - C6640 * C393 + C15445 * C1293 - C6642 * C1292) *
               C156 +
           (C15510 * C703 - C6636 * C697 + C15503 * C704 - C6638 * C698 +
            C15490 * C705 - C6640 * C699 + C15445 * C1513 - C6642 * C1512) *
               C15178) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C156 +
           (C6954 * C281 - C6960 * C276 + C15135 * C282 - C6962 * C277) *
               C15178) *
              C15511 +
          ((C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) * C156 +
           (C6954 * C703 - C6960 * C697 + C15135 * C704 - C6962 * C698) *
               C15178) *
              C15507 +
          ((C6954 * C403 - C6960 * C394 + C15135 * C405 - C6962 * C395) * C156 +
           (C6954 * C706 - C6960 * C700 + C15135 * C707 - C6962 * C701) *
               C15178) *
              C15497 +
          ((C6954 * C2802 - C6960 * C2800 + C15135 * C3453 - C6962 * C3452) *
               C156 +
           (C6954 * C2968 - C6960 * C2966 + C15135 * C3677 - C6962 * C3676) *
               C15178) *
              C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) * C156 +
           (C6634 * C308 - C6678 * C276 + C15225 * C747 - C6679 * C697) *
               C15178) *
              C15510 +
          ((C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) * C156 +
           (C6634 * C309 - C6678 * C277 + C15225 * C749 - C6679 * C698) *
               C15178) *
              C15503 +
          ((C6634 * C126 - C6678 * C83 + C15225 * C460 - C6679 * C393) * C156 +
           (C6634 * C310 - C6678 * C278 + C15225 * C751 - C6679 * C699) *
               C15178) *
              C15490 +
          ((C6634 * C127 - C6678 * C84 + C15225 * C1332 - C6679 * C1292) *
               C156 +
           (C6634 * C311 - C6678 * C279 + C15225 * C1548 - C6679 * C1512) *
               C15178) *
              C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15511 * C124 - C6998 * C81 + C15507 * C456 - C6999 * C391 +
            C15497 * C457 - C7000 * C394 + C15454 * C2835 - C7001 * C2800) *
               C156 +
           (C15511 * C308 - C6998 * C276 + C15507 * C747 - C6999 * C697 +
            C15497 * C748 - C7000 * C700 + C15454 * C2992 - C7001 * C2966) *
               C15178) *
              C6954 +
          ((C15511 * C125 - C6998 * C82 + C15507 * C458 - C6999 * C392 +
            C15497 * C459 - C7000 * C395 + C15454 * C3494 - C7001 * C3452) *
               C156 +
           (C15511 * C309 - C6998 * C277 + C15507 * C749 - C6999 * C698 +
            C15497 * C750 - C7000 * C701 + C15454 * C3712 - C7001 * C3676) *
               C15178) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C6634 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C15225) *
              C15510 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C6634 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C15225) *
              C15503 +
          ((C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C6634 +
           (C156 * C508 - C335 * C393 - C156 * C699 + C15178 * C795) * C15225) *
              C15490 +
          ((C156 * C160 - C335 * C84 - C156 * C279 + C15178 * C339) * C6634 +
           (C156 * C1368 - C335 * C1292 - C156 * C1512 + C15178 * C1583) *
               C15225) *
              C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C15511 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C15507 +
           (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C15497 +
           (C156 * C2861 - C335 * C2800 - C156 * C2966 + C15178 * C3016) *
               C15454) *
              C6954 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C15511 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C15507 +
           (C156 * C510 - C335 * C395 - C156 * C701 + C15178 * C794) * C15497 +
           (C156 * C3530 - C335 * C3452 - C156 * C3676 + C15178 * C3747) *
               C15454) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C13651 * C86 - C3449 * C81 - C13651 * C87 + C15430 * C96 +
            C13632 * C88 - C3451 * C82 - C13632 * C89 + C15135 * C97) *
               C8988 +
           (C13651 * C844 - C3449 * C838 - C13651 * C845 + C15430 * C856 +
            C13632 * C846 - C3451 * C839 - C13632 * C847 + C15135 * C857) *
               C15265) *
              C15221 +
          ((C13651 * C397 - C3449 * C391 - C13651 * C398 + C15430 * C409 +
            C13632 * C399 - C3451 * C392 - C13632 * C400 + C15135 * C410) *
               C8988 +
           (C13651 * C1965 - C3449 * C1962 - C13651 * C1966 + C15430 * C1971 +
            C13632 * C1967 - C3451 * C1963 - C13632 * C1968 + C15135 * C1972) *
               C15265) *
              C15228 +
          ((C13651 * C403 - C3449 * C394 - C13651 * C404 + C15430 * C412 +
            C13632 * C405 - C3451 * C395 - C13632 * C406 + C15135 * C413) *
               C8988 +
           (C13651 * C3061 - C3449 * C3057 - C13651 * C3062 + C15430 * C3066 +
            C13632 * C3799 - C3451 * C3798 - C13632 * C3800 + C15135 * C3801) *
               C15265) *
              C7737) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15221 * C124 - C13914 * C81 + C15228 * C456 -
                     C13911 * C391 + C7737 * C457 - C13922 * C394) *
                        C13651 +
                    (C15221 * C129 - C13914 * C87 + C15228 * C462 -
                     C13911 * C398 + C7737 * C463 - C13922 * C404) *
                        C15430 +
                    (C15221 * C125 - C13914 * C82 + C15228 * C458 -
                     C13911 * C392 + C7737 * C459 - C13922 * C395) *
                        C13632 +
                    (C15221 * C130 - C13914 * C89 + C15228 * C464 -
                     C13911 * C400 + C7737 * C465 - C13922 * C406) *
                        C15135) *
                       C8988 +
                   ((C15221 * C900 - C13914 * C838 + C15228 * C2024 -
                     C13911 * C1962 + C7737 * C3106 - C13922 * C3057) *
                        C13651 +
                    (C15221 * C906 - C13914 * C845 + C15228 * C2027 -
                     C13911 * C1966 + C7737 * C3109 - C13922 * C3062) *
                        C15430 +
                    (C15221 * C901 - C13914 * C839 + C15228 * C2025 -
                     C13911 * C1963 + C7737 * C3852 - C13922 * C3798) *
                        C13632 +
                    (C15221 * C907 - C13914 * C847 + C15228 * C2028 -
                     C13911 * C1968 + C7737 * C3853 - C13922 * C3800) *
                        C15135) *
                       C15265) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) *
               C13651 +
           (C8988 * C162 - C9058 * C87 + C15265 * C959 - C9059 * C845) *
               C15430 +
           (C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) *
               C13632 +
           (C8988 * C163 - C9058 * C89 + C15265 * C961 - C9059 * C847) *
               C15135) *
              C15221 +
          ((C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C13651 +
           (C8988 * C512 - C9058 * C398 + C15265 * C2083 - C9059 * C1966) *
               C15430 +
           (C8988 * C507 - C9058 * C392 + C15265 * C2081 - C9059 * C1963) *
               C13632 +
           (C8988 * C513 - C9058 * C400 + C15265 * C2084 - C9059 * C1968) *
               C15135) *
              C15228 +
          ((C8988 * C509 - C9058 * C394 + C15265 * C3151 - C9059 * C3057) *
               C13651 +
           (C8988 * C515 - C9058 * C404 + C15265 * C3154 - C9059 * C3062) *
               C15430 +
           (C8988 * C510 - C9058 * C395 + C15265 * C3904 - C9059 * C3798) *
               C13632 +
           (C8988 * C516 - C9058 * C406 + C15265 * C3905 - C9059 * C3800) *
               C15135) *
              C7737) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) *
               C13914 +
           (C15430 * C194 - C13651 * C189 + C15135 * C195 - C13632 * C190) *
               C15221 +
           (C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
               C13911 +
           (C15430 * C562 - C13651 * C556 + C15135 * C563 - C13632 * C557) *
               C15228 +
           (C15430 * C403 - C13651 * C394 + C15135 * C405 - C13632 * C395) *
               C13922 +
           (C15430 * C565 - C13651 * C559 + C15135 * C566 - C13632 * C560) *
               C7737) *
              C8988 +
          ((C15430 * C844 - C13651 * C838 + C15135 * C846 - C13632 * C839) *
               C13914 +
           (C15430 * C1009 - C13651 * C1003 + C15135 * C1010 - C13632 * C1004) *
               C15221 +
           (C15430 * C1965 - C13651 * C1962 + C15135 * C1967 - C13632 * C1963) *
               C13911 +
           (C15430 * C2139 - C13651 * C2136 + C15135 * C2140 - C13632 * C2137) *
               C15228 +
           (C15430 * C3061 - C13651 * C3057 + C15135 * C3799 - C13632 * C3798) *
               C13922 +
           (C15430 * C3197 - C13651 * C3194 + C15135 * C3957 - C13632 * C3956) *
               C7737) *
              C15265) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C13914 * C124 - C13966 * C81 - C13914 * C189 + C15221 * C222 +
            C13911 * C456 - C13959 * C391 - C13911 * C556 + C15228 * C609 +
            C13922 * C457 - C7901 * C394 - C13922 * C559 + C7737 * C610) *
               C15430 +
           (C13914 * C125 - C13966 * C82 - C13914 * C190 + C15221 * C223 +
            C13911 * C458 - C13959 * C392 - C13911 * C557 + C15228 * C611 +
            C13922 * C459 - C7901 * C395 - C13922 * C560 + C7737 * C612) *
               C15135) *
              C8988 +
          ((C13914 * C900 - C13966 * C838 - C13914 * C1003 + C15221 * C1053 +
            C13911 * C2024 - C13959 * C1962 - C13911 * C2136 + C15228 * C2192 +
            C13922 * C3106 - C7901 * C3057 - C13922 * C3194 + C7737 * C3238) *
               C15430 +
           (C13914 * C901 - C13966 * C839 - C13914 * C1004 + C15221 * C1054 +
            C13911 * C2025 - C13959 * C1963 - C13911 * C2137 + C15228 * C2193 +
            C13922 * C3852 - C7901 * C3798 - C13922 * C3956 + C7737 * C4008) *
               C15135) *
              C15265) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) *
               C13914 +
           (C8988 * C249 - C9058 * C189 + C15265 * C1097 - C9059 * C1003) *
               C15221 +
           (C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C13911 +
           (C8988 * C653 - C9058 * C556 + C15265 * C2245 - C9059 * C2136) *
               C15228 +
           (C8988 * C509 - C9058 * C394 + C15265 * C3151 - C9059 * C3057) *
               C13922 +
           (C8988 * C654 - C9058 * C559 + C15265 * C3280 - C9059 * C3194) *
               C7737) *
              C15430 +
          ((C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) *
               C13914 +
           (C8988 * C250 - C9058 * C190 + C15265 * C1099 - C9059 * C1004) *
               C15221 +
           (C8988 * C507 - C9058 * C392 + C15265 * C2081 - C9059 * C1963) *
               C13911 +
           (C8988 * C655 - C9058 * C557 + C15265 * C2246 - C9059 * C2137) *
               C15228 +
           (C8988 * C510 - C9058 * C395 + C15265 * C3904 - C9059 * C3798) *
               C13922 +
           (C8988 * C656 - C9058 * C560 + C15265 * C4059 - C9059 * C3956) *
               C7737) *
              C15135) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C9058 +
           (C15430 * C281 - C13651 * C276 + C15135 * C282 - C13632 * C277) *
               C8988 +
           (C15430 * C844 - C13651 * C838 + C15135 * C846 - C13632 * C839) *
               C9059 +
           (C15430 * C1147 - C13651 * C1141 + C15135 * C1148 - C13632 * C1142) *
               C15265) *
              C15221 +
          ((C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
               C9058 +
           (C15430 * C703 - C13651 * C697 + C15135 * C704 - C13632 * C698) *
               C8988 +
           (C15430 * C1965 - C13651 * C1962 + C15135 * C1967 - C13632 * C1963) *
               C9059 +
           (C15430 * C2301 - C13651 * C2298 + C15135 * C2302 - C13632 * C2299) *
               C15265) *
              C15228 +
          ((C15430 * C403 - C13651 * C394 + C15135 * C405 - C13632 * C395) *
               C9058 +
           (C15430 * C706 - C13651 * C700 + C15135 * C707 - C13632 * C701) *
               C8988 +
           (C15430 * C3061 - C13651 * C3057 + C15135 * C3799 - C13632 * C3798) *
               C9059 +
           (C15430 * C3324 - C13651 * C3321 + C15135 * C4111 - C13632 * C4110) *
               C15265) *
              C7737) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15221 * C124 - C13914 * C81 + C15228 * C456 -
                     C13911 * C391 + C7737 * C457 - C13922 * C394) *
                        C9058 +
                    (C15221 * C308 - C13914 * C276 + C15228 * C747 -
                     C13911 * C697 + C7737 * C748 - C13922 * C700) *
                        C8988 +
                    (C15221 * C900 - C13914 * C838 + C15228 * C2024 -
                     C13911 * C1962 + C7737 * C3106 - C13922 * C3057) *
                        C9059 +
                    (C15221 * C1191 - C13914 * C1141 + C15228 * C2354 -
                     C13911 * C2298 + C7737 * C3364 - C13922 * C3321) *
                        C15265) *
                       C15430 +
                   ((C15221 * C125 - C13914 * C82 + C15228 * C458 -
                     C13911 * C392 + C7737 * C459 - C13922 * C395) *
                        C9058 +
                    (C15221 * C309 - C13914 * C277 + C15228 * C749 -
                     C13911 * C698 + C7737 * C750 - C13922 * C701) *
                        C8988 +
                    (C15221 * C901 - C13914 * C839 + C15228 * C2025 -
                     C13911 * C1963 + C7737 * C3852 - C13922 * C3798) *
                        C9059 +
                    (C15221 * C1193 - C13914 * C1142 + C15228 * C2355 -
                     C13911 * C2299 + C7737 * C4162 - C13922 * C4110) *
                        C15265) *
                       C15135) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C9058 * C157 - C9264 * C81 - C9058 * C276 + C8988 * C336 +
            C9059 * C953 - C9265 * C838 - C9059 * C1141 + C15265 * C1238) *
               C15221 +
           (C9058 * C506 - C9264 * C391 - C9058 * C697 + C8988 * C791 +
            C9059 * C2080 - C9265 * C1962 - C9059 * C2298 + C15265 * C2407) *
               C15228 +
           (C9058 * C509 - C9264 * C394 - C9058 * C700 + C8988 * C792 +
            C9059 * C3151 - C9265 * C3057 - C9059 * C3321 + C15265 * C3406) *
               C7737) *
              C15430 +
          ((C9058 * C158 - C9264 * C82 - C9058 * C277 + C8988 * C337 +
            C9059 * C955 - C9265 * C839 - C9059 * C1142 + C15265 * C1240) *
               C15221 +
           (C9058 * C507 - C9264 * C392 - C9058 * C698 + C8988 * C793 +
            C9059 * C2081 - C9265 * C1963 - C9059 * C2299 + C15265 * C2408) *
               C15228 +
           (C9058 * C510 - C9264 * C395 - C9058 * C701 + C8988 * C794 +
            C9059 * C3904 - C9265 * C3798 - C9059 * C4110 + C15265 * C4213) *
               C7737) *
              C15135) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C15261 +
           (C2798 * C844 - C2799 * C838 - C2798 * C845 + C15125 * C856) *
               C15268 +
           (C2798 * C850 - C2799 * C841 - C2798 * C851 + C15125 * C859) *
               C10524) *
              C15221 +
          ((C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
               C15261 +
           (C2798 * C1965 - C2799 * C1962 - C2798 * C1966 + C15125 * C1971) *
               C15268 +
           (C2798 * C3059 - C2799 * C3056 - C2798 * C3060 + C15125 * C3065) *
               C10524) *
              C15228 +
          ((C2798 * C403 - C2799 * C394 - C2798 * C404 + C15125 * C412) *
               C15261 +
           (C2798 * C3061 - C2799 * C3057 - C2798 * C3062 + C15125 * C3066) *
               C15268 +
           (C2798 * C3063 - C2799 * C3058 - C2798 * C3064 + C15125 * C3067) *
               C10524) *
              C7737) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15221 * C124 - C13914 * C81 + C15228 * C456 -
                     C13911 * C391 + C7737 * C457 - C13922 * C394) *
                        C2798 +
                    (C15221 * C129 - C13914 * C87 + C15228 * C462 -
                     C13911 * C398 + C7737 * C463 - C13922 * C404) *
                        C15125) *
                       C15261 +
                   ((C15221 * C900 - C13914 * C838 + C15228 * C2024 -
                     C13911 * C1962 + C7737 * C3106 - C13922 * C3057) *
                        C2798 +
                    (C15221 * C906 - C13914 * C845 + C15228 * C2027 -
                     C13911 * C1966 + C7737 * C3109 - C13922 * C3062) *
                        C15125) *
                       C15268 +
                   ((C15221 * C903 - C13914 * C841 + C15228 * C3107 -
                     C13911 * C3056 + C7737 * C3108 - C13922 * C3058) *
                        C2798 +
                    (C15221 * C909 - C13914 * C851 + C15228 * C3110 -
                     C13911 * C3060 + C7737 * C3111 - C13922 * C3064) *
                        C15125) *
                       C10524) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexz[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15261 * C157 - C14064 * C81 + C15268 * C953 -
                     C14061 * C838 + C10524 * C954 - C14072 * C841) *
                        C2798 +
                    (C15261 * C162 - C14064 * C87 + C15268 * C959 -
                     C14061 * C845 + C10524 * C960 - C14072 * C851) *
                        C15125) *
                       C15221 +
                   ((C15261 * C506 - C14064 * C391 + C15268 * C2080 -
                     C14061 * C1962 + C10524 * C3150 - C14072 * C3056) *
                        C2798 +
                    (C15261 * C512 - C14064 * C398 + C15268 * C2083 -
                     C14061 * C1966 + C10524 * C3153 - C14072 * C3060) *
                        C15125) *
                       C15228 +
                   ((C15261 * C509 - C14064 * C394 + C15268 * C3151 -
                     C14061 * C3057 + C10524 * C3152 - C14072 * C3058) *
                        C2798 +
                    (C15261 * C515 - C14064 * C404 + C15268 * C3154 -
                     C14061 * C3062 + C10524 * C3155 - C14072 * C3064) *
                        C15125) *
                       C7737) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15125 * C86 - C2798 * C81) * C13914 +
                    (C15125 * C194 - C2798 * C189) * C15221 +
                    (C15125 * C397 - C2798 * C391) * C13911 +
                    (C15125 * C562 - C2798 * C556) * C15228 +
                    (C15125 * C403 - C2798 * C394) * C13922 +
                    (C15125 * C565 - C2798 * C559) * C7737) *
                       C15261 +
                   ((C15125 * C844 - C2798 * C838) * C13914 +
                    (C15125 * C1009 - C2798 * C1003) * C15221 +
                    (C15125 * C1965 - C2798 * C1962) * C13911 +
                    (C15125 * C2139 - C2798 * C2136) * C15228 +
                    (C15125 * C3061 - C2798 * C3057) * C13922 +
                    (C15125 * C3197 - C2798 * C3194) * C7737) *
                       C15268 +
                   ((C15125 * C850 - C2798 * C841) * C13914 +
                    (C15125 * C1012 - C2798 * C1006) * C15221 +
                    (C15125 * C3059 - C2798 * C3056) * C13911 +
                    (C15125 * C3198 - C2798 * C3195) * C15228 +
                    (C15125 * C3063 - C2798 * C3058) * C13922 +
                    (C15125 * C3199 - C2798 * C3196) * C7737) *
                       C10524) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((C13914 * C124 - C13966 * C81 - C13914 * C189 + C15221 * C222 +
           C13911 * C456 - C13959 * C391 - C13911 * C556 + C15228 * C609 +
           C13922 * C457 - C7901 * C394 - C13922 * C559 + C7737 * C610) *
              C15125 * C15261 +
          (C13914 * C900 - C13966 * C838 - C13914 * C1003 + C15221 * C1053 +
           C13911 * C2024 - C13959 * C1962 - C13911 * C2136 + C15228 * C2192 +
           C13922 * C3106 - C7901 * C3057 - C13922 * C3194 + C7737 * C3238) *
              C15125 * C15268 +
          (C13914 * C903 - C13966 * C841 - C13914 * C1006 + C15221 * C1056 +
           C13911 * C3107 - C13959 * C3056 - C13911 * C3195 + C15228 * C3239 +
           C13922 * C3108 - C7901 * C3058 - C13922 * C3196 + C7737 * C3240) *
              C15125 * C10524) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((C15261 * C157 - C14064 * C81 + C15268 * C953 -
                    C14061 * C838 + C10524 * C954 - C14072 * C841) *
                       C13914 +
                   (C15261 * C249 - C14064 * C189 + C15268 * C1097 -
                    C14061 * C1003 + C10524 * C1098 - C14072 * C1006) *
                       C15221 +
                   (C15261 * C506 - C14064 * C391 + C15268 * C2080 -
                    C14061 * C1962 + C10524 * C3150 - C14072 * C3056) *
                       C13911 +
                   (C15261 * C653 - C14064 * C556 + C15268 * C2245 -
                    C14061 * C2136 + C10524 * C3279 - C14072 * C3195) *
                       C15228 +
                   (C15261 * C509 - C14064 * C394 + C15268 * C3151 -
                    C14061 * C3057 + C10524 * C3152 - C14072 * C3058) *
                       C13922 +
                   (C15261 * C654 - C14064 * C559 + C15268 * C3280 -
                    C14061 * C3194 + C10524 * C3281 - C14072 * C3196) *
                       C7737) *
                  C15125 * C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15125 * C86 - C2798 * C81) * C14064 +
                    (C15125 * C281 - C2798 * C276) * C15261 +
                    (C15125 * C844 - C2798 * C838) * C14061 +
                    (C15125 * C1147 - C2798 * C1141) * C15268 +
                    (C15125 * C850 - C2798 * C841) * C14072 +
                    (C15125 * C1150 - C2798 * C1144) * C10524) *
                       C15221 +
                   ((C15125 * C397 - C2798 * C391) * C14064 +
                    (C15125 * C703 - C2798 * C697) * C15261 +
                    (C15125 * C1965 - C2798 * C1962) * C14061 +
                    (C15125 * C2301 - C2798 * C2298) * C15268 +
                    (C15125 * C3059 - C2798 * C3056) * C14072 +
                    (C15125 * C3323 - C2798 * C3320) * C10524) *
                       C15228 +
                   ((C15125 * C403 - C2798 * C394) * C14064 +
                    (C15125 * C706 - C2798 * C700) * C15261 +
                    (C15125 * C3061 - C2798 * C3057) * C14061 +
                    (C15125 * C3324 - C2798 * C3321) * C15268 +
                    (C15125 * C3063 - C2798 * C3058) * C14072 +
                    (C15125 * C3325 - C2798 * C3322) * C10524) *
                       C7737) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezy[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((C15221 * C124 - C13914 * C81 + C15228 * C456 -
                    C13911 * C391 + C7737 * C457 - C13922 * C394) *
                       C14064 +
                   (C15221 * C308 - C13914 * C276 + C15228 * C747 -
                    C13911 * C697 + C7737 * C748 - C13922 * C700) *
                       C15261 +
                   (C15221 * C900 - C13914 * C838 + C15228 * C2024 -
                    C13911 * C1962 + C7737 * C3106 - C13922 * C3057) *
                       C14061 +
                   (C15221 * C1191 - C13914 * C1141 + C15228 * C2354 -
                    C13911 * C2298 + C7737 * C3364 - C13922 * C3321) *
                       C15268 +
                   (C15221 * C903 - C13914 * C841 + C15228 * C3107 -
                    C13911 * C3056 + C7737 * C3108 - C13922 * C3058) *
                       C14072 +
                   (C15221 * C1192 - C13914 * C1144 + C15228 * C3365 -
                    C13911 * C3320 + C7737 * C3366 - C13922 * C3322) *
                       C10524) *
                  C15125 * C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((C14064 * C157 - C14116 * C81 - C14064 * C276 + C15261 * C336 +
           C14061 * C953 - C14109 * C838 - C14061 * C1141 + C15268 * C1238 +
           C14072 * C954 - C10834 * C841 - C14072 * C1144 + C10524 * C1239) *
              C15221 +
          (C14064 * C506 - C14116 * C391 - C14064 * C697 + C15261 * C791 +
           C14061 * C2080 - C14109 * C1962 - C14061 * C2298 + C15268 * C2407 +
           C14072 * C3150 - C10834 * C3056 - C14072 * C3320 + C10524 * C3405) *
              C15228 +
          (C14064 * C509 - C14116 * C394 - C14064 * C700 + C15261 * C792 +
           C14061 * C3151 - C14109 * C3057 - C14061 * C3321 + C15268 * C3406 +
           C14072 * C3152 - C10834 * C3058 - C14072 * C3322 + C10524 * C3407) *
              C7737) *
         C15125 * C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C8988 +
           (C2798 * C844 - C2799 * C838 - C2798 * C845 + C15125 * C856) *
               C15265) *
              C15511 +
          ((C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
               C8988 +
           (C2798 * C1965 - C2799 * C1962 - C2798 * C1966 + C15125 * C1971) *
               C15265) *
              C15507 +
          ((C2798 * C403 - C2799 * C394 - C2798 * C404 + C15125 * C412) *
               C8988 +
           (C2798 * C3061 - C2799 * C3057 - C2798 * C3062 + C15125 * C3066) *
               C15265) *
              C15497 +
          ((C2798 * C2802 - C2799 * C2800 - C2798 * C2803 + C15125 * C2806) *
               C8988 +
           (C2798 * C4249 - C2799 * C4248 - C2798 * C4250 + C15125 * C4251) *
               C15265) *
              C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2454 * C86 - C2455 * C81 - C2454 * C87 + C15501 * C96 +
            C2456 * C88 - C2457 * C82 - C2456 * C89 + C15488 * C97 +
            C2458 * C90 - C2459 * C83 - C2458 * C91 + C15468 * C98) *
               C8988 +
           (C2454 * C844 - C2455 * C838 - C2454 * C845 + C15501 * C856 +
            C2456 * C846 - C2457 * C839 - C2456 * C847 + C15488 * C857 +
            C2458 * C848 - C2459 * C840 - C2458 * C849 + C15468 * C858) *
               C15265) *
              C6634 +
          ((C2454 * C397 - C2455 * C391 - C2454 * C398 + C15501 * C409 +
            C2456 * C399 - C2457 * C392 - C2456 * C400 + C15488 * C410 +
            C2458 * C401 - C2459 * C393 - C2458 * C402 + C15468 * C411) *
               C8988 +
           (C2454 * C1965 - C2455 * C1962 - C2454 * C1966 + C15501 * C1971 +
            C2456 * C1967 - C2457 * C1963 - C2456 * C1968 + C15488 * C1972 +
            C2458 * C1969 - C2459 * C1964 - C2458 * C1970 + C15468 * C1973) *
               C15265) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C15512 +
           (C2798 * C844 - C2799 * C838 - C2798 * C845 + C15125 * C856) *
               C15509 +
           (C2798 * C850 - C2799 * C841 - C2798 * C851 + C15125 * C859) *
               C15500 +
           (C2798 * C5258 - C2799 * C5256 - C2798 * C5259 + C15125 * C5262) *
               C15461) *
              C6634 +
          ((C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
               C15512 +
           (C2798 * C1965 - C2799 * C1962 - C2798 * C1966 + C15125 * C1971) *
               C15509 +
           (C2798 * C3059 - C2799 * C3056 - C2798 * C3060 + C15125 * C3065) *
               C15500 +
           (C2798 * C6309 - C2799 * C6308 - C2798 * C6310 + C15125 * C6311) *
               C15461) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15511 * C124 - C6998 * C81 + C15507 * C456 - C6999 * C391 +
            C15497 * C457 - C7000 * C394 + C15454 * C2835 - C7001 * C2800) *
               C2798 +
           (C15511 * C129 - C6998 * C87 + C15507 * C462 - C6999 * C398 +
            C15497 * C463 - C7000 * C404 + C15454 * C2837 - C7001 * C2803) *
               C15125) *
              C8988 +
          ((C15511 * C900 - C6998 * C838 + C15507 * C2024 - C6999 * C1962 +
            C15497 * C3106 - C7000 * C3057 + C15454 * C4286 - C7001 * C4248) *
               C2798 +
           (C15511 * C906 - C6998 * C845 + C15507 * C2027 - C6999 * C1966 +
            C15497 * C3109 - C7000 * C3062 + C15454 * C4287 - C7001 * C4250) *
               C15125) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) * C2454 +
           (C6634 * C129 - C6678 * C87 + C15225 * C462 - C6679 * C398) *
               C15501 +
           (C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) * C2456 +
           (C6634 * C130 - C6678 * C89 + C15225 * C464 - C6679 * C400) *
               C15488 +
           (C6634 * C126 - C6678 * C83 + C15225 * C460 - C6679 * C393) * C2458 +
           (C6634 * C131 - C6678 * C91 + C15225 * C466 - C6679 * C402) *
               C15468) *
              C8988 +
          ((C6634 * C900 - C6678 * C838 + C15225 * C2024 - C6679 * C1962) *
               C2454 +
           (C6634 * C906 - C6678 * C845 + C15225 * C2027 - C6679 * C1966) *
               C15501 +
           (C6634 * C901 - C6678 * C839 + C15225 * C2025 - C6679 * C1963) *
               C2456 +
           (C6634 * C907 - C6678 * C847 + C15225 * C2028 - C6679 * C1968) *
               C15488 +
           (C6634 * C902 - C6678 * C840 + C15225 * C2026 - C6679 * C1964) *
               C2458 +
           (C6634 * C908 - C6678 * C849 + C15225 * C2029 - C6679 * C1970) *
               C15468) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) * C2798 +
           (C6634 * C129 - C6678 * C87 + C15225 * C462 - C6679 * C398) *
               C15125) *
              C15512 +
          ((C6634 * C900 - C6678 * C838 + C15225 * C2024 - C6679 * C1962) *
               C2798 +
           (C6634 * C906 - C6678 * C845 + C15225 * C2027 - C6679 * C1966) *
               C15125) *
              C15509 +
          ((C6634 * C903 - C6678 * C841 + C15225 * C3107 - C6679 * C3056) *
               C2798 +
           (C6634 * C909 - C6678 * C851 + C15225 * C3110 - C6679 * C3060) *
               C15125) *
              C15500 +
          ((C6634 * C5286 - C6678 * C5256 + C15225 * C6346 - C6679 * C6308) *
               C2798 +
           (C6634 * C5288 - C6678 * C5259 + C15225 * C6347 - C6679 * C6310) *
               C15125) *
              C15461) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C2798 +
           (C8988 * C162 - C9058 * C87 + C15265 * C959 - C9059 * C845) *
               C15125) *
              C15511 +
          ((C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C2798 +
           (C8988 * C512 - C9058 * C398 + C15265 * C2083 - C9059 * C1966) *
               C15125) *
              C15507 +
          ((C8988 * C509 - C9058 * C394 + C15265 * C3151 - C9059 * C3057) *
               C2798 +
           (C8988 * C515 - C9058 * C404 + C15265 * C3154 - C9059 * C3062) *
               C15125) *
              C15497 +
          ((C8988 * C2861 - C9058 * C2800 + C15265 * C4322 - C9059 * C4248) *
               C2798 +
           (C8988 * C2863 - C9058 * C2803 + C15265 * C4323 - C9059 * C4250) *
               C15125) *
              C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C2454 +
           (C8988 * C162 - C9058 * C87 + C15265 * C959 - C9059 * C845) *
               C15501 +
           (C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) * C2456 +
           (C8988 * C163 - C9058 * C89 + C15265 * C961 - C9059 * C847) *
               C15488 +
           (C8988 * C159 - C9058 * C83 + C15265 * C957 - C9059 * C840) * C2458 +
           (C8988 * C164 - C9058 * C91 + C15265 * C963 - C9059 * C849) *
               C15468) *
              C6634 +
          ((C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C2454 +
           (C8988 * C512 - C9058 * C398 + C15265 * C2083 - C9059 * C1966) *
               C15501 +
           (C8988 * C507 - C9058 * C392 + C15265 * C2081 - C9059 * C1963) *
               C2456 +
           (C8988 * C513 - C9058 * C400 + C15265 * C2084 - C9059 * C1968) *
               C15488 +
           (C8988 * C508 - C9058 * C393 + C15265 * C2082 - C9059 * C1964) *
               C2458 +
           (C8988 * C514 - C9058 * C402 + C15265 * C2085 - C9059 * C1970) *
               C15468) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C15512 * C157 - C9822 * C81 + C15509 * C953 - C9823 * C838 +
            C15500 * C954 - C9824 * C841 + C15461 * C5317 - C9825 * C5256) *
               C2798 +
           (C15512 * C162 - C9822 * C87 + C15509 * C959 - C9823 * C845 +
            C15500 * C960 - C9824 * C851 + C15461 * C5319 - C9825 * C5259) *
               C15125) *
              C6634 +
          ((C15512 * C506 - C9822 * C391 + C15509 * C2080 - C9823 * C1962 +
            C15500 * C3150 - C9824 * C3056 + C15461 * C6382 - C9825 * C6308) *
               C2798 +
           (C15512 * C512 - C9822 * C398 + C15509 * C2083 - C9823 * C1966 +
            C15500 * C3153 - C9824 * C3060 + C15461 * C6383 - C9825 * C6310) *
               C15125) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C15125 * C86 - C2798 * C81) * C6998 +
                    (C15125 * C194 - C2798 * C189) * C15511 +
                    (C15125 * C397 - C2798 * C391) * C6999 +
                    (C15125 * C562 - C2798 * C556) * C15507 +
                    (C15125 * C403 - C2798 * C394) * C7000 +
                    (C15125 * C565 - C2798 * C559) * C15497 +
                    (C15125 * C2802 - C2798 * C2800) * C7001 +
                    (C15125 * C2889 - C2798 * C2887) * C15454) *
                       C8988 +
                   ((C15125 * C844 - C2798 * C838) * C6998 +
                    (C15125 * C1009 - C2798 * C1003) * C15511 +
                    (C15125 * C1965 - C2798 * C1962) * C6999 +
                    (C15125 * C2139 - C2798 * C2136) * C15507 +
                    (C15125 * C3061 - C2798 * C3057) * C7000 +
                    (C15125 * C3197 - C2798 * C3194) * C15497 +
                    (C15125 * C4249 - C2798 * C4248) * C7001 +
                    (C15125 * C4359 - C2798 * C4358) * C15454) *
                       C15265) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
                     C15468 * C90 - C2458 * C83) *
                        C6678 +
                    (C15501 * C194 - C2454 * C189 + C15488 * C195 -
                     C2456 * C190 + C15468 * C196 - C2458 * C191) *
                        C6634 +
                    (C15501 * C397 - C2454 * C391 + C15488 * C399 -
                     C2456 * C392 + C15468 * C401 - C2458 * C393) *
                        C6679 +
                    (C15501 * C562 - C2454 * C556 + C15488 * C563 -
                     C2456 * C557 + C15468 * C564 - C2458 * C558) *
                        C15225) *
                       C8988 +
                   ((C15501 * C844 - C2454 * C838 + C15488 * C846 -
                     C2456 * C839 + C15468 * C848 - C2458 * C840) *
                        C6678 +
                    (C15501 * C1009 - C2454 * C1003 + C15488 * C1010 -
                     C2456 * C1004 + C15468 * C1011 - C2458 * C1005) *
                        C6634 +
                    (C15501 * C1965 - C2454 * C1962 + C15488 * C1967 -
                     C2456 * C1963 + C15468 * C1969 - C2458 * C1964) *
                        C6679 +
                    (C15501 * C2139 - C2454 * C2136 + C15488 * C2140 -
                     C2456 * C2137 + C15468 * C2141 - C2458 * C2138) *
                        C15225) *
                       C15265) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C15125 * C86 - C2798 * C81) * C6678 +
                    (C15125 * C194 - C2798 * C189) * C6634 +
                    (C15125 * C397 - C2798 * C391) * C6679 +
                    (C15125 * C562 - C2798 * C556) * C15225) *
                       C15512 +
                   ((C15125 * C844 - C2798 * C838) * C6678 +
                    (C15125 * C1009 - C2798 * C1003) * C6634 +
                    (C15125 * C1965 - C2798 * C1962) * C6679 +
                    (C15125 * C2139 - C2798 * C2136) * C15225) *
                       C15509 +
                   ((C15125 * C850 - C2798 * C841) * C6678 +
                    (C15125 * C1012 - C2798 * C1006) * C6634 +
                    (C15125 * C3059 - C2798 * C3056) * C6679 +
                    (C15125 * C3198 - C2798 * C3195) * C15225) *
                       C15500 +
                   ((C15125 * C5258 - C2798 * C5256) * C6678 +
                    (C15125 * C5345 - C2798 * C5343) * C6634 +
                    (C15125 * C6309 - C2798 * C6308) * C6679 +
                    (C15125 * C6419 - C2798 * C6418) * C15225) *
                       C15461) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6998 * C124 - C7104 * C81 - C6998 * C189 + C15511 * C222 +
           C6999 * C456 - C7105 * C391 - C6999 * C556 + C15507 * C609 +
           C7000 * C457 - C7106 * C394 - C7000 * C559 + C15497 * C610 +
           C7001 * C2835 - C7107 * C2800 - C7001 * C2887 + C15454 * C2918) *
              C15125 * C8988 +
          (C6998 * C900 - C7104 * C838 - C6998 * C1003 + C15511 * C1053 +
           C6999 * C2024 - C7105 * C1962 - C6999 * C2136 + C15507 * C2192 +
           C7000 * C3106 - C7106 * C3057 - C7000 * C3194 + C15497 * C3238 +
           C7001 * C4286 - C7107 * C4248 - C7001 * C4358 + C15454 * C4394) *
              C15125 * C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6678 * C124 - C6782 * C81 - C6678 * C189 + C6634 * C222 +
            C6679 * C456 - C6783 * C391 - C6679 * C556 + C15225 * C609) *
               C15501 +
           (C6678 * C125 - C6782 * C82 - C6678 * C190 + C6634 * C223 +
            C6679 * C458 - C6783 * C392 - C6679 * C557 + C15225 * C611) *
               C15488 +
           (C6678 * C126 - C6782 * C83 - C6678 * C191 + C6634 * C224 +
            C6679 * C460 - C6783 * C393 - C6679 * C558 + C15225 * C613) *
               C15468) *
              C8988 +
          ((C6678 * C900 - C6782 * C838 - C6678 * C1003 + C6634 * C1053 +
            C6679 * C2024 - C6783 * C1962 - C6679 * C2136 + C15225 * C2192) *
               C15501 +
           (C6678 * C901 - C6782 * C839 - C6678 * C1004 + C6634 * C1054 +
            C6679 * C2025 - C6783 * C1963 - C6679 * C2137 + C15225 * C2193) *
               C15488 +
           (C6678 * C902 - C6782 * C840 - C6678 * C1005 + C6634 * C1055 +
            C6679 * C2026 - C6783 * C1964 - C6679 * C2138 + C15225 * C2194) *
               C15468) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C6678 * C124 - C6782 * C81 - C6678 * C189 + C6634 * C222 +
           C6679 * C456 - C6783 * C391 - C6679 * C556 + C15225 * C609) *
              C15125 * C15512 +
          (C6678 * C900 - C6782 * C838 - C6678 * C1003 + C6634 * C1053 +
           C6679 * C2024 - C6783 * C1962 - C6679 * C2136 + C15225 * C2192) *
              C15125 * C15509 +
          (C6678 * C903 - C6782 * C841 - C6678 * C1006 + C6634 * C1056 +
           C6679 * C3107 - C6783 * C3056 - C6679 * C3195 + C15225 * C3239) *
              C15125 * C15500 +
          (C6678 * C5286 - C6782 * C5256 - C6678 * C5343 + C6634 * C5369 +
           C6679 * C6346 - C6783 * C6308 - C6679 * C6418 + C15225 * C6454) *
              C15125 * C15461) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C6998 +
          (C8988 * C249 - C9058 * C189 + C15265 * C1097 - C9059 * C1003) *
              C15511 +
          (C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
              C6999 +
          (C8988 * C653 - C9058 * C556 + C15265 * C2245 - C9059 * C2136) *
              C15507 +
          (C8988 * C509 - C9058 * C394 + C15265 * C3151 - C9059 * C3057) *
              C7000 +
          (C8988 * C654 - C9058 * C559 + C15265 * C3280 - C9059 * C3194) *
              C15497 +
          (C8988 * C2861 - C9058 * C2800 + C15265 * C4322 - C9059 * C4248) *
              C7001 +
          (C8988 * C2942 - C9058 * C2887 + C15265 * C4429 - C9059 * C4358) *
              C15454) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C6678 +
           (C8988 * C249 - C9058 * C189 + C15265 * C1097 - C9059 * C1003) *
               C6634 +
           (C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C6679 +
           (C8988 * C653 - C9058 * C556 + C15265 * C2245 - C9059 * C2136) *
               C15225) *
              C15501 +
          ((C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) * C6678 +
           (C8988 * C250 - C9058 * C190 + C15265 * C1099 - C9059 * C1004) *
               C6634 +
           (C8988 * C507 - C9058 * C392 + C15265 * C2081 - C9059 * C1963) *
               C6679 +
           (C8988 * C655 - C9058 * C557 + C15265 * C2246 - C9059 * C2137) *
               C15225) *
              C15488 +
          ((C8988 * C159 - C9058 * C83 + C15265 * C957 - C9059 * C840) * C6678 +
           (C8988 * C251 - C9058 * C191 + C15265 * C1101 - C9059 * C1005) *
               C6634 +
           (C8988 * C508 - C9058 * C393 + C15265 * C2082 - C9059 * C1964) *
               C6679 +
           (C8988 * C657 - C9058 * C558 + C15265 * C2247 - C9059 * C2138) *
               C15225) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C15512 * C157 - C9822 * C81 + C15509 * C953 - C9823 * C838 +
           C15500 * C954 - C9824 * C841 + C15461 * C5317 - C9825 * C5256) *
              C6678 +
          (C15512 * C249 - C9822 * C189 + C15509 * C1097 - C9823 * C1003 +
           C15500 * C1098 - C9824 * C1006 + C15461 * C5393 - C9825 * C5343) *
              C6634 +
          (C15512 * C506 - C9822 * C391 + C15509 * C2080 - C9823 * C1962 +
           C15500 * C3150 - C9824 * C3056 + C15461 * C6382 - C9825 * C6308) *
              C6679 +
          (C15512 * C653 - C9822 * C556 + C15509 * C2245 - C9823 * C2136 +
           C15500 * C3279 - C9824 * C3195 + C15461 * C6489 - C9825 * C6418) *
              C15225) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C15125 * C86 - C2798 * C81) * C9058 +
                    (C15125 * C281 - C2798 * C276) * C8988 +
                    (C15125 * C844 - C2798 * C838) * C9059 +
                    (C15125 * C1147 - C2798 * C1141) * C15265) *
                       C15511 +
                   ((C15125 * C397 - C2798 * C391) * C9058 +
                    (C15125 * C703 - C2798 * C697) * C8988 +
                    (C15125 * C1965 - C2798 * C1962) * C9059 +
                    (C15125 * C2301 - C2798 * C2298) * C15265) *
                       C15507 +
                   ((C15125 * C403 - C2798 * C394) * C9058 +
                    (C15125 * C706 - C2798 * C700) * C8988 +
                    (C15125 * C3061 - C2798 * C3057) * C9059 +
                    (C15125 * C3324 - C2798 * C3321) * C15265) *
                       C15497 +
                   ((C15125 * C2802 - C2798 * C2800) * C9058 +
                    (C15125 * C2968 - C2798 * C2966) * C8988 +
                    (C15125 * C4249 - C2798 * C4248) * C9059 +
                    (C15125 * C4465 - C2798 * C4464) * C15265) *
                       C15454) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
                     C15468 * C90 - C2458 * C83) *
                        C9058 +
                    (C15501 * C281 - C2454 * C276 + C15488 * C282 -
                     C2456 * C277 + C15468 * C283 - C2458 * C278) *
                        C8988 +
                    (C15501 * C844 - C2454 * C838 + C15488 * C846 -
                     C2456 * C839 + C15468 * C848 - C2458 * C840) *
                        C9059 +
                    (C15501 * C1147 - C2454 * C1141 + C15488 * C1148 -
                     C2456 * C1142 + C15468 * C1149 - C2458 * C1143) *
                        C15265) *
                       C6634 +
                   ((C15501 * C397 - C2454 * C391 + C15488 * C399 -
                     C2456 * C392 + C15468 * C401 - C2458 * C393) *
                        C9058 +
                    (C15501 * C703 - C2454 * C697 + C15488 * C704 -
                     C2456 * C698 + C15468 * C705 - C2458 * C699) *
                        C8988 +
                    (C15501 * C1965 - C2454 * C1962 + C15488 * C1967 -
                     C2456 * C1963 + C15468 * C1969 - C2458 * C1964) *
                        C9059 +
                    (C15501 * C2301 - C2454 * C2298 + C15488 * C2302 -
                     C2456 * C2299 + C15468 * C2303 - C2458 * C2300) *
                        C15265) *
                       C15225) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C15125 * C86 - C2798 * C81) * C9822 +
                    (C15125 * C281 - C2798 * C276) * C15512 +
                    (C15125 * C844 - C2798 * C838) * C9823 +
                    (C15125 * C1147 - C2798 * C1141) * C15509 +
                    (C15125 * C850 - C2798 * C841) * C9824 +
                    (C15125 * C1150 - C2798 * C1144) * C15500 +
                    (C15125 * C5258 - C2798 * C5256) * C9825 +
                    (C15125 * C5419 - C2798 * C5417) * C15461) *
                       C6634 +
                   ((C15125 * C397 - C2798 * C391) * C9822 +
                    (C15125 * C703 - C2798 * C697) * C15512 +
                    (C15125 * C1965 - C2798 * C1962) * C9823 +
                    (C15125 * C2301 - C2798 * C2298) * C15509 +
                    (C15125 * C3059 - C2798 * C3056) * C9824 +
                    (C15125 * C3323 - C2798 * C3320) * C15500 +
                    (C15125 * C6309 - C2798 * C6308) * C9825 +
                    (C15125 * C6525 - C2798 * C6524) * C15461) *
                       C15225) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C15511 * C124 - C6998 * C81 + C15507 * C456 - C6999 * C391 +
           C15497 * C457 - C7000 * C394 + C15454 * C2835 - C7001 * C2800) *
              C9058 +
          (C15511 * C308 - C6998 * C276 + C15507 * C747 - C6999 * C697 +
           C15497 * C748 - C7000 * C700 + C15454 * C2992 - C7001 * C2966) *
              C8988 +
          (C15511 * C900 - C6998 * C838 + C15507 * C2024 - C6999 * C1962 +
           C15497 * C3106 - C7000 * C3057 + C15454 * C4286 - C7001 * C4248) *
              C9059 +
          (C15511 * C1191 - C6998 * C1141 + C15507 * C2354 - C6999 * C2298 +
           C15497 * C3364 - C7000 * C3321 + C15454 * C4500 - C7001 * C4464) *
              C15265) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) * C9058 +
           (C6634 * C308 - C6678 * C276 + C15225 * C747 - C6679 * C697) *
               C8988 +
           (C6634 * C900 - C6678 * C838 + C15225 * C2024 - C6679 * C1962) *
               C9059 +
           (C6634 * C1191 - C6678 * C1141 + C15225 * C2354 - C6679 * C2298) *
               C15265) *
              C15501 +
          ((C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) * C9058 +
           (C6634 * C309 - C6678 * C277 + C15225 * C749 - C6679 * C698) *
               C8988 +
           (C6634 * C901 - C6678 * C839 + C15225 * C2025 - C6679 * C1963) *
               C9059 +
           (C6634 * C1193 - C6678 * C1142 + C15225 * C2355 - C6679 * C2299) *
               C15265) *
              C15488 +
          ((C6634 * C126 - C6678 * C83 + C15225 * C460 - C6679 * C393) * C9058 +
           (C6634 * C310 - C6678 * C278 + C15225 * C751 - C6679 * C699) *
               C8988 +
           (C6634 * C902 - C6678 * C840 + C15225 * C2026 - C6679 * C1964) *
               C9059 +
           (C6634 * C1195 - C6678 * C1143 + C15225 * C2356 - C6679 * C2300) *
               C15265) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) * C9822 +
          (C6634 * C308 - C6678 * C276 + C15225 * C747 - C6679 * C697) *
              C15512 +
          (C6634 * C900 - C6678 * C838 + C15225 * C2024 - C6679 * C1962) *
              C9823 +
          (C6634 * C1191 - C6678 * C1141 + C15225 * C2354 - C6679 * C2298) *
              C15509 +
          (C6634 * C903 - C6678 * C841 + C15225 * C3107 - C6679 * C3056) *
              C9824 +
          (C6634 * C1192 - C6678 * C1144 + C15225 * C3365 - C6679 * C3320) *
              C15500 +
          (C6634 * C5286 - C6678 * C5256 + C15225 * C6346 - C6679 * C6308) *
              C9825 +
          (C6634 * C5443 - C6678 * C5417 + C15225 * C6560 - C6679 * C6524) *
              C15461) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C9058 * C157 - C9264 * C81 - C9058 * C276 + C8988 * C336 +
           C9059 * C953 - C9265 * C838 - C9059 * C1141 + C15265 * C1238) *
              C15511 +
          (C9058 * C506 - C9264 * C391 - C9058 * C697 + C8988 * C791 +
           C9059 * C2080 - C9265 * C1962 - C9059 * C2298 + C15265 * C2407) *
              C15507 +
          (C9058 * C509 - C9264 * C394 - C9058 * C700 + C8988 * C792 +
           C9059 * C3151 - C9265 * C3057 - C9059 * C3321 + C15265 * C3406) *
              C15497 +
          (C9058 * C2861 - C9264 * C2800 - C9058 * C2966 + C8988 * C3016 +
           C9059 * C4322 - C9265 * C4248 - C9059 * C4464 + C15265 * C4535) *
              C15454) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9058 * C157 - C9264 * C81 - C9058 * C276 + C8988 * C336 +
            C9059 * C953 - C9265 * C838 - C9059 * C1141 + C15265 * C1238) *
               C6634 +
           (C9058 * C506 - C9264 * C391 - C9058 * C697 + C8988 * C791 +
            C9059 * C2080 - C9265 * C1962 - C9059 * C2298 + C15265 * C2407) *
               C15225) *
              C15501 +
          ((C9058 * C158 - C9264 * C82 - C9058 * C277 + C8988 * C337 +
            C9059 * C955 - C9265 * C839 - C9059 * C1142 + C15265 * C1240) *
               C6634 +
           (C9058 * C507 - C9264 * C392 - C9058 * C698 + C8988 * C793 +
            C9059 * C2081 - C9265 * C1963 - C9059 * C2299 + C15265 * C2408) *
               C15225) *
              C15488 +
          ((C9058 * C159 - C9264 * C83 - C9058 * C278 + C8988 * C338 +
            C9059 * C957 - C9265 * C840 - C9059 * C1143 + C15265 * C1242) *
               C6634 +
           (C9058 * C508 - C9264 * C393 - C9058 * C699 + C8988 * C795 +
            C9059 * C2082 - C9265 * C1964 - C9059 * C2300 + C15265 * C2409) *
               C15225) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C9822 * C157 - C10030 * C81 - C9822 * C276 + C15512 * C336 +
           C9823 * C953 - C10031 * C838 - C9823 * C1141 + C15509 * C1238 +
           C9824 * C954 - C10032 * C841 - C9824 * C1144 + C15500 * C1239 +
           C9825 * C5317 - C10033 * C5256 - C9825 * C5417 + C15461 * C5472) *
              C6634 +
          (C9822 * C506 - C10030 * C391 - C9822 * C697 + C15512 * C791 +
           C9823 * C2080 - C10031 * C1962 - C9823 * C2298 + C15509 * C2407 +
           C9824 * C3150 - C10032 * C3056 - C9824 * C3320 + C15500 * C3405 +
           C9825 * C6382 - C10033 * C6308 - C9825 * C6524 + C15461 * C6595) *
              C15225) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C13651 * C86 - C3449 * C81 - C13651 * C87 + C15430 * C96 +
            C13632 * C88 - C3451 * C82 - C13632 * C89 + C15135 * C97) *
               C15261 +
           (C13651 * C844 - C3449 * C838 - C13651 * C845 + C15430 * C856 +
            C13632 * C846 - C3451 * C839 - C13632 * C847 + C15135 * C857) *
               C15268 +
           (C13651 * C850 - C3449 * C841 - C13651 * C851 + C15430 * C859 +
            C13632 * C852 - C3451 * C842 - C13632 * C853 + C15135 * C860) *
               C10524) *
              C6634 +
          ((C13651 * C397 - C3449 * C391 - C13651 * C398 + C15430 * C409 +
            C13632 * C399 - C3451 * C392 - C13632 * C400 + C15135 * C410) *
               C15261 +
           (C13651 * C1965 - C3449 * C1962 - C13651 * C1966 + C15430 * C1971 +
            C13632 * C1967 - C3451 * C1963 - C13632 * C1968 + C15135 * C1972) *
               C15268 +
           (C13651 * C3059 - C3449 * C3056 - C13651 * C3060 + C15430 * C3065 +
            C13632 * C5525 - C3451 * C5524 - C13632 * C5526 + C15135 * C5527) *
               C10524) *
              C15225) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) *
               C13651 +
           (C6634 * C129 - C6678 * C87 + C15225 * C462 - C6679 * C398) *
               C15430 +
           (C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) *
               C13632 +
           (C6634 * C130 - C6678 * C89 + C15225 * C464 - C6679 * C400) *
               C15135) *
              C15261 +
          ((C6634 * C900 - C6678 * C838 + C15225 * C2024 - C6679 * C1962) *
               C13651 +
           (C6634 * C906 - C6678 * C845 + C15225 * C2027 - C6679 * C1966) *
               C15430 +
           (C6634 * C901 - C6678 * C839 + C15225 * C2025 - C6679 * C1963) *
               C13632 +
           (C6634 * C907 - C6678 * C847 + C15225 * C2028 - C6679 * C1968) *
               C15135) *
              C15268 +
          ((C6634 * C903 - C6678 * C841 + C15225 * C3107 - C6679 * C3056) *
               C13651 +
           (C6634 * C909 - C6678 * C851 + C15225 * C3110 - C6679 * C3060) *
               C15430 +
           (C6634 * C904 - C6678 * C842 + C15225 * C5578 - C6679 * C5524) *
               C13632 +
           (C6634 * C910 - C6678 * C853 + C15225 * C5579 - C6679 * C5526) *
               C15135) *
              C10524) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15261 * C157 - C14064 * C81 + C15268 * C953 -
                     C14061 * C838 + C10524 * C954 - C14072 * C841) *
                        C13651 +
                    (C15261 * C162 - C14064 * C87 + C15268 * C959 -
                     C14061 * C845 + C10524 * C960 - C14072 * C851) *
                        C15430 +
                    (C15261 * C158 - C14064 * C82 + C15268 * C955 -
                     C14061 * C839 + C10524 * C956 - C14072 * C842) *
                        C13632 +
                    (C15261 * C163 - C14064 * C89 + C15268 * C961 -
                     C14061 * C847 + C10524 * C962 - C14072 * C853) *
                        C15135) *
                       C6634 +
                   ((C15261 * C506 - C14064 * C391 + C15268 * C2080 -
                     C14061 * C1962 + C10524 * C3150 - C14072 * C3056) *
                        C13651 +
                    (C15261 * C512 - C14064 * C398 + C15268 * C2083 -
                     C14061 * C1966 + C10524 * C3153 - C14072 * C3060) *
                        C15430 +
                    (C15261 * C507 - C14064 * C392 + C15268 * C2081 -
                     C14061 * C1963 + C10524 * C5630 - C14072 * C5524) *
                        C13632 +
                    (C15261 * C513 - C14064 * C400 + C15268 * C2084 -
                     C14061 * C1968 + C10524 * C5631 - C14072 * C5526) *
                        C15135) *
                       C15225) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C6678 +
           (C15430 * C194 - C13651 * C189 + C15135 * C195 - C13632 * C190) *
               C6634 +
           (C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
               C6679 +
           (C15430 * C562 - C13651 * C556 + C15135 * C563 - C13632 * C557) *
               C15225) *
              C15261 +
          ((C15430 * C844 - C13651 * C838 + C15135 * C846 - C13632 * C839) *
               C6678 +
           (C15430 * C1009 - C13651 * C1003 + C15135 * C1010 - C13632 * C1004) *
               C6634 +
           (C15430 * C1965 - C13651 * C1962 + C15135 * C1967 - C13632 * C1963) *
               C6679 +
           (C15430 * C2139 - C13651 * C2136 + C15135 * C2140 - C13632 * C2137) *
               C15225) *
              C15268 +
          ((C15430 * C850 - C13651 * C841 + C15135 * C852 - C13632 * C842) *
               C6678 +
           (C15430 * C1012 - C13651 * C1006 + C15135 * C1013 - C13632 * C1007) *
               C6634 +
           (C15430 * C3059 - C13651 * C3056 + C15135 * C5525 - C13632 * C5524) *
               C6679 +
           (C15430 * C3198 - C13651 * C3195 + C15135 * C5683 - C13632 * C5682) *
               C15225) *
              C10524) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6678 * C124 - C6782 * C81 - C6678 * C189 + C6634 * C222 +
            C6679 * C456 - C6783 * C391 - C6679 * C556 + C15225 * C609) *
               C15430 +
           (C6678 * C125 - C6782 * C82 - C6678 * C190 + C6634 * C223 +
            C6679 * C458 - C6783 * C392 - C6679 * C557 + C15225 * C611) *
               C15135) *
              C15261 +
          ((C6678 * C900 - C6782 * C838 - C6678 * C1003 + C6634 * C1053 +
            C6679 * C2024 - C6783 * C1962 - C6679 * C2136 + C15225 * C2192) *
               C15430 +
           (C6678 * C901 - C6782 * C839 - C6678 * C1004 + C6634 * C1054 +
            C6679 * C2025 - C6783 * C1963 - C6679 * C2137 + C15225 * C2193) *
               C15135) *
              C15268 +
          ((C6678 * C903 - C6782 * C841 - C6678 * C1006 + C6634 * C1056 +
            C6679 * C3107 - C6783 * C3056 - C6679 * C3195 + C15225 * C3239) *
               C15430 +
           (C6678 * C904 - C6782 * C842 - C6678 * C1007 + C6634 * C1057 +
            C6679 * C5578 - C6783 * C5524 - C6679 * C5682 + C15225 * C5734) *
               C15135) *
              C10524) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C15261 * C157 - C14064 * C81 + C15268 * C953 -
                     C14061 * C838 + C10524 * C954 - C14072 * C841) *
                        C6678 +
                    (C15261 * C249 - C14064 * C189 + C15268 * C1097 -
                     C14061 * C1003 + C10524 * C1098 - C14072 * C1006) *
                        C6634 +
                    (C15261 * C506 - C14064 * C391 + C15268 * C2080 -
                     C14061 * C1962 + C10524 * C3150 - C14072 * C3056) *
                        C6679 +
                    (C15261 * C653 - C14064 * C556 + C15268 * C2245 -
                     C14061 * C2136 + C10524 * C3279 - C14072 * C3195) *
                        C15225) *
                       C15430 +
                   ((C15261 * C158 - C14064 * C82 + C15268 * C955 -
                     C14061 * C839 + C10524 * C956 - C14072 * C842) *
                        C6678 +
                    (C15261 * C250 - C14064 * C190 + C15268 * C1099 -
                     C14061 * C1004 + C10524 * C1100 - C14072 * C1007) *
                        C6634 +
                    (C15261 * C507 - C14064 * C392 + C15268 * C2081 -
                     C14061 * C1963 + C10524 * C5630 - C14072 * C5524) *
                        C6679 +
                    (C15261 * C655 - C14064 * C557 + C15268 * C2246 -
                     C14061 * C2137 + C10524 * C5785 - C14072 * C5682) *
                        C15225) *
                       C15135) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) *
               C14064 +
           (C15430 * C281 - C13651 * C276 + C15135 * C282 - C13632 * C277) *
               C15261 +
           (C15430 * C844 - C13651 * C838 + C15135 * C846 - C13632 * C839) *
               C14061 +
           (C15430 * C1147 - C13651 * C1141 + C15135 * C1148 - C13632 * C1142) *
               C15268 +
           (C15430 * C850 - C13651 * C841 + C15135 * C852 - C13632 * C842) *
               C14072 +
           (C15430 * C1150 - C13651 * C1144 + C15135 * C1151 - C13632 * C1145) *
               C10524) *
              C6634 +
          ((C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
               C14064 +
           (C15430 * C703 - C13651 * C697 + C15135 * C704 - C13632 * C698) *
               C15261 +
           (C15430 * C1965 - C13651 * C1962 + C15135 * C1967 - C13632 * C1963) *
               C14061 +
           (C15430 * C2301 - C13651 * C2298 + C15135 * C2302 - C13632 * C2299) *
               C15268 +
           (C15430 * C3059 - C13651 * C3056 + C15135 * C5525 - C13632 * C5524) *
               C14072 +
           (C15430 * C3323 - C13651 * C3320 + C15135 * C5837 - C13632 * C5836) *
               C10524) *
              C15225) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) *
               C14064 +
           (C6634 * C308 - C6678 * C276 + C15225 * C747 - C6679 * C697) *
               C15261 +
           (C6634 * C900 - C6678 * C838 + C15225 * C2024 - C6679 * C1962) *
               C14061 +
           (C6634 * C1191 - C6678 * C1141 + C15225 * C2354 - C6679 * C2298) *
               C15268 +
           (C6634 * C903 - C6678 * C841 + C15225 * C3107 - C6679 * C3056) *
               C14072 +
           (C6634 * C1192 - C6678 * C1144 + C15225 * C3365 - C6679 * C3320) *
               C10524) *
              C15430 +
          ((C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) *
               C14064 +
           (C6634 * C309 - C6678 * C277 + C15225 * C749 - C6679 * C698) *
               C15261 +
           (C6634 * C901 - C6678 * C839 + C15225 * C2025 - C6679 * C1963) *
               C14061 +
           (C6634 * C1193 - C6678 * C1142 + C15225 * C2355 - C6679 * C2299) *
               C15268 +
           (C6634 * C904 - C6678 * C842 + C15225 * C5578 - C6679 * C5524) *
               C14072 +
           (C6634 * C1194 - C6678 * C1145 + C15225 * C5888 - C6679 * C5836) *
               C10524) *
              C15135) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C14064 * C157 - C14116 * C81 - C14064 * C276 + C15261 * C336 +
            C14061 * C953 - C14109 * C838 - C14061 * C1141 + C15268 * C1238 +
            C14072 * C954 - C10834 * C841 - C14072 * C1144 + C10524 * C1239) *
               C6634 +
           (C14064 * C506 - C14116 * C391 - C14064 * C697 + C15261 * C791 +
            C14061 * C2080 - C14109 * C1962 - C14061 * C2298 + C15268 * C2407 +
            C14072 * C3150 - C10834 * C3056 - C14072 * C3320 + C10524 * C3405) *
               C15225) *
              C15430 +
          ((C14064 * C158 - C14116 * C82 - C14064 * C277 + C15261 * C337 +
            C14061 * C955 - C14109 * C839 - C14061 * C1142 + C15268 * C1240 +
            C14072 * C956 - C10834 * C842 - C14072 * C1145 + C10524 * C1241) *
               C6634 +
           (C14064 * C507 - C14116 * C392 - C14064 * C698 + C15261 * C793 +
            C14061 * C2081 - C14109 * C1963 - C14061 * C2299 + C15268 * C2408 +
            C14072 * C5630 - C10834 * C5524 - C14072 * C5836 + C10524 * C5939) *
               C15225) *
              C15135) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2454 * C86 - C2455 * C81 - C2454 * C87 + C15501 * C96 +
            C2456 * C88 - C2457 * C82 - C2456 * C89 + C15488 * C97 +
            C2458 * C90 - C2459 * C83 - C2458 * C91 + C15468 * C98) *
               C8988 +
           (C2454 * C844 - C2455 * C838 - C2454 * C845 + C15501 * C856 +
            C2456 * C846 - C2457 * C839 - C2456 * C847 + C15488 * C857 +
            C2458 * C848 - C2459 * C840 - C2458 * C849 + C15468 * C858) *
               C15265) *
              C6634 +
          ((C2454 * C397 - C2455 * C391 - C2454 * C398 + C15501 * C409 +
            C2456 * C399 - C2457 * C392 - C2456 * C400 + C15488 * C410 +
            C2458 * C401 - C2459 * C393 - C2458 * C402 + C15468 * C411) *
               C8988 +
           (C2454 * C1965 - C2455 * C1962 - C2454 * C1966 + C15501 * C1971 +
            C2456 * C1967 - C2457 * C1963 - C2456 * C1968 + C15488 * C1972 +
            C2458 * C1969 - C2459 * C1964 - C2458 * C1970 + C15468 * C1973) *
               C15265) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C8988 +
           (C2798 * C844 - C2799 * C838 - C2798 * C845 + C15125 * C856) *
               C15265) *
              C15511 +
          ((C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
               C8988 +
           (C2798 * C1965 - C2799 * C1962 - C2798 * C1966 + C15125 * C1971) *
               C15265) *
              C15507 +
          ((C2798 * C403 - C2799 * C394 - C2798 * C404 + C15125 * C412) *
               C8988 +
           (C2798 * C3061 - C2799 * C3057 - C2798 * C3062 + C15125 * C3066) *
               C15265) *
              C15497 +
          ((C2798 * C2802 - C2799 * C2800 - C2798 * C2803 + C15125 * C2806) *
               C8988 +
           (C2798 * C4249 - C2799 * C4248 - C2798 * C4250 + C15125 * C4251) *
               C15265) *
              C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) * C2454 +
           (C6634 * C129 - C6678 * C87 + C15225 * C462 - C6679 * C398) *
               C15501 +
           (C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) * C2456 +
           (C6634 * C130 - C6678 * C89 + C15225 * C464 - C6679 * C400) *
               C15488 +
           (C6634 * C126 - C6678 * C83 + C15225 * C460 - C6679 * C393) * C2458 +
           (C6634 * C131 - C6678 * C91 + C15225 * C466 - C6679 * C402) *
               C15468) *
              C8988 +
          ((C6634 * C900 - C6678 * C838 + C15225 * C2024 - C6679 * C1962) *
               C2454 +
           (C6634 * C906 - C6678 * C845 + C15225 * C2027 - C6679 * C1966) *
               C15501 +
           (C6634 * C901 - C6678 * C839 + C15225 * C2025 - C6679 * C1963) *
               C2456 +
           (C6634 * C907 - C6678 * C847 + C15225 * C2028 - C6679 * C1968) *
               C15488 +
           (C6634 * C902 - C6678 * C840 + C15225 * C2026 - C6679 * C1964) *
               C2458 +
           (C6634 * C908 - C6678 * C849 + C15225 * C2029 - C6679 * C1970) *
               C15468) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15511 * C124 - C6998 * C81 + C15507 * C456 - C6999 * C391 +
            C15497 * C457 - C7000 * C394 + C15454 * C2835 - C7001 * C2800) *
               C2798 +
           (C15511 * C129 - C6998 * C87 + C15507 * C462 - C6999 * C398 +
            C15497 * C463 - C7000 * C404 + C15454 * C2837 - C7001 * C2803) *
               C15125) *
              C8988 +
          ((C15511 * C900 - C6998 * C838 + C15507 * C2024 - C6999 * C1962 +
            C15497 * C3106 - C7000 * C3057 + C15454 * C4286 - C7001 * C4248) *
               C2798 +
           (C15511 * C906 - C6998 * C845 + C15507 * C2027 - C6999 * C1966 +
            C15497 * C3109 - C7000 * C3062 + C15454 * C4287 - C7001 * C4250) *
               C15125) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C2454 +
           (C8988 * C162 - C9058 * C87 + C15265 * C959 - C9059 * C845) *
               C15501 +
           (C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) * C2456 +
           (C8988 * C163 - C9058 * C89 + C15265 * C961 - C9059 * C847) *
               C15488 +
           (C8988 * C159 - C9058 * C83 + C15265 * C957 - C9059 * C840) * C2458 +
           (C8988 * C164 - C9058 * C91 + C15265 * C963 - C9059 * C849) *
               C15468) *
              C6634 +
          ((C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C2454 +
           (C8988 * C512 - C9058 * C398 + C15265 * C2083 - C9059 * C1966) *
               C15501 +
           (C8988 * C507 - C9058 * C392 + C15265 * C2081 - C9059 * C1963) *
               C2456 +
           (C8988 * C513 - C9058 * C400 + C15265 * C2084 - C9059 * C1968) *
               C15488 +
           (C8988 * C508 - C9058 * C393 + C15265 * C2082 - C9059 * C1964) *
               C2458 +
           (C8988 * C514 - C9058 * C402 + C15265 * C2085 - C9059 * C1970) *
               C15468) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C2798 +
           (C8988 * C162 - C9058 * C87 + C15265 * C959 - C9059 * C845) *
               C15125) *
              C15511 +
          ((C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C2798 +
           (C8988 * C512 - C9058 * C398 + C15265 * C2083 - C9059 * C1966) *
               C15125) *
              C15507 +
          ((C8988 * C509 - C9058 * C394 + C15265 * C3151 - C9059 * C3057) *
               C2798 +
           (C8988 * C515 - C9058 * C404 + C15265 * C3154 - C9059 * C3062) *
               C15125) *
              C15497 +
          ((C8988 * C2861 - C9058 * C2800 + C15265 * C4322 - C9059 * C4248) *
               C2798 +
           (C8988 * C2863 - C9058 * C2803 + C15265 * C4323 - C9059 * C4250) *
               C15125) *
              C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
                     C15468 * C90 - C2458 * C83) *
                        C6678 +
                    (C15501 * C194 - C2454 * C189 + C15488 * C195 -
                     C2456 * C190 + C15468 * C196 - C2458 * C191) *
                        C6634 +
                    (C15501 * C397 - C2454 * C391 + C15488 * C399 -
                     C2456 * C392 + C15468 * C401 - C2458 * C393) *
                        C6679 +
                    (C15501 * C562 - C2454 * C556 + C15488 * C563 -
                     C2456 * C557 + C15468 * C564 - C2458 * C558) *
                        C15225) *
                       C8988 +
                   ((C15501 * C844 - C2454 * C838 + C15488 * C846 -
                     C2456 * C839 + C15468 * C848 - C2458 * C840) *
                        C6678 +
                    (C15501 * C1009 - C2454 * C1003 + C15488 * C1010 -
                     C2456 * C1004 + C15468 * C1011 - C2458 * C1005) *
                        C6634 +
                    (C15501 * C1965 - C2454 * C1962 + C15488 * C1967 -
                     C2456 * C1963 + C15468 * C1969 - C2458 * C1964) *
                        C6679 +
                    (C15501 * C2139 - C2454 * C2136 + C15488 * C2140 -
                     C2456 * C2137 + C15468 * C2141 - C2458 * C2138) *
                        C15225) *
                       C15265) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C15125 * C86 - C2798 * C81) * C6998 +
                    (C15125 * C194 - C2798 * C189) * C15511 +
                    (C15125 * C397 - C2798 * C391) * C6999 +
                    (C15125 * C562 - C2798 * C556) * C15507 +
                    (C15125 * C403 - C2798 * C394) * C7000 +
                    (C15125 * C565 - C2798 * C559) * C15497 +
                    (C15125 * C2802 - C2798 * C2800) * C7001 +
                    (C15125 * C2889 - C2798 * C2887) * C15454) *
                       C8988 +
                   ((C15125 * C844 - C2798 * C838) * C6998 +
                    (C15125 * C1009 - C2798 * C1003) * C15511 +
                    (C15125 * C1965 - C2798 * C1962) * C6999 +
                    (C15125 * C2139 - C2798 * C2136) * C15507 +
                    (C15125 * C3061 - C2798 * C3057) * C7000 +
                    (C15125 * C3197 - C2798 * C3194) * C15497 +
                    (C15125 * C4249 - C2798 * C4248) * C7001 +
                    (C15125 * C4359 - C2798 * C4358) * C15454) *
                       C15265) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6678 * C124 - C6782 * C81 - C6678 * C189 + C6634 * C222 +
            C6679 * C456 - C6783 * C391 - C6679 * C556 + C15225 * C609) *
               C15501 +
           (C6678 * C125 - C6782 * C82 - C6678 * C190 + C6634 * C223 +
            C6679 * C458 - C6783 * C392 - C6679 * C557 + C15225 * C611) *
               C15488 +
           (C6678 * C126 - C6782 * C83 - C6678 * C191 + C6634 * C224 +
            C6679 * C460 - C6783 * C393 - C6679 * C558 + C15225 * C613) *
               C15468) *
              C8988 +
          ((C6678 * C900 - C6782 * C838 - C6678 * C1003 + C6634 * C1053 +
            C6679 * C2024 - C6783 * C1962 - C6679 * C2136 + C15225 * C2192) *
               C15501 +
           (C6678 * C901 - C6782 * C839 - C6678 * C1004 + C6634 * C1054 +
            C6679 * C2025 - C6783 * C1963 - C6679 * C2137 + C15225 * C2193) *
               C15488 +
           (C6678 * C902 - C6782 * C840 - C6678 * C1005 + C6634 * C1055 +
            C6679 * C2026 - C6783 * C1964 - C6679 * C2138 + C15225 * C2194) *
               C15468) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6998 * C124 - C7104 * C81 - C6998 * C189 + C15511 * C222 +
           C6999 * C456 - C7105 * C391 - C6999 * C556 + C15507 * C609 +
           C7000 * C457 - C7106 * C394 - C7000 * C559 + C15497 * C610 +
           C7001 * C2835 - C7107 * C2800 - C7001 * C2887 + C15454 * C2918) *
              C15125 * C8988 +
          (C6998 * C900 - C7104 * C838 - C6998 * C1003 + C15511 * C1053 +
           C6999 * C2024 - C7105 * C1962 - C6999 * C2136 + C15507 * C2192 +
           C7000 * C3106 - C7106 * C3057 - C7000 * C3194 + C15497 * C3238 +
           C7001 * C4286 - C7107 * C4248 - C7001 * C4358 + C15454 * C4394) *
              C15125 * C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C6678 +
           (C8988 * C249 - C9058 * C189 + C15265 * C1097 - C9059 * C1003) *
               C6634 +
           (C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C6679 +
           (C8988 * C653 - C9058 * C556 + C15265 * C2245 - C9059 * C2136) *
               C15225) *
              C15501 +
          ((C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) * C6678 +
           (C8988 * C250 - C9058 * C190 + C15265 * C1099 - C9059 * C1004) *
               C6634 +
           (C8988 * C507 - C9058 * C392 + C15265 * C2081 - C9059 * C1963) *
               C6679 +
           (C8988 * C655 - C9058 * C557 + C15265 * C2246 - C9059 * C2137) *
               C15225) *
              C15488 +
          ((C8988 * C159 - C9058 * C83 + C15265 * C957 - C9059 * C840) * C6678 +
           (C8988 * C251 - C9058 * C191 + C15265 * C1101 - C9059 * C1005) *
               C6634 +
           (C8988 * C508 - C9058 * C393 + C15265 * C2082 - C9059 * C1964) *
               C6679 +
           (C8988 * C657 - C9058 * C558 + C15265 * C2247 - C9059 * C2138) *
               C15225) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C6998 +
          (C8988 * C249 - C9058 * C189 + C15265 * C1097 - C9059 * C1003) *
              C15511 +
          (C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
              C6999 +
          (C8988 * C653 - C9058 * C556 + C15265 * C2245 - C9059 * C2136) *
              C15507 +
          (C8988 * C509 - C9058 * C394 + C15265 * C3151 - C9059 * C3057) *
              C7000 +
          (C8988 * C654 - C9058 * C559 + C15265 * C3280 - C9059 * C3194) *
              C15497 +
          (C8988 * C2861 - C9058 * C2800 + C15265 * C4322 - C9059 * C4248) *
              C7001 +
          (C8988 * C2942 - C9058 * C2887 + C15265 * C4429 - C9059 * C4358) *
              C15454) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
                     C15468 * C90 - C2458 * C83) *
                        C9058 +
                    (C15501 * C281 - C2454 * C276 + C15488 * C282 -
                     C2456 * C277 + C15468 * C283 - C2458 * C278) *
                        C8988 +
                    (C15501 * C844 - C2454 * C838 + C15488 * C846 -
                     C2456 * C839 + C15468 * C848 - C2458 * C840) *
                        C9059 +
                    (C15501 * C1147 - C2454 * C1141 + C15488 * C1148 -
                     C2456 * C1142 + C15468 * C1149 - C2458 * C1143) *
                        C15265) *
                       C6634 +
                   ((C15501 * C397 - C2454 * C391 + C15488 * C399 -
                     C2456 * C392 + C15468 * C401 - C2458 * C393) *
                        C9058 +
                    (C15501 * C703 - C2454 * C697 + C15488 * C704 -
                     C2456 * C698 + C15468 * C705 - C2458 * C699) *
                        C8988 +
                    (C15501 * C1965 - C2454 * C1962 + C15488 * C1967 -
                     C2456 * C1963 + C15468 * C1969 - C2458 * C1964) *
                        C9059 +
                    (C15501 * C2301 - C2454 * C2298 + C15488 * C2302 -
                     C2456 * C2299 + C15468 * C2303 - C2458 * C2300) *
                        C15265) *
                       C15225) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C15125 * C86 - C2798 * C81) * C9058 +
                    (C15125 * C281 - C2798 * C276) * C8988 +
                    (C15125 * C844 - C2798 * C838) * C9059 +
                    (C15125 * C1147 - C2798 * C1141) * C15265) *
                       C15511 +
                   ((C15125 * C397 - C2798 * C391) * C9058 +
                    (C15125 * C703 - C2798 * C697) * C8988 +
                    (C15125 * C1965 - C2798 * C1962) * C9059 +
                    (C15125 * C2301 - C2798 * C2298) * C15265) *
                       C15507 +
                   ((C15125 * C403 - C2798 * C394) * C9058 +
                    (C15125 * C706 - C2798 * C700) * C8988 +
                    (C15125 * C3061 - C2798 * C3057) * C9059 +
                    (C15125 * C3324 - C2798 * C3321) * C15265) *
                       C15497 +
                   ((C15125 * C2802 - C2798 * C2800) * C9058 +
                    (C15125 * C2968 - C2798 * C2966) * C8988 +
                    (C15125 * C4249 - C2798 * C4248) * C9059 +
                    (C15125 * C4465 - C2798 * C4464) * C15265) *
                       C15454) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6634 * C124 - C6678 * C81 + C15225 * C456 - C6679 * C391) * C9058 +
           (C6634 * C308 - C6678 * C276 + C15225 * C747 - C6679 * C697) *
               C8988 +
           (C6634 * C900 - C6678 * C838 + C15225 * C2024 - C6679 * C1962) *
               C9059 +
           (C6634 * C1191 - C6678 * C1141 + C15225 * C2354 - C6679 * C2298) *
               C15265) *
              C15501 +
          ((C6634 * C125 - C6678 * C82 + C15225 * C458 - C6679 * C392) * C9058 +
           (C6634 * C309 - C6678 * C277 + C15225 * C749 - C6679 * C698) *
               C8988 +
           (C6634 * C901 - C6678 * C839 + C15225 * C2025 - C6679 * C1963) *
               C9059 +
           (C6634 * C1193 - C6678 * C1142 + C15225 * C2355 - C6679 * C2299) *
               C15265) *
              C15488 +
          ((C6634 * C126 - C6678 * C83 + C15225 * C460 - C6679 * C393) * C9058 +
           (C6634 * C310 - C6678 * C278 + C15225 * C751 - C6679 * C699) *
               C8988 +
           (C6634 * C902 - C6678 * C840 + C15225 * C2026 - C6679 * C1964) *
               C9059 +
           (C6634 * C1195 - C6678 * C1143 + C15225 * C2356 - C6679 * C2300) *
               C15265) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C15511 * C124 - C6998 * C81 + C15507 * C456 - C6999 * C391 +
           C15497 * C457 - C7000 * C394 + C15454 * C2835 - C7001 * C2800) *
              C9058 +
          (C15511 * C308 - C6998 * C276 + C15507 * C747 - C6999 * C697 +
           C15497 * C748 - C7000 * C700 + C15454 * C2992 - C7001 * C2966) *
              C8988 +
          (C15511 * C900 - C6998 * C838 + C15507 * C2024 - C6999 * C1962 +
           C15497 * C3106 - C7000 * C3057 + C15454 * C4286 - C7001 * C4248) *
              C9059 +
          (C15511 * C1191 - C6998 * C1141 + C15507 * C2354 - C6999 * C2298 +
           C15497 * C3364 - C7000 * C3321 + C15454 * C4500 - C7001 * C4464) *
              C15265) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C9058 * C157 - C9264 * C81 - C9058 * C276 + C8988 * C336 +
            C9059 * C953 - C9265 * C838 - C9059 * C1141 + C15265 * C1238) *
               C6634 +
           (C9058 * C506 - C9264 * C391 - C9058 * C697 + C8988 * C791 +
            C9059 * C2080 - C9265 * C1962 - C9059 * C2298 + C15265 * C2407) *
               C15225) *
              C15501 +
          ((C9058 * C158 - C9264 * C82 - C9058 * C277 + C8988 * C337 +
            C9059 * C955 - C9265 * C839 - C9059 * C1142 + C15265 * C1240) *
               C6634 +
           (C9058 * C507 - C9264 * C392 - C9058 * C698 + C8988 * C793 +
            C9059 * C2081 - C9265 * C1963 - C9059 * C2299 + C15265 * C2408) *
               C15225) *
              C15488 +
          ((C9058 * C159 - C9264 * C83 - C9058 * C278 + C8988 * C338 +
            C9059 * C957 - C9265 * C840 - C9059 * C1143 + C15265 * C1242) *
               C6634 +
           (C9058 * C508 - C9264 * C393 - C9058 * C699 + C8988 * C795 +
            C9059 * C2082 - C9265 * C1964 - C9059 * C2300 + C15265 * C2409) *
               C15225) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C9058 * C157 - C9264 * C81 - C9058 * C276 + C8988 * C336 +
           C9059 * C953 - C9265 * C838 - C9059 * C1141 + C15265 * C1238) *
              C15511 +
          (C9058 * C506 - C9264 * C391 - C9058 * C697 + C8988 * C791 +
           C9059 * C2080 - C9265 * C1962 - C9059 * C2298 + C15265 * C2407) *
              C15507 +
          (C9058 * C509 - C9264 * C394 - C9058 * C700 + C8988 * C792 +
           C9059 * C3151 - C9265 * C3057 - C9059 * C3321 + C15265 * C3406) *
              C15497 +
          (C9058 * C2861 - C9264 * C2800 - C9058 * C2966 + C8988 * C3016 +
           C9059 * C4322 - C9265 * C4248 - C9059 * C4464 + C15265 * C4535) *
              C15454) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C13651 * C86 - C3449 * C81 - C13651 * C87 + C15430 * C96 +
           C13632 * C88 - C3451 * C82 - C13632 * C89 + C15135 * C97) *
              C15178 * C3444 +
          (C13651 * C397 - C3449 * C391 - C13651 * C398 + C15430 * C409 +
           C13632 * C399 - C3451 * C392 - C13632 * C400 + C15135 * C410) *
              C15178 * C3445 +
          (C13651 * C403 - C3449 * C394 - C13651 * C404 + C15430 * C412 +
           C13632 * C405 - C3451 * C395 - C13632 * C406 + C15135 * C413) *
              C15178 * C3446 +
          (C13651 * C2802 - C3449 * C2800 - C13651 * C2803 + C15430 * C2806 +
           C13632 * C3453 - C3451 * C3452 - C13632 * C3454 + C15135 * C3455) *
              C15178 * C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1284 * C86 - C1285 * C81 - C1284 * C87 + C1278 * C96 + C1286 * C88 -
           C1287 * C82 - C1286 * C89 + C1279 * C97 + C1288 * C90 - C1289 * C83 -
           C1288 * C91 + C1280 * C98 + C1290 * C92 - C1291 * C84 - C1290 * C93 +
           C15445 * C99) *
              C15178 * C15446 +
          (C1284 * C397 - C1285 * C391 - C1284 * C398 + C1278 * C409 +
           C1286 * C399 - C1287 * C392 - C1286 * C400 + C1279 * C410 +
           C1288 * C401 - C1289 * C393 - C1288 * C402 + C1280 * C411 +
           C1290 * C1293 - C1291 * C1292 - C1290 * C1294 + C15445 * C1295) *
              C15178 * C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13651 * C86 - C3449 * C81 - C13651 * C87 + C15430 * C96 +
            C13632 * C88 - C3451 * C82 - C13632 * C89 + C15135 * C97) *
               C4574 +
           (C13651 * C844 - C3449 * C838 - C13651 * C845 + C15430 * C856 +
            C13632 * C846 - C3451 * C839 - C13632 * C847 + C15135 * C857) *
               C4575 +
           (C13651 * C850 - C3449 * C841 - C13651 * C851 + C15430 * C859 +
            C13632 * C852 - C3451 * C842 - C13632 * C853 + C15135 * C860) *
               C15475) *
              C15446 +
          ((C13651 * C397 - C3449 * C391 - C13651 * C398 + C15430 * C409 +
            C13632 * C399 - C3451 * C392 - C13632 * C400 + C15135 * C410) *
               C4574 +
           (C13651 * C1965 - C3449 * C1962 - C13651 * C1966 + C15430 * C1971 +
            C13632 * C1967 - C3451 * C1963 - C13632 * C1968 + C15135 * C1972) *
               C4575 +
           (C13651 * C3059 - C3449 * C3056 - C13651 * C3060 + C15430 * C3065 +
            C13632 * C5525 - C3451 * C5524 - C13632 * C5526 + C15135 * C5527) *
               C15475) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3444 * C124 - C3490 * C81 + C3445 * C456 - C3491 * C391 +
           C3446 * C457 - C3492 * C394 + C15454 * C2835 - C3493 * C2800) *
              C13651 +
          (C3444 * C129 - C3490 * C87 + C3445 * C462 - C3491 * C398 +
           C3446 * C463 - C3492 * C404 + C15454 * C2837 - C3493 * C2803) *
              C15430 +
          (C3444 * C125 - C3490 * C82 + C3445 * C458 - C3491 * C392 +
           C3446 * C459 - C3492 * C395 + C15454 * C3494 - C3493 * C3452) *
              C13632 +
          (C3444 * C130 - C3490 * C89 + C3445 * C464 - C3491 * C400 +
           C3446 * C465 - C3492 * C406 + C15454 * C3495 - C3493 * C3454) *
              C15135) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) * C1284 +
          (C15446 * C129 - C1330 * C87 + C15225 * C462 - C1331 * C398) * C1278 +
          (C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) * C1286 +
          (C15446 * C130 - C1330 * C89 + C15225 * C464 - C1331 * C400) * C1279 +
          (C15446 * C126 - C1330 * C83 + C15225 * C460 - C1331 * C393) * C1288 +
          (C15446 * C131 - C1330 * C91 + C15225 * C466 - C1331 * C402) * C1280 +
          (C15446 * C127 - C1330 * C84 + C15225 * C1332 - C1331 * C1292) *
              C1290 +
          (C15446 * C132 - C1330 * C93 + C15225 * C1333 - C1331 * C1294) *
              C15445) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) *
               C13651 +
           (C15446 * C129 - C1330 * C87 + C15225 * C462 - C1331 * C398) *
               C15430 +
           (C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) *
               C13632 +
           (C15446 * C130 - C1330 * C89 + C15225 * C464 - C1331 * C400) *
               C15135) *
              C4574 +
          ((C15446 * C900 - C1330 * C838 + C15225 * C2024 - C1331 * C1962) *
               C13651 +
           (C15446 * C906 - C1330 * C845 + C15225 * C2027 - C1331 * C1966) *
               C15430 +
           (C15446 * C901 - C1330 * C839 + C15225 * C2025 - C1331 * C1963) *
               C13632 +
           (C15446 * C907 - C1330 * C847 + C15225 * C2028 - C1331 * C1968) *
               C15135) *
              C4575 +
          ((C15446 * C903 - C1330 * C841 + C15225 * C3107 - C1331 * C3056) *
               C13651 +
           (C15446 * C909 - C1330 * C851 + C15225 * C3110 - C1331 * C3060) *
               C15430 +
           (C15446 * C904 - C1330 * C842 + C15225 * C5578 - C1331 * C5524) *
               C13632 +
           (C15446 * C910 - C1330 * C853 + C15225 * C5579 - C1331 * C5526) *
               C15135) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C13651 +
                     (C15178 * C162 - C156 * C87) * C15430 +
                     (C15178 * C158 - C156 * C82) * C13632 +
                     (C15178 * C163 - C156 * C89) * C15135) *
                        C3444 +
                    ((C15178 * C506 - C156 * C391) * C13651 +
                     (C15178 * C512 - C156 * C398) * C15430 +
                     (C15178 * C507 - C156 * C392) * C13632 +
                     (C15178 * C513 - C156 * C400) * C15135) *
                        C3445 +
                    ((C15178 * C509 - C156 * C394) * C13651 +
                     (C15178 * C515 - C156 * C404) * C15430 +
                     (C15178 * C510 - C156 * C395) * C13632 +
                     (C15178 * C516 - C156 * C406) * C15135) *
                        C3446 +
                    ((C15178 * C2861 - C156 * C2800) * C13651 +
                     (C15178 * C2863 - C156 * C2803) * C15430 +
                     (C15178 * C3530 - C156 * C3452) * C13632 +
                     (C15178 * C3531 - C156 * C3454) * C15135) *
                        C15454) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C1284 +
                     (C15178 * C162 - C156 * C87) * C1278 +
                     (C15178 * C158 - C156 * C82) * C1286 +
                     (C15178 * C163 - C156 * C89) * C1279 +
                     (C15178 * C159 - C156 * C83) * C1288 +
                     (C15178 * C164 - C156 * C91) * C1280 +
                     (C15178 * C160 - C156 * C84) * C1290 +
                     (C15178 * C165 - C156 * C93) * C15445) *
                        C15446 +
                    ((C15178 * C506 - C156 * C391) * C1284 +
                     (C15178 * C512 - C156 * C398) * C1278 +
                     (C15178 * C507 - C156 * C392) * C1286 +
                     (C15178 * C513 - C156 * C400) * C1279 +
                     (C15178 * C508 - C156 * C393) * C1288 +
                     (C15178 * C514 - C156 * C402) * C1280 +
                     (C15178 * C1368 - C156 * C1292) * C1290 +
                     (C15178 * C1369 - C156 * C1294) * C15445) *
                        C15225) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4574 * C157 - C4653 * C81 + C4575 * C953 - C4654 * C838 +
                      C15475 * C954 - C4655 * C841) *
                         C13651 +
                     (C4574 * C162 - C4653 * C87 + C4575 * C959 - C4654 * C845 +
                      C15475 * C960 - C4655 * C851) *
                         C15430 +
                     (C4574 * C158 - C4653 * C82 + C4575 * C955 - C4654 * C839 +
                      C15475 * C956 - C4655 * C842) *
                         C13632 +
                     (C4574 * C163 - C4653 * C89 + C4575 * C961 - C4654 * C847 +
                      C15475 * C962 - C4655 * C853) *
                         C15135) *
                        C15446 +
                    ((C4574 * C506 - C4653 * C391 + C4575 * C2080 -
                      C4654 * C1962 + C15475 * C3150 - C4655 * C3056) *
                         C13651 +
                     (C4574 * C512 - C4653 * C398 + C4575 * C2083 -
                      C4654 * C1966 + C15475 * C3153 - C4655 * C3060) *
                         C15430 +
                     (C4574 * C507 - C4653 * C392 + C4575 * C2081 -
                      C4654 * C1963 + C15475 * C5630 - C4655 * C5524) *
                         C13632 +
                     (C4574 * C513 - C4653 * C400 + C4575 * C2084 -
                      C4654 * C1968 + C15475 * C5631 - C4655 * C5526) *
                         C15135) *
                        C15225) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C3490 +
          (C15430 * C194 - C13651 * C189 + C15135 * C195 - C13632 * C190) *
              C3444 +
          (C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
              C3491 +
          (C15430 * C562 - C13651 * C556 + C15135 * C563 - C13632 * C557) *
              C3445 +
          (C15430 * C403 - C13651 * C394 + C15135 * C405 - C13632 * C395) *
              C3492 +
          (C15430 * C565 - C13651 * C559 + C15135 * C566 - C13632 * C560) *
              C3446 +
          (C15430 * C2802 - C13651 * C2800 + C15135 * C3453 - C13632 * C3452) *
              C3493 +
          (C15430 * C2889 - C13651 * C2887 + C15135 * C3567 - C13632 * C3566) *
              C15454) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1278 * C86 - C1284 * C81 + C1279 * C88 - C1286 * C82 + C1280 * C90 -
           C1288 * C83 + C15445 * C92 - C1290 * C84) *
              C1330 +
          (C1278 * C194 - C1284 * C189 + C1279 * C195 - C1286 * C190 +
           C1280 * C196 - C1288 * C191 + C15445 * C197 - C1290 * C192) *
              C15446 +
          (C1278 * C397 - C1284 * C391 + C1279 * C399 - C1286 * C392 +
           C1280 * C401 - C1288 * C393 + C15445 * C1293 - C1290 * C1292) *
              C1331 +
          (C1278 * C562 - C1284 * C556 + C1279 * C563 - C1286 * C557 +
           C1280 * C564 - C1288 * C558 + C15445 * C1405 - C1290 * C1404) *
              C15225) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C1330 +
           (C15430 * C194 - C13651 * C189 + C15135 * C195 - C13632 * C190) *
               C15446 +
           (C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
               C1331 +
           (C15430 * C562 - C13651 * C556 + C15135 * C563 - C13632 * C557) *
               C15225) *
              C4574 +
          ((C15430 * C844 - C13651 * C838 + C15135 * C846 - C13632 * C839) *
               C1330 +
           (C15430 * C1009 - C13651 * C1003 + C15135 * C1010 - C13632 * C1004) *
               C15446 +
           (C15430 * C1965 - C13651 * C1962 + C15135 * C1967 - C13632 * C1963) *
               C1331 +
           (C15430 * C2139 - C13651 * C2136 + C15135 * C2140 - C13632 * C2137) *
               C15225) *
              C4575 +
          ((C15430 * C850 - C13651 * C841 + C15135 * C852 - C13632 * C842) *
               C1330 +
           (C15430 * C1012 - C13651 * C1006 + C15135 * C1013 - C13632 * C1007) *
               C15446 +
           (C15430 * C3059 - C13651 * C3056 + C15135 * C5525 - C13632 * C5524) *
               C1331 +
           (C15430 * C3198 - C13651 * C3195 + C15135 * C5683 - C13632 * C5682) *
               C15225) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3490 * C124 - C3602 * C81 - C3490 * C189 + C3444 * C222 +
           C3491 * C456 - C3603 * C391 - C3491 * C556 + C3445 * C609 +
           C3492 * C457 - C3604 * C394 - C3492 * C559 + C3446 * C610 +
           C3493 * C2835 - C3605 * C2800 - C3493 * C2887 + C15454 * C2918) *
              C15430 +
          (C3490 * C125 - C3602 * C82 - C3490 * C190 + C3444 * C223 +
           C3491 * C458 - C3603 * C392 - C3491 * C557 + C3445 * C611 +
           C3492 * C459 - C3604 * C395 - C3492 * C560 + C3446 * C612 +
           C3493 * C3494 - C3605 * C3452 - C3493 * C3566 + C15454 * C3606) *
              C15135) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1330 * C124 - C1440 * C81 - C1330 * C189 + C15446 * C222 +
           C1331 * C456 - C1441 * C391 - C1331 * C556 + C15225 * C609) *
              C1278 +
          (C1330 * C125 - C1440 * C82 - C1330 * C190 + C15446 * C223 +
           C1331 * C458 - C1441 * C392 - C1331 * C557 + C15225 * C611) *
              C1279 +
          (C1330 * C126 - C1440 * C83 - C1330 * C191 + C15446 * C224 +
           C1331 * C460 - C1441 * C393 - C1331 * C558 + C15225 * C613) *
              C1280 +
          (C1330 * C127 - C1440 * C84 - C1330 * C192 + C15446 * C225 +
           C1331 * C1332 - C1441 * C1292 - C1331 * C1404 + C15225 * C1442) *
              C15445) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1330 * C124 - C1440 * C81 - C1330 * C189 + C15446 * C222 +
            C1331 * C456 - C1441 * C391 - C1331 * C556 + C15225 * C609) *
               C15430 +
           (C1330 * C125 - C1440 * C82 - C1330 * C190 + C15446 * C223 +
            C1331 * C458 - C1441 * C392 - C1331 * C557 + C15225 * C611) *
               C15135) *
              C4574 +
          ((C1330 * C900 - C1440 * C838 - C1330 * C1003 + C15446 * C1053 +
            C1331 * C2024 - C1441 * C1962 - C1331 * C2136 + C15225 * C2192) *
               C15430 +
           (C1330 * C901 - C1440 * C839 - C1330 * C1004 + C15446 * C1054 +
            C1331 * C2025 - C1441 * C1963 - C1331 * C2137 + C15225 * C2193) *
               C15135) *
              C4575 +
          ((C1330 * C903 - C1440 * C841 - C1330 * C1006 + C15446 * C1056 +
            C1331 * C3107 - C1441 * C3056 - C1331 * C3195 + C15225 * C3239) *
               C15430 +
           (C1330 * C904 - C1440 * C842 - C1330 * C1007 + C15446 * C1057 +
            C1331 * C5578 - C1441 * C5524 - C1331 * C5682 + C15225 * C5734) *
               C15135) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C3490 +
                     (C15178 * C249 - C156 * C189) * C3444 +
                     (C15178 * C506 - C156 * C391) * C3491 +
                     (C15178 * C653 - C156 * C556) * C3445 +
                     (C15178 * C509 - C156 * C394) * C3492 +
                     (C15178 * C654 - C156 * C559) * C3446 +
                     (C15178 * C2861 - C156 * C2800) * C3493 +
                     (C15178 * C2942 - C156 * C2887) * C15454) *
                        C15430 +
                    ((C15178 * C158 - C156 * C82) * C3490 +
                     (C15178 * C250 - C156 * C190) * C3444 +
                     (C15178 * C507 - C156 * C392) * C3491 +
                     (C15178 * C655 - C156 * C557) * C3445 +
                     (C15178 * C510 - C156 * C395) * C3492 +
                     (C15178 * C656 - C156 * C560) * C3446 +
                     (C15178 * C3530 - C156 * C3452) * C3493 +
                     (C15178 * C3641 - C156 * C3566) * C15454) *
                        C15135) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C1330 +
                     (C15178 * C249 - C156 * C189) * C15446 +
                     (C15178 * C506 - C156 * C391) * C1331 +
                     (C15178 * C653 - C156 * C556) * C15225) *
                        C1278 +
                    ((C15178 * C158 - C156 * C82) * C1330 +
                     (C15178 * C250 - C156 * C190) * C15446 +
                     (C15178 * C507 - C156 * C392) * C1331 +
                     (C15178 * C655 - C156 * C557) * C15225) *
                        C1279 +
                    ((C15178 * C159 - C156 * C83) * C1330 +
                     (C15178 * C251 - C156 * C191) * C15446 +
                     (C15178 * C508 - C156 * C393) * C1331 +
                     (C15178 * C657 - C156 * C558) * C15225) *
                        C1280 +
                    ((C15178 * C160 - C156 * C84) * C1330 +
                     (C15178 * C252 - C156 * C192) * C15446 +
                     (C15178 * C1368 - C156 * C1292) * C1331 +
                     (C15178 * C1477 - C156 * C1404) * C15225) *
                        C15445) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4574 * C157 - C4653 * C81 + C4575 * C953 - C4654 * C838 +
                      C15475 * C954 - C4655 * C841) *
                         C1330 +
                     (C4574 * C249 - C4653 * C189 + C4575 * C1097 -
                      C4654 * C1003 + C15475 * C1098 - C4655 * C1006) *
                         C15446 +
                     (C4574 * C506 - C4653 * C391 + C4575 * C2080 -
                      C4654 * C1962 + C15475 * C3150 - C4655 * C3056) *
                         C1331 +
                     (C4574 * C653 - C4653 * C556 + C4575 * C2245 -
                      C4654 * C2136 + C15475 * C3279 - C4655 * C3195) *
                         C15225) *
                        C15430 +
                    ((C4574 * C158 - C4653 * C82 + C4575 * C955 - C4654 * C839 +
                      C15475 * C956 - C4655 * C842) *
                         C1330 +
                     (C4574 * C250 - C4653 * C190 + C4575 * C1099 -
                      C4654 * C1004 + C15475 * C1100 - C4655 * C1007) *
                         C15446 +
                     (C4574 * C507 - C4653 * C392 + C4575 * C2081 -
                      C4654 * C1963 + C15475 * C5630 - C4655 * C5524) *
                         C1331 +
                     (C4574 * C655 - C4653 * C557 + C4575 * C2246 -
                      C4654 * C2137 + C15475 * C5785 - C4655 * C5682) *
                         C15225) *
                        C15135) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C156 +
           (C15430 * C281 - C13651 * C276 + C15135 * C282 - C13632 * C277) *
               C15178) *
              C3444 +
          ((C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
               C156 +
           (C15430 * C703 - C13651 * C697 + C15135 * C704 - C13632 * C698) *
               C15178) *
              C3445 +
          ((C15430 * C403 - C13651 * C394 + C15135 * C405 - C13632 * C395) *
               C156 +
           (C15430 * C706 - C13651 * C700 + C15135 * C707 - C13632 * C701) *
               C15178) *
              C3446 +
          ((C15430 * C2802 - C13651 * C2800 + C15135 * C3453 - C13632 * C3452) *
               C156 +
           (C15430 * C2968 - C13651 * C2966 + C15135 * C3677 - C13632 * C3676) *
               C15178) *
              C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1278 * C86 - C1284 * C81 + C1279 * C88 - C1286 * C82 +
            C1280 * C90 - C1288 * C83 + C15445 * C92 - C1290 * C84) *
               C156 +
           (C1278 * C281 - C1284 * C276 + C1279 * C282 - C1286 * C277 +
            C1280 * C283 - C1288 * C278 + C15445 * C284 - C1290 * C279) *
               C15178) *
              C15446 +
          ((C1278 * C397 - C1284 * C391 + C1279 * C399 - C1286 * C392 +
            C1280 * C401 - C1288 * C393 + C15445 * C1293 - C1290 * C1292) *
               C156 +
           (C1278 * C703 - C1284 * C697 + C1279 * C704 - C1286 * C698 +
            C1280 * C705 - C1288 * C699 + C15445 * C1513 - C1290 * C1512) *
               C15178) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C4653 +
           (C15430 * C281 - C13651 * C276 + C15135 * C282 - C13632 * C277) *
               C4574 +
           (C15430 * C844 - C13651 * C838 + C15135 * C846 - C13632 * C839) *
               C4654 +
           (C15430 * C1147 - C13651 * C1141 + C15135 * C1148 - C13632 * C1142) *
               C4575 +
           (C15430 * C850 - C13651 * C841 + C15135 * C852 - C13632 * C842) *
               C4655 +
           (C15430 * C1150 - C13651 * C1144 + C15135 * C1151 - C13632 * C1145) *
               C15475) *
              C15446 +
          ((C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
               C4653 +
           (C15430 * C703 - C13651 * C697 + C15135 * C704 - C13632 * C698) *
               C4574 +
           (C15430 * C1965 - C13651 * C1962 + C15135 * C1967 - C13632 * C1963) *
               C4654 +
           (C15430 * C2301 - C13651 * C2298 + C15135 * C2302 - C13632 * C2299) *
               C4575 +
           (C15430 * C3059 - C13651 * C3056 + C15135 * C5525 - C13632 * C5524) *
               C4655 +
           (C15430 * C3323 - C13651 * C3320 + C15135 * C5837 - C13632 * C5836) *
               C15475) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3444 * C124 - C3490 * C81 + C3445 * C456 - C3491 * C391 +
            C3446 * C457 - C3492 * C394 + C15454 * C2835 - C3493 * C2800) *
               C156 +
           (C3444 * C308 - C3490 * C276 + C3445 * C747 - C3491 * C697 +
            C3446 * C748 - C3492 * C700 + C15454 * C2992 - C3493 * C2966) *
               C15178) *
              C15430 +
          ((C3444 * C125 - C3490 * C82 + C3445 * C458 - C3491 * C392 +
            C3446 * C459 - C3492 * C395 + C15454 * C3494 - C3493 * C3452) *
               C156 +
           (C3444 * C309 - C3490 * C277 + C3445 * C749 - C3491 * C698 +
            C3446 * C750 - C3492 * C701 + C15454 * C3712 - C3493 * C3676) *
               C15178) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) * C156 +
           (C15446 * C308 - C1330 * C276 + C15225 * C747 - C1331 * C697) *
               C15178) *
              C1278 +
          ((C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) * C156 +
           (C15446 * C309 - C1330 * C277 + C15225 * C749 - C1331 * C698) *
               C15178) *
              C1279 +
          ((C15446 * C126 - C1330 * C83 + C15225 * C460 - C1331 * C393) * C156 +
           (C15446 * C310 - C1330 * C278 + C15225 * C751 - C1331 * C699) *
               C15178) *
              C1280 +
          ((C15446 * C127 - C1330 * C84 + C15225 * C1332 - C1331 * C1292) *
               C156 +
           (C15446 * C311 - C1330 * C279 + C15225 * C1548 - C1331 * C1512) *
               C15178) *
              C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) *
               C4653 +
           (C15446 * C308 - C1330 * C276 + C15225 * C747 - C1331 * C697) *
               C4574 +
           (C15446 * C900 - C1330 * C838 + C15225 * C2024 - C1331 * C1962) *
               C4654 +
           (C15446 * C1191 - C1330 * C1141 + C15225 * C2354 - C1331 * C2298) *
               C4575 +
           (C15446 * C903 - C1330 * C841 + C15225 * C3107 - C1331 * C3056) *
               C4655 +
           (C15446 * C1192 - C1330 * C1144 + C15225 * C3365 - C1331 * C3320) *
               C15475) *
              C15430 +
          ((C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) *
               C4653 +
           (C15446 * C309 - C1330 * C277 + C15225 * C749 - C1331 * C698) *
               C4574 +
           (C15446 * C901 - C1330 * C839 + C15225 * C2025 - C1331 * C1963) *
               C4654 +
           (C15446 * C1193 - C1330 * C1142 + C15225 * C2355 - C1331 * C2299) *
               C4575 +
           (C15446 * C904 - C1330 * C842 + C15225 * C5578 - C1331 * C5524) *
               C4655 +
           (C15446 * C1194 - C1330 * C1145 + C15225 * C5888 - C1331 * C5836) *
               C15475) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C3444 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C3445 +
           (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C3446 +
           (C156 * C2861 - C335 * C2800 - C156 * C2966 + C15178 * C3016) *
               C15454) *
              C15430 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C3444 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C3445 +
           (C156 * C510 - C335 * C395 - C156 * C701 + C15178 * C794) * C3446 +
           (C156 * C3530 - C335 * C3452 - C156 * C3676 + C15178 * C3747) *
               C15454) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C15446 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C15225) *
              C1278 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C15446 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C15225) *
              C1279 +
          ((C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C15446 +
           (C156 * C508 - C335 * C393 - C156 * C699 + C15178 * C795) * C15225) *
              C1280 +
          ((C156 * C160 - C335 * C84 - C156 * C279 + C15178 * C339) * C15446 +
           (C156 * C1368 - C335 * C1292 - C156 * C1512 + C15178 * C1583) *
               C15225) *
              C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4653 * C157 - C4884 * C81 - C4653 * C276 + C4574 * C336 +
            C4654 * C953 - C4885 * C838 - C4654 * C1141 + C4575 * C1238 +
            C4655 * C954 - C4886 * C841 - C4655 * C1144 + C15475 * C1239) *
               C15446 +
           (C4653 * C506 - C4884 * C391 - C4653 * C697 + C4574 * C791 +
            C4654 * C2080 - C4885 * C1962 - C4654 * C2298 + C4575 * C2407 +
            C4655 * C3150 - C4886 * C3056 - C4655 * C3320 + C15475 * C3405) *
               C15225) *
              C15430 +
          ((C4653 * C158 - C4884 * C82 - C4653 * C277 + C4574 * C337 +
            C4654 * C955 - C4885 * C839 - C4654 * C1142 + C4575 * C1240 +
            C4655 * C956 - C4886 * C842 - C4655 * C1145 + C15475 * C1241) *
               C15446 +
           (C4653 * C507 - C4884 * C392 - C4653 * C698 + C4574 * C793 +
            C4654 * C2081 - C4885 * C1963 - C4654 * C2299 + C4575 * C2408 +
            C4655 * C5630 - C4886 * C5524 - C4655 * C5836 + C15475 * C5939) *
               C15225) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C15447 +
           (C2798 * C844 - C2799 * C838 - C2798 * C845 + C15125 * C856) *
               C15265) *
              C3444 +
          ((C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
               C15447 +
           (C2798 * C1965 - C2799 * C1962 - C2798 * C1966 + C15125 * C1971) *
               C15265) *
              C3445 +
          ((C2798 * C403 - C2799 * C394 - C2798 * C404 + C15125 * C412) *
               C15447 +
           (C2798 * C3061 - C2799 * C3057 - C2798 * C3062 + C15125 * C3066) *
               C15265) *
              C3446 +
          ((C2798 * C2802 - C2799 * C2800 - C2798 * C2803 + C15125 * C2806) *
               C15447 +
           (C2798 * C4249 - C2799 * C4248 - C2798 * C4250 + C15125 * C4251) *
               C15265) *
              C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C385 * C86 - C386 * C81 - C385 * C87 + C379 * C96 + C387 * C88 -
            C388 * C82 - C387 * C89 + C380 * C97 + C389 * C90 - C390 * C83 -
            C389 * C91 + C15468 * C98) *
               C15447 +
           (C385 * C844 - C386 * C838 - C385 * C845 + C379 * C856 +
            C387 * C846 - C388 * C839 - C387 * C847 + C380 * C857 +
            C389 * C848 - C390 * C840 - C389 * C849 + C15468 * C858) *
               C15265) *
              C15446 +
          ((C385 * C397 - C386 * C391 - C385 * C398 + C379 * C409 +
            C387 * C399 - C388 * C392 - C387 * C400 + C380 * C410 +
            C389 * C401 - C390 * C393 - C389 * C402 + C15468 * C411) *
               C15447 +
           (C385 * C1965 - C386 * C1962 - C385 * C1966 + C379 * C1971 +
            C387 * C1967 - C388 * C1963 - C387 * C1968 + C380 * C1972 +
            C389 * C1969 - C390 * C1964 - C389 * C1970 + C15468 * C1973) *
               C15265) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C5974 +
           (C2798 * C844 - C2799 * C838 - C2798 * C845 + C15125 * C856) *
               C5975 +
           (C2798 * C850 - C2799 * C841 - C2798 * C851 + C15125 * C859) *
               C5976 +
           (C2798 * C5258 - C2799 * C5256 - C2798 * C5259 + C15125 * C5262) *
               C15461) *
              C15446 +
          ((C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
               C5974 +
           (C2798 * C1965 - C2799 * C1962 - C2798 * C1966 + C15125 * C1971) *
               C5975 +
           (C2798 * C3059 - C2799 * C3056 - C2798 * C3060 + C15125 * C3065) *
               C5976 +
           (C2798 * C6309 - C2799 * C6308 - C2798 * C6310 + C15125 * C6311) *
               C15461) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3444 * C124 - C3490 * C81 + C3445 * C456 - C3491 * C391 +
            C3446 * C457 - C3492 * C394 + C15454 * C2835 - C3493 * C2800) *
               C2798 +
           (C3444 * C129 - C3490 * C87 + C3445 * C462 - C3491 * C398 +
            C3446 * C463 - C3492 * C404 + C15454 * C2837 - C3493 * C2803) *
               C15125) *
              C15447 +
          ((C3444 * C900 - C3490 * C838 + C3445 * C2024 - C3491 * C1962 +
            C3446 * C3106 - C3492 * C3057 + C15454 * C4286 - C3493 * C4248) *
               C2798 +
           (C3444 * C906 - C3490 * C845 + C3445 * C2027 - C3491 * C1966 +
            C3446 * C3109 - C3492 * C3062 + C15454 * C4287 - C3493 * C4250) *
               C15125) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) * C385 +
           (C15446 * C129 - C1330 * C87 + C15225 * C462 - C1331 * C398) * C379 +
           (C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) * C387 +
           (C15446 * C130 - C1330 * C89 + C15225 * C464 - C1331 * C400) * C380 +
           (C15446 * C126 - C1330 * C83 + C15225 * C460 - C1331 * C393) * C389 +
           (C15446 * C131 - C1330 * C91 + C15225 * C466 - C1331 * C402) *
               C15468) *
              C15447 +
          ((C15446 * C900 - C1330 * C838 + C15225 * C2024 - C1331 * C1962) *
               C385 +
           (C15446 * C906 - C1330 * C845 + C15225 * C2027 - C1331 * C1966) *
               C379 +
           (C15446 * C901 - C1330 * C839 + C15225 * C2025 - C1331 * C1963) *
               C387 +
           (C15446 * C907 - C1330 * C847 + C15225 * C2028 - C1331 * C1968) *
               C380 +
           (C15446 * C902 - C1330 * C840 + C15225 * C2026 - C1331 * C1964) *
               C389 +
           (C15446 * C908 - C1330 * C849 + C15225 * C2029 - C1331 * C1970) *
               C15468) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) *
               C2798 +
           (C15446 * C129 - C1330 * C87 + C15225 * C462 - C1331 * C398) *
               C15125) *
              C5974 +
          ((C15446 * C900 - C1330 * C838 + C15225 * C2024 - C1331 * C1962) *
               C2798 +
           (C15446 * C906 - C1330 * C845 + C15225 * C2027 - C1331 * C1966) *
               C15125) *
              C5975 +
          ((C15446 * C903 - C1330 * C841 + C15225 * C3107 - C1331 * C3056) *
               C2798 +
           (C15446 * C909 - C1330 * C851 + C15225 * C3110 - C1331 * C3060) *
               C15125) *
              C5976 +
          ((C15446 * C5286 - C1330 * C5256 + C15225 * C6346 - C1331 * C6308) *
               C2798 +
           (C15446 * C5288 - C1330 * C5259 + C15225 * C6347 - C1331 * C6310) *
               C15125) *
              C15461) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) *
               C2798 +
           (C15447 * C162 - C1694 * C87 + C15265 * C959 - C1695 * C845) *
               C15125) *
              C3444 +
          ((C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C2798 +
           (C15447 * C512 - C1694 * C398 + C15265 * C2083 - C1695 * C1966) *
               C15125) *
              C3445 +
          ((C15447 * C509 - C1694 * C394 + C15265 * C3151 - C1695 * C3057) *
               C2798 +
           (C15447 * C515 - C1694 * C404 + C15265 * C3154 - C1695 * C3062) *
               C15125) *
              C3446 +
          ((C15447 * C2861 - C1694 * C2800 + C15265 * C4322 - C1695 * C4248) *
               C2798 +
           (C15447 * C2863 - C1694 * C2803 + C15265 * C4323 - C1695 * C4250) *
               C15125) *
              C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) * C385 +
           (C15447 * C162 - C1694 * C87 + C15265 * C959 - C1695 * C845) * C379 +
           (C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) * C387 +
           (C15447 * C163 - C1694 * C89 + C15265 * C961 - C1695 * C847) * C380 +
           (C15447 * C159 - C1694 * C83 + C15265 * C957 - C1695 * C840) * C389 +
           (C15447 * C164 - C1694 * C91 + C15265 * C963 - C1695 * C849) *
               C15468) *
              C15446 +
          ((C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C385 +
           (C15447 * C512 - C1694 * C398 + C15265 * C2083 - C1695 * C1966) *
               C379 +
           (C15447 * C507 - C1694 * C392 + C15265 * C2081 - C1695 * C1963) *
               C387 +
           (C15447 * C513 - C1694 * C400 + C15265 * C2084 - C1695 * C1968) *
               C380 +
           (C15447 * C508 - C1694 * C393 + C15265 * C2082 - C1695 * C1964) *
               C389 +
           (C15447 * C514 - C1694 * C402 + C15265 * C2085 - C1695 * C1970) *
               C15468) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5974 * C157 - C6052 * C81 + C5975 * C953 - C6053 * C838 +
            C5976 * C954 - C6054 * C841 + C15461 * C5317 - C6055 * C5256) *
               C2798 +
           (C5974 * C162 - C6052 * C87 + C5975 * C959 - C6053 * C845 +
            C5976 * C960 - C6054 * C851 + C15461 * C5319 - C6055 * C5259) *
               C15125) *
              C15446 +
          ((C5974 * C506 - C6052 * C391 + C5975 * C2080 - C6053 * C1962 +
            C5976 * C3150 - C6054 * C3056 + C15461 * C6382 - C6055 * C6308) *
               C2798 +
           (C5974 * C512 - C6052 * C398 + C5975 * C2083 - C6053 * C1966 +
            C5976 * C3153 - C6054 * C3060 + C15461 * C6383 - C6055 * C6310) *
               C15125) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15125 * C86 - C2798 * C81) * C3490 +
                     (C15125 * C194 - C2798 * C189) * C3444 +
                     (C15125 * C397 - C2798 * C391) * C3491 +
                     (C15125 * C562 - C2798 * C556) * C3445 +
                     (C15125 * C403 - C2798 * C394) * C3492 +
                     (C15125 * C565 - C2798 * C559) * C3446 +
                     (C15125 * C2802 - C2798 * C2800) * C3493 +
                     (C15125 * C2889 - C2798 * C2887) * C15454) *
                        C15447 +
                    ((C15125 * C844 - C2798 * C838) * C3490 +
                     (C15125 * C1009 - C2798 * C1003) * C3444 +
                     (C15125 * C1965 - C2798 * C1962) * C3491 +
                     (C15125 * C2139 - C2798 * C2136) * C3445 +
                     (C15125 * C3061 - C2798 * C3057) * C3492 +
                     (C15125 * C3197 - C2798 * C3194) * C3446 +
                     (C15125 * C4249 - C2798 * C4248) * C3493 +
                     (C15125 * C4359 - C2798 * C4358) * C15454) *
                        C15265) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 +
                      C15468 * C90 - C389 * C83) *
                         C1330 +
                     (C379 * C194 - C385 * C189 + C380 * C195 - C387 * C190 +
                      C15468 * C196 - C389 * C191) *
                         C15446 +
                     (C379 * C397 - C385 * C391 + C380 * C399 - C387 * C392 +
                      C15468 * C401 - C389 * C393) *
                         C1331 +
                     (C379 * C562 - C385 * C556 + C380 * C563 - C387 * C557 +
                      C15468 * C564 - C389 * C558) *
                         C15225) *
                        C15447 +
                    ((C379 * C844 - C385 * C838 + C380 * C846 - C387 * C839 +
                      C15468 * C848 - C389 * C840) *
                         C1330 +
                     (C379 * C1009 - C385 * C1003 + C380 * C1010 -
                      C387 * C1004 + C15468 * C1011 - C389 * C1005) *
                         C15446 +
                     (C379 * C1965 - C385 * C1962 + C380 * C1967 -
                      C387 * C1963 + C15468 * C1969 - C389 * C1964) *
                         C1331 +
                     (C379 * C2139 - C385 * C2136 + C380 * C2140 -
                      C387 * C2137 + C15468 * C2141 - C389 * C2138) *
                         C15225) *
                        C15265) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C15125 * C86 - C2798 * C81) * C1330 +
                     (C15125 * C194 - C2798 * C189) * C15446 +
                     (C15125 * C397 - C2798 * C391) * C1331 +
                     (C15125 * C562 - C2798 * C556) * C15225) *
                        C5974 +
                    ((C15125 * C844 - C2798 * C838) * C1330 +
                     (C15125 * C1009 - C2798 * C1003) * C15446 +
                     (C15125 * C1965 - C2798 * C1962) * C1331 +
                     (C15125 * C2139 - C2798 * C2136) * C15225) *
                        C5975 +
                    ((C15125 * C850 - C2798 * C841) * C1330 +
                     (C15125 * C1012 - C2798 * C1006) * C15446 +
                     (C15125 * C3059 - C2798 * C3056) * C1331 +
                     (C15125 * C3198 - C2798 * C3195) * C15225) *
                        C5976 +
                    ((C15125 * C5258 - C2798 * C5256) * C1330 +
                     (C15125 * C5345 - C2798 * C5343) * C15446 +
                     (C15125 * C6309 - C2798 * C6308) * C1331 +
                     (C15125 * C6419 - C2798 * C6418) * C15225) *
                        C15461) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3490 * C124 - C3602 * C81 - C3490 * C189 + C3444 * C222 +
           C3491 * C456 - C3603 * C391 - C3491 * C556 + C3445 * C609 +
           C3492 * C457 - C3604 * C394 - C3492 * C559 + C3446 * C610 +
           C3493 * C2835 - C3605 * C2800 - C3493 * C2887 + C15454 * C2918) *
              C15125 * C15447 +
          (C3490 * C900 - C3602 * C838 - C3490 * C1003 + C3444 * C1053 +
           C3491 * C2024 - C3603 * C1962 - C3491 * C2136 + C3445 * C2192 +
           C3492 * C3106 - C3604 * C3057 - C3492 * C3194 + C3446 * C3238 +
           C3493 * C4286 - C3605 * C4248 - C3493 * C4358 + C15454 * C4394) *
              C15125 * C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1330 * C124 - C1440 * C81 - C1330 * C189 + C15446 * C222 +
            C1331 * C456 - C1441 * C391 - C1331 * C556 + C15225 * C609) *
               C379 +
           (C1330 * C125 - C1440 * C82 - C1330 * C190 + C15446 * C223 +
            C1331 * C458 - C1441 * C392 - C1331 * C557 + C15225 * C611) *
               C380 +
           (C1330 * C126 - C1440 * C83 - C1330 * C191 + C15446 * C224 +
            C1331 * C460 - C1441 * C393 - C1331 * C558 + C15225 * C613) *
               C15468) *
              C15447 +
          ((C1330 * C900 - C1440 * C838 - C1330 * C1003 + C15446 * C1053 +
            C1331 * C2024 - C1441 * C1962 - C1331 * C2136 + C15225 * C2192) *
               C379 +
           (C1330 * C901 - C1440 * C839 - C1330 * C1004 + C15446 * C1054 +
            C1331 * C2025 - C1441 * C1963 - C1331 * C2137 + C15225 * C2193) *
               C380 +
           (C1330 * C902 - C1440 * C840 - C1330 * C1005 + C15446 * C1055 +
            C1331 * C2026 - C1441 * C1964 - C1331 * C2138 + C15225 * C2194) *
               C15468) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C1330 * C124 - C1440 * C81 - C1330 * C189 + C15446 * C222 +
           C1331 * C456 - C1441 * C391 - C1331 * C556 + C15225 * C609) *
              C15125 * C5974 +
          (C1330 * C900 - C1440 * C838 - C1330 * C1003 + C15446 * C1053 +
           C1331 * C2024 - C1441 * C1962 - C1331 * C2136 + C15225 * C2192) *
              C15125 * C5975 +
          (C1330 * C903 - C1440 * C841 - C1330 * C1006 + C15446 * C1056 +
           C1331 * C3107 - C1441 * C3056 - C1331 * C3195 + C15225 * C3239) *
              C15125 * C5976 +
          (C1330 * C5286 - C1440 * C5256 - C1330 * C5343 + C15446 * C5369 +
           C1331 * C6346 - C1441 * C6308 - C1331 * C6418 + C15225 * C6454) *
              C15125 * C15461) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) * C3490 +
          (C15447 * C249 - C1694 * C189 + C15265 * C1097 - C1695 * C1003) *
              C3444 +
          (C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
              C3491 +
          (C15447 * C653 - C1694 * C556 + C15265 * C2245 - C1695 * C2136) *
              C3445 +
          (C15447 * C509 - C1694 * C394 + C15265 * C3151 - C1695 * C3057) *
              C3492 +
          (C15447 * C654 - C1694 * C559 + C15265 * C3280 - C1695 * C3194) *
              C3446 +
          (C15447 * C2861 - C1694 * C2800 + C15265 * C4322 - C1695 * C4248) *
              C3493 +
          (C15447 * C2942 - C1694 * C2887 + C15265 * C4429 - C1695 * C4358) *
              C15454) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) *
               C1330 +
           (C15447 * C249 - C1694 * C189 + C15265 * C1097 - C1695 * C1003) *
               C15446 +
           (C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C1331 +
           (C15447 * C653 - C1694 * C556 + C15265 * C2245 - C1695 * C2136) *
               C15225) *
              C379 +
          ((C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) *
               C1330 +
           (C15447 * C250 - C1694 * C190 + C15265 * C1099 - C1695 * C1004) *
               C15446 +
           (C15447 * C507 - C1694 * C392 + C15265 * C2081 - C1695 * C1963) *
               C1331 +
           (C15447 * C655 - C1694 * C557 + C15265 * C2246 - C1695 * C2137) *
               C15225) *
              C380 +
          ((C15447 * C159 - C1694 * C83 + C15265 * C957 - C1695 * C840) *
               C1330 +
           (C15447 * C251 - C1694 * C191 + C15265 * C1101 - C1695 * C1005) *
               C15446 +
           (C15447 * C508 - C1694 * C393 + C15265 * C2082 - C1695 * C1964) *
               C1331 +
           (C15447 * C657 - C1694 * C558 + C15265 * C2247 - C1695 * C2138) *
               C15225) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C5974 * C157 - C6052 * C81 + C5975 * C953 - C6053 * C838 +
           C5976 * C954 - C6054 * C841 + C15461 * C5317 - C6055 * C5256) *
              C1330 +
          (C5974 * C249 - C6052 * C189 + C5975 * C1097 - C6053 * C1003 +
           C5976 * C1098 - C6054 * C1006 + C15461 * C5393 - C6055 * C5343) *
              C15446 +
          (C5974 * C506 - C6052 * C391 + C5975 * C2080 - C6053 * C1962 +
           C5976 * C3150 - C6054 * C3056 + C15461 * C6382 - C6055 * C6308) *
              C1331 +
          (C5974 * C653 - C6052 * C556 + C5975 * C2245 - C6053 * C2136 +
           C5976 * C3279 - C6054 * C3195 + C15461 * C6489 - C6055 * C6418) *
              C15225) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15125 * C86 - C2798 * C81) * C1694 +
                     (C15125 * C281 - C2798 * C276) * C15447 +
                     (C15125 * C844 - C2798 * C838) * C1695 +
                     (C15125 * C1147 - C2798 * C1141) * C15265) *
                        C3444 +
                    ((C15125 * C397 - C2798 * C391) * C1694 +
                     (C15125 * C703 - C2798 * C697) * C15447 +
                     (C15125 * C1965 - C2798 * C1962) * C1695 +
                     (C15125 * C2301 - C2798 * C2298) * C15265) *
                        C3445 +
                    ((C15125 * C403 - C2798 * C394) * C1694 +
                     (C15125 * C706 - C2798 * C700) * C15447 +
                     (C15125 * C3061 - C2798 * C3057) * C1695 +
                     (C15125 * C3324 - C2798 * C3321) * C15265) *
                        C3446 +
                    ((C15125 * C2802 - C2798 * C2800) * C1694 +
                     (C15125 * C2968 - C2798 * C2966) * C15447 +
                     (C15125 * C4249 - C2798 * C4248) * C1695 +
                     (C15125 * C4465 - C2798 * C4464) * C15265) *
                        C15454) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 +
                      C15468 * C90 - C389 * C83) *
                         C1694 +
                     (C379 * C281 - C385 * C276 + C380 * C282 - C387 * C277 +
                      C15468 * C283 - C389 * C278) *
                         C15447 +
                     (C379 * C844 - C385 * C838 + C380 * C846 - C387 * C839 +
                      C15468 * C848 - C389 * C840) *
                         C1695 +
                     (C379 * C1147 - C385 * C1141 + C380 * C1148 -
                      C387 * C1142 + C15468 * C1149 - C389 * C1143) *
                         C15265) *
                        C15446 +
                    ((C379 * C397 - C385 * C391 + C380 * C399 - C387 * C392 +
                      C15468 * C401 - C389 * C393) *
                         C1694 +
                     (C379 * C703 - C385 * C697 + C380 * C704 - C387 * C698 +
                      C15468 * C705 - C389 * C699) *
                         C15447 +
                     (C379 * C1965 - C385 * C1962 + C380 * C1967 -
                      C387 * C1963 + C15468 * C1969 - C389 * C1964) *
                         C1695 +
                     (C379 * C2301 - C385 * C2298 + C380 * C2302 -
                      C387 * C2299 + C15468 * C2303 - C389 * C2300) *
                         C15265) *
                        C15225) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C15125 * C86 - C2798 * C81) * C6052 +
                     (C15125 * C281 - C2798 * C276) * C5974 +
                     (C15125 * C844 - C2798 * C838) * C6053 +
                     (C15125 * C1147 - C2798 * C1141) * C5975 +
                     (C15125 * C850 - C2798 * C841) * C6054 +
                     (C15125 * C1150 - C2798 * C1144) * C5976 +
                     (C15125 * C5258 - C2798 * C5256) * C6055 +
                     (C15125 * C5419 - C2798 * C5417) * C15461) *
                        C15446 +
                    ((C15125 * C397 - C2798 * C391) * C6052 +
                     (C15125 * C703 - C2798 * C697) * C5974 +
                     (C15125 * C1965 - C2798 * C1962) * C6053 +
                     (C15125 * C2301 - C2798 * C2298) * C5975 +
                     (C15125 * C3059 - C2798 * C3056) * C6054 +
                     (C15125 * C3323 - C2798 * C3320) * C5976 +
                     (C15125 * C6309 - C2798 * C6308) * C6055 +
                     (C15125 * C6525 - C2798 * C6524) * C15461) *
                        C15225) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3444 * C124 - C3490 * C81 + C3445 * C456 - C3491 * C391 +
           C3446 * C457 - C3492 * C394 + C15454 * C2835 - C3493 * C2800) *
              C1694 +
          (C3444 * C308 - C3490 * C276 + C3445 * C747 - C3491 * C697 +
           C3446 * C748 - C3492 * C700 + C15454 * C2992 - C3493 * C2966) *
              C15447 +
          (C3444 * C900 - C3490 * C838 + C3445 * C2024 - C3491 * C1962 +
           C3446 * C3106 - C3492 * C3057 + C15454 * C4286 - C3493 * C4248) *
              C1695 +
          (C3444 * C1191 - C3490 * C1141 + C3445 * C2354 - C3491 * C2298 +
           C3446 * C3364 - C3492 * C3321 + C15454 * C4500 - C3493 * C4464) *
              C15265) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) *
               C1694 +
           (C15446 * C308 - C1330 * C276 + C15225 * C747 - C1331 * C697) *
               C15447 +
           (C15446 * C900 - C1330 * C838 + C15225 * C2024 - C1331 * C1962) *
               C1695 +
           (C15446 * C1191 - C1330 * C1141 + C15225 * C2354 - C1331 * C2298) *
               C15265) *
              C379 +
          ((C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) *
               C1694 +
           (C15446 * C309 - C1330 * C277 + C15225 * C749 - C1331 * C698) *
               C15447 +
           (C15446 * C901 - C1330 * C839 + C15225 * C2025 - C1331 * C1963) *
               C1695 +
           (C15446 * C1193 - C1330 * C1142 + C15225 * C2355 - C1331 * C2299) *
               C15265) *
              C380 +
          ((C15446 * C126 - C1330 * C83 + C15225 * C460 - C1331 * C393) *
               C1694 +
           (C15446 * C310 - C1330 * C278 + C15225 * C751 - C1331 * C699) *
               C15447 +
           (C15446 * C902 - C1330 * C840 + C15225 * C2026 - C1331 * C1964) *
               C1695 +
           (C15446 * C1195 - C1330 * C1143 + C15225 * C2356 - C1331 * C2300) *
               C15265) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) * C6052 +
          (C15446 * C308 - C1330 * C276 + C15225 * C747 - C1331 * C697) *
              C5974 +
          (C15446 * C900 - C1330 * C838 + C15225 * C2024 - C1331 * C1962) *
              C6053 +
          (C15446 * C1191 - C1330 * C1141 + C15225 * C2354 - C1331 * C2298) *
              C5975 +
          (C15446 * C903 - C1330 * C841 + C15225 * C3107 - C1331 * C3056) *
              C6054 +
          (C15446 * C1192 - C1330 * C1144 + C15225 * C3365 - C1331 * C3320) *
              C5976 +
          (C15446 * C5286 - C1330 * C5256 + C15225 * C6346 - C1331 * C6308) *
              C6055 +
          (C15446 * C5443 - C1330 * C5417 + C15225 * C6560 - C1331 * C6524) *
              C15461) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1694 * C157 - C1909 * C81 - C1694 * C276 + C15447 * C336 +
           C1695 * C953 - C1910 * C838 - C1695 * C1141 + C15265 * C1238) *
              C3444 +
          (C1694 * C506 - C1909 * C391 - C1694 * C697 + C15447 * C791 +
           C1695 * C2080 - C1910 * C1962 - C1695 * C2298 + C15265 * C2407) *
              C3445 +
          (C1694 * C509 - C1909 * C394 - C1694 * C700 + C15447 * C792 +
           C1695 * C3151 - C1910 * C3057 - C1695 * C3321 + C15265 * C3406) *
              C3446 +
          (C1694 * C2861 - C1909 * C2800 - C1694 * C2966 + C15447 * C3016 +
           C1695 * C4322 - C1910 * C4248 - C1695 * C4464 + C15265 * C4535) *
              C15454) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1694 * C157 - C1909 * C81 - C1694 * C276 + C15447 * C336 +
            C1695 * C953 - C1910 * C838 - C1695 * C1141 + C15265 * C1238) *
               C15446 +
           (C1694 * C506 - C1909 * C391 - C1694 * C697 + C15447 * C791 +
            C1695 * C2080 - C1910 * C1962 - C1695 * C2298 + C15265 * C2407) *
               C15225) *
              C379 +
          ((C1694 * C158 - C1909 * C82 - C1694 * C277 + C15447 * C337 +
            C1695 * C955 - C1910 * C839 - C1695 * C1142 + C15265 * C1240) *
               C15446 +
           (C1694 * C507 - C1909 * C392 - C1694 * C698 + C15447 * C793 +
            C1695 * C2081 - C1910 * C1963 - C1695 * C2299 + C15265 * C2408) *
               C15225) *
              C380 +
          ((C1694 * C159 - C1909 * C83 - C1694 * C278 + C15447 * C338 +
            C1695 * C957 - C1910 * C840 - C1695 * C1143 + C15265 * C1242) *
               C15446 +
           (C1694 * C508 - C1909 * C393 - C1694 * C699 + C15447 * C795 +
            C1695 * C2082 - C1910 * C1964 - C1695 * C2300 + C15265 * C2409) *
               C15225) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C6052 * C157 - C6269 * C81 - C6052 * C276 + C5974 * C336 +
           C6053 * C953 - C6270 * C838 - C6053 * C1141 + C5975 * C1238 +
           C6054 * C954 - C6271 * C841 - C6054 * C1144 + C5976 * C1239 +
           C6055 * C5317 - C6272 * C5256 - C6055 * C5417 + C15461 * C5472) *
              C15446 +
          (C6052 * C506 - C6269 * C391 - C6052 * C697 + C5974 * C791 +
           C6053 * C2080 - C6270 * C1962 - C6053 * C2298 + C5975 * C2407 +
           C6054 * C3150 - C6271 * C3056 - C6054 * C3320 + C5976 * C3405 +
           C6055 * C6382 - C6272 * C6308 - C6055 * C6524 + C15461 * C6595) *
              C15225) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (C71 * C86 - C72 * C81 - C71 * C87 + C61 * C96 + C73 * C88 -
              C74 * C82 - C73 * C89 + C62 * C97 + C75 * C90 - C76 * C83 -
              C75 * C91 + C63 * C98 + C77 * C92 - C78 * C84 - C77 * C93 +
              C64 * C99 + C79 * C94 - C80 * C85 - C79 * C95 + C65 * C100) *
             C15178 * C15167 * C68 * C69 * C70 +
         0.5 * std::pow(Pi, 2.5) *
             ((C385 * C86 - C386 * C81 - C385 * C87 + C379 * C96 + C387 * C88 -
               C388 * C82 - C387 * C89 + C380 * C97 + C389 * C90 - C390 * C83 -
               C389 * C91 + C15468 * C98) *
                  C15178 * C15504 +
              (C385 * C397 - C386 * C391 - C385 * C398 + C379 * C409 +
               C387 * C399 - C388 * C392 - C387 * C400 + C380 * C410 +
               C389 * C401 - C390 * C393 - C389 * C402 + C15468 * C411) *
                  C15178 * C15492 +
              (C385 * C403 - C386 * C394 - C385 * C404 + C379 * C412 +
               C387 * C405 - C388 * C395 - C387 * C406 + C380 * C413 +
               C389 * C407 - C390 * C396 - C389 * C408 + C15468 * C414) *
                  C15178 * C15472) *
             C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C385 * C86 - C386 * C81 - C385 * C87 + C379 * C96 + C387 * C88 -
           C388 * C82 - C387 * C89 + C380 * C97 + C389 * C90 - C390 * C83 -
           C389 * C91 + C15468 * C98) *
              C15505 +
          (C385 * C844 - C386 * C838 - C385 * C845 + C379 * C856 + C387 * C846 -
           C388 * C839 - C387 * C847 + C380 * C857 + C389 * C848 - C390 * C840 -
           C389 * C849 + C15468 * C858) *
              C15494 +
          (C385 * C850 - C386 * C841 - C385 * C851 + C379 * C859 + C387 * C852 -
           C388 * C842 - C387 * C853 + C380 * C860 + C389 * C854 - C390 * C843 -
           C389 * C855 + C15468 * C861) *
              C15475) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C2454 * C86 - C2455 * C81 - C2454 * C87 + C15501 * C96 +
           C2456 * C88 - C2457 * C82 - C2456 * C89 + C15488 * C97 +
           C2458 * C90 - C2459 * C83 - C2458 * C91 + C15468 * C98) *
              C15178 * C2451 +
          (C2454 * C397 - C2455 * C391 - C2454 * C398 + C15501 * C409 +
           C2456 * C399 - C2457 * C392 - C2456 * C400 + C15488 * C410 +
           C2458 * C401 - C2459 * C393 - C2458 * C402 + C15468 * C411) *
              C15178 * C2452 +
          (C2454 * C403 - C2455 * C394 - C2454 * C404 + C15501 * C412 +
           C2456 * C405 - C2457 * C395 - C2456 * C406 + C15488 * C413 +
           C2458 * C407 - C2459 * C396 - C2458 * C408 + C15468 * C414) *
              C15178 * C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C15178 *
              C2793 +
          (C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
              C15178 * C2794 +
          (C2798 * C403 - C2799 * C394 - C2798 * C404 + C15125 * C412) *
              C15178 * C2795 +
          (C2798 * C2802 - C2799 * C2800 - C2798 * C2803 + C15125 * C2806) *
              C15178 * C2796 +
          (C2798 * C2804 - C2799 * C2801 - C2798 * C2805 + C15125 * C2807) *
              C15178 * C2797) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C15505 +
           (C2798 * C844 - C2799 * C838 - C2798 * C845 + C15125 * C856) *
               C15494 +
           (C2798 * C850 - C2799 * C841 - C2798 * C851 + C15125 * C859) *
               C15475) *
              C2451 +
          ((C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
               C15505 +
           (C2798 * C1965 - C2799 * C1962 - C2798 * C1966 + C15125 * C1971) *
               C15494 +
           (C2798 * C3059 - C2799 * C3056 - C2798 * C3060 + C15125 * C3065) *
               C15475) *
              C2452 +
          ((C2798 * C403 - C2799 * C394 - C2798 * C404 + C15125 * C412) *
               C15505 +
           (C2798 * C3061 - C2799 * C3057 - C2798 * C3062 + C15125 * C3066) *
               C15494 +
           (C2798 * C3063 - C2799 * C3058 - C2798 * C3064 + C15125 * C3067) *
               C15475) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C2454 * C86 - C2455 * C81 - C2454 * C87 + C15501 * C96 +
           C2456 * C88 - C2457 * C82 - C2456 * C89 + C15488 * C97 +
           C2458 * C90 - C2459 * C83 - C2458 * C91 + C15468 * C98) *
              C4574 +
          (C2454 * C844 - C2455 * C838 - C2454 * C845 + C15501 * C856 +
           C2456 * C846 - C2457 * C839 - C2456 * C847 + C15488 * C857 +
           C2458 * C848 - C2459 * C840 - C2458 * C849 + C15468 * C858) *
              C4575 +
          (C2454 * C850 - C2455 * C841 - C2454 * C851 + C15501 * C859 +
           C2456 * C852 - C2457 * C842 - C2456 * C853 + C15488 * C860 +
           C2458 * C854 - C2459 * C843 - C2458 * C855 + C15468 * C861) *
              C15475) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C4574 +
           (C2798 * C844 - C2799 * C838 - C2798 * C845 + C15125 * C856) *
               C4575 +
           (C2798 * C850 - C2799 * C841 - C2798 * C851 + C15125 * C859) *
               C15475) *
              C15504 +
          ((C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
               C4574 +
           (C2798 * C1965 - C2799 * C1962 - C2798 * C1966 + C15125 * C1971) *
               C4575 +
           (C2798 * C3059 - C2799 * C3056 - C2798 * C3060 + C15125 * C3065) *
               C15475) *
              C15492 +
          ((C2798 * C403 - C2799 * C394 - C2798 * C404 + C15125 * C412) *
               C4574 +
           (C2798 * C3061 - C2799 * C3057 - C2798 * C3062 + C15125 * C3066) *
               C4575 +
           (C2798 * C3063 - C2799 * C3058 - C2798 * C3064 + C15125 * C3067) *
               C15475) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C5251 +
          (C2798 * C844 - C2799 * C838 - C2798 * C845 + C15125 * C856) * C5252 +
          (C2798 * C850 - C2799 * C841 - C2798 * C851 + C15125 * C859) * C5253 +
          (C2798 * C5258 - C2799 * C5256 - C2798 * C5259 + C15125 * C5262) *
              C5254 +
          (C2798 * C5260 - C2799 * C5257 - C2798 * C5261 + C15125 * C5263) *
              C5255) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] += (0.5 * std::pow(Pi, 2.5) *
                       ((C15167 * C124 - C123 * C81) * C71 +
                        (C15167 * C129 - C123 * C87) * C61 +
                        (C15167 * C125 - C123 * C82) * C73 +
                        (C15167 * C130 - C123 * C89) * C62 +
                        (C15167 * C126 - C123 * C83) * C75 +
                        (C15167 * C131 - C123 * C91) * C63 +
                        (C15167 * C127 - C123 * C84) * C77 +
                        (C15167 * C132 - C123 * C93) * C64 +
                        (C15167 * C128 - C123 * C85) * C79 +
                        (C15167 * C133 - C123 * C95) * C65) *
                       C15178 * C68 * C69 * C70 +
                   0.5 * std::pow(Pi, 2.5) *
                       ((C15504 * C124 - C453 * C81 + C15492 * C456 -
                         C454 * C391 + C15472 * C457 - C455 * C394) *
                            C385 +
                        (C15504 * C129 - C453 * C87 + C15492 * C462 -
                         C454 * C398 + C15472 * C463 - C455 * C404) *
                            C379 +
                        (C15504 * C125 - C453 * C82 + C15492 * C458 -
                         C454 * C392 + C15472 * C459 - C455 * C395) *
                            C387 +
                        (C15504 * C130 - C453 * C89 + C15492 * C464 -
                         C454 * C400 + C15472 * C465 - C455 * C406) *
                            C380 +
                        (C15504 * C126 - C453 * C83 + C15492 * C460 -
                         C454 * C393 + C15472 * C461 - C455 * C396) *
                            C389 +
                        (C15504 * C131 - C453 * C91 + C15492 * C466 -
                         C454 * C402 + C15472 * C467 - C455 * C408) *
                            C15468) *
                       C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C385 +
                     (C15167 * C129 - C123 * C87) * C379 +
                     (C15167 * C125 - C123 * C82) * C387 +
                     (C15167 * C130 - C123 * C89) * C380 +
                     (C15167 * C126 - C123 * C83) * C389 +
                     (C15167 * C131 - C123 * C91) * C15468) *
                        C15505 +
                    ((C15167 * C900 - C123 * C838) * C385 +
                     (C15167 * C906 - C123 * C845) * C379 +
                     (C15167 * C901 - C123 * C839) * C387 +
                     (C15167 * C907 - C123 * C847) * C380 +
                     (C15167 * C902 - C123 * C840) * C389 +
                     (C15167 * C908 - C123 * C849) * C15468) *
                        C15494 +
                    ((C15167 * C903 - C123 * C841) * C385 +
                     (C15167 * C909 - C123 * C851) * C379 +
                     (C15167 * C904 - C123 * C842) * C387 +
                     (C15167 * C910 - C123 * C853) * C380 +
                     (C15167 * C905 - C123 * C843) * C389 +
                     (C15167 * C911 - C123 * C855) * C15468) *
                        C15475) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   ((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                     C15472 * C457 - C2500 * C394) *
                        C2454 +
                    (C2451 * C129 - C2498 * C87 + C2452 * C462 - C2499 * C398 +
                     C15472 * C463 - C2500 * C404) *
                        C15501 +
                    (C2451 * C125 - C2498 * C82 + C2452 * C458 - C2499 * C392 +
                     C15472 * C459 - C2500 * C395) *
                        C2456 +
                    (C2451 * C130 - C2498 * C89 + C2452 * C464 - C2499 * C400 +
                     C15472 * C465 - C2500 * C406) *
                        C15488 +
                    (C2451 * C126 - C2498 * C83 + C2452 * C460 - C2499 * C393 +
                     C15472 * C461 - C2500 * C396) *
                        C2458 +
                    (C2451 * C131 - C2498 * C91 + C2452 * C466 - C2499 * C402 +
                     C15472 * C467 - C2500 * C408) *
                        C15468) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   ((C2793 * C124 - C2830 * C81 + C2794 * C456 - C2831 * C391 +
                     C2795 * C457 - C2832 * C394 + C2796 * C2835 -
                     C2833 * C2800 + C2797 * C2836 - C2834 * C2801) *
                        C2798 +
                    (C2793 * C129 - C2830 * C87 + C2794 * C462 - C2831 * C398 +
                     C2795 * C463 - C2832 * C404 + C2796 * C2837 -
                     C2833 * C2803 + C2797 * C2838 - C2834 * C2805) *
                        C15125) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                      C15472 * C457 - C2500 * C394) *
                         C2798 +
                     (C2451 * C129 - C2498 * C87 + C2452 * C462 - C2499 * C398 +
                      C15472 * C463 - C2500 * C404) *
                         C15125) *
                        C15505 +
                    ((C2451 * C900 - C2498 * C838 + C2452 * C2024 -
                      C2499 * C1962 + C15472 * C3106 - C2500 * C3057) *
                         C2798 +
                     (C2451 * C906 - C2498 * C845 + C2452 * C2027 -
                      C2499 * C1966 + C15472 * C3109 - C2500 * C3062) *
                         C15125) *
                        C15494 +
                    ((C2451 * C903 - C2498 * C841 + C2452 * C3107 -
                      C2499 * C3056 + C15472 * C3108 - C2500 * C3058) *
                         C2798 +
                     (C2451 * C909 - C2498 * C851 + C2452 * C3110 -
                      C2499 * C3060 + C15472 * C3111 - C2500 * C3064) *
                         C15125) *
                        C15475) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C2454 +
                     (C15167 * C129 - C123 * C87) * C15501 +
                     (C15167 * C125 - C123 * C82) * C2456 +
                     (C15167 * C130 - C123 * C89) * C15488 +
                     (C15167 * C126 - C123 * C83) * C2458 +
                     (C15167 * C131 - C123 * C91) * C15468) *
                        C4574 +
                    ((C15167 * C900 - C123 * C838) * C2454 +
                     (C15167 * C906 - C123 * C845) * C15501 +
                     (C15167 * C901 - C123 * C839) * C2456 +
                     (C15167 * C907 - C123 * C847) * C15488 +
                     (C15167 * C902 - C123 * C840) * C2458 +
                     (C15167 * C908 - C123 * C849) * C15468) *
                        C4575 +
                    ((C15167 * C903 - C123 * C841) * C2454 +
                     (C15167 * C909 - C123 * C851) * C15501 +
                     (C15167 * C904 - C123 * C842) * C2456 +
                     (C15167 * C910 - C123 * C853) * C15488 +
                     (C15167 * C905 - C123 * C843) * C2458 +
                     (C15167 * C911 - C123 * C855) * C15468) *
                        C15475) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                      C15472 * C457 - C455 * C394) *
                         C2798 +
                     (C15504 * C129 - C453 * C87 + C15492 * C462 - C454 * C398 +
                      C15472 * C463 - C455 * C404) *
                         C15125) *
                        C4574 +
                    ((C15504 * C900 - C453 * C838 + C15492 * C2024 -
                      C454 * C1962 + C15472 * C3106 - C455 * C3057) *
                         C2798 +
                     (C15504 * C906 - C453 * C845 + C15492 * C2027 -
                      C454 * C1966 + C15472 * C3109 - C455 * C3062) *
                         C15125) *
                        C4575 +
                    ((C15504 * C903 - C453 * C841 + C15492 * C3107 -
                      C454 * C3056 + C15472 * C3108 - C455 * C3058) *
                         C2798 +
                     (C15504 * C909 - C453 * C851 + C15492 * C3110 -
                      C454 * C3060 + C15472 * C3111 - C455 * C3064) *
                         C15125) *
                        C15475) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C2798 +
                     (C15167 * C129 - C123 * C87) * C15125) *
                        C5251 +
                    ((C15167 * C900 - C123 * C838) * C2798 +
                     (C15167 * C906 - C123 * C845) * C15125) *
                        C5252 +
                    ((C15167 * C903 - C123 * C841) * C2798 +
                     (C15167 * C909 - C123 * C851) * C15125) *
                        C5253 +
                    ((C15167 * C5286 - C123 * C5256) * C2798 +
                     (C15167 * C5288 - C123 * C5259) * C15125) *
                        C5254 +
                    ((C15167 * C5287 - C123 * C5257) * C2798 +
                     (C15167 * C5289 - C123 * C5261) * C15125) *
                        C5255) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[12] += (0.5 * std::pow(Pi, 2.5) *
                       ((C15178 * C157 - C156 * C81) * C71 +
                        (C15178 * C162 - C156 * C87) * C61 +
                        (C15178 * C158 - C156 * C82) * C73 +
                        (C15178 * C163 - C156 * C89) * C62 +
                        (C15178 * C159 - C156 * C83) * C75 +
                        (C15178 * C164 - C156 * C91) * C63 +
                        (C15178 * C160 - C156 * C84) * C77 +
                        (C15178 * C165 - C156 * C93) * C64 +
                        (C15178 * C161 - C156 * C85) * C79 +
                        (C15178 * C166 - C156 * C95) * C65) *
                       C15167 * C68 * C69 * C70 +
                   0.5 * std::pow(Pi, 2.5) *
                       (((C15178 * C157 - C156 * C81) * C385 +
                         (C15178 * C162 - C156 * C87) * C379 +
                         (C15178 * C158 - C156 * C82) * C387 +
                         (C15178 * C163 - C156 * C89) * C380 +
                         (C15178 * C159 - C156 * C83) * C389 +
                         (C15178 * C164 - C156 * C91) * C15468) *
                            C15504 +
                        ((C15178 * C506 - C156 * C391) * C385 +
                         (C15178 * C512 - C156 * C398) * C379 +
                         (C15178 * C507 - C156 * C392) * C387 +
                         (C15178 * C513 - C156 * C400) * C380 +
                         (C15178 * C508 - C156 * C393) * C389 +
                         (C15178 * C514 - C156 * C402) * C15468) *
                            C15492 +
                        ((C15178 * C509 - C156 * C394) * C385 +
                         (C15178 * C515 - C156 * C404) * C379 +
                         (C15178 * C510 - C156 * C395) * C387 +
                         (C15178 * C516 - C156 * C406) * C380 +
                         (C15178 * C511 - C156 * C396) * C389 +
                         (C15178 * C517 - C156 * C408) * C15468) *
                            C15472) *
                       C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C15505 * C157 - C950 * C81 + C15494 * C953 - C951 * C838 +
                     C15475 * C954 - C952 * C841) *
                        C385 +
                    (C15505 * C162 - C950 * C87 + C15494 * C959 - C951 * C845 +
                     C15475 * C960 - C952 * C851) *
                        C379 +
                    (C15505 * C158 - C950 * C82 + C15494 * C955 - C951 * C839 +
                     C15475 * C956 - C952 * C842) *
                        C387 +
                    (C15505 * C163 - C950 * C89 + C15494 * C961 - C951 * C847 +
                     C15475 * C962 - C952 * C853) *
                        C380 +
                    (C15505 * C159 - C950 * C83 + C15494 * C957 - C951 * C840 +
                     C15475 * C958 - C952 * C843) *
                        C389 +
                    (C15505 * C164 - C950 * C91 + C15494 * C963 - C951 * C849 +
                     C15475 * C964 - C952 * C855) *
                        C15468) *
                   C15167 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C2454 +
                     (C15178 * C162 - C156 * C87) * C15501 +
                     (C15178 * C158 - C156 * C82) * C2456 +
                     (C15178 * C163 - C156 * C89) * C15488 +
                     (C15178 * C159 - C156 * C83) * C2458 +
                     (C15178 * C164 - C156 * C91) * C15468) *
                        C2451 +
                    ((C15178 * C506 - C156 * C391) * C2454 +
                     (C15178 * C512 - C156 * C398) * C15501 +
                     (C15178 * C507 - C156 * C392) * C2456 +
                     (C15178 * C513 - C156 * C400) * C15488 +
                     (C15178 * C508 - C156 * C393) * C2458 +
                     (C15178 * C514 - C156 * C402) * C15468) *
                        C2452 +
                    ((C15178 * C509 - C156 * C394) * C2454 +
                     (C15178 * C515 - C156 * C404) * C15501 +
                     (C15178 * C510 - C156 * C395) * C2456 +
                     (C15178 * C516 - C156 * C406) * C15488 +
                     (C15178 * C511 - C156 * C396) * C2458 +
                     (C15178 * C517 - C156 * C408) * C15468) *
                        C15472) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C2798 +
                     (C15178 * C162 - C156 * C87) * C15125) *
                        C2793 +
                    ((C15178 * C506 - C156 * C391) * C2798 +
                     (C15178 * C512 - C156 * C398) * C15125) *
                        C2794 +
                    ((C15178 * C509 - C156 * C394) * C2798 +
                     (C15178 * C515 - C156 * C404) * C15125) *
                        C2795 +
                    ((C15178 * C2861 - C156 * C2800) * C2798 +
                     (C15178 * C2863 - C156 * C2803) * C15125) *
                        C2796 +
                    ((C15178 * C2862 - C156 * C2801) * C2798 +
                     (C15178 * C2864 - C156 * C2805) * C15125) *
                        C2797) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C15505 * C157 - C950 * C81 + C15494 * C953 - C951 * C838 +
                      C15475 * C954 - C952 * C841) *
                         C2798 +
                     (C15505 * C162 - C950 * C87 + C15494 * C959 - C951 * C845 +
                      C15475 * C960 - C952 * C851) *
                         C15125) *
                        C2451 +
                    ((C15505 * C506 - C950 * C391 + C15494 * C2080 -
                      C951 * C1962 + C15475 * C3150 - C952 * C3056) *
                         C2798 +
                     (C15505 * C512 - C950 * C398 + C15494 * C2083 -
                      C951 * C1966 + C15475 * C3153 - C952 * C3060) *
                         C15125) *
                        C2452 +
                    ((C15505 * C509 - C950 * C394 + C15494 * C3151 -
                      C951 * C3057 + C15475 * C3152 - C952 * C3058) *
                         C2798 +
                     (C15505 * C515 - C950 * C404 + C15494 * C3154 -
                      C951 * C3062 + C15475 * C3155 - C952 * C3064) *
                         C15125) *
                        C15472) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C4574 * C157 - C4653 * C81 + C4575 * C953 - C4654 * C838 +
                     C15475 * C954 - C4655 * C841) *
                        C2454 +
                    (C4574 * C162 - C4653 * C87 + C4575 * C959 - C4654 * C845 +
                     C15475 * C960 - C4655 * C851) *
                        C15501 +
                    (C4574 * C158 - C4653 * C82 + C4575 * C955 - C4654 * C839 +
                     C15475 * C956 - C4655 * C842) *
                        C2456 +
                    (C4574 * C163 - C4653 * C89 + C4575 * C961 - C4654 * C847 +
                     C15475 * C962 - C4655 * C853) *
                        C15488 +
                    (C4574 * C159 - C4653 * C83 + C4575 * C957 - C4654 * C840 +
                     C15475 * C958 - C4655 * C843) *
                        C2458 +
                    (C4574 * C164 - C4653 * C91 + C4575 * C963 - C4654 * C849 +
                     C15475 * C964 - C4655 * C855) *
                        C15468) *
                   C15167 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C4574 * C157 - C4653 * C81 + C4575 * C953 - C4654 * C838 +
                      C15475 * C954 - C4655 * C841) *
                         C2798 +
                     (C4574 * C162 - C4653 * C87 + C4575 * C959 - C4654 * C845 +
                      C15475 * C960 - C4655 * C851) *
                         C15125) *
                        C15504 +
                    ((C4574 * C506 - C4653 * C391 + C4575 * C2080 -
                      C4654 * C1962 + C15475 * C3150 - C4655 * C3056) *
                         C2798 +
                     (C4574 * C512 - C4653 * C398 + C4575 * C2083 -
                      C4654 * C1966 + C15475 * C3153 - C4655 * C3060) *
                         C15125) *
                        C15492 +
                    ((C4574 * C509 - C4653 * C394 + C4575 * C3151 -
                      C4654 * C3057 + C15475 * C3152 - C4655 * C3058) *
                         C2798 +
                     (C4574 * C515 - C4653 * C404 + C4575 * C3154 -
                      C4654 * C3062 + C15475 * C3155 - C4655 * C3064) *
                         C15125) *
                        C15472) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C5251 * C157 - C5312 * C81 + C5252 * C953 - C5313 * C838 +
                     C5253 * C954 - C5314 * C841 + C5254 * C5317 -
                     C5315 * C5256 + C5255 * C5318 - C5316 * C5257) *
                        C2798 +
                    (C5251 * C162 - C5312 * C87 + C5252 * C959 - C5313 * C845 +
                     C5253 * C960 - C5314 * C851 + C5254 * C5319 -
                     C5315 * C5259 + C5255 * C5320 - C5316 * C5261) *
                        C15125) *
                   C15167 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C61 * C86 - C71 * C81 + C62 * C88 - C73 * C82 + C63 * C90 -
               C75 * C83 + C64 * C92 - C77 * C84 + C65 * C94 - C79 * C85) *
                  C123 +
              (C61 * C194 - C71 * C189 + C62 * C195 - C73 * C190 + C63 * C196 -
               C75 * C191 + C64 * C197 - C77 * C192 + C65 * C198 - C79 * C193) *
                  C15167) *
             C15178 * C68 * C69 * C70 +
         0.5 * std::pow(Pi, 2.5) *
             ((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 +
               C15468 * C90 - C389 * C83) *
                  C453 +
              (C379 * C194 - C385 * C189 + C380 * C195 - C387 * C190 +
               C15468 * C196 - C389 * C191) *
                  C15504 +
              (C379 * C397 - C385 * C391 + C380 * C399 - C387 * C392 +
               C15468 * C401 - C389 * C393) *
                  C454 +
              (C379 * C562 - C385 * C556 + C380 * C563 - C387 * C557 +
               C15468 * C564 - C389 * C558) *
                  C15492 +
              (C379 * C403 - C385 * C394 + C380 * C405 - C387 * C395 +
               C15468 * C407 - C389 * C396) *
                  C455 +
              (C379 * C565 - C385 * C559 + C380 * C566 - C387 * C560 +
               C15468 * C567 - C389 * C561) *
                  C15472) *
             C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 + C15468 * C90 -
            C389 * C83) *
               C123 +
           (C379 * C194 - C385 * C189 + C380 * C195 - C387 * C190 +
            C15468 * C196 - C389 * C191) *
               C15167) *
              C15505 +
          ((C379 * C844 - C385 * C838 + C380 * C846 - C387 * C839 +
            C15468 * C848 - C389 * C840) *
               C123 +
           (C379 * C1009 - C385 * C1003 + C380 * C1010 - C387 * C1004 +
            C15468 * C1011 - C389 * C1005) *
               C15167) *
              C15494 +
          ((C379 * C850 - C385 * C841 + C380 * C852 - C387 * C842 +
            C15468 * C854 - C389 * C843) *
               C123 +
           (C379 * C1012 - C385 * C1006 + C380 * C1013 - C387 * C1007 +
            C15468 * C1014 - C389 * C1008) *
               C15167) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
           C15468 * C90 - C2458 * C83) *
              C2498 +
          (C15501 * C194 - C2454 * C189 + C15488 * C195 - C2456 * C190 +
           C15468 * C196 - C2458 * C191) *
              C2451 +
          (C15501 * C397 - C2454 * C391 + C15488 * C399 - C2456 * C392 +
           C15468 * C401 - C2458 * C393) *
              C2499 +
          (C15501 * C562 - C2454 * C556 + C15488 * C563 - C2456 * C557 +
           C15468 * C564 - C2458 * C558) *
              C2452 +
          (C15501 * C403 - C2454 * C394 + C15488 * C405 - C2456 * C395 +
           C15468 * C407 - C2458 * C396) *
              C2500 +
          (C15501 * C565 - C2454 * C559 + C15488 * C566 - C2456 * C560 +
           C15468 * C567 - C2458 * C561) *
              C15472) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C15125 * C86 - C2798 * C81) * C2830 +
          (C15125 * C194 - C2798 * C189) * C2793 +
          (C15125 * C397 - C2798 * C391) * C2831 +
          (C15125 * C562 - C2798 * C556) * C2794 +
          (C15125 * C403 - C2798 * C394) * C2832 +
          (C15125 * C565 - C2798 * C559) * C2795 +
          (C15125 * C2802 - C2798 * C2800) * C2833 +
          (C15125 * C2889 - C2798 * C2887) * C2796 +
          (C15125 * C2804 - C2798 * C2801) * C2834 +
          (C15125 * C2890 - C2798 * C2888) * C2797) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C15125 * C86 - C2798 * C81) * C2498 +
           (C15125 * C194 - C2798 * C189) * C2451 +
           (C15125 * C397 - C2798 * C391) * C2499 +
           (C15125 * C562 - C2798 * C556) * C2452 +
           (C15125 * C403 - C2798 * C394) * C2500 +
           (C15125 * C565 - C2798 * C559) * C15472) *
              C15505 +
          ((C15125 * C844 - C2798 * C838) * C2498 +
           (C15125 * C1009 - C2798 * C1003) * C2451 +
           (C15125 * C1965 - C2798 * C1962) * C2499 +
           (C15125 * C2139 - C2798 * C2136) * C2452 +
           (C15125 * C3061 - C2798 * C3057) * C2500 +
           (C15125 * C3197 - C2798 * C3194) * C15472) *
              C15494 +
          ((C15125 * C850 - C2798 * C841) * C2498 +
           (C15125 * C1012 - C2798 * C1006) * C2451 +
           (C15125 * C3059 - C2798 * C3056) * C2499 +
           (C15125 * C3198 - C2798 * C3195) * C2452 +
           (C15125 * C3063 - C2798 * C3058) * C2500 +
           (C15125 * C3199 - C2798 * C3196) * C15472) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
            C15468 * C90 - C2458 * C83) *
               C123 +
           (C15501 * C194 - C2454 * C189 + C15488 * C195 - C2456 * C190 +
            C15468 * C196 - C2458 * C191) *
               C15167) *
              C4574 +
          ((C15501 * C844 - C2454 * C838 + C15488 * C846 - C2456 * C839 +
            C15468 * C848 - C2458 * C840) *
               C123 +
           (C15501 * C1009 - C2454 * C1003 + C15488 * C1010 - C2456 * C1004 +
            C15468 * C1011 - C2458 * C1005) *
               C15167) *
              C4575 +
          ((C15501 * C850 - C2454 * C841 + C15488 * C852 - C2456 * C842 +
            C15468 * C854 - C2458 * C843) *
               C123 +
           (C15501 * C1012 - C2454 * C1006 + C15488 * C1013 - C2456 * C1007 +
            C15468 * C1014 - C2458 * C1008) *
               C15167) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C15125 * C86 - C2798 * C81) * C453 +
           (C15125 * C194 - C2798 * C189) * C15504 +
           (C15125 * C397 - C2798 * C391) * C454 +
           (C15125 * C562 - C2798 * C556) * C15492 +
           (C15125 * C403 - C2798 * C394) * C455 +
           (C15125 * C565 - C2798 * C559) * C15472) *
              C4574 +
          ((C15125 * C844 - C2798 * C838) * C453 +
           (C15125 * C1009 - C2798 * C1003) * C15504 +
           (C15125 * C1965 - C2798 * C1962) * C454 +
           (C15125 * C2139 - C2798 * C2136) * C15492 +
           (C15125 * C3061 - C2798 * C3057) * C455 +
           (C15125 * C3197 - C2798 * C3194) * C15472) *
              C4575 +
          ((C15125 * C850 - C2798 * C841) * C453 +
           (C15125 * C1012 - C2798 * C1006) * C15504 +
           (C15125 * C3059 - C2798 * C3056) * C454 +
           (C15125 * C3198 - C2798 * C3195) * C15492 +
           (C15125 * C3063 - C2798 * C3058) * C455 +
           (C15125 * C3199 - C2798 * C3196) * C15472) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C15125 * C86 - C2798 * C81) * C123 +
           (C15125 * C194 - C2798 * C189) * C15167) *
              C5251 +
          ((C15125 * C844 - C2798 * C838) * C123 +
           (C15125 * C1009 - C2798 * C1003) * C15167) *
              C5252 +
          ((C15125 * C850 - C2798 * C841) * C123 +
           (C15125 * C1012 - C2798 * C1006) * C15167) *
              C5253 +
          ((C15125 * C5258 - C2798 * C5256) * C123 +
           (C15125 * C5345 - C2798 * C5343) * C15167) *
              C5254 +
          ((C15125 * C5260 - C2798 * C5257) * C123 +
           (C15125 * C5346 - C2798 * C5344) * C15167) *
              C5255) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C61 +
              (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C62 +
              (C123 * C126 - C221 * C83 - C123 * C191 + C15167 * C224) * C63 +
              (C123 * C127 - C221 * C84 - C123 * C192 + C15167 * C225) * C64 +
              (C123 * C128 - C221 * C85 - C123 * C193 + C15167 * C226) * C65) *
             C15178 * C68 * C69 * C70 +
         0.5 * std::pow(Pi, 2.5) *
             ((C453 * C124 - C606 * C81 - C453 * C189 + C15504 * C222 +
               C454 * C456 - C607 * C391 - C454 * C556 + C15492 * C609 +
               C455 * C457 - C608 * C394 - C455 * C559 + C15472 * C610) *
                  C379 +
              (C453 * C125 - C606 * C82 - C453 * C190 + C15504 * C223 +
               C454 * C458 - C607 * C392 - C454 * C557 + C15492 * C611 +
               C455 * C459 - C608 * C395 - C455 * C560 + C15472 * C612) *
                  C380 +
              (C453 * C126 - C606 * C83 - C453 * C191 + C15504 * C224 +
               C454 * C460 - C607 * C393 - C454 * C558 + C15492 * C613 +
               C455 * C461 - C608 * C396 - C455 * C561 + C15472 * C614) *
                  C15468) *
             C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C379 +
           (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C380 +
           (C123 * C126 - C221 * C83 - C123 * C191 + C15167 * C224) * C15468) *
              C15505 +
          ((C123 * C900 - C221 * C838 - C123 * C1003 + C15167 * C1053) * C379 +
           (C123 * C901 - C221 * C839 - C123 * C1004 + C15167 * C1054) * C380 +
           (C123 * C902 - C221 * C840 - C123 * C1005 + C15167 * C1055) *
               C15468) *
              C15494 +
          ((C123 * C903 - C221 * C841 - C123 * C1006 + C15167 * C1056) * C379 +
           (C123 * C904 - C221 * C842 - C123 * C1007 + C15167 * C1057) * C380 +
           (C123 * C905 - C221 * C843 - C123 * C1008 + C15167 * C1058) *
               C15468) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C2498 * C124 - C2615 * C81 - C2498 * C189 + C2451 * C222 +
           C2499 * C456 - C2616 * C391 - C2499 * C556 + C2452 * C609 +
           C2500 * C457 - C2617 * C394 - C2500 * C559 + C15472 * C610) *
              C15501 +
          (C2498 * C125 - C2615 * C82 - C2498 * C190 + C2451 * C223 +
           C2499 * C458 - C2616 * C392 - C2499 * C557 + C2452 * C611 +
           C2500 * C459 - C2617 * C395 - C2500 * C560 + C15472 * C612) *
              C15488 +
          (C2498 * C126 - C2615 * C83 - C2498 * C191 + C2451 * C224 +
           C2499 * C460 - C2616 * C393 - C2499 * C558 + C2452 * C613 +
           C2500 * C461 - C2617 * C396 - C2500 * C561 + C15472 * C614) *
              C15468) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (C2830 * C124 - C2913 * C81 - C2830 * C189 + C2793 * C222 +
          C2831 * C456 - C2914 * C391 - C2831 * C556 + C2794 * C609 +
          C2832 * C457 - C2915 * C394 - C2832 * C559 + C2795 * C610 +
          C2833 * C2835 - C2916 * C2800 - C2833 * C2887 + C2796 * C2918 +
          C2834 * C2836 - C2917 * C2801 - C2834 * C2888 + C2797 * C2919) *
         C15125 * C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C2498 * C124 - C2615 * C81 - C2498 * C189 + C2451 * C222 +
           C2499 * C456 - C2616 * C391 - C2499 * C556 + C2452 * C609 +
           C2500 * C457 - C2617 * C394 - C2500 * C559 + C15472 * C610) *
              C15125 * C15505 +
          (C2498 * C900 - C2615 * C838 - C2498 * C1003 + C2451 * C1053 +
           C2499 * C2024 - C2616 * C1962 - C2499 * C2136 + C2452 * C2192 +
           C2500 * C3106 - C2617 * C3057 - C2500 * C3194 + C15472 * C3238) *
              C15125 * C15494 +
          (C2498 * C903 - C2615 * C841 - C2498 * C1006 + C2451 * C1056 +
           C2499 * C3107 - C2616 * C3056 - C2499 * C3195 + C2452 * C3239 +
           C2500 * C3108 - C2617 * C3058 - C2500 * C3196 + C15472 * C3240) *
              C15125 * C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C15501 +
           (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C15488 +
           (C123 * C126 - C221 * C83 - C123 * C191 + C15167 * C224) * C15468) *
              C4574 +
          ((C123 * C900 - C221 * C838 - C123 * C1003 + C15167 * C1053) *
               C15501 +
           (C123 * C901 - C221 * C839 - C123 * C1004 + C15167 * C1054) *
               C15488 +
           (C123 * C902 - C221 * C840 - C123 * C1005 + C15167 * C1055) *
               C15468) *
              C4575 +
          ((C123 * C903 - C221 * C841 - C123 * C1006 + C15167 * C1056) *
               C15501 +
           (C123 * C904 - C221 * C842 - C123 * C1007 + C15167 * C1057) *
               C15488 +
           (C123 * C905 - C221 * C843 - C123 * C1008 + C15167 * C1058) *
               C15468) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C453 * C124 - C606 * C81 - C453 * C189 + C15504 * C222 +
           C454 * C456 - C607 * C391 - C454 * C556 + C15492 * C609 +
           C455 * C457 - C608 * C394 - C455 * C559 + C15472 * C610) *
              C15125 * C4574 +
          (C453 * C900 - C606 * C838 - C453 * C1003 + C15504 * C1053 +
           C454 * C2024 - C607 * C1962 - C454 * C2136 + C15492 * C2192 +
           C455 * C3106 - C608 * C3057 - C455 * C3194 + C15472 * C3238) *
              C15125 * C4575 +
          (C453 * C903 - C606 * C841 - C453 * C1006 + C15504 * C1056 +
           C454 * C3107 - C607 * C3056 - C454 * C3195 + C15492 * C3239 +
           C455 * C3108 - C608 * C3058 - C455 * C3196 + C15472 * C3240) *
              C15125 * C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C15125 *
              C5251 +
          (C123 * C900 - C221 * C838 - C123 * C1003 + C15167 * C1053) * C15125 *
              C5252 +
          (C123 * C903 - C221 * C841 - C123 * C1006 + C15167 * C1056) * C15125 *
              C5253 +
          (C123 * C5286 - C221 * C5256 - C123 * C5343 + C15167 * C5369) *
              C15125 * C5254 +
          (C123 * C5287 - C221 * C5257 - C123 * C5344 + C15167 * C5370) *
              C15125 * C5255) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C15178 * C157 - C156 * C81) * C123 +
               (C15178 * C249 - C156 * C189) * C15167) *
                  C61 +
              ((C15178 * C158 - C156 * C82) * C123 +
               (C15178 * C250 - C156 * C190) * C15167) *
                  C62 +
              ((C15178 * C159 - C156 * C83) * C123 +
               (C15178 * C251 - C156 * C191) * C15167) *
                  C63 +
              ((C15178 * C160 - C156 * C84) * C123 +
               (C15178 * C252 - C156 * C192) * C15167) *
                  C64 +
              ((C15178 * C161 - C156 * C85) * C123 +
               (C15178 * C253 - C156 * C193) * C15167) *
                  C65) *
             C68 * C69 * C70 +
         0.5 * std::pow(Pi, 2.5) *
             (((C15178 * C157 - C156 * C81) * C453 +
               (C15178 * C249 - C156 * C189) * C15504 +
               (C15178 * C506 - C156 * C391) * C454 +
               (C15178 * C653 - C156 * C556) * C15492 +
               (C15178 * C509 - C156 * C394) * C455 +
               (C15178 * C654 - C156 * C559) * C15472) *
                  C379 +
              ((C15178 * C158 - C156 * C82) * C453 +
               (C15178 * C250 - C156 * C190) * C15504 +
               (C15178 * C507 - C156 * C392) * C454 +
               (C15178 * C655 - C156 * C557) * C15492 +
               (C15178 * C510 - C156 * C395) * C455 +
               (C15178 * C656 - C156 * C560) * C15472) *
                  C380 +
              ((C15178 * C159 - C156 * C83) * C453 +
               (C15178 * C251 - C156 * C191) * C15504 +
               (C15178 * C508 - C156 * C393) * C454 +
               (C15178 * C657 - C156 * C558) * C15492 +
               (C15178 * C511 - C156 * C396) * C455 +
               (C15178 * C658 - C156 * C561) * C15472) *
                  C15468) *
             C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C15505 * C157 - C950 * C81 + C15494 * C953 - C951 * C838 +
            C15475 * C954 - C952 * C841) *
               C123 +
           (C15505 * C249 - C950 * C189 + C15494 * C1097 - C951 * C1003 +
            C15475 * C1098 - C952 * C1006) *
               C15167) *
              C379 +
          ((C15505 * C158 - C950 * C82 + C15494 * C955 - C951 * C839 +
            C15475 * C956 - C952 * C842) *
               C123 +
           (C15505 * C250 - C950 * C190 + C15494 * C1099 - C951 * C1004 +
            C15475 * C1100 - C952 * C1007) *
               C15167) *
              C380 +
          ((C15505 * C159 - C950 * C83 + C15494 * C957 - C951 * C840 +
            C15475 * C958 - C952 * C843) *
               C123 +
           (C15505 * C251 - C950 * C191 + C15494 * C1101 - C951 * C1005 +
            C15475 * C1102 - C952 * C1008) *
               C15167) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C15178 * C157 - C156 * C81) * C2498 +
           (C15178 * C249 - C156 * C189) * C2451 +
           (C15178 * C506 - C156 * C391) * C2499 +
           (C15178 * C653 - C156 * C556) * C2452 +
           (C15178 * C509 - C156 * C394) * C2500 +
           (C15178 * C654 - C156 * C559) * C15472) *
              C15501 +
          ((C15178 * C158 - C156 * C82) * C2498 +
           (C15178 * C250 - C156 * C190) * C2451 +
           (C15178 * C507 - C156 * C392) * C2499 +
           (C15178 * C655 - C156 * C557) * C2452 +
           (C15178 * C510 - C156 * C395) * C2500 +
           (C15178 * C656 - C156 * C560) * C15472) *
              C15488 +
          ((C15178 * C159 - C156 * C83) * C2498 +
           (C15178 * C251 - C156 * C191) * C2451 +
           (C15178 * C508 - C156 * C393) * C2499 +
           (C15178 * C657 - C156 * C558) * C2452 +
           (C15178 * C511 - C156 * C396) * C2500 +
           (C15178 * C658 - C156 * C561) * C15472) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C15178 * C157 - C156 * C81) * C2830 +
          (C15178 * C249 - C156 * C189) * C2793 +
          (C15178 * C506 - C156 * C391) * C2831 +
          (C15178 * C653 - C156 * C556) * C2794 +
          (C15178 * C509 - C156 * C394) * C2832 +
          (C15178 * C654 - C156 * C559) * C2795 +
          (C15178 * C2861 - C156 * C2800) * C2833 +
          (C15178 * C2942 - C156 * C2887) * C2796 +
          (C15178 * C2862 - C156 * C2801) * C2834 +
          (C15178 * C2943 - C156 * C2888) * C2797) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C15505 * C157 - C950 * C81 + C15494 * C953 - C951 * C838 +
           C15475 * C954 - C952 * C841) *
              C2498 +
          (C15505 * C249 - C950 * C189 + C15494 * C1097 - C951 * C1003 +
           C15475 * C1098 - C952 * C1006) *
              C2451 +
          (C15505 * C506 - C950 * C391 + C15494 * C2080 - C951 * C1962 +
           C15475 * C3150 - C952 * C3056) *
              C2499 +
          (C15505 * C653 - C950 * C556 + C15494 * C2245 - C951 * C2136 +
           C15475 * C3279 - C952 * C3195) *
              C2452 +
          (C15505 * C509 - C950 * C394 + C15494 * C3151 - C951 * C3057 +
           C15475 * C3152 - C952 * C3058) *
              C2500 +
          (C15505 * C654 - C950 * C559 + C15494 * C3280 - C951 * C3194 +
           C15475 * C3281 - C952 * C3196) *
              C15472) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C4574 * C157 - C4653 * C81 + C4575 * C953 - C4654 * C838 +
            C15475 * C954 - C4655 * C841) *
               C123 +
           (C4574 * C249 - C4653 * C189 + C4575 * C1097 - C4654 * C1003 +
            C15475 * C1098 - C4655 * C1006) *
               C15167) *
              C15501 +
          ((C4574 * C158 - C4653 * C82 + C4575 * C955 - C4654 * C839 +
            C15475 * C956 - C4655 * C842) *
               C123 +
           (C4574 * C250 - C4653 * C190 + C4575 * C1099 - C4654 * C1004 +
            C15475 * C1100 - C4655 * C1007) *
               C15167) *
              C15488 +
          ((C4574 * C159 - C4653 * C83 + C4575 * C957 - C4654 * C840 +
            C15475 * C958 - C4655 * C843) *
               C123 +
           (C4574 * C251 - C4653 * C191 + C4575 * C1101 - C4654 * C1005 +
            C15475 * C1102 - C4655 * C1008) *
               C15167) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C4574 * C157 - C4653 * C81 + C4575 * C953 - C4654 * C838 +
           C15475 * C954 - C4655 * C841) *
              C453 +
          (C4574 * C249 - C4653 * C189 + C4575 * C1097 - C4654 * C1003 +
           C15475 * C1098 - C4655 * C1006) *
              C15504 +
          (C4574 * C506 - C4653 * C391 + C4575 * C2080 - C4654 * C1962 +
           C15475 * C3150 - C4655 * C3056) *
              C454 +
          (C4574 * C653 - C4653 * C556 + C4575 * C2245 - C4654 * C2136 +
           C15475 * C3279 - C4655 * C3195) *
              C15492 +
          (C4574 * C509 - C4653 * C394 + C4575 * C3151 - C4654 * C3057 +
           C15475 * C3152 - C4655 * C3058) *
              C455 +
          (C4574 * C654 - C4653 * C559 + C4575 * C3280 - C4654 * C3194 +
           C15475 * C3281 - C4655 * C3196) *
              C15472) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C5251 * C157 - C5312 * C81 + C5252 * C953 - C5313 * C838 +
           C5253 * C954 - C5314 * C841 + C5254 * C5317 - C5315 * C5256 +
           C5255 * C5318 - C5316 * C5257) *
              C123 +
          (C5251 * C249 - C5312 * C189 + C5252 * C1097 - C5313 * C1003 +
           C5253 * C1098 - C5314 * C1006 + C5254 * C5393 - C5315 * C5343 +
           C5255 * C5394 - C5316 * C5344) *
              C15167) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C61 * C86 - C71 * C81 + C62 * C88 - C73 * C82 + C63 * C90 -
               C75 * C83 + C64 * C92 - C77 * C84 + C65 * C94 - C79 * C85) *
                  C156 +
              (C61 * C281 - C71 * C276 + C62 * C282 - C73 * C277 + C63 * C283 -
               C75 * C278 + C64 * C284 - C77 * C279 + C65 * C285 - C79 * C280) *
                  C15178) *
             C15167 * C68 * C69 * C70 +
         0.5 * std::pow(Pi, 2.5) *
             (((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 +
                C15468 * C90 - C389 * C83) *
                   C156 +
               (C379 * C281 - C385 * C276 + C380 * C282 - C387 * C277 +
                C15468 * C283 - C389 * C278) *
                   C15178) *
                  C15504 +
              ((C379 * C397 - C385 * C391 + C380 * C399 - C387 * C392 +
                C15468 * C401 - C389 * C393) *
                   C156 +
               (C379 * C703 - C385 * C697 + C380 * C704 - C387 * C698 +
                C15468 * C705 - C389 * C699) *
                   C15178) *
                  C15492 +
              ((C379 * C403 - C385 * C394 + C380 * C405 - C387 * C395 +
                C15468 * C407 - C389 * C396) *
                   C156 +
               (C379 * C706 - C385 * C700 + C380 * C707 - C387 * C701 +
                C15468 * C708 - C389 * C702) *
                   C15178) *
                  C15472) *
             C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 + C15468 * C90 -
           C389 * C83) *
              C950 +
          (C379 * C281 - C385 * C276 + C380 * C282 - C387 * C277 +
           C15468 * C283 - C389 * C278) *
              C15505 +
          (C379 * C844 - C385 * C838 + C380 * C846 - C387 * C839 +
           C15468 * C848 - C389 * C840) *
              C951 +
          (C379 * C1147 - C385 * C1141 + C380 * C1148 - C387 * C1142 +
           C15468 * C1149 - C389 * C1143) *
              C15494 +
          (C379 * C850 - C385 * C841 + C380 * C852 - C387 * C842 +
           C15468 * C854 - C389 * C843) *
              C952 +
          (C379 * C1150 - C385 * C1144 + C380 * C1151 - C387 * C1145 +
           C15468 * C1152 - C389 * C1146) *
              C15475) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
            C15468 * C90 - C2458 * C83) *
               C156 +
           (C15501 * C281 - C2454 * C276 + C15488 * C282 - C2456 * C277 +
            C15468 * C283 - C2458 * C278) *
               C15178) *
              C2451 +
          ((C15501 * C397 - C2454 * C391 + C15488 * C399 - C2456 * C392 +
            C15468 * C401 - C2458 * C393) *
               C156 +
           (C15501 * C703 - C2454 * C697 + C15488 * C704 - C2456 * C698 +
            C15468 * C705 - C2458 * C699) *
               C15178) *
              C2452 +
          ((C15501 * C403 - C2454 * C394 + C15488 * C405 - C2456 * C395 +
            C15468 * C407 - C2458 * C396) *
               C156 +
           (C15501 * C706 - C2454 * C700 + C15488 * C707 - C2456 * C701 +
            C15468 * C708 - C2458 * C702) *
               C15178) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C15125 * C86 - C2798 * C81) * C156 +
           (C15125 * C281 - C2798 * C276) * C15178) *
              C2793 +
          ((C15125 * C397 - C2798 * C391) * C156 +
           (C15125 * C703 - C2798 * C697) * C15178) *
              C2794 +
          ((C15125 * C403 - C2798 * C394) * C156 +
           (C15125 * C706 - C2798 * C700) * C15178) *
              C2795 +
          ((C15125 * C2802 - C2798 * C2800) * C156 +
           (C15125 * C2968 - C2798 * C2966) * C15178) *
              C2796 +
          ((C15125 * C2804 - C2798 * C2801) * C156 +
           (C15125 * C2969 - C2798 * C2967) * C15178) *
              C2797) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C15125 * C86 - C2798 * C81) * C950 +
           (C15125 * C281 - C2798 * C276) * C15505 +
           (C15125 * C844 - C2798 * C838) * C951 +
           (C15125 * C1147 - C2798 * C1141) * C15494 +
           (C15125 * C850 - C2798 * C841) * C952 +
           (C15125 * C1150 - C2798 * C1144) * C15475) *
              C2451 +
          ((C15125 * C397 - C2798 * C391) * C950 +
           (C15125 * C703 - C2798 * C697) * C15505 +
           (C15125 * C1965 - C2798 * C1962) * C951 +
           (C15125 * C2301 - C2798 * C2298) * C15494 +
           (C15125 * C3059 - C2798 * C3056) * C952 +
           (C15125 * C3323 - C2798 * C3320) * C15475) *
              C2452 +
          ((C15125 * C403 - C2798 * C394) * C950 +
           (C15125 * C706 - C2798 * C700) * C15505 +
           (C15125 * C3061 - C2798 * C3057) * C951 +
           (C15125 * C3324 - C2798 * C3321) * C15494 +
           (C15125 * C3063 - C2798 * C3058) * C952 +
           (C15125 * C3325 - C2798 * C3322) * C15475) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
           C15468 * C90 - C2458 * C83) *
              C4653 +
          (C15501 * C281 - C2454 * C276 + C15488 * C282 - C2456 * C277 +
           C15468 * C283 - C2458 * C278) *
              C4574 +
          (C15501 * C844 - C2454 * C838 + C15488 * C846 - C2456 * C839 +
           C15468 * C848 - C2458 * C840) *
              C4654 +
          (C15501 * C1147 - C2454 * C1141 + C15488 * C1148 - C2456 * C1142 +
           C15468 * C1149 - C2458 * C1143) *
              C4575 +
          (C15501 * C850 - C2454 * C841 + C15488 * C852 - C2456 * C842 +
           C15468 * C854 - C2458 * C843) *
              C4655 +
          (C15501 * C1150 - C2454 * C1144 + C15488 * C1151 - C2456 * C1145 +
           C15468 * C1152 - C2458 * C1146) *
              C15475) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C15125 * C86 - C2798 * C81) * C4653 +
           (C15125 * C281 - C2798 * C276) * C4574 +
           (C15125 * C844 - C2798 * C838) * C4654 +
           (C15125 * C1147 - C2798 * C1141) * C4575 +
           (C15125 * C850 - C2798 * C841) * C4655 +
           (C15125 * C1150 - C2798 * C1144) * C15475) *
              C15504 +
          ((C15125 * C397 - C2798 * C391) * C4653 +
           (C15125 * C703 - C2798 * C697) * C4574 +
           (C15125 * C1965 - C2798 * C1962) * C4654 +
           (C15125 * C2301 - C2798 * C2298) * C4575 +
           (C15125 * C3059 - C2798 * C3056) * C4655 +
           (C15125 * C3323 - C2798 * C3320) * C15475) *
              C15492 +
          ((C15125 * C403 - C2798 * C394) * C4653 +
           (C15125 * C706 - C2798 * C700) * C4574 +
           (C15125 * C3061 - C2798 * C3057) * C4654 +
           (C15125 * C3324 - C2798 * C3321) * C4575 +
           (C15125 * C3063 - C2798 * C3058) * C4655 +
           (C15125 * C3325 - C2798 * C3322) * C15475) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C15125 * C86 - C2798 * C81) * C5312 +
          (C15125 * C281 - C2798 * C276) * C5251 +
          (C15125 * C844 - C2798 * C838) * C5313 +
          (C15125 * C1147 - C2798 * C1141) * C5252 +
          (C15125 * C850 - C2798 * C841) * C5314 +
          (C15125 * C1150 - C2798 * C1144) * C5253 +
          (C15125 * C5258 - C2798 * C5256) * C5315 +
          (C15125 * C5419 - C2798 * C5417) * C5254 +
          (C15125 * C5260 - C2798 * C5257) * C5316 +
          (C15125 * C5420 - C2798 * C5418) * C5255) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] += (0.5 * std::pow(Pi, 2.5) *
                       (((C15167 * C124 - C123 * C81) * C156 +
                         (C15167 * C308 - C123 * C276) * C15178) *
                            C61 +
                        ((C15167 * C125 - C123 * C82) * C156 +
                         (C15167 * C309 - C123 * C277) * C15178) *
                            C62 +
                        ((C15167 * C126 - C123 * C83) * C156 +
                         (C15167 * C310 - C123 * C278) * C15178) *
                            C63 +
                        ((C15167 * C127 - C123 * C84) * C156 +
                         (C15167 * C311 - C123 * C279) * C15178) *
                            C64 +
                        ((C15167 * C128 - C123 * C85) * C156 +
                         (C15167 * C312 - C123 * C280) * C15178) *
                            C65) *
                       C68 * C69 * C70 +
                   0.5 * std::pow(Pi, 2.5) *
                       (((C15504 * C124 - C453 * C81 + C15492 * C456 -
                          C454 * C391 + C15472 * C457 - C455 * C394) *
                             C156 +
                         (C15504 * C308 - C453 * C276 + C15492 * C747 -
                          C454 * C697 + C15472 * C748 - C455 * C700) *
                             C15178) *
                            C379 +
                        ((C15504 * C125 - C453 * C82 + C15492 * C458 -
                          C454 * C392 + C15472 * C459 - C455 * C395) *
                             C156 +
                         (C15504 * C309 - C453 * C277 + C15492 * C749 -
                          C454 * C698 + C15472 * C750 - C455 * C701) *
                             C15178) *
                            C380 +
                        ((C15504 * C126 - C453 * C83 + C15492 * C460 -
                          C454 * C393 + C15472 * C461 - C455 * C396) *
                             C156 +
                         (C15504 * C310 - C453 * C278 + C15492 * C751 -
                          C454 * C699 + C15472 * C752 - C455 * C702) *
                             C15178) *
                            C15468) *
                       C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C950 +
                     (C15167 * C308 - C123 * C276) * C15505 +
                     (C15167 * C900 - C123 * C838) * C951 +
                     (C15167 * C1191 - C123 * C1141) * C15494 +
                     (C15167 * C903 - C123 * C841) * C952 +
                     (C15167 * C1192 - C123 * C1144) * C15475) *
                        C379 +
                    ((C15167 * C125 - C123 * C82) * C950 +
                     (C15167 * C309 - C123 * C277) * C15505 +
                     (C15167 * C901 - C123 * C839) * C951 +
                     (C15167 * C1193 - C123 * C1142) * C15494 +
                     (C15167 * C904 - C123 * C842) * C952 +
                     (C15167 * C1194 - C123 * C1145) * C15475) *
                        C380 +
                    ((C15167 * C126 - C123 * C83) * C950 +
                     (C15167 * C310 - C123 * C278) * C15505 +
                     (C15167 * C902 - C123 * C840) * C951 +
                     (C15167 * C1195 - C123 * C1143) * C15494 +
                     (C15167 * C905 - C123 * C843) * C952 +
                     (C15167 * C1196 - C123 * C1146) * C15475) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                      C15472 * C457 - C2500 * C394) *
                         C156 +
                     (C2451 * C308 - C2498 * C276 + C2452 * C747 -
                      C2499 * C697 + C15472 * C748 - C2500 * C700) *
                         C15178) *
                        C15501 +
                    ((C2451 * C125 - C2498 * C82 + C2452 * C458 - C2499 * C392 +
                      C15472 * C459 - C2500 * C395) *
                         C156 +
                     (C2451 * C309 - C2498 * C277 + C2452 * C749 -
                      C2499 * C698 + C15472 * C750 - C2500 * C701) *
                         C15178) *
                        C15488 +
                    ((C2451 * C126 - C2498 * C83 + C2452 * C460 - C2499 * C393 +
                      C15472 * C461 - C2500 * C396) *
                         C156 +
                     (C2451 * C310 - C2498 * C278 + C2452 * C751 -
                      C2499 * C699 + C15472 * C752 - C2500 * C702) *
                         C15178) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   ((C2793 * C124 - C2830 * C81 + C2794 * C456 - C2831 * C391 +
                     C2795 * C457 - C2832 * C394 + C2796 * C2835 -
                     C2833 * C2800 + C2797 * C2836 - C2834 * C2801) *
                        C156 +
                    (C2793 * C308 - C2830 * C276 + C2794 * C747 - C2831 * C697 +
                     C2795 * C748 - C2832 * C700 + C2796 * C2992 -
                     C2833 * C2966 + C2797 * C2993 - C2834 * C2967) *
                        C15178) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                     C15472 * C457 - C2500 * C394) *
                        C950 +
                    (C2451 * C308 - C2498 * C276 + C2452 * C747 - C2499 * C697 +
                     C15472 * C748 - C2500 * C700) *
                        C15505 +
                    (C2451 * C900 - C2498 * C838 + C2452 * C2024 -
                     C2499 * C1962 + C15472 * C3106 - C2500 * C3057) *
                        C951 +
                    (C2451 * C1191 - C2498 * C1141 + C2452 * C2354 -
                     C2499 * C2298 + C15472 * C3364 - C2500 * C3321) *
                        C15494 +
                    (C2451 * C903 - C2498 * C841 + C2452 * C3107 -
                     C2499 * C3056 + C15472 * C3108 - C2500 * C3058) *
                        C952 +
                    (C2451 * C1192 - C2498 * C1144 + C2452 * C3365 -
                     C2499 * C3320 + C15472 * C3366 - C2500 * C3322) *
                        C15475) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C4653 +
                     (C15167 * C308 - C123 * C276) * C4574 +
                     (C15167 * C900 - C123 * C838) * C4654 +
                     (C15167 * C1191 - C123 * C1141) * C4575 +
                     (C15167 * C903 - C123 * C841) * C4655 +
                     (C15167 * C1192 - C123 * C1144) * C15475) *
                        C15501 +
                    ((C15167 * C125 - C123 * C82) * C4653 +
                     (C15167 * C309 - C123 * C277) * C4574 +
                     (C15167 * C901 - C123 * C839) * C4654 +
                     (C15167 * C1193 - C123 * C1142) * C4575 +
                     (C15167 * C904 - C123 * C842) * C4655 +
                     (C15167 * C1194 - C123 * C1145) * C15475) *
                        C15488 +
                    ((C15167 * C126 - C123 * C83) * C4653 +
                     (C15167 * C310 - C123 * C278) * C4574 +
                     (C15167 * C902 - C123 * C840) * C4654 +
                     (C15167 * C1195 - C123 * C1143) * C4575 +
                     (C15167 * C905 - C123 * C843) * C4655 +
                     (C15167 * C1196 - C123 * C1146) * C15475) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                     C15472 * C457 - C455 * C394) *
                        C4653 +
                    (C15504 * C308 - C453 * C276 + C15492 * C747 - C454 * C697 +
                     C15472 * C748 - C455 * C700) *
                        C4574 +
                    (C15504 * C900 - C453 * C838 + C15492 * C2024 -
                     C454 * C1962 + C15472 * C3106 - C455 * C3057) *
                        C4654 +
                    (C15504 * C1191 - C453 * C1141 + C15492 * C2354 -
                     C454 * C2298 + C15472 * C3364 - C455 * C3321) *
                        C4575 +
                    (C15504 * C903 - C453 * C841 + C15492 * C3107 -
                     C454 * C3056 + C15472 * C3108 - C455 * C3058) *
                        C4655 +
                    (C15504 * C1192 - C453 * C1144 + C15492 * C3365 -
                     C454 * C3320 + C15472 * C3366 - C455 * C3322) *
                        C15475) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C15167 * C124 - C123 * C81) * C5312 +
                    (C15167 * C308 - C123 * C276) * C5251 +
                    (C15167 * C900 - C123 * C838) * C5313 +
                    (C15167 * C1191 - C123 * C1141) * C5252 +
                    (C15167 * C903 - C123 * C841) * C5314 +
                    (C15167 * C1192 - C123 * C1144) * C5253 +
                    (C15167 * C5286 - C123 * C5256) * C5315 +
                    (C15167 * C5443 - C123 * C5417) * C5254 +
                    (C15167 * C5287 - C123 * C5257) * C5316 +
                    (C15167 * C5444 - C123 * C5418) * C5255) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) *
                  C15167 * C61 +
              (C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) *
                  C15167 * C62 +
              (C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) *
                  C15167 * C63 +
              (C156 * C160 - C335 * C84 - C156 * C279 + C15178 * C339) *
                  C15167 * C64 +
              (C156 * C161 - C335 * C85 - C156 * C280 + C15178 * C340) *
                  C15167 * C65) *
             C68 * C69 * C70 +
         0.5 * std::pow(Pi, 2.5) *
             (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) *
                   C15504 +
               (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) *
                   C15492 +
               (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) *
                   C15472) *
                  C379 +
              ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) *
                   C15504 +
               (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) *
                   C15492 +
               (C156 * C510 - C335 * C395 - C156 * C701 + C15178 * C794) *
                   C15472) *
                  C380 +
              ((C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) *
                   C15504 +
               (C156 * C508 - C335 * C393 - C156 * C699 + C15178 * C795) *
                   C15492 +
               (C156 * C511 - C335 * C396 - C156 * C702 + C15178 * C796) *
                   C15472) *
                  C15468) *
             C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C950 * C157 - C1235 * C81 - C950 * C276 + C15505 * C336 +
           C951 * C953 - C1236 * C838 - C951 * C1141 + C15494 * C1238 +
           C952 * C954 - C1237 * C841 - C952 * C1144 + C15475 * C1239) *
              C15167 * C379 +
          (C950 * C158 - C1235 * C82 - C950 * C277 + C15505 * C337 +
           C951 * C955 - C1236 * C839 - C951 * C1142 + C15494 * C1240 +
           C952 * C956 - C1237 * C842 - C952 * C1145 + C15475 * C1241) *
              C15167 * C380 +
          (C950 * C159 - C1235 * C83 - C950 * C278 + C15505 * C338 +
           C951 * C957 - C1236 * C840 - C951 * C1143 + C15494 * C1242 +
           C952 * C958 - C1237 * C843 - C952 * C1146 + C15475 * C1243) *
              C15167 * C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C2451 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C2452 +
           (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C15472) *
              C15501 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C2451 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C2452 +
           (C156 * C510 - C335 * C395 - C156 * C701 + C15178 * C794) * C15472) *
              C15488 +
          ((C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C2451 +
           (C156 * C508 - C335 * C393 - C156 * C699 + C15178 * C795) * C2452 +
           (C156 * C511 - C335 * C396 - C156 * C702 + C15178 * C796) * C15472) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C2793 +
          (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C2794 +
          (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C2795 +
          (C156 * C2861 - C335 * C2800 - C156 * C2966 + C15178 * C3016) *
              C2796 +
          (C156 * C2862 - C335 * C2801 - C156 * C2967 + C15178 * C3017) *
              C2797) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C950 * C157 - C1235 * C81 - C950 * C276 + C15505 * C336 +
           C951 * C953 - C1236 * C838 - C951 * C1141 + C15494 * C1238 +
           C952 * C954 - C1237 * C841 - C952 * C1144 + C15475 * C1239) *
              C2451 +
          (C950 * C506 - C1235 * C391 - C950 * C697 + C15505 * C791 +
           C951 * C2080 - C1236 * C1962 - C951 * C2298 + C15494 * C2407 +
           C952 * C3150 - C1237 * C3056 - C952 * C3320 + C15475 * C3405) *
              C2452 +
          (C950 * C509 - C1235 * C394 - C950 * C700 + C15505 * C792 +
           C951 * C3151 - C1236 * C3057 - C951 * C3321 + C15494 * C3406 +
           C952 * C3152 - C1237 * C3058 - C952 * C3322 + C15475 * C3407) *
              C15472) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C4653 * C157 - C4884 * C81 - C4653 * C276 + C4574 * C336 +
           C4654 * C953 - C4885 * C838 - C4654 * C1141 + C4575 * C1238 +
           C4655 * C954 - C4886 * C841 - C4655 * C1144 + C15475 * C1239) *
              C15167 * C15501 +
          (C4653 * C158 - C4884 * C82 - C4653 * C277 + C4574 * C337 +
           C4654 * C955 - C4885 * C839 - C4654 * C1142 + C4575 * C1240 +
           C4655 * C956 - C4886 * C842 - C4655 * C1145 + C15475 * C1241) *
              C15167 * C15488 +
          (C4653 * C159 - C4884 * C83 - C4653 * C278 + C4574 * C338 +
           C4654 * C957 - C4885 * C840 - C4654 * C1143 + C4575 * C1242 +
           C4655 * C958 - C4886 * C843 - C4655 * C1146 + C15475 * C1243) *
              C15167 * C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C4653 * C157 - C4884 * C81 - C4653 * C276 + C4574 * C336 +
           C4654 * C953 - C4885 * C838 - C4654 * C1141 + C4575 * C1238 +
           C4655 * C954 - C4886 * C841 - C4655 * C1144 + C15475 * C1239) *
              C15504 +
          (C4653 * C506 - C4884 * C391 - C4653 * C697 + C4574 * C791 +
           C4654 * C2080 - C4885 * C1962 - C4654 * C2298 + C4575 * C2407 +
           C4655 * C3150 - C4886 * C3056 - C4655 * C3320 + C15475 * C3405) *
              C15492 +
          (C4653 * C509 - C4884 * C394 - C4653 * C700 + C4574 * C792 +
           C4654 * C3151 - C4885 * C3057 - C4654 * C3321 + C4575 * C3406 +
           C4655 * C3152 - C4886 * C3058 - C4655 * C3322 + C15475 * C3407) *
              C15472) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (C5312 * C157 - C5467 * C81 - C5312 * C276 + C5251 * C336 +
          C5313 * C953 - C5468 * C838 - C5313 * C1141 + C5252 * C1238 +
          C5314 * C954 - C5469 * C841 - C5314 * C1144 + C5253 * C1239 +
          C5315 * C5317 - C5470 * C5256 - C5315 * C5417 + C5254 * C5472 +
          C5316 * C5318 - C5471 * C5257 - C5316 * C5418 + C5255 * C5473) *
         C15167 * C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13651 * C86 - C3449 * C81 - C13651 * C87 + C15430 * C96 +
            C13632 * C88 - C3451 * C82 - C13632 * C89 + C15135 * C97) *
               C15447 +
           (C13651 * C844 - C3449 * C838 - C13651 * C845 + C15430 * C856 +
            C13632 * C846 - C3451 * C839 - C13632 * C847 + C15135 * C857) *
               C15265) *
              C2451 +
          ((C13651 * C397 - C3449 * C391 - C13651 * C398 + C15430 * C409 +
            C13632 * C399 - C3451 * C392 - C13632 * C400 + C15135 * C410) *
               C15447 +
           (C13651 * C1965 - C3449 * C1962 - C13651 * C1966 + C15430 * C1971 +
            C13632 * C1967 - C3451 * C1963 - C13632 * C1968 + C15135 * C1972) *
               C15265) *
              C2452 +
          ((C13651 * C403 - C3449 * C394 - C13651 * C404 + C15430 * C412 +
            C13632 * C405 - C3451 * C395 - C13632 * C406 + C15135 * C413) *
               C15447 +
           (C13651 * C3061 - C3449 * C3057 - C13651 * C3062 + C15430 * C3066 +
            C13632 * C3799 - C3451 * C3798 - C13632 * C3800 + C15135 * C3801) *
               C15265) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1284 * C86 - C1285 * C81 - C1284 * C87 + C1278 * C96 + C1286 * C88 -
           C1287 * C82 - C1286 * C89 + C1279 * C97 + C1288 * C90 - C1289 * C83 -
           C1288 * C91 + C1280 * C98 + C1290 * C92 - C1291 * C84 - C1290 * C93 +
           C15445 * C99) *
              C15447 +
          (C1284 * C844 - C1285 * C838 - C1284 * C845 + C1278 * C856 +
           C1286 * C846 - C1287 * C839 - C1286 * C847 + C1279 * C857 +
           C1288 * C848 - C1289 * C840 - C1288 * C849 + C1280 * C858 +
           C1290 * C1621 - C1291 * C1620 - C1290 * C1622 + C15445 * C1623) *
              C15265) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C13651 * C86 - C3449 * C81 - C13651 * C87 + C15430 * C96 +
           C13632 * C88 - C3451 * C82 - C13632 * C89 + C15135 * C97) *
              C5974 +
          (C13651 * C844 - C3449 * C838 - C13651 * C845 + C15430 * C856 +
           C13632 * C846 - C3451 * C839 - C13632 * C847 + C15135 * C857) *
              C5975 +
          (C13651 * C850 - C3449 * C841 - C13651 * C851 + C15430 * C859 +
           C13632 * C852 - C3451 * C842 - C13632 * C853 + C15135 * C860) *
              C5976 +
          (C13651 * C5258 - C3449 * C5256 - C13651 * C5259 + C15430 * C5262 +
           C13632 * C5979 - C3451 * C5978 - C13632 * C5980 + C15135 * C5981) *
              C15461) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                      C15472 * C457 - C2500 * C394) *
                         C13651 +
                     (C2451 * C129 - C2498 * C87 + C2452 * C462 - C2499 * C398 +
                      C15472 * C463 - C2500 * C404) *
                         C15430 +
                     (C2451 * C125 - C2498 * C82 + C2452 * C458 - C2499 * C392 +
                      C15472 * C459 - C2500 * C395) *
                         C13632 +
                     (C2451 * C130 - C2498 * C89 + C2452 * C464 - C2499 * C400 +
                      C15472 * C465 - C2500 * C406) *
                         C15135) *
                        C15447 +
                    ((C2451 * C900 - C2498 * C838 + C2452 * C2024 -
                      C2499 * C1962 + C15472 * C3106 - C2500 * C3057) *
                         C13651 +
                     (C2451 * C906 - C2498 * C845 + C2452 * C2027 -
                      C2499 * C1966 + C15472 * C3109 - C2500 * C3062) *
                         C15430 +
                     (C2451 * C901 - C2498 * C839 + C2452 * C2025 -
                      C2499 * C1963 + C15472 * C3852 - C2500 * C3798) *
                         C13632 +
                     (C2451 * C907 - C2498 * C847 + C2452 * C2028 -
                      C2499 * C1968 + C15472 * C3853 - C2500 * C3800) *
                         C15135) *
                        C15265) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C1284 +
                     (C15167 * C129 - C123 * C87) * C1278 +
                     (C15167 * C125 - C123 * C82) * C1286 +
                     (C15167 * C130 - C123 * C89) * C1279 +
                     (C15167 * C126 - C123 * C83) * C1288 +
                     (C15167 * C131 - C123 * C91) * C1280 +
                     (C15167 * C127 - C123 * C84) * C1290 +
                     (C15167 * C132 - C123 * C93) * C15445) *
                        C15447 +
                    ((C15167 * C900 - C123 * C838) * C1284 +
                     (C15167 * C906 - C123 * C845) * C1278 +
                     (C15167 * C901 - C123 * C839) * C1286 +
                     (C15167 * C907 - C123 * C847) * C1279 +
                     (C15167 * C902 - C123 * C840) * C1288 +
                     (C15167 * C908 - C123 * C849) * C1280 +
                     (C15167 * C1658 - C123 * C1620) * C1290 +
                     (C15167 * C1659 - C123 * C1622) * C15445) *
                        C15265) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C13651 +
                     (C15167 * C129 - C123 * C87) * C15430 +
                     (C15167 * C125 - C123 * C82) * C13632 +
                     (C15167 * C130 - C123 * C89) * C15135) *
                        C5974 +
                    ((C15167 * C900 - C123 * C838) * C13651 +
                     (C15167 * C906 - C123 * C845) * C15430 +
                     (C15167 * C901 - C123 * C839) * C13632 +
                     (C15167 * C907 - C123 * C847) * C15135) *
                        C5975 +
                    ((C15167 * C903 - C123 * C841) * C13651 +
                     (C15167 * C909 - C123 * C851) * C15430 +
                     (C15167 * C904 - C123 * C842) * C13632 +
                     (C15167 * C910 - C123 * C853) * C15135) *
                        C5976 +
                    ((C15167 * C5286 - C123 * C5256) * C13651 +
                     (C15167 * C5288 - C123 * C5259) * C15430 +
                     (C15167 * C6016 - C123 * C5978) * C13632 +
                     (C15167 * C6017 - C123 * C5980) * C15135) *
                        C15461) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) *
               C13651 +
           (C15447 * C162 - C1694 * C87 + C15265 * C959 - C1695 * C845) *
               C15430 +
           (C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) *
               C13632 +
           (C15447 * C163 - C1694 * C89 + C15265 * C961 - C1695 * C847) *
               C15135) *
              C2451 +
          ((C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C13651 +
           (C15447 * C512 - C1694 * C398 + C15265 * C2083 - C1695 * C1966) *
               C15430 +
           (C15447 * C507 - C1694 * C392 + C15265 * C2081 - C1695 * C1963) *
               C13632 +
           (C15447 * C513 - C1694 * C400 + C15265 * C2084 - C1695 * C1968) *
               C15135) *
              C2452 +
          ((C15447 * C509 - C1694 * C394 + C15265 * C3151 - C1695 * C3057) *
               C13651 +
           (C15447 * C515 - C1694 * C404 + C15265 * C3154 - C1695 * C3062) *
               C15430 +
           (C15447 * C510 - C1694 * C395 + C15265 * C3904 - C1695 * C3798) *
               C13632 +
           (C15447 * C516 - C1694 * C406 + C15265 * C3905 - C1695 * C3800) *
               C15135) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) * C1284 +
          (C15447 * C162 - C1694 * C87 + C15265 * C959 - C1695 * C845) * C1278 +
          (C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) * C1286 +
          (C15447 * C163 - C1694 * C89 + C15265 * C961 - C1695 * C847) * C1279 +
          (C15447 * C159 - C1694 * C83 + C15265 * C957 - C1695 * C840) * C1288 +
          (C15447 * C164 - C1694 * C91 + C15265 * C963 - C1695 * C849) * C1280 +
          (C15447 * C160 - C1694 * C84 + C15265 * C1696 - C1695 * C1620) *
              C1290 +
          (C15447 * C165 - C1694 * C93 + C15265 * C1697 - C1695 * C1622) *
              C15445) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C5974 * C157 - C6052 * C81 + C5975 * C953 - C6053 * C838 +
           C5976 * C954 - C6054 * C841 + C15461 * C5317 - C6055 * C5256) *
              C13651 +
          (C5974 * C162 - C6052 * C87 + C5975 * C959 - C6053 * C845 +
           C5976 * C960 - C6054 * C851 + C15461 * C5319 - C6055 * C5259) *
              C15430 +
          (C5974 * C158 - C6052 * C82 + C5975 * C955 - C6053 * C839 +
           C5976 * C956 - C6054 * C842 + C15461 * C6056 - C6055 * C5978) *
              C13632 +
          (C5974 * C163 - C6052 * C89 + C5975 * C961 - C6053 * C847 +
           C5976 * C962 - C6054 * C853 + C15461 * C6057 - C6055 * C5980) *
              C15135) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C2498 +
           (C15430 * C194 - C13651 * C189 + C15135 * C195 - C13632 * C190) *
               C2451 +
           (C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
               C2499 +
           (C15430 * C562 - C13651 * C556 + C15135 * C563 - C13632 * C557) *
               C2452 +
           (C15430 * C403 - C13651 * C394 + C15135 * C405 - C13632 * C395) *
               C2500 +
           (C15430 * C565 - C13651 * C559 + C15135 * C566 - C13632 * C560) *
               C15472) *
              C15447 +
          ((C15430 * C844 - C13651 * C838 + C15135 * C846 - C13632 * C839) *
               C2498 +
           (C15430 * C1009 - C13651 * C1003 + C15135 * C1010 - C13632 * C1004) *
               C2451 +
           (C15430 * C1965 - C13651 * C1962 + C15135 * C1967 - C13632 * C1963) *
               C2499 +
           (C15430 * C2139 - C13651 * C2136 + C15135 * C2140 - C13632 * C2137) *
               C2452 +
           (C15430 * C3061 - C13651 * C3057 + C15135 * C3799 - C13632 * C3798) *
               C2500 +
           (C15430 * C3197 - C13651 * C3194 + C15135 * C3957 - C13632 * C3956) *
               C15472) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1278 * C86 - C1284 * C81 + C1279 * C88 - C1286 * C82 +
            C1280 * C90 - C1288 * C83 + C15445 * C92 - C1290 * C84) *
               C123 +
           (C1278 * C194 - C1284 * C189 + C1279 * C195 - C1286 * C190 +
            C1280 * C196 - C1288 * C191 + C15445 * C197 - C1290 * C192) *
               C15167) *
              C15447 +
          ((C1278 * C844 - C1284 * C838 + C1279 * C846 - C1286 * C839 +
            C1280 * C848 - C1288 * C840 + C15445 * C1621 - C1290 * C1620) *
               C123 +
           (C1278 * C1009 - C1284 * C1003 + C1279 * C1010 - C1286 * C1004 +
            C1280 * C1011 - C1288 * C1005 + C15445 * C1733 - C1290 * C1732) *
               C15167) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C123 +
           (C15430 * C194 - C13651 * C189 + C15135 * C195 - C13632 * C190) *
               C15167) *
              C5974 +
          ((C15430 * C844 - C13651 * C838 + C15135 * C846 - C13632 * C839) *
               C123 +
           (C15430 * C1009 - C13651 * C1003 + C15135 * C1010 - C13632 * C1004) *
               C15167) *
              C5975 +
          ((C15430 * C850 - C13651 * C841 + C15135 * C852 - C13632 * C842) *
               C123 +
           (C15430 * C1012 - C13651 * C1006 + C15135 * C1013 - C13632 * C1007) *
               C15167) *
              C5976 +
          ((C15430 * C5258 - C13651 * C5256 + C15135 * C5979 - C13632 * C5978) *
               C123 +
           (C15430 * C5345 - C13651 * C5343 + C15135 * C6093 - C13632 * C6092) *
               C15167) *
              C15461) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2498 * C124 - C2615 * C81 - C2498 * C189 + C2451 * C222 +
            C2499 * C456 - C2616 * C391 - C2499 * C556 + C2452 * C609 +
            C2500 * C457 - C2617 * C394 - C2500 * C559 + C15472 * C610) *
               C15430 +
           (C2498 * C125 - C2615 * C82 - C2498 * C190 + C2451 * C223 +
            C2499 * C458 - C2616 * C392 - C2499 * C557 + C2452 * C611 +
            C2500 * C459 - C2617 * C395 - C2500 * C560 + C15472 * C612) *
               C15135) *
              C15447 +
          ((C2498 * C900 - C2615 * C838 - C2498 * C1003 + C2451 * C1053 +
            C2499 * C2024 - C2616 * C1962 - C2499 * C2136 + C2452 * C2192 +
            C2500 * C3106 - C2617 * C3057 - C2500 * C3194 + C15472 * C3238) *
               C15430 +
           (C2498 * C901 - C2615 * C839 - C2498 * C1004 + C2451 * C1054 +
            C2499 * C2025 - C2616 * C1963 - C2499 * C2137 + C2452 * C2193 +
            C2500 * C3852 - C2617 * C3798 - C2500 * C3956 + C15472 * C4008) *
               C15135) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C1278 +
           (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C1279 +
           (C123 * C126 - C221 * C83 - C123 * C191 + C15167 * C224) * C1280 +
           (C123 * C127 - C221 * C84 - C123 * C192 + C15167 * C225) * C15445) *
              C15447 +
          ((C123 * C900 - C221 * C838 - C123 * C1003 + C15167 * C1053) * C1278 +
           (C123 * C901 - C221 * C839 - C123 * C1004 + C15167 * C1054) * C1279 +
           (C123 * C902 - C221 * C840 - C123 * C1005 + C15167 * C1055) * C1280 +
           (C123 * C1658 - C221 * C1620 - C123 * C1732 + C15167 * C1768) *
               C15445) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C15430 +
           (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C15135) *
              C5974 +
          ((C123 * C900 - C221 * C838 - C123 * C1003 + C15167 * C1053) *
               C15430 +
           (C123 * C901 - C221 * C839 - C123 * C1004 + C15167 * C1054) *
               C15135) *
              C5975 +
          ((C123 * C903 - C221 * C841 - C123 * C1006 + C15167 * C1056) *
               C15430 +
           (C123 * C904 - C221 * C842 - C123 * C1007 + C15167 * C1057) *
               C15135) *
              C5976 +
          ((C123 * C5286 - C221 * C5256 - C123 * C5343 + C15167 * C5369) *
               C15430 +
           (C123 * C6016 - C221 * C5978 - C123 * C6092 + C15167 * C6128) *
               C15135) *
              C15461) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) *
               C2498 +
           (C15447 * C249 - C1694 * C189 + C15265 * C1097 - C1695 * C1003) *
               C2451 +
           (C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C2499 +
           (C15447 * C653 - C1694 * C556 + C15265 * C2245 - C1695 * C2136) *
               C2452 +
           (C15447 * C509 - C1694 * C394 + C15265 * C3151 - C1695 * C3057) *
               C2500 +
           (C15447 * C654 - C1694 * C559 + C15265 * C3280 - C1695 * C3194) *
               C15472) *
              C15430 +
          ((C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) *
               C2498 +
           (C15447 * C250 - C1694 * C190 + C15265 * C1099 - C1695 * C1004) *
               C2451 +
           (C15447 * C507 - C1694 * C392 + C15265 * C2081 - C1695 * C1963) *
               C2499 +
           (C15447 * C655 - C1694 * C557 + C15265 * C2246 - C1695 * C2137) *
               C2452 +
           (C15447 * C510 - C1694 * C395 + C15265 * C3904 - C1695 * C3798) *
               C2500 +
           (C15447 * C656 - C1694 * C560 + C15265 * C4059 - C1695 * C3956) *
               C15472) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) * C123 +
           (C15447 * C249 - C1694 * C189 + C15265 * C1097 - C1695 * C1003) *
               C15167) *
              C1278 +
          ((C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) * C123 +
           (C15447 * C250 - C1694 * C190 + C15265 * C1099 - C1695 * C1004) *
               C15167) *
              C1279 +
          ((C15447 * C159 - C1694 * C83 + C15265 * C957 - C1695 * C840) * C123 +
           (C15447 * C251 - C1694 * C191 + C15265 * C1101 - C1695 * C1005) *
               C15167) *
              C1280 +
          ((C15447 * C160 - C1694 * C84 + C15265 * C1696 - C1695 * C1620) *
               C123 +
           (C15447 * C252 - C1694 * C192 + C15265 * C1803 - C1695 * C1732) *
               C15167) *
              C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5974 * C157 - C6052 * C81 + C5975 * C953 - C6053 * C838 +
            C5976 * C954 - C6054 * C841 + C15461 * C5317 - C6055 * C5256) *
               C123 +
           (C5974 * C249 - C6052 * C189 + C5975 * C1097 - C6053 * C1003 +
            C5976 * C1098 - C6054 * C1006 + C15461 * C5393 - C6055 * C5343) *
               C15167) *
              C15430 +
          ((C5974 * C158 - C6052 * C82 + C5975 * C955 - C6053 * C839 +
            C5976 * C956 - C6054 * C842 + C15461 * C6056 - C6055 * C5978) *
               C123 +
           (C5974 * C250 - C6052 * C190 + C5975 * C1099 - C6053 * C1004 +
            C5976 * C1100 - C6054 * C1007 + C15461 * C6163 - C6055 * C6092) *
               C15167) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C1694 +
           (C15430 * C281 - C13651 * C276 + C15135 * C282 - C13632 * C277) *
               C15447 +
           (C15430 * C844 - C13651 * C838 + C15135 * C846 - C13632 * C839) *
               C1695 +
           (C15430 * C1147 - C13651 * C1141 + C15135 * C1148 - C13632 * C1142) *
               C15265) *
              C2451 +
          ((C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
               C1694 +
           (C15430 * C703 - C13651 * C697 + C15135 * C704 - C13632 * C698) *
               C15447 +
           (C15430 * C1965 - C13651 * C1962 + C15135 * C1967 - C13632 * C1963) *
               C1695 +
           (C15430 * C2301 - C13651 * C2298 + C15135 * C2302 - C13632 * C2299) *
               C15265) *
              C2452 +
          ((C15430 * C403 - C13651 * C394 + C15135 * C405 - C13632 * C395) *
               C1694 +
           (C15430 * C706 - C13651 * C700 + C15135 * C707 - C13632 * C701) *
               C15447 +
           (C15430 * C3061 - C13651 * C3057 + C15135 * C3799 - C13632 * C3798) *
               C1695 +
           (C15430 * C3324 - C13651 * C3321 + C15135 * C4111 - C13632 * C4110) *
               C15265) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1278 * C86 - C1284 * C81 + C1279 * C88 - C1286 * C82 + C1280 * C90 -
           C1288 * C83 + C15445 * C92 - C1290 * C84) *
              C1694 +
          (C1278 * C281 - C1284 * C276 + C1279 * C282 - C1286 * C277 +
           C1280 * C283 - C1288 * C278 + C15445 * C284 - C1290 * C279) *
              C15447 +
          (C1278 * C844 - C1284 * C838 + C1279 * C846 - C1286 * C839 +
           C1280 * C848 - C1288 * C840 + C15445 * C1621 - C1290 * C1620) *
              C1695 +
          (C1278 * C1147 - C1284 * C1141 + C1279 * C1148 - C1286 * C1142 +
           C1280 * C1149 - C1288 * C1143 + C15445 * C1839 - C1290 * C1838) *
              C15265) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C6052 +
          (C15430 * C281 - C13651 * C276 + C15135 * C282 - C13632 * C277) *
              C5974 +
          (C15430 * C844 - C13651 * C838 + C15135 * C846 - C13632 * C839) *
              C6053 +
          (C15430 * C1147 - C13651 * C1141 + C15135 * C1148 - C13632 * C1142) *
              C5975 +
          (C15430 * C850 - C13651 * C841 + C15135 * C852 - C13632 * C842) *
              C6054 +
          (C15430 * C1150 - C13651 * C1144 + C15135 * C1151 - C13632 * C1145) *
              C5976 +
          (C15430 * C5258 - C13651 * C5256 + C15135 * C5979 - C13632 * C5978) *
              C6055 +
          (C15430 * C5419 - C13651 * C5417 + C15135 * C6199 - C13632 * C6198) *
              C15461) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                      C15472 * C457 - C2500 * C394) *
                         C1694 +
                     (C2451 * C308 - C2498 * C276 + C2452 * C747 -
                      C2499 * C697 + C15472 * C748 - C2500 * C700) *
                         C15447 +
                     (C2451 * C900 - C2498 * C838 + C2452 * C2024 -
                      C2499 * C1962 + C15472 * C3106 - C2500 * C3057) *
                         C1695 +
                     (C2451 * C1191 - C2498 * C1141 + C2452 * C2354 -
                      C2499 * C2298 + C15472 * C3364 - C2500 * C3321) *
                         C15265) *
                        C15430 +
                    ((C2451 * C125 - C2498 * C82 + C2452 * C458 - C2499 * C392 +
                      C15472 * C459 - C2500 * C395) *
                         C1694 +
                     (C2451 * C309 - C2498 * C277 + C2452 * C749 -
                      C2499 * C698 + C15472 * C750 - C2500 * C701) *
                         C15447 +
                     (C2451 * C901 - C2498 * C839 + C2452 * C2025 -
                      C2499 * C1963 + C15472 * C3852 - C2500 * C3798) *
                         C1695 +
                     (C2451 * C1193 - C2498 * C1142 + C2452 * C2355 -
                      C2499 * C2299 + C15472 * C4162 - C2500 * C4110) *
                         C15265) *
                        C15135) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C1694 +
                     (C15167 * C308 - C123 * C276) * C15447 +
                     (C15167 * C900 - C123 * C838) * C1695 +
                     (C15167 * C1191 - C123 * C1141) * C15265) *
                        C1278 +
                    ((C15167 * C125 - C123 * C82) * C1694 +
                     (C15167 * C309 - C123 * C277) * C15447 +
                     (C15167 * C901 - C123 * C839) * C1695 +
                     (C15167 * C1193 - C123 * C1142) * C15265) *
                        C1279 +
                    ((C15167 * C126 - C123 * C83) * C1694 +
                     (C15167 * C310 - C123 * C278) * C15447 +
                     (C15167 * C902 - C123 * C840) * C1695 +
                     (C15167 * C1195 - C123 * C1143) * C15265) *
                        C1280 +
                    ((C15167 * C127 - C123 * C84) * C1694 +
                     (C15167 * C311 - C123 * C279) * C15447 +
                     (C15167 * C1658 - C123 * C1620) * C1695 +
                     (C15167 * C1874 - C123 * C1838) * C15265) *
                        C15445) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C6052 +
                     (C15167 * C308 - C123 * C276) * C5974 +
                     (C15167 * C900 - C123 * C838) * C6053 +
                     (C15167 * C1191 - C123 * C1141) * C5975 +
                     (C15167 * C903 - C123 * C841) * C6054 +
                     (C15167 * C1192 - C123 * C1144) * C5976 +
                     (C15167 * C5286 - C123 * C5256) * C6055 +
                     (C15167 * C5443 - C123 * C5417) * C15461) *
                        C15430 +
                    ((C15167 * C125 - C123 * C82) * C6052 +
                     (C15167 * C309 - C123 * C277) * C5974 +
                     (C15167 * C901 - C123 * C839) * C6053 +
                     (C15167 * C1193 - C123 * C1142) * C5975 +
                     (C15167 * C904 - C123 * C842) * C6054 +
                     (C15167 * C1194 - C123 * C1145) * C5976 +
                     (C15167 * C6016 - C123 * C5978) * C6055 +
                     (C15167 * C6234 - C123 * C6198) * C15461) *
                        C15135) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1694 * C157 - C1909 * C81 - C1694 * C276 + C15447 * C336 +
            C1695 * C953 - C1910 * C838 - C1695 * C1141 + C15265 * C1238) *
               C2451 +
           (C1694 * C506 - C1909 * C391 - C1694 * C697 + C15447 * C791 +
            C1695 * C2080 - C1910 * C1962 - C1695 * C2298 + C15265 * C2407) *
               C2452 +
           (C1694 * C509 - C1909 * C394 - C1694 * C700 + C15447 * C792 +
            C1695 * C3151 - C1910 * C3057 - C1695 * C3321 + C15265 * C3406) *
               C15472) *
              C15430 +
          ((C1694 * C158 - C1909 * C82 - C1694 * C277 + C15447 * C337 +
            C1695 * C955 - C1910 * C839 - C1695 * C1142 + C15265 * C1240) *
               C2451 +
           (C1694 * C507 - C1909 * C392 - C1694 * C698 + C15447 * C793 +
            C1695 * C2081 - C1910 * C1963 - C1695 * C2299 + C15265 * C2408) *
               C2452 +
           (C1694 * C510 - C1909 * C395 - C1694 * C701 + C15447 * C794 +
            C1695 * C3904 - C1910 * C3798 - C1695 * C4110 + C15265 * C4213) *
               C15472) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1694 * C157 - C1909 * C81 - C1694 * C276 + C15447 * C336 +
           C1695 * C953 - C1910 * C838 - C1695 * C1141 + C15265 * C1238) *
              C15167 * C1278 +
          (C1694 * C158 - C1909 * C82 - C1694 * C277 + C15447 * C337 +
           C1695 * C955 - C1910 * C839 - C1695 * C1142 + C15265 * C1240) *
              C15167 * C1279 +
          (C1694 * C159 - C1909 * C83 - C1694 * C278 + C15447 * C338 +
           C1695 * C957 - C1910 * C840 - C1695 * C1143 + C15265 * C1242) *
              C15167 * C1280 +
          (C1694 * C160 - C1909 * C84 - C1694 * C279 + C15447 * C339 +
           C1695 * C1696 - C1910 * C1620 - C1695 * C1838 + C15265 * C1911) *
              C15167 * C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C6052 * C157 - C6269 * C81 - C6052 * C276 + C5974 * C336 +
           C6053 * C953 - C6270 * C838 - C6053 * C1141 + C5975 * C1238 +
           C6054 * C954 - C6271 * C841 - C6054 * C1144 + C5976 * C1239 +
           C6055 * C5317 - C6272 * C5256 - C6055 * C5417 + C15461 * C5472) *
              C15167 * C15430 +
          (C6052 * C158 - C6269 * C82 - C6052 * C277 + C5974 * C337 +
           C6053 * C955 - C6270 * C839 - C6053 * C1142 + C5975 * C1240 +
           C6054 * C956 - C6271 * C842 - C6054 * C1145 + C5976 * C1241 +
           C6055 * C6056 - C6272 * C5978 - C6055 * C6198 + C15461 * C6273) *
              C15167 * C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C385 * C86 - C386 * C81 - C385 * C87 + C379 * C96 + C387 * C88 -
           C388 * C82 - C387 * C89 + C380 * C97 + C389 * C90 - C390 * C83 -
           C389 * C91 + C15468 * C98) *
              C15178 * C15504 +
          (C385 * C397 - C386 * C391 - C385 * C398 + C379 * C409 + C387 * C399 -
           C388 * C392 - C387 * C400 + C380 * C410 + C389 * C401 - C390 * C393 -
           C389 * C402 + C15468 * C411) *
              C15178 * C15492 +
          (C385 * C403 - C386 * C394 - C385 * C404 + C379 * C412 + C387 * C405 -
           C388 * C395 - C387 * C406 + C380 * C413 + C389 * C407 - C390 * C396 -
           C389 * C408 + C15468 * C414) *
              C15178 * C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (C71 * C86 - C72 * C81 - C71 * C87 + C61 * C96 + C73 * C88 -
          C74 * C82 - C73 * C89 + C62 * C97 + C75 * C90 - C76 * C83 -
          C75 * C91 + C63 * C98 + C77 * C92 - C78 * C84 - C77 * C93 +
          C64 * C99 + C79 * C94 - C80 * C85 - C79 * C95 + C65 * C100) *
         C15178 * C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2454 * C86 - C2455 * C81 - C2454 * C87 + C15501 * C96 +
           C2456 * C88 - C2457 * C82 - C2456 * C89 + C15488 * C97 +
           C2458 * C90 - C2459 * C83 - C2458 * C91 + C15468 * C98) *
              C15178 * C2451 +
          (C2454 * C397 - C2455 * C391 - C2454 * C398 + C15501 * C409 +
           C2456 * C399 - C2457 * C392 - C2456 * C400 + C15488 * C410 +
           C2458 * C401 - C2459 * C393 - C2458 * C402 + C15468 * C411) *
              C15178 * C2452 +
          (C2454 * C403 - C2455 * C394 - C2454 * C404 + C15501 * C412 +
           C2456 * C405 - C2457 * C395 - C2456 * C406 + C15488 * C413 +
           C2458 * C407 - C2459 * C396 - C2458 * C408 + C15468 * C414) *
              C15178 * C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C15178 *
              C2793 +
          (C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
              C15178 * C2794 +
          (C2798 * C403 - C2799 * C394 - C2798 * C404 + C15125 * C412) *
              C15178 * C2795 +
          (C2798 * C2802 - C2799 * C2800 - C2798 * C2803 + C15125 * C2806) *
              C15178 * C2796 +
          (C2798 * C2804 - C2799 * C2801 - C2798 * C2805 + C15125 * C2807) *
              C15178 * C2797) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2454 * C86 - C2455 * C81 - C2454 * C87 + C15501 * C96 +
           C2456 * C88 - C2457 * C82 - C2456 * C89 + C15488 * C97 +
           C2458 * C90 - C2459 * C83 - C2458 * C91 + C15468 * C98) *
              C4574 +
          (C2454 * C844 - C2455 * C838 - C2454 * C845 + C15501 * C856 +
           C2456 * C846 - C2457 * C839 - C2456 * C847 + C15488 * C857 +
           C2458 * C848 - C2459 * C840 - C2458 * C849 + C15468 * C858) *
              C4575 +
          (C2454 * C850 - C2455 * C841 - C2454 * C851 + C15501 * C859 +
           C2456 * C852 - C2457 * C842 - C2456 * C853 + C15488 * C860 +
           C2458 * C854 - C2459 * C843 - C2458 * C855 + C15468 * C861) *
              C15475) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C4574 +
           (C2798 * C844 - C2799 * C838 - C2798 * C845 + C15125 * C856) *
               C4575 +
           (C2798 * C850 - C2799 * C841 - C2798 * C851 + C15125 * C859) *
               C15475) *
              C15504 +
          ((C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
               C4574 +
           (C2798 * C1965 - C2799 * C1962 - C2798 * C1966 + C15125 * C1971) *
               C4575 +
           (C2798 * C3059 - C2799 * C3056 - C2798 * C3060 + C15125 * C3065) *
               C15475) *
              C15492 +
          ((C2798 * C403 - C2799 * C394 - C2798 * C404 + C15125 * C412) *
               C4574 +
           (C2798 * C3061 - C2799 * C3057 - C2798 * C3062 + C15125 * C3066) *
               C4575 +
           (C2798 * C3063 - C2799 * C3058 - C2798 * C3064 + C15125 * C3067) *
               C15475) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                     C15472 * C457 - C455 * C394) *
                        C385 +
                    (C15504 * C129 - C453 * C87 + C15492 * C462 - C454 * C398 +
                     C15472 * C463 - C455 * C404) *
                        C379 +
                    (C15504 * C125 - C453 * C82 + C15492 * C458 - C454 * C392 +
                     C15472 * C459 - C455 * C395) *
                        C387 +
                    (C15504 * C130 - C453 * C89 + C15492 * C464 - C454 * C400 +
                     C15472 * C465 - C455 * C406) *
                        C380 +
                    (C15504 * C126 - C453 * C83 + C15492 * C460 - C454 * C393 +
                     C15472 * C461 - C455 * C396) *
                        C389 +
                    (C15504 * C131 - C453 * C91 + C15492 * C466 - C454 * C402 +
                     C15472 * C467 - C455 * C408) *
                        C15468) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C15167 * C124 - C123 * C81) * C71 +
                    (C15167 * C129 - C123 * C87) * C61 +
                    (C15167 * C125 - C123 * C82) * C73 +
                    (C15167 * C130 - C123 * C89) * C62 +
                    (C15167 * C126 - C123 * C83) * C75 +
                    (C15167 * C131 - C123 * C91) * C63 +
                    (C15167 * C127 - C123 * C84) * C77 +
                    (C15167 * C132 - C123 * C93) * C64 +
                    (C15167 * C128 - C123 * C85) * C79 +
                    (C15167 * C133 - C123 * C95) * C65) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                     C15472 * C457 - C2500 * C394) *
                        C2454 +
                    (C2451 * C129 - C2498 * C87 + C2452 * C462 - C2499 * C398 +
                     C15472 * C463 - C2500 * C404) *
                        C15501 +
                    (C2451 * C125 - C2498 * C82 + C2452 * C458 - C2499 * C392 +
                     C15472 * C459 - C2500 * C395) *
                        C2456 +
                    (C2451 * C130 - C2498 * C89 + C2452 * C464 - C2499 * C400 +
                     C15472 * C465 - C2500 * C406) *
                        C15488 +
                    (C2451 * C126 - C2498 * C83 + C2452 * C460 - C2499 * C393 +
                     C15472 * C461 - C2500 * C396) *
                        C2458 +
                    (C2451 * C131 - C2498 * C91 + C2452 * C466 - C2499 * C402 +
                     C15472 * C467 - C2500 * C408) *
                        C15468) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C2793 * C124 - C2830 * C81 + C2794 * C456 - C2831 * C391 +
                     C2795 * C457 - C2832 * C394 + C2796 * C2835 -
                     C2833 * C2800 + C2797 * C2836 - C2834 * C2801) *
                        C2798 +
                    (C2793 * C129 - C2830 * C87 + C2794 * C462 - C2831 * C398 +
                     C2795 * C463 - C2832 * C404 + C2796 * C2837 -
                     C2833 * C2803 + C2797 * C2838 - C2834 * C2805) *
                        C15125) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C2454 +
                     (C15167 * C129 - C123 * C87) * C15501 +
                     (C15167 * C125 - C123 * C82) * C2456 +
                     (C15167 * C130 - C123 * C89) * C15488 +
                     (C15167 * C126 - C123 * C83) * C2458 +
                     (C15167 * C131 - C123 * C91) * C15468) *
                        C4574 +
                    ((C15167 * C900 - C123 * C838) * C2454 +
                     (C15167 * C906 - C123 * C845) * C15501 +
                     (C15167 * C901 - C123 * C839) * C2456 +
                     (C15167 * C907 - C123 * C847) * C15488 +
                     (C15167 * C902 - C123 * C840) * C2458 +
                     (C15167 * C908 - C123 * C849) * C15468) *
                        C4575 +
                    ((C15167 * C903 - C123 * C841) * C2454 +
                     (C15167 * C909 - C123 * C851) * C15501 +
                     (C15167 * C904 - C123 * C842) * C2456 +
                     (C15167 * C910 - C123 * C853) * C15488 +
                     (C15167 * C905 - C123 * C843) * C2458 +
                     (C15167 * C911 - C123 * C855) * C15468) *
                        C15475) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                      C15472 * C457 - C455 * C394) *
                         C2798 +
                     (C15504 * C129 - C453 * C87 + C15492 * C462 - C454 * C398 +
                      C15472 * C463 - C455 * C404) *
                         C15125) *
                        C4574 +
                    ((C15504 * C900 - C453 * C838 + C15492 * C2024 -
                      C454 * C1962 + C15472 * C3106 - C455 * C3057) *
                         C2798 +
                     (C15504 * C906 - C453 * C845 + C15492 * C2027 -
                      C454 * C1966 + C15472 * C3109 - C455 * C3062) *
                         C15125) *
                        C4575 +
                    ((C15504 * C903 - C453 * C841 + C15492 * C3107 -
                      C454 * C3056 + C15472 * C3108 - C455 * C3058) *
                         C2798 +
                     (C15504 * C909 - C453 * C851 + C15492 * C3110 -
                      C454 * C3060 + C15472 * C3111 - C455 * C3064) *
                         C15125) *
                        C15475) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C385 +
                     (C15178 * C162 - C156 * C87) * C379 +
                     (C15178 * C158 - C156 * C82) * C387 +
                     (C15178 * C163 - C156 * C89) * C380 +
                     (C15178 * C159 - C156 * C83) * C389 +
                     (C15178 * C164 - C156 * C91) * C15468) *
                        C15504 +
                    ((C15178 * C506 - C156 * C391) * C385 +
                     (C15178 * C512 - C156 * C398) * C379 +
                     (C15178 * C507 - C156 * C392) * C387 +
                     (C15178 * C513 - C156 * C400) * C380 +
                     (C15178 * C508 - C156 * C393) * C389 +
                     (C15178 * C514 - C156 * C402) * C15468) *
                        C15492 +
                    ((C15178 * C509 - C156 * C394) * C385 +
                     (C15178 * C515 - C156 * C404) * C379 +
                     (C15178 * C510 - C156 * C395) * C387 +
                     (C15178 * C516 - C156 * C406) * C380 +
                     (C15178 * C511 - C156 * C396) * C389 +
                     (C15178 * C517 - C156 * C408) * C15468) *
                        C15472) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C15178 * C157 - C156 * C81) * C71 +
                    (C15178 * C162 - C156 * C87) * C61 +
                    (C15178 * C158 - C156 * C82) * C73 +
                    (C15178 * C163 - C156 * C89) * C62 +
                    (C15178 * C159 - C156 * C83) * C75 +
                    (C15178 * C164 - C156 * C91) * C63 +
                    (C15178 * C160 - C156 * C84) * C77 +
                    (C15178 * C165 - C156 * C93) * C64 +
                    (C15178 * C161 - C156 * C85) * C79 +
                    (C15178 * C166 - C156 * C95) * C65) *
                   C15167 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C2454 +
                     (C15178 * C162 - C156 * C87) * C15501 +
                     (C15178 * C158 - C156 * C82) * C2456 +
                     (C15178 * C163 - C156 * C89) * C15488 +
                     (C15178 * C159 - C156 * C83) * C2458 +
                     (C15178 * C164 - C156 * C91) * C15468) *
                        C2451 +
                    ((C15178 * C506 - C156 * C391) * C2454 +
                     (C15178 * C512 - C156 * C398) * C15501 +
                     (C15178 * C507 - C156 * C392) * C2456 +
                     (C15178 * C513 - C156 * C400) * C15488 +
                     (C15178 * C508 - C156 * C393) * C2458 +
                     (C15178 * C514 - C156 * C402) * C15468) *
                        C2452 +
                    ((C15178 * C509 - C156 * C394) * C2454 +
                     (C15178 * C515 - C156 * C404) * C15501 +
                     (C15178 * C510 - C156 * C395) * C2456 +
                     (C15178 * C516 - C156 * C406) * C15488 +
                     (C15178 * C511 - C156 * C396) * C2458 +
                     (C15178 * C517 - C156 * C408) * C15468) *
                        C15472) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C2798 +
                     (C15178 * C162 - C156 * C87) * C15125) *
                        C2793 +
                    ((C15178 * C506 - C156 * C391) * C2798 +
                     (C15178 * C512 - C156 * C398) * C15125) *
                        C2794 +
                    ((C15178 * C509 - C156 * C394) * C2798 +
                     (C15178 * C515 - C156 * C404) * C15125) *
                        C2795 +
                    ((C15178 * C2861 - C156 * C2800) * C2798 +
                     (C15178 * C2863 - C156 * C2803) * C15125) *
                        C2796 +
                    ((C15178 * C2862 - C156 * C2801) * C2798 +
                     (C15178 * C2864 - C156 * C2805) * C15125) *
                        C2797) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C4574 * C157 - C4653 * C81 + C4575 * C953 - C4654 * C838 +
                     C15475 * C954 - C4655 * C841) *
                        C2454 +
                    (C4574 * C162 - C4653 * C87 + C4575 * C959 - C4654 * C845 +
                     C15475 * C960 - C4655 * C851) *
                        C15501 +
                    (C4574 * C158 - C4653 * C82 + C4575 * C955 - C4654 * C839 +
                     C15475 * C956 - C4655 * C842) *
                        C2456 +
                    (C4574 * C163 - C4653 * C89 + C4575 * C961 - C4654 * C847 +
                     C15475 * C962 - C4655 * C853) *
                        C15488 +
                    (C4574 * C159 - C4653 * C83 + C4575 * C957 - C4654 * C840 +
                     C15475 * C958 - C4655 * C843) *
                        C2458 +
                    (C4574 * C164 - C4653 * C91 + C4575 * C963 - C4654 * C849 +
                     C15475 * C964 - C4655 * C855) *
                        C15468) *
                   C15167 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4574 * C157 - C4653 * C81 + C4575 * C953 - C4654 * C838 +
                      C15475 * C954 - C4655 * C841) *
                         C2798 +
                     (C4574 * C162 - C4653 * C87 + C4575 * C959 - C4654 * C845 +
                      C15475 * C960 - C4655 * C851) *
                         C15125) *
                        C15504 +
                    ((C4574 * C506 - C4653 * C391 + C4575 * C2080 -
                      C4654 * C1962 + C15475 * C3150 - C4655 * C3056) *
                         C2798 +
                     (C4574 * C512 - C4653 * C398 + C4575 * C2083 -
                      C4654 * C1966 + C15475 * C3153 - C4655 * C3060) *
                         C15125) *
                        C15492 +
                    ((C4574 * C509 - C4653 * C394 + C4575 * C3151 -
                      C4654 * C3057 + C15475 * C3152 - C4655 * C3058) *
                         C2798 +
                     (C4574 * C515 - C4653 * C404 + C4575 * C3154 -
                      C4654 * C3062 + C15475 * C3155 - C4655 * C3064) *
                         C15125) *
                        C15472) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 + C15468 * C90 -
           C389 * C83) *
              C453 +
          (C379 * C194 - C385 * C189 + C380 * C195 - C387 * C190 +
           C15468 * C196 - C389 * C191) *
              C15504 +
          (C379 * C397 - C385 * C391 + C380 * C399 - C387 * C392 +
           C15468 * C401 - C389 * C393) *
              C454 +
          (C379 * C562 - C385 * C556 + C380 * C563 - C387 * C557 +
           C15468 * C564 - C389 * C558) *
              C15492 +
          (C379 * C403 - C385 * C394 + C380 * C405 - C387 * C395 +
           C15468 * C407 - C389 * C396) *
              C455 +
          (C379 * C565 - C385 * C559 + C380 * C566 - C387 * C560 +
           C15468 * C567 - C389 * C561) *
              C15472) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C61 * C86 - C71 * C81 + C62 * C88 - C73 * C82 + C63 * C90 -
           C75 * C83 + C64 * C92 - C77 * C84 + C65 * C94 - C79 * C85) *
              C123 +
          (C61 * C194 - C71 * C189 + C62 * C195 - C73 * C190 + C63 * C196 -
           C75 * C191 + C64 * C197 - C77 * C192 + C65 * C198 - C79 * C193) *
              C15167) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
           C15468 * C90 - C2458 * C83) *
              C2498 +
          (C15501 * C194 - C2454 * C189 + C15488 * C195 - C2456 * C190 +
           C15468 * C196 - C2458 * C191) *
              C2451 +
          (C15501 * C397 - C2454 * C391 + C15488 * C399 - C2456 * C392 +
           C15468 * C401 - C2458 * C393) *
              C2499 +
          (C15501 * C562 - C2454 * C556 + C15488 * C563 - C2456 * C557 +
           C15468 * C564 - C2458 * C558) *
              C2452 +
          (C15501 * C403 - C2454 * C394 + C15488 * C405 - C2456 * C395 +
           C15468 * C407 - C2458 * C396) *
              C2500 +
          (C15501 * C565 - C2454 * C559 + C15488 * C566 - C2456 * C560 +
           C15468 * C567 - C2458 * C561) *
              C15472) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C15125 * C86 - C2798 * C81) * C2830 +
          (C15125 * C194 - C2798 * C189) * C2793 +
          (C15125 * C397 - C2798 * C391) * C2831 +
          (C15125 * C562 - C2798 * C556) * C2794 +
          (C15125 * C403 - C2798 * C394) * C2832 +
          (C15125 * C565 - C2798 * C559) * C2795 +
          (C15125 * C2802 - C2798 * C2800) * C2833 +
          (C15125 * C2889 - C2798 * C2887) * C2796 +
          (C15125 * C2804 - C2798 * C2801) * C2834 +
          (C15125 * C2890 - C2798 * C2888) * C2797) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
            C15468 * C90 - C2458 * C83) *
               C123 +
           (C15501 * C194 - C2454 * C189 + C15488 * C195 - C2456 * C190 +
            C15468 * C196 - C2458 * C191) *
               C15167) *
              C4574 +
          ((C15501 * C844 - C2454 * C838 + C15488 * C846 - C2456 * C839 +
            C15468 * C848 - C2458 * C840) *
               C123 +
           (C15501 * C1009 - C2454 * C1003 + C15488 * C1010 - C2456 * C1004 +
            C15468 * C1011 - C2458 * C1005) *
               C15167) *
              C4575 +
          ((C15501 * C850 - C2454 * C841 + C15488 * C852 - C2456 * C842 +
            C15468 * C854 - C2458 * C843) *
               C123 +
           (C15501 * C1012 - C2454 * C1006 + C15488 * C1013 - C2456 * C1007 +
            C15468 * C1014 - C2458 * C1008) *
               C15167) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15125 * C86 - C2798 * C81) * C453 +
           (C15125 * C194 - C2798 * C189) * C15504 +
           (C15125 * C397 - C2798 * C391) * C454 +
           (C15125 * C562 - C2798 * C556) * C15492 +
           (C15125 * C403 - C2798 * C394) * C455 +
           (C15125 * C565 - C2798 * C559) * C15472) *
              C4574 +
          ((C15125 * C844 - C2798 * C838) * C453 +
           (C15125 * C1009 - C2798 * C1003) * C15504 +
           (C15125 * C1965 - C2798 * C1962) * C454 +
           (C15125 * C2139 - C2798 * C2136) * C15492 +
           (C15125 * C3061 - C2798 * C3057) * C455 +
           (C15125 * C3197 - C2798 * C3194) * C15472) *
              C4575 +
          ((C15125 * C850 - C2798 * C841) * C453 +
           (C15125 * C1012 - C2798 * C1006) * C15504 +
           (C15125 * C3059 - C2798 * C3056) * C454 +
           (C15125 * C3198 - C2798 * C3195) * C15492 +
           (C15125 * C3063 - C2798 * C3058) * C455 +
           (C15125 * C3199 - C2798 * C3196) * C15472) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C453 * C124 - C606 * C81 - C453 * C189 + C15504 * C222 +
           C454 * C456 - C607 * C391 - C454 * C556 + C15492 * C609 +
           C455 * C457 - C608 * C394 - C455 * C559 + C15472 * C610) *
              C379 +
          (C453 * C125 - C606 * C82 - C453 * C190 + C15504 * C223 +
           C454 * C458 - C607 * C392 - C454 * C557 + C15492 * C611 +
           C455 * C459 - C608 * C395 - C455 * C560 + C15472 * C612) *
              C380 +
          (C453 * C126 - C606 * C83 - C453 * C191 + C15504 * C224 +
           C454 * C460 - C607 * C393 - C454 * C558 + C15492 * C613 +
           C455 * C461 - C608 * C396 - C455 * C561 + C15472 * C614) *
              C15468) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C61 +
          (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C62 +
          (C123 * C126 - C221 * C83 - C123 * C191 + C15167 * C224) * C63 +
          (C123 * C127 - C221 * C84 - C123 * C192 + C15167 * C225) * C64 +
          (C123 * C128 - C221 * C85 - C123 * C193 + C15167 * C226) * C65) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2498 * C124 - C2615 * C81 - C2498 * C189 + C2451 * C222 +
           C2499 * C456 - C2616 * C391 - C2499 * C556 + C2452 * C609 +
           C2500 * C457 - C2617 * C394 - C2500 * C559 + C15472 * C610) *
              C15501 +
          (C2498 * C125 - C2615 * C82 - C2498 * C190 + C2451 * C223 +
           C2499 * C458 - C2616 * C392 - C2499 * C557 + C2452 * C611 +
           C2500 * C459 - C2617 * C395 - C2500 * C560 + C15472 * C612) *
              C15488 +
          (C2498 * C126 - C2615 * C83 - C2498 * C191 + C2451 * C224 +
           C2499 * C460 - C2616 * C393 - C2499 * C558 + C2452 * C613 +
           C2500 * C461 - C2617 * C396 - C2500 * C561 + C15472 * C614) *
              C15468) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (C2830 * C124 - C2913 * C81 - C2830 * C189 + C2793 * C222 +
          C2831 * C456 - C2914 * C391 - C2831 * C556 + C2794 * C609 +
          C2832 * C457 - C2915 * C394 - C2832 * C559 + C2795 * C610 +
          C2833 * C2835 - C2916 * C2800 - C2833 * C2887 + C2796 * C2918 +
          C2834 * C2836 - C2917 * C2801 - C2834 * C2888 + C2797 * C2919) *
         C15125 * C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C15501 +
           (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C15488 +
           (C123 * C126 - C221 * C83 - C123 * C191 + C15167 * C224) * C15468) *
              C4574 +
          ((C123 * C900 - C221 * C838 - C123 * C1003 + C15167 * C1053) *
               C15501 +
           (C123 * C901 - C221 * C839 - C123 * C1004 + C15167 * C1054) *
               C15488 +
           (C123 * C902 - C221 * C840 - C123 * C1005 + C15167 * C1055) *
               C15468) *
              C4575 +
          ((C123 * C903 - C221 * C841 - C123 * C1006 + C15167 * C1056) *
               C15501 +
           (C123 * C904 - C221 * C842 - C123 * C1007 + C15167 * C1057) *
               C15488 +
           (C123 * C905 - C221 * C843 - C123 * C1008 + C15167 * C1058) *
               C15468) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C453 * C124 - C606 * C81 - C453 * C189 + C15504 * C222 +
           C454 * C456 - C607 * C391 - C454 * C556 + C15492 * C609 +
           C455 * C457 - C608 * C394 - C455 * C559 + C15472 * C610) *
              C15125 * C4574 +
          (C453 * C900 - C606 * C838 - C453 * C1003 + C15504 * C1053 +
           C454 * C2024 - C607 * C1962 - C454 * C2136 + C15492 * C2192 +
           C455 * C3106 - C608 * C3057 - C455 * C3194 + C15472 * C3238) *
              C15125 * C4575 +
          (C453 * C903 - C606 * C841 - C453 * C1006 + C15504 * C1056 +
           C454 * C3107 - C607 * C3056 - C454 * C3195 + C15492 * C3239 +
           C455 * C3108 - C608 * C3058 - C455 * C3196 + C15472 * C3240) *
              C15125 * C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C453 +
                     (C15178 * C249 - C156 * C189) * C15504 +
                     (C15178 * C506 - C156 * C391) * C454 +
                     (C15178 * C653 - C156 * C556) * C15492 +
                     (C15178 * C509 - C156 * C394) * C455 +
                     (C15178 * C654 - C156 * C559) * C15472) *
                        C379 +
                    ((C15178 * C158 - C156 * C82) * C453 +
                     (C15178 * C250 - C156 * C190) * C15504 +
                     (C15178 * C507 - C156 * C392) * C454 +
                     (C15178 * C655 - C156 * C557) * C15492 +
                     (C15178 * C510 - C156 * C395) * C455 +
                     (C15178 * C656 - C156 * C560) * C15472) *
                        C380 +
                    ((C15178 * C159 - C156 * C83) * C453 +
                     (C15178 * C251 - C156 * C191) * C15504 +
                     (C15178 * C508 - C156 * C393) * C454 +
                     (C15178 * C657 - C156 * C558) * C15492 +
                     (C15178 * C511 - C156 * C396) * C455 +
                     (C15178 * C658 - C156 * C561) * C15472) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C123 +
                     (C15178 * C249 - C156 * C189) * C15167) *
                        C61 +
                    ((C15178 * C158 - C156 * C82) * C123 +
                     (C15178 * C250 - C156 * C190) * C15167) *
                        C62 +
                    ((C15178 * C159 - C156 * C83) * C123 +
                     (C15178 * C251 - C156 * C191) * C15167) *
                        C63 +
                    ((C15178 * C160 - C156 * C84) * C123 +
                     (C15178 * C252 - C156 * C192) * C15167) *
                        C64 +
                    ((C15178 * C161 - C156 * C85) * C123 +
                     (C15178 * C253 - C156 * C193) * C15167) *
                        C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C2498 +
                     (C15178 * C249 - C156 * C189) * C2451 +
                     (C15178 * C506 - C156 * C391) * C2499 +
                     (C15178 * C653 - C156 * C556) * C2452 +
                     (C15178 * C509 - C156 * C394) * C2500 +
                     (C15178 * C654 - C156 * C559) * C15472) *
                        C15501 +
                    ((C15178 * C158 - C156 * C82) * C2498 +
                     (C15178 * C250 - C156 * C190) * C2451 +
                     (C15178 * C507 - C156 * C392) * C2499 +
                     (C15178 * C655 - C156 * C557) * C2452 +
                     (C15178 * C510 - C156 * C395) * C2500 +
                     (C15178 * C656 - C156 * C560) * C15472) *
                        C15488 +
                    ((C15178 * C159 - C156 * C83) * C2498 +
                     (C15178 * C251 - C156 * C191) * C2451 +
                     (C15178 * C508 - C156 * C393) * C2499 +
                     (C15178 * C657 - C156 * C558) * C2452 +
                     (C15178 * C511 - C156 * C396) * C2500 +
                     (C15178 * C658 - C156 * C561) * C15472) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C15178 * C157 - C156 * C81) * C2830 +
                    (C15178 * C249 - C156 * C189) * C2793 +
                    (C15178 * C506 - C156 * C391) * C2831 +
                    (C15178 * C653 - C156 * C556) * C2794 +
                    (C15178 * C509 - C156 * C394) * C2832 +
                    (C15178 * C654 - C156 * C559) * C2795 +
                    (C15178 * C2861 - C156 * C2800) * C2833 +
                    (C15178 * C2942 - C156 * C2887) * C2796 +
                    (C15178 * C2862 - C156 * C2801) * C2834 +
                    (C15178 * C2943 - C156 * C2888) * C2797) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4574 * C157 - C4653 * C81 + C4575 * C953 - C4654 * C838 +
                      C15475 * C954 - C4655 * C841) *
                         C123 +
                     (C4574 * C249 - C4653 * C189 + C4575 * C1097 -
                      C4654 * C1003 + C15475 * C1098 - C4655 * C1006) *
                         C15167) *
                        C15501 +
                    ((C4574 * C158 - C4653 * C82 + C4575 * C955 - C4654 * C839 +
                      C15475 * C956 - C4655 * C842) *
                         C123 +
                     (C4574 * C250 - C4653 * C190 + C4575 * C1099 -
                      C4654 * C1004 + C15475 * C1100 - C4655 * C1007) *
                         C15167) *
                        C15488 +
                    ((C4574 * C159 - C4653 * C83 + C4575 * C957 - C4654 * C840 +
                      C15475 * C958 - C4655 * C843) *
                         C123 +
                     (C4574 * C251 - C4653 * C191 + C4575 * C1101 -
                      C4654 * C1005 + C15475 * C1102 - C4655 * C1008) *
                         C15167) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C4574 * C157 - C4653 * C81 + C4575 * C953 - C4654 * C838 +
                     C15475 * C954 - C4655 * C841) *
                        C453 +
                    (C4574 * C249 - C4653 * C189 + C4575 * C1097 -
                     C4654 * C1003 + C15475 * C1098 - C4655 * C1006) *
                        C15504 +
                    (C4574 * C506 - C4653 * C391 + C4575 * C2080 -
                     C4654 * C1962 + C15475 * C3150 - C4655 * C3056) *
                        C454 +
                    (C4574 * C653 - C4653 * C556 + C4575 * C2245 -
                     C4654 * C2136 + C15475 * C3279 - C4655 * C3195) *
                        C15492 +
                    (C4574 * C509 - C4653 * C394 + C4575 * C3151 -
                     C4654 * C3057 + C15475 * C3152 - C4655 * C3058) *
                        C455 +
                    (C4574 * C654 - C4653 * C559 + C4575 * C3280 -
                     C4654 * C3194 + C15475 * C3281 - C4655 * C3196) *
                        C15472) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 + C15468 * C90 -
            C389 * C83) *
               C156 +
           (C379 * C281 - C385 * C276 + C380 * C282 - C387 * C277 +
            C15468 * C283 - C389 * C278) *
               C15178) *
              C15504 +
          ((C379 * C397 - C385 * C391 + C380 * C399 - C387 * C392 +
            C15468 * C401 - C389 * C393) *
               C156 +
           (C379 * C703 - C385 * C697 + C380 * C704 - C387 * C698 +
            C15468 * C705 - C389 * C699) *
               C15178) *
              C15492 +
          ((C379 * C403 - C385 * C394 + C380 * C405 - C387 * C395 +
            C15468 * C407 - C389 * C396) *
               C156 +
           (C379 * C706 - C385 * C700 + C380 * C707 - C387 * C701 +
            C15468 * C708 - C389 * C702) *
               C15178) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C61 * C86 - C71 * C81 + C62 * C88 - C73 * C82 + C63 * C90 -
           C75 * C83 + C64 * C92 - C77 * C84 + C65 * C94 - C79 * C85) *
              C156 +
          (C61 * C281 - C71 * C276 + C62 * C282 - C73 * C277 + C63 * C283 -
           C75 * C278 + C64 * C284 - C77 * C279 + C65 * C285 - C79 * C280) *
              C15178) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
            C15468 * C90 - C2458 * C83) *
               C156 +
           (C15501 * C281 - C2454 * C276 + C15488 * C282 - C2456 * C277 +
            C15468 * C283 - C2458 * C278) *
               C15178) *
              C2451 +
          ((C15501 * C397 - C2454 * C391 + C15488 * C399 - C2456 * C392 +
            C15468 * C401 - C2458 * C393) *
               C156 +
           (C15501 * C703 - C2454 * C697 + C15488 * C704 - C2456 * C698 +
            C15468 * C705 - C2458 * C699) *
               C15178) *
              C2452 +
          ((C15501 * C403 - C2454 * C394 + C15488 * C405 - C2456 * C395 +
            C15468 * C407 - C2458 * C396) *
               C156 +
           (C15501 * C706 - C2454 * C700 + C15488 * C707 - C2456 * C701 +
            C15468 * C708 - C2458 * C702) *
               C15178) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15125 * C86 - C2798 * C81) * C156 +
           (C15125 * C281 - C2798 * C276) * C15178) *
              C2793 +
          ((C15125 * C397 - C2798 * C391) * C156 +
           (C15125 * C703 - C2798 * C697) * C15178) *
              C2794 +
          ((C15125 * C403 - C2798 * C394) * C156 +
           (C15125 * C706 - C2798 * C700) * C15178) *
              C2795 +
          ((C15125 * C2802 - C2798 * C2800) * C156 +
           (C15125 * C2968 - C2798 * C2966) * C15178) *
              C2796 +
          ((C15125 * C2804 - C2798 * C2801) * C156 +
           (C15125 * C2969 - C2798 * C2967) * C15178) *
              C2797) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
           C15468 * C90 - C2458 * C83) *
              C4653 +
          (C15501 * C281 - C2454 * C276 + C15488 * C282 - C2456 * C277 +
           C15468 * C283 - C2458 * C278) *
              C4574 +
          (C15501 * C844 - C2454 * C838 + C15488 * C846 - C2456 * C839 +
           C15468 * C848 - C2458 * C840) *
              C4654 +
          (C15501 * C1147 - C2454 * C1141 + C15488 * C1148 - C2456 * C1142 +
           C15468 * C1149 - C2458 * C1143) *
              C4575 +
          (C15501 * C850 - C2454 * C841 + C15488 * C852 - C2456 * C842 +
           C15468 * C854 - C2458 * C843) *
              C4655 +
          (C15501 * C1150 - C2454 * C1144 + C15488 * C1151 - C2456 * C1145 +
           C15468 * C1152 - C2458 * C1146) *
              C15475) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15125 * C86 - C2798 * C81) * C4653 +
           (C15125 * C281 - C2798 * C276) * C4574 +
           (C15125 * C844 - C2798 * C838) * C4654 +
           (C15125 * C1147 - C2798 * C1141) * C4575 +
           (C15125 * C850 - C2798 * C841) * C4655 +
           (C15125 * C1150 - C2798 * C1144) * C15475) *
              C15504 +
          ((C15125 * C397 - C2798 * C391) * C4653 +
           (C15125 * C703 - C2798 * C697) * C4574 +
           (C15125 * C1965 - C2798 * C1962) * C4654 +
           (C15125 * C2301 - C2798 * C2298) * C4575 +
           (C15125 * C3059 - C2798 * C3056) * C4655 +
           (C15125 * C3323 - C2798 * C3320) * C15475) *
              C15492 +
          ((C15125 * C403 - C2798 * C394) * C4653 +
           (C15125 * C706 - C2798 * C700) * C4574 +
           (C15125 * C3061 - C2798 * C3057) * C4654 +
           (C15125 * C3324 - C2798 * C3321) * C4575 +
           (C15125 * C3063 - C2798 * C3058) * C4655 +
           (C15125 * C3325 - C2798 * C3322) * C15475) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                      C15472 * C457 - C455 * C394) *
                         C156 +
                     (C15504 * C308 - C453 * C276 + C15492 * C747 -
                      C454 * C697 + C15472 * C748 - C455 * C700) *
                         C15178) *
                        C379 +
                    ((C15504 * C125 - C453 * C82 + C15492 * C458 - C454 * C392 +
                      C15472 * C459 - C455 * C395) *
                         C156 +
                     (C15504 * C309 - C453 * C277 + C15492 * C749 -
                      C454 * C698 + C15472 * C750 - C455 * C701) *
                         C15178) *
                        C380 +
                    ((C15504 * C126 - C453 * C83 + C15492 * C460 - C454 * C393 +
                      C15472 * C461 - C455 * C396) *
                         C156 +
                     (C15504 * C310 - C453 * C278 + C15492 * C751 -
                      C454 * C699 + C15472 * C752 - C455 * C702) *
                         C15178) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C156 +
                     (C15167 * C308 - C123 * C276) * C15178) *
                        C61 +
                    ((C15167 * C125 - C123 * C82) * C156 +
                     (C15167 * C309 - C123 * C277) * C15178) *
                        C62 +
                    ((C15167 * C126 - C123 * C83) * C156 +
                     (C15167 * C310 - C123 * C278) * C15178) *
                        C63 +
                    ((C15167 * C127 - C123 * C84) * C156 +
                     (C15167 * C311 - C123 * C279) * C15178) *
                        C64 +
                    ((C15167 * C128 - C123 * C85) * C156 +
                     (C15167 * C312 - C123 * C280) * C15178) *
                        C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                      C15472 * C457 - C2500 * C394) *
                         C156 +
                     (C2451 * C308 - C2498 * C276 + C2452 * C747 -
                      C2499 * C697 + C15472 * C748 - C2500 * C700) *
                         C15178) *
                        C15501 +
                    ((C2451 * C125 - C2498 * C82 + C2452 * C458 - C2499 * C392 +
                      C15472 * C459 - C2500 * C395) *
                         C156 +
                     (C2451 * C309 - C2498 * C277 + C2452 * C749 -
                      C2499 * C698 + C15472 * C750 - C2500 * C701) *
                         C15178) *
                        C15488 +
                    ((C2451 * C126 - C2498 * C83 + C2452 * C460 - C2499 * C393 +
                      C15472 * C461 - C2500 * C396) *
                         C156 +
                     (C2451 * C310 - C2498 * C278 + C2452 * C751 -
                      C2499 * C699 + C15472 * C752 - C2500 * C702) *
                         C15178) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C2793 * C124 - C2830 * C81 + C2794 * C456 - C2831 * C391 +
                     C2795 * C457 - C2832 * C394 + C2796 * C2835 -
                     C2833 * C2800 + C2797 * C2836 - C2834 * C2801) *
                        C156 +
                    (C2793 * C308 - C2830 * C276 + C2794 * C747 - C2831 * C697 +
                     C2795 * C748 - C2832 * C700 + C2796 * C2992 -
                     C2833 * C2966 + C2797 * C2993 - C2834 * C2967) *
                        C15178) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C4653 +
                     (C15167 * C308 - C123 * C276) * C4574 +
                     (C15167 * C900 - C123 * C838) * C4654 +
                     (C15167 * C1191 - C123 * C1141) * C4575 +
                     (C15167 * C903 - C123 * C841) * C4655 +
                     (C15167 * C1192 - C123 * C1144) * C15475) *
                        C15501 +
                    ((C15167 * C125 - C123 * C82) * C4653 +
                     (C15167 * C309 - C123 * C277) * C4574 +
                     (C15167 * C901 - C123 * C839) * C4654 +
                     (C15167 * C1193 - C123 * C1142) * C4575 +
                     (C15167 * C904 - C123 * C842) * C4655 +
                     (C15167 * C1194 - C123 * C1145) * C15475) *
                        C15488 +
                    ((C15167 * C126 - C123 * C83) * C4653 +
                     (C15167 * C310 - C123 * C278) * C4574 +
                     (C15167 * C902 - C123 * C840) * C4654 +
                     (C15167 * C1195 - C123 * C1143) * C4575 +
                     (C15167 * C905 - C123 * C843) * C4655 +
                     (C15167 * C1196 - C123 * C1146) * C15475) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                     C15472 * C457 - C455 * C394) *
                        C4653 +
                    (C15504 * C308 - C453 * C276 + C15492 * C747 - C454 * C697 +
                     C15472 * C748 - C455 * C700) *
                        C4574 +
                    (C15504 * C900 - C453 * C838 + C15492 * C2024 -
                     C454 * C1962 + C15472 * C3106 - C455 * C3057) *
                        C4654 +
                    (C15504 * C1191 - C453 * C1141 + C15492 * C2354 -
                     C454 * C2298 + C15472 * C3364 - C455 * C3321) *
                        C4575 +
                    (C15504 * C903 - C453 * C841 + C15492 * C3107 -
                     C454 * C3056 + C15472 * C3108 - C455 * C3058) *
                        C4655 +
                    (C15504 * C1192 - C453 * C1144 + C15492 * C3365 -
                     C454 * C3320 + C15472 * C3366 - C455 * C3322) *
                        C15475) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C15504 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C15492 +
           (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C15472) *
              C379 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C15504 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C15492 +
           (C156 * C510 - C335 * C395 - C156 * C701 + C15178 * C794) * C15472) *
              C380 +
          ((C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C15504 +
           (C156 * C508 - C335 * C393 - C156 * C699 + C15178 * C795) * C15492 +
           (C156 * C511 - C335 * C396 - C156 * C702 + C15178 * C796) * C15472) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C15167 *
              C61 +
          (C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C15167 *
              C62 +
          (C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C15167 *
              C63 +
          (C156 * C160 - C335 * C84 - C156 * C279 + C15178 * C339) * C15167 *
              C64 +
          (C156 * C161 - C335 * C85 - C156 * C280 + C15178 * C340) * C15167 *
              C65) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C2451 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C2452 +
           (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C15472) *
              C15501 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C2451 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C2452 +
           (C156 * C510 - C335 * C395 - C156 * C701 + C15178 * C794) * C15472) *
              C15488 +
          ((C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C2451 +
           (C156 * C508 - C335 * C393 - C156 * C699 + C15178 * C795) * C2452 +
           (C156 * C511 - C335 * C396 - C156 * C702 + C15178 * C796) * C15472) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C2793 +
          (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C2794 +
          (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C2795 +
          (C156 * C2861 - C335 * C2800 - C156 * C2966 + C15178 * C3016) *
              C2796 +
          (C156 * C2862 - C335 * C2801 - C156 * C2967 + C15178 * C3017) *
              C2797) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C4653 * C157 - C4884 * C81 - C4653 * C276 + C4574 * C336 +
           C4654 * C953 - C4885 * C838 - C4654 * C1141 + C4575 * C1238 +
           C4655 * C954 - C4886 * C841 - C4655 * C1144 + C15475 * C1239) *
              C15167 * C15501 +
          (C4653 * C158 - C4884 * C82 - C4653 * C277 + C4574 * C337 +
           C4654 * C955 - C4885 * C839 - C4654 * C1142 + C4575 * C1240 +
           C4655 * C956 - C4886 * C842 - C4655 * C1145 + C15475 * C1241) *
              C15167 * C15488 +
          (C4653 * C159 - C4884 * C83 - C4653 * C278 + C4574 * C338 +
           C4654 * C957 - C4885 * C840 - C4654 * C1143 + C4575 * C1242 +
           C4655 * C958 - C4886 * C843 - C4655 * C1146 + C15475 * C1243) *
              C15167 * C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C4653 * C157 - C4884 * C81 - C4653 * C276 + C4574 * C336 +
           C4654 * C953 - C4885 * C838 - C4654 * C1141 + C4575 * C1238 +
           C4655 * C954 - C4886 * C841 - C4655 * C1144 + C15475 * C1239) *
              C15504 +
          (C4653 * C506 - C4884 * C391 - C4653 * C697 + C4574 * C791 +
           C4654 * C2080 - C4885 * C1962 - C4654 * C2298 + C4575 * C2407 +
           C4655 * C3150 - C4886 * C3056 - C4655 * C3320 + C15475 * C3405) *
              C15492 +
          (C4653 * C509 - C4884 * C394 - C4653 * C700 + C4574 * C792 +
           C4654 * C3151 - C4885 * C3057 - C4654 * C3321 + C4575 * C3406 +
           C4655 * C3152 - C4886 * C3058 - C4655 * C3322 + C15475 * C3407) *
              C15472) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C13661 * C86 - C13701 * C81 - C13661 * C87 + C15130 * C96 +
            C13657 * C88 - C13696 * C82 - C13657 * C89 + C15138 * C97 +
            C13707 * C90 - C7743 * C83 - C13707 * C91 + C7734 * C98) *
               C8988 +
           (C13661 * C844 - C13701 * C838 - C13661 * C845 + C15130 * C856 +
            C13657 * C846 - C13696 * C839 - C13657 * C847 + C15138 * C857 +
            C13707 * C848 - C7743 * C840 - C13707 * C849 + C7734 * C858) *
               C15265) *
              C15446 +
          ((C13661 * C397 - C13701 * C391 - C13661 * C398 + C15130 * C409 +
            C13657 * C399 - C13696 * C392 - C13657 * C400 + C15138 * C410 +
            C13707 * C401 - C7743 * C393 - C13707 * C402 + C7734 * C411) *
               C8988 +
           (C13661 * C1965 - C13701 * C1962 - C13661 * C1966 + C15130 * C1971 +
            C13657 * C1967 - C13696 * C1963 - C13657 * C1968 + C15138 * C1972 +
            C13707 * C1969 - C7743 * C1964 - C13707 * C1970 + C7734 * C1973) *
               C15265) *
              C15225) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) *
               C13661 +
           (C15446 * C129 - C1330 * C87 + C15225 * C462 - C1331 * C398) *
               C15130 +
           (C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) *
               C13657 +
           (C15446 * C130 - C1330 * C89 + C15225 * C464 - C1331 * C400) *
               C15138 +
           (C15446 * C126 - C1330 * C83 + C15225 * C460 - C1331 * C393) *
               C13707 +
           (C15446 * C131 - C1330 * C91 + C15225 * C466 - C1331 * C402) *
               C7734) *
              C8988 +
          ((C15446 * C900 - C1330 * C838 + C15225 * C2024 - C1331 * C1962) *
               C13661 +
           (C15446 * C906 - C1330 * C845 + C15225 * C2027 - C1331 * C1966) *
               C15130 +
           (C15446 * C901 - C1330 * C839 + C15225 * C2025 - C1331 * C1963) *
               C13657 +
           (C15446 * C907 - C1330 * C847 + C15225 * C2028 - C1331 * C1968) *
               C15138 +
           (C15446 * C902 - C1330 * C840 + C15225 * C2026 - C1331 * C1964) *
               C13707 +
           (C15446 * C908 - C1330 * C849 + C15225 * C2029 - C1331 * C1970) *
               C7734) *
              C15265) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) *
               C13661 +
           (C8988 * C162 - C9058 * C87 + C15265 * C959 - C9059 * C845) *
               C15130 +
           (C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) *
               C13657 +
           (C8988 * C163 - C9058 * C89 + C15265 * C961 - C9059 * C847) *
               C15138 +
           (C8988 * C159 - C9058 * C83 + C15265 * C957 - C9059 * C840) *
               C13707 +
           (C8988 * C164 - C9058 * C91 + C15265 * C963 - C9059 * C849) *
               C7734) *
              C15446 +
          ((C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C13661 +
           (C8988 * C512 - C9058 * C398 + C15265 * C2083 - C9059 * C1966) *
               C15130 +
           (C8988 * C507 - C9058 * C392 + C15265 * C2081 - C9059 * C1963) *
               C13657 +
           (C8988 * C513 - C9058 * C400 + C15265 * C2084 - C9059 * C1968) *
               C15138 +
           (C8988 * C508 - C9058 * C393 + C15265 * C2082 - C9059 * C1964) *
               C13707 +
           (C8988 * C514 - C9058 * C402 + C15265 * C2085 - C9059 * C1970) *
               C7734) *
              C15225) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C15130 * C86 - C13661 * C81 + C15138 * C88 -
                      C13657 * C82 + C7734 * C90 - C13707 * C83) *
                         C1330 +
                     (C15130 * C194 - C13661 * C189 + C15138 * C195 -
                      C13657 * C190 + C7734 * C196 - C13707 * C191) *
                         C15446 +
                     (C15130 * C397 - C13661 * C391 + C15138 * C399 -
                      C13657 * C392 + C7734 * C401 - C13707 * C393) *
                         C1331 +
                     (C15130 * C562 - C13661 * C556 + C15138 * C563 -
                      C13657 * C557 + C7734 * C564 - C13707 * C558) *
                         C15225) *
                        C8988 +
                    ((C15130 * C844 - C13661 * C838 + C15138 * C846 -
                      C13657 * C839 + C7734 * C848 - C13707 * C840) *
                         C1330 +
                     (C15130 * C1009 - C13661 * C1003 + C15138 * C1010 -
                      C13657 * C1004 + C7734 * C1011 - C13707 * C1005) *
                         C15446 +
                     (C15130 * C1965 - C13661 * C1962 + C15138 * C1967 -
                      C13657 * C1963 + C7734 * C1969 - C13707 * C1964) *
                         C1331 +
                     (C15130 * C2139 - C13661 * C2136 + C15138 * C2140 -
                      C13657 * C2137 + C7734 * C2141 - C13707 * C2138) *
                         C15225) *
                        C15265) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C1330 * C124 - C1440 * C81 - C1330 * C189 + C15446 * C222 +
            C1331 * C456 - C1441 * C391 - C1331 * C556 + C15225 * C609) *
               C15130 +
           (C1330 * C125 - C1440 * C82 - C1330 * C190 + C15446 * C223 +
            C1331 * C458 - C1441 * C392 - C1331 * C557 + C15225 * C611) *
               C15138 +
           (C1330 * C126 - C1440 * C83 - C1330 * C191 + C15446 * C224 +
            C1331 * C460 - C1441 * C393 - C1331 * C558 + C15225 * C613) *
               C7734) *
              C8988 +
          ((C1330 * C900 - C1440 * C838 - C1330 * C1003 + C15446 * C1053 +
            C1331 * C2024 - C1441 * C1962 - C1331 * C2136 + C15225 * C2192) *
               C15130 +
           (C1330 * C901 - C1440 * C839 - C1330 * C1004 + C15446 * C1054 +
            C1331 * C2025 - C1441 * C1963 - C1331 * C2137 + C15225 * C2193) *
               C15138 +
           (C1330 * C902 - C1440 * C840 - C1330 * C1005 + C15446 * C1055 +
            C1331 * C2026 - C1441 * C1964 - C1331 * C2138 + C15225 * C2194) *
               C7734) *
              C15265) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C1330 +
           (C8988 * C249 - C9058 * C189 + C15265 * C1097 - C9059 * C1003) *
               C15446 +
           (C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C1331 +
           (C8988 * C653 - C9058 * C556 + C15265 * C2245 - C9059 * C2136) *
               C15225) *
              C15130 +
          ((C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) * C1330 +
           (C8988 * C250 - C9058 * C190 + C15265 * C1099 - C9059 * C1004) *
               C15446 +
           (C8988 * C507 - C9058 * C392 + C15265 * C2081 - C9059 * C1963) *
               C1331 +
           (C8988 * C655 - C9058 * C557 + C15265 * C2246 - C9059 * C2137) *
               C15225) *
              C15138 +
          ((C8988 * C159 - C9058 * C83 + C15265 * C957 - C9059 * C840) * C1330 +
           (C8988 * C251 - C9058 * C191 + C15265 * C1101 - C9059 * C1005) *
               C15446 +
           (C8988 * C508 - C9058 * C393 + C15265 * C2082 - C9059 * C1964) *
               C1331 +
           (C8988 * C657 - C9058 * C558 + C15265 * C2247 - C9059 * C2138) *
               C15225) *
              C7734) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezx[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C15130 * C86 - C13661 * C81 + C15138 * C88 -
                      C13657 * C82 + C7734 * C90 - C13707 * C83) *
                         C9058 +
                     (C15130 * C281 - C13661 * C276 + C15138 * C282 -
                      C13657 * C277 + C7734 * C283 - C13707 * C278) *
                         C8988 +
                     (C15130 * C844 - C13661 * C838 + C15138 * C846 -
                      C13657 * C839 + C7734 * C848 - C13707 * C840) *
                         C9059 +
                     (C15130 * C1147 - C13661 * C1141 + C15138 * C1148 -
                      C13657 * C1142 + C7734 * C1149 - C13707 * C1143) *
                         C15265) *
                        C15446 +
                    ((C15130 * C397 - C13661 * C391 + C15138 * C399 -
                      C13657 * C392 + C7734 * C401 - C13707 * C393) *
                         C9058 +
                     (C15130 * C703 - C13661 * C697 + C15138 * C704 -
                      C13657 * C698 + C7734 * C705 - C13707 * C699) *
                         C8988 +
                     (C15130 * C1965 - C13661 * C1962 + C15138 * C1967 -
                      C13657 * C1963 + C7734 * C1969 - C13707 * C1964) *
                         C9059 +
                     (C15130 * C2301 - C13661 * C2298 + C15138 * C2302 -
                      C13657 * C2299 + C7734 * C2303 - C13707 * C2300) *
                         C15265) *
                        C15225) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) *
               C9058 +
           (C15446 * C308 - C1330 * C276 + C15225 * C747 - C1331 * C697) *
               C8988 +
           (C15446 * C900 - C1330 * C838 + C15225 * C2024 - C1331 * C1962) *
               C9059 +
           (C15446 * C1191 - C1330 * C1141 + C15225 * C2354 - C1331 * C2298) *
               C15265) *
              C15130 +
          ((C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) *
               C9058 +
           (C15446 * C309 - C1330 * C277 + C15225 * C749 - C1331 * C698) *
               C8988 +
           (C15446 * C901 - C1330 * C839 + C15225 * C2025 - C1331 * C1963) *
               C9059 +
           (C15446 * C1193 - C1330 * C1142 + C15225 * C2355 - C1331 * C2299) *
               C15265) *
              C15138 +
          ((C15446 * C126 - C1330 * C83 + C15225 * C460 - C1331 * C393) *
               C9058 +
           (C15446 * C310 - C1330 * C278 + C15225 * C751 - C1331 * C699) *
               C8988 +
           (C15446 * C902 - C1330 * C840 + C15225 * C2026 - C1331 * C1964) *
               C9059 +
           (C15446 * C1195 - C1330 * C1143 + C15225 * C2356 - C1331 * C2300) *
               C15265) *
              C7734) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C9058 * C157 - C9264 * C81 - C9058 * C276 + C8988 * C336 +
            C9059 * C953 - C9265 * C838 - C9059 * C1141 + C15265 * C1238) *
               C15446 +
           (C9058 * C506 - C9264 * C391 - C9058 * C697 + C8988 * C791 +
            C9059 * C2080 - C9265 * C1962 - C9059 * C2298 + C15265 * C2407) *
               C15225) *
              C15130 +
          ((C9058 * C158 - C9264 * C82 - C9058 * C277 + C8988 * C337 +
            C9059 * C955 - C9265 * C839 - C9059 * C1142 + C15265 * C1240) *
               C15446 +
           (C9058 * C507 - C9264 * C392 - C9058 * C698 + C8988 * C793 +
            C9059 * C2081 - C9265 * C1963 - C9059 * C2299 + C15265 * C2408) *
               C15225) *
              C15138 +
          ((C9058 * C159 - C9264 * C83 - C9058 * C278 + C8988 * C338 +
            C9059 * C957 - C9265 * C840 - C9059 * C1143 + C15265 * C1242) *
               C15446 +
           (C9058 * C508 - C9264 * C393 - C9058 * C699 + C8988 * C795 +
            C9059 * C2082 - C9265 * C1964 - C9059 * C2300 + C15265 * C2409) *
               C15225) *
              C7734) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6960 * C86 - C6961 * C81 - C6960 * C87 + C6954 * C96 +
            C6962 * C88 - C6963 * C82 - C6962 * C89 + C15135 * C97) *
               C15261 +
           (C6960 * C844 - C6961 * C838 - C6960 * C845 + C6954 * C856 +
            C6962 * C846 - C6963 * C839 - C6962 * C847 + C15135 * C857) *
               C15268 +
           (C6960 * C850 - C6961 * C841 - C6960 * C851 + C6954 * C859 +
            C6962 * C852 - C6963 * C842 - C6962 * C853 + C15135 * C860) *
               C10524) *
              C15446 +
          ((C6960 * C397 - C6961 * C391 - C6960 * C398 + C6954 * C409 +
            C6962 * C399 - C6963 * C392 - C6962 * C400 + C15135 * C410) *
               C15261 +
           (C6960 * C1965 - C6961 * C1962 - C6960 * C1966 + C6954 * C1971 +
            C6962 * C1967 - C6963 * C1963 - C6962 * C1968 + C15135 * C1972) *
               C15268 +
           (C6960 * C3059 - C6961 * C3056 - C6960 * C3060 + C6954 * C3065 +
            C6962 * C5525 - C6963 * C5524 - C6962 * C5526 + C15135 * C5527) *
               C10524) *
              C15225) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) *
               C6960 +
           (C15446 * C129 - C1330 * C87 + C15225 * C462 - C1331 * C398) *
               C6954 +
           (C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) *
               C6962 +
           (C15446 * C130 - C1330 * C89 + C15225 * C464 - C1331 * C400) *
               C15135) *
              C15261 +
          ((C15446 * C900 - C1330 * C838 + C15225 * C2024 - C1331 * C1962) *
               C6960 +
           (C15446 * C906 - C1330 * C845 + C15225 * C2027 - C1331 * C1966) *
               C6954 +
           (C15446 * C901 - C1330 * C839 + C15225 * C2025 - C1331 * C1963) *
               C6962 +
           (C15446 * C907 - C1330 * C847 + C15225 * C2028 - C1331 * C1968) *
               C15135) *
              C15268 +
          ((C15446 * C903 - C1330 * C841 + C15225 * C3107 - C1331 * C3056) *
               C6960 +
           (C15446 * C909 - C1330 * C851 + C15225 * C3110 - C1331 * C3060) *
               C6954 +
           (C15446 * C904 - C1330 * C842 + C15225 * C5578 - C1331 * C5524) *
               C6962 +
           (C15446 * C910 - C1330 * C853 + C15225 * C5579 - C1331 * C5526) *
               C15135) *
              C10524) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C15261 * C157 - C14064 * C81 + C15268 * C953 -
                      C14061 * C838 + C10524 * C954 - C14072 * C841) *
                         C6960 +
                     (C15261 * C162 - C14064 * C87 + C15268 * C959 -
                      C14061 * C845 + C10524 * C960 - C14072 * C851) *
                         C6954 +
                     (C15261 * C158 - C14064 * C82 + C15268 * C955 -
                      C14061 * C839 + C10524 * C956 - C14072 * C842) *
                         C6962 +
                     (C15261 * C163 - C14064 * C89 + C15268 * C961 -
                      C14061 * C847 + C10524 * C962 - C14072 * C853) *
                         C15135) *
                        C15446 +
                    ((C15261 * C506 - C14064 * C391 + C15268 * C2080 -
                      C14061 * C1962 + C10524 * C3150 - C14072 * C3056) *
                         C6960 +
                     (C15261 * C512 - C14064 * C398 + C15268 * C2083 -
                      C14061 * C1966 + C10524 * C3153 - C14072 * C3060) *
                         C6954 +
                     (C15261 * C507 - C14064 * C392 + C15268 * C2081 -
                      C14061 * C1963 + C10524 * C5630 - C14072 * C5524) *
                         C6962 +
                     (C15261 * C513 - C14064 * C400 + C15268 * C2084 -
                      C14061 * C1968 + C10524 * C5631 - C14072 * C5526) *
                         C15135) *
                        C15225) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C1330 +
           (C6954 * C194 - C6960 * C189 + C15135 * C195 - C6962 * C190) *
               C15446 +
           (C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) *
               C1331 +
           (C6954 * C562 - C6960 * C556 + C15135 * C563 - C6962 * C557) *
               C15225) *
              C15261 +
          ((C6954 * C844 - C6960 * C838 + C15135 * C846 - C6962 * C839) *
               C1330 +
           (C6954 * C1009 - C6960 * C1003 + C15135 * C1010 - C6962 * C1004) *
               C15446 +
           (C6954 * C1965 - C6960 * C1962 + C15135 * C1967 - C6962 * C1963) *
               C1331 +
           (C6954 * C2139 - C6960 * C2136 + C15135 * C2140 - C6962 * C2137) *
               C15225) *
              C15268 +
          ((C6954 * C850 - C6960 * C841 + C15135 * C852 - C6962 * C842) *
               C1330 +
           (C6954 * C1012 - C6960 * C1006 + C15135 * C1013 - C6962 * C1007) *
               C15446 +
           (C6954 * C3059 - C6960 * C3056 + C15135 * C5525 - C6962 * C5524) *
               C1331 +
           (C6954 * C3198 - C6960 * C3195 + C15135 * C5683 - C6962 * C5682) *
               C15225) *
              C10524) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C1330 * C124 - C1440 * C81 - C1330 * C189 + C15446 * C222 +
            C1331 * C456 - C1441 * C391 - C1331 * C556 + C15225 * C609) *
               C6954 +
           (C1330 * C125 - C1440 * C82 - C1330 * C190 + C15446 * C223 +
            C1331 * C458 - C1441 * C392 - C1331 * C557 + C15225 * C611) *
               C15135) *
              C15261 +
          ((C1330 * C900 - C1440 * C838 - C1330 * C1003 + C15446 * C1053 +
            C1331 * C2024 - C1441 * C1962 - C1331 * C2136 + C15225 * C2192) *
               C6954 +
           (C1330 * C901 - C1440 * C839 - C1330 * C1004 + C15446 * C1054 +
            C1331 * C2025 - C1441 * C1963 - C1331 * C2137 + C15225 * C2193) *
               C15135) *
              C15268 +
          ((C1330 * C903 - C1440 * C841 - C1330 * C1006 + C15446 * C1056 +
            C1331 * C3107 - C1441 * C3056 - C1331 * C3195 + C15225 * C3239) *
               C6954 +
           (C1330 * C904 - C1440 * C842 - C1330 * C1007 + C15446 * C1057 +
            C1331 * C5578 - C1441 * C5524 - C1331 * C5682 + C15225 * C5734) *
               C15135) *
              C10524) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyz[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C15261 * C157 - C14064 * C81 + C15268 * C953 -
                      C14061 * C838 + C10524 * C954 - C14072 * C841) *
                         C1330 +
                     (C15261 * C249 - C14064 * C189 + C15268 * C1097 -
                      C14061 * C1003 + C10524 * C1098 - C14072 * C1006) *
                         C15446 +
                     (C15261 * C506 - C14064 * C391 + C15268 * C2080 -
                      C14061 * C1962 + C10524 * C3150 - C14072 * C3056) *
                         C1331 +
                     (C15261 * C653 - C14064 * C556 + C15268 * C2245 -
                      C14061 * C2136 + C10524 * C3279 - C14072 * C3195) *
                         C15225) *
                        C6954 +
                    ((C15261 * C158 - C14064 * C82 + C15268 * C955 -
                      C14061 * C839 + C10524 * C956 - C14072 * C842) *
                         C1330 +
                     (C15261 * C250 - C14064 * C190 + C15268 * C1099 -
                      C14061 * C1004 + C10524 * C1100 - C14072 * C1007) *
                         C15446 +
                     (C15261 * C507 - C14064 * C392 + C15268 * C2081 -
                      C14061 * C1963 + C10524 * C5630 - C14072 * C5524) *
                         C1331 +
                     (C15261 * C655 - C14064 * C557 + C15268 * C2246 -
                      C14061 * C2137 + C10524 * C5785 - C14072 * C5682) *
                         C15225) *
                        C15135) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C14064 +
           (C6954 * C281 - C6960 * C276 + C15135 * C282 - C6962 * C277) *
               C15261 +
           (C6954 * C844 - C6960 * C838 + C15135 * C846 - C6962 * C839) *
               C14061 +
           (C6954 * C1147 - C6960 * C1141 + C15135 * C1148 - C6962 * C1142) *
               C15268 +
           (C6954 * C850 - C6960 * C841 + C15135 * C852 - C6962 * C842) *
               C14072 +
           (C6954 * C1150 - C6960 * C1144 + C15135 * C1151 - C6962 * C1145) *
               C10524) *
              C15446 +
          ((C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) *
               C14064 +
           (C6954 * C703 - C6960 * C697 + C15135 * C704 - C6962 * C698) *
               C15261 +
           (C6954 * C1965 - C6960 * C1962 + C15135 * C1967 - C6962 * C1963) *
               C14061 +
           (C6954 * C2301 - C6960 * C2298 + C15135 * C2302 - C6962 * C2299) *
               C15268 +
           (C6954 * C3059 - C6960 * C3056 + C15135 * C5525 - C6962 * C5524) *
               C14072 +
           (C6954 * C3323 - C6960 * C3320 + C15135 * C5837 - C6962 * C5836) *
               C10524) *
              C15225) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) *
               C14064 +
           (C15446 * C308 - C1330 * C276 + C15225 * C747 - C1331 * C697) *
               C15261 +
           (C15446 * C900 - C1330 * C838 + C15225 * C2024 - C1331 * C1962) *
               C14061 +
           (C15446 * C1191 - C1330 * C1141 + C15225 * C2354 - C1331 * C2298) *
               C15268 +
           (C15446 * C903 - C1330 * C841 + C15225 * C3107 - C1331 * C3056) *
               C14072 +
           (C15446 * C1192 - C1330 * C1144 + C15225 * C3365 - C1331 * C3320) *
               C10524) *
              C6954 +
          ((C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) *
               C14064 +
           (C15446 * C309 - C1330 * C277 + C15225 * C749 - C1331 * C698) *
               C15261 +
           (C15446 * C901 - C1330 * C839 + C15225 * C2025 - C1331 * C1963) *
               C14061 +
           (C15446 * C1193 - C1330 * C1142 + C15225 * C2355 - C1331 * C2299) *
               C15268 +
           (C15446 * C904 - C1330 * C842 + C15225 * C5578 - C1331 * C5524) *
               C14072 +
           (C15446 * C1194 - C1330 * C1145 + C15225 * C5888 - C1331 * C5836) *
               C10524) *
              C15135) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C14064 * C157 - C14116 * C81 - C14064 * C276 + C15261 * C336 +
            C14061 * C953 - C14109 * C838 - C14061 * C1141 + C15268 * C1238 +
            C14072 * C954 - C10834 * C841 - C14072 * C1144 + C10524 * C1239) *
               C15446 +
           (C14064 * C506 - C14116 * C391 - C14064 * C697 + C15261 * C791 +
            C14061 * C2080 - C14109 * C1962 - C14061 * C2298 + C15268 * C2407 +
            C14072 * C3150 - C10834 * C3056 - C14072 * C3320 + C10524 * C3405) *
               C15225) *
              C6954 +
          ((C14064 * C158 - C14116 * C82 - C14064 * C277 + C15261 * C337 +
            C14061 * C955 - C14109 * C839 - C14061 * C1142 + C15268 * C1240 +
            C14072 * C956 - C10834 * C842 - C14072 * C1145 + C10524 * C1241) *
               C15446 +
           (C14064 * C507 - C14116 * C392 - C14064 * C698 + C15261 * C793 +
            C14061 * C2081 - C14109 * C1963 - C14061 * C2299 + C15268 * C2408 +
            C14072 * C5630 - C10834 * C5524 - C14072 * C5836 + C10524 * C5939) *
               C15225) *
              C15135) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6960 * C86 - C6961 * C81 - C6960 * C87 + C6954 * C96 +
            C6962 * C88 - C6963 * C82 - C6962 * C89 + C15135 * C97) *
               C8988 +
           (C6960 * C844 - C6961 * C838 - C6960 * C845 + C6954 * C856 +
            C6962 * C846 - C6963 * C839 - C6962 * C847 + C15135 * C857) *
               C15265) *
              C15504 +
          ((C6960 * C397 - C6961 * C391 - C6960 * C398 + C6954 * C409 +
            C6962 * C399 - C6963 * C392 - C6962 * C400 + C15135 * C410) *
               C8988 +
           (C6960 * C1965 - C6961 * C1962 - C6960 * C1966 + C6954 * C1971 +
            C6962 * C1967 - C6963 * C1963 - C6962 * C1968 + C15135 * C1972) *
               C15265) *
              C15492 +
          ((C6960 * C403 - C6961 * C394 - C6960 * C404 + C6954 * C412 +
            C6962 * C405 - C6963 * C395 - C6962 * C406 + C15135 * C413) *
               C8988 +
           (C6960 * C3061 - C6961 * C3057 - C6960 * C3062 + C6954 * C3066 +
            C6962 * C3799 - C6963 * C3798 - C6962 * C3800 + C15135 * C3801) *
               C15265) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6636 * C86 - C6637 * C81 - C6636 * C87 + C15510 * C96 +
           C6638 * C88 - C6639 * C82 - C6638 * C89 + C15503 * C97 +
           C6640 * C90 - C6641 * C83 - C6640 * C91 + C15490 * C98 +
           C6642 * C92 - C6643 * C84 - C6642 * C93 + C15445 * C99) *
              C8988 +
          (C6636 * C844 - C6637 * C838 - C6636 * C845 + C15510 * C856 +
           C6638 * C846 - C6639 * C839 - C6638 * C847 + C15503 * C857 +
           C6640 * C848 - C6641 * C840 - C6640 * C849 + C15490 * C858 +
           C6642 * C1621 - C6643 * C1620 - C6642 * C1622 + C15445 * C1623) *
              C15265) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C6960 * C86 - C6961 * C81 - C6960 * C87 + C6954 * C96 + C6962 * C88 -
           C6963 * C82 - C6962 * C89 + C15135 * C97) *
              C15512 +
          (C6960 * C844 - C6961 * C838 - C6960 * C845 + C6954 * C856 +
           C6962 * C846 - C6963 * C839 - C6962 * C847 + C15135 * C857) *
              C15509 +
          (C6960 * C850 - C6961 * C841 - C6960 * C851 + C6954 * C859 +
           C6962 * C852 - C6963 * C842 - C6962 * C853 + C15135 * C860) *
              C15500 +
          (C6960 * C5258 - C6961 * C5256 - C6960 * C5259 + C6954 * C5262 +
           C6962 * C5979 - C6963 * C5978 - C6962 * C5980 + C15135 * C5981) *
              C15461) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                      C15472 * C457 - C455 * C394) *
                         C6960 +
                     (C15504 * C129 - C453 * C87 + C15492 * C462 - C454 * C398 +
                      C15472 * C463 - C455 * C404) *
                         C6954 +
                     (C15504 * C125 - C453 * C82 + C15492 * C458 - C454 * C392 +
                      C15472 * C459 - C455 * C395) *
                         C6962 +
                     (C15504 * C130 - C453 * C89 + C15492 * C464 - C454 * C400 +
                      C15472 * C465 - C455 * C406) *
                         C15135) *
                        C8988 +
                    ((C15504 * C900 - C453 * C838 + C15492 * C2024 -
                      C454 * C1962 + C15472 * C3106 - C455 * C3057) *
                         C6960 +
                     (C15504 * C906 - C453 * C845 + C15492 * C2027 -
                      C454 * C1966 + C15472 * C3109 - C455 * C3062) *
                         C6954 +
                     (C15504 * C901 - C453 * C839 + C15492 * C2025 -
                      C454 * C1963 + C15472 * C3852 - C455 * C3798) *
                         C6962 +
                     (C15504 * C907 - C453 * C847 + C15492 * C2028 -
                      C454 * C1968 + C15472 * C3853 - C455 * C3800) *
                         C15135) *
                        C15265) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C6636 +
                     (C15167 * C129 - C123 * C87) * C15510 +
                     (C15167 * C125 - C123 * C82) * C6638 +
                     (C15167 * C130 - C123 * C89) * C15503 +
                     (C15167 * C126 - C123 * C83) * C6640 +
                     (C15167 * C131 - C123 * C91) * C15490 +
                     (C15167 * C127 - C123 * C84) * C6642 +
                     (C15167 * C132 - C123 * C93) * C15445) *
                        C8988 +
                    ((C15167 * C900 - C123 * C838) * C6636 +
                     (C15167 * C906 - C123 * C845) * C15510 +
                     (C15167 * C901 - C123 * C839) * C6638 +
                     (C15167 * C907 - C123 * C847) * C15503 +
                     (C15167 * C902 - C123 * C840) * C6640 +
                     (C15167 * C908 - C123 * C849) * C15490 +
                     (C15167 * C1658 - C123 * C1620) * C6642 +
                     (C15167 * C1659 - C123 * C1622) * C15445) *
                        C15265) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C6960 +
                     (C15167 * C129 - C123 * C87) * C6954 +
                     (C15167 * C125 - C123 * C82) * C6962 +
                     (C15167 * C130 - C123 * C89) * C15135) *
                        C15512 +
                    ((C15167 * C900 - C123 * C838) * C6960 +
                     (C15167 * C906 - C123 * C845) * C6954 +
                     (C15167 * C901 - C123 * C839) * C6962 +
                     (C15167 * C907 - C123 * C847) * C15135) *
                        C15509 +
                    ((C15167 * C903 - C123 * C841) * C6960 +
                     (C15167 * C909 - C123 * C851) * C6954 +
                     (C15167 * C904 - C123 * C842) * C6962 +
                     (C15167 * C910 - C123 * C853) * C15135) *
                        C15500 +
                    ((C15167 * C5286 - C123 * C5256) * C6960 +
                     (C15167 * C5288 - C123 * C5259) * C6954 +
                     (C15167 * C6016 - C123 * C5978) * C6962 +
                     (C15167 * C6017 - C123 * C5980) * C15135) *
                        C15461) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C6960 +
           (C8988 * C162 - C9058 * C87 + C15265 * C959 - C9059 * C845) * C6954 +
           (C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) * C6962 +
           (C8988 * C163 - C9058 * C89 + C15265 * C961 - C9059 * C847) *
               C15135) *
              C15504 +
          ((C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C6960 +
           (C8988 * C512 - C9058 * C398 + C15265 * C2083 - C9059 * C1966) *
               C6954 +
           (C8988 * C507 - C9058 * C392 + C15265 * C2081 - C9059 * C1963) *
               C6962 +
           (C8988 * C513 - C9058 * C400 + C15265 * C2084 - C9059 * C1968) *
               C15135) *
              C15492 +
          ((C8988 * C509 - C9058 * C394 + C15265 * C3151 - C9059 * C3057) *
               C6960 +
           (C8988 * C515 - C9058 * C404 + C15265 * C3154 - C9059 * C3062) *
               C6954 +
           (C8988 * C510 - C9058 * C395 + C15265 * C3904 - C9059 * C3798) *
               C6962 +
           (C8988 * C516 - C9058 * C406 + C15265 * C3905 - C9059 * C3800) *
               C15135) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C6636 +
          (C8988 * C162 - C9058 * C87 + C15265 * C959 - C9059 * C845) * C15510 +
          (C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) * C6638 +
          (C8988 * C163 - C9058 * C89 + C15265 * C961 - C9059 * C847) * C15503 +
          (C8988 * C159 - C9058 * C83 + C15265 * C957 - C9059 * C840) * C6640 +
          (C8988 * C164 - C9058 * C91 + C15265 * C963 - C9059 * C849) * C15490 +
          (C8988 * C160 - C9058 * C84 + C15265 * C1696 - C9059 * C1620) *
              C6642 +
          (C8988 * C165 - C9058 * C93 + C15265 * C1697 - C9059 * C1622) *
              C15445) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C15512 * C157 - C9822 * C81 + C15509 * C953 - C9823 * C838 +
           C15500 * C954 - C9824 * C841 + C15461 * C5317 - C9825 * C5256) *
              C6960 +
          (C15512 * C162 - C9822 * C87 + C15509 * C959 - C9823 * C845 +
           C15500 * C960 - C9824 * C851 + C15461 * C5319 - C9825 * C5259) *
              C6954 +
          (C15512 * C158 - C9822 * C82 + C15509 * C955 - C9823 * C839 +
           C15500 * C956 - C9824 * C842 + C15461 * C6056 - C9825 * C5978) *
              C6962 +
          (C15512 * C163 - C9822 * C89 + C15509 * C961 - C9823 * C847 +
           C15500 * C962 - C9824 * C853 + C15461 * C6057 - C9825 * C5980) *
              C15135) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C453 +
           (C6954 * C194 - C6960 * C189 + C15135 * C195 - C6962 * C190) *
               C15504 +
           (C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) * C454 +
           (C6954 * C562 - C6960 * C556 + C15135 * C563 - C6962 * C557) *
               C15492 +
           (C6954 * C403 - C6960 * C394 + C15135 * C405 - C6962 * C395) * C455 +
           (C6954 * C565 - C6960 * C559 + C15135 * C566 - C6962 * C560) *
               C15472) *
              C8988 +
          ((C6954 * C844 - C6960 * C838 + C15135 * C846 - C6962 * C839) * C453 +
           (C6954 * C1009 - C6960 * C1003 + C15135 * C1010 - C6962 * C1004) *
               C15504 +
           (C6954 * C1965 - C6960 * C1962 + C15135 * C1967 - C6962 * C1963) *
               C454 +
           (C6954 * C2139 - C6960 * C2136 + C15135 * C2140 - C6962 * C2137) *
               C15492 +
           (C6954 * C3061 - C6960 * C3057 + C15135 * C3799 - C6962 * C3798) *
               C455 +
           (C6954 * C3197 - C6960 * C3194 + C15135 * C3957 - C6962 * C3956) *
               C15472) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15510 * C86 - C6636 * C81 + C15503 * C88 - C6638 * C82 +
            C15490 * C90 - C6640 * C83 + C15445 * C92 - C6642 * C84) *
               C123 +
           (C15510 * C194 - C6636 * C189 + C15503 * C195 - C6638 * C190 +
            C15490 * C196 - C6640 * C191 + C15445 * C197 - C6642 * C192) *
               C15167) *
              C8988 +
          ((C15510 * C844 - C6636 * C838 + C15503 * C846 - C6638 * C839 +
            C15490 * C848 - C6640 * C840 + C15445 * C1621 - C6642 * C1620) *
               C123 +
           (C15510 * C1009 - C6636 * C1003 + C15503 * C1010 - C6638 * C1004 +
            C15490 * C1011 - C6640 * C1005 + C15445 * C1733 - C6642 * C1732) *
               C15167) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C123 +
           (C6954 * C194 - C6960 * C189 + C15135 * C195 - C6962 * C190) *
               C15167) *
              C15512 +
          ((C6954 * C844 - C6960 * C838 + C15135 * C846 - C6962 * C839) * C123 +
           (C6954 * C1009 - C6960 * C1003 + C15135 * C1010 - C6962 * C1004) *
               C15167) *
              C15509 +
          ((C6954 * C850 - C6960 * C841 + C15135 * C852 - C6962 * C842) * C123 +
           (C6954 * C1012 - C6960 * C1006 + C15135 * C1013 - C6962 * C1007) *
               C15167) *
              C15500 +
          ((C6954 * C5258 - C6960 * C5256 + C15135 * C5979 - C6962 * C5978) *
               C123 +
           (C6954 * C5345 - C6960 * C5343 + C15135 * C6093 - C6962 * C6092) *
               C15167) *
              C15461) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C453 * C124 - C606 * C81 - C453 * C189 + C15504 * C222 +
            C454 * C456 - C607 * C391 - C454 * C556 + C15492 * C609 +
            C455 * C457 - C608 * C394 - C455 * C559 + C15472 * C610) *
               C6954 +
           (C453 * C125 - C606 * C82 - C453 * C190 + C15504 * C223 +
            C454 * C458 - C607 * C392 - C454 * C557 + C15492 * C611 +
            C455 * C459 - C608 * C395 - C455 * C560 + C15472 * C612) *
               C15135) *
              C8988 +
          ((C453 * C900 - C606 * C838 - C453 * C1003 + C15504 * C1053 +
            C454 * C2024 - C607 * C1962 - C454 * C2136 + C15492 * C2192 +
            C455 * C3106 - C608 * C3057 - C455 * C3194 + C15472 * C3238) *
               C6954 +
           (C453 * C901 - C606 * C839 - C453 * C1004 + C15504 * C1054 +
            C454 * C2025 - C607 * C1963 - C454 * C2137 + C15492 * C2193 +
            C455 * C3852 - C608 * C3798 - C455 * C3956 + C15472 * C4008) *
               C15135) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C15510 +
           (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C15503 +
           (C123 * C126 - C221 * C83 - C123 * C191 + C15167 * C224) * C15490 +
           (C123 * C127 - C221 * C84 - C123 * C192 + C15167 * C225) * C15445) *
              C8988 +
          ((C123 * C900 - C221 * C838 - C123 * C1003 + C15167 * C1053) *
               C15510 +
           (C123 * C901 - C221 * C839 - C123 * C1004 + C15167 * C1054) *
               C15503 +
           (C123 * C902 - C221 * C840 - C123 * C1005 + C15167 * C1055) *
               C15490 +
           (C123 * C1658 - C221 * C1620 - C123 * C1732 + C15167 * C1768) *
               C15445) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C6954 +
           (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C15135) *
              C15512 +
          ((C123 * C900 - C221 * C838 - C123 * C1003 + C15167 * C1053) * C6954 +
           (C123 * C901 - C221 * C839 - C123 * C1004 + C15167 * C1054) *
               C15135) *
              C15509 +
          ((C123 * C903 - C221 * C841 - C123 * C1006 + C15167 * C1056) * C6954 +
           (C123 * C904 - C221 * C842 - C123 * C1007 + C15167 * C1057) *
               C15135) *
              C15500 +
          ((C123 * C5286 - C221 * C5256 - C123 * C5343 + C15167 * C5369) *
               C6954 +
           (C123 * C6016 - C221 * C5978 - C123 * C6092 + C15167 * C6128) *
               C15135) *
              C15461) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C453 +
           (C8988 * C249 - C9058 * C189 + C15265 * C1097 - C9059 * C1003) *
               C15504 +
           (C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C454 +
           (C8988 * C653 - C9058 * C556 + C15265 * C2245 - C9059 * C2136) *
               C15492 +
           (C8988 * C509 - C9058 * C394 + C15265 * C3151 - C9059 * C3057) *
               C455 +
           (C8988 * C654 - C9058 * C559 + C15265 * C3280 - C9059 * C3194) *
               C15472) *
              C6954 +
          ((C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) * C453 +
           (C8988 * C250 - C9058 * C190 + C15265 * C1099 - C9059 * C1004) *
               C15504 +
           (C8988 * C507 - C9058 * C392 + C15265 * C2081 - C9059 * C1963) *
               C454 +
           (C8988 * C655 - C9058 * C557 + C15265 * C2246 - C9059 * C2137) *
               C15492 +
           (C8988 * C510 - C9058 * C395 + C15265 * C3904 - C9059 * C3798) *
               C455 +
           (C8988 * C656 - C9058 * C560 + C15265 * C4059 - C9059 * C3956) *
               C15472) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C123 +
           (C8988 * C249 - C9058 * C189 + C15265 * C1097 - C9059 * C1003) *
               C15167) *
              C15510 +
          ((C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) * C123 +
           (C8988 * C250 - C9058 * C190 + C15265 * C1099 - C9059 * C1004) *
               C15167) *
              C15503 +
          ((C8988 * C159 - C9058 * C83 + C15265 * C957 - C9059 * C840) * C123 +
           (C8988 * C251 - C9058 * C191 + C15265 * C1101 - C9059 * C1005) *
               C15167) *
              C15490 +
          ((C8988 * C160 - C9058 * C84 + C15265 * C1696 - C9059 * C1620) *
               C123 +
           (C8988 * C252 - C9058 * C192 + C15265 * C1803 - C9059 * C1732) *
               C15167) *
              C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C15512 * C157 - C9822 * C81 + C15509 * C953 - C9823 * C838 +
            C15500 * C954 - C9824 * C841 + C15461 * C5317 - C9825 * C5256) *
               C123 +
           (C15512 * C249 - C9822 * C189 + C15509 * C1097 - C9823 * C1003 +
            C15500 * C1098 - C9824 * C1006 + C15461 * C5393 - C9825 * C5343) *
               C15167) *
              C6954 +
          ((C15512 * C158 - C9822 * C82 + C15509 * C955 - C9823 * C839 +
            C15500 * C956 - C9824 * C842 + C15461 * C6056 - C9825 * C5978) *
               C123 +
           (C15512 * C250 - C9822 * C190 + C15509 * C1099 - C9823 * C1004 +
            C15500 * C1100 - C9824 * C1007 + C15461 * C6163 - C9825 * C6092) *
               C15167) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C9058 +
           (C6954 * C281 - C6960 * C276 + C15135 * C282 - C6962 * C277) *
               C8988 +
           (C6954 * C844 - C6960 * C838 + C15135 * C846 - C6962 * C839) *
               C9059 +
           (C6954 * C1147 - C6960 * C1141 + C15135 * C1148 - C6962 * C1142) *
               C15265) *
              C15504 +
          ((C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) *
               C9058 +
           (C6954 * C703 - C6960 * C697 + C15135 * C704 - C6962 * C698) *
               C8988 +
           (C6954 * C1965 - C6960 * C1962 + C15135 * C1967 - C6962 * C1963) *
               C9059 +
           (C6954 * C2301 - C6960 * C2298 + C15135 * C2302 - C6962 * C2299) *
               C15265) *
              C15492 +
          ((C6954 * C403 - C6960 * C394 + C15135 * C405 - C6962 * C395) *
               C9058 +
           (C6954 * C706 - C6960 * C700 + C15135 * C707 - C6962 * C701) *
               C8988 +
           (C6954 * C3061 - C6960 * C3057 + C15135 * C3799 - C6962 * C3798) *
               C9059 +
           (C6954 * C3324 - C6960 * C3321 + C15135 * C4111 - C6962 * C4110) *
               C15265) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C15510 * C86 - C6636 * C81 + C15503 * C88 - C6638 * C82 +
           C15490 * C90 - C6640 * C83 + C15445 * C92 - C6642 * C84) *
              C9058 +
          (C15510 * C281 - C6636 * C276 + C15503 * C282 - C6638 * C277 +
           C15490 * C283 - C6640 * C278 + C15445 * C284 - C6642 * C279) *
              C8988 +
          (C15510 * C844 - C6636 * C838 + C15503 * C846 - C6638 * C839 +
           C15490 * C848 - C6640 * C840 + C15445 * C1621 - C6642 * C1620) *
              C9059 +
          (C15510 * C1147 - C6636 * C1141 + C15503 * C1148 - C6638 * C1142 +
           C15490 * C1149 - C6640 * C1143 + C15445 * C1839 - C6642 * C1838) *
              C15265) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C9822 +
          (C6954 * C281 - C6960 * C276 + C15135 * C282 - C6962 * C277) *
              C15512 +
          (C6954 * C844 - C6960 * C838 + C15135 * C846 - C6962 * C839) * C9823 +
          (C6954 * C1147 - C6960 * C1141 + C15135 * C1148 - C6962 * C1142) *
              C15509 +
          (C6954 * C850 - C6960 * C841 + C15135 * C852 - C6962 * C842) * C9824 +
          (C6954 * C1150 - C6960 * C1144 + C15135 * C1151 - C6962 * C1145) *
              C15500 +
          (C6954 * C5258 - C6960 * C5256 + C15135 * C5979 - C6962 * C5978) *
              C9825 +
          (C6954 * C5419 - C6960 * C5417 + C15135 * C6199 - C6962 * C6198) *
              C15461) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                      C15472 * C457 - C455 * C394) *
                         C9058 +
                     (C15504 * C308 - C453 * C276 + C15492 * C747 -
                      C454 * C697 + C15472 * C748 - C455 * C700) *
                         C8988 +
                     (C15504 * C900 - C453 * C838 + C15492 * C2024 -
                      C454 * C1962 + C15472 * C3106 - C455 * C3057) *
                         C9059 +
                     (C15504 * C1191 - C453 * C1141 + C15492 * C2354 -
                      C454 * C2298 + C15472 * C3364 - C455 * C3321) *
                         C15265) *
                        C6954 +
                    ((C15504 * C125 - C453 * C82 + C15492 * C458 - C454 * C392 +
                      C15472 * C459 - C455 * C395) *
                         C9058 +
                     (C15504 * C309 - C453 * C277 + C15492 * C749 -
                      C454 * C698 + C15472 * C750 - C455 * C701) *
                         C8988 +
                     (C15504 * C901 - C453 * C839 + C15492 * C2025 -
                      C454 * C1963 + C15472 * C3852 - C455 * C3798) *
                         C9059 +
                     (C15504 * C1193 - C453 * C1142 + C15492 * C2355 -
                      C454 * C2299 + C15472 * C4162 - C455 * C4110) *
                         C15265) *
                        C15135) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C9058 +
                     (C15167 * C308 - C123 * C276) * C8988 +
                     (C15167 * C900 - C123 * C838) * C9059 +
                     (C15167 * C1191 - C123 * C1141) * C15265) *
                        C15510 +
                    ((C15167 * C125 - C123 * C82) * C9058 +
                     (C15167 * C309 - C123 * C277) * C8988 +
                     (C15167 * C901 - C123 * C839) * C9059 +
                     (C15167 * C1193 - C123 * C1142) * C15265) *
                        C15503 +
                    ((C15167 * C126 - C123 * C83) * C9058 +
                     (C15167 * C310 - C123 * C278) * C8988 +
                     (C15167 * C902 - C123 * C840) * C9059 +
                     (C15167 * C1195 - C123 * C1143) * C15265) *
                        C15490 +
                    ((C15167 * C127 - C123 * C84) * C9058 +
                     (C15167 * C311 - C123 * C279) * C8988 +
                     (C15167 * C1658 - C123 * C1620) * C9059 +
                     (C15167 * C1874 - C123 * C1838) * C15265) *
                        C15445) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C9822 +
                     (C15167 * C308 - C123 * C276) * C15512 +
                     (C15167 * C900 - C123 * C838) * C9823 +
                     (C15167 * C1191 - C123 * C1141) * C15509 +
                     (C15167 * C903 - C123 * C841) * C9824 +
                     (C15167 * C1192 - C123 * C1144) * C15500 +
                     (C15167 * C5286 - C123 * C5256) * C9825 +
                     (C15167 * C5443 - C123 * C5417) * C15461) *
                        C6954 +
                    ((C15167 * C125 - C123 * C82) * C9822 +
                     (C15167 * C309 - C123 * C277) * C15512 +
                     (C15167 * C901 - C123 * C839) * C9823 +
                     (C15167 * C1193 - C123 * C1142) * C15509 +
                     (C15167 * C904 - C123 * C842) * C9824 +
                     (C15167 * C1194 - C123 * C1145) * C15500 +
                     (C15167 * C6016 - C123 * C5978) * C9825 +
                     (C15167 * C6234 - C123 * C6198) * C15461) *
                        C15135) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9058 * C157 - C9264 * C81 - C9058 * C276 + C8988 * C336 +
            C9059 * C953 - C9265 * C838 - C9059 * C1141 + C15265 * C1238) *
               C15504 +
           (C9058 * C506 - C9264 * C391 - C9058 * C697 + C8988 * C791 +
            C9059 * C2080 - C9265 * C1962 - C9059 * C2298 + C15265 * C2407) *
               C15492 +
           (C9058 * C509 - C9264 * C394 - C9058 * C700 + C8988 * C792 +
            C9059 * C3151 - C9265 * C3057 - C9059 * C3321 + C15265 * C3406) *
               C15472) *
              C6954 +
          ((C9058 * C158 - C9264 * C82 - C9058 * C277 + C8988 * C337 +
            C9059 * C955 - C9265 * C839 - C9059 * C1142 + C15265 * C1240) *
               C15504 +
           (C9058 * C507 - C9264 * C392 - C9058 * C698 + C8988 * C793 +
            C9059 * C2081 - C9265 * C1963 - C9059 * C2299 + C15265 * C2408) *
               C15492 +
           (C9058 * C510 - C9264 * C395 - C9058 * C701 + C8988 * C794 +
            C9059 * C3904 - C9265 * C3798 - C9059 * C4110 + C15265 * C4213) *
               C15472) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C9058 * C157 - C9264 * C81 - C9058 * C276 + C8988 * C336 +
           C9059 * C953 - C9265 * C838 - C9059 * C1141 + C15265 * C1238) *
              C15167 * C15510 +
          (C9058 * C158 - C9264 * C82 - C9058 * C277 + C8988 * C337 +
           C9059 * C955 - C9265 * C839 - C9059 * C1142 + C15265 * C1240) *
              C15167 * C15503 +
          (C9058 * C159 - C9264 * C83 - C9058 * C278 + C8988 * C338 +
           C9059 * C957 - C9265 * C840 - C9059 * C1143 + C15265 * C1242) *
              C15167 * C15490 +
          (C9058 * C160 - C9264 * C84 - C9058 * C279 + C8988 * C339 +
           C9059 * C1696 - C9265 * C1620 - C9059 * C1838 + C15265 * C1911) *
              C15167 * C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C9822 * C157 - C10030 * C81 - C9822 * C276 + C15512 * C336 +
           C9823 * C953 - C10031 * C838 - C9823 * C1141 + C15509 * C1238 +
           C9824 * C954 - C10032 * C841 - C9824 * C1144 + C15500 * C1239 +
           C9825 * C5317 - C10033 * C5256 - C9825 * C5417 + C15461 * C5472) *
              C15167 * C6954 +
          (C9822 * C158 - C10030 * C82 - C9822 * C277 + C15512 * C337 +
           C9823 * C955 - C10031 * C839 - C9823 * C1142 + C15509 * C1240 +
           C9824 * C956 - C10032 * C842 - C9824 * C1145 + C15500 * C1241 +
           C9825 * C6056 - C10033 * C5978 - C9825 * C6198 + C15461 * C6273) *
              C15167 * C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((C13661 * C86 - C13701 * C81 - C13661 * C87 + C15130 * C96 +
           C13657 * C88 - C13696 * C82 - C13657 * C89 + C15138 * C97 +
           C13707 * C90 - C7743 * C83 - C13707 * C91 + C7734 * C98) *
              C15261 +
          (C13661 * C844 - C13701 * C838 - C13661 * C845 + C15130 * C856 +
           C13657 * C846 - C13696 * C839 - C13657 * C847 + C15138 * C857 +
           C13707 * C848 - C7743 * C840 - C13707 * C849 + C7734 * C858) *
              C15268 +
          (C13661 * C850 - C13701 * C841 - C13661 * C851 + C15130 * C859 +
           C13657 * C852 - C13696 * C842 - C13657 * C853 + C15138 * C860 +
           C13707 * C854 - C7743 * C843 - C13707 * C855 + C7734 * C861) *
              C10524) *
         C15167 * C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C13661 +
                     (C15167 * C129 - C123 * C87) * C15130 +
                     (C15167 * C125 - C123 * C82) * C13657 +
                     (C15167 * C130 - C123 * C89) * C15138 +
                     (C15167 * C126 - C123 * C83) * C13707 +
                     (C15167 * C131 - C123 * C91) * C7734) *
                        C15261 +
                    ((C15167 * C900 - C123 * C838) * C13661 +
                     (C15167 * C906 - C123 * C845) * C15130 +
                     (C15167 * C901 - C123 * C839) * C13657 +
                     (C15167 * C907 - C123 * C847) * C15138 +
                     (C15167 * C902 - C123 * C840) * C13707 +
                     (C15167 * C908 - C123 * C849) * C7734) *
                        C15268 +
                    ((C15167 * C903 - C123 * C841) * C13661 +
                     (C15167 * C909 - C123 * C851) * C15130 +
                     (C15167 * C904 - C123 * C842) * C13657 +
                     (C15167 * C910 - C123 * C853) * C15138 +
                     (C15167 * C905 - C123 * C843) * C13707 +
                     (C15167 * C911 - C123 * C855) * C7734) *
                        C10524) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eexz[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((C15261 * C157 - C14064 * C81 + C15268 * C953 -
                     C14061 * C838 + C10524 * C954 - C14072 * C841) *
                        C13661 +
                    (C15261 * C162 - C14064 * C87 + C15268 * C959 -
                     C14061 * C845 + C10524 * C960 - C14072 * C851) *
                        C15130 +
                    (C15261 * C158 - C14064 * C82 + C15268 * C955 -
                     C14061 * C839 + C10524 * C956 - C14072 * C842) *
                        C13657 +
                    (C15261 * C163 - C14064 * C89 + C15268 * C961 -
                     C14061 * C847 + C10524 * C962 - C14072 * C853) *
                        C15138 +
                    (C15261 * C159 - C14064 * C83 + C15268 * C957 -
                     C14061 * C840 + C10524 * C958 - C14072 * C843) *
                        C13707 +
                    (C15261 * C164 - C14064 * C91 + C15268 * C963 -
                     C14061 * C849 + C10524 * C964 - C14072 * C855) *
                        C7734) *
                   C15167 * C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C15130 * C86 - C13661 * C81 + C15138 * C88 -
                      C13657 * C82 + C7734 * C90 - C13707 * C83) *
                         C123 +
                     (C15130 * C194 - C13661 * C189 + C15138 * C195 -
                      C13657 * C190 + C7734 * C196 - C13707 * C191) *
                         C15167) *
                        C15261 +
                    ((C15130 * C844 - C13661 * C838 + C15138 * C846 -
                      C13657 * C839 + C7734 * C848 - C13707 * C840) *
                         C123 +
                     (C15130 * C1009 - C13661 * C1003 + C15138 * C1010 -
                      C13657 * C1004 + C7734 * C1011 - C13707 * C1005) *
                         C15167) *
                        C15268 +
                    ((C15130 * C850 - C13661 * C841 + C15138 * C852 -
                      C13657 * C842 + C7734 * C854 - C13707 * C843) *
                         C123 +
                     (C15130 * C1012 - C13661 * C1006 + C15138 * C1013 -
                      C13657 * C1007 + C7734 * C1014 - C13707 * C1008) *
                         C15167) *
                        C10524) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C15130 +
           (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C15138 +
           (C123 * C126 - C221 * C83 - C123 * C191 + C15167 * C224) * C7734) *
              C15261 +
          ((C123 * C900 - C221 * C838 - C123 * C1003 + C15167 * C1053) *
               C15130 +
           (C123 * C901 - C221 * C839 - C123 * C1004 + C15167 * C1054) *
               C15138 +
           (C123 * C902 - C221 * C840 - C123 * C1005 + C15167 * C1055) *
               C7734) *
              C15268 +
          ((C123 * C903 - C221 * C841 - C123 * C1006 + C15167 * C1056) *
               C15130 +
           (C123 * C904 - C221 * C842 - C123 * C1007 + C15167 * C1057) *
               C15138 +
           (C123 * C905 - C221 * C843 - C123 * C1008 + C15167 * C1058) *
               C7734) *
              C10524) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyz[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C15261 * C157 - C14064 * C81 + C15268 * C953 -
                      C14061 * C838 + C10524 * C954 - C14072 * C841) *
                         C123 +
                     (C15261 * C249 - C14064 * C189 + C15268 * C1097 -
                      C14061 * C1003 + C10524 * C1098 - C14072 * C1006) *
                         C15167) *
                        C15130 +
                    ((C15261 * C158 - C14064 * C82 + C15268 * C955 -
                      C14061 * C839 + C10524 * C956 - C14072 * C842) *
                         C123 +
                     (C15261 * C250 - C14064 * C190 + C15268 * C1099 -
                      C14061 * C1004 + C10524 * C1100 - C14072 * C1007) *
                         C15167) *
                        C15138 +
                    ((C15261 * C159 - C14064 * C83 + C15268 * C957 -
                      C14061 * C840 + C10524 * C958 - C14072 * C843) *
                         C123 +
                     (C15261 * C251 - C14064 * C191 + C15268 * C1101 -
                      C14061 * C1005 + C10524 * C1102 - C14072 * C1008) *
                         C15167) *
                        C7734) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eezx[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((C15130 * C86 - C13661 * C81 + C15138 * C88 - C13657 * C82 +
                     C7734 * C90 - C13707 * C83) *
                        C14064 +
                    (C15130 * C281 - C13661 * C276 + C15138 * C282 -
                     C13657 * C277 + C7734 * C283 - C13707 * C278) *
                        C15261 +
                    (C15130 * C844 - C13661 * C838 + C15138 * C846 -
                     C13657 * C839 + C7734 * C848 - C13707 * C840) *
                        C14061 +
                    (C15130 * C1147 - C13661 * C1141 + C15138 * C1148 -
                     C13657 * C1142 + C7734 * C1149 - C13707 * C1143) *
                        C15268 +
                    (C15130 * C850 - C13661 * C841 + C15138 * C852 -
                     C13657 * C842 + C7734 * C854 - C13707 * C843) *
                        C14072 +
                    (C15130 * C1150 - C13661 * C1144 + C15138 * C1151 -
                     C13657 * C1145 + C7734 * C1152 - C13707 * C1146) *
                        C10524) *
                   C15167 * C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eezy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C14064 +
                     (C15167 * C308 - C123 * C276) * C15261 +
                     (C15167 * C900 - C123 * C838) * C14061 +
                     (C15167 * C1191 - C123 * C1141) * C15268 +
                     (C15167 * C903 - C123 * C841) * C14072 +
                     (C15167 * C1192 - C123 * C1144) * C10524) *
                        C15130 +
                    ((C15167 * C125 - C123 * C82) * C14064 +
                     (C15167 * C309 - C123 * C277) * C15261 +
                     (C15167 * C901 - C123 * C839) * C14061 +
                     (C15167 * C1193 - C123 * C1142) * C15268 +
                     (C15167 * C904 - C123 * C842) * C14072 +
                     (C15167 * C1194 - C123 * C1145) * C10524) *
                        C15138 +
                    ((C15167 * C126 - C123 * C83) * C14064 +
                     (C15167 * C310 - C123 * C278) * C15261 +
                     (C15167 * C902 - C123 * C840) * C14061 +
                     (C15167 * C1195 - C123 * C1143) * C15268 +
                     (C15167 * C905 - C123 * C843) * C14072 +
                     (C15167 * C1196 - C123 * C1146) * C10524) *
                        C7734) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eezz[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((C14064 * C157 - C14116 * C81 - C14064 * C276 + C15261 * C336 +
           C14061 * C953 - C14109 * C838 - C14061 * C1141 + C15268 * C1238 +
           C14072 * C954 - C10834 * C841 - C14072 * C1144 + C10524 * C1239) *
              C15167 * C15130 +
          (C14064 * C158 - C14116 * C82 - C14064 * C277 + C15261 * C337 +
           C14061 * C955 - C14109 * C839 - C14061 * C1142 + C15268 * C1240 +
           C14072 * C956 - C10834 * C842 - C14072 * C1145 + C10524 * C1241) *
              C15167 * C15138 +
          (C14064 * C159 - C14116 * C83 - C14064 * C278 + C15261 * C338 +
           C14061 * C957 - C14109 * C840 - C14061 * C1143 + C15268 * C1242 +
           C14072 * C958 - C10834 * C843 - C14072 * C1146 + C10524 * C1243) *
              C15167 * C7734) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6636 * C86 - C6637 * C81 - C6636 * C87 + C15510 * C96 +
           C6638 * C88 - C6639 * C82 - C6638 * C89 + C15503 * C97 +
           C6640 * C90 - C6641 * C83 - C6640 * C91 + C15490 * C98 +
           C6642 * C92 - C6643 * C84 - C6642 * C93 + C15445 * C99) *
              C8988 +
          (C6636 * C844 - C6637 * C838 - C6636 * C845 + C15510 * C856 +
           C6638 * C846 - C6639 * C839 - C6638 * C847 + C15503 * C857 +
           C6640 * C848 - C6641 * C840 - C6640 * C849 + C15490 * C858 +
           C6642 * C1621 - C6643 * C1620 - C6642 * C1622 + C15445 * C1623) *
              C15265) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6960 * C86 - C6961 * C81 - C6960 * C87 + C6954 * C96 +
            C6962 * C88 - C6963 * C82 - C6962 * C89 + C15135 * C97) *
               C8988 +
           (C6960 * C844 - C6961 * C838 - C6960 * C845 + C6954 * C856 +
            C6962 * C846 - C6963 * C839 - C6962 * C847 + C15135 * C857) *
               C15265) *
              C15504 +
          ((C6960 * C397 - C6961 * C391 - C6960 * C398 + C6954 * C409 +
            C6962 * C399 - C6963 * C392 - C6962 * C400 + C15135 * C410) *
               C8988 +
           (C6960 * C1965 - C6961 * C1962 - C6960 * C1966 + C6954 * C1971 +
            C6962 * C1967 - C6963 * C1963 - C6962 * C1968 + C15135 * C1972) *
               C15265) *
              C15492 +
          ((C6960 * C403 - C6961 * C394 - C6960 * C404 + C6954 * C412 +
            C6962 * C405 - C6963 * C395 - C6962 * C406 + C15135 * C413) *
               C8988 +
           (C6960 * C3061 - C6961 * C3057 - C6960 * C3062 + C6954 * C3066 +
            C6962 * C3799 - C6963 * C3798 - C6962 * C3800 + C15135 * C3801) *
               C15265) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C6636 +
                     (C15167 * C129 - C123 * C87) * C15510 +
                     (C15167 * C125 - C123 * C82) * C6638 +
                     (C15167 * C130 - C123 * C89) * C15503 +
                     (C15167 * C126 - C123 * C83) * C6640 +
                     (C15167 * C131 - C123 * C91) * C15490 +
                     (C15167 * C127 - C123 * C84) * C6642 +
                     (C15167 * C132 - C123 * C93) * C15445) *
                        C8988 +
                    ((C15167 * C900 - C123 * C838) * C6636 +
                     (C15167 * C906 - C123 * C845) * C15510 +
                     (C15167 * C901 - C123 * C839) * C6638 +
                     (C15167 * C907 - C123 * C847) * C15503 +
                     (C15167 * C902 - C123 * C840) * C6640 +
                     (C15167 * C908 - C123 * C849) * C15490 +
                     (C15167 * C1658 - C123 * C1620) * C6642 +
                     (C15167 * C1659 - C123 * C1622) * C15445) *
                        C15265) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                      C15472 * C457 - C455 * C394) *
                         C6960 +
                     (C15504 * C129 - C453 * C87 + C15492 * C462 - C454 * C398 +
                      C15472 * C463 - C455 * C404) *
                         C6954 +
                     (C15504 * C125 - C453 * C82 + C15492 * C458 - C454 * C392 +
                      C15472 * C459 - C455 * C395) *
                         C6962 +
                     (C15504 * C130 - C453 * C89 + C15492 * C464 - C454 * C400 +
                      C15472 * C465 - C455 * C406) *
                         C15135) *
                        C8988 +
                    ((C15504 * C900 - C453 * C838 + C15492 * C2024 -
                      C454 * C1962 + C15472 * C3106 - C455 * C3057) *
                         C6960 +
                     (C15504 * C906 - C453 * C845 + C15492 * C2027 -
                      C454 * C1966 + C15472 * C3109 - C455 * C3062) *
                         C6954 +
                     (C15504 * C901 - C453 * C839 + C15492 * C2025 -
                      C454 * C1963 + C15472 * C3852 - C455 * C3798) *
                         C6962 +
                     (C15504 * C907 - C453 * C847 + C15492 * C2028 -
                      C454 * C1968 + C15472 * C3853 - C455 * C3800) *
                         C15135) *
                        C15265) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C6636 +
          (C8988 * C162 - C9058 * C87 + C15265 * C959 - C9059 * C845) * C15510 +
          (C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) * C6638 +
          (C8988 * C163 - C9058 * C89 + C15265 * C961 - C9059 * C847) * C15503 +
          (C8988 * C159 - C9058 * C83 + C15265 * C957 - C9059 * C840) * C6640 +
          (C8988 * C164 - C9058 * C91 + C15265 * C963 - C9059 * C849) * C15490 +
          (C8988 * C160 - C9058 * C84 + C15265 * C1696 - C9059 * C1620) *
              C6642 +
          (C8988 * C165 - C9058 * C93 + C15265 * C1697 - C9059 * C1622) *
              C15445) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C6960 +
           (C8988 * C162 - C9058 * C87 + C15265 * C959 - C9059 * C845) * C6954 +
           (C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) * C6962 +
           (C8988 * C163 - C9058 * C89 + C15265 * C961 - C9059 * C847) *
               C15135) *
              C15504 +
          ((C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C6960 +
           (C8988 * C512 - C9058 * C398 + C15265 * C2083 - C9059 * C1966) *
               C6954 +
           (C8988 * C507 - C9058 * C392 + C15265 * C2081 - C9059 * C1963) *
               C6962 +
           (C8988 * C513 - C9058 * C400 + C15265 * C2084 - C9059 * C1968) *
               C15135) *
              C15492 +
          ((C8988 * C509 - C9058 * C394 + C15265 * C3151 - C9059 * C3057) *
               C6960 +
           (C8988 * C515 - C9058 * C404 + C15265 * C3154 - C9059 * C3062) *
               C6954 +
           (C8988 * C510 - C9058 * C395 + C15265 * C3904 - C9059 * C3798) *
               C6962 +
           (C8988 * C516 - C9058 * C406 + C15265 * C3905 - C9059 * C3800) *
               C15135) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15510 * C86 - C6636 * C81 + C15503 * C88 - C6638 * C82 +
            C15490 * C90 - C6640 * C83 + C15445 * C92 - C6642 * C84) *
               C123 +
           (C15510 * C194 - C6636 * C189 + C15503 * C195 - C6638 * C190 +
            C15490 * C196 - C6640 * C191 + C15445 * C197 - C6642 * C192) *
               C15167) *
              C8988 +
          ((C15510 * C844 - C6636 * C838 + C15503 * C846 - C6638 * C839 +
            C15490 * C848 - C6640 * C840 + C15445 * C1621 - C6642 * C1620) *
               C123 +
           (C15510 * C1009 - C6636 * C1003 + C15503 * C1010 - C6638 * C1004 +
            C15490 * C1011 - C6640 * C1005 + C15445 * C1733 - C6642 * C1732) *
               C15167) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C453 +
           (C6954 * C194 - C6960 * C189 + C15135 * C195 - C6962 * C190) *
               C15504 +
           (C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) * C454 +
           (C6954 * C562 - C6960 * C556 + C15135 * C563 - C6962 * C557) *
               C15492 +
           (C6954 * C403 - C6960 * C394 + C15135 * C405 - C6962 * C395) * C455 +
           (C6954 * C565 - C6960 * C559 + C15135 * C566 - C6962 * C560) *
               C15472) *
              C8988 +
          ((C6954 * C844 - C6960 * C838 + C15135 * C846 - C6962 * C839) * C453 +
           (C6954 * C1009 - C6960 * C1003 + C15135 * C1010 - C6962 * C1004) *
               C15504 +
           (C6954 * C1965 - C6960 * C1962 + C15135 * C1967 - C6962 * C1963) *
               C454 +
           (C6954 * C2139 - C6960 * C2136 + C15135 * C2140 - C6962 * C2137) *
               C15492 +
           (C6954 * C3061 - C6960 * C3057 + C15135 * C3799 - C6962 * C3798) *
               C455 +
           (C6954 * C3197 - C6960 * C3194 + C15135 * C3957 - C6962 * C3956) *
               C15472) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C15510 +
           (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C15503 +
           (C123 * C126 - C221 * C83 - C123 * C191 + C15167 * C224) * C15490 +
           (C123 * C127 - C221 * C84 - C123 * C192 + C15167 * C225) * C15445) *
              C8988 +
          ((C123 * C900 - C221 * C838 - C123 * C1003 + C15167 * C1053) *
               C15510 +
           (C123 * C901 - C221 * C839 - C123 * C1004 + C15167 * C1054) *
               C15503 +
           (C123 * C902 - C221 * C840 - C123 * C1005 + C15167 * C1055) *
               C15490 +
           (C123 * C1658 - C221 * C1620 - C123 * C1732 + C15167 * C1768) *
               C15445) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C453 * C124 - C606 * C81 - C453 * C189 + C15504 * C222 +
            C454 * C456 - C607 * C391 - C454 * C556 + C15492 * C609 +
            C455 * C457 - C608 * C394 - C455 * C559 + C15472 * C610) *
               C6954 +
           (C453 * C125 - C606 * C82 - C453 * C190 + C15504 * C223 +
            C454 * C458 - C607 * C392 - C454 * C557 + C15492 * C611 +
            C455 * C459 - C608 * C395 - C455 * C560 + C15472 * C612) *
               C15135) *
              C8988 +
          ((C453 * C900 - C606 * C838 - C453 * C1003 + C15504 * C1053 +
            C454 * C2024 - C607 * C1962 - C454 * C2136 + C15492 * C2192 +
            C455 * C3106 - C608 * C3057 - C455 * C3194 + C15472 * C3238) *
               C6954 +
           (C453 * C901 - C606 * C839 - C453 * C1004 + C15504 * C1054 +
            C454 * C2025 - C607 * C1963 - C454 * C2137 + C15492 * C2193 +
            C455 * C3852 - C608 * C3798 - C455 * C3956 + C15472 * C4008) *
               C15135) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C123 +
           (C8988 * C249 - C9058 * C189 + C15265 * C1097 - C9059 * C1003) *
               C15167) *
              C15510 +
          ((C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) * C123 +
           (C8988 * C250 - C9058 * C190 + C15265 * C1099 - C9059 * C1004) *
               C15167) *
              C15503 +
          ((C8988 * C159 - C9058 * C83 + C15265 * C957 - C9059 * C840) * C123 +
           (C8988 * C251 - C9058 * C191 + C15265 * C1101 - C9059 * C1005) *
               C15167) *
              C15490 +
          ((C8988 * C160 - C9058 * C84 + C15265 * C1696 - C9059 * C1620) *
               C123 +
           (C8988 * C252 - C9058 * C192 + C15265 * C1803 - C9059 * C1732) *
               C15167) *
              C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8988 * C157 - C9058 * C81 + C15265 * C953 - C9059 * C838) * C453 +
           (C8988 * C249 - C9058 * C189 + C15265 * C1097 - C9059 * C1003) *
               C15504 +
           (C8988 * C506 - C9058 * C391 + C15265 * C2080 - C9059 * C1962) *
               C454 +
           (C8988 * C653 - C9058 * C556 + C15265 * C2245 - C9059 * C2136) *
               C15492 +
           (C8988 * C509 - C9058 * C394 + C15265 * C3151 - C9059 * C3057) *
               C455 +
           (C8988 * C654 - C9058 * C559 + C15265 * C3280 - C9059 * C3194) *
               C15472) *
              C6954 +
          ((C8988 * C158 - C9058 * C82 + C15265 * C955 - C9059 * C839) * C453 +
           (C8988 * C250 - C9058 * C190 + C15265 * C1099 - C9059 * C1004) *
               C15504 +
           (C8988 * C507 - C9058 * C392 + C15265 * C2081 - C9059 * C1963) *
               C454 +
           (C8988 * C655 - C9058 * C557 + C15265 * C2246 - C9059 * C2137) *
               C15492 +
           (C8988 * C510 - C9058 * C395 + C15265 * C3904 - C9059 * C3798) *
               C455 +
           (C8988 * C656 - C9058 * C560 + C15265 * C4059 - C9059 * C3956) *
               C15472) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C15510 * C86 - C6636 * C81 + C15503 * C88 - C6638 * C82 +
           C15490 * C90 - C6640 * C83 + C15445 * C92 - C6642 * C84) *
              C9058 +
          (C15510 * C281 - C6636 * C276 + C15503 * C282 - C6638 * C277 +
           C15490 * C283 - C6640 * C278 + C15445 * C284 - C6642 * C279) *
              C8988 +
          (C15510 * C844 - C6636 * C838 + C15503 * C846 - C6638 * C839 +
           C15490 * C848 - C6640 * C840 + C15445 * C1621 - C6642 * C1620) *
              C9059 +
          (C15510 * C1147 - C6636 * C1141 + C15503 * C1148 - C6638 * C1142 +
           C15490 * C1149 - C6640 * C1143 + C15445 * C1839 - C6642 * C1838) *
              C15265) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6954 * C86 - C6960 * C81 + C15135 * C88 - C6962 * C82) * C9058 +
           (C6954 * C281 - C6960 * C276 + C15135 * C282 - C6962 * C277) *
               C8988 +
           (C6954 * C844 - C6960 * C838 + C15135 * C846 - C6962 * C839) *
               C9059 +
           (C6954 * C1147 - C6960 * C1141 + C15135 * C1148 - C6962 * C1142) *
               C15265) *
              C15504 +
          ((C6954 * C397 - C6960 * C391 + C15135 * C399 - C6962 * C392) *
               C9058 +
           (C6954 * C703 - C6960 * C697 + C15135 * C704 - C6962 * C698) *
               C8988 +
           (C6954 * C1965 - C6960 * C1962 + C15135 * C1967 - C6962 * C1963) *
               C9059 +
           (C6954 * C2301 - C6960 * C2298 + C15135 * C2302 - C6962 * C2299) *
               C15265) *
              C15492 +
          ((C6954 * C403 - C6960 * C394 + C15135 * C405 - C6962 * C395) *
               C9058 +
           (C6954 * C706 - C6960 * C700 + C15135 * C707 - C6962 * C701) *
               C8988 +
           (C6954 * C3061 - C6960 * C3057 + C15135 * C3799 - C6962 * C3798) *
               C9059 +
           (C6954 * C3324 - C6960 * C3321 + C15135 * C4111 - C6962 * C4110) *
               C15265) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C9058 +
                     (C15167 * C308 - C123 * C276) * C8988 +
                     (C15167 * C900 - C123 * C838) * C9059 +
                     (C15167 * C1191 - C123 * C1141) * C15265) *
                        C15510 +
                    ((C15167 * C125 - C123 * C82) * C9058 +
                     (C15167 * C309 - C123 * C277) * C8988 +
                     (C15167 * C901 - C123 * C839) * C9059 +
                     (C15167 * C1193 - C123 * C1142) * C15265) *
                        C15503 +
                    ((C15167 * C126 - C123 * C83) * C9058 +
                     (C15167 * C310 - C123 * C278) * C8988 +
                     (C15167 * C902 - C123 * C840) * C9059 +
                     (C15167 * C1195 - C123 * C1143) * C15265) *
                        C15490 +
                    ((C15167 * C127 - C123 * C84) * C9058 +
                     (C15167 * C311 - C123 * C279) * C8988 +
                     (C15167 * C1658 - C123 * C1620) * C9059 +
                     (C15167 * C1874 - C123 * C1838) * C15265) *
                        C15445) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                      C15472 * C457 - C455 * C394) *
                         C9058 +
                     (C15504 * C308 - C453 * C276 + C15492 * C747 -
                      C454 * C697 + C15472 * C748 - C455 * C700) *
                         C8988 +
                     (C15504 * C900 - C453 * C838 + C15492 * C2024 -
                      C454 * C1962 + C15472 * C3106 - C455 * C3057) *
                         C9059 +
                     (C15504 * C1191 - C453 * C1141 + C15492 * C2354 -
                      C454 * C2298 + C15472 * C3364 - C455 * C3321) *
                         C15265) *
                        C6954 +
                    ((C15504 * C125 - C453 * C82 + C15492 * C458 - C454 * C392 +
                      C15472 * C459 - C455 * C395) *
                         C9058 +
                     (C15504 * C309 - C453 * C277 + C15492 * C749 -
                      C454 * C698 + C15472 * C750 - C455 * C701) *
                         C8988 +
                     (C15504 * C901 - C453 * C839 + C15492 * C2025 -
                      C454 * C1963 + C15472 * C3852 - C455 * C3798) *
                         C9059 +
                     (C15504 * C1193 - C453 * C1142 + C15492 * C2355 -
                      C454 * C2299 + C15472 * C4162 - C455 * C4110) *
                         C15265) *
                        C15135) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C9058 * C157 - C9264 * C81 - C9058 * C276 + C8988 * C336 +
           C9059 * C953 - C9265 * C838 - C9059 * C1141 + C15265 * C1238) *
              C15167 * C15510 +
          (C9058 * C158 - C9264 * C82 - C9058 * C277 + C8988 * C337 +
           C9059 * C955 - C9265 * C839 - C9059 * C1142 + C15265 * C1240) *
              C15167 * C15503 +
          (C9058 * C159 - C9264 * C83 - C9058 * C278 + C8988 * C338 +
           C9059 * C957 - C9265 * C840 - C9059 * C1143 + C15265 * C1242) *
              C15167 * C15490 +
          (C9058 * C160 - C9264 * C84 - C9058 * C279 + C8988 * C339 +
           C9059 * C1696 - C9265 * C1620 - C9059 * C1838 + C15265 * C1911) *
              C15167 * C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C9058 * C157 - C9264 * C81 - C9058 * C276 + C8988 * C336 +
            C9059 * C953 - C9265 * C838 - C9059 * C1141 + C15265 * C1238) *
               C15504 +
           (C9058 * C506 - C9264 * C391 - C9058 * C697 + C8988 * C791 +
            C9059 * C2080 - C9265 * C1962 - C9059 * C2298 + C15265 * C2407) *
               C15492 +
           (C9058 * C509 - C9264 * C394 - C9058 * C700 + C8988 * C792 +
            C9059 * C3151 - C9265 * C3057 - C9059 * C3321 + C15265 * C3406) *
               C15472) *
              C6954 +
          ((C9058 * C158 - C9264 * C82 - C9058 * C277 + C8988 * C337 +
            C9059 * C955 - C9265 * C839 - C9059 * C1142 + C15265 * C1240) *
               C15504 +
           (C9058 * C507 - C9264 * C392 - C9058 * C698 + C8988 * C793 +
            C9059 * C2081 - C9265 * C1963 - C9059 * C2299 + C15265 * C2408) *
               C15492 +
           (C9058 * C510 - C9264 * C395 - C9058 * C701 + C8988 * C794 +
            C9059 * C3904 - C9265 * C3798 - C9059 * C4110 + C15265 * C4213) *
               C15472) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1284 * C86 - C1285 * C81 - C1284 * C87 + C1278 * C96 + C1286 * C88 -
           C1287 * C82 - C1286 * C89 + C1279 * C97 + C1288 * C90 - C1289 * C83 -
           C1288 * C91 + C1280 * C98 + C1290 * C92 - C1291 * C84 - C1290 * C93 +
           C15445 * C99) *
              C15178 * C15446 +
          (C1284 * C397 - C1285 * C391 - C1284 * C398 + C1278 * C409 +
           C1286 * C399 - C1287 * C392 - C1286 * C400 + C1279 * C410 +
           C1288 * C401 - C1289 * C393 - C1288 * C402 + C1280 * C411 +
           C1290 * C1293 - C1291 * C1292 - C1290 * C1294 + C15445 * C1295) *
              C15178 * C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C13651 * C86 - C3449 * C81 - C13651 * C87 + C15430 * C96 +
           C13632 * C88 - C3451 * C82 - C13632 * C89 + C15135 * C97) *
              C15178 * C3444 +
          (C13651 * C397 - C3449 * C391 - C13651 * C398 + C15430 * C409 +
           C13632 * C399 - C3451 * C392 - C13632 * C400 + C15135 * C410) *
              C15178 * C3445 +
          (C13651 * C403 - C3449 * C394 - C13651 * C404 + C15430 * C412 +
           C13632 * C405 - C3451 * C395 - C13632 * C406 + C15135 * C413) *
              C15178 * C3446 +
          (C13651 * C2802 - C3449 * C2800 - C13651 * C2803 + C15430 * C2806 +
           C13632 * C3453 - C3451 * C3452 - C13632 * C3454 + C15135 * C3455) *
              C15178 * C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) * C1284 +
          (C15446 * C129 - C1330 * C87 + C15225 * C462 - C1331 * C398) * C1278 +
          (C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) * C1286 +
          (C15446 * C130 - C1330 * C89 + C15225 * C464 - C1331 * C400) * C1279 +
          (C15446 * C126 - C1330 * C83 + C15225 * C460 - C1331 * C393) * C1288 +
          (C15446 * C131 - C1330 * C91 + C15225 * C466 - C1331 * C402) * C1280 +
          (C15446 * C127 - C1330 * C84 + C15225 * C1332 - C1331 * C1292) *
              C1290 +
          (C15446 * C132 - C1330 * C93 + C15225 * C1333 - C1331 * C1294) *
              C15445) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C3444 * C124 - C3490 * C81 + C3445 * C456 - C3491 * C391 +
           C3446 * C457 - C3492 * C394 + C15454 * C2835 - C3493 * C2800) *
              C13651 +
          (C3444 * C129 - C3490 * C87 + C3445 * C462 - C3491 * C398 +
           C3446 * C463 - C3492 * C404 + C15454 * C2837 - C3493 * C2803) *
              C15430 +
          (C3444 * C125 - C3490 * C82 + C3445 * C458 - C3491 * C392 +
           C3446 * C459 - C3492 * C395 + C15454 * C3494 - C3493 * C3452) *
              C13632 +
          (C3444 * C130 - C3490 * C89 + C3445 * C464 - C3491 * C400 +
           C3446 * C465 - C3492 * C406 + C15454 * C3495 - C3493 * C3454) *
              C15135) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C1284 +
                     (C15178 * C162 - C156 * C87) * C1278 +
                     (C15178 * C158 - C156 * C82) * C1286 +
                     (C15178 * C163 - C156 * C89) * C1279 +
                     (C15178 * C159 - C156 * C83) * C1288 +
                     (C15178 * C164 - C156 * C91) * C1280 +
                     (C15178 * C160 - C156 * C84) * C1290 +
                     (C15178 * C165 - C156 * C93) * C15445) *
                        C15446 +
                    ((C15178 * C506 - C156 * C391) * C1284 +
                     (C15178 * C512 - C156 * C398) * C1278 +
                     (C15178 * C507 - C156 * C392) * C1286 +
                     (C15178 * C513 - C156 * C400) * C1279 +
                     (C15178 * C508 - C156 * C393) * C1288 +
                     (C15178 * C514 - C156 * C402) * C1280 +
                     (C15178 * C1368 - C156 * C1292) * C1290 +
                     (C15178 * C1369 - C156 * C1294) * C15445) *
                        C15225) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C13651 +
                     (C15178 * C162 - C156 * C87) * C15430 +
                     (C15178 * C158 - C156 * C82) * C13632 +
                     (C15178 * C163 - C156 * C89) * C15135) *
                        C3444 +
                    ((C15178 * C506 - C156 * C391) * C13651 +
                     (C15178 * C512 - C156 * C398) * C15430 +
                     (C15178 * C507 - C156 * C392) * C13632 +
                     (C15178 * C513 - C156 * C400) * C15135) *
                        C3445 +
                    ((C15178 * C509 - C156 * C394) * C13651 +
                     (C15178 * C515 - C156 * C404) * C15430 +
                     (C15178 * C510 - C156 * C395) * C13632 +
                     (C15178 * C516 - C156 * C406) * C15135) *
                        C3446 +
                    ((C15178 * C2861 - C156 * C2800) * C13651 +
                     (C15178 * C2863 - C156 * C2803) * C15430 +
                     (C15178 * C3530 - C156 * C3452) * C13632 +
                     (C15178 * C3531 - C156 * C3454) * C15135) *
                        C15454) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1278 * C86 - C1284 * C81 + C1279 * C88 - C1286 * C82 + C1280 * C90 -
           C1288 * C83 + C15445 * C92 - C1290 * C84) *
              C1330 +
          (C1278 * C194 - C1284 * C189 + C1279 * C195 - C1286 * C190 +
           C1280 * C196 - C1288 * C191 + C15445 * C197 - C1290 * C192) *
              C15446 +
          (C1278 * C397 - C1284 * C391 + C1279 * C399 - C1286 * C392 +
           C1280 * C401 - C1288 * C393 + C15445 * C1293 - C1290 * C1292) *
              C1331 +
          (C1278 * C562 - C1284 * C556 + C1279 * C563 - C1286 * C557 +
           C1280 * C564 - C1288 * C558 + C15445 * C1405 - C1290 * C1404) *
              C15225) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C3490 +
          (C15430 * C194 - C13651 * C189 + C15135 * C195 - C13632 * C190) *
              C3444 +
          (C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
              C3491 +
          (C15430 * C562 - C13651 * C556 + C15135 * C563 - C13632 * C557) *
              C3445 +
          (C15430 * C403 - C13651 * C394 + C15135 * C405 - C13632 * C395) *
              C3492 +
          (C15430 * C565 - C13651 * C559 + C15135 * C566 - C13632 * C560) *
              C3446 +
          (C15430 * C2802 - C13651 * C2800 + C15135 * C3453 - C13632 * C3452) *
              C3493 +
          (C15430 * C2889 - C13651 * C2887 + C15135 * C3567 - C13632 * C3566) *
              C15454) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1330 * C124 - C1440 * C81 - C1330 * C189 + C15446 * C222 +
           C1331 * C456 - C1441 * C391 - C1331 * C556 + C15225 * C609) *
              C1278 +
          (C1330 * C125 - C1440 * C82 - C1330 * C190 + C15446 * C223 +
           C1331 * C458 - C1441 * C392 - C1331 * C557 + C15225 * C611) *
              C1279 +
          (C1330 * C126 - C1440 * C83 - C1330 * C191 + C15446 * C224 +
           C1331 * C460 - C1441 * C393 - C1331 * C558 + C15225 * C613) *
              C1280 +
          (C1330 * C127 - C1440 * C84 - C1330 * C192 + C15446 * C225 +
           C1331 * C1332 - C1441 * C1292 - C1331 * C1404 + C15225 * C1442) *
              C15445) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C3490 * C124 - C3602 * C81 - C3490 * C189 + C3444 * C222 +
           C3491 * C456 - C3603 * C391 - C3491 * C556 + C3445 * C609 +
           C3492 * C457 - C3604 * C394 - C3492 * C559 + C3446 * C610 +
           C3493 * C2835 - C3605 * C2800 - C3493 * C2887 + C15454 * C2918) *
              C15430 +
          (C3490 * C125 - C3602 * C82 - C3490 * C190 + C3444 * C223 +
           C3491 * C458 - C3603 * C392 - C3491 * C557 + C3445 * C611 +
           C3492 * C459 - C3604 * C395 - C3492 * C560 + C3446 * C612 +
           C3493 * C3494 - C3605 * C3452 - C3493 * C3566 + C15454 * C3606) *
              C15135) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C1330 +
                     (C15178 * C249 - C156 * C189) * C15446 +
                     (C15178 * C506 - C156 * C391) * C1331 +
                     (C15178 * C653 - C156 * C556) * C15225) *
                        C1278 +
                    ((C15178 * C158 - C156 * C82) * C1330 +
                     (C15178 * C250 - C156 * C190) * C15446 +
                     (C15178 * C507 - C156 * C392) * C1331 +
                     (C15178 * C655 - C156 * C557) * C15225) *
                        C1279 +
                    ((C15178 * C159 - C156 * C83) * C1330 +
                     (C15178 * C251 - C156 * C191) * C15446 +
                     (C15178 * C508 - C156 * C393) * C1331 +
                     (C15178 * C657 - C156 * C558) * C15225) *
                        C1280 +
                    ((C15178 * C160 - C156 * C84) * C1330 +
                     (C15178 * C252 - C156 * C192) * C15446 +
                     (C15178 * C1368 - C156 * C1292) * C1331 +
                     (C15178 * C1477 - C156 * C1404) * C15225) *
                        C15445) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C3490 +
                     (C15178 * C249 - C156 * C189) * C3444 +
                     (C15178 * C506 - C156 * C391) * C3491 +
                     (C15178 * C653 - C156 * C556) * C3445 +
                     (C15178 * C509 - C156 * C394) * C3492 +
                     (C15178 * C654 - C156 * C559) * C3446 +
                     (C15178 * C2861 - C156 * C2800) * C3493 +
                     (C15178 * C2942 - C156 * C2887) * C15454) *
                        C15430 +
                    ((C15178 * C158 - C156 * C82) * C3490 +
                     (C15178 * C250 - C156 * C190) * C3444 +
                     (C15178 * C507 - C156 * C392) * C3491 +
                     (C15178 * C655 - C156 * C557) * C3445 +
                     (C15178 * C510 - C156 * C395) * C3492 +
                     (C15178 * C656 - C156 * C560) * C3446 +
                     (C15178 * C3530 - C156 * C3452) * C3493 +
                     (C15178 * C3641 - C156 * C3566) * C15454) *
                        C15135) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1278 * C86 - C1284 * C81 + C1279 * C88 - C1286 * C82 +
            C1280 * C90 - C1288 * C83 + C15445 * C92 - C1290 * C84) *
               C156 +
           (C1278 * C281 - C1284 * C276 + C1279 * C282 - C1286 * C277 +
            C1280 * C283 - C1288 * C278 + C15445 * C284 - C1290 * C279) *
               C15178) *
              C15446 +
          ((C1278 * C397 - C1284 * C391 + C1279 * C399 - C1286 * C392 +
            C1280 * C401 - C1288 * C393 + C15445 * C1293 - C1290 * C1292) *
               C156 +
           (C1278 * C703 - C1284 * C697 + C1279 * C704 - C1286 * C698 +
            C1280 * C705 - C1288 * C699 + C15445 * C1513 - C1290 * C1512) *
               C15178) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C156 +
           (C15430 * C281 - C13651 * C276 + C15135 * C282 - C13632 * C277) *
               C15178) *
              C3444 +
          ((C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
               C156 +
           (C15430 * C703 - C13651 * C697 + C15135 * C704 - C13632 * C698) *
               C15178) *
              C3445 +
          ((C15430 * C403 - C13651 * C394 + C15135 * C405 - C13632 * C395) *
               C156 +
           (C15430 * C706 - C13651 * C700 + C15135 * C707 - C13632 * C701) *
               C15178) *
              C3446 +
          ((C15430 * C2802 - C13651 * C2800 + C15135 * C3453 - C13632 * C3452) *
               C156 +
           (C15430 * C2968 - C13651 * C2966 + C15135 * C3677 - C13632 * C3676) *
               C15178) *
              C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) * C156 +
           (C15446 * C308 - C1330 * C276 + C15225 * C747 - C1331 * C697) *
               C15178) *
              C1278 +
          ((C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) * C156 +
           (C15446 * C309 - C1330 * C277 + C15225 * C749 - C1331 * C698) *
               C15178) *
              C1279 +
          ((C15446 * C126 - C1330 * C83 + C15225 * C460 - C1331 * C393) * C156 +
           (C15446 * C310 - C1330 * C278 + C15225 * C751 - C1331 * C699) *
               C15178) *
              C1280 +
          ((C15446 * C127 - C1330 * C84 + C15225 * C1332 - C1331 * C1292) *
               C156 +
           (C15446 * C311 - C1330 * C279 + C15225 * C1548 - C1331 * C1512) *
               C15178) *
              C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3444 * C124 - C3490 * C81 + C3445 * C456 - C3491 * C391 +
            C3446 * C457 - C3492 * C394 + C15454 * C2835 - C3493 * C2800) *
               C156 +
           (C3444 * C308 - C3490 * C276 + C3445 * C747 - C3491 * C697 +
            C3446 * C748 - C3492 * C700 + C15454 * C2992 - C3493 * C2966) *
               C15178) *
              C15430 +
          ((C3444 * C125 - C3490 * C82 + C3445 * C458 - C3491 * C392 +
            C3446 * C459 - C3492 * C395 + C15454 * C3494 - C3493 * C3452) *
               C156 +
           (C3444 * C309 - C3490 * C277 + C3445 * C749 - C3491 * C698 +
            C3446 * C750 - C3492 * C701 + C15454 * C3712 - C3493 * C3676) *
               C15178) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C15446 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C15225) *
              C1278 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C15446 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C15225) *
              C1279 +
          ((C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C15446 +
           (C156 * C508 - C335 * C393 - C156 * C699 + C15178 * C795) * C15225) *
              C1280 +
          ((C156 * C160 - C335 * C84 - C156 * C279 + C15178 * C339) * C15446 +
           (C156 * C1368 - C335 * C1292 - C156 * C1512 + C15178 * C1583) *
               C15225) *
              C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C3444 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C3445 +
           (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C3446 +
           (C156 * C2861 - C335 * C2800 - C156 * C2966 + C15178 * C3016) *
               C15454) *
              C15430 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C3444 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C3445 +
           (C156 * C510 - C335 * C395 - C156 * C701 + C15178 * C794) * C3446 +
           (C156 * C3530 - C335 * C3452 - C156 * C3676 + C15178 * C3747) *
               C15454) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C385 * C86 - C386 * C81 - C385 * C87 + C379 * C96 + C387 * C88 -
            C388 * C82 - C387 * C89 + C380 * C97 + C389 * C90 - C390 * C83 -
            C389 * C91 + C15468 * C98) *
               C15447 +
           (C385 * C844 - C386 * C838 - C385 * C845 + C379 * C856 +
            C387 * C846 - C388 * C839 - C387 * C847 + C380 * C857 +
            C389 * C848 - C390 * C840 - C389 * C849 + C15468 * C858) *
               C15265) *
              C15446 +
          ((C385 * C397 - C386 * C391 - C385 * C398 + C379 * C409 +
            C387 * C399 - C388 * C392 - C387 * C400 + C380 * C410 +
            C389 * C401 - C390 * C393 - C389 * C402 + C15468 * C411) *
               C15447 +
           (C385 * C1965 - C386 * C1962 - C385 * C1966 + C379 * C1971 +
            C387 * C1967 - C388 * C1963 - C387 * C1968 + C380 * C1972 +
            C389 * C1969 - C390 * C1964 - C389 * C1970 + C15468 * C1973) *
               C15265) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C15447 +
           (C2798 * C844 - C2799 * C838 - C2798 * C845 + C15125 * C856) *
               C15265) *
              C3444 +
          ((C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
               C15447 +
           (C2798 * C1965 - C2799 * C1962 - C2798 * C1966 + C15125 * C1971) *
               C15265) *
              C3445 +
          ((C2798 * C403 - C2799 * C394 - C2798 * C404 + C15125 * C412) *
               C15447 +
           (C2798 * C3061 - C2799 * C3057 - C2798 * C3062 + C15125 * C3066) *
               C15265) *
              C3446 +
          ((C2798 * C2802 - C2799 * C2800 - C2798 * C2803 + C15125 * C2806) *
               C15447 +
           (C2798 * C4249 - C2799 * C4248 - C2798 * C4250 + C15125 * C4251) *
               C15265) *
              C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) * C385 +
           (C15446 * C129 - C1330 * C87 + C15225 * C462 - C1331 * C398) * C379 +
           (C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) * C387 +
           (C15446 * C130 - C1330 * C89 + C15225 * C464 - C1331 * C400) * C380 +
           (C15446 * C126 - C1330 * C83 + C15225 * C460 - C1331 * C393) * C389 +
           (C15446 * C131 - C1330 * C91 + C15225 * C466 - C1331 * C402) *
               C15468) *
              C15447 +
          ((C15446 * C900 - C1330 * C838 + C15225 * C2024 - C1331 * C1962) *
               C385 +
           (C15446 * C906 - C1330 * C845 + C15225 * C2027 - C1331 * C1966) *
               C379 +
           (C15446 * C901 - C1330 * C839 + C15225 * C2025 - C1331 * C1963) *
               C387 +
           (C15446 * C907 - C1330 * C847 + C15225 * C2028 - C1331 * C1968) *
               C380 +
           (C15446 * C902 - C1330 * C840 + C15225 * C2026 - C1331 * C1964) *
               C389 +
           (C15446 * C908 - C1330 * C849 + C15225 * C2029 - C1331 * C1970) *
               C15468) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3444 * C124 - C3490 * C81 + C3445 * C456 - C3491 * C391 +
            C3446 * C457 - C3492 * C394 + C15454 * C2835 - C3493 * C2800) *
               C2798 +
           (C3444 * C129 - C3490 * C87 + C3445 * C462 - C3491 * C398 +
            C3446 * C463 - C3492 * C404 + C15454 * C2837 - C3493 * C2803) *
               C15125) *
              C15447 +
          ((C3444 * C900 - C3490 * C838 + C3445 * C2024 - C3491 * C1962 +
            C3446 * C3106 - C3492 * C3057 + C15454 * C4286 - C3493 * C4248) *
               C2798 +
           (C3444 * C906 - C3490 * C845 + C3445 * C2027 - C3491 * C1966 +
            C3446 * C3109 - C3492 * C3062 + C15454 * C4287 - C3493 * C4250) *
               C15125) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) * C385 +
           (C15447 * C162 - C1694 * C87 + C15265 * C959 - C1695 * C845) * C379 +
           (C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) * C387 +
           (C15447 * C163 - C1694 * C89 + C15265 * C961 - C1695 * C847) * C380 +
           (C15447 * C159 - C1694 * C83 + C15265 * C957 - C1695 * C840) * C389 +
           (C15447 * C164 - C1694 * C91 + C15265 * C963 - C1695 * C849) *
               C15468) *
              C15446 +
          ((C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C385 +
           (C15447 * C512 - C1694 * C398 + C15265 * C2083 - C1695 * C1966) *
               C379 +
           (C15447 * C507 - C1694 * C392 + C15265 * C2081 - C1695 * C1963) *
               C387 +
           (C15447 * C513 - C1694 * C400 + C15265 * C2084 - C1695 * C1968) *
               C380 +
           (C15447 * C508 - C1694 * C393 + C15265 * C2082 - C1695 * C1964) *
               C389 +
           (C15447 * C514 - C1694 * C402 + C15265 * C2085 - C1695 * C1970) *
               C15468) *
              C15225) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) *
               C2798 +
           (C15447 * C162 - C1694 * C87 + C15265 * C959 - C1695 * C845) *
               C15125) *
              C3444 +
          ((C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C2798 +
           (C15447 * C512 - C1694 * C398 + C15265 * C2083 - C1695 * C1966) *
               C15125) *
              C3445 +
          ((C15447 * C509 - C1694 * C394 + C15265 * C3151 - C1695 * C3057) *
               C2798 +
           (C15447 * C515 - C1694 * C404 + C15265 * C3154 - C1695 * C3062) *
               C15125) *
              C3446 +
          ((C15447 * C2861 - C1694 * C2800 + C15265 * C4322 - C1695 * C4248) *
               C2798 +
           (C15447 * C2863 - C1694 * C2803 + C15265 * C4323 - C1695 * C4250) *
               C15125) *
              C15454) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 +
                      C15468 * C90 - C389 * C83) *
                         C1330 +
                     (C379 * C194 - C385 * C189 + C380 * C195 - C387 * C190 +
                      C15468 * C196 - C389 * C191) *
                         C15446 +
                     (C379 * C397 - C385 * C391 + C380 * C399 - C387 * C392 +
                      C15468 * C401 - C389 * C393) *
                         C1331 +
                     (C379 * C562 - C385 * C556 + C380 * C563 - C387 * C557 +
                      C15468 * C564 - C389 * C558) *
                         C15225) *
                        C15447 +
                    ((C379 * C844 - C385 * C838 + C380 * C846 - C387 * C839 +
                      C15468 * C848 - C389 * C840) *
                         C1330 +
                     (C379 * C1009 - C385 * C1003 + C380 * C1010 -
                      C387 * C1004 + C15468 * C1011 - C389 * C1005) *
                         C15446 +
                     (C379 * C1965 - C385 * C1962 + C380 * C1967 -
                      C387 * C1963 + C15468 * C1969 - C389 * C1964) *
                         C1331 +
                     (C379 * C2139 - C385 * C2136 + C380 * C2140 -
                      C387 * C2137 + C15468 * C2141 - C389 * C2138) *
                         C15225) *
                        C15265) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C15125 * C86 - C2798 * C81) * C3490 +
                     (C15125 * C194 - C2798 * C189) * C3444 +
                     (C15125 * C397 - C2798 * C391) * C3491 +
                     (C15125 * C562 - C2798 * C556) * C3445 +
                     (C15125 * C403 - C2798 * C394) * C3492 +
                     (C15125 * C565 - C2798 * C559) * C3446 +
                     (C15125 * C2802 - C2798 * C2800) * C3493 +
                     (C15125 * C2889 - C2798 * C2887) * C15454) *
                        C15447 +
                    ((C15125 * C844 - C2798 * C838) * C3490 +
                     (C15125 * C1009 - C2798 * C1003) * C3444 +
                     (C15125 * C1965 - C2798 * C1962) * C3491 +
                     (C15125 * C2139 - C2798 * C2136) * C3445 +
                     (C15125 * C3061 - C2798 * C3057) * C3492 +
                     (C15125 * C3197 - C2798 * C3194) * C3446 +
                     (C15125 * C4249 - C2798 * C4248) * C3493 +
                     (C15125 * C4359 - C2798 * C4358) * C15454) *
                        C15265) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1330 * C124 - C1440 * C81 - C1330 * C189 + C15446 * C222 +
            C1331 * C456 - C1441 * C391 - C1331 * C556 + C15225 * C609) *
               C379 +
           (C1330 * C125 - C1440 * C82 - C1330 * C190 + C15446 * C223 +
            C1331 * C458 - C1441 * C392 - C1331 * C557 + C15225 * C611) *
               C380 +
           (C1330 * C126 - C1440 * C83 - C1330 * C191 + C15446 * C224 +
            C1331 * C460 - C1441 * C393 - C1331 * C558 + C15225 * C613) *
               C15468) *
              C15447 +
          ((C1330 * C900 - C1440 * C838 - C1330 * C1003 + C15446 * C1053 +
            C1331 * C2024 - C1441 * C1962 - C1331 * C2136 + C15225 * C2192) *
               C379 +
           (C1330 * C901 - C1440 * C839 - C1330 * C1004 + C15446 * C1054 +
            C1331 * C2025 - C1441 * C1963 - C1331 * C2137 + C15225 * C2193) *
               C380 +
           (C1330 * C902 - C1440 * C840 - C1330 * C1005 + C15446 * C1055 +
            C1331 * C2026 - C1441 * C1964 - C1331 * C2138 + C15225 * C2194) *
               C15468) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C3490 * C124 - C3602 * C81 - C3490 * C189 + C3444 * C222 +
           C3491 * C456 - C3603 * C391 - C3491 * C556 + C3445 * C609 +
           C3492 * C457 - C3604 * C394 - C3492 * C559 + C3446 * C610 +
           C3493 * C2835 - C3605 * C2800 - C3493 * C2887 + C15454 * C2918) *
              C15125 * C15447 +
          (C3490 * C900 - C3602 * C838 - C3490 * C1003 + C3444 * C1053 +
           C3491 * C2024 - C3603 * C1962 - C3491 * C2136 + C3445 * C2192 +
           C3492 * C3106 - C3604 * C3057 - C3492 * C3194 + C3446 * C3238 +
           C3493 * C4286 - C3605 * C4248 - C3493 * C4358 + C15454 * C4394) *
              C15125 * C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) *
               C1330 +
           (C15447 * C249 - C1694 * C189 + C15265 * C1097 - C1695 * C1003) *
               C15446 +
           (C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C1331 +
           (C15447 * C653 - C1694 * C556 + C15265 * C2245 - C1695 * C2136) *
               C15225) *
              C379 +
          ((C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) *
               C1330 +
           (C15447 * C250 - C1694 * C190 + C15265 * C1099 - C1695 * C1004) *
               C15446 +
           (C15447 * C507 - C1694 * C392 + C15265 * C2081 - C1695 * C1963) *
               C1331 +
           (C15447 * C655 - C1694 * C557 + C15265 * C2246 - C1695 * C2137) *
               C15225) *
              C380 +
          ((C15447 * C159 - C1694 * C83 + C15265 * C957 - C1695 * C840) *
               C1330 +
           (C15447 * C251 - C1694 * C191 + C15265 * C1101 - C1695 * C1005) *
               C15446 +
           (C15447 * C508 - C1694 * C393 + C15265 * C2082 - C1695 * C1964) *
               C1331 +
           (C15447 * C657 - C1694 * C558 + C15265 * C2247 - C1695 * C2138) *
               C15225) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) * C3490 +
          (C15447 * C249 - C1694 * C189 + C15265 * C1097 - C1695 * C1003) *
              C3444 +
          (C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
              C3491 +
          (C15447 * C653 - C1694 * C556 + C15265 * C2245 - C1695 * C2136) *
              C3445 +
          (C15447 * C509 - C1694 * C394 + C15265 * C3151 - C1695 * C3057) *
              C3492 +
          (C15447 * C654 - C1694 * C559 + C15265 * C3280 - C1695 * C3194) *
              C3446 +
          (C15447 * C2861 - C1694 * C2800 + C15265 * C4322 - C1695 * C4248) *
              C3493 +
          (C15447 * C2942 - C1694 * C2887 + C15265 * C4429 - C1695 * C4358) *
              C15454) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 +
                      C15468 * C90 - C389 * C83) *
                         C1694 +
                     (C379 * C281 - C385 * C276 + C380 * C282 - C387 * C277 +
                      C15468 * C283 - C389 * C278) *
                         C15447 +
                     (C379 * C844 - C385 * C838 + C380 * C846 - C387 * C839 +
                      C15468 * C848 - C389 * C840) *
                         C1695 +
                     (C379 * C1147 - C385 * C1141 + C380 * C1148 -
                      C387 * C1142 + C15468 * C1149 - C389 * C1143) *
                         C15265) *
                        C15446 +
                    ((C379 * C397 - C385 * C391 + C380 * C399 - C387 * C392 +
                      C15468 * C401 - C389 * C393) *
                         C1694 +
                     (C379 * C703 - C385 * C697 + C380 * C704 - C387 * C698 +
                      C15468 * C705 - C389 * C699) *
                         C15447 +
                     (C379 * C1965 - C385 * C1962 + C380 * C1967 -
                      C387 * C1963 + C15468 * C1969 - C389 * C1964) *
                         C1695 +
                     (C379 * C2301 - C385 * C2298 + C380 * C2302 -
                      C387 * C2299 + C15468 * C2303 - C389 * C2300) *
                         C15265) *
                        C15225) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C15125 * C86 - C2798 * C81) * C1694 +
                     (C15125 * C281 - C2798 * C276) * C15447 +
                     (C15125 * C844 - C2798 * C838) * C1695 +
                     (C15125 * C1147 - C2798 * C1141) * C15265) *
                        C3444 +
                    ((C15125 * C397 - C2798 * C391) * C1694 +
                     (C15125 * C703 - C2798 * C697) * C15447 +
                     (C15125 * C1965 - C2798 * C1962) * C1695 +
                     (C15125 * C2301 - C2798 * C2298) * C15265) *
                        C3445 +
                    ((C15125 * C403 - C2798 * C394) * C1694 +
                     (C15125 * C706 - C2798 * C700) * C15447 +
                     (C15125 * C3061 - C2798 * C3057) * C1695 +
                     (C15125 * C3324 - C2798 * C3321) * C15265) *
                        C3446 +
                    ((C15125 * C2802 - C2798 * C2800) * C1694 +
                     (C15125 * C2968 - C2798 * C2966) * C15447 +
                     (C15125 * C4249 - C2798 * C4248) * C1695 +
                     (C15125 * C4465 - C2798 * C4464) * C15265) *
                        C15454) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15446 * C124 - C1330 * C81 + C15225 * C456 - C1331 * C391) *
               C1694 +
           (C15446 * C308 - C1330 * C276 + C15225 * C747 - C1331 * C697) *
               C15447 +
           (C15446 * C900 - C1330 * C838 + C15225 * C2024 - C1331 * C1962) *
               C1695 +
           (C15446 * C1191 - C1330 * C1141 + C15225 * C2354 - C1331 * C2298) *
               C15265) *
              C379 +
          ((C15446 * C125 - C1330 * C82 + C15225 * C458 - C1331 * C392) *
               C1694 +
           (C15446 * C309 - C1330 * C277 + C15225 * C749 - C1331 * C698) *
               C15447 +
           (C15446 * C901 - C1330 * C839 + C15225 * C2025 - C1331 * C1963) *
               C1695 +
           (C15446 * C1193 - C1330 * C1142 + C15225 * C2355 - C1331 * C2299) *
               C15265) *
              C380 +
          ((C15446 * C126 - C1330 * C83 + C15225 * C460 - C1331 * C393) *
               C1694 +
           (C15446 * C310 - C1330 * C278 + C15225 * C751 - C1331 * C699) *
               C15447 +
           (C15446 * C902 - C1330 * C840 + C15225 * C2026 - C1331 * C1964) *
               C1695 +
           (C15446 * C1195 - C1330 * C1143 + C15225 * C2356 - C1331 * C2300) *
               C15265) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C3444 * C124 - C3490 * C81 + C3445 * C456 - C3491 * C391 +
           C3446 * C457 - C3492 * C394 + C15454 * C2835 - C3493 * C2800) *
              C1694 +
          (C3444 * C308 - C3490 * C276 + C3445 * C747 - C3491 * C697 +
           C3446 * C748 - C3492 * C700 + C15454 * C2992 - C3493 * C2966) *
              C15447 +
          (C3444 * C900 - C3490 * C838 + C3445 * C2024 - C3491 * C1962 +
           C3446 * C3106 - C3492 * C3057 + C15454 * C4286 - C3493 * C4248) *
              C1695 +
          (C3444 * C1191 - C3490 * C1141 + C3445 * C2354 - C3491 * C2298 +
           C3446 * C3364 - C3492 * C3321 + C15454 * C4500 - C3493 * C4464) *
              C15265) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1694 * C157 - C1909 * C81 - C1694 * C276 + C15447 * C336 +
            C1695 * C953 - C1910 * C838 - C1695 * C1141 + C15265 * C1238) *
               C15446 +
           (C1694 * C506 - C1909 * C391 - C1694 * C697 + C15447 * C791 +
            C1695 * C2080 - C1910 * C1962 - C1695 * C2298 + C15265 * C2407) *
               C15225) *
              C379 +
          ((C1694 * C158 - C1909 * C82 - C1694 * C277 + C15447 * C337 +
            C1695 * C955 - C1910 * C839 - C1695 * C1142 + C15265 * C1240) *
               C15446 +
           (C1694 * C507 - C1909 * C392 - C1694 * C698 + C15447 * C793 +
            C1695 * C2081 - C1910 * C1963 - C1695 * C2299 + C15265 * C2408) *
               C15225) *
              C380 +
          ((C1694 * C159 - C1909 * C83 - C1694 * C278 + C15447 * C338 +
            C1695 * C957 - C1910 * C840 - C1695 * C1143 + C15265 * C1242) *
               C15446 +
           (C1694 * C508 - C1909 * C393 - C1694 * C699 + C15447 * C795 +
            C1695 * C2082 - C1910 * C1964 - C1695 * C2300 + C15265 * C2409) *
               C15225) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1694 * C157 - C1909 * C81 - C1694 * C276 + C15447 * C336 +
           C1695 * C953 - C1910 * C838 - C1695 * C1141 + C15265 * C1238) *
              C3444 +
          (C1694 * C506 - C1909 * C391 - C1694 * C697 + C15447 * C791 +
           C1695 * C2080 - C1910 * C1962 - C1695 * C2298 + C15265 * C2407) *
              C3445 +
          (C1694 * C509 - C1909 * C394 - C1694 * C700 + C15447 * C792 +
           C1695 * C3151 - C1910 * C3057 - C1695 * C3321 + C15265 * C3406) *
              C3446 +
          (C1694 * C2861 - C1909 * C2800 - C1694 * C2966 + C15447 * C3016 +
           C1695 * C4322 - C1910 * C4248 - C1695 * C4464 + C15265 * C4535) *
              C15454) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C385 * C86 - C386 * C81 - C385 * C87 + C379 * C96 + C387 * C88 -
           C388 * C82 - C387 * C89 + C380 * C97 + C389 * C90 - C390 * C83 -
           C389 * C91 + C15468 * C98) *
              C15178 * C15504 +
          (C385 * C397 - C386 * C391 - C385 * C398 + C379 * C409 + C387 * C399 -
           C388 * C392 - C387 * C400 + C380 * C410 + C389 * C401 - C390 * C393 -
           C389 * C402 + C15468 * C411) *
              C15178 * C15492 +
          (C385 * C403 - C386 * C394 - C385 * C404 + C379 * C412 + C387 * C405 -
           C388 * C395 - C387 * C406 + C380 * C413 + C389 * C407 - C390 * C396 -
           C389 * C408 + C15468 * C414) *
              C15178 * C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (C71 * C86 - C72 * C81 - C71 * C87 + C61 * C96 + C73 * C88 -
          C74 * C82 - C73 * C89 + C62 * C97 + C75 * C90 - C76 * C83 -
          C75 * C91 + C63 * C98 + C77 * C92 - C78 * C84 - C77 * C93 +
          C64 * C99 + C79 * C94 - C80 * C85 - C79 * C95 + C65 * C100) *
         C15178 * C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C385 * C86 - C386 * C81 - C385 * C87 + C379 * C96 + C387 * C88 -
           C388 * C82 - C387 * C89 + C380 * C97 + C389 * C90 - C390 * C83 -
           C389 * C91 + C15468 * C98) *
              C15505 +
          (C385 * C844 - C386 * C838 - C385 * C845 + C379 * C856 + C387 * C846 -
           C388 * C839 - C387 * C847 + C380 * C857 + C389 * C848 - C390 * C840 -
           C389 * C849 + C15468 * C858) *
              C15494 +
          (C385 * C850 - C386 * C841 - C385 * C851 + C379 * C859 + C387 * C852 -
           C388 * C842 - C387 * C853 + C380 * C860 + C389 * C854 - C390 * C843 -
           C389 * C855 + C15468 * C861) *
              C15475) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2454 * C86 - C2455 * C81 - C2454 * C87 + C15501 * C96 +
           C2456 * C88 - C2457 * C82 - C2456 * C89 + C15488 * C97 +
           C2458 * C90 - C2459 * C83 - C2458 * C91 + C15468 * C98) *
              C15178 * C2451 +
          (C2454 * C397 - C2455 * C391 - C2454 * C398 + C15501 * C409 +
           C2456 * C399 - C2457 * C392 - C2456 * C400 + C15488 * C410 +
           C2458 * C401 - C2459 * C393 - C2458 * C402 + C15468 * C411) *
              C15178 * C2452 +
          (C2454 * C403 - C2455 * C394 - C2454 * C404 + C15501 * C412 +
           C2456 * C405 - C2457 * C395 - C2456 * C406 + C15488 * C413 +
           C2458 * C407 - C2459 * C396 - C2458 * C408 + C15468 * C414) *
              C15178 * C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C15178 *
              C2793 +
          (C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
              C15178 * C2794 +
          (C2798 * C403 - C2799 * C394 - C2798 * C404 + C15125 * C412) *
              C15178 * C2795 +
          (C2798 * C2802 - C2799 * C2800 - C2798 * C2803 + C15125 * C2806) *
              C15178 * C2796 +
          (C2798 * C2804 - C2799 * C2801 - C2798 * C2805 + C15125 * C2807) *
              C15178 * C2797) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C15505 +
           (C2798 * C844 - C2799 * C838 - C2798 * C845 + C15125 * C856) *
               C15494 +
           (C2798 * C850 - C2799 * C841 - C2798 * C851 + C15125 * C859) *
               C15475) *
              C2451 +
          ((C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
               C15505 +
           (C2798 * C1965 - C2799 * C1962 - C2798 * C1966 + C15125 * C1971) *
               C15494 +
           (C2798 * C3059 - C2799 * C3056 - C2798 * C3060 + C15125 * C3065) *
               C15475) *
              C2452 +
          ((C2798 * C403 - C2799 * C394 - C2798 * C404 + C15125 * C412) *
               C15505 +
           (C2798 * C3061 - C2799 * C3057 - C2798 * C3062 + C15125 * C3066) *
               C15494 +
           (C2798 * C3063 - C2799 * C3058 - C2798 * C3064 + C15125 * C3067) *
               C15475) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                     C15472 * C457 - C455 * C394) *
                        C385 +
                    (C15504 * C129 - C453 * C87 + C15492 * C462 - C454 * C398 +
                     C15472 * C463 - C455 * C404) *
                        C379 +
                    (C15504 * C125 - C453 * C82 + C15492 * C458 - C454 * C392 +
                     C15472 * C459 - C455 * C395) *
                        C387 +
                    (C15504 * C130 - C453 * C89 + C15492 * C464 - C454 * C400 +
                     C15472 * C465 - C455 * C406) *
                        C380 +
                    (C15504 * C126 - C453 * C83 + C15492 * C460 - C454 * C393 +
                     C15472 * C461 - C455 * C396) *
                        C389 +
                    (C15504 * C131 - C453 * C91 + C15492 * C466 - C454 * C402 +
                     C15472 * C467 - C455 * C408) *
                        C15468) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C15167 * C124 - C123 * C81) * C71 +
                    (C15167 * C129 - C123 * C87) * C61 +
                    (C15167 * C125 - C123 * C82) * C73 +
                    (C15167 * C130 - C123 * C89) * C62 +
                    (C15167 * C126 - C123 * C83) * C75 +
                    (C15167 * C131 - C123 * C91) * C63 +
                    (C15167 * C127 - C123 * C84) * C77 +
                    (C15167 * C132 - C123 * C93) * C64 +
                    (C15167 * C128 - C123 * C85) * C79 +
                    (C15167 * C133 - C123 * C95) * C65) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C385 +
                     (C15167 * C129 - C123 * C87) * C379 +
                     (C15167 * C125 - C123 * C82) * C387 +
                     (C15167 * C130 - C123 * C89) * C380 +
                     (C15167 * C126 - C123 * C83) * C389 +
                     (C15167 * C131 - C123 * C91) * C15468) *
                        C15505 +
                    ((C15167 * C900 - C123 * C838) * C385 +
                     (C15167 * C906 - C123 * C845) * C379 +
                     (C15167 * C901 - C123 * C839) * C387 +
                     (C15167 * C907 - C123 * C847) * C380 +
                     (C15167 * C902 - C123 * C840) * C389 +
                     (C15167 * C908 - C123 * C849) * C15468) *
                        C15494 +
                    ((C15167 * C903 - C123 * C841) * C385 +
                     (C15167 * C909 - C123 * C851) * C379 +
                     (C15167 * C904 - C123 * C842) * C387 +
                     (C15167 * C910 - C123 * C853) * C380 +
                     (C15167 * C905 - C123 * C843) * C389 +
                     (C15167 * C911 - C123 * C855) * C15468) *
                        C15475) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                     C15472 * C457 - C2500 * C394) *
                        C2454 +
                    (C2451 * C129 - C2498 * C87 + C2452 * C462 - C2499 * C398 +
                     C15472 * C463 - C2500 * C404) *
                        C15501 +
                    (C2451 * C125 - C2498 * C82 + C2452 * C458 - C2499 * C392 +
                     C15472 * C459 - C2500 * C395) *
                        C2456 +
                    (C2451 * C130 - C2498 * C89 + C2452 * C464 - C2499 * C400 +
                     C15472 * C465 - C2500 * C406) *
                        C15488 +
                    (C2451 * C126 - C2498 * C83 + C2452 * C460 - C2499 * C393 +
                     C15472 * C461 - C2500 * C396) *
                        C2458 +
                    (C2451 * C131 - C2498 * C91 + C2452 * C466 - C2499 * C402 +
                     C15472 * C467 - C2500 * C408) *
                        C15468) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C2793 * C124 - C2830 * C81 + C2794 * C456 - C2831 * C391 +
                     C2795 * C457 - C2832 * C394 + C2796 * C2835 -
                     C2833 * C2800 + C2797 * C2836 - C2834 * C2801) *
                        C2798 +
                    (C2793 * C129 - C2830 * C87 + C2794 * C462 - C2831 * C398 +
                     C2795 * C463 - C2832 * C404 + C2796 * C2837 -
                     C2833 * C2803 + C2797 * C2838 - C2834 * C2805) *
                        C15125) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                      C15472 * C457 - C2500 * C394) *
                         C2798 +
                     (C2451 * C129 - C2498 * C87 + C2452 * C462 - C2499 * C398 +
                      C15472 * C463 - C2500 * C404) *
                         C15125) *
                        C15505 +
                    ((C2451 * C900 - C2498 * C838 + C2452 * C2024 -
                      C2499 * C1962 + C15472 * C3106 - C2500 * C3057) *
                         C2798 +
                     (C2451 * C906 - C2498 * C845 + C2452 * C2027 -
                      C2499 * C1966 + C15472 * C3109 - C2500 * C3062) *
                         C15125) *
                        C15494 +
                    ((C2451 * C903 - C2498 * C841 + C2452 * C3107 -
                      C2499 * C3056 + C15472 * C3108 - C2500 * C3058) *
                         C2798 +
                     (C2451 * C909 - C2498 * C851 + C2452 * C3110 -
                      C2499 * C3060 + C15472 * C3111 - C2500 * C3064) *
                         C15125) *
                        C15475) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C385 +
                     (C15178 * C162 - C156 * C87) * C379 +
                     (C15178 * C158 - C156 * C82) * C387 +
                     (C15178 * C163 - C156 * C89) * C380 +
                     (C15178 * C159 - C156 * C83) * C389 +
                     (C15178 * C164 - C156 * C91) * C15468) *
                        C15504 +
                    ((C15178 * C506 - C156 * C391) * C385 +
                     (C15178 * C512 - C156 * C398) * C379 +
                     (C15178 * C507 - C156 * C392) * C387 +
                     (C15178 * C513 - C156 * C400) * C380 +
                     (C15178 * C508 - C156 * C393) * C389 +
                     (C15178 * C514 - C156 * C402) * C15468) *
                        C15492 +
                    ((C15178 * C509 - C156 * C394) * C385 +
                     (C15178 * C515 - C156 * C404) * C379 +
                     (C15178 * C510 - C156 * C395) * C387 +
                     (C15178 * C516 - C156 * C406) * C380 +
                     (C15178 * C511 - C156 * C396) * C389 +
                     (C15178 * C517 - C156 * C408) * C15468) *
                        C15472) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C15178 * C157 - C156 * C81) * C71 +
                    (C15178 * C162 - C156 * C87) * C61 +
                    (C15178 * C158 - C156 * C82) * C73 +
                    (C15178 * C163 - C156 * C89) * C62 +
                    (C15178 * C159 - C156 * C83) * C75 +
                    (C15178 * C164 - C156 * C91) * C63 +
                    (C15178 * C160 - C156 * C84) * C77 +
                    (C15178 * C165 - C156 * C93) * C64 +
                    (C15178 * C161 - C156 * C85) * C79 +
                    (C15178 * C166 - C156 * C95) * C65) *
                   C15167 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C15505 * C157 - C950 * C81 + C15494 * C953 - C951 * C838 +
                     C15475 * C954 - C952 * C841) *
                        C385 +
                    (C15505 * C162 - C950 * C87 + C15494 * C959 - C951 * C845 +
                     C15475 * C960 - C952 * C851) *
                        C379 +
                    (C15505 * C158 - C950 * C82 + C15494 * C955 - C951 * C839 +
                     C15475 * C956 - C952 * C842) *
                        C387 +
                    (C15505 * C163 - C950 * C89 + C15494 * C961 - C951 * C847 +
                     C15475 * C962 - C952 * C853) *
                        C380 +
                    (C15505 * C159 - C950 * C83 + C15494 * C957 - C951 * C840 +
                     C15475 * C958 - C952 * C843) *
                        C389 +
                    (C15505 * C164 - C950 * C91 + C15494 * C963 - C951 * C849 +
                     C15475 * C964 - C952 * C855) *
                        C15468) *
                   C15167 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C2454 +
                     (C15178 * C162 - C156 * C87) * C15501 +
                     (C15178 * C158 - C156 * C82) * C2456 +
                     (C15178 * C163 - C156 * C89) * C15488 +
                     (C15178 * C159 - C156 * C83) * C2458 +
                     (C15178 * C164 - C156 * C91) * C15468) *
                        C2451 +
                    ((C15178 * C506 - C156 * C391) * C2454 +
                     (C15178 * C512 - C156 * C398) * C15501 +
                     (C15178 * C507 - C156 * C392) * C2456 +
                     (C15178 * C513 - C156 * C400) * C15488 +
                     (C15178 * C508 - C156 * C393) * C2458 +
                     (C15178 * C514 - C156 * C402) * C15468) *
                        C2452 +
                    ((C15178 * C509 - C156 * C394) * C2454 +
                     (C15178 * C515 - C156 * C404) * C15501 +
                     (C15178 * C510 - C156 * C395) * C2456 +
                     (C15178 * C516 - C156 * C406) * C15488 +
                     (C15178 * C511 - C156 * C396) * C2458 +
                     (C15178 * C517 - C156 * C408) * C15468) *
                        C15472) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C2798 +
                     (C15178 * C162 - C156 * C87) * C15125) *
                        C2793 +
                    ((C15178 * C506 - C156 * C391) * C2798 +
                     (C15178 * C512 - C156 * C398) * C15125) *
                        C2794 +
                    ((C15178 * C509 - C156 * C394) * C2798 +
                     (C15178 * C515 - C156 * C404) * C15125) *
                        C2795 +
                    ((C15178 * C2861 - C156 * C2800) * C2798 +
                     (C15178 * C2863 - C156 * C2803) * C15125) *
                        C2796 +
                    ((C15178 * C2862 - C156 * C2801) * C2798 +
                     (C15178 * C2864 - C156 * C2805) * C15125) *
                        C2797) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15505 * C157 - C950 * C81 + C15494 * C953 - C951 * C838 +
                      C15475 * C954 - C952 * C841) *
                         C2798 +
                     (C15505 * C162 - C950 * C87 + C15494 * C959 - C951 * C845 +
                      C15475 * C960 - C952 * C851) *
                         C15125) *
                        C2451 +
                    ((C15505 * C506 - C950 * C391 + C15494 * C2080 -
                      C951 * C1962 + C15475 * C3150 - C952 * C3056) *
                         C2798 +
                     (C15505 * C512 - C950 * C398 + C15494 * C2083 -
                      C951 * C1966 + C15475 * C3153 - C952 * C3060) *
                         C15125) *
                        C2452 +
                    ((C15505 * C509 - C950 * C394 + C15494 * C3151 -
                      C951 * C3057 + C15475 * C3152 - C952 * C3058) *
                         C2798 +
                     (C15505 * C515 - C950 * C404 + C15494 * C3154 -
                      C951 * C3062 + C15475 * C3155 - C952 * C3064) *
                         C15125) *
                        C15472) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 + C15468 * C90 -
           C389 * C83) *
              C453 +
          (C379 * C194 - C385 * C189 + C380 * C195 - C387 * C190 +
           C15468 * C196 - C389 * C191) *
              C15504 +
          (C379 * C397 - C385 * C391 + C380 * C399 - C387 * C392 +
           C15468 * C401 - C389 * C393) *
              C454 +
          (C379 * C562 - C385 * C556 + C380 * C563 - C387 * C557 +
           C15468 * C564 - C389 * C558) *
              C15492 +
          (C379 * C403 - C385 * C394 + C380 * C405 - C387 * C395 +
           C15468 * C407 - C389 * C396) *
              C455 +
          (C379 * C565 - C385 * C559 + C380 * C566 - C387 * C560 +
           C15468 * C567 - C389 * C561) *
              C15472) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C61 * C86 - C71 * C81 + C62 * C88 - C73 * C82 + C63 * C90 -
           C75 * C83 + C64 * C92 - C77 * C84 + C65 * C94 - C79 * C85) *
              C123 +
          (C61 * C194 - C71 * C189 + C62 * C195 - C73 * C190 + C63 * C196 -
           C75 * C191 + C64 * C197 - C77 * C192 + C65 * C198 - C79 * C193) *
              C15167) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 + C15468 * C90 -
            C389 * C83) *
               C123 +
           (C379 * C194 - C385 * C189 + C380 * C195 - C387 * C190 +
            C15468 * C196 - C389 * C191) *
               C15167) *
              C15505 +
          ((C379 * C844 - C385 * C838 + C380 * C846 - C387 * C839 +
            C15468 * C848 - C389 * C840) *
               C123 +
           (C379 * C1009 - C385 * C1003 + C380 * C1010 - C387 * C1004 +
            C15468 * C1011 - C389 * C1005) *
               C15167) *
              C15494 +
          ((C379 * C850 - C385 * C841 + C380 * C852 - C387 * C842 +
            C15468 * C854 - C389 * C843) *
               C123 +
           (C379 * C1012 - C385 * C1006 + C380 * C1013 - C387 * C1007 +
            C15468 * C1014 - C389 * C1008) *
               C15167) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
           C15468 * C90 - C2458 * C83) *
              C2498 +
          (C15501 * C194 - C2454 * C189 + C15488 * C195 - C2456 * C190 +
           C15468 * C196 - C2458 * C191) *
              C2451 +
          (C15501 * C397 - C2454 * C391 + C15488 * C399 - C2456 * C392 +
           C15468 * C401 - C2458 * C393) *
              C2499 +
          (C15501 * C562 - C2454 * C556 + C15488 * C563 - C2456 * C557 +
           C15468 * C564 - C2458 * C558) *
              C2452 +
          (C15501 * C403 - C2454 * C394 + C15488 * C405 - C2456 * C395 +
           C15468 * C407 - C2458 * C396) *
              C2500 +
          (C15501 * C565 - C2454 * C559 + C15488 * C566 - C2456 * C560 +
           C15468 * C567 - C2458 * C561) *
              C15472) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C15125 * C86 - C2798 * C81) * C2830 +
          (C15125 * C194 - C2798 * C189) * C2793 +
          (C15125 * C397 - C2798 * C391) * C2831 +
          (C15125 * C562 - C2798 * C556) * C2794 +
          (C15125 * C403 - C2798 * C394) * C2832 +
          (C15125 * C565 - C2798 * C559) * C2795 +
          (C15125 * C2802 - C2798 * C2800) * C2833 +
          (C15125 * C2889 - C2798 * C2887) * C2796 +
          (C15125 * C2804 - C2798 * C2801) * C2834 +
          (C15125 * C2890 - C2798 * C2888) * C2797) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15125 * C86 - C2798 * C81) * C2498 +
           (C15125 * C194 - C2798 * C189) * C2451 +
           (C15125 * C397 - C2798 * C391) * C2499 +
           (C15125 * C562 - C2798 * C556) * C2452 +
           (C15125 * C403 - C2798 * C394) * C2500 +
           (C15125 * C565 - C2798 * C559) * C15472) *
              C15505 +
          ((C15125 * C844 - C2798 * C838) * C2498 +
           (C15125 * C1009 - C2798 * C1003) * C2451 +
           (C15125 * C1965 - C2798 * C1962) * C2499 +
           (C15125 * C2139 - C2798 * C2136) * C2452 +
           (C15125 * C3061 - C2798 * C3057) * C2500 +
           (C15125 * C3197 - C2798 * C3194) * C15472) *
              C15494 +
          ((C15125 * C850 - C2798 * C841) * C2498 +
           (C15125 * C1012 - C2798 * C1006) * C2451 +
           (C15125 * C3059 - C2798 * C3056) * C2499 +
           (C15125 * C3198 - C2798 * C3195) * C2452 +
           (C15125 * C3063 - C2798 * C3058) * C2500 +
           (C15125 * C3199 - C2798 * C3196) * C15472) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C453 * C124 - C606 * C81 - C453 * C189 + C15504 * C222 +
           C454 * C456 - C607 * C391 - C454 * C556 + C15492 * C609 +
           C455 * C457 - C608 * C394 - C455 * C559 + C15472 * C610) *
              C379 +
          (C453 * C125 - C606 * C82 - C453 * C190 + C15504 * C223 +
           C454 * C458 - C607 * C392 - C454 * C557 + C15492 * C611 +
           C455 * C459 - C608 * C395 - C455 * C560 + C15472 * C612) *
              C380 +
          (C453 * C126 - C606 * C83 - C453 * C191 + C15504 * C224 +
           C454 * C460 - C607 * C393 - C454 * C558 + C15492 * C613 +
           C455 * C461 - C608 * C396 - C455 * C561 + C15472 * C614) *
              C15468) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C61 +
          (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C62 +
          (C123 * C126 - C221 * C83 - C123 * C191 + C15167 * C224) * C63 +
          (C123 * C127 - C221 * C84 - C123 * C192 + C15167 * C225) * C64 +
          (C123 * C128 - C221 * C85 - C123 * C193 + C15167 * C226) * C65) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C379 +
           (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C380 +
           (C123 * C126 - C221 * C83 - C123 * C191 + C15167 * C224) * C15468) *
              C15505 +
          ((C123 * C900 - C221 * C838 - C123 * C1003 + C15167 * C1053) * C379 +
           (C123 * C901 - C221 * C839 - C123 * C1004 + C15167 * C1054) * C380 +
           (C123 * C902 - C221 * C840 - C123 * C1005 + C15167 * C1055) *
               C15468) *
              C15494 +
          ((C123 * C903 - C221 * C841 - C123 * C1006 + C15167 * C1056) * C379 +
           (C123 * C904 - C221 * C842 - C123 * C1007 + C15167 * C1057) * C380 +
           (C123 * C905 - C221 * C843 - C123 * C1008 + C15167 * C1058) *
               C15468) *
              C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2498 * C124 - C2615 * C81 - C2498 * C189 + C2451 * C222 +
           C2499 * C456 - C2616 * C391 - C2499 * C556 + C2452 * C609 +
           C2500 * C457 - C2617 * C394 - C2500 * C559 + C15472 * C610) *
              C15501 +
          (C2498 * C125 - C2615 * C82 - C2498 * C190 + C2451 * C223 +
           C2499 * C458 - C2616 * C392 - C2499 * C557 + C2452 * C611 +
           C2500 * C459 - C2617 * C395 - C2500 * C560 + C15472 * C612) *
              C15488 +
          (C2498 * C126 - C2615 * C83 - C2498 * C191 + C2451 * C224 +
           C2499 * C460 - C2616 * C393 - C2499 * C558 + C2452 * C613 +
           C2500 * C461 - C2617 * C396 - C2500 * C561 + C15472 * C614) *
              C15468) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (C2830 * C124 - C2913 * C81 - C2830 * C189 + C2793 * C222 +
          C2831 * C456 - C2914 * C391 - C2831 * C556 + C2794 * C609 +
          C2832 * C457 - C2915 * C394 - C2832 * C559 + C2795 * C610 +
          C2833 * C2835 - C2916 * C2800 - C2833 * C2887 + C2796 * C2918 +
          C2834 * C2836 - C2917 * C2801 - C2834 * C2888 + C2797 * C2919) *
         C15125 * C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2498 * C124 - C2615 * C81 - C2498 * C189 + C2451 * C222 +
           C2499 * C456 - C2616 * C391 - C2499 * C556 + C2452 * C609 +
           C2500 * C457 - C2617 * C394 - C2500 * C559 + C15472 * C610) *
              C15125 * C15505 +
          (C2498 * C900 - C2615 * C838 - C2498 * C1003 + C2451 * C1053 +
           C2499 * C2024 - C2616 * C1962 - C2499 * C2136 + C2452 * C2192 +
           C2500 * C3106 - C2617 * C3057 - C2500 * C3194 + C15472 * C3238) *
              C15125 * C15494 +
          (C2498 * C903 - C2615 * C841 - C2498 * C1006 + C2451 * C1056 +
           C2499 * C3107 - C2616 * C3056 - C2499 * C3195 + C2452 * C3239 +
           C2500 * C3108 - C2617 * C3058 - C2500 * C3196 + C15472 * C3240) *
              C15125 * C15475) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C453 +
                     (C15178 * C249 - C156 * C189) * C15504 +
                     (C15178 * C506 - C156 * C391) * C454 +
                     (C15178 * C653 - C156 * C556) * C15492 +
                     (C15178 * C509 - C156 * C394) * C455 +
                     (C15178 * C654 - C156 * C559) * C15472) *
                        C379 +
                    ((C15178 * C158 - C156 * C82) * C453 +
                     (C15178 * C250 - C156 * C190) * C15504 +
                     (C15178 * C507 - C156 * C392) * C454 +
                     (C15178 * C655 - C156 * C557) * C15492 +
                     (C15178 * C510 - C156 * C395) * C455 +
                     (C15178 * C656 - C156 * C560) * C15472) *
                        C380 +
                    ((C15178 * C159 - C156 * C83) * C453 +
                     (C15178 * C251 - C156 * C191) * C15504 +
                     (C15178 * C508 - C156 * C393) * C454 +
                     (C15178 * C657 - C156 * C558) * C15492 +
                     (C15178 * C511 - C156 * C396) * C455 +
                     (C15178 * C658 - C156 * C561) * C15472) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C123 +
                     (C15178 * C249 - C156 * C189) * C15167) *
                        C61 +
                    ((C15178 * C158 - C156 * C82) * C123 +
                     (C15178 * C250 - C156 * C190) * C15167) *
                        C62 +
                    ((C15178 * C159 - C156 * C83) * C123 +
                     (C15178 * C251 - C156 * C191) * C15167) *
                        C63 +
                    ((C15178 * C160 - C156 * C84) * C123 +
                     (C15178 * C252 - C156 * C192) * C15167) *
                        C64 +
                    ((C15178 * C161 - C156 * C85) * C123 +
                     (C15178 * C253 - C156 * C193) * C15167) *
                        C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15505 * C157 - C950 * C81 + C15494 * C953 - C951 * C838 +
                      C15475 * C954 - C952 * C841) *
                         C123 +
                     (C15505 * C249 - C950 * C189 + C15494 * C1097 -
                      C951 * C1003 + C15475 * C1098 - C952 * C1006) *
                         C15167) *
                        C379 +
                    ((C15505 * C158 - C950 * C82 + C15494 * C955 - C951 * C839 +
                      C15475 * C956 - C952 * C842) *
                         C123 +
                     (C15505 * C250 - C950 * C190 + C15494 * C1099 -
                      C951 * C1004 + C15475 * C1100 - C952 * C1007) *
                         C15167) *
                        C380 +
                    ((C15505 * C159 - C950 * C83 + C15494 * C957 - C951 * C840 +
                      C15475 * C958 - C952 * C843) *
                         C123 +
                     (C15505 * C251 - C950 * C191 + C15494 * C1101 -
                      C951 * C1005 + C15475 * C1102 - C952 * C1008) *
                         C15167) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C2498 +
                     (C15178 * C249 - C156 * C189) * C2451 +
                     (C15178 * C506 - C156 * C391) * C2499 +
                     (C15178 * C653 - C156 * C556) * C2452 +
                     (C15178 * C509 - C156 * C394) * C2500 +
                     (C15178 * C654 - C156 * C559) * C15472) *
                        C15501 +
                    ((C15178 * C158 - C156 * C82) * C2498 +
                     (C15178 * C250 - C156 * C190) * C2451 +
                     (C15178 * C507 - C156 * C392) * C2499 +
                     (C15178 * C655 - C156 * C557) * C2452 +
                     (C15178 * C510 - C156 * C395) * C2500 +
                     (C15178 * C656 - C156 * C560) * C15472) *
                        C15488 +
                    ((C15178 * C159 - C156 * C83) * C2498 +
                     (C15178 * C251 - C156 * C191) * C2451 +
                     (C15178 * C508 - C156 * C393) * C2499 +
                     (C15178 * C657 - C156 * C558) * C2452 +
                     (C15178 * C511 - C156 * C396) * C2500 +
                     (C15178 * C658 - C156 * C561) * C15472) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C15178 * C157 - C156 * C81) * C2830 +
                    (C15178 * C249 - C156 * C189) * C2793 +
                    (C15178 * C506 - C156 * C391) * C2831 +
                    (C15178 * C653 - C156 * C556) * C2794 +
                    (C15178 * C509 - C156 * C394) * C2832 +
                    (C15178 * C654 - C156 * C559) * C2795 +
                    (C15178 * C2861 - C156 * C2800) * C2833 +
                    (C15178 * C2942 - C156 * C2887) * C2796 +
                    (C15178 * C2862 - C156 * C2801) * C2834 +
                    (C15178 * C2943 - C156 * C2888) * C2797) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C15505 * C157 - C950 * C81 + C15494 * C953 - C951 * C838 +
                     C15475 * C954 - C952 * C841) *
                        C2498 +
                    (C15505 * C249 - C950 * C189 + C15494 * C1097 -
                     C951 * C1003 + C15475 * C1098 - C952 * C1006) *
                        C2451 +
                    (C15505 * C506 - C950 * C391 + C15494 * C2080 -
                     C951 * C1962 + C15475 * C3150 - C952 * C3056) *
                        C2499 +
                    (C15505 * C653 - C950 * C556 + C15494 * C2245 -
                     C951 * C2136 + C15475 * C3279 - C952 * C3195) *
                        C2452 +
                    (C15505 * C509 - C950 * C394 + C15494 * C3151 -
                     C951 * C3057 + C15475 * C3152 - C952 * C3058) *
                        C2500 +
                    (C15505 * C654 - C950 * C559 + C15494 * C3280 -
                     C951 * C3194 + C15475 * C3281 - C952 * C3196) *
                        C15472) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 + C15468 * C90 -
            C389 * C83) *
               C156 +
           (C379 * C281 - C385 * C276 + C380 * C282 - C387 * C277 +
            C15468 * C283 - C389 * C278) *
               C15178) *
              C15504 +
          ((C379 * C397 - C385 * C391 + C380 * C399 - C387 * C392 +
            C15468 * C401 - C389 * C393) *
               C156 +
           (C379 * C703 - C385 * C697 + C380 * C704 - C387 * C698 +
            C15468 * C705 - C389 * C699) *
               C15178) *
              C15492 +
          ((C379 * C403 - C385 * C394 + C380 * C405 - C387 * C395 +
            C15468 * C407 - C389 * C396) *
               C156 +
           (C379 * C706 - C385 * C700 + C380 * C707 - C387 * C701 +
            C15468 * C708 - C389 * C702) *
               C15178) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C61 * C86 - C71 * C81 + C62 * C88 - C73 * C82 + C63 * C90 -
           C75 * C83 + C64 * C92 - C77 * C84 + C65 * C94 - C79 * C85) *
              C156 +
          (C61 * C281 - C71 * C276 + C62 * C282 - C73 * C277 + C63 * C283 -
           C75 * C278 + C64 * C284 - C77 * C279 + C65 * C285 - C79 * C280) *
              C15178) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 + C15468 * C90 -
           C389 * C83) *
              C950 +
          (C379 * C281 - C385 * C276 + C380 * C282 - C387 * C277 +
           C15468 * C283 - C389 * C278) *
              C15505 +
          (C379 * C844 - C385 * C838 + C380 * C846 - C387 * C839 +
           C15468 * C848 - C389 * C840) *
              C951 +
          (C379 * C1147 - C385 * C1141 + C380 * C1148 - C387 * C1142 +
           C15468 * C1149 - C389 * C1143) *
              C15494 +
          (C379 * C850 - C385 * C841 + C380 * C852 - C387 * C842 +
           C15468 * C854 - C389 * C843) *
              C952 +
          (C379 * C1150 - C385 * C1144 + C380 * C1151 - C387 * C1145 +
           C15468 * C1152 - C389 * C1146) *
              C15475) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
            C15468 * C90 - C2458 * C83) *
               C156 +
           (C15501 * C281 - C2454 * C276 + C15488 * C282 - C2456 * C277 +
            C15468 * C283 - C2458 * C278) *
               C15178) *
              C2451 +
          ((C15501 * C397 - C2454 * C391 + C15488 * C399 - C2456 * C392 +
            C15468 * C401 - C2458 * C393) *
               C156 +
           (C15501 * C703 - C2454 * C697 + C15488 * C704 - C2456 * C698 +
            C15468 * C705 - C2458 * C699) *
               C15178) *
              C2452 +
          ((C15501 * C403 - C2454 * C394 + C15488 * C405 - C2456 * C395 +
            C15468 * C407 - C2458 * C396) *
               C156 +
           (C15501 * C706 - C2454 * C700 + C15488 * C707 - C2456 * C701 +
            C15468 * C708 - C2458 * C702) *
               C15178) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15125 * C86 - C2798 * C81) * C156 +
           (C15125 * C281 - C2798 * C276) * C15178) *
              C2793 +
          ((C15125 * C397 - C2798 * C391) * C156 +
           (C15125 * C703 - C2798 * C697) * C15178) *
              C2794 +
          ((C15125 * C403 - C2798 * C394) * C156 +
           (C15125 * C706 - C2798 * C700) * C15178) *
              C2795 +
          ((C15125 * C2802 - C2798 * C2800) * C156 +
           (C15125 * C2968 - C2798 * C2966) * C15178) *
              C2796 +
          ((C15125 * C2804 - C2798 * C2801) * C156 +
           (C15125 * C2969 - C2798 * C2967) * C15178) *
              C2797) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15125 * C86 - C2798 * C81) * C950 +
           (C15125 * C281 - C2798 * C276) * C15505 +
           (C15125 * C844 - C2798 * C838) * C951 +
           (C15125 * C1147 - C2798 * C1141) * C15494 +
           (C15125 * C850 - C2798 * C841) * C952 +
           (C15125 * C1150 - C2798 * C1144) * C15475) *
              C2451 +
          ((C15125 * C397 - C2798 * C391) * C950 +
           (C15125 * C703 - C2798 * C697) * C15505 +
           (C15125 * C1965 - C2798 * C1962) * C951 +
           (C15125 * C2301 - C2798 * C2298) * C15494 +
           (C15125 * C3059 - C2798 * C3056) * C952 +
           (C15125 * C3323 - C2798 * C3320) * C15475) *
              C2452 +
          ((C15125 * C403 - C2798 * C394) * C950 +
           (C15125 * C706 - C2798 * C700) * C15505 +
           (C15125 * C3061 - C2798 * C3057) * C951 +
           (C15125 * C3324 - C2798 * C3321) * C15494 +
           (C15125 * C3063 - C2798 * C3058) * C952 +
           (C15125 * C3325 - C2798 * C3322) * C15475) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                      C15472 * C457 - C455 * C394) *
                         C156 +
                     (C15504 * C308 - C453 * C276 + C15492 * C747 -
                      C454 * C697 + C15472 * C748 - C455 * C700) *
                         C15178) *
                        C379 +
                    ((C15504 * C125 - C453 * C82 + C15492 * C458 - C454 * C392 +
                      C15472 * C459 - C455 * C395) *
                         C156 +
                     (C15504 * C309 - C453 * C277 + C15492 * C749 -
                      C454 * C698 + C15472 * C750 - C455 * C701) *
                         C15178) *
                        C380 +
                    ((C15504 * C126 - C453 * C83 + C15492 * C460 - C454 * C393 +
                      C15472 * C461 - C455 * C396) *
                         C156 +
                     (C15504 * C310 - C453 * C278 + C15492 * C751 -
                      C454 * C699 + C15472 * C752 - C455 * C702) *
                         C15178) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C156 +
                     (C15167 * C308 - C123 * C276) * C15178) *
                        C61 +
                    ((C15167 * C125 - C123 * C82) * C156 +
                     (C15167 * C309 - C123 * C277) * C15178) *
                        C62 +
                    ((C15167 * C126 - C123 * C83) * C156 +
                     (C15167 * C310 - C123 * C278) * C15178) *
                        C63 +
                    ((C15167 * C127 - C123 * C84) * C156 +
                     (C15167 * C311 - C123 * C279) * C15178) *
                        C64 +
                    ((C15167 * C128 - C123 * C85) * C156 +
                     (C15167 * C312 - C123 * C280) * C15178) *
                        C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C950 +
                     (C15167 * C308 - C123 * C276) * C15505 +
                     (C15167 * C900 - C123 * C838) * C951 +
                     (C15167 * C1191 - C123 * C1141) * C15494 +
                     (C15167 * C903 - C123 * C841) * C952 +
                     (C15167 * C1192 - C123 * C1144) * C15475) *
                        C379 +
                    ((C15167 * C125 - C123 * C82) * C950 +
                     (C15167 * C309 - C123 * C277) * C15505 +
                     (C15167 * C901 - C123 * C839) * C951 +
                     (C15167 * C1193 - C123 * C1142) * C15494 +
                     (C15167 * C904 - C123 * C842) * C952 +
                     (C15167 * C1194 - C123 * C1145) * C15475) *
                        C380 +
                    ((C15167 * C126 - C123 * C83) * C950 +
                     (C15167 * C310 - C123 * C278) * C15505 +
                     (C15167 * C902 - C123 * C840) * C951 +
                     (C15167 * C1195 - C123 * C1143) * C15494 +
                     (C15167 * C905 - C123 * C843) * C952 +
                     (C15167 * C1196 - C123 * C1146) * C15475) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                      C15472 * C457 - C2500 * C394) *
                         C156 +
                     (C2451 * C308 - C2498 * C276 + C2452 * C747 -
                      C2499 * C697 + C15472 * C748 - C2500 * C700) *
                         C15178) *
                        C15501 +
                    ((C2451 * C125 - C2498 * C82 + C2452 * C458 - C2499 * C392 +
                      C15472 * C459 - C2500 * C395) *
                         C156 +
                     (C2451 * C309 - C2498 * C277 + C2452 * C749 -
                      C2499 * C698 + C15472 * C750 - C2500 * C701) *
                         C15178) *
                        C15488 +
                    ((C2451 * C126 - C2498 * C83 + C2452 * C460 - C2499 * C393 +
                      C15472 * C461 - C2500 * C396) *
                         C156 +
                     (C2451 * C310 - C2498 * C278 + C2452 * C751 -
                      C2499 * C699 + C15472 * C752 - C2500 * C702) *
                         C15178) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C2793 * C124 - C2830 * C81 + C2794 * C456 - C2831 * C391 +
                     C2795 * C457 - C2832 * C394 + C2796 * C2835 -
                     C2833 * C2800 + C2797 * C2836 - C2834 * C2801) *
                        C156 +
                    (C2793 * C308 - C2830 * C276 + C2794 * C747 - C2831 * C697 +
                     C2795 * C748 - C2832 * C700 + C2796 * C2992 -
                     C2833 * C2966 + C2797 * C2993 - C2834 * C2967) *
                        C15178) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                     C15472 * C457 - C2500 * C394) *
                        C950 +
                    (C2451 * C308 - C2498 * C276 + C2452 * C747 - C2499 * C697 +
                     C15472 * C748 - C2500 * C700) *
                        C15505 +
                    (C2451 * C900 - C2498 * C838 + C2452 * C2024 -
                     C2499 * C1962 + C15472 * C3106 - C2500 * C3057) *
                        C951 +
                    (C2451 * C1191 - C2498 * C1141 + C2452 * C2354 -
                     C2499 * C2298 + C15472 * C3364 - C2500 * C3321) *
                        C15494 +
                    (C2451 * C903 - C2498 * C841 + C2452 * C3107 -
                     C2499 * C3056 + C15472 * C3108 - C2500 * C3058) *
                        C952 +
                    (C2451 * C1192 - C2498 * C1144 + C2452 * C3365 -
                     C2499 * C3320 + C15472 * C3366 - C2500 * C3322) *
                        C15475) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C15504 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C15492 +
           (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C15472) *
              C379 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C15504 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C15492 +
           (C156 * C510 - C335 * C395 - C156 * C701 + C15178 * C794) * C15472) *
              C380 +
          ((C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C15504 +
           (C156 * C508 - C335 * C393 - C156 * C699 + C15178 * C795) * C15492 +
           (C156 * C511 - C335 * C396 - C156 * C702 + C15178 * C796) * C15472) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C15167 *
              C61 +
          (C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C15167 *
              C62 +
          (C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C15167 *
              C63 +
          (C156 * C160 - C335 * C84 - C156 * C279 + C15178 * C339) * C15167 *
              C64 +
          (C156 * C161 - C335 * C85 - C156 * C280 + C15178 * C340) * C15167 *
              C65) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C950 * C157 - C1235 * C81 - C950 * C276 + C15505 * C336 +
           C951 * C953 - C1236 * C838 - C951 * C1141 + C15494 * C1238 +
           C952 * C954 - C1237 * C841 - C952 * C1144 + C15475 * C1239) *
              C15167 * C379 +
          (C950 * C158 - C1235 * C82 - C950 * C277 + C15505 * C337 +
           C951 * C955 - C1236 * C839 - C951 * C1142 + C15494 * C1240 +
           C952 * C956 - C1237 * C842 - C952 * C1145 + C15475 * C1241) *
              C15167 * C380 +
          (C950 * C159 - C1235 * C83 - C950 * C278 + C15505 * C338 +
           C951 * C957 - C1236 * C840 - C951 * C1143 + C15494 * C1242 +
           C952 * C958 - C1237 * C843 - C952 * C1146 + C15475 * C1243) *
              C15167 * C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C2451 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C2452 +
           (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C15472) *
              C15501 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C2451 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C2452 +
           (C156 * C510 - C335 * C395 - C156 * C701 + C15178 * C794) * C15472) *
              C15488 +
          ((C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C2451 +
           (C156 * C508 - C335 * C393 - C156 * C699 + C15178 * C795) * C2452 +
           (C156 * C511 - C335 * C396 - C156 * C702 + C15178 * C796) * C15472) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C2793 +
          (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C2794 +
          (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C2795 +
          (C156 * C2861 - C335 * C2800 - C156 * C2966 + C15178 * C3016) *
              C2796 +
          (C156 * C2862 - C335 * C2801 - C156 * C2967 + C15178 * C3017) *
              C2797) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C950 * C157 - C1235 * C81 - C950 * C276 + C15505 * C336 +
           C951 * C953 - C1236 * C838 - C951 * C1141 + C15494 * C1238 +
           C952 * C954 - C1237 * C841 - C952 * C1144 + C15475 * C1239) *
              C2451 +
          (C950 * C506 - C1235 * C391 - C950 * C697 + C15505 * C791 +
           C951 * C2080 - C1236 * C1962 - C951 * C2298 + C15494 * C2407 +
           C952 * C3150 - C1237 * C3056 - C952 * C3320 + C15475 * C3405) *
              C2452 +
          (C950 * C509 - C1235 * C394 - C950 * C700 + C15505 * C792 +
           C951 * C3151 - C1236 * C3057 - C951 * C3321 + C15494 * C3406 +
           C952 * C3152 - C1237 * C3058 - C952 * C3322 + C15475 * C3407) *
              C15472) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1284 * C86 - C1285 * C81 - C1284 * C87 + C1278 * C96 + C1286 * C88 -
           C1287 * C82 - C1286 * C89 + C1279 * C97 + C1288 * C90 - C1289 * C83 -
           C1288 * C91 + C1280 * C98 + C1290 * C92 - C1291 * C84 - C1290 * C93 +
           C15445 * C99) *
              C15447 +
          (C1284 * C844 - C1285 * C838 - C1284 * C845 + C1278 * C856 +
           C1286 * C846 - C1287 * C839 - C1286 * C847 + C1279 * C857 +
           C1288 * C848 - C1289 * C840 - C1288 * C849 + C1280 * C858 +
           C1290 * C1621 - C1291 * C1620 - C1290 * C1622 + C15445 * C1623) *
              C15265) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C13651 * C86 - C3449 * C81 - C13651 * C87 + C15430 * C96 +
            C13632 * C88 - C3451 * C82 - C13632 * C89 + C15135 * C97) *
               C15447 +
           (C13651 * C844 - C3449 * C838 - C13651 * C845 + C15430 * C856 +
            C13632 * C846 - C3451 * C839 - C13632 * C847 + C15135 * C857) *
               C15265) *
              C2451 +
          ((C13651 * C397 - C3449 * C391 - C13651 * C398 + C15430 * C409 +
            C13632 * C399 - C3451 * C392 - C13632 * C400 + C15135 * C410) *
               C15447 +
           (C13651 * C1965 - C3449 * C1962 - C13651 * C1966 + C15430 * C1971 +
            C13632 * C1967 - C3451 * C1963 - C13632 * C1968 + C15135 * C1972) *
               C15265) *
              C2452 +
          ((C13651 * C403 - C3449 * C394 - C13651 * C404 + C15430 * C412 +
            C13632 * C405 - C3451 * C395 - C13632 * C406 + C15135 * C413) *
               C15447 +
           (C13651 * C3061 - C3449 * C3057 - C13651 * C3062 + C15430 * C3066 +
            C13632 * C3799 - C3451 * C3798 - C13632 * C3800 + C15135 * C3801) *
               C15265) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C1284 +
                     (C15167 * C129 - C123 * C87) * C1278 +
                     (C15167 * C125 - C123 * C82) * C1286 +
                     (C15167 * C130 - C123 * C89) * C1279 +
                     (C15167 * C126 - C123 * C83) * C1288 +
                     (C15167 * C131 - C123 * C91) * C1280 +
                     (C15167 * C127 - C123 * C84) * C1290 +
                     (C15167 * C132 - C123 * C93) * C15445) *
                        C15447 +
                    ((C15167 * C900 - C123 * C838) * C1284 +
                     (C15167 * C906 - C123 * C845) * C1278 +
                     (C15167 * C901 - C123 * C839) * C1286 +
                     (C15167 * C907 - C123 * C847) * C1279 +
                     (C15167 * C902 - C123 * C840) * C1288 +
                     (C15167 * C908 - C123 * C849) * C1280 +
                     (C15167 * C1658 - C123 * C1620) * C1290 +
                     (C15167 * C1659 - C123 * C1622) * C15445) *
                        C15265) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                      C15472 * C457 - C2500 * C394) *
                         C13651 +
                     (C2451 * C129 - C2498 * C87 + C2452 * C462 - C2499 * C398 +
                      C15472 * C463 - C2500 * C404) *
                         C15430 +
                     (C2451 * C125 - C2498 * C82 + C2452 * C458 - C2499 * C392 +
                      C15472 * C459 - C2500 * C395) *
                         C13632 +
                     (C2451 * C130 - C2498 * C89 + C2452 * C464 - C2499 * C400 +
                      C15472 * C465 - C2500 * C406) *
                         C15135) *
                        C15447 +
                    ((C2451 * C900 - C2498 * C838 + C2452 * C2024 -
                      C2499 * C1962 + C15472 * C3106 - C2500 * C3057) *
                         C13651 +
                     (C2451 * C906 - C2498 * C845 + C2452 * C2027 -
                      C2499 * C1966 + C15472 * C3109 - C2500 * C3062) *
                         C15430 +
                     (C2451 * C901 - C2498 * C839 + C2452 * C2025 -
                      C2499 * C1963 + C15472 * C3852 - C2500 * C3798) *
                         C13632 +
                     (C2451 * C907 - C2498 * C847 + C2452 * C2028 -
                      C2499 * C1968 + C15472 * C3853 - C2500 * C3800) *
                         C15135) *
                        C15265) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) * C1284 +
          (C15447 * C162 - C1694 * C87 + C15265 * C959 - C1695 * C845) * C1278 +
          (C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) * C1286 +
          (C15447 * C163 - C1694 * C89 + C15265 * C961 - C1695 * C847) * C1279 +
          (C15447 * C159 - C1694 * C83 + C15265 * C957 - C1695 * C840) * C1288 +
          (C15447 * C164 - C1694 * C91 + C15265 * C963 - C1695 * C849) * C1280 +
          (C15447 * C160 - C1694 * C84 + C15265 * C1696 - C1695 * C1620) *
              C1290 +
          (C15447 * C165 - C1694 * C93 + C15265 * C1697 - C1695 * C1622) *
              C15445) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) *
               C13651 +
           (C15447 * C162 - C1694 * C87 + C15265 * C959 - C1695 * C845) *
               C15430 +
           (C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) *
               C13632 +
           (C15447 * C163 - C1694 * C89 + C15265 * C961 - C1695 * C847) *
               C15135) *
              C2451 +
          ((C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C13651 +
           (C15447 * C512 - C1694 * C398 + C15265 * C2083 - C1695 * C1966) *
               C15430 +
           (C15447 * C507 - C1694 * C392 + C15265 * C2081 - C1695 * C1963) *
               C13632 +
           (C15447 * C513 - C1694 * C400 + C15265 * C2084 - C1695 * C1968) *
               C15135) *
              C2452 +
          ((C15447 * C509 - C1694 * C394 + C15265 * C3151 - C1695 * C3057) *
               C13651 +
           (C15447 * C515 - C1694 * C404 + C15265 * C3154 - C1695 * C3062) *
               C15430 +
           (C15447 * C510 - C1694 * C395 + C15265 * C3904 - C1695 * C3798) *
               C13632 +
           (C15447 * C516 - C1694 * C406 + C15265 * C3905 - C1695 * C3800) *
               C15135) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1278 * C86 - C1284 * C81 + C1279 * C88 - C1286 * C82 +
            C1280 * C90 - C1288 * C83 + C15445 * C92 - C1290 * C84) *
               C123 +
           (C1278 * C194 - C1284 * C189 + C1279 * C195 - C1286 * C190 +
            C1280 * C196 - C1288 * C191 + C15445 * C197 - C1290 * C192) *
               C15167) *
              C15447 +
          ((C1278 * C844 - C1284 * C838 + C1279 * C846 - C1286 * C839 +
            C1280 * C848 - C1288 * C840 + C15445 * C1621 - C1290 * C1620) *
               C123 +
           (C1278 * C1009 - C1284 * C1003 + C1279 * C1010 - C1286 * C1004 +
            C1280 * C1011 - C1288 * C1005 + C15445 * C1733 - C1290 * C1732) *
               C15167) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C2498 +
           (C15430 * C194 - C13651 * C189 + C15135 * C195 - C13632 * C190) *
               C2451 +
           (C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
               C2499 +
           (C15430 * C562 - C13651 * C556 + C15135 * C563 - C13632 * C557) *
               C2452 +
           (C15430 * C403 - C13651 * C394 + C15135 * C405 - C13632 * C395) *
               C2500 +
           (C15430 * C565 - C13651 * C559 + C15135 * C566 - C13632 * C560) *
               C15472) *
              C15447 +
          ((C15430 * C844 - C13651 * C838 + C15135 * C846 - C13632 * C839) *
               C2498 +
           (C15430 * C1009 - C13651 * C1003 + C15135 * C1010 - C13632 * C1004) *
               C2451 +
           (C15430 * C1965 - C13651 * C1962 + C15135 * C1967 - C13632 * C1963) *
               C2499 +
           (C15430 * C2139 - C13651 * C2136 + C15135 * C2140 - C13632 * C2137) *
               C2452 +
           (C15430 * C3061 - C13651 * C3057 + C15135 * C3799 - C13632 * C3798) *
               C2500 +
           (C15430 * C3197 - C13651 * C3194 + C15135 * C3957 - C13632 * C3956) *
               C15472) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C1278 +
           (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C1279 +
           (C123 * C126 - C221 * C83 - C123 * C191 + C15167 * C224) * C1280 +
           (C123 * C127 - C221 * C84 - C123 * C192 + C15167 * C225) * C15445) *
              C15447 +
          ((C123 * C900 - C221 * C838 - C123 * C1003 + C15167 * C1053) * C1278 +
           (C123 * C901 - C221 * C839 - C123 * C1004 + C15167 * C1054) * C1279 +
           (C123 * C902 - C221 * C840 - C123 * C1005 + C15167 * C1055) * C1280 +
           (C123 * C1658 - C221 * C1620 - C123 * C1732 + C15167 * C1768) *
               C15445) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2498 * C124 - C2615 * C81 - C2498 * C189 + C2451 * C222 +
            C2499 * C456 - C2616 * C391 - C2499 * C556 + C2452 * C609 +
            C2500 * C457 - C2617 * C394 - C2500 * C559 + C15472 * C610) *
               C15430 +
           (C2498 * C125 - C2615 * C82 - C2498 * C190 + C2451 * C223 +
            C2499 * C458 - C2616 * C392 - C2499 * C557 + C2452 * C611 +
            C2500 * C459 - C2617 * C395 - C2500 * C560 + C15472 * C612) *
               C15135) *
              C15447 +
          ((C2498 * C900 - C2615 * C838 - C2498 * C1003 + C2451 * C1053 +
            C2499 * C2024 - C2616 * C1962 - C2499 * C2136 + C2452 * C2192 +
            C2500 * C3106 - C2617 * C3057 - C2500 * C3194 + C15472 * C3238) *
               C15430 +
           (C2498 * C901 - C2615 * C839 - C2498 * C1004 + C2451 * C1054 +
            C2499 * C2025 - C2616 * C1963 - C2499 * C2137 + C2452 * C2193 +
            C2500 * C3852 - C2617 * C3798 - C2500 * C3956 + C15472 * C4008) *
               C15135) *
              C15265) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) * C123 +
           (C15447 * C249 - C1694 * C189 + C15265 * C1097 - C1695 * C1003) *
               C15167) *
              C1278 +
          ((C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) * C123 +
           (C15447 * C250 - C1694 * C190 + C15265 * C1099 - C1695 * C1004) *
               C15167) *
              C1279 +
          ((C15447 * C159 - C1694 * C83 + C15265 * C957 - C1695 * C840) * C123 +
           (C15447 * C251 - C1694 * C191 + C15265 * C1101 - C1695 * C1005) *
               C15167) *
              C1280 +
          ((C15447 * C160 - C1694 * C84 + C15265 * C1696 - C1695 * C1620) *
               C123 +
           (C15447 * C252 - C1694 * C192 + C15265 * C1803 - C1695 * C1732) *
               C15167) *
              C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15447 * C157 - C1694 * C81 + C15265 * C953 - C1695 * C838) *
               C2498 +
           (C15447 * C249 - C1694 * C189 + C15265 * C1097 - C1695 * C1003) *
               C2451 +
           (C15447 * C506 - C1694 * C391 + C15265 * C2080 - C1695 * C1962) *
               C2499 +
           (C15447 * C653 - C1694 * C556 + C15265 * C2245 - C1695 * C2136) *
               C2452 +
           (C15447 * C509 - C1694 * C394 + C15265 * C3151 - C1695 * C3057) *
               C2500 +
           (C15447 * C654 - C1694 * C559 + C15265 * C3280 - C1695 * C3194) *
               C15472) *
              C15430 +
          ((C15447 * C158 - C1694 * C82 + C15265 * C955 - C1695 * C839) *
               C2498 +
           (C15447 * C250 - C1694 * C190 + C15265 * C1099 - C1695 * C1004) *
               C2451 +
           (C15447 * C507 - C1694 * C392 + C15265 * C2081 - C1695 * C1963) *
               C2499 +
           (C15447 * C655 - C1694 * C557 + C15265 * C2246 - C1695 * C2137) *
               C2452 +
           (C15447 * C510 - C1694 * C395 + C15265 * C3904 - C1695 * C3798) *
               C2500 +
           (C15447 * C656 - C1694 * C560 + C15265 * C4059 - C1695 * C3956) *
               C15472) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1278 * C86 - C1284 * C81 + C1279 * C88 - C1286 * C82 + C1280 * C90 -
           C1288 * C83 + C15445 * C92 - C1290 * C84) *
              C1694 +
          (C1278 * C281 - C1284 * C276 + C1279 * C282 - C1286 * C277 +
           C1280 * C283 - C1288 * C278 + C15445 * C284 - C1290 * C279) *
              C15447 +
          (C1278 * C844 - C1284 * C838 + C1279 * C846 - C1286 * C839 +
           C1280 * C848 - C1288 * C840 + C15445 * C1621 - C1290 * C1620) *
              C1695 +
          (C1278 * C1147 - C1284 * C1141 + C1279 * C1148 - C1286 * C1142 +
           C1280 * C1149 - C1288 * C1143 + C15445 * C1839 - C1290 * C1838) *
              C15265) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15430 * C86 - C13651 * C81 + C15135 * C88 - C13632 * C82) * C1694 +
           (C15430 * C281 - C13651 * C276 + C15135 * C282 - C13632 * C277) *
               C15447 +
           (C15430 * C844 - C13651 * C838 + C15135 * C846 - C13632 * C839) *
               C1695 +
           (C15430 * C1147 - C13651 * C1141 + C15135 * C1148 - C13632 * C1142) *
               C15265) *
              C2451 +
          ((C15430 * C397 - C13651 * C391 + C15135 * C399 - C13632 * C392) *
               C1694 +
           (C15430 * C703 - C13651 * C697 + C15135 * C704 - C13632 * C698) *
               C15447 +
           (C15430 * C1965 - C13651 * C1962 + C15135 * C1967 - C13632 * C1963) *
               C1695 +
           (C15430 * C2301 - C13651 * C2298 + C15135 * C2302 - C13632 * C2299) *
               C15265) *
              C2452 +
          ((C15430 * C403 - C13651 * C394 + C15135 * C405 - C13632 * C395) *
               C1694 +
           (C15430 * C706 - C13651 * C700 + C15135 * C707 - C13632 * C701) *
               C15447 +
           (C15430 * C3061 - C13651 * C3057 + C15135 * C3799 - C13632 * C3798) *
               C1695 +
           (C15430 * C3324 - C13651 * C3321 + C15135 * C4111 - C13632 * C4110) *
               C15265) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C1694 +
                     (C15167 * C308 - C123 * C276) * C15447 +
                     (C15167 * C900 - C123 * C838) * C1695 +
                     (C15167 * C1191 - C123 * C1141) * C15265) *
                        C1278 +
                    ((C15167 * C125 - C123 * C82) * C1694 +
                     (C15167 * C309 - C123 * C277) * C15447 +
                     (C15167 * C901 - C123 * C839) * C1695 +
                     (C15167 * C1193 - C123 * C1142) * C15265) *
                        C1279 +
                    ((C15167 * C126 - C123 * C83) * C1694 +
                     (C15167 * C310 - C123 * C278) * C15447 +
                     (C15167 * C902 - C123 * C840) * C1695 +
                     (C15167 * C1195 - C123 * C1143) * C15265) *
                        C1280 +
                    ((C15167 * C127 - C123 * C84) * C1694 +
                     (C15167 * C311 - C123 * C279) * C15447 +
                     (C15167 * C1658 - C123 * C1620) * C1695 +
                     (C15167 * C1874 - C123 * C1838) * C15265) *
                        C15445) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                      C15472 * C457 - C2500 * C394) *
                         C1694 +
                     (C2451 * C308 - C2498 * C276 + C2452 * C747 -
                      C2499 * C697 + C15472 * C748 - C2500 * C700) *
                         C15447 +
                     (C2451 * C900 - C2498 * C838 + C2452 * C2024 -
                      C2499 * C1962 + C15472 * C3106 - C2500 * C3057) *
                         C1695 +
                     (C2451 * C1191 - C2498 * C1141 + C2452 * C2354 -
                      C2499 * C2298 + C15472 * C3364 - C2500 * C3321) *
                         C15265) *
                        C15430 +
                    ((C2451 * C125 - C2498 * C82 + C2452 * C458 - C2499 * C392 +
                      C15472 * C459 - C2500 * C395) *
                         C1694 +
                     (C2451 * C309 - C2498 * C277 + C2452 * C749 -
                      C2499 * C698 + C15472 * C750 - C2500 * C701) *
                         C15447 +
                     (C2451 * C901 - C2498 * C839 + C2452 * C2025 -
                      C2499 * C1963 + C15472 * C3852 - C2500 * C3798) *
                         C1695 +
                     (C2451 * C1193 - C2498 * C1142 + C2452 * C2355 -
                      C2499 * C2299 + C15472 * C4162 - C2500 * C4110) *
                         C15265) *
                        C15135) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1694 * C157 - C1909 * C81 - C1694 * C276 + C15447 * C336 +
           C1695 * C953 - C1910 * C838 - C1695 * C1141 + C15265 * C1238) *
              C15167 * C1278 +
          (C1694 * C158 - C1909 * C82 - C1694 * C277 + C15447 * C337 +
           C1695 * C955 - C1910 * C839 - C1695 * C1142 + C15265 * C1240) *
              C15167 * C1279 +
          (C1694 * C159 - C1909 * C83 - C1694 * C278 + C15447 * C338 +
           C1695 * C957 - C1910 * C840 - C1695 * C1143 + C15265 * C1242) *
              C15167 * C1280 +
          (C1694 * C160 - C1909 * C84 - C1694 * C279 + C15447 * C339 +
           C1695 * C1696 - C1910 * C1620 - C1695 * C1838 + C15265 * C1911) *
              C15167 * C15445) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1694 * C157 - C1909 * C81 - C1694 * C276 + C15447 * C336 +
            C1695 * C953 - C1910 * C838 - C1695 * C1141 + C15265 * C1238) *
               C2451 +
           (C1694 * C506 - C1909 * C391 - C1694 * C697 + C15447 * C791 +
            C1695 * C2080 - C1910 * C1962 - C1695 * C2298 + C15265 * C2407) *
               C2452 +
           (C1694 * C509 - C1909 * C394 - C1694 * C700 + C15447 * C792 +
            C1695 * C3151 - C1910 * C3057 - C1695 * C3321 + C15265 * C3406) *
               C15472) *
              C15430 +
          ((C1694 * C158 - C1909 * C82 - C1694 * C277 + C15447 * C337 +
            C1695 * C955 - C1910 * C839 - C1695 * C1142 + C15265 * C1240) *
               C2451 +
           (C1694 * C507 - C1909 * C392 - C1694 * C698 + C15447 * C793 +
            C1695 * C2081 - C1910 * C1963 - C1695 * C2299 + C15265 * C2408) *
               C2452 +
           (C1694 * C510 - C1909 * C395 - C1694 * C701 + C15447 * C794 +
            C1695 * C3904 - C1910 * C3798 - C1695 * C4110 + C15265 * C4213) *
               C15472) *
              C15135) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (C71 * C86 - C72 * C81 - C71 * C87 + C61 * C96 + C73 * C88 -
          C74 * C82 - C73 * C89 + C62 * C97 + C75 * C90 - C76 * C83 -
          C75 * C91 + C63 * C98 + C77 * C92 - C78 * C84 - C77 * C93 +
          C64 * C99 + C79 * C94 - C80 * C85 - C79 * C95 + C65 * C100) *
         C15178 * C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C385 * C86 - C386 * C81 - C385 * C87 + C379 * C96 + C387 * C88 -
           C388 * C82 - C387 * C89 + C380 * C97 + C389 * C90 - C390 * C83 -
           C389 * C91 + C15468 * C98) *
              C15178 * C15504 +
          (C385 * C397 - C386 * C391 - C385 * C398 + C379 * C409 + C387 * C399 -
           C388 * C392 - C387 * C400 + C380 * C410 + C389 * C401 - C390 * C393 -
           C389 * C402 + C15468 * C411) *
              C15178 * C15492 +
          (C385 * C403 - C386 * C394 - C385 * C404 + C379 * C412 + C387 * C405 -
           C388 * C395 - C387 * C406 + C380 * C413 + C389 * C407 - C390 * C396 -
           C389 * C408 + C15468 * C414) *
              C15178 * C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C2454 * C86 - C2455 * C81 - C2454 * C87 + C15501 * C96 +
           C2456 * C88 - C2457 * C82 - C2456 * C89 + C15488 * C97 +
           C2458 * C90 - C2459 * C83 - C2458 * C91 + C15468 * C98) *
              C15178 * C2451 +
          (C2454 * C397 - C2455 * C391 - C2454 * C398 + C15501 * C409 +
           C2456 * C399 - C2457 * C392 - C2456 * C400 + C15488 * C410 +
           C2458 * C401 - C2459 * C393 - C2458 * C402 + C15468 * C411) *
              C15178 * C2452 +
          (C2454 * C403 - C2455 * C394 - C2454 * C404 + C15501 * C412 +
           C2456 * C405 - C2457 * C395 - C2456 * C406 + C15488 * C413 +
           C2458 * C407 - C2459 * C396 - C2458 * C408 + C15468 * C414) *
              C15178 * C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C2798 * C86 - C2799 * C81 - C2798 * C87 + C15125 * C96) * C15178 *
              C2793 +
          (C2798 * C397 - C2799 * C391 - C2798 * C398 + C15125 * C409) *
              C15178 * C2794 +
          (C2798 * C403 - C2799 * C394 - C2798 * C404 + C15125 * C412) *
              C15178 * C2795 +
          (C2798 * C2802 - C2799 * C2800 - C2798 * C2803 + C15125 * C2806) *
              C15178 * C2796 +
          (C2798 * C2804 - C2799 * C2801 - C2798 * C2805 + C15125 * C2807) *
              C15178 * C2797) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C15167 * C124 - C123 * C81) * C71 +
                    (C15167 * C129 - C123 * C87) * C61 +
                    (C15167 * C125 - C123 * C82) * C73 +
                    (C15167 * C130 - C123 * C89) * C62 +
                    (C15167 * C126 - C123 * C83) * C75 +
                    (C15167 * C131 - C123 * C91) * C63 +
                    (C15167 * C127 - C123 * C84) * C77 +
                    (C15167 * C132 - C123 * C93) * C64 +
                    (C15167 * C128 - C123 * C85) * C79 +
                    (C15167 * C133 - C123 * C95) * C65) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                     C15472 * C457 - C455 * C394) *
                        C385 +
                    (C15504 * C129 - C453 * C87 + C15492 * C462 - C454 * C398 +
                     C15472 * C463 - C455 * C404) *
                        C379 +
                    (C15504 * C125 - C453 * C82 + C15492 * C458 - C454 * C392 +
                     C15472 * C459 - C455 * C395) *
                        C387 +
                    (C15504 * C130 - C453 * C89 + C15492 * C464 - C454 * C400 +
                     C15472 * C465 - C455 * C406) *
                        C380 +
                    (C15504 * C126 - C453 * C83 + C15492 * C460 - C454 * C393 +
                     C15472 * C461 - C455 * C396) *
                        C389 +
                    (C15504 * C131 - C453 * C91 + C15492 * C466 - C454 * C402 +
                     C15472 * C467 - C455 * C408) *
                        C15468) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                     C15472 * C457 - C2500 * C394) *
                        C2454 +
                    (C2451 * C129 - C2498 * C87 + C2452 * C462 - C2499 * C398 +
                     C15472 * C463 - C2500 * C404) *
                        C15501 +
                    (C2451 * C125 - C2498 * C82 + C2452 * C458 - C2499 * C392 +
                     C15472 * C459 - C2500 * C395) *
                        C2456 +
                    (C2451 * C130 - C2498 * C89 + C2452 * C464 - C2499 * C400 +
                     C15472 * C465 - C2500 * C406) *
                        C15488 +
                    (C2451 * C126 - C2498 * C83 + C2452 * C460 - C2499 * C393 +
                     C15472 * C461 - C2500 * C396) *
                        C2458 +
                    (C2451 * C131 - C2498 * C91 + C2452 * C466 - C2499 * C402 +
                     C15472 * C467 - C2500 * C408) *
                        C15468) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C2793 * C124 - C2830 * C81 + C2794 * C456 - C2831 * C391 +
                     C2795 * C457 - C2832 * C394 + C2796 * C2835 -
                     C2833 * C2800 + C2797 * C2836 - C2834 * C2801) *
                        C2798 +
                    (C2793 * C129 - C2830 * C87 + C2794 * C462 - C2831 * C398 +
                     C2795 * C463 - C2832 * C404 + C2796 * C2837 -
                     C2833 * C2803 + C2797 * C2838 - C2834 * C2805) *
                        C15125) *
                   C15178 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C15178 * C157 - C156 * C81) * C71 +
                    (C15178 * C162 - C156 * C87) * C61 +
                    (C15178 * C158 - C156 * C82) * C73 +
                    (C15178 * C163 - C156 * C89) * C62 +
                    (C15178 * C159 - C156 * C83) * C75 +
                    (C15178 * C164 - C156 * C91) * C63 +
                    (C15178 * C160 - C156 * C84) * C77 +
                    (C15178 * C165 - C156 * C93) * C64 +
                    (C15178 * C161 - C156 * C85) * C79 +
                    (C15178 * C166 - C156 * C95) * C65) *
                   C15167 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C385 +
                     (C15178 * C162 - C156 * C87) * C379 +
                     (C15178 * C158 - C156 * C82) * C387 +
                     (C15178 * C163 - C156 * C89) * C380 +
                     (C15178 * C159 - C156 * C83) * C389 +
                     (C15178 * C164 - C156 * C91) * C15468) *
                        C15504 +
                    ((C15178 * C506 - C156 * C391) * C385 +
                     (C15178 * C512 - C156 * C398) * C379 +
                     (C15178 * C507 - C156 * C392) * C387 +
                     (C15178 * C513 - C156 * C400) * C380 +
                     (C15178 * C508 - C156 * C393) * C389 +
                     (C15178 * C514 - C156 * C402) * C15468) *
                        C15492 +
                    ((C15178 * C509 - C156 * C394) * C385 +
                     (C15178 * C515 - C156 * C404) * C379 +
                     (C15178 * C510 - C156 * C395) * C387 +
                     (C15178 * C516 - C156 * C406) * C380 +
                     (C15178 * C511 - C156 * C396) * C389 +
                     (C15178 * C517 - C156 * C408) * C15468) *
                        C15472) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C2454 +
                     (C15178 * C162 - C156 * C87) * C15501 +
                     (C15178 * C158 - C156 * C82) * C2456 +
                     (C15178 * C163 - C156 * C89) * C15488 +
                     (C15178 * C159 - C156 * C83) * C2458 +
                     (C15178 * C164 - C156 * C91) * C15468) *
                        C2451 +
                    ((C15178 * C506 - C156 * C391) * C2454 +
                     (C15178 * C512 - C156 * C398) * C15501 +
                     (C15178 * C507 - C156 * C392) * C2456 +
                     (C15178 * C513 - C156 * C400) * C15488 +
                     (C15178 * C508 - C156 * C393) * C2458 +
                     (C15178 * C514 - C156 * C402) * C15468) *
                        C2452 +
                    ((C15178 * C509 - C156 * C394) * C2454 +
                     (C15178 * C515 - C156 * C404) * C15501 +
                     (C15178 * C510 - C156 * C395) * C2456 +
                     (C15178 * C516 - C156 * C406) * C15488 +
                     (C15178 * C511 - C156 * C396) * C2458 +
                     (C15178 * C517 - C156 * C408) * C15468) *
                        C15472) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C2798 +
                     (C15178 * C162 - C156 * C87) * C15125) *
                        C2793 +
                    ((C15178 * C506 - C156 * C391) * C2798 +
                     (C15178 * C512 - C156 * C398) * C15125) *
                        C2794 +
                    ((C15178 * C509 - C156 * C394) * C2798 +
                     (C15178 * C515 - C156 * C404) * C15125) *
                        C2795 +
                    ((C15178 * C2861 - C156 * C2800) * C2798 +
                     (C15178 * C2863 - C156 * C2803) * C15125) *
                        C2796 +
                    ((C15178 * C2862 - C156 * C2801) * C2798 +
                     (C15178 * C2864 - C156 * C2805) * C15125) *
                        C2797) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C61 * C86 - C71 * C81 + C62 * C88 - C73 * C82 + C63 * C90 -
           C75 * C83 + C64 * C92 - C77 * C84 + C65 * C94 - C79 * C85) *
              C123 +
          (C61 * C194 - C71 * C189 + C62 * C195 - C73 * C190 + C63 * C196 -
           C75 * C191 + C64 * C197 - C77 * C192 + C65 * C198 - C79 * C193) *
              C15167) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 + C15468 * C90 -
           C389 * C83) *
              C453 +
          (C379 * C194 - C385 * C189 + C380 * C195 - C387 * C190 +
           C15468 * C196 - C389 * C191) *
              C15504 +
          (C379 * C397 - C385 * C391 + C380 * C399 - C387 * C392 +
           C15468 * C401 - C389 * C393) *
              C454 +
          (C379 * C562 - C385 * C556 + C380 * C563 - C387 * C557 +
           C15468 * C564 - C389 * C558) *
              C15492 +
          (C379 * C403 - C385 * C394 + C380 * C405 - C387 * C395 +
           C15468 * C407 - C389 * C396) *
              C455 +
          (C379 * C565 - C385 * C559 + C380 * C566 - C387 * C560 +
           C15468 * C567 - C389 * C561) *
              C15472) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
           C15468 * C90 - C2458 * C83) *
              C2498 +
          (C15501 * C194 - C2454 * C189 + C15488 * C195 - C2456 * C190 +
           C15468 * C196 - C2458 * C191) *
              C2451 +
          (C15501 * C397 - C2454 * C391 + C15488 * C399 - C2456 * C392 +
           C15468 * C401 - C2458 * C393) *
              C2499 +
          (C15501 * C562 - C2454 * C556 + C15488 * C563 - C2456 * C557 +
           C15468 * C564 - C2458 * C558) *
              C2452 +
          (C15501 * C403 - C2454 * C394 + C15488 * C405 - C2456 * C395 +
           C15468 * C407 - C2458 * C396) *
              C2500 +
          (C15501 * C565 - C2454 * C559 + C15488 * C566 - C2456 * C560 +
           C15468 * C567 - C2458 * C561) *
              C15472) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C15125 * C86 - C2798 * C81) * C2830 +
          (C15125 * C194 - C2798 * C189) * C2793 +
          (C15125 * C397 - C2798 * C391) * C2831 +
          (C15125 * C562 - C2798 * C556) * C2794 +
          (C15125 * C403 - C2798 * C394) * C2832 +
          (C15125 * C565 - C2798 * C559) * C2795 +
          (C15125 * C2802 - C2798 * C2800) * C2833 +
          (C15125 * C2889 - C2798 * C2887) * C2796 +
          (C15125 * C2804 - C2798 * C2801) * C2834 +
          (C15125 * C2890 - C2798 * C2888) * C2797) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C123 * C124 - C221 * C81 - C123 * C189 + C15167 * C222) * C61 +
          (C123 * C125 - C221 * C82 - C123 * C190 + C15167 * C223) * C62 +
          (C123 * C126 - C221 * C83 - C123 * C191 + C15167 * C224) * C63 +
          (C123 * C127 - C221 * C84 - C123 * C192 + C15167 * C225) * C64 +
          (C123 * C128 - C221 * C85 - C123 * C193 + C15167 * C226) * C65) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C453 * C124 - C606 * C81 - C453 * C189 + C15504 * C222 +
           C454 * C456 - C607 * C391 - C454 * C556 + C15492 * C609 +
           C455 * C457 - C608 * C394 - C455 * C559 + C15472 * C610) *
              C379 +
          (C453 * C125 - C606 * C82 - C453 * C190 + C15504 * C223 +
           C454 * C458 - C607 * C392 - C454 * C557 + C15492 * C611 +
           C455 * C459 - C608 * C395 - C455 * C560 + C15472 * C612) *
              C380 +
          (C453 * C126 - C606 * C83 - C453 * C191 + C15504 * C224 +
           C454 * C460 - C607 * C393 - C454 * C558 + C15492 * C613 +
           C455 * C461 - C608 * C396 - C455 * C561 + C15472 * C614) *
              C15468) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C2498 * C124 - C2615 * C81 - C2498 * C189 + C2451 * C222 +
           C2499 * C456 - C2616 * C391 - C2499 * C556 + C2452 * C609 +
           C2500 * C457 - C2617 * C394 - C2500 * C559 + C15472 * C610) *
              C15501 +
          (C2498 * C125 - C2615 * C82 - C2498 * C190 + C2451 * C223 +
           C2499 * C458 - C2616 * C392 - C2499 * C557 + C2452 * C611 +
           C2500 * C459 - C2617 * C395 - C2500 * C560 + C15472 * C612) *
              C15488 +
          (C2498 * C126 - C2615 * C83 - C2498 * C191 + C2451 * C224 +
           C2499 * C460 - C2616 * C393 - C2499 * C558 + C2452 * C613 +
           C2500 * C461 - C2617 * C396 - C2500 * C561 + C15472 * C614) *
              C15468) *
         C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (C2830 * C124 - C2913 * C81 - C2830 * C189 + C2793 * C222 +
          C2831 * C456 - C2914 * C391 - C2831 * C556 + C2794 * C609 +
          C2832 * C457 - C2915 * C394 - C2832 * C559 + C2795 * C610 +
          C2833 * C2835 - C2916 * C2800 - C2833 * C2887 + C2796 * C2918 +
          C2834 * C2836 - C2917 * C2801 - C2834 * C2888 + C2797 * C2919) *
         C15125 * C15178 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C123 +
                     (C15178 * C249 - C156 * C189) * C15167) *
                        C61 +
                    ((C15178 * C158 - C156 * C82) * C123 +
                     (C15178 * C250 - C156 * C190) * C15167) *
                        C62 +
                    ((C15178 * C159 - C156 * C83) * C123 +
                     (C15178 * C251 - C156 * C191) * C15167) *
                        C63 +
                    ((C15178 * C160 - C156 * C84) * C123 +
                     (C15178 * C252 - C156 * C192) * C15167) *
                        C64 +
                    ((C15178 * C161 - C156 * C85) * C123 +
                     (C15178 * C253 - C156 * C193) * C15167) *
                        C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C453 +
                     (C15178 * C249 - C156 * C189) * C15504 +
                     (C15178 * C506 - C156 * C391) * C454 +
                     (C15178 * C653 - C156 * C556) * C15492 +
                     (C15178 * C509 - C156 * C394) * C455 +
                     (C15178 * C654 - C156 * C559) * C15472) *
                        C379 +
                    ((C15178 * C158 - C156 * C82) * C453 +
                     (C15178 * C250 - C156 * C190) * C15504 +
                     (C15178 * C507 - C156 * C392) * C454 +
                     (C15178 * C655 - C156 * C557) * C15492 +
                     (C15178 * C510 - C156 * C395) * C455 +
                     (C15178 * C656 - C156 * C560) * C15472) *
                        C380 +
                    ((C15178 * C159 - C156 * C83) * C453 +
                     (C15178 * C251 - C156 * C191) * C15504 +
                     (C15178 * C508 - C156 * C393) * C454 +
                     (C15178 * C657 - C156 * C558) * C15492 +
                     (C15178 * C511 - C156 * C396) * C455 +
                     (C15178 * C658 - C156 * C561) * C15472) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C15178 * C157 - C156 * C81) * C2498 +
                     (C15178 * C249 - C156 * C189) * C2451 +
                     (C15178 * C506 - C156 * C391) * C2499 +
                     (C15178 * C653 - C156 * C556) * C2452 +
                     (C15178 * C509 - C156 * C394) * C2500 +
                     (C15178 * C654 - C156 * C559) * C15472) *
                        C15501 +
                    ((C15178 * C158 - C156 * C82) * C2498 +
                     (C15178 * C250 - C156 * C190) * C2451 +
                     (C15178 * C507 - C156 * C392) * C2499 +
                     (C15178 * C655 - C156 * C557) * C2452 +
                     (C15178 * C510 - C156 * C395) * C2500 +
                     (C15178 * C656 - C156 * C560) * C15472) *
                        C15488 +
                    ((C15178 * C159 - C156 * C83) * C2498 +
                     (C15178 * C251 - C156 * C191) * C2451 +
                     (C15178 * C508 - C156 * C393) * C2499 +
                     (C15178 * C657 - C156 * C558) * C2452 +
                     (C15178 * C511 - C156 * C396) * C2500 +
                     (C15178 * C658 - C156 * C561) * C15472) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C15178 * C157 - C156 * C81) * C2830 +
                    (C15178 * C249 - C156 * C189) * C2793 +
                    (C15178 * C506 - C156 * C391) * C2831 +
                    (C15178 * C653 - C156 * C556) * C2794 +
                    (C15178 * C509 - C156 * C394) * C2832 +
                    (C15178 * C654 - C156 * C559) * C2795 +
                    (C15178 * C2861 - C156 * C2800) * C2833 +
                    (C15178 * C2942 - C156 * C2887) * C2796 +
                    (C15178 * C2862 - C156 * C2801) * C2834 +
                    (C15178 * C2943 - C156 * C2888) * C2797) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C61 * C86 - C71 * C81 + C62 * C88 - C73 * C82 + C63 * C90 -
           C75 * C83 + C64 * C92 - C77 * C84 + C65 * C94 - C79 * C85) *
              C156 +
          (C61 * C281 - C71 * C276 + C62 * C282 - C73 * C277 + C63 * C283 -
           C75 * C278 + C64 * C284 - C77 * C279 + C65 * C285 - C79 * C280) *
              C15178) *
         C15167 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C379 * C86 - C385 * C81 + C380 * C88 - C387 * C82 + C15468 * C90 -
            C389 * C83) *
               C156 +
           (C379 * C281 - C385 * C276 + C380 * C282 - C387 * C277 +
            C15468 * C283 - C389 * C278) *
               C15178) *
              C15504 +
          ((C379 * C397 - C385 * C391 + C380 * C399 - C387 * C392 +
            C15468 * C401 - C389 * C393) *
               C156 +
           (C379 * C703 - C385 * C697 + C380 * C704 - C387 * C698 +
            C15468 * C705 - C389 * C699) *
               C15178) *
              C15492 +
          ((C379 * C403 - C385 * C394 + C380 * C405 - C387 * C395 +
            C15468 * C407 - C389 * C396) *
               C156 +
           (C379 * C706 - C385 * C700 + C380 * C707 - C387 * C701 +
            C15468 * C708 - C389 * C702) *
               C15178) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15501 * C86 - C2454 * C81 + C15488 * C88 - C2456 * C82 +
            C15468 * C90 - C2458 * C83) *
               C156 +
           (C15501 * C281 - C2454 * C276 + C15488 * C282 - C2456 * C277 +
            C15468 * C283 - C2458 * C278) *
               C15178) *
              C2451 +
          ((C15501 * C397 - C2454 * C391 + C15488 * C399 - C2456 * C392 +
            C15468 * C401 - C2458 * C393) *
               C156 +
           (C15501 * C703 - C2454 * C697 + C15488 * C704 - C2456 * C698 +
            C15468 * C705 - C2458 * C699) *
               C15178) *
              C2452 +
          ((C15501 * C403 - C2454 * C394 + C15488 * C405 - C2456 * C395 +
            C15468 * C407 - C2458 * C396) *
               C156 +
           (C15501 * C706 - C2454 * C700 + C15488 * C707 - C2456 * C701 +
            C15468 * C708 - C2458 * C702) *
               C15178) *
              C15472) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15125 * C86 - C2798 * C81) * C156 +
           (C15125 * C281 - C2798 * C276) * C15178) *
              C2793 +
          ((C15125 * C397 - C2798 * C391) * C156 +
           (C15125 * C703 - C2798 * C697) * C15178) *
              C2794 +
          ((C15125 * C403 - C2798 * C394) * C156 +
           (C15125 * C706 - C2798 * C700) * C15178) *
              C2795 +
          ((C15125 * C2802 - C2798 * C2800) * C156 +
           (C15125 * C2968 - C2798 * C2966) * C15178) *
              C2796 +
          ((C15125 * C2804 - C2798 * C2801) * C156 +
           (C15125 * C2969 - C2798 * C2967) * C15178) *
              C2797) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C15167 * C124 - C123 * C81) * C156 +
                     (C15167 * C308 - C123 * C276) * C15178) *
                        C61 +
                    ((C15167 * C125 - C123 * C82) * C156 +
                     (C15167 * C309 - C123 * C277) * C15178) *
                        C62 +
                    ((C15167 * C126 - C123 * C83) * C156 +
                     (C15167 * C310 - C123 * C278) * C15178) *
                        C63 +
                    ((C15167 * C127 - C123 * C84) * C156 +
                     (C15167 * C311 - C123 * C279) * C15178) *
                        C64 +
                    ((C15167 * C128 - C123 * C85) * C156 +
                     (C15167 * C312 - C123 * C280) * C15178) *
                        C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C15504 * C124 - C453 * C81 + C15492 * C456 - C454 * C391 +
                      C15472 * C457 - C455 * C394) *
                         C156 +
                     (C15504 * C308 - C453 * C276 + C15492 * C747 -
                      C454 * C697 + C15472 * C748 - C455 * C700) *
                         C15178) *
                        C379 +
                    ((C15504 * C125 - C453 * C82 + C15492 * C458 - C454 * C392 +
                      C15472 * C459 - C455 * C395) *
                         C156 +
                     (C15504 * C309 - C453 * C277 + C15492 * C749 -
                      C454 * C698 + C15472 * C750 - C455 * C701) *
                         C15178) *
                        C380 +
                    ((C15504 * C126 - C453 * C83 + C15492 * C460 - C454 * C393 +
                      C15472 * C461 - C455 * C396) *
                         C156 +
                     (C15504 * C310 - C453 * C278 + C15492 * C751 -
                      C454 * C699 + C15472 * C752 - C455 * C702) *
                         C15178) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C2451 * C124 - C2498 * C81 + C2452 * C456 - C2499 * C391 +
                      C15472 * C457 - C2500 * C394) *
                         C156 +
                     (C2451 * C308 - C2498 * C276 + C2452 * C747 -
                      C2499 * C697 + C15472 * C748 - C2500 * C700) *
                         C15178) *
                        C15501 +
                    ((C2451 * C125 - C2498 * C82 + C2452 * C458 - C2499 * C392 +
                      C15472 * C459 - C2500 * C395) *
                         C156 +
                     (C2451 * C309 - C2498 * C277 + C2452 * C749 -
                      C2499 * C698 + C15472 * C750 - C2500 * C701) *
                         C15178) *
                        C15488 +
                    ((C2451 * C126 - C2498 * C83 + C2452 * C460 - C2499 * C393 +
                      C15472 * C461 - C2500 * C396) *
                         C156 +
                     (C2451 * C310 - C2498 * C278 + C2452 * C751 -
                      C2499 * C699 + C15472 * C752 - C2500 * C702) *
                         C15178) *
                        C15468) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C2793 * C124 - C2830 * C81 + C2794 * C456 - C2831 * C391 +
                     C2795 * C457 - C2832 * C394 + C2796 * C2835 -
                     C2833 * C2800 + C2797 * C2836 - C2834 * C2801) *
                        C156 +
                    (C2793 * C308 - C2830 * C276 + C2794 * C747 - C2831 * C697 +
                     C2795 * C748 - C2832 * C700 + C2796 * C2992 -
                     C2833 * C2966 + C2797 * C2993 - C2834 * C2967) *
                        C15178) *
                   C15125 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C15167 *
              C61 +
          (C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C15167 *
              C62 +
          (C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C15167 *
              C63 +
          (C156 * C160 - C335 * C84 - C156 * C279 + C15178 * C339) * C15167 *
              C64 +
          (C156 * C161 - C335 * C85 - C156 * C280 + C15178 * C340) * C15167 *
              C65) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C15504 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C15492 +
           (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C15472) *
              C379 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C15504 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C15492 +
           (C156 * C510 - C335 * C395 - C156 * C701 + C15178 * C794) * C15472) *
              C380 +
          ((C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C15504 +
           (C156 * C508 - C335 * C393 - C156 * C699 + C15178 * C795) * C15492 +
           (C156 * C511 - C335 * C396 - C156 * C702 + C15178 * C796) * C15472) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C2451 +
           (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C2452 +
           (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C15472) *
              C15501 +
          ((C156 * C158 - C335 * C82 - C156 * C277 + C15178 * C337) * C2451 +
           (C156 * C507 - C335 * C392 - C156 * C698 + C15178 * C793) * C2452 +
           (C156 * C510 - C335 * C395 - C156 * C701 + C15178 * C794) * C15472) *
              C15488 +
          ((C156 * C159 - C335 * C83 - C156 * C278 + C15178 * C338) * C2451 +
           (C156 * C508 - C335 * C393 - C156 * C699 + C15178 * C795) * C2452 +
           (C156 * C511 - C335 * C396 - C156 * C702 + C15178 * C796) * C15472) *
              C15468) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C156 * C157 - C335 * C81 - C156 * C276 + C15178 * C336) * C2793 +
          (C156 * C506 - C335 * C391 - C156 * C697 + C15178 * C791) * C2794 +
          (C156 * C509 - C335 * C394 - C156 * C700 + C15178 * C792) * C2795 +
          (C156 * C2861 - C335 * C2800 - C156 * C2966 + C15178 * C3016) *
              C2796 +
          (C156 * C2862 - C335 * C2801 - C156 * C2967 + C15178 * C3017) *
              C2797) *
         C15125 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
}
