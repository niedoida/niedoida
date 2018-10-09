/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ddpp_AA_zz.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
#pragma GCC optimize("O0")

void second_derivative_ee_2211_11_33(const double ae,
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
                                     double* const d2ee)
{
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double C47945 = ae + be;
    const double C47944 = ae * be;
    const double C47943 = zA - zB;
    const double C47951 = 0 * be;
    const double C48015 = 0 * ae;
    const double C48006 = 0 * be;
    const double C48004 = 0 * be;
    const double C48094 = 0 * be;
    const double C48169 = p + q;
    const double C48168 = p * q;
    const double C48177 = std::pow(ae, 2);
    const double C48175 = bs[3];
    const double C48174 = zP - zQ;
    const double C48183 = bs[4];
    const double C48181 = xP - xQ;
    const double C48191 = bs[5];
    const double C48200 = bs[6];
    const double C48211 = bs[7];
    const double C48239 = bs[2];
    const double C48251 = yP - yQ;
    const double C115 = bs[0];
    const double C49058 = xA - xB;
    const double C49093 = ce + de;
    const double C49092 = ce * de;
    const double C49091 = xC - xD;
    const double C49106 = yC - yD;
    const double C49115 = zC - zD;
    const double C49156 = yA - yB;
    const double C47952 = std::pow(C47945, 2);
    const double C47987 = 2 * C47945;
    const double C47954 = 2 * C47944;
    const double C47953 = C47944 * C47943;
    const double C49174 = std::pow(C47943, 2);
    const double C49257 = C47943 * be;
    const double C49255 = C47943 * ae;
    const double C48009 = C47943 * C47951;
    const double C48008 = -2 * C47951;
    const double C48007 = C47951 / C47945;
    const double C48026 = C48015 / C47945;
    const double C48019 = C47943 * C48006;
    const double C48018 = -2 * C48006;
    const double C48096 = C48094 / C47945;
    const double C48170 = 2 * C48168;
    const double C48178 = std::pow(C48174, 2);
    const double C48229 = C48174 * ae;
    const double C48193 = std::pow(C48181, 2);
    const double C48326 = std::pow(C48251, 2);
    const double C49061 = C49058 * be;
    const double C49060 = C49058 * ae;
    const double C49059 = std::pow(C49058, 2);
    const double C49103 = 2 * C49093;
    const double C49381 = std::pow(C49093, 2);
    const double C49094 = std::pow(C49091, 2);
    const double C49380 = C49091 * de;
    const double C49379 = C49091 * ce;
    const double C49128 = std::pow(C49106, 2);
    const double C49385 = C49106 * de;
    const double C49383 = C49106 * ce;
    const double C49145 = std::pow(C49115, 2);
    const double C49386 = C49115 * de;
    const double C49384 = C49115 * ce;
    const double C49157 = std::pow(C49156, 2);
    const double C49215 = C49156 * be;
    const double C49213 = C49156 * ae;
    const double C47956 = 2 * C47952;
    const double C48092 = 4 * C47952;
    const double C48005 = C47952 * C47987;
    const double C49073 = std::pow(C47987, -1);
    const double C49375 = std::pow(C47987, -2);
    const double C49175 = C49174 * C47944;
    const double C49389 = std::pow(C49255, 2);
    const double C48022 = C48009 / C47945;
    const double C48021 = ae * C48008;
    const double C48028 = C48019 / C47945;
    const double C48027 = ae * C48018;
    const double C48172 = C48170 / C48169;
    const double C129 =
        ((std::pow(zP - zQ, 2) * bs[2] * std::pow(C48170 / C48169, 2) -
          (bs[1] * C48170) / C48169) *
         std::pow(ae, 2)) /
        C47952;
    const double C116 = -(C48181 * bs[1] * C48170) / C48169;
    const double C263 = -(C48251 * bs[1] * C48170) / C48169;
    const double C395 = -(C48174 * bs[1] * C48170) / C48169;
    const double C48185 = C48178 * C48183;
    const double C48194 = C48178 * C48191;
    const double C48202 = C48178 * C48200;
    const double C48214 = C48178 * C48211;
    const double C48230 = C48191 * C48229;
    const double C48233 = C48183 * C48229;
    const double C48241 = C48200 * C48229;
    const double C48258 = C48175 * C48229;
    const double C48298 = C48211 * C48229;
    const double C122 = (-(bs[1] * C48229 * C48170) / C48169) / C47945;
    const double C49368 = std::pow(C49060, 2);
    const double C49062 = C49059 * C47944;
    const double C49382 = std::pow(C49103, -1);
    const double C49417 = 2 * C49381;
    const double C49095 = C49094 * C49092;
    const double C49129 = C49128 * C49092;
    const double C49146 = C49145 * C49092;
    const double C49158 = C49157 * C47944;
    const double C49387 = std::pow(C49213, 2);
    const double C48013 = C47951 / C47956;
    const double C48023 = C48006 / C47956;
    const double C48020 = C48004 / C47956;
    const double C48095 = C47945 * C48092;
    const double C49378 = 4 * C48005;
    const double C49176 = C49175 / C47945;
    const double C48030 = 0 - C48022;
    const double C48031 = C48021 / C48005;
    const double C48029 = C47943 * C48021;
    const double C48035 = 0 - C48028;
    const double C48036 = C48027 / C48005;
    const double C48176 = -C48172;
    const double C48184 = std::pow(C48172, 4);
    const double C48201 = std::pow(C48172, 6);
    const double C48238 = std::pow(C48172, 2);
    const double C130 = ((xP - xQ) *
                         (bs[2] * std::pow(C48172, 2) +
                          std::pow(zP - zQ, 2) * bs[3] * std::pow(-C48172, 3)) *
                         std::pow(ae, 2)) /
                        C47952;
    const double C49063 = C49062 / C47945;
    const double C49096 = C49095 / C49093;
    const double C49130 = C49129 / C49093;
    const double C49147 = C49146 / C49093;
    const double C49159 = C49158 / C47945;
    const double C49177 = -C49176;
    const double C48038 = C48030 * ae;
    const double C48037 = C48029 / C47952;
    const double C48045 = C48035 * ae;
    const double C48179 = std::pow(C48176, 3);
    const double C48192 = std::pow(C48176, 5);
    const double C48212 = std::pow(C48176, 7);
    const double C48186 = C48185 * C48184;
    const double C48190 = C48183 * C48184;
    const double C48234 = C48184 * C48233;
    const double C48203 = C48202 * C48201;
    const double C48210 = C48200 * C48201;
    const double C48242 = C48201 * C48241;
    const double C48257 = C48239 * C48238;
    const double C123 = (C48181 * C48238 * C48239 * C48229) / C47945;
    const double C269 = (C48251 * C48238 * C48239 * C48229) / C47945;
    const double C401 = (C48174 * C48238 * C48239 * C48229) / C47945 -
                        (ae * bs[1] * C48170) / (C48169 * C47945);
    const double C49064 = -C49063;
    const double C49097 = -C49096;
    const double C49131 = -C49130;
    const double C49148 = -C49147;
    const double C49160 = -C49159;
    const double C49178 = std::exp(C49177);
    const double C48046 = C48038 / C47945;
    const double C48052 = C48045 / C47945;
    const double C48182 = C48175 * C48179;
    const double C48259 = C48179 * C48258;
    const double C131 =
        ((bs[2] * std::pow(C48172, 2) + C48178 * C48175 * C48179) * C48177 +
         (C48175 * C48179 + C48178 * bs[4] * std::pow(C48172, 4)) * C48177 *
             std::pow(xP - xQ, 2)) /
        C47952;
    const double C275 =
        ((yP - yQ) * (bs[2] * std::pow(C48172, 2) + C48178 * C48175 * C48179) *
         C48177) /
        C47952;
    const double C407 =
        (2 * ae * C48238 * C48239 * C48229 +
         C48174 * (C48239 * C48238 + C48178 * C48175 * C48179) * C48177) /
        C47952;
    const double C48195 = C48194 * C48192;
    const double C48199 = C48191 * C48192;
    const double C48231 = C48192 * C48230;
    const double C48215 = C48214 * C48212;
    const double C48303 = C48212 * C48298;
    const double C48273 = C48190 * C48193;
    const double C48283 = C48181 * C48190;
    const double C48345 = C48190 * C48326;
    const double C48438 = C48251 * C48190;
    const double C48484 = C48190 * C48178;
    const double C48483 = C48174 * C48190;
    const double C48482 = C48190 * ae;
    const double C48265 = C48181 * C48234;
    const double C48337 = C48251 * C48234;
    const double C48414 = C48174 * C48234;
    const double C48478 = ae * C48234;
    const double C48301 = C48210 * C48193;
    const double C48584 = C48210 * C48326;
    const double C48605 = C48181 * C48210;
    const double C48802 = C48251 * C48210;
    const double C48845 = C48210 * C48178;
    const double C48844 = C48174 * C48210;
    const double C48843 = C48210 * ae;
    const double C48243 = C48242 * C48193;
    const double C48297 = C48181 * C48242;
    const double C48563 = C48242 * C48326;
    const double C48580 = C48251 * C48242;
    const double C48729 = C48174 * C48242;
    const double C48837 = ae * C48242;
    const double C48260 = C48257 * ae;
    const double C117 = C48257 * C48193 - (bs[1] * C48170) / C48169;
    const double C262 = C48251 * C48181 * C48257;
    const double C394 = C48174 * C48181 * C48257;
    const double C591 = C48257 * C48326 - (bs[1] * C48170) / C48169;
    const double C693 = C48174 * C48251 * C48257;
    const double C944 = C48257 * C48178 - (bs[1] * C48170) / C48169;
    const double C49065 = std::exp(C49064);
    const double C49098 = std::exp(C49097);
    const double C49132 = std::exp(C49131);
    const double C49149 = std::exp(C49148);
    const double C49161 = std::exp(C49160);
    const double C140 = C49178 * C130;
    const double C47955 = C47953 * C49178;
    const double C113 =
        -((C49178 - (C47943 * 2 * C47944 * C47943 * C49178) / C47945) * 2 *
          C47944) /
        C47945;
    const double C114 = -(2 * C47944 * C47943 * C49178) / C47945;
    const double C49256 = C49178 / C47987;
    const double C49258 = C49178 * C49255;
    const double C49265 = C49073 * C49178;
    const double C49401 = C49178 * C49257;
    const double C49428 = C49375 * C49178;
    const double C49426 = C49178 * C49389;
    const double C48053 = C48046 - C48023;
    const double C48058 = C48052 - C48020;
    const double C48187 = C48182 + C48186;
    const double C48266 = C48181 * C48182;
    const double C48338 = C48251 * C48182;
    const double C48416 = C48174 * C48182;
    const double C48415 = C48182 * ae;
    const double C118 =
        2 * C48181 * C48257 + C48181 * (C48257 + C48182 * C48193);
    const double C261 = C48251 * (C48257 + C48182 * C48193);
    const double C393 = C48174 * (C48257 + C48182 * C48193);
    const double C1254 =
        2 * C48251 * C48257 + C48251 * (C48257 + C48182 * C48326);
    const double C1442 = C48174 * (C48257 + C48182 * C48326);
    const double C2870 =
        2 * C48174 * C48257 + C48174 * (C48257 + C48182 * C48178);
    const double C48261 = C48174 * C48259;
    const double C124 = (C48238 * C48239 * C48229 + C48259 * C48193) / C47945;
    const double C125 =
        (2 * C48181 * C48259 + C48181 * (C48259 + C48234 * C48193)) / C47945;
    const double C267 = (C48251 * (C48259 + C48234 * C48193)) / C47945;
    const double C268 = (C48251 * C48181 * C48259) / C47945;
    const double C399 = (C48174 * (C48259 + C48234 * C48193) +
                         (C48257 + C48182 * C48193) * ae) /
                        C47945;
    const double C400 =
        (C48174 * C48181 * C48259 + C48181 * C48257 * ae) / C47945;
    const double C596 = (C48238 * C48239 * C48229 + C48259 * C48326) / C47945;
    const double C698 =
        (C48174 * C48251 * C48259 + C48251 * C48257 * ae) / C47945;
    const double C1258 =
        (2 * C48251 * C48259 + C48251 * (C48259 + C48234 * C48326)) / C47945;
    const double C1446 = (C48174 * (C48259 + C48234 * C48326) +
                          (C48257 + C48182 * C48326) * ae) /
                         C47945;
    const double C143 = C49178 * C131;
    const double C1266 = C49178 * C275;
    const double C48196 = C48190 + C48195;
    const double C48204 = C48199 + C48203;
    const double C48284 = C48199 * C48193;
    const double C48300 = C48181 * C48199;
    const double C48569 = C48199 * C48326;
    const double C48583 = C48251 * C48199;
    const double C48732 = C48199 * C48178;
    const double C48731 = C48174 * C48199;
    const double C48730 = C48199 * ae;
    const double C48272 = C48231 * C48193;
    const double C48281 = C48181 * C48231;
    const double C48344 = C48231 * C48326;
    const double C48437 = C48251 * C48231;
    const double C48481 = C48174 * C48231;
    const double C48725 = ae * C48231;
    const double C48216 = C48210 + C48215;
    const double C48306 = C48303 * C48193;
    const double C48581 = C48303 * C48326;
    const double C48603 = C48181 * C48303;
    const double C48801 = C48251 * C48303;
    const double C48842 = C48174 * C48303;
    const double C48275 = C48182 + C48273;
    const double C48286 = 2 * C48283;
    const double C48354 = C48251 * C48283;
    const double C48405 = C48174 * C48283;
    const double C48404 = C48283 * ae;
    const double C48347 = C48182 + C48345;
    const double C48441 = C48174 * C48438;
    const double C48440 = C48438 * ae;
    const double C48568 = 2 * C48438;
    const double C48488 = C48182 + C48484;
    const double C48487 = C48483 * ae;
    const double C48733 = 2 * C48483;
    const double C48267 = C48174 * C48265;
    const double C597 = (C48181 * C48259 + C48265 * C48326) / C47945;
    const double C48339 = C48174 * C48337;
    const double C48485 = 2 * C48478;
    const double C48305 = C48199 + C48301;
    const double C48588 = C48199 + C48584;
    const double C48607 = C48605 * C48326;
    const double C48702 = C48251 * C48605;
    const double C48768 = C48605 * C48178;
    const double C48767 = C48174 * C48605;
    const double C48766 = C48605 * ae;
    const double C48810 = C48802 * C48178;
    const double C48809 = C48174 * C48802;
    const double C48808 = C48802 * ae;
    const double C48853 = C48199 + C48845;
    const double C48852 = C48844 * ae;
    const double C48244 = C48231 + C48243;
    const double C48302 = 2 * C48297;
    const double C48360 = C48297 * C48326;
    const double C48451 = C48251 * C48297;
    const double C48504 = C48174 * C48297;
    const double C48761 = ae * C48297;
    const double C48564 = C48231 + C48563;
    const double C48585 = 2 * C48580;
    const double C48655 = C48174 * C48580;
    const double C48797 = ae * C48580;
    const double C48850 = 2 * C48837;
    const double C49067 = C49065 * C49060;
    const double C49066 = C49065 / C47987;
    const double C49075 = C49073 * C49065;
    const double C49371 = C49065 * C49061;
    const double C49414 = C49375 * C49065;
    const double C49408 = C49065 * C49368;
    const double C49418 = C49382 * C49098;
    const double C49416 = C49098 * C49379;
    const double C257 = -(C49098 * C49380) / C49093;
    const double C49420 = C49382 * C49132;
    const double C49419 = C49132 * C49383;
    const double C521 = -(C49132 * C49385) / C49093;
    const double C49422 = C49382 * C49149;
    const double C49421 = C49149 * C49384;
    const double C795 = -(C49149 * C49386) / C49093;
    const double C49214 = C49161 / C47987;
    const double C49216 = C49161 * C49213;
    const double C49223 = C49073 * C49161;
    const double C49394 = C49161 * C49215;
    const double C49425 = C49375 * C49161;
    const double C49423 = C49161 * C49387;
    const double C47957 = 2 * C47955;
    const double C48016 = C47955 / C47952;
    const double C48010 = -4 * C47955;
    const double C2467 = ((0 * ae) / C47945 - C47955 / C47952) / (2 * C47945) +
                         (0 * ae) / C47945;
    const double C4982 = (0 * ae) / C47945 - C47955 / C47952;
    const double C141 = C113 * C117;
    const double C138 = C113 * C116;
    const double C287 = C113 * C262;
    const double C419 = C113 * C394;
    const double C1267 = C113 * C591;
    const double C1265 = C113 * C263;
    const double C1913 = C113 * C693;
    const double C139 = C114 * C123;
    const double C137 = C114 * C122;
    const double C290 = C114 * C269;
    const double C422 = C114 * C401;
    const double C15102 = (C49178 * std::pow(C49257, 2)) / C47952 + C49256;
    const double C49259 = C49258 * C49257;
    const double C49264 = C49258 / C47956;
    const double C49393 = C49258 / C47945;
    const double C49390 = C49073 * C49258;
    const double C49266 = C49265 * C49257;
    const double C49407 = C49265 / C48092;
    const double C49405 = C49255 * C49265;
    const double C49404 = 2 * C49265;
    const double C17769 = C49265 / C49378;
    const double C36661 = C49265 / C47987;
    const double C49435 = C49401 / C47945;
    const double C15103 = (-2 * C49073 * C49401) / C47945;
    const double C49446 = C49426 / C47952;
    const double C48062 = C48053 / C47987;
    const double C48060 = C47943 * C48053;
    const double C48059 = 2 * C48053;
    const double C48066 = C48058 + C48007;
    const double C48188 = C48187 * C48177;
    const double C48268 = C48266 * ae;
    const double C699 =
        (C48174 * C48251 * C48265 + C48251 * C48266 * ae) / C47945;
    const double C592 = C48181 * C48257 + C48266 * C48326;
    const double C694 = C48174 * C48251 * C48266;
    const double C945 = C48181 * C48257 + C48266 * C48178;
    const double C1253 =
        2 * C48251 * C48266 + C48251 * (C48266 + C48283 * C48326);
    const double C1441 = C48174 * (C48266 + C48283 * C48326);
    const double C2869 =
        2 * C48174 * C48266 + C48174 * (C48266 + C48283 * C48178);
    const double C48340 = C48338 * ae;
    const double C2325 = C48251 * C48257 + C48338 * C48178;
    const double C3333 =
        2 * C48174 * C48338 + C48174 * (C48338 + C48438 * C48178);
    const double C48418 = C48416 * ae;
    const double C48417 = C48414 + C48415;
    const double C144 = C113 * C118;
    const double C284 = C113 * C261;
    const double C416 = C113 * C393;
    const double C1748 = C113 * C1254;
    const double C1911 = C113 * C1442;
    const double C48262 = C48261 + C48260;
    const double C142 = C114 * C124;
    const double C145 = C114 * C125;
    const double C285 = C114 * C267;
    const double C288 = C114 * C268;
    const double C417 = C114 * C399;
    const double C420 = C114 * C400;
    const double C607 = C114 * C596;
    const double C709 = C114 * C698;
    const double C1279 = C114 * C1258;
    const double C1465 = C114 * C1446;
    const double C48197 = C48196 * C48177;
    const double C48205 = C48204 * C48177;
    const double C48287 = C48190 + C48284;
    const double C48304 = 2 * C48300;
    const double C48361 = C48300 * C48326;
    const double C48452 = C48251 * C48300;
    const double C48507 = C48300 * C48178;
    const double C48506 = C48174 * C48300;
    const double C48505 = C48300 * ae;
    const double C48571 = C48190 + C48569;
    const double C48587 = 2 * C48583;
    const double C48658 = C48583 * C48178;
    const double C48657 = C48174 * C48583;
    const double C48656 = C48583 * ae;
    const double C48738 = C48190 + C48732;
    const double C48737 = C48731 * ae;
    const double C48846 = 2 * C48731;
    const double C48736 = C48729 + C48730;
    const double C48274 = C48234 + C48272;
    const double C48285 = 2 * C48281;
    const double C48353 = C48251 * C48281;
    const double C48403 = C48174 * C48281;
    const double C48501 = ae * C48281;
    const double C1257 =
        (2 * C48251 * C48265 + C48251 * (C48265 + C48281 * C48326)) / C47945;
    const double C1445 = (C48174 * (C48265 + C48281 * C48326) +
                          (C48266 + C48283 * C48326) * ae) /
                         C47945;
    const double C48346 = C48234 + C48344;
    const double C48439 = C48174 * C48437;
    const double C48566 = 2 * C48437;
    const double C48652 = ae * C48437;
    const double C48486 = C48481 + C48482;
    const double C48735 = 2 * C48725;
    const double C48217 = C48216 * C48177;
    const double C48308 = C48242 + C48306;
    const double C48586 = C48242 + C48581;
    const double C48606 = C48603 * C48326;
    const double C48701 = C48251 * C48603;
    const double C48765 = C48174 * C48603;
    const double C48807 = C48174 * C48801;
    const double C48851 = C48842 + C48843;
    const double C48277 = C48275 * ae;
    const double C119 = 3 * (C48257 + C48182 * C48193) +
                        C48181 * (2 * C48266 + C48181 * C48275);
    const double C260 = C48251 * (2 * C48266 + C48181 * C48275);
    const double C392 = C48174 * (2 * C48266 + C48181 * C48275);
    const double C593 = C48257 + C48182 * C48193 + C48275 * C48326;
    const double C695 = C48174 * C48251 * C48275;
    const double C946 = C48257 + C48182 * C48193 + C48275 * C48178;
    const double C48356 = C48354 * ae;
    const double C2327 = C48251 * C48266 + C48354 * C48178;
    const double C48407 = C48405 * ae;
    const double C48349 = C48347 * ae;
    const double C1738 = 3 * (C48257 + C48182 * C48326) +
                         C48251 * (2 * C48338 + C48251 * C48347);
    const double C1901 = C48174 * (2 * C48338 + C48251 * C48347);
    const double C2326 = C48257 + C48182 * C48326 + C48347 * C48178;
    const double C48443 = C48441 * ae;
    const double C48491 = C48488 * ae;
    const double C3753 = 3 * (C48257 + C48182 * C48178) +
                         C48174 * (2 * C48416 + C48174 * C48488);
    const double C608 = C114 * C597;
    const double C48307 = C48181 * C48305;
    const double C48377 = C48305 * C48326;
    const double C48466 = C48251 * C48305;
    const double C48530 = C48305 * C48178;
    const double C48529 = C48174 * C48305;
    const double C48528 = C48305 * ae;
    const double C48590 = C48251 * C48588;
    const double C48681 = C48588 * C48178;
    const double C48680 = C48174 * C48588;
    const double C48679 = C48588 * ae;
    const double C48609 = C48300 + C48607;
    const double C48708 = C48702 * C48178;
    const double C48707 = C48174 * C48702;
    const double C48706 = C48702 * ae;
    const double C48774 = C48300 + C48768;
    const double C48773 = C48767 * ae;
    const double C48814 = C48583 + C48810;
    const double C48813 = C48809 * ae;
    const double C48858 = C48174 * C48853;
    const double C48857 = C48853 * ae;
    const double C48282 = C48181 * C48244;
    const double C48296 = 3 * C48244;
    const double C48369 = C48251 * C48244;
    const double C48392 = C48174 * C48244;
    const double C48524 = ae * C48244;
    const double C48362 = C48281 + C48360;
    const double C48453 = C48174 * C48451;
    const double C48602 = 2 * C48451;
    const double C48698 = ae * C48451;
    const double C48771 = 2 * C48761;
    const double C48567 = C48251 * C48564;
    const double C48579 = 3 * C48564;
    const double C48619 = C48174 * C48564;
    const double C48675 = ae * C48564;
    const double C48805 = 2 * C48797;
    const double C49068 = C49067 * C49061;
    const double C49074 = C49067 / C47956;
    const double C49372 = C49073 * C49067;
    const double C49370 = C49067 / C47945;
    const double C1077 = (C49065 * std::pow(C49061, 2)) / C47952 + C49066;
    const double C49076 = C49075 * C49061;
    const double C49392 = C49075 / C48092;
    const double C49376 = C49060 * C49075;
    const double C49374 = 2 * C49075;
    const double C107 = C49075 / C49378;
    const double C26398 = C49075 / C47987;
    const double C49410 = C49371 / C47945;
    const double C1078 = (-2 * C49073 * C49371) / C47945;
    const double C49439 = C49408 / C47952;
    const double C112 = C49418 / C49103;
    const double C110 = C49098 / C49103 - (C49416 * C49380) / C49381;
    const double C111 = C49416 / C49417 - (C49418 * C49380) / C49093;
    const double C523 = C49416 / C49093;
    const double C589 = C49420 / C49103;
    const double C255 = C49419 / C49093;
    const double C587 = C49132 / C49103 - (C49419 * C49385) / C49381;
    const double C588 = C49419 / C49417 - (C49420 * C49385) / C49093;
    const double C943 = C49422 / C49103;
    const double C389 = C49421 / C49093;
    const double C941 = C49149 / C49103 - (C49421 * C49386) / C49381;
    const double C942 = C49421 / C49417 - (C49422 * C49386) / C49093;
    const double C7926 = (C49161 * std::pow(C49215, 2)) / C47952 + C49214;
    const double C49217 = C49216 * C49215;
    const double C49222 = C49216 / C47956;
    const double C49391 = C49216 / C47945;
    const double C49388 = C49073 * C49216;
    const double C49224 = C49223 * C49215;
    const double C49400 = C49223 / C48092;
    const double C49398 = C49213 * C49223;
    const double C49397 = 2 * C49223;
    const double C9117 = C49223 / C49378;
    const double C26395 = C49223 / C47987;
    const double C49430 = C49394 / C47945;
    const double C7927 = (-2 * C49073 * C49394) / C47945;
    const double C49444 = C49423 / C47952;
    const double C47958 = C47943 * C47957;
    const double C15110 =
        ((-C47957 / C47945) / C47987 - (0 * be) / C47945) / C47987 -
        (0 * be) / C47945;
    const double C30828 = (-C47957 / C47945) / C47987 - (0 * be) / C47945;
    const double C48034 = C48026 - C48016;
    const double C48024 = C48010 / C47945;
    const double C4996 = C4982 * C399;
    const double C4990 = C4982 * C400;
    const double C4985 = C4982 * C401;
    const double C5188 = C4982 * C698;
    const double C5609 = C4982 * C1446;
    const double C154 = C138 + C139;
    const double C1281 = C1265 + C290;
    const double C15126 = C15102 * C131;
    const double C15117 = C15102 * C130;
    const double C16639 = C15102 * C275;
    const double C49260 = C49259 / C47952;
    const double C4994 = C49393 * C131;
    const double C4988 = C49393 * C130;
    const double C6465 = C49393 * C275;
    const double C49427 = 2 * C49390;
    const double C49267 = C49266 / C47945;
    const double C49438 = C49405 / C47956;
    const double C49451 = C49393 - C49435;
    const double C30823 = -C49435;
    const double C49458 = C49446 + C49256;
    const double C48068 = C48060 + 0;
    const double C48067 = C48037 + C48059;
    const double C48074 = C48066 / C47987;
    const double C132 =
        (2 * C48181 * C48188 +
         C48181 * (C48188 +
                   (C48183 * C48184 + C48178 * bs[5] * std::pow(C48176, 5)) *
                       C48177 * std::pow(C48181, 2))) /
        C47952;
    const double C274 = ((yP - yQ) * C48181 * C48188) / C47952;
    const double C406 = (2 * ae * C48181 * C48179 * C48175 * C48229 +
                         C48174 * C48181 * C48188) /
                        C47952;
    const double C601 = ((C48239 * C48238 + C48178 * C48175 * C48179) * C48177 +
                         C48188 * std::pow(yP - yQ, 2)) /
                        C47952;
    const double C703 = (2 * ae * C48251 * C48179 * C48175 * C48229 +
                         C48174 * C48251 * C48188) /
                        C47952;
    const double C48269 = C48267 + C48268;
    const double C710 = C114 * C699;
    const double C5183 = C4982 * C699;
    const double C1083 = C113 * C592;
    const double C1462 = C113 * C694;
    const double C1274 = C113 * C1253;
    const double C1459 = C113 * C1441;
    const double C48341 = C48339 + C48340;
    const double C48420 = ae * C48417;
    const double C48419 = C48174 * C48417;
    const double C48480 = 2 * C48417;
    const double C48263 = ae * C48262;
    const double C949 =
        (C48238 * C48239 * C48229 + C48174 * C48262 + C48174 * C48257 * ae) /
        C47945;
    const double C155 = C141 + C142;
    const double C156 = C144 + C145;
    const double C294 = C284 + C285;
    const double C295 = C287 + C288;
    const double C426 = C416 + C417;
    const double C427 = C419 + C420;
    const double C1282 = C1267 + C607;
    const double C1919 = C1913 + C709;
    const double C1753 = C1748 + C1279;
    const double C1918 = C1911 + C1465;
    const double C48322 = C48181 * C48197;
    const double C48436 = C48251 * C48197;
    const double C48479 = C48174 * C48197;
    const double C133 =
        (3 * (C48188 + C48197 * C48193) +
         C48181 * (2 * C48181 * C48197 +
                   C48181 * (C48197 + (C48191 * C48192 +
                                       C48178 * bs[6] * std::pow(C48172, 6)) *
                                          C48177 * C48193))) /
        C47952;
    const double C273 = ((yP - yQ) * (C48188 + C48197 * C48193)) / C47952;
    const double C405 = (2 * ae * (C48179 * C48175 * C48229 + C48234 * C48193) +
                         C48174 * (C48188 + C48197 * C48193)) /
                        C47952;
    const double C602 =
        (C48181 * C48188 + C48181 * C48197 * std::pow(yP - yQ, 2)) / C47952;
    const double C704 = (2 * ae * C48251 * C48181 * C48234 +
                         C48174 * C48251 * C48181 * C48197) /
                        C47952;
    const double C1262 = (2 * C48251 * C48188 +
                          C48251 * (C48188 + C48197 * std::pow(C48251, 2))) /
                         C47952;
    const double C1450 = (2 * ae * (C48259 + C48234 * C48326) +
                          C48174 * (C48188 + C48197 * C48326)) /
                         C47952;
    const double C48206 = C48205 * C48193;
    const double C48209 = C48181 * C48205;
    const double C48547 = C48205 * C48326;
    const double C48556 = C48251 * C48205;
    const double C48726 = C48174 * C48205;
    const double C1744 =
        (3 * (C48188 + C48197 * C48326) +
         C48251 * (2 * C48251 * C48197 + C48251 * (C48197 + C48205 * C48326))) /
        C47952;
    const double C1907 =
        (2 * ae * (2 * C48251 * C48234 + C48251 * (C48234 + C48231 * C48326)) +
         C48174 * (2 * C48251 * C48197 + C48251 * (C48197 + C48205 * C48326))) /
        C47952;
    const double C48289 = C48181 * C48287;
    const double C48299 = 3 * C48287;
    const double C48370 = C48251 * C48287;
    const double C48394 = C48174 * C48287;
    const double C48393 = C48287 * ae;
    const double C1252 =
        2 * C48251 * C48275 + C48251 * (C48275 + C48287 * C48326);
    const double C1440 = C48174 * (C48275 + C48287 * C48326);
    const double C2868 =
        2 * C48174 * C48275 + C48174 * (C48275 + C48287 * C48178);
    const double C48363 = C48283 + C48361;
    const double C48455 = C48174 * C48452;
    const double C48454 = C48452 * ae;
    const double C48604 = 2 * C48452;
    const double C3334 =
        2 * C48174 * C48354 + C48174 * (C48354 + C48452 * C48178);
    const double C48511 = C48283 + C48507;
    const double C48510 = C48506 * ae;
    const double C48769 = 2 * C48506;
    const double C48509 = C48504 + C48505;
    const double C48573 = C48251 * C48571;
    const double C48582 = 3 * C48571;
    const double C48621 = C48174 * C48571;
    const double C48620 = C48571 * ae;
    const double C10248 =
        2 * C48174 * C48347 + C48174 * (C48347 + C48571 * C48178);
    const double C48662 = C48438 + C48658;
    const double C48661 = C48657 * ae;
    const double C48803 = 2 * C48657;
    const double C48660 = C48655 + C48656;
    const double C48742 = C48174 * C48738;
    const double C48741 = C48738 * ae;
    const double C48847 = 3 * C48738;
    const double C48743 = ae * C48736;
    const double C48740 = C48174 * C48736;
    const double C48841 = 2 * C48736;
    const double C48276 = C48174 * C48274;
    const double C126 = (3 * (C48259 + C48234 * C48193) +
                         C48181 * (2 * C48265 + C48181 * C48274)) /
                        C47945;
    const double C266 = (C48251 * (2 * C48265 + C48181 * C48274)) / C47945;
    const double C398 = (C48174 * (2 * C48265 + C48181 * C48274) +
                         (2 * C48266 + C48181 * C48275) * ae) /
                        C47945;
    const double C598 = (C48259 + C48234 * C48193 + C48274 * C48326) / C47945;
    const double C700 =
        (C48174 * C48251 * C48274 + C48251 * C48275 * ae) / C47945;
    const double C1256 =
        (2 * C48251 * C48274 + C48251 * (C48274 + C48244 * C48326)) / C47945;
    const double C1444 = (C48174 * (C48274 + C48244 * C48326) +
                          (C48275 + C48287 * C48326) * ae) /
                         C47945;
    const double C48355 = C48174 * C48353;
    const double C48406 = C48403 + C48404;
    const double C48508 = 2 * C48501;
    const double C1275 = C114 * C1257;
    const double C1460 = C114 * C1445;
    const double C5611 = C4982 * C1445;
    const double C48348 = C48174 * C48346;
    const double C1741 = (3 * (C48259 + C48234 * C48326) +
                          C48251 * (2 * C48337 + C48251 * C48346)) /
                         C47945;
    const double C1904 = (C48174 * (2 * C48337 + C48251 * C48346) +
                          (2 * C48338 + C48251 * C48347) * ae) /
                         C47945;
    const double C48442 = C48439 + C48440;
    const double C48659 = 2 * C48652;
    const double C48492 = ae * C48486;
    const double C48490 = C48174 * C48486;
    const double C48728 = 2 * C48486;
    const double C48218 = C48217 * C48193;
    const double C48550 = C48181 * C48217;
    const double C48557 = C48217 * C48326;
    const double C48798 = C48251 * C48217;
    const double C48838 = C48174 * C48217;
    const double C48310 = C48181 * C48308;
    const double C48376 = C48308 * C48326;
    const double C48465 = C48251 * C48308;
    const double C48527 = C48174 * C48308;
    const double C48589 = C48251 * C48586;
    const double C48678 = C48174 * C48586;
    const double C48608 = C48297 + C48606;
    const double C48705 = C48174 * C48701;
    const double C48772 = C48765 + C48766;
    const double C48812 = C48807 + C48808;
    const double C48859 = ae * C48851;
    const double C48856 = C48174 * C48851;
    const double C147 = C113 * C119;
    const double C281 = C113 * C260;
    const double C413 = C113 * C392;
    const double C1087 = C113 * C593;
    const double C1456 = C113 * C695;
    const double C9208 = C113 * C1738;
    const double C9550 = C113 * C1901;
    const double C48309 = C48304 + C48307;
    const double C48379 = C48287 + C48377;
    const double C48469 = C48174 * C48466;
    const double C48468 = C48466 * ae;
    const double C48534 = C48287 + C48530;
    const double C48533 = C48529 * ae;
    const double C48592 = C48587 + C48590;
    const double C48685 = C48571 + C48681;
    const double C48684 = C48680 * ae;
    const double C48611 = C48251 * C48609;
    const double C48632 = C48174 * C48609;
    const double C48631 = C48609 * ae;
    const double C48712 = C48452 + C48708;
    const double C48711 = C48707 * ae;
    const double C48778 = C48174 * C48774;
    const double C48777 = C48774 * ae;
    const double C48818 = C48174 * C48814;
    const double C48817 = C48814 * ae;
    const double C48862 = C48846 + C48858;
    const double C48288 = C48285 + C48282;
    const double C48371 = C48174 * C48369;
    const double C48531 = 2 * C48524;
    const double C48364 = C48174 * C48362;
    const double C1742 = (3 * (C48265 + C48281 * C48326) +
                          C48251 * (2 * C48353 + C48251 * C48362)) /
                         C47945;
    const double C48703 = 2 * C48698;
    const double C48570 = C48566 + C48567;
    const double C48682 = 2 * C48675;
    const double C49069 = C49068 / C47952;
    const double C49411 = 2 * C49372;
    const double C49077 = C49076 / C47945;
    const double C49415 = C49376 / C47956;
    const double C49440 = C49370 - C49410;
    const double C23665 = -C49410;
    const double C49454 = C49439 + C49066;
    const double C49218 = C49217 / C47952;
    const double C49424 = 2 * C49388;
    const double C49225 = C49224 / C47945;
    const double C49433 = C49398 / C47956;
    const double C49448 = C49391 - C49430;
    const double C22559 = -C49430;
    const double C49457 = C49444 + C49214;
    const double C47959 = C47958 / C47945;
    const double C30842 = C30828 * C399;
    const double C30836 = C30828 * C400;
    const double C30831 = C30828 * C401;
    const double C31034 = C30828 * C698;
    const double C31029 = C30828 * C699;
    const double C31457 = C30828 * C1445;
    const double C31455 = C30828 * C1446;
    const double C48044 = C47943 * C48034;
    const double C48042 = 2 * C48034;
    const double C48093 = C48034 / C47987;
    const double C159 = C154 + C139;
    const double C1285 = C1281 + C290;
    const double C49261 = C49256 - C49260;
    const double C49447 = C49427 / C47945;
    const double C49268 = C49264 - C49267;
    const double C49461 = C49451 / C47987;
    const double C30840 = C30823 * C131;
    const double C30834 = C30823 * C130;
    const double C32327 = C30823 * C275;
    const double C2483 = C49458 * C131;
    const double C2474 = C49458 * C130;
    const double C10053 = C49458 * C275;
    const double C48075 = C48068 * be;
    const double C48073 = C48067 * be;
    const double C146 = C49178 * C132;
    const double C2498 = C49458 * C132;
    const double C5000 = C49393 * C132;
    const double C15141 = C15102 * C132;
    const double C30846 = C30823 * C132;
    const double C289 = C49178 * C274;
    const double C2698 = C49458 * C274;
    const double C5187 = C49393 * C274;
    const double C15338 = C15102 * C274;
    const double C31033 = C30823 * C274;
    const double C421 = C49178 * C406;
    const double C2898 = C49458 * C406;
    const double C4991 = C49265 * C406;
    const double C5357 = C49393 * C406;
    const double C15120 = C15103 * C406;
    const double C15526 = C15102 * C406;
    const double C30837 = C49265 * C406;
    const double C31203 = C30823 * C406;
    const double C1268 = C49178 * C601;
    const double C7054 = C49393 * C601;
    const double C10059 = C49458 * C601;
    const double C16645 = C15102 * C601;
    const double C32331 = C30823 * C601;
    const double C1914 = C49178 * C703;
    const double C6467 = C49265 * C703;
    const double C7264 = C49393 * C703;
    const double C10697 = C49458 * C703;
    const double C16641 = C15103 * C703;
    const double C17274 = C15102 * C703;
    const double C32329 = C49265 * C703;
    const double C33142 = C30823 * C703;
    const double C48270 = ae * C48269;
    const double C950 =
        (C48181 * C48259 + C48174 * C48269 + C48174 * C48266 * ae) / C47945;
    const double C1093 = C1083 + C608;
    const double C1470 = C1462 + C710;
    const double C48342 = ae * C48341;
    const double C2331 =
        (C48251 * C48259 + C48174 * C48341 + C48174 * C48338 * ae) / C47945;
    const double C48421 = C48259 + C48419;
    const double C954 =
        ((C48257 + C48178 * C48175 * C48179) * C48177 + C48263 + C48263 +
         C48174 * (2 * ae * C48259 + C48174 * C48188)) /
        C47952;
    const double C960 = C114 * C949;
    const double C2471 = C2467 * C949;
    const double C5358 = C4982 * C949;
    const double C15114 = C15110 * C949;
    const double C31204 = C30828 * C949;
    const double C160 = C155 + C142;
    const double C161 = C156 + C145;
    const double C298 = C294 + C285;
    const double C299 = C295 + C288;
    const double C430 = C426 + C417;
    const double C431 = C427 + C420;
    const double C1286 = C1282 + C607;
    const double C1921 = C1919 + C709;
    const double C1754 = C1753 + C1279;
    const double C1920 = C1918 + C1465;
    const double C48489 = C48485 + C48479;
    const double C149 = C49178 * C133;
    const double C5009 = C49393 * C133;
    const double C30855 = C30823 * C133;
    const double C286 = C49178 * C273;
    const double C2689 = C49458 * C273;
    const double C5181 = C49393 * C273;
    const double C15329 = C15102 * C273;
    const double C31027 = C30823 * C273;
    const double C418 = C49178 * C405;
    const double C2889 = C49458 * C405;
    const double C4997 = C49265 * C405;
    const double C5351 = C49393 * C405;
    const double C15129 = C15103 * C405;
    const double C15517 = C15102 * C405;
    const double C30843 = C49265 * C405;
    const double C31197 = C30823 * C405;
    const double C1084 = C49178 * C602;
    const double C6477 = C49393 * C602;
    const double C10068 = C49458 * C602;
    const double C16654 = C15102 * C602;
    const double C32113 = C30823 * C602;
    const double C1463 = C49178 * C704;
    const double C5184 = C49265 * C704;
    const double C6698 = C49393 * C704;
    const double C15335 = C15103 * C704;
    const double C19005 = C15102 * C704;
    const double C25203 = C49458 * C704;
    const double C31030 = C49265 * C704;
    const double C32569 = C30823 * C704;
    const double C1749 = C49178 * C1262;
    const double C10523 = C49458 * C1262;
    const double C13135 = C49393 * C1262;
    const double C17103 = C15102 * C1262;
    const double C32930 = C30823 * C1262;
    const double C1912 = C49178 * C1450;
    const double C7052 = C49265 * C1450;
    const double C10691 = C49458 * C1450;
    const double C13343 = C49393 * C1450;
    const double C16647 = C15103 * C1450;
    const double C17268 = C15102 * C1450;
    const double C32333 = C49265 * C1450;
    const double C33138 = C30823 * C1450;
    const double C48207 = C48197 + C48206;
    const double C48213 = 2 * C48209;
    const double C48450 = C48251 * C48209;
    const double C48502 = C48174 * C48209;
    const double C1261 = (2 * C48251 * C48322 +
                          C48251 * (C48322 + C48209 * std::pow(C48251, 2))) /
                         C47952;
    const double C1449 = (2 * ae * (C48265 + C48281 * C48326) +
                          C48174 * (C48322 + C48209 * C48326)) /
                         C47952;
    const double C1745 =
        (3 * (C48322 + C48209 * C48326) +
         C48251 * (2 * C48251 * C48209 +
                   C48251 * (C48209 + C48181 * C48217 * C48326))) /
        C47952;
    const double C1908 =
        (2 * ae * (2 * C48251 * C48281 + C48251 * (C48281 + C48297 * C48326)) +
         C48174 * (2 * C48251 * C48209 +
                   C48251 * (C48209 + C48181 * C48217 * C48326))) /
        C47952;
    const double C48548 = C48197 + C48547;
    const double C48558 = 2 * C48556;
    const double C48653 = C48174 * C48556;
    const double C48739 = C48735 + C48726;
    const double C9209 = C49178 * C1744;
    const double C14482 = C49393 * C1744;
    const double C41833 = C30823 * C1744;
    const double C9551 = C49178 * C1907;
    const double C13133 = C49265 * C1907;
    const double C14624 = C49393 * C1907;
    const double C17101 = C15103 * C1907;
    const double C32928 = C49265 * C1907;
    const double C41975 = C30823 * C1907;
    const double C48291 = C48286 + C48289;
    const double C48372 = C48370 * ae;
    const double C2329 = C48251 * C48275 + C48370 * C48178;
    const double C3335 =
        2 * C48174 * C48370 + C48174 * (C48370 + C48466 * C48178);
    const double C48396 = C48394 * ae;
    const double C48395 = C48392 + C48393;
    const double C1269 = C113 * C1252;
    const double C1453 = C113 * C1440;
    const double C48365 = C48363 * ae;
    const double C1905 = (C48174 * (2 * C48353 + C48251 * C48362) +
                          (2 * C48354 + C48251 * C48363) * ae) /
                         C47945;
    const double C1739 = 3 * (C48266 + C48283 * C48326) +
                         C48251 * (2 * C48354 + C48251 * C48363);
    const double C1902 = C48174 * (2 * C48354 + C48251 * C48363);
    const double C2328 = C48266 + C48283 * C48326 + C48363 * C48178;
    const double C10249 =
        2 * C48174 * C48363 + C48174 * (C48363 + C48609 * C48178);
    const double C48457 = C48455 * ae;
    const double C48456 = C48453 + C48454;
    const double C48514 = C48511 * ae;
    const double C3754 = 3 * (C48266 + C48283 * C48178) +
                         C48174 * (2 * C48405 + C48174 * C48511);
    const double C48515 = ae * C48509;
    const double C48513 = C48174 * C48509;
    const double C48764 = 2 * C48509;
    const double C48574 = C48568 + C48573;
    const double C48623 = C48621 * ae;
    const double C48622 = C48619 + C48620;
    const double C48665 = C48662 * ae;
    const double C11120 = 3 * (C48338 + C48438 * C48178) +
                          C48174 * (2 * C48441 + C48174 * C48662);
    const double C48666 = ae * C48660;
    const double C48664 = C48174 * C48660;
    const double C48800 = 2 * C48660;
    const double C48746 = C48733 + C48742;
    const double C48836 = C48205 + C48743;
    const double C48745 = C48231 + C48740;
    const double C48278 = C48276 + C48277;
    const double C148 = C114 * C126;
    const double C282 = C114 * C266;
    const double C414 = C114 * C398;
    const double C5002 = C4982 * C398;
    const double C30848 = C30828 * C398;
    const double C609 = C114 * C598;
    const double C711 = C114 * C700;
    const double C5177 = C4982 * C700;
    const double C31023 = C30828 * C700;
    const double C1270 = C114 * C1256;
    const double C1454 = C114 * C1444;
    const double C5613 = C4982 * C1444;
    const double C31459 = C30828 * C1444;
    const double C48357 = C48355 + C48356;
    const double C48409 = ae * C48406;
    const double C48408 = C48174 * C48406;
    const double C48503 = 2 * C48406;
    const double C1284 = C1274 + C1275;
    const double C1469 = C1459 + C1460;
    const double C48350 = C48348 + C48349;
    const double C1750 = C114 * C1741;
    const double C1915 = C114 * C1904;
    const double C7056 = C4982 * C1904;
    const double C32344 = C30828 * C1904;
    const double C48445 = ae * C48442;
    const double C48444 = C48174 * C48442;
    const double C48654 = 2 * C48442;
    const double C48724 = C48197 + C48492;
    const double C48493 = C48234 + C48490;
    const double C48219 = C48205 + C48218;
    const double C48551 = C48550 * C48326;
    const double C48699 = C48251 * C48550;
    const double C48762 = C48174 * C48550;
    const double C48559 = C48205 + C48557;
    const double C48806 = C48174 * C48798;
    const double C48855 = C48850 + C48838;
    const double C48312 = C48302 + C48310;
    const double C48378 = C48244 + C48376;
    const double C48467 = C48174 * C48465;
    const double C48532 = C48527 + C48528;
    const double C48591 = C48585 + C48589;
    const double C48683 = C48678 + C48679;
    const double C48610 = C48251 * C48608;
    const double C48630 = C48174 * C48608;
    const double C48710 = C48705 + C48706;
    const double C48779 = ae * C48772;
    const double C48776 = C48174 * C48772;
    const double C48819 = ae * C48812;
    const double C48816 = C48174 * C48812;
    const double C48861 = C48242 + C48856;
    const double C48311 = C48181 * C48309;
    const double C48386 = C48251 * C48309;
    const double C48427 = C48174 * C48309;
    const double C48426 = C48309 * ae;
    const double C48381 = C48379 * ae;
    const double C1740 = 3 * (C48275 + C48287 * C48326) +
                         C48251 * (2 * C48370 + C48251 * C48379);
    const double C1903 = C48174 * (2 * C48370 + C48251 * C48379);
    const double C2330 = C48275 + C48287 * C48326 + C48379 * C48178;
    const double C48471 = C48469 * ae;
    const double C48537 = C48534 * ae;
    const double C3755 = 3 * (C48275 + C48287 * C48178) +
                         C48174 * (2 * C48394 + C48174 * C48534);
    const double C48594 = C48251 * C48592;
    const double C48643 = C48174 * C48592;
    const double C48642 = C48592 * ae;
    const double C48688 = C48685 * ae;
    const double C11121 = 3 * (C48347 + C48571 * C48178) +
                          C48174 * (2 * C48621 + C48174 * C48685);
    const double C48613 = C48604 + C48611;
    const double C48634 = C48632 * ae;
    const double C48714 = C48712 * ae;
    const double C17877 = 3 * (C48354 + C48452 * C48178) +
                          C48174 * (2 * C48455 + C48174 * C48712);
    const double C48782 = C48769 + C48778;
    const double C48822 = C48803 + C48818;
    const double C48866 = C48174 * C48862;
    const double C48865 = C48862 * ae;
    const double C48290 = C48174 * C48288;
    const double C127 = (4 * (2 * C48265 + C48181 * C48274) +
                         C48181 * (3 * C48274 + C48181 * C48288)) /
                        C47945;
    const double C265 = (C48251 * (3 * C48274 + C48181 * C48288)) / C47945;
    const double C599 =
        (2 * C48265 + C48181 * C48274 + C48288 * C48326) / C47945;
    const double C1751 = C114 * C1742;
    const double C48572 = C48174 * C48570;
    const double C9203 = (4 * (2 * C48337 + C48251 * C48346) +
                          C48251 * (3 * C48346 + C48251 * C48570)) /
                         C47945;
    const double C49070 = C49066 - C49069;
    const double C49441 = C49411 / C47945;
    const double C49078 = C49074 - C49077;
    const double C49455 = C49440 / C47987;
    const double C49219 = C49214 - C49218;
    const double C49445 = C49424 / C47945;
    const double C49226 = C49222 - C49225;
    const double C49459 = C49448 / C47987;
    const double C47960 = C49178 - C47959;
    const double C48051 = C48044 + C49265;
    const double C48097 = C48093 - C48096;
    const double C164 = C159 + C140;
    const double C1289 = C1285 + C1266;
    const double C36698 = C49261 * C132;
    const double C36683 = C49261 * C131;
    const double C36674 = C49261 * C130;
    const double C36895 = C49261 * C274;
    const double C36886 = C49261 * C273;
    const double C37083 = C49261 * C406;
    const double C37074 = C49261 * C405;
    const double C38291 = C49261 * C602;
    const double C38280 = C49261 * C275;
    const double C38512 = C49261 * C704;
    const double C38867 = C49261 * C601;
    const double C39082 = C49261 * C703;
    const double C47358 = C49261 * C1262;
    const double C47523 = C49261 * C1450;
    const double C49402 = C49261 * C49255;
    const double C49437 = C49404 + C49261;
    const double C2486 = C49447 * C405;
    const double C2477 = C49447 * C406;
    const double C2695 = C49447 * C704;
    const double C10061 = C49447 * C1450;
    const double C10055 = C49447 * C703;
    const double C10521 = C49447 * C1907;
    const double C36686 = C49268 * C405;
    const double C36677 = C49268 * C406;
    const double C36892 = C49268 * C704;
    const double C38282 = C49268 * C703;
    const double C38865 = C49268 * C1450;
    const double C47356 = C49268 * C1907;
    const double C49406 = C49268 / C47987;
    const double C49403 = C49268 * C49255;
    const double C20183 = C49461 - (C49261 * C49257) / C47945;
    const double C48079 = C48075 / C47945;
    const double C48078 = C48073 / C47945;
    const double C955 =
        (C48181 * C48188 + C48270 + C48270 +
         C48174 * (2 * ae * C48265 + C48174 * C48181 * C48197)) /
        C47952;
    const double C961 = C114 * C950;
    const double C2479 = C2467 * C950;
    const double C5353 = C4982 * C950;
    const double C15122 = C15110 * C950;
    const double C31199 = C30828 * C950;
    const double C1097 = C1093 + C608;
    const double C1474 = C1470 + C710;
    const double C2337 =
        (C48251 * C48188 + C48342 + C48342 +
         C48174 * (2 * ae * C48337 + C48174 * C48251 * C48197)) /
        C47952;
    const double C2344 = C114 * C2331;
    const double C2699 = C2467 * C2331;
    const double C5747 = C4982 * C2331;
    const double C15339 = C15110 * C2331;
    const double C31593 = C30828 * C2331;
    const double C48422 = C48421 + C48418;
    const double C165 = C160 + C143;
    const double C166 = C161 + C146;
    const double C303 = C299 + C289;
    const double C435 = C431 + C421;
    const double C1290 = C1286 + C1268;
    const double C1923 = C1921 + C1914;
    const double C302 = C298 + C286;
    const double C434 = C430 + C418;
    const double C1755 = C1754 + C1749;
    const double C1922 = C1920 + C1912;
    const double C134 =
        (4 * (2 * C48181 * C48197 + C48181 * C48207) +
         C48181 * (3 * C48207 +
                   C48181 * (2 * C48181 * C48205 +
                             C48181 * (C48205 +
                                       (C48200 * C48201 +
                                        C48178 * bs[7] * std::pow(C48176, 7)) *
                                           C48177 * C48193)))) /
        C47952;
    const double C272 =
        ((yP - yQ) * (2 * C48181 * C48197 + C48181 * C48207)) / C47952;
    const double C404 =
        (2 * ae * (2 * C48181 * C48234 + C48181 * (C48234 + C48231 * C48193)) +
         C48174 * (2 * C48181 * C48197 + C48181 * C48207)) /
        C47952;
    const double C603 =
        (C48188 + C48197 * C48193 + C48207 * std::pow(yP - yQ, 2)) / C47952;
    const double C705 = (2 * ae * C48251 * (C48234 + C48231 * C48193) +
                         C48174 * C48251 * C48207) /
                        C47952;
    const double C48512 = C48508 + C48502;
    const double C1276 = C49178 * C1261;
    const double C12579 = C49393 * C1261;
    const double C32341 = C30823 * C1261;
    const double C1461 = C49178 * C1449;
    const double C6475 = C49265 * C1449;
    const double C10070 = C49447 * C1449;
    const double C12784 = C49393 * C1449;
    const double C16656 = C15103 * C1449;
    const double C32115 = C49265 * C1449;
    const double C32565 = C30823 * C1449;
    const double C38289 = C49268 * C1449;
    const double C9212 = C49178 * C1745;
    const double C11510 = C49178 * C1908;
    const double C12577 = C49265 * C1908;
    const double C32338 = C49265 * C1908;
    const double C9205 =
        (4 * (2 * C48436 + C48251 * C48548) +
         C48251 *
             (3 * C48548 + C48251 * (2 * C48251 * C48205 +
                                     C48251 * (C48205 + C48217 * C48326)))) /
        C47952;
    const double C9305 =
        (2 * ae *
             (3 * C48346 +
              C48251 * (2 * C48437 + C48251 * (C48231 + C48242 * C48326))) +
         C48174 *
             (3 * C48548 + C48251 * (2 * C48251 * C48205 +
                                     C48251 * (C48205 + C48217 * C48326)))) /
        C47952;
    const double C48663 = C48659 + C48653;
    const double C48744 = C48174 * C48739;
    const double C48835 = 2 * C48739;
    const double C48292 = C48291 * ae;
    const double C397 = (C48174 * (3 * C48274 + C48181 * C48288) +
                         (3 * C48275 + C48181 * C48291) * ae) /
                        C47945;
    const double C701 =
        (C48174 * C48251 * C48288 + C48251 * C48291 * ae) / C47945;
    const double C120 = 4 * (2 * C48266 + C48181 * C48275) +
                        C48181 * (3 * C48275 + C48181 * C48291);
    const double C259 = C48251 * (3 * C48275 + C48181 * C48291);
    const double C391 = C48174 * (3 * C48275 + C48181 * C48291);
    const double C594 = 2 * C48266 + C48181 * C48275 + C48291 * C48326;
    const double C696 = C48174 * C48251 * C48291;
    const double C947 = 2 * C48266 + C48181 * C48275 + C48291 * C48178;
    const double C1255 =
        2 * C48251 * C48291 + C48251 * (C48291 + C48309 * C48326);
    const double C1443 = C48174 * (C48291 + C48309 * C48326);
    const double C2871 =
        2 * C48174 * C48291 + C48174 * (C48291 + C48309 * C48178);
    const double C48373 = C48371 + C48372;
    const double C48398 = ae * C48395;
    const double C48397 = C48174 * C48395;
    const double C48526 = 2 * C48395;
    const double C48366 = C48364 + C48365;
    const double C1916 = C114 * C1905;
    const double C7058 = C4982 * C1905;
    const double C32337 = C30828 * C1905;
    const double C9211 = C113 * C1739;
    const double C11509 = C113 * C1902;
    const double C48459 = ae * C48456;
    const double C48458 = C48174 * C48456;
    const double C48700 = 2 * C48456;
    const double C48760 = C48209 + C48515;
    const double C48516 = C48281 + C48513;
    const double C48575 = C48574 * ae;
    const double C9303 = (C48174 * (3 * C48346 + C48251 * C48570) +
                          (3 * C48347 + C48251 * C48574) * ae) /
                         C47945;
    const double C9201 = 4 * (2 * C48338 + C48251 * C48347) +
                         C48251 * (3 * C48347 + C48251 * C48574);
    const double C9301 = C48174 * (3 * C48347 + C48251 * C48574);
    const double C9784 = 2 * C48338 + C48251 * C48347 + C48574 * C48178;
    const double C10682 =
        2 * C48174 * C48574 + C48174 * (C48574 + C48592 * C48178);
    const double C48625 = ae * C48622;
    const double C48624 = C48174 * C48622;
    const double C48677 = 2 * C48622;
    const double C48796 = C48556 + C48666;
    const double C48667 = C48437 + C48664;
    const double C48749 = C48746 * ae;
    const double C17972 = 4 * (2 * C48416 + C48174 * C48488) +
                          C48174 * (3 * C48488 + C48174 * C48746);
    const double C48849 = C48836 + C48743;
    const double C48748 = C48745 + C48737;
    const double C48279 = ae * C48278;
    const double C951 =
        (C48259 + C48234 * C48193 + C48174 * C48278 + C48174 * C48275 * ae) /
        C47945;
    const double C157 = C147 + C148;
    const double C293 = C281 + C282;
    const double C425 = C413 + C414;
    const double C1095 = C1087 + C609;
    const double C1468 = C1456 + C711;
    const double C1283 = C1269 + C1270;
    const double C1467 = C1453 + C1454;
    const double C48358 = ae * C48357;
    const double C2333 =
        (C48251 * C48265 + C48174 * C48357 + C48174 * C48354 * ae) / C47945;
    const double C48410 = C48265 + C48408;
    const double C1288 = C1284 + C1275;
    const double C1473 = C1469 + C1460;
    const double C48351 = ae * C48350;
    const double C2332 =
        (C48259 + C48234 * C48326 + C48174 * C48350 + C48174 * C48347 * ae) /
        C47945;
    const double C9214 = C9208 + C1750;
    const double C9554 = C9550 + C1915;
    const double C48446 = C48337 + C48444;
    const double C48734 = C48724 + C48492;
    const double C48494 = C48493 + C48487;
    const double C48220 = C48181 * C48219;
    const double C48464 = C48251 * C48219;
    const double C48525 = C48174 * C48219;
    const double C707 =
        (2 * ae * C48251 *
             (3 * C48244 + C48181 * (2 * C48181 * C48242 +
                                     C48181 * (C48242 + C48212 * C48211 *
                                                            C48229 * C48193))) +
         C48174 * C48251 *
             (3 * C48219 +
              C48181 *
                  (2 * C48181 * C48217 +
                   C48181 * (C48217 + (C48211 * C48212 +
                                       C48178 * bs[8] * std::pow(C48172, 8)) *
                                          C48177 * C48193)))) /
        C47952;
    const double C1260 = (2 * C48251 * C48207 +
                          C48251 * (C48207 + C48219 * std::pow(C48251, 2))) /
                         C47952;
    const double C1448 = (2 * ae * (C48274 + C48244 * C48326) +
                          C48174 * (C48207 + C48219 * C48326)) /
                         C47952;
    const double C1746 =
        (3 * (C48207 + C48219 * C48326) +
         C48251 * (2 * C48251 * C48219 +
                   C48251 * (C48219 +
                             (C48217 + (C48211 * C48212 +
                                        C48178 * bs[8] * std::pow(C48172, 8)) *
                                           C48177 * C48193) *
                                 C48326))) /
        C47952;
    const double C1909 =
        (2 * ae * (2 * C48251 * C48244 + C48251 * (C48244 + C48308 * C48326)) +
         C48174 * (2 * C48251 * C48219 +
                   C48251 * (C48219 +
                             (C48217 + (C48211 * C48212 +
                                        C48178 * bs[8] * std::pow(C48172, 8)) *
                                           C48177 * C48193) *
                                 C48326))) /
        C47952;
    const double C48552 = C48209 + C48551;
    const double C48704 = C48174 * C48699;
    const double C48775 = C48771 + C48762;
    const double C48560 = C48251 * C48559;
    const double C48676 = C48174 * C48559;
    const double C48811 = C48805 + C48806;
    const double C48860 = C48174 * C48855;
    const double C48314 = C48181 * C48312;
    const double C48385 = C48251 * C48312;
    const double C48425 = C48174 * C48312;
    const double C1259 =
        (2 * C48251 * C48288 + C48251 * (C48288 + C48312 * C48326)) / C47945;
    const double C1447 = (C48174 * (C48288 + C48312 * C48326) +
                          (C48291 + C48309 * C48326) * ae) /
                         C47945;
    const double C48380 = C48174 * C48378;
    const double C1743 = (3 * (C48274 + C48244 * C48326) +
                          C48251 * (2 * C48369 + C48251 * C48378)) /
                         C47945;
    const double C1906 = (C48174 * (2 * C48369 + C48251 * C48378) +
                          (2 * C48370 + C48251 * C48379) * ae) /
                         C47945;
    const double C48470 = C48467 + C48468;
    const double C48538 = ae * C48532;
    const double C48536 = C48174 * C48532;
    const double C48593 = C48251 * C48591;
    const double C48641 = C48174 * C48591;
    const double C48689 = ae * C48683;
    const double C48687 = C48174 * C48683;
    const double C48612 = C48602 + C48610;
    const double C48633 = C48630 + C48631;
    const double C48715 = ae * C48710;
    const double C48713 = C48174 * C48710;
    const double C48781 = C48297 + C48776;
    const double C48821 = C48580 + C48816;
    const double C48864 = C48861 + C48852;
    const double C48313 = C48299 + C48311;
    const double C48388 = C48386 * ae;
    const double C2677 = C48251 * C48291 + C48386 * C48178;
    const double C48429 = C48427 * ae;
    const double C48596 = C48582 + C48594;
    const double C48645 = C48643 * ae;
    const double C48615 = C48613 * ae;
    const double C9202 = 4 * (2 * C48354 + C48251 * C48363) +
                         C48251 * (3 * C48363 + C48251 * C48613);
    const double C9302 = C48174 * (3 * C48363 + C48251 * C48613);
    const double C10048 = 2 * C48354 + C48251 * C48363 + C48613 * C48178;
    const double C48785 = C48782 * ae;
    const double C17973 = 4 * (2 * C48405 + C48174 * C48511) +
                          C48174 * (3 * C48511 + C48174 * C48782);
    const double C48824 = C48822 * ae;
    const double C18219 = 4 * (2 * C48441 + C48174 * C48662) +
                          C48174 * (3 * C48662 + C48174 * C48822);
    const double C48869 = C48847 + C48866;
    const double C151 = C114 * C127;
    const double C279 = C114 * C265;
    const double C610 = C114 * C599;
    const double C9210 = C114 * C9203;
    const double C49369 = C49070 * C49060;
    const double C49413 = C49374 + C49070;
    const double C49377 = C49078 / C47987;
    const double C49373 = C49078 * C49060;
    const double C3871 = C49455 - (C49070 * C49061) / C47945;
    const double C49395 = C49219 * C49213;
    const double C49432 = C49397 + C49219;
    const double C49399 = C49226 / C47987;
    const double C49396 = C49226 * C49213;
    const double C11230 = C49459 - (C49219 * C49215) / C47945;
    const double C47961 = C47960 * C47954;
    const double C48012 = C47960 * ae;
    const double C2463 =
        (((0 - (C47943 * C47951) / C47945) * ae) / C47945 - (0 * be) / C47956) /
            (2 * C47945) +
        ((C47943 * ((C47960 * ae) / C47945 - C47951 / C47956) + C49393) * ae) /
            C47945 +
        (0 * ae) / C47945 - C47955 / C47952;
    const double C2465 =
        ((C47960 * ae) / C47945 - C47951 / C47956) / (2 * C47945) +
        ((C47943 * ((0 * ae) / C47945 - C47955 / C47952) + C49265) * ae) /
            C47945;
    const double C4980 = (C47960 * ae) / C47945 - C47951 / C47956;
    const double C15106 =
        ((-(0 * be) / C47945) / C47987 -
         ((0 - (C47943 * C47951) / C47945) * be) / C47945) /
            C47987 -
        ((C47943 * ((-C47951 / C47945) / C47987 - (C47960 * be) / C47945) +
          C30823) *
         be) /
            C47945 +
        (-C47957 / C47945) / C47987 - (0 * be) / C47945;
    const double C15108 =
        ((-C47951 / C47945) / C47987 - (C47960 * be) / C47945) / C47987 -
        ((C47943 * ((-C47957 / C47945) / C47987 - (0 * be) / C47945) + C49265) *
         be) /
            C47945;
    const double C30826 = (-C48007) / C47987 - (C47960 * be) / C47945;
    const double C48057 = C48051 * be;
    const double C36679 = C48097 * C950;
    const double C36671 = C48097 * C949;
    const double C36896 = C48097 * C2331;
    const double C48098 = 2 * C48097;
    const double C17779 =
        (C48097 / C47987 + (0 * ae) / C47945) / C47987 - (0 * be) / C47945;
    const double C20194 = C48097 / C47987 - (0 * be) / C47945;
    const double C33809 = C48097 / C47987 + (0 * ae) / C47945;
    const double C169 = C164 * C49161;
    const double C1081 = C164 * C49457;
    const double C3876 = C164 * C49391;
    const double C7933 = C164 * C7926;
    const double C22566 = C164 * C22559;
    const double C26400 = C164 * C49219;
    const double C49434 = C49402 / C47945;
    const double C49452 = C49437 / C47987;
    const double C49453 = C49438 + C49406;
    const double C20185 = C49406 - C49266 / C47956;
    const double C49436 = C49403 / C47945;
    const double C20223 = C20183 * C131;
    const double C20202 = C20183 * C130;
    const double C20393 = C20183 * C274;
    const double C20555 = C20183 * C406;
    const double C21545 = C20183 * C275;
    const double C21929 = C20183 * C601;
    const double C22083 = C20183 * C703;
    const double C48082 = C48074 - C48079;
    const double C48081 = C48036 - C48078;
    const double C2480 = C49428 * C955;
    const double C2895 = C49447 * C955;
    const double C5354 = C49265 * C955;
    const double C15123 = C49428 * C955;
    const double C15523 = C15103 * C955;
    const double C31200 = C49265 * C955;
    const double C36680 = C36661 * C955;
    const double C37080 = C49268 * C955;
    const double C1100 = C1097 + C1084;
    const double C1478 = C1474 + C1463;
    const double C7262 = C49265 * C2337;
    const double C10057 = C49428 * C2337;
    const double C10695 = C49447 * C2337;
    const double C16643 = C49428 * C2337;
    const double C17272 = C15103 * C2337;
    const double C33140 = C49265 * C2337;
    const double C38284 = C36661 * C2337;
    const double C39080 = C49268 * C2337;
    const double C48423 = ae * C48422;
    const double C2874 =
        (2 * C48262 + C48174 * C48422 + (C48257 + C48182 * C48178) * ae) /
        C47945;
    const double C170 = C165 * C49161;
    const double C1085 = C165 * C49457;
    const double C3878 = C165 * C49391;
    const double C7936 = C165 * C7926;
    const double C22568 = C165 * C22559;
    const double C26403 = C165 * C49219;
    const double C171 = C166 * C49161;
    const double C1092 = C166 * C49457;
    const double C3880 = C166 * C49391;
    const double C7941 = C166 * C7926;
    const double C22570 = C166 * C22559;
    const double C26408 = C166 * C49219;
    const double C307 = C303 * C49161;
    const double C1082 = C303 * C49445;
    const double C1278 = C303 * C49457;
    const double C3877 = C303 * C49223;
    const double C4021 = C303 * C49391;
    const double C7934 = C303 * C7927;
    const double C8095 = C303 * C7926;
    const double C22567 = C303 * C49223;
    const double C22711 = C303 * C22559;
    const double C26401 = C303 * C49226;
    const double C26562 = C303 * C49219;
    const double C439 = C435 * C49161;
    const double C1464 = C435 * C49457;
    const double C4158 = C435 * C49391;
    const double C8247 = C435 * C7926;
    const double C22847 = C435 * C22559;
    const double C26714 = C435 * C49219;
    const double C306 = C302 * C49161;
    const double C1086 = C302 * C49445;
    const double C1273 = C302 * C49457;
    const double C3879 = C302 * C49223;
    const double C4019 = C302 * C49391;
    const double C7937 = C302 * C7927;
    const double C8092 = C302 * C7926;
    const double C22569 = C302 * C49223;
    const double C22709 = C302 * C22559;
    const double C26404 = C302 * C49226;
    const double C26559 = C302 * C49219;
    const double C438 = C434 * C49161;
    const double C1458 = C434 * C49457;
    const double C4156 = C434 * C49391;
    const double C8244 = C434 * C7926;
    const double C22845 = C434 * C22559;
    const double C26711 = C434 * C49219;
    const double C152 = C49178 * C134;
    const double C283 = C49178 * C272;
    const double C5175 = C49393 * C272;
    const double C31021 = C30823 * C272;
    const double C415 = C49178 * C404;
    const double C2495 = C49447 * C404;
    const double C5003 = C49265 * C404;
    const double C5345 = C49393 * C404;
    const double C15138 = C15103 * C404;
    const double C30849 = C49265 * C404;
    const double C31191 = C30823 * C404;
    const double C36695 = C49268 * C404;
    const double C1088 = C49178 * C603;
    const double C6472 = C49393 * C603;
    const double C32119 = C30823 * C603;
    const double C1457 = C49178 * C705;
    const double C2686 = C49447 * C705;
    const double C5178 = C49265 * C705;
    const double C6694 = C49393 * C705;
    const double C15326 = C15103 * C705;
    const double C31024 = C49265 * C705;
    const double C35473 = C30823 * C705;
    const double C36883 = C49268 * C705;
    const double C9458 = C49178 * C9205;
    const double C9549 = C49178 * C9305;
    const double C14480 = C49265 * C9305;
    const double C41831 = C49265 * C9305;
    const double C48293 = C48290 + C48292;
    const double C411 = C114 * C397;
    const double C5005 = C4982 * C397;
    const double C30851 = C30828 * C397;
    const double C712 = C114 * C701;
    const double C5171 = C4982 * C701;
    const double C31017 = C30828 * C701;
    const double C150 = C113 * C120;
    const double C278 = C113 * C259;
    const double C410 = C113 * C391;
    const double C1089 = C113 * C594;
    const double C4152 = C113 * C696;
    const double C48374 = ae * C48373;
    const double C2335 =
        (C48251 * C48274 + C48174 * C48373 + C48174 * C48370 * ae) / C47945;
    const double C48399 = C48274 + C48397;
    const double C48367 = ae * C48366;
    const double C2334 =
        (C48265 + C48281 * C48326 + C48174 * C48366 + C48174 * C48363 * ae) /
        C47945;
    const double C9215 = C9211 + C1751;
    const double C11514 = C11509 + C1916;
    const double C48460 = C48353 + C48458;
    const double C48770 = C48760 + C48515;
    const double C48517 = C48516 + C48510;
    const double C48576 = C48572 + C48575;
    const double C9308 = C114 * C9303;
    const double C13137 = C4982 * C9303;
    const double C32932 = C30828 * C9303;
    const double C9457 = C113 * C9201;
    const double C9548 = C113 * C9301;
    const double C48626 = C48346 + C48624;
    const double C48804 = C48796 + C48666;
    const double C48668 = C48667 + C48661;
    const double C48751 = ae * C48748;
    const double C48750 = C48174 * C48748;
    const double C48840 = 3 * C48748;
    const double C956 = (C48188 + C48197 * C48193 + C48279 + C48279 +
                         C48174 * (2 * ae * C48274 + C48174 * C48207)) /
                        C47952;
    const double C962 = C114 * C951;
    const double C2488 = C2467 * C951;
    const double C5347 = C4982 * C951;
    const double C15131 = C15110 * C951;
    const double C31193 = C30828 * C951;
    const double C36688 = C48097 * C951;
    const double C162 = C157 + C148;
    const double C297 = C293 + C282;
    const double C429 = C425 + C414;
    const double C1098 = C1095 + C609;
    const double C1472 = C1468 + C711;
    const double C1287 = C1283 + C1270;
    const double C1471 = C1467 + C1454;
    const double C2339 =
        (C48251 * C48322 + C48358 + C48358 +
         C48174 * (2 * ae * C48353 + C48174 * C48251 * C48209)) /
        C47952;
    const double C2346 = C114 * C2333;
    const double C2691 = C2467 * C2333;
    const double C5749 = C4982 * C2333;
    const double C15331 = C15110 * C2333;
    const double C31595 = C30828 * C2333;
    const double C36888 = C48097 * C2333;
    const double C48411 = C48410 + C48407;
    const double C1292 = C1288 + C1276;
    const double C1477 = C1473 + C1461;
    const double C2338 =
        (C48188 + C48197 * C48326 + C48351 + C48351 +
         C48174 * (2 * ae * C48346 + C48174 * (C48197 + C48205 * C48326))) /
        C47952;
    const double C2345 = C114 * C2332;
    const double C3181 = C2467 * C2332;
    const double C7266 = C4982 * C2332;
    const double C15809 = C15110 * C2332;
    const double C32570 = C30828 * C2332;
    const double C37366 = C48097 * C2332;
    const double C9216 = C9214 + C1750;
    const double C9556 = C9554 + C1915;
    const double C48447 = C48446 + C48443;
    const double C48747 = C48734 + C48744;
    const double C48496 = ae * C48494;
    const double C48495 = C48174 * C48494;
    const double C48727 = 3 * C48494;
    const double C48221 = C48213 + C48220;
    const double C48535 = C48531 + C48525;
    const double C1271 = C49178 * C1260;
    const double C1455 = C49178 * C1448;
    const double C6470 = C49265 * C1448;
    const double C32117 = C49265 * C1448;
    const double C9206 =
        (4 * (2 * C48450 + C48251 * C48552) +
         C48251 * (3 * C48552 +
                   C48251 * (2 * C48251 * C48550 +
                             C48251 * (C48550 + C48181 *
                                                    (C48211 * C48212 +
                                                     C48178 * bs[8] *
                                                         std::pow(C48172, 8)) *
                                                    C48177 * C48326)))) /
        C47952;
    const double C9306 =
        (2 * ae *
             (3 * C48362 +
              C48251 *
                  (2 * C48451 + C48251 * (C48297 + C48181 * C48303 * C48326))) +
         C48174 * (3 * C48552 +
                   C48251 * (2 * C48251 * C48550 +
                             C48251 * (C48550 + C48181 *
                                                    (C48211 * C48212 +
                                                     C48178 * bs[8] *
                                                         std::pow(C48172, 8)) *
                                                    C48177 * C48326)))) /
        C47952;
    const double C48709 = C48703 + C48704;
    const double C48780 = C48174 * C48775;
    const double C48561 = C48558 + C48560;
    const double C48686 = C48682 + C48676;
    const double C48815 = C48174 * C48811;
    const double C48863 = C48849 + C48860;
    const double C48316 = C48296 + C48314;
    const double C48387 = C48174 * C48385;
    const double C48428 = C48425 + C48426;
    const double C1280 = C114 * C1259;
    const double C1466 = C114 * C1447;
    const double C5615 = C4982 * C1447;
    const double C31461 = C30828 * C1447;
    const double C48382 = C48380 + C48381;
    const double C1752 = C114 * C1743;
    const double C1917 = C114 * C1906;
    const double C7060 = C4982 * C1906;
    const double C32347 = C30828 * C1906;
    const double C48473 = ae * C48470;
    const double C48472 = C48174 * C48470;
    const double C48539 = C48244 + C48536;
    const double C48595 = C48579 + C48593;
    const double C48644 = C48641 + C48642;
    const double C48690 = C48564 + C48687;
    const double C48614 = C48174 * C48612;
    const double C9204 = (4 * (2 * C48353 + C48251 * C48362) +
                          C48251 * (3 * C48362 + C48251 * C48612)) /
                         C47945;
    const double C9304 = (C48174 * (3 * C48362 + C48251 * C48612) +
                          (3 * C48363 + C48251 * C48613) * ae) /
                         C47945;
    const double C48636 = ae * C48633;
    const double C48635 = C48174 * C48633;
    const double C48716 = C48451 + C48713;
    const double C48784 = C48781 + C48773;
    const double C48823 = C48821 + C48813;
    const double C48870 = ae * C48864;
    const double C48868 = C48174 * C48864;
    const double C48315 = C48313 * ae;
    const double C121 = 5 * (3 * C48275 + C48181 * C48291) +
                        C48181 * (4 * C48291 + C48181 * C48313);
    const double C264 = C48251 * (4 * C48291 + C48181 * C48313);
    const double C396 = C48174 * (4 * C48291 + C48181 * C48313);
    const double C595 = 3 * C48275 + C48181 * C48291 + C48313 * C48326;
    const double C697 = C48174 * C48251 * C48313;
    const double C948 = 3 * C48275 + C48181 * C48291 + C48313 * C48178;
    const double C48598 = C48596 * ae;
    const double C9453 = 5 * (3 * C48347 + C48251 * C48574) +
                         C48251 * (4 * C48574 + C48251 * C48596);
    const double C9544 = C48174 * (4 * C48574 + C48251 * C48596);
    const double C9785 = 3 * C48347 + C48251 * C48574 + C48596 * C48178;
    const double C48873 = C48869 * ae;
    const double C18453 = 5 * (3 * C48488 + C48174 * C48746) +
                          C48174 * (4 * C48746 + C48174 * C48869);
    const double C49409 = C49369 / C47945;
    const double C49442 = C49413 / C47987;
    const double C49443 = C49415 + C49377;
    const double C3873 = C49377 - C49076 / C47956;
    const double C49412 = C49373 / C47945;
    const double C49429 = C49395 / C47945;
    const double C49449 = C49432 / C47987;
    const double C49450 = C49433 + C49399;
    const double C11232 = C49399 - C49224 / C47956;
    const double C49431 = C49396 / C47945;
    const double C11244 = C165 * C11230;
    const double C11237 = C164 * C11230;
    const double C11378 = C303 * C11230;
    const double C11513 = C435 * C11230;
    const double C47969 = C47943 * C47961;
    const double C48014 = C47961 / C47956;
    const double C2462 =
        (ae * -2 * C47951) / (C47952 * 2 * C47945) +
        (((C47943 * ((-4 * C47955) / C47945 - (C47943 * C47961) / C47945) *
           ae) /
              C47945 +
          2 * ((C47960 * ae) / C47945 - C47951 / C47956)) *
         ae) /
            C47945 -
        C47961 / C47956;
    const double C2466 = (-C47961 / C47945) / (4 * C47952);
    const double C4981 = (-C47961 / C47945) / (2 * C47945);
    const double C15109 = (-C47961 / C47945) / (4 * C47952);
    const double C17778 =
        (-C47961 / C47945) / (4 * C47952 * std::pow(C47987, 2));
    const double C20193 = (-C47961 / C47945) / (4 * C48005);
    const double C30827 = (-C47961 / C47945) / C47987;
    const double C33808 = (-C47961 / C47945) / (4 * C48005);
    const double C36666 = (-C47961 / C47945) / C48092;
    const double C48025 = C48012 / C47945;
    const double C2499 = C2463 * C126;
    const double C2497 = C2463 * C125;
    const double C2482 = C2463 * C124;
    const double C2473 = C2463 * C123;
    const double C2469 = C2463 * C122;
    const double C2702 = C2463 * C266;
    const double C2701 = C2463 * C269;
    const double C2697 = C2463 * C268;
    const double C2688 = C2463 * C267;
    const double C2902 = C2463 * C398;
    const double C2901 = C2463 * C401;
    const double C2897 = C2463 * C400;
    const double C2888 = C2463 * C399;
    const double C3185 = C2463 * C598;
    const double C3182 = C2463 * C597;
    const double C3179 = C2463 * C596;
    const double C3349 = C2463 * C700;
    const double C3346 = C2463 * C699;
    const double C3343 = C2463 * C698;
    const double C3769 = C2463 * C951;
    const double C3766 = C2463 * C950;
    const double C3763 = C2463 * C949;
    const double C10073 = C2463 * C1257;
    const double C10066 = C2463 * C1258;
    const double C10258 = C2463 * C1445;
    const double C10257 = C2463 * C1446;
    const double C10524 = C2463 * C1741;
    const double C10698 = C2463 * C1904;
    const double C11130 = C2463 * C2332;
    const double C11127 = C2463 * C2331;
    const double C26281 = C2463 * C2333;
    const double C2500 = C2465 * C397;
    const double C2494 = C2465 * C398;
    const double C2485 = C2465 * C399;
    const double C2476 = C2465 * C400;
    const double C2470 = C2465 * C401;
    const double C2703 = C2465 * C701;
    const double C2700 = C2465 * C698;
    const double C2694 = C2465 * C699;
    const double C2685 = C2465 * C700;
    const double C2900 = C2465 * C949;
    const double C2894 = C2465 * C950;
    const double C2885 = C2465 * C951;
    const double C3186 = C2465 * C1444;
    const double C3183 = C2465 * C1445;
    const double C3180 = C2465 * C1446;
    const double C3347 = C2465 * C2333;
    const double C3344 = C2465 * C2331;
    const double C10074 = C2465 * C1905;
    const double C10065 = C2465 * C1904;
    const double C10256 = C2465 * C2332;
    const double C10525 = C2465 * C9303;
    const double C5010 = C4980 * C127;
    const double C5008 = C4980 * C126;
    const double C4999 = C4980 * C125;
    const double C4993 = C4980 * C124;
    const double C4987 = C4980 * C123;
    const double C4984 = C4980 * C122;
    const double C5190 = C4980 * C265;
    const double C5189 = C4980 * C269;
    const double C5186 = C4980 * C268;
    const double C5180 = C4980 * C267;
    const double C5174 = C4980 * C266;
    const double C5360 = C4980 * C397;
    const double C5359 = C4980 * C401;
    const double C5356 = C4980 * C400;
    const double C5350 = C4980 * C399;
    const double C5344 = C4980 * C398;
    const double C5614 = C4980 * C599;
    const double C5612 = C4980 * C598;
    const double C5610 = C4980 * C597;
    const double C5608 = C4980 * C596;
    const double C5752 = C4980 * C701;
    const double C5750 = C4980 * C700;
    const double C5748 = C4980 * C699;
    const double C5746 = C4980 * C698;
    const double C6116 = C4980 * C951;
    const double C6114 = C4980 * C950;
    const double C6112 = C4980 * C949;
    const double C7059 = C4980 * C1256;
    const double C7057 = C4980 * C1257;
    const double C7055 = C4980 * C1258;
    const double C7269 = C4980 * C1444;
    const double C7267 = C4980 * C1445;
    const double C7265 = C4980 * C1446;
    const double C7813 = C4980 * C2333;
    const double C7811 = C4980 * C2331;
    const double C13138 = C4980 * C1742;
    const double C13136 = C4980 * C1741;
    const double C13346 = C4980 * C1905;
    const double C13344 = C4980 * C1904;
    const double C13888 = C4980 * C2332;
    const double C14483 = C4980 * C9203;
    const double C14625 = C4980 * C9303;
    const double C15142 = C15106 * C126;
    const double C15140 = C15106 * C125;
    const double C15125 = C15106 * C124;
    const double C15116 = C15106 * C123;
    const double C15112 = C15106 * C122;
    const double C15342 = C15106 * C266;
    const double C15341 = C15106 * C269;
    const double C15337 = C15106 * C268;
    const double C15328 = C15106 * C267;
    const double C15530 = C15106 * C398;
    const double C15529 = C15106 * C401;
    const double C15525 = C15106 * C400;
    const double C15516 = C15106 * C399;
    const double C15813 = C15106 * C598;
    const double C15810 = C15106 * C597;
    const double C15807 = C15106 * C596;
    const double C15968 = C15106 * C700;
    const double C15965 = C15106 * C699;
    const double C15962 = C15106 * C698;
    const double C16379 = C15106 * C951;
    const double C16376 = C15106 * C950;
    const double C16373 = C15106 * C949;
    const double C16659 = C15106 * C1257;
    const double C16652 = C15106 * C1258;
    const double C16838 = C15106 * C1445;
    const double C16837 = C15106 * C1446;
    const double C17104 = C15106 * C1741;
    const double C17275 = C15106 * C1904;
    const double C17701 = C15106 * C2332;
    const double C17698 = C15106 * C2331;
    const double C20083 = C15106 * C2333;
    const double C15143 = C15108 * C397;
    const double C15137 = C15108 * C398;
    const double C15128 = C15108 * C399;
    const double C15119 = C15108 * C400;
    const double C15113 = C15108 * C401;
    const double C15343 = C15108 * C701;
    const double C15340 = C15108 * C698;
    const double C15334 = C15108 * C699;
    const double C15325 = C15108 * C700;
    const double C15528 = C15108 * C949;
    const double C15522 = C15108 * C950;
    const double C15513 = C15108 * C951;
    const double C15814 = C15108 * C1444;
    const double C15811 = C15108 * C1445;
    const double C15808 = C15108 * C1446;
    const double C15966 = C15108 * C2333;
    const double C15963 = C15108 * C2331;
    const double C16660 = C15108 * C1905;
    const double C16651 = C15108 * C1904;
    const double C16836 = C15108 * C2332;
    const double C17105 = C15108 * C9303;
    const double C30856 = C30826 * C127;
    const double C30854 = C30826 * C126;
    const double C30845 = C30826 * C125;
    const double C30839 = C30826 * C124;
    const double C30833 = C30826 * C123;
    const double C30830 = C30826 * C122;
    const double C31036 = C30826 * C265;
    const double C31035 = C30826 * C269;
    const double C31032 = C30826 * C268;
    const double C31026 = C30826 * C267;
    const double C31020 = C30826 * C266;
    const double C31206 = C30826 * C397;
    const double C31205 = C30826 * C401;
    const double C31202 = C30826 * C400;
    const double C31196 = C30826 * C399;
    const double C31190 = C30826 * C398;
    const double C31460 = C30826 * C599;
    const double C31458 = C30826 * C598;
    const double C31456 = C30826 * C597;
    const double C31454 = C30826 * C596;
    const double C31598 = C30826 * C701;
    const double C31596 = C30826 * C700;
    const double C31594 = C30826 * C699;
    const double C31592 = C30826 * C698;
    const double C31962 = C30826 * C951;
    const double C31960 = C30826 * C950;
    const double C31958 = C30826 * C949;
    const double C32346 = C30826 * C1256;
    const double C32345 = C30826 * C1258;
    const double C32340 = C30826 * C1257;
    const double C32572 = C30826 * C1444;
    const double C32571 = C30826 * C1446;
    const double C32564 = C30826 * C1445;
    const double C32933 = C30826 * C1742;
    const double C32931 = C30826 * C1741;
    const double C33145 = C30826 * C1905;
    const double C33143 = C30826 * C1904;
    const double C33697 = C30826 * C2333;
    const double C33695 = C30826 * C2332;
    const double C33693 = C30826 * C2331;
    const double C41834 = C30826 * C9203;
    const double C41976 = C30826 * C9303;
    const double C48065 = C48057 / C47945;
    const double C49465 = C49434 + C49461;
    const double C20184 = C49452 - (C49268 * C49257) / C47945;
    const double C33823 = C49453 * C955;
    const double C42577 = C49453 * C2337;
    const double C17768 = C49453 / C47987 - C49266 / C48095;
    const double C20208 = C20185 * C955;
    const double C21549 = C20185 * C2337;
    const double C49462 = C49436 + C49452;
    const double C1103 = C1100 * C49425;
    const double C1277 = C1100 * C49445;
    const double C4020 = C1100 * C49223;
    const double C7935 = C1100 * C49425;
    const double C8094 = C1100 * C7927;
    const double C22710 = C1100 * C49223;
    const double C26402 = C1100 * C26395;
    const double C26561 = C1100 * C49226;
    const double C1482 = C1478 * C49445;
    const double C4157 = C1478 * C49223;
    const double C8246 = C1478 * C7927;
    const double C22846 = C1478 * C49223;
    const double C26713 = C1478 * C49226;
    const double C2878 =
        (2 * (2 * ae * C48259 + C48174 * C48188) + C48423 + C48423 +
         C48174 * (C48188 + C48420 + C48420 +
                   C48174 * (2 * ae * C48234 + C48174 * C48197))) /
        C47952;
    const double C2899 = C2467 * C2874;
    const double C3764 = C2465 * C2874;
    const double C6113 = C4982 * C2874;
    const double C15527 = C15110 * C2874;
    const double C16374 = C15108 * C2874;
    const double C20199 = C20194 * C2874;
    const double C31959 = C30828 * C2874;
    const double C33814 = C33809 * C2874;
    const double C37084 = C48097 * C2874;
    const double C1094 = C1085 + C1086;
    const double C3884 = C3878 + C3879;
    const double C7942 = C7936 + C7937;
    const double C22574 = C22568 + C22569;
    const double C26409 = C26403 + C26404;
    const double C48294 = ae * C48293;
    const double C952 = (2 * C48265 + C48181 * C48274 + C48174 * C48293 +
                         C48174 * C48291 * ae) /
                        C47945;
    const double C158 = C150 + C151;
    const double C292 = C278 + C279;
    const double C424 = C410 + C411;
    const double C1096 = C1089 + C610;
    const double C4159 = C4152 + C712;
    const double C2341 =
        (C48251 * C48207 + C48374 + C48374 +
         C48174 * (2 * ae * C48369 + C48174 * C48251 * C48219)) /
        C47952;
    const double C2348 = C114 * C2335;
    const double C2682 = C2467 * C2335;
    const double C3350 = C2465 * C2335;
    const double C5751 = C4982 * C2335;
    const double C7815 = C4980 * C2335;
    const double C15322 = C15110 * C2335;
    const double C15969 = C15108 * C2335;
    const double C31597 = C30828 * C2335;
    const double C36548 = C30826 * C2335;
    const double C36879 = C48097 * C2335;
    const double C48400 = C48399 + C48396;
    const double C2340 =
        (C48322 + C48209 * C48326 + C48367 + C48367 +
         C48174 *
             (2 * ae * C48362 + C48174 * (C48209 + C48181 * C48217 * C48326))) /
        C47952;
    const double C2347 = C114 * C2334;
    const double C3184 = C2467 * C2334;
    const double C7268 = C4982 * C2334;
    const double C10259 = C2465 * C2334;
    const double C13890 = C4980 * C2334;
    const double C15812 = C15110 * C2334;
    const double C16839 = C15108 * C2334;
    const double C32561 = C30828 * C2334;
    const double C33699 = C30826 * C2334;
    const double C37369 = C48097 * C2334;
    const double C9217 = C9215 + C1751;
    const double C11515 = C11514 + C1916;
    const double C48461 = C48460 + C48457;
    const double C48519 = ae * C48517;
    const double C48518 = C48174 * C48517;
    const double C48763 = 3 * C48517;
    const double C48577 = ae * C48576;
    const double C9786 = (2 * C48337 + C48251 * C48346 + C48174 * C48576 +
                          C48174 * C48574 * ae) /
                         C47945;
    const double C9460 = C9457 + C9210;
    const double C9553 = C9548 + C9308;
    const double C48627 = C48626 + C48623;
    const double C48670 = ae * C48668;
    const double C48669 = C48174 * C48668;
    const double C48799 = 3 * C48668;
    const double C48848 = C48835 + C48751;
    const double C48752 = C48728 + C48750;
    const double C2489 = C49428 * C956;
    const double C2886 = C49447 * C956;
    const double C5348 = C49265 * C956;
    const double C15132 = C49428 * C956;
    const double C15514 = C15103 * C956;
    const double C20217 = C20185 * C956;
    const double C31194 = C49265 * C956;
    const double C33832 = C49453 * C956;
    const double C36689 = C36661 * C956;
    const double C37071 = C49268 * C956;
    const double C167 = C162 + C149;
    const double C301 = C297 + C283;
    const double C433 = C429 + C415;
    const double C1101 = C1098 + C1088;
    const double C1476 = C1472 + C1457;
    const double C2692 = C49428 * C2339;
    const double C6696 = C49265 * C2339;
    const double C15332 = C49428 * C2339;
    const double C19003 = C15103 * C2339;
    const double C20387 = C20185 * C2339;
    const double C25201 = C49447 * C2339;
    const double C32567 = C49265 * C2339;
    const double C34002 = C49453 * C2339;
    const double C36889 = C36661 * C2339;
    const double C38510 = C49268 * C2339;
    const double C48412 = ae * C48411;
    const double C2873 =
        (2 * C48269 + C48174 * C48411 + (C48266 + C48283 * C48178) * ae) /
        C47945;
    const double C1294 = C1292 * C49425;
    const double C8093 = C1292 * C49425;
    const double C11240 = C1292 * C49400;
    const double C23671 = C1292 * C49400;
    const double C26560 = C1292 * C26395;
    const double C1481 = C1477 * C49425;
    const double C8245 = C1477 * C49425;
    const double C26712 = C1477 * C26395;
    const double C10063 = C49428 * C2338;
    const double C10689 = C49447 * C2338;
    const double C13341 = C49265 * C2338;
    const double C16649 = C49428 * C2338;
    const double C17266 = C15103 * C2338;
    const double C21925 = C20185 * C2338;
    const double C33136 = C49265 * C2338;
    const double C38863 = C36661 * C2338;
    const double C42953 = C49453 * C2338;
    const double C47521 = C49268 * C2338;
    const double C9218 = C9216 + C9209;
    const double C9558 = C9556 + C9551;
    const double C48448 = ae * C48447;
    const double C3336 =
        (2 * C48341 + C48174 * C48447 + (C48338 + C48438 * C48178) * ae) /
        C47945;
    const double C48497 = C48480 + C48495;
    const double C135 =
        (5 * (3 * C48207 + C48181 * C48221) +
         C48181 *
             (4 * C48221 +
              C48181 * (3 * C48219 +
                        C48181 * (2 * C48181 * C48217 +
                                  C48181 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48193))))) /
        C47952;
    const double C271 = ((yP - yQ) * (3 * C48207 + C48181 * C48221)) / C47952;
    const double C276 =
        ((yP - yQ) *
         (4 * C48221 +
          C48181 * (3 * C48219 +
                    C48181 * (2 * C48181 * C48217 +
                              C48181 * (C48217 +
                                        (C48211 * C48212 +
                                         C48178 * bs[8] * std::pow(C48172, 8)) *
                                            C48177 * C48193))))) /
        C47952;
    const double C403 =
        (2 * ae *
             (3 * (C48184 * C48183 * C48229 + C48231 * C48193) +
              C48181 *
                  (2 * C48181 * C48231 +
                   C48181 * (C48231 + C48201 * C48200 * C48229 * C48193))) +
         C48174 * (3 * C48207 + C48181 * C48221)) /
        C47952;
    const double C408 =
        (2 * ae *
             (4 * (2 * C48181 * C48231 + C48181 * C48244) +
              C48181 * (3 * C48244 +
                        C48181 * (2 * C48181 * C48242 +
                                  C48181 * (C48242 + C48212 * C48211 * C48229 *
                                                         C48193)))) +
         C48174 *
             (4 * C48221 +
              C48181 * (3 * C48219 +
                        C48181 * (2 * C48181 * C48217 +
                                  C48181 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48193))))) /
        C47952;
    const double C604 = (2 * C48181 * C48197 + C48181 * C48207 +
                         C48221 * std::pow(yP - yQ, 2)) /
                        C47952;
    const double C605 =
        (3 * C48207 + C48181 * C48221 +
         (3 * C48219 +
          C48181 * (2 * C48181 * C48217 +
                    C48181 * (C48217 + (C48211 * C48212 +
                                        C48178 * bs[8] * std::pow(C48172, 8)) *
                                           C48177 * C48193))) *
             std::pow(yP - yQ, 2)) /
        C47952;
    const double C706 =
        (2 * ae * C48251 * (2 * C48181 * C48231 + C48181 * C48244) +
         C48174 * C48251 * C48221) /
        C47952;
    const double C1263 =
        (2 * C48251 * C48221 +
         C48251 * (C48221 +
                   (2 * C48181 * C48217 +
                    C48181 * (C48217 + (C48211 * C48212 +
                                        C48178 * bs[8] * std::pow(C48172, 8)) *
                                           C48177 * C48193)) *
                       std::pow(C48251, 2))) /
        C47952;
    const double C1451 =
        (2 * ae * (C48288 + C48312 * C48326) +
         C48174 * (C48221 +
                   (2 * C48181 * C48217 +
                    C48181 * (C48217 + (C48211 * C48212 +
                                        C48178 * bs[8] * std::pow(C48172, 8)) *
                                           C48177 * C48193)) *
                       C48326)) /
        C47952;
    const double C1291 = C1287 + C1271;
    const double C1475 = C1471 + C1455;
    const double C48783 = C48770 + C48780;
    const double C9455 =
        (5 * (3 * C48548 + C48251 * C48561) +
         C48251 *
             (4 * C48561 +
              C48251 * (3 * C48559 +
                        C48251 * (2 * C48251 * C48217 +
                                  C48251 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48326))))) /
        C47952;
    const double C9546 =
        (2 * ae *
             (4 * (2 * C48437 + C48251 * C48564) +
              C48251 * (3 * C48564 +
                        C48251 * (2 * C48251 * C48242 +
                                  C48251 * (C48242 + C48303 * C48326)))) +
         C48174 *
             (4 * C48561 +
              C48251 * (3 * C48559 +
                        C48251 * (2 * C48251 * C48217 +
                                  C48251 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48326))))) /
        C47952;
    const double C48820 = C48804 + C48815;
    const double C48867 = C48174 * C48863;
    const double C48317 = C48174 * C48316;
    const double C128 = (5 * (3 * C48274 + C48181 * C48288) +
                         C48181 * (4 * C48288 + C48181 * C48316)) /
                        C47945;
    const double C270 = (C48251 * (4 * C48288 + C48181 * C48316)) / C47945;
    const double C402 = (C48174 * (4 * C48288 + C48181 * C48316) +
                         (4 * C48291 + C48181 * C48313) * ae) /
                        C47945;
    const double C600 =
        (3 * C48274 + C48181 * C48288 + C48316 * C48326) / C47945;
    const double C702 =
        (C48174 * C48251 * C48316 + C48251 * C48313 * ae) / C47945;
    const double C48389 = C48387 + C48388;
    const double C48431 = ae * C48428;
    const double C48430 = C48174 * C48428;
    const double C48383 = ae * C48382;
    const double C2336 =
        (C48274 + C48244 * C48326 + C48174 * C48382 + C48174 * C48379 * ae) /
        C47945;
    const double C48474 = C48369 + C48472;
    const double C48540 = C48539 + C48533;
    const double C48597 = C48174 * C48595;
    const double C9454 = (5 * (3 * C48346 + C48251 * C48570) +
                          C48251 * (4 * C48570 + C48251 * C48595)) /
                         C47945;
    const double C9545 = (C48174 * (4 * C48570 + C48251 * C48595) +
                          (4 * C48574 + C48251 * C48596) * ae) /
                         C47945;
    const double C48647 = ae * C48644;
    const double C48646 = C48174 * C48644;
    const double C48691 = C48690 + C48684;
    const double C48616 = C48614 + C48615;
    const double C9213 = C114 * C9204;
    const double C9309 = C114 * C9304;
    const double C13139 = C4982 * C9304;
    const double C32934 = C30828 * C9304;
    const double C48637 = C48362 + C48635;
    const double C48717 = C48716 + C48711;
    const double C48787 = ae * C48784;
    const double C48786 = C48174 * C48784;
    const double C48826 = ae * C48823;
    const double C48825 = C48174 * C48823;
    const double C48872 = C48841 + C48868;
    const double C49463 = C49409 + C49455;
    const double C3872 = C49442 - (C49078 * C49061) / C47945;
    const double C106 = C49443 / C47987 - C49076 / C48095;
    const double C49456 = C49412 + C49442;
    const double C49464 = C49429 + C49459;
    const double C11231 = C49449 - (C49226 * C49215) / C47945;
    const double C23670 = C1100 * C49450;
    const double C23807 = C1292 * C49450;
    const double C23941 = C1477 * C49450;
    const double C9116 = C49450 / C47987 - C49224 / C48095;
    const double C11239 = C1100 * C11232;
    const double C11376 = C1292 * C11232;
    const double C11511 = C1477 * C11232;
    const double C49460 = C49431 + C49449;
    const double C48017 = C47969 / C47956;
    const double C48011 = C47969 / C47945;
    const double C2464 =
        (((-4 * C47955) / C47945 - C47969 / C47945) * ae) / C47956 +
        ((2 * ((0 * ae) / C47945 - C47955 / C47952) - C47969 / C47956) * ae) /
            C47945;
    const double C4979 =
        (((-4 * C47955) / C47945 - C47969 / C47945) * ae) / C47945;
    const double C15105 =
        (-(be * -2 * C47951) / C47952) / C47987 -
        ((2 * ((-C47951 / C47945) / C47987 - (C47960 * be) / C47945) -
          (C47943 * ((-4 * C47955) / C47945 - C47969 / C47945) * be) / C47945) *
         be) /
            C47945 -
        C47961 / C47956;
    const double C15107 =
        (-(((-4 * C47955) / C47945 - C47969 / C47945) * be) / C47945) / C47987 -
        ((2 * ((-C47957 / C47945) / C47987 - (0 * be) / C47945) -
          C47969 / C47956) *
         be) /
            C47945;
    const double C2496 = C2462 * C118;
    const double C2481 = C2462 * C117;
    const double C2472 = C2462 * C116;
    const double C2696 = C2462 * C262;
    const double C2687 = C2462 * C261;
    const double C2896 = C2462 * C394;
    const double C2887 = C2462 * C393;
    const double C10067 = C2462 * C592;
    const double C10058 = C2462 * C591;
    const double C10052 = C2462 * C263;
    const double C10522 = C2462 * C1254;
    const double C10696 = C2462 * C693;
    const double C10690 = C2462 * C1442;
    const double C25202 = C2462 * C694;
    const double C2490 = C2466 * C947;
    const double C2487 = C2466 * C946;
    const double C2478 = C2466 * C945;
    const double C2690 = C2466 * C2327;
    const double C2681 = C2466 * C2329;
    const double C2890 = C2466 * C2869;
    const double C2881 = C2466 * C2868;
    const double C10071 = C2466 * C2328;
    const double C10062 = C2466 * C2326;
    const double C10056 = C2466 * C2325;
    const double C10518 = C2466 * C9784;
    const double C10692 = C2466 * C3333;
    const double C10686 = C2466 * C10248;
    const double C25198 = C2466 * C3334;
    const double C5004 = C4981 * C391;
    const double C5001 = C4981 * C392;
    const double C4995 = C4981 * C393;
    const double C4989 = C4981 * C394;
    const double C5182 = C4981 * C694;
    const double C5176 = C4981 * C695;
    const double C5170 = C4981 * C696;
    const double C5352 = C4981 * C945;
    const double C5346 = C4981 * C946;
    const double C5340 = C4981 * C947;
    const double C6474 = C4981 * C1441;
    const double C6469 = C4981 * C1440;
    const double C6466 = C4981 * C693;
    const double C6695 = C4981 * C2327;
    const double C6691 = C4981 * C2329;
    const double C7051 = C4981 * C1442;
    const double C7261 = C4981 * C2325;
    const double C12576 = C4981 * C1902;
    const double C12781 = C4981 * C2328;
    const double C13132 = C4981 * C1901;
    const double C13340 = C4981 * C2326;
    const double C14479 = C4981 * C9301;
    const double C14621 = C4981 * C9784;
    const double C15133 = C15109 * C947;
    const double C15130 = C15109 * C946;
    const double C15121 = C15109 * C945;
    const double C15330 = C15109 * C2327;
    const double C15321 = C15109 * C2329;
    const double C15518 = C15109 * C2869;
    const double C15509 = C15109 * C2868;
    const double C16657 = C15109 * C2328;
    const double C16648 = C15109 * C2326;
    const double C16642 = C15109 * C2325;
    const double C17098 = C15109 * C9784;
    const double C17269 = C15109 * C3333;
    const double C17263 = C15109 * C10248;
    const double C19000 = C15109 * C3334;
    const double C20212 = C20193 * C2868;
    const double C20209 = C20193 * C2869;
    const double C20382 = C20193 * C3334;
    const double C20544 = C20193 * C3754;
    const double C21550 = C20193 * C3333;
    const double C21922 = C20193 * C10248;
    const double C22076 = C20193 * C11120;
    const double C30850 = C30827 * C391;
    const double C30847 = C30827 * C392;
    const double C30841 = C30827 * C393;
    const double C30835 = C30827 * C394;
    const double C31028 = C30827 * C694;
    const double C31022 = C30827 * C695;
    const double C31016 = C30827 * C696;
    const double C31198 = C30827 * C945;
    const double C31192 = C30827 * C946;
    const double C31186 = C30827 * C947;
    const double C32116 = C30827 * C1440;
    const double C32114 = C30827 * C1441;
    const double C32336 = C30827 * C1902;
    const double C32332 = C30827 * C1442;
    const double C32328 = C30827 * C693;
    const double C32566 = C30827 * C2327;
    const double C32560 = C30827 * C2328;
    const double C32927 = C30827 * C1901;
    const double C33139 = C30827 * C2325;
    const double C33135 = C30827 * C2326;
    const double C35470 = C30827 * C2329;
    const double C41830 = C30827 * C9301;
    const double C41972 = C30827 * C9784;
    const double C33827 = C33808 * C2868;
    const double C33824 = C33808 * C2869;
    const double C33997 = C33808 * C3334;
    const double C34159 = C33808 * C3754;
    const double C42578 = C33808 * C3333;
    const double C42950 = C33808 * C10248;
    const double C43104 = C33808 * C11120;
    const double C36690 = C36666 * C947;
    const double C36687 = C36666 * C946;
    const double C36678 = C36666 * C945;
    const double C36887 = C36666 * C2327;
    const double C36878 = C36666 * C2329;
    const double C37075 = C36666 * C2869;
    const double C37066 = C36666 * C2868;
    const double C38286 = C36666 * C2328;
    const double C38283 = C36666 * C2325;
    const double C38507 = C36666 * C3334;
    const double C38862 = C36666 * C2326;
    const double C39077 = C36666 * C3333;
    const double C47353 = C36666 * C9784;
    const double C47518 = C36666 * C10248;
    const double C48033 = C48025 - C48013;
    const double C33838 = C49465 * C131;
    const double C33817 = C49465 * C130;
    const double C34008 = C49465 * C274;
    const double C34170 = C49465 * C406;
    const double C42573 = C49465 * C275;
    const double C42957 = C49465 * C601;
    const double C43111 = C49465 * C703;
    const double C17765 =
        (C49458 + 2 * C49261) / C47987 - (C49465 * C49257) / C47945;
    const double C20220 = C20184 * C405;
    const double C20205 = C20184 * C406;
    const double C20390 = C20184 * C704;
    const double C20552 = C20184 * C955;
    const double C21547 = C20184 * C703;
    const double C21927 = C20184 * C1450;
    const double C22081 = C20184 * C2337;
    const double C33835 = C49462 * C405;
    const double C33820 = C49462 * C406;
    const double C34005 = C49462 * C704;
    const double C34167 = C49462 * C955;
    const double C42575 = C49462 * C703;
    const double C42955 = C49462 * C1450;
    const double C43109 = C49462 * C2337;
    const double C17766 =
        (C49447 + 2 * C49268 + C49465) / C47987 - (C49462 * C49257) / C47945;
    const double C17767 = (C49428 + C49265 / C47945 + C49462) / C47987 -
                          (C49453 * C49257) / C47945;
    const double C957 =
        (2 * C48181 * C48197 + C48181 * C48207 + C48294 + C48294 +
         C48174 * (2 * ae * C48288 + C48174 * C48221)) /
        C47952;
    const double C963 = C114 * C952;
    const double C2491 = C2467 * C952;
    const double C2903 = C2465 * C952;
    const double C5341 = C4982 * C952;
    const double C6118 = C4980 * C952;
    const double C15134 = C15110 * C952;
    const double C15531 = C15108 * C952;
    const double C31187 = C30828 * C952;
    const double C31964 = C30826 * C952;
    const double C36691 = C48097 * C952;
    const double C163 = C158 + C151;
    const double C296 = C292 + C279;
    const double C428 = C424 + C411;
    const double C1099 = C1096 + C610;
    const double C4160 = C4159 + C712;
    const double C2683 = C49428 * C2341;
    const double C6692 = C49265 * C2341;
    const double C15323 = C49428 * C2341;
    const double C35471 = C49265 * C2341;
    const double C36880 = C36661 * C2341;
    const double C48401 = ae * C48400;
    const double C2872 =
        (2 * C48278 + C48174 * C48400 + (C48275 + C48287 * C48178) * ae) /
        C47945;
    const double C10072 = C49428 * C2340;
    const double C12782 = C49265 * C2340;
    const double C16658 = C49428 * C2340;
    const double C32562 = C49265 * C2340;
    const double C38287 = C36661 * C2340;
    const double C9219 = C9217 + C9212;
    const double C11516 = C11515 + C11510;
    const double C48462 = ae * C48461;
    const double C3337 =
        (2 * C48357 + C48174 * C48461 + (C48354 + C48452 * C48178) * ae) /
        C47945;
    const double C48520 = C48503 + C48518;
    const double C9788 = (2 * C48436 + C48251 * C48548 + C48577 + C48577 +
                          C48174 * (2 * ae * C48570 + C48174 * C48561)) /
                         C47952;
    const double C9791 = C114 * C9786;
    const double C10064 = C2467 * C9786;
    const double C10699 = C2465 * C9786;
    const double C13345 = C4982 * C9786;
    const double C14991 = C4980 * C9786;
    const double C16650 = C15110 * C9786;
    const double C17276 = C15108 * C9786;
    const double C33144 = C30828 * C9786;
    const double C38870 = C48097 * C9786;
    const double C42342 = C30826 * C9786;
    const double C9461 = C9460 + C9210;
    const double C9555 = C9553 + C9308;
    const double C48628 = ae * C48627;
    const double C10250 =
        (2 * C48350 + C48174 * C48627 + (C48347 + C48571 * C48178) * ae) /
        C47945;
    const double C48671 = C48654 + C48669;
    const double C48854 = C48848 + C48751;
    const double C48753 = C48752 + C48741;
    const double C172 = C167 * C49161;
    const double C3883 = C167 * C49391;
    const double C22573 = C167 * C22559;
    const double C305 = C301 * C49161;
    const double C1091 = C301 * C49445;
    const double C3881 = C301 * C49223;
    const double C4017 = C301 * C49391;
    const double C7940 = C301 * C7927;
    const double C22571 = C301 * C49223;
    const double C22707 = C301 * C22559;
    const double C26407 = C301 * C49226;
    const double C437 = C433 * C49161;
    const double C4154 = C433 * C49391;
    const double C22843 = C433 * C22559;
    const double C1104 = C1101 * C49425;
    const double C1272 = C1101 * C49445;
    const double C4018 = C1101 * C49223;
    const double C7938 = C1101 * C49425;
    const double C8091 = C1101 * C7927;
    const double C11242 = C1101 * C11232;
    const double C22708 = C1101 * C49223;
    const double C23673 = C1101 * C49450;
    const double C26405 = C1101 * C26395;
    const double C26558 = C1101 * C49226;
    const double C1480 = C1476 * C49445;
    const double C4155 = C1476 * C49223;
    const double C8243 = C1476 * C7927;
    const double C22844 = C1476 * C49223;
    const double C26710 = C1476 * C49226;
    const double C2877 =
        (2 * (2 * ae * C48265 + C48174 * C48322) + C48412 + C48412 +
         C48174 * (C48322 + C48409 + C48409 +
                   C48174 * (2 * ae * C48281 + C48174 * C48209))) /
        C47952;
    const double C2891 = C2467 * C2873;
    const double C3767 = C2465 * C2873;
    const double C6115 = C4982 * C2873;
    const double C15519 = C15110 * C2873;
    const double C16377 = C15108 * C2873;
    const double C20210 = C20194 * C2873;
    const double C31961 = C30828 * C2873;
    const double C33825 = C33809 * C2873;
    const double C37076 = C48097 * C2873;
    const double C3339 =
        (2 * (2 * ae * C48337 + C48174 * C48436) + C48448 + C48448 +
         C48174 * (C48436 + C48445 + C48445 +
                   C48174 * (2 * ae * C48437 + C48174 * C48251 * C48205))) /
        C47952;
    const double C3345 = C2467 * C3336;
    const double C7812 = C4982 * C3336;
    const double C11128 = C2465 * C3336;
    const double C15964 = C15110 * C3336;
    const double C17699 = C15108 * C3336;
    const double C20394 = C20194 * C3336;
    const double C33694 = C30828 * C3336;
    const double C34009 = C33809 * C3336;
    const double C37521 = C48097 * C3336;
    const double C48498 = C48497 + C48491;
    const double C280 = C49178 * C271;
    const double C412 = C49178 * C403;
    const double C5006 = C49265 * C403;
    const double C30852 = C49265 * C403;
    const double C1090 = C49178 * C604;
    const double C4153 = C49178 * C706;
    const double C5172 = C49265 * C706;
    const double C31018 = C49265 * C706;
    const double C1293 = C1291 * C49425;
    const double C8090 = C1291 * C49425;
    const double C11241 = C1291 * C49400;
    const double C23672 = C1291 * C49400;
    const double C26557 = C1291 * C26395;
    const double C1479 = C1475 * C49425;
    const double C8242 = C1475 * C49425;
    const double C26709 = C1475 * C26395;
    const double C48318 = C48317 + C48315;
    const double C153 = C114 * C128;
    const double C291 = C114 * C270;
    const double C423 = C114 * C402;
    const double C5011 = C4982 * C402;
    const double C30857 = C30828 * C402;
    const double C611 = C114 * C600;
    const double C713 = C114 * C702;
    const double C5191 = C4982 * C702;
    const double C31037 = C30828 * C702;
    const double C48390 = ae * C48389;
    const double C2678 =
        (C48251 * C48288 + C48174 * C48389 + C48174 * C48386 * ae) / C47945;
    const double C48432 = C48288 + C48430;
    const double C2342 =
        (C48207 + C48219 * C48326 + C48383 + C48383 +
         C48174 * (2 * ae * C48378 +
                   C48174 * (C48219 +
                             (C48217 + (C48211 * C48212 +
                                        C48178 * bs[8] * std::pow(C48172, 8)) *
                                           C48177 * C48193) *
                                 C48326))) /
        C47952;
    const double C2349 = C114 * C2336;
    const double C3187 = C2467 * C2336;
    const double C7270 = C4982 * C2336;
    const double C15815 = C15110 * C2336;
    const double C32573 = C30828 * C2336;
    const double C37372 = C48097 * C2336;
    const double C48475 = C48474 + C48471;
    const double C48542 = ae * C48540;
    const double C48541 = C48174 * C48540;
    const double C48599 = C48597 + C48598;
    const double C9459 = C114 * C9454;
    const double C9552 = C114 * C9545;
    const double C14484 = C4982 * C9545;
    const double C41835 = C30828 * C9545;
    const double C48648 = C48570 + C48646;
    const double C48693 = ae * C48691;
    const double C48692 = C48174 * C48691;
    const double C48617 = ae * C48616;
    const double C10049 = (2 * C48353 + C48251 * C48362 + C48174 * C48616 +
                           C48174 * C48613 * ae) /
                          C47945;
    const double C48638 = C48637 + C48634;
    const double C48719 = ae * C48717;
    const double C48718 = C48174 * C48717;
    const double C48788 = C48764 + C48786;
    const double C48827 = C48800 + C48825;
    const double C48874 = C48872 + C48857;
    const double C103 =
        (C49454 + 2 * C49070) / C47987 - (C49463 * C49061) / C47945;
    const double C104 =
        (C49441 + 2 * C49078 + C49463) / C47987 - (C49456 * C49061) / C47945;
    const double C105 = (C49414 + C49075 / C47945 + C49456) / C47987 -
                        (C49443 * C49061) / C47945;
    const double C23675 = C165 * C49464;
    const double C23668 = C164 * C49464;
    const double C23809 = C303 * C49464;
    const double C23943 = C435 * C49464;
    const double C9113 =
        (C49457 + 2 * C49219) / C47987 - (C49464 * C49215) / C47945;
    const double C11243 = C302 * C11231;
    const double C11238 = C303 * C11231;
    const double C11377 = C1100 * C11231;
    const double C11512 = C1478 * C11231;
    const double C23674 = C302 * C49460;
    const double C23669 = C303 * C49460;
    const double C23808 = C1100 * C49460;
    const double C23942 = C1478 * C49460;
    const double C9114 =
        (C49445 + 2 * C49226 + C49464) / C47987 - (C49460 * C49215) / C47945;
    const double C9115 = (C49425 + C49223 / C47945 + C49460) / C47987 -
                         (C49450 * C49215) / C47945;
    const double C48050 = C48042 - C48017;
    const double C48032 = C48024 - C48011;
    const double C2493 = C2464 * C392;
    const double C2484 = C2464 * C393;
    const double C2475 = C2464 * C394;
    const double C2693 = C2464 * C694;
    const double C2684 = C2464 * C695;
    const double C2893 = C2464 * C945;
    const double C2884 = C2464 * C946;
    const double C10069 = C2464 * C1441;
    const double C10060 = C2464 * C1442;
    const double C10054 = C2464 * C693;
    const double C10520 = C2464 * C1901;
    const double C10694 = C2464 * C2325;
    const double C10688 = C2464 * C2326;
    const double C25200 = C2464 * C2327;
    const double C5007 = C4979 * C119;
    const double C4998 = C4979 * C118;
    const double C4992 = C4979 * C117;
    const double C4986 = C4979 * C116;
    const double C5185 = C4979 * C262;
    const double C5179 = C4979 * C261;
    const double C5173 = C4979 * C260;
    const double C5355 = C4979 * C394;
    const double C5349 = C4979 * C393;
    const double C5343 = C4979 * C392;
    const double C6476 = C4979 * C592;
    const double C6471 = C4979 * C593;
    const double C6464 = C4979 * C263;
    const double C6697 = C4979 * C694;
    const double C6693 = C4979 * C695;
    const double C7053 = C4979 * C591;
    const double C7263 = C4979 * C693;
    const double C12578 = C4979 * C1253;
    const double C12783 = C4979 * C1441;
    const double C13134 = C4979 * C1254;
    const double C13342 = C4979 * C1442;
    const double C14481 = C4979 * C1738;
    const double C14623 = C4979 * C1901;
    const double C15139 = C15105 * C118;
    const double C15124 = C15105 * C117;
    const double C15115 = C15105 * C116;
    const double C15336 = C15105 * C262;
    const double C15327 = C15105 * C261;
    const double C15524 = C15105 * C394;
    const double C15515 = C15105 * C393;
    const double C16653 = C15105 * C592;
    const double C16644 = C15105 * C591;
    const double C16638 = C15105 * C263;
    const double C17102 = C15105 * C1254;
    const double C17273 = C15105 * C693;
    const double C17267 = C15105 * C1442;
    const double C19004 = C15105 * C694;
    const double C15136 = C15107 * C392;
    const double C15127 = C15107 * C393;
    const double C15118 = C15107 * C394;
    const double C15333 = C15107 * C694;
    const double C15324 = C15107 * C695;
    const double C15521 = C15107 * C945;
    const double C15512 = C15107 * C946;
    const double C16655 = C15107 * C1441;
    const double C16646 = C15107 * C1442;
    const double C16640 = C15107 * C693;
    const double C17100 = C15107 * C1901;
    const double C17271 = C15107 * C2325;
    const double C17265 = C15107 * C2326;
    const double C19002 = C15107 * C2327;
    const double C2510 = C2496 + C2497;
    const double C2505 = C2481 + C2482;
    const double C2502 = C2472 + C2473;
    const double C2710 = C2696 + C2697;
    const double C2707 = C2687 + C2688;
    const double C2910 = C2896 + C2897;
    const double C2907 = C2887 + C2888;
    const double C10082 = C10067 + C3182;
    const double C10079 = C10058 + C3179;
    const double C10076 = C10052 + C2701;
    const double C10530 = C10522 + C10066;
    const double C10706 = C10696 + C3343;
    const double C10703 = C10690 + C10257;
    const double C25206 = C25202 + C3346;
    const double C2507 = C2487 + C2488;
    const double C2504 = C2478 + C2479;
    const double C2708 = C2690 + C2691;
    const double C2705 = C2681 + C2682;
    const double C10084 = C10071 + C3184;
    const double C10081 = C10062 + C3181;
    const double C10078 = C10056 + C2699;
    const double C5018 = C5004 + C5005;
    const double C5017 = C5001 + C5002;
    const double C5015 = C4995 + C4996;
    const double C5013 = C4989 + C4990;
    const double C5196 = C5182 + C5183;
    const double C5194 = C5176 + C5177;
    const double C5192 = C5170 + C5171;
    const double C5366 = C5352 + C5353;
    const double C5364 = C5346 + C5347;
    const double C6483 = C6474 + C5611;
    const double C6481 = C6469 + C5613;
    const double C6480 = C6466 + C5188;
    const double C6701 = C6695 + C5749;
    const double C6699 = C6691 + C5751;
    const double C7061 = C7051 + C5609;
    const double C7271 = C7261 + C5747;
    const double C12581 = C12576 + C7058;
    const double C12785 = C12781 + C7268;
    const double C13140 = C13132 + C7056;
    const double C13348 = C13340 + C7266;
    const double C14485 = C14479 + C13137;
    const double C15150 = C15130 + C15131;
    const double C15147 = C15121 + C15122;
    const double C15348 = C15330 + C15331;
    const double C15345 = C15321 + C15322;
    const double C16670 = C16657 + C15812;
    const double C16667 = C16648 + C15809;
    const double C16664 = C16642 + C15339;
    const double C30864 = C30850 + C30851;
    const double C30863 = C30847 + C30848;
    const double C30861 = C30841 + C30842;
    const double C30859 = C30835 + C30836;
    const double C31042 = C31028 + C31029;
    const double C31040 = C31022 + C31023;
    const double C31038 = C31016 + C31017;
    const double C31212 = C31198 + C31199;
    const double C31210 = C31192 + C31193;
    const double C32122 = C32116 + C31459;
    const double C32121 = C32114 + C31457;
    const double C32352 = C32336 + C32337;
    const double C32351 = C32332 + C31455;
    const double C32349 = C32328 + C31034;
    const double C32576 = C32566 + C31595;
    const double C32574 = C32560 + C32561;
    const double C32935 = C32927 + C32344;
    const double C33149 = C33139 + C31593;
    const double C33147 = C33135 + C32570;
    const double C35474 = C35470 + C31597;
    const double C41836 = C41830 + C32932;
    const double C36707 = C36687 + C36688;
    const double C36704 = C36678 + C36679;
    const double C36905 = C36887 + C36888;
    const double C36902 = C36878 + C36879;
    const double C38297 = C38286 + C37369;
    const double C38295 = C38283 + C36896;
    const double C38874 = C38862 + C37366;
    const double C48043 = C48033 / C47987;
    const double C48041 = C47943 * C48033;
    const double C48040 = 2 * C48033;
    const double C2492 = C49428 * C957;
    const double C5342 = C49265 * C957;
    const double C15135 = C49428 * C957;
    const double C31188 = C49265 * C957;
    const double C36692 = C36661 * C957;
    const double C2508 = C2490 + C2491;
    const double C5362 = C5340 + C5341;
    const double C15151 = C15133 + C15134;
    const double C31208 = C31186 + C31187;
    const double C36708 = C36690 + C36691;
    const double C168 = C163 + C152;
    const double C2876 =
        (2 * (2 * ae * C48274 + C48174 * C48207) + C48401 + C48401 +
         C48174 * (C48207 + C48398 + C48398 +
                   C48174 * (2 * ae * C48244 + C48174 * C48219))) /
        C47952;
    const double C2882 = C2467 * C2872;
    const double C3770 = C2465 * C2872;
    const double C6117 = C4982 * C2872;
    const double C15510 = C15110 * C2872;
    const double C16380 = C15108 * C2872;
    const double C20213 = C20194 * C2872;
    const double C31963 = C30828 * C2872;
    const double C33828 = C33809 * C2872;
    const double C37067 = C48097 * C2872;
    const double C11375 = C9219 * C49400;
    const double C23806 = C9219 * C49400;
    const double C11517 = C11516 * C49400;
    const double C23940 = C11516 * C49400;
    const double C3340 =
        (2 * (2 * ae * C48353 + C48174 * C48450) + C48462 + C48462 +
         C48174 *
             (C48450 + C48459 + C48459 +
              C48174 * (2 * ae * C48451 + C48174 * C48251 * C48181 * C48217))) /
        C47952;
    const double C3348 = C2467 * C3337;
    const double C7814 = C4982 * C3337;
    const double C15967 = C15110 * C3337;
    const double C20084 = C15108 * C3337;
    const double C20383 = C20194 * C3337;
    const double C26282 = C2465 * C3337;
    const double C33698 = C30828 * C3337;
    const double C33998 = C33809 * C3337;
    const double C37524 = C48097 * C3337;
    const double C48521 = C48520 + C48514;
    const double C10519 = C49428 * C9788;
    const double C14622 = C49265 * C9788;
    const double C17099 = C49428 * C9788;
    const double C41973 = C49265 * C9788;
    const double C47354 = C36661 * C9788;
    const double C10528 = C10518 + C10064;
    const double C14627 = C14621 + C13345;
    const double C17108 = C17098 + C16650;
    const double C41978 = C41972 + C33144;
    const double C47363 = C47353 + C38870;
    const double C9462 = C9461 + C9458;
    const double C9557 = C9555 + C9549;
    const double C10252 =
        (2 * (2 * ae * C48346 + C48174 * C48548) + C48628 + C48628 +
         C48174 * (C48548 + C48625 + C48625 +
                   C48174 * (2 * ae * C48564 + C48174 * C48559))) /
        C47952;
    const double C10255 = C2467 * C10250;
    const double C11131 = C2465 * C10250;
    const double C13889 = C4982 * C10250;
    const double C16835 = C15110 * C10250;
    const double C17702 = C15108 * C10250;
    const double C20807 = C20194 * C10250;
    const double C33696 = C30828 * C10250;
    const double C34422 = C33809 * C10250;
    const double C39085 = C48097 * C10250;
    const double C48672 = C48671 + C48665;
    const double C48871 = C48854 + C48867;
    const double C48755 = ae * C48753;
    const double C48754 = C48174 * C48753;
    const double C48839 = 4 * C48753;
    const double C3885 = C3880 + C3881;
    const double C22575 = C22570 + C22571;
    const double C1106 = C1094 + C1104;
    const double C7943 = C7942 + C7938;
    const double C26410 = C26409 + C26405;
    const double C2892 = C49428 * C2877;
    const double C15520 = C49428 * C2877;
    const double C20211 = C49407 * C2877;
    const double C20549 = C20185 * C2877;
    const double C33826 = C49407 * C2877;
    const double C34164 = C49453 * C2877;
    const double C37077 = C36661 * C2877;
    const double C2908 = C2890 + C2891;
    const double C15536 = C15518 + C15519;
    const double C20231 = C20209 + C20210;
    const double C33846 = C33824 + C33825;
    const double C37093 = C37075 + C37076;
    const double C10693 = C49428 * C3339;
    const double C17270 = C49428 * C3339;
    const double C21551 = C49407 * C3339;
    const double C22079 = C20185 * C3339;
    const double C39078 = C36661 * C3339;
    const double C42579 = C49407 * C3339;
    const double C43107 = C49453 * C3339;
    const double C10704 = C10692 + C3345;
    const double C17281 = C17269 + C15964;
    const double C21555 = C21550 + C20394;
    const double C42583 = C42578 + C34009;
    const double C39089 = C39077 + C37521;
    const double C48499 = ae * C48498;
    const double C3756 =
        (3 * C48422 + C48174 * C48498 + (2 * C48416 + C48174 * C48488) * ae) /
        C47945;
    const double C300 = C296 + C280;
    const double C432 = C428 + C412;
    const double C1102 = C1099 + C1090;
    const double C4161 = C4160 + C4153;
    const double C48319 = ae * C48318;
    const double C953 = (3 * C48274 + C48181 * C48288 + C48174 * C48318 +
                         C48174 * C48313 * ae) /
                        C47945;
    const double C2679 =
        (C48251 * C48221 + C48390 + C48390 +
         C48174 *
             (2 * ae * C48385 +
              C48174 * C48251 *
                  (2 * C48181 * C48217 +
                   C48181 * (C48217 + (C48211 * C48212 +
                                       C48178 * bs[8] * std::pow(C48172, 8)) *
                                          C48177 * C48193)))) /
        C47952;
    const double C2704 = C2467 * C2678;
    const double C4879 = C114 * C2678;
    const double C5753 = C4982 * C2678;
    const double C15344 = C15110 * C2678;
    const double C31599 = C30828 * C2678;
    const double C36901 = C48097 * C2678;
    const double C48433 = C48432 + C48429;
    const double C48476 = ae * C48475;
    const double C3338 =
        (2 * C48373 + C48174 * C48475 + (C48370 + C48466 * C48178) * ae) /
        C47945;
    const double C48543 = C48526 + C48541;
    const double C48600 = ae * C48599;
    const double C9787 = (3 * C48346 + C48251 * C48570 + C48174 * C48599 +
                          C48174 * C48596 * ae) /
                         C47945;
    const double C48649 = C48648 + C48645;
    const double C48694 = C48677 + C48692;
    const double C10050 =
        (2 * C48450 + C48251 * C48552 + C48617 + C48617 +
         C48174 * (2 * ae * C48612 +
                   C48174 * (2 * C48251 * C48550 +
                             C48251 * (C48550 + C48181 *
                                                    (C48211 * C48212 +
                                                     C48178 * bs[8] *
                                                         std::pow(C48172, 8)) *
                                                    C48177 * C48326)))) /
        C47952;
    const double C10075 = C2467 * C10049;
    const double C12234 = C114 * C10049;
    const double C13347 = C4982 * C10049;
    const double C16661 = C15110 * C10049;
    const double C33146 = C30828 * C10049;
    const double C38873 = C48097 * C10049;
    const double C48639 = ae * C48638;
    const double C10251 =
        (2 * C48366 + C48174 * C48638 + (C48363 + C48609 * C48178) * ae) /
        C47945;
    const double C48720 = C48700 + C48718;
    const double C48789 = C48788 + C48777;
    const double C48828 = C48827 + C48817;
    const double C48876 = ae * C48874;
    const double C48875 = C48174 * C48874;
    const double C48056 = C48050 * be;
    const double C48039 = C48032 * ae;
    const double C30825 = -(C48032 * be) / C47945;
    const double C2509 = C2493 + C2494;
    const double C2506 = C2484 + C2485;
    const double C2503 = C2475 + C2476;
    const double C2709 = C2693 + C2694;
    const double C2706 = C2684 + C2685;
    const double C2909 = C2893 + C2894;
    const double C2906 = C2884 + C2885;
    const double C10083 = C10069 + C3183;
    const double C10080 = C10060 + C3180;
    const double C10077 = C10054 + C2700;
    const double C10529 = C10520 + C10065;
    const double C10705 = C10694 + C3344;
    const double C10702 = C10688 + C10256;
    const double C25205 = C25200 + C3347;
    const double C5019 = C5007 + C5008;
    const double C5016 = C4998 + C4999;
    const double C5014 = C4992 + C4993;
    const double C5012 = C4986 + C4987;
    const double C5197 = C5185 + C5186;
    const double C5195 = C5179 + C5180;
    const double C5193 = C5173 + C5174;
    const double C5367 = C5355 + C5356;
    const double C5365 = C5349 + C5350;
    const double C5363 = C5343 + C5344;
    const double C6484 = C6476 + C5610;
    const double C6482 = C6471 + C5612;
    const double C6479 = C6464 + C5189;
    const double C6702 = C6697 + C5748;
    const double C6700 = C6693 + C5750;
    const double C7062 = C7053 + C5608;
    const double C7272 = C7263 + C5746;
    const double C12582 = C12578 + C7057;
    const double C12786 = C12783 + C7267;
    const double C13141 = C13134 + C7055;
    const double C13349 = C13342 + C7265;
    const double C14486 = C14481 + C13136;
    const double C14628 = C14623 + C13344;
    const double C15153 = C15139 + C15140;
    const double C15148 = C15124 + C15125;
    const double C15145 = C15115 + C15116;
    const double C15350 = C15336 + C15337;
    const double C15347 = C15327 + C15328;
    const double C15538 = C15524 + C15525;
    const double C15535 = C15515 + C15516;
    const double C16668 = C16653 + C15810;
    const double C16665 = C16644 + C15807;
    const double C16662 = C16638 + C15341;
    const double C17110 = C17102 + C16652;
    const double C17283 = C17273 + C15962;
    const double C17280 = C17267 + C16837;
    const double C19008 = C19004 + C15965;
    const double C15152 = C15136 + C15137;
    const double C15149 = C15127 + C15128;
    const double C15146 = C15118 + C15119;
    const double C15349 = C15333 + C15334;
    const double C15346 = C15324 + C15325;
    const double C15537 = C15521 + C15522;
    const double C15534 = C15512 + C15513;
    const double C16669 = C16655 + C15811;
    const double C16666 = C16646 + C15808;
    const double C16663 = C16640 + C15340;
    const double C17109 = C17100 + C16651;
    const double C17282 = C17271 + C15963;
    const double C17279 = C17265 + C16836;
    const double C19007 = C19002 + C15966;
    const double C2519 = C2510 + C2497;
    const double C2514 = C2505 + C2482;
    const double C2511 = C2502 + C2473;
    const double C2716 = C2710 + C2697;
    const double C2713 = C2707 + C2688;
    const double C2916 = C2910 + C2897;
    const double C2913 = C2907 + C2888;
    const double C10091 = C10082 + C3182;
    const double C10088 = C10079 + C3179;
    const double C10085 = C10076 + C2701;
    const double C10533 = C10530 + C10066;
    const double C10712 = C10706 + C3343;
    const double C10709 = C10703 + C10257;
    const double C25209 = C25206 + C3346;
    const double C2516 = C2507 + C2488;
    const double C2513 = C2504 + C2479;
    const double C2714 = C2708 + C2691;
    const double C2711 = C2705 + C2682;
    const double C10093 = C10084 + C3184;
    const double C10090 = C10081 + C3181;
    const double C10087 = C10078 + C2699;
    const double C5026 = C5018 + C5005;
    const double C5025 = C5017 + C5002;
    const double C5023 = C5015 + C4996;
    const double C5021 = C5013 + C4990;
    const double C5202 = C5196 + C5183;
    const double C5200 = C5194 + C5177;
    const double C5198 = C5192 + C5171;
    const double C5372 = C5366 + C5353;
    const double C5370 = C5364 + C5347;
    const double C6489 = C6483 + C5611;
    const double C6487 = C6481 + C5613;
    const double C6486 = C6480 + C5188;
    const double C6705 = C6701 + C5749;
    const double C6703 = C6699 + C5751;
    const double C7063 = C7061 + C5609;
    const double C7273 = C7271 + C5747;
    const double C12583 = C12581 + C7058;
    const double C12787 = C12785 + C7268;
    const double C13142 = C13140 + C7056;
    const double C13350 = C13348 + C7266;
    const double C14487 = C14485 + C13137;
    const double C15159 = C15150 + C15131;
    const double C15156 = C15147 + C15122;
    const double C15354 = C15348 + C15331;
    const double C15351 = C15345 + C15322;
    const double C16679 = C16670 + C15812;
    const double C16676 = C16667 + C15809;
    const double C16673 = C16664 + C15339;
    const double C30872 = C30864 + C30851;
    const double C30871 = C30863 + C30848;
    const double C30869 = C30861 + C30842;
    const double C30867 = C30859 + C30836;
    const double C31048 = C31042 + C31029;
    const double C31046 = C31040 + C31023;
    const double C31044 = C31038 + C31017;
    const double C31218 = C31212 + C31199;
    const double C31216 = C31210 + C31193;
    const double C32126 = C32122 + C31459;
    const double C32125 = C32121 + C31457;
    const double C32358 = C32352 + C32337;
    const double C32357 = C32351 + C31455;
    const double C32355 = C32349 + C31034;
    const double C32580 = C32576 + C31595;
    const double C32578 = C32574 + C32561;
    const double C32937 = C32935 + C32344;
    const double C33153 = C33149 + C31593;
    const double C33151 = C33147 + C32570;
    const double C35476 = C35474 + C31597;
    const double C41838 = C41836 + C32932;
    const double C36716 = C36707 + C36688;
    const double C36713 = C36704 + C36679;
    const double C36911 = C36905 + C36888;
    const double C36908 = C36902 + C36879;
    const double C38304 = C38297 + C37369;
    const double C38303 = C38295 + C36896;
    const double C38877 = C38874 + C37366;
    const double C48072 = C48043 - C48065;
    const double C48048 = C48041 + C49393;
    const double C2517 = C2508 + C2491;
    const double C5368 = C5362 + C5341;
    const double C15160 = C15151 + C15134;
    const double C31214 = C31208 + C31187;
    const double C36717 = C36708 + C36691;
    const double C173 = C168 * C49161;
    const double C2883 = C49428 * C2876;
    const double C15511 = C49428 * C2876;
    const double C20214 = C49407 * C2876;
    const double C33829 = C49407 * C2876;
    const double C37068 = C36661 * C2876;
    const double C2905 = C2881 + C2882;
    const double C15533 = C15509 + C15510;
    const double C20232 = C20212 + C20213;
    const double C33847 = C33827 + C33828;
    const double C37090 = C37066 + C37067;
    const double C19001 = C49428 * C3340;
    const double C20384 = C49407 * C3340;
    const double C25199 = C49428 * C3340;
    const double C33999 = C49407 * C3340;
    const double C38508 = C36661 * C3340;
    const double C25204 = C25198 + C3348;
    const double C19006 = C19000 + C15967;
    const double C20402 = C20382 + C20383;
    const double C34017 = C33997 + C33998;
    const double C38513 = C38507 + C37524;
    const double C48522 = ae * C48521;
    const double C3757 =
        (3 * C48411 + C48174 * C48521 + (2 * C48405 + C48174 * C48511) * ae) /
        C47945;
    const double C10531 = C10528 + C10064;
    const double C14629 = C14627 + C13345;
    const double C17111 = C17108 + C16650;
    const double C41980 = C41978 + C33144;
    const double C47366 = C47363 + C38870;
    const double C10687 = C49428 * C10252;
    const double C17264 = C49428 * C10252;
    const double C21923 = C49407 * C10252;
    const double C42951 = C49407 * C10252;
    const double C47519 = C36661 * C10252;
    const double C10701 = C10686 + C10255;
    const double C17278 = C17263 + C16835;
    const double C21934 = C21922 + C20807;
    const double C42962 = C42950 + C34422;
    const double C47527 = C47518 + C39085;
    const double C48673 = ae * C48672;
    const double C11122 =
        (3 * C48447 + C48174 * C48672 + (2 * C48441 + C48174 * C48662) * ae) /
        C47945;
    const double C48756 = C48727 + C48754;
    const double C2914 = C2908 + C2891;
    const double C15542 = C15536 + C15519;
    const double C20239 = C20231 + C20210;
    const double C33854 = C33846 + C33825;
    const double C37099 = C37093 + C37076;
    const double C10710 = C10704 + C3345;
    const double C17287 = C17281 + C15964;
    const double C21559 = C21555 + C20394;
    const double C42587 = C42583 + C34009;
    const double C39092 = C39089 + C37521;
    const double C3759 =
        (3 * (C48188 + C48420 + C48420 + C48174 * C48489) + C48499 + C48499 +
         C48174 * (2 * C48489 + C48496 + C48496 +
                   C48174 * (C48197 + C48492 + C48492 +
                             C48174 * (2 * ae * C48231 + C48174 * C48205)))) /
        C47952;
    const double C3765 = C2467 * C3756;
    const double C16375 = C15110 * C3756;
    const double C17785 = C17779 * C3756;
    const double C20556 = C20194 * C3756;
    const double C34171 = C33809 * C3756;
    const double C37932 = C48097 * C3756;
    const double C304 = C300 * C49161;
    const double C3882 = C300 * C49223;
    const double C22572 = C300 * C49223;
    const double C436 = C432 * C49161;
    const double C1105 = C1102 * C49425;
    const double C4016 = C1102 * C49223;
    const double C7939 = C1102 * C49425;
    const double C22706 = C1102 * C49223;
    const double C26406 = C1102 * C26395;
    const double C4162 = C4161 * C49223;
    const double C22842 = C4161 * C49223;
    const double C958 =
        (3 * C48207 + C48181 * C48221 + C48319 + C48319 +
         C48174 *
             (2 * ae * C48316 +
              C48174 * (3 * C48219 +
                        C48181 * (2 * C48181 * C48217 +
                                  C48181 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48193))))) /
        C47952;
    const double C964 = C114 * C953;
    const double C2501 = C2467 * C953;
    const double C5361 = C4982 * C953;
    const double C15144 = C15110 * C953;
    const double C31207 = C30828 * C953;
    const double C36701 = C48097 * C953;
    const double C48434 = ae * C48433;
    const double C2875 =
        (2 * C48293 + C48174 * C48433 + (C48291 + C48309 * C48178) * ae) /
        C47945;
    const double C3341 =
        (2 * (2 * ae * C48369 + C48174 * C48464) + C48476 + C48476 +
         C48174 *
             (C48464 + C48473 + C48473 +
              C48174 * (2 * ae * C48465 +
                        C48174 * C48251 *
                            (C48217 + (C48211 * C48212 +
                                       C48178 * bs[8] * std::pow(C48172, 8)) *
                                          C48177 * C48193)))) /
        C47952;
    const double C3351 = C2467 * C3338;
    const double C7816 = C4982 * C3338;
    const double C15970 = C15110 * C3338;
    const double C20401 = C20194 * C3338;
    const double C34016 = C33809 * C3338;
    const double C36549 = C30828 * C3338;
    const double C37527 = C48097 * C3338;
    const double C48544 = C48543 + C48537;
    const double C9789 =
        (3 * C48548 + C48251 * C48561 + C48600 + C48600 +
         C48174 *
             (2 * ae * C48595 +
              C48174 * (3 * C48559 +
                        C48251 * (2 * C48251 * C48217 +
                                  C48251 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48326))))) /
        C47952;
    const double C9792 = C114 * C9787;
    const double C10526 = C2467 * C9787;
    const double C14626 = C4982 * C9787;
    const double C17106 = C15110 * C9787;
    const double C41977 = C30828 * C9787;
    const double C47361 = C48097 * C9787;
    const double C48650 = ae * C48649;
    const double C10683 =
        (2 * C48576 + C48174 * C48649 + (C48574 + C48592 * C48178) * ae) /
        C47945;
    const double C48695 = C48694 + C48688;
    const double C10253 =
        (2 * (2 * ae * C48362 + C48174 * C48552) + C48639 + C48639 +
         C48174 * (C48552 + C48636 + C48636 +
                   C48174 * (2 * ae * C48608 +
                             C48174 * (C48550 + C48181 *
                                                    (C48211 * C48212 +
                                                     C48178 * bs[8] *
                                                         std::pow(C48172, 8)) *
                                                    C48177 * C48326)))) /
        C47952;
    const double C10260 = C2467 * C10251;
    const double C13891 = C4982 * C10251;
    const double C16840 = C15110 * C10251;
    const double C20811 = C20194 * C10251;
    const double C33700 = C30828 * C10251;
    const double C34426 = C33809 * C10251;
    const double C39088 = C48097 * C10251;
    const double C48721 = C48720 + C48714;
    const double C48791 = ae * C48789;
    const double C48790 = C48174 * C48789;
    const double C48830 = ae * C48828;
    const double C48829 = C48174 * C48828;
    const double C48877 = C48840 + C48875;
    const double C48064 = C48056 / C47945;
    const double C48049 = C48039 / C47956;
    const double C48047 = C47943 * C48039;
    const double C30853 = C30825 * C119;
    const double C30844 = C30825 * C118;
    const double C30838 = C30825 * C117;
    const double C30832 = C30825 * C116;
    const double C31031 = C30825 * C262;
    const double C31025 = C30825 * C261;
    const double C31019 = C30825 * C260;
    const double C31201 = C30825 * C394;
    const double C31195 = C30825 * C393;
    const double C31189 = C30825 * C392;
    const double C32118 = C30825 * C593;
    const double C32112 = C30825 * C592;
    const double C32339 = C30825 * C1253;
    const double C32330 = C30825 * C591;
    const double C32326 = C30825 * C263;
    const double C32568 = C30825 * C694;
    const double C32563 = C30825 * C1441;
    const double C32929 = C30825 * C1254;
    const double C33141 = C30825 * C693;
    const double C33137 = C30825 * C1442;
    const double C35472 = C30825 * C695;
    const double C41832 = C30825 * C1738;
    const double C41974 = C30825 * C1901;
    const double C2518 = C2509 + C2494;
    const double C2515 = C2506 + C2485;
    const double C2512 = C2503 + C2476;
    const double C2715 = C2709 + C2694;
    const double C2712 = C2706 + C2685;
    const double C2915 = C2909 + C2894;
    const double C2912 = C2906 + C2885;
    const double C10092 = C10083 + C3183;
    const double C10089 = C10080 + C3180;
    const double C10086 = C10077 + C2700;
    const double C10532 = C10529 + C10065;
    const double C10711 = C10705 + C3344;
    const double C10708 = C10702 + C10256;
    const double C25208 = C25205 + C3347;
    const double C5027 = C5019 + C5008;
    const double C5024 = C5016 + C4999;
    const double C5022 = C5014 + C4993;
    const double C5020 = C5012 + C4987;
    const double C5203 = C5197 + C5186;
    const double C5201 = C5195 + C5180;
    const double C5199 = C5193 + C5174;
    const double C5373 = C5367 + C5356;
    const double C5371 = C5365 + C5350;
    const double C5369 = C5363 + C5344;
    const double C6490 = C6484 + C5610;
    const double C6488 = C6482 + C5612;
    const double C6485 = C6479 + C5189;
    const double C6706 = C6702 + C5748;
    const double C6704 = C6700 + C5750;
    const double C7064 = C7062 + C5608;
    const double C7274 = C7272 + C5746;
    const double C12584 = C12582 + C7057;
    const double C12788 = C12786 + C7267;
    const double C13143 = C13141 + C7055;
    const double C13351 = C13349 + C7265;
    const double C14488 = C14486 + C13136;
    const double C14630 = C14628 + C13344;
    const double C15162 = C15153 + C15140;
    const double C15157 = C15148 + C15125;
    const double C15154 = C15145 + C15116;
    const double C15356 = C15350 + C15337;
    const double C15353 = C15347 + C15328;
    const double C15544 = C15538 + C15525;
    const double C15541 = C15535 + C15516;
    const double C16677 = C16668 + C15810;
    const double C16674 = C16665 + C15807;
    const double C16671 = C16662 + C15341;
    const double C17113 = C17110 + C16652;
    const double C17289 = C17283 + C15962;
    const double C17286 = C17280 + C16837;
    const double C19011 = C19008 + C15965;
    const double C15161 = C15152 + C15137;
    const double C15158 = C15149 + C15128;
    const double C15155 = C15146 + C15119;
    const double C15355 = C15349 + C15334;
    const double C15352 = C15346 + C15325;
    const double C15543 = C15537 + C15522;
    const double C15540 = C15534 + C15513;
    const double C16678 = C16669 + C15811;
    const double C16675 = C16666 + C15808;
    const double C16672 = C16663 + C15340;
    const double C17112 = C17109 + C16651;
    const double C17288 = C17282 + C15963;
    const double C17285 = C17279 + C16836;
    const double C19010 = C19007 + C15966;
    const double C2528 = C2519 + C2498;
    const double C2523 = C2514 + C2483;
    const double C2520 = C2511 + C2474;
    const double C2722 = C2716 + C2698;
    const double C2719 = C2713 + C2689;
    const double C2922 = C2916 + C2898;
    const double C2919 = C2913 + C2889;
    const double C10100 = C10091 + C10068;
    const double C10097 = C10088 + C10059;
    const double C10094 = C10085 + C10053;
    const double C10536 = C10533 + C10523;
    const double C10718 = C10712 + C10697;
    const double C10715 = C10709 + C10691;
    const double C25212 = C25209 + C25203;
    const double C2525 = C2516 + C2489;
    const double C2522 = C2513 + C2480;
    const double C2720 = C2714 + C2692;
    const double C2717 = C2711 + C2683;
    const double C10102 = C10093 + C10072;
    const double C10099 = C10090 + C10063;
    const double C10096 = C10087 + C10057;
    const double C5034 = C5026 + C5006;
    const double C5033 = C5025 + C5003;
    const double C5031 = C5023 + C4997;
    const double C5029 = C5021 + C4991;
    const double C5208 = C5202 + C5184;
    const double C5206 = C5200 + C5178;
    const double C5204 = C5198 + C5172;
    const double C5378 = C5372 + C5354;
    const double C5376 = C5370 + C5348;
    const double C6495 = C6489 + C6475;
    const double C6493 = C6487 + C6470;
    const double C6492 = C6486 + C6467;
    const double C6709 = C6705 + C6696;
    const double C6707 = C6703 + C6692;
    const double C7065 = C7063 + C7052;
    const double C7275 = C7273 + C7262;
    const double C12585 = C12583 + C12577;
    const double C12789 = C12787 + C12782;
    const double C13144 = C13142 + C13133;
    const double C13352 = C13350 + C13341;
    const double C14489 = C14487 + C14480;
    const double C15168 = C15159 + C15132;
    const double C15165 = C15156 + C15123;
    const double C15360 = C15354 + C15332;
    const double C15357 = C15351 + C15323;
    const double C16688 = C16679 + C16658;
    const double C16685 = C16676 + C16649;
    const double C16682 = C16673 + C16643;
    const double C30880 = C30872 + C30852;
    const double C30879 = C30871 + C30849;
    const double C30877 = C30869 + C30843;
    const double C30875 = C30867 + C30837;
    const double C31054 = C31048 + C31030;
    const double C31052 = C31046 + C31024;
    const double C31050 = C31044 + C31018;
    const double C31224 = C31218 + C31200;
    const double C31222 = C31216 + C31194;
    const double C32130 = C32126 + C32117;
    const double C32129 = C32125 + C32115;
    const double C32364 = C32358 + C32338;
    const double C32363 = C32357 + C32333;
    const double C32361 = C32355 + C32329;
    const double C32584 = C32580 + C32567;
    const double C32582 = C32578 + C32562;
    const double C32939 = C32937 + C32928;
    const double C33157 = C33153 + C33140;
    const double C33155 = C33151 + C33136;
    const double C35478 = C35476 + C35471;
    const double C41840 = C41838 + C41831;
    const double C36725 = C36716 + C36689;
    const double C36722 = C36713 + C36680;
    const double C36917 = C36911 + C36889;
    const double C36914 = C36908 + C36880;
    const double C38310 = C38304 + C38287;
    const double C38309 = C38303 + C38284;
    const double C38880 = C38877 + C38863;
    const double C36700 = C48072 * C397;
    const double C36694 = C48072 * C398;
    const double C36685 = C48072 * C399;
    const double C36676 = C48072 * C400;
    const double C36670 = C48072 * C401;
    const double C36900 = C48072 * C701;
    const double C36897 = C48072 * C698;
    const double C36891 = C48072 * C699;
    const double C36882 = C48072 * C700;
    const double C37088 = C48072 * C952;
    const double C37085 = C48072 * C949;
    const double C37079 = C48072 * C950;
    const double C37070 = C48072 * C951;
    const double C37371 = C48072 * C1444;
    const double C37368 = C48072 * C1445;
    const double C37365 = C48072 * C1446;
    const double C37526 = C48072 * C2335;
    const double C37523 = C48072 * C2333;
    const double C37520 = C48072 * C2331;
    const double C37937 = C48072 * C2872;
    const double C37934 = C48072 * C2873;
    const double C37931 = C48072 * C2874;
    const double C38872 = C48072 * C1905;
    const double C38869 = C48072 * C1904;
    const double C39087 = C48072 * C2334;
    const double C39084 = C48072 * C2332;
    const double C39636 = C48072 * C3337;
    const double C39633 = C48072 * C3336;
    const double C47360 = C48072 * C9303;
    const double C47525 = C48072 * C9786;
    const double C47939 = C48072 * C10250;
    const double C17777 =
        (C48072 / C47987 + ((C47943 * C48097 + C36661) * ae) / C47945) /
            C47987 -
        ((C47943 * (C48097 / C47987 + (0 * ae) / C47945) + C49407) * be) /
            C47945;
    const double C20192 =
        C48072 / C47987 - ((C47943 * C48097 + C36661) * be) / C47945;
    const double C33807 =
        C48072 / C47987 + ((C47943 * C48097 + C36661) * ae) / C47945;
    const double C48055 = C48048 * be;
    const double C2526 = C2517 + C2492;
    const double C5374 = C5368 + C5342;
    const double C15169 = C15160 + C15135;
    const double C31220 = C31214 + C31188;
    const double C36726 = C36717 + C36692;
    const double C2911 = C2905 + C2882;
    const double C15539 = C15533 + C15510;
    const double C20240 = C20232 + C20213;
    const double C33855 = C33847 + C33828;
    const double C37096 = C37090 + C37067;
    const double C25207 = C25204 + C3348;
    const double C19009 = C19006 + C15967;
    const double C20406 = C20402 + C20383;
    const double C34021 = C34017 + C33998;
    const double C38516 = C38513 + C37524;
    const double C3760 =
        (3 * (C48322 + C48409 + C48409 + C48174 * C48512) + C48522 + C48522 +
         C48174 * (2 * C48512 + C48519 + C48519 +
                   C48174 * (C48209 + C48515 + C48515 +
                             C48174 * (2 * ae * C48297 +
                                       C48174 * C48181 * C48217)))) /
        C47952;
    const double C3768 = C2467 * C3757;
    const double C16378 = C15110 * C3757;
    const double C17786 = C17779 * C3757;
    const double C20545 = C20194 * C3757;
    const double C34160 = C33809 * C3757;
    const double C37935 = C48097 * C3757;
    const double C10534 = C10531 + C10519;
    const double C14631 = C14629 + C14622;
    const double C17114 = C17111 + C17099;
    const double C41982 = C41980 + C41973;
    const double C47369 = C47366 + C47354;
    const double C10707 = C10701 + C10255;
    const double C17284 = C17278 + C16835;
    const double C21938 = C21934 + C20807;
    const double C42966 = C42962 + C34422;
    const double C47530 = C47527 + C39085;
    const double C11124 =
        (3 * (C48436 + C48445 + C48445 + C48174 * C48663) + C48673 + C48673 +
         C48174 * (2 * C48663 + C48670 + C48670 +
                   C48174 * (C48556 + C48666 + C48666 +
                             C48174 * (2 * ae * C48580 +
                                       C48174 * C48251 * C48217)))) /
        C47952;
    const double C11129 = C2467 * C11122;
    const double C17700 = C15110 * C11122;
    const double C17881 = C17779 * C11122;
    const double C20945 = C20194 * C11122;
    const double C34560 = C33809 * C11122;
    const double C39634 = C48097 * C11122;
    const double C48757 = C48756 + C48749;
    const double C2920 = C2914 + C2892;
    const double C15548 = C15542 + C15520;
    const double C20247 = C20239 + C20211;
    const double C33862 = C33854 + C33826;
    const double C37105 = C37099 + C37077;
    const double C10716 = C10710 + C10693;
    const double C17293 = C17287 + C17270;
    const double C21563 = C21559 + C21551;
    const double C42591 = C42587 + C42579;
    const double C39095 = C39092 + C39078;
    const double C2879 =
        (2 * (2 * ae * C48288 + C48174 * C48221) + C48434 + C48434 +
         C48174 *
             (C48221 + C48431 + C48431 +
              C48174 * (2 * ae * C48312 +
                        C48174 * (2 * C48181 * C48217 +
                                  C48181 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48193))))) /
        C47952;
    const double C2904 = C2467 * C2875;
    const double C6119 = C4982 * C2875;
    const double C15532 = C15110 * C2875;
    const double C20227 = C20194 * C2875;
    const double C31965 = C30828 * C2875;
    const double C33842 = C33809 * C2875;
    const double C37089 = C48097 * C2875;
    const double C48545 = ae * C48544;
    const double C3758 =
        (3 * C48400 + C48174 * C48544 + (2 * C48394 + C48174 * C48534) * ae) /
        C47945;
    const double C10684 =
        (2 * (2 * ae * C48570 + C48174 * C48561) + C48650 + C48650 +
         C48174 *
             (C48561 + C48647 + C48647 +
              C48174 * (2 * ae * C48591 +
                        C48174 * (2 * C48251 * C48217 +
                                  C48251 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48326))))) /
        C47952;
    const double C10700 = C2467 * C10683;
    const double C14992 = C4982 * C10683;
    const double C17277 = C15110 * C10683;
    const double C21933 = C20194 * C10683;
    const double C42343 = C30828 * C10683;
    const double C42961 = C33809 * C10683;
    const double C47526 = C48097 * C10683;
    const double C48696 = ae * C48695;
    const double C11123 =
        (3 * C48627 + C48174 * C48695 + (2 * C48621 + C48174 * C48685) * ae) /
        C47945;
    const double C48722 = ae * C48721;
    const double C17878 =
        (3 * C48461 + C48174 * C48721 + (2 * C48455 + C48174 * C48712) * ae) /
        C47945;
    const double C48792 = C48763 + C48790;
    const double C48831 = C48799 + C48829;
    const double C48878 = C48877 + C48865;
    const double C48071 = C48049 - C48064;
    const double C48054 = C48047 / C47945;
    const double C30865 = C30853 + C30854;
    const double C30862 = C30844 + C30845;
    const double C30860 = C30838 + C30839;
    const double C30858 = C30832 + C30833;
    const double C31043 = C31031 + C31032;
    const double C31041 = C31025 + C31026;
    const double C31039 = C31019 + C31020;
    const double C31213 = C31201 + C31202;
    const double C31211 = C31195 + C31196;
    const double C31209 = C31189 + C31190;
    const double C32123 = C32118 + C31458;
    const double C32120 = C32112 + C31456;
    const double C32353 = C32339 + C32340;
    const double C32350 = C32330 + C31454;
    const double C32348 = C32326 + C31035;
    const double C32577 = C32568 + C31594;
    const double C32575 = C32563 + C32564;
    const double C32936 = C32929 + C32345;
    const double C33150 = C33141 + C31592;
    const double C33148 = C33137 + C32571;
    const double C35475 = C35472 + C31596;
    const double C41837 = C41832 + C32931;
    const double C41979 = C41974 + C33143;
    const double C2527 = C2518 + C2495;
    const double C2524 = C2515 + C2486;
    const double C2521 = C2512 + C2477;
    const double C2721 = C2715 + C2695;
    const double C2718 = C2712 + C2686;
    const double C2921 = C2915 + C2895;
    const double C2918 = C2912 + C2886;
    const double C10101 = C10092 + C10070;
    const double C10098 = C10089 + C10061;
    const double C10095 = C10086 + C10055;
    const double C10535 = C10532 + C10521;
    const double C10717 = C10711 + C10695;
    const double C10714 = C10708 + C10689;
    const double C25211 = C25208 + C25201;
    const double C5035 = C5027 + C5009;
    const double C5032 = C5024 + C5000;
    const double C5030 = C5022 + C4994;
    const double C5028 = C5020 + C4988;
    const double C5209 = C5203 + C5187;
    const double C5207 = C5201 + C5181;
    const double C5205 = C5199 + C5175;
    const double C5379 = C5373 + C5357;
    const double C5377 = C5371 + C5351;
    const double C5375 = C5369 + C5345;
    const double C6496 = C6490 + C6477;
    const double C6494 = C6488 + C6472;
    const double C6491 = C6485 + C6465;
    const double C6710 = C6706 + C6698;
    const double C6708 = C6704 + C6694;
    const double C7066 = C7064 + C7054;
    const double C7276 = C7274 + C7264;
    const double C12586 = C12584 + C12579;
    const double C12790 = C12788 + C12784;
    const double C13145 = C13143 + C13135;
    const double C13353 = C13351 + C13343;
    const double C14490 = C14488 + C14482;
    const double C14632 = C14630 + C14624;
    const double C15171 = C15162 + C15141;
    const double C15166 = C15157 + C15126;
    const double C15163 = C15154 + C15117;
    const double C15362 = C15356 + C15338;
    const double C15359 = C15353 + C15329;
    const double C15550 = C15544 + C15526;
    const double C15547 = C15541 + C15517;
    const double C16686 = C16677 + C16654;
    const double C16683 = C16674 + C16645;
    const double C16680 = C16671 + C16639;
    const double C17116 = C17113 + C17103;
    const double C17295 = C17289 + C17274;
    const double C17292 = C17286 + C17268;
    const double C19014 = C19011 + C19005;
    const double C15170 = C15161 + C15138;
    const double C15167 = C15158 + C15129;
    const double C15164 = C15155 + C15120;
    const double C15361 = C15355 + C15335;
    const double C15358 = C15352 + C15326;
    const double C15549 = C15543 + C15523;
    const double C15546 = C15540 + C15514;
    const double C16687 = C16678 + C16656;
    const double C16684 = C16675 + C16647;
    const double C16681 = C16672 + C16641;
    const double C17115 = C17112 + C17101;
    const double C17294 = C17288 + C17272;
    const double C17291 = C17285 + C17266;
    const double C19013 = C19010 + C19003;
    const double C17794 = C17777 * C2872;
    const double C17787 = C17777 * C2873;
    const double C17784 = C17777 * C2874;
    const double C17889 = C17777 * C3337;
    const double C17882 = C17777 * C3336;
    const double C17987 = C17777 * C3757;
    const double C17980 = C17777 * C3756;
    const double C18136 = C17777 * C10250;
    const double C18226 = C17777 * C11122;
    const double C20226 = C20192 * C952;
    const double C20216 = C20192 * C951;
    const double C20207 = C20192 * C950;
    const double C20198 = C20192 * C949;
    const double C20400 = C20192 * C2335;
    const double C20395 = C20192 * C2331;
    const double C20386 = C20192 * C2333;
    const double C20562 = C20192 * C2872;
    const double C20557 = C20192 * C2874;
    const double C20548 = C20192 * C2873;
    const double C20810 = C20192 * C2334;
    const double C20806 = C20192 * C2332;
    const double C20948 = C20192 * C3337;
    const double C20944 = C20192 * C3336;
    const double C21314 = C20192 * C3757;
    const double C21310 = C20192 * C3756;
    const double C21932 = C20192 * C9786;
    const double C22086 = C20192 * C10250;
    const double C22460 = C20192 * C11122;
    const double C33841 = C33807 * C952;
    const double C33831 = C33807 * C951;
    const double C33822 = C33807 * C950;
    const double C33813 = C33807 * C949;
    const double C34015 = C33807 * C2335;
    const double C34010 = C33807 * C2331;
    const double C34001 = C33807 * C2333;
    const double C34177 = C33807 * C2872;
    const double C34172 = C33807 * C2874;
    const double C34163 = C33807 * C2873;
    const double C34425 = C33807 * C2334;
    const double C34421 = C33807 * C2332;
    const double C34563 = C33807 * C3337;
    const double C34559 = C33807 * C3336;
    const double C34929 = C33807 * C3757;
    const double C34925 = C33807 * C3756;
    const double C42960 = C33807 * C9786;
    const double C43114 = C33807 * C10250;
    const double C43488 = C33807 * C11122;
    const double C48063 = C48055 / C47945;
    const double C2917 = C2911 + C2883;
    const double C15545 = C15539 + C15511;
    const double C20248 = C20240 + C20214;
    const double C33863 = C33855 + C33829;
    const double C37102 = C37096 + C37068;
    const double C25210 = C25207 + C25199;
    const double C19012 = C19009 + C19001;
    const double C20410 = C20406 + C20384;
    const double C34025 = C34021 + C33999;
    const double C38519 = C38516 + C38508;
    const double C20546 = C49407 * C3760;
    const double C34161 = C49407 * C3760;
    const double C20564 = C20544 + C20545;
    const double C34179 = C34159 + C34160;
    const double C10713 = C10707 + C10687;
    const double C17290 = C17284 + C17264;
    const double C21942 = C21938 + C21923;
    const double C42970 = C42966 + C42951;
    const double C47533 = C47530 + C47519;
    const double C22077 = C49407 * C11124;
    const double C43105 = C49407 * C11124;
    const double C22088 = C22076 + C20945;
    const double C43116 = C43104 + C34560;
    const double C48758 = ae * C48757;
    const double C17974 =
        (4 * C48498 + C48174 * C48757 + (3 * C48488 + C48174 * C48746) * ae) /
        C47945;
    const double C3761 =
        (3 * (C48207 + C48398 + C48398 + C48174 * C48535) + C48545 + C48545 +
         C48174 *
             (2 * C48535 + C48542 + C48542 +
              C48174 * (C48219 + C48538 + C48538 +
                        C48174 * (2 * ae * C48308 +
                                  C48174 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48193))))) /
        C47952;
    const double C3771 = C2467 * C3758;
    const double C16381 = C15110 * C3758;
    const double C17795 = C17779 * C3758;
    const double C20563 = C20194 * C3758;
    const double C34178 = C33809 * C3758;
    const double C37938 = C48097 * C3758;
    const double C11125 =
        (3 * (C48548 + C48625 + C48625 + C48174 * C48686) + C48696 + C48696 +
         C48174 *
             (2 * C48686 + C48693 + C48693 +
              C48174 * (C48559 + C48689 + C48689 +
                        C48174 * (2 * ae * C48586 +
                                  C48174 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48326))))) /
        C47952;
    const double C11132 = C2467 * C11123;
    const double C17703 = C15110 * C11123;
    const double C18137 = C17779 * C11123;
    const double C22087 = C20194 * C11123;
    const double C43115 = C33809 * C11123;
    const double C47940 = C48097 * C11123;
    const double C17879 =
        (3 * (C48450 + C48459 + C48459 + C48174 * C48709) + C48722 + C48722 +
         C48174 *
             (2 * C48709 + C48719 + C48719 +
              C48174 * (C48699 + C48715 + C48715 +
                        C48174 * (2 * ae * C48701 +
                                  C48174 * C48251 * C48181 *
                                      (C48211 * C48212 +
                                       C48178 * bs[8] * std::pow(C48172, 8)) *
                                      C48177)))) /
        C47952;
    const double C17890 = C17779 * C17878;
    const double C20085 = C15110 * C17878;
    const double C20949 = C20194 * C17878;
    const double C26283 = C2467 * C17878;
    const double C34564 = C33809 * C17878;
    const double C39637 = C48097 * C17878;
    const double C48793 = C48792 + C48785;
    const double C48832 = C48831 + C48824;
    const double C48880 = ae * C48878;
    const double C48879 = C48174 * C48878;
    const double C36693 = C48071 * C392;
    const double C36684 = C48071 * C393;
    const double C36675 = C48071 * C394;
    const double C36890 = C48071 * C694;
    const double C36881 = C48071 * C695;
    const double C37078 = C48071 * C945;
    const double C37069 = C48071 * C946;
    const double C38288 = C48071 * C1441;
    const double C38281 = C48071 * C693;
    const double C38509 = C48071 * C2327;
    const double C38864 = C48071 * C1442;
    const double C39079 = C48071 * C2325;
    const double C47355 = C48071 * C1901;
    const double C47520 = C48071 * C2326;
    const double C17776 =
        (C48071 / C47987 + ((C48098 - C47969 / C48095) * ae) / C47945) /
            C47987 -
        ((2 * (C48097 / C47987 + (0 * ae) / C47945) -
          C47969 / (C47945 * 4 * C48005)) *
         be) /
            C47945;
    const double C20191 =
        C48071 / C47987 - ((C48098 - C47969 / C48095) * be) / C47945;
    const double C33806 =
        C48071 / C47987 + ((C48098 - C47969 / C48095) * ae) / C47945;
    const double C48061 = C48054 + C48040;
    const double C30873 = C30865 + C30854;
    const double C30870 = C30862 + C30845;
    const double C30868 = C30860 + C30839;
    const double C30866 = C30858 + C30833;
    const double C31049 = C31043 + C31032;
    const double C31047 = C31041 + C31026;
    const double C31045 = C31039 + C31020;
    const double C31219 = C31213 + C31202;
    const double C31217 = C31211 + C31196;
    const double C31215 = C31209 + C31190;
    const double C32127 = C32123 + C31458;
    const double C32124 = C32120 + C31456;
    const double C32359 = C32353 + C32340;
    const double C32356 = C32350 + C31454;
    const double C32354 = C32348 + C31035;
    const double C32581 = C32577 + C31594;
    const double C32579 = C32575 + C32564;
    const double C32938 = C32936 + C32345;
    const double C33154 = C33150 + C31592;
    const double C33152 = C33148 + C32571;
    const double C35477 = C35475 + C31596;
    const double C41839 = C41837 + C32931;
    const double C41981 = C41979 + C33143;
    const double C2529 = C2523 + C2524;
    const double C25001 = C2721 + C2722;
    const double C25000 = C2722 + C2721;
    const double C10517 = C10097 + C10098;
    const double C5037 = C5032 + C5033;
    const double C5036 = C5030 + C5031;
    const double C6478 = C5208 + C5209;
    const double C6468 = C5209 + C5208;
    const double C6267 = C5207 + C5206;
    const double C6473 = C5206 + C5207;
    const double C12580 = C6495 + C6496;
    const double C12575 = C6496 + C6495;
    const double C13131 = C7066 + C7065;
    const double C14478 = C13145 + C13144;
    const double C15172 = C15166 + C15167;
    const double C18803 = C15361 + C15362;
    const double C18802 = C15362 + C15361;
    const double C17097 = C16683 + C16684;
    const double C48070 = C48062 - C48063;
    const double C20568 = C20564 + C20545;
    const double C34183 = C34179 + C34160;
    const double C22092 = C22088 + C20945;
    const double C43120 = C43116 + C34560;
    const double C17976 =
        (4 * (2 * C48489 + C48496 + C48496 + C48174 * C48747) + C48758 +
         C48758 +
         C48174 * (3 * C48747 + C48755 + C48755 +
                   C48174 * (2 * C48739 + C48751 + C48751 +
                             C48174 * (C48205 + C48743 + C48743 +
                                       C48174 * (2 * ae * C48242 +
                                                 C48174 * C48217))))) /
        C47952;
    const double C17979 = C17779 * C17974;
    const double C18460 = C17777 * C17974;
    const double C21311 = C20194 * C17974;
    const double C34926 = C33809 * C17974;
    const double C48794 = ae * C48793;
    const double C17975 =
        (4 * C48521 + C48174 * C48793 + (3 * C48511 + C48174 * C48782) * ae) /
        C47945;
    const double C48833 = ae * C48832;
    const double C18220 =
        (4 * C48672 + C48174 * C48832 + (3 * C48662 + C48174 * C48822) * ae) /
        C47945;
    const double C48881 = C48839 + C48879;
    const double C36709 = C36693 + C36694;
    const double C36706 = C36684 + C36685;
    const double C36703 = C36675 + C36676;
    const double C36906 = C36890 + C36891;
    const double C36903 = C36881 + C36882;
    const double C37094 = C37078 + C37079;
    const double C37091 = C37069 + C37070;
    const double C38298 = C38288 + C37368;
    const double C38294 = C38281 + C36897;
    const double C38514 = C38509 + C37523;
    const double C38875 = C38864 + C37365;
    const double C39090 = C39079 + C37520;
    const double C47364 = C47355 + C38869;
    const double C47528 = C47520 + C39084;
    const double C20215 = C20191 * C946;
    const double C20206 = C20191 * C945;
    const double C20385 = C20191 * C2327;
    const double C20547 = C20191 * C2869;
    const double C21548 = C20191 * C2325;
    const double C21924 = C20191 * C2326;
    const double C22078 = C20191 * C3333;
    const double C33830 = C33806 * C946;
    const double C33821 = C33806 * C945;
    const double C34000 = C33806 * C2327;
    const double C34162 = C33806 * C2869;
    const double C42576 = C33806 * C2325;
    const double C42952 = C33806 * C2326;
    const double C43106 = C33806 * C3333;
    const double C48069 = C48061 * be;
    const double C30881 = C30873 + C30855;
    const double C30878 = C30870 + C30846;
    const double C30876 = C30868 + C30840;
    const double C30874 = C30866 + C30834;
    const double C31055 = C31049 + C31033;
    const double C31053 = C31047 + C31027;
    const double C31051 = C31045 + C31021;
    const double C31225 = C31219 + C31203;
    const double C31223 = C31217 + C31197;
    const double C31221 = C31215 + C31191;
    const double C32131 = C32127 + C32119;
    const double C32128 = C32124 + C32113;
    const double C32365 = C32359 + C32341;
    const double C32362 = C32356 + C32331;
    const double C32360 = C32354 + C32327;
    const double C32585 = C32581 + C32569;
    const double C32583 = C32579 + C32565;
    const double C32940 = C32938 + C32930;
    const double C33158 = C33154 + C33142;
    const double C33156 = C33152 + C33138;
    const double C35479 = C35477 + C35473;
    const double C41841 = C41839 + C41833;
    const double C41983 = C41981 + C41975;
    const double C2530 = C2529 + C2525;
    const double C25003 = C2720 + C25001;
    const double C25002 = C25000 + C2720;
    const double C10527 = C10517 + C10099;
    const double C5039 = C5037 * C49161;
    const double C5038 = C5036 * C49161;
    const double C6266 = C5036 * C49391;
    const double C27665 = C5036 * C22559;
    const double C6268 = C6267 * C49223;
    const double C27666 = C6267 * C49223;
    const double C15173 = C15172 + C15168;
    const double C18805 = C15360 + C18803;
    const double C18804 = C18802 + C15360;
    const double C17107 = C17097 + C16685;
    const double C48077 = C48070 + C48034;
    const double C20572 = C20568 + C20546;
    const double C34187 = C34183 + C34161;
    const double C22096 = C22092 + C22077;
    const double C43124 = C43120 + C43105;
    const double C17977 =
        (4 * (2 * C48512 + C48519 + C48519 + C48174 * C48783) + C48794 +
         C48794 +
         C48174 * (3 * C48783 + C48791 + C48791 +
                   C48174 * (2 * C48775 + C48787 + C48787 +
                             C48174 * (C48550 + C48779 + C48779 +
                                       C48174 * (2 * ae * C48603 +
                                                 C48174 * C48181 *
                                                     (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                     C48177))))) /
        C47952;
    const double C17988 = C17779 * C17975;
    const double C21315 = C20194 * C17975;
    const double C34930 = C33809 * C17975;
    const double C18221 =
        (4 * (2 * C48663 + C48670 + C48670 + C48174 * C48820) + C48833 +
         C48833 +
         C48174 * (3 * C48820 + C48830 + C48830 +
                   C48174 * (2 * C48811 + C48826 + C48826 +
                             C48174 * (C48798 + C48819 + C48819 +
                                       C48174 * (2 * ae * C48801 +
                                                 C48174 * C48251 *
                                                     (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                     C48177))))) /
        C47952;
    const double C18227 = C17779 * C18220;
    const double C22461 = C20194 * C18220;
    const double C43489 = C33809 * C18220;
    const double C48882 = C48881 + C48873;
    const double C36718 = C36709 + C36694;
    const double C36715 = C36706 + C36685;
    const double C36712 = C36703 + C36676;
    const double C36912 = C36906 + C36891;
    const double C36909 = C36903 + C36882;
    const double C37100 = C37094 + C37079;
    const double C37097 = C37091 + C37070;
    const double C38305 = C38298 + C37368;
    const double C38302 = C38294 + C36897;
    const double C38517 = C38514 + C37523;
    const double C38878 = C38875 + C37365;
    const double C39093 = C39090 + C37520;
    const double C47367 = C47364 + C38869;
    const double C47531 = C47528 + C39084;
    const double C20233 = C20215 + C20216;
    const double C20230 = C20206 + C20207;
    const double C20403 = C20385 + C20386;
    const double C20565 = C20547 + C20548;
    const double C21554 = C21548 + C20395;
    const double C21935 = C21924 + C20806;
    const double C22089 = C22078 + C20944;
    const double C33848 = C33830 + C33831;
    const double C33845 = C33821 + C33822;
    const double C34018 = C34000 + C34001;
    const double C34180 = C34162 + C34163;
    const double C42582 = C42576 + C34010;
    const double C42963 = C42952 + C34421;
    const double C43117 = C43106 + C34559;
    const double C48076 = C48069 / C47945;
    const double C30883 = C30878 + C30879;
    const double C30882 = C30876 + C30877;
    const double C32343 = C31054 + C31055;
    const double C32334 = C31055 + C31054;
    const double C35078 = C31053 + C31052;
    const double C35275 = C31052 + C31053;
    const double C32342 = C32129 + C32128;
    const double C32335 = C32128 + C32129;
    const double C32926 = C32362 + C32363;
    const double C41829 = C32940 + C32939;
    const double C2531 = C2530 * C49161;
    const double C6269 = C6266 + C6268;
    const double C27667 = C27665 + C27666;
    const double C15174 = C15173 * C49161;
    const double C36699 = C48077 * C126;
    const double C36697 = C48077 * C125;
    const double C36682 = C48077 * C124;
    const double C36673 = C48077 * C123;
    const double C36669 = C48077 * C122;
    const double C36899 = C48077 * C266;
    const double C36898 = C48077 * C269;
    const double C36894 = C48077 * C268;
    const double C36885 = C48077 * C267;
    const double C37087 = C48077 * C398;
    const double C37086 = C48077 * C401;
    const double C37082 = C48077 * C400;
    const double C37073 = C48077 * C399;
    const double C37370 = C48077 * C598;
    const double C37367 = C48077 * C597;
    const double C37364 = C48077 * C596;
    const double C37525 = C48077 * C700;
    const double C37522 = C48077 * C699;
    const double C37519 = C48077 * C698;
    const double C37936 = C48077 * C951;
    const double C37933 = C48077 * C950;
    const double C37930 = C48077 * C949;
    const double C38871 = C48077 * C1257;
    const double C38868 = C48077 * C1258;
    const double C39086 = C48077 * C1445;
    const double C39083 = C48077 * C1446;
    const double C39635 = C48077 * C2333;
    const double C39632 = C48077 * C2331;
    const double C47359 = C48077 * C1741;
    const double C47524 = C48077 * C1904;
    const double C47938 = C48077 * C2332;
    const double C17771 =
        (((((0 - (C47943 * C48004) / C47945) * ae) / C47945 -
           (0 * be) / C47956 + (2 * C48006) / C47945) /
              C47987 -
          ((C47943 * C48066 + 0) * be) / C47945 + C48023 - C48046) /
             C47987 +
         ((C47943 * C48082 + 0) * ae) / C47945) /
            C47987 -
        ((C47943 * (C48082 / C47987 +
                    ((C47943 * C48077 + C49261) * ae) / C47945 + C48072) +
          C49465) *
         be) /
            C47945 +
        C48077 / C47987 + ((C47943 * C48072 + C49268) * ae) / C47945 +
        2 * (C48034 / C47987 - (0 * be) / C47945);
    const double C17773 =
        (C48082 / C47987 + ((C47943 * C48077 + C49261) * ae) / C47945 +
         C48072) /
            C47987 -
        ((C47943 * (C48077 / C47987 +
                    ((C47943 * C48072 + C49268) * ae) / C47945 + C48098) +
          C49462) *
         be) /
            C47945 +
        2 * (C48072 / C47987 + ((C47943 * C48097 + C36661) * ae) / C47945);
    const double C17775 =
        (C48077 / C47987 + ((C47943 * C48072 + C49268) * ae) / C47945 +
         C48098) /
            C47987 -
        ((C47943 *
              (C48072 / C47987 + ((C47943 * C48097 + C36661) * ae) / C47945) +
          C49453) *
         be) /
            C47945 +
        3 * (C48097 / C47987 + (0 * ae) / C47945);
    const double C20188 =
        C48082 / C47987 - ((C47943 * C48077 + C49261) * be) / C47945 + C48072;
    const double C20190 =
        C48077 / C47987 - ((C47943 * C48072 + C49268) * be) / C47945 + C48098;
    const double C33803 =
        C48082 / C47987 + ((C47943 * C48077 + C49261) * ae) / C47945 + C48072;
    const double C33805 =
        C48077 / C47987 + ((C47943 * C48072 + C49268) * ae) / C47945 + C48098;
    const double C48883 = ae * C48882;
    const double C18454 =
        (5 * C48757 + C48174 * C48882 + (4 * C48746 + C48174 * C48869) * ae) /
        C47945;
    const double C36727 = C36718 + C36695;
    const double C36724 = C36715 + C36686;
    const double C36721 = C36712 + C36677;
    const double C36918 = C36912 + C36892;
    const double C36915 = C36909 + C36883;
    const double C37106 = C37100 + C37080;
    const double C37103 = C37097 + C37071;
    const double C38311 = C38305 + C38289;
    const double C38308 = C38302 + C38282;
    const double C38520 = C38517 + C38510;
    const double C38881 = C38878 + C38865;
    const double C39096 = C39093 + C39080;
    const double C47370 = C47367 + C47356;
    const double C47534 = C47531 + C47521;
    const double C20241 = C20233 + C20216;
    const double C20238 = C20230 + C20207;
    const double C20407 = C20403 + C20386;
    const double C20569 = C20565 + C20548;
    const double C21558 = C21554 + C20395;
    const double C21939 = C21935 + C20806;
    const double C22093 = C22089 + C20944;
    const double C33856 = C33848 + C33831;
    const double C33853 = C33845 + C33822;
    const double C34022 = C34018 + C34001;
    const double C34184 = C34180 + C34163;
    const double C42586 = C42582 + C34010;
    const double C42967 = C42963 + C34421;
    const double C43121 = C43117 + C34559;
    const double C48080 = C48031 - C48076;
    const double C30885 = C30883 * C49161;
    const double C30884 = C30882 * C49161;
    const double C35077 = C30882 * C49391;
    const double C39784 = C30882 * C22559;
    const double C35079 = C35078 * C49223;
    const double C39785 = C35078 * C49223;
    const double C17791 = C17771 * C124;
    const double C17790 = C17771 * C123;
    const double C17781 = C17771 * C122;
    const double C17886 = C17771 * C268;
    const double C17885 = C17771 * C269;
    const double C17984 = C17771 * C400;
    const double C17983 = C17771 * C401;
    const double C18133 = C17771 * C596;
    const double C18223 = C17771 * C698;
    const double C18457 = C17771 * C949;
    const double C17792 = C17773 * C399;
    const double C17789 = C17773 * C400;
    const double C17782 = C17773 * C401;
    const double C17887 = C17773 * C699;
    const double C17884 = C17773 * C698;
    const double C17985 = C17773 * C950;
    const double C17982 = C17773 * C949;
    const double C18134 = C17773 * C1446;
    const double C18224 = C17773 * C2331;
    const double C18458 = C17773 * C2874;
    const double C17793 = C17775 * C951;
    const double C17788 = C17775 * C950;
    const double C17783 = C17775 * C949;
    const double C17888 = C17775 * C2333;
    const double C17883 = C17775 * C2331;
    const double C17986 = C17775 * C2873;
    const double C17981 = C17775 * C2874;
    const double C18135 = C17775 * C2332;
    const double C18225 = C17775 * C3336;
    const double C18459 = C17775 * C3756;
    const double C20224 = C20188 * C125;
    const double C20222 = C20188 * C124;
    const double C20201 = C20188 * C123;
    const double C20196 = C20188 * C122;
    const double C20398 = C20188 * C267;
    const double C20397 = C20188 * C269;
    const double C20392 = C20188 * C268;
    const double C20560 = C20188 * C399;
    const double C20559 = C20188 * C401;
    const double C20554 = C20188 * C400;
    const double C20808 = C20188 * C597;
    const double C20804 = C20188 * C596;
    const double C20946 = C20188 * C699;
    const double C20942 = C20188 * C698;
    const double C21312 = C20188 * C950;
    const double C21308 = C20188 * C949;
    const double C21930 = C20188 * C1258;
    const double C22084 = C20188 * C1446;
    const double C22458 = C20188 * C2331;
    const double C20225 = C20190 * C398;
    const double C20219 = C20190 * C399;
    const double C20204 = C20190 * C400;
    const double C20197 = C20190 * C401;
    const double C20399 = C20190 * C700;
    const double C20396 = C20190 * C698;
    const double C20389 = C20190 * C699;
    const double C20561 = C20190 * C951;
    const double C20558 = C20190 * C949;
    const double C20551 = C20190 * C950;
    const double C20809 = C20190 * C1445;
    const double C20805 = C20190 * C1446;
    const double C20947 = C20190 * C2333;
    const double C20943 = C20190 * C2331;
    const double C21313 = C20190 * C2873;
    const double C21309 = C20190 * C2874;
    const double C21931 = C20190 * C1904;
    const double C22085 = C20190 * C2332;
    const double C22459 = C20190 * C3336;
    const double C33839 = C33803 * C125;
    const double C33837 = C33803 * C124;
    const double C33816 = C33803 * C123;
    const double C33811 = C33803 * C122;
    const double C34013 = C33803 * C267;
    const double C34012 = C33803 * C269;
    const double C34007 = C33803 * C268;
    const double C34175 = C33803 * C399;
    const double C34174 = C33803 * C401;
    const double C34169 = C33803 * C400;
    const double C34423 = C33803 * C597;
    const double C34419 = C33803 * C596;
    const double C34561 = C33803 * C699;
    const double C34557 = C33803 * C698;
    const double C34927 = C33803 * C950;
    const double C34923 = C33803 * C949;
    const double C42958 = C33803 * C1258;
    const double C43112 = C33803 * C1446;
    const double C43486 = C33803 * C2331;
    const double C33840 = C33805 * C398;
    const double C33834 = C33805 * C399;
    const double C33819 = C33805 * C400;
    const double C33812 = C33805 * C401;
    const double C34014 = C33805 * C700;
    const double C34011 = C33805 * C698;
    const double C34004 = C33805 * C699;
    const double C34176 = C33805 * C951;
    const double C34173 = C33805 * C949;
    const double C34166 = C33805 * C950;
    const double C34424 = C33805 * C1445;
    const double C34420 = C33805 * C1446;
    const double C34562 = C33805 * C2333;
    const double C34558 = C33805 * C2331;
    const double C34928 = C33805 * C2873;
    const double C34924 = C33805 * C2874;
    const double C42959 = C33805 * C1904;
    const double C43113 = C33805 * C2332;
    const double C43487 = C33805 * C3336;
    const double C18455 =
        (5 * (3 * C48747 + C48755 + C48755 + C48174 * C48871) + C48883 +
         C48883 +
         C48174 *
             (4 * C48871 + C48880 + C48880 +
              C48174 *
                  (3 * C48863 + C48876 + C48876 +
                   C48174 * (2 * C48855 + C48870 + C48870 +
                             C48174 * (C48217 + C48859 + C48859 +
                                       C48174 * (2 * ae * C48303 +
                                                 C48174 *
                                                     (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                     C48177)))))) /
        C47952;
    const double C18461 = C17779 * C18454;
    const double C20249 = C20241 + C20217;
    const double C20246 = C20238 + C20208;
    const double C20411 = C20407 + C20387;
    const double C20573 = C20569 + C20549;
    const double C21562 = C21558 + C21549;
    const double C21943 = C21939 + C21925;
    const double C22097 = C22093 + C22079;
    const double C33864 = C33856 + C33832;
    const double C33861 = C33853 + C33823;
    const double C34026 = C34022 + C34002;
    const double C34188 = C34184 + C34164;
    const double C42590 = C42586 + C42577;
    const double C42971 = C42967 + C42953;
    const double C43125 = C43121 + C43107;
    const double C48083 = C48080 - C48014;
    const double C35080 = C35077 + C35079;
    const double C39786 = C39784 + C39785;
    const double C36696 = C48083 * C118;
    const double C36681 = C48083 * C117;
    const double C36672 = C48083 * C116;
    const double C36893 = C48083 * C262;
    const double C36884 = C48083 * C261;
    const double C37081 = C48083 * C394;
    const double C37072 = C48083 * C393;
    const double C38290 = C48083 * C592;
    const double C38279 = C48083 * C263;
    const double C38511 = C48083 * C694;
    const double C38866 = C48083 * C591;
    const double C39081 = C48083 * C693;
    const double C47357 = C48083 * C1254;
    const double C47522 = C48083 * C1442;
    const double C17770 =
        (((ae * -2 * C48004) / C48005 -
          (((C47943 * C48027) / C47952 + 2 * C48066) * be) / C47945 -
          C48021 / C47952) /
             C47987 +
         ((C47943 * C48081 + 2 * C48082) * ae) / C47945) /
            C47987 -
        ((C47943 * (C48081 / C47987 +
                    ((C47943 * C48083 + 2 * C48077) * ae) / C47945 + C48071) +
          2 * (C48082 / C47987 + ((C47943 * C48077 + C49261) * ae) / C47945 +
               C48072)) *
         be) /
            C47945 +
        C48083 / C47987 + ((C47943 * C48071 + 2 * C48072) * ae) / C47945 +
        (-2 * C47961) / (C47945 * 4 * C47952);
    const double C17772 =
        (C48081 / C47987 + ((C47943 * C48083 + 2 * C48077) * ae) / C47945 +
         C48071) /
            C47987 -
        ((C47943 * (C48083 / C47987 +
                    ((C47943 * C48071 + 2 * C48072) * ae) / C47945 +
                    (-2 * C47961) / C48095) +
          2 * (C48077 / C47987 + ((C47943 * C48072 + C49268) * ae) / C47945 +
               C48098)) *
         be) /
            C47945 +
        2 * (C48071 / C47987 + ((C48098 - C47969 / C48095) * ae) / C47945);
    const double C17774 =
        (C48083 / C47987 + ((C47943 * C48071 + 2 * C48072) * ae) / C47945 +
         (-2 * C47961) / C48095) /
            C47987 -
        ((C47943 *
              (C48071 / C47987 + ((C48098 - C47969 / C48095) * ae) / C47945) +
          2 * (C48072 / C47987 + ((C47943 * C48097 + C36661) * ae) / C47945)) *
         be) /
            C47945 +
        (-3 * C47961) / (C47945 * 4 * C48005);
    const double C20187 = C48081 / C47987 -
                          ((C47943 * C48083 + 2 * C48077) * be) / C47945 +
                          C48071;
    const double C20189 = C48083 / C47987 -
                          ((C47943 * C48071 + 2 * C48072) * be) / C47945 +
                          (-2 * C47961) / C48095;
    const double C33802 = C48081 / C47987 +
                          ((C47943 * C48083 + 2 * C48077) * ae) / C47945 +
                          C48071;
    const double C33804 = C48083 / C47987 +
                          ((C47943 * C48071 + 2 * C48072) * ae) / C47945 +
                          (-2 * C47961) / C48095;
    const double C36710 = C36696 + C36697;
    const double C36705 = C36681 + C36682;
    const double C36702 = C36672 + C36673;
    const double C36907 = C36893 + C36894;
    const double C36904 = C36884 + C36885;
    const double C37095 = C37081 + C37082;
    const double C37092 = C37072 + C37073;
    const double C38299 = C38290 + C37367;
    const double C38293 = C38279 + C36898;
    const double C38515 = C38511 + C37522;
    const double C38876 = C38866 + C37364;
    const double C39091 = C39081 + C37519;
    const double C47365 = C47357 + C38868;
    const double C47529 = C47522 + C39083;
    const double C20221 = C20187 * C117;
    const double C20200 = C20187 * C116;
    const double C20391 = C20187 * C262;
    const double C20553 = C20187 * C394;
    const double C21544 = C20187 * C263;
    const double C21928 = C20187 * C591;
    const double C22082 = C20187 * C693;
    const double C20218 = C20189 * C393;
    const double C20203 = C20189 * C394;
    const double C20388 = C20189 * C694;
    const double C20550 = C20189 * C945;
    const double C21546 = C20189 * C693;
    const double C21926 = C20189 * C1442;
    const double C22080 = C20189 * C2325;
    const double C33836 = C33802 * C117;
    const double C33815 = C33802 * C116;
    const double C34006 = C33802 * C262;
    const double C34168 = C33802 * C394;
    const double C42572 = C33802 * C263;
    const double C42956 = C33802 * C591;
    const double C43110 = C33802 * C693;
    const double C33833 = C33804 * C393;
    const double C33818 = C33804 * C394;
    const double C34003 = C33804 * C694;
    const double C34165 = C33804 * C945;
    const double C42574 = C33804 * C693;
    const double C42954 = C33804 * C1442;
    const double C43108 = C33804 * C2325;
    const double C36719 = C36710 + C36697;
    const double C36714 = C36705 + C36682;
    const double C36711 = C36702 + C36673;
    const double C36913 = C36907 + C36894;
    const double C36910 = C36904 + C36885;
    const double C37101 = C37095 + C37082;
    const double C37098 = C37092 + C37073;
    const double C38306 = C38299 + C37367;
    const double C38301 = C38293 + C36898;
    const double C38518 = C38515 + C37522;
    const double C38879 = C38876 + C37364;
    const double C39094 = C39091 + C37519;
    const double C47368 = C47365 + C38868;
    const double C47532 = C47529 + C39083;
    const double C20235 = C20221 + C20222;
    const double C20228 = C20200 + C20201;
    const double C20405 = C20391 + C20392;
    const double C20567 = C20553 + C20554;
    const double C21552 = C21544 + C20397;
    const double C21937 = C21928 + C20804;
    const double C22091 = C22082 + C20942;
    const double C20234 = C20218 + C20219;
    const double C20229 = C20203 + C20204;
    const double C20404 = C20388 + C20389;
    const double C20566 = C20550 + C20551;
    const double C21553 = C21546 + C20396;
    const double C21936 = C21926 + C20805;
    const double C22090 = C22080 + C20943;
    const double C33850 = C33836 + C33837;
    const double C33843 = C33815 + C33816;
    const double C34020 = C34006 + C34007;
    const double C34182 = C34168 + C34169;
    const double C42580 = C42572 + C34012;
    const double C42965 = C42956 + C34419;
    const double C43119 = C43110 + C34557;
    const double C33849 = C33833 + C33834;
    const double C33844 = C33818 + C33819;
    const double C34019 = C34003 + C34004;
    const double C34181 = C34165 + C34166;
    const double C42581 = C42574 + C34011;
    const double C42964 = C42954 + C34420;
    const double C43118 = C43108 + C34558;
    const double C36728 = C36719 + C36698;
    const double C36723 = C36714 + C36683;
    const double C36720 = C36711 + C36674;
    const double C36919 = C36913 + C36895;
    const double C36916 = C36910 + C36886;
    const double C37107 = C37101 + C37083;
    const double C37104 = C37098 + C37074;
    const double C38312 = C38306 + C38291;
    const double C38307 = C38301 + C38280;
    const double C38521 = C38518 + C38512;
    const double C38882 = C38879 + C38867;
    const double C39097 = C39094 + C39082;
    const double C47371 = C47368 + C47358;
    const double C47535 = C47532 + C47523;
    const double C20243 = C20235 + C20222;
    const double C20236 = C20228 + C20201;
    const double C20409 = C20405 + C20392;
    const double C20571 = C20567 + C20554;
    const double C21556 = C21552 + C20397;
    const double C21941 = C21937 + C20804;
    const double C22095 = C22091 + C20942;
    const double C20242 = C20234 + C20219;
    const double C20237 = C20229 + C20204;
    const double C20408 = C20404 + C20389;
    const double C20570 = C20566 + C20551;
    const double C21557 = C21553 + C20396;
    const double C21940 = C21936 + C20805;
    const double C22094 = C22090 + C20943;
    const double C33858 = C33850 + C33837;
    const double C33851 = C33843 + C33816;
    const double C34024 = C34020 + C34007;
    const double C34186 = C34182 + C34169;
    const double C42584 = C42580 + C34012;
    const double C42969 = C42965 + C34419;
    const double C43123 = C43119 + C34557;
    const double C33857 = C33849 + C33834;
    const double C33852 = C33844 + C33819;
    const double C34023 = C34019 + C34004;
    const double C34185 = C34181 + C34166;
    const double C42585 = C42581 + C34011;
    const double C42968 = C42964 + C34420;
    const double C43122 = C43118 + C34558;
    const double C36729 = C36723 + C36724;
    const double C38292 = C36918 + C36919;
    const double C38285 = C36919 + C36918;
    const double C47352 = C38882 + C38881;
    const double C20251 = C20243 + C20223;
    const double C20244 = C20236 + C20202;
    const double C20413 = C20409 + C20393;
    const double C20575 = C20571 + C20555;
    const double C21560 = C21556 + C21545;
    const double C21945 = C21941 + C21929;
    const double C22099 = C22095 + C22083;
    const double C20250 = C20242 + C20220;
    const double C20245 = C20237 + C20205;
    const double C20412 = C20408 + C20390;
    const double C20574 = C20570 + C20552;
    const double C21561 = C21557 + C21547;
    const double C21944 = C21940 + C21927;
    const double C22098 = C22094 + C22081;
    const double C33866 = C33858 + C33838;
    const double C33859 = C33851 + C33817;
    const double C34028 = C34024 + C34008;
    const double C34190 = C34186 + C34170;
    const double C42588 = C42584 + C42573;
    const double C42973 = C42969 + C42957;
    const double C43127 = C43123 + C43111;
    const double C33865 = C33857 + C33835;
    const double C33860 = C33852 + C33820;
    const double C34027 = C34023 + C34005;
    const double C34189 = C34185 + C34167;
    const double C42589 = C42585 + C42575;
    const double C42972 = C42968 + C42955;
    const double C43126 = C43122 + C43109;
    const double C36730 = C36729 + C36725;
    const double C38300 = C36917 + C38292;
    const double C38296 = C38285 + C36917;
    const double C47362 = C47352 + C38880;
    const double C36731 = C36730 * C49161;
    d2ee[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49219 +
                   C1289 * C49226 + C1290 * C26395) *
                      C49070 +
                  (C26400 + C26401 + C26402) * C49078 + C26410 * C26398) *
                     C49149 * C49132 * C110 -
                 ((C26406 + C26407 + C26408) * C26398 +
                  (C26405 + C26404 + C26403) * C49078 +
                  (C26402 + C26401 + C26400) * C49070) *
                     C49149 * C49132 * C111 +
                 (C26410 * C49070 + (C26408 + C26407 + C26406) * C49078 +
                  (C167 * C49219 + C300 * C49226 +
                   (C113 * C595 + C611 + C611 + C49178 * C605) * C26395) *
                      C26398) *
                     C49149 * C49132 * C112)) /
               (p * q * std::sqrt(p + q));
    d2ee[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49219 +
             C1289 * C49226 + C1290 * C26395) *
                C49070 +
            (C26400 + C26401 + C26402) * C49078 + C26410 * C26398) *
               C49149 * C255 -
           ((C26557 + C26558 + C26559) * C26398 +
            (C26560 + C26561 + C26562) * C49078 +
            (C1755 * C26395 + C1290 * C49226 + C1289 * C49219) * C49070) *
               C49149 * C49420) *
              C257 +
          (((C26562 + C26561 + C26560) * C49070 +
            (C26559 + C26558 + C26557) * C49078 +
            (C301 * C49219 + C1102 * C49226 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C26395) *
                C26398) *
               C49149 * C49420 -
           ((C26406 + C26407 + C26408) * C26398 +
            (C26405 + C26404 + C26403) * C49078 +
            (C26402 + C26401 + C26400) * C49070) *
               C49149 * C255) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[2] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49219 +
                    C1289 * C49226 + C1290 * C26395) *
                       C49070 +
                   (C26400 + C26401 + C26402) * C49078 + C26410 * C26398) *
                      C389 -
                  ((C26709 + C26710 + C26711) * C26398 +
                   (C26712 + C26713 + C26714) * C49078 +
                   (C1922 * C26395 + C1923 * C49226 +
                    (C113 * C395 + C422 + C422 + C49178 * C407) * C49219) *
                       C49070) *
                      C49422) *
                     C49132 * C257 +
                 (((C26714 + C26713 + C26712) * C49070 +
                   (C26711 + C26710 + C26709) * C49078 +
                   (C433 * C49219 + C4161 * C49226 +
                    (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C26395) *
                       C26398) *
                      C49422 -
                  ((C26406 + C26407 + C26408) * C26398 +
                   (C26405 + C26404 + C26403) * C49078 +
                   (C26402 + C26401 + C26400) * C49070) *
                      C389) *
                     C49132 * C49418)) /
               (p * q * std::sqrt(p + q));
    d2ee[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49219 +
             C1289 * C49226 + C1290 * C26395) *
                C49070 +
            (C26400 + C26401 + C26402) * C49078 + C26410 * C26398) *
               C49149 * C521 -
           ((C26557 + C26558 + C26559) * C26398 +
            (C26560 + C26561 + C26562) * C49078 +
            (C1755 * C26395 + C1290 * C49226 + C1289 * C49219) * C49070) *
               C49149 * C49420) *
              C523 +
          (((C26562 + C26561 + C26560) * C49070 +
            (C26559 + C26558 + C26557) * C49078 +
            (C301 * C49219 + C1102 * C49226 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C26395) *
                C26398) *
               C49149 * C49420 -
           ((C26406 + C26407 + C26408) * C26398 +
            (C26405 + C26404 + C26403) * C49078 +
            (C26402 + C26401 + C26400) * C49070) *
               C49149 * C521) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[4] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49219 +
                   C1289 * C49226 + C1290 * C26395) *
                      C49070 +
                  (C26400 + C26401 + C26402) * C49078 + C26410 * C26398) *
                     C49149 * C587 -
                 ((C26557 + C26558 + C26559) * C26398 +
                  (C26560 + C26561 + C26562) * C49078 +
                  (C1755 * C26395 + C1290 * C49226 + C1289 * C49219) * C49070) *
                     C49149 * C588 +
                 ((C1290 * C49219 + C1755 * C49226 + C9218 * C26395) * C49070 +
                  (C1100 * C49219 + C1292 * C49226 + C9219 * C26395) * C49078 +
                  (C1101 * C49219 + C1291 * C49226 +
                   (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C26395) *
                      C26398) *
                     C49149 * C589) *
                C49098) /
               (p * q * std::sqrt(p + q));
    d2ee[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49219 +
             C1289 * C49226 + C1290 * C26395) *
                C49070 +
            (C26400 + C26401 + C26402) * C49078 + C26410 * C26398) *
               C389 -
           ((C26709 + C26710 + C26711) * C26398 +
            (C26712 + C26713 + C26714) * C49078 +
            (C1922 * C26395 + C1923 * C49226 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49219) *
                C49070) *
               C49422) *
              C521 +
          (((C1923 * C49219 + C1922 * C49226 + C9558 * C26395) * C49070 +
            (C1478 * C49219 + C1477 * C49226 + C11516 * C26395) * C49078 +
            (C1476 * C49219 + C1475 * C49226 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C26395) *
                C26398) *
               C49422 -
           ((C26557 + C26558 + C26559) * C26398 +
            (C26560 + C26561 + C26562) * C49078 +
            (C1755 * C26395 + C1290 * C49226 + C1289 * C49219) * C49070) *
               C389) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49219 +
                    C1289 * C49226 + C1290 * C26395) *
                       C49070 +
                   (C26400 + C26401 + C26402) * C49078 + C26410 * C26398) *
                      C795 -
                  ((C26709 + C26710 + C26711) * C26398 +
                   (C26712 + C26713 + C26714) * C49078 +
                   (C1922 * C26395 + C1923 * C49226 +
                    (C113 * C395 + C422 + C422 + C49178 * C407) * C49219) *
                       C49070) *
                      C49422) *
                     C49132 * C523 +
                 (((C26714 + C26713 + C26712) * C49070 +
                   (C26711 + C26710 + C26709) * C49078 +
                   (C433 * C49219 + C4161 * C49226 +
                    (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C26395) *
                       C26398) *
                      C49422 -
                  ((C26406 + C26407 + C26408) * C26398 +
                   (C26405 + C26404 + C26403) * C49078 +
                   (C26402 + C26401 + C26400) * C49070) *
                      C795) *
                     C49132 * C49418)) /
               (p * q * std::sqrt(p + q));
    d2ee[7] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49219 +
             C1289 * C49226 + C1290 * C26395) *
                C49070 +
            (C26400 + C26401 + C26402) * C49078 + C26410 * C26398) *
               C795 -
           ((C26709 + C26710 + C26711) * C26398 +
            (C26712 + C26713 + C26714) * C49078 +
            (C1922 * C26395 + C1923 * C49226 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49219) *
                C49070) *
               C49422) *
              C255 +
          (((C1923 * C49219 + C1922 * C49226 + C9558 * C26395) * C49070 +
            (C1478 * C49219 + C1477 * C49226 + C11516 * C26395) * C49078 +
            (C1476 * C49219 + C1475 * C49226 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C26395) *
                C26398) *
               C49422 -
           ((C26557 + C26558 + C26559) * C26398 +
            (C26560 + C26561 + C26562) * C49078 +
            (C1755 * C26395 + C1290 * C49226 + C1289 * C49219) * C49070) *
               C795) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49219 +
                   C1289 * C49226 + C1290 * C26395) *
                      C49070 +
                  (C26400 + C26401 + C26402) * C49078 + C26410 * C26398) *
                     C941 -
                 ((C26709 + C26710 + C26711) * C26398 +
                  (C26712 + C26713 + C26714) * C49078 +
                  (C1922 * C26395 + C1923 * C49226 +
                   (C113 * C395 + C422 + C422 + C49178 * C407) * C49219) *
                      C49070) *
                     C942 +
                 (((C113 * C944 + C960 + C960 + C49178 * C954) * C49219 +
                   (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C49226 +
                   (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C26395) *
                      C49070 +
                  ((C113 * C945 + C961 + C961 + C49178 * C955) * C49219 +
                   (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C49226 +
                   (C113 * C2328 + C2347 + C2347 + C49178 * C2340) * C26395) *
                      C49078 +
                  ((C113 * C946 + C962 + C962 + C49178 * C956) * C49219 +
                   (C113 * C2329 + C2348 + C2348 + C49178 * C2341) * C49226 +
                   (C113 * C2330 + C2349 + C2349 + C49178 * C2342) * C26395) *
                      C26398) *
                     C943) *
                C49132 * C49098) /
               (p * q * std::sqrt(p + q));
    d2ee[9] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49219 +
            (C6491 + C6492) * C49226 + C13131 * C26395) *
               C23665 +
           ((C5028 + C5029) * C49219 + C6468 * C49226 + C12575 * C26395) *
               C49075) *
              C49149 * C49132 * C110 -
          (((C6493 + C6494) * C26395 + C6473 * C49226 +
            (C5031 + C5030) * C49219) *
               C49075 +
           (C12580 * C26395 + C6478 * C49226 + (C5029 + C5028) * C49219) *
               C23665) *
              C49149 * C49132 * C111 +
          ((C5036 * C49219 + C6267 * C49226 + (C6494 + C6493) * C26395) *
               C23665 +
           (C5037 * C49219 + (C5205 + C5204) * C49226 +
            (C4979 * C594 + C5614 + C5614 + C49393 * C604 + C4981 * C1443 +
             C5615 + C5615 + C49265 * C1451) *
                C26395) *
               C49075) *
              C49149 * C49132 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[10] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49219 +
             (C6491 + C6492) * C49226 + C13131 * C26395) *
                C23665 +
            ((C5028 + C5029) * C49219 + C6468 * C49226 + C12575 * C26395) *
                C49075) *
               C49149 * C255 -
           (((C12585 + C12586) * C26395 + C12580 * C49226 + C6478 * C49219) *
                C49075 +
            ((C13144 + C13145) * C26395 + (C7065 + C7066) * C49226 +
             (C6492 + C6491) * C49219) *
                C23665) *
               C49149 * C49420) *
              C257 +
          (((C6468 * C49219 + C12575 * C49226 + (C12586 + C12585) * C26395) *
                C23665 +
            (C6267 * C49219 + (C6494 + C6493) * C49226 +
             (C4979 * C1252 + C7059 + C7059 + C49393 * C1260 + C4981 * C1903 +
              C7060 + C7060 + C49265 * C1909) *
                 C26395) *
                C49075) *
               C49149 * C49420 -
           (((C6493 + C6494) * C26395 + C6473 * C49226 +
             (C5031 + C5030) * C49219) *
                C49075 +
            (C12580 * C26395 + C6478 * C49226 + (C5029 + C5028) * C49219) *
                C23665) *
               C49149 * C255) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[11] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49219 +
             (C6491 + C6492) * C49226 + C13131 * C26395) *
                C23665 +
            ((C5028 + C5029) * C49219 + C6468 * C49226 + C12575 * C26395) *
                C49075) *
               C389 -
           (((C12789 + C12790) * C26395 + (C6709 + C6710) * C49226 +
             (C5378 + C5379) * C49219) *
                C49075 +
            ((C13352 + C13353) * C26395 + (C7275 + C7276) * C49226 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C49219) *
                C23665) *
               C49422) *
              C49132 * C257 +
          ((((C5379 + C5378) * C49219 + (C6710 + C6709) * C49226 +
             (C12790 + C12789) * C26395) *
                C23665 +
            ((C5377 + C5376) * C49219 + (C6708 + C6707) * C49226 +
             (C4979 * C1440 + C7269 + C7269 + C49393 * C1448 + C4981 * C2330 +
              C7270 + C7270 + C49265 * C2342) *
                 C26395) *
                C49075) *
               C49422 -
           (((C6493 + C6494) * C26395 + C6473 * C49226 +
             (C5031 + C5030) * C49219) *
                C49075 +
            (C12580 * C26395 + C6478 * C49226 + (C5029 + C5028) * C49219) *
                C23665) *
               C389) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[12] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49219 +
             (C6491 + C6492) * C49226 + C13131 * C26395) *
                C23665 +
            ((C5028 + C5029) * C49219 + C6468 * C49226 + C12575 * C26395) *
                C49075) *
               C49149 * C521 -
           (((C12585 + C12586) * C26395 + C12580 * C49226 + C6478 * C49219) *
                C49075 +
            ((C13144 + C13145) * C26395 + (C7065 + C7066) * C49226 +
             (C6492 + C6491) * C49219) *
                C23665) *
               C49149 * C49420) *
              C523 +
          (((C6468 * C49219 + C12575 * C49226 + (C12586 + C12585) * C26395) *
                C23665 +
            (C6267 * C49219 + (C6494 + C6493) * C49226 +
             (C4979 * C1252 + C7059 + C7059 + C49393 * C1260 + C4981 * C1903 +
              C7060 + C7060 + C49265 * C1909) *
                 C26395) *
                C49075) *
               C49149 * C49420 -
           (((C6493 + C6494) * C26395 + C6473 * C49226 +
             (C5031 + C5030) * C49219) *
                C49075 +
            (C12580 * C26395 + C6478 * C49226 + (C5029 + C5028) * C49219) *
                C23665) *
               C49149 * C521) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[13] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49219 +
            (C6491 + C6492) * C49226 + C13131 * C26395) *
               C23665 +
           ((C5028 + C5029) * C49219 + C6468 * C49226 + C12575 * C26395) *
               C49075) *
              C49149 * C587 -
          (((C12585 + C12586) * C26395 + C12580 * C49226 + C6478 * C49219) *
               C49075 +
           ((C13144 + C13145) * C26395 + (C7065 + C7066) * C49226 +
            (C6492 + C6491) * C49219) *
               C23665) *
              C49149 * C588 +
          ((C13131 * C49219 + C14478 * C49226 + (C14490 + C14489) * C26395) *
               C23665 +
           (C12575 * C49219 + (C12586 + C12585) * C49226 +
            (C4979 * C1739 + C13138 + C13138 + C49393 * C1745 + C4981 * C9302 +
             C13139 + C13139 + C49265 * C9306) *
                C26395) *
               C49075) *
              C49149 * C589) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[14] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49219 +
             (C6491 + C6492) * C49226 + C13131 * C26395) *
                C23665 +
            ((C5028 + C5029) * C49219 + C6468 * C49226 + C12575 * C26395) *
                C49075) *
               C389 -
           (((C12789 + C12790) * C26395 + (C6709 + C6710) * C49226 +
             (C5378 + C5379) * C49219) *
                C49075 +
            ((C13352 + C13353) * C26395 + (C7275 + C7276) * C49226 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C49219) *
                C23665) *
               C49422) *
              C521 +
          ((((C7276 + C7275) * C49219 + (C13353 + C13352) * C49226 +
             (C14632 + C14631) * C26395) *
                C23665 +
            ((C6710 + C6709) * C49219 + (C12790 + C12789) * C49226 +
             (C4979 * C1902 + C13346 + C13346 + C49393 * C1908 +
              C4981 * C10048 + C13347 + C13347 + C49265 * C10050) *
                 C26395) *
                C49075) *
               C49422 -
           (((C12585 + C12586) * C26395 + C12580 * C49226 + C6478 * C49219) *
                C49075 +
            ((C13144 + C13145) * C26395 + (C7065 + C7066) * C49226 +
             (C6492 + C6491) * C49219) *
                C23665) *
               C389) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49219 +
             (C6491 + C6492) * C49226 + C13131 * C26395) *
                C23665 +
            ((C5028 + C5029) * C49219 + C6468 * C49226 + C12575 * C26395) *
                C49075) *
               C795 -
           (((C12789 + C12790) * C26395 + (C6709 + C6710) * C49226 +
             (C5378 + C5379) * C49219) *
                C49075 +
            ((C13352 + C13353) * C26395 + (C7275 + C7276) * C49226 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C49219) *
                C23665) *
               C49422) *
              C49132 * C523 +
          ((((C5379 + C5378) * C49219 + (C6710 + C6709) * C49226 +
             (C12790 + C12789) * C26395) *
                C23665 +
            ((C5377 + C5376) * C49219 + (C6708 + C6707) * C49226 +
             (C4979 * C1440 + C7269 + C7269 + C49393 * C1448 + C4981 * C2330 +
              C7270 + C7270 + C49265 * C2342) *
                 C26395) *
                C49075) *
               C49422 -
           (((C6493 + C6494) * C26395 + C6473 * C49226 +
             (C5031 + C5030) * C49219) *
                C49075 +
            (C12580 * C26395 + C6478 * C49226 + (C5029 + C5028) * C49219) *
                C23665) *
               C795) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49219 +
             (C6491 + C6492) * C49226 + C13131 * C26395) *
                C23665 +
            ((C5028 + C5029) * C49219 + C6468 * C49226 + C12575 * C26395) *
                C49075) *
               C795 -
           (((C12789 + C12790) * C26395 + (C6709 + C6710) * C49226 +
             (C5378 + C5379) * C49219) *
                C49075 +
            ((C13352 + C13353) * C26395 + (C7275 + C7276) * C49226 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C49219) *
                C23665) *
               C49422) *
              C255 +
          ((((C7276 + C7275) * C49219 + (C13353 + C13352) * C49226 +
             (C14632 + C14631) * C26395) *
                C23665 +
            ((C6710 + C6709) * C49219 + (C12790 + C12789) * C49226 +
             (C4979 * C1902 + C13346 + C13346 + C49393 * C1908 +
              C4981 * C10048 + C13347 + C13347 + C49265 * C10050) *
                 C26395) *
                C49075) *
               C49422 -
           (((C12585 + C12586) * C26395 + C12580 * C49226 + C6478 * C49219) *
                C49075 +
            ((C13144 + C13145) * C26395 + (C7065 + C7066) * C49226 +
             (C6492 + C6491) * C49219) *
                C23665) *
               C795) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[17] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49219 +
            (C6491 + C6492) * C49226 + C13131 * C26395) *
               C23665 +
           ((C5028 + C5029) * C49219 + C6468 * C49226 + C12575 * C26395) *
               C49075) *
              C941 -
          (((C12789 + C12790) * C26395 + (C6709 + C6710) * C49226 +
            (C5378 + C5379) * C49219) *
               C49075 +
           ((C13352 + C13353) * C26395 + (C7275 + C7276) * C49226 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C49219) *
               C23665) *
              C942 +
          (((C4979 * C944 + C6112 + C6112 + C49393 * C954 + C4981 * C2870 +
             C6113 + C6113 + C49265 * C2878) *
                C49219 +
            (C4979 * C2325 + C7811 + C7811 + C49393 * C2337 + C4981 * C3333 +
             C7812 + C7812 + C49265 * C3339) *
                C49226 +
            (C4979 * C2326 + C13888 + C13888 + C49393 * C2338 + C4981 * C10248 +
             C13889 + C13889 + C49265 * C10252) *
                C26395) *
               C23665 +
           ((C4979 * C945 + C6114 + C6114 + C49393 * C955 + C4981 * C2869 +
             C6115 + C6115 + C49265 * C2877) *
                C49219 +
            (C4979 * C2327 + C7813 + C7813 + C49393 * C2339 + C4981 * C3334 +
             C7814 + C7814 + C49265 * C3340) *
                C49226 +
            (C4979 * C2328 + C13890 + C13890 + C49393 * C2340 + C4981 * C10249 +
             C13891 + C13891 + C49265 * C10253) *
                C26395) *
               C49075) *
              C943) *
         C49132 * C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[18] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
            C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
               C23665 +
           (C23668 + C23669 + C23670 + C23671) * C49075) *
              C49149 * C49132 * C110 -
          ((C23672 + C23673 + C23674 + C23675) * C49075 +
           (C23671 + C23670 + C23669 + C23668) * C23665) *
              C49149 * C49132 * C111 +
          ((C23675 + C23674 + C23673 + C23672) * C23665 +
           (C166 * C49464 + C301 * C49460 + C1102 * C49450 +
            (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49400) *
               C49075) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
            C1289 * C49223) *
               C49463 +
           (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
              C49149 * C49132 * C110 -
          ((C22572 + C22573) * C49392 + (C22571 + C22570) * C49443 +
           (C22569 + C22568) * C49456 + (C22567 + C22566) * C49463) *
              C49149 * C49132 * C111 +
          (C22574 * C49463 + C22575 * C49456 + (C22573 + C22572) * C49443 +
           (C168 * C22559 +
            (C113 * C264 + C291 + C291 + C49178 * C276) * C49223) *
               C49392) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C22559 +
            (C10094 + C10095 + C10096) * C49223) *
               C23665 +
           ((C2520 + C2521 + C2522) * C22559 +
            (C2722 + C2721 + C2720) * C49223) *
               C49075) *
              C49149 * C49132 * C110 -
          (((C2717 + C2718 + C2719) * C49223 +
            (C2525 + C2524 + C2523) * C22559) *
               C49075 +
           ((C2720 + C2721 + C2722) * C49223 +
            (C2522 + C2521 + C2520) * C22559) *
               C23665) *
              C49149 * C49132 * C111 +
          ((C2530 * C22559 + (C2719 + C2718 + C2717) * C49223) * C23665 +
           ((C2528 + C2527 + C2526) * C22559 +
            (C2462 * C260 + C2702 + C2702 + C49458 * C272 + C2464 * C696 +
             C2703 + C2703 + C49447 * C706 + C2466 * C2677 + C2704 + C2704 +
             C49428 * C2679) *
                C49223) *
               C49075) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[19] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
             C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
                C23665 +
            (C23668 + C23669 + C23670 + C23671) * C49075) *
               C49149 * C255 -
           ((C23806 + C23807 + C23808 + C23809) * C49075 +
            (C9218 * C49400 + C1755 * C49450 + C1290 * C49460 +
             C1289 * C49464) *
                C23665) *
               C49149 * C49420) *
              C257 +
          (((C23809 + C23808 + C23807 + C23806) * C23665 +
            (C302 * C49464 + C1101 * C49460 + C1291 * C49450 +
             (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49400) *
                C49075) *
               C49149 * C49420 -
           ((C23672 + C23673 + C23674 + C23675) * C49075 +
            (C23671 + C23670 + C23669 + C23668) * C23665) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
             C1289 * C49223) *
                C49463 +
            (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
               C49149 * C255 -
           ((C22706 + C22707) * C49392 + (C22708 + C22709) * C49443 +
            (C22710 + C22711) * C49456 +
            (C1290 * C49223 + C1289 * C22559) * C49463) *
               C49149 * C49420) *
              C257 +
          (((C22711 + C22710) * C49463 + (C22709 + C22708) * C49456 +
            (C22707 + C22706) * C49443 +
            (C300 * C22559 +
             (C113 * C595 + C611 + C611 + C49178 * C605) * C49223) *
                C49392) *
               C49149 * C49420 -
           ((C22572 + C22573) * C49392 + (C22571 + C22570) * C49443 +
            (C22569 + C22568) * C49456 + (C22567 + C22566) * C49463) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
              C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
              C49428 * C954) *
                 C22559 +
             (C10094 + C10095 + C10096) * C49223) *
                C23665 +
            ((C2520 + C2521 + C2522) * C22559 + C25002 * C49223) * C49075) *
               C49149 * C255 -
           (((C10102 + C10101 + C10100) * C49223 + C25003 * C22559) * C49075 +
            ((C10099 + C10098 + C10097) * C49223 +
             (C10096 + C10095 + C10094) * C22559) *
                C23665) *
               C49149 * C49420) *
              C257 +
          (((C25002 * C22559 + (C10100 + C10101 + C10102) * C49223) * C23665 +
            ((C2719 + C2718 + C2717) * C22559 +
             (C2462 * C593 + C3185 + C3185 + C49458 * C603 + C2464 * C1440 +
              C3186 + C3186 + C49447 * C1448 + C2466 * C2330 + C3187 + C3187 +
              C49428 * C2342) *
                 C49223) *
                C49075) *
               C49149 * C49420 -
           (((C2717 + C2718 + C2719) * C49223 +
             (C2525 + C2524 + C2523) * C22559) *
                C49075 +
            (C25003 * C49223 + (C2522 + C2521 + C2520) * C22559) * C23665) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[20] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
             C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
                C23665 +
            (C23668 + C23669 + C23670 + C23671) * C49075) *
               C389 -
           ((C23940 + C23941 + C23942 + C23943) * C49075 +
            (C9558 * C49400 + C1922 * C49450 + C1923 * C49460 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49464) *
                C23665) *
               C49422) *
              C49132 * C257 +
          (((C23943 + C23942 + C23941 + C23940) * C23665 +
            (C434 * C49464 + C1476 * C49460 + C1475 * C49450 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49400) *
                C49075) *
               C49422 -
           ((C23672 + C23673 + C23674 + C23675) * C49075 +
            (C23671 + C23670 + C23669 + C23668) * C23665) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
             C1289 * C49223) *
                C49463 +
            (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
               C389 -
           ((C22842 + C22843) * C49392 + (C22844 + C22845) * C49443 +
            (C22846 + C22847) * C49456 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C22559) *
                C49463) *
               C49422) *
              C49132 * C257 +
          (((C22847 + C22846) * C49463 + (C22845 + C22844) * C49456 +
            (C22843 + C22842) * C49443 +
            (C432 * C22559 +
             (C113 * C697 + C713 + C713 + C49178 * C707) * C49223) *
                C49392) *
               C49422 -
           ((C22572 + C22573) * C49392 + (C22571 + C22570) * C49443 +
            (C22569 + C22568) * C49456 + (C22567 + C22566) * C49463) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
              C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
              C49428 * C954) *
                 C22559 +
             (C10094 + C10095 + C10096) * C49223) *
                C23665 +
            ((C2520 + C2521 + C2522) * C22559 + C25002 * C49223) * C49075) *
               C389 -
           (((C25210 + C25211 + C25212) * C49223 +
             (C2920 + C2921 + C2922) * C22559) *
                C49075 +
            ((C10716 + C10717 + C10718) * C49223 +
             (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
              C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
              C49458 * C407) *
                 C22559) *
                C23665) *
               C49422) *
              C49132 * C257 +
          ((((C2922 + C2921 + C2920) * C22559 +
             (C25212 + C25211 + C25210) * C49223) *
                C23665 +
            ((C2919 + C2918 + C2917) * C22559 +
             (C2462 * C695 + C3349 + C3349 + C49458 * C705 + C2464 * C2329 +
              C3350 + C3350 + C49447 * C2341 + C2466 * C3335 + C3351 + C3351 +
              C49428 * C3341) *
                 C49223) *
                C49075) *
               C49422 -
           (((C2717 + C2718 + C2719) * C49223 +
             (C2525 + C2524 + C2523) * C22559) *
                C49075 +
            (C25003 * C49223 + (C2522 + C2521 + C2520) * C22559) * C23665) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[21] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
             C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
                C23665 +
            (C23668 + C23669 + C23670 + C23671) * C49075) *
               C49149 * C521 -
           ((C23806 + C23807 + C23808 + C23809) * C49075 +
            (C9218 * C49400 + C1755 * C49450 + C1290 * C49460 +
             C1289 * C49464) *
                C23665) *
               C49149 * C49420) *
              C523 +
          (((C23809 + C23808 + C23807 + C23806) * C23665 +
            (C302 * C49464 + C1101 * C49460 + C1291 * C49450 +
             (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49400) *
                C49075) *
               C49149 * C49420 -
           ((C23672 + C23673 + C23674 + C23675) * C49075 +
            (C23671 + C23670 + C23669 + C23668) * C23665) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
             C1289 * C49223) *
                C49463 +
            (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
               C49149 * C521 -
           ((C22706 + C22707) * C49392 + (C22708 + C22709) * C49443 +
            (C22710 + C22711) * C49456 +
            (C1290 * C49223 + C1289 * C22559) * C49463) *
               C49149 * C49420) *
              C523 +
          (((C22711 + C22710) * C49463 + (C22709 + C22708) * C49456 +
            (C22707 + C22706) * C49443 +
            (C300 * C22559 +
             (C113 * C595 + C611 + C611 + C49178 * C605) * C49223) *
                C49392) *
               C49149 * C49420 -
           ((C22572 + C22573) * C49392 + (C22571 + C22570) * C49443 +
            (C22569 + C22568) * C49456 + (C22567 + C22566) * C49463) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
              C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
              C49428 * C954) *
                 C22559 +
             (C10094 + C10095 + C10096) * C49223) *
                C23665 +
            ((C2520 + C2521 + C2522) * C22559 + C25002 * C49223) * C49075) *
               C49149 * C521 -
           (((C10102 + C10101 + C10100) * C49223 + C25003 * C22559) * C49075 +
            ((C10099 + C10098 + C10097) * C49223 +
             (C10096 + C10095 + C10094) * C22559) *
                C23665) *
               C49149 * C49420) *
              C523 +
          (((C25002 * C22559 + (C10100 + C10101 + C10102) * C49223) * C23665 +
            ((C2719 + C2718 + C2717) * C22559 +
             (C2462 * C593 + C3185 + C3185 + C49458 * C603 + C2464 * C1440 +
              C3186 + C3186 + C49447 * C1448 + C2466 * C2330 + C3187 + C3187 +
              C49428 * C2342) *
                 C49223) *
                C49075) *
               C49149 * C49420 -
           (((C2717 + C2718 + C2719) * C49223 +
             (C2525 + C2524 + C2523) * C22559) *
                C49075 +
            (C25003 * C49223 + (C2522 + C2521 + C2520) * C22559) * C23665) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[22] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
            C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
               C23665 +
           (C23668 + C23669 + C23670 + C23671) * C49075) *
              C49149 * C587 -
          ((C23806 + C23807 + C23808 + C23809) * C49075 +
           (C9218 * C49400 + C1755 * C49450 + C1290 * C49460 + C1289 * C49464) *
               C23665) *
              C49149 * C588 +
          ((C1290 * C49464 + C1755 * C49460 + C9218 * C49450 + C9462 * C49400) *
               C23665 +
           (C1100 * C49464 + C1292 * C49460 + C9219 * C49450 +
            (C113 * C9202 + C9213 + C9213 + C49178 * C9206) * C49400) *
               C49075) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
            C1289 * C49223) *
               C49463 +
           (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
              C49149 * C587 -
          ((C22706 + C22707) * C49392 + (C22708 + C22709) * C49443 +
           (C22710 + C22711) * C49456 +
           (C1290 * C49223 + C1289 * C22559) * C49463) *
              C49149 * C588 +
          ((C1290 * C22559 + C1755 * C49223) * C49463 +
           (C1100 * C22559 + C1292 * C49223) * C49456 +
           (C1101 * C22559 + C1291 * C49223) * C49443 +
           (C1102 * C22559 +
            (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49223) *
               C49392) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C22559 +
            (C10094 + C10095 + C10096) * C49223) *
               C23665 +
           ((C2520 + C2521 + C2522) * C22559 + C25002 * C49223) * C49075) *
              C49149 * C587 -
          (((C10102 + C10101 + C10100) * C49223 + C25003 * C22559) * C49075 +
           ((C10099 + C10098 + C10097) * C49223 +
            (C10096 + C10095 + C10094) * C22559) *
               C23665) *
              C49149 * C588 +
          ((C10527 * C22559 + (C10536 + C10535 + C10534) * C49223) * C23665 +
           ((C10100 + C10101 + C10102) * C22559 +
            (C2462 * C1253 + C10073 + C10073 + C49458 * C1261 + C2464 * C1902 +
             C10074 + C10074 + C49447 * C1908 + C2466 * C10048 + C10075 +
             C10075 + C49428 * C10050) *
                C49223) *
               C49075) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[23] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
             C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
                C23665 +
            (C23668 + C23669 + C23670 + C23671) * C49075) *
               C389 -
           ((C23940 + C23941 + C23942 + C23943) * C49075 +
            (C9558 * C49400 + C1922 * C49450 + C1923 * C49460 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49464) *
                C23665) *
               C49422) *
              C521 +
          (((C1923 * C49464 + C1922 * C49460 + C9558 * C49450 +
             C9557 * C49400) *
                C23665 +
            (C1478 * C49464 + C1477 * C49460 + C11516 * C49450 +
             (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C49400) *
                C49075) *
               C49422 -
           ((C23806 + C23807 + C23808 + C23809) * C49075 +
            (C9218 * C49400 + C1755 * C49450 + C1290 * C49460 +
             C1289 * C49464) *
                C23665) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
             C1289 * C49223) *
                C49463 +
            (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
               C389 -
           ((C22842 + C22843) * C49392 + (C22844 + C22845) * C49443 +
            (C22846 + C22847) * C49456 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C22559) *
                C49463) *
               C49422) *
              C521 +
          (((C1923 * C22559 + C1922 * C49223) * C49463 +
            (C1478 * C22559 + C1477 * C49223) * C49456 +
            (C1476 * C22559 + C1475 * C49223) * C49443 +
            (C4161 * C22559 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49223) *
                C49392) *
               C49422 -
           ((C22706 + C22707) * C49392 + (C22708 + C22709) * C49443 +
            (C22710 + C22711) * C49456 +
            (C1290 * C49223 + C1289 * C22559) * C49463) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
              C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
              C49428 * C954) *
                 C22559 +
             (C10094 + C10095 + C10096) * C49223) *
                C23665 +
            ((C2520 + C2521 + C2522) * C22559 + C25002 * C49223) * C49075) *
               C389 -
           (((C25210 + C25211 + C25212) * C49223 +
             (C2920 + C2921 + C2922) * C22559) *
                C49075 +
            ((C10716 + C10717 + C10718) * C49223 +
             (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
              C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
              C49458 * C407) *
                 C22559) *
                C23665) *
               C49422) *
              C521 +
          ((((C10718 + C10717 + C10716) * C22559 +
             (C10715 + C10714 + C10713) * C49223) *
                C23665 +
            ((C25212 + C25211 + C25210) * C22559 +
             (C2462 * C1441 + C10258 + C10258 + C49458 * C1449 + C2464 * C2328 +
              C10259 + C10259 + C49447 * C2340 + C2466 * C10249 + C10260 +
              C10260 + C49428 * C10253) *
                 C49223) *
                C49075) *
               C49422 -
           (((C10102 + C10101 + C10100) * C49223 + C25003 * C22559) * C49075 +
            ((C10099 + C10098 + C10097) * C49223 +
             (C10096 + C10095 + C10094) * C22559) *
                C23665) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[24] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
             C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
                C23665 +
            (C23668 + C23669 + C23670 + C23671) * C49075) *
               C795 -
           ((C23940 + C23941 + C23942 + C23943) * C49075 +
            (C9558 * C49400 + C1922 * C49450 + C1923 * C49460 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49464) *
                C23665) *
               C49422) *
              C49132 * C523 +
          (((C23943 + C23942 + C23941 + C23940) * C23665 +
            (C434 * C49464 + C1476 * C49460 + C1475 * C49450 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49400) *
                C49075) *
               C49422 -
           ((C23672 + C23673 + C23674 + C23675) * C49075 +
            (C23671 + C23670 + C23669 + C23668) * C23665) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
             C1289 * C49223) *
                C49463 +
            (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
               C795 -
           ((C22842 + C22843) * C49392 + (C22844 + C22845) * C49443 +
            (C22846 + C22847) * C49456 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C22559) *
                C49463) *
               C49422) *
              C49132 * C523 +
          (((C22847 + C22846) * C49463 + (C22845 + C22844) * C49456 +
            (C22843 + C22842) * C49443 +
            (C432 * C22559 +
             (C113 * C697 + C713 + C713 + C49178 * C707) * C49223) *
                C49392) *
               C49422 -
           ((C22572 + C22573) * C49392 + (C22571 + C22570) * C49443 +
            (C22569 + C22568) * C49456 + (C22567 + C22566) * C49463) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
              C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
              C49428 * C954) *
                 C22559 +
             (C10094 + C10095 + C10096) * C49223) *
                C23665 +
            ((C2520 + C2521 + C2522) * C22559 + C25002 * C49223) * C49075) *
               C795 -
           (((C25210 + C25211 + C25212) * C49223 +
             (C2920 + C2921 + C2922) * C22559) *
                C49075 +
            ((C10716 + C10717 + C10718) * C49223 +
             (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
              C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
              C49458 * C407) *
                 C22559) *
                C23665) *
               C49422) *
              C49132 * C523 +
          ((((C2922 + C2921 + C2920) * C22559 +
             (C25212 + C25211 + C25210) * C49223) *
                C23665 +
            ((C2919 + C2918 + C2917) * C22559 +
             (C2462 * C695 + C3349 + C3349 + C49458 * C705 + C2464 * C2329 +
              C3350 + C3350 + C49447 * C2341 + C2466 * C3335 + C3351 + C3351 +
              C49428 * C3341) *
                 C49223) *
                C49075) *
               C49422 -
           (((C2717 + C2718 + C2719) * C49223 +
             (C2525 + C2524 + C2523) * C22559) *
                C49075 +
            (C25003 * C49223 + (C2522 + C2521 + C2520) * C22559) * C23665) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[25] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
             C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
                C23665 +
            (C23668 + C23669 + C23670 + C23671) * C49075) *
               C795 -
           ((C23940 + C23941 + C23942 + C23943) * C49075 +
            (C9558 * C49400 + C1922 * C49450 + C1923 * C49460 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49464) *
                C23665) *
               C49422) *
              C255 +
          (((C1923 * C49464 + C1922 * C49460 + C9558 * C49450 +
             C9557 * C49400) *
                C23665 +
            (C1478 * C49464 + C1477 * C49460 + C11516 * C49450 +
             (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C49400) *
                C49075) *
               C49422 -
           ((C23806 + C23807 + C23808 + C23809) * C49075 +
            (C9218 * C49400 + C1755 * C49450 + C1290 * C49460 +
             C1289 * C49464) *
                C23665) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
             C1289 * C49223) *
                C49463 +
            (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
               C795 -
           ((C22842 + C22843) * C49392 + (C22844 + C22845) * C49443 +
            (C22846 + C22847) * C49456 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C22559) *
                C49463) *
               C49422) *
              C255 +
          (((C1923 * C22559 + C1922 * C49223) * C49463 +
            (C1478 * C22559 + C1477 * C49223) * C49456 +
            (C1476 * C22559 + C1475 * C49223) * C49443 +
            (C4161 * C22559 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49223) *
                C49392) *
               C49422 -
           ((C22706 + C22707) * C49392 + (C22708 + C22709) * C49443 +
            (C22710 + C22711) * C49456 +
            (C1290 * C49223 + C1289 * C22559) * C49463) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
              C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
              C49428 * C954) *
                 C22559 +
             (C10094 + C10095 + C10096) * C49223) *
                C23665 +
            ((C2520 + C2521 + C2522) * C22559 + C25002 * C49223) * C49075) *
               C795 -
           (((C25210 + C25211 + C25212) * C49223 +
             (C2920 + C2921 + C2922) * C22559) *
                C49075 +
            ((C10716 + C10717 + C10718) * C49223 +
             (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
              C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
              C49458 * C407) *
                 C22559) *
                C23665) *
               C49422) *
              C255 +
          ((((C10718 + C10717 + C10716) * C22559 +
             (C10715 + C10714 + C10713) * C49223) *
                C23665 +
            ((C25212 + C25211 + C25210) * C22559 +
             (C2462 * C1441 + C10258 + C10258 + C49458 * C1449 + C2464 * C2328 +
              C10259 + C10259 + C49447 * C2340 + C2466 * C10249 + C10260 +
              C10260 + C49428 * C10253) *
                 C49223) *
                C49075) *
               C49422 -
           (((C10102 + C10101 + C10100) * C49223 + C25003 * C22559) * C49075 +
            ((C10099 + C10098 + C10097) * C49223 +
             (C10096 + C10095 + C10094) * C22559) *
                C23665) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[26] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
            C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
               C23665 +
           (C23668 + C23669 + C23670 + C23671) * C49075) *
              C941 -
          ((C23940 + C23941 + C23942 + C23943) * C49075 +
           (C9558 * C49400 + C1922 * C49450 + C1923 * C49460 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49464) *
               C23665) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C49464 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C49460 +
            (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C49450 +
            (C113 * C9784 + C9791 + C9791 + C49178 * C9788) * C49400) *
               C23665 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C49464 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C49460 +
            (C113 * C2328 + C2347 + C2347 + C49178 * C2340) * C49450 +
            (C113 * C10048 + C12234 + C12234 + C49178 * C10050) * C49400) *
               C49075) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
            C1289 * C49223) *
               C49463 +
           (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
              C941 -
          ((C22842 + C22843) * C49392 + (C22844 + C22845) * C49443 +
           (C22846 + C22847) * C49456 +
           (C1923 * C49223 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C22559) *
               C49463) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C22559 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C49223) *
               C49463 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C22559 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C49223) *
               C49456 +
           ((C113 * C946 + C962 + C962 + C49178 * C956) * C22559 +
            (C113 * C2329 + C2348 + C2348 + C49178 * C2341) * C49223) *
               C49443 +
           ((C113 * C947 + C963 + C963 + C49178 * C957) * C22559 +
            (C113 * C2677 + C4879 + C4879 + C49178 * C2679) * C49223) *
               C49392) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C22559 +
            (C10094 + C10095 + C10096) * C49223) *
               C23665 +
           ((C2520 + C2521 + C2522) * C22559 + C25002 * C49223) * C49075) *
              C941 -
          (((C25210 + C25211 + C25212) * C49223 +
            (C2920 + C2921 + C2922) * C22559) *
               C49075 +
           ((C10716 + C10717 + C10718) * C49223 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C22559) *
               C23665) *
              C942 +
          (((C2462 * C944 + C3763 + C3763 + C49458 * C954 + C2464 * C2870 +
             C3764 + C3764 + C49447 * C2878 + C2466 * C3753 + C3765 + C3765 +
             C49428 * C3759) *
                C22559 +
            (C2462 * C2325 + C11127 + C11127 + C49458 * C2337 + C2464 * C3333 +
             C11128 + C11128 + C49447 * C3339 + C2466 * C11120 + C11129 +
             C11129 + C49428 * C11124) *
                C49223) *
               C23665 +
           ((C2462 * C945 + C3766 + C3766 + C49458 * C955 + C2464 * C2869 +
             C3767 + C3767 + C49447 * C2877 + C2466 * C3754 + C3768 + C3768 +
             C49428 * C3760) *
                C22559 +
            (C2462 * C2327 + C26281 + C26281 + C49458 * C2339 + C2464 * C3334 +
             C26282 + C26282 + C49447 * C3340 + C2466 * C17877 + C26283 +
             C26283 + C49428 * C17879) *
                C49223) *
               C49075) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[27] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C22559 +
            (C6491 + C6492) * C49223) *
               C49070 +
           ((C5028 + C5029) * C22559 + C6468 * C49223) * C49078 +
           C27667 * C26398) *
              C49149 * C49132 * C110 -
          (((C5204 + C5205) * C49223 + (C5033 + C5032) * C22559) * C26398 +
           (C6473 * C49223 + (C5031 + C5030) * C22559) * C49078 +
           (C6478 * C49223 + (C5029 + C5028) * C22559) * C49070) *
              C49149 * C49132 * C111 +
          (C27667 * C49070 +
           (C5037 * C22559 + (C5205 + C5204) * C49223) * C49078 +
           ((C5035 + C5034) * C22559 +
            (C4979 * C259 + C5190 + C5190 + C49393 * C271 + C4981 * C697 +
             C5191 + C5191 + C49265 * C707) *
                C49223) *
               C26398) *
              C49149 * C49132 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[28] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C22559 +
             (C6491 + C6492) * C49223) *
                C49070 +
            ((C5028 + C5029) * C22559 + C6468 * C49223) * C49078 +
            C27667 * C26398) *
               C49149 * C255 -
           (((C6493 + C6494) * C49223 + C6473 * C22559) * C26398 +
            (C12580 * C49223 + C6478 * C22559) * C49078 +
            ((C7065 + C7066) * C49223 + (C6492 + C6491) * C22559) * C49070) *
               C49149 * C49420) *
              C257 +
          (((C6468 * C22559 + C12575 * C49223) * C49070 +
            (C6267 * C22559 + (C6494 + C6493) * C49223) * C49078 +
            ((C5205 + C5204) * C22559 +
             (C4979 * C594 + C5614 + C5614 + C49393 * C604 + C4981 * C1443 +
              C5615 + C5615 + C49265 * C1451) *
                 C49223) *
                C26398) *
               C49149 * C49420 -
           (((C5204 + C5205) * C49223 + (C5033 + C5032) * C22559) * C26398 +
            (C6473 * C49223 + (C5031 + C5030) * C22559) * C49078 +
            (C6478 * C49223 + (C5029 + C5028) * C22559) * C49070) *
               C49149 * C255) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[29] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C22559 +
             (C6491 + C6492) * C49223) *
                C49070 +
            ((C5028 + C5029) * C22559 + C6468 * C49223) * C49078 +
            C27667 * C26398) *
               C389 -
           (((C6707 + C6708) * C49223 + (C5376 + C5377) * C22559) * C26398 +
            ((C6709 + C6710) * C49223 + (C5378 + C5379) * C22559) * C49078 +
            ((C7275 + C7276) * C49223 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C22559) *
                C49070) *
               C49422) *
              C49132 * C257 +
          ((((C5379 + C5378) * C22559 + (C6710 + C6709) * C49223) * C49070 +
            ((C5377 + C5376) * C22559 + (C6708 + C6707) * C49223) * C49078 +
            ((C5375 + C5374) * C22559 +
             (C4979 * C696 + C5752 + C5752 + C49393 * C706 + C4981 * C2677 +
              C5753 + C5753 + C49265 * C2679) *
                 C49223) *
                C26398) *
               C49422 -
           (((C5204 + C5205) * C49223 + (C5033 + C5032) * C22559) * C26398 +
            (C6473 * C49223 + (C5031 + C5030) * C22559) * C49078 +
            (C6478 * C49223 + (C5029 + C5028) * C22559) * C49070) *
               C389) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[30] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C22559 +
             (C6491 + C6492) * C49223) *
                C49070 +
            ((C5028 + C5029) * C22559 + C6468 * C49223) * C49078 +
            C27667 * C26398) *
               C49149 * C521 -
           (((C6493 + C6494) * C49223 + C6473 * C22559) * C26398 +
            (C12580 * C49223 + C6478 * C22559) * C49078 +
            ((C7065 + C7066) * C49223 + (C6492 + C6491) * C22559) * C49070) *
               C49149 * C49420) *
              C523 +
          (((C6468 * C22559 + C12575 * C49223) * C49070 +
            (C6267 * C22559 + (C6494 + C6493) * C49223) * C49078 +
            ((C5205 + C5204) * C22559 +
             (C4979 * C594 + C5614 + C5614 + C49393 * C604 + C4981 * C1443 +
              C5615 + C5615 + C49265 * C1451) *
                 C49223) *
                C26398) *
               C49149 * C49420 -
           (((C5204 + C5205) * C49223 + (C5033 + C5032) * C22559) * C26398 +
            (C6473 * C49223 + (C5031 + C5030) * C22559) * C49078 +
            (C6478 * C49223 + (C5029 + C5028) * C22559) * C49070) *
               C49149 * C521) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[31] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C22559 +
            (C6491 + C6492) * C49223) *
               C49070 +
           ((C5028 + C5029) * C22559 + C6468 * C49223) * C49078 +
           C27667 * C26398) *
              C49149 * C587 -
          (((C6493 + C6494) * C49223 + C6473 * C22559) * C26398 +
           (C12580 * C49223 + C6478 * C22559) * C49078 +
           ((C7065 + C7066) * C49223 + (C6492 + C6491) * C22559) * C49070) *
              C49149 * C588 +
          ((C13131 * C22559 + C14478 * C49223) * C49070 +
           (C12575 * C22559 + (C12586 + C12585) * C49223) * C49078 +
           ((C6494 + C6493) * C22559 +
            (C4979 * C1252 + C7059 + C7059 + C49393 * C1260 + C4981 * C1903 +
             C7060 + C7060 + C49265 * C1909) *
                C49223) *
               C26398) *
              C49149 * C589) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[32] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C22559 +
             (C6491 + C6492) * C49223) *
                C49070 +
            ((C5028 + C5029) * C22559 + C6468 * C49223) * C49078 +
            C27667 * C26398) *
               C389 -
           (((C6707 + C6708) * C49223 + (C5376 + C5377) * C22559) * C26398 +
            ((C6709 + C6710) * C49223 + (C5378 + C5379) * C22559) * C49078 +
            ((C7275 + C7276) * C49223 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C22559) *
                C49070) *
               C49422) *
              C521 +
          ((((C7276 + C7275) * C22559 + (C13353 + C13352) * C49223) * C49070 +
            ((C6710 + C6709) * C22559 + (C12790 + C12789) * C49223) * C49078 +
            ((C6708 + C6707) * C22559 +
             (C4979 * C1440 + C7269 + C7269 + C49393 * C1448 + C4981 * C2330 +
              C7270 + C7270 + C49265 * C2342) *
                 C49223) *
                C26398) *
               C49422 -
           (((C6493 + C6494) * C49223 + C6473 * C22559) * C26398 +
            (C12580 * C49223 + C6478 * C22559) * C49078 +
            ((C7065 + C7066) * C49223 + (C6492 + C6491) * C22559) * C49070) *
               C389) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[33] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C22559 +
             (C6491 + C6492) * C49223) *
                C49070 +
            ((C5028 + C5029) * C22559 + C6468 * C49223) * C49078 +
            C27667 * C26398) *
               C795 -
           (((C6707 + C6708) * C49223 + (C5376 + C5377) * C22559) * C26398 +
            ((C6709 + C6710) * C49223 + (C5378 + C5379) * C22559) * C49078 +
            ((C7275 + C7276) * C49223 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C22559) *
                C49070) *
               C49422) *
              C49132 * C523 +
          ((((C5379 + C5378) * C22559 + (C6710 + C6709) * C49223) * C49070 +
            ((C5377 + C5376) * C22559 + (C6708 + C6707) * C49223) * C49078 +
            ((C5375 + C5374) * C22559 +
             (C4979 * C696 + C5752 + C5752 + C49393 * C706 + C4981 * C2677 +
              C5753 + C5753 + C49265 * C2679) *
                 C49223) *
                C26398) *
               C49422 -
           (((C5204 + C5205) * C49223 + (C5033 + C5032) * C22559) * C26398 +
            (C6473 * C49223 + (C5031 + C5030) * C22559) * C49078 +
            (C6478 * C49223 + (C5029 + C5028) * C22559) * C49070) *
               C795) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[34] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C22559 +
             (C6491 + C6492) * C49223) *
                C49070 +
            ((C5028 + C5029) * C22559 + C6468 * C49223) * C49078 +
            C27667 * C26398) *
               C795 -
           (((C6707 + C6708) * C49223 + (C5376 + C5377) * C22559) * C26398 +
            ((C6709 + C6710) * C49223 + (C5378 + C5379) * C22559) * C49078 +
            ((C7275 + C7276) * C49223 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C22559) *
                C49070) *
               C49422) *
              C255 +
          ((((C7276 + C7275) * C22559 + (C13353 + C13352) * C49223) * C49070 +
            ((C6710 + C6709) * C22559 + (C12790 + C12789) * C49223) * C49078 +
            ((C6708 + C6707) * C22559 +
             (C4979 * C1440 + C7269 + C7269 + C49393 * C1448 + C4981 * C2330 +
              C7270 + C7270 + C49265 * C2342) *
                 C49223) *
                C26398) *
               C49422 -
           (((C6493 + C6494) * C49223 + C6473 * C22559) * C26398 +
            (C12580 * C49223 + C6478 * C22559) * C49078 +
            ((C7065 + C7066) * C49223 + (C6492 + C6491) * C22559) * C49070) *
               C795) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[35] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C22559 +
            (C6491 + C6492) * C49223) *
               C49070 +
           ((C5028 + C5029) * C22559 + C6468 * C49223) * C49078 +
           C27667 * C26398) *
              C941 -
          (((C6707 + C6708) * C49223 + (C5376 + C5377) * C22559) * C26398 +
           ((C6709 + C6710) * C49223 + (C5378 + C5379) * C22559) * C49078 +
           ((C7275 + C7276) * C49223 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C22559) *
               C49070) *
              C942 +
          (((C4979 * C944 + C6112 + C6112 + C49393 * C954 + C4981 * C2870 +
             C6113 + C6113 + C49265 * C2878) *
                C22559 +
            (C4979 * C2325 + C7811 + C7811 + C49393 * C2337 + C4981 * C3333 +
             C7812 + C7812 + C49265 * C3339) *
                C49223) *
               C49070 +
           ((C4979 * C945 + C6114 + C6114 + C49393 * C955 + C4981 * C2869 +
             C6115 + C6115 + C49265 * C2877) *
                C22559 +
            (C4979 * C2327 + C7813 + C7813 + C49393 * C2339 + C4981 * C3334 +
             C7814 + C7814 + C49265 * C3340) *
                C49223) *
               C49078 +
           ((C4979 * C946 + C6116 + C6116 + C49393 * C956 + C4981 * C2868 +
             C6117 + C6117 + C49265 * C2876) *
                C22559 +
            (C4979 * C2329 + C7815 + C7815 + C49393 * C2341 + C4981 * C3335 +
             C7816 + C7816 + C49265 * C3341) *
                C49223) *
               C26398) *
              C943) *
         C49132 * C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[36] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
            C1289 * C49223) *
               C49463 +
           (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
              C49149 * C49132 * C110 -
          ((C22572 + C22573) * C49392 + (C22571 + C22570) * C49443 +
           (C22569 + C22568) * C49456 + (C22567 + C22566) * C49463) *
              C49149 * C49132 * C111 +
          (C22574 * C49463 + C22575 * C49456 + (C22573 + C22572) * C49443 +
           (C168 * C22559 +
            (C113 * C264 + C291 + C291 + C49178 * C276) * C49223) *
               C49392) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
            C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
               C23665 +
           (C23668 + C23669 + C23670 + C23671) * C49075) *
              C49149 * C49132 * C110 -
          ((C23672 + C23673 + C23674 + C23675) * C49075 +
           (C23671 + C23670 + C23669 + C23668) * C23665) *
              C49149 * C49132 * C111 +
          ((C23675 + C23674 + C23673 + C23672) * C23665 +
           (C166 * C49464 + C301 * C49460 + C1102 * C49450 +
            (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49400) *
               C49075) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[37] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
             C1289 * C49223) *
                C49463 +
            (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
               C49149 * C255 -
           ((C22706 + C22707) * C49392 + (C22708 + C22709) * C49443 +
            (C22710 + C22711) * C49456 +
            (C1290 * C49223 + C1289 * C22559) * C49463) *
               C49149 * C49420) *
              C257 +
          (((C22711 + C22710) * C49463 + (C22709 + C22708) * C49456 +
            (C22707 + C22706) * C49443 +
            (C300 * C22559 +
             (C113 * C595 + C611 + C611 + C49178 * C605) * C49223) *
                C49392) *
               C49149 * C49420 -
           ((C22572 + C22573) * C49392 + (C22571 + C22570) * C49443 +
            (C22569 + C22568) * C49456 + (C22567 + C22566) * C49463) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
             C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
                C23665 +
            (C23668 + C23669 + C23670 + C23671) * C49075) *
               C49149 * C255 -
           ((C23806 + C23807 + C23808 + C23809) * C49075 +
            (C9218 * C49400 + C1755 * C49450 + C1290 * C49460 +
             C1289 * C49464) *
                C23665) *
               C49149 * C49420) *
              C257 +
          (((C23809 + C23808 + C23807 + C23806) * C23665 +
            (C302 * C49464 + C1101 * C49460 + C1291 * C49450 +
             (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49400) *
                C49075) *
               C49149 * C49420 -
           ((C23672 + C23673 + C23674 + C23675) * C49075 +
            (C23671 + C23670 + C23669 + C23668) * C23665) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[38] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
             C1289 * C49223) *
                C49463 +
            (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
               C389 -
           ((C22842 + C22843) * C49392 + (C22844 + C22845) * C49443 +
            (C22846 + C22847) * C49456 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C22559) *
                C49463) *
               C49422) *
              C49132 * C257 +
          (((C22847 + C22846) * C49463 + (C22845 + C22844) * C49456 +
            (C22843 + C22842) * C49443 +
            (C432 * C22559 +
             (C113 * C697 + C713 + C713 + C49178 * C707) * C49223) *
                C49392) *
               C49422 -
           ((C22572 + C22573) * C49392 + (C22571 + C22570) * C49443 +
            (C22569 + C22568) * C49456 + (C22567 + C22566) * C49463) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
             C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
                C23665 +
            (C23668 + C23669 + C23670 + C23671) * C49075) *
               C389 -
           ((C23940 + C23941 + C23942 + C23943) * C49075 +
            (C9558 * C49400 + C1922 * C49450 + C1923 * C49460 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49464) *
                C23665) *
               C49422) *
              C49132 * C257 +
          (((C23943 + C23942 + C23941 + C23940) * C23665 +
            (C434 * C49464 + C1476 * C49460 + C1475 * C49450 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49400) *
                C49075) *
               C49422 -
           ((C23672 + C23673 + C23674 + C23675) * C49075 +
            (C23671 + C23670 + C23669 + C23668) * C23665) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[39] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
             C1289 * C49223) *
                C49463 +
            (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
               C49149 * C521 -
           ((C22706 + C22707) * C49392 + (C22708 + C22709) * C49443 +
            (C22710 + C22711) * C49456 +
            (C1290 * C49223 + C1289 * C22559) * C49463) *
               C49149 * C49420) *
              C523 +
          (((C22711 + C22710) * C49463 + (C22709 + C22708) * C49456 +
            (C22707 + C22706) * C49443 +
            (C300 * C22559 +
             (C113 * C595 + C611 + C611 + C49178 * C605) * C49223) *
                C49392) *
               C49149 * C49420 -
           ((C22572 + C22573) * C49392 + (C22571 + C22570) * C49443 +
            (C22569 + C22568) * C49456 + (C22567 + C22566) * C49463) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
             C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
                C23665 +
            (C23668 + C23669 + C23670 + C23671) * C49075) *
               C49149 * C521 -
           ((C23806 + C23807 + C23808 + C23809) * C49075 +
            (C9218 * C49400 + C1755 * C49450 + C1290 * C49460 +
             C1289 * C49464) *
                C23665) *
               C49149 * C49420) *
              C523 +
          (((C23809 + C23808 + C23807 + C23806) * C23665 +
            (C302 * C49464 + C1101 * C49460 + C1291 * C49450 +
             (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49400) *
                C49075) *
               C49149 * C49420 -
           ((C23672 + C23673 + C23674 + C23675) * C49075 +
            (C23671 + C23670 + C23669 + C23668) * C23665) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[40] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
            C1289 * C49223) *
               C49463 +
           (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
              C49149 * C587 -
          ((C22706 + C22707) * C49392 + (C22708 + C22709) * C49443 +
           (C22710 + C22711) * C49456 +
           (C1290 * C49223 + C1289 * C22559) * C49463) *
              C49149 * C588 +
          ((C1290 * C22559 + C1755 * C49223) * C49463 +
           (C1100 * C22559 + C1292 * C49223) * C49456 +
           (C1101 * C22559 + C1291 * C49223) * C49443 +
           (C1102 * C22559 +
            (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49223) *
               C49392) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
            C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
               C23665 +
           (C23668 + C23669 + C23670 + C23671) * C49075) *
              C49149 * C587 -
          ((C23806 + C23807 + C23808 + C23809) * C49075 +
           (C9218 * C49400 + C1755 * C49450 + C1290 * C49460 + C1289 * C49464) *
               C23665) *
              C49149 * C588 +
          ((C1290 * C49464 + C1755 * C49460 + C9218 * C49450 + C9462 * C49400) *
               C23665 +
           (C1100 * C49464 + C1292 * C49460 + C9219 * C49450 +
            (C113 * C9202 + C9213 + C9213 + C49178 * C9206) * C49400) *
               C49075) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[41] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
             C1289 * C49223) *
                C49463 +
            (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
               C389 -
           ((C22842 + C22843) * C49392 + (C22844 + C22845) * C49443 +
            (C22846 + C22847) * C49456 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C22559) *
                C49463) *
               C49422) *
              C521 +
          (((C1923 * C22559 + C1922 * C49223) * C49463 +
            (C1478 * C22559 + C1477 * C49223) * C49456 +
            (C1476 * C22559 + C1475 * C49223) * C49443 +
            (C4161 * C22559 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49223) *
                C49392) *
               C49422 -
           ((C22706 + C22707) * C49392 + (C22708 + C22709) * C49443 +
            (C22710 + C22711) * C49456 +
            (C1290 * C49223 + C1289 * C22559) * C49463) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
             C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
                C23665 +
            (C23668 + C23669 + C23670 + C23671) * C49075) *
               C389 -
           ((C23940 + C23941 + C23942 + C23943) * C49075 +
            (C9558 * C49400 + C1922 * C49450 + C1923 * C49460 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49464) *
                C23665) *
               C49422) *
              C521 +
          (((C1923 * C49464 + C1922 * C49460 + C9558 * C49450 +
             C9557 * C49400) *
                C23665 +
            (C1478 * C49464 + C1477 * C49460 + C11516 * C49450 +
             (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C49400) *
                C49075) *
               C49422 -
           ((C23806 + C23807 + C23808 + C23809) * C49075 +
            (C9218 * C49400 + C1755 * C49450 + C1290 * C49460 +
             C1289 * C49464) *
                C23665) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[42] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
             C1289 * C49223) *
                C49463 +
            (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
               C795 -
           ((C22842 + C22843) * C49392 + (C22844 + C22845) * C49443 +
            (C22846 + C22847) * C49456 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C22559) *
                C49463) *
               C49422) *
              C49132 * C523 +
          (((C22847 + C22846) * C49463 + (C22845 + C22844) * C49456 +
            (C22843 + C22842) * C49443 +
            (C432 * C22559 +
             (C113 * C697 + C713 + C713 + C49178 * C707) * C49223) *
                C49392) *
               C49422 -
           ((C22572 + C22573) * C49392 + (C22571 + C22570) * C49443 +
            (C22569 + C22568) * C49456 + (C22567 + C22566) * C49463) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
             C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
                C23665 +
            (C23668 + C23669 + C23670 + C23671) * C49075) *
               C795 -
           ((C23940 + C23941 + C23942 + C23943) * C49075 +
            (C9558 * C49400 + C1922 * C49450 + C1923 * C49460 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49464) *
                C23665) *
               C49422) *
              C49132 * C523 +
          (((C23943 + C23942 + C23941 + C23940) * C23665 +
            (C434 * C49464 + C1476 * C49460 + C1475 * C49450 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49400) *
                C49075) *
               C49422 -
           ((C23672 + C23673 + C23674 + C23675) * C49075 +
            (C23671 + C23670 + C23669 + C23668) * C23665) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[43] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
             C1289 * C49223) *
                C49463 +
            (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
               C795 -
           ((C22842 + C22843) * C49392 + (C22844 + C22845) * C49443 +
            (C22846 + C22847) * C49456 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C22559) *
                C49463) *
               C49422) *
              C255 +
          (((C1923 * C22559 + C1922 * C49223) * C49463 +
            (C1478 * C22559 + C1477 * C49223) * C49456 +
            (C1476 * C22559 + C1475 * C49223) * C49443 +
            (C4161 * C22559 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49223) *
                C49392) *
               C49422 -
           ((C22706 + C22707) * C49392 + (C22708 + C22709) * C49443 +
            (C22710 + C22711) * C49456 +
            (C1290 * C49223 + C1289 * C22559) * C49463) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
             C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
                C23665 +
            (C23668 + C23669 + C23670 + C23671) * C49075) *
               C795 -
           ((C23940 + C23941 + C23942 + C23943) * C49075 +
            (C9558 * C49400 + C1922 * C49450 + C1923 * C49460 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49464) *
                C23665) *
               C49422) *
              C255 +
          (((C1923 * C49464 + C1922 * C49460 + C9558 * C49450 +
             C9557 * C49400) *
                C23665 +
            (C1478 * C49464 + C1477 * C49460 + C11516 * C49450 +
             (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C49400) *
                C49075) *
               C49422 -
           ((C23806 + C23807 + C23808 + C23809) * C49075 +
            (C9218 * C49400 + C1755 * C49450 + C1290 * C49460 +
             C1289 * C49464) *
                C23665) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[44] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C22559 +
            C1289 * C49223) *
               C49463 +
           (C22566 + C22567) * C49456 + C22574 * C49443 + C22575 * C49392) *
              C941 -
          ((C22842 + C22843) * C49392 + (C22844 + C22845) * C49443 +
           (C22846 + C22847) * C49456 +
           (C1923 * C49223 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C22559) *
               C49463) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C22559 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C49223) *
               C49463 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C22559 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C49223) *
               C49456 +
           ((C113 * C946 + C962 + C962 + C49178 * C956) * C22559 +
            (C113 * C2329 + C2348 + C2348 + C49178 * C2341) * C49223) *
               C49443 +
           ((C113 * C947 + C963 + C963 + C49178 * C957) * C22559 +
            (C113 * C2677 + C4879 + C4879 + C49178 * C2679) * C49223) *
               C49392) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49464 +
            C1289 * C49460 + C1290 * C49450 + C1755 * C49400) *
               C23665 +
           (C23668 + C23669 + C23670 + C23671) * C49075) *
              C941 -
          ((C23940 + C23941 + C23942 + C23943) * C49075 +
           (C9558 * C49400 + C1922 * C49450 + C1923 * C49460 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49464) *
               C23665) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C49464 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C49460 +
            (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C49450 +
            (C113 * C9784 + C9791 + C9791 + C49178 * C9788) * C49400) *
               C23665 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C49464 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C49460 +
            (C113 * C2328 + C2347 + C2347 + C49178 * C2340) * C49450 +
            (C113 * C10048 + C12234 + C12234 + C49178 * C10050) * C49400) *
               C49075) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[45] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49219 +
            (C32360 + C32361) * C49226 + C32926 * C26395) *
               C49370 +
           ((C30874 + C30875) * C49219 + C32334 * C49226 + C32335 * C26395) *
               C49075) *
              C49149 * C49132 * C110 -
          (((C32130 + C32131) * C26395 + C35275 * C49226 +
            (C30877 + C30876) * C49219) *
               C49075 +
           (C32342 * C26395 + C32343 * C49226 + (C30875 + C30874) * C49219) *
               C49370) *
              C49149 * C49132 * C111 +
          ((C30882 * C49219 + C35078 * C49226 + (C32131 + C32130) * C26395) *
               C49370 +
           (C30883 * C49219 + (C31051 + C31050) * C49226 +
            (C30825 * C594 + C31460 + C31460 + C30823 * C604 + C30827 * C1443 +
             C31461 + C31461 + C49265 * C1451) *
                C26395) *
               C49075) *
              C49149 * C49132 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[46] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49219 +
             (C32360 + C32361) * C49226 + C32926 * C26395) *
                C49370 +
            ((C30874 + C30875) * C49219 + C32334 * C49226 + C32335 * C26395) *
                C49075) *
               C49149 * C255 -
           (((C32364 + C32365) * C26395 + C32342 * C49226 + C32343 * C49219) *
                C49075 +
            ((C32939 + C32940) * C26395 + (C32363 + C32362) * C49226 +
             (C32361 + C32360) * C49219) *
                C49370) *
               C49149 * C49420) *
              C257 +
          (((C32334 * C49219 + C32335 * C49226 + (C32365 + C32364) * C26395) *
                C49370 +
            (C35078 * C49219 + (C32131 + C32130) * C49226 +
             (C30825 * C1252 + C32346 + C32346 + C30823 * C1260 +
              C30827 * C1903 + C32347 + C32347 + C49265 * C1909) *
                 C26395) *
                C49075) *
               C49149 * C49420 -
           (((C32130 + C32131) * C26395 + C35275 * C49226 +
             (C30877 + C30876) * C49219) *
                C49075 +
            (C32342 * C26395 + C32343 * C49226 + (C30875 + C30874) * C49219) *
                C49370) *
               C49149 * C255) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[47] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49219 +
             (C32360 + C32361) * C49226 + C32926 * C26395) *
                C49370 +
            ((C30874 + C30875) * C49219 + C32334 * C49226 + C32335 * C26395) *
                C49075) *
               C389 -
           (((C32582 + C32583) * C26395 + (C32584 + C32585) * C49226 +
             (C31224 + C31225) * C49219) *
                C49075 +
            ((C33155 + C33156) * C26395 + (C33157 + C33158) * C49226 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49219) *
                C49370) *
               C49422) *
              C49132 * C257 +
          ((((C31225 + C31224) * C49219 + (C32585 + C32584) * C49226 +
             (C32583 + C32582) * C26395) *
                C49370 +
            ((C31223 + C31222) * C49219 + (C35479 + C35478) * C49226 +
             (C30825 * C1440 + C32572 + C32572 + C30823 * C1448 +
              C30827 * C2330 + C32573 + C32573 + C49265 * C2342) *
                 C26395) *
                C49075) *
               C49422 -
           (((C32130 + C32131) * C26395 + C35275 * C49226 +
             (C30877 + C30876) * C49219) *
                C49075 +
            (C32342 * C26395 + C32343 * C49226 + (C30875 + C30874) * C49219) *
                C49370) *
               C389) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[48] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49219 +
             (C32360 + C32361) * C49226 + C32926 * C26395) *
                C49370 +
            ((C30874 + C30875) * C49219 + C32334 * C49226 + C32335 * C26395) *
                C49075) *
               C49149 * C521 -
           (((C32364 + C32365) * C26395 + C32342 * C49226 + C32343 * C49219) *
                C49075 +
            ((C32939 + C32940) * C26395 + (C32363 + C32362) * C49226 +
             (C32361 + C32360) * C49219) *
                C49370) *
               C49149 * C49420) *
              C523 +
          (((C32334 * C49219 + C32335 * C49226 + (C32365 + C32364) * C26395) *
                C49370 +
            (C35078 * C49219 + (C32131 + C32130) * C49226 +
             (C30825 * C1252 + C32346 + C32346 + C30823 * C1260 +
              C30827 * C1903 + C32347 + C32347 + C49265 * C1909) *
                 C26395) *
                C49075) *
               C49149 * C49420 -
           (((C32130 + C32131) * C26395 + C35275 * C49226 +
             (C30877 + C30876) * C49219) *
                C49075 +
            (C32342 * C26395 + C32343 * C49226 + (C30875 + C30874) * C49219) *
                C49370) *
               C49149 * C521) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[49] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49219 +
            (C32360 + C32361) * C49226 + C32926 * C26395) *
               C49370 +
           ((C30874 + C30875) * C49219 + C32334 * C49226 + C32335 * C26395) *
               C49075) *
              C49149 * C587 -
          (((C32364 + C32365) * C26395 + C32342 * C49226 + C32343 * C49219) *
               C49075 +
           ((C32939 + C32940) * C26395 + (C32363 + C32362) * C49226 +
            (C32361 + C32360) * C49219) *
               C49370) *
              C49149 * C588 +
          ((C32926 * C49219 + C41829 * C49226 + (C41841 + C41840) * C26395) *
               C49370 +
           (C32335 * C49219 + (C32365 + C32364) * C49226 +
            (C30825 * C1739 + C32933 + C32933 + C30823 * C1745 +
             C30827 * C9302 + C32934 + C32934 + C49265 * C9306) *
                C26395) *
               C49075) *
              C49149 * C589) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[50] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49219 +
             (C32360 + C32361) * C49226 + C32926 * C26395) *
                C49370 +
            ((C30874 + C30875) * C49219 + C32334 * C49226 + C32335 * C26395) *
                C49075) *
               C389 -
           (((C32582 + C32583) * C26395 + (C32584 + C32585) * C49226 +
             (C31224 + C31225) * C49219) *
                C49075 +
            ((C33155 + C33156) * C26395 + (C33157 + C33158) * C49226 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49219) *
                C49370) *
               C49422) *
              C521 +
          ((((C33158 + C33157) * C49219 + (C33156 + C33155) * C49226 +
             (C41983 + C41982) * C26395) *
                C49370 +
            ((C32585 + C32584) * C49219 + (C32583 + C32582) * C49226 +
             (C30825 * C1902 + C33145 + C33145 + C30823 * C1908 +
              C30827 * C10048 + C33146 + C33146 + C49265 * C10050) *
                 C26395) *
                C49075) *
               C49422 -
           (((C32364 + C32365) * C26395 + C32342 * C49226 + C32343 * C49219) *
                C49075 +
            ((C32939 + C32940) * C26395 + (C32363 + C32362) * C49226 +
             (C32361 + C32360) * C49219) *
                C49370) *
               C389) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[51] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49219 +
             (C32360 + C32361) * C49226 + C32926 * C26395) *
                C49370 +
            ((C30874 + C30875) * C49219 + C32334 * C49226 + C32335 * C26395) *
                C49075) *
               C795 -
           (((C32582 + C32583) * C26395 + (C32584 + C32585) * C49226 +
             (C31224 + C31225) * C49219) *
                C49075 +
            ((C33155 + C33156) * C26395 + (C33157 + C33158) * C49226 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49219) *
                C49370) *
               C49422) *
              C49132 * C523 +
          ((((C31225 + C31224) * C49219 + (C32585 + C32584) * C49226 +
             (C32583 + C32582) * C26395) *
                C49370 +
            ((C31223 + C31222) * C49219 + (C35479 + C35478) * C49226 +
             (C30825 * C1440 + C32572 + C32572 + C30823 * C1448 +
              C30827 * C2330 + C32573 + C32573 + C49265 * C2342) *
                 C26395) *
                C49075) *
               C49422 -
           (((C32130 + C32131) * C26395 + C35275 * C49226 +
             (C30877 + C30876) * C49219) *
                C49075 +
            (C32342 * C26395 + C32343 * C49226 + (C30875 + C30874) * C49219) *
                C49370) *
               C795) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[52] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49219 +
             (C32360 + C32361) * C49226 + C32926 * C26395) *
                C49370 +
            ((C30874 + C30875) * C49219 + C32334 * C49226 + C32335 * C26395) *
                C49075) *
               C795 -
           (((C32582 + C32583) * C26395 + (C32584 + C32585) * C49226 +
             (C31224 + C31225) * C49219) *
                C49075 +
            ((C33155 + C33156) * C26395 + (C33157 + C33158) * C49226 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49219) *
                C49370) *
               C49422) *
              C255 +
          ((((C33158 + C33157) * C49219 + (C33156 + C33155) * C49226 +
             (C41983 + C41982) * C26395) *
                C49370 +
            ((C32585 + C32584) * C49219 + (C32583 + C32582) * C49226 +
             (C30825 * C1902 + C33145 + C33145 + C30823 * C1908 +
              C30827 * C10048 + C33146 + C33146 + C49265 * C10050) *
                 C26395) *
                C49075) *
               C49422 -
           (((C32364 + C32365) * C26395 + C32342 * C49226 + C32343 * C49219) *
                C49075 +
            ((C32939 + C32940) * C26395 + (C32363 + C32362) * C49226 +
             (C32361 + C32360) * C49219) *
                C49370) *
               C795) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[53] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49219 +
            (C32360 + C32361) * C49226 + C32926 * C26395) *
               C49370 +
           ((C30874 + C30875) * C49219 + C32334 * C49226 + C32335 * C26395) *
               C49075) *
              C941 -
          (((C32582 + C32583) * C26395 + (C32584 + C32585) * C49226 +
            (C31224 + C31225) * C49219) *
               C49075 +
           ((C33155 + C33156) * C26395 + (C33157 + C33158) * C49226 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49219) *
               C49370) *
              C942 +
          (((C30825 * C944 + C31958 + C31958 + C30823 * C954 + C30827 * C2870 +
             C31959 + C31959 + C49265 * C2878) *
                C49219 +
            (C30825 * C2325 + C33693 + C33693 + C30823 * C2337 +
             C30827 * C3333 + C33694 + C33694 + C49265 * C3339) *
                C49226 +
            (C30825 * C2326 + C33695 + C33695 + C30823 * C2338 +
             C30827 * C10248 + C33696 + C33696 + C49265 * C10252) *
                C26395) *
               C49370 +
           ((C30825 * C945 + C31960 + C31960 + C30823 * C955 + C30827 * C2869 +
             C31961 + C31961 + C49265 * C2877) *
                C49219 +
            (C30825 * C2327 + C33697 + C33697 + C30823 * C2339 +
             C30827 * C3334 + C33698 + C33698 + C49265 * C3340) *
                C49226 +
            (C30825 * C2328 + C33699 + C33699 + C30823 * C2340 +
             C30827 * C10249 + C33700 + C33700 + C49265 * C10253) *
                C26395) *
               C49075) *
              C943) *
         C49132 * C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[54] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((C48083 * C115 + C36669 + C36669 + C49261 * C129 +
                    C48071 * C395 + C36670 + C36670 + C49268 * C407 +
                    C36666 * C944 + C36671 + C36671 + C36661 * C954) *
                       C49219 +
                   (C38307 + C38308 + C38309) * C49226 +
                   (C38882 + C38881 + C38880) * C26395) *
                      C49065 * C49149 * C49132 * C110 -
                  ((C38310 + C38311 + C38312) * C26395 + C38300 * C49226 +
                   (C36722 + C36721 + C36720) * C49219) *
                      C49065 * C49149 * C49132 * C111 +
                  (C36730 * C49219 + (C36916 + C36915 + C36914) * C49226 +
                   (C48083 * C593 + C37370 + C37370 + C49261 * C603 +
                    C48071 * C1440 + C37371 + C37371 + C49268 * C1448 +
                    C36666 * C2330 + C37372 + C37372 + C36661 * C2342) *
                       C26395) *
                      C49065 * C49149 * C49132 * C112)) /
                (p * q * std::sqrt(p + q));
    d2ee[55] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 +
                     C48071 * C395 + C36670 + C36670 + C49268 * C407 +
                     C36666 * C944 + C36671 + C36671 + C36661 * C954) *
                        C49219 +
                    (C38307 + C38308 + C38309) * C49226 +
                    (C38882 + C38881 + C38880) * C26395) *
                       C49065 * C49149 * C255 -
                   ((C36666 * C9784 + C38870 + C38870 + C36661 * C9788 +
                     C48071 * C1901 + C38869 + C38869 + C49268 * C1907 +
                     C48083 * C1254 + C38868 + C38868 + C49261 * C1262) *
                        C26395 +
                    (C38880 + C38881 + C38882) * C49226 +
                    (C38309 + C38308 + C38307) * C49219) *
                       C49065 * C49149 * C49420) *
                      C257 +
                  ((C38296 * C49219 + (C38312 + C38311 + C38310) * C49226 +
                    (C48083 * C1253 + C38871 + C38871 + C49261 * C1261 +
                     C48071 * C1902 + C38872 + C38872 + C49268 * C1908 +
                     C36666 * C10048 + C38873 + C38873 + C36661 * C10050) *
                        C26395) *
                       C49065 * C49149 * C49420 -
                   ((C38310 + C38311 + C38312) * C26395 + C38300 * C49226 +
                    (C36722 + C36721 + C36720) * C49219) *
                       C49065 * C49149 * C255) *
                      C49418)) /
                (p * q * std::sqrt(p + q));
    d2ee[56] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 +
                     C48071 * C395 + C36670 + C36670 + C49268 * C407 +
                     C36666 * C944 + C36671 + C36671 + C36661 * C954) *
                        C49219 +
                    (C38307 + C38308 + C38309) * C49226 +
                    (C38882 + C38881 + C38880) * C26395) *
                       C49065 * C389 -
                   ((C36666 * C10248 + C39085 + C39085 + C36661 * C10252 +
                     C48071 * C2326 + C39084 + C39084 + C49268 * C2338 +
                     C48083 * C1442 + C39083 + C39083 + C49261 * C1450) *
                        C26395 +
                    (C39095 + C39096 + C39097) * C49226 +
                    (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 +
                     C48071 * C944 + C37085 + C37085 + C49268 * C954 +
                     C48083 * C395 + C37086 + C37086 + C49261 * C407) *
                        C49219) *
                       C49065 * C49422) *
                      C49132 * C257 +
                  (((C37107 + C37106 + C37105) * C49219 +
                    (C38521 + C38520 + C38519) * C49226 +
                    (C48083 * C1441 + C39086 + C39086 + C49261 * C1449 +
                     C48071 * C2328 + C39087 + C39087 + C49268 * C2340 +
                     C36666 * C10249 + C39088 + C39088 + C36661 * C10253) *
                        C26395) *
                       C49065 * C49422 -
                   ((C38310 + C38311 + C38312) * C26395 + C38300 * C49226 +
                    (C36722 + C36721 + C36720) * C49219) *
                       C49065 * C389) *
                      C49132 * C49418)) /
                (p * q * std::sqrt(p + q));
    d2ee[57] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 +
                     C48071 * C395 + C36670 + C36670 + C49268 * C407 +
                     C36666 * C944 + C36671 + C36671 + C36661 * C954) *
                        C49219 +
                    (C38307 + C38308 + C38309) * C49226 +
                    (C38882 + C38881 + C38880) * C26395) *
                       C49065 * C49149 * C521 -
                   ((C36666 * C9784 + C38870 + C38870 + C36661 * C9788 +
                     C48071 * C1901 + C38869 + C38869 + C49268 * C1907 +
                     C48083 * C1254 + C38868 + C38868 + C49261 * C1262) *
                        C26395 +
                    (C38880 + C38881 + C38882) * C49226 +
                    (C38309 + C38308 + C38307) * C49219) *
                       C49065 * C49149 * C49420) *
                      C523 +
                  ((C38296 * C49219 + (C38312 + C38311 + C38310) * C49226 +
                    (C48083 * C1253 + C38871 + C38871 + C49261 * C1261 +
                     C48071 * C1902 + C38872 + C38872 + C49268 * C1908 +
                     C36666 * C10048 + C38873 + C38873 + C36661 * C10050) *
                        C26395) *
                       C49065 * C49149 * C49420 -
                   ((C38310 + C38311 + C38312) * C26395 + C38300 * C49226 +
                    (C36722 + C36721 + C36720) * C49219) *
                       C49065 * C49149 * C521) *
                      C49418)) /
                (p * q * std::sqrt(p + q));
    d2ee[58] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((C48083 * C115 + C36669 + C36669 + C49261 * C129 +
                    C48071 * C395 + C36670 + C36670 + C49268 * C407 +
                    C36666 * C944 + C36671 + C36671 + C36661 * C954) *
                       C49219 +
                   (C38307 + C38308 + C38309) * C49226 + C47362 * C26395) *
                      C49065 * C49149 * C587 -
                  ((C47369 + C47370 + C47371) * C26395 +
                   (C38880 + C38881 + C38882) * C49226 +
                   (C38309 + C38308 + C38307) * C49219) *
                      C49065 * C49149 * C588 +
                  (C47362 * C49219 + (C47371 + C47370 + C47369) * C49226 +
                   (C48083 * C1738 + C47359 + C47359 + C49261 * C1744 +
                    C48071 * C9301 + C47360 + C47360 + C49268 * C9305 +
                    C36666 * C9785 + C47361 + C47361 + C36661 * C9789) *
                       C26395) *
                      C49065 * C49149 * C589) *
                 C49098) /
                (p * q * std::sqrt(p + q));
    d2ee[59] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 +
                     C48071 * C395 + C36670 + C36670 + C49268 * C407 +
                     C36666 * C944 + C36671 + C36671 + C36661 * C954) *
                        C49219 +
                    (C38307 + C38308 + C38309) * C49226 + C47362 * C26395) *
                       C49065 * C389 -
                   ((C47533 + C47534 + C47535) * C26395 +
                    (C39095 + C39096 + C39097) * C49226 +
                    (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 +
                     C48071 * C944 + C37085 + C37085 + C49268 * C954 +
                     C48083 * C395 + C37086 + C37086 + C49261 * C407) *
                        C49219) *
                       C49065 * C49422) *
                      C521 +
                  (((C39097 + C39096 + C39095) * C49219 +
                    (C47535 + C47534 + C47533) * C49226 +
                    (C48083 * C1901 + C47524 + C47524 + C49261 * C1907 +
                     C48071 * C9784 + C47525 + C47525 + C49268 * C9788 +
                     C36666 * C10682 + C47526 + C47526 + C36661 * C10684) *
                        C26395) *
                       C49065 * C49422 -
                   ((C47369 + C47370 + C47371) * C26395 +
                    (C38880 + C38881 + C38882) * C49226 +
                    (C38309 + C38308 + C38307) * C49219) *
                       C49065 * C389) *
                      C49420) *
                 C49098) /
                (p * q * std::sqrt(p + q));
    d2ee[60] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 +
                     C48071 * C395 + C36670 + C36670 + C49268 * C407 +
                     C36666 * C944 + C36671 + C36671 + C36661 * C954) *
                        C49219 +
                    (C38307 + C38308 + C38309) * C49226 + C47362 * C26395) *
                       C49065 * C795 -
                   ((C47533 + C47534 + C47535) * C26395 +
                    (C39095 + C39096 + C39097) * C49226 +
                    (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 +
                     C48071 * C944 + C37085 + C37085 + C49268 * C954 +
                     C48083 * C395 + C37086 + C37086 + C49261 * C407) *
                        C49219) *
                       C49065 * C49422) *
                      C49132 * C523 +
                  (((C37107 + C37106 + C37105) * C49219 +
                    (C38521 + C38520 + C38519) * C49226 +
                    (C48083 * C1441 + C39086 + C39086 + C49261 * C1449 +
                     C48071 * C2328 + C39087 + C39087 + C49268 * C2340 +
                     C36666 * C10249 + C39088 + C39088 + C36661 * C10253) *
                        C26395) *
                       C49065 * C49422 -
                   ((C38310 + C38311 + C38312) * C26395 + C38300 * C49226 +
                    (C36722 + C36721 + C36720) * C49219) *
                       C49065 * C795) *
                      C49132 * C49418)) /
                (p * q * std::sqrt(p + q));
    d2ee[61] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 +
                     C48071 * C395 + C36670 + C36670 + C49268 * C407 +
                     C36666 * C944 + C36671 + C36671 + C36661 * C954) *
                        C49219 +
                    (C38307 + C38308 + C38309) * C49226 + C47362 * C26395) *
                       C49065 * C795 -
                   ((C47533 + C47534 + C47535) * C26395 +
                    (C39095 + C39096 + C39097) * C49226 +
                    (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 +
                     C48071 * C944 + C37085 + C37085 + C49268 * C954 +
                     C48083 * C395 + C37086 + C37086 + C49261 * C407) *
                        C49219) *
                       C49065 * C49422) *
                      C255 +
                  (((C39097 + C39096 + C39095) * C49219 +
                    (C47535 + C47534 + C47533) * C49226 +
                    (C48083 * C1901 + C47524 + C47524 + C49261 * C1907 +
                     C48071 * C9784 + C47525 + C47525 + C49268 * C9788 +
                     C36666 * C10682 + C47526 + C47526 + C36661 * C10684) *
                        C26395) *
                       C49065 * C49422 -
                   ((C47369 + C47370 + C47371) * C26395 +
                    (C38880 + C38881 + C38882) * C49226 +
                    (C38309 + C38308 + C38307) * C49219) *
                       C49065 * C795) *
                      C49420) *
                 C49098) /
                (p * q * std::sqrt(p + q));
    d2ee[62] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((C48083 * C115 + C36669 + C36669 + C49261 * C129 +
                    C48071 * C395 + C36670 + C36670 + C49268 * C407 +
                    C36666 * C944 + C36671 + C36671 + C36661 * C954) *
                       C49219 +
                   (C38307 + C38308 + C38309) * C49226 + C47362 * C26395) *
                      C49065 * C941 -
                  ((C47533 + C47534 + C47535) * C26395 +
                   (C39095 + C39096 + C39097) * C49226 +
                   (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 +
                    C48071 * C944 + C37085 + C37085 + C49268 * C954 +
                    C48083 * C395 + C37086 + C37086 + C49261 * C407) *
                       C49219) *
                      C49065 * C942 +
                  ((C48083 * C944 + C37930 + C37930 + C49261 * C954 +
                    C48071 * C2870 + C37931 + C37931 + C49268 * C2878 +
                    C36666 * C3753 + C37932 + C37932 + C36661 * C3759) *
                       C49219 +
                   (C48083 * C2325 + C39632 + C39632 + C49261 * C2337 +
                    C48071 * C3333 + C39633 + C39633 + C49268 * C3339 +
                    C36666 * C11120 + C39634 + C39634 + C36661 * C11124) *
                       C49226 +
                   (C48083 * C2326 + C47938 + C47938 + C49261 * C2338 +
                    C48071 * C10248 + C47939 + C47939 + C49268 * C10252 +
                    C36666 * C11121 + C47940 + C47940 + C36661 * C11125) *
                       C26395) *
                      C49065 * C943) *
                 C49132 * C49098) /
                (p * q * std::sqrt(p + q));
    d2ee[63] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
            C30831 + C30831 + C49265 * C407) *
               C49464 +
           (C32360 + C32361) * C49460 + C32926 * C49450 +
           (C32940 + C32939) * C49400) *
              C49065 * C49149 * C49132 * C110 -
          ((C32364 + C32365) * C49400 + C32342 * C49450 + C32343 * C49460 +
           (C30875 + C30874) * C49464) *
              C49065 * C49149 * C49132 * C111 +
          (C30882 * C49464 + C35078 * C49460 + (C32131 + C32130) * C49450 +
           (C30825 * C1252 + C32346 + C32346 + C30823 * C1260 + C30827 * C1903 +
            C32347 + C32347 + C49265 * C1909) *
               C49400) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C22559 +
            (C32360 + C32361) * C49223) *
               C49454 +
           ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
           C39786 * C49414) *
              C49149 * C49132 * C110 -
          (((C31050 + C31051) * C49223 + (C30879 + C30878) * C22559) * C49414 +
           (C35275 * C49223 + (C30877 + C30876) * C22559) * C49441 +
           (C32343 * C49223 + (C30875 + C30874) * C22559) * C49454) *
              C49149 * C49132 * C111 +
          (C39786 * C49454 +
           (C30883 * C22559 + (C31051 + C31050) * C49223) * C49441 +
           ((C30881 + C30880) * C22559 +
            (C30825 * C259 + C31036 + C31036 + C30823 * C271 + C30827 * C697 +
             C31037 + C31037 + C49265 * C707) *
                C49223) *
               C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
            C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
            C49453 * C954 + C33808 * C2870 + C33814 + C33814 + C49407 * C2878) *
               C22559 +
           (C33802 * C263 + C34012 + C34012 + C49465 * C275 + C33804 * C693 +
            C34011 + C34011 + C49462 * C703 + C33806 * C2325 + C34010 + C34010 +
            C49453 * C2337 + C33808 * C3333 + C34009 + C34009 +
            C49407 * C3339) *
               C49223) *
              C49065 * C49149 * C49132 * C110 -
          ((C34025 + C34026 + C34027 + C34028) * C49223 +
           (C33862 + C33861 + C33860 + C33859) * C22559) *
              C49065 * C49149 * C49132 * C111 +
          ((C33866 + C33865 + C33864 + C33863) * C22559 +
           (C33802 * C261 + C34013 + C34013 + C49465 * C273 + C33804 * C695 +
            C34014 + C34014 + C49462 * C705 + C33806 * C2329 + C34015 + C34015 +
            C49453 * C2341 + C33808 * C3335 + C34016 + C34016 +
            C49407 * C3341) *
               C49223) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[64] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49464 +
            (C32360 + C32361) * C49460 + C32926 * C49450 +
            (C32940 + C32939) * C49400) *
               C49065 * C49149 * C255 -
           ((C30827 * C9301 + C32932 + C32932 + C49265 * C9305 +
             C30825 * C1738 + C32931 + C32931 + C30823 * C1744) *
                C49400 +
            (C32939 + C32940) * C49450 + (C32363 + C32362) * C49460 +
            (C32361 + C32360) * C49464) *
               C49065 * C49149 * C49420) *
              C257 +
          ((C32334 * C49464 + C32335 * C49460 + (C32365 + C32364) * C49450 +
            (C30825 * C1739 + C32933 + C32933 + C30823 * C1745 +
             C30827 * C9302 + C32934 + C32934 + C49265 * C9306) *
                C49400) *
               C49065 * C49149 * C49420 -
           ((C32364 + C32365) * C49400 + C32342 * C49450 + C32343 * C49460 +
            (C30875 + C30874) * C49464) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C22559 +
             (C32360 + C32361) * C49223) *
                C49454 +
            ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
            C39786 * C49414) *
               C49149 * C255 -
           (((C32130 + C32131) * C49223 + C35275 * C22559) * C49414 +
            (C32342 * C49223 + C32343 * C22559) * C49441 +
            ((C32363 + C32362) * C49223 + (C32361 + C32360) * C22559) *
                C49454) *
               C49149 * C49420) *
              C257 +
          (((C32334 * C22559 + C32335 * C49223) * C49454 +
            (C35078 * C22559 + (C32131 + C32130) * C49223) * C49441 +
            ((C31051 + C31050) * C22559 +
             (C30825 * C594 + C31460 + C31460 + C30823 * C604 + C30827 * C1443 +
              C31461 + C31461 + C49265 * C1451) *
                 C49223) *
                C49414) *
               C49149 * C49420 -
           (((C31050 + C31051) * C49223 + (C30879 + C30878) * C22559) * C49414 +
            (C35275 * C49223 + (C30877 + C30876) * C22559) * C49441 +
            (C32343 * C49223 + (C30875 + C30874) * C22559) * C49454) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
             C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
             C49453 * C954 + C33808 * C2870 + C33814 + C33814 +
             C49407 * C2878) *
                C22559 +
            (C42588 + C42589 + C42590 + C42591) * C49223) *
               C49065 * C49149 * C255 -
           ((C33808 * C10248 + C34422 + C34422 + C49407 * C10252 +
             C33806 * C2326 + C34421 + C34421 + C49453 * C2338 +
             C33804 * C1442 + C34420 + C34420 + C49462 * C1450 + C33802 * C591 +
             C34419 + C34419 + C49465 * C601) *
                C49223 +
            (C42591 + C42590 + C42589 + C42588) * C22559) *
               C49065 * C49149 * C49420) *
              C257 +
          (((C34028 + C34027 + C34026 + C34025) * C22559 +
            (C33802 * C592 + C34423 + C34423 + C49465 * C602 + C33804 * C1441 +
             C34424 + C34424 + C49462 * C1449 + C33806 * C2328 + C34425 +
             C34425 + C49453 * C2340 + C33808 * C10249 + C34426 + C34426 +
             C49407 * C10253) *
                C49223) *
               C49065 * C49149 * C49420 -
           ((C34025 + C34026 + C34027 + C34028) * C49223 +
            (C33862 + C33861 + C33860 + C33859) * C22559) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[65] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49464 +
            (C32360 + C32361) * C49460 + C32926 * C49450 +
            (C32940 + C32939) * C49400) *
               C49065 * C389 -
           ((C30827 * C9784 + C33144 + C33144 + C49265 * C9788 +
             C30825 * C1901 + C33143 + C33143 + C30823 * C1907) *
                C49400 +
            (C33155 + C33156) * C49450 + (C33157 + C33158) * C49460 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49464) *
               C49065 * C49422) *
              C49132 * C257 +
          (((C31225 + C31224) * C49464 + (C32585 + C32584) * C49460 +
            (C32583 + C32582) * C49450 +
            (C30825 * C1902 + C33145 + C33145 + C30823 * C1908 +
             C30827 * C10048 + C33146 + C33146 + C49265 * C10050) *
                C49400) *
               C49065 * C49422 -
           ((C32364 + C32365) * C49400 + C32342 * C49450 + C32343 * C49460 +
            (C30875 + C30874) * C49464) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C22559 +
             (C32360 + C32361) * C49223) *
                C49454 +
            ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
            C39786 * C49414) *
               C389 -
           (((C35478 + C35479) * C49223 + (C31222 + C31223) * C22559) * C49414 +
            ((C32584 + C32585) * C49223 + (C31224 + C31225) * C22559) * C49441 +
            ((C33157 + C33158) * C49223 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C22559) *
                C49454) *
               C49422) *
              C49132 * C257 +
          ((((C31225 + C31224) * C22559 + (C32585 + C32584) * C49223) * C49454 +
            ((C31223 + C31222) * C22559 + (C35479 + C35478) * C49223) * C49441 +
            ((C31221 + C31220) * C22559 +
             (C30825 * C696 + C31598 + C31598 + C30823 * C706 + C30827 * C2677 +
              C31599 + C31599 + C49265 * C2679) *
                 C49223) *
                C49414) *
               C49422 -
           (((C31050 + C31051) * C49223 + (C30879 + C30878) * C22559) * C49414 +
            (C35275 * C49223 + (C30877 + C30876) * C22559) * C49441 +
            (C32343 * C49223 + (C30875 + C30874) * C22559) * C49454) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
             C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
             C49453 * C954 + C33808 * C2870 + C33814 + C33814 +
             C49407 * C2878) *
                C22559 +
            (C42588 + C42589 + C42590 + C42591) * C49223) *
               C49065 * C389 -
           ((C33808 * C11120 + C34560 + C34560 + C49407 * C11124 +
             C33806 * C3333 + C34559 + C34559 + C49453 * C3339 +
             C33804 * C2325 + C34558 + C34558 + C49462 * C2337 + C33802 * C693 +
             C34557 + C34557 + C49465 * C703) *
                C49223 +
            (C33808 * C3753 + C34171 + C34171 + C49407 * C3759 +
             C33806 * C2870 + C34172 + C34172 + C49453 * C2878 + C33804 * C944 +
             C34173 + C34173 + C49462 * C954 + C33802 * C395 + C34174 + C34174 +
             C49465 * C407) *
                C22559) *
               C49065 * C49422) *
              C49132 * C257 +
          (((C34190 + C34189 + C34188 + C34187) * C22559 +
            (C33802 * C694 + C34561 + C34561 + C49465 * C704 + C33804 * C2327 +
             C34562 + C34562 + C49462 * C2339 + C33806 * C3334 + C34563 +
             C34563 + C49453 * C3340 + C33808 * C17877 + C34564 + C34564 +
             C49407 * C17879) *
                C49223) *
               C49065 * C49422 -
           ((C34025 + C34026 + C34027 + C34028) * C49223 +
            (C33862 + C33861 + C33860 + C33859) * C22559) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[66] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49464 +
            (C32360 + C32361) * C49460 + C32926 * C49450 +
            (C32940 + C32939) * C49400) *
               C49065 * C49149 * C521 -
           ((C30827 * C9301 + C32932 + C32932 + C49265 * C9305 +
             C30825 * C1738 + C32931 + C32931 + C30823 * C1744) *
                C49400 +
            (C32939 + C32940) * C49450 + (C32363 + C32362) * C49460 +
            (C32361 + C32360) * C49464) *
               C49065 * C49149 * C49420) *
              C523 +
          ((C32334 * C49464 + C32335 * C49460 + (C32365 + C32364) * C49450 +
            (C30825 * C1739 + C32933 + C32933 + C30823 * C1745 +
             C30827 * C9302 + C32934 + C32934 + C49265 * C9306) *
                C49400) *
               C49065 * C49149 * C49420 -
           ((C32364 + C32365) * C49400 + C32342 * C49450 + C32343 * C49460 +
            (C30875 + C30874) * C49464) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C22559 +
             (C32360 + C32361) * C49223) *
                C49454 +
            ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
            C39786 * C49414) *
               C49149 * C521 -
           (((C32130 + C32131) * C49223 + C35275 * C22559) * C49414 +
            (C32342 * C49223 + C32343 * C22559) * C49441 +
            ((C32363 + C32362) * C49223 + (C32361 + C32360) * C22559) *
                C49454) *
               C49149 * C49420) *
              C523 +
          (((C32334 * C22559 + C32335 * C49223) * C49454 +
            (C35078 * C22559 + (C32131 + C32130) * C49223) * C49441 +
            ((C31051 + C31050) * C22559 +
             (C30825 * C594 + C31460 + C31460 + C30823 * C604 + C30827 * C1443 +
              C31461 + C31461 + C49265 * C1451) *
                 C49223) *
                C49414) *
               C49149 * C49420 -
           (((C31050 + C31051) * C49223 + (C30879 + C30878) * C22559) * C49414 +
            (C35275 * C49223 + (C30877 + C30876) * C22559) * C49441 +
            (C32343 * C49223 + (C30875 + C30874) * C22559) * C49454) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
             C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
             C49453 * C954 + C33808 * C2870 + C33814 + C33814 +
             C49407 * C2878) *
                C22559 +
            (C42588 + C42589 + C42590 + C42591) * C49223) *
               C49065 * C49149 * C521 -
           ((C33808 * C10248 + C34422 + C34422 + C49407 * C10252 +
             C33806 * C2326 + C34421 + C34421 + C49453 * C2338 +
             C33804 * C1442 + C34420 + C34420 + C49462 * C1450 + C33802 * C591 +
             C34419 + C34419 + C49465 * C601) *
                C49223 +
            (C42591 + C42590 + C42589 + C42588) * C22559) *
               C49065 * C49149 * C49420) *
              C523 +
          (((C34028 + C34027 + C34026 + C34025) * C22559 +
            (C33802 * C592 + C34423 + C34423 + C49465 * C602 + C33804 * C1441 +
             C34424 + C34424 + C49462 * C1449 + C33806 * C2328 + C34425 +
             C34425 + C49453 * C2340 + C33808 * C10249 + C34426 + C34426 +
             C49407 * C10253) *
                C49223) *
               C49065 * C49149 * C49420 -
           ((C34025 + C34026 + C34027 + C34028) * C49223 +
            (C33862 + C33861 + C33860 + C33859) * C22559) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[67] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
            C30831 + C30831 + C49265 * C407) *
               C49464 +
           (C32360 + C32361) * C49460 + C32926 * C49450 + C41829 * C49400) *
              C49065 * C49149 * C587 -
          ((C41840 + C41841) * C49400 + (C32939 + C32940) * C49450 +
           (C32363 + C32362) * C49460 + (C32361 + C32360) * C49464) *
              C49065 * C49149 * C588 +
          (C32926 * C49464 + C41829 * C49460 + (C41841 + C41840) * C49450 +
           (C30825 * C9201 + C41834 + C41834 + C30823 * C9205 + C30827 * C9544 +
            C41835 + C41835 + C49265 * C9546) *
               C49400) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C22559 +
            (C32360 + C32361) * C49223) *
               C49454 +
           ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
           C39786 * C49414) *
              C49149 * C587 -
          (((C32130 + C32131) * C49223 + C35275 * C22559) * C49414 +
           (C32342 * C49223 + C32343 * C22559) * C49441 +
           ((C32363 + C32362) * C49223 + (C32361 + C32360) * C22559) * C49454) *
              C49149 * C588 +
          ((C32926 * C22559 + (C32940 + C32939) * C49223) * C49454 +
           (C32335 * C22559 + (C32365 + C32364) * C49223) * C49441 +
           ((C32131 + C32130) * C22559 +
            (C30825 * C1252 + C32346 + C32346 + C30823 * C1260 +
             C30827 * C1903 + C32347 + C32347 + C49265 * C1909) *
                C49223) *
               C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
            C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
            C49453 * C954 + C33808 * C2870 + C33814 + C33814 + C49407 * C2878) *
               C22559 +
           (C42588 + C42589 + C42590 + C42591) * C49223) *
              C49065 * C49149 * C587 -
          ((C42970 + C42971 + C42972 + C42973) * C49223 +
           (C42591 + C42590 + C42589 + C42588) * C22559) *
              C49065 * C49149 * C588 +
          ((C42973 + C42972 + C42971 + C42970) * C22559 +
           (C33802 * C1254 + C42958 + C42958 + C49465 * C1262 + C33804 * C1901 +
            C42959 + C42959 + C49462 * C1907 + C33806 * C9784 + C42960 +
            C42960 + C49453 * C9788 + C33808 * C10682 + C42961 + C42961 +
            C49407 * C10684) *
               C49223) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[68] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49464 +
            (C32360 + C32361) * C49460 + C32926 * C49450 + C41829 * C49400) *
               C49065 * C389 -
           ((C41982 + C41983) * C49400 + (C33155 + C33156) * C49450 +
            (C33157 + C33158) * C49460 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49464) *
               C49065 * C49422) *
              C521 +
          (((C33158 + C33157) * C49464 + (C33156 + C33155) * C49460 +
            (C41983 + C41982) * C49450 +
            (C30825 * C9301 + C41976 + C41976 + C30823 * C9305 +
             C30827 * C9785 + C41977 + C41977 + C49265 * C9789) *
                C49400) *
               C49065 * C49422 -
           ((C41840 + C41841) * C49400 + (C32939 + C32940) * C49450 +
            (C32363 + C32362) * C49460 + (C32361 + C32360) * C49464) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C22559 +
             (C32360 + C32361) * C49223) *
                C49454 +
            ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
            C39786 * C49414) *
               C389 -
           (((C35478 + C35479) * C49223 + (C31222 + C31223) * C22559) * C49414 +
            ((C32584 + C32585) * C49223 + (C31224 + C31225) * C22559) * C49441 +
            ((C33157 + C33158) * C49223 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C22559) *
                C49454) *
               C49422) *
              C521 +
          ((((C33158 + C33157) * C22559 + (C33156 + C33155) * C49223) * C49454 +
            ((C32585 + C32584) * C22559 + (C32583 + C32582) * C49223) * C49441 +
            ((C35479 + C35478) * C22559 +
             (C30825 * C1440 + C32572 + C32572 + C30823 * C1448 +
              C30827 * C2330 + C32573 + C32573 + C49265 * C2342) *
                 C49223) *
                C49414) *
               C49422 -
           (((C32130 + C32131) * C49223 + C35275 * C22559) * C49414 +
            (C32342 * C49223 + C32343 * C22559) * C49441 +
            ((C32363 + C32362) * C49223 + (C32361 + C32360) * C22559) *
                C49454) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
             C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
             C49453 * C954 + C33808 * C2870 + C33814 + C33814 +
             C49407 * C2878) *
                C22559 +
            (C42588 + C42589 + C42590 + C42591) * C49223) *
               C49065 * C389 -
           ((C43124 + C43125 + C43126 + C43127) * C49223 +
            (C33808 * C3753 + C34171 + C34171 + C49407 * C3759 +
             C33806 * C2870 + C34172 + C34172 + C49453 * C2878 + C33804 * C944 +
             C34173 + C34173 + C49462 * C954 + C33802 * C395 + C34174 + C34174 +
             C49465 * C407) *
                C22559) *
               C49065 * C49422) *
              C521 +
          (((C43127 + C43126 + C43125 + C43124) * C22559 +
            (C33802 * C1442 + C43112 + C43112 + C49465 * C1450 +
             C33804 * C2326 + C43113 + C43113 + C49462 * C2338 +
             C33806 * C10248 + C43114 + C43114 + C49453 * C10252 +
             C33808 * C11121 + C43115 + C43115 + C49407 * C11125) *
                C49223) *
               C49065 * C49422 -
           ((C42970 + C42971 + C42972 + C42973) * C49223 +
            (C42591 + C42590 + C42589 + C42588) * C22559) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[69] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49464 +
            (C32360 + C32361) * C49460 + C32926 * C49450 + C41829 * C49400) *
               C49065 * C795 -
           ((C41982 + C41983) * C49400 + (C33155 + C33156) * C49450 +
            (C33157 + C33158) * C49460 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49464) *
               C49065 * C49422) *
              C49132 * C523 +
          (((C31225 + C31224) * C49464 + (C32585 + C32584) * C49460 +
            (C32583 + C32582) * C49450 +
            (C30825 * C1902 + C33145 + C33145 + C30823 * C1908 +
             C30827 * C10048 + C33146 + C33146 + C49265 * C10050) *
                C49400) *
               C49065 * C49422 -
           ((C32364 + C32365) * C49400 + C32342 * C49450 + C32343 * C49460 +
            (C30875 + C30874) * C49464) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C22559 +
             (C32360 + C32361) * C49223) *
                C49454 +
            ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
            C39786 * C49414) *
               C795 -
           (((C35478 + C35479) * C49223 + (C31222 + C31223) * C22559) * C49414 +
            ((C32584 + C32585) * C49223 + (C31224 + C31225) * C22559) * C49441 +
            ((C33157 + C33158) * C49223 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C22559) *
                C49454) *
               C49422) *
              C49132 * C523 +
          ((((C31225 + C31224) * C22559 + (C32585 + C32584) * C49223) * C49454 +
            ((C31223 + C31222) * C22559 + (C35479 + C35478) * C49223) * C49441 +
            ((C31221 + C31220) * C22559 +
             (C30825 * C696 + C31598 + C31598 + C30823 * C706 + C30827 * C2677 +
              C31599 + C31599 + C49265 * C2679) *
                 C49223) *
                C49414) *
               C49422 -
           (((C31050 + C31051) * C49223 + (C30879 + C30878) * C22559) * C49414 +
            (C35275 * C49223 + (C30877 + C30876) * C22559) * C49441 +
            (C32343 * C49223 + (C30875 + C30874) * C22559) * C49454) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
             C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
             C49453 * C954 + C33808 * C2870 + C33814 + C33814 +
             C49407 * C2878) *
                C22559 +
            (C42588 + C42589 + C42590 + C42591) * C49223) *
               C49065 * C795 -
           ((C43124 + C43125 + C43126 + C43127) * C49223 +
            (C33808 * C3753 + C34171 + C34171 + C49407 * C3759 +
             C33806 * C2870 + C34172 + C34172 + C49453 * C2878 + C33804 * C944 +
             C34173 + C34173 + C49462 * C954 + C33802 * C395 + C34174 + C34174 +
             C49465 * C407) *
                C22559) *
               C49065 * C49422) *
              C49132 * C523 +
          (((C34190 + C34189 + C34188 + C34187) * C22559 +
            (C33802 * C694 + C34561 + C34561 + C49465 * C704 + C33804 * C2327 +
             C34562 + C34562 + C49462 * C2339 + C33806 * C3334 + C34563 +
             C34563 + C49453 * C3340 + C33808 * C17877 + C34564 + C34564 +
             C49407 * C17879) *
                C49223) *
               C49065 * C49422 -
           ((C34025 + C34026 + C34027 + C34028) * C49223 +
            (C33862 + C33861 + C33860 + C33859) * C22559) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[70] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49464 +
            (C32360 + C32361) * C49460 + C32926 * C49450 + C41829 * C49400) *
               C49065 * C795 -
           ((C41982 + C41983) * C49400 + (C33155 + C33156) * C49450 +
            (C33157 + C33158) * C49460 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49464) *
               C49065 * C49422) *
              C255 +
          (((C33158 + C33157) * C49464 + (C33156 + C33155) * C49460 +
            (C41983 + C41982) * C49450 +
            (C30825 * C9301 + C41976 + C41976 + C30823 * C9305 +
             C30827 * C9785 + C41977 + C41977 + C49265 * C9789) *
                C49400) *
               C49065 * C49422 -
           ((C41840 + C41841) * C49400 + (C32939 + C32940) * C49450 +
            (C32363 + C32362) * C49460 + (C32361 + C32360) * C49464) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C22559 +
             (C32360 + C32361) * C49223) *
                C49454 +
            ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
            C39786 * C49414) *
               C795 -
           (((C35478 + C35479) * C49223 + (C31222 + C31223) * C22559) * C49414 +
            ((C32584 + C32585) * C49223 + (C31224 + C31225) * C22559) * C49441 +
            ((C33157 + C33158) * C49223 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C22559) *
                C49454) *
               C49422) *
              C255 +
          ((((C33158 + C33157) * C22559 + (C33156 + C33155) * C49223) * C49454 +
            ((C32585 + C32584) * C22559 + (C32583 + C32582) * C49223) * C49441 +
            ((C35479 + C35478) * C22559 +
             (C30825 * C1440 + C32572 + C32572 + C30823 * C1448 +
              C30827 * C2330 + C32573 + C32573 + C49265 * C2342) *
                 C49223) *
                C49414) *
               C49422 -
           (((C32130 + C32131) * C49223 + C35275 * C22559) * C49414 +
            (C32342 * C49223 + C32343 * C22559) * C49441 +
            ((C32363 + C32362) * C49223 + (C32361 + C32360) * C22559) *
                C49454) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
             C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
             C49453 * C954 + C33808 * C2870 + C33814 + C33814 +
             C49407 * C2878) *
                C22559 +
            (C42588 + C42589 + C42590 + C42591) * C49223) *
               C49065 * C795 -
           ((C43124 + C43125 + C43126 + C43127) * C49223 +
            (C33808 * C3753 + C34171 + C34171 + C49407 * C3759 +
             C33806 * C2870 + C34172 + C34172 + C49453 * C2878 + C33804 * C944 +
             C34173 + C34173 + C49462 * C954 + C33802 * C395 + C34174 + C34174 +
             C49465 * C407) *
                C22559) *
               C49065 * C49422) *
              C255 +
          (((C43127 + C43126 + C43125 + C43124) * C22559 +
            (C33802 * C1442 + C43112 + C43112 + C49465 * C1450 +
             C33804 * C2326 + C43113 + C43113 + C49462 * C2338 +
             C33806 * C10248 + C43114 + C43114 + C49453 * C10252 +
             C33808 * C11121 + C43115 + C43115 + C49407 * C11125) *
                C49223) *
               C49065 * C49422 -
           ((C42970 + C42971 + C42972 + C42973) * C49223 +
            (C42591 + C42590 + C42589 + C42588) * C22559) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[71] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
            C30831 + C30831 + C49265 * C407) *
               C49464 +
           (C32360 + C32361) * C49460 + C32926 * C49450 + C41829 * C49400) *
              C49065 * C941 -
          ((C41982 + C41983) * C49400 + (C33155 + C33156) * C49450 +
           (C33157 + C33158) * C49460 +
           (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
            C31205 + C31205 + C30823 * C407) *
               C49464) *
              C49065 * C942 +
          ((C30825 * C944 + C31958 + C31958 + C30823 * C954 + C30827 * C2870 +
            C31959 + C31959 + C49265 * C2878) *
               C49464 +
           (C30825 * C2325 + C33693 + C33693 + C30823 * C2337 + C30827 * C3333 +
            C33694 + C33694 + C49265 * C3339) *
               C49460 +
           (C30825 * C2326 + C33695 + C33695 + C30823 * C2338 +
            C30827 * C10248 + C33696 + C33696 + C49265 * C10252) *
               C49450 +
           (C30825 * C9784 + C42342 + C42342 + C30823 * C9788 +
            C30827 * C10682 + C42343 + C42343 + C49265 * C10684) *
               C49400) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C22559 +
            (C32360 + C32361) * C49223) *
               C49454 +
           ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
           C39786 * C49414) *
              C941 -
          (((C35478 + C35479) * C49223 + (C31222 + C31223) * C22559) * C49414 +
           ((C32584 + C32585) * C49223 + (C31224 + C31225) * C22559) * C49441 +
           ((C33157 + C33158) * C49223 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C22559) *
               C49454) *
              C942 +
          (((C30825 * C944 + C31958 + C31958 + C30823 * C954 + C30827 * C2870 +
             C31959 + C31959 + C49265 * C2878) *
                C22559 +
            (C30825 * C2325 + C33693 + C33693 + C30823 * C2337 +
             C30827 * C3333 + C33694 + C33694 + C49265 * C3339) *
                C49223) *
               C49454 +
           ((C30825 * C945 + C31960 + C31960 + C30823 * C955 + C30827 * C2869 +
             C31961 + C31961 + C49265 * C2877) *
                C22559 +
            (C30825 * C2327 + C33697 + C33697 + C30823 * C2339 +
             C30827 * C3334 + C33698 + C33698 + C49265 * C3340) *
                C49223) *
               C49441 +
           ((C30825 * C946 + C31962 + C31962 + C30823 * C956 + C30827 * C2868 +
             C31963 + C31963 + C49265 * C2876) *
                C22559 +
            (C30825 * C2329 + C36548 + C36548 + C30823 * C2341 +
             C30827 * C3335 + C36549 + C36549 + C49265 * C3341) *
                C49223) *
               C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
            C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
            C49453 * C954 + C33808 * C2870 + C33814 + C33814 + C49407 * C2878) *
               C22559 +
           (C42588 + C42589 + C42590 + C42591) * C49223) *
              C49065 * C941 -
          ((C43124 + C43125 + C43126 + C43127) * C49223 +
           (C33808 * C3753 + C34171 + C34171 + C49407 * C3759 + C33806 * C2870 +
            C34172 + C34172 + C49453 * C2878 + C33804 * C944 + C34173 + C34173 +
            C49462 * C954 + C33802 * C395 + C34174 + C34174 + C49465 * C407) *
               C22559) *
              C49065 * C942 +
          ((C33802 * C944 + C34923 + C34923 + C49465 * C954 + C33804 * C2870 +
            C34924 + C34924 + C49462 * C2878 + C33806 * C3753 + C34925 +
            C34925 + C49453 * C3759 + C33808 * C17972 + C34926 + C34926 +
            C49407 * C17976) *
               C22559 +
           (C33802 * C2325 + C43486 + C43486 + C49465 * C2337 + C33804 * C3333 +
            C43487 + C43487 + C49462 * C3339 + C33806 * C11120 + C43488 +
            C43488 + C49453 * C11124 + C33808 * C18219 + C43489 + C43489 +
            C49407 * C18221) *
               C49223) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[72] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
             C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
             C36661 * C954) *
                C22559 +
            (C38307 + C38308 + C38309) * C49223) *
               C49370 +
           ((C36720 + C36721 + C36722) * C22559 + C38296 * C49223) * C49075) *
              C49149 * C49132 * C110 -
          (((C36914 + C36915 + C36916) * C49223 +
            (C36725 + C36724 + C36723) * C22559) *
               C49075 +
           (C38300 * C49223 + (C36722 + C36721 + C36720) * C22559) * C49370) *
              C49149 * C49132 * C111 +
          ((C36730 * C22559 + (C36916 + C36915 + C36914) * C49223) * C49370 +
           ((C36728 + C36727 + C36726) * C22559 +
            (C48083 * C260 + C36899 + C36899 + C49261 * C272 + C48071 * C696 +
             C36900 + C36900 + C49268 * C706 + C36666 * C2677 + C36901 +
             C36901 + C36661 * C2679) *
                C49223) *
               C49075) *
              C49149 * C49132 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[73] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
              C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 +
              C36671 + C36661 * C954) *
                 C22559 +
             (C38307 + C38308 + C38309) * C49223) *
                C49370 +
            ((C36720 + C36721 + C36722) * C22559 + C38296 * C49223) * C49075) *
               C49149 * C255 -
           (((C38310 + C38311 + C38312) * C49223 + C38300 * C22559) * C49075 +
            ((C38880 + C38881 + C38882) * C49223 +
             (C38309 + C38308 + C38307) * C22559) *
                C49370) *
               C49149 * C49420) *
              C257 +
          (((C38296 * C22559 + (C38312 + C38311 + C38310) * C49223) * C49370 +
            ((C36916 + C36915 + C36914) * C22559 +
             (C48083 * C593 + C37370 + C37370 + C49261 * C603 + C48071 * C1440 +
              C37371 + C37371 + C49268 * C1448 + C36666 * C2330 + C37372 +
              C37372 + C36661 * C2342) *
                 C49223) *
                C49075) *
               C49149 * C49420 -
           (((C36914 + C36915 + C36916) * C49223 +
             (C36725 + C36724 + C36723) * C22559) *
                C49075 +
            (C38300 * C49223 + (C36722 + C36721 + C36720) * C22559) * C49370) *
               C49149 * C255) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[74] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
              C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 +
              C36671 + C36661 * C954) *
                 C22559 +
             (C38307 + C38308 + C38309) * C49223) *
                C49370 +
            ((C36720 + C36721 + C36722) * C22559 + C38296 * C49223) * C49075) *
               C389 -
           (((C38519 + C38520 + C38521) * C49223 +
             (C37105 + C37106 + C37107) * C22559) *
                C49075 +
            ((C39095 + C39096 + C39097) * C49223 +
             (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 +
              C48071 * C944 + C37085 + C37085 + C49268 * C954 + C48083 * C395 +
              C37086 + C37086 + C49261 * C407) *
                 C22559) *
                C49370) *
               C49422) *
              C49132 * C257 +
          ((((C37107 + C37106 + C37105) * C22559 +
             (C38521 + C38520 + C38519) * C49223) *
                C49370 +
            ((C37104 + C37103 + C37102) * C22559 +
             (C48083 * C695 + C37525 + C37525 + C49261 * C705 + C48071 * C2329 +
              C37526 + C37526 + C49268 * C2341 + C36666 * C3335 + C37527 +
              C37527 + C36661 * C3341) *
                 C49223) *
                C49075) *
               C49422 -
           (((C36914 + C36915 + C36916) * C49223 +
             (C36725 + C36724 + C36723) * C22559) *
                C49075 +
            (C38300 * C49223 + (C36722 + C36721 + C36720) * C22559) * C49370) *
               C389) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[75] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
              C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 +
              C36671 + C36661 * C954) *
                 C22559 +
             (C38307 + C38308 + C38309) * C49223) *
                C49370 +
            ((C36720 + C36721 + C36722) * C22559 + C38296 * C49223) * C49075) *
               C49149 * C521 -
           (((C38310 + C38311 + C38312) * C49223 + C38300 * C22559) * C49075 +
            ((C38880 + C38881 + C38882) * C49223 +
             (C38309 + C38308 + C38307) * C22559) *
                C49370) *
               C49149 * C49420) *
              C523 +
          (((C38296 * C22559 + (C38312 + C38311 + C38310) * C49223) * C49370 +
            ((C36916 + C36915 + C36914) * C22559 +
             (C48083 * C593 + C37370 + C37370 + C49261 * C603 + C48071 * C1440 +
              C37371 + C37371 + C49268 * C1448 + C36666 * C2330 + C37372 +
              C37372 + C36661 * C2342) *
                 C49223) *
                C49075) *
               C49149 * C49420 -
           (((C36914 + C36915 + C36916) * C49223 +
             (C36725 + C36724 + C36723) * C22559) *
                C49075 +
            (C38300 * C49223 + (C36722 + C36721 + C36720) * C22559) * C49370) *
               C49149 * C521) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[76] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
             C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
             C36661 * C954) *
                C22559 +
            (C38307 + C38308 + C38309) * C49223) *
               C49370 +
           ((C36720 + C36721 + C36722) * C22559 + C38296 * C49223) * C49075) *
              C49149 * C587 -
          (((C38310 + C38311 + C38312) * C49223 + C38300 * C22559) * C49075 +
           ((C38880 + C38881 + C38882) * C49223 +
            (C38309 + C38308 + C38307) * C22559) *
               C49370) *
              C49149 * C588 +
          (((C38882 + C38881 + C38880) * C22559 +
            (C48083 * C1254 + C38868 + C38868 + C49261 * C1262 +
             C48071 * C1901 + C38869 + C38869 + C49268 * C1907 +
             C36666 * C9784 + C38870 + C38870 + C36661 * C9788) *
                C49223) *
               C49370 +
           ((C38312 + C38311 + C38310) * C22559 +
            (C48083 * C1253 + C38871 + C38871 + C49261 * C1261 +
             C48071 * C1902 + C38872 + C38872 + C49268 * C1908 +
             C36666 * C10048 + C38873 + C38873 + C36661 * C10050) *
                C49223) *
               C49075) *
              C49149 * C589) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[77] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
              C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 +
              C36671 + C36661 * C954) *
                 C22559 +
             (C38307 + C38308 + C38309) * C49223) *
                C49370 +
            ((C36720 + C36721 + C36722) * C22559 + C38296 * C49223) * C49075) *
               C389 -
           (((C38519 + C38520 + C38521) * C49223 +
             (C37105 + C37106 + C37107) * C22559) *
                C49075 +
            ((C39095 + C39096 + C39097) * C49223 +
             (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 +
              C48071 * C944 + C37085 + C37085 + C49268 * C954 + C48083 * C395 +
              C37086 + C37086 + C49261 * C407) *
                 C22559) *
                C49370) *
               C49422) *
              C521 +
          ((((C39097 + C39096 + C39095) * C22559 +
             (C48083 * C1442 + C39083 + C39083 + C49261 * C1450 +
              C48071 * C2326 + C39084 + C39084 + C49268 * C2338 +
              C36666 * C10248 + C39085 + C39085 + C36661 * C10252) *
                 C49223) *
                C49370 +
            ((C38521 + C38520 + C38519) * C22559 +
             (C48083 * C1441 + C39086 + C39086 + C49261 * C1449 +
              C48071 * C2328 + C39087 + C39087 + C49268 * C2340 +
              C36666 * C10249 + C39088 + C39088 + C36661 * C10253) *
                 C49223) *
                C49075) *
               C49422 -
           (((C38310 + C38311 + C38312) * C49223 + C38300 * C22559) * C49075 +
            ((C38880 + C38881 + C38882) * C49223 +
             (C38309 + C38308 + C38307) * C22559) *
                C49370) *
               C389) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[78] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
              C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 +
              C36671 + C36661 * C954) *
                 C22559 +
             (C38307 + C38308 + C38309) * C49223) *
                C49370 +
            ((C36720 + C36721 + C36722) * C22559 + C38296 * C49223) * C49075) *
               C795 -
           (((C38519 + C38520 + C38521) * C49223 +
             (C37105 + C37106 + C37107) * C22559) *
                C49075 +
            ((C39095 + C39096 + C39097) * C49223 +
             (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 +
              C48071 * C944 + C37085 + C37085 + C49268 * C954 + C48083 * C395 +
              C37086 + C37086 + C49261 * C407) *
                 C22559) *
                C49370) *
               C49422) *
              C49132 * C523 +
          ((((C37107 + C37106 + C37105) * C22559 +
             (C38521 + C38520 + C38519) * C49223) *
                C49370 +
            ((C37104 + C37103 + C37102) * C22559 +
             (C48083 * C695 + C37525 + C37525 + C49261 * C705 + C48071 * C2329 +
              C37526 + C37526 + C49268 * C2341 + C36666 * C3335 + C37527 +
              C37527 + C36661 * C3341) *
                 C49223) *
                C49075) *
               C49422 -
           (((C36914 + C36915 + C36916) * C49223 +
             (C36725 + C36724 + C36723) * C22559) *
                C49075 +
            (C38300 * C49223 + (C36722 + C36721 + C36720) * C22559) * C49370) *
               C795) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[79] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
              C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 +
              C36671 + C36661 * C954) *
                 C22559 +
             (C38307 + C38308 + C38309) * C49223) *
                C49370 +
            ((C36720 + C36721 + C36722) * C22559 + C38296 * C49223) * C49075) *
               C795 -
           (((C38519 + C38520 + C38521) * C49223 +
             (C37105 + C37106 + C37107) * C22559) *
                C49075 +
            ((C39095 + C39096 + C39097) * C49223 +
             (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 +
              C48071 * C944 + C37085 + C37085 + C49268 * C954 + C48083 * C395 +
              C37086 + C37086 + C49261 * C407) *
                 C22559) *
                C49370) *
               C49422) *
              C255 +
          ((((C39097 + C39096 + C39095) * C22559 +
             (C48083 * C1442 + C39083 + C39083 + C49261 * C1450 +
              C48071 * C2326 + C39084 + C39084 + C49268 * C2338 +
              C36666 * C10248 + C39085 + C39085 + C36661 * C10252) *
                 C49223) *
                C49370 +
            ((C38521 + C38520 + C38519) * C22559 +
             (C48083 * C1441 + C39086 + C39086 + C49261 * C1449 +
              C48071 * C2328 + C39087 + C39087 + C49268 * C2340 +
              C36666 * C10249 + C39088 + C39088 + C36661 * C10253) *
                 C49223) *
                C49075) *
               C49422 -
           (((C38310 + C38311 + C38312) * C49223 + C38300 * C22559) * C49075 +
            ((C38880 + C38881 + C38882) * C49223 +
             (C38309 + C38308 + C38307) * C22559) *
                C49370) *
               C795) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[80] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
             C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
             C36661 * C954) *
                C22559 +
            (C38307 + C38308 + C38309) * C49223) *
               C49370 +
           ((C36720 + C36721 + C36722) * C22559 + C38296 * C49223) * C49075) *
              C941 -
          (((C38519 + C38520 + C38521) * C49223 +
            (C37105 + C37106 + C37107) * C22559) *
               C49075 +
           ((C39095 + C39096 + C39097) * C49223 +
            (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 + C48071 * C944 +
             C37085 + C37085 + C49268 * C954 + C48083 * C395 + C37086 + C37086 +
             C49261 * C407) *
                C22559) *
               C49370) *
              C942 +
          (((C48083 * C944 + C37930 + C37930 + C49261 * C954 + C48071 * C2870 +
             C37931 + C37931 + C49268 * C2878 + C36666 * C3753 + C37932 +
             C37932 + C36661 * C3759) *
                C22559 +
            (C48083 * C2325 + C39632 + C39632 + C49261 * C2337 +
             C48071 * C3333 + C39633 + C39633 + C49268 * C3339 +
             C36666 * C11120 + C39634 + C39634 + C36661 * C11124) *
                C49223) *
               C49370 +
           ((C48083 * C945 + C37933 + C37933 + C49261 * C955 + C48071 * C2869 +
             C37934 + C37934 + C49268 * C2877 + C36666 * C3754 + C37935 +
             C37935 + C36661 * C3760) *
                C22559 +
            (C48083 * C2327 + C39635 + C39635 + C49261 * C2339 +
             C48071 * C3334 + C39636 + C39636 + C49268 * C3340 +
             C36666 * C17877 + C39637 + C39637 + C36661 * C17879) *
                C49223) *
               C49075) *
              C943) *
         C49132 * C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[81] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C22559 +
            (C32360 + C32361) * C49223) *
               C49454 +
           ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
           C39786 * C49414) *
              C49149 * C49132 * C110 -
          (((C31050 + C31051) * C49223 + (C30879 + C30878) * C22559) * C49414 +
           (C35275 * C49223 + (C30877 + C30876) * C22559) * C49441 +
           (C32343 * C49223 + (C30875 + C30874) * C22559) * C49454) *
              C49149 * C49132 * C111 +
          (C39786 * C49454 +
           (C30883 * C22559 + (C31051 + C31050) * C49223) * C49441 +
           ((C30881 + C30880) * C22559 +
            (C30825 * C259 + C31036 + C31036 + C30823 * C271 + C30827 * C697 +
             C31037 + C31037 + C49265 * C707) *
                C49223) *
               C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
            C30831 + C30831 + C49265 * C407) *
               C49464 +
           (C32360 + C32361) * C49460 + C32926 * C49450 +
           (C32940 + C32939) * C49400) *
              C49065 * C49149 * C49132 * C110 -
          ((C32364 + C32365) * C49400 + C32342 * C49450 + C32343 * C49460 +
           (C30875 + C30874) * C49464) *
              C49065 * C49149 * C49132 * C111 +
          (C30882 * C49464 + C35078 * C49460 + (C32131 + C32130) * C49450 +
           (C30825 * C1252 + C32346 + C32346 + C30823 * C1260 + C30827 * C1903 +
            C32347 + C32347 + C49265 * C1909) *
               C49400) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[82] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C22559 +
             (C32360 + C32361) * C49223) *
                C49454 +
            ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
            C39786 * C49414) *
               C49149 * C255 -
           (((C32130 + C32131) * C49223 + C35275 * C22559) * C49414 +
            (C32342 * C49223 + C32343 * C22559) * C49441 +
            ((C32363 + C32362) * C49223 + (C32361 + C32360) * C22559) *
                C49454) *
               C49149 * C49420) *
              C257 +
          (((C32334 * C22559 + C32335 * C49223) * C49454 +
            (C35078 * C22559 + (C32131 + C32130) * C49223) * C49441 +
            ((C31051 + C31050) * C22559 +
             (C30825 * C594 + C31460 + C31460 + C30823 * C604 + C30827 * C1443 +
              C31461 + C31461 + C49265 * C1451) *
                 C49223) *
                C49414) *
               C49149 * C49420 -
           (((C31050 + C31051) * C49223 + (C30879 + C30878) * C22559) * C49414 +
            (C35275 * C49223 + (C30877 + C30876) * C22559) * C49441 +
            (C32343 * C49223 + (C30875 + C30874) * C22559) * C49454) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49464 +
            (C32360 + C32361) * C49460 + C32926 * C49450 +
            (C32940 + C32939) * C49400) *
               C49065 * C49149 * C255 -
           ((C30827 * C9301 + C32932 + C32932 + C49265 * C9305 +
             C30825 * C1738 + C32931 + C32931 + C30823 * C1744) *
                C49400 +
            (C32939 + C32940) * C49450 + (C32363 + C32362) * C49460 +
            (C32361 + C32360) * C49464) *
               C49065 * C49149 * C49420) *
              C257 +
          ((C32334 * C49464 + C32335 * C49460 + (C32365 + C32364) * C49450 +
            (C30825 * C1739 + C32933 + C32933 + C30823 * C1745 +
             C30827 * C9302 + C32934 + C32934 + C49265 * C9306) *
                C49400) *
               C49065 * C49149 * C49420 -
           ((C32364 + C32365) * C49400 + C32342 * C49450 + C32343 * C49460 +
            (C30875 + C30874) * C49464) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[83] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C22559 +
             (C32360 + C32361) * C49223) *
                C49454 +
            ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
            C39786 * C49414) *
               C389 -
           (((C35478 + C35479) * C49223 + (C31222 + C31223) * C22559) * C49414 +
            ((C32584 + C32585) * C49223 + (C31224 + C31225) * C22559) * C49441 +
            ((C33157 + C33158) * C49223 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C22559) *
                C49454) *
               C49422) *
              C49132 * C257 +
          ((((C31225 + C31224) * C22559 + (C32585 + C32584) * C49223) * C49454 +
            ((C31223 + C31222) * C22559 + (C35479 + C35478) * C49223) * C49441 +
            ((C31221 + C31220) * C22559 +
             (C30825 * C696 + C31598 + C31598 + C30823 * C706 + C30827 * C2677 +
              C31599 + C31599 + C49265 * C2679) *
                 C49223) *
                C49414) *
               C49422 -
           (((C31050 + C31051) * C49223 + (C30879 + C30878) * C22559) * C49414 +
            (C35275 * C49223 + (C30877 + C30876) * C22559) * C49441 +
            (C32343 * C49223 + (C30875 + C30874) * C22559) * C49454) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49464 +
            (C32360 + C32361) * C49460 + C32926 * C49450 +
            (C32940 + C32939) * C49400) *
               C49065 * C389 -
           ((C30827 * C9784 + C33144 + C33144 + C49265 * C9788 +
             C30825 * C1901 + C33143 + C33143 + C30823 * C1907) *
                C49400 +
            (C33155 + C33156) * C49450 + (C33157 + C33158) * C49460 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49464) *
               C49065 * C49422) *
              C49132 * C257 +
          (((C31225 + C31224) * C49464 + (C32585 + C32584) * C49460 +
            (C32583 + C32582) * C49450 +
            (C30825 * C1902 + C33145 + C33145 + C30823 * C1908 +
             C30827 * C10048 + C33146 + C33146 + C49265 * C10050) *
                C49400) *
               C49065 * C49422 -
           ((C32364 + C32365) * C49400 + C32342 * C49450 + C32343 * C49460 +
            (C30875 + C30874) * C49464) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[84] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C22559 +
             (C32360 + C32361) * C49223) *
                C49454 +
            ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
            C39786 * C49414) *
               C49149 * C521 -
           (((C32130 + C32131) * C49223 + C35275 * C22559) * C49414 +
            (C32342 * C49223 + C32343 * C22559) * C49441 +
            ((C32363 + C32362) * C49223 + (C32361 + C32360) * C22559) *
                C49454) *
               C49149 * C49420) *
              C523 +
          (((C32334 * C22559 + C32335 * C49223) * C49454 +
            (C35078 * C22559 + (C32131 + C32130) * C49223) * C49441 +
            ((C31051 + C31050) * C22559 +
             (C30825 * C594 + C31460 + C31460 + C30823 * C604 + C30827 * C1443 +
              C31461 + C31461 + C49265 * C1451) *
                 C49223) *
                C49414) *
               C49149 * C49420 -
           (((C31050 + C31051) * C49223 + (C30879 + C30878) * C22559) * C49414 +
            (C35275 * C49223 + (C30877 + C30876) * C22559) * C49441 +
            (C32343 * C49223 + (C30875 + C30874) * C22559) * C49454) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49464 +
            (C32360 + C32361) * C49460 + C32926 * C49450 +
            (C32940 + C32939) * C49400) *
               C49065 * C49149 * C521 -
           ((C30827 * C9301 + C32932 + C32932 + C49265 * C9305 +
             C30825 * C1738 + C32931 + C32931 + C30823 * C1744) *
                C49400 +
            (C32939 + C32940) * C49450 + (C32363 + C32362) * C49460 +
            (C32361 + C32360) * C49464) *
               C49065 * C49149 * C49420) *
              C523 +
          ((C32334 * C49464 + C32335 * C49460 + (C32365 + C32364) * C49450 +
            (C30825 * C1739 + C32933 + C32933 + C30823 * C1745 +
             C30827 * C9302 + C32934 + C32934 + C49265 * C9306) *
                C49400) *
               C49065 * C49149 * C49420 -
           ((C32364 + C32365) * C49400 + C32342 * C49450 + C32343 * C49460 +
            (C30875 + C30874) * C49464) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[85] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C22559 +
            (C32360 + C32361) * C49223) *
               C49454 +
           ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
           C39786 * C49414) *
              C49149 * C587 -
          (((C32130 + C32131) * C49223 + C35275 * C22559) * C49414 +
           (C32342 * C49223 + C32343 * C22559) * C49441 +
           ((C32363 + C32362) * C49223 + (C32361 + C32360) * C22559) * C49454) *
              C49149 * C588 +
          ((C32926 * C22559 + (C32940 + C32939) * C49223) * C49454 +
           (C32335 * C22559 + (C32365 + C32364) * C49223) * C49441 +
           ((C32131 + C32130) * C22559 +
            (C30825 * C1252 + C32346 + C32346 + C30823 * C1260 +
             C30827 * C1903 + C32347 + C32347 + C49265 * C1909) *
                C49223) *
               C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
            C30831 + C30831 + C49265 * C407) *
               C49464 +
           (C32360 + C32361) * C49460 + C32926 * C49450 + C41829 * C49400) *
              C49065 * C49149 * C587 -
          ((C41840 + C41841) * C49400 + (C32939 + C32940) * C49450 +
           (C32363 + C32362) * C49460 + (C32361 + C32360) * C49464) *
              C49065 * C49149 * C588 +
          (C32926 * C49464 + C41829 * C49460 + (C41841 + C41840) * C49450 +
           (C30825 * C9201 + C41834 + C41834 + C30823 * C9205 + C30827 * C9544 +
            C41835 + C41835 + C49265 * C9546) *
               C49400) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[86] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C22559 +
             (C32360 + C32361) * C49223) *
                C49454 +
            ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
            C39786 * C49414) *
               C389 -
           (((C35478 + C35479) * C49223 + (C31222 + C31223) * C22559) * C49414 +
            ((C32584 + C32585) * C49223 + (C31224 + C31225) * C22559) * C49441 +
            ((C33157 + C33158) * C49223 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C22559) *
                C49454) *
               C49422) *
              C521 +
          ((((C33158 + C33157) * C22559 + (C33156 + C33155) * C49223) * C49454 +
            ((C32585 + C32584) * C22559 + (C32583 + C32582) * C49223) * C49441 +
            ((C35479 + C35478) * C22559 +
             (C30825 * C1440 + C32572 + C32572 + C30823 * C1448 +
              C30827 * C2330 + C32573 + C32573 + C49265 * C2342) *
                 C49223) *
                C49414) *
               C49422 -
           (((C32130 + C32131) * C49223 + C35275 * C22559) * C49414 +
            (C32342 * C49223 + C32343 * C22559) * C49441 +
            ((C32363 + C32362) * C49223 + (C32361 + C32360) * C22559) *
                C49454) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49464 +
            (C32360 + C32361) * C49460 + C32926 * C49450 + C41829 * C49400) *
               C49065 * C389 -
           ((C41982 + C41983) * C49400 + (C33155 + C33156) * C49450 +
            (C33157 + C33158) * C49460 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49464) *
               C49065 * C49422) *
              C521 +
          (((C33158 + C33157) * C49464 + (C33156 + C33155) * C49460 +
            (C41983 + C41982) * C49450 +
            (C30825 * C9301 + C41976 + C41976 + C30823 * C9305 +
             C30827 * C9785 + C41977 + C41977 + C49265 * C9789) *
                C49400) *
               C49065 * C49422 -
           ((C41840 + C41841) * C49400 + (C32939 + C32940) * C49450 +
            (C32363 + C32362) * C49460 + (C32361 + C32360) * C49464) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[87] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C22559 +
             (C32360 + C32361) * C49223) *
                C49454 +
            ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
            C39786 * C49414) *
               C795 -
           (((C35478 + C35479) * C49223 + (C31222 + C31223) * C22559) * C49414 +
            ((C32584 + C32585) * C49223 + (C31224 + C31225) * C22559) * C49441 +
            ((C33157 + C33158) * C49223 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C22559) *
                C49454) *
               C49422) *
              C49132 * C523 +
          ((((C31225 + C31224) * C22559 + (C32585 + C32584) * C49223) * C49454 +
            ((C31223 + C31222) * C22559 + (C35479 + C35478) * C49223) * C49441 +
            ((C31221 + C31220) * C22559 +
             (C30825 * C696 + C31598 + C31598 + C30823 * C706 + C30827 * C2677 +
              C31599 + C31599 + C49265 * C2679) *
                 C49223) *
                C49414) *
               C49422 -
           (((C31050 + C31051) * C49223 + (C30879 + C30878) * C22559) * C49414 +
            (C35275 * C49223 + (C30877 + C30876) * C22559) * C49441 +
            (C32343 * C49223 + (C30875 + C30874) * C22559) * C49454) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49464 +
            (C32360 + C32361) * C49460 + C32926 * C49450 + C41829 * C49400) *
               C49065 * C795 -
           ((C41982 + C41983) * C49400 + (C33155 + C33156) * C49450 +
            (C33157 + C33158) * C49460 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49464) *
               C49065 * C49422) *
              C49132 * C523 +
          (((C31225 + C31224) * C49464 + (C32585 + C32584) * C49460 +
            (C32583 + C32582) * C49450 +
            (C30825 * C1902 + C33145 + C33145 + C30823 * C1908 +
             C30827 * C10048 + C33146 + C33146 + C49265 * C10050) *
                C49400) *
               C49065 * C49422 -
           ((C32364 + C32365) * C49400 + C32342 * C49450 + C32343 * C49460 +
            (C30875 + C30874) * C49464) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[88] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C22559 +
             (C32360 + C32361) * C49223) *
                C49454 +
            ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
            C39786 * C49414) *
               C795 -
           (((C35478 + C35479) * C49223 + (C31222 + C31223) * C22559) * C49414 +
            ((C32584 + C32585) * C49223 + (C31224 + C31225) * C22559) * C49441 +
            ((C33157 + C33158) * C49223 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C22559) *
                C49454) *
               C49422) *
              C255 +
          ((((C33158 + C33157) * C22559 + (C33156 + C33155) * C49223) * C49454 +
            ((C32585 + C32584) * C22559 + (C32583 + C32582) * C49223) * C49441 +
            ((C35479 + C35478) * C22559 +
             (C30825 * C1440 + C32572 + C32572 + C30823 * C1448 +
              C30827 * C2330 + C32573 + C32573 + C49265 * C2342) *
                 C49223) *
                C49414) *
               C49422 -
           (((C32130 + C32131) * C49223 + C35275 * C22559) * C49414 +
            (C32342 * C49223 + C32343 * C22559) * C49441 +
            ((C32363 + C32362) * C49223 + (C32361 + C32360) * C22559) *
                C49454) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49464 +
            (C32360 + C32361) * C49460 + C32926 * C49450 + C41829 * C49400) *
               C49065 * C795 -
           ((C41982 + C41983) * C49400 + (C33155 + C33156) * C49450 +
            (C33157 + C33158) * C49460 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49464) *
               C49065 * C49422) *
              C255 +
          (((C33158 + C33157) * C49464 + (C33156 + C33155) * C49460 +
            (C41983 + C41982) * C49450 +
            (C30825 * C9301 + C41976 + C41976 + C30823 * C9305 +
             C30827 * C9785 + C41977 + C41977 + C49265 * C9789) *
                C49400) *
               C49065 * C49422 -
           ((C41840 + C41841) * C49400 + (C32939 + C32940) * C49450 +
            (C32363 + C32362) * C49460 + (C32361 + C32360) * C49464) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[89] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C22559 +
            (C32360 + C32361) * C49223) *
               C49454 +
           ((C30874 + C30875) * C22559 + C32334 * C49223) * C49441 +
           C39786 * C49414) *
              C941 -
          (((C35478 + C35479) * C49223 + (C31222 + C31223) * C22559) * C49414 +
           ((C32584 + C32585) * C49223 + (C31224 + C31225) * C22559) * C49441 +
           ((C33157 + C33158) * C49223 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C22559) *
               C49454) *
              C942 +
          (((C30825 * C944 + C31958 + C31958 + C30823 * C954 + C30827 * C2870 +
             C31959 + C31959 + C49265 * C2878) *
                C22559 +
            (C30825 * C2325 + C33693 + C33693 + C30823 * C2337 +
             C30827 * C3333 + C33694 + C33694 + C49265 * C3339) *
                C49223) *
               C49454 +
           ((C30825 * C945 + C31960 + C31960 + C30823 * C955 + C30827 * C2869 +
             C31961 + C31961 + C49265 * C2877) *
                C22559 +
            (C30825 * C2327 + C33697 + C33697 + C30823 * C2339 +
             C30827 * C3334 + C33698 + C33698 + C49265 * C3340) *
                C49223) *
               C49441 +
           ((C30825 * C946 + C31962 + C31962 + C30823 * C956 + C30827 * C2868 +
             C31963 + C31963 + C49265 * C2876) *
                C22559 +
            (C30825 * C2329 + C36548 + C36548 + C30823 * C2341 +
             C30827 * C3335 + C36549 + C36549 + C49265 * C3341) *
                C49223) *
               C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
            C30831 + C30831 + C49265 * C407) *
               C49464 +
           (C32360 + C32361) * C49460 + C32926 * C49450 + C41829 * C49400) *
              C49065 * C941 -
          ((C41982 + C41983) * C49400 + (C33155 + C33156) * C49450 +
           (C33157 + C33158) * C49460 +
           (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
            C31205 + C31205 + C30823 * C407) *
               C49464) *
              C49065 * C942 +
          ((C30825 * C944 + C31958 + C31958 + C30823 * C954 + C30827 * C2870 +
            C31959 + C31959 + C49265 * C2878) *
               C49464 +
           (C30825 * C2325 + C33693 + C33693 + C30823 * C2337 + C30827 * C3333 +
            C33694 + C33694 + C49265 * C3339) *
               C49460 +
           (C30825 * C2326 + C33695 + C33695 + C30823 * C2338 +
            C30827 * C10248 + C33696 + C33696 + C49265 * C10252) *
               C49450 +
           (C30825 * C9784 + C42342 + C42342 + C30823 * C9788 +
            C30827 * C10682 + C42343 + C42343 + C49265 * C10684) *
               C49400) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[90] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
            C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
               C49370 +
           (C11237 + C11238 + C11239 + C11240) * C49075) *
              C49149 * C49132 * C110 -
          ((C11241 + C11242 + C11243 + C11244) * C49075 +
           (C11240 + C11239 + C11238 + C11237) * C49370) *
              C49149 * C49132 * C111 +
          ((C11244 + C11243 + C11242 + C11241) * C49370 +
           (C166 * C11230 + C301 * C11231 + C1102 * C11232 +
            (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49400) *
               C49075) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
            C1289 * C49223) *
               C3871 +
           (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
              C49149 * C49132 * C110 -
          ((C3882 + C3883) * C49392 + (C3881 + C3880) * C3873 +
           (C3879 + C3878) * C3872 + (C3877 + C3876) * C3871) *
              C49149 * C49132 * C111 +
          (C3884 * C3871 + C3885 * C3872 + (C3883 + C3882) * C3873 +
           (C168 * C49391 +
            (C113 * C264 + C291 + C291 + C49178 * C276) * C49223) *
               C49392) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49391 +
            (C16680 + C16681 + C16682) * C49223) *
               C49370 +
           ((C15163 + C15164 + C15165) * C49391 +
            (C15362 + C15361 + C15360) * C49223) *
               C49075) *
              C49149 * C49132 * C110 -
          (((C15357 + C15358 + C15359) * C49223 +
            (C15168 + C15167 + C15166) * C49391) *
               C49075 +
           ((C15360 + C15361 + C15362) * C49223 +
            (C15165 + C15164 + C15163) * C49391) *
               C49370) *
              C49149 * C49132 * C111 +
          ((C15173 * C49391 + (C15359 + C15358 + C15357) * C49223) * C49370 +
           ((C15171 + C15170 + C15169) * C49391 +
            (C15105 * C260 + C15342 + C15342 + C15102 * C272 + C15107 * C696 +
             C15343 + C15343 + C15103 * C706 + C15109 * C2677 + C15344 +
             C15344 + C49428 * C2679) *
                C49223) *
               C49075) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[91] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
             C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
                C49370 +
            (C11237 + C11238 + C11239 + C11240) * C49075) *
               C49149 * C255 -
           ((C11375 + C11376 + C11377 + C11378) * C49075 +
            (C9218 * C49400 + C1755 * C11232 + C1290 * C11231 +
             C1289 * C11230) *
                C49370) *
               C49149 * C49420) *
              C257 +
          (((C11378 + C11377 + C11376 + C11375) * C49370 +
            (C302 * C11230 + C1101 * C11231 + C1291 * C11232 +
             (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49400) *
                C49075) *
               C49149 * C49420 -
           ((C11241 + C11242 + C11243 + C11244) * C49075 +
            (C11240 + C11239 + C11238 + C11237) * C49370) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
             C1289 * C49223) *
                C3871 +
            (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
               C49149 * C255 -
           ((C4016 + C4017) * C49392 + (C4018 + C4019) * C3873 +
            (C4020 + C4021) * C3872 +
            (C1290 * C49223 + C1289 * C49391) * C3871) *
               C49149 * C49420) *
              C257 +
          (((C4021 + C4020) * C3871 + (C4019 + C4018) * C3872 +
            (C4017 + C4016) * C3873 +
            (C300 * C49391 +
             (C113 * C595 + C611 + C611 + C49178 * C605) * C49223) *
                C49392) *
               C49149 * C49420 -
           ((C3882 + C3883) * C49392 + (C3881 + C3880) * C3873 +
            (C3879 + C3878) * C3872 + (C3877 + C3876) * C3871) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
              C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 +
              C15114 + C49428 * C954) *
                 C49391 +
             (C16680 + C16681 + C16682) * C49223) *
                C49370 +
            ((C15163 + C15164 + C15165) * C49391 + C18804 * C49223) * C49075) *
               C49149 * C255 -
           (((C16688 + C16687 + C16686) * C49223 + C18805 * C49391) * C49075 +
            ((C16685 + C16684 + C16683) * C49223 +
             (C16682 + C16681 + C16680) * C49391) *
                C49370) *
               C49149 * C49420) *
              C257 +
          (((C18804 * C49391 + (C16686 + C16687 + C16688) * C49223) * C49370 +
            ((C15359 + C15358 + C15357) * C49391 +
             (C15105 * C593 + C15813 + C15813 + C15102 * C603 + C15107 * C1440 +
              C15814 + C15814 + C15103 * C1448 + C15109 * C2330 + C15815 +
              C15815 + C49428 * C2342) *
                 C49223) *
                C49075) *
               C49149 * C49420 -
           (((C15357 + C15358 + C15359) * C49223 +
             (C15168 + C15167 + C15166) * C49391) *
                C49075 +
            (C18805 * C49223 + (C15165 + C15164 + C15163) * C49391) * C49370) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[92] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
             C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
                C49370 +
            (C11237 + C11238 + C11239 + C11240) * C49075) *
               C389 -
           ((C11517 + C11511 + C11512 + C11513) * C49075 +
            (C9558 * C49400 + C1922 * C11232 + C1923 * C11231 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C11230) *
                C49370) *
               C49422) *
              C49132 * C257 +
          (((C11513 + C11512 + C11511 + C11517) * C49370 +
            (C434 * C11230 + C1476 * C11231 + C1475 * C11232 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49400) *
                C49075) *
               C49422 -
           ((C11241 + C11242 + C11243 + C11244) * C49075 +
            (C11240 + C11239 + C11238 + C11237) * C49370) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
             C1289 * C49223) *
                C3871 +
            (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
               C389 -
           ((C4162 + C4154) * C49392 + (C4155 + C4156) * C3873 +
            (C4157 + C4158) * C3872 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49391) *
                C3871) *
               C49422) *
              C49132 * C257 +
          (((C4158 + C4157) * C3871 + (C4156 + C4155) * C3872 +
            (C4154 + C4162) * C3873 +
            (C432 * C49391 +
             (C113 * C697 + C713 + C713 + C49178 * C707) * C49223) *
                C49392) *
               C49422 -
           ((C3882 + C3883) * C49392 + (C3881 + C3880) * C3873 +
            (C3879 + C3878) * C3872 + (C3877 + C3876) * C3871) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
              C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 +
              C15114 + C49428 * C954) *
                 C49391 +
             (C16680 + C16681 + C16682) * C49223) *
                C49370 +
            ((C15163 + C15164 + C15165) * C49391 + C18804 * C49223) * C49075) *
               C389 -
           (((C19012 + C19013 + C19014) * C49223 +
             (C15548 + C15549 + C15550) * C49391) *
                C49075 +
            ((C17293 + C17294 + C17295) * C49223 +
             (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 +
              C15107 * C944 + C15528 + C15528 + C15103 * C954 + C15105 * C395 +
              C15529 + C15529 + C15102 * C407) *
                 C49391) *
                C49370) *
               C49422) *
              C49132 * C257 +
          ((((C15550 + C15549 + C15548) * C49391 +
             (C19014 + C19013 + C19012) * C49223) *
                C49370 +
            ((C15547 + C15546 + C15545) * C49391 +
             (C15105 * C695 + C15968 + C15968 + C15102 * C705 + C15107 * C2329 +
              C15969 + C15969 + C15103 * C2341 + C15109 * C3335 + C15970 +
              C15970 + C49428 * C3341) *
                 C49223) *
                C49075) *
               C49422 -
           (((C15357 + C15358 + C15359) * C49223 +
             (C15168 + C15167 + C15166) * C49391) *
                C49075 +
            (C18805 * C49223 + (C15165 + C15164 + C15163) * C49391) * C49370) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[93] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
             C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
                C49370 +
            (C11237 + C11238 + C11239 + C11240) * C49075) *
               C49149 * C521 -
           ((C11375 + C11376 + C11377 + C11378) * C49075 +
            (C9218 * C49400 + C1755 * C11232 + C1290 * C11231 +
             C1289 * C11230) *
                C49370) *
               C49149 * C49420) *
              C523 +
          (((C11378 + C11377 + C11376 + C11375) * C49370 +
            (C302 * C11230 + C1101 * C11231 + C1291 * C11232 +
             (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49400) *
                C49075) *
               C49149 * C49420 -
           ((C11241 + C11242 + C11243 + C11244) * C49075 +
            (C11240 + C11239 + C11238 + C11237) * C49370) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
             C1289 * C49223) *
                C3871 +
            (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
               C49149 * C521 -
           ((C4016 + C4017) * C49392 + (C4018 + C4019) * C3873 +
            (C4020 + C4021) * C3872 +
            (C1290 * C49223 + C1289 * C49391) * C3871) *
               C49149 * C49420) *
              C523 +
          (((C4021 + C4020) * C3871 + (C4019 + C4018) * C3872 +
            (C4017 + C4016) * C3873 +
            (C300 * C49391 +
             (C113 * C595 + C611 + C611 + C49178 * C605) * C49223) *
                C49392) *
               C49149 * C49420 -
           ((C3882 + C3883) * C49392 + (C3881 + C3880) * C3873 +
            (C3879 + C3878) * C3872 + (C3877 + C3876) * C3871) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
              C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 +
              C15114 + C49428 * C954) *
                 C49391 +
             (C16680 + C16681 + C16682) * C49223) *
                C49370 +
            ((C15163 + C15164 + C15165) * C49391 + C18804 * C49223) * C49075) *
               C49149 * C521 -
           (((C16688 + C16687 + C16686) * C49223 + C18805 * C49391) * C49075 +
            ((C16685 + C16684 + C16683) * C49223 +
             (C16682 + C16681 + C16680) * C49391) *
                C49370) *
               C49149 * C49420) *
              C523 +
          (((C18804 * C49391 + (C16686 + C16687 + C16688) * C49223) * C49370 +
            ((C15359 + C15358 + C15357) * C49391 +
             (C15105 * C593 + C15813 + C15813 + C15102 * C603 + C15107 * C1440 +
              C15814 + C15814 + C15103 * C1448 + C15109 * C2330 + C15815 +
              C15815 + C49428 * C2342) *
                 C49223) *
                C49075) *
               C49149 * C49420 -
           (((C15357 + C15358 + C15359) * C49223 +
             (C15168 + C15167 + C15166) * C49391) *
                C49075 +
            (C18805 * C49223 + (C15165 + C15164 + C15163) * C49391) * C49370) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[94] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
            C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
               C49370 +
           (C11237 + C11238 + C11239 + C11240) * C49075) *
              C49149 * C587 -
          ((C11375 + C11376 + C11377 + C11378) * C49075 +
           (C9218 * C49400 + C1755 * C11232 + C1290 * C11231 + C1289 * C11230) *
               C49370) *
              C49149 * C588 +
          ((C1290 * C11230 + C1755 * C11231 + C9218 * C11232 + C9462 * C49400) *
               C49370 +
           (C1100 * C11230 + C1292 * C11231 + C9219 * C11232 +
            (C113 * C9202 + C9213 + C9213 + C49178 * C9206) * C49400) *
               C49075) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
            C1289 * C49223) *
               C3871 +
           (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
              C49149 * C587 -
          ((C4016 + C4017) * C49392 + (C4018 + C4019) * C3873 +
           (C4020 + C4021) * C3872 +
           (C1290 * C49223 + C1289 * C49391) * C3871) *
              C49149 * C588 +
          ((C1290 * C49391 + C1755 * C49223) * C3871 +
           (C1100 * C49391 + C1292 * C49223) * C3872 +
           (C1101 * C49391 + C1291 * C49223) * C3873 +
           (C1102 * C49391 +
            (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49223) *
               C49392) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49391 +
            (C16680 + C16681 + C16682) * C49223) *
               C49370 +
           ((C15163 + C15164 + C15165) * C49391 + C18804 * C49223) * C49075) *
              C49149 * C587 -
          (((C16688 + C16687 + C16686) * C49223 + C18805 * C49391) * C49075 +
           ((C16685 + C16684 + C16683) * C49223 +
            (C16682 + C16681 + C16680) * C49391) *
               C49370) *
              C49149 * C588 +
          ((C17107 * C49391 + (C17116 + C17115 + C17114) * C49223) * C49370 +
           ((C16686 + C16687 + C16688) * C49391 +
            (C15105 * C1253 + C16659 + C16659 + C15102 * C1261 +
             C15107 * C1902 + C16660 + C16660 + C15103 * C1908 +
             C15109 * C10048 + C16661 + C16661 + C49428 * C10050) *
                C49223) *
               C49075) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[95] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
             C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
                C49370 +
            (C11237 + C11238 + C11239 + C11240) * C49075) *
               C389 -
           ((C11517 + C11511 + C11512 + C11513) * C49075 +
            (C9558 * C49400 + C1922 * C11232 + C1923 * C11231 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C11230) *
                C49370) *
               C49422) *
              C521 +
          (((C1923 * C11230 + C1922 * C11231 + C9558 * C11232 +
             C9557 * C49400) *
                C49370 +
            (C1478 * C11230 + C1477 * C11231 + C11516 * C11232 +
             (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C49400) *
                C49075) *
               C49422 -
           ((C11375 + C11376 + C11377 + C11378) * C49075 +
            (C9218 * C49400 + C1755 * C11232 + C1290 * C11231 +
             C1289 * C11230) *
                C49370) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
             C1289 * C49223) *
                C3871 +
            (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
               C389 -
           ((C4162 + C4154) * C49392 + (C4155 + C4156) * C3873 +
            (C4157 + C4158) * C3872 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49391) *
                C3871) *
               C49422) *
              C521 +
          (((C1923 * C49391 + C1922 * C49223) * C3871 +
            (C1478 * C49391 + C1477 * C49223) * C3872 +
            (C1476 * C49391 + C1475 * C49223) * C3873 +
            (C4161 * C49391 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49223) *
                C49392) *
               C49422 -
           ((C4016 + C4017) * C49392 + (C4018 + C4019) * C3873 +
            (C4020 + C4021) * C3872 +
            (C1290 * C49223 + C1289 * C49391) * C3871) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
              C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 +
              C15114 + C49428 * C954) *
                 C49391 +
             (C16680 + C16681 + C16682) * C49223) *
                C49370 +
            ((C15163 + C15164 + C15165) * C49391 + C18804 * C49223) * C49075) *
               C389 -
           (((C19012 + C19013 + C19014) * C49223 +
             (C15548 + C15549 + C15550) * C49391) *
                C49075 +
            ((C17293 + C17294 + C17295) * C49223 +
             (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 +
              C15107 * C944 + C15528 + C15528 + C15103 * C954 + C15105 * C395 +
              C15529 + C15529 + C15102 * C407) *
                 C49391) *
                C49370) *
               C49422) *
              C521 +
          ((((C17295 + C17294 + C17293) * C49391 +
             (C17292 + C17291 + C17290) * C49223) *
                C49370 +
            ((C19014 + C19013 + C19012) * C49391 +
             (C15105 * C1441 + C16838 + C16838 + C15102 * C1449 +
              C15107 * C2328 + C16839 + C16839 + C15103 * C2340 +
              C15109 * C10249 + C16840 + C16840 + C49428 * C10253) *
                 C49223) *
                C49075) *
               C49422 -
           (((C16688 + C16687 + C16686) * C49223 + C18805 * C49391) * C49075 +
            ((C16685 + C16684 + C16683) * C49223 +
             (C16682 + C16681 + C16680) * C49391) *
                C49370) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[96] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
             C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
                C49370 +
            (C11237 + C11238 + C11239 + C11240) * C49075) *
               C795 -
           ((C11517 + C11511 + C11512 + C11513) * C49075 +
            (C9558 * C49400 + C1922 * C11232 + C1923 * C11231 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C11230) *
                C49370) *
               C49422) *
              C49132 * C523 +
          (((C11513 + C11512 + C11511 + C11517) * C49370 +
            (C434 * C11230 + C1476 * C11231 + C1475 * C11232 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49400) *
                C49075) *
               C49422 -
           ((C11241 + C11242 + C11243 + C11244) * C49075 +
            (C11240 + C11239 + C11238 + C11237) * C49370) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
             C1289 * C49223) *
                C3871 +
            (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
               C795 -
           ((C4162 + C4154) * C49392 + (C4155 + C4156) * C3873 +
            (C4157 + C4158) * C3872 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49391) *
                C3871) *
               C49422) *
              C49132 * C523 +
          (((C4158 + C4157) * C3871 + (C4156 + C4155) * C3872 +
            (C4154 + C4162) * C3873 +
            (C432 * C49391 +
             (C113 * C697 + C713 + C713 + C49178 * C707) * C49223) *
                C49392) *
               C49422 -
           ((C3882 + C3883) * C49392 + (C3881 + C3880) * C3873 +
            (C3879 + C3878) * C3872 + (C3877 + C3876) * C3871) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
              C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 +
              C15114 + C49428 * C954) *
                 C49391 +
             (C16680 + C16681 + C16682) * C49223) *
                C49370 +
            ((C15163 + C15164 + C15165) * C49391 + C18804 * C49223) * C49075) *
               C795 -
           (((C19012 + C19013 + C19014) * C49223 +
             (C15548 + C15549 + C15550) * C49391) *
                C49075 +
            ((C17293 + C17294 + C17295) * C49223 +
             (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 +
              C15107 * C944 + C15528 + C15528 + C15103 * C954 + C15105 * C395 +
              C15529 + C15529 + C15102 * C407) *
                 C49391) *
                C49370) *
               C49422) *
              C49132 * C523 +
          ((((C15550 + C15549 + C15548) * C49391 +
             (C19014 + C19013 + C19012) * C49223) *
                C49370 +
            ((C15547 + C15546 + C15545) * C49391 +
             (C15105 * C695 + C15968 + C15968 + C15102 * C705 + C15107 * C2329 +
              C15969 + C15969 + C15103 * C2341 + C15109 * C3335 + C15970 +
              C15970 + C49428 * C3341) *
                 C49223) *
                C49075) *
               C49422 -
           (((C15357 + C15358 + C15359) * C49223 +
             (C15168 + C15167 + C15166) * C49391) *
                C49075 +
            (C18805 * C49223 + (C15165 + C15164 + C15163) * C49391) * C49370) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[97] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
             C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
                C49370 +
            (C11237 + C11238 + C11239 + C11240) * C49075) *
               C795 -
           ((C11517 + C11511 + C11512 + C11513) * C49075 +
            (C9558 * C49400 + C1922 * C11232 + C1923 * C11231 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C11230) *
                C49370) *
               C49422) *
              C255 +
          (((C1923 * C11230 + C1922 * C11231 + C9558 * C11232 +
             C9557 * C49400) *
                C49370 +
            (C1478 * C11230 + C1477 * C11231 + C11516 * C11232 +
             (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C49400) *
                C49075) *
               C49422 -
           ((C11375 + C11376 + C11377 + C11378) * C49075 +
            (C9218 * C49400 + C1755 * C11232 + C1290 * C11231 +
             C1289 * C11230) *
                C49370) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
             C1289 * C49223) *
                C3871 +
            (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
               C795 -
           ((C4162 + C4154) * C49392 + (C4155 + C4156) * C3873 +
            (C4157 + C4158) * C3872 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49391) *
                C3871) *
               C49422) *
              C255 +
          (((C1923 * C49391 + C1922 * C49223) * C3871 +
            (C1478 * C49391 + C1477 * C49223) * C3872 +
            (C1476 * C49391 + C1475 * C49223) * C3873 +
            (C4161 * C49391 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49223) *
                C49392) *
               C49422 -
           ((C4016 + C4017) * C49392 + (C4018 + C4019) * C3873 +
            (C4020 + C4021) * C3872 +
            (C1290 * C49223 + C1289 * C49391) * C3871) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
              C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 +
              C15114 + C49428 * C954) *
                 C49391 +
             (C16680 + C16681 + C16682) * C49223) *
                C49370 +
            ((C15163 + C15164 + C15165) * C49391 + C18804 * C49223) * C49075) *
               C795 -
           (((C19012 + C19013 + C19014) * C49223 +
             (C15548 + C15549 + C15550) * C49391) *
                C49075 +
            ((C17293 + C17294 + C17295) * C49223 +
             (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 +
              C15107 * C944 + C15528 + C15528 + C15103 * C954 + C15105 * C395 +
              C15529 + C15529 + C15102 * C407) *
                 C49391) *
                C49370) *
               C49422) *
              C255 +
          ((((C17295 + C17294 + C17293) * C49391 +
             (C17292 + C17291 + C17290) * C49223) *
                C49370 +
            ((C19014 + C19013 + C19012) * C49391 +
             (C15105 * C1441 + C16838 + C16838 + C15102 * C1449 +
              C15107 * C2328 + C16839 + C16839 + C15103 * C2340 +
              C15109 * C10249 + C16840 + C16840 + C49428 * C10253) *
                 C49223) *
                C49075) *
               C49422 -
           (((C16688 + C16687 + C16686) * C49223 + C18805 * C49391) * C49075 +
            ((C16685 + C16684 + C16683) * C49223 +
             (C16682 + C16681 + C16680) * C49391) *
                C49370) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[98] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
            C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
               C49370 +
           (C11237 + C11238 + C11239 + C11240) * C49075) *
              C941 -
          ((C11517 + C11511 + C11512 + C11513) * C49075 +
           (C9558 * C49400 + C1922 * C11232 + C1923 * C11231 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C11230) *
               C49370) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C11230 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C11231 +
            (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C11232 +
            (C113 * C9784 + C9791 + C9791 + C49178 * C9788) * C49400) *
               C49370 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C11230 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C11231 +
            (C113 * C2328 + C2347 + C2347 + C49178 * C2340) * C11232 +
            (C113 * C10048 + C12234 + C12234 + C49178 * C10050) * C49400) *
               C49075) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
            C1289 * C49223) *
               C3871 +
           (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
              C941 -
          ((C4162 + C4154) * C49392 + (C4155 + C4156) * C3873 +
           (C4157 + C4158) * C3872 +
           (C1923 * C49223 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49391) *
               C3871) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C49391 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C49223) *
               C3871 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C49391 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C49223) *
               C3872 +
           ((C113 * C946 + C962 + C962 + C49178 * C956) * C49391 +
            (C113 * C2329 + C2348 + C2348 + C49178 * C2341) * C49223) *
               C3873 +
           ((C113 * C947 + C963 + C963 + C49178 * C957) * C49391 +
            (C113 * C2677 + C4879 + C4879 + C49178 * C2679) * C49223) *
               C49392) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49391 +
            (C16680 + C16681 + C16682) * C49223) *
               C49370 +
           ((C15163 + C15164 + C15165) * C49391 + C18804 * C49223) * C49075) *
              C941 -
          (((C19012 + C19013 + C19014) * C49223 +
            (C15548 + C15549 + C15550) * C49391) *
               C49075 +
           ((C17293 + C17294 + C17295) * C49223 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49391) *
               C49370) *
              C942 +
          (((C15105 * C944 + C16373 + C16373 + C15102 * C954 + C15107 * C2870 +
             C16374 + C16374 + C15103 * C2878 + C15109 * C3753 + C16375 +
             C16375 + C49428 * C3759) *
                C49391 +
            (C15105 * C2325 + C17698 + C17698 + C15102 * C2337 +
             C15107 * C3333 + C17699 + C17699 + C15103 * C3339 +
             C15109 * C11120 + C17700 + C17700 + C49428 * C11124) *
                C49223) *
               C49370 +
           ((C15105 * C945 + C16376 + C16376 + C15102 * C955 + C15107 * C2869 +
             C16377 + C16377 + C15103 * C2877 + C15109 * C3754 + C16378 +
             C16378 + C49428 * C3760) *
                C49391 +
            (C15105 * C2327 + C20083 + C20083 + C15102 * C2339 +
             C15107 * C3334 + C20084 + C20084 + C15103 * C3340 +
             C15109 * C17877 + C20085 + C20085 + C49428 * C17879) *
                C49223) *
               C49075) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[99] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
            C4985 + C4985 + C49265 * C407) *
               C11230 +
           (C6491 + C6492) * C11231 + C13131 * C11232 +
           (C13145 + C13144) * C49400) *
              C49065 * C49149 * C49132 * C110 -
          ((C12585 + C12586) * C49400 + C12580 * C11232 + C6478 * C11231 +
           (C5029 + C5028) * C11230) *
              C49065 * C49149 * C49132 * C111 +
          (C5036 * C11230 + C6267 * C11231 + (C6494 + C6493) * C11232 +
           (C4979 * C1252 + C7059 + C7059 + C49393 * C1260 + C4981 * C1903 +
            C7060 + C7060 + C49265 * C1909) *
               C49400) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49391 +
            (C4979 * C263 + C5189 + C5189 + C49393 * C275 + C4981 * C693 +
             C5188 + C5188 + C49265 * C703) *
                C49223) *
               C1077 +
           ((C5028 + C5029) * C49391 + (C5209 + C5208) * C49223) * C1078 +
           C6269 * C49414) *
              C49149 * C49132 * C110 -
          (((C5204 + C5205) * C49223 + (C5033 + C5032) * C49391) * C49414 +
           ((C5206 + C5207) * C49223 + (C5031 + C5030) * C49391) * C1078 +
           ((C5208 + C5209) * C49223 + (C5029 + C5028) * C49391) * C1077) *
              C49149 * C49132 * C111 +
          (C6269 * C1077 + (C5037 * C49391 + (C5205 + C5204) * C49223) * C1078 +
           ((C5035 + C5034) * C49391 +
            (C4979 * C259 + C5190 + C5190 + C49393 * C271 + C4981 * C697 +
             C5191 + C5191 + C49265 * C707) *
                C49223) *
               C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
            C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
            C20185 * C954 + C20193 * C2870 + C20199 + C20199 + C49407 * C2878) *
               C49391 +
           (C20187 * C263 + C20397 + C20397 + C20183 * C275 + C20189 * C693 +
            C20396 + C20396 + C20184 * C703 + C20191 * C2325 + C20395 + C20395 +
            C20185 * C2337 + C20193 * C3333 + C20394 + C20394 +
            C49407 * C3339) *
               C49223) *
              C49065 * C49149 * C49132 * C110 -
          ((C20410 + C20411 + C20412 + C20413) * C49223 +
           (C20247 + C20246 + C20245 + C20244) * C49391) *
              C49065 * C49149 * C49132 * C111 +
          ((C20251 + C20250 + C20249 + C20248) * C49391 +
           (C20187 * C261 + C20398 + C20398 + C20183 * C273 + C20189 * C695 +
            C20399 + C20399 + C20184 * C705 + C20191 * C2329 + C20400 + C20400 +
            C20185 * C2341 + C20193 * C3335 + C20401 + C20401 +
            C49407 * C3341) *
               C49223) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[100] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C11230 +
            (C6491 + C6492) * C11231 + C13131 * C11232 +
            (C13145 + C13144) * C49400) *
               C49065 * C49149 * C255 -
           ((C4981 * C9301 + C13137 + C13137 + C49265 * C9305 + C4979 * C1738 +
             C13136 + C13136 + C49393 * C1744) *
                C49400 +
            (C13144 + C13145) * C11232 + (C7065 + C7066) * C11231 +
            (C6492 + C6491) * C11230) *
               C49065 * C49149 * C49420) *
              C257 +
          ((C6468 * C11230 + C12575 * C11231 + (C12586 + C12585) * C11232 +
            (C4979 * C1739 + C13138 + C13138 + C49393 * C1745 + C4981 * C9302 +
             C13139 + C13139 + C49265 * C9306) *
                C49400) *
               C49065 * C49149 * C49420 -
           ((C12585 + C12586) * C49400 + C12580 * C11232 + C6478 * C11231 +
            (C5029 + C5028) * C11230) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49391 +
             (C6491 + C6492) * C49223) *
                C1077 +
            ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
            C6269 * C49414) *
               C49149 * C255 -
           (((C6493 + C6494) * C49223 + C6473 * C49391) * C49414 +
            ((C6495 + C6496) * C49223 + C6478 * C49391) * C1078 +
            ((C4981 * C1442 + C5609 + C5609 + C49265 * C1450 + C4979 * C591 +
              C5608 + C5608 + C49393 * C601) *
                 C49223 +
             (C6492 + C6491) * C49391) *
                C1077) *
               C49149 * C49420) *
              C257 +
          (((C6468 * C49391 + (C6496 + C6495) * C49223) * C1077 +
            (C6267 * C49391 + (C6494 + C6493) * C49223) * C1078 +
            ((C5205 + C5204) * C49391 +
             (C4979 * C594 + C5614 + C5614 + C49393 * C604 + C4981 * C1443 +
              C5615 + C5615 + C49265 * C1451) *
                 C49223) *
                C49414) *
               C49149 * C49420 -
           (((C5204 + C5205) * C49223 + (C5033 + C5032) * C49391) * C49414 +
            (C6473 * C49223 + (C5031 + C5030) * C49391) * C1078 +
            (C6478 * C49223 + (C5029 + C5028) * C49391) * C1077) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
             C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
             C20185 * C954 + C20193 * C2870 + C20199 + C20199 +
             C49407 * C2878) *
                C49391 +
            (C21560 + C21561 + C21562 + C21563) * C49223) *
               C49065 * C49149 * C255 -
           ((C20193 * C10248 + C20807 + C20807 + C49407 * C10252 +
             C20191 * C2326 + C20806 + C20806 + C20185 * C2338 +
             C20189 * C1442 + C20805 + C20805 + C20184 * C1450 + C20187 * C591 +
             C20804 + C20804 + C20183 * C601) *
                C49223 +
            (C21563 + C21562 + C21561 + C21560) * C49391) *
               C49065 * C49149 * C49420) *
              C257 +
          (((C20413 + C20412 + C20411 + C20410) * C49391 +
            (C20187 * C592 + C20808 + C20808 + C20183 * C602 + C20189 * C1441 +
             C20809 + C20809 + C20184 * C1449 + C20191 * C2328 + C20810 +
             C20810 + C20185 * C2340 + C20193 * C10249 + C20811 + C20811 +
             C49407 * C10253) *
                C49223) *
               C49065 * C49149 * C49420 -
           ((C20410 + C20411 + C20412 + C20413) * C49223 +
            (C20247 + C20246 + C20245 + C20244) * C49391) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[101] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C11230 +
            (C6491 + C6492) * C11231 + C13131 * C11232 +
            (C13145 + C13144) * C49400) *
               C49065 * C389 -
           ((C4981 * C9784 + C13345 + C13345 + C49265 * C9788 + C4979 * C1901 +
             C13344 + C13344 + C49393 * C1907) *
                C49400 +
            (C13352 + C13353) * C11232 + (C7275 + C7276) * C11231 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C11230) *
               C49065 * C49422) *
              C49132 * C257 +
          (((C5379 + C5378) * C11230 + (C6710 + C6709) * C11231 +
            (C12790 + C12789) * C11232 +
            (C4979 * C1902 + C13346 + C13346 + C49393 * C1908 + C4981 * C10048 +
             C13347 + C13347 + C49265 * C10050) *
                C49400) *
               C49065 * C49422 -
           ((C12585 + C12586) * C49400 + C12580 * C11232 + C6478 * C11231 +
            (C5029 + C5028) * C11230) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49391 +
             (C6491 + C6492) * C49223) *
                C1077 +
            ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
            C6269 * C49414) *
               C389 -
           (((C6707 + C6708) * C49223 + (C5376 + C5377) * C49391) * C49414 +
            ((C6709 + C6710) * C49223 + (C5378 + C5379) * C49391) * C1078 +
            ((C4981 * C2325 + C5747 + C5747 + C49265 * C2337 + C4979 * C693 +
              C5746 + C5746 + C49393 * C703) *
                 C49223 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C49391) *
                C1077) *
               C49422) *
              C49132 * C257 +
          ((((C5379 + C5378) * C49391 + (C6710 + C6709) * C49223) * C1077 +
            ((C5377 + C5376) * C49391 + (C6708 + C6707) * C49223) * C1078 +
            ((C5375 + C5374) * C49391 +
             (C4979 * C696 + C5752 + C5752 + C49393 * C706 + C4981 * C2677 +
              C5753 + C5753 + C49265 * C2679) *
                 C49223) *
                C49414) *
               C49422 -
           (((C5204 + C5205) * C49223 + (C5033 + C5032) * C49391) * C49414 +
            (C6473 * C49223 + (C5031 + C5030) * C49391) * C1078 +
            (C6478 * C49223 + (C5029 + C5028) * C49391) * C1077) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
             C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
             C20185 * C954 + C20193 * C2870 + C20199 + C20199 +
             C49407 * C2878) *
                C49391 +
            (C21560 + C21561 + C21562 + C21563) * C49223) *
               C49065 * C389 -
           ((C20193 * C11120 + C20945 + C20945 + C49407 * C11124 +
             C20191 * C3333 + C20944 + C20944 + C20185 * C3339 +
             C20189 * C2325 + C20943 + C20943 + C20184 * C2337 + C20187 * C693 +
             C20942 + C20942 + C20183 * C703) *
                C49223 +
            (C20193 * C3753 + C20556 + C20556 + C49407 * C3759 +
             C20191 * C2870 + C20557 + C20557 + C20185 * C2878 + C20189 * C944 +
             C20558 + C20558 + C20184 * C954 + C20187 * C395 + C20559 + C20559 +
             C20183 * C407) *
                C49391) *
               C49065 * C49422) *
              C49132 * C257 +
          (((C20575 + C20574 + C20573 + C20572) * C49391 +
            (C20187 * C694 + C20946 + C20946 + C20183 * C704 + C20189 * C2327 +
             C20947 + C20947 + C20184 * C2339 + C20191 * C3334 + C20948 +
             C20948 + C20185 * C3340 + C20193 * C17877 + C20949 + C20949 +
             C49407 * C17879) *
                C49223) *
               C49065 * C49422 -
           ((C20410 + C20411 + C20412 + C20413) * C49223 +
            (C20247 + C20246 + C20245 + C20244) * C49391) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[102] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C11230 +
            (C6491 + C6492) * C11231 + C13131 * C11232 +
            (C13145 + C13144) * C49400) *
               C49065 * C49149 * C521 -
           ((C4981 * C9301 + C13137 + C13137 + C49265 * C9305 + C4979 * C1738 +
             C13136 + C13136 + C49393 * C1744) *
                C49400 +
            (C13144 + C13145) * C11232 + (C7065 + C7066) * C11231 +
            (C6492 + C6491) * C11230) *
               C49065 * C49149 * C49420) *
              C523 +
          ((C6468 * C11230 + C12575 * C11231 + (C12586 + C12585) * C11232 +
            (C4979 * C1739 + C13138 + C13138 + C49393 * C1745 + C4981 * C9302 +
             C13139 + C13139 + C49265 * C9306) *
                C49400) *
               C49065 * C49149 * C49420 -
           ((C12585 + C12586) * C49400 + C12580 * C11232 + C6478 * C11231 +
            (C5029 + C5028) * C11230) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49391 +
             (C6491 + C6492) * C49223) *
                C1077 +
            ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
            C6269 * C49414) *
               C49149 * C521 -
           (((C6493 + C6494) * C49223 + C6473 * C49391) * C49414 +
            ((C6495 + C6496) * C49223 + C6478 * C49391) * C1078 +
            ((C4981 * C1442 + C5609 + C5609 + C49265 * C1450 + C4979 * C591 +
              C5608 + C5608 + C49393 * C601) *
                 C49223 +
             (C6492 + C6491) * C49391) *
                C1077) *
               C49149 * C49420) *
              C523 +
          (((C6468 * C49391 + (C6496 + C6495) * C49223) * C1077 +
            (C6267 * C49391 + (C6494 + C6493) * C49223) * C1078 +
            ((C5205 + C5204) * C49391 +
             (C4979 * C594 + C5614 + C5614 + C49393 * C604 + C4981 * C1443 +
              C5615 + C5615 + C49265 * C1451) *
                 C49223) *
                C49414) *
               C49149 * C49420 -
           (((C5204 + C5205) * C49223 + (C5033 + C5032) * C49391) * C49414 +
            (C6473 * C49223 + (C5031 + C5030) * C49391) * C1078 +
            (C6478 * C49223 + (C5029 + C5028) * C49391) * C1077) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
             C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
             C20185 * C954 + C20193 * C2870 + C20199 + C20199 +
             C49407 * C2878) *
                C49391 +
            (C21560 + C21561 + C21562 + C21563) * C49223) *
               C49065 * C49149 * C521 -
           ((C20193 * C10248 + C20807 + C20807 + C49407 * C10252 +
             C20191 * C2326 + C20806 + C20806 + C20185 * C2338 +
             C20189 * C1442 + C20805 + C20805 + C20184 * C1450 + C20187 * C591 +
             C20804 + C20804 + C20183 * C601) *
                C49223 +
            (C21563 + C21562 + C21561 + C21560) * C49391) *
               C49065 * C49149 * C49420) *
              C523 +
          (((C20413 + C20412 + C20411 + C20410) * C49391 +
            (C20187 * C592 + C20808 + C20808 + C20183 * C602 + C20189 * C1441 +
             C20809 + C20809 + C20184 * C1449 + C20191 * C2328 + C20810 +
             C20810 + C20185 * C2340 + C20193 * C10249 + C20811 + C20811 +
             C49407 * C10253) *
                C49223) *
               C49065 * C49149 * C49420 -
           ((C20410 + C20411 + C20412 + C20413) * C49223 +
            (C20247 + C20246 + C20245 + C20244) * C49391) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[103] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
            C4985 + C4985 + C49265 * C407) *
               C11230 +
           (C6491 + C6492) * C11231 + C13131 * C11232 + C14478 * C49400) *
              C49065 * C49149 * C587 -
          ((C14489 + C14490) * C49400 + (C13144 + C13145) * C11232 +
           (C7065 + C7066) * C11231 + (C6492 + C6491) * C11230) *
              C49065 * C49149 * C588 +
          (C13131 * C11230 + C14478 * C11231 + (C14490 + C14489) * C11232 +
           (C4979 * C9201 + C14483 + C14483 + C49393 * C9205 + C4981 * C9544 +
            C14484 + C14484 + C49265 * C9546) *
               C49400) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49391 +
            (C6491 + C6492) * C49223) *
               C1077 +
           ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
           C6269 * C49414) *
              C49149 * C587 -
          (((C6493 + C6494) * C49223 + C6473 * C49391) * C49414 +
           ((C6495 + C6496) * C49223 + C6478 * C49391) * C1078 +
           ((C7065 + C7066) * C49223 + (C6492 + C6491) * C49391) * C1077) *
              C49149 * C588 +
          (((C7066 + C7065) * C49391 +
            (C4979 * C1254 + C7055 + C7055 + C49393 * C1262 + C4981 * C1901 +
             C7056 + C7056 + C49265 * C1907) *
                C49223) *
               C1077 +
           ((C6496 + C6495) * C49391 +
            (C4979 * C1253 + C7057 + C7057 + C49393 * C1261 + C4981 * C1902 +
             C7058 + C7058 + C49265 * C1908) *
                C49223) *
               C1078 +
           ((C6494 + C6493) * C49391 +
            (C4979 * C1252 + C7059 + C7059 + C49393 * C1260 + C4981 * C1903 +
             C7060 + C7060 + C49265 * C1909) *
                C49223) *
               C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
            C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
            C20185 * C954 + C20193 * C2870 + C20199 + C20199 + C49407 * C2878) *
               C49391 +
           (C21560 + C21561 + C21562 + C21563) * C49223) *
              C49065 * C49149 * C587 -
          ((C21942 + C21943 + C21944 + C21945) * C49223 +
           (C21563 + C21562 + C21561 + C21560) * C49391) *
              C49065 * C49149 * C588 +
          ((C21945 + C21944 + C21943 + C21942) * C49391 +
           (C20187 * C1254 + C21930 + C21930 + C20183 * C1262 + C20189 * C1901 +
            C21931 + C21931 + C20184 * C1907 + C20191 * C9784 + C21932 +
            C21932 + C20185 * C9788 + C20193 * C10682 + C21933 + C21933 +
            C49407 * C10684) *
               C49223) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[104] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C11230 +
            (C6491 + C6492) * C11231 + C13131 * C11232 + C14478 * C49400) *
               C49065 * C389 -
           ((C14631 + C14632) * C49400 + (C13352 + C13353) * C11232 +
            (C7275 + C7276) * C11231 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C11230) *
               C49065 * C49422) *
              C521 +
          (((C7276 + C7275) * C11230 + (C13353 + C13352) * C11231 +
            (C14632 + C14631) * C11232 +
            (C4979 * C9301 + C14625 + C14625 + C49393 * C9305 + C4981 * C9785 +
             C14626 + C14626 + C49265 * C9789) *
                C49400) *
               C49065 * C49422 -
           ((C14489 + C14490) * C49400 + (C13144 + C13145) * C11232 +
            (C7065 + C7066) * C11231 + (C6492 + C6491) * C11230) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49391 +
             (C6491 + C6492) * C49223) *
                C1077 +
            ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
            C6269 * C49414) *
               C389 -
           (((C6707 + C6708) * C49223 + (C5376 + C5377) * C49391) * C49414 +
            ((C6709 + C6710) * C49223 + (C5378 + C5379) * C49391) * C1078 +
            ((C7275 + C7276) * C49223 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C49391) *
                C1077) *
               C49422) *
              C521 +
          ((((C7276 + C7275) * C49391 +
             (C4979 * C1442 + C7265 + C7265 + C49393 * C1450 + C4981 * C2326 +
              C7266 + C7266 + C49265 * C2338) *
                 C49223) *
                C1077 +
            ((C6710 + C6709) * C49391 +
             (C4979 * C1441 + C7267 + C7267 + C49393 * C1449 + C4981 * C2328 +
              C7268 + C7268 + C49265 * C2340) *
                 C49223) *
                C1078 +
            ((C6708 + C6707) * C49391 +
             (C4979 * C1440 + C7269 + C7269 + C49393 * C1448 + C4981 * C2330 +
              C7270 + C7270 + C49265 * C2342) *
                 C49223) *
                C49414) *
               C49422 -
           (((C6493 + C6494) * C49223 + C6473 * C49391) * C49414 +
            ((C6495 + C6496) * C49223 + C6478 * C49391) * C1078 +
            ((C7065 + C7066) * C49223 + (C6492 + C6491) * C49391) * C1077) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
             C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
             C20185 * C954 + C20193 * C2870 + C20199 + C20199 +
             C49407 * C2878) *
                C49391 +
            (C21560 + C21561 + C21562 + C21563) * C49223) *
               C49065 * C389 -
           ((C22096 + C22097 + C22098 + C22099) * C49223 +
            (C20193 * C3753 + C20556 + C20556 + C49407 * C3759 +
             C20191 * C2870 + C20557 + C20557 + C20185 * C2878 + C20189 * C944 +
             C20558 + C20558 + C20184 * C954 + C20187 * C395 + C20559 + C20559 +
             C20183 * C407) *
                C49391) *
               C49065 * C49422) *
              C521 +
          (((C22099 + C22098 + C22097 + C22096) * C49391 +
            (C20187 * C1442 + C22084 + C22084 + C20183 * C1450 +
             C20189 * C2326 + C22085 + C22085 + C20184 * C2338 +
             C20191 * C10248 + C22086 + C22086 + C20185 * C10252 +
             C20193 * C11121 + C22087 + C22087 + C49407 * C11125) *
                C49223) *
               C49065 * C49422 -
           ((C21942 + C21943 + C21944 + C21945) * C49223 +
            (C21563 + C21562 + C21561 + C21560) * C49391) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[105] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C11230 +
            (C6491 + C6492) * C11231 + C13131 * C11232 + C14478 * C49400) *
               C49065 * C795 -
           ((C14631 + C14632) * C49400 + (C13352 + C13353) * C11232 +
            (C7275 + C7276) * C11231 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C11230) *
               C49065 * C49422) *
              C49132 * C523 +
          (((C5379 + C5378) * C11230 + (C6710 + C6709) * C11231 +
            (C12790 + C12789) * C11232 +
            (C4979 * C1902 + C13346 + C13346 + C49393 * C1908 + C4981 * C10048 +
             C13347 + C13347 + C49265 * C10050) *
                C49400) *
               C49065 * C49422 -
           ((C12585 + C12586) * C49400 + C12580 * C11232 + C6478 * C11231 +
            (C5029 + C5028) * C11230) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49391 +
             (C6491 + C6492) * C49223) *
                C1077 +
            ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
            C6269 * C49414) *
               C795 -
           (((C6707 + C6708) * C49223 + (C5376 + C5377) * C49391) * C49414 +
            ((C6709 + C6710) * C49223 + (C5378 + C5379) * C49391) * C1078 +
            ((C7275 + C7276) * C49223 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C49391) *
                C1077) *
               C49422) *
              C49132 * C523 +
          ((((C5379 + C5378) * C49391 + (C6710 + C6709) * C49223) * C1077 +
            ((C5377 + C5376) * C49391 + (C6708 + C6707) * C49223) * C1078 +
            ((C5375 + C5374) * C49391 +
             (C4979 * C696 + C5752 + C5752 + C49393 * C706 + C4981 * C2677 +
              C5753 + C5753 + C49265 * C2679) *
                 C49223) *
                C49414) *
               C49422 -
           (((C5204 + C5205) * C49223 + (C5033 + C5032) * C49391) * C49414 +
            (C6473 * C49223 + (C5031 + C5030) * C49391) * C1078 +
            (C6478 * C49223 + (C5029 + C5028) * C49391) * C1077) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
             C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
             C20185 * C954 + C20193 * C2870 + C20199 + C20199 +
             C49407 * C2878) *
                C49391 +
            (C21560 + C21561 + C21562 + C21563) * C49223) *
               C49065 * C795 -
           ((C22096 + C22097 + C22098 + C22099) * C49223 +
            (C20193 * C3753 + C20556 + C20556 + C49407 * C3759 +
             C20191 * C2870 + C20557 + C20557 + C20185 * C2878 + C20189 * C944 +
             C20558 + C20558 + C20184 * C954 + C20187 * C395 + C20559 + C20559 +
             C20183 * C407) *
                C49391) *
               C49065 * C49422) *
              C49132 * C523 +
          (((C20575 + C20574 + C20573 + C20572) * C49391 +
            (C20187 * C694 + C20946 + C20946 + C20183 * C704 + C20189 * C2327 +
             C20947 + C20947 + C20184 * C2339 + C20191 * C3334 + C20948 +
             C20948 + C20185 * C3340 + C20193 * C17877 + C20949 + C20949 +
             C49407 * C17879) *
                C49223) *
               C49065 * C49422 -
           ((C20410 + C20411 + C20412 + C20413) * C49223 +
            (C20247 + C20246 + C20245 + C20244) * C49391) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[106] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C11230 +
            (C6491 + C6492) * C11231 + C13131 * C11232 + C14478 * C49400) *
               C49065 * C795 -
           ((C14631 + C14632) * C49400 + (C13352 + C13353) * C11232 +
            (C7275 + C7276) * C11231 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C11230) *
               C49065 * C49422) *
              C255 +
          (((C7276 + C7275) * C11230 + (C13353 + C13352) * C11231 +
            (C14632 + C14631) * C11232 +
            (C4979 * C9301 + C14625 + C14625 + C49393 * C9305 + C4981 * C9785 +
             C14626 + C14626 + C49265 * C9789) *
                C49400) *
               C49065 * C49422 -
           ((C14489 + C14490) * C49400 + (C13144 + C13145) * C11232 +
            (C7065 + C7066) * C11231 + (C6492 + C6491) * C11230) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49391 +
             (C6491 + C6492) * C49223) *
                C1077 +
            ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
            C6269 * C49414) *
               C795 -
           (((C6707 + C6708) * C49223 + (C5376 + C5377) * C49391) * C49414 +
            ((C6709 + C6710) * C49223 + (C5378 + C5379) * C49391) * C1078 +
            ((C7275 + C7276) * C49223 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C49391) *
                C1077) *
               C49422) *
              C255 +
          ((((C7276 + C7275) * C49391 +
             (C4979 * C1442 + C7265 + C7265 + C49393 * C1450 + C4981 * C2326 +
              C7266 + C7266 + C49265 * C2338) *
                 C49223) *
                C1077 +
            ((C6710 + C6709) * C49391 +
             (C4979 * C1441 + C7267 + C7267 + C49393 * C1449 + C4981 * C2328 +
              C7268 + C7268 + C49265 * C2340) *
                 C49223) *
                C1078 +
            ((C6708 + C6707) * C49391 +
             (C4979 * C1440 + C7269 + C7269 + C49393 * C1448 + C4981 * C2330 +
              C7270 + C7270 + C49265 * C2342) *
                 C49223) *
                C49414) *
               C49422 -
           (((C6493 + C6494) * C49223 + C6473 * C49391) * C49414 +
            ((C6495 + C6496) * C49223 + C6478 * C49391) * C1078 +
            ((C7065 + C7066) * C49223 + (C6492 + C6491) * C49391) * C1077) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
             C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
             C20185 * C954 + C20193 * C2870 + C20199 + C20199 +
             C49407 * C2878) *
                C49391 +
            (C21560 + C21561 + C21562 + C21563) * C49223) *
               C49065 * C795 -
           ((C22096 + C22097 + C22098 + C22099) * C49223 +
            (C20193 * C3753 + C20556 + C20556 + C49407 * C3759 +
             C20191 * C2870 + C20557 + C20557 + C20185 * C2878 + C20189 * C944 +
             C20558 + C20558 + C20184 * C954 + C20187 * C395 + C20559 + C20559 +
             C20183 * C407) *
                C49391) *
               C49065 * C49422) *
              C255 +
          (((C22099 + C22098 + C22097 + C22096) * C49391 +
            (C20187 * C1442 + C22084 + C22084 + C20183 * C1450 +
             C20189 * C2326 + C22085 + C22085 + C20184 * C2338 +
             C20191 * C10248 + C22086 + C22086 + C20185 * C10252 +
             C20193 * C11121 + C22087 + C22087 + C49407 * C11125) *
                C49223) *
               C49065 * C49422 -
           ((C21942 + C21943 + C21944 + C21945) * C49223 +
            (C21563 + C21562 + C21561 + C21560) * C49391) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[107] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
            C4985 + C4985 + C49265 * C407) *
               C11230 +
           (C6491 + C6492) * C11231 + C13131 * C11232 + C14478 * C49400) *
              C49065 * C941 -
          ((C14631 + C14632) * C49400 + (C13352 + C13353) * C11232 +
           (C7275 + C7276) * C11231 +
           (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
            C5359 + C5359 + C49393 * C407) *
               C11230) *
              C49065 * C942 +
          ((C4979 * C944 + C6112 + C6112 + C49393 * C954 + C4981 * C2870 +
            C6113 + C6113 + C49265 * C2878) *
               C11230 +
           (C4979 * C2325 + C7811 + C7811 + C49393 * C2337 + C4981 * C3333 +
            C7812 + C7812 + C49265 * C3339) *
               C11231 +
           (C4979 * C2326 + C13888 + C13888 + C49393 * C2338 + C4981 * C10248 +
            C13889 + C13889 + C49265 * C10252) *
               C11232 +
           (C4979 * C9784 + C14991 + C14991 + C49393 * C9788 + C4981 * C10682 +
            C14992 + C14992 + C49265 * C10684) *
               C49400) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49391 +
            (C6491 + C6492) * C49223) *
               C1077 +
           ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
           C6269 * C49414) *
              C941 -
          (((C6707 + C6708) * C49223 + (C5376 + C5377) * C49391) * C49414 +
           ((C6709 + C6710) * C49223 + (C5378 + C5379) * C49391) * C1078 +
           ((C7275 + C7276) * C49223 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C49391) *
               C1077) *
              C942 +
          (((C4979 * C944 + C6112 + C6112 + C49393 * C954 + C4981 * C2870 +
             C6113 + C6113 + C49265 * C2878) *
                C49391 +
            (C4979 * C2325 + C7811 + C7811 + C49393 * C2337 + C4981 * C3333 +
             C7812 + C7812 + C49265 * C3339) *
                C49223) *
               C1077 +
           ((C4979 * C945 + C6114 + C6114 + C49393 * C955 + C4981 * C2869 +
             C6115 + C6115 + C49265 * C2877) *
                C49391 +
            (C4979 * C2327 + C7813 + C7813 + C49393 * C2339 + C4981 * C3334 +
             C7814 + C7814 + C49265 * C3340) *
                C49223) *
               C1078 +
           ((C4979 * C946 + C6116 + C6116 + C49393 * C956 + C4981 * C2868 +
             C6117 + C6117 + C49265 * C2876) *
                C49391 +
            (C4979 * C2329 + C7815 + C7815 + C49393 * C2341 + C4981 * C3335 +
             C7816 + C7816 + C49265 * C3341) *
                C49223) *
               C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
            C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
            C20185 * C954 + C20193 * C2870 + C20199 + C20199 + C49407 * C2878) *
               C49391 +
           (C21560 + C21561 + C21562 + C21563) * C49223) *
              C49065 * C941 -
          ((C22096 + C22097 + C22098 + C22099) * C49223 +
           (C20193 * C3753 + C20556 + C20556 + C49407 * C3759 + C20191 * C2870 +
            C20557 + C20557 + C20185 * C2878 + C20189 * C944 + C20558 + C20558 +
            C20184 * C954 + C20187 * C395 + C20559 + C20559 + C20183 * C407) *
               C49391) *
              C49065 * C942 +
          ((C20187 * C944 + C21308 + C21308 + C20183 * C954 + C20189 * C2870 +
            C21309 + C21309 + C20184 * C2878 + C20191 * C3753 + C21310 +
            C21310 + C20185 * C3759 + C20193 * C17972 + C21311 + C21311 +
            C49407 * C17976) *
               C49391 +
           (C20187 * C2325 + C22458 + C22458 + C20183 * C2337 + C20189 * C3333 +
            C22459 + C22459 + C20184 * C3339 + C20191 * C11120 + C22460 +
            C22460 + C20185 * C11124 + C20193 * C18219 + C22461 + C22461 +
            C49407 * C18221) *
               C49223) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[108] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
               C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                  C49149 * C49132 * C110 -
              (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
               C169 * C103) *
                  C49149 * C49132 * C111 +
              (C170 * C103 + C171 * C104 + C172 * C105 + C173 * C106 +
               (C113 * C121 + C153 + C153 + C49178 * C135) * C49161 * C107) *
                  C49149 * C49132 * C112) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
                (C113 * C263 + C290 + C290 + C49178 * C275) * C49445 +
                (C113 * C591 + C607 + C607 + C49178 * C601) * C49425) *
                   C1077 +
               (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
                  C49149 * C49132 * C110 -
              ((C1105 + C1091 + C1092) * C49414 +
               (C1104 + C1086 + C1085) * C1078 +
               (C1103 + C1082 + C1081) * C1077) *
                  C49149 * C49132 * C111 +
              (C1106 * C1077 + (C1092 + C1091 + C1105) * C1078 +
               (C167 * C49457 + C300 * C49445 +
                (C113 * C595 + C611 + C611 + C49178 * C605) * C49425) *
                   C49414) *
                  C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
            C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
            C49428 * C954) *
               C49161 * C1077 +
           (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
              C49149 * C49132 * C110 -
          ((C2526 + C2527 + C2528) * C49161 * C49414 +
           (C2525 + C2524 + C2523) * C49161 * C1078 +
           (C2522 + C2521 + C2520) * C49161 * C1077) *
              C49149 * C49132 * C111 +
          (C2531 * C1077 + (C2528 + C2527 + C2526) * C49161 * C1078 +
           (C2462 * C119 + C2499 + C2499 + C49458 * C133 + C2464 * C391 +
            C2500 + C2500 + C49447 * C403 + C2466 * C948 + C2501 + C2501 +
            C49428 * C958) *
               C49161 * C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
            C1289 * C7927 + C1290 * C49425) *
               C49454 +
           (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
              C49149 * C49132 * C110 -
          ((C7939 + C7940 + C7941) * C49414 + (C7938 + C7937 + C7936) * C49441 +
           (C7935 + C7934 + C7933) * C49454) *
              C49149 * C49132 * C111 +
          (C7943 * C49454 + (C7941 + C7940 + C7939) * C49441 +
           (C167 * C7926 + C300 * C7927 +
            (C113 * C595 + C611 + C611 + C49178 * C605) * C49425) *
               C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 + C1289 * C9114 +
           C1290 * C9115 + C1755 * C9116 +
           (C113 * C1738 + C1750 + C1750 + C49178 * C1744) * C9117) *
              C49065 * C49149 * C49132 * C110 -
          ((C113 * C1739 + C1751 + C1751 + C49178 * C1745) * C9117 +
           C1292 * C9116 + C1100 * C9115 + C303 * C9114 + C164 * C9113) *
              C49065 * C49149 * C49132 * C111 +
          (C165 * C9113 + C302 * C9114 + C1101 * C9115 + C1291 * C9116 +
           (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C9117) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
            C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
            C49428 * C954) *
               C7926 +
           (C2462 * C263 + C2701 + C2701 + C49458 * C275 + C2464 * C693 +
            C2700 + C2700 + C49447 * C703 + C2466 * C2325 + C2699 + C2699 +
            C49428 * C2337) *
               C7927 +
           (C2462 * C591 + C3179 + C3179 + C49458 * C601 + C2464 * C1442 +
            C3180 + C3180 + C49447 * C1450 + C2466 * C2326 + C3181 + C3181 +
            C49428 * C2338) *
               C49425) *
              C49065 * C49149 * C49132 * C110 -
          ((C2466 * C2328 + C3184 + C3184 + C49428 * C2340 + C2464 * C1441 +
            C3183 + C3183 + C49447 * C1449 + C2462 * C592 + C3182 + C3182 +
            C49458 * C602) *
               C49425 +
           (C2720 + C2721 + C2722) * C7927 + (C2522 + C2521 + C2520) * C7926) *
              C49065 * C49149 * C49132 * C111 +
          (C2530 * C7926 + (C2719 + C2718 + C2717) * C7927 +
           (C2462 * C593 + C3185 + C3185 + C49458 * C603 + C2464 * C1440 +
            C3186 + C3186 + C49447 * C1448 + C2466 * C2330 + C3187 + C3187 +
            C49428 * C2342) *
               C49425) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
            C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
            C49428 * C954) *
               C49161 * C49454 +
           (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
              C49149 * C49132 * C110 -
          ((C15169 + C15170 + C15171) * C49161 * C49414 +
           (C15168 + C15167 + C15166) * C49161 * C49441 +
           (C15165 + C15164 + C15163) * C49161 * C49454) *
              C49149 * C49132 * C111 +
          (C15174 * C49454 + (C15171 + C15170 + C15169) * C49161 * C49441 +
           (C15105 * C119 + C15142 + C15142 + C15102 * C133 + C15107 * C391 +
            C15143 + C15143 + C15103 * C403 + C15109 * C948 + C15144 + C15144 +
            C49428 * C958) *
               C49161 * C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
            C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
            C49428 * C954) *
               C49457 +
           (C15105 * C263 + C15341 + C15341 + C15102 * C275 + C15107 * C693 +
            C15340 + C15340 + C15103 * C703 + C15109 * C2325 + C15339 + C15339 +
            C49428 * C2337) *
               C49445 +
           (C15105 * C591 + C15807 + C15807 + C15102 * C601 + C15107 * C1442 +
            C15808 + C15808 + C15103 * C1450 + C15109 * C2326 + C15809 +
            C15809 + C49428 * C2338) *
               C49425) *
              C49065 * C49149 * C49132 * C110 -
          ((C15109 * C2328 + C15812 + C15812 + C49428 * C2340 + C15107 * C1441 +
            C15811 + C15811 + C15103 * C1449 + C15105 * C592 + C15810 + C15810 +
            C15102 * C602) *
               C49425 +
           (C15360 + C15361 + C15362) * C49445 +
           (C15165 + C15164 + C15163) * C49457) *
              C49065 * C49149 * C49132 * C111 +
          (C15173 * C49457 + (C15359 + C15358 + C15357) * C49445 +
           (C15105 * C593 + C15813 + C15813 + C15102 * C603 + C15107 * C1440 +
            C15814 + C15814 + C15103 * C1448 + C15109 * C2330 + C15815 +
            C15815 + C49428 * C2342) *
               C49425) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C17770 * C115 + C17781 + C17781 + C17765 * C129 + C17772 * C395 +
           C17782 + C17782 + C17766 * C407 + C17774 * C944 + C17783 + C17783 +
           C17767 * C954 + C17776 * C2870 + C17784 + C17784 + C17768 * C2878 +
           C17778 * C3753 + C17785 + C17785 + C17769 * C3759) *
              C49161 * C49065 * C49149 * C49132 * C110 -
          (C17778 * C3754 + C17786 + C17786 + C17769 * C3760 + C17776 * C2869 +
           C17787 + C17787 + C17768 * C2877 + C17774 * C945 + C17788 + C17788 +
           C17767 * C955 + C17772 * C394 + C17789 + C17789 + C17766 * C406 +
           C17770 * C116 + C17790 + C17790 + C17765 * C130) *
              C49161 * C49065 * C49149 * C49132 * C111 +
          (C17770 * C117 + C17791 + C17791 + C17765 * C131 + C17772 * C393 +
           C17792 + C17792 + C17766 * C405 + C17774 * C946 + C17793 + C17793 +
           C17767 * C956 + C17776 * C2868 + C17794 + C17794 + C17768 * C2876 +
           C17778 * C3755 + C17795 + C17795 + C17769 * C3761) *
              C49161 * C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[109] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
                C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                   C49149 * C255 -
               (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
                (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
                   C49149 * C49420) *
                  C257 +
              ((C307 * C103 + C306 * C104 + C305 * C105 + C304 * C106 +
                (C113 * C264 + C291 + C291 + C49178 * C276) * C49161 * C107) *
                   C49149 * C49420 -
               (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
                C169 * C103) *
                   C49149 * C255) *
                  C49418) +
         0.5 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
                 C1289 * C49445 + C1290 * C49425) *
                    C1077 +
                (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
                   C49149 * C255 -
               ((C1293 + C1272 + C1273) * C49414 +
                (C1294 + C1277 + C1278) * C1078 +
                ((C113 * C1254 + C1279 + C1279 + C49178 * C1262) * C49425 +
                 C1290 * C49445 + C1289 * C49457) *
                    C1077) *
                   C49149 * C49420) *
                  C257 +
              (((C1278 + C1277 + C1294) * C1077 +
                (C1273 + C1272 + C1293) * C1078 +
                (C301 * C49457 + C1102 * C49445 +
                 (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                    C49414) *
                   C49149 * C49420 -
               ((C1105 + C1091 + C1092) * C49414 +
                (C1104 + C1086 + C1085) * C1078 +
                (C1103 + C1082 + C1081) * C1077) *
                   C49149 * C255) *
                  C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C49161 * C1077 +
            (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
               C49149 * C255 -
           ((C2717 + C2718 + C2719) * C49161 * C49414 +
            (C2720 + C2721 + C2722) * C49161 * C1078 +
            (C2466 * C2325 + C2699 + C2699 + C49428 * C2337 + C2464 * C693 +
             C2700 + C2700 + C49447 * C703 + C2462 * C263 + C2701 + C2701 +
             C49458 * C275) *
                C49161 * C1077) *
               C49149 * C49420) *
              C257 +
          (((C2722 + C2721 + C2720) * C49161 * C1077 +
            (C2719 + C2718 + C2717) * C49161 * C1078 +
            (C2462 * C260 + C2702 + C2702 + C49458 * C272 + C2464 * C696 +
             C2703 + C2703 + C49447 * C706 + C2466 * C2677 + C2704 + C2704 +
             C49428 * C2679) *
                C49161 * C49414) *
               C49149 * C49420 -
           ((C2526 + C2527 + C2528) * C49161 * C49414 +
            (C2525 + C2524 + C2523) * C49161 * C1078 +
            (C2522 + C2521 + C2520) * C49161 * C1077) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C49149 * C255 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C49149 * C49420) *
              C257 +
          (((C8095 + C8094 + C8093) * C49454 +
            (C8092 + C8091 + C8090) * C49441 +
            (C301 * C7926 + C1102 * C7927 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C49149 * C255 -
           ((C113 * C9201 + C9210 + C9210 + C49178 * C9205) * C9117 +
            C9218 * C9116 + C1755 * C9115 + C1290 * C9114 + C1289 * C9113) *
               C49065 * C49149 * C49420) *
              C257 +
          ((C303 * C9113 + C1100 * C9114 + C1292 * C9115 + C9219 * C9116 +
            (C113 * C9202 + C9213 + C9213 + C49178 * C9206) * C9117) *
               C49065 * C49149 * C49420 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C7926 +
            (C10094 + C10095 + C10096) * C7927 +
            (C10097 + C10098 + C10099) * C49425) *
               C49065 * C49149 * C255 -
           ((C2466 * C9784 + C10064 + C10064 + C49428 * C9788 + C2464 * C1901 +
             C10065 + C10065 + C49447 * C1907 + C2462 * C1254 + C10066 +
             C10066 + C49458 * C1262) *
                C49425 +
            (C10099 + C10098 + C10097) * C7927 +
            (C10096 + C10095 + C10094) * C7926) *
               C49065 * C49149 * C49420) *
              C257 +
          (((C2722 + C2721 + C2720) * C7926 +
            (C10100 + C10101 + C10102) * C7927 +
            (C2462 * C1253 + C10073 + C10073 + C49458 * C1261 + C2464 * C1902 +
             C10074 + C10074 + C49447 * C1908 + C2466 * C10048 + C10075 +
             C10075 + C49428 * C10050) *
                C49425) *
               C49065 * C49149 * C49420 -
           ((C10102 + C10101 + C10100) * C49425 +
            (C2720 + C2721 + C2722) * C7927 + (C2522 + C2521 + C2520) * C7926) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49161 * C49454 +
            (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
               C49149 * C255 -
           ((C15357 + C15358 + C15359) * C49161 * C49414 +
            (C15360 + C15361 + C15362) * C49161 * C49441 +
            (C15109 * C2325 + C15339 + C15339 + C49428 * C2337 + C15107 * C693 +
             C15340 + C15340 + C15103 * C703 + C15105 * C263 + C15341 + C15341 +
             C15102 * C275) *
                C49161 * C49454) *
               C49149 * C49420) *
              C257 +
          (((C15362 + C15361 + C15360) * C49161 * C49454 +
            (C15359 + C15358 + C15357) * C49161 * C49441 +
            (C15105 * C260 + C15342 + C15342 + C15102 * C272 + C15107 * C696 +
             C15343 + C15343 + C15103 * C706 + C15109 * C2677 + C15344 +
             C15344 + C49428 * C2679) *
                C49161 * C49414) *
               C49149 * C49420 -
           ((C15169 + C15170 + C15171) * C49161 * C49414 +
            (C15168 + C15167 + C15166) * C49161 * C49441 +
            (C15165 + C15164 + C15163) * C49161 * C49454) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49457 +
            (C16680 + C16681 + C16682) * C49445 +
            (C16683 + C16684 + C16685) * C49425) *
               C49065 * C49149 * C255 -
           ((C15109 * C9784 + C16650 + C16650 + C49428 * C9788 +
             C15107 * C1901 + C16651 + C16651 + C15103 * C1907 +
             C15105 * C1254 + C16652 + C16652 + C15102 * C1262) *
                C49425 +
            (C16685 + C16684 + C16683) * C49445 +
            (C16682 + C16681 + C16680) * C49457) *
               C49065 * C49149 * C49420) *
              C257 +
          (((C15362 + C15361 + C15360) * C49457 +
            (C16686 + C16687 + C16688) * C49445 +
            (C15105 * C1253 + C16659 + C16659 + C15102 * C1261 +
             C15107 * C1902 + C16660 + C16660 + C15103 * C1908 +
             C15109 * C10048 + C16661 + C16661 + C49428 * C10050) *
                C49425) *
               C49065 * C49149 * C49420 -
           ((C16688 + C16687 + C16686) * C49425 +
            (C15360 + C15361 + C15362) * C49445 +
            (C15165 + C15164 + C15163) * C49457) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C17770 * C115 + C17781 + C17781 + C17765 * C129 + C17772 * C395 +
            C17782 + C17782 + C17766 * C407 + C17774 * C944 + C17783 + C17783 +
            C17767 * C954 + C17776 * C2870 + C17784 + C17784 + C17768 * C2878 +
            C17778 * C3753 + C17785 + C17785 + C17769 * C3759) *
               C49161 * C49065 * C49149 * C255 -
           (C17778 * C11120 + C17881 + C17881 + C17769 * C11124 +
            C17776 * C3333 + C17882 + C17882 + C17768 * C3339 + C17774 * C2325 +
            C17883 + C17883 + C17767 * C2337 + C17772 * C693 + C17884 + C17884 +
            C17766 * C703 + C17770 * C263 + C17885 + C17885 + C17765 * C275) *
               C49161 * C49065 * C49149 * C49420) *
              C257 +
          ((C17770 * C262 + C17886 + C17886 + C17765 * C274 + C17772 * C694 +
            C17887 + C17887 + C17766 * C704 + C17774 * C2327 + C17888 + C17888 +
            C17767 * C2339 + C17776 * C3334 + C17889 + C17889 + C17768 * C3340 +
            C17778 * C17877 + C17890 + C17890 + C17769 * C17879) *
               C49161 * C49065 * C49149 * C49420 -
           (C17778 * C3754 + C17786 + C17786 + C17769 * C3760 + C17776 * C2869 +
            C17787 + C17787 + C17768 * C2877 + C17774 * C945 + C17788 + C17788 +
            C17767 * C955 + C17772 * C394 + C17789 + C17789 + C17766 * C406 +
            C17770 * C116 + C17790 + C17790 + C17765 * C130) *
               C49161 * C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[110] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
                C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                   C389 -
               (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
                (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
                   C49422) *
                  C49132 * C257 +
              ((C439 * C103 + C438 * C104 + C437 * C105 + C436 * C106 +
                (C113 * C396 + C423 + C423 + C49178 * C408) * C49161 * C107) *
                   C49422 -
               (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
                C169 * C103) *
                   C389) *
                  C49132 * C49418) +
         0.5 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
                 C1289 * C49445 + C1290 * C49425) *
                    C1077 +
                (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
                   C389 -
               ((C1479 + C1480 + C1458) * C49414 +
                (C1481 + C1482 + C1464) * C1078 +
                ((C113 * C1442 + C1465 + C1465 + C49178 * C1450) * C49425 +
                 (C113 * C693 + C709 + C709 + C49178 * C703) * C49445 +
                 (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                    C1077) *
                   C49422) *
                  C49132 * C257 +
              (((C1464 + C1482 + C1481) * C1077 +
                (C1458 + C1480 + C1479) * C1078 +
                (C433 * C49457 +
                 (C113 * C696 + C712 + C712 + C49178 * C706) * C49445 +
                 (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                    C49414) *
                   C49422 -
               ((C1105 + C1091 + C1092) * C49414 +
                (C1104 + C1086 + C1085) * C1078 +
                (C1103 + C1082 + C1081) * C1077) *
                   C389) *
                  C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C49161 * C1077 +
            (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
               C389 -
           ((C2917 + C2918 + C2919) * C49161 * C49414 +
            (C2920 + C2921 + C2922) * C49161 * C1078 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C49161 * C1077) *
               C49422) *
              C49132 * C257 +
          (((C2922 + C2921 + C2920) * C49161 * C1077 +
            (C2919 + C2918 + C2917) * C49161 * C1078 +
            (C2462 * C392 + C2902 + C2902 + C49458 * C404 + C2464 * C947 +
             C2903 + C2903 + C49447 * C957 + C2466 * C2871 + C2904 + C2904 +
             C49428 * C2879) *
                C49161 * C49414) *
               C49422 -
           ((C2526 + C2527 + C2528) * C49161 * C49414 +
            (C2525 + C2524 + C2523) * C49161 * C1078 +
            (C2522 + C2521 + C2520) * C49161 * C1077) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C389 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C49132 * C257 +
          (((C8247 + C8246 + C8245) * C49454 +
            (C8244 + C8243 + C8242) * C49441 +
            (C433 * C7926 + C4161 * C7927 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C389 -
           ((C113 * C9301 + C9308 + C9308 + C49178 * C9305) * C9117 +
            (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C9116 +
            C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C49132 * C257 +
          ((C435 * C9113 + C1478 * C9114 + C1477 * C9115 +
            (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C9116 +
            (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C9117) *
               C49065 * C49422 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C7926 +
            (C10094 + C10095 + C10096) * C7927 +
            (C10097 + C10098 + C10099) * C49425) *
               C49065 * C389 -
           ((C2466 * C10248 + C10255 + C10255 + C49428 * C10252 +
             C2464 * C2326 + C10256 + C10256 + C49447 * C2338 + C2462 * C1442 +
             C10257 + C10257 + C49458 * C1450) *
                C49425 +
            (C2466 * C3333 + C3345 + C3345 + C49428 * C3339 + C2464 * C2325 +
             C3344 + C3344 + C49447 * C2337 + C2462 * C693 + C3343 + C3343 +
             C49458 * C703) *
                C7927 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C7926) *
               C49065 * C49422) *
              C49132 * C257 +
          (((C2922 + C2921 + C2920) * C7926 +
            (C2462 * C694 + C3346 + C3346 + C49458 * C704 + C2464 * C2327 +
             C3347 + C3347 + C49447 * C2339 + C2466 * C3334 + C3348 + C3348 +
             C49428 * C3340) *
                C7927 +
            (C2462 * C1441 + C10258 + C10258 + C49458 * C1449 + C2464 * C2328 +
             C10259 + C10259 + C49447 * C2340 + C2466 * C10249 + C10260 +
             C10260 + C49428 * C10253) *
                C49425) *
               C49065 * C49422 -
           ((C10102 + C10101 + C10100) * C49425 +
            (C2720 + C2721 + C2722) * C7927 + (C2522 + C2521 + C2520) * C7926) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49161 * C49454 +
            (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
               C389 -
           ((C15545 + C15546 + C15547) * C49161 * C49414 +
            (C15548 + C15549 + C15550) * C49161 * C49441 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49161 * C49454) *
               C49422) *
              C49132 * C257 +
          (((C15550 + C15549 + C15548) * C49161 * C49454 +
            (C15547 + C15546 + C15545) * C49161 * C49441 +
            (C15105 * C392 + C15530 + C15530 + C15102 * C404 + C15107 * C947 +
             C15531 + C15531 + C15103 * C957 + C15109 * C2871 + C15532 +
             C15532 + C49428 * C2879) *
                C49161 * C49414) *
               C49422 -
           ((C15169 + C15170 + C15171) * C49161 * C49414 +
            (C15168 + C15167 + C15166) * C49161 * C49441 +
            (C15165 + C15164 + C15163) * C49161 * C49454) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49457 +
            (C16680 + C16681 + C16682) * C49445 +
            (C16683 + C16684 + C16685) * C49425) *
               C49065 * C389 -
           ((C15109 * C10248 + C16835 + C16835 + C49428 * C10252 +
             C15107 * C2326 + C16836 + C16836 + C15103 * C2338 +
             C15105 * C1442 + C16837 + C16837 + C15102 * C1450) *
                C49425 +
            (C15109 * C3333 + C15964 + C15964 + C49428 * C3339 +
             C15107 * C2325 + C15963 + C15963 + C15103 * C2337 + C15105 * C693 +
             C15962 + C15962 + C15102 * C703) *
                C49445 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49457) *
               C49065 * C49422) *
              C49132 * C257 +
          (((C15550 + C15549 + C15548) * C49457 +
            (C15105 * C694 + C15965 + C15965 + C15102 * C704 + C15107 * C2327 +
             C15966 + C15966 + C15103 * C2339 + C15109 * C3334 + C15967 +
             C15967 + C49428 * C3340) *
                C49445 +
            (C15105 * C1441 + C16838 + C16838 + C15102 * C1449 +
             C15107 * C2328 + C16839 + C16839 + C15103 * C2340 +
             C15109 * C10249 + C16840 + C16840 + C49428 * C10253) *
                C49425) *
               C49065 * C49422 -
           ((C16688 + C16687 + C16686) * C49425 +
            (C15360 + C15361 + C15362) * C49445 +
            (C15165 + C15164 + C15163) * C49457) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C17770 * C115 + C17781 + C17781 + C17765 * C129 + C17772 * C395 +
            C17782 + C17782 + C17766 * C407 + C17774 * C944 + C17783 + C17783 +
            C17767 * C954 + C17776 * C2870 + C17784 + C17784 + C17768 * C2878 +
            C17778 * C3753 + C17785 + C17785 + C17769 * C3759) *
               C49161 * C49065 * C389 -
           (C17778 * C17972 + C17979 + C17979 + C17769 * C17976 +
            C17776 * C3753 + C17980 + C17980 + C17768 * C3759 + C17774 * C2870 +
            C17981 + C17981 + C17767 * C2878 + C17772 * C944 + C17982 + C17982 +
            C17766 * C954 + C17770 * C395 + C17983 + C17983 + C17765 * C407) *
               C49161 * C49065 * C49422) *
              C49132 * C257 +
          ((C17770 * C394 + C17984 + C17984 + C17765 * C406 + C17772 * C945 +
            C17985 + C17985 + C17766 * C955 + C17774 * C2869 + C17986 + C17986 +
            C17767 * C2877 + C17776 * C3754 + C17987 + C17987 + C17768 * C3760 +
            C17778 * C17973 + C17988 + C17988 + C17769 * C17977) *
               C49161 * C49065 * C49422 -
           (C17778 * C3754 + C17786 + C17786 + C17769 * C3760 + C17776 * C2869 +
            C17787 + C17787 + C17768 * C2877 + C17774 * C945 + C17788 + C17788 +
            C17767 * C955 + C17772 * C394 + C17789 + C17789 + C17766 * C406 +
            C17770 * C116 + C17790 + C17790 + C17765 * C130) *
               C49161 * C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[111] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
                C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                   C49149 * C521 -
               (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
                (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
                   C49149 * C49420) *
                  C523 +
              ((C307 * C103 + C306 * C104 + C305 * C105 + C304 * C106 +
                (C113 * C264 + C291 + C291 + C49178 * C276) * C49161 * C107) *
                   C49149 * C49420 -
               (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
                C169 * C103) *
                   C49149 * C521) *
                  C49418) +
         0.5 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
                 C1289 * C49445 + C1290 * C49425) *
                    C1077 +
                (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
                   C49149 * C521 -
               ((C1293 + C1272 + C1273) * C49414 +
                (C1294 + C1277 + C1278) * C1078 +
                ((C113 * C1254 + C1279 + C1279 + C49178 * C1262) * C49425 +
                 C1290 * C49445 + C1289 * C49457) *
                    C1077) *
                   C49149 * C49420) *
                  C523 +
              (((C1278 + C1277 + C1294) * C1077 +
                (C1273 + C1272 + C1293) * C1078 +
                (C301 * C49457 + C1102 * C49445 +
                 (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                    C49414) *
                   C49149 * C49420 -
               ((C1105 + C1091 + C1092) * C49414 +
                (C1104 + C1086 + C1085) * C1078 +
                (C1103 + C1082 + C1081) * C1077) *
                   C49149 * C521) *
                  C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C49161 * C1077 +
            (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
               C49149 * C521 -
           ((C2717 + C2718 + C2719) * C49161 * C49414 +
            (C2720 + C2721 + C2722) * C49161 * C1078 +
            (C2466 * C2325 + C2699 + C2699 + C49428 * C2337 + C2464 * C693 +
             C2700 + C2700 + C49447 * C703 + C2462 * C263 + C2701 + C2701 +
             C49458 * C275) *
                C49161 * C1077) *
               C49149 * C49420) *
              C523 +
          (((C2722 + C2721 + C2720) * C49161 * C1077 +
            (C2719 + C2718 + C2717) * C49161 * C1078 +
            (C2462 * C260 + C2702 + C2702 + C49458 * C272 + C2464 * C696 +
             C2703 + C2703 + C49447 * C706 + C2466 * C2677 + C2704 + C2704 +
             C49428 * C2679) *
                C49161 * C49414) *
               C49149 * C49420 -
           ((C2526 + C2527 + C2528) * C49161 * C49414 +
            (C2525 + C2524 + C2523) * C49161 * C1078 +
            (C2522 + C2521 + C2520) * C49161 * C1077) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C49149 * C521 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C49149 * C49420) *
              C523 +
          (((C8095 + C8094 + C8093) * C49454 +
            (C8092 + C8091 + C8090) * C49441 +
            (C301 * C7926 + C1102 * C7927 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C49149 * C521 -
           ((C113 * C9201 + C9210 + C9210 + C49178 * C9205) * C9117 +
            C9218 * C9116 + C1755 * C9115 + C1290 * C9114 + C1289 * C9113) *
               C49065 * C49149 * C49420) *
              C523 +
          ((C303 * C9113 + C1100 * C9114 + C1292 * C9115 + C9219 * C9116 +
            (C113 * C9202 + C9213 + C9213 + C49178 * C9206) * C9117) *
               C49065 * C49149 * C49420 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C7926 +
            (C10094 + C10095 + C10096) * C7927 +
            (C10097 + C10098 + C10099) * C49425) *
               C49065 * C49149 * C521 -
           ((C2466 * C9784 + C10064 + C10064 + C49428 * C9788 + C2464 * C1901 +
             C10065 + C10065 + C49447 * C1907 + C2462 * C1254 + C10066 +
             C10066 + C49458 * C1262) *
                C49425 +
            (C10099 + C10098 + C10097) * C7927 +
            (C10096 + C10095 + C10094) * C7926) *
               C49065 * C49149 * C49420) *
              C523 +
          (((C2722 + C2721 + C2720) * C7926 +
            (C10100 + C10101 + C10102) * C7927 +
            (C2462 * C1253 + C10073 + C10073 + C49458 * C1261 + C2464 * C1902 +
             C10074 + C10074 + C49447 * C1908 + C2466 * C10048 + C10075 +
             C10075 + C49428 * C10050) *
                C49425) *
               C49065 * C49149 * C49420 -
           ((C10102 + C10101 + C10100) * C49425 +
            (C2720 + C2721 + C2722) * C7927 + (C2522 + C2521 + C2520) * C7926) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49161 * C49454 +
            (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
               C49149 * C521 -
           ((C15357 + C15358 + C15359) * C49161 * C49414 +
            (C15360 + C15361 + C15362) * C49161 * C49441 +
            (C15109 * C2325 + C15339 + C15339 + C49428 * C2337 + C15107 * C693 +
             C15340 + C15340 + C15103 * C703 + C15105 * C263 + C15341 + C15341 +
             C15102 * C275) *
                C49161 * C49454) *
               C49149 * C49420) *
              C523 +
          (((C15362 + C15361 + C15360) * C49161 * C49454 +
            (C15359 + C15358 + C15357) * C49161 * C49441 +
            (C15105 * C260 + C15342 + C15342 + C15102 * C272 + C15107 * C696 +
             C15343 + C15343 + C15103 * C706 + C15109 * C2677 + C15344 +
             C15344 + C49428 * C2679) *
                C49161 * C49414) *
               C49149 * C49420 -
           ((C15169 + C15170 + C15171) * C49161 * C49414 +
            (C15168 + C15167 + C15166) * C49161 * C49441 +
            (C15165 + C15164 + C15163) * C49161 * C49454) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49457 +
            (C16680 + C16681 + C16682) * C49445 +
            (C16683 + C16684 + C16685) * C49425) *
               C49065 * C49149 * C521 -
           ((C15109 * C9784 + C16650 + C16650 + C49428 * C9788 +
             C15107 * C1901 + C16651 + C16651 + C15103 * C1907 +
             C15105 * C1254 + C16652 + C16652 + C15102 * C1262) *
                C49425 +
            (C16685 + C16684 + C16683) * C49445 +
            (C16682 + C16681 + C16680) * C49457) *
               C49065 * C49149 * C49420) *
              C523 +
          (((C15362 + C15361 + C15360) * C49457 +
            (C16686 + C16687 + C16688) * C49445 +
            (C15105 * C1253 + C16659 + C16659 + C15102 * C1261 +
             C15107 * C1902 + C16660 + C16660 + C15103 * C1908 +
             C15109 * C10048 + C16661 + C16661 + C49428 * C10050) *
                C49425) *
               C49065 * C49149 * C49420 -
           ((C16688 + C16687 + C16686) * C49425 +
            (C15360 + C15361 + C15362) * C49445 +
            (C15165 + C15164 + C15163) * C49457) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C17770 * C115 + C17781 + C17781 + C17765 * C129 + C17772 * C395 +
            C17782 + C17782 + C17766 * C407 + C17774 * C944 + C17783 + C17783 +
            C17767 * C954 + C17776 * C2870 + C17784 + C17784 + C17768 * C2878 +
            C17778 * C3753 + C17785 + C17785 + C17769 * C3759) *
               C49161 * C49065 * C49149 * C521 -
           (C17778 * C11120 + C17881 + C17881 + C17769 * C11124 +
            C17776 * C3333 + C17882 + C17882 + C17768 * C3339 + C17774 * C2325 +
            C17883 + C17883 + C17767 * C2337 + C17772 * C693 + C17884 + C17884 +
            C17766 * C703 + C17770 * C263 + C17885 + C17885 + C17765 * C275) *
               C49161 * C49065 * C49149 * C49420) *
              C523 +
          ((C17770 * C262 + C17886 + C17886 + C17765 * C274 + C17772 * C694 +
            C17887 + C17887 + C17766 * C704 + C17774 * C2327 + C17888 + C17888 +
            C17767 * C2339 + C17776 * C3334 + C17889 + C17889 + C17768 * C3340 +
            C17778 * C17877 + C17890 + C17890 + C17769 * C17879) *
               C49161 * C49065 * C49149 * C49420 -
           (C17778 * C3754 + C17786 + C17786 + C17769 * C3760 + C17776 * C2869 +
            C17787 + C17787 + C17768 * C2877 + C17774 * C945 + C17788 + C17788 +
            C17767 * C955 + C17772 * C394 + C17789 + C17789 + C17766 * C406 +
            C17770 * C116 + C17790 + C17790 + C17765 * C130) *
               C49161 * C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[112] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
               C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                  C49149 * C587 -
              (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
               (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
                  C49149 * C588 +
              ((C113 * C591 + C607 + C607 + C49178 * C601) * C49161 * C103 +
               (C113 * C592 + C608 + C608 + C49178 * C602) * C49161 * C104 +
               (C113 * C593 + C609 + C609 + C49178 * C603) * C49161 * C105 +
               (C113 * C594 + C610 + C610 + C49178 * C604) * C49161 * C106 +
               (C113 * C595 + C611 + C611 + C49178 * C605) * C49161 * C107) *
                  C49149 * C589) *
             C49098 +
         0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
                C1289 * C49445 + C1290 * C49425) *
                   C1077 +
               (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
                  C49149 * C587 -
              ((C1293 + C1272 + C1273) * C49414 +
               (C1294 + C1277 + C1278) * C1078 +
               (C1755 * C49425 + C1290 * C49445 + C1289 * C49457) * C1077) *
                  C49149 * C588 +
              ((C1290 * C49457 + C1755 * C49445 +
                (C113 * C1738 + C1750 + C1750 + C49178 * C1744) * C49425) *
                   C1077 +
               (C1100 * C49457 + C1292 * C49445 +
                (C113 * C1739 + C1751 + C1751 + C49178 * C1745) * C49425) *
                   C1078 +
               (C1101 * C49457 + C1291 * C49445 +
                (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49425) *
                   C49414) *
                  C49149 * C589) *
             C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
            C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
            C49428 * C954) *
               C49161 * C1077 +
           (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
              C49149 * C587 -
          ((C2717 + C2718 + C2719) * C49161 * C49414 +
           (C2720 + C2721 + C2722) * C49161 * C1078 +
           (C2466 * C2325 + C2699 + C2699 + C49428 * C2337 + C2464 * C693 +
            C2700 + C2700 + C49447 * C703 + C2462 * C263 + C2701 + C2701 +
            C49458 * C275) *
               C49161 * C1077) *
              C49149 * C588 +
          ((C2462 * C591 + C3179 + C3179 + C49458 * C601 + C2464 * C1442 +
            C3180 + C3180 + C49447 * C1450 + C2466 * C2326 + C3181 + C3181 +
            C49428 * C2338) *
               C49161 * C1077 +
           (C2462 * C592 + C3182 + C3182 + C49458 * C602 + C2464 * C1441 +
            C3183 + C3183 + C49447 * C1449 + C2466 * C2328 + C3184 + C3184 +
            C49428 * C2340) *
               C49161 * C1078 +
           (C2462 * C593 + C3185 + C3185 + C49458 * C603 + C2464 * C1440 +
            C3186 + C3186 + C49447 * C1448 + C2466 * C2330 + C3187 + C3187 +
            C49428 * C2342) *
               C49161 * C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
            C1289 * C7927 + C1290 * C49425) *
               C49454 +
           (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
              C49149 * C587 -
          ((C8090 + C8091 + C8092) * C49414 + (C8093 + C8094 + C8095) * C49441 +
           (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
              C49149 * C588 +
          ((C1290 * C7926 + C1755 * C7927 +
            (C113 * C1738 + C1750 + C1750 + C49178 * C1744) * C49425) *
               C49454 +
           (C1100 * C7926 + C1292 * C7927 +
            (C113 * C1739 + C1751 + C1751 + C49178 * C1745) * C49425) *
               C49441 +
           (C1101 * C7926 + C1291 * C7927 +
            (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49425) *
               C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 + C1289 * C9114 +
           C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
              C49065 * C49149 * C587 -
          (C9462 * C9117 + C9218 * C9116 + C1755 * C9115 + C1290 * C9114 +
           C1289 * C9113) *
              C49065 * C49149 * C588 +
          (C1290 * C9113 + C1755 * C9114 + C9218 * C9115 + C9462 * C9116 +
           (C113 * C9453 + C9459 + C9459 + C49178 * C9455) * C9117) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
            C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
            C49428 * C954) *
               C7926 +
           (C10094 + C10095 + C10096) * C7927 + C10527 * C49425) *
              C49065 * C49149 * C587 -
          ((C10534 + C10535 + C10536) * C49425 +
           (C10099 + C10098 + C10097) * C7927 +
           (C10096 + C10095 + C10094) * C7926) *
              C49065 * C49149 * C588 +
          (C10527 * C7926 + (C10536 + C10535 + C10534) * C7927 +
           (C2462 * C1738 + C10524 + C10524 + C49458 * C1744 + C2464 * C9301 +
            C10525 + C10525 + C49447 * C9305 + C2466 * C9785 + C10526 + C10526 +
            C49428 * C9789) *
               C49425) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
            C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
            C49428 * C954) *
               C49161 * C49454 +
           (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
              C49149 * C587 -
          ((C15357 + C15358 + C15359) * C49161 * C49414 +
           (C15360 + C15361 + C15362) * C49161 * C49441 +
           (C15109 * C2325 + C15339 + C15339 + C49428 * C2337 + C15107 * C693 +
            C15340 + C15340 + C15103 * C703 + C15105 * C263 + C15341 + C15341 +
            C15102 * C275) *
               C49161 * C49454) *
              C49149 * C588 +
          ((C15105 * C591 + C15807 + C15807 + C15102 * C601 + C15107 * C1442 +
            C15808 + C15808 + C15103 * C1450 + C15109 * C2326 + C15809 +
            C15809 + C49428 * C2338) *
               C49161 * C49454 +
           (C15105 * C592 + C15810 + C15810 + C15102 * C602 + C15107 * C1441 +
            C15811 + C15811 + C15103 * C1449 + C15109 * C2328 + C15812 +
            C15812 + C49428 * C2340) *
               C49161 * C49441 +
           (C15105 * C593 + C15813 + C15813 + C15102 * C603 + C15107 * C1440 +
            C15814 + C15814 + C15103 * C1448 + C15109 * C2330 + C15815 +
            C15815 + C49428 * C2342) *
               C49161 * C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
            C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
            C49428 * C954) *
               C49457 +
           (C16680 + C16681 + C16682) * C49445 + C17107 * C49425) *
              C49065 * C49149 * C587 -
          ((C17114 + C17115 + C17116) * C49425 +
           (C16685 + C16684 + C16683) * C49445 +
           (C16682 + C16681 + C16680) * C49457) *
              C49065 * C49149 * C588 +
          (C17107 * C49457 + (C17116 + C17115 + C17114) * C49445 +
           (C15105 * C1738 + C17104 + C17104 + C15102 * C1744 + C15107 * C9301 +
            C17105 + C17105 + C15103 * C9305 + C15109 * C9785 + C17106 +
            C17106 + C49428 * C9789) *
               C49425) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C17770 * C115 + C17781 + C17781 + C17765 * C129 + C17772 * C395 +
           C17782 + C17782 + C17766 * C407 + C17774 * C944 + C17783 + C17783 +
           C17767 * C954 + C17776 * C2870 + C17784 + C17784 + C17768 * C2878 +
           C17778 * C3753 + C17785 + C17785 + C17769 * C3759) *
              C49161 * C49065 * C49149 * C587 -
          (C17778 * C11120 + C17881 + C17881 + C17769 * C11124 +
           C17776 * C3333 + C17882 + C17882 + C17768 * C3339 + C17774 * C2325 +
           C17883 + C17883 + C17767 * C2337 + C17772 * C693 + C17884 + C17884 +
           C17766 * C703 + C17770 * C263 + C17885 + C17885 + C17765 * C275) *
              C49161 * C49065 * C49149 * C588 +
          (C17770 * C591 + C18133 + C18133 + C17765 * C601 + C17772 * C1442 +
           C18134 + C18134 + C17766 * C1450 + C17774 * C2326 + C18135 + C18135 +
           C17767 * C2338 + C17776 * C10248 + C18136 + C18136 +
           C17768 * C10252 + C17778 * C11121 + C18137 + C18137 +
           C17769 * C11125) *
              C49161 * C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[113] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
                C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                   C389 -
               (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
                (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
                   C49422) *
                  C521 +
              (((C113 * C693 + C709 + C709 + C49178 * C703) * C49161 * C103 +
                (C113 * C694 + C710 + C710 + C49178 * C704) * C49161 * C104 +
                (C113 * C695 + C711 + C711 + C49178 * C705) * C49161 * C105 +
                (C113 * C696 + C712 + C712 + C49178 * C706) * C49161 * C106 +
                (C113 * C697 + C713 + C713 + C49178 * C707) * C49161 * C107) *
                   C49422 -
               (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
                (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
                   C389) *
                  C49420) *
             C49098 +
         0.5 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
                 C1289 * C49445 + C1290 * C49425) *
                    C1077 +
                (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
                   C389 -
               ((C1479 + C1480 + C1458) * C49414 +
                (C1481 + C1482 + C1464) * C1078 +
                (C1922 * C49425 + C1923 * C49445 +
                 (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                    C1077) *
                   C49422) *
                  C521 +
              (((C1923 * C49457 + C1922 * C49445 +
                 (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                    C1077 +
                (C1478 * C49457 + C1477 * C49445 +
                 (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                    C1078 +
                (C1476 * C49457 + C1475 * C49445 +
                 (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                    C49414) *
                   C49422 -
               ((C1293 + C1272 + C1273) * C49414 +
                (C1294 + C1277 + C1278) * C1078 +
                (C1755 * C49425 + C1290 * C49445 + C1289 * C49457) * C1077) *
                   C389) *
                  C49420) *
             C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C49161 * C1077 +
            (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
               C389 -
           ((C2917 + C2918 + C2919) * C49161 * C49414 +
            (C2920 + C2921 + C2922) * C49161 * C1078 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C49161 * C1077) *
               C49422) *
              C521 +
          (((C2462 * C693 + C3343 + C3343 + C49458 * C703 + C2464 * C2325 +
             C3344 + C3344 + C49447 * C2337 + C2466 * C3333 + C3345 + C3345 +
             C49428 * C3339) *
                C49161 * C1077 +
            (C2462 * C694 + C3346 + C3346 + C49458 * C704 + C2464 * C2327 +
             C3347 + C3347 + C49447 * C2339 + C2466 * C3334 + C3348 + C3348 +
             C49428 * C3340) *
                C49161 * C1078 +
            (C2462 * C695 + C3349 + C3349 + C49458 * C705 + C2464 * C2329 +
             C3350 + C3350 + C49447 * C2341 + C2466 * C3335 + C3351 + C3351 +
             C49428 * C3341) *
                C49161 * C49414) *
               C49422 -
           ((C2717 + C2718 + C2719) * C49161 * C49414 +
            (C2720 + C2721 + C2722) * C49161 * C1078 +
            (C2466 * C2325 + C2699 + C2699 + C49428 * C2337 + C2464 * C693 +
             C2700 + C2700 + C49447 * C703 + C2462 * C263 + C2701 + C2701 +
             C49458 * C275) *
                C49161 * C1077) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C389 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C521 +
          (((C1923 * C7926 + C1922 * C7927 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C49454 +
            (C1478 * C7926 + C1477 * C7927 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C49441 +
            (C1476 * C7926 + C1475 * C7927 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C389 -
           (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C521 +
          ((C1923 * C9113 + C1922 * C9114 + C9558 * C9115 + C9557 * C9116 +
            (C113 * C9544 + C9552 + C9552 + C49178 * C9546) * C9117) *
               C49065 * C49422 -
           (C9462 * C9117 + C9218 * C9116 + C1755 * C9115 + C1290 * C9114 +
            C1289 * C9113) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C7926 +
            (C10094 + C10095 + C10096) * C7927 + C10527 * C49425) *
               C49065 * C389 -
           ((C10713 + C10714 + C10715) * C49425 +
            (C10716 + C10717 + C10718) * C7927 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C7926) *
               C49065 * C49422) *
              C521 +
          (((C10718 + C10717 + C10716) * C7926 +
            (C10715 + C10714 + C10713) * C7927 +
            (C2462 * C1901 + C10698 + C10698 + C49458 * C1907 + C2464 * C9784 +
             C10699 + C10699 + C49447 * C9788 + C2466 * C10682 + C10700 +
             C10700 + C49428 * C10684) *
                C49425) *
               C49065 * C49422 -
           ((C10534 + C10535 + C10536) * C49425 +
            (C10099 + C10098 + C10097) * C7927 +
            (C10096 + C10095 + C10094) * C7926) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49161 * C49454 +
            (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
               C389 -
           ((C15545 + C15546 + C15547) * C49161 * C49414 +
            (C15548 + C15549 + C15550) * C49161 * C49441 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49161 * C49454) *
               C49422) *
              C521 +
          (((C15105 * C693 + C15962 + C15962 + C15102 * C703 + C15107 * C2325 +
             C15963 + C15963 + C15103 * C2337 + C15109 * C3333 + C15964 +
             C15964 + C49428 * C3339) *
                C49161 * C49454 +
            (C15105 * C694 + C15965 + C15965 + C15102 * C704 + C15107 * C2327 +
             C15966 + C15966 + C15103 * C2339 + C15109 * C3334 + C15967 +
             C15967 + C49428 * C3340) *
                C49161 * C49441 +
            (C15105 * C695 + C15968 + C15968 + C15102 * C705 + C15107 * C2329 +
             C15969 + C15969 + C15103 * C2341 + C15109 * C3335 + C15970 +
             C15970 + C49428 * C3341) *
                C49161 * C49414) *
               C49422 -
           ((C15357 + C15358 + C15359) * C49161 * C49414 +
            (C15360 + C15361 + C15362) * C49161 * C49441 +
            (C15109 * C2325 + C15339 + C15339 + C49428 * C2337 + C15107 * C693 +
             C15340 + C15340 + C15103 * C703 + C15105 * C263 + C15341 + C15341 +
             C15102 * C275) *
                C49161 * C49454) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49457 +
            (C16680 + C16681 + C16682) * C49445 + C17107 * C49425) *
               C49065 * C389 -
           ((C17290 + C17291 + C17292) * C49425 +
            (C17293 + C17294 + C17295) * C49445 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49457) *
               C49065 * C49422) *
              C521 +
          (((C17295 + C17294 + C17293) * C49457 +
            (C17292 + C17291 + C17290) * C49445 +
            (C15105 * C1901 + C17275 + C17275 + C15102 * C1907 +
             C15107 * C9784 + C17276 + C17276 + C15103 * C9788 +
             C15109 * C10682 + C17277 + C17277 + C49428 * C10684) *
                C49425) *
               C49065 * C49422 -
           ((C17114 + C17115 + C17116) * C49425 +
            (C16685 + C16684 + C16683) * C49445 +
            (C16682 + C16681 + C16680) * C49457) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C17770 * C115 + C17781 + C17781 + C17765 * C129 + C17772 * C395 +
            C17782 + C17782 + C17766 * C407 + C17774 * C944 + C17783 + C17783 +
            C17767 * C954 + C17776 * C2870 + C17784 + C17784 + C17768 * C2878 +
            C17778 * C3753 + C17785 + C17785 + C17769 * C3759) *
               C49161 * C49065 * C389 -
           (C17778 * C17972 + C17979 + C17979 + C17769 * C17976 +
            C17776 * C3753 + C17980 + C17980 + C17768 * C3759 + C17774 * C2870 +
            C17981 + C17981 + C17767 * C2878 + C17772 * C944 + C17982 + C17982 +
            C17766 * C954 + C17770 * C395 + C17983 + C17983 + C17765 * C407) *
               C49161 * C49065 * C49422) *
              C521 +
          ((C17770 * C693 + C18223 + C18223 + C17765 * C703 + C17772 * C2325 +
            C18224 + C18224 + C17766 * C2337 + C17774 * C3333 + C18225 +
            C18225 + C17767 * C3339 + C17776 * C11120 + C18226 + C18226 +
            C17768 * C11124 + C17778 * C18219 + C18227 + C18227 +
            C17769 * C18221) *
               C49161 * C49065 * C49422 -
           (C17778 * C11120 + C17881 + C17881 + C17769 * C11124 +
            C17776 * C3333 + C17882 + C17882 + C17768 * C3339 + C17774 * C2325 +
            C17883 + C17883 + C17767 * C2337 + C17772 * C693 + C17884 + C17884 +
            C17766 * C703 + C17770 * C263 + C17885 + C17885 + C17765 * C275) *
               C49161 * C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[114] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
                C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                   C795 -
               (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
                (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
                   C49422) *
                  C49132 * C523 +
              ((C439 * C103 + C438 * C104 + C437 * C105 + C436 * C106 +
                (C113 * C396 + C423 + C423 + C49178 * C408) * C49161 * C107) *
                   C49422 -
               (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
                C169 * C103) *
                   C795) *
                  C49132 * C49418) +
         0.5 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
                 C1289 * C49445 + C1290 * C49425) *
                    C1077 +
                (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
                   C795 -
               ((C1479 + C1480 + C1458) * C49414 +
                (C1481 + C1482 + C1464) * C1078 +
                (C1922 * C49425 + C1923 * C49445 +
                 (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                    C1077) *
                   C49422) *
                  C49132 * C523 +
              (((C1464 + C1482 + C1481) * C1077 +
                (C1458 + C1480 + C1479) * C1078 +
                (C433 * C49457 +
                 (C113 * C696 + C712 + C712 + C49178 * C706) * C49445 +
                 (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                    C49414) *
                   C49422 -
               ((C1105 + C1091 + C1092) * C49414 +
                (C1104 + C1086 + C1085) * C1078 +
                (C1103 + C1082 + C1081) * C1077) *
                   C795) *
                  C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C49161 * C1077 +
            (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
               C795 -
           ((C2917 + C2918 + C2919) * C49161 * C49414 +
            (C2920 + C2921 + C2922) * C49161 * C1078 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C49161 * C1077) *
               C49422) *
              C49132 * C523 +
          (((C2922 + C2921 + C2920) * C49161 * C1077 +
            (C2919 + C2918 + C2917) * C49161 * C1078 +
            (C2462 * C392 + C2902 + C2902 + C49458 * C404 + C2464 * C947 +
             C2903 + C2903 + C49447 * C957 + C2466 * C2871 + C2904 + C2904 +
             C49428 * C2879) *
                C49161 * C49414) *
               C49422 -
           ((C2526 + C2527 + C2528) * C49161 * C49414 +
            (C2525 + C2524 + C2523) * C49161 * C1078 +
            (C2522 + C2521 + C2520) * C49161 * C1077) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C795 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C49132 * C523 +
          (((C8247 + C8246 + C8245) * C49454 +
            (C8244 + C8243 + C8242) * C49441 +
            (C433 * C7926 + C4161 * C7927 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C795 -
           (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C49132 * C523 +
          ((C435 * C9113 + C1478 * C9114 + C1477 * C9115 +
            (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C9116 +
            (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C9117) *
               C49065 * C49422 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C7926 +
            (C10094 + C10095 + C10096) * C7927 + C10527 * C49425) *
               C49065 * C795 -
           ((C10713 + C10714 + C10715) * C49425 +
            (C10716 + C10717 + C10718) * C7927 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C7926) *
               C49065 * C49422) *
              C49132 * C523 +
          (((C2922 + C2921 + C2920) * C7926 +
            (C2462 * C694 + C3346 + C3346 + C49458 * C704 + C2464 * C2327 +
             C3347 + C3347 + C49447 * C2339 + C2466 * C3334 + C3348 + C3348 +
             C49428 * C3340) *
                C7927 +
            (C2462 * C1441 + C10258 + C10258 + C49458 * C1449 + C2464 * C2328 +
             C10259 + C10259 + C49447 * C2340 + C2466 * C10249 + C10260 +
             C10260 + C49428 * C10253) *
                C49425) *
               C49065 * C49422 -
           ((C10102 + C10101 + C10100) * C49425 +
            (C2720 + C2721 + C2722) * C7927 + (C2522 + C2521 + C2520) * C7926) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49161 * C49454 +
            (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
               C795 -
           ((C15545 + C15546 + C15547) * C49161 * C49414 +
            (C15548 + C15549 + C15550) * C49161 * C49441 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49161 * C49454) *
               C49422) *
              C49132 * C523 +
          (((C15550 + C15549 + C15548) * C49161 * C49454 +
            (C15547 + C15546 + C15545) * C49161 * C49441 +
            (C15105 * C392 + C15530 + C15530 + C15102 * C404 + C15107 * C947 +
             C15531 + C15531 + C15103 * C957 + C15109 * C2871 + C15532 +
             C15532 + C49428 * C2879) *
                C49161 * C49414) *
               C49422 -
           ((C15169 + C15170 + C15171) * C49161 * C49414 +
            (C15168 + C15167 + C15166) * C49161 * C49441 +
            (C15165 + C15164 + C15163) * C49161 * C49454) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49457 +
            (C16680 + C16681 + C16682) * C49445 + C17107 * C49425) *
               C49065 * C795 -
           ((C17290 + C17291 + C17292) * C49425 +
            (C17293 + C17294 + C17295) * C49445 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49457) *
               C49065 * C49422) *
              C49132 * C523 +
          (((C15550 + C15549 + C15548) * C49457 +
            (C15105 * C694 + C15965 + C15965 + C15102 * C704 + C15107 * C2327 +
             C15966 + C15966 + C15103 * C2339 + C15109 * C3334 + C15967 +
             C15967 + C49428 * C3340) *
                C49445 +
            (C15105 * C1441 + C16838 + C16838 + C15102 * C1449 +
             C15107 * C2328 + C16839 + C16839 + C15103 * C2340 +
             C15109 * C10249 + C16840 + C16840 + C49428 * C10253) *
                C49425) *
               C49065 * C49422 -
           ((C16688 + C16687 + C16686) * C49425 +
            (C15360 + C15361 + C15362) * C49445 +
            (C15165 + C15164 + C15163) * C49457) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C17770 * C115 + C17781 + C17781 + C17765 * C129 + C17772 * C395 +
            C17782 + C17782 + C17766 * C407 + C17774 * C944 + C17783 + C17783 +
            C17767 * C954 + C17776 * C2870 + C17784 + C17784 + C17768 * C2878 +
            C17778 * C3753 + C17785 + C17785 + C17769 * C3759) *
               C49161 * C49065 * C795 -
           (C17778 * C17972 + C17979 + C17979 + C17769 * C17976 +
            C17776 * C3753 + C17980 + C17980 + C17768 * C3759 + C17774 * C2870 +
            C17981 + C17981 + C17767 * C2878 + C17772 * C944 + C17982 + C17982 +
            C17766 * C954 + C17770 * C395 + C17983 + C17983 + C17765 * C407) *
               C49161 * C49065 * C49422) *
              C49132 * C523 +
          ((C17770 * C394 + C17984 + C17984 + C17765 * C406 + C17772 * C945 +
            C17985 + C17985 + C17766 * C955 + C17774 * C2869 + C17986 + C17986 +
            C17767 * C2877 + C17776 * C3754 + C17987 + C17987 + C17768 * C3760 +
            C17778 * C17973 + C17988 + C17988 + C17769 * C17977) *
               C49161 * C49065 * C49422 -
           (C17778 * C3754 + C17786 + C17786 + C17769 * C3760 + C17776 * C2869 +
            C17787 + C17787 + C17768 * C2877 + C17774 * C945 + C17788 + C17788 +
            C17767 * C955 + C17772 * C394 + C17789 + C17789 + C17766 * C406 +
            C17770 * C116 + C17790 + C17790 + C17765 * C130) *
               C49161 * C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[115] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
                C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                   C795 -
               (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
                (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
                   C49422) *
                  C255 +
              (((C113 * C693 + C709 + C709 + C49178 * C703) * C49161 * C103 +
                (C113 * C694 + C710 + C710 + C49178 * C704) * C49161 * C104 +
                (C113 * C695 + C711 + C711 + C49178 * C705) * C49161 * C105 +
                (C113 * C696 + C712 + C712 + C49178 * C706) * C49161 * C106 +
                (C113 * C697 + C713 + C713 + C49178 * C707) * C49161 * C107) *
                   C49422 -
               (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
                (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
                   C795) *
                  C49420) *
             C49098 +
         0.5 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
                 C1289 * C49445 + C1290 * C49425) *
                    C1077 +
                (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
                   C795 -
               ((C1479 + C1480 + C1458) * C49414 +
                (C1481 + C1482 + C1464) * C1078 +
                (C1922 * C49425 + C1923 * C49445 +
                 (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                    C1077) *
                   C49422) *
                  C255 +
              (((C1923 * C49457 + C1922 * C49445 +
                 (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                    C1077 +
                (C1478 * C49457 + C1477 * C49445 +
                 (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                    C1078 +
                (C1476 * C49457 + C1475 * C49445 +
                 (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                    C49414) *
                   C49422 -
               ((C1293 + C1272 + C1273) * C49414 +
                (C1294 + C1277 + C1278) * C1078 +
                (C1755 * C49425 + C1290 * C49445 + C1289 * C49457) * C1077) *
                   C795) *
                  C49420) *
             C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C49161 * C1077 +
            (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
               C795 -
           ((C2917 + C2918 + C2919) * C49161 * C49414 +
            (C2920 + C2921 + C2922) * C49161 * C1078 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C49161 * C1077) *
               C49422) *
              C255 +
          (((C2462 * C693 + C3343 + C3343 + C49458 * C703 + C2464 * C2325 +
             C3344 + C3344 + C49447 * C2337 + C2466 * C3333 + C3345 + C3345 +
             C49428 * C3339) *
                C49161 * C1077 +
            (C2462 * C694 + C3346 + C3346 + C49458 * C704 + C2464 * C2327 +
             C3347 + C3347 + C49447 * C2339 + C2466 * C3334 + C3348 + C3348 +
             C49428 * C3340) *
                C49161 * C1078 +
            (C2462 * C695 + C3349 + C3349 + C49458 * C705 + C2464 * C2329 +
             C3350 + C3350 + C49447 * C2341 + C2466 * C3335 + C3351 + C3351 +
             C49428 * C3341) *
                C49161 * C49414) *
               C49422 -
           ((C2717 + C2718 + C2719) * C49161 * C49414 +
            (C2720 + C2721 + C2722) * C49161 * C1078 +
            (C2466 * C2325 + C2699 + C2699 + C49428 * C2337 + C2464 * C693 +
             C2700 + C2700 + C49447 * C703 + C2462 * C263 + C2701 + C2701 +
             C49458 * C275) *
                C49161 * C1077) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C795 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C255 +
          (((C1923 * C7926 + C1922 * C7927 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C49454 +
            (C1478 * C7926 + C1477 * C7927 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C49441 +
            (C1476 * C7926 + C1475 * C7927 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C795 -
           (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C255 +
          ((C1923 * C9113 + C1922 * C9114 + C9558 * C9115 + C9557 * C9116 +
            (C113 * C9544 + C9552 + C9552 + C49178 * C9546) * C9117) *
               C49065 * C49422 -
           (C9462 * C9117 + C9218 * C9116 + C1755 * C9115 + C1290 * C9114 +
            C1289 * C9113) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C7926 +
            (C10094 + C10095 + C10096) * C7927 + C10527 * C49425) *
               C49065 * C795 -
           ((C10713 + C10714 + C10715) * C49425 +
            (C10716 + C10717 + C10718) * C7927 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C7926) *
               C49065 * C49422) *
              C255 +
          (((C10718 + C10717 + C10716) * C7926 +
            (C10715 + C10714 + C10713) * C7927 +
            (C2462 * C1901 + C10698 + C10698 + C49458 * C1907 + C2464 * C9784 +
             C10699 + C10699 + C49447 * C9788 + C2466 * C10682 + C10700 +
             C10700 + C49428 * C10684) *
                C49425) *
               C49065 * C49422 -
           ((C10534 + C10535 + C10536) * C49425 +
            (C10099 + C10098 + C10097) * C7927 +
            (C10096 + C10095 + C10094) * C7926) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49161 * C49454 +
            (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
               C795 -
           ((C15545 + C15546 + C15547) * C49161 * C49414 +
            (C15548 + C15549 + C15550) * C49161 * C49441 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49161 * C49454) *
               C49422) *
              C255 +
          (((C15105 * C693 + C15962 + C15962 + C15102 * C703 + C15107 * C2325 +
             C15963 + C15963 + C15103 * C2337 + C15109 * C3333 + C15964 +
             C15964 + C49428 * C3339) *
                C49161 * C49454 +
            (C15105 * C694 + C15965 + C15965 + C15102 * C704 + C15107 * C2327 +
             C15966 + C15966 + C15103 * C2339 + C15109 * C3334 + C15967 +
             C15967 + C49428 * C3340) *
                C49161 * C49441 +
            (C15105 * C695 + C15968 + C15968 + C15102 * C705 + C15107 * C2329 +
             C15969 + C15969 + C15103 * C2341 + C15109 * C3335 + C15970 +
             C15970 + C49428 * C3341) *
                C49161 * C49414) *
               C49422 -
           ((C15357 + C15358 + C15359) * C49161 * C49414 +
            (C15360 + C15361 + C15362) * C49161 * C49441 +
            (C15109 * C2325 + C15339 + C15339 + C49428 * C2337 + C15107 * C693 +
             C15340 + C15340 + C15103 * C703 + C15105 * C263 + C15341 + C15341 +
             C15102 * C275) *
                C49161 * C49454) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49457 +
            (C16680 + C16681 + C16682) * C49445 + C17107 * C49425) *
               C49065 * C795 -
           ((C17290 + C17291 + C17292) * C49425 +
            (C17293 + C17294 + C17295) * C49445 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49457) *
               C49065 * C49422) *
              C255 +
          (((C17295 + C17294 + C17293) * C49457 +
            (C17292 + C17291 + C17290) * C49445 +
            (C15105 * C1901 + C17275 + C17275 + C15102 * C1907 +
             C15107 * C9784 + C17276 + C17276 + C15103 * C9788 +
             C15109 * C10682 + C17277 + C17277 + C49428 * C10684) *
                C49425) *
               C49065 * C49422 -
           ((C17114 + C17115 + C17116) * C49425 +
            (C16685 + C16684 + C16683) * C49445 +
            (C16682 + C16681 + C16680) * C49457) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C17770 * C115 + C17781 + C17781 + C17765 * C129 + C17772 * C395 +
            C17782 + C17782 + C17766 * C407 + C17774 * C944 + C17783 + C17783 +
            C17767 * C954 + C17776 * C2870 + C17784 + C17784 + C17768 * C2878 +
            C17778 * C3753 + C17785 + C17785 + C17769 * C3759) *
               C49161 * C49065 * C795 -
           (C17778 * C17972 + C17979 + C17979 + C17769 * C17976 +
            C17776 * C3753 + C17980 + C17980 + C17768 * C3759 + C17774 * C2870 +
            C17981 + C17981 + C17767 * C2878 + C17772 * C944 + C17982 + C17982 +
            C17766 * C954 + C17770 * C395 + C17983 + C17983 + C17765 * C407) *
               C49161 * C49065 * C49422) *
              C255 +
          ((C17770 * C693 + C18223 + C18223 + C17765 * C703 + C17772 * C2325 +
            C18224 + C18224 + C17766 * C2337 + C17774 * C3333 + C18225 +
            C18225 + C17767 * C3339 + C17776 * C11120 + C18226 + C18226 +
            C17768 * C11124 + C17778 * C18219 + C18227 + C18227 +
            C17769 * C18221) *
               C49161 * C49065 * C49422 -
           (C17778 * C11120 + C17881 + C17881 + C17769 * C11124 +
            C17776 * C3333 + C17882 + C17882 + C17768 * C3339 + C17774 * C2325 +
            C17883 + C17883 + C17767 * C2337 + C17772 * C693 + C17884 + C17884 +
            C17766 * C703 + C17770 * C263 + C17885 + C17885 + C17765 * C275) *
               C49161 * C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[116] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
               C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                  C941 -
              (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
               (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
                  C942 +
              ((C113 * C944 + C960 + C960 + C49178 * C954) * C49161 * C103 +
               (C113 * C945 + C961 + C961 + C49178 * C955) * C49161 * C104 +
               (C113 * C946 + C962 + C962 + C49178 * C956) * C49161 * C105 +
               (C113 * C947 + C963 + C963 + C49178 * C957) * C49161 * C106 +
               (C113 * C948 + C964 + C964 + C49178 * C958) * C49161 * C107) *
                  C943) *
             C49132 * C49098 +
         0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
                C1289 * C49445 + C1290 * C49425) *
                   C1077 +
               (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
                  C941 -
              ((C1479 + C1480 + C1458) * C49414 +
               (C1481 + C1482 + C1464) * C1078 +
               (C1922 * C49425 + C1923 * C49445 +
                (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                   C1077) *
                  C942 +
              (((C113 * C944 + C960 + C960 + C49178 * C954) * C49457 +
                (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C49445 +
                (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C49425) *
                   C1077 +
               ((C113 * C945 + C961 + C961 + C49178 * C955) * C49457 +
                (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C49445 +
                (C113 * C2328 + C2347 + C2347 + C49178 * C2340) * C49425) *
                   C1078 +
               ((C113 * C946 + C962 + C962 + C49178 * C956) * C49457 +
                (C113 * C2329 + C2348 + C2348 + C49178 * C2341) * C49445 +
                (C113 * C2330 + C2349 + C2349 + C49178 * C2342) * C49425) *
                   C49414) *
                  C943) *
             C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
            C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
            C49428 * C954) *
               C49161 * C1077 +
           (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
              C941 -
          ((C2917 + C2918 + C2919) * C49161 * C49414 +
           (C2920 + C2921 + C2922) * C49161 * C1078 +
           (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
            C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
            C49458 * C407) *
               C49161 * C1077) *
              C942 +
          ((C2462 * C944 + C3763 + C3763 + C49458 * C954 + C2464 * C2870 +
            C3764 + C3764 + C49447 * C2878 + C2466 * C3753 + C3765 + C3765 +
            C49428 * C3759) *
               C49161 * C1077 +
           (C2462 * C945 + C3766 + C3766 + C49458 * C955 + C2464 * C2869 +
            C3767 + C3767 + C49447 * C2877 + C2466 * C3754 + C3768 + C3768 +
            C49428 * C3760) *
               C49161 * C1078 +
           (C2462 * C946 + C3769 + C3769 + C49458 * C956 + C2464 * C2868 +
            C3770 + C3770 + C49447 * C2876 + C2466 * C3755 + C3771 + C3771 +
            C49428 * C3761) *
               C49161 * C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
            C1289 * C7927 + C1290 * C49425) *
               C49454 +
           (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
              C941 -
          ((C8242 + C8243 + C8244) * C49414 + (C8245 + C8246 + C8247) * C49441 +
           (C1922 * C49425 + C1923 * C7927 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
               C49454) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C7926 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C7927 +
            (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C49425) *
               C49454 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C7926 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C7927 +
            (C113 * C2328 + C2347 + C2347 + C49178 * C2340) * C49425) *
               C49441 +
           ((C113 * C946 + C962 + C962 + C49178 * C956) * C7926 +
            (C113 * C2329 + C2348 + C2348 + C49178 * C2341) * C7927 +
            (C113 * C2330 + C2349 + C2349 + C49178 * C2342) * C49425) *
               C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 + C1289 * C9114 +
           C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
              C49065 * C941 -
          (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
           (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
              C49065 * C942 +
          ((C113 * C944 + C960 + C960 + C49178 * C954) * C9113 +
           (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C9114 +
           (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C9115 +
           (C113 * C9784 + C9791 + C9791 + C49178 * C9788) * C9116 +
           (C113 * C9785 + C9792 + C9792 + C49178 * C9789) * C9117) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
            C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
            C49428 * C954) *
               C7926 +
           (C10094 + C10095 + C10096) * C7927 + C10527 * C49425) *
              C49065 * C941 -
          ((C10713 + C10714 + C10715) * C49425 +
           (C10716 + C10717 + C10718) * C7927 +
           (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
            C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
            C49458 * C407) *
               C7926) *
              C49065 * C942 +
          ((C2462 * C944 + C3763 + C3763 + C49458 * C954 + C2464 * C2870 +
            C3764 + C3764 + C49447 * C2878 + C2466 * C3753 + C3765 + C3765 +
            C49428 * C3759) *
               C7926 +
           (C2462 * C2325 + C11127 + C11127 + C49458 * C2337 + C2464 * C3333 +
            C11128 + C11128 + C49447 * C3339 + C2466 * C11120 + C11129 +
            C11129 + C49428 * C11124) *
               C7927 +
           (C2462 * C2326 + C11130 + C11130 + C49458 * C2338 + C2464 * C10248 +
            C11131 + C11131 + C49447 * C10252 + C2466 * C11121 + C11132 +
            C11132 + C49428 * C11125) *
               C49425) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
            C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
            C49428 * C954) *
               C49161 * C49454 +
           (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
              C941 -
          ((C15545 + C15546 + C15547) * C49161 * C49414 +
           (C15548 + C15549 + C15550) * C49161 * C49441 +
           (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
            C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
            C15102 * C407) *
               C49161 * C49454) *
              C942 +
          ((C15105 * C944 + C16373 + C16373 + C15102 * C954 + C15107 * C2870 +
            C16374 + C16374 + C15103 * C2878 + C15109 * C3753 + C16375 +
            C16375 + C49428 * C3759) *
               C49161 * C49454 +
           (C15105 * C945 + C16376 + C16376 + C15102 * C955 + C15107 * C2869 +
            C16377 + C16377 + C15103 * C2877 + C15109 * C3754 + C16378 +
            C16378 + C49428 * C3760) *
               C49161 * C49441 +
           (C15105 * C946 + C16379 + C16379 + C15102 * C956 + C15107 * C2868 +
            C16380 + C16380 + C15103 * C2876 + C15109 * C3755 + C16381 +
            C16381 + C49428 * C3761) *
               C49161 * C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
            C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
            C49428 * C954) *
               C49457 +
           (C16680 + C16681 + C16682) * C49445 + C17107 * C49425) *
              C49065 * C941 -
          ((C17290 + C17291 + C17292) * C49425 +
           (C17293 + C17294 + C17295) * C49445 +
           (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
            C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
            C15102 * C407) *
               C49457) *
              C49065 * C942 +
          ((C15105 * C944 + C16373 + C16373 + C15102 * C954 + C15107 * C2870 +
            C16374 + C16374 + C15103 * C2878 + C15109 * C3753 + C16375 +
            C16375 + C49428 * C3759) *
               C49457 +
           (C15105 * C2325 + C17698 + C17698 + C15102 * C2337 + C15107 * C3333 +
            C17699 + C17699 + C15103 * C3339 + C15109 * C11120 + C17700 +
            C17700 + C49428 * C11124) *
               C49445 +
           (C15105 * C2326 + C17701 + C17701 + C15102 * C2338 +
            C15107 * C10248 + C17702 + C17702 + C15103 * C10252 +
            C15109 * C11121 + C17703 + C17703 + C49428 * C11125) *
               C49425) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C17770 * C115 + C17781 + C17781 + C17765 * C129 + C17772 * C395 +
           C17782 + C17782 + C17766 * C407 + C17774 * C944 + C17783 + C17783 +
           C17767 * C954 + C17776 * C2870 + C17784 + C17784 + C17768 * C2878 +
           C17778 * C3753 + C17785 + C17785 + C17769 * C3759) *
              C49161 * C49065 * C941 -
          (C17778 * C17972 + C17979 + C17979 + C17769 * C17976 +
           C17776 * C3753 + C17980 + C17980 + C17768 * C3759 + C17774 * C2870 +
           C17981 + C17981 + C17767 * C2878 + C17772 * C944 + C17982 + C17982 +
           C17766 * C954 + C17770 * C395 + C17983 + C17983 + C17765 * C407) *
              C49161 * C49065 * C942 +
          (C17770 * C944 + C18457 + C18457 + C17765 * C954 + C17772 * C2870 +
           C18458 + C18458 + C17766 * C2878 + C17774 * C3753 + C18459 + C18459 +
           C17767 * C3759 + C17776 * C17972 + C18460 + C18460 +
           C17768 * C17976 + C17778 * C18453 + C18461 + C18461 +
           C17769 * C18455) *
              C49161 * C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[117] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C7926 +
            (C6491 + C6492) * C7927 + (C7066 + C7065) * C49425) *
               C49370 +
           ((C5028 + C5029) * C7926 + C6468 * C7927 +
            (C6496 + C6495) * C49425) *
               C49075) *
              C49149 * C49132 * C110 -
          (((C6493 + C6494) * C49425 + C6473 * C7927 +
            (C5031 + C5030) * C7926) *
               C49075 +
           ((C6495 + C6496) * C49425 + C6478 * C7927 +
            (C5029 + C5028) * C7926) *
               C49370) *
              C49149 * C49132 * C111 +
          ((C5036 * C7926 + C6267 * C7927 + (C6494 + C6493) * C49425) * C49370 +
           (C5037 * C7926 + (C5205 + C5204) * C7927 +
            (C4979 * C594 + C5614 + C5614 + C49393 * C604 + C4981 * C1443 +
             C5615 + C5615 + C49265 * C1451) *
                C49425) *
               C49075) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
            C4985 + C4985 + C49265 * C407) *
               C49161 * C3871 +
           (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
              C49149 * C49132 * C110 -
          ((C5034 + C5035) * C49161 * C49392 +
           (C5033 + C5032) * C49161 * C3873 + (C5031 + C5030) * C49161 * C3872 +
           (C5029 + C5028) * C49161 * C3871) *
              C49149 * C49132 * C111 +
          (C5038 * C3871 + C5039 * C3872 + (C5035 + C5034) * C49161 * C3873 +
           (C4979 * C120 + C5010 + C5010 + C49393 * C134 + C4981 * C396 +
            C5011 + C5011 + C49265 * C408) *
               C49161 * C49392) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
            C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
            C20185 * C954 + C20193 * C2870 + C20199 + C20199 + C49407 * C2878) *
               C49161 * C49370 +
           (C20244 + C20245 + C20246 + C20247) * C49161 * C49075) *
              C49149 * C49132 * C110 -
          ((C20248 + C20249 + C20250 + C20251) * C49161 * C49075 +
           (C20247 + C20246 + C20245 + C20244) * C49161 * C49370) *
              C49149 * C49132 * C111 +
          ((C20251 + C20250 + C20249 + C20248) * C49161 * C49370 +
           (C20187 * C118 + C20224 + C20224 + C20183 * C132 + C20189 * C392 +
            C20225 + C20225 + C20184 * C404 + C20191 * C947 + C20226 + C20226 +
            C20185 * C957 + C20193 * C2871 + C20227 + C20227 + C49407 * C2879) *
               C49161 * C49075) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[118] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C7926 +
             (C6491 + C6492) * C7927 + (C7066 + C7065) * C49425) *
                C49370 +
            ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
                C49075) *
               C49149 * C255 -
           (((C12585 + C12586) * C49425 + C12580 * C7927 + C6478 * C7926) *
                C49075 +
            ((C4981 * C1901 + C7056 + C7056 + C49265 * C1907 + C4979 * C1254 +
              C7055 + C7055 + C49393 * C1262) *
                 C49425 +
             (C7065 + C7066) * C7927 + (C6492 + C6491) * C7926) *
                C49370) *
               C49149 * C49420) *
              C257 +
          (((C6468 * C7926 + C12575 * C7927 + (C12586 + C12585) * C49425) *
                C49370 +
            (C6267 * C7926 + (C6494 + C6493) * C7927 +
             (C4979 * C1252 + C7059 + C7059 + C49393 * C1260 + C4981 * C1903 +
              C7060 + C7060 + C49265 * C1909) *
                 C49425) *
                C49075) *
               C49149 * C49420 -
           (((C6493 + C6494) * C49425 + C6473 * C7927 +
             (C5031 + C5030) * C7926) *
                C49075 +
            (C12580 * C49425 + C6478 * C7927 + (C5029 + C5028) * C7926) *
                C49370) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49161 * C3871 +
            (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
               C49149 * C255 -
           ((C5204 + C5205) * C49161 * C49392 +
            (C5206 + C5207) * C49161 * C3873 +
            (C5208 + C5209) * C49161 * C3872 +
            (C4981 * C693 + C5188 + C5188 + C49265 * C703 + C4979 * C263 +
             C5189 + C5189 + C49393 * C275) *
                C49161 * C3871) *
               C49149 * C49420) *
              C257 +
          (((C5209 + C5208) * C49161 * C3871 +
            (C5207 + C5206) * C49161 * C3872 +
            (C5205 + C5204) * C49161 * C3873 +
            (C4979 * C259 + C5190 + C5190 + C49393 * C271 + C4981 * C697 +
             C5191 + C5191 + C49265 * C707) *
                C49161 * C49392) *
               C49149 * C49420 -
           ((C5034 + C5035) * C49161 * C49392 +
            (C5033 + C5032) * C49161 * C3873 +
            (C5031 + C5030) * C49161 * C3872 +
            (C5029 + C5028) * C49161 * C3871) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
             C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
             C20185 * C954 + C20193 * C2870 + C20199 + C20199 +
             C49407 * C2878) *
                C49161 * C49370 +
            (C20244 + C20245 + C20246 + C20247) * C49161 * C49075) *
               C49149 * C255 -
           ((C20410 + C20411 + C20412 + C20413) * C49161 * C49075 +
            (C20193 * C3333 + C20394 + C20394 + C49407 * C3339 +
             C20191 * C2325 + C20395 + C20395 + C20185 * C2337 + C20189 * C693 +
             C20396 + C20396 + C20184 * C703 + C20187 * C263 + C20397 + C20397 +
             C20183 * C275) *
                C49161 * C49370) *
               C49149 * C49420) *
              C257 +
          (((C20413 + C20412 + C20411 + C20410) * C49161 * C49370 +
            (C20187 * C261 + C20398 + C20398 + C20183 * C273 + C20189 * C695 +
             C20399 + C20399 + C20184 * C705 + C20191 * C2329 + C20400 +
             C20400 + C20185 * C2341 + C20193 * C3335 + C20401 + C20401 +
             C49407 * C3341) *
                C49161 * C49075) *
               C49149 * C49420 -
           ((C20248 + C20249 + C20250 + C20251) * C49161 * C49075 +
            (C20247 + C20246 + C20245 + C20244) * C49161 * C49370) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[119] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C7926 +
             (C6491 + C6492) * C7927 + (C7066 + C7065) * C49425) *
                C49370 +
            ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
                C49075) *
               C389 -
           (((C12789 + C12790) * C49425 + (C6709 + C6710) * C7927 +
             (C5378 + C5379) * C7926) *
                C49075 +
            ((C4981 * C2326 + C7266 + C7266 + C49265 * C2338 + C4979 * C1442 +
              C7265 + C7265 + C49393 * C1450) *
                 C49425 +
             (C7275 + C7276) * C7927 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C7926) *
                C49370) *
               C49422) *
              C49132 * C257 +
          ((((C5379 + C5378) * C7926 + (C6710 + C6709) * C7927 +
             (C12790 + C12789) * C49425) *
                C49370 +
            ((C5377 + C5376) * C7926 + (C6708 + C6707) * C7927 +
             (C4979 * C1440 + C7269 + C7269 + C49393 * C1448 + C4981 * C2330 +
              C7270 + C7270 + C49265 * C2342) *
                 C49425) *
                C49075) *
               C49422 -
           (((C6493 + C6494) * C49425 + C6473 * C7927 +
             (C5031 + C5030) * C7926) *
                C49075 +
            (C12580 * C49425 + C6478 * C7927 + (C5029 + C5028) * C7926) *
                C49370) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49161 * C3871 +
            (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
               C389 -
           ((C5374 + C5375) * C49161 * C49392 +
            (C5376 + C5377) * C49161 * C3873 +
            (C5378 + C5379) * C49161 * C3872 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C49161 * C3871) *
               C49422) *
              C49132 * C257 +
          (((C5379 + C5378) * C49161 * C3871 +
            (C5377 + C5376) * C49161 * C3872 +
            (C5375 + C5374) * C49161 * C3873 +
            (C4979 * C391 + C5360 + C5360 + C49393 * C403 + C4981 * C948 +
             C5361 + C5361 + C49265 * C958) *
                C49161 * C49392) *
               C49422 -
           ((C5034 + C5035) * C49161 * C49392 +
            (C5033 + C5032) * C49161 * C3873 +
            (C5031 + C5030) * C49161 * C3872 +
            (C5029 + C5028) * C49161 * C3871) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
             C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
             C20185 * C954 + C20193 * C2870 + C20199 + C20199 +
             C49407 * C2878) *
                C49161 * C49370 +
            (C20244 + C20245 + C20246 + C20247) * C49161 * C49075) *
               C389 -
           ((C20572 + C20573 + C20574 + C20575) * C49161 * C49075 +
            (C20193 * C3753 + C20556 + C20556 + C49407 * C3759 +
             C20191 * C2870 + C20557 + C20557 + C20185 * C2878 + C20189 * C944 +
             C20558 + C20558 + C20184 * C954 + C20187 * C395 + C20559 + C20559 +
             C20183 * C407) *
                C49161 * C49370) *
               C49422) *
              C49132 * C257 +
          (((C20575 + C20574 + C20573 + C20572) * C49161 * C49370 +
            (C20187 * C393 + C20560 + C20560 + C20183 * C405 + C20189 * C946 +
             C20561 + C20561 + C20184 * C956 + C20191 * C2868 + C20562 +
             C20562 + C20185 * C2876 + C20193 * C3755 + C20563 + C20563 +
             C49407 * C3761) *
                C49161 * C49075) *
               C49422 -
           ((C20248 + C20249 + C20250 + C20251) * C49161 * C49075 +
            (C20247 + C20246 + C20245 + C20244) * C49161 * C49370) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[120] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C7926 +
             (C6491 + C6492) * C7927 + (C7066 + C7065) * C49425) *
                C49370 +
            ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
                C49075) *
               C49149 * C521 -
           (((C12585 + C12586) * C49425 + C12580 * C7927 + C6478 * C7926) *
                C49075 +
            ((C4981 * C1901 + C7056 + C7056 + C49265 * C1907 + C4979 * C1254 +
              C7055 + C7055 + C49393 * C1262) *
                 C49425 +
             (C7065 + C7066) * C7927 + (C6492 + C6491) * C7926) *
                C49370) *
               C49149 * C49420) *
              C523 +
          (((C6468 * C7926 + C12575 * C7927 + (C12586 + C12585) * C49425) *
                C49370 +
            (C6267 * C7926 + (C6494 + C6493) * C7927 +
             (C4979 * C1252 + C7059 + C7059 + C49393 * C1260 + C4981 * C1903 +
              C7060 + C7060 + C49265 * C1909) *
                 C49425) *
                C49075) *
               C49149 * C49420 -
           (((C6493 + C6494) * C49425 + C6473 * C7927 +
             (C5031 + C5030) * C7926) *
                C49075 +
            (C12580 * C49425 + C6478 * C7927 + (C5029 + C5028) * C7926) *
                C49370) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49161 * C3871 +
            (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
               C49149 * C521 -
           ((C5204 + C5205) * C49161 * C49392 +
            (C5206 + C5207) * C49161 * C3873 +
            (C5208 + C5209) * C49161 * C3872 +
            (C4981 * C693 + C5188 + C5188 + C49265 * C703 + C4979 * C263 +
             C5189 + C5189 + C49393 * C275) *
                C49161 * C3871) *
               C49149 * C49420) *
              C523 +
          (((C5209 + C5208) * C49161 * C3871 +
            (C5207 + C5206) * C49161 * C3872 +
            (C5205 + C5204) * C49161 * C3873 +
            (C4979 * C259 + C5190 + C5190 + C49393 * C271 + C4981 * C697 +
             C5191 + C5191 + C49265 * C707) *
                C49161 * C49392) *
               C49149 * C49420 -
           ((C5034 + C5035) * C49161 * C49392 +
            (C5033 + C5032) * C49161 * C3873 +
            (C5031 + C5030) * C49161 * C3872 +
            (C5029 + C5028) * C49161 * C3871) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
             C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
             C20185 * C954 + C20193 * C2870 + C20199 + C20199 +
             C49407 * C2878) *
                C49161 * C49370 +
            (C20244 + C20245 + C20246 + C20247) * C49161 * C49075) *
               C49149 * C521 -
           ((C20410 + C20411 + C20412 + C20413) * C49161 * C49075 +
            (C20193 * C3333 + C20394 + C20394 + C49407 * C3339 +
             C20191 * C2325 + C20395 + C20395 + C20185 * C2337 + C20189 * C693 +
             C20396 + C20396 + C20184 * C703 + C20187 * C263 + C20397 + C20397 +
             C20183 * C275) *
                C49161 * C49370) *
               C49149 * C49420) *
              C523 +
          (((C20413 + C20412 + C20411 + C20410) * C49161 * C49370 +
            (C20187 * C261 + C20398 + C20398 + C20183 * C273 + C20189 * C695 +
             C20399 + C20399 + C20184 * C705 + C20191 * C2329 + C20400 +
             C20400 + C20185 * C2341 + C20193 * C3335 + C20401 + C20401 +
             C49407 * C3341) *
                C49161 * C49075) *
               C49149 * C49420 -
           ((C20248 + C20249 + C20250 + C20251) * C49161 * C49075 +
            (C20247 + C20246 + C20245 + C20244) * C49161 * C49370) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[121] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C7926 +
            (C6491 + C6492) * C7927 + C13131 * C49425) *
               C49370 +
           ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
               C49075) *
              C49149 * C587 -
          (((C12585 + C12586) * C49425 + C12580 * C7927 + C6478 * C7926) *
               C49075 +
           ((C13144 + C13145) * C49425 + (C7065 + C7066) * C7927 +
            (C6492 + C6491) * C7926) *
               C49370) *
              C49149 * C588 +
          ((C13131 * C7926 + (C13145 + C13144) * C7927 +
            (C4979 * C1738 + C13136 + C13136 + C49393 * C1744 + C4981 * C9301 +
             C13137 + C13137 + C49265 * C9305) *
                C49425) *
               C49370 +
           (C12575 * C7926 + (C12586 + C12585) * C7927 +
            (C4979 * C1739 + C13138 + C13138 + C49393 * C1745 + C4981 * C9302 +
             C13139 + C13139 + C49265 * C9306) *
                C49425) *
               C49075) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
            C4985 + C4985 + C49265 * C407) *
               C49161 * C3871 +
           (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
              C49149 * C587 -
          ((C5204 + C5205) * C49161 * C49392 +
           (C5206 + C5207) * C49161 * C3873 + (C5208 + C5209) * C49161 * C3872 +
           (C4981 * C693 + C5188 + C5188 + C49265 * C703 + C4979 * C263 +
            C5189 + C5189 + C49393 * C275) *
               C49161 * C3871) *
              C49149 * C588 +
          ((C4979 * C591 + C5608 + C5608 + C49393 * C601 + C4981 * C1442 +
            C5609 + C5609 + C49265 * C1450) *
               C49161 * C3871 +
           (C4979 * C592 + C5610 + C5610 + C49393 * C602 + C4981 * C1441 +
            C5611 + C5611 + C49265 * C1449) *
               C49161 * C3872 +
           (C4979 * C593 + C5612 + C5612 + C49393 * C603 + C4981 * C1440 +
            C5613 + C5613 + C49265 * C1448) *
               C49161 * C3873 +
           (C4979 * C594 + C5614 + C5614 + C49393 * C604 + C4981 * C1443 +
            C5615 + C5615 + C49265 * C1451) *
               C49161 * C49392) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
            C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
            C20185 * C954 + C20193 * C2870 + C20199 + C20199 + C49407 * C2878) *
               C49161 * C49370 +
           (C20244 + C20245 + C20246 + C20247) * C49161 * C49075) *
              C49149 * C587 -
          ((C20410 + C20411 + C20412 + C20413) * C49161 * C49075 +
           (C20193 * C3333 + C20394 + C20394 + C49407 * C3339 + C20191 * C2325 +
            C20395 + C20395 + C20185 * C2337 + C20189 * C693 + C20396 + C20396 +
            C20184 * C703 + C20187 * C263 + C20397 + C20397 + C20183 * C275) *
               C49161 * C49370) *
              C49149 * C588 +
          ((C20187 * C591 + C20804 + C20804 + C20183 * C601 + C20189 * C1442 +
            C20805 + C20805 + C20184 * C1450 + C20191 * C2326 + C20806 +
            C20806 + C20185 * C2338 + C20193 * C10248 + C20807 + C20807 +
            C49407 * C10252) *
               C49161 * C49370 +
           (C20187 * C592 + C20808 + C20808 + C20183 * C602 + C20189 * C1441 +
            C20809 + C20809 + C20184 * C1449 + C20191 * C2328 + C20810 +
            C20810 + C20185 * C2340 + C20193 * C10249 + C20811 + C20811 +
            C49407 * C10253) *
               C49161 * C49075) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[122] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C7926 +
             (C6491 + C6492) * C7927 + C13131 * C49425) *
                C49370 +
            ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
                C49075) *
               C389 -
           (((C12789 + C12790) * C49425 + (C6709 + C6710) * C7927 +
             (C5378 + C5379) * C7926) *
                C49075 +
            ((C13352 + C13353) * C49425 + (C7275 + C7276) * C7927 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C7926) *
                C49370) *
               C49422) *
              C521 +
          ((((C7276 + C7275) * C7926 + (C13353 + C13352) * C7927 +
             (C4979 * C1901 + C13344 + C13344 + C49393 * C1907 + C4981 * C9784 +
              C13345 + C13345 + C49265 * C9788) *
                 C49425) *
                C49370 +
            ((C6710 + C6709) * C7926 + (C12790 + C12789) * C7927 +
             (C4979 * C1902 + C13346 + C13346 + C49393 * C1908 +
              C4981 * C10048 + C13347 + C13347 + C49265 * C10050) *
                 C49425) *
                C49075) *
               C49422 -
           (((C12585 + C12586) * C49425 + C12580 * C7927 + C6478 * C7926) *
                C49075 +
            ((C13144 + C13145) * C49425 + (C7065 + C7066) * C7927 +
             (C6492 + C6491) * C7926) *
                C49370) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49161 * C3871 +
            (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
               C389 -
           ((C5374 + C5375) * C49161 * C49392 +
            (C5376 + C5377) * C49161 * C3873 +
            (C5378 + C5379) * C49161 * C3872 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C49161 * C3871) *
               C49422) *
              C521 +
          (((C4979 * C693 + C5746 + C5746 + C49393 * C703 + C4981 * C2325 +
             C5747 + C5747 + C49265 * C2337) *
                C49161 * C3871 +
            (C4979 * C694 + C5748 + C5748 + C49393 * C704 + C4981 * C2327 +
             C5749 + C5749 + C49265 * C2339) *
                C49161 * C3872 +
            (C4979 * C695 + C5750 + C5750 + C49393 * C705 + C4981 * C2329 +
             C5751 + C5751 + C49265 * C2341) *
                C49161 * C3873 +
            (C4979 * C696 + C5752 + C5752 + C49393 * C706 + C4981 * C2677 +
             C5753 + C5753 + C49265 * C2679) *
                C49161 * C49392) *
               C49422 -
           ((C5204 + C5205) * C49161 * C49392 +
            (C5206 + C5207) * C49161 * C3873 +
            (C5208 + C5209) * C49161 * C3872 +
            (C4981 * C693 + C5188 + C5188 + C49265 * C703 + C4979 * C263 +
             C5189 + C5189 + C49393 * C275) *
                C49161 * C3871) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
             C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
             C20185 * C954 + C20193 * C2870 + C20199 + C20199 +
             C49407 * C2878) *
                C49161 * C49370 +
            (C20244 + C20245 + C20246 + C20247) * C49161 * C49075) *
               C389 -
           ((C20572 + C20573 + C20574 + C20575) * C49161 * C49075 +
            (C20193 * C3753 + C20556 + C20556 + C49407 * C3759 +
             C20191 * C2870 + C20557 + C20557 + C20185 * C2878 + C20189 * C944 +
             C20558 + C20558 + C20184 * C954 + C20187 * C395 + C20559 + C20559 +
             C20183 * C407) *
                C49161 * C49370) *
               C49422) *
              C521 +
          (((C20187 * C693 + C20942 + C20942 + C20183 * C703 + C20189 * C2325 +
             C20943 + C20943 + C20184 * C2337 + C20191 * C3333 + C20944 +
             C20944 + C20185 * C3339 + C20193 * C11120 + C20945 + C20945 +
             C49407 * C11124) *
                C49161 * C49370 +
            (C20187 * C694 + C20946 + C20946 + C20183 * C704 + C20189 * C2327 +
             C20947 + C20947 + C20184 * C2339 + C20191 * C3334 + C20948 +
             C20948 + C20185 * C3340 + C20193 * C17877 + C20949 + C20949 +
             C49407 * C17879) *
                C49161 * C49075) *
               C49422 -
           ((C20410 + C20411 + C20412 + C20413) * C49161 * C49075 +
            (C20193 * C3333 + C20394 + C20394 + C49407 * C3339 +
             C20191 * C2325 + C20395 + C20395 + C20185 * C2337 + C20189 * C693 +
             C20396 + C20396 + C20184 * C703 + C20187 * C263 + C20397 + C20397 +
             C20183 * C275) *
                C49161 * C49370) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[123] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C7926 +
             (C6491 + C6492) * C7927 + C13131 * C49425) *
                C49370 +
            ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
                C49075) *
               C795 -
           (((C12789 + C12790) * C49425 + (C6709 + C6710) * C7927 +
             (C5378 + C5379) * C7926) *
                C49075 +
            ((C13352 + C13353) * C49425 + (C7275 + C7276) * C7927 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C7926) *
                C49370) *
               C49422) *
              C49132 * C523 +
          ((((C5379 + C5378) * C7926 + (C6710 + C6709) * C7927 +
             (C12790 + C12789) * C49425) *
                C49370 +
            ((C5377 + C5376) * C7926 + (C6708 + C6707) * C7927 +
             (C4979 * C1440 + C7269 + C7269 + C49393 * C1448 + C4981 * C2330 +
              C7270 + C7270 + C49265 * C2342) *
                 C49425) *
                C49075) *
               C49422 -
           (((C6493 + C6494) * C49425 + C6473 * C7927 +
             (C5031 + C5030) * C7926) *
                C49075 +
            (C12580 * C49425 + C6478 * C7927 + (C5029 + C5028) * C7926) *
                C49370) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49161 * C3871 +
            (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
               C795 -
           ((C5374 + C5375) * C49161 * C49392 +
            (C5376 + C5377) * C49161 * C3873 +
            (C5378 + C5379) * C49161 * C3872 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C49161 * C3871) *
               C49422) *
              C49132 * C523 +
          (((C5379 + C5378) * C49161 * C3871 +
            (C5377 + C5376) * C49161 * C3872 +
            (C5375 + C5374) * C49161 * C3873 +
            (C4979 * C391 + C5360 + C5360 + C49393 * C403 + C4981 * C948 +
             C5361 + C5361 + C49265 * C958) *
                C49161 * C49392) *
               C49422 -
           ((C5034 + C5035) * C49161 * C49392 +
            (C5033 + C5032) * C49161 * C3873 +
            (C5031 + C5030) * C49161 * C3872 +
            (C5029 + C5028) * C49161 * C3871) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
             C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
             C20185 * C954 + C20193 * C2870 + C20199 + C20199 +
             C49407 * C2878) *
                C49161 * C49370 +
            (C20244 + C20245 + C20246 + C20247) * C49161 * C49075) *
               C795 -
           ((C20572 + C20573 + C20574 + C20575) * C49161 * C49075 +
            (C20193 * C3753 + C20556 + C20556 + C49407 * C3759 +
             C20191 * C2870 + C20557 + C20557 + C20185 * C2878 + C20189 * C944 +
             C20558 + C20558 + C20184 * C954 + C20187 * C395 + C20559 + C20559 +
             C20183 * C407) *
                C49161 * C49370) *
               C49422) *
              C49132 * C523 +
          (((C20575 + C20574 + C20573 + C20572) * C49161 * C49370 +
            (C20187 * C393 + C20560 + C20560 + C20183 * C405 + C20189 * C946 +
             C20561 + C20561 + C20184 * C956 + C20191 * C2868 + C20562 +
             C20562 + C20185 * C2876 + C20193 * C3755 + C20563 + C20563 +
             C49407 * C3761) *
                C49161 * C49075) *
               C49422 -
           ((C20248 + C20249 + C20250 + C20251) * C49161 * C49075 +
            (C20247 + C20246 + C20245 + C20244) * C49161 * C49370) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[124] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C7926 +
             (C6491 + C6492) * C7927 + C13131 * C49425) *
                C49370 +
            ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
                C49075) *
               C795 -
           (((C12789 + C12790) * C49425 + (C6709 + C6710) * C7927 +
             (C5378 + C5379) * C7926) *
                C49075 +
            ((C13352 + C13353) * C49425 + (C7275 + C7276) * C7927 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C7926) *
                C49370) *
               C49422) *
              C255 +
          ((((C7276 + C7275) * C7926 + (C13353 + C13352) * C7927 +
             (C4979 * C1901 + C13344 + C13344 + C49393 * C1907 + C4981 * C9784 +
              C13345 + C13345 + C49265 * C9788) *
                 C49425) *
                C49370 +
            ((C6710 + C6709) * C7926 + (C12790 + C12789) * C7927 +
             (C4979 * C1902 + C13346 + C13346 + C49393 * C1908 +
              C4981 * C10048 + C13347 + C13347 + C49265 * C10050) *
                 C49425) *
                C49075) *
               C49422 -
           (((C12585 + C12586) * C49425 + C12580 * C7927 + C6478 * C7926) *
                C49075 +
            ((C13144 + C13145) * C49425 + (C7065 + C7066) * C7927 +
             (C6492 + C6491) * C7926) *
                C49370) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49161 * C3871 +
            (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
               C795 -
           ((C5374 + C5375) * C49161 * C49392 +
            (C5376 + C5377) * C49161 * C3873 +
            (C5378 + C5379) * C49161 * C3872 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C49161 * C3871) *
               C49422) *
              C255 +
          (((C4979 * C693 + C5746 + C5746 + C49393 * C703 + C4981 * C2325 +
             C5747 + C5747 + C49265 * C2337) *
                C49161 * C3871 +
            (C4979 * C694 + C5748 + C5748 + C49393 * C704 + C4981 * C2327 +
             C5749 + C5749 + C49265 * C2339) *
                C49161 * C3872 +
            (C4979 * C695 + C5750 + C5750 + C49393 * C705 + C4981 * C2329 +
             C5751 + C5751 + C49265 * C2341) *
                C49161 * C3873 +
            (C4979 * C696 + C5752 + C5752 + C49393 * C706 + C4981 * C2677 +
             C5753 + C5753 + C49265 * C2679) *
                C49161 * C49392) *
               C49422 -
           ((C5204 + C5205) * C49161 * C49392 +
            (C5206 + C5207) * C49161 * C3873 +
            (C5208 + C5209) * C49161 * C3872 +
            (C4981 * C693 + C5188 + C5188 + C49265 * C703 + C4979 * C263 +
             C5189 + C5189 + C49393 * C275) *
                C49161 * C3871) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
             C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
             C20185 * C954 + C20193 * C2870 + C20199 + C20199 +
             C49407 * C2878) *
                C49161 * C49370 +
            (C20244 + C20245 + C20246 + C20247) * C49161 * C49075) *
               C795 -
           ((C20572 + C20573 + C20574 + C20575) * C49161 * C49075 +
            (C20193 * C3753 + C20556 + C20556 + C49407 * C3759 +
             C20191 * C2870 + C20557 + C20557 + C20185 * C2878 + C20189 * C944 +
             C20558 + C20558 + C20184 * C954 + C20187 * C395 + C20559 + C20559 +
             C20183 * C407) *
                C49161 * C49370) *
               C49422) *
              C255 +
          (((C20187 * C693 + C20942 + C20942 + C20183 * C703 + C20189 * C2325 +
             C20943 + C20943 + C20184 * C2337 + C20191 * C3333 + C20944 +
             C20944 + C20185 * C3339 + C20193 * C11120 + C20945 + C20945 +
             C49407 * C11124) *
                C49161 * C49370 +
            (C20187 * C694 + C20946 + C20946 + C20183 * C704 + C20189 * C2327 +
             C20947 + C20947 + C20184 * C2339 + C20191 * C3334 + C20948 +
             C20948 + C20185 * C3340 + C20193 * C17877 + C20949 + C20949 +
             C49407 * C17879) *
                C49161 * C49075) *
               C49422 -
           ((C20410 + C20411 + C20412 + C20413) * C49161 * C49075 +
            (C20193 * C3333 + C20394 + C20394 + C49407 * C3339 +
             C20191 * C2325 + C20395 + C20395 + C20185 * C2337 + C20189 * C693 +
             C20396 + C20396 + C20184 * C703 + C20187 * C263 + C20397 + C20397 +
             C20183 * C275) *
                C49161 * C49370) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[125] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C7926 +
            (C6491 + C6492) * C7927 + C13131 * C49425) *
               C49370 +
           ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
               C49075) *
              C941 -
          (((C12789 + C12790) * C49425 + (C6709 + C6710) * C7927 +
            (C5378 + C5379) * C7926) *
               C49075 +
           ((C13352 + C13353) * C49425 + (C7275 + C7276) * C7927 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C7926) *
               C49370) *
              C942 +
          (((C4979 * C944 + C6112 + C6112 + C49393 * C954 + C4981 * C2870 +
             C6113 + C6113 + C49265 * C2878) *
                C7926 +
            (C4979 * C2325 + C7811 + C7811 + C49393 * C2337 + C4981 * C3333 +
             C7812 + C7812 + C49265 * C3339) *
                C7927 +
            (C4979 * C2326 + C13888 + C13888 + C49393 * C2338 + C4981 * C10248 +
             C13889 + C13889 + C49265 * C10252) *
                C49425) *
               C49370 +
           ((C4979 * C945 + C6114 + C6114 + C49393 * C955 + C4981 * C2869 +
             C6115 + C6115 + C49265 * C2877) *
                C7926 +
            (C4979 * C2327 + C7813 + C7813 + C49393 * C2339 + C4981 * C3334 +
             C7814 + C7814 + C49265 * C3340) *
                C7927 +
            (C4979 * C2328 + C13890 + C13890 + C49393 * C2340 + C4981 * C10249 +
             C13891 + C13891 + C49265 * C10253) *
                C49425) *
               C49075) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
            C4985 + C4985 + C49265 * C407) *
               C49161 * C3871 +
           (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
              C941 -
          ((C5374 + C5375) * C49161 * C49392 +
           (C5376 + C5377) * C49161 * C3873 + (C5378 + C5379) * C49161 * C3872 +
           (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
            C5359 + C5359 + C49393 * C407) *
               C49161 * C3871) *
              C942 +
          ((C4979 * C944 + C6112 + C6112 + C49393 * C954 + C4981 * C2870 +
            C6113 + C6113 + C49265 * C2878) *
               C49161 * C3871 +
           (C4979 * C945 + C6114 + C6114 + C49393 * C955 + C4981 * C2869 +
            C6115 + C6115 + C49265 * C2877) *
               C49161 * C3872 +
           (C4979 * C946 + C6116 + C6116 + C49393 * C956 + C4981 * C2868 +
            C6117 + C6117 + C49265 * C2876) *
               C49161 * C3873 +
           (C4979 * C947 + C6118 + C6118 + C49393 * C957 + C4981 * C2871 +
            C6119 + C6119 + C49265 * C2879) *
               C49161 * C49392) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C20187 * C115 + C20196 + C20196 + C20183 * C129 + C20189 * C395 +
            C20197 + C20197 + C20184 * C407 + C20191 * C944 + C20198 + C20198 +
            C20185 * C954 + C20193 * C2870 + C20199 + C20199 + C49407 * C2878) *
               C49161 * C49370 +
           (C20244 + C20245 + C20246 + C20247) * C49161 * C49075) *
              C941 -
          ((C20572 + C20573 + C20574 + C20575) * C49161 * C49075 +
           (C20193 * C3753 + C20556 + C20556 + C49407 * C3759 + C20191 * C2870 +
            C20557 + C20557 + C20185 * C2878 + C20189 * C944 + C20558 + C20558 +
            C20184 * C954 + C20187 * C395 + C20559 + C20559 + C20183 * C407) *
               C49161 * C49370) *
              C942 +
          ((C20187 * C944 + C21308 + C21308 + C20183 * C954 + C20189 * C2870 +
            C21309 + C21309 + C20184 * C2878 + C20191 * C3753 + C21310 +
            C21310 + C20185 * C3759 + C20193 * C17972 + C21311 + C21311 +
            C49407 * C17976) *
               C49161 * C49370 +
           (C20187 * C945 + C21312 + C21312 + C20183 * C955 + C20189 * C2869 +
            C21313 + C21313 + C20184 * C2877 + C20191 * C3754 + C21314 +
            C21314 + C20185 * C3760 + C20193 * C17973 + C21315 + C21315 +
            C49407 * C17977) *
               C49161 * C49075) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[126] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49445 +
            (C113 * C591 + C607 + C607 + C49178 * C601) * C49425) *
               C1077 +
           (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
              C49149 * C49132 * C110 -
          ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
           (C1103 + C1082 + C1081) * C1077) *
              C49149 * C49132 * C111 +
          (C1106 * C1077 + (C1092 + C1091 + C1105) * C1078 +
           (C167 * C49457 + C300 * C49445 +
            (C113 * C595 + C611 + C611 + C49178 * C605) * C49425) *
               C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C49149 * C49132 * C110 -
          (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
           C169 * C103) *
              C49149 * C49132 * C111 +
          (C170 * C103 + C171 * C104 + C172 * C105 + C173 * C106 +
           (C113 * C121 + C153 + C153 + C49178 * C135) * C49161 * C107) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
            C1289 * C7927 + C1290 * C49425) *
               C49454 +
           (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
              C49149 * C49132 * C110 -
          ((C7939 + C7940 + C7941) * C49414 + (C7938 + C7937 + C7936) * C49441 +
           (C7935 + C7934 + C7933) * C49454) *
              C49149 * C49132 * C111 +
          (C7943 * C49454 + (C7941 + C7940 + C7939) * C49441 +
           (C167 * C7926 + C300 * C7927 +
            (C113 * C595 + C611 + C611 + C49178 * C605) * C49425) *
               C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 + C1289 * C9114 +
           C1290 * C9115 + C1755 * C9116 +
           (C113 * C1738 + C1750 + C1750 + C49178 * C1744) * C9117) *
              C49065 * C49149 * C49132 * C110 -
          ((C113 * C1739 + C1751 + C1751 + C49178 * C1745) * C9117 +
           C1292 * C9116 + C1100 * C9115 + C303 * C9114 + C164 * C9113) *
              C49065 * C49149 * C49132 * C111 +
          (C165 * C9113 + C302 * C9114 + C1101 * C9115 + C1291 * C9116 +
           (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C9117) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
            C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
            C49428 * C954) *
               C49161 * C49454 +
           (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
              C49149 * C49132 * C110 -
          ((C15169 + C15170 + C15171) * C49161 * C49414 +
           (C15168 + C15167 + C15166) * C49161 * C49441 +
           (C15165 + C15164 + C15163) * C49161 * C49454) *
              C49149 * C49132 * C111 +
          (C15174 * C49454 + (C15171 + C15170 + C15169) * C49161 * C49441 +
           (C15105 * C119 + C15142 + C15142 + C15102 * C133 + C15107 * C391 +
            C15143 + C15143 + C15103 * C403 + C15109 * C948 + C15144 + C15144 +
            C49428 * C958) *
               C49161 * C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
            C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
            C49428 * C954) *
               C49457 +
           (C15105 * C263 + C15341 + C15341 + C15102 * C275 + C15107 * C693 +
            C15340 + C15340 + C15103 * C703 + C15109 * C2325 + C15339 + C15339 +
            C49428 * C2337) *
               C49445 +
           (C15105 * C591 + C15807 + C15807 + C15102 * C601 + C15107 * C1442 +
            C15808 + C15808 + C15103 * C1450 + C15109 * C2326 + C15809 +
            C15809 + C49428 * C2338) *
               C49425) *
              C49065 * C49149 * C49132 * C110 -
          ((C15109 * C2328 + C15812 + C15812 + C49428 * C2340 + C15107 * C1441 +
            C15811 + C15811 + C15103 * C1449 + C15105 * C592 + C15810 + C15810 +
            C15102 * C602) *
               C49425 +
           (C15360 + C15361 + C15362) * C49445 +
           (C15165 + C15164 + C15163) * C49457) *
              C49065 * C49149 * C49132 * C111 +
          (C15173 * C49457 + (C15359 + C15358 + C15357) * C49445 +
           (C15105 * C593 + C15813 + C15813 + C15102 * C603 + C15107 * C1440 +
            C15814 + C15814 + C15103 * C1448 + C15109 * C2330 + C15815 +
            C15815 + C49428 * C2342) *
               C49425) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[127] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C49149 * C255 -
           ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
            ((C113 * C1254 + C1279 + C1279 + C49178 * C1262) * C49425 +
             C1290 * C49445 + C1289 * C49457) *
                C1077) *
               C49149 * C49420) *
              C257 +
          (((C1278 + C1277 + C1294) * C1077 + (C1273 + C1272 + C1293) * C1078 +
            (C301 * C49457 + C1102 * C49445 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
            (C1103 + C1082 + C1081) * C1077) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C49149 * C255 -
           (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
               C49149 * C49420) *
              C257 +
          ((C307 * C103 + C306 * C104 + C305 * C105 + C304 * C106 +
            (C113 * C264 + C291 + C291 + C49178 * C276) * C49161 * C107) *
               C49149 * C49420 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C49149 * C255 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C49149 * C49420) *
              C257 +
          (((C8095 + C8094 + C8093) * C49454 +
            (C8092 + C8091 + C8090) * C49441 +
            (C301 * C7926 + C1102 * C7927 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C49149 * C255 -
           ((C113 * C9201 + C9210 + C9210 + C49178 * C9205) * C9117 +
            C9218 * C9116 + C1755 * C9115 + C1290 * C9114 + C1289 * C9113) *
               C49065 * C49149 * C49420) *
              C257 +
          ((C303 * C9113 + C1100 * C9114 + C1292 * C9115 + C9219 * C9116 +
            (C113 * C9202 + C9213 + C9213 + C49178 * C9206) * C9117) *
               C49065 * C49149 * C49420 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49161 * C49454 +
            (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
               C49149 * C255 -
           ((C15357 + C15358 + C15359) * C49161 * C49414 +
            (C15360 + C15361 + C15362) * C49161 * C49441 +
            (C15109 * C2325 + C15339 + C15339 + C49428 * C2337 + C15107 * C693 +
             C15340 + C15340 + C15103 * C703 + C15105 * C263 + C15341 + C15341 +
             C15102 * C275) *
                C49161 * C49454) *
               C49149 * C49420) *
              C257 +
          (((C15362 + C15361 + C15360) * C49161 * C49454 +
            (C15359 + C15358 + C15357) * C49161 * C49441 +
            (C15105 * C260 + C15342 + C15342 + C15102 * C272 + C15107 * C696 +
             C15343 + C15343 + C15103 * C706 + C15109 * C2677 + C15344 +
             C15344 + C49428 * C2679) *
                C49161 * C49414) *
               C49149 * C49420 -
           ((C15169 + C15170 + C15171) * C49161 * C49414 +
            (C15168 + C15167 + C15166) * C49161 * C49441 +
            (C15165 + C15164 + C15163) * C49161 * C49454) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49457 +
            (C16680 + C16681 + C16682) * C49445 +
            (C16683 + C16684 + C16685) * C49425) *
               C49065 * C49149 * C255 -
           ((C15109 * C9784 + C16650 + C16650 + C49428 * C9788 +
             C15107 * C1901 + C16651 + C16651 + C15103 * C1907 +
             C15105 * C1254 + C16652 + C16652 + C15102 * C1262) *
                C49425 +
            (C16685 + C16684 + C16683) * C49445 +
            (C16682 + C16681 + C16680) * C49457) *
               C49065 * C49149 * C49420) *
              C257 +
          (((C15362 + C15361 + C15360) * C49457 +
            (C16686 + C16687 + C16688) * C49445 +
            (C15105 * C1253 + C16659 + C16659 + C15102 * C1261 +
             C15107 * C1902 + C16660 + C16660 + C15103 * C1908 +
             C15109 * C10048 + C16661 + C16661 + C49428 * C10050) *
                C49425) *
               C49065 * C49149 * C49420 -
           ((C16688 + C16687 + C16686) * C49425 +
            (C15360 + C15361 + C15362) * C49445 +
            (C15165 + C15164 + C15163) * C49457) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[128] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C389 -
           ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
            ((C113 * C1442 + C1465 + C1465 + C49178 * C1450) * C49425 +
             (C113 * C693 + C709 + C709 + C49178 * C703) * C49445 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                C1077) *
               C49422) *
              C49132 * C257 +
          (((C1464 + C1482 + C1481) * C1077 + (C1458 + C1480 + C1479) * C1078 +
            (C433 * C49457 +
             (C113 * C696 + C712 + C712 + C49178 * C706) * C49445 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
            (C1103 + C1082 + C1081) * C1077) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C389 -
           (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
               C49422) *
              C49132 * C257 +
          ((C439 * C103 + C438 * C104 + C437 * C105 + C436 * C106 +
            (C113 * C396 + C423 + C423 + C49178 * C408) * C49161 * C107) *
               C49422 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C389 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C49132 * C257 +
          (((C8247 + C8246 + C8245) * C49454 +
            (C8244 + C8243 + C8242) * C49441 +
            (C433 * C7926 + C4161 * C7927 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C389 -
           ((C113 * C9301 + C9308 + C9308 + C49178 * C9305) * C9117 +
            (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C9116 +
            C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C49132 * C257 +
          ((C435 * C9113 + C1478 * C9114 + C1477 * C9115 +
            (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C9116 +
            (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C9117) *
               C49065 * C49422 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49161 * C49454 +
            (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
               C389 -
           ((C15545 + C15546 + C15547) * C49161 * C49414 +
            (C15548 + C15549 + C15550) * C49161 * C49441 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49161 * C49454) *
               C49422) *
              C49132 * C257 +
          (((C15550 + C15549 + C15548) * C49161 * C49454 +
            (C15547 + C15546 + C15545) * C49161 * C49441 +
            (C15105 * C392 + C15530 + C15530 + C15102 * C404 + C15107 * C947 +
             C15531 + C15531 + C15103 * C957 + C15109 * C2871 + C15532 +
             C15532 + C49428 * C2879) *
                C49161 * C49414) *
               C49422 -
           ((C15169 + C15170 + C15171) * C49161 * C49414 +
            (C15168 + C15167 + C15166) * C49161 * C49441 +
            (C15165 + C15164 + C15163) * C49161 * C49454) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49457 +
            (C16680 + C16681 + C16682) * C49445 +
            (C16683 + C16684 + C16685) * C49425) *
               C49065 * C389 -
           ((C15109 * C10248 + C16835 + C16835 + C49428 * C10252 +
             C15107 * C2326 + C16836 + C16836 + C15103 * C2338 +
             C15105 * C1442 + C16837 + C16837 + C15102 * C1450) *
                C49425 +
            (C15109 * C3333 + C15964 + C15964 + C49428 * C3339 +
             C15107 * C2325 + C15963 + C15963 + C15103 * C2337 + C15105 * C693 +
             C15962 + C15962 + C15102 * C703) *
                C49445 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49457) *
               C49065 * C49422) *
              C49132 * C257 +
          (((C15550 + C15549 + C15548) * C49457 +
            (C15105 * C694 + C15965 + C15965 + C15102 * C704 + C15107 * C2327 +
             C15966 + C15966 + C15103 * C2339 + C15109 * C3334 + C15967 +
             C15967 + C49428 * C3340) *
                C49445 +
            (C15105 * C1441 + C16838 + C16838 + C15102 * C1449 +
             C15107 * C2328 + C16839 + C16839 + C15103 * C2340 +
             C15109 * C10249 + C16840 + C16840 + C49428 * C10253) *
                C49425) *
               C49065 * C49422 -
           ((C16688 + C16687 + C16686) * C49425 +
            (C15360 + C15361 + C15362) * C49445 +
            (C15165 + C15164 + C15163) * C49457) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[129] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C49149 * C521 -
           ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
            ((C113 * C1254 + C1279 + C1279 + C49178 * C1262) * C49425 +
             C1290 * C49445 + C1289 * C49457) *
                C1077) *
               C49149 * C49420) *
              C523 +
          (((C1278 + C1277 + C1294) * C1077 + (C1273 + C1272 + C1293) * C1078 +
            (C301 * C49457 + C1102 * C49445 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
            (C1103 + C1082 + C1081) * C1077) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C49149 * C521 -
           (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
               C49149 * C49420) *
              C523 +
          ((C307 * C103 + C306 * C104 + C305 * C105 + C304 * C106 +
            (C113 * C264 + C291 + C291 + C49178 * C276) * C49161 * C107) *
               C49149 * C49420 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C49149 * C521 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C49149 * C49420) *
              C523 +
          (((C8095 + C8094 + C8093) * C49454 +
            (C8092 + C8091 + C8090) * C49441 +
            (C301 * C7926 + C1102 * C7927 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C49149 * C521 -
           ((C113 * C9201 + C9210 + C9210 + C49178 * C9205) * C9117 +
            C9218 * C9116 + C1755 * C9115 + C1290 * C9114 + C1289 * C9113) *
               C49065 * C49149 * C49420) *
              C523 +
          ((C303 * C9113 + C1100 * C9114 + C1292 * C9115 + C9219 * C9116 +
            (C113 * C9202 + C9213 + C9213 + C49178 * C9206) * C9117) *
               C49065 * C49149 * C49420 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49161 * C49454 +
            (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
               C49149 * C521 -
           ((C15357 + C15358 + C15359) * C49161 * C49414 +
            (C15360 + C15361 + C15362) * C49161 * C49441 +
            (C15109 * C2325 + C15339 + C15339 + C49428 * C2337 + C15107 * C693 +
             C15340 + C15340 + C15103 * C703 + C15105 * C263 + C15341 + C15341 +
             C15102 * C275) *
                C49161 * C49454) *
               C49149 * C49420) *
              C523 +
          (((C15362 + C15361 + C15360) * C49161 * C49454 +
            (C15359 + C15358 + C15357) * C49161 * C49441 +
            (C15105 * C260 + C15342 + C15342 + C15102 * C272 + C15107 * C696 +
             C15343 + C15343 + C15103 * C706 + C15109 * C2677 + C15344 +
             C15344 + C49428 * C2679) *
                C49161 * C49414) *
               C49149 * C49420 -
           ((C15169 + C15170 + C15171) * C49161 * C49414 +
            (C15168 + C15167 + C15166) * C49161 * C49441 +
            (C15165 + C15164 + C15163) * C49161 * C49454) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49457 +
            (C16680 + C16681 + C16682) * C49445 +
            (C16683 + C16684 + C16685) * C49425) *
               C49065 * C49149 * C521 -
           ((C15109 * C9784 + C16650 + C16650 + C49428 * C9788 +
             C15107 * C1901 + C16651 + C16651 + C15103 * C1907 +
             C15105 * C1254 + C16652 + C16652 + C15102 * C1262) *
                C49425 +
            (C16685 + C16684 + C16683) * C49445 +
            (C16682 + C16681 + C16680) * C49457) *
               C49065 * C49149 * C49420) *
              C523 +
          (((C15362 + C15361 + C15360) * C49457 +
            (C16686 + C16687 + C16688) * C49445 +
            (C15105 * C1253 + C16659 + C16659 + C15102 * C1261 +
             C15107 * C1902 + C16660 + C16660 + C15103 * C1908 +
             C15109 * C10048 + C16661 + C16661 + C49428 * C10050) *
                C49425) *
               C49065 * C49149 * C49420 -
           ((C16688 + C16687 + C16686) * C49425 +
            (C15360 + C15361 + C15362) * C49445 +
            (C15165 + C15164 + C15163) * C49457) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[130] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
            C1289 * C49445 + C1290 * C49425) *
               C1077 +
           (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
              C49149 * C587 -
          ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
           (C1755 * C49425 + C1290 * C49445 + C1289 * C49457) * C1077) *
              C49149 * C588 +
          ((C1290 * C49457 + C1755 * C49445 +
            (C113 * C1738 + C1750 + C1750 + C49178 * C1744) * C49425) *
               C1077 +
           (C1100 * C49457 + C1292 * C49445 +
            (C113 * C1739 + C1751 + C1751 + C49178 * C1745) * C49425) *
               C1078 +
           (C1101 * C49457 + C1291 * C49445 +
            (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49425) *
               C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C49149 * C587 -
          (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
           (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
              C49149 * C588 +
          ((C113 * C591 + C607 + C607 + C49178 * C601) * C49161 * C103 +
           (C113 * C592 + C608 + C608 + C49178 * C602) * C49161 * C104 +
           (C113 * C593 + C609 + C609 + C49178 * C603) * C49161 * C105 +
           (C113 * C594 + C610 + C610 + C49178 * C604) * C49161 * C106 +
           (C113 * C595 + C611 + C611 + C49178 * C605) * C49161 * C107) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
            C1289 * C7927 + C1290 * C49425) *
               C49454 +
           (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
              C49149 * C587 -
          ((C8090 + C8091 + C8092) * C49414 + (C8093 + C8094 + C8095) * C49441 +
           (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
              C49149 * C588 +
          ((C1290 * C7926 + C1755 * C7927 +
            (C113 * C1738 + C1750 + C1750 + C49178 * C1744) * C49425) *
               C49454 +
           (C1100 * C7926 + C1292 * C7927 +
            (C113 * C1739 + C1751 + C1751 + C49178 * C1745) * C49425) *
               C49441 +
           (C1101 * C7926 + C1291 * C7927 +
            (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49425) *
               C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 + C1289 * C9114 +
           C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
              C49065 * C49149 * C587 -
          (C9462 * C9117 + C9218 * C9116 + C1755 * C9115 + C1290 * C9114 +
           C1289 * C9113) *
              C49065 * C49149 * C588 +
          (C1290 * C9113 + C1755 * C9114 + C9218 * C9115 + C9462 * C9116 +
           (C113 * C9453 + C9459 + C9459 + C49178 * C9455) * C9117) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
            C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
            C49428 * C954) *
               C49161 * C49454 +
           (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
              C49149 * C587 -
          ((C15357 + C15358 + C15359) * C49161 * C49414 +
           (C15360 + C15361 + C15362) * C49161 * C49441 +
           (C15109 * C2325 + C15339 + C15339 + C49428 * C2337 + C15107 * C693 +
            C15340 + C15340 + C15103 * C703 + C15105 * C263 + C15341 + C15341 +
            C15102 * C275) *
               C49161 * C49454) *
              C49149 * C588 +
          ((C15105 * C591 + C15807 + C15807 + C15102 * C601 + C15107 * C1442 +
            C15808 + C15808 + C15103 * C1450 + C15109 * C2326 + C15809 +
            C15809 + C49428 * C2338) *
               C49161 * C49454 +
           (C15105 * C592 + C15810 + C15810 + C15102 * C602 + C15107 * C1441 +
            C15811 + C15811 + C15103 * C1449 + C15109 * C2328 + C15812 +
            C15812 + C49428 * C2340) *
               C49161 * C49441 +
           (C15105 * C593 + C15813 + C15813 + C15102 * C603 + C15107 * C1440 +
            C15814 + C15814 + C15103 * C1448 + C15109 * C2330 + C15815 +
            C15815 + C49428 * C2342) *
               C49161 * C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
            C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
            C49428 * C954) *
               C49457 +
           (C16680 + C16681 + C16682) * C49445 + C17107 * C49425) *
              C49065 * C49149 * C587 -
          ((C17114 + C17115 + C17116) * C49425 +
           (C16685 + C16684 + C16683) * C49445 +
           (C16682 + C16681 + C16680) * C49457) *
              C49065 * C49149 * C588 +
          (C17107 * C49457 + (C17116 + C17115 + C17114) * C49445 +
           (C15105 * C1738 + C17104 + C17104 + C15102 * C1744 + C15107 * C9301 +
            C17105 + C17105 + C15103 * C9305 + C15109 * C9785 + C17106 +
            C17106 + C49428 * C9789) *
               C49425) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[131] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C389 -
           ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
            (C1922 * C49425 + C1923 * C49445 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                C1077) *
               C49422) *
              C521 +
          (((C1923 * C49457 + C1922 * C49445 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C1077 +
            (C1478 * C49457 + C1477 * C49445 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C1078 +
            (C1476 * C49457 + C1475 * C49445 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
            (C1755 * C49425 + C1290 * C49445 + C1289 * C49457) * C1077) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C389 -
           (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
               C49422) *
              C521 +
          (((C113 * C693 + C709 + C709 + C49178 * C703) * C49161 * C103 +
            (C113 * C694 + C710 + C710 + C49178 * C704) * C49161 * C104 +
            (C113 * C695 + C711 + C711 + C49178 * C705) * C49161 * C105 +
            (C113 * C696 + C712 + C712 + C49178 * C706) * C49161 * C106 +
            (C113 * C697 + C713 + C713 + C49178 * C707) * C49161 * C107) *
               C49422 -
           (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C389 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C521 +
          (((C1923 * C7926 + C1922 * C7927 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C49454 +
            (C1478 * C7926 + C1477 * C7927 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C49441 +
            (C1476 * C7926 + C1475 * C7927 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C389 -
           (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C521 +
          ((C1923 * C9113 + C1922 * C9114 + C9558 * C9115 + C9557 * C9116 +
            (C113 * C9544 + C9552 + C9552 + C49178 * C9546) * C9117) *
               C49065 * C49422 -
           (C9462 * C9117 + C9218 * C9116 + C1755 * C9115 + C1290 * C9114 +
            C1289 * C9113) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49161 * C49454 +
            (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
               C389 -
           ((C15545 + C15546 + C15547) * C49161 * C49414 +
            (C15548 + C15549 + C15550) * C49161 * C49441 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49161 * C49454) *
               C49422) *
              C521 +
          (((C15105 * C693 + C15962 + C15962 + C15102 * C703 + C15107 * C2325 +
             C15963 + C15963 + C15103 * C2337 + C15109 * C3333 + C15964 +
             C15964 + C49428 * C3339) *
                C49161 * C49454 +
            (C15105 * C694 + C15965 + C15965 + C15102 * C704 + C15107 * C2327 +
             C15966 + C15966 + C15103 * C2339 + C15109 * C3334 + C15967 +
             C15967 + C49428 * C3340) *
                C49161 * C49441 +
            (C15105 * C695 + C15968 + C15968 + C15102 * C705 + C15107 * C2329 +
             C15969 + C15969 + C15103 * C2341 + C15109 * C3335 + C15970 +
             C15970 + C49428 * C3341) *
                C49161 * C49414) *
               C49422 -
           ((C15357 + C15358 + C15359) * C49161 * C49414 +
            (C15360 + C15361 + C15362) * C49161 * C49441 +
            (C15109 * C2325 + C15339 + C15339 + C49428 * C2337 + C15107 * C693 +
             C15340 + C15340 + C15103 * C703 + C15105 * C263 + C15341 + C15341 +
             C15102 * C275) *
                C49161 * C49454) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49457 +
            (C16680 + C16681 + C16682) * C49445 + C17107 * C49425) *
               C49065 * C389 -
           ((C17290 + C17291 + C17292) * C49425 +
            (C17293 + C17294 + C17295) * C49445 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49457) *
               C49065 * C49422) *
              C521 +
          (((C17295 + C17294 + C17293) * C49457 +
            (C17292 + C17291 + C17290) * C49445 +
            (C15105 * C1901 + C17275 + C17275 + C15102 * C1907 +
             C15107 * C9784 + C17276 + C17276 + C15103 * C9788 +
             C15109 * C10682 + C17277 + C17277 + C49428 * C10684) *
                C49425) *
               C49065 * C49422 -
           ((C17114 + C17115 + C17116) * C49425 +
            (C16685 + C16684 + C16683) * C49445 +
            (C16682 + C16681 + C16680) * C49457) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[132] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C795 -
           ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
            (C1922 * C49425 + C1923 * C49445 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                C1077) *
               C49422) *
              C49132 * C523 +
          (((C1464 + C1482 + C1481) * C1077 + (C1458 + C1480 + C1479) * C1078 +
            (C433 * C49457 +
             (C113 * C696 + C712 + C712 + C49178 * C706) * C49445 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
            (C1103 + C1082 + C1081) * C1077) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C795 -
           (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
               C49422) *
              C49132 * C523 +
          ((C439 * C103 + C438 * C104 + C437 * C105 + C436 * C106 +
            (C113 * C396 + C423 + C423 + C49178 * C408) * C49161 * C107) *
               C49422 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C795 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C49132 * C523 +
          (((C8247 + C8246 + C8245) * C49454 +
            (C8244 + C8243 + C8242) * C49441 +
            (C433 * C7926 + C4161 * C7927 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C795 -
           (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C49132 * C523 +
          ((C435 * C9113 + C1478 * C9114 + C1477 * C9115 +
            (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C9116 +
            (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C9117) *
               C49065 * C49422 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49161 * C49454 +
            (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
               C795 -
           ((C15545 + C15546 + C15547) * C49161 * C49414 +
            (C15548 + C15549 + C15550) * C49161 * C49441 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49161 * C49454) *
               C49422) *
              C49132 * C523 +
          (((C15550 + C15549 + C15548) * C49161 * C49454 +
            (C15547 + C15546 + C15545) * C49161 * C49441 +
            (C15105 * C392 + C15530 + C15530 + C15102 * C404 + C15107 * C947 +
             C15531 + C15531 + C15103 * C957 + C15109 * C2871 + C15532 +
             C15532 + C49428 * C2879) *
                C49161 * C49414) *
               C49422 -
           ((C15169 + C15170 + C15171) * C49161 * C49414 +
            (C15168 + C15167 + C15166) * C49161 * C49441 +
            (C15165 + C15164 + C15163) * C49161 * C49454) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49457 +
            (C16680 + C16681 + C16682) * C49445 + C17107 * C49425) *
               C49065 * C795 -
           ((C17290 + C17291 + C17292) * C49425 +
            (C17293 + C17294 + C17295) * C49445 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49457) *
               C49065 * C49422) *
              C49132 * C523 +
          (((C15550 + C15549 + C15548) * C49457 +
            (C15105 * C694 + C15965 + C15965 + C15102 * C704 + C15107 * C2327 +
             C15966 + C15966 + C15103 * C2339 + C15109 * C3334 + C15967 +
             C15967 + C49428 * C3340) *
                C49445 +
            (C15105 * C1441 + C16838 + C16838 + C15102 * C1449 +
             C15107 * C2328 + C16839 + C16839 + C15103 * C2340 +
             C15109 * C10249 + C16840 + C16840 + C49428 * C10253) *
                C49425) *
               C49065 * C49422 -
           ((C16688 + C16687 + C16686) * C49425 +
            (C15360 + C15361 + C15362) * C49445 +
            (C15165 + C15164 + C15163) * C49457) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[133] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C795 -
           ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
            (C1922 * C49425 + C1923 * C49445 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                C1077) *
               C49422) *
              C255 +
          (((C1923 * C49457 + C1922 * C49445 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C1077 +
            (C1478 * C49457 + C1477 * C49445 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C1078 +
            (C1476 * C49457 + C1475 * C49445 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
            (C1755 * C49425 + C1290 * C49445 + C1289 * C49457) * C1077) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C795 -
           (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
               C49422) *
              C255 +
          (((C113 * C693 + C709 + C709 + C49178 * C703) * C49161 * C103 +
            (C113 * C694 + C710 + C710 + C49178 * C704) * C49161 * C104 +
            (C113 * C695 + C711 + C711 + C49178 * C705) * C49161 * C105 +
            (C113 * C696 + C712 + C712 + C49178 * C706) * C49161 * C106 +
            (C113 * C697 + C713 + C713 + C49178 * C707) * C49161 * C107) *
               C49422 -
           (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C795 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C255 +
          (((C1923 * C7926 + C1922 * C7927 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C49454 +
            (C1478 * C7926 + C1477 * C7927 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C49441 +
            (C1476 * C7926 + C1475 * C7927 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C795 -
           (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C255 +
          ((C1923 * C9113 + C1922 * C9114 + C9558 * C9115 + C9557 * C9116 +
            (C113 * C9544 + C9552 + C9552 + C49178 * C9546) * C9117) *
               C49065 * C49422 -
           (C9462 * C9117 + C9218 * C9116 + C1755 * C9115 + C1290 * C9114 +
            C1289 * C9113) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49161 * C49454 +
            (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
               C795 -
           ((C15545 + C15546 + C15547) * C49161 * C49414 +
            (C15548 + C15549 + C15550) * C49161 * C49441 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49161 * C49454) *
               C49422) *
              C255 +
          (((C15105 * C693 + C15962 + C15962 + C15102 * C703 + C15107 * C2325 +
             C15963 + C15963 + C15103 * C2337 + C15109 * C3333 + C15964 +
             C15964 + C49428 * C3339) *
                C49161 * C49454 +
            (C15105 * C694 + C15965 + C15965 + C15102 * C704 + C15107 * C2327 +
             C15966 + C15966 + C15103 * C2339 + C15109 * C3334 + C15967 +
             C15967 + C49428 * C3340) *
                C49161 * C49441 +
            (C15105 * C695 + C15968 + C15968 + C15102 * C705 + C15107 * C2329 +
             C15969 + C15969 + C15103 * C2341 + C15109 * C3335 + C15970 +
             C15970 + C49428 * C3341) *
                C49161 * C49414) *
               C49422 -
           ((C15357 + C15358 + C15359) * C49161 * C49414 +
            (C15360 + C15361 + C15362) * C49161 * C49441 +
            (C15109 * C2325 + C15339 + C15339 + C49428 * C2337 + C15107 * C693 +
             C15340 + C15340 + C15103 * C703 + C15105 * C263 + C15341 + C15341 +
             C15102 * C275) *
                C49161 * C49454) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
             C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
             C49428 * C954) *
                C49457 +
            (C16680 + C16681 + C16682) * C49445 + C17107 * C49425) *
               C49065 * C795 -
           ((C17290 + C17291 + C17292) * C49425 +
            (C17293 + C17294 + C17295) * C49445 +
            (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
             C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
             C15102 * C407) *
                C49457) *
               C49065 * C49422) *
              C255 +
          (((C17295 + C17294 + C17293) * C49457 +
            (C17292 + C17291 + C17290) * C49445 +
            (C15105 * C1901 + C17275 + C17275 + C15102 * C1907 +
             C15107 * C9784 + C17276 + C17276 + C15103 * C9788 +
             C15109 * C10682 + C17277 + C17277 + C49428 * C10684) *
                C49425) *
               C49065 * C49422 -
           ((C17114 + C17115 + C17116) * C49425 +
            (C16685 + C16684 + C16683) * C49445 +
            (C16682 + C16681 + C16680) * C49457) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[134] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
            C1289 * C49445 + C1290 * C49425) *
               C1077 +
           (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
              C941 -
          ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
           (C1922 * C49425 + C1923 * C49445 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
               C1077) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C49457 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C49445 +
            (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C49425) *
               C1077 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C49457 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C49445 +
            (C113 * C2328 + C2347 + C2347 + C49178 * C2340) * C49425) *
               C1078 +
           ((C113 * C946 + C962 + C962 + C49178 * C956) * C49457 +
            (C113 * C2329 + C2348 + C2348 + C49178 * C2341) * C49445 +
            (C113 * C2330 + C2349 + C2349 + C49178 * C2342) * C49425) *
               C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C941 -
          (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
           (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
              C942 +
          ((C113 * C944 + C960 + C960 + C49178 * C954) * C49161 * C103 +
           (C113 * C945 + C961 + C961 + C49178 * C955) * C49161 * C104 +
           (C113 * C946 + C962 + C962 + C49178 * C956) * C49161 * C105 +
           (C113 * C947 + C963 + C963 + C49178 * C957) * C49161 * C106 +
           (C113 * C948 + C964 + C964 + C49178 * C958) * C49161 * C107) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
            C1289 * C7927 + C1290 * C49425) *
               C49454 +
           (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
              C941 -
          ((C8242 + C8243 + C8244) * C49414 + (C8245 + C8246 + C8247) * C49441 +
           (C1922 * C49425 + C1923 * C7927 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
               C49454) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C7926 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C7927 +
            (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C49425) *
               C49454 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C7926 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C7927 +
            (C113 * C2328 + C2347 + C2347 + C49178 * C2340) * C49425) *
               C49441 +
           ((C113 * C946 + C962 + C962 + C49178 * C956) * C7926 +
            (C113 * C2329 + C2348 + C2348 + C49178 * C2341) * C7927 +
            (C113 * C2330 + C2349 + C2349 + C49178 * C2342) * C49425) *
               C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 + C1289 * C9114 +
           C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
              C49065 * C941 -
          (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
           (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
              C49065 * C942 +
          ((C113 * C944 + C960 + C960 + C49178 * C954) * C9113 +
           (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C9114 +
           (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C9115 +
           (C113 * C9784 + C9791 + C9791 + C49178 * C9788) * C9116 +
           (C113 * C9785 + C9792 + C9792 + C49178 * C9789) * C9117) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
            C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
            C49428 * C954) *
               C49161 * C49454 +
           (C15163 + C15164 + C15165) * C49161 * C49441 + C15174 * C49414) *
              C941 -
          ((C15545 + C15546 + C15547) * C49161 * C49414 +
           (C15548 + C15549 + C15550) * C49161 * C49441 +
           (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
            C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
            C15102 * C407) *
               C49161 * C49454) *
              C942 +
          ((C15105 * C944 + C16373 + C16373 + C15102 * C954 + C15107 * C2870 +
            C16374 + C16374 + C15103 * C2878 + C15109 * C3753 + C16375 +
            C16375 + C49428 * C3759) *
               C49161 * C49454 +
           (C15105 * C945 + C16376 + C16376 + C15102 * C955 + C15107 * C2869 +
            C16377 + C16377 + C15103 * C2877 + C15109 * C3754 + C16378 +
            C16378 + C49428 * C3760) *
               C49161 * C49441 +
           (C15105 * C946 + C16379 + C16379 + C15102 * C956 + C15107 * C2868 +
            C16380 + C16380 + C15103 * C2876 + C15109 * C3755 + C16381 +
            C16381 + C49428 * C3761) *
               C49161 * C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15105 * C115 + C15112 + C15112 + C15102 * C129 + C15107 * C395 +
            C15113 + C15113 + C15103 * C407 + C15109 * C944 + C15114 + C15114 +
            C49428 * C954) *
               C49457 +
           (C16680 + C16681 + C16682) * C49445 + C17107 * C49425) *
              C49065 * C941 -
          ((C17290 + C17291 + C17292) * C49425 +
           (C17293 + C17294 + C17295) * C49445 +
           (C15109 * C2870 + C15527 + C15527 + C49428 * C2878 + C15107 * C944 +
            C15528 + C15528 + C15103 * C954 + C15105 * C395 + C15529 + C15529 +
            C15102 * C407) *
               C49457) *
              C49065 * C942 +
          ((C15105 * C944 + C16373 + C16373 + C15102 * C954 + C15107 * C2870 +
            C16374 + C16374 + C15103 * C2878 + C15109 * C3753 + C16375 +
            C16375 + C49428 * C3759) *
               C49457 +
           (C15105 * C2325 + C17698 + C17698 + C15102 * C2337 + C15107 * C3333 +
            C17699 + C17699 + C15103 * C3339 + C15109 * C11120 + C17700 +
            C17700 + C49428 * C11124) *
               C49445 +
           (C15105 * C2326 + C17701 + C17701 + C15102 * C2338 +
            C15107 * C10248 + C17702 + C17702 + C15103 * C10252 +
            C15109 * C11121 + C17703 + C17703 + C49428 * C11125) *
               C49425) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[135] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49391 +
            (C32360 + C32361) * C49223) *
               C49070 +
           ((C30874 + C30875) * C49391 + C32334 * C49223) * C49078 +
           C35080 * C26398) *
              C49149 * C49132 * C110 -
          (((C31050 + C31051) * C49223 + (C30879 + C30878) * C49391) * C26398 +
           ((C31052 + C31053) * C49223 + (C30877 + C30876) * C49391) * C49078 +
           (C32343 * C49223 + (C30875 + C30874) * C49391) * C49070) *
              C49149 * C49132 * C111 +
          (C35080 * C49070 +
           (C30883 * C49391 + (C31051 + C31050) * C49223) * C49078 +
           ((C30881 + C30880) * C49391 +
            (C30825 * C259 + C31036 + C31036 + C30823 * C271 + C30827 * C697 +
             C31037 + C31037 + C49265 * C707) *
                C49223) *
               C26398) *
              C49149 * C49132 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[136] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49391 +
             (C32360 + C32361) * C49223) *
                C49070 +
            ((C30874 + C30875) * C49391 + C32334 * C49223) * C49078 +
            C35080 * C26398) *
               C49149 * C255 -
           (((C32130 + C32131) * C49223 + C35275 * C49391) * C26398 +
            (C32342 * C49223 + C32343 * C49391) * C49078 +
            ((C32363 + C32362) * C49223 + (C32361 + C32360) * C49391) *
                C49070) *
               C49149 * C49420) *
              C257 +
          (((C32334 * C49391 + C32335 * C49223) * C49070 +
            (C35078 * C49391 + (C32131 + C32130) * C49223) * C49078 +
            ((C31051 + C31050) * C49391 +
             (C30825 * C594 + C31460 + C31460 + C30823 * C604 + C30827 * C1443 +
              C31461 + C31461 + C49265 * C1451) *
                 C49223) *
                C26398) *
               C49149 * C49420 -
           (((C31050 + C31051) * C49223 + (C30879 + C30878) * C49391) * C26398 +
            (C35275 * C49223 + (C30877 + C30876) * C49391) * C49078 +
            (C32343 * C49223 + (C30875 + C30874) * C49391) * C49070) *
               C49149 * C255) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[137] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49391 +
             (C32360 + C32361) * C49223) *
                C49070 +
            ((C30874 + C30875) * C49391 + C32334 * C49223) * C49078 +
            C35080 * C26398) *
               C389 -
           (((C35478 + C35479) * C49223 + (C31222 + C31223) * C49391) * C26398 +
            ((C32584 + C32585) * C49223 + (C31224 + C31225) * C49391) * C49078 +
            ((C33157 + C33158) * C49223 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49391) *
                C49070) *
               C49422) *
              C49132 * C257 +
          ((((C31225 + C31224) * C49391 + (C32585 + C32584) * C49223) * C49070 +
            ((C31223 + C31222) * C49391 + (C35479 + C35478) * C49223) * C49078 +
            ((C31221 + C31220) * C49391 +
             (C30825 * C696 + C31598 + C31598 + C30823 * C706 + C30827 * C2677 +
              C31599 + C31599 + C49265 * C2679) *
                 C49223) *
                C26398) *
               C49422 -
           (((C31050 + C31051) * C49223 + (C30879 + C30878) * C49391) * C26398 +
            (C35275 * C49223 + (C30877 + C30876) * C49391) * C49078 +
            (C32343 * C49223 + (C30875 + C30874) * C49391) * C49070) *
               C389) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[138] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49391 +
             (C32360 + C32361) * C49223) *
                C49070 +
            ((C30874 + C30875) * C49391 + C32334 * C49223) * C49078 +
            C35080 * C26398) *
               C49149 * C521 -
           (((C32130 + C32131) * C49223 + C35275 * C49391) * C26398 +
            (C32342 * C49223 + C32343 * C49391) * C49078 +
            ((C32363 + C32362) * C49223 + (C32361 + C32360) * C49391) *
                C49070) *
               C49149 * C49420) *
              C523 +
          (((C32334 * C49391 + C32335 * C49223) * C49070 +
            (C35078 * C49391 + (C32131 + C32130) * C49223) * C49078 +
            ((C31051 + C31050) * C49391 +
             (C30825 * C594 + C31460 + C31460 + C30823 * C604 + C30827 * C1443 +
              C31461 + C31461 + C49265 * C1451) *
                 C49223) *
                C26398) *
               C49149 * C49420 -
           (((C31050 + C31051) * C49223 + (C30879 + C30878) * C49391) * C26398 +
            (C35275 * C49223 + (C30877 + C30876) * C49391) * C49078 +
            (C32343 * C49223 + (C30875 + C30874) * C49391) * C49070) *
               C49149 * C521) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[139] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49391 +
            (C32360 + C32361) * C49223) *
               C49070 +
           ((C30874 + C30875) * C49391 + C32334 * C49223) * C49078 +
           C35080 * C26398) *
              C49149 * C587 -
          (((C32130 + C32131) * C49223 + C35275 * C49391) * C26398 +
           (C32342 * C49223 + C32343 * C49391) * C49078 +
           ((C32363 + C32362) * C49223 + (C32361 + C32360) * C49391) * C49070) *
              C49149 * C588 +
          ((C32926 * C49391 + (C32940 + C32939) * C49223) * C49070 +
           (C32335 * C49391 + (C32365 + C32364) * C49223) * C49078 +
           ((C32131 + C32130) * C49391 +
            (C30825 * C1252 + C32346 + C32346 + C30823 * C1260 +
             C30827 * C1903 + C32347 + C32347 + C49265 * C1909) *
                C49223) *
               C26398) *
              C49149 * C589) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[140] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49391 +
             (C32360 + C32361) * C49223) *
                C49070 +
            ((C30874 + C30875) * C49391 + C32334 * C49223) * C49078 +
            C35080 * C26398) *
               C389 -
           (((C35478 + C35479) * C49223 + (C31222 + C31223) * C49391) * C26398 +
            ((C32584 + C32585) * C49223 + (C31224 + C31225) * C49391) * C49078 +
            ((C33157 + C33158) * C49223 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49391) *
                C49070) *
               C49422) *
              C521 +
          ((((C33158 + C33157) * C49391 + (C33156 + C33155) * C49223) * C49070 +
            ((C32585 + C32584) * C49391 + (C32583 + C32582) * C49223) * C49078 +
            ((C35479 + C35478) * C49391 +
             (C30825 * C1440 + C32572 + C32572 + C30823 * C1448 +
              C30827 * C2330 + C32573 + C32573 + C49265 * C2342) *
                 C49223) *
                C26398) *
               C49422 -
           (((C32130 + C32131) * C49223 + C35275 * C49391) * C26398 +
            (C32342 * C49223 + C32343 * C49391) * C49078 +
            ((C32363 + C32362) * C49223 + (C32361 + C32360) * C49391) *
                C49070) *
               C389) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[141] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49391 +
             (C32360 + C32361) * C49223) *
                C49070 +
            ((C30874 + C30875) * C49391 + C32334 * C49223) * C49078 +
            C35080 * C26398) *
               C795 -
           (((C35478 + C35479) * C49223 + (C31222 + C31223) * C49391) * C26398 +
            ((C32584 + C32585) * C49223 + (C31224 + C31225) * C49391) * C49078 +
            ((C33157 + C33158) * C49223 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49391) *
                C49070) *
               C49422) *
              C49132 * C523 +
          ((((C31225 + C31224) * C49391 + (C32585 + C32584) * C49223) * C49070 +
            ((C31223 + C31222) * C49391 + (C35479 + C35478) * C49223) * C49078 +
            ((C31221 + C31220) * C49391 +
             (C30825 * C696 + C31598 + C31598 + C30823 * C706 + C30827 * C2677 +
              C31599 + C31599 + C49265 * C2679) *
                 C49223) *
                C26398) *
               C49422 -
           (((C31050 + C31051) * C49223 + (C30879 + C30878) * C49391) * C26398 +
            (C35275 * C49223 + (C30877 + C30876) * C49391) * C49078 +
            (C32343 * C49223 + (C30875 + C30874) * C49391) * C49070) *
               C795) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[142] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49391 +
             (C32360 + C32361) * C49223) *
                C49070 +
            ((C30874 + C30875) * C49391 + C32334 * C49223) * C49078 +
            C35080 * C26398) *
               C795 -
           (((C35478 + C35479) * C49223 + (C31222 + C31223) * C49391) * C26398 +
            ((C32584 + C32585) * C49223 + (C31224 + C31225) * C49391) * C49078 +
            ((C33157 + C33158) * C49223 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49391) *
                C49070) *
               C49422) *
              C255 +
          ((((C33158 + C33157) * C49391 + (C33156 + C33155) * C49223) * C49070 +
            ((C32585 + C32584) * C49391 + (C32583 + C32582) * C49223) * C49078 +
            ((C35479 + C35478) * C49391 +
             (C30825 * C1440 + C32572 + C32572 + C30823 * C1448 +
              C30827 * C2330 + C32573 + C32573 + C49265 * C2342) *
                 C49223) *
                C26398) *
               C49422 -
           (((C32130 + C32131) * C49223 + C35275 * C49391) * C26398 +
            (C32342 * C49223 + C32343 * C49391) * C49078 +
            ((C32363 + C32362) * C49223 + (C32361 + C32360) * C49391) *
                C49070) *
               C795) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[143] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49391 +
            (C32360 + C32361) * C49223) *
               C49070 +
           ((C30874 + C30875) * C49391 + C32334 * C49223) * C49078 +
           C35080 * C26398) *
              C941 -
          (((C35478 + C35479) * C49223 + (C31222 + C31223) * C49391) * C26398 +
           ((C32584 + C32585) * C49223 + (C31224 + C31225) * C49391) * C49078 +
           ((C33157 + C33158) * C49223 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49391) *
               C49070) *
              C942 +
          (((C30825 * C944 + C31958 + C31958 + C30823 * C954 + C30827 * C2870 +
             C31959 + C31959 + C49265 * C2878) *
                C49391 +
            (C30825 * C2325 + C33693 + C33693 + C30823 * C2337 +
             C30827 * C3333 + C33694 + C33694 + C49265 * C3339) *
                C49223) *
               C49070 +
           ((C30825 * C945 + C31960 + C31960 + C30823 * C955 + C30827 * C2869 +
             C31961 + C31961 + C49265 * C2877) *
                C49391 +
            (C30825 * C2327 + C33697 + C33697 + C30823 * C2339 +
             C30827 * C3334 + C33698 + C33698 + C49265 * C3340) *
                C49223) *
               C49078 +
           ((C30825 * C946 + C31962 + C31962 + C30823 * C956 + C30827 * C2868 +
             C31963 + C31963 + C49265 * C2876) *
                C49391 +
            (C30825 * C2329 + C36548 + C36548 + C30823 * C2341 +
             C30827 * C3335 + C36549 + C36549 + C49265 * C3341) *
                C49223) *
               C26398) *
              C943) *
         C49132 * C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[144] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
             C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
             C36661 * C954) *
                C49391 +
            (C48083 * C263 + C36898 + C36898 + C49261 * C275 + C48071 * C693 +
             C36897 + C36897 + C49268 * C703 + C36666 * C2325 + C36896 +
             C36896 + C36661 * C2337) *
                C49223) *
               C23665 +
           ((C36720 + C36721 + C36722) * C49391 +
            (C36919 + C36918 + C36917) * C49223) *
               C49075) *
              C49149 * C49132 * C110 -
          (((C36914 + C36915 + C36916) * C49223 +
            (C36725 + C36724 + C36723) * C49391) *
               C49075 +
           ((C36917 + C36918 + C36919) * C49223 +
            (C36722 + C36721 + C36720) * C49391) *
               C23665) *
              C49149 * C49132 * C111 +
          ((C36730 * C49391 + (C36916 + C36915 + C36914) * C49223) * C23665 +
           ((C36728 + C36727 + C36726) * C49391 +
            (C48083 * C260 + C36899 + C36899 + C49261 * C272 + C48071 * C696 +
             C36900 + C36900 + C49268 * C706 + C36666 * C2677 + C36901 +
             C36901 + C36661 * C2679) *
                C49223) *
               C49075) *
              C49149 * C49132 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[145] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
              C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 +
              C36671 + C36661 * C954) *
                 C49391 +
             (C38307 + C38308 + C38309) * C49223) *
                C23665 +
            ((C36720 + C36721 + C36722) * C49391 + C38296 * C49223) * C49075) *
               C49149 * C255 -
           (((C38310 + C38311 + C38312) * C49223 + C38300 * C49391) * C49075 +
            ((C36666 * C2326 + C37366 + C37366 + C36661 * C2338 +
              C48071 * C1442 + C37365 + C37365 + C49268 * C1450 +
              C48083 * C591 + C37364 + C37364 + C49261 * C601) *
                 C49223 +
             (C38309 + C38308 + C38307) * C49391) *
                C23665) *
               C49149 * C49420) *
              C257 +
          (((C38296 * C49391 + (C38312 + C38311 + C38310) * C49223) * C23665 +
            ((C36916 + C36915 + C36914) * C49391 +
             (C48083 * C593 + C37370 + C37370 + C49261 * C603 + C48071 * C1440 +
              C37371 + C37371 + C49268 * C1448 + C36666 * C2330 + C37372 +
              C37372 + C36661 * C2342) *
                 C49223) *
                C49075) *
               C49149 * C49420 -
           (((C36914 + C36915 + C36916) * C49223 +
             (C36725 + C36724 + C36723) * C49391) *
                C49075 +
            (C38300 * C49223 + (C36722 + C36721 + C36720) * C49391) * C23665) *
               C49149 * C255) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[146] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
              C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 +
              C36671 + C36661 * C954) *
                 C49391 +
             (C38307 + C38308 + C38309) * C49223) *
                C23665 +
            ((C36720 + C36721 + C36722) * C49391 + C38296 * C49223) * C49075) *
               C389 -
           (((C38519 + C38520 + C38521) * C49223 +
             (C37105 + C37106 + C37107) * C49391) *
                C49075 +
            ((C36666 * C3333 + C37521 + C37521 + C36661 * C3339 +
              C48071 * C2325 + C37520 + C37520 + C49268 * C2337 +
              C48083 * C693 + C37519 + C37519 + C49261 * C703) *
                 C49223 +
             (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 +
              C48071 * C944 + C37085 + C37085 + C49268 * C954 + C48083 * C395 +
              C37086 + C37086 + C49261 * C407) *
                 C49391) *
                C23665) *
               C49422) *
              C49132 * C257 +
          ((((C37107 + C37106 + C37105) * C49391 +
             (C38521 + C38520 + C38519) * C49223) *
                C23665 +
            ((C37104 + C37103 + C37102) * C49391 +
             (C48083 * C695 + C37525 + C37525 + C49261 * C705 + C48071 * C2329 +
              C37526 + C37526 + C49268 * C2341 + C36666 * C3335 + C37527 +
              C37527 + C36661 * C3341) *
                 C49223) *
                C49075) *
               C49422 -
           (((C36914 + C36915 + C36916) * C49223 +
             (C36725 + C36724 + C36723) * C49391) *
                C49075 +
            (C38300 * C49223 + (C36722 + C36721 + C36720) * C49391) * C23665) *
               C389) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[147] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
              C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 +
              C36671 + C36661 * C954) *
                 C49391 +
             (C38307 + C38308 + C38309) * C49223) *
                C23665 +
            ((C36720 + C36721 + C36722) * C49391 + C38296 * C49223) * C49075) *
               C49149 * C521 -
           (((C38310 + C38311 + C38312) * C49223 + C38300 * C49391) * C49075 +
            ((C36666 * C2326 + C37366 + C37366 + C36661 * C2338 +
              C48071 * C1442 + C37365 + C37365 + C49268 * C1450 +
              C48083 * C591 + C37364 + C37364 + C49261 * C601) *
                 C49223 +
             (C38309 + C38308 + C38307) * C49391) *
                C23665) *
               C49149 * C49420) *
              C523 +
          (((C38296 * C49391 + (C38312 + C38311 + C38310) * C49223) * C23665 +
            ((C36916 + C36915 + C36914) * C49391 +
             (C48083 * C593 + C37370 + C37370 + C49261 * C603 + C48071 * C1440 +
              C37371 + C37371 + C49268 * C1448 + C36666 * C2330 + C37372 +
              C37372 + C36661 * C2342) *
                 C49223) *
                C49075) *
               C49149 * C49420 -
           (((C36914 + C36915 + C36916) * C49223 +
             (C36725 + C36724 + C36723) * C49391) *
                C49075 +
            (C38300 * C49223 + (C36722 + C36721 + C36720) * C49391) * C23665) *
               C49149 * C521) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[148] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
             C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
             C36661 * C954) *
                C49391 +
            (C38307 + C38308 + C38309) * C49223) *
               C23665 +
           ((C36720 + C36721 + C36722) * C49391 + C38296 * C49223) * C49075) *
              C49149 * C587 -
          (((C38310 + C38311 + C38312) * C49223 + C38300 * C49391) * C49075 +
           ((C38880 + C38881 + C38882) * C49223 +
            (C38309 + C38308 + C38307) * C49391) *
               C23665) *
              C49149 * C588 +
          (((C38882 + C38881 + C38880) * C49391 +
            (C48083 * C1254 + C38868 + C38868 + C49261 * C1262 +
             C48071 * C1901 + C38869 + C38869 + C49268 * C1907 +
             C36666 * C9784 + C38870 + C38870 + C36661 * C9788) *
                C49223) *
               C23665 +
           ((C38312 + C38311 + C38310) * C49391 +
            (C48083 * C1253 + C38871 + C38871 + C49261 * C1261 +
             C48071 * C1902 + C38872 + C38872 + C49268 * C1908 +
             C36666 * C10048 + C38873 + C38873 + C36661 * C10050) *
                C49223) *
               C49075) *
              C49149 * C589) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[149] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
              C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 +
              C36671 + C36661 * C954) *
                 C49391 +
             (C38307 + C38308 + C38309) * C49223) *
                C23665 +
            ((C36720 + C36721 + C36722) * C49391 + C38296 * C49223) * C49075) *
               C389 -
           (((C38519 + C38520 + C38521) * C49223 +
             (C37105 + C37106 + C37107) * C49391) *
                C49075 +
            ((C39095 + C39096 + C39097) * C49223 +
             (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 +
              C48071 * C944 + C37085 + C37085 + C49268 * C954 + C48083 * C395 +
              C37086 + C37086 + C49261 * C407) *
                 C49391) *
                C23665) *
               C49422) *
              C521 +
          ((((C39097 + C39096 + C39095) * C49391 +
             (C48083 * C1442 + C39083 + C39083 + C49261 * C1450 +
              C48071 * C2326 + C39084 + C39084 + C49268 * C2338 +
              C36666 * C10248 + C39085 + C39085 + C36661 * C10252) *
                 C49223) *
                C23665 +
            ((C38521 + C38520 + C38519) * C49391 +
             (C48083 * C1441 + C39086 + C39086 + C49261 * C1449 +
              C48071 * C2328 + C39087 + C39087 + C49268 * C2340 +
              C36666 * C10249 + C39088 + C39088 + C36661 * C10253) *
                 C49223) *
                C49075) *
               C49422 -
           (((C38310 + C38311 + C38312) * C49223 + C38300 * C49391) * C49075 +
            ((C38880 + C38881 + C38882) * C49223 +
             (C38309 + C38308 + C38307) * C49391) *
                C23665) *
               C389) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[150] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
              C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 +
              C36671 + C36661 * C954) *
                 C49391 +
             (C38307 + C38308 + C38309) * C49223) *
                C23665 +
            ((C36720 + C36721 + C36722) * C49391 + C38296 * C49223) * C49075) *
               C795 -
           (((C38519 + C38520 + C38521) * C49223 +
             (C37105 + C37106 + C37107) * C49391) *
                C49075 +
            ((C39095 + C39096 + C39097) * C49223 +
             (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 +
              C48071 * C944 + C37085 + C37085 + C49268 * C954 + C48083 * C395 +
              C37086 + C37086 + C49261 * C407) *
                 C49391) *
                C23665) *
               C49422) *
              C49132 * C523 +
          ((((C37107 + C37106 + C37105) * C49391 +
             (C38521 + C38520 + C38519) * C49223) *
                C23665 +
            ((C37104 + C37103 + C37102) * C49391 +
             (C48083 * C695 + C37525 + C37525 + C49261 * C705 + C48071 * C2329 +
              C37526 + C37526 + C49268 * C2341 + C36666 * C3335 + C37527 +
              C37527 + C36661 * C3341) *
                 C49223) *
                C49075) *
               C49422 -
           (((C36914 + C36915 + C36916) * C49223 +
             (C36725 + C36724 + C36723) * C49391) *
                C49075 +
            (C38300 * C49223 + (C36722 + C36721 + C36720) * C49391) * C23665) *
               C795) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[151] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
              C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 +
              C36671 + C36661 * C954) *
                 C49391 +
             (C38307 + C38308 + C38309) * C49223) *
                C23665 +
            ((C36720 + C36721 + C36722) * C49391 + C38296 * C49223) * C49075) *
               C795 -
           (((C38519 + C38520 + C38521) * C49223 +
             (C37105 + C37106 + C37107) * C49391) *
                C49075 +
            ((C39095 + C39096 + C39097) * C49223 +
             (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 +
              C48071 * C944 + C37085 + C37085 + C49268 * C954 + C48083 * C395 +
              C37086 + C37086 + C49261 * C407) *
                 C49391) *
                C23665) *
               C49422) *
              C255 +
          ((((C39097 + C39096 + C39095) * C49391 +
             (C48083 * C1442 + C39083 + C39083 + C49261 * C1450 +
              C48071 * C2326 + C39084 + C39084 + C49268 * C2338 +
              C36666 * C10248 + C39085 + C39085 + C36661 * C10252) *
                 C49223) *
                C23665 +
            ((C38521 + C38520 + C38519) * C49391 +
             (C48083 * C1441 + C39086 + C39086 + C49261 * C1449 +
              C48071 * C2328 + C39087 + C39087 + C49268 * C2340 +
              C36666 * C10249 + C39088 + C39088 + C36661 * C10253) *
                 C49223) *
                C49075) *
               C49422 -
           (((C38310 + C38311 + C38312) * C49223 + C38300 * C49391) * C49075 +
            ((C38880 + C38881 + C38882) * C49223 +
             (C38309 + C38308 + C38307) * C49391) *
                C23665) *
               C795) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[152] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
             C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
             C36661 * C954) *
                C49391 +
            (C38307 + C38308 + C38309) * C49223) *
               C23665 +
           ((C36720 + C36721 + C36722) * C49391 + C38296 * C49223) * C49075) *
              C941 -
          (((C38519 + C38520 + C38521) * C49223 +
            (C37105 + C37106 + C37107) * C49391) *
               C49075 +
           ((C39095 + C39096 + C39097) * C49223 +
            (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 + C48071 * C944 +
             C37085 + C37085 + C49268 * C954 + C48083 * C395 + C37086 + C37086 +
             C49261 * C407) *
                C49391) *
               C23665) *
              C942 +
          (((C48083 * C944 + C37930 + C37930 + C49261 * C954 + C48071 * C2870 +
             C37931 + C37931 + C49268 * C2878 + C36666 * C3753 + C37932 +
             C37932 + C36661 * C3759) *
                C49391 +
            (C48083 * C2325 + C39632 + C39632 + C49261 * C2337 +
             C48071 * C3333 + C39633 + C39633 + C49268 * C3339 +
             C36666 * C11120 + C39634 + C39634 + C36661 * C11124) *
                C49223) *
               C23665 +
           ((C48083 * C945 + C37933 + C37933 + C49261 * C955 + C48071 * C2869 +
             C37934 + C37934 + C49268 * C2877 + C36666 * C3754 + C37935 +
             C37935 + C36661 * C3760) *
                C49391 +
            (C48083 * C2327 + C39635 + C39635 + C49261 * C2339 +
             C48071 * C3334 + C39636 + C39636 + C49268 * C3340 +
             C36666 * C17877 + C39637 + C39637 + C36661 * C17879) *
                C49223) *
               C49075) *
              C943) *
         C49132 * C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[153] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49457 +
            (C30825 * C263 + C31035 + C31035 + C30823 * C275 + C30827 * C693 +
             C31034 + C31034 + C49265 * C703) *
                C49445 +
            (C30825 * C591 + C31454 + C31454 + C30823 * C601 + C30827 * C1442 +
             C31455 + C31455 + C49265 * C1450) *
                C49425) *
               C23665 +
           ((C30874 + C30875) * C49457 + (C31055 + C31054) * C49445 +
            (C32128 + C32129) * C49425) *
               C49075) *
              C49149 * C49132 * C110 -
          (((C32130 + C32131) * C49425 + (C31052 + C31053) * C49445 +
            (C30877 + C30876) * C49457) *
               C49075 +
           ((C32129 + C32128) * C49425 + (C31054 + C31055) * C49445 +
            (C30875 + C30874) * C49457) *
               C23665) *
              C49149 * C49132 * C111 +
          ((C30882 * C49457 + (C31053 + C31052) * C49445 +
            (C32131 + C32130) * C49425) *
               C23665 +
           (C30883 * C49457 + (C31051 + C31050) * C49445 +
            (C30825 * C594 + C31460 + C31460 + C30823 * C604 + C30827 * C1443 +
             C31461 + C31461 + C49265 * C1451) *
                C49425) *
               C49075) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
            C30831 + C30831 + C49265 * C407) *
               C49161 * C49463 +
           (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
           C30885 * C49392) *
              C49149 * C49132 * C110 -
          ((C30880 + C30881) * C49161 * C49392 +
           (C30879 + C30878) * C49161 * C49443 +
           (C30877 + C30876) * C49161 * C49456 +
           (C30875 + C30874) * C49161 * C49463) *
              C49149 * C49132 * C111 +
          (C30884 * C49463 + C30885 * C49456 +
           (C30881 + C30880) * C49161 * C49443 +
           (C30825 * C120 + C30856 + C30856 + C30823 * C134 + C30827 * C396 +
            C30857 + C30857 + C49265 * C408) *
               C49161 * C49392) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
            C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
            C49453 * C954 + C33808 * C2870 + C33814 + C33814 + C49407 * C2878) *
               C49161 * C23665 +
           (C33859 + C33860 + C33861 + C33862) * C49161 * C49075) *
              C49149 * C49132 * C110 -
          ((C33863 + C33864 + C33865 + C33866) * C49161 * C49075 +
           (C33862 + C33861 + C33860 + C33859) * C49161 * C23665) *
              C49149 * C49132 * C111 +
          ((C33866 + C33865 + C33864 + C33863) * C49161 * C23665 +
           (C33802 * C118 + C33839 + C33839 + C49465 * C132 + C33804 * C392 +
            C33840 + C33840 + C49462 * C404 + C33806 * C947 + C33841 + C33841 +
            C49453 * C957 + C33808 * C2871 + C33842 + C33842 + C49407 * C2879) *
               C49161 * C49075) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[154] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49457 +
             (C32360 + C32361) * C49445 + (C32362 + C32363) * C49425) *
                C23665 +
            ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
                C49075) *
               C49149 * C255 -
           (((C32364 + C32365) * C49425 + C32342 * C49445 + C32343 * C49457) *
                C49075 +
            ((C30827 * C1901 + C32344 + C32344 + C49265 * C1907 +
              C30825 * C1254 + C32345 + C32345 + C30823 * C1262) *
                 C49425 +
             (C32363 + C32362) * C49445 + (C32361 + C32360) * C49457) *
                C23665) *
               C49149 * C49420) *
              C257 +
          (((C32334 * C49457 + C32335 * C49445 + (C32365 + C32364) * C49425) *
                C23665 +
            ((C31053 + C31052) * C49457 + (C32131 + C32130) * C49445 +
             (C30825 * C1252 + C32346 + C32346 + C30823 * C1260 +
              C30827 * C1903 + C32347 + C32347 + C49265 * C1909) *
                 C49425) *
                C49075) *
               C49149 * C49420 -
           (((C32130 + C32131) * C49425 + (C31052 + C31053) * C49445 +
             (C30877 + C30876) * C49457) *
                C49075 +
            (C32342 * C49425 + C32343 * C49445 + (C30875 + C30874) * C49457) *
                C23665) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49161 * C49463 +
            (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
            C30885 * C49392) *
               C49149 * C255 -
           ((C31050 + C31051) * C49161 * C49392 +
            (C31052 + C31053) * C49161 * C49443 +
            (C31054 + C31055) * C49161 * C49456 +
            (C30827 * C693 + C31034 + C31034 + C49265 * C703 + C30825 * C263 +
             C31035 + C31035 + C30823 * C275) *
                C49161 * C49463) *
               C49149 * C49420) *
              C257 +
          (((C31055 + C31054) * C49161 * C49463 +
            (C31053 + C31052) * C49161 * C49456 +
            (C31051 + C31050) * C49161 * C49443 +
            (C30825 * C259 + C31036 + C31036 + C30823 * C271 + C30827 * C697 +
             C31037 + C31037 + C49265 * C707) *
                C49161 * C49392) *
               C49149 * C49420 -
           ((C30880 + C30881) * C49161 * C49392 +
            (C30879 + C30878) * C49161 * C49443 +
            (C30877 + C30876) * C49161 * C49456 +
            (C30875 + C30874) * C49161 * C49463) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
             C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
             C49453 * C954 + C33808 * C2870 + C33814 + C33814 +
             C49407 * C2878) *
                C49161 * C23665 +
            (C33859 + C33860 + C33861 + C33862) * C49161 * C49075) *
               C49149 * C255 -
           ((C34025 + C34026 + C34027 + C34028) * C49161 * C49075 +
            (C33808 * C3333 + C34009 + C34009 + C49407 * C3339 +
             C33806 * C2325 + C34010 + C34010 + C49453 * C2337 + C33804 * C693 +
             C34011 + C34011 + C49462 * C703 + C33802 * C263 + C34012 + C34012 +
             C49465 * C275) *
                C49161 * C23665) *
               C49149 * C49420) *
              C257 +
          (((C34028 + C34027 + C34026 + C34025) * C49161 * C23665 +
            (C33802 * C261 + C34013 + C34013 + C49465 * C273 + C33804 * C695 +
             C34014 + C34014 + C49462 * C705 + C33806 * C2329 + C34015 +
             C34015 + C49453 * C2341 + C33808 * C3335 + C34016 + C34016 +
             C49407 * C3341) *
                C49161 * C49075) *
               C49149 * C49420 -
           ((C33863 + C33864 + C33865 + C33866) * C49161 * C49075 +
            (C33862 + C33861 + C33860 + C33859) * C49161 * C23665) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[155] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49457 +
             (C32360 + C32361) * C49445 + (C32362 + C32363) * C49425) *
                C23665 +
            ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
                C49075) *
               C389 -
           (((C32582 + C32583) * C49425 + (C32584 + C32585) * C49445 +
             (C31224 + C31225) * C49457) *
                C49075 +
            ((C30827 * C2326 + C32570 + C32570 + C49265 * C2338 +
              C30825 * C1442 + C32571 + C32571 + C30823 * C1450) *
                 C49425 +
             (C30827 * C2325 + C31593 + C31593 + C49265 * C2337 +
              C30825 * C693 + C31592 + C31592 + C30823 * C703) *
                 C49445 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49457) *
                C23665) *
               C49422) *
              C49132 * C257 +
          ((((C31225 + C31224) * C49457 + (C32585 + C32584) * C49445 +
             (C32583 + C32582) * C49425) *
                C23665 +
            ((C31223 + C31222) * C49457 +
             (C30825 * C695 + C31596 + C31596 + C30823 * C705 + C30827 * C2329 +
              C31597 + C31597 + C49265 * C2341) *
                 C49445 +
             (C30825 * C1440 + C32572 + C32572 + C30823 * C1448 +
              C30827 * C2330 + C32573 + C32573 + C49265 * C2342) *
                 C49425) *
                C49075) *
               C49422 -
           (((C32130 + C32131) * C49425 + (C31052 + C31053) * C49445 +
             (C30877 + C30876) * C49457) *
                C49075 +
            (C32342 * C49425 + C32343 * C49445 + (C30875 + C30874) * C49457) *
                C23665) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49161 * C49463 +
            (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
            C30885 * C49392) *
               C389 -
           ((C31220 + C31221) * C49161 * C49392 +
            (C31222 + C31223) * C49161 * C49443 +
            (C31224 + C31225) * C49161 * C49456 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49161 * C49463) *
               C49422) *
              C49132 * C257 +
          (((C31225 + C31224) * C49161 * C49463 +
            (C31223 + C31222) * C49161 * C49456 +
            (C31221 + C31220) * C49161 * C49443 +
            (C30825 * C391 + C31206 + C31206 + C30823 * C403 + C30827 * C948 +
             C31207 + C31207 + C49265 * C958) *
                C49161 * C49392) *
               C49422 -
           ((C30880 + C30881) * C49161 * C49392 +
            (C30879 + C30878) * C49161 * C49443 +
            (C30877 + C30876) * C49161 * C49456 +
            (C30875 + C30874) * C49161 * C49463) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
             C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
             C49453 * C954 + C33808 * C2870 + C33814 + C33814 +
             C49407 * C2878) *
                C49161 * C23665 +
            (C33859 + C33860 + C33861 + C33862) * C49161 * C49075) *
               C389 -
           ((C34187 + C34188 + C34189 + C34190) * C49161 * C49075 +
            (C33808 * C3753 + C34171 + C34171 + C49407 * C3759 +
             C33806 * C2870 + C34172 + C34172 + C49453 * C2878 + C33804 * C944 +
             C34173 + C34173 + C49462 * C954 + C33802 * C395 + C34174 + C34174 +
             C49465 * C407) *
                C49161 * C23665) *
               C49422) *
              C49132 * C257 +
          (((C34190 + C34189 + C34188 + C34187) * C49161 * C23665 +
            (C33802 * C393 + C34175 + C34175 + C49465 * C405 + C33804 * C946 +
             C34176 + C34176 + C49462 * C956 + C33806 * C2868 + C34177 +
             C34177 + C49453 * C2876 + C33808 * C3755 + C34178 + C34178 +
             C49407 * C3761) *
                C49161 * C49075) *
               C49422 -
           ((C33863 + C33864 + C33865 + C33866) * C49161 * C49075 +
            (C33862 + C33861 + C33860 + C33859) * C49161 * C23665) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[156] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49457 +
             (C32360 + C32361) * C49445 + (C32362 + C32363) * C49425) *
                C23665 +
            ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
                C49075) *
               C49149 * C521 -
           (((C32364 + C32365) * C49425 + C32342 * C49445 + C32343 * C49457) *
                C49075 +
            ((C30827 * C1901 + C32344 + C32344 + C49265 * C1907 +
              C30825 * C1254 + C32345 + C32345 + C30823 * C1262) *
                 C49425 +
             (C32363 + C32362) * C49445 + (C32361 + C32360) * C49457) *
                C23665) *
               C49149 * C49420) *
              C523 +
          (((C32334 * C49457 + C32335 * C49445 + (C32365 + C32364) * C49425) *
                C23665 +
            ((C31053 + C31052) * C49457 + (C32131 + C32130) * C49445 +
             (C30825 * C1252 + C32346 + C32346 + C30823 * C1260 +
              C30827 * C1903 + C32347 + C32347 + C49265 * C1909) *
                 C49425) *
                C49075) *
               C49149 * C49420 -
           (((C32130 + C32131) * C49425 + (C31052 + C31053) * C49445 +
             (C30877 + C30876) * C49457) *
                C49075 +
            (C32342 * C49425 + C32343 * C49445 + (C30875 + C30874) * C49457) *
                C23665) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49161 * C49463 +
            (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
            C30885 * C49392) *
               C49149 * C521 -
           ((C31050 + C31051) * C49161 * C49392 +
            (C31052 + C31053) * C49161 * C49443 +
            (C31054 + C31055) * C49161 * C49456 +
            (C30827 * C693 + C31034 + C31034 + C49265 * C703 + C30825 * C263 +
             C31035 + C31035 + C30823 * C275) *
                C49161 * C49463) *
               C49149 * C49420) *
              C523 +
          (((C31055 + C31054) * C49161 * C49463 +
            (C31053 + C31052) * C49161 * C49456 +
            (C31051 + C31050) * C49161 * C49443 +
            (C30825 * C259 + C31036 + C31036 + C30823 * C271 + C30827 * C697 +
             C31037 + C31037 + C49265 * C707) *
                C49161 * C49392) *
               C49149 * C49420 -
           ((C30880 + C30881) * C49161 * C49392 +
            (C30879 + C30878) * C49161 * C49443 +
            (C30877 + C30876) * C49161 * C49456 +
            (C30875 + C30874) * C49161 * C49463) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
             C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
             C49453 * C954 + C33808 * C2870 + C33814 + C33814 +
             C49407 * C2878) *
                C49161 * C23665 +
            (C33859 + C33860 + C33861 + C33862) * C49161 * C49075) *
               C49149 * C521 -
           ((C34025 + C34026 + C34027 + C34028) * C49161 * C49075 +
            (C33808 * C3333 + C34009 + C34009 + C49407 * C3339 +
             C33806 * C2325 + C34010 + C34010 + C49453 * C2337 + C33804 * C693 +
             C34011 + C34011 + C49462 * C703 + C33802 * C263 + C34012 + C34012 +
             C49465 * C275) *
                C49161 * C23665) *
               C49149 * C49420) *
              C523 +
          (((C34028 + C34027 + C34026 + C34025) * C49161 * C23665 +
            (C33802 * C261 + C34013 + C34013 + C49465 * C273 + C33804 * C695 +
             C34014 + C34014 + C49462 * C705 + C33806 * C2329 + C34015 +
             C34015 + C49453 * C2341 + C33808 * C3335 + C34016 + C34016 +
             C49407 * C3341) *
                C49161 * C49075) *
               C49149 * C49420 -
           ((C33863 + C33864 + C33865 + C33866) * C49161 * C49075 +
            (C33862 + C33861 + C33860 + C33859) * C49161 * C23665) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[157] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49457 +
            (C32360 + C32361) * C49445 + C32926 * C49425) *
               C23665 +
           ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
               C49075) *
              C49149 * C587 -
          (((C32364 + C32365) * C49425 + C32342 * C49445 + C32343 * C49457) *
               C49075 +
           ((C32939 + C32940) * C49425 + (C32363 + C32362) * C49445 +
            (C32361 + C32360) * C49457) *
               C23665) *
              C49149 * C588 +
          ((C32926 * C49457 + (C32940 + C32939) * C49445 +
            (C30825 * C1738 + C32931 + C32931 + C30823 * C1744 +
             C30827 * C9301 + C32932 + C32932 + C49265 * C9305) *
                C49425) *
               C23665 +
           (C32335 * C49457 + (C32365 + C32364) * C49445 +
            (C30825 * C1739 + C32933 + C32933 + C30823 * C1745 +
             C30827 * C9302 + C32934 + C32934 + C49265 * C9306) *
                C49425) *
               C49075) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
            C30831 + C30831 + C49265 * C407) *
               C49161 * C49463 +
           (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
           C30885 * C49392) *
              C49149 * C587 -
          ((C31050 + C31051) * C49161 * C49392 +
           (C31052 + C31053) * C49161 * C49443 +
           (C31054 + C31055) * C49161 * C49456 +
           (C30827 * C693 + C31034 + C31034 + C49265 * C703 + C30825 * C263 +
            C31035 + C31035 + C30823 * C275) *
               C49161 * C49463) *
              C49149 * C588 +
          ((C30825 * C591 + C31454 + C31454 + C30823 * C601 + C30827 * C1442 +
            C31455 + C31455 + C49265 * C1450) *
               C49161 * C49463 +
           (C30825 * C592 + C31456 + C31456 + C30823 * C602 + C30827 * C1441 +
            C31457 + C31457 + C49265 * C1449) *
               C49161 * C49456 +
           (C30825 * C593 + C31458 + C31458 + C30823 * C603 + C30827 * C1440 +
            C31459 + C31459 + C49265 * C1448) *
               C49161 * C49443 +
           (C30825 * C594 + C31460 + C31460 + C30823 * C604 + C30827 * C1443 +
            C31461 + C31461 + C49265 * C1451) *
               C49161 * C49392) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
            C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
            C49453 * C954 + C33808 * C2870 + C33814 + C33814 + C49407 * C2878) *
               C49161 * C23665 +
           (C33859 + C33860 + C33861 + C33862) * C49161 * C49075) *
              C49149 * C587 -
          ((C34025 + C34026 + C34027 + C34028) * C49161 * C49075 +
           (C33808 * C3333 + C34009 + C34009 + C49407 * C3339 + C33806 * C2325 +
            C34010 + C34010 + C49453 * C2337 + C33804 * C693 + C34011 + C34011 +
            C49462 * C703 + C33802 * C263 + C34012 + C34012 + C49465 * C275) *
               C49161 * C23665) *
              C49149 * C588 +
          ((C33802 * C591 + C34419 + C34419 + C49465 * C601 + C33804 * C1442 +
            C34420 + C34420 + C49462 * C1450 + C33806 * C2326 + C34421 +
            C34421 + C49453 * C2338 + C33808 * C10248 + C34422 + C34422 +
            C49407 * C10252) *
               C49161 * C23665 +
           (C33802 * C592 + C34423 + C34423 + C49465 * C602 + C33804 * C1441 +
            C34424 + C34424 + C49462 * C1449 + C33806 * C2328 + C34425 +
            C34425 + C49453 * C2340 + C33808 * C10249 + C34426 + C34426 +
            C49407 * C10253) *
               C49161 * C49075) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[158] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49457 +
             (C32360 + C32361) * C49445 + C32926 * C49425) *
                C23665 +
            ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
                C49075) *
               C389 -
           (((C32582 + C32583) * C49425 + (C32584 + C32585) * C49445 +
             (C31224 + C31225) * C49457) *
                C49075 +
            ((C33155 + C33156) * C49425 + (C33157 + C33158) * C49445 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49457) *
                C23665) *
               C49422) *
              C521 +
          ((((C33158 + C33157) * C49457 + (C33156 + C33155) * C49445 +
             (C30825 * C1901 + C33143 + C33143 + C30823 * C1907 +
              C30827 * C9784 + C33144 + C33144 + C49265 * C9788) *
                 C49425) *
                C23665 +
            ((C32585 + C32584) * C49457 + (C32583 + C32582) * C49445 +
             (C30825 * C1902 + C33145 + C33145 + C30823 * C1908 +
              C30827 * C10048 + C33146 + C33146 + C49265 * C10050) *
                 C49425) *
                C49075) *
               C49422 -
           (((C32364 + C32365) * C49425 + C32342 * C49445 + C32343 * C49457) *
                C49075 +
            ((C32939 + C32940) * C49425 + (C32363 + C32362) * C49445 +
             (C32361 + C32360) * C49457) *
                C23665) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49161 * C49463 +
            (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
            C30885 * C49392) *
               C389 -
           ((C31220 + C31221) * C49161 * C49392 +
            (C31222 + C31223) * C49161 * C49443 +
            (C31224 + C31225) * C49161 * C49456 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49161 * C49463) *
               C49422) *
              C521 +
          (((C30825 * C693 + C31592 + C31592 + C30823 * C703 + C30827 * C2325 +
             C31593 + C31593 + C49265 * C2337) *
                C49161 * C49463 +
            (C30825 * C694 + C31594 + C31594 + C30823 * C704 + C30827 * C2327 +
             C31595 + C31595 + C49265 * C2339) *
                C49161 * C49456 +
            (C30825 * C695 + C31596 + C31596 + C30823 * C705 + C30827 * C2329 +
             C31597 + C31597 + C49265 * C2341) *
                C49161 * C49443 +
            (C30825 * C696 + C31598 + C31598 + C30823 * C706 + C30827 * C2677 +
             C31599 + C31599 + C49265 * C2679) *
                C49161 * C49392) *
               C49422 -
           ((C31050 + C31051) * C49161 * C49392 +
            (C31052 + C31053) * C49161 * C49443 +
            (C31054 + C31055) * C49161 * C49456 +
            (C30827 * C693 + C31034 + C31034 + C49265 * C703 + C30825 * C263 +
             C31035 + C31035 + C30823 * C275) *
                C49161 * C49463) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
             C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
             C49453 * C954 + C33808 * C2870 + C33814 + C33814 +
             C49407 * C2878) *
                C49161 * C23665 +
            (C33859 + C33860 + C33861 + C33862) * C49161 * C49075) *
               C389 -
           ((C34187 + C34188 + C34189 + C34190) * C49161 * C49075 +
            (C33808 * C3753 + C34171 + C34171 + C49407 * C3759 +
             C33806 * C2870 + C34172 + C34172 + C49453 * C2878 + C33804 * C944 +
             C34173 + C34173 + C49462 * C954 + C33802 * C395 + C34174 + C34174 +
             C49465 * C407) *
                C49161 * C23665) *
               C49422) *
              C521 +
          (((C33802 * C693 + C34557 + C34557 + C49465 * C703 + C33804 * C2325 +
             C34558 + C34558 + C49462 * C2337 + C33806 * C3333 + C34559 +
             C34559 + C49453 * C3339 + C33808 * C11120 + C34560 + C34560 +
             C49407 * C11124) *
                C49161 * C23665 +
            (C33802 * C694 + C34561 + C34561 + C49465 * C704 + C33804 * C2327 +
             C34562 + C34562 + C49462 * C2339 + C33806 * C3334 + C34563 +
             C34563 + C49453 * C3340 + C33808 * C17877 + C34564 + C34564 +
             C49407 * C17879) *
                C49161 * C49075) *
               C49422 -
           ((C34025 + C34026 + C34027 + C34028) * C49161 * C49075 +
            (C33808 * C3333 + C34009 + C34009 + C49407 * C3339 +
             C33806 * C2325 + C34010 + C34010 + C49453 * C2337 + C33804 * C693 +
             C34011 + C34011 + C49462 * C703 + C33802 * C263 + C34012 + C34012 +
             C49465 * C275) *
                C49161 * C23665) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[159] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49457 +
             (C32360 + C32361) * C49445 + C32926 * C49425) *
                C23665 +
            ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
                C49075) *
               C795 -
           (((C32582 + C32583) * C49425 + (C32584 + C32585) * C49445 +
             (C31224 + C31225) * C49457) *
                C49075 +
            ((C33155 + C33156) * C49425 + (C33157 + C33158) * C49445 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49457) *
                C23665) *
               C49422) *
              C49132 * C523 +
          ((((C31225 + C31224) * C49457 + (C32585 + C32584) * C49445 +
             (C32583 + C32582) * C49425) *
                C23665 +
            ((C31223 + C31222) * C49457 +
             (C30825 * C695 + C31596 + C31596 + C30823 * C705 + C30827 * C2329 +
              C31597 + C31597 + C49265 * C2341) *
                 C49445 +
             (C30825 * C1440 + C32572 + C32572 + C30823 * C1448 +
              C30827 * C2330 + C32573 + C32573 + C49265 * C2342) *
                 C49425) *
                C49075) *
               C49422 -
           (((C32130 + C32131) * C49425 + (C31052 + C31053) * C49445 +
             (C30877 + C30876) * C49457) *
                C49075 +
            (C32342 * C49425 + C32343 * C49445 + (C30875 + C30874) * C49457) *
                C23665) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49161 * C49463 +
            (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
            C30885 * C49392) *
               C795 -
           ((C31220 + C31221) * C49161 * C49392 +
            (C31222 + C31223) * C49161 * C49443 +
            (C31224 + C31225) * C49161 * C49456 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49161 * C49463) *
               C49422) *
              C49132 * C523 +
          (((C31225 + C31224) * C49161 * C49463 +
            (C31223 + C31222) * C49161 * C49456 +
            (C31221 + C31220) * C49161 * C49443 +
            (C30825 * C391 + C31206 + C31206 + C30823 * C403 + C30827 * C948 +
             C31207 + C31207 + C49265 * C958) *
                C49161 * C49392) *
               C49422 -
           ((C30880 + C30881) * C49161 * C49392 +
            (C30879 + C30878) * C49161 * C49443 +
            (C30877 + C30876) * C49161 * C49456 +
            (C30875 + C30874) * C49161 * C49463) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
             C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
             C49453 * C954 + C33808 * C2870 + C33814 + C33814 +
             C49407 * C2878) *
                C49161 * C23665 +
            (C33859 + C33860 + C33861 + C33862) * C49161 * C49075) *
               C795 -
           ((C34187 + C34188 + C34189 + C34190) * C49161 * C49075 +
            (C33808 * C3753 + C34171 + C34171 + C49407 * C3759 +
             C33806 * C2870 + C34172 + C34172 + C49453 * C2878 + C33804 * C944 +
             C34173 + C34173 + C49462 * C954 + C33802 * C395 + C34174 + C34174 +
             C49465 * C407) *
                C49161 * C23665) *
               C49422) *
              C49132 * C523 +
          (((C34190 + C34189 + C34188 + C34187) * C49161 * C23665 +
            (C33802 * C393 + C34175 + C34175 + C49465 * C405 + C33804 * C946 +
             C34176 + C34176 + C49462 * C956 + C33806 * C2868 + C34177 +
             C34177 + C49453 * C2876 + C33808 * C3755 + C34178 + C34178 +
             C49407 * C3761) *
                C49161 * C49075) *
               C49422 -
           ((C33863 + C33864 + C33865 + C33866) * C49161 * C49075 +
            (C33862 + C33861 + C33860 + C33859) * C49161 * C23665) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[160] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49457 +
             (C32360 + C32361) * C49445 + C32926 * C49425) *
                C23665 +
            ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
                C49075) *
               C795 -
           (((C32582 + C32583) * C49425 + (C32584 + C32585) * C49445 +
             (C31224 + C31225) * C49457) *
                C49075 +
            ((C33155 + C33156) * C49425 + (C33157 + C33158) * C49445 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49457) *
                C23665) *
               C49422) *
              C255 +
          ((((C33158 + C33157) * C49457 + (C33156 + C33155) * C49445 +
             (C30825 * C1901 + C33143 + C33143 + C30823 * C1907 +
              C30827 * C9784 + C33144 + C33144 + C49265 * C9788) *
                 C49425) *
                C23665 +
            ((C32585 + C32584) * C49457 + (C32583 + C32582) * C49445 +
             (C30825 * C1902 + C33145 + C33145 + C30823 * C1908 +
              C30827 * C10048 + C33146 + C33146 + C49265 * C10050) *
                 C49425) *
                C49075) *
               C49422 -
           (((C32364 + C32365) * C49425 + C32342 * C49445 + C32343 * C49457) *
                C49075 +
            ((C32939 + C32940) * C49425 + (C32363 + C32362) * C49445 +
             (C32361 + C32360) * C49457) *
                C23665) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49161 * C49463 +
            (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
            C30885 * C49392) *
               C795 -
           ((C31220 + C31221) * C49161 * C49392 +
            (C31222 + C31223) * C49161 * C49443 +
            (C31224 + C31225) * C49161 * C49456 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49161 * C49463) *
               C49422) *
              C255 +
          (((C30825 * C693 + C31592 + C31592 + C30823 * C703 + C30827 * C2325 +
             C31593 + C31593 + C49265 * C2337) *
                C49161 * C49463 +
            (C30825 * C694 + C31594 + C31594 + C30823 * C704 + C30827 * C2327 +
             C31595 + C31595 + C49265 * C2339) *
                C49161 * C49456 +
            (C30825 * C695 + C31596 + C31596 + C30823 * C705 + C30827 * C2329 +
             C31597 + C31597 + C49265 * C2341) *
                C49161 * C49443 +
            (C30825 * C696 + C31598 + C31598 + C30823 * C706 + C30827 * C2677 +
             C31599 + C31599 + C49265 * C2679) *
                C49161 * C49392) *
               C49422 -
           ((C31050 + C31051) * C49161 * C49392 +
            (C31052 + C31053) * C49161 * C49443 +
            (C31054 + C31055) * C49161 * C49456 +
            (C30827 * C693 + C31034 + C31034 + C49265 * C703 + C30825 * C263 +
             C31035 + C31035 + C30823 * C275) *
                C49161 * C49463) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
             C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
             C49453 * C954 + C33808 * C2870 + C33814 + C33814 +
             C49407 * C2878) *
                C49161 * C23665 +
            (C33859 + C33860 + C33861 + C33862) * C49161 * C49075) *
               C795 -
           ((C34187 + C34188 + C34189 + C34190) * C49161 * C49075 +
            (C33808 * C3753 + C34171 + C34171 + C49407 * C3759 +
             C33806 * C2870 + C34172 + C34172 + C49453 * C2878 + C33804 * C944 +
             C34173 + C34173 + C49462 * C954 + C33802 * C395 + C34174 + C34174 +
             C49465 * C407) *
                C49161 * C23665) *
               C49422) *
              C255 +
          (((C33802 * C693 + C34557 + C34557 + C49465 * C703 + C33804 * C2325 +
             C34558 + C34558 + C49462 * C2337 + C33806 * C3333 + C34559 +
             C34559 + C49453 * C3339 + C33808 * C11120 + C34560 + C34560 +
             C49407 * C11124) *
                C49161 * C23665 +
            (C33802 * C694 + C34561 + C34561 + C49465 * C704 + C33804 * C2327 +
             C34562 + C34562 + C49462 * C2339 + C33806 * C3334 + C34563 +
             C34563 + C49453 * C3340 + C33808 * C17877 + C34564 + C34564 +
             C49407 * C17879) *
                C49161 * C49075) *
               C49422 -
           ((C34025 + C34026 + C34027 + C34028) * C49161 * C49075 +
            (C33808 * C3333 + C34009 + C34009 + C49407 * C3339 +
             C33806 * C2325 + C34010 + C34010 + C49453 * C2337 + C33804 * C693 +
             C34011 + C34011 + C49462 * C703 + C33802 * C263 + C34012 + C34012 +
             C49465 * C275) *
                C49161 * C23665) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[161] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49457 +
            (C32360 + C32361) * C49445 + C32926 * C49425) *
               C23665 +
           ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
               C49075) *
              C941 -
          (((C32582 + C32583) * C49425 + (C32584 + C32585) * C49445 +
            (C31224 + C31225) * C49457) *
               C49075 +
           ((C33155 + C33156) * C49425 + (C33157 + C33158) * C49445 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49457) *
               C23665) *
              C942 +
          (((C30825 * C944 + C31958 + C31958 + C30823 * C954 + C30827 * C2870 +
             C31959 + C31959 + C49265 * C2878) *
                C49457 +
            (C30825 * C2325 + C33693 + C33693 + C30823 * C2337 +
             C30827 * C3333 + C33694 + C33694 + C49265 * C3339) *
                C49445 +
            (C30825 * C2326 + C33695 + C33695 + C30823 * C2338 +
             C30827 * C10248 + C33696 + C33696 + C49265 * C10252) *
                C49425) *
               C23665 +
           ((C30825 * C945 + C31960 + C31960 + C30823 * C955 + C30827 * C2869 +
             C31961 + C31961 + C49265 * C2877) *
                C49457 +
            (C30825 * C2327 + C33697 + C33697 + C30823 * C2339 +
             C30827 * C3334 + C33698 + C33698 + C49265 * C3340) *
                C49445 +
            (C30825 * C2328 + C33699 + C33699 + C30823 * C2340 +
             C30827 * C10249 + C33700 + C33700 + C49265 * C10253) *
                C49425) *
               C49075) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
            C30831 + C30831 + C49265 * C407) *
               C49161 * C49463 +
           (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
           C30885 * C49392) *
              C941 -
          ((C31220 + C31221) * C49161 * C49392 +
           (C31222 + C31223) * C49161 * C49443 +
           (C31224 + C31225) * C49161 * C49456 +
           (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
            C31205 + C31205 + C30823 * C407) *
               C49161 * C49463) *
              C942 +
          ((C30825 * C944 + C31958 + C31958 + C30823 * C954 + C30827 * C2870 +
            C31959 + C31959 + C49265 * C2878) *
               C49161 * C49463 +
           (C30825 * C945 + C31960 + C31960 + C30823 * C955 + C30827 * C2869 +
            C31961 + C31961 + C49265 * C2877) *
               C49161 * C49456 +
           (C30825 * C946 + C31962 + C31962 + C30823 * C956 + C30827 * C2868 +
            C31963 + C31963 + C49265 * C2876) *
               C49161 * C49443 +
           (C30825 * C947 + C31964 + C31964 + C30823 * C957 + C30827 * C2871 +
            C31965 + C31965 + C49265 * C2879) *
               C49161 * C49392) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C33802 * C115 + C33811 + C33811 + C49465 * C129 + C33804 * C395 +
            C33812 + C33812 + C49462 * C407 + C33806 * C944 + C33813 + C33813 +
            C49453 * C954 + C33808 * C2870 + C33814 + C33814 + C49407 * C2878) *
               C49161 * C23665 +
           (C33859 + C33860 + C33861 + C33862) * C49161 * C49075) *
              C941 -
          ((C34187 + C34188 + C34189 + C34190) * C49161 * C49075 +
           (C33808 * C3753 + C34171 + C34171 + C49407 * C3759 + C33806 * C2870 +
            C34172 + C34172 + C49453 * C2878 + C33804 * C944 + C34173 + C34173 +
            C49462 * C954 + C33802 * C395 + C34174 + C34174 + C49465 * C407) *
               C49161 * C23665) *
              C942 +
          ((C33802 * C944 + C34923 + C34923 + C49465 * C954 + C33804 * C2870 +
            C34924 + C34924 + C49462 * C2878 + C33806 * C3753 + C34925 +
            C34925 + C49453 * C3759 + C33808 * C17972 + C34926 + C34926 +
            C49407 * C17976) *
               C49161 * C23665 +
           (C33802 * C945 + C34927 + C34927 + C49465 * C955 + C33804 * C2869 +
            C34928 + C34928 + C49462 * C2877 + C33806 * C3754 + C34929 +
            C34929 + C49453 * C3760 + C33808 * C17973 + C34930 + C34930 +
            C49407 * C17977) *
               C49161 * C49075) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[162] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
            C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
            C36661 * C954) *
               C49161 * C49070 +
           (C36720 + C36721 + C36722) * C49161 * C49078 + C36731 * C26398) *
              C49149 * C49132 * C110 -
          ((C36726 + C36727 + C36728) * C49161 * C26398 +
           (C36725 + C36724 + C36723) * C49161 * C49078 +
           (C36722 + C36721 + C36720) * C49161 * C49070) *
              C49149 * C49132 * C111 +
          (C36731 * C49070 + (C36728 + C36727 + C36726) * C49161 * C49078 +
           (C48083 * C119 + C36699 + C36699 + C49261 * C133 + C48071 * C391 +
            C36700 + C36700 + C49268 * C403 + C36666 * C948 + C36701 + C36701 +
            C36661 * C958) *
               C49161 * C26398) *
              C49149 * C49132 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[163] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
             C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
             C36661 * C954) *
                C49161 * C49070 +
            (C36720 + C36721 + C36722) * C49161 * C49078 + C36731 * C26398) *
               C49149 * C255 -
           ((C36914 + C36915 + C36916) * C49161 * C26398 +
            (C36917 + C36918 + C36919) * C49161 * C49078 +
            (C36666 * C2325 + C36896 + C36896 + C36661 * C2337 + C48071 * C693 +
             C36897 + C36897 + C49268 * C703 + C48083 * C263 + C36898 + C36898 +
             C49261 * C275) *
                C49161 * C49070) *
               C49149 * C49420) *
              C257 +
          (((C36919 + C36918 + C36917) * C49161 * C49070 +
            (C36916 + C36915 + C36914) * C49161 * C49078 +
            (C48083 * C260 + C36899 + C36899 + C49261 * C272 + C48071 * C696 +
             C36900 + C36900 + C49268 * C706 + C36666 * C2677 + C36901 +
             C36901 + C36661 * C2679) *
                C49161 * C26398) *
               C49149 * C49420 -
           ((C36726 + C36727 + C36728) * C49161 * C26398 +
            (C36725 + C36724 + C36723) * C49161 * C49078 +
            (C36722 + C36721 + C36720) * C49161 * C49070) *
               C49149 * C255) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[164] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
             C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
             C36661 * C954) *
                C49161 * C49070 +
            (C36720 + C36721 + C36722) * C49161 * C49078 + C36731 * C26398) *
               C389 -
           ((C37102 + C37103 + C37104) * C49161 * C26398 +
            (C37105 + C37106 + C37107) * C49161 * C49078 +
            (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 + C48071 * C944 +
             C37085 + C37085 + C49268 * C954 + C48083 * C395 + C37086 + C37086 +
             C49261 * C407) *
                C49161 * C49070) *
               C49422) *
              C49132 * C257 +
          (((C37107 + C37106 + C37105) * C49161 * C49070 +
            (C37104 + C37103 + C37102) * C49161 * C49078 +
            (C48083 * C392 + C37087 + C37087 + C49261 * C404 + C48071 * C947 +
             C37088 + C37088 + C49268 * C957 + C36666 * C2871 + C37089 +
             C37089 + C36661 * C2879) *
                C49161 * C26398) *
               C49422 -
           ((C36726 + C36727 + C36728) * C49161 * C26398 +
            (C36725 + C36724 + C36723) * C49161 * C49078 +
            (C36722 + C36721 + C36720) * C49161 * C49070) *
               C389) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[165] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
             C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
             C36661 * C954) *
                C49161 * C49070 +
            (C36720 + C36721 + C36722) * C49161 * C49078 + C36731 * C26398) *
               C49149 * C521 -
           ((C36914 + C36915 + C36916) * C49161 * C26398 +
            (C36917 + C36918 + C36919) * C49161 * C49078 +
            (C36666 * C2325 + C36896 + C36896 + C36661 * C2337 + C48071 * C693 +
             C36897 + C36897 + C49268 * C703 + C48083 * C263 + C36898 + C36898 +
             C49261 * C275) *
                C49161 * C49070) *
               C49149 * C49420) *
              C523 +
          (((C36919 + C36918 + C36917) * C49161 * C49070 +
            (C36916 + C36915 + C36914) * C49161 * C49078 +
            (C48083 * C260 + C36899 + C36899 + C49261 * C272 + C48071 * C696 +
             C36900 + C36900 + C49268 * C706 + C36666 * C2677 + C36901 +
             C36901 + C36661 * C2679) *
                C49161 * C26398) *
               C49149 * C49420 -
           ((C36726 + C36727 + C36728) * C49161 * C26398 +
            (C36725 + C36724 + C36723) * C49161 * C49078 +
            (C36722 + C36721 + C36720) * C49161 * C49070) *
               C49149 * C521) *
              C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[166] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
            C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
            C36661 * C954) *
               C49161 * C49070 +
           (C36720 + C36721 + C36722) * C49161 * C49078 + C36731 * C26398) *
              C49149 * C587 -
          ((C36914 + C36915 + C36916) * C49161 * C26398 +
           (C36917 + C36918 + C36919) * C49161 * C49078 +
           (C36666 * C2325 + C36896 + C36896 + C36661 * C2337 + C48071 * C693 +
            C36897 + C36897 + C49268 * C703 + C48083 * C263 + C36898 + C36898 +
            C49261 * C275) *
               C49161 * C49070) *
              C49149 * C588 +
          ((C48083 * C591 + C37364 + C37364 + C49261 * C601 + C48071 * C1442 +
            C37365 + C37365 + C49268 * C1450 + C36666 * C2326 + C37366 +
            C37366 + C36661 * C2338) *
               C49161 * C49070 +
           (C48083 * C592 + C37367 + C37367 + C49261 * C602 + C48071 * C1441 +
            C37368 + C37368 + C49268 * C1449 + C36666 * C2328 + C37369 +
            C37369 + C36661 * C2340) *
               C49161 * C49078 +
           (C48083 * C593 + C37370 + C37370 + C49261 * C603 + C48071 * C1440 +
            C37371 + C37371 + C49268 * C1448 + C36666 * C2330 + C37372 +
            C37372 + C36661 * C2342) *
               C49161 * C26398) *
              C49149 * C589) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[167] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
             C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
             C36661 * C954) *
                C49161 * C49070 +
            (C36720 + C36721 + C36722) * C49161 * C49078 + C36731 * C26398) *
               C389 -
           ((C37102 + C37103 + C37104) * C49161 * C26398 +
            (C37105 + C37106 + C37107) * C49161 * C49078 +
            (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 + C48071 * C944 +
             C37085 + C37085 + C49268 * C954 + C48083 * C395 + C37086 + C37086 +
             C49261 * C407) *
                C49161 * C49070) *
               C49422) *
              C521 +
          (((C48083 * C693 + C37519 + C37519 + C49261 * C703 + C48071 * C2325 +
             C37520 + C37520 + C49268 * C2337 + C36666 * C3333 + C37521 +
             C37521 + C36661 * C3339) *
                C49161 * C49070 +
            (C48083 * C694 + C37522 + C37522 + C49261 * C704 + C48071 * C2327 +
             C37523 + C37523 + C49268 * C2339 + C36666 * C3334 + C37524 +
             C37524 + C36661 * C3340) *
                C49161 * C49078 +
            (C48083 * C695 + C37525 + C37525 + C49261 * C705 + C48071 * C2329 +
             C37526 + C37526 + C49268 * C2341 + C36666 * C3335 + C37527 +
             C37527 + C36661 * C3341) *
                C49161 * C26398) *
               C49422 -
           ((C36914 + C36915 + C36916) * C49161 * C26398 +
            (C36917 + C36918 + C36919) * C49161 * C49078 +
            (C36666 * C2325 + C36896 + C36896 + C36661 * C2337 + C48071 * C693 +
             C36897 + C36897 + C49268 * C703 + C48083 * C263 + C36898 + C36898 +
             C49261 * C275) *
                C49161 * C49070) *
               C389) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[168] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
             C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
             C36661 * C954) *
                C49161 * C49070 +
            (C36720 + C36721 + C36722) * C49161 * C49078 + C36731 * C26398) *
               C795 -
           ((C37102 + C37103 + C37104) * C49161 * C26398 +
            (C37105 + C37106 + C37107) * C49161 * C49078 +
            (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 + C48071 * C944 +
             C37085 + C37085 + C49268 * C954 + C48083 * C395 + C37086 + C37086 +
             C49261 * C407) *
                C49161 * C49070) *
               C49422) *
              C49132 * C523 +
          (((C37107 + C37106 + C37105) * C49161 * C49070 +
            (C37104 + C37103 + C37102) * C49161 * C49078 +
            (C48083 * C392 + C37087 + C37087 + C49261 * C404 + C48071 * C947 +
             C37088 + C37088 + C49268 * C957 + C36666 * C2871 + C37089 +
             C37089 + C36661 * C2879) *
                C49161 * C26398) *
               C49422 -
           ((C36726 + C36727 + C36728) * C49161 * C26398 +
            (C36725 + C36724 + C36723) * C49161 * C49078 +
            (C36722 + C36721 + C36720) * C49161 * C49070) *
               C795) *
              C49132 * C49418)) /
        (p * q * std::sqrt(p + q));
    d2ee[169] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
             C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
             C36661 * C954) *
                C49161 * C49070 +
            (C36720 + C36721 + C36722) * C49161 * C49078 + C36731 * C26398) *
               C795 -
           ((C37102 + C37103 + C37104) * C49161 * C26398 +
            (C37105 + C37106 + C37107) * C49161 * C49078 +
            (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 + C48071 * C944 +
             C37085 + C37085 + C49268 * C954 + C48083 * C395 + C37086 + C37086 +
             C49261 * C407) *
                C49161 * C49070) *
               C49422) *
              C255 +
          (((C48083 * C693 + C37519 + C37519 + C49261 * C703 + C48071 * C2325 +
             C37520 + C37520 + C49268 * C2337 + C36666 * C3333 + C37521 +
             C37521 + C36661 * C3339) *
                C49161 * C49070 +
            (C48083 * C694 + C37522 + C37522 + C49261 * C704 + C48071 * C2327 +
             C37523 + C37523 + C49268 * C2339 + C36666 * C3334 + C37524 +
             C37524 + C36661 * C3340) *
                C49161 * C49078 +
            (C48083 * C695 + C37525 + C37525 + C49261 * C705 + C48071 * C2329 +
             C37526 + C37526 + C49268 * C2341 + C36666 * C3335 + C37527 +
             C37527 + C36661 * C3341) *
                C49161 * C26398) *
               C49422 -
           ((C36914 + C36915 + C36916) * C49161 * C26398 +
            (C36917 + C36918 + C36919) * C49161 * C49078 +
            (C36666 * C2325 + C36896 + C36896 + C36661 * C2337 + C48071 * C693 +
             C36897 + C36897 + C49268 * C703 + C48083 * C263 + C36898 + C36898 +
             C49261 * C275) *
                C49161 * C49070) *
               C795) *
              C49420) *
         C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[170] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C48083 * C115 + C36669 + C36669 + C49261 * C129 + C48071 * C395 +
            C36670 + C36670 + C49268 * C407 + C36666 * C944 + C36671 + C36671 +
            C36661 * C954) *
               C49161 * C49070 +
           (C36720 + C36721 + C36722) * C49161 * C49078 + C36731 * C26398) *
              C941 -
          ((C37102 + C37103 + C37104) * C49161 * C26398 +
           (C37105 + C37106 + C37107) * C49161 * C49078 +
           (C36666 * C2870 + C37084 + C37084 + C36661 * C2878 + C48071 * C944 +
            C37085 + C37085 + C49268 * C954 + C48083 * C395 + C37086 + C37086 +
            C49261 * C407) *
               C49161 * C49070) *
              C942 +
          ((C48083 * C944 + C37930 + C37930 + C49261 * C954 + C48071 * C2870 +
            C37931 + C37931 + C49268 * C2878 + C36666 * C3753 + C37932 +
            C37932 + C36661 * C3759) *
               C49161 * C49070 +
           (C48083 * C945 + C37933 + C37933 + C49261 * C955 + C48071 * C2869 +
            C37934 + C37934 + C49268 * C2877 + C36666 * C3754 + C37935 +
            C37935 + C36661 * C3760) *
               C49161 * C49078 +
           (C48083 * C946 + C37936 + C37936 + C49261 * C956 + C48071 * C2868 +
            C37937 + C37937 + C49268 * C2876 + C36666 * C3755 + C37938 +
            C37938 + C36661 * C3761) *
               C49161 * C26398) *
              C943) *
         C49132 * C49098) /
        (p * q * std::sqrt(p + q));
    d2ee[171] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C30825 * C115 + C30830 + C30830 + C30823 * C129 +
                     C30827 * C395 + C30831 + C30831 + C49265 * C407) *
                        C49161 * C49463 +
                    (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
                    C30885 * C49392) *
                       C49149 * C49132 * C110 -
                   ((C30880 + C30881) * C49161 * C49392 +
                    (C30879 + C30878) * C49161 * C49443 +
                    (C30877 + C30876) * C49161 * C49456 +
                    (C30875 + C30874) * C49161 * C49463) *
                       C49149 * C49132 * C111 +
                   (C30884 * C49463 + C30885 * C49456 +
                    (C30881 + C30880) * C49161 * C49443 +
                    (C30825 * C120 + C30856 + C30856 + C30823 * C134 +
                     C30827 * C396 + C30857 + C30857 + C49265 * C408) *
                        C49161 * C49392) *
                       C49149 * C49132 * C112)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 +
                      C30827 * C395 + C30831 + C30831 + C49265 * C407) *
                         C49457 +
                     (C30825 * C263 + C31035 + C31035 + C30823 * C275 +
                      C30827 * C693 + C31034 + C31034 + C49265 * C703) *
                         C49445 +
                     (C30825 * C591 + C31454 + C31454 + C30823 * C601 +
                      C30827 * C1442 + C31455 + C31455 + C49265 * C1450) *
                         C49425) *
                        C23665 +
                    ((C30874 + C30875) * C49457 + (C31055 + C31054) * C49445 +
                     (C32128 + C32129) * C49425) *
                        C49075) *
                       C49149 * C49132 * C110 -
                   (((C32130 + C32131) * C49425 + (C31052 + C31053) * C49445 +
                     (C30877 + C30876) * C49457) *
                        C49075 +
                    ((C32129 + C32128) * C49425 + (C31054 + C31055) * C49445 +
                     (C30875 + C30874) * C49457) *
                        C23665) *
                       C49149 * C49132 * C111 +
                   ((C30882 * C49457 + (C31053 + C31052) * C49445 +
                     (C32131 + C32130) * C49425) *
                        C23665 +
                    (C30883 * C49457 + (C31051 + C31050) * C49445 +
                     (C30825 * C594 + C31460 + C31460 + C30823 * C604 +
                      C30827 * C1443 + C31461 + C31461 + C49265 * C1451) *
                         C49425) *
                        C49075) *
                       C49149 * C49132 * C112)) /
                     (p * q * std::sqrt(p + q));
    d2ee[172] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49161 * C49463 +
            (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
            C30885 * C49392) *
               C49149 * C255 -
           ((C31050 + C31051) * C49161 * C49392 +
            (C31052 + C31053) * C49161 * C49443 +
            (C31054 + C31055) * C49161 * C49456 +
            (C30827 * C693 + C31034 + C31034 + C49265 * C703 + C30825 * C263 +
             C31035 + C31035 + C30823 * C275) *
                C49161 * C49463) *
               C49149 * C49420) *
              C257 +
          (((C31055 + C31054) * C49161 * C49463 +
            (C31053 + C31052) * C49161 * C49456 +
            (C31051 + C31050) * C49161 * C49443 +
            (C30825 * C259 + C31036 + C31036 + C30823 * C271 + C30827 * C697 +
             C31037 + C31037 + C49265 * C707) *
                C49161 * C49392) *
               C49149 * C49420 -
           ((C30880 + C30881) * C49161 * C49392 +
            (C30879 + C30878) * C49161 * C49443 +
            (C30877 + C30876) * C49161 * C49456 +
            (C30875 + C30874) * C49161 * C49463) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49457 +
             (C32360 + C32361) * C49445 + (C32362 + C32363) * C49425) *
                C23665 +
            ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
                C49075) *
               C49149 * C255 -
           (((C32364 + C32365) * C49425 + C32342 * C49445 + C32343 * C49457) *
                C49075 +
            ((C30827 * C1901 + C32344 + C32344 + C49265 * C1907 +
              C30825 * C1254 + C32345 + C32345 + C30823 * C1262) *
                 C49425 +
             (C32363 + C32362) * C49445 + (C32361 + C32360) * C49457) *
                C23665) *
               C49149 * C49420) *
              C257 +
          (((C32334 * C49457 + C32335 * C49445 + (C32365 + C32364) * C49425) *
                C23665 +
            ((C31053 + C31052) * C49457 + (C32131 + C32130) * C49445 +
             (C30825 * C1252 + C32346 + C32346 + C30823 * C1260 +
              C30827 * C1903 + C32347 + C32347 + C49265 * C1909) *
                 C49425) *
                C49075) *
               C49149 * C49420 -
           (((C32130 + C32131) * C49425 + (C31052 + C31053) * C49445 +
             (C30877 + C30876) * C49457) *
                C49075 +
            (C32342 * C49425 + C32343 * C49445 + (C30875 + C30874) * C49457) *
                C23665) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[173] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49161 * C49463 +
            (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
            C30885 * C49392) *
               C389 -
           ((C31220 + C31221) * C49161 * C49392 +
            (C31222 + C31223) * C49161 * C49443 +
            (C31224 + C31225) * C49161 * C49456 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49161 * C49463) *
               C49422) *
              C49132 * C257 +
          (((C31225 + C31224) * C49161 * C49463 +
            (C31223 + C31222) * C49161 * C49456 +
            (C31221 + C31220) * C49161 * C49443 +
            (C30825 * C391 + C31206 + C31206 + C30823 * C403 + C30827 * C948 +
             C31207 + C31207 + C49265 * C958) *
                C49161 * C49392) *
               C49422 -
           ((C30880 + C30881) * C49161 * C49392 +
            (C30879 + C30878) * C49161 * C49443 +
            (C30877 + C30876) * C49161 * C49456 +
            (C30875 + C30874) * C49161 * C49463) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49457 +
             (C32360 + C32361) * C49445 + (C32362 + C32363) * C49425) *
                C23665 +
            ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
                C49075) *
               C389 -
           (((C32582 + C32583) * C49425 + (C32584 + C32585) * C49445 +
             (C31224 + C31225) * C49457) *
                C49075 +
            ((C30827 * C2326 + C32570 + C32570 + C49265 * C2338 +
              C30825 * C1442 + C32571 + C32571 + C30823 * C1450) *
                 C49425 +
             (C30827 * C2325 + C31593 + C31593 + C49265 * C2337 +
              C30825 * C693 + C31592 + C31592 + C30823 * C703) *
                 C49445 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49457) *
                C23665) *
               C49422) *
              C49132 * C257 +
          ((((C31225 + C31224) * C49457 + (C32585 + C32584) * C49445 +
             (C32583 + C32582) * C49425) *
                C23665 +
            ((C31223 + C31222) * C49457 +
             (C30825 * C695 + C31596 + C31596 + C30823 * C705 + C30827 * C2329 +
              C31597 + C31597 + C49265 * C2341) *
                 C49445 +
             (C30825 * C1440 + C32572 + C32572 + C30823 * C1448 +
              C30827 * C2330 + C32573 + C32573 + C49265 * C2342) *
                 C49425) *
                C49075) *
               C49422 -
           (((C32130 + C32131) * C49425 + (C31052 + C31053) * C49445 +
             (C30877 + C30876) * C49457) *
                C49075 +
            (C32342 * C49425 + C32343 * C49445 + (C30875 + C30874) * C49457) *
                C23665) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[174] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49161 * C49463 +
            (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
            C30885 * C49392) *
               C49149 * C521 -
           ((C31050 + C31051) * C49161 * C49392 +
            (C31052 + C31053) * C49161 * C49443 +
            (C31054 + C31055) * C49161 * C49456 +
            (C30827 * C693 + C31034 + C31034 + C49265 * C703 + C30825 * C263 +
             C31035 + C31035 + C30823 * C275) *
                C49161 * C49463) *
               C49149 * C49420) *
              C523 +
          (((C31055 + C31054) * C49161 * C49463 +
            (C31053 + C31052) * C49161 * C49456 +
            (C31051 + C31050) * C49161 * C49443 +
            (C30825 * C259 + C31036 + C31036 + C30823 * C271 + C30827 * C697 +
             C31037 + C31037 + C49265 * C707) *
                C49161 * C49392) *
               C49149 * C49420 -
           ((C30880 + C30881) * C49161 * C49392 +
            (C30879 + C30878) * C49161 * C49443 +
            (C30877 + C30876) * C49161 * C49456 +
            (C30875 + C30874) * C49161 * C49463) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49457 +
             (C32360 + C32361) * C49445 + (C32362 + C32363) * C49425) *
                C23665 +
            ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
                C49075) *
               C49149 * C521 -
           (((C32364 + C32365) * C49425 + C32342 * C49445 + C32343 * C49457) *
                C49075 +
            ((C30827 * C1901 + C32344 + C32344 + C49265 * C1907 +
              C30825 * C1254 + C32345 + C32345 + C30823 * C1262) *
                 C49425 +
             (C32363 + C32362) * C49445 + (C32361 + C32360) * C49457) *
                C23665) *
               C49149 * C49420) *
              C523 +
          (((C32334 * C49457 + C32335 * C49445 + (C32365 + C32364) * C49425) *
                C23665 +
            ((C31053 + C31052) * C49457 + (C32131 + C32130) * C49445 +
             (C30825 * C1252 + C32346 + C32346 + C30823 * C1260 +
              C30827 * C1903 + C32347 + C32347 + C49265 * C1909) *
                 C49425) *
                C49075) *
               C49149 * C49420 -
           (((C32130 + C32131) * C49425 + (C31052 + C31053) * C49445 +
             (C30877 + C30876) * C49457) *
                C49075 +
            (C32342 * C49425 + C32343 * C49445 + (C30875 + C30874) * C49457) *
                C23665) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[175] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
            C30831 + C30831 + C49265 * C407) *
               C49161 * C49463 +
           (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
           C30885 * C49392) *
              C49149 * C587 -
          ((C31050 + C31051) * C49161 * C49392 +
           (C31052 + C31053) * C49161 * C49443 +
           (C31054 + C31055) * C49161 * C49456 +
           (C30827 * C693 + C31034 + C31034 + C49265 * C703 + C30825 * C263 +
            C31035 + C31035 + C30823 * C275) *
               C49161 * C49463) *
              C49149 * C588 +
          ((C30825 * C591 + C31454 + C31454 + C30823 * C601 + C30827 * C1442 +
            C31455 + C31455 + C49265 * C1450) *
               C49161 * C49463 +
           (C30825 * C592 + C31456 + C31456 + C30823 * C602 + C30827 * C1441 +
            C31457 + C31457 + C49265 * C1449) *
               C49161 * C49456 +
           (C30825 * C593 + C31458 + C31458 + C30823 * C603 + C30827 * C1440 +
            C31459 + C31459 + C49265 * C1448) *
               C49161 * C49443 +
           (C30825 * C594 + C31460 + C31460 + C30823 * C604 + C30827 * C1443 +
            C31461 + C31461 + C49265 * C1451) *
               C49161 * C49392) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49457 +
            (C32360 + C32361) * C49445 + C32926 * C49425) *
               C23665 +
           ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
               C49075) *
              C49149 * C587 -
          (((C32364 + C32365) * C49425 + C32342 * C49445 + C32343 * C49457) *
               C49075 +
           ((C32939 + C32940) * C49425 + (C32363 + C32362) * C49445 +
            (C32361 + C32360) * C49457) *
               C23665) *
              C49149 * C588 +
          ((C32926 * C49457 + (C32940 + C32939) * C49445 +
            (C30825 * C1738 + C32931 + C32931 + C30823 * C1744 +
             C30827 * C9301 + C32932 + C32932 + C49265 * C9305) *
                C49425) *
               C23665 +
           (C32335 * C49457 + (C32365 + C32364) * C49445 +
            (C30825 * C1739 + C32933 + C32933 + C30823 * C1745 +
             C30827 * C9302 + C32934 + C32934 + C49265 * C9306) *
                C49425) *
               C49075) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[176] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49161 * C49463 +
            (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
            C30885 * C49392) *
               C389 -
           ((C31220 + C31221) * C49161 * C49392 +
            (C31222 + C31223) * C49161 * C49443 +
            (C31224 + C31225) * C49161 * C49456 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49161 * C49463) *
               C49422) *
              C521 +
          (((C30825 * C693 + C31592 + C31592 + C30823 * C703 + C30827 * C2325 +
             C31593 + C31593 + C49265 * C2337) *
                C49161 * C49463 +
            (C30825 * C694 + C31594 + C31594 + C30823 * C704 + C30827 * C2327 +
             C31595 + C31595 + C49265 * C2339) *
                C49161 * C49456 +
            (C30825 * C695 + C31596 + C31596 + C30823 * C705 + C30827 * C2329 +
             C31597 + C31597 + C49265 * C2341) *
                C49161 * C49443 +
            (C30825 * C696 + C31598 + C31598 + C30823 * C706 + C30827 * C2677 +
             C31599 + C31599 + C49265 * C2679) *
                C49161 * C49392) *
               C49422 -
           ((C31050 + C31051) * C49161 * C49392 +
            (C31052 + C31053) * C49161 * C49443 +
            (C31054 + C31055) * C49161 * C49456 +
            (C30827 * C693 + C31034 + C31034 + C49265 * C703 + C30825 * C263 +
             C31035 + C31035 + C30823 * C275) *
                C49161 * C49463) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49457 +
             (C32360 + C32361) * C49445 + C32926 * C49425) *
                C23665 +
            ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
                C49075) *
               C389 -
           (((C32582 + C32583) * C49425 + (C32584 + C32585) * C49445 +
             (C31224 + C31225) * C49457) *
                C49075 +
            ((C33155 + C33156) * C49425 + (C33157 + C33158) * C49445 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49457) *
                C23665) *
               C49422) *
              C521 +
          ((((C33158 + C33157) * C49457 + (C33156 + C33155) * C49445 +
             (C30825 * C1901 + C33143 + C33143 + C30823 * C1907 +
              C30827 * C9784 + C33144 + C33144 + C49265 * C9788) *
                 C49425) *
                C23665 +
            ((C32585 + C32584) * C49457 + (C32583 + C32582) * C49445 +
             (C30825 * C1902 + C33145 + C33145 + C30823 * C1908 +
              C30827 * C10048 + C33146 + C33146 + C49265 * C10050) *
                 C49425) *
                C49075) *
               C49422 -
           (((C32364 + C32365) * C49425 + C32342 * C49445 + C32343 * C49457) *
                C49075 +
            ((C32939 + C32940) * C49425 + (C32363 + C32362) * C49445 +
             (C32361 + C32360) * C49457) *
                C23665) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[177] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49161 * C49463 +
            (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
            C30885 * C49392) *
               C795 -
           ((C31220 + C31221) * C49161 * C49392 +
            (C31222 + C31223) * C49161 * C49443 +
            (C31224 + C31225) * C49161 * C49456 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49161 * C49463) *
               C49422) *
              C49132 * C523 +
          (((C31225 + C31224) * C49161 * C49463 +
            (C31223 + C31222) * C49161 * C49456 +
            (C31221 + C31220) * C49161 * C49443 +
            (C30825 * C391 + C31206 + C31206 + C30823 * C403 + C30827 * C948 +
             C31207 + C31207 + C49265 * C958) *
                C49161 * C49392) *
               C49422 -
           ((C30880 + C30881) * C49161 * C49392 +
            (C30879 + C30878) * C49161 * C49443 +
            (C30877 + C30876) * C49161 * C49456 +
            (C30875 + C30874) * C49161 * C49463) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49457 +
             (C32360 + C32361) * C49445 + C32926 * C49425) *
                C23665 +
            ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
                C49075) *
               C795 -
           (((C32582 + C32583) * C49425 + (C32584 + C32585) * C49445 +
             (C31224 + C31225) * C49457) *
                C49075 +
            ((C33155 + C33156) * C49425 + (C33157 + C33158) * C49445 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49457) *
                C23665) *
               C49422) *
              C49132 * C523 +
          ((((C31225 + C31224) * C49457 + (C32585 + C32584) * C49445 +
             (C32583 + C32582) * C49425) *
                C23665 +
            ((C31223 + C31222) * C49457 +
             (C30825 * C695 + C31596 + C31596 + C30823 * C705 + C30827 * C2329 +
              C31597 + C31597 + C49265 * C2341) *
                 C49445 +
             (C30825 * C1440 + C32572 + C32572 + C30823 * C1448 +
              C30827 * C2330 + C32573 + C32573 + C49265 * C2342) *
                 C49425) *
                C49075) *
               C49422 -
           (((C32130 + C32131) * C49425 + (C31052 + C31053) * C49445 +
             (C30877 + C30876) * C49457) *
                C49075 +
            (C32342 * C49425 + C32343 * C49445 + (C30875 + C30874) * C49457) *
                C23665) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[178] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49161 * C49463 +
            (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
            C30885 * C49392) *
               C795 -
           ((C31220 + C31221) * C49161 * C49392 +
            (C31222 + C31223) * C49161 * C49443 +
            (C31224 + C31225) * C49161 * C49456 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49161 * C49463) *
               C49422) *
              C255 +
          (((C30825 * C693 + C31592 + C31592 + C30823 * C703 + C30827 * C2325 +
             C31593 + C31593 + C49265 * C2337) *
                C49161 * C49463 +
            (C30825 * C694 + C31594 + C31594 + C30823 * C704 + C30827 * C2327 +
             C31595 + C31595 + C49265 * C2339) *
                C49161 * C49456 +
            (C30825 * C695 + C31596 + C31596 + C30823 * C705 + C30827 * C2329 +
             C31597 + C31597 + C49265 * C2341) *
                C49161 * C49443 +
            (C30825 * C696 + C31598 + C31598 + C30823 * C706 + C30827 * C2677 +
             C31599 + C31599 + C49265 * C2679) *
                C49161 * C49392) *
               C49422 -
           ((C31050 + C31051) * C49161 * C49392 +
            (C31052 + C31053) * C49161 * C49443 +
            (C31054 + C31055) * C49161 * C49456 +
            (C30827 * C693 + C31034 + C31034 + C49265 * C703 + C30825 * C263 +
             C31035 + C31035 + C30823 * C275) *
                C49161 * C49463) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
              C30831 + C30831 + C49265 * C407) *
                 C49457 +
             (C32360 + C32361) * C49445 + C32926 * C49425) *
                C23665 +
            ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
                C49075) *
               C795 -
           (((C32582 + C32583) * C49425 + (C32584 + C32585) * C49445 +
             (C31224 + C31225) * C49457) *
                C49075 +
            ((C33155 + C33156) * C49425 + (C33157 + C33158) * C49445 +
             (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
              C31205 + C31205 + C30823 * C407) *
                 C49457) *
                C23665) *
               C49422) *
              C255 +
          ((((C33158 + C33157) * C49457 + (C33156 + C33155) * C49445 +
             (C30825 * C1901 + C33143 + C33143 + C30823 * C1907 +
              C30827 * C9784 + C33144 + C33144 + C49265 * C9788) *
                 C49425) *
                C23665 +
            ((C32585 + C32584) * C49457 + (C32583 + C32582) * C49445 +
             (C30825 * C1902 + C33145 + C33145 + C30823 * C1908 +
              C30827 * C10048 + C33146 + C33146 + C49265 * C10050) *
                 C49425) *
                C49075) *
               C49422 -
           (((C32364 + C32365) * C49425 + C32342 * C49445 + C32343 * C49457) *
                C49075 +
            ((C32939 + C32940) * C49425 + (C32363 + C32362) * C49445 +
             (C32361 + C32360) * C49457) *
                C23665) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[179] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
            C30831 + C30831 + C49265 * C407) *
               C49161 * C49463 +
           (C30874 + C30875) * C49161 * C49456 + C30884 * C49443 +
           C30885 * C49392) *
              C941 -
          ((C31220 + C31221) * C49161 * C49392 +
           (C31222 + C31223) * C49161 * C49443 +
           (C31224 + C31225) * C49161 * C49456 +
           (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
            C31205 + C31205 + C30823 * C407) *
               C49161 * C49463) *
              C942 +
          ((C30825 * C944 + C31958 + C31958 + C30823 * C954 + C30827 * C2870 +
            C31959 + C31959 + C49265 * C2878) *
               C49161 * C49463 +
           (C30825 * C945 + C31960 + C31960 + C30823 * C955 + C30827 * C2869 +
            C31961 + C31961 + C49265 * C2877) *
               C49161 * C49456 +
           (C30825 * C946 + C31962 + C31962 + C30823 * C956 + C30827 * C2868 +
            C31963 + C31963 + C49265 * C2876) *
               C49161 * C49443 +
           (C30825 * C947 + C31964 + C31964 + C30823 * C957 + C30827 * C2871 +
            C31965 + C31965 + C49265 * C2879) *
               C49161 * C49392) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C30825 * C115 + C30830 + C30830 + C30823 * C129 + C30827 * C395 +
             C30831 + C30831 + C49265 * C407) *
                C49457 +
            (C32360 + C32361) * C49445 + C32926 * C49425) *
               C23665 +
           ((C30874 + C30875) * C49457 + C32334 * C49445 + C32335 * C49425) *
               C49075) *
              C941 -
          (((C32582 + C32583) * C49425 + (C32584 + C32585) * C49445 +
            (C31224 + C31225) * C49457) *
               C49075 +
           ((C33155 + C33156) * C49425 + (C33157 + C33158) * C49445 +
            (C30827 * C944 + C31204 + C31204 + C49265 * C954 + C30825 * C395 +
             C31205 + C31205 + C30823 * C407) *
                C49457) *
               C23665) *
              C942 +
          (((C30825 * C944 + C31958 + C31958 + C30823 * C954 + C30827 * C2870 +
             C31959 + C31959 + C49265 * C2878) *
                C49457 +
            (C30825 * C2325 + C33693 + C33693 + C30823 * C2337 +
             C30827 * C3333 + C33694 + C33694 + C49265 * C3339) *
                C49445 +
            (C30825 * C2326 + C33695 + C33695 + C30823 * C2338 +
             C30827 * C10248 + C33696 + C33696 + C49265 * C10252) *
                C49425) *
               C23665 +
           ((C30825 * C945 + C31960 + C31960 + C30823 * C955 + C30827 * C2869 +
             C31961 + C31961 + C49265 * C2877) *
                C49457 +
            (C30825 * C2327 + C33697 + C33697 + C30823 * C2339 +
             C30827 * C3334 + C33698 + C33698 + C49265 * C3340) *
                C49445 +
            (C30825 * C2328 + C33699 + C33699 + C30823 * C2340 +
             C30827 * C10249 + C33700 + C33700 + C49265 * C10253) *
                C49425) *
               C49075) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[180] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
                     C1289 * C49223) *
                        C3871 +
                    (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
                       C49149 * C49132 * C110 -
                   ((C3882 + C3883) * C49392 + (C3881 + C3880) * C3873 +
                    (C3879 + C3878) * C3872 + (C3877 + C3876) * C3871) *
                       C49149 * C49132 * C111 +
                   (C3884 * C3871 + C3885 * C3872 + (C3883 + C3882) * C3873 +
                    (C168 * C49391 +
                     (C113 * C264 + C291 + C291 + C49178 * C276) * C49223) *
                        C49392) *
                       C49149 * C49132 * C112)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
                     C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
                        C49370 +
                    (C11237 + C11238 + C11239 + C11240) * C49075) *
                       C49149 * C49132 * C110 -
                   ((C11241 + C11242 + C11243 + C11244) * C49075 +
                    (C11240 + C11239 + C11238 + C11237) * C49370) *
                       C49149 * C49132 * C111 +
                   ((C11244 + C11243 + C11242 + C11241) * C49370 +
                    (C166 * C11230 + C301 * C11231 + C1102 * C11232 +
                     (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49400) *
                        C49075) *
                       C49149 * C49132 * C112)) /
                     (p * q * std::sqrt(p + q));
    d2ee[181] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
             C1289 * C49223) *
                C3871 +
            (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
               C49149 * C255 -
           ((C4016 + C4017) * C49392 + (C4018 + C4019) * C3873 +
            (C4020 + C4021) * C3872 +
            (C1290 * C49223 + C1289 * C49391) * C3871) *
               C49149 * C49420) *
              C257 +
          (((C4021 + C4020) * C3871 + (C4019 + C4018) * C3872 +
            (C4017 + C4016) * C3873 +
            (C300 * C49391 +
             (C113 * C595 + C611 + C611 + C49178 * C605) * C49223) *
                C49392) *
               C49149 * C49420 -
           ((C3882 + C3883) * C49392 + (C3881 + C3880) * C3873 +
            (C3879 + C3878) * C3872 + (C3877 + C3876) * C3871) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
             C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
                C49370 +
            (C11237 + C11238 + C11239 + C11240) * C49075) *
               C49149 * C255 -
           ((C11375 + C11376 + C11377 + C11378) * C49075 +
            (C9218 * C49400 + C1755 * C11232 + C1290 * C11231 +
             C1289 * C11230) *
                C49370) *
               C49149 * C49420) *
              C257 +
          (((C11378 + C11377 + C11376 + C11375) * C49370 +
            (C302 * C11230 + C1101 * C11231 + C1291 * C11232 +
             (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49400) *
                C49075) *
               C49149 * C49420 -
           ((C11241 + C11242 + C11243 + C11244) * C49075 +
            (C11240 + C11239 + C11238 + C11237) * C49370) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[182] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
             C1289 * C49223) *
                C3871 +
            (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
               C389 -
           ((C4162 + C4154) * C49392 + (C4155 + C4156) * C3873 +
            (C4157 + C4158) * C3872 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49391) *
                C3871) *
               C49422) *
              C49132 * C257 +
          (((C4158 + C4157) * C3871 + (C4156 + C4155) * C3872 +
            (C4154 + C4162) * C3873 +
            (C432 * C49391 +
             (C113 * C697 + C713 + C713 + C49178 * C707) * C49223) *
                C49392) *
               C49422 -
           ((C3882 + C3883) * C49392 + (C3881 + C3880) * C3873 +
            (C3879 + C3878) * C3872 + (C3877 + C3876) * C3871) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
             C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
                C49370 +
            (C11237 + C11238 + C11239 + C11240) * C49075) *
               C389 -
           ((C11517 + C11511 + C11512 + C11513) * C49075 +
            (C9558 * C49400 + C1922 * C11232 + C1923 * C11231 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C11230) *
                C49370) *
               C49422) *
              C49132 * C257 +
          (((C11513 + C11512 + C11511 + C11517) * C49370 +
            (C434 * C11230 + C1476 * C11231 + C1475 * C11232 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49400) *
                C49075) *
               C49422 -
           ((C11241 + C11242 + C11243 + C11244) * C49075 +
            (C11240 + C11239 + C11238 + C11237) * C49370) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[183] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
             C1289 * C49223) *
                C3871 +
            (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
               C49149 * C521 -
           ((C4016 + C4017) * C49392 + (C4018 + C4019) * C3873 +
            (C4020 + C4021) * C3872 +
            (C1290 * C49223 + C1289 * C49391) * C3871) *
               C49149 * C49420) *
              C523 +
          (((C4021 + C4020) * C3871 + (C4019 + C4018) * C3872 +
            (C4017 + C4016) * C3873 +
            (C300 * C49391 +
             (C113 * C595 + C611 + C611 + C49178 * C605) * C49223) *
                C49392) *
               C49149 * C49420 -
           ((C3882 + C3883) * C49392 + (C3881 + C3880) * C3873 +
            (C3879 + C3878) * C3872 + (C3877 + C3876) * C3871) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
             C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
                C49370 +
            (C11237 + C11238 + C11239 + C11240) * C49075) *
               C49149 * C521 -
           ((C11375 + C11376 + C11377 + C11378) * C49075 +
            (C9218 * C49400 + C1755 * C11232 + C1290 * C11231 +
             C1289 * C11230) *
                C49370) *
               C49149 * C49420) *
              C523 +
          (((C11378 + C11377 + C11376 + C11375) * C49370 +
            (C302 * C11230 + C1101 * C11231 + C1291 * C11232 +
             (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49400) *
                C49075) *
               C49149 * C49420 -
           ((C11241 + C11242 + C11243 + C11244) * C49075 +
            (C11240 + C11239 + C11238 + C11237) * C49370) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[184] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
            C1289 * C49223) *
               C3871 +
           (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
              C49149 * C587 -
          ((C4016 + C4017) * C49392 + (C4018 + C4019) * C3873 +
           (C4020 + C4021) * C3872 +
           (C1290 * C49223 + C1289 * C49391) * C3871) *
              C49149 * C588 +
          ((C1290 * C49391 + C1755 * C49223) * C3871 +
           (C1100 * C49391 + C1292 * C49223) * C3872 +
           (C1101 * C49391 + C1291 * C49223) * C3873 +
           (C1102 * C49391 +
            (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49223) *
               C49392) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
            C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
               C49370 +
           (C11237 + C11238 + C11239 + C11240) * C49075) *
              C49149 * C587 -
          ((C11375 + C11376 + C11377 + C11378) * C49075 +
           (C9218 * C49400 + C1755 * C11232 + C1290 * C11231 + C1289 * C11230) *
               C49370) *
              C49149 * C588 +
          ((C1290 * C11230 + C1755 * C11231 + C9218 * C11232 + C9462 * C49400) *
               C49370 +
           (C1100 * C11230 + C1292 * C11231 + C9219 * C11232 +
            (C113 * C9202 + C9213 + C9213 + C49178 * C9206) * C49400) *
               C49075) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[185] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
             C1289 * C49223) *
                C3871 +
            (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
               C389 -
           ((C4162 + C4154) * C49392 + (C4155 + C4156) * C3873 +
            (C4157 + C4158) * C3872 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49391) *
                C3871) *
               C49422) *
              C521 +
          (((C1923 * C49391 + C1922 * C49223) * C3871 +
            (C1478 * C49391 + C1477 * C49223) * C3872 +
            (C1476 * C49391 + C1475 * C49223) * C3873 +
            (C4161 * C49391 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49223) *
                C49392) *
               C49422 -
           ((C4016 + C4017) * C49392 + (C4018 + C4019) * C3873 +
            (C4020 + C4021) * C3872 +
            (C1290 * C49223 + C1289 * C49391) * C3871) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
             C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
                C49370 +
            (C11237 + C11238 + C11239 + C11240) * C49075) *
               C389 -
           ((C11517 + C11511 + C11512 + C11513) * C49075 +
            (C9558 * C49400 + C1922 * C11232 + C1923 * C11231 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C11230) *
                C49370) *
               C49422) *
              C521 +
          (((C1923 * C11230 + C1922 * C11231 + C9558 * C11232 +
             C9557 * C49400) *
                C49370 +
            (C1478 * C11230 + C1477 * C11231 + C11516 * C11232 +
             (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C49400) *
                C49075) *
               C49422 -
           ((C11375 + C11376 + C11377 + C11378) * C49075 +
            (C9218 * C49400 + C1755 * C11232 + C1290 * C11231 +
             C1289 * C11230) *
                C49370) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[186] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
             C1289 * C49223) *
                C3871 +
            (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
               C795 -
           ((C4162 + C4154) * C49392 + (C4155 + C4156) * C3873 +
            (C4157 + C4158) * C3872 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49391) *
                C3871) *
               C49422) *
              C49132 * C523 +
          (((C4158 + C4157) * C3871 + (C4156 + C4155) * C3872 +
            (C4154 + C4162) * C3873 +
            (C432 * C49391 +
             (C113 * C697 + C713 + C713 + C49178 * C707) * C49223) *
                C49392) *
               C49422 -
           ((C3882 + C3883) * C49392 + (C3881 + C3880) * C3873 +
            (C3879 + C3878) * C3872 + (C3877 + C3876) * C3871) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
             C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
                C49370 +
            (C11237 + C11238 + C11239 + C11240) * C49075) *
               C795 -
           ((C11517 + C11511 + C11512 + C11513) * C49075 +
            (C9558 * C49400 + C1922 * C11232 + C1923 * C11231 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C11230) *
                C49370) *
               C49422) *
              C49132 * C523 +
          (((C11513 + C11512 + C11511 + C11517) * C49370 +
            (C434 * C11230 + C1476 * C11231 + C1475 * C11232 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49400) *
                C49075) *
               C49422 -
           ((C11241 + C11242 + C11243 + C11244) * C49075 +
            (C11240 + C11239 + C11238 + C11237) * C49370) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[187] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
             C1289 * C49223) *
                C3871 +
            (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
               C795 -
           ((C4162 + C4154) * C49392 + (C4155 + C4156) * C3873 +
            (C4157 + C4158) * C3872 +
            (C1923 * C49223 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49391) *
                C3871) *
               C49422) *
              C255 +
          (((C1923 * C49391 + C1922 * C49223) * C3871 +
            (C1478 * C49391 + C1477 * C49223) * C3872 +
            (C1476 * C49391 + C1475 * C49223) * C3873 +
            (C4161 * C49391 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49223) *
                C49392) *
               C49422 -
           ((C4016 + C4017) * C49392 + (C4018 + C4019) * C3873 +
            (C4020 + C4021) * C3872 +
            (C1290 * C49223 + C1289 * C49391) * C3871) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
             C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
                C49370 +
            (C11237 + C11238 + C11239 + C11240) * C49075) *
               C795 -
           ((C11517 + C11511 + C11512 + C11513) * C49075 +
            (C9558 * C49400 + C1922 * C11232 + C1923 * C11231 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C11230) *
                C49370) *
               C49422) *
              C255 +
          (((C1923 * C11230 + C1922 * C11231 + C9558 * C11232 +
             C9557 * C49400) *
                C49370 +
            (C1478 * C11230 + C1477 * C11231 + C11516 * C11232 +
             (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C49400) *
                C49075) *
               C49422 -
           ((C11375 + C11376 + C11377 + C11378) * C49075 +
            (C9218 * C49400 + C1755 * C11232 + C1290 * C11231 +
             C1289 * C11230) *
                C49370) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[188] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49391 +
            C1289 * C49223) *
               C3871 +
           (C3876 + C3877) * C3872 + C3884 * C3873 + C3885 * C49392) *
              C941 -
          ((C4162 + C4154) * C49392 + (C4155 + C4156) * C3873 +
           (C4157 + C4158) * C3872 +
           (C1923 * C49223 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49391) *
               C3871) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C49391 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C49223) *
               C3871 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C49391 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C49223) *
               C3872 +
           ((C113 * C946 + C962 + C962 + C49178 * C956) * C49391 +
            (C113 * C2329 + C2348 + C2348 + C49178 * C2341) * C49223) *
               C3873 +
           ((C113 * C947 + C963 + C963 + C49178 * C957) * C49391 +
            (C113 * C2677 + C4879 + C4879 + C49178 * C2679) * C49223) *
               C49392) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C11230 +
            C1289 * C11231 + C1290 * C11232 + C1755 * C49400) *
               C49370 +
           (C11237 + C11238 + C11239 + C11240) * C49075) *
              C941 -
          ((C11517 + C11511 + C11512 + C11513) * C49075 +
           (C9558 * C49400 + C1922 * C11232 + C1923 * C11231 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C11230) *
               C49370) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C11230 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C11231 +
            (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C11232 +
            (C113 * C9784 + C9791 + C9791 + C49178 * C9788) * C49400) *
               C49370 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C11230 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C11231 +
            (C113 * C2328 + C2347 + C2347 + C49178 * C2340) * C11232 +
            (C113 * C10048 + C12234 + C12234 + C49178 * C10050) * C49400) *
               C49075) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[189] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49391 +
            (C4979 * C263 + C5189 + C5189 + C49393 * C275 + C4981 * C693 +
             C5188 + C5188 + C49265 * C703) *
                C49223) *
               C1077 +
           ((C5028 + C5029) * C49391 + (C5209 + C5208) * C49223) * C1078 +
           C6269 * C49414) *
              C49149 * C49132 * C110 -
          (((C5204 + C5205) * C49223 + (C5033 + C5032) * C49391) * C49414 +
           ((C5206 + C5207) * C49223 + (C5031 + C5030) * C49391) * C1078 +
           ((C5208 + C5209) * C49223 + (C5029 + C5028) * C49391) * C1077) *
              C49149 * C49132 * C111 +
          (C6269 * C1077 + (C5037 * C49391 + (C5205 + C5204) * C49223) * C1078 +
           ((C5035 + C5034) * C49391 +
            (C4979 * C259 + C5190 + C5190 + C49393 * C271 + C4981 * C697 +
             C5191 + C5191 + C49265 * C707) *
                C49223) *
               C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
            C4985 + C4985 + C49265 * C407) *
               C11230 +
           (C6491 + C6492) * C11231 + C13131 * C11232 +
           (C13145 + C13144) * C49400) *
              C49065 * C49149 * C49132 * C110 -
          ((C12585 + C12586) * C49400 + C12580 * C11232 + C6478 * C11231 +
           (C5029 + C5028) * C11230) *
              C49065 * C49149 * C49132 * C111 +
          (C5036 * C11230 + C6267 * C11231 + (C6494 + C6493) * C11232 +
           (C4979 * C1252 + C7059 + C7059 + C49393 * C1260 + C4981 * C1903 +
            C7060 + C7060 + C49265 * C1909) *
               C49400) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[190] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49391 +
             (C6491 + C6492) * C49223) *
                C1077 +
            ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
            C6269 * C49414) *
               C49149 * C255 -
           (((C6493 + C6494) * C49223 + C6473 * C49391) * C49414 +
            ((C6495 + C6496) * C49223 + C6478 * C49391) * C1078 +
            ((C4981 * C1442 + C5609 + C5609 + C49265 * C1450 + C4979 * C591 +
              C5608 + C5608 + C49393 * C601) *
                 C49223 +
             (C6492 + C6491) * C49391) *
                C1077) *
               C49149 * C49420) *
              C257 +
          (((C6468 * C49391 + (C6496 + C6495) * C49223) * C1077 +
            (C6267 * C49391 + (C6494 + C6493) * C49223) * C1078 +
            ((C5205 + C5204) * C49391 +
             (C4979 * C594 + C5614 + C5614 + C49393 * C604 + C4981 * C1443 +
              C5615 + C5615 + C49265 * C1451) *
                 C49223) *
                C49414) *
               C49149 * C49420 -
           (((C5204 + C5205) * C49223 + (C5033 + C5032) * C49391) * C49414 +
            (C6473 * C49223 + (C5031 + C5030) * C49391) * C1078 +
            (C6478 * C49223 + (C5029 + C5028) * C49391) * C1077) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C11230 +
            (C6491 + C6492) * C11231 + C13131 * C11232 +
            (C13145 + C13144) * C49400) *
               C49065 * C49149 * C255 -
           ((C4981 * C9301 + C13137 + C13137 + C49265 * C9305 + C4979 * C1738 +
             C13136 + C13136 + C49393 * C1744) *
                C49400 +
            (C13144 + C13145) * C11232 + (C7065 + C7066) * C11231 +
            (C6492 + C6491) * C11230) *
               C49065 * C49149 * C49420) *
              C257 +
          ((C6468 * C11230 + C12575 * C11231 + (C12586 + C12585) * C11232 +
            (C4979 * C1739 + C13138 + C13138 + C49393 * C1745 + C4981 * C9302 +
             C13139 + C13139 + C49265 * C9306) *
                C49400) *
               C49065 * C49149 * C49420 -
           ((C12585 + C12586) * C49400 + C12580 * C11232 + C6478 * C11231 +
            (C5029 + C5028) * C11230) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[191] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49391 +
             (C6491 + C6492) * C49223) *
                C1077 +
            ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
            C6269 * C49414) *
               C389 -
           (((C6707 + C6708) * C49223 + (C5376 + C5377) * C49391) * C49414 +
            ((C6709 + C6710) * C49223 + (C5378 + C5379) * C49391) * C1078 +
            ((C4981 * C2325 + C5747 + C5747 + C49265 * C2337 + C4979 * C693 +
              C5746 + C5746 + C49393 * C703) *
                 C49223 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C49391) *
                C1077) *
               C49422) *
              C49132 * C257 +
          ((((C5379 + C5378) * C49391 + (C6710 + C6709) * C49223) * C1077 +
            ((C5377 + C5376) * C49391 + (C6708 + C6707) * C49223) * C1078 +
            ((C5375 + C5374) * C49391 +
             (C4979 * C696 + C5752 + C5752 + C49393 * C706 + C4981 * C2677 +
              C5753 + C5753 + C49265 * C2679) *
                 C49223) *
                C49414) *
               C49422 -
           (((C5204 + C5205) * C49223 + (C5033 + C5032) * C49391) * C49414 +
            (C6473 * C49223 + (C5031 + C5030) * C49391) * C1078 +
            (C6478 * C49223 + (C5029 + C5028) * C49391) * C1077) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C11230 +
            (C6491 + C6492) * C11231 + C13131 * C11232 +
            (C13145 + C13144) * C49400) *
               C49065 * C389 -
           ((C4981 * C9784 + C13345 + C13345 + C49265 * C9788 + C4979 * C1901 +
             C13344 + C13344 + C49393 * C1907) *
                C49400 +
            (C13352 + C13353) * C11232 + (C7275 + C7276) * C11231 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C11230) *
               C49065 * C49422) *
              C49132 * C257 +
          (((C5379 + C5378) * C11230 + (C6710 + C6709) * C11231 +
            (C12790 + C12789) * C11232 +
            (C4979 * C1902 + C13346 + C13346 + C49393 * C1908 + C4981 * C10048 +
             C13347 + C13347 + C49265 * C10050) *
                C49400) *
               C49065 * C49422 -
           ((C12585 + C12586) * C49400 + C12580 * C11232 + C6478 * C11231 +
            (C5029 + C5028) * C11230) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[192] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49391 +
             (C6491 + C6492) * C49223) *
                C1077 +
            ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
            C6269 * C49414) *
               C49149 * C521 -
           (((C6493 + C6494) * C49223 + C6473 * C49391) * C49414 +
            ((C6495 + C6496) * C49223 + C6478 * C49391) * C1078 +
            ((C4981 * C1442 + C5609 + C5609 + C49265 * C1450 + C4979 * C591 +
              C5608 + C5608 + C49393 * C601) *
                 C49223 +
             (C6492 + C6491) * C49391) *
                C1077) *
               C49149 * C49420) *
              C523 +
          (((C6468 * C49391 + (C6496 + C6495) * C49223) * C1077 +
            (C6267 * C49391 + (C6494 + C6493) * C49223) * C1078 +
            ((C5205 + C5204) * C49391 +
             (C4979 * C594 + C5614 + C5614 + C49393 * C604 + C4981 * C1443 +
              C5615 + C5615 + C49265 * C1451) *
                 C49223) *
                C49414) *
               C49149 * C49420 -
           (((C5204 + C5205) * C49223 + (C5033 + C5032) * C49391) * C49414 +
            (C6473 * C49223 + (C5031 + C5030) * C49391) * C1078 +
            (C6478 * C49223 + (C5029 + C5028) * C49391) * C1077) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C11230 +
            (C6491 + C6492) * C11231 + C13131 * C11232 +
            (C13145 + C13144) * C49400) *
               C49065 * C49149 * C521 -
           ((C4981 * C9301 + C13137 + C13137 + C49265 * C9305 + C4979 * C1738 +
             C13136 + C13136 + C49393 * C1744) *
                C49400 +
            (C13144 + C13145) * C11232 + (C7065 + C7066) * C11231 +
            (C6492 + C6491) * C11230) *
               C49065 * C49149 * C49420) *
              C523 +
          ((C6468 * C11230 + C12575 * C11231 + (C12586 + C12585) * C11232 +
            (C4979 * C1739 + C13138 + C13138 + C49393 * C1745 + C4981 * C9302 +
             C13139 + C13139 + C49265 * C9306) *
                C49400) *
               C49065 * C49149 * C49420 -
           ((C12585 + C12586) * C49400 + C12580 * C11232 + C6478 * C11231 +
            (C5029 + C5028) * C11230) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[193] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49391 +
            (C6491 + C6492) * C49223) *
               C1077 +
           ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
           C6269 * C49414) *
              C49149 * C587 -
          (((C6493 + C6494) * C49223 + C6473 * C49391) * C49414 +
           ((C6495 + C6496) * C49223 + C6478 * C49391) * C1078 +
           ((C7065 + C7066) * C49223 + (C6492 + C6491) * C49391) * C1077) *
              C49149 * C588 +
          (((C7066 + C7065) * C49391 +
            (C4979 * C1254 + C7055 + C7055 + C49393 * C1262 + C4981 * C1901 +
             C7056 + C7056 + C49265 * C1907) *
                C49223) *
               C1077 +
           ((C6496 + C6495) * C49391 +
            (C4979 * C1253 + C7057 + C7057 + C49393 * C1261 + C4981 * C1902 +
             C7058 + C7058 + C49265 * C1908) *
                C49223) *
               C1078 +
           ((C6494 + C6493) * C49391 +
            (C4979 * C1252 + C7059 + C7059 + C49393 * C1260 + C4981 * C1903 +
             C7060 + C7060 + C49265 * C1909) *
                C49223) *
               C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
            C4985 + C4985 + C49265 * C407) *
               C11230 +
           (C6491 + C6492) * C11231 + C13131 * C11232 + C14478 * C49400) *
              C49065 * C49149 * C587 -
          ((C14489 + C14490) * C49400 + (C13144 + C13145) * C11232 +
           (C7065 + C7066) * C11231 + (C6492 + C6491) * C11230) *
              C49065 * C49149 * C588 +
          (C13131 * C11230 + C14478 * C11231 + (C14490 + C14489) * C11232 +
           (C4979 * C9201 + C14483 + C14483 + C49393 * C9205 + C4981 * C9544 +
            C14484 + C14484 + C49265 * C9546) *
               C49400) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[194] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49391 +
             (C6491 + C6492) * C49223) *
                C1077 +
            ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
            C6269 * C49414) *
               C389 -
           (((C6707 + C6708) * C49223 + (C5376 + C5377) * C49391) * C49414 +
            ((C6709 + C6710) * C49223 + (C5378 + C5379) * C49391) * C1078 +
            ((C7275 + C7276) * C49223 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C49391) *
                C1077) *
               C49422) *
              C521 +
          ((((C7276 + C7275) * C49391 +
             (C4979 * C1442 + C7265 + C7265 + C49393 * C1450 + C4981 * C2326 +
              C7266 + C7266 + C49265 * C2338) *
                 C49223) *
                C1077 +
            ((C6710 + C6709) * C49391 +
             (C4979 * C1441 + C7267 + C7267 + C49393 * C1449 + C4981 * C2328 +
              C7268 + C7268 + C49265 * C2340) *
                 C49223) *
                C1078 +
            ((C6708 + C6707) * C49391 +
             (C4979 * C1440 + C7269 + C7269 + C49393 * C1448 + C4981 * C2330 +
              C7270 + C7270 + C49265 * C2342) *
                 C49223) *
                C49414) *
               C49422 -
           (((C6493 + C6494) * C49223 + C6473 * C49391) * C49414 +
            ((C6495 + C6496) * C49223 + C6478 * C49391) * C1078 +
            ((C7065 + C7066) * C49223 + (C6492 + C6491) * C49391) * C1077) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C11230 +
            (C6491 + C6492) * C11231 + C13131 * C11232 + C14478 * C49400) *
               C49065 * C389 -
           ((C14631 + C14632) * C49400 + (C13352 + C13353) * C11232 +
            (C7275 + C7276) * C11231 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C11230) *
               C49065 * C49422) *
              C521 +
          (((C7276 + C7275) * C11230 + (C13353 + C13352) * C11231 +
            (C14632 + C14631) * C11232 +
            (C4979 * C9301 + C14625 + C14625 + C49393 * C9305 + C4981 * C9785 +
             C14626 + C14626 + C49265 * C9789) *
                C49400) *
               C49065 * C49422 -
           ((C14489 + C14490) * C49400 + (C13144 + C13145) * C11232 +
            (C7065 + C7066) * C11231 + (C6492 + C6491) * C11230) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[195] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49391 +
             (C6491 + C6492) * C49223) *
                C1077 +
            ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
            C6269 * C49414) *
               C795 -
           (((C6707 + C6708) * C49223 + (C5376 + C5377) * C49391) * C49414 +
            ((C6709 + C6710) * C49223 + (C5378 + C5379) * C49391) * C1078 +
            ((C7275 + C7276) * C49223 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C49391) *
                C1077) *
               C49422) *
              C49132 * C523 +
          ((((C5379 + C5378) * C49391 + (C6710 + C6709) * C49223) * C1077 +
            ((C5377 + C5376) * C49391 + (C6708 + C6707) * C49223) * C1078 +
            ((C5375 + C5374) * C49391 +
             (C4979 * C696 + C5752 + C5752 + C49393 * C706 + C4981 * C2677 +
              C5753 + C5753 + C49265 * C2679) *
                 C49223) *
                C49414) *
               C49422 -
           (((C5204 + C5205) * C49223 + (C5033 + C5032) * C49391) * C49414 +
            (C6473 * C49223 + (C5031 + C5030) * C49391) * C1078 +
            (C6478 * C49223 + (C5029 + C5028) * C49391) * C1077) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C11230 +
            (C6491 + C6492) * C11231 + C13131 * C11232 + C14478 * C49400) *
               C49065 * C795 -
           ((C14631 + C14632) * C49400 + (C13352 + C13353) * C11232 +
            (C7275 + C7276) * C11231 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C11230) *
               C49065 * C49422) *
              C49132 * C523 +
          (((C5379 + C5378) * C11230 + (C6710 + C6709) * C11231 +
            (C12790 + C12789) * C11232 +
            (C4979 * C1902 + C13346 + C13346 + C49393 * C1908 + C4981 * C10048 +
             C13347 + C13347 + C49265 * C10050) *
                C49400) *
               C49065 * C49422 -
           ((C12585 + C12586) * C49400 + C12580 * C11232 + C6478 * C11231 +
            (C5029 + C5028) * C11230) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[196] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C49391 +
             (C6491 + C6492) * C49223) *
                C1077 +
            ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
            C6269 * C49414) *
               C795 -
           (((C6707 + C6708) * C49223 + (C5376 + C5377) * C49391) * C49414 +
            ((C6709 + C6710) * C49223 + (C5378 + C5379) * C49391) * C1078 +
            ((C7275 + C7276) * C49223 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C49391) *
                C1077) *
               C49422) *
              C255 +
          ((((C7276 + C7275) * C49391 +
             (C4979 * C1442 + C7265 + C7265 + C49393 * C1450 + C4981 * C2326 +
              C7266 + C7266 + C49265 * C2338) *
                 C49223) *
                C1077 +
            ((C6710 + C6709) * C49391 +
             (C4979 * C1441 + C7267 + C7267 + C49393 * C1449 + C4981 * C2328 +
              C7268 + C7268 + C49265 * C2340) *
                 C49223) *
                C1078 +
            ((C6708 + C6707) * C49391 +
             (C4979 * C1440 + C7269 + C7269 + C49393 * C1448 + C4981 * C2330 +
              C7270 + C7270 + C49265 * C2342) *
                 C49223) *
                C49414) *
               C49422 -
           (((C6493 + C6494) * C49223 + C6473 * C49391) * C49414 +
            ((C6495 + C6496) * C49223 + C6478 * C49391) * C1078 +
            ((C7065 + C7066) * C49223 + (C6492 + C6491) * C49391) * C1077) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C11230 +
            (C6491 + C6492) * C11231 + C13131 * C11232 + C14478 * C49400) *
               C49065 * C795 -
           ((C14631 + C14632) * C49400 + (C13352 + C13353) * C11232 +
            (C7275 + C7276) * C11231 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C11230) *
               C49065 * C49422) *
              C255 +
          (((C7276 + C7275) * C11230 + (C13353 + C13352) * C11231 +
            (C14632 + C14631) * C11232 +
            (C4979 * C9301 + C14625 + C14625 + C49393 * C9305 + C4981 * C9785 +
             C14626 + C14626 + C49265 * C9789) *
                C49400) *
               C49065 * C49422 -
           ((C14489 + C14490) * C49400 + (C13144 + C13145) * C11232 +
            (C7065 + C7066) * C11231 + (C6492 + C6491) * C11230) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[197] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49391 +
            (C6491 + C6492) * C49223) *
               C1077 +
           ((C5028 + C5029) * C49391 + C6468 * C49223) * C1078 +
           C6269 * C49414) *
              C941 -
          (((C6707 + C6708) * C49223 + (C5376 + C5377) * C49391) * C49414 +
           ((C6709 + C6710) * C49223 + (C5378 + C5379) * C49391) * C1078 +
           ((C7275 + C7276) * C49223 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C49391) *
               C1077) *
              C942 +
          (((C4979 * C944 + C6112 + C6112 + C49393 * C954 + C4981 * C2870 +
             C6113 + C6113 + C49265 * C2878) *
                C49391 +
            (C4979 * C2325 + C7811 + C7811 + C49393 * C2337 + C4981 * C3333 +
             C7812 + C7812 + C49265 * C3339) *
                C49223) *
               C1077 +
           ((C4979 * C945 + C6114 + C6114 + C49393 * C955 + C4981 * C2869 +
             C6115 + C6115 + C49265 * C2877) *
                C49391 +
            (C4979 * C2327 + C7813 + C7813 + C49393 * C2339 + C4981 * C3334 +
             C7814 + C7814 + C49265 * C3340) *
                C49223) *
               C1078 +
           ((C4979 * C946 + C6116 + C6116 + C49393 * C956 + C4981 * C2868 +
             C6117 + C6117 + C49265 * C2876) *
                C49391 +
            (C4979 * C2329 + C7815 + C7815 + C49393 * C2341 + C4981 * C3335 +
             C7816 + C7816 + C49265 * C3341) *
                C49223) *
               C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
            C4985 + C4985 + C49265 * C407) *
               C11230 +
           (C6491 + C6492) * C11231 + C13131 * C11232 + C14478 * C49400) *
              C49065 * C941 -
          ((C14631 + C14632) * C49400 + (C13352 + C13353) * C11232 +
           (C7275 + C7276) * C11231 +
           (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
            C5359 + C5359 + C49393 * C407) *
               C11230) *
              C49065 * C942 +
          ((C4979 * C944 + C6112 + C6112 + C49393 * C954 + C4981 * C2870 +
            C6113 + C6113 + C49265 * C2878) *
               C11230 +
           (C4979 * C2325 + C7811 + C7811 + C49393 * C2337 + C4981 * C3333 +
            C7812 + C7812 + C49265 * C3339) *
               C11231 +
           (C4979 * C2326 + C13888 + C13888 + C49393 * C2338 + C4981 * C10248 +
            C13889 + C13889 + C49265 * C10252) *
               C11232 +
           (C4979 * C9784 + C14991 + C14991 + C49393 * C9788 + C4981 * C10682 +
            C14992 + C14992 + C49265 * C10684) *
               C49400) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[198] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49445 +
            (C113 * C591 + C607 + C607 + C49178 * C601) * C49425) *
               C1077 +
           (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
              C49149 * C49132 * C110 -
          ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
           (C1103 + C1082 + C1081) * C1077) *
              C49149 * C49132 * C111 +
          (C1106 * C1077 + (C1092 + C1091 + C1105) * C1078 +
           (C167 * C49457 + C300 * C49445 +
            (C113 * C595 + C611 + C611 + C49178 * C605) * C49425) *
               C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C49149 * C49132 * C110 -
          (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
           C169 * C103) *
              C49149 * C49132 * C111 +
          (C170 * C103 + C171 * C104 + C172 * C105 + C173 * C106 +
           (C113 * C121 + C153 + C153 + C49178 * C135) * C49161 * C107) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
            C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
            C49428 * C954) *
               C49161 * C1077 +
           (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
              C49149 * C49132 * C110 -
          ((C2526 + C2527 + C2528) * C49161 * C49414 +
           (C2525 + C2524 + C2523) * C49161 * C1078 +
           (C2522 + C2521 + C2520) * C49161 * C1077) *
              C49149 * C49132 * C111 +
          (C2531 * C1077 + (C2528 + C2527 + C2526) * C49161 * C1078 +
           (C2462 * C119 + C2499 + C2499 + C49458 * C133 + C2464 * C391 +
            C2500 + C2500 + C49447 * C403 + C2466 * C948 + C2501 + C2501 +
            C49428 * C958) *
               C49161 * C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
            C1289 * C7927 + C1290 * C49425) *
               C49454 +
           (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
              C49149 * C49132 * C110 -
          ((C7939 + C7940 + C7941) * C49414 + (C7938 + C7937 + C7936) * C49441 +
           (C7935 + C7934 + C7933) * C49454) *
              C49149 * C49132 * C111 +
          (C7943 * C49454 + (C7941 + C7940 + C7939) * C49441 +
           (C167 * C7926 + C300 * C7927 +
            (C113 * C595 + C611 + C611 + C49178 * C605) * C49425) *
               C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 + C1289 * C9114 +
           C1290 * C9115 + C1755 * C9116 +
           (C113 * C1738 + C1750 + C1750 + C49178 * C1744) * C9117) *
              C49065 * C49149 * C49132 * C110 -
          ((C113 * C1739 + C1751 + C1751 + C49178 * C1745) * C9117 +
           C1292 * C9116 + C1100 * C9115 + C303 * C9114 + C164 * C9113) *
              C49065 * C49149 * C49132 * C111 +
          (C165 * C9113 + C302 * C9114 + C1101 * C9115 + C1291 * C9116 +
           (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C9117) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
            C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
            C49428 * C954) *
               C7926 +
           (C2462 * C263 + C2701 + C2701 + C49458 * C275 + C2464 * C693 +
            C2700 + C2700 + C49447 * C703 + C2466 * C2325 + C2699 + C2699 +
            C49428 * C2337) *
               C7927 +
           (C2462 * C591 + C3179 + C3179 + C49458 * C601 + C2464 * C1442 +
            C3180 + C3180 + C49447 * C1450 + C2466 * C2326 + C3181 + C3181 +
            C49428 * C2338) *
               C49425) *
              C49065 * C49149 * C49132 * C110 -
          ((C2466 * C2328 + C3184 + C3184 + C49428 * C2340 + C2464 * C1441 +
            C3183 + C3183 + C49447 * C1449 + C2462 * C592 + C3182 + C3182 +
            C49458 * C602) *
               C49425 +
           (C2720 + C2721 + C2722) * C7927 + (C2522 + C2521 + C2520) * C7926) *
              C49065 * C49149 * C49132 * C111 +
          (C2530 * C7926 + (C2719 + C2718 + C2717) * C7927 +
           (C2462 * C593 + C3185 + C3185 + C49458 * C603 + C2464 * C1440 +
            C3186 + C3186 + C49447 * C1448 + C2466 * C2330 + C3187 + C3187 +
            C49428 * C2342) *
               C49425) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[199] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C49149 * C255 -
           ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
            ((C113 * C1254 + C1279 + C1279 + C49178 * C1262) * C49425 +
             C1290 * C49445 + C1289 * C49457) *
                C1077) *
               C49149 * C49420) *
              C257 +
          (((C1278 + C1277 + C1294) * C1077 + (C1273 + C1272 + C1293) * C1078 +
            (C301 * C49457 + C1102 * C49445 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
            (C1103 + C1082 + C1081) * C1077) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C49149 * C255 -
           (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
               C49149 * C49420) *
              C257 +
          ((C307 * C103 + C306 * C104 + C305 * C105 + C304 * C106 +
            (C113 * C264 + C291 + C291 + C49178 * C276) * C49161 * C107) *
               C49149 * C49420 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C49161 * C1077 +
            (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
               C49149 * C255 -
           ((C2717 + C2718 + C2719) * C49161 * C49414 +
            (C2720 + C2721 + C2722) * C49161 * C1078 +
            (C2466 * C2325 + C2699 + C2699 + C49428 * C2337 + C2464 * C693 +
             C2700 + C2700 + C49447 * C703 + C2462 * C263 + C2701 + C2701 +
             C49458 * C275) *
                C49161 * C1077) *
               C49149 * C49420) *
              C257 +
          (((C2722 + C2721 + C2720) * C49161 * C1077 +
            (C2719 + C2718 + C2717) * C49161 * C1078 +
            (C2462 * C260 + C2702 + C2702 + C49458 * C272 + C2464 * C696 +
             C2703 + C2703 + C49447 * C706 + C2466 * C2677 + C2704 + C2704 +
             C49428 * C2679) *
                C49161 * C49414) *
               C49149 * C49420 -
           ((C2526 + C2527 + C2528) * C49161 * C49414 +
            (C2525 + C2524 + C2523) * C49161 * C1078 +
            (C2522 + C2521 + C2520) * C49161 * C1077) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C49149 * C255 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C49149 * C49420) *
              C257 +
          (((C8095 + C8094 + C8093) * C49454 +
            (C8092 + C8091 + C8090) * C49441 +
            (C301 * C7926 + C1102 * C7927 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C49149 * C255 -
           ((C113 * C9201 + C9210 + C9210 + C49178 * C9205) * C9117 +
            C9218 * C9116 + C1755 * C9115 + C1290 * C9114 + C1289 * C9113) *
               C49065 * C49149 * C49420) *
              C257 +
          ((C303 * C9113 + C1100 * C9114 + C1292 * C9115 + C9219 * C9116 +
            (C113 * C9202 + C9213 + C9213 + C49178 * C9206) * C9117) *
               C49065 * C49149 * C49420 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C7926 +
            (C10094 + C10095 + C10096) * C7927 +
            (C10097 + C10098 + C10099) * C49425) *
               C49065 * C49149 * C255 -
           ((C2466 * C9784 + C10064 + C10064 + C49428 * C9788 + C2464 * C1901 +
             C10065 + C10065 + C49447 * C1907 + C2462 * C1254 + C10066 +
             C10066 + C49458 * C1262) *
                C49425 +
            (C10099 + C10098 + C10097) * C7927 +
            (C10096 + C10095 + C10094) * C7926) *
               C49065 * C49149 * C49420) *
              C257 +
          (((C2722 + C2721 + C2720) * C7926 +
            (C10100 + C10101 + C10102) * C7927 +
            (C2462 * C1253 + C10073 + C10073 + C49458 * C1261 + C2464 * C1902 +
             C10074 + C10074 + C49447 * C1908 + C2466 * C10048 + C10075 +
             C10075 + C49428 * C10050) *
                C49425) *
               C49065 * C49149 * C49420 -
           ((C10102 + C10101 + C10100) * C49425 +
            (C2720 + C2721 + C2722) * C7927 + (C2522 + C2521 + C2520) * C7926) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[200] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C389 -
           ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
            ((C113 * C1442 + C1465 + C1465 + C49178 * C1450) * C49425 +
             (C113 * C693 + C709 + C709 + C49178 * C703) * C49445 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                C1077) *
               C49422) *
              C49132 * C257 +
          (((C1464 + C1482 + C1481) * C1077 + (C1458 + C1480 + C1479) * C1078 +
            (C433 * C49457 +
             (C113 * C696 + C712 + C712 + C49178 * C706) * C49445 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
            (C1103 + C1082 + C1081) * C1077) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C389 -
           (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
               C49422) *
              C49132 * C257 +
          ((C439 * C103 + C438 * C104 + C437 * C105 + C436 * C106 +
            (C113 * C396 + C423 + C423 + C49178 * C408) * C49161 * C107) *
               C49422 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C49161 * C1077 +
            (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
               C389 -
           ((C2917 + C2918 + C2919) * C49161 * C49414 +
            (C2920 + C2921 + C2922) * C49161 * C1078 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C49161 * C1077) *
               C49422) *
              C49132 * C257 +
          (((C2922 + C2921 + C2920) * C49161 * C1077 +
            (C2919 + C2918 + C2917) * C49161 * C1078 +
            (C2462 * C392 + C2902 + C2902 + C49458 * C404 + C2464 * C947 +
             C2903 + C2903 + C49447 * C957 + C2466 * C2871 + C2904 + C2904 +
             C49428 * C2879) *
                C49161 * C49414) *
               C49422 -
           ((C2526 + C2527 + C2528) * C49161 * C49414 +
            (C2525 + C2524 + C2523) * C49161 * C1078 +
            (C2522 + C2521 + C2520) * C49161 * C1077) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C389 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C49132 * C257 +
          (((C8247 + C8246 + C8245) * C49454 +
            (C8244 + C8243 + C8242) * C49441 +
            (C433 * C7926 + C4161 * C7927 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C389 -
           ((C113 * C9301 + C9308 + C9308 + C49178 * C9305) * C9117 +
            (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C9116 +
            C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C49132 * C257 +
          ((C435 * C9113 + C1478 * C9114 + C1477 * C9115 +
            (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C9116 +
            (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C9117) *
               C49065 * C49422 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C7926 +
            (C10094 + C10095 + C10096) * C7927 +
            (C10097 + C10098 + C10099) * C49425) *
               C49065 * C389 -
           ((C2466 * C10248 + C10255 + C10255 + C49428 * C10252 +
             C2464 * C2326 + C10256 + C10256 + C49447 * C2338 + C2462 * C1442 +
             C10257 + C10257 + C49458 * C1450) *
                C49425 +
            (C2466 * C3333 + C3345 + C3345 + C49428 * C3339 + C2464 * C2325 +
             C3344 + C3344 + C49447 * C2337 + C2462 * C693 + C3343 + C3343 +
             C49458 * C703) *
                C7927 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C7926) *
               C49065 * C49422) *
              C49132 * C257 +
          (((C2922 + C2921 + C2920) * C7926 +
            (C2462 * C694 + C3346 + C3346 + C49458 * C704 + C2464 * C2327 +
             C3347 + C3347 + C49447 * C2339 + C2466 * C3334 + C3348 + C3348 +
             C49428 * C3340) *
                C7927 +
            (C2462 * C1441 + C10258 + C10258 + C49458 * C1449 + C2464 * C2328 +
             C10259 + C10259 + C49447 * C2340 + C2466 * C10249 + C10260 +
             C10260 + C49428 * C10253) *
                C49425) *
               C49065 * C49422 -
           ((C10102 + C10101 + C10100) * C49425 +
            (C2720 + C2721 + C2722) * C7927 + (C2522 + C2521 + C2520) * C7926) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[201] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C49149 * C521 -
           ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
            ((C113 * C1254 + C1279 + C1279 + C49178 * C1262) * C49425 +
             C1290 * C49445 + C1289 * C49457) *
                C1077) *
               C49149 * C49420) *
              C523 +
          (((C1278 + C1277 + C1294) * C1077 + (C1273 + C1272 + C1293) * C1078 +
            (C301 * C49457 + C1102 * C49445 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
            (C1103 + C1082 + C1081) * C1077) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C49149 * C521 -
           (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
               C49149 * C49420) *
              C523 +
          ((C307 * C103 + C306 * C104 + C305 * C105 + C304 * C106 +
            (C113 * C264 + C291 + C291 + C49178 * C276) * C49161 * C107) *
               C49149 * C49420 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C49161 * C1077 +
            (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
               C49149 * C521 -
           ((C2717 + C2718 + C2719) * C49161 * C49414 +
            (C2720 + C2721 + C2722) * C49161 * C1078 +
            (C2466 * C2325 + C2699 + C2699 + C49428 * C2337 + C2464 * C693 +
             C2700 + C2700 + C49447 * C703 + C2462 * C263 + C2701 + C2701 +
             C49458 * C275) *
                C49161 * C1077) *
               C49149 * C49420) *
              C523 +
          (((C2722 + C2721 + C2720) * C49161 * C1077 +
            (C2719 + C2718 + C2717) * C49161 * C1078 +
            (C2462 * C260 + C2702 + C2702 + C49458 * C272 + C2464 * C696 +
             C2703 + C2703 + C49447 * C706 + C2466 * C2677 + C2704 + C2704 +
             C49428 * C2679) *
                C49161 * C49414) *
               C49149 * C49420 -
           ((C2526 + C2527 + C2528) * C49161 * C49414 +
            (C2525 + C2524 + C2523) * C49161 * C1078 +
            (C2522 + C2521 + C2520) * C49161 * C1077) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C49149 * C521 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C49149 * C49420) *
              C523 +
          (((C8095 + C8094 + C8093) * C49454 +
            (C8092 + C8091 + C8090) * C49441 +
            (C301 * C7926 + C1102 * C7927 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C49149 * C521 -
           ((C113 * C9201 + C9210 + C9210 + C49178 * C9205) * C9117 +
            C9218 * C9116 + C1755 * C9115 + C1290 * C9114 + C1289 * C9113) *
               C49065 * C49149 * C49420) *
              C523 +
          ((C303 * C9113 + C1100 * C9114 + C1292 * C9115 + C9219 * C9116 +
            (C113 * C9202 + C9213 + C9213 + C49178 * C9206) * C9117) *
               C49065 * C49149 * C49420 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C7926 +
            (C10094 + C10095 + C10096) * C7927 +
            (C10097 + C10098 + C10099) * C49425) *
               C49065 * C49149 * C521 -
           ((C2466 * C9784 + C10064 + C10064 + C49428 * C9788 + C2464 * C1901 +
             C10065 + C10065 + C49447 * C1907 + C2462 * C1254 + C10066 +
             C10066 + C49458 * C1262) *
                C49425 +
            (C10099 + C10098 + C10097) * C7927 +
            (C10096 + C10095 + C10094) * C7926) *
               C49065 * C49149 * C49420) *
              C523 +
          (((C2722 + C2721 + C2720) * C7926 +
            (C10100 + C10101 + C10102) * C7927 +
            (C2462 * C1253 + C10073 + C10073 + C49458 * C1261 + C2464 * C1902 +
             C10074 + C10074 + C49447 * C1908 + C2466 * C10048 + C10075 +
             C10075 + C49428 * C10050) *
                C49425) *
               C49065 * C49149 * C49420 -
           ((C10102 + C10101 + C10100) * C49425 +
            (C2720 + C2721 + C2722) * C7927 + (C2522 + C2521 + C2520) * C7926) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[202] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
            C1289 * C49445 + C1290 * C49425) *
               C1077 +
           (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
              C49149 * C587 -
          ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
           (C1755 * C49425 + C1290 * C49445 + C1289 * C49457) * C1077) *
              C49149 * C588 +
          ((C1290 * C49457 + C1755 * C49445 +
            (C113 * C1738 + C1750 + C1750 + C49178 * C1744) * C49425) *
               C1077 +
           (C1100 * C49457 + C1292 * C49445 +
            (C113 * C1739 + C1751 + C1751 + C49178 * C1745) * C49425) *
               C1078 +
           (C1101 * C49457 + C1291 * C49445 +
            (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49425) *
               C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C49149 * C587 -
          (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
           (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
              C49149 * C588 +
          ((C113 * C591 + C607 + C607 + C49178 * C601) * C49161 * C103 +
           (C113 * C592 + C608 + C608 + C49178 * C602) * C49161 * C104 +
           (C113 * C593 + C609 + C609 + C49178 * C603) * C49161 * C105 +
           (C113 * C594 + C610 + C610 + C49178 * C604) * C49161 * C106 +
           (C113 * C595 + C611 + C611 + C49178 * C605) * C49161 * C107) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
            C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
            C49428 * C954) *
               C49161 * C1077 +
           (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
              C49149 * C587 -
          ((C2717 + C2718 + C2719) * C49161 * C49414 +
           (C2720 + C2721 + C2722) * C49161 * C1078 +
           (C2466 * C2325 + C2699 + C2699 + C49428 * C2337 + C2464 * C693 +
            C2700 + C2700 + C49447 * C703 + C2462 * C263 + C2701 + C2701 +
            C49458 * C275) *
               C49161 * C1077) *
              C49149 * C588 +
          ((C2462 * C591 + C3179 + C3179 + C49458 * C601 + C2464 * C1442 +
            C3180 + C3180 + C49447 * C1450 + C2466 * C2326 + C3181 + C3181 +
            C49428 * C2338) *
               C49161 * C1077 +
           (C2462 * C592 + C3182 + C3182 + C49458 * C602 + C2464 * C1441 +
            C3183 + C3183 + C49447 * C1449 + C2466 * C2328 + C3184 + C3184 +
            C49428 * C2340) *
               C49161 * C1078 +
           (C2462 * C593 + C3185 + C3185 + C49458 * C603 + C2464 * C1440 +
            C3186 + C3186 + C49447 * C1448 + C2466 * C2330 + C3187 + C3187 +
            C49428 * C2342) *
               C49161 * C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
            C1289 * C7927 + C1290 * C49425) *
               C49454 +
           (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
              C49149 * C587 -
          ((C8090 + C8091 + C8092) * C49414 + (C8093 + C8094 + C8095) * C49441 +
           (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
              C49149 * C588 +
          ((C1290 * C7926 + C1755 * C7927 +
            (C113 * C1738 + C1750 + C1750 + C49178 * C1744) * C49425) *
               C49454 +
           (C1100 * C7926 + C1292 * C7927 +
            (C113 * C1739 + C1751 + C1751 + C49178 * C1745) * C49425) *
               C49441 +
           (C1101 * C7926 + C1291 * C7927 +
            (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49425) *
               C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 + C1289 * C9114 +
           C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
              C49065 * C49149 * C587 -
          (C9462 * C9117 + C9218 * C9116 + C1755 * C9115 + C1290 * C9114 +
           C1289 * C9113) *
              C49065 * C49149 * C588 +
          (C1290 * C9113 + C1755 * C9114 + C9218 * C9115 + C9462 * C9116 +
           (C113 * C9453 + C9459 + C9459 + C49178 * C9455) * C9117) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
            C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
            C49428 * C954) *
               C7926 +
           (C10094 + C10095 + C10096) * C7927 + C10527 * C49425) *
              C49065 * C49149 * C587 -
          ((C10534 + C10535 + C10536) * C49425 +
           (C10099 + C10098 + C10097) * C7927 +
           (C10096 + C10095 + C10094) * C7926) *
              C49065 * C49149 * C588 +
          (C10527 * C7926 + (C10536 + C10535 + C10534) * C7927 +
           (C2462 * C1738 + C10524 + C10524 + C49458 * C1744 + C2464 * C9301 +
            C10525 + C10525 + C49447 * C9305 + C2466 * C9785 + C10526 + C10526 +
            C49428 * C9789) *
               C49425) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[203] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C389 -
           ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
            (C1922 * C49425 + C1923 * C49445 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                C1077) *
               C49422) *
              C521 +
          (((C1923 * C49457 + C1922 * C49445 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C1077 +
            (C1478 * C49457 + C1477 * C49445 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C1078 +
            (C1476 * C49457 + C1475 * C49445 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
            (C1755 * C49425 + C1290 * C49445 + C1289 * C49457) * C1077) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C389 -
           (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
               C49422) *
              C521 +
          (((C113 * C693 + C709 + C709 + C49178 * C703) * C49161 * C103 +
            (C113 * C694 + C710 + C710 + C49178 * C704) * C49161 * C104 +
            (C113 * C695 + C711 + C711 + C49178 * C705) * C49161 * C105 +
            (C113 * C696 + C712 + C712 + C49178 * C706) * C49161 * C106 +
            (C113 * C697 + C713 + C713 + C49178 * C707) * C49161 * C107) *
               C49422 -
           (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C49161 * C1077 +
            (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
               C389 -
           ((C2917 + C2918 + C2919) * C49161 * C49414 +
            (C2920 + C2921 + C2922) * C49161 * C1078 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C49161 * C1077) *
               C49422) *
              C521 +
          (((C2462 * C693 + C3343 + C3343 + C49458 * C703 + C2464 * C2325 +
             C3344 + C3344 + C49447 * C2337 + C2466 * C3333 + C3345 + C3345 +
             C49428 * C3339) *
                C49161 * C1077 +
            (C2462 * C694 + C3346 + C3346 + C49458 * C704 + C2464 * C2327 +
             C3347 + C3347 + C49447 * C2339 + C2466 * C3334 + C3348 + C3348 +
             C49428 * C3340) *
                C49161 * C1078 +
            (C2462 * C695 + C3349 + C3349 + C49458 * C705 + C2464 * C2329 +
             C3350 + C3350 + C49447 * C2341 + C2466 * C3335 + C3351 + C3351 +
             C49428 * C3341) *
                C49161 * C49414) *
               C49422 -
           ((C2717 + C2718 + C2719) * C49161 * C49414 +
            (C2720 + C2721 + C2722) * C49161 * C1078 +
            (C2466 * C2325 + C2699 + C2699 + C49428 * C2337 + C2464 * C693 +
             C2700 + C2700 + C49447 * C703 + C2462 * C263 + C2701 + C2701 +
             C49458 * C275) *
                C49161 * C1077) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C389 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C521 +
          (((C1923 * C7926 + C1922 * C7927 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C49454 +
            (C1478 * C7926 + C1477 * C7927 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C49441 +
            (C1476 * C7926 + C1475 * C7927 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C389 -
           (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C521 +
          ((C1923 * C9113 + C1922 * C9114 + C9558 * C9115 + C9557 * C9116 +
            (C113 * C9544 + C9552 + C9552 + C49178 * C9546) * C9117) *
               C49065 * C49422 -
           (C9462 * C9117 + C9218 * C9116 + C1755 * C9115 + C1290 * C9114 +
            C1289 * C9113) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C7926 +
            (C10094 + C10095 + C10096) * C7927 + C10527 * C49425) *
               C49065 * C389 -
           ((C10713 + C10714 + C10715) * C49425 +
            (C10716 + C10717 + C10718) * C7927 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C7926) *
               C49065 * C49422) *
              C521 +
          (((C10718 + C10717 + C10716) * C7926 +
            (C10715 + C10714 + C10713) * C7927 +
            (C2462 * C1901 + C10698 + C10698 + C49458 * C1907 + C2464 * C9784 +
             C10699 + C10699 + C49447 * C9788 + C2466 * C10682 + C10700 +
             C10700 + C49428 * C10684) *
                C49425) *
               C49065 * C49422 -
           ((C10534 + C10535 + C10536) * C49425 +
            (C10099 + C10098 + C10097) * C7927 +
            (C10096 + C10095 + C10094) * C7926) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[204] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C795 -
           ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
            (C1922 * C49425 + C1923 * C49445 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                C1077) *
               C49422) *
              C49132 * C523 +
          (((C1464 + C1482 + C1481) * C1077 + (C1458 + C1480 + C1479) * C1078 +
            (C433 * C49457 +
             (C113 * C696 + C712 + C712 + C49178 * C706) * C49445 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
            (C1103 + C1082 + C1081) * C1077) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C795 -
           (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
               C49422) *
              C49132 * C523 +
          ((C439 * C103 + C438 * C104 + C437 * C105 + C436 * C106 +
            (C113 * C396 + C423 + C423 + C49178 * C408) * C49161 * C107) *
               C49422 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C49161 * C1077 +
            (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
               C795 -
           ((C2917 + C2918 + C2919) * C49161 * C49414 +
            (C2920 + C2921 + C2922) * C49161 * C1078 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C49161 * C1077) *
               C49422) *
              C49132 * C523 +
          (((C2922 + C2921 + C2920) * C49161 * C1077 +
            (C2919 + C2918 + C2917) * C49161 * C1078 +
            (C2462 * C392 + C2902 + C2902 + C49458 * C404 + C2464 * C947 +
             C2903 + C2903 + C49447 * C957 + C2466 * C2871 + C2904 + C2904 +
             C49428 * C2879) *
                C49161 * C49414) *
               C49422 -
           ((C2526 + C2527 + C2528) * C49161 * C49414 +
            (C2525 + C2524 + C2523) * C49161 * C1078 +
            (C2522 + C2521 + C2520) * C49161 * C1077) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C795 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C49132 * C523 +
          (((C8247 + C8246 + C8245) * C49454 +
            (C8244 + C8243 + C8242) * C49441 +
            (C433 * C7926 + C4161 * C7927 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C795 -
           (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C49132 * C523 +
          ((C435 * C9113 + C1478 * C9114 + C1477 * C9115 +
            (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C9116 +
            (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C9117) *
               C49065 * C49422 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C7926 +
            (C10094 + C10095 + C10096) * C7927 + C10527 * C49425) *
               C49065 * C795 -
           ((C10713 + C10714 + C10715) * C49425 +
            (C10716 + C10717 + C10718) * C7927 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C7926) *
               C49065 * C49422) *
              C49132 * C523 +
          (((C2922 + C2921 + C2920) * C7926 +
            (C2462 * C694 + C3346 + C3346 + C49458 * C704 + C2464 * C2327 +
             C3347 + C3347 + C49447 * C2339 + C2466 * C3334 + C3348 + C3348 +
             C49428 * C3340) *
                C7927 +
            (C2462 * C1441 + C10258 + C10258 + C49458 * C1449 + C2464 * C2328 +
             C10259 + C10259 + C49447 * C2340 + C2466 * C10249 + C10260 +
             C10260 + C49428 * C10253) *
                C49425) *
               C49065 * C49422 -
           ((C10102 + C10101 + C10100) * C49425 +
            (C2720 + C2721 + C2722) * C7927 + (C2522 + C2521 + C2520) * C7926) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[205] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C795 -
           ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
            (C1922 * C49425 + C1923 * C49445 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                C1077) *
               C49422) *
              C255 +
          (((C1923 * C49457 + C1922 * C49445 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C1077 +
            (C1478 * C49457 + C1477 * C49445 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C1078 +
            (C1476 * C49457 + C1475 * C49445 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
            (C1755 * C49425 + C1290 * C49445 + C1289 * C49457) * C1077) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C795 -
           (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
               C49422) *
              C255 +
          (((C113 * C693 + C709 + C709 + C49178 * C703) * C49161 * C103 +
            (C113 * C694 + C710 + C710 + C49178 * C704) * C49161 * C104 +
            (C113 * C695 + C711 + C711 + C49178 * C705) * C49161 * C105 +
            (C113 * C696 + C712 + C712 + C49178 * C706) * C49161 * C106 +
            (C113 * C697 + C713 + C713 + C49178 * C707) * C49161 * C107) *
               C49422 -
           (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C49161 * C1077 +
            (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
               C795 -
           ((C2917 + C2918 + C2919) * C49161 * C49414 +
            (C2920 + C2921 + C2922) * C49161 * C1078 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C49161 * C1077) *
               C49422) *
              C255 +
          (((C2462 * C693 + C3343 + C3343 + C49458 * C703 + C2464 * C2325 +
             C3344 + C3344 + C49447 * C2337 + C2466 * C3333 + C3345 + C3345 +
             C49428 * C3339) *
                C49161 * C1077 +
            (C2462 * C694 + C3346 + C3346 + C49458 * C704 + C2464 * C2327 +
             C3347 + C3347 + C49447 * C2339 + C2466 * C3334 + C3348 + C3348 +
             C49428 * C3340) *
                C49161 * C1078 +
            (C2462 * C695 + C3349 + C3349 + C49458 * C705 + C2464 * C2329 +
             C3350 + C3350 + C49447 * C2341 + C2466 * C3335 + C3351 + C3351 +
             C49428 * C3341) *
                C49161 * C49414) *
               C49422 -
           ((C2717 + C2718 + C2719) * C49161 * C49414 +
            (C2720 + C2721 + C2722) * C49161 * C1078 +
            (C2466 * C2325 + C2699 + C2699 + C49428 * C2337 + C2464 * C693 +
             C2700 + C2700 + C49447 * C703 + C2462 * C263 + C2701 + C2701 +
             C49458 * C275) *
                C49161 * C1077) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C795 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C255 +
          (((C1923 * C7926 + C1922 * C7927 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C49454 +
            (C1478 * C7926 + C1477 * C7927 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C49441 +
            (C1476 * C7926 + C1475 * C7927 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C795 -
           (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C255 +
          ((C1923 * C9113 + C1922 * C9114 + C9558 * C9115 + C9557 * C9116 +
            (C113 * C9544 + C9552 + C9552 + C49178 * C9546) * C9117) *
               C49065 * C49422 -
           (C9462 * C9117 + C9218 * C9116 + C1755 * C9115 + C1290 * C9114 +
            C1289 * C9113) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
             C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
             C49428 * C954) *
                C7926 +
            (C10094 + C10095 + C10096) * C7927 + C10527 * C49425) *
               C49065 * C795 -
           ((C10713 + C10714 + C10715) * C49425 +
            (C10716 + C10717 + C10718) * C7927 +
            (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
             C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
             C49458 * C407) *
                C7926) *
               C49065 * C49422) *
              C255 +
          (((C10718 + C10717 + C10716) * C7926 +
            (C10715 + C10714 + C10713) * C7927 +
            (C2462 * C1901 + C10698 + C10698 + C49458 * C1907 + C2464 * C9784 +
             C10699 + C10699 + C49447 * C9788 + C2466 * C10682 + C10700 +
             C10700 + C49428 * C10684) *
                C49425) *
               C49065 * C49422 -
           ((C10534 + C10535 + C10536) * C49425 +
            (C10099 + C10098 + C10097) * C7927 +
            (C10096 + C10095 + C10094) * C7926) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[206] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
            C1289 * C49445 + C1290 * C49425) *
               C1077 +
           (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
              C941 -
          ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
           (C1922 * C49425 + C1923 * C49445 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
               C1077) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C49457 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C49445 +
            (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C49425) *
               C1077 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C49457 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C49445 +
            (C113 * C2328 + C2347 + C2347 + C49178 * C2340) * C49425) *
               C1078 +
           ((C113 * C946 + C962 + C962 + C49178 * C956) * C49457 +
            (C113 * C2329 + C2348 + C2348 + C49178 * C2341) * C49445 +
            (C113 * C2330 + C2349 + C2349 + C49178 * C2342) * C49425) *
               C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C941 -
          (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
           (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
              C942 +
          ((C113 * C944 + C960 + C960 + C49178 * C954) * C49161 * C103 +
           (C113 * C945 + C961 + C961 + C49178 * C955) * C49161 * C104 +
           (C113 * C946 + C962 + C962 + C49178 * C956) * C49161 * C105 +
           (C113 * C947 + C963 + C963 + C49178 * C957) * C49161 * C106 +
           (C113 * C948 + C964 + C964 + C49178 * C958) * C49161 * C107) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
            C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
            C49428 * C954) *
               C49161 * C1077 +
           (C2520 + C2521 + C2522) * C49161 * C1078 + C2531 * C49414) *
              C941 -
          ((C2917 + C2918 + C2919) * C49161 * C49414 +
           (C2920 + C2921 + C2922) * C49161 * C1078 +
           (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
            C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
            C49458 * C407) *
               C49161 * C1077) *
              C942 +
          ((C2462 * C944 + C3763 + C3763 + C49458 * C954 + C2464 * C2870 +
            C3764 + C3764 + C49447 * C2878 + C2466 * C3753 + C3765 + C3765 +
            C49428 * C3759) *
               C49161 * C1077 +
           (C2462 * C945 + C3766 + C3766 + C49458 * C955 + C2464 * C2869 +
            C3767 + C3767 + C49447 * C2877 + C2466 * C3754 + C3768 + C3768 +
            C49428 * C3760) *
               C49161 * C1078 +
           (C2462 * C946 + C3769 + C3769 + C49458 * C956 + C2464 * C2868 +
            C3770 + C3770 + C49447 * C2876 + C2466 * C3755 + C3771 + C3771 +
            C49428 * C3761) *
               C49161 * C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
            C1289 * C7927 + C1290 * C49425) *
               C49454 +
           (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
              C941 -
          ((C8242 + C8243 + C8244) * C49414 + (C8245 + C8246 + C8247) * C49441 +
           (C1922 * C49425 + C1923 * C7927 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
               C49454) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C7926 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C7927 +
            (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C49425) *
               C49454 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C7926 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C7927 +
            (C113 * C2328 + C2347 + C2347 + C49178 * C2340) * C49425) *
               C49441 +
           ((C113 * C946 + C962 + C962 + C49178 * C956) * C7926 +
            (C113 * C2329 + C2348 + C2348 + C49178 * C2341) * C7927 +
            (C113 * C2330 + C2349 + C2349 + C49178 * C2342) * C49425) *
               C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 + C1289 * C9114 +
           C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
              C49065 * C941 -
          (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
           (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
              C49065 * C942 +
          ((C113 * C944 + C960 + C960 + C49178 * C954) * C9113 +
           (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C9114 +
           (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C9115 +
           (C113 * C9784 + C9791 + C9791 + C49178 * C9788) * C9116 +
           (C113 * C9785 + C9792 + C9792 + C49178 * C9789) * C9117) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2462 * C115 + C2469 + C2469 + C49458 * C129 + C2464 * C395 +
            C2470 + C2470 + C49447 * C407 + C2466 * C944 + C2471 + C2471 +
            C49428 * C954) *
               C7926 +
           (C10094 + C10095 + C10096) * C7927 + C10527 * C49425) *
              C49065 * C941 -
          ((C10713 + C10714 + C10715) * C49425 +
           (C10716 + C10717 + C10718) * C7927 +
           (C2466 * C2870 + C2899 + C2899 + C49428 * C2878 + C2464 * C944 +
            C2900 + C2900 + C49447 * C954 + C2462 * C395 + C2901 + C2901 +
            C49458 * C407) *
               C7926) *
              C49065 * C942 +
          ((C2462 * C944 + C3763 + C3763 + C49458 * C954 + C2464 * C2870 +
            C3764 + C3764 + C49447 * C2878 + C2466 * C3753 + C3765 + C3765 +
            C49428 * C3759) *
               C7926 +
           (C2462 * C2325 + C11127 + C11127 + C49458 * C2337 + C2464 * C3333 +
            C11128 + C11128 + C49447 * C3339 + C2466 * C11120 + C11129 +
            C11129 + C49428 * C11124) *
               C7927 +
           (C2462 * C2326 + C11130 + C11130 + C49458 * C2338 + C2464 * C10248 +
            C11131 + C11131 + C49447 * C10252 + C2466 * C11121 + C11132 +
            C11132 + C49428 * C11125) *
               C49425) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[207] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
            C4985 + C4985 + C49265 * C407) *
               C49161 * C3871 +
           (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
              C49149 * C49132 * C110 -
          ((C5034 + C5035) * C49161 * C49392 +
           (C5033 + C5032) * C49161 * C3873 + (C5031 + C5030) * C49161 * C3872 +
           (C5029 + C5028) * C49161 * C3871) *
              C49149 * C49132 * C111 +
          (C5038 * C3871 + C5039 * C3872 + (C5035 + C5034) * C49161 * C3873 +
           (C4979 * C120 + C5010 + C5010 + C49393 * C134 + C4981 * C396 +
            C5011 + C5011 + C49265 * C408) *
               C49161 * C49392) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C7926 +
            (C6491 + C6492) * C7927 + (C7066 + C7065) * C49425) *
               C49370 +
           ((C5028 + C5029) * C7926 + C6468 * C7927 +
            (C6496 + C6495) * C49425) *
               C49075) *
              C49149 * C49132 * C110 -
          (((C6493 + C6494) * C49425 + C6473 * C7927 +
            (C5031 + C5030) * C7926) *
               C49075 +
           ((C6495 + C6496) * C49425 + C6478 * C7927 +
            (C5029 + C5028) * C7926) *
               C49370) *
              C49149 * C49132 * C111 +
          ((C5036 * C7926 + C6267 * C7927 + (C6494 + C6493) * C49425) * C49370 +
           (C5037 * C7926 + (C5205 + C5204) * C7927 +
            (C4979 * C594 + C5614 + C5614 + C49393 * C604 + C4981 * C1443 +
             C5615 + C5615 + C49265 * C1451) *
                C49425) *
               C49075) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[208] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49161 * C3871 +
            (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
               C49149 * C255 -
           ((C5204 + C5205) * C49161 * C49392 +
            (C5206 + C5207) * C49161 * C3873 +
            (C5208 + C5209) * C49161 * C3872 +
            (C4981 * C693 + C5188 + C5188 + C49265 * C703 + C4979 * C263 +
             C5189 + C5189 + C49393 * C275) *
                C49161 * C3871) *
               C49149 * C49420) *
              C257 +
          (((C5209 + C5208) * C49161 * C3871 +
            (C5207 + C5206) * C49161 * C3872 +
            (C5205 + C5204) * C49161 * C3873 +
            (C4979 * C259 + C5190 + C5190 + C49393 * C271 + C4981 * C697 +
             C5191 + C5191 + C49265 * C707) *
                C49161 * C49392) *
               C49149 * C49420 -
           ((C5034 + C5035) * C49161 * C49392 +
            (C5033 + C5032) * C49161 * C3873 +
            (C5031 + C5030) * C49161 * C3872 +
            (C5029 + C5028) * C49161 * C3871) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C7926 +
             (C6491 + C6492) * C7927 + (C7066 + C7065) * C49425) *
                C49370 +
            ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
                C49075) *
               C49149 * C255 -
           (((C12585 + C12586) * C49425 + C12580 * C7927 + C6478 * C7926) *
                C49075 +
            ((C4981 * C1901 + C7056 + C7056 + C49265 * C1907 + C4979 * C1254 +
              C7055 + C7055 + C49393 * C1262) *
                 C49425 +
             (C7065 + C7066) * C7927 + (C6492 + C6491) * C7926) *
                C49370) *
               C49149 * C49420) *
              C257 +
          (((C6468 * C7926 + C12575 * C7927 + (C12586 + C12585) * C49425) *
                C49370 +
            (C6267 * C7926 + (C6494 + C6493) * C7927 +
             (C4979 * C1252 + C7059 + C7059 + C49393 * C1260 + C4981 * C1903 +
              C7060 + C7060 + C49265 * C1909) *
                 C49425) *
                C49075) *
               C49149 * C49420 -
           (((C6493 + C6494) * C49425 + C6473 * C7927 +
             (C5031 + C5030) * C7926) *
                C49075 +
            (C12580 * C49425 + C6478 * C7927 + (C5029 + C5028) * C7926) *
                C49370) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[209] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49161 * C3871 +
            (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
               C389 -
           ((C5374 + C5375) * C49161 * C49392 +
            (C5376 + C5377) * C49161 * C3873 +
            (C5378 + C5379) * C49161 * C3872 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C49161 * C3871) *
               C49422) *
              C49132 * C257 +
          (((C5379 + C5378) * C49161 * C3871 +
            (C5377 + C5376) * C49161 * C3872 +
            (C5375 + C5374) * C49161 * C3873 +
            (C4979 * C391 + C5360 + C5360 + C49393 * C403 + C4981 * C948 +
             C5361 + C5361 + C49265 * C958) *
                C49161 * C49392) *
               C49422 -
           ((C5034 + C5035) * C49161 * C49392 +
            (C5033 + C5032) * C49161 * C3873 +
            (C5031 + C5030) * C49161 * C3872 +
            (C5029 + C5028) * C49161 * C3871) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C7926 +
             (C6491 + C6492) * C7927 + (C7066 + C7065) * C49425) *
                C49370 +
            ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
                C49075) *
               C389 -
           (((C12789 + C12790) * C49425 + (C6709 + C6710) * C7927 +
             (C5378 + C5379) * C7926) *
                C49075 +
            ((C4981 * C2326 + C7266 + C7266 + C49265 * C2338 + C4979 * C1442 +
              C7265 + C7265 + C49393 * C1450) *
                 C49425 +
             (C7275 + C7276) * C7927 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C7926) *
                C49370) *
               C49422) *
              C49132 * C257 +
          ((((C5379 + C5378) * C7926 + (C6710 + C6709) * C7927 +
             (C12790 + C12789) * C49425) *
                C49370 +
            ((C5377 + C5376) * C7926 + (C6708 + C6707) * C7927 +
             (C4979 * C1440 + C7269 + C7269 + C49393 * C1448 + C4981 * C2330 +
              C7270 + C7270 + C49265 * C2342) *
                 C49425) *
                C49075) *
               C49422 -
           (((C6493 + C6494) * C49425 + C6473 * C7927 +
             (C5031 + C5030) * C7926) *
                C49075 +
            (C12580 * C49425 + C6478 * C7927 + (C5029 + C5028) * C7926) *
                C49370) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[210] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49161 * C3871 +
            (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
               C49149 * C521 -
           ((C5204 + C5205) * C49161 * C49392 +
            (C5206 + C5207) * C49161 * C3873 +
            (C5208 + C5209) * C49161 * C3872 +
            (C4981 * C693 + C5188 + C5188 + C49265 * C703 + C4979 * C263 +
             C5189 + C5189 + C49393 * C275) *
                C49161 * C3871) *
               C49149 * C49420) *
              C523 +
          (((C5209 + C5208) * C49161 * C3871 +
            (C5207 + C5206) * C49161 * C3872 +
            (C5205 + C5204) * C49161 * C3873 +
            (C4979 * C259 + C5190 + C5190 + C49393 * C271 + C4981 * C697 +
             C5191 + C5191 + C49265 * C707) *
                C49161 * C49392) *
               C49149 * C49420 -
           ((C5034 + C5035) * C49161 * C49392 +
            (C5033 + C5032) * C49161 * C3873 +
            (C5031 + C5030) * C49161 * C3872 +
            (C5029 + C5028) * C49161 * C3871) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C7926 +
             (C6491 + C6492) * C7927 + (C7066 + C7065) * C49425) *
                C49370 +
            ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
                C49075) *
               C49149 * C521 -
           (((C12585 + C12586) * C49425 + C12580 * C7927 + C6478 * C7926) *
                C49075 +
            ((C4981 * C1901 + C7056 + C7056 + C49265 * C1907 + C4979 * C1254 +
              C7055 + C7055 + C49393 * C1262) *
                 C49425 +
             (C7065 + C7066) * C7927 + (C6492 + C6491) * C7926) *
                C49370) *
               C49149 * C49420) *
              C523 +
          (((C6468 * C7926 + C12575 * C7927 + (C12586 + C12585) * C49425) *
                C49370 +
            (C6267 * C7926 + (C6494 + C6493) * C7927 +
             (C4979 * C1252 + C7059 + C7059 + C49393 * C1260 + C4981 * C1903 +
              C7060 + C7060 + C49265 * C1909) *
                 C49425) *
                C49075) *
               C49149 * C49420 -
           (((C6493 + C6494) * C49425 + C6473 * C7927 +
             (C5031 + C5030) * C7926) *
                C49075 +
            (C12580 * C49425 + C6478 * C7927 + (C5029 + C5028) * C7926) *
                C49370) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[211] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
            C4985 + C4985 + C49265 * C407) *
               C49161 * C3871 +
           (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
              C49149 * C587 -
          ((C5204 + C5205) * C49161 * C49392 +
           (C5206 + C5207) * C49161 * C3873 + (C5208 + C5209) * C49161 * C3872 +
           (C4981 * C693 + C5188 + C5188 + C49265 * C703 + C4979 * C263 +
            C5189 + C5189 + C49393 * C275) *
               C49161 * C3871) *
              C49149 * C588 +
          ((C4979 * C591 + C5608 + C5608 + C49393 * C601 + C4981 * C1442 +
            C5609 + C5609 + C49265 * C1450) *
               C49161 * C3871 +
           (C4979 * C592 + C5610 + C5610 + C49393 * C602 + C4981 * C1441 +
            C5611 + C5611 + C49265 * C1449) *
               C49161 * C3872 +
           (C4979 * C593 + C5612 + C5612 + C49393 * C603 + C4981 * C1440 +
            C5613 + C5613 + C49265 * C1448) *
               C49161 * C3873 +
           (C4979 * C594 + C5614 + C5614 + C49393 * C604 + C4981 * C1443 +
            C5615 + C5615 + C49265 * C1451) *
               C49161 * C49392) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C7926 +
            (C6491 + C6492) * C7927 + C13131 * C49425) *
               C49370 +
           ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
               C49075) *
              C49149 * C587 -
          (((C12585 + C12586) * C49425 + C12580 * C7927 + C6478 * C7926) *
               C49075 +
           ((C13144 + C13145) * C49425 + (C7065 + C7066) * C7927 +
            (C6492 + C6491) * C7926) *
               C49370) *
              C49149 * C588 +
          ((C13131 * C7926 + (C13145 + C13144) * C7927 +
            (C4979 * C1738 + C13136 + C13136 + C49393 * C1744 + C4981 * C9301 +
             C13137 + C13137 + C49265 * C9305) *
                C49425) *
               C49370 +
           (C12575 * C7926 + (C12586 + C12585) * C7927 +
            (C4979 * C1739 + C13138 + C13138 + C49393 * C1745 + C4981 * C9302 +
             C13139 + C13139 + C49265 * C9306) *
                C49425) *
               C49075) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[212] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49161 * C3871 +
            (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
               C389 -
           ((C5374 + C5375) * C49161 * C49392 +
            (C5376 + C5377) * C49161 * C3873 +
            (C5378 + C5379) * C49161 * C3872 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C49161 * C3871) *
               C49422) *
              C521 +
          (((C4979 * C693 + C5746 + C5746 + C49393 * C703 + C4981 * C2325 +
             C5747 + C5747 + C49265 * C2337) *
                C49161 * C3871 +
            (C4979 * C694 + C5748 + C5748 + C49393 * C704 + C4981 * C2327 +
             C5749 + C5749 + C49265 * C2339) *
                C49161 * C3872 +
            (C4979 * C695 + C5750 + C5750 + C49393 * C705 + C4981 * C2329 +
             C5751 + C5751 + C49265 * C2341) *
                C49161 * C3873 +
            (C4979 * C696 + C5752 + C5752 + C49393 * C706 + C4981 * C2677 +
             C5753 + C5753 + C49265 * C2679) *
                C49161 * C49392) *
               C49422 -
           ((C5204 + C5205) * C49161 * C49392 +
            (C5206 + C5207) * C49161 * C3873 +
            (C5208 + C5209) * C49161 * C3872 +
            (C4981 * C693 + C5188 + C5188 + C49265 * C703 + C4979 * C263 +
             C5189 + C5189 + C49393 * C275) *
                C49161 * C3871) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C7926 +
             (C6491 + C6492) * C7927 + C13131 * C49425) *
                C49370 +
            ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
                C49075) *
               C389 -
           (((C12789 + C12790) * C49425 + (C6709 + C6710) * C7927 +
             (C5378 + C5379) * C7926) *
                C49075 +
            ((C13352 + C13353) * C49425 + (C7275 + C7276) * C7927 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C7926) *
                C49370) *
               C49422) *
              C521 +
          ((((C7276 + C7275) * C7926 + (C13353 + C13352) * C7927 +
             (C4979 * C1901 + C13344 + C13344 + C49393 * C1907 + C4981 * C9784 +
              C13345 + C13345 + C49265 * C9788) *
                 C49425) *
                C49370 +
            ((C6710 + C6709) * C7926 + (C12790 + C12789) * C7927 +
             (C4979 * C1902 + C13346 + C13346 + C49393 * C1908 +
              C4981 * C10048 + C13347 + C13347 + C49265 * C10050) *
                 C49425) *
                C49075) *
               C49422 -
           (((C12585 + C12586) * C49425 + C12580 * C7927 + C6478 * C7926) *
                C49075 +
            ((C13144 + C13145) * C49425 + (C7065 + C7066) * C7927 +
             (C6492 + C6491) * C7926) *
                C49370) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[213] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49161 * C3871 +
            (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
               C795 -
           ((C5374 + C5375) * C49161 * C49392 +
            (C5376 + C5377) * C49161 * C3873 +
            (C5378 + C5379) * C49161 * C3872 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C49161 * C3871) *
               C49422) *
              C49132 * C523 +
          (((C5379 + C5378) * C49161 * C3871 +
            (C5377 + C5376) * C49161 * C3872 +
            (C5375 + C5374) * C49161 * C3873 +
            (C4979 * C391 + C5360 + C5360 + C49393 * C403 + C4981 * C948 +
             C5361 + C5361 + C49265 * C958) *
                C49161 * C49392) *
               C49422 -
           ((C5034 + C5035) * C49161 * C49392 +
            (C5033 + C5032) * C49161 * C3873 +
            (C5031 + C5030) * C49161 * C3872 +
            (C5029 + C5028) * C49161 * C3871) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C7926 +
             (C6491 + C6492) * C7927 + C13131 * C49425) *
                C49370 +
            ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
                C49075) *
               C795 -
           (((C12789 + C12790) * C49425 + (C6709 + C6710) * C7927 +
             (C5378 + C5379) * C7926) *
                C49075 +
            ((C13352 + C13353) * C49425 + (C7275 + C7276) * C7927 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C7926) *
                C49370) *
               C49422) *
              C49132 * C523 +
          ((((C5379 + C5378) * C7926 + (C6710 + C6709) * C7927 +
             (C12790 + C12789) * C49425) *
                C49370 +
            ((C5377 + C5376) * C7926 + (C6708 + C6707) * C7927 +
             (C4979 * C1440 + C7269 + C7269 + C49393 * C1448 + C4981 * C2330 +
              C7270 + C7270 + C49265 * C2342) *
                 C49425) *
                C49075) *
               C49422 -
           (((C6493 + C6494) * C49425 + C6473 * C7927 +
             (C5031 + C5030) * C7926) *
                C49075 +
            (C12580 * C49425 + C6478 * C7927 + (C5029 + C5028) * C7926) *
                C49370) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[214] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C49161 * C3871 +
            (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
               C795 -
           ((C5374 + C5375) * C49161 * C49392 +
            (C5376 + C5377) * C49161 * C3873 +
            (C5378 + C5379) * C49161 * C3872 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C49161 * C3871) *
               C49422) *
              C255 +
          (((C4979 * C693 + C5746 + C5746 + C49393 * C703 + C4981 * C2325 +
             C5747 + C5747 + C49265 * C2337) *
                C49161 * C3871 +
            (C4979 * C694 + C5748 + C5748 + C49393 * C704 + C4981 * C2327 +
             C5749 + C5749 + C49265 * C2339) *
                C49161 * C3872 +
            (C4979 * C695 + C5750 + C5750 + C49393 * C705 + C4981 * C2329 +
             C5751 + C5751 + C49265 * C2341) *
                C49161 * C3873 +
            (C4979 * C696 + C5752 + C5752 + C49393 * C706 + C4981 * C2677 +
             C5753 + C5753 + C49265 * C2679) *
                C49161 * C49392) *
               C49422 -
           ((C5204 + C5205) * C49161 * C49392 +
            (C5206 + C5207) * C49161 * C3873 +
            (C5208 + C5209) * C49161 * C3872 +
            (C4981 * C693 + C5188 + C5188 + C49265 * C703 + C4979 * C263 +
             C5189 + C5189 + C49393 * C275) *
                C49161 * C3871) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
              C4985 + C4985 + C49265 * C407) *
                 C7926 +
             (C6491 + C6492) * C7927 + C13131 * C49425) *
                C49370 +
            ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
                C49075) *
               C795 -
           (((C12789 + C12790) * C49425 + (C6709 + C6710) * C7927 +
             (C5378 + C5379) * C7926) *
                C49075 +
            ((C13352 + C13353) * C49425 + (C7275 + C7276) * C7927 +
             (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
              C5359 + C5359 + C49393 * C407) *
                 C7926) *
                C49370) *
               C49422) *
              C255 +
          ((((C7276 + C7275) * C7926 + (C13353 + C13352) * C7927 +
             (C4979 * C1901 + C13344 + C13344 + C49393 * C1907 + C4981 * C9784 +
              C13345 + C13345 + C49265 * C9788) *
                 C49425) *
                C49370 +
            ((C6710 + C6709) * C7926 + (C12790 + C12789) * C7927 +
             (C4979 * C1902 + C13346 + C13346 + C49393 * C1908 +
              C4981 * C10048 + C13347 + C13347 + C49265 * C10050) *
                 C49425) *
                C49075) *
               C49422 -
           (((C12585 + C12586) * C49425 + C12580 * C7927 + C6478 * C7926) *
                C49075 +
            ((C13144 + C13145) * C49425 + (C7065 + C7066) * C7927 +
             (C6492 + C6491) * C7926) *
                C49370) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[215] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
            C4985 + C4985 + C49265 * C407) *
               C49161 * C3871 +
           (C5028 + C5029) * C49161 * C3872 + C5038 * C3873 + C5039 * C49392) *
              C941 -
          ((C5374 + C5375) * C49161 * C49392 +
           (C5376 + C5377) * C49161 * C3873 + (C5378 + C5379) * C49161 * C3872 +
           (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
            C5359 + C5359 + C49393 * C407) *
               C49161 * C3871) *
              C942 +
          ((C4979 * C944 + C6112 + C6112 + C49393 * C954 + C4981 * C2870 +
            C6113 + C6113 + C49265 * C2878) *
               C49161 * C3871 +
           (C4979 * C945 + C6114 + C6114 + C49393 * C955 + C4981 * C2869 +
            C6115 + C6115 + C49265 * C2877) *
               C49161 * C3872 +
           (C4979 * C946 + C6116 + C6116 + C49393 * C956 + C4981 * C2868 +
            C6117 + C6117 + C49265 * C2876) *
               C49161 * C3873 +
           (C4979 * C947 + C6118 + C6118 + C49393 * C957 + C4981 * C2871 +
            C6119 + C6119 + C49265 * C2879) *
               C49161 * C49392) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4979 * C115 + C4984 + C4984 + C49393 * C129 + C4981 * C395 +
             C4985 + C4985 + C49265 * C407) *
                C7926 +
            (C6491 + C6492) * C7927 + C13131 * C49425) *
               C49370 +
           ((C5028 + C5029) * C7926 + C6468 * C7927 + C12575 * C49425) *
               C49075) *
              C941 -
          (((C12789 + C12790) * C49425 + (C6709 + C6710) * C7927 +
            (C5378 + C5379) * C7926) *
               C49075 +
           ((C13352 + C13353) * C49425 + (C7275 + C7276) * C7927 +
            (C4981 * C944 + C5358 + C5358 + C49265 * C954 + C4979 * C395 +
             C5359 + C5359 + C49393 * C407) *
                C7926) *
               C49370) *
              C942 +
          (((C4979 * C944 + C6112 + C6112 + C49393 * C954 + C4981 * C2870 +
             C6113 + C6113 + C49265 * C2878) *
                C7926 +
            (C4979 * C2325 + C7811 + C7811 + C49393 * C2337 + C4981 * C3333 +
             C7812 + C7812 + C49265 * C3339) *
                C7927 +
            (C4979 * C2326 + C13888 + C13888 + C49393 * C2338 + C4981 * C10248 +
             C13889 + C13889 + C49265 * C10252) *
                C49425) *
               C49370 +
           ((C4979 * C945 + C6114 + C6114 + C49393 * C955 + C4981 * C2869 +
             C6115 + C6115 + C49265 * C2877) *
                C7926 +
            (C4979 * C2327 + C7813 + C7813 + C49393 * C2339 + C4981 * C3334 +
             C7814 + C7814 + C49265 * C3340) *
                C7927 +
            (C4979 * C2328 + C13890 + C13890 + C49393 * C2340 + C4981 * C10249 +
             C13891 + C13891 + C49265 * C10253) *
                C49425) *
               C49075) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[216] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C49149 * C49132 * C110 -
          (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
           C169 * C103) *
              C49149 * C49132 * C111 +
          (C170 * C103 + C171 * C104 + C172 * C105 + C173 * C106 +
           (C113 * C121 + C153 + C153 + C49178 * C135) * C49161 * C107) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49445 +
            (C113 * C591 + C607 + C607 + C49178 * C601) * C49425) *
               C1077 +
           (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
              C49149 * C49132 * C110 -
          ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
           (C1103 + C1082 + C1081) * C1077) *
              C49149 * C49132 * C111 +
          (C1106 * C1077 + (C1092 + C1091 + C1105) * C1078 +
           (C167 * C49457 + C300 * C49445 +
            (C113 * C595 + C611 + C611 + C49178 * C605) * C49425) *
               C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
            C1289 * C7927 + C1290 * C49425) *
               C49454 +
           (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
              C49149 * C49132 * C110 -
          ((C7939 + C7940 + C7941) * C49414 + (C7938 + C7937 + C7936) * C49441 +
           (C7935 + C7934 + C7933) * C49454) *
              C49149 * C49132 * C111 +
          (C7943 * C49454 + (C7941 + C7940 + C7939) * C49441 +
           (C167 * C7926 + C300 * C7927 +
            (C113 * C595 + C611 + C611 + C49178 * C605) * C49425) *
               C49414) *
              C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 + C1289 * C9114 +
           C1290 * C9115 + C1755 * C9116 +
           (C113 * C1738 + C1750 + C1750 + C49178 * C1744) * C9117) *
              C49065 * C49149 * C49132 * C110 -
          ((C113 * C1739 + C1751 + C1751 + C49178 * C1745) * C9117 +
           C1292 * C9116 + C1100 * C9115 + C303 * C9114 + C164 * C9113) *
              C49065 * C49149 * C49132 * C111 +
          (C165 * C9113 + C302 * C9114 + C1101 * C9115 + C1291 * C9116 +
           (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C9117) *
              C49065 * C49149 * C49132 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[217] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C49149 * C255 -
           (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
               C49149 * C49420) *
              C257 +
          ((C307 * C103 + C306 * C104 + C305 * C105 + C304 * C106 +
            (C113 * C264 + C291 + C291 + C49178 * C276) * C49161 * C107) *
               C49149 * C49420 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C49149 * C255 -
           ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
            ((C113 * C1254 + C1279 + C1279 + C49178 * C1262) * C49425 +
             C1290 * C49445 + C1289 * C49457) *
                C1077) *
               C49149 * C49420) *
              C257 +
          (((C1278 + C1277 + C1294) * C1077 + (C1273 + C1272 + C1293) * C1078 +
            (C301 * C49457 + C1102 * C49445 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
            (C1103 + C1082 + C1081) * C1077) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C49149 * C255 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C49149 * C49420) *
              C257 +
          (((C8095 + C8094 + C8093) * C49454 +
            (C8092 + C8091 + C8090) * C49441 +
            (C301 * C7926 + C1102 * C7927 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C49149 * C255 -
           ((C113 * C9201 + C9210 + C9210 + C49178 * C9205) * C9117 +
            C9218 * C9116 + C1755 * C9115 + C1290 * C9114 + C1289 * C9113) *
               C49065 * C49149 * C49420) *
              C257 +
          ((C303 * C9113 + C1100 * C9114 + C1292 * C9115 + C9219 * C9116 +
            (C113 * C9202 + C9213 + C9213 + C49178 * C9206) * C9117) *
               C49065 * C49149 * C49420 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C49149 * C255) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[218] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C389 -
           (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
               C49422) *
              C49132 * C257 +
          ((C439 * C103 + C438 * C104 + C437 * C105 + C436 * C106 +
            (C113 * C396 + C423 + C423 + C49178 * C408) * C49161 * C107) *
               C49422 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C389 -
           ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
            ((C113 * C1442 + C1465 + C1465 + C49178 * C1450) * C49425 +
             (C113 * C693 + C709 + C709 + C49178 * C703) * C49445 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                C1077) *
               C49422) *
              C49132 * C257 +
          (((C1464 + C1482 + C1481) * C1077 + (C1458 + C1480 + C1479) * C1078 +
            (C433 * C49457 +
             (C113 * C696 + C712 + C712 + C49178 * C706) * C49445 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
            (C1103 + C1082 + C1081) * C1077) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C389 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C49132 * C257 +
          (((C8247 + C8246 + C8245) * C49454 +
            (C8244 + C8243 + C8242) * C49441 +
            (C433 * C7926 + C4161 * C7927 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C389 -
           ((C113 * C9301 + C9308 + C9308 + C49178 * C9305) * C9117 +
            (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C9116 +
            C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C49132 * C257 +
          ((C435 * C9113 + C1478 * C9114 + C1477 * C9115 +
            (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C9116 +
            (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C9117) *
               C49065 * C49422 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C389) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[219] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C49149 * C521 -
           (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
               C49149 * C49420) *
              C523 +
          ((C307 * C103 + C306 * C104 + C305 * C105 + C304 * C106 +
            (C113 * C264 + C291 + C291 + C49178 * C276) * C49161 * C107) *
               C49149 * C49420 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C49149 * C521 -
           ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
            ((C113 * C1254 + C1279 + C1279 + C49178 * C1262) * C49425 +
             C1290 * C49445 + C1289 * C49457) *
                C1077) *
               C49149 * C49420) *
              C523 +
          (((C1278 + C1277 + C1294) * C1077 + (C1273 + C1272 + C1293) * C1078 +
            (C301 * C49457 + C1102 * C49445 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
            (C1103 + C1082 + C1081) * C1077) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C49149 * C521 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C49149 * C49420) *
              C523 +
          (((C8095 + C8094 + C8093) * C49454 +
            (C8092 + C8091 + C8090) * C49441 +
            (C301 * C7926 + C1102 * C7927 +
             (C113 * C1255 + C1280 + C1280 + C49178 * C1263) * C49425) *
                C49414) *
               C49149 * C49420 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C49149 * C521 -
           ((C113 * C9201 + C9210 + C9210 + C49178 * C9205) * C9117 +
            C9218 * C9116 + C1755 * C9115 + C1290 * C9114 + C1289 * C9113) *
               C49065 * C49149 * C49420) *
              C523 +
          ((C303 * C9113 + C1100 * C9114 + C1292 * C9115 + C9219 * C9116 +
            (C113 * C9202 + C9213 + C9213 + C49178 * C9206) * C9117) *
               C49065 * C49149 * C49420 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C49149 * C521) *
              C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[220] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C49149 * C587 -
          (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
           (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
              C49149 * C588 +
          ((C113 * C591 + C607 + C607 + C49178 * C601) * C49161 * C103 +
           (C113 * C592 + C608 + C608 + C49178 * C602) * C49161 * C104 +
           (C113 * C593 + C609 + C609 + C49178 * C603) * C49161 * C105 +
           (C113 * C594 + C610 + C610 + C49178 * C604) * C49161 * C106 +
           (C113 * C595 + C611 + C611 + C49178 * C605) * C49161 * C107) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
            C1289 * C49445 + C1290 * C49425) *
               C1077 +
           (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
              C49149 * C587 -
          ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
           (C1755 * C49425 + C1290 * C49445 + C1289 * C49457) * C1077) *
              C49149 * C588 +
          ((C1290 * C49457 + C1755 * C49445 +
            (C113 * C1738 + C1750 + C1750 + C49178 * C1744) * C49425) *
               C1077 +
           (C1100 * C49457 + C1292 * C49445 +
            (C113 * C1739 + C1751 + C1751 + C49178 * C1745) * C49425) *
               C1078 +
           (C1101 * C49457 + C1291 * C49445 +
            (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49425) *
               C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
            C1289 * C7927 + C1290 * C49425) *
               C49454 +
           (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
              C49149 * C587 -
          ((C8090 + C8091 + C8092) * C49414 + (C8093 + C8094 + C8095) * C49441 +
           (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
              C49149 * C588 +
          ((C1290 * C7926 + C1755 * C7927 +
            (C113 * C1738 + C1750 + C1750 + C49178 * C1744) * C49425) *
               C49454 +
           (C1100 * C7926 + C1292 * C7927 +
            (C113 * C1739 + C1751 + C1751 + C49178 * C1745) * C49425) *
               C49441 +
           (C1101 * C7926 + C1291 * C7927 +
            (C113 * C1740 + C1752 + C1752 + C49178 * C1746) * C49425) *
               C49414) *
              C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 + C1289 * C9114 +
           C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
              C49065 * C49149 * C587 -
          (C9462 * C9117 + C9218 * C9116 + C1755 * C9115 + C1290 * C9114 +
           C1289 * C9113) *
              C49065 * C49149 * C588 +
          (C1290 * C9113 + C1755 * C9114 + C9218 * C9115 + C9462 * C9116 +
           (C113 * C9453 + C9459 + C9459 + C49178 * C9455) * C9117) *
              C49065 * C49149 * C589) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[221] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C389 -
           (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
               C49422) *
              C521 +
          (((C113 * C693 + C709 + C709 + C49178 * C703) * C49161 * C103 +
            (C113 * C694 + C710 + C710 + C49178 * C704) * C49161 * C104 +
            (C113 * C695 + C711 + C711 + C49178 * C705) * C49161 * C105 +
            (C113 * C696 + C712 + C712 + C49178 * C706) * C49161 * C106 +
            (C113 * C697 + C713 + C713 + C49178 * C707) * C49161 * C107) *
               C49422 -
           (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C389 -
           ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
            (C1922 * C49425 + C1923 * C49445 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                C1077) *
               C49422) *
              C521 +
          (((C1923 * C49457 + C1922 * C49445 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C1077 +
            (C1478 * C49457 + C1477 * C49445 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C1078 +
            (C1476 * C49457 + C1475 * C49445 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
            (C1755 * C49425 + C1290 * C49445 + C1289 * C49457) * C1077) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C389 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C521 +
          (((C1923 * C7926 + C1922 * C7927 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C49454 +
            (C1478 * C7926 + C1477 * C7927 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C49441 +
            (C1476 * C7926 + C1475 * C7927 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C389 -
           (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C521 +
          ((C1923 * C9113 + C1922 * C9114 + C9558 * C9115 + C9557 * C9116 +
            (C113 * C9544 + C9552 + C9552 + C49178 * C9546) * C9117) *
               C49065 * C49422 -
           (C9462 * C9117 + C9218 * C9116 + C1755 * C9115 + C1290 * C9114 +
            C1289 * C9113) *
               C49065 * C389) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[222] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C795 -
           (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
               C49422) *
              C49132 * C523 +
          ((C439 * C103 + C438 * C104 + C437 * C105 + C436 * C106 +
            (C113 * C396 + C423 + C423 + C49178 * C408) * C49161 * C107) *
               C49422 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C795 -
           ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
            (C1922 * C49425 + C1923 * C49445 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                C1077) *
               C49422) *
              C49132 * C523 +
          (((C1464 + C1482 + C1481) * C1077 + (C1458 + C1480 + C1479) * C1078 +
            (C433 * C49457 +
             (C113 * C696 + C712 + C712 + C49178 * C706) * C49445 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C1105 + C1091 + C1092) * C49414 + (C1104 + C1086 + C1085) * C1078 +
            (C1103 + C1082 + C1081) * C1077) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C795 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C49132 * C523 +
          (((C8247 + C8246 + C8245) * C49454 +
            (C8244 + C8243 + C8242) * C49441 +
            (C433 * C7926 + C4161 * C7927 +
             (C113 * C1443 + C1466 + C1466 + C49178 * C1451) * C49425) *
                C49414) *
               C49422 -
           ((C7939 + C7940 + C7941) * C49414 +
            (C7938 + C7937 + C7936) * C49441 +
            (C7935 + C7934 + C7933) * C49454) *
               C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C795 -
           (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C49132 * C523 +
          ((C435 * C9113 + C1478 * C9114 + C1477 * C9115 +
            (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C9116 +
            (C113 * C9302 + C9309 + C9309 + C49178 * C9306) * C9117) *
               C49065 * C49422 -
           (C9219 * C9117 + C1292 * C9116 + C1100 * C9115 + C303 * C9114 +
            C164 * C9113) *
               C49065 * C795) *
              C49132 * C49418)) /
            (p * q * std::sqrt(p + q));
    d2ee[223] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C795 -
           (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
               C49422) *
              C255 +
          (((C113 * C693 + C709 + C709 + C49178 * C703) * C49161 * C103 +
            (C113 * C694 + C710 + C710 + C49178 * C704) * C49161 * C104 +
            (C113 * C695 + C711 + C711 + C49178 * C705) * C49161 * C105 +
            (C113 * C696 + C712 + C712 + C49178 * C706) * C49161 * C106 +
            (C113 * C697 + C713 + C713 + C49178 * C707) * C49161 * C107) *
               C49422 -
           (C304 * C107 + C305 * C106 + C306 * C105 + C307 * C104 +
            (C113 * C263 + C290 + C290 + C49178 * C275) * C49161 * C103) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
             C1289 * C49445 + C1290 * C49425) *
                C1077 +
            (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
               C795 -
           ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
            (C1922 * C49425 + C1923 * C49445 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
                C1077) *
               C49422) *
              C255 +
          (((C1923 * C49457 + C1922 * C49445 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C1077 +
            (C1478 * C49457 + C1477 * C49445 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C1078 +
            (C1476 * C49457 + C1475 * C49445 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C1293 + C1272 + C1273) * C49414 + (C1294 + C1277 + C1278) * C1078 +
            (C1755 * C49425 + C1290 * C49445 + C1289 * C49457) * C1077) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
             C1289 * C7927 + C1290 * C49425) *
                C49454 +
            (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
               C795 -
           ((C8242 + C8243 + C8244) * C49414 +
            (C8245 + C8246 + C8247) * C49441 +
            (C1922 * C49425 + C1923 * C7927 +
             (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
                C49454) *
               C49422) *
              C255 +
          (((C1923 * C7926 + C1922 * C7927 +
             (C113 * C1901 + C1915 + C1915 + C49178 * C1907) * C49425) *
                C49454 +
            (C1478 * C7926 + C1477 * C7927 +
             (C113 * C1902 + C1916 + C1916 + C49178 * C1908) * C49425) *
                C49441 +
            (C1476 * C7926 + C1475 * C7927 +
             (C113 * C1903 + C1917 + C1917 + C49178 * C1909) * C49425) *
                C49414) *
               C49422 -
           ((C8090 + C8091 + C8092) * C49414 +
            (C8093 + C8094 + C8095) * C49441 +
            (C1755 * C49425 + C1290 * C7927 + C1289 * C7926) * C49454) *
               C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 +
            C1289 * C9114 + C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
               C49065 * C795 -
           (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
               C49065 * C49422) *
              C255 +
          ((C1923 * C9113 + C1922 * C9114 + C9558 * C9115 + C9557 * C9116 +
            (C113 * C9544 + C9552 + C9552 + C49178 * C9546) * C9117) *
               C49065 * C49422 -
           (C9462 * C9117 + C9218 * C9116 + C1755 * C9115 + C1290 * C9114 +
            C1289 * C9113) *
               C49065 * C795) *
              C49420) *
         C49098) /
            (p * q * std::sqrt(p + q));
    d2ee[224] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C49161 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C941 -
          (C436 * C107 + C437 * C106 + C438 * C105 + C439 * C104 +
           (C113 * C395 + C422 + C422 + C49178 * C407) * C49161 * C103) *
              C942 +
          ((C113 * C944 + C960 + C960 + C49178 * C954) * C49161 * C103 +
           (C113 * C945 + C961 + C961 + C49178 * C955) * C49161 * C104 +
           (C113 * C946 + C962 + C962 + C49178 * C956) * C49161 * C105 +
           (C113 * C947 + C963 + C963 + C49178 * C957) * C49161 * C106 +
           (C113 * C948 + C964 + C964 + C49178 * C958) * C49161 * C107) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C49457 +
            C1289 * C49445 + C1290 * C49425) *
               C1077 +
           (C1081 + C1082 + C1103) * C1078 + C1106 * C49414) *
              C941 -
          ((C1479 + C1480 + C1458) * C49414 + (C1481 + C1482 + C1464) * C1078 +
           (C1922 * C49425 + C1923 * C49445 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C49457) *
               C1077) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C49457 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C49445 +
            (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C49425) *
               C1077 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C49457 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C49445 +
            (C113 * C2328 + C2347 + C2347 + C49178 * C2340) * C49425) *
               C1078 +
           ((C113 * C946 + C962 + C962 + C49178 * C956) * C49457 +
            (C113 * C2329 + C2348 + C2348 + C49178 * C2341) * C49445 +
            (C113 * C2330 + C2349 + C2349 + C49178 * C2342) * C49425) *
               C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49178 * C129) * C7926 +
            C1289 * C7927 + C1290 * C49425) *
               C49454 +
           (C7933 + C7934 + C7935) * C49441 + C7943 * C49414) *
              C941 -
          ((C8242 + C8243 + C8244) * C49414 + (C8245 + C8246 + C8247) * C49441 +
           (C1922 * C49425 + C1923 * C7927 +
            (C113 * C395 + C422 + C422 + C49178 * C407) * C7926) *
               C49454) *
              C942 +
          (((C113 * C944 + C960 + C960 + C49178 * C954) * C7926 +
            (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C7927 +
            (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C49425) *
               C49454 +
           ((C113 * C945 + C961 + C961 + C49178 * C955) * C7926 +
            (C113 * C2327 + C2346 + C2346 + C49178 * C2339) * C7927 +
            (C113 * C2328 + C2347 + C2347 + C49178 * C2340) * C49425) *
               C49441 +
           ((C113 * C946 + C962 + C962 + C49178 * C956) * C7926 +
            (C113 * C2329 + C2348 + C2348 + C49178 * C2341) * C7927 +
            (C113 * C2330 + C2349 + C2349 + C49178 * C2342) * C49425) *
               C49414) *
              C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49178 * C129) * C9113 + C1289 * C9114 +
           C1290 * C9115 + C1755 * C9116 + C9218 * C9117) *
              C49065 * C941 -
          (C9557 * C9117 + C9558 * C9116 + C1922 * C9115 + C1923 * C9114 +
           (C113 * C395 + C422 + C422 + C49178 * C407) * C9113) *
              C49065 * C942 +
          ((C113 * C944 + C960 + C960 + C49178 * C954) * C9113 +
           (C113 * C2325 + C2344 + C2344 + C49178 * C2337) * C9114 +
           (C113 * C2326 + C2345 + C2345 + C49178 * C2338) * C9115 +
           (C113 * C9784 + C9791 + C9791 + C49178 * C9788) * C9116 +
           (C113 * C9785 + C9792 + C9792 + C49178 * C9789) * C9117) *
              C49065 * C943) *
         C49132 * C49098) /
            (p * q * std::sqrt(p + q));
}
