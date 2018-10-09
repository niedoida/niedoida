/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ppsd_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1102_11(const double ae,
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
    const double C29037 = ae * be;
    const double C29036 = xA - xB;
    const double C29035 = ae + be;
    const double C29034 = 0 * be;
    const double C29069 = yA - yB;
    const double C29072 = zA - zB;
    const double C29129 = 0 * be;
    const double C29159 = 0 * be;
    const double C29179 = p + q;
    const double C29178 = p * q;
    const double C29184 = xP - xQ;
    const double C29183 = bs[2];
    const double C29191 = std::pow(ae, 2);
    const double C29189 = bs[3];
    const double C29202 = bs[4];
    const double C29223 = bs[5];
    const double C29254 = yP - yQ;
    const double C29279 = zP - zQ;
    const double C93 = bs[0];
    const double C29999 = ce + de;
    const double C29998 = ce * de;
    const double C29997 = xC - xD;
    const double C30011 = yC - yD;
    const double C30025 = zC - zD;
    const double C29040 = 2 * C29037;
    const double C29039 = C29037 * C29036;
    const double C29977 = std::pow(C29036, 2);
    const double C30127 = C29036 * be;
    const double C30126 = C29036 * ae;
    const double C29038 = std::pow(C29035, 2);
    const double C29986 = 2 * C29035;
    const double C29089 = C29037 * C29069;
    const double C30071 = std::pow(C29069, 2);
    const double C30136 = C29069 * be;
    const double C30134 = C29069 * ae;
    const double C29101 = C29037 * C29072;
    const double C30086 = std::pow(C29072, 2);
    const double C30137 = C29072 * be;
    const double C30135 = C29072 * ae;
    const double C29180 = 2 * C29178;
    const double C29192 = C29184 * ae;
    const double C29188 = std::pow(C29184, 2);
    const double C29257 = C29254 * ae;
    const double C29256 = C29184 * C29254;
    const double C29305 = C29254 * C29184;
    const double C29318 = std::pow(C29254, 2);
    const double C29282 = C29279 * ae;
    const double C29281 = C29184 * C29279;
    const double C29332 = C29254 * C29279;
    const double C29343 = C29279 * C29184;
    const double C29356 = C29279 * C29254;
    const double C29367 = std::pow(C29279, 2);
    const double C30131 = 2 * C29999;
    const double C30130 = std::pow(C29999, 2);
    const double C30000 = std::pow(C29997, 2);
    const double C30129 = C29997 * ce;
    const double C30012 = std::pow(C30011, 2);
    const double C30132 = C30011 * ce;
    const double C30026 = std::pow(C30025, 2);
    const double C30133 = C30025 * ce;
    const double C29978 = C29977 * C29037;
    const double C29042 = 2 * C29038;
    const double C30128 = std::pow(C29986, -1);
    const double C30072 = C30071 * C29037;
    const double C30087 = C30086 * C29037;
    const double C29182 = C29180 / C29179;
    const double C103 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C29180 / C29179, 2) -
          (bs[1] * C29180) / C29179) *
         std::pow(ae, 2)) /
        C29038;
    const double C94 = -(C29184 * bs[1] * C29180) / C29179;
    const double C630 = -(C29254 * bs[1] * C29180) / C29179;
    const double C1071 = -(C29279 * bs[1] * C29180) / C29179;
    const double C29194 = C29189 * C29192;
    const double C29205 = C29202 * C29192;
    const double C29228 = C29223 * C29192;
    const double C98 = (-(bs[1] * C29192 * C29180) / C29179) / C29035;
    const double C29204 = C29188 * C29202;
    const double C29227 = C29188 * C29223;
    const double C29259 = C29189 * C29257;
    const double C29263 = C29202 * C29257;
    const double C29270 = C29223 * C29257;
    const double C156 = (-(bs[1] * C29257 * C29180) / C29179) / C29035;
    const double C29258 = C29256 * C29191;
    const double C29306 = C29305 * C29191;
    const double C29320 = C29318 * C29202;
    const double C29325 = C29318 * C29223;
    const double C29284 = C29189 * C29282;
    const double C29288 = C29202 * C29282;
    const double C29295 = C29223 * C29282;
    const double C223 = (-(bs[1] * C29282 * C29180) / C29179) / C29035;
    const double C29283 = C29281 * C29191;
    const double C29333 = C29332 * C29191;
    const double C29344 = C29343 * C29191;
    const double C29357 = C29356 * C29191;
    const double C29369 = C29367 * C29202;
    const double C29374 = C29367 * C29223;
    const double C30142 = std::pow(C30131, -2);
    const double C30140 = std::pow(C30131, -1);
    const double C30001 = C30000 * C29998;
    const double C30013 = C30012 * C29998;
    const double C30027 = C30026 * C29998;
    const double C29979 = C29978 / C29035;
    const double C30073 = C30072 / C29035;
    const double C30088 = C30087 / C29035;
    const double C29185 = std::pow(C29182, 2);
    const double C29190 = -C29182;
    const double C29203 = std::pow(C29182, 4);
    const double C29262 = C29202 * C29258;
    const double C29269 = C29223 * C29258;
    const double C29308 = C29202 * C29306;
    const double C29311 = C29223 * C29306;
    const double C29287 = C29202 * C29283;
    const double C29294 = C29223 * C29283;
    const double C29335 = C29202 * C29333;
    const double C29338 = C29223 * C29333;
    const double C29346 = C29202 * C29344;
    const double C29349 = C29223 * C29344;
    const double C29359 = C29202 * C29357;
    const double C29362 = C29223 * C29357;
    const double C30002 = C30001 / C29999;
    const double C30014 = C30013 / C29999;
    const double C30028 = C30027 / C29999;
    const double C29980 = -C29979;
    const double C30074 = -C30073;
    const double C30089 = -C30088;
    const double C29187 = C29183 * C29185;
    const double C104 = (2 * ae * C29185 * C29183 * C29184 * ae +
                         C29184 *
                             (C29183 * C29185 + std::pow(C29184, 2) * bs[3] *
                                                    std::pow(-C29182, 3)) *
                             std::pow(ae, 2)) /
                        C29038;
    const double C161 =
        (C29185 * C29183 * C29184 * (yP - yQ) * C29191) / C29038;
    const double C228 =
        (C29185 * C29183 * C29184 * (zP - zQ) * C29191) / C29038;
    const double C289 = (C29185 * C29183 * C29254 * C29184 * C29191) / C29038;
    const double C333 =
        ((std::pow(C29254, 2) * C29183 * C29185 - (bs[1] * C29180) / C29179) *
         C29191) /
        C29038;
    const double C396 = (C29185 * C29183 * C29254 * C29279 * C29191) / C29038;
    const double C455 = (C29185 * C29183 * C29279 * C29184 * C29191) / C29038;
    const double C498 = (C29185 * C29183 * C29279 * C29254 * C29191) / C29038;
    const double C558 =
        ((std::pow(C29279, 2) * C29183 * C29185 - (bs[1] * C29180) / C29179) *
         C29191) /
        C29038;
    const double C99 = (C29184 * C29185 * C29183 * C29192) / C29035 -
                       (ae * bs[1] * C29180) / (C29179 * C29035);
    const double C157 = (C29184 * C29185 * C29183 * C29257) / C29035;
    const double C224 = (C29184 * C29185 * C29183 * C29282) / C29035;
    const double C636 = (C29254 * C29185 * C29183 * C29192) / C29035;
    const double C692 = (C29254 * C29185 * C29183 * C29257) / C29035 -
                        (ae * bs[1] * C29180) / (C29179 * C29035);
    const double C742 = (C29254 * C29185 * C29183 * C29282) / C29035;
    const double C1077 = (C29279 * C29185 * C29183 * C29192) / C29035;
    const double C1133 = (C29279 * C29185 * C29183 * C29257) / C29035;
    const double C1183 = (C29279 * C29185 * C29183 * C29282) / C29035 -
                         (ae * bs[1] * C29180) / (C29179 * C29035);
    const double C29193 = std::pow(C29190, 3);
    const double C29224 = std::pow(C29190, 5);
    const double C29209 = C29203 * C29205;
    const double C29208 = C29204 * C29203;
    const double C29222 = C29202 * C29203;
    const double C29265 = C29203 * C29263;
    const double C29290 = C29203 * C29288;
    const double C29321 = C29320 * C29203;
    const double C29370 = C29369 * C29203;
    const double C29264 = C29203 * C29262;
    const double C29309 = C29203 * C29308;
    const double C29289 = C29203 * C29287;
    const double C29336 = C29203 * C29335;
    const double C29347 = C29203 * C29346;
    const double C29360 = C29203 * C29359;
    const double C30003 = -C30002;
    const double C30015 = -C30014;
    const double C30029 = -C30028;
    const double C29981 = std::exp(C29980);
    const double C30075 = std::exp(C30074);
    const double C30090 = std::exp(C30089);
    const double C29195 = C29187 * ae;
    const double C95 = C29187 * C29188 - (bs[1] * C29180) / C29179;
    const double C629 = C29254 * C29184 * C29187;
    const double C631 = C29187 * C29318 - (bs[1] * C29180) / C29179;
    const double C1070 = C29279 * C29184 * C29187;
    const double C1072 = C29187 * C29367 - (bs[1] * C29180) / C29179;
    const double C2593 = C29279 * C29254 * C29187;
    const double C29196 = C29193 * C29194;
    const double C29201 = C29189 * C29193;
    const double C29260 = C29193 * C29259;
    const double C29285 = C29193 * C29284;
    const double C162 = (ae * C29185 * C29183 * C29254 * ae +
                         C29184 * C29193 * C29189 * C29184 * C29254 * C29191) /
                        C29038;
    const double C229 = (ae * C29185 * C29183 * C29279 * ae +
                         C29184 * C29193 * C29189 * C29184 * C29279 * C29191) /
                        C29038;
    const double C290 = (ae * C29185 * C29183 * C29257 +
                         C29184 * C29193 * C29189 * C29254 * C29184 * C29191) /
                        C29038;
    const double C334 =
        (C29184 * (C29187 + std::pow(C29254, 2) * C29189 * C29193) * C29191) /
        C29038;
    const double C397 =
        (C29184 * C29193 * C29189 * C29254 * C29279 * C29191) / C29038;
    const double C398 =
        (C29193 * C29189 * C29333 + C29203 * C29202 * C29333 * C29188) / C29038;
    const double C456 = (ae * C29185 * C29183 * C29282 +
                         C29184 * C29193 * C29189 * C29279 * C29184 * C29191) /
                        C29038;
    const double C499 =
        (C29184 * C29193 * C29189 * C29279 * C29254 * C29191) / C29038;
    const double C500 =
        (C29193 * C29189 * C29357 + C29203 * C29202 * C29357 * C29188) / C29038;
    const double C559 =
        (C29184 * (C29187 + std::pow(C29279, 2) * C29189 * C29193) * C29191) /
        C29038;
    const double C642 =
        (C29254 * (C29187 + C29188 * C29189 * C29193) * C29191) / C29038;
    const double C698 =
        (ae * C29185 * C29183 * C29192 + C29254 * C29193 * C29189 * C29258) /
        C29038;
    const double C748 = (C29254 * C29193 * C29189 * C29283) / C29038;
    const double C792 =
        (ae * C29185 * C29183 * C29192 + C29254 * C29193 * C29189 * C29306) /
        C29038;
    const double C836 =
        (2 * ae * C29185 * C29183 * C29257 +
         C29254 * (C29187 + C29318 * C29189 * C29193) * C29191) /
        C29038;
    const double C886 =
        (ae * C29185 * C29183 * C29282 + C29254 * C29193 * C29189 * C29333) /
        C29038;
    const double C930 = (C29254 * C29193 * C29189 * C29344) / C29038;
    const double C974 =
        (ae * C29185 * C29183 * C29282 + C29254 * C29193 * C29189 * C29357) /
        C29038;
    const double C1018 =
        (C29254 * (C29187 + C29367 * C29189 * C29193) * C29191) / C29038;
    const double C1083 =
        (C29279 * (C29187 + C29188 * C29189 * C29193) * C29191) / C29038;
    const double C1139 = (C29279 * C29193 * C29189 * C29258) / C29038;
    const double C1189 =
        (ae * C29185 * C29183 * C29192 + C29279 * C29193 * C29189 * C29283) /
        C29038;
    const double C1233 = (C29279 * C29193 * C29189 * C29306) / C29038;
    const double C1277 =
        (C29279 * (C29187 + C29318 * C29189 * C29193) * C29191) / C29038;
    const double C1327 =
        (ae * C29185 * C29183 * C29257 + C29279 * C29193 * C29189 * C29333) /
        C29038;
    const double C1371 =
        (ae * C29185 * C29183 * C29192 + C29279 * C29193 * C29189 * C29344) /
        C29038;
    const double C1415 =
        (ae * C29185 * C29183 * C29257 + C29279 * C29193 * C29189 * C29357) /
        C29038;
    const double C1459 =
        (2 * ae * C29185 * C29183 * C29282 +
         C29279 * (C29187 + C29367 * C29189 * C29193) * C29191) /
        C29038;
    const double C29233 = C29224 * C29228;
    const double C29232 = C29227 * C29224;
    const double C29272 = C29224 * C29270;
    const double C29271 = C29224 * C29269;
    const double C29297 = C29224 * C29295;
    const double C29296 = C29224 * C29294;
    const double C29312 = C29224 * C29311;
    const double C29326 = C29325 * C29224;
    const double C29339 = C29224 * C29338;
    const double C29350 = C29224 * C29349;
    const double C29363 = C29224 * C29362;
    const double C29375 = C29374 * C29224;
    const double C29212 = C29184 * C29209;
    const double C29221 = ae * C29209;
    const double C29618 = C29254 * C29209;
    const double C29797 = C29279 * C29209;
    const double C29231 = C29222 * C29188;
    const double C29230 = C29184 * C29222;
    const double C29229 = C29222 * ae;
    const double C29714 = C29222 * C29318;
    const double C29713 = C29254 * C29222;
    const double C29820 = C29222 * C29367;
    const double C29819 = C29279 * C29222;
    const double C29268 = ae * C29265;
    const double C29267 = C29184 * C29265;
    const double C29580 = C29254 * C29265;
    const double C29805 = C29279 * C29265;
    const double C29293 = ae * C29290;
    const double C29292 = C29184 * C29290;
    const double C29631 = C29254 * C29290;
    const double C29679 = C29279 * C29290;
    const double C1140 = (C29193 * C29189 * C29258 + C29264 * C29367) / C29038;
    const double C1234 = (C29193 * C29189 * C29306 + C29309 * C29367) / C29038;
    const double C749 = (C29193 * C29189 * C29283 + C29289 * C29318) / C29038;
    const double C399 =
        (2 * C29184 * C29336 +
         C29184 * (C29336 + C29224 * C29223 * C29333 * C29188)) /
        C29038;
    const double C931 = (C29193 * C29189 * C29344 + C29347 * C29318) / C29038;
    const double C501 =
        (2 * C29184 * C29360 +
         C29184 * (C29360 + C29224 * C29223 * C29357 * C29188)) /
        C29038;
    const double C30004 = std::exp(C30003);
    const double C30016 = std::exp(C30015);
    const double C30030 = std::exp(C30029);
    const double C14220 = C29981 * C636;
    const double C17523 = C29981 * C1077;
    const double C29041 = C29039 * C29981;
    const double C30139 = C30128 * C29981;
    const double C30138 = C29981 * C30126;
    const double C3091 = -(C29981 * C30127) / C29035;
    const double C168 = C30075 * C157;
    const double C7791 = C30075 * C1133;
    const double C29090 = C29089 * C30075;
    const double C155 = -(2 * C29037 * (yA - yB) * C30075) / C29035;
    const double C332 =
        -((C30075 - (C29069 * 2 * C29037 * C29069 * C30075) / C29035) *
          C29040) /
        C29035;
    const double C3161 =
        ((C30075 - (C29069 * 2 * C29037 * C29069 * C30075) / C29035) * ae) /
            C29035 -
        (0 * be) / C29042;
    const double C3162 =
        (0 * ae) / C29035 - (C29037 * C29069 * C30075) / C29038;
    const double C30146 = C30128 * C30075;
    const double C30145 = C30075 * C30134;
    const double C10233 = -(C30075 * C30136) / C29035;
    const double C235 = C30090 * C224;
    const double C3781 = C30090 * C742;
    const double C29102 = C29101 * C30090;
    const double C222 = -(2 * C29037 * (zA - zB) * C30090) / C29035;
    const double C557 =
        -((C30090 - (C29072 * 2 * C29037 * C29072 * C30090) / C29035) *
          C29040) /
        C29035;
    const double C6821 =
        ((C30090 - (C29072 * 2 * C29037 * C29072 * C30090) / C29035) * ae) /
            C29035 -
        (0 * be) / C29042;
    const double C6822 =
        (0 * ae) / C29035 - (C29037 * C29072 * C30090) / C29038;
    const double C30148 = C30128 * C30090;
    const double C30147 = C30090 * C30135;
    const double C19789 = -(C30090 * C30137) / C29035;
    const double C29197 = C29184 * C29196;
    const double C699 = (C29193 * C29189 * C29258 + ae * C29254 * C29196 +
                         C29254 * (ae * C29196 + C29254 * C29264)) /
                        C29038;
    const double C793 = (C29193 * C29189 * C29306 + ae * C29254 * C29196 +
                         C29254 * (ae * C29196 + C29254 * C29309)) /
                        C29038;
    const double C1190 = (C29193 * C29189 * C29283 + ae * C29279 * C29196 +
                          C29279 * (ae * C29196 + C29279 * C29289)) /
                         C29038;
    const double C1372 = (C29193 * C29189 * C29344 + ae * C29279 * C29196 +
                          C29279 * (ae * C29196 + C29279 * C29347)) /
                         C29038;
    const double C2658 = (C29279 * (ae * C29196 + C29254 * C29264)) / C29038;
    const double C2714 =
        (ae * C29254 * C29196 + C29279 * C29254 * C29289) / C29038;
    const double C2767 =
        (ae * C29279 * C29196 + C29254 * C29279 * C29309) / C29038;
    const double C2929 =
        (ae * C29254 * C29196 + C29279 * C29254 * C29347) / C29038;
    const double C637 = (C29185 * C29183 * C29192 + C29196 * C29318) / C29035;
    const double C1078 = (C29185 * C29183 * C29192 + C29196 * C29367) / C29035;
    const double C2596 = (C29279 * C29254 * C29196) / C29035;
    const double C3643 =
        (2 * C29254 * C29196 + C29254 * (C29196 + C29209 * C29318)) / C29035;
    const double C6061 = (C29279 * (C29196 + C29209 * C29318)) / C29035;
    const double C7709 =
        (2 * C29279 * C29196 + C29279 * (C29196 + C29209 * C29367)) / C29035;
    const double C29207 = C29184 * C29201;
    const double C29206 = C29201 * ae;
    const double C29211 = C29201 + C29208;
    const double C29322 = C29201 + C29321;
    const double C29371 = C29201 + C29370;
    const double C29581 = C29254 * C29201;
    const double C29680 = C29279 * C29201;
    const double C335 =
        ((C29187 + C29318 * C29189 * C29193) * C29191 +
         (C29201 + C29318 * C29202 * C29203) * C29191 * C29188) /
        C29038;
    const double C560 =
        ((C29187 + C29367 * C29189 * C29193) * C29191 +
         (C29201 + C29367 * C29202 * C29203) * C29191 * C29188) /
        C29038;
    const double C96 =
        2 * C29184 * C29187 + C29184 * (C29187 + C29201 * C29188);
    const double C628 = C29254 * (C29187 + C29201 * C29188);
    const double C1069 = C29279 * (C29187 + C29201 * C29188);
    const double C3641 =
        2 * C29254 * C29187 + C29254 * (C29187 + C29201 * C29318);
    const double C6059 = C29279 * (C29187 + C29201 * C29318);
    const double C7707 =
        2 * C29279 * C29187 + C29279 * (C29187 + C29201 * C29367);
    const double C29411 = C29254 * C29260;
    const double C163 =
        (C29193 * C29189 * C29258 + ae * C29184 * C29260 +
         C29184 * (ae * C29260 + C29184 * C29203 * C29202 * C29258)) /
        C29038;
    const double C164 =
        (2 * (ae * C29260 + C29184 * C29264) + ae * (C29260 + C29265 * C29188) +
         C29184 *
             (C29264 + ae * C29184 * C29265 +
              C29184 * (ae * C29265 + C29184 * C29224 * C29223 * C29258))) /
        C29038;
    const double C291 =
        (C29193 * C29189 * C29306 + ae * C29184 * C29260 +
         C29184 * (ae * C29260 + C29184 * C29203 * C29202 * C29306)) /
        C29038;
    const double C1138 = (C29279 * (ae * C29260 + C29184 * C29264)) / C29038;
    const double C1232 = (C29279 * (ae * C29260 + C29184 * C29309)) / C29038;
    const double C1326 =
        (ae * C29184 * C29260 + C29279 * C29184 * C29336) / C29038;
    const double C1328 = (C29193 * C29189 * C29333 + ae * C29279 * C29260 +
                          C29279 * (ae * C29260 + C29279 * C29336)) /
                         C29038;
    const double C1414 =
        (ae * C29184 * C29260 + C29279 * C29184 * C29360) / C29038;
    const double C1416 = (C29193 * C29189 * C29357 + ae * C29279 * C29260 +
                          C29279 * (ae * C29260 + C29279 * C29360)) /
                         C29038;
    const double C158 = (C29185 * C29183 * C29257 + C29260 * C29188) / C29035;
    const double C159 =
        (2 * C29184 * C29260 + C29184 * (C29260 + C29265 * C29188)) / C29035;
    const double C690 = (C29254 * (C29260 + C29265 * C29188) +
                         (C29187 + C29201 * C29188) * ae) /
                        C29035;
    const double C691 =
        (C29254 * C29184 * C29260 + C29184 * C29187 * ae) / C29035;
    const double C1131 = (C29279 * (C29260 + C29265 * C29188)) / C29035;
    const double C1132 = (C29279 * C29184 * C29260) / C29035;
    const double C1134 = (C29185 * C29183 * C29257 + C29260 * C29367) / C29035;
    const double C7785 =
        (2 * C29279 * C29260 + C29279 * (C29260 + C29265 * C29367)) / C29035;
    const double C29503 = C29279 * C29285;
    const double C230 =
        (C29193 * C29189 * C29283 + ae * C29184 * C29285 +
         C29184 * (ae * C29285 + C29184 * C29203 * C29202 * C29283)) /
        C29038;
    const double C231 =
        (2 * (ae * C29285 + C29184 * C29289) + ae * (C29285 + C29290 * C29188) +
         C29184 *
             (C29289 + ae * C29184 * C29290 +
              C29184 * (ae * C29290 + C29184 * C29224 * C29223 * C29283))) /
        C29038;
    const double C457 =
        (C29193 * C29189 * C29344 + ae * C29184 * C29285 +
         C29184 * (ae * C29285 + C29184 * C29203 * C29202 * C29344)) /
        C29038;
    const double C747 = (C29254 * (ae * C29285 + C29184 * C29289)) / C29038;
    const double C885 =
        (ae * C29184 * C29285 + C29254 * C29184 * C29336) / C29038;
    const double C887 = (C29193 * C29189 * C29333 + ae * C29254 * C29285 +
                         C29254 * (ae * C29285 + C29254 * C29336)) /
                        C29038;
    const double C929 = (C29254 * (ae * C29285 + C29184 * C29347)) / C29038;
    const double C973 =
        (ae * C29184 * C29285 + C29254 * C29184 * C29360) / C29038;
    const double C975 = (C29193 * C29189 * C29357 + ae * C29254 * C29285 +
                         C29254 * (ae * C29285 + C29254 * C29360)) /
                        C29038;
    const double C225 = (C29185 * C29183 * C29282 + C29285 * C29188) / C29035;
    const double C226 =
        (2 * C29184 * C29285 + C29184 * (C29285 + C29290 * C29188)) / C29035;
    const double C740 = (C29254 * (C29285 + C29290 * C29188)) / C29035;
    const double C741 = (C29254 * C29184 * C29285) / C29035;
    const double C743 = (C29185 * C29183 * C29282 + C29285 * C29318) / C29035;
    const double C1181 = (C29279 * (C29285 + C29290 * C29188) +
                          (C29187 + C29201 * C29188) * ae) /
                         C29035;
    const double C1182 =
        (C29279 * C29184 * C29285 + C29184 * C29187 * ae) / C29035;
    const double C2711 =
        (C29279 * C29254 * C29285 + C29254 * C29187 * ae) / C29035;
    const double C3775 =
        (2 * C29254 * C29285 + C29254 * (C29285 + C29290 * C29318)) / C29035;
    const double C6213 = (C29279 * (C29285 + C29290 * C29318) +
                          (C29187 + C29201 * C29318) * ae) /
                         C29035;
    const double C170 = C30075 * C162;
    const double C237 = C30090 * C229;
    const double C342 = C30075 * C334;
    const double C404 = C30090 * C397;
    const double C407 = C30090 * C398;
    const double C506 = C30075 * C499;
    const double C509 = C30075 * C500;
    const double C567 = C30090 * C559;
    const double C14068 = C29981 * C642;
    const double C3783 = C30090 * C748;
    const double C14222 = C29981 * C792;
    const double C3995 = C30090 * C886;
    const double C14365 = C29981 * C930;
    const double C4172 = C30090 * C1018;
    const double C17327 = C29981 * C1083;
    const double C7793 = C30075 * C1139;
    const double C17525 = C29981 * C1233;
    const double C7999 = C30075 * C1277;
    const double C17724 = C29981 * C1371;
    const double C8188 = C30075 * C1415;
    const double C29237 = C29184 * C29233;
    const double C29701 = C29233 * C29318;
    const double C29775 = C29254 * C29233;
    const double C29799 = C29233 * C29367;
    const double C29236 = C29222 + C29232;
    const double C29274 = C29272 * C29188;
    const double C29591 = C29184 * C29272;
    const double C29712 = C29254 * C29272;
    const double C29806 = C29272 * C29367;
    const double C29273 = C29184 * C29271;
    const double C29700 = C29254 * C29271;
    const double C7787 =
        (2 * C29279 * C29264 + C29279 * (C29264 + C29271 * C29367)) / C29038;
    const double C27299 =
        (3 * (C29264 + C29271 * C29367) +
         C29279 * (2 * C29279 * C29271 +
                   C29279 * (C29271 +
                             std::pow(C29182, 6) * bs[6] * C29258 * C29367))) /
        C29038;
    const double C29299 = C29297 * C29188;
    const double C29604 = C29184 * C29297;
    const double C29731 = C29297 * C29318;
    const double C29784 = C29254 * C29297;
    const double C29818 = C29279 * C29297;
    const double C29298 = C29184 * C29296;
    const double C29774 = C29254 * C29296;
    const double C29798 = C29279 * C29296;
    const double C3777 =
        (2 * C29254 * C29289 + C29254 * (C29289 + C29296 * C29318)) / C29038;
    const double C6215 = (ae * (C29196 + C29209 * C29318) +
                          C29279 * (C29289 + C29296 * C29318)) /
                         C29038;
    const double C14165 =
        (3 * (C29289 + C29296 * C29318) +
         C29254 * (2 * C29254 * C29296 +
                   C29254 * (C29296 +
                             std::pow(C29182, 6) * bs[6] * C29283 * C29318))) /
        C29038;
    const double C29313 = C29184 * C29312;
    const double C29706 = C29254 * C29312;
    const double C29758 = C29279 * C29312;
    const double C4409 = (ae * (C29196 + C29209 * C29367) +
                          C29254 * (C29309 + C29312 * C29367)) /
                         C29038;
    const double C7919 =
        (2 * C29279 * C29309 + C29279 * (C29309 + C29312 * C29367)) / C29038;
    const double C29327 = C29222 + C29326;
    const double C29603 = C29184 * C29339;
    const double C29730 = C29254 * C29339;
    const double C29766 = C29279 * C29339;
    const double C400 =
        (3 * (C29336 + C29339 * C29188) +
         C29184 * (2 * C29184 * C29339 +
                   C29184 * (C29339 +
                             std::pow(C29182, 6) * bs[6] * C29333 * C29188))) /
        C29038;
    const double C884 = (ae * (C29285 + C29290 * C29188) +
                         C29254 * (C29336 + C29339 * C29188)) /
                        C29038;
    const double C1325 = (ae * (C29260 + C29265 * C29188) +
                          C29279 * (C29336 + C29339 * C29188)) /
                         C29038;
    const double C29351 = C29184 * C29350;
    const double C29780 = C29254 * C29350;
    const double C29809 = C29279 * C29350;
    const double C4052 =
        (2 * C29254 * C29347 + C29254 * (C29347 + C29350 * C29318)) / C29038;
    const double C6516 = (ae * (C29196 + C29209 * C29318) +
                          C29279 * (C29347 + C29350 * C29318)) /
                         C29038;
    const double C14361 =
        (3 * (C29347 + C29350 * C29318) +
         C29254 * (2 * C29254 * C29350 +
                   C29254 * (C29350 +
                             std::pow(C29182, 6) * bs[6] * C29344 * C29318))) /
        C29038;
    const double C29609 = C29184 * C29363;
    const double C29736 = C29254 * C29363;
    const double C29812 = C29279 * C29363;
    const double C502 =
        (3 * (C29360 + C29363 * C29188) +
         C29184 * (2 * C29184 * C29363 +
                   C29184 * (C29363 +
                             std::pow(C29182, 6) * bs[6] * C29357 * C29188))) /
        C29038;
    const double C972 = (ae * (C29285 + C29290 * C29188) +
                         C29254 * (C29360 + C29363 * C29188)) /
                        C29038;
    const double C1413 = (ae * (C29260 + C29265 * C29188) +
                          C29279 * (C29360 + C29363 * C29188)) /
                         C29038;
    const double C29376 = C29222 + C29375;
    const double C29226 = 2 * C29221;
    const double C3723 =
        (2 * (ae * C29196 + C29254 * C29264) + ae * (C29196 + C29209 * C29318) +
         C29254 * (C29264 + ae * C29254 * C29209 +
                   C29254 * (C29221 + C29254 * C29271))) /
        C29038;
    const double C3855 =
        (2 * (ae * C29196 + C29254 * C29309) + ae * (C29196 + C29209 * C29318) +
         C29254 * (C29309 + ae * C29254 * C29209 +
                   C29254 * (C29221 + C29254 * C29312))) /
        C29038;
    const double C4303 =
        (ae * C29196 + C29254 * C29264 + (C29221 + C29254 * C29271) * C29367) /
        C29038;
    const double C7867 =
        (2 * (ae * C29196 + C29279 * C29289) + ae * (C29196 + C29209 * C29367) +
         C29279 * (C29289 + ae * C29279 * C29209 +
                   C29279 * (C29221 + C29279 * C29296))) /
        C29038;
    const double C8120 =
        (2 * (ae * C29196 + C29279 * C29347) + ae * (C29196 + C29209 * C29367) +
         C29279 * (C29347 + ae * C29279 * C29209 +
                   C29279 * (C29221 + C29279 * C29350))) /
        C29038;
    const double C4357 = (C29254 * C29289 + ae * C29279 * C29618 +
                          C29279 * (ae * C29618 + C29279 * C29254 * C29296)) /
                         C29038;
    const double C4573 = (C29254 * C29347 + ae * C29279 * C29618 +
                          C29279 * (ae * C29618 + C29279 * C29254 * C29350)) /
                         C29038;
    const double C6145 = (C29279 * (C29264 + ae * C29618 +
                                    C29254 * (C29221 + C29254 * C29271))) /
                         C29038;
    const double C6293 =
        (C29279 * C29309 + ae * C29279 * C29618 +
         C29254 * (ae * C29279 * C29209 + C29254 * C29279 * C29312)) /
        C29038;
    const double C14627 =
        (C29309 + C29312 * C29367 + ae * (C29618 + C29254 * C29233 * C29367) +
         C29254 * (ae * (C29209 + C29233 * C29367) +
                   C29254 * (C29312 +
                             std::pow(C29182, 6) * bs[6] * C29306 * C29367))) /
        C29038;
    const double C4239 = (C29254 * C29196 + C29618 * C29367) / C29035;
    const double C29235 = C29201 + C29231;
    const double C29234 = C29230 * ae;
    const double C29592 = C29254 * C29230;
    const double C29690 = C29279 * C29230;
    const double C29718 = C29201 + C29714;
    const double C29717 = C29713 * ae;
    const double C29785 = C29279 * C29713;
    const double C29824 = C29201 + C29820;
    const double C29823 = C29819 * ae;
    const double C29709 = 2 * C29268;
    const double C8068 =
        (2 * (ae * C29260 + C29279 * C29336) + ae * (C29260 + C29265 * C29367) +
         C29279 * (C29336 + ae * C29279 * C29265 +
                   C29279 * (C29268 + C29279 * C29339))) /
        C29038;
    const double C8184 =
        (2 * (ae * C29260 + C29279 * C29360) + ae * (C29260 + C29265 * C29367) +
         C29279 * (C29360 + ae * C29279 * C29265 +
                   C29279 * (C29268 + C29279 * C29363))) /
        C29038;
    const double C29415 = C29254 * C29267;
    const double C292 =
        (2 * (ae * C29260 + C29184 * C29309) + ae * (C29260 + C29265 * C29188) +
         C29184 * (C29309 + ae * C29267 +
                   C29184 * (C29268 + C29184 * C29224 * C29223 * C29306))) /
        C29038;
    const double C1329 = (C29184 * C29336 + ae * C29279 * C29267 +
                          C29279 * (ae * C29267 + C29279 * C29184 * C29339)) /
                         C29038;
    const double C1417 = (C29184 * C29360 + ae * C29279 * C29267 +
                          C29279 * (ae * C29267 + C29279 * C29184 * C29363)) /
                         C29038;
    const double C1135 = (C29184 * C29260 + C29267 * C29367) / C29035;
    const double C29815 = 2 * C29293;
    const double C3991 =
        (2 * (ae * C29285 + C29254 * C29336) + ae * (C29285 + C29290 * C29318) +
         C29254 * (C29336 + ae * C29254 * C29290 +
                   C29254 * (C29293 + C29254 * C29339))) /
        C29038;
    const double C4116 =
        (2 * (ae * C29285 + C29254 * C29360) + ae * (C29285 + C29290 * C29318) +
         C29254 * (C29360 + ae * C29254 * C29290 +
                   C29254 * (C29293 + C29254 * C29363))) /
        C29038;
    const double C29507 = C29279 * C29292;
    const double C458 =
        (2 * (ae * C29285 + C29184 * C29347) + ae * (C29285 + C29290 * C29188) +
         C29184 * (C29347 + ae * C29292 +
                   C29184 * (C29293 + C29184 * C29224 * C29223 * C29344))) /
        C29038;
    const double C888 = (C29184 * C29336 + ae * C29254 * C29292 +
                         C29254 * (ae * C29292 + C29254 * C29184 * C29339)) /
                        C29038;
    const double C976 = (C29184 * C29360 + ae * C29254 * C29292 +
                         C29254 * (ae * C29292 + C29254 * C29184 * C29363)) /
                        C29038;
    const double C744 = (C29184 * C29285 + C29292 * C29318) / C29035;
    const double C29632 = C29279 * C29631;
    const double C7801 = C30075 * C1140;
    const double C17533 = C29981 * C1234;
    const double C3791 = C30090 * C749;
    const double C409 = C30090 * C399;
    const double C14368 = C29981 * C931;
    const double C511 = C30075 * C501;
    const double C30141 = C30004 * C30129;
    const double C84 =
        (C30004 * std::pow(C30129, 2)) / C30130 + C30004 / C30131;
    const double C86 = C30142 * C30004;
    const double C1522 = C30140 * C30004;
    const double C30143 = C30016 * C30132;
    const double C624 =
        (C30016 * std::pow(C30132, 2)) / C30130 + C30016 / C30131;
    const double C626 = C30142 * C30016;
    const double C1520 = C30140 * C30016;
    const double C30144 = C30030 * C30133;
    const double C1066 =
        (C30030 * std::pow(C30133, 2)) / C30130 + C30030 / C30131;
    const double C1068 = C30142 * C30030;
    const double C2058 = C30140 * C30030;
    const double C29043 = 2 * C29041;
    const double C92 = ((0 * ae) / C29035 - C29041 / C29038) / (2 * C29035) -
                       (0 * be) / C29035;
    const double C10238 = (0 * ae) / C29035 - C29041 / C29038;
    const double C79 = C30139 / C29986;
    const double C77 = C29981 / C29986 - (C30138 * C30127) / C29038;
    const double C78 = C30138 / C29042 - (C30139 * C30127) / C29035;
    const double C10231 = C30138 / C29035;
    const double C3649 = C3091 * C642;
    const double C3863 = C3091 * C792;
    const double C3859 = C3091 * C636;
    const double C4062 = C3091 * C931;
    const double C4056 = C3091 * C930;
    const double C7715 = C3091 * C1083;
    const double C7933 = C3091 * C1234;
    const double C7927 = C3091 * C1233;
    const double C7923 = C3091 * C1077;
    const double C8124 = C3091 * C1371;
    const double C29137 = 2 * C29090;
    const double C3337 =
        (((-4 * C29090) / C29035 -
          (C29069 * (C30075 - (C29069 * 2 * C29090) / C29035) * C29040) /
              C29035) *
         ae) /
        C29035;
    const double C3338 =
        (-((C30075 - (C29069 * 2 * C29090) / C29035) * C29040) / C29035) /
        (2 * C29035);
    const double C10301 =
        (-(0 * be) / C29035) / (2 * C29035) -
        ((C30075 - (C29069 * 2 * C29090) / C29035) * be) / C29035;
    const double C10302 =
        (-(2 * C29090) / C29035) / (2 * C29035) - (0 * be) / C29035;
    const double C10477 =
        -(((-4 * C29090) / C29035 -
           (C29069 * (C30075 - (C29069 * 2 * C29090) / C29035) * C29040) /
               C29035) *
          be) /
        C29035;
    const double C10478 =
        (-((C30075 - (C29069 * 2 * C29090) / C29035) * C29040) / C29035) /
        (2 * C29035);
    const double C13746 = ((0 * ae) / C29035 - C29090 / C29038) / (2 * C29035) -
                          (0 * be) / C29035;
    const double C171 = C155 * C95;
    const double C169 = C155 * C99;
    const double C167 = C155 * C94;
    const double C341 = C155 * C157;
    const double C339 = C155 * C156;
    const double C505 = C155 * C224;
    const double C843 = C155 * C692;
    const double C1284 = C155 * C1133;
    const double C1588 = C155 * C629;
    const double C2124 = C155 * C1070;
    const double C7802 = C155 * C1072;
    const double C7792 = C155 * C1077;
    const double C7790 = C155 * C1071;
    const double C8187 = C155 * C1183;
    const double C9694 = C155 * C2593;
    const double C343 = C332 * C95;
    const double C340 = C332 * C94;
    const double C1762 = C332 * C629;
    const double C2298 = C332 * C1070;
    const double C8003 = C332 * C1072;
    const double C7998 = C332 * C1071;
    const double C9902 = C332 * C2593;
    const double C3178 = C3161 * C95;
    const double C3168 = C3161 * C99;
    const double C3164 = C3161 * C94;
    const double C3343 = C3161 * C157;
    const double C3340 = C3161 * C156;
    const double C3526 = C3161 * C224;
    const double C3937 = C3161 * C692;
    const double C4467 = C3161 * C1133;
    const double C4832 = C3161 * C629;
    const double C5488 = C3161 * C1070;
    const double C24238 = C3161 * C1072;
    const double C24228 = C3161 * C1077;
    const double C24224 = C3161 * C1071;
    const double C24578 = C3161 * C1183;
    const double C25974 = C3161 * C2593;
    const double C3166 = C3162 * C629;
    const double C3341 = C3162 * C692;
    const double C24226 = C3162 * C2593;
    const double C13745 =
        (((C30075 - (C29069 * 2 * C29090) / C29035) * ae) / C29035 -
         C29129 / C29042) /
            (2 * C29035) -
        ((C29069 * ((0 * ae) / C29035 - C29090 / C29038) + C30146) * be) /
            C29035;
    const double C13694 = C30146 / C29986;
    const double C3093 = C30145 / C29035;
    const double C13692 = C30075 / C29986 - (C30145 * C30136) / C29038;
    const double C13693 = C30145 / C29042 - (C30146 * C30136) / C29035;
    const double C10309 = C10233 * C162;
    const double C10305 = C10233 * C157;
    const double C10484 = C10233 * C334;
    const double C10673 = C10233 * C500;
    const double C10667 = C10233 * C499;
    const double C17406 = C10233 * C1140;
    const double C17400 = C10233 * C1139;
    const double C17396 = C10233 * C1133;
    const double C17600 = C10233 * C1277;
    const double C17784 = C10233 * C1415;
    const double C29167 = 2 * C29102;
    const double C7167 =
        (((-4 * C29102) / C29035 -
          (C29072 * (C30090 - (C29072 * 2 * C29102) / C29035) * C29040) /
              C29035) *
         ae) /
        C29035;
    const double C7168 =
        (-((C30090 - (C29072 * 2 * C29102) / C29035) * C29040) / C29035) /
        (2 * C29035);
    const double C19893 =
        (-(0 * be) / C29035) / (2 * C29035) -
        ((C30090 - (C29072 * 2 * C29102) / C29035) * be) / C29035;
    const double C19894 =
        (-(2 * C29102) / C29035) / (2 * C29035) - (0 * be) / C29035;
    const double C20239 =
        -(((-4 * C29102) / C29035 -
           (C29072 * (C30090 - (C29072 * 2 * C29102) / C29035) * C29040) /
               C29035) *
          be) /
        C29035;
    const double C20240 =
        (-((C30090 - (C29072 * 2 * C29102) / C29035) * C29040) / C29035) /
        (2 * C29035);
    const double C26623 = ((0 * ae) / C29035 - C29102 / C29038) / (2 * C29035) -
                          (0 * be) / C29035;
    const double C238 = C222 * C95;
    const double C236 = C222 * C99;
    const double C234 = C222 * C94;
    const double C403 = C222 * C157;
    const double C566 = C222 * C224;
    const double C564 = C222 * C223;
    const double C1025 = C222 * C742;
    const double C1466 = C222 * C1183;
    const double C1652 = C222 * C629;
    const double C2188 = C222 * C1070;
    const double C3792 = C222 * C631;
    const double C3782 = C222 * C636;
    const double C3780 = C222 * C630;
    const double C3994 = C222 * C692;
    const double C6222 = C222 * C2593;
    const double C568 = C557 * C95;
    const double C565 = C557 * C94;
    const double C1997 = C557 * C629;
    const double C2533 = C557 * C1070;
    const double C4175 = C557 * C631;
    const double C4171 = C557 * C630;
    const double C6661 = C557 * C2593;
    const double C6838 = C6821 * C95;
    const double C6828 = C6821 * C99;
    const double C6824 = C6821 * C94;
    const double C6998 = C6821 * C157;
    const double C7173 = C6821 * C224;
    const double C7170 = C6821 * C223;
    const double C7653 = C6821 * C742;
    const double C8251 = C6821 * C1183;
    const double C8466 = C6821 * C629;
    const double C9118 = C6821 * C1070;
    const double C16919 = C6821 * C631;
    const double C16909 = C6821 * C636;
    const double C16905 = C6821 * C630;
    const double C17081 = C6821 * C692;
    const double C19294 = C6821 * C2593;
    const double C6826 = C6822 * C1070;
    const double C7171 = C6822 * C1183;
    const double C16907 = C6822 * C2593;
    const double C26622 =
        (((C30090 - (C29072 * 2 * C29102) / C29035) * ae) / C29035 -
         C29159 / C29042) /
            (2 * C29035) -
        ((C29072 * ((0 * ae) / C29035 - C29102 / C29038) + C30148) * be) /
            C29035;
    const double C26543 = C30148 / C29986;
    const double C6717 = C30147 / C29035;
    const double C26541 = C30090 / C29986 - (C30147 * C30137) / C29038;
    const double C26542 = C30147 / C29042 - (C30148 * C30137) / C29035;
    const double C19901 = C19789 * C229;
    const double C19897 = C19789 * C224;
    const double C20077 = C19789 * C398;
    const double C20071 = C19789 * C397;
    const double C20246 = C19789 * C559;
    const double C23767 = C19789 * C749;
    const double C23761 = C19789 * C748;
    const double C23757 = C19789 * C742;
    const double C23933 = C19789 * C886;
    const double C24103 = C19789 * C1018;
    const double C29198 = C29197 + C29195;
    const double C3869 = C3091 * C793;
    const double C14226 = C29981 * C793;
    const double C8130 = C3091 * C1372;
    const double C17728 = C29981 * C1372;
    const double C9697 = C30075 * C2658;
    const double C17402 = C30146 * C2658;
    const double C19215 = C10233 * C2658;
    const double C24231 = C30146 * C2658;
    const double C6221 = C30090 * C2714;
    const double C16912 = C30148 * C2714;
    const double C23763 = C30148 * C2714;
    const double C26055 = C19789 * C2714;
    const double C6299 = C3091 * C2767;
    const double C16015 = C29981 * C2767;
    const double C6522 = C3091 * C2929;
    const double C16185 = C29981 * C2929;
    const double C3790 = C222 * C637;
    const double C3873 = C3091 * C637;
    const double C14224 = C29981 * C637;
    const double C16915 = C6821 * C637;
    const double C7800 = C155 * C1078;
    const double C7937 = C3091 * C1078;
    const double C17535 = C29981 * C1078;
    const double C24234 = C3161 * C1078;
    const double C6220 = C222 * C2596;
    const double C6303 = C3091 * C2596;
    const double C9696 = C155 * C2596;
    const double C16017 = C29981 * C2596;
    const double C16911 = C6822 * C2596;
    const double C19290 = C6821 * C2596;
    const double C24230 = C3162 * C2596;
    const double C25978 = C3161 * C2596;
    const double C14171 = C222 * C3643;
    const double C14230 = C29981 * C3643;
    const double C15949 = C222 * C6061;
    const double C16013 = C29981 * C6061;
    const double C16913 = C6822 * C6061;
    const double C25980 = C3162 * C6061;
    const double C27305 = C155 * C7709;
    const double C27400 = C29981 * C7709;
    const double C29210 = C29207 * ae;
    const double C2712 =
        (C29279 * C29254 * C29292 + C29254 * C29207 * ae) / C29035;
    const double C632 = C29184 * C29187 + C29207 * C29318;
    const double C1073 = C29184 * C29187 + C29207 * C29367;
    const double C2594 = C29279 * C29254 * C29207;
    const double C3642 =
        2 * C29254 * C29207 + C29254 * (C29207 + C29230 * C29318);
    const double C6060 = C29279 * (C29207 + C29230 * C29318);
    const double C7708 =
        2 * C29279 * C29207 + C29279 * (C29207 + C29230 * C29367);
    const double C29214 = C29212 + C29206;
    const double C29582 = C29580 + C29206;
    const double C29681 = C29679 + C29206;
    const double C4521 = (ae * (C29285 + C29279 * (C29279 * C29290 + C29206) +
                                C29279 * C29201 * ae) +
                          C29254 * (C29336 + ae * C29279 * C29265 +
                                    C29279 * (C29268 + C29279 * C29339))) /
                         C29038;
    const double C29213 = C29211 * C29191;
    const double C29323 = C29322 * C29191;
    const double C29372 = C29371 * C29191;
    const double C29583 = C29581 * ae;
    const double C4237 = C29254 * C29187 + C29581 * C29367;
    const double C17322 =
        2 * C29279 * C29581 + C29279 * (C29581 + C29713 * C29367);
    const double C29682 = C29680 * ae;
    const double C345 = C30075 * C335;
    const double C10493 = C10233 * C335;
    const double C570 = C30090 * C560;
    const double C20255 = C19789 * C560;
    const double C177 = C155 * C96;
    const double C244 = C222 * C96;
    const double C346 = C332 * C96;
    const double C571 = C557 * C96;
    const double C1584 = C155 * C628;
    const double C1648 = C222 * C628;
    const double C1760 = C332 * C628;
    const double C1995 = C557 * C628;
    const double C3176 = C3162 * C628;
    const double C2120 = C155 * C1069;
    const double C2184 = C222 * C1069;
    const double C2296 = C332 * C1069;
    const double C2531 = C557 * C1069;
    const double C6836 = C6822 * C1069;
    const double C14173 = C222 * C3641;
    const double C14457 = C557 * C3641;
    const double C15951 = C222 * C6059;
    const double C16293 = C557 * C6059;
    const double C16917 = C6822 * C6059;
    const double C25976 = C3162 * C6059;
    const double C27307 = C155 * C7707;
    const double C27447 = C332 * C7707;
    const double C29412 = C29411 + C29195;
    const double C174 = C30075 * C163;
    const double C10315 = C10233 * C163;
    const double C176 = C30075 * C164;
    const double C2123 = C30075 * C1138;
    const double C12527 = C10233 * C1138;
    const double C7929 = C30139 * C1232;
    const double C9195 = C3091 * C1232;
    const double C18736 = C29981 * C1232;
    const double C20965 = C30139 * C1232;
    const double C2362 = C30090 * C1326;
    const double C7001 = C30148 * C1326;
    const double C20073 = C30148 * C1326;
    const double C22325 = C19789 * C1326;
    const double C2474 = C30075 * C1414;
    const double C12951 = C10233 * C1414;
    const double C8192 = C30075 * C1416;
    const double C17790 = C10233 * C1416;
    const double C172 = C30075 * C158;
    const double C344 = C155 * C158;
    const double C406 = C222 * C158;
    const double C3352 = C3161 * C158;
    const double C7004 = C6821 * C158;
    const double C10319 = C10233 * C158;
    const double C178 = C30075 * C159;
    const double C347 = C155 * C159;
    const double C408 = C222 * C159;
    const double C3354 = C3161 * C159;
    const double C841 = C155 * C690;
    const double C1585 = C30075 * C690;
    const double C1822 = C222 * C690;
    const double C3177 = C30146 * C690;
    const double C3349 = C3162 * C690;
    const double C5056 = C3161 * C690;
    const double C10317 = C30146 * C690;
    const double C842 = C155 * C691;
    const double C1589 = C30075 * C691;
    const double C1825 = C222 * C691;
    const double C3167 = C30146 * C691;
    const double C3346 = C3162 * C691;
    const double C3935 = C3161 * C691;
    const double C8677 = C6821 * C691;
    const double C10307 = C30146 * C691;
    const double C11875 = C10233 * C691;
    const double C1282 = C155 * C1131;
    const double C2121 = C30075 * C1131;
    const double C2358 = C222 * C1131;
    const double C5702 = C3161 * C1131;
    const double C7002 = C6822 * C1131;
    const double C1283 = C155 * C1132;
    const double C2125 = C30075 * C1132;
    const double C2361 = C222 * C1132;
    const double C4465 = C3161 * C1132;
    const double C7000 = C6822 * C1132;
    const double C9338 = C6821 * C1132;
    const double C12531 = C10233 * C1132;
    const double C1285 = C155 * C1134;
    const double C4468 = C3161 * C1134;
    const double C7803 = C30075 * C1134;
    const double C17410 = C10233 * C1134;
    const double C8005 = C155 * C7785;
    const double C24414 = C3161 * C7785;
    const double C27308 = C30075 * C7785;
    const double C29504 = C29503 + C29195;
    const double C241 = C30090 * C230;
    const double C19907 = C19789 * C230;
    const double C243 = C30090 * C231;
    const double C1651 = C30090 * C747;
    const double C21457 = C19789 * C747;
    const double C1826 = C30090 * C885;
    const double C21667 = C19789 * C885;
    const double C3999 = C30090 * C887;
    const double C23939 = C19789 * C887;
    const double C4058 = C30139 * C929;
    const double C5201 = C3091 * C929;
    const double C11149 = C30139 * C929;
    const double C15215 = C29981 * C929;
    const double C1938 = C30075 * C973;
    const double C3529 = C30146 * C973;
    const double C10669 = C30146 * C973;
    const double C12317 = C10233 * C973;
    const double C239 = C30090 * C225;
    const double C508 = C155 * C225;
    const double C569 = C222 * C225;
    const double C3532 = C3161 * C225;
    const double C7182 = C6821 * C225;
    const double C19911 = C19789 * C225;
    const double C245 = C30090 * C226;
    const double C510 = C155 * C226;
    const double C572 = C222 * C226;
    const double C7184 = C6821 * C226;
    const double C1023 = C222 * C740;
    const double C1649 = C30090 * C740;
    const double C1934 = C155 * C740;
    const double C3530 = C3162 * C740;
    const double C8890 = C6821 * C740;
    const double C1024 = C222 * C741;
    const double C1653 = C30090 * C741;
    const double C1937 = C155 * C741;
    const double C3528 = C3162 * C741;
    const double C5274 = C3161 * C741;
    const double C7651 = C6821 * C741;
    const double C21461 = C19789 * C741;
    const double C1026 = C222 * C743;
    const double C3793 = C30090 * C743;
    const double C7654 = C6821 * C743;
    const double C23771 = C19789 * C743;
    const double C1464 = C222 * C1181;
    const double C2185 = C30090 * C1181;
    const double C2470 = C155 * C1181;
    const double C6837 = C30148 * C1181;
    const double C7179 = C6822 * C1181;
    const double C9554 = C6821 * C1181;
    const double C19909 = C30148 * C1181;
    const double C1465 = C222 * C1182;
    const double C2189 = C30090 * C1182;
    const double C2473 = C155 * C1182;
    const double C5917 = C3161 * C1182;
    const double C6827 = C30148 * C1182;
    const double C7176 = C6822 * C1182;
    const double C8249 = C6821 * C1182;
    const double C19899 = C30148 * C1182;
    const double C22105 = C19789 * C1182;
    const double C3039 = C222 * C2711;
    const double C6223 = C30090 * C2711;
    const double C7652 = C6822 * C2711;
    const double C10109 = C155 * C2711;
    const double C10178 = C6821 * C2711;
    const double C16908 = C30148 * C2711;
    const double C23759 = C30148 * C2711;
    const double C24580 = C3162 * C2711;
    const double C26059 = C19789 * C2711;
    const double C26420 = C3161 * C2711;
    const double C4177 = C222 * C3775;
    const double C14174 = C30090 * C3775;
    const double C17259 = C6821 * C3775;
    const double C6663 = C222 * C6213;
    const double C7655 = C6822 * C6213;
    const double C15952 = C30090 * C6213;
    const double C16918 = C30148 * C6213;
    const double C19732 = C6821 * C6213;
    const double C23769 = C30148 * C6213;
    const double C26422 = C3162 * C6213;
    const double C29240 = C29237 + C29229;
    const double C29703 = C29209 + C29701;
    const double C17323 =
        (2 * C29279 * C29618 + C29279 * (C29618 + C29775 * C29367)) / C29035;
    const double C29801 = C29209 + C29799;
    const double C29239 = C29236 * C29191;
    const double C29276 = C29265 + C29274;
    const double C29593 = C29254 * C29591;
    const double C7786 =
        (2 * C29279 * C29267 + C29279 * (C29267 + C29591 * C29367)) / C29035;
    const double C29716 = C29712 + C29229;
    const double C29807 = C29265 + C29806;
    const double C29275 = C29268 + C29273;
    const double C29702 = C29221 + C29700;
    const double C27306 = C30075 * C7787;
    const double C29301 = C29290 + C29299;
    const double C29636 = C29254 * C29604;
    const double C29689 = C29279 * C29604;
    const double C3776 =
        (2 * C29254 * C29292 + C29254 * (C29292 + C29604 * C29318)) / C29035;
    const double C6214 = (C29279 * (C29292 + C29604 * C29318) +
                          (C29207 + C29230 * C29318) * ae) /
                         C29035;
    const double C29733 = C29290 + C29731;
    const double C29786 = C29279 * C29784;
    const double C29822 = C29818 + C29229;
    const double C29300 = C29293 + C29298;
    const double C17469 =
        (2 * (ae * C29618 + C29279 * C29774) + ae * (C29618 + C29775 * C29367) +
         C29279 *
             (C29774 + ae * C29279 * C29775 +
              C29279 * (ae * C29775 + C29279 * C29254 * std::pow(C29182, 6) *
                                          bs[6] * C29283))) /
        C29038;
    const double C29800 = C29221 + C29798;
    const double C14172 = C30090 * C3777;
    const double C15950 = C30090 * C6215;
    const double C16914 = C30148 * C6215;
    const double C23765 = C30148 * C6215;
    const double C29314 = C29268 + C29313;
    const double C29707 = C29221 + C29706;
    const double C17520 =
        (ae * (2 * C29279 * C29209 + C29279 * (C29209 + C29233 * C29367)) +
         C29254 * (2 * C29758 + C29279 * (C29312 + std::pow(C29182, 6) * bs[6] *
                                                       C29306 * C29367))) /
        C29038;
    const double C27391 =
        (3 * (C29309 + C29312 * C29367) +
         C29279 * (2 * C29758 + C29279 * (C29312 + std::pow(C29182, 6) * bs[6] *
                                                       C29306 * C29367))) /
        C29038;
    const double C17529 = C29981 * C4409;
    const double C27398 = C29981 * C7919;
    const double C29328 = C29327 * C29191;
    const double C3992 =
        (2 * (ae * C29292 + C29254 * C29603) + ae * (C29292 + C29604 * C29318) +
         C29254 *
             (C29603 + ae * C29254 * C29604 +
              C29254 * (ae * C29604 + C29254 * C29184 * std::pow(C29182, 6) *
                                          bs[6] * C29333))) /
        C29038;
    const double C8069 =
        (2 * (ae * C29267 + C29279 * C29603) + ae * (C29267 + C29591 * C29367) +
         C29279 *
             (C29603 + ae * C29279 * C29591 +
              C29279 * (ae * C29591 + C29279 * C29184 * std::pow(C29182, 6) *
                                          bs[6] * C29333))) /
        C29038;
    const double C29732 = C29293 + C29730;
    const double C29767 = C29268 + C29766;
    const double C1823 = C30090 * C884;
    const double C2359 = C30090 * C1325;
    const double C7003 = C30148 * C1325;
    const double C20075 = C30148 * C1325;
    const double C29352 = C29293 + C29351;
    const double C17721 =
        (2 * (ae * C29618 + C29279 * C29780) + ae * (C29618 + C29775 * C29367) +
         C29279 *
             (C29780 + ae * C29279 * C29775 +
              C29279 * (ae * C29775 + C29279 * C29254 * std::pow(C29182, 6) *
                                          bs[6] * C29344))) /
        C29038;
    const double C29810 = C29221 + C29809;
    const double C14370 = C29981 * C4052;
    const double C16182 = C29981 * C6516;
    const double C4117 =
        (2 * (ae * C29292 + C29254 * C29609) + ae * (C29292 + C29604 * C29318) +
         C29254 *
             (C29609 + ae * C29254 * C29604 +
              C29254 * (ae * C29604 + C29254 * C29184 * std::pow(C29182, 6) *
                                          bs[6] * C29357))) /
        C29038;
    const double C8185 =
        (2 * (ae * C29267 + C29279 * C29609) + ae * (C29267 + C29591 * C29367) +
         C29279 *
             (C29609 + ae * C29279 * C29591 +
              C29279 * (ae * C29591 + C29279 * C29184 * std::pow(C29182, 6) *
                                          bs[6] * C29357))) /
        C29038;
    const double C29737 = C29293 + C29736;
    const double C29813 = C29268 + C29812;
    const double C1935 = C30075 * C972;
    const double C3531 = C30146 * C972;
    const double C10671 = C30146 * C972;
    const double C2471 = C30075 * C1413;
    const double C29377 = C29376 * C29191;
    const double C14228 = C29981 * C3855;
    const double C17404 = C30146 * C4303;
    const double C24233 = C30146 * C4303;
    const double C28658 = C30075 * C4303;
    const double C27533 = C29981 * C8120;
    const double C19289 = C30148 * C4357;
    const double C26053 = C30148 * C4357;
    const double C17726 = C29981 * C4573;
    const double C19217 = C30146 * C6145;
    const double C25981 = C30146 * C6145;
    const double C16011 = C29981 * C6293;
    const double C17531 = C29981 * C4239;
    const double C19288 = C6822 * C4239;
    const double C24232 = C3162 * C4239;
    const double C28657 = C155 * C4239;
    const double C29238 = C29235 * ae;
    const double C97 = 3 * (C29187 + C29201 * C29188) +
                       C29184 * (2 * C29207 + C29184 * C29235);
    const double C633 = C29187 + C29201 * C29188 + C29235 * C29318;
    const double C1074 = C29187 + C29201 * C29188 + C29235 * C29367;
    const double C1523 = C29254 * (2 * C29207 + C29184 * C29235);
    const double C2059 = C29279 * (2 * C29207 + C29184 * C29235);
    const double C2595 = C29279 * C29254 * C29235;
    const double C4522 =
        (ae * (C29292 + C29279 * (C29279 * C29604 + C29234) +
               C29279 * C29230 * ae) +
         C29254 *
             (C29603 + ae * C29279 * C29591 +
              C29279 * (ae * C29591 + C29279 * C29184 * std::pow(C29182, 6) *
                                          bs[6] * C29333))) /
        C29038;
    const double C29594 = C29592 * ae;
    const double C4238 = C29254 * C29207 + C29592 * C29367;
    const double C29692 = C29690 * ae;
    const double C29720 = C29718 * ae;
    const double C14063 = 3 * (C29187 + C29201 * C29318) +
                          C29254 * (2 * C29581 + C29254 * C29718);
    const double C14500 = C29187 + C29201 * C29318 + C29718 * C29367;
    const double C15828 = C29279 * (2 * C29581 + C29254 * C29718);
    const double C14711 =
        (C29336 + ae * C29279 * C29265 + C29279 * (C29268 + C29279 * C29339) +
         ae * (C29631 + C29279 * (C29279 * C29254 * C29297 + C29717) +
               C29279 * C29713 * ae) +
         C29254 *
             (ae * (C29290 + C29279 * (C29279 * C29297 + C29229) +
                    C29279 * C29222 * ae) +
              C29254 * (C29339 + ae * C29279 * C29272 +
                        C29279 * (ae * C29272 + C29279 * std::pow(C29182, 6) *
                                                    bs[6] * C29333)))) /
        C29038;
    const double C29787 = C29785 * ae;
    const double C29826 = C29824 * ae;
    const double C27251 = 3 * (C29187 + C29201 * C29367) +
                          C29279 * (2 * C29680 + C29279 * C29824);
    const double C27575 = C30075 * C8184;
    const double C9337 = C30148 * C1329;
    const double C22323 = C30148 * C1329;
    const double C8190 = C30075 * C1417;
    const double C1286 = C155 * C1135;
    const double C4470 = C3161 * C1135;
    const double C7799 = C30075 * C1135;
    const double C9336 = C6822 * C1135;
    const double C14322 = C30090 * C3991;
    const double C3997 = C30090 * C888;
    const double C5273 = C30146 * C976;
    const double C12315 = C30146 * C976;
    const double C1027 = C222 * C744;
    const double C3789 = C30090 * C744;
    const double C5272 = C3162 * C744;
    const double C7656 = C6821 * C744;
    const double C85 = (2 * C30140 * C30141) / C29999;
    const double C1521 = C30141 / C29999;
    const double C625 = (2 * C30140 * C30143) / C29999;
    const double C1519 = C30143 / C29999;
    const double C1067 = (2 * C30140 * C30144) / C29999;
    const double C2057 = C30144 / C29999;
    const double C29044 = C29036 * C29043;
    const double C3098 = (-C29043 / C29035) / (2 * C29035) - (0 * be) / C29035;
    const double C13696 = -C29043 / C29035;
    const double C10241 = C10238 * C99;
    const double C10970 = C10238 * C691;
    const double C10966 = C10238 * C629;
    const double C11150 = C10238 * C744;
    const double C11148 = C10238 * C741;
    const double C12022 = C10238 * C690;
    const double C12018 = C10238 * C628;
    const double C12244 = C10238 * C740;
    const double C20966 = C10238 * C1135;
    const double C20964 = C10238 * C1132;
    const double C20960 = C10238 * C1070;
    const double C21138 = C10238 * C1182;
    const double C22182 = C10238 * C1131;
    const double C22178 = C10238 * C1069;
    const double C22396 = C10238 * C1181;
    const double C10783 = C10231 * C642;
    const double C10979 = C10231 * C637;
    const double C10975 = C10231 * C793;
    const double C10969 = C10231 * C792;
    const double C10965 = C10231 * C636;
    const double C11153 = C10231 * C931;
    const double C11147 = C10231 * C930;
    const double C12243 = C10231 * C929;
    const double C13309 = C10231 * C2596;
    const double C13305 = C10231 * C2767;
    const double C13519 = C10231 * C2929;
    const double C20779 = C10231 * C1083;
    const double C20973 = C10231 * C1078;
    const double C20969 = C10231 * C1234;
    const double C20963 = C10231 * C1233;
    const double C20959 = C10231 * C1077;
    const double C21143 = C10231 * C1372;
    const double C21137 = C10231 * C1371;
    const double C22181 = C10231 * C1232;
    const double C29138 = C29069 * C29137;
    const double C3351 = C3337 * C95;
    const double C3342 = C3337 * C94;
    const double C5054 = C3337 * C629;
    const double C5700 = C3337 * C1070;
    const double C24412 = C3337 * C1072;
    const double C24406 = C3337 * C1071;
    const double C26200 = C3337 * C2593;
    const double C3348 = C3338 * C628;
    const double C3345 = C3338 * C629;
    const double C24408 = C3338 * C2593;
    const double C26202 = C3338 * C6059;
    const double C10318 = C10301 * C95;
    const double C10308 = C10301 * C99;
    const double C10304 = C10301 * C94;
    const double C10494 = C10301 * C159;
    const double C10492 = C10301 * C158;
    const double C10483 = C10301 * C157;
    const double C10480 = C10301 * C156;
    const double C10672 = C10301 * C225;
    const double C10666 = C10301 * C224;
    const double C11041 = C10301 * C692;
    const double C11039 = C10301 * C691;
    const double C11522 = C10301 * C1135;
    const double C11520 = C10301 * C1134;
    const double C11519 = C10301 * C1133;
    const double C11517 = C10301 * C1132;
    const double C11874 = C10301 * C629;
    const double C12098 = C10301 * C690;
    const double C12316 = C10301 * C741;
    const double C12530 = C10301 * C1070;
    const double C12738 = C10301 * C1131;
    const double C12950 = C10301 * C1182;
    const double C17409 = C10301 * C1072;
    const double C17405 = C10301 * C1078;
    const double C17399 = C10301 * C1077;
    const double C17395 = C10301 * C1071;
    const double C17607 = C10301 * C7785;
    const double C17783 = C10301 * C1183;
    const double C19214 = C10301 * C2596;
    const double C19210 = C10301 * C2593;
    const double C19656 = C10301 * C2711;
    const double C10316 = C10302 * C628;
    const double C10306 = C10302 * C629;
    const double C10489 = C10302 * C690;
    const double C10486 = C10302 * C691;
    const double C10481 = C10302 * C692;
    const double C10670 = C10302 * C740;
    const double C10668 = C10302 * C741;
    const double C12314 = C10302 * C744;
    const double C17403 = C10302 * C4239;
    const double C17401 = C10302 * C2596;
    const double C17397 = C10302 * C2593;
    const double C17785 = C10302 * C2711;
    const double C19216 = C10302 * C6061;
    const double C19212 = C10302 * C6059;
    const double C19658 = C10302 * C6213;
    const double C10491 = C10477 * C95;
    const double C10482 = C10477 * C94;
    const double C12096 = C10477 * C629;
    const double C12736 = C10477 * C1070;
    const double C17605 = C10477 * C1072;
    const double C17599 = C10477 * C1071;
    const double C19436 = C10477 * C2593;
    const double C10488 = C10478 * C628;
    const double C10485 = C10478 * C629;
    const double C17601 = C10478 * C2593;
    const double C19438 = C10478 * C6059;
    const double C180 = C169 + C170;
    const double C179 = C167 + C168;
    const double C513 = C505 + C506;
    const double C7805 = C7792 + C7793;
    const double C7804 = C7790 + C7791;
    const double C8193 = C8187 + C8188;
    const double C350 = C340 + C341;
    const double C8007 = C7998 + C1284;
    const double C13872 = C13745 * C690;
    const double C13869 = C13745 * C691;
    const double C13866 = C13745 * C692;
    const double C3179 = C3093 * C158;
    const double C3175 = C3093 * C163;
    const double C3169 = C3093 * C162;
    const double C3165 = C3093 * C157;
    const double C3353 = C3093 * C335;
    const double C3344 = C3093 * C334;
    const double C3533 = C3093 * C500;
    const double C3527 = C3093 * C499;
    const double C4833 = C3093 * C691;
    const double C5275 = C3093 * C973;
    const double C5489 = C3093 * C1132;
    const double C5485 = C3093 * C1138;
    const double C5918 = C3093 * C1414;
    const double C24239 = C3093 * C1134;
    const double C24235 = C3093 * C1140;
    const double C24229 = C3093 * C1139;
    const double C24225 = C3093 * C1133;
    const double C24407 = C3093 * C1277;
    const double C24585 = C3093 * C1416;
    const double C24579 = C3093 * C1415;
    const double C25979 = C3093 * C2658;
    const double C13744 =
        (((0 - (C29069 * C29129) / C29035) * ae) / C29035 - (0 * be) / C29042) /
            (2 * C29035) -
        ((C29069 * (((C30075 - (C29069 * 2 * C29090) / C29035) * ae) / C29035 -
                    C29129 / C29042) +
          C3093) *
         be) /
            C29035 +
        (0 * ae) / C29035 - C29090 / C29038;
    const double C29168 = C29072 * C29167;
    const double C7181 = C7167 * C95;
    const double C7172 = C7167 * C94;
    const double C8888 = C7167 * C629;
    const double C9552 = C7167 * C1070;
    const double C17257 = C7167 * C631;
    const double C17251 = C7167 * C630;
    const double C19730 = C7167 * C2593;
    const double C7178 = C7168 * C1069;
    const double C7175 = C7168 * C1070;
    const double C17255 = C7168 * C6059;
    const double C17253 = C7168 * C2593;
    const double C19910 = C19893 * C95;
    const double C19900 = C19893 * C99;
    const double C19896 = C19893 * C94;
    const double C20076 = C19893 * C158;
    const double C20070 = C19893 * C157;
    const double C20256 = C19893 * C226;
    const double C20254 = C19893 * C225;
    const double C20245 = C19893 * C224;
    const double C20242 = C19893 * C223;
    const double C20726 = C19893 * C744;
    const double C20724 = C19893 * C743;
    const double C20723 = C19893 * C742;
    const double C20721 = C19893 * C741;
    const double C21251 = C19893 * C1183;
    const double C21249 = C19893 * C1182;
    const double C21460 = C19893 * C629;
    const double C21666 = C19893 * C691;
    const double C21876 = C19893 * C740;
    const double C22104 = C19893 * C1070;
    const double C22324 = C19893 * C1132;
    const double C22540 = C19893 * C1181;
    const double C23148 = C19893 * C2711;
    const double C23770 = C19893 * C631;
    const double C23766 = C19893 * C637;
    const double C23760 = C19893 * C636;
    const double C23756 = C19893 * C630;
    const double C23932 = C19893 * C692;
    const double C24110 = C19893 * C3775;
    const double C26058 = C19893 * C2593;
    const double C26054 = C19893 * C2596;
    const double C26496 = C19893 * C6213;
    const double C19908 = C19894 * C1069;
    const double C19898 = C19894 * C1070;
    const double C20074 = C19894 * C1131;
    const double C20072 = C19894 * C1132;
    const double C20251 = C19894 * C1181;
    const double C20248 = C19894 * C1182;
    const double C20243 = C19894 * C1183;
    const double C20725 = C19894 * C6213;
    const double C20722 = C19894 * C2711;
    const double C22322 = C19894 * C1135;
    const double C23768 = C19894 * C6059;
    const double C23764 = C19894 * C6061;
    const double C23762 = C19894 * C2596;
    const double C23758 = C19894 * C2593;
    const double C26052 = C19894 * C4239;
    const double C20253 = C20239 * C95;
    const double C20244 = C20239 * C94;
    const double C21874 = C20239 * C629;
    const double C22538 = C20239 * C1070;
    const double C24108 = C20239 * C631;
    const double C24102 = C20239 * C630;
    const double C26494 = C20239 * C2593;
    const double C20250 = C20240 * C1069;
    const double C20247 = C20240 * C1070;
    const double C24106 = C20240 * C6059;
    const double C24104 = C20240 * C2593;
    const double C247 = C236 + C237;
    const double C246 = C234 + C235;
    const double C411 = C403 + C404;
    const double C3795 = C3782 + C3783;
    const double C3794 = C3780 + C3781;
    const double C4000 = C3994 + C3995;
    const double C575 = C565 + C566;
    const double C4179 = C4171 + C1025;
    const double C26863 = C26622 * C1181;
    const double C26860 = C26622 * C1182;
    const double C26857 = C26622 * C1183;
    const double C27212 = C26622 * C6213;
    const double C27209 = C26622 * C2711;
    const double C6839 = C6717 * C225;
    const double C6835 = C6717 * C230;
    const double C6829 = C6717 * C229;
    const double C6825 = C6717 * C224;
    const double C7005 = C6717 * C398;
    const double C6999 = C6717 * C397;
    const double C7183 = C6717 * C560;
    const double C7174 = C6717 * C559;
    const double C8467 = C6717 * C741;
    const double C8463 = C6717 * C747;
    const double C8678 = C6717 * C885;
    const double C9119 = C6717 * C1182;
    const double C9339 = C6717 * C1326;
    const double C16920 = C6717 * C743;
    const double C16916 = C6717 * C749;
    const double C16910 = C6717 * C748;
    const double C16906 = C6717 * C742;
    const double C17088 = C6717 * C887;
    const double C17082 = C6717 * C886;
    const double C17252 = C6717 * C1018;
    const double C19295 = C6717 * C2711;
    const double C19291 = C6717 * C2714;
    const double C26621 =
        (((0 - (C29072 * C29159) / C29035) * ae) / C29035 - (0 * be) / C29042) /
            (2 * C29035) -
        ((C29072 * (((C30090 - (C29072 * 2 * C29102) / C29035) * ae) / C29035 -
                    C29159 / C29042) +
          C6717) *
         be) /
            C29035 +
        (0 * ae) / C29035 - C29102 / C29038;
    const double C29199 = ae * C29198;
    const double C100 =
        (C29185 * C29183 * C29192 + C29184 * C29198 + C29184 * C29187 * ae) /
        C29035;
    const double C635 = (C29254 * C29198) / C29035;
    const double C1076 = (C29279 * C29198) / C29035;
    const double C3798 = C3790 + C3791;
    const double C7808 = C7800 + C7801;
    const double C6224 = C6220 + C6221;
    const double C9701 = C9696 + C9697;
    const double C16924 = C16911 + C16912;
    const double C24243 = C24230 + C24231;
    const double C29416 = C29415 + C29210;
    const double C29508 = C29507 + C29210;
    const double C3040 = C222 * C2712;
    const double C5563 = C30090 * C2712;
    const double C5915 = C3162 * C2712;
    const double C7650 = C6822 * C2712;
    const double C8465 = C30148 * C2712;
    const double C8813 = C155 * C2712;
    const double C10180 = C6821 * C2712;
    const double C12948 = C10302 * C2712;
    const double C13516 = C10238 * C2712;
    const double C20720 = C19894 * C2712;
    const double C21459 = C30148 * C2712;
    const double C23150 = C19893 * C2712;
    const double C28073 = C26622 * C2712;
    const double C3788 = C222 * C632;
    const double C4173 = C557 * C632;
    const double C4830 = C3162 * C632;
    const double C5052 = C3338 * C632;
    const double C10976 = C10238 * C632;
    const double C11872 = C10302 * C632;
    const double C12094 = C10478 * C632;
    const double C7798 = C155 * C1073;
    const double C8001 = C332 * C1073;
    const double C9116 = C6822 * C1073;
    const double C9550 = C7168 * C1073;
    const double C20970 = C10238 * C1073;
    const double C22102 = C19894 * C1073;
    const double C22536 = C20240 * C1073;
    const double C5486 = C3162 * C2594;
    const double C5562 = C222 * C2594;
    const double C5698 = C3338 * C2594;
    const double C5987 = C557 * C2594;
    const double C8390 = C155 * C2594;
    const double C8464 = C6822 * C2594;
    const double C8604 = C332 * C2594;
    const double C8886 = C7168 * C2594;
    const double C12528 = C10302 * C2594;
    const double C12734 = C10478 * C2594;
    const double C13306 = C10238 * C2594;
    const double C21458 = C19894 * C2594;
    const double C21872 = C20240 * C2594;
    const double C29216 = ae * C29214;
    const double C29215 = C29184 * C29214;
    const double C29225 = 2 * C29214;
    const double C29379 = C29254 * C29214;
    const double C29447 = C29279 * C29214;
    const double C638 = (C29198 + C29214 * C29318) / C29035;
    const double C1079 = (C29198 + C29214 * C29367) / C29035;
    const double C29585 = ae * C29582;
    const double C29584 = C29254 * C29582;
    const double C29649 = C29279 * C29582;
    const double C29711 = 2 * C29582;
    const double C29684 = ae * C29681;
    const double C29683 = C29279 * C29681;
    const double C29817 = 2 * C29681;
    const double C19515 = C30148 * C4521;
    const double C26279 = C30148 * C4521;
    const double C641 =
        (2 * ae * C29254 * C29196 + C29184 * C29254 * C29213) / C29038;
    const double C643 =
        ((C29187 + C29188 * C29189 * C29193) * C29191 + C29213 * C29318) /
        C29038;
    const double C1082 =
        (2 * ae * C29279 * C29196 + C29184 * C29279 * C29213) / C29038;
    const double C1084 =
        ((C29187 + C29188 * C29189 * C29193) * C29191 + C29213 * C29367) /
        C29038;
    const double C2599 = (C29279 * C29254 * C29213) / C29038;
    const double C336 =
        (2 * C29184 * C29323 +
         C29184 *
             (C29323 + (C29222 + C29318 * C29223 * C29224) * C29191 * C29188)) /
        C29038;
    const double C835 =
        (2 * ae * C29184 * C29260 + C29254 * C29184 * C29323) / C29038;
    const double C1276 = (C29279 * C29184 * C29323) / C29038;
    const double C1278 =
        ((C29187 + C29318 * C29189 * C29193) * C29191 + C29323 * C29367) /
        C29038;
    const double C2820 =
        (2 * ae * C29279 * C29260 + C29254 * C29279 * C29323) / C29038;
    const double C561 =
        (2 * C29184 * C29372 +
         C29184 *
             (C29372 + (C29222 + C29367 * C29223 * C29224) * C29191 * C29188)) /
        C29038;
    const double C1017 = (C29254 * C29184 * C29372) / C29038;
    const double C1019 =
        ((C29187 + C29367 * C29189 * C29193) * C29191 + C29372 * C29318) /
        C29038;
    const double C1458 =
        (2 * ae * C29184 * C29285 + C29279 * C29184 * C29372) / C29038;
    const double C3035 =
        (2 * ae * C29254 * C29285 + C29279 * C29254 * C29372) / C29038;
    const double C29633 = C29632 + C29583;
    const double C17407 = C10302 * C4237;
    const double C17603 = C10478 * C4237;
    const double C19292 = C6822 * C4237;
    const double C19728 = C7168 * C4237;
    const double C24236 = C3162 * C4237;
    const double C24410 = C3338 * C4237;
    const double C26056 = C19894 * C4237;
    const double C26492 = C20240 * C4237;
    const double C28655 = C155 * C4237;
    const double C28818 = C332 * C4237;
    const double C29413 = ae * C29412;
    const double C693 =
        (C29185 * C29183 * C29257 + C29254 * C29412 + C29254 * C29187 * ae) /
        C29035;
    const double C2655 = (C29279 * C29412) / C29035;
    const double C4301 = (C29412 + C29582 * C29367) / C29035;
    const double C181 = C171 + C172;
    const double C351 = C343 + C344;
    const double C412 = C406 + C407;
    const double C184 = C177 + C178;
    const double C352 = C346 + C347;
    const double C413 = C408 + C409;
    const double C1765 = C1760 + C841;
    const double C1591 = C1584 + C1585;
    const double C3186 = C3176 + C3177;
    const double C1766 = C1762 + C842;
    const double C1593 = C1588 + C1589;
    const double C3181 = C3166 + C3167;
    const double C2301 = C2296 + C1282;
    const double C2127 = C2120 + C2121;
    const double C2302 = C2298 + C1283;
    const double C2129 = C2124 + C2125;
    const double C2365 = C2361 + C2362;
    const double C7007 = C7000 + C7001;
    const double C8009 = C8003 + C1285;
    const double C7809 = C7802 + C7803;
    const double C27450 = C27447 + C8005;
    const double C27311 = C27307 + C27308;
    const double C29505 = ae * C29504;
    const double C1184 =
        (C29185 * C29183 * C29282 + C29279 * C29504 + C29279 * C29187 * ae) /
        C29035;
    const double C1829 = C1825 + C1826;
    const double C248 = C238 + C239;
    const double C514 = C508 + C509;
    const double C576 = C568 + C569;
    const double C251 = C244 + C245;
    const double C515 = C510 + C511;
    const double C577 = C571 + C572;
    const double C2000 = C1995 + C1023;
    const double C1655 = C1648 + C1649;
    const double C2001 = C1997 + C1024;
    const double C1657 = C1652 + C1653;
    const double C1941 = C1937 + C1938;
    const double C3535 = C3528 + C3529;
    const double C4181 = C4175 + C1026;
    const double C3799 = C3792 + C3793;
    const double C2536 = C2531 + C1464;
    const double C2191 = C2184 + C2185;
    const double C6846 = C6836 + C6837;
    const double C2537 = C2533 + C1465;
    const double C2193 = C2188 + C2189;
    const double C2477 = C2473 + C2474;
    const double C6841 = C6826 + C6827;
    const double C6665 = C6661 + C3039;
    const double C6225 = C6222 + C6223;
    const double C16922 = C16907 + C16908;
    const double C14460 = C14457 + C4177;
    const double C14177 = C14173 + C14174;
    const double C16296 = C16293 + C6663;
    const double C15956 = C15951 + C15952;
    const double C16927 = C16917 + C16918;
    const double C29243 = ae * C29240;
    const double C29242 = C29184 * C29240;
    const double C29386 = C29240 * C29318;
    const double C29454 = C29240 * C29367;
    const double C29517 = C29254 * C29240;
    const double C29531 = C29279 * C29240;
    const double C14588 =
        (C29289 + C29296 * C29318 + ae * C29279 * C29703 +
         C29279 *
             (ae * C29703 + C29279 * (C29296 + std::pow(C29182, 6) * bs[6] *
                                                   C29283 * C29318))) /
        C29038;
    const double C14750 =
        (C29347 + C29350 * C29318 + ae * C29279 * C29703 +
         C29279 *
             (ae * C29703 + C29279 * (C29350 + std::pow(C29182, 6) * bs[6] *
                                                   C29344 * C29318))) /
        C29038;
    const double C15947 =
        (ae * (2 * C29618 + C29254 * C29703) +
         C29279 * (2 * C29254 * C29296 +
                   C29254 * (C29296 +
                             std::pow(C29182, 6) * bs[6] * C29283 * C29318))) /
        C29038;
    const double C16008 =
        (2 * (ae * C29279 * C29209 + C29254 * C29758) + ae * C29279 * C29703 +
         C29254 * (C29758 + ae * C29279 * C29254 * C29233 +
                   C29254 * (ae * C29279 * C29233 + C29254 * C29279 *
                                                        std::pow(C29182, 6) *
                                                        bs[6] * C29306))) /
        C29038;
    const double C16179 =
        (ae * (2 * C29618 + C29254 * C29703) +
         C29279 * (2 * C29254 * C29350 +
                   C29254 * (C29350 +
                             std::pow(C29182, 6) * bs[6] * C29344 * C29318))) /
        C29038;
    const double C14064 = (3 * (C29196 + C29209 * C29318) +
                           C29254 * (2 * C29618 + C29254 * C29703)) /
                          C29035;
    const double C14501 = (C29196 + C29209 * C29318 + C29703 * C29367) / C29035;
    const double C15829 = (C29279 * (2 * C29618 + C29254 * C29703)) / C29035;
    const double C27252 = (3 * (C29196 + C29209 * C29367) +
                           C29279 * (2 * C29797 + C29279 * C29801)) /
                          C29035;
    const double C29241 = C29184 * C29239;
    const double C29515 = C29254 * C29239;
    const double C29529 = C29279 * C29239;
    const double C644 = (2 * ae * (C29196 + C29209 * C29318) +
                         C29184 * (C29213 + C29239 * C29318)) /
                        C29038;
    const double C1085 = (2 * ae * (C29196 + C29209 * C29367) +
                          C29184 * (C29213 + C29239 * C29367)) /
                         C29038;
    const double C3645 =
        (2 * C29254 * C29213 + C29254 * (C29213 + C29239 * C29318)) / C29038;
    const double C6063 = (C29279 * (C29213 + C29239 * C29318)) / C29038;
    const double C6064 = (2 * ae * C29279 * (C29209 + C29233 * C29318) +
                          C29184 * C29279 *
                              (C29239 + (C29223 * C29224 +
                                         C29188 * bs[6] * std::pow(C29182, 6)) *
                                            C29191 * C29318)) /
                         C29038;
    const double C7711 =
        (2 * C29279 * C29213 + C29279 * (C29213 + C29239 * C29367)) / C29038;
    const double C14502 =
        (C29213 + C29239 * C29318 +
         (C29239 + (C29223 * C29224 + C29188 * bs[6] * std::pow(C29182, 6)) *
                       C29191 * C29318) *
             C29367) /
        C29038;
    const double C29419 = C29254 * C29276;
    const double C1330 =
        (C29336 + C29339 * C29188 + ae * C29279 * C29276 +
         C29279 *
             (ae * C29276 + C29279 * (C29339 + std::pow(C29182, 6) * bs[6] *
                                                   C29333 * C29188))) /
        C29038;
    const double C1418 =
        (C29360 + C29363 * C29188 + ae * C29279 * C29276 +
         C29279 *
             (ae * C29276 + C29279 * (C29363 + std::pow(C29182, 6) * bs[6] *
                                                   C29357 * C29188))) /
        C29038;
    const double C2356 =
        (ae * (2 * C29267 + C29184 * C29276) +
         C29279 * (2 * C29184 * C29339 +
                   C29184 * (C29339 +
                             std::pow(C29182, 6) * bs[6] * C29333 * C29188))) /
        C29038;
    const double C2468 =
        (ae * (2 * C29267 + C29184 * C29276) +
         C29279 * (2 * C29184 * C29363 +
                   C29184 * (C29363 +
                             std::pow(C29182, 6) * bs[6] * C29357 * C29188))) /
        C29038;
    const double C160 = (3 * (C29260 + C29265 * C29188) +
                         C29184 * (2 * C29267 + C29184 * C29276)) /
                        C29035;
    const double C1136 = (C29260 + C29265 * C29188 + C29276 * C29367) / C29035;
    const double C1579 = (C29254 * (2 * C29267 + C29184 * C29276) +
                          (2 * C29207 + C29184 * C29235) * ae) /
                         C29035;
    const double C2115 = (C29279 * (2 * C29267 + C29184 * C29276)) / C29035;
    const double C29595 = C29593 + C29234;
    const double C8006 = C155 * C7786;
    const double C29721 = ae * C29716;
    const double C29719 = C29254 * C29716;
    const double C29744 = C29716 * C29367;
    const double C29762 = C29279 * C29716;
    const double C27298 = (3 * (C29260 + C29265 * C29367) +
                           C29279 * (2 * C29805 + C29279 * C29807)) /
                          C29035;
    const double C165 =
        (3 * (C29264 + ae * C29267 + C29184 * C29275) +
         ae * (2 * C29267 + C29184 * C29276) +
         C29184 *
             (2 * C29275 + ae * C29276 +
              C29184 * (C29271 + ae * C29184 * C29272 +
                        C29184 * (ae * C29272 + C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29258)))) /
        C29038;
    const double C1137 =
        (C29279 * (C29264 + ae * C29267 + C29184 * C29275)) / C29038;
    const double C1141 =
        (ae * C29260 + C29184 * C29264 + C29275 * C29367) / C29038;
    const double C1142 =
        (C29264 + ae * C29267 + C29184 * C29275 +
         (C29271 + ae * C29184 * C29272 +
          C29184 *
              (ae * C29272 + C29184 * std::pow(C29182, 6) * bs[6] * C29258)) *
             C29367) /
        C29038;
    const double C2116 =
        (C29279 *
         (2 * C29275 + ae * C29276 +
          C29184 * (C29271 + ae * C29184 * C29272 +
                    C29184 * (ae * C29272 + C29184 * std::pow(C29182, 6) *
                                                bs[6] * C29258)))) /
        C29038;
    const double C7788 =
        (2 * C29279 * C29275 +
         C29279 * (C29275 + (ae * C29272 +
                             C29184 * std::pow(C29182, 6) * bs[6] * C29258) *
                                C29367)) /
        C29038;
    const double C14125 =
        (3 * (C29264 + ae * C29618 + C29254 * C29702) +
         ae * (2 * C29618 + C29254 * C29703) +
         C29254 *
             (2 * C29702 + ae * C29703 +
              C29254 * (C29271 + ae * C29254 * C29233 +
                        C29254 * (ae * C29233 + C29254 * std::pow(C29182, 6) *
                                                    bs[6] * C29258)))) /
        C29038;
    const double C14548 =
        (C29264 + ae * C29618 + C29254 * C29702 +
         (C29271 + ae * C29254 * C29233 +
          C29254 *
              (ae * C29233 + C29254 * std::pow(C29182, 6) * bs[6] * C29258)) *
             C29367) /
        C29038;
    const double C15895 =
        (C29279 *
         (2 * C29702 + ae * C29703 +
          C29254 * (C29271 + ae * C29254 * C29233 +
                    C29254 * (ae * C29233 + C29254 * std::pow(C29182, 6) *
                                                bs[6] * C29258)))) /
        C29038;
    const double C17393 =
        (2 * C29279 * C29702 +
         C29279 * (C29702 + (ae * C29233 +
                             C29254 * std::pow(C29182, 6) * bs[6] * C29258) *
                                C29367)) /
        C29038;
    const double C27310 = C27305 + C27306;
    const double C29511 = C29279 * C29301;
    const double C889 =
        (C29336 + C29339 * C29188 + ae * C29254 * C29301 +
         C29254 *
             (ae * C29301 + C29254 * (C29339 + std::pow(C29182, 6) * bs[6] *
                                                   C29333 * C29188))) /
        C29038;
    const double C977 =
        (C29360 + C29363 * C29188 + ae * C29254 * C29301 +
         C29254 *
             (ae * C29301 + C29254 * (C29363 + std::pow(C29182, 6) * bs[6] *
                                                   C29357 * C29188))) /
        C29038;
    const double C1820 =
        (ae * (2 * C29292 + C29184 * C29301) +
         C29254 * (2 * C29184 * C29339 +
                   C29184 * (C29339 +
                             std::pow(C29182, 6) * bs[6] * C29333 * C29188))) /
        C29038;
    const double C1932 =
        (ae * (2 * C29292 + C29184 * C29301) +
         C29254 * (2 * C29184 * C29363 +
                   C29184 * (C29363 +
                             std::pow(C29182, 6) * bs[6] * C29357 * C29188))) /
        C29038;
    const double C227 = (3 * (C29285 + C29290 * C29188) +
                         C29184 * (2 * C29292 + C29184 * C29301)) /
                        C29035;
    const double C745 = (C29285 + C29290 * C29188 + C29301 * C29318) / C29035;
    const double C1643 = (C29254 * (2 * C29292 + C29184 * C29301)) / C29035;
    const double C2179 = (C29279 * (2 * C29292 + C29184 * C29301) +
                          (2 * C29207 + C29184 * C29235) * ae) /
                         C29035;
    const double C2713 =
        (C29279 * C29254 * C29301 + C29254 * C29235 * ae) / C29035;
    const double C29637 = C29279 * C29636;
    const double C29691 = C29689 + C29234;
    const double C4178 = C222 * C3776;
    const double C6664 = C222 * C6214;
    const double C7657 = C6822 * C6214;
    const double C20727 = C19894 * C6214;
    const double C29751 = C29279 * C29733;
    const double C14164 = (3 * (C29285 + C29290 * C29318) +
                           C29254 * (2 * C29631 + C29254 * C29733)) /
                          C29035;
    const double C15946 = (C29279 * (2 * C29631 + C29254 * C29733) +
                           (2 * C29581 + C29254 * C29718) * ae) /
                          C29035;
    const double C29788 = C29786 + C29717;
    const double C29827 = ae * C29822;
    const double C29825 = C29279 * C29822;
    const double C232 =
        (3 * (C29289 + ae * C29292 + C29184 * C29300) +
         ae * (2 * C29292 + C29184 * C29301) +
         C29184 *
             (2 * C29300 + ae * C29301 +
              C29184 * (C29296 + ae * C29184 * C29297 +
                        C29184 * (ae * C29297 + C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29283)))) /
        C29038;
    const double C746 =
        (C29254 * (C29289 + ae * C29292 + C29184 * C29300)) / C29038;
    const double C750 =
        (ae * C29285 + C29184 * C29289 + C29300 * C29318) / C29038;
    const double C751 = (C29289 + ae * C29292 + C29184 * C29300 +
                         (C29296 + ae * C29184 * C29297 +
                          C29184 * (ae * C29297 + C29184 * std::pow(C29182, 6) *
                                                      bs[6] * C29283)) *
                             C29318) /
                        C29038;
    const double C1644 =
        (C29254 *
         (2 * C29300 + ae * C29301 +
          C29184 * (C29296 + ae * C29184 * C29297 +
                    C29184 * (ae * C29297 + C29184 * std::pow(C29182, 6) *
                                                bs[6] * C29283)))) /
        C29038;
    const double C3778 =
        (2 * C29254 * C29300 +
         C29254 * (C29300 + (ae * C29297 +
                             C29184 * std::pow(C29182, 6) * bs[6] * C29283) *
                                C29318)) /
        C29038;
    const double C27352 =
        (3 * (C29289 + ae * C29797 + C29279 * C29800) +
         ae * (2 * C29797 + C29279 * C29801) +
         C29279 *
             (2 * C29800 + ae * C29801 +
              C29279 * (C29296 + ae * C29279 * C29233 +
                        C29279 * (ae * C29233 + C29279 * std::pow(C29182, 6) *
                                                    bs[6] * C29283)))) /
        C29038;
    const double C14176 = C14171 + C14172;
    const double C15955 = C15949 + C15950;
    const double C16925 = C16913 + C16914;
    const double C293 =
        (3 * (C29309 + ae * C29267 + C29184 * C29314) +
         ae * (2 * C29267 + C29184 * C29276) +
         C29184 *
             (2 * C29314 + ae * C29276 +
              C29184 * (C29312 + ae * C29184 * C29272 +
                        C29184 * (ae * C29272 + C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29306)))) /
        C29038;
    const double C1231 =
        (C29279 * (C29309 + ae * C29267 + C29184 * C29314)) / C29038;
    const double C1235 =
        (ae * C29260 + C29184 * C29309 + C29314 * C29367) / C29038;
    const double C1236 =
        (C29309 + ae * C29267 + C29184 * C29314 +
         (C29312 + ae * C29184 * C29272 +
          C29184 *
              (ae * C29272 + C29184 * std::pow(C29182, 6) * bs[6] * C29306)) *
             C29367) /
        C29038;
    const double C2243 =
        (C29279 *
         (2 * C29314 + ae * C29276 +
          C29184 * (C29312 + ae * C29184 * C29272 +
                    C29184 * (ae * C29272 + C29184 * std::pow(C29182, 6) *
                                                bs[6] * C29306)))) /
        C29038;
    const double C7920 =
        (2 * C29279 * C29314 +
         C29279 * (C29314 + (ae * C29272 +
                             C29184 * std::pow(C29182, 6) * bs[6] * C29306) *
                                C29367)) /
        C29038;
    const double C14217 =
        (3 * (C29309 + ae * C29618 + C29254 * C29707) +
         ae * (2 * C29618 + C29254 * C29703) +
         C29254 *
             (2 * C29707 + ae * C29703 +
              C29254 * (C29312 + ae * C29254 * C29233 +
                        C29254 * (ae * C29233 + C29254 * std::pow(C29182, 6) *
                                                    bs[6] * C29306)))) /
        C29038;
    const double C29590 = C29184 * C29328;
    const double C29710 = C29254 * C29328;
    const double C29760 = C29279 * C29328;
    const double C337 =
        (3 * (C29323 + C29328 * C29188) +
         C29184 * (2 * C29184 * C29328 +
                   C29184 * (C29328 + (C29223 * C29224 +
                                       C29318 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29188))) /
        C29038;
    const double C834 = (2 * ae * (C29260 + C29265 * C29188) +
                         C29254 * (C29323 + C29328 * C29188)) /
                        C29038;
    const double C1275 = (C29279 * (C29323 + C29328 * C29188)) / C29038;
    const double C1279 = (C29184 * C29323 + C29184 * C29328 * C29367) / C29038;
    const double C1280 =
        (C29323 + C29328 * C29188 +
         (C29328 + (C29223 * C29224 + C29318 * bs[6] * std::pow(C29182, 6)) *
                       C29191 * C29188) *
             C29367) /
        C29038;
    const double C1758 =
        (2 * ae * (2 * C29267 + C29184 * C29276) +
         C29254 * (2 * C29184 * C29328 +
                   C29184 * (C29328 + (C29223 * C29224 +
                                       C29318 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29188))) /
        C29038;
    const double C2294 =
        (C29279 * (2 * C29184 * C29328 +
                   C29184 * (C29328 + (C29223 * C29224 +
                                       C29318 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29188))) /
        C29038;
    const double C2821 =
        (2 * ae * C29279 * C29267 + C29254 * C29279 * C29184 * C29328) / C29038;
    const double C2822 = (2 * ae * C29279 * C29276 +
                          C29254 * C29279 *
                              (C29328 + (C29223 * C29224 +
                                         C29318 * bs[6] * std::pow(C29182, 6)) *
                                            C29191 * C29188)) /
                         C29038;
    const double C4461 = (2 * ae * (C29260 + C29265 * C29367) +
                          C29254 * (C29323 + C29328 * C29367)) /
                         C29038;
    const double C7995 =
        (2 * C29279 * C29323 + C29279 * (C29323 + C29328 * C29367)) / C29038;
    const double C14319 =
        (3 * (C29336 + ae * C29631 + C29254 * C29732) +
         ae * (2 * C29631 + C29254 * C29733) +
         C29254 *
             (2 * C29732 + ae * C29733 +
              C29254 * (C29339 + ae * C29254 * C29297 +
                        C29254 * (ae * C29297 + C29254 * std::pow(C29182, 6) *
                                                    bs[6] * C29333)))) /
        C29038;
    const double C17670 =
        (ae * (2 * C29681 +
               C29279 * (C29290 + C29279 * (C29279 * C29297 + C29229) +
                         C29279 * C29222 * ae) +
               (C29201 + C29222 * C29367) * ae) +
         C29254 *
             (2 * C29767 + ae * (C29265 + C29272 * C29367) +
              C29279 * (C29339 + ae * C29279 * C29272 +
                        C29279 * (ae * C29272 + C29279 * std::pow(C29182, 6) *
                                                    bs[6] * C29333)))) /
        C29038;
    const double C27491 =
        (3 * (C29336 + ae * C29805 + C29279 * C29767) +
         ae * (2 * C29805 + C29279 * C29807) +
         C29279 *
             (2 * C29767 + ae * C29807 +
              C29279 * (C29339 + ae * C29279 * C29272 +
                        C29279 * (ae * C29272 + C29279 * std::pow(C29182, 6) *
                                                    bs[6] * C29333)))) /
        C29038;
    const double C1828 = C1822 + C1823;
    const double C2364 = C2358 + C2359;
    const double C7008 = C7002 + C7003;
    const double C459 =
        (3 * (C29347 + ae * C29292 + C29184 * C29352) +
         ae * (2 * C29292 + C29184 * C29301) +
         C29184 *
             (2 * C29352 + ae * C29301 +
              C29184 * (C29350 + ae * C29184 * C29297 +
                        C29184 * (ae * C29297 + C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29344)))) /
        C29038;
    const double C928 =
        (C29254 * (C29347 + ae * C29292 + C29184 * C29352)) / C29038;
    const double C932 =
        (ae * C29285 + C29184 * C29347 + C29352 * C29318) / C29038;
    const double C933 = (C29347 + ae * C29292 + C29184 * C29352 +
                         (C29350 + ae * C29184 * C29297 +
                          C29184 * (ae * C29297 + C29184 * std::pow(C29182, 6) *
                                                      bs[6] * C29344)) *
                             C29318) /
                        C29038;
    const double C1881 =
        (C29254 *
         (2 * C29352 + ae * C29301 +
          C29184 * (C29350 + ae * C29184 * C29297 +
                    C29184 * (ae * C29297 + C29184 * std::pow(C29182, 6) *
                                                bs[6] * C29344)))) /
        C29038;
    const double C4053 =
        (2 * C29254 * C29352 +
         C29254 * (C29352 + (ae * C29297 +
                             C29184 * std::pow(C29182, 6) * bs[6] * C29344) *
                                C29318)) /
        C29038;
    const double C27530 =
        (3 * (C29347 + ae * C29797 + C29279 * C29810) +
         ae * (2 * C29797 + C29279 * C29801) +
         C29279 *
             (2 * C29810 + ae * C29801 +
              C29279 * (C29350 + ae * C29279 * C29233 +
                        C29279 * (ae * C29233 + C29279 * std::pow(C29182, 6) *
                                                    bs[6] * C29344)))) /
        C29038;
    const double C14416 =
        (3 * (C29360 + ae * C29631 + C29254 * C29737) +
         ae * (2 * C29631 + C29254 * C29733) +
         C29254 *
             (2 * C29737 + ae * C29733 +
              C29254 * (C29363 + ae * C29254 * C29297 +
                        C29254 * (ae * C29297 + C29254 * std::pow(C29182, 6) *
                                                    bs[6] * C29357)))) /
        C29038;
    const double C27572 =
        (3 * (C29360 + ae * C29805 + C29279 * C29813) +
         ae * (2 * C29805 + C29279 * C29807) +
         C29279 *
             (2 * C29813 + ae * C29807 +
              C29279 * (C29363 + ae * C29279 * C29272 +
                        C29279 * (ae * C29272 + C29279 * std::pow(C29182, 6) *
                                                    bs[6] * C29357)))) /
        C29038;
    const double C1940 = C1934 + C1935;
    const double C3536 = C3530 + C3531;
    const double C2476 = C2470 + C2471;
    const double C29612 = C29184 * C29377;
    const double C29783 = C29254 * C29377;
    const double C29816 = C29279 * C29377;
    const double C562 =
        (3 * (C29372 + C29377 * C29188) +
         C29184 * (2 * C29184 * C29377 +
                   C29184 * (C29377 + (C29223 * C29224 +
                                       C29367 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29188))) /
        C29038;
    const double C1016 = (C29254 * (C29372 + C29377 * C29188)) / C29038;
    const double C1020 = (C29184 * C29372 + C29184 * C29377 * C29318) / C29038;
    const double C1021 =
        (C29372 + C29377 * C29188 +
         (C29377 + (C29223 * C29224 + C29367 * bs[6] * std::pow(C29182, 6)) *
                       C29191 * C29188) *
             C29318) /
        C29038;
    const double C1457 = (2 * ae * (C29285 + C29290 * C29188) +
                          C29279 * (C29372 + C29377 * C29188)) /
                         C29038;
    const double C1993 =
        (C29254 * (2 * C29184 * C29377 +
                   C29184 * (C29377 + (C29223 * C29224 +
                                       C29367 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29188))) /
        C29038;
    const double C2529 =
        (2 * ae * (2 * C29292 + C29184 * C29301) +
         C29279 * (2 * C29184 * C29377 +
                   C29184 * (C29377 + (C29223 * C29224 +
                                       C29367 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29188))) /
        C29038;
    const double C3036 =
        (2 * ae * C29254 * C29292 + C29279 * C29254 * C29184 * C29377) / C29038;
    const double C3037 = (2 * ae * C29254 * C29301 +
                          C29279 * C29254 *
                              (C29377 + (C29223 * C29224 +
                                         C29367 * bs[6] * std::pow(C29182, 6)) *
                                            C29191 * C29188)) /
                         C29038;
    const double C4168 =
        (2 * C29254 * C29372 + C29254 * (C29372 + C29377 * C29318)) / C29038;
    const double C6658 = (2 * ae * (C29285 + C29290 * C29318) +
                          C29279 * (C29372 + C29377 * C29318)) /
                         C29038;
    const double C14455 =
        (3 * (C29372 + C29377 * C29318) +
         C29254 * (2 * C29254 * C29377 +
                   C29254 * (C29377 + (C29223 * C29224 +
                                       C29367 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29318))) /
        C29038;
    const double C16291 =
        (2 * ae * (2 * C29631 + C29254 * C29733) +
         C29279 * (2 * C29254 * C29377 +
                   C29254 * (C29377 + (C29223 * C29224 +
                                       C29367 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29318))) /
        C29038;
    const double C25985 = C25980 + C25981;
    const double C19296 = C19288 + C19289;
    const double C24244 = C24232 + C24233;
    const double C28660 = C28657 + C28658;
    const double C9340 = C9336 + C9337;
    const double C5276 = C5272 + C5273;
    const double C29045 = C29044 / C29035;
    const double C3101 = C3098 * C99;
    const double C3870 = C3098 * C632;
    const double C3864 = C3098 * C691;
    const double C3860 = C3098 * C629;
    const double C4059 = C3098 * C744;
    const double C4057 = C3098 * C741;
    const double C4980 = C3098 * C690;
    const double C4976 = C3098 * C628;
    const double C5202 = C3098 * C740;
    const double C6300 = C3098 * C2594;
    const double C6519 = C3098 * C2712;
    const double C7934 = C3098 * C1073;
    const double C7930 = C3098 * C1135;
    const double C7928 = C3098 * C1132;
    const double C7924 = C3098 * C1070;
    const double C8125 = C3098 * C1182;
    const double C9196 = C3098 * C1131;
    const double C9192 = C3098 * C1069;
    const double C9410 = C3098 * C1181;
    const double C13703 = C13696 * C99;
    const double C13700 = C13696 * C637;
    const double C13699 = C13696 * C636;
    const double C13698 = C13696 * C98;
    const double C14072 = C13696 * C3643;
    const double C14229 = C13696 * C3641;
    const double C14223 = C13696 * C631;
    const double C14221 = C13696 * C692;
    const double C14219 = C13696 * C630;
    const double C14369 = C13696 * C3775;
    const double C14367 = C13696 * C743;
    const double C14364 = C13696 * C742;
    const double C14508 = C13696 * C4239;
    const double C14507 = C13696 * C1078;
    const double C14506 = C13696 * C1077;
    const double C14505 = C13696 * C2596;
    const double C14504 = C13696 * C6061;
    const double C15052 = C13696 * C632;
    const double C15050 = C13696 * C691;
    const double C15048 = C13696 * C629;
    const double C15217 = C13696 * C744;
    const double C15214 = C13696 * C741;
    const double C16016 = C13696 * C2593;
    const double C16012 = C13696 * C6059;
    const double C16184 = C13696 * C2711;
    const double C16181 = C13696 * C6213;
    const double C17333 = C13696 * C17323;
    const double C17332 = C13696 * C7709;
    const double C17534 = C13696 * C1072;
    const double C17532 = C13696 * C1134;
    const double C17530 = C13696 * C4237;
    const double C17524 = C13696 * C1133;
    const double C17522 = C13696 * C1071;
    const double C17723 = C13696 * C1183;
    const double C18119 = C13696 * C2594;
    const double C18326 = C13696 * C2712;
    const double C18735 = C13696 * C1132;
    const double C18733 = C13696 * C1070;
    const double C18941 = C13696 * C1182;
    const double C27399 = C13696 * C7707;
    const double C27397 = C13696 * C7785;
    const double C28289 = C13696 * C1135;
    const double C28287 = C13696 * C1073;
    const double C11155 = C11148 + C11149;
    const double C20977 = C20964 + C20965;
    const double C29139 = C29138 / C29035;
    const double C3359 = C3351 + C3352;
    const double C3356 = C3342 + C3343;
    const double C5059 = C5054 + C3935;
    const double C5705 = C5700 + C4465;
    const double C24419 = C24412 + C4468;
    const double C24416 = C24406 + C4467;
    const double C3358 = C3348 + C3349;
    const double C3357 = C3345 + C3346;
    const double C10327 = C10318 + C10319;
    const double C10322 = C10308 + C10309;
    const double C10320 = C10304 + C10305;
    const double C10677 = C10672 + C10673;
    const double C10674 = C10666 + C10667;
    const double C11879 = C11874 + C11875;
    const double C12319 = C12316 + C12317;
    const double C12535 = C12530 + C12531;
    const double C12953 = C12950 + C12951;
    const double C17418 = C17409 + C17410;
    const double C17416 = C17405 + C17406;
    const double C17413 = C17399 + C17400;
    const double C17411 = C17395 + C17396;
    const double C17791 = C17783 + C17784;
    const double C19220 = C19214 + C19215;
    const double C10326 = C10316 + C10317;
    const double C10321 = C10306 + C10307;
    const double C10676 = C10670 + C10671;
    const double C10675 = C10668 + C10669;
    const double C12318 = C12314 + C12315;
    const double C17415 = C17403 + C17404;
    const double C17414 = C17401 + C17402;
    const double C19221 = C19216 + C19217;
    const double C10499 = C10491 + C10492;
    const double C10496 = C10482 + C10483;
    const double C12101 = C12096 + C11039;
    const double C12741 = C12736 + C11517;
    const double C17612 = C17605 + C11520;
    const double C17609 = C17599 + C11519;
    const double C10498 = C10488 + C10489;
    const double C10497 = C10485 + C10486;
    const double C504 = C179 * C222;
    const double C7110 = C179 * C6821;
    const double C20182 = C179 * C19893;
    const double C516 = C513 * C30090;
    const double C7111 = C513 * C6717;
    const double C20183 = C513 * C19789;
    const double C7811 = C7805 * C3091;
    const double C20851 = C7805 * C10231;
    const double C27302 = C7805 * C29981;
    const double C27301 = C7804 * C13696;
    const double C353 = C350 + C341;
    const double C8010 = C8007 + C1284;
    const double C3187 = C3178 + C3179;
    const double C3182 = C3168 + C3169;
    const double C3180 = C3164 + C3165;
    const double C3537 = C3532 + C3533;
    const double C3534 = C3526 + C3527;
    const double C4837 = C4832 + C4833;
    const double C5277 = C5274 + C5275;
    const double C5493 = C5488 + C5489;
    const double C5920 = C5917 + C5918;
    const double C24247 = C24238 + C24239;
    const double C24245 = C24234 + C24235;
    const double C24242 = C24228 + C24229;
    const double C24240 = C24224 + C24225;
    const double C24586 = C24578 + C24579;
    const double C25984 = C25978 + C25979;
    const double C13871 = C13744 * C158;
    const double C13870 = C13744 * C157;
    const double C13865 = C13744 * C156;
    const double C14278 = C13744 * C692;
    const double C14671 = C13744 * C1134;
    const double C14670 = C13744 * C1133;
    const double C15110 = C13744 * C691;
    const double C15576 = C13744 * C1132;
    const double C29169 = C29168 / C29035;
    const double C7189 = C7181 + C7182;
    const double C7186 = C7172 + C7173;
    const double C8893 = C8888 + C7651;
    const double C9557 = C9552 + C8249;
    const double C17264 = C17257 + C7654;
    const double C17261 = C17251 + C7653;
    const double C19735 = C19730 + C10178;
    const double C7188 = C7178 + C7179;
    const double C7187 = C7175 + C7176;
    const double C17263 = C17255 + C7655;
    const double C17262 = C17253 + C7652;
    const double C19919 = C19910 + C19911;
    const double C19914 = C19900 + C19901;
    const double C19912 = C19896 + C19897;
    const double C20081 = C20076 + C20077;
    const double C20078 = C20070 + C20071;
    const double C21465 = C21460 + C21461;
    const double C21669 = C21666 + C21667;
    const double C22109 = C22104 + C22105;
    const double C22327 = C22324 + C22325;
    const double C23779 = C23770 + C23771;
    const double C23777 = C23766 + C23767;
    const double C23774 = C23760 + C23761;
    const double C23772 = C23756 + C23757;
    const double C23940 = C23932 + C23933;
    const double C26063 = C26058 + C26059;
    const double C26061 = C26054 + C26055;
    const double C19918 = C19908 + C19909;
    const double C19913 = C19898 + C19899;
    const double C20080 = C20074 + C20075;
    const double C20079 = C20072 + C20073;
    const double C22326 = C22322 + C22323;
    const double C23778 = C23768 + C23769;
    const double C23776 = C23764 + C23765;
    const double C23775 = C23762 + C23763;
    const double C23773 = C23758 + C23759;
    const double C26060 = C26052 + C26053;
    const double C20261 = C20253 + C20254;
    const double C20258 = C20244 + C20245;
    const double C21879 = C21874 + C20721;
    const double C22543 = C22538 + C21249;
    const double C24115 = C24108 + C20724;
    const double C24112 = C24102 + C20723;
    const double C26499 = C26494 + C23148;
    const double C20260 = C20250 + C20251;
    const double C20259 = C20247 + C20248;
    const double C24114 = C24106 + C20725;
    const double C24113 = C24104 + C20722;
    const double C402 = C246 * C155;
    const double C3418 = C246 * C3161;
    const double C10558 = C246 * C10301;
    const double C414 = C411 * C30075;
    const double C3419 = C411 * C3093;
    const double C10559 = C411 * C10233;
    const double C3801 = C3795 * C3091;
    const double C10907 = C3795 * C10231;
    const double C14168 = C3795 * C29981;
    const double C14167 = C3794 * C13696;
    const double C578 = C575 + C566;
    const double C4182 = C4179 + C1025;
    const double C6847 = C6838 + C6839;
    const double C6842 = C6828 + C6829;
    const double C6840 = C6824 + C6825;
    const double C7009 = C7004 + C7005;
    const double C7006 = C6998 + C6999;
    const double C8471 = C8466 + C8467;
    const double C8680 = C8677 + C8678;
    const double C9123 = C9118 + C9119;
    const double C9341 = C9338 + C9339;
    const double C16928 = C16919 + C16920;
    const double C16926 = C16915 + C16916;
    const double C16923 = C16909 + C16910;
    const double C16921 = C16905 + C16906;
    const double C17089 = C17081 + C17082;
    const double C19299 = C19294 + C19295;
    const double C19297 = C19290 + C19291;
    const double C26862 = C26621 * C225;
    const double C26861 = C26621 * C224;
    const double C26856 = C26621 * C223;
    const double C27211 = C26621 * C743;
    const double C27210 = C26621 * C742;
    const double C27618 = C26621 * C1183;
    const double C28072 = C26621 * C741;
    const double C28550 = C26621 * C1182;
    const double C29028 = C26621 * C2711;
    const double C105 =
        ((C29187 + C29188 * C29189 * C29193) * C29191 + C29199 + C29199 +
         C29184 *
             (2 * ae * C29196 +
              C29184 *
                  (C29189 * C29193 + C29188 * bs[4] * std::pow(C29182, 4)) *
                  C29191)) /
        C29038;
    const double C697 =
        (C29199 + C29254 * (ae * C29260 + C29184 * C29264)) / C29038;
    const double C791 =
        (C29199 + C29254 * (ae * C29260 + C29184 * C29309)) / C29038;
    const double C1188 =
        (C29199 + C29279 * (ae * C29285 + C29184 * C29289)) / C29038;
    const double C1370 =
        (C29199 + C29279 * (ae * C29285 + C29184 * C29347)) / C29038;
    const double C111 = C92 * C100;
    const double C173 = C155 * C100;
    const double C240 = C222 * C100;
    const double C3106 = C3098 * C100;
    const double C3174 = C3161 * C100;
    const double C6834 = C6821 * C100;
    const double C10246 = C10238 * C100;
    const double C10314 = C10301 * C100;
    const double C13704 = C13696 * C100;
    const double C19906 = C19893 * C100;
    const double C1586 = C155 * C635;
    const double C1650 = C222 * C635;
    const double C3103 = C3098 * C635;
    const double C3170 = C3162 * C635;
    const double C3861 = C30139 * C635;
    const double C4828 = C3161 * C635;
    const double C4975 = C3091 * C635;
    const double C8462 = C6821 * C635;
    const double C10243 = C10238 * C635;
    const double C10310 = C10302 * C635;
    const double C10967 = C30139 * C635;
    const double C11870 = C10301 * C635;
    const double C12017 = C10231 * C635;
    const double C13702 = C13696 * C635;
    const double C15049 = C29981 * C635;
    const double C21456 = C19893 * C635;
    const double C2122 = C155 * C1076;
    const double C2186 = C222 * C1076;
    const double C4246 = C3098 * C1076;
    const double C5484 = C3161 * C1076;
    const double C6830 = C6822 * C1076;
    const double C7925 = C30139 * C1076;
    const double C9114 = C6821 * C1076;
    const double C9191 = C3091 * C1076;
    const double C11310 = C10238 * C1076;
    const double C12526 = C10301 * C1076;
    const double C15373 = C13696 * C1076;
    const double C18734 = C29981 * C1076;
    const double C19902 = C19894 * C1076;
    const double C20961 = C30139 * C1076;
    const double C22100 = C19893 * C1076;
    const double C22177 = C10231 * C1076;
    const double C3804 = C3798 * C3091;
    const double C10912 = C3798 * C10231;
    const double C14170 = C3798 * C29981;
    const double C7814 = C7808 * C3091;
    const double C20856 = C7808 * C10231;
    const double C27304 = C7808 * C29981;
    const double C6226 = C6224 * C3091;
    const double C13234 = C6224 * C10231;
    const double C15953 = C6224 * C29981;
    const double C9703 = C9701 * C3091;
    const double C22681 = C9701 * C10231;
    const double C28654 = C9701 * C29981;
    const double C29417 = ae * C29416;
    const double C694 =
        (C29184 * C29260 + C29254 * C29416 + C29254 * C29207 * ae) / C29035;
    const double C2656 = (C29279 * C29416) / C29035;
    const double C29509 = ae * C29508;
    const double C1185 =
        (C29184 * C29285 + C29279 * C29508 + C29279 * C29207 * ae) / C29035;
    const double C3797 = C3788 + C3789;
    const double C4180 = C4173 + C1027;
    const double C7807 = C7798 + C7799;
    const double C8008 = C8001 + C1286;
    const double C5565 = C5562 + C5563;
    const double C5990 = C5987 + C3040;
    const double C8470 = C8464 + C8465;
    const double C8892 = C8886 + C7650;
    const double C21464 = C21458 + C21459;
    const double C21878 = C21872 + C20720;
    const double C2659 = (C29279 * (C29216 + C29254 * C29275)) / C29038;
    const double C29217 = C29196 + C29215;
    const double C29380 = ae * C29379;
    const double C2597 = (C29279 * C29379) / C29035;
    const double C29448 = ae * C29447;
    const double C3653 = C3098 * C638;
    const double C3786 = C222 * C638;
    const double C3871 = C30139 * C638;
    const double C4826 = C3162 * C638;
    const double C10787 = C10238 * C638;
    const double C10977 = C30139 * C638;
    const double C11868 = C10302 * C638;
    const double C13701 = C13696 * C638;
    const double C15053 = C29981 * C638;
    const double C4249 = C3098 * C1079;
    const double C7796 = C155 * C1079;
    const double C7935 = C30139 * C1079;
    const double C9112 = C6822 * C1079;
    const double C11313 = C10238 * C1079;
    const double C18530 = C13696 * C1079;
    const double C20971 = C30139 * C1079;
    const double C22098 = C19894 * C1079;
    const double C28288 = C29981 * C1079;
    const double C4625 =
        (ae * C29285 + C29254 * C29360 + ae * C29279 * C29582 +
         C29279 * (C29585 + C29279 * (C29293 + C29254 * C29363))) /
        C29038;
    const double C29586 = C29260 + C29584;
    const double C29650 = ae * C29649;
    const double C29685 = C29285 + C29683;
    const double C3651 = C30139 * C641;
    const double C4749 = C3091 * C641;
    const double C10785 = C30139 * C641;
    const double C11791 = C10231 * C641;
    const double C14882 = C29981 * C641;
    const double C3657 = C3091 * C643;
    const double C10791 = C10231 * C643;
    const double C14070 = C29981 * C643;
    const double C7717 = C30139 * C1082;
    const double C8965 = C3091 * C1082;
    const double C18529 = C29981 * C1082;
    const double C20781 = C30139 * C1082;
    const double C21951 = C10231 * C1082;
    const double C7721 = C3091 * C1084;
    const double C17331 = C29981 * C1084;
    const double C20785 = C10231 * C1084;
    const double C6069 = C3091 * C2599;
    const double C13091 = C10231 * C2599;
    const double C15835 = C29981 * C2599;
    const double C348 = C30075 * C336;
    const double C1763 = C30075 * C835;
    const double C3347 = C30146 * C835;
    const double C5055 = C3093 * C835;
    const double C10487 = C30146 * C835;
    const double C12097 = C10233 * C835;
    const double C2299 = C30075 * C1276;
    const double C5701 = C3093 * C1276;
    const double C12737 = C10233 * C1276;
    const double C8004 = C30075 * C1278;
    const double C17606 = C10233 * C1278;
    const double C24413 = C3093 * C1278;
    const double C9903 = C30075 * C2820;
    const double C17602 = C30146 * C2820;
    const double C19437 = C10233 * C2820;
    const double C24409 = C30146 * C2820;
    const double C26201 = C3093 * C2820;
    const double C573 = C30090 * C561;
    const double C1998 = C30090 * C1017;
    const double C8889 = C6717 * C1017;
    const double C21875 = C19789 * C1017;
    const double C4176 = C30090 * C1019;
    const double C17258 = C6717 * C1019;
    const double C24109 = C19789 * C1019;
    const double C2534 = C30090 * C1458;
    const double C7177 = C30148 * C1458;
    const double C9553 = C6717 * C1458;
    const double C20249 = C30148 * C1458;
    const double C22539 = C19789 * C1458;
    const double C6662 = C30090 * C3035;
    const double C17254 = C30148 * C3035;
    const double C19731 = C6717 * C3035;
    const double C24105 = C30148 * C3035;
    const double C26495 = C19789 * C3035;
    const double C29634 = ae * C29633;
    const double C4355 =
        (C29254 * C29285 + C29279 * C29633 + C29279 * C29581 * ae) / C29035;
    const double C837 =
        ((C29187 + C29318 * C29189 * C29193) * C29191 + C29413 + C29413 +
         C29254 * (2 * ae * C29260 + C29254 * C29323)) /
        C29038;
    const double C2982 =
        (C29413 + C29279 * (ae * C29285 + C29254 * C29360)) / C29038;
    const double C844 = C155 * C693;
    const double C3938 = C3161 * C693;
    const double C3936 = C3162 * C693;
    const double C3998 = C222 * C693;
    const double C11042 = C10301 * C693;
    const double C11040 = C10302 * C693;
    const double C13867 = C13746 * C693;
    const double C14225 = C13696 * C693;
    const double C14279 = C13744 * C693;
    const double C14277 = C13745 * C693;
    const double C17087 = C6821 * C693;
    const double C23938 = C19893 * C693;
    const double C2824 = C155 * C2655;
    const double C4466 = C3162 * C2655;
    const double C6376 = C3161 * C2655;
    const double C6448 = C222 * C2655;
    const double C9695 = C30075 * C2655;
    const double C11518 = C10302 * C2655;
    const double C13380 = C10301 * C2655;
    const double C14669 = C13745 * C2655;
    const double C16014 = C13696 * C2655;
    const double C16073 = C13744 * C2655;
    const double C17083 = C6822 * C2655;
    const double C17398 = C30146 * C2655;
    const double C19211 = C10233 * C2655;
    const double C19516 = C6821 * C2655;
    const double C23934 = C19894 * C2655;
    const double C24227 = C30146 * C2655;
    const double C25975 = C3093 * C2655;
    const double C26280 = C19893 * C2655;
    const double C4469 = C3162 * C4301;
    const double C9905 = C155 * C4301;
    const double C11521 = C10302 * C4301;
    const double C14672 = C13745 * C4301;
    const double C17408 = C30146 * C4301;
    const double C17528 = C13696 * C4301;
    const double C19440 = C10301 * C4301;
    const double C19514 = C6822 * C4301;
    const double C24237 = C30146 * C4301;
    const double C26204 = C3161 * C4301;
    const double C26278 = C19894 * C4301;
    const double C28656 = C30075 * C4301;
    const double C507 = C181 * C222;
    const double C7117 = C181 * C6821;
    const double C20189 = C181 * C19893;
    const double C354 = C351 + C344;
    const double C415 = C412 * C30075;
    const double C3424 = C412 * C3093;
    const double C10564 = C412 * C10233;
    const double C512 = C184 * C222;
    const double C355 = C352 + C347;
    const double C416 = C413 * C30075;
    const double C1767 = C1765 + C841;
    const double C1936 = C1591 * C222;
    const double C1768 = C1766 + C842;
    const double C1939 = C1593 * C222;
    const double C8817 = C1593 * C6821;
    const double C21805 = C1593 * C19893;
    const double C2303 = C2301 + C1282;
    const double C2472 = C2127 * C222;
    const double C7115 = C2127 * C6822;
    const double C9044 = C2127 * C3098;
    const double C20187 = C2127 * C19894;
    const double C22030 = C2127 * C10238;
    const double C2304 = C2302 + C1283;
    const double C2475 = C2129 * C222;
    const double C7112 = C2129 * C6822;
    const double C7794 = C2129 * C3098;
    const double C9483 = C2129 * C6821;
    const double C20184 = C2129 * C19894;
    const double C20852 = C2129 * C10238;
    const double C22469 = C2129 * C19893;
    const double C28181 = C2129 * C13696;
    const double C2367 = C2365 * C30075;
    const double C5779 = C2365 * C3093;
    const double C12814 = C2365 * C10233;
    const double C8012 = C8009 + C1285;
    const double C27303 = C7809 * C13696;
    const double C27451 = C27450 + C8005;
    const double C27313 = C27311 * C13696;
    const double C1460 =
        ((C29187 + C29367 * C29189 * C29193) * C29191 + C29505 + C29505 +
         C29279 * (2 * ae * C29285 + C29279 * C29372)) /
        C29038;
    const double C2876 =
        (C29505 + C29254 * (ae * C29260 + C29279 * C29336)) / C29038;
    const double C1467 = C222 * C1184;
    const double C8191 = C155 * C1184;
    const double C8252 = C6821 * C1184;
    const double C8250 = C6822 * C1184;
    const double C17727 = C13696 * C1184;
    const double C17789 = C10301 * C1184;
    const double C21252 = C19893 * C1184;
    const double C21250 = C19894 * C1184;
    const double C24584 = C3161 * C1184;
    const double C26858 = C26623 * C1184;
    const double C27619 = C26621 * C1184;
    const double C27617 = C26622 * C1184;
    const double C1831 = C1829 * C30075;
    const double C3421 = C1829 * C30146;
    const double C5132 = C1829 * C3093;
    const double C10561 = C1829 * C30146;
    const double C12174 = C1829 * C10233;
    const double C405 = C248 * C155;
    const double C3425 = C248 * C3161;
    const double C10565 = C248 * C10301;
    const double C517 = C514 * C30090;
    const double C7116 = C514 * C6717;
    const double C20188 = C514 * C19789;
    const double C579 = C576 + C569;
    const double C410 = C251 * C155;
    const double C518 = C515 * C30090;
    const double C580 = C577 + C572;
    const double C2002 = C2000 + C1023;
    const double C1824 = C1655 * C155;
    const double C3423 = C1655 * C3162;
    const double C4906 = C1655 * C3098;
    const double C10563 = C1655 * C10302;
    const double C11948 = C1655 * C10238;
    const double C2003 = C2001 + C1024;
    const double C1827 = C1657 * C155;
    const double C3420 = C1657 * C3162;
    const double C3784 = C1657 * C3098;
    const double C5133 = C1657 * C3161;
    const double C10560 = C1657 * C10302;
    const double C10908 = C1657 * C10238;
    const double C12175 = C1657 * C10301;
    const double C14994 = C1657 * C13696;
    const double C1943 = C1941 * C30090;
    const double C8816 = C1941 * C6717;
    const double C21804 = C1941 * C19789;
    const double C4184 = C4181 + C1026;
    const double C14169 = C3799 * C13696;
    const double C2538 = C2536 + C1464;
    const double C2360 = C2191 * C155;
    const double C2539 = C2537 + C1465;
    const double C2363 = C2193 * C155;
    const double C5780 = C2193 * C3161;
    const double C12815 = C2193 * C10301;
    const double C2479 = C2477 * C30090;
    const double C7113 = C2477 * C30148;
    const double C9482 = C2477 * C6717;
    const double C20185 = C2477 * C30148;
    const double C22468 = C2477 * C19789;
    const double C6666 = C6665 + C3039;
    const double C15954 = C6225 * C13696;
    const double C14461 = C14460 + C4177;
    const double C14179 = C14177 * C13696;
    const double C16297 = C16296 + C6663;
    const double C15958 = C15956 * C13696;
    const double C4304 =
        (C29216 + C29254 * C29275 +
         (C29243 + C29254 * (ae * C29272 +
                             C29184 * std::pow(C29182, 6) * bs[6] * C29258)) *
             C29367) /
        C29038;
    const double C29245 = C29209 + C29242;
    const double C29387 = C29214 + C29386;
    const double C29455 = C29214 + C29454;
    const double C29519 = ae * C29517;
    const double C29545 = C29279 * C29517;
    const double C4240 = (C29379 + C29517 * C29367) / C29035;
    const double C29533 = ae * C29531;
    const double C14074 = C13696 * C14064;
    const double C14509 = C13696 * C14501;
    const double C15836 = C13696 * C15829;
    const double C27257 = C13696 * C27252;
    const double C29244 = C29226 + C29241;
    const double C2600 =
        (2 * ae * C29279 * C29254 * C29209 + C29184 * C29279 * C29515) / C29038;
    const double C3646 =
        (2 * ae * (2 * C29254 * C29209 + C29254 * (C29209 + C29233 * C29318)) +
         C29184 * (2 * C29515 +
                   C29254 * (C29239 + (C29223 * C29224 +
                                       C29188 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29318))) /
        C29038;
    const double C4241 = (C29254 * C29213 + C29515 * C29367) / C29038;
    const double C4242 =
        (2 * ae * (C29254 * C29209 + C29254 * C29233 * C29367) +
         C29184 * (C29515 + C29254 *
                                (C29223 * C29224 +
                                 C29188 * bs[6] * std::pow(C29182, 6)) *
                                C29191 * C29367)) /
        C29038;
    const double C14065 =
        (3 * (C29213 + C29239 * C29318) +
         C29254 * (2 * C29515 +
                   C29254 * (C29239 + (C29223 * C29224 +
                                       C29188 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29318))) /
        C29038;
    const double C15830 =
        (C29279 * (2 * C29515 +
                   C29254 * (C29239 + (C29223 * C29224 +
                                       C29188 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29318))) /
        C29038;
    const double C17324 =
        (2 * C29279 * C29515 +
         C29279 * (C29515 + C29254 *
                                (C29223 * C29224 +
                                 C29188 * bs[6] * std::pow(C29182, 6)) *
                                C29191 * C29367)) /
        C29038;
    const double C7712 =
        (2 * ae * (2 * C29279 * C29209 + C29279 * (C29209 + C29233 * C29367)) +
         C29184 * (2 * C29529 +
                   C29279 * (C29239 + (C29223 * C29224 +
                                       C29188 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29367))) /
        C29038;
    const double C27253 =
        (3 * (C29213 + C29239 * C29367) +
         C29279 * (2 * C29529 +
                   C29279 * (C29239 + (C29223 * C29224 +
                                       C29188 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29367))) /
        C29038;
    const double C3654 = C30139 * C644;
    const double C10788 = C30139 * C644;
    const double C14884 = C29981 * C644;
    const double C7719 = C30139 * C1085;
    const double C20783 = C30139 * C1085;
    const double C28126 = C29981 * C1085;
    const double C14073 = C29981 * C3645;
    const double C15833 = C29981 * C6063;
    const double C27256 = C29981 * C7711;
    const double C29420 = C29419 + C29238;
    const double C349 = C155 * C160;
    const double C1287 = C155 * C1136;
    const double C1764 = C155 * C1579;
    const double C3355 = C3162 * C1579;
    const double C10495 = C10302 * C1579;
    const double C2300 = C155 * C2115;
    const double C29597 = ae * C29595;
    const double C29596 = C29254 * C29595;
    const double C29652 = C29279 * C29595;
    const double C4302 = (C29416 + C29595 * C29367) / C29035;
    const double C29722 = C29265 + C29719;
    const double C29745 = C29582 + C29744;
    const double C29764 = ae * C29762;
    const double C27449 = C155 * C27298;
    const double C2119 = C30075 * C1137;
    const double C7797 = C30075 * C1141;
    const double C27312 = C27310 * C29981;
    const double C29512 = C29511 + C29238;
    const double C574 = C222 * C227;
    const double C1028 = C222 * C745;
    const double C1999 = C222 * C1643;
    const double C2535 = C222 * C2179;
    const double C7185 = C6822 * C2179;
    const double C20257 = C19894 * C2179;
    const double C3041 = C222 * C2713;
    const double C8891 = C6822 * C2713;
    const double C21877 = C19894 * C2713;
    const double C29638 = C29637 + C29594;
    const double C29694 = ae * C29691;
    const double C29693 = C29279 * C29691;
    const double C29752 = C29751 + C29720;
    const double C14459 = C222 * C14164;
    const double C16295 = C222 * C15946;
    const double C17260 = C6822 * C15946;
    const double C24111 = C19894 * C15946;
    const double C29790 = ae * C29788;
    const double C29789 = C29279 * C29788;
    const double C29828 = C29290 + C29825;
    const double C1647 = C30090 * C746;
    const double C3787 = C30090 * C750;
    const double C14178 = C14176 * C29981;
    const double C15957 = C15955 * C29981;
    const double C9197 = C30139 * C1231;
    const double C22183 = C30139 * C1231;
    const double C7931 = C30139 * C1235;
    const double C20967 = C30139 * C1235;
    const double C28290 = C29981 * C1235;
    const double C4462 =
        (2 * ae * (C29267 + C29591 * C29367) +
         C29254 * (C29590 + C29184 *
                                (C29223 * C29224 +
                                 C29318 * bs[6] * std::pow(C29182, 6)) *
                                C29191 * C29367)) /
        C29038;
    const double C7996 =
        (2 * C29279 * C29590 +
         C29279 * (C29590 + C29184 *
                                (C29223 * C29224 +
                                 C29318 * bs[6] * std::pow(C29182, 6)) *
                                C29191 * C29367)) /
        C29038;
    const double C29715 = C29709 + C29710;
    const double C17597 =
        (2 * ae * (2 * C29279 * C29265 + C29279 * (C29265 + C29272 * C29367)) +
         C29254 * (2 * C29760 +
                   C29279 * (C29328 + (C29223 * C29224 +
                                       C29318 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29367))) /
        C29038;
    const double C27443 =
        (3 * (C29323 + C29328 * C29367) +
         C29279 * (2 * C29760 +
                   C29279 * (C29328 + (C29223 * C29224 +
                                       C29318 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29367))) /
        C29038;
    const double C1761 = C30075 * C834;
    const double C3350 = C30146 * C834;
    const double C10490 = C30146 * C834;
    const double C2297 = C30075 * C1275;
    const double C8002 = C30075 * C1279;
    const double C5699 = C30146 * C2821;
    const double C8605 = C30075 * C2821;
    const double C12735 = C30146 * C2821;
    const double C17604 = C30146 * C4461;
    const double C24411 = C30146 * C4461;
    const double C28819 = C30075 * C4461;
    const double C27448 = C30075 * C7995;
    const double C1830 = C1828 * C30075;
    const double C3422 = C1828 * C30146;
    const double C10562 = C1828 * C30146;
    const double C2366 = C2364 * C30075;
    const double C5203 = C30139 * C928;
    const double C12245 = C30139 * C928;
    const double C4060 = C30139 * C932;
    const double C11151 = C30139 * C932;
    const double C15218 = C29981 * C932;
    const double C1942 = C1940 * C30090;
    const double C2478 = C2476 * C30090;
    const double C7114 = C2476 * C30148;
    const double C20186 = C2476 * C30148;
    const double C4169 =
        (2 * C29254 * C29612 +
         C29254 * (C29612 + C29184 *
                                (C29223 * C29224 +
                                 C29367 * bs[6] * std::pow(C29182, 6)) *
                                C29191 * C29318)) /
        C29038;
    const double C6659 =
        (2 * ae * (C29292 + C29604 * C29318) +
         C29279 * (C29612 + C29184 *
                                (C29223 * C29224 +
                                 C29367 * bs[6] * std::pow(C29182, 6)) *
                                C29191 * C29318)) /
        C29038;
    const double C29821 = C29815 + C29816;
    const double C1996 = C30090 * C1016;
    const double C4174 = C30090 * C1020;
    const double C2532 = C30090 * C1457;
    const double C7180 = C30148 * C1457;
    const double C20252 = C30148 * C1457;
    const double C5988 = C30090 * C3036;
    const double C8887 = C30148 * C3036;
    const double C21873 = C30148 * C3036;
    const double C14458 = C30090 * C4168;
    const double C16294 = C30090 * C6658;
    const double C17256 = C30148 * C6658;
    const double C24107 = C30148 * C6658;
    const double C28662 = C28660 * C29981;
    const double C29046 = C29981 - C29045;
    const double C4064 = C4057 + C4058;
    const double C7941 = C7928 + C7929;
    const double C14236 = C14229 + C14230;
    const double C14233 = C14223 + C14224;
    const double C14232 = C14221 + C14222;
    const double C14231 = C14219 + C14220;
    const double C14374 = C14369 + C14370;
    const double C14373 = C14367 + C14368;
    const double C14372 = C14364 + C14365;
    const double C15219 = C15214 + C15215;
    const double C16021 = C16016 + C16017;
    const double C16019 = C16012 + C16013;
    const double C16188 = C16184 + C16185;
    const double C16187 = C16181 + C16182;
    const double C17541 = C17534 + C17535;
    const double C17540 = C17532 + C17533;
    const double C17539 = C17530 + C17531;
    const double C17537 = C17524 + C17525;
    const double C17536 = C17522 + C17523;
    const double C17729 = C17723 + C17724;
    const double C18740 = C18735 + C18736;
    const double C27403 = C27399 + C27400;
    const double C27402 = C27397 + C27398;
    const double C29140 = C30075 - C29139;
    const double C3363 = C3359 + C3352;
    const double C3360 = C3356 + C3343;
    const double C5061 = C5059 + C3935;
    const double C5707 = C5705 + C4465;
    const double C24423 = C24419 + C4468;
    const double C24420 = C24416 + C4467;
    const double C3362 = C3358 + C3349;
    const double C3361 = C3357 + C3346;
    const double C10503 = C10499 + C10492;
    const double C10500 = C10496 + C10483;
    const double C12103 = C12101 + C11039;
    const double C12743 = C12741 + C11517;
    const double C17616 = C17612 + C11520;
    const double C17613 = C17609 + C11519;
    const double C10502 = C10498 + C10489;
    const double C10501 = C10497 + C10486;
    const double C356 = C353 + C342;
    const double C8013 = C8010 + C7999;
    const double C29170 = C30090 - C29169;
    const double C7193 = C7189 + C7182;
    const double C7190 = C7186 + C7173;
    const double C8895 = C8893 + C7651;
    const double C9559 = C9557 + C8249;
    const double C17268 = C17264 + C7654;
    const double C17265 = C17261 + C7653;
    const double C19737 = C19735 + C10178;
    const double C7192 = C7188 + C7179;
    const double C7191 = C7187 + C7176;
    const double C17267 = C17263 + C7655;
    const double C17266 = C17262 + C7652;
    const double C20265 = C20261 + C20254;
    const double C20262 = C20258 + C20245;
    const double C21881 = C21879 + C20721;
    const double C22545 = C22543 + C21249;
    const double C24119 = C24115 + C20724;
    const double C24116 = C24112 + C20723;
    const double C26501 = C26499 + C23148;
    const double C20264 = C20260 + C20251;
    const double C20263 = C20259 + C20248;
    const double C24118 = C24114 + C20725;
    const double C24117 = C24113 + C20722;
    const double C581 = C578 + C567;
    const double C4185 = C4182 + C4172;
    const double C1587 = C30075 * C697;
    const double C3171 = C30146 * C697;
    const double C4829 = C3093 * C697;
    const double C10311 = C30146 * C697;
    const double C11871 = C10233 * C697;
    const double C3865 = C30139 * C791;
    const double C4979 = C3091 * C791;
    const double C10971 = C30139 * C791;
    const double C12021 = C10231 * C791;
    const double C15051 = C29981 * C791;
    const double C2187 = C30090 * C1188;
    const double C6831 = C30148 * C1188;
    const double C9115 = C6717 * C1188;
    const double C19903 = C30148 * C1188;
    const double C22101 = C19789 * C1188;
    const double C8126 = C30139 * C1370;
    const double C9409 = C3091 * C1370;
    const double C18942 = C29981 * C1370;
    const double C21139 = C30139 * C1370;
    const double C22395 = C10231 * C1370;
    const double C182 = C173 + C174;
    const double C249 = C240 + C241;
    const double C3185 = C3174 + C3175;
    const double C6845 = C6834 + C6835;
    const double C10325 = C10314 + C10315;
    const double C19917 = C19906 + C19907;
    const double C1656 = C1650 + C1651;
    const double C3875 = C3860 + C3861;
    const double C8469 = C8462 + C8463;
    const double C10981 = C10966 + C10967;
    const double C15056 = C15048 + C15049;
    const double C21463 = C21456 + C21457;
    const double C2128 = C2122 + C2123;
    const double C5491 = C5484 + C5485;
    const double C7939 = C7924 + C7925;
    const double C12533 = C12526 + C12527;
    const double C18739 = C18733 + C18734;
    const double C20975 = C20960 + C20961;
    const double C838 =
        (C29184 * C29323 + C29417 + C29417 +
         C29254 * (2 * ae * C29267 + C29254 * C29184 * C29328)) /
        C29038;
    const double C2983 =
        (C29417 + C29279 * (ae * C29292 + C29254 * C29184 * C29363)) / C29038;
    const double C845 = C155 * C694;
    const double C3866 = C3098 * C694;
    const double C3940 = C3161 * C694;
    const double C3934 = C3162 * C694;
    const double C3996 = C222 * C694;
    const double C4831 = C30146 * C694;
    const double C10972 = C10238 * C694;
    const double C11044 = C10301 * C694;
    const double C11038 = C10302 * C694;
    const double C11873 = C30146 * C694;
    const double C13868 = C13746 * C694;
    const double C15054 = C13696 * C694;
    const double C15111 = C13745 * C694;
    const double C2825 = C155 * C2656;
    const double C4464 = C3162 * C2656;
    const double C5487 = C30146 * C2656;
    const double C5776 = C222 * C2656;
    const double C6296 = C3098 * C2656;
    const double C6378 = C3161 * C2656;
    const double C8391 = C30075 * C2656;
    const double C8675 = C6822 * C2656;
    const double C11516 = C10302 * C2656;
    const double C12529 = C30146 * C2656;
    const double C13302 = C10238 * C2656;
    const double C13382 = C10301 * C2656;
    const double C15577 = C13745 * C2656;
    const double C18121 = C13696 * C2656;
    const double C21664 = C19894 * C2656;
    const double C1461 =
        (C29184 * C29372 + C29509 + C29509 +
         C29279 * (2 * ae * C29292 + C29279 * C29184 * C29377)) /
        C29038;
    const double C2877 =
        (C29509 + C29254 * (ae * C29267 + C29279 * C29184 * C29339)) / C29038;
    const double C1468 = C222 * C1185;
    const double C8127 = C3098 * C1185;
    const double C8189 = C155 * C1185;
    const double C8254 = C6821 * C1185;
    const double C8248 = C6822 * C1185;
    const double C9117 = C30148 * C1185;
    const double C21140 = C10238 * C1185;
    const double C21254 = C19893 * C1185;
    const double C21248 = C19894 * C1185;
    const double C22103 = C30148 * C1185;
    const double C26859 = C26623 * C1185;
    const double C28447 = C13696 * C1185;
    const double C28551 = C26622 * C1185;
    const double C3803 = C3797 * C3098;
    const double C5131 = C3797 * C3162;
    const double C10911 = C3797 * C10238;
    const double C12173 = C3797 * C10302;
    const double C14996 = C3797 * C13696;
    const double C4183 = C4180 + C1027;
    const double C7813 = C7807 * C3098;
    const double C9481 = C7807 * C6822;
    const double C20855 = C7807 * C10238;
    const double C22467 = C7807 * C19894;
    const double C28183 = C7807 * C13696;
    const double C8011 = C8008 + C1286;
    const double C5778 = C5565 * C3162;
    const double C6219 = C5565 * C3098;
    const double C12813 = C5565 * C10302;
    const double C13233 = C5565 * C10238;
    const double C5991 = C5990 + C3040;
    const double C8894 = C8892 + C7650;
    const double C21880 = C21878 + C20720;
    const double C5483 = C30146 * C2659;
    const double C8389 = C30075 * C2659;
    const double C12525 = C30146 * C2659;
    const double C29218 = C29217 + C29210;
    const double C640 =
        (C29254 * C29213 + C29380 + C29380 +
         C29184 * (2 * ae * C29254 * C29209 + C29184 * C29254 * C29239)) /
        C29038;
    const double C700 = (ae * C29260 + C29184 * C29264 + C29380 +
                         C29254 * (C29216 + C29254 * C29275)) /
                        C29038;
    const double C794 = (ae * C29260 + C29184 * C29309 + C29380 +
                         C29254 * (C29216 + C29254 * C29314)) /
                        C29038;
    const double C2715 = (C29380 + C29279 * C29254 * C29300) / C29038;
    const double C2930 = (C29380 + C29279 * C29254 * C29352) / C29038;
    const double C4244 = C3098 * C2597;
    const double C5482 = C3162 * C2597;
    const double C5560 = C222 * C2597;
    const double C6301 = C30139 * C2597;
    const double C8388 = C155 * C2597;
    const double C8460 = C6822 * C2597;
    const double C11308 = C10238 * C2597;
    const double C12524 = C10302 * C2597;
    const double C13307 = C30139 * C2597;
    const double C15374 = C13696 * C2597;
    const double C18120 = C29981 * C2597;
    const double C21454 = C19894 * C2597;
    const double C1081 =
        (C29279 * C29213 + C29448 + C29448 +
         C29184 * (2 * ae * C29279 * C29209 + C29184 * C29279 * C29239)) /
        C29038;
    const double C1191 = (ae * C29285 + C29184 * C29289 + C29448 +
                          C29279 * (C29216 + C29279 * C29300)) /
                         C29038;
    const double C1373 = (ae * C29285 + C29184 * C29347 + C29448 +
                          C29279 * (C29216 + C29279 * C29352)) /
                         C29038;
    const double C2768 = (C29448 + C29254 * C29279 * C29314) / C29038;
    const double C3880 = C3870 + C3871;
    const double C10986 = C10976 + C10977;
    const double C15058 = C15052 + C15053;
    const double C7944 = C7934 + C7935;
    const double C20980 = C20970 + C20971;
    const double C28291 = C28287 + C28288;
    const double C17788 = C30146 * C4625;
    const double C24583 = C30146 * C4625;
    const double C28976 = C30075 * C4625;
    const double C29587 = C29586 + C29583;
    const double C6373 =
        (C29279 * C29323 + C29650 + C29650 +
         C29254 * (2 * ae * C29279 * C29265 + C29254 * C29279 * C29328)) /
        C29038;
    const double C29686 = C29685 + C29682;
    const double C4677 =
        (C29254 * C29372 + C29634 + C29634 +
         C29279 * (2 * ae * C29631 + C29279 * C29254 * C29377)) /
        C29038;
    const double C6445 = (ae * C29260 + C29279 * C29336 + C29634 +
                          C29254 * (ae * (C29279 * C29290 + C29206) +
                                    C29254 * (C29268 + C29279 * C29339))) /
                         C29038;
    const double C4680 = C222 * C4355;
    const double C10179 = C6822 * C4355;
    const double C17725 = C13696 * C4355;
    const double C17787 = C10302 * C4355;
    const double C17846 = C6821 * C4355;
    const double C19293 = C30148 * C4355;
    const double C23149 = C19894 * C4355;
    const double C24582 = C3162 * C4355;
    const double C24640 = C19893 * C4355;
    const double C26057 = C30148 * C4355;
    const double C27208 = C26623 * C4355;
    const double C28975 = C155 * C4355;
    const double C29029 = C26622 * C4355;
    const double C10110 = C30075 * C2982;
    const double C17786 = C30146 * C2982;
    const double C19657 = C10233 * C2982;
    const double C24581 = C30146 * C2982;
    const double C26421 = C3093 * C2982;
    const double C4002 = C3998 + C3999;
    const double C14234 = C14225 + C14226;
    const double C17092 = C17087 + C17088;
    const double C23943 = C23938 + C23939;
    const double C9907 = C9902 + C2824;
    const double C24417 = C24408 + C4466;
    const double C26206 = C26200 + C6376;
    const double C9700 = C9694 + C9695;
    const double C17610 = C17601 + C11518;
    const double C19442 = C19436 + C13380;
    const double C16020 = C16014 + C16015;
    const double C17412 = C17397 + C17398;
    const double C19218 = C19210 + C19211;
    const double C24241 = C24226 + C24227;
    const double C25982 = C25974 + C25975;
    const double C24418 = C24410 + C4469;
    const double C28821 = C28818 + C9905;
    const double C17611 = C17603 + C11521;
    const double C17417 = C17407 + C17408;
    const double C17538 = C17528 + C17529;
    const double C19518 = C19514 + C19515;
    const double C24246 = C24236 + C24237;
    const double C26282 = C26278 + C26279;
    const double C28659 = C28655 + C28656;
    const double C357 = C354 + C345;
    const double C358 = C355 + C348;
    const double C1770 = C1768 + C1763;
    const double C2306 = C2304 + C2299;
    const double C8015 = C8012 + C8004;
    const double C27309 = C27303 + C27304;
    const double C6449 = C30090 * C2876;
    const double C17084 = C30148 * C2876;
    const double C19517 = C6717 * C2876;
    const double C23935 = C30148 * C2876;
    const double C26281 = C19789 * C2876;
    const double C8195 = C8191 + C8192;
    const double C17731 = C17727 + C17728;
    const double C17794 = C17789 + C17790;
    const double C24589 = C24584 + C24585;
    const double C417 = C405 + C415;
    const double C519 = C507 + C517;
    const double C582 = C579 + C570;
    const double C583 = C580 + C573;
    const double C2005 = C2003 + C1998;
    const double C4187 = C4184 + C4176;
    const double C14175 = C14169 + C14170;
    const double C2541 = C2539 + C2534;
    const double C6667 = C6666 + C6662;
    const double C29246 = C29245 + C29234;
    const double C29388 = ae * C29387;
    const double C3644 = (2 * C29379 + C29254 * C29387) / C29035;
    const double C6062 = (C29279 * C29387) / C29035;
    const double C29456 = ae * C29455;
    const double C7710 = (2 * C29447 + C29279 * C29455) / C29035;
    const double C6146 =
        (C29279 * (C29275 + C29519 +
                   C29254 * (C29243 + C29254 * (ae * C29272 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29258)))) /
        C29038;
    const double C29546 = ae * C29545;
    const double C4251 = C3098 * C4240;
    const double C11315 = C10238 * C4240;
    const double C18531 = C13696 * C4240;
    const double C6067 = C30139 * C2600;
    const double C13089 = C30139 * C2600;
    const double C17916 = C29981 * C2600;
    const double C17329 = C29981 * C4241;
    const double C29421 = ae * C29420;
    const double C695 =
        (C29260 + C29265 * C29188 + C29254 * C29420 + C29254 * C29235 * ae) /
        C29035;
    const double C2657 = (C29279 * C29420) / C29035;
    const double C4626 =
        (ae * C29292 + C29254 * C29609 + ae * C29279 * C29595 +
         C29279 * (C29597 + C29279 * (ae * C29604 + C29254 * C29184 *
                                                        std::pow(C29182, 6) *
                                                        bs[6] * C29357))) /
        C29038;
    const double C29598 = C29267 + C29596;
    const double C29653 = ae * C29652;
    const double C4471 = C3162 * C4302;
    const double C9906 = C155 * C4302;
    const double C11523 = C10302 * C4302;
    const double C29723 = C29722 + C29717;
    const double C29746 = ae * C29745;
    const double C17392 = (2 * C29649 + C29279 * C29745) / C29035;
    const double C7806 = C7796 + C7797;
    const double C29513 = ae * C29512;
    const double C1186 =
        (C29285 + C29290 * C29188 + C29279 * C29512 + C29279 * C29235 * ae) /
        C29035;
    const double C29639 = ae * C29638;
    const double C4356 =
        (C29254 * C29292 + C29279 * C29638 + C29279 * C29592 * ae) / C29035;
    const double C29695 = C29292 + C29693;
    const double C29753 = ae * C29752;
    const double C14587 =
        (C29285 + C29290 * C29318 + C29279 * C29752 + C29279 * C29718 * ae) /
        C29035;
    const double C29791 = C29631 + C29789;
    const double C29829 = C29828 + C29823;
    const double C3796 = C3786 + C3787;
    const double C9201 = C9196 + C9197;
    const double C22187 = C22182 + C22183;
    const double C7942 = C7930 + C7931;
    const double C20978 = C20966 + C20967;
    const double C28292 = C28289 + C28290;
    const double C1769 = C1767 + C1761;
    const double C2305 = C2303 + C2297;
    const double C27452 = C27451 + C27448;
    const double C5205 = C5202 + C5203;
    const double C12247 = C12244 + C12245;
    const double C4065 = C4059 + C4060;
    const double C11156 = C11150 + C11151;
    const double C15220 = C15217 + C15218;
    const double C2004 = C2002 + C1996;
    const double C2540 = C2538 + C2532;
    const double C14462 = C14461 + C14458;
    const double C16298 = C16297 + C16294;
    const double C29047 = C29046 * C29040;
    const double C88 =
        (((0 - (C29036 * C29034) / C29035) * ae) / C29035 - (0 * be) / C29042) /
            (2 * C29035) -
        ((C29036 * ((C29046 * ae) / C29035 - C29034 / C29042) + C10231) * be) /
            C29035 +
        (0 * ae) / C29035 - C29041 / C29038;
    const double C90 =
        ((C29046 * ae) / C29035 - C29034 / C29042) / (2 * C29035) -
        ((C29036 * ((0 * ae) / C29035 - C29041 / C29038) + C30139) * be) /
            C29035;
    const double C3096 =
        (-C29034 / C29035) / (2 * C29035) - (C29046 * be) / C29035;
    const double C10236 = (C29046 * ae) / C29035 - C29034 / C29042;
    const double C14371 = C14236 * C222;
    const double C14366 = C14233 * C222;
    const double C17150 = C14233 * C6821;
    const double C24001 = C14233 * C19893;
    const double C14363 = C14231 * C222;
    const double C17143 = C14231 * C6821;
    const double C23994 = C14231 * C19893;
    const double C14377 = C14374 * C30090;
    const double C14376 = C14373 * C30090;
    const double C17149 = C14373 * C6717;
    const double C24000 = C14373 * C19789;
    const double C14375 = C14372 * C30090;
    const double C17144 = C14372 * C6717;
    const double C23995 = C14372 * C19789;
    const double C15221 = C15219 * C30090;
    const double C18324 = C15219 * C6717;
    const double C25107 = C15219 * C19789;
    const double C16186 = C16021 * C222;
    const double C17145 = C16021 * C6822;
    const double C17526 = C16021 * C10302;
    const double C19366 = C16021 * C10301;
    const double C19589 = C16021 * C6821;
    const double C23996 = C16021 * C19894;
    const double C24350 = C16021 * C3162;
    const double C26130 = C16021 * C3161;
    const double C26353 = C16021 * C19893;
    const double C28763 = C16021 * C155;
    const double C16183 = C16019 * C222;
    const double C17148 = C16019 * C6822;
    const double C19368 = C16019 * C10302;
    const double C23999 = C16019 * C19894;
    const double C26132 = C16019 * C3162;
    const double C16190 = C16188 * C30090;
    const double C17146 = C16188 * C30148;
    const double C19588 = C16188 * C6717;
    const double C23997 = C16188 * C30148;
    const double C26352 = C16188 * C19789;
    const double C16189 = C16187 * C30090;
    const double C17147 = C16187 * C30148;
    const double C23998 = C16187 * C30148;
    const double C17547 = C17541 * C10301;
    const double C24355 = C17541 * C3161;
    const double C27395 = C17541 * C155;
    const double C17546 = C17540 * C10233;
    const double C24354 = C17540 * C3093;
    const double C27396 = C17540 * C30075;
    const double C17545 = C17539 * C10302;
    const double C19587 = C17539 * C6822;
    const double C24353 = C17539 * C3162;
    const double C26351 = C17539 * C19894;
    const double C28765 = C17539 * C155;
    const double C17543 = C17537 * C10233;
    const double C24349 = C17537 * C3093;
    const double C27394 = C17537 * C30075;
    const double C17542 = C17536 * C10301;
    const double C24348 = C17536 * C3161;
    const double C27393 = C17536 * C155;
    const double C18742 = C18740 * C10233;
    const double C25507 = C18740 * C3093;
    const double C28286 = C18740 * C30075;
    const double C27405 = C27403 * C155;
    const double C27404 = C27402 * C30075;
    const double C29141 = C29140 * C29040;
    const double C3367 = C3363 + C3353;
    const double C3364 = C3360 + C3344;
    const double C5063 = C5061 + C5055;
    const double C5709 = C5707 + C5701;
    const double C24427 = C24423 + C24413;
    const double C24424 = C24420 + C24407;
    const double C3366 = C3362 + C3350;
    const double C3365 = C3361 + C3347;
    const double C10507 = C10503 + C10493;
    const double C10504 = C10500 + C10484;
    const double C12105 = C12103 + C12097;
    const double C12745 = C12743 + C12737;
    const double C17620 = C17616 + C17606;
    const double C17617 = C17613 + C17600;
    const double C10506 = C10502 + C10490;
    const double C10505 = C10501 + C10487;
    const double C8016 = C8013 * C3091;
    const double C21032 = C8013 * C10231;
    const double C27445 = C8013 * C29981;
    const double C29171 = C29170 * C29040;
    const double C7197 = C7193 + C7183;
    const double C7194 = C7190 + C7174;
    const double C8897 = C8895 + C8889;
    const double C9561 = C9559 + C9553;
    const double C17272 = C17268 + C17258;
    const double C17269 = C17265 + C17252;
    const double C19739 = C19737 + C19731;
    const double C7196 = C7192 + C7180;
    const double C7195 = C7191 + C7177;
    const double C17271 = C17267 + C17256;
    const double C17270 = C17266 + C17254;
    const double C20269 = C20265 + C20255;
    const double C20266 = C20262 + C20246;
    const double C21883 = C21881 + C21875;
    const double C22547 = C22545 + C22539;
    const double C24123 = C24119 + C24109;
    const double C24120 = C24116 + C24103;
    const double C26503 = C26501 + C26495;
    const double C20268 = C20264 + C20252;
    const double C20267 = C20263 + C20249;
    const double C24122 = C24118 + C24107;
    const double C24121 = C24117 + C24105;
    const double C584 = C581 * C30075;
    const double C3588 = C581 * C3093;
    const double C10728 = C581 * C10233;
    const double C1592 = C1586 + C1587;
    const double C3183 = C3170 + C3171;
    const double C4835 = C4828 + C4829;
    const double C10323 = C10310 + C10311;
    const double C11877 = C11870 + C11871;
    const double C3877 = C3864 + C3865;
    const double C10983 = C10970 + C10971;
    const double C15057 = C15050 + C15051;
    const double C2192 = C2186 + C2187;
    const double C6843 = C6830 + C6831;
    const double C9121 = C9114 + C9115;
    const double C19915 = C19902 + C19903;
    const double C22107 = C22100 + C22101;
    const double C8132 = C8125 + C8126;
    const double C18943 = C18941 + C18942;
    const double C21145 = C21138 + C21139;
    const double C3785 = C1656 * C30139;
    const double C4905 = C1656 * C3091;
    const double C10909 = C1656 * C30139;
    const double C11947 = C1656 * C10231;
    const double C14995 = C1656 * C29981;
    const double C15213 = C15056 * C222;
    const double C18323 = C15056 * C6821;
    const double C25106 = C15056 * C19893;
    const double C7795 = C2128 * C30139;
    const double C9043 = C2128 * C3091;
    const double C20853 = C2128 * C30139;
    const double C22029 = C2128 * C10231;
    const double C28182 = C2128 * C29981;
    const double C18741 = C18739 * C10301;
    const double C25506 = C18739 * C3161;
    const double C28285 = C18739 * C155;
    const double C5053 = C30146 * C838;
    const double C12095 = C30146 * C838;
    const double C5916 = C30146 * C2983;
    const double C8814 = C30075 * C2983;
    const double C12949 = C30146 * C2983;
    const double C5058 = C5052 + C3934;
    const double C4001 = C3996 + C3997;
    const double C4836 = C4830 + C4831;
    const double C12100 = C12094 + C11038;
    const double C11878 = C11872 + C11873;
    const double C8606 = C8604 + C2825;
    const double C5704 = C5698 + C4464;
    const double C5492 = C5486 + C5487;
    const double C8393 = C8390 + C8391;
    const double C12740 = C12734 + C11516;
    const double C12534 = C12528 + C12529;
    const double C9551 = C30148 * C1461;
    const double C22537 = C30148 * C1461;
    const double C5777 = C30090 * C2877;
    const double C8676 = C30148 * C2877;
    const double C21665 = C30148 * C2877;
    const double C8194 = C8189 + C8190;
    const double C9556 = C9550 + C8248;
    const double C9122 = C9116 + C9117;
    const double C22542 = C22536 + C21248;
    const double C22108 = C22102 + C22103;
    const double C4186 = C4183 + C4174;
    const double C8014 = C8011 + C8002;
    const double C5992 = C5991 + C5988;
    const double C8896 = C8894 + C8887;
    const double C21882 = C21880 + C21873;
    const double C29219 = ae * C29218;
    const double C101 =
        (2 * C29198 + C29184 * C29218 + (C29187 + C29201 * C29188) * ae) /
        C29035;
    const double C634 = (C29254 * C29218) / C29035;
    const double C1075 = (C29279 * C29218) / C29035;
    const double C4751 = C30139 * C640;
    const double C11793 = C30139 * C640;
    const double C4827 = C30146 * C700;
    const double C11869 = C30146 * C700;
    const double C3867 = C30139 * C794;
    const double C10973 = C30139 * C794;
    const double C15055 = C29981 * C794;
    const double C5561 = C30090 * C2715;
    const double C8461 = C30148 * C2715;
    const double C21455 = C30148 * C2715;
    const double C6520 = C30139 * C2930;
    const double C13517 = C30139 * C2930;
    const double C18327 = C29981 * C2930;
    const double C5490 = C5482 + C5483;
    const double C6306 = C6300 + C6301;
    const double C8392 = C8388 + C8389;
    const double C12532 = C12524 + C12525;
    const double C13312 = C13306 + C13307;
    const double C18123 = C18119 + C18120;
    const double C8967 = C30139 * C1081;
    const double C21953 = C30139 * C1081;
    const double C9113 = C30148 * C1191;
    const double C22099 = C30148 * C1191;
    const double C8128 = C30139 * C1373;
    const double C21141 = C30139 * C1373;
    const double C28448 = C29981 * C1373;
    const double C6297 = C30139 * C2768;
    const double C13303 = C30139 * C2768;
    const double C18122 = C29981 * C2768;
    const double C15216 = C15058 * C222;
    const double C28293 = C28291 * C155;
    const double C29588 = ae * C29587;
    const double C3721 =
        (2 * C29412 + C29254 * C29587 + (C29187 + C29201 * C29318) * ae) /
        C29035;
    const double C6143 = (C29279 * C29587) / C29035;
    const double C19439 = C30146 * C6373;
    const double C26203 = C30146 * C6373;
    const double C29687 = ae * C29686;
    const double C7865 =
        (2 * C29504 + C29279 * C29686 + (C29187 + C29201 * C29367) * ae) /
        C29035;
    const double C19729 = C30148 * C4677;
    const double C26493 = C30148 * C4677;
    const double C16128 = C30090 * C6445;
    const double C17086 = C30148 * C6445;
    const double C23937 = C30148 * C6445;
    const double C19734 = C19728 + C10179;
    const double C17730 = C17725 + C17726;
    const double C17793 = C17787 + C17788;
    const double C19298 = C19292 + C19293;
    const double C26498 = C26492 + C23149;
    const double C24588 = C24582 + C24583;
    const double C26062 = C26056 + C26057;
    const double C28977 = C28975 + C28976;
    const double C10111 = C10109 + C10110;
    const double C17792 = C17785 + C17786;
    const double C19660 = C19656 + C19657;
    const double C24587 = C24580 + C24581;
    const double C26424 = C26420 + C26421;
    const double C9908 = C9907 + C2824;
    const double C24421 = C24417 + C4466;
    const double C26208 = C26206 + C6376;
    const double C28653 = C9700 * C13696;
    const double C17614 = C17610 + C11518;
    const double C19444 = C19442 + C13380;
    const double C17527 = C16020 * C30146;
    const double C19367 = C16020 * C10233;
    const double C24351 = C16020 * C30146;
    const double C26131 = C16020 * C3093;
    const double C28764 = C16020 * C30075;
    const double C24422 = C24418 + C4469;
    const double C28822 = C28821 + C9905;
    const double C17615 = C17611 + C11521;
    const double C17544 = C17538 * C30146;
    const double C24352 = C17538 * C30146;
    const double C28766 = C17538 * C30075;
    const double C28661 = C28659 * C13696;
    const double C8000 = C2306 * C30139;
    const double C9268 = C2306 * C3091;
    const double C21033 = C2306 * C30139;
    const double C22254 = C2306 * C10231;
    const double C28345 = C2306 * C29981;
    const double C8018 = C8015 * C3091;
    const double C21035 = C8015 * C10231;
    const double C27446 = C8015 * C29981;
    const double C6450 = C6448 + C6449;
    const double C17090 = C17083 + C17084;
    const double C19519 = C19516 + C19517;
    const double C23941 = C23934 + C23935;
    const double C26283 = C26280 + C26281;
    const double C585 = C582 * C30075;
    const double C3591 = C582 * C3093;
    const double C10731 = C582 * C10233;
    const double C586 = C583 * C30075;
    const double C2007 = C2005 * C30075;
    const double C3589 = C2005 * C30146;
    const double C5345 = C2005 * C3093;
    const double C10729 = C2005 * C30146;
    const double C12387 = C2005 * C10233;
    const double C2543 = C2541 * C30075;
    const double C5989 = C2541 * C3093;
    const double C13021 = C2541 * C10233;
    const double C29248 = ae * C29246;
    const double C29247 = C29184 * C29246;
    const double C29516 = C29254 * C29246;
    const double C29530 = C29279 * C29246;
    const double C639 = (C29218 + C29246 * C29318) / C29035;
    const double C1080 = (C29218 + C29246 * C29367) / C29035;
    const double C645 =
        (C29213 + C29239 * C29318 + C29388 + C29388 +
         C29184 * (2 * ae * (C29209 + C29233 * C29318) +
                   C29184 * (C29239 + (C29223 * C29224 +
                                       C29188 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29318))) /
        C29038;
    const double C3724 =
        (2 * (C29216 + C29254 * C29275) + C29388 +
         C29254 * (C29275 + C29519 +
                   C29254 * (C29243 + C29254 * (ae * C29272 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29258)))) /
        C29038;
    const double C3856 =
        (2 * (C29216 + C29254 * C29314) + C29388 +
         C29254 * (C29314 + C29519 +
                   C29254 * (C29243 + C29254 * (ae * C29272 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29306)))) /
        C29038;
    const double C6216 =
        (C29388 +
         C29279 * (C29300 + (ae * C29297 +
                             C29184 * std::pow(C29182, 6) * bs[6] * C29283) *
                                C29318)) /
        C29038;
    const double C6517 =
        (C29388 +
         C29279 * (C29352 + (ae * C29297 +
                             C29184 * std::pow(C29182, 6) * bs[6] * C29344) *
                                C29318)) /
        C29038;
    const double C3659 = C3098 * C3644;
    const double C10793 = C10238 * C3644;
    const double C14885 = C13696 * C3644;
    const double C6071 = C3098 * C6062;
    const double C13093 = C10238 * C6062;
    const double C15375 = C13696 * C6062;
    const double C1086 =
        (C29213 + C29239 * C29367 + C29456 + C29456 +
         C29184 * (2 * ae * (C29209 + C29233 * C29367) +
                   C29184 * (C29239 + (C29223 * C29224 +
                                       C29188 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29367))) /
        C29038;
    const double C4410 =
        (C29456 +
         C29254 * (C29314 + (ae * C29272 +
                             C29184 * std::pow(C29182, 6) * bs[6] * C29306) *
                                C29367)) /
        C29038;
    const double C7868 =
        (2 * (C29216 + C29279 * C29300) + C29456 +
         C29279 * (C29300 + C29533 +
                   C29279 * (C29243 + C29279 * (ae * C29297 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29283)))) /
        C29038;
    const double C8121 =
        (2 * (C29216 + C29279 * C29352) + C29456 +
         C29279 * (C29352 + C29533 +
                   C29279 * (C29243 + C29279 * (ae * C29297 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29344)))) /
        C29038;
    const double C7723 = C3098 * C7710;
    const double C20787 = C10238 * C7710;
    const double C28127 = C13696 * C7710;
    const double C2601 =
        (C29279 * C29515 + C29546 + C29546 +
         C29184 *
             (2 * ae * C29279 * C29254 * C29233 +
              C29184 * C29279 * C29254 *
                  (C29223 * C29224 + C29188 * bs[6] * std::pow(C29182, 6)) *
                  C29191)) /
        C29038;
    const double C4358 =
        (C29254 * C29300 + C29546 +
         C29279 * (C29519 + C29279 * C29254 *
                                (ae * C29297 + C29184 * std::pow(C29182, 6) *
                                                   bs[6] * C29283))) /
        C29038;
    const double C4574 =
        (C29254 * C29352 + C29546 +
         C29279 * (C29519 + C29279 * C29254 *
                                (ae * C29297 + C29184 * std::pow(C29182, 6) *
                                                   bs[6] * C29344))) /
        C29038;
    const double C6294 =
        (C29279 * C29314 + C29546 +
         C29254 * (C29533 + C29254 * C29279 *
                                (ae * C29272 + C29184 * std::pow(C29182, 6) *
                                                   bs[6] * C29306))) /
        C29038;
    const double C839 =
        (C29323 + C29328 * C29188 + C29421 + C29421 +
         C29254 * (2 * ae * C29276 +
                   C29254 * (C29328 + (C29223 * C29224 +
                                       C29318 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29188))) /
        C29038;
    const double C2984 =
        (C29421 + C29279 * (ae * C29301 +
                            C29254 * (C29363 + std::pow(C29182, 6) * bs[6] *
                                                   C29357 * C29188))) /
        C29038;
    const double C846 = C155 * C695;
    const double C5057 = C3162 * C695;
    const double C12099 = C10302 * C695;
    const double C13873 = C13746 * C695;
    const double C2826 = C155 * C2657;
    const double C5703 = C3162 * C2657;
    const double C12739 = C10302 * C2657;
    const double C29599 = C29598 + C29594;
    const double C6374 =
        (C29279 * C29590 + C29653 + C29653 +
         C29254 *
             (2 * ae * C29279 * C29591 +
              C29254 * C29279 * C29184 *
                  (C29223 * C29224 + C29318 * bs[6] * std::pow(C29182, 6)) *
                  C29191)) /
        C29038;
    const double C29725 = ae * C29723;
    const double C29724 = C29254 * C29723;
    const double C29761 = C29279 * C29723;
    const double C14547 = (C29587 + C29723 * C29367) / C29035;
    const double C14666 =
        (C29323 + C29328 * C29367 + C29746 + C29746 +
         C29254 * (2 * ae * (C29265 + C29272 * C29367) +
                   C29254 * (C29328 + (C29223 * C29224 +
                                       C29318 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29367))) /
        C29038;
    const double C17781 =
        (2 * (C29585 + C29279 * C29737) + C29746 +
         C29279 * (C29737 + C29764 +
                   C29279 * (C29721 + C29279 * (ae * C29297 +
                                                C29254 * std::pow(C29182, 6) *
                                                    bs[6] * C29357)))) /
        C29038;
    const double C17608 = C10302 * C17392;
    const double C24415 = C3162 * C17392;
    const double C28820 = C155 * C17392;
    const double C7812 = C7806 * C30139;
    const double C20854 = C7806 * C30139;
    const double C28184 = C7806 * C29981;
    const double C1462 =
        (C29372 + C29377 * C29188 + C29513 + C29513 +
         C29279 * (2 * ae * C29301 +
                   C29279 * (C29377 + (C29223 * C29224 +
                                       C29367 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29188))) /
        C29038;
    const double C2878 =
        (C29513 + C29254 * (ae * C29276 +
                            C29279 * (C29339 + std::pow(C29182, 6) * bs[6] *
                                                   C29333 * C29188))) /
        C29038;
    const double C1469 = C222 * C1186;
    const double C9555 = C6822 * C1186;
    const double C22541 = C19894 * C1186;
    const double C26864 = C26623 * C1186;
    const double C4678 =
        (C29254 * C29612 + C29639 + C29639 +
         C29279 *
             (2 * ae * C29636 +
              C29279 * C29254 * C29184 *
                  (C29223 * C29224 + C29367 * bs[6] * std::pow(C29182, 6)) *
                  C29191)) /
        C29038;
    const double C6446 =
        (ae * C29267 + C29279 * C29603 + C29639 +
         C29254 *
             (ae * (C29279 * C29604 + C29234) +
              C29254 * (ae * C29591 + C29279 * C29184 * std::pow(C29182, 6) *
                                          bs[6] * C29333))) /
        C29038;
    const double C4681 = C222 * C4356;
    const double C10181 = C6822 * C4356;
    const double C23151 = C19894 * C4356;
    const double C28074 = C26623 * C4356;
    const double C29696 = C29695 + C29692;
    const double C14828 =
        (C29372 + C29377 * C29318 + C29753 + C29753 +
         C29279 * (2 * ae * C29733 +
                   C29279 * (C29377 + (C29223 * C29224 +
                                       C29367 * bs[6] * std::pow(C29182, 6)) *
                                          C29191 * C29318))) /
        C29038;
    const double C16125 =
        (2 * (C29684 + C29254 * C29767) + C29753 +
         C29254 *
             (C29767 + ae * (C29279 * C29254 * C29297 + C29717) +
              C29254 * (ae * (C29279 * C29297 + C29229) +
                        C29254 * (ae * C29272 + C29279 * std::pow(C29182, 6) *
                                                    bs[6] * C29333)))) /
        C29038;
    const double C14830 = C222 * C14587;
    const double C19733 = C6822 * C14587;
    const double C26497 = C19894 * C14587;
    const double C27213 = C26623 * C14587;
    const double C29792 = C29791 + C29787;
    const double C29831 = ae * C29829;
    const double C29830 = C29279 * C29829;
    const double C3802 = C3796 * C30139;
    const double C10910 = C3796 * C30139;
    const double C14997 = C3796 * C29981;
    const double C28294 = C28292 * C30075;
    const double C9269 = C2305 * C30139;
    const double C22255 = C2305 * C30139;
    const double C27453 = C27452 * C29981;
    const double C15222 = C15220 * C30090;
    const double C2006 = C2004 * C30075;
    const double C3590 = C2004 * C30146;
    const double C10730 = C2004 * C30146;
    const double C2542 = C2540 * C30075;
    const double C29055 = C29036 * C29047;
    const double C87 =
        (ae * -2 * C29034) / (C29038 * 2 * C29035) -
        (((C29036 * ((-4 * C29041) / C29035 - (C29036 * C29047) / C29035) *
           ae) /
              C29035 +
          2 * ((C29046 * ae) / C29035 - C29034 / C29042)) *
         be) /
            C29035 -
        C29047 / C29042;
    const double C91 = (-C29047 / C29035) / (4 * C29038);
    const double C3097 = (-C29047 / C29035) / (2 * C29035);
    const double C10237 = (-C29047 / C29035) / (2 * C29035);
    const double C13695 = -C29047 / C29035;
    const double C115 = C88 * C100;
    const double C114 = C88 * C99;
    const double C109 = C88 * C98;
    const double C650 = C88 * C637;
    const double C649 = C88 * C636;
    const double C1091 = C88 * C1078;
    const double C1090 = C88 * C1077;
    const double C1527 = C88 * C635;
    const double C2063 = C88 * C1076;
    const double C2603 = C88 * C2596;
    const double C113 = C90 * C100;
    const double C110 = C90 * C99;
    const double C651 = C90 * C638;
    const double C648 = C90 * C635;
    const double C1092 = C90 * C1079;
    const double C1089 = C90 * C1076;
    const double C2604 = C90 * C2597;
    const double C3108 = C3096 * C100;
    const double C3107 = C3096 * C99;
    const double C3105 = C3096 * C635;
    const double C3102 = C3096 * C636;
    const double C3100 = C3096 * C98;
    const double C3658 = C3096 * C3643;
    const double C3656 = C3096 * C637;
    const double C3805 = C3799 * C3096;
    const double C3800 = C3794 * C3096;
    const double C3872 = C3096 * C631;
    const double C3868 = C3096 * C693;
    const double C3862 = C3096 * C692;
    const double C3858 = C3096 * C630;
    const double C4061 = C3096 * C743;
    const double C4055 = C3096 * C742;
    const double C4250 = C3096 * C4239;
    const double C4248 = C3096 * C1078;
    const double C4247 = C3096 * C1077;
    const double C4245 = C3096 * C2596;
    const double C4752 = C3096 * C638;
    const double C4904 = C1657 * C3096;
    const double C4978 = C3096 * C691;
    const double C4974 = C3096 * C629;
    const double C5200 = C3096 * C741;
    const double C5414 = C3096 * C2597;
    const double C5412 = C3096 * C1076;
    const double C6070 = C3096 * C6061;
    const double C6227 = C6225 * C3096;
    const double C6302 = C3096 * C2593;
    const double C6298 = C3096 * C2655;
    const double C6521 = C3096 * C2711;
    const double C7722 = C3096 * C7709;
    const double C7815 = C7809 * C3096;
    const double C7810 = C7804 * C3096;
    const double C7936 = C3096 * C1072;
    const double C7932 = C3096 * C1134;
    const double C7926 = C3096 * C1133;
    const double C7922 = C3096 * C1071;
    const double C8129 = C3096 * C1184;
    const double C8123 = C3096 * C1183;
    const double C8968 = C3096 * C1079;
    const double C9042 = C2129 * C3096;
    const double C9194 = C3096 * C1132;
    const double C9190 = C3096 * C1070;
    const double C9408 = C3096 * C1182;
    const double C9702 = C9700 * C3096;
    const double C10248 = C10236 * C100;
    const double C10247 = C10236 * C99;
    const double C10245 = C10236 * C635;
    const double C10242 = C10236 * C636;
    const double C10240 = C10236 * C98;
    const double C10792 = C10236 * C3643;
    const double C10790 = C10236 * C637;
    const double C10913 = C3799 * C10236;
    const double C10906 = C3794 * C10236;
    const double C10978 = C10236 * C631;
    const double C10974 = C10236 * C693;
    const double C10968 = C10236 * C692;
    const double C10964 = C10236 * C630;
    const double C11152 = C10236 * C743;
    const double C11146 = C10236 * C742;
    const double C11314 = C10236 * C4239;
    const double C11312 = C10236 * C1078;
    const double C11311 = C10236 * C1077;
    const double C11309 = C10236 * C2596;
    const double C11794 = C10236 * C638;
    const double C11946 = C1657 * C10236;
    const double C12020 = C10236 * C691;
    const double C12016 = C10236 * C629;
    const double C12242 = C10236 * C741;
    const double C12456 = C10236 * C2597;
    const double C12454 = C10236 * C1076;
    const double C13092 = C10236 * C6061;
    const double C13235 = C6225 * C10236;
    const double C13308 = C10236 * C2593;
    const double C13304 = C10236 * C2655;
    const double C13518 = C10236 * C2711;
    const double C20786 = C10236 * C7709;
    const double C20857 = C7809 * C10236;
    const double C20850 = C7804 * C10236;
    const double C20972 = C10236 * C1072;
    const double C20968 = C10236 * C1134;
    const double C20962 = C10236 * C1133;
    const double C20958 = C10236 * C1071;
    const double C21142 = C10236 * C1184;
    const double C21136 = C10236 * C1183;
    const double C21954 = C10236 * C1079;
    const double C22028 = C2129 * C10236;
    const double C22180 = C10236 * C1132;
    const double C22176 = C10236 * C1070;
    const double C22394 = C10236 * C1182;
    const double C22680 = C9700 * C10236;
    const double C14378 = C14366 + C14376;
    const double C27401 = C27395 + C27396;
    const double C29144 = C29069 * C29141;
    const double C13861 =
        (ae * -2 * C29129) / (C29038 * 2 * C29035) -
        (((C29069 * ((-4 * C29090) / C29035 - (C29069 * C29141) / C29035) *
           ae) /
              C29035 +
          2 * ((C29140 * ae) / C29035 - C29129 / C29042)) *
         be) /
            C29035 -
        C29141 / C29042;
    const double C13863 = (-C29141 / C29035) / (4 * C29038);
    const double C29174 = C29072 * C29171;
    const double C26852 =
        (ae * -2 * C29159) / (C29038 * 2 * C29035) -
        (((C29072 * ((-4 * C29102) / C29035 - (C29072 * C29171) / C29035) *
           ae) /
              C29035 +
          2 * ((C29170 * ae) / C29035 - C29159 / C29042)) *
         be) /
            C29035 -
        C29171 / C29042;
    const double C26854 = (-C29171 / C29035) / (4 * C29038);
    const double C5919 = C5915 + C5916;
    const double C8818 = C8813 + C8814;
    const double C12952 = C12948 + C12949;
    const double C5060 = C5058 + C3934;
    const double C5130 = C4001 * C30146;
    const double C12172 = C4001 * C30146;
    const double C12102 = C12100 + C11038;
    const double C8607 = C8606 + C2825;
    const double C5706 = C5704 + C4464;
    const double C8815 = C8393 * C6822;
    const double C9698 = C8393 * C3098;
    const double C21803 = C8393 * C19894;
    const double C22682 = C8393 * C10238;
    const double C12742 = C12740 + C11516;
    const double C5781 = C5776 + C5777;
    const double C8679 = C8675 + C8676;
    const double C21668 = C21664 + C21665;
    const double C9480 = C8194 * C30148;
    const double C22466 = C8194 * C30148;
    const double C9558 = C9556 + C8248;
    const double C22544 = C22542 + C21248;
    const double C5344 = C4186 * C30146;
    const double C12386 = C4186 * C30146;
    const double C8017 = C8014 * C30139;
    const double C21034 = C8014 * C30139;
    const double C28346 = C8014 * C29981;
    const double C5993 = C5992 * C30146;
    const double C13020 = C5992 * C30146;
    const double C106 =
        (2 * (2 * ae * C29196 + C29184 * C29213) + C29219 + C29219 +
         C29184 * (C29213 + C29216 + C29216 +
                   C29184 * (2 * ae * C29209 +
                             C29184 *
                                 (C29202 * C29203 +
                                  C29188 * bs[5] * std::pow(C29190, 5)) *
                                 C29191))) /
        C29038;
    const double C696 =
        (C29219 + C29254 * (C29264 + ae * C29267 + C29184 * C29275)) / C29038;
    const double C790 =
        (C29219 + C29254 * (C29309 + ae * C29267 + C29184 * C29314)) / C29038;
    const double C1187 =
        (C29219 + C29279 * (C29289 + ae * C29292 + C29184 * C29300)) / C29038;
    const double C1369 =
        (C29219 + C29279 * (C29347 + ae * C29292 + C29184 * C29352)) / C29038;
    const double C116 = C90 * C101;
    const double C112 = C92 * C101;
    const double C175 = C155 * C101;
    const double C242 = C222 * C101;
    const double C3109 = C3098 * C101;
    const double C10249 = C10238 * C101;
    const double C647 = C92 * C634;
    const double C1528 = C90 * C634;
    const double C1582 = C155 * C634;
    const double C1646 = C222 * C634;
    const double C3110 = C3096 * C634;
    const double C3104 = C3098 * C634;
    const double C3172 = C3162 * C634;
    const double C4977 = C30139 * C634;
    const double C10250 = C10236 * C634;
    const double C10244 = C10238 * C634;
    const double C10312 = C10302 * C634;
    const double C12019 = C30139 * C634;
    const double C13705 = C13696 * C634;
    const double C1088 = C92 * C1075;
    const double C2064 = C90 * C1075;
    const double C2118 = C155 * C1075;
    const double C2182 = C222 * C1075;
    const double C5413 = C3098 * C1075;
    const double C6720 = C3096 * C1075;
    const double C6832 = C6822 * C1075;
    const double C9193 = C30139 * C1075;
    const double C12455 = C10238 * C1075;
    const double C16349 = C13696 * C1075;
    const double C19792 = C10236 * C1075;
    const double C19904 = C19894 * C1075;
    const double C22179 = C30139 * C1075;
    const double C4834 = C4826 + C4827;
    const double C11876 = C11868 + C11869;
    const double C3878 = C3866 + C3867;
    const double C10984 = C10972 + C10973;
    const double C15059 = C15054 + C15055;
    const double C5564 = C5560 + C5561;
    const double C8468 = C8460 + C8461;
    const double C21462 = C21454 + C21455;
    const double C6523 = C6519 + C6520;
    const double C13520 = C13516 + C13517;
    const double C18328 = C18326 + C18327;
    const double C9699 = C8392 * C30139;
    const double C22683 = C8392 * C30139;
    const double C18325 = C18123 * C6822;
    const double C18737 = C18123 * C10302;
    const double C25108 = C18123 * C19894;
    const double C25508 = C18123 * C3162;
    const double C9120 = C9112 + C9113;
    const double C22106 = C22098 + C22099;
    const double C8133 = C8127 + C8128;
    const double C21146 = C21140 + C21141;
    const double C28449 = C28447 + C28448;
    const double C6304 = C6296 + C6297;
    const double C13310 = C13302 + C13303;
    const double C18124 = C18121 + C18122;
    const double C3931 =
        (2 * (2 * ae * C29260 + C29254 * C29323) + C29588 + C29588 +
         C29254 * (C29323 + C29585 + C29585 +
                   C29254 * (2 * C29268 + C29254 * C29328))) /
        C29038;
    const double C6590 =
        (C29588 + C29279 * (C29360 + ae * C29631 +
                            C29254 * (C29293 + C29254 * C29363))) /
        C29038;
    const double C3939 = C3162 * C3721;
    const double C11043 = C10302 * C3721;
    const double C14227 = C13696 * C3721;
    const double C14280 = C13745 * C3721;
    const double C14276 = C13746 * C3721;
    const double C14321 = C222 * C3721;
    const double C6377 = C3162 * C6143;
    const double C7448 = C155 * C6143;
    const double C13381 = C10302 * C6143;
    const double C14668 = C13746 * C6143;
    const double C16010 = C13696 * C6143;
    const double C16074 = C13745 * C6143;
    const double C16127 = C222 * C6143;
    const double C17029 = C10301 * C6143;
    const double C17085 = C6822 * C6143;
    const double C19213 = C30146 * C6143;
    const double C23880 = C3161 * C6143;
    const double C23936 = C19894 * C6143;
    const double C25977 = C30146 * C6143;
    const double C8245 =
        (2 * (2 * ae * C29285 + C29279 * C29372) + C29687 + C29687 +
         C29279 * (C29372 + C29684 + C29684 +
                   C29279 * (2 * C29293 + C29279 * C29377))) /
        C29038;
    const double C8253 = C6822 * C7865;
    const double C21253 = C19894 * C7865;
    const double C27532 = C13696 * C7865;
    const double C27574 = C155 * C7865;
    const double C27620 = C26622 * C7865;
    const double C27616 = C26623 * C7865;
    const double C19736 = C19734 + C10179;
    const double C19586 = C17730 * C30148;
    const double C26350 = C17730 * C30148;
    const double C26500 = C26498 + C23149;
    const double C9909 = C9908 + C9903;
    const double C24425 = C24421 + C24409;
    const double C26210 = C26208 + C26201;
    const double C17618 = C17614 + C17602;
    const double C19446 = C19444 + C19437;
    const double C24426 = C24422 + C24411;
    const double C28823 = C28822 + C28819;
    const double C17619 = C17615 + C17604;
    const double C701 =
        (C29264 + ae * C29267 + C29184 * C29275 + ae * C29254 * C29246 +
         C29254 * (C29248 + C29254 * (C29271 + ae * C29184 * C29272 +
                                      C29184 * (ae * C29272 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29258)))) /
        C29038;
    const double C795 =
        (C29309 + ae * C29267 + C29184 * C29314 + ae * C29254 * C29246 +
         C29254 * (C29248 + C29254 * (C29312 + ae * C29184 * C29272 +
                                      C29184 * (ae * C29272 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29306)))) /
        C29038;
    const double C1192 =
        (C29289 + ae * C29292 + C29184 * C29300 + ae * C29279 * C29246 +
         C29279 * (C29248 + C29279 * (C29296 + ae * C29184 * C29297 +
                                      C29184 * (ae * C29297 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29283)))) /
        C29038;
    const double C1374 =
        (C29347 + ae * C29292 + C29184 * C29352 + ae * C29279 * C29246 +
         C29279 * (C29248 + C29279 * (C29350 + ae * C29184 * C29297 +
                                      C29184 * (ae * C29297 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29344)))) /
        C29038;
    const double C2660 =
        (C29279 * (C29248 + C29254 * (C29271 + ae * C29184 * C29272 +
                                      C29184 * (ae * C29272 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29258)))) /
        C29038;
    const double C29249 = C29225 + C29247;
    const double C29518 = ae * C29516;
    const double C2598 = (C29279 * C29516) / C29035;
    const double C29532 = ae * C29530;
    const double C652 = C92 * C639;
    const double C4753 = C3098 * C639;
    const double C11795 = C10238 * C639;
    const double C13706 = C13696 * C639;
    const double C1093 = C92 * C1080;
    const double C8969 = C3098 * C1080;
    const double C21955 = C10238 * C1080;
    const double C26545 = C13696 * C1080;
    const double C29600 = ae * C29599;
    const double C3722 =
        (2 * C29416 + C29254 * C29599 + (C29207 + C29230 * C29318) * ae) /
        C29035;
    const double C6144 = (C29279 * C29599) / C29035;
    const double C14789 =
        (C29360 + ae * C29631 + C29254 * C29737 + ae * C29279 * C29723 +
         C29279 * (C29725 + C29279 * (C29363 + ae * C29254 * C29297 +
                                      C29254 * (ae * C29297 +
                                                C29254 * std::pow(C29182, 6) *
                                                    bs[6] * C29357)))) /
        C29038;
    const double C29726 = C29711 + C29724;
    const double C29763 = ae * C29761;
    const double C14673 = C13746 * C14547;
    const double C19441 = C10302 * C14547;
    const double C26205 = C3162 * C14547;
    const double C27055 = C155 * C14547;
    const double C29697 = ae * C29696;
    const double C7866 =
        (2 * C29508 + C29279 * C29696 + (C29207 + C29230 * C29367) * ae) /
        C29035;
    const double C29793 = ae * C29792;
    const double C17468 =
        (2 * C29633 + C29279 * C29792 + (C29581 + C29713 * C29367) * ae) /
        C29035;
    const double C29832 = C29817 + C29830;
    const double C89 =
        (((-4 * C29041) / C29035 - C29055 / C29035) * ae) / C29042 -
        ((2 * ((0 * ae) / C29035 - C29041 / C29038) - C29055 / C29042) * be) /
            C29035;
    const double C3095 =
        -(((-4 * C29041) / C29035 - C29055 / C29035) * be) / C29035;
    const double C10235 =
        (((-4 * C29041) / C29035 - C29055 / C29035) * ae) / C29035;
    const double C3652 = C3097 * C632;
    const double C3650 = C3097 * C629;
    const double C4750 = C3097 * C628;
    const double C6066 = C3097 * C2594;
    const double C7718 = C3097 * C1073;
    const double C7716 = C3097 * C1070;
    const double C8966 = C3097 * C1069;
    const double C10786 = C10237 * C632;
    const double C10784 = C10237 * C629;
    const double C11792 = C10237 * C628;
    const double C13088 = C10237 * C2594;
    const double C20782 = C10237 * C1073;
    const double C20780 = C10237 * C1070;
    const double C21952 = C10237 * C1069;
    const double C14071 = C13695 * C3641;
    const double C14069 = C13695 * C631;
    const double C14067 = C13695 * C630;
    const double C14883 = C13695 * C632;
    const double C14881 = C13695 * C629;
    const double C15834 = C13695 * C2593;
    const double C15832 = C13695 * C6059;
    const double C17330 = C13695 * C1072;
    const double C17328 = C13695 * C4237;
    const double C17326 = C13695 * C1071;
    const double C17915 = C13695 * C2594;
    const double C18528 = C13695 * C1070;
    const double C27255 = C13695 * C7707;
    const double C28125 = C13695 * C1073;
    const double C3881 = C3872 + C3873;
    const double C3879 = C3868 + C3869;
    const double C3876 = C3862 + C3863;
    const double C3874 = C3858 + C3859;
    const double C4066 = C4061 + C4062;
    const double C4063 = C4055 + C4056;
    const double C4984 = C4978 + C4979;
    const double C4982 = C4974 + C4975;
    const double C5204 = C5200 + C5201;
    const double C6307 = C6302 + C6303;
    const double C6305 = C6298 + C6299;
    const double C6524 = C6521 + C6522;
    const double C7945 = C7936 + C7937;
    const double C7943 = C7932 + C7933;
    const double C7940 = C7926 + C7927;
    const double C7938 = C7922 + C7923;
    const double C8134 = C8129 + C8130;
    const double C8131 = C8123 + C8124;
    const double C9200 = C9194 + C9195;
    const double C9198 = C9190 + C9191;
    const double C9412 = C9408 + C9409;
    const double C10987 = C10978 + C10979;
    const double C10985 = C10974 + C10975;
    const double C10982 = C10968 + C10969;
    const double C10980 = C10964 + C10965;
    const double C11157 = C11152 + C11153;
    const double C11154 = C11146 + C11147;
    const double C12026 = C12020 + C12021;
    const double C12024 = C12016 + C12017;
    const double C12246 = C12242 + C12243;
    const double C13313 = C13308 + C13309;
    const double C13311 = C13304 + C13305;
    const double C13521 = C13518 + C13519;
    const double C20981 = C20972 + C20973;
    const double C20979 = C20968 + C20969;
    const double C20976 = C20962 + C20963;
    const double C20974 = C20958 + C20959;
    const double C21147 = C21142 + C21143;
    const double C21144 = C21136 + C21137;
    const double C22186 = C22180 + C22181;
    const double C22184 = C22176 + C22177;
    const double C22398 = C22394 + C22395;
    const double C13862 =
        (((-4 * C29090) / C29035 - C29144 / C29035) * ae) / C29042 -
        ((2 * ((0 * ae) / C29035 - C29090 / C29038) - C29144 / C29042) * be) /
            C29035;
    const double C26853 =
        (((-4 * C29102) / C29035 - C29174 / C29035) * ae) / C29042 -
        ((2 * ((0 * ae) / C29035 - C29102 / C29038) - C29174 / C29042) * be) /
            C29035;
    const double C8819 = C8818 * C30148;
    const double C21802 = C8818 * C30148;
    const double C5062 = C5060 + C5053;
    const double C12104 = C12102 + C12095;
    const double C8608 = C8607 + C8605;
    const double C5708 = C5706 + C5699;
    const double C12744 = C12742 + C12735;
    const double C5782 = C5781 * C30146;
    const double C12812 = C5781 * C30146;
    const double C9560 = C9558 + C9551;
    const double C22546 = C22544 + C22537;
    const double C1583 = C30075 * C696;
    const double C3173 = C30146 * C696;
    const double C10313 = C30146 * C696;
    const double C4981 = C30139 * C790;
    const double C12023 = C30139 * C790;
    const double C2183 = C30090 * C1187;
    const double C6833 = C30148 * C1187;
    const double C19905 = C30148 * C1187;
    const double C9411 = C30139 * C1369;
    const double C22397 = C30139 * C1369;
    const double C183 = C175 + C176;
    const double C250 = C242 + C243;
    const double C1654 = C1646 + C1647;
    const double C4983 = C4976 + C4977;
    const double C12025 = C12018 + C12019;
    const double C2126 = C2118 + C2119;
    const double C9199 = C9192 + C9193;
    const double C22185 = C22178 + C22179;
    const double C6218 = C5564 * C30139;
    const double C13232 = C5564 * C30139;
    const double C18329 = C18328 * C30148;
    const double C25109 = C18328 * C30148;
    const double C18738 = C18124 * C30146;
    const double C25509 = C18124 * C30146;
    const double C19659 = C30146 * C6590;
    const double C26423 = C30146 * C6590;
    const double C14235 = C14227 + C14228;
    const double C14323 = C14321 + C14322;
    const double C26207 = C26202 + C6377;
    const double C19443 = C19438 + C13381;
    const double C16018 = C16010 + C16011;
    const double C16129 = C16127 + C16128;
    const double C17091 = C17085 + C17086;
    const double C19219 = C19212 + C19213;
    const double C23942 = C23936 + C23937;
    const double C25983 = C25976 + C25977;
    const double C27534 = C27532 + C27533;
    const double C27576 = C27574 + C27575;
    const double C19738 = C19736 + C19729;
    const double C26502 = C26500 + C26493;
    const double C9910 = C9909 * C3091;
    const double C22882 = C9909 * C10231;
    const double C28817 = C9909 * C29981;
    const double C28824 = C28823 * C29981;
    const double C29250 = C29249 + C29238;
    const double C1525 =
        (2 * (2 * ae * C29254 * C29209 + C29184 * C29515) + C29518 + C29518 +
         C29184 * (C29515 + C29519 + C29519 +
                   C29184 * (2 * ae * C29254 * C29233 +
                             C29184 * C29254 *
                                 (C29223 * C29224 +
                                  C29188 * bs[6] * std::pow(C29182, 6)) *
                                 C29191))) /
        C29038;
    const double C2716 =
        (C29518 + C29279 * C29254 *
                      (C29296 + ae * C29184 * C29297 +
                       C29184 * (ae * C29297 + C29184 * std::pow(C29182, 6) *
                                                   bs[6] * C29283))) /
        C29038;
    const double C2931 =
        (C29518 + C29279 * C29254 *
                      (C29350 + ae * C29184 * C29297 +
                       C29184 * (ae * C29297 + C29184 * std::pow(C29182, 6) *
                                                   bs[6] * C29344))) /
        C29038;
    const double C2605 = C92 * C2598;
    const double C5415 = C3098 * C2598;
    const double C12457 = C10238 * C2598;
    const double C16350 = C13696 * C2598;
    const double C2061 =
        (2 * (2 * ae * C29279 * C29209 + C29184 * C29529) + C29532 + C29532 +
         C29184 * (C29529 + C29533 + C29533 +
                   C29184 * (2 * ae * C29279 * C29233 +
                             C29184 * C29279 *
                                 (C29223 * C29224 +
                                  C29188 * bs[6] * std::pow(C29182, 6)) *
                                 C29191))) /
        C29038;
    const double C2769 =
        (C29532 + C29254 * C29279 *
                      (C29312 + ae * C29184 * C29272 +
                       C29184 * (ae * C29272 + C29184 * std::pow(C29182, 6) *
                                                   bs[6] * C29306))) /
        C29038;
    const double C3932 =
        (2 * (2 * ae * C29267 + C29254 * C29590) + C29600 + C29600 +
         C29254 * (C29590 + C29597 + C29597 +
                   C29254 * (2 * ae * C29591 +
                             C29254 * C29184 *
                                 (C29223 * C29224 +
                                  C29318 * bs[6] * std::pow(C29182, 6)) *
                                 C29191))) /
        C29038;
    const double C6591 =
        (C29600 + C29279 * (C29609 + ae * C29636 +
                            C29254 * (ae * C29604 + C29254 * C29184 *
                                                        std::pow(C29182, 6) *
                                                        bs[6] * C29357))) /
        C29038;
    const double C3941 = C3162 * C3722;
    const double C11045 = C10302 * C3722;
    const double C15112 = C13746 * C3722;
    const double C6379 = C3162 * C6144;
    const double C7449 = C155 * C6144;
    const double C13383 = C10302 * C6144;
    const double C15578 = C13746 * C6144;
    const double C29727 = C29726 + C29720;
    const double C16071 =
        (2 * (2 * ae * C29279 * C29265 + C29254 * C29760) + C29763 + C29763 +
         C29254 * (C29760 + C29764 + C29764 +
                   C29254 * (2 * ae * C29279 * C29272 +
                             C29254 * C29279 *
                                 (C29223 * C29224 +
                                  C29318 * bs[6] * std::pow(C29182, 6)) *
                                 C29191))) /
        C29038;
    const double C8246 =
        (2 * (2 * ae * C29292 + C29279 * C29612) + C29697 + C29697 +
         C29279 * (C29612 + C29694 + C29694 +
                   C29279 * (2 * ae * C29604 +
                             C29279 * C29184 *
                                 (C29223 * C29224 +
                                  C29367 * bs[6] * std::pow(C29182, 6)) *
                                 C29191))) /
        C29038;
    const double C8255 = C6822 * C7866;
    const double C21255 = C19894 * C7866;
    const double C28552 = C26623 * C7866;
    const double C17844 =
        (2 * (2 * ae * C29631 + C29279 * C29783) + C29793 + C29793 +
         C29279 * (C29783 + C29790 + C29790 +
                   C29279 * (2 * ae * C29784 +
                             C29279 * C29254 *
                                 (C29223 * C29224 +
                                  C29367 * bs[6] * std::pow(C29182, 6)) *
                                 C29191))) /
        C29038;
    const double C17847 = C6822 * C17468;
    const double C24641 = C19894 * C17468;
    const double C29030 = C26623 * C17468;
    const double C29833 = C29832 + C29826;
    const double C3655 = C3095 * C631;
    const double C3648 = C3095 * C630;
    const double C4748 = C3095 * C629;
    const double C6068 = C3095 * C2593;
    const double C7720 = C3095 * C1072;
    const double C7714 = C3095 * C1071;
    const double C8964 = C3095 * C1070;
    const double C10789 = C10235 * C631;
    const double C10782 = C10235 * C630;
    const double C11790 = C10235 * C629;
    const double C13090 = C10235 * C2593;
    const double C20784 = C10235 * C1072;
    const double C20778 = C10235 * C1071;
    const double C21950 = C10235 * C1070;
    const double C3662 = C3652 + C3653;
    const double C3661 = C3650 + C3103;
    const double C4755 = C4750 + C3104;
    const double C6072 = C6066 + C4244;
    const double C7726 = C7718 + C4249;
    const double C7725 = C7716 + C4246;
    const double C8971 = C8966 + C5413;
    const double C10796 = C10786 + C10787;
    const double C10795 = C10784 + C10243;
    const double C11797 = C11792 + C10244;
    const double C13094 = C13088 + C11308;
    const double C20790 = C20782 + C11313;
    const double C20789 = C20780 + C11310;
    const double C21957 = C21952 + C12455;
    const double C14077 = C14071 + C14072;
    const double C14076 = C14069 + C13700;
    const double C14075 = C14067 + C13699;
    const double C14887 = C14883 + C13701;
    const double C14886 = C14881 + C13702;
    const double C15838 = C15834 + C14505;
    const double C15837 = C15832 + C14504;
    const double C17336 = C17330 + C14507;
    const double C17335 = C17328 + C14508;
    const double C17334 = C17326 + C14506;
    const double C17917 = C17915 + C15374;
    const double C18532 = C18528 + C15373;
    const double C27258 = C27255 + C17332;
    const double C28128 = C28125 + C18530;
    const double C9904 = C8608 * C30139;
    const double C22883 = C8608 * C30139;
    const double C1590 = C1582 + C1583;
    const double C3184 = C3172 + C3173;
    const double C10324 = C10312 + C10313;
    const double C4985 = C4980 + C4981;
    const double C12027 = C12022 + C12023;
    const double C2190 = C2182 + C2183;
    const double C6844 = C6832 + C6833;
    const double C19916 = C19904 + C19905;
    const double C9413 = C9410 + C9411;
    const double C22399 = C22396 + C22397;
    const double C4907 = C1654 * C30139;
    const double C11949 = C1654 * C30139;
    const double C9045 = C2126 * C30139;
    const double C22031 = C2126 * C30139;
    const double C19661 = C19658 + C19659;
    const double C26425 = C26422 + C26423;
    const double C26209 = C26207 + C6377;
    const double C19445 = C19443 + C13381;
    const double C19369 = C16018 * C30146;
    const double C26133 = C16018 * C30146;
    const double C29251 = ae * C29250;
    const double C102 =
        (3 * C29218 + C29184 * C29250 + (2 * C29207 + C29184 * C29235) * ae) /
        C29035;
    const double C1524 = (C29254 * C29250) / C29035;
    const double C2060 = (C29279 * C29250) / C29035;
    const double C29728 = ae * C29727;
    const double C14124 =
        (3 * C29587 + C29254 * C29727 + (2 * C29581 + C29254 * C29718) * ae) /
        C29035;
    const double C15894 = (C29279 * C29727) / C29035;
    const double C29834 = ae * C29833;
    const double C27351 =
        (3 * C29686 + C29279 * C29833 + (2 * C29680 + C29279 * C29824) * ae) /
        C29035;
    const double C3663 = C3655 + C3656;
    const double C3660 = C3648 + C3102;
    const double C4754 = C4748 + C3105;
    const double C6073 = C6068 + C4245;
    const double C7727 = C7720 + C4248;
    const double C7724 = C7714 + C4247;
    const double C8970 = C8964 + C5412;
    const double C10797 = C10789 + C10790;
    const double C10794 = C10782 + C10242;
    const double C11796 = C11790 + C10245;
    const double C13095 = C13090 + C11309;
    const double C20791 = C20784 + C11312;
    const double C20788 = C20778 + C11311;
    const double C21956 = C21950 + C12454;
    const double C3666 = C3662 + C3653;
    const double C3665 = C3661 + C3103;
    const double C4757 = C4755 + C3104;
    const double C6074 = C6072 + C4244;
    const double C7730 = C7726 + C4249;
    const double C7729 = C7725 + C4246;
    const double C8973 = C8971 + C5413;
    const double C10800 = C10796 + C10787;
    const double C10799 = C10795 + C10243;
    const double C11799 = C11797 + C10244;
    const double C13096 = C13094 + C11308;
    const double C20794 = C20790 + C11313;
    const double C20793 = C20789 + C11310;
    const double C21959 = C21957 + C12455;
    const double C14080 = C14077 + C14072;
    const double C14079 = C14076 + C13700;
    const double C14078 = C14075 + C13699;
    const double C14889 = C14887 + C13701;
    const double C14888 = C14886 + C13702;
    const double C15840 = C15838 + C14505;
    const double C15839 = C15837 + C14504;
    const double C17339 = C17336 + C14507;
    const double C17338 = C17335 + C14508;
    const double C17337 = C17334 + C14506;
    const double C17918 = C17917 + C15374;
    const double C18533 = C18532 + C15373;
    const double C27259 = C27258 + C17332;
    const double C28129 = C28128 + C18530;
    const double C26211 = C26209 + C26203;
    const double C19447 = C19445 + C19439;
    const double C107 =
        (3 * (C29213 + C29216 + C29216 + C29184 * C29244) + C29251 + C29251 +
         C29184 *
             (2 * C29244 + C29248 + C29248 +
              C29184 * (C29239 + C29243 + C29243 +
                        C29184 * (2 * ae * C29233 +
                                  C29184 *
                                      (C29223 * C29224 +
                                       C29188 * bs[6] * std::pow(C29182, 6)) *
                                      C29191)))) /
        C29038;
    const double C1580 =
        (C29251 + C29254 * (2 * C29275 + ae * C29276 +
                            C29184 * (C29271 + ae * C29184 * C29272 +
                                      C29184 * (ae * C29272 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29258)))) /
        C29038;
    const double C1707 =
        (C29251 + C29254 * (2 * C29314 + ae * C29276 +
                            C29184 * (C29312 + ae * C29184 * C29272 +
                                      C29184 * (ae * C29272 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29306)))) /
        C29038;
    const double C2180 =
        (C29251 + C29279 * (2 * C29300 + ae * C29301 +
                            C29184 * (C29296 + ae * C29184 * C29297 +
                                      C29184 * (ae * C29297 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29283)))) /
        C29038;
    const double C2417 =
        (C29251 + C29279 * (2 * C29352 + ae * C29301 +
                            C29184 * (C29350 + ae * C29184 * C29297 +
                                      C29184 * (ae * C29297 +
                                                C29184 * std::pow(C29182, 6) *
                                                    bs[6] * C29344)))) /
        C29038;
    const double C117 = C92 * C102;
    const double C1529 = C92 * C1524;
    const double C3111 = C3098 * C1524;
    const double C10251 = C10238 * C1524;
    const double C2065 = C92 * C2060;
    const double C6721 = C3098 * C2060;
    const double C19793 = C10238 * C2060;
    const double C14274 =
        (3 * (C29323 + C29585 + C29585 + C29254 * C29715) + C29728 + C29728 +
         C29254 *
             (2 * C29715 + C29725 + C29725 +
              C29254 * (C29328 + C29721 + C29721 +
                        C29254 * (2 * ae * C29272 +
                                  C29254 *
                                      (C29223 * C29224 +
                                       C29318 * bs[6] * std::pow(C29182, 6)) *
                                      C29191)))) /
        C29038;
    const double C16240 =
        (C29728 + C29279 * (2 * C29737 + ae * C29733 +
                            C29254 * (C29363 + ae * C29254 * C29297 +
                                      C29254 * (ae * C29297 +
                                                C29254 * std::pow(C29182, 6) *
                                                    bs[6] * C29357)))) /
        C29038;
    const double C14281 = C13746 * C14124;
    const double C16075 = C13746 * C15894;
    const double C17030 = C10302 * C15894;
    const double C23881 = C3162 * C15894;
    const double C27614 =
        (3 * (C29372 + C29684 + C29684 + C29279 * C29821) + C29834 + C29834 +
         C29279 *
             (2 * C29821 + C29831 + C29831 +
              C29279 * (C29377 + C29827 + C29827 +
                        C29279 * (2 * ae * C29297 +
                                  C29279 *
                                      (C29223 * C29224 +
                                       C29367 * bs[6] * std::pow(C29182, 6)) *
                                      C29191)))) /
        C29038;
    const double C27621 = C26623 * C27351;
    const double C3667 = C3663 + C3656;
    const double C3664 = C3660 + C3102;
    const double C4756 = C4754 + C3105;
    const double C6075 = C6073 + C4245;
    const double C7731 = C7727 + C4248;
    const double C7728 = C7724 + C4247;
    const double C8972 = C8970 + C5412;
    const double C10801 = C10797 + C10790;
    const double C10798 = C10794 + C10242;
    const double C11798 = C11796 + C10245;
    const double C13097 = C13095 + C11309;
    const double C20795 = C20791 + C11312;
    const double C20792 = C20788 + C11311;
    const double C21958 = C21956 + C12454;
    const double C3670 = C3666 + C3654;
    const double C3669 = C3665 + C3651;
    const double C4759 = C4757 + C4751;
    const double C6076 = C6074 + C6067;
    const double C7734 = C7730 + C7719;
    const double C7733 = C7729 + C7717;
    const double C8975 = C8973 + C8967;
    const double C10804 = C10800 + C10788;
    const double C10803 = C10799 + C10785;
    const double C11801 = C11799 + C11793;
    const double C13098 = C13096 + C13089;
    const double C20798 = C20794 + C20783;
    const double C20797 = C20793 + C20781;
    const double C21961 = C21959 + C21953;
    const double C14083 = C14080 + C14073;
    const double C14082 = C14079 + C14070;
    const double C14081 = C14078 + C14068;
    const double C14891 = C14889 + C14884;
    const double C14890 = C14888 + C14882;
    const double C15842 = C15840 + C15835;
    const double C15841 = C15839 + C15833;
    const double C17342 = C17339 + C17331;
    const double C17341 = C17338 + C17329;
    const double C17340 = C17337 + C17327;
    const double C17919 = C17918 + C17916;
    const double C18534 = C18533 + C18529;
    const double C27260 = C27259 + C27256;
    const double C28130 = C28129 + C28126;
    const double C3671 = C3667 + C3657;
    const double C3668 = C3664 + C3649;
    const double C4758 = C4756 + C4749;
    const double C6077 = C6075 + C6069;
    const double C7735 = C7731 + C7721;
    const double C7732 = C7728 + C7715;
    const double C8974 = C8972 + C8965;
    const double C10805 = C10801 + C10791;
    const double C10802 = C10798 + C10783;
    const double C11800 = C11798 + C11791;
    const double C13099 = C13097 + C13091;
    const double C20799 = C20795 + C20785;
    const double C20796 = C20792 + C20779;
    const double C21960 = C21958 + C21951;
    const double C14086 = C14083 * C30090;
    const double C14085 = C14082 * C30090;
    const double C16804 = C14082 * C6717;
    const double C23655 = C14082 * C19789;
    const double C14084 = C14081 * C30090;
    const double C16801 = C14081 * C6717;
    const double C23652 = C14081 * C19789;
    const double C14893 = C14891 * C30090;
    const double C14892 = C14890 * C30090;
    const double C17914 = C14890 * C6717;
    const double C24708 = C14890 * C19789;
    const double C15844 = C15842 * C30090;
    const double C16802 = C15842 * C30148;
    const double C19143 = C15842 * C6717;
    const double C23653 = C15842 * C30148;
    const double C25907 = C15842 * C19789;
    const double C15843 = C15841 * C30090;
    const double C16803 = C15841 * C30148;
    const double C23654 = C15841 * C30148;
    const double C19142 = C17341 * C30148;
    const double C25906 = C17341 * C30148;
    const double C17920 = C17919 * C30148;
    const double C24709 = C17919 * C30148;
    d2eexx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C30090 * C30075 * C30030 * C1519 -
           (C91 * C628 + C647 + C647 + C79 * C640 + C89 * C629 + C648 + C648 +
            C78 * C641 + C87 * C630 + C649 + C649 + C77 * C642) *
               C30090 * C30075 * C30030 * C1520) *
              C1521 +
          ((C87 * C629 + C1527 + C1527 + C77 * C641 + C89 * C628 + C1528 +
            C1528 + C78 * C640 + C91 * C1523 + C1529 + C1529 + C79 * C1525) *
               C30090 * C30075 * C30030 * C1520 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C30090 * C30075 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C155 * C93 + C30075 * C156) * C88 +
                     (C155 * C98 + C30075 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C30090 * C30030 * C1519 -
                    (C1590 * C79 + C1591 * C92 + C1592 * C78 + C1593 * C90 +
                     (C155 * C636 + C30075 * C698) * C77 +
                     (C155 * C630 + C30075 * C692) * C88) *
                        C30090 * C30030 * C1520) *
                       C1521 +
                   ((C1593 * C88 + C1592 * C77 + C1591 * C90 + C1590 * C78 +
                     (C155 * C1523 + C30075 * C1579) * C92 +
                     (C155 * C1524 + C30075 * C1580) * C79) *
                        C30090 * C30030 * C1520 -
                    (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                     C180 * C77 + C179 * C88) *
                        C30090 * C30030 * C1519) *
                       C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C222 * C93 + C30090 * C223) * C88 +
                     (C222 * C98 + C30090 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C30075 * C30030 * C1519 -
                    (C1654 * C79 + C1655 * C92 + C1656 * C78 + C1657 * C90 +
                     (C222 * C636 + C30090 * C748) * C77 +
                     (C222 * C630 + C30090 * C742) * C88) *
                        C30075 * C30030 * C1520) *
                       C1521 +
                   ((C1657 * C88 + C1656 * C77 + C1655 * C90 + C1654 * C78 +
                     (C222 * C1523 + C30090 * C1643) * C92 +
                     (C222 * C1524 + C30090 * C1644) * C79) *
                        C30075 * C30030 * C1520 -
                    (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                     C247 * C77 + C246 * C88) *
                        C30075 * C30030 * C1519) *
                       C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C30075) *
                        C30090 * C30030 * C1519 -
                    ((C92 * C690 + C79 * C790 + C90 * C691 + C78 * C791 +
                      C88 * C692 + C77 * C792) *
                         C30075 +
                     (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                      C88 * C630 + C77 * C636) *
                         C155) *
                        C30090 * C30030 * C1520) *
                       C1521 +
                   (((C88 * C629 + C77 * C635 + C90 * C628 + C78 * C634 +
                      C92 * C1523 + C79 * C1524) *
                         C155 +
                     (C88 * C691 + C77 * C791 + C90 * C690 + C78 * C790 +
                      C92 * C1579 + C79 * C1707) *
                         C30075) *
                        C30090 * C30030 * C1520 -
                    ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                      C88 * C157 + C77 * C290) *
                         C30075 +
                     (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                      C88 * C94 + C77 * C99) *
                         C155) *
                        C30090 * C30030 * C1519) *
                       C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C30090 * C30030 * C1519 -
           (C1769 * C79 + C1770 * C78 +
            (C332 * C630 + C843 + C843 + C30075 * C836) * C77) *
               C30090 * C30030 * C1520) *
              C1521 +
          ((C1770 * C77 + C1769 * C78 +
            (C332 * C1523 + C1764 + C1764 + C30075 * C1758) * C79) *
               C30090 * C30030 * C1520 -
           (C358 * C79 + C357 * C78 + C356 * C77) * C30090 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C30090 * C223) * C155 +
             (C222 * C156 + C30090 * C396) * C30075) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C30030 * C1519 -
           ((C1830 + C1824) * C79 + (C1831 + C1827) * C78 +
            ((C222 * C692 + C30090 * C886) * C30075 +
             (C222 * C630 + C30090 * C742) * C155) *
                C77) *
               C30030 * C1520) *
              C1521 +
          (((C1827 + C1831) * C77 + (C1824 + C1830) * C78 +
            ((C222 * C1523 + C30090 * C1643) * C155 +
             (C222 * C1579 + C30090 * C1820) * C30075) *
                C79) *
               C30030 * C1520 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C30090) *
                        C30075 * C30030 * C1519 -
                    ((C92 * C740 + C79 * C928 + C90 * C741 + C78 * C929 +
                      C88 * C742 + C77 * C930) *
                         C30090 +
                     (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                      C88 * C630 + C77 * C636) *
                         C222) *
                        C30075 * C30030 * C1520) *
                       C1521 +
                   (((C88 * C629 + C77 * C635 + C90 * C628 + C78 * C634 +
                      C92 * C1523 + C79 * C1524) *
                         C222 +
                     (C88 * C741 + C77 * C929 + C90 * C740 + C78 * C928 +
                      C92 * C1643 + C79 * C1881) *
                         C30090) *
                        C30075 * C30030 * C1520 -
                    ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                      C88 * C224 + C77 * C456) *
                         C30090 +
                     (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                      C88 * C94 + C77 * C99) *
                         C222) *
                        C30075 * C30030 * C1519) *
                       C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C30075 * C156) * C222 +
             (C155 * C223 + C30075 * C498) * C30090) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C30030 * C1519 -
           ((C1942 + C1936) * C79 + (C1943 + C1939) * C78 +
            ((C155 * C742 + C30075 * C974) * C30090 +
             (C155 * C630 + C30075 * C692) * C222) *
                C77) *
               C30030 * C1520) *
              C1521 +
          (((C1939 + C1943) * C77 + (C1936 + C1942) * C78 +
            ((C155 * C1523 + C30075 * C1579) * C222 +
             (C155 * C1643 + C30075 * C1932) * C30090) *
                C79) *
               C30030 * C1520 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C30090 * C558) * C30075 * C77 +
            C584 * C78 + C585 * C79) *
               C30030 * C1519 -
           (C2006 * C79 + C2007 * C78 +
            (C557 * C630 + C1025 + C1025 + C30090 * C1018) * C30075 * C77) *
               C30030 * C1520) *
              C1521 +
          ((C2007 * C77 + C2006 * C78 +
            (C557 * C1523 + C1999 + C1999 + C30090 * C1993) * C30075 * C79) *
               C30030 * C1520 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C30090 * C30075 * C2057 -
           (C91 * C1069 + C1088 + C1088 + C79 * C1081 + C89 * C1070 + C1089 +
            C1089 + C78 * C1082 + C87 * C1071 + C1090 + C1090 + C77 * C1083) *
               C30090 * C30075 * C2058) *
              C1519 +
          ((C87 * C2593 + C2603 + C2603 + C77 * C2599 + C89 * C2594 + C2604 +
            C2604 + C78 * C2600 + C91 * C2595 + C2605 + C2605 + C79 * C2601) *
               C30090 * C30075 * C2058 -
           (C91 * C628 + C647 + C647 + C79 * C640 + C89 * C629 + C648 + C648 +
            C78 * C641 + C87 * C630 + C649 + C649 + C77 * C642) *
               C30090 * C30075 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C155 * C93 + C30075 * C156) * C88 +
                     (C155 * C98 + C30075 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C30090 * C2057 -
                    (C2126 * C79 + C2127 * C92 + C2128 * C78 + C2129 * C90 +
                     (C155 * C1077 + C30075 * C1139) * C77 +
                     (C155 * C1071 + C30075 * C1133) * C88) *
                        C30090 * C2058) *
                       C1519 +
                   (((C155 * C2593 + C30075 * C2655) * C88 +
                     (C155 * C2596 + C30075 * C2658) * C77 +
                     (C155 * C2594 + C30075 * C2656) * C90 +
                     (C155 * C2597 + C30075 * C2659) * C78 +
                     (C155 * C2595 + C30075 * C2657) * C92 +
                     (C155 * C2598 + C30075 * C2660) * C79) *
                        C30090 * C2058 -
                    (C1590 * C79 + C1591 * C92 + C1592 * C78 + C1593 * C90 +
                     (C155 * C636 + C30075 * C698) * C77 +
                     (C155 * C630 + C30075 * C692) * C88) *
                        C30090 * C2057) *
                       C1520) *
                  C30004) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C222 * C93 + C30090 * C223) * C88 +
                     (C222 * C98 + C30090 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C30075 * C2057 -
                    (C2190 * C79 + C2191 * C92 + C2192 * C78 + C2193 * C90 +
                     (C222 * C1077 + C30090 * C1189) * C77 +
                     (C222 * C1071 + C30090 * C1183) * C88) *
                        C30075 * C2058) *
                       C1519 +
                   (((C222 * C2593 + C30090 * C2711) * C88 +
                     (C222 * C2596 + C30090 * C2714) * C77 +
                     (C222 * C2594 + C30090 * C2712) * C90 +
                     (C222 * C2597 + C30090 * C2715) * C78 +
                     (C222 * C2595 + C30090 * C2713) * C92 +
                     (C222 * C2598 + C30090 * C2716) * C79) *
                        C30075 * C2058 -
                    (C1654 * C79 + C1655 * C92 + C1656 * C78 + C1657 * C90 +
                     (C222 * C636 + C30090 * C748) * C77 +
                     (C222 * C630 + C30090 * C742) * C88) *
                        C30075 * C2057) *
                       C1520) *
                  C30004) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C30075) *
                        C30090 * C2057 -
                    ((C92 * C1131 + C79 * C1231 + C90 * C1132 + C78 * C1232 +
                      C88 * C1133 + C77 * C1233) *
                         C30075 +
                     (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                      C88 * C1071 + C77 * C1077) *
                         C155) *
                        C30090 * C2058) *
                       C1519 +
                   (((C88 * C2593 + C77 * C2596 + C90 * C2594 + C78 * C2597 +
                      C92 * C2595 + C79 * C2598) *
                         C155 +
                     (C88 * C2655 + C77 * C2767 + C90 * C2656 + C78 * C2768 +
                      C92 * C2657 + C79 * C2769) *
                         C30075) *
                        C30090 * C2058 -
                    ((C92 * C690 + C79 * C790 + C90 * C691 + C78 * C791 +
                      C88 * C692 + C77 * C792) *
                         C30075 +
                     (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                      C88 * C630 + C77 * C636) *
                         C155) *
                        C30090 * C2057) *
                       C1520) *
                  C30004) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C332 * C93 + C339 + C339 + C30075 * C333) * C77 +
                     C356 * C78 + C357 * C79) *
                        C30090 * C2057 -
                    (C2305 * C79 + C2306 * C78 +
                     (C332 * C1071 + C1284 + C1284 + C30075 * C1277) * C77) *
                        C30090 * C2058) *
                       C1519 +
                   (((C332 * C2593 + C2824 + C2824 + C30075 * C2820) * C77 +
                     (C332 * C2594 + C2825 + C2825 + C30075 * C2821) * C78 +
                     (C332 * C2595 + C2826 + C2826 + C30075 * C2822) * C79) *
                        C30090 * C2058 -
                    (C1769 * C79 + C1770 * C78 +
                     (C332 * C630 + C843 + C843 + C30075 * C836) * C77) *
                        C30090 * C2057) *
                       C1520) *
                  C30004) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C222 * C93 + C30090 * C223) * C155 +
                      (C222 * C156 + C30090 * C396) * C30075) *
                         C77 +
                     (C402 + C414) * C78 + C417 * C79) *
                        C2057 -
                    ((C2366 + C2360) * C79 + (C2367 + C2363) * C78 +
                     ((C222 * C1133 + C30090 * C1327) * C30075 +
                      (C222 * C1071 + C30090 * C1183) * C155) *
                         C77) *
                        C2058) *
                       C1519 +
                   ((((C222 * C2593 + C30090 * C2711) * C155 +
                      (C222 * C2655 + C30090 * C2876) * C30075) *
                         C77 +
                     ((C222 * C2594 + C30090 * C2712) * C155 +
                      (C222 * C2656 + C30090 * C2877) * C30075) *
                         C78 +
                     ((C222 * C2595 + C30090 * C2713) * C155 +
                      (C222 * C2657 + C30090 * C2878) * C30075) *
                         C79) *
                        C2058 -
                    ((C1830 + C1824) * C79 + (C1831 + C1827) * C78 +
                     ((C222 * C692 + C30090 * C886) * C30075 +
                      (C222 * C630 + C30090 * C742) * C155) *
                         C77) *
                        C2057) *
                       C1520) *
                  C30004) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C30090) *
                        C30075 * C2057 -
                    ((C92 * C1181 + C79 * C1369 + C90 * C1182 + C78 * C1370 +
                      C88 * C1183 + C77 * C1371) *
                         C30090 +
                     (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                      C88 * C1071 + C77 * C1077) *
                         C222) *
                        C30075 * C2058) *
                       C1519 +
                   (((C88 * C2593 + C77 * C2596 + C90 * C2594 + C78 * C2597 +
                      C92 * C2595 + C79 * C2598) *
                         C222 +
                     (C88 * C2711 + C77 * C2929 + C90 * C2712 + C78 * C2930 +
                      C92 * C2713 + C79 * C2931) *
                         C30090) *
                        C30075 * C2058 -
                    ((C92 * C740 + C79 * C928 + C90 * C741 + C78 * C929 +
                      C88 * C742 + C77 * C930) *
                         C30090 +
                     (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                      C88 * C630 + C77 * C636) *
                         C222) *
                        C30075 * C2057) *
                       C1520) *
                  C30004) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C155 * C93 + C30075 * C156) * C222 +
                      (C155 * C223 + C30075 * C498) * C30090) *
                         C77 +
                     (C504 + C516) * C78 + C519 * C79) *
                        C2057 -
                    ((C2478 + C2472) * C79 + (C2479 + C2475) * C78 +
                     ((C155 * C1183 + C30075 * C1415) * C30090 +
                      (C155 * C1071 + C30075 * C1133) * C222) *
                         C77) *
                        C2058) *
                       C1519 +
                   ((((C155 * C2593 + C30075 * C2655) * C222 +
                      (C155 * C2711 + C30075 * C2982) * C30090) *
                         C77 +
                     ((C155 * C2594 + C30075 * C2656) * C222 +
                      (C155 * C2712 + C30075 * C2983) * C30090) *
                         C78 +
                     ((C155 * C2595 + C30075 * C2657) * C222 +
                      (C155 * C2713 + C30075 * C2984) * C30090) *
                         C79) *
                        C2058 -
                    ((C1942 + C1936) * C79 + (C1943 + C1939) * C78 +
                     ((C155 * C742 + C30075 * C974) * C30090 +
                      (C155 * C630 + C30075 * C692) * C222) *
                         C77) *
                        C2057) *
                       C1520) *
                  C30004) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C30090 * C558) * C30075 * C77 +
            C584 * C78 + C585 * C79) *
               C2057 -
           (C2542 * C79 + C2543 * C78 +
            (C557 * C1071 + C1466 + C1466 + C30090 * C1459) * C30075 * C77) *
               C2058) *
              C1519 +
          (((C557 * C2593 + C3039 + C3039 + C30090 * C3035) * C30075 * C77 +
            (C557 * C2594 + C3040 + C3040 + C30090 * C3036) * C30075 * C78 +
            (C557 * C2595 + C3041 + C3041 + C30090 * C3037) * C30075 * C79) *
               C2058 -
           (C2006 * C79 + C2007 * C78 +
            (C557 * C630 + C1025 + C1025 + C30090 * C1018) * C30075 * C77) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C30090 * C30075 * C30030 * C624 -
          (C91 * C628 + C647 + C647 + C79 * C640 + C89 * C629 + C648 + C648 +
           C78 * C641 + C87 * C630 + C649 + C649 + C77 * C642) *
              C30090 * C30075 * C30030 * C625 +
          (C87 * C631 + C650 + C650 + C77 * C643 + C89 * C632 + C651 + C651 +
           C78 * C644 + C91 * C633 + C652 + C652 + C79 * C645) *
              C30090 * C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C30090 * C30075 * C30030 * C30016 * C84 -
          (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
           C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
              C30090 * C30075 * C30030 * C30016 * C85 +
          (C87 * C95 + C115 + C115 + C77 * C105 + C89 * C96 + C116 + C116 +
           C78 * C106 + C91 * C97 + C117 + C117 + C79 * C107) *
              C30090 * C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C30090 * C30075 * C1066 -
          (C91 * C1069 + C1088 + C1088 + C79 * C1081 + C89 * C1070 + C1089 +
           C1089 + C78 * C1082 + C87 * C1071 + C1090 + C1090 + C77 * C1083) *
              C30090 * C30075 * C1067 +
          (C87 * C1072 + C1091 + C1091 + C77 * C1084 + C89 * C1073 + C1092 +
           C1092 + C78 * C1085 + C91 * C1074 + C1093 + C1093 + C79 * C1086) *
              C30090 * C30075 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         (((C155 * C93 + C30075 * C156) * C88 +
           (C155 * C98 + C30075 * C161) * C77 + C179 * C90 + C180 * C78 +
           C181 * C92 + C182 * C79) *
              C30090 * C30030 * C624 -
          ((C155 * C634 + C30075 * C696) * C79 +
           (C155 * C628 + C30075 * C690) * C92 +
           (C155 * C635 + C30075 * C697) * C78 +
           (C155 * C629 + C30075 * C691) * C90 +
           (C155 * C636 + C30075 * C698) * C77 +
           (C155 * C630 + C30075 * C692) * C88) *
              C30090 * C30030 * C625 +
          ((C155 * C631 + C30075 * C693) * C88 +
           (C155 * C637 + C30075 * C699) * C77 +
           (C155 * C632 + C30075 * C694) * C90 +
           (C155 * C638 + C30075 * C700) * C78 +
           (C155 * C633 + C30075 * C695) * C92 +
           (C155 * C639 + C30075 * C701) * C79) *
              C30090 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C155 * C93 + C30075 * C156) * C88 +
                               (C155 * C98 + C30075 * C161) * C77 + C179 * C90 +
                               C180 * C78 + C181 * C92 + C182 * C79) *
                                  C30090 * C30030 * C30016 * C84 -
                              (C183 * C79 + C184 * C92 + C182 * C78 +
                               C181 * C90 + C180 * C77 + C179 * C88) *
                                  C30090 * C30030 * C30016 * C85 +
                              (C181 * C88 + C182 * C77 + C184 * C90 +
                               C183 * C78 + (C155 * C97 + C30075 * C160) * C92 +
                               (C155 * C102 + C30075 * C165) * C79) *
                                  C30090 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C155 * C93 + C30075 * C156) * C88 +
           (C155 * C98 + C30075 * C161) * C77 + C179 * C90 + C180 * C78 +
           C181 * C92 + C182 * C79) *
              C30090 * C1066 -
          ((C155 * C1075 + C30075 * C1137) * C79 +
           (C155 * C1069 + C30075 * C1131) * C92 +
           (C155 * C1076 + C30075 * C1138) * C78 +
           (C155 * C1070 + C30075 * C1132) * C90 +
           (C155 * C1077 + C30075 * C1139) * C77 +
           (C155 * C1071 + C30075 * C1133) * C88) *
              C30090 * C1067 +
          ((C155 * C1072 + C30075 * C1134) * C88 +
           (C155 * C1078 + C30075 * C1140) * C77 +
           (C155 * C1073 + C30075 * C1135) * C90 +
           (C155 * C1079 + C30075 * C1141) * C78 +
           (C155 * C1074 + C30075 * C1136) * C92 +
           (C155 * C1080 + C30075 * C1142) * C79) *
              C30090 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C222 * C93 + C30090 * C223) * C88 +
           (C222 * C98 + C30090 * C228) * C77 + C246 * C90 + C247 * C78 +
           C248 * C92 + C249 * C79) *
              C30075 * C30030 * C624 -
          ((C222 * C634 + C30090 * C746) * C79 +
           (C222 * C628 + C30090 * C740) * C92 +
           (C222 * C635 + C30090 * C747) * C78 +
           (C222 * C629 + C30090 * C741) * C90 +
           (C222 * C636 + C30090 * C748) * C77 +
           (C222 * C630 + C30090 * C742) * C88) *
              C30075 * C30030 * C625 +
          ((C222 * C631 + C30090 * C743) * C88 +
           (C222 * C637 + C30090 * C749) * C77 +
           (C222 * C632 + C30090 * C744) * C90 +
           (C222 * C638 + C30090 * C750) * C78 +
           (C222 * C633 + C30090 * C745) * C92 +
           (C222 * C639 + C30090 * C751) * C79) *
              C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C222 * C93 + C30090 * C223) * C88 +
                               (C222 * C98 + C30090 * C228) * C77 + C246 * C90 +
                               C247 * C78 + C248 * C92 + C249 * C79) *
                                  C30075 * C30030 * C30016 * C84 -
                              (C250 * C79 + C251 * C92 + C249 * C78 +
                               C248 * C90 + C247 * C77 + C246 * C88) *
                                  C30075 * C30030 * C30016 * C85 +
                              (C248 * C88 + C249 * C77 + C251 * C90 +
                               C250 * C78 + (C222 * C97 + C30090 * C227) * C92 +
                               (C222 * C102 + C30090 * C232) * C79) *
                                  C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C30090 * C223) * C88 +
           (C222 * C98 + C30090 * C228) * C77 + C246 * C90 + C247 * C78 +
           C248 * C92 + C249 * C79) *
              C30075 * C1066 -
          ((C222 * C1075 + C30090 * C1187) * C79 +
           (C222 * C1069 + C30090 * C1181) * C92 +
           (C222 * C1076 + C30090 * C1188) * C78 +
           (C222 * C1070 + C30090 * C1182) * C90 +
           (C222 * C1077 + C30090 * C1189) * C77 +
           (C222 * C1071 + C30090 * C1183) * C88) *
              C30075 * C1067 +
          ((C222 * C1072 + C30090 * C1184) * C88 +
           (C222 * C1078 + C30090 * C1190) * C77 +
           (C222 * C1073 + C30090 * C1185) * C90 +
           (C222 * C1079 + C30090 * C1191) * C78 +
           (C222 * C1074 + C30090 * C1186) * C92 +
           (C222 * C1080 + C30090 * C1192) * C79) *
              C30075 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] += (-std::pow(Pi, 2.5) *
                  (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
                     C79 * C100) *
                        C155 +
                    (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                     C92 * C158 + C79 * C291) *
                        C30075) *
                       C30090 * C30030 * C624 -
                   ((C92 * C690 + C79 * C790 + C90 * C691 + C78 * C791 +
                     C88 * C692 + C77 * C792) *
                        C30075 +
                    (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                     C88 * C630 + C77 * C636) *
                        C155) *
                       C30090 * C30030 * C625 +
                   ((C88 * C631 + C77 * C637 + C90 * C632 + C78 * C638 +
                     C92 * C633 + C79 * C639) *
                        C155 +
                    (C88 * C693 + C77 * C793 + C90 * C694 + C78 * C794 +
                     C92 * C695 + C79 * C795) *
                        C30075) *
                       C30090 * C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * (((C88 * C93 + C77 * C98 + C90 * C94 +
                                         C78 * C99 + C92 * C95 + C79 * C100) *
                                            C155 +
                                        (C88 * C156 + C77 * C289 + C90 * C157 +
                                         C78 * C290 + C92 * C158 + C79 * C291) *
                                            C30075) *
                                           C30090 * C30030 * C30016 * C84 -
                                       ((C92 * C159 + C79 * C292 + C90 * C158 +
                                         C78 * C291 + C88 * C157 + C77 * C290) *
                                            C30075 +
                                        (C92 * C96 + C79 * C101 + C90 * C95 +
                                         C78 * C100 + C88 * C94 + C77 * C99) *
                                            C155) *
                                           C30090 * C30030 * C30016 * C85 +
                                       ((C88 * C95 + C77 * C100 + C90 * C96 +
                                         C78 * C101 + C92 * C97 + C79 * C102) *
                                            C155 +
                                        (C88 * C158 + C77 * C291 + C90 * C159 +
                                         C78 * C292 + C92 * C160 + C79 * C293) *
                                            C30075) *
                                           C30090 * C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
                     C79 * C100) *
                        C155 +
                    (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                     C92 * C158 + C79 * C291) *
                        C30075) *
                       C30090 * C1066 -
                   ((C92 * C1131 + C79 * C1231 + C90 * C1132 + C78 * C1232 +
                     C88 * C1133 + C77 * C1233) *
                        C30075 +
                    (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                     C88 * C1071 + C77 * C1077) *
                        C155) *
                       C30090 * C1067 +
                   ((C88 * C1072 + C77 * C1078 + C90 * C1073 + C78 * C1079 +
                     C92 * C1074 + C79 * C1080) *
                        C155 +
                    (C88 * C1134 + C77 * C1234 + C90 * C1135 + C78 * C1235 +
                     C92 * C1136 + C79 * C1236) *
                        C30075) *
                       C30090 * C1068) *
                  C30016 * C30004) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[2] += (-std::pow(Pi, 2.5) *
                  (((C332 * C93 + C339 + C339 + C30075 * C333) * C77 +
                    C356 * C78 + C357 * C79) *
                       C30090 * C30030 * C624 -
                   ((C332 * C628 + C841 + C841 + C30075 * C834) * C79 +
                    (C332 * C629 + C842 + C842 + C30075 * C835) * C78 +
                    (C332 * C630 + C843 + C843 + C30075 * C836) * C77) *
                       C30090 * C30030 * C625 +
                   ((C332 * C631 + C844 + C844 + C30075 * C837) * C77 +
                    (C332 * C632 + C845 + C845 + C30075 * C838) * C78 +
                    (C332 * C633 + C846 + C846 + C30075 * C839) * C79) *
                       C30090 * C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C332 * C93 + C339 + C339 + C30075 * C333) * C77 +
                    C356 * C78 + C357 * C79) *
                       C30090 * C30030 * C30016 * C84 -
                   (C358 * C79 + C357 * C78 + C356 * C77) * C30090 * C30030 *
                       C30016 * C85 +
                   (C357 * C77 + C358 * C78 +
                    (C332 * C97 + C349 + C349 + C30075 * C337) * C79) *
                       C30090 * C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C332 * C93 + C339 + C339 + C30075 * C333) * C77 +
                    C356 * C78 + C357 * C79) *
                       C30090 * C1066 -
                   ((C332 * C1069 + C1282 + C1282 + C30075 * C1275) * C79 +
                    (C332 * C1070 + C1283 + C1283 + C30075 * C1276) * C78 +
                    (C332 * C1071 + C1284 + C1284 + C30075 * C1277) * C77) *
                       C30090 * C1067 +
                   ((C332 * C1072 + C1285 + C1285 + C30075 * C1278) * C77 +
                    (C332 * C1073 + C1286 + C1286 + C30075 * C1279) * C78 +
                    (C332 * C1074 + C1287 + C1287 + C30075 * C1280) * C79) *
                       C30090 * C1068) *
                  C30016 * C30004) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C155 +
            (C222 * C156 + C30090 * C396) * C30075) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C30030 * C624 -
          (((C222 * C690 + C30090 * C884) * C30075 +
            (C222 * C628 + C30090 * C740) * C155) *
               C79 +
           ((C222 * C691 + C30090 * C885) * C30075 +
            (C222 * C629 + C30090 * C741) * C155) *
               C78 +
           ((C222 * C692 + C30090 * C886) * C30075 +
            (C222 * C630 + C30090 * C742) * C155) *
               C77) *
              C30030 * C625 +
          (((C222 * C631 + C30090 * C743) * C155 +
            (C222 * C693 + C30090 * C887) * C30075) *
               C77 +
           ((C222 * C632 + C30090 * C744) * C155 +
            (C222 * C694 + C30090 * C888) * C30075) *
               C78 +
           ((C222 * C633 + C30090 * C745) * C155 +
            (C222 * C695 + C30090 * C889) * C30075) *
               C79) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C155 +
            (C222 * C156 + C30090 * C396) * C30075) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C30030 * C30016 * C84 -
          ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
              C30030 * C30016 * C85 +
          (C417 * C77 + (C410 + C416) * C78 +
           ((C222 * C97 + C30090 * C227) * C155 +
            (C222 * C160 + C30090 * C400) * C30075) *
               C79) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C155 +
            (C222 * C156 + C30090 * C396) * C30075) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C1066 -
          (((C222 * C1131 + C30090 * C1325) * C30075 +
            (C222 * C1069 + C30090 * C1181) * C155) *
               C79 +
           ((C222 * C1132 + C30090 * C1326) * C30075 +
            (C222 * C1070 + C30090 * C1182) * C155) *
               C78 +
           ((C222 * C1133 + C30090 * C1327) * C30075 +
            (C222 * C1071 + C30090 * C1183) * C155) *
               C77) *
              C1067 +
          (((C222 * C1072 + C30090 * C1184) * C155 +
            (C222 * C1134 + C30090 * C1328) * C30075) *
               C77 +
           ((C222 * C1073 + C30090 * C1185) * C155 +
            (C222 * C1135 + C30090 * C1329) * C30075) *
               C78 +
           ((C222 * C1074 + C30090 * C1186) * C155 +
            (C222 * C1136 + C30090 * C1330) * C30075) *
               C79) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[2] += (-std::pow(Pi, 2.5) *
                  (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
                     C79 * C100) *
                        C222 +
                    (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                     C92 * C225 + C79 * C457) *
                        C30090) *
                       C30075 * C30030 * C624 -
                   ((C92 * C740 + C79 * C928 + C90 * C741 + C78 * C929 +
                     C88 * C742 + C77 * C930) *
                        C30090 +
                    (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                     C88 * C630 + C77 * C636) *
                        C222) *
                       C30075 * C30030 * C625 +
                   ((C88 * C631 + C77 * C637 + C90 * C632 + C78 * C638 +
                     C92 * C633 + C79 * C639) *
                        C222 +
                    (C88 * C743 + C77 * C931 + C90 * C744 + C78 * C932 +
                     C92 * C745 + C79 * C933) *
                        C30090) *
                       C30075 * C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * (((C88 * C93 + C77 * C98 + C90 * C94 +
                                         C78 * C99 + C92 * C95 + C79 * C100) *
                                            C222 +
                                        (C88 * C223 + C77 * C455 + C90 * C224 +
                                         C78 * C456 + C92 * C225 + C79 * C457) *
                                            C30090) *
                                           C30075 * C30030 * C30016 * C84 -
                                       ((C92 * C226 + C79 * C458 + C90 * C225 +
                                         C78 * C457 + C88 * C224 + C77 * C456) *
                                            C30090 +
                                        (C92 * C96 + C79 * C101 + C90 * C95 +
                                         C78 * C100 + C88 * C94 + C77 * C99) *
                                            C222) *
                                           C30075 * C30030 * C30016 * C85 +
                                       ((C88 * C95 + C77 * C100 + C90 * C96 +
                                         C78 * C101 + C92 * C97 + C79 * C102) *
                                            C222 +
                                        (C88 * C225 + C77 * C457 + C90 * C226 +
                                         C78 * C458 + C92 * C227 + C79 * C459) *
                                            C30090) *
                                           C30075 * C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
                     C79 * C100) *
                        C222 +
                    (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                     C92 * C225 + C79 * C457) *
                        C30090) *
                       C30075 * C1066 -
                   ((C92 * C1181 + C79 * C1369 + C90 * C1182 + C78 * C1370 +
                     C88 * C1183 + C77 * C1371) *
                        C30090 +
                    (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                     C88 * C1071 + C77 * C1077) *
                        C222) *
                       C30075 * C1067 +
                   ((C88 * C1072 + C77 * C1078 + C90 * C1073 + C78 * C1079 +
                     C92 * C1074 + C79 * C1080) *
                        C222 +
                    (C88 * C1184 + C77 * C1372 + C90 * C1185 + C78 * C1373 +
                     C92 * C1186 + C79 * C1374) *
                        C30090) *
                       C30075 * C1068) *
                  C30016 * C30004) /
                     (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C222 +
            (C155 * C223 + C30075 * C498) * C30090) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C30030 * C624 -
          (((C155 * C740 + C30075 * C972) * C30090 +
            (C155 * C628 + C30075 * C690) * C222) *
               C79 +
           ((C155 * C741 + C30075 * C973) * C30090 +
            (C155 * C629 + C30075 * C691) * C222) *
               C78 +
           ((C155 * C742 + C30075 * C974) * C30090 +
            (C155 * C630 + C30075 * C692) * C222) *
               C77) *
              C30030 * C625 +
          (((C155 * C631 + C30075 * C693) * C222 +
            (C155 * C743 + C30075 * C975) * C30090) *
               C77 +
           ((C155 * C632 + C30075 * C694) * C222 +
            (C155 * C744 + C30075 * C976) * C30090) *
               C78 +
           ((C155 * C633 + C30075 * C695) * C222 +
            (C155 * C745 + C30075 * C977) * C30090) *
               C79) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C222 +
            (C155 * C223 + C30075 * C498) * C30090) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C30030 * C30016 * C84 -
          ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
              C30030 * C30016 * C85 +
          (C519 * C77 + (C512 + C518) * C78 +
           ((C155 * C97 + C30075 * C160) * C222 +
            (C155 * C227 + C30075 * C502) * C30090) *
               C79) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C222 +
            (C155 * C223 + C30075 * C498) * C30090) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C1066 -
          (((C155 * C1181 + C30075 * C1413) * C30090 +
            (C155 * C1069 + C30075 * C1131) * C222) *
               C79 +
           ((C155 * C1182 + C30075 * C1414) * C30090 +
            (C155 * C1070 + C30075 * C1132) * C222) *
               C78 +
           ((C155 * C1183 + C30075 * C1415) * C30090 +
            (C155 * C1071 + C30075 * C1133) * C222) *
               C77) *
              C1067 +
          (((C155 * C1072 + C30075 * C1134) * C222 +
            (C155 * C1184 + C30075 * C1416) * C30090) *
               C77 +
           ((C155 * C1073 + C30075 * C1135) * C222 +
            (C155 * C1185 + C30075 * C1417) * C30090) *
               C78 +
           ((C155 * C1074 + C30075 * C1136) * C222 +
            (C155 * C1186 + C30075 * C1418) * C30090) *
               C79) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C30090 * C558) * C30075 * C77 +
           C584 * C78 + C585 * C79) *
              C30030 * C624 -
          ((C557 * C628 + C1023 + C1023 + C30090 * C1016) * C30075 * C79 +
           (C557 * C629 + C1024 + C1024 + C30090 * C1017) * C30075 * C78 +
           (C557 * C630 + C1025 + C1025 + C30090 * C1018) * C30075 * C77) *
              C30030 * C625 +
          ((C557 * C631 + C1026 + C1026 + C30090 * C1019) * C30075 * C77 +
           (C557 * C632 + C1027 + C1027 + C30090 * C1020) * C30075 * C78 +
           (C557 * C633 + C1028 + C1028 + C30090 * C1021) * C30075 * C79) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C30090 * C558) * C30075 * C77 +
           C584 * C78 + C585 * C79) *
              C30030 * C30016 * C84 -
          (C586 * C79 + C585 * C78 + C584 * C77) * C30030 * C30016 * C85 +
          (C585 * C77 + C586 * C78 +
           (C557 * C97 + C574 + C574 + C30090 * C562) * C30075 * C79) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C30090 * C558) * C30075 * C77 +
           C584 * C78 + C585 * C79) *
              C1066 -
          ((C557 * C1069 + C1464 + C1464 + C30090 * C1457) * C30075 * C79 +
           (C557 * C1070 + C1465 + C1465 + C30090 * C1458) * C30075 * C78 +
           (C557 * C1071 + C1466 + C1466 + C30090 * C1459) * C30075 * C77) *
              C1067 +
          ((C557 * C1072 + C1467 + C1467 + C30090 * C1460) * C30075 * C77 +
           (C557 * C1073 + C1468 + C1468 + C30090 * C1461) * C30075 * C78 +
           (C557 * C1074 + C1469 + C1469 + C30090 * C1462) * C30075 * C79) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C30090 * C30075 * C2057 -
           (C91 * C1069 + C1088 + C1088 + C79 * C1081 + C89 * C1070 + C1089 +
            C1089 + C78 * C1082 + C87 * C1071 + C1090 + C1090 + C77 * C1083) *
               C30090 * C30075 * C2058) *
              C30016 * C1521 +
          ((C87 * C1070 + C2063 + C2063 + C77 * C1082 + C89 * C1069 + C2064 +
            C2064 + C78 * C1081 + C91 * C2059 + C2065 + C2065 + C79 * C2061) *
               C30090 * C30075 * C2058 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C30090 * C30075 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C155 * C93 + C30075 * C156) * C88 +
                     (C155 * C98 + C30075 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C30090 * C2057 -
                    (C2126 * C79 + C2127 * C92 + C2128 * C78 + C2129 * C90 +
                     (C155 * C1077 + C30075 * C1139) * C77 +
                     (C155 * C1071 + C30075 * C1133) * C88) *
                        C30090 * C2058) *
                       C30016 * C1521 +
                   ((C2129 * C88 + C2128 * C77 + C2127 * C90 + C2126 * C78 +
                     (C155 * C2059 + C30075 * C2115) * C92 +
                     (C155 * C2060 + C30075 * C2116) * C79) *
                        C30090 * C2058 -
                    (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                     C180 * C77 + C179 * C88) *
                        C30090 * C2057) *
                       C30016 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C222 * C93 + C30090 * C223) * C88 +
                     (C222 * C98 + C30090 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C30075 * C2057 -
                    (C2190 * C79 + C2191 * C92 + C2192 * C78 + C2193 * C90 +
                     (C222 * C1077 + C30090 * C1189) * C77 +
                     (C222 * C1071 + C30090 * C1183) * C88) *
                        C30075 * C2058) *
                       C30016 * C1521 +
                   ((C2193 * C88 + C2192 * C77 + C2191 * C90 + C2190 * C78 +
                     (C222 * C2059 + C30090 * C2179) * C92 +
                     (C222 * C2060 + C30090 * C2180) * C79) *
                        C30075 * C2058 -
                    (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                     C247 * C77 + C246 * C88) *
                        C30075 * C2057) *
                       C30016 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C30075) *
                        C30090 * C2057 -
                    ((C92 * C1131 + C79 * C1231 + C90 * C1132 + C78 * C1232 +
                      C88 * C1133 + C77 * C1233) *
                         C30075 +
                     (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                      C88 * C1071 + C77 * C1077) *
                         C155) *
                        C30090 * C2058) *
                       C30016 * C1521 +
                   (((C88 * C1070 + C77 * C1076 + C90 * C1069 + C78 * C1075 +
                      C92 * C2059 + C79 * C2060) *
                         C155 +
                     (C88 * C1132 + C77 * C1232 + C90 * C1131 + C78 * C1231 +
                      C92 * C2115 + C79 * C2243) *
                         C30075) *
                        C30090 * C2058 -
                    ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                      C88 * C157 + C77 * C290) *
                         C30075 +
                     (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                      C88 * C94 + C77 * C99) *
                         C155) *
                        C30090 * C2057) *
                       C30016 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C332 * C93 + C339 + C339 + C30075 * C333) * C77 +
                     C356 * C78 + C357 * C79) *
                        C30090 * C2057 -
                    (C2305 * C79 + C2306 * C78 +
                     (C332 * C1071 + C1284 + C1284 + C30075 * C1277) * C77) *
                        C30090 * C2058) *
                       C30016 * C1521 +
                   ((C2306 * C77 + C2305 * C78 +
                     (C332 * C2059 + C2300 + C2300 + C30075 * C2294) * C79) *
                        C30090 * C2058 -
                    (C358 * C79 + C357 * C78 + C356 * C77) * C30090 * C2057) *
                       C30016 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C30090 * C223) * C155 +
             (C222 * C156 + C30090 * C396) * C30075) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C2057 -
           ((C2366 + C2360) * C79 + (C2367 + C2363) * C78 +
            ((C222 * C1133 + C30090 * C1327) * C30075 +
             (C222 * C1071 + C30090 * C1183) * C155) *
                C77) *
               C2058) *
              C30016 * C1521 +
          (((C2363 + C2367) * C77 + (C2360 + C2366) * C78 +
            ((C222 * C2059 + C30090 * C2179) * C155 +
             (C222 * C2115 + C30090 * C2356) * C30075) *
                C79) *
               C2058 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C30090) *
                        C30075 * C2057 -
                    ((C92 * C1181 + C79 * C1369 + C90 * C1182 + C78 * C1370 +
                      C88 * C1183 + C77 * C1371) *
                         C30090 +
                     (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                      C88 * C1071 + C77 * C1077) *
                         C222) *
                        C30075 * C2058) *
                       C30016 * C1521 +
                   (((C88 * C1070 + C77 * C1076 + C90 * C1069 + C78 * C1075 +
                      C92 * C2059 + C79 * C2060) *
                         C222 +
                     (C88 * C1182 + C77 * C1370 + C90 * C1181 + C78 * C1369 +
                      C92 * C2179 + C79 * C2417) *
                         C30090) *
                        C30075 * C2058 -
                    ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                      C88 * C224 + C77 * C456) *
                         C30090 +
                     (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                      C88 * C94 + C77 * C99) *
                         C222) *
                        C30075 * C2057) *
                       C30016 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C30075 * C156) * C222 +
             (C155 * C223 + C30075 * C498) * C30090) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C2057 -
           ((C2478 + C2472) * C79 + (C2479 + C2475) * C78 +
            ((C155 * C1183 + C30075 * C1415) * C30090 +
             (C155 * C1071 + C30075 * C1133) * C222) *
                C77) *
               C2058) *
              C30016 * C1521 +
          (((C2475 + C2479) * C77 + (C2472 + C2478) * C78 +
            ((C155 * C2059 + C30075 * C2115) * C222 +
             (C155 * C2179 + C30075 * C2468) * C30090) *
                C79) *
               C2058 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C30090 * C558) * C30075 * C77 +
            C584 * C78 + C585 * C79) *
               C2057 -
           (C2542 * C79 + C2543 * C78 +
            (C557 * C1071 + C1466 + C1466 + C30090 * C1459) * C30075 * C77) *
               C2058) *
              C30016 * C1521 +
          ((C2543 * C77 + C2542 * C78 +
            (C557 * C2059 + C2535 + C2535 + C30090 * C2529) * C30075 * C79) *
               C2058 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 +
                    C110 + C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
                       C30090 * C30075 * C30030 * C30016 * C84 -
                   (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 +
                    C113 + C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
                       C30090 * C30075 * C30030 * C30016 * C85 +
                   (C87 * C95 + C115 + C115 + C77 * C105 + C89 * C96 + C116 +
                    C116 + C78 * C106 + C91 * C97 + C117 + C117 + C79 * C107) *
                       C30090 * C30075 * C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 +
                    C110 + C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
                       C30090 * C30075 * C30030 * C624 -
                   (C91 * C628 + C647 + C647 + C79 * C640 + C89 * C629 + C648 +
                    C648 + C78 * C641 + C87 * C630 + C649 + C649 + C77 * C642) *
                       C30090 * C30075 * C30030 * C625 +
                   (C87 * C631 + C650 + C650 + C77 * C643 + C89 * C632 + C651 +
                    C651 + C78 * C644 + C91 * C633 + C652 + C652 + C79 * C645) *
                       C30090 * C30075 * C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q));
    d2eexy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C155 * C93 + C30075 * C156) * C88 +
                    (C155 * C98 + C30075 * C161) * C77 + C179 * C90 +
                    C180 * C78 + C181 * C92 + C182 * C79) *
                       C30090 * C30030 * C30016 * C84 -
                   (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                    C180 * C77 + C179 * C88) *
                       C30090 * C30030 * C30016 * C85 +
                   (C181 * C88 + C182 * C77 + C184 * C90 + C183 * C78 +
                    (C155 * C97 + C30075 * C160) * C92 +
                    (C155 * C102 + C30075 * C165) * C79) *
                       C30090 * C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C155 * C93 + C30075 * C156) * C88 +
                    (C155 * C98 + C30075 * C161) * C77 + C179 * C90 +
                    C180 * C78 + C181 * C92 + C182 * C79) *
                       C30090 * C30030 * C624 -
                   ((C155 * C634 + C30075 * C696) * C79 +
                    (C155 * C628 + C30075 * C690) * C92 +
                    (C155 * C635 + C30075 * C697) * C78 +
                    (C155 * C629 + C30075 * C691) * C90 +
                    (C155 * C636 + C30075 * C698) * C77 +
                    (C155 * C630 + C30075 * C692) * C88) *
                       C30090 * C30030 * C625 +
                   ((C155 * C631 + C30075 * C693) * C88 +
                    (C155 * C637 + C30075 * C699) * C77 +
                    (C155 * C632 + C30075 * C694) * C90 +
                    (C155 * C638 + C30075 * C700) * C78 +
                    (C155 * C633 + C30075 * C695) * C92 +
                    (C155 * C639 + C30075 * C701) * C79) *
                       C30090 * C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q));
    d2eexz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C222 * C93 + C30090 * C223) * C88 +
                    (C222 * C98 + C30090 * C228) * C77 + C246 * C90 +
                    C247 * C78 + C248 * C92 + C249 * C79) *
                       C30075 * C30030 * C30016 * C84 -
                   (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                    C247 * C77 + C246 * C88) *
                       C30075 * C30030 * C30016 * C85 +
                   (C248 * C88 + C249 * C77 + C251 * C90 + C250 * C78 +
                    (C222 * C97 + C30090 * C227) * C92 +
                    (C222 * C102 + C30090 * C232) * C79) *
                       C30075 * C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C222 * C93 + C30090 * C223) * C88 +
                    (C222 * C98 + C30090 * C228) * C77 + C246 * C90 +
                    C247 * C78 + C248 * C92 + C249 * C79) *
                       C30075 * C30030 * C624 -
                   ((C222 * C634 + C30090 * C746) * C79 +
                    (C222 * C628 + C30090 * C740) * C92 +
                    (C222 * C635 + C30090 * C747) * C78 +
                    (C222 * C629 + C30090 * C741) * C90 +
                    (C222 * C636 + C30090 * C748) * C77 +
                    (C222 * C630 + C30090 * C742) * C88) *
                       C30075 * C30030 * C625 +
                   ((C222 * C631 + C30090 * C743) * C88 +
                    (C222 * C637 + C30090 * C749) * C77 +
                    (C222 * C632 + C30090 * C744) * C90 +
                    (C222 * C638 + C30090 * C750) * C78 +
                    (C222 * C633 + C30090 * C745) * C92 +
                    (C222 * C639 + C30090 * C751) * C79) *
                       C30075 * C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
                     C79 * C100) *
                        C155 +
                    (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                     C92 * C158 + C79 * C291) *
                        C30075) *
                       C30090 * C30030 * C30016 * C84 -
                   ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                     C88 * C157 + C77 * C290) *
                        C30075 +
                    (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                     C88 * C94 + C77 * C99) *
                        C155) *
                       C30090 * C30030 * C30016 * C85 +
                   ((C88 * C95 + C77 * C100 + C90 * C96 + C78 * C101 +
                     C92 * C97 + C79 * C102) *
                        C155 +
                    (C88 * C158 + C77 * C291 + C90 * C159 + C78 * C292 +
                     C92 * C160 + C79 * C293) *
                        C30075) *
                       C30090 * C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
                     C79 * C100) *
                        C155 +
                    (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                     C92 * C158 + C79 * C291) *
                        C30075) *
                       C30090 * C30030 * C624 -
                   ((C92 * C690 + C79 * C790 + C90 * C691 + C78 * C791 +
                     C88 * C692 + C77 * C792) *
                        C30075 +
                    (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                     C88 * C630 + C77 * C636) *
                        C155) *
                       C30090 * C30030 * C625 +
                   ((C88 * C631 + C77 * C637 + C90 * C632 + C78 * C638 +
                     C92 * C633 + C79 * C639) *
                        C155 +
                    (C88 * C693 + C77 * C793 + C90 * C694 + C78 * C794 +
                     C92 * C695 + C79 * C795) *
                        C30075) *
                       C30090 * C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C332 * C93 + C339 + C339 + C30075 * C333) * C77 +
                    C356 * C78 + C357 * C79) *
                       C30090 * C30030 * C30016 * C84 -
                   (C358 * C79 + C357 * C78 + C356 * C77) * C30090 * C30030 *
                       C30016 * C85 +
                   (C357 * C77 + C358 * C78 +
                    (C332 * C97 + C349 + C349 + C30075 * C337) * C79) *
                       C30090 * C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C332 * C93 + C339 + C339 + C30075 * C333) * C77 +
                    C356 * C78 + C357 * C79) *
                       C30090 * C30030 * C624 -
                   ((C332 * C628 + C841 + C841 + C30075 * C834) * C79 +
                    (C332 * C629 + C842 + C842 + C30075 * C835) * C78 +
                    (C332 * C630 + C843 + C843 + C30075 * C836) * C77) *
                       C30090 * C30030 * C625 +
                   ((C332 * C631 + C844 + C844 + C30075 * C837) * C77 +
                    (C332 * C632 + C845 + C845 + C30075 * C838) * C78 +
                    (C332 * C633 + C846 + C846 + C30075 * C839) * C79) *
                       C30090 * C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C155 +
            (C222 * C156 + C30090 * C396) * C30075) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C30030 * C30016 * C84 -
          ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
              C30030 * C30016 * C85 +
          (C417 * C77 + (C410 + C416) * C78 +
           ((C222 * C97 + C30090 * C227) * C155 +
            (C222 * C160 + C30090 * C400) * C30075) *
               C79) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C155 +
            (C222 * C156 + C30090 * C396) * C30075) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C30030 * C624 -
          (((C222 * C690 + C30090 * C884) * C30075 +
            (C222 * C628 + C30090 * C740) * C155) *
               C79 +
           ((C222 * C691 + C30090 * C885) * C30075 +
            (C222 * C629 + C30090 * C741) * C155) *
               C78 +
           ((C222 * C692 + C30090 * C886) * C30075 +
            (C222 * C630 + C30090 * C742) * C155) *
               C77) *
              C30030 * C625 +
          (((C222 * C631 + C30090 * C743) * C155 +
            (C222 * C693 + C30090 * C887) * C30075) *
               C77 +
           ((C222 * C632 + C30090 * C744) * C155 +
            (C222 * C694 + C30090 * C888) * C30075) *
               C78 +
           ((C222 * C633 + C30090 * C745) * C155 +
            (C222 * C695 + C30090 * C889) * C30075) *
               C79) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
                     C79 * C100) *
                        C222 +
                    (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                     C92 * C225 + C79 * C457) *
                        C30090) *
                       C30075 * C30030 * C30016 * C84 -
                   ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                     C88 * C224 + C77 * C456) *
                        C30090 +
                    (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                     C88 * C94 + C77 * C99) *
                        C222) *
                       C30075 * C30030 * C30016 * C85 +
                   ((C88 * C95 + C77 * C100 + C90 * C96 + C78 * C101 +
                     C92 * C97 + C79 * C102) *
                        C222 +
                    (C88 * C225 + C77 * C457 + C90 * C226 + C78 * C458 +
                     C92 * C227 + C79 * C459) *
                        C30090) *
                       C30075 * C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
                     C79 * C100) *
                        C222 +
                    (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                     C92 * C225 + C79 * C457) *
                        C30090) *
                       C30075 * C30030 * C624 -
                   ((C92 * C740 + C79 * C928 + C90 * C741 + C78 * C929 +
                     C88 * C742 + C77 * C930) *
                        C30090 +
                    (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                     C88 * C630 + C77 * C636) *
                        C222) *
                       C30075 * C30030 * C625 +
                   ((C88 * C631 + C77 * C637 + C90 * C632 + C78 * C638 +
                     C92 * C633 + C79 * C639) *
                        C222 +
                    (C88 * C743 + C77 * C931 + C90 * C744 + C78 * C932 +
                     C92 * C745 + C79 * C933) *
                        C30090) *
                       C30075 * C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C222 +
            (C155 * C223 + C30075 * C498) * C30090) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C30030 * C30016 * C84 -
          ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
              C30030 * C30016 * C85 +
          (C519 * C77 + (C512 + C518) * C78 +
           ((C155 * C97 + C30075 * C160) * C222 +
            (C155 * C227 + C30075 * C502) * C30090) *
               C79) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C222 +
            (C155 * C223 + C30075 * C498) * C30090) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C30030 * C624 -
          (((C155 * C740 + C30075 * C972) * C30090 +
            (C155 * C628 + C30075 * C690) * C222) *
               C79 +
           ((C155 * C741 + C30075 * C973) * C30090 +
            (C155 * C629 + C30075 * C691) * C222) *
               C78 +
           ((C155 * C742 + C30075 * C974) * C30090 +
            (C155 * C630 + C30075 * C692) * C222) *
               C77) *
              C30030 * C625 +
          (((C155 * C631 + C30075 * C693) * C222 +
            (C155 * C743 + C30075 * C975) * C30090) *
               C77 +
           ((C155 * C632 + C30075 * C694) * C222 +
            (C155 * C744 + C30075 * C976) * C30090) *
               C78 +
           ((C155 * C633 + C30075 * C695) * C222 +
            (C155 * C745 + C30075 * C977) * C30090) *
               C79) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C30090 * C558) * C30075 * C77 +
           C584 * C78 + C585 * C79) *
              C30030 * C30016 * C84 -
          (C586 * C79 + C585 * C78 + C584 * C77) * C30030 * C30016 * C85 +
          (C585 * C77 + C586 * C78 +
           (C557 * C97 + C574 + C574 + C30090 * C562) * C30075 * C79) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C30090 * C558) * C30075 * C77 +
           C584 * C78 + C585 * C79) *
              C30030 * C624 -
          ((C557 * C628 + C1023 + C1023 + C30090 * C1016) * C30075 * C79 +
           (C557 * C629 + C1024 + C1024 + C30090 * C1017) * C30075 * C78 +
           (C557 * C630 + C1025 + C1025 + C30090 * C1018) * C30075 * C77) *
              C30030 * C625 +
          ((C557 * C631 + C1026 + C1026 + C30090 * C1019) * C30075 * C77 +
           (C557 * C632 + C1027 + C1027 + C30090 * C1020) * C30075 * C78 +
           (C557 * C633 + C1028 + C1028 + C30090 * C1021) * C30075 * C79) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C3095 * C93 + C3100 + C3100 + C3091 * C103 + C3097 * C94 +
                      C3101 + C3101 + C30139 * C104) *
                         C30090 * C3093 +
                     (C3668 + C3669) * C30090 * C30146) *
                        C30030 * C1519 -
                    ((C3670 + C3671) * C30090 * C30146 +
                     (C3669 + C3668) * C30090 * C3093) *
                        C30030 * C1520) *
                       C1521 +
                   (((C4758 + C4759) * C30090 * C3093 +
                     (C3095 * C632 + C4752 + C4752 + C3091 * C644 +
                      C3097 * C633 + C4753 + C4753 + C30139 * C645) *
                         C30090 * C30146) *
                        C30030 * C1520 -
                    ((C4759 + C4758) * C30090 * C30146 +
                     (C3097 * C95 + C3106 + C3106 + C30139 * C105 +
                      C3095 * C94 + C3107 + C3107 + C3091 * C104) *
                         C30090 * C3093) *
                        C30030 * C1519) *
                       C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                C3096 +
            (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) *
                C3091 +
            (C3180 + C3181) * C3098 + (C3182 + C3183) * C30139) *
               C30090 * C30030 * C1519 -
           ((C4834 + C4835) * C30139 + (C4836 + C4837) * C3098 +
            (C3162 * C637 + C30146 * C699 + C3161 * C636 + C3093 * C698) *
                C3091 +
            (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
                C3096) *
               C30090 * C30030 * C1520) *
              C1521 +
          (((C4837 + C4836) * C3096 + (C4835 + C4834) * C3091 +
            (C3161 * C628 + C3093 * C690 + C3162 * C633 + C30146 * C695) *
                C3098 +
            (C3161 * C634 + C3093 * C696 + C3162 * C639 + C30146 * C701) *
                C30139) *
               C30090 * C30030 * C1520 -
           ((C3184 + C3185) * C30139 + (C3186 + C3187) * C3098 +
            (C3183 + C3182) * C3091 + (C3181 + C3180) * C3096) *
               C30090 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C30090 * C223) * C3096 +
             (C222 * C98 + C30090 * C228) * C3091 + C246 * C3098 +
             C247 * C30139) *
                C3093 +
            (C3800 + C3801 + C3784 + C3785) * C30146) *
               C30030 * C1519 -
           ((C3802 + C3803 + C3804 + C3805) * C30146 +
            (C3785 + C3784 + C3801 + C3800) * C3093) *
               C30030 * C1520) *
              C1521 +
          (((C4904 + C4905 + C4906 + C4907) * C3093 +
            (C3797 * C3096 + C3796 * C3091 +
             (C222 * C633 + C30090 * C745) * C3098 +
             (C222 * C639 + C30090 * C751) * C30139) *
                C30146) *
               C30030 * C1520 -
           ((C4907 + C4906 + C4905 + C4904) * C30146 +
            (C249 * C30139 + C248 * C3098 + C247 * C3091 + C246 * C3096) *
                C3093) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C3161 +
            (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
                C3093 +
            (C3874 + C3875) * C3162 + (C3876 + C3877) * C30146) *
               C30090 * C30030 * C1519 -
           ((C3878 + C3879) * C30146 + (C3880 + C3881) * C3162 +
            (C3877 + C3876) * C3093 + (C3875 + C3874) * C3161) *
               C30090 * C30030 * C1520) *
              C1521 +
          (((C4982 + C4983) * C3161 + (C4984 + C4985) * C3093 +
            (C3096 * C632 + C3091 * C638 + C3098 * C633 + C30139 * C639) *
                C3162 +
            (C3096 * C694 + C3091 * C794 + C3098 * C695 + C30139 * C795) *
                C30146) *
               C30090 * C30030 * C1520 -
           ((C4985 + C4984) * C30146 + (C4983 + C4982) * C3162 +
            (C3098 * C158 + C30139 * C291 + C3096 * C157 + C3091 * C290) *
                C3093 +
            (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C3161) *
               C30090 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C3337 * C93 + C3340 + C3340 + C3093 * C333 +
                      C3338 * C630 + C3341 + C3341 + C30146 * C836) *
                         C3091 +
                     (C3364 + C3365) * C30139) *
                        C30090 * C30030 * C1519 -
                    ((C5062 + C5063) * C30139 +
                     (C3338 * C631 + C3936 + C3936 + C30146 * C837 +
                      C3337 * C630 + C3937 + C3937 + C3093 * C836) *
                         C3091) *
                        C30090 * C30030 * C1520) *
                       C1521 +
                   (((C5063 + C5062) * C3091 +
                     (C3337 * C628 + C5056 + C5056 + C3093 * C834 +
                      C3338 * C633 + C5057 + C5057 + C30146 * C839) *
                         C30139) *
                        C30090 * C30030 * C1520 -
                    ((C3366 + C3367) * C30139 + (C3365 + C3364) * C3091) *
                        C30090 * C30030 * C1519) *
                       C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C30090 * C223) * C3161 +
             (C222 * C156 + C30090 * C396) * C3093 + C3794 * C3162 +
             C4000 * C30146) *
                C3091 +
            (C3418 + C3419 + C3420 + C3421) * C30139) *
               C30030 * C1519 -
           ((C5130 + C5131 + C5132 + C5133) * C30139 +
            (C4002 * C30146 + C3799 * C3162 + C4000 * C3093 + C3794 * C3161) *
                C3091) *
               C30030 * C1520) *
              C1521 +
          (((C5133 + C5132 + C5131 + C5130) * C3091 +
            (C1655 * C3161 + C1828 * C3093 +
             (C222 * C633 + C30090 * C745) * C3162 +
             (C222 * C695 + C30090 * C889) * C30146) *
                C30139) *
               C30030 * C1520 -
           ((C3422 + C3423 + C3424 + C3425) * C30139 +
            (C3421 + C3420 + C3419 + C3418) * C3091) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C222 +
             (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
                 C30090) *
                C3093 +
            ((C3874 + C3875) * C222 + (C4063 + C4064) * C30090) * C30146) *
               C30030 * C1519 -
           (((C4065 + C4066) * C30090 + (C3880 + C3881) * C222) * C30146 +
            ((C4064 + C4063) * C30090 + (C3875 + C3874) * C222) * C3093) *
               C30030 * C1520) *
              C1521 +
          ((((C4982 + C4983) * C222 + (C5204 + C5205) * C30090) * C3093 +
            ((C3096 * C632 + C3091 * C638 + C3098 * C633 + C30139 * C639) *
                 C222 +
             (C3096 * C744 + C3091 * C932 + C3098 * C745 + C30139 * C933) *
                 C30090) *
                C30146) *
               C30030 * C1520 -
           (((C5205 + C5204) * C30090 + (C4983 + C4982) * C222) * C30146 +
            ((C3098 * C225 + C30139 * C457 + C3096 * C224 + C3091 * C456) *
                 C30090 +
             (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C222) *
                C3093) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                 C222 +
             (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
                 C30090) *
                C3091 +
            ((C3180 + C3181) * C222 + (C3534 + C3535) * C30090) * C30139) *
               C30030 * C1519 -
           (((C5276 + C5277) * C30090 + (C4836 + C4837) * C222) * C30139 +
            ((C3162 * C743 + C30146 * C975 + C3161 * C742 + C3093 * C974) *
                 C30090 +
             (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
                 C222) *
                C3091) *
               C30030 * C1520) *
              C1521 +
          ((((C4837 + C4836) * C222 + (C5277 + C5276) * C30090) * C3091 +
            ((C3161 * C628 + C3093 * C690 + C3162 * C633 + C30146 * C695) *
                 C222 +
             (C3161 * C740 + C3093 * C972 + C3162 * C745 + C30146 * C977) *
                 C30090) *
                C30139) *
               C30030 * C1520 -
           (((C3536 + C3537) * C30090 + (C3186 + C3187) * C222) * C30139 +
            ((C3535 + C3534) * C30090 + (C3181 + C3180) * C222) * C3091) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C557 * C93 + C564 + C564 + C30090 * C558) * C3093 +
                      C4185 * C30146) *
                         C3091 +
                     (C3588 + C3589) * C30139) *
                        C30030 * C1519 -
                    ((C5344 + C5345) * C30139 +
                     (C4187 * C30146 + C4185 * C3093) * C3091) *
                        C30030 * C1520) *
                       C1521 +
                   (((C5345 + C5344) * C3091 +
                     (C2004 * C3093 +
                      (C557 * C633 + C1028 + C1028 + C30090 * C1021) * C30146) *
                         C30139) *
                        C30030 * C1520 -
                    ((C3590 + C3591) * C30139 + (C3589 + C3588) * C3091) *
                        C30030 * C1519) *
                       C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C3095 * C93 + C3100 + C3100 + C3091 * C103 + C3097 * C94 +
                      C3101 + C3101 + C30139 * C104) *
                         C30090 * C3093 +
                     (C3668 + C3669) * C30090 * C30146) *
                        C2057 -
                    ((C6076 + C6077) * C30090 * C30146 +
                     (C3097 * C1070 + C4246 + C4246 + C30139 * C1082 +
                      C3095 * C1071 + C4247 + C4247 + C3091 * C1083) *
                         C30090 * C3093) *
                        C2058) *
                       C1519 +
                   (((C6077 + C6076) * C30090 * C3093 +
                     (C3095 * C6059 + C6070 + C6070 + C3091 * C6063 +
                      C3097 * C6060 + C6071 + C6071 + C30139 * C6064) *
                         C30090 * C30146) *
                        C2058 -
                    ((C3670 + C3671) * C30090 * C30146 +
                     (C3669 + C3668) * C30090 * C3093) *
                        C2057) *
                       C1520) *
                  C30004) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                C3096 +
            (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) *
                C3091 +
            (C3180 + C3181) * C3098 + (C3182 + C3183) * C30139) *
               C30090 * C2057 -
           ((C5490 + C5491) * C30139 + (C5492 + C5493) * C3098 +
            (C3162 * C2596 + C30146 * C2658 + C3161 * C1077 + C3093 * C1139) *
                C3091 +
            (C3162 * C2593 + C30146 * C2655 + C3161 * C1071 + C3093 * C1133) *
                C3096) *
               C30090 * C2058) *
              C1519 +
          (((C3161 * C2593 + C3093 * C2655 + C3162 * C6059 + C30146 * C6143) *
                C3096 +
            (C3161 * C2596 + C3093 * C2658 + C3162 * C6061 + C30146 * C6145) *
                C3091 +
            (C3161 * C2594 + C3093 * C2656 + C3162 * C6060 + C30146 * C6144) *
                C3098 +
            (C3161 * C2597 + C3093 * C2659 + C3162 * C6062 + C30146 * C6146) *
                C30139) *
               C30090 * C2058 -
           ((C4834 + C4835) * C30139 + (C4836 + C4837) * C3098 +
            (C3162 * C637 + C30146 * C699 + C3161 * C636 + C3093 * C698) *
                C3091 +
            (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
                C3096) *
               C30090 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C222 * C93 + C30090 * C223) * C3096 +
                      (C222 * C98 + C30090 * C228) * C3091 + C246 * C3098 +
                      C247 * C30139) *
                         C3093 +
                     (C3800 + C3801 + C3784 + C3785) * C30146) *
                        C2057 -
                    ((C6218 + C6219 + C6226 + C6227) * C30146 +
                     (C2192 * C30139 + C2193 * C3098 +
                      (C222 * C1077 + C30090 * C1189) * C3091 +
                      (C222 * C1071 + C30090 * C1183) * C3096) *
                         C3093) *
                        C2058) *
                       C1519 +
                   (((C6227 + C6226 + C6219 + C6218) * C3093 +
                     ((C222 * C6059 + C30090 * C6213) * C3096 +
                      (C222 * C6061 + C30090 * C6215) * C3091 +
                      (C222 * C6060 + C30090 * C6214) * C3098 +
                      (C222 * C6062 + C30090 * C6216) * C30139) *
                         C30146) *
                        C2058 -
                    ((C3802 + C3803 + C3804 + C3805) * C30146 +
                     (C3785 + C3784 + C3801 + C3800) * C3093) *
                        C2057) *
                       C1520) *
                  C30004) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C3161 +
            (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
                C3093 +
            (C3874 + C3875) * C3162 + (C3876 + C3877) * C30146) *
               C30090 * C2057 -
           ((C6304 + C6305) * C30146 + (C6306 + C6307) * C3162 +
            (C3098 * C1132 + C30139 * C1232 + C3096 * C1133 + C3091 * C1233) *
                C3093 +
            (C3098 * C1070 + C30139 * C1076 + C3096 * C1071 + C3091 * C1077) *
                C3161) *
               C30090 * C2058) *
              C1519 +
          (((C6307 + C6306) * C3161 + (C6305 + C6304) * C3093 +
            (C3096 * C6059 + C3091 * C6061 + C3098 * C6060 + C30139 * C6062) *
                C3162 +
            (C3096 * C6143 + C3091 * C6293 + C3098 * C6144 + C30139 * C6294) *
                C30146) *
               C30090 * C2058 -
           ((C3878 + C3879) * C30146 + (C3880 + C3881) * C3162 +
            (C3877 + C3876) * C3093 + (C3875 + C3874) * C3161) *
               C30090 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C3337 * C93 + C3340 + C3340 + C3093 * C333 +
                      C3338 * C630 + C3341 + C3341 + C30146 * C836) *
                         C3091 +
                     (C3364 + C3365) * C30139) *
                        C30090 * C2057 -
                    ((C5708 + C5709) * C30139 +
                     (C3338 * C2593 + C4466 + C4466 + C30146 * C2820 +
                      C3337 * C1071 + C4467 + C4467 + C3093 * C1277) *
                         C3091) *
                        C30090 * C2058) *
                       C1519 +
                   (((C3337 * C2593 + C6376 + C6376 + C3093 * C2820 +
                      C3338 * C6059 + C6377 + C6377 + C30146 * C6373) *
                         C3091 +
                     (C3337 * C2594 + C6378 + C6378 + C3093 * C2821 +
                      C3338 * C6060 + C6379 + C6379 + C30146 * C6374) *
                         C30139) *
                        C30090 * C2058 -
                    ((C5062 + C5063) * C30139 +
                     (C3338 * C631 + C3936 + C3936 + C30146 * C837 +
                      C3337 * C630 + C3937 + C3937 + C3093 * C836) *
                         C3091) *
                        C30090 * C2057) *
                       C1520) *
                  C30004) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C30090 * C223) * C3161 +
             (C222 * C156 + C30090 * C396) * C3093 + C3794 * C3162 +
             C4000 * C30146) *
                C3091 +
            (C3418 + C3419 + C3420 + C3421) * C30139) *
               C2057 -
           ((C5782 + C5778 + C5779 + C5780) * C30139 +
            (C6450 * C30146 + C6225 * C3162 +
             (C222 * C1133 + C30090 * C1327) * C3093 +
             (C222 * C1071 + C30090 * C1183) * C3161) *
                C3091) *
               C2058) *
              C1519 +
          (((C6225 * C3161 + C6450 * C3093 +
             (C222 * C6059 + C30090 * C6213) * C3162 +
             (C222 * C6143 + C30090 * C6445) * C30146) *
                C3091 +
            (C5565 * C3161 + C5781 * C3093 +
             (C222 * C6060 + C30090 * C6214) * C3162 +
             (C222 * C6144 + C30090 * C6446) * C30146) *
                C30139) *
               C2058 -
           ((C5130 + C5131 + C5132 + C5133) * C30139 +
            (C4002 * C30146 + C3799 * C3162 + C4000 * C3093 + C3794 * C3161) *
                C3091) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C222 +
             (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
                 C30090) *
                C3093 +
            ((C3874 + C3875) * C222 + (C4063 + C4064) * C30090) * C30146) *
               C2057 -
           (((C6523 + C6524) * C30090 + (C6306 + C6307) * C222) * C30146 +
            ((C3098 * C1182 + C30139 * C1370 + C3096 * C1183 + C3091 * C1371) *
                 C30090 +
             (C3098 * C1070 + C30139 * C1076 + C3096 * C1071 + C3091 * C1077) *
                 C222) *
                C3093) *
               C2058) *
              C1519 +
          ((((C6307 + C6306) * C222 + (C6524 + C6523) * C30090) * C3093 +
            ((C3096 * C6059 + C3091 * C6061 + C3098 * C6060 + C30139 * C6062) *
                 C222 +
             (C3096 * C6213 + C3091 * C6516 + C3098 * C6214 + C30139 * C6517) *
                 C30090) *
                C30146) *
               C2058 -
           (((C4065 + C4066) * C30090 + (C3880 + C3881) * C222) * C30146 +
            ((C4064 + C4063) * C30090 + (C3875 + C3874) * C222) * C3093) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                 C222 +
             (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
                 C30090) *
                C3091 +
            ((C3180 + C3181) * C222 + (C3534 + C3535) * C30090) * C30139) *
               C2057 -
           (((C5919 + C5920) * C30090 + (C5492 + C5493) * C222) * C30139 +
            ((C3162 * C2711 + C30146 * C2982 + C3161 * C1183 + C3093 * C1415) *
                 C30090 +
             (C3162 * C2593 + C30146 * C2655 + C3161 * C1071 + C3093 * C1133) *
                 C222) *
                C3091) *
               C2058) *
              C1519 +
          ((((C3161 * C2593 + C3093 * C2655 + C3162 * C6059 + C30146 * C6143) *
                 C222 +
             (C3161 * C2711 + C3093 * C2982 + C3162 * C6213 + C30146 * C6590) *
                 C30090) *
                C3091 +
            ((C3161 * C2594 + C3093 * C2656 + C3162 * C6060 + C30146 * C6144) *
                 C222 +
             (C3161 * C2712 + C3093 * C2983 + C3162 * C6214 + C30146 * C6591) *
                 C30090) *
                C30139) *
               C2058 -
           (((C5276 + C5277) * C30090 + (C4836 + C4837) * C222) * C30139 +
            ((C3162 * C743 + C30146 * C975 + C3161 * C742 + C3093 * C974) *
                 C30090 +
             (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
                 C222) *
                C3091) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C557 * C93 + C564 + C564 + C30090 * C558) * C3093 +
             C4185 * C30146) *
                C3091 +
            (C3588 + C3589) * C30139) *
               C2057 -
           ((C5993 + C5989) * C30139 +
            (C6667 * C30146 +
             (C557 * C1071 + C1466 + C1466 + C30090 * C1459) * C3093) *
                C3091) *
               C2058) *
              C1519 +
          (((C6667 * C3093 +
             (C557 * C6059 + C6663 + C6663 + C30090 * C6658) * C30146) *
                C3091 +
            (C5992 * C3093 +
             (C557 * C6060 + C6664 + C6664 + C30090 * C6659) * C30146) *
                C30139) *
               C2058 -
           ((C5344 + C5345) * C30139 +
            (C4187 * C30146 + C4185 * C3093) * C3091) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] += (-std::pow(Pi, 2.5) *
                  (((C3095 * C93 + C3100 + C3100 + C3091 * C103 + C3097 * C94 +
                     C3101 + C3101 + C30139 * C104) *
                        C30090 * C3093 +
                    (C3668 + C3669) * C30090 * C30146) *
                       C30030 * C624 -
                   ((C3670 + C3671) * C30090 * C30146 +
                    (C3669 + C3668) * C30090 * C3093) *
                       C30030 * C625 +
                   ((C3671 + C3670) * C30090 * C3093 +
                    (C3095 * C3641 + C3658 + C3658 + C3091 * C3645 +
                     C3097 * C3642 + C3659 + C3659 + C30139 * C3646) *
                        C30090 * C30146) *
                       C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C3095 * C93 + C3100 + C3100 + C3091 * C103 + C3097 * C94 +
                     C3101 + C3101 + C30139 * C104) *
                        C30090 * C3093 +
                    (C3095 * C630 + C3102 + C3102 + C3091 * C642 +
                     C3097 * C629 + C3103 + C3103 + C30139 * C641) *
                        C30090 * C30146) *
                       C30030 * C30016 * C84 -
                   ((C3097 * C628 + C3104 + C3104 + C30139 * C640 +
                     C3095 * C629 + C3105 + C3105 + C3091 * C641) *
                        C30090 * C30146 +
                    (C3097 * C95 + C3106 + C3106 + C30139 * C105 + C3095 * C94 +
                     C3107 + C3107 + C3091 * C104) *
                        C30090 * C3093) *
                       C30030 * C30016 * C85 +
                   ((C3095 * C95 + C3108 + C3108 + C3091 * C105 + C3097 * C96 +
                     C3109 + C3109 + C30139 * C106) *
                        C30090 * C3093 +
                    (C3095 * C628 + C3110 + C3110 + C3091 * C640 +
                     C3097 * C1523 + C3111 + C3111 + C30139 * C1525) *
                        C30090 * C30146) *
                       C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C3095 * C93 + C3100 + C3100 + C3091 * C103 + C3097 * C94 +
                     C3101 + C3101 + C30139 * C104) *
                        C30090 * C3093 +
                    (C3668 + C3669) * C30090 * C30146) *
                       C1066 -
                   ((C3097 * C2594 + C4244 + C4244 + C30139 * C2600 +
                     C3095 * C2593 + C4245 + C4245 + C3091 * C2599) *
                        C30090 * C30146 +
                    (C3097 * C1070 + C4246 + C4246 + C30139 * C1082 +
                     C3095 * C1071 + C4247 + C4247 + C3091 * C1083) *
                        C30090 * C3093) *
                       C1067 +
                   ((C3095 * C1072 + C4248 + C4248 + C3091 * C1084 +
                     C3097 * C1073 + C4249 + C4249 + C30139 * C1085) *
                        C30090 * C3093 +
                    (C3095 * C4237 + C4250 + C4250 + C3091 * C4241 +
                     C3097 * C4238 + C4251 + C4251 + C30139 * C4242) *
                        C30090 * C30146) *
                       C1068) *
                  C30016 * C30004) /
                     (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) * C3096 +
           (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) * C3091 +
           (C3180 + C3181) * C3098 + (C3182 + C3183) * C30139) *
              C30090 * C30030 * C624 -
          ((C3162 * C638 + C30146 * C700 + C3161 * C635 + C3093 * C697) *
               C30139 +
           (C3162 * C632 + C30146 * C694 + C3161 * C629 + C3093 * C691) *
               C3098 +
           (C3162 * C637 + C30146 * C699 + C3161 * C636 + C3093 * C698) *
               C3091 +
           (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
               C3096) *
              C30090 * C30030 * C625 +
          ((C3161 * C631 + C3093 * C693 + C3162 * C3641 + C30146 * C3721) *
               C3096 +
           (C3161 * C637 + C3093 * C699 + C3162 * C3643 + C30146 * C3723) *
               C3091 +
           (C3161 * C632 + C3093 * C694 + C3162 * C3642 + C30146 * C3722) *
               C3098 +
           (C3161 * C638 + C3093 * C700 + C3162 * C3644 + C30146 * C3724) *
               C30139) *
              C30090 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) * C3096 +
           (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) * C3091 +
           (C3180 + C3181) * C3098 + (C3182 + C3183) * C30139) *
              C30090 * C30030 * C30016 * C84 -
          ((C3184 + C3185) * C30139 + (C3186 + C3187) * C3098 +
           (C3183 + C3182) * C3091 + (C3181 + C3180) * C3096) *
              C30090 * C30030 * C30016 * C85 +
          ((C3187 + C3186) * C3096 + (C3185 + C3184) * C3091 +
           (C3161 * C96 + C3093 * C159 + C3162 * C1523 + C30146 * C1579) *
               C3098 +
           (C3161 * C101 + C3093 * C164 + C3162 * C1524 + C30146 * C1580) *
               C30139) *
              C30090 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) * C3096 +
           (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) * C3091 +
           (C3180 + C3181) * C3098 + (C3182 + C3183) * C30139) *
              C30090 * C1066 -
          ((C3162 * C2597 + C30146 * C2659 + C3161 * C1076 + C3093 * C1138) *
               C30139 +
           (C3162 * C2594 + C30146 * C2656 + C3161 * C1070 + C3093 * C1132) *
               C3098 +
           (C3162 * C2596 + C30146 * C2658 + C3161 * C1077 + C3093 * C1139) *
               C3091 +
           (C3162 * C2593 + C30146 * C2655 + C3161 * C1071 + C3093 * C1133) *
               C3096) *
              C30090 * C1067 +
          ((C3161 * C1072 + C3093 * C1134 + C3162 * C4237 + C30146 * C4301) *
               C3096 +
           (C3161 * C1078 + C3093 * C1140 + C3162 * C4239 + C30146 * C4303) *
               C3091 +
           (C3161 * C1073 + C3093 * C1135 + C3162 * C4238 + C30146 * C4302) *
               C3098 +
           (C3161 * C1079 + C3093 * C1141 + C3162 * C4240 + C30146 * C4304) *
               C30139) *
              C30090 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C3096 +
            (C222 * C98 + C30090 * C228) * C3091 + C246 * C3098 +
            C247 * C30139) *
               C3093 +
           (C3800 + C3801 + C3784 + C3785) * C30146) *
              C30030 * C624 -
          ((C3802 + C3803 + C3804 + C3805) * C30146 +
           (C3785 + C3784 + C3801 + C3800) * C3093) *
              C30030 * C625 +
          ((C3805 + C3804 + C3803 + C3802) * C3093 +
           ((C222 * C3641 + C30090 * C3775) * C3096 +
            (C222 * C3643 + C30090 * C3777) * C3091 +
            (C222 * C3642 + C30090 * C3776) * C3098 +
            (C222 * C3644 + C30090 * C3778) * C30139) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C3096 +
            (C222 * C98 + C30090 * C228) * C3091 + C246 * C3098 +
            C247 * C30139) *
               C3093 +
           ((C222 * C630 + C30090 * C742) * C3096 +
            (C222 * C636 + C30090 * C748) * C3091 + C1657 * C3098 +
            C1656 * C30139) *
               C30146) *
              C30030 * C30016 * C84 -
          ((C1654 * C30139 + C1655 * C3098 + C1656 * C3091 + C1657 * C3096) *
               C30146 +
           (C249 * C30139 + C248 * C3098 + C247 * C3091 + C246 * C3096) *
               C3093) *
              C30030 * C30016 * C85 +
          ((C248 * C3096 + C249 * C3091 + C251 * C3098 + C250 * C30139) *
               C3093 +
           (C1655 * C3096 + C1654 * C3091 +
            (C222 * C1523 + C30090 * C1643) * C3098 +
            (C222 * C1524 + C30090 * C1644) * C30139) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C3096 +
            (C222 * C98 + C30090 * C228) * C3091 + C246 * C3098 +
            C247 * C30139) *
               C3093 +
           (C3800 + C3801 + C3784 + C3785) * C30146) *
              C1066 -
          (((C222 * C2597 + C30090 * C2715) * C30139 +
            (C222 * C2594 + C30090 * C2712) * C3098 +
            (C222 * C2596 + C30090 * C2714) * C3091 +
            (C222 * C2593 + C30090 * C2711) * C3096) *
               C30146 +
           (C2192 * C30139 + C2193 * C3098 +
            (C222 * C1077 + C30090 * C1189) * C3091 +
            (C222 * C1071 + C30090 * C1183) * C3096) *
               C3093) *
              C1067 +
          (((C222 * C1072 + C30090 * C1184) * C3096 +
            (C222 * C1078 + C30090 * C1190) * C3091 +
            (C222 * C1073 + C30090 * C1185) * C3098 +
            (C222 * C1079 + C30090 * C1191) * C30139) *
               C3093 +
           ((C222 * C4237 + C30090 * C4355) * C3096 +
            (C222 * C4239 + C30090 * C4357) * C3091 +
            (C222 * C4238 + C30090 * C4356) * C3098 +
            (C222 * C4240 + C30090 * C4358) * C30139) *
               C30146) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C3161 +
           (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
               C3093 +
           (C3874 + C3875) * C3162 + (C3876 + C3877) * C30146) *
              C30090 * C30030 * C624 -
          ((C3878 + C3879) * C30146 + (C3880 + C3881) * C3162 +
           (C3877 + C3876) * C3093 + (C3875 + C3874) * C3161) *
              C30090 * C30030 * C625 +
          ((C3881 + C3880) * C3161 + (C3879 + C3878) * C3093 +
           (C3096 * C3641 + C3091 * C3643 + C3098 * C3642 + C30139 * C3644) *
               C3162 +
           (C3096 * C3721 + C3091 * C3855 + C3098 * C3722 + C30139 * C3856) *
               C30146) *
              C30090 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C3161 +
           (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
               C3093 +
           (C3096 * C630 + C3091 * C636 + C3098 * C629 + C30139 * C635) *
               C3162 +
           (C3096 * C692 + C3091 * C792 + C3098 * C691 + C30139 * C791) *
               C30146) *
              C30090 * C30030 * C30016 * C84 -
          ((C3098 * C690 + C30139 * C790 + C3096 * C691 + C3091 * C791) *
               C30146 +
           (C3098 * C628 + C30139 * C634 + C3096 * C629 + C3091 * C635) *
               C3162 +
           (C3098 * C158 + C30139 * C291 + C3096 * C157 + C3091 * C290) *
               C3093 +
           (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C3161) *
              C30090 * C30030 * C30016 * C85 +
          ((C3096 * C95 + C3091 * C100 + C3098 * C96 + C30139 * C101) * C3161 +
           (C3096 * C158 + C3091 * C291 + C3098 * C159 + C30139 * C292) *
               C3093 +
           (C3096 * C628 + C3091 * C634 + C3098 * C1523 + C30139 * C1524) *
               C3162 +
           (C3096 * C690 + C3091 * C790 + C3098 * C1579 + C30139 * C1707) *
               C30146) *
              C30090 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C3161 +
           (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
               C3093 +
           (C3874 + C3875) * C3162 + (C3876 + C3877) * C30146) *
              C30090 * C1066 -
          ((C3098 * C2656 + C30139 * C2768 + C3096 * C2655 + C3091 * C2767) *
               C30146 +
           (C3098 * C2594 + C30139 * C2597 + C3096 * C2593 + C3091 * C2596) *
               C3162 +
           (C3098 * C1132 + C30139 * C1232 + C3096 * C1133 + C3091 * C1233) *
               C3093 +
           (C3098 * C1070 + C30139 * C1076 + C3096 * C1071 + C3091 * C1077) *
               C3161) *
              C30090 * C1067 +
          ((C3096 * C1072 + C3091 * C1078 + C3098 * C1073 + C30139 * C1079) *
               C3161 +
           (C3096 * C1134 + C3091 * C1234 + C3098 * C1135 + C30139 * C1235) *
               C3093 +
           (C3096 * C4237 + C3091 * C4239 + C3098 * C4238 + C30139 * C4240) *
               C3162 +
           (C3096 * C4301 + C3091 * C4409 + C3098 * C4302 + C30139 * C4410) *
               C30146) *
              C30090 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] += (-std::pow(Pi, 2.5) *
                  (((C3337 * C93 + C3340 + C3340 + C3093 * C333 + C3338 * C630 +
                     C3341 + C3341 + C30146 * C836) *
                        C3091 +
                    (C3364 + C3365) * C30139) *
                       C30090 * C30030 * C624 -
                   ((C3338 * C632 + C3934 + C3934 + C30146 * C838 +
                     C3337 * C629 + C3935 + C3935 + C3093 * C835) *
                        C30139 +
                    (C3338 * C631 + C3936 + C3936 + C30146 * C837 +
                     C3337 * C630 + C3937 + C3937 + C3093 * C836) *
                        C3091) *
                       C30090 * C30030 * C625 +
                   ((C3337 * C631 + C3938 + C3938 + C3093 * C837 +
                     C3338 * C3641 + C3939 + C3939 + C30146 * C3931) *
                        C3091 +
                    (C3337 * C632 + C3940 + C3940 + C3093 * C838 +
                     C3338 * C3642 + C3941 + C3941 + C30146 * C3932) *
                        C30139) *
                       C30090 * C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C3337 * C93 + C3340 + C3340 + C3093 * C333 + C3338 * C630 +
                     C3341 + C3341 + C30146 * C836) *
                        C3091 +
                    (C3364 + C3365) * C30139) *
                       C30090 * C30030 * C30016 * C84 -
                   ((C3366 + C3367) * C30139 + (C3365 + C3364) * C3091) *
                       C30090 * C30030 * C30016 * C85 +
                   ((C3367 + C3366) * C3091 +
                    (C3337 * C96 + C3354 + C3354 + C3093 * C336 +
                     C3338 * C1523 + C3355 + C3355 + C30146 * C1758) *
                        C30139) *
                       C30090 * C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C3337 * C93 + C3340 + C3340 + C3093 * C333 + C3338 * C630 +
                     C3341 + C3341 + C30146 * C836) *
                        C3091 +
                    (C3364 + C3365) * C30139) *
                       C30090 * C1066 -
                   ((C3338 * C2594 + C4464 + C4464 + C30146 * C2821 +
                     C3337 * C1070 + C4465 + C4465 + C3093 * C1276) *
                        C30139 +
                    (C3338 * C2593 + C4466 + C4466 + C30146 * C2820 +
                     C3337 * C1071 + C4467 + C4467 + C3093 * C1277) *
                        C3091) *
                       C30090 * C1067 +
                   ((C3337 * C1072 + C4468 + C4468 + C3093 * C1278 +
                     C3338 * C4237 + C4469 + C4469 + C30146 * C4461) *
                        C3091 +
                    (C3337 * C1073 + C4470 + C4470 + C3093 * C1279 +
                     C3338 * C4238 + C4471 + C4471 + C30146 * C4462) *
                        C30139) *
                       C30090 * C1068) *
                  C30016 * C30004) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C3161 +
            (C222 * C156 + C30090 * C396) * C3093 + C3794 * C3162 +
            C4000 * C30146) *
               C3091 +
           (C3418 + C3419 + C3420 + C3421) * C30139) *
              C30030 * C624 -
          ((C4001 * C30146 + C3797 * C3162 + C1829 * C3093 + C1657 * C3161) *
               C30139 +
           (C4002 * C30146 + C3799 * C3162 + C4000 * C3093 + C3794 * C3161) *
               C3091) *
              C30030 * C625 +
          ((C3799 * C3161 + C4002 * C3093 +
            (C222 * C3641 + C30090 * C3775) * C3162 +
            (C222 * C3721 + C30090 * C3991) * C30146) *
               C3091 +
           (C3797 * C3161 + C4001 * C3093 +
            (C222 * C3642 + C30090 * C3776) * C3162 +
            (C222 * C3722 + C30090 * C3992) * C30146) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C222 * C93 + C30090 * C223) * C3161 +
                                (C222 * C156 + C30090 * C396) * C3093 +
                                (C222 * C630 + C30090 * C742) * C3162 +
                                (C222 * C692 + C30090 * C886) * C30146) *
                                   C3091 +
                               (C3418 + C3419 + C3420 + C3421) * C30139) *
                                  C30030 * C30016 * C84 -
                              ((C3422 + C3423 + C3424 + C3425) * C30139 +
                               (C3421 + C3420 + C3419 + C3418) * C3091) *
                                  C30030 * C30016 * C85 +
                              ((C3425 + C3424 + C3423 + C3422) * C3091 +
                               (C251 * C3161 + C413 * C3093 +
                                (C222 * C1523 + C30090 * C1643) * C3162 +
                                (C222 * C1579 + C30090 * C1820) * C30146) *
                                   C30139) *
                                  C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C3161 +
            (C222 * C156 + C30090 * C396) * C3093 + C3794 * C3162 +
            C4000 * C30146) *
               C3091 +
           (C3418 + C3419 + C3420 + C3421) * C30139) *
              C1066 -
          (((C222 * C2656 + C30090 * C2877) * C30146 +
            (C222 * C2594 + C30090 * C2712) * C3162 + C2365 * C3093 +
            C2193 * C3161) *
               C30139 +
           ((C222 * C2655 + C30090 * C2876) * C30146 +
            (C222 * C2593 + C30090 * C2711) * C3162 +
            (C222 * C1133 + C30090 * C1327) * C3093 +
            (C222 * C1071 + C30090 * C1183) * C3161) *
               C3091) *
              C1067 +
          (((C222 * C1072 + C30090 * C1184) * C3161 +
            (C222 * C1134 + C30090 * C1328) * C3093 +
            (C222 * C4237 + C30090 * C4355) * C3162 +
            (C222 * C4301 + C30090 * C4521) * C30146) *
               C3091 +
           ((C222 * C1073 + C30090 * C1185) * C3161 +
            (C222 * C1135 + C30090 * C1329) * C3093 +
            (C222 * C4238 + C30090 * C4356) * C3162 +
            (C222 * C4302 + C30090 * C4522) * C30146) *
               C30139) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C222 +
            (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
                C30090) *
               C3093 +
           ((C3874 + C3875) * C222 + (C4063 + C4064) * C30090) * C30146) *
              C30030 * C624 -
          (((C4065 + C4066) * C30090 + (C3880 + C3881) * C222) * C30146 +
           ((C4064 + C4063) * C30090 + (C3875 + C3874) * C222) * C3093) *
              C30030 * C625 +
          (((C3881 + C3880) * C222 + (C4066 + C4065) * C30090) * C3093 +
           ((C3096 * C3641 + C3091 * C3643 + C3098 * C3642 + C30139 * C3644) *
                C222 +
            (C3096 * C3775 + C3091 * C4052 + C3098 * C3776 + C30139 * C4053) *
                C30090) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C222 +
            (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
                C30090) *
               C3093 +
           ((C3096 * C630 + C3091 * C636 + C3098 * C629 + C30139 * C635) *
                C222 +
            (C3096 * C742 + C3091 * C930 + C3098 * C741 + C30139 * C929) *
                C30090) *
               C30146) *
              C30030 * C30016 * C84 -
          (((C3098 * C740 + C30139 * C928 + C3096 * C741 + C3091 * C929) *
                C30090 +
            (C3098 * C628 + C30139 * C634 + C3096 * C629 + C3091 * C635) *
                C222) *
               C30146 +
           ((C3098 * C225 + C30139 * C457 + C3096 * C224 + C3091 * C456) *
                C30090 +
            (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C222) *
               C3093) *
              C30030 * C30016 * C85 +
          (((C3096 * C95 + C3091 * C100 + C3098 * C96 + C30139 * C101) * C222 +
            (C3096 * C225 + C3091 * C457 + C3098 * C226 + C30139 * C458) *
                C30090) *
               C3093 +
           ((C3096 * C628 + C3091 * C634 + C3098 * C1523 + C30139 * C1524) *
                C222 +
            (C3096 * C740 + C3091 * C928 + C3098 * C1643 + C30139 * C1881) *
                C30090) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C222 +
            (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
                C30090) *
               C3093 +
           ((C3874 + C3875) * C222 + (C4063 + C4064) * C30090) * C30146) *
              C1066 -
          (((C3098 * C2712 + C30139 * C2930 + C3096 * C2711 + C3091 * C2929) *
                C30090 +
            (C3098 * C2594 + C30139 * C2597 + C3096 * C2593 + C3091 * C2596) *
                C222) *
               C30146 +
           ((C3098 * C1182 + C30139 * C1370 + C3096 * C1183 + C3091 * C1371) *
                C30090 +
            (C3098 * C1070 + C30139 * C1076 + C3096 * C1071 + C3091 * C1077) *
                C222) *
               C3093) *
              C1067 +
          (((C3096 * C1072 + C3091 * C1078 + C3098 * C1073 + C30139 * C1079) *
                C222 +
            (C3096 * C1184 + C3091 * C1372 + C3098 * C1185 + C30139 * C1373) *
                C30090) *
               C3093 +
           ((C3096 * C4237 + C3091 * C4239 + C3098 * C4238 + C30139 * C4240) *
                C222 +
            (C3096 * C4355 + C3091 * C4573 + C3098 * C4356 + C30139 * C4574) *
                C30090) *
               C30146) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) * C222 +
            (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
                C30090) *
               C3091 +
           ((C3180 + C3181) * C222 + (C3534 + C3535) * C30090) * C30139) *
              C30030 * C624 -
          (((C3162 * C744 + C30146 * C976 + C3161 * C741 + C3093 * C973) *
                C30090 +
            (C3162 * C632 + C30146 * C694 + C3161 * C629 + C3093 * C691) *
                C222) *
               C30139 +
           ((C3162 * C743 + C30146 * C975 + C3161 * C742 + C3093 * C974) *
                C30090 +
            (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
                C222) *
               C3091) *
              C30030 * C625 +
          (((C3161 * C631 + C3093 * C693 + C3162 * C3641 + C30146 * C3721) *
                C222 +
            (C3161 * C743 + C3093 * C975 + C3162 * C3775 + C30146 * C4116) *
                C30090) *
               C3091 +
           ((C3161 * C632 + C3093 * C694 + C3162 * C3642 + C30146 * C3722) *
                C222 +
            (C3161 * C744 + C3093 * C976 + C3162 * C3776 + C30146 * C4117) *
                C30090) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) * C222 +
            (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
                C30090) *
               C3091 +
           ((C3180 + C3181) * C222 + (C3534 + C3535) * C30090) * C30139) *
              C30030 * C30016 * C84 -
          (((C3536 + C3537) * C30090 + (C3186 + C3187) * C222) * C30139 +
           ((C3535 + C3534) * C30090 + (C3181 + C3180) * C222) * C3091) *
              C30030 * C30016 * C85 +
          (((C3187 + C3186) * C222 + (C3537 + C3536) * C30090) * C3091 +
           ((C3161 * C96 + C3093 * C159 + C3162 * C1523 + C30146 * C1579) *
                C222 +
            (C3161 * C226 + C3093 * C501 + C3162 * C1643 + C30146 * C1932) *
                C30090) *
               C30139) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) * C222 +
            (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
                C30090) *
               C3091 +
           ((C3180 + C3181) * C222 + (C3534 + C3535) * C30090) * C30139) *
              C1066 -
          (((C3162 * C2712 + C30146 * C2983 + C3161 * C1182 + C3093 * C1414) *
                C30090 +
            (C3162 * C2594 + C30146 * C2656 + C3161 * C1070 + C3093 * C1132) *
                C222) *
               C30139 +
           ((C3162 * C2711 + C30146 * C2982 + C3161 * C1183 + C3093 * C1415) *
                C30090 +
            (C3162 * C2593 + C30146 * C2655 + C3161 * C1071 + C3093 * C1133) *
                C222) *
               C3091) *
              C1067 +
          (((C3161 * C1072 + C3093 * C1134 + C3162 * C4237 + C30146 * C4301) *
                C222 +
            (C3161 * C1184 + C3093 * C1416 + C3162 * C4355 + C30146 * C4625) *
                C30090) *
               C3091 +
           ((C3161 * C1073 + C3093 * C1135 + C3162 * C4238 + C30146 * C4302) *
                C222 +
            (C3161 * C1185 + C3093 * C1417 + C3162 * C4356 + C30146 * C4626) *
                C30090) *
               C30139) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] += (-std::pow(Pi, 2.5) *
                  ((((C557 * C93 + C564 + C564 + C30090 * C558) * C3093 +
                     C4185 * C30146) *
                        C3091 +
                    (C3588 + C3589) * C30139) *
                       C30030 * C624 -
                   ((C4186 * C30146 + C2005 * C3093) * C30139 +
                    (C4187 * C30146 + C4185 * C3093) * C3091) *
                       C30030 * C625 +
                   ((C4187 * C3093 +
                     (C557 * C3641 + C4177 + C4177 + C30090 * C4168) * C30146) *
                        C3091 +
                    (C4186 * C3093 +
                     (C557 * C3642 + C4178 + C4178 + C30090 * C4169) * C30146) *
                        C30139) *
                       C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C557 * C93 + C564 + C564 + C30090 * C558) * C3093 +
                     (C557 * C630 + C1025 + C1025 + C30090 * C1018) * C30146) *
                        C3091 +
                    (C3588 + C3589) * C30139) *
                       C30030 * C30016 * C84 -
                   ((C3590 + C3591) * C30139 + (C3589 + C3588) * C3091) *
                       C30030 * C30016 * C85 +
                   ((C3591 + C3590) * C3091 +
                    (C583 * C3093 +
                     (C557 * C1523 + C1999 + C1999 + C30090 * C1993) * C30146) *
                        C30139) *
                       C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C557 * C93 + C564 + C564 + C30090 * C558) * C3093 +
                     C4185 * C30146) *
                        C3091 +
                    (C3588 + C3589) * C30139) *
                       C1066 -
                   (((C557 * C2594 + C3040 + C3040 + C30090 * C3036) * C30146 +
                     C2541 * C3093) *
                        C30139 +
                    ((C557 * C2593 + C3039 + C3039 + C30090 * C3035) * C30146 +
                     (C557 * C1071 + C1466 + C1466 + C30090 * C1459) * C3093) *
                        C3091) *
                       C1067 +
                   (((C557 * C1072 + C1467 + C1467 + C30090 * C1460) * C3093 +
                     (C557 * C4237 + C4680 + C4680 + C30090 * C4677) * C30146) *
                        C3091 +
                    ((C557 * C1073 + C1468 + C1468 + C30090 * C1461) * C3093 +
                     (C557 * C4238 + C4681 + C4681 + C30090 * C4678) * C30146) *
                        C30139) *
                       C1068) *
                  C30016 * C30004) /
                     (p * q * std::sqrt(p + q));
    d2eexx[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C3095 * C93 + C3100 + C3100 + C3091 * C103 + C3097 * C94 +
                      C3101 + C3101 + C30139 * C104) *
                         C30090 * C3093 +
                     (C3668 + C3669) * C30090 * C30146) *
                        C2057 -
                    ((C3097 * C2594 + C4244 + C4244 + C30139 * C2600 +
                      C3095 * C2593 + C4245 + C4245 + C3091 * C2599) *
                         C30090 * C30146 +
                     (C3097 * C1070 + C4246 + C4246 + C30139 * C1082 +
                      C3095 * C1071 + C4247 + C4247 + C3091 * C1083) *
                         C30090 * C3093) *
                        C2058) *
                       C30016 * C1521 +
                   (((C3095 * C1070 + C5412 + C5412 + C3091 * C1082 +
                      C3097 * C1069 + C5413 + C5413 + C30139 * C1081) *
                         C30090 * C3093 +
                     (C3095 * C2594 + C5414 + C5414 + C3091 * C2600 +
                      C3097 * C2595 + C5415 + C5415 + C30139 * C2601) *
                         C30090 * C30146) *
                        C2058 -
                    ((C4759 + C4758) * C30090 * C30146 +
                     (C3097 * C95 + C3106 + C3106 + C30139 * C105 +
                      C3095 * C94 + C3107 + C3107 + C3091 * C104) *
                         C30090 * C3093) *
                        C2057) *
                       C30016 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                C3096 +
            (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) *
                C3091 +
            (C3180 + C3181) * C3098 + (C3182 + C3183) * C30139) *
               C30090 * C2057 -
           ((C5490 + C5491) * C30139 + (C5492 + C5493) * C3098 +
            (C3162 * C2596 + C30146 * C2658 + C3161 * C1077 + C3093 * C1139) *
                C3091 +
            (C3162 * C2593 + C30146 * C2655 + C3161 * C1071 + C3093 * C1133) *
                C3096) *
               C30090 * C2058) *
              C30016 * C1521 +
          (((C5493 + C5492) * C3096 + (C5491 + C5490) * C3091 +
            (C3161 * C1069 + C3093 * C1131 + C3162 * C2595 + C30146 * C2657) *
                C3098 +
            (C3161 * C1075 + C3093 * C1137 + C3162 * C2598 + C30146 * C2660) *
                C30139) *
               C30090 * C2058 -
           ((C3184 + C3185) * C30139 + (C3186 + C3187) * C3098 +
            (C3183 + C3182) * C3091 + (C3181 + C3180) * C3096) *
               C30090 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C30090 * C223) * C3096 +
             (C222 * C98 + C30090 * C228) * C3091 + C246 * C3098 +
             C247 * C30139) *
                C3093 +
            (C3800 + C3801 + C3784 + C3785) * C30146) *
               C2057 -
           ((C5564 * C30139 + C5565 * C3098 +
             (C222 * C2596 + C30090 * C2714) * C3091 +
             (C222 * C2593 + C30090 * C2711) * C3096) *
                C30146 +
            (C2192 * C30139 + C2193 * C3098 +
             (C222 * C1077 + C30090 * C1189) * C3091 +
             (C222 * C1071 + C30090 * C1183) * C3096) *
                C3093) *
               C2058) *
              C30016 * C1521 +
          (((C2193 * C3096 + C2192 * C3091 + C2191 * C3098 + C2190 * C30139) *
                C3093 +
            (C5565 * C3096 + C5564 * C3091 +
             (C222 * C2595 + C30090 * C2713) * C3098 +
             (C222 * C2598 + C30090 * C2716) * C30139) *
                C30146) *
               C2058 -
           ((C4907 + C4906 + C4905 + C4904) * C30146 +
            (C249 * C30139 + C248 * C3098 + C247 * C3091 + C246 * C3096) *
                C3093) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C3161 +
            (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
                C3093 +
            (C3874 + C3875) * C3162 + (C3876 + C3877) * C30146) *
               C30090 * C2057 -
           ((C3098 * C2656 + C30139 * C2768 + C3096 * C2655 + C3091 * C2767) *
                C30146 +
            (C3098 * C2594 + C30139 * C2597 + C3096 * C2593 + C3091 * C2596) *
                C3162 +
            (C3098 * C1132 + C30139 * C1232 + C3096 * C1133 + C3091 * C1233) *
                C3093 +
            (C3098 * C1070 + C30139 * C1076 + C3096 * C1071 + C3091 * C1077) *
                C3161) *
               C30090 * C2058) *
              C30016 * C1521 +
          (((C3096 * C1070 + C3091 * C1076 + C3098 * C1069 + C30139 * C1075) *
                C3161 +
            (C3096 * C1132 + C3091 * C1232 + C3098 * C1131 + C30139 * C1231) *
                C3093 +
            (C3096 * C2594 + C3091 * C2597 + C3098 * C2595 + C30139 * C2598) *
                C3162 +
            (C3096 * C2656 + C3091 * C2768 + C3098 * C2657 + C30139 * C2769) *
                C30146) *
               C30090 * C2058 -
           ((C4985 + C4984) * C30146 + (C4983 + C4982) * C3162 +
            (C3098 * C158 + C30139 * C291 + C3096 * C157 + C3091 * C290) *
                C3093 +
            (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C3161) *
               C30090 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C3337 * C93 + C3340 + C3340 + C3093 * C333 +
                      C3338 * C630 + C3341 + C3341 + C30146 * C836) *
                         C3091 +
                     (C3364 + C3365) * C30139) *
                        C30090 * C2057 -
                    ((C5708 + C5709) * C30139 +
                     (C3338 * C2593 + C4466 + C4466 + C30146 * C2820 +
                      C3337 * C1071 + C4467 + C4467 + C3093 * C1277) *
                         C3091) *
                        C30090 * C2058) *
                       C30016 * C1521 +
                   (((C5709 + C5708) * C3091 +
                     (C3337 * C1069 + C5702 + C5702 + C3093 * C1275 +
                      C3338 * C2595 + C5703 + C5703 + C30146 * C2822) *
                         C30139) *
                        C30090 * C2058 -
                    ((C3366 + C3367) * C30139 + (C3365 + C3364) * C3091) *
                        C30090 * C2057) *
                       C30016 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C222 * C93 + C30090 * C223) * C3161 +
                      (C222 * C156 + C30090 * C396) * C3093 + C3794 * C3162 +
                      C4000 * C30146) *
                         C3091 +
                     (C3418 + C3419 + C3420 + C3421) * C30139) *
                        C2057 -
                    ((C5782 + C5778 + C5779 + C5780) * C30139 +
                     ((C222 * C2655 + C30090 * C2876) * C30146 +
                      (C222 * C2593 + C30090 * C2711) * C3162 +
                      (C222 * C1133 + C30090 * C1327) * C3093 +
                      (C222 * C1071 + C30090 * C1183) * C3161) *
                         C3091) *
                        C2058) *
                       C30016 * C1521 +
                   (((C5780 + C5779 + C5778 + C5782) * C3091 +
                     (C2191 * C3161 + C2364 * C3093 +
                      (C222 * C2595 + C30090 * C2713) * C3162 +
                      (C222 * C2657 + C30090 * C2878) * C30146) *
                         C30139) *
                        C2058 -
                    ((C3422 + C3423 + C3424 + C3425) * C30139 +
                     (C3421 + C3420 + C3419 + C3418) * C3091) *
                        C2057) *
                       C30016 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C222 +
             (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
                 C30090) *
                C3093 +
            ((C3874 + C3875) * C222 + (C4063 + C4064) * C30090) * C30146) *
               C2057 -
           (((C3098 * C2712 + C30139 * C2930 + C3096 * C2711 + C3091 * C2929) *
                 C30090 +
             (C3098 * C2594 + C30139 * C2597 + C3096 * C2593 + C3091 * C2596) *
                 C222) *
                C30146 +
            ((C3098 * C1182 + C30139 * C1370 + C3096 * C1183 + C3091 * C1371) *
                 C30090 +
             (C3098 * C1070 + C30139 * C1076 + C3096 * C1071 + C3091 * C1077) *
                 C222) *
                C3093) *
               C2058) *
              C30016 * C1521 +
          ((((C3096 * C1070 + C3091 * C1076 + C3098 * C1069 + C30139 * C1075) *
                 C222 +
             (C3096 * C1182 + C3091 * C1370 + C3098 * C1181 + C30139 * C1369) *
                 C30090) *
                C3093 +
            ((C3096 * C2594 + C3091 * C2597 + C3098 * C2595 + C30139 * C2598) *
                 C222 +
             (C3096 * C2712 + C3091 * C2930 + C3098 * C2713 + C30139 * C2931) *
                 C30090) *
                C30146) *
               C2058 -
           (((C5205 + C5204) * C30090 + (C4983 + C4982) * C222) * C30146 +
            ((C3098 * C225 + C30139 * C457 + C3096 * C224 + C3091 * C456) *
                 C30090 +
             (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C222) *
                C3093) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                 C222 +
             (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
                 C30090) *
                C3091 +
            ((C3180 + C3181) * C222 + (C3534 + C3535) * C30090) * C30139) *
               C2057 -
           (((C5919 + C5920) * C30090 + (C5492 + C5493) * C222) * C30139 +
            ((C3162 * C2711 + C30146 * C2982 + C3161 * C1183 + C3093 * C1415) *
                 C30090 +
             (C3162 * C2593 + C30146 * C2655 + C3161 * C1071 + C3093 * C1133) *
                 C222) *
                C3091) *
               C2058) *
              C30016 * C1521 +
          ((((C5493 + C5492) * C222 + (C5920 + C5919) * C30090) * C3091 +
            ((C3161 * C1069 + C3093 * C1131 + C3162 * C2595 + C30146 * C2657) *
                 C222 +
             (C3161 * C1181 + C3093 * C1413 + C3162 * C2713 + C30146 * C2984) *
                 C30090) *
                C30139) *
               C2058 -
           (((C3536 + C3537) * C30090 + (C3186 + C3187) * C222) * C30139 +
            ((C3535 + C3534) * C30090 + (C3181 + C3180) * C222) * C3091) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C557 * C93 + C564 + C564 + C30090 * C558) * C3093 +
             C4185 * C30146) *
                C3091 +
            (C3588 + C3589) * C30139) *
               C2057 -
           ((C5993 + C5989) * C30139 +
            ((C557 * C2593 + C3039 + C3039 + C30090 * C3035) * C30146 +
             (C557 * C1071 + C1466 + C1466 + C30090 * C1459) * C3093) *
                C3091) *
               C2058) *
              C30016 * C1521 +
          (((C5989 + C5993) * C3091 +
            (C2540 * C3093 +
             (C557 * C2595 + C3041 + C3041 + C30090 * C3037) * C30146) *
                C30139) *
               C2058 -
           ((C3590 + C3591) * C30139 + (C3589 + C3588) * C3091) * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C3095 * C93 + C3100 + C3100 + C3091 * C103 + C3097 * C94 +
                     C3101 + C3101 + C30139 * C104) *
                        C30090 * C3093 +
                    (C3095 * C630 + C3102 + C3102 + C3091 * C642 +
                     C3097 * C629 + C3103 + C3103 + C30139 * C641) *
                        C30090 * C30146) *
                       C30030 * C30016 * C84 -
                   ((C3097 * C628 + C3104 + C3104 + C30139 * C640 +
                     C3095 * C629 + C3105 + C3105 + C3091 * C641) *
                        C30090 * C30146 +
                    (C3097 * C95 + C3106 + C3106 + C30139 * C105 + C3095 * C94 +
                     C3107 + C3107 + C3091 * C104) *
                        C30090 * C3093) *
                       C30030 * C30016 * C85 +
                   ((C3095 * C95 + C3108 + C3108 + C3091 * C105 + C3097 * C96 +
                     C3109 + C3109 + C30139 * C106) *
                        C30090 * C3093 +
                    (C3095 * C628 + C3110 + C3110 + C3091 * C640 +
                     C3097 * C1523 + C3111 + C3111 + C30139 * C1525) *
                        C30090 * C30146) *
                       C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C3095 * C93 + C3100 + C3100 + C3091 * C103 + C3097 * C94 +
                     C3101 + C3101 + C30139 * C104) *
                        C30090 * C3093 +
                    (C3668 + C3669) * C30090 * C30146) *
                       C30030 * C624 -
                   ((C3670 + C3671) * C30090 * C30146 +
                    (C3669 + C3668) * C30090 * C3093) *
                       C30030 * C625 +
                   ((C3671 + C3670) * C30090 * C3093 +
                    (C3095 * C3641 + C3658 + C3658 + C3091 * C3645 +
                     C3097 * C3642 + C3659 + C3659 + C30139 * C3646) *
                        C30090 * C30146) *
                       C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) * C3096 +
           (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) * C3091 +
           (C3180 + C3181) * C3098 + (C3182 + C3183) * C30139) *
              C30090 * C30030 * C30016 * C84 -
          ((C3184 + C3185) * C30139 + (C3186 + C3187) * C3098 +
           (C3183 + C3182) * C3091 + (C3181 + C3180) * C3096) *
              C30090 * C30030 * C30016 * C85 +
          ((C3187 + C3186) * C3096 + (C3185 + C3184) * C3091 +
           (C3161 * C96 + C3093 * C159 + C3162 * C1523 + C30146 * C1579) *
               C3098 +
           (C3161 * C101 + C3093 * C164 + C3162 * C1524 + C30146 * C1580) *
               C30139) *
              C30090 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) * C3096 +
           (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) * C3091 +
           (C3180 + C3181) * C3098 + (C3182 + C3183) * C30139) *
              C30090 * C30030 * C624 -
          ((C3162 * C638 + C30146 * C700 + C3161 * C635 + C3093 * C697) *
               C30139 +
           (C3162 * C632 + C30146 * C694 + C3161 * C629 + C3093 * C691) *
               C3098 +
           (C3162 * C637 + C30146 * C699 + C3161 * C636 + C3093 * C698) *
               C3091 +
           (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
               C3096) *
              C30090 * C30030 * C625 +
          ((C3161 * C631 + C3093 * C693 + C3162 * C3641 + C30146 * C3721) *
               C3096 +
           (C3161 * C637 + C3093 * C699 + C3162 * C3643 + C30146 * C3723) *
               C3091 +
           (C3161 * C632 + C3093 * C694 + C3162 * C3642 + C30146 * C3722) *
               C3098 +
           (C3161 * C638 + C3093 * C700 + C3162 * C3644 + C30146 * C3724) *
               C30139) *
              C30090 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C3096 +
            (C222 * C98 + C30090 * C228) * C3091 + C246 * C3098 +
            C247 * C30139) *
               C3093 +
           ((C222 * C630 + C30090 * C742) * C3096 +
            (C222 * C636 + C30090 * C748) * C3091 + C1657 * C3098 +
            C1656 * C30139) *
               C30146) *
              C30030 * C30016 * C84 -
          ((C1654 * C30139 + C1655 * C3098 + C1656 * C3091 + C1657 * C3096) *
               C30146 +
           (C249 * C30139 + C248 * C3098 + C247 * C3091 + C246 * C3096) *
               C3093) *
              C30030 * C30016 * C85 +
          ((C248 * C3096 + C249 * C3091 + C251 * C3098 + C250 * C30139) *
               C3093 +
           (C1655 * C3096 + C1654 * C3091 +
            (C222 * C1523 + C30090 * C1643) * C3098 +
            (C222 * C1524 + C30090 * C1644) * C30139) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C3096 +
            (C222 * C98 + C30090 * C228) * C3091 + C246 * C3098 +
            C247 * C30139) *
               C3093 +
           (C3800 + C3801 + C3784 + C3785) * C30146) *
              C30030 * C624 -
          ((C3802 + C3803 + C3804 + C3805) * C30146 +
           (C3785 + C3784 + C3801 + C3800) * C3093) *
              C30030 * C625 +
          ((C3805 + C3804 + C3803 + C3802) * C3093 +
           ((C222 * C3641 + C30090 * C3775) * C3096 +
            (C222 * C3643 + C30090 * C3777) * C3091 +
            (C222 * C3642 + C30090 * C3776) * C3098 +
            (C222 * C3644 + C30090 * C3778) * C30139) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C3161 +
           (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
               C3093 +
           (C3096 * C630 + C3091 * C636 + C3098 * C629 + C30139 * C635) *
               C3162 +
           (C3096 * C692 + C3091 * C792 + C3098 * C691 + C30139 * C791) *
               C30146) *
              C30090 * C30030 * C30016 * C84 -
          ((C3098 * C690 + C30139 * C790 + C3096 * C691 + C3091 * C791) *
               C30146 +
           (C3098 * C628 + C30139 * C634 + C3096 * C629 + C3091 * C635) *
               C3162 +
           (C3098 * C158 + C30139 * C291 + C3096 * C157 + C3091 * C290) *
               C3093 +
           (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C3161) *
              C30090 * C30030 * C30016 * C85 +
          ((C3096 * C95 + C3091 * C100 + C3098 * C96 + C30139 * C101) * C3161 +
           (C3096 * C158 + C3091 * C291 + C3098 * C159 + C30139 * C292) *
               C3093 +
           (C3096 * C628 + C3091 * C634 + C3098 * C1523 + C30139 * C1524) *
               C3162 +
           (C3096 * C690 + C3091 * C790 + C3098 * C1579 + C30139 * C1707) *
               C30146) *
              C30090 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C3161 +
           (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
               C3093 +
           (C3874 + C3875) * C3162 + (C3876 + C3877) * C30146) *
              C30090 * C30030 * C624 -
          ((C3878 + C3879) * C30146 + (C3880 + C3881) * C3162 +
           (C3877 + C3876) * C3093 + (C3875 + C3874) * C3161) *
              C30090 * C30030 * C625 +
          ((C3881 + C3880) * C3161 + (C3879 + C3878) * C3093 +
           (C3096 * C3641 + C3091 * C3643 + C3098 * C3642 + C30139 * C3644) *
               C3162 +
           (C3096 * C3721 + C3091 * C3855 + C3098 * C3722 + C30139 * C3856) *
               C30146) *
              C30090 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyy[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C3337 * C93 + C3340 + C3340 + C3093 * C333 + C3338 * C630 +
                     C3341 + C3341 + C30146 * C836) *
                        C3091 +
                    (C3364 + C3365) * C30139) *
                       C30090 * C30030 * C30016 * C84 -
                   ((C3366 + C3367) * C30139 + (C3365 + C3364) * C3091) *
                       C30090 * C30030 * C30016 * C85 +
                   ((C3367 + C3366) * C3091 +
                    (C3337 * C96 + C3354 + C3354 + C3093 * C336 +
                     C3338 * C1523 + C3355 + C3355 + C30146 * C1758) *
                        C30139) *
                       C30090 * C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C3337 * C93 + C3340 + C3340 + C3093 * C333 + C3338 * C630 +
                     C3341 + C3341 + C30146 * C836) *
                        C3091 +
                    (C3364 + C3365) * C30139) *
                       C30090 * C30030 * C624 -
                   ((C3338 * C632 + C3934 + C3934 + C30146 * C838 +
                     C3337 * C629 + C3935 + C3935 + C3093 * C835) *
                        C30139 +
                    (C3338 * C631 + C3936 + C3936 + C30146 * C837 +
                     C3337 * C630 + C3937 + C3937 + C3093 * C836) *
                        C3091) *
                       C30090 * C30030 * C625 +
                   ((C3337 * C631 + C3938 + C3938 + C3093 * C837 +
                     C3338 * C3641 + C3939 + C3939 + C30146 * C3931) *
                        C3091 +
                    (C3337 * C632 + C3940 + C3940 + C3093 * C838 +
                     C3338 * C3642 + C3941 + C3941 + C30146 * C3932) *
                        C30139) *
                       C30090 * C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C3161 +
            (C222 * C156 + C30090 * C396) * C3093 +
            (C222 * C630 + C30090 * C742) * C3162 +
            (C222 * C692 + C30090 * C886) * C30146) *
               C3091 +
           (C3418 + C3419 + C3420 + C3421) * C30139) *
              C30030 * C30016 * C84 -
          ((C3422 + C3423 + C3424 + C3425) * C30139 +
           (C3421 + C3420 + C3419 + C3418) * C3091) *
              C30030 * C30016 * C85 +
          ((C3425 + C3424 + C3423 + C3422) * C3091 +
           (C251 * C3161 + C413 * C3093 +
            (C222 * C1523 + C30090 * C1643) * C3162 +
            (C222 * C1579 + C30090 * C1820) * C30146) *
               C30139) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C3161 +
            (C222 * C156 + C30090 * C396) * C3093 + C3794 * C3162 +
            C4000 * C30146) *
               C3091 +
           (C3418 + C3419 + C3420 + C3421) * C30139) *
              C30030 * C624 -
          ((C4001 * C30146 + C3797 * C3162 + C1829 * C3093 + C1657 * C3161) *
               C30139 +
           (C4002 * C30146 + C3799 * C3162 + C4000 * C3093 + C3794 * C3161) *
               C3091) *
              C30030 * C625 +
          ((C3799 * C3161 + C4002 * C3093 +
            (C222 * C3641 + C30090 * C3775) * C3162 +
            (C222 * C3721 + C30090 * C3991) * C30146) *
               C3091 +
           (C3797 * C3161 + C4001 * C3093 +
            (C222 * C3642 + C30090 * C3776) * C3162 +
            (C222 * C3722 + C30090 * C3992) * C30146) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C222 +
            (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
                C30090) *
               C3093 +
           ((C3096 * C630 + C3091 * C636 + C3098 * C629 + C30139 * C635) *
                C222 +
            (C3096 * C742 + C3091 * C930 + C3098 * C741 + C30139 * C929) *
                C30090) *
               C30146) *
              C30030 * C30016 * C84 -
          (((C3098 * C740 + C30139 * C928 + C3096 * C741 + C3091 * C929) *
                C30090 +
            (C3098 * C628 + C30139 * C634 + C3096 * C629 + C3091 * C635) *
                C222) *
               C30146 +
           ((C3098 * C225 + C30139 * C457 + C3096 * C224 + C3091 * C456) *
                C30090 +
            (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C222) *
               C3093) *
              C30030 * C30016 * C85 +
          (((C3096 * C95 + C3091 * C100 + C3098 * C96 + C30139 * C101) * C222 +
            (C3096 * C225 + C3091 * C457 + C3098 * C226 + C30139 * C458) *
                C30090) *
               C3093 +
           ((C3096 * C628 + C3091 * C634 + C3098 * C1523 + C30139 * C1524) *
                C222 +
            (C3096 * C740 + C3091 * C928 + C3098 * C1643 + C30139 * C1881) *
                C30090) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C222 +
            (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
                C30090) *
               C3093 +
           ((C3874 + C3875) * C222 + (C4063 + C4064) * C30090) * C30146) *
              C30030 * C624 -
          (((C4065 + C4066) * C30090 + (C3880 + C3881) * C222) * C30146 +
           ((C4064 + C4063) * C30090 + (C3875 + C3874) * C222) * C3093) *
              C30030 * C625 +
          (((C3881 + C3880) * C222 + (C4066 + C4065) * C30090) * C3093 +
           ((C3096 * C3641 + C3091 * C3643 + C3098 * C3642 + C30139 * C3644) *
                C222 +
            (C3096 * C3775 + C3091 * C4052 + C3098 * C3776 + C30139 * C4053) *
                C30090) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) * C222 +
            (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
                C30090) *
               C3091 +
           ((C3180 + C3181) * C222 + (C3534 + C3535) * C30090) * C30139) *
              C30030 * C30016 * C84 -
          (((C3536 + C3537) * C30090 + (C3186 + C3187) * C222) * C30139 +
           ((C3535 + C3534) * C30090 + (C3181 + C3180) * C222) * C3091) *
              C30030 * C30016 * C85 +
          (((C3187 + C3186) * C222 + (C3537 + C3536) * C30090) * C3091 +
           ((C3161 * C96 + C3093 * C159 + C3162 * C1523 + C30146 * C1579) *
                C222 +
            (C3161 * C226 + C3093 * C501 + C3162 * C1643 + C30146 * C1932) *
                C30090) *
               C30139) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) * C222 +
            (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
                C30090) *
               C3091 +
           ((C3180 + C3181) * C222 + (C3534 + C3535) * C30090) * C30139) *
              C30030 * C624 -
          (((C3162 * C744 + C30146 * C976 + C3161 * C741 + C3093 * C973) *
                C30090 +
            (C3162 * C632 + C30146 * C694 + C3161 * C629 + C3093 * C691) *
                C222) *
               C30139 +
           ((C3162 * C743 + C30146 * C975 + C3161 * C742 + C3093 * C974) *
                C30090 +
            (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
                C222) *
               C3091) *
              C30030 * C625 +
          (((C3161 * C631 + C3093 * C693 + C3162 * C3641 + C30146 * C3721) *
                C222 +
            (C3161 * C743 + C3093 * C975 + C3162 * C3775 + C30146 * C4116) *
                C30090) *
               C3091 +
           ((C3161 * C632 + C3093 * C694 + C3162 * C3642 + C30146 * C3722) *
                C222 +
            (C3161 * C744 + C3093 * C976 + C3162 * C3776 + C30146 * C4117) *
                C30090) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C557 * C93 + C564 + C564 + C30090 * C558) * C3093 +
                     (C557 * C630 + C1025 + C1025 + C30090 * C1018) * C30146) *
                        C3091 +
                    (C3588 + C3589) * C30139) *
                       C30030 * C30016 * C84 -
                   ((C3590 + C3591) * C30139 + (C3589 + C3588) * C3091) *
                       C30030 * C30016 * C85 +
                   ((C3591 + C3590) * C3091 +
                    (C583 * C3093 +
                     (C557 * C1523 + C1999 + C1999 + C30090 * C1993) * C30146) *
                        C30139) *
                       C30030 * C30016 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C557 * C93 + C564 + C564 + C30090 * C558) * C3093 +
                     C4185 * C30146) *
                        C3091 +
                    (C3588 + C3589) * C30139) *
                       C30030 * C624 -
                   ((C4186 * C30146 + C2005 * C3093) * C30139 +
                    (C4187 * C30146 + C4185 * C3093) * C3091) *
                       C30030 * C625 +
                   ((C4187 * C3093 +
                     (C557 * C3641 + C4177 + C4177 + C30090 * C4168) * C30146) *
                        C3091 +
                    (C4186 * C3093 +
                     (C557 * C3642 + C4178 + C4178 + C30090 * C4169) * C30146) *
                        C30139) *
                       C30030 * C626) *
                  C30004) /
                     (p * q * std::sqrt(p + q));
    d2eexx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C3095 * C93 + C3100 + C3100 + C3091 * C103 +
                       C3097 * C94 + C3101 + C3101 + C30139 * C104) *
                          C6717 +
                      (C7732 + C7733) * C30148) *
                         C30075 * C30030 * C1519 -
                     ((C6076 + C6077) * C30148 + (C3669 + C3668) * C6717) *
                         C30075 * C30030 * C1520) *
                        C1521 +
                    (((C4758 + C4759) * C6717 +
                      (C3095 * C2594 + C5414 + C5414 + C3091 * C2600 +
                       C3097 * C2595 + C5415 + C5415 + C30139 * C2601) *
                          C30148) *
                         C30075 * C30030 * C1520 -
                     ((C3097 * C1069 + C5413 + C5413 + C30139 * C1081 +
                       C3095 * C1070 + C5412 + C5412 + C3091 * C1082) *
                          C30148 +
                      (C3097 * C95 + C3106 + C3106 + C30139 * C105 +
                       C3095 * C94 + C3107 + C3107 + C3091 * C104) *
                          C6717) *
                         C30075 * C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C30075 * C156) * C3096 +
             (C155 * C98 + C30075 * C161) * C3091 + C179 * C3098 +
             C180 * C30139) *
                C6717 +
            (C7810 + C7811 + C7794 + C7795) * C30148) *
               C30030 * C1519 -
           ((C8392 * C30139 + C8393 * C3098 +
             (C155 * C2596 + C30075 * C2658) * C3091 +
             (C155 * C2593 + C30075 * C2655) * C3096) *
                C30148 +
            (C1592 * C30139 + C1593 * C3098 +
             (C155 * C636 + C30075 * C698) * C3091 +
             (C155 * C630 + C30075 * C692) * C3096) *
                C6717) *
               C30030 * C1520) *
              C1521 +
          (((C1593 * C3096 + C1592 * C3091 + C1591 * C3098 + C1590 * C30139) *
                C6717 +
            (C8393 * C3096 + C8392 * C3091 +
             (C155 * C2595 + C30075 * C2657) * C3098 +
             (C155 * C2598 + C30075 * C2660) * C30139) *
                C30148) *
               C30030 * C1520 -
           ((C2126 * C30139 + C2127 * C3098 + C2128 * C3091 + C2129 * C3096) *
                C30148 +
            (C182 * C30139 + C181 * C3098 + C180 * C3091 + C179 * C3096) *
                C6717) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C3096 +
            (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
                C3091 +
            (C6840 + C6841) * C3098 + (C6842 + C6843) * C30139) *
               C30075 * C30030 * C1519 -
           ((C8468 + C8469) * C30139 + (C8470 + C8471) * C3098 +
            (C6822 * C2596 + C30148 * C2714 + C6821 * C636 + C6717 * C748) *
                C3091 +
            (C6822 * C2593 + C30148 * C2711 + C6821 * C630 + C6717 * C742) *
                C3096) *
               C30075 * C30030 * C1520) *
              C1521 +
          (((C8471 + C8470) * C3096 + (C8469 + C8468) * C3091 +
            (C6821 * C628 + C6717 * C740 + C6822 * C2595 + C30148 * C2713) *
                C3098 +
            (C6821 * C634 + C6717 * C746 + C6822 * C2598 + C30148 * C2716) *
                C30139) *
               C30075 * C30030 * C1520 -
           ((C6844 + C6845) * C30139 + (C6846 + C6847) * C3098 +
            (C6843 + C6842) * C3091 + (C6841 + C6840) * C3096) *
               C30075 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C155 +
             (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
                 C30075) *
                C6717 +
            ((C7938 + C7939) * C155 + (C7940 + C7941) * C30075) * C30148) *
               C30030 * C1519 -
           (((C6304 + C6305) * C30075 + (C6306 + C6307) * C155) * C30148 +
            ((C3877 + C3876) * C30075 + (C3875 + C3874) * C155) * C6717) *
               C30030 * C1520) *
              C1521 +
          ((((C4982 + C4983) * C155 + (C4984 + C4985) * C30075) * C6717 +
            ((C3096 * C2594 + C3091 * C2597 + C3098 * C2595 + C30139 * C2598) *
                 C155 +
             (C3096 * C2656 + C3091 * C2768 + C3098 * C2657 + C30139 * C2769) *
                 C30075) *
                C30148) *
               C30030 * C1520 -
           (((C3098 * C1131 + C30139 * C1231 + C3096 * C1132 + C3091 * C1232) *
                 C30075 +
             (C3098 * C1069 + C30139 * C1075 + C3096 * C1070 + C3091 * C1076) *
                 C155) *
                C30148 +
            ((C3098 * C158 + C30139 * C291 + C3096 * C157 + C3091 * C290) *
                 C30075 +
             (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C155) *
                C6717) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C30075 * C333) * C3091 +
             C356 * C30139) *
                C6717 +
            (C8016 + C8000) * C30148) *
               C30030 * C1519 -
           ((C8608 * C30139 +
             (C332 * C2593 + C2824 + C2824 + C30075 * C2820) * C3091) *
                C30148 +
            (C1770 * C30139 +
             (C332 * C630 + C843 + C843 + C30075 * C836) * C3091) *
                C6717) *
               C30030 * C1520) *
              C1521 +
          (((C1770 * C3091 + C1769 * C30139) * C6717 +
            (C8608 * C3091 +
             (C332 * C2595 + C2826 + C2826 + C30075 * C2822) * C30139) *
                C30148) *
               C30030 * C1520 -
           ((C2305 * C30139 + C2306 * C3091) * C30148 +
            (C357 * C30139 + C356 * C3091) * C6717) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                 C155 +
             (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
                 C30075) *
                C3091 +
            ((C6840 + C6841) * C155 + (C7006 + C7007) * C30075) * C30139) *
               C30030 * C1519 -
           (((C8679 + C8680) * C30075 + (C8470 + C8471) * C155) * C30139 +
            ((C6822 * C2655 + C30148 * C2876 + C6821 * C692 + C6717 * C886) *
                 C30075 +
             (C6822 * C2593 + C30148 * C2711 + C6821 * C630 + C6717 * C742) *
                 C155) *
                C3091) *
               C30030 * C1520) *
              C1521 +
          ((((C8471 + C8470) * C155 + (C8680 + C8679) * C30075) * C3091 +
            ((C6821 * C628 + C6717 * C740 + C6822 * C2595 + C30148 * C2713) *
                 C155 +
             (C6821 * C690 + C6717 * C884 + C6822 * C2657 + C30148 * C2878) *
                 C30075) *
                C30139) *
               C30030 * C1520 -
           (((C7008 + C7009) * C30075 + (C6846 + C6847) * C155) * C30139 +
            ((C7007 + C7006) * C30075 + (C6841 + C6840) * C155) * C3091) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C6821 +
            (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
                C6717 +
            (C7938 + C7939) * C6822 + (C8131 + C8132) * C30148) *
               C30075 * C30030 * C1519 -
           ((C6523 + C6524) * C30148 + (C6306 + C6307) * C6822 +
            (C4064 + C4063) * C6717 + (C3875 + C3874) * C6821) *
               C30075 * C30030 * C1520) *
              C1521 +
          (((C4982 + C4983) * C6821 + (C5204 + C5205) * C6717 +
            (C3096 * C2594 + C3091 * C2597 + C3098 * C2595 + C30139 * C2598) *
                C6822 +
            (C3096 * C2712 + C3091 * C2930 + C3098 * C2713 + C30139 * C2931) *
                C30148) *
               C30075 * C30030 * C1520 -
           ((C3098 * C1181 + C30139 * C1369 + C3096 * C1182 + C3091 * C1370) *
                C30148 +
            (C3098 * C1069 + C30139 * C1075 + C3096 * C1070 + C3091 * C1076) *
                C6822 +
            (C3098 * C225 + C30139 * C457 + C3096 * C224 + C3091 * C456) *
                C6717 +
            (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C6821) *
               C30075 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C30075 * C156) * C6821 +
                       (C155 * C223 + C30075 * C498) * C6717 + C7804 * C6822 +
                       C8193 * C30148) *
                          C3091 +
                      (C7110 + C7111 + C7112 + C7113) * C30139) *
                         C30030 * C1519 -
                     ((C8819 + C8815 + C8816 + C8817) * C30139 +
                      ((C155 * C2711 + C30075 * C2982) * C30148 +
                       (C155 * C2593 + C30075 * C2655) * C6822 +
                       (C155 * C742 + C30075 * C974) * C6717 +
                       (C155 * C630 + C30075 * C692) * C6821) *
                          C3091) *
                         C30030 * C1520) *
                        C1521 +
                    (((C8817 + C8816 + C8815 + C8819) * C3091 +
                      (C1591 * C6821 + C1940 * C6717 +
                       (C155 * C2595 + C30075 * C2657) * C6822 +
                       (C155 * C2713 + C30075 * C2984) * C30148) *
                          C30139) *
                         C30030 * C1520 -
                     ((C7114 + C7115 + C7116 + C7117) * C30139 +
                      (C7113 + C7112 + C7111 + C7110) * C3091) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                       C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                          C30075 * C3091 +
                      (C7194 + C7195) * C30075 * C30139) *
                         C30030 * C1519 -
                     ((C8896 + C8897) * C30075 * C30139 +
                      (C7168 * C2593 + C7652 + C7652 + C30148 * C3035 +
                       C7167 * C630 + C7653 + C7653 + C6717 * C1018) *
                          C30075 * C3091) *
                         C30030 * C1520) *
                        C1521 +
                    (((C8897 + C8896) * C30075 * C3091 +
                      (C7167 * C628 + C8890 + C8890 + C6717 * C1016 +
                       C7168 * C2595 + C8891 + C8891 + C30148 * C3037) *
                          C30075 * C30139) *
                         C30030 * C1520 -
                     ((C7196 + C7197) * C30075 * C30139 +
                      (C7195 + C7194) * C30075 * C3091) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C3095 * C93 + C3100 + C3100 + C3091 * C103 +
                       C3097 * C94 + C3101 + C3101 + C30139 * C104) *
                          C6717 +
                      (C7732 + C7733) * C30148) *
                         C30075 * C2057 -
                     ((C7734 + C7735) * C30148 + (C7733 + C7732) * C6717) *
                         C30075 * C2058) *
                        C1519 +
                    (((C6077 + C6076) * C6717 +
                      (C3095 * C4237 + C4250 + C4250 + C3091 * C4241 +
                       C3097 * C4238 + C4251 + C4251 + C30139 * C4242) *
                          C30148) *
                         C30075 * C2058 -
                     ((C6076 + C6077) * C30148 + (C3669 + C3668) * C6717) *
                         C30075 * C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eexy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C30075 * C156) * C3096 +
                       (C155 * C98 + C30075 * C161) * C3091 + C179 * C3098 +
                       C180 * C30139) *
                          C6717 +
                      (C7810 + C7811 + C7794 + C7795) * C30148) *
                         C2057 -
                     ((C7812 + C7813 + C7814 + C7815) * C30148 +
                      (C7795 + C7794 + C7811 + C7810) * C6717) *
                         C2058) *
                        C1519 +
                    (((C9702 + C9703 + C9698 + C9699) * C6717 +
                      ((C155 * C4237 + C30075 * C4301) * C3096 +
                       (C155 * C4239 + C30075 * C4303) * C3091 +
                       (C155 * C4238 + C30075 * C4302) * C3098 +
                       (C155 * C4240 + C30075 * C4304) * C30139) *
                          C30148) *
                         C2058 -
                     ((C9699 + C9698 + C9703 + C9702) * C30148 +
                      (C1592 * C30139 + C1593 * C3098 +
                       (C155 * C636 + C30075 * C698) * C3091 +
                       (C155 * C630 + C30075 * C692) * C3096) *
                          C6717) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C3096 +
            (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
                C3091 +
            (C6840 + C6841) * C3098 + (C6842 + C6843) * C30139) *
               C30075 * C2057 -
           ((C9120 + C9121) * C30139 + (C9122 + C9123) * C3098 +
            (C6822 * C1078 + C30148 * C1190 + C6821 * C1077 + C6717 * C1189) *
                C3091 +
            (C6822 * C1072 + C30148 * C1184 + C6821 * C1071 + C6717 * C1183) *
                C3096) *
               C30075 * C2058) *
              C1519 +
          (((C6821 * C2593 + C6717 * C2711 + C6822 * C4237 + C30148 * C4355) *
                C3096 +
            (C6821 * C2596 + C6717 * C2714 + C6822 * C4239 + C30148 * C4357) *
                C3091 +
            (C6821 * C2594 + C6717 * C2712 + C6822 * C4238 + C30148 * C4356) *
                C3098 +
            (C6821 * C2597 + C6717 * C2715 + C6822 * C4240 + C30148 * C4358) *
                C30139) *
               C30075 * C2058 -
           ((C8468 + C8469) * C30139 + (C8470 + C8471) * C3098 +
            (C6822 * C2596 + C30148 * C2714 + C6821 * C636 + C6717 * C748) *
                C3091 +
            (C6822 * C2593 + C30148 * C2711 + C6821 * C630 + C6717 * C742) *
                C3096) *
               C30075 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C155 +
             (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
                 C30075) *
                C6717 +
            ((C7938 + C7939) * C155 + (C7940 + C7941) * C30075) * C30148) *
               C2057 -
           (((C7942 + C7943) * C30075 + (C7944 + C7945) * C155) * C30148 +
            ((C7941 + C7940) * C30075 + (C7939 + C7938) * C155) * C6717) *
               C2058) *
              C1519 +
          ((((C6307 + C6306) * C155 + (C6305 + C6304) * C30075) * C6717 +
            ((C3096 * C4237 + C3091 * C4239 + C3098 * C4238 + C30139 * C4240) *
                 C155 +
             (C3096 * C4301 + C3091 * C4409 + C3098 * C4302 + C30139 * C4410) *
                 C30075) *
                C30148) *
               C2058 -
           (((C6304 + C6305) * C30075 + (C6306 + C6307) * C155) * C30148 +
            ((C3877 + C3876) * C30075 + (C3875 + C3874) * C155) * C6717) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C30075 * C333) * C3091 +
             C356 * C30139) *
                C6717 +
            (C8016 + C8000) * C30148) *
               C2057 -
           ((C8017 + C8018) * C30148 + (C8000 + C8016) * C6717) * C2058) *
              C1519 +
          (((C9910 + C9904) * C6717 +
            ((C332 * C4237 + C9905 + C9905 + C30075 * C4461) * C3091 +
             (C332 * C4238 + C9906 + C9906 + C30075 * C4462) * C30139) *
                C30148) *
               C2058 -
           ((C9904 + C9910) * C30148 +
            (C1770 * C30139 +
             (C332 * C630 + C843 + C843 + C30075 * C836) * C3091) *
                C6717) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                 C155 +
             (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
                 C30075) *
                C3091 +
            ((C6840 + C6841) * C155 + (C7006 + C7007) * C30075) * C30139) *
               C2057 -
           (((C9340 + C9341) * C30075 + (C9122 + C9123) * C155) * C30139 +
            ((C6822 * C1134 + C30148 * C1328 + C6821 * C1133 + C6717 * C1327) *
                 C30075 +
             (C6822 * C1072 + C30148 * C1184 + C6821 * C1071 + C6717 * C1183) *
                 C155) *
                C3091) *
               C2058) *
              C1519 +
          ((((C6821 * C2593 + C6717 * C2711 + C6822 * C4237 + C30148 * C4355) *
                 C155 +
             (C6821 * C2655 + C6717 * C2876 + C6822 * C4301 + C30148 * C4521) *
                 C30075) *
                C3091 +
            ((C6821 * C2594 + C6717 * C2712 + C6822 * C4238 + C30148 * C4356) *
                 C155 +
             (C6821 * C2656 + C6717 * C2877 + C6822 * C4302 + C30148 * C4522) *
                 C30075) *
                C30139) *
               C2058 -
           (((C8679 + C8680) * C30075 + (C8470 + C8471) * C155) * C30139 +
            ((C6822 * C2655 + C30148 * C2876 + C6821 * C692 + C6717 * C886) *
                 C30075 +
             (C6822 * C2593 + C30148 * C2711 + C6821 * C630 + C6717 * C742) *
                 C155) *
                C3091) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C6821 +
            (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
                C6717 +
            (C7938 + C7939) * C6822 + (C8131 + C8132) * C30148) *
               C30075 * C2057 -
           ((C8133 + C8134) * C30148 + (C7944 + C7945) * C6822 +
            (C8132 + C8131) * C6717 + (C7939 + C7938) * C6821) *
               C30075 * C2058) *
              C1519 +
          (((C6307 + C6306) * C6821 + (C6524 + C6523) * C6717 +
            (C3096 * C4237 + C3091 * C4239 + C3098 * C4238 + C30139 * C4240) *
                C6822 +
            (C3096 * C4355 + C3091 * C4573 + C3098 * C4356 + C30139 * C4574) *
                C30148) *
               C30075 * C2058 -
           ((C6523 + C6524) * C30148 + (C6306 + C6307) * C6822 +
            (C4064 + C4063) * C6717 + (C3875 + C3874) * C6821) *
               C30075 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C30075 * C156) * C6821 +
             (C155 * C223 + C30075 * C498) * C6717 + C7804 * C6822 +
             C8193 * C30148) *
                C3091 +
            (C7110 + C7111 + C7112 + C7113) * C30139) *
               C2057 -
           ((C9480 + C9481 + C9482 + C9483) * C30139 +
            (C8195 * C30148 + C7809 * C6822 + C8193 * C6717 + C7804 * C6821) *
                C3091) *
               C2058) *
              C1519 +
          (((C9700 * C6821 + C10111 * C6717 +
             (C155 * C4237 + C30075 * C4301) * C6822 +
             (C155 * C4355 + C30075 * C4625) * C30148) *
                C3091 +
            (C8393 * C6821 + C8818 * C6717 +
             (C155 * C4238 + C30075 * C4302) * C6822 +
             (C155 * C4356 + C30075 * C4626) * C30148) *
                C30139) *
               C2058 -
           ((C8819 + C8815 + C8816 + C8817) * C30139 +
            (C10111 * C30148 + C9700 * C6822 +
             (C155 * C742 + C30075 * C974) * C6717 +
             (C155 * C630 + C30075 * C692) * C6821) *
                C3091) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                       C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                          C30075 * C3091 +
                      (C7194 + C7195) * C30075 * C30139) *
                         C2057 -
                     ((C9560 + C9561) * C30075 * C30139 +
                      (C7168 * C1072 + C8250 + C8250 + C30148 * C1460 +
                       C7167 * C1071 + C8251 + C8251 + C6717 * C1459) *
                          C30075 * C3091) *
                         C2058) *
                        C1519 +
                    (((C7167 * C2593 + C10178 + C10178 + C6717 * C3035 +
                       C7168 * C4237 + C10179 + C10179 + C30148 * C4677) *
                          C30075 * C3091 +
                      (C7167 * C2594 + C10180 + C10180 + C6717 * C3036 +
                       C7168 * C4238 + C10181 + C10181 + C30148 * C4678) *
                          C30075 * C30139) *
                         C2058 -
                     ((C8896 + C8897) * C30075 * C30139 +
                      (C7168 * C2593 + C7652 + C7652 + C30148 * C3035 +
                       C7167 * C630 + C7653 + C7653 + C6717 * C1018) *
                          C30075 * C3091) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eexx[12] += (-std::pow(Pi, 2.5) *
                   (((C3095 * C93 + C3100 + C3100 + C3091 * C103 + C3097 * C94 +
                      C3101 + C3101 + C30139 * C104) *
                         C6717 +
                     (C3095 * C1071 + C4247 + C4247 + C3091 * C1083 +
                      C3097 * C1070 + C4246 + C4246 + C30139 * C1082) *
                         C30148) *
                        C30075 * C30030 * C624 -
                    ((C6076 + C6077) * C30148 + (C3669 + C3668) * C6717) *
                        C30075 * C30030 * C625 +
                    ((C3671 + C3670) * C6717 +
                     (C3095 * C6059 + C6070 + C6070 + C3091 * C6063 +
                      C3097 * C6060 + C6071 + C6071 + C30139 * C6064) *
                         C30148) *
                        C30075 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C3095 * C93 + C3100 + C3100 + C3091 * C103 + C3097 * C94 +
                      C3101 + C3101 + C30139 * C104) *
                         C6717 +
                     (C3095 * C1071 + C4247 + C4247 + C3091 * C1083 +
                      C3097 * C1070 + C4246 + C4246 + C30139 * C1082) *
                         C30148) *
                        C30075 * C30030 * C30016 * C84 -
                    ((C3097 * C1069 + C5413 + C5413 + C30139 * C1081 +
                      C3095 * C1070 + C5412 + C5412 + C3091 * C1082) *
                         C30148 +
                     (C3097 * C95 + C3106 + C3106 + C30139 * C105 +
                      C3095 * C94 + C3107 + C3107 + C3091 * C104) *
                         C6717) *
                        C30075 * C30030 * C30016 * C85 +
                    ((C3095 * C95 + C3108 + C3108 + C3091 * C105 + C3097 * C96 +
                      C3109 + C3109 + C30139 * C106) *
                         C6717 +
                     (C3095 * C1069 + C6720 + C6720 + C3091 * C1081 +
                      C3097 * C2059 + C6721 + C6721 + C30139 * C2061) *
                         C30148) *
                        C30075 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C3095 * C93 + C3100 + C3100 + C3091 * C103 + C3097 * C94 +
                      C3101 + C3101 + C30139 * C104) *
                         C6717 +
                     (C7732 + C7733) * C30148) *
                        C30075 * C1066 -
                    ((C7734 + C7735) * C30148 + (C7733 + C7732) * C6717) *
                        C30075 * C1067 +
                    ((C7735 + C7734) * C6717 +
                     (C3095 * C7707 + C7722 + C7722 + C3091 * C7711 +
                      C3097 * C7708 + C7723 + C7723 + C30139 * C7712) *
                         C30148) *
                        C30075 * C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C3096 +
            (C155 * C98 + C30075 * C161) * C3091 + C179 * C3098 +
            C180 * C30139) *
               C6717 +
           ((C155 * C1071 + C30075 * C1133) * C3096 +
            (C155 * C1077 + C30075 * C1139) * C3091 + C2129 * C3098 +
            C2128 * C30139) *
               C30148) *
              C30030 * C624 -
          (((C155 * C2597 + C30075 * C2659) * C30139 +
            (C155 * C2594 + C30075 * C2656) * C3098 +
            (C155 * C2596 + C30075 * C2658) * C3091 +
            (C155 * C2593 + C30075 * C2655) * C3096) *
               C30148 +
           (C1592 * C30139 + C1593 * C3098 +
            (C155 * C636 + C30075 * C698) * C3091 +
            (C155 * C630 + C30075 * C692) * C3096) *
               C6717) *
              C30030 * C625 +
          (((C155 * C631 + C30075 * C693) * C3096 +
            (C155 * C637 + C30075 * C699) * C3091 +
            (C155 * C632 + C30075 * C694) * C3098 +
            (C155 * C638 + C30075 * C700) * C30139) *
               C6717 +
           ((C155 * C6059 + C30075 * C6143) * C3096 +
            (C155 * C6061 + C30075 * C6145) * C3091 +
            (C155 * C6060 + C30075 * C6144) * C3098 +
            (C155 * C6062 + C30075 * C6146) * C30139) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C3096 +
            (C155 * C98 + C30075 * C161) * C3091 + C179 * C3098 +
            C180 * C30139) *
               C6717 +
           ((C155 * C1071 + C30075 * C1133) * C3096 +
            (C155 * C1077 + C30075 * C1139) * C3091 + C2129 * C3098 +
            C2128 * C30139) *
               C30148) *
              C30030 * C30016 * C84 -
          ((C2126 * C30139 + C2127 * C3098 + C2128 * C3091 + C2129 * C3096) *
               C30148 +
           (C182 * C30139 + C181 * C3098 + C180 * C3091 + C179 * C3096) *
               C6717) *
              C30030 * C30016 * C85 +
          ((C181 * C3096 + C182 * C3091 + C184 * C3098 + C183 * C30139) *
               C6717 +
           (C2127 * C3096 + C2126 * C3091 +
            (C155 * C2059 + C30075 * C2115) * C3098 +
            (C155 * C2060 + C30075 * C2116) * C30139) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C3096 +
            (C155 * C98 + C30075 * C161) * C3091 + C179 * C3098 +
            C180 * C30139) *
               C6717 +
           (C7810 + C7811 + C7794 + C7795) * C30148) *
              C1066 -
          ((C7812 + C7813 + C7814 + C7815) * C30148 +
           (C7795 + C7794 + C7811 + C7810) * C6717) *
              C1067 +
          ((C7815 + C7814 + C7813 + C7812) * C6717 +
           ((C155 * C7707 + C30075 * C7785) * C3096 +
            (C155 * C7709 + C30075 * C7787) * C3091 +
            (C155 * C7708 + C30075 * C7786) * C3098 +
            (C155 * C7710 + C30075 * C7788) * C30139) *
               C30148) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (-std::pow(Pi, 2.5) *
         (((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
               C3096 +
           (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
               C3091 +
           (C6840 + C6841) * C3098 + (C6842 + C6843) * C30139) *
              C30075 * C30030 * C624 -
          ((C6822 * C2597 + C30148 * C2715 + C6821 * C635 + C6717 * C747) *
               C30139 +
           (C6822 * C2594 + C30148 * C2712 + C6821 * C629 + C6717 * C741) *
               C3098 +
           (C6822 * C2596 + C30148 * C2714 + C6821 * C636 + C6717 * C748) *
               C3091 +
           (C6822 * C2593 + C30148 * C2711 + C6821 * C630 + C6717 * C742) *
               C3096) *
              C30075 * C30030 * C625 +
          ((C6821 * C631 + C6717 * C743 + C6822 * C6059 + C30148 * C6213) *
               C3096 +
           (C6821 * C637 + C6717 * C749 + C6822 * C6061 + C30148 * C6215) *
               C3091 +
           (C6821 * C632 + C6717 * C744 + C6822 * C6060 + C30148 * C6214) *
               C3098 +
           (C6821 * C638 + C6717 * C750 + C6822 * C6062 + C30148 * C6216) *
               C30139) *
              C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
               C3096 +
           (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
               C3091 +
           (C6840 + C6841) * C3098 + (C6842 + C6843) * C30139) *
              C30075 * C30030 * C30016 * C84 -
          ((C6844 + C6845) * C30139 + (C6846 + C6847) * C3098 +
           (C6843 + C6842) * C3091 + (C6841 + C6840) * C3096) *
              C30075 * C30030 * C30016 * C85 +
          ((C6847 + C6846) * C3096 + (C6845 + C6844) * C3091 +
           (C6821 * C96 + C6717 * C226 + C6822 * C2059 + C30148 * C2179) *
               C3098 +
           (C6821 * C101 + C6717 * C231 + C6822 * C2060 + C30148 * C2180) *
               C30139) *
              C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
               C3096 +
           (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
               C3091 +
           (C6840 + C6841) * C3098 + (C6842 + C6843) * C30139) *
              C30075 * C1066 -
          ((C6822 * C1079 + C30148 * C1191 + C6821 * C1076 + C6717 * C1188) *
               C30139 +
           (C6822 * C1073 + C30148 * C1185 + C6821 * C1070 + C6717 * C1182) *
               C3098 +
           (C6822 * C1078 + C30148 * C1190 + C6821 * C1077 + C6717 * C1189) *
               C3091 +
           (C6822 * C1072 + C30148 * C1184 + C6821 * C1071 + C6717 * C1183) *
               C3096) *
              C30075 * C1067 +
          ((C6821 * C1072 + C6717 * C1184 + C6822 * C7707 + C30148 * C7865) *
               C3096 +
           (C6821 * C1078 + C6717 * C1190 + C6822 * C7709 + C30148 * C7867) *
               C3091 +
           (C6821 * C1073 + C6717 * C1185 + C6822 * C7708 + C30148 * C7866) *
               C3098 +
           (C6821 * C1079 + C6717 * C1191 + C6822 * C7710 + C30148 * C7868) *
               C30139) *
              C30075 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C155 +
            (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
                C30075) *
               C6717 +
           ((C3096 * C1071 + C3091 * C1077 + C3098 * C1070 + C30139 * C1076) *
                C155 +
            (C3096 * C1133 + C3091 * C1233 + C3098 * C1132 + C30139 * C1232) *
                C30075) *
               C30148) *
              C30030 * C624 -
          (((C6304 + C6305) * C30075 + (C6306 + C6307) * C155) * C30148 +
           ((C3877 + C3876) * C30075 + (C3875 + C3874) * C155) * C6717) *
              C30030 * C625 +
          (((C3881 + C3880) * C155 + (C3879 + C3878) * C30075) * C6717 +
           ((C3096 * C6059 + C3091 * C6061 + C3098 * C6060 + C30139 * C6062) *
                C155 +
            (C3096 * C6143 + C3091 * C6293 + C3098 * C6144 + C30139 * C6294) *
                C30075) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C155 +
            (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
                C30075) *
               C6717 +
           ((C3096 * C1071 + C3091 * C1077 + C3098 * C1070 + C30139 * C1076) *
                C155 +
            (C3096 * C1133 + C3091 * C1233 + C3098 * C1132 + C30139 * C1232) *
                C30075) *
               C30148) *
              C30030 * C30016 * C84 -
          (((C3098 * C1131 + C30139 * C1231 + C3096 * C1132 + C3091 * C1232) *
                C30075 +
            (C3098 * C1069 + C30139 * C1075 + C3096 * C1070 + C3091 * C1076) *
                C155) *
               C30148 +
           ((C3098 * C158 + C30139 * C291 + C3096 * C157 + C3091 * C290) *
                C30075 +
            (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C155) *
               C6717) *
              C30030 * C30016 * C85 +
          (((C3096 * C95 + C3091 * C100 + C3098 * C96 + C30139 * C101) * C155 +
            (C3096 * C158 + C3091 * C291 + C3098 * C159 + C30139 * C292) *
                C30075) *
               C6717 +
           ((C3096 * C1069 + C3091 * C1075 + C3098 * C2059 + C30139 * C2060) *
                C155 +
            (C3096 * C1131 + C3091 * C1231 + C3098 * C2115 + C30139 * C2243) *
                C30075) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C155 +
            (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
                C30075) *
               C6717 +
           ((C7938 + C7939) * C155 + (C7940 + C7941) * C30075) * C30148) *
              C1066 -
          (((C7942 + C7943) * C30075 + (C7944 + C7945) * C155) * C30148 +
           ((C7941 + C7940) * C30075 + (C7939 + C7938) * C155) * C6717) *
              C1067 +
          (((C7945 + C7944) * C155 + (C7943 + C7942) * C30075) * C6717 +
           ((C3096 * C7707 + C3091 * C7709 + C3098 * C7708 + C30139 * C7710) *
                C155 +
            (C3096 * C7785 + C3091 * C7919 + C3098 * C7786 + C30139 * C7920) *
                C30075) *
               C30148) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C3091 +
            C356 * C30139) *
               C6717 +
           ((C332 * C1071 + C1284 + C1284 + C30075 * C1277) * C3091 +
            C2306 * C30139) *
               C30148) *
              C30030 * C624 -
          (((C332 * C2594 + C2825 + C2825 + C30075 * C2821) * C30139 +
            (C332 * C2593 + C2824 + C2824 + C30075 * C2820) * C3091) *
               C30148 +
           (C1770 * C30139 +
            (C332 * C630 + C843 + C843 + C30075 * C836) * C3091) *
               C6717) *
              C30030 * C625 +
          (((C332 * C631 + C844 + C844 + C30075 * C837) * C3091 +
            (C332 * C632 + C845 + C845 + C30075 * C838) * C30139) *
               C6717 +
           ((C332 * C6059 + C7448 + C7448 + C30075 * C6373) * C3091 +
            (C332 * C6060 + C7449 + C7449 + C30075 * C6374) * C30139) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C3091 +
            C356 * C30139) *
               C6717 +
           ((C332 * C1071 + C1284 + C1284 + C30075 * C1277) * C3091 +
            C2306 * C30139) *
               C30148) *
              C30030 * C30016 * C84 -
          ((C2305 * C30139 + C2306 * C3091) * C30148 +
           (C357 * C30139 + C356 * C3091) * C6717) *
              C30030 * C30016 * C85 +
          ((C357 * C3091 + C358 * C30139) * C6717 +
           (C2305 * C3091 +
            (C332 * C2059 + C2300 + C2300 + C30075 * C2294) * C30139) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C3091 +
            C356 * C30139) *
               C6717 +
           (C8016 + C8000) * C30148) *
              C1066 -
          ((C8017 + C8018) * C30148 + (C8000 + C8016) * C6717) * C1067 +
          ((C8018 + C8017) * C6717 +
           ((C332 * C7707 + C8005 + C8005 + C30075 * C7995) * C3091 +
            (C332 * C7708 + C8006 + C8006 + C30075 * C7996) * C30139) *
               C30148) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C155 +
            (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
                C30075) *
               C3091 +
           ((C6840 + C6841) * C155 + (C7006 + C7007) * C30075) * C30139) *
              C30030 * C624 -
          (((C6822 * C2656 + C30148 * C2877 + C6821 * C691 + C6717 * C885) *
                C30075 +
            (C6822 * C2594 + C30148 * C2712 + C6821 * C629 + C6717 * C741) *
                C155) *
               C30139 +
           ((C6822 * C2655 + C30148 * C2876 + C6821 * C692 + C6717 * C886) *
                C30075 +
            (C6822 * C2593 + C30148 * C2711 + C6821 * C630 + C6717 * C742) *
                C155) *
               C3091) *
              C30030 * C625 +
          (((C6821 * C631 + C6717 * C743 + C6822 * C6059 + C30148 * C6213) *
                C155 +
            (C6821 * C693 + C6717 * C887 + C6822 * C6143 + C30148 * C6445) *
                C30075) *
               C3091 +
           ((C6821 * C632 + C6717 * C744 + C6822 * C6060 + C30148 * C6214) *
                C155 +
            (C6821 * C694 + C6717 * C888 + C6822 * C6144 + C30148 * C6446) *
                C30075) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C155 +
            (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
                C30075) *
               C3091 +
           ((C6840 + C6841) * C155 + (C7006 + C7007) * C30075) * C30139) *
              C30030 * C30016 * C84 -
          (((C7008 + C7009) * C30075 + (C6846 + C6847) * C155) * C30139 +
           ((C7007 + C7006) * C30075 + (C6841 + C6840) * C155) * C3091) *
              C30030 * C30016 * C85 +
          (((C6847 + C6846) * C155 + (C7009 + C7008) * C30075) * C3091 +
           ((C6821 * C96 + C6717 * C226 + C6822 * C2059 + C30148 * C2179) *
                C155 +
            (C6821 * C159 + C6717 * C399 + C6822 * C2115 + C30148 * C2356) *
                C30075) *
               C30139) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C155 +
            (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
                C30075) *
               C3091 +
           ((C6840 + C6841) * C155 + (C7006 + C7007) * C30075) * C30139) *
              C1066 -
          (((C6822 * C1135 + C30148 * C1329 + C6821 * C1132 + C6717 * C1326) *
                C30075 +
            (C6822 * C1073 + C30148 * C1185 + C6821 * C1070 + C6717 * C1182) *
                C155) *
               C30139 +
           ((C6822 * C1134 + C30148 * C1328 + C6821 * C1133 + C6717 * C1327) *
                C30075 +
            (C6822 * C1072 + C30148 * C1184 + C6821 * C1071 + C6717 * C1183) *
                C155) *
               C3091) *
              C1067 +
          (((C6821 * C1072 + C6717 * C1184 + C6822 * C7707 + C30148 * C7865) *
                C155 +
            (C6821 * C1134 + C6717 * C1328 + C6822 * C7785 + C30148 * C8068) *
                C30075) *
               C3091 +
           ((C6821 * C1073 + C6717 * C1185 + C6822 * C7708 + C30148 * C7866) *
                C155 +
            (C6821 * C1135 + C6717 * C1329 + C6822 * C7786 + C30148 * C8069) *
                C30075) *
               C30139) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (-std::pow(Pi, 2.5) *
         (((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C6821 +
           (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
               C6717 +
           (C3096 * C1071 + C3091 * C1077 + C3098 * C1070 + C30139 * C1076) *
               C6822 +
           (C3096 * C1183 + C3091 * C1371 + C3098 * C1182 + C30139 * C1370) *
               C30148) *
              C30075 * C30030 * C624 -
          ((C6523 + C6524) * C30148 + (C6306 + C6307) * C6822 +
           (C4064 + C4063) * C6717 + (C3875 + C3874) * C6821) *
              C30075 * C30030 * C625 +
          ((C3881 + C3880) * C6821 + (C4066 + C4065) * C6717 +
           (C3096 * C6059 + C3091 * C6061 + C3098 * C6060 + C30139 * C6062) *
               C6822 +
           (C3096 * C6213 + C3091 * C6516 + C3098 * C6214 + C30139 * C6517) *
               C30148) *
              C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C6821 +
           (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
               C6717 +
           (C3096 * C1071 + C3091 * C1077 + C3098 * C1070 + C30139 * C1076) *
               C6822 +
           (C3096 * C1183 + C3091 * C1371 + C3098 * C1182 + C30139 * C1370) *
               C30148) *
              C30075 * C30030 * C30016 * C84 -
          ((C3098 * C1181 + C30139 * C1369 + C3096 * C1182 + C3091 * C1370) *
               C30148 +
           (C3098 * C1069 + C30139 * C1075 + C3096 * C1070 + C3091 * C1076) *
               C6822 +
           (C3098 * C225 + C30139 * C457 + C3096 * C224 + C3091 * C456) *
               C6717 +
           (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C6821) *
              C30075 * C30030 * C30016 * C85 +
          ((C3096 * C95 + C3091 * C100 + C3098 * C96 + C30139 * C101) * C6821 +
           (C3096 * C225 + C3091 * C457 + C3098 * C226 + C30139 * C458) *
               C6717 +
           (C3096 * C1069 + C3091 * C1075 + C3098 * C2059 + C30139 * C2060) *
               C6822 +
           (C3096 * C1181 + C3091 * C1369 + C3098 * C2179 + C30139 * C2417) *
               C30148) *
              C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C6821 +
           (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
               C6717 +
           (C7938 + C7939) * C6822 + (C8131 + C8132) * C30148) *
              C30075 * C1066 -
          ((C8133 + C8134) * C30148 + (C7944 + C7945) * C6822 +
           (C8132 + C8131) * C6717 + (C7939 + C7938) * C6821) *
              C30075 * C1067 +
          ((C7945 + C7944) * C6821 + (C8134 + C8133) * C6717 +
           (C3096 * C7707 + C3091 * C7709 + C3098 * C7708 + C30139 * C7710) *
               C6822 +
           (C3096 * C7865 + C3091 * C8120 + C3098 * C7866 + C30139 * C8121) *
               C30148) *
              C30075 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C6821 +
            (C155 * C223 + C30075 * C498) * C6717 +
            (C155 * C1071 + C30075 * C1133) * C6822 +
            (C155 * C1183 + C30075 * C1415) * C30148) *
               C3091 +
           (C7110 + C7111 + C7112 + C7113) * C30139) *
              C30030 * C624 -
          (((C155 * C2712 + C30075 * C2983) * C30148 +
            (C155 * C2594 + C30075 * C2656) * C6822 + C1941 * C6717 +
            C1593 * C6821) *
               C30139 +
           ((C155 * C2711 + C30075 * C2982) * C30148 +
            (C155 * C2593 + C30075 * C2655) * C6822 +
            (C155 * C742 + C30075 * C974) * C6717 +
            (C155 * C630 + C30075 * C692) * C6821) *
               C3091) *
              C30030 * C625 +
          (((C155 * C631 + C30075 * C693) * C6821 +
            (C155 * C743 + C30075 * C975) * C6717 +
            (C155 * C6059 + C30075 * C6143) * C6822 +
            (C155 * C6213 + C30075 * C6590) * C30148) *
               C3091 +
           ((C155 * C632 + C30075 * C694) * C6821 +
            (C155 * C744 + C30075 * C976) * C6717 +
            (C155 * C6060 + C30075 * C6144) * C6822 +
            (C155 * C6214 + C30075 * C6591) * C30148) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C155 * C93 + C30075 * C156) * C6821 +
                                (C155 * C223 + C30075 * C498) * C6717 +
                                (C155 * C1071 + C30075 * C1133) * C6822 +
                                (C155 * C1183 + C30075 * C1415) * C30148) *
                                   C3091 +
                               (C7110 + C7111 + C7112 + C7113) * C30139) *
                                  C30030 * C30016 * C84 -
                              ((C7114 + C7115 + C7116 + C7117) * C30139 +
                               (C7113 + C7112 + C7111 + C7110) * C3091) *
                                  C30030 * C30016 * C85 +
                              ((C7117 + C7116 + C7115 + C7114) * C3091 +
                               (C184 * C6821 + C515 * C6717 +
                                (C155 * C2059 + C30075 * C2115) * C6822 +
                                (C155 * C2179 + C30075 * C2468) * C30148) *
                                   C30139) *
                                  C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C6821 +
            (C155 * C223 + C30075 * C498) * C6717 + C7804 * C6822 +
            C8193 * C30148) *
               C3091 +
           (C7110 + C7111 + C7112 + C7113) * C30139) *
              C1066 -
          ((C8194 * C30148 + C7807 * C6822 + C2477 * C6717 + C2129 * C6821) *
               C30139 +
           (C8195 * C30148 + C7809 * C6822 + C8193 * C6717 + C7804 * C6821) *
               C3091) *
              C1067 +
          ((C7809 * C6821 + C8195 * C6717 +
            (C155 * C7707 + C30075 * C7785) * C6822 +
            (C155 * C7865 + C30075 * C8184) * C30148) *
               C3091 +
           (C7807 * C6821 + C8194 * C6717 +
            (C155 * C7708 + C30075 * C7786) * C6822 +
            (C155 * C7866 + C30075 * C8185) * C30148) *
               C30139) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[12] += (-std::pow(Pi, 2.5) *
                   (((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                      C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                         C30075 * C3091 +
                     (C7194 + C7195) * C30075 * C30139) *
                        C30030 * C624 -
                    ((C7168 * C2594 + C7650 + C7650 + C30148 * C3036 +
                      C7167 * C629 + C7651 + C7651 + C6717 * C1017) *
                         C30075 * C30139 +
                     (C7168 * C2593 + C7652 + C7652 + C30148 * C3035 +
                      C7167 * C630 + C7653 + C7653 + C6717 * C1018) *
                         C30075 * C3091) *
                        C30030 * C625 +
                    ((C7167 * C631 + C7654 + C7654 + C6717 * C1019 +
                      C7168 * C6059 + C7655 + C7655 + C30148 * C6658) *
                         C30075 * C3091 +
                     (C7167 * C632 + C7656 + C7656 + C6717 * C1020 +
                      C7168 * C6060 + C7657 + C7657 + C30148 * C6659) *
                         C30075 * C30139) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                      C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                         C30075 * C3091 +
                     (C7194 + C7195) * C30075 * C30139) *
                        C30030 * C30016 * C84 -
                    ((C7196 + C7197) * C30075 * C30139 +
                     (C7195 + C7194) * C30075 * C3091) *
                        C30030 * C30016 * C85 +
                    ((C7197 + C7196) * C30075 * C3091 +
                     (C7167 * C96 + C7184 + C7184 + C6717 * C561 +
                      C7168 * C2059 + C7185 + C7185 + C30148 * C2529) *
                         C30075 * C30139) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                      C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                         C30075 * C3091 +
                     (C7194 + C7195) * C30075 * C30139) *
                        C1066 -
                    ((C7168 * C1073 + C8248 + C8248 + C30148 * C1461 +
                      C7167 * C1070 + C8249 + C8249 + C6717 * C1458) *
                         C30075 * C30139 +
                     (C7168 * C1072 + C8250 + C8250 + C30148 * C1460 +
                      C7167 * C1071 + C8251 + C8251 + C6717 * C1459) *
                         C30075 * C3091) *
                        C1067 +
                    ((C7167 * C1072 + C8252 + C8252 + C6717 * C1460 +
                      C7168 * C7707 + C8253 + C8253 + C30148 * C8245) *
                         C30075 * C3091 +
                     (C7167 * C1073 + C8254 + C8254 + C6717 * C1461 +
                      C7168 * C7708 + C8255 + C8255 + C30148 * C8246) *
                         C30075 * C30139) *
                        C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexx[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C3095 * C93 + C3100 + C3100 + C3091 * C103 +
                       C3097 * C94 + C3101 + C3101 + C30139 * C104) *
                          C6717 +
                      (C7732 + C7733) * C30148) *
                         C30075 * C2057 -
                     ((C7734 + C7735) * C30148 + (C7733 + C7732) * C6717) *
                         C30075 * C2058) *
                        C30016 * C1521 +
                    (((C8974 + C8975) * C6717 +
                      (C3095 * C1073 + C8968 + C8968 + C3091 * C1085 +
                       C3097 * C1074 + C8969 + C8969 + C30139 * C1086) *
                          C30148) *
                         C30075 * C2058 -
                     ((C8975 + C8974) * C30148 +
                      (C3097 * C95 + C3106 + C3106 + C30139 * C105 +
                       C3095 * C94 + C3107 + C3107 + C3091 * C104) *
                          C6717) *
                         C30075 * C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C30075 * C156) * C3096 +
             (C155 * C98 + C30075 * C161) * C3091 + C179 * C3098 +
             C180 * C30139) *
                C6717 +
            (C7810 + C7811 + C7794 + C7795) * C30148) *
               C2057 -
           ((C7812 + C7813 + C7814 + C7815) * C30148 +
            (C7795 + C7794 + C7811 + C7810) * C6717) *
               C2058) *
              C30016 * C1521 +
          (((C9042 + C9043 + C9044 + C9045) * C6717 +
            (C7807 * C3096 + C7806 * C3091 +
             (C155 * C1074 + C30075 * C1136) * C3098 +
             (C155 * C1080 + C30075 * C1142) * C30139) *
                C30148) *
               C2058 -
           ((C9045 + C9044 + C9043 + C9042) * C30148 +
            (C182 * C30139 + C181 * C3098 + C180 * C3091 + C179 * C3096) *
                C6717) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C3096 +
            (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
                C3091 +
            (C6840 + C6841) * C3098 + (C6842 + C6843) * C30139) *
               C30075 * C2057 -
           ((C9120 + C9121) * C30139 + (C9122 + C9123) * C3098 +
            (C6822 * C1078 + C30148 * C1190 + C6821 * C1077 + C6717 * C1189) *
                C3091 +
            (C6822 * C1072 + C30148 * C1184 + C6821 * C1071 + C6717 * C1183) *
                C3096) *
               C30075 * C2058) *
              C30016 * C1521 +
          (((C9123 + C9122) * C3096 + (C9121 + C9120) * C3091 +
            (C6821 * C1069 + C6717 * C1181 + C6822 * C1074 + C30148 * C1186) *
                C3098 +
            (C6821 * C1075 + C6717 * C1187 + C6822 * C1080 + C30148 * C1192) *
                C30139) *
               C30075 * C2058 -
           ((C6844 + C6845) * C30139 + (C6846 + C6847) * C3098 +
            (C6843 + C6842) * C3091 + (C6841 + C6840) * C3096) *
               C30075 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C155 +
             (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
                 C30075) *
                C6717 +
            ((C7938 + C7939) * C155 + (C7940 + C7941) * C30075) * C30148) *
               C2057 -
           (((C7942 + C7943) * C30075 + (C7944 + C7945) * C155) * C30148 +
            ((C7941 + C7940) * C30075 + (C7939 + C7938) * C155) * C6717) *
               C2058) *
              C30016 * C1521 +
          ((((C9198 + C9199) * C155 + (C9200 + C9201) * C30075) * C6717 +
            ((C3096 * C1073 + C3091 * C1079 + C3098 * C1074 + C30139 * C1080) *
                 C155 +
             (C3096 * C1135 + C3091 * C1235 + C3098 * C1136 + C30139 * C1236) *
                 C30075) *
                C30148) *
               C2058 -
           (((C9201 + C9200) * C30075 + (C9199 + C9198) * C155) * C30148 +
            ((C3098 * C158 + C30139 * C291 + C3096 * C157 + C3091 * C290) *
                 C30075 +
             (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C155) *
                C6717) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C30075 * C333) * C3091 +
             C356 * C30139) *
                C6717 +
            (C8016 + C8000) * C30148) *
               C2057 -
           ((C8017 + C8018) * C30148 + (C8000 + C8016) * C6717) * C2058) *
              C30016 * C1521 +
          (((C9268 + C9269) * C6717 +
            (C8014 * C3091 +
             (C332 * C1074 + C1287 + C1287 + C30075 * C1280) * C30139) *
                C30148) *
               C2058 -
           ((C9269 + C9268) * C30148 + (C357 * C30139 + C356 * C3091) * C6717) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                 C155 +
             (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
                 C30075) *
                C3091 +
            ((C6840 + C6841) * C155 + (C7006 + C7007) * C30075) * C30139) *
               C2057 -
           (((C9340 + C9341) * C30075 + (C9122 + C9123) * C155) * C30139 +
            ((C6822 * C1134 + C30148 * C1328 + C6821 * C1133 + C6717 * C1327) *
                 C30075 +
             (C6822 * C1072 + C30148 * C1184 + C6821 * C1071 + C6717 * C1183) *
                 C155) *
                C3091) *
               C2058) *
              C30016 * C1521 +
          ((((C9123 + C9122) * C155 + (C9341 + C9340) * C30075) * C3091 +
            ((C6821 * C1069 + C6717 * C1181 + C6822 * C1074 + C30148 * C1186) *
                 C155 +
             (C6821 * C1131 + C6717 * C1325 + C6822 * C1136 + C30148 * C1330) *
                 C30075) *
                C30139) *
               C2058 -
           (((C7008 + C7009) * C30075 + (C6846 + C6847) * C155) * C30139 +
            ((C7007 + C7006) * C30075 + (C6841 + C6840) * C155) * C3091) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C6821 +
            (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
                C6717 +
            (C7938 + C7939) * C6822 + (C8131 + C8132) * C30148) *
               C30075 * C2057 -
           ((C8133 + C8134) * C30148 + (C7944 + C7945) * C6822 +
            (C8132 + C8131) * C6717 + (C7939 + C7938) * C6821) *
               C30075 * C2058) *
              C30016 * C1521 +
          (((C9198 + C9199) * C6821 + (C9412 + C9413) * C6717 +
            (C3096 * C1073 + C3091 * C1079 + C3098 * C1074 + C30139 * C1080) *
                C6822 +
            (C3096 * C1185 + C3091 * C1373 + C3098 * C1186 + C30139 * C1374) *
                C30148) *
               C30075 * C2058 -
           ((C9413 + C9412) * C30148 + (C9199 + C9198) * C6822 +
            (C3098 * C225 + C30139 * C457 + C3096 * C224 + C3091 * C456) *
                C6717 +
            (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C6821) *
               C30075 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C30075 * C156) * C6821 +
             (C155 * C223 + C30075 * C498) * C6717 + C7804 * C6822 +
             C8193 * C30148) *
                C3091 +
            (C7110 + C7111 + C7112 + C7113) * C30139) *
               C2057 -
           ((C9480 + C9481 + C9482 + C9483) * C30139 +
            (C8195 * C30148 + C7809 * C6822 + C8193 * C6717 + C7804 * C6821) *
                C3091) *
               C2058) *
              C30016 * C1521 +
          (((C9483 + C9482 + C9481 + C9480) * C3091 +
            (C2127 * C6821 + C2476 * C6717 +
             (C155 * C1074 + C30075 * C1136) * C6822 +
             (C155 * C1186 + C30075 * C1418) * C30148) *
                C30139) *
               C2058 -
           ((C7114 + C7115 + C7116 + C7117) * C30139 +
            (C7113 + C7112 + C7111 + C7110) * C3091) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                       C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                          C30075 * C3091 +
                      (C7194 + C7195) * C30075 * C30139) *
                         C2057 -
                     ((C9560 + C9561) * C30075 * C30139 +
                      (C7168 * C1072 + C8250 + C8250 + C30148 * C1460 +
                       C7167 * C1071 + C8251 + C8251 + C6717 * C1459) *
                          C30075 * C3091) *
                         C2058) *
                        C30016 * C1521 +
                    (((C9561 + C9560) * C30075 * C3091 +
                      (C7167 * C1069 + C9554 + C9554 + C6717 * C1457 +
                       C7168 * C1074 + C9555 + C9555 + C30148 * C1462) *
                          C30075 * C30139) *
                         C2058 -
                     ((C7196 + C7197) * C30075 * C30139 +
                      (C7195 + C7194) * C30075 * C3091) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3095 * C93 + C3100 + C3100 + C3091 * C103 + C3097 * C94 +
                      C3101 + C3101 + C30139 * C104) *
                         C6717 +
                     (C3095 * C1071 + C4247 + C4247 + C3091 * C1083 +
                      C3097 * C1070 + C4246 + C4246 + C30139 * C1082) *
                         C30148) *
                        C30075 * C30030 * C30016 * C84 -
                    ((C3097 * C1069 + C5413 + C5413 + C30139 * C1081 +
                      C3095 * C1070 + C5412 + C5412 + C3091 * C1082) *
                         C30148 +
                     (C3097 * C95 + C3106 + C3106 + C30139 * C105 +
                      C3095 * C94 + C3107 + C3107 + C3091 * C104) *
                         C6717) *
                        C30075 * C30030 * C30016 * C85 +
                    ((C3095 * C95 + C3108 + C3108 + C3091 * C105 + C3097 * C96 +
                      C3109 + C3109 + C30139 * C106) *
                         C6717 +
                     (C3095 * C1069 + C6720 + C6720 + C3091 * C1081 +
                      C3097 * C2059 + C6721 + C6721 + C30139 * C2061) *
                         C30148) *
                        C30075 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3095 * C93 + C3100 + C3100 + C3091 * C103 + C3097 * C94 +
                      C3101 + C3101 + C30139 * C104) *
                         C6717 +
                     (C3095 * C1071 + C4247 + C4247 + C3091 * C1083 +
                      C3097 * C1070 + C4246 + C4246 + C30139 * C1082) *
                         C30148) *
                        C30075 * C30030 * C624 -
                    ((C6076 + C6077) * C30148 + (C3669 + C3668) * C6717) *
                        C30075 * C30030 * C625 +
                    ((C3671 + C3670) * C6717 +
                     (C3095 * C6059 + C6070 + C6070 + C3091 * C6063 +
                      C3097 * C6060 + C6071 + C6071 + C30139 * C6064) *
                         C30148) *
                        C30075 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C3096 +
            (C155 * C98 + C30075 * C161) * C3091 + C179 * C3098 +
            C180 * C30139) *
               C6717 +
           ((C155 * C1071 + C30075 * C1133) * C3096 +
            (C155 * C1077 + C30075 * C1139) * C3091 + C2129 * C3098 +
            C2128 * C30139) *
               C30148) *
              C30030 * C30016 * C84 -
          ((C2126 * C30139 + C2127 * C3098 + C2128 * C3091 + C2129 * C3096) *
               C30148 +
           (C182 * C30139 + C181 * C3098 + C180 * C3091 + C179 * C3096) *
               C6717) *
              C30030 * C30016 * C85 +
          ((C181 * C3096 + C182 * C3091 + C184 * C3098 + C183 * C30139) *
               C6717 +
           (C2127 * C3096 + C2126 * C3091 +
            (C155 * C2059 + C30075 * C2115) * C3098 +
            (C155 * C2060 + C30075 * C2116) * C30139) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C3096 +
            (C155 * C98 + C30075 * C161) * C3091 + C179 * C3098 +
            C180 * C30139) *
               C6717 +
           ((C155 * C1071 + C30075 * C1133) * C3096 +
            (C155 * C1077 + C30075 * C1139) * C3091 + C2129 * C3098 +
            C2128 * C30139) *
               C30148) *
              C30030 * C624 -
          (((C155 * C2597 + C30075 * C2659) * C30139 +
            (C155 * C2594 + C30075 * C2656) * C3098 +
            (C155 * C2596 + C30075 * C2658) * C3091 +
            (C155 * C2593 + C30075 * C2655) * C3096) *
               C30148 +
           (C1592 * C30139 + C1593 * C3098 +
            (C155 * C636 + C30075 * C698) * C3091 +
            (C155 * C630 + C30075 * C692) * C3096) *
               C6717) *
              C30030 * C625 +
          (((C155 * C631 + C30075 * C693) * C3096 +
            (C155 * C637 + C30075 * C699) * C3091 +
            (C155 * C632 + C30075 * C694) * C3098 +
            (C155 * C638 + C30075 * C700) * C30139) *
               C6717 +
           ((C155 * C6059 + C30075 * C6143) * C3096 +
            (C155 * C6061 + C30075 * C6145) * C3091 +
            (C155 * C6060 + C30075 * C6144) * C3098 +
            (C155 * C6062 + C30075 * C6146) * C30139) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
               C3096 +
           (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
               C3091 +
           (C6840 + C6841) * C3098 + (C6842 + C6843) * C30139) *
              C30075 * C30030 * C30016 * C84 -
          ((C6844 + C6845) * C30139 + (C6846 + C6847) * C3098 +
           (C6843 + C6842) * C3091 + (C6841 + C6840) * C3096) *
              C30075 * C30030 * C30016 * C85 +
          ((C6847 + C6846) * C3096 + (C6845 + C6844) * C3091 +
           (C6821 * C96 + C6717 * C226 + C6822 * C2059 + C30148 * C2179) *
               C3098 +
           (C6821 * C101 + C6717 * C231 + C6822 * C2060 + C30148 * C2180) *
               C30139) *
              C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
               C3096 +
           (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
               C3091 +
           (C6840 + C6841) * C3098 + (C6842 + C6843) * C30139) *
              C30075 * C30030 * C624 -
          ((C6822 * C2597 + C30148 * C2715 + C6821 * C635 + C6717 * C747) *
               C30139 +
           (C6822 * C2594 + C30148 * C2712 + C6821 * C629 + C6717 * C741) *
               C3098 +
           (C6822 * C2596 + C30148 * C2714 + C6821 * C636 + C6717 * C748) *
               C3091 +
           (C6822 * C2593 + C30148 * C2711 + C6821 * C630 + C6717 * C742) *
               C3096) *
              C30075 * C30030 * C625 +
          ((C6821 * C631 + C6717 * C743 + C6822 * C6059 + C30148 * C6213) *
               C3096 +
           (C6821 * C637 + C6717 * C749 + C6822 * C6061 + C30148 * C6215) *
               C3091 +
           (C6821 * C632 + C6717 * C744 + C6822 * C6060 + C30148 * C6214) *
               C3098 +
           (C6821 * C638 + C6717 * C750 + C6822 * C6062 + C30148 * C6216) *
               C30139) *
              C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C155 +
            (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
                C30075) *
               C6717 +
           ((C3096 * C1071 + C3091 * C1077 + C3098 * C1070 + C30139 * C1076) *
                C155 +
            (C3096 * C1133 + C3091 * C1233 + C3098 * C1132 + C30139 * C1232) *
                C30075) *
               C30148) *
              C30030 * C30016 * C84 -
          (((C3098 * C1131 + C30139 * C1231 + C3096 * C1132 + C3091 * C1232) *
                C30075 +
            (C3098 * C1069 + C30139 * C1075 + C3096 * C1070 + C3091 * C1076) *
                C155) *
               C30148 +
           ((C3098 * C158 + C30139 * C291 + C3096 * C157 + C3091 * C290) *
                C30075 +
            (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C155) *
               C6717) *
              C30030 * C30016 * C85 +
          (((C3096 * C95 + C3091 * C100 + C3098 * C96 + C30139 * C101) * C155 +
            (C3096 * C158 + C3091 * C291 + C3098 * C159 + C30139 * C292) *
                C30075) *
               C6717 +
           ((C3096 * C1069 + C3091 * C1075 + C3098 * C2059 + C30139 * C2060) *
                C155 +
            (C3096 * C1131 + C3091 * C1231 + C3098 * C2115 + C30139 * C2243) *
                C30075) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C155 +
            (C3096 * C156 + C3091 * C289 + C3098 * C157 + C30139 * C290) *
                C30075) *
               C6717 +
           ((C3096 * C1071 + C3091 * C1077 + C3098 * C1070 + C30139 * C1076) *
                C155 +
            (C3096 * C1133 + C3091 * C1233 + C3098 * C1132 + C30139 * C1232) *
                C30075) *
               C30148) *
              C30030 * C624 -
          (((C6304 + C6305) * C30075 + (C6306 + C6307) * C155) * C30148 +
           ((C3877 + C3876) * C30075 + (C3875 + C3874) * C155) * C6717) *
              C30030 * C625 +
          (((C3881 + C3880) * C155 + (C3879 + C3878) * C30075) * C6717 +
           ((C3096 * C6059 + C3091 * C6061 + C3098 * C6060 + C30139 * C6062) *
                C155 +
            (C3096 * C6143 + C3091 * C6293 + C3098 * C6144 + C30139 * C6294) *
                C30075) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C3091 +
            C356 * C30139) *
               C6717 +
           ((C332 * C1071 + C1284 + C1284 + C30075 * C1277) * C3091 +
            C2306 * C30139) *
               C30148) *
              C30030 * C30016 * C84 -
          ((C2305 * C30139 + C2306 * C3091) * C30148 +
           (C357 * C30139 + C356 * C3091) * C6717) *
              C30030 * C30016 * C85 +
          ((C357 * C3091 + C358 * C30139) * C6717 +
           (C2305 * C3091 +
            (C332 * C2059 + C2300 + C2300 + C30075 * C2294) * C30139) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C3091 +
            C356 * C30139) *
               C6717 +
           ((C332 * C1071 + C1284 + C1284 + C30075 * C1277) * C3091 +
            C2306 * C30139) *
               C30148) *
              C30030 * C624 -
          (((C332 * C2594 + C2825 + C2825 + C30075 * C2821) * C30139 +
            (C332 * C2593 + C2824 + C2824 + C30075 * C2820) * C3091) *
               C30148 +
           (C1770 * C30139 +
            (C332 * C630 + C843 + C843 + C30075 * C836) * C3091) *
               C6717) *
              C30030 * C625 +
          (((C332 * C631 + C844 + C844 + C30075 * C837) * C3091 +
            (C332 * C632 + C845 + C845 + C30075 * C838) * C30139) *
               C6717 +
           ((C332 * C6059 + C7448 + C7448 + C30075 * C6373) * C3091 +
            (C332 * C6060 + C7449 + C7449 + C30075 * C6374) * C30139) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C155 +
            (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
                C30075) *
               C3091 +
           ((C6840 + C6841) * C155 + (C7006 + C7007) * C30075) * C30139) *
              C30030 * C30016 * C84 -
          (((C7008 + C7009) * C30075 + (C6846 + C6847) * C155) * C30139 +
           ((C7007 + C7006) * C30075 + (C6841 + C6840) * C155) * C3091) *
              C30030 * C30016 * C85 +
          (((C6847 + C6846) * C155 + (C7009 + C7008) * C30075) * C3091 +
           ((C6821 * C96 + C6717 * C226 + C6822 * C2059 + C30148 * C2179) *
                C155 +
            (C6821 * C159 + C6717 * C399 + C6822 * C2115 + C30148 * C2356) *
                C30075) *
               C30139) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C155 +
            (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
                C30075) *
               C3091 +
           ((C6840 + C6841) * C155 + (C7006 + C7007) * C30075) * C30139) *
              C30030 * C624 -
          (((C6822 * C2656 + C30148 * C2877 + C6821 * C691 + C6717 * C885) *
                C30075 +
            (C6822 * C2594 + C30148 * C2712 + C6821 * C629 + C6717 * C741) *
                C155) *
               C30139 +
           ((C6822 * C2655 + C30148 * C2876 + C6821 * C692 + C6717 * C886) *
                C30075 +
            (C6822 * C2593 + C30148 * C2711 + C6821 * C630 + C6717 * C742) *
                C155) *
               C3091) *
              C30030 * C625 +
          (((C6821 * C631 + C6717 * C743 + C6822 * C6059 + C30148 * C6213) *
                C155 +
            (C6821 * C693 + C6717 * C887 + C6822 * C6143 + C30148 * C6445) *
                C30075) *
               C3091 +
           ((C6821 * C632 + C6717 * C744 + C6822 * C6060 + C30148 * C6214) *
                C155 +
            (C6821 * C694 + C6717 * C888 + C6822 * C6144 + C30148 * C6446) *
                C30075) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C6821 +
           (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
               C6717 +
           (C3096 * C1071 + C3091 * C1077 + C3098 * C1070 + C30139 * C1076) *
               C6822 +
           (C3096 * C1183 + C3091 * C1371 + C3098 * C1182 + C30139 * C1370) *
               C30148) *
              C30075 * C30030 * C30016 * C84 -
          ((C3098 * C1181 + C30139 * C1369 + C3096 * C1182 + C3091 * C1370) *
               C30148 +
           (C3098 * C1069 + C30139 * C1075 + C3096 * C1070 + C3091 * C1076) *
               C6822 +
           (C3098 * C225 + C30139 * C457 + C3096 * C224 + C3091 * C456) *
               C6717 +
           (C3098 * C95 + C30139 * C100 + C3096 * C94 + C3091 * C99) * C6821) *
              C30075 * C30030 * C30016 * C85 +
          ((C3096 * C95 + C3091 * C100 + C3098 * C96 + C30139 * C101) * C6821 +
           (C3096 * C225 + C3091 * C457 + C3098 * C226 + C30139 * C458) *
               C6717 +
           (C3096 * C1069 + C3091 * C1075 + C3098 * C2059 + C30139 * C2060) *
               C6822 +
           (C3096 * C1181 + C3091 * C1369 + C3098 * C2179 + C30139 * C2417) *
               C30148) *
              C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3096 * C93 + C3091 * C98 + C3098 * C94 + C30139 * C99) * C6821 +
           (C3096 * C223 + C3091 * C455 + C3098 * C224 + C30139 * C456) *
               C6717 +
           (C3096 * C1071 + C3091 * C1077 + C3098 * C1070 + C30139 * C1076) *
               C6822 +
           (C3096 * C1183 + C3091 * C1371 + C3098 * C1182 + C30139 * C1370) *
               C30148) *
              C30075 * C30030 * C624 -
          ((C6523 + C6524) * C30148 + (C6306 + C6307) * C6822 +
           (C4064 + C4063) * C6717 + (C3875 + C3874) * C6821) *
              C30075 * C30030 * C625 +
          ((C3881 + C3880) * C6821 + (C4066 + C4065) * C6717 +
           (C3096 * C6059 + C3091 * C6061 + C3098 * C6060 + C30139 * C6062) *
               C6822 +
           (C3096 * C6213 + C3091 * C6516 + C3098 * C6214 + C30139 * C6517) *
               C30148) *
              C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C30075 * C156) * C6821 +
                      (C155 * C223 + C30075 * C498) * C6717 +
                      (C155 * C1071 + C30075 * C1133) * C6822 +
                      (C155 * C1183 + C30075 * C1415) * C30148) *
                         C3091 +
                     (C7110 + C7111 + C7112 + C7113) * C30139) *
                        C30030 * C30016 * C84 -
                    ((C7114 + C7115 + C7116 + C7117) * C30139 +
                     (C7113 + C7112 + C7111 + C7110) * C3091) *
                        C30030 * C30016 * C85 +
                    ((C7117 + C7116 + C7115 + C7114) * C3091 +
                     (C184 * C6821 + C515 * C6717 +
                      (C155 * C2059 + C30075 * C2115) * C6822 +
                      (C155 * C2179 + C30075 * C2468) * C30148) *
                         C30139) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C30075 * C156) * C6821 +
                      (C155 * C223 + C30075 * C498) * C6717 +
                      (C155 * C1071 + C30075 * C1133) * C6822 +
                      (C155 * C1183 + C30075 * C1415) * C30148) *
                         C3091 +
                     (C7110 + C7111 + C7112 + C7113) * C30139) *
                        C30030 * C624 -
                    (((C155 * C2712 + C30075 * C2983) * C30148 +
                      (C155 * C2594 + C30075 * C2656) * C6822 + C1941 * C6717 +
                      C1593 * C6821) *
                         C30139 +
                     ((C155 * C2711 + C30075 * C2982) * C30148 +
                      (C155 * C2593 + C30075 * C2655) * C6822 +
                      (C155 * C742 + C30075 * C974) * C6717 +
                      (C155 * C630 + C30075 * C692) * C6821) *
                         C3091) *
                        C30030 * C625 +
                    (((C155 * C631 + C30075 * C693) * C6821 +
                      (C155 * C743 + C30075 * C975) * C6717 +
                      (C155 * C6059 + C30075 * C6143) * C6822 +
                      (C155 * C6213 + C30075 * C6590) * C30148) *
                         C3091 +
                     ((C155 * C632 + C30075 * C694) * C6821 +
                      (C155 * C744 + C30075 * C976) * C6717 +
                      (C155 * C6060 + C30075 * C6144) * C6822 +
                      (C155 * C6214 + C30075 * C6591) * C30148) *
                         C30139) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                      C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                         C30075 * C3091 +
                     (C7194 + C7195) * C30075 * C30139) *
                        C30030 * C30016 * C84 -
                    ((C7196 + C7197) * C30075 * C30139 +
                     (C7195 + C7194) * C30075 * C3091) *
                        C30030 * C30016 * C85 +
                    ((C7197 + C7196) * C30075 * C3091 +
                     (C7167 * C96 + C7184 + C7184 + C6717 * C561 +
                      C7168 * C2059 + C7185 + C7185 + C30148 * C2529) *
                         C30075 * C30139) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                      C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                         C30075 * C3091 +
                     (C7194 + C7195) * C30075 * C30139) *
                        C30030 * C624 -
                    ((C7168 * C2594 + C7650 + C7650 + C30148 * C3036 +
                      C7167 * C629 + C7651 + C7651 + C6717 * C1017) *
                         C30075 * C30139 +
                     (C7168 * C2593 + C7652 + C7652 + C30148 * C3035 +
                      C7167 * C630 + C7653 + C7653 + C6717 * C1018) *
                         C30075 * C3091) *
                        C30030 * C625 +
                    ((C7167 * C631 + C7654 + C7654 + C6717 * C1019 +
                      C7168 * C6059 + C7655 + C7655 + C30148 * C6658) *
                         C30075 * C3091 +
                     (C7167 * C632 + C7656 + C7656 + C6717 * C1020 +
                      C7168 * C6060 + C7657 + C7657 + C30148 * C6659) *
                         C30075 * C30139) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexx[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                       C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                          C30090 * C10233 +
                      (C10802 + C10803) * C30090 * C30146) *
                         C30030 * C1519 -
                     ((C10804 + C10805) * C30090 * C30146 +
                      (C10803 + C10802) * C30090 * C10233) *
                         C30030 * C1520) *
                        C1521 +
                    (((C11800 + C11801) * C30090 * C10233 +
                      (C10235 * C632 + C11794 + C11794 + C10231 * C644 +
                       C10237 * C633 + C11795 + C11795 + C30139 * C645) *
                          C30090 * C30146) *
                         C30030 * C1520 -
                     ((C11801 + C11800) * C30090 * C30146 +
                      (C10237 * C95 + C10246 + C10246 + C30139 * C105 +
                       C10235 * C94 + C10247 + C10247 + C10231 * C104) *
                          C30090 * C10233) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C10236 +
            (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
                C10231 +
            (C10320 + C10321) * C10238 + (C10322 + C10323) * C30139) *
               C30090 * C30030 * C1519 -
           ((C11876 + C11877) * C30139 + (C11878 + C11879) * C10238 +
            (C10302 * C637 + C30146 * C699 + C10301 * C636 + C10233 * C698) *
                C10231 +
            (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
                C10236) *
               C30090 * C30030 * C1520) *
              C1521 +
          (((C11879 + C11878) * C10236 + (C11877 + C11876) * C10231 +
            (C10301 * C628 + C10233 * C690 + C10302 * C633 + C30146 * C695) *
                C10238 +
            (C10301 * C634 + C10233 * C696 + C10302 * C639 + C30146 * C701) *
                C30139) *
               C30090 * C30030 * C1520 -
           ((C10324 + C10325) * C30139 + (C10326 + C10327) * C10238 +
            (C10323 + C10322) * C10231 + (C10321 + C10320) * C10236) *
               C30090 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C30090 * C223) * C10236 +
             (C222 * C98 + C30090 * C228) * C10231 + C246 * C10238 +
             C247 * C30139) *
                C10233 +
            (C10906 + C10907 + C10908 + C10909) * C30146) *
               C30030 * C1519 -
           ((C10910 + C10911 + C10912 + C10913) * C30146 +
            (C10909 + C10908 + C10907 + C10906) * C10233) *
               C30030 * C1520) *
              C1521 +
          (((C11946 + C11947 + C11948 + C11949) * C10233 +
            (C3797 * C10236 + C3796 * C10231 +
             (C222 * C633 + C30090 * C745) * C10238 +
             (C222 * C639 + C30090 * C751) * C30139) *
                C30146) *
               C30030 * C1520 -
           ((C11949 + C11948 + C11947 + C11946) * C30146 +
            (C249 * C30139 + C248 * C10238 + C247 * C10231 + C246 * C10236) *
                C10233) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
                C10301 +
            (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
                C10233 +
            (C10980 + C10981) * C10302 + (C10982 + C10983) * C30146) *
               C30090 * C30030 * C1519 -
           ((C10984 + C10985) * C30146 + (C10986 + C10987) * C10302 +
            (C10983 + C10982) * C10233 + (C10981 + C10980) * C10301) *
               C30090 * C30030 * C1520) *
              C1521 +
          (((C12024 + C12025) * C10301 + (C12026 + C12027) * C10233 +
            (C10236 * C632 + C10231 * C638 + C10238 * C633 + C30139 * C639) *
                C10302 +
            (C10236 * C694 + C10231 * C794 + C10238 * C695 + C30139 * C795) *
                C30146) *
               C30090 * C30030 * C1520 -
           ((C12027 + C12026) * C30146 + (C12025 + C12024) * C10302 +
            (C10238 * C158 + C30139 * C291 + C10236 * C157 + C10231 * C290) *
                C10233 +
            (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
                C10301) *
               C30090 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                       C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                          C10231 +
                      (C10504 + C10505) * C30139) *
                         C30090 * C30030 * C1519 -
                     ((C12104 + C12105) * C30139 +
                      (C10478 * C631 + C11040 + C11040 + C30146 * C837 +
                       C10477 * C630 + C11041 + C11041 + C10233 * C836) *
                          C10231) *
                         C30090 * C30030 * C1520) *
                        C1521 +
                    (((C12105 + C12104) * C10231 +
                      (C10477 * C628 + C12098 + C12098 + C10233 * C834 +
                       C10478 * C633 + C12099 + C12099 + C30146 * C839) *
                          C30139) *
                         C30090 * C30030 * C1520 -
                     ((C10506 + C10507) * C30139 + (C10505 + C10504) * C10231) *
                         C30090 * C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C30090 * C223) * C10301 +
                       (C222 * C156 + C30090 * C396) * C10233 + C3794 * C10302 +
                       C4000 * C30146) *
                          C10231 +
                      (C10558 + C10559 + C10560 + C10561) * C30139) *
                         C30030 * C1519 -
                     ((C12172 + C12173 + C12174 + C12175) * C30139 +
                      (C4002 * C30146 + C3799 * C10302 + C4000 * C10233 +
                       C3794 * C10301) *
                          C10231) *
                         C30030 * C1520) *
                        C1521 +
                    (((C12175 + C12174 + C12173 + C12172) * C10231 +
                      (C1655 * C10301 + C1828 * C10233 +
                       (C222 * C633 + C30090 * C745) * C10302 +
                       (C222 * C695 + C30090 * C889) * C30146) *
                          C30139) *
                         C30030 * C1520 -
                     ((C10562 + C10563 + C10564 + C10565) * C30139 +
                      (C10561 + C10560 + C10559 + C10558) * C10231) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
                 C222 +
             (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
                 C30090) *
                C10233 +
            ((C10980 + C10981) * C222 + (C11154 + C11155) * C30090) * C30146) *
               C30030 * C1519 -
           (((C11156 + C11157) * C30090 + (C10986 + C10987) * C222) * C30146 +
            ((C11155 + C11154) * C30090 + (C10981 + C10980) * C222) * C10233) *
               C30030 * C1520) *
              C1521 +
          ((((C12024 + C12025) * C222 + (C12246 + C12247) * C30090) * C10233 +
            ((C10236 * C632 + C10231 * C638 + C10238 * C633 + C30139 * C639) *
                 C222 +
             (C10236 * C744 + C10231 * C932 + C10238 * C745 + C30139 * C933) *
                 C30090) *
                C30146) *
               C30030 * C1520 -
           (((C12247 + C12246) * C30090 + (C12025 + C12024) * C222) * C30146 +
            ((C10238 * C225 + C30139 * C457 + C10236 * C224 + C10231 * C456) *
                 C30090 +
             (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
                 C222) *
                C10233) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                 C222 +
             (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
                 C30090) *
                C10231 +
            ((C10320 + C10321) * C222 + (C10674 + C10675) * C30090) * C30139) *
               C30030 * C1519 -
           (((C12318 + C12319) * C30090 + (C11878 + C11879) * C222) * C30139 +
            ((C10302 * C743 + C30146 * C975 + C10301 * C742 + C10233 * C974) *
                 C30090 +
             (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
                 C222) *
                C10231) *
               C30030 * C1520) *
              C1521 +
          ((((C11879 + C11878) * C222 + (C12319 + C12318) * C30090) * C10231 +
            ((C10301 * C628 + C10233 * C690 + C10302 * C633 + C30146 * C695) *
                 C222 +
             (C10301 * C740 + C10233 * C972 + C10302 * C745 + C30146 * C977) *
                 C30090) *
                C30139) *
               C30030 * C1520 -
           (((C10676 + C10677) * C30090 + (C10326 + C10327) * C222) * C30139 +
            ((C10675 + C10674) * C30090 + (C10321 + C10320) * C222) * C10231) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C557 * C93 + C564 + C564 + C30090 * C558) * C10233 +
             C4185 * C30146) *
                C10231 +
            (C10728 + C10729) * C30139) *
               C30030 * C1519 -
           ((C12386 + C12387) * C30139 +
            (C4187 * C30146 + C4185 * C10233) * C10231) *
               C30030 * C1520) *
              C1521 +
          (((C12387 + C12386) * C10231 +
            (C2004 * C10233 +
             (C557 * C633 + C1028 + C1028 + C30090 * C1021) * C30146) *
                C30139) *
               C30030 * C1520 -
           ((C10730 + C10731) * C30139 + (C10729 + C10728) * C10231) * C30030 *
               C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexx[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                       C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                          C30090 * C10233 +
                      (C10802 + C10803) * C30090 * C30146) *
                         C2057 -
                     ((C13098 + C13099) * C30090 * C30146 +
                      (C10237 * C1070 + C11310 + C11310 + C30139 * C1082 +
                       C10235 * C1071 + C11311 + C11311 + C10231 * C1083) *
                          C30090 * C10233) *
                         C2058) *
                        C1519 +
                    (((C13099 + C13098) * C30090 * C10233 +
                      (C10235 * C6059 + C13092 + C13092 + C10231 * C6063 +
                       C10237 * C6060 + C13093 + C13093 + C30139 * C6064) *
                          C30090 * C30146) *
                         C2058 -
                     ((C10804 + C10805) * C30090 * C30146 +
                      (C10803 + C10802) * C30090 * C10233) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C10236 +
            (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
                C10231 +
            (C10320 + C10321) * C10238 + (C10322 + C10323) * C30139) *
               C30090 * C2057 -
           ((C12532 + C12533) * C30139 + (C12534 + C12535) * C10238 +
            (C10302 * C2596 + C30146 * C2658 + C10301 * C1077 +
             C10233 * C1139) *
                C10231 +
            (C10302 * C2593 + C30146 * C2655 + C10301 * C1071 +
             C10233 * C1133) *
                C10236) *
               C30090 * C2058) *
              C1519 +
          (((C10301 * C2593 + C10233 * C2655 + C10302 * C6059 +
             C30146 * C6143) *
                C10236 +
            (C10301 * C2596 + C10233 * C2658 + C10302 * C6061 +
             C30146 * C6145) *
                C10231 +
            (C10301 * C2594 + C10233 * C2656 + C10302 * C6060 +
             C30146 * C6144) *
                C10238 +
            (C10301 * C2597 + C10233 * C2659 + C10302 * C6062 +
             C30146 * C6146) *
                C30139) *
               C30090 * C2058 -
           ((C11876 + C11877) * C30139 + (C11878 + C11879) * C10238 +
            (C10302 * C637 + C30146 * C699 + C10301 * C636 + C10233 * C698) *
                C10231 +
            (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
                C10236) *
               C30090 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C30090 * C223) * C10236 +
                       (C222 * C98 + C30090 * C228) * C10231 + C246 * C10238 +
                       C247 * C30139) *
                          C10233 +
                      (C10906 + C10907 + C10908 + C10909) * C30146) *
                         C2057 -
                     ((C13232 + C13233 + C13234 + C13235) * C30146 +
                      (C2192 * C30139 + C2193 * C10238 +
                       (C222 * C1077 + C30090 * C1189) * C10231 +
                       (C222 * C1071 + C30090 * C1183) * C10236) *
                          C10233) *
                         C2058) *
                        C1519 +
                    (((C13235 + C13234 + C13233 + C13232) * C10233 +
                      ((C222 * C6059 + C30090 * C6213) * C10236 +
                       (C222 * C6061 + C30090 * C6215) * C10231 +
                       (C222 * C6060 + C30090 * C6214) * C10238 +
                       (C222 * C6062 + C30090 * C6216) * C30139) *
                          C30146) *
                         C2058 -
                     ((C10910 + C10911 + C10912 + C10913) * C30146 +
                      (C10909 + C10908 + C10907 + C10906) * C10233) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
                C10301 +
            (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
                C10233 +
            (C10980 + C10981) * C10302 + (C10982 + C10983) * C30146) *
               C30090 * C2057 -
           ((C13310 + C13311) * C30146 + (C13312 + C13313) * C10302 +
            (C10238 * C1132 + C30139 * C1232 + C10236 * C1133 +
             C10231 * C1233) *
                C10233 +
            (C10238 * C1070 + C30139 * C1076 + C10236 * C1071 +
             C10231 * C1077) *
                C10301) *
               C30090 * C2058) *
              C1519 +
          (((C13313 + C13312) * C10301 + (C13311 + C13310) * C10233 +
            (C10236 * C6059 + C10231 * C6061 + C10238 * C6060 +
             C30139 * C6062) *
                C10302 +
            (C10236 * C6143 + C10231 * C6293 + C10238 * C6144 +
             C30139 * C6294) *
                C30146) *
               C30090 * C2058 -
           ((C10984 + C10985) * C30146 + (C10986 + C10987) * C10302 +
            (C10983 + C10982) * C10233 + (C10981 + C10980) * C10301) *
               C30090 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                       C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                          C10231 +
                      (C10504 + C10505) * C30139) *
                         C30090 * C2057 -
                     ((C12744 + C12745) * C30139 +
                      (C10478 * C2593 + C11518 + C11518 + C30146 * C2820 +
                       C10477 * C1071 + C11519 + C11519 + C10233 * C1277) *
                          C10231) *
                         C30090 * C2058) *
                        C1519 +
                    (((C10477 * C2593 + C13380 + C13380 + C10233 * C2820 +
                       C10478 * C6059 + C13381 + C13381 + C30146 * C6373) *
                          C10231 +
                      (C10477 * C2594 + C13382 + C13382 + C10233 * C2821 +
                       C10478 * C6060 + C13383 + C13383 + C30146 * C6374) *
                          C30139) *
                         C30090 * C2058 -
                     ((C12104 + C12105) * C30139 +
                      (C10478 * C631 + C11040 + C11040 + C30146 * C837 +
                       C10477 * C630 + C11041 + C11041 + C10233 * C836) *
                          C10231) *
                         C30090 * C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C30090 * C223) * C10301 +
                       (C222 * C156 + C30090 * C396) * C10233 + C3794 * C10302 +
                       C4000 * C30146) *
                          C10231 +
                      (C10558 + C10559 + C10560 + C10561) * C30139) *
                         C2057 -
                     ((C12812 + C12813 + C12814 + C12815) * C30139 +
                      (C6450 * C30146 + C6225 * C10302 +
                       (C222 * C1133 + C30090 * C1327) * C10233 +
                       (C222 * C1071 + C30090 * C1183) * C10301) *
                          C10231) *
                         C2058) *
                        C1519 +
                    (((C6225 * C10301 + C6450 * C10233 +
                       (C222 * C6059 + C30090 * C6213) * C10302 +
                       (C222 * C6143 + C30090 * C6445) * C30146) *
                          C10231 +
                      (C5565 * C10301 + C5781 * C10233 +
                       (C222 * C6060 + C30090 * C6214) * C10302 +
                       (C222 * C6144 + C30090 * C6446) * C30146) *
                          C30139) *
                         C2058 -
                     ((C12172 + C12173 + C12174 + C12175) * C30139 +
                      (C4002 * C30146 + C3799 * C10302 + C4000 * C10233 +
                       C3794 * C10301) *
                          C10231) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
                 C222 +
             (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
                 C30090) *
                C10233 +
            ((C10980 + C10981) * C222 + (C11154 + C11155) * C30090) * C30146) *
               C2057 -
           (((C13520 + C13521) * C30090 + (C13312 + C13313) * C222) * C30146 +
            ((C10238 * C1182 + C30139 * C1370 + C10236 * C1183 +
              C10231 * C1371) *
                 C30090 +
             (C10238 * C1070 + C30139 * C1076 + C10236 * C1071 +
              C10231 * C1077) *
                 C222) *
                C10233) *
               C2058) *
              C1519 +
          ((((C13313 + C13312) * C222 + (C13521 + C13520) * C30090) * C10233 +
            ((C10236 * C6059 + C10231 * C6061 + C10238 * C6060 +
              C30139 * C6062) *
                 C222 +
             (C10236 * C6213 + C10231 * C6516 + C10238 * C6214 +
              C30139 * C6517) *
                 C30090) *
                C30146) *
               C2058 -
           (((C11156 + C11157) * C30090 + (C10986 + C10987) * C222) * C30146 +
            ((C11155 + C11154) * C30090 + (C10981 + C10980) * C222) * C10233) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                 C222 +
             (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
                 C30090) *
                C10231 +
            ((C10320 + C10321) * C222 + (C10674 + C10675) * C30090) * C30139) *
               C2057 -
           (((C12952 + C12953) * C30090 + (C12534 + C12535) * C222) * C30139 +
            ((C10302 * C2711 + C30146 * C2982 + C10301 * C1183 +
              C10233 * C1415) *
                 C30090 +
             (C10302 * C2593 + C30146 * C2655 + C10301 * C1071 +
              C10233 * C1133) *
                 C222) *
                C10231) *
               C2058) *
              C1519 +
          ((((C10301 * C2593 + C10233 * C2655 + C10302 * C6059 +
              C30146 * C6143) *
                 C222 +
             (C10301 * C2711 + C10233 * C2982 + C10302 * C6213 +
              C30146 * C6590) *
                 C30090) *
                C10231 +
            ((C10301 * C2594 + C10233 * C2656 + C10302 * C6060 +
              C30146 * C6144) *
                 C222 +
             (C10301 * C2712 + C10233 * C2983 + C10302 * C6214 +
              C30146 * C6591) *
                 C30090) *
                C30139) *
               C2058 -
           (((C12318 + C12319) * C30090 + (C11878 + C11879) * C222) * C30139 +
            ((C10302 * C743 + C30146 * C975 + C10301 * C742 + C10233 * C974) *
                 C30090 +
             (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
                 C222) *
                C10231) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C557 * C93 + C564 + C564 + C30090 * C558) * C10233 +
             C4185 * C30146) *
                C10231 +
            (C10728 + C10729) * C30139) *
               C2057 -
           ((C13020 + C13021) * C30139 +
            (C6667 * C30146 +
             (C557 * C1071 + C1466 + C1466 + C30090 * C1459) * C10233) *
                C10231) *
               C2058) *
              C1519 +
          (((C6667 * C10233 +
             (C557 * C6059 + C6663 + C6663 + C30090 * C6658) * C30146) *
                C10231 +
            (C5992 * C10233 +
             (C557 * C6060 + C6664 + C6664 + C30090 * C6659) * C30146) *
                C30139) *
               C2058 -
           ((C12386 + C12387) * C30139 +
            (C4187 * C30146 + C4185 * C10233) * C10231) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] += (-std::pow(Pi, 2.5) *
                   (((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                      C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                         C30090 * C10233 +
                     (C10802 + C10803) * C30090 * C30146) *
                        C30030 * C624 -
                    ((C10804 + C10805) * C30090 * C30146 +
                     (C10803 + C10802) * C30090 * C10233) *
                        C30030 * C625 +
                    ((C10805 + C10804) * C30090 * C10233 +
                     (C10235 * C3641 + C10792 + C10792 + C10231 * C3645 +
                      C10237 * C3642 + C10793 + C10793 + C30139 * C3646) *
                         C30090 * C30146) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                      C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                         C30090 * C10233 +
                     (C10235 * C630 + C10242 + C10242 + C10231 * C642 +
                      C10237 * C629 + C10243 + C10243 + C30139 * C641) *
                         C30090 * C30146) *
                        C30030 * C30016 * C84 -
                    ((C10237 * C628 + C10244 + C10244 + C30139 * C640 +
                      C10235 * C629 + C10245 + C10245 + C10231 * C641) *
                         C30090 * C30146 +
                     (C10237 * C95 + C10246 + C10246 + C30139 * C105 +
                      C10235 * C94 + C10247 + C10247 + C10231 * C104) *
                         C30090 * C10233) *
                        C30030 * C30016 * C85 +
                    ((C10235 * C95 + C10248 + C10248 + C10231 * C105 +
                      C10237 * C96 + C10249 + C10249 + C30139 * C106) *
                         C30090 * C10233 +
                     (C10235 * C628 + C10250 + C10250 + C10231 * C640 +
                      C10237 * C1523 + C10251 + C10251 + C30139 * C1525) *
                         C30090 * C30146) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                      C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                         C30090 * C10233 +
                     (C10802 + C10803) * C30090 * C30146) *
                        C1066 -
                    ((C10237 * C2594 + C11308 + C11308 + C30139 * C2600 +
                      C10235 * C2593 + C11309 + C11309 + C10231 * C2599) *
                         C30090 * C30146 +
                     (C10237 * C1070 + C11310 + C11310 + C30139 * C1082 +
                      C10235 * C1071 + C11311 + C11311 + C10231 * C1083) *
                         C30090 * C10233) *
                        C1067 +
                    ((C10235 * C1072 + C11312 + C11312 + C10231 * C1084 +
                      C10237 * C1073 + C11313 + C11313 + C30139 * C1085) *
                         C30090 * C10233 +
                     (C10235 * C4237 + C11314 + C11314 + C10231 * C4241 +
                      C10237 * C4238 + C11315 + C11315 + C30139 * C4242) *
                         C30090 * C30146) *
                        C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (-std::pow(Pi, 2.5) *
         (((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
               C10236 +
           (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
               C10231 +
           (C10320 + C10321) * C10238 + (C10322 + C10323) * C30139) *
              C30090 * C30030 * C624 -
          ((C10302 * C638 + C30146 * C700 + C10301 * C635 + C10233 * C697) *
               C30139 +
           (C10302 * C632 + C30146 * C694 + C10301 * C629 + C10233 * C691) *
               C10238 +
           (C10302 * C637 + C30146 * C699 + C10301 * C636 + C10233 * C698) *
               C10231 +
           (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
               C10236) *
              C30090 * C30030 * C625 +
          ((C10301 * C631 + C10233 * C693 + C10302 * C3641 + C30146 * C3721) *
               C10236 +
           (C10301 * C637 + C10233 * C699 + C10302 * C3643 + C30146 * C3723) *
               C10231 +
           (C10301 * C632 + C10233 * C694 + C10302 * C3642 + C30146 * C3722) *
               C10238 +
           (C10301 * C638 + C10233 * C700 + C10302 * C3644 + C30146 * C3724) *
               C30139) *
              C30090 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
               C10236 +
           (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
               C10231 +
           (C10320 + C10321) * C10238 + (C10322 + C10323) * C30139) *
              C30090 * C30030 * C30016 * C84 -
          ((C10324 + C10325) * C30139 + (C10326 + C10327) * C10238 +
           (C10323 + C10322) * C10231 + (C10321 + C10320) * C10236) *
              C30090 * C30030 * C30016 * C85 +
          ((C10327 + C10326) * C10236 + (C10325 + C10324) * C10231 +
           (C10301 * C96 + C10233 * C159 + C10302 * C1523 + C30146 * C1579) *
               C10238 +
           (C10301 * C101 + C10233 * C164 + C10302 * C1524 + C30146 * C1580) *
               C30139) *
              C30090 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
               C10236 +
           (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
               C10231 +
           (C10320 + C10321) * C10238 + (C10322 + C10323) * C30139) *
              C30090 * C1066 -
          ((C10302 * C2597 + C30146 * C2659 + C10301 * C1076 + C10233 * C1138) *
               C30139 +
           (C10302 * C2594 + C30146 * C2656 + C10301 * C1070 + C10233 * C1132) *
               C10238 +
           (C10302 * C2596 + C30146 * C2658 + C10301 * C1077 + C10233 * C1139) *
               C10231 +
           (C10302 * C2593 + C30146 * C2655 + C10301 * C1071 + C10233 * C1133) *
               C10236) *
              C30090 * C1067 +
          ((C10301 * C1072 + C10233 * C1134 + C10302 * C4237 + C30146 * C4301) *
               C10236 +
           (C10301 * C1078 + C10233 * C1140 + C10302 * C4239 + C30146 * C4303) *
               C10231 +
           (C10301 * C1073 + C10233 * C1135 + C10302 * C4238 + C30146 * C4302) *
               C10238 +
           (C10301 * C1079 + C10233 * C1141 + C10302 * C4240 + C30146 * C4304) *
               C30139) *
              C30090 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (-std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C10236 +
            (C222 * C98 + C30090 * C228) * C10231 + C246 * C10238 +
            C247 * C30139) *
               C10233 +
           (C10906 + C10907 + C10908 + C10909) * C30146) *
              C30030 * C624 -
          ((C10910 + C10911 + C10912 + C10913) * C30146 +
           (C10909 + C10908 + C10907 + C10906) * C10233) *
              C30030 * C625 +
          ((C10913 + C10912 + C10911 + C10910) * C10233 +
           ((C222 * C3641 + C30090 * C3775) * C10236 +
            (C222 * C3643 + C30090 * C3777) * C10231 +
            (C222 * C3642 + C30090 * C3776) * C10238 +
            (C222 * C3644 + C30090 * C3778) * C30139) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C10236 +
            (C222 * C98 + C30090 * C228) * C10231 + C246 * C10238 +
            C247 * C30139) *
               C10233 +
           (C3794 * C10236 + C3795 * C10231 + C1657 * C10238 + C1656 * C30139) *
               C30146) *
              C30030 * C30016 * C84 -
          ((C1654 * C30139 + C1655 * C10238 + C1656 * C10231 + C1657 * C10236) *
               C30146 +
           (C249 * C30139 + C248 * C10238 + C247 * C10231 + C246 * C10236) *
               C10233) *
              C30030 * C30016 * C85 +
          ((C248 * C10236 + C249 * C10231 + C251 * C10238 + C250 * C30139) *
               C10233 +
           (C1655 * C10236 + C1654 * C10231 +
            (C222 * C1523 + C30090 * C1643) * C10238 +
            (C222 * C1524 + C30090 * C1644) * C30139) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C10236 +
            (C222 * C98 + C30090 * C228) * C10231 + C246 * C10238 +
            C247 * C30139) *
               C10233 +
           (C10906 + C10907 + C10908 + C10909) * C30146) *
              C1066 -
          ((C5564 * C30139 + C5565 * C10238 + C6224 * C10231 + C6225 * C10236) *
               C30146 +
           (C2192 * C30139 + C2193 * C10238 +
            (C222 * C1077 + C30090 * C1189) * C10231 +
            (C222 * C1071 + C30090 * C1183) * C10236) *
               C10233) *
              C1067 +
          (((C222 * C1072 + C30090 * C1184) * C10236 +
            (C222 * C1078 + C30090 * C1190) * C10231 +
            (C222 * C1073 + C30090 * C1185) * C10238 +
            (C222 * C1079 + C30090 * C1191) * C30139) *
               C10233 +
           ((C222 * C4237 + C30090 * C4355) * C10236 +
            (C222 * C4239 + C30090 * C4357) * C10231 +
            (C222 * C4238 + C30090 * C4356) * C10238 +
            (C222 * C4240 + C30090 * C4358) * C30139) *
               C30146) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[17] +=
        (-std::pow(Pi, 2.5) *
         (((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
               C10301 +
           (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
               C10233 +
           (C10980 + C10981) * C10302 + (C10982 + C10983) * C30146) *
              C30090 * C30030 * C624 -
          ((C10984 + C10985) * C30146 + (C10986 + C10987) * C10302 +
           (C10983 + C10982) * C10233 + (C10981 + C10980) * C10301) *
              C30090 * C30030 * C625 +
          ((C10987 + C10986) * C10301 + (C10985 + C10984) * C10233 +
           (C10236 * C3641 + C10231 * C3643 + C10238 * C3642 + C30139 * C3644) *
               C10302 +
           (C10236 * C3721 + C10231 * C3855 + C10238 * C3722 + C30139 * C3856) *
               C30146) *
              C30090 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
               C10301 +
           (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
               C10233 +
           (C10236 * C630 + C10231 * C636 + C10238 * C629 + C30139 * C635) *
               C10302 +
           (C10236 * C692 + C10231 * C792 + C10238 * C691 + C30139 * C791) *
               C30146) *
              C30090 * C30030 * C30016 * C84 -
          ((C10238 * C690 + C30139 * C790 + C10236 * C691 + C10231 * C791) *
               C30146 +
           (C10238 * C628 + C30139 * C634 + C10236 * C629 + C10231 * C635) *
               C10302 +
           (C10238 * C158 + C30139 * C291 + C10236 * C157 + C10231 * C290) *
               C10233 +
           (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
               C10301) *
              C30090 * C30030 * C30016 * C85 +
          ((C10236 * C95 + C10231 * C100 + C10238 * C96 + C30139 * C101) *
               C10301 +
           (C10236 * C158 + C10231 * C291 + C10238 * C159 + C30139 * C292) *
               C10233 +
           (C10236 * C628 + C10231 * C634 + C10238 * C1523 + C30139 * C1524) *
               C10302 +
           (C10236 * C690 + C10231 * C790 + C10238 * C1579 + C30139 * C1707) *
               C30146) *
              C30090 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
               C10301 +
           (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
               C10233 +
           (C10980 + C10981) * C10302 + (C10982 + C10983) * C30146) *
              C30090 * C1066 -
          ((C10238 * C2656 + C30139 * C2768 + C10236 * C2655 + C10231 * C2767) *
               C30146 +
           (C10238 * C2594 + C30139 * C2597 + C10236 * C2593 + C10231 * C2596) *
               C10302 +
           (C10238 * C1132 + C30139 * C1232 + C10236 * C1133 + C10231 * C1233) *
               C10233 +
           (C10238 * C1070 + C30139 * C1076 + C10236 * C1071 + C10231 * C1077) *
               C10301) *
              C30090 * C1067 +
          ((C10236 * C1072 + C10231 * C1078 + C10238 * C1073 + C30139 * C1079) *
               C10301 +
           (C10236 * C1134 + C10231 * C1234 + C10238 * C1135 + C30139 * C1235) *
               C10233 +
           (C10236 * C4237 + C10231 * C4239 + C10238 * C4238 + C30139 * C4240) *
               C10302 +
           (C10236 * C4301 + C10231 * C4409 + C10238 * C4302 + C30139 * C4410) *
               C30146) *
              C30090 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyy[17] += (-std::pow(Pi, 2.5) *
                   (((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                      C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                         C10231 +
                     (C10504 + C10505) * C30139) *
                        C30090 * C30030 * C624 -
                    ((C10478 * C632 + C11038 + C11038 + C30146 * C838 +
                      C10477 * C629 + C11039 + C11039 + C10233 * C835) *
                         C30139 +
                     (C10478 * C631 + C11040 + C11040 + C30146 * C837 +
                      C10477 * C630 + C11041 + C11041 + C10233 * C836) *
                         C10231) *
                        C30090 * C30030 * C625 +
                    ((C10477 * C631 + C11042 + C11042 + C10233 * C837 +
                      C10478 * C3641 + C11043 + C11043 + C30146 * C3931) *
                         C10231 +
                     (C10477 * C632 + C11044 + C11044 + C10233 * C838 +
                      C10478 * C3642 + C11045 + C11045 + C30146 * C3932) *
                         C30139) *
                        C30090 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                      C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                         C10231 +
                     (C10504 + C10505) * C30139) *
                        C30090 * C30030 * C30016 * C84 -
                    ((C10506 + C10507) * C30139 + (C10505 + C10504) * C10231) *
                        C30090 * C30030 * C30016 * C85 +
                    ((C10507 + C10506) * C10231 +
                     (C10477 * C96 + C10494 + C10494 + C10233 * C336 +
                      C10478 * C1523 + C10495 + C10495 + C30146 * C1758) *
                         C30139) *
                        C30090 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                      C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                         C10231 +
                     (C10504 + C10505) * C30139) *
                        C30090 * C1066 -
                    ((C10478 * C2594 + C11516 + C11516 + C30146 * C2821 +
                      C10477 * C1070 + C11517 + C11517 + C10233 * C1276) *
                         C30139 +
                     (C10478 * C2593 + C11518 + C11518 + C30146 * C2820 +
                      C10477 * C1071 + C11519 + C11519 + C10233 * C1277) *
                         C10231) *
                        C30090 * C1067 +
                    ((C10477 * C1072 + C11520 + C11520 + C10233 * C1278 +
                      C10478 * C4237 + C11521 + C11521 + C30146 * C4461) *
                         C10231 +
                     (C10477 * C1073 + C11522 + C11522 + C10233 * C1279 +
                      C10478 * C4238 + C11523 + C11523 + C30146 * C4462) *
                         C30139) *
                        C30090 * C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[17] +=
        (-std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C10301 +
            (C222 * C156 + C30090 * C396) * C10233 + C3794 * C10302 +
            C4000 * C30146) *
               C10231 +
           (C10558 + C10559 + C10560 + C10561) * C30139) *
              C30030 * C624 -
          ((C4001 * C30146 + C3797 * C10302 + C1829 * C10233 + C1657 * C10301) *
               C30139 +
           (C4002 * C30146 + C3799 * C10302 + C4000 * C10233 + C3794 * C10301) *
               C10231) *
              C30030 * C625 +
          ((C3799 * C10301 + C4002 * C10233 +
            (C222 * C3641 + C30090 * C3775) * C10302 +
            (C222 * C3721 + C30090 * C3991) * C30146) *
               C10231 +
           (C3797 * C10301 + C4001 * C10233 +
            (C222 * C3642 + C30090 * C3776) * C10302 +
            (C222 * C3722 + C30090 * C3992) * C30146) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C222 * C93 + C30090 * C223) * C10301 +
                                (C222 * C156 + C30090 * C396) * C10233 +
                                C3794 * C10302 + C4000 * C30146) *
                                   C10231 +
                               (C10558 + C10559 + C10560 + C10561) * C30139) *
                                  C30030 * C30016 * C84 -
                              ((C10562 + C10563 + C10564 + C10565) * C30139 +
                               (C10561 + C10560 + C10559 + C10558) * C10231) *
                                  C30030 * C30016 * C85 +
                              ((C10565 + C10564 + C10563 + C10562) * C10231 +
                               (C251 * C10301 + C413 * C10233 +
                                (C222 * C1523 + C30090 * C1643) * C10302 +
                                (C222 * C1579 + C30090 * C1820) * C30146) *
                                   C30139) *
                                  C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C10301 +
            (C222 * C156 + C30090 * C396) * C10233 + C3794 * C10302 +
            C4000 * C30146) *
               C10231 +
           (C10558 + C10559 + C10560 + C10561) * C30139) *
              C1066 -
          ((C5781 * C30146 + C5565 * C10302 + C2365 * C10233 + C2193 * C10301) *
               C30139 +
           (C6450 * C30146 + C6225 * C10302 +
            (C222 * C1133 + C30090 * C1327) * C10233 +
            (C222 * C1071 + C30090 * C1183) * C10301) *
               C10231) *
              C1067 +
          (((C222 * C1072 + C30090 * C1184) * C10301 +
            (C222 * C1134 + C30090 * C1328) * C10233 +
            (C222 * C4237 + C30090 * C4355) * C10302 +
            (C222 * C4301 + C30090 * C4521) * C30146) *
               C10231 +
           ((C222 * C1073 + C30090 * C1185) * C10301 +
            (C222 * C1135 + C30090 * C1329) * C10233 +
            (C222 * C4238 + C30090 * C4356) * C10302 +
            (C222 * C4302 + C30090 * C4522) * C30146) *
               C30139) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (-std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) * C222 +
            (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
                C30090) *
               C10233 +
           ((C10980 + C10981) * C222 + (C11154 + C11155) * C30090) * C30146) *
              C30030 * C624 -
          (((C11156 + C11157) * C30090 + (C10986 + C10987) * C222) * C30146 +
           ((C11155 + C11154) * C30090 + (C10981 + C10980) * C222) * C10233) *
              C30030 * C625 +
          (((C10987 + C10986) * C222 + (C11157 + C11156) * C30090) * C10233 +
           ((C10236 * C3641 + C10231 * C3643 + C10238 * C3642 +
             C30139 * C3644) *
                C222 +
            (C10236 * C3775 + C10231 * C4052 + C10238 * C3776 +
             C30139 * C4053) *
                C30090) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) * C222 +
            (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
                C30090) *
               C10233 +
           ((C10236 * C630 + C10231 * C636 + C10238 * C629 + C30139 * C635) *
                C222 +
            (C10236 * C742 + C10231 * C930 + C10238 * C741 + C30139 * C929) *
                C30090) *
               C30146) *
              C30030 * C30016 * C84 -
          (((C10238 * C740 + C30139 * C928 + C10236 * C741 + C10231 * C929) *
                C30090 +
            (C10238 * C628 + C30139 * C634 + C10236 * C629 + C10231 * C635) *
                C222) *
               C30146 +
           ((C10238 * C225 + C30139 * C457 + C10236 * C224 + C10231 * C456) *
                C30090 +
            (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
                C222) *
               C10233) *
              C30030 * C30016 * C85 +
          (((C10236 * C95 + C10231 * C100 + C10238 * C96 + C30139 * C101) *
                C222 +
            (C10236 * C225 + C10231 * C457 + C10238 * C226 + C30139 * C458) *
                C30090) *
               C10233 +
           ((C10236 * C628 + C10231 * C634 + C10238 * C1523 + C30139 * C1524) *
                C222 +
            (C10236 * C740 + C10231 * C928 + C10238 * C1643 + C30139 * C1881) *
                C30090) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) * C222 +
            (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
                C30090) *
               C10233 +
           ((C10980 + C10981) * C222 + (C11154 + C11155) * C30090) * C30146) *
              C1066 -
          (((C10238 * C2712 + C30139 * C2930 + C10236 * C2711 +
             C10231 * C2929) *
                C30090 +
            (C10238 * C2594 + C30139 * C2597 + C10236 * C2593 +
             C10231 * C2596) *
                C222) *
               C30146 +
           ((C10238 * C1182 + C30139 * C1370 + C10236 * C1183 +
             C10231 * C1371) *
                C30090 +
            (C10238 * C1070 + C30139 * C1076 + C10236 * C1071 +
             C10231 * C1077) *
                C222) *
               C10233) *
              C1067 +
          (((C10236 * C1072 + C10231 * C1078 + C10238 * C1073 +
             C30139 * C1079) *
                C222 +
            (C10236 * C1184 + C10231 * C1372 + C10238 * C1185 +
             C30139 * C1373) *
                C30090) *
               C10233 +
           ((C10236 * C4237 + C10231 * C4239 + C10238 * C4238 +
             C30139 * C4240) *
                C222 +
            (C10236 * C4355 + C10231 * C4573 + C10238 * C4356 +
             C30139 * C4574) *
                C30090) *
               C30146) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezy[17] +=
        (-std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C222 +
            (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
                C30090) *
               C10231 +
           ((C10320 + C10321) * C222 + (C10674 + C10675) * C30090) * C30139) *
              C30030 * C624 -
          (((C10302 * C744 + C30146 * C976 + C10301 * C741 + C10233 * C973) *
                C30090 +
            (C10302 * C632 + C30146 * C694 + C10301 * C629 + C10233 * C691) *
                C222) *
               C30139 +
           ((C10302 * C743 + C30146 * C975 + C10301 * C742 + C10233 * C974) *
                C30090 +
            (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
                C222) *
               C10231) *
              C30030 * C625 +
          (((C10301 * C631 + C10233 * C693 + C10302 * C3641 + C30146 * C3721) *
                C222 +
            (C10301 * C743 + C10233 * C975 + C10302 * C3775 + C30146 * C4116) *
                C30090) *
               C10231 +
           ((C10301 * C632 + C10233 * C694 + C10302 * C3642 + C30146 * C3722) *
                C222 +
            (C10301 * C744 + C10233 * C976 + C10302 * C3776 + C30146 * C4117) *
                C30090) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C222 +
            (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
                C30090) *
               C10231 +
           ((C10320 + C10321) * C222 + (C10674 + C10675) * C30090) * C30139) *
              C30030 * C30016 * C84 -
          (((C10676 + C10677) * C30090 + (C10326 + C10327) * C222) * C30139 +
           ((C10675 + C10674) * C30090 + (C10321 + C10320) * C222) * C10231) *
              C30030 * C30016 * C85 +
          (((C10327 + C10326) * C222 + (C10677 + C10676) * C30090) * C10231 +
           ((C10301 * C96 + C10233 * C159 + C10302 * C1523 + C30146 * C1579) *
                C222 +
            (C10301 * C226 + C10233 * C501 + C10302 * C1643 + C30146 * C1932) *
                C30090) *
               C30139) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C222 +
            (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
                C30090) *
               C10231 +
           ((C10320 + C10321) * C222 + (C10674 + C10675) * C30090) * C30139) *
              C1066 -
          (((C10302 * C2712 + C30146 * C2983 + C10301 * C1182 +
             C10233 * C1414) *
                C30090 +
            (C10302 * C2594 + C30146 * C2656 + C10301 * C1070 +
             C10233 * C1132) *
                C222) *
               C30139 +
           ((C10302 * C2711 + C30146 * C2982 + C10301 * C1183 +
             C10233 * C1415) *
                C30090 +
            (C10302 * C2593 + C30146 * C2655 + C10301 * C1071 +
             C10233 * C1133) *
                C222) *
               C10231) *
              C1067 +
          (((C10301 * C1072 + C10233 * C1134 + C10302 * C4237 +
             C30146 * C4301) *
                C222 +
            (C10301 * C1184 + C10233 * C1416 + C10302 * C4355 +
             C30146 * C4625) *
                C30090) *
               C10231 +
           ((C10301 * C1073 + C10233 * C1135 + C10302 * C4238 +
             C30146 * C4302) *
                C222 +
            (C10301 * C1185 + C10233 * C1417 + C10302 * C4356 +
             C30146 * C4626) *
                C30090) *
               C30139) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (-std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C30090 * C558) * C10233 +
            C4185 * C30146) *
               C10231 +
           (C10728 + C10729) * C30139) *
              C30030 * C624 -
          ((C4186 * C30146 + C2005 * C10233) * C30139 +
           (C4187 * C30146 + C4185 * C10233) * C10231) *
              C30030 * C625 +
          ((C4187 * C10233 +
            (C557 * C3641 + C4177 + C4177 + C30090 * C4168) * C30146) *
               C10231 +
           (C4186 * C10233 +
            (C557 * C3642 + C4178 + C4178 + C30090 * C4169) * C30146) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C30090 * C558) * C10233 +
            C4185 * C30146) *
               C10231 +
           (C10728 + C10729) * C30139) *
              C30030 * C30016 * C84 -
          ((C10730 + C10731) * C30139 + (C10729 + C10728) * C10231) * C30030 *
              C30016 * C85 +
          ((C10731 + C10730) * C10231 +
           (C583 * C10233 +
            (C557 * C1523 + C1999 + C1999 + C30090 * C1993) * C30146) *
               C30139) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C30090 * C558) * C10233 +
            C4185 * C30146) *
               C10231 +
           (C10728 + C10729) * C30139) *
              C1066 -
          ((C5992 * C30146 + C2541 * C10233) * C30139 +
           (C6667 * C30146 +
            (C557 * C1071 + C1466 + C1466 + C30090 * C1459) * C10233) *
               C10231) *
              C1067 +
          (((C557 * C1072 + C1467 + C1467 + C30090 * C1460) * C10233 +
            (C557 * C4237 + C4680 + C4680 + C30090 * C4677) * C30146) *
               C10231 +
           ((C557 * C1073 + C1468 + C1468 + C30090 * C1461) * C10233 +
            (C557 * C4238 + C4681 + C4681 + C30090 * C4678) * C30146) *
               C30139) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexx[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                       C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                          C30090 * C10233 +
                      (C10802 + C10803) * C30090 * C30146) *
                         C2057 -
                     ((C10237 * C2594 + C11308 + C11308 + C30139 * C2600 +
                       C10235 * C2593 + C11309 + C11309 + C10231 * C2599) *
                          C30090 * C30146 +
                      (C10237 * C1070 + C11310 + C11310 + C30139 * C1082 +
                       C10235 * C1071 + C11311 + C11311 + C10231 * C1083) *
                          C30090 * C10233) *
                         C2058) *
                        C30016 * C1521 +
                    (((C10235 * C1070 + C12454 + C12454 + C10231 * C1082 +
                       C10237 * C1069 + C12455 + C12455 + C30139 * C1081) *
                          C30090 * C10233 +
                      (C10235 * C2594 + C12456 + C12456 + C10231 * C2600 +
                       C10237 * C2595 + C12457 + C12457 + C30139 * C2601) *
                          C30090 * C30146) *
                         C2058 -
                     ((C11801 + C11800) * C30090 * C30146 +
                      (C10237 * C95 + C10246 + C10246 + C30139 * C105 +
                       C10235 * C94 + C10247 + C10247 + C10231 * C104) *
                          C30090 * C10233) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C10236 +
            (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
                C10231 +
            (C10320 + C10321) * C10238 + (C10322 + C10323) * C30139) *
               C30090 * C2057 -
           ((C12532 + C12533) * C30139 + (C12534 + C12535) * C10238 +
            (C10302 * C2596 + C30146 * C2658 + C10301 * C1077 +
             C10233 * C1139) *
                C10231 +
            (C10302 * C2593 + C30146 * C2655 + C10301 * C1071 +
             C10233 * C1133) *
                C10236) *
               C30090 * C2058) *
              C30016 * C1521 +
          (((C12535 + C12534) * C10236 + (C12533 + C12532) * C10231 +
            (C10301 * C1069 + C10233 * C1131 + C10302 * C2595 +
             C30146 * C2657) *
                C10238 +
            (C10301 * C1075 + C10233 * C1137 + C10302 * C2598 +
             C30146 * C2660) *
                C30139) *
               C30090 * C2058 -
           ((C10324 + C10325) * C30139 + (C10326 + C10327) * C10238 +
            (C10323 + C10322) * C10231 + (C10321 + C10320) * C10236) *
               C30090 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C30090 * C223) * C10236 +
             (C222 * C98 + C30090 * C228) * C10231 + C246 * C10238 +
             C247 * C30139) *
                C10233 +
            (C10906 + C10907 + C10908 + C10909) * C30146) *
               C2057 -
           ((C5564 * C30139 + C5565 * C10238 + C6224 * C10231 +
             C6225 * C10236) *
                C30146 +
            (C2192 * C30139 + C2193 * C10238 +
             (C222 * C1077 + C30090 * C1189) * C10231 +
             (C222 * C1071 + C30090 * C1183) * C10236) *
                C10233) *
               C2058) *
              C30016 * C1521 +
          (((C2193 * C10236 + C2192 * C10231 + C2191 * C10238 +
             C2190 * C30139) *
                C10233 +
            (C5565 * C10236 + C5564 * C10231 +
             (C222 * C2595 + C30090 * C2713) * C10238 +
             (C222 * C2598 + C30090 * C2716) * C30139) *
                C30146) *
               C2058 -
           ((C11949 + C11948 + C11947 + C11946) * C30146 +
            (C249 * C30139 + C248 * C10238 + C247 * C10231 + C246 * C10236) *
                C10233) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
                C10301 +
            (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
                C10233 +
            (C10980 + C10981) * C10302 + (C10982 + C10983) * C30146) *
               C30090 * C2057 -
           ((C10238 * C2656 + C30139 * C2768 + C10236 * C2655 +
             C10231 * C2767) *
                C30146 +
            (C10238 * C2594 + C30139 * C2597 + C10236 * C2593 +
             C10231 * C2596) *
                C10302 +
            (C10238 * C1132 + C30139 * C1232 + C10236 * C1133 +
             C10231 * C1233) *
                C10233 +
            (C10238 * C1070 + C30139 * C1076 + C10236 * C1071 +
             C10231 * C1077) *
                C10301) *
               C30090 * C2058) *
              C30016 * C1521 +
          (((C10236 * C1070 + C10231 * C1076 + C10238 * C1069 +
             C30139 * C1075) *
                C10301 +
            (C10236 * C1132 + C10231 * C1232 + C10238 * C1131 +
             C30139 * C1231) *
                C10233 +
            (C10236 * C2594 + C10231 * C2597 + C10238 * C2595 +
             C30139 * C2598) *
                C10302 +
            (C10236 * C2656 + C10231 * C2768 + C10238 * C2657 +
             C30139 * C2769) *
                C30146) *
               C30090 * C2058 -
           ((C12027 + C12026) * C30146 + (C12025 + C12024) * C10302 +
            (C10238 * C158 + C30139 * C291 + C10236 * C157 + C10231 * C290) *
                C10233 +
            (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
                C10301) *
               C30090 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                       C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                          C10231 +
                      (C10504 + C10505) * C30139) *
                         C30090 * C2057 -
                     ((C12744 + C12745) * C30139 +
                      (C10478 * C2593 + C11518 + C11518 + C30146 * C2820 +
                       C10477 * C1071 + C11519 + C11519 + C10233 * C1277) *
                          C10231) *
                         C30090 * C2058) *
                        C30016 * C1521 +
                    (((C12745 + C12744) * C10231 +
                      (C10477 * C1069 + C12738 + C12738 + C10233 * C1275 +
                       C10478 * C2595 + C12739 + C12739 + C30146 * C2822) *
                          C30139) *
                         C30090 * C2058 -
                     ((C10506 + C10507) * C30139 + (C10505 + C10504) * C10231) *
                         C30090 * C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C30090 * C223) * C10301 +
                       (C222 * C156 + C30090 * C396) * C10233 + C3794 * C10302 +
                       C4000 * C30146) *
                          C10231 +
                      (C10558 + C10559 + C10560 + C10561) * C30139) *
                         C2057 -
                     ((C12812 + C12813 + C12814 + C12815) * C30139 +
                      (C6450 * C30146 + C6225 * C10302 +
                       (C222 * C1133 + C30090 * C1327) * C10233 +
                       (C222 * C1071 + C30090 * C1183) * C10301) *
                          C10231) *
                         C2058) *
                        C30016 * C1521 +
                    (((C12815 + C12814 + C12813 + C12812) * C10231 +
                      (C2191 * C10301 + C2364 * C10233 +
                       (C222 * C2595 + C30090 * C2713) * C10302 +
                       (C222 * C2657 + C30090 * C2878) * C30146) *
                          C30139) *
                         C2058 -
                     ((C10562 + C10563 + C10564 + C10565) * C30139 +
                      (C10561 + C10560 + C10559 + C10558) * C10231) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
                 C222 +
             (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
                 C30090) *
                C10233 +
            ((C10980 + C10981) * C222 + (C11154 + C11155) * C30090) * C30146) *
               C2057 -
           (((C10238 * C2712 + C30139 * C2930 + C10236 * C2711 +
              C10231 * C2929) *
                 C30090 +
             (C10238 * C2594 + C30139 * C2597 + C10236 * C2593 +
              C10231 * C2596) *
                 C222) *
                C30146 +
            ((C10238 * C1182 + C30139 * C1370 + C10236 * C1183 +
              C10231 * C1371) *
                 C30090 +
             (C10238 * C1070 + C30139 * C1076 + C10236 * C1071 +
              C10231 * C1077) *
                 C222) *
                C10233) *
               C2058) *
              C30016 * C1521 +
          ((((C10236 * C1070 + C10231 * C1076 + C10238 * C1069 +
              C30139 * C1075) *
                 C222 +
             (C10236 * C1182 + C10231 * C1370 + C10238 * C1181 +
              C30139 * C1369) *
                 C30090) *
                C10233 +
            ((C10236 * C2594 + C10231 * C2597 + C10238 * C2595 +
              C30139 * C2598) *
                 C222 +
             (C10236 * C2712 + C10231 * C2930 + C10238 * C2713 +
              C30139 * C2931) *
                 C30090) *
                C30146) *
               C2058 -
           (((C12247 + C12246) * C30090 + (C12025 + C12024) * C222) * C30146 +
            ((C10238 * C225 + C30139 * C457 + C10236 * C224 + C10231 * C456) *
                 C30090 +
             (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
                 C222) *
                C10233) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                 C222 +
             (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
                 C30090) *
                C10231 +
            ((C10320 + C10321) * C222 + (C10674 + C10675) * C30090) * C30139) *
               C2057 -
           (((C12952 + C12953) * C30090 + (C12534 + C12535) * C222) * C30139 +
            ((C10302 * C2711 + C30146 * C2982 + C10301 * C1183 +
              C10233 * C1415) *
                 C30090 +
             (C10302 * C2593 + C30146 * C2655 + C10301 * C1071 +
              C10233 * C1133) *
                 C222) *
                C10231) *
               C2058) *
              C30016 * C1521 +
          ((((C12535 + C12534) * C222 + (C12953 + C12952) * C30090) * C10231 +
            ((C10301 * C1069 + C10233 * C1131 + C10302 * C2595 +
              C30146 * C2657) *
                 C222 +
             (C10301 * C1181 + C10233 * C1413 + C10302 * C2713 +
              C30146 * C2984) *
                 C30090) *
                C30139) *
               C2058 -
           (((C10676 + C10677) * C30090 + (C10326 + C10327) * C222) * C30139 +
            ((C10675 + C10674) * C30090 + (C10321 + C10320) * C222) * C10231) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C557 * C93 + C564 + C564 + C30090 * C558) * C10233 +
             C4185 * C30146) *
                C10231 +
            (C10728 + C10729) * C30139) *
               C2057 -
           ((C13020 + C13021) * C30139 +
            (C6667 * C30146 +
             (C557 * C1071 + C1466 + C1466 + C30090 * C1459) * C10233) *
                C10231) *
               C2058) *
              C30016 * C1521 +
          (((C13021 + C13020) * C10231 +
            (C2540 * C10233 +
             (C557 * C2595 + C3041 + C3041 + C30090 * C3037) * C30146) *
                C30139) *
               C2058 -
           ((C10730 + C10731) * C30139 + (C10729 + C10728) * C10231) * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexx[19] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                      C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                         C30090 * C10233 +
                     (C10235 * C630 + C10242 + C10242 + C10231 * C642 +
                      C10237 * C629 + C10243 + C10243 + C30139 * C641) *
                         C30090 * C30146) *
                        C30030 * C30016 * C84 -
                    ((C10237 * C628 + C10244 + C10244 + C30139 * C640 +
                      C10235 * C629 + C10245 + C10245 + C10231 * C641) *
                         C30090 * C30146 +
                     (C10237 * C95 + C10246 + C10246 + C30139 * C105 +
                      C10235 * C94 + C10247 + C10247 + C10231 * C104) *
                         C30090 * C10233) *
                        C30030 * C30016 * C85 +
                    ((C10235 * C95 + C10248 + C10248 + C10231 * C105 +
                      C10237 * C96 + C10249 + C10249 + C30139 * C106) *
                         C30090 * C10233 +
                     (C10235 * C628 + C10250 + C10250 + C10231 * C640 +
                      C10237 * C1523 + C10251 + C10251 + C30139 * C1525) *
                         C30090 * C30146) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                      C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                         C30090 * C10233 +
                     (C10802 + C10803) * C30090 * C30146) *
                        C30030 * C624 -
                    ((C10804 + C10805) * C30090 * C30146 +
                     (C10803 + C10802) * C30090 * C10233) *
                        C30030 * C625 +
                    ((C10805 + C10804) * C30090 * C10233 +
                     (C10235 * C3641 + C10792 + C10792 + C10231 * C3645 +
                      C10237 * C3642 + C10793 + C10793 + C30139 * C3646) *
                         C30090 * C30146) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexy[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
               C10236 +
           (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
               C10231 +
           (C10320 + C10321) * C10238 + (C10322 + C10323) * C30139) *
              C30090 * C30030 * C30016 * C84 -
          ((C10324 + C10325) * C30139 + (C10326 + C10327) * C10238 +
           (C10323 + C10322) * C10231 + (C10321 + C10320) * C10236) *
              C30090 * C30030 * C30016 * C85 +
          ((C10327 + C10326) * C10236 + (C10325 + C10324) * C10231 +
           (C10301 * C96 + C10233 * C159 + C10302 * C1523 + C30146 * C1579) *
               C10238 +
           (C10301 * C101 + C10233 * C164 + C10302 * C1524 + C30146 * C1580) *
               C30139) *
              C30090 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
               C10236 +
           (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
               C10231 +
           (C10320 + C10321) * C10238 + (C10322 + C10323) * C30139) *
              C30090 * C30030 * C624 -
          ((C10302 * C638 + C30146 * C700 + C10301 * C635 + C10233 * C697) *
               C30139 +
           (C10302 * C632 + C30146 * C694 + C10301 * C629 + C10233 * C691) *
               C10238 +
           (C10302 * C637 + C30146 * C699 + C10301 * C636 + C10233 * C698) *
               C10231 +
           (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
               C10236) *
              C30090 * C30030 * C625 +
          ((C10301 * C631 + C10233 * C693 + C10302 * C3641 + C30146 * C3721) *
               C10236 +
           (C10301 * C637 + C10233 * C699 + C10302 * C3643 + C30146 * C3723) *
               C10231 +
           (C10301 * C632 + C10233 * C694 + C10302 * C3642 + C30146 * C3722) *
               C10238 +
           (C10301 * C638 + C10233 * C700 + C10302 * C3644 + C30146 * C3724) *
               C30139) *
              C30090 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C10236 +
            (C222 * C98 + C30090 * C228) * C10231 + C246 * C10238 +
            C247 * C30139) *
               C10233 +
           (C3794 * C10236 + C3795 * C10231 + C1657 * C10238 + C1656 * C30139) *
               C30146) *
              C30030 * C30016 * C84 -
          ((C1654 * C30139 + C1655 * C10238 + C1656 * C10231 + C1657 * C10236) *
               C30146 +
           (C249 * C30139 + C248 * C10238 + C247 * C10231 + C246 * C10236) *
               C10233) *
              C30030 * C30016 * C85 +
          ((C248 * C10236 + C249 * C10231 + C251 * C10238 + C250 * C30139) *
               C10233 +
           (C1655 * C10236 + C1654 * C10231 +
            (C222 * C1523 + C30090 * C1643) * C10238 +
            (C222 * C1524 + C30090 * C1644) * C30139) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C10236 +
            (C222 * C98 + C30090 * C228) * C10231 + C246 * C10238 +
            C247 * C30139) *
               C10233 +
           (C10906 + C10907 + C10908 + C10909) * C30146) *
              C30030 * C624 -
          ((C10910 + C10911 + C10912 + C10913) * C30146 +
           (C10909 + C10908 + C10907 + C10906) * C10233) *
              C30030 * C625 +
          ((C10913 + C10912 + C10911 + C10910) * C10233 +
           ((C222 * C3641 + C30090 * C3775) * C10236 +
            (C222 * C3643 + C30090 * C3777) * C10231 +
            (C222 * C3642 + C30090 * C3776) * C10238 +
            (C222 * C3644 + C30090 * C3778) * C30139) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
               C10301 +
           (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
               C10233 +
           (C10236 * C630 + C10231 * C636 + C10238 * C629 + C30139 * C635) *
               C10302 +
           (C10236 * C692 + C10231 * C792 + C10238 * C691 + C30139 * C791) *
               C30146) *
              C30090 * C30030 * C30016 * C84 -
          ((C10238 * C690 + C30139 * C790 + C10236 * C691 + C10231 * C791) *
               C30146 +
           (C10238 * C628 + C30139 * C634 + C10236 * C629 + C10231 * C635) *
               C10302 +
           (C10238 * C158 + C30139 * C291 + C10236 * C157 + C10231 * C290) *
               C10233 +
           (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
               C10301) *
              C30090 * C30030 * C30016 * C85 +
          ((C10236 * C95 + C10231 * C100 + C10238 * C96 + C30139 * C101) *
               C10301 +
           (C10236 * C158 + C10231 * C291 + C10238 * C159 + C30139 * C292) *
               C10233 +
           (C10236 * C628 + C10231 * C634 + C10238 * C1523 + C30139 * C1524) *
               C10302 +
           (C10236 * C690 + C10231 * C790 + C10238 * C1579 + C30139 * C1707) *
               C30146) *
              C30090 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
               C10301 +
           (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
               C10233 +
           (C10980 + C10981) * C10302 + (C10982 + C10983) * C30146) *
              C30090 * C30030 * C624 -
          ((C10984 + C10985) * C30146 + (C10986 + C10987) * C10302 +
           (C10983 + C10982) * C10233 + (C10981 + C10980) * C10301) *
              C30090 * C30030 * C625 +
          ((C10987 + C10986) * C10301 + (C10985 + C10984) * C10233 +
           (C10236 * C3641 + C10231 * C3643 + C10238 * C3642 + C30139 * C3644) *
               C10302 +
           (C10236 * C3721 + C10231 * C3855 + C10238 * C3722 + C30139 * C3856) *
               C30146) *
              C30090 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyy[19] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                      C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                         C10231 +
                     (C10504 + C10505) * C30139) *
                        C30090 * C30030 * C30016 * C84 -
                    ((C10506 + C10507) * C30139 + (C10505 + C10504) * C10231) *
                        C30090 * C30030 * C30016 * C85 +
                    ((C10507 + C10506) * C10231 +
                     (C10477 * C96 + C10494 + C10494 + C10233 * C336 +
                      C10478 * C1523 + C10495 + C10495 + C30146 * C1758) *
                         C30139) *
                        C30090 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                      C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                         C10231 +
                     (C10504 + C10505) * C30139) *
                        C30090 * C30030 * C624 -
                    ((C10478 * C632 + C11038 + C11038 + C30146 * C838 +
                      C10477 * C629 + C11039 + C11039 + C10233 * C835) *
                         C30139 +
                     (C10478 * C631 + C11040 + C11040 + C30146 * C837 +
                      C10477 * C630 + C11041 + C11041 + C10233 * C836) *
                         C10231) *
                        C30090 * C30030 * C625 +
                    ((C10477 * C631 + C11042 + C11042 + C10233 * C837 +
                      C10478 * C3641 + C11043 + C11043 + C30146 * C3931) *
                         C10231 +
                     (C10477 * C632 + C11044 + C11044 + C10233 * C838 +
                      C10478 * C3642 + C11045 + C11045 + C30146 * C3932) *
                         C30139) *
                        C30090 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C10301 +
            (C222 * C156 + C30090 * C396) * C10233 + C3794 * C10302 +
            C4000 * C30146) *
               C10231 +
           (C10558 + C10559 + C10560 + C10561) * C30139) *
              C30030 * C30016 * C84 -
          ((C10562 + C10563 + C10564 + C10565) * C30139 +
           (C10561 + C10560 + C10559 + C10558) * C10231) *
              C30030 * C30016 * C85 +
          ((C10565 + C10564 + C10563 + C10562) * C10231 +
           (C251 * C10301 + C413 * C10233 +
            (C222 * C1523 + C30090 * C1643) * C10302 +
            (C222 * C1579 + C30090 * C1820) * C30146) *
               C30139) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C10301 +
            (C222 * C156 + C30090 * C396) * C10233 + C3794 * C10302 +
            C4000 * C30146) *
               C10231 +
           (C10558 + C10559 + C10560 + C10561) * C30139) *
              C30030 * C624 -
          ((C4001 * C30146 + C3797 * C10302 + C1829 * C10233 + C1657 * C10301) *
               C30139 +
           (C4002 * C30146 + C3799 * C10302 + C4000 * C10233 + C3794 * C10301) *
               C10231) *
              C30030 * C625 +
          ((C3799 * C10301 + C4002 * C10233 +
            (C222 * C3641 + C30090 * C3775) * C10302 +
            (C222 * C3721 + C30090 * C3991) * C30146) *
               C10231 +
           (C3797 * C10301 + C4001 * C10233 +
            (C222 * C3642 + C30090 * C3776) * C10302 +
            (C222 * C3722 + C30090 * C3992) * C30146) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) * C222 +
            (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
                C30090) *
               C10233 +
           ((C10236 * C630 + C10231 * C636 + C10238 * C629 + C30139 * C635) *
                C222 +
            (C10236 * C742 + C10231 * C930 + C10238 * C741 + C30139 * C929) *
                C30090) *
               C30146) *
              C30030 * C30016 * C84 -
          (((C10238 * C740 + C30139 * C928 + C10236 * C741 + C10231 * C929) *
                C30090 +
            (C10238 * C628 + C30139 * C634 + C10236 * C629 + C10231 * C635) *
                C222) *
               C30146 +
           ((C10238 * C225 + C30139 * C457 + C10236 * C224 + C10231 * C456) *
                C30090 +
            (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
                C222) *
               C10233) *
              C30030 * C30016 * C85 +
          (((C10236 * C95 + C10231 * C100 + C10238 * C96 + C30139 * C101) *
                C222 +
            (C10236 * C225 + C10231 * C457 + C10238 * C226 + C30139 * C458) *
                C30090) *
               C10233 +
           ((C10236 * C628 + C10231 * C634 + C10238 * C1523 + C30139 * C1524) *
                C222 +
            (C10236 * C740 + C10231 * C928 + C10238 * C1643 + C30139 * C1881) *
                C30090) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) * C222 +
            (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
                C30090) *
               C10233 +
           ((C10980 + C10981) * C222 + (C11154 + C11155) * C30090) * C30146) *
              C30030 * C624 -
          (((C11156 + C11157) * C30090 + (C10986 + C10987) * C222) * C30146 +
           ((C11155 + C11154) * C30090 + (C10981 + C10980) * C222) * C10233) *
              C30030 * C625 +
          (((C10987 + C10986) * C222 + (C11157 + C11156) * C30090) * C10233 +
           ((C10236 * C3641 + C10231 * C3643 + C10238 * C3642 +
             C30139 * C3644) *
                C222 +
            (C10236 * C3775 + C10231 * C4052 + C10238 * C3776 +
             C30139 * C4053) *
                C30090) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezy[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C222 +
            (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
                C30090) *
               C10231 +
           ((C10320 + C10321) * C222 + (C10674 + C10675) * C30090) * C30139) *
              C30030 * C30016 * C84 -
          (((C10676 + C10677) * C30090 + (C10326 + C10327) * C222) * C30139 +
           ((C10675 + C10674) * C30090 + (C10321 + C10320) * C222) * C10231) *
              C30030 * C30016 * C85 +
          (((C10327 + C10326) * C222 + (C10677 + C10676) * C30090) * C10231 +
           ((C10301 * C96 + C10233 * C159 + C10302 * C1523 + C30146 * C1579) *
                C222 +
            (C10301 * C226 + C10233 * C501 + C10302 * C1643 + C30146 * C1932) *
                C30090) *
               C30139) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C222 +
            (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
                C30090) *
               C10231 +
           ((C10320 + C10321) * C222 + (C10674 + C10675) * C30090) * C30139) *
              C30030 * C624 -
          (((C10302 * C744 + C30146 * C976 + C10301 * C741 + C10233 * C973) *
                C30090 +
            (C10302 * C632 + C30146 * C694 + C10301 * C629 + C10233 * C691) *
                C222) *
               C30139 +
           ((C10302 * C743 + C30146 * C975 + C10301 * C742 + C10233 * C974) *
                C30090 +
            (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
                C222) *
               C10231) *
              C30030 * C625 +
          (((C10301 * C631 + C10233 * C693 + C10302 * C3641 + C30146 * C3721) *
                C222 +
            (C10301 * C743 + C10233 * C975 + C10302 * C3775 + C30146 * C4116) *
                C30090) *
               C10231 +
           ((C10301 * C632 + C10233 * C694 + C10302 * C3642 + C30146 * C3722) *
                C222 +
            (C10301 * C744 + C10233 * C976 + C10302 * C3776 + C30146 * C4117) *
                C30090) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C30090 * C558) * C10233 +
            C4185 * C30146) *
               C10231 +
           (C10728 + C10729) * C30139) *
              C30030 * C30016 * C84 -
          ((C10730 + C10731) * C30139 + (C10729 + C10728) * C10231) * C30030 *
              C30016 * C85 +
          ((C10731 + C10730) * C10231 +
           (C583 * C10233 +
            (C557 * C1523 + C1999 + C1999 + C30090 * C1993) * C30146) *
               C30139) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C30090 * C558) * C10233 +
            C4185 * C30146) *
               C10231 +
           (C10728 + C10729) * C30139) *
              C30030 * C624 -
          ((C4186 * C30146 + C2005 * C10233) * C30139 +
           (C4187 * C30146 + C4185 * C10233) * C10231) *
              C30030 * C625 +
          ((C4187 * C10233 +
            (C557 * C3641 + C4177 + C4177 + C30090 * C4168) * C30146) *
               C10231 +
           (C4186 * C10233 +
            (C557 * C3642 + C4178 + C4178 + C30090 * C4169) * C30146) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C30090 * C13692 +
            C14084 * C13693 + C14085 * C13694) *
               C30030 * C1519 -
           (C14086 * C13694 + C14085 * C13693 + C14084 * C13692) * C30030 *
               C1520) *
              C1521 +
          ((C14892 * C13692 + C14893 * C13693 +
            (C13695 * C3642 + C14885 + C14885 + C29981 * C3646) * C30090 *
                C13694) *
               C30030 * C1520 -
           (C14893 * C13694 + C14892 * C13693 +
            (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C30090 *
                C13692) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexy[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13744 * C93 + C13692 * C156 + C13745 * C630 +
                       C13693 * C692 + C13746 * C631 + C13694 * C693) *
                          C13696 +
                      (C13744 * C98 + C13692 * C161 + C13745 * C636 +
                       C13693 * C698 + C13746 * C637 + C13694 * C699) *
                          C29981) *
                         C30090 * C30030 * C1519 -
                     ((C13746 * C3643 + C13694 * C3723 + C13745 * C637 +
                       C13693 * C699 + C13744 * C636 + C13692 * C698) *
                          C29981 +
                      (C13746 * C3641 + C13694 * C3721 + C13745 * C631 +
                       C13693 * C693 + C13744 * C630 + C13692 * C692) *
                          C13696) *
                         C30090 * C30030 * C1520) *
                        C1521 +
                    (((C13744 * C629 + C13692 * C691 + C13745 * C632 +
                       C13693 * C694 + C13746 * C3642 + C13694 * C3722) *
                          C13696 +
                      (C13744 * C635 + C13692 * C697 + C13745 * C638 +
                       C13693 * C700 + C13746 * C3644 + C13694 * C3724) *
                          C29981) *
                         C30090 * C30030 * C1520 -
                     ((C13746 * C638 + C13694 * C700 + C13745 * C635 +
                       C13693 * C697 + C13744 * C99 + C13692 * C162) *
                          C29981 +
                      (C13746 * C632 + C13694 * C694 + C13745 * C629 +
                       C13693 * C691 + C13744 * C94 + C13692 * C157) *
                          C13696) *
                         C30090 * C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C30090 * C223) * C13696 +
                       (C222 * C98 + C30090 * C228) * C29981) *
                          C13692 +
                      (C14167 + C14168) * C13693 + C14175 * C13694) *
                         C30030 * C1519 -
                     ((C14178 + C14179) * C13694 + (C14170 + C14169) * C13693 +
                      (C14168 + C14167) * C13692) *
                         C30030 * C1520) *
                        C1521 +
                    (((C14994 + C14995) * C13692 + (C14996 + C14997) * C13693 +
                      ((C222 * C3642 + C30090 * C3776) * C13696 +
                       (C222 * C3644 + C30090 * C3778) * C29981) *
                          C13694) *
                         C30030 * C1520 -
                     ((C14997 + C14996) * C13694 + (C14995 + C14994) * C13693 +
                      (C247 * C29981 + C246 * C13696) * C13692) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C13744 +
            (C13696 * C156 + C29981 * C289) * C13692 + C14231 * C13745 +
            C14232 * C13693 + C14233 * C13746 + C14234 * C13694) *
               C30090 * C30030 * C1519 -
           (C14235 * C13694 + C14236 * C13746 + C14234 * C13693 +
            C14233 * C13745 + C14232 * C13692 + C14231 * C13744) *
               C30090 * C30030 * C1520) *
              C1521 +
          ((C15056 * C13744 + C15057 * C13692 + C15058 * C13745 +
            C15059 * C13693 + (C13696 * C3642 + C29981 * C3644) * C13746 +
            (C13696 * C3722 + C29981 * C3856) * C13694) *
               C30090 * C30030 * C1520 -
           (C15059 * C13694 + C15058 * C13746 + C15057 * C13693 +
            C15056 * C13745 + (C13696 * C157 + C29981 * C290) * C13692 +
            (C13696 * C94 + C29981 * C99) * C13744) *
               C30090 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13861 * C93 + C13865 + C13865 + C13692 * C333 +
                      C13862 * C630 + C13866 + C13866 + C13693 * C836 +
                      C13863 * C631 + C13867 + C13867 + C13694 * C837) *
                         C29981 * C30090 * C30030 * C1519 -
                     (C13863 * C3641 + C14276 + C14276 + C13694 * C3931 +
                      C13862 * C631 + C14277 + C14277 + C13693 * C837 +
                      C13861 * C630 + C14278 + C14278 + C13692 * C836) *
                         C29981 * C30090 * C30030 * C1520) *
                        C1521 +
                    ((C13861 * C629 + C15110 + C15110 + C13692 * C835 +
                      C13862 * C632 + C15111 + C15111 + C13693 * C838 +
                      C13863 * C3642 + C15112 + C15112 + C13694 * C3932) *
                         C29981 * C30090 * C30030 * C1520 -
                     (C13863 * C632 + C13868 + C13868 + C13694 * C838 +
                      C13862 * C629 + C13869 + C13869 + C13693 * C835 +
                      C13861 * C94 + C13870 + C13870 + C13692 * C334) *
                         C29981 * C30090 * C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C13744 +
            (C222 * C156 + C30090 * C396) * C13692 + C3794 * C13745 +
            C4000 * C13693 + C3799 * C13746 + C4002 * C13694) *
               C29981 * C30030 * C1519 -
           (C14323 * C13694 + C14177 * C13746 + C4002 * C13693 +
            C3799 * C13745 + C4000 * C13692 + C3794 * C13744) *
               C29981 * C30030 * C1520) *
              C1521 +
          ((C1657 * C13744 + C1829 * C13692 + C3797 * C13745 + C4001 * C13693 +
            (C222 * C3642 + C30090 * C3776) * C13746 +
            (C222 * C3722 + C30090 * C3992) * C13694) *
               C29981 * C30030 * C1520 -
           (C4001 * C13694 + C3797 * C13746 + C1829 * C13693 + C1657 * C13745 +
            C411 * C13692 + C246 * C13744) *
               C29981 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C222 +
                       (C13696 * C223 + C29981 * C455) * C30090) *
                          C13692 +
                      (C14363 + C14375) * C13693 + C14378 * C13694) *
                         C30030 * C1519 -
                     ((C14377 + C14371) * C13694 + (C14376 + C14366) * C13693 +
                      (C14375 + C14363) * C13692) *
                         C30030 * C1520) *
                        C1521 +
                    (((C15213 + C15221) * C13692 + (C15216 + C15222) * C13693 +
                      ((C13696 * C3642 + C29981 * C3644) * C222 +
                       (C13696 * C3776 + C29981 * C4053) * C30090) *
                          C13694) *
                         C30030 * C1520 -
                     ((C15222 + C15216) * C13694 + (C15221 + C15213) * C13693 +
                      ((C13696 * C224 + C29981 * C456) * C30090 +
                       (C13696 * C94 + C29981 * C99) * C222) *
                          C13692) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13744 * C93 + C13692 * C156 + C13745 * C630 +
                       C13693 * C692 + C13746 * C631 + C13694 * C693) *
                          C222 +
                      (C13744 * C223 + C13692 * C498 + C13745 * C742 +
                       C13693 * C974 + C13746 * C743 + C13694 * C975) *
                          C30090) *
                         C29981 * C30030 * C1519 -
                     ((C13746 * C3775 + C13694 * C4116 + C13745 * C743 +
                       C13693 * C975 + C13744 * C742 + C13692 * C974) *
                          C30090 +
                      (C13746 * C3641 + C13694 * C3721 + C13745 * C631 +
                       C13693 * C693 + C13744 * C630 + C13692 * C692) *
                          C222) *
                         C29981 * C30030 * C1520) *
                        C1521 +
                    (((C13744 * C629 + C13692 * C691 + C13745 * C632 +
                       C13693 * C694 + C13746 * C3642 + C13694 * C3722) *
                          C222 +
                      (C13744 * C741 + C13692 * C973 + C13745 * C744 +
                       C13693 * C976 + C13746 * C3776 + C13694 * C4117) *
                          C30090) *
                         C29981 * C30030 * C1520 -
                     ((C13746 * C744 + C13694 * C976 + C13745 * C741 +
                       C13693 * C973 + C13744 * C224 + C13692 * C499) *
                          C30090 +
                      (C13746 * C632 + C13694 * C694 + C13745 * C629 +
                       C13693 * C691 + C13744 * C94 + C13692 * C157) *
                          C222) *
                         C29981 * C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C30090 * C558) * C13692 +
            C4185 * C13693 + C4187 * C13694) *
               C29981 * C30030 * C1519 -
           (C14462 * C13694 + C4187 * C13693 + C4185 * C13692) * C29981 *
               C30030 * C1520) *
              C1521 +
          ((C2005 * C13692 + C4186 * C13693 +
            (C557 * C3642 + C4178 + C4178 + C30090 * C4169) * C13694) *
               C29981 * C30030 * C1520 -
           (C4186 * C13694 + C2005 * C13693 + C581 * C13692) * C29981 * C30030 *
               C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C30090 * C13692 +
            C14084 * C13693 + C14085 * C13694) *
               C2057 -
           (C15843 * C13694 + C15844 * C13693 +
            (C13695 * C1071 + C14506 + C14506 + C29981 * C1083) * C30090 *
                C13692) *
               C2058) *
              C1519 +
          ((C15844 * C13692 + C15843 * C13693 +
            (C13695 * C15828 + C15836 + C15836 + C29981 * C15830) * C30090 *
                C13694) *
               C2058 -
           (C14086 * C13694 + C14085 * C13693 + C14084 * C13692) * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eexy[21] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13744 * C93 + C13692 * C156 + C13745 * C630 +
                       C13693 * C692 + C13746 * C631 + C13694 * C693) *
                          C13696 +
                      (C13744 * C98 + C13692 * C161 + C13745 * C636 +
                       C13693 * C698 + C13746 * C637 + C13694 * C699) *
                          C29981) *
                         C30090 * C2057 -
                     ((C13746 * C6061 + C13694 * C6145 + C13745 * C2596 +
                       C13693 * C2658 + C13744 * C1077 + C13692 * C1139) *
                          C29981 +
                      (C13746 * C6059 + C13694 * C6143 + C13745 * C2593 +
                       C13693 * C2655 + C13744 * C1071 + C13692 * C1133) *
                          C13696) *
                         C30090 * C2058) *
                        C1519 +
                    (((C13744 * C2593 + C13692 * C2655 + C13745 * C6059 +
                       C13693 * C6143 + C13746 * C15828 + C13694 * C15894) *
                          C13696 +
                      (C13744 * C2596 + C13692 * C2658 + C13745 * C6061 +
                       C13693 * C6145 + C13746 * C15829 + C13694 * C15895) *
                          C29981) *
                         C30090 * C2058 -
                     ((C13746 * C3643 + C13694 * C3723 + C13745 * C637 +
                       C13693 * C699 + C13744 * C636 + C13692 * C698) *
                          C29981 +
                      (C13746 * C3641 + C13694 * C3721 + C13745 * C631 +
                       C13693 * C693 + C13744 * C630 + C13692 * C692) *
                          C13696) *
                         C30090 * C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eexz[21] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C30090 * C223) * C13696 +
                       (C222 * C98 + C30090 * C228) * C29981) *
                          C13692 +
                      (C14167 + C14168) * C13693 + C14175 * C13694) *
                         C2057 -
                     ((C15957 + C15958) * C13694 + (C15953 + C15954) * C13693 +
                      ((C222 * C1077 + C30090 * C1189) * C29981 +
                       (C222 * C1071 + C30090 * C1183) * C13696) *
                          C13692) *
                         C2058) *
                        C1519 +
                    (((C15954 + C15953) * C13692 + (C15958 + C15957) * C13693 +
                      ((C222 * C15828 + C30090 * C15946) * C13696 +
                       (C222 * C15829 + C30090 * C15947) * C29981) *
                          C13694) *
                         C2058 -
                     ((C14178 + C14179) * C13694 + (C14170 + C14169) * C13693 +
                      (C14168 + C14167) * C13692) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C13744 +
            (C13696 * C156 + C29981 * C289) * C13692 + C14231 * C13745 +
            C14232 * C13693 + C14233 * C13746 + C14234 * C13694) *
               C30090 * C2057 -
           (C16018 * C13694 + C16019 * C13746 + C16020 * C13693 +
            C16021 * C13745 + (C13696 * C1133 + C29981 * C1233) * C13692 +
            (C13696 * C1071 + C29981 * C1077) * C13744) *
               C30090 * C2058) *
              C1519 +
          ((C16021 * C13744 + C16020 * C13692 + C16019 * C13745 +
            C16018 * C13693 + (C13696 * C15828 + C29981 * C15829) * C13746 +
            (C13696 * C15894 + C29981 * C16008) * C13694) *
               C30090 * C2058 -
           (C14235 * C13694 + C14236 * C13746 + C14234 * C13693 +
            C14233 * C13745 + C14232 * C13692 + C14231 * C13744) *
               C30090 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eeyy[21] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13861 * C93 + C13865 + C13865 + C13692 * C333 +
                      C13862 * C630 + C13866 + C13866 + C13693 * C836 +
                      C13863 * C631 + C13867 + C13867 + C13694 * C837) *
                         C29981 * C30090 * C2057 -
                     (C13863 * C6059 + C14668 + C14668 + C13694 * C6373 +
                      C13862 * C2593 + C14669 + C14669 + C13693 * C2820 +
                      C13861 * C1071 + C14670 + C14670 + C13692 * C1277) *
                         C29981 * C30090 * C2058) *
                        C1519 +
                    ((C13861 * C2593 + C16073 + C16073 + C13692 * C2820 +
                      C13862 * C6059 + C16074 + C16074 + C13693 * C6373 +
                      C13863 * C15828 + C16075 + C16075 + C13694 * C16071) *
                         C29981 * C30090 * C2058 -
                     (C13863 * C3641 + C14276 + C14276 + C13694 * C3931 +
                      C13862 * C631 + C14277 + C14277 + C13693 * C837 +
                      C13861 * C630 + C14278 + C14278 + C13692 * C836) *
                         C29981 * C30090 * C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C13744 +
            (C222 * C156 + C30090 * C396) * C13692 + C3794 * C13745 +
            C4000 * C13693 + C3799 * C13746 + C4002 * C13694) *
               C29981 * C2057 -
           (C16129 * C13694 + C15956 * C13746 + C6450 * C13693 +
            C6225 * C13745 + (C222 * C1133 + C30090 * C1327) * C13692 +
            (C222 * C1071 + C30090 * C1183) * C13744) *
               C29981 * C2058) *
              C1519 +
          ((C6225 * C13744 + C6450 * C13692 + C15956 * C13745 +
            C16129 * C13693 + (C222 * C15828 + C30090 * C15946) * C13746 +
            (C222 * C15894 + C30090 * C16125) * C13694) *
               C29981 * C2058 -
           (C14323 * C13694 + C14177 * C13746 + C4002 * C13693 +
            C3799 * C13745 + C4000 * C13692 + C3794 * C13744) *
               C29981 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezx[21] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C222 +
                       (C13696 * C223 + C29981 * C455) * C30090) *
                          C13692 +
                      (C14363 + C14375) * C13693 + C14378 * C13694) *
                         C2057 -
                     ((C16189 + C16183) * C13694 + (C16190 + C16186) * C13693 +
                      ((C13696 * C1183 + C29981 * C1371) * C30090 +
                       (C13696 * C1071 + C29981 * C1077) * C222) *
                          C13692) *
                         C2058) *
                        C1519 +
                    (((C16186 + C16190) * C13692 + (C16183 + C16189) * C13693 +
                      ((C13696 * C15828 + C29981 * C15829) * C222 +
                       (C13696 * C15946 + C29981 * C16179) * C30090) *
                          C13694) *
                         C2058 -
                     ((C14377 + C14371) * C13694 + (C14376 + C14366) * C13693 +
                      (C14375 + C14363) * C13692) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eezy[21] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13744 * C93 + C13692 * C156 + C13745 * C630 +
                       C13693 * C692 + C13746 * C631 + C13694 * C693) *
                          C222 +
                      (C13744 * C223 + C13692 * C498 + C13745 * C742 +
                       C13693 * C974 + C13746 * C743 + C13694 * C975) *
                          C30090) *
                         C29981 * C2057 -
                     ((C13746 * C6213 + C13694 * C6590 + C13745 * C2711 +
                       C13693 * C2982 + C13744 * C1183 + C13692 * C1415) *
                          C30090 +
                      (C13746 * C6059 + C13694 * C6143 + C13745 * C2593 +
                       C13693 * C2655 + C13744 * C1071 + C13692 * C1133) *
                          C222) *
                         C29981 * C2058) *
                        C1519 +
                    (((C13744 * C2593 + C13692 * C2655 + C13745 * C6059 +
                       C13693 * C6143 + C13746 * C15828 + C13694 * C15894) *
                          C222 +
                      (C13744 * C2711 + C13692 * C2982 + C13745 * C6213 +
                       C13693 * C6590 + C13746 * C15946 + C13694 * C16240) *
                          C30090) *
                         C29981 * C2058 -
                     ((C13746 * C3775 + C13694 * C4116 + C13745 * C743 +
                       C13693 * C975 + C13744 * C742 + C13692 * C974) *
                          C30090 +
                      (C13746 * C3641 + C13694 * C3721 + C13745 * C631 +
                       C13693 * C693 + C13744 * C630 + C13692 * C692) *
                          C222) *
                         C29981 * C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C30090 * C558) * C13692 +
            C4185 * C13693 + C4187 * C13694) *
               C29981 * C2057 -
           (C16298 * C13694 + C6667 * C13693 +
            (C557 * C1071 + C1466 + C1466 + C30090 * C1459) * C13692) *
               C29981 * C2058) *
              C1519 +
          ((C6667 * C13692 + C16298 * C13693 +
            (C557 * C15828 + C16295 + C16295 + C30090 * C16291) * C13694) *
               C29981 * C2058 -
           (C14462 * C13694 + C4187 * C13693 + C4185 * C13692) * C29981 *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::pow(Pi, 2.5) *
         (((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C30090 * C13692 +
           C14084 * C13693 + C14085 * C13694) *
              C30030 * C624 -
          (C14086 * C13694 + C14085 * C13693 + C14084 * C13692) * C30030 *
              C625 +
          (C14085 * C13692 + C14086 * C13693 +
           (C13695 * C14063 + C14074 + C14074 + C29981 * C14065) * C30090 *
               C13694) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C30090 * C13692 +
           (C13695 * C630 + C13699 + C13699 + C29981 * C642) * C30090 * C13693 +
           (C13695 * C631 + C13700 + C13700 + C29981 * C643) * C30090 *
               C13694) *
              C30030 * C30016 * C84 -
          ((C13695 * C632 + C13701 + C13701 + C29981 * C644) * C30090 * C13694 +
           (C13695 * C629 + C13702 + C13702 + C29981 * C641) * C30090 * C13693 +
           (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C30090 * C13692) *
              C30030 * C30016 * C85 +
          ((C13695 * C95 + C13704 + C13704 + C29981 * C105) * C30090 * C13692 +
           (C13695 * C628 + C13705 + C13705 + C29981 * C640) * C30090 * C13693 +
           (C13695 * C633 + C13706 + C13706 + C29981 * C645) * C30090 *
               C13694) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C30090 * C13692 +
           C14084 * C13693 + C14085 * C13694) *
              C1066 -
          ((C13695 * C6059 + C14504 + C14504 + C29981 * C6063) * C30090 *
               C13694 +
           (C13695 * C2593 + C14505 + C14505 + C29981 * C2599) * C30090 *
               C13693 +
           (C13695 * C1071 + C14506 + C14506 + C29981 * C1083) * C30090 *
               C13692) *
              C1067 +
          ((C13695 * C1072 + C14507 + C14507 + C29981 * C1084) * C30090 *
               C13692 +
           (C13695 * C4237 + C14508 + C14508 + C29981 * C4241) * C30090 *
               C13693 +
           (C13695 * C14500 + C14509 + C14509 + C29981 * C14502) * C30090 *
               C13694) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C13744 * C93 + C13692 * C156 + C13745 * C630 + C13693 * C692 +
            C13746 * C631 + C13694 * C693) *
               C13696 +
           (C13744 * C98 + C13692 * C161 + C13745 * C636 + C13693 * C698 +
            C13746 * C637 + C13694 * C699) *
               C29981) *
              C30090 * C30030 * C624 -
          ((C13746 * C3643 + C13694 * C3723 + C13745 * C637 + C13693 * C699 +
            C13744 * C636 + C13692 * C698) *
               C29981 +
           (C13746 * C3641 + C13694 * C3721 + C13745 * C631 + C13693 * C693 +
            C13744 * C630 + C13692 * C692) *
               C13696) *
              C30090 * C30030 * C625 +
          ((C13744 * C631 + C13692 * C693 + C13745 * C3641 + C13693 * C3721 +
            C13746 * C14063 + C13694 * C14124) *
               C13696 +
           (C13744 * C637 + C13692 * C699 + C13745 * C3643 + C13693 * C3723 +
            C13746 * C14064 + C13694 * C14125) *
               C29981) *
              C30090 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C13744 * C93 + C13692 * C156 + C13745 * C630 +
                                C13693 * C692 + C13746 * C631 + C13694 * C693) *
                                   C13696 +
                               (C13744 * C98 + C13692 * C161 + C13745 * C636 +
                                C13693 * C698 + C13746 * C637 + C13694 * C699) *
                                   C29981) *
                                  C30090 * C30030 * C30016 * C84 -
                              ((C13746 * C638 + C13694 * C700 + C13745 * C635 +
                                C13693 * C697 + C13744 * C99 + C13692 * C162) *
                                   C29981 +
                               (C13746 * C632 + C13694 * C694 + C13745 * C629 +
                                C13693 * C691 + C13744 * C94 + C13692 * C157) *
                                   C13696) *
                                  C30090 * C30030 * C30016 * C85 +
                              ((C13744 * C95 + C13692 * C158 + C13745 * C628 +
                                C13693 * C690 + C13746 * C633 + C13694 * C695) *
                                   C13696 +
                               (C13744 * C100 + C13692 * C163 + C13745 * C634 +
                                C13693 * C696 + C13746 * C639 + C13694 * C701) *
                                   C29981) *
                                  C30090 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C13744 * C93 + C13692 * C156 + C13745 * C630 + C13693 * C692 +
            C13746 * C631 + C13694 * C693) *
               C13696 +
           (C13744 * C98 + C13692 * C161 + C13745 * C636 + C13693 * C698 +
            C13746 * C637 + C13694 * C699) *
               C29981) *
              C30090 * C1066 -
          ((C13746 * C6061 + C13694 * C6145 + C13745 * C2596 + C13693 * C2658 +
            C13744 * C1077 + C13692 * C1139) *
               C29981 +
           (C13746 * C6059 + C13694 * C6143 + C13745 * C2593 + C13693 * C2655 +
            C13744 * C1071 + C13692 * C1133) *
               C13696) *
              C30090 * C1067 +
          ((C13744 * C1072 + C13692 * C1134 + C13745 * C4237 + C13693 * C4301 +
            C13746 * C14500 + C13694 * C14547) *
               C13696 +
           (C13744 * C1078 + C13692 * C1140 + C13745 * C4239 + C13693 * C4303 +
            C13746 * C14501 + C13694 * C14548) *
               C29981) *
              C30090 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (-std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C13696 +
            (C222 * C98 + C30090 * C228) * C29981) *
               C13692 +
           (C14167 + C14168) * C13693 + C14175 * C13694) *
              C30030 * C624 -
          ((C14178 + C14179) * C13694 + (C14170 + C14169) * C13693 +
           (C14168 + C14167) * C13692) *
              C30030 * C625 +
          (C14175 * C13692 + (C14179 + C14178) * C13693 +
           ((C222 * C14063 + C30090 * C14164) * C13696 +
            (C222 * C14064 + C30090 * C14165) * C29981) *
               C13694) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C222 * C93 + C30090 * C223) * C13696 +
                                (C222 * C98 + C30090 * C228) * C29981) *
                                   C13692 +
                               (C3794 * C13696 + C3795 * C29981) * C13693 +
                               (C3799 * C13696 + C3798 * C29981) * C13694) *
                                  C30030 * C30016 * C84 -
                              ((C3796 * C29981 + C3797 * C13696) * C13694 +
                               (C1656 * C29981 + C1657 * C13696) * C13693 +
                               (C247 * C29981 + C246 * C13696) * C13692) *
                                  C30030 * C30016 * C85 +
                              ((C248 * C13696 + C249 * C29981) * C13692 +
                               (C1655 * C13696 + C1654 * C29981) * C13693 +
                               ((C222 * C633 + C30090 * C745) * C13696 +
                                (C222 * C639 + C30090 * C751) * C29981) *
                                   C13694) *
                                  C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C13696 +
            (C222 * C98 + C30090 * C228) * C29981) *
               C13692 +
           (C14167 + C14168) * C13693 + C14175 * C13694) *
              C1066 -
          (((C222 * C6061 + C30090 * C6215) * C29981 +
            (C222 * C6059 + C30090 * C6213) * C13696) *
               C13694 +
           (C6224 * C29981 + C6225 * C13696) * C13693 +
           ((C222 * C1077 + C30090 * C1189) * C29981 +
            (C222 * C1071 + C30090 * C1183) * C13696) *
               C13692) *
              C1067 +
          (((C222 * C1072 + C30090 * C1184) * C13696 +
            (C222 * C1078 + C30090 * C1190) * C29981) *
               C13692 +
           ((C222 * C4237 + C30090 * C4355) * C13696 +
            (C222 * C4239 + C30090 * C4357) * C29981) *
               C13693 +
           ((C222 * C14500 + C30090 * C14587) * C13696 +
            (C222 * C14501 + C30090 * C14588) * C29981) *
               C13694) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (-std::pow(Pi, 2.5) *
         (((C13696 * C93 + C29981 * C98) * C13744 +
           (C13696 * C156 + C29981 * C289) * C13692 + C14231 * C13745 +
           C14232 * C13693 + C14233 * C13746 + C14234 * C13694) *
              C30090 * C30030 * C624 -
          (C14235 * C13694 + C14236 * C13746 + C14234 * C13693 +
           C14233 * C13745 + C14232 * C13692 + C14231 * C13744) *
              C30090 * C30030 * C625 +
          (C14233 * C13744 + C14234 * C13692 + C14236 * C13745 +
           C14235 * C13693 + (C13696 * C14063 + C29981 * C14064) * C13746 +
           (C13696 * C14124 + C29981 * C14217) * C13694) *
              C30090 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C13696 * C93 + C29981 * C98) * C13744 +
                               (C13696 * C156 + C29981 * C289) * C13692 +
                               (C13696 * C630 + C29981 * C636) * C13745 +
                               (C13696 * C692 + C29981 * C792) * C13693 +
                               (C13696 * C631 + C29981 * C637) * C13746 +
                               (C13696 * C693 + C29981 * C793) * C13694) *
                                  C30090 * C30030 * C30016 * C84 -
                              ((C13696 * C694 + C29981 * C794) * C13694 +
                               (C13696 * C632 + C29981 * C638) * C13746 +
                               (C13696 * C691 + C29981 * C791) * C13693 +
                               (C13696 * C629 + C29981 * C635) * C13745 +
                               (C13696 * C157 + C29981 * C290) * C13692 +
                               (C13696 * C94 + C29981 * C99) * C13744) *
                                  C30090 * C30030 * C30016 * C85 +
                              ((C13696 * C95 + C29981 * C100) * C13744 +
                               (C13696 * C158 + C29981 * C291) * C13692 +
                               (C13696 * C628 + C29981 * C634) * C13745 +
                               (C13696 * C690 + C29981 * C790) * C13693 +
                               (C13696 * C633 + C29981 * C639) * C13746 +
                               (C13696 * C695 + C29981 * C795) * C13694) *
                                  C30090 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C13696 * C93 + C29981 * C98) * C13744 +
           (C13696 * C156 + C29981 * C289) * C13692 + C14231 * C13745 +
           C14232 * C13693 + C14233 * C13746 + C14234 * C13694) *
              C30090 * C1066 -
          ((C13696 * C6143 + C29981 * C6293) * C13694 +
           (C13696 * C6059 + C29981 * C6061) * C13746 +
           (C13696 * C2655 + C29981 * C2767) * C13693 +
           (C13696 * C2593 + C29981 * C2596) * C13745 +
           (C13696 * C1133 + C29981 * C1233) * C13692 +
           (C13696 * C1071 + C29981 * C1077) * C13744) *
              C30090 * C1067 +
          ((C13696 * C1072 + C29981 * C1078) * C13744 +
           (C13696 * C1134 + C29981 * C1234) * C13692 +
           (C13696 * C4237 + C29981 * C4239) * C13745 +
           (C13696 * C4301 + C29981 * C4409) * C13693 +
           (C13696 * C14500 + C29981 * C14501) * C13746 +
           (C13696 * C14547 + C29981 * C14627) * C13694) *
              C30090 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyy[22] += (-std::pow(Pi, 2.5) *
                   ((C13861 * C93 + C13865 + C13865 + C13692 * C333 +
                     C13862 * C630 + C13866 + C13866 + C13693 * C836 +
                     C13863 * C631 + C13867 + C13867 + C13694 * C837) *
                        C29981 * C30090 * C30030 * C624 -
                    (C13863 * C3641 + C14276 + C14276 + C13694 * C3931 +
                     C13862 * C631 + C14277 + C14277 + C13693 * C837 +
                     C13861 * C630 + C14278 + C14278 + C13692 * C836) *
                        C29981 * C30090 * C30030 * C625 +
                    (C13861 * C631 + C14279 + C14279 + C13692 * C837 +
                     C13862 * C3641 + C14280 + C14280 + C13693 * C3931 +
                     C13863 * C14063 + C14281 + C14281 + C13694 * C14274) *
                        C29981 * C30090 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C13861 * C93 + C13865 + C13865 + C13692 * C333 +
                     C13862 * C630 + C13866 + C13866 + C13693 * C836 +
                     C13863 * C631 + C13867 + C13867 + C13694 * C837) *
                        C29981 * C30090 * C30030 * C30016 * C84 -
                    (C13863 * C632 + C13868 + C13868 + C13694 * C838 +
                     C13862 * C629 + C13869 + C13869 + C13693 * C835 +
                     C13861 * C94 + C13870 + C13870 + C13692 * C334) *
                        C29981 * C30090 * C30030 * C30016 * C85 +
                    (C13861 * C95 + C13871 + C13871 + C13692 * C335 +
                     C13862 * C628 + C13872 + C13872 + C13693 * C834 +
                     C13863 * C633 + C13873 + C13873 + C13694 * C839) *
                        C29981 * C30090 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C13861 * C93 + C13865 + C13865 + C13692 * C333 +
                     C13862 * C630 + C13866 + C13866 + C13693 * C836 +
                     C13863 * C631 + C13867 + C13867 + C13694 * C837) *
                        C29981 * C30090 * C1066 -
                    (C13863 * C6059 + C14668 + C14668 + C13694 * C6373 +
                     C13862 * C2593 + C14669 + C14669 + C13693 * C2820 +
                     C13861 * C1071 + C14670 + C14670 + C13692 * C1277) *
                        C29981 * C30090 * C1067 +
                    (C13861 * C1072 + C14671 + C14671 + C13692 * C1278 +
                     C13862 * C4237 + C14672 + C14672 + C13693 * C4461 +
                     C13863 * C14500 + C14673 + C14673 + C13694 * C14666) *
                        C29981 * C30090 * C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (-std::pow(Pi, 2.5) *
         (((C222 * C93 + C30090 * C223) * C13744 +
           (C222 * C156 + C30090 * C396) * C13692 + C3794 * C13745 +
           C4000 * C13693 + C3799 * C13746 + C4002 * C13694) *
              C29981 * C30030 * C624 -
          (C14323 * C13694 + C14177 * C13746 + C4002 * C13693 + C3799 * C13745 +
           C4000 * C13692 + C3794 * C13744) *
              C29981 * C30030 * C625 +
          (C3799 * C13744 + C4002 * C13692 + C14177 * C13745 + C14323 * C13693 +
           (C222 * C14063 + C30090 * C14164) * C13746 +
           (C222 * C14124 + C30090 * C14319) * C13694) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C222 * C93 + C30090 * C223) * C13744 +
           (C222 * C156 + C30090 * C396) * C13692 + C3794 * C13745 +
           C4000 * C13693 + C3799 * C13746 + C4002 * C13694) *
              C29981 * C30030 * C30016 * C84 -
          (C4001 * C13694 + C3797 * C13746 + C1829 * C13693 + C1657 * C13745 +
           C411 * C13692 + C246 * C13744) *
              C29981 * C30030 * C30016 * C85 +
          (C248 * C13744 + C412 * C13692 + C1655 * C13745 + C1828 * C13693 +
           (C222 * C633 + C30090 * C745) * C13746 +
           (C222 * C695 + C30090 * C889) * C13694) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C30090 * C223) * C13744 +
           (C222 * C156 + C30090 * C396) * C13692 + C3794 * C13745 +
           C4000 * C13693 + C3799 * C13746 + C4002 * C13694) *
              C29981 * C1066 -
          ((C222 * C6143 + C30090 * C6445) * C13694 +
           (C222 * C6059 + C30090 * C6213) * C13746 + C6450 * C13693 +
           C6225 * C13745 + (C222 * C1133 + C30090 * C1327) * C13692 +
           (C222 * C1071 + C30090 * C1183) * C13744) *
              C29981 * C1067 +
          ((C222 * C1072 + C30090 * C1184) * C13744 +
           (C222 * C1134 + C30090 * C1328) * C13692 +
           (C222 * C4237 + C30090 * C4355) * C13745 +
           (C222 * C4301 + C30090 * C4521) * C13693 +
           (C222 * C14500 + C30090 * C14587) * C13746 +
           (C222 * C14547 + C30090 * C14711) * C13694) *
              C29981 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C222 +
            (C13696 * C223 + C29981 * C455) * C30090) *
               C13692 +
           (C14363 + C14375) * C13693 + C14378 * C13694) *
              C30030 * C624 -
          ((C14377 + C14371) * C13694 + (C14376 + C14366) * C13693 +
           (C14375 + C14363) * C13692) *
              C30030 * C625 +
          (C14378 * C13692 + (C14371 + C14377) * C13693 +
           ((C13696 * C14063 + C29981 * C14064) * C222 +
            (C13696 * C14164 + C29981 * C14361) * C30090) *
               C13694) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C13696 * C93 + C29981 * C98) * C222 +
                                (C13696 * C223 + C29981 * C455) * C30090) *
                                   C13692 +
                               ((C13696 * C630 + C29981 * C636) * C222 +
                                (C13696 * C742 + C29981 * C930) * C30090) *
                                   C13693 +
                               ((C13696 * C631 + C29981 * C637) * C222 +
                                (C13696 * C743 + C29981 * C931) * C30090) *
                                   C13694) *
                                  C30030 * C30016 * C84 -
                              (((C13696 * C744 + C29981 * C932) * C30090 +
                                (C13696 * C632 + C29981 * C638) * C222) *
                                   C13694 +
                               ((C13696 * C741 + C29981 * C929) * C30090 +
                                (C13696 * C629 + C29981 * C635) * C222) *
                                   C13693 +
                               ((C13696 * C224 + C29981 * C456) * C30090 +
                                (C13696 * C94 + C29981 * C99) * C222) *
                                   C13692) *
                                  C30030 * C30016 * C85 +
                              (((C13696 * C95 + C29981 * C100) * C222 +
                                (C13696 * C225 + C29981 * C457) * C30090) *
                                   C13692 +
                               ((C13696 * C628 + C29981 * C634) * C222 +
                                (C13696 * C740 + C29981 * C928) * C30090) *
                                   C13693 +
                               ((C13696 * C633 + C29981 * C639) * C222 +
                                (C13696 * C745 + C29981 * C933) * C30090) *
                                   C13694) *
                                  C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C222 +
            (C13696 * C223 + C29981 * C455) * C30090) *
               C13692 +
           (C14363 + C14375) * C13693 + C14378 * C13694) *
              C1066 -
          (((C13696 * C6213 + C29981 * C6516) * C30090 +
            (C13696 * C6059 + C29981 * C6061) * C222) *
               C13694 +
           ((C13696 * C2711 + C29981 * C2929) * C30090 +
            (C13696 * C2593 + C29981 * C2596) * C222) *
               C13693 +
           ((C13696 * C1183 + C29981 * C1371) * C30090 +
            (C13696 * C1071 + C29981 * C1077) * C222) *
               C13692) *
              C1067 +
          (((C13696 * C1072 + C29981 * C1078) * C222 +
            (C13696 * C1184 + C29981 * C1372) * C30090) *
               C13692 +
           ((C13696 * C4237 + C29981 * C4239) * C222 +
            (C13696 * C4355 + C29981 * C4573) * C30090) *
               C13693 +
           ((C13696 * C14500 + C29981 * C14501) * C222 +
            (C13696 * C14587 + C29981 * C14750) * C30090) *
               C13694) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C13744 * C93 + C13692 * C156 + C13745 * C630 + C13693 * C692 +
            C13746 * C631 + C13694 * C693) *
               C222 +
           (C13744 * C223 + C13692 * C498 + C13745 * C742 + C13693 * C974 +
            C13746 * C743 + C13694 * C975) *
               C30090) *
              C29981 * C30030 * C624 -
          ((C13746 * C3775 + C13694 * C4116 + C13745 * C743 + C13693 * C975 +
            C13744 * C742 + C13692 * C974) *
               C30090 +
           (C13746 * C3641 + C13694 * C3721 + C13745 * C631 + C13693 * C693 +
            C13744 * C630 + C13692 * C692) *
               C222) *
              C29981 * C30030 * C625 +
          ((C13744 * C631 + C13692 * C693 + C13745 * C3641 + C13693 * C3721 +
            C13746 * C14063 + C13694 * C14124) *
               C222 +
           (C13744 * C743 + C13692 * C975 + C13745 * C3775 + C13693 * C4116 +
            C13746 * C14164 + C13694 * C14416) *
               C30090) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C13744 * C93 + C13692 * C156 + C13745 * C630 +
                                C13693 * C692 + C13746 * C631 + C13694 * C693) *
                                   C222 +
                               (C13744 * C223 + C13692 * C498 + C13745 * C742 +
                                C13693 * C974 + C13746 * C743 + C13694 * C975) *
                                   C30090) *
                                  C29981 * C30030 * C30016 * C84 -
                              ((C13746 * C744 + C13694 * C976 + C13745 * C741 +
                                C13693 * C973 + C13744 * C224 + C13692 * C499) *
                                   C30090 +
                               (C13746 * C632 + C13694 * C694 + C13745 * C629 +
                                C13693 * C691 + C13744 * C94 + C13692 * C157) *
                                   C222) *
                                  C29981 * C30030 * C30016 * C85 +
                              ((C13744 * C95 + C13692 * C158 + C13745 * C628 +
                                C13693 * C690 + C13746 * C633 + C13694 * C695) *
                                   C222 +
                               (C13744 * C225 + C13692 * C500 + C13745 * C740 +
                                C13693 * C972 + C13746 * C745 + C13694 * C977) *
                                   C30090) *
                                  C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C13744 * C93 + C13692 * C156 + C13745 * C630 + C13693 * C692 +
            C13746 * C631 + C13694 * C693) *
               C222 +
           (C13744 * C223 + C13692 * C498 + C13745 * C742 + C13693 * C974 +
            C13746 * C743 + C13694 * C975) *
               C30090) *
              C29981 * C1066 -
          ((C13746 * C6213 + C13694 * C6590 + C13745 * C2711 + C13693 * C2982 +
            C13744 * C1183 + C13692 * C1415) *
               C30090 +
           (C13746 * C6059 + C13694 * C6143 + C13745 * C2593 + C13693 * C2655 +
            C13744 * C1071 + C13692 * C1133) *
               C222) *
              C29981 * C1067 +
          ((C13744 * C1072 + C13692 * C1134 + C13745 * C4237 + C13693 * C4301 +
            C13746 * C14500 + C13694 * C14547) *
               C222 +
           (C13744 * C1184 + C13692 * C1416 + C13745 * C4355 + C13693 * C4625 +
            C13746 * C14587 + C13694 * C14789) *
               C30090) *
              C29981 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (-std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C30090 * C558) * C13692 +
           C4185 * C13693 + C4187 * C13694) *
              C29981 * C30030 * C624 -
          (C14462 * C13694 + C4187 * C13693 + C4185 * C13692) * C29981 *
              C30030 * C625 +
          (C4187 * C13692 + C14462 * C13693 +
           (C557 * C14063 + C14459 + C14459 + C30090 * C14455) * C13694) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C30090 * C558) * C13692 +
           C4185 * C13693 + C4187 * C13694) *
              C29981 * C30030 * C30016 * C84 -
          (C4186 * C13694 + C2005 * C13693 + C581 * C13692) * C29981 * C30030 *
              C30016 * C85 +
          (C582 * C13692 + C2004 * C13693 +
           (C557 * C633 + C1028 + C1028 + C30090 * C1021) * C13694) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C30090 * C558) * C13692 +
           C4185 * C13693 + C4187 * C13694) *
              C29981 * C1066 -
          ((C557 * C6059 + C6663 + C6663 + C30090 * C6658) * C13694 +
           C6667 * C13693 +
           (C557 * C1071 + C1466 + C1466 + C30090 * C1459) * C13692) *
              C29981 * C1067 +
          ((C557 * C1072 + C1467 + C1467 + C30090 * C1460) * C13692 +
           (C557 * C4237 + C4680 + C4680 + C30090 * C4677) * C13693 +
           (C557 * C14500 + C14830 + C14830 + C30090 * C14828) * C13694) *
              C29981 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C30090 * C13692 +
            C14084 * C13693 + C14085 * C13694) *
               C2057 -
           ((C13695 * C6059 + C14504 + C14504 + C29981 * C6063) * C30090 *
                C13694 +
            (C13695 * C2593 + C14505 + C14505 + C29981 * C2599) * C30090 *
                C13693 +
            (C13695 * C1071 + C14506 + C14506 + C29981 * C1083) * C30090 *
                C13692) *
               C2058) *
              C30016 * C1521 +
          (((C13695 * C1070 + C15373 + C15373 + C29981 * C1082) * C30090 *
                C13692 +
            (C13695 * C2594 + C15374 + C15374 + C29981 * C2600) * C30090 *
                C13693 +
            (C13695 * C6060 + C15375 + C15375 + C29981 * C6064) * C30090 *
                C13694) *
               C2058 -
           (C14893 * C13694 + C14892 * C13693 +
            (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C30090 *
                C13692) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexy[23] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13744 * C93 + C13692 * C156 + C13745 * C630 +
                       C13693 * C692 + C13746 * C631 + C13694 * C693) *
                          C13696 +
                      (C13744 * C98 + C13692 * C161 + C13745 * C636 +
                       C13693 * C698 + C13746 * C637 + C13694 * C699) *
                          C29981) *
                         C30090 * C2057 -
                     ((C13746 * C6061 + C13694 * C6145 + C13745 * C2596 +
                       C13693 * C2658 + C13744 * C1077 + C13692 * C1139) *
                          C29981 +
                      (C13746 * C6059 + C13694 * C6143 + C13745 * C2593 +
                       C13693 * C2655 + C13744 * C1071 + C13692 * C1133) *
                          C13696) *
                         C30090 * C2058) *
                        C30016 * C1521 +
                    (((C13744 * C1070 + C13692 * C1132 + C13745 * C2594 +
                       C13693 * C2656 + C13746 * C6060 + C13694 * C6144) *
                          C13696 +
                      (C13744 * C1076 + C13692 * C1138 + C13745 * C2597 +
                       C13693 * C2659 + C13746 * C6062 + C13694 * C6146) *
                          C29981) *
                         C30090 * C2058 -
                     ((C13746 * C638 + C13694 * C700 + C13745 * C635 +
                       C13693 * C697 + C13744 * C99 + C13692 * C162) *
                          C29981 +
                      (C13746 * C632 + C13694 * C694 + C13745 * C629 +
                       C13693 * C691 + C13744 * C94 + C13692 * C157) *
                          C13696) *
                         C30090 * C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[23] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C30090 * C223) * C13696 +
                       (C222 * C98 + C30090 * C228) * C29981) *
                          C13692 +
                      (C14167 + C14168) * C13693 + C14175 * C13694) *
                         C2057 -
                     (((C222 * C6061 + C30090 * C6215) * C29981 +
                       (C222 * C6059 + C30090 * C6213) * C13696) *
                          C13694 +
                      (C6224 * C29981 + C6225 * C13696) * C13693 +
                      ((C222 * C1077 + C30090 * C1189) * C29981 +
                       (C222 * C1071 + C30090 * C1183) * C13696) *
                          C13692) *
                         C2058) *
                        C30016 * C1521 +
                    (((C2193 * C13696 + C2192 * C29981) * C13692 +
                      (C5565 * C13696 + C5564 * C29981) * C13693 +
                      ((C222 * C6060 + C30090 * C6214) * C13696 +
                       (C222 * C6062 + C30090 * C6216) * C29981) *
                          C13694) *
                         C2058 -
                     ((C14997 + C14996) * C13694 + (C14995 + C14994) * C13693 +
                      (C247 * C29981 + C246 * C13696) * C13692) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C13744 +
            (C13696 * C156 + C29981 * C289) * C13692 + C14231 * C13745 +
            C14232 * C13693 + C14233 * C13746 + C14234 * C13694) *
               C30090 * C2057 -
           ((C13696 * C6143 + C29981 * C6293) * C13694 +
            (C13696 * C6059 + C29981 * C6061) * C13746 +
            (C13696 * C2655 + C29981 * C2767) * C13693 +
            (C13696 * C2593 + C29981 * C2596) * C13745 +
            (C13696 * C1133 + C29981 * C1233) * C13692 +
            (C13696 * C1071 + C29981 * C1077) * C13744) *
               C30090 * C2058) *
              C30016 * C1521 +
          (((C13696 * C1070 + C29981 * C1076) * C13744 +
            (C13696 * C1132 + C29981 * C1232) * C13692 +
            (C13696 * C2594 + C29981 * C2597) * C13745 +
            (C13696 * C2656 + C29981 * C2768) * C13693 +
            (C13696 * C6060 + C29981 * C6062) * C13746 +
            (C13696 * C6144 + C29981 * C6294) * C13694) *
               C30090 * C2058 -
           (C15059 * C13694 + C15058 * C13746 + C15057 * C13693 +
            C15056 * C13745 + (C13696 * C157 + C29981 * C290) * C13692 +
            (C13696 * C94 + C29981 * C99) * C13744) *
               C30090 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[23] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13861 * C93 + C13865 + C13865 + C13692 * C333 +
                      C13862 * C630 + C13866 + C13866 + C13693 * C836 +
                      C13863 * C631 + C13867 + C13867 + C13694 * C837) *
                         C29981 * C30090 * C2057 -
                     (C13863 * C6059 + C14668 + C14668 + C13694 * C6373 +
                      C13862 * C2593 + C14669 + C14669 + C13693 * C2820 +
                      C13861 * C1071 + C14670 + C14670 + C13692 * C1277) *
                         C29981 * C30090 * C2058) *
                        C30016 * C1521 +
                    ((C13861 * C1070 + C15576 + C15576 + C13692 * C1276 +
                      C13862 * C2594 + C15577 + C15577 + C13693 * C2821 +
                      C13863 * C6060 + C15578 + C15578 + C13694 * C6374) *
                         C29981 * C30090 * C2058 -
                     (C13863 * C632 + C13868 + C13868 + C13694 * C838 +
                      C13862 * C629 + C13869 + C13869 + C13693 * C835 +
                      C13861 * C94 + C13870 + C13870 + C13692 * C334) *
                         C29981 * C30090 * C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C30090 * C223) * C13744 +
            (C222 * C156 + C30090 * C396) * C13692 + C3794 * C13745 +
            C4000 * C13693 + C3799 * C13746 + C4002 * C13694) *
               C29981 * C2057 -
           ((C222 * C6143 + C30090 * C6445) * C13694 +
            (C222 * C6059 + C30090 * C6213) * C13746 + C6450 * C13693 +
            C6225 * C13745 + (C222 * C1133 + C30090 * C1327) * C13692 +
            (C222 * C1071 + C30090 * C1183) * C13744) *
               C29981 * C2058) *
              C30016 * C1521 +
          ((C2193 * C13744 + C2365 * C13692 + C5565 * C13745 + C5781 * C13693 +
            (C222 * C6060 + C30090 * C6214) * C13746 +
            (C222 * C6144 + C30090 * C6446) * C13694) *
               C29981 * C2058 -
           (C4001 * C13694 + C3797 * C13746 + C1829 * C13693 + C1657 * C13745 +
            C411 * C13692 + C246 * C13744) *
               C29981 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[23] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C222 +
                       (C13696 * C223 + C29981 * C455) * C30090) *
                          C13692 +
                      (C14363 + C14375) * C13693 + C14378 * C13694) *
                         C2057 -
                     (((C13696 * C6213 + C29981 * C6516) * C30090 +
                       (C13696 * C6059 + C29981 * C6061) * C222) *
                          C13694 +
                      ((C13696 * C2711 + C29981 * C2929) * C30090 +
                       (C13696 * C2593 + C29981 * C2596) * C222) *
                          C13693 +
                      ((C13696 * C1183 + C29981 * C1371) * C30090 +
                       (C13696 * C1071 + C29981 * C1077) * C222) *
                          C13692) *
                         C2058) *
                        C30016 * C1521 +
                    ((((C13696 * C1070 + C29981 * C1076) * C222 +
                       (C13696 * C1182 + C29981 * C1370) * C30090) *
                          C13692 +
                      ((C13696 * C2594 + C29981 * C2597) * C222 +
                       (C13696 * C2712 + C29981 * C2930) * C30090) *
                          C13693 +
                      ((C13696 * C6060 + C29981 * C6062) * C222 +
                       (C13696 * C6214 + C29981 * C6517) * C30090) *
                          C13694) *
                         C2058 -
                     ((C15222 + C15216) * C13694 + (C15221 + C15213) * C13693 +
                      ((C13696 * C224 + C29981 * C456) * C30090 +
                       (C13696 * C94 + C29981 * C99) * C222) *
                          C13692) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[23] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13744 * C93 + C13692 * C156 + C13745 * C630 +
                       C13693 * C692 + C13746 * C631 + C13694 * C693) *
                          C222 +
                      (C13744 * C223 + C13692 * C498 + C13745 * C742 +
                       C13693 * C974 + C13746 * C743 + C13694 * C975) *
                          C30090) *
                         C29981 * C2057 -
                     ((C13746 * C6213 + C13694 * C6590 + C13745 * C2711 +
                       C13693 * C2982 + C13744 * C1183 + C13692 * C1415) *
                          C30090 +
                      (C13746 * C6059 + C13694 * C6143 + C13745 * C2593 +
                       C13693 * C2655 + C13744 * C1071 + C13692 * C1133) *
                          C222) *
                         C29981 * C2058) *
                        C30016 * C1521 +
                    (((C13744 * C1070 + C13692 * C1132 + C13745 * C2594 +
                       C13693 * C2656 + C13746 * C6060 + C13694 * C6144) *
                          C222 +
                      (C13744 * C1182 + C13692 * C1414 + C13745 * C2712 +
                       C13693 * C2983 + C13746 * C6214 + C13694 * C6591) *
                          C30090) *
                         C29981 * C2058 -
                     ((C13746 * C744 + C13694 * C976 + C13745 * C741 +
                       C13693 * C973 + C13744 * C224 + C13692 * C499) *
                          C30090 +
                      (C13746 * C632 + C13694 * C694 + C13745 * C629 +
                       C13693 * C691 + C13744 * C94 + C13692 * C157) *
                          C222) *
                         C29981 * C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C30090 * C558) * C13692 +
            C4185 * C13693 + C4187 * C13694) *
               C29981 * C2057 -
           ((C557 * C6059 + C6663 + C6663 + C30090 * C6658) * C13694 +
            C6667 * C13693 +
            (C557 * C1071 + C1466 + C1466 + C30090 * C1459) * C13692) *
               C29981 * C2058) *
              C30016 * C1521 +
          ((C2541 * C13692 + C5992 * C13693 +
            (C557 * C6060 + C6664 + C6664 + C30090 * C6659) * C13694) *
               C29981 * C2058 -
           (C4186 * C13694 + C2005 * C13693 + C581 * C13692) * C29981 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C30090 * C13692 +
           (C13695 * C630 + C13699 + C13699 + C29981 * C642) * C30090 * C13693 +
           (C13695 * C631 + C13700 + C13700 + C29981 * C643) * C30090 *
               C13694) *
              C30030 * C30016 * C84 -
          ((C13695 * C632 + C13701 + C13701 + C29981 * C644) * C30090 * C13694 +
           (C13695 * C629 + C13702 + C13702 + C29981 * C641) * C30090 * C13693 +
           (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C30090 * C13692) *
              C30030 * C30016 * C85 +
          ((C13695 * C95 + C13704 + C13704 + C29981 * C105) * C30090 * C13692 +
           (C13695 * C628 + C13705 + C13705 + C29981 * C640) * C30090 * C13693 +
           (C13695 * C633 + C13706 + C13706 + C29981 * C645) * C30090 *
               C13694) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C30090 * C13692 +
           C14084 * C13693 + C14085 * C13694) *
              C30030 * C624 -
          (C14086 * C13694 + C14085 * C13693 + C14084 * C13692) * C30030 *
              C625 +
          (C14085 * C13692 + C14086 * C13693 +
           (C13695 * C14063 + C14074 + C14074 + C29981 * C14065) * C30090 *
               C13694) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eexy[24] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C13744 * C93 + C13692 * C156 + C13745 * C630 +
                      C13693 * C692 + C13746 * C631 + C13694 * C693) *
                         C13696 +
                     (C13744 * C98 + C13692 * C161 + C13745 * C636 +
                      C13693 * C698 + C13746 * C637 + C13694 * C699) *
                         C29981) *
                        C30090 * C30030 * C30016 * C84 -
                    ((C13746 * C638 + C13694 * C700 + C13745 * C635 +
                      C13693 * C697 + C13744 * C99 + C13692 * C162) *
                         C29981 +
                     (C13746 * C632 + C13694 * C694 + C13745 * C629 +
                      C13693 * C691 + C13744 * C94 + C13692 * C157) *
                         C13696) *
                        C30090 * C30030 * C30016 * C85 +
                    ((C13744 * C95 + C13692 * C158 + C13745 * C628 +
                      C13693 * C690 + C13746 * C633 + C13694 * C695) *
                         C13696 +
                     (C13744 * C100 + C13692 * C163 + C13745 * C634 +
                      C13693 * C696 + C13746 * C639 + C13694 * C701) *
                         C29981) *
                        C30090 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C13744 * C93 + C13692 * C156 + C13745 * C630 +
                      C13693 * C692 + C13746 * C631 + C13694 * C693) *
                         C13696 +
                     (C13744 * C98 + C13692 * C161 + C13745 * C636 +
                      C13693 * C698 + C13746 * C637 + C13694 * C699) *
                         C29981) *
                        C30090 * C30030 * C624 -
                    ((C13746 * C3643 + C13694 * C3723 + C13745 * C637 +
                      C13693 * C699 + C13744 * C636 + C13692 * C698) *
                         C29981 +
                     (C13746 * C3641 + C13694 * C3721 + C13745 * C631 +
                      C13693 * C693 + C13744 * C630 + C13692 * C692) *
                         C13696) *
                        C30090 * C30030 * C625 +
                    ((C13744 * C631 + C13692 * C693 + C13745 * C3641 +
                      C13693 * C3721 + C13746 * C14063 + C13694 * C14124) *
                         C13696 +
                     (C13744 * C637 + C13692 * C699 + C13745 * C3643 +
                      C13693 * C3723 + C13746 * C14064 + C13694 * C14125) *
                         C29981) *
                        C30090 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexz[24] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C30090 * C223) * C13696 +
                      (C222 * C98 + C30090 * C228) * C29981) *
                         C13692 +
                     (C3794 * C13696 + C3795 * C29981) * C13693 +
                     (C3799 * C13696 + C3798 * C29981) * C13694) *
                        C30030 * C30016 * C84 -
                    ((C3796 * C29981 + C3797 * C13696) * C13694 +
                     (C1656 * C29981 + C1657 * C13696) * C13693 +
                     (C247 * C29981 + C246 * C13696) * C13692) *
                        C30030 * C30016 * C85 +
                    ((C248 * C13696 + C249 * C29981) * C13692 +
                     (C1655 * C13696 + C1654 * C29981) * C13693 +
                     ((C222 * C633 + C30090 * C745) * C13696 +
                      (C222 * C639 + C30090 * C751) * C29981) *
                         C13694) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C30090 * C223) * C13696 +
                      (C222 * C98 + C30090 * C228) * C29981) *
                         C13692 +
                     (C14167 + C14168) * C13693 + C14175 * C13694) *
                        C30030 * C624 -
                    ((C14178 + C14179) * C13694 + (C14170 + C14169) * C13693 +
                     (C14168 + C14167) * C13692) *
                        C30030 * C625 +
                    (C14175 * C13692 + (C14179 + C14178) * C13693 +
                     ((C222 * C14063 + C30090 * C14164) * C13696 +
                      (C222 * C14064 + C30090 * C14165) * C29981) *
                         C13694) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13696 * C93 + C29981 * C98) * C13744 +
           (C13696 * C156 + C29981 * C289) * C13692 +
           (C13696 * C630 + C29981 * C636) * C13745 +
           (C13696 * C692 + C29981 * C792) * C13693 +
           (C13696 * C631 + C29981 * C637) * C13746 +
           (C13696 * C693 + C29981 * C793) * C13694) *
              C30090 * C30030 * C30016 * C84 -
          ((C13696 * C694 + C29981 * C794) * C13694 +
           (C13696 * C632 + C29981 * C638) * C13746 +
           (C13696 * C691 + C29981 * C791) * C13693 +
           (C13696 * C629 + C29981 * C635) * C13745 +
           (C13696 * C157 + C29981 * C290) * C13692 +
           (C13696 * C94 + C29981 * C99) * C13744) *
              C30090 * C30030 * C30016 * C85 +
          ((C13696 * C95 + C29981 * C100) * C13744 +
           (C13696 * C158 + C29981 * C291) * C13692 +
           (C13696 * C628 + C29981 * C634) * C13745 +
           (C13696 * C690 + C29981 * C790) * C13693 +
           (C13696 * C633 + C29981 * C639) * C13746 +
           (C13696 * C695 + C29981 * C795) * C13694) *
              C30090 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13696 * C93 + C29981 * C98) * C13744 +
           (C13696 * C156 + C29981 * C289) * C13692 + C14231 * C13745 +
           C14232 * C13693 + C14233 * C13746 + C14234 * C13694) *
              C30090 * C30030 * C624 -
          (C14235 * C13694 + C14236 * C13746 + C14234 * C13693 +
           C14233 * C13745 + C14232 * C13692 + C14231 * C13744) *
              C30090 * C30030 * C625 +
          (C14233 * C13744 + C14234 * C13692 + C14236 * C13745 +
           C14235 * C13693 + (C13696 * C14063 + C29981 * C14064) * C13746 +
           (C13696 * C14124 + C29981 * C14217) * C13694) *
              C30090 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyy[24] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C13861 * C93 + C13865 + C13865 + C13692 * C333 +
                     C13862 * C630 + C13866 + C13866 + C13693 * C836 +
                     C13863 * C631 + C13867 + C13867 + C13694 * C837) *
                        C29981 * C30090 * C30030 * C30016 * C84 -
                    (C13863 * C632 + C13868 + C13868 + C13694 * C838 +
                     C13862 * C629 + C13869 + C13869 + C13693 * C835 +
                     C13861 * C94 + C13870 + C13870 + C13692 * C334) *
                        C29981 * C30090 * C30030 * C30016 * C85 +
                    (C13861 * C95 + C13871 + C13871 + C13692 * C335 +
                     C13862 * C628 + C13872 + C13872 + C13693 * C834 +
                     C13863 * C633 + C13873 + C13873 + C13694 * C839) *
                        C29981 * C30090 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C13861 * C93 + C13865 + C13865 + C13692 * C333 +
                     C13862 * C630 + C13866 + C13866 + C13693 * C836 +
                     C13863 * C631 + C13867 + C13867 + C13694 * C837) *
                        C29981 * C30090 * C30030 * C624 -
                    (C13863 * C3641 + C14276 + C14276 + C13694 * C3931 +
                     C13862 * C631 + C14277 + C14277 + C13693 * C837 +
                     C13861 * C630 + C14278 + C14278 + C13692 * C836) *
                        C29981 * C30090 * C30030 * C625 +
                    (C13861 * C631 + C14279 + C14279 + C13692 * C837 +
                     C13862 * C3641 + C14280 + C14280 + C13693 * C3931 +
                     C13863 * C14063 + C14281 + C14281 + C13694 * C14274) *
                        C29981 * C30090 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[24] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C30090 * C223) * C13744 +
           (C222 * C156 + C30090 * C396) * C13692 + C3794 * C13745 +
           C4000 * C13693 + C3799 * C13746 + C4002 * C13694) *
              C29981 * C30030 * C30016 * C84 -
          (C4001 * C13694 + C3797 * C13746 + C1829 * C13693 + C1657 * C13745 +
           C411 * C13692 + C246 * C13744) *
              C29981 * C30030 * C30016 * C85 +
          (C248 * C13744 + C412 * C13692 + C1655 * C13745 + C1828 * C13693 +
           (C222 * C633 + C30090 * C745) * C13746 +
           (C222 * C695 + C30090 * C889) * C13694) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C30090 * C223) * C13744 +
           (C222 * C156 + C30090 * C396) * C13692 + C3794 * C13745 +
           C4000 * C13693 + C3799 * C13746 + C4002 * C13694) *
              C29981 * C30030 * C624 -
          (C14323 * C13694 + C14177 * C13746 + C4002 * C13693 + C3799 * C13745 +
           C4000 * C13692 + C3794 * C13744) *
              C29981 * C30030 * C625 +
          (C3799 * C13744 + C4002 * C13692 + C14177 * C13745 + C14323 * C13693 +
           (C222 * C14063 + C30090 * C14164) * C13746 +
           (C222 * C14124 + C30090 * C14319) * C13694) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[24] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C13696 * C93 + C29981 * C98) * C222 +
                      (C13696 * C223 + C29981 * C455) * C30090) *
                         C13692 +
                     ((C13696 * C630 + C29981 * C636) * C222 +
                      (C13696 * C742 + C29981 * C930) * C30090) *
                         C13693 +
                     ((C13696 * C631 + C29981 * C637) * C222 +
                      (C13696 * C743 + C29981 * C931) * C30090) *
                         C13694) *
                        C30030 * C30016 * C84 -
                    (((C13696 * C744 + C29981 * C932) * C30090 +
                      (C13696 * C632 + C29981 * C638) * C222) *
                         C13694 +
                     ((C13696 * C741 + C29981 * C929) * C30090 +
                      (C13696 * C629 + C29981 * C635) * C222) *
                         C13693 +
                     ((C13696 * C224 + C29981 * C456) * C30090 +
                      (C13696 * C94 + C29981 * C99) * C222) *
                         C13692) *
                        C30030 * C30016 * C85 +
                    (((C13696 * C95 + C29981 * C100) * C222 +
                      (C13696 * C225 + C29981 * C457) * C30090) *
                         C13692 +
                     ((C13696 * C628 + C29981 * C634) * C222 +
                      (C13696 * C740 + C29981 * C928) * C30090) *
                         C13693 +
                     ((C13696 * C633 + C29981 * C639) * C222 +
                      (C13696 * C745 + C29981 * C933) * C30090) *
                         C13694) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C13696 * C93 + C29981 * C98) * C222 +
                      (C13696 * C223 + C29981 * C455) * C30090) *
                         C13692 +
                     (C14363 + C14375) * C13693 + C14378 * C13694) *
                        C30030 * C624 -
                    ((C14377 + C14371) * C13694 + (C14376 + C14366) * C13693 +
                     (C14375 + C14363) * C13692) *
                        C30030 * C625 +
                    (C14378 * C13692 + (C14371 + C14377) * C13693 +
                     ((C13696 * C14063 + C29981 * C14064) * C222 +
                      (C13696 * C14164 + C29981 * C14361) * C30090) *
                         C13694) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eezy[24] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C13744 * C93 + C13692 * C156 + C13745 * C630 +
                      C13693 * C692 + C13746 * C631 + C13694 * C693) *
                         C222 +
                     (C13744 * C223 + C13692 * C498 + C13745 * C742 +
                      C13693 * C974 + C13746 * C743 + C13694 * C975) *
                         C30090) *
                        C29981 * C30030 * C30016 * C84 -
                    ((C13746 * C744 + C13694 * C976 + C13745 * C741 +
                      C13693 * C973 + C13744 * C224 + C13692 * C499) *
                         C30090 +
                     (C13746 * C632 + C13694 * C694 + C13745 * C629 +
                      C13693 * C691 + C13744 * C94 + C13692 * C157) *
                         C222) *
                        C29981 * C30030 * C30016 * C85 +
                    ((C13744 * C95 + C13692 * C158 + C13745 * C628 +
                      C13693 * C690 + C13746 * C633 + C13694 * C695) *
                         C222 +
                     (C13744 * C225 + C13692 * C500 + C13745 * C740 +
                      C13693 * C972 + C13746 * C745 + C13694 * C977) *
                         C30090) *
                        C29981 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C13744 * C93 + C13692 * C156 + C13745 * C630 +
                      C13693 * C692 + C13746 * C631 + C13694 * C693) *
                         C222 +
                     (C13744 * C223 + C13692 * C498 + C13745 * C742 +
                      C13693 * C974 + C13746 * C743 + C13694 * C975) *
                         C30090) *
                        C29981 * C30030 * C624 -
                    ((C13746 * C3775 + C13694 * C4116 + C13745 * C743 +
                      C13693 * C975 + C13744 * C742 + C13692 * C974) *
                         C30090 +
                     (C13746 * C3641 + C13694 * C3721 + C13745 * C631 +
                      C13693 * C693 + C13744 * C630 + C13692 * C692) *
                         C222) *
                        C29981 * C30030 * C625 +
                    ((C13744 * C631 + C13692 * C693 + C13745 * C3641 +
                      C13693 * C3721 + C13746 * C14063 + C13694 * C14124) *
                         C222 +
                     (C13744 * C743 + C13692 * C975 + C13745 * C3775 +
                      C13693 * C4116 + C13746 * C14164 + C13694 * C14416) *
                         C30090) *
                        C29981 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C30090 * C558) * C13692 +
           C4185 * C13693 + C4187 * C13694) *
              C29981 * C30030 * C30016 * C84 -
          (C4186 * C13694 + C2005 * C13693 + C581 * C13692) * C29981 * C30030 *
              C30016 * C85 +
          (C582 * C13692 + C2004 * C13693 +
           (C557 * C633 + C1028 + C1028 + C30090 * C1021) * C13694) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C30090 * C558) * C13692 +
           C4185 * C13693 + C4187 * C13694) *
              C29981 * C30030 * C624 -
          (C14462 * C13694 + C4187 * C13693 + C4185 * C13692) * C29981 *
              C30030 * C625 +
          (C4187 * C13692 + C14462 * C13693 +
           (C557 * C14063 + C14459 + C14459 + C30090 * C14455) * C13694) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eexx[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C6717 +
             C17340 * C30148) *
                C10233 +
            (C16801 + C16802) * C30146) *
               C30030 * C1519 -
           ((C16803 + C16804) * C30146 + (C16802 + C16801) * C10233) * C30030 *
               C1520) *
              C1521 +
          (((C17914 + C17920) * C10233 +
            (C14891 * C6717 +
             (C13695 * C6060 + C15375 + C15375 + C29981 * C6064) * C30148) *
                C30146) *
               C30030 * C1520 -
           ((C17920 + C17914) * C30146 +
            ((C13695 * C1070 + C15373 + C15373 + C29981 * C1082) * C30148 +
             (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C6717) *
                C10233) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexy[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                 C13696 +
             (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
                 C29981) *
                C6717 +
            ((C17411 + C17412) * C13696 + (C17413 + C17414) * C29981) *
                C30148) *
               C30030 * C1519 -
           (((C10302 * C6061 + C30146 * C6145 + C10301 * C2596 +
              C10233 * C2658) *
                 C29981 +
             (C10302 * C6059 + C30146 * C6143 + C10301 * C2593 +
              C10233 * C2655) *
                 C13696) *
                C30148 +
            ((C10302 * C637 + C30146 * C699 + C10301 * C636 + C10233 * C698) *
                 C29981 +
             (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
                 C13696) *
                C6717) *
               C30030 * C1520) *
              C1521 +
          ((((C11879 + C11878) * C13696 + (C11877 + C11876) * C29981) * C6717 +
            ((C10301 * C2594 + C10233 * C2656 + C10302 * C6060 +
              C30146 * C6144) *
                 C13696 +
             (C10301 * C2597 + C10233 * C2659 + C10302 * C6062 +
              C30146 * C6146) *
                 C29981) *
                C30148) *
               C30030 * C1520 -
           (((C12532 + C12533) * C29981 + (C12534 + C12535) * C13696) * C30148 +
            ((C10323 + C10322) * C29981 + (C10321 + C10320) * C13696) * C6717) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                 C13696 +
             (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
                 C29981) *
                C10233 +
            ((C16921 + C16922) * C13696 + (C16923 + C16924) * C29981) *
                C30146) *
               C30030 * C1519 -
           (((C16925 + C16926) * C29981 + (C16927 + C16928) * C13696) * C30146 +
            ((C16924 + C16923) * C29981 + (C16922 + C16921) * C13696) *
                C10233) *
               C30030 * C1520) *
              C1521 +
          ((((C8471 + C8470) * C13696 + (C8469 + C8468) * C29981) * C10233 +
            ((C6821 * C632 + C6717 * C744 + C6822 * C6060 + C30148 * C6214) *
                 C13696 +
             (C6821 * C638 + C6717 * C750 + C6822 * C6062 + C30148 * C6216) *
                 C29981) *
                C30146) *
               C30030 * C1520 -
           (((C8468 + C8469) * C29981 + (C8470 + C8471) * C13696) * C30146 +
            ((C6843 + C6842) * C29981 + (C6841 + C6840) * C13696) * C10233) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[25] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C10301 +
                       (C13696 * C156 + C29981 * C289) * C10233 +
                       C14231 * C10302 + C14232 * C30146) *
                          C6717 +
                      (C17542 + C17543 + C17526 + C17527) * C30148) *
                         C30030 * C1519 -
                     ((C16018 * C30146 + C16019 * C10302 + C16020 * C10233 +
                       C16021 * C10301) *
                          C30148 +
                      (C14234 * C30146 + C14233 * C10302 + C14232 * C10233 +
                       C14231 * C10301) *
                          C6717) *
                         C30030 * C1520) *
                        C1521 +
                    (((C15056 * C10301 + C15057 * C10233 + C15058 * C10302 +
                       C15059 * C30146) *
                          C6717 +
                      (C18123 * C10301 + C18124 * C10233 +
                       (C13696 * C6060 + C29981 * C6062) * C10302 +
                       (C13696 * C6144 + C29981 * C6294) * C30146) *
                          C30148) *
                         C30030 * C1520 -
                     ((C18124 * C30146 + C18123 * C10302 +
                       (C13696 * C1132 + C29981 * C1232) * C10233 +
                       (C13696 * C1070 + C29981 * C1076) * C10301) *
                          C30148 +
                      (C15057 * C30146 + C15056 * C10302 +
                       (C13696 * C157 + C29981 * C290) * C10233 +
                       (C13696 * C94 + C29981 * C99) * C10301) *
                          C6717) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[25] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                       C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                          C29981 * C6717 +
                      (C17617 + C17618) * C29981 * C30148) *
                         C30030 * C1519 -
                     ((C10478 * C6059 + C13381 + C13381 + C30146 * C6373 +
                       C10477 * C2593 + C13380 + C13380 + C10233 * C2820) *
                          C29981 * C30148 +
                      (C10478 * C631 + C11040 + C11040 + C30146 * C837 +
                       C10477 * C630 + C11041 + C11041 + C10233 * C836) *
                          C29981 * C6717) *
                         C30030 * C1520) *
                        C1521 +
                    (((C12105 + C12104) * C29981 * C6717 +
                      (C10477 * C2594 + C13382 + C13382 + C10233 * C2821 +
                       C10478 * C6060 + C13383 + C13383 + C30146 * C6374) *
                          C29981 * C30148) *
                         C30030 * C1520 -
                     ((C12744 + C12745) * C29981 * C30148 +
                      (C10505 + C10504) * C29981 * C6717) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C10301 +
            (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
                C10233 +
            (C16921 + C16922) * C10302 + (C17089 + C17090) * C30146) *
               C29981 * C30030 * C1519 -
           ((C17091 + C17092) * C30146 + (C16927 + C16928) * C10302 +
            (C17090 + C17089) * C10233 + (C16922 + C16921) * C10301) *
               C29981 * C30030 * C1520) *
              C1521 +
          (((C8471 + C8470) * C10301 + (C8680 + C8679) * C10233 +
            (C6821 * C632 + C6717 * C744 + C6822 * C6060 + C30148 * C6214) *
                C10302 +
            (C6821 * C694 + C6717 * C888 + C6822 * C6144 + C30148 * C6446) *
                C30146) *
               C29981 * C30030 * C1520 -
           ((C8679 + C8680) * C30146 + (C8470 + C8471) * C10302 +
            (C7007 + C7006) * C10233 + (C6841 + C6840) * C10301) *
               C29981 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[25] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C6821 +
                       (C13696 * C223 + C29981 * C455) * C6717 +
                       C17536 * C6822 + C17729 * C30148) *
                          C10233 +
                      (C17143 + C17144 + C17145 + C17146) * C30146) *
                         C30030 * C1519 -
                     ((C17147 + C17148 + C17149 + C17150) * C30146 +
                      (C17146 + C17145 + C17144 + C17143) * C10233) *
                         C30030 * C1520) *
                        C1521 +
                    (((C18323 + C18324 + C18325 + C18329) * C10233 +
                      (C15058 * C6821 + C15220 * C6717 +
                       (C13696 * C6060 + C29981 * C6062) * C6822 +
                       (C13696 * C6214 + C29981 * C6517) * C30148) *
                          C30146) *
                         C30030 * C1520 -
                     ((C18329 + C18325 + C18324 + C18323) * C30146 +
                      ((C13696 * C1182 + C29981 * C1370) * C30148 +
                       (C13696 * C1070 + C29981 * C1076) * C6822 +
                       (C13696 * C224 + C29981 * C456) * C6717 +
                       (C13696 * C94 + C29981 * C99) * C6821) *
                          C10233) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C6821 +
            (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
                C6717 +
            (C17411 + C17412) * C6822 + (C17791 + C17792) * C30148) *
               C29981 * C30030 * C1519 -
           ((C10302 * C6213 + C30146 * C6590 + C10301 * C2711 +
             C10233 * C2982) *
                C30148 +
            (C10302 * C6059 + C30146 * C6143 + C10301 * C2593 +
             C10233 * C2655) *
                C6822 +
            (C10302 * C743 + C30146 * C975 + C10301 * C742 + C10233 * C974) *
                C6717 +
            (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
                C6821) *
               C29981 * C30030 * C1520) *
              C1521 +
          (((C11879 + C11878) * C6821 + (C12319 + C12318) * C6717 +
            (C10301 * C2594 + C10233 * C2656 + C10302 * C6060 +
             C30146 * C6144) *
                C6822 +
            (C10301 * C2712 + C10233 * C2983 + C10302 * C6214 +
             C30146 * C6591) *
                C30148) *
               C29981 * C30030 * C1520 -
           ((C12952 + C12953) * C30148 + (C12534 + C12535) * C6822 +
            (C10675 + C10674) * C6717 + (C10321 + C10320) * C6821) *
               C29981 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[25] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                       C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                          C10233 +
                      (C17269 + C17270) * C30146) *
                         C29981 * C30030 * C1519 -
                     ((C17271 + C17272) * C30146 + (C17270 + C17269) * C10233) *
                         C29981 * C30030 * C1520) *
                        C1521 +
                    (((C8897 + C8896) * C10233 +
                      (C7167 * C632 + C7656 + C7656 + C6717 * C1020 +
                       C7168 * C6060 + C7657 + C7657 + C30148 * C6659) *
                          C30146) *
                         C29981 * C30030 * C1520 -
                     ((C8896 + C8897) * C30146 + (C7195 + C7194) * C10233) *
                         C29981 * C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C6717 +
             C17340 * C30148) *
                C10233 +
            (C16801 + C16802) * C30146) *
               C2057 -
           ((C19142 + C19143) * C30146 +
            (C17342 * C30148 + C17340 * C6717) * C10233) *
               C2058) *
              C1519 +
          (((C19143 + C19142) * C10233 +
            (C15841 * C6717 +
             (C13695 * C14500 + C14509 + C14509 + C29981 * C14502) * C30148) *
                C30146) *
               C2058 -
           ((C16803 + C16804) * C30146 + (C16802 + C16801) * C10233) * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eexy[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                 C13696 +
             (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
                 C29981) *
                C6717 +
            ((C17411 + C17412) * C13696 + (C17413 + C17414) * C29981) *
                C30148) *
               C2057 -
           (((C17415 + C17416) * C29981 + (C17417 + C17418) * C13696) * C30148 +
            ((C17414 + C17413) * C29981 + (C17412 + C17411) * C13696) * C6717) *
               C2058) *
              C1519 +
          ((((C19218 + C19219) * C13696 + (C19220 + C19221) * C29981) * C6717 +
            ((C10301 * C4237 + C10233 * C4301 + C10302 * C14500 +
              C30146 * C14547) *
                 C13696 +
             (C10301 * C4239 + C10233 * C4303 + C10302 * C14501 +
              C30146 * C14548) *
                 C29981) *
                C30148) *
               C2058 -
           (((C19221 + C19220) * C29981 + (C19219 + C19218) * C13696) * C30148 +
            ((C10302 * C637 + C30146 * C699 + C10301 * C636 + C10233 * C698) *
                 C29981 +
             (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
                 C13696) *
                C6717) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eexz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                 C13696 +
             (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
                 C29981) *
                C10233 +
            ((C16921 + C16922) * C13696 + (C16923 + C16924) * C29981) *
                C30146) *
               C2057 -
           (((C19296 + C19297) * C29981 + (C19298 + C19299) * C13696) * C30146 +
            ((C6822 * C1078 + C30148 * C1190 + C6821 * C1077 + C6717 * C1189) *
                 C29981 +
             (C6822 * C1072 + C30148 * C1184 + C6821 * C1071 + C6717 * C1183) *
                 C13696) *
                C10233) *
               C2058) *
              C1519 +
          ((((C19299 + C19298) * C13696 + (C19297 + C19296) * C29981) * C10233 +
            ((C6821 * C6059 + C6717 * C6213 + C6822 * C14500 +
              C30148 * C14587) *
                 C13696 +
             (C6821 * C6061 + C6717 * C6215 + C6822 * C14501 +
              C30148 * C14588) *
                 C29981) *
                C30146) *
               C2058 -
           (((C16925 + C16926) * C29981 + (C16927 + C16928) * C13696) * C30146 +
            ((C16924 + C16923) * C29981 + (C16922 + C16921) * C13696) *
                C10233) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eeyx[26] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C10301 +
                       (C13696 * C156 + C29981 * C289) * C10233 +
                       C14231 * C10302 + C14232 * C30146) *
                          C6717 +
                      (C17542 + C17543 + C17526 + C17527) * C30148) *
                         C2057 -
                     ((C17544 + C17545 + C17546 + C17547) * C30148 +
                      (C17527 + C17526 + C17543 + C17542) * C6717) *
                         C2058) *
                        C1519 +
                    (((C19366 + C19367 + C19368 + C19369) * C6717 +
                      (C17539 * C10301 + C17538 * C10233 +
                       (C13696 * C14500 + C29981 * C14501) * C10302 +
                       (C13696 * C14547 + C29981 * C14627) * C30146) *
                          C30148) *
                         C2058 -
                     ((C19369 + C19368 + C19367 + C19366) * C30148 +
                      (C14234 * C30146 + C14233 * C10302 + C14232 * C10233 +
                       C14231 * C10301) *
                          C6717) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[26] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                       C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                          C29981 * C6717 +
                      (C17617 + C17618) * C29981 * C30148) *
                         C2057 -
                     ((C17619 + C17620) * C29981 * C30148 +
                      (C17618 + C17617) * C29981 * C6717) *
                         C2058) *
                        C1519 +
                    (((C19446 + C19447) * C29981 * C6717 +
                      (C10477 * C4237 + C19440 + C19440 + C10233 * C4461 +
                       C10478 * C14500 + C19441 + C19441 + C30146 * C14666) *
                          C29981 * C30148) *
                         C2058 -
                     ((C19447 + C19446) * C29981 * C30148 +
                      (C10478 * C631 + C11040 + C11040 + C30146 * C837 +
                       C10477 * C630 + C11041 + C11041 + C10233 * C836) *
                          C29981 * C6717) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C10301 +
            (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
                C10233 +
            (C16921 + C16922) * C10302 + (C17089 + C17090) * C30146) *
               C29981 * C2057 -
           ((C19518 + C19519) * C30146 + (C19298 + C19299) * C10302 +
            (C6822 * C1134 + C30148 * C1328 + C6821 * C1133 + C6717 * C1327) *
                C10233 +
            (C6822 * C1072 + C30148 * C1184 + C6821 * C1071 + C6717 * C1183) *
                C10301) *
               C29981 * C2058) *
              C1519 +
          (((C19299 + C19298) * C10301 + (C19519 + C19518) * C10233 +
            (C6821 * C6059 + C6717 * C6213 + C6822 * C14500 + C30148 * C14587) *
                C10302 +
            (C6821 * C6143 + C6717 * C6445 + C6822 * C14547 + C30148 * C14711) *
                C30146) *
               C29981 * C2058 -
           ((C17091 + C17092) * C30146 + (C16927 + C16928) * C10302 +
            (C17090 + C17089) * C10233 + (C16922 + C16921) * C10301) *
               C29981 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezx[26] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C6821 +
                       (C13696 * C223 + C29981 * C455) * C6717 +
                       C17536 * C6822 + C17729 * C30148) *
                          C10233 +
                      (C17143 + C17144 + C17145 + C17146) * C30146) *
                         C2057 -
                     ((C19586 + C19587 + C19588 + C19589) * C30146 +
                      (C17731 * C30148 + C17541 * C6822 + C17729 * C6717 +
                       C17536 * C6821) *
                          C10233) *
                         C2058) *
                        C1519 +
                    (((C19589 + C19588 + C19587 + C19586) * C10233 +
                      (C16019 * C6821 + C16187 * C6717 +
                       (C13696 * C14500 + C29981 * C14501) * C6822 +
                       (C13696 * C14587 + C29981 * C14750) * C30148) *
                          C30146) *
                         C2058 -
                     ((C17147 + C17148 + C17149 + C17150) * C30146 +
                      (C17146 + C17145 + C17144 + C17143) * C10233) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eezy[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C6821 +
            (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
                C6717 +
            (C17411 + C17412) * C6822 + (C17791 + C17792) * C30148) *
               C29981 * C2057 -
           ((C17793 + C17794) * C30148 + (C17417 + C17418) * C6822 +
            (C17792 + C17791) * C6717 + (C17412 + C17411) * C6821) *
               C29981 * C2058) *
              C1519 +
          (((C19218 + C19219) * C6821 + (C19660 + C19661) * C6717 +
            (C10301 * C4237 + C10233 * C4301 + C10302 * C14500 +
             C30146 * C14547) *
                C6822 +
            (C10301 * C4355 + C10233 * C4625 + C10302 * C14587 +
             C30146 * C14789) *
                C30148) *
               C29981 * C2058 -
           ((C19661 + C19660) * C30148 + (C19219 + C19218) * C6822 +
            (C10302 * C743 + C30146 * C975 + C10301 * C742 + C10233 * C974) *
                C6717 +
            (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
                C6821) *
               C29981 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezz[26] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                       C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                          C10233 +
                      (C17269 + C17270) * C30146) *
                         C29981 * C2057 -
                     ((C19738 + C19739) * C30146 +
                      (C7168 * C1072 + C8250 + C8250 + C30148 * C1460 +
                       C7167 * C1071 + C8251 + C8251 + C6717 * C1459) *
                          C10233) *
                         C29981 * C2058) *
                        C1519 +
                    (((C19739 + C19738) * C10233 +
                      (C7167 * C6059 + C19732 + C19732 + C6717 * C6658 +
                       C7168 * C14500 + C19733 + C19733 + C30148 * C14828) *
                          C30146) *
                         C29981 * C2058 -
                     ((C17271 + C17272) * C30146 + (C17270 + C17269) * C10233) *
                         C29981 * C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eexx[27] +=
        (-std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C6717 +
            (C13695 * C1071 + C14506 + C14506 + C29981 * C1083) * C30148) *
               C10233 +
           (C16801 + C16802) * C30146) *
              C30030 * C624 -
          ((C16803 + C16804) * C30146 + (C16802 + C16801) * C10233) * C30030 *
              C625 +
          ((C16804 + C16803) * C10233 +
           (C14083 * C6717 +
            (C13695 * C15828 + C15836 + C15836 + C29981 * C15830) * C30148) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C6717 +
            (C13695 * C1071 + C14506 + C14506 + C29981 * C1083) * C30148) *
               C10233 +
           (C14081 * C6717 + C15842 * C30148) * C30146) *
              C30030 * C30016 * C84 -
          (((C13695 * C2594 + C15374 + C15374 + C29981 * C2600) * C30148 +
            C14890 * C6717) *
               C30146 +
           ((C13695 * C1070 + C15373 + C15373 + C29981 * C1082) * C30148 +
            (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C6717) *
               C10233) *
              C30030 * C30016 * C85 +
          (((C13695 * C95 + C13704 + C13704 + C29981 * C105) * C6717 +
            (C13695 * C1069 + C16349 + C16349 + C29981 * C1081) * C30148) *
               C10233 +
           ((C13695 * C628 + C13705 + C13705 + C29981 * C640) * C6717 +
            (C13695 * C2595 + C16350 + C16350 + C29981 * C2601) * C30148) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C6717 +
            C17340 * C30148) *
               C10233 +
           (C16801 + C16802) * C30146) *
              C1066 -
          ((C17341 * C30148 + C15842 * C6717) * C30146 +
           (C17342 * C30148 + C17340 * C6717) * C10233) *
              C1067 +
          ((C17342 * C6717 +
            (C13695 * C7707 + C17332 + C17332 + C29981 * C7711) * C30148) *
               C10233 +
           (C17341 * C6717 +
            (C13695 * C17322 + C17333 + C17333 + C29981 * C17324) * C30148) *
               C30146) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexy[27] +=
        (-std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C13696 +
            (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
                C29981) *
               C6717 +
           ((C10301 * C1071 + C10233 * C1133 + C10302 * C2593 +
             C30146 * C2655) *
                C13696 +
            (C10301 * C1077 + C10233 * C1139 + C10302 * C2596 +
             C30146 * C2658) *
                C29981) *
               C30148) *
              C30030 * C624 -
          (((C10302 * C6061 + C30146 * C6145 + C10301 * C2596 +
             C10233 * C2658) *
                C29981 +
            (C10302 * C6059 + C30146 * C6143 + C10301 * C2593 +
             C10233 * C2655) *
                C13696) *
               C30148 +
           ((C10302 * C637 + C30146 * C699 + C10301 * C636 + C10233 * C698) *
                C29981 +
            (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
                C13696) *
               C6717) *
              C30030 * C625 +
          (((C10301 * C631 + C10233 * C693 + C10302 * C3641 + C30146 * C3721) *
                C13696 +
            (C10301 * C637 + C10233 * C699 + C10302 * C3643 + C30146 * C3723) *
                C29981) *
               C6717 +
           ((C10301 * C6059 + C10233 * C6143 + C10302 * C15828 +
             C30146 * C15894) *
                C13696 +
            (C10301 * C6061 + C10233 * C6145 + C10302 * C15829 +
             C30146 * C15895) *
                C29981) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C13696 +
            (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
                C29981) *
               C6717 +
           ((C10301 * C1071 + C10233 * C1133 + C10302 * C2593 +
             C30146 * C2655) *
                C13696 +
            (C10301 * C1077 + C10233 * C1139 + C10302 * C2596 +
             C30146 * C2658) *
                C29981) *
               C30148) *
              C30030 * C30016 * C84 -
          (((C12532 + C12533) * C29981 + (C12534 + C12535) * C13696) * C30148 +
           ((C10323 + C10322) * C29981 + (C10321 + C10320) * C13696) * C6717) *
              C30030 * C30016 * C85 +
          (((C10327 + C10326) * C13696 + (C10325 + C10324) * C29981) * C6717 +
           ((C10301 * C1069 + C10233 * C1131 + C10302 * C2595 +
             C30146 * C2657) *
                C13696 +
            (C10301 * C1075 + C10233 * C1137 + C10302 * C2598 +
             C30146 * C2660) *
                C29981) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C13696 +
            (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
                C29981) *
               C6717 +
           ((C17411 + C17412) * C13696 + (C17413 + C17414) * C29981) * C30148) *
              C1066 -
          (((C17415 + C17416) * C29981 + (C17417 + C17418) * C13696) * C30148 +
           ((C17414 + C17413) * C29981 + (C17412 + C17411) * C13696) * C6717) *
              C1067 +
          (((C17418 + C17417) * C13696 + (C17416 + C17415) * C29981) * C6717 +
           ((C10301 * C7707 + C10233 * C7785 + C10302 * C17322 +
             C30146 * C17392) *
                C13696 +
            (C10301 * C7709 + C10233 * C7787 + C10302 * C17323 +
             C30146 * C17393) *
                C29981) *
               C30148) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[27] +=
        (-std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C13696 +
            (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
                C29981) *
               C10233 +
           ((C16921 + C16922) * C13696 + (C16923 + C16924) * C29981) * C30146) *
              C30030 * C624 -
          (((C16925 + C16926) * C29981 + (C16927 + C16928) * C13696) * C30146 +
           ((C16924 + C16923) * C29981 + (C16922 + C16921) * C13696) * C10233) *
              C30030 * C625 +
          (((C16928 + C16927) * C13696 + (C16926 + C16925) * C29981) * C10233 +
           ((C6821 * C3641 + C6717 * C3775 + C6822 * C15828 + C30148 * C15946) *
                C13696 +
            (C6821 * C3643 + C6717 * C3777 + C6822 * C15829 + C30148 * C15947) *
                C29981) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C13696 +
            (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
                C29981) *
               C10233 +
           ((C6821 * C630 + C6717 * C742 + C6822 * C2593 + C30148 * C2711) *
                C13696 +
            (C6821 * C636 + C6717 * C748 + C6822 * C2596 + C30148 * C2714) *
                C29981) *
               C30146) *
              C30030 * C30016 * C84 -
          (((C8468 + C8469) * C29981 + (C8470 + C8471) * C13696) * C30146 +
           ((C6843 + C6842) * C29981 + (C6841 + C6840) * C13696) * C10233) *
              C30030 * C30016 * C85 +
          (((C6847 + C6846) * C13696 + (C6845 + C6844) * C29981) * C10233 +
           ((C6821 * C628 + C6717 * C740 + C6822 * C2595 + C30148 * C2713) *
                C13696 +
            (C6821 * C634 + C6717 * C746 + C6822 * C2598 + C30148 * C2716) *
                C29981) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C13696 +
            (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
                C29981) *
               C10233 +
           ((C16921 + C16922) * C13696 + (C16923 + C16924) * C29981) * C30146) *
              C1066 -
          (((C6822 * C4239 + C30148 * C4357 + C6821 * C2596 + C6717 * C2714) *
                C29981 +
            (C6822 * C4237 + C30148 * C4355 + C6821 * C2593 + C6717 * C2711) *
                C13696) *
               C30146 +
           ((C6822 * C1078 + C30148 * C1190 + C6821 * C1077 + C6717 * C1189) *
                C29981 +
            (C6822 * C1072 + C30148 * C1184 + C6821 * C1071 + C6717 * C1183) *
                C13696) *
               C10233) *
              C1067 +
          (((C6821 * C1072 + C6717 * C1184 + C6822 * C7707 + C30148 * C7865) *
                C13696 +
            (C6821 * C1078 + C6717 * C1190 + C6822 * C7709 + C30148 * C7867) *
                C29981) *
               C10233 +
           ((C6821 * C4237 + C6717 * C4355 + C6822 * C17322 + C30148 * C17468) *
                C13696 +
            (C6821 * C4239 + C6717 * C4357 + C6822 * C17323 + C30148 * C17469) *
                C29981) *
               C30146) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[27] +=
        (-std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C10301 +
            (C13696 * C156 + C29981 * C289) * C10233 + C14231 * C10302 +
            C14232 * C30146) *
               C6717 +
           ((C13696 * C1071 + C29981 * C1077) * C10301 +
            (C13696 * C1133 + C29981 * C1233) * C10233 + C16021 * C10302 +
            C16020 * C30146) *
               C30148) *
              C30030 * C624 -
          ((C16018 * C30146 + C16019 * C10302 + C16020 * C10233 +
            C16021 * C10301) *
               C30148 +
           (C14234 * C30146 + C14233 * C10302 + C14232 * C10233 +
            C14231 * C10301) *
               C6717) *
              C30030 * C625 +
          ((C14233 * C10301 + C14234 * C10233 + C14236 * C10302 +
            C14235 * C30146) *
               C6717 +
           (C16019 * C10301 + C16018 * C10233 +
            (C13696 * C15828 + C29981 * C15829) * C10302 +
            (C13696 * C15894 + C29981 * C16008) * C30146) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C13696 * C93 + C29981 * C98) * C10301 +
                                (C13696 * C156 + C29981 * C289) * C10233 +
                                C14231 * C10302 + C14232 * C30146) *
                                   C6717 +
                               ((C13696 * C1071 + C29981 * C1077) * C10301 +
                                (C13696 * C1133 + C29981 * C1233) * C10233 +
                                C16021 * C10302 + C16020 * C30146) *
                                   C30148) *
                                  C30030 * C30016 * C84 -
                              (((C13696 * C2656 + C29981 * C2768) * C30146 +
                                (C13696 * C2594 + C29981 * C2597) * C10302 +
                                (C13696 * C1132 + C29981 * C1232) * C10233 +
                                (C13696 * C1070 + C29981 * C1076) * C10301) *
                                   C30148 +
                               (C15057 * C30146 + C15056 * C10302 +
                                (C13696 * C157 + C29981 * C290) * C10233 +
                                (C13696 * C94 + C29981 * C99) * C10301) *
                                   C6717) *
                                  C30030 * C30016 * C85 +
                              (((C13696 * C95 + C29981 * C100) * C10301 +
                                (C13696 * C158 + C29981 * C291) * C10233 +
                                (C13696 * C628 + C29981 * C634) * C10302 +
                                (C13696 * C690 + C29981 * C790) * C30146) *
                                   C6717 +
                               ((C13696 * C1069 + C29981 * C1075) * C10301 +
                                (C13696 * C1131 + C29981 * C1231) * C10233 +
                                (C13696 * C2595 + C29981 * C2598) * C10302 +
                                (C13696 * C2657 + C29981 * C2769) * C30146) *
                                   C30148) *
                                  C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C10301 +
            (C13696 * C156 + C29981 * C289) * C10233 + C14231 * C10302 +
            C14232 * C30146) *
               C6717 +
           (C17542 + C17543 + C17526 + C17527) * C30148) *
              C1066 -
          ((C17544 + C17545 + C17546 + C17547) * C30148 +
           (C17527 + C17526 + C17543 + C17542) * C6717) *
              C1067 +
          ((C17547 + C17546 + C17545 + C17544) * C6717 +
           ((C13696 * C7707 + C29981 * C7709) * C10301 +
            (C13696 * C7785 + C29981 * C7919) * C10233 +
            (C13696 * C17322 + C29981 * C17323) * C10302 +
            (C13696 * C17392 + C29981 * C17520) * C30146) *
               C30148) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyy[27] += (-std::pow(Pi, 2.5) *
                   (((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                      C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                         C29981 * C6717 +
                     (C10477 * C1071 + C11519 + C11519 + C10233 * C1277 +
                      C10478 * C2593 + C11518 + C11518 + C30146 * C2820) *
                         C29981 * C30148) *
                        C30030 * C624 -
                    ((C10478 * C6059 + C13381 + C13381 + C30146 * C6373 +
                      C10477 * C2593 + C13380 + C13380 + C10233 * C2820) *
                         C29981 * C30148 +
                     (C10478 * C631 + C11040 + C11040 + C30146 * C837 +
                      C10477 * C630 + C11041 + C11041 + C10233 * C836) *
                         C29981 * C6717) *
                        C30030 * C625 +
                    ((C10477 * C631 + C11042 + C11042 + C10233 * C837 +
                      C10478 * C3641 + C11043 + C11043 + C30146 * C3931) *
                         C29981 * C6717 +
                     (C10477 * C6059 + C17029 + C17029 + C10233 * C6373 +
                      C10478 * C15828 + C17030 + C17030 + C30146 * C16071) *
                         C29981 * C30148) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                      C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                         C29981 * C6717 +
                     (C10477 * C1071 + C11519 + C11519 + C10233 * C1277 +
                      C10478 * C2593 + C11518 + C11518 + C30146 * C2820) *
                         C29981 * C30148) *
                        C30030 * C30016 * C84 -
                    ((C12744 + C12745) * C29981 * C30148 +
                     (C10505 + C10504) * C29981 * C6717) *
                        C30030 * C30016 * C85 +
                    ((C10507 + C10506) * C29981 * C6717 +
                     (C10477 * C1069 + C12738 + C12738 + C10233 * C1275 +
                      C10478 * C2595 + C12739 + C12739 + C30146 * C2822) *
                         C29981 * C30148) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                      C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                         C29981 * C6717 +
                     (C17617 + C17618) * C29981 * C30148) *
                        C1066 -
                    ((C17619 + C17620) * C29981 * C30148 +
                     (C17618 + C17617) * C29981 * C6717) *
                        C1067 +
                    ((C17620 + C17619) * C29981 * C6717 +
                     (C10477 * C7707 + C17607 + C17607 + C10233 * C7995 +
                      C10478 * C17322 + C17608 + C17608 + C30146 * C17597) *
                         C29981 * C30148) *
                        C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[27] +=
        (-std::pow(Pi, 2.5) *
         (((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
               C10301 +
           (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
               C10233 +
           (C16921 + C16922) * C10302 + (C17089 + C17090) * C30146) *
              C29981 * C30030 * C624 -
          ((C17091 + C17092) * C30146 + (C16927 + C16928) * C10302 +
           (C17090 + C17089) * C10233 + (C16922 + C16921) * C10301) *
              C29981 * C30030 * C625 +
          ((C16928 + C16927) * C10301 + (C17092 + C17091) * C10233 +
           (C6821 * C3641 + C6717 * C3775 + C6822 * C15828 + C30148 * C15946) *
               C10302 +
           (C6821 * C3721 + C6717 * C3991 + C6822 * C15894 + C30148 * C16125) *
               C30146) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
               C10301 +
           (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
               C10233 +
           (C6821 * C630 + C6717 * C742 + C6822 * C2593 + C30148 * C2711) *
               C10302 +
           (C6821 * C692 + C6717 * C886 + C6822 * C2655 + C30148 * C2876) *
               C30146) *
              C29981 * C30030 * C30016 * C84 -
          ((C8679 + C8680) * C30146 + (C8470 + C8471) * C10302 +
           (C7007 + C7006) * C10233 + (C6841 + C6840) * C10301) *
              C29981 * C30030 * C30016 * C85 +
          ((C6847 + C6846) * C10301 + (C7009 + C7008) * C10233 +
           (C6821 * C628 + C6717 * C740 + C6822 * C2595 + C30148 * C2713) *
               C10302 +
           (C6821 * C690 + C6717 * C884 + C6822 * C2657 + C30148 * C2878) *
               C30146) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
               C10301 +
           (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
               C10233 +
           (C16921 + C16922) * C10302 + (C17089 + C17090) * C30146) *
              C29981 * C1066 -
          ((C6822 * C4301 + C30148 * C4521 + C6821 * C2655 + C6717 * C2876) *
               C30146 +
           (C6822 * C4237 + C30148 * C4355 + C6821 * C2593 + C6717 * C2711) *
               C10302 +
           (C6822 * C1134 + C30148 * C1328 + C6821 * C1133 + C6717 * C1327) *
               C10233 +
           (C6822 * C1072 + C30148 * C1184 + C6821 * C1071 + C6717 * C1183) *
               C10301) *
              C29981 * C1067 +
          ((C6821 * C1072 + C6717 * C1184 + C6822 * C7707 + C30148 * C7865) *
               C10301 +
           (C6821 * C1134 + C6717 * C1328 + C6822 * C7785 + C30148 * C8068) *
               C10233 +
           (C6821 * C4237 + C6717 * C4355 + C6822 * C17322 + C30148 * C17468) *
               C10302 +
           (C6821 * C4301 + C6717 * C4521 + C6822 * C17392 + C30148 * C17670) *
               C30146) *
              C29981 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[27] +=
        (-std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C6821 +
            (C13696 * C223 + C29981 * C455) * C6717 +
            (C13696 * C1071 + C29981 * C1077) * C6822 +
            (C13696 * C1183 + C29981 * C1371) * C30148) *
               C10233 +
           (C17143 + C17144 + C17145 + C17146) * C30146) *
              C30030 * C624 -
          ((C17147 + C17148 + C17149 + C17150) * C30146 +
           (C17146 + C17145 + C17144 + C17143) * C10233) *
              C30030 * C625 +
          ((C17150 + C17149 + C17148 + C17147) * C10233 +
           (C14236 * C6821 + C14374 * C6717 +
            (C13696 * C15828 + C29981 * C15829) * C6822 +
            (C13696 * C15946 + C29981 * C16179) * C30148) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C13696 * C93 + C29981 * C98) * C6821 +
                                (C13696 * C223 + C29981 * C455) * C6717 +
                                (C13696 * C1071 + C29981 * C1077) * C6822 +
                                (C13696 * C1183 + C29981 * C1371) * C30148) *
                                   C10233 +
                               (C14231 * C6821 + C14372 * C6717 +
                                C16021 * C6822 + C16188 * C30148) *
                                   C30146) *
                                  C30030 * C30016 * C84 -
                              (((C13696 * C2712 + C29981 * C2930) * C30148 +
                                (C13696 * C2594 + C29981 * C2597) * C6822 +
                                C15219 * C6717 + C15056 * C6821) *
                                   C30146 +
                               ((C13696 * C1182 + C29981 * C1370) * C30148 +
                                (C13696 * C1070 + C29981 * C1076) * C6822 +
                                (C13696 * C224 + C29981 * C456) * C6717 +
                                (C13696 * C94 + C29981 * C99) * C6821) *
                                   C10233) *
                                  C30030 * C30016 * C85 +
                              (((C13696 * C95 + C29981 * C100) * C6821 +
                                (C13696 * C225 + C29981 * C457) * C6717 +
                                (C13696 * C1069 + C29981 * C1075) * C6822 +
                                (C13696 * C1181 + C29981 * C1369) * C30148) *
                                   C10233 +
                               ((C13696 * C628 + C29981 * C634) * C6821 +
                                (C13696 * C740 + C29981 * C928) * C6717 +
                                (C13696 * C2595 + C29981 * C2598) * C6822 +
                                (C13696 * C2713 + C29981 * C2931) * C30148) *
                                   C30146) *
                                  C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C6821 +
            (C13696 * C223 + C29981 * C455) * C6717 + C17536 * C6822 +
            C17729 * C30148) *
               C10233 +
           (C17143 + C17144 + C17145 + C17146) * C30146) *
              C1066 -
          ((C17730 * C30148 + C17539 * C6822 + C16188 * C6717 +
            C16021 * C6821) *
               C30146 +
           (C17731 * C30148 + C17541 * C6822 + C17729 * C6717 +
            C17536 * C6821) *
               C10233) *
              C1067 +
          ((C17541 * C6821 + C17731 * C6717 +
            (C13696 * C7707 + C29981 * C7709) * C6822 +
            (C13696 * C7865 + C29981 * C8120) * C30148) *
               C10233 +
           (C17539 * C6821 + C17730 * C6717 +
            (C13696 * C17322 + C29981 * C17323) * C6822 +
            (C13696 * C17468 + C29981 * C17721) * C30148) *
               C30146) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezy[27] +=
        (-std::pow(Pi, 2.5) *
         (((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
               C6821 +
           (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
               C6717 +
           (C10301 * C1071 + C10233 * C1133 + C10302 * C2593 + C30146 * C2655) *
               C6822 +
           (C10301 * C1183 + C10233 * C1415 + C10302 * C2711 + C30146 * C2982) *
               C30148) *
              C29981 * C30030 * C624 -
          ((C10302 * C6213 + C30146 * C6590 + C10301 * C2711 + C10233 * C2982) *
               C30148 +
           (C10302 * C6059 + C30146 * C6143 + C10301 * C2593 + C10233 * C2655) *
               C6822 +
           (C10302 * C743 + C30146 * C975 + C10301 * C742 + C10233 * C974) *
               C6717 +
           (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
               C6821) *
              C29981 * C30030 * C625 +
          ((C10301 * C631 + C10233 * C693 + C10302 * C3641 + C30146 * C3721) *
               C6821 +
           (C10301 * C743 + C10233 * C975 + C10302 * C3775 + C30146 * C4116) *
               C6717 +
           (C10301 * C6059 + C10233 * C6143 + C10302 * C15828 +
            C30146 * C15894) *
               C6822 +
           (C10301 * C6213 + C10233 * C6590 + C10302 * C15946 +
            C30146 * C16240) *
               C30148) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
               C6821 +
           (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
               C6717 +
           (C10301 * C1071 + C10233 * C1133 + C10302 * C2593 + C30146 * C2655) *
               C6822 +
           (C10301 * C1183 + C10233 * C1415 + C10302 * C2711 + C30146 * C2982) *
               C30148) *
              C29981 * C30030 * C30016 * C84 -
          ((C12952 + C12953) * C30148 + (C12534 + C12535) * C6822 +
           (C10675 + C10674) * C6717 + (C10321 + C10320) * C6821) *
              C29981 * C30030 * C30016 * C85 +
          ((C10327 + C10326) * C6821 + (C10677 + C10676) * C6717 +
           (C10301 * C1069 + C10233 * C1131 + C10302 * C2595 + C30146 * C2657) *
               C6822 +
           (C10301 * C1181 + C10233 * C1413 + C10302 * C2713 + C30146 * C2984) *
               C30148) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
               C6821 +
           (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
               C6717 +
           (C17411 + C17412) * C6822 + (C17791 + C17792) * C30148) *
              C29981 * C1066 -
          ((C17793 + C17794) * C30148 + (C17417 + C17418) * C6822 +
           (C17792 + C17791) * C6717 + (C17412 + C17411) * C6821) *
              C29981 * C1067 +
          ((C17418 + C17417) * C6821 + (C17794 + C17793) * C6717 +
           (C10301 * C7707 + C10233 * C7785 + C10302 * C17322 +
            C30146 * C17392) *
               C6822 +
           (C10301 * C7865 + C10233 * C8184 + C10302 * C17468 +
            C30146 * C17781) *
               C30148) *
              C29981 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[27] += (-std::pow(Pi, 2.5) *
                   (((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                      C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                         C10233 +
                     (C17269 + C17270) * C30146) *
                        C29981 * C30030 * C624 -
                    ((C17271 + C17272) * C30146 + (C17270 + C17269) * C10233) *
                        C29981 * C30030 * C625 +
                    ((C17272 + C17271) * C10233 +
                     (C7167 * C3641 + C17259 + C17259 + C6717 * C4168 +
                      C7168 * C15828 + C17260 + C17260 + C30148 * C16291) *
                         C30146) *
                        C29981 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                      C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                         C10233 +
                     (C7167 * C630 + C7653 + C7653 + C6717 * C1018 +
                      C7168 * C2593 + C7652 + C7652 + C30148 * C3035) *
                         C30146) *
                        C29981 * C30030 * C30016 * C84 -
                    ((C8896 + C8897) * C30146 + (C7195 + C7194) * C10233) *
                        C29981 * C30030 * C30016 * C85 +
                    ((C7197 + C7196) * C10233 +
                     (C7167 * C628 + C8890 + C8890 + C6717 * C1016 +
                      C7168 * C2595 + C8891 + C8891 + C30148 * C3037) *
                         C30146) *
                        C29981 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                      C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                         C10233 +
                     (C17269 + C17270) * C30146) *
                        C29981 * C1066 -
                    ((C7168 * C4237 + C10179 + C10179 + C30148 * C4677 +
                      C7167 * C2593 + C10178 + C10178 + C6717 * C3035) *
                         C30146 +
                     (C7168 * C1072 + C8250 + C8250 + C30148 * C1460 +
                      C7167 * C1071 + C8251 + C8251 + C6717 * C1459) *
                         C10233) *
                        C29981 * C1067 +
                    ((C7167 * C1072 + C8252 + C8252 + C6717 * C1460 +
                      C7168 * C7707 + C8253 + C8253 + C30148 * C8245) *
                         C10233 +
                     (C7167 * C4237 + C17846 + C17846 + C6717 * C4677 +
                      C7168 * C17322 + C17847 + C17847 + C30148 * C17844) *
                         C30146) *
                        C29981 * C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexx[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C6717 +
             C17340 * C30148) *
                C10233 +
            (C16801 + C16802) * C30146) *
               C2057 -
           ((C17341 * C30148 + C15842 * C6717) * C30146 +
            (C17342 * C30148 + C17340 * C6717) * C10233) *
               C2058) *
              C30016 * C1521 +
          (((C18534 * C6717 +
             (C13695 * C1073 + C18530 + C18530 + C29981 * C1085) * C30148) *
                C10233 +
            (C17919 * C6717 +
             (C13695 * C4238 + C18531 + C18531 + C29981 * C4242) * C30148) *
                C30146) *
               C2058 -
           ((C17920 + C17914) * C30146 +
            (C18534 * C30148 +
             (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C6717) *
                C10233) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexy[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                 C13696 +
             (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
                 C29981) *
                C6717 +
            ((C17411 + C17412) * C13696 + (C17413 + C17414) * C29981) *
                C30148) *
               C2057 -
           (((C17415 + C17416) * C29981 + (C17417 + C17418) * C13696) * C30148 +
            ((C17414 + C17413) * C29981 + (C17412 + C17411) * C13696) * C6717) *
               C2058) *
              C30016 * C1521 +
          ((((C12535 + C12534) * C13696 + (C12533 + C12532) * C29981) * C6717 +
            ((C10301 * C1073 + C10233 * C1135 + C10302 * C4238 +
              C30146 * C4302) *
                 C13696 +
             (C10301 * C1079 + C10233 * C1141 + C10302 * C4240 +
              C30146 * C4304) *
                 C29981) *
                C30148) *
               C2058 -
           (((C12532 + C12533) * C29981 + (C12534 + C12535) * C13696) * C30148 +
            ((C10323 + C10322) * C29981 + (C10321 + C10320) * C13696) * C6717) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                 C13696 +
             (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
                 C29981) *
                C10233 +
            ((C16921 + C16922) * C13696 + (C16923 + C16924) * C29981) *
                C30146) *
               C2057 -
           (((C6822 * C4239 + C30148 * C4357 + C6821 * C2596 + C6717 * C2714) *
                 C29981 +
             (C6822 * C4237 + C30148 * C4355 + C6821 * C2593 + C6717 * C2711) *
                 C13696) *
                C30146 +
            ((C6822 * C1078 + C30148 * C1190 + C6821 * C1077 + C6717 * C1189) *
                 C29981 +
             (C6822 * C1072 + C30148 * C1184 + C6821 * C1071 + C6717 * C1183) *
                 C13696) *
                C10233) *
               C2058) *
              C30016 * C1521 +
          ((((C9123 + C9122) * C13696 + (C9121 + C9120) * C29981) * C10233 +
            ((C6821 * C2594 + C6717 * C2712 + C6822 * C4238 + C30148 * C4356) *
                 C13696 +
             (C6821 * C2597 + C6717 * C2715 + C6822 * C4240 + C30148 * C4358) *
                 C29981) *
                C30146) *
               C2058 -
           (((C8468 + C8469) * C29981 + (C8470 + C8471) * C13696) * C30146 +
            ((C6843 + C6842) * C29981 + (C6841 + C6840) * C13696) * C10233) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C10301 +
                       (C13696 * C156 + C29981 * C289) * C10233 +
                       C14231 * C10302 + C14232 * C30146) *
                          C6717 +
                      (C17542 + C17543 + C17526 + C17527) * C30148) *
                         C2057 -
                     ((C17544 + C17545 + C17546 + C17547) * C30148 +
                      (C17527 + C17526 + C17543 + C17542) * C6717) *
                         C2058) *
                        C30016 * C1521 +
                    (((C18741 + C18742 + C18737 + C18738) * C6717 +
                      ((C13696 * C1073 + C29981 * C1079) * C10301 +
                       (C13696 * C1135 + C29981 * C1235) * C10233 +
                       (C13696 * C4238 + C29981 * C4240) * C10302 +
                       (C13696 * C4302 + C29981 * C4410) * C30146) *
                          C30148) *
                         C2058 -
                     ((C18738 + C18737 + C18742 + C18741) * C30148 +
                      (C15057 * C30146 + C15056 * C10302 +
                       (C13696 * C157 + C29981 * C290) * C10233 +
                       (C13696 * C94 + C29981 * C99) * C10301) *
                          C6717) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                       C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                          C29981 * C6717 +
                      (C17617 + C17618) * C29981 * C30148) *
                         C2057 -
                     ((C17619 + C17620) * C29981 * C30148 +
                      (C17618 + C17617) * C29981 * C6717) *
                         C2058) *
                        C30016 * C1521 +
                    (((C12745 + C12744) * C29981 * C6717 +
                      (C10477 * C1073 + C11522 + C11522 + C10233 * C1279 +
                       C10478 * C4238 + C11523 + C11523 + C30146 * C4462) *
                          C29981 * C30148) *
                         C2058 -
                     ((C12744 + C12745) * C29981 * C30148 +
                      (C10505 + C10504) * C29981 * C6717) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C10301 +
            (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
                C10233 +
            (C16921 + C16922) * C10302 + (C17089 + C17090) * C30146) *
               C29981 * C2057 -
           ((C6822 * C4301 + C30148 * C4521 + C6821 * C2655 + C6717 * C2876) *
                C30146 +
            (C6822 * C4237 + C30148 * C4355 + C6821 * C2593 + C6717 * C2711) *
                C10302 +
            (C6822 * C1134 + C30148 * C1328 + C6821 * C1133 + C6717 * C1327) *
                C10233 +
            (C6822 * C1072 + C30148 * C1184 + C6821 * C1071 + C6717 * C1183) *
                C10301) *
               C29981 * C2058) *
              C30016 * C1521 +
          (((C9123 + C9122) * C10301 + (C9341 + C9340) * C10233 +
            (C6821 * C2594 + C6717 * C2712 + C6822 * C4238 + C30148 * C4356) *
                C10302 +
            (C6821 * C2656 + C6717 * C2877 + C6822 * C4302 + C30148 * C4522) *
                C30146) *
               C29981 * C2058 -
           ((C8679 + C8680) * C30146 + (C8470 + C8471) * C10302 +
            (C7007 + C7006) * C10233 + (C6841 + C6840) * C10301) *
               C29981 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C6821 +
                       (C13696 * C223 + C29981 * C455) * C6717 +
                       C17536 * C6822 + C17729 * C30148) *
                          C10233 +
                      (C17143 + C17144 + C17145 + C17146) * C30146) *
                         C2057 -
                     ((C17730 * C30148 + C17539 * C6822 + C16188 * C6717 +
                       C16021 * C6821) *
                          C30146 +
                      (C17731 * C30148 + C17541 * C6822 + C17729 * C6717 +
                       C17536 * C6821) *
                          C10233) *
                         C2058) *
                        C30016 * C1521 +
                    (((C18739 * C6821 + C18943 * C6717 +
                       (C13696 * C1073 + C29981 * C1079) * C6822 +
                       (C13696 * C1185 + C29981 * C1373) * C30148) *
                          C10233 +
                      (C18123 * C6821 + C18328 * C6717 +
                       (C13696 * C4238 + C29981 * C4240) * C6822 +
                       (C13696 * C4356 + C29981 * C4574) * C30148) *
                          C30146) *
                         C2058 -
                     ((C18329 + C18325 + C18324 + C18323) * C30146 +
                      (C18943 * C30148 + C18739 * C6822 +
                       (C13696 * C224 + C29981 * C456) * C6717 +
                       (C13696 * C94 + C29981 * C99) * C6821) *
                          C10233) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C6821 +
            (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
                C6717 +
            (C17411 + C17412) * C6822 + (C17791 + C17792) * C30148) *
               C29981 * C2057 -
           ((C17793 + C17794) * C30148 + (C17417 + C17418) * C6822 +
            (C17792 + C17791) * C6717 + (C17412 + C17411) * C6821) *
               C29981 * C2058) *
              C30016 * C1521 +
          (((C12535 + C12534) * C6821 + (C12953 + C12952) * C6717 +
            (C10301 * C1073 + C10233 * C1135 + C10302 * C4238 +
             C30146 * C4302) *
                C6822 +
            (C10301 * C1185 + C10233 * C1417 + C10302 * C4356 +
             C30146 * C4626) *
                C30148) *
               C29981 * C2058 -
           ((C12952 + C12953) * C30148 + (C12534 + C12535) * C6822 +
            (C10675 + C10674) * C6717 + (C10321 + C10320) * C6821) *
               C29981 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                       C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                          C10233 +
                      (C17269 + C17270) * C30146) *
                         C29981 * C2057 -
                     ((C7168 * C4237 + C10179 + C10179 + C30148 * C4677 +
                       C7167 * C2593 + C10178 + C10178 + C6717 * C3035) *
                          C30146 +
                      (C7168 * C1072 + C8250 + C8250 + C30148 * C1460 +
                       C7167 * C1071 + C8251 + C8251 + C6717 * C1459) *
                          C10233) *
                         C29981 * C2058) *
                        C30016 * C1521 +
                    (((C9561 + C9560) * C10233 +
                      (C7167 * C2594 + C10180 + C10180 + C6717 * C3036 +
                       C7168 * C4238 + C10181 + C10181 + C30148 * C4678) *
                          C30146) *
                         C29981 * C2058 -
                     ((C8896 + C8897) * C30146 + (C7195 + C7194) * C10233) *
                         C29981 * C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C6717 +
            (C13695 * C1071 + C14506 + C14506 + C29981 * C1083) * C30148) *
               C10233 +
           (C14081 * C6717 + C15842 * C30148) * C30146) *
              C30030 * C30016 * C84 -
          (((C13695 * C2594 + C15374 + C15374 + C29981 * C2600) * C30148 +
            C14890 * C6717) *
               C30146 +
           ((C13695 * C1070 + C15373 + C15373 + C29981 * C1082) * C30148 +
            (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C6717) *
               C10233) *
              C30030 * C30016 * C85 +
          (((C13695 * C95 + C13704 + C13704 + C29981 * C105) * C6717 +
            (C13695 * C1069 + C16349 + C16349 + C29981 * C1081) * C30148) *
               C10233 +
           ((C13695 * C628 + C13705 + C13705 + C29981 * C640) * C6717 +
            (C13695 * C2595 + C16350 + C16350 + C29981 * C2601) * C30148) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C6717 +
            (C13695 * C1071 + C14506 + C14506 + C29981 * C1083) * C30148) *
               C10233 +
           (C16801 + C16802) * C30146) *
              C30030 * C624 -
          ((C16803 + C16804) * C30146 + (C16802 + C16801) * C10233) * C30030 *
              C625 +
          ((C16804 + C16803) * C10233 +
           (C14083 * C6717 +
            (C13695 * C15828 + C15836 + C15836 + C29981 * C15830) * C30148) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eexy[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C13696 +
            (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
                C29981) *
               C6717 +
           ((C10301 * C1071 + C10233 * C1133 + C10302 * C2593 +
             C30146 * C2655) *
                C13696 +
            (C10301 * C1077 + C10233 * C1139 + C10302 * C2596 +
             C30146 * C2658) *
                C29981) *
               C30148) *
              C30030 * C30016 * C84 -
          (((C12532 + C12533) * C29981 + (C12534 + C12535) * C13696) * C30148 +
           ((C10323 + C10322) * C29981 + (C10321 + C10320) * C13696) * C6717) *
              C30030 * C30016 * C85 +
          (((C10327 + C10326) * C13696 + (C10325 + C10324) * C29981) * C6717 +
           ((C10301 * C1069 + C10233 * C1131 + C10302 * C2595 +
             C30146 * C2657) *
                C13696 +
            (C10301 * C1075 + C10233 * C1137 + C10302 * C2598 +
             C30146 * C2660) *
                C29981) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
                C13696 +
            (C10301 * C98 + C10233 * C161 + C10302 * C636 + C30146 * C698) *
                C29981) *
               C6717 +
           ((C10301 * C1071 + C10233 * C1133 + C10302 * C2593 +
             C30146 * C2655) *
                C13696 +
            (C10301 * C1077 + C10233 * C1139 + C10302 * C2596 +
             C30146 * C2658) *
                C29981) *
               C30148) *
              C30030 * C624 -
          (((C10302 * C6061 + C30146 * C6145 + C10301 * C2596 +
             C10233 * C2658) *
                C29981 +
            (C10302 * C6059 + C30146 * C6143 + C10301 * C2593 +
             C10233 * C2655) *
                C13696) *
               C30148 +
           ((C10302 * C637 + C30146 * C699 + C10301 * C636 + C10233 * C698) *
                C29981 +
            (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
                C13696) *
               C6717) *
              C30030 * C625 +
          (((C10301 * C631 + C10233 * C693 + C10302 * C3641 + C30146 * C3721) *
                C13696 +
            (C10301 * C637 + C10233 * C699 + C10302 * C3643 + C30146 * C3723) *
                C29981) *
               C6717 +
           ((C10301 * C6059 + C10233 * C6143 + C10302 * C15828 +
             C30146 * C15894) *
                C13696 +
            (C10301 * C6061 + C10233 * C6145 + C10302 * C15829 +
             C30146 * C15895) *
                C29981) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C13696 +
            (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
                C29981) *
               C10233 +
           ((C6821 * C630 + C6717 * C742 + C6822 * C2593 + C30148 * C2711) *
                C13696 +
            (C6821 * C636 + C6717 * C748 + C6822 * C2596 + C30148 * C2714) *
                C29981) *
               C30146) *
              C30030 * C30016 * C84 -
          (((C8468 + C8469) * C29981 + (C8470 + C8471) * C13696) * C30146 +
           ((C6843 + C6842) * C29981 + (C6841 + C6840) * C13696) * C10233) *
              C30030 * C30016 * C85 +
          (((C6847 + C6846) * C13696 + (C6845 + C6844) * C29981) * C10233 +
           ((C6821 * C628 + C6717 * C740 + C6822 * C2595 + C30148 * C2713) *
                C13696 +
            (C6821 * C634 + C6717 * C746 + C6822 * C2598 + C30148 * C2716) *
                C29981) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
                C13696 +
            (C6821 * C98 + C6717 * C228 + C6822 * C1077 + C30148 * C1189) *
                C29981) *
               C10233 +
           ((C16921 + C16922) * C13696 + (C16923 + C16924) * C29981) * C30146) *
              C30030 * C624 -
          (((C16925 + C16926) * C29981 + (C16927 + C16928) * C13696) * C30146 +
           ((C16924 + C16923) * C29981 + (C16922 + C16921) * C13696) * C10233) *
              C30030 * C625 +
          (((C16928 + C16927) * C13696 + (C16926 + C16925) * C29981) * C10233 +
           ((C6821 * C3641 + C6717 * C3775 + C6822 * C15828 + C30148 * C15946) *
                C13696 +
            (C6821 * C3643 + C6717 * C3777 + C6822 * C15829 + C30148 * C15947) *
                C29981) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[29] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C13696 * C93 + C29981 * C98) * C10301 +
                      (C13696 * C156 + C29981 * C289) * C10233 +
                      C14231 * C10302 + C14232 * C30146) *
                         C6717 +
                     ((C13696 * C1071 + C29981 * C1077) * C10301 +
                      (C13696 * C1133 + C29981 * C1233) * C10233 +
                      C16021 * C10302 + C16020 * C30146) *
                         C30148) *
                        C30030 * C30016 * C84 -
                    (((C13696 * C2656 + C29981 * C2768) * C30146 +
                      (C13696 * C2594 + C29981 * C2597) * C10302 +
                      (C13696 * C1132 + C29981 * C1232) * C10233 +
                      (C13696 * C1070 + C29981 * C1076) * C10301) *
                         C30148 +
                     (C15057 * C30146 + C15056 * C10302 +
                      (C13696 * C157 + C29981 * C290) * C10233 +
                      (C13696 * C94 + C29981 * C99) * C10301) *
                         C6717) *
                        C30030 * C30016 * C85 +
                    (((C13696 * C95 + C29981 * C100) * C10301 +
                      (C13696 * C158 + C29981 * C291) * C10233 +
                      (C13696 * C628 + C29981 * C634) * C10302 +
                      (C13696 * C690 + C29981 * C790) * C30146) *
                         C6717 +
                     ((C13696 * C1069 + C29981 * C1075) * C10301 +
                      (C13696 * C1131 + C29981 * C1231) * C10233 +
                      (C13696 * C2595 + C29981 * C2598) * C10302 +
                      (C13696 * C2657 + C29981 * C2769) * C30146) *
                         C30148) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C13696 * C93 + C29981 * C98) * C10301 +
                      (C13696 * C156 + C29981 * C289) * C10233 +
                      C14231 * C10302 + C14232 * C30146) *
                         C6717 +
                     ((C13696 * C1071 + C29981 * C1077) * C10301 +
                      (C13696 * C1133 + C29981 * C1233) * C10233 +
                      C16021 * C10302 + C16020 * C30146) *
                         C30148) *
                        C30030 * C624 -
                    ((C16018 * C30146 + C16019 * C10302 + C16020 * C10233 +
                      C16021 * C10301) *
                         C30148 +
                     (C14234 * C30146 + C14233 * C10302 + C14232 * C10233 +
                      C14231 * C10301) *
                         C6717) *
                        C30030 * C625 +
                    ((C14233 * C10301 + C14234 * C10233 + C14236 * C10302 +
                      C14235 * C30146) *
                         C6717 +
                     (C16019 * C10301 + C16018 * C10233 +
                      (C13696 * C15828 + C29981 * C15829) * C10302 +
                      (C13696 * C15894 + C29981 * C16008) * C30146) *
                         C30148) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[29] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                      C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                         C29981 * C6717 +
                     (C10477 * C1071 + C11519 + C11519 + C10233 * C1277 +
                      C10478 * C2593 + C11518 + C11518 + C30146 * C2820) *
                         C29981 * C30148) *
                        C30030 * C30016 * C84 -
                    ((C12744 + C12745) * C29981 * C30148 +
                     (C10505 + C10504) * C29981 * C6717) *
                        C30030 * C30016 * C85 +
                    ((C10507 + C10506) * C29981 * C6717 +
                     (C10477 * C1069 + C12738 + C12738 + C10233 * C1275 +
                      C10478 * C2595 + C12739 + C12739 + C30146 * C2822) *
                         C29981 * C30148) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C10477 * C93 + C10480 + C10480 + C10233 * C333 +
                      C10478 * C630 + C10481 + C10481 + C30146 * C836) *
                         C29981 * C6717 +
                     (C10477 * C1071 + C11519 + C11519 + C10233 * C1277 +
                      C10478 * C2593 + C11518 + C11518 + C30146 * C2820) *
                         C29981 * C30148) *
                        C30030 * C624 -
                    ((C10478 * C6059 + C13381 + C13381 + C30146 * C6373 +
                      C10477 * C2593 + C13380 + C13380 + C10233 * C2820) *
                         C29981 * C30148 +
                     (C10478 * C631 + C11040 + C11040 + C30146 * C837 +
                      C10477 * C630 + C11041 + C11041 + C10233 * C836) *
                         C29981 * C6717) *
                        C30030 * C625 +
                    ((C10477 * C631 + C11042 + C11042 + C10233 * C837 +
                      C10478 * C3641 + C11043 + C11043 + C30146 * C3931) *
                         C29981 * C6717 +
                     (C10477 * C6059 + C17029 + C17029 + C10233 * C6373 +
                      C10478 * C15828 + C17030 + C17030 + C30146 * C16071) *
                         C29981 * C30148) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
               C10301 +
           (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
               C10233 +
           (C6821 * C630 + C6717 * C742 + C6822 * C2593 + C30148 * C2711) *
               C10302 +
           (C6821 * C692 + C6717 * C886 + C6822 * C2655 + C30148 * C2876) *
               C30146) *
              C29981 * C30030 * C30016 * C84 -
          ((C8679 + C8680) * C30146 + (C8470 + C8471) * C10302 +
           (C7007 + C7006) * C10233 + (C6841 + C6840) * C10301) *
              C29981 * C30030 * C30016 * C85 +
          ((C6847 + C6846) * C10301 + (C7009 + C7008) * C10233 +
           (C6821 * C628 + C6717 * C740 + C6822 * C2595 + C30148 * C2713) *
               C10302 +
           (C6821 * C690 + C6717 * C884 + C6822 * C2657 + C30148 * C2878) *
               C30146) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6821 * C93 + C6717 * C223 + C6822 * C1071 + C30148 * C1183) *
               C10301 +
           (C6821 * C156 + C6717 * C396 + C6822 * C1133 + C30148 * C1327) *
               C10233 +
           (C16921 + C16922) * C10302 + (C17089 + C17090) * C30146) *
              C29981 * C30030 * C624 -
          ((C17091 + C17092) * C30146 + (C16927 + C16928) * C10302 +
           (C17090 + C17089) * C10233 + (C16922 + C16921) * C10301) *
              C29981 * C30030 * C625 +
          ((C16928 + C16927) * C10301 + (C17092 + C17091) * C10233 +
           (C6821 * C3641 + C6717 * C3775 + C6822 * C15828 + C30148 * C15946) *
               C10302 +
           (C6821 * C3721 + C6717 * C3991 + C6822 * C15894 + C30148 * C16125) *
               C30146) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[29] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C13696 * C93 + C29981 * C98) * C6821 +
                      (C13696 * C223 + C29981 * C455) * C6717 +
                      (C13696 * C1071 + C29981 * C1077) * C6822 +
                      (C13696 * C1183 + C29981 * C1371) * C30148) *
                         C10233 +
                     (C14231 * C6821 + C14372 * C6717 + C16021 * C6822 +
                      C16188 * C30148) *
                         C30146) *
                        C30030 * C30016 * C84 -
                    (((C13696 * C2712 + C29981 * C2930) * C30148 +
                      (C13696 * C2594 + C29981 * C2597) * C6822 +
                      C15219 * C6717 + C15056 * C6821) *
                         C30146 +
                     ((C13696 * C1182 + C29981 * C1370) * C30148 +
                      (C13696 * C1070 + C29981 * C1076) * C6822 +
                      (C13696 * C224 + C29981 * C456) * C6717 +
                      (C13696 * C94 + C29981 * C99) * C6821) *
                         C10233) *
                        C30030 * C30016 * C85 +
                    (((C13696 * C95 + C29981 * C100) * C6821 +
                      (C13696 * C225 + C29981 * C457) * C6717 +
                      (C13696 * C1069 + C29981 * C1075) * C6822 +
                      (C13696 * C1181 + C29981 * C1369) * C30148) *
                         C10233 +
                     ((C13696 * C628 + C29981 * C634) * C6821 +
                      (C13696 * C740 + C29981 * C928) * C6717 +
                      (C13696 * C2595 + C29981 * C2598) * C6822 +
                      (C13696 * C2713 + C29981 * C2931) * C30148) *
                         C30146) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C13696 * C93 + C29981 * C98) * C6821 +
                      (C13696 * C223 + C29981 * C455) * C6717 +
                      (C13696 * C1071 + C29981 * C1077) * C6822 +
                      (C13696 * C1183 + C29981 * C1371) * C30148) *
                         C10233 +
                     (C17143 + C17144 + C17145 + C17146) * C30146) *
                        C30030 * C624 -
                    ((C17147 + C17148 + C17149 + C17150) * C30146 +
                     (C17146 + C17145 + C17144 + C17143) * C10233) *
                        C30030 * C625 +
                    ((C17150 + C17149 + C17148 + C17147) * C10233 +
                     (C14236 * C6821 + C14374 * C6717 +
                      (C13696 * C15828 + C29981 * C15829) * C6822 +
                      (C13696 * C15946 + C29981 * C16179) * C30148) *
                         C30146) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eezy[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
               C6821 +
           (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
               C6717 +
           (C10301 * C1071 + C10233 * C1133 + C10302 * C2593 + C30146 * C2655) *
               C6822 +
           (C10301 * C1183 + C10233 * C1415 + C10302 * C2711 + C30146 * C2982) *
               C30148) *
              C29981 * C30030 * C30016 * C84 -
          ((C12952 + C12953) * C30148 + (C12534 + C12535) * C6822 +
           (C10675 + C10674) * C6717 + (C10321 + C10320) * C6821) *
              C29981 * C30030 * C30016 * C85 +
          ((C10327 + C10326) * C6821 + (C10677 + C10676) * C6717 +
           (C10301 * C1069 + C10233 * C1131 + C10302 * C2595 + C30146 * C2657) *
               C6822 +
           (C10301 * C1181 + C10233 * C1413 + C10302 * C2713 + C30146 * C2984) *
               C30148) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10301 * C93 + C10233 * C156 + C10302 * C630 + C30146 * C692) *
               C6821 +
           (C10301 * C223 + C10233 * C498 + C10302 * C742 + C30146 * C974) *
               C6717 +
           (C10301 * C1071 + C10233 * C1133 + C10302 * C2593 + C30146 * C2655) *
               C6822 +
           (C10301 * C1183 + C10233 * C1415 + C10302 * C2711 + C30146 * C2982) *
               C30148) *
              C29981 * C30030 * C624 -
          ((C10302 * C6213 + C30146 * C6590 + C10301 * C2711 + C10233 * C2982) *
               C30148 +
           (C10302 * C6059 + C30146 * C6143 + C10301 * C2593 + C10233 * C2655) *
               C6822 +
           (C10302 * C743 + C30146 * C975 + C10301 * C742 + C10233 * C974) *
               C6717 +
           (C10302 * C631 + C30146 * C693 + C10301 * C630 + C10233 * C692) *
               C6821) *
              C29981 * C30030 * C625 +
          ((C10301 * C631 + C10233 * C693 + C10302 * C3641 + C30146 * C3721) *
               C6821 +
           (C10301 * C743 + C10233 * C975 + C10302 * C3775 + C30146 * C4116) *
               C6717 +
           (C10301 * C6059 + C10233 * C6143 + C10302 * C15828 +
            C30146 * C15894) *
               C6822 +
           (C10301 * C6213 + C10233 * C6590 + C10302 * C15946 +
            C30146 * C16240) *
               C30148) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[29] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                      C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                         C10233 +
                     (C7167 * C630 + C7653 + C7653 + C6717 * C1018 +
                      C7168 * C2593 + C7652 + C7652 + C30148 * C3035) *
                         C30146) *
                        C29981 * C30030 * C30016 * C84 -
                    ((C8896 + C8897) * C30146 + (C7195 + C7194) * C10233) *
                        C29981 * C30030 * C30016 * C85 +
                    ((C7197 + C7196) * C10233 +
                     (C7167 * C628 + C8890 + C8890 + C6717 * C1016 +
                      C7168 * C2595 + C8891 + C8891 + C30148 * C3037) *
                         C30146) *
                        C29981 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C7167 * C93 + C7170 + C7170 + C6717 * C558 +
                      C7168 * C1071 + C7171 + C7171 + C30148 * C1459) *
                         C10233 +
                     (C17269 + C17270) * C30146) *
                        C29981 * C30030 * C624 -
                    ((C17271 + C17272) * C30146 + (C17270 + C17269) * C10233) *
                        C29981 * C30030 * C625 +
                    ((C17272 + C17271) * C10233 +
                     (C7167 * C3641 + C17259 + C17259 + C6717 * C4168 +
                      C7168 * C15828 + C17260 + C17260 + C30148 * C16291) *
                         C30146) *
                        C29981 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexx[30] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                       C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                          C19789 +
                      (C20796 + C20797) * C30148) *
                         C30075 * C30030 * C1519 -
                     ((C13098 + C13099) * C30148 + (C10803 + C10802) * C19789) *
                         C30075 * C30030 * C1520) *
                        C1521 +
                    (((C11800 + C11801) * C19789 +
                      (C10235 * C2594 + C12456 + C12456 + C10231 * C2600 +
                       C10237 * C2595 + C12457 + C12457 + C30139 * C2601) *
                          C30148) *
                         C30075 * C30030 * C1520 -
                     ((C10237 * C1069 + C12455 + C12455 + C30139 * C1081 +
                       C10235 * C1070 + C12454 + C12454 + C10231 * C1082) *
                          C30148 +
                      (C10237 * C95 + C10246 + C10246 + C30139 * C105 +
                       C10235 * C94 + C10247 + C10247 + C10231 * C104) *
                          C19789) *
                         C30075 * C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C30075 * C156) * C10236 +
             (C155 * C98 + C30075 * C161) * C10231 + C179 * C10238 +
             C180 * C30139) *
                C19789 +
            (C20850 + C20851 + C20852 + C20853) * C30148) *
               C30030 * C1519 -
           ((C8392 * C30139 + C8393 * C10238 + C9701 * C10231 +
             C9700 * C10236) *
                C30148 +
            (C1592 * C30139 + C1593 * C10238 +
             (C155 * C636 + C30075 * C698) * C10231 +
             (C155 * C630 + C30075 * C692) * C10236) *
                C19789) *
               C30030 * C1520) *
              C1521 +
          (((C1593 * C10236 + C1592 * C10231 + C1591 * C10238 +
             C1590 * C30139) *
                C19789 +
            (C8393 * C10236 + C8392 * C10231 +
             (C155 * C2595 + C30075 * C2657) * C10238 +
             (C155 * C2598 + C30075 * C2660) * C30139) *
                C30148) *
               C30030 * C1520 -
           ((C2126 * C30139 + C2127 * C10238 + C2128 * C10231 +
             C2129 * C10236) *
                C30148 +
            (C182 * C30139 + C181 * C10238 + C180 * C10231 + C179 * C10236) *
                C19789) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C10236 +
            (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
                C10231 +
            (C19912 + C19913) * C10238 + (C19914 + C19915) * C30139) *
               C30075 * C30030 * C1519 -
           ((C21462 + C21463) * C30139 + (C21464 + C21465) * C10238 +
            (C19894 * C2596 + C30148 * C2714 + C19893 * C636 + C19789 * C748) *
                C10231 +
            (C19894 * C2593 + C30148 * C2711 + C19893 * C630 + C19789 * C742) *
                C10236) *
               C30075 * C30030 * C1520) *
              C1521 +
          (((C21465 + C21464) * C10236 + (C21463 + C21462) * C10231 +
            (C19893 * C628 + C19789 * C740 + C19894 * C2595 + C30148 * C2713) *
                C10238 +
            (C19893 * C634 + C19789 * C746 + C19894 * C2598 + C30148 * C2716) *
                C30139) *
               C30075 * C30030 * C1520 -
           ((C19916 + C19917) * C30139 + (C19918 + C19919) * C10238 +
            (C19915 + C19914) * C10231 + (C19913 + C19912) * C10236) *
               C30075 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
                 C155 +
             (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
                 C30075) *
                C19789 +
            ((C20974 + C20975) * C155 + (C20976 + C20977) * C30075) * C30148) *
               C30030 * C1519 -
           (((C13310 + C13311) * C30075 + (C13312 + C13313) * C155) * C30148 +
            ((C10983 + C10982) * C30075 + (C10981 + C10980) * C155) * C19789) *
               C30030 * C1520) *
              C1521 +
          ((((C12024 + C12025) * C155 + (C12026 + C12027) * C30075) * C19789 +
            ((C10236 * C2594 + C10231 * C2597 + C10238 * C2595 +
              C30139 * C2598) *
                 C155 +
             (C10236 * C2656 + C10231 * C2768 + C10238 * C2657 +
              C30139 * C2769) *
                 C30075) *
                C30148) *
               C30030 * C1520 -
           (((C10238 * C1131 + C30139 * C1231 + C10236 * C1132 +
              C10231 * C1232) *
                 C30075 +
             (C10238 * C1069 + C30139 * C1075 + C10236 * C1070 +
              C10231 * C1076) *
                 C155) *
                C30148 +
            ((C10238 * C158 + C30139 * C291 + C10236 * C157 + C10231 * C290) *
                 C30075 +
             (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
                 C155) *
                C19789) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C30075 * C333) * C10231 +
             C356 * C30139) *
                C19789 +
            (C21032 + C21033) * C30148) *
               C30030 * C1519 -
           ((C8608 * C30139 + C9909 * C10231) * C30148 +
            (C1770 * C30139 +
             (C332 * C630 + C843 + C843 + C30075 * C836) * C10231) *
                C19789) *
               C30030 * C1520) *
              C1521 +
          (((C1770 * C10231 + C1769 * C30139) * C19789 +
            (C8608 * C10231 +
             (C332 * C2595 + C2826 + C2826 + C30075 * C2822) * C30139) *
                C30148) *
               C30030 * C1520 -
           ((C2305 * C30139 + C2306 * C10231) * C30148 +
            (C357 * C30139 + C356 * C10231) * C19789) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                 C155 +
             (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
                 C30075) *
                C10231 +
            ((C19912 + C19913) * C155 + (C20078 + C20079) * C30075) * C30139) *
               C30030 * C1519 -
           (((C21668 + C21669) * C30075 + (C21464 + C21465) * C155) * C30139 +
            ((C19894 * C2655 + C30148 * C2876 + C19893 * C692 + C19789 * C886) *
                 C30075 +
             (C19894 * C2593 + C30148 * C2711 + C19893 * C630 + C19789 * C742) *
                 C155) *
                C10231) *
               C30030 * C1520) *
              C1521 +
          ((((C21465 + C21464) * C155 + (C21669 + C21668) * C30075) * C10231 +
            ((C19893 * C628 + C19789 * C740 + C19894 * C2595 + C30148 * C2713) *
                 C155 +
             (C19893 * C690 + C19789 * C884 + C19894 * C2657 + C30148 * C2878) *
                 C30075) *
                C30139) *
               C30030 * C1520 -
           (((C20080 + C20081) * C30075 + (C19918 + C19919) * C155) * C30139 +
            ((C20079 + C20078) * C30075 + (C19913 + C19912) * C155) * C10231) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
                C19893 +
            (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
                C19789 +
            (C20974 + C20975) * C19894 + (C21144 + C21145) * C30148) *
               C30075 * C30030 * C1519 -
           ((C13520 + C13521) * C30148 + (C13312 + C13313) * C19894 +
            (C11155 + C11154) * C19789 + (C10981 + C10980) * C19893) *
               C30075 * C30030 * C1520) *
              C1521 +
          (((C12024 + C12025) * C19893 + (C12246 + C12247) * C19789 +
            (C10236 * C2594 + C10231 * C2597 + C10238 * C2595 +
             C30139 * C2598) *
                C19894 +
            (C10236 * C2712 + C10231 * C2930 + C10238 * C2713 +
             C30139 * C2931) *
                C30148) *
               C30075 * C30030 * C1520 -
           ((C10238 * C1181 + C30139 * C1369 + C10236 * C1182 +
             C10231 * C1370) *
                C30148 +
            (C10238 * C1069 + C30139 * C1075 + C10236 * C1070 +
             C10231 * C1076) *
                C19894 +
            (C10238 * C225 + C30139 * C457 + C10236 * C224 + C10231 * C456) *
                C19789 +
            (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
                C19893) *
               C30075 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[30] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C30075 * C156) * C19893 +
                       (C155 * C223 + C30075 * C498) * C19789 + C7804 * C19894 +
                       C8193 * C30148) *
                          C10231 +
                      (C20182 + C20183 + C20184 + C20185) * C30139) *
                         C30030 * C1519 -
                     ((C21802 + C21803 + C21804 + C21805) * C30139 +
                      (C10111 * C30148 + C9700 * C19894 +
                       (C155 * C742 + C30075 * C974) * C19789 +
                       (C155 * C630 + C30075 * C692) * C19893) *
                          C10231) *
                         C30030 * C1520) *
                        C1521 +
                    (((C21805 + C21804 + C21803 + C21802) * C10231 +
                      (C1591 * C19893 + C1940 * C19789 +
                       (C155 * C2595 + C30075 * C2657) * C19894 +
                       (C155 * C2713 + C30075 * C2984) * C30148) *
                          C30139) *
                         C30030 * C1520 -
                     ((C20186 + C20187 + C20188 + C20189) * C30139 +
                      (C20185 + C20184 + C20183 + C20182) * C10231) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[30] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                       C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                          C30075 * C10231 +
                      (C20266 + C20267) * C30075 * C30139) *
                         C30030 * C1519 -
                     ((C21882 + C21883) * C30075 * C30139 +
                      (C20240 * C2593 + C20722 + C20722 + C30148 * C3035 +
                       C20239 * C630 + C20723 + C20723 + C19789 * C1018) *
                          C30075 * C10231) *
                         C30030 * C1520) *
                        C1521 +
                    (((C21883 + C21882) * C30075 * C10231 +
                      (C20239 * C628 + C21876 + C21876 + C19789 * C1016 +
                       C20240 * C2595 + C21877 + C21877 + C30148 * C3037) *
                          C30075 * C30139) *
                         C30030 * C1520 -
                     ((C20268 + C20269) * C30075 * C30139 +
                      (C20267 + C20266) * C30075 * C10231) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[31] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                       C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                          C19789 +
                      (C20796 + C20797) * C30148) *
                         C30075 * C2057 -
                     ((C20798 + C20799) * C30148 + (C20797 + C20796) * C19789) *
                         C30075 * C2058) *
                        C1519 +
                    (((C13099 + C13098) * C19789 +
                      (C10235 * C4237 + C11314 + C11314 + C10231 * C4241 +
                       C10237 * C4238 + C11315 + C11315 + C30139 * C4242) *
                          C30148) *
                         C30075 * C2058 -
                     ((C13098 + C13099) * C30148 + (C10803 + C10802) * C19789) *
                         C30075 * C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eexy[31] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C30075 * C156) * C10236 +
                       (C155 * C98 + C30075 * C161) * C10231 + C179 * C10238 +
                       C180 * C30139) *
                          C19789 +
                      (C20850 + C20851 + C20852 + C20853) * C30148) *
                         C2057 -
                     ((C20854 + C20855 + C20856 + C20857) * C30148 +
                      (C20853 + C20852 + C20851 + C20850) * C19789) *
                         C2058) *
                        C1519 +
                    (((C22680 + C22681 + C22682 + C22683) * C19789 +
                      ((C155 * C4237 + C30075 * C4301) * C10236 +
                       (C155 * C4239 + C30075 * C4303) * C10231 +
                       (C155 * C4238 + C30075 * C4302) * C10238 +
                       (C155 * C4240 + C30075 * C4304) * C30139) *
                          C30148) *
                         C2058 -
                     ((C22683 + C22682 + C22681 + C22680) * C30148 +
                      (C1592 * C30139 + C1593 * C10238 +
                       (C155 * C636 + C30075 * C698) * C10231 +
                       (C155 * C630 + C30075 * C692) * C10236) *
                          C19789) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eexz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C10236 +
            (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
                C10231 +
            (C19912 + C19913) * C10238 + (C19914 + C19915) * C30139) *
               C30075 * C2057 -
           ((C22106 + C22107) * C30139 + (C22108 + C22109) * C10238 +
            (C19894 * C1078 + C30148 * C1190 + C19893 * C1077 +
             C19789 * C1189) *
                C10231 +
            (C19894 * C1072 + C30148 * C1184 + C19893 * C1071 +
             C19789 * C1183) *
                C10236) *
               C30075 * C2058) *
              C1519 +
          (((C19893 * C2593 + C19789 * C2711 + C19894 * C4237 +
             C30148 * C4355) *
                C10236 +
            (C19893 * C2596 + C19789 * C2714 + C19894 * C4239 +
             C30148 * C4357) *
                C10231 +
            (C19893 * C2594 + C19789 * C2712 + C19894 * C4238 +
             C30148 * C4356) *
                C10238 +
            (C19893 * C2597 + C19789 * C2715 + C19894 * C4240 +
             C30148 * C4358) *
                C30139) *
               C30075 * C2058 -
           ((C21462 + C21463) * C30139 + (C21464 + C21465) * C10238 +
            (C19894 * C2596 + C30148 * C2714 + C19893 * C636 + C19789 * C748) *
                C10231 +
            (C19894 * C2593 + C30148 * C2711 + C19893 * C630 + C19789 * C742) *
                C10236) *
               C30075 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eeyx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
                 C155 +
             (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
                 C30075) *
                C19789 +
            ((C20974 + C20975) * C155 + (C20976 + C20977) * C30075) * C30148) *
               C2057 -
           (((C20978 + C20979) * C30075 + (C20980 + C20981) * C155) * C30148 +
            ((C20977 + C20976) * C30075 + (C20975 + C20974) * C155) * C19789) *
               C2058) *
              C1519 +
          ((((C13313 + C13312) * C155 + (C13311 + C13310) * C30075) * C19789 +
            ((C10236 * C4237 + C10231 * C4239 + C10238 * C4238 +
              C30139 * C4240) *
                 C155 +
             (C10236 * C4301 + C10231 * C4409 + C10238 * C4302 +
              C30139 * C4410) *
                 C30075) *
                C30148) *
               C2058 -
           (((C13310 + C13311) * C30075 + (C13312 + C13313) * C155) * C30148 +
            ((C10983 + C10982) * C30075 + (C10981 + C10980) * C155) * C19789) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eeyy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C30075 * C333) * C10231 +
             C356 * C30139) *
                C19789 +
            (C21032 + C21033) * C30148) *
               C2057 -
           ((C21034 + C21035) * C30148 + (C21033 + C21032) * C19789) * C2058) *
              C1519 +
          (((C22882 + C22883) * C19789 +
            ((C332 * C4237 + C9905 + C9905 + C30075 * C4461) * C10231 +
             (C332 * C4238 + C9906 + C9906 + C30075 * C4462) * C30139) *
                C30148) *
               C2058 -
           ((C22883 + C22882) * C30148 +
            (C1770 * C30139 +
             (C332 * C630 + C843 + C843 + C30075 * C836) * C10231) *
                C19789) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eeyz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                 C155 +
             (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
                 C30075) *
                C10231 +
            ((C19912 + C19913) * C155 + (C20078 + C20079) * C30075) * C30139) *
               C2057 -
           (((C22326 + C22327) * C30075 + (C22108 + C22109) * C155) * C30139 +
            ((C19894 * C1134 + C30148 * C1328 + C19893 * C1133 +
              C19789 * C1327) *
                 C30075 +
             (C19894 * C1072 + C30148 * C1184 + C19893 * C1071 +
              C19789 * C1183) *
                 C155) *
                C10231) *
               C2058) *
              C1519 +
          ((((C19893 * C2593 + C19789 * C2711 + C19894 * C4237 +
              C30148 * C4355) *
                 C155 +
             (C19893 * C2655 + C19789 * C2876 + C19894 * C4301 +
              C30148 * C4521) *
                 C30075) *
                C10231 +
            ((C19893 * C2594 + C19789 * C2712 + C19894 * C4238 +
              C30148 * C4356) *
                 C155 +
             (C19893 * C2656 + C19789 * C2877 + C19894 * C4302 +
              C30148 * C4522) *
                 C30075) *
                C30139) *
               C2058 -
           (((C21668 + C21669) * C30075 + (C21464 + C21465) * C155) * C30139 +
            ((C19894 * C2655 + C30148 * C2876 + C19893 * C692 + C19789 * C886) *
                 C30075 +
             (C19894 * C2593 + C30148 * C2711 + C19893 * C630 + C19789 * C742) *
                 C155) *
                C10231) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
                C19893 +
            (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
                C19789 +
            (C20974 + C20975) * C19894 + (C21144 + C21145) * C30148) *
               C30075 * C2057 -
           ((C21146 + C21147) * C30148 + (C20980 + C20981) * C19894 +
            (C21145 + C21144) * C19789 + (C20975 + C20974) * C19893) *
               C30075 * C2058) *
              C1519 +
          (((C13313 + C13312) * C19893 + (C13521 + C13520) * C19789 +
            (C10236 * C4237 + C10231 * C4239 + C10238 * C4238 +
             C30139 * C4240) *
                C19894 +
            (C10236 * C4355 + C10231 * C4573 + C10238 * C4356 +
             C30139 * C4574) *
                C30148) *
               C30075 * C2058 -
           ((C13520 + C13521) * C30148 + (C13312 + C13313) * C19894 +
            (C11155 + C11154) * C19789 + (C10981 + C10980) * C19893) *
               C30075 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezy[31] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C30075 * C156) * C19893 +
                       (C155 * C223 + C30075 * C498) * C19789 + C7804 * C19894 +
                       C8193 * C30148) *
                          C10231 +
                      (C20182 + C20183 + C20184 + C20185) * C30139) *
                         C2057 -
                     ((C22466 + C22467 + C22468 + C22469) * C30139 +
                      (C8195 * C30148 + C7809 * C19894 + C8193 * C19789 +
                       C7804 * C19893) *
                          C10231) *
                         C2058) *
                        C1519 +
                    (((C9700 * C19893 + C10111 * C19789 +
                       (C155 * C4237 + C30075 * C4301) * C19894 +
                       (C155 * C4355 + C30075 * C4625) * C30148) *
                          C10231 +
                      (C8393 * C19893 + C8818 * C19789 +
                       (C155 * C4238 + C30075 * C4302) * C19894 +
                       (C155 * C4356 + C30075 * C4626) * C30148) *
                          C30139) *
                         C2058 -
                     ((C21802 + C21803 + C21804 + C21805) * C30139 +
                      (C10111 * C30148 + C9700 * C19894 +
                       (C155 * C742 + C30075 * C974) * C19789 +
                       (C155 * C630 + C30075 * C692) * C19893) *
                          C10231) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eezz[31] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                       C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                          C30075 * C10231 +
                      (C20266 + C20267) * C30075 * C30139) *
                         C2057 -
                     ((C22546 + C22547) * C30075 * C30139 +
                      (C20240 * C1072 + C21250 + C21250 + C30148 * C1460 +
                       C20239 * C1071 + C21251 + C21251 + C19789 * C1459) *
                          C30075 * C10231) *
                         C2058) *
                        C1519 +
                    (((C20239 * C2593 + C23148 + C23148 + C19789 * C3035 +
                       C20240 * C4237 + C23149 + C23149 + C30148 * C4677) *
                          C30075 * C10231 +
                      (C20239 * C2594 + C23150 + C23150 + C19789 * C3036 +
                       C20240 * C4238 + C23151 + C23151 + C30148 * C4678) *
                          C30075 * C30139) *
                         C2058 -
                     ((C21882 + C21883) * C30075 * C30139 +
                      (C20240 * C2593 + C20722 + C20722 + C30148 * C3035 +
                       C20239 * C630 + C20723 + C20723 + C19789 * C1018) *
                          C30075 * C10231) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eexx[32] += (-std::pow(Pi, 2.5) *
                   (((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                      C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                         C19789 +
                     (C10235 * C1071 + C11311 + C11311 + C10231 * C1083 +
                      C10237 * C1070 + C11310 + C11310 + C30139 * C1082) *
                         C30148) *
                        C30075 * C30030 * C624 -
                    ((C13098 + C13099) * C30148 + (C10803 + C10802) * C19789) *
                        C30075 * C30030 * C625 +
                    ((C10805 + C10804) * C19789 +
                     (C10235 * C6059 + C13092 + C13092 + C10231 * C6063 +
                      C10237 * C6060 + C13093 + C13093 + C30139 * C6064) *
                         C30148) *
                        C30075 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                      C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                         C19789 +
                     (C10235 * C1071 + C11311 + C11311 + C10231 * C1083 +
                      C10237 * C1070 + C11310 + C11310 + C30139 * C1082) *
                         C30148) *
                        C30075 * C30030 * C30016 * C84 -
                    ((C10237 * C1069 + C12455 + C12455 + C30139 * C1081 +
                      C10235 * C1070 + C12454 + C12454 + C10231 * C1082) *
                         C30148 +
                     (C10237 * C95 + C10246 + C10246 + C30139 * C105 +
                      C10235 * C94 + C10247 + C10247 + C10231 * C104) *
                         C19789) *
                        C30075 * C30030 * C30016 * C85 +
                    ((C10235 * C95 + C10248 + C10248 + C10231 * C105 +
                      C10237 * C96 + C10249 + C10249 + C30139 * C106) *
                         C19789 +
                     (C10235 * C1069 + C19792 + C19792 + C10231 * C1081 +
                      C10237 * C2059 + C19793 + C19793 + C30139 * C2061) *
                         C30148) *
                        C30075 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                      C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                         C19789 +
                     (C20796 + C20797) * C30148) *
                        C30075 * C1066 -
                    ((C20798 + C20799) * C30148 + (C20797 + C20796) * C19789) *
                        C30075 * C1067 +
                    ((C20799 + C20798) * C19789 +
                     (C10235 * C7707 + C20786 + C20786 + C10231 * C7711 +
                      C10237 * C7708 + C20787 + C20787 + C30139 * C7712) *
                         C30148) *
                        C30075 * C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexy[32] +=
        (-std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C10236 +
            (C155 * C98 + C30075 * C161) * C10231 + C179 * C10238 +
            C180 * C30139) *
               C19789 +
           (C7804 * C10236 + C7805 * C10231 + C2129 * C10238 + C2128 * C30139) *
               C30148) *
              C30030 * C624 -
          ((C8392 * C30139 + C8393 * C10238 + C9701 * C10231 + C9700 * C10236) *
               C30148 +
           (C1592 * C30139 + C1593 * C10238 +
            (C155 * C636 + C30075 * C698) * C10231 +
            (C155 * C630 + C30075 * C692) * C10236) *
               C19789) *
              C30030 * C625 +
          (((C155 * C631 + C30075 * C693) * C10236 +
            (C155 * C637 + C30075 * C699) * C10231 +
            (C155 * C632 + C30075 * C694) * C10238 +
            (C155 * C638 + C30075 * C700) * C30139) *
               C19789 +
           ((C155 * C6059 + C30075 * C6143) * C10236 +
            (C155 * C6061 + C30075 * C6145) * C10231 +
            (C155 * C6060 + C30075 * C6144) * C10238 +
            (C155 * C6062 + C30075 * C6146) * C30139) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C10236 +
            (C155 * C98 + C30075 * C161) * C10231 + C179 * C10238 +
            C180 * C30139) *
               C19789 +
           (C7804 * C10236 + C7805 * C10231 + C2129 * C10238 + C2128 * C30139) *
               C30148) *
              C30030 * C30016 * C84 -
          ((C2126 * C30139 + C2127 * C10238 + C2128 * C10231 + C2129 * C10236) *
               C30148 +
           (C182 * C30139 + C181 * C10238 + C180 * C10231 + C179 * C10236) *
               C19789) *
              C30030 * C30016 * C85 +
          ((C181 * C10236 + C182 * C10231 + C184 * C10238 + C183 * C30139) *
               C19789 +
           (C2127 * C10236 + C2126 * C10231 +
            (C155 * C2059 + C30075 * C2115) * C10238 +
            (C155 * C2060 + C30075 * C2116) * C30139) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C10236 +
            (C155 * C98 + C30075 * C161) * C10231 + C179 * C10238 +
            C180 * C30139) *
               C19789 +
           (C20850 + C20851 + C20852 + C20853) * C30148) *
              C1066 -
          ((C20854 + C20855 + C20856 + C20857) * C30148 +
           (C20853 + C20852 + C20851 + C20850) * C19789) *
              C1067 +
          ((C20857 + C20856 + C20855 + C20854) * C19789 +
           ((C155 * C7707 + C30075 * C7785) * C10236 +
            (C155 * C7709 + C30075 * C7787) * C10231 +
            (C155 * C7708 + C30075 * C7786) * C10238 +
            (C155 * C7710 + C30075 * C7788) * C30139) *
               C30148) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[32] +=
        (-std::pow(Pi, 2.5) *
         (((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
               C10236 +
           (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
               C10231 +
           (C19912 + C19913) * C10238 + (C19914 + C19915) * C30139) *
              C30075 * C30030 * C624 -
          ((C19894 * C2597 + C30148 * C2715 + C19893 * C635 + C19789 * C747) *
               C30139 +
           (C19894 * C2594 + C30148 * C2712 + C19893 * C629 + C19789 * C741) *
               C10238 +
           (C19894 * C2596 + C30148 * C2714 + C19893 * C636 + C19789 * C748) *
               C10231 +
           (C19894 * C2593 + C30148 * C2711 + C19893 * C630 + C19789 * C742) *
               C10236) *
              C30075 * C30030 * C625 +
          ((C19893 * C631 + C19789 * C743 + C19894 * C6059 + C30148 * C6213) *
               C10236 +
           (C19893 * C637 + C19789 * C749 + C19894 * C6061 + C30148 * C6215) *
               C10231 +
           (C19893 * C632 + C19789 * C744 + C19894 * C6060 + C30148 * C6214) *
               C10238 +
           (C19893 * C638 + C19789 * C750 + C19894 * C6062 + C30148 * C6216) *
               C30139) *
              C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
               C10236 +
           (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
               C10231 +
           (C19912 + C19913) * C10238 + (C19914 + C19915) * C30139) *
              C30075 * C30030 * C30016 * C84 -
          ((C19916 + C19917) * C30139 + (C19918 + C19919) * C10238 +
           (C19915 + C19914) * C10231 + (C19913 + C19912) * C10236) *
              C30075 * C30030 * C30016 * C85 +
          ((C19919 + C19918) * C10236 + (C19917 + C19916) * C10231 +
           (C19893 * C96 + C19789 * C226 + C19894 * C2059 + C30148 * C2179) *
               C10238 +
           (C19893 * C101 + C19789 * C231 + C19894 * C2060 + C30148 * C2180) *
               C30139) *
              C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
               C10236 +
           (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
               C10231 +
           (C19912 + C19913) * C10238 + (C19914 + C19915) * C30139) *
              C30075 * C1066 -
          ((C19894 * C1079 + C30148 * C1191 + C19893 * C1076 + C19789 * C1188) *
               C30139 +
           (C19894 * C1073 + C30148 * C1185 + C19893 * C1070 + C19789 * C1182) *
               C10238 +
           (C19894 * C1078 + C30148 * C1190 + C19893 * C1077 + C19789 * C1189) *
               C10231 +
           (C19894 * C1072 + C30148 * C1184 + C19893 * C1071 + C19789 * C1183) *
               C10236) *
              C30075 * C1067 +
          ((C19893 * C1072 + C19789 * C1184 + C19894 * C7707 + C30148 * C7865) *
               C10236 +
           (C19893 * C1078 + C19789 * C1190 + C19894 * C7709 + C30148 * C7867) *
               C10231 +
           (C19893 * C1073 + C19789 * C1185 + C19894 * C7708 + C30148 * C7866) *
               C10238 +
           (C19893 * C1079 + C19789 * C1191 + C19894 * C7710 + C30148 * C7868) *
               C30139) *
              C30075 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[32] +=
        (-std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) * C155 +
            (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
                C30075) *
               C19789 +
           ((C10236 * C1071 + C10231 * C1077 + C10238 * C1070 +
             C30139 * C1076) *
                C155 +
            (C10236 * C1133 + C10231 * C1233 + C10238 * C1132 +
             C30139 * C1232) *
                C30075) *
               C30148) *
              C30030 * C624 -
          (((C13310 + C13311) * C30075 + (C13312 + C13313) * C155) * C30148 +
           ((C10983 + C10982) * C30075 + (C10981 + C10980) * C155) * C19789) *
              C30030 * C625 +
          (((C10987 + C10986) * C155 + (C10985 + C10984) * C30075) * C19789 +
           ((C10236 * C6059 + C10231 * C6061 + C10238 * C6060 +
             C30139 * C6062) *
                C155 +
            (C10236 * C6143 + C10231 * C6293 + C10238 * C6144 +
             C30139 * C6294) *
                C30075) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) * C155 +
            (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
                C30075) *
               C19789 +
           ((C10236 * C1071 + C10231 * C1077 + C10238 * C1070 +
             C30139 * C1076) *
                C155 +
            (C10236 * C1133 + C10231 * C1233 + C10238 * C1132 +
             C30139 * C1232) *
                C30075) *
               C30148) *
              C30030 * C30016 * C84 -
          (((C10238 * C1131 + C30139 * C1231 + C10236 * C1132 +
             C10231 * C1232) *
                C30075 +
            (C10238 * C1069 + C30139 * C1075 + C10236 * C1070 +
             C10231 * C1076) *
                C155) *
               C30148 +
           ((C10238 * C158 + C30139 * C291 + C10236 * C157 + C10231 * C290) *
                C30075 +
            (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
                C155) *
               C19789) *
              C30030 * C30016 * C85 +
          (((C10236 * C95 + C10231 * C100 + C10238 * C96 + C30139 * C101) *
                C155 +
            (C10236 * C158 + C10231 * C291 + C10238 * C159 + C30139 * C292) *
                C30075) *
               C19789 +
           ((C10236 * C1069 + C10231 * C1075 + C10238 * C2059 +
             C30139 * C2060) *
                C155 +
            (C10236 * C1131 + C10231 * C1231 + C10238 * C2115 +
             C30139 * C2243) *
                C30075) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) * C155 +
            (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
                C30075) *
               C19789 +
           ((C20974 + C20975) * C155 + (C20976 + C20977) * C30075) * C30148) *
              C1066 -
          (((C20978 + C20979) * C30075 + (C20980 + C20981) * C155) * C30148 +
           ((C20977 + C20976) * C30075 + (C20975 + C20974) * C155) * C19789) *
              C1067 +
          (((C20981 + C20980) * C155 + (C20979 + C20978) * C30075) * C19789 +
           ((C10236 * C7707 + C10231 * C7709 + C10238 * C7708 +
             C30139 * C7710) *
                C155 +
            (C10236 * C7785 + C10231 * C7919 + C10238 * C7786 +
             C30139 * C7920) *
                C30075) *
               C30148) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyy[32] +=
        (-std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C10231 +
            C356 * C30139) *
               C19789 +
           (C8013 * C10231 + C2306 * C30139) * C30148) *
              C30030 * C624 -
          ((C8608 * C30139 + C9909 * C10231) * C30148 +
           (C1770 * C30139 +
            (C332 * C630 + C843 + C843 + C30075 * C836) * C10231) *
               C19789) *
              C30030 * C625 +
          (((C332 * C631 + C844 + C844 + C30075 * C837) * C10231 +
            (C332 * C632 + C845 + C845 + C30075 * C838) * C30139) *
               C19789 +
           ((C332 * C6059 + C7448 + C7448 + C30075 * C6373) * C10231 +
            (C332 * C6060 + C7449 + C7449 + C30075 * C6374) * C30139) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C10231 +
            C356 * C30139) *
               C19789 +
           (C8013 * C10231 + C2306 * C30139) * C30148) *
              C30030 * C30016 * C84 -
          ((C2305 * C30139 + C2306 * C10231) * C30148 +
           (C357 * C30139 + C356 * C10231) * C19789) *
              C30030 * C30016 * C85 +
          ((C357 * C10231 + C358 * C30139) * C19789 +
           (C2305 * C10231 +
            (C332 * C2059 + C2300 + C2300 + C30075 * C2294) * C30139) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C10231 +
            C356 * C30139) *
               C19789 +
           (C21032 + C21033) * C30148) *
              C1066 -
          ((C21034 + C21035) * C30148 + (C21033 + C21032) * C19789) * C1067 +
          ((C21035 + C21034) * C19789 +
           ((C332 * C7707 + C8005 + C8005 + C30075 * C7995) * C10231 +
            (C332 * C7708 + C8006 + C8006 + C30075 * C7996) * C30139) *
               C30148) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyz[32] +=
        (-std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C155 +
            (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
                C30075) *
               C10231 +
           ((C19912 + C19913) * C155 + (C20078 + C20079) * C30075) * C30139) *
              C30030 * C624 -
          (((C19894 * C2656 + C30148 * C2877 + C19893 * C691 + C19789 * C885) *
                C30075 +
            (C19894 * C2594 + C30148 * C2712 + C19893 * C629 + C19789 * C741) *
                C155) *
               C30139 +
           ((C19894 * C2655 + C30148 * C2876 + C19893 * C692 + C19789 * C886) *
                C30075 +
            (C19894 * C2593 + C30148 * C2711 + C19893 * C630 + C19789 * C742) *
                C155) *
               C10231) *
              C30030 * C625 +
          (((C19893 * C631 + C19789 * C743 + C19894 * C6059 + C30148 * C6213) *
                C155 +
            (C19893 * C693 + C19789 * C887 + C19894 * C6143 + C30148 * C6445) *
                C30075) *
               C10231 +
           ((C19893 * C632 + C19789 * C744 + C19894 * C6060 + C30148 * C6214) *
                C155 +
            (C19893 * C694 + C19789 * C888 + C19894 * C6144 + C30148 * C6446) *
                C30075) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C155 +
            (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
                C30075) *
               C10231 +
           ((C19912 + C19913) * C155 + (C20078 + C20079) * C30075) * C30139) *
              C30030 * C30016 * C84 -
          (((C20080 + C20081) * C30075 + (C19918 + C19919) * C155) * C30139 +
           ((C20079 + C20078) * C30075 + (C19913 + C19912) * C155) * C10231) *
              C30030 * C30016 * C85 +
          (((C19919 + C19918) * C155 + (C20081 + C20080) * C30075) * C10231 +
           ((C19893 * C96 + C19789 * C226 + C19894 * C2059 + C30148 * C2179) *
                C155 +
            (C19893 * C159 + C19789 * C399 + C19894 * C2115 + C30148 * C2356) *
                C30075) *
               C30139) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C155 +
            (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
                C30075) *
               C10231 +
           ((C19912 + C19913) * C155 + (C20078 + C20079) * C30075) * C30139) *
              C1066 -
          (((C19894 * C1135 + C30148 * C1329 + C19893 * C1132 +
             C19789 * C1326) *
                C30075 +
            (C19894 * C1073 + C30148 * C1185 + C19893 * C1070 +
             C19789 * C1182) *
                C155) *
               C30139 +
           ((C19894 * C1134 + C30148 * C1328 + C19893 * C1133 +
             C19789 * C1327) *
                C30075 +
            (C19894 * C1072 + C30148 * C1184 + C19893 * C1071 +
             C19789 * C1183) *
                C155) *
               C10231) *
              C1067 +
          (((C19893 * C1072 + C19789 * C1184 + C19894 * C7707 +
             C30148 * C7865) *
                C155 +
            (C19893 * C1134 + C19789 * C1328 + C19894 * C7785 +
             C30148 * C8068) *
                C30075) *
               C10231 +
           ((C19893 * C1073 + C19789 * C1185 + C19894 * C7708 +
             C30148 * C7866) *
                C155 +
            (C19893 * C1135 + C19789 * C1329 + C19894 * C7786 +
             C30148 * C8069) *
                C30075) *
               C30139) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[32] +=
        (-std::pow(Pi, 2.5) *
         (((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
               C19893 +
           (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
               C19789 +
           (C10236 * C1071 + C10231 * C1077 + C10238 * C1070 + C30139 * C1076) *
               C19894 +
           (C10236 * C1183 + C10231 * C1371 + C10238 * C1182 + C30139 * C1370) *
               C30148) *
              C30075 * C30030 * C624 -
          ((C13520 + C13521) * C30148 + (C13312 + C13313) * C19894 +
           (C11155 + C11154) * C19789 + (C10981 + C10980) * C19893) *
              C30075 * C30030 * C625 +
          ((C10987 + C10986) * C19893 + (C11157 + C11156) * C19789 +
           (C10236 * C6059 + C10231 * C6061 + C10238 * C6060 + C30139 * C6062) *
               C19894 +
           (C10236 * C6213 + C10231 * C6516 + C10238 * C6214 + C30139 * C6517) *
               C30148) *
              C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
               C19893 +
           (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
               C19789 +
           (C10236 * C1071 + C10231 * C1077 + C10238 * C1070 + C30139 * C1076) *
               C19894 +
           (C10236 * C1183 + C10231 * C1371 + C10238 * C1182 + C30139 * C1370) *
               C30148) *
              C30075 * C30030 * C30016 * C84 -
          ((C10238 * C1181 + C30139 * C1369 + C10236 * C1182 + C10231 * C1370) *
               C30148 +
           (C10238 * C1069 + C30139 * C1075 + C10236 * C1070 + C10231 * C1076) *
               C19894 +
           (C10238 * C225 + C30139 * C457 + C10236 * C224 + C10231 * C456) *
               C19789 +
           (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
               C19893) *
              C30075 * C30030 * C30016 * C85 +
          ((C10236 * C95 + C10231 * C100 + C10238 * C96 + C30139 * C101) *
               C19893 +
           (C10236 * C225 + C10231 * C457 + C10238 * C226 + C30139 * C458) *
               C19789 +
           (C10236 * C1069 + C10231 * C1075 + C10238 * C2059 + C30139 * C2060) *
               C19894 +
           (C10236 * C1181 + C10231 * C1369 + C10238 * C2179 + C30139 * C2417) *
               C30148) *
              C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
               C19893 +
           (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
               C19789 +
           (C20974 + C20975) * C19894 + (C21144 + C21145) * C30148) *
              C30075 * C1066 -
          ((C21146 + C21147) * C30148 + (C20980 + C20981) * C19894 +
           (C21145 + C21144) * C19789 + (C20975 + C20974) * C19893) *
              C30075 * C1067 +
          ((C20981 + C20980) * C19893 + (C21147 + C21146) * C19789 +
           (C10236 * C7707 + C10231 * C7709 + C10238 * C7708 + C30139 * C7710) *
               C19894 +
           (C10236 * C7865 + C10231 * C8120 + C10238 * C7866 + C30139 * C8121) *
               C30148) *
              C30075 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezy[32] +=
        (-std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C19893 +
            (C155 * C223 + C30075 * C498) * C19789 + C7804 * C19894 +
            C8193 * C30148) *
               C10231 +
           (C20182 + C20183 + C20184 + C20185) * C30139) *
              C30030 * C624 -
          ((C8818 * C30148 + C8393 * C19894 + C1941 * C19789 + C1593 * C19893) *
               C30139 +
           (C10111 * C30148 + C9700 * C19894 +
            (C155 * C742 + C30075 * C974) * C19789 +
            (C155 * C630 + C30075 * C692) * C19893) *
               C10231) *
              C30030 * C625 +
          (((C155 * C631 + C30075 * C693) * C19893 +
            (C155 * C743 + C30075 * C975) * C19789 +
            (C155 * C6059 + C30075 * C6143) * C19894 +
            (C155 * C6213 + C30075 * C6590) * C30148) *
               C10231 +
           ((C155 * C632 + C30075 * C694) * C19893 +
            (C155 * C744 + C30075 * C976) * C19789 +
            (C155 * C6060 + C30075 * C6144) * C19894 +
            (C155 * C6214 + C30075 * C6591) * C30148) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C155 * C93 + C30075 * C156) * C19893 +
                                (C155 * C223 + C30075 * C498) * C19789 +
                                C7804 * C19894 + C8193 * C30148) *
                                   C10231 +
                               (C20182 + C20183 + C20184 + C20185) * C30139) *
                                  C30030 * C30016 * C84 -
                              ((C20186 + C20187 + C20188 + C20189) * C30139 +
                               (C20185 + C20184 + C20183 + C20182) * C10231) *
                                  C30030 * C30016 * C85 +
                              ((C20189 + C20188 + C20187 + C20186) * C10231 +
                               (C184 * C19893 + C515 * C19789 +
                                (C155 * C2059 + C30075 * C2115) * C19894 +
                                (C155 * C2179 + C30075 * C2468) * C30148) *
                                   C30139) *
                                  C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C19893 +
            (C155 * C223 + C30075 * C498) * C19789 + C7804 * C19894 +
            C8193 * C30148) *
               C10231 +
           (C20182 + C20183 + C20184 + C20185) * C30139) *
              C1066 -
          ((C8194 * C30148 + C7807 * C19894 + C2477 * C19789 + C2129 * C19893) *
               C30139 +
           (C8195 * C30148 + C7809 * C19894 + C8193 * C19789 + C7804 * C19893) *
               C10231) *
              C1067 +
          ((C7809 * C19893 + C8195 * C19789 +
            (C155 * C7707 + C30075 * C7785) * C19894 +
            (C155 * C7865 + C30075 * C8184) * C30148) *
               C10231 +
           (C7807 * C19893 + C8194 * C19789 +
            (C155 * C7708 + C30075 * C7786) * C19894 +
            (C155 * C7866 + C30075 * C8185) * C30148) *
               C30139) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[32] += (-std::pow(Pi, 2.5) *
                   (((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                      C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                         C30075 * C10231 +
                     (C20266 + C20267) * C30075 * C30139) *
                        C30030 * C624 -
                    ((C20240 * C2594 + C20720 + C20720 + C30148 * C3036 +
                      C20239 * C629 + C20721 + C20721 + C19789 * C1017) *
                         C30075 * C30139 +
                     (C20240 * C2593 + C20722 + C20722 + C30148 * C3035 +
                      C20239 * C630 + C20723 + C20723 + C19789 * C1018) *
                         C30075 * C10231) *
                        C30030 * C625 +
                    ((C20239 * C631 + C20724 + C20724 + C19789 * C1019 +
                      C20240 * C6059 + C20725 + C20725 + C30148 * C6658) *
                         C30075 * C10231 +
                     (C20239 * C632 + C20726 + C20726 + C19789 * C1020 +
                      C20240 * C6060 + C20727 + C20727 + C30148 * C6659) *
                         C30075 * C30139) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                      C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                         C30075 * C10231 +
                     (C20266 + C20267) * C30075 * C30139) *
                        C30030 * C30016 * C84 -
                    ((C20268 + C20269) * C30075 * C30139 +
                     (C20267 + C20266) * C30075 * C10231) *
                        C30030 * C30016 * C85 +
                    ((C20269 + C20268) * C30075 * C10231 +
                     (C20239 * C96 + C20256 + C20256 + C19789 * C561 +
                      C20240 * C2059 + C20257 + C20257 + C30148 * C2529) *
                         C30075 * C30139) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                      C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                         C30075 * C10231 +
                     (C20266 + C20267) * C30075 * C30139) *
                        C1066 -
                    ((C20240 * C1073 + C21248 + C21248 + C30148 * C1461 +
                      C20239 * C1070 + C21249 + C21249 + C19789 * C1458) *
                         C30075 * C30139 +
                     (C20240 * C1072 + C21250 + C21250 + C30148 * C1460 +
                      C20239 * C1071 + C21251 + C21251 + C19789 * C1459) *
                         C30075 * C10231) *
                        C1067 +
                    ((C20239 * C1072 + C21252 + C21252 + C19789 * C1460 +
                      C20240 * C7707 + C21253 + C21253 + C30148 * C8245) *
                         C30075 * C10231 +
                     (C20239 * C1073 + C21254 + C21254 + C19789 * C1461 +
                      C20240 * C7708 + C21255 + C21255 + C30148 * C8246) *
                         C30075 * C30139) *
                        C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexx[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                       C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                          C19789 +
                      (C20796 + C20797) * C30148) *
                         C30075 * C2057 -
                     ((C20798 + C20799) * C30148 + (C20797 + C20796) * C19789) *
                         C30075 * C2058) *
                        C30016 * C1521 +
                    (((C21960 + C21961) * C19789 +
                      (C10235 * C1073 + C21954 + C21954 + C10231 * C1085 +
                       C10237 * C1074 + C21955 + C21955 + C30139 * C1086) *
                          C30148) *
                         C30075 * C2058 -
                     ((C21961 + C21960) * C30148 +
                      (C10237 * C95 + C10246 + C10246 + C30139 * C105 +
                       C10235 * C94 + C10247 + C10247 + C10231 * C104) *
                          C19789) *
                         C30075 * C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C30075 * C156) * C10236 +
             (C155 * C98 + C30075 * C161) * C10231 + C179 * C10238 +
             C180 * C30139) *
                C19789 +
            (C20850 + C20851 + C20852 + C20853) * C30148) *
               C2057 -
           ((C20854 + C20855 + C20856 + C20857) * C30148 +
            (C20853 + C20852 + C20851 + C20850) * C19789) *
               C2058) *
              C30016 * C1521 +
          (((C22028 + C22029 + C22030 + C22031) * C19789 +
            (C7807 * C10236 + C7806 * C10231 +
             (C155 * C1074 + C30075 * C1136) * C10238 +
             (C155 * C1080 + C30075 * C1142) * C30139) *
                C30148) *
               C2058 -
           ((C22031 + C22030 + C22029 + C22028) * C30148 +
            (C182 * C30139 + C181 * C10238 + C180 * C10231 + C179 * C10236) *
                C19789) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C10236 +
            (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
                C10231 +
            (C19912 + C19913) * C10238 + (C19914 + C19915) * C30139) *
               C30075 * C2057 -
           ((C22106 + C22107) * C30139 + (C22108 + C22109) * C10238 +
            (C19894 * C1078 + C30148 * C1190 + C19893 * C1077 +
             C19789 * C1189) *
                C10231 +
            (C19894 * C1072 + C30148 * C1184 + C19893 * C1071 +
             C19789 * C1183) *
                C10236) *
               C30075 * C2058) *
              C30016 * C1521 +
          (((C22109 + C22108) * C10236 + (C22107 + C22106) * C10231 +
            (C19893 * C1069 + C19789 * C1181 + C19894 * C1074 +
             C30148 * C1186) *
                C10238 +
            (C19893 * C1075 + C19789 * C1187 + C19894 * C1080 +
             C30148 * C1192) *
                C30139) *
               C30075 * C2058 -
           ((C19916 + C19917) * C30139 + (C19918 + C19919) * C10238 +
            (C19915 + C19914) * C10231 + (C19913 + C19912) * C10236) *
               C30075 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
                 C155 +
             (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
                 C30075) *
                C19789 +
            ((C20974 + C20975) * C155 + (C20976 + C20977) * C30075) * C30148) *
               C2057 -
           (((C20978 + C20979) * C30075 + (C20980 + C20981) * C155) * C30148 +
            ((C20977 + C20976) * C30075 + (C20975 + C20974) * C155) * C19789) *
               C2058) *
              C30016 * C1521 +
          ((((C22184 + C22185) * C155 + (C22186 + C22187) * C30075) * C19789 +
            ((C10236 * C1073 + C10231 * C1079 + C10238 * C1074 +
              C30139 * C1080) *
                 C155 +
             (C10236 * C1135 + C10231 * C1235 + C10238 * C1136 +
              C30139 * C1236) *
                 C30075) *
                C30148) *
               C2058 -
           (((C22187 + C22186) * C30075 + (C22185 + C22184) * C155) * C30148 +
            ((C10238 * C158 + C30139 * C291 + C10236 * C157 + C10231 * C290) *
                 C30075 +
             (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
                 C155) *
                C19789) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C30075 * C333) * C10231 +
             C356 * C30139) *
                C19789 +
            (C21032 + C21033) * C30148) *
               C2057 -
           ((C21034 + C21035) * C30148 + (C21033 + C21032) * C19789) * C2058) *
              C30016 * C1521 +
          (((C22254 + C22255) * C19789 +
            (C8014 * C10231 +
             (C332 * C1074 + C1287 + C1287 + C30075 * C1280) * C30139) *
                C30148) *
               C2058 -
           ((C22255 + C22254) * C30148 +
            (C357 * C30139 + C356 * C10231) * C19789) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                 C155 +
             (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
                 C30075) *
                C10231 +
            ((C19912 + C19913) * C155 + (C20078 + C20079) * C30075) * C30139) *
               C2057 -
           (((C22326 + C22327) * C30075 + (C22108 + C22109) * C155) * C30139 +
            ((C19894 * C1134 + C30148 * C1328 + C19893 * C1133 +
              C19789 * C1327) *
                 C30075 +
             (C19894 * C1072 + C30148 * C1184 + C19893 * C1071 +
              C19789 * C1183) *
                 C155) *
                C10231) *
               C2058) *
              C30016 * C1521 +
          ((((C22109 + C22108) * C155 + (C22327 + C22326) * C30075) * C10231 +
            ((C19893 * C1069 + C19789 * C1181 + C19894 * C1074 +
              C30148 * C1186) *
                 C155 +
             (C19893 * C1131 + C19789 * C1325 + C19894 * C1136 +
              C30148 * C1330) *
                 C30075) *
                C30139) *
               C2058 -
           (((C20080 + C20081) * C30075 + (C19918 + C19919) * C155) * C30139 +
            ((C20079 + C20078) * C30075 + (C19913 + C19912) * C155) * C10231) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
                C19893 +
            (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
                C19789 +
            (C20974 + C20975) * C19894 + (C21144 + C21145) * C30148) *
               C30075 * C2057 -
           ((C21146 + C21147) * C30148 + (C20980 + C20981) * C19894 +
            (C21145 + C21144) * C19789 + (C20975 + C20974) * C19893) *
               C30075 * C2058) *
              C30016 * C1521 +
          (((C22184 + C22185) * C19893 + (C22398 + C22399) * C19789 +
            (C10236 * C1073 + C10231 * C1079 + C10238 * C1074 +
             C30139 * C1080) *
                C19894 +
            (C10236 * C1185 + C10231 * C1373 + C10238 * C1186 +
             C30139 * C1374) *
                C30148) *
               C30075 * C2058 -
           ((C22399 + C22398) * C30148 + (C22185 + C22184) * C19894 +
            (C10238 * C225 + C30139 * C457 + C10236 * C224 + C10231 * C456) *
                C19789 +
            (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
                C19893) *
               C30075 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C30075 * C156) * C19893 +
                       (C155 * C223 + C30075 * C498) * C19789 + C7804 * C19894 +
                       C8193 * C30148) *
                          C10231 +
                      (C20182 + C20183 + C20184 + C20185) * C30139) *
                         C2057 -
                     ((C22466 + C22467 + C22468 + C22469) * C30139 +
                      (C8195 * C30148 + C7809 * C19894 + C8193 * C19789 +
                       C7804 * C19893) *
                          C10231) *
                         C2058) *
                        C30016 * C1521 +
                    (((C22469 + C22468 + C22467 + C22466) * C10231 +
                      (C2127 * C19893 + C2476 * C19789 +
                       (C155 * C1074 + C30075 * C1136) * C19894 +
                       (C155 * C1186 + C30075 * C1418) * C30148) *
                          C30139) *
                         C2058 -
                     ((C20186 + C20187 + C20188 + C20189) * C30139 +
                      (C20185 + C20184 + C20183 + C20182) * C10231) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                       C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                          C30075 * C10231 +
                      (C20266 + C20267) * C30075 * C30139) *
                         C2057 -
                     ((C22546 + C22547) * C30075 * C30139 +
                      (C20240 * C1072 + C21250 + C21250 + C30148 * C1460 +
                       C20239 * C1071 + C21251 + C21251 + C19789 * C1459) *
                          C30075 * C10231) *
                         C2058) *
                        C30016 * C1521 +
                    (((C22547 + C22546) * C30075 * C10231 +
                      (C20239 * C1069 + C22540 + C22540 + C19789 * C1457 +
                       C20240 * C1074 + C22541 + C22541 + C30148 * C1462) *
                          C30075 * C30139) *
                         C2058 -
                     ((C20268 + C20269) * C30075 * C30139 +
                      (C20267 + C20266) * C30075 * C10231) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[34] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                      C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                         C19789 +
                     (C10235 * C1071 + C11311 + C11311 + C10231 * C1083 +
                      C10237 * C1070 + C11310 + C11310 + C30139 * C1082) *
                         C30148) *
                        C30075 * C30030 * C30016 * C84 -
                    ((C10237 * C1069 + C12455 + C12455 + C30139 * C1081 +
                      C10235 * C1070 + C12454 + C12454 + C10231 * C1082) *
                         C30148 +
                     (C10237 * C95 + C10246 + C10246 + C30139 * C105 +
                      C10235 * C94 + C10247 + C10247 + C10231 * C104) *
                         C19789) *
                        C30075 * C30030 * C30016 * C85 +
                    ((C10235 * C95 + C10248 + C10248 + C10231 * C105 +
                      C10237 * C96 + C10249 + C10249 + C30139 * C106) *
                         C19789 +
                     (C10235 * C1069 + C19792 + C19792 + C10231 * C1081 +
                      C10237 * C2059 + C19793 + C19793 + C30139 * C2061) *
                         C30148) *
                        C30075 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C10235 * C93 + C10240 + C10240 + C10231 * C103 +
                      C10237 * C94 + C10241 + C10241 + C30139 * C104) *
                         C19789 +
                     (C10235 * C1071 + C11311 + C11311 + C10231 * C1083 +
                      C10237 * C1070 + C11310 + C11310 + C30139 * C1082) *
                         C30148) *
                        C30075 * C30030 * C624 -
                    ((C13098 + C13099) * C30148 + (C10803 + C10802) * C19789) *
                        C30075 * C30030 * C625 +
                    ((C10805 + C10804) * C19789 +
                     (C10235 * C6059 + C13092 + C13092 + C10231 * C6063 +
                      C10237 * C6060 + C13093 + C13093 + C30139 * C6064) *
                         C30148) *
                        C30075 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexy[34] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C10236 +
            (C155 * C98 + C30075 * C161) * C10231 + C179 * C10238 +
            C180 * C30139) *
               C19789 +
           (C7804 * C10236 + C7805 * C10231 + C2129 * C10238 + C2128 * C30139) *
               C30148) *
              C30030 * C30016 * C84 -
          ((C2126 * C30139 + C2127 * C10238 + C2128 * C10231 + C2129 * C10236) *
               C30148 +
           (C182 * C30139 + C181 * C10238 + C180 * C10231 + C179 * C10236) *
               C19789) *
              C30030 * C30016 * C85 +
          ((C181 * C10236 + C182 * C10231 + C184 * C10238 + C183 * C30139) *
               C19789 +
           (C2127 * C10236 + C2126 * C10231 +
            (C155 * C2059 + C30075 * C2115) * C10238 +
            (C155 * C2060 + C30075 * C2116) * C30139) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C10236 +
            (C155 * C98 + C30075 * C161) * C10231 + C179 * C10238 +
            C180 * C30139) *
               C19789 +
           (C7804 * C10236 + C7805 * C10231 + C2129 * C10238 + C2128 * C30139) *
               C30148) *
              C30030 * C624 -
          ((C8392 * C30139 + C8393 * C10238 + C9701 * C10231 + C9700 * C10236) *
               C30148 +
           (C1592 * C30139 + C1593 * C10238 +
            (C155 * C636 + C30075 * C698) * C10231 +
            (C155 * C630 + C30075 * C692) * C10236) *
               C19789) *
              C30030 * C625 +
          (((C155 * C631 + C30075 * C693) * C10236 +
            (C155 * C637 + C30075 * C699) * C10231 +
            (C155 * C632 + C30075 * C694) * C10238 +
            (C155 * C638 + C30075 * C700) * C30139) *
               C19789 +
           ((C155 * C6059 + C30075 * C6143) * C10236 +
            (C155 * C6061 + C30075 * C6145) * C10231 +
            (C155 * C6060 + C30075 * C6144) * C10238 +
            (C155 * C6062 + C30075 * C6146) * C30139) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[34] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
               C10236 +
           (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
               C10231 +
           (C19912 + C19913) * C10238 + (C19914 + C19915) * C30139) *
              C30075 * C30030 * C30016 * C84 -
          ((C19916 + C19917) * C30139 + (C19918 + C19919) * C10238 +
           (C19915 + C19914) * C10231 + (C19913 + C19912) * C10236) *
              C30075 * C30030 * C30016 * C85 +
          ((C19919 + C19918) * C10236 + (C19917 + C19916) * C10231 +
           (C19893 * C96 + C19789 * C226 + C19894 * C2059 + C30148 * C2179) *
               C10238 +
           (C19893 * C101 + C19789 * C231 + C19894 * C2060 + C30148 * C2180) *
               C30139) *
              C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
               C10236 +
           (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
               C10231 +
           (C19912 + C19913) * C10238 + (C19914 + C19915) * C30139) *
              C30075 * C30030 * C624 -
          ((C19894 * C2597 + C30148 * C2715 + C19893 * C635 + C19789 * C747) *
               C30139 +
           (C19894 * C2594 + C30148 * C2712 + C19893 * C629 + C19789 * C741) *
               C10238 +
           (C19894 * C2596 + C30148 * C2714 + C19893 * C636 + C19789 * C748) *
               C10231 +
           (C19894 * C2593 + C30148 * C2711 + C19893 * C630 + C19789 * C742) *
               C10236) *
              C30075 * C30030 * C625 +
          ((C19893 * C631 + C19789 * C743 + C19894 * C6059 + C30148 * C6213) *
               C10236 +
           (C19893 * C637 + C19789 * C749 + C19894 * C6061 + C30148 * C6215) *
               C10231 +
           (C19893 * C632 + C19789 * C744 + C19894 * C6060 + C30148 * C6214) *
               C10238 +
           (C19893 * C638 + C19789 * C750 + C19894 * C6062 + C30148 * C6216) *
               C30139) *
              C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[34] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) * C155 +
            (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
                C30075) *
               C19789 +
           ((C10236 * C1071 + C10231 * C1077 + C10238 * C1070 +
             C30139 * C1076) *
                C155 +
            (C10236 * C1133 + C10231 * C1233 + C10238 * C1132 +
             C30139 * C1232) *
                C30075) *
               C30148) *
              C30030 * C30016 * C84 -
          (((C10238 * C1131 + C30139 * C1231 + C10236 * C1132 +
             C10231 * C1232) *
                C30075 +
            (C10238 * C1069 + C30139 * C1075 + C10236 * C1070 +
             C10231 * C1076) *
                C155) *
               C30148 +
           ((C10238 * C158 + C30139 * C291 + C10236 * C157 + C10231 * C290) *
                C30075 +
            (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
                C155) *
               C19789) *
              C30030 * C30016 * C85 +
          (((C10236 * C95 + C10231 * C100 + C10238 * C96 + C30139 * C101) *
                C155 +
            (C10236 * C158 + C10231 * C291 + C10238 * C159 + C30139 * C292) *
                C30075) *
               C19789 +
           ((C10236 * C1069 + C10231 * C1075 + C10238 * C2059 +
             C30139 * C2060) *
                C155 +
            (C10236 * C1131 + C10231 * C1231 + C10238 * C2115 +
             C30139 * C2243) *
                C30075) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) * C155 +
            (C10236 * C156 + C10231 * C289 + C10238 * C157 + C30139 * C290) *
                C30075) *
               C19789 +
           ((C10236 * C1071 + C10231 * C1077 + C10238 * C1070 +
             C30139 * C1076) *
                C155 +
            (C10236 * C1133 + C10231 * C1233 + C10238 * C1132 +
             C30139 * C1232) *
                C30075) *
               C30148) *
              C30030 * C624 -
          (((C13310 + C13311) * C30075 + (C13312 + C13313) * C155) * C30148 +
           ((C10983 + C10982) * C30075 + (C10981 + C10980) * C155) * C19789) *
              C30030 * C625 +
          (((C10987 + C10986) * C155 + (C10985 + C10984) * C30075) * C19789 +
           ((C10236 * C6059 + C10231 * C6061 + C10238 * C6060 +
             C30139 * C6062) *
                C155 +
            (C10236 * C6143 + C10231 * C6293 + C10238 * C6144 +
             C30139 * C6294) *
                C30075) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyy[34] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C10231 +
            C356 * C30139) *
               C19789 +
           (C8013 * C10231 + C2306 * C30139) * C30148) *
              C30030 * C30016 * C84 -
          ((C2305 * C30139 + C2306 * C10231) * C30148 +
           (C357 * C30139 + C356 * C10231) * C19789) *
              C30030 * C30016 * C85 +
          ((C357 * C10231 + C358 * C30139) * C19789 +
           (C2305 * C10231 +
            (C332 * C2059 + C2300 + C2300 + C30075 * C2294) * C30139) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C10231 +
            C356 * C30139) *
               C19789 +
           (C8013 * C10231 + C2306 * C30139) * C30148) *
              C30030 * C624 -
          ((C8608 * C30139 + C9909 * C10231) * C30148 +
           (C1770 * C30139 +
            (C332 * C630 + C843 + C843 + C30075 * C836) * C10231) *
               C19789) *
              C30030 * C625 +
          (((C332 * C631 + C844 + C844 + C30075 * C837) * C10231 +
            (C332 * C632 + C845 + C845 + C30075 * C838) * C30139) *
               C19789 +
           ((C332 * C6059 + C7448 + C7448 + C30075 * C6373) * C10231 +
            (C332 * C6060 + C7449 + C7449 + C30075 * C6374) * C30139) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyz[34] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C155 +
            (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
                C30075) *
               C10231 +
           ((C19912 + C19913) * C155 + (C20078 + C20079) * C30075) * C30139) *
              C30030 * C30016 * C84 -
          (((C20080 + C20081) * C30075 + (C19918 + C19919) * C155) * C30139 +
           ((C20079 + C20078) * C30075 + (C19913 + C19912) * C155) * C10231) *
              C30030 * C30016 * C85 +
          (((C19919 + C19918) * C155 + (C20081 + C20080) * C30075) * C10231 +
           ((C19893 * C96 + C19789 * C226 + C19894 * C2059 + C30148 * C2179) *
                C155 +
            (C19893 * C159 + C19789 * C399 + C19894 * C2115 + C30148 * C2356) *
                C30075) *
               C30139) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C155 +
            (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
                C30075) *
               C10231 +
           ((C19912 + C19913) * C155 + (C20078 + C20079) * C30075) * C30139) *
              C30030 * C624 -
          (((C19894 * C2656 + C30148 * C2877 + C19893 * C691 + C19789 * C885) *
                C30075 +
            (C19894 * C2594 + C30148 * C2712 + C19893 * C629 + C19789 * C741) *
                C155) *
               C30139 +
           ((C19894 * C2655 + C30148 * C2876 + C19893 * C692 + C19789 * C886) *
                C30075 +
            (C19894 * C2593 + C30148 * C2711 + C19893 * C630 + C19789 * C742) *
                C155) *
               C10231) *
              C30030 * C625 +
          (((C19893 * C631 + C19789 * C743 + C19894 * C6059 + C30148 * C6213) *
                C155 +
            (C19893 * C693 + C19789 * C887 + C19894 * C6143 + C30148 * C6445) *
                C30075) *
               C10231 +
           ((C19893 * C632 + C19789 * C744 + C19894 * C6060 + C30148 * C6214) *
                C155 +
            (C19893 * C694 + C19789 * C888 + C19894 * C6144 + C30148 * C6446) *
                C30075) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[34] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
               C19893 +
           (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
               C19789 +
           (C10236 * C1071 + C10231 * C1077 + C10238 * C1070 + C30139 * C1076) *
               C19894 +
           (C10236 * C1183 + C10231 * C1371 + C10238 * C1182 + C30139 * C1370) *
               C30148) *
              C30075 * C30030 * C30016 * C84 -
          ((C10238 * C1181 + C30139 * C1369 + C10236 * C1182 + C10231 * C1370) *
               C30148 +
           (C10238 * C1069 + C30139 * C1075 + C10236 * C1070 + C10231 * C1076) *
               C19894 +
           (C10238 * C225 + C30139 * C457 + C10236 * C224 + C10231 * C456) *
               C19789 +
           (C10238 * C95 + C30139 * C100 + C10236 * C94 + C10231 * C99) *
               C19893) *
              C30075 * C30030 * C30016 * C85 +
          ((C10236 * C95 + C10231 * C100 + C10238 * C96 + C30139 * C101) *
               C19893 +
           (C10236 * C225 + C10231 * C457 + C10238 * C226 + C30139 * C458) *
               C19789 +
           (C10236 * C1069 + C10231 * C1075 + C10238 * C2059 + C30139 * C2060) *
               C19894 +
           (C10236 * C1181 + C10231 * C1369 + C10238 * C2179 + C30139 * C2417) *
               C30148) *
              C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10236 * C93 + C10231 * C98 + C10238 * C94 + C30139 * C99) *
               C19893 +
           (C10236 * C223 + C10231 * C455 + C10238 * C224 + C30139 * C456) *
               C19789 +
           (C10236 * C1071 + C10231 * C1077 + C10238 * C1070 + C30139 * C1076) *
               C19894 +
           (C10236 * C1183 + C10231 * C1371 + C10238 * C1182 + C30139 * C1370) *
               C30148) *
              C30075 * C30030 * C624 -
          ((C13520 + C13521) * C30148 + (C13312 + C13313) * C19894 +
           (C11155 + C11154) * C19789 + (C10981 + C10980) * C19893) *
              C30075 * C30030 * C625 +
          ((C10987 + C10986) * C19893 + (C11157 + C11156) * C19789 +
           (C10236 * C6059 + C10231 * C6061 + C10238 * C6060 + C30139 * C6062) *
               C19894 +
           (C10236 * C6213 + C10231 * C6516 + C10238 * C6214 + C30139 * C6517) *
               C30148) *
              C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezy[34] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C19893 +
            (C155 * C223 + C30075 * C498) * C19789 + C7804 * C19894 +
            C8193 * C30148) *
               C10231 +
           (C20182 + C20183 + C20184 + C20185) * C30139) *
              C30030 * C30016 * C84 -
          ((C20186 + C20187 + C20188 + C20189) * C30139 +
           (C20185 + C20184 + C20183 + C20182) * C10231) *
              C30030 * C30016 * C85 +
          ((C20189 + C20188 + C20187 + C20186) * C10231 +
           (C184 * C19893 + C515 * C19789 +
            (C155 * C2059 + C30075 * C2115) * C19894 +
            (C155 * C2179 + C30075 * C2468) * C30148) *
               C30139) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C19893 +
            (C155 * C223 + C30075 * C498) * C19789 + C7804 * C19894 +
            C8193 * C30148) *
               C10231 +
           (C20182 + C20183 + C20184 + C20185) * C30139) *
              C30030 * C624 -
          ((C8818 * C30148 + C8393 * C19894 + C1941 * C19789 + C1593 * C19893) *
               C30139 +
           (C10111 * C30148 + C9700 * C19894 +
            (C155 * C742 + C30075 * C974) * C19789 +
            (C155 * C630 + C30075 * C692) * C19893) *
               C10231) *
              C30030 * C625 +
          (((C155 * C631 + C30075 * C693) * C19893 +
            (C155 * C743 + C30075 * C975) * C19789 +
            (C155 * C6059 + C30075 * C6143) * C19894 +
            (C155 * C6213 + C30075 * C6590) * C30148) *
               C10231 +
           ((C155 * C632 + C30075 * C694) * C19893 +
            (C155 * C744 + C30075 * C976) * C19789 +
            (C155 * C6060 + C30075 * C6144) * C19894 +
            (C155 * C6214 + C30075 * C6591) * C30148) *
               C30139) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[34] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                      C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                         C30075 * C10231 +
                     (C20266 + C20267) * C30075 * C30139) *
                        C30030 * C30016 * C84 -
                    ((C20268 + C20269) * C30075 * C30139 +
                     (C20267 + C20266) * C30075 * C10231) *
                        C30030 * C30016 * C85 +
                    ((C20269 + C20268) * C30075 * C10231 +
                     (C20239 * C96 + C20256 + C20256 + C19789 * C561 +
                      C20240 * C2059 + C20257 + C20257 + C30148 * C2529) *
                         C30075 * C30139) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                      C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                         C30075 * C10231 +
                     (C20266 + C20267) * C30075 * C30139) *
                        C30030 * C624 -
                    ((C20240 * C2594 + C20720 + C20720 + C30148 * C3036 +
                      C20239 * C629 + C20721 + C20721 + C19789 * C1017) *
                         C30075 * C30139 +
                     (C20240 * C2593 + C20722 + C20722 + C30148 * C3035 +
                      C20239 * C630 + C20723 + C20723 + C19789 * C1018) *
                         C30075 * C10231) *
                        C30030 * C625 +
                    ((C20239 * C631 + C20724 + C20724 + C19789 * C1019 +
                      C20240 * C6059 + C20725 + C20725 + C30148 * C6658) *
                         C30075 * C10231 +
                     (C20239 * C632 + C20726 + C20726 + C19789 * C1020 +
                      C20240 * C6060 + C20727 + C20727 + C30148 * C6659) *
                         C30075 * C30139) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C19789 +
             C17340 * C30148) *
                C3093 +
            (C23652 + C23653) * C30146) *
               C30030 * C1519 -
           ((C23654 + C23655) * C30146 + (C23653 + C23652) * C3093) * C30030 *
               C1520) *
              C1521 +
          (((C24708 + C24709) * C3093 +
            (C14891 * C19789 +
             (C13695 * C6060 + C15375 + C15375 + C29981 * C6064) * C30148) *
                C30146) *
               C30030 * C1520 -
           ((C24709 + C24708) * C30146 +
            (C18534 * C30148 +
             (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C19789) *
                C3093) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                 C13696 +
             (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) *
                 C29981) *
                C19789 +
            ((C24240 + C24241) * C13696 + (C24242 + C24243) * C29981) *
                C30148) *
               C30030 * C1519 -
           (((C3162 * C6061 + C30146 * C6145 + C3161 * C2596 + C3093 * C2658) *
                 C29981 +
             (C3162 * C6059 + C30146 * C6143 + C3161 * C2593 + C3093 * C2655) *
                 C13696) *
                C30148 +
            ((C3162 * C637 + C30146 * C699 + C3161 * C636 + C3093 * C698) *
                 C29981 +
             (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
                 C13696) *
                C19789) *
               C30030 * C1520) *
              C1521 +
          ((((C4837 + C4836) * C13696 + (C4835 + C4834) * C29981) * C19789 +
            ((C3161 * C2594 + C3093 * C2656 + C3162 * C6060 + C30146 * C6144) *
                 C13696 +
             (C3161 * C2597 + C3093 * C2659 + C3162 * C6062 + C30146 * C6146) *
                 C29981) *
                C30148) *
               C30030 * C1520 -
           (((C5490 + C5491) * C29981 + (C5492 + C5493) * C13696) * C30148 +
            ((C3183 + C3182) * C29981 + (C3181 + C3180) * C13696) * C19789) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                 C13696 +
             (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
                 C29981) *
                C3093 +
            ((C23772 + C23773) * C13696 + (C23774 + C23775) * C29981) *
                C30146) *
               C30030 * C1519 -
           (((C23776 + C23777) * C29981 + (C23778 + C23779) * C13696) * C30146 +
            ((C23775 + C23774) * C29981 + (C23773 + C23772) * C13696) * C3093) *
               C30030 * C1520) *
              C1521 +
          ((((C21465 + C21464) * C13696 + (C21463 + C21462) * C29981) * C3093 +
            ((C19893 * C632 + C19789 * C744 + C19894 * C6060 + C30148 * C6214) *
                 C13696 +
             (C19893 * C638 + C19789 * C750 + C19894 * C6062 + C30148 * C6216) *
                 C29981) *
                C30146) *
               C30030 * C1520 -
           (((C21462 + C21463) * C29981 + (C21464 + C21465) * C13696) * C30146 +
            ((C19915 + C19914) * C29981 + (C19913 + C19912) * C13696) * C3093) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C3161 +
                       (C13696 * C156 + C29981 * C289) * C3093 +
                       C14231 * C3162 + C14232 * C30146) *
                          C19789 +
                      (C24348 + C24349 + C24350 + C24351) * C30148) *
                         C30030 * C1519 -
                     ((C16018 * C30146 + C16019 * C3162 + C16020 * C3093 +
                       C16021 * C3161) *
                          C30148 +
                      (C14234 * C30146 + C14233 * C3162 + C14232 * C3093 +
                       C14231 * C3161) *
                          C19789) *
                         C30030 * C1520) *
                        C1521 +
                    (((C15056 * C3161 + C15057 * C3093 + C15058 * C3162 +
                       C15059 * C30146) *
                          C19789 +
                      (C18123 * C3161 + C18124 * C3093 +
                       (C13696 * C6060 + C29981 * C6062) * C3162 +
                       (C13696 * C6144 + C29981 * C6294) * C30146) *
                          C30148) *
                         C30030 * C1520 -
                     ((C18124 * C30146 + C18123 * C3162 + C18740 * C3093 +
                       C18739 * C3161) *
                          C30148 +
                      (C15057 * C30146 + C15056 * C3162 +
                       (C13696 * C157 + C29981 * C290) * C3093 +
                       (C13696 * C94 + C29981 * C99) * C3161) *
                          C19789) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C3337 * C93 + C3340 + C3340 + C3093 * C333 +
                       C3338 * C630 + C3341 + C3341 + C30146 * C836) *
                          C29981 * C19789 +
                      (C24424 + C24425) * C29981 * C30148) *
                         C30030 * C1519 -
                     ((C3338 * C6059 + C6377 + C6377 + C30146 * C6373 +
                       C3337 * C2593 + C6376 + C6376 + C3093 * C2820) *
                          C29981 * C30148 +
                      (C3338 * C631 + C3936 + C3936 + C30146 * C837 +
                       C3337 * C630 + C3937 + C3937 + C3093 * C836) *
                          C29981 * C19789) *
                         C30030 * C1520) *
                        C1521 +
                    (((C5063 + C5062) * C29981 * C19789 +
                      (C3337 * C2594 + C6378 + C6378 + C3093 * C2821 +
                       C3338 * C6060 + C6379 + C6379 + C30146 * C6374) *
                          C29981 * C30148) *
                         C30030 * C1520 -
                     ((C5708 + C5709) * C29981 * C30148 +
                      (C3365 + C3364) * C29981 * C19789) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C3161 +
            (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
                C3093 +
            (C23772 + C23773) * C3162 + (C23940 + C23941) * C30146) *
               C29981 * C30030 * C1519 -
           ((C23942 + C23943) * C30146 + (C23778 + C23779) * C3162 +
            (C23941 + C23940) * C3093 + (C23773 + C23772) * C3161) *
               C29981 * C30030 * C1520) *
              C1521 +
          (((C21465 + C21464) * C3161 + (C21669 + C21668) * C3093 +
            (C19893 * C632 + C19789 * C744 + C19894 * C6060 + C30148 * C6214) *
                C3162 +
            (C19893 * C694 + C19789 * C888 + C19894 * C6144 + C30148 * C6446) *
                C30146) *
               C29981 * C30030 * C1520 -
           ((C21668 + C21669) * C30146 + (C21464 + C21465) * C3162 +
            (C20079 + C20078) * C3093 + (C19913 + C19912) * C3161) *
               C29981 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C19893 +
                       (C13696 * C223 + C29981 * C455) * C19789 +
                       C17536 * C19894 + C17729 * C30148) *
                          C3093 +
                      (C23994 + C23995 + C23996 + C23997) * C30146) *
                         C30030 * C1519 -
                     ((C23998 + C23999 + C24000 + C24001) * C30146 +
                      (C23997 + C23996 + C23995 + C23994) * C3093) *
                         C30030 * C1520) *
                        C1521 +
                    (((C25106 + C25107 + C25108 + C25109) * C3093 +
                      (C15058 * C19893 + C15220 * C19789 +
                       (C13696 * C6060 + C29981 * C6062) * C19894 +
                       (C13696 * C6214 + C29981 * C6517) * C30148) *
                          C30146) *
                         C30030 * C1520 -
                     ((C25109 + C25108 + C25107 + C25106) * C30146 +
                      (C18943 * C30148 + C18739 * C19894 +
                       (C13696 * C224 + C29981 * C456) * C19789 +
                       (C13696 * C94 + C29981 * C99) * C19893) *
                          C3093) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                C19893 +
            (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
                C19789 +
            (C24240 + C24241) * C19894 + (C24586 + C24587) * C30148) *
               C29981 * C30030 * C1519 -
           ((C3162 * C6213 + C30146 * C6590 + C3161 * C2711 + C3093 * C2982) *
                C30148 +
            (C3162 * C6059 + C30146 * C6143 + C3161 * C2593 + C3093 * C2655) *
                C19894 +
            (C3162 * C743 + C30146 * C975 + C3161 * C742 + C3093 * C974) *
                C19789 +
            (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
                C19893) *
               C29981 * C30030 * C1520) *
              C1521 +
          (((C4837 + C4836) * C19893 + (C5277 + C5276) * C19789 +
            (C3161 * C2594 + C3093 * C2656 + C3162 * C6060 + C30146 * C6144) *
                C19894 +
            (C3161 * C2712 + C3093 * C2983 + C3162 * C6214 + C30146 * C6591) *
                C30148) *
               C29981 * C30030 * C1520 -
           ((C5919 + C5920) * C30148 + (C5492 + C5493) * C19894 +
            (C3535 + C3534) * C19789 + (C3181 + C3180) * C19893) *
               C29981 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                       C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                          C3093 +
                      (C24120 + C24121) * C30146) *
                         C29981 * C30030 * C1519 -
                     ((C24122 + C24123) * C30146 + (C24121 + C24120) * C3093) *
                         C29981 * C30030 * C1520) *
                        C1521 +
                    (((C21883 + C21882) * C3093 +
                      (C20239 * C632 + C20726 + C20726 + C19789 * C1020 +
                       C20240 * C6060 + C20727 + C20727 + C30148 * C6659) *
                          C30146) *
                         C29981 * C30030 * C1520 -
                     ((C21882 + C21883) * C30146 + (C20267 + C20266) * C3093) *
                         C29981 * C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[36] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C19789 +
             C17340 * C30148) *
                C3093 +
            (C23652 + C23653) * C30146) *
               C2057 -
           ((C25906 + C25907) * C30146 +
            (C17342 * C30148 + C17340 * C19789) * C3093) *
               C2058) *
              C1519 +
          (((C25907 + C25906) * C3093 +
            (C15841 * C19789 +
             (C13695 * C14500 + C14509 + C14509 + C29981 * C14502) * C30148) *
                C30146) *
               C2058 -
           ((C23654 + C23655) * C30146 + (C23653 + C23652) * C3093) * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eexy[36] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                 C13696 +
             (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) *
                 C29981) *
                C19789 +
            ((C24240 + C24241) * C13696 + (C24242 + C24243) * C29981) *
                C30148) *
               C2057 -
           (((C24244 + C24245) * C29981 + (C24246 + C24247) * C13696) * C30148 +
            ((C24243 + C24242) * C29981 + (C24241 + C24240) * C13696) *
                C19789) *
               C2058) *
              C1519 +
          ((((C25982 + C25983) * C13696 + (C25984 + C25985) * C29981) * C19789 +
            ((C3161 * C4237 + C3093 * C4301 + C3162 * C14500 +
              C30146 * C14547) *
                 C13696 +
             (C3161 * C4239 + C3093 * C4303 + C3162 * C14501 +
              C30146 * C14548) *
                 C29981) *
                C30148) *
               C2058 -
           (((C25985 + C25984) * C29981 + (C25983 + C25982) * C13696) * C30148 +
            ((C3162 * C637 + C30146 * C699 + C3161 * C636 + C3093 * C698) *
                 C29981 +
             (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
                 C13696) *
                C19789) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eexz[36] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                 C13696 +
             (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
                 C29981) *
                C3093 +
            ((C23772 + C23773) * C13696 + (C23774 + C23775) * C29981) *
                C30146) *
               C2057 -
           (((C26060 + C26061) * C29981 + (C26062 + C26063) * C13696) * C30146 +
            ((C19894 * C1078 + C30148 * C1190 + C19893 * C1077 +
              C19789 * C1189) *
                 C29981 +
             (C19894 * C1072 + C30148 * C1184 + C19893 * C1071 +
              C19789 * C1183) *
                 C13696) *
                C3093) *
               C2058) *
              C1519 +
          ((((C26063 + C26062) * C13696 + (C26061 + C26060) * C29981) * C3093 +
            ((C19893 * C6059 + C19789 * C6213 + C19894 * C14500 +
              C30148 * C14587) *
                 C13696 +
             (C19893 * C6061 + C19789 * C6215 + C19894 * C14501 +
              C30148 * C14588) *
                 C29981) *
                C30146) *
               C2058 -
           (((C23776 + C23777) * C29981 + (C23778 + C23779) * C13696) * C30146 +
            ((C23775 + C23774) * C29981 + (C23773 + C23772) * C13696) * C3093) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eeyx[36] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C3161 +
                       (C13696 * C156 + C29981 * C289) * C3093 +
                       C14231 * C3162 + C14232 * C30146) *
                          C19789 +
                      (C24348 + C24349 + C24350 + C24351) * C30148) *
                         C2057 -
                     ((C24352 + C24353 + C24354 + C24355) * C30148 +
                      (C24351 + C24350 + C24349 + C24348) * C19789) *
                         C2058) *
                        C1519 +
                    (((C26130 + C26131 + C26132 + C26133) * C19789 +
                      (C17539 * C3161 + C17538 * C3093 +
                       (C13696 * C14500 + C29981 * C14501) * C3162 +
                       (C13696 * C14547 + C29981 * C14627) * C30146) *
                          C30148) *
                         C2058 -
                     ((C26133 + C26132 + C26131 + C26130) * C30148 +
                      (C14234 * C30146 + C14233 * C3162 + C14232 * C3093 +
                       C14231 * C3161) *
                          C19789) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[36] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C3337 * C93 + C3340 + C3340 + C3093 * C333 +
                       C3338 * C630 + C3341 + C3341 + C30146 * C836) *
                          C29981 * C19789 +
                      (C24424 + C24425) * C29981 * C30148) *
                         C2057 -
                     ((C24426 + C24427) * C29981 * C30148 +
                      (C24425 + C24424) * C29981 * C19789) *
                         C2058) *
                        C1519 +
                    (((C26210 + C26211) * C29981 * C19789 +
                      (C3337 * C4237 + C26204 + C26204 + C3093 * C4461 +
                       C3338 * C14500 + C26205 + C26205 + C30146 * C14666) *
                          C29981 * C30148) *
                         C2058 -
                     ((C26211 + C26210) * C29981 * C30148 +
                      (C3338 * C631 + C3936 + C3936 + C30146 * C837 +
                       C3337 * C630 + C3937 + C3937 + C3093 * C836) *
                          C29981 * C19789) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[36] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C3161 +
            (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
                C3093 +
            (C23772 + C23773) * C3162 + (C23940 + C23941) * C30146) *
               C29981 * C2057 -
           ((C26282 + C26283) * C30146 + (C26062 + C26063) * C3162 +
            (C19894 * C1134 + C30148 * C1328 + C19893 * C1133 +
             C19789 * C1327) *
                C3093 +
            (C19894 * C1072 + C30148 * C1184 + C19893 * C1071 +
             C19789 * C1183) *
                C3161) *
               C29981 * C2058) *
              C1519 +
          (((C26063 + C26062) * C3161 + (C26283 + C26282) * C3093 +
            (C19893 * C6059 + C19789 * C6213 + C19894 * C14500 +
             C30148 * C14587) *
                C3162 +
            (C19893 * C6143 + C19789 * C6445 + C19894 * C14547 +
             C30148 * C14711) *
                C30146) *
               C29981 * C2058 -
           ((C23942 + C23943) * C30146 + (C23778 + C23779) * C3162 +
            (C23941 + C23940) * C3093 + (C23773 + C23772) * C3161) *
               C29981 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezx[36] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C19893 +
                       (C13696 * C223 + C29981 * C455) * C19789 +
                       C17536 * C19894 + C17729 * C30148) *
                          C3093 +
                      (C23994 + C23995 + C23996 + C23997) * C30146) *
                         C2057 -
                     ((C26350 + C26351 + C26352 + C26353) * C30146 +
                      (C17731 * C30148 + C17541 * C19894 + C17729 * C19789 +
                       C17536 * C19893) *
                          C3093) *
                         C2058) *
                        C1519 +
                    (((C26353 + C26352 + C26351 + C26350) * C3093 +
                      (C16019 * C19893 + C16187 * C19789 +
                       (C13696 * C14500 + C29981 * C14501) * C19894 +
                       (C13696 * C14587 + C29981 * C14750) * C30148) *
                          C30146) *
                         C2058 -
                     ((C23998 + C23999 + C24000 + C24001) * C30146 +
                      (C23997 + C23996 + C23995 + C23994) * C3093) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eezy[36] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                C19893 +
            (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
                C19789 +
            (C24240 + C24241) * C19894 + (C24586 + C24587) * C30148) *
               C29981 * C2057 -
           ((C24588 + C24589) * C30148 + (C24246 + C24247) * C19894 +
            (C24587 + C24586) * C19789 + (C24241 + C24240) * C19893) *
               C29981 * C2058) *
              C1519 +
          (((C25982 + C25983) * C19893 + (C26424 + C26425) * C19789 +
            (C3161 * C4237 + C3093 * C4301 + C3162 * C14500 + C30146 * C14547) *
                C19894 +
            (C3161 * C4355 + C3093 * C4625 + C3162 * C14587 + C30146 * C14789) *
                C30148) *
               C29981 * C2058 -
           ((C26425 + C26424) * C30148 + (C25983 + C25982) * C19894 +
            (C3162 * C743 + C30146 * C975 + C3161 * C742 + C3093 * C974) *
                C19789 +
            (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
                C19893) *
               C29981 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezz[36] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                       C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                          C3093 +
                      (C24120 + C24121) * C30146) *
                         C29981 * C2057 -
                     ((C26502 + C26503) * C30146 +
                      (C20240 * C1072 + C21250 + C21250 + C30148 * C1460 +
                       C20239 * C1071 + C21251 + C21251 + C19789 * C1459) *
                          C3093) *
                         C29981 * C2058) *
                        C1519 +
                    (((C26503 + C26502) * C3093 +
                      (C20239 * C6059 + C26496 + C26496 + C19789 * C6658 +
                       C20240 * C14500 + C26497 + C26497 + C30148 * C14828) *
                          C30146) *
                         C29981 * C2058 -
                     ((C24122 + C24123) * C30146 + (C24121 + C24120) * C3093) *
                         C29981 * C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eexx[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C19789 +
            C17340 * C30148) *
               C3093 +
           (C23652 + C23653) * C30146) *
              C30030 * C624 -
          ((C23654 + C23655) * C30146 + (C23653 + C23652) * C3093) * C30030 *
              C625 +
          ((C23655 + C23654) * C3093 +
           (C14083 * C19789 +
            (C13695 * C15828 + C15836 + C15836 + C29981 * C15830) * C30148) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C19789 +
            C17340 * C30148) *
               C3093 +
           (C14081 * C19789 + C15842 * C30148) * C30146) *
              C30030 * C30016 * C84 -
          ((C17919 * C30148 + C14890 * C19789) * C30146 +
           (C18534 * C30148 +
            (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C19789) *
               C3093) *
              C30030 * C30016 * C85 +
          (((C13695 * C95 + C13704 + C13704 + C29981 * C105) * C19789 +
            (C13695 * C1069 + C16349 + C16349 + C29981 * C1081) * C30148) *
               C3093 +
           ((C13695 * C628 + C13705 + C13705 + C29981 * C640) * C19789 +
            (C13695 * C2595 + C16350 + C16350 + C29981 * C2601) * C30148) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C19789 +
            C17340 * C30148) *
               C3093 +
           (C23652 + C23653) * C30146) *
              C1066 -
          ((C17341 * C30148 + C15842 * C19789) * C30146 +
           (C17342 * C30148 + C17340 * C19789) * C3093) *
              C1067 +
          ((C17342 * C19789 +
            (C13695 * C7707 + C17332 + C17332 + C29981 * C7711) * C30148) *
               C3093 +
           (C17341 * C19789 +
            (C13695 * C17322 + C17333 + C17333 + C29981 * C17324) * C30148) *
               C30146) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexy[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                C13696 +
            (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) *
                C29981) *
               C19789 +
           ((C3161 * C1071 + C3093 * C1133 + C3162 * C2593 + C30146 * C2655) *
                C13696 +
            (C3161 * C1077 + C3093 * C1139 + C3162 * C2596 + C30146 * C2658) *
                C29981) *
               C30148) *
              C30030 * C624 -
          (((C3162 * C6061 + C30146 * C6145 + C3161 * C2596 + C3093 * C2658) *
                C29981 +
            (C3162 * C6059 + C30146 * C6143 + C3161 * C2593 + C3093 * C2655) *
                C13696) *
               C30148 +
           ((C3162 * C637 + C30146 * C699 + C3161 * C636 + C3093 * C698) *
                C29981 +
            (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
                C13696) *
               C19789) *
              C30030 * C625 +
          (((C3161 * C631 + C3093 * C693 + C3162 * C3641 + C30146 * C3721) *
                C13696 +
            (C3161 * C637 + C3093 * C699 + C3162 * C3643 + C30146 * C3723) *
                C29981) *
               C19789 +
           ((C3161 * C6059 + C3093 * C6143 + C3162 * C15828 + C30146 * C15894) *
                C13696 +
            (C3161 * C6061 + C3093 * C6145 + C3162 * C15829 + C30146 * C15895) *
                C29981) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                C13696 +
            (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) *
                C29981) *
               C19789 +
           ((C3161 * C1071 + C3093 * C1133 + C3162 * C2593 + C30146 * C2655) *
                C13696 +
            (C3161 * C1077 + C3093 * C1139 + C3162 * C2596 + C30146 * C2658) *
                C29981) *
               C30148) *
              C30030 * C30016 * C84 -
          (((C5490 + C5491) * C29981 + (C5492 + C5493) * C13696) * C30148 +
           ((C3183 + C3182) * C29981 + (C3181 + C3180) * C13696) * C19789) *
              C30030 * C30016 * C85 +
          (((C3187 + C3186) * C13696 + (C3185 + C3184) * C29981) * C19789 +
           ((C3161 * C1069 + C3093 * C1131 + C3162 * C2595 + C30146 * C2657) *
                C13696 +
            (C3161 * C1075 + C3093 * C1137 + C3162 * C2598 + C30146 * C2660) *
                C29981) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                C13696 +
            (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) *
                C29981) *
               C19789 +
           ((C24240 + C24241) * C13696 + (C24242 + C24243) * C29981) * C30148) *
              C1066 -
          (((C24244 + C24245) * C29981 + (C24246 + C24247) * C13696) * C30148 +
           ((C24243 + C24242) * C29981 + (C24241 + C24240) * C13696) * C19789) *
              C1067 +
          (((C24247 + C24246) * C13696 + (C24245 + C24244) * C29981) * C19789 +
           ((C3161 * C7707 + C3093 * C7785 + C3162 * C17322 + C30146 * C17392) *
                C13696 +
            (C3161 * C7709 + C3093 * C7787 + C3162 * C17323 + C30146 * C17393) *
                C29981) *
               C30148) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C13696 +
            (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
                C29981) *
               C3093 +
           ((C23772 + C23773) * C13696 + (C23774 + C23775) * C29981) * C30146) *
              C30030 * C624 -
          (((C23776 + C23777) * C29981 + (C23778 + C23779) * C13696) * C30146 +
           ((C23775 + C23774) * C29981 + (C23773 + C23772) * C13696) * C3093) *
              C30030 * C625 +
          (((C23779 + C23778) * C13696 + (C23777 + C23776) * C29981) * C3093 +
           ((C19893 * C3641 + C19789 * C3775 + C19894 * C15828 +
             C30148 * C15946) *
                C13696 +
            (C19893 * C3643 + C19789 * C3777 + C19894 * C15829 +
             C30148 * C15947) *
                C29981) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C13696 +
            (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
                C29981) *
               C3093 +
           ((C19893 * C630 + C19789 * C742 + C19894 * C2593 + C30148 * C2711) *
                C13696 +
            (C19893 * C636 + C19789 * C748 + C19894 * C2596 + C30148 * C2714) *
                C29981) *
               C30146) *
              C30030 * C30016 * C84 -
          (((C21462 + C21463) * C29981 + (C21464 + C21465) * C13696) * C30146 +
           ((C19915 + C19914) * C29981 + (C19913 + C19912) * C13696) * C3093) *
              C30030 * C30016 * C85 +
          (((C19919 + C19918) * C13696 + (C19917 + C19916) * C29981) * C3093 +
           ((C19893 * C628 + C19789 * C740 + C19894 * C2595 + C30148 * C2713) *
                C13696 +
            (C19893 * C634 + C19789 * C746 + C19894 * C2598 + C30148 * C2716) *
                C29981) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C13696 +
            (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
                C29981) *
               C3093 +
           ((C23772 + C23773) * C13696 + (C23774 + C23775) * C29981) * C30146) *
              C1066 -
          (((C19894 * C4239 + C30148 * C4357 + C19893 * C2596 +
             C19789 * C2714) *
                C29981 +
            (C19894 * C4237 + C30148 * C4355 + C19893 * C2593 +
             C19789 * C2711) *
                C13696) *
               C30146 +
           ((C19894 * C1078 + C30148 * C1190 + C19893 * C1077 +
             C19789 * C1189) *
                C29981 +
            (C19894 * C1072 + C30148 * C1184 + C19893 * C1071 +
             C19789 * C1183) *
                C13696) *
               C3093) *
              C1067 +
          (((C19893 * C1072 + C19789 * C1184 + C19894 * C7707 +
             C30148 * C7865) *
                C13696 +
            (C19893 * C1078 + C19789 * C1190 + C19894 * C7709 +
             C30148 * C7867) *
                C29981) *
               C3093 +
           ((C19893 * C4237 + C19789 * C4355 + C19894 * C17322 +
             C30148 * C17468) *
                C13696 +
            (C19893 * C4239 + C19789 * C4357 + C19894 * C17323 +
             C30148 * C17469) *
                C29981) *
               C30146) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C3161 +
            (C13696 * C156 + C29981 * C289) * C3093 + C14231 * C3162 +
            C14232 * C30146) *
               C19789 +
           (C17536 * C3161 + C17537 * C3093 + C16021 * C3162 +
            C16020 * C30146) *
               C30148) *
              C30030 * C624 -
          ((C16018 * C30146 + C16019 * C3162 + C16020 * C3093 +
            C16021 * C3161) *
               C30148 +
           (C14234 * C30146 + C14233 * C3162 + C14232 * C3093 +
            C14231 * C3161) *
               C19789) *
              C30030 * C625 +
          ((C14233 * C3161 + C14234 * C3093 + C14236 * C3162 +
            C14235 * C30146) *
               C19789 +
           (C16019 * C3161 + C16018 * C3093 +
            (C13696 * C15828 + C29981 * C15829) * C3162 +
            (C13696 * C15894 + C29981 * C16008) * C30146) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C13696 * C93 + C29981 * C98) * C3161 +
                                (C13696 * C156 + C29981 * C289) * C3093 +
                                C14231 * C3162 + C14232 * C30146) *
                                   C19789 +
                               (C17536 * C3161 + C17537 * C3093 +
                                C16021 * C3162 + C16020 * C30146) *
                                   C30148) *
                                  C30030 * C30016 * C84 -
                              ((C18124 * C30146 + C18123 * C3162 +
                                C18740 * C3093 + C18739 * C3161) *
                                   C30148 +
                               (C15057 * C30146 + C15056 * C3162 +
                                (C13696 * C157 + C29981 * C290) * C3093 +
                                (C13696 * C94 + C29981 * C99) * C3161) *
                                   C19789) *
                                  C30030 * C30016 * C85 +
                              (((C13696 * C95 + C29981 * C100) * C3161 +
                                (C13696 * C158 + C29981 * C291) * C3093 +
                                (C13696 * C628 + C29981 * C634) * C3162 +
                                (C13696 * C690 + C29981 * C790) * C30146) *
                                   C19789 +
                               ((C13696 * C1069 + C29981 * C1075) * C3161 +
                                (C13696 * C1131 + C29981 * C1231) * C3093 +
                                (C13696 * C2595 + C29981 * C2598) * C3162 +
                                (C13696 * C2657 + C29981 * C2769) * C30146) *
                                   C30148) *
                                  C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C3161 +
            (C13696 * C156 + C29981 * C289) * C3093 + C14231 * C3162 +
            C14232 * C30146) *
               C19789 +
           (C24348 + C24349 + C24350 + C24351) * C30148) *
              C1066 -
          ((C24352 + C24353 + C24354 + C24355) * C30148 +
           (C24351 + C24350 + C24349 + C24348) * C19789) *
              C1067 +
          ((C24355 + C24354 + C24353 + C24352) * C19789 +
           ((C13696 * C7707 + C29981 * C7709) * C3161 +
            (C13696 * C7785 + C29981 * C7919) * C3093 +
            (C13696 * C17322 + C29981 * C17323) * C3162 +
            (C13696 * C17392 + C29981 * C17520) * C30146) *
               C30148) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyy[37] += (-std::pow(Pi, 2.5) *
                   (((C3337 * C93 + C3340 + C3340 + C3093 * C333 +
                      C3338 * C630 + C3341 + C3341 + C30146 * C836) *
                         C29981 * C19789 +
                     (C3337 * C1071 + C4467 + C4467 + C3093 * C1277 +
                      C3338 * C2593 + C4466 + C4466 + C30146 * C2820) *
                         C29981 * C30148) *
                        C30030 * C624 -
                    ((C3338 * C6059 + C6377 + C6377 + C30146 * C6373 +
                      C3337 * C2593 + C6376 + C6376 + C3093 * C2820) *
                         C29981 * C30148 +
                     (C3338 * C631 + C3936 + C3936 + C30146 * C837 +
                      C3337 * C630 + C3937 + C3937 + C3093 * C836) *
                         C29981 * C19789) *
                        C30030 * C625 +
                    ((C3337 * C631 + C3938 + C3938 + C3093 * C837 +
                      C3338 * C3641 + C3939 + C3939 + C30146 * C3931) *
                         C29981 * C19789 +
                     (C3337 * C6059 + C23880 + C23880 + C3093 * C6373 +
                      C3338 * C15828 + C23881 + C23881 + C30146 * C16071) *
                         C29981 * C30148) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C3337 * C93 + C3340 + C3340 + C3093 * C333 +
                      C3338 * C630 + C3341 + C3341 + C30146 * C836) *
                         C29981 * C19789 +
                     (C3337 * C1071 + C4467 + C4467 + C3093 * C1277 +
                      C3338 * C2593 + C4466 + C4466 + C30146 * C2820) *
                         C29981 * C30148) *
                        C30030 * C30016 * C84 -
                    ((C5708 + C5709) * C29981 * C30148 +
                     (C3365 + C3364) * C29981 * C19789) *
                        C30030 * C30016 * C85 +
                    ((C3367 + C3366) * C29981 * C19789 +
                     (C3337 * C1069 + C5702 + C5702 + C3093 * C1275 +
                      C3338 * C2595 + C5703 + C5703 + C30146 * C2822) *
                         C29981 * C30148) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C3337 * C93 + C3340 + C3340 + C3093 * C333 +
                      C3338 * C630 + C3341 + C3341 + C30146 * C836) *
                         C29981 * C19789 +
                     (C24424 + C24425) * C29981 * C30148) *
                        C1066 -
                    ((C24426 + C24427) * C29981 * C30148 +
                     (C24425 + C24424) * C29981 * C19789) *
                        C1067 +
                    ((C24427 + C24426) * C29981 * C19789 +
                     (C3337 * C7707 + C24414 + C24414 + C3093 * C7995 +
                      C3338 * C17322 + C24415 + C24415 + C30146 * C17597) *
                         C29981 * C30148) *
                        C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[37] +=
        (-std::pow(Pi, 2.5) *
         (((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
               C3161 +
           (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
               C3093 +
           (C23772 + C23773) * C3162 + (C23940 + C23941) * C30146) *
              C29981 * C30030 * C624 -
          ((C23942 + C23943) * C30146 + (C23778 + C23779) * C3162 +
           (C23941 + C23940) * C3093 + (C23773 + C23772) * C3161) *
              C29981 * C30030 * C625 +
          ((C23779 + C23778) * C3161 + (C23943 + C23942) * C3093 +
           (C19893 * C3641 + C19789 * C3775 + C19894 * C15828 +
            C30148 * C15946) *
               C3162 +
           (C19893 * C3721 + C19789 * C3991 + C19894 * C15894 +
            C30148 * C16125) *
               C30146) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
               C3161 +
           (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
               C3093 +
           (C19893 * C630 + C19789 * C742 + C19894 * C2593 + C30148 * C2711) *
               C3162 +
           (C19893 * C692 + C19789 * C886 + C19894 * C2655 + C30148 * C2876) *
               C30146) *
              C29981 * C30030 * C30016 * C84 -
          ((C21668 + C21669) * C30146 + (C21464 + C21465) * C3162 +
           (C20079 + C20078) * C3093 + (C19913 + C19912) * C3161) *
              C29981 * C30030 * C30016 * C85 +
          ((C19919 + C19918) * C3161 + (C20081 + C20080) * C3093 +
           (C19893 * C628 + C19789 * C740 + C19894 * C2595 + C30148 * C2713) *
               C3162 +
           (C19893 * C690 + C19789 * C884 + C19894 * C2657 + C30148 * C2878) *
               C30146) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
               C3161 +
           (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
               C3093 +
           (C23772 + C23773) * C3162 + (C23940 + C23941) * C30146) *
              C29981 * C1066 -
          ((C19894 * C4301 + C30148 * C4521 + C19893 * C2655 + C19789 * C2876) *
               C30146 +
           (C19894 * C4237 + C30148 * C4355 + C19893 * C2593 + C19789 * C2711) *
               C3162 +
           (C19894 * C1134 + C30148 * C1328 + C19893 * C1133 + C19789 * C1327) *
               C3093 +
           (C19894 * C1072 + C30148 * C1184 + C19893 * C1071 + C19789 * C1183) *
               C3161) *
              C29981 * C1067 +
          ((C19893 * C1072 + C19789 * C1184 + C19894 * C7707 + C30148 * C7865) *
               C3161 +
           (C19893 * C1134 + C19789 * C1328 + C19894 * C7785 + C30148 * C8068) *
               C3093 +
           (C19893 * C4237 + C19789 * C4355 + C19894 * C17322 +
            C30148 * C17468) *
               C3162 +
           (C19893 * C4301 + C19789 * C4521 + C19894 * C17392 +
            C30148 * C17670) *
               C30146) *
              C29981 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C19893 +
            (C13696 * C223 + C29981 * C455) * C19789 + C17536 * C19894 +
            C17729 * C30148) *
               C3093 +
           (C23994 + C23995 + C23996 + C23997) * C30146) *
              C30030 * C624 -
          ((C23998 + C23999 + C24000 + C24001) * C30146 +
           (C23997 + C23996 + C23995 + C23994) * C3093) *
              C30030 * C625 +
          ((C24001 + C24000 + C23999 + C23998) * C3093 +
           (C14236 * C19893 + C14374 * C19789 +
            (C13696 * C15828 + C29981 * C15829) * C19894 +
            (C13696 * C15946 + C29981 * C16179) * C30148) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C13696 * C93 + C29981 * C98) * C19893 +
                                (C13696 * C223 + C29981 * C455) * C19789 +
                                C17536 * C19894 + C17729 * C30148) *
                                   C3093 +
                               (C14231 * C19893 + C14372 * C19789 +
                                C16021 * C19894 + C16188 * C30148) *
                                   C30146) *
                                  C30030 * C30016 * C84 -
                              ((C18328 * C30148 + C18123 * C19894 +
                                C15219 * C19789 + C15056 * C19893) *
                                   C30146 +
                               (C18943 * C30148 + C18739 * C19894 +
                                (C13696 * C224 + C29981 * C456) * C19789 +
                                (C13696 * C94 + C29981 * C99) * C19893) *
                                   C3093) *
                                  C30030 * C30016 * C85 +
                              (((C13696 * C95 + C29981 * C100) * C19893 +
                                (C13696 * C225 + C29981 * C457) * C19789 +
                                (C13696 * C1069 + C29981 * C1075) * C19894 +
                                (C13696 * C1181 + C29981 * C1369) * C30148) *
                                   C3093 +
                               ((C13696 * C628 + C29981 * C634) * C19893 +
                                (C13696 * C740 + C29981 * C928) * C19789 +
                                (C13696 * C2595 + C29981 * C2598) * C19894 +
                                (C13696 * C2713 + C29981 * C2931) * C30148) *
                                   C30146) *
                                  C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C19893 +
            (C13696 * C223 + C29981 * C455) * C19789 + C17536 * C19894 +
            C17729 * C30148) *
               C3093 +
           (C23994 + C23995 + C23996 + C23997) * C30146) *
              C1066 -
          ((C17730 * C30148 + C17539 * C19894 + C16188 * C19789 +
            C16021 * C19893) *
               C30146 +
           (C17731 * C30148 + C17541 * C19894 + C17729 * C19789 +
            C17536 * C19893) *
               C3093) *
              C1067 +
          ((C17541 * C19893 + C17731 * C19789 +
            (C13696 * C7707 + C29981 * C7709) * C19894 +
            (C13696 * C7865 + C29981 * C8120) * C30148) *
               C3093 +
           (C17539 * C19893 + C17730 * C19789 +
            (C13696 * C17322 + C29981 * C17323) * C19894 +
            (C13696 * C17468 + C29981 * C17721) * C30148) *
               C30146) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezy[37] +=
        (-std::pow(Pi, 2.5) *
         (((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
               C19893 +
           (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
               C19789 +
           (C3161 * C1071 + C3093 * C1133 + C3162 * C2593 + C30146 * C2655) *
               C19894 +
           (C3161 * C1183 + C3093 * C1415 + C3162 * C2711 + C30146 * C2982) *
               C30148) *
              C29981 * C30030 * C624 -
          ((C3162 * C6213 + C30146 * C6590 + C3161 * C2711 + C3093 * C2982) *
               C30148 +
           (C3162 * C6059 + C30146 * C6143 + C3161 * C2593 + C3093 * C2655) *
               C19894 +
           (C3162 * C743 + C30146 * C975 + C3161 * C742 + C3093 * C974) *
               C19789 +
           (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
               C19893) *
              C29981 * C30030 * C625 +
          ((C3161 * C631 + C3093 * C693 + C3162 * C3641 + C30146 * C3721) *
               C19893 +
           (C3161 * C743 + C3093 * C975 + C3162 * C3775 + C30146 * C4116) *
               C19789 +
           (C3161 * C6059 + C3093 * C6143 + C3162 * C15828 + C30146 * C15894) *
               C19894 +
           (C3161 * C6213 + C3093 * C6590 + C3162 * C15946 + C30146 * C16240) *
               C30148) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
               C19893 +
           (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
               C19789 +
           (C3161 * C1071 + C3093 * C1133 + C3162 * C2593 + C30146 * C2655) *
               C19894 +
           (C3161 * C1183 + C3093 * C1415 + C3162 * C2711 + C30146 * C2982) *
               C30148) *
              C29981 * C30030 * C30016 * C84 -
          ((C5919 + C5920) * C30148 + (C5492 + C5493) * C19894 +
           (C3535 + C3534) * C19789 + (C3181 + C3180) * C19893) *
              C29981 * C30030 * C30016 * C85 +
          ((C3187 + C3186) * C19893 + (C3537 + C3536) * C19789 +
           (C3161 * C1069 + C3093 * C1131 + C3162 * C2595 + C30146 * C2657) *
               C19894 +
           (C3161 * C1181 + C3093 * C1413 + C3162 * C2713 + C30146 * C2984) *
               C30148) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
               C19893 +
           (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
               C19789 +
           (C24240 + C24241) * C19894 + (C24586 + C24587) * C30148) *
              C29981 * C1066 -
          ((C24588 + C24589) * C30148 + (C24246 + C24247) * C19894 +
           (C24587 + C24586) * C19789 + (C24241 + C24240) * C19893) *
              C29981 * C1067 +
          ((C24247 + C24246) * C19893 + (C24589 + C24588) * C19789 +
           (C3161 * C7707 + C3093 * C7785 + C3162 * C17322 + C30146 * C17392) *
               C19894 +
           (C3161 * C7865 + C3093 * C8184 + C3162 * C17468 + C30146 * C17781) *
               C30148) *
              C29981 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[37] += (-std::pow(Pi, 2.5) *
                   (((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                      C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                         C3093 +
                     (C24120 + C24121) * C30146) *
                        C29981 * C30030 * C624 -
                    ((C24122 + C24123) * C30146 + (C24121 + C24120) * C3093) *
                        C29981 * C30030 * C625 +
                    ((C24123 + C24122) * C3093 +
                     (C20239 * C3641 + C24110 + C24110 + C19789 * C4168 +
                      C20240 * C15828 + C24111 + C24111 + C30148 * C16291) *
                         C30146) *
                        C29981 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                      C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                         C3093 +
                     (C20239 * C630 + C20723 + C20723 + C19789 * C1018 +
                      C20240 * C2593 + C20722 + C20722 + C30148 * C3035) *
                         C30146) *
                        C29981 * C30030 * C30016 * C84 -
                    ((C21882 + C21883) * C30146 + (C20267 + C20266) * C3093) *
                        C29981 * C30030 * C30016 * C85 +
                    ((C20269 + C20268) * C3093 +
                     (C20239 * C628 + C21876 + C21876 + C19789 * C1016 +
                      C20240 * C2595 + C21877 + C21877 + C30148 * C3037) *
                         C30146) *
                        C29981 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                      C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                         C3093 +
                     (C24120 + C24121) * C30146) *
                        C29981 * C1066 -
                    ((C20240 * C4237 + C23149 + C23149 + C30148 * C4677 +
                      C20239 * C2593 + C23148 + C23148 + C19789 * C3035) *
                         C30146 +
                     (C20240 * C1072 + C21250 + C21250 + C30148 * C1460 +
                      C20239 * C1071 + C21251 + C21251 + C19789 * C1459) *
                         C3093) *
                        C29981 * C1067 +
                    ((C20239 * C1072 + C21252 + C21252 + C19789 * C1460 +
                      C20240 * C7707 + C21253 + C21253 + C30148 * C8245) *
                         C3093 +
                     (C20239 * C4237 + C24640 + C24640 + C19789 * C4677 +
                      C20240 * C17322 + C24641 + C24641 + C30148 * C17844) *
                         C30146) *
                        C29981 * C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexx[38] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C19789 +
             C17340 * C30148) *
                C3093 +
            (C23652 + C23653) * C30146) *
               C2057 -
           ((C17341 * C30148 + C15842 * C19789) * C30146 +
            (C17342 * C30148 + C17340 * C19789) * C3093) *
               C2058) *
              C30016 * C1521 +
          (((C18534 * C19789 +
             (C13695 * C1073 + C18530 + C18530 + C29981 * C1085) * C30148) *
                C3093 +
            (C17919 * C19789 +
             (C13695 * C4238 + C18531 + C18531 + C29981 * C4242) * C30148) *
                C30146) *
               C2058 -
           ((C24709 + C24708) * C30146 +
            (C18534 * C30148 +
             (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C19789) *
                C3093) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexy[38] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                 C13696 +
             (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) *
                 C29981) *
                C19789 +
            ((C24240 + C24241) * C13696 + (C24242 + C24243) * C29981) *
                C30148) *
               C2057 -
           (((C24244 + C24245) * C29981 + (C24246 + C24247) * C13696) * C30148 +
            ((C24243 + C24242) * C29981 + (C24241 + C24240) * C13696) *
                C19789) *
               C2058) *
              C30016 * C1521 +
          ((((C5493 + C5492) * C13696 + (C5491 + C5490) * C29981) * C19789 +
            ((C3161 * C1073 + C3093 * C1135 + C3162 * C4238 + C30146 * C4302) *
                 C13696 +
             (C3161 * C1079 + C3093 * C1141 + C3162 * C4240 + C30146 * C4304) *
                 C29981) *
                C30148) *
               C2058 -
           (((C5490 + C5491) * C29981 + (C5492 + C5493) * C13696) * C30148 +
            ((C3183 + C3182) * C29981 + (C3181 + C3180) * C13696) * C19789) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[38] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                 C13696 +
             (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
                 C29981) *
                C3093 +
            ((C23772 + C23773) * C13696 + (C23774 + C23775) * C29981) *
                C30146) *
               C2057 -
           (((C19894 * C4239 + C30148 * C4357 + C19893 * C2596 +
              C19789 * C2714) *
                 C29981 +
             (C19894 * C4237 + C30148 * C4355 + C19893 * C2593 +
              C19789 * C2711) *
                 C13696) *
                C30146 +
            ((C19894 * C1078 + C30148 * C1190 + C19893 * C1077 +
              C19789 * C1189) *
                 C29981 +
             (C19894 * C1072 + C30148 * C1184 + C19893 * C1071 +
              C19789 * C1183) *
                 C13696) *
                C3093) *
               C2058) *
              C30016 * C1521 +
          ((((C22109 + C22108) * C13696 + (C22107 + C22106) * C29981) * C3093 +
            ((C19893 * C2594 + C19789 * C2712 + C19894 * C4238 +
              C30148 * C4356) *
                 C13696 +
             (C19893 * C2597 + C19789 * C2715 + C19894 * C4240 +
              C30148 * C4358) *
                 C29981) *
                C30146) *
               C2058 -
           (((C21462 + C21463) * C29981 + (C21464 + C21465) * C13696) * C30146 +
            ((C19915 + C19914) * C29981 + (C19913 + C19912) * C13696) * C3093) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[38] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C3161 +
                       (C13696 * C156 + C29981 * C289) * C3093 +
                       C14231 * C3162 + C14232 * C30146) *
                          C19789 +
                      (C24348 + C24349 + C24350 + C24351) * C30148) *
                         C2057 -
                     ((C24352 + C24353 + C24354 + C24355) * C30148 +
                      (C24351 + C24350 + C24349 + C24348) * C19789) *
                         C2058) *
                        C30016 * C1521 +
                    (((C25506 + C25507 + C25508 + C25509) * C19789 +
                      ((C13696 * C1073 + C29981 * C1079) * C3161 +
                       (C13696 * C1135 + C29981 * C1235) * C3093 +
                       (C13696 * C4238 + C29981 * C4240) * C3162 +
                       (C13696 * C4302 + C29981 * C4410) * C30146) *
                          C30148) *
                         C2058 -
                     ((C25509 + C25508 + C25507 + C25506) * C30148 +
                      (C15057 * C30146 + C15056 * C3162 +
                       (C13696 * C157 + C29981 * C290) * C3093 +
                       (C13696 * C94 + C29981 * C99) * C3161) *
                          C19789) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[38] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C3337 * C93 + C3340 + C3340 + C3093 * C333 +
                       C3338 * C630 + C3341 + C3341 + C30146 * C836) *
                          C29981 * C19789 +
                      (C24424 + C24425) * C29981 * C30148) *
                         C2057 -
                     ((C24426 + C24427) * C29981 * C30148 +
                      (C24425 + C24424) * C29981 * C19789) *
                         C2058) *
                        C30016 * C1521 +
                    (((C5709 + C5708) * C29981 * C19789 +
                      (C3337 * C1073 + C4470 + C4470 + C3093 * C1279 +
                       C3338 * C4238 + C4471 + C4471 + C30146 * C4462) *
                          C29981 * C30148) *
                         C2058 -
                     ((C5708 + C5709) * C29981 * C30148 +
                      (C3365 + C3364) * C29981 * C19789) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[38] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C3161 +
            (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
                C3093 +
            (C23772 + C23773) * C3162 + (C23940 + C23941) * C30146) *
               C29981 * C2057 -
           ((C19894 * C4301 + C30148 * C4521 + C19893 * C2655 +
             C19789 * C2876) *
                C30146 +
            (C19894 * C4237 + C30148 * C4355 + C19893 * C2593 +
             C19789 * C2711) *
                C3162 +
            (C19894 * C1134 + C30148 * C1328 + C19893 * C1133 +
             C19789 * C1327) *
                C3093 +
            (C19894 * C1072 + C30148 * C1184 + C19893 * C1071 +
             C19789 * C1183) *
                C3161) *
               C29981 * C2058) *
              C30016 * C1521 +
          (((C22109 + C22108) * C3161 + (C22327 + C22326) * C3093 +
            (C19893 * C2594 + C19789 * C2712 + C19894 * C4238 +
             C30148 * C4356) *
                C3162 +
            (C19893 * C2656 + C19789 * C2877 + C19894 * C4302 +
             C30148 * C4522) *
                C30146) *
               C29981 * C2058 -
           ((C21668 + C21669) * C30146 + (C21464 + C21465) * C3162 +
            (C20079 + C20078) * C3093 + (C19913 + C19912) * C3161) *
               C29981 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[38] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C19893 +
                       (C13696 * C223 + C29981 * C455) * C19789 +
                       C17536 * C19894 + C17729 * C30148) *
                          C3093 +
                      (C23994 + C23995 + C23996 + C23997) * C30146) *
                         C2057 -
                     ((C17730 * C30148 + C17539 * C19894 + C16188 * C19789 +
                       C16021 * C19893) *
                          C30146 +
                      (C17731 * C30148 + C17541 * C19894 + C17729 * C19789 +
                       C17536 * C19893) *
                          C3093) *
                         C2058) *
                        C30016 * C1521 +
                    (((C18739 * C19893 + C18943 * C19789 +
                       (C13696 * C1073 + C29981 * C1079) * C19894 +
                       (C13696 * C1185 + C29981 * C1373) * C30148) *
                          C3093 +
                      (C18123 * C19893 + C18328 * C19789 +
                       (C13696 * C4238 + C29981 * C4240) * C19894 +
                       (C13696 * C4356 + C29981 * C4574) * C30148) *
                          C30146) *
                         C2058 -
                     ((C25109 + C25108 + C25107 + C25106) * C30146 +
                      (C18943 * C30148 + C18739 * C19894 +
                       (C13696 * C224 + C29981 * C456) * C19789 +
                       (C13696 * C94 + C29981 * C99) * C19893) *
                          C3093) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[38] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                C19893 +
            (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
                C19789 +
            (C24240 + C24241) * C19894 + (C24586 + C24587) * C30148) *
               C29981 * C2057 -
           ((C24588 + C24589) * C30148 + (C24246 + C24247) * C19894 +
            (C24587 + C24586) * C19789 + (C24241 + C24240) * C19893) *
               C29981 * C2058) *
              C30016 * C1521 +
          (((C5493 + C5492) * C19893 + (C5920 + C5919) * C19789 +
            (C3161 * C1073 + C3093 * C1135 + C3162 * C4238 + C30146 * C4302) *
                C19894 +
            (C3161 * C1185 + C3093 * C1417 + C3162 * C4356 + C30146 * C4626) *
                C30148) *
               C29981 * C2058 -
           ((C5919 + C5920) * C30148 + (C5492 + C5493) * C19894 +
            (C3535 + C3534) * C19789 + (C3181 + C3180) * C19893) *
               C29981 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[38] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                       C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                          C3093 +
                      (C24120 + C24121) * C30146) *
                         C29981 * C2057 -
                     ((C20240 * C4237 + C23149 + C23149 + C30148 * C4677 +
                       C20239 * C2593 + C23148 + C23148 + C19789 * C3035) *
                          C30146 +
                      (C20240 * C1072 + C21250 + C21250 + C30148 * C1460 +
                       C20239 * C1071 + C21251 + C21251 + C19789 * C1459) *
                          C3093) *
                         C29981 * C2058) *
                        C30016 * C1521 +
                    (((C22547 + C22546) * C3093 +
                      (C20239 * C2594 + C23150 + C23150 + C19789 * C3036 +
                       C20240 * C4238 + C23151 + C23151 + C30148 * C4678) *
                          C30146) *
                         C29981 * C2058 -
                     ((C21882 + C21883) * C30146 + (C20267 + C20266) * C3093) *
                         C29981 * C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C19789 +
            C17340 * C30148) *
               C3093 +
           (C14081 * C19789 + C15842 * C30148) * C30146) *
              C30030 * C30016 * C84 -
          ((C17919 * C30148 + C14890 * C19789) * C30146 +
           (C18534 * C30148 +
            (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C19789) *
               C3093) *
              C30030 * C30016 * C85 +
          (((C13695 * C95 + C13704 + C13704 + C29981 * C105) * C19789 +
            (C13695 * C1069 + C16349 + C16349 + C29981 * C1081) * C30148) *
               C3093 +
           ((C13695 * C628 + C13705 + C13705 + C29981 * C640) * C19789 +
            (C13695 * C2595 + C16350 + C16350 + C29981 * C2601) * C30148) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C19789 +
            C17340 * C30148) *
               C3093 +
           (C23652 + C23653) * C30146) *
              C30030 * C624 -
          ((C23654 + C23655) * C30146 + (C23653 + C23652) * C3093) * C30030 *
              C625 +
          ((C23655 + C23654) * C3093 +
           (C14083 * C19789 +
            (C13695 * C15828 + C15836 + C15836 + C29981 * C15830) * C30148) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eexy[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                C13696 +
            (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) *
                C29981) *
               C19789 +
           ((C3161 * C1071 + C3093 * C1133 + C3162 * C2593 + C30146 * C2655) *
                C13696 +
            (C3161 * C1077 + C3093 * C1139 + C3162 * C2596 + C30146 * C2658) *
                C29981) *
               C30148) *
              C30030 * C30016 * C84 -
          (((C5490 + C5491) * C29981 + (C5492 + C5493) * C13696) * C30148 +
           ((C3183 + C3182) * C29981 + (C3181 + C3180) * C13696) * C19789) *
              C30030 * C30016 * C85 +
          (((C3187 + C3186) * C13696 + (C3185 + C3184) * C29981) * C19789 +
           ((C3161 * C1069 + C3093 * C1131 + C3162 * C2595 + C30146 * C2657) *
                C13696 +
            (C3161 * C1075 + C3093 * C1137 + C3162 * C2598 + C30146 * C2660) *
                C29981) *
               C30148) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
                C13696 +
            (C3161 * C98 + C3093 * C161 + C3162 * C636 + C30146 * C698) *
                C29981) *
               C19789 +
           ((C3161 * C1071 + C3093 * C1133 + C3162 * C2593 + C30146 * C2655) *
                C13696 +
            (C3161 * C1077 + C3093 * C1139 + C3162 * C2596 + C30146 * C2658) *
                C29981) *
               C30148) *
              C30030 * C624 -
          (((C3162 * C6061 + C30146 * C6145 + C3161 * C2596 + C3093 * C2658) *
                C29981 +
            (C3162 * C6059 + C30146 * C6143 + C3161 * C2593 + C3093 * C2655) *
                C13696) *
               C30148 +
           ((C3162 * C637 + C30146 * C699 + C3161 * C636 + C3093 * C698) *
                C29981 +
            (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
                C13696) *
               C19789) *
              C30030 * C625 +
          (((C3161 * C631 + C3093 * C693 + C3162 * C3641 + C30146 * C3721) *
                C13696 +
            (C3161 * C637 + C3093 * C699 + C3162 * C3643 + C30146 * C3723) *
                C29981) *
               C19789 +
           ((C3161 * C6059 + C3093 * C6143 + C3162 * C15828 + C30146 * C15894) *
                C13696 +
            (C3161 * C6061 + C3093 * C6145 + C3162 * C15829 + C30146 * C15895) *
                C29981) *
               C30148) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C13696 +
            (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
                C29981) *
               C3093 +
           ((C19893 * C630 + C19789 * C742 + C19894 * C2593 + C30148 * C2711) *
                C13696 +
            (C19893 * C636 + C19789 * C748 + C19894 * C2596 + C30148 * C2714) *
                C29981) *
               C30146) *
              C30030 * C30016 * C84 -
          (((C21462 + C21463) * C29981 + (C21464 + C21465) * C13696) * C30146 +
           ((C19915 + C19914) * C29981 + (C19913 + C19912) * C13696) * C3093) *
              C30030 * C30016 * C85 +
          (((C19919 + C19918) * C13696 + (C19917 + C19916) * C29981) * C3093 +
           ((C19893 * C628 + C19789 * C740 + C19894 * C2595 + C30148 * C2713) *
                C13696 +
            (C19893 * C634 + C19789 * C746 + C19894 * C2598 + C30148 * C2716) *
                C29981) *
               C30146) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
                C13696 +
            (C19893 * C98 + C19789 * C228 + C19894 * C1077 + C30148 * C1189) *
                C29981) *
               C3093 +
           ((C23772 + C23773) * C13696 + (C23774 + C23775) * C29981) * C30146) *
              C30030 * C624 -
          (((C23776 + C23777) * C29981 + (C23778 + C23779) * C13696) * C30146 +
           ((C23775 + C23774) * C29981 + (C23773 + C23772) * C13696) * C3093) *
              C30030 * C625 +
          (((C23779 + C23778) * C13696 + (C23777 + C23776) * C29981) * C3093 +
           ((C19893 * C3641 + C19789 * C3775 + C19894 * C15828 +
             C30148 * C15946) *
                C13696 +
            (C19893 * C3643 + C19789 * C3777 + C19894 * C15829 +
             C30148 * C15947) *
                C29981) *
               C30146) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyx[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C13696 * C93 + C29981 * C98) * C3161 +
                      (C13696 * C156 + C29981 * C289) * C3093 + C14231 * C3162 +
                      C14232 * C30146) *
                         C19789 +
                     (C17536 * C3161 + C17537 * C3093 + C16021 * C3162 +
                      C16020 * C30146) *
                         C30148) *
                        C30030 * C30016 * C84 -
                    ((C18124 * C30146 + C18123 * C3162 + C18740 * C3093 +
                      C18739 * C3161) *
                         C30148 +
                     (C15057 * C30146 + C15056 * C3162 +
                      (C13696 * C157 + C29981 * C290) * C3093 +
                      (C13696 * C94 + C29981 * C99) * C3161) *
                         C19789) *
                        C30030 * C30016 * C85 +
                    (((C13696 * C95 + C29981 * C100) * C3161 +
                      (C13696 * C158 + C29981 * C291) * C3093 +
                      (C13696 * C628 + C29981 * C634) * C3162 +
                      (C13696 * C690 + C29981 * C790) * C30146) *
                         C19789 +
                     ((C13696 * C1069 + C29981 * C1075) * C3161 +
                      (C13696 * C1131 + C29981 * C1231) * C3093 +
                      (C13696 * C2595 + C29981 * C2598) * C3162 +
                      (C13696 * C2657 + C29981 * C2769) * C30146) *
                         C30148) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C13696 * C93 + C29981 * C98) * C3161 +
                      (C13696 * C156 + C29981 * C289) * C3093 + C14231 * C3162 +
                      C14232 * C30146) *
                         C19789 +
                     (C17536 * C3161 + C17537 * C3093 + C16021 * C3162 +
                      C16020 * C30146) *
                         C30148) *
                        C30030 * C624 -
                    ((C16018 * C30146 + C16019 * C3162 + C16020 * C3093 +
                      C16021 * C3161) *
                         C30148 +
                     (C14234 * C30146 + C14233 * C3162 + C14232 * C3093 +
                      C14231 * C3161) *
                         C19789) *
                        C30030 * C625 +
                    ((C14233 * C3161 + C14234 * C3093 + C14236 * C3162 +
                      C14235 * C30146) *
                         C19789 +
                     (C16019 * C3161 + C16018 * C3093 +
                      (C13696 * C15828 + C29981 * C15829) * C3162 +
                      (C13696 * C15894 + C29981 * C16008) * C30146) *
                         C30148) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3337 * C93 + C3340 + C3340 + C3093 * C333 +
                      C3338 * C630 + C3341 + C3341 + C30146 * C836) *
                         C29981 * C19789 +
                     (C3337 * C1071 + C4467 + C4467 + C3093 * C1277 +
                      C3338 * C2593 + C4466 + C4466 + C30146 * C2820) *
                         C29981 * C30148) *
                        C30030 * C30016 * C84 -
                    ((C5708 + C5709) * C29981 * C30148 +
                     (C3365 + C3364) * C29981 * C19789) *
                        C30030 * C30016 * C85 +
                    ((C3367 + C3366) * C29981 * C19789 +
                     (C3337 * C1069 + C5702 + C5702 + C3093 * C1275 +
                      C3338 * C2595 + C5703 + C5703 + C30146 * C2822) *
                         C29981 * C30148) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3337 * C93 + C3340 + C3340 + C3093 * C333 +
                      C3338 * C630 + C3341 + C3341 + C30146 * C836) *
                         C29981 * C19789 +
                     (C3337 * C1071 + C4467 + C4467 + C3093 * C1277 +
                      C3338 * C2593 + C4466 + C4466 + C30146 * C2820) *
                         C29981 * C30148) *
                        C30030 * C624 -
                    ((C3338 * C6059 + C6377 + C6377 + C30146 * C6373 +
                      C3337 * C2593 + C6376 + C6376 + C3093 * C2820) *
                         C29981 * C30148 +
                     (C3338 * C631 + C3936 + C3936 + C30146 * C837 +
                      C3337 * C630 + C3937 + C3937 + C3093 * C836) *
                         C29981 * C19789) *
                        C30030 * C625 +
                    ((C3337 * C631 + C3938 + C3938 + C3093 * C837 +
                      C3338 * C3641 + C3939 + C3939 + C30146 * C3931) *
                         C29981 * C19789 +
                     (C3337 * C6059 + C23880 + C23880 + C3093 * C6373 +
                      C3338 * C15828 + C23881 + C23881 + C30146 * C16071) *
                         C29981 * C30148) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
               C3161 +
           (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
               C3093 +
           (C19893 * C630 + C19789 * C742 + C19894 * C2593 + C30148 * C2711) *
               C3162 +
           (C19893 * C692 + C19789 * C886 + C19894 * C2655 + C30148 * C2876) *
               C30146) *
              C29981 * C30030 * C30016 * C84 -
          ((C21668 + C21669) * C30146 + (C21464 + C21465) * C3162 +
           (C20079 + C20078) * C3093 + (C19913 + C19912) * C3161) *
              C29981 * C30030 * C30016 * C85 +
          ((C19919 + C19918) * C3161 + (C20081 + C20080) * C3093 +
           (C19893 * C628 + C19789 * C740 + C19894 * C2595 + C30148 * C2713) *
               C3162 +
           (C19893 * C690 + C19789 * C884 + C19894 * C2657 + C30148 * C2878) *
               C30146) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C19893 * C93 + C19789 * C223 + C19894 * C1071 + C30148 * C1183) *
               C3161 +
           (C19893 * C156 + C19789 * C396 + C19894 * C1133 + C30148 * C1327) *
               C3093 +
           (C23772 + C23773) * C3162 + (C23940 + C23941) * C30146) *
              C29981 * C30030 * C624 -
          ((C23942 + C23943) * C30146 + (C23778 + C23779) * C3162 +
           (C23941 + C23940) * C3093 + (C23773 + C23772) * C3161) *
              C29981 * C30030 * C625 +
          ((C23779 + C23778) * C3161 + (C23943 + C23942) * C3093 +
           (C19893 * C3641 + C19789 * C3775 + C19894 * C15828 +
            C30148 * C15946) *
               C3162 +
           (C19893 * C3721 + C19789 * C3991 + C19894 * C15894 +
            C30148 * C16125) *
               C30146) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezx[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C13696 * C93 + C29981 * C98) * C19893 +
                      (C13696 * C223 + C29981 * C455) * C19789 +
                      C17536 * C19894 + C17729 * C30148) *
                         C3093 +
                     (C14231 * C19893 + C14372 * C19789 + C16021 * C19894 +
                      C16188 * C30148) *
                         C30146) *
                        C30030 * C30016 * C84 -
                    ((C18328 * C30148 + C18123 * C19894 + C15219 * C19789 +
                      C15056 * C19893) *
                         C30146 +
                     (C18943 * C30148 + C18739 * C19894 +
                      (C13696 * C224 + C29981 * C456) * C19789 +
                      (C13696 * C94 + C29981 * C99) * C19893) *
                         C3093) *
                        C30030 * C30016 * C85 +
                    (((C13696 * C95 + C29981 * C100) * C19893 +
                      (C13696 * C225 + C29981 * C457) * C19789 +
                      (C13696 * C1069 + C29981 * C1075) * C19894 +
                      (C13696 * C1181 + C29981 * C1369) * C30148) *
                         C3093 +
                     ((C13696 * C628 + C29981 * C634) * C19893 +
                      (C13696 * C740 + C29981 * C928) * C19789 +
                      (C13696 * C2595 + C29981 * C2598) * C19894 +
                      (C13696 * C2713 + C29981 * C2931) * C30148) *
                         C30146) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C13696 * C93 + C29981 * C98) * C19893 +
                      (C13696 * C223 + C29981 * C455) * C19789 +
                      C17536 * C19894 + C17729 * C30148) *
                         C3093 +
                     (C23994 + C23995 + C23996 + C23997) * C30146) *
                        C30030 * C624 -
                    ((C23998 + C23999 + C24000 + C24001) * C30146 +
                     (C23997 + C23996 + C23995 + C23994) * C3093) *
                        C30030 * C625 +
                    ((C24001 + C24000 + C23999 + C23998) * C3093 +
                     (C14236 * C19893 + C14374 * C19789 +
                      (C13696 * C15828 + C29981 * C15829) * C19894 +
                      (C13696 * C15946 + C29981 * C16179) * C30148) *
                         C30146) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eezy[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
               C19893 +
           (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
               C19789 +
           (C3161 * C1071 + C3093 * C1133 + C3162 * C2593 + C30146 * C2655) *
               C19894 +
           (C3161 * C1183 + C3093 * C1415 + C3162 * C2711 + C30146 * C2982) *
               C30148) *
              C29981 * C30030 * C30016 * C84 -
          ((C5919 + C5920) * C30148 + (C5492 + C5493) * C19894 +
           (C3535 + C3534) * C19789 + (C3181 + C3180) * C19893) *
              C29981 * C30030 * C30016 * C85 +
          ((C3187 + C3186) * C19893 + (C3537 + C3536) * C19789 +
           (C3161 * C1069 + C3093 * C1131 + C3162 * C2595 + C30146 * C2657) *
               C19894 +
           (C3161 * C1181 + C3093 * C1413 + C3162 * C2713 + C30146 * C2984) *
               C30148) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3161 * C93 + C3093 * C156 + C3162 * C630 + C30146 * C692) *
               C19893 +
           (C3161 * C223 + C3093 * C498 + C3162 * C742 + C30146 * C974) *
               C19789 +
           (C3161 * C1071 + C3093 * C1133 + C3162 * C2593 + C30146 * C2655) *
               C19894 +
           (C3161 * C1183 + C3093 * C1415 + C3162 * C2711 + C30146 * C2982) *
               C30148) *
              C29981 * C30030 * C624 -
          ((C3162 * C6213 + C30146 * C6590 + C3161 * C2711 + C3093 * C2982) *
               C30148 +
           (C3162 * C6059 + C30146 * C6143 + C3161 * C2593 + C3093 * C2655) *
               C19894 +
           (C3162 * C743 + C30146 * C975 + C3161 * C742 + C3093 * C974) *
               C19789 +
           (C3162 * C631 + C30146 * C693 + C3161 * C630 + C3093 * C692) *
               C19893) *
              C29981 * C30030 * C625 +
          ((C3161 * C631 + C3093 * C693 + C3162 * C3641 + C30146 * C3721) *
               C19893 +
           (C3161 * C743 + C3093 * C975 + C3162 * C3775 + C30146 * C4116) *
               C19789 +
           (C3161 * C6059 + C3093 * C6143 + C3162 * C15828 + C30146 * C15894) *
               C19894 +
           (C3161 * C6213 + C3093 * C6590 + C3162 * C15946 + C30146 * C16240) *
               C30148) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                      C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                         C3093 +
                     (C20239 * C630 + C20723 + C20723 + C19789 * C1018 +
                      C20240 * C2593 + C20722 + C20722 + C30148 * C3035) *
                         C30146) *
                        C29981 * C30030 * C30016 * C84 -
                    ((C21882 + C21883) * C30146 + (C20267 + C20266) * C3093) *
                        C29981 * C30030 * C30016 * C85 +
                    ((C20269 + C20268) * C3093 +
                     (C20239 * C628 + C21876 + C21876 + C19789 * C1016 +
                      C20240 * C2595 + C21877 + C21877 + C30148 * C3037) *
                         C30146) *
                        C29981 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C20239 * C93 + C20242 + C20242 + C19789 * C558 +
                      C20240 * C1071 + C20243 + C20243 + C30148 * C1459) *
                         C3093 +
                     (C24120 + C24121) * C30146) *
                        C29981 * C30030 * C624 -
                    ((C24122 + C24123) * C30146 + (C24121 + C24120) * C3093) *
                        C29981 * C30030 * C625 +
                    ((C24123 + C24122) * C3093 +
                     (C20239 * C3641 + C24110 + C24110 + C19789 * C4168 +
                      C20240 * C15828 + C24111 + C24111 + C30148 * C16291) *
                         C30146) *
                        C29981 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexx[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C26541 +
            C17340 * C26542 + C17342 * C26543) *
               C30075 * C30030 * C1519 -
           (C17341 * C26543 + C15842 * C26542 + C14081 * C26541) * C30075 *
               C30030 * C1520) *
              C1521 +
          ((C14890 * C26541 + C17919 * C26542 +
            (C13695 * C4238 + C18531 + C18531 + C29981 * C4242) * C26543) *
               C30075 * C30030 * C1520 -
           ((C13695 * C1073 + C18530 + C18530 + C29981 * C1085) * C26543 +
            C18534 * C26542 +
            (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C26541) *
               C30075 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexy[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C30075 * C156) * C13696 +
                       (C155 * C98 + C30075 * C161) * C29981) *
                          C26541 +
                      (C27301 + C27302) * C26542 + C27309 * C26543) *
                         C30030 * C1519 -
                     (((C155 * C4239 + C30075 * C4303) * C29981 +
                       (C155 * C4237 + C30075 * C4301) * C13696) *
                          C26543 +
                      (C9701 * C29981 + C9700 * C13696) * C26542 +
                      ((C155 * C636 + C30075 * C698) * C29981 +
                       (C155 * C630 + C30075 * C692) * C13696) *
                          C26541) *
                         C30030 * C1520) *
                        C1521 +
                    (((C1593 * C13696 + C1592 * C29981) * C26541 +
                      (C8393 * C13696 + C8392 * C29981) * C26542 +
                      ((C155 * C4238 + C30075 * C4302) * C13696 +
                       (C155 * C4240 + C30075 * C4304) * C29981) *
                          C26543) *
                         C30030 * C1520 -
                     ((C7806 * C29981 + C7807 * C13696) * C26543 +
                      (C2128 * C29981 + C2129 * C13696) * C26542 +
                      (C180 * C29981 + C179 * C13696) * C26541) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                       C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                          C13696 +
                      (C26621 * C98 + C26541 * C228 + C26622 * C1077 +
                       C26542 * C1189 + C26623 * C1078 + C26543 * C1190) *
                          C29981) *
                         C30075 * C30030 * C1519 -
                     ((C26623 * C4239 + C26543 * C4357 + C26622 * C2596 +
                       C26542 * C2714 + C26621 * C636 + C26541 * C748) *
                          C29981 +
                      (C26623 * C4237 + C26543 * C4355 + C26622 * C2593 +
                       C26542 * C2711 + C26621 * C630 + C26541 * C742) *
                          C13696) *
                         C30075 * C30030 * C1520) *
                        C1521 +
                    (((C26621 * C629 + C26541 * C741 + C26622 * C2594 +
                       C26542 * C2712 + C26623 * C4238 + C26543 * C4356) *
                          C13696 +
                      (C26621 * C635 + C26541 * C747 + C26622 * C2597 +
                       C26542 * C2715 + C26623 * C4240 + C26543 * C4358) *
                          C29981) *
                         C30075 * C30030 * C1520 -
                     ((C26623 * C1079 + C26543 * C1191 + C26622 * C1076 +
                       C26542 * C1188 + C26621 * C99 + C26541 * C229) *
                          C29981 +
                      (C26623 * C1073 + C26543 * C1185 + C26622 * C1070 +
                       C26542 * C1182 + C26621 * C94 + C26541 * C224) *
                          C13696) *
                         C30075 * C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C155 +
                       (C13696 * C156 + C29981 * C289) * C30075) *
                          C26541 +
                      (C27393 + C27394) * C26542 + C27401 * C26543) *
                         C30030 * C1519 -
                     ((C17538 * C30075 + C17539 * C155) * C26543 +
                      (C16020 * C30075 + C16021 * C155) * C26542 +
                      (C14232 * C30075 + C14231 * C155) * C26541) *
                         C30030 * C1520) *
                        C1521 +
                    (((C15056 * C155 + C15057 * C30075) * C26541 +
                      (C18123 * C155 + C18124 * C30075) * C26542 +
                      ((C13696 * C4238 + C29981 * C4240) * C155 +
                       (C13696 * C4302 + C29981 * C4410) * C30075) *
                          C26543) *
                         C30030 * C1520 -
                     (((C13696 * C1135 + C29981 * C1235) * C30075 +
                       (C13696 * C1073 + C29981 * C1079) * C155) *
                          C26543 +
                      (C18740 * C30075 + C18739 * C155) * C26542 +
                      ((C13696 * C157 + C29981 * C290) * C30075 +
                       (C13696 * C94 + C29981 * C99) * C155) *
                          C26541) *
                         C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C29981 * C26541 +
            C27445 * C26542 + C27446 * C26543) *
               C30030 * C1519 -
           ((C332 * C4237 + C9905 + C9905 + C30075 * C4461) * C29981 * C26543 +
            C9909 * C29981 * C26542 +
            (C332 * C630 + C843 + C843 + C30075 * C836) * C29981 * C26541) *
               C30030 * C1520) *
              C1521 +
          ((C1770 * C29981 * C26541 + C8608 * C29981 * C26542 +
            (C332 * C4238 + C9906 + C9906 + C30075 * C4462) * C29981 * C26543) *
               C30030 * C1520 -
           (C8014 * C29981 * C26543 + C2306 * C29981 * C26542 +
            C356 * C29981 * C26541) *
               C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                       C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                          C155 +
                      (C26621 * C156 + C26541 * C396 + C26622 * C1133 +
                       C26542 * C1327 + C26623 * C1134 + C26543 * C1328) *
                          C30075) *
                         C29981 * C30030 * C1519 -
                     ((C26623 * C4301 + C26543 * C4521 + C26622 * C2655 +
                       C26542 * C2876 + C26621 * C692 + C26541 * C886) *
                          C30075 +
                      (C26623 * C4237 + C26543 * C4355 + C26622 * C2593 +
                       C26542 * C2711 + C26621 * C630 + C26541 * C742) *
                          C155) *
                         C29981 * C30030 * C1520) *
                        C1521 +
                    (((C26621 * C629 + C26541 * C741 + C26622 * C2594 +
                       C26542 * C2712 + C26623 * C4238 + C26543 * C4356) *
                          C155 +
                      (C26621 * C691 + C26541 * C885 + C26622 * C2656 +
                       C26542 * C2877 + C26623 * C4302 + C26543 * C4522) *
                          C30075) *
                         C29981 * C30030 * C1520 -
                     ((C26623 * C1135 + C26543 * C1329 + C26622 * C1132 +
                       C26542 * C1326 + C26621 * C157 + C26541 * C397) *
                          C30075 +
                      (C26623 * C1073 + C26543 * C1185 + C26622 * C1070 +
                       C26542 * C1182 + C26621 * C94 + C26541 * C224) *
                          C155) *
                         C29981 * C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C26621 +
            (C13696 * C223 + C29981 * C455) * C26541 + C17536 * C26622 +
            C17729 * C26542 + C17541 * C26623 + C17731 * C26543) *
               C30075 * C30030 * C1519 -
           (C17730 * C26543 + C17539 * C26623 + C16188 * C26542 +
            C16021 * C26622 + C14372 * C26541 + C14231 * C26621) *
               C30075 * C30030 * C1520) *
              C1521 +
          ((C15056 * C26621 + C15219 * C26541 + C18123 * C26622 +
            C18328 * C26542 + (C13696 * C4238 + C29981 * C4240) * C26623 +
            (C13696 * C4356 + C29981 * C4574) * C26543) *
               C30075 * C30030 * C1520 -
           ((C13696 * C1185 + C29981 * C1373) * C26543 +
            (C13696 * C1073 + C29981 * C1079) * C26623 + C18943 * C26542 +
            C18739 * C26622 + (C13696 * C224 + C29981 * C456) * C26541 +
            (C13696 * C94 + C29981 * C99) * C26621) *
               C30075 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C26621 +
            (C155 * C223 + C30075 * C498) * C26541 + C7804 * C26622 +
            C8193 * C26542 + C7809 * C26623 + C8195 * C26543) *
               C29981 * C30030 * C1519 -
           ((C155 * C4355 + C30075 * C4625) * C26543 +
            (C155 * C4237 + C30075 * C4301) * C26623 + C10111 * C26542 +
            C9700 * C26622 + (C155 * C742 + C30075 * C974) * C26541 +
            (C155 * C630 + C30075 * C692) * C26621) *
               C29981 * C30030 * C1520) *
              C1521 +
          ((C1593 * C26621 + C1941 * C26541 + C8393 * C26622 + C8818 * C26542 +
            (C155 * C4238 + C30075 * C4302) * C26623 +
            (C155 * C4356 + C30075 * C4626) * C26543) *
               C29981 * C30030 * C1520 -
           (C8194 * C26543 + C7807 * C26623 + C2477 * C26542 + C2129 * C26622 +
            C513 * C26541 + C179 * C26621) *
               C29981 * C30030 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C26852 * C93 + C26856 + C26856 + C26541 * C558 +
                      C26853 * C1071 + C26857 + C26857 + C26542 * C1459 +
                      C26854 * C1072 + C26858 + C26858 + C26543 * C1460) *
                         C30075 * C29981 * C30030 * C1519 -
                     (C26854 * C4237 + C27208 + C27208 + C26543 * C4677 +
                      C26853 * C2593 + C27209 + C27209 + C26542 * C3035 +
                      C26852 * C630 + C27210 + C27210 + C26541 * C1018) *
                         C30075 * C29981 * C30030 * C1520) *
                        C1521 +
                    ((C26852 * C629 + C28072 + C28072 + C26541 * C1017 +
                      C26853 * C2594 + C28073 + C28073 + C26542 * C3036 +
                      C26854 * C4238 + C28074 + C28074 + C26543 * C4678) *
                         C30075 * C29981 * C30030 * C1520 -
                     (C26854 * C1073 + C26859 + C26859 + C26543 * C1461 +
                      C26853 * C1070 + C26860 + C26860 + C26542 * C1458 +
                      C26852 * C94 + C26861 + C26861 + C26541 * C559) *
                         C30075 * C29981 * C30030 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C26541 +
            C17340 * C26542 + C17342 * C26543) *
               C30075 * C2057 -
           (C27260 * C26543 + C17342 * C26542 + C17340 * C26541) * C30075 *
               C2058) *
              C1519 +
          ((C15842 * C26541 + C17341 * C26542 +
            (C13695 * C17322 + C17333 + C17333 + C29981 * C17324) * C26543) *
               C30075 * C2058 -
           (C17341 * C26543 + C15842 * C26542 + C14081 * C26541) * C30075 *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eexy[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C30075 * C156) * C13696 +
                       (C155 * C98 + C30075 * C161) * C29981) *
                          C26541 +
                      (C27301 + C27302) * C26542 + C27309 * C26543) *
                         C2057 -
                     ((C27312 + C27313) * C26543 + (C27304 + C27303) * C26542 +
                      (C27302 + C27301) * C26541) *
                         C2058) *
                        C1519 +
                    (((C28653 + C28654) * C26541 + (C28661 + C28662) * C26542 +
                      ((C155 * C17322 + C30075 * C17392) * C13696 +
                       (C155 * C17323 + C30075 * C17393) * C29981) *
                          C26543) *
                         C2058 -
                     ((C28662 + C28661) * C26543 + (C28654 + C28653) * C26542 +
                      ((C155 * C636 + C30075 * C698) * C29981 +
                       (C155 * C630 + C30075 * C692) * C13696) *
                          C26541) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eexz[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                       C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                          C13696 +
                      (C26621 * C98 + C26541 * C228 + C26622 * C1077 +
                       C26542 * C1189 + C26623 * C1078 + C26543 * C1190) *
                          C29981) *
                         C30075 * C2057 -
                     ((C26623 * C7709 + C26543 * C7867 + C26622 * C1078 +
                       C26542 * C1190 + C26621 * C1077 + C26541 * C1189) *
                          C29981 +
                      (C26623 * C7707 + C26543 * C7865 + C26622 * C1072 +
                       C26542 * C1184 + C26621 * C1071 + C26541 * C1183) *
                          C13696) *
                         C30075 * C2058) *
                        C1519 +
                    (((C26621 * C2593 + C26541 * C2711 + C26622 * C4237 +
                       C26542 * C4355 + C26623 * C17322 + C26543 * C17468) *
                          C13696 +
                      (C26621 * C2596 + C26541 * C2714 + C26622 * C4239 +
                       C26542 * C4357 + C26623 * C17323 + C26543 * C17469) *
                          C29981) *
                         C30075 * C2058 -
                     ((C26623 * C4239 + C26543 * C4357 + C26622 * C2596 +
                       C26542 * C2714 + C26621 * C636 + C26541 * C748) *
                          C29981 +
                      (C26623 * C4237 + C26543 * C4355 + C26622 * C2593 +
                       C26542 * C2711 + C26621 * C630 + C26541 * C742) *
                          C13696) *
                         C30075 * C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C155 +
                       (C13696 * C156 + C29981 * C289) * C30075) *
                          C26541 +
                      (C27393 + C27394) * C26542 + C27401 * C26543) *
                         C2057 -
                     ((C27404 + C27405) * C26543 + (C27396 + C27395) * C26542 +
                      (C27394 + C27393) * C26541) *
                         C2058) *
                        C1519 +
                    (((C28763 + C28764) * C26541 + (C28765 + C28766) * C26542 +
                      ((C13696 * C17322 + C29981 * C17323) * C155 +
                       (C13696 * C17392 + C29981 * C17520) * C30075) *
                          C26543) *
                         C2058 -
                     ((C28766 + C28765) * C26543 + (C28764 + C28763) * C26542 +
                      (C14232 * C30075 + C14231 * C155) * C26541) *
                         C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C29981 * C26541 +
            C27445 * C26542 + C27446 * C26543) *
               C2057 -
           (C27453 * C26543 + C27446 * C26542 + C27445 * C26541) * C2058) *
              C1519 +
          ((C28817 * C26541 + C28824 * C26542 +
            (C332 * C17322 + C28820 + C28820 + C30075 * C17597) * C29981 *
                C26543) *
               C2058 -
           (C28824 * C26543 + C28817 * C26542 +
            (C332 * C630 + C843 + C843 + C30075 * C836) * C29981 * C26541) *
               C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eeyz[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                       C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                          C155 +
                      (C26621 * C156 + C26541 * C396 + C26622 * C1133 +
                       C26542 * C1327 + C26623 * C1134 + C26543 * C1328) *
                          C30075) *
                         C29981 * C2057 -
                     ((C26623 * C7785 + C26543 * C8068 + C26622 * C1134 +
                       C26542 * C1328 + C26621 * C1133 + C26541 * C1327) *
                          C30075 +
                      (C26623 * C7707 + C26543 * C7865 + C26622 * C1072 +
                       C26542 * C1184 + C26621 * C1071 + C26541 * C1183) *
                          C155) *
                         C29981 * C2058) *
                        C1519 +
                    (((C26621 * C2593 + C26541 * C2711 + C26622 * C4237 +
                       C26542 * C4355 + C26623 * C17322 + C26543 * C17468) *
                          C155 +
                      (C26621 * C2655 + C26541 * C2876 + C26622 * C4301 +
                       C26542 * C4521 + C26623 * C17392 + C26543 * C17670) *
                          C30075) *
                         C29981 * C2058 -
                     ((C26623 * C4301 + C26543 * C4521 + C26622 * C2655 +
                       C26542 * C2876 + C26621 * C692 + C26541 * C886) *
                          C30075 +
                      (C26623 * C4237 + C26543 * C4355 + C26622 * C2593 +
                       C26542 * C2711 + C26621 * C630 + C26541 * C742) *
                          C155) *
                         C29981 * C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eezx[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C26621 +
            (C13696 * C223 + C29981 * C455) * C26541 + C17536 * C26622 +
            C17729 * C26542 + C17541 * C26623 + C17731 * C26543) *
               C30075 * C2057 -
           (C27534 * C26543 + C27403 * C26623 + C17731 * C26542 +
            C17541 * C26622 + C17729 * C26541 + C17536 * C26621) *
               C30075 * C2058) *
              C1519 +
          ((C16021 * C26621 + C16188 * C26541 + C17539 * C26622 +
            C17730 * C26542 + (C13696 * C17322 + C29981 * C17323) * C26623 +
            (C13696 * C17468 + C29981 * C17721) * C26543) *
               C30075 * C2058 -
           (C17730 * C26543 + C17539 * C26623 + C16188 * C26542 +
            C16021 * C26622 + C14372 * C26541 + C14231 * C26621) *
               C30075 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezy[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C26621 +
            (C155 * C223 + C30075 * C498) * C26541 + C7804 * C26622 +
            C8193 * C26542 + C7809 * C26623 + C8195 * C26543) *
               C29981 * C2057 -
           (C27576 * C26543 + C27311 * C26623 + C8195 * C26542 +
            C7809 * C26622 + C8193 * C26541 + C7804 * C26621) *
               C29981 * C2058) *
              C1519 +
          ((C9700 * C26621 + C10111 * C26541 + C28659 * C26622 +
            C28977 * C26542 + (C155 * C17322 + C30075 * C17392) * C26623 +
            (C155 * C17468 + C30075 * C17781) * C26543) *
               C29981 * C2058 -
           (C28977 * C26543 + C28659 * C26623 + C10111 * C26542 +
            C9700 * C26622 + (C155 * C742 + C30075 * C974) * C26541 +
            (C155 * C630 + C30075 * C692) * C26621) *
               C29981 * C2057) *
              C1520) *
         C30004) /
        (p * q * std::sqrt(p + q));
    d2eezz[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C26852 * C93 + C26856 + C26856 + C26541 * C558 +
                      C26853 * C1071 + C26857 + C26857 + C26542 * C1459 +
                      C26854 * C1072 + C26858 + C26858 + C26543 * C1460) *
                         C30075 * C29981 * C2057 -
                     (C26854 * C7707 + C27616 + C27616 + C26543 * C8245 +
                      C26853 * C1072 + C27617 + C27617 + C26542 * C1460 +
                      C26852 * C1071 + C27618 + C27618 + C26541 * C1459) *
                         C30075 * C29981 * C2058) *
                        C1519 +
                    ((C26852 * C2593 + C29028 + C29028 + C26541 * C3035 +
                      C26853 * C4237 + C29029 + C29029 + C26542 * C4677 +
                      C26854 * C17322 + C29030 + C29030 + C26543 * C17844) *
                         C30075 * C29981 * C2058 -
                     (C26854 * C4237 + C27208 + C27208 + C26543 * C4677 +
                      C26853 * C2593 + C27209 + C27209 + C26542 * C3035 +
                      C26852 * C630 + C27210 + C27210 + C26541 * C1018) *
                         C30075 * C29981 * C2057) *
                        C1520) *
                   C30004) /
                  (p * q * std::sqrt(p + q));
    d2eexx[42] +=
        (-std::pow(Pi, 2.5) *
         (((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C26541 +
           C17340 * C26542 + C17342 * C26543) *
              C30075 * C30030 * C624 -
          (C17341 * C26543 + C15842 * C26542 + C14081 * C26541) * C30075 *
              C30030 * C625 +
          (C14082 * C26541 + C15841 * C26542 +
           (C13695 * C14500 + C14509 + C14509 + C29981 * C14502) * C26543) *
              C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C26541 +
           C17340 * C26542 + C17342 * C26543) *
              C30075 * C30030 * C30016 * C84 -
          ((C13695 * C1073 + C18530 + C18530 + C29981 * C1085) * C26543 +
           C18534 * C26542 +
           (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C26541) *
              C30075 * C30030 * C30016 * C85 +
          ((C13695 * C95 + C13704 + C13704 + C29981 * C105) * C26541 +
           (C13695 * C1069 + C16349 + C16349 + C29981 * C1081) * C26542 +
           (C13695 * C1074 + C26545 + C26545 + C29981 * C1086) * C26543) *
              C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C26541 +
           C17340 * C26542 + C17342 * C26543) *
              C30075 * C1066 -
          (C27260 * C26543 + C17342 * C26542 + C17340 * C26541) * C30075 *
              C1067 +
          (C17342 * C26541 + C27260 * C26542 +
           (C13695 * C27251 + C27257 + C27257 + C29981 * C27253) * C26543) *
              C30075 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexy[42] +=
        (-std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C13696 +
            (C155 * C98 + C30075 * C161) * C29981) *
               C26541 +
           (C7804 * C13696 + C7805 * C29981) * C26542 +
           (C7809 * C13696 + C7808 * C29981) * C26543) *
              C30030 * C624 -
          (((C155 * C4239 + C30075 * C4303) * C29981 +
            (C155 * C4237 + C30075 * C4301) * C13696) *
               C26543 +
           (C9701 * C29981 + C9700 * C13696) * C26542 +
           ((C155 * C636 + C30075 * C698) * C29981 +
            (C155 * C630 + C30075 * C692) * C13696) *
               C26541) *
              C30030 * C625 +
          (((C155 * C631 + C30075 * C693) * C13696 +
            (C155 * C637 + C30075 * C699) * C29981) *
               C26541 +
           ((C155 * C6059 + C30075 * C6143) * C13696 +
            (C155 * C6061 + C30075 * C6145) * C29981) *
               C26542 +
           ((C155 * C14500 + C30075 * C14547) * C13696 +
            (C155 * C14501 + C30075 * C14548) * C29981) *
               C26543) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C155 * C93 + C30075 * C156) * C13696 +
                                (C155 * C98 + C30075 * C161) * C29981) *
                                   C26541 +
                               (C7804 * C13696 + C7805 * C29981) * C26542 +
                               (C7809 * C13696 + C7808 * C29981) * C26543) *
                                  C30030 * C30016 * C84 -
                              ((C7806 * C29981 + C7807 * C13696) * C26543 +
                               (C2128 * C29981 + C2129 * C13696) * C26542 +
                               (C180 * C29981 + C179 * C13696) * C26541) *
                                  C30030 * C30016 * C85 +
                              ((C181 * C13696 + C182 * C29981) * C26541 +
                               (C2127 * C13696 + C2126 * C29981) * C26542 +
                               ((C155 * C1074 + C30075 * C1136) * C13696 +
                                (C155 * C1080 + C30075 * C1142) * C29981) *
                                   C26543) *
                                  C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C13696 +
            (C155 * C98 + C30075 * C161) * C29981) *
               C26541 +
           (C27301 + C27302) * C26542 + C27309 * C26543) *
              C1066 -
          ((C27312 + C27313) * C26543 + (C27304 + C27303) * C26542 +
           (C27302 + C27301) * C26541) *
              C1067 +
          (C27309 * C26541 + (C27313 + C27312) * C26542 +
           ((C155 * C27251 + C30075 * C27298) * C13696 +
            (C155 * C27252 + C30075 * C27299) * C29981) *
               C26543) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eexz[42] += (-std::pow(Pi, 2.5) *
                   (((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                      C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                         C13696 +
                     (C26621 * C98 + C26541 * C228 + C26622 * C1077 +
                      C26542 * C1189 + C26623 * C1078 + C26543 * C1190) *
                         C29981) *
                        C30075 * C30030 * C624 -
                    ((C26623 * C4239 + C26543 * C4357 + C26622 * C2596 +
                      C26542 * C2714 + C26621 * C636 + C26541 * C748) *
                         C29981 +
                     (C26623 * C4237 + C26543 * C4355 + C26622 * C2593 +
                      C26542 * C2711 + C26621 * C630 + C26541 * C742) *
                         C13696) *
                        C30075 * C30030 * C625 +
                    ((C26621 * C631 + C26541 * C743 + C26622 * C6059 +
                      C26542 * C6213 + C26623 * C14500 + C26543 * C14587) *
                         C13696 +
                     (C26621 * C637 + C26541 * C749 + C26622 * C6061 +
                      C26542 * C6215 + C26623 * C14501 + C26543 * C14588) *
                         C29981) *
                        C30075 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                      C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                         C13696 +
                     (C26621 * C98 + C26541 * C228 + C26622 * C1077 +
                      C26542 * C1189 + C26623 * C1078 + C26543 * C1190) *
                         C29981) *
                        C30075 * C30030 * C30016 * C84 -
                    ((C26623 * C1079 + C26543 * C1191 + C26622 * C1076 +
                      C26542 * C1188 + C26621 * C99 + C26541 * C229) *
                         C29981 +
                     (C26623 * C1073 + C26543 * C1185 + C26622 * C1070 +
                      C26542 * C1182 + C26621 * C94 + C26541 * C224) *
                         C13696) *
                        C30075 * C30030 * C30016 * C85 +
                    ((C26621 * C95 + C26541 * C225 + C26622 * C1069 +
                      C26542 * C1181 + C26623 * C1074 + C26543 * C1186) *
                         C13696 +
                     (C26621 * C100 + C26541 * C230 + C26622 * C1075 +
                      C26542 * C1187 + C26623 * C1080 + C26543 * C1192) *
                         C29981) *
                        C30075 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                      C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                         C13696 +
                     (C26621 * C98 + C26541 * C228 + C26622 * C1077 +
                      C26542 * C1189 + C26623 * C1078 + C26543 * C1190) *
                         C29981) *
                        C30075 * C1066 -
                    ((C26623 * C7709 + C26543 * C7867 + C26622 * C1078 +
                      C26542 * C1190 + C26621 * C1077 + C26541 * C1189) *
                         C29981 +
                     (C26623 * C7707 + C26543 * C7865 + C26622 * C1072 +
                      C26542 * C1184 + C26621 * C1071 + C26541 * C1183) *
                         C13696) *
                        C30075 * C1067 +
                    ((C26621 * C1072 + C26541 * C1184 + C26622 * C7707 +
                      C26542 * C7865 + C26623 * C27251 + C26543 * C27351) *
                         C13696 +
                     (C26621 * C1078 + C26541 * C1190 + C26622 * C7709 +
                      C26542 * C7867 + C26623 * C27252 + C26543 * C27352) *
                         C29981) *
                        C30075 * C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[42] +=
        (-std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C155 +
            (C13696 * C156 + C29981 * C289) * C30075) *
               C26541 +
           (C17536 * C155 + C17537 * C30075) * C26542 +
           (C17541 * C155 + C17540 * C30075) * C26543) *
              C30030 * C624 -
          ((C17538 * C30075 + C17539 * C155) * C26543 +
           (C16020 * C30075 + C16021 * C155) * C26542 +
           (C14232 * C30075 + C14231 * C155) * C26541) *
              C30030 * C625 +
          ((C14233 * C155 + C14234 * C30075) * C26541 +
           (C16019 * C155 + C16018 * C30075) * C26542 +
           ((C13696 * C14500 + C29981 * C14501) * C155 +
            (C13696 * C14547 + C29981 * C14627) * C30075) *
               C26543) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C13696 * C93 + C29981 * C98) * C155 +
                                (C13696 * C156 + C29981 * C289) * C30075) *
                                   C26541 +
                               (C17536 * C155 + C17537 * C30075) * C26542 +
                               (C17541 * C155 + C17540 * C30075) * C26543) *
                                  C30030 * C30016 * C84 -
                              (((C13696 * C1135 + C29981 * C1235) * C30075 +
                                (C13696 * C1073 + C29981 * C1079) * C155) *
                                   C26543 +
                               (C18740 * C30075 + C18739 * C155) * C26542 +
                               ((C13696 * C157 + C29981 * C290) * C30075 +
                                (C13696 * C94 + C29981 * C99) * C155) *
                                   C26541) *
                                  C30030 * C30016 * C85 +
                              (((C13696 * C95 + C29981 * C100) * C155 +
                                (C13696 * C158 + C29981 * C291) * C30075) *
                                   C26541 +
                               ((C13696 * C1069 + C29981 * C1075) * C155 +
                                (C13696 * C1131 + C29981 * C1231) * C30075) *
                                   C26542 +
                               ((C13696 * C1074 + C29981 * C1080) * C155 +
                                (C13696 * C1136 + C29981 * C1236) * C30075) *
                                   C26543) *
                                  C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C155 +
            (C13696 * C156 + C29981 * C289) * C30075) *
               C26541 +
           (C27393 + C27394) * C26542 + C27401 * C26543) *
              C1066 -
          ((C27404 + C27405) * C26543 + (C27396 + C27395) * C26542 +
           (C27394 + C27393) * C26541) *
              C1067 +
          (C27401 * C26541 + (C27405 + C27404) * C26542 +
           ((C13696 * C27251 + C29981 * C27252) * C155 +
            (C13696 * C27298 + C29981 * C27391) * C30075) *
               C26543) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyy[42] +=
        (-std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C30075 * C333) * C29981 * C26541 +
           C8013 * C29981 * C26542 + C8015 * C29981 * C26543) *
              C30030 * C624 -
          ((C332 * C4237 + C9905 + C9905 + C30075 * C4461) * C29981 * C26543 +
           C9909 * C29981 * C26542 +
           (C332 * C630 + C843 + C843 + C30075 * C836) * C29981 * C26541) *
              C30030 * C625 +
          ((C332 * C631 + C844 + C844 + C30075 * C837) * C29981 * C26541 +
           (C332 * C6059 + C7448 + C7448 + C30075 * C6373) * C29981 * C26542 +
           (C332 * C14500 + C27055 + C27055 + C30075 * C14666) * C29981 *
               C26543) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C30075 * C333) * C29981 * C26541 +
           C8013 * C29981 * C26542 + C8015 * C29981 * C26543) *
              C30030 * C30016 * C84 -
          (C8014 * C29981 * C26543 + C2306 * C29981 * C26542 +
           C356 * C29981 * C26541) *
              C30030 * C30016 * C85 +
          (C357 * C29981 * C26541 + C2305 * C29981 * C26542 +
           (C332 * C1074 + C1287 + C1287 + C30075 * C1280) * C29981 * C26543) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C30075 * C333) * C29981 * C26541 +
           C27445 * C26542 + C27446 * C26543) *
              C1066 -
          (C27453 * C26543 + C27446 * C26542 + C27445 * C26541) * C1067 +
          (C27446 * C26541 + C27453 * C26542 +
           (C332 * C27251 + C27449 + C27449 + C30075 * C27443) * C29981 *
               C26543) *
              C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyz[42] += (-std::pow(Pi, 2.5) *
                   (((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                      C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                         C155 +
                     (C26621 * C156 + C26541 * C396 + C26622 * C1133 +
                      C26542 * C1327 + C26623 * C1134 + C26543 * C1328) *
                         C30075) *
                        C29981 * C30030 * C624 -
                    ((C26623 * C4301 + C26543 * C4521 + C26622 * C2655 +
                      C26542 * C2876 + C26621 * C692 + C26541 * C886) *
                         C30075 +
                     (C26623 * C4237 + C26543 * C4355 + C26622 * C2593 +
                      C26542 * C2711 + C26621 * C630 + C26541 * C742) *
                         C155) *
                        C29981 * C30030 * C625 +
                    ((C26621 * C631 + C26541 * C743 + C26622 * C6059 +
                      C26542 * C6213 + C26623 * C14500 + C26543 * C14587) *
                         C155 +
                     (C26621 * C693 + C26541 * C887 + C26622 * C6143 +
                      C26542 * C6445 + C26623 * C14547 + C26543 * C14711) *
                         C30075) *
                        C29981 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                      C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                         C155 +
                     (C26621 * C156 + C26541 * C396 + C26622 * C1133 +
                      C26542 * C1327 + C26623 * C1134 + C26543 * C1328) *
                         C30075) *
                        C29981 * C30030 * C30016 * C84 -
                    ((C26623 * C1135 + C26543 * C1329 + C26622 * C1132 +
                      C26542 * C1326 + C26621 * C157 + C26541 * C397) *
                         C30075 +
                     (C26623 * C1073 + C26543 * C1185 + C26622 * C1070 +
                      C26542 * C1182 + C26621 * C94 + C26541 * C224) *
                         C155) *
                        C29981 * C30030 * C30016 * C85 +
                    ((C26621 * C95 + C26541 * C225 + C26622 * C1069 +
                      C26542 * C1181 + C26623 * C1074 + C26543 * C1186) *
                         C155 +
                     (C26621 * C158 + C26541 * C398 + C26622 * C1131 +
                      C26542 * C1325 + C26623 * C1136 + C26543 * C1330) *
                         C30075) *
                        C29981 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                      C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                         C155 +
                     (C26621 * C156 + C26541 * C396 + C26622 * C1133 +
                      C26542 * C1327 + C26623 * C1134 + C26543 * C1328) *
                         C30075) *
                        C29981 * C1066 -
                    ((C26623 * C7785 + C26543 * C8068 + C26622 * C1134 +
                      C26542 * C1328 + C26621 * C1133 + C26541 * C1327) *
                         C30075 +
                     (C26623 * C7707 + C26543 * C7865 + C26622 * C1072 +
                      C26542 * C1184 + C26621 * C1071 + C26541 * C1183) *
                         C155) *
                        C29981 * C1067 +
                    ((C26621 * C1072 + C26541 * C1184 + C26622 * C7707 +
                      C26542 * C7865 + C26623 * C27251 + C26543 * C27351) *
                         C155 +
                     (C26621 * C1134 + C26541 * C1328 + C26622 * C7785 +
                      C26542 * C8068 + C26623 * C27298 + C26543 * C27491) *
                         C30075) *
                        C29981 * C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eezx[42] +=
        (-std::pow(Pi, 2.5) *
         (((C13696 * C93 + C29981 * C98) * C26621 +
           (C13696 * C223 + C29981 * C455) * C26541 + C17536 * C26622 +
           C17729 * C26542 + C17541 * C26623 + C17731 * C26543) *
              C30075 * C30030 * C624 -
          (C17730 * C26543 + C17539 * C26623 + C16188 * C26542 +
           C16021 * C26622 + C14372 * C26541 + C14231 * C26621) *
              C30075 * C30030 * C625 +
          (C14233 * C26621 + C14373 * C26541 + C16019 * C26622 +
           C16187 * C26542 + (C13696 * C14500 + C29981 * C14501) * C26623 +
           (C13696 * C14587 + C29981 * C14750) * C26543) *
              C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C13696 * C93 + C29981 * C98) * C26621 +
           (C13696 * C223 + C29981 * C455) * C26541 + C17536 * C26622 +
           C17729 * C26542 + C17541 * C26623 + C17731 * C26543) *
              C30075 * C30030 * C30016 * C84 -
          ((C13696 * C1185 + C29981 * C1373) * C26543 +
           (C13696 * C1073 + C29981 * C1079) * C26623 + C18943 * C26542 +
           C18739 * C26622 + (C13696 * C224 + C29981 * C456) * C26541 +
           (C13696 * C94 + C29981 * C99) * C26621) *
              C30075 * C30030 * C30016 * C85 +
          ((C13696 * C95 + C29981 * C100) * C26621 +
           (C13696 * C225 + C29981 * C457) * C26541 +
           (C13696 * C1069 + C29981 * C1075) * C26622 +
           (C13696 * C1181 + C29981 * C1369) * C26542 +
           (C13696 * C1074 + C29981 * C1080) * C26623 +
           (C13696 * C1186 + C29981 * C1374) * C26543) *
              C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C13696 * C93 + C29981 * C98) * C26621 +
           (C13696 * C223 + C29981 * C455) * C26541 + C17536 * C26622 +
           C17729 * C26542 + C17541 * C26623 + C17731 * C26543) *
              C30075 * C1066 -
          (C27534 * C26543 + C27403 * C26623 + C17731 * C26542 +
           C17541 * C26622 + C17729 * C26541 + C17536 * C26621) *
              C30075 * C1067 +
          (C17541 * C26621 + C17731 * C26541 + C27403 * C26622 +
           C27534 * C26542 + (C13696 * C27251 + C29981 * C27252) * C26623 +
           (C13696 * C27351 + C29981 * C27530) * C26543) *
              C30075 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezy[42] +=
        (-std::pow(Pi, 2.5) *
         (((C155 * C93 + C30075 * C156) * C26621 +
           (C155 * C223 + C30075 * C498) * C26541 + C7804 * C26622 +
           C8193 * C26542 + C7809 * C26623 + C8195 * C26543) *
              C29981 * C30030 * C624 -
          ((C155 * C4355 + C30075 * C4625) * C26543 +
           (C155 * C4237 + C30075 * C4301) * C26623 + C10111 * C26542 +
           C9700 * C26622 + (C155 * C742 + C30075 * C974) * C26541 +
           (C155 * C630 + C30075 * C692) * C26621) *
              C29981 * C30030 * C625 +
          ((C155 * C631 + C30075 * C693) * C26621 +
           (C155 * C743 + C30075 * C975) * C26541 +
           (C155 * C6059 + C30075 * C6143) * C26622 +
           (C155 * C6213 + C30075 * C6590) * C26542 +
           (C155 * C14500 + C30075 * C14547) * C26623 +
           (C155 * C14587 + C30075 * C14789) * C26543) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C155 * C93 + C30075 * C156) * C26621 +
           (C155 * C223 + C30075 * C498) * C26541 + C7804 * C26622 +
           C8193 * C26542 + C7809 * C26623 + C8195 * C26543) *
              C29981 * C30030 * C30016 * C84 -
          (C8194 * C26543 + C7807 * C26623 + C2477 * C26542 + C2129 * C26622 +
           C513 * C26541 + C179 * C26621) *
              C29981 * C30030 * C30016 * C85 +
          (C181 * C26621 + C514 * C26541 + C2127 * C26622 + C2476 * C26542 +
           (C155 * C1074 + C30075 * C1136) * C26623 +
           (C155 * C1186 + C30075 * C1418) * C26543) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C155 * C93 + C30075 * C156) * C26621 +
           (C155 * C223 + C30075 * C498) * C26541 + C7804 * C26622 +
           C8193 * C26542 + C7809 * C26623 + C8195 * C26543) *
              C29981 * C1066 -
          (C27576 * C26543 + C27311 * C26623 + C8195 * C26542 + C7809 * C26622 +
           C8193 * C26541 + C7804 * C26621) *
              C29981 * C1067 +
          (C7809 * C26621 + C8195 * C26541 + C27311 * C26622 + C27576 * C26542 +
           (C155 * C27251 + C30075 * C27298) * C26623 +
           (C155 * C27351 + C30075 * C27572) * C26543) *
              C29981 * C1068) *
         C30016 * C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[42] += (-std::pow(Pi, 2.5) *
                   ((C26852 * C93 + C26856 + C26856 + C26541 * C558 +
                     C26853 * C1071 + C26857 + C26857 + C26542 * C1459 +
                     C26854 * C1072 + C26858 + C26858 + C26543 * C1460) *
                        C30075 * C29981 * C30030 * C624 -
                    (C26854 * C4237 + C27208 + C27208 + C26543 * C4677 +
                     C26853 * C2593 + C27209 + C27209 + C26542 * C3035 +
                     C26852 * C630 + C27210 + C27210 + C26541 * C1018) *
                        C30075 * C29981 * C30030 * C625 +
                    (C26852 * C631 + C27211 + C27211 + C26541 * C1019 +
                     C26853 * C6059 + C27212 + C27212 + C26542 * C6658 +
                     C26854 * C14500 + C27213 + C27213 + C26543 * C14828) *
                        C30075 * C29981 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C26852 * C93 + C26856 + C26856 + C26541 * C558 +
                     C26853 * C1071 + C26857 + C26857 + C26542 * C1459 +
                     C26854 * C1072 + C26858 + C26858 + C26543 * C1460) *
                        C30075 * C29981 * C30030 * C30016 * C84 -
                    (C26854 * C1073 + C26859 + C26859 + C26543 * C1461 +
                     C26853 * C1070 + C26860 + C26860 + C26542 * C1458 +
                     C26852 * C94 + C26861 + C26861 + C26541 * C559) *
                        C30075 * C29981 * C30030 * C30016 * C85 +
                    (C26852 * C95 + C26862 + C26862 + C26541 * C560 +
                     C26853 * C1069 + C26863 + C26863 + C26542 * C1457 +
                     C26854 * C1074 + C26864 + C26864 + C26543 * C1462) *
                        C30075 * C29981 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C26852 * C93 + C26856 + C26856 + C26541 * C558 +
                     C26853 * C1071 + C26857 + C26857 + C26542 * C1459 +
                     C26854 * C1072 + C26858 + C26858 + C26543 * C1460) *
                        C30075 * C29981 * C1066 -
                    (C26854 * C7707 + C27616 + C27616 + C26543 * C8245 +
                     C26853 * C1072 + C27617 + C27617 + C26542 * C1460 +
                     C26852 * C1071 + C27618 + C27618 + C26541 * C1459) *
                        C30075 * C29981 * C1067 +
                    (C26852 * C1072 + C27619 + C27619 + C26541 * C1460 +
                     C26853 * C7707 + C27620 + C27620 + C26542 * C8245 +
                     C26854 * C27251 + C27621 + C27621 + C26543 * C27614) *
                        C30075 * C29981 * C1068) *
                   C30016 * C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexx[43] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C26541 +
            C17340 * C26542 + C17342 * C26543) *
               C30075 * C2057 -
           (C27260 * C26543 + C17342 * C26542 + C17340 * C26541) * C30075 *
               C2058) *
              C30016 * C1521 +
          ((C18534 * C26541 + C28130 * C26542 +
            (C13695 * C7708 + C28127 + C28127 + C29981 * C7712) * C26543) *
               C30075 * C2058 -
           (C28130 * C26543 + C18534 * C26542 +
            (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C26541) *
               C30075 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexy[43] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C30075 * C156) * C13696 +
                       (C155 * C98 + C30075 * C161) * C29981) *
                          C26541 +
                      (C27301 + C27302) * C26542 + C27309 * C26543) *
                         C2057 -
                     ((C27312 + C27313) * C26543 + (C27304 + C27303) * C26542 +
                      (C27302 + C27301) * C26541) *
                         C2058) *
                        C30016 * C1521 +
                    (((C28181 + C28182) * C26541 + (C28183 + C28184) * C26542 +
                      ((C155 * C7708 + C30075 * C7786) * C13696 +
                       (C155 * C7710 + C30075 * C7788) * C29981) *
                          C26543) *
                         C2058 -
                     ((C28184 + C28183) * C26543 + (C28182 + C28181) * C26542 +
                      (C180 * C29981 + C179 * C13696) * C26541) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[43] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                       C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                          C13696 +
                      (C26621 * C98 + C26541 * C228 + C26622 * C1077 +
                       C26542 * C1189 + C26623 * C1078 + C26543 * C1190) *
                          C29981) *
                         C30075 * C2057 -
                     ((C26623 * C7709 + C26543 * C7867 + C26622 * C1078 +
                       C26542 * C1190 + C26621 * C1077 + C26541 * C1189) *
                          C29981 +
                      (C26623 * C7707 + C26543 * C7865 + C26622 * C1072 +
                       C26542 * C1184 + C26621 * C1071 + C26541 * C1183) *
                          C13696) *
                         C30075 * C2058) *
                        C30016 * C1521 +
                    (((C26621 * C1070 + C26541 * C1182 + C26622 * C1073 +
                       C26542 * C1185 + C26623 * C7708 + C26543 * C7866) *
                          C13696 +
                      (C26621 * C1076 + C26541 * C1188 + C26622 * C1079 +
                       C26542 * C1191 + C26623 * C7710 + C26543 * C7868) *
                          C29981) *
                         C30075 * C2058 -
                     ((C26623 * C1079 + C26543 * C1191 + C26622 * C1076 +
                       C26542 * C1188 + C26621 * C99 + C26541 * C229) *
                          C29981 +
                      (C26623 * C1073 + C26543 * C1185 + C26622 * C1070 +
                       C26542 * C1182 + C26621 * C94 + C26541 * C224) *
                          C13696) *
                         C30075 * C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[43] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C13696 * C93 + C29981 * C98) * C155 +
                       (C13696 * C156 + C29981 * C289) * C30075) *
                          C26541 +
                      (C27393 + C27394) * C26542 + C27401 * C26543) *
                         C2057 -
                     ((C27404 + C27405) * C26543 + (C27396 + C27395) * C26542 +
                      (C27394 + C27393) * C26541) *
                         C2058) *
                        C30016 * C1521 +
                    (((C28285 + C28286) * C26541 + (C28293 + C28294) * C26542 +
                      ((C13696 * C7708 + C29981 * C7710) * C155 +
                       (C13696 * C7786 + C29981 * C7920) * C30075) *
                          C26543) *
                         C2058 -
                     ((C28294 + C28293) * C26543 + (C28286 + C28285) * C26542 +
                      ((C13696 * C157 + C29981 * C290) * C30075 +
                       (C13696 * C94 + C29981 * C99) * C155) *
                          C26541) *
                         C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[43] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C30075 * C333) * C29981 * C26541 +
            C27445 * C26542 + C27446 * C26543) *
               C2057 -
           (C27453 * C26543 + C27446 * C26542 + C27445 * C26541) * C2058) *
              C30016 * C1521 +
          ((C28345 * C26541 + C28346 * C26542 +
            (C332 * C7708 + C8006 + C8006 + C30075 * C7996) * C29981 * C26543) *
               C2058 -
           (C28346 * C26543 + C28345 * C26542 + C356 * C29981 * C26541) *
               C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[43] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                       C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                          C155 +
                      (C26621 * C156 + C26541 * C396 + C26622 * C1133 +
                       C26542 * C1327 + C26623 * C1134 + C26543 * C1328) *
                          C30075) *
                         C29981 * C2057 -
                     ((C26623 * C7785 + C26543 * C8068 + C26622 * C1134 +
                       C26542 * C1328 + C26621 * C1133 + C26541 * C1327) *
                          C30075 +
                      (C26623 * C7707 + C26543 * C7865 + C26622 * C1072 +
                       C26542 * C1184 + C26621 * C1071 + C26541 * C1183) *
                          C155) *
                         C29981 * C2058) *
                        C30016 * C1521 +
                    (((C26621 * C1070 + C26541 * C1182 + C26622 * C1073 +
                       C26542 * C1185 + C26623 * C7708 + C26543 * C7866) *
                          C155 +
                      (C26621 * C1132 + C26541 * C1326 + C26622 * C1135 +
                       C26542 * C1329 + C26623 * C7786 + C26543 * C8069) *
                          C30075) *
                         C29981 * C2058 -
                     ((C26623 * C1135 + C26543 * C1329 + C26622 * C1132 +
                       C26542 * C1326 + C26621 * C157 + C26541 * C397) *
                          C30075 +
                      (C26623 * C1073 + C26543 * C1185 + C26622 * C1070 +
                       C26542 * C1182 + C26621 * C94 + C26541 * C224) *
                          C155) *
                         C29981 * C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[43] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13696 * C93 + C29981 * C98) * C26621 +
            (C13696 * C223 + C29981 * C455) * C26541 + C17536 * C26622 +
            C17729 * C26542 + C17541 * C26623 + C17731 * C26543) *
               C30075 * C2057 -
           (C27534 * C26543 + C27403 * C26623 + C17731 * C26542 +
            C17541 * C26622 + C17729 * C26541 + C17536 * C26621) *
               C30075 * C2058) *
              C30016 * C1521 +
          ((C18739 * C26621 + C18943 * C26541 + C28291 * C26622 +
            C28449 * C26542 + (C13696 * C7708 + C29981 * C7710) * C26623 +
            (C13696 * C7866 + C29981 * C8121) * C26543) *
               C30075 * C2058 -
           (C28449 * C26543 + C28291 * C26623 + C18943 * C26542 +
            C18739 * C26622 + (C13696 * C224 + C29981 * C456) * C26541 +
            (C13696 * C94 + C29981 * C99) * C26621) *
               C30075 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[43] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C30075 * C156) * C26621 +
            (C155 * C223 + C30075 * C498) * C26541 + C7804 * C26622 +
            C8193 * C26542 + C7809 * C26623 + C8195 * C26543) *
               C29981 * C2057 -
           (C27576 * C26543 + C27311 * C26623 + C8195 * C26542 +
            C7809 * C26622 + C8193 * C26541 + C7804 * C26621) *
               C29981 * C2058) *
              C30016 * C1521 +
          ((C2129 * C26621 + C2477 * C26541 + C7807 * C26622 + C8194 * C26542 +
            (C155 * C7708 + C30075 * C7786) * C26623 +
            (C155 * C7866 + C30075 * C8185) * C26543) *
               C29981 * C2058 -
           (C8194 * C26543 + C7807 * C26623 + C2477 * C26542 + C2129 * C26622 +
            C513 * C26541 + C179 * C26621) *
               C29981 * C2057) *
              C30016 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[43] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C26852 * C93 + C26856 + C26856 + C26541 * C558 +
                      C26853 * C1071 + C26857 + C26857 + C26542 * C1459 +
                      C26854 * C1072 + C26858 + C26858 + C26543 * C1460) *
                         C30075 * C29981 * C2057 -
                     (C26854 * C7707 + C27616 + C27616 + C26543 * C8245 +
                      C26853 * C1072 + C27617 + C27617 + C26542 * C1460 +
                      C26852 * C1071 + C27618 + C27618 + C26541 * C1459) *
                         C30075 * C29981 * C2058) *
                        C30016 * C1521 +
                    ((C26852 * C1070 + C28550 + C28550 + C26541 * C1458 +
                      C26853 * C1073 + C28551 + C28551 + C26542 * C1461 +
                      C26854 * C7708 + C28552 + C28552 + C26543 * C8246) *
                         C30075 * C29981 * C2058 -
                     (C26854 * C1073 + C26859 + C26859 + C26543 * C1461 +
                      C26853 * C1070 + C26860 + C26860 + C26542 * C1458 +
                      C26852 * C94 + C26861 + C26861 + C26541 * C559) *
                         C30075 * C29981 * C2057) *
                        C30016 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C26541 +
           C17340 * C26542 + C17342 * C26543) *
              C30075 * C30030 * C30016 * C84 -
          ((C13695 * C1073 + C18530 + C18530 + C29981 * C1085) * C26543 +
           C18534 * C26542 +
           (C13695 * C94 + C13703 + C13703 + C29981 * C104) * C26541) *
              C30075 * C30030 * C30016 * C85 +
          ((C13695 * C95 + C13704 + C13704 + C29981 * C105) * C26541 +
           (C13695 * C1069 + C16349 + C16349 + C29981 * C1081) * C26542 +
           (C13695 * C1074 + C26545 + C26545 + C29981 * C1086) * C26543) *
              C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13695 * C93 + C13698 + C13698 + C29981 * C103) * C26541 +
           C17340 * C26542 + C17342 * C26543) *
              C30075 * C30030 * C624 -
          (C17341 * C26543 + C15842 * C26542 + C14081 * C26541) * C30075 *
              C30030 * C625 +
          (C14082 * C26541 + C15841 * C26542 +
           (C13695 * C14500 + C14509 + C14509 + C29981 * C14502) * C26543) *
              C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eexy[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C30075 * C156) * C13696 +
                      (C155 * C98 + C30075 * C161) * C29981) *
                         C26541 +
                     (C7804 * C13696 + C7805 * C29981) * C26542 +
                     (C7809 * C13696 + C7808 * C29981) * C26543) *
                        C30030 * C30016 * C84 -
                    ((C7806 * C29981 + C7807 * C13696) * C26543 +
                     (C2128 * C29981 + C2129 * C13696) * C26542 +
                     (C180 * C29981 + C179 * C13696) * C26541) *
                        C30030 * C30016 * C85 +
                    ((C181 * C13696 + C182 * C29981) * C26541 +
                     (C2127 * C13696 + C2126 * C29981) * C26542 +
                     ((C155 * C1074 + C30075 * C1136) * C13696 +
                      (C155 * C1080 + C30075 * C1142) * C29981) *
                         C26543) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C30075 * C156) * C13696 +
                      (C155 * C98 + C30075 * C161) * C29981) *
                         C26541 +
                     (C7804 * C13696 + C7805 * C29981) * C26542 +
                     (C7809 * C13696 + C7808 * C29981) * C26543) *
                        C30030 * C624 -
                    (((C155 * C4239 + C30075 * C4303) * C29981 +
                      (C155 * C4237 + C30075 * C4301) * C13696) *
                         C26543 +
                     (C9701 * C29981 + C9700 * C13696) * C26542 +
                     ((C155 * C636 + C30075 * C698) * C29981 +
                      (C155 * C630 + C30075 * C692) * C13696) *
                         C26541) *
                        C30030 * C625 +
                    (((C155 * C631 + C30075 * C693) * C13696 +
                      (C155 * C637 + C30075 * C699) * C29981) *
                         C26541 +
                     ((C155 * C6059 + C30075 * C6143) * C13696 +
                      (C155 * C6061 + C30075 * C6145) * C29981) *
                         C26542 +
                     ((C155 * C14500 + C30075 * C14547) * C13696 +
                      (C155 * C14501 + C30075 * C14548) * C29981) *
                         C26543) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eexz[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                      C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                         C13696 +
                     (C26621 * C98 + C26541 * C228 + C26622 * C1077 +
                      C26542 * C1189 + C26623 * C1078 + C26543 * C1190) *
                         C29981) *
                        C30075 * C30030 * C30016 * C84 -
                    ((C26623 * C1079 + C26543 * C1191 + C26622 * C1076 +
                      C26542 * C1188 + C26621 * C99 + C26541 * C229) *
                         C29981 +
                     (C26623 * C1073 + C26543 * C1185 + C26622 * C1070 +
                      C26542 * C1182 + C26621 * C94 + C26541 * C224) *
                         C13696) *
                        C30075 * C30030 * C30016 * C85 +
                    ((C26621 * C95 + C26541 * C225 + C26622 * C1069 +
                      C26542 * C1181 + C26623 * C1074 + C26543 * C1186) *
                         C13696 +
                     (C26621 * C100 + C26541 * C230 + C26622 * C1075 +
                      C26542 * C1187 + C26623 * C1080 + C26543 * C1192) *
                         C29981) *
                        C30075 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                      C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                         C13696 +
                     (C26621 * C98 + C26541 * C228 + C26622 * C1077 +
                      C26542 * C1189 + C26623 * C1078 + C26543 * C1190) *
                         C29981) *
                        C30075 * C30030 * C624 -
                    ((C26623 * C4239 + C26543 * C4357 + C26622 * C2596 +
                      C26542 * C2714 + C26621 * C636 + C26541 * C748) *
                         C29981 +
                     (C26623 * C4237 + C26543 * C4355 + C26622 * C2593 +
                      C26542 * C2711 + C26621 * C630 + C26541 * C742) *
                         C13696) *
                        C30075 * C30030 * C625 +
                    ((C26621 * C631 + C26541 * C743 + C26622 * C6059 +
                      C26542 * C6213 + C26623 * C14500 + C26543 * C14587) *
                         C13696 +
                     (C26621 * C637 + C26541 * C749 + C26622 * C6061 +
                      C26542 * C6215 + C26623 * C14501 + C26543 * C14588) *
                         C29981) *
                        C30075 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C13696 * C93 + C29981 * C98) * C155 +
                      (C13696 * C156 + C29981 * C289) * C30075) *
                         C26541 +
                     (C17536 * C155 + C17537 * C30075) * C26542 +
                     (C17541 * C155 + C17540 * C30075) * C26543) *
                        C30030 * C30016 * C84 -
                    (((C13696 * C1135 + C29981 * C1235) * C30075 +
                      (C13696 * C1073 + C29981 * C1079) * C155) *
                         C26543 +
                     (C18740 * C30075 + C18739 * C155) * C26542 +
                     ((C13696 * C157 + C29981 * C290) * C30075 +
                      (C13696 * C94 + C29981 * C99) * C155) *
                         C26541) *
                        C30030 * C30016 * C85 +
                    (((C13696 * C95 + C29981 * C100) * C155 +
                      (C13696 * C158 + C29981 * C291) * C30075) *
                         C26541 +
                     ((C13696 * C1069 + C29981 * C1075) * C155 +
                      (C13696 * C1131 + C29981 * C1231) * C30075) *
                         C26542 +
                     ((C13696 * C1074 + C29981 * C1080) * C155 +
                      (C13696 * C1136 + C29981 * C1236) * C30075) *
                         C26543) *
                        C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C13696 * C93 + C29981 * C98) * C155 +
                      (C13696 * C156 + C29981 * C289) * C30075) *
                         C26541 +
                     (C17536 * C155 + C17537 * C30075) * C26542 +
                     (C17541 * C155 + C17540 * C30075) * C26543) *
                        C30030 * C624 -
                    ((C17538 * C30075 + C17539 * C155) * C26543 +
                     (C16020 * C30075 + C16021 * C155) * C26542 +
                     (C14232 * C30075 + C14231 * C155) * C26541) *
                        C30030 * C625 +
                    ((C14233 * C155 + C14234 * C30075) * C26541 +
                     (C16019 * C155 + C16018 * C30075) * C26542 +
                     ((C13696 * C14500 + C29981 * C14501) * C155 +
                      (C13696 * C14547 + C29981 * C14627) * C30075) *
                         C26543) *
                        C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C30075 * C333) * C29981 * C26541 +
           C8013 * C29981 * C26542 + C8015 * C29981 * C26543) *
              C30030 * C30016 * C84 -
          (C8014 * C29981 * C26543 + C2306 * C29981 * C26542 +
           C356 * C29981 * C26541) *
              C30030 * C30016 * C85 +
          (C357 * C29981 * C26541 + C2305 * C29981 * C26542 +
           (C332 * C1074 + C1287 + C1287 + C30075 * C1280) * C29981 * C26543) *
              C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C30075 * C333) * C29981 * C26541 +
           C8013 * C29981 * C26542 + C8015 * C29981 * C26543) *
              C30030 * C624 -
          ((C332 * C4237 + C9905 + C9905 + C30075 * C4461) * C29981 * C26543 +
           C9909 * C29981 * C26542 +
           (C332 * C630 + C843 + C843 + C30075 * C836) * C29981 * C26541) *
              C30030 * C625 +
          ((C332 * C631 + C844 + C844 + C30075 * C837) * C29981 * C26541 +
           (C332 * C6059 + C7448 + C7448 + C30075 * C6373) * C29981 * C26542 +
           (C332 * C14500 + C27055 + C27055 + C30075 * C14666) * C29981 *
               C26543) *
              C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eeyz[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                      C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                         C155 +
                     (C26621 * C156 + C26541 * C396 + C26622 * C1133 +
                      C26542 * C1327 + C26623 * C1134 + C26543 * C1328) *
                         C30075) *
                        C29981 * C30030 * C30016 * C84 -
                    ((C26623 * C1135 + C26543 * C1329 + C26622 * C1132 +
                      C26542 * C1326 + C26621 * C157 + C26541 * C397) *
                         C30075 +
                     (C26623 * C1073 + C26543 * C1185 + C26622 * C1070 +
                      C26542 * C1182 + C26621 * C94 + C26541 * C224) *
                         C155) *
                        C29981 * C30030 * C30016 * C85 +
                    ((C26621 * C95 + C26541 * C225 + C26622 * C1069 +
                      C26542 * C1181 + C26623 * C1074 + C26543 * C1186) *
                         C155 +
                     (C26621 * C158 + C26541 * C398 + C26622 * C1131 +
                      C26542 * C1325 + C26623 * C1136 + C26543 * C1330) *
                         C30075) *
                        C29981 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C26621 * C93 + C26541 * C223 + C26622 * C1071 +
                      C26542 * C1183 + C26623 * C1072 + C26543 * C1184) *
                         C155 +
                     (C26621 * C156 + C26541 * C396 + C26622 * C1133 +
                      C26542 * C1327 + C26623 * C1134 + C26543 * C1328) *
                         C30075) *
                        C29981 * C30030 * C624 -
                    ((C26623 * C4301 + C26543 * C4521 + C26622 * C2655 +
                      C26542 * C2876 + C26621 * C692 + C26541 * C886) *
                         C30075 +
                     (C26623 * C4237 + C26543 * C4355 + C26622 * C2593 +
                      C26542 * C2711 + C26621 * C630 + C26541 * C742) *
                         C155) *
                        C29981 * C30030 * C625 +
                    ((C26621 * C631 + C26541 * C743 + C26622 * C6059 +
                      C26542 * C6213 + C26623 * C14500 + C26543 * C14587) *
                         C155 +
                     (C26621 * C693 + C26541 * C887 + C26622 * C6143 +
                      C26542 * C6445 + C26623 * C14547 + C26543 * C14711) *
                         C30075) *
                        C29981 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
    d2eezx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13696 * C93 + C29981 * C98) * C26621 +
           (C13696 * C223 + C29981 * C455) * C26541 + C17536 * C26622 +
           C17729 * C26542 + C17541 * C26623 + C17731 * C26543) *
              C30075 * C30030 * C30016 * C84 -
          ((C13696 * C1185 + C29981 * C1373) * C26543 +
           (C13696 * C1073 + C29981 * C1079) * C26623 + C18943 * C26542 +
           C18739 * C26622 + (C13696 * C224 + C29981 * C456) * C26541 +
           (C13696 * C94 + C29981 * C99) * C26621) *
              C30075 * C30030 * C30016 * C85 +
          ((C13696 * C95 + C29981 * C100) * C26621 +
           (C13696 * C225 + C29981 * C457) * C26541 +
           (C13696 * C1069 + C29981 * C1075) * C26622 +
           (C13696 * C1181 + C29981 * C1369) * C26542 +
           (C13696 * C1074 + C29981 * C1080) * C26623 +
           (C13696 * C1186 + C29981 * C1374) * C26543) *
              C30075 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13696 * C93 + C29981 * C98) * C26621 +
           (C13696 * C223 + C29981 * C455) * C26541 + C17536 * C26622 +
           C17729 * C26542 + C17541 * C26623 + C17731 * C26543) *
              C30075 * C30030 * C624 -
          (C17730 * C26543 + C17539 * C26623 + C16188 * C26542 +
           C16021 * C26622 + C14372 * C26541 + C14231 * C26621) *
              C30075 * C30030 * C625 +
          (C14233 * C26621 + C14373 * C26541 + C16019 * C26622 +
           C16187 * C26542 + (C13696 * C14500 + C29981 * C14501) * C26623 +
           (C13696 * C14587 + C29981 * C14750) * C26543) *
              C30075 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C155 * C93 + C30075 * C156) * C26621 +
           (C155 * C223 + C30075 * C498) * C26541 + C7804 * C26622 +
           C8193 * C26542 + C7809 * C26623 + C8195 * C26543) *
              C29981 * C30030 * C30016 * C84 -
          (C8194 * C26543 + C7807 * C26623 + C2477 * C26542 + C2129 * C26622 +
           C513 * C26541 + C179 * C26621) *
              C29981 * C30030 * C30016 * C85 +
          (C181 * C26621 + C514 * C26541 + C2127 * C26622 + C2476 * C26542 +
           (C155 * C1074 + C30075 * C1136) * C26623 +
           (C155 * C1186 + C30075 * C1418) * C26543) *
              C29981 * C30030 * C30016 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C155 * C93 + C30075 * C156) * C26621 +
           (C155 * C223 + C30075 * C498) * C26541 + C7804 * C26622 +
           C8193 * C26542 + C7809 * C26623 + C8195 * C26543) *
              C29981 * C30030 * C624 -
          ((C155 * C4355 + C30075 * C4625) * C26543 +
           (C155 * C4237 + C30075 * C4301) * C26623 + C10111 * C26542 +
           C9700 * C26622 + (C155 * C742 + C30075 * C974) * C26541 +
           (C155 * C630 + C30075 * C692) * C26621) *
              C29981 * C30030 * C625 +
          ((C155 * C631 + C30075 * C693) * C26621 +
           (C155 * C743 + C30075 * C975) * C26541 +
           (C155 * C6059 + C30075 * C6143) * C26622 +
           (C155 * C6213 + C30075 * C6590) * C26542 +
           (C155 * C14500 + C30075 * C14547) * C26623 +
           (C155 * C14587 + C30075 * C14789) * C26543) *
              C29981 * C30030 * C626) *
         C30004) /
            (p * q * std::sqrt(p + q));
    d2eezz[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C26852 * C93 + C26856 + C26856 + C26541 * C558 +
                     C26853 * C1071 + C26857 + C26857 + C26542 * C1459 +
                     C26854 * C1072 + C26858 + C26858 + C26543 * C1460) *
                        C30075 * C29981 * C30030 * C30016 * C84 -
                    (C26854 * C1073 + C26859 + C26859 + C26543 * C1461 +
                     C26853 * C1070 + C26860 + C26860 + C26542 * C1458 +
                     C26852 * C94 + C26861 + C26861 + C26541 * C559) *
                        C30075 * C29981 * C30030 * C30016 * C85 +
                    (C26852 * C95 + C26862 + C26862 + C26541 * C560 +
                     C26853 * C1069 + C26863 + C26863 + C26542 * C1457 +
                     C26854 * C1074 + C26864 + C26864 + C26543 * C1462) *
                        C30075 * C29981 * C30030 * C30016 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C26852 * C93 + C26856 + C26856 + C26541 * C558 +
                     C26853 * C1071 + C26857 + C26857 + C26542 * C1459 +
                     C26854 * C1072 + C26858 + C26858 + C26543 * C1460) *
                        C30075 * C29981 * C30030 * C624 -
                    (C26854 * C4237 + C27208 + C27208 + C26543 * C4677 +
                     C26853 * C2593 + C27209 + C27209 + C26542 * C3035 +
                     C26852 * C630 + C27210 + C27210 + C26541 * C1018) *
                        C30075 * C29981 * C30030 * C625 +
                    (C26852 * C631 + C27211 + C27211 + C26541 * C1019 +
                     C26853 * C6059 + C27212 + C27212 + C26542 * C6658 +
                     C26854 * C14500 + C27213 + C27213 + C26543 * C14828) *
                        C30075 * C29981 * C30030 * C626) *
                   C30004) /
                      (p * q * std::sqrt(p + q));
}
