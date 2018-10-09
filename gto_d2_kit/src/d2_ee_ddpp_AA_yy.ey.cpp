/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ddpp_AA_yy.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
#pragma GCC optimize("O0")

void second_derivative_ee_2211_11_22(const double ae,
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
    const double C47943 = yA - yB;
    const double C47951 = 0 * be;
    const double C48015 = 0 * ae;
    const double C48006 = 0 * be;
    const double C48004 = 0 * be;
    const double C48094 = 0 * be;
    const double C48169 = p + q;
    const double C48168 = p * q;
    const double C48177 = std::pow(ae, 2);
    const double C48175 = bs[3];
    const double C48174 = yP - yQ;
    const double C48183 = bs[4];
    const double C48181 = xP - xQ;
    const double C48191 = bs[5];
    const double C48200 = bs[6];
    const double C48211 = bs[7];
    const double C48233 = bs[2];
    const double C48310 = zP - zQ;
    const double C115 = bs[0];
    const double C48921 = xA - xB;
    const double C48958 = ce + de;
    const double C48957 = ce * de;
    const double C48956 = xC - xD;
    const double C48971 = yC - yD;
    const double C48980 = zC - zD;
    const double C49038 = zA - zB;
    const double C47952 = std::pow(C47945, 2);
    const double C47987 = 2 * C47945;
    const double C47954 = 2 * C47944;
    const double C47953 = C47944 * C47943;
    const double C49021 = std::pow(C47943, 2);
    const double C49080 = C47943 * be;
    const double C49078 = C47943 * ae;
    const double C48009 = C47943 * C47951;
    const double C48008 = -2 * C47951;
    const double C48007 = C47951 / C47945;
    const double C48026 = C48015 / C47945;
    const double C48019 = C47943 * C48006;
    const double C48018 = -2 * C48006;
    const double C48096 = C48094 / C47945;
    const double C48170 = 2 * C48168;
    const double C48178 = std::pow(C48174, 2);
    const double C48223 = C48174 * ae;
    const double C48193 = std::pow(C48181, 2);
    const double C48465 = std::pow(C48310, 2);
    const double C48924 = C48921 * be;
    const double C48923 = C48921 * ae;
    const double C48922 = std::pow(C48921, 2);
    const double C48968 = 2 * C48958;
    const double C49246 = std::pow(C48958, 2);
    const double C48959 = std::pow(C48956, 2);
    const double C49245 = C48956 * de;
    const double C49244 = C48956 * ce;
    const double C48993 = std::pow(C48971, 2);
    const double C49250 = C48971 * de;
    const double C49248 = C48971 * ce;
    const double C49010 = std::pow(C48980, 2);
    const double C49251 = C48980 * de;
    const double C49249 = C48980 * ce;
    const double C49039 = std::pow(C49038, 2);
    const double C49122 = C49038 * be;
    const double C49120 = C49038 * ae;
    const double C47956 = 2 * C47952;
    const double C48092 = 4 * C47952;
    const double C48005 = C47952 * C47987;
    const double C48936 = std::pow(C47987, -1);
    const double C49240 = std::pow(C47987, -2);
    const double C49022 = C49021 * C47944;
    const double C49252 = std::pow(C49078, 2);
    const double C48022 = C48009 / C47945;
    const double C48021 = ae * C48008;
    const double C48028 = C48019 / C47945;
    const double C48027 = ae * C48018;
    const double C48172 = C48170 / C48169;
    const double C129 =
        ((std::pow(yP - yQ, 2) * bs[2] * std::pow(C48170 / C48169, 2) -
          (bs[1] * C48170) / C48169) *
         std::pow(ae, 2)) /
        C47952;
    const double C116 = -(C48181 * bs[1] * C48170) / C48169;
    const double C258 = -(C48174 * bs[1] * C48170) / C48169;
    const double C386 = -(C48310 * bs[1] * C48170) / C48169;
    const double C48185 = C48178 * C48183;
    const double C48194 = C48178 * C48191;
    const double C48202 = C48178 * C48200;
    const double C48214 = C48178 * C48211;
    const double C48224 = C48191 * C48223;
    const double C48227 = C48183 * C48223;
    const double C48235 = C48200 * C48223;
    const double C48247 = C48175 * C48223;
    const double C48287 = C48211 * C48223;
    const double C122 = (-(bs[1] * C48223 * C48170) / C48169) / C47945;
    const double C49233 = std::pow(C48923, 2);
    const double C48925 = C48922 * C47944;
    const double C49247 = std::pow(C48968, -1);
    const double C49282 = 2 * C49246;
    const double C48960 = C48959 * C48957;
    const double C48994 = C48993 * C48957;
    const double C49011 = C49010 * C48957;
    const double C49040 = C49039 * C47944;
    const double C49254 = std::pow(C49120, 2);
    const double C48013 = C47951 / C47956;
    const double C48023 = C48006 / C47956;
    const double C48020 = C48004 / C47956;
    const double C48095 = C47945 * C48092;
    const double C49243 = 4 * C48005;
    const double C49023 = C49022 / C47945;
    const double C48030 = 0 - C48022;
    const double C48031 = C48021 / C48005;
    const double C48029 = C47943 * C48021;
    const double C48035 = 0 - C48028;
    const double C48036 = C48027 / C48005;
    const double C48176 = -C48172;
    const double C48184 = std::pow(C48172, 4);
    const double C48201 = std::pow(C48172, 6);
    const double C48232 = std::pow(C48172, 2);
    const double C130 = ((xP - xQ) *
                         (bs[2] * std::pow(C48172, 2) +
                          std::pow(yP - yQ, 2) * bs[3] * std::pow(-C48172, 3)) *
                         std::pow(ae, 2)) /
                        C47952;
    const double C48926 = C48925 / C47945;
    const double C48961 = C48960 / C48958;
    const double C48995 = C48994 / C48958;
    const double C49012 = C49011 / C48958;
    const double C49041 = C49040 / C47945;
    const double C49024 = -C49023;
    const double C48038 = C48030 * ae;
    const double C48037 = C48029 / C47952;
    const double C48045 = C48035 * ae;
    const double C48179 = std::pow(C48176, 3);
    const double C48192 = std::pow(C48176, 5);
    const double C48212 = std::pow(C48176, 7);
    const double C48186 = C48185 * C48184;
    const double C48190 = C48183 * C48184;
    const double C48228 = C48184 * C48227;
    const double C48203 = C48202 * C48201;
    const double C48210 = C48200 * C48201;
    const double C48236 = C48201 * C48235;
    const double C48246 = C48233 * C48232;
    const double C123 = (C48181 * C48232 * C48233 * C48223) / C47945;
    const double C264 = (C48174 * C48232 * C48233 * C48223) / C47945 -
                        (ae * bs[1] * C48170) / (C48169 * C47945);
    const double C392 = (C48310 * C48232 * C48233 * C48223) / C47945;
    const double C48927 = -C48926;
    const double C48962 = -C48961;
    const double C48996 = -C48995;
    const double C49013 = -C49012;
    const double C49042 = -C49041;
    const double C49025 = std::exp(C49024);
    const double C48046 = C48038 / C47945;
    const double C48052 = C48045 / C47945;
    const double C48182 = C48175 * C48179;
    const double C48248 = C48179 * C48247;
    const double C131 =
        ((bs[2] * std::pow(C48172, 2) + C48178 * C48175 * C48179) * C48177 +
         (C48175 * C48179 + C48178 * bs[4] * std::pow(C48172, 4)) * C48177 *
             std::pow(xP - xQ, 2)) /
        C47952;
    const double C270 =
        (2 * ae * C48232 * C48233 * C48223 +
         C48174 * (C48233 * C48232 + C48178 * C48175 * C48179) * C48177) /
        C47952;
    const double C398 =
        ((zP - zQ) * (C48233 * C48232 + C48178 * C48175 * C48179) * C48177) /
        C47952;
    const double C48195 = C48194 * C48192;
    const double C48199 = C48191 * C48192;
    const double C48225 = C48192 * C48224;
    const double C48215 = C48214 * C48212;
    const double C48292 = C48212 * C48287;
    const double C48262 = C48190 * C48193;
    const double C48272 = C48181 * C48190;
    const double C48384 = C48190 * C48178;
    const double C48383 = C48174 * C48190;
    const double C48382 = C48190 * ae;
    const double C48902 = C48190 * C48465;
    const double C48911 = C48310 * C48190;
    const double C48254 = C48181 * C48228;
    const double C48344 = C48174 * C48228;
    const double C48378 = ae * C48228;
    const double C48290 = C48210 * C48193;
    const double C48534 = C48181 * C48210;
    const double C48603 = C48210 * C48178;
    const double C48602 = C48174 * C48210;
    const double C48601 = C48210 * ae;
    const double C48237 = C48236 * C48193;
    const double C48286 = C48181 * C48236;
    const double C48497 = C48174 * C48236;
    const double C48595 = ae * C48236;
    const double C48644 = C48310 * C48236;
    const double C48671 = C48236 * C48465;
    const double C48249 = C48246 * ae;
    const double C117 = C48246 * C48193 - (bs[1] * C48170) / C48169;
    const double C257 = C48174 * C48181 * C48246;
    const double C385 = C48310 * C48181 * C48246;
    const double C578 = C48246 * C48178 - (bs[1] * C48170) / C48169;
    const double C680 = C48310 * C48174 * C48246;
    const double C931 = C48246 * C48465 - (bs[1] * C48170) / C48169;
    const double C48928 = std::exp(C48927);
    const double C48963 = std::exp(C48962);
    const double C48997 = std::exp(C48996);
    const double C49014 = std::exp(C49013);
    const double C49043 = std::exp(C49042);
    const double C140 = C49025 * C130;
    const double C47955 = C47953 * C49025;
    const double C113 =
        -((C49025 - (C47943 * 2 * C47944 * C47943 * C49025) / C47945) * 2 *
          C47944) /
        C47945;
    const double C114 = -(2 * C47944 * C47943 * C49025) / C47945;
    const double C49079 = C49025 / C47987;
    const double C49081 = C49025 * C49078;
    const double C49088 = C48936 * C49025;
    const double C49259 = C49025 * C49080;
    const double C49290 = C49240 * C49025;
    const double C49288 = C49025 * C49252;
    const double C48053 = C48046 - C48023;
    const double C48058 = C48052 - C48020;
    const double C48187 = C48182 + C48186;
    const double C48255 = C48181 * C48182;
    const double C48346 = C48174 * C48182;
    const double C48345 = C48182 * ae;
    const double C118 =
        2 * C48181 * C48246 + C48181 * (C48246 + C48182 * C48193);
    const double C256 = C48174 * (C48246 + C48182 * C48193);
    const double C384 = C48310 * (C48246 + C48182 * C48193);
    const double C1283 =
        2 * C48174 * C48246 + C48174 * (C48246 + C48182 * C48178);
    const double C1483 = C48310 * (C48246 + C48182 * C48178);
    const double C2851 =
        2 * C48310 * C48246 + C48310 * (C48246 + C48182 * C48465);
    const double C3735 =
        3 * (C48246 + C48182 * C48465) +
        C48310 * (2 * C48310 * C48182 + C48310 * (C48182 + C48190 * C48465));
    const double C48250 = C48174 * C48248;
    const double C124 = (C48232 * C48233 * C48223 + C48248 * C48193) / C47945;
    const double C125 =
        (2 * C48181 * C48248 + C48181 * (C48248 + C48228 * C48193)) / C47945;
    const double C262 = (C48174 * (C48248 + C48228 * C48193) +
                         (C48246 + C48182 * C48193) * ae) /
                        C47945;
    const double C263 =
        (C48174 * C48181 * C48248 + C48181 * C48246 * ae) / C47945;
    const double C390 = (C48310 * (C48248 + C48228 * C48193)) / C47945;
    const double C391 = (C48310 * C48181 * C48248) / C47945;
    const double C936 = (C48232 * C48233 * C48223 + C48248 * C48465) / C47945;
    const double C2855 =
        (2 * C48310 * C48248 + C48310 * (C48248 + C48228 * C48465)) / C47945;
    const double C143 = C49025 * C131;
    const double C2863 = C49025 * C398;
    const double C48196 = C48190 + C48195;
    const double C48204 = C48199 + C48203;
    const double C48273 = C48199 * C48193;
    const double C48289 = C48181 * C48199;
    const double C48500 = C48199 * C48178;
    const double C48499 = C48174 * C48199;
    const double C48498 = C48199 * ae;
    const double C48912 = C48199 * C48465;
    const double C48261 = C48225 * C48193;
    const double C48270 = C48181 * C48225;
    const double C48381 = C48174 * C48225;
    const double C48493 = ae * C48225;
    const double C48567 = C48310 * C48225;
    const double C48811 = C48225 * C48465;
    const double C3738 =
        (3 * (C48248 + C48228 * C48465) +
         C48310 * (2 * C48310 * C48228 + C48310 * (C48228 + C48225 * C48465))) /
        C47945;
    const double C48216 = C48210 + C48215;
    const double C48295 = C48292 * C48193;
    const double C48533 = C48181 * C48292;
    const double C48600 = C48174 * C48292;
    const double C48264 = C48182 + C48262;
    const double C48275 = 2 * C48272;
    const double C48335 = C48174 * C48272;
    const double C48334 = C48272 * ae;
    const double C48388 = C48182 + C48384;
    const double C48387 = C48383 * ae;
    const double C48501 = 2 * C48383;
    const double C48903 = C48182 + C48902;
    const double C48913 = 2 * C48911;
    const double C48256 = C48174 * C48254;
    const double C937 = (C48181 * C48248 + C48254 * C48465) / C47945;
    const double C48385 = 2 * C48378;
    const double C48294 = C48199 + C48290;
    const double C48542 = C48534 * C48178;
    const double C48541 = C48174 * C48534;
    const double C48540 = C48534 * ae;
    const double C48611 = C48199 + C48603;
    const double C48610 = C48602 * ae;
    const double C48238 = C48225 + C48237;
    const double C48291 = 2 * C48286;
    const double C48404 = C48174 * C48286;
    const double C48529 = ae * C48286;
    const double C48580 = C48310 * C48286;
    const double C48814 = C48286 * C48465;
    const double C48608 = 2 * C48595;
    const double C48651 = ae * C48644;
    const double C48676 = C48225 + C48671;
    const double C48930 = C48928 * C48923;
    const double C48929 = C48928 / C47987;
    const double C48938 = C48936 * C48928;
    const double C49236 = C48928 * C48924;
    const double C49279 = C49240 * C48928;
    const double C49273 = C48928 * C49233;
    const double C49283 = C49247 * C48963;
    const double C49281 = C48963 * C49244;
    const double C252 = -(C48963 * C49245) / C48958;
    const double C49285 = C49247 * C48997;
    const double C49284 = C48997 * C49248;
    const double C508 = -(C48997 * C49250) / C48958;
    const double C49287 = C49247 * C49014;
    const double C49286 = C49014 * C49249;
    const double C782 = -(C49014 * C49251) / C48958;
    const double C49121 = C49043 / C47987;
    const double C49123 = C49043 * C49120;
    const double C49130 = C48936 * C49043;
    const double C49266 = C49043 * C49122;
    const double C49293 = C49240 * C49043;
    const double C49291 = C49043 * C49254;
    const double C47957 = 2 * C47955;
    const double C48016 = C47955 / C47952;
    const double C48010 = -4 * C47955;
    const double C1072 = ((0 * ae) / C47945 - C47955 / C47952) / (2 * C47945) +
                         (0 * ae) / C47945;
    const double C3864 = (0 * ae) / C47945 - C47955 / C47952;
    const double C141 = C113 * C117;
    const double C138 = C113 * C116;
    const double C282 = C113 * C257;
    const double C410 = C113 * C385;
    const double C2866 = C113 * C931;
    const double C2862 = C113 * C386;
    const double C3315 = C113 * C680;
    const double C139 = C114 * C123;
    const double C137 = C114 * C122;
    const double C285 = C114 * C264;
    const double C413 = C114 * C392;
    const double C7901 = (C49025 * std::pow(C49080, 2)) / C47952 + C49079;
    const double C49082 = C49081 * C49080;
    const double C49087 = C49081 / C47956;
    const double C49256 = C49081 / C47945;
    const double C49253 = C48936 * C49081;
    const double C49089 = C49088 * C49080;
    const double C49265 = C49088 / C48092;
    const double C49263 = C49078 * C49088;
    const double C49262 = 2 * C49088;
    const double C9248 = C49088 / C49243;
    const double C26785 = C49088 / C47987;
    const double C49295 = C49259 / C47945;
    const double C7902 = (-2 * C48936 * C49259) / C47945;
    const double C49309 = C49288 / C47952;
    const double C48062 = C48053 / C47987;
    const double C48060 = C47943 * C48053;
    const double C48059 = 2 * C48053;
    const double C48066 = C48058 + C48007;
    const double C48188 = C48187 * C48177;
    const double C48257 = C48255 * ae;
    const double C579 = C48181 * C48246 + C48255 * C48178;
    const double C681 = C48310 * C48174 * C48255;
    const double C932 = C48181 * C48246 + C48255 * C48465;
    const double C1282 =
        2 * C48174 * C48255 + C48174 * (C48255 + C48272 * C48178);
    const double C1482 = C48310 * (C48255 + C48272 * C48178);
    const double C2850 =
        2 * C48310 * C48255 + C48310 * (C48255 + C48272 * C48465);
    const double C48348 = C48346 * ae;
    const double C2375 = C48174 * C48246 + C48346 * C48465;
    const double C3305 =
        2 * C48310 * C48346 + C48310 * (C48346 + C48383 * C48465);
    const double C48347 = C48344 + C48345;
    const double C144 = C113 * C118;
    const double C279 = C113 * C256;
    const double C407 = C113 * C384;
    const double C3748 = C113 * C2851;
    const double C18094 = C113 * C3735;
    const double C48251 = C48250 + C48249;
    const double C142 = C114 * C124;
    const double C145 = C114 * C125;
    const double C280 = C114 * C262;
    const double C283 = C114 * C263;
    const double C408 = C114 * C390;
    const double C411 = C114 * C391;
    const double C947 = C114 * C936;
    const double C2876 = C114 * C2855;
    const double C48197 = C48196 * C48177;
    const double C48205 = C48204 * C48177;
    const double C48276 = C48190 + C48273;
    const double C48293 = 2 * C48289;
    const double C48407 = C48289 * C48178;
    const double C48406 = C48174 * C48289;
    const double C48405 = C48289 * ae;
    const double C48905 = C48289 * C48465;
    const double C3736 =
        3 * (C48255 + C48272 * C48465) +
        C48310 * (2 * C48310 * C48272 + C48310 * (C48272 + C48289 * C48465));
    const double C48506 = C48190 + C48500;
    const double C48505 = C48499 * ae;
    const double C48604 = 2 * C48499;
    const double C48908 = C48499 * C48465;
    const double C11264 =
        3 * (C48346 + C48383 * C48465) +
        C48310 * (2 * C48310 * C48383 + C48310 * (C48383 + C48499 * C48465));
    const double C48504 = C48497 + C48498;
    const double C48914 = C48190 + C48912;
    const double C48263 = C48228 + C48261;
    const double C48274 = 2 * C48270;
    const double C48333 = C48174 * C48270;
    const double C48401 = ae * C48270;
    const double C2854 =
        (2 * C48310 * C48254 + C48310 * (C48254 + C48270 * C48465)) / C47945;
    const double C3739 =
        (3 * (C48254 + C48270 * C48465) +
         C48310 * (2 * C48310 * C48270 + C48310 * (C48270 + C48286 * C48465))) /
        C47945;
    const double C48386 = C48381 + C48382;
    const double C48503 = 2 * C48493;
    const double C48572 = ae * C48567;
    const double C48818 = 2 * C48567;
    const double C48812 = C48228 + C48811;
    const double C3750 = C114 * C3738;
    const double C48217 = C48216 * C48177;
    const double C48297 = C48236 + C48295;
    const double C48539 = C48174 * C48533;
    const double C48609 = C48600 + C48601;
    const double C48266 = C48264 * ae;
    const double C119 = 3 * (C48246 + C48182 * C48193) +
                        C48181 * (2 * C48255 + C48181 * C48264);
    const double C255 = C48174 * (2 * C48255 + C48181 * C48264);
    const double C383 = C48310 * (2 * C48255 + C48181 * C48264);
    const double C580 = C48246 + C48182 * C48193 + C48264 * C48178;
    const double C682 = C48310 * C48174 * C48264;
    const double C933 = C48246 + C48182 * C48193 + C48264 * C48465;
    const double C48337 = C48335 * ae;
    const double C2377 = C48174 * C48255 + C48335 * C48465;
    const double C48391 = C48388 * ae;
    const double C1791 = 3 * (C48246 + C48182 * C48178) +
                         C48174 * (2 * C48346 + C48174 * C48388);
    const double C1955 = C48310 * (2 * C48346 + C48174 * C48388);
    const double C2376 = C48246 + C48182 * C48178 + C48388 * C48465;
    const double C18084 =
        4 * (2 * C48310 * C48182 + C48310 * C48903) +
        C48310 * (3 * C48903 + C48310 * (2 * C48310 * C48190 +
                                         C48310 * (C48190 + C48199 * C48465)));
    const double C948 = C114 * C937;
    const double C48296 = C48181 * C48294;
    const double C48430 = C48294 * C48178;
    const double C48429 = C48174 * C48294;
    const double C48428 = C48294 * ae;
    const double C48546 = C48289 + C48542;
    const double C48545 = C48541 * ae;
    const double C48616 = C48174 * C48611;
    const double C48615 = C48611 * ae;
    const double C48271 = C48181 * C48238;
    const double C48285 = 3 * C48238;
    const double C48321 = C48174 * C48238;
    const double C48424 = ae * C48238;
    const double C48537 = 2 * C48529;
    const double C48585 = ae * C48580;
    const double C48815 = C48270 + C48814;
    const double C48657 = 2 * C48651;
    const double C48681 = ae * C48676;
    const double C48819 = C48310 * C48676;
    const double C48931 = C48930 * C48924;
    const double C48937 = C48930 / C47956;
    const double C49237 = C48936 * C48930;
    const double C49235 = C48930 / C47945;
    const double C1064 = (C48928 * std::pow(C48924, 2)) / C47952 + C48929;
    const double C48939 = C48938 * C48924;
    const double C49257 = C48938 / C48092;
    const double C49241 = C48923 * C48938;
    const double C49239 = 2 * C48938;
    const double C106 = C48938 / C49243;
    const double C26788 = C48938 / C47987;
    const double C49275 = C49236 / C47945;
    const double C1065 = (-2 * C48936 * C49236) / C47945;
    const double C49304 = C49273 / C47952;
    const double C112 = C49283 / C48968;
    const double C110 = C48963 / C48968 - (C49281 * C49245) / C49246;
    const double C111 = C49281 / C49282 - (C49283 * C49245) / C48958;
    const double C510 = C49281 / C48958;
    const double C576 = C49285 / C48968;
    const double C250 = C49284 / C48958;
    const double C574 = C48997 / C48968 - (C49284 * C49250) / C49246;
    const double C575 = C49284 / C49282 - (C49285 * C49250) / C48958;
    const double C930 = C49287 / C48968;
    const double C380 = C49286 / C48958;
    const double C928 = C49014 / C48968 - (C49286 * C49251) / C49246;
    const double C929 = C49286 / C49282 - (C49287 * C49251) / C48958;
    const double C15403 = (C49043 * std::pow(C49122, 2)) / C47952 + C49121;
    const double C49124 = C49123 * C49122;
    const double C49129 = C49123 / C47956;
    const double C49258 = C49123 / C47945;
    const double C49255 = C48936 * C49123;
    const double C49131 = C49130 * C49122;
    const double C49272 = C49130 / C48092;
    const double C49270 = C49120 * C49130;
    const double C49269 = 2 * C49130;
    const double C17914 = C49130 / C49243;
    const double C36909 = C49130 / C47987;
    const double C49300 = C49266 / C47945;
    const double C15404 = (-2 * C48936 * C49266) / C47945;
    const double C49311 = C49291 / C47952;
    const double C47958 = C47943 * C47957;
    const double C7912 =
        ((-C47957 / C47945) / C47987 - (0 * be) / C47945) / C47987 -
        (0 * be) / C47945;
    const double C22568 = (-C47957 / C47945) / C47987 - (0 * be) / C47945;
    const double C48034 = C48026 - C48016;
    const double C48024 = C48010 / C47945;
    const double C3878 = C3864 * C262;
    const double C3872 = C3864 * C263;
    const double C3867 = C3864 * C264;
    const double C154 = C138 + C139;
    const double C2884 = C2862 + C413;
    const double C7928 = C7901 * C131;
    const double C7919 = C7901 * C130;
    const double C10369 = C7901 * C398;
    const double C49083 = C49082 / C47952;
    const double C3876 = C49256 * C131;
    const double C3870 = C49256 * C130;
    const double C6654 = C49256 * C398;
    const double C49289 = 2 * C49253;
    const double C49090 = C49089 / C47945;
    const double C49298 = C49263 / C47956;
    const double C49313 = C49256 - C49295;
    const double C22559 = -C49295;
    const double C49322 = C49309 + C49079;
    const double C48068 = C48060 + 0;
    const double C48067 = C48037 + C48059;
    const double C48074 = C48066 / C47987;
    const double C132 =
        (2 * C48181 * C48188 +
         C48181 * (C48188 +
                   (C48183 * C48184 + C48178 * bs[5] * std::pow(C48176, 5)) *
                       C48177 * std::pow(C48181, 2))) /
        C47952;
    const double C269 = (2 * ae * C48181 * C48179 * C48175 * C48223 +
                         C48174 * C48181 * C48188) /
                        C47952;
    const double C397 = ((zP - zQ) * C48181 * C48188) / C47952;
    const double C690 =
        (2 * ae * C48310 * C48248 + C48174 * C48310 * C48188) / C47952;
    const double C941 = ((C48246 + C48178 * C48175 * C48179) * C48177 +
                         C48188 * std::pow(C48310, 2)) /
                        C47952;
    const double C48258 = C48256 + C48257;
    const double C2689 = C113 * C681;
    const double C2516 = C113 * C932;
    const double C2873 = C113 * C2850;
    const double C3319 = C113 * C2375;
    const double C18344 = C113 * C3305;
    const double C48350 = ae * C48347;
    const double C48349 = C48174 * C48347;
    const double C48372 = C48310 * C48347;
    const double C48380 = 2 * C48347;
    const double C48252 = ae * C48251;
    const double C583 =
        (C48232 * C48233 * C48223 + C48174 * C48251 + C48174 * C48246 * ae) /
        C47945;
    const double C685 = (C48310 * C48251) / C47945;
    const double C2381 = (C48251 + C48347 * C48465) / C47945;
    const double C155 = C141 + C142;
    const double C156 = C144 + C145;
    const double C289 = C279 + C280;
    const double C290 = C282 + C283;
    const double C417 = C407 + C408;
    const double C418 = C410 + C411;
    const double C2885 = C2866 + C947;
    const double C3754 = C3748 + C2876;
    const double C48332 = C48181 * C48197;
    const double C48379 = C48174 * C48197;
    const double C48447 = C48310 * C48197;
    const double C133 =
        (3 * (C48188 + C48197 * C48193) +
         C48181 * (2 * C48181 * C48197 +
                   C48181 * (C48197 + (C48191 * C48192 +
                                       C48178 * bs[6] * std::pow(C48172, 6)) *
                                          C48177 * C48193))) /
        C47952;
    const double C268 = (2 * ae * (C48179 * C48175 * C48223 + C48228 * C48193) +
                         C48174 * (C48188 + C48197 * C48193)) /
                        C47952;
    const double C396 = ((zP - zQ) * (C48188 + C48197 * C48193)) / C47952;
    const double C691 =
        (2 * ae * C48310 * C48254 + C48174 * C48310 * C48181 * C48197) / C47952;
    const double C942 =
        (C48181 * C48188 + C48181 * C48197 * std::pow(C48310, 2)) / C47952;
    const double C2387 = (2 * ae * (C48248 + C48228 * C48465) +
                          C48174 * (C48188 + C48197 * C48465)) /
                         C47952;
    const double C2859 =
        (2 * C48310 * C48188 + C48310 * (C48188 + C48197 * C48465)) / C47952;
    const double C48206 = C48205 * C48193;
    const double C48209 = C48181 * C48205;
    const double C48494 = C48174 * C48205;
    const double C48568 = C48310 * C48205;
    const double C48662 = C48205 * C48465;
    const double C48278 = C48181 * C48276;
    const double C48288 = 3 * C48276;
    const double C48323 = C48174 * C48276;
    const double C48322 = C48276 * ae;
    const double C1281 =
        2 * C48174 * C48264 + C48174 * (C48264 + C48276 * C48178);
    const double C1481 = C48310 * (C48264 + C48276 * C48178);
    const double C2849 =
        2 * C48310 * C48264 + C48310 * (C48264 + C48276 * C48465);
    const double C3737 =
        3 * (C48264 + C48276 * C48465) +
        C48310 * (2 * C48310 * C48276 + C48310 * (C48276 + C48294 * C48465));
    const double C48411 = C48272 + C48407;
    const double C48410 = C48406 * ae;
    const double C48535 = 2 * C48406;
    const double C3306 =
        2 * C48310 * C48335 + C48310 * (C48335 + C48406 * C48465);
    const double C17997 =
        3 * (C48335 + C48406 * C48465) +
        C48310 * (2 * C48310 * C48406 + C48310 * (C48406 + C48541 * C48465));
    const double C48409 = C48404 + C48405;
    const double C48906 = C48272 + C48905;
    const double C18100 = C113 * C3736;
    const double C48510 = C48174 * C48506;
    const double C48509 = C48506 * ae;
    const double C48605 = 3 * C48506;
    const double C10361 =
        2 * C48310 * C48388 + C48310 * (C48388 + C48506 * C48465);
    const double C11265 =
        3 * (C48388 + C48506 * C48465) +
        C48310 * (2 * C48310 * C48506 + C48310 * (C48506 + C48611 * C48465));
    const double C48909 = C48383 + C48908;
    const double C18346 = C113 * C11264;
    const double C48511 = ae * C48504;
    const double C48508 = C48174 * C48504;
    const double C48571 = C48310 * C48504;
    const double C48599 = 2 * C48504;
    const double C48664 = C48504 * C48465;
    const double C48915 = C48310 * C48914;
    const double C48265 = C48174 * C48263;
    const double C126 = (3 * (C48248 + C48228 * C48193) +
                         C48181 * (2 * C48254 + C48181 * C48263)) /
                        C47945;
    const double C261 = (C48174 * (2 * C48254 + C48181 * C48263) +
                         (2 * C48255 + C48181 * C48264) * ae) /
                        C47945;
    const double C389 = (C48310 * (2 * C48254 + C48181 * C48263)) / C47945;
    const double C938 = (C48248 + C48228 * C48193 + C48263 * C48465) / C47945;
    const double C2853 =
        (2 * C48310 * C48263 + C48310 * (C48263 + C48238 * C48465)) / C47945;
    const double C48336 = C48333 + C48334;
    const double C48408 = 2 * C48401;
    const double C2874 = C114 * C2854;
    const double C3751 = C114 * C3739;
    const double C48392 = ae * C48386;
    const double C48390 = C48174 * C48386;
    const double C48449 = C48310 * C48386;
    const double C48467 = C48386 * C48465;
    const double C48496 = 2 * C48386;
    const double C48577 = 2 * C48572;
    const double C18086 =
        (4 * (2 * C48310 * C48228 + C48310 * C48812) +
         C48310 * (3 * C48812 + C48310 * (2 * C48567 + C48310 * C48676))) /
        C47945;
    const double C18103 = C18094 + C3750;
    const double C48218 = C48217 * C48193;
    const double C48530 = C48181 * C48217;
    const double C48596 = C48174 * C48217;
    const double C48645 = C48310 * C48217;
    const double C48672 = C48217 * C48465;
    const double C48299 = C48181 * C48297;
    const double C48427 = C48174 * C48297;
    const double C3740 =
        (3 * (C48263 + C48238 * C48465) +
         C48310 * (2 * C48310 * C48238 + C48310 * (C48238 + C48297 * C48465))) /
        C47945;
    const double C48544 = C48539 + C48540;
    const double C48617 = ae * C48609;
    const double C48614 = C48174 * C48609;
    const double C48649 = C48310 * C48609;
    const double C48675 = C48609 * C48465;
    const double C147 = C113 * C119;
    const double C276 = C113 * C255;
    const double C404 = C113 * C383;
    const double C2687 = C113 * C682;
    const double C2518 = C113 * C933;
    const double C2683 = C113 * C2377;
    const double C18586 = C113 * C18084;
    const double C48298 = C48293 + C48296;
    const double C48434 = C48276 + C48430;
    const double C48433 = C48429 * ae;
    const double C48550 = C48174 * C48546;
    const double C48549 = C48546 * ae;
    const double C48620 = C48604 + C48616;
    const double C48277 = C48274 + C48271;
    const double C48431 = 2 * C48424;
    const double C48590 = 2 * C48585;
    const double C18087 =
        (4 * (2 * C48310 * C48270 + C48310 * C48815) +
         C48310 *
             (3 * C48815 +
              C48310 * (2 * C48580 + C48310 * (C48286 + C48533 * C48465)))) /
        C47945;
    const double C48686 = 2 * C48681;
    const double C48820 = C48818 + C48819;
    const double C48932 = C48931 / C47952;
    const double C49276 = 2 * C49237;
    const double C48940 = C48939 / C47945;
    const double C49280 = C49241 / C47956;
    const double C49305 = C49235 - C49275;
    const double C23805 = -C49275;
    const double C49319 = C49304 + C48929;
    const double C49125 = C49124 / C47952;
    const double C49292 = 2 * C49255;
    const double C49132 = C49131 / C47945;
    const double C49303 = C49270 / C47956;
    const double C49316 = C49258 - C49300;
    const double C31477 = -C49300;
    const double C49323 = C49311 + C49121;
    const double C47959 = C47958 / C47945;
    const double C22582 = C22568 * C262;
    const double C22576 = C22568 * C263;
    const double C22571 = C22568 * C264;
    const double C48044 = C47943 * C48034;
    const double C48042 = 2 * C48034;
    const double C48093 = C48034 / C47987;
    const double C159 = C154 + C139;
    const double C2888 = C2884 + C413;
    const double C49084 = C49079 - C49083;
    const double C49310 = C49289 / C47945;
    const double C49091 = C49087 - C49090;
    const double C49324 = C49313 / C47987;
    const double C22580 = C22559 * C131;
    const double C22574 = C22559 * C130;
    const double C25517 = C22559 * C398;
    const double C1088 = C49322 * C131;
    const double C1079 = C49322 * C130;
    const double C16935 = C49322 * C398;
    const double C48075 = C48068 * be;
    const double C48073 = C48067 * be;
    const double C146 = C49025 * C132;
    const double C1103 = C49322 * C132;
    const double C3882 = C49256 * C132;
    const double C7943 = C7901 * C132;
    const double C22586 = C22559 * C132;
    const double C284 = C49025 * C269;
    const double C1311 = C49322 * C269;
    const double C3873 = C49088 * C269;
    const double C4067 = C49256 * C269;
    const double C7922 = C7902 * C269;
    const double C8139 = C7901 * C269;
    const double C22577 = C49088 * C269;
    const double C22771 = C22559 * C269;
    const double C412 = C49025 * C397;
    const double C1511 = C49322 * C397;
    const double C4237 = C49256 * C397;
    const double C8327 = C7901 * C397;
    const double C22941 = C22559 * C397;
    const double C3316 = C49025 * C690;
    const double C6656 = C49088 * C690;
    const double C7227 = C49256 * C690;
    const double C10371 = C7902 * C690;
    const double C10831 = C7901 * C690;
    const double C17394 = C49322 * C690;
    const double C25519 = C49088 * C690;
    const double C26099 = C22559 * C690;
    const double C2867 = C49025 * C941;
    const double C7779 = C49256 * C941;
    const double C10375 = C7901 * C941;
    const double C16941 = C49322 * C941;
    const double C25522 = C22559 * C941;
    const double C48259 = ae * C48258;
    const double C584 =
        (C48181 * C48248 + C48174 * C48258 + C48174 * C48255 * ae) / C47945;
    const double C686 = (C48310 * C48258) / C47945;
    const double C2522 = C2516 + C948;
    const double C48351 = C48248 + C48349;
    const double C48373 = ae * C48372;
    const double C588 =
        ((C48246 + C48178 * C48175 * C48179) * C48177 + C48252 + C48252 +
         C48174 * (2 * ae * C48248 + C48174 * C48188)) /
        C47952;
    const double C594 = C114 * C583;
    const double C1076 = C1072 * C583;
    const double C4068 = C3864 * C583;
    const double C7916 = C7912 * C583;
    const double C22772 = C22568 * C583;
    const double C696 = C114 * C685;
    const double C4238 = C3864 * C685;
    const double C22942 = C22568 * C685;
    const double C2686 = C114 * C2381;
    const double C4993 = C3864 * C2381;
    const double C23697 = C22568 * C2381;
    const double C160 = C155 + C142;
    const double C161 = C156 + C145;
    const double C293 = C289 + C280;
    const double C294 = C290 + C283;
    const double C421 = C417 + C408;
    const double C422 = C418 + C411;
    const double C2889 = C2885 + C947;
    const double C3755 = C3754 + C2876;
    const double C48389 = C48385 + C48379;
    const double C3311 =
        (2 * ae * (2 * C48310 * C48228 + C48310 * (C48228 + C48225 * C48465)) +
         C48174 * (2 * C48447 + C48310 * (C48197 + C48205 * C48465))) /
        C47952;
    const double C3741 =
        (3 * (C48188 + C48197 * C48465) +
         C48310 * (2 * C48447 + C48310 * (C48197 + C48205 * C48465))) /
        C47952;
    const double C149 = C49025 * C133;
    const double C3891 = C49256 * C133;
    const double C22595 = C22559 * C133;
    const double C281 = C49025 * C268;
    const double C1302 = C49322 * C268;
    const double C3879 = C49088 * C268;
    const double C4061 = C49256 * C268;
    const double C7931 = C7902 * C268;
    const double C8130 = C7901 * C268;
    const double C22583 = C49088 * C268;
    const double C22765 = C22559 * C268;
    const double C409 = C49025 * C396;
    const double C1502 = C49322 * C396;
    const double C4231 = C49256 * C396;
    const double C8318 = C7901 * C396;
    const double C22935 = C22559 * C396;
    const double C2690 = C49025 * C691;
    const double C4234 = C49088 * C691;
    const double C6446 = C49256 * C691;
    const double C8324 = C7902 * C691;
    const double C12869 = C7901 * C691;
    const double C22938 = C49088 * C691;
    const double C25307 = C22559 * C691;
    const double C32817 = C49322 * C691;
    const double C2517 = C49025 * C942;
    const double C6665 = C49256 * C942;
    const double C10384 = C7901 * C942;
    const double C16950 = C49322 * C942;
    const double C25083 = C22559 * C942;
    const double C3320 = C49025 * C2387;
    const double C7777 = C49088 * C2387;
    const double C10377 = C7902 * C2387;
    const double C10837 = C7901 * C2387;
    const double C17400 = C49322 * C2387;
    const double C19688 = C49256 * C2387;
    const double C25524 = C49088 * C2387;
    const double C26103 = C22559 * C2387;
    const double C3749 = C49025 * C2859;
    const double C11277 = C7901 * C2859;
    const double C17834 = C49322 * C2859;
    const double C20240 = C49256 * C2859;
    const double C26661 = C22559 * C2859;
    const double C48207 = C48197 + C48206;
    const double C48213 = 2 * C48209;
    const double C48402 = C48174 * C48209;
    const double C48453 = C48310 * C48209;
    const double C2389 = (2 * ae * (C48254 + C48270 * C48465) +
                          C48174 * (C48332 + C48209 * C48465)) /
                         C47952;
    const double C2858 =
        (2 * C48310 * C48332 + C48310 * (C48332 + C48209 * C48465)) / C47952;
    const double C48507 = C48503 + C48494;
    const double C48573 = C48174 * C48568;
    const double C48708 = 2 * C48568;
    const double C48665 = C48197 + C48662;
    const double C48280 = C48275 + C48278;
    const double C48325 = C48323 * ae;
    const double C2379 = C48174 * C48264 + C48323 * C48465;
    const double C3307 =
        2 * C48310 * C48323 + C48310 * (C48323 + C48429 * C48465);
    const double C48324 = C48321 + C48322;
    const double C2870 = C113 * C2849;
    const double C48414 = C48411 * ae;
    const double C1792 = 3 * (C48255 + C48272 * C48178) +
                         C48174 * (2 * C48335 + C48174 * C48411);
    const double C1956 = C48310 * (2 * C48335 + C48174 * C48411);
    const double C2378 = C48255 + C48272 * C48178 + C48411 * C48465;
    const double C10362 =
        2 * C48310 * C48411 + C48310 * (C48411 + C48546 * C48465);
    const double C20485 = C113 * C3306;
    const double C48415 = ae * C48409;
    const double C48413 = C48174 * C48409;
    const double C48455 = C48310 * C48409;
    const double C48472 = C48409 * C48465;
    const double C48532 = 2 * C48409;
    const double C18085 =
        4 * (2 * C48310 * C48272 + C48310 * C48906) +
        C48310 * (3 * C48906 + C48310 * (2 * C48310 * C48289 +
                                         C48310 * (C48289 + C48534 * C48465)));
    const double C48514 = C48501 + C48510;
    const double C18338 =
        4 * (2 * C48310 * C48383 + C48310 * C48909) +
        C48310 * (3 * C48909 + C48310 * (2 * C48310 * C48499 +
                                         C48310 * (C48499 + C48602 * C48465)));
    const double C48594 = C48205 + C48511;
    const double C48513 = C48225 + C48508;
    const double C48576 = ae * C48571;
    const double C48712 = 2 * C48571;
    const double C48667 = C48386 + C48664;
    const double C48916 = C48913 + C48915;
    const double C48267 = C48265 + C48266;
    const double C148 = C114 * C126;
    const double C277 = C114 * C261;
    const double C3884 = C3864 * C261;
    const double C22588 = C22568 * C261;
    const double C405 = C114 * C389;
    const double C949 = C114 * C938;
    const double C2871 = C114 * C2853;
    const double C48339 = ae * C48336;
    const double C48338 = C48174 * C48336;
    const double C48369 = C48310 * C48336;
    const double C48403 = 2 * C48336;
    const double C2383 = (C48258 + C48336 * C48465) / C47945;
    const double C2887 = C2873 + C2874;
    const double C18104 = C18100 + C3751;
    const double C48492 = C48197 + C48392;
    const double C48393 = C48228 + C48390;
    const double C48451 = ae * C48449;
    const double C48698 = 2 * C48449;
    const double C48468 = C48347 + C48467;
    const double C18096 = C114 * C18086;
    const double C18105 = C18103 + C3750;
    const double C48219 = C48205 + C48218;
    const double C48538 = C48174 * C48530;
    const double C48581 = C48310 * C48530;
    const double C48689 = C48530 * C48465;
    const double C48613 = C48608 + C48596;
    const double C48652 = C48174 * C48645;
    const double C48677 = C48205 + C48672;
    const double C48301 = C48291 + C48299;
    const double C48432 = C48427 + C48428;
    const double C3752 = C114 * C3740;
    const double C48551 = ae * C48544;
    const double C48548 = C48174 * C48544;
    const double C48584 = C48310 * C48544;
    const double C48691 = C48544 * C48465;
    const double C48619 = C48236 + C48614;
    const double C48656 = ae * C48649;
    const double C48680 = C48504 + C48675;
    const double C48300 = C48181 * C48298;
    const double C48357 = C48174 * C48298;
    const double C48356 = C48298 * ae;
    const double C48437 = C48434 * ae;
    const double C1793 = 3 * (C48264 + C48276 * C48178) +
                         C48174 * (2 * C48323 + C48174 * C48434);
    const double C1957 = C48310 * (2 * C48323 + C48174 * C48434);
    const double C2380 = C48264 + C48276 * C48178 + C48434 * C48465;
    const double C48554 = C48535 + C48550;
    const double C48624 = C48174 * C48620;
    const double C48623 = C48620 * ae;
    const double C48279 = C48174 * C48277;
    const double C127 = (4 * (2 * C48254 + C48181 * C48263) +
                         C48181 * (3 * C48263 + C48181 * C48277)) /
                        C47945;
    const double C388 = (C48310 * (3 * C48263 + C48181 * C48277)) / C47945;
    const double C939 =
        (2 * C48254 + C48181 * C48263 + C48277 * C48465) / C47945;
    const double C18102 = C114 * C18087;
    const double C18583 =
        (5 * (3 * C48812 + C48310 * C48820) +
         C48310 * (4 * C48820 +
                   C48310 * (3 * C48676 +
                             C48310 * (2 * C48644 +
                                       C48310 * (C48236 + C48292 * C48465))))) /
        C47945;
    const double C48933 = C48929 - C48932;
    const double C49306 = C49276 / C47945;
    const double C48941 = C48937 - C48940;
    const double C49320 = C49305 / C47987;
    const double C49126 = C49121 - C49125;
    const double C49312 = C49292 / C47945;
    const double C49133 = C49129 - C49132;
    const double C49326 = C49316 / C47987;
    const double C47960 = C49025 - C47959;
    const double C48051 = C48044 + C49088;
    const double C48097 = C48093 - C48096;
    const double C164 = C159 + C140;
    const double C2892 = C2888 + C2863;
    const double C26825 = C49084 * C132;
    const double C26810 = C49084 * C131;
    const double C26801 = C49084 * C130;
    const double C27021 = C49084 * C269;
    const double C27012 = C49084 * C268;
    const double C27209 = C49084 * C397;
    const double C27200 = C49084 * C396;
    const double C30026 = C49084 * C691;
    const double C30242 = C49084 * C942;
    const double C30231 = C49084 * C398;
    const double C30805 = C49084 * C690;
    const double C31364 = C49084 * C941;
    const double C47501 = C49084 * C2387;
    const double C47926 = C49084 * C2859;
    const double C49260 = C49084 * C49078;
    const double C49297 = C49262 + C49084;
    const double C1091 = C49310 * C268;
    const double C1082 = C49310 * C269;
    const double C1508 = C49310 * C691;
    const double C16943 = C49310 * C2387;
    const double C16937 = C49310 * C690;
    const double C26813 = C49091 * C268;
    const double C26804 = C49091 * C269;
    const double C27206 = C49091 * C691;
    const double C30233 = C49091 * C690;
    const double C31362 = C49091 * C2387;
    const double C49264 = C49091 / C47987;
    const double C49261 = C49091 * C49078;
    const double C11389 = C49324 - (C49084 * C49080) / C47945;
    const double C48079 = C48075 / C47945;
    const double C48078 = C48073 / C47945;
    const double C589 =
        (C48181 * C48188 + C48259 + C48259 +
         C48174 * (2 * ae * C48254 + C48174 * C48181 * C48197)) /
        C47952;
    const double C595 = C114 * C584;
    const double C1084 = C1072 * C584;
    const double C4063 = C3864 * C584;
    const double C7924 = C7912 * C584;
    const double C22767 = C22568 * C584;
    const double C697 = C114 * C686;
    const double C4233 = C3864 * C686;
    const double C22937 = C22568 * C686;
    const double C2525 = C2522 + C948;
    const double C48352 = C48351 + C48348;
    const double C1491 =
        (C48310 * C48188 + C48373 + C48373 +
         C48174 * (2 * ae * C48310 * C48228 + C48174 * C48310 * C48197)) /
        C47952;
    const double C3326 = C3315 + C696;
    const double C3327 = C3319 + C2686;
    const double C165 = C160 + C143;
    const double C166 = C161 + C146;
    const double C298 = C294 + C284;
    const double C426 = C422 + C412;
    const double C2893 = C2889 + C2867;
    const double C11275 = C7902 * C3311;
    const double C17832 = C49310 * C3311;
    const double C18345 = C49025 * C3311;
    const double C20238 = C49088 * C3311;
    const double C22078 = C49256 * C3311;
    const double C26659 = C49088 * C3311;
    const double C43102 = C22559 * C3311;
    const double C47924 = C49091 * C3311;
    const double C18095 = C49025 * C3741;
    const double C22452 = C49256 * C3741;
    const double C43476 = C22559 * C3741;
    const double C297 = C293 + C281;
    const double C425 = C421 + C409;
    const double C3756 = C3755 + C3749;
    const double C134 =
        (4 * (2 * C48181 * C48197 + C48181 * C48207) +
         C48181 * (3 * C48207 +
                   C48181 * (2 * C48181 * C48205 +
                             C48181 * (C48205 +
                                       (C48200 * C48201 +
                                        C48178 * bs[7] * std::pow(C48176, 7)) *
                                           C48177 * C48193)))) /
        C47952;
    const double C267 =
        (2 * ae * (2 * C48181 * C48228 + C48181 * (C48228 + C48225 * C48193)) +
         C48174 * (2 * C48181 * C48197 + C48181 * C48207)) /
        C47952;
    const double C395 =
        ((zP - zQ) * (2 * C48181 * C48197 + C48181 * C48207)) / C47952;
    const double C692 =
        (2 * ae * C48310 * C48263 + C48174 * C48310 * C48207) / C47952;
    const double C943 =
        (C48188 + C48197 * C48193 + C48207 * std::pow(C48310, 2)) / C47952;
    const double C48412 = C48408 + C48402;
    const double C3312 =
        (2 * ae * (2 * C48310 * C48270 + C48310 * (C48270 + C48286 * C48465)) +
         C48174 * (2 * C48453 + C48310 * (C48209 + C48181 * C48217 * C48465))) /
        C47952;
    const double C3742 =
        (3 * (C48332 + C48209 * C48465) +
         C48310 * (2 * C48453 + C48310 * (C48209 + C48181 * C48217 * C48465))) /
        C47952;
    const double C2685 = C49025 * C2389;
    const double C6663 = C49088 * C2389;
    const double C10386 = C7902 * C2389;
    const double C16952 = C49310 * C2389;
    const double C18936 = C49256 * C2389;
    const double C25085 = C49088 * C2389;
    const double C25301 = C22559 * C2389;
    const double C30240 = C49091 * C2389;
    const double C2875 = C49025 * C2858;
    const double C19141 = C49256 * C2858;
    const double C25531 = C22559 * C2858;
    const double C48512 = C48174 * C48507;
    const double C48593 = 2 * C48507;
    const double C48578 = C48577 + C48573;
    const double C48281 = C48280 * ae;
    const double C260 = (C48174 * (3 * C48263 + C48181 * C48277) +
                         (3 * C48264 + C48181 * C48280) * ae) /
                        C47945;
    const double C120 = 4 * (2 * C48255 + C48181 * C48264) +
                        C48181 * (3 * C48264 + C48181 * C48280);
    const double C254 = C48174 * (3 * C48264 + C48181 * C48280);
    const double C382 = C48310 * (3 * C48264 + C48181 * C48280);
    const double C581 = 2 * C48255 + C48181 * C48264 + C48280 * C48178;
    const double C683 = C48310 * C48174 * C48280;
    const double C934 = 2 * C48255 + C48181 * C48264 + C48280 * C48465;
    const double C1284 =
        2 * C48174 * C48280 + C48174 * (C48280 + C48298 * C48178);
    const double C1484 = C48310 * (C48280 + C48298 * C48178);
    const double C2852 =
        2 * C48310 * C48280 + C48310 * (C48280 + C48298 * C48465);
    const double C2680 = C113 * C2379;
    const double C48327 = ae * C48324;
    const double C48326 = C48174 * C48324;
    const double C48366 = C48310 * C48324;
    const double C48426 = 2 * C48324;
    const double C48528 = C48209 + C48415;
    const double C48416 = C48270 + C48413;
    const double C48457 = ae * C48455;
    const double C48703 = 2 * C48455;
    const double C48473 = C48336 + C48472;
    const double C48517 = C48514 * ae;
    const double C9357 = 4 * (2 * C48346 + C48174 * C48388) +
                         C48174 * (3 * C48388 + C48174 * C48514);
    const double C9455 = C48310 * (3 * C48388 + C48174 * C48514);
    const double C9939 = 2 * C48346 + C48174 * C48388 + C48514 * C48465;
    const double C10826 =
        2 * C48310 * C48514 + C48310 * (C48514 + C48620 * C48465);
    const double C48607 = C48594 + C48511;
    const double C48516 = C48513 + C48505;
    const double C48643 = C48568 + C48576;
    const double C48669 = ae * C48667;
    const double C48699 = C48310 * C48667;
    const double C48721 = 3 * C48667;
    const double C18582 =
        5 * (3 * C48903 + C48310 * C48916) +
        C48310 * (4 * C48916 +
                  C48310 * (3 * C48914 +
                            C48310 * (2 * C48310 * C48199 +
                                      C48310 * (C48199 + C48210 * C48465))));
    const double C48268 = ae * C48267;
    const double C585 =
        (C48248 + C48228 * C48193 + C48174 * C48267 + C48174 * C48264 * ae) /
        C47945;
    const double C687 = (C48310 * C48267) / C47945;
    const double C2385 = (C48267 + C48324 * C48465) / C47945;
    const double C157 = C147 + C148;
    const double C288 = C276 + C277;
    const double C416 = C404 + C405;
    const double C2523 = C2518 + C949;
    const double C2886 = C2870 + C2871;
    const double C48340 = C48254 + C48338;
    const double C48370 = ae * C48369;
    const double C2684 = C114 * C2383;
    const double C4995 = C3864 * C2383;
    const double C23699 = C22568 * C2383;
    const double C2891 = C2887 + C2874;
    const double C18106 = C18104 + C3751;
    const double C48502 = C48492 + C48392;
    const double C48394 = C48393 + C48387;
    const double C48469 = ae * C48468;
    const double C3308 = (2 * C48372 + C48310 * C48468) / C47945;
    const double C18589 = C18586 + C18096;
    const double C48220 = C48181 * C48219;
    const double C48425 = C48174 * C48219;
    const double C48459 = C48310 * C48219;
    const double C2391 = (2 * ae * (C48263 + C48238 * C48465) +
                          C48174 * (C48207 + C48219 * C48465)) /
                         C47952;
    const double C2857 =
        (2 * C48310 * C48207 + C48310 * (C48207 + C48219 * C48465)) / C47952;
    const double C48543 = C48537 + C48538;
    const double C48586 = C48174 * C48581;
    const double C48692 = C48209 + C48689;
    const double C48618 = C48174 * C48613;
    const double C48658 = C48657 + C48652;
    const double C48682 = C48174 * C48677;
    const double C48709 = C48310 * C48677;
    const double C48303 = C48181 * C48301;
    const double C48355 = C48174 * C48301;
    const double C2856 =
        (2 * C48310 * C48277 + C48310 * (C48277 + C48301 * C48465)) / C47945;
    const double C48438 = ae * C48432;
    const double C48436 = C48174 * C48432;
    const double C48461 = C48310 * C48432;
    const double C48477 = C48432 * C48465;
    const double C48553 = C48286 + C48548;
    const double C48589 = ae * C48584;
    const double C48694 = C48409 + C48691;
    const double C48622 = C48619 + C48610;
    const double C48685 = ae * C48680;
    const double C48713 = C48310 * C48680;
    const double C48302 = C48288 + C48300;
    const double C48359 = C48357 * ae;
    const double C2676 = C48174 * C48280 + C48357 * C48465;
    const double C48556 = C48554 * ae;
    const double C9358 = 4 * (2 * C48335 + C48174 * C48411) +
                         C48174 * (3 * C48411 + C48174 * C48554);
    const double C9456 = C48310 * (3 * C48411 + C48174 * C48554);
    const double C10206 = 2 * C48335 + C48174 * C48411 + C48554 * C48465;
    const double C48627 = C48605 + C48624;
    const double C151 = C114 * C127;
    const double C402 = C114 * C388;
    const double C950 = C114 * C939;
    const double C18588 = C114 * C18583;
    const double C49234 = C48933 * C48923;
    const double C49278 = C49239 + C48933;
    const double C49242 = C48941 / C47987;
    const double C49238 = C48941 * C48923;
    const double C3857 = C49320 - (C48933 * C48924) / C47945;
    const double C49267 = C49126 * C49120;
    const double C49302 = C49269 + C49126;
    const double C49271 = C49133 / C47987;
    const double C49268 = C49133 * C49120;
    const double C20350 = C49326 - (C49126 * C49122) / C47945;
    const double C47961 = C47960 * C47954;
    const double C48012 = C47960 * ae;
    const double C1068 =
        (((0 - (C47943 * C47951) / C47945) * ae) / C47945 - (0 * be) / C47956) /
            (2 * C47945) +
        ((C47943 * ((C47960 * ae) / C47945 - C47951 / C47956) + C49256) * ae) /
            C47945 +
        (0 * ae) / C47945 - C47955 / C47952;
    const double C1070 =
        ((C47960 * ae) / C47945 - C47951 / C47956) / (2 * C47945) +
        ((C47943 * ((0 * ae) / C47945 - C47955 / C47952) + C49088) * ae) /
            C47945;
    const double C3862 = (C47960 * ae) / C47945 - C47951 / C47956;
    const double C7908 =
        ((-(0 * be) / C47945) / C47987 -
         ((0 - (C47943 * C47951) / C47945) * be) / C47945) /
            C47987 -
        ((C47943 * ((-C47951 / C47945) / C47987 - (C47960 * be) / C47945) +
          C22559) *
         be) /
            C47945 +
        (-C47957 / C47945) / C47987 - (0 * be) / C47945;
    const double C7910 =
        ((-C47951 / C47945) / C47987 - (C47960 * be) / C47945) / C47987 -
        ((C47943 * ((-C47957 / C47945) / C47987 - (0 * be) / C47945) + C49088) *
         be) /
            C47945;
    const double C22566 = (-C48007) / C47987 - (C47960 * be) / C47945;
    const double C48057 = C48051 * be;
    const double C26806 = C48097 * C584;
    const double C26798 = C48097 * C583;
    const double C48098 = 2 * C48097;
    const double C9259 =
        (C48097 / C47987 + (0 * ae) / C47945) / C47987 - (0 * be) / C47945;
    const double C11402 = C48097 / C47987 - (0 * be) / C47945;
    const double C23814 = C48097 / C47987 + (0 * ae) / C47945;
    const double C2896 = C2892 * C1064;
    const double C15699 = C2892 * C49319;
    const double C18091 = C2892 * C48928;
    const double C20620 = C2892 * C49235;
    const double C34458 = C2892 * C23805;
    const double C37203 = C2892 * C48933;
    const double C49294 = C49260 / C47945;
    const double C49314 = C49297 / C47987;
    const double C49315 = C49298 + C49264;
    const double C11391 = C49264 - C49089 / C47956;
    const double C49296 = C49261 / C47945;
    const double C11431 = C11389 * C131;
    const double C11410 = C11389 * C130;
    const double C11601 = C11389 * C269;
    const double C11763 = C11389 * C397;
    const double C14507 = C11389 * C398;
    const double C14889 = C11389 * C690;
    const double C15277 = C11389 * C941;
    const double C48082 = C48074 - C48079;
    const double C48081 = C48036 - C48078;
    const double C1085 = C49290 * C589;
    const double C1308 = C49310 * C589;
    const double C4064 = C49088 * C589;
    const double C7925 = C49290 * C589;
    const double C8136 = C7902 * C589;
    const double C22768 = C49088 * C589;
    const double C26807 = C26785 * C589;
    const double C27018 = C49091 * C589;
    const double C2695 = C2689 + C697;
    const double C2528 = C2525 + C2517;
    const double C48353 = ae * C48352;
    const double C1287 =
        (2 * C48251 + C48174 * C48352 + (C48246 + C48182 * C48178) * ae) /
        C47945;
    const double C1487 = (C48310 * C48352) / C47945;
    const double C7229 = C49088 * C1491;
    const double C10373 = C49290 * C1491;
    const double C10833 = C7902 * C1491;
    const double C16939 = C49290 * C1491;
    const double C17396 = C49310 * C1491;
    const double C26101 = C49088 * C1491;
    const double C30235 = C26785 * C1491;
    const double C30807 = C49091 * C1491;
    const double C3328 = C3326 + C696;
    const double C3329 = C3327 + C2686;
    const double C2877 = C426 * C1064;
    const double C2864 = C426 * C1065;
    const double C15705 = C426 * C49319;
    const double C15700 = C426 * C49306;
    const double C18097 = C426 * C48928;
    const double C20626 = C426 * C49235;
    const double C20621 = C426 * C48938;
    const double C34464 = C426 * C23805;
    const double C34459 = C426 * C48938;
    const double C37209 = C426 * C48933;
    const double C37204 = C426 * C48941;
    const double C2897 = C2893 * C1064;
    const double C15702 = C2893 * C49319;
    const double C18092 = C2893 * C48928;
    const double C20622 = C2893 * C49235;
    const double C34460 = C2893 * C23805;
    const double C37206 = C2893 * C48933;
    const double C18107 = C18105 + C18095;
    const double C2878 = C425 * C1065;
    const double C2865 = C425 * C49279;
    const double C15706 = C425 * C49306;
    const double C15701 = C425 * C49279;
    const double C20627 = C425 * C48938;
    const double C34465 = C425 * C48938;
    const double C37210 = C425 * C48941;
    const double C37205 = C425 * C26788;
    const double C3757 = C3756 * C1064;
    const double C16524 = C3756 * C49319;
    const double C18093 = C3756 * C48928;
    const double C20624 = C3756 * C49235;
    const double C34462 = C3756 * C23805;
    const double C38028 = C3756 * C48933;
    const double C152 = C49025 * C134;
    const double C278 = C49025 * C267;
    const double C1100 = C49310 * C267;
    const double C3885 = C49088 * C267;
    const double C4055 = C49256 * C267;
    const double C7940 = C7902 * C267;
    const double C22589 = C49088 * C267;
    const double C22759 = C22559 * C267;
    const double C26822 = C49091 * C267;
    const double C406 = C49025 * C395;
    const double C4225 = C49256 * C395;
    const double C22929 = C22559 * C395;
    const double C1499 = C49310 * C692;
    const double C2688 = C49025 * C692;
    const double C4228 = C49088 * C692;
    const double C6442 = C49256 * C692;
    const double C8315 = C7902 * C692;
    const double C22932 = C49088 * C692;
    const double C27197 = C49091 * C692;
    const double C28409 = C22559 * C692;
    const double C2519 = C49025 * C943;
    const double C6661 = C49256 * C943;
    const double C25089 = C22559 * C943;
    const double C19139 = C49088 * C3312;
    const double C20486 = C49025 * C3312;
    const double C25528 = C49088 * C3312;
    const double C18101 = C49025 * C3742;
    const double C48282 = C48279 + C48281;
    const double C274 = C114 * C260;
    const double C3887 = C3864 * C260;
    const double C22591 = C22568 * C260;
    const double C150 = C113 * C120;
    const double C273 = C113 * C254;
    const double C401 = C113 * C382;
    const double C5230 = C113 * C683;
    const double C2520 = C113 * C934;
    const double C48328 = C48263 + C48326;
    const double C48367 = ae * C48366;
    const double C48536 = C48528 + C48415;
    const double C48417 = C48416 + C48410;
    const double C48474 = ae * C48473;
    const double C3309 = (2 * C48369 + C48310 * C48473) / C47945;
    const double C48519 = ae * C48516;
    const double C48518 = C48174 * C48516;
    const double C48570 = C48310 * C48516;
    const double C48598 = 3 * C48516;
    const double C48663 = C48516 * C48465;
    const double C48650 = C48643 + C48576;
    const double C48700 = C48698 + C48699;
    const double C590 = (C48188 + C48197 * C48193 + C48268 + C48268 +
                         C48174 * (2 * ae * C48263 + C48174 * C48207)) /
                        C47952;
    const double C596 = C114 * C585;
    const double C1093 = C1072 * C585;
    const double C4057 = C3864 * C585;
    const double C7933 = C7912 * C585;
    const double C22761 = C22568 * C585;
    const double C26815 = C48097 * C585;
    const double C698 = C114 * C687;
    const double C4227 = C3864 * C687;
    const double C22931 = C22568 * C687;
    const double C2681 = C114 * C2385;
    const double C4997 = C3864 * C2385;
    const double C23701 = C22568 * C2385;
    const double C162 = C157 + C148;
    const double C292 = C288 + C277;
    const double C420 = C416 + C405;
    const double C2526 = C2523 + C949;
    const double C2890 = C2886 + C2871;
    const double C48341 = C48340 + C48337;
    const double C1490 =
        (C48310 * C48332 + C48370 + C48370 +
         C48174 * (2 * ae * C48310 * C48270 + C48174 * C48310 * C48209)) /
        C47952;
    const double C2693 = C2683 + C2684;
    const double C2895 = C2891 + C2875;
    const double C48515 = C48502 + C48512;
    const double C48396 = ae * C48394;
    const double C48395 = C48174 * C48394;
    const double C48448 = C48310 * C48394;
    const double C48495 = 3 * C48394;
    const double C2382 = (C48352 + C48394 * C48465) / C47945;
    const double C2388 = (C48188 + C48197 * C48465 + C48469 + C48469 +
                          C48174 * (2 * ae * (C48228 + C48225 * C48465) +
                                    C48174 * (C48197 + C48205 * C48465))) /
                         C47952;
    const double C3323 = C114 * C3308;
    const double C7781 = C3864 * C3308;
    const double C25532 = C22568 * C3308;
    const double C18590 = C18589 + C18096;
    const double C48221 = C48213 + C48220;
    const double C48435 = C48431 + C48425;
    const double C3313 =
        (2 * ae * (2 * C48310 * C48238 + C48310 * (C48238 + C48297 * C48465)) +
         C48174 * (2 * C48459 +
                   C48310 * (C48219 +
                             (C48217 + (C48211 * C48212 +
                                        C48178 * bs[8] * std::pow(C48172, 8)) *
                                           C48177 * C48193) *
                                 C48465))) /
        C47952;
    const double C3743 =
        (3 * (C48207 + C48219 * C48465) +
         C48310 * (2 * C48459 +
                   C48310 * (C48219 +
                             (C48217 + (C48211 * C48212 +
                                        C48178 * bs[8] * std::pow(C48172, 8)) *
                                           C48177 * C48193) *
                                 C48465))) /
        C47952;
    const double C2682 = C49025 * C2391;
    const double C6659 = C49088 * C2391;
    const double C25087 = C49088 * C2391;
    const double C2872 = C49025 * C2857;
    const double C48547 = C48174 * C48543;
    const double C48591 = C48590 + C48586;
    const double C17999 =
        (2 * ae *
             (3 * (C48270 + C48286 * C48465) +
              C48310 * (2 * C48580 + C48310 * (C48286 + C48533 * C48465))) +
         C48174 * (3 * C48692 +
                   C48310 * (2 * C48581 +
                             C48310 * (C48530 + C48181 *
                                                    (C48211 * C48212 +
                                                     C48178 * bs[8] *
                                                         std::pow(C48172, 8)) *
                                                    C48177 * C48465)))) /
        C47952;
    const double C18089 =
        (4 * (2 * C48453 + C48310 * C48692) +
         C48310 * (3 * C48692 +
                   C48310 * (2 * C48581 +
                             C48310 * (C48530 + C48181 *
                                                    (C48211 * C48212 +
                                                     C48178 * bs[8] *
                                                         std::pow(C48172, 8)) *
                                                    C48177 * C48465)))) /
        C47952;
    const double C48621 = C48607 + C48618;
    const double C48659 = C48174 * C48658;
    const double C48687 = C48686 + C48682;
    const double C48714 = C48708 + C48709;
    const double C48305 = C48285 + C48303;
    const double C48358 = C48355 + C48356;
    const double C2883 = C114 * C2856;
    const double C48439 = C48238 + C48436;
    const double C48463 = ae * C48461;
    const double C48478 = C48324 + C48477;
    const double C48555 = C48553 + C48545;
    const double C48696 = ae * C48694;
    const double C48704 = C48310 * C48694;
    const double C48628 = ae * C48622;
    const double C48626 = C48174 * C48622;
    const double C48648 = C48310 * C48622;
    const double C48674 = C48622 * C48465;
    const double C48716 = C48712 + C48713;
    const double C48304 = C48302 * ae;
    const double C121 = 5 * (3 * C48264 + C48181 * C48280) +
                        C48181 * (4 * C48280 + C48181 * C48302);
    const double C259 = C48174 * (4 * C48280 + C48181 * C48302);
    const double C387 = C48310 * (4 * C48280 + C48181 * C48302);
    const double C582 = 3 * C48264 + C48181 * C48280 + C48302 * C48178;
    const double C684 = C48310 * C48174 * C48302;
    const double C935 = 3 * C48264 + C48181 * C48280 + C48302 * C48465;
    const double C48631 = C48627 * ae;
    const double C9615 = 5 * (3 * C48388 + C48174 * C48514) +
                         C48174 * (4 * C48514 + C48174 * C48627);
    const double C9705 = C48310 * (4 * C48514 + C48174 * C48627);
    const double C9940 = 3 * C48388 + C48174 * C48514 + C48627 * C48465;
    const double C49274 = C49234 / C47945;
    const double C49307 = C49278 / C47987;
    const double C49308 = C49280 + C49242;
    const double C3859 = C49242 - C48939 / C47956;
    const double C49277 = C49238 / C47945;
    const double C5369 = C426 * C3857;
    const double C5365 = C2892 * C3857;
    const double C6097 = C2893 * C3857;
    const double C49299 = C49267 / C47945;
    const double C49317 = C49302 / C47987;
    const double C49318 = C49303 + C49271;
    const double C20352 = C49271 - C49131 / C47956;
    const double C49301 = C49268 / C47945;
    const double C47969 = C47943 * C47961;
    const double C48014 = C47961 / C47956;
    const double C1067 =
        (ae * -2 * C47951) / (C47952 * 2 * C47945) +
        (((C47943 * ((-4 * C47955) / C47945 - (C47943 * C47961) / C47945) *
           ae) /
              C47945 +
          2 * ((C47960 * ae) / C47945 - C47951 / C47956)) *
         ae) /
            C47945 -
        C47961 / C47956;
    const double C1071 = (-C47961 / C47945) / (4 * C47952);
    const double C3863 = (-C47961 / C47945) / (2 * C47945);
    const double C7911 = (-C47961 / C47945) / (4 * C47952);
    const double C9258 =
        (-C47961 / C47945) / (4 * C47952 * std::pow(C47987, 2));
    const double C11401 = (-C47961 / C47945) / (4 * C48005);
    const double C22567 = (-C47961 / C47945) / C47987;
    const double C23813 = (-C47961 / C47945) / (4 * C48005);
    const double C26793 = (-C47961 / C47945) / C48092;
    const double C48025 = C48012 / C47945;
    const double C1104 = C1068 * C126;
    const double C1102 = C1068 * C125;
    const double C1087 = C1068 * C124;
    const double C1078 = C1068 * C123;
    const double C1074 = C1068 * C122;
    const double C1315 = C1068 * C261;
    const double C1314 = C1068 * C264;
    const double C1310 = C1068 * C263;
    const double C1301 = C1068 * C262;
    const double C1515 = C1068 * C389;
    const double C1514 = C1068 * C392;
    const double C1510 = C1068 * C391;
    const double C1501 = C1068 * C390;
    const double C1807 = C1068 * C585;
    const double C1804 = C1068 * C584;
    const double C1801 = C1068 * C583;
    const double C1971 = C1068 * C687;
    const double C1968 = C1068 * C686;
    const double C1965 = C1068 * C685;
    const double C2400 = C1068 * C938;
    const double C2397 = C1068 * C937;
    const double C2394 = C1068 * C936;
    const double C16785 = C1068 * C2383;
    const double C16784 = C1068 * C2381;
    const double C16955 = C1068 * C2854;
    const double C16948 = C1068 * C2855;
    const double C17405 = C1068 * C3308;
    const double C17835 = C1068 * C3738;
    const double C1105 = C1070 * C260;
    const double C1099 = C1070 * C261;
    const double C1090 = C1070 * C262;
    const double C1081 = C1070 * C263;
    const double C1075 = C1070 * C264;
    const double C1313 = C1070 * C583;
    const double C1307 = C1070 * C584;
    const double C1298 = C1070 * C585;
    const double C1513 = C1070 * C685;
    const double C1507 = C1070 * C686;
    const double C1498 = C1070 * C687;
    const double C2401 = C1070 * C2385;
    const double C2398 = C1070 * C2383;
    const double C2395 = C1070 * C2381;
    const double C16947 = C1070 * C3308;
    const double C3892 = C3862 * C127;
    const double C3890 = C3862 * C126;
    const double C3881 = C3862 * C125;
    const double C3875 = C3862 * C124;
    const double C3869 = C3862 * C123;
    const double C3866 = C3862 * C122;
    const double C4070 = C3862 * C260;
    const double C4069 = C3862 * C264;
    const double C4066 = C3862 * C263;
    const double C4060 = C3862 * C262;
    const double C4054 = C3862 * C261;
    const double C4240 = C3862 * C388;
    const double C4239 = C3862 * C392;
    const double C4236 = C3862 * C391;
    const double C4230 = C3862 * C390;
    const double C4224 = C3862 * C389;
    const double C4492 = C3862 * C585;
    const double C4490 = C3862 * C584;
    const double C4488 = C3862 * C583;
    const double C4630 = C3862 * C687;
    const double C4628 = C3862 * C686;
    const double C4626 = C3862 * C685;
    const double C4998 = C3862 * C939;
    const double C4996 = C3862 * C938;
    const double C4994 = C3862 * C937;
    const double C4992 = C3862 * C936;
    const double C7234 = C3862 * C2385;
    const double C7232 = C3862 * C2383;
    const double C7230 = C3862 * C2381;
    const double C7784 = C3862 * C2853;
    const double C7782 = C3862 * C2854;
    const double C7780 = C3862 * C2855;
    const double C19691 = C3862 * C3308;
    const double C20243 = C3862 * C3739;
    const double C20241 = C3862 * C3738;
    const double C22453 = C3862 * C18086;
    const double C7944 = C7908 * C126;
    const double C7942 = C7908 * C125;
    const double C7927 = C7908 * C124;
    const double C7918 = C7908 * C123;
    const double C7914 = C7908 * C122;
    const double C8143 = C7908 * C261;
    const double C8142 = C7908 * C264;
    const double C8138 = C7908 * C263;
    const double C8129 = C7908 * C262;
    const double C8331 = C7908 * C389;
    const double C8330 = C7908 * C392;
    const double C8326 = C7908 * C391;
    const double C8317 = C7908 * C390;
    const double C8614 = C7908 * C585;
    const double C8611 = C7908 * C584;
    const double C8608 = C7908 * C583;
    const double C8769 = C7908 * C687;
    const double C8766 = C7908 * C686;
    const double C8763 = C7908 * C685;
    const double C9180 = C7908 * C938;
    const double C9177 = C7908 * C937;
    const double C9174 = C7908 * C936;
    const double C10213 = C7908 * C2383;
    const double C10212 = C7908 * C2381;
    const double C10389 = C7908 * C2854;
    const double C10382 = C7908 * C2855;
    const double C10842 = C7908 * C3308;
    const double C11278 = C7908 * C3738;
    const double C7945 = C7910 * C260;
    const double C7939 = C7910 * C261;
    const double C7930 = C7910 * C262;
    const double C7921 = C7910 * C263;
    const double C7915 = C7910 * C264;
    const double C8141 = C7910 * C583;
    const double C8135 = C7910 * C584;
    const double C8126 = C7910 * C585;
    const double C8329 = C7910 * C685;
    const double C8323 = C7910 * C686;
    const double C8314 = C7910 * C687;
    const double C9181 = C7910 * C2385;
    const double C9178 = C7910 * C2383;
    const double C9175 = C7910 * C2381;
    const double C10381 = C7910 * C3308;
    const double C22596 = C22566 * C127;
    const double C22594 = C22566 * C126;
    const double C22585 = C22566 * C125;
    const double C22579 = C22566 * C124;
    const double C22573 = C22566 * C123;
    const double C22570 = C22566 * C122;
    const double C22774 = C22566 * C260;
    const double C22773 = C22566 * C264;
    const double C22770 = C22566 * C263;
    const double C22764 = C22566 * C262;
    const double C22758 = C22566 * C261;
    const double C22944 = C22566 * C388;
    const double C22943 = C22566 * C392;
    const double C22940 = C22566 * C391;
    const double C22934 = C22566 * C390;
    const double C22928 = C22566 * C389;
    const double C23196 = C22566 * C585;
    const double C23194 = C22566 * C584;
    const double C23192 = C22566 * C583;
    const double C23334 = C22566 * C687;
    const double C23332 = C22566 * C686;
    const double C23330 = C22566 * C685;
    const double C23702 = C22566 * C939;
    const double C23700 = C22566 * C938;
    const double C23698 = C22566 * C937;
    const double C23696 = C22566 * C936;
    const double C25308 = C22566 * C2385;
    const double C25303 = C22566 * C2381;
    const double C25300 = C22566 * C2383;
    const double C25536 = C22566 * C2853;
    const double C25533 = C22566 * C2855;
    const double C25530 = C22566 * C2854;
    const double C26106 = C22566 * C3308;
    const double C26664 = C22566 * C3739;
    const double C26662 = C22566 * C3738;
    const double C43477 = C22566 * C18086;
    const double C48065 = C48057 / C47945;
    const double C49329 = C49294 + C49324;
    const double C11390 = C49314 - (C49091 * C49080) / C47945;
    const double C23828 = C49315 * C589;
    const double C41600 = C49315 * C1491;
    const double C9247 = C49315 / C47987 - C49089 / C48095;
    const double C11416 = C11391 * C589;
    const double C14511 = C11391 * C1491;
    const double C49325 = C49296 + C49314;
    const double C2699 = C2695 + C697;
    const double C2880 = C2528 * C1064;
    const double C2868 = C2528 * C1065;
    const double C15708 = C2528 * C49319;
    const double C15703 = C2528 * C49306;
    const double C18098 = C2528 * C48928;
    const double C20628 = C2528 * C49235;
    const double C20623 = C2528 * C48938;
    const double C34466 = C2528 * C23805;
    const double C34461 = C2528 * C48938;
    const double C37212 = C2528 * C48933;
    const double C37207 = C2528 * C48941;
    const double C1291 =
        (2 * (2 * ae * C48248 + C48174 * C48188) + C48353 + C48353 +
         C48174 * (C48188 + C48350 + C48350 +
                   C48174 * (2 * ae * C48228 + C48174 * C48197))) /
        C47952;
    const double C1312 = C1072 * C1287;
    const double C1802 = C1070 * C1287;
    const double C4489 = C3864 * C1287;
    const double C8140 = C7912 * C1287;
    const double C8609 = C7910 * C1287;
    const double C11407 = C11402 * C1287;
    const double C23193 = C22568 * C1287;
    const double C23819 = C23814 * C1287;
    const double C27022 = C48097 * C1287;
    const double C1512 = C1072 * C1487;
    const double C1966 = C1070 * C1487;
    const double C3154 = C114 * C1487;
    const double C4627 = C3864 * C1487;
    const double C7026 = C3862 * C1487;
    const double C8328 = C7912 * C1487;
    const double C8764 = C7910 * C1487;
    const double C10675 = C7908 * C1487;
    const double C17241 = C1068 * C1487;
    const double C23331 = C22568 * C1487;
    const double C25896 = C22566 * C1487;
    const double C27210 = C48097 * C1487;
    const double C3330 = C3328 + C3316;
    const double C3331 = C3329 + C3320;
    const double C18109 = C18107 * C48928;
    const double C21358 = C18107 * C49235;
    const double C35195 = C18107 * C23805;
    const double C18108 = C18106 + C18101;
    const double C48283 = ae * C48282;
    const double C586 = (2 * C48254 + C48181 * C48263 + C48174 * C48282 +
                         C48174 * C48280 * ae) /
                        C47945;
    const double C688 = (C48310 * C48282) / C47945;
    const double C158 = C150 + C151;
    const double C287 = C273 + C274;
    const double C415 = C401 + C402;
    const double C2524 = C2520 + C950;
    const double C48329 = C48328 + C48325;
    const double C1489 =
        (C48310 * C48207 + C48367 + C48367 +
         C48174 * (2 * ae * C48310 * C48238 + C48174 * C48310 * C48219)) /
        C47952;
    const double C48419 = ae * C48417;
    const double C48418 = C48174 * C48417;
    const double C48454 = C48310 * C48417;
    const double C48531 = 3 * C48417;
    const double C2390 =
        (C48332 + C48209 * C48465 + C48474 + C48474 +
         C48174 * (2 * ae * (C48270 + C48286 * C48465) +
                   C48174 * (C48209 + C48181 * C48217 * C48465))) /
        C47952;
    const double C3324 = C114 * C3309;
    const double C7783 = C3864 * C3309;
    const double C10390 = C7910 * C3309;
    const double C16956 = C1070 * C3309;
    const double C19693 = C3862 * C3309;
    const double C25527 = C22568 * C3309;
    const double C26108 = C22566 * C3309;
    const double C48606 = C48593 + C48519;
    const double C48520 = C48496 + C48518;
    const double C48575 = ae * C48570;
    const double C48710 = 2 * C48570;
    const double C48666 = C48394 + C48663;
    const double C48701 = ae * C48700;
    const double C11266 = (3 * C48468 + C48310 * C48700) / C47945;
    const double C1094 = C49290 * C590;
    const double C1299 = C49310 * C590;
    const double C4058 = C49088 * C590;
    const double C7934 = C49290 * C590;
    const double C8127 = C7902 * C590;
    const double C11425 = C11391 * C590;
    const double C22762 = C49088 * C590;
    const double C23837 = C49315 * C590;
    const double C26816 = C26785 * C590;
    const double C27009 = C49091 * C590;
    const double C2694 = C2687 + C698;
    const double C2692 = C2680 + C2681;
    const double C167 = C162 + C149;
    const double C296 = C292 + C278;
    const double C424 = C420 + C406;
    const double C2529 = C2526 + C2519;
    const double C48342 = ae * C48341;
    const double C1286 =
        (2 * C48258 + C48174 * C48341 + (C48255 + C48272 * C48178) * ae) /
        C47945;
    const double C1486 = (C48310 * C48341) / C47945;
    const double C2384 = (C48341 + C48417 * C48465) / C47945;
    const double C1505 = C49290 * C1490;
    const double C6444 = C49088 * C1490;
    const double C8321 = C49290 * C1490;
    const double C11757 = C11391 * C1490;
    const double C12867 = C7902 * C1490;
    const double C24169 = C49315 * C1490;
    const double C25305 = C49088 * C1490;
    const double C27203 = C26785 * C1490;
    const double C30024 = C49091 * C1490;
    const double C32815 = C49310 * C1490;
    const double C2697 = C2693 + C2684;
    const double C3747 = C2895 * C1065;
    const double C16523 = C2895 * C49306;
    const double C18099 = C2895 * C48928;
    const double C20630 = C2895 * C49235;
    const double C20625 = C2895 * C48938;
    const double C34468 = C2895 * C23805;
    const double C34463 = C2895 * C48938;
    const double C38027 = C2895 * C48941;
    const double C48397 = C48380 + C48395;
    const double C48450 = ae * C48448;
    const double C2396 = C1072 * C2382;
    const double C3157 = C114 * C2382;
    const double C7231 = C3864 * C2382;
    const double C9176 = C7912 * C2382;
    const double C10211 = C7910 * C2382;
    const double C10678 = C7908 * C2382;
    const double C16783 = C1070 * C2382;
    const double C17244 = C1068 * C2382;
    const double C19489 = C3862 * C2382;
    const double C25302 = C22568 * C2382;
    const double C25900 = C22566 * C2382;
    const double C28058 = C48097 * C2382;
    const double C10379 = C49290 * C2388;
    const double C10839 = C7902 * C2388;
    const double C15273 = C11391 * C2388;
    const double C16945 = C49290 * C2388;
    const double C17402 = C49310 * C2388;
    const double C19690 = C49088 * C2388;
    const double C26105 = C49088 * C2388;
    const double C31360 = C26785 * C2388;
    const double C42362 = C49315 * C2388;
    const double C47503 = C49091 * C2388;
    const double C18349 = C18344 + C3323;
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
    const double C266 =
        (2 * ae *
             (3 * (C48184 * C48183 * C48223 + C48225 * C48193) +
              C48181 *
                  (2 * C48181 * C48225 +
                   C48181 * (C48225 + C48201 * C48200 * C48223 * C48193))) +
         C48174 * (3 * C48207 + C48181 * C48221)) /
        C47952;
    const double C271 =
        (2 * ae *
             (4 * (2 * C48181 * C48225 + C48181 * C48238) +
              C48181 * (3 * C48238 +
                        C48181 * (2 * C48181 * C48236 +
                                  C48181 * (C48236 + C48212 * C48211 * C48223 *
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
    const double C394 = ((zP - zQ) * (3 * C48207 + C48181 * C48221)) / C47952;
    const double C399 =
        ((zP - zQ) *
         (4 * C48221 +
          C48181 * (3 * C48219 +
                    C48181 * (2 * C48181 * C48217 +
                              C48181 * (C48217 +
                                        (C48211 * C48212 +
                                         C48178 * bs[8] * std::pow(C48172, 8)) *
                                            C48177 * C48193))))) /
        C47952;
    const double C693 =
        (2 * ae * C48310 * C48277 + C48174 * C48310 * C48221) / C47952;
    const double C944 =
        (2 * C48181 * C48197 + C48181 * C48207 + C48221 * std::pow(C48310, 2)) /
        C47952;
    const double C945 =
        (3 * C48207 + C48181 * C48221 +
         (3 * C48219 +
          C48181 * (2 * C48181 * C48217 +
                    C48181 * (C48217 + (C48211 * C48212 +
                                        C48178 * bs[8] * std::pow(C48172, 8)) *
                                           C48177 * C48193))) *
             std::pow(C48310, 2)) /
        C47952;
    const double C2678 =
        (2 * ae * (C48277 + C48301 * C48465) +
         C48174 * (C48221 +
                   (2 * C48181 * C48217 +
                    C48181 * (C48217 + (C48211 * C48212 +
                                        C48178 * bs[8] * std::pow(C48172, 8)) *
                                           C48177 * C48193)) *
                       C48465)) /
        C47952;
    const double C2860 =
        (2 * C48310 * C48221 +
         C48310 * (C48221 +
                   (2 * C48181 * C48217 +
                    C48181 * (C48217 + (C48211 * C48212 +
                                        C48178 * bs[8] * std::pow(C48172, 8)) *
                                           C48177 * C48193)) *
                       C48465)) /
        C47952;
    const double C2894 = C2890 + C2872;
    const double C48552 = C48536 + C48547;
    const double C48625 = C48174 * C48621;
    const double C48660 = C48650 + C48659;
    const double C11268 = (2 * ae *
                               (3 * (C48228 + C48225 * C48465) +
                                C48310 * (2 * C48567 + C48310 * C48676)) +
                           C48174 * (3 * C48665 + C48310 * C48714)) /
                          C47952;
    const double C18088 = (4 * (2 * C48447 + C48310 * C48665) +
                           C48310 * (3 * C48665 + C48310 * C48714)) /
                          C47952;
    const double C18340 =
        (2 * ae *
             (4 * (2 * C48567 + C48310 * C48676) +
              C48310 * (3 * C48676 +
                        C48310 * (2 * C48644 +
                                  C48310 * (C48236 + C48292 * C48465)))) +
         C48174 *
             (4 * C48714 +
              C48310 * (3 * C48677 +
                        C48310 * (2 * C48645 +
                                  C48310 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48465))))) /
        C47952;
    const double C18584 =
        (5 * (3 * C48665 + C48310 * C48714) +
         C48310 *
             (4 * C48714 +
              C48310 * (3 * C48677 +
                        C48310 * (2 * C48645 +
                                  C48310 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48465))))) /
        C47952;
    const double C48306 = C48174 * C48305;
    const double C694 =
        (2 * ae * C48310 * C48305 +
         C48174 * C48310 *
             (3 * C48219 +
              C48181 *
                  (2 * C48181 * C48217 +
                   C48181 * (C48217 + (C48211 * C48212 +
                                       C48178 * bs[8] * std::pow(C48172, 8)) *
                                          C48177 * C48193)))) /
        C47952;
    const double C128 = (5 * (3 * C48263 + C48181 * C48277) +
                         C48181 * (4 * C48277 + C48181 * C48305)) /
                        C47945;
    const double C265 = (C48174 * (4 * C48277 + C48181 * C48305) +
                         (4 * C48280 + C48181 * C48302) * ae) /
                        C47945;
    const double C393 = (C48310 * (4 * C48277 + C48181 * C48305)) / C47945;
    const double C940 =
        (3 * C48263 + C48181 * C48277 + C48305 * C48465) / C47945;
    const double C48361 = ae * C48358;
    const double C48360 = C48174 * C48358;
    const double C48375 = C48310 * C48358;
    const double C2677 = (C48282 + C48358 * C48465) / C47945;
    const double C48440 = C48439 + C48433;
    const double C48479 = ae * C48478;
    const double C3310 = (2 * C48366 + C48310 * C48478) / C47945;
    const double C48558 = ae * C48555;
    const double C48557 = C48174 * C48555;
    const double C48583 = C48310 * C48555;
    const double C48690 = C48555 * C48465;
    const double C48705 = C48703 + C48704;
    const double C48630 = C48599 + C48626;
    const double C48655 = ae * C48648;
    const double C48679 = C48516 + C48674;
    const double C48718 = ae * C48716;
    const double C48722 = C48310 * C48716;
    const double C49328 = C49274 + C49320;
    const double C3858 = C49307 - (C48941 * C48924) / C47945;
    const double C31742 = C425 * C49308;
    const double C105 = C49308 / C47987 - C48939 / C48095;
    const double C5367 = C425 * C3859;
    const double C49321 = C49277 + C49307;
    const double C49330 = C49299 + C49326;
    const double C20351 = C49317 - (C49133 * C49122) / C47945;
    const double C17913 = C49318 / C47987 - C49131 / C48095;
    const double C49327 = C49301 + C49317;
    const double C48017 = C47969 / C47956;
    const double C48011 = C47969 / C47945;
    const double C1069 =
        (((-4 * C47955) / C47945 - C47969 / C47945) * ae) / C47956 +
        ((2 * ((0 * ae) / C47945 - C47955 / C47952) - C47969 / C47956) * ae) /
            C47945;
    const double C3861 =
        (((-4 * C47955) / C47945 - C47969 / C47945) * ae) / C47945;
    const double C7907 =
        (-(be * -2 * C47951) / C47952) / C47987 -
        ((2 * ((-C47951 / C47945) / C47987 - (C47960 * be) / C47945) -
          (C47943 * ((-4 * C47955) / C47945 - C47969 / C47945) * be) / C47945) *
         be) /
            C47945 -
        C47961 / C47956;
    const double C7909 =
        (-(((-4 * C47955) / C47945 - C47969 / C47945) * be) / C47945) / C47987 -
        ((2 * ((-C47957 / C47945) / C47987 - (0 * be) / C47945) -
          C47969 / C47956) *
         be) /
            C47945;
    const double C1101 = C1067 * C118;
    const double C1086 = C1067 * C117;
    const double C1077 = C1067 * C116;
    const double C1309 = C1067 * C257;
    const double C1300 = C1067 * C256;
    const double C1509 = C1067 * C385;
    const double C1500 = C1067 * C384;
    const double C16949 = C1067 * C932;
    const double C16940 = C1067 * C931;
    const double C16934 = C1067 * C386;
    const double C17399 = C1067 * C2375;
    const double C17393 = C1067 * C680;
    const double C17833 = C1067 * C2851;
    const double C32816 = C1067 * C681;
    const double C1095 = C1071 * C581;
    const double C1092 = C1071 * C580;
    const double C1083 = C1071 * C579;
    const double C1303 = C1071 * C1282;
    const double C1294 = C1071 * C1281;
    const double C1503 = C1071 * C1482;
    const double C1494 = C1071 * C1481;
    const double C16953 = C1071 * C2378;
    const double C16944 = C1071 * C2376;
    const double C16938 = C1071 * C1483;
    const double C17403 = C1071 * C9939;
    const double C17397 = C1071 * C1955;
    const double C17829 = C1071 * C10361;
    const double C32812 = C1071 * C1956;
    const double C3886 = C3863 * C254;
    const double C3883 = C3863 * C255;
    const double C3877 = C3863 * C256;
    const double C3871 = C3863 * C257;
    const double C4062 = C3863 * C579;
    const double C4056 = C3863 * C580;
    const double C4050 = C3863 * C581;
    const double C4232 = C3863 * C681;
    const double C4226 = C3863 * C682;
    const double C4220 = C3863 * C683;
    const double C6443 = C3863 * C1482;
    const double C6439 = C3863 * C1481;
    const double C6662 = C3863 * C2377;
    const double C6658 = C3863 * C2379;
    const double C6655 = C3863 * C680;
    const double C7228 = C3863 * C1483;
    const double C7776 = C3863 * C2375;
    const double C18933 = C3863 * C2378;
    const double C19138 = C3863 * C3306;
    const double C19689 = C3863 * C2376;
    const double C20237 = C3863 * C3305;
    const double C22079 = C3863 * C10361;
    const double C22449 = C3863 * C11264;
    const double C7935 = C7911 * C581;
    const double C7932 = C7911 * C580;
    const double C7923 = C7911 * C579;
    const double C8131 = C7911 * C1282;
    const double C8122 = C7911 * C1281;
    const double C8319 = C7911 * C1482;
    const double C8310 = C7911 * C1481;
    const double C10387 = C7911 * C2378;
    const double C10378 = C7911 * C2376;
    const double C10372 = C7911 * C1483;
    const double C10840 = C7911 * C9939;
    const double C10834 = C7911 * C1955;
    const double C11272 = C7911 * C10361;
    const double C12864 = C7911 * C1956;
    const double C11420 = C11401 * C1281;
    const double C11417 = C11401 * C1282;
    const double C11590 = C11401 * C1792;
    const double C11752 = C11401 * C1956;
    const double C14512 = C11401 * C1955;
    const double C14894 = C11401 * C9455;
    const double C15270 = C11401 * C9939;
    const double C22590 = C22567 * C254;
    const double C22587 = C22567 * C255;
    const double C22581 = C22567 * C256;
    const double C22575 = C22567 * C257;
    const double C22766 = C22567 * C579;
    const double C22760 = C22567 * C580;
    const double C22754 = C22567 * C581;
    const double C22936 = C22567 * C681;
    const double C22930 = C22567 * C682;
    const double C22924 = C22567 * C683;
    const double C25086 = C22567 * C2379;
    const double C25084 = C22567 * C2377;
    const double C25304 = C22567 * C1482;
    const double C25296 = C22567 * C2378;
    const double C25526 = C22567 * C3306;
    const double C25523 = C22567 * C2375;
    const double C25518 = C22567 * C680;
    const double C26104 = C22567 * C2376;
    const double C26100 = C22567 * C1483;
    const double C26658 = C22567 * C3305;
    const double C28406 = C22567 * C1481;
    const double C43103 = C22567 * C10361;
    const double C43473 = C22567 * C11264;
    const double C23832 = C23813 * C1281;
    const double C23829 = C23813 * C1282;
    const double C24002 = C23813 * C1792;
    const double C24164 = C23813 * C1956;
    const double C41601 = C23813 * C1955;
    const double C41983 = C23813 * C9455;
    const double C42359 = C23813 * C9939;
    const double C26817 = C26793 * C581;
    const double C26814 = C26793 * C580;
    const double C26805 = C26793 * C579;
    const double C27013 = C26793 * C1282;
    const double C27004 = C26793 * C1281;
    const double C27201 = C26793 * C1482;
    const double C27192 = C26793 * C1481;
    const double C30021 = C26793 * C1956;
    const double C30237 = C26793 * C2378;
    const double C30234 = C26793 * C1483;
    const double C30808 = C26793 * C1955;
    const double C31359 = C26793 * C2376;
    const double C47504 = C26793 * C9939;
    const double C47921 = C26793 * C10361;
    const double C48033 = C48025 - C48013;
    const double C23843 = C49329 * C131;
    const double C23822 = C49329 * C130;
    const double C24013 = C49329 * C269;
    const double C24175 = C49329 * C397;
    const double C41596 = C49329 * C398;
    const double C41978 = C49329 * C690;
    const double C42366 = C49329 * C941;
    const double C9244 =
        (C49322 + 2 * C49084) / C47987 - (C49329 * C49080) / C47945;
    const double C11428 = C11390 * C268;
    const double C11413 = C11390 * C269;
    const double C11598 = C11390 * C589;
    const double C11760 = C11390 * C691;
    const double C14509 = C11390 * C690;
    const double C14891 = C11390 * C1491;
    const double C15275 = C11390 * C2387;
    const double C23840 = C49325 * C268;
    const double C23825 = C49325 * C269;
    const double C24010 = C49325 * C589;
    const double C24172 = C49325 * C691;
    const double C41598 = C49325 * C690;
    const double C41980 = C49325 * C1491;
    const double C42364 = C49325 * C2387;
    const double C9245 =
        (C49310 + 2 * C49091 + C49329) / C47987 - (C49325 * C49080) / C47945;
    const double C9246 = (C49290 + C49088 / C47945 + C49325) / C47987 -
                         (C49315 * C49080) / C47945;
    const double C2703 = C2699 + C2690;
    const double C3745 = C2897 + C2868;
    const double C16521 = C15702 + C15703;
    const double C21355 = C20622 + C20623;
    const double C35192 = C34460 + C34461;
    const double C38025 = C37206 + C37207;
    const double C3332 = C3330 * C1064;
    const double C5732 = C3330 * C3857;
    const double C16113 = C3330 * C49319;
    const double C18342 = C3330 * C48928;
    const double C20991 = C3330 * C49235;
    const double C34828 = C3330 * C23805;
    const double C37617 = C3330 * C48933;
    const double C3333 = C3331 * C1064;
    const double C16116 = C3331 * C49319;
    const double C18343 = C3331 * C48928;
    const double C20993 = C3331 * C49235;
    const double C34830 = C3331 * C23805;
    const double C37620 = C3331 * C48933;
    const double C18110 = C18108 * C48928;
    const double C21357 = C18108 * C48938;
    const double C35194 = C18108 * C48938;
    const double C591 =
        (2 * C48181 * C48197 + C48181 * C48207 + C48283 + C48283 +
         C48174 * (2 * ae * C48277 + C48174 * C48221)) /
        C47952;
    const double C597 = C114 * C586;
    const double C1096 = C1072 * C586;
    const double C1316 = C1070 * C586;
    const double C4051 = C3864 * C586;
    const double C4494 = C3862 * C586;
    const double C7936 = C7912 * C586;
    const double C8144 = C7910 * C586;
    const double C22755 = C22568 * C586;
    const double C23198 = C22566 * C586;
    const double C26818 = C48097 * C586;
    const double C699 = C114 * C688;
    const double C1516 = C1070 * C688;
    const double C4221 = C3864 * C688;
    const double C4632 = C3862 * C688;
    const double C8332 = C7910 * C688;
    const double C22925 = C22568 * C688;
    const double C23336 = C22566 * C688;
    const double C163 = C158 + C151;
    const double C291 = C287 + C274;
    const double C419 = C415 + C402;
    const double C2527 = C2524 + C950;
    const double C48330 = ae * C48329;
    const double C1285 =
        (2 * C48267 + C48174 * C48329 + (C48264 + C48276 * C48178) * ae) /
        C47945;
    const double C1485 = (C48310 * C48329) / C47945;
    const double C1496 = C49290 * C1489;
    const double C6440 = C49088 * C1489;
    const double C8312 = C49290 * C1489;
    const double C27194 = C26785 * C1489;
    const double C28407 = C49088 * C1489;
    const double C48420 = C48403 + C48418;
    const double C48456 = ae * C48454;
    const double C10388 = C49290 * C2390;
    const double C16954 = C49290 * C2390;
    const double C18934 = C49088 * C2390;
    const double C25298 = C49088 * C2390;
    const double C30238 = C26785 * C2390;
    const double C20487 = C20485 + C3324;
    const double C48612 = C48606 + C48519;
    const double C48521 = C48520 + C48509;
    const double C48668 = ae * C48666;
    const double C10363 = (2 * C48448 + C48310 * C48666) / C47945;
    const double C10365 = (2 * C48447 + C48310 * C48665 + C48701 + C48701 +
                           C48174 * (2 * ae * (2 * C48567 + C48310 * C48676) +
                                     C48174 * (2 * C48568 + C48310 * C48677))) /
                          C47952;
    const double C11279 = C7910 * C11266;
    const double C17836 = C1070 * C11266;
    const double C18001 = C114 * C11266;
    const double C20242 = C3864 * C11266;
    const double C22081 = C3862 * C11266;
    const double C26663 = C22568 * C11266;
    const double C43105 = C22566 * C11266;
    const double C2698 = C2694 + C698;
    const double C2696 = C2692 + C2681;
    const double C2879 = C424 * C49279;
    const double C5371 = C424 * C3859;
    const double C5368 = C424 * C49257;
    const double C15707 = C424 * C49279;
    const double C31746 = C424 * C49308;
    const double C31743 = C424 * C49257;
    const double C37211 = C424 * C26788;
    const double C2881 = C2529 * C1065;
    const double C2869 = C2529 * C49279;
    const double C6095 = C2529 * C3859;
    const double C15709 = C2529 * C49306;
    const double C15704 = C2529 * C49279;
    const double C20629 = C2529 * C48938;
    const double C32469 = C2529 * C49308;
    const double C34467 = C2529 * C48938;
    const double C37213 = C2529 * C48941;
    const double C37208 = C2529 * C26788;
    const double C1290 =
        (2 * (2 * ae * C48254 + C48174 * C48332) + C48342 + C48342 +
         C48174 * (C48332 + C48339 + C48339 +
                   C48174 * (2 * ae * C48270 + C48174 * C48209))) /
        C47952;
    const double C1304 = C1072 * C1286;
    const double C1805 = C1070 * C1286;
    const double C4491 = C3864 * C1286;
    const double C8132 = C7912 * C1286;
    const double C8612 = C7910 * C1286;
    const double C11418 = C11402 * C1286;
    const double C23195 = C22568 * C1286;
    const double C23830 = C23814 * C1286;
    const double C27014 = C48097 * C1286;
    const double C1504 = C1072 * C1486;
    const double C1969 = C1070 * C1486;
    const double C3155 = C114 * C1486;
    const double C4629 = C3864 * C1486;
    const double C7028 = C3862 * C1486;
    const double C8320 = C7912 * C1486;
    const double C8767 = C7910 * C1486;
    const double C13417 = C7908 * C1486;
    const double C23333 = C22568 * C1486;
    const double C25898 = C22566 * C1486;
    const double C27202 = C48097 * C1486;
    const double C33365 = C1068 * C1486;
    const double C2399 = C1072 * C2384;
    const double C3158 = C114 * C2384;
    const double C7233 = C3864 * C2384;
    const double C9179 = C7912 * C2384;
    const double C10214 = C7910 * C2384;
    const double C16786 = C1070 * C2384;
    const double C19491 = C3862 * C2384;
    const double C25297 = C22568 * C2384;
    const double C25902 = C22566 * C2384;
    const double C28061 = C48097 * C2384;
    const double C2701 = C2697 + C2685;
    const double C21356 = C20624 + C20625;
    const double C35193 = C34462 + C34463;
    const double C48398 = C48397 + C48391;
    const double C1961 =
        (2 * (2 * ae * C48310 * C48228 + C48174 * C48447) + C48450 + C48450 +
         C48174 *
             (C48447 + C48451 + C48451 +
              C48174 * (2 * ae * C48310 * C48225 + C48174 * C48310 * C48205))) /
        C47952;
    const double C18351 = C18349 + C3323;
    const double C275 = C49025 * C266;
    const double C3888 = C49088 * C266;
    const double C22592 = C49088 * C266;
    const double C403 = C49025 * C394;
    const double C4222 = C49088 * C693;
    const double C5231 = C49025 * C693;
    const double C22926 = C49088 * C693;
    const double C2521 = C49025 * C944;
    const double C3746 = C2894 * C49279;
    const double C16522 = C2894 * C49279;
    const double C20631 = C2894 * C48938;
    const double C34469 = C2894 * C48938;
    const double C38026 = C2894 * C26788;
    const double C18347 = C49025 * C11268;
    const double C22450 = C49088 * C11268;
    const double C43474 = C49088 * C11268;
    const double C18587 = C49025 * C18088;
    const double C48307 = C48306 + C48304;
    const double C153 = C114 * C128;
    const double C286 = C114 * C265;
    const double C3893 = C3864 * C265;
    const double C22597 = C22568 * C265;
    const double C414 = C114 * C393;
    const double C951 = C114 * C940;
    const double C48362 = C48277 + C48360;
    const double C48376 = ae * C48375;
    const double C2691 = C114 * C2677;
    const double C4999 = C3864 * C2677;
    const double C23703 = C22568 * C2677;
    const double C48442 = ae * C48440;
    const double C48441 = C48174 * C48440;
    const double C48460 = C48310 * C48440;
    const double C2386 = (C48329 + C48440 * C48465) / C47945;
    const double C2392 =
        (C48207 + C48219 * C48465 + C48479 + C48479 +
         C48174 * (2 * ae * (C48238 + C48297 * C48465) +
                   C48174 * (C48219 +
                             (C48217 + (C48211 * C48212 +
                                        C48178 * bs[8] * std::pow(C48172, 8)) *
                                           C48177 * C48193) *
                                 C48465))) /
        C47952;
    const double C3325 = C114 * C3310;
    const double C7785 = C3864 * C3310;
    const double C25537 = C22568 * C3310;
    const double C48559 = C48532 + C48557;
    const double C48588 = ae * C48583;
    const double C48693 = C48417 + C48690;
    const double C48706 = ae * C48705;
    const double C17998 = (3 * C48473 + C48310 * C48705) / C47945;
    const double C48632 = C48630 + C48615;
    const double C48684 = ae * C48679;
    const double C48711 = C48310 * C48679;
    const double C48723 = C48721 + C48722;
    const double C31744 = C426 * C49328;
    const double C31740 = C2892 * C49328;
    const double C32106 = C3330 * C49328;
    const double C32471 = C2893 * C49328;
    const double C102 =
        (C49319 + 2 * C48933) / C47987 - (C49328 * C48924) / C47945;
    const double C5370 = C425 * C3858;
    const double C5366 = C426 * C3858;
    const double C6096 = C2528 * C3858;
    const double C31745 = C425 * C49321;
    const double C31741 = C426 * C49321;
    const double C32470 = C2528 * C49321;
    const double C103 =
        (C49306 + 2 * C48941 + C49328) / C47987 - (C49321 * C48924) / C47945;
    const double C104 = (C49279 + C48938 / C47945 + C49321) / C47987 -
                        (C49308 * C48924) / C47945;
    const double C17910 =
        (C49323 + 2 * C49126) / C47987 - (C49330 * C49122) / C47945;
    const double C17911 =
        (C49312 + 2 * C49133 + C49330) / C47987 - (C49327 * C49122) / C47945;
    const double C17912 = (C49293 + C49130 / C47945 + C49327) / C47987 -
                          (C49318 * C49122) / C47945;
    const double C48050 = C48042 - C48017;
    const double C48032 = C48024 - C48011;
    const double C1098 = C1069 * C255;
    const double C1089 = C1069 * C256;
    const double C1080 = C1069 * C257;
    const double C1306 = C1069 * C579;
    const double C1297 = C1069 * C580;
    const double C1506 = C1069 * C681;
    const double C1497 = C1069 * C682;
    const double C16951 = C1069 * C2377;
    const double C16942 = C1069 * C2375;
    const double C16936 = C1069 * C680;
    const double C17401 = C1069 * C2376;
    const double C17395 = C1069 * C1483;
    const double C17831 = C1069 * C3305;
    const double C32814 = C1069 * C1482;
    const double C3889 = C3861 * C119;
    const double C3880 = C3861 * C118;
    const double C3874 = C3861 * C117;
    const double C3868 = C3861 * C116;
    const double C4065 = C3861 * C257;
    const double C4059 = C3861 * C256;
    const double C4053 = C3861 * C255;
    const double C4235 = C3861 * C385;
    const double C4229 = C3861 * C384;
    const double C4223 = C3861 * C383;
    const double C6445 = C3861 * C681;
    const double C6441 = C3861 * C682;
    const double C6664 = C3861 * C932;
    const double C6660 = C3861 * C933;
    const double C6653 = C3861 * C386;
    const double C7226 = C3861 * C680;
    const double C7778 = C3861 * C931;
    const double C18935 = C3861 * C2377;
    const double C19140 = C3861 * C2850;
    const double C19687 = C3861 * C2375;
    const double C20239 = C3861 * C2851;
    const double C22077 = C3861 * C3305;
    const double C22451 = C3861 * C3735;
    const double C7941 = C7907 * C118;
    const double C7926 = C7907 * C117;
    const double C7917 = C7907 * C116;
    const double C8137 = C7907 * C257;
    const double C8128 = C7907 * C256;
    const double C8325 = C7907 * C385;
    const double C8316 = C7907 * C384;
    const double C10383 = C7907 * C932;
    const double C10374 = C7907 * C931;
    const double C10368 = C7907 * C386;
    const double C10836 = C7907 * C2375;
    const double C10830 = C7907 * C680;
    const double C11276 = C7907 * C2851;
    const double C12868 = C7907 * C681;
    const double C7938 = C7909 * C255;
    const double C7929 = C7909 * C256;
    const double C7920 = C7909 * C257;
    const double C8134 = C7909 * C579;
    const double C8125 = C7909 * C580;
    const double C8322 = C7909 * C681;
    const double C8313 = C7909 * C682;
    const double C10385 = C7909 * C2377;
    const double C10376 = C7909 * C2375;
    const double C10370 = C7909 * C680;
    const double C10838 = C7909 * C2376;
    const double C10832 = C7909 * C1483;
    const double C11274 = C7909 * C3305;
    const double C12866 = C7909 * C1482;
    const double C1115 = C1101 + C1102;
    const double C1110 = C1086 + C1087;
    const double C1107 = C1077 + C1078;
    const double C1323 = C1309 + C1310;
    const double C1320 = C1300 + C1301;
    const double C1523 = C1509 + C1510;
    const double C1520 = C1500 + C1501;
    const double C16964 = C16949 + C2397;
    const double C16961 = C16940 + C2394;
    const double C16958 = C16934 + C1514;
    const double C17411 = C17399 + C16784;
    const double C17408 = C17393 + C1965;
    const double C17841 = C17833 + C16948;
    const double C32820 = C32816 + C1968;
    const double C1112 = C1092 + C1093;
    const double C1109 = C1083 + C1084;
    const double C16963 = C16944 + C2396;
    const double C16960 = C16938 + C1512;
    const double C3900 = C3886 + C3887;
    const double C3899 = C3883 + C3884;
    const double C3897 = C3877 + C3878;
    const double C3895 = C3871 + C3872;
    const double C4076 = C4062 + C4063;
    const double C4074 = C4056 + C4057;
    const double C4246 = C4232 + C4233;
    const double C4244 = C4226 + C4227;
    const double C6672 = C6662 + C4995;
    const double C6670 = C6658 + C4997;
    const double C6669 = C6655 + C4238;
    const double C7237 = C7228 + C4627;
    const double C7786 = C7776 + C4993;
    const double C19143 = C19138 + C7783;
    const double C19696 = C19689 + C7231;
    const double C20246 = C20237 + C7781;
    const double C7952 = C7932 + C7933;
    const double C7949 = C7923 + C7924;
    const double C10397 = C10378 + C9176;
    const double C10394 = C10372 + C8328;
    const double C22604 = C22590 + C22591;
    const double C22603 = C22587 + C22588;
    const double C22601 = C22581 + C22582;
    const double C22599 = C22575 + C22576;
    const double C22780 = C22766 + C22767;
    const double C22778 = C22760 + C22761;
    const double C22950 = C22936 + C22937;
    const double C22948 = C22930 + C22931;
    const double C25092 = C25086 + C23701;
    const double C25091 = C25084 + C23699;
    const double C25542 = C25526 + C25527;
    const double C25541 = C25523 + C23697;
    const double C25539 = C25518 + C22942;
    const double C26113 = C26104 + C25302;
    const double C26111 = C26100 + C23331;
    const double C26667 = C26658 + C25532;
    const double C26834 = C26814 + C26815;
    const double C26831 = C26805 + C26806;
    const double C30246 = C30234 + C27210;
    const double C31371 = C31359 + C28058;
    const double C48043 = C48033 / C47987;
    const double C48041 = C47943 * C48033;
    const double C48040 = 2 * C48033;
    const double C3317 = C2703 * C1065;
    const double C5733 = C2703 * C3858;
    const double C16114 = C2703 * C49306;
    const double C20992 = C2703 * C48938;
    const double C32107 = C2703 * C49321;
    const double C34829 = C2703 * C48938;
    const double C37618 = C2703 * C48941;
    const double C1097 = C49290 * C591;
    const double C4052 = C49088 * C591;
    const double C7937 = C49290 * C591;
    const double C22756 = C49088 * C591;
    const double C26819 = C26785 * C591;
    const double C1113 = C1095 + C1096;
    const double C4072 = C4050 + C4051;
    const double C7953 = C7935 + C7936;
    const double C22776 = C22754 + C22755;
    const double C26835 = C26817 + C26818;
    const double C5232 = C5230 + C699;
    const double C4242 = C4220 + C4221;
    const double C22946 = C22924 + C22925;
    const double C168 = C163 + C152;
    const double C1289 =
        (2 * (2 * ae * C48263 + C48174 * C48207) + C48330 + C48330 +
         C48174 * (C48207 + C48327 + C48327 +
                   C48174 * (2 * ae * C48238 + C48174 * C48219))) /
        C47952;
    const double C1295 = C1072 * C1285;
    const double C1808 = C1070 * C1285;
    const double C4493 = C3864 * C1285;
    const double C8123 = C7912 * C1285;
    const double C8615 = C7910 * C1285;
    const double C11421 = C11402 * C1285;
    const double C23197 = C22568 * C1285;
    const double C23833 = C23814 * C1285;
    const double C27005 = C48097 * C1285;
    const double C1495 = C1072 * C1485;
    const double C1972 = C1070 * C1485;
    const double C3156 = C114 * C1485;
    const double C4631 = C3864 * C1485;
    const double C7030 = C3862 * C1485;
    const double C8311 = C7912 * C1485;
    const double C8770 = C7910 * C1485;
    const double C23335 = C22568 * C1485;
    const double C27193 = C48097 * C1485;
    const double C28951 = C22566 * C1485;
    const double C48421 = C48420 + C48414;
    const double C1962 =
        (2 * (2 * ae * C48310 * C48270 + C48174 * C48453) + C48456 + C48456 +
         C48174 * (C48453 + C48457 + C48457 +
                   C48174 * (2 * ae * C48310 * C48286 +
                             C48174 * C48310 * C48181 * C48217))) /
        C47952;
    const double C20488 = C20487 + C3324;
    const double C48629 = C48612 + C48625;
    const double C48523 = ae * C48521;
    const double C48522 = C48174 * C48521;
    const double C48569 = C48310 * C48521;
    const double C48597 = 4 * C48521;
    const double C9943 =
        (2 * (2 * ae * (C48228 + C48225 * C48465) + C48174 * C48665) + C48668 +
         C48668 +
         C48174 * (C48665 + C48669 + C48669 +
                   C48174 * (2 * ae * (C48225 + C48236 * C48465) +
                             C48174 * (C48205 + C48217 * C48465)))) /
        C47952;
    const double C10380 = C7912 * C10363;
    const double C10843 = C7910 * C10363;
    const double C16946 = C1072 * C10363;
    const double C17406 = C1070 * C10363;
    const double C18255 = C114 * C10363;
    const double C19692 = C3864 * C10363;
    const double C21945 = C3862 * C10363;
    const double C26107 = C22568 * C10363;
    const double C31367 = C48097 * C10363;
    const double C42969 = C22566 * C10363;
    const double C11273 = C49290 * C10365;
    const double C17830 = C49290 * C10365;
    const double C22080 = C49088 * C10365;
    const double C43104 = C49088 * C10365;
    const double C47922 = C26785 * C10365;
    const double C18350 = C18346 + C18001;
    const double C22456 = C22449 + C20242;
    const double C43480 = C43473 + C26663;
    const double C2702 = C2698 + C2688;
    const double C2700 = C2696 + C2682;
    const double C3753 = C3745 + C2869;
    const double C16525 = C16521 + C15704;
    const double C38029 = C38025 + C37208;
    const double C1305 = C49290 * C1290;
    const double C8133 = C49290 * C1290;
    const double C11419 = C49265 * C1290;
    const double C11595 = C11391 * C1290;
    const double C23831 = C49265 * C1290;
    const double C24007 = C49315 * C1290;
    const double C27015 = C26785 * C1290;
    const double C1321 = C1303 + C1304;
    const double C8149 = C8131 + C8132;
    const double C11439 = C11417 + C11418;
    const double C23851 = C23829 + C23830;
    const double C27031 = C27013 + C27014;
    const double C1521 = C1503 + C1504;
    const double C6449 = C6443 + C4629;
    const double C8337 = C8319 + C8320;
    const double C25312 = C25304 + C23333;
    const double C27219 = C27201 + C27202;
    const double C16966 = C16953 + C2399;
    const double C18937 = C18933 + C7233;
    const double C10400 = C10387 + C9179;
    const double C25310 = C25296 + C25297;
    const double C30248 = C30237 + C28061;
    const double C3321 = C2701 * C1065;
    const double C16117 = C2701 * C49306;
    const double C20994 = C2701 * C48938;
    const double C34831 = C2701 * C48938;
    const double C37621 = C2701 * C48941;
    const double C48399 = ae * C48398;
    const double C1794 =
        (3 * C48352 + C48174 * C48398 + (2 * C48346 + C48174 * C48388) * ae) /
        C47945;
    const double C1958 = (C48310 * C48398) / C47945;
    const double C9941 = (C48398 + C48521 * C48465) / C47945;
    const double C10835 = C49290 * C1961;
    const double C14513 = C49265 * C1961;
    const double C14893 = C11391 * C1961;
    const double C17398 = C49290 * C1961;
    const double C30809 = C26785 * C1961;
    const double C41602 = C49265 * C1961;
    const double C41982 = C49315 * C1961;
    const double C18353 = C18351 + C18345;
    const double C295 = C291 + C275;
    const double C423 = C419 + C403;
    const double C2530 = C2527 + C2521;
    const double C18591 = C18590 + C18587;
    const double C48308 = ae * C48307;
    const double C587 = (3 * C48263 + C48181 * C48277 + C48174 * C48307 +
                         C48174 * C48302 * ae) /
                        C47945;
    const double C689 = (C48310 * C48307) / C47945;
    const double C48363 = C48362 + C48359;
    const double C1492 =
        (C48310 * C48221 + C48376 + C48376 +
         C48174 *
             (2 * ae * C48310 * C48301 +
              C48174 * C48310 *
                  (2 * C48181 * C48217 +
                   C48181 * (C48217 + (C48211 * C48212 +
                                       C48178 * bs[8] * std::pow(C48172, 8)) *
                                          C48177 * C48193)))) /
        C47952;
    const double C48443 = C48426 + C48441;
    const double C48462 = ae * C48460;
    const double C2402 = C1072 * C2386;
    const double C3159 = C114 * C2386;
    const double C7235 = C3864 * C2386;
    const double C9182 = C7912 * C2386;
    const double C25309 = C22568 * C2386;
    const double C28064 = C48097 * C2386;
    const double C48560 = C48559 + C48549;
    const double C48695 = ae * C48693;
    const double C10364 = (2 * C48454 + C48310 * C48693) / C47945;
    const double C10366 =
        (2 * C48453 + C48310 * C48692 + C48706 + C48706 +
         C48174 * (2 * ae * (2 * C48580 + C48310 * (C48286 + C48533 * C48465)) +
                   C48174 * (2 * C48581 +
                             C48310 * (C48530 + C48181 *
                                                    (C48211 * C48212 +
                                                     C48178 * bs[8] *
                                                         std::pow(C48172, 8)) *
                                                    C48177 * C48465)))) /
        C47952;
    const double C18002 = C114 * C17998;
    const double C20244 = C3864 * C17998;
    const double C26665 = C22568 * C17998;
    const double C48634 = ae * C48632;
    const double C48633 = C48174 * C48632;
    const double C48647 = C48310 * C48632;
    const double C48673 = C48632 * C48465;
    const double C48715 = C48710 + C48711;
    const double C48724 = ae * C48723;
    const double C18339 = (4 * C48700 + C48310 * C48723) / C47945;
    const double C48056 = C48050 * be;
    const double C48039 = C48032 * ae;
    const double C22565 = -(C48032 * be) / C47945;
    const double C1114 = C1098 + C1099;
    const double C1111 = C1089 + C1090;
    const double C1108 = C1080 + C1081;
    const double C1322 = C1306 + C1307;
    const double C1319 = C1297 + C1298;
    const double C1522 = C1506 + C1507;
    const double C1519 = C1497 + C1498;
    const double C16965 = C16951 + C2398;
    const double C16962 = C16942 + C2395;
    const double C16959 = C16936 + C1513;
    const double C17412 = C17401 + C16783;
    const double C17409 = C17395 + C1966;
    const double C17840 = C17831 + C16947;
    const double C32819 = C32814 + C1969;
    const double C3901 = C3889 + C3890;
    const double C3898 = C3880 + C3881;
    const double C3896 = C3874 + C3875;
    const double C3894 = C3868 + C3869;
    const double C4077 = C4065 + C4066;
    const double C4075 = C4059 + C4060;
    const double C4073 = C4053 + C4054;
    const double C4247 = C4235 + C4236;
    const double C4245 = C4229 + C4230;
    const double C4243 = C4223 + C4224;
    const double C6450 = C6445 + C4628;
    const double C6448 = C6441 + C4630;
    const double C6673 = C6664 + C4994;
    const double C6671 = C6660 + C4996;
    const double C6668 = C6653 + C4239;
    const double C7236 = C7226 + C4626;
    const double C7787 = C7778 + C4992;
    const double C18938 = C18935 + C7232;
    const double C19144 = C19140 + C7782;
    const double C19695 = C19687 + C7230;
    const double C20247 = C20239 + C7780;
    const double C22083 = C22077 + C19691;
    const double C22457 = C22451 + C20241;
    const double C7955 = C7941 + C7942;
    const double C7950 = C7926 + C7927;
    const double C7947 = C7917 + C7918;
    const double C8151 = C8137 + C8138;
    const double C8148 = C8128 + C8129;
    const double C8339 = C8325 + C8326;
    const double C8336 = C8316 + C8317;
    const double C10398 = C10383 + C9177;
    const double C10395 = C10374 + C9174;
    const double C10392 = C10368 + C8330;
    const double C10848 = C10836 + C10212;
    const double C10845 = C10830 + C8763;
    const double C11284 = C11276 + C10382;
    const double C12872 = C12868 + C8766;
    const double C7954 = C7938 + C7939;
    const double C7951 = C7929 + C7930;
    const double C7948 = C7920 + C7921;
    const double C8150 = C8134 + C8135;
    const double C8147 = C8125 + C8126;
    const double C8338 = C8322 + C8323;
    const double C8335 = C8313 + C8314;
    const double C10399 = C10385 + C9178;
    const double C10396 = C10376 + C9175;
    const double C10393 = C10370 + C8329;
    const double C10849 = C10838 + C10211;
    const double C10846 = C10832 + C8764;
    const double C11283 = C11274 + C10381;
    const double C12871 = C12866 + C8767;
    const double C1124 = C1115 + C1102;
    const double C1119 = C1110 + C1087;
    const double C1116 = C1107 + C1078;
    const double C1329 = C1323 + C1310;
    const double C1326 = C1320 + C1301;
    const double C1529 = C1523 + C1510;
    const double C1526 = C1520 + C1501;
    const double C16973 = C16964 + C2397;
    const double C16970 = C16961 + C2394;
    const double C16967 = C16958 + C1514;
    const double C17417 = C17411 + C16784;
    const double C17414 = C17408 + C1965;
    const double C17845 = C17841 + C16948;
    const double C32823 = C32820 + C1968;
    const double C1121 = C1112 + C1093;
    const double C1118 = C1109 + C1084;
    const double C16972 = C16963 + C2396;
    const double C16969 = C16960 + C1512;
    const double C3908 = C3900 + C3887;
    const double C3907 = C3899 + C3884;
    const double C3905 = C3897 + C3878;
    const double C3903 = C3895 + C3872;
    const double C4082 = C4076 + C4063;
    const double C4080 = C4074 + C4057;
    const double C4252 = C4246 + C4233;
    const double C4250 = C4244 + C4227;
    const double C6678 = C6672 + C4995;
    const double C6676 = C6670 + C4997;
    const double C6675 = C6669 + C4238;
    const double C7239 = C7237 + C4627;
    const double C7788 = C7786 + C4993;
    const double C19145 = C19143 + C7783;
    const double C19698 = C19696 + C7231;
    const double C20249 = C20246 + C7781;
    const double C7961 = C7952 + C7933;
    const double C7958 = C7949 + C7924;
    const double C10406 = C10397 + C9176;
    const double C10403 = C10394 + C8328;
    const double C22612 = C22604 + C22591;
    const double C22611 = C22603 + C22588;
    const double C22609 = C22601 + C22582;
    const double C22607 = C22599 + C22576;
    const double C22786 = C22780 + C22767;
    const double C22784 = C22778 + C22761;
    const double C22956 = C22950 + C22937;
    const double C22954 = C22948 + C22931;
    const double C25096 = C25092 + C23701;
    const double C25095 = C25091 + C23699;
    const double C25548 = C25542 + C25527;
    const double C25547 = C25541 + C23697;
    const double C25545 = C25539 + C22942;
    const double C26117 = C26113 + C25302;
    const double C26115 = C26111 + C23331;
    const double C26670 = C26667 + C25532;
    const double C26843 = C26834 + C26815;
    const double C26840 = C26831 + C26806;
    const double C30254 = C30246 + C27210;
    const double C31374 = C31371 + C28058;
    const double C48072 = C48043 - C48065;
    const double C48048 = C48041 + C49256;
    const double C1122 = C1113 + C1096;
    const double C4078 = C4072 + C4051;
    const double C7962 = C7953 + C7936;
    const double C22782 = C22776 + C22755;
    const double C26844 = C26835 + C26818;
    const double C5233 = C5232 + C699;
    const double C4248 = C4242 + C4221;
    const double C22952 = C22946 + C22925;
    const double C1296 = C49290 * C1289;
    const double C8124 = C49290 * C1289;
    const double C11422 = C49265 * C1289;
    const double C23834 = C49265 * C1289;
    const double C27006 = C26785 * C1289;
    const double C1318 = C1294 + C1295;
    const double C8146 = C8122 + C8123;
    const double C11440 = C11420 + C11421;
    const double C23852 = C23832 + C23833;
    const double C27028 = C27004 + C27005;
    const double C1518 = C1494 + C1495;
    const double C6447 = C6439 + C4631;
    const double C8334 = C8310 + C8311;
    const double C28410 = C28406 + C23335;
    const double C27216 = C27192 + C27193;
    const double C48422 = ae * C48421;
    const double C1795 =
        (3 * C48341 + C48174 * C48421 + (2 * C48335 + C48174 * C48411) * ae) /
        C47945;
    const double C1959 = (C48310 * C48421) / C47945;
    const double C11754 = C49265 * C1962;
    const double C12865 = C49290 * C1962;
    const double C24166 = C49265 * C1962;
    const double C30022 = C26785 * C1962;
    const double C32813 = C49290 * C1962;
    const double C20489 = C20488 + C20486;
    const double C48524 = C48495 + C48522;
    const double C48574 = ae * C48569;
    const double C10841 = C49290 * C9943;
    const double C15271 = C49265 * C9943;
    const double C17404 = C49290 * C9943;
    const double C42360 = C49265 * C9943;
    const double C47505 = C26785 * C9943;
    const double C11282 = C11272 + C10380;
    const double C17839 = C17829 + C16946;
    const double C22084 = C22079 + C19692;
    const double C43108 = C43103 + C26107;
    const double C47931 = C47921 + C31367;
    const double C18352 = C18350 + C18001;
    const double C22458 = C22456 + C20242;
    const double C43482 = C43480 + C26663;
    const double C3318 = C2702 * C49279;
    const double C5734 = C2702 * C3859;
    const double C16115 = C2702 * C49279;
    const double C32108 = C2702 * C49308;
    const double C37619 = C2702 * C26788;
    const double C3322 = C2700 * C49279;
    const double C16118 = C2700 * C49279;
    const double C37622 = C2700 * C26788;
    const double C1327 = C1321 + C1304;
    const double C8155 = C8149 + C8132;
    const double C11447 = C11439 + C11418;
    const double C23859 = C23851 + C23830;
    const double C27037 = C27031 + C27014;
    const double C1527 = C1521 + C1504;
    const double C6453 = C6449 + C4629;
    const double C8343 = C8337 + C8320;
    const double C25316 = C25312 + C23333;
    const double C27225 = C27219 + C27202;
    const double C16975 = C16966 + C2399;
    const double C18939 = C18937 + C7233;
    const double C10409 = C10400 + C9179;
    const double C25314 = C25310 + C25297;
    const double C30255 = C30248 + C28061;
    const double C1797 =
        (3 * (C48188 + C48350 + C48350 + C48174 * C48389) + C48399 + C48399 +
         C48174 * (2 * C48389 + C48396 + C48396 +
                   C48174 * (C48197 + C48392 + C48392 +
                             C48174 * (2 * ae * C48225 + C48174 * C48205)))) /
        C47952;
    const double C1803 = C1072 * C1794;
    const double C8610 = C7912 * C1794;
    const double C9265 = C9259 * C1794;
    const double C11602 = C11402 * C1794;
    const double C24014 = C23814 * C1794;
    const double C27492 = C48097 * C1794;
    const double C1967 = C1072 * C1958;
    const double C7027 = C3864 * C1958;
    const double C8765 = C7912 * C1958;
    const double C10676 = C7910 * C1958;
    const double C11764 = C11402 * C1958;
    const double C17242 = C1070 * C1958;
    const double C24176 = C23814 * C1958;
    const double C25897 = C22568 * C1958;
    const double C27647 = C48097 * C1958;
    const double C10210 = C7912 * C9941;
    const double C10679 = C7910 * C9941;
    const double C12519 = C11402 * C9941;
    const double C16782 = C1072 * C9941;
    const double C17245 = C1070 * C9941;
    const double C19490 = C3864 * C9941;
    const double C24931 = C23814 * C9941;
    const double C25901 = C22568 * C9941;
    const double C30812 = C48097 * C9941;
    const double C18355 = C18353 * C48928;
    const double C20995 = C18353 * C49235;
    const double C34832 = C18353 * C23805;
    const double C5372 = C423 * C49257;
    const double C31747 = C423 * C49257;
    const double C2882 = C2530 * C49279;
    const double C6094 = C2530 * C49257;
    const double C15710 = C2530 * C49279;
    const double C32468 = C2530 * C49257;
    const double C37214 = C2530 * C26788;
    const double C18592 = C18591 * C48928;
    const double C592 =
        (3 * C48207 + C48181 * C48221 + C48308 + C48308 +
         C48174 *
             (2 * ae * C48305 +
              C48174 * (3 * C48219 +
                        C48181 * (2 * C48181 * C48217 +
                                  C48181 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48193))))) /
        C47952;
    const double C598 = C114 * C587;
    const double C1106 = C1072 * C587;
    const double C4071 = C3864 * C587;
    const double C7946 = C7912 * C587;
    const double C22775 = C22568 * C587;
    const double C26828 = C48097 * C587;
    const double C700 = C114 * C689;
    const double C4241 = C3864 * C689;
    const double C22945 = C22568 * C689;
    const double C48364 = ae * C48363;
    const double C1288 =
        (2 * C48282 + C48174 * C48363 + (C48280 + C48298 * C48178) * ae) /
        C47945;
    const double C1488 = (C48310 * C48363) / C47945;
    const double C48444 = C48443 + C48437;
    const double C1963 =
        (2 * (2 * ae * C48310 * C48238 + C48174 * C48459) + C48462 + C48462 +
         C48174 *
             (C48459 + C48463 + C48463 +
              C48174 * (2 * ae * C48310 * C48297 +
                        C48174 * C48310 *
                            (C48217 + (C48211 * C48212 +
                                       C48178 * bs[8] * std::pow(C48172, 8)) *
                                          C48177 * C48193)))) /
        C47952;
    const double C48562 = ae * C48560;
    const double C48561 = C48174 * C48560;
    const double C48582 = C48310 * C48560;
    const double C10207 = (C48421 + C48560 * C48465) / C47945;
    const double C10208 =
        (2 * (2 * ae * (C48270 + C48286 * C48465) + C48174 * C48692) + C48695 +
         C48695 +
         C48174 * (C48692 + C48696 + C48696 +
                   C48174 * (2 * ae * (C48286 + C48533 * C48465) +
                             C48174 * (C48530 + C48181 *
                                                    (C48211 * C48212 +
                                                     C48178 * bs[8] *
                                                         std::pow(C48172, 8)) *
                                                    C48177 * C48465)))) /
        C47952;
    const double C10391 = C7912 * C10364;
    const double C16957 = C1072 * C10364;
    const double C19694 = C3864 * C10364;
    const double C20860 = C114 * C10364;
    const double C26109 = C22568 * C10364;
    const double C31370 = C48097 * C10364;
    const double C48635 = C48598 + C48633;
    const double C48654 = ae * C48647;
    const double C48678 = C48521 + C48673;
    const double C48717 = ae * C48715;
    const double C11267 = (3 * C48666 + C48310 * C48715) / C47945;
    const double C11269 =
        (3 * C48665 + C48310 * C48714 + C48724 + C48724 +
         C48174 *
             (2 * ae *
                  (3 * C48676 +
                   C48310 *
                       (2 * C48644 + C48310 * (C48236 + C48292 * C48465))) +
              C48174 * (3 * C48677 +
                        C48310 * (2 * C48645 +
                                  C48310 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48465))))) /
        C47952;
    const double C18348 = C114 * C18339;
    const double C22454 = C3864 * C18339;
    const double C43478 = C22568 * C18339;
    const double C48064 = C48056 / C47945;
    const double C48049 = C48039 / C47956;
    const double C48047 = C47943 * C48039;
    const double C22593 = C22565 * C119;
    const double C22584 = C22565 * C118;
    const double C22578 = C22565 * C117;
    const double C22572 = C22565 * C116;
    const double C22769 = C22565 * C257;
    const double C22763 = C22565 * C256;
    const double C22757 = C22565 * C255;
    const double C22939 = C22565 * C385;
    const double C22933 = C22565 * C384;
    const double C22927 = C22565 * C383;
    const double C25088 = C22565 * C933;
    const double C25082 = C22565 * C932;
    const double C25306 = C22565 * C681;
    const double C25299 = C22565 * C2377;
    const double C25529 = C22565 * C2850;
    const double C25521 = C22565 * C931;
    const double C25516 = C22565 * C386;
    const double C26102 = C22565 * C2375;
    const double C26098 = C22565 * C680;
    const double C26660 = C22565 * C2851;
    const double C28408 = C22565 * C682;
    const double C43101 = C22565 * C3305;
    const double C43475 = C22565 * C3735;
    const double C1123 = C1114 + C1099;
    const double C1120 = C1111 + C1090;
    const double C1117 = C1108 + C1081;
    const double C1328 = C1322 + C1307;
    const double C1325 = C1319 + C1298;
    const double C1528 = C1522 + C1507;
    const double C1525 = C1519 + C1498;
    const double C16974 = C16965 + C2398;
    const double C16971 = C16962 + C2395;
    const double C16968 = C16959 + C1513;
    const double C17418 = C17412 + C16783;
    const double C17415 = C17409 + C1966;
    const double C17844 = C17840 + C16947;
    const double C32822 = C32819 + C1969;
    const double C3909 = C3901 + C3890;
    const double C3906 = C3898 + C3881;
    const double C3904 = C3896 + C3875;
    const double C3902 = C3894 + C3869;
    const double C4083 = C4077 + C4066;
    const double C4081 = C4075 + C4060;
    const double C4079 = C4073 + C4054;
    const double C4253 = C4247 + C4236;
    const double C4251 = C4245 + C4230;
    const double C4249 = C4243 + C4224;
    const double C6454 = C6450 + C4628;
    const double C6452 = C6448 + C4630;
    const double C6679 = C6673 + C4994;
    const double C6677 = C6671 + C4996;
    const double C6674 = C6668 + C4239;
    const double C7238 = C7236 + C4626;
    const double C7789 = C7787 + C4992;
    const double C18940 = C18938 + C7232;
    const double C19146 = C19144 + C7782;
    const double C19697 = C19695 + C7230;
    const double C20250 = C20247 + C7780;
    const double C22085 = C22083 + C19691;
    const double C22459 = C22457 + C20241;
    const double C7964 = C7955 + C7942;
    const double C7959 = C7950 + C7927;
    const double C7956 = C7947 + C7918;
    const double C8157 = C8151 + C8138;
    const double C8154 = C8148 + C8129;
    const double C8345 = C8339 + C8326;
    const double C8342 = C8336 + C8317;
    const double C10407 = C10398 + C9177;
    const double C10404 = C10395 + C9174;
    const double C10401 = C10392 + C8330;
    const double C10854 = C10848 + C10212;
    const double C10851 = C10845 + C8763;
    const double C11288 = C11284 + C10382;
    const double C12875 = C12872 + C8766;
    const double C7963 = C7954 + C7939;
    const double C7960 = C7951 + C7930;
    const double C7957 = C7948 + C7921;
    const double C8156 = C8150 + C8135;
    const double C8153 = C8147 + C8126;
    const double C8344 = C8338 + C8323;
    const double C8341 = C8335 + C8314;
    const double C10408 = C10399 + C9178;
    const double C10405 = C10396 + C9175;
    const double C10402 = C10393 + C8329;
    const double C10855 = C10849 + C10211;
    const double C10852 = C10846 + C8764;
    const double C11287 = C11283 + C10381;
    const double C12874 = C12871 + C8767;
    const double C1133 = C1124 + C1103;
    const double C1128 = C1119 + C1088;
    const double C1125 = C1116 + C1079;
    const double C1335 = C1329 + C1311;
    const double C1332 = C1326 + C1302;
    const double C1535 = C1529 + C1511;
    const double C1532 = C1526 + C1502;
    const double C16982 = C16973 + C16950;
    const double C16979 = C16970 + C16941;
    const double C16976 = C16967 + C16935;
    const double C17423 = C17417 + C17400;
    const double C17420 = C17414 + C17394;
    const double C17848 = C17845 + C17834;
    const double C32826 = C32823 + C32817;
    const double C1130 = C1121 + C1094;
    const double C1127 = C1118 + C1085;
    const double C16981 = C16972 + C16945;
    const double C16978 = C16969 + C16939;
    const double C3916 = C3908 + C3888;
    const double C3915 = C3907 + C3885;
    const double C3913 = C3905 + C3879;
    const double C3911 = C3903 + C3873;
    const double C4088 = C4082 + C4064;
    const double C4086 = C4080 + C4058;
    const double C4258 = C4252 + C4234;
    const double C4256 = C4250 + C4228;
    const double C6684 = C6678 + C6663;
    const double C6682 = C6676 + C6659;
    const double C6681 = C6675 + C6656;
    const double C7241 = C7239 + C7229;
    const double C7790 = C7788 + C7777;
    const double C19147 = C19145 + C19139;
    const double C19700 = C19698 + C19690;
    const double C20251 = C20249 + C20238;
    const double C7970 = C7961 + C7934;
    const double C7967 = C7958 + C7925;
    const double C10415 = C10406 + C10379;
    const double C10412 = C10403 + C10373;
    const double C22620 = C22612 + C22592;
    const double C22619 = C22611 + C22589;
    const double C22617 = C22609 + C22583;
    const double C22615 = C22607 + C22577;
    const double C22792 = C22786 + C22768;
    const double C22790 = C22784 + C22762;
    const double C22962 = C22956 + C22938;
    const double C22960 = C22954 + C22932;
    const double C25100 = C25096 + C25087;
    const double C25099 = C25095 + C25085;
    const double C25554 = C25548 + C25528;
    const double C25553 = C25547 + C25524;
    const double C25551 = C25545 + C25519;
    const double C26121 = C26117 + C26105;
    const double C26119 = C26115 + C26101;
    const double C26672 = C26670 + C26659;
    const double C26852 = C26843 + C26816;
    const double C26849 = C26840 + C26807;
    const double C30260 = C30254 + C30235;
    const double C31377 = C31374 + C31360;
    const double C26827 = C48072 * C260;
    const double C26821 = C48072 * C261;
    const double C26812 = C48072 * C262;
    const double C26803 = C48072 * C263;
    const double C26797 = C48072 * C264;
    const double C27026 = C48072 * C586;
    const double C27023 = C48072 * C583;
    const double C27017 = C48072 * C584;
    const double C27008 = C48072 * C585;
    const double C27214 = C48072 * C688;
    const double C27211 = C48072 * C685;
    const double C27205 = C48072 * C686;
    const double C27196 = C48072 * C687;
    const double C27497 = C48072 * C1285;
    const double C27494 = C48072 * C1286;
    const double C27491 = C48072 * C1287;
    const double C27652 = C48072 * C1485;
    const double C27649 = C48072 * C1486;
    const double C27646 = C48072 * C1487;
    const double C28063 = C48072 * C2385;
    const double C28060 = C48072 * C2383;
    const double C28057 = C48072 * C2381;
    const double C30605 = C48072 * C1958;
    const double C30814 = C48072 * C2384;
    const double C30811 = C48072 * C2382;
    const double C31369 = C48072 * C3309;
    const double C31366 = C48072 * C3308;
    const double C47352 = C48072 * C9941;
    const double C47507 = C48072 * C10363;
    const double C47928 = C48072 * C11266;
    const double C9257 =
        (C48072 / C47987 + ((C47943 * C48097 + C26785) * ae) / C47945) /
            C47987 -
        ((C47943 * (C48097 / C47987 + (0 * ae) / C47945) + C49265) * be) /
            C47945;
    const double C11400 =
        C48072 / C47987 - ((C47943 * C48097 + C26785) * be) / C47945;
    const double C23812 =
        C48072 / C47987 + ((C47943 * C48097 + C26785) * ae) / C47945;
    const double C48055 = C48048 * be;
    const double C1131 = C1122 + C1097;
    const double C4084 = C4078 + C4052;
    const double C7971 = C7962 + C7937;
    const double C22788 = C22782 + C22756;
    const double C26853 = C26844 + C26819;
    const double C5234 = C5233 + C5231;
    const double C4254 = C4248 + C4222;
    const double C22958 = C22952 + C22926;
    const double C1324 = C1318 + C1295;
    const double C8152 = C8146 + C8123;
    const double C11448 = C11440 + C11421;
    const double C23860 = C23852 + C23833;
    const double C27034 = C27028 + C27005;
    const double C1524 = C1518 + C1495;
    const double C6451 = C6447 + C4631;
    const double C8340 = C8334 + C8311;
    const double C28412 = C28410 + C23335;
    const double C27222 = C27216 + C27193;
    const double C1798 =
        (3 * (C48332 + C48339 + C48339 + C48174 * C48412) + C48422 + C48422 +
         C48174 * (2 * C48412 + C48419 + C48419 +
                   C48174 * (C48209 + C48415 + C48415 +
                             C48174 * (2 * ae * C48286 +
                                       C48174 * C48181 * C48217)))) /
        C47952;
    const double C1806 = C1072 * C1795;
    const double C8613 = C7912 * C1795;
    const double C9266 = C9259 * C1795;
    const double C11591 = C11402 * C1795;
    const double C24003 = C23814 * C1795;
    const double C27495 = C48097 * C1795;
    const double C1970 = C1072 * C1959;
    const double C7029 = C3864 * C1959;
    const double C8768 = C7912 * C1959;
    const double C11753 = C11402 * C1959;
    const double C13418 = C7910 * C1959;
    const double C24165 = C23814 * C1959;
    const double C25899 = C22568 * C1959;
    const double C27650 = C48097 * C1959;
    const double C30608 = C48072 * C1959;
    const double C33366 = C1070 * C1959;
    const double C20996 = C20489 * C48938;
    const double C34833 = C20489 * C48938;
    const double C48525 = C48524 + C48517;
    const double C9459 =
        (3 * (C48447 + C48451 + C48451 + C48174 * C48578) + C48574 + C48574 +
         C48174 * (2 * C48578 + C48575 + C48575 +
                   C48174 * (C48568 + C48576 + C48576 +
                             C48174 * (2 * ae * C48310 * C48236 +
                                       C48174 * C48310 * C48217)))) /
        C47952;
    const double C11286 = C11282 + C10380;
    const double C17843 = C17839 + C16946;
    const double C22086 = C22084 + C19692;
    const double C43110 = C43108 + C26107;
    const double C47935 = C47931 + C31367;
    const double C18354 = C18352 + C18347;
    const double C22460 = C22458 + C22450;
    const double C43484 = C43482 + C43474;
    const double C1333 = C1327 + C1305;
    const double C8161 = C8155 + C8133;
    const double C11455 = C11447 + C11419;
    const double C23867 = C23859 + C23831;
    const double C27043 = C27037 + C27015;
    const double C1533 = C1527 + C1505;
    const double C6457 = C6453 + C6444;
    const double C8349 = C8343 + C8321;
    const double C25320 = C25316 + C25305;
    const double C27231 = C27225 + C27203;
    const double C16984 = C16975 + C16954;
    const double C18941 = C18939 + C18934;
    const double C10418 = C10409 + C10388;
    const double C25318 = C25314 + C25298;
    const double C30261 = C30255 + C30238;
    const double C17410 = C17397 + C1967;
    const double C10847 = C10834 + C8765;
    const double C14517 = C14512 + C11764;
    const double C41606 = C41601 + C24176;
    const double C30818 = C30808 + C27647;
    const double C10850 = C10840 + C10210;
    const double C15282 = C15270 + C12519;
    const double C17413 = C17403 + C16782;
    const double C42371 = C42359 + C24931;
    const double C47511 = C47504 + C30812;
    const double C1292 =
        (2 * (2 * ae * C48277 + C48174 * C48221) + C48364 + C48364 +
         C48174 *
             (C48221 + C48361 + C48361 +
              C48174 * (2 * ae * C48301 +
                        C48174 * (2 * C48181 * C48217 +
                                  C48181 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48193))))) /
        C47952;
    const double C1317 = C1072 * C1288;
    const double C4495 = C3864 * C1288;
    const double C8145 = C7912 * C1288;
    const double C11435 = C11402 * C1288;
    const double C23199 = C22568 * C1288;
    const double C23847 = C23814 * C1288;
    const double C27027 = C48097 * C1288;
    const double C1517 = C1072 * C1488;
    const double C4633 = C3864 * C1488;
    const double C5601 = C114 * C1488;
    const double C8333 = C7912 * C1488;
    const double C23337 = C22568 * C1488;
    const double C27215 = C48097 * C1488;
    const double C48445 = ae * C48444;
    const double C1796 =
        (3 * C48329 + C48174 * C48444 + (2 * C48323 + C48174 * C48434) * ae) /
        C47945;
    const double C1960 = (C48310 * C48444) / C47945;
    const double C48563 = C48531 + C48561;
    const double C48587 = ae * C48582;
    const double C10215 = C7912 * C10207;
    const double C12523 = C11402 * C10207;
    const double C16787 = C1072 * C10207;
    const double C19492 = C3864 * C10207;
    const double C24935 = C23814 * C10207;
    const double C25903 = C22568 * C10207;
    const double C30815 = C48097 * C10207;
    const double C48636 = C48635 + C48623;
    const double C48683 = ae * C48678;
    const double C10827 = (2 * C48569 + C48310 * C48678) / C47945;
    const double C10828 =
        (2 * (2 * ae * (2 * C48567 + C48310 * C48676) + C48174 * C48714) +
         C48717 + C48717 +
         C48174 *
             (C48714 + C48718 + C48718 +
              C48174 *
                  (2 * ae * (2 * C48644 + C48310 * (C48236 + C48292 * C48465)) +
                   C48174 * (2 * C48645 +
                             C48310 * (C48217 +
                                       (C48211 * C48212 +
                                        C48178 * bs[8] * std::pow(C48172, 8)) *
                                           C48177 * C48465))))) /
        C47952;
    const double C11280 = C7912 * C11267;
    const double C17837 = C1072 * C11267;
    const double C18256 = C114 * C11267;
    const double C22082 = C3864 * C11267;
    const double C43106 = C22568 * C11267;
    const double C47929 = C48097 * C11267;
    const double C48071 = C48049 - C48064;
    const double C48054 = C48047 / C47945;
    const double C22605 = C22593 + C22594;
    const double C22602 = C22584 + C22585;
    const double C22600 = C22578 + C22579;
    const double C22598 = C22572 + C22573;
    const double C22781 = C22769 + C22770;
    const double C22779 = C22763 + C22764;
    const double C22777 = C22757 + C22758;
    const double C22951 = C22939 + C22940;
    const double C22949 = C22933 + C22934;
    const double C22947 = C22927 + C22928;
    const double C25093 = C25088 + C23700;
    const double C25090 = C25082 + C23698;
    const double C25313 = C25306 + C23332;
    const double C25311 = C25299 + C25300;
    const double C25543 = C25529 + C25530;
    const double C25540 = C25521 + C23696;
    const double C25538 = C25516 + C22943;
    const double C26112 = C26102 + C25303;
    const double C26110 = C26098 + C23330;
    const double C26668 = C26660 + C25533;
    const double C28411 = C28408 + C23334;
    const double C43107 = C43101 + C26106;
    const double C43481 = C43475 + C26662;
    const double C1132 = C1123 + C1100;
    const double C1129 = C1120 + C1091;
    const double C1126 = C1117 + C1082;
    const double C1334 = C1328 + C1308;
    const double C1331 = C1325 + C1299;
    const double C1534 = C1528 + C1508;
    const double C1531 = C1525 + C1499;
    const double C16983 = C16974 + C16952;
    const double C16980 = C16971 + C16943;
    const double C16977 = C16968 + C16937;
    const double C17424 = C17418 + C17402;
    const double C17421 = C17415 + C17396;
    const double C17847 = C17844 + C17832;
    const double C32825 = C32822 + C32815;
    const double C3917 = C3909 + C3891;
    const double C3914 = C3906 + C3882;
    const double C3912 = C3904 + C3876;
    const double C3910 = C3902 + C3870;
    const double C4089 = C4083 + C4067;
    const double C4087 = C4081 + C4061;
    const double C4085 = C4079 + C4055;
    const double C4259 = C4253 + C4237;
    const double C4257 = C4251 + C4231;
    const double C4255 = C4249 + C4225;
    const double C6458 = C6454 + C6446;
    const double C6456 = C6452 + C6442;
    const double C6685 = C6679 + C6665;
    const double C6683 = C6677 + C6661;
    const double C6680 = C6674 + C6654;
    const double C7240 = C7238 + C7227;
    const double C7791 = C7789 + C7779;
    const double C18942 = C18940 + C18936;
    const double C19148 = C19146 + C19141;
    const double C19699 = C19697 + C19688;
    const double C20252 = C20250 + C20240;
    const double C22087 = C22085 + C22078;
    const double C22461 = C22459 + C22452;
    const double C7973 = C7964 + C7943;
    const double C7968 = C7959 + C7928;
    const double C7965 = C7956 + C7919;
    const double C8163 = C8157 + C8139;
    const double C8160 = C8154 + C8130;
    const double C8351 = C8345 + C8327;
    const double C8348 = C8342 + C8318;
    const double C10416 = C10407 + C10384;
    const double C10413 = C10404 + C10375;
    const double C10410 = C10401 + C10369;
    const double C10860 = C10854 + C10837;
    const double C10857 = C10851 + C10831;
    const double C11291 = C11288 + C11277;
    const double C12878 = C12875 + C12869;
    const double C7972 = C7963 + C7940;
    const double C7969 = C7960 + C7931;
    const double C7966 = C7957 + C7922;
    const double C8162 = C8156 + C8136;
    const double C8159 = C8153 + C8127;
    const double C8350 = C8344 + C8324;
    const double C8347 = C8341 + C8315;
    const double C10417 = C10408 + C10386;
    const double C10414 = C10405 + C10377;
    const double C10411 = C10402 + C10371;
    const double C10861 = C10855 + C10839;
    const double C10858 = C10852 + C10833;
    const double C11290 = C11287 + C11275;
    const double C12877 = C12874 + C12867;
    const double C9274 = C9257 * C1285;
    const double C9267 = C9257 * C1286;
    const double C9264 = C9257 * C1287;
    const double C9372 = C9257 * C1795;
    const double C9365 = C9257 * C1794;
    const double C9470 = C9257 * C1959;
    const double C9463 = C9257 * C1958;
    const double C9949 = C9257 * C9941;
    const double C11434 = C11400 * C586;
    const double C11424 = C11400 * C585;
    const double C11415 = C11400 * C584;
    const double C11406 = C11400 * C583;
    const double C11608 = C11400 * C1285;
    const double C11603 = C11400 * C1287;
    const double C11594 = C11400 * C1286;
    const double C11770 = C11400 * C1485;
    const double C11765 = C11400 * C1487;
    const double C11756 = C11400 * C1486;
    const double C12018 = C11400 * C1795;
    const double C12014 = C11400 * C1794;
    const double C12156 = C11400 * C1959;
    const double C12152 = C11400 * C1958;
    const double C12522 = C11400 * C2384;
    const double C12518 = C11400 * C2382;
    const double C14898 = C11400 * C9941;
    const double C15280 = C11400 * C10363;
    const double C23846 = C23812 * C586;
    const double C23836 = C23812 * C585;
    const double C23827 = C23812 * C584;
    const double C23818 = C23812 * C583;
    const double C24020 = C23812 * C1285;
    const double C24015 = C23812 * C1287;
    const double C24006 = C23812 * C1286;
    const double C24182 = C23812 * C1485;
    const double C24177 = C23812 * C1487;
    const double C24168 = C23812 * C1486;
    const double C24430 = C23812 * C1795;
    const double C24426 = C23812 * C1794;
    const double C24568 = C23812 * C1959;
    const double C24564 = C23812 * C1958;
    const double C24934 = C23812 * C2384;
    const double C24930 = C23812 * C2382;
    const double C41987 = C23812 * C9941;
    const double C42369 = C23812 * C10363;
    const double C48063 = C48055 / C47945;
    const double C5735 = C5234 * C49257;
    const double C32109 = C5234 * C49257;
    const double C1330 = C1324 + C1296;
    const double C8158 = C8152 + C8124;
    const double C11456 = C11448 + C11422;
    const double C23868 = C23860 + C23834;
    const double C27040 = C27034 + C27006;
    const double C1530 = C1524 + C1496;
    const double C6455 = C6451 + C6440;
    const double C8346 = C8340 + C8312;
    const double C28414 = C28412 + C28407;
    const double C27228 = C27222 + C27194;
    const double C11592 = C49265 * C1798;
    const double C24004 = C49265 * C1798;
    const double C11610 = C11590 + C11591;
    const double C24022 = C24002 + C24003;
    const double C32818 = C32812 + C1970;
    const double C12870 = C12864 + C8768;
    const double C11772 = C11752 + C11753;
    const double C24184 = C24164 + C24165;
    const double C30027 = C30021 + C27650;
    const double C48526 = ae * C48525;
    const double C9359 =
        (4 * C48398 + C48174 * C48525 + (3 * C48388 + C48174 * C48514) * ae) /
        C47945;
    const double C9457 = (C48310 * C48525) / C47945;
    const double C14895 = C49265 * C9459;
    const double C41984 = C49265 * C9459;
    const double C11289 = C11286 + C11273;
    const double C17846 = C17843 + C17830;
    const double C22088 = C22086 + C22080;
    const double C43112 = C43110 + C43104;
    const double C47938 = C47935 + C47922;
    const double C18356 = C18354 * C48928;
    const double C17416 = C17410 + C1967;
    const double C10853 = C10847 + C8765;
    const double C14521 = C14517 + C11764;
    const double C41610 = C41606 + C24176;
    const double C30821 = C30818 + C27647;
    const double C10856 = C10850 + C10210;
    const double C15286 = C15282 + C12519;
    const double C17419 = C17413 + C16782;
    const double C42375 = C42371 + C24931;
    const double C47514 = C47511 + C30812;
    const double C1799 =
        (3 * (C48207 + C48327 + C48327 + C48174 * C48435) + C48445 + C48445 +
         C48174 *
             (2 * C48435 + C48442 + C48442 +
              C48174 * (C48219 + C48438 + C48438 +
                        C48174 * (2 * ae * C48297 +
                                  C48174 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48193))))) /
        C47952;
    const double C1809 = C1072 * C1796;
    const double C8616 = C7912 * C1796;
    const double C9275 = C9259 * C1796;
    const double C11609 = C11402 * C1796;
    const double C24021 = C23814 * C1796;
    const double C27498 = C48097 * C1796;
    const double C1973 = C1072 * C1960;
    const double C7031 = C3864 * C1960;
    const double C8771 = C7912 * C1960;
    const double C11771 = C11402 * C1960;
    const double C24183 = C23814 * C1960;
    const double C27653 = C48097 * C1960;
    const double C28952 = C22568 * C1960;
    const double C48564 = C48563 + C48556;
    const double C9460 =
        (3 * (C48453 + C48457 + C48457 + C48174 * C48591) + C48587 + C48587 +
         C48174 *
             (2 * C48591 + C48588 + C48588 +
              C48174 * (C48581 + C48589 + C48589 +
                        C48174 * (2 * ae * C48310 * C48533 +
                                  C48174 * C48310 * C48181 *
                                      (C48211 * C48212 +
                                       C48178 * bs[8] * std::pow(C48172, 8)) *
                                      C48177)))) /
        C47952;
    const double C48638 = ae * C48636;
    const double C48637 = C48174 * C48636;
    const double C48646 = C48310 * C48636;
    const double C9942 = (C48525 + C48636 * C48465) / C47945;
    const double C9944 =
        (3 * (C48665 + C48669 + C48669 + C48174 * C48687) + C48683 + C48683 +
         C48174 *
             (2 * C48687 + C48684 + C48684 +
              C48174 * (C48677 + C48685 + C48685 +
                        C48174 * (2 * ae * (C48236 + C48292 * C48465) +
                                  C48174 * (C48217 + (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                         C48177 * C48465))))) /
        C47952;
    const double C10844 = C7912 * C10827;
    const double C15281 = C11402 * C10827;
    const double C17407 = C1072 * C10827;
    const double C21946 = C3864 * C10827;
    const double C42370 = C23814 * C10827;
    const double C42970 = C22568 * C10827;
    const double C47508 = C48097 * C10827;
    const double C26820 = C48071 * C255;
    const double C26811 = C48071 * C256;
    const double C26802 = C48071 * C257;
    const double C27016 = C48071 * C579;
    const double C27007 = C48071 * C580;
    const double C27204 = C48071 * C681;
    const double C27195 = C48071 * C682;
    const double C30023 = C48071 * C1482;
    const double C30239 = C48071 * C2377;
    const double C30232 = C48071 * C680;
    const double C30806 = C48071 * C1483;
    const double C31361 = C48071 * C2375;
    const double C47502 = C48071 * C2376;
    const double C47923 = C48071 * C3305;
    const double C9256 =
        (C48071 / C47987 + ((C48098 - C47969 / C48095) * ae) / C47945) /
            C47987 -
        ((2 * (C48097 / C47987 + (0 * ae) / C47945) -
          C47969 / (C47945 * 4 * C48005)) *
         be) /
            C47945;
    const double C11399 =
        C48071 / C47987 - ((C48098 - C47969 / C48095) * be) / C47945;
    const double C23811 =
        C48071 / C47987 + ((C48098 - C47969 / C48095) * ae) / C47945;
    const double C48061 = C48054 + C48040;
    const double C22613 = C22605 + C22594;
    const double C22610 = C22602 + C22585;
    const double C22608 = C22600 + C22579;
    const double C22606 = C22598 + C22573;
    const double C22787 = C22781 + C22770;
    const double C22785 = C22779 + C22764;
    const double C22783 = C22777 + C22758;
    const double C22957 = C22951 + C22940;
    const double C22955 = C22949 + C22934;
    const double C22953 = C22947 + C22928;
    const double C25097 = C25093 + C23700;
    const double C25094 = C25090 + C23698;
    const double C25317 = C25313 + C23332;
    const double C25315 = C25311 + C25300;
    const double C25549 = C25543 + C25530;
    const double C25546 = C25540 + C23696;
    const double C25544 = C25538 + C22943;
    const double C26116 = C26112 + C25303;
    const double C26114 = C26110 + C23330;
    const double C26671 = C26668 + C25533;
    const double C28413 = C28411 + C23334;
    const double C43109 = C43107 + C26106;
    const double C43483 = C43481 + C26662;
    const double C1134 = C1128 + C1129;
    const double C33022 = C1534 + C1535;
    const double C33021 = C1535 + C1534;
    const double C17828 = C16979 + C16980;
    const double C3919 = C3914 + C3915;
    const double C3918 = C3912 + C3913;
    const double C6667 = C4258 + C4259;
    const double C6657 = C4259 + C4258;
    const double C6244 = C4257 + C4256;
    const double C6666 = C4256 + C4257;
    const double C19142 = C6684 + C6685;
    const double C19137 = C6685 + C6684;
    const double C20235 = C7791 + C7790;
    const double C22448 = C20252 + C20251;
    const double C7974 = C7968 + C7969;
    const double C13074 = C8350 + C8351;
    const double C13073 = C8351 + C8350;
    const double C11271 = C10413 + C10414;
    const double C48070 = C48062 - C48063;
    const double C11614 = C11610 + C11591;
    const double C24026 = C24022 + C24003;
    const double C32821 = C32818 + C1970;
    const double C12873 = C12870 + C8768;
    const double C11776 = C11772 + C11753;
    const double C24188 = C24184 + C24165;
    const double C30030 = C30027 + C27650;
    const double C9361 =
        (4 * (2 * C48389 + C48396 + C48396 + C48174 * C48515) + C48526 +
         C48526 +
         C48174 * (3 * C48515 + C48523 + C48523 +
                   C48174 * (2 * C48507 + C48519 + C48519 +
                             C48174 * (C48205 + C48511 + C48511 +
                                       C48174 * (2 * ae * C48236 +
                                                 C48174 * C48217))))) /
        C47952;
    const double C9364 = C9259 * C9359;
    const double C9622 = C9257 * C9359;
    const double C12015 = C11402 * C9359;
    const double C24427 = C23814 * C9359;
    const double C9462 = C9259 * C9457;
    const double C9712 = C9257 * C9457;
    const double C10677 = C7912 * C9457;
    const double C12153 = C11402 * C9457;
    const double C14756 = C11400 * C9457;
    const double C17243 = C1072 * C9457;
    const double C24565 = C23814 * C9457;
    const double C30606 = C48097 * C9457;
    const double C41845 = C23812 * C9457;
    const double C17422 = C17416 + C17398;
    const double C10859 = C10853 + C10835;
    const double C14525 = C14521 + C14513;
    const double C41614 = C41610 + C41602;
    const double C30824 = C30821 + C30809;
    const double C10862 = C10856 + C10841;
    const double C15290 = C15286 + C15271;
    const double C17425 = C17419 + C17404;
    const double C42379 = C42375 + C42360;
    const double C47517 = C47514 + C47505;
    const double C48565 = ae * C48564;
    const double C9360 =
        (4 * C48421 + C48174 * C48564 + (3 * C48411 + C48174 * C48554) * ae) /
        C47945;
    const double C9458 = (C48310 * C48564) / C47945;
    const double C48639 = C48597 + C48637;
    const double C48653 = ae * C48646;
    const double C9950 = C9259 * C9942;
    const double C10680 = C7912 * C9942;
    const double C14899 = C11402 * C9942;
    const double C17246 = C1072 * C9942;
    const double C41988 = C23814 * C9942;
    const double C47353 = C48097 * C9942;
    const double C26836 = C26820 + C26821;
    const double C26833 = C26811 + C26812;
    const double C26830 = C26802 + C26803;
    const double C27032 = C27016 + C27017;
    const double C27029 = C27007 + C27008;
    const double C27220 = C27204 + C27205;
    const double C27217 = C27195 + C27196;
    const double C30028 = C30023 + C27649;
    const double C30249 = C30239 + C28060;
    const double C30245 = C30232 + C27211;
    const double C30817 = C30806 + C27646;
    const double C31372 = C31361 + C28057;
    const double C47510 = C47502 + C30811;
    const double C47932 = C47923 + C31366;
    const double C11423 = C11399 * C580;
    const double C11414 = C11399 * C579;
    const double C11593 = C11399 * C1282;
    const double C11755 = C11399 * C1482;
    const double C14510 = C11399 * C1483;
    const double C14892 = C11399 * C1955;
    const double C15272 = C11399 * C2376;
    const double C23835 = C23811 * C580;
    const double C23826 = C23811 * C579;
    const double C24005 = C23811 * C1282;
    const double C24167 = C23811 * C1482;
    const double C41599 = C23811 * C1483;
    const double C41981 = C23811 * C1955;
    const double C42361 = C23811 * C2376;
    const double C48069 = C48061 * be;
    const double C22621 = C22613 + C22595;
    const double C22618 = C22610 + C22586;
    const double C22616 = C22608 + C22580;
    const double C22614 = C22606 + C22574;
    const double C22793 = C22787 + C22771;
    const double C22791 = C22785 + C22765;
    const double C22789 = C22783 + C22759;
    const double C22963 = C22957 + C22941;
    const double C22961 = C22955 + C22935;
    const double C22959 = C22953 + C22929;
    const double C25101 = C25097 + C25089;
    const double C25098 = C25094 + C25083;
    const double C25321 = C25317 + C25307;
    const double C25319 = C25315 + C25301;
    const double C25555 = C25549 + C25531;
    const double C25552 = C25546 + C25522;
    const double C25550 = C25544 + C25517;
    const double C26120 = C26116 + C26103;
    const double C26118 = C26114 + C26099;
    const double C26673 = C26671 + C26661;
    const double C28415 = C28413 + C28409;
    const double C43111 = C43109 + C43102;
    const double C43485 = C43483 + C43476;
    const double C1135 = C1134 + C1130;
    const double C33024 = C1533 + C33022;
    const double C33023 = C33021 + C1533;
    const double C17838 = C17828 + C16981;
    const double C20236 = C19137 * C48938;
    const double C39633 = C19137 * C48938;
    const double C20245 = C20235 * C49235;
    const double C22447 = C20235 * C48928;
    const double C39632 = C20235 * C23805;
    const double C22455 = C22448 * C48928;
    const double C7975 = C7974 + C7970;
    const double C13076 = C8349 + C13074;
    const double C13075 = C13073 + C8349;
    const double C11281 = C11271 + C10415;
    const double C48077 = C48070 + C48034;
    const double C11618 = C11614 + C11592;
    const double C24030 = C24026 + C24004;
    const double C32824 = C32821 + C32813;
    const double C12876 = C12873 + C12865;
    const double C11780 = C11776 + C11754;
    const double C24192 = C24188 + C24166;
    const double C30033 = C30030 + C30022;
    const double C14903 = C14894 + C12153;
    const double C41992 = C41983 + C24565;
    const double C9362 =
        (4 * (2 * C48412 + C48419 + C48419 + C48174 * C48552) + C48565 +
         C48565 +
         C48174 * (3 * C48552 + C48562 + C48562 +
                   C48174 * (2 * C48543 + C48558 + C48558 +
                             C48174 * (C48530 + C48551 + C48551 +
                                       C48174 * (2 * ae * C48533 +
                                                 C48174 * C48181 *
                                                     (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                     C48177))))) /
        C47952;
    const double C9373 = C9259 * C9360;
    const double C12019 = C11402 * C9360;
    const double C24431 = C23814 * C9360;
    const double C9471 = C9259 * C9458;
    const double C12157 = C11402 * C9458;
    const double C13419 = C7912 * C9458;
    const double C24569 = C23814 * C9458;
    const double C30609 = C48097 * C9458;
    const double C33367 = C1072 * C9458;
    const double C48640 = C48639 + C48631;
    const double C9707 =
        (4 * (2 * C48578 + C48575 + C48575 + C48174 * C48660) + C48653 +
         C48653 +
         C48174 * (3 * C48660 + C48654 + C48654 +
                   C48174 * (2 * C48658 + C48655 + C48655 +
                             C48174 * (C48645 + C48656 + C48656 +
                                       C48174 * (2 * ae * C48310 * C48292 +
                                                 C48174 * C48310 *
                                                     (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                     C48177))))) /
        C47952;
    const double C26845 = C26836 + C26821;
    const double C26842 = C26833 + C26812;
    const double C26839 = C26830 + C26803;
    const double C27038 = C27032 + C27017;
    const double C27035 = C27029 + C27008;
    const double C27226 = C27220 + C27205;
    const double C27223 = C27217 + C27196;
    const double C30031 = C30028 + C27649;
    const double C30256 = C30249 + C28060;
    const double C30253 = C30245 + C27211;
    const double C30820 = C30817 + C27646;
    const double C31375 = C31372 + C28057;
    const double C47513 = C47510 + C30811;
    const double C47936 = C47932 + C31366;
    const double C11441 = C11423 + C11424;
    const double C11438 = C11414 + C11415;
    const double C11611 = C11593 + C11594;
    const double C11773 = C11755 + C11756;
    const double C14516 = C14510 + C11765;
    const double C14902 = C14892 + C12152;
    const double C15283 = C15272 + C12518;
    const double C23853 = C23835 + C23836;
    const double C23850 = C23826 + C23827;
    const double C24023 = C24005 + C24006;
    const double C24185 = C24167 + C24168;
    const double C41605 = C41599 + C24177;
    const double C41991 = C41981 + C24564;
    const double C42372 = C42361 + C24930;
    const double C48076 = C48069 / C47945;
    const double C22623 = C22618 + C22619;
    const double C22622 = C22616 + C22617;
    const double C25535 = C22962 + C22963;
    const double C25520 = C22963 + C22962;
    const double C28211 = C22961 + C22960;
    const double C28610 = C22960 + C22961;
    const double C25534 = C25099 + C25098;
    const double C25525 = C25098 + C25099;
    const double C26656 = C25552 + C25553;
    const double C43472 = C26673 + C26672;
    const double C17842 = C17838 * C48928;
    const double C20248 = C20245 + C20236;
    const double C39634 = C39632 + C39633;
    const double C11285 = C11281 * C48928;
    const double C26826 = C48077 * C126;
    const double C26824 = C48077 * C125;
    const double C26809 = C48077 * C124;
    const double C26800 = C48077 * C123;
    const double C26796 = C48077 * C122;
    const double C27025 = C48077 * C261;
    const double C27024 = C48077 * C264;
    const double C27020 = C48077 * C263;
    const double C27011 = C48077 * C262;
    const double C27213 = C48077 * C389;
    const double C27212 = C48077 * C392;
    const double C27208 = C48077 * C391;
    const double C27199 = C48077 * C390;
    const double C27496 = C48077 * C585;
    const double C27493 = C48077 * C584;
    const double C27490 = C48077 * C583;
    const double C27651 = C48077 * C687;
    const double C27648 = C48077 * C686;
    const double C27645 = C48077 * C685;
    const double C28062 = C48077 * C938;
    const double C28059 = C48077 * C937;
    const double C28056 = C48077 * C936;
    const double C30607 = C48077 * C1486;
    const double C30604 = C48077 * C1487;
    const double C30813 = C48077 * C2383;
    const double C30810 = C48077 * C2381;
    const double C31368 = C48077 * C2854;
    const double C31365 = C48077 * C2855;
    const double C47351 = C48077 * C2382;
    const double C47506 = C48077 * C3308;
    const double C47927 = C48077 * C3738;
    const double C9251 =
        (((((0 - (C47943 * C48004) / C47945) * ae) / C47945 -
           (0 * be) / C47956 + (2 * C48006) / C47945) /
              C47987 -
          ((C47943 * C48066 + 0) * be) / C47945 + C48023 - C48046) /
             C47987 +
         ((C47943 * C48082 + 0) * ae) / C47945) /
            C47987 -
        ((C47943 * (C48082 / C47987 +
                    ((C47943 * C48077 + C49084) * ae) / C47945 + C48072) +
          C49329) *
         be) /
            C47945 +
        C48077 / C47987 + ((C47943 * C48072 + C49091) * ae) / C47945 +
        2 * (C48034 / C47987 - (0 * be) / C47945);
    const double C9253 =
        (C48082 / C47987 + ((C47943 * C48077 + C49084) * ae) / C47945 +
         C48072) /
            C47987 -
        ((C47943 * (C48077 / C47987 +
                    ((C47943 * C48072 + C49091) * ae) / C47945 + C48098) +
          C49325) *
         be) /
            C47945 +
        2 * (C48072 / C47987 + ((C47943 * C48097 + C26785) * ae) / C47945);
    const double C9255 =
        (C48077 / C47987 + ((C47943 * C48072 + C49091) * ae) / C47945 +
         C48098) /
            C47987 -
        ((C47943 *
              (C48072 / C47987 + ((C47943 * C48097 + C26785) * ae) / C47945) +
          C49315) *
         be) /
            C47945 +
        3 * (C48097 / C47987 + (0 * ae) / C47945);
    const double C11396 =
        C48082 / C47987 - ((C47943 * C48077 + C49084) * be) / C47945 + C48072;
    const double C11398 =
        C48077 / C47987 - ((C47943 * C48072 + C49091) * be) / C47945 + C48098;
    const double C23808 =
        C48082 / C47987 + ((C47943 * C48077 + C49084) * ae) / C47945 + C48072;
    const double C23810 =
        C48077 / C47987 + ((C47943 * C48072 + C49091) * ae) / C47945 + C48098;
    const double C14907 = C14903 + C12153;
    const double C41996 = C41992 + C24565;
    const double C48641 = ae * C48640;
    const double C9616 =
        (5 * C48525 + C48174 * C48640 + (4 * C48514 + C48174 * C48627) * ae) /
        C47945;
    const double C9706 = (C48310 * C48640) / C47945;
    const double C26854 = C26845 + C26822;
    const double C26851 = C26842 + C26813;
    const double C26848 = C26839 + C26804;
    const double C27044 = C27038 + C27018;
    const double C27041 = C27035 + C27009;
    const double C27232 = C27226 + C27206;
    const double C27229 = C27223 + C27197;
    const double C30034 = C30031 + C30024;
    const double C30262 = C30256 + C30240;
    const double C30259 = C30253 + C30233;
    const double C30823 = C30820 + C30807;
    const double C31378 = C31375 + C31362;
    const double C47516 = C47513 + C47503;
    const double C47939 = C47936 + C47924;
    const double C11449 = C11441 + C11424;
    const double C11446 = C11438 + C11415;
    const double C11615 = C11611 + C11594;
    const double C11777 = C11773 + C11756;
    const double C14520 = C14516 + C11765;
    const double C14906 = C14902 + C12152;
    const double C15287 = C15283 + C12518;
    const double C23861 = C23853 + C23836;
    const double C23858 = C23850 + C23827;
    const double C24027 = C24023 + C24006;
    const double C24189 = C24185 + C24168;
    const double C41609 = C41605 + C24177;
    const double C41995 = C41991 + C24564;
    const double C42376 = C42372 + C24930;
    const double C48080 = C48031 - C48076;
    const double C26657 = C25525 * C48938;
    const double C46691 = C25525 * C48938;
    const double C26666 = C26656 * C23805;
    const double C43471 = C26656 * C48928;
    const double C46690 = C26656 * C49235;
    const double C43479 = C43472 * C48928;
    const double C9271 = C9251 * C124;
    const double C9270 = C9251 * C123;
    const double C9261 = C9251 * C122;
    const double C9369 = C9251 * C263;
    const double C9368 = C9251 * C264;
    const double C9467 = C9251 * C391;
    const double C9466 = C9251 * C392;
    const double C9619 = C9251 * C583;
    const double C9709 = C9251 * C685;
    const double C9946 = C9251 * C936;
    const double C9272 = C9253 * C262;
    const double C9269 = C9253 * C263;
    const double C9262 = C9253 * C264;
    const double C9370 = C9253 * C584;
    const double C9367 = C9253 * C583;
    const double C9468 = C9253 * C686;
    const double C9465 = C9253 * C685;
    const double C9620 = C9253 * C1287;
    const double C9710 = C9253 * C1487;
    const double C9947 = C9253 * C2381;
    const double C9273 = C9255 * C585;
    const double C9268 = C9255 * C584;
    const double C9263 = C9255 * C583;
    const double C9371 = C9255 * C1286;
    const double C9366 = C9255 * C1287;
    const double C9469 = C9255 * C1486;
    const double C9464 = C9255 * C1487;
    const double C9621 = C9255 * C1794;
    const double C9711 = C9255 * C1958;
    const double C9948 = C9255 * C2382;
    const double C11432 = C11396 * C125;
    const double C11430 = C11396 * C124;
    const double C11409 = C11396 * C123;
    const double C11404 = C11396 * C122;
    const double C11606 = C11396 * C262;
    const double C11605 = C11396 * C264;
    const double C11600 = C11396 * C263;
    const double C11768 = C11396 * C390;
    const double C11767 = C11396 * C392;
    const double C11762 = C11396 * C391;
    const double C12016 = C11396 * C584;
    const double C12012 = C11396 * C583;
    const double C12154 = C11396 * C686;
    const double C12150 = C11396 * C685;
    const double C12520 = C11396 * C937;
    const double C12516 = C11396 * C936;
    const double C14754 = C11396 * C1487;
    const double C14896 = C11396 * C2381;
    const double C15278 = C11396 * C2855;
    const double C11433 = C11398 * C261;
    const double C11427 = C11398 * C262;
    const double C11412 = C11398 * C263;
    const double C11405 = C11398 * C264;
    const double C11607 = C11398 * C585;
    const double C11604 = C11398 * C583;
    const double C11597 = C11398 * C584;
    const double C11769 = C11398 * C687;
    const double C11766 = C11398 * C685;
    const double C11759 = C11398 * C686;
    const double C12017 = C11398 * C1286;
    const double C12013 = C11398 * C1287;
    const double C12155 = C11398 * C1486;
    const double C12151 = C11398 * C1487;
    const double C12521 = C11398 * C2383;
    const double C12517 = C11398 * C2381;
    const double C14755 = C11398 * C1958;
    const double C14897 = C11398 * C2382;
    const double C15279 = C11398 * C3308;
    const double C23844 = C23808 * C125;
    const double C23842 = C23808 * C124;
    const double C23821 = C23808 * C123;
    const double C23816 = C23808 * C122;
    const double C24018 = C23808 * C262;
    const double C24017 = C23808 * C264;
    const double C24012 = C23808 * C263;
    const double C24180 = C23808 * C390;
    const double C24179 = C23808 * C392;
    const double C24174 = C23808 * C391;
    const double C24428 = C23808 * C584;
    const double C24424 = C23808 * C583;
    const double C24566 = C23808 * C686;
    const double C24562 = C23808 * C685;
    const double C24932 = C23808 * C937;
    const double C24928 = C23808 * C936;
    const double C41843 = C23808 * C1487;
    const double C41985 = C23808 * C2381;
    const double C42367 = C23808 * C2855;
    const double C23845 = C23810 * C261;
    const double C23839 = C23810 * C262;
    const double C23824 = C23810 * C263;
    const double C23817 = C23810 * C264;
    const double C24019 = C23810 * C585;
    const double C24016 = C23810 * C583;
    const double C24009 = C23810 * C584;
    const double C24181 = C23810 * C687;
    const double C24178 = C23810 * C685;
    const double C24171 = C23810 * C686;
    const double C24429 = C23810 * C1286;
    const double C24425 = C23810 * C1287;
    const double C24567 = C23810 * C1486;
    const double C24563 = C23810 * C1487;
    const double C24933 = C23810 * C2383;
    const double C24929 = C23810 * C2381;
    const double C41844 = C23810 * C1958;
    const double C41986 = C23810 * C2382;
    const double C42368 = C23810 * C3308;
    const double C14911 = C14907 + C14895;
    const double C42000 = C41996 + C41984;
    const double C9617 =
        (5 * (3 * C48515 + C48523 + C48523 + C48174 * C48629) + C48641 +
         C48641 +
         C48174 *
             (4 * C48629 + C48638 + C48638 +
              C48174 *
                  (3 * C48621 + C48634 + C48634 +
                   C48174 * (2 * C48613 + C48628 + C48628 +
                             C48174 * (C48217 + C48617 + C48617 +
                                       C48174 * (2 * ae * C48292 +
                                                 C48174 *
                                                     (C48211 * C48212 +
                                                      C48178 * bs[8] *
                                                          std::pow(C48172, 8)) *
                                                     C48177)))))) /
        C47952;
    const double C9623 = C9259 * C9616;
    const double C9713 = C9259 * C9706;
    const double C14757 = C11402 * C9706;
    const double C41846 = C23814 * C9706;
    const double C11457 = C11449 + C11425;
    const double C11454 = C11446 + C11416;
    const double C11619 = C11615 + C11595;
    const double C11781 = C11777 + C11757;
    const double C14524 = C14520 + C14511;
    const double C14910 = C14906 + C14893;
    const double C15291 = C15287 + C15273;
    const double C23869 = C23861 + C23837;
    const double C23866 = C23858 + C23828;
    const double C24031 = C24027 + C24007;
    const double C24193 = C24189 + C24169;
    const double C41613 = C41609 + C41600;
    const double C41999 = C41995 + C41982;
    const double C42380 = C42376 + C42362;
    const double C48083 = C48080 - C48014;
    const double C26669 = C26666 + C26657;
    const double C46692 = C46690 + C46691;
    const double C26823 = C48083 * C118;
    const double C26808 = C48083 * C117;
    const double C26799 = C48083 * C116;
    const double C27019 = C48083 * C257;
    const double C27010 = C48083 * C256;
    const double C27207 = C48083 * C385;
    const double C27198 = C48083 * C384;
    const double C30025 = C48083 * C681;
    const double C30241 = C48083 * C932;
    const double C30230 = C48083 * C386;
    const double C30804 = C48083 * C680;
    const double C31363 = C48083 * C931;
    const double C47500 = C48083 * C2375;
    const double C47925 = C48083 * C2851;
    const double C9250 =
        (((ae * -2 * C48004) / C48005 -
          (((C47943 * C48027) / C47952 + 2 * C48066) * be) / C47945 -
          C48021 / C47952) /
             C47987 +
         ((C47943 * C48081 + 2 * C48082) * ae) / C47945) /
            C47987 -
        ((C47943 * (C48081 / C47987 +
                    ((C47943 * C48083 + 2 * C48077) * ae) / C47945 + C48071) +
          2 * (C48082 / C47987 + ((C47943 * C48077 + C49084) * ae) / C47945 +
               C48072)) *
         be) /
            C47945 +
        C48083 / C47987 + ((C47943 * C48071 + 2 * C48072) * ae) / C47945 +
        (-2 * C47961) / (C47945 * 4 * C47952);
    const double C9252 =
        (C48081 / C47987 + ((C47943 * C48083 + 2 * C48077) * ae) / C47945 +
         C48071) /
            C47987 -
        ((C47943 * (C48083 / C47987 +
                    ((C47943 * C48071 + 2 * C48072) * ae) / C47945 +
                    (-2 * C47961) / C48095) +
          2 * (C48077 / C47987 + ((C47943 * C48072 + C49091) * ae) / C47945 +
               C48098)) *
         be) /
            C47945 +
        2 * (C48071 / C47987 + ((C48098 - C47969 / C48095) * ae) / C47945);
    const double C9254 =
        (C48083 / C47987 + ((C47943 * C48071 + 2 * C48072) * ae) / C47945 +
         (-2 * C47961) / C48095) /
            C47987 -
        ((C47943 *
              (C48071 / C47987 + ((C48098 - C47969 / C48095) * ae) / C47945) +
          2 * (C48072 / C47987 + ((C47943 * C48097 + C26785) * ae) / C47945)) *
         be) /
            C47945 +
        (-3 * C47961) / (C47945 * 4 * C48005);
    const double C11395 = C48081 / C47987 -
                          ((C47943 * C48083 + 2 * C48077) * be) / C47945 +
                          C48071;
    const double C11397 = C48083 / C47987 -
                          ((C47943 * C48071 + 2 * C48072) * be) / C47945 +
                          (-2 * C47961) / C48095;
    const double C23807 = C48081 / C47987 +
                          ((C47943 * C48083 + 2 * C48077) * ae) / C47945 +
                          C48071;
    const double C23809 = C48083 / C47987 +
                          ((C47943 * C48071 + 2 * C48072) * ae) / C47945 +
                          (-2 * C47961) / C48095;
    const double C26837 = C26823 + C26824;
    const double C26832 = C26808 + C26809;
    const double C26829 = C26799 + C26800;
    const double C27033 = C27019 + C27020;
    const double C27030 = C27010 + C27011;
    const double C27221 = C27207 + C27208;
    const double C27218 = C27198 + C27199;
    const double C30029 = C30025 + C27648;
    const double C30250 = C30241 + C28059;
    const double C30244 = C30230 + C27212;
    const double C30816 = C30804 + C27645;
    const double C31373 = C31363 + C28056;
    const double C47509 = C47500 + C30810;
    const double C47933 = C47925 + C31365;
    const double C11429 = C11395 * C117;
    const double C11408 = C11395 * C116;
    const double C11599 = C11395 * C257;
    const double C11761 = C11395 * C385;
    const double C14506 = C11395 * C386;
    const double C14888 = C11395 * C680;
    const double C15276 = C11395 * C931;
    const double C11426 = C11397 * C256;
    const double C11411 = C11397 * C257;
    const double C11596 = C11397 * C579;
    const double C11758 = C11397 * C681;
    const double C14508 = C11397 * C680;
    const double C14890 = C11397 * C1483;
    const double C15274 = C11397 * C2375;
    const double C23841 = C23807 * C117;
    const double C23820 = C23807 * C116;
    const double C24011 = C23807 * C257;
    const double C24173 = C23807 * C385;
    const double C41595 = C23807 * C386;
    const double C41977 = C23807 * C680;
    const double C42365 = C23807 * C931;
    const double C23838 = C23809 * C256;
    const double C23823 = C23809 * C257;
    const double C24008 = C23809 * C579;
    const double C24170 = C23809 * C681;
    const double C41597 = C23809 * C680;
    const double C41979 = C23809 * C1483;
    const double C42363 = C23809 * C2375;
    const double C26846 = C26837 + C26824;
    const double C26841 = C26832 + C26809;
    const double C26838 = C26829 + C26800;
    const double C27039 = C27033 + C27020;
    const double C27036 = C27030 + C27011;
    const double C27227 = C27221 + C27208;
    const double C27224 = C27218 + C27199;
    const double C30032 = C30029 + C27648;
    const double C30257 = C30250 + C28059;
    const double C30252 = C30244 + C27212;
    const double C30819 = C30816 + C27645;
    const double C31376 = C31373 + C28056;
    const double C47512 = C47509 + C30810;
    const double C47937 = C47933 + C31365;
    const double C11443 = C11429 + C11430;
    const double C11436 = C11408 + C11409;
    const double C11613 = C11599 + C11600;
    const double C11775 = C11761 + C11762;
    const double C14514 = C14506 + C11767;
    const double C14900 = C14888 + C12150;
    const double C15285 = C15276 + C12516;
    const double C11442 = C11426 + C11427;
    const double C11437 = C11411 + C11412;
    const double C11612 = C11596 + C11597;
    const double C11774 = C11758 + C11759;
    const double C14515 = C14508 + C11766;
    const double C14901 = C14890 + C12151;
    const double C15284 = C15274 + C12517;
    const double C23855 = C23841 + C23842;
    const double C23848 = C23820 + C23821;
    const double C24025 = C24011 + C24012;
    const double C24187 = C24173 + C24174;
    const double C41603 = C41595 + C24179;
    const double C41989 = C41977 + C24562;
    const double C42374 = C42365 + C24928;
    const double C23854 = C23838 + C23839;
    const double C23849 = C23823 + C23824;
    const double C24024 = C24008 + C24009;
    const double C24186 = C24170 + C24171;
    const double C41604 = C41597 + C24178;
    const double C41990 = C41979 + C24563;
    const double C42373 = C42363 + C24929;
    const double C26855 = C26846 + C26825;
    const double C26850 = C26841 + C26810;
    const double C26847 = C26838 + C26801;
    const double C27045 = C27039 + C27021;
    const double C27042 = C27036 + C27012;
    const double C27233 = C27227 + C27209;
    const double C27230 = C27224 + C27200;
    const double C30035 = C30032 + C30026;
    const double C30263 = C30257 + C30242;
    const double C30258 = C30252 + C30231;
    const double C30822 = C30819 + C30805;
    const double C31379 = C31376 + C31364;
    const double C47515 = C47512 + C47501;
    const double C47940 = C47937 + C47926;
    const double C11451 = C11443 + C11430;
    const double C11444 = C11436 + C11409;
    const double C11617 = C11613 + C11600;
    const double C11779 = C11775 + C11762;
    const double C14518 = C14514 + C11767;
    const double C14904 = C14900 + C12150;
    const double C15289 = C15285 + C12516;
    const double C11450 = C11442 + C11427;
    const double C11445 = C11437 + C11412;
    const double C11616 = C11612 + C11597;
    const double C11778 = C11774 + C11759;
    const double C14519 = C14515 + C11766;
    const double C14905 = C14901 + C12151;
    const double C15288 = C15284 + C12517;
    const double C23863 = C23855 + C23842;
    const double C23856 = C23848 + C23821;
    const double C24029 = C24025 + C24012;
    const double C24191 = C24187 + C24174;
    const double C41607 = C41603 + C24179;
    const double C41993 = C41989 + C24562;
    const double C42378 = C42374 + C24928;
    const double C23862 = C23854 + C23839;
    const double C23857 = C23849 + C23824;
    const double C24028 = C24024 + C24009;
    const double C24190 = C24186 + C24171;
    const double C41608 = C41604 + C24178;
    const double C41994 = C41990 + C24563;
    const double C42377 = C42373 + C24929;
    const double C26856 = C26850 + C26851;
    const double C30243 = C27232 + C27233;
    const double C30236 = C27233 + C27232;
    const double C47920 = C31379 + C31378;
    const double C11459 = C11451 + C11431;
    const double C11452 = C11444 + C11410;
    const double C11621 = C11617 + C11601;
    const double C11783 = C11779 + C11763;
    const double C14522 = C14518 + C14507;
    const double C14908 = C14904 + C14889;
    const double C15293 = C15289 + C15277;
    const double C11458 = C11450 + C11428;
    const double C11453 = C11445 + C11413;
    const double C11620 = C11616 + C11598;
    const double C11782 = C11778 + C11760;
    const double C14523 = C14519 + C14509;
    const double C14909 = C14905 + C14891;
    const double C15292 = C15288 + C15275;
    const double C23871 = C23863 + C23843;
    const double C23864 = C23856 + C23822;
    const double C24033 = C24029 + C24013;
    const double C24195 = C24191 + C24175;
    const double C41611 = C41607 + C41596;
    const double C41997 = C41993 + C41978;
    const double C42382 = C42378 + C42366;
    const double C23870 = C23862 + C23840;
    const double C23865 = C23857 + C23825;
    const double C24032 = C24028 + C24010;
    const double C24194 = C24190 + C24172;
    const double C41612 = C41608 + C41598;
    const double C41998 = C41994 + C41980;
    const double C42381 = C42377 + C42364;
    const double C26857 = C26856 + C26852;
    const double C30251 = C27231 + C30243;
    const double C30247 = C30236 + C27231;
    const double C47930 = C47920 + C31377;
    const double C47934 = C47930 * C48928;
    d2ee[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                (((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                   C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                   C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                      C48933 +
                  (C26847 + C26848 + C26849) * C48941 + C26857 * C26788) *
                     C49043 * C49014 * C48997 * C110 -
                 ((C26853 + C26854 + C26855) * C26788 +
                  (C26852 + C26851 + C26850) * C48941 +
                  (C26849 + C26848 + C26847) * C48933) *
                     C49043 * C49014 * C48997 * C111 +
                 (C26857 * C48933 + (C26855 + C26854 + C26853) * C48941 +
                  (C48083 * C119 + C26826 + C26826 + C49084 * C133 +
                   C48071 * C254 + C26827 + C26827 + C49091 * C266 +
                   C26793 * C582 + C26828 + C26828 + C26785 * C592) *
                      C26788) *
                     C49043 * C49014 * C48997 * C112)) /
               (p * q * std::sqrt(p + q));
    d2ee[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                    C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                    C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                       C48933 +
                   (C26847 + C26848 + C26849) * C48941 + C26857 * C26788) *
                      C49043 * C49014 * C250 -
                  ((C27040 + C27041 + C27042) * C26788 +
                   (C27043 + C27044 + C27045) * C48941 +
                   (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
                    C48071 * C578 + C27023 + C27023 + C49091 * C588 +
                    C48083 * C258 + C27024 + C27024 + C49084 * C270) *
                       C48933) *
                      C49043 * C49014 * C49285) *
                     C252 +
                 (((C27045 + C27044 + C27043) * C48933 +
                   (C27042 + C27041 + C27040) * C48941 +
                   (C48083 * C255 + C27025 + C27025 + C49084 * C267 +
                    C48071 * C581 + C27026 + C27026 + C49091 * C591 +
                    C26793 * C1284 + C27027 + C27027 + C26785 * C1292) *
                       C26788) *
                      C49043 * C49014 * C49285 -
                  ((C26853 + C26854 + C26855) * C26788 +
                   (C26852 + C26851 + C26850) * C48941 +
                   (C26849 + C26848 + C26847) * C48933) *
                      C49043 * C49014 * C250) *
                     C49283)) /
               (p * q * std::sqrt(p + q));
    d2ee[2] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                    C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                    C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                       C48933 +
                   (C26847 + C26848 + C26849) * C48941 + C26857 * C26788) *
                      C49043 * C380 -
                  ((C27228 + C27229 + C27230) * C26788 +
                   (C27231 + C27232 + C27233) * C48941 +
                   (C26793 * C1483 + C27210 + C27210 + C26785 * C1491 +
                    C48071 * C680 + C27211 + C27211 + C49091 * C690 +
                    C48083 * C386 + C27212 + C27212 + C49084 * C398) *
                       C48933) *
                      C49043 * C49287) *
                     C48997 * C252 +
                 (((C27233 + C27232 + C27231) * C48933 +
                   (C27230 + C27229 + C27228) * C48941 +
                   (C48083 * C383 + C27213 + C27213 + C49084 * C395 +
                    C48071 * C683 + C27214 + C27214 + C49091 * C693 +
                    C26793 * C1484 + C27215 + C27215 + C26785 * C1492) *
                       C26788) *
                      C49043 * C49287 -
                  ((C26853 + C26854 + C26855) * C26788 +
                   (C26852 + C26851 + C26850) * C48941 +
                   (C26849 + C26848 + C26847) * C48933) *
                      C49043 * C380) *
                     C48997 * C49283)) /
               (p * q * std::sqrt(p + q));
    d2ee[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                    C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                    C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                       C48933 +
                   (C26847 + C26848 + C26849) * C48941 + C26857 * C26788) *
                      C49043 * C49014 * C508 -
                  ((C27040 + C27041 + C27042) * C26788 +
                   (C27043 + C27044 + C27045) * C48941 +
                   (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
                    C48071 * C578 + C27023 + C27023 + C49091 * C588 +
                    C48083 * C258 + C27024 + C27024 + C49084 * C270) *
                       C48933) *
                      C49043 * C49014 * C49285) *
                     C510 +
                 (((C27045 + C27044 + C27043) * C48933 +
                   (C27042 + C27041 + C27040) * C48941 +
                   (C48083 * C255 + C27025 + C27025 + C49084 * C267 +
                    C48071 * C581 + C27026 + C27026 + C49091 * C591 +
                    C26793 * C1284 + C27027 + C27027 + C26785 * C1292) *
                       C26788) *
                      C49043 * C49014 * C49285 -
                  ((C26853 + C26854 + C26855) * C26788 +
                   (C26852 + C26851 + C26850) * C48941 +
                   (C26849 + C26848 + C26847) * C48933) *
                      C49043 * C49014 * C508) *
                     C49283)) /
               (p * q * std::sqrt(p + q));
    d2ee[4] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                (((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                   C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                   C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                      C48933 +
                  (C26847 + C26848 + C26849) * C48941 + C26857 * C26788) *
                     C49043 * C49014 * C574 -
                 ((C27040 + C27041 + C27042) * C26788 +
                  (C27043 + C27044 + C27045) * C48941 +
                  (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
                   C48071 * C578 + C27023 + C27023 + C49091 * C588 +
                   C48083 * C258 + C27024 + C27024 + C49084 * C270) *
                      C48933) *
                     C49043 * C49014 * C575 +
                 ((C48083 * C578 + C27490 + C27490 + C49084 * C588 +
                   C48071 * C1283 + C27491 + C27491 + C49091 * C1291 +
                   C26793 * C1791 + C27492 + C27492 + C26785 * C1797) *
                      C48933 +
                  (C48083 * C579 + C27493 + C27493 + C49084 * C589 +
                   C48071 * C1282 + C27494 + C27494 + C49091 * C1290 +
                   C26793 * C1792 + C27495 + C27495 + C26785 * C1798) *
                      C48941 +
                  (C48083 * C580 + C27496 + C27496 + C49084 * C590 +
                   C48071 * C1281 + C27497 + C27497 + C49091 * C1289 +
                   C26793 * C1793 + C27498 + C27498 + C26785 * C1799) *
                      C26788) *
                     C49043 * C49014 * C576) *
                C48963) /
               (p * q * std::sqrt(p + q));
    d2ee[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                    C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                    C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                       C48933 +
                   (C26847 + C26848 + C26849) * C48941 + C26857 * C26788) *
                      C49043 * C380 -
                  ((C27228 + C27229 + C27230) * C26788 +
                   (C27231 + C27232 + C27233) * C48941 +
                   (C26793 * C1483 + C27210 + C27210 + C26785 * C1491 +
                    C48071 * C680 + C27211 + C27211 + C49091 * C690 +
                    C48083 * C386 + C27212 + C27212 + C49084 * C398) *
                       C48933) *
                      C49043 * C49287) *
                     C508 +
                 (((C48083 * C680 + C27645 + C27645 + C49084 * C690 +
                    C48071 * C1483 + C27646 + C27646 + C49091 * C1491 +
                    C26793 * C1955 + C27647 + C27647 + C26785 * C1961) *
                       C48933 +
                   (C48083 * C681 + C27648 + C27648 + C49084 * C691 +
                    C48071 * C1482 + C27649 + C27649 + C49091 * C1490 +
                    C26793 * C1956 + C27650 + C27650 + C26785 * C1962) *
                       C48941 +
                   (C48083 * C682 + C27651 + C27651 + C49084 * C692 +
                    C48071 * C1481 + C27652 + C27652 + C49091 * C1489 +
                    C26793 * C1957 + C27653 + C27653 + C26785 * C1963) *
                       C26788) *
                      C49043 * C49287 -
                  ((C27040 + C27041 + C27042) * C26788 +
                   (C27043 + C27044 + C27045) * C48941 +
                   (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
                    C48071 * C578 + C27023 + C27023 + C49091 * C588 +
                    C48083 * C258 + C27024 + C27024 + C49084 * C270) *
                       C48933) *
                      C49043 * C380) *
                     C49285) *
                C48963) /
               (p * q * std::sqrt(p + q));
    d2ee[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                    C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                    C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                       C48933 +
                   (C26847 + C26848 + C26849) * C48941 + C26857 * C26788) *
                      C49043 * C782 -
                  ((C27228 + C27229 + C27230) * C26788 +
                   (C27231 + C27232 + C27233) * C48941 +
                   (C26793 * C1483 + C27210 + C27210 + C26785 * C1491 +
                    C48071 * C680 + C27211 + C27211 + C49091 * C690 +
                    C48083 * C386 + C27212 + C27212 + C49084 * C398) *
                       C48933) *
                      C49043 * C49287) *
                     C48997 * C510 +
                 (((C27233 + C27232 + C27231) * C48933 +
                   (C27230 + C27229 + C27228) * C48941 +
                   (C48083 * C383 + C27213 + C27213 + C49084 * C395 +
                    C48071 * C683 + C27214 + C27214 + C49091 * C693 +
                    C26793 * C1484 + C27215 + C27215 + C26785 * C1492) *
                       C26788) *
                      C49043 * C49287 -
                  ((C26853 + C26854 + C26855) * C26788 +
                   (C26852 + C26851 + C26850) * C48941 +
                   (C26849 + C26848 + C26847) * C48933) *
                      C49043 * C782) *
                     C48997 * C49283)) /
               (p * q * std::sqrt(p + q));
    d2ee[7] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                    C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                    C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                       C48933 +
                   (C26847 + C26848 + C26849) * C48941 + C26857 * C26788) *
                      C49043 * C782 -
                  ((C27228 + C27229 + C27230) * C26788 +
                   (C27231 + C27232 + C27233) * C48941 +
                   (C26793 * C1483 + C27210 + C27210 + C26785 * C1491 +
                    C48071 * C680 + C27211 + C27211 + C49091 * C690 +
                    C48083 * C386 + C27212 + C27212 + C49084 * C398) *
                       C48933) *
                      C49043 * C49287) *
                     C250 +
                 (((C48083 * C680 + C27645 + C27645 + C49084 * C690 +
                    C48071 * C1483 + C27646 + C27646 + C49091 * C1491 +
                    C26793 * C1955 + C27647 + C27647 + C26785 * C1961) *
                       C48933 +
                   (C48083 * C681 + C27648 + C27648 + C49084 * C691 +
                    C48071 * C1482 + C27649 + C27649 + C49091 * C1490 +
                    C26793 * C1956 + C27650 + C27650 + C26785 * C1962) *
                       C48941 +
                   (C48083 * C682 + C27651 + C27651 + C49084 * C692 +
                    C48071 * C1481 + C27652 + C27652 + C49091 * C1489 +
                    C26793 * C1957 + C27653 + C27653 + C26785 * C1963) *
                       C26788) *
                      C49043 * C49287 -
                  ((C27040 + C27041 + C27042) * C26788 +
                   (C27043 + C27044 + C27045) * C48941 +
                   (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
                    C48071 * C578 + C27023 + C27023 + C49091 * C588 +
                    C48083 * C258 + C27024 + C27024 + C49084 * C270) *
                       C48933) *
                      C49043 * C782) *
                     C49285) *
                C48963) /
               (p * q * std::sqrt(p + q));
    d2ee[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                (((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                   C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                   C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                      C48933 +
                  (C26847 + C26848 + C26849) * C48941 + C26857 * C26788) *
                     C49043 * C928 -
                 ((C27228 + C27229 + C27230) * C26788 +
                  (C27231 + C27232 + C27233) * C48941 +
                  (C26793 * C1483 + C27210 + C27210 + C26785 * C1491 +
                   C48071 * C680 + C27211 + C27211 + C49091 * C690 +
                   C48083 * C386 + C27212 + C27212 + C49084 * C398) *
                      C48933) *
                     C49043 * C929 +
                 ((C48083 * C931 + C28056 + C28056 + C49084 * C941 +
                   C48071 * C2375 + C28057 + C28057 + C49091 * C2387 +
                   C26793 * C2376 + C28058 + C28058 + C26785 * C2388) *
                      C48933 +
                  (C48083 * C932 + C28059 + C28059 + C49084 * C942 +
                   C48071 * C2377 + C28060 + C28060 + C49091 * C2389 +
                   C26793 * C2378 + C28061 + C28061 + C26785 * C2390) *
                      C48941 +
                  (C48083 * C933 + C28062 + C28062 + C49084 * C943 +
                   C48071 * C2379 + C28063 + C28063 + C49091 * C2391 +
                   C26793 * C2380 + C28064 + C28064 + C26785 * C2392) *
                      C26788) *
                     C49043 * C930) *
                C48997 * C48963) /
               (p * q * std::sqrt(p + q));
    d2ee[9] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
             C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 + C26798 +
             C26785 * C588) *
                C23805 +
            (C26847 + C26848 + C26849) * C48938) *
               C49258 +
           ((C48083 * C386 + C27212 + C27212 + C49084 * C398 + C48071 * C680 +
             C27211 + C27211 + C49091 * C690 + C26793 * C1483 + C27210 +
             C27210 + C26785 * C1491) *
                C23805 +
            (C27233 + C27232 + C27231) * C48938) *
               C49130) *
              C49014 * C48997 * C110 -
          (((C27228 + C27229 + C27230) * C48938 +
            (C27231 + C27232 + C27233) * C23805) *
               C49130 +
           ((C26852 + C26851 + C26850) * C48938 +
            (C26849 + C26848 + C26847) * C23805) *
               C49258) *
              C49014 * C48997 * C111 +
          ((C26857 * C23805 + (C26855 + C26854 + C26853) * C48938) * C49258 +
           ((C27230 + C27229 + C27228) * C23805 +
            (C48083 * C383 + C27213 + C27213 + C49084 * C395 + C48071 * C683 +
             C27214 + C27214 + C49091 * C693 + C26793 * C1484 + C27215 +
             C27215 + C26785 * C1492) *
                C48938) *
               C49130) *
              C49014 * C48997 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[10] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                      C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                      C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                         C23805 +
                     (C26847 + C26848 + C26849) * C48938) *
                        C49258 +
                    ((C48083 * C386 + C27212 + C27212 + C49084 * C398 +
                      C48071 * C680 + C27211 + C27211 + C49091 * C690 +
                      C26793 * C1483 + C27210 + C27210 + C26785 * C1491) *
                         C23805 +
                     (C27233 + C27232 + C27231) * C48938) *
                        C49130) *
                       C49014 * C250 -
                   (((C30033 + C30034 + C30035) * C48938 +
                     (C26793 * C1955 + C27647 + C27647 + C26785 * C1961 +
                      C48071 * C1483 + C27646 + C27646 + C49091 * C1491 +
                      C48083 * C680 + C27645 + C27645 + C49084 * C690) *
                         C23805) *
                        C49130 +
                    ((C27043 + C27044 + C27045) * C48938 +
                     (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
                      C48071 * C578 + C27023 + C27023 + C49091 * C588 +
                      C48083 * C258 + C27024 + C27024 + C49084 * C270) *
                         C23805) *
                        C49258) *
                       C49014 * C49285) *
                      C252 +
                  ((((C27045 + C27044 + C27043) * C23805 +
                     (C27042 + C27041 + C27040) * C48938) *
                        C49258 +
                    ((C30035 + C30034 + C30033) * C23805 +
                     (C48083 * C682 + C27651 + C27651 + C49084 * C692 +
                      C48071 * C1481 + C27652 + C27652 + C49091 * C1489 +
                      C26793 * C1957 + C27653 + C27653 + C26785 * C1963) *
                         C48938) *
                        C49130) *
                       C49014 * C49285 -
                   (((C27228 + C27229 + C27230) * C48938 +
                     (C27231 + C27232 + C27233) * C23805) *
                        C49130 +
                    ((C26852 + C26851 + C26850) * C48938 +
                     (C26849 + C26848 + C26847) * C23805) *
                        C49258) *
                       C49014 * C250) *
                      C49283)) /
                (p * q * std::sqrt(p + q));
    d2ee[11] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
              C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 +
              C26798 + C26785 * C588) *
                 C23805 +
             (C26847 + C26848 + C26849) * C48938) *
                C49258 +
            ((C30258 + C30259 + C30260) * C23805 + C30247 * C48938) * C49130) *
               C380 -
           (((C30261 + C30262 + C30263) * C48938 +
             (C26793 * C2376 + C28058 + C28058 + C26785 * C2388 +
              C48071 * C2375 + C28057 + C28057 + C49091 * C2387 +
              C48083 * C931 + C28056 + C28056 + C49084 * C941) *
                 C23805) *
                C49130 +
            (C30251 * C48938 + (C30260 + C30259 + C30258) * C23805) * C49258) *
               C49287) *
              C48997 * C252 +
          (((C30247 * C23805 + (C27230 + C27229 + C27228) * C48938) * C49258 +
            ((C30263 + C30262 + C30261) * C23805 +
             (C48083 * C933 + C28062 + C28062 + C49084 * C943 + C48071 * C2379 +
              C28063 + C28063 + C49091 * C2391 + C26793 * C2380 + C28064 +
              C28064 + C26785 * C2392) *
                 C48938) *
                C49130) *
               C49287 -
           (((C27228 + C27229 + C27230) * C48938 + C30251 * C23805) * C49130 +
            ((C26852 + C26851 + C26850) * C48938 +
             (C26849 + C26848 + C26847) * C23805) *
                C49258) *
               C380) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[12] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
              C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 +
              C26798 + C26785 * C588) *
                 C23805 +
             (C26847 + C26848 + C26849) * C48938) *
                C49258 +
            ((C30258 + C30259 + C30260) * C23805 + C30247 * C48938) * C49130) *
               C49014 * C508 -
           (((C30033 + C30034 + C30035) * C48938 +
             (C26793 * C1955 + C27647 + C27647 + C26785 * C1961 +
              C48071 * C1483 + C27646 + C27646 + C49091 * C1491 +
              C48083 * C680 + C27645 + C27645 + C49084 * C690) *
                 C23805) *
                C49130 +
            ((C27043 + C27044 + C27045) * C48938 +
             (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
              C48071 * C578 + C27023 + C27023 + C49091 * C588 + C48083 * C258 +
              C27024 + C27024 + C49084 * C270) *
                 C23805) *
                C49258) *
               C49014 * C49285) *
              C510 +
          ((((C27045 + C27044 + C27043) * C23805 +
             (C27042 + C27041 + C27040) * C48938) *
                C49258 +
            ((C30035 + C30034 + C30033) * C23805 +
             (C48083 * C682 + C27651 + C27651 + C49084 * C692 + C48071 * C1481 +
              C27652 + C27652 + C49091 * C1489 + C26793 * C1957 + C27653 +
              C27653 + C26785 * C1963) *
                 C48938) *
                C49130) *
               C49014 * C49285 -
           (((C27228 + C27229 + C27230) * C48938 + C30251 * C23805) * C49130 +
            ((C26852 + C26851 + C26850) * C48938 +
             (C26849 + C26848 + C26847) * C23805) *
                C49258) *
               C49014 * C508) *
              C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[13] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
             C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 + C26798 +
             C26785 * C588) *
                C23805 +
            (C26847 + C26848 + C26849) * C48938) *
               C49258 +
           ((C30258 + C30259 + C30260) * C23805 + C30247 * C48938) * C49130) *
              C49014 * C574 -
          (((C30033 + C30034 + C30035) * C48938 +
            (C26793 * C1955 + C27647 + C27647 + C26785 * C1961 +
             C48071 * C1483 + C27646 + C27646 + C49091 * C1491 + C48083 * C680 +
             C27645 + C27645 + C49084 * C690) *
                C23805) *
               C49130 +
           ((C27043 + C27044 + C27045) * C48938 +
            (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 + C48071 * C578 +
             C27023 + C27023 + C49091 * C588 + C48083 * C258 + C27024 + C27024 +
             C49084 * C270) *
                C23805) *
               C49258) *
              C49014 * C575 +
          (((C48083 * C578 + C27490 + C27490 + C49084 * C588 + C48071 * C1283 +
             C27491 + C27491 + C49091 * C1291 + C26793 * C1791 + C27492 +
             C27492 + C26785 * C1797) *
                C23805 +
            (C48083 * C579 + C27493 + C27493 + C49084 * C589 + C48071 * C1282 +
             C27494 + C27494 + C49091 * C1290 + C26793 * C1792 + C27495 +
             C27495 + C26785 * C1798) *
                C48938) *
               C49258 +
           ((C48083 * C1483 + C30604 + C30604 + C49084 * C1491 +
             C48071 * C1955 + C30605 + C30605 + C49091 * C1961 +
             C26793 * C9455 + C30606 + C30606 + C26785 * C9459) *
                C23805 +
            (C48083 * C1482 + C30607 + C30607 + C49084 * C1490 +
             C48071 * C1956 + C30608 + C30608 + C49091 * C1962 +
             C26793 * C9456 + C30609 + C30609 + C26785 * C9460) *
                C48938) *
               C49130) *
              C49014 * C576) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[14] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
              C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 +
              C26798 + C26785 * C588) *
                 C23805 +
             (C26847 + C26848 + C26849) * C48938) *
                C49258 +
            ((C30258 + C30259 + C30260) * C23805 + C30247 * C48938) * C49130) *
               C380 -
           (((C30261 + C30262 + C30263) * C48938 +
             (C26793 * C2376 + C28058 + C28058 + C26785 * C2388 +
              C48071 * C2375 + C28057 + C28057 + C49091 * C2387 +
              C48083 * C931 + C28056 + C28056 + C49084 * C941) *
                 C23805) *
                C49130 +
            (C30251 * C48938 + (C30260 + C30259 + C30258) * C23805) * C49258) *
               C49287) *
              C508 +
          ((((C30822 + C30823 + C30824) * C23805 +
             (C30035 + C30034 + C30033) * C48938) *
                C49258 +
            ((C48083 * C2375 + C30810 + C30810 + C49084 * C2387 +
              C48071 * C2376 + C30811 + C30811 + C49091 * C2388 +
              C26793 * C9939 + C30812 + C30812 + C26785 * C9943) *
                 C23805 +
             (C48083 * C2377 + C30813 + C30813 + C49084 * C2389 +
              C48071 * C2378 + C30814 + C30814 + C49091 * C2390 +
              C26793 * C10206 + C30815 + C30815 + C26785 * C10208) *
                 C48938) *
                C49130) *
               C49287 -
           (((C30033 + C30034 + C30035) * C48938 +
             (C30824 + C30823 + C30822) * C23805) *
                C49130 +
            ((C27043 + C27044 + C27045) * C48938 +
             (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
              C48071 * C578 + C27023 + C27023 + C49091 * C588 + C48083 * C258 +
              C27024 + C27024 + C49084 * C270) *
                 C23805) *
                C49258) *
               C380) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
              C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 +
              C26798 + C26785 * C588) *
                 C23805 +
             (C26847 + C26848 + C26849) * C48938) *
                C49258 +
            ((C30258 + C30259 + C30260) * C23805 + C30247 * C48938) * C49130) *
               C782 -
           (((C30261 + C30262 + C30263) * C48938 +
             (C26793 * C2376 + C28058 + C28058 + C26785 * C2388 +
              C48071 * C2375 + C28057 + C28057 + C49091 * C2387 +
              C48083 * C931 + C28056 + C28056 + C49084 * C941) *
                 C23805) *
                C49130 +
            (C30251 * C48938 + (C30260 + C30259 + C30258) * C23805) * C49258) *
               C49287) *
              C48997 * C510 +
          (((C30247 * C23805 + (C27230 + C27229 + C27228) * C48938) * C49258 +
            ((C30263 + C30262 + C30261) * C23805 +
             (C48083 * C933 + C28062 + C28062 + C49084 * C943 + C48071 * C2379 +
              C28063 + C28063 + C49091 * C2391 + C26793 * C2380 + C28064 +
              C28064 + C26785 * C2392) *
                 C48938) *
                C49130) *
               C49287 -
           (((C27228 + C27229 + C27230) * C48938 + C30251 * C23805) * C49130 +
            ((C26852 + C26851 + C26850) * C48938 +
             (C26849 + C26848 + C26847) * C23805) *
                C49258) *
               C782) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
              C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 +
              C26798 + C26785 * C588) *
                 C23805 +
             (C26847 + C26848 + C26849) * C48938) *
                C49258 +
            ((C30258 + C30259 + C30260) * C23805 + C30247 * C48938) * C49130) *
               C782 -
           (((C30261 + C30262 + C30263) * C48938 +
             (C26793 * C2376 + C28058 + C28058 + C26785 * C2388 +
              C48071 * C2375 + C28057 + C28057 + C49091 * C2387 +
              C48083 * C931 + C28056 + C28056 + C49084 * C941) *
                 C23805) *
                C49130 +
            (C30251 * C48938 + (C30260 + C30259 + C30258) * C23805) * C49258) *
               C49287) *
              C250 +
          ((((C30822 + C30823 + C30824) * C23805 +
             (C30035 + C30034 + C30033) * C48938) *
                C49258 +
            ((C48083 * C2375 + C30810 + C30810 + C49084 * C2387 +
              C48071 * C2376 + C30811 + C30811 + C49091 * C2388 +
              C26793 * C9939 + C30812 + C30812 + C26785 * C9943) *
                 C23805 +
             (C48083 * C2377 + C30813 + C30813 + C49084 * C2389 +
              C48071 * C2378 + C30814 + C30814 + C49091 * C2390 +
              C26793 * C10206 + C30815 + C30815 + C26785 * C10208) *
                 C48938) *
                C49130) *
               C49287 -
           (((C30033 + C30034 + C30035) * C48938 +
             (C30824 + C30823 + C30822) * C23805) *
                C49130 +
            ((C27043 + C27044 + C27045) * C48938 +
             (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
              C48071 * C578 + C27023 + C27023 + C49091 * C588 + C48083 * C258 +
              C27024 + C27024 + C49084 * C270) *
                 C23805) *
                C49258) *
               C782) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[17] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
             C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 + C26798 +
             C26785 * C588) *
                C23805 +
            (C26847 + C26848 + C26849) * C48938) *
               C49258 +
           ((C30258 + C30259 + C30260) * C23805 + C30247 * C48938) * C49130) *
              C928 -
          (((C30261 + C30262 + C30263) * C48938 +
            (C31377 + C31378 + C31379) * C23805) *
               C49130 +
           (C30251 * C48938 + (C30260 + C30259 + C30258) * C23805) * C49258) *
              C929 +
          (((C31379 + C31378 + C31377) * C23805 +
            (C30263 + C30262 + C30261) * C48938) *
               C49258 +
           ((C48083 * C2851 + C31365 + C31365 + C49084 * C2859 +
             C48071 * C3305 + C31366 + C31366 + C49091 * C3311 +
             C26793 * C10361 + C31367 + C31367 + C26785 * C10365) *
                C23805 +
            (C48083 * C2850 + C31368 + C31368 + C49084 * C2858 +
             C48071 * C3306 + C31369 + C31369 + C49091 * C3312 +
             C26793 * C10362 + C31370 + C31370 + C26785 * C10366) *
                C48938) *
               C49130) *
              C930) *
         C48997 * C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[18] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
            C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
            C49315 * C588 + C23813 * C1283 + C23819 + C23819 + C49265 * C1291) *
               C23805 +
           (C23864 + C23865 + C23866 + C23867) * C48938) *
              C49043 * C49014 * C48997 * C110 -
          ((C23868 + C23869 + C23870 + C23871) * C48938 +
           (C23867 + C23866 + C23865 + C23864) * C23805) *
              C49043 * C49014 * C48997 * C111 +
          ((C23871 + C23870 + C23869 + C23868) * C23805 +
           (C23807 * C118 + C23844 + C23844 + C49329 * C132 + C23809 * C255 +
            C23845 + C23845 + C49325 * C267 + C23811 * C581 + C23846 + C23846 +
            C49315 * C591 + C23813 * C1284 + C23847 + C23847 + C49265 * C1292) *
               C48938) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
            C22571 + C22571 + C49088 * C270) *
               C49328 +
           (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
              C49043 * C49014 * C48997 * C110 -
          ((C22620 + C22621) * C49257 + (C22619 + C22618) * C49308 +
           (C22617 + C22616) * C49321 + (C22615 + C22614) * C49328) *
              C49043 * C49014 * C48997 * C111 +
          (C22622 * C49328 + C22623 * C49321 + (C22621 + C22620) * C49308 +
           (C22565 * C120 + C22596 + C22596 + C22559 * C134 + C22567 * C259 +
            C22597 + C22597 + C49088 * C271) *
               C49257) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C23805 +
            (C22614 + C22615) * C48938) *
               C49323 +
           ((C22565 * C386 + C22943 + C22943 + C22559 * C398 + C22567 * C680 +
             C22942 + C22942 + C49088 * C690) *
                C23805 +
            (C22963 + C22962) * C48938) *
               C49312 +
           ((C22565 * C931 + C23696 + C23696 + C22559 * C941 + C22567 * C2375 +
             C23697 + C23697 + C49088 * C2387) *
                C23805 +
            (C25098 + C25099) * C48938) *
               C49293) *
              C49014 * C48997 * C110 -
          (((C25100 + C25101) * C48938 + (C25099 + C25098) * C23805) * C49293 +
           ((C22960 + C22961) * C48938 + (C22962 + C22963) * C23805) * C49312 +
           ((C22617 + C22616) * C48938 + (C22615 + C22614) * C23805) * C49323) *
              C49014 * C48997 * C111 +
          ((C22622 * C23805 + C22623 * C48938) * C49323 +
           ((C22961 + C22960) * C23805 + (C22959 + C22958) * C48938) * C49312 +
           ((C25101 + C25100) * C23805 +
            (C22565 * C934 + C23702 + C23702 + C22559 * C944 + C22567 * C2676 +
             C23703 + C23703 + C49088 * C2678) *
                C48938) *
               C49293) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[19] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C23805 +
            (C23864 + C23865 + C23866 + C23867) * C48938) *
               C49043 * C49014 * C250 -
           ((C24030 + C24031 + C24032 + C24033) * C48938 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C23805) *
               C49043 * C49014 * C49285) *
              C252 +
          (((C24033 + C24032 + C24031 + C24030) * C23805 +
            (C23807 * C256 + C24018 + C24018 + C49329 * C268 + C23809 * C580 +
             C24019 + C24019 + C49325 * C590 + C23811 * C1281 + C24020 +
             C24020 + C49315 * C1289 + C23813 * C1793 + C24021 + C24021 +
             C49265 * C1799) *
                C48938) *
               C49043 * C49014 * C49285 -
           ((C23868 + C23869 + C23870 + C23871) * C48938 +
            (C23867 + C23866 + C23865 + C23864) * C23805) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49328 +
            (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
               C49043 * C49014 * C250 -
           ((C22788 + C22789) * C49257 + (C22790 + C22791) * C49308 +
            (C22792 + C22793) * C49321 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C49328) *
               C49043 * C49014 * C49285) *
              C252 +
          (((C22793 + C22792) * C49328 + (C22791 + C22790) * C49321 +
            (C22789 + C22788) * C49308 +
            (C22565 * C254 + C22774 + C22774 + C22559 * C266 + C22567 * C582 +
             C22775 + C22775 + C49088 * C592) *
                C49257) *
               C49043 * C49014 * C49285 -
           ((C22620 + C22621) * C49257 + (C22619 + C22618) * C49308 +
            (C22617 + C22616) * C49321 + (C22615 + C22614) * C49328) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C23805 +
             (C22614 + C22615) * C48938) *
                C49323 +
            ((C22565 * C386 + C22943 + C22943 + C22559 * C398 + C22567 * C680 +
              C22942 + C22942 + C49088 * C690) *
                 C23805 +
             (C22963 + C22962) * C48938) *
                C49312 +
            ((C22565 * C931 + C23696 + C23696 + C22559 * C941 + C22567 * C2375 +
              C23697 + C23697 + C49088 * C2387) *
                 C23805 +
             (C25098 + C25099) * C48938) *
                C49293) *
               C49014 * C250 -
           (((C25318 + C25319) * C48938 +
             (C22567 * C2376 + C25302 + C25302 + C49088 * C2388 +
              C22565 * C2375 + C25303 + C25303 + C22559 * C2387) *
                 C23805) *
                C49293 +
            ((C25320 + C25321) * C48938 +
             (C22567 * C1483 + C23331 + C23331 + C49088 * C1491 +
              C22565 * C680 + C23330 + C23330 + C22559 * C690) *
                 C23805) *
                C49312 +
            ((C22792 + C22793) * C48938 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C23805) *
                C49323) *
               C49014 * C49285) *
              C252 +
          ((((C22793 + C22792) * C23805 + (C22791 + C22790) * C48938) * C49323 +
            ((C25321 + C25320) * C23805 +
             (C22565 * C682 + C23334 + C23334 + C22559 * C692 + C22567 * C1481 +
              C23335 + C23335 + C49088 * C1489) *
                 C48938) *
                C49312 +
            ((C25319 + C25318) * C23805 +
             (C22565 * C2379 + C25308 + C25308 + C22559 * C2391 +
              C22567 * C2380 + C25309 + C25309 + C49088 * C2392) *
                 C48938) *
                C49293) *
               C49014 * C49285 -
           (((C25100 + C25101) * C48938 + (C25099 + C25098) * C23805) * C49293 +
            ((C22960 + C22961) * C48938 + (C22962 + C22963) * C23805) * C49312 +
            ((C22617 + C22616) * C48938 + (C22615 + C22614) * C23805) *
                C49323) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[20] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C23805 +
            (C23864 + C23865 + C23866 + C23867) * C48938) *
               C49043 * C380 -
           ((C24192 + C24193 + C24194 + C24195) * C48938 +
            (C23813 * C1955 + C24176 + C24176 + C49265 * C1961 +
             C23811 * C1483 + C24177 + C24177 + C49315 * C1491 + C23809 * C680 +
             C24178 + C24178 + C49325 * C690 + C23807 * C386 + C24179 + C24179 +
             C49329 * C398) *
                C23805) *
               C49043 * C49287) *
              C48997 * C252 +
          (((C24195 + C24194 + C24193 + C24192) * C23805 +
            (C23807 * C384 + C24180 + C24180 + C49329 * C396 + C23809 * C682 +
             C24181 + C24181 + C49325 * C692 + C23811 * C1481 + C24182 +
             C24182 + C49315 * C1489 + C23813 * C1957 + C24183 + C24183 +
             C49265 * C1963) *
                C48938) *
               C49043 * C49287 -
           ((C23868 + C23869 + C23870 + C23871) * C48938 +
            (C23867 + C23866 + C23865 + C23864) * C23805) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49328 +
            (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
               C49043 * C380 -
           ((C22958 + C22959) * C49257 + (C22960 + C22961) * C49308 +
            (C22962 + C22963) * C49321 +
            (C22567 * C680 + C22942 + C22942 + C49088 * C690 + C22565 * C386 +
             C22943 + C22943 + C22559 * C398) *
                C49328) *
               C49043 * C49287) *
              C48997 * C252 +
          (((C22963 + C22962) * C49328 + (C22961 + C22960) * C49321 +
            (C22959 + C22958) * C49308 +
            (C22565 * C382 + C22944 + C22944 + C22559 * C394 + C22567 * C684 +
             C22945 + C22945 + C49088 * C694) *
                C49257) *
               C49043 * C49287 -
           ((C22620 + C22621) * C49257 + (C22619 + C22618) * C49308 +
            (C22617 + C22616) * C49321 + (C22615 + C22614) * C49328) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C23805 +
             (C22614 + C22615) * C48938) *
                C49323 +
            ((C25550 + C25551) * C23805 + C25520 * C48938) * C49312 +
            ((C25552 + C25553) * C23805 + C25525 * C48938) * C49293) *
               C380 -
           (((C25554 + C25555) * C48938 +
             (C22567 * C3305 + C25532 + C25532 + C49088 * C3311 +
              C22565 * C2851 + C25533 + C25533 + C22559 * C2859) *
                 C23805) *
                C49293 +
            (C25534 * C48938 + (C25553 + C25552) * C23805) * C49312 +
            (C25535 * C48938 + (C25551 + C25550) * C23805) * C49323) *
               C49287) *
              C48997 * C252 +
          (((C25520 * C23805 + (C22961 + C22960) * C48938) * C49323 +
            (C25525 * C23805 + (C25101 + C25100) * C48938) * C49312 +
            ((C25555 + C25554) * C23805 +
             (C22565 * C2849 + C25536 + C25536 + C22559 * C2857 +
              C22567 * C3307 + C25537 + C25537 + C49088 * C3313) *
                 C48938) *
                C49293) *
               C49287 -
           (((C25100 + C25101) * C48938 + C25534 * C23805) * C49293 +
            ((C22960 + C22961) * C48938 + C25535 * C23805) * C49312 +
            ((C22617 + C22616) * C48938 + (C22615 + C22614) * C23805) *
                C49323) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[21] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C23805 +
            (C23864 + C23865 + C23866 + C23867) * C48938) *
               C49043 * C49014 * C508 -
           ((C24030 + C24031 + C24032 + C24033) * C48938 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C23805) *
               C49043 * C49014 * C49285) *
              C510 +
          (((C24033 + C24032 + C24031 + C24030) * C23805 +
            (C23807 * C256 + C24018 + C24018 + C49329 * C268 + C23809 * C580 +
             C24019 + C24019 + C49325 * C590 + C23811 * C1281 + C24020 +
             C24020 + C49315 * C1289 + C23813 * C1793 + C24021 + C24021 +
             C49265 * C1799) *
                C48938) *
               C49043 * C49014 * C49285 -
           ((C23868 + C23869 + C23870 + C23871) * C48938 +
            (C23867 + C23866 + C23865 + C23864) * C23805) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49328 +
            (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
               C49043 * C49014 * C508 -
           ((C22788 + C22789) * C49257 + (C22790 + C22791) * C49308 +
            (C22792 + C22793) * C49321 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C49328) *
               C49043 * C49014 * C49285) *
              C510 +
          (((C22793 + C22792) * C49328 + (C22791 + C22790) * C49321 +
            (C22789 + C22788) * C49308 +
            (C22565 * C254 + C22774 + C22774 + C22559 * C266 + C22567 * C582 +
             C22775 + C22775 + C49088 * C592) *
                C49257) *
               C49043 * C49014 * C49285 -
           ((C22620 + C22621) * C49257 + (C22619 + C22618) * C49308 +
            (C22617 + C22616) * C49321 + (C22615 + C22614) * C49328) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C23805 +
             (C22614 + C22615) * C48938) *
                C49323 +
            ((C25550 + C25551) * C23805 + C25520 * C48938) * C49312 +
            ((C25552 + C25553) * C23805 + C25525 * C48938) * C49293) *
               C49014 * C508 -
           (((C25318 + C25319) * C48938 +
             (C22567 * C2376 + C25302 + C25302 + C49088 * C2388 +
              C22565 * C2375 + C25303 + C25303 + C22559 * C2387) *
                 C23805) *
                C49293 +
            ((C25320 + C25321) * C48938 +
             (C22567 * C1483 + C23331 + C23331 + C49088 * C1491 +
              C22565 * C680 + C23330 + C23330 + C22559 * C690) *
                 C23805) *
                C49312 +
            ((C22792 + C22793) * C48938 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C23805) *
                C49323) *
               C49014 * C49285) *
              C510 +
          ((((C22793 + C22792) * C23805 + (C22791 + C22790) * C48938) * C49323 +
            ((C25321 + C25320) * C23805 +
             (C22565 * C682 + C23334 + C23334 + C22559 * C692 + C22567 * C1481 +
              C23335 + C23335 + C49088 * C1489) *
                 C48938) *
                C49312 +
            ((C25319 + C25318) * C23805 +
             (C22565 * C2379 + C25308 + C25308 + C22559 * C2391 +
              C22567 * C2380 + C25309 + C25309 + C49088 * C2392) *
                 C48938) *
                C49293) *
               C49014 * C49285 -
           (((C25100 + C25101) * C48938 + C25534 * C23805) * C49293 +
            ((C22960 + C22961) * C48938 + C25535 * C23805) * C49312 +
            ((C22617 + C22616) * C48938 + (C22615 + C22614) * C23805) *
                C49323) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[22] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
            C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
            C49315 * C588 + C23813 * C1283 + C23819 + C23819 + C49265 * C1291) *
               C23805 +
           (C23864 + C23865 + C23866 + C23867) * C48938) *
              C49043 * C49014 * C574 -
          ((C24030 + C24031 + C24032 + C24033) * C48938 +
           (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 + C23811 * C1283 +
            C24015 + C24015 + C49315 * C1291 + C23809 * C578 + C24016 + C24016 +
            C49325 * C588 + C23807 * C258 + C24017 + C24017 + C49329 * C270) *
               C23805) *
              C49043 * C49014 * C575 +
          ((C23807 * C578 + C24424 + C24424 + C49329 * C588 + C23809 * C1283 +
            C24425 + C24425 + C49325 * C1291 + C23811 * C1791 + C24426 +
            C24426 + C49315 * C1797 + C23813 * C9357 + C24427 + C24427 +
            C49265 * C9361) *
               C23805 +
           (C23807 * C579 + C24428 + C24428 + C49329 * C589 + C23809 * C1282 +
            C24429 + C24429 + C49325 * C1290 + C23811 * C1792 + C24430 +
            C24430 + C49315 * C1798 + C23813 * C9358 + C24431 + C24431 +
            C49265 * C9362) *
               C48938) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
            C22571 + C22571 + C49088 * C270) *
               C49328 +
           (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
              C49043 * C49014 * C574 -
          ((C22788 + C22789) * C49257 + (C22790 + C22791) * C49308 +
           (C22792 + C22793) * C49321 +
           (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
            C22773 + C22773 + C22559 * C270) *
               C49328) *
              C49043 * C49014 * C575 +
          ((C22565 * C578 + C23192 + C23192 + C22559 * C588 + C22567 * C1283 +
            C23193 + C23193 + C49088 * C1291) *
               C49328 +
           (C22565 * C579 + C23194 + C23194 + C22559 * C589 + C22567 * C1282 +
            C23195 + C23195 + C49088 * C1290) *
               C49321 +
           (C22565 * C580 + C23196 + C23196 + C22559 * C590 + C22567 * C1281 +
            C23197 + C23197 + C49088 * C1289) *
               C49308 +
           (C22565 * C581 + C23198 + C23198 + C22559 * C591 + C22567 * C1284 +
            C23199 + C23199 + C49088 * C1292) *
               C49257) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C23805 +
            (C22614 + C22615) * C48938) *
               C49323 +
           ((C25550 + C25551) * C23805 + C25520 * C48938) * C49312 +
           ((C25552 + C25553) * C23805 + C25525 * C48938) * C49293) *
              C49014 * C574 -
          (((C25318 + C25319) * C48938 +
            (C22567 * C2376 + C25302 + C25302 + C49088 * C2388 +
             C22565 * C2375 + C25303 + C25303 + C22559 * C2387) *
                C23805) *
               C49293 +
           ((C25320 + C25321) * C48938 +
            (C22567 * C1483 + C23331 + C23331 + C49088 * C1491 + C22565 * C680 +
             C23330 + C23330 + C22559 * C690) *
                C23805) *
               C49312 +
           ((C22792 + C22793) * C48938 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C23805) *
               C49323) *
              C49014 * C575 +
          (((C22565 * C578 + C23192 + C23192 + C22559 * C588 + C22567 * C1283 +
             C23193 + C23193 + C49088 * C1291) *
                C23805 +
            (C22565 * C579 + C23194 + C23194 + C22559 * C589 + C22567 * C1282 +
             C23195 + C23195 + C49088 * C1290) *
                C48938) *
               C49323 +
           ((C22565 * C1483 + C25896 + C25896 + C22559 * C1491 +
             C22567 * C1955 + C25897 + C25897 + C49088 * C1961) *
                C23805 +
            (C22565 * C1482 + C25898 + C25898 + C22559 * C1490 +
             C22567 * C1956 + C25899 + C25899 + C49088 * C1962) *
                C48938) *
               C49312 +
           ((C22565 * C2376 + C25900 + C25900 + C22559 * C2388 +
             C22567 * C9939 + C25901 + C25901 + C49088 * C9943) *
                C23805 +
            (C22565 * C2378 + C25902 + C25902 + C22559 * C2390 +
             C22567 * C10206 + C25903 + C25903 + C49088 * C10208) *
                C48938) *
               C49293) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[23] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C23805 +
            (C23864 + C23865 + C23866 + C23867) * C48938) *
               C49043 * C380 -
           ((C24192 + C24193 + C24194 + C24195) * C48938 +
            (C23813 * C1955 + C24176 + C24176 + C49265 * C1961 +
             C23811 * C1483 + C24177 + C24177 + C49315 * C1491 + C23809 * C680 +
             C24178 + C24178 + C49325 * C690 + C23807 * C386 + C24179 + C24179 +
             C49329 * C398) *
                C23805) *
               C49043 * C49287) *
              C508 +
          (((C23807 * C680 + C24562 + C24562 + C49329 * C690 + C23809 * C1483 +
             C24563 + C24563 + C49325 * C1491 + C23811 * C1955 + C24564 +
             C24564 + C49315 * C1961 + C23813 * C9455 + C24565 + C24565 +
             C49265 * C9459) *
                C23805 +
            (C23807 * C681 + C24566 + C24566 + C49329 * C691 + C23809 * C1482 +
             C24567 + C24567 + C49325 * C1490 + C23811 * C1956 + C24568 +
             C24568 + C49315 * C1962 + C23813 * C9456 + C24569 + C24569 +
             C49265 * C9460) *
                C48938) *
               C49043 * C49287 -
           ((C24030 + C24031 + C24032 + C24033) * C48938 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C23805) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49328 +
            (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
               C49043 * C380 -
           ((C22958 + C22959) * C49257 + (C22960 + C22961) * C49308 +
            (C22962 + C22963) * C49321 +
            (C22567 * C680 + C22942 + C22942 + C49088 * C690 + C22565 * C386 +
             C22943 + C22943 + C22559 * C398) *
                C49328) *
               C49043 * C49287) *
              C508 +
          (((C22565 * C680 + C23330 + C23330 + C22559 * C690 + C22567 * C1483 +
             C23331 + C23331 + C49088 * C1491) *
                C49328 +
            (C22565 * C681 + C23332 + C23332 + C22559 * C691 + C22567 * C1482 +
             C23333 + C23333 + C49088 * C1490) *
                C49321 +
            (C22565 * C682 + C23334 + C23334 + C22559 * C692 + C22567 * C1481 +
             C23335 + C23335 + C49088 * C1489) *
                C49308 +
            (C22565 * C683 + C23336 + C23336 + C22559 * C693 + C22567 * C1484 +
             C23337 + C23337 + C49088 * C1492) *
                C49257) *
               C49043 * C49287 -
           ((C22788 + C22789) * C49257 + (C22790 + C22791) * C49308 +
            (C22792 + C22793) * C49321 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C49328) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C23805 +
             (C22614 + C22615) * C48938) *
                C49323 +
            ((C25550 + C25551) * C23805 + C25520 * C48938) * C49312 +
            ((C25552 + C25553) * C23805 + C25525 * C48938) * C49293) *
               C380 -
           (((C25554 + C25555) * C48938 +
             (C22567 * C3305 + C25532 + C25532 + C49088 * C3311 +
              C22565 * C2851 + C25533 + C25533 + C22559 * C2859) *
                 C23805) *
                C49293 +
            (C25534 * C48938 + (C25553 + C25552) * C23805) * C49312 +
            (C25535 * C48938 + (C25551 + C25550) * C23805) * C49323) *
               C49287) *
              C508 +
          ((((C26118 + C26119) * C23805 + (C25321 + C25320) * C48938) * C49323 +
            ((C26120 + C26121) * C23805 + (C25319 + C25318) * C48938) * C49312 +
            ((C22565 * C3305 + C26106 + C26106 + C22559 * C3311 +
              C22567 * C10361 + C26107 + C26107 + C49088 * C10365) *
                 C23805 +
             (C22565 * C3306 + C26108 + C26108 + C22559 * C3312 +
              C22567 * C10362 + C26109 + C26109 + C49088 * C10366) *
                 C48938) *
                C49293) *
               C49287 -
           (((C25318 + C25319) * C48938 + (C26121 + C26120) * C23805) * C49293 +
            ((C25320 + C25321) * C48938 + (C26119 + C26118) * C23805) * C49312 +
            ((C22792 + C22793) * C48938 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C23805) *
                C49323) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[24] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C23805 +
            (C23864 + C23865 + C23866 + C23867) * C48938) *
               C49043 * C782 -
           ((C24192 + C24193 + C24194 + C24195) * C48938 +
            (C23813 * C1955 + C24176 + C24176 + C49265 * C1961 +
             C23811 * C1483 + C24177 + C24177 + C49315 * C1491 + C23809 * C680 +
             C24178 + C24178 + C49325 * C690 + C23807 * C386 + C24179 + C24179 +
             C49329 * C398) *
                C23805) *
               C49043 * C49287) *
              C48997 * C510 +
          (((C24195 + C24194 + C24193 + C24192) * C23805 +
            (C23807 * C384 + C24180 + C24180 + C49329 * C396 + C23809 * C682 +
             C24181 + C24181 + C49325 * C692 + C23811 * C1481 + C24182 +
             C24182 + C49315 * C1489 + C23813 * C1957 + C24183 + C24183 +
             C49265 * C1963) *
                C48938) *
               C49043 * C49287 -
           ((C23868 + C23869 + C23870 + C23871) * C48938 +
            (C23867 + C23866 + C23865 + C23864) * C23805) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49328 +
            (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
               C49043 * C782 -
           ((C22958 + C22959) * C49257 + (C22960 + C22961) * C49308 +
            (C22962 + C22963) * C49321 +
            (C22567 * C680 + C22942 + C22942 + C49088 * C690 + C22565 * C386 +
             C22943 + C22943 + C22559 * C398) *
                C49328) *
               C49043 * C49287) *
              C48997 * C510 +
          (((C22963 + C22962) * C49328 + (C22961 + C22960) * C49321 +
            (C22959 + C22958) * C49308 +
            (C22565 * C382 + C22944 + C22944 + C22559 * C394 + C22567 * C684 +
             C22945 + C22945 + C49088 * C694) *
                C49257) *
               C49043 * C49287 -
           ((C22620 + C22621) * C49257 + (C22619 + C22618) * C49308 +
            (C22617 + C22616) * C49321 + (C22615 + C22614) * C49328) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C23805 +
             (C22614 + C22615) * C48938) *
                C49323 +
            ((C25550 + C25551) * C23805 + C25520 * C48938) * C49312 +
            ((C25552 + C25553) * C23805 + C25525 * C48938) * C49293) *
               C782 -
           (((C25554 + C25555) * C48938 +
             (C22567 * C3305 + C25532 + C25532 + C49088 * C3311 +
              C22565 * C2851 + C25533 + C25533 + C22559 * C2859) *
                 C23805) *
                C49293 +
            (C25534 * C48938 + (C25553 + C25552) * C23805) * C49312 +
            (C25535 * C48938 + (C25551 + C25550) * C23805) * C49323) *
               C49287) *
              C48997 * C510 +
          (((C25520 * C23805 + (C22961 + C22960) * C48938) * C49323 +
            (C25525 * C23805 + (C25101 + C25100) * C48938) * C49312 +
            ((C25555 + C25554) * C23805 +
             (C22565 * C2849 + C25536 + C25536 + C22559 * C2857 +
              C22567 * C3307 + C25537 + C25537 + C49088 * C3313) *
                 C48938) *
                C49293) *
               C49287 -
           (((C25100 + C25101) * C48938 + C25534 * C23805) * C49293 +
            ((C22960 + C22961) * C48938 + C25535 * C23805) * C49312 +
            ((C22617 + C22616) * C48938 + (C22615 + C22614) * C23805) *
                C49323) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[25] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C23805 +
            (C23864 + C23865 + C23866 + C23867) * C48938) *
               C49043 * C782 -
           ((C24192 + C24193 + C24194 + C24195) * C48938 +
            (C23813 * C1955 + C24176 + C24176 + C49265 * C1961 +
             C23811 * C1483 + C24177 + C24177 + C49315 * C1491 + C23809 * C680 +
             C24178 + C24178 + C49325 * C690 + C23807 * C386 + C24179 + C24179 +
             C49329 * C398) *
                C23805) *
               C49043 * C49287) *
              C250 +
          (((C23807 * C680 + C24562 + C24562 + C49329 * C690 + C23809 * C1483 +
             C24563 + C24563 + C49325 * C1491 + C23811 * C1955 + C24564 +
             C24564 + C49315 * C1961 + C23813 * C9455 + C24565 + C24565 +
             C49265 * C9459) *
                C23805 +
            (C23807 * C681 + C24566 + C24566 + C49329 * C691 + C23809 * C1482 +
             C24567 + C24567 + C49325 * C1490 + C23811 * C1956 + C24568 +
             C24568 + C49315 * C1962 + C23813 * C9456 + C24569 + C24569 +
             C49265 * C9460) *
                C48938) *
               C49043 * C49287 -
           ((C24030 + C24031 + C24032 + C24033) * C48938 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C23805) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49328 +
            (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
               C49043 * C782 -
           ((C22958 + C22959) * C49257 + (C22960 + C22961) * C49308 +
            (C22962 + C22963) * C49321 +
            (C22567 * C680 + C22942 + C22942 + C49088 * C690 + C22565 * C386 +
             C22943 + C22943 + C22559 * C398) *
                C49328) *
               C49043 * C49287) *
              C250 +
          (((C22565 * C680 + C23330 + C23330 + C22559 * C690 + C22567 * C1483 +
             C23331 + C23331 + C49088 * C1491) *
                C49328 +
            (C22565 * C681 + C23332 + C23332 + C22559 * C691 + C22567 * C1482 +
             C23333 + C23333 + C49088 * C1490) *
                C49321 +
            (C22565 * C682 + C23334 + C23334 + C22559 * C692 + C22567 * C1481 +
             C23335 + C23335 + C49088 * C1489) *
                C49308 +
            (C22565 * C683 + C23336 + C23336 + C22559 * C693 + C22567 * C1484 +
             C23337 + C23337 + C49088 * C1492) *
                C49257) *
               C49043 * C49287 -
           ((C22788 + C22789) * C49257 + (C22790 + C22791) * C49308 +
            (C22792 + C22793) * C49321 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C49328) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C23805 +
             (C22614 + C22615) * C48938) *
                C49323 +
            ((C25550 + C25551) * C23805 + C25520 * C48938) * C49312 +
            ((C25552 + C25553) * C23805 + C25525 * C48938) * C49293) *
               C782 -
           (((C25554 + C25555) * C48938 +
             (C22567 * C3305 + C25532 + C25532 + C49088 * C3311 +
              C22565 * C2851 + C25533 + C25533 + C22559 * C2859) *
                 C23805) *
                C49293 +
            (C25534 * C48938 + (C25553 + C25552) * C23805) * C49312 +
            (C25535 * C48938 + (C25551 + C25550) * C23805) * C49323) *
               C49287) *
              C250 +
          ((((C26118 + C26119) * C23805 + (C25321 + C25320) * C48938) * C49323 +
            ((C26120 + C26121) * C23805 + (C25319 + C25318) * C48938) * C49312 +
            ((C22565 * C3305 + C26106 + C26106 + C22559 * C3311 +
              C22567 * C10361 + C26107 + C26107 + C49088 * C10365) *
                 C23805 +
             (C22565 * C3306 + C26108 + C26108 + C22559 * C3312 +
              C22567 * C10362 + C26109 + C26109 + C49088 * C10366) *
                 C48938) *
                C49293) *
               C49287 -
           (((C25318 + C25319) * C48938 + (C26121 + C26120) * C23805) * C49293 +
            ((C25320 + C25321) * C48938 + (C26119 + C26118) * C23805) * C49312 +
            ((C22792 + C22793) * C48938 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C23805) *
                C49323) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[26] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
            C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
            C49315 * C588 + C23813 * C1283 + C23819 + C23819 + C49265 * C1291) *
               C23805 +
           (C23864 + C23865 + C23866 + C23867) * C48938) *
              C49043 * C928 -
          ((C24192 + C24193 + C24194 + C24195) * C48938 +
           (C23813 * C1955 + C24176 + C24176 + C49265 * C1961 + C23811 * C1483 +
            C24177 + C24177 + C49315 * C1491 + C23809 * C680 + C24178 + C24178 +
            C49325 * C690 + C23807 * C386 + C24179 + C24179 + C49329 * C398) *
               C23805) *
              C49043 * C929 +
          ((C23807 * C931 + C24928 + C24928 + C49329 * C941 + C23809 * C2375 +
            C24929 + C24929 + C49325 * C2387 + C23811 * C2376 + C24930 +
            C24930 + C49315 * C2388 + C23813 * C9939 + C24931 + C24931 +
            C49265 * C9943) *
               C23805 +
           (C23807 * C932 + C24932 + C24932 + C49329 * C942 + C23809 * C2377 +
            C24933 + C24933 + C49325 * C2389 + C23811 * C2378 + C24934 +
            C24934 + C49315 * C2390 + C23813 * C10206 + C24935 + C24935 +
            C49265 * C10208) *
               C48938) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
            C22571 + C22571 + C49088 * C270) *
               C49328 +
           (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
              C49043 * C928 -
          ((C22958 + C22959) * C49257 + (C22960 + C22961) * C49308 +
           (C22962 + C22963) * C49321 +
           (C22567 * C680 + C22942 + C22942 + C49088 * C690 + C22565 * C386 +
            C22943 + C22943 + C22559 * C398) *
               C49328) *
              C49043 * C929 +
          ((C22565 * C931 + C23696 + C23696 + C22559 * C941 + C22567 * C2375 +
            C23697 + C23697 + C49088 * C2387) *
               C49328 +
           (C22565 * C932 + C23698 + C23698 + C22559 * C942 + C22567 * C2377 +
            C23699 + C23699 + C49088 * C2389) *
               C49321 +
           (C22565 * C933 + C23700 + C23700 + C22559 * C943 + C22567 * C2379 +
            C23701 + C23701 + C49088 * C2391) *
               C49308 +
           (C22565 * C934 + C23702 + C23702 + C22559 * C944 + C22567 * C2676 +
            C23703 + C23703 + C49088 * C2678) *
               C49257) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C23805 +
            (C22614 + C22615) * C48938) *
               C49323 +
           ((C25550 + C25551) * C23805 + C25520 * C48938) * C49312 +
           C26669 * C49293) *
              C928 -
          (((C25554 + C25555) * C48938 + (C26672 + C26673) * C23805) * C49293 +
           (C25534 * C48938 + (C25553 + C25552) * C23805) * C49312 +
           (C25535 * C48938 + (C25551 + C25550) * C23805) * C49323) *
              C929 +
          (C26669 * C49323 +
           ((C26673 + C26672) * C23805 + (C25555 + C25554) * C48938) * C49312 +
           ((C22565 * C3735 + C26662 + C26662 + C22559 * C3741 +
             C22567 * C11264 + C26663 + C26663 + C49088 * C11268) *
                C23805 +
            (C22565 * C3736 + C26664 + C26664 + C22559 * C3742 +
             C22567 * C17997 + C26665 + C26665 + C49088 * C17999) *
                C48938) *
               C49293) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[27] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C48933 +
            (C22614 + C22615) * C48941 + C22622 * C26788) *
               C49258 +
           ((C25550 + C25551) * C48933 + C25520 * C48941 + C28211 * C26788) *
               C49130) *
              C49014 * C48997 * C110 -
          (((C22958 + C22959) * C26788 + (C22960 + C22961) * C48941 +
            C25535 * C48933) *
               C49130 +
           ((C22619 + C22618) * C26788 + (C22617 + C22616) * C48941 +
            (C22615 + C22614) * C48933) *
               C49258) *
              C49014 * C48997 * C111 +
          ((C22622 * C48933 + C22623 * C48941 + (C22621 + C22620) * C26788) *
               C49258 +
           (C28211 * C48933 + (C22959 + C22958) * C48941 +
            (C22565 * C382 + C22944 + C22944 + C22559 * C394 + C22567 * C684 +
             C22945 + C22945 + C49088 * C694) *
                C26788) *
               C49130) *
              C49014 * C48997 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[28] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C48933 +
             (C22614 + C22615) * C48941 + C22622 * C26788) *
                C49258 +
            ((C25550 + C25551) * C48933 + C25520 * C48941 + C28211 * C26788) *
                C49130) *
               C49014 * C250 -
           (((C28414 + C28415) * C26788 + (C25320 + C25321) * C48941 +
             (C26119 + C26118) * C48933) *
                C49130 +
            ((C22790 + C22791) * C26788 + (C22792 + C22793) * C48941 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C48933) *
                C49258) *
               C49014 * C49285) *
              C252 +
          ((((C22793 + C22792) * C48933 + (C22791 + C22790) * C48941 +
             (C22789 + C22788) * C26788) *
                C49258 +
            ((C25321 + C25320) * C48933 + (C28415 + C28414) * C48941 +
             (C22565 * C683 + C23336 + C23336 + C22559 * C693 + C22567 * C1484 +
              C23337 + C23337 + C49088 * C1492) *
                 C26788) *
                C49130) *
               C49014 * C49285 -
           (((C22958 + C22959) * C26788 + (C22960 + C22961) * C48941 +
             C25535 * C48933) *
                C49130 +
            ((C22619 + C22618) * C26788 + (C22617 + C22616) * C48941 +
             (C22615 + C22614) * C48933) *
                C49258) *
               C49014 * C250) *
              C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[29] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C48933 +
             (C22614 + C22615) * C48941 + C22622 * C26788) *
                C49258 +
            ((C25550 + C25551) * C48933 + C25520 * C48941 + C28211 * C26788) *
                C49130) *
               C380 -
           (((C25100 + C25101) * C26788 + C25534 * C48941 +
             (C25553 + C25552) * C48933) *
                C49130 +
            (C28610 * C26788 + C25535 * C48941 + (C25551 + C25550) * C48933) *
                C49258) *
               C49287) *
              C48997 * C252 +
          (((C25520 * C48933 + C28211 * C48941 + (C22959 + C22958) * C26788) *
                C49258 +
            (C25525 * C48933 + (C25101 + C25100) * C48941 +
             (C22565 * C934 + C23702 + C23702 + C22559 * C944 + C22567 * C2676 +
              C23703 + C23703 + C49088 * C2678) *
                 C26788) *
                C49130) *
               C49287 -
           (((C22958 + C22959) * C26788 + C28610 * C48941 + C25535 * C48933) *
                C49130 +
            ((C22619 + C22618) * C26788 + (C22617 + C22616) * C48941 +
             (C22615 + C22614) * C48933) *
                C49258) *
               C380) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[30] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C48933 +
             (C22614 + C22615) * C48941 + C22622 * C26788) *
                C49258 +
            ((C25550 + C25551) * C48933 + C25520 * C48941 + C28211 * C26788) *
                C49130) *
               C49014 * C508 -
           (((C28414 + C28415) * C26788 + (C25320 + C25321) * C48941 +
             (C26119 + C26118) * C48933) *
                C49130 +
            ((C22790 + C22791) * C26788 + (C22792 + C22793) * C48941 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C48933) *
                C49258) *
               C49014 * C49285) *
              C510 +
          ((((C22793 + C22792) * C48933 + (C22791 + C22790) * C48941 +
             (C22789 + C22788) * C26788) *
                C49258 +
            ((C25321 + C25320) * C48933 + (C28415 + C28414) * C48941 +
             (C22565 * C683 + C23336 + C23336 + C22559 * C693 + C22567 * C1484 +
              C23337 + C23337 + C49088 * C1492) *
                 C26788) *
                C49130) *
               C49014 * C49285 -
           (((C22958 + C22959) * C26788 + C28610 * C48941 + C25535 * C48933) *
                C49130 +
            ((C22619 + C22618) * C26788 + (C22617 + C22616) * C48941 +
             (C22615 + C22614) * C48933) *
                C49258) *
               C49014 * C508) *
              C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[31] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C48933 +
            (C22614 + C22615) * C48941 + C22622 * C26788) *
               C49258 +
           ((C25550 + C25551) * C48933 + C25520 * C48941 + C28211 * C26788) *
               C49130) *
              C49014 * C574 -
          (((C28414 + C28415) * C26788 + (C25320 + C25321) * C48941 +
            (C26119 + C26118) * C48933) *
               C49130 +
           ((C22790 + C22791) * C26788 + (C22792 + C22793) * C48941 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C48933) *
               C49258) *
              C49014 * C575 +
          (((C22565 * C578 + C23192 + C23192 + C22559 * C588 + C22567 * C1283 +
             C23193 + C23193 + C49088 * C1291) *
                C48933 +
            (C22565 * C579 + C23194 + C23194 + C22559 * C589 + C22567 * C1282 +
             C23195 + C23195 + C49088 * C1290) *
                C48941 +
            (C22565 * C580 + C23196 + C23196 + C22559 * C590 + C22567 * C1281 +
             C23197 + C23197 + C49088 * C1289) *
                C26788) *
               C49258 +
           ((C22565 * C1483 + C25896 + C25896 + C22559 * C1491 +
             C22567 * C1955 + C25897 + C25897 + C49088 * C1961) *
                C48933 +
            (C22565 * C1482 + C25898 + C25898 + C22559 * C1490 +
             C22567 * C1956 + C25899 + C25899 + C49088 * C1962) *
                C48941 +
            (C22565 * C1481 + C28951 + C28951 + C22559 * C1489 +
             C22567 * C1957 + C28952 + C28952 + C49088 * C1963) *
                C26788) *
               C49130) *
              C49014 * C576) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[32] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C48933 +
             (C22614 + C22615) * C48941 + C22622 * C26788) *
                C49258 +
            ((C25550 + C25551) * C48933 + C25520 * C48941 + C28211 * C26788) *
                C49130) *
               C380 -
           (((C25100 + C25101) * C26788 + C25534 * C48941 +
             (C25553 + C25552) * C48933) *
                C49130 +
            (C28610 * C26788 + C25535 * C48941 + (C25551 + C25550) * C48933) *
                C49258) *
               C49287) *
              C508 +
          ((((C26118 + C26119) * C48933 + (C25321 + C25320) * C48941 +
             (C28415 + C28414) * C26788) *
                C49258 +
            ((C26120 + C26121) * C48933 + (C25319 + C25318) * C48941 +
             (C22565 * C2379 + C25308 + C25308 + C22559 * C2391 +
              C22567 * C2380 + C25309 + C25309 + C49088 * C2392) *
                 C26788) *
                C49130) *
               C49287 -
           (((C28414 + C28415) * C26788 + (C25320 + C25321) * C48941 +
             (C26119 + C26118) * C48933) *
                C49130 +
            ((C22790 + C22791) * C26788 + (C22792 + C22793) * C48941 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C48933) *
                C49258) *
               C380) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[33] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C48933 +
             (C22614 + C22615) * C48941 + C22622 * C26788) *
                C49258 +
            ((C25550 + C25551) * C48933 + C25520 * C48941 + C28211 * C26788) *
                C49130) *
               C782 -
           (((C25100 + C25101) * C26788 + C25534 * C48941 +
             (C25553 + C25552) * C48933) *
                C49130 +
            (C28610 * C26788 + C25535 * C48941 + (C25551 + C25550) * C48933) *
                C49258) *
               C49287) *
              C48997 * C510 +
          (((C25520 * C48933 + C28211 * C48941 + (C22959 + C22958) * C26788) *
                C49258 +
            (C25525 * C48933 + (C25101 + C25100) * C48941 +
             (C22565 * C934 + C23702 + C23702 + C22559 * C944 + C22567 * C2676 +
              C23703 + C23703 + C49088 * C2678) *
                 C26788) *
                C49130) *
               C49287 -
           (((C22958 + C22959) * C26788 + C28610 * C48941 + C25535 * C48933) *
                C49130 +
            ((C22619 + C22618) * C26788 + (C22617 + C22616) * C48941 +
             (C22615 + C22614) * C48933) *
                C49258) *
               C782) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[34] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C48933 +
             (C22614 + C22615) * C48941 + C22622 * C26788) *
                C49258 +
            ((C25550 + C25551) * C48933 + C25520 * C48941 + C28211 * C26788) *
                C49130) *
               C782 -
           (((C25100 + C25101) * C26788 + C25534 * C48941 +
             (C25553 + C25552) * C48933) *
                C49130 +
            (C28610 * C26788 + C25535 * C48941 + (C25551 + C25550) * C48933) *
                C49258) *
               C49287) *
              C250 +
          ((((C26118 + C26119) * C48933 + (C25321 + C25320) * C48941 +
             (C28415 + C28414) * C26788) *
                C49258 +
            ((C26120 + C26121) * C48933 + (C25319 + C25318) * C48941 +
             (C22565 * C2379 + C25308 + C25308 + C22559 * C2391 +
              C22567 * C2380 + C25309 + C25309 + C49088 * C2392) *
                 C26788) *
                C49130) *
               C49287 -
           (((C28414 + C28415) * C26788 + (C25320 + C25321) * C48941 +
             (C26119 + C26118) * C48933) *
                C49130 +
            ((C22790 + C22791) * C26788 + (C22792 + C22793) * C48941 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C48933) *
                C49258) *
               C782) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[35] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C48933 +
            (C22614 + C22615) * C48941 + C22622 * C26788) *
               C49258 +
           ((C25550 + C25551) * C48933 + C25520 * C48941 + C28211 * C26788) *
               C49130) *
              C928 -
          (((C25100 + C25101) * C26788 + C25534 * C48941 +
            (C25553 + C25552) * C48933) *
               C49130 +
           (C28610 * C26788 + C25535 * C48941 + (C25551 + C25550) * C48933) *
               C49258) *
              C929 +
          ((C26656 * C48933 + C25525 * C48941 + (C25101 + C25100) * C26788) *
               C49258 +
           ((C26673 + C26672) * C48933 + (C25555 + C25554) * C48941 +
            (C22565 * C2849 + C25536 + C25536 + C22559 * C2857 +
             C22567 * C3307 + C25537 + C25537 + C49088 * C3313) *
                C26788) *
               C49130) *
              C930) *
         C48997 * C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[36] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
            C22571 + C22571 + C49088 * C270) *
               C49328 +
           (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
              C49043 * C49014 * C48997 * C110 -
          ((C22620 + C22621) * C49257 + (C22619 + C22618) * C49308 +
           (C22617 + C22616) * C49321 + (C22615 + C22614) * C49328) *
              C49043 * C49014 * C48997 * C111 +
          (C22622 * C49328 + C22623 * C49321 + (C22621 + C22620) * C49308 +
           (C22565 * C120 + C22596 + C22596 + C22559 * C134 + C22567 * C259 +
            C22597 + C22597 + C49088 * C271) *
               C49257) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
            C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
            C49315 * C588 + C23813 * C1283 + C23819 + C23819 + C49265 * C1291) *
               C23805 +
           (C23864 + C23865 + C23866 + C23867) * C48938) *
              C49043 * C49014 * C48997 * C110 -
          ((C23868 + C23869 + C23870 + C23871) * C48938 +
           (C23867 + C23866 + C23865 + C23864) * C23805) *
              C49043 * C49014 * C48997 * C111 +
          ((C23871 + C23870 + C23869 + C23868) * C23805 +
           (C23807 * C118 + C23844 + C23844 + C49329 * C132 + C23809 * C255 +
            C23845 + C23845 + C49325 * C267 + C23811 * C581 + C23846 + C23846 +
            C49315 * C591 + C23813 * C1284 + C23847 + C23847 + C49265 * C1292) *
               C48938) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[37] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49328 +
            (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
               C49043 * C49014 * C250 -
           ((C22788 + C22789) * C49257 + (C22790 + C22791) * C49308 +
            (C22792 + C22793) * C49321 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C49328) *
               C49043 * C49014 * C49285) *
              C252 +
          (((C22793 + C22792) * C49328 + (C22791 + C22790) * C49321 +
            (C22789 + C22788) * C49308 +
            (C22565 * C254 + C22774 + C22774 + C22559 * C266 + C22567 * C582 +
             C22775 + C22775 + C49088 * C592) *
                C49257) *
               C49043 * C49014 * C49285 -
           ((C22620 + C22621) * C49257 + (C22619 + C22618) * C49308 +
            (C22617 + C22616) * C49321 + (C22615 + C22614) * C49328) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C23805 +
            (C23864 + C23865 + C23866 + C23867) * C48938) *
               C49043 * C49014 * C250 -
           ((C24030 + C24031 + C24032 + C24033) * C48938 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C23805) *
               C49043 * C49014 * C49285) *
              C252 +
          (((C24033 + C24032 + C24031 + C24030) * C23805 +
            (C23807 * C256 + C24018 + C24018 + C49329 * C268 + C23809 * C580 +
             C24019 + C24019 + C49325 * C590 + C23811 * C1281 + C24020 +
             C24020 + C49315 * C1289 + C23813 * C1793 + C24021 + C24021 +
             C49265 * C1799) *
                C48938) *
               C49043 * C49014 * C49285 -
           ((C23868 + C23869 + C23870 + C23871) * C48938 +
            (C23867 + C23866 + C23865 + C23864) * C23805) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[38] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49328 +
            (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
               C49043 * C380 -
           ((C22958 + C22959) * C49257 + (C22960 + C22961) * C49308 +
            (C22962 + C22963) * C49321 +
            (C22567 * C680 + C22942 + C22942 + C49088 * C690 + C22565 * C386 +
             C22943 + C22943 + C22559 * C398) *
                C49328) *
               C49043 * C49287) *
              C48997 * C252 +
          (((C22963 + C22962) * C49328 + (C22961 + C22960) * C49321 +
            (C22959 + C22958) * C49308 +
            (C22565 * C382 + C22944 + C22944 + C22559 * C394 + C22567 * C684 +
             C22945 + C22945 + C49088 * C694) *
                C49257) *
               C49043 * C49287 -
           ((C22620 + C22621) * C49257 + (C22619 + C22618) * C49308 +
            (C22617 + C22616) * C49321 + (C22615 + C22614) * C49328) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C23805 +
            (C23864 + C23865 + C23866 + C23867) * C48938) *
               C49043 * C380 -
           ((C24192 + C24193 + C24194 + C24195) * C48938 +
            (C23813 * C1955 + C24176 + C24176 + C49265 * C1961 +
             C23811 * C1483 + C24177 + C24177 + C49315 * C1491 + C23809 * C680 +
             C24178 + C24178 + C49325 * C690 + C23807 * C386 + C24179 + C24179 +
             C49329 * C398) *
                C23805) *
               C49043 * C49287) *
              C48997 * C252 +
          (((C24195 + C24194 + C24193 + C24192) * C23805 +
            (C23807 * C384 + C24180 + C24180 + C49329 * C396 + C23809 * C682 +
             C24181 + C24181 + C49325 * C692 + C23811 * C1481 + C24182 +
             C24182 + C49315 * C1489 + C23813 * C1957 + C24183 + C24183 +
             C49265 * C1963) *
                C48938) *
               C49043 * C49287 -
           ((C23868 + C23869 + C23870 + C23871) * C48938 +
            (C23867 + C23866 + C23865 + C23864) * C23805) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[39] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49328 +
            (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
               C49043 * C49014 * C508 -
           ((C22788 + C22789) * C49257 + (C22790 + C22791) * C49308 +
            (C22792 + C22793) * C49321 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C49328) *
               C49043 * C49014 * C49285) *
              C510 +
          (((C22793 + C22792) * C49328 + (C22791 + C22790) * C49321 +
            (C22789 + C22788) * C49308 +
            (C22565 * C254 + C22774 + C22774 + C22559 * C266 + C22567 * C582 +
             C22775 + C22775 + C49088 * C592) *
                C49257) *
               C49043 * C49014 * C49285 -
           ((C22620 + C22621) * C49257 + (C22619 + C22618) * C49308 +
            (C22617 + C22616) * C49321 + (C22615 + C22614) * C49328) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C23805 +
            (C23864 + C23865 + C23866 + C23867) * C48938) *
               C49043 * C49014 * C508 -
           ((C24030 + C24031 + C24032 + C24033) * C48938 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C23805) *
               C49043 * C49014 * C49285) *
              C510 +
          (((C24033 + C24032 + C24031 + C24030) * C23805 +
            (C23807 * C256 + C24018 + C24018 + C49329 * C268 + C23809 * C580 +
             C24019 + C24019 + C49325 * C590 + C23811 * C1281 + C24020 +
             C24020 + C49315 * C1289 + C23813 * C1793 + C24021 + C24021 +
             C49265 * C1799) *
                C48938) *
               C49043 * C49014 * C49285 -
           ((C23868 + C23869 + C23870 + C23871) * C48938 +
            (C23867 + C23866 + C23865 + C23864) * C23805) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[40] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
            C22571 + C22571 + C49088 * C270) *
               C49328 +
           (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
              C49043 * C49014 * C574 -
          ((C22788 + C22789) * C49257 + (C22790 + C22791) * C49308 +
           (C22792 + C22793) * C49321 +
           (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
            C22773 + C22773 + C22559 * C270) *
               C49328) *
              C49043 * C49014 * C575 +
          ((C22565 * C578 + C23192 + C23192 + C22559 * C588 + C22567 * C1283 +
            C23193 + C23193 + C49088 * C1291) *
               C49328 +
           (C22565 * C579 + C23194 + C23194 + C22559 * C589 + C22567 * C1282 +
            C23195 + C23195 + C49088 * C1290) *
               C49321 +
           (C22565 * C580 + C23196 + C23196 + C22559 * C590 + C22567 * C1281 +
            C23197 + C23197 + C49088 * C1289) *
               C49308 +
           (C22565 * C581 + C23198 + C23198 + C22559 * C591 + C22567 * C1284 +
            C23199 + C23199 + C49088 * C1292) *
               C49257) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
            C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
            C49315 * C588 + C23813 * C1283 + C23819 + C23819 + C49265 * C1291) *
               C23805 +
           (C23864 + C23865 + C23866 + C23867) * C48938) *
              C49043 * C49014 * C574 -
          ((C24030 + C24031 + C24032 + C24033) * C48938 +
           (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 + C23811 * C1283 +
            C24015 + C24015 + C49315 * C1291 + C23809 * C578 + C24016 + C24016 +
            C49325 * C588 + C23807 * C258 + C24017 + C24017 + C49329 * C270) *
               C23805) *
              C49043 * C49014 * C575 +
          ((C23807 * C578 + C24424 + C24424 + C49329 * C588 + C23809 * C1283 +
            C24425 + C24425 + C49325 * C1291 + C23811 * C1791 + C24426 +
            C24426 + C49315 * C1797 + C23813 * C9357 + C24427 + C24427 +
            C49265 * C9361) *
               C23805 +
           (C23807 * C579 + C24428 + C24428 + C49329 * C589 + C23809 * C1282 +
            C24429 + C24429 + C49325 * C1290 + C23811 * C1792 + C24430 +
            C24430 + C49315 * C1798 + C23813 * C9358 + C24431 + C24431 +
            C49265 * C9362) *
               C48938) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[41] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49328 +
            (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
               C49043 * C380 -
           ((C22958 + C22959) * C49257 + (C22960 + C22961) * C49308 +
            (C22962 + C22963) * C49321 +
            (C22567 * C680 + C22942 + C22942 + C49088 * C690 + C22565 * C386 +
             C22943 + C22943 + C22559 * C398) *
                C49328) *
               C49043 * C49287) *
              C508 +
          (((C22565 * C680 + C23330 + C23330 + C22559 * C690 + C22567 * C1483 +
             C23331 + C23331 + C49088 * C1491) *
                C49328 +
            (C22565 * C681 + C23332 + C23332 + C22559 * C691 + C22567 * C1482 +
             C23333 + C23333 + C49088 * C1490) *
                C49321 +
            (C22565 * C682 + C23334 + C23334 + C22559 * C692 + C22567 * C1481 +
             C23335 + C23335 + C49088 * C1489) *
                C49308 +
            (C22565 * C683 + C23336 + C23336 + C22559 * C693 + C22567 * C1484 +
             C23337 + C23337 + C49088 * C1492) *
                C49257) *
               C49043 * C49287 -
           ((C22788 + C22789) * C49257 + (C22790 + C22791) * C49308 +
            (C22792 + C22793) * C49321 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C49328) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C23805 +
            (C23864 + C23865 + C23866 + C23867) * C48938) *
               C49043 * C380 -
           ((C24192 + C24193 + C24194 + C24195) * C48938 +
            (C23813 * C1955 + C24176 + C24176 + C49265 * C1961 +
             C23811 * C1483 + C24177 + C24177 + C49315 * C1491 + C23809 * C680 +
             C24178 + C24178 + C49325 * C690 + C23807 * C386 + C24179 + C24179 +
             C49329 * C398) *
                C23805) *
               C49043 * C49287) *
              C508 +
          (((C23807 * C680 + C24562 + C24562 + C49329 * C690 + C23809 * C1483 +
             C24563 + C24563 + C49325 * C1491 + C23811 * C1955 + C24564 +
             C24564 + C49315 * C1961 + C23813 * C9455 + C24565 + C24565 +
             C49265 * C9459) *
                C23805 +
            (C23807 * C681 + C24566 + C24566 + C49329 * C691 + C23809 * C1482 +
             C24567 + C24567 + C49325 * C1490 + C23811 * C1956 + C24568 +
             C24568 + C49315 * C1962 + C23813 * C9456 + C24569 + C24569 +
             C49265 * C9460) *
                C48938) *
               C49043 * C49287 -
           ((C24030 + C24031 + C24032 + C24033) * C48938 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C23805) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[42] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49328 +
            (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
               C49043 * C782 -
           ((C22958 + C22959) * C49257 + (C22960 + C22961) * C49308 +
            (C22962 + C22963) * C49321 +
            (C22567 * C680 + C22942 + C22942 + C49088 * C690 + C22565 * C386 +
             C22943 + C22943 + C22559 * C398) *
                C49328) *
               C49043 * C49287) *
              C48997 * C510 +
          (((C22963 + C22962) * C49328 + (C22961 + C22960) * C49321 +
            (C22959 + C22958) * C49308 +
            (C22565 * C382 + C22944 + C22944 + C22559 * C394 + C22567 * C684 +
             C22945 + C22945 + C49088 * C694) *
                C49257) *
               C49043 * C49287 -
           ((C22620 + C22621) * C49257 + (C22619 + C22618) * C49308 +
            (C22617 + C22616) * C49321 + (C22615 + C22614) * C49328) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C23805 +
            (C23864 + C23865 + C23866 + C23867) * C48938) *
               C49043 * C782 -
           ((C24192 + C24193 + C24194 + C24195) * C48938 +
            (C23813 * C1955 + C24176 + C24176 + C49265 * C1961 +
             C23811 * C1483 + C24177 + C24177 + C49315 * C1491 + C23809 * C680 +
             C24178 + C24178 + C49325 * C690 + C23807 * C386 + C24179 + C24179 +
             C49329 * C398) *
                C23805) *
               C49043 * C49287) *
              C48997 * C510 +
          (((C24195 + C24194 + C24193 + C24192) * C23805 +
            (C23807 * C384 + C24180 + C24180 + C49329 * C396 + C23809 * C682 +
             C24181 + C24181 + C49325 * C692 + C23811 * C1481 + C24182 +
             C24182 + C49315 * C1489 + C23813 * C1957 + C24183 + C24183 +
             C49265 * C1963) *
                C48938) *
               C49043 * C49287 -
           ((C23868 + C23869 + C23870 + C23871) * C48938 +
            (C23867 + C23866 + C23865 + C23864) * C23805) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[43] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49328 +
            (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
               C49043 * C782 -
           ((C22958 + C22959) * C49257 + (C22960 + C22961) * C49308 +
            (C22962 + C22963) * C49321 +
            (C22567 * C680 + C22942 + C22942 + C49088 * C690 + C22565 * C386 +
             C22943 + C22943 + C22559 * C398) *
                C49328) *
               C49043 * C49287) *
              C250 +
          (((C22565 * C680 + C23330 + C23330 + C22559 * C690 + C22567 * C1483 +
             C23331 + C23331 + C49088 * C1491) *
                C49328 +
            (C22565 * C681 + C23332 + C23332 + C22559 * C691 + C22567 * C1482 +
             C23333 + C23333 + C49088 * C1490) *
                C49321 +
            (C22565 * C682 + C23334 + C23334 + C22559 * C692 + C22567 * C1481 +
             C23335 + C23335 + C49088 * C1489) *
                C49308 +
            (C22565 * C683 + C23336 + C23336 + C22559 * C693 + C22567 * C1484 +
             C23337 + C23337 + C49088 * C1492) *
                C49257) *
               C49043 * C49287 -
           ((C22788 + C22789) * C49257 + (C22790 + C22791) * C49308 +
            (C22792 + C22793) * C49321 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C49328) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C23805 +
            (C23864 + C23865 + C23866 + C23867) * C48938) *
               C49043 * C782 -
           ((C24192 + C24193 + C24194 + C24195) * C48938 +
            (C23813 * C1955 + C24176 + C24176 + C49265 * C1961 +
             C23811 * C1483 + C24177 + C24177 + C49315 * C1491 + C23809 * C680 +
             C24178 + C24178 + C49325 * C690 + C23807 * C386 + C24179 + C24179 +
             C49329 * C398) *
                C23805) *
               C49043 * C49287) *
              C250 +
          (((C23807 * C680 + C24562 + C24562 + C49329 * C690 + C23809 * C1483 +
             C24563 + C24563 + C49325 * C1491 + C23811 * C1955 + C24564 +
             C24564 + C49315 * C1961 + C23813 * C9455 + C24565 + C24565 +
             C49265 * C9459) *
                C23805 +
            (C23807 * C681 + C24566 + C24566 + C49329 * C691 + C23809 * C1482 +
             C24567 + C24567 + C49325 * C1490 + C23811 * C1956 + C24568 +
             C24568 + C49315 * C1962 + C23813 * C9456 + C24569 + C24569 +
             C49265 * C9460) *
                C48938) *
               C49043 * C49287 -
           ((C24030 + C24031 + C24032 + C24033) * C48938 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C23805) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[44] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
            C22571 + C22571 + C49088 * C270) *
               C49328 +
           (C22614 + C22615) * C49321 + C22622 * C49308 + C22623 * C49257) *
              C49043 * C928 -
          ((C22958 + C22959) * C49257 + (C22960 + C22961) * C49308 +
           (C22962 + C22963) * C49321 +
           (C22567 * C680 + C22942 + C22942 + C49088 * C690 + C22565 * C386 +
            C22943 + C22943 + C22559 * C398) *
               C49328) *
              C49043 * C929 +
          ((C22565 * C931 + C23696 + C23696 + C22559 * C941 + C22567 * C2375 +
            C23697 + C23697 + C49088 * C2387) *
               C49328 +
           (C22565 * C932 + C23698 + C23698 + C22559 * C942 + C22567 * C2377 +
            C23699 + C23699 + C49088 * C2389) *
               C49321 +
           (C22565 * C933 + C23700 + C23700 + C22559 * C943 + C22567 * C2379 +
            C23701 + C23701 + C49088 * C2391) *
               C49308 +
           (C22565 * C934 + C23702 + C23702 + C22559 * C944 + C22567 * C2676 +
            C23703 + C23703 + C49088 * C2678) *
               C49257) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
            C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
            C49315 * C588 + C23813 * C1283 + C23819 + C23819 + C49265 * C1291) *
               C23805 +
           (C23864 + C23865 + C23866 + C23867) * C48938) *
              C49043 * C928 -
          ((C24192 + C24193 + C24194 + C24195) * C48938 +
           (C23813 * C1955 + C24176 + C24176 + C49265 * C1961 + C23811 * C1483 +
            C24177 + C24177 + C49315 * C1491 + C23809 * C680 + C24178 + C24178 +
            C49325 * C690 + C23807 * C386 + C24179 + C24179 + C49329 * C398) *
               C23805) *
              C49043 * C929 +
          ((C23807 * C931 + C24928 + C24928 + C49329 * C941 + C23809 * C2375 +
            C24929 + C24929 + C49325 * C2387 + C23811 * C2376 + C24930 +
            C24930 + C49315 * C2388 + C23813 * C9939 + C24931 + C24931 +
            C49265 * C9943) *
               C23805 +
           (C23807 * C932 + C24932 + C24932 + C49329 * C942 + C23809 * C2377 +
            C24933 + C24933 + C49325 * C2389 + C23811 * C2378 + C24934 +
            C24934 + C49315 * C2390 + C23813 * C10206 + C24935 + C24935 +
            C49265 * C10208) *
               C48938) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[45] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
             C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 + C26798 +
             C26785 * C588) *
                C49235 +
            (C26847 + C26848 + C26849) * C48938) *
               C31477 +
           ((C30258 + C30259 + C30260) * C49235 + C30247 * C48938) * C49130) *
              C49014 * C48997 * C110 -
          (((C27228 + C27229 + C27230) * C48938 + C30251 * C49235) * C49130 +
           ((C26852 + C26851 + C26850) * C48938 +
            (C26849 + C26848 + C26847) * C49235) *
               C31477) *
              C49014 * C48997 * C111 +
          ((C26857 * C49235 + (C26855 + C26854 + C26853) * C48938) * C31477 +
           ((C27230 + C27229 + C27228) * C49235 +
            (C48083 * C383 + C27213 + C27213 + C49084 * C395 + C48071 * C683 +
             C27214 + C27214 + C49091 * C693 + C26793 * C1484 + C27215 +
             C27215 + C26785 * C1492) *
                C48938) *
               C49130) *
              C49014 * C48997 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[46] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
              C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 +
              C26798 + C26785 * C588) *
                 C49235 +
             (C26847 + C26848 + C26849) * C48938) *
                C31477 +
            ((C30258 + C30259 + C30260) * C49235 + C30247 * C48938) * C49130) *
               C49014 * C250 -
           (((C30033 + C30034 + C30035) * C48938 +
             (C30824 + C30823 + C30822) * C49235) *
                C49130 +
            ((C27043 + C27044 + C27045) * C48938 +
             (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
              C48071 * C578 + C27023 + C27023 + C49091 * C588 + C48083 * C258 +
              C27024 + C27024 + C49084 * C270) *
                 C49235) *
                C31477) *
               C49014 * C49285) *
              C252 +
          ((((C27045 + C27044 + C27043) * C49235 +
             (C27042 + C27041 + C27040) * C48938) *
                C31477 +
            ((C30035 + C30034 + C30033) * C49235 +
             (C48083 * C682 + C27651 + C27651 + C49084 * C692 + C48071 * C1481 +
              C27652 + C27652 + C49091 * C1489 + C26793 * C1957 + C27653 +
              C27653 + C26785 * C1963) *
                 C48938) *
                C49130) *
               C49014 * C49285 -
           (((C27228 + C27229 + C27230) * C48938 + C30251 * C49235) * C49130 +
            ((C26852 + C26851 + C26850) * C48938 +
             (C26849 + C26848 + C26847) * C49235) *
                C31477) *
               C49014 * C250) *
              C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[47] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
              C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 +
              C26798 + C26785 * C588) *
                 C49235 +
             (C26847 + C26848 + C26849) * C48938) *
                C31477 +
            ((C30258 + C30259 + C30260) * C49235 + C30247 * C48938) * C49130) *
               C380 -
           (((C30261 + C30262 + C30263) * C48938 +
             (C31377 + C31378 + C31379) * C49235) *
                C49130 +
            (C30251 * C48938 + (C30260 + C30259 + C30258) * C49235) * C31477) *
               C49287) *
              C48997 * C252 +
          (((C30247 * C49235 + (C27230 + C27229 + C27228) * C48938) * C31477 +
            ((C30263 + C30262 + C30261) * C49235 +
             (C48083 * C933 + C28062 + C28062 + C49084 * C943 + C48071 * C2379 +
              C28063 + C28063 + C49091 * C2391 + C26793 * C2380 + C28064 +
              C28064 + C26785 * C2392) *
                 C48938) *
                C49130) *
               C49287 -
           (((C27228 + C27229 + C27230) * C48938 + C30251 * C49235) * C49130 +
            ((C26852 + C26851 + C26850) * C48938 +
             (C26849 + C26848 + C26847) * C49235) *
                C31477) *
               C380) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[48] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
              C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 +
              C26798 + C26785 * C588) *
                 C49235 +
             (C26847 + C26848 + C26849) * C48938) *
                C31477 +
            ((C30258 + C30259 + C30260) * C49235 + C30247 * C48938) * C49130) *
               C49014 * C508 -
           (((C30033 + C30034 + C30035) * C48938 +
             (C30824 + C30823 + C30822) * C49235) *
                C49130 +
            ((C27043 + C27044 + C27045) * C48938 +
             (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
              C48071 * C578 + C27023 + C27023 + C49091 * C588 + C48083 * C258 +
              C27024 + C27024 + C49084 * C270) *
                 C49235) *
                C31477) *
               C49014 * C49285) *
              C510 +
          ((((C27045 + C27044 + C27043) * C49235 +
             (C27042 + C27041 + C27040) * C48938) *
                C31477 +
            ((C30035 + C30034 + C30033) * C49235 +
             (C48083 * C682 + C27651 + C27651 + C49084 * C692 + C48071 * C1481 +
              C27652 + C27652 + C49091 * C1489 + C26793 * C1957 + C27653 +
              C27653 + C26785 * C1963) *
                 C48938) *
                C49130) *
               C49014 * C49285 -
           (((C27228 + C27229 + C27230) * C48938 + C30251 * C49235) * C49130 +
            ((C26852 + C26851 + C26850) * C48938 +
             (C26849 + C26848 + C26847) * C49235) *
                C31477) *
               C49014 * C508) *
              C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[49] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
             C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 + C26798 +
             C26785 * C588) *
                C49235 +
            (C26847 + C26848 + C26849) * C48938) *
               C31477 +
           ((C30258 + C30259 + C30260) * C49235 + C30247 * C48938) * C49130) *
              C49014 * C574 -
          (((C30033 + C30034 + C30035) * C48938 +
            (C30824 + C30823 + C30822) * C49235) *
               C49130 +
           ((C27043 + C27044 + C27045) * C48938 +
            (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 + C48071 * C578 +
             C27023 + C27023 + C49091 * C588 + C48083 * C258 + C27024 + C27024 +
             C49084 * C270) *
                C49235) *
               C31477) *
              C49014 * C575 +
          (((C48083 * C578 + C27490 + C27490 + C49084 * C588 + C48071 * C1283 +
             C27491 + C27491 + C49091 * C1291 + C26793 * C1791 + C27492 +
             C27492 + C26785 * C1797) *
                C49235 +
            (C48083 * C579 + C27493 + C27493 + C49084 * C589 + C48071 * C1282 +
             C27494 + C27494 + C49091 * C1290 + C26793 * C1792 + C27495 +
             C27495 + C26785 * C1798) *
                C48938) *
               C31477 +
           ((C48083 * C1483 + C30604 + C30604 + C49084 * C1491 +
             C48071 * C1955 + C30605 + C30605 + C49091 * C1961 +
             C26793 * C9455 + C30606 + C30606 + C26785 * C9459) *
                C49235 +
            (C48083 * C1482 + C30607 + C30607 + C49084 * C1490 +
             C48071 * C1956 + C30608 + C30608 + C49091 * C1962 +
             C26793 * C9456 + C30609 + C30609 + C26785 * C9460) *
                C48938) *
               C49130) *
              C49014 * C576) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[50] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
              C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 +
              C26798 + C26785 * C588) *
                 C49235 +
             (C26847 + C26848 + C26849) * C48938) *
                C31477 +
            ((C30258 + C30259 + C30260) * C49235 + C30247 * C48938) * C49130) *
               C380 -
           (((C30261 + C30262 + C30263) * C48938 +
             (C31377 + C31378 + C31379) * C49235) *
                C49130 +
            (C30251 * C48938 + (C30260 + C30259 + C30258) * C49235) * C31477) *
               C49287) *
              C508 +
          ((((C30822 + C30823 + C30824) * C49235 +
             (C30035 + C30034 + C30033) * C48938) *
                C31477 +
            ((C48083 * C2375 + C30810 + C30810 + C49084 * C2387 +
              C48071 * C2376 + C30811 + C30811 + C49091 * C2388 +
              C26793 * C9939 + C30812 + C30812 + C26785 * C9943) *
                 C49235 +
             (C48083 * C2377 + C30813 + C30813 + C49084 * C2389 +
              C48071 * C2378 + C30814 + C30814 + C49091 * C2390 +
              C26793 * C10206 + C30815 + C30815 + C26785 * C10208) *
                 C48938) *
                C49130) *
               C49287 -
           (((C30033 + C30034 + C30035) * C48938 +
             (C30824 + C30823 + C30822) * C49235) *
                C49130 +
            ((C27043 + C27044 + C27045) * C48938 +
             (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
              C48071 * C578 + C27023 + C27023 + C49091 * C588 + C48083 * C258 +
              C27024 + C27024 + C49084 * C270) *
                 C49235) *
                C31477) *
               C380) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[51] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
              C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 +
              C26798 + C26785 * C588) *
                 C49235 +
             (C26847 + C26848 + C26849) * C48938) *
                C31477 +
            ((C30258 + C30259 + C30260) * C49235 + C30247 * C48938) * C49130) *
               C782 -
           (((C30261 + C30262 + C30263) * C48938 +
             (C31377 + C31378 + C31379) * C49235) *
                C49130 +
            (C30251 * C48938 + (C30260 + C30259 + C30258) * C49235) * C31477) *
               C49287) *
              C48997 * C510 +
          (((C30247 * C49235 + (C27230 + C27229 + C27228) * C48938) * C31477 +
            ((C30263 + C30262 + C30261) * C49235 +
             (C48083 * C933 + C28062 + C28062 + C49084 * C943 + C48071 * C2379 +
              C28063 + C28063 + C49091 * C2391 + C26793 * C2380 + C28064 +
              C28064 + C26785 * C2392) *
                 C48938) *
                C49130) *
               C49287 -
           (((C27228 + C27229 + C27230) * C48938 + C30251 * C49235) * C49130 +
            ((C26852 + C26851 + C26850) * C48938 +
             (C26849 + C26848 + C26847) * C49235) *
                C31477) *
               C782) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[52] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
              C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 +
              C26798 + C26785 * C588) *
                 C49235 +
             (C26847 + C26848 + C26849) * C48938) *
                C31477 +
            ((C30258 + C30259 + C30260) * C49235 + C30247 * C48938) * C49130) *
               C782 -
           (((C30261 + C30262 + C30263) * C48938 +
             (C31377 + C31378 + C31379) * C49235) *
                C49130 +
            (C30251 * C48938 + (C30260 + C30259 + C30258) * C49235) * C31477) *
               C49287) *
              C250 +
          ((((C30822 + C30823 + C30824) * C49235 +
             (C30035 + C30034 + C30033) * C48938) *
                C31477 +
            ((C48083 * C2375 + C30810 + C30810 + C49084 * C2387 +
              C48071 * C2376 + C30811 + C30811 + C49091 * C2388 +
              C26793 * C9939 + C30812 + C30812 + C26785 * C9943) *
                 C49235 +
             (C48083 * C2377 + C30813 + C30813 + C49084 * C2389 +
              C48071 * C2378 + C30814 + C30814 + C49091 * C2390 +
              C26793 * C10206 + C30815 + C30815 + C26785 * C10208) *
                 C48938) *
                C49130) *
               C49287 -
           (((C30033 + C30034 + C30035) * C48938 +
             (C30824 + C30823 + C30822) * C49235) *
                C49130 +
            ((C27043 + C27044 + C27045) * C48938 +
             (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
              C48071 * C578 + C27023 + C27023 + C49091 * C588 + C48083 * C258 +
              C27024 + C27024 + C49084 * C270) *
                 C49235) *
                C31477) *
               C782) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[53] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
             C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 + C26798 +
             C26785 * C588) *
                C49235 +
            (C26847 + C26848 + C26849) * C48938) *
               C31477 +
           ((C30258 + C30259 + C30260) * C49235 + C30247 * C48938) * C49130) *
              C928 -
          (((C30261 + C30262 + C30263) * C48938 +
            (C31377 + C31378 + C31379) * C49235) *
               C49130 +
           (C30251 * C48938 + (C30260 + C30259 + C30258) * C49235) * C31477) *
              C929 +
          (((C31379 + C31378 + C31377) * C49235 +
            (C30263 + C30262 + C30261) * C48938) *
               C31477 +
           ((C48083 * C2851 + C31365 + C31365 + C49084 * C2859 +
             C48071 * C3305 + C31366 + C31366 + C49091 * C3311 +
             C26793 * C10361 + C31367 + C31367 + C26785 * C10365) *
                C49235 +
            (C48083 * C2850 + C31368 + C31368 + C49084 * C2858 +
             C48071 * C3306 + C31369 + C31369 + C49091 * C3312 +
             C26793 * C10362 + C31370 + C31370 + C26785 * C10366) *
                C48938) *
               C49130) *
              C930) *
         C48997 * C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[54] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                    C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                    C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                       C48928 * C49126 +
                   (C30258 + C30259 + C30260) * C48928 * C49133 +
                   (C31379 + C31378 + C31377) * C48928 * C36909) *
                      C49014 * C48997 * C110 -
                  ((C30261 + C30262 + C30263) * C48928 * C36909 +
                   C30251 * C48928 * C49133 +
                   (C26849 + C26848 + C26847) * C48928 * C49126) *
                      C49014 * C48997 * C111 +
                  (C26857 * C48928 * C49126 +
                   (C27230 + C27229 + C27228) * C48928 * C49133 +
                   (C48083 * C933 + C28062 + C28062 + C49084 * C943 +
                    C48071 * C2379 + C28063 + C28063 + C49091 * C2391 +
                    C26793 * C2380 + C28064 + C28064 + C26785 * C2392) *
                       C48928 * C36909) *
                      C49014 * C48997 * C112)) /
                (p * q * std::sqrt(p + q));
    d2ee[55] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                     C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                     C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                        C48928 * C49126 +
                    (C30258 + C30259 + C30260) * C48928 * C49133 +
                    (C31379 + C31378 + C31377) * C48928 * C36909) *
                       C49014 * C250 -
                   ((C26793 * C9939 + C30812 + C30812 + C26785 * C9943 +
                     C48071 * C2376 + C30811 + C30811 + C49091 * C2388 +
                     C48083 * C2375 + C30810 + C30810 + C49084 * C2387) *
                        C48928 * C36909 +
                    (C30824 + C30823 + C30822) * C48928 * C49133 +
                    (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
                     C48071 * C578 + C27023 + C27023 + C49091 * C588 +
                     C48083 * C258 + C27024 + C27024 + C49084 * C270) *
                        C48928 * C49126) *
                       C49014 * C49285) *
                      C252 +
                  (((C27045 + C27044 + C27043) * C48928 * C49126 +
                    (C30035 + C30034 + C30033) * C48928 * C49133 +
                    (C48083 * C2377 + C30813 + C30813 + C49084 * C2389 +
                     C48071 * C2378 + C30814 + C30814 + C49091 * C2390 +
                     C26793 * C10206 + C30815 + C30815 + C26785 * C10208) *
                        C48928 * C36909) *
                       C49014 * C49285 -
                   ((C30261 + C30262 + C30263) * C48928 * C36909 +
                    C30251 * C48928 * C49133 +
                    (C26849 + C26848 + C26847) * C48928 * C49126) *
                       C49014 * C250) *
                      C49283)) /
                (p * q * std::sqrt(p + q));
    d2ee[56] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                     C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                     C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                        C48928 * C49126 +
                    (C30258 + C30259 + C30260) * C48928 * C49133 +
                    (C31379 + C31378 + C31377) * C48928 * C36909) *
                       C380 -
                   ((C26793 * C10361 + C31367 + C31367 + C26785 * C10365 +
                     C48071 * C3305 + C31366 + C31366 + C49091 * C3311 +
                     C48083 * C2851 + C31365 + C31365 + C49084 * C2859) *
                        C48928 * C36909 +
                    (C31377 + C31378 + C31379) * C48928 * C49133 +
                    (C30260 + C30259 + C30258) * C48928 * C49126) *
                       C49287) *
                      C48997 * C252 +
                  ((C30247 * C48928 * C49126 +
                    (C30263 + C30262 + C30261) * C48928 * C49133 +
                    (C48083 * C2850 + C31368 + C31368 + C49084 * C2858 +
                     C48071 * C3306 + C31369 + C31369 + C49091 * C3312 +
                     C26793 * C10362 + C31370 + C31370 + C26785 * C10366) *
                        C48928 * C36909) *
                       C49287 -
                   ((C30261 + C30262 + C30263) * C48928 * C36909 +
                    C30251 * C48928 * C49133 +
                    (C26849 + C26848 + C26847) * C48928 * C49126) *
                       C380) *
                      C48997 * C49283)) /
                (p * q * std::sqrt(p + q));
    d2ee[57] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                     C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                     C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                        C48928 * C49126 +
                    (C30258 + C30259 + C30260) * C48928 * C49133 +
                    (C31379 + C31378 + C31377) * C48928 * C36909) *
                       C49014 * C508 -
                   ((C26793 * C9939 + C30812 + C30812 + C26785 * C9943 +
                     C48071 * C2376 + C30811 + C30811 + C49091 * C2388 +
                     C48083 * C2375 + C30810 + C30810 + C49084 * C2387) *
                        C48928 * C36909 +
                    (C30824 + C30823 + C30822) * C48928 * C49133 +
                    (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
                     C48071 * C578 + C27023 + C27023 + C49091 * C588 +
                     C48083 * C258 + C27024 + C27024 + C49084 * C270) *
                        C48928 * C49126) *
                       C49014 * C49285) *
                      C510 +
                  (((C27045 + C27044 + C27043) * C48928 * C49126 +
                    (C30035 + C30034 + C30033) * C48928 * C49133 +
                    (C48083 * C2377 + C30813 + C30813 + C49084 * C2389 +
                     C48071 * C2378 + C30814 + C30814 + C49091 * C2390 +
                     C26793 * C10206 + C30815 + C30815 + C26785 * C10208) *
                        C48928 * C36909) *
                       C49014 * C49285 -
                   ((C30261 + C30262 + C30263) * C48928 * C36909 +
                    C30251 * C48928 * C49133 +
                    (C26849 + C26848 + C26847) * C48928 * C49126) *
                       C49014 * C508) *
                      C49283)) /
                (p * q * std::sqrt(p + q));
    d2ee[58] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                    C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                    C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                       C48928 * C49126 +
                   (C30258 + C30259 + C30260) * C48928 * C49133 +
                   (C31379 + C31378 + C31377) * C48928 * C36909) *
                      C49014 * C574 -
                  ((C26793 * C9939 + C30812 + C30812 + C26785 * C9943 +
                    C48071 * C2376 + C30811 + C30811 + C49091 * C2388 +
                    C48083 * C2375 + C30810 + C30810 + C49084 * C2387) *
                       C48928 * C36909 +
                   (C30824 + C30823 + C30822) * C48928 * C49133 +
                   (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
                    C48071 * C578 + C27023 + C27023 + C49091 * C588 +
                    C48083 * C258 + C27024 + C27024 + C49084 * C270) *
                       C48928 * C49126) *
                      C49014 * C575 +
                  ((C48083 * C578 + C27490 + C27490 + C49084 * C588 +
                    C48071 * C1283 + C27491 + C27491 + C49091 * C1291 +
                    C26793 * C1791 + C27492 + C27492 + C26785 * C1797) *
                       C48928 * C49126 +
                   (C48083 * C1483 + C30604 + C30604 + C49084 * C1491 +
                    C48071 * C1955 + C30605 + C30605 + C49091 * C1961 +
                    C26793 * C9455 + C30606 + C30606 + C26785 * C9459) *
                       C48928 * C49133 +
                   (C48083 * C2376 + C47351 + C47351 + C49084 * C2388 +
                    C48071 * C9939 + C47352 + C47352 + C49091 * C9943 +
                    C26793 * C9940 + C47353 + C47353 + C26785 * C9944) *
                       C48928 * C36909) *
                      C49014 * C576) *
                 C48963) /
                (p * q * std::sqrt(p + q));
    d2ee[59] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                     C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                     C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                        C48928 * C49126 +
                    (C30258 + C30259 + C30260) * C48928 * C49133 +
                    (C31379 + C31378 + C31377) * C48928 * C36909) *
                       C380 -
                   ((C26793 * C10361 + C31367 + C31367 + C26785 * C10365 +
                     C48071 * C3305 + C31366 + C31366 + C49091 * C3311 +
                     C48083 * C2851 + C31365 + C31365 + C49084 * C2859) *
                        C48928 * C36909 +
                    (C31377 + C31378 + C31379) * C48928 * C49133 +
                    (C30260 + C30259 + C30258) * C48928 * C49126) *
                       C49287) *
                      C508 +
                  (((C30822 + C30823 + C30824) * C48928 * C49126 +
                    (C47515 + C47516 + C47517) * C48928 * C49133 +
                    (C48083 * C3305 + C47506 + C47506 + C49084 * C3311 +
                     C48071 * C10361 + C47507 + C47507 + C49091 * C10365 +
                     C26793 * C10826 + C47508 + C47508 + C26785 * C10828) *
                        C48928 * C36909) *
                       C49287 -
                   ((C47517 + C47516 + C47515) * C48928 * C36909 +
                    (C30824 + C30823 + C30822) * C48928 * C49133 +
                    (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
                     C48071 * C578 + C27023 + C27023 + C49091 * C588 +
                     C48083 * C258 + C27024 + C27024 + C49084 * C270) *
                        C48928 * C49126) *
                       C380) *
                      C49285) *
                 C48963) /
                (p * q * std::sqrt(p + q));
    d2ee[60] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                     C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                     C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                        C48928 * C49126 +
                    (C30258 + C30259 + C30260) * C48928 * C49133 +
                    (C31379 + C31378 + C31377) * C48928 * C36909) *
                       C782 -
                   ((C26793 * C10361 + C31367 + C31367 + C26785 * C10365 +
                     C48071 * C3305 + C31366 + C31366 + C49091 * C3311 +
                     C48083 * C2851 + C31365 + C31365 + C49084 * C2859) *
                        C48928 * C36909 +
                    (C31377 + C31378 + C31379) * C48928 * C49133 +
                    (C30260 + C30259 + C30258) * C48928 * C49126) *
                       C49287) *
                      C48997 * C510 +
                  ((C30247 * C48928 * C49126 +
                    (C30263 + C30262 + C30261) * C48928 * C49133 +
                    (C48083 * C2850 + C31368 + C31368 + C49084 * C2858 +
                     C48071 * C3306 + C31369 + C31369 + C49091 * C3312 +
                     C26793 * C10362 + C31370 + C31370 + C26785 * C10366) *
                        C48928 * C36909) *
                       C49287 -
                   ((C30261 + C30262 + C30263) * C48928 * C36909 +
                    C30251 * C48928 * C49133 +
                    (C26849 + C26848 + C26847) * C48928 * C49126) *
                       C782) *
                      C48997 * C49283)) /
                (p * q * std::sqrt(p + q));
    d2ee[61] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C48083 * C115 + C26796 + C26796 + C49084 * C129 +
                     C48071 * C258 + C26797 + C26797 + C49091 * C270 +
                     C26793 * C578 + C26798 + C26798 + C26785 * C588) *
                        C48928 * C49126 +
                    (C30258 + C30259 + C30260) * C48928 * C49133 +
                    (C31379 + C31378 + C31377) * C48928 * C36909) *
                       C782 -
                   ((C26793 * C10361 + C31367 + C31367 + C26785 * C10365 +
                     C48071 * C3305 + C31366 + C31366 + C49091 * C3311 +
                     C48083 * C2851 + C31365 + C31365 + C49084 * C2859) *
                        C48928 * C36909 +
                    (C31377 + C31378 + C31379) * C48928 * C49133 +
                    (C30260 + C30259 + C30258) * C48928 * C49126) *
                       C49287) *
                      C250 +
                  (((C30822 + C30823 + C30824) * C48928 * C49126 +
                    (C47515 + C47516 + C47517) * C48928 * C49133 +
                    (C48083 * C3305 + C47506 + C47506 + C49084 * C3311 +
                     C48071 * C10361 + C47507 + C47507 + C49091 * C10365 +
                     C26793 * C10826 + C47508 + C47508 + C26785 * C10828) *
                        C48928 * C36909) *
                       C49287 -
                   ((C47517 + C47516 + C47515) * C48928 * C36909 +
                    (C30824 + C30823 + C30822) * C48928 * C49133 +
                    (C26793 * C1283 + C27022 + C27022 + C26785 * C1291 +
                     C48071 * C578 + C27023 + C27023 + C49091 * C588 +
                     C48083 * C258 + C27024 + C27024 + C49084 * C270) *
                        C48928 * C49126) *
                       C782) *
                      C49285) *
                 C48963) /
                (p * q * std::sqrt(p + q));
    d2ee[62] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C48083 * C115 + C26796 + C26796 + C49084 * C129 + C48071 * C258 +
            C26797 + C26797 + C49091 * C270 + C26793 * C578 + C26798 + C26798 +
            C26785 * C588) *
               C48928 * C49126 +
           (C30258 + C30259 + C30260) * C48928 * C49133 + C47934 * C36909) *
              C928 -
          ((C47938 + C47939 + C47940) * C48928 * C36909 +
           (C31377 + C31378 + C31379) * C48928 * C49133 +
           (C30260 + C30259 + C30258) * C48928 * C49126) *
              C929 +
          (C47934 * C49126 + (C47940 + C47939 + C47938) * C48928 * C49133 +
           (C48083 * C3735 + C47927 + C47927 + C49084 * C3741 +
            C48071 * C11264 + C47928 + C47928 + C49091 * C11268 +
            C26793 * C11265 + C47929 + C47929 + C26785 * C11269) *
               C48928 * C36909) *
              C930) *
         C48997 * C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[63] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
            C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
            C49315 * C588 + C23813 * C1283 + C23819 + C23819 + C49265 * C1291) *
               C48928 * C31477 +
           (C23807 * C386 + C24179 + C24179 + C49329 * C398 + C23809 * C680 +
            C24178 + C24178 + C49325 * C690 + C23811 * C1483 + C24177 + C24177 +
            C49315 * C1491 + C23813 * C1955 + C24176 + C24176 +
            C49265 * C1961) *
               C48928 * C49130) *
              C49014 * C48997 * C110 -
          ((C24192 + C24193 + C24194 + C24195) * C48928 * C49130 +
           (C23867 + C23866 + C23865 + C23864) * C48928 * C31477) *
              C49014 * C48997 * C111 +
          ((C23871 + C23870 + C23869 + C23868) * C48928 * C31477 +
           (C23807 * C384 + C24180 + C24180 + C49329 * C396 + C23809 * C682 +
            C24181 + C24181 + C49325 * C692 + C23811 * C1481 + C24182 + C24182 +
            C49315 * C1489 + C23813 * C1957 + C24183 + C24183 +
            C49265 * C1963) *
               C48928 * C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49319 +
            (C22614 + C22615) * C49306 + C22622 * C49279) *
               C31477 +
           ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
               C49130) *
              C49014 * C48997 * C110 -
          (((C22958 + C22959) * C49279 + C28610 * C49306 + C25535 * C49319) *
               C49130 +
           ((C22619 + C22618) * C49279 + (C22617 + C22616) * C49306 +
            (C22615 + C22614) * C49319) *
               C31477) *
              C49014 * C48997 * C111 +
          ((C22622 * C49319 + C22623 * C49306 + (C22621 + C22620) * C49279) *
               C31477 +
           (C28211 * C49319 + (C22959 + C22958) * C49306 +
            (C22565 * C382 + C22944 + C22944 + C22559 * C394 + C22567 * C684 +
             C22945 + C22945 + C49088 * C694) *
                C49279) *
               C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
            C22571 + C22571 + C49088 * C270) *
               C48928 * C49330 +
           (C25550 + C25551) * C48928 * C49327 + C26656 * C48928 * C49318 +
           (C26673 + C26672) * C48928 * C49272) *
              C49014 * C48997 * C110 -
          ((C25554 + C25555) * C48928 * C49272 + C25534 * C48928 * C49318 +
           C25535 * C48928 * C49327 + (C22615 + C22614) * C48928 * C49330) *
              C49014 * C48997 * C111 +
          (C22622 * C48928 * C49330 + C28211 * C48928 * C49327 +
           (C25101 + C25100) * C48928 * C49318 +
           (C22565 * C2849 + C25536 + C25536 + C22559 * C2857 + C22567 * C3307 +
            C25537 + C25537 + C49088 * C3313) *
               C48928 * C49272) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[64] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C48928 * C31477 +
            (C23807 * C386 + C24179 + C24179 + C49329 * C398 + C23809 * C680 +
             C24178 + C24178 + C49325 * C690 + C23811 * C1483 + C24177 +
             C24177 + C49315 * C1491 + C23813 * C1955 + C24176 + C24176 +
             C49265 * C1961) *
                C48928 * C49130) *
               C49014 * C250 -
           ((C23813 * C9455 + C24565 + C24565 + C49265 * C9459 +
             C23811 * C1955 + C24564 + C24564 + C49315 * C1961 +
             C23809 * C1483 + C24563 + C24563 + C49325 * C1491 + C23807 * C680 +
             C24562 + C24562 + C49329 * C690) *
                C48928 * C49130 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C48928 * C31477) *
               C49014 * C49285) *
              C252 +
          (((C24033 + C24032 + C24031 + C24030) * C48928 * C31477 +
            (C23807 * C681 + C24566 + C24566 + C49329 * C691 + C23809 * C1482 +
             C24567 + C24567 + C49325 * C1490 + C23811 * C1956 + C24568 +
             C24568 + C49315 * C1962 + C23813 * C9456 + C24569 + C24569 +
             C49265 * C9460) *
                C48928 * C49130) *
               C49014 * C49285 -
           ((C24192 + C24193 + C24194 + C24195) * C48928 * C49130 +
            (C23867 + C23866 + C23865 + C23864) * C48928 * C31477) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49319 +
             (C22614 + C22615) * C49306 + C22622 * C49279) *
                C31477 +
            ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
                C49130) *
               C49014 * C250 -
           (((C28414 + C28415) * C49279 + (C25320 + C25321) * C49306 +
             (C26119 + C26118) * C49319) *
                C49130 +
            ((C22790 + C22791) * C49279 + (C22792 + C22793) * C49306 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C49319) *
                C31477) *
               C49014 * C49285) *
              C252 +
          ((((C22793 + C22792) * C49319 + (C22791 + C22790) * C49306 +
             (C22789 + C22788) * C49279) *
                C31477 +
            ((C25321 + C25320) * C49319 + (C28415 + C28414) * C49306 +
             (C22565 * C683 + C23336 + C23336 + C22559 * C693 + C22567 * C1484 +
              C23337 + C23337 + C49088 * C1492) *
                 C49279) *
                C49130) *
               C49014 * C49285 -
           (((C22958 + C22959) * C49279 + C28610 * C49306 + C25535 * C49319) *
                C49130 +
            ((C22619 + C22618) * C49279 + (C22617 + C22616) * C49306 +
             (C22615 + C22614) * C49319) *
                C31477) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C48928 * C49330 +
            (C25550 + C25551) * C48928 * C49327 + C26656 * C48928 * C49318 +
            (C26673 + C26672) * C48928 * C49272) *
               C49014 * C250 -
           ((C22567 * C10361 + C26107 + C26107 + C49088 * C10365 +
             C22565 * C3305 + C26106 + C26106 + C22559 * C3311) *
                C48928 * C49272 +
            (C26121 + C26120) * C48928 * C49318 +
            (C26119 + C26118) * C48928 * C49327 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C48928 * C49330) *
               C49014 * C49285) *
              C252 +
          (((C22793 + C22792) * C48928 * C49330 +
            (C25321 + C25320) * C48928 * C49327 +
            (C25319 + C25318) * C48928 * C49318 +
            (C22565 * C3306 + C26108 + C26108 + C22559 * C3312 +
             C22567 * C10362 + C26109 + C26109 + C49088 * C10366) *
                C48928 * C49272) *
               C49014 * C49285 -
           ((C25554 + C25555) * C48928 * C49272 + C25534 * C48928 * C49318 +
            C25535 * C48928 * C49327 + (C22615 + C22614) * C48928 * C49330) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[65] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C48928 * C31477 +
            (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
               C380 -
           ((C23813 * C9939 + C24931 + C24931 + C49265 * C9943 +
             C23811 * C2376 + C24930 + C24930 + C49315 * C2388 +
             C23809 * C2375 + C24929 + C24929 + C49325 * C2387 + C23807 * C931 +
             C24928 + C24928 + C49329 * C941) *
                C48928 * C49130 +
            (C41614 + C41613 + C41612 + C41611) * C48928 * C31477) *
               C49287) *
              C48997 * C252 +
          (((C24195 + C24194 + C24193 + C24192) * C48928 * C31477 +
            (C23807 * C932 + C24932 + C24932 + C49329 * C942 + C23809 * C2377 +
             C24933 + C24933 + C49325 * C2389 + C23811 * C2378 + C24934 +
             C24934 + C49315 * C2390 + C23813 * C10206 + C24935 + C24935 +
             C49265 * C10208) *
                C48928 * C49130) *
               C49287 -
           ((C24192 + C24193 + C24194 + C24195) * C48928 * C49130 +
            (C23867 + C23866 + C23865 + C23864) * C48928 * C31477) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49319 +
             (C22614 + C22615) * C49306 + C22622 * C49279) *
                C31477 +
            ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
                C49130) *
               C380 -
           (((C25100 + C25101) * C49279 + C25534 * C49306 +
             (C25553 + C25552) * C49319) *
                C49130 +
            (C28610 * C49279 + C25535 * C49306 + (C25551 + C25550) * C49319) *
                C31477) *
               C49287) *
              C48997 * C252 +
          (((C25520 * C49319 + C28211 * C49306 + (C22959 + C22958) * C49279) *
                C31477 +
            (C25525 * C49319 + (C25101 + C25100) * C49306 +
             (C22565 * C934 + C23702 + C23702 + C22559 * C944 + C22567 * C2676 +
              C23703 + C23703 + C49088 * C2678) *
                 C49279) *
                C49130) *
               C49287 -
           (((C22958 + C22959) * C49279 + C28610 * C49306 + C25535 * C49319) *
                C49130 +
            ((C22619 + C22618) * C49279 + (C22617 + C22616) * C49306 +
             (C22615 + C22614) * C49319) *
                C31477) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C48928 * C49330 +
            (C25550 + C25551) * C48928 * C49327 + C26656 * C48928 * C49318 +
            (C26673 + C26672) * C48928 * C49272) *
               C380 -
           ((C22567 * C11264 + C26663 + C26663 + C49088 * C11268 +
             C22565 * C3735 + C26662 + C26662 + C22559 * C3741) *
                C48928 * C49272 +
            (C26672 + C26673) * C48928 * C49318 +
            (C25553 + C25552) * C48928 * C49327 +
            (C25551 + C25550) * C48928 * C49330) *
               C49287) *
              C48997 * C252 +
          ((C25520 * C48928 * C49330 + C25525 * C48928 * C49327 +
            (C25555 + C25554) * C48928 * C49318 +
            (C22565 * C3736 + C26664 + C26664 + C22559 * C3742 +
             C22567 * C17997 + C26665 + C26665 + C49088 * C17999) *
                C48928 * C49272) *
               C49287 -
           ((C25554 + C25555) * C48928 * C49272 + C25534 * C48928 * C49318 +
            C25535 * C48928 * C49327 + (C22615 + C22614) * C48928 * C49330) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[66] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C48928 * C31477 +
            (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
               C49014 * C508 -
           ((C23813 * C9455 + C24565 + C24565 + C49265 * C9459 +
             C23811 * C1955 + C24564 + C24564 + C49315 * C1961 +
             C23809 * C1483 + C24563 + C24563 + C49325 * C1491 + C23807 * C680 +
             C24562 + C24562 + C49329 * C690) *
                C48928 * C49130 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C48928 * C31477) *
               C49014 * C49285) *
              C510 +
          (((C24033 + C24032 + C24031 + C24030) * C48928 * C31477 +
            (C23807 * C681 + C24566 + C24566 + C49329 * C691 + C23809 * C1482 +
             C24567 + C24567 + C49325 * C1490 + C23811 * C1956 + C24568 +
             C24568 + C49315 * C1962 + C23813 * C9456 + C24569 + C24569 +
             C49265 * C9460) *
                C48928 * C49130) *
               C49014 * C49285 -
           ((C24192 + C24193 + C24194 + C24195) * C48928 * C49130 +
            (C23867 + C23866 + C23865 + C23864) * C48928 * C31477) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49319 +
             (C22614 + C22615) * C49306 + C22622 * C49279) *
                C31477 +
            ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
                C49130) *
               C49014 * C508 -
           (((C28414 + C28415) * C49279 + (C25320 + C25321) * C49306 +
             (C26119 + C26118) * C49319) *
                C49130 +
            ((C22790 + C22791) * C49279 + (C22792 + C22793) * C49306 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C49319) *
                C31477) *
               C49014 * C49285) *
              C510 +
          ((((C22793 + C22792) * C49319 + (C22791 + C22790) * C49306 +
             (C22789 + C22788) * C49279) *
                C31477 +
            ((C25321 + C25320) * C49319 + (C28415 + C28414) * C49306 +
             (C22565 * C683 + C23336 + C23336 + C22559 * C693 + C22567 * C1484 +
              C23337 + C23337 + C49088 * C1492) *
                 C49279) *
                C49130) *
               C49014 * C49285 -
           (((C22958 + C22959) * C49279 + C28610 * C49306 + C25535 * C49319) *
                C49130 +
            ((C22619 + C22618) * C49279 + (C22617 + C22616) * C49306 +
             (C22615 + C22614) * C49319) *
                C31477) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C48928 * C49330 +
            (C25550 + C25551) * C48928 * C49327 + C26656 * C48928 * C49318 +
            (C26673 + C26672) * C48928 * C49272) *
               C49014 * C508 -
           ((C22567 * C10361 + C26107 + C26107 + C49088 * C10365 +
             C22565 * C3305 + C26106 + C26106 + C22559 * C3311) *
                C48928 * C49272 +
            (C26121 + C26120) * C48928 * C49318 +
            (C26119 + C26118) * C48928 * C49327 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C48928 * C49330) *
               C49014 * C49285) *
              C510 +
          (((C22793 + C22792) * C48928 * C49330 +
            (C25321 + C25320) * C48928 * C49327 +
            (C25319 + C25318) * C48928 * C49318 +
            (C22565 * C3306 + C26108 + C26108 + C22559 * C3312 +
             C22567 * C10362 + C26109 + C26109 + C49088 * C10366) *
                C48928 * C49272) *
               C49014 * C49285 -
           ((C25554 + C25555) * C48928 * C49272 + C25534 * C48928 * C49318 +
            C25535 * C48928 * C49327 + (C22615 + C22614) * C48928 * C49330) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[67] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
            C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
            C49315 * C588 + C23813 * C1283 + C23819 + C23819 + C49265 * C1291) *
               C48928 * C31477 +
           (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
              C49014 * C574 -
          ((C23813 * C9455 + C24565 + C24565 + C49265 * C9459 + C23811 * C1955 +
            C24564 + C24564 + C49315 * C1961 + C23809 * C1483 + C24563 +
            C24563 + C49325 * C1491 + C23807 * C680 + C24562 + C24562 +
            C49329 * C690) *
               C48928 * C49130 +
           (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 + C23811 * C1283 +
            C24015 + C24015 + C49315 * C1291 + C23809 * C578 + C24016 + C24016 +
            C49325 * C588 + C23807 * C258 + C24017 + C24017 + C49329 * C270) *
               C48928 * C31477) *
              C49014 * C575 +
          ((C23807 * C578 + C24424 + C24424 + C49329 * C588 + C23809 * C1283 +
            C24425 + C24425 + C49325 * C1291 + C23811 * C1791 + C24426 +
            C24426 + C49315 * C1797 + C23813 * C9357 + C24427 + C24427 +
            C49265 * C9361) *
               C48928 * C31477 +
           (C23807 * C1483 + C41843 + C41843 + C49329 * C1491 + C23809 * C1955 +
            C41844 + C41844 + C49325 * C1961 + C23811 * C9455 + C41845 +
            C41845 + C49315 * C9459 + C23813 * C9705 + C41846 + C41846 +
            C49265 * C9707) *
               C48928 * C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49319 +
            (C22614 + C22615) * C49306 + C22622 * C49279) *
               C31477 +
           ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
               C49130) *
              C49014 * C574 -
          (((C28414 + C28415) * C49279 + (C25320 + C25321) * C49306 +
            (C26119 + C26118) * C49319) *
               C49130 +
           ((C22790 + C22791) * C49279 + (C22792 + C22793) * C49306 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C49319) *
               C31477) *
              C49014 * C575 +
          (((C22565 * C578 + C23192 + C23192 + C22559 * C588 + C22567 * C1283 +
             C23193 + C23193 + C49088 * C1291) *
                C49319 +
            (C22565 * C579 + C23194 + C23194 + C22559 * C589 + C22567 * C1282 +
             C23195 + C23195 + C49088 * C1290) *
                C49306 +
            (C22565 * C580 + C23196 + C23196 + C22559 * C590 + C22567 * C1281 +
             C23197 + C23197 + C49088 * C1289) *
                C49279) *
               C31477 +
           ((C22565 * C1483 + C25896 + C25896 + C22559 * C1491 +
             C22567 * C1955 + C25897 + C25897 + C49088 * C1961) *
                C49319 +
            (C22565 * C1482 + C25898 + C25898 + C22559 * C1490 +
             C22567 * C1956 + C25899 + C25899 + C49088 * C1962) *
                C49306 +
            (C22565 * C1481 + C28951 + C28951 + C22559 * C1489 +
             C22567 * C1957 + C28952 + C28952 + C49088 * C1963) *
                C49279) *
               C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
            C22571 + C22571 + C49088 * C270) *
               C48928 * C49330 +
           (C25550 + C25551) * C48928 * C49327 + C26656 * C48928 * C49318 +
           (C26673 + C26672) * C48928 * C49272) *
              C49014 * C574 -
          ((C22567 * C10361 + C26107 + C26107 + C49088 * C10365 +
            C22565 * C3305 + C26106 + C26106 + C22559 * C3311) *
               C48928 * C49272 +
           (C26121 + C26120) * C48928 * C49318 +
           (C26119 + C26118) * C48928 * C49327 +
           (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
            C22773 + C22773 + C22559 * C270) *
               C48928 * C49330) *
              C49014 * C575 +
          ((C22565 * C578 + C23192 + C23192 + C22559 * C588 + C22567 * C1283 +
            C23193 + C23193 + C49088 * C1291) *
               C48928 * C49330 +
           (C22565 * C1483 + C25896 + C25896 + C22559 * C1491 + C22567 * C1955 +
            C25897 + C25897 + C49088 * C1961) *
               C48928 * C49327 +
           (C22565 * C2376 + C25900 + C25900 + C22559 * C2388 + C22567 * C9939 +
            C25901 + C25901 + C49088 * C9943) *
               C48928 * C49318 +
           (C22565 * C10361 + C42969 + C42969 + C22559 * C10365 +
            C22567 * C10826 + C42970 + C42970 + C49088 * C10828) *
               C48928 * C49272) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[68] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C48928 * C31477 +
            (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
               C380 -
           ((C23813 * C9939 + C24931 + C24931 + C49265 * C9943 +
             C23811 * C2376 + C24930 + C24930 + C49315 * C2388 +
             C23809 * C2375 + C24929 + C24929 + C49325 * C2387 + C23807 * C931 +
             C24928 + C24928 + C49329 * C941) *
                C48928 * C49130 +
            (C41614 + C41613 + C41612 + C41611) * C48928 * C31477) *
               C49287) *
              C508 +
          (((C41997 + C41998 + C41999 + C42000) * C48928 * C31477 +
            (C23807 * C2375 + C41985 + C41985 + C49329 * C2387 +
             C23809 * C2376 + C41986 + C41986 + C49325 * C2388 +
             C23811 * C9939 + C41987 + C41987 + C49315 * C9943 +
             C23813 * C9940 + C41988 + C41988 + C49265 * C9944) *
                C48928 * C49130) *
               C49287 -
           ((C42000 + C41999 + C41998 + C41997) * C48928 * C49130 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C48928 * C31477) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49319 +
             (C22614 + C22615) * C49306 + C22622 * C49279) *
                C31477 +
            ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
                C49130) *
               C380 -
           (((C25100 + C25101) * C49279 + C25534 * C49306 +
             (C25553 + C25552) * C49319) *
                C49130 +
            (C28610 * C49279 + C25535 * C49306 + (C25551 + C25550) * C49319) *
                C31477) *
               C49287) *
              C508 +
          ((((C26118 + C26119) * C49319 + (C25321 + C25320) * C49306 +
             (C28415 + C28414) * C49279) *
                C31477 +
            ((C26120 + C26121) * C49319 + (C25319 + C25318) * C49306 +
             (C22565 * C2379 + C25308 + C25308 + C22559 * C2391 +
              C22567 * C2380 + C25309 + C25309 + C49088 * C2392) *
                 C49279) *
                C49130) *
               C49287 -
           (((C28414 + C28415) * C49279 + (C25320 + C25321) * C49306 +
             (C26119 + C26118) * C49319) *
                C49130 +
            ((C22790 + C22791) * C49279 + (C22792 + C22793) * C49306 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C49319) *
                C31477) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C48928 * C49330 +
            (C25550 + C25551) * C48928 * C49327 + C26656 * C48928 * C49318 +
            (C26673 + C26672) * C48928 * C49272) *
               C380 -
           ((C22567 * C11264 + C26663 + C26663 + C49088 * C11268 +
             C22565 * C3735 + C26662 + C26662 + C22559 * C3741) *
                C48928 * C49272 +
            (C26672 + C26673) * C48928 * C49318 +
            (C25553 + C25552) * C48928 * C49327 +
            (C25551 + C25550) * C48928 * C49330) *
               C49287) *
              C508 +
          (((C26118 + C26119) * C48928 * C49330 +
            (C26120 + C26121) * C48928 * C49327 +
            (C43111 + C43112) * C48928 * C49318 +
            (C22565 * C11264 + C43105 + C43105 + C22559 * C11268 +
             C22567 * C11265 + C43106 + C43106 + C49088 * C11269) *
                C48928 * C49272) *
               C49287 -
           ((C43112 + C43111) * C48928 * C49272 +
            (C26121 + C26120) * C48928 * C49318 +
            (C26119 + C26118) * C48928 * C49327 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C48928 * C49330) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[69] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C48928 * C31477 +
            (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
               C782 -
           ((C23813 * C9939 + C24931 + C24931 + C49265 * C9943 +
             C23811 * C2376 + C24930 + C24930 + C49315 * C2388 +
             C23809 * C2375 + C24929 + C24929 + C49325 * C2387 + C23807 * C931 +
             C24928 + C24928 + C49329 * C941) *
                C48928 * C49130 +
            (C41614 + C41613 + C41612 + C41611) * C48928 * C31477) *
               C49287) *
              C48997 * C510 +
          (((C24195 + C24194 + C24193 + C24192) * C48928 * C31477 +
            (C23807 * C932 + C24932 + C24932 + C49329 * C942 + C23809 * C2377 +
             C24933 + C24933 + C49325 * C2389 + C23811 * C2378 + C24934 +
             C24934 + C49315 * C2390 + C23813 * C10206 + C24935 + C24935 +
             C49265 * C10208) *
                C48928 * C49130) *
               C49287 -
           ((C24192 + C24193 + C24194 + C24195) * C48928 * C49130 +
            (C23867 + C23866 + C23865 + C23864) * C48928 * C31477) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49319 +
             (C22614 + C22615) * C49306 + C22622 * C49279) *
                C31477 +
            ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
                C49130) *
               C782 -
           (((C25100 + C25101) * C49279 + C25534 * C49306 +
             (C25553 + C25552) * C49319) *
                C49130 +
            (C28610 * C49279 + C25535 * C49306 + (C25551 + C25550) * C49319) *
                C31477) *
               C49287) *
              C48997 * C510 +
          (((C25520 * C49319 + C28211 * C49306 + (C22959 + C22958) * C49279) *
                C31477 +
            (C25525 * C49319 + (C25101 + C25100) * C49306 +
             (C22565 * C934 + C23702 + C23702 + C22559 * C944 + C22567 * C2676 +
              C23703 + C23703 + C49088 * C2678) *
                 C49279) *
                C49130) *
               C49287 -
           (((C22958 + C22959) * C49279 + C28610 * C49306 + C25535 * C49319) *
                C49130 +
            ((C22619 + C22618) * C49279 + (C22617 + C22616) * C49306 +
             (C22615 + C22614) * C49319) *
                C31477) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C48928 * C49330 +
            (C25550 + C25551) * C48928 * C49327 + C26656 * C48928 * C49318 +
            (C26673 + C26672) * C48928 * C49272) *
               C782 -
           ((C22567 * C11264 + C26663 + C26663 + C49088 * C11268 +
             C22565 * C3735 + C26662 + C26662 + C22559 * C3741) *
                C48928 * C49272 +
            (C26672 + C26673) * C48928 * C49318 +
            (C25553 + C25552) * C48928 * C49327 +
            (C25551 + C25550) * C48928 * C49330) *
               C49287) *
              C48997 * C510 +
          ((C25520 * C48928 * C49330 + C25525 * C48928 * C49327 +
            (C25555 + C25554) * C48928 * C49318 +
            (C22565 * C3736 + C26664 + C26664 + C22559 * C3742 +
             C22567 * C17997 + C26665 + C26665 + C49088 * C17999) *
                C48928 * C49272) *
               C49287 -
           ((C25554 + C25555) * C48928 * C49272 + C25534 * C48928 * C49318 +
            C25535 * C48928 * C49327 + (C22615 + C22614) * C48928 * C49330) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[70] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C48928 * C31477 +
            (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
               C782 -
           ((C23813 * C9939 + C24931 + C24931 + C49265 * C9943 +
             C23811 * C2376 + C24930 + C24930 + C49315 * C2388 +
             C23809 * C2375 + C24929 + C24929 + C49325 * C2387 + C23807 * C931 +
             C24928 + C24928 + C49329 * C941) *
                C48928 * C49130 +
            (C41614 + C41613 + C41612 + C41611) * C48928 * C31477) *
               C49287) *
              C250 +
          (((C41997 + C41998 + C41999 + C42000) * C48928 * C31477 +
            (C23807 * C2375 + C41985 + C41985 + C49329 * C2387 +
             C23809 * C2376 + C41986 + C41986 + C49325 * C2388 +
             C23811 * C9939 + C41987 + C41987 + C49315 * C9943 +
             C23813 * C9940 + C41988 + C41988 + C49265 * C9944) *
                C48928 * C49130) *
               C49287 -
           ((C42000 + C41999 + C41998 + C41997) * C48928 * C49130 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C48928 * C31477) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49319 +
             (C22614 + C22615) * C49306 + C22622 * C49279) *
                C31477 +
            ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
                C49130) *
               C782 -
           (((C25100 + C25101) * C49279 + C25534 * C49306 +
             (C25553 + C25552) * C49319) *
                C49130 +
            (C28610 * C49279 + C25535 * C49306 + (C25551 + C25550) * C49319) *
                C31477) *
               C49287) *
              C250 +
          ((((C26118 + C26119) * C49319 + (C25321 + C25320) * C49306 +
             (C28415 + C28414) * C49279) *
                C31477 +
            ((C26120 + C26121) * C49319 + (C25319 + C25318) * C49306 +
             (C22565 * C2379 + C25308 + C25308 + C22559 * C2391 +
              C22567 * C2380 + C25309 + C25309 + C49088 * C2392) *
                 C49279) *
                C49130) *
               C49287 -
           (((C28414 + C28415) * C49279 + (C25320 + C25321) * C49306 +
             (C26119 + C26118) * C49319) *
                C49130 +
            ((C22790 + C22791) * C49279 + (C22792 + C22793) * C49306 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C49319) *
                C31477) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C48928 * C49330 +
            (C25550 + C25551) * C48928 * C49327 + C26656 * C48928 * C49318 +
            (C26673 + C26672) * C48928 * C49272) *
               C782 -
           ((C22567 * C11264 + C26663 + C26663 + C49088 * C11268 +
             C22565 * C3735 + C26662 + C26662 + C22559 * C3741) *
                C48928 * C49272 +
            (C26672 + C26673) * C48928 * C49318 +
            (C25553 + C25552) * C48928 * C49327 +
            (C25551 + C25550) * C48928 * C49330) *
               C49287) *
              C250 +
          (((C26118 + C26119) * C48928 * C49330 +
            (C26120 + C26121) * C48928 * C49327 +
            (C43111 + C43112) * C48928 * C49318 +
            (C22565 * C11264 + C43105 + C43105 + C22559 * C11268 +
             C22567 * C11265 + C43106 + C43106 + C49088 * C11269) *
                C48928 * C49272) *
               C49287 -
           ((C43112 + C43111) * C48928 * C49272 +
            (C26121 + C26120) * C48928 * C49318 +
            (C26119 + C26118) * C48928 * C49327 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C48928 * C49330) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[71] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
            C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
            C49315 * C588 + C23813 * C1283 + C23819 + C23819 + C49265 * C1291) *
               C48928 * C31477 +
           (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
              C928 -
          ((C42379 + C42380 + C42381 + C42382) * C48928 * C49130 +
           (C41614 + C41613 + C41612 + C41611) * C48928 * C31477) *
              C929 +
          ((C42382 + C42381 + C42380 + C42379) * C48928 * C31477 +
           (C23807 * C2851 + C42367 + C42367 + C49329 * C2859 + C23809 * C3305 +
            C42368 + C42368 + C49325 * C3311 + C23811 * C10361 + C42369 +
            C42369 + C49315 * C10365 + C23813 * C10826 + C42370 + C42370 +
            C49265 * C10828) *
               C48928 * C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49319 +
            (C22614 + C22615) * C49306 + C22622 * C49279) *
               C31477 +
           ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
               C49130) *
              C928 -
          (((C25100 + C25101) * C49279 + C25534 * C49306 +
            (C25553 + C25552) * C49319) *
               C49130 +
           (C28610 * C49279 + C25535 * C49306 + (C25551 + C25550) * C49319) *
               C31477) *
              C929 +
          ((C26656 * C49319 + C25525 * C49306 + (C25101 + C25100) * C49279) *
               C31477 +
           ((C26673 + C26672) * C49319 + (C25555 + C25554) * C49306 +
            (C22565 * C2849 + C25536 + C25536 + C22559 * C2857 +
             C22567 * C3307 + C25537 + C25537 + C49088 * C3313) *
                C49279) *
               C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
            C22571 + C22571 + C49088 * C270) *
               C48928 * C49330 +
           (C25550 + C25551) * C48928 * C49327 + C43471 * C49318 +
           C43479 * C49272) *
              C928 -
          ((C43484 + C43485) * C48928 * C49272 +
           (C26672 + C26673) * C48928 * C49318 +
           (C25553 + C25552) * C48928 * C49327 +
           (C25551 + C25550) * C48928 * C49330) *
              C929 +
          (C43471 * C49330 + C43479 * C49327 +
           (C43485 + C43484) * C48928 * C49318 +
           (C22565 * C18084 + C43477 + C43477 + C22559 * C18088 +
            C22567 * C18338 + C43478 + C43478 + C49088 * C18340) *
               C48928 * C49272) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[72] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49235 +
            (C22614 + C22615) * C48938) *
               C49126 +
           ((C25550 + C25551) * C49235 + C25520 * C48938) * C49133 +
           (C26656 * C49235 + C25525 * C48938) * C36909) *
              C49014 * C48997 * C110 -
          (((C25100 + C25101) * C48938 + C25534 * C49235) * C36909 +
           (C28610 * C48938 + C25535 * C49235) * C49133 +
           ((C22617 + C22616) * C48938 + (C22615 + C22614) * C49235) * C49126) *
              C49014 * C48997 * C111 +
          ((C22622 * C49235 + C22623 * C48938) * C49126 +
           (C28211 * C49235 + (C22959 + C22958) * C48938) * C49133 +
           ((C25101 + C25100) * C49235 +
            (C22565 * C934 + C23702 + C23702 + C22559 * C944 + C22567 * C2676 +
             C23703 + C23703 + C49088 * C2678) *
                C48938) *
               C36909) *
              C49014 * C48997 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[73] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49235 +
             (C22614 + C22615) * C48938) *
                C49126 +
            ((C25550 + C25551) * C49235 + C25520 * C48938) * C49133 +
            (C26656 * C49235 + C25525 * C48938) * C36909) *
               C49014 * C250 -
           (((C25318 + C25319) * C48938 + (C26121 + C26120) * C49235) * C36909 +
            ((C25320 + C25321) * C48938 + (C26119 + C26118) * C49235) * C49133 +
            ((C22792 + C22793) * C48938 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C49235) *
                C49126) *
               C49014 * C49285) *
              C252 +
          ((((C22793 + C22792) * C49235 + (C22791 + C22790) * C48938) * C49126 +
            ((C25321 + C25320) * C49235 + (C28415 + C28414) * C48938) * C49133 +
            ((C25319 + C25318) * C49235 +
             (C22565 * C2379 + C25308 + C25308 + C22559 * C2391 +
              C22567 * C2380 + C25309 + C25309 + C49088 * C2392) *
                 C48938) *
                C36909) *
               C49014 * C49285 -
           (((C25100 + C25101) * C48938 + C25534 * C49235) * C36909 +
            (C28610 * C48938 + C25535 * C49235) * C49133 +
            ((C22617 + C22616) * C48938 + (C22615 + C22614) * C49235) *
                C49126) *
               C49014 * C250) *
              C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[74] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49235 +
             (C22614 + C22615) * C48938) *
                C49126 +
            ((C25550 + C25551) * C49235 + C25520 * C48938) * C49133 +
            (C26656 * C49235 + C25525 * C48938) * C36909) *
               C380 -
           (((C25554 + C25555) * C48938 + (C26672 + C26673) * C49235) * C36909 +
            (C25534 * C48938 + (C25553 + C25552) * C49235) * C49133 +
            (C25535 * C48938 + (C25551 + C25550) * C49235) * C49126) *
               C49287) *
              C48997 * C252 +
          (((C25520 * C49235 + C28211 * C48938) * C49126 +
            (C25525 * C49235 + (C25101 + C25100) * C48938) * C49133 +
            ((C25555 + C25554) * C49235 +
             (C22565 * C2849 + C25536 + C25536 + C22559 * C2857 +
              C22567 * C3307 + C25537 + C25537 + C49088 * C3313) *
                 C48938) *
                C36909) *
               C49287 -
           (((C25100 + C25101) * C48938 + C25534 * C49235) * C36909 +
            (C28610 * C48938 + C25535 * C49235) * C49133 +
            ((C22617 + C22616) * C48938 + (C22615 + C22614) * C49235) *
                C49126) *
               C380) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[75] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49235 +
             (C22614 + C22615) * C48938) *
                C49126 +
            ((C25550 + C25551) * C49235 + C25520 * C48938) * C49133 +
            (C26656 * C49235 + C25525 * C48938) * C36909) *
               C49014 * C508 -
           (((C25318 + C25319) * C48938 + (C26121 + C26120) * C49235) * C36909 +
            ((C25320 + C25321) * C48938 + (C26119 + C26118) * C49235) * C49133 +
            ((C22792 + C22793) * C48938 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C49235) *
                C49126) *
               C49014 * C49285) *
              C510 +
          ((((C22793 + C22792) * C49235 + (C22791 + C22790) * C48938) * C49126 +
            ((C25321 + C25320) * C49235 + (C28415 + C28414) * C48938) * C49133 +
            ((C25319 + C25318) * C49235 +
             (C22565 * C2379 + C25308 + C25308 + C22559 * C2391 +
              C22567 * C2380 + C25309 + C25309 + C49088 * C2392) *
                 C48938) *
                C36909) *
               C49014 * C49285 -
           (((C25100 + C25101) * C48938 + C25534 * C49235) * C36909 +
            (C28610 * C48938 + C25535 * C49235) * C49133 +
            ((C22617 + C22616) * C48938 + (C22615 + C22614) * C49235) *
                C49126) *
               C49014 * C508) *
              C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[76] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49235 +
            (C22614 + C22615) * C48938) *
               C49126 +
           ((C25550 + C25551) * C49235 + C25520 * C48938) * C49133 +
           (C26656 * C49235 + C25525 * C48938) * C36909) *
              C49014 * C574 -
          (((C25318 + C25319) * C48938 + (C26121 + C26120) * C49235) * C36909 +
           ((C25320 + C25321) * C48938 + (C26119 + C26118) * C49235) * C49133 +
           ((C22792 + C22793) * C48938 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C49235) *
               C49126) *
              C49014 * C575 +
          (((C22565 * C578 + C23192 + C23192 + C22559 * C588 + C22567 * C1283 +
             C23193 + C23193 + C49088 * C1291) *
                C49235 +
            (C22565 * C579 + C23194 + C23194 + C22559 * C589 + C22567 * C1282 +
             C23195 + C23195 + C49088 * C1290) *
                C48938) *
               C49126 +
           ((C22565 * C1483 + C25896 + C25896 + C22559 * C1491 +
             C22567 * C1955 + C25897 + C25897 + C49088 * C1961) *
                C49235 +
            (C22565 * C1482 + C25898 + C25898 + C22559 * C1490 +
             C22567 * C1956 + C25899 + C25899 + C49088 * C1962) *
                C48938) *
               C49133 +
           ((C22565 * C2376 + C25900 + C25900 + C22559 * C2388 +
             C22567 * C9939 + C25901 + C25901 + C49088 * C9943) *
                C49235 +
            (C22565 * C2378 + C25902 + C25902 + C22559 * C2390 +
             C22567 * C10206 + C25903 + C25903 + C49088 * C10208) *
                C48938) *
               C36909) *
              C49014 * C576) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[77] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49235 +
             (C22614 + C22615) * C48938) *
                C49126 +
            ((C25550 + C25551) * C49235 + C25520 * C48938) * C49133 +
            (C26656 * C49235 + C25525 * C48938) * C36909) *
               C380 -
           (((C25554 + C25555) * C48938 + (C26672 + C26673) * C49235) * C36909 +
            (C25534 * C48938 + (C25553 + C25552) * C49235) * C49133 +
            (C25535 * C48938 + (C25551 + C25550) * C49235) * C49126) *
               C49287) *
              C508 +
          ((((C26118 + C26119) * C49235 + (C25321 + C25320) * C48938) * C49126 +
            ((C26120 + C26121) * C49235 + (C25319 + C25318) * C48938) * C49133 +
            ((C43111 + C43112) * C49235 +
             (C22565 * C3306 + C26108 + C26108 + C22559 * C3312 +
              C22567 * C10362 + C26109 + C26109 + C49088 * C10366) *
                 C48938) *
                C36909) *
               C49287 -
           (((C25318 + C25319) * C48938 + (C26121 + C26120) * C49235) * C36909 +
            ((C25320 + C25321) * C48938 + (C26119 + C26118) * C49235) * C49133 +
            ((C22792 + C22793) * C48938 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C49235) *
                C49126) *
               C380) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[78] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49235 +
             (C22614 + C22615) * C48938) *
                C49126 +
            ((C25550 + C25551) * C49235 + C25520 * C48938) * C49133 +
            (C26656 * C49235 + C25525 * C48938) * C36909) *
               C782 -
           (((C25554 + C25555) * C48938 + (C26672 + C26673) * C49235) * C36909 +
            (C25534 * C48938 + (C25553 + C25552) * C49235) * C49133 +
            (C25535 * C48938 + (C25551 + C25550) * C49235) * C49126) *
               C49287) *
              C48997 * C510 +
          (((C25520 * C49235 + C28211 * C48938) * C49126 +
            (C25525 * C49235 + (C25101 + C25100) * C48938) * C49133 +
            ((C25555 + C25554) * C49235 +
             (C22565 * C2849 + C25536 + C25536 + C22559 * C2857 +
              C22567 * C3307 + C25537 + C25537 + C49088 * C3313) *
                 C48938) *
                C36909) *
               C49287 -
           (((C25100 + C25101) * C48938 + C25534 * C49235) * C36909 +
            (C28610 * C48938 + C25535 * C49235) * C49133 +
            ((C22617 + C22616) * C48938 + (C22615 + C22614) * C49235) *
                C49126) *
               C782) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[79] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49235 +
             (C22614 + C22615) * C48938) *
                C49126 +
            ((C25550 + C25551) * C49235 + C25520 * C48938) * C49133 +
            (C26656 * C49235 + C25525 * C48938) * C36909) *
               C782 -
           (((C25554 + C25555) * C48938 + (C26672 + C26673) * C49235) * C36909 +
            (C25534 * C48938 + (C25553 + C25552) * C49235) * C49133 +
            (C25535 * C48938 + (C25551 + C25550) * C49235) * C49126) *
               C49287) *
              C250 +
          ((((C26118 + C26119) * C49235 + (C25321 + C25320) * C48938) * C49126 +
            ((C26120 + C26121) * C49235 + (C25319 + C25318) * C48938) * C49133 +
            ((C43111 + C43112) * C49235 +
             (C22565 * C3306 + C26108 + C26108 + C22559 * C3312 +
              C22567 * C10362 + C26109 + C26109 + C49088 * C10366) *
                 C48938) *
                C36909) *
               C49287 -
           (((C25318 + C25319) * C48938 + (C26121 + C26120) * C49235) * C36909 +
            ((C25320 + C25321) * C48938 + (C26119 + C26118) * C49235) * C49133 +
            ((C22792 + C22793) * C48938 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C49235) *
                C49126) *
               C782) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[80] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49235 +
            (C22614 + C22615) * C48938) *
               C49126 +
           ((C25550 + C25551) * C49235 + C25520 * C48938) * C49133 +
           C46692 * C36909) *
              C928 -
          (((C25554 + C25555) * C48938 + (C26672 + C26673) * C49235) * C36909 +
           (C25534 * C48938 + (C25553 + C25552) * C49235) * C49133 +
           (C25535 * C48938 + (C25551 + C25550) * C49235) * C49126) *
              C929 +
          (C46692 * C49126 +
           (C43472 * C49235 + (C25555 + C25554) * C48938) * C49133 +
           ((C43485 + C43484) * C49235 +
            (C22565 * C3736 + C26664 + C26664 + C22559 * C3742 +
             C22567 * C17997 + C26665 + C26665 + C49088 * C17999) *
                C48938) *
               C36909) *
              C930) *
         C48997 * C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[81] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49319 +
            (C22614 + C22615) * C49306 + C22622 * C49279) *
               C31477 +
           ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
               C49130) *
              C49014 * C48997 * C110 -
          (((C22958 + C22959) * C49279 + C28610 * C49306 + C25535 * C49319) *
               C49130 +
           ((C22619 + C22618) * C49279 + (C22617 + C22616) * C49306 +
            (C22615 + C22614) * C49319) *
               C31477) *
              C49014 * C48997 * C111 +
          ((C22622 * C49319 + C22623 * C49306 + (C22621 + C22620) * C49279) *
               C31477 +
           (C28211 * C49319 + (C22959 + C22958) * C49306 +
            (C22565 * C382 + C22944 + C22944 + C22559 * C394 + C22567 * C684 +
             C22945 + C22945 + C49088 * C694) *
                C49279) *
               C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
            C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
            C49315 * C588 + C23813 * C1283 + C23819 + C23819 + C49265 * C1291) *
               C48928 * C31477 +
           (C23807 * C386 + C24179 + C24179 + C49329 * C398 + C23809 * C680 +
            C24178 + C24178 + C49325 * C690 + C23811 * C1483 + C24177 + C24177 +
            C49315 * C1491 + C23813 * C1955 + C24176 + C24176 +
            C49265 * C1961) *
               C48928 * C49130) *
              C49014 * C48997 * C110 -
          ((C24192 + C24193 + C24194 + C24195) * C48928 * C49130 +
           (C23867 + C23866 + C23865 + C23864) * C48928 * C31477) *
              C49014 * C48997 * C111 +
          ((C23871 + C23870 + C23869 + C23868) * C48928 * C31477 +
           (C23807 * C384 + C24180 + C24180 + C49329 * C396 + C23809 * C682 +
            C24181 + C24181 + C49325 * C692 + C23811 * C1481 + C24182 + C24182 +
            C49315 * C1489 + C23813 * C1957 + C24183 + C24183 +
            C49265 * C1963) *
               C48928 * C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[82] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49319 +
             (C22614 + C22615) * C49306 + C22622 * C49279) *
                C31477 +
            ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
                C49130) *
               C49014 * C250 -
           (((C28414 + C28415) * C49279 + (C25320 + C25321) * C49306 +
             (C26119 + C26118) * C49319) *
                C49130 +
            ((C22790 + C22791) * C49279 + (C22792 + C22793) * C49306 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C49319) *
                C31477) *
               C49014 * C49285) *
              C252 +
          ((((C22793 + C22792) * C49319 + (C22791 + C22790) * C49306 +
             (C22789 + C22788) * C49279) *
                C31477 +
            ((C25321 + C25320) * C49319 + (C28415 + C28414) * C49306 +
             (C22565 * C683 + C23336 + C23336 + C22559 * C693 + C22567 * C1484 +
              C23337 + C23337 + C49088 * C1492) *
                 C49279) *
                C49130) *
               C49014 * C49285 -
           (((C22958 + C22959) * C49279 + C28610 * C49306 + C25535 * C49319) *
                C49130 +
            ((C22619 + C22618) * C49279 + (C22617 + C22616) * C49306 +
             (C22615 + C22614) * C49319) *
                C31477) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C48928 * C31477 +
            (C23807 * C386 + C24179 + C24179 + C49329 * C398 + C23809 * C680 +
             C24178 + C24178 + C49325 * C690 + C23811 * C1483 + C24177 +
             C24177 + C49315 * C1491 + C23813 * C1955 + C24176 + C24176 +
             C49265 * C1961) *
                C48928 * C49130) *
               C49014 * C250 -
           ((C23813 * C9455 + C24565 + C24565 + C49265 * C9459 +
             C23811 * C1955 + C24564 + C24564 + C49315 * C1961 +
             C23809 * C1483 + C24563 + C24563 + C49325 * C1491 + C23807 * C680 +
             C24562 + C24562 + C49329 * C690) *
                C48928 * C49130 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C48928 * C31477) *
               C49014 * C49285) *
              C252 +
          (((C24033 + C24032 + C24031 + C24030) * C48928 * C31477 +
            (C23807 * C681 + C24566 + C24566 + C49329 * C691 + C23809 * C1482 +
             C24567 + C24567 + C49325 * C1490 + C23811 * C1956 + C24568 +
             C24568 + C49315 * C1962 + C23813 * C9456 + C24569 + C24569 +
             C49265 * C9460) *
                C48928 * C49130) *
               C49014 * C49285 -
           ((C24192 + C24193 + C24194 + C24195) * C48928 * C49130 +
            (C23867 + C23866 + C23865 + C23864) * C48928 * C31477) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[83] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49319 +
             (C22614 + C22615) * C49306 + C22622 * C49279) *
                C31477 +
            ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
                C49130) *
               C380 -
           (((C25100 + C25101) * C49279 + C25534 * C49306 +
             (C25553 + C25552) * C49319) *
                C49130 +
            (C28610 * C49279 + C25535 * C49306 + (C25551 + C25550) * C49319) *
                C31477) *
               C49287) *
              C48997 * C252 +
          (((C25520 * C49319 + C28211 * C49306 + (C22959 + C22958) * C49279) *
                C31477 +
            (C25525 * C49319 + (C25101 + C25100) * C49306 +
             (C22565 * C934 + C23702 + C23702 + C22559 * C944 + C22567 * C2676 +
              C23703 + C23703 + C49088 * C2678) *
                 C49279) *
                C49130) *
               C49287 -
           (((C22958 + C22959) * C49279 + C28610 * C49306 + C25535 * C49319) *
                C49130 +
            ((C22619 + C22618) * C49279 + (C22617 + C22616) * C49306 +
             (C22615 + C22614) * C49319) *
                C31477) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C48928 * C31477 +
            (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
               C380 -
           ((C23813 * C9939 + C24931 + C24931 + C49265 * C9943 +
             C23811 * C2376 + C24930 + C24930 + C49315 * C2388 +
             C23809 * C2375 + C24929 + C24929 + C49325 * C2387 + C23807 * C931 +
             C24928 + C24928 + C49329 * C941) *
                C48928 * C49130 +
            (C41614 + C41613 + C41612 + C41611) * C48928 * C31477) *
               C49287) *
              C48997 * C252 +
          (((C24195 + C24194 + C24193 + C24192) * C48928 * C31477 +
            (C23807 * C932 + C24932 + C24932 + C49329 * C942 + C23809 * C2377 +
             C24933 + C24933 + C49325 * C2389 + C23811 * C2378 + C24934 +
             C24934 + C49315 * C2390 + C23813 * C10206 + C24935 + C24935 +
             C49265 * C10208) *
                C48928 * C49130) *
               C49287 -
           ((C24192 + C24193 + C24194 + C24195) * C48928 * C49130 +
            (C23867 + C23866 + C23865 + C23864) * C48928 * C31477) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[84] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49319 +
             (C22614 + C22615) * C49306 + C22622 * C49279) *
                C31477 +
            ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
                C49130) *
               C49014 * C508 -
           (((C28414 + C28415) * C49279 + (C25320 + C25321) * C49306 +
             (C26119 + C26118) * C49319) *
                C49130 +
            ((C22790 + C22791) * C49279 + (C22792 + C22793) * C49306 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C49319) *
                C31477) *
               C49014 * C49285) *
              C510 +
          ((((C22793 + C22792) * C49319 + (C22791 + C22790) * C49306 +
             (C22789 + C22788) * C49279) *
                C31477 +
            ((C25321 + C25320) * C49319 + (C28415 + C28414) * C49306 +
             (C22565 * C683 + C23336 + C23336 + C22559 * C693 + C22567 * C1484 +
              C23337 + C23337 + C49088 * C1492) *
                 C49279) *
                C49130) *
               C49014 * C49285 -
           (((C22958 + C22959) * C49279 + C28610 * C49306 + C25535 * C49319) *
                C49130 +
            ((C22619 + C22618) * C49279 + (C22617 + C22616) * C49306 +
             (C22615 + C22614) * C49319) *
                C31477) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C48928 * C31477 +
            (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
               C49014 * C508 -
           ((C23813 * C9455 + C24565 + C24565 + C49265 * C9459 +
             C23811 * C1955 + C24564 + C24564 + C49315 * C1961 +
             C23809 * C1483 + C24563 + C24563 + C49325 * C1491 + C23807 * C680 +
             C24562 + C24562 + C49329 * C690) *
                C48928 * C49130 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C48928 * C31477) *
               C49014 * C49285) *
              C510 +
          (((C24033 + C24032 + C24031 + C24030) * C48928 * C31477 +
            (C23807 * C681 + C24566 + C24566 + C49329 * C691 + C23809 * C1482 +
             C24567 + C24567 + C49325 * C1490 + C23811 * C1956 + C24568 +
             C24568 + C49315 * C1962 + C23813 * C9456 + C24569 + C24569 +
             C49265 * C9460) *
                C48928 * C49130) *
               C49014 * C49285 -
           ((C24192 + C24193 + C24194 + C24195) * C48928 * C49130 +
            (C23867 + C23866 + C23865 + C23864) * C48928 * C31477) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[85] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49319 +
            (C22614 + C22615) * C49306 + C22622 * C49279) *
               C31477 +
           ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
               C49130) *
              C49014 * C574 -
          (((C28414 + C28415) * C49279 + (C25320 + C25321) * C49306 +
            (C26119 + C26118) * C49319) *
               C49130 +
           ((C22790 + C22791) * C49279 + (C22792 + C22793) * C49306 +
            (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
             C22773 + C22773 + C22559 * C270) *
                C49319) *
               C31477) *
              C49014 * C575 +
          (((C22565 * C578 + C23192 + C23192 + C22559 * C588 + C22567 * C1283 +
             C23193 + C23193 + C49088 * C1291) *
                C49319 +
            (C22565 * C579 + C23194 + C23194 + C22559 * C589 + C22567 * C1282 +
             C23195 + C23195 + C49088 * C1290) *
                C49306 +
            (C22565 * C580 + C23196 + C23196 + C22559 * C590 + C22567 * C1281 +
             C23197 + C23197 + C49088 * C1289) *
                C49279) *
               C31477 +
           ((C22565 * C1483 + C25896 + C25896 + C22559 * C1491 +
             C22567 * C1955 + C25897 + C25897 + C49088 * C1961) *
                C49319 +
            (C22565 * C1482 + C25898 + C25898 + C22559 * C1490 +
             C22567 * C1956 + C25899 + C25899 + C49088 * C1962) *
                C49306 +
            (C22565 * C1481 + C28951 + C28951 + C22559 * C1489 +
             C22567 * C1957 + C28952 + C28952 + C49088 * C1963) *
                C49279) *
               C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
            C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
            C49315 * C588 + C23813 * C1283 + C23819 + C23819 + C49265 * C1291) *
               C48928 * C31477 +
           (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
              C49014 * C574 -
          ((C23813 * C9455 + C24565 + C24565 + C49265 * C9459 + C23811 * C1955 +
            C24564 + C24564 + C49315 * C1961 + C23809 * C1483 + C24563 +
            C24563 + C49325 * C1491 + C23807 * C680 + C24562 + C24562 +
            C49329 * C690) *
               C48928 * C49130 +
           (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 + C23811 * C1283 +
            C24015 + C24015 + C49315 * C1291 + C23809 * C578 + C24016 + C24016 +
            C49325 * C588 + C23807 * C258 + C24017 + C24017 + C49329 * C270) *
               C48928 * C31477) *
              C49014 * C575 +
          ((C23807 * C578 + C24424 + C24424 + C49329 * C588 + C23809 * C1283 +
            C24425 + C24425 + C49325 * C1291 + C23811 * C1791 + C24426 +
            C24426 + C49315 * C1797 + C23813 * C9357 + C24427 + C24427 +
            C49265 * C9361) *
               C48928 * C31477 +
           (C23807 * C1483 + C41843 + C41843 + C49329 * C1491 + C23809 * C1955 +
            C41844 + C41844 + C49325 * C1961 + C23811 * C9455 + C41845 +
            C41845 + C49315 * C9459 + C23813 * C9705 + C41846 + C41846 +
            C49265 * C9707) *
               C48928 * C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[86] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49319 +
             (C22614 + C22615) * C49306 + C22622 * C49279) *
                C31477 +
            ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
                C49130) *
               C380 -
           (((C25100 + C25101) * C49279 + C25534 * C49306 +
             (C25553 + C25552) * C49319) *
                C49130 +
            (C28610 * C49279 + C25535 * C49306 + (C25551 + C25550) * C49319) *
                C31477) *
               C49287) *
              C508 +
          ((((C26118 + C26119) * C49319 + (C25321 + C25320) * C49306 +
             (C28415 + C28414) * C49279) *
                C31477 +
            ((C26120 + C26121) * C49319 + (C25319 + C25318) * C49306 +
             (C22565 * C2379 + C25308 + C25308 + C22559 * C2391 +
              C22567 * C2380 + C25309 + C25309 + C49088 * C2392) *
                 C49279) *
                C49130) *
               C49287 -
           (((C28414 + C28415) * C49279 + (C25320 + C25321) * C49306 +
             (C26119 + C26118) * C49319) *
                C49130 +
            ((C22790 + C22791) * C49279 + (C22792 + C22793) * C49306 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C49319) *
                C31477) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C48928 * C31477 +
            (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
               C380 -
           ((C23813 * C9939 + C24931 + C24931 + C49265 * C9943 +
             C23811 * C2376 + C24930 + C24930 + C49315 * C2388 +
             C23809 * C2375 + C24929 + C24929 + C49325 * C2387 + C23807 * C931 +
             C24928 + C24928 + C49329 * C941) *
                C48928 * C49130 +
            (C41614 + C41613 + C41612 + C41611) * C48928 * C31477) *
               C49287) *
              C508 +
          (((C41997 + C41998 + C41999 + C42000) * C48928 * C31477 +
            (C23807 * C2375 + C41985 + C41985 + C49329 * C2387 +
             C23809 * C2376 + C41986 + C41986 + C49325 * C2388 +
             C23811 * C9939 + C41987 + C41987 + C49315 * C9943 +
             C23813 * C9940 + C41988 + C41988 + C49265 * C9944) *
                C48928 * C49130) *
               C49287 -
           ((C42000 + C41999 + C41998 + C41997) * C48928 * C49130 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C48928 * C31477) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[87] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49319 +
             (C22614 + C22615) * C49306 + C22622 * C49279) *
                C31477 +
            ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
                C49130) *
               C782 -
           (((C25100 + C25101) * C49279 + C25534 * C49306 +
             (C25553 + C25552) * C49319) *
                C49130 +
            (C28610 * C49279 + C25535 * C49306 + (C25551 + C25550) * C49319) *
                C31477) *
               C49287) *
              C48997 * C510 +
          (((C25520 * C49319 + C28211 * C49306 + (C22959 + C22958) * C49279) *
                C31477 +
            (C25525 * C49319 + (C25101 + C25100) * C49306 +
             (C22565 * C934 + C23702 + C23702 + C22559 * C944 + C22567 * C2676 +
              C23703 + C23703 + C49088 * C2678) *
                 C49279) *
                C49130) *
               C49287 -
           (((C22958 + C22959) * C49279 + C28610 * C49306 + C25535 * C49319) *
                C49130 +
            ((C22619 + C22618) * C49279 + (C22617 + C22616) * C49306 +
             (C22615 + C22614) * C49319) *
                C31477) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C48928 * C31477 +
            (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
               C782 -
           ((C23813 * C9939 + C24931 + C24931 + C49265 * C9943 +
             C23811 * C2376 + C24930 + C24930 + C49315 * C2388 +
             C23809 * C2375 + C24929 + C24929 + C49325 * C2387 + C23807 * C931 +
             C24928 + C24928 + C49329 * C941) *
                C48928 * C49130 +
            (C41614 + C41613 + C41612 + C41611) * C48928 * C31477) *
               C49287) *
              C48997 * C510 +
          (((C24195 + C24194 + C24193 + C24192) * C48928 * C31477 +
            (C23807 * C932 + C24932 + C24932 + C49329 * C942 + C23809 * C2377 +
             C24933 + C24933 + C49325 * C2389 + C23811 * C2378 + C24934 +
             C24934 + C49315 * C2390 + C23813 * C10206 + C24935 + C24935 +
             C49265 * C10208) *
                C48928 * C49130) *
               C49287 -
           ((C24192 + C24193 + C24194 + C24195) * C48928 * C49130 +
            (C23867 + C23866 + C23865 + C23864) * C48928 * C31477) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[88] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
              C22571 + C22571 + C49088 * C270) *
                 C49319 +
             (C22614 + C22615) * C49306 + C22622 * C49279) *
                C31477 +
            ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
                C49130) *
               C782 -
           (((C25100 + C25101) * C49279 + C25534 * C49306 +
             (C25553 + C25552) * C49319) *
                C49130 +
            (C28610 * C49279 + C25535 * C49306 + (C25551 + C25550) * C49319) *
                C31477) *
               C49287) *
              C250 +
          ((((C26118 + C26119) * C49319 + (C25321 + C25320) * C49306 +
             (C28415 + C28414) * C49279) *
                C31477 +
            ((C26120 + C26121) * C49319 + (C25319 + C25318) * C49306 +
             (C22565 * C2379 + C25308 + C25308 + C22559 * C2391 +
              C22567 * C2380 + C25309 + C25309 + C49088 * C2392) *
                 C49279) *
                C49130) *
               C49287 -
           (((C28414 + C28415) * C49279 + (C25320 + C25321) * C49306 +
             (C26119 + C26118) * C49319) *
                C49130 +
            ((C22790 + C22791) * C49279 + (C22792 + C22793) * C49306 +
             (C22567 * C578 + C22772 + C22772 + C49088 * C588 + C22565 * C258 +
              C22773 + C22773 + C22559 * C270) *
                 C49319) *
                C31477) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
             C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
             C49315 * C588 + C23813 * C1283 + C23819 + C23819 +
             C49265 * C1291) *
                C48928 * C31477 +
            (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
               C782 -
           ((C23813 * C9939 + C24931 + C24931 + C49265 * C9943 +
             C23811 * C2376 + C24930 + C24930 + C49315 * C2388 +
             C23809 * C2375 + C24929 + C24929 + C49325 * C2387 + C23807 * C931 +
             C24928 + C24928 + C49329 * C941) *
                C48928 * C49130 +
            (C41614 + C41613 + C41612 + C41611) * C48928 * C31477) *
               C49287) *
              C250 +
          (((C41997 + C41998 + C41999 + C42000) * C48928 * C31477 +
            (C23807 * C2375 + C41985 + C41985 + C49329 * C2387 +
             C23809 * C2376 + C41986 + C41986 + C49325 * C2388 +
             C23811 * C9939 + C41987 + C41987 + C49315 * C9943 +
             C23813 * C9940 + C41988 + C41988 + C49265 * C9944) *
                C48928 * C49130) *
               C49287 -
           ((C42000 + C41999 + C41998 + C41997) * C48928 * C49130 +
            (C23813 * C1791 + C24014 + C24014 + C49265 * C1797 +
             C23811 * C1283 + C24015 + C24015 + C49315 * C1291 + C23809 * C578 +
             C24016 + C24016 + C49325 * C588 + C23807 * C258 + C24017 + C24017 +
             C49329 * C270) *
                C48928 * C31477) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[89] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C22565 * C115 + C22570 + C22570 + C22559 * C129 + C22567 * C258 +
             C22571 + C22571 + C49088 * C270) *
                C49319 +
            (C22614 + C22615) * C49306 + C22622 * C49279) *
               C31477 +
           ((C25550 + C25551) * C49319 + C25520 * C49306 + C28211 * C49279) *
               C49130) *
              C928 -
          (((C25100 + C25101) * C49279 + C25534 * C49306 +
            (C25553 + C25552) * C49319) *
               C49130 +
           (C28610 * C49279 + C25535 * C49306 + (C25551 + C25550) * C49319) *
               C31477) *
              C929 +
          ((C26656 * C49319 + C25525 * C49306 + (C25101 + C25100) * C49279) *
               C31477 +
           ((C26673 + C26672) * C49319 + (C25555 + C25554) * C49306 +
            (C22565 * C2849 + C25536 + C25536 + C22559 * C2857 +
             C22567 * C3307 + C25537 + C25537 + C49088 * C3313) *
                C49279) *
               C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C23807 * C115 + C23816 + C23816 + C49329 * C129 + C23809 * C258 +
            C23817 + C23817 + C49325 * C270 + C23811 * C578 + C23818 + C23818 +
            C49315 * C588 + C23813 * C1283 + C23819 + C23819 + C49265 * C1291) *
               C48928 * C31477 +
           (C41611 + C41612 + C41613 + C41614) * C48928 * C49130) *
              C928 -
          ((C42379 + C42380 + C42381 + C42382) * C48928 * C49130 +
           (C41614 + C41613 + C41612 + C41611) * C48928 * C31477) *
              C929 +
          ((C42382 + C42381 + C42380 + C42379) * C48928 * C31477 +
           (C23807 * C2851 + C42367 + C42367 + C49329 * C2859 + C23809 * C3305 +
            C42368 + C42368 + C49325 * C3311 + C23811 * C10361 + C42369 +
            C42369 + C49315 * C10365 + C23813 * C10826 + C42370 + C42370 +
            C49265 * C10828) *
               C48928 * C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[90] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
            C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
            C11391 * C588 + C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
               C49235 +
           (C11452 + C11453 + C11454 + C11455) * C48938) *
              C49043 * C49014 * C48997 * C110 -
          ((C11456 + C11457 + C11458 + C11459) * C48938 +
           (C11455 + C11454 + C11453 + C11452) * C49235) *
              C49043 * C49014 * C48997 * C111 +
          ((C11459 + C11458 + C11457 + C11456) * C49235 +
           (C11395 * C118 + C11432 + C11432 + C11389 * C132 + C11397 * C255 +
            C11433 + C11433 + C11390 * C267 + C11399 * C581 + C11434 + C11434 +
            C11391 * C591 + C11401 * C1284 + C11435 + C11435 + C49265 * C1292) *
               C48938) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
            C3867 + C3867 + C49088 * C270) *
               C3857 +
           (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
              C49043 * C49014 * C48997 * C110 -
          ((C3916 + C3917) * C49257 + (C3915 + C3914) * C3859 +
           (C3913 + C3912) * C3858 + (C3911 + C3910) * C3857) *
              C49043 * C49014 * C48997 * C111 +
          (C3918 * C3857 + C3919 * C3858 + (C3917 + C3916) * C3859 +
           (C3861 * C120 + C3892 + C3892 + C49256 * C134 + C3863 * C259 +
            C3893 + C3893 + C49088 * C271) *
               C49257) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C49235 +
            (C3910 + C3911) * C48938) *
               C15403 +
           ((C6680 + C6681) * C49235 + C6657 * C48938) * C15404 +
           ((C7791 + C7790) * C49235 + (C6685 + C6684) * C48938) * C49293) *
              C49014 * C48997 * C110 -
          (((C6682 + C6683) * C48938 + (C6684 + C6685) * C49235) * C49293 +
           (C6666 * C48938 + C6667 * C49235) * C15404 +
           ((C3913 + C3912) * C48938 + (C3911 + C3910) * C49235) * C15403) *
              C49014 * C48997 * C111 +
          ((C3918 * C49235 + C3919 * C48938) * C15403 +
           (C6244 * C49235 + (C4255 + C4254) * C48938) * C15404 +
           ((C6683 + C6682) * C49235 +
            (C3861 * C934 + C4998 + C4998 + C49256 * C944 + C3863 * C2676 +
             C4999 + C4999 + C49088 * C2678) *
                C48938) *
               C49293) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[91] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C49235 +
            (C11452 + C11453 + C11454 + C11455) * C48938) *
               C49043 * C49014 * C250 -
           ((C11618 + C11619 + C11620 + C11621) * C48938 +
            (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
             C11399 * C1283 + C11603 + C11603 + C11391 * C1291 + C11397 * C578 +
             C11604 + C11604 + C11390 * C588 + C11395 * C258 + C11605 + C11605 +
             C11389 * C270) *
                C49235) *
               C49043 * C49014 * C49285) *
              C252 +
          (((C11621 + C11620 + C11619 + C11618) * C49235 +
            (C11395 * C256 + C11606 + C11606 + C11389 * C268 + C11397 * C580 +
             C11607 + C11607 + C11390 * C590 + C11399 * C1281 + C11608 +
             C11608 + C11391 * C1289 + C11401 * C1793 + C11609 + C11609 +
             C49265 * C1799) *
                C48938) *
               C49043 * C49014 * C49285 -
           ((C11456 + C11457 + C11458 + C11459) * C48938 +
            (C11455 + C11454 + C11453 + C11452) * C49235) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C3857 +
            (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
               C49043 * C49014 * C250 -
           ((C4084 + C4085) * C49257 + (C4086 + C4087) * C3859 +
            (C4088 + C4089) * C3858 +
            (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
             C4069 + C4069 + C49256 * C270) *
                C3857) *
               C49043 * C49014 * C49285) *
              C252 +
          (((C4089 + C4088) * C3857 + (C4087 + C4086) * C3858 +
            (C4085 + C4084) * C3859 +
            (C3861 * C254 + C4070 + C4070 + C49256 * C266 + C3863 * C582 +
             C4071 + C4071 + C49088 * C592) *
                C49257) *
               C49043 * C49014 * C49285 -
           ((C3916 + C3917) * C49257 + (C3915 + C3914) * C3859 +
            (C3913 + C3912) * C3858 + (C3911 + C3910) * C3857) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C49235 +
             (C3910 + C3911) * C48938) *
                C15403 +
            ((C6680 + C6681) * C49235 + C6657 * C48938) * C15404 +
            ((C7791 + C7790) * C49235 + (C6685 + C6684) * C48938) * C49293) *
               C49014 * C250 -
           (((C18941 + C18942) * C48938 +
             (C3863 * C2376 + C7231 + C7231 + C49088 * C2388 + C3861 * C2375 +
              C7230 + C7230 + C49256 * C2387) *
                 C49235) *
                C49293 +
            ((C6457 + C6458) * C48938 + (C7241 + C7240) * C49235) * C15404 +
            ((C4088 + C4089) * C48938 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C49235) *
                C15403) *
               C49014 * C49285) *
              C252 +
          ((((C4089 + C4088) * C49235 + (C4087 + C4086) * C48938) * C15403 +
            ((C6458 + C6457) * C49235 + (C6456 + C6455) * C48938) * C15404 +
            ((C18942 + C18941) * C49235 +
             (C3861 * C2379 + C7234 + C7234 + C49256 * C2391 + C3863 * C2380 +
              C7235 + C7235 + C49088 * C2392) *
                 C48938) *
                C49293) *
               C49014 * C49285 -
           (((C6682 + C6683) * C48938 + (C6684 + C6685) * C49235) * C49293 +
            (C6666 * C48938 + C6667 * C49235) * C15404 +
            ((C3913 + C3912) * C48938 + (C3911 + C3910) * C49235) * C15403) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[92] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C49235 +
            (C11452 + C11453 + C11454 + C11455) * C48938) *
               C49043 * C380 -
           ((C11780 + C11781 + C11782 + C11783) * C48938 +
            (C11401 * C1955 + C11764 + C11764 + C49265 * C1961 +
             C11399 * C1483 + C11765 + C11765 + C11391 * C1491 + C11397 * C680 +
             C11766 + C11766 + C11390 * C690 + C11395 * C386 + C11767 + C11767 +
             C11389 * C398) *
                C49235) *
               C49043 * C49287) *
              C48997 * C252 +
          (((C11783 + C11782 + C11781 + C11780) * C49235 +
            (C11395 * C384 + C11768 + C11768 + C11389 * C396 + C11397 * C682 +
             C11769 + C11769 + C11390 * C692 + C11399 * C1481 + C11770 +
             C11770 + C11391 * C1489 + C11401 * C1957 + C11771 + C11771 +
             C49265 * C1963) *
                C48938) *
               C49043 * C49287 -
           ((C11456 + C11457 + C11458 + C11459) * C48938 +
            (C11455 + C11454 + C11453 + C11452) * C49235) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C3857 +
            (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
               C49043 * C380 -
           ((C4254 + C4255) * C49257 + (C4256 + C4257) * C3859 +
            (C4258 + C4259) * C3858 +
            (C3863 * C680 + C4238 + C4238 + C49088 * C690 + C3861 * C386 +
             C4239 + C4239 + C49256 * C398) *
                C3857) *
               C49043 * C49287) *
              C48997 * C252 +
          (((C4259 + C4258) * C3857 + (C4257 + C4256) * C3858 +
            (C4255 + C4254) * C3859 +
            (C3861 * C382 + C4240 + C4240 + C49256 * C394 + C3863 * C684 +
             C4241 + C4241 + C49088 * C694) *
                C49257) *
               C49043 * C49287 -
           ((C3916 + C3917) * C49257 + (C3915 + C3914) * C3859 +
            (C3913 + C3912) * C3858 + (C3911 + C3910) * C3857) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C49235 +
             (C3910 + C3911) * C48938) *
                C15403 +
            ((C6680 + C6681) * C49235 + C6657 * C48938) * C15404 +
            ((C7791 + C7790) * C49235 + C19137 * C48938) * C49293) *
               C380 -
           (((C19147 + C19148) * C48938 +
             (C3863 * C3305 + C7781 + C7781 + C49088 * C3311 + C3861 * C2851 +
              C7780 + C7780 + C49256 * C2859) *
                 C49235) *
                C49293 +
            (C19142 * C48938 + (C7790 + C7791) * C49235) * C15404 +
            (C6667 * C48938 + (C6681 + C6680) * C49235) * C15403) *
               C49287) *
              C48997 * C252 +
          (((C6657 * C49235 + C6244 * C48938) * C15403 +
            (C19137 * C49235 + (C6683 + C6682) * C48938) * C15404 +
            ((C19148 + C19147) * C49235 +
             (C3861 * C2849 + C7784 + C7784 + C49256 * C2857 + C3863 * C3307 +
              C7785 + C7785 + C49088 * C3313) *
                 C48938) *
                C49293) *
               C49287 -
           (((C6682 + C6683) * C48938 + C19142 * C49235) * C49293 +
            (C6666 * C48938 + C6667 * C49235) * C15404 +
            ((C3913 + C3912) * C48938 + (C3911 + C3910) * C49235) * C15403) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[93] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C49235 +
            (C11452 + C11453 + C11454 + C11455) * C48938) *
               C49043 * C49014 * C508 -
           ((C11618 + C11619 + C11620 + C11621) * C48938 +
            (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
             C11399 * C1283 + C11603 + C11603 + C11391 * C1291 + C11397 * C578 +
             C11604 + C11604 + C11390 * C588 + C11395 * C258 + C11605 + C11605 +
             C11389 * C270) *
                C49235) *
               C49043 * C49014 * C49285) *
              C510 +
          (((C11621 + C11620 + C11619 + C11618) * C49235 +
            (C11395 * C256 + C11606 + C11606 + C11389 * C268 + C11397 * C580 +
             C11607 + C11607 + C11390 * C590 + C11399 * C1281 + C11608 +
             C11608 + C11391 * C1289 + C11401 * C1793 + C11609 + C11609 +
             C49265 * C1799) *
                C48938) *
               C49043 * C49014 * C49285 -
           ((C11456 + C11457 + C11458 + C11459) * C48938 +
            (C11455 + C11454 + C11453 + C11452) * C49235) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C3857 +
            (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
               C49043 * C49014 * C508 -
           ((C4084 + C4085) * C49257 + (C4086 + C4087) * C3859 +
            (C4088 + C4089) * C3858 +
            (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
             C4069 + C4069 + C49256 * C270) *
                C3857) *
               C49043 * C49014 * C49285) *
              C510 +
          (((C4089 + C4088) * C3857 + (C4087 + C4086) * C3858 +
            (C4085 + C4084) * C3859 +
            (C3861 * C254 + C4070 + C4070 + C49256 * C266 + C3863 * C582 +
             C4071 + C4071 + C49088 * C592) *
                C49257) *
               C49043 * C49014 * C49285 -
           ((C3916 + C3917) * C49257 + (C3915 + C3914) * C3859 +
            (C3913 + C3912) * C3858 + (C3911 + C3910) * C3857) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C49235 +
             (C3910 + C3911) * C48938) *
                C15403 +
            ((C6680 + C6681) * C49235 + C6657 * C48938) * C15404 +
            ((C7791 + C7790) * C49235 + C19137 * C48938) * C49293) *
               C49014 * C508 -
           (((C18941 + C18942) * C48938 +
             (C3863 * C2376 + C7231 + C7231 + C49088 * C2388 + C3861 * C2375 +
              C7230 + C7230 + C49256 * C2387) *
                 C49235) *
                C49293 +
            ((C6457 + C6458) * C48938 + (C7241 + C7240) * C49235) * C15404 +
            ((C4088 + C4089) * C48938 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C49235) *
                C15403) *
               C49014 * C49285) *
              C510 +
          ((((C4089 + C4088) * C49235 + (C4087 + C4086) * C48938) * C15403 +
            ((C6458 + C6457) * C49235 + (C6456 + C6455) * C48938) * C15404 +
            ((C18942 + C18941) * C49235 +
             (C3861 * C2379 + C7234 + C7234 + C49256 * C2391 + C3863 * C2380 +
              C7235 + C7235 + C49088 * C2392) *
                 C48938) *
                C49293) *
               C49014 * C49285 -
           (((C6682 + C6683) * C48938 + C19142 * C49235) * C49293 +
            (C6666 * C48938 + C6667 * C49235) * C15404 +
            ((C3913 + C3912) * C48938 + (C3911 + C3910) * C49235) * C15403) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[94] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
            C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
            C11391 * C588 + C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
               C49235 +
           (C11452 + C11453 + C11454 + C11455) * C48938) *
              C49043 * C49014 * C574 -
          ((C11618 + C11619 + C11620 + C11621) * C48938 +
           (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 + C11399 * C1283 +
            C11603 + C11603 + C11391 * C1291 + C11397 * C578 + C11604 + C11604 +
            C11390 * C588 + C11395 * C258 + C11605 + C11605 + C11389 * C270) *
               C49235) *
              C49043 * C49014 * C575 +
          ((C11395 * C578 + C12012 + C12012 + C11389 * C588 + C11397 * C1283 +
            C12013 + C12013 + C11390 * C1291 + C11399 * C1791 + C12014 +
            C12014 + C11391 * C1797 + C11401 * C9357 + C12015 + C12015 +
            C49265 * C9361) *
               C49235 +
           (C11395 * C579 + C12016 + C12016 + C11389 * C589 + C11397 * C1282 +
            C12017 + C12017 + C11390 * C1290 + C11399 * C1792 + C12018 +
            C12018 + C11391 * C1798 + C11401 * C9358 + C12019 + C12019 +
            C49265 * C9362) *
               C48938) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
            C3867 + C3867 + C49088 * C270) *
               C3857 +
           (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
              C49043 * C49014 * C574 -
          ((C4084 + C4085) * C49257 + (C4086 + C4087) * C3859 +
           (C4088 + C4089) * C3858 +
           (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
            C4069 + C4069 + C49256 * C270) *
               C3857) *
              C49043 * C49014 * C575 +
          ((C3861 * C578 + C4488 + C4488 + C49256 * C588 + C3863 * C1283 +
            C4489 + C4489 + C49088 * C1291) *
               C3857 +
           (C3861 * C579 + C4490 + C4490 + C49256 * C589 + C3863 * C1282 +
            C4491 + C4491 + C49088 * C1290) *
               C3858 +
           (C3861 * C580 + C4492 + C4492 + C49256 * C590 + C3863 * C1281 +
            C4493 + C4493 + C49088 * C1289) *
               C3859 +
           (C3861 * C581 + C4494 + C4494 + C49256 * C591 + C3863 * C1284 +
            C4495 + C4495 + C49088 * C1292) *
               C49257) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C49235 +
            (C3910 + C3911) * C48938) *
               C15403 +
           ((C6680 + C6681) * C49235 + C6657 * C48938) * C15404 +
           ((C7791 + C7790) * C49235 + C19137 * C48938) * C49293) *
              C49014 * C574 -
          (((C18941 + C18942) * C48938 +
            (C3863 * C2376 + C7231 + C7231 + C49088 * C2388 + C3861 * C2375 +
             C7230 + C7230 + C49256 * C2387) *
                C49235) *
               C49293 +
           ((C6457 + C6458) * C48938 + (C7241 + C7240) * C49235) * C15404 +
           ((C4088 + C4089) * C48938 +
            (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
             C4069 + C4069 + C49256 * C270) *
                C49235) *
               C15403) *
              C49014 * C575 +
          (((C3861 * C578 + C4488 + C4488 + C49256 * C588 + C3863 * C1283 +
             C4489 + C4489 + C49088 * C1291) *
                C49235 +
            (C3861 * C579 + C4490 + C4490 + C49256 * C589 + C3863 * C1282 +
             C4491 + C4491 + C49088 * C1290) *
                C48938) *
               C15403 +
           ((C3861 * C1483 + C7026 + C7026 + C49256 * C1491 + C3863 * C1955 +
             C7027 + C7027 + C49088 * C1961) *
                C49235 +
            (C3861 * C1482 + C7028 + C7028 + C49256 * C1490 + C3863 * C1956 +
             C7029 + C7029 + C49088 * C1962) *
                C48938) *
               C15404 +
           ((C3861 * C2376 + C19489 + C19489 + C49256 * C2388 + C3863 * C9939 +
             C19490 + C19490 + C49088 * C9943) *
                C49235 +
            (C3861 * C2378 + C19491 + C19491 + C49256 * C2390 + C3863 * C10206 +
             C19492 + C19492 + C49088 * C10208) *
                C48938) *
               C49293) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[95] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C49235 +
            (C11452 + C11453 + C11454 + C11455) * C48938) *
               C49043 * C380 -
           ((C11780 + C11781 + C11782 + C11783) * C48938 +
            (C11401 * C1955 + C11764 + C11764 + C49265 * C1961 +
             C11399 * C1483 + C11765 + C11765 + C11391 * C1491 + C11397 * C680 +
             C11766 + C11766 + C11390 * C690 + C11395 * C386 + C11767 + C11767 +
             C11389 * C398) *
                C49235) *
               C49043 * C49287) *
              C508 +
          (((C11395 * C680 + C12150 + C12150 + C11389 * C690 + C11397 * C1483 +
             C12151 + C12151 + C11390 * C1491 + C11399 * C1955 + C12152 +
             C12152 + C11391 * C1961 + C11401 * C9455 + C12153 + C12153 +
             C49265 * C9459) *
                C49235 +
            (C11395 * C681 + C12154 + C12154 + C11389 * C691 + C11397 * C1482 +
             C12155 + C12155 + C11390 * C1490 + C11399 * C1956 + C12156 +
             C12156 + C11391 * C1962 + C11401 * C9456 + C12157 + C12157 +
             C49265 * C9460) *
                C48938) *
               C49043 * C49287 -
           ((C11618 + C11619 + C11620 + C11621) * C48938 +
            (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
             C11399 * C1283 + C11603 + C11603 + C11391 * C1291 + C11397 * C578 +
             C11604 + C11604 + C11390 * C588 + C11395 * C258 + C11605 + C11605 +
             C11389 * C270) *
                C49235) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C3857 +
            (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
               C49043 * C380 -
           ((C4254 + C4255) * C49257 + (C4256 + C4257) * C3859 +
            (C4258 + C4259) * C3858 +
            (C3863 * C680 + C4238 + C4238 + C49088 * C690 + C3861 * C386 +
             C4239 + C4239 + C49256 * C398) *
                C3857) *
               C49043 * C49287) *
              C508 +
          (((C3861 * C680 + C4626 + C4626 + C49256 * C690 + C3863 * C1483 +
             C4627 + C4627 + C49088 * C1491) *
                C3857 +
            (C3861 * C681 + C4628 + C4628 + C49256 * C691 + C3863 * C1482 +
             C4629 + C4629 + C49088 * C1490) *
                C3858 +
            (C3861 * C682 + C4630 + C4630 + C49256 * C692 + C3863 * C1481 +
             C4631 + C4631 + C49088 * C1489) *
                C3859 +
            (C3861 * C683 + C4632 + C4632 + C49256 * C693 + C3863 * C1484 +
             C4633 + C4633 + C49088 * C1492) *
                C49257) *
               C49043 * C49287 -
           ((C4084 + C4085) * C49257 + (C4086 + C4087) * C3859 +
            (C4088 + C4089) * C3858 +
            (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
             C4069 + C4069 + C49256 * C270) *
                C3857) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C49235 +
             (C3910 + C3911) * C48938) *
                C15403 +
            ((C6680 + C6681) * C49235 + C6657 * C48938) * C15404 +
            ((C7791 + C7790) * C49235 + C19137 * C48938) * C49293) *
               C380 -
           (((C19147 + C19148) * C48938 +
             (C3863 * C3305 + C7781 + C7781 + C49088 * C3311 + C3861 * C2851 +
              C7780 + C7780 + C49256 * C2859) *
                 C49235) *
                C49293 +
            (C19142 * C48938 + (C7790 + C7791) * C49235) * C15404 +
            (C6667 * C48938 + (C6681 + C6680) * C49235) * C15403) *
               C49287) *
              C508 +
          ((((C7240 + C7241) * C49235 + (C6458 + C6457) * C48938) * C15403 +
            ((C19699 + C19700) * C49235 + (C18942 + C18941) * C48938) * C15404 +
            ((C3861 * C3305 + C19691 + C19691 + C49256 * C3311 +
              C3863 * C10361 + C19692 + C19692 + C49088 * C10365) *
                 C49235 +
             (C3861 * C3306 + C19693 + C19693 + C49256 * C3312 +
              C3863 * C10362 + C19694 + C19694 + C49088 * C10366) *
                 C48938) *
                C49293) *
               C49287 -
           (((C18941 + C18942) * C48938 + (C19700 + C19699) * C49235) * C49293 +
            ((C6457 + C6458) * C48938 + (C7241 + C7240) * C49235) * C15404 +
            ((C4088 + C4089) * C48938 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C49235) *
                C15403) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[96] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C49235 +
            (C11452 + C11453 + C11454 + C11455) * C48938) *
               C49043 * C782 -
           ((C11780 + C11781 + C11782 + C11783) * C48938 +
            (C11401 * C1955 + C11764 + C11764 + C49265 * C1961 +
             C11399 * C1483 + C11765 + C11765 + C11391 * C1491 + C11397 * C680 +
             C11766 + C11766 + C11390 * C690 + C11395 * C386 + C11767 + C11767 +
             C11389 * C398) *
                C49235) *
               C49043 * C49287) *
              C48997 * C510 +
          (((C11783 + C11782 + C11781 + C11780) * C49235 +
            (C11395 * C384 + C11768 + C11768 + C11389 * C396 + C11397 * C682 +
             C11769 + C11769 + C11390 * C692 + C11399 * C1481 + C11770 +
             C11770 + C11391 * C1489 + C11401 * C1957 + C11771 + C11771 +
             C49265 * C1963) *
                C48938) *
               C49043 * C49287 -
           ((C11456 + C11457 + C11458 + C11459) * C48938 +
            (C11455 + C11454 + C11453 + C11452) * C49235) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C3857 +
            (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
               C49043 * C782 -
           ((C4254 + C4255) * C49257 + (C4256 + C4257) * C3859 +
            (C4258 + C4259) * C3858 +
            (C3863 * C680 + C4238 + C4238 + C49088 * C690 + C3861 * C386 +
             C4239 + C4239 + C49256 * C398) *
                C3857) *
               C49043 * C49287) *
              C48997 * C510 +
          (((C4259 + C4258) * C3857 + (C4257 + C4256) * C3858 +
            (C4255 + C4254) * C3859 +
            (C3861 * C382 + C4240 + C4240 + C49256 * C394 + C3863 * C684 +
             C4241 + C4241 + C49088 * C694) *
                C49257) *
               C49043 * C49287 -
           ((C3916 + C3917) * C49257 + (C3915 + C3914) * C3859 +
            (C3913 + C3912) * C3858 + (C3911 + C3910) * C3857) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C49235 +
             (C3910 + C3911) * C48938) *
                C15403 +
            ((C6680 + C6681) * C49235 + C6657 * C48938) * C15404 +
            ((C7791 + C7790) * C49235 + C19137 * C48938) * C49293) *
               C782 -
           (((C19147 + C19148) * C48938 +
             (C3863 * C3305 + C7781 + C7781 + C49088 * C3311 + C3861 * C2851 +
              C7780 + C7780 + C49256 * C2859) *
                 C49235) *
                C49293 +
            (C19142 * C48938 + (C7790 + C7791) * C49235) * C15404 +
            (C6667 * C48938 + (C6681 + C6680) * C49235) * C15403) *
               C49287) *
              C48997 * C510 +
          (((C6657 * C49235 + C6244 * C48938) * C15403 +
            (C19137 * C49235 + (C6683 + C6682) * C48938) * C15404 +
            ((C19148 + C19147) * C49235 +
             (C3861 * C2849 + C7784 + C7784 + C49256 * C2857 + C3863 * C3307 +
              C7785 + C7785 + C49088 * C3313) *
                 C48938) *
                C49293) *
               C49287 -
           (((C6682 + C6683) * C48938 + C19142 * C49235) * C49293 +
            (C6666 * C48938 + C6667 * C49235) * C15404 +
            ((C3913 + C3912) * C48938 + (C3911 + C3910) * C49235) * C15403) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[97] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C49235 +
            (C11452 + C11453 + C11454 + C11455) * C48938) *
               C49043 * C782 -
           ((C11780 + C11781 + C11782 + C11783) * C48938 +
            (C11401 * C1955 + C11764 + C11764 + C49265 * C1961 +
             C11399 * C1483 + C11765 + C11765 + C11391 * C1491 + C11397 * C680 +
             C11766 + C11766 + C11390 * C690 + C11395 * C386 + C11767 + C11767 +
             C11389 * C398) *
                C49235) *
               C49043 * C49287) *
              C250 +
          (((C11395 * C680 + C12150 + C12150 + C11389 * C690 + C11397 * C1483 +
             C12151 + C12151 + C11390 * C1491 + C11399 * C1955 + C12152 +
             C12152 + C11391 * C1961 + C11401 * C9455 + C12153 + C12153 +
             C49265 * C9459) *
                C49235 +
            (C11395 * C681 + C12154 + C12154 + C11389 * C691 + C11397 * C1482 +
             C12155 + C12155 + C11390 * C1490 + C11399 * C1956 + C12156 +
             C12156 + C11391 * C1962 + C11401 * C9456 + C12157 + C12157 +
             C49265 * C9460) *
                C48938) *
               C49043 * C49287 -
           ((C11618 + C11619 + C11620 + C11621) * C48938 +
            (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
             C11399 * C1283 + C11603 + C11603 + C11391 * C1291 + C11397 * C578 +
             C11604 + C11604 + C11390 * C588 + C11395 * C258 + C11605 + C11605 +
             C11389 * C270) *
                C49235) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C3857 +
            (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
               C49043 * C782 -
           ((C4254 + C4255) * C49257 + (C4256 + C4257) * C3859 +
            (C4258 + C4259) * C3858 +
            (C3863 * C680 + C4238 + C4238 + C49088 * C690 + C3861 * C386 +
             C4239 + C4239 + C49256 * C398) *
                C3857) *
               C49043 * C49287) *
              C250 +
          (((C3861 * C680 + C4626 + C4626 + C49256 * C690 + C3863 * C1483 +
             C4627 + C4627 + C49088 * C1491) *
                C3857 +
            (C3861 * C681 + C4628 + C4628 + C49256 * C691 + C3863 * C1482 +
             C4629 + C4629 + C49088 * C1490) *
                C3858 +
            (C3861 * C682 + C4630 + C4630 + C49256 * C692 + C3863 * C1481 +
             C4631 + C4631 + C49088 * C1489) *
                C3859 +
            (C3861 * C683 + C4632 + C4632 + C49256 * C693 + C3863 * C1484 +
             C4633 + C4633 + C49088 * C1492) *
                C49257) *
               C49043 * C49287 -
           ((C4084 + C4085) * C49257 + (C4086 + C4087) * C3859 +
            (C4088 + C4089) * C3858 +
            (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
             C4069 + C4069 + C49256 * C270) *
                C3857) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C49235 +
             (C3910 + C3911) * C48938) *
                C15403 +
            ((C6680 + C6681) * C49235 + C6657 * C48938) * C15404 +
            ((C7791 + C7790) * C49235 + C19137 * C48938) * C49293) *
               C782 -
           (((C19147 + C19148) * C48938 +
             (C3863 * C3305 + C7781 + C7781 + C49088 * C3311 + C3861 * C2851 +
              C7780 + C7780 + C49256 * C2859) *
                 C49235) *
                C49293 +
            (C19142 * C48938 + (C7790 + C7791) * C49235) * C15404 +
            (C6667 * C48938 + (C6681 + C6680) * C49235) * C15403) *
               C49287) *
              C250 +
          ((((C7240 + C7241) * C49235 + (C6458 + C6457) * C48938) * C15403 +
            ((C19699 + C19700) * C49235 + (C18942 + C18941) * C48938) * C15404 +
            ((C3861 * C3305 + C19691 + C19691 + C49256 * C3311 +
              C3863 * C10361 + C19692 + C19692 + C49088 * C10365) *
                 C49235 +
             (C3861 * C3306 + C19693 + C19693 + C49256 * C3312 +
              C3863 * C10362 + C19694 + C19694 + C49088 * C10366) *
                 C48938) *
                C49293) *
               C49287 -
           (((C18941 + C18942) * C48938 + (C19700 + C19699) * C49235) * C49293 +
            ((C6457 + C6458) * C48938 + (C7241 + C7240) * C49235) * C15404 +
            ((C4088 + C4089) * C48938 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C49235) *
                C15403) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[98] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
            C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
            C11391 * C588 + C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
               C49235 +
           (C11452 + C11453 + C11454 + C11455) * C48938) *
              C49043 * C928 -
          ((C11780 + C11781 + C11782 + C11783) * C48938 +
           (C11401 * C1955 + C11764 + C11764 + C49265 * C1961 + C11399 * C1483 +
            C11765 + C11765 + C11391 * C1491 + C11397 * C680 + C11766 + C11766 +
            C11390 * C690 + C11395 * C386 + C11767 + C11767 + C11389 * C398) *
               C49235) *
              C49043 * C929 +
          ((C11395 * C931 + C12516 + C12516 + C11389 * C941 + C11397 * C2375 +
            C12517 + C12517 + C11390 * C2387 + C11399 * C2376 + C12518 +
            C12518 + C11391 * C2388 + C11401 * C9939 + C12519 + C12519 +
            C49265 * C9943) *
               C49235 +
           (C11395 * C932 + C12520 + C12520 + C11389 * C942 + C11397 * C2377 +
            C12521 + C12521 + C11390 * C2389 + C11399 * C2378 + C12522 +
            C12522 + C11391 * C2390 + C11401 * C10206 + C12523 + C12523 +
            C49265 * C10208) *
               C48938) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
            C3867 + C3867 + C49088 * C270) *
               C3857 +
           (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
              C49043 * C928 -
          ((C4254 + C4255) * C49257 + (C4256 + C4257) * C3859 +
           (C4258 + C4259) * C3858 +
           (C3863 * C680 + C4238 + C4238 + C49088 * C690 + C3861 * C386 +
            C4239 + C4239 + C49256 * C398) *
               C3857) *
              C49043 * C929 +
          ((C3861 * C931 + C4992 + C4992 + C49256 * C941 + C3863 * C2375 +
            C4993 + C4993 + C49088 * C2387) *
               C3857 +
           (C3861 * C932 + C4994 + C4994 + C49256 * C942 + C3863 * C2377 +
            C4995 + C4995 + C49088 * C2389) *
               C3858 +
           (C3861 * C933 + C4996 + C4996 + C49256 * C943 + C3863 * C2379 +
            C4997 + C4997 + C49088 * C2391) *
               C3859 +
           (C3861 * C934 + C4998 + C4998 + C49256 * C944 + C3863 * C2676 +
            C4999 + C4999 + C49088 * C2678) *
               C49257) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C49235 +
            (C3910 + C3911) * C48938) *
               C15403 +
           ((C6680 + C6681) * C49235 + C6657 * C48938) * C15404 +
           C20248 * C49293) *
              C928 -
          (((C19147 + C19148) * C48938 + (C20251 + C20252) * C49235) * C49293 +
           (C19142 * C48938 + (C7790 + C7791) * C49235) * C15404 +
           (C6667 * C48938 + (C6681 + C6680) * C49235) * C15403) *
              C929 +
          (C20248 * C15403 +
           ((C20252 + C20251) * C49235 + (C19148 + C19147) * C48938) * C15404 +
           ((C3861 * C3735 + C20241 + C20241 + C49256 * C3741 + C3863 * C11264 +
             C20242 + C20242 + C49088 * C11268) *
                C49235 +
            (C3861 * C3736 + C20243 + C20243 + C49256 * C3742 + C3863 * C17997 +
             C20244 + C20244 + C49088 * C17999) *
                C48938) *
               C49293) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[99] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
            C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
            C11391 * C588 + C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
               C48928 * C49258 +
           (C11395 * C386 + C11767 + C11767 + C11389 * C398 + C11397 * C680 +
            C11766 + C11766 + C11390 * C690 + C11399 * C1483 + C11765 + C11765 +
            C11391 * C1491 + C11401 * C1955 + C11764 + C11764 +
            C49265 * C1961) *
               C48928 * C49130) *
              C49014 * C48997 * C110 -
          ((C11780 + C11781 + C11782 + C11783) * C48928 * C49130 +
           (C11455 + C11454 + C11453 + C11452) * C48928 * C49258) *
              C49014 * C48997 * C111 +
          ((C11459 + C11458 + C11457 + C11456) * C48928 * C49258 +
           (C11395 * C384 + C11768 + C11768 + C11389 * C396 + C11397 * C682 +
            C11769 + C11769 + C11390 * C692 + C11399 * C1481 + C11770 + C11770 +
            C11391 * C1489 + C11401 * C1957 + C11771 + C11771 +
            C49265 * C1963) *
               C48928 * C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C1064 +
            (C3910 + C3911) * C1065 + C3918 * C49279) *
               C49258 +
           ((C3861 * C386 + C4239 + C4239 + C49256 * C398 + C3863 * C680 +
             C4238 + C4238 + C49088 * C690) *
                C1064 +
            (C4259 + C4258) * C1065 + C6244 * C49279) *
               C49130) *
              C49014 * C48997 * C110 -
          (((C4254 + C4255) * C49279 + (C4256 + C4257) * C1065 +
            (C4258 + C4259) * C1064) *
               C49130 +
           ((C3915 + C3914) * C49279 + (C3913 + C3912) * C1065 +
            (C3911 + C3910) * C1064) *
               C49258) *
              C49014 * C48997 * C111 +
          ((C3918 * C1064 + C3919 * C1065 + (C3917 + C3916) * C49279) * C49258 +
           (C6244 * C1064 + (C4255 + C4254) * C1065 +
            (C3861 * C382 + C4240 + C4240 + C49256 * C394 + C3863 * C684 +
             C4241 + C4241 + C49088 * C694) *
                C49279) *
               C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
            C3867 + C3867 + C49088 * C270) *
               C48928 * C20350 +
           (C6680 + C6681) * C48928 * C20351 + C20235 * C48928 * C20352 +
           (C20252 + C20251) * C48928 * C49272) *
              C49014 * C48997 * C110 -
          ((C19147 + C19148) * C48928 * C49272 + C19142 * C48928 * C20352 +
           C6667 * C48928 * C20351 + (C3911 + C3910) * C48928 * C20350) *
              C49014 * C48997 * C111 +
          (C3918 * C48928 * C20350 + C6244 * C48928 * C20351 +
           (C6683 + C6682) * C48928 * C20352 +
           (C3861 * C2849 + C7784 + C7784 + C49256 * C2857 + C3863 * C3307 +
            C7785 + C7785 + C49088 * C3313) *
               C48928 * C49272) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[100] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C48928 * C49258 +
            (C11395 * C386 + C11767 + C11767 + C11389 * C398 + C11397 * C680 +
             C11766 + C11766 + C11390 * C690 + C11399 * C1483 + C11765 +
             C11765 + C11391 * C1491 + C11401 * C1955 + C11764 + C11764 +
             C49265 * C1961) *
                C48928 * C49130) *
               C49014 * C250 -
           ((C11401 * C9455 + C12153 + C12153 + C49265 * C9459 +
             C11399 * C1955 + C12152 + C12152 + C11391 * C1961 +
             C11397 * C1483 + C12151 + C12151 + C11390 * C1491 + C11395 * C680 +
             C12150 + C12150 + C11389 * C690) *
                C48928 * C49130 +
            (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
             C11399 * C1283 + C11603 + C11603 + C11391 * C1291 + C11397 * C578 +
             C11604 + C11604 + C11390 * C588 + C11395 * C258 + C11605 + C11605 +
             C11389 * C270) *
                C48928 * C49258) *
               C49014 * C49285) *
              C252 +
          (((C11621 + C11620 + C11619 + C11618) * C48928 * C49258 +
            (C11395 * C681 + C12154 + C12154 + C11389 * C691 + C11397 * C1482 +
             C12155 + C12155 + C11390 * C1490 + C11399 * C1956 + C12156 +
             C12156 + C11391 * C1962 + C11401 * C9456 + C12157 + C12157 +
             C49265 * C9460) *
                C48928 * C49130) *
               C49014 * C49285 -
           ((C11780 + C11781 + C11782 + C11783) * C48928 * C49130 +
            (C11455 + C11454 + C11453 + C11452) * C48928 * C49258) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C1064 +
             (C3910 + C3911) * C1065 + C3918 * C49279) *
                C49258 +
            ((C3861 * C386 + C4239 + C4239 + C49256 * C398 + C3863 * C680 +
              C4238 + C4238 + C49088 * C690) *
                 C1064 +
             (C4259 + C4258) * C1065 + C6244 * C49279) *
                C49130) *
               C49014 * C250 -
           (((C6455 + C6456) * C49279 + (C6457 + C6458) * C1065 +
             (C3863 * C1483 + C4627 + C4627 + C49088 * C1491 + C3861 * C680 +
              C4626 + C4626 + C49256 * C690) *
                 C1064) *
                C49130 +
            ((C4086 + C4087) * C49279 + (C4088 + C4089) * C1065 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C1064) *
                C49258) *
               C49014 * C49285) *
              C252 +
          ((((C4089 + C4088) * C1064 + (C4087 + C4086) * C1065 +
             (C4085 + C4084) * C49279) *
                C49258 +
            ((C6458 + C6457) * C1064 + (C6456 + C6455) * C1065 +
             (C3861 * C683 + C4632 + C4632 + C49256 * C693 + C3863 * C1484 +
              C4633 + C4633 + C49088 * C1492) *
                 C49279) *
                C49130) *
               C49014 * C49285 -
           (((C4254 + C4255) * C49279 + (C4256 + C4257) * C1065 +
             (C4258 + C4259) * C1064) *
                C49130 +
            ((C3915 + C3914) * C49279 + (C3913 + C3912) * C1065 +
             (C3911 + C3910) * C1064) *
                C49258) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C48928 * C20350 +
            (C6680 + C6681) * C48928 * C20351 + C20235 * C48928 * C20352 +
            (C20252 + C20251) * C48928 * C49272) *
               C49014 * C250 -
           ((C3863 * C10361 + C19692 + C19692 + C49088 * C10365 +
             C3861 * C3305 + C19691 + C19691 + C49256 * C3311) *
                C48928 * C49272 +
            (C19700 + C19699) * C48928 * C20352 +
            (C7241 + C7240) * C48928 * C20351 +
            (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
             C4069 + C4069 + C49256 * C270) *
                C48928 * C20350) *
               C49014 * C49285) *
              C252 +
          (((C4089 + C4088) * C48928 * C20350 +
            (C6458 + C6457) * C48928 * C20351 +
            (C18942 + C18941) * C48928 * C20352 +
            (C3861 * C3306 + C19693 + C19693 + C49256 * C3312 + C3863 * C10362 +
             C19694 + C19694 + C49088 * C10366) *
                C48928 * C49272) *
               C49014 * C49285 -
           ((C19147 + C19148) * C48928 * C49272 + C19142 * C48928 * C20352 +
            C6667 * C48928 * C20351 + (C3911 + C3910) * C48928 * C20350) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[101] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C48928 * C49258 +
            (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
               C380 -
           ((C11401 * C9939 + C12519 + C12519 + C49265 * C9943 +
             C11399 * C2376 + C12518 + C12518 + C11391 * C2388 +
             C11397 * C2375 + C12517 + C12517 + C11390 * C2387 + C11395 * C931 +
             C12516 + C12516 + C11389 * C941) *
                C48928 * C49130 +
            (C14525 + C14524 + C14523 + C14522) * C48928 * C49258) *
               C49287) *
              C48997 * C252 +
          (((C11783 + C11782 + C11781 + C11780) * C48928 * C49258 +
            (C11395 * C932 + C12520 + C12520 + C11389 * C942 + C11397 * C2377 +
             C12521 + C12521 + C11390 * C2389 + C11399 * C2378 + C12522 +
             C12522 + C11391 * C2390 + C11401 * C10206 + C12523 + C12523 +
             C49265 * C10208) *
                C48928 * C49130) *
               C49287 -
           ((C11780 + C11781 + C11782 + C11783) * C48928 * C49130 +
            (C11455 + C11454 + C11453 + C11452) * C48928 * C49258) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C1064 +
             (C3910 + C3911) * C1065 + C3918 * C49279) *
                C49258 +
            ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
                C49130) *
               C380 -
           (((C6682 + C6683) * C49279 + (C6684 + C6685) * C1065 +
             (C3863 * C2375 + C4993 + C4993 + C49088 * C2387 + C3861 * C931 +
              C4992 + C4992 + C49256 * C941) *
                 C1064) *
                C49130 +
            (C6666 * C49279 + C6667 * C1065 + (C6681 + C6680) * C1064) *
                C49258) *
               C49287) *
              C48997 * C252 +
          (((C6657 * C1064 + C6244 * C1065 + (C4255 + C4254) * C49279) *
                C49258 +
            ((C6685 + C6684) * C1064 + (C6683 + C6682) * C1065 +
             (C3861 * C934 + C4998 + C4998 + C49256 * C944 + C3863 * C2676 +
              C4999 + C4999 + C49088 * C2678) *
                 C49279) *
                C49130) *
               C49287 -
           (((C4254 + C4255) * C49279 + C6666 * C1065 + C6667 * C1064) *
                C49130 +
            ((C3915 + C3914) * C49279 + (C3913 + C3912) * C1065 +
             (C3911 + C3910) * C1064) *
                C49258) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C48928 * C20350 +
            (C6680 + C6681) * C48928 * C20351 + C20235 * C48928 * C20352 +
            (C20252 + C20251) * C48928 * C49272) *
               C380 -
           ((C3863 * C11264 + C20242 + C20242 + C49088 * C11268 +
             C3861 * C3735 + C20241 + C20241 + C49256 * C3741) *
                C48928 * C49272 +
            (C20251 + C20252) * C48928 * C20352 +
            (C7790 + C7791) * C48928 * C20351 +
            (C6681 + C6680) * C48928 * C20350) *
               C49287) *
              C48997 * C252 +
          ((C6657 * C48928 * C20350 + C19137 * C48928 * C20351 +
            (C19148 + C19147) * C48928 * C20352 +
            (C3861 * C3736 + C20243 + C20243 + C49256 * C3742 + C3863 * C17997 +
             C20244 + C20244 + C49088 * C17999) *
                C48928 * C49272) *
               C49287 -
           ((C19147 + C19148) * C48928 * C49272 + C19142 * C48928 * C20352 +
            C6667 * C48928 * C20351 + (C3911 + C3910) * C48928 * C20350) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[102] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C48928 * C49258 +
            (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
               C49014 * C508 -
           ((C11401 * C9455 + C12153 + C12153 + C49265 * C9459 +
             C11399 * C1955 + C12152 + C12152 + C11391 * C1961 +
             C11397 * C1483 + C12151 + C12151 + C11390 * C1491 + C11395 * C680 +
             C12150 + C12150 + C11389 * C690) *
                C48928 * C49130 +
            (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
             C11399 * C1283 + C11603 + C11603 + C11391 * C1291 + C11397 * C578 +
             C11604 + C11604 + C11390 * C588 + C11395 * C258 + C11605 + C11605 +
             C11389 * C270) *
                C48928 * C49258) *
               C49014 * C49285) *
              C510 +
          (((C11621 + C11620 + C11619 + C11618) * C48928 * C49258 +
            (C11395 * C681 + C12154 + C12154 + C11389 * C691 + C11397 * C1482 +
             C12155 + C12155 + C11390 * C1490 + C11399 * C1956 + C12156 +
             C12156 + C11391 * C1962 + C11401 * C9456 + C12157 + C12157 +
             C49265 * C9460) *
                C48928 * C49130) *
               C49014 * C49285 -
           ((C11780 + C11781 + C11782 + C11783) * C48928 * C49130 +
            (C11455 + C11454 + C11453 + C11452) * C48928 * C49258) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C1064 +
             (C3910 + C3911) * C1065 + C3918 * C49279) *
                C49258 +
            ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
                C49130) *
               C49014 * C508 -
           (((C6455 + C6456) * C49279 + (C6457 + C6458) * C1065 +
             (C3863 * C1483 + C4627 + C4627 + C49088 * C1491 + C3861 * C680 +
              C4626 + C4626 + C49256 * C690) *
                 C1064) *
                C49130 +
            ((C4086 + C4087) * C49279 + (C4088 + C4089) * C1065 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C1064) *
                C49258) *
               C49014 * C49285) *
              C510 +
          ((((C4089 + C4088) * C1064 + (C4087 + C4086) * C1065 +
             (C4085 + C4084) * C49279) *
                C49258 +
            ((C6458 + C6457) * C1064 + (C6456 + C6455) * C1065 +
             (C3861 * C683 + C4632 + C4632 + C49256 * C693 + C3863 * C1484 +
              C4633 + C4633 + C49088 * C1492) *
                 C49279) *
                C49130) *
               C49014 * C49285 -
           (((C4254 + C4255) * C49279 + C6666 * C1065 + C6667 * C1064) *
                C49130 +
            ((C3915 + C3914) * C49279 + (C3913 + C3912) * C1065 +
             (C3911 + C3910) * C1064) *
                C49258) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C48928 * C20350 +
            (C6680 + C6681) * C48928 * C20351 + C20235 * C48928 * C20352 +
            (C20252 + C20251) * C48928 * C49272) *
               C49014 * C508 -
           ((C3863 * C10361 + C19692 + C19692 + C49088 * C10365 +
             C3861 * C3305 + C19691 + C19691 + C49256 * C3311) *
                C48928 * C49272 +
            (C19700 + C19699) * C48928 * C20352 +
            (C7241 + C7240) * C48928 * C20351 +
            (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
             C4069 + C4069 + C49256 * C270) *
                C48928 * C20350) *
               C49014 * C49285) *
              C510 +
          (((C4089 + C4088) * C48928 * C20350 +
            (C6458 + C6457) * C48928 * C20351 +
            (C18942 + C18941) * C48928 * C20352 +
            (C3861 * C3306 + C19693 + C19693 + C49256 * C3312 + C3863 * C10362 +
             C19694 + C19694 + C49088 * C10366) *
                C48928 * C49272) *
               C49014 * C49285 -
           ((C19147 + C19148) * C48928 * C49272 + C19142 * C48928 * C20352 +
            C6667 * C48928 * C20351 + (C3911 + C3910) * C48928 * C20350) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[103] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
            C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
            C11391 * C588 + C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
               C48928 * C49258 +
           (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
              C49014 * C574 -
          ((C11401 * C9455 + C12153 + C12153 + C49265 * C9459 + C11399 * C1955 +
            C12152 + C12152 + C11391 * C1961 + C11397 * C1483 + C12151 +
            C12151 + C11390 * C1491 + C11395 * C680 + C12150 + C12150 +
            C11389 * C690) *
               C48928 * C49130 +
           (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 + C11399 * C1283 +
            C11603 + C11603 + C11391 * C1291 + C11397 * C578 + C11604 + C11604 +
            C11390 * C588 + C11395 * C258 + C11605 + C11605 + C11389 * C270) *
               C48928 * C49258) *
              C49014 * C575 +
          ((C11395 * C578 + C12012 + C12012 + C11389 * C588 + C11397 * C1283 +
            C12013 + C12013 + C11390 * C1291 + C11399 * C1791 + C12014 +
            C12014 + C11391 * C1797 + C11401 * C9357 + C12015 + C12015 +
            C49265 * C9361) *
               C48928 * C49258 +
           (C11395 * C1483 + C14754 + C14754 + C11389 * C1491 + C11397 * C1955 +
            C14755 + C14755 + C11390 * C1961 + C11399 * C9455 + C14756 +
            C14756 + C11391 * C9459 + C11401 * C9705 + C14757 + C14757 +
            C49265 * C9707) *
               C48928 * C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C1064 +
            (C3910 + C3911) * C1065 + C3918 * C49279) *
               C49258 +
           ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
               C49130) *
              C49014 * C574 -
          (((C6455 + C6456) * C49279 + (C6457 + C6458) * C1065 +
            (C3863 * C1483 + C4627 + C4627 + C49088 * C1491 + C3861 * C680 +
             C4626 + C4626 + C49256 * C690) *
                C1064) *
               C49130 +
           ((C4086 + C4087) * C49279 + (C4088 + C4089) * C1065 +
            (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
             C4069 + C4069 + C49256 * C270) *
                C1064) *
               C49258) *
              C49014 * C575 +
          (((C3861 * C578 + C4488 + C4488 + C49256 * C588 + C3863 * C1283 +
             C4489 + C4489 + C49088 * C1291) *
                C1064 +
            (C3861 * C579 + C4490 + C4490 + C49256 * C589 + C3863 * C1282 +
             C4491 + C4491 + C49088 * C1290) *
                C1065 +
            (C3861 * C580 + C4492 + C4492 + C49256 * C590 + C3863 * C1281 +
             C4493 + C4493 + C49088 * C1289) *
                C49279) *
               C49258 +
           ((C3861 * C1483 + C7026 + C7026 + C49256 * C1491 + C3863 * C1955 +
             C7027 + C7027 + C49088 * C1961) *
                C1064 +
            (C3861 * C1482 + C7028 + C7028 + C49256 * C1490 + C3863 * C1956 +
             C7029 + C7029 + C49088 * C1962) *
                C1065 +
            (C3861 * C1481 + C7030 + C7030 + C49256 * C1489 + C3863 * C1957 +
             C7031 + C7031 + C49088 * C1963) *
                C49279) *
               C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
            C3867 + C3867 + C49088 * C270) *
               C48928 * C20350 +
           (C6680 + C6681) * C48928 * C20351 + C20235 * C48928 * C20352 +
           (C20252 + C20251) * C48928 * C49272) *
              C49014 * C574 -
          ((C3863 * C10361 + C19692 + C19692 + C49088 * C10365 + C3861 * C3305 +
            C19691 + C19691 + C49256 * C3311) *
               C48928 * C49272 +
           (C19700 + C19699) * C48928 * C20352 +
           (C7241 + C7240) * C48928 * C20351 +
           (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
            C4069 + C4069 + C49256 * C270) *
               C48928 * C20350) *
              C49014 * C575 +
          ((C3861 * C578 + C4488 + C4488 + C49256 * C588 + C3863 * C1283 +
            C4489 + C4489 + C49088 * C1291) *
               C48928 * C20350 +
           (C3861 * C1483 + C7026 + C7026 + C49256 * C1491 + C3863 * C1955 +
            C7027 + C7027 + C49088 * C1961) *
               C48928 * C20351 +
           (C3861 * C2376 + C19489 + C19489 + C49256 * C2388 + C3863 * C9939 +
            C19490 + C19490 + C49088 * C9943) *
               C48928 * C20352 +
           (C3861 * C10361 + C21945 + C21945 + C49256 * C10365 +
            C3863 * C10826 + C21946 + C21946 + C49088 * C10828) *
               C48928 * C49272) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[104] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C48928 * C49258 +
            (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
               C380 -
           ((C11401 * C9939 + C12519 + C12519 + C49265 * C9943 +
             C11399 * C2376 + C12518 + C12518 + C11391 * C2388 +
             C11397 * C2375 + C12517 + C12517 + C11390 * C2387 + C11395 * C931 +
             C12516 + C12516 + C11389 * C941) *
                C48928 * C49130 +
            (C14525 + C14524 + C14523 + C14522) * C48928 * C49258) *
               C49287) *
              C508 +
          (((C14908 + C14909 + C14910 + C14911) * C48928 * C49258 +
            (C11395 * C2375 + C14896 + C14896 + C11389 * C2387 +
             C11397 * C2376 + C14897 + C14897 + C11390 * C2388 +
             C11399 * C9939 + C14898 + C14898 + C11391 * C9943 +
             C11401 * C9940 + C14899 + C14899 + C49265 * C9944) *
                C48928 * C49130) *
               C49287 -
           ((C14911 + C14910 + C14909 + C14908) * C48928 * C49130 +
            (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
             C11399 * C1283 + C11603 + C11603 + C11391 * C1291 + C11397 * C578 +
             C11604 + C11604 + C11390 * C588 + C11395 * C258 + C11605 + C11605 +
             C11389 * C270) *
                C48928 * C49258) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C1064 +
             (C3910 + C3911) * C1065 + C3918 * C49279) *
                C49258 +
            ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
                C49130) *
               C380 -
           (((C6682 + C6683) * C49279 + (C6684 + C6685) * C1065 +
             (C3863 * C2375 + C4993 + C4993 + C49088 * C2387 + C3861 * C931 +
              C4992 + C4992 + C49256 * C941) *
                 C1064) *
                C49130 +
            (C6666 * C49279 + C6667 * C1065 + (C6681 + C6680) * C1064) *
                C49258) *
               C49287) *
              C508 +
          ((((C7240 + C7241) * C1064 + (C6458 + C6457) * C1065 +
             (C6456 + C6455) * C49279) *
                C49258 +
            ((C3861 * C2375 + C7230 + C7230 + C49256 * C2387 + C3863 * C2376 +
              C7231 + C7231 + C49088 * C2388) *
                 C1064 +
             (C3861 * C2377 + C7232 + C7232 + C49256 * C2389 + C3863 * C2378 +
              C7233 + C7233 + C49088 * C2390) *
                 C1065 +
             (C3861 * C2379 + C7234 + C7234 + C49256 * C2391 + C3863 * C2380 +
              C7235 + C7235 + C49088 * C2392) *
                 C49279) *
                C49130) *
               C49287 -
           (((C6455 + C6456) * C49279 + (C6457 + C6458) * C1065 +
             (C7241 + C7240) * C1064) *
                C49130 +
            ((C4086 + C4087) * C49279 + (C4088 + C4089) * C1065 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C1064) *
                C49258) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C48928 * C20350 +
            (C6680 + C6681) * C48928 * C20351 + C20235 * C48928 * C20352 +
            (C20252 + C20251) * C48928 * C49272) *
               C380 -
           ((C3863 * C11264 + C20242 + C20242 + C49088 * C11268 +
             C3861 * C3735 + C20241 + C20241 + C49256 * C3741) *
                C48928 * C49272 +
            (C20251 + C20252) * C48928 * C20352 +
            (C7790 + C7791) * C48928 * C20351 +
            (C6681 + C6680) * C48928 * C20350) *
               C49287) *
              C508 +
          (((C7240 + C7241) * C48928 * C20350 +
            (C19699 + C19700) * C48928 * C20351 +
            (C22087 + C22088) * C48928 * C20352 +
            (C3861 * C11264 + C22081 + C22081 + C49256 * C11268 +
             C3863 * C11265 + C22082 + C22082 + C49088 * C11269) *
                C48928 * C49272) *
               C49287 -
           ((C22088 + C22087) * C48928 * C49272 +
            (C19700 + C19699) * C48928 * C20352 +
            (C7241 + C7240) * C48928 * C20351 +
            (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
             C4069 + C4069 + C49256 * C270) *
                C48928 * C20350) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[105] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C48928 * C49258 +
            (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
               C782 -
           ((C11401 * C9939 + C12519 + C12519 + C49265 * C9943 +
             C11399 * C2376 + C12518 + C12518 + C11391 * C2388 +
             C11397 * C2375 + C12517 + C12517 + C11390 * C2387 + C11395 * C931 +
             C12516 + C12516 + C11389 * C941) *
                C48928 * C49130 +
            (C14525 + C14524 + C14523 + C14522) * C48928 * C49258) *
               C49287) *
              C48997 * C510 +
          (((C11783 + C11782 + C11781 + C11780) * C48928 * C49258 +
            (C11395 * C932 + C12520 + C12520 + C11389 * C942 + C11397 * C2377 +
             C12521 + C12521 + C11390 * C2389 + C11399 * C2378 + C12522 +
             C12522 + C11391 * C2390 + C11401 * C10206 + C12523 + C12523 +
             C49265 * C10208) *
                C48928 * C49130) *
               C49287 -
           ((C11780 + C11781 + C11782 + C11783) * C48928 * C49130 +
            (C11455 + C11454 + C11453 + C11452) * C48928 * C49258) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C1064 +
             (C3910 + C3911) * C1065 + C3918 * C49279) *
                C49258 +
            ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
                C49130) *
               C782 -
           (((C6682 + C6683) * C49279 + (C6684 + C6685) * C1065 +
             (C3863 * C2375 + C4993 + C4993 + C49088 * C2387 + C3861 * C931 +
              C4992 + C4992 + C49256 * C941) *
                 C1064) *
                C49130 +
            (C6666 * C49279 + C6667 * C1065 + (C6681 + C6680) * C1064) *
                C49258) *
               C49287) *
              C48997 * C510 +
          (((C6657 * C1064 + C6244 * C1065 + (C4255 + C4254) * C49279) *
                C49258 +
            ((C6685 + C6684) * C1064 + (C6683 + C6682) * C1065 +
             (C3861 * C934 + C4998 + C4998 + C49256 * C944 + C3863 * C2676 +
              C4999 + C4999 + C49088 * C2678) *
                 C49279) *
                C49130) *
               C49287 -
           (((C4254 + C4255) * C49279 + C6666 * C1065 + C6667 * C1064) *
                C49130 +
            ((C3915 + C3914) * C49279 + (C3913 + C3912) * C1065 +
             (C3911 + C3910) * C1064) *
                C49258) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C48928 * C20350 +
            (C6680 + C6681) * C48928 * C20351 + C20235 * C48928 * C20352 +
            (C20252 + C20251) * C48928 * C49272) *
               C782 -
           ((C3863 * C11264 + C20242 + C20242 + C49088 * C11268 +
             C3861 * C3735 + C20241 + C20241 + C49256 * C3741) *
                C48928 * C49272 +
            (C20251 + C20252) * C48928 * C20352 +
            (C7790 + C7791) * C48928 * C20351 +
            (C6681 + C6680) * C48928 * C20350) *
               C49287) *
              C48997 * C510 +
          ((C6657 * C48928 * C20350 + C19137 * C48928 * C20351 +
            (C19148 + C19147) * C48928 * C20352 +
            (C3861 * C3736 + C20243 + C20243 + C49256 * C3742 + C3863 * C17997 +
             C20244 + C20244 + C49088 * C17999) *
                C48928 * C49272) *
               C49287 -
           ((C19147 + C19148) * C48928 * C49272 + C19142 * C48928 * C20352 +
            C6667 * C48928 * C20351 + (C3911 + C3910) * C48928 * C20350) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[106] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C48928 * C49258 +
            (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
               C782 -
           ((C11401 * C9939 + C12519 + C12519 + C49265 * C9943 +
             C11399 * C2376 + C12518 + C12518 + C11391 * C2388 +
             C11397 * C2375 + C12517 + C12517 + C11390 * C2387 + C11395 * C931 +
             C12516 + C12516 + C11389 * C941) *
                C48928 * C49130 +
            (C14525 + C14524 + C14523 + C14522) * C48928 * C49258) *
               C49287) *
              C250 +
          (((C14908 + C14909 + C14910 + C14911) * C48928 * C49258 +
            (C11395 * C2375 + C14896 + C14896 + C11389 * C2387 +
             C11397 * C2376 + C14897 + C14897 + C11390 * C2388 +
             C11399 * C9939 + C14898 + C14898 + C11391 * C9943 +
             C11401 * C9940 + C14899 + C14899 + C49265 * C9944) *
                C48928 * C49130) *
               C49287 -
           ((C14911 + C14910 + C14909 + C14908) * C48928 * C49130 +
            (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
             C11399 * C1283 + C11603 + C11603 + C11391 * C1291 + C11397 * C578 +
             C11604 + C11604 + C11390 * C588 + C11395 * C258 + C11605 + C11605 +
             C11389 * C270) *
                C48928 * C49258) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C1064 +
             (C3910 + C3911) * C1065 + C3918 * C49279) *
                C49258 +
            ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
                C49130) *
               C782 -
           (((C6682 + C6683) * C49279 + (C6684 + C6685) * C1065 +
             (C3863 * C2375 + C4993 + C4993 + C49088 * C2387 + C3861 * C931 +
              C4992 + C4992 + C49256 * C941) *
                 C1064) *
                C49130 +
            (C6666 * C49279 + C6667 * C1065 + (C6681 + C6680) * C1064) *
                C49258) *
               C49287) *
              C250 +
          ((((C7240 + C7241) * C1064 + (C6458 + C6457) * C1065 +
             (C6456 + C6455) * C49279) *
                C49258 +
            ((C3861 * C2375 + C7230 + C7230 + C49256 * C2387 + C3863 * C2376 +
              C7231 + C7231 + C49088 * C2388) *
                 C1064 +
             (C3861 * C2377 + C7232 + C7232 + C49256 * C2389 + C3863 * C2378 +
              C7233 + C7233 + C49088 * C2390) *
                 C1065 +
             (C3861 * C2379 + C7234 + C7234 + C49256 * C2391 + C3863 * C2380 +
              C7235 + C7235 + C49088 * C2392) *
                 C49279) *
                C49130) *
               C49287 -
           (((C6455 + C6456) * C49279 + (C6457 + C6458) * C1065 +
             (C7241 + C7240) * C1064) *
                C49130 +
            ((C4086 + C4087) * C49279 + (C4088 + C4089) * C1065 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C1064) *
                C49258) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C48928 * C20350 +
            (C6680 + C6681) * C48928 * C20351 + C20235 * C48928 * C20352 +
            (C20252 + C20251) * C48928 * C49272) *
               C782 -
           ((C3863 * C11264 + C20242 + C20242 + C49088 * C11268 +
             C3861 * C3735 + C20241 + C20241 + C49256 * C3741) *
                C48928 * C49272 +
            (C20251 + C20252) * C48928 * C20352 +
            (C7790 + C7791) * C48928 * C20351 +
            (C6681 + C6680) * C48928 * C20350) *
               C49287) *
              C250 +
          (((C7240 + C7241) * C48928 * C20350 +
            (C19699 + C19700) * C48928 * C20351 +
            (C22087 + C22088) * C48928 * C20352 +
            (C3861 * C11264 + C22081 + C22081 + C49256 * C11268 +
             C3863 * C11265 + C22082 + C22082 + C49088 * C11269) *
                C48928 * C49272) *
               C49287 -
           ((C22088 + C22087) * C48928 * C49272 +
            (C19700 + C19699) * C48928 * C20352 +
            (C7241 + C7240) * C48928 * C20351 +
            (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
             C4069 + C4069 + C49256 * C270) *
                C48928 * C20350) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[107] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
            C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
            C11391 * C588 + C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
               C48928 * C49258 +
           (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
              C928 -
          ((C15290 + C15291 + C15292 + C15293) * C48928 * C49130 +
           (C14525 + C14524 + C14523 + C14522) * C48928 * C49258) *
              C929 +
          ((C15293 + C15292 + C15291 + C15290) * C48928 * C49258 +
           (C11395 * C2851 + C15278 + C15278 + C11389 * C2859 + C11397 * C3305 +
            C15279 + C15279 + C11390 * C3311 + C11399 * C10361 + C15280 +
            C15280 + C11391 * C10365 + C11401 * C10826 + C15281 + C15281 +
            C49265 * C10828) *
               C48928 * C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C1064 +
            (C3910 + C3911) * C1065 + C3918 * C49279) *
               C49258 +
           ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
               C49130) *
              C928 -
          (((C6682 + C6683) * C49279 + (C6684 + C6685) * C1065 +
            (C7790 + C7791) * C1064) *
               C49130 +
           (C6666 * C49279 + C6667 * C1065 + (C6681 + C6680) * C1064) *
               C49258) *
              C929 +
          (((C7791 + C7790) * C1064 + (C6685 + C6684) * C1065 +
            (C6683 + C6682) * C49279) *
               C49258 +
           ((C3861 * C2851 + C7780 + C7780 + C49256 * C2859 + C3863 * C3305 +
             C7781 + C7781 + C49088 * C3311) *
                C1064 +
            (C3861 * C2850 + C7782 + C7782 + C49256 * C2858 + C3863 * C3306 +
             C7783 + C7783 + C49088 * C3312) *
                C1065 +
            (C3861 * C2849 + C7784 + C7784 + C49256 * C2857 + C3863 * C3307 +
             C7785 + C7785 + C49088 * C3313) *
                C49279) *
               C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
            C3867 + C3867 + C49088 * C270) *
               C48928 * C20350 +
           (C6680 + C6681) * C48928 * C20351 + C22447 * C20352 +
           C22455 * C49272) *
              C928 -
          ((C22460 + C22461) * C48928 * C49272 +
           (C20251 + C20252) * C48928 * C20352 +
           (C7790 + C7791) * C48928 * C20351 +
           (C6681 + C6680) * C48928 * C20350) *
              C929 +
          (C22447 * C20350 + C22455 * C20351 +
           (C22461 + C22460) * C48928 * C20352 +
           (C3861 * C18084 + C22453 + C22453 + C49256 * C18088 +
            C3863 * C18338 + C22454 + C22454 + C49088 * C18340) *
               C48928 * C49272) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[108] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C49025 * C129) * C102 +
               C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                  C49043 * C49014 * C48997 * C110 -
              (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
               C164 * C102) *
                  C49043 * C49014 * C48997 * C111 +
              (C165 * C102 + C166 * C103 + C167 * C104 + C168 * C105 +
               (C113 * C121 + C153 + C153 + C49025 * C135) * C106) *
                  C49043 * C49014 * C48997 * C112) +
         0.5 * std::pow(Pi, 2.5) *
             (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
                C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
                C49290 * C588) *
                   C1064 +
               (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
                  C49043 * C49014 * C48997 * C110 -
              ((C1131 + C1132 + C1133) * C49279 +
               (C1130 + C1129 + C1128) * C1065 +
               (C1127 + C1126 + C1125) * C1064) *
                  C49043 * C49014 * C48997 * C111 +
              (C1135 * C1064 + (C1133 + C1132 + C1131) * C1065 +
               (C1067 * C119 + C1104 + C1104 + C49322 * C133 + C1069 * C254 +
                C1105 + C1105 + C49310 * C266 + C1071 * C582 + C1106 + C1106 +
                C49290 * C592) *
                   C49279) *
                  C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 + C164 * C1065 +
            C165 * C49279) *
               C49323 +
           ((C113 * C386 + C413 + C413 + C49025 * C398) * C1064 + C426 * C1065 +
            C425 * C49279) *
               C49312 +
           ((C113 * C931 + C947 + C947 + C49025 * C941) * C1064 +
            C2528 * C1065 + C2529 * C49279) *
               C49293) *
              C49014 * C48997 * C110 -
          ((C2530 * C49279 + C2529 * C1065 + C2528 * C1064) * C49293 +
           (C424 * C49279 + C425 * C1065 + C426 * C1064) * C49312 +
           (C166 * C49279 + C165 * C1065 + C164 * C1064) * C49323) *
              C49014 * C48997 * C111 +
          ((C165 * C1064 + C166 * C1065 + C167 * C49279) * C49323 +
           (C425 * C1064 + C424 * C1065 + C423 * C49279) * C49312 +
           (C2529 * C1064 + C2530 * C1065 +
            (C113 * C935 + C951 + C951 + C49025 * C945) * C49279) *
               C49293) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C49319 +
           (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
              C49043 * C49014 * C48997 * C110 -
          ((C7971 + C7972 + C7973) * C49279 + (C7970 + C7969 + C7968) * C49306 +
           (C7967 + C7966 + C7965) * C49319) *
              C49043 * C49014 * C48997 * C111 +
          (C7975 * C49319 + (C7973 + C7972 + C7971) * C49306 +
           (C7907 * C119 + C7944 + C7944 + C7901 * C133 + C7909 * C254 + C7945 +
            C7945 + C7902 * C266 + C7911 * C582 + C7946 + C7946 +
            C49290 * C592) *
               C49279) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
           C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
           C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
           C9265 + C9265 + C9248 * C1797) *
              C48928 * C49043 * C49014 * C48997 * C110 -
          (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
           C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
           C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
           C9250 * C116 + C9270 + C9270 + C9244 * C130) *
              C48928 * C49043 * C49014 * C48997 * C111 +
          (C9250 * C117 + C9271 + C9271 + C9244 * C131 + C9252 * C256 + C9272 +
           C9272 + C9245 * C268 + C9254 * C580 + C9273 + C9273 + C9246 * C590 +
           C9256 * C1281 + C9274 + C9274 + C9247 * C1289 + C9258 * C1793 +
           C9275 + C9275 + C9248 * C1799) *
              C48928 * C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C48928 * C49323 +
           (C7907 * C386 + C8330 + C8330 + C7901 * C398 + C7909 * C680 + C8329 +
            C8329 + C7902 * C690 + C7911 * C1483 + C8328 + C8328 +
            C49290 * C1491) *
               C48928 * C49312 +
           (C7907 * C931 + C9174 + C9174 + C7901 * C941 + C7909 * C2375 +
            C9175 + C9175 + C7902 * C2387 + C7911 * C2376 + C9176 + C9176 +
            C49290 * C2388) *
               C48928 * C49293) *
              C49014 * C48997 * C110 -
          ((C7911 * C2378 + C9179 + C9179 + C49290 * C2390 + C7909 * C2377 +
            C9178 + C9178 + C7902 * C2389 + C7907 * C932 + C9177 + C9177 +
            C7901 * C942) *
               C48928 * C49293 +
           (C8349 + C8350 + C8351) * C48928 * C49312 +
           (C7967 + C7966 + C7965) * C48928 * C49323) *
              C49014 * C48997 * C111 +
          (C7975 * C48928 * C49323 + (C8348 + C8347 + C8346) * C48928 * C49312 +
           (C7907 * C933 + C9180 + C9180 + C7901 * C943 + C7909 * C2379 +
            C9181 + C9181 + C7902 * C2391 + C7911 * C2380 + C9182 + C9182 +
            C49290 * C2392) *
               C48928 * C49293) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
            C164 * C49306 + C165 * C49279) *
               C15403 +
           (C2892 * C49319 + C426 * C49306 + C425 * C49279) * C15404 +
           (C2893 * C49319 + C2528 * C49306 + C2529 * C49279) * C49293) *
              C49014 * C48997 * C110 -
          ((C2530 * C49279 + C2529 * C49306 + C2528 * C49319) * C49293 +
           (C424 * C49279 + C425 * C49306 + C426 * C49319) * C15404 +
           (C166 * C49279 + C165 * C49306 + C164 * C49319) * C15403) *
              C49014 * C48997 * C111 +
          ((C165 * C49319 + C166 * C49306 + C167 * C49279) * C15403 +
           (C425 * C49319 + C424 * C49306 + C423 * C49279) * C15404 +
           (C2529 * C49319 + C2530 * C49306 +
            (C113 * C935 + C951 + C951 + C49025 * C945) * C49279) *
               C49293) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C48928 * C15403 +
           (C1067 * C386 + C1514 + C1514 + C49322 * C398 + C1069 * C680 +
            C1513 + C1513 + C49310 * C690 + C1071 * C1483 + C1512 + C1512 +
            C49290 * C1491) *
               C48928 * C15404 +
           (C1067 * C931 + C2394 + C2394 + C49322 * C941 + C1069 * C2375 +
            C2395 + C2395 + C49310 * C2387 + C1071 * C2376 + C2396 + C2396 +
            C49290 * C2388) *
               C48928 * C49293) *
              C49014 * C48997 * C110 -
          ((C1071 * C2378 + C2399 + C2399 + C49290 * C2390 + C1069 * C2377 +
            C2398 + C2398 + C49310 * C2389 + C1067 * C932 + C2397 + C2397 +
            C49322 * C942) *
               C48928 * C49293 +
           (C1533 + C1534 + C1535) * C48928 * C15404 +
           (C1127 + C1126 + C1125) * C48928 * C15403) *
              C49014 * C48997 * C111 +
          (C1135 * C48928 * C15403 + (C1532 + C1531 + C1530) * C48928 * C15404 +
           (C1067 * C933 + C2400 + C2400 + C49322 * C943 + C1069 * C2379 +
            C2401 + C2401 + C49310 * C2391 + C1071 * C2380 + C2402 + C2402 +
            C49290 * C2392) *
               C48928 * C49293) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49025 * C129) * C48928 * C17910 +
           C2892 * C48928 * C17911 + C2893 * C48928 * C17912 +
           C3756 * C48928 * C17913 +
           (C113 * C3735 + C3750 + C3750 + C49025 * C3741) * C48928 * C17914) *
              C49014 * C48997 * C110 -
          ((C113 * C3736 + C3751 + C3751 + C49025 * C3742) * C48928 * C17914 +
           C2895 * C48928 * C17913 + C2528 * C48928 * C17912 +
           C426 * C48928 * C17911 + C164 * C48928 * C17910) *
              C49014 * C48997 * C111 +
          (C165 * C48928 * C17910 + C425 * C48928 * C17911 +
           C2529 * C48928 * C17912 + C2894 * C48928 * C17913 +
           (C113 * C3737 + C3752 + C3752 + C49025 * C3743) * C48928 * C17914) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[109] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 +
                C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                   C49043 * C49014 * C250 -
               (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
                (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
                   C49043 * C49014 * C49285) *
                  C252 +
              ((C298 * C102 + C297 * C103 + C296 * C104 + C295 * C105 +
                (C113 * C259 + C286 + C286 + C49025 * C271) * C106) *
                   C49043 * C49014 * C49285 -
               (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
                C164 * C102) *
                   C49043 * C49014 * C250) *
                  C49283) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
                 C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
                 C49290 * C588) *
                    C1064 +
                (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
                   C49043 * C49014 * C250 -
               ((C1330 + C1331 + C1332) * C49279 +
                (C1333 + C1334 + C1335) * C1065 +
                (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
                 C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
                 C49322 * C270) *
                    C1064) *
                   C49043 * C49014 * C49285) *
                  C252 +
              (((C1335 + C1334 + C1333) * C1064 +
                (C1332 + C1331 + C1330) * C1065 +
                (C1067 * C255 + C1315 + C1315 + C49322 * C267 + C1069 * C581 +
                 C1316 + C1316 + C49310 * C591 + C1071 * C1284 + C1317 + C1317 +
                 C49290 * C1292) *
                    C49279) *
                   C49043 * C49014 * C49285 -
               ((C1131 + C1132 + C1133) * C49279 +
                (C1130 + C1129 + C1128) * C1065 +
                (C1127 + C1126 + C1125) * C1064) *
                   C49043 * C49014 * C250) *
                  C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 +
             C164 * C1065 + C165 * C49279) *
                C49323 +
            ((C113 * C386 + C413 + C413 + C49025 * C398) * C1064 +
             C426 * C1065 + C425 * C49279) *
                C49312 +
            ((C113 * C931 + C947 + C947 + C49025 * C941) * C1064 +
             C2528 * C1065 + C2529 * C49279) *
                C49293) *
               C49014 * C250 -
           ((C2700 * C49279 + C2701 * C1065 +
             (C113 * C2375 + C2686 + C2686 + C49025 * C2387) * C1064) *
                C49293 +
            (C2702 * C49279 + C2703 * C1065 +
             (C113 * C680 + C696 + C696 + C49025 * C690) * C1064) *
                C49312 +
            (C297 * C49279 + C298 * C1065 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C1064) *
                C49323) *
               C49014 * C49285) *
              C252 +
          (((C298 * C1064 + C297 * C1065 + C296 * C49279) * C49323 +
            (C2703 * C1064 + C2702 * C1065 +
             (C113 * C683 + C699 + C699 + C49025 * C693) * C49279) *
                C49312 +
            (C2701 * C1064 + C2700 * C1065 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49279) *
                C49293) *
               C49014 * C49285 -
           ((C2530 * C49279 + C2529 * C1065 + C2528 * C1064) * C49293 +
            (C424 * C49279 + C425 * C1065 + C426 * C1064) * C49312 +
            (C166 * C49279 + C165 * C1065 + C164 * C1064) * C49323) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C49014 * C250 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C49014 * C49285) *
              C252 +
          (((C8163 + C8162 + C8161) * C49319 +
            (C8160 + C8159 + C8158) * C49306 +
            (C7907 * C255 + C8143 + C8143 + C7901 * C267 + C7909 * C581 +
             C8144 + C8144 + C7902 * C591 + C7911 * C1284 + C8145 + C8145 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C49014 * C250 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C49014 * C49285) *
              C252 +
          ((C9250 * C257 + C9369 + C9369 + C9244 * C269 + C9252 * C579 + C9370 +
            C9370 + C9245 * C589 + C9254 * C1282 + C9371 + C9371 +
            C9246 * C1290 + C9256 * C1792 + C9372 + C9372 + C9247 * C1798 +
            C9258 * C9358 + C9373 + C9373 + C9248 * C9362) *
               C48928 * C49043 * C49014 * C49285 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C48928 * C49323 +
            (C7907 * C386 + C8330 + C8330 + C7901 * C398 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7911 * C1483 + C8328 + C8328 +
             C49290 * C1491) *
                C48928 * C49312 +
            (C7907 * C931 + C9174 + C9174 + C7901 * C941 + C7909 * C2375 +
             C9175 + C9175 + C7902 * C2387 + C7911 * C2376 + C9176 + C9176 +
             C49290 * C2388) *
                C48928 * C49293) *
               C49014 * C250 -
           ((C7911 * C9939 + C10210 + C10210 + C49290 * C9943 + C7909 * C2376 +
             C10211 + C10211 + C7902 * C2388 + C7907 * C2375 + C10212 + C10212 +
             C7901 * C2387) *
                C48928 * C49293 +
            (C7911 * C1955 + C8765 + C8765 + C49290 * C1961 + C7909 * C1483 +
             C8764 + C8764 + C7902 * C1491 + C7907 * C680 + C8763 + C8763 +
             C7901 * C690) *
                C48928 * C49312 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C48928 * C49323) *
               C49014 * C49285) *
              C252 +
          (((C8163 + C8162 + C8161) * C48928 * C49323 +
            (C7907 * C681 + C8766 + C8766 + C7901 * C691 + C7909 * C1482 +
             C8767 + C8767 + C7902 * C1490 + C7911 * C1956 + C8768 + C8768 +
             C49290 * C1962) *
                C48928 * C49312 +
            (C7907 * C2377 + C10213 + C10213 + C7901 * C2389 + C7909 * C2378 +
             C10214 + C10214 + C7902 * C2390 + C7911 * C10206 + C10215 +
             C10215 + C49290 * C10208) *
                C48928 * C49293) *
               C49014 * C49285 -
           ((C7911 * C2378 + C9179 + C9179 + C49290 * C2390 + C7909 * C2377 +
             C9178 + C9178 + C7902 * C2389 + C7907 * C932 + C9177 + C9177 +
             C7901 * C942) *
                C48928 * C49293 +
            (C8349 + C8350 + C8351) * C48928 * C49312 +
            (C7967 + C7966 + C7965) * C48928 * C49323) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
             C164 * C49306 + C165 * C49279) *
                C15403 +
            (C2892 * C49319 + C426 * C49306 + C425 * C49279) * C15404 +
            (C2893 * C49319 + C2528 * C49306 + C2529 * C49279) * C49293) *
               C49014 * C250 -
           ((C2700 * C49279 + C2701 * C49306 + C3331 * C49319) * C49293 +
            (C2702 * C49279 + C2703 * C49306 + C3330 * C49319) * C15404 +
            (C297 * C49279 + C298 * C49306 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49319) *
                C15403) *
               C49014 * C49285) *
              C252 +
          (((C298 * C49319 + C297 * C49306 + C296 * C49279) * C15403 +
            (C2703 * C49319 + C2702 * C49306 + C5234 * C49279) * C15404 +
            (C2701 * C49319 + C2700 * C49306 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49279) *
                C49293) *
               C49014 * C49285 -
           ((C2530 * C49279 + C2529 * C49306 + C2528 * C49319) * C49293 +
            (C424 * C49279 + C425 * C49306 + C426 * C49319) * C15404 +
            (C166 * C49279 + C165 * C49306 + C164 * C49319) * C15403) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C48928 * C15403 +
            (C1067 * C386 + C1514 + C1514 + C49322 * C398 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1071 * C1483 + C1512 + C1512 +
             C49290 * C1491) *
                C48928 * C15404 +
            (C1067 * C931 + C2394 + C2394 + C49322 * C941 + C1069 * C2375 +
             C2395 + C2395 + C49310 * C2387 + C1071 * C2376 + C2396 + C2396 +
             C49290 * C2388) *
                C48928 * C49293) *
               C49014 * C250 -
           ((C1071 * C9939 + C16782 + C16782 + C49290 * C9943 + C1069 * C2376 +
             C16783 + C16783 + C49310 * C2388 + C1067 * C2375 + C16784 +
             C16784 + C49322 * C2387) *
                C48928 * C49293 +
            (C1071 * C1955 + C1967 + C1967 + C49290 * C1961 + C1069 * C1483 +
             C1966 + C1966 + C49310 * C1491 + C1067 * C680 + C1965 + C1965 +
             C49322 * C690) *
                C48928 * C15404 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C48928 * C15403) *
               C49014 * C49285) *
              C252 +
          (((C1335 + C1334 + C1333) * C48928 * C15403 +
            (C1067 * C681 + C1968 + C1968 + C49322 * C691 + C1069 * C1482 +
             C1969 + C1969 + C49310 * C1490 + C1071 * C1956 + C1970 + C1970 +
             C49290 * C1962) *
                C48928 * C15404 +
            (C1067 * C2377 + C16785 + C16785 + C49322 * C2389 + C1069 * C2378 +
             C16786 + C16786 + C49310 * C2390 + C1071 * C10206 + C16787 +
             C16787 + C49290 * C10208) *
                C48928 * C49293) *
               C49014 * C49285 -
           ((C1071 * C2378 + C2399 + C2399 + C49290 * C2390 + C1069 * C2377 +
             C2398 + C2398 + C49310 * C2389 + C1067 * C932 + C2397 + C2397 +
             C49322 * C942) *
                C48928 * C49293 +
            (C1533 + C1534 + C1535) * C48928 * C15404 +
            (C1127 + C1126 + C1125) * C48928 * C15403) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C48928 * C17910 +
            C2892 * C48928 * C17911 + C2893 * C48928 * C17912 +
            C3756 * C48928 * C17913 +
            (C113 * C3735 + C3750 + C3750 + C49025 * C3741) * C48928 * C17914) *
               C49014 * C250 -
           ((C113 * C11264 + C18001 + C18001 + C49025 * C11268) * C48928 *
                C17914 +
            (C113 * C3305 + C3323 + C3323 + C49025 * C3311) * C48928 * C17913 +
            C3331 * C48928 * C17912 + C3330 * C48928 * C17911 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C48928 * C17910) *
               C49014 * C49285) *
              C252 +
          ((C298 * C48928 * C17910 + C2703 * C48928 * C17911 +
            C2701 * C48928 * C17912 +
            (C113 * C3306 + C3324 + C3324 + C49025 * C3312) * C48928 * C17913 +
            (C113 * C17997 + C18002 + C18002 + C49025 * C17999) * C48928 *
                C17914) *
               C49014 * C49285 -
           ((C113 * C3736 + C3751 + C3751 + C49025 * C3742) * C48928 * C17914 +
            C2895 * C48928 * C17913 + C2528 * C48928 * C17912 +
            C426 * C48928 * C17911 + C164 * C48928 * C17910) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[110] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 +
                C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                   C49043 * C380 -
               (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
                (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
                   C49043 * C49287) *
                  C48997 * C252 +
              ((C426 * C102 + C425 * C103 + C424 * C104 + C423 * C105 +
                (C113 * C387 + C414 + C414 + C49025 * C399) * C106) *
                   C49043 * C49287 -
               (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
                C164 * C102) *
                   C49043 * C380) *
                  C48997 * C49283) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
                 C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
                 C49290 * C588) *
                    C1064 +
                (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
                   C49043 * C380 -
               ((C1530 + C1531 + C1532) * C49279 +
                (C1533 + C1534 + C1535) * C1065 +
                (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
                 C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
                 C49322 * C398) *
                    C1064) *
                   C49043 * C49287) *
                  C48997 * C252 +
              (((C1535 + C1534 + C1533) * C1064 +
                (C1532 + C1531 + C1530) * C1065 +
                (C1067 * C383 + C1515 + C1515 + C49322 * C395 + C1069 * C683 +
                 C1516 + C1516 + C49310 * C693 + C1071 * C1484 + C1517 + C1517 +
                 C49290 * C1492) *
                    C49279) *
                   C49043 * C49287 -
               ((C1131 + C1132 + C1133) * C49279 +
                (C1130 + C1129 + C1128) * C1065 +
                (C1127 + C1126 + C1125) * C1064) *
                   C49043 * C380) *
                  C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 +
             C164 * C1065 + C165 * C49279) *
                C49323 +
            (C2896 + C2864 + C2865) * C49312 +
            (C2897 + C2868 + C2869) * C49293) *
               C380 -
           ((C2894 * C49279 + C2895 * C1065 +
             (C113 * C2851 + C2876 + C2876 + C49025 * C2859) * C1064) *
                C49293 +
            (C2869 + C2868 + C2897) * C49312 +
            (C2865 + C2864 + C2896) * C49323) *
               C49287) *
              C48997 * C252 +
          (((C2877 + C2878 + C2879) * C49323 +
            (C2880 + C2881 + C2882) * C49312 +
            (C2895 * C1064 + C2894 * C1065 +
             (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C49279) *
                C49293) *
               C49287 -
           ((C2882 + C2881 + C2880) * C49293 +
            (C2879 + C2878 + C2877) * C49312 +
            (C166 * C49279 + C165 * C1065 + C164 * C1064) * C49323) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C380 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C48997 * C252 +
          (((C8351 + C8350 + C8349) * C49319 +
            (C8348 + C8347 + C8346) * C49306 +
            (C7907 * C383 + C8331 + C8331 + C7901 * C395 + C7909 * C683 +
             C8332 + C8332 + C7902 * C693 + C7911 * C1484 + C8333 + C8333 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C380 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C48997 * C252 +
          ((C9250 * C385 + C9467 + C9467 + C9244 * C397 + C9252 * C681 + C9468 +
            C9468 + C9245 * C691 + C9254 * C1482 + C9469 + C9469 +
            C9246 * C1490 + C9256 * C1956 + C9470 + C9470 + C9247 * C1962 +
            C9258 * C9456 + C9471 + C9471 + C9248 * C9460) *
               C48928 * C49043 * C49287 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C48928 * C49323 +
            (C10410 + C10411 + C10412) * C48928 * C49312 +
            (C10413 + C10414 + C10415) * C48928 * C49293) *
               C380 -
           ((C7911 * C10361 + C10380 + C10380 + C49290 * C10365 +
             C7909 * C3305 + C10381 + C10381 + C7902 * C3311 + C7907 * C2851 +
             C10382 + C10382 + C7901 * C2859) *
                C48928 * C49293 +
            (C10415 + C10414 + C10413) * C48928 * C49312 +
            (C10412 + C10411 + C10410) * C48928 * C49323) *
               C49287) *
              C48997 * C252 +
          (((C8351 + C8350 + C8349) * C48928 * C49323 +
            (C10416 + C10417 + C10418) * C48928 * C49312 +
            (C7907 * C2850 + C10389 + C10389 + C7901 * C2858 + C7909 * C3306 +
             C10390 + C10390 + C7902 * C3312 + C7911 * C10362 + C10391 +
             C10391 + C49290 * C10366) *
                C48928 * C49293) *
               C49287 -
           ((C10418 + C10417 + C10416) * C48928 * C49293 +
            (C8349 + C8350 + C8351) * C48928 * C49312 +
            (C7967 + C7966 + C7965) * C48928 * C49323) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
             C164 * C49306 + C165 * C49279) *
                C15403 +
            (C15699 + C15700 + C15701) * C15404 +
            (C15702 + C15703 + C15704) * C49293) *
               C380 -
           ((C2894 * C49279 + C2895 * C49306 + C3756 * C49319) * C49293 +
            (C15704 + C15703 + C15702) * C15404 +
            (C15701 + C15700 + C15699) * C15403) *
               C49287) *
              C48997 * C252 +
          (((C15705 + C15706 + C15707) * C15403 +
            (C15708 + C15709 + C15710) * C15404 +
            (C2895 * C49319 + C2894 * C49306 +
             (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C49279) *
                C49293) *
               C49287 -
           ((C15710 + C15709 + C15708) * C49293 +
            (C15707 + C15706 + C15705) * C15404 +
            (C166 * C49279 + C165 * C49306 + C164 * C49319) * C15403) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C48928 * C15403 +
            (C16976 + C16977 + C16978) * C48928 * C15404 +
            (C16979 + C16980 + C16981) * C48928 * C49293) *
               C380 -
           ((C1071 * C10361 + C16946 + C16946 + C49290 * C10365 +
             C1069 * C3305 + C16947 + C16947 + C49310 * C3311 + C1067 * C2851 +
             C16948 + C16948 + C49322 * C2859) *
                C48928 * C49293 +
            (C16981 + C16980 + C16979) * C48928 * C15404 +
            (C16978 + C16977 + C16976) * C48928 * C15403) *
               C49287) *
              C48997 * C252 +
          (((C1535 + C1534 + C1533) * C48928 * C15403 +
            (C16982 + C16983 + C16984) * C48928 * C15404 +
            (C1067 * C2850 + C16955 + C16955 + C49322 * C2858 + C1069 * C3306 +
             C16956 + C16956 + C49310 * C3312 + C1071 * C10362 + C16957 +
             C16957 + C49290 * C10366) *
                C48928 * C49293) *
               C49287 -
           ((C16984 + C16983 + C16982) * C48928 * C49293 +
            (C1533 + C1534 + C1535) * C48928 * C15404 +
            (C1127 + C1126 + C1125) * C48928 * C15403) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C48928 * C17910 +
            C18091 * C17911 + C18092 * C17912 + C18093 * C17913 +
            C18109 * C17914) *
               C380 -
           ((C113 * C18084 + C18096 + C18096 + C49025 * C18088) * C48928 *
                C17914 +
            C18109 * C17913 + C18093 * C17912 + C18092 * C17911 +
            C18091 * C17910) *
               C49287) *
              C48997 * C252 +
          ((C18097 * C17910 + C18098 * C17911 + C18099 * C17912 +
            C18110 * C17913 +
            (C113 * C18085 + C18102 + C18102 + C49025 * C18089) * C48928 *
                C17914) *
               C49287 -
           (C18110 * C17914 + C18099 * C17913 + C18098 * C17912 +
            C18097 * C17911 + C164 * C48928 * C17910) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[111] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 +
                C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                   C49043 * C49014 * C508 -
               (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
                (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
                   C49043 * C49014 * C49285) *
                  C510 +
              ((C298 * C102 + C297 * C103 + C296 * C104 + C295 * C105 +
                (C113 * C259 + C286 + C286 + C49025 * C271) * C106) *
                   C49043 * C49014 * C49285 -
               (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
                C164 * C102) *
                   C49043 * C49014 * C508) *
                  C49283) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
                 C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
                 C49290 * C588) *
                    C1064 +
                (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
                   C49043 * C49014 * C508 -
               ((C1330 + C1331 + C1332) * C49279 +
                (C1333 + C1334 + C1335) * C1065 +
                (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
                 C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
                 C49322 * C270) *
                    C1064) *
                   C49043 * C49014 * C49285) *
                  C510 +
              (((C1335 + C1334 + C1333) * C1064 +
                (C1332 + C1331 + C1330) * C1065 +
                (C1067 * C255 + C1315 + C1315 + C49322 * C267 + C1069 * C581 +
                 C1316 + C1316 + C49310 * C591 + C1071 * C1284 + C1317 + C1317 +
                 C49290 * C1292) *
                    C49279) *
                   C49043 * C49014 * C49285 -
               ((C1131 + C1132 + C1133) * C49279 +
                (C1130 + C1129 + C1128) * C1065 +
                (C1127 + C1126 + C1125) * C1064) *
                   C49043 * C49014 * C508) *
                  C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 +
             C164 * C1065 + C165 * C49279) *
                C49323 +
            (C2896 + C2864 + C2865) * C49312 +
            (C2897 + C2868 + C2869) * C49293) *
               C49014 * C508 -
           ((C2700 * C49279 + C2701 * C1065 +
             (C113 * C2375 + C2686 + C2686 + C49025 * C2387) * C1064) *
                C49293 +
            (C2702 * C49279 + C2703 * C1065 +
             (C113 * C680 + C696 + C696 + C49025 * C690) * C1064) *
                C49312 +
            (C297 * C49279 + C298 * C1065 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C1064) *
                C49323) *
               C49014 * C49285) *
              C510 +
          (((C298 * C1064 + C297 * C1065 + C296 * C49279) * C49323 +
            (C2703 * C1064 + C2702 * C1065 +
             (C113 * C683 + C699 + C699 + C49025 * C693) * C49279) *
                C49312 +
            (C2701 * C1064 + C2700 * C1065 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49279) *
                C49293) *
               C49014 * C49285 -
           ((C2882 + C2881 + C2880) * C49293 +
            (C2879 + C2878 + C2877) * C49312 +
            (C166 * C49279 + C165 * C1065 + C164 * C1064) * C49323) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C49014 * C508 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C49014 * C49285) *
              C510 +
          (((C8163 + C8162 + C8161) * C49319 +
            (C8160 + C8159 + C8158) * C49306 +
            (C7907 * C255 + C8143 + C8143 + C7901 * C267 + C7909 * C581 +
             C8144 + C8144 + C7902 * C591 + C7911 * C1284 + C8145 + C8145 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C49014 * C508 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C49014 * C49285) *
              C510 +
          ((C9250 * C257 + C9369 + C9369 + C9244 * C269 + C9252 * C579 + C9370 +
            C9370 + C9245 * C589 + C9254 * C1282 + C9371 + C9371 +
            C9246 * C1290 + C9256 * C1792 + C9372 + C9372 + C9247 * C1798 +
            C9258 * C9358 + C9373 + C9373 + C9248 * C9362) *
               C48928 * C49043 * C49014 * C49285 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C48928 * C49323 +
            (C10410 + C10411 + C10412) * C48928 * C49312 +
            (C10413 + C10414 + C10415) * C48928 * C49293) *
               C49014 * C508 -
           ((C7911 * C9939 + C10210 + C10210 + C49290 * C9943 + C7909 * C2376 +
             C10211 + C10211 + C7902 * C2388 + C7907 * C2375 + C10212 + C10212 +
             C7901 * C2387) *
                C48928 * C49293 +
            (C7911 * C1955 + C8765 + C8765 + C49290 * C1961 + C7909 * C1483 +
             C8764 + C8764 + C7902 * C1491 + C7907 * C680 + C8763 + C8763 +
             C7901 * C690) *
                C48928 * C49312 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C48928 * C49323) *
               C49014 * C49285) *
              C510 +
          (((C8163 + C8162 + C8161) * C48928 * C49323 +
            (C7907 * C681 + C8766 + C8766 + C7901 * C691 + C7909 * C1482 +
             C8767 + C8767 + C7902 * C1490 + C7911 * C1956 + C8768 + C8768 +
             C49290 * C1962) *
                C48928 * C49312 +
            (C7907 * C2377 + C10213 + C10213 + C7901 * C2389 + C7909 * C2378 +
             C10214 + C10214 + C7902 * C2390 + C7911 * C10206 + C10215 +
             C10215 + C49290 * C10208) *
                C48928 * C49293) *
               C49014 * C49285 -
           ((C10418 + C10417 + C10416) * C48928 * C49293 +
            (C8349 + C8350 + C8351) * C48928 * C49312 +
            (C7967 + C7966 + C7965) * C48928 * C49323) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
             C164 * C49306 + C165 * C49279) *
                C15403 +
            (C15699 + C15700 + C15701) * C15404 +
            (C15702 + C15703 + C15704) * C49293) *
               C49014 * C508 -
           ((C2700 * C49279 + C2701 * C49306 + C3331 * C49319) * C49293 +
            (C2702 * C49279 + C2703 * C49306 + C3330 * C49319) * C15404 +
            (C297 * C49279 + C298 * C49306 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49319) *
                C15403) *
               C49014 * C49285) *
              C510 +
          (((C298 * C49319 + C297 * C49306 + C296 * C49279) * C15403 +
            (C2703 * C49319 + C2702 * C49306 + C5234 * C49279) * C15404 +
            (C2701 * C49319 + C2700 * C49306 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49279) *
                C49293) *
               C49014 * C49285 -
           ((C15710 + C15709 + C15708) * C49293 +
            (C15707 + C15706 + C15705) * C15404 +
            (C166 * C49279 + C165 * C49306 + C164 * C49319) * C15403) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C48928 * C15403 +
            (C16976 + C16977 + C16978) * C48928 * C15404 +
            (C16979 + C16980 + C16981) * C48928 * C49293) *
               C49014 * C508 -
           ((C1071 * C9939 + C16782 + C16782 + C49290 * C9943 + C1069 * C2376 +
             C16783 + C16783 + C49310 * C2388 + C1067 * C2375 + C16784 +
             C16784 + C49322 * C2387) *
                C48928 * C49293 +
            (C1071 * C1955 + C1967 + C1967 + C49290 * C1961 + C1069 * C1483 +
             C1966 + C1966 + C49310 * C1491 + C1067 * C680 + C1965 + C1965 +
             C49322 * C690) *
                C48928 * C15404 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C48928 * C15403) *
               C49014 * C49285) *
              C510 +
          (((C1335 + C1334 + C1333) * C48928 * C15403 +
            (C1067 * C681 + C1968 + C1968 + C49322 * C691 + C1069 * C1482 +
             C1969 + C1969 + C49310 * C1490 + C1071 * C1956 + C1970 + C1970 +
             C49290 * C1962) *
                C48928 * C15404 +
            (C1067 * C2377 + C16785 + C16785 + C49322 * C2389 + C1069 * C2378 +
             C16786 + C16786 + C49310 * C2390 + C1071 * C10206 + C16787 +
             C16787 + C49290 * C10208) *
                C48928 * C49293) *
               C49014 * C49285 -
           ((C16984 + C16983 + C16982) * C48928 * C49293 +
            (C1533 + C1534 + C1535) * C48928 * C15404 +
            (C1127 + C1126 + C1125) * C48928 * C15403) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C48928 * C17910 +
            C18091 * C17911 + C18092 * C17912 + C18093 * C17913 +
            C18109 * C17914) *
               C49014 * C508 -
           ((C113 * C11264 + C18001 + C18001 + C49025 * C11268) * C48928 *
                C17914 +
            (C113 * C3305 + C3323 + C3323 + C49025 * C3311) * C48928 * C17913 +
            C3331 * C48928 * C17912 + C3330 * C48928 * C17911 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C48928 * C17910) *
               C49014 * C49285) *
              C510 +
          ((C298 * C48928 * C17910 + C2703 * C48928 * C17911 +
            C2701 * C48928 * C17912 +
            (C113 * C3306 + C3324 + C3324 + C49025 * C3312) * C48928 * C17913 +
            (C113 * C17997 + C18002 + C18002 + C49025 * C17999) * C48928 *
                C17914) *
               C49014 * C49285 -
           (C18110 * C17914 + C18099 * C17913 + C18098 * C17912 +
            C18097 * C17911 + C164 * C48928 * C17910) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[112] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C49025 * C129) * C102 +
               C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                  C49043 * C49014 * C574 -
              (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
               (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
                  C49043 * C49014 * C575 +
              ((C113 * C578 + C594 + C594 + C49025 * C588) * C102 +
               (C113 * C579 + C595 + C595 + C49025 * C589) * C103 +
               (C113 * C580 + C596 + C596 + C49025 * C590) * C104 +
               (C113 * C581 + C597 + C597 + C49025 * C591) * C105 +
               (C113 * C582 + C598 + C598 + C49025 * C592) * C106) *
                  C49043 * C49014 * C576) *
             C48963 +
         0.5 * std::pow(Pi, 2.5) *
             (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
                C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
                C49290 * C588) *
                   C1064 +
               (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
                  C49043 * C49014 * C574 -
              ((C1330 + C1331 + C1332) * C49279 +
               (C1333 + C1334 + C1335) * C1065 +
               (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
                C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
                C49322 * C270) *
                   C1064) *
                  C49043 * C49014 * C575 +
              ((C1067 * C578 + C1801 + C1801 + C49322 * C588 + C1069 * C1283 +
                C1802 + C1802 + C49310 * C1291 + C1071 * C1791 + C1803 + C1803 +
                C49290 * C1797) *
                   C1064 +
               (C1067 * C579 + C1804 + C1804 + C49322 * C589 + C1069 * C1282 +
                C1805 + C1805 + C49310 * C1290 + C1071 * C1792 + C1806 + C1806 +
                C49290 * C1798) *
                   C1065 +
               (C1067 * C580 + C1807 + C1807 + C49322 * C590 + C1069 * C1281 +
                C1808 + C1808 + C49310 * C1289 + C1071 * C1793 + C1809 + C1809 +
                C49290 * C1799) *
                   C49279) *
                  C49043 * C49014 * C576) *
             C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 + C164 * C1065 +
            C165 * C49279) *
               C49323 +
           (C2896 + C2864 + C2865) * C49312 +
           (C2897 + C2868 + C2869) * C49293) *
              C49014 * C574 -
          ((C2700 * C49279 + C2701 * C1065 +
            (C113 * C2375 + C2686 + C2686 + C49025 * C2387) * C1064) *
               C49293 +
           (C2702 * C49279 + C2703 * C1065 +
            (C113 * C680 + C696 + C696 + C49025 * C690) * C1064) *
               C49312 +
           (C297 * C49279 + C298 * C1065 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C1064) *
               C49323) *
              C49014 * C575 +
          (((C113 * C578 + C594 + C594 + C49025 * C588) * C1064 +
            (C113 * C579 + C595 + C595 + C49025 * C589) * C1065 +
            (C113 * C580 + C596 + C596 + C49025 * C590) * C49279) *
               C49323 +
           ((C113 * C1483 + C3154 + C3154 + C49025 * C1491) * C1064 +
            (C113 * C1482 + C3155 + C3155 + C49025 * C1490) * C1065 +
            (C113 * C1481 + C3156 + C3156 + C49025 * C1489) * C49279) *
               C49312 +
           ((C113 * C2376 + C3157 + C3157 + C49025 * C2388) * C1064 +
            (C113 * C2378 + C3158 + C3158 + C49025 * C2390) * C1065 +
            (C113 * C2380 + C3159 + C3159 + C49025 * C2392) * C49279) *
               C49293) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C49319 +
           (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
              C49043 * C49014 * C574 -
          ((C8158 + C8159 + C8160) * C49279 + (C8161 + C8162 + C8163) * C49306 +
           (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
            C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
            C7901 * C270) *
               C49319) *
              C49043 * C49014 * C575 +
          ((C7907 * C578 + C8608 + C8608 + C7901 * C588 + C7909 * C1283 +
            C8609 + C8609 + C7902 * C1291 + C7911 * C1791 + C8610 + C8610 +
            C49290 * C1797) *
               C49319 +
           (C7907 * C579 + C8611 + C8611 + C7901 * C589 + C7909 * C1282 +
            C8612 + C8612 + C7902 * C1290 + C7911 * C1792 + C8613 + C8613 +
            C49290 * C1798) *
               C49306 +
           (C7907 * C580 + C8614 + C8614 + C7901 * C590 + C7909 * C1281 +
            C8615 + C8615 + C7902 * C1289 + C7911 * C1793 + C8616 + C8616 +
            C49290 * C1799) *
               C49279) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
           C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
           C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
           C9265 + C9265 + C9248 * C1797) *
              C48928 * C49043 * C49014 * C574 -
          (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
           C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
           C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
           C9250 * C258 + C9368 + C9368 + C9244 * C270) *
              C48928 * C49043 * C49014 * C575 +
          (C9250 * C578 + C9619 + C9619 + C9244 * C588 + C9252 * C1283 + C9620 +
           C9620 + C9245 * C1291 + C9254 * C1791 + C9621 + C9621 +
           C9246 * C1797 + C9256 * C9357 + C9622 + C9622 + C9247 * C9361 +
           C9258 * C9615 + C9623 + C9623 + C9248 * C9617) *
              C48928 * C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C48928 * C49323 +
           (C10410 + C10411 + C10412) * C48928 * C49312 +
           (C10413 + C10414 + C10415) * C48928 * C49293) *
              C49014 * C574 -
          ((C7911 * C9939 + C10210 + C10210 + C49290 * C9943 + C7909 * C2376 +
            C10211 + C10211 + C7902 * C2388 + C7907 * C2375 + C10212 + C10212 +
            C7901 * C2387) *
               C48928 * C49293 +
           (C7911 * C1955 + C8765 + C8765 + C49290 * C1961 + C7909 * C1483 +
            C8764 + C8764 + C7902 * C1491 + C7907 * C680 + C8763 + C8763 +
            C7901 * C690) *
               C48928 * C49312 +
           (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
            C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
            C7901 * C270) *
               C48928 * C49323) *
              C49014 * C575 +
          ((C7907 * C578 + C8608 + C8608 + C7901 * C588 + C7909 * C1283 +
            C8609 + C8609 + C7902 * C1291 + C7911 * C1791 + C8610 + C8610 +
            C49290 * C1797) *
               C48928 * C49323 +
           (C7907 * C1483 + C10675 + C10675 + C7901 * C1491 + C7909 * C1955 +
            C10676 + C10676 + C7902 * C1961 + C7911 * C9455 + C10677 + C10677 +
            C49290 * C9459) *
               C48928 * C49312 +
           (C7907 * C2376 + C10678 + C10678 + C7901 * C2388 + C7909 * C9939 +
            C10679 + C10679 + C7902 * C9943 + C7911 * C9940 + C10680 + C10680 +
            C49290 * C9944) *
               C48928 * C49293) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
            C164 * C49306 + C165 * C49279) *
               C15403 +
           (C15699 + C15700 + C15701) * C15404 +
           (C15702 + C15703 + C15704) * C49293) *
              C49014 * C574 -
          ((C2700 * C49279 + C2701 * C49306 + C3331 * C49319) * C49293 +
           (C2702 * C49279 + C2703 * C49306 + C3330 * C49319) * C15404 +
           (C297 * C49279 + C298 * C49306 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C49319) *
               C15403) *
              C49014 * C575 +
          (((C113 * C578 + C594 + C594 + C49025 * C588) * C49319 +
            (C113 * C579 + C595 + C595 + C49025 * C589) * C49306 +
            (C113 * C580 + C596 + C596 + C49025 * C590) * C49279) *
               C15403 +
           ((C113 * C1483 + C3154 + C3154 + C49025 * C1491) * C49319 +
            (C113 * C1482 + C3155 + C3155 + C49025 * C1490) * C49306 +
            (C113 * C1481 + C3156 + C3156 + C49025 * C1489) * C49279) *
               C15404 +
           ((C113 * C2376 + C3157 + C3157 + C49025 * C2388) * C49319 +
            (C113 * C2378 + C3158 + C3158 + C49025 * C2390) * C49306 +
            (C113 * C2380 + C3159 + C3159 + C49025 * C2392) * C49279) *
               C49293) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C48928 * C15403 +
           (C16976 + C16977 + C16978) * C48928 * C15404 +
           (C16979 + C16980 + C16981) * C48928 * C49293) *
              C49014 * C574 -
          ((C1071 * C9939 + C16782 + C16782 + C49290 * C9943 + C1069 * C2376 +
            C16783 + C16783 + C49310 * C2388 + C1067 * C2375 + C16784 + C16784 +
            C49322 * C2387) *
               C48928 * C49293 +
           (C1071 * C1955 + C1967 + C1967 + C49290 * C1961 + C1069 * C1483 +
            C1966 + C1966 + C49310 * C1491 + C1067 * C680 + C1965 + C1965 +
            C49322 * C690) *
               C48928 * C15404 +
           (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
            C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
            C49322 * C270) *
               C48928 * C15403) *
              C49014 * C575 +
          ((C1067 * C578 + C1801 + C1801 + C49322 * C588 + C1069 * C1283 +
            C1802 + C1802 + C49310 * C1291 + C1071 * C1791 + C1803 + C1803 +
            C49290 * C1797) *
               C48928 * C15403 +
           (C1067 * C1483 + C17241 + C17241 + C49322 * C1491 + C1069 * C1955 +
            C17242 + C17242 + C49310 * C1961 + C1071 * C9455 + C17243 + C17243 +
            C49290 * C9459) *
               C48928 * C15404 +
           (C1067 * C2376 + C17244 + C17244 + C49322 * C2388 + C1069 * C9939 +
            C17245 + C17245 + C49310 * C9943 + C1071 * C9940 + C17246 + C17246 +
            C49290 * C9944) *
               C48928 * C49293) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49025 * C129) * C48928 * C17910 +
           C18091 * C17911 + C18092 * C17912 + C18093 * C17913 +
           C18109 * C17914) *
              C49014 * C574 -
          ((C113 * C11264 + C18001 + C18001 + C49025 * C11268) * C48928 *
               C17914 +
           (C113 * C3305 + C3323 + C3323 + C49025 * C3311) * C48928 * C17913 +
           C3331 * C48928 * C17912 + C3330 * C48928 * C17911 +
           (C113 * C258 + C285 + C285 + C49025 * C270) * C48928 * C17910) *
              C49014 * C575 +
          ((C113 * C578 + C594 + C594 + C49025 * C588) * C48928 * C17910 +
           (C113 * C1483 + C3154 + C3154 + C49025 * C1491) * C48928 * C17911 +
           (C113 * C2376 + C3157 + C3157 + C49025 * C2388) * C48928 * C17912 +
           (C113 * C10361 + C18255 + C18255 + C49025 * C10365) * C48928 *
               C17913 +
           (C113 * C11265 + C18256 + C18256 + C49025 * C11269) * C48928 *
               C17914) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[113] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 +
                C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                   C49043 * C380 -
               (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
                (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
                   C49043 * C49287) *
                  C508 +
              (((C113 * C680 + C696 + C696 + C49025 * C690) * C102 +
                (C113 * C681 + C697 + C697 + C49025 * C691) * C103 +
                (C113 * C682 + C698 + C698 + C49025 * C692) * C104 +
                (C113 * C683 + C699 + C699 + C49025 * C693) * C105 +
                (C113 * C684 + C700 + C700 + C49025 * C694) * C106) *
                   C49043 * C49287 -
               (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
                (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
                   C49043 * C380) *
                  C49285) *
             C48963 +
         0.5 * std::pow(Pi, 2.5) *
             ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
                 C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
                 C49290 * C588) *
                    C1064 +
                (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
                   C49043 * C380 -
               ((C1530 + C1531 + C1532) * C49279 +
                (C1533 + C1534 + C1535) * C1065 +
                (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
                 C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
                 C49322 * C398) *
                    C1064) *
                   C49043 * C49287) *
                  C508 +
              (((C1067 * C680 + C1965 + C1965 + C49322 * C690 + C1069 * C1483 +
                 C1966 + C1966 + C49310 * C1491 + C1071 * C1955 + C1967 +
                 C1967 + C49290 * C1961) *
                    C1064 +
                (C1067 * C681 + C1968 + C1968 + C49322 * C691 + C1069 * C1482 +
                 C1969 + C1969 + C49310 * C1490 + C1071 * C1956 + C1970 +
                 C1970 + C49290 * C1962) *
                    C1065 +
                (C1067 * C682 + C1971 + C1971 + C49322 * C692 + C1069 * C1481 +
                 C1972 + C1972 + C49310 * C1489 + C1071 * C1957 + C1973 +
                 C1973 + C49290 * C1963) *
                    C49279) *
                   C49043 * C49287 -
               ((C1330 + C1331 + C1332) * C49279 +
                (C1333 + C1334 + C1335) * C1065 +
                (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
                 C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
                 C49322 * C270) *
                    C1064) *
                   C49043 * C380) *
                  C49285) *
             C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 +
             C164 * C1065 + C165 * C49279) *
                C49323 +
            (C2896 + C2864 + C2865) * C49312 +
            (C2897 + C2868 + C2869) * C49293) *
               C380 -
           ((C2894 * C49279 + C2895 * C1065 +
             (C113 * C2851 + C2876 + C2876 + C49025 * C2859) * C1064) *
                C49293 +
            (C2869 + C2868 + C2897) * C49312 +
            (C2865 + C2864 + C2896) * C49323) *
               C49287) *
              C508 +
          (((C3332 + C3317 + C3318) * C49323 +
            (C3333 + C3321 + C3322) * C49312 +
            ((C113 * C3305 + C3323 + C3323 + C49025 * C3311) * C1064 +
             (C113 * C3306 + C3324 + C3324 + C49025 * C3312) * C1065 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C49279) *
                C49293) *
               C49287 -
           ((C3322 + C3321 + C3333) * C49293 +
            (C3318 + C3317 + C3332) * C49312 +
            (C297 * C49279 + C298 * C1065 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C1064) *
                C49323) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C380 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C508 +
          (((C7907 * C680 + C8763 + C8763 + C7901 * C690 + C7909 * C1483 +
             C8764 + C8764 + C7902 * C1491 + C7911 * C1955 + C8765 + C8765 +
             C49290 * C1961) *
                C49319 +
            (C7907 * C681 + C8766 + C8766 + C7901 * C691 + C7909 * C1482 +
             C8767 + C8767 + C7902 * C1490 + C7911 * C1956 + C8768 + C8768 +
             C49290 * C1962) *
                C49306 +
            (C7907 * C682 + C8769 + C8769 + C7901 * C692 + C7909 * C1481 +
             C8770 + C8770 + C7902 * C1489 + C7911 * C1957 + C8771 + C8771 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C380 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C508 +
          ((C9250 * C680 + C9709 + C9709 + C9244 * C690 + C9252 * C1483 +
            C9710 + C9710 + C9245 * C1491 + C9254 * C1955 + C9711 + C9711 +
            C9246 * C1961 + C9256 * C9455 + C9712 + C9712 + C9247 * C9459 +
            C9258 * C9705 + C9713 + C9713 + C9248 * C9707) *
               C48928 * C49043 * C49287 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C48928 * C49323 +
            (C10410 + C10411 + C10412) * C48928 * C49312 +
            (C10413 + C10414 + C10415) * C48928 * C49293) *
               C380 -
           ((C7911 * C10361 + C10380 + C10380 + C49290 * C10365 +
             C7909 * C3305 + C10381 + C10381 + C7902 * C3311 + C7907 * C2851 +
             C10382 + C10382 + C7901 * C2859) *
                C48928 * C49293 +
            (C10415 + C10414 + C10413) * C48928 * C49312 +
            (C10412 + C10411 + C10410) * C48928 * C49323) *
               C49287) *
              C508 +
          (((C10857 + C10858 + C10859) * C48928 * C49323 +
            (C10860 + C10861 + C10862) * C48928 * C49312 +
            (C7907 * C3305 + C10842 + C10842 + C7901 * C3311 + C7909 * C10361 +
             C10843 + C10843 + C7902 * C10365 + C7911 * C10826 + C10844 +
             C10844 + C49290 * C10828) *
                C48928 * C49293) *
               C49287 -
           ((C10862 + C10861 + C10860) * C48928 * C49293 +
            (C10859 + C10858 + C10857) * C48928 * C49312 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C48928 * C49323) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
             C164 * C49306 + C165 * C49279) *
                C15403 +
            (C15699 + C15700 + C15701) * C15404 +
            (C15702 + C15703 + C15704) * C49293) *
               C380 -
           ((C2894 * C49279 + C2895 * C49306 + C3756 * C49319) * C49293 +
            (C15704 + C15703 + C15702) * C15404 +
            (C15701 + C15700 + C15699) * C15403) *
               C49287) *
              C508 +
          (((C16113 + C16114 + C16115) * C15403 +
            (C16116 + C16117 + C16118) * C15404 +
            ((C113 * C3305 + C3323 + C3323 + C49025 * C3311) * C49319 +
             (C113 * C3306 + C3324 + C3324 + C49025 * C3312) * C49306 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C49279) *
                C49293) *
               C49287 -
           ((C16118 + C16117 + C16116) * C49293 +
            (C16115 + C16114 + C16113) * C15404 +
            (C297 * C49279 + C298 * C49306 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49319) *
                C15403) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C48928 * C15403 +
            (C16976 + C16977 + C16978) * C48928 * C15404 +
            (C16979 + C16980 + C16981) * C48928 * C49293) *
               C380 -
           ((C1071 * C10361 + C16946 + C16946 + C49290 * C10365 +
             C1069 * C3305 + C16947 + C16947 + C49310 * C3311 + C1067 * C2851 +
             C16948 + C16948 + C49322 * C2859) *
                C48928 * C49293 +
            (C16981 + C16980 + C16979) * C48928 * C15404 +
            (C16978 + C16977 + C16976) * C48928 * C15403) *
               C49287) *
              C508 +
          (((C17420 + C17421 + C17422) * C48928 * C15403 +
            (C17423 + C17424 + C17425) * C48928 * C15404 +
            (C1067 * C3305 + C17405 + C17405 + C49322 * C3311 + C1069 * C10361 +
             C17406 + C17406 + C49310 * C10365 + C1071 * C10826 + C17407 +
             C17407 + C49290 * C10828) *
                C48928 * C49293) *
               C49287 -
           ((C17425 + C17424 + C17423) * C48928 * C49293 +
            (C17422 + C17421 + C17420) * C48928 * C15404 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C48928 * C15403) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C48928 * C17910 +
            C18091 * C17911 + C18092 * C17912 + C18093 * C17913 +
            C18109 * C17914) *
               C380 -
           ((C113 * C18084 + C18096 + C18096 + C49025 * C18088) * C48928 *
                C17914 +
            C18109 * C17913 + C18093 * C17912 + C18092 * C17911 +
            C18091 * C17910) *
               C49287) *
              C508 +
          ((C18342 * C17910 + C18343 * C17911 + C18355 * C17912 +
            C18356 * C17913 +
            (C113 * C18338 + C18348 + C18348 + C49025 * C18340) * C48928 *
                C17914) *
               C49287 -
           (C18356 * C17914 + C18355 * C17913 + C18343 * C17912 +
            C18342 * C17911 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C48928 * C17910) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[114] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 +
                C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                   C49043 * C782 -
               (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
                (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
                   C49043 * C49287) *
                  C48997 * C510 +
              ((C426 * C102 + C425 * C103 + C424 * C104 + C423 * C105 +
                (C113 * C387 + C414 + C414 + C49025 * C399) * C106) *
                   C49043 * C49287 -
               (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
                C164 * C102) *
                   C49043 * C782) *
                  C48997 * C49283) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
                 C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
                 C49290 * C588) *
                    C1064 +
                (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
                   C49043 * C782 -
               ((C1530 + C1531 + C1532) * C49279 +
                (C1533 + C1534 + C1535) * C1065 +
                (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
                 C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
                 C49322 * C398) *
                    C1064) *
                   C49043 * C49287) *
                  C48997 * C510 +
              (((C1535 + C1534 + C1533) * C1064 +
                (C1532 + C1531 + C1530) * C1065 +
                (C1067 * C383 + C1515 + C1515 + C49322 * C395 + C1069 * C683 +
                 C1516 + C1516 + C49310 * C693 + C1071 * C1484 + C1517 + C1517 +
                 C49290 * C1492) *
                    C49279) *
                   C49043 * C49287 -
               ((C1131 + C1132 + C1133) * C49279 +
                (C1130 + C1129 + C1128) * C1065 +
                (C1127 + C1126 + C1125) * C1064) *
                   C49043 * C782) *
                  C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 +
             C164 * C1065 + C165 * C49279) *
                C49323 +
            (C2896 + C2864 + C2865) * C49312 +
            (C2897 + C2868 + C2869) * C49293) *
               C782 -
           ((C2894 * C49279 + C2895 * C1065 +
             (C113 * C2851 + C2876 + C2876 + C49025 * C2859) * C1064) *
                C49293 +
            (C2869 + C2868 + C2897) * C49312 +
            (C2865 + C2864 + C2896) * C49323) *
               C49287) *
              C48997 * C510 +
          (((C2877 + C2878 + C2879) * C49323 +
            (C2880 + C2881 + C2882) * C49312 +
            (C2895 * C1064 + C2894 * C1065 +
             (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C49279) *
                C49293) *
               C49287 -
           ((C2882 + C2881 + C2880) * C49293 +
            (C2879 + C2878 + C2877) * C49312 +
            (C166 * C49279 + C165 * C1065 + C164 * C1064) * C49323) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C782 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C48997 * C510 +
          (((C8351 + C8350 + C8349) * C49319 +
            (C8348 + C8347 + C8346) * C49306 +
            (C7907 * C383 + C8331 + C8331 + C7901 * C395 + C7909 * C683 +
             C8332 + C8332 + C7902 * C693 + C7911 * C1484 + C8333 + C8333 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C782 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C48997 * C510 +
          ((C9250 * C385 + C9467 + C9467 + C9244 * C397 + C9252 * C681 + C9468 +
            C9468 + C9245 * C691 + C9254 * C1482 + C9469 + C9469 +
            C9246 * C1490 + C9256 * C1956 + C9470 + C9470 + C9247 * C1962 +
            C9258 * C9456 + C9471 + C9471 + C9248 * C9460) *
               C48928 * C49043 * C49287 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C48928 * C49323 +
            (C10410 + C10411 + C10412) * C48928 * C49312 +
            (C10413 + C10414 + C10415) * C48928 * C49293) *
               C782 -
           ((C7911 * C10361 + C10380 + C10380 + C49290 * C10365 +
             C7909 * C3305 + C10381 + C10381 + C7902 * C3311 + C7907 * C2851 +
             C10382 + C10382 + C7901 * C2859) *
                C48928 * C49293 +
            (C10415 + C10414 + C10413) * C48928 * C49312 +
            (C10412 + C10411 + C10410) * C48928 * C49323) *
               C49287) *
              C48997 * C510 +
          (((C8351 + C8350 + C8349) * C48928 * C49323 +
            (C10416 + C10417 + C10418) * C48928 * C49312 +
            (C7907 * C2850 + C10389 + C10389 + C7901 * C2858 + C7909 * C3306 +
             C10390 + C10390 + C7902 * C3312 + C7911 * C10362 + C10391 +
             C10391 + C49290 * C10366) *
                C48928 * C49293) *
               C49287 -
           ((C10418 + C10417 + C10416) * C48928 * C49293 +
            (C8349 + C8350 + C8351) * C48928 * C49312 +
            (C7967 + C7966 + C7965) * C48928 * C49323) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
             C164 * C49306 + C165 * C49279) *
                C15403 +
            (C15699 + C15700 + C15701) * C15404 +
            (C15702 + C15703 + C15704) * C49293) *
               C782 -
           ((C2894 * C49279 + C2895 * C49306 + C3756 * C49319) * C49293 +
            (C15704 + C15703 + C15702) * C15404 +
            (C15701 + C15700 + C15699) * C15403) *
               C49287) *
              C48997 * C510 +
          (((C15705 + C15706 + C15707) * C15403 +
            (C15708 + C15709 + C15710) * C15404 +
            (C2895 * C49319 + C2894 * C49306 +
             (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C49279) *
                C49293) *
               C49287 -
           ((C15710 + C15709 + C15708) * C49293 +
            (C15707 + C15706 + C15705) * C15404 +
            (C166 * C49279 + C165 * C49306 + C164 * C49319) * C15403) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C48928 * C15403 +
            (C16976 + C16977 + C16978) * C48928 * C15404 +
            (C16979 + C16980 + C16981) * C48928 * C49293) *
               C782 -
           ((C1071 * C10361 + C16946 + C16946 + C49290 * C10365 +
             C1069 * C3305 + C16947 + C16947 + C49310 * C3311 + C1067 * C2851 +
             C16948 + C16948 + C49322 * C2859) *
                C48928 * C49293 +
            (C16981 + C16980 + C16979) * C48928 * C15404 +
            (C16978 + C16977 + C16976) * C48928 * C15403) *
               C49287) *
              C48997 * C510 +
          (((C1535 + C1534 + C1533) * C48928 * C15403 +
            (C16982 + C16983 + C16984) * C48928 * C15404 +
            (C1067 * C2850 + C16955 + C16955 + C49322 * C2858 + C1069 * C3306 +
             C16956 + C16956 + C49310 * C3312 + C1071 * C10362 + C16957 +
             C16957 + C49290 * C10366) *
                C48928 * C49293) *
               C49287 -
           ((C16984 + C16983 + C16982) * C48928 * C49293 +
            (C1533 + C1534 + C1535) * C48928 * C15404 +
            (C1127 + C1126 + C1125) * C48928 * C15403) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C48928 * C17910 +
            C18091 * C17911 + C18092 * C17912 + C18093 * C17913 +
            C18109 * C17914) *
               C782 -
           ((C113 * C18084 + C18096 + C18096 + C49025 * C18088) * C48928 *
                C17914 +
            C18109 * C17913 + C18093 * C17912 + C18092 * C17911 +
            C18091 * C17910) *
               C49287) *
              C48997 * C510 +
          ((C18097 * C17910 + C18098 * C17911 + C18099 * C17912 +
            C18110 * C17913 +
            (C113 * C18085 + C18102 + C18102 + C49025 * C18089) * C48928 *
                C17914) *
               C49287 -
           (C18110 * C17914 + C18099 * C17913 + C18098 * C17912 +
            C18097 * C17911 + C164 * C48928 * C17910) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[115] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 +
                C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                   C49043 * C782 -
               (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
                (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
                   C49043 * C49287) *
                  C250 +
              (((C113 * C680 + C696 + C696 + C49025 * C690) * C102 +
                (C113 * C681 + C697 + C697 + C49025 * C691) * C103 +
                (C113 * C682 + C698 + C698 + C49025 * C692) * C104 +
                (C113 * C683 + C699 + C699 + C49025 * C693) * C105 +
                (C113 * C684 + C700 + C700 + C49025 * C694) * C106) *
                   C49043 * C49287 -
               (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
                (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
                   C49043 * C782) *
                  C49285) *
             C48963 +
         0.5 * std::pow(Pi, 2.5) *
             ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
                 C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
                 C49290 * C588) *
                    C1064 +
                (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
                   C49043 * C782 -
               ((C1530 + C1531 + C1532) * C49279 +
                (C1533 + C1534 + C1535) * C1065 +
                (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
                 C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
                 C49322 * C398) *
                    C1064) *
                   C49043 * C49287) *
                  C250 +
              (((C1067 * C680 + C1965 + C1965 + C49322 * C690 + C1069 * C1483 +
                 C1966 + C1966 + C49310 * C1491 + C1071 * C1955 + C1967 +
                 C1967 + C49290 * C1961) *
                    C1064 +
                (C1067 * C681 + C1968 + C1968 + C49322 * C691 + C1069 * C1482 +
                 C1969 + C1969 + C49310 * C1490 + C1071 * C1956 + C1970 +
                 C1970 + C49290 * C1962) *
                    C1065 +
                (C1067 * C682 + C1971 + C1971 + C49322 * C692 + C1069 * C1481 +
                 C1972 + C1972 + C49310 * C1489 + C1071 * C1957 + C1973 +
                 C1973 + C49290 * C1963) *
                    C49279) *
                   C49043 * C49287 -
               ((C1330 + C1331 + C1332) * C49279 +
                (C1333 + C1334 + C1335) * C1065 +
                (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
                 C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
                 C49322 * C270) *
                    C1064) *
                   C49043 * C782) *
                  C49285) *
             C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 +
             C164 * C1065 + C165 * C49279) *
                C49323 +
            (C2896 + C2864 + C2865) * C49312 +
            (C2897 + C2868 + C2869) * C49293) *
               C782 -
           ((C2894 * C49279 + C2895 * C1065 +
             (C113 * C2851 + C2876 + C2876 + C49025 * C2859) * C1064) *
                C49293 +
            (C2869 + C2868 + C2897) * C49312 +
            (C2865 + C2864 + C2896) * C49323) *
               C49287) *
              C250 +
          (((C3332 + C3317 + C3318) * C49323 +
            (C3333 + C3321 + C3322) * C49312 +
            ((C113 * C3305 + C3323 + C3323 + C49025 * C3311) * C1064 +
             (C113 * C3306 + C3324 + C3324 + C49025 * C3312) * C1065 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C49279) *
                C49293) *
               C49287 -
           ((C3322 + C3321 + C3333) * C49293 +
            (C3318 + C3317 + C3332) * C49312 +
            (C297 * C49279 + C298 * C1065 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C1064) *
                C49323) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C782 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C250 +
          (((C7907 * C680 + C8763 + C8763 + C7901 * C690 + C7909 * C1483 +
             C8764 + C8764 + C7902 * C1491 + C7911 * C1955 + C8765 + C8765 +
             C49290 * C1961) *
                C49319 +
            (C7907 * C681 + C8766 + C8766 + C7901 * C691 + C7909 * C1482 +
             C8767 + C8767 + C7902 * C1490 + C7911 * C1956 + C8768 + C8768 +
             C49290 * C1962) *
                C49306 +
            (C7907 * C682 + C8769 + C8769 + C7901 * C692 + C7909 * C1481 +
             C8770 + C8770 + C7902 * C1489 + C7911 * C1957 + C8771 + C8771 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C782 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C250 +
          ((C9250 * C680 + C9709 + C9709 + C9244 * C690 + C9252 * C1483 +
            C9710 + C9710 + C9245 * C1491 + C9254 * C1955 + C9711 + C9711 +
            C9246 * C1961 + C9256 * C9455 + C9712 + C9712 + C9247 * C9459 +
            C9258 * C9705 + C9713 + C9713 + C9248 * C9707) *
               C48928 * C49043 * C49287 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C48928 * C49323 +
            (C10410 + C10411 + C10412) * C48928 * C49312 +
            (C10413 + C10414 + C10415) * C48928 * C49293) *
               C782 -
           ((C7911 * C10361 + C10380 + C10380 + C49290 * C10365 +
             C7909 * C3305 + C10381 + C10381 + C7902 * C3311 + C7907 * C2851 +
             C10382 + C10382 + C7901 * C2859) *
                C48928 * C49293 +
            (C10415 + C10414 + C10413) * C48928 * C49312 +
            (C10412 + C10411 + C10410) * C48928 * C49323) *
               C49287) *
              C250 +
          (((C10857 + C10858 + C10859) * C48928 * C49323 +
            (C10860 + C10861 + C10862) * C48928 * C49312 +
            (C7907 * C3305 + C10842 + C10842 + C7901 * C3311 + C7909 * C10361 +
             C10843 + C10843 + C7902 * C10365 + C7911 * C10826 + C10844 +
             C10844 + C49290 * C10828) *
                C48928 * C49293) *
               C49287 -
           ((C10862 + C10861 + C10860) * C48928 * C49293 +
            (C10859 + C10858 + C10857) * C48928 * C49312 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C48928 * C49323) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
             C164 * C49306 + C165 * C49279) *
                C15403 +
            (C15699 + C15700 + C15701) * C15404 +
            (C15702 + C15703 + C15704) * C49293) *
               C782 -
           ((C2894 * C49279 + C2895 * C49306 + C3756 * C49319) * C49293 +
            (C15704 + C15703 + C15702) * C15404 +
            (C15701 + C15700 + C15699) * C15403) *
               C49287) *
              C250 +
          (((C16113 + C16114 + C16115) * C15403 +
            (C16116 + C16117 + C16118) * C15404 +
            ((C113 * C3305 + C3323 + C3323 + C49025 * C3311) * C49319 +
             (C113 * C3306 + C3324 + C3324 + C49025 * C3312) * C49306 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C49279) *
                C49293) *
               C49287 -
           ((C16118 + C16117 + C16116) * C49293 +
            (C16115 + C16114 + C16113) * C15404 +
            (C297 * C49279 + C298 * C49306 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49319) *
                C15403) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C48928 * C15403 +
            (C16976 + C16977 + C16978) * C48928 * C15404 +
            (C16979 + C16980 + C16981) * C48928 * C49293) *
               C782 -
           ((C1071 * C10361 + C16946 + C16946 + C49290 * C10365 +
             C1069 * C3305 + C16947 + C16947 + C49310 * C3311 + C1067 * C2851 +
             C16948 + C16948 + C49322 * C2859) *
                C48928 * C49293 +
            (C16981 + C16980 + C16979) * C48928 * C15404 +
            (C16978 + C16977 + C16976) * C48928 * C15403) *
               C49287) *
              C250 +
          (((C17420 + C17421 + C17422) * C48928 * C15403 +
            (C17423 + C17424 + C17425) * C48928 * C15404 +
            (C1067 * C3305 + C17405 + C17405 + C49322 * C3311 + C1069 * C10361 +
             C17406 + C17406 + C49310 * C10365 + C1071 * C10826 + C17407 +
             C17407 + C49290 * C10828) *
                C48928 * C49293) *
               C49287 -
           ((C17425 + C17424 + C17423) * C48928 * C49293 +
            (C17422 + C17421 + C17420) * C48928 * C15404 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C48928 * C15403) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C48928 * C17910 +
            C18091 * C17911 + C18092 * C17912 + C18093 * C17913 +
            C18109 * C17914) *
               C782 -
           ((C113 * C18084 + C18096 + C18096 + C49025 * C18088) * C48928 *
                C17914 +
            C18109 * C17913 + C18093 * C17912 + C18092 * C17911 +
            C18091 * C17910) *
               C49287) *
              C250 +
          ((C18342 * C17910 + C18343 * C17911 + C18355 * C17912 +
            C18356 * C17913 +
            (C113 * C18338 + C18348 + C18348 + C49025 * C18340) * C48928 *
                C17914) *
               C49287 -
           (C18356 * C17914 + C18355 * C17913 + C18343 * C17912 +
            C18342 * C17911 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C48928 * C17910) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[116] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C49025 * C129) * C102 +
               C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                  C49043 * C928 -
              (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
               (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
                  C49043 * C929 +
              ((C113 * C931 + C947 + C947 + C49025 * C941) * C102 +
               (C113 * C932 + C948 + C948 + C49025 * C942) * C103 +
               (C113 * C933 + C949 + C949 + C49025 * C943) * C104 +
               (C113 * C934 + C950 + C950 + C49025 * C944) * C105 +
               (C113 * C935 + C951 + C951 + C49025 * C945) * C106) *
                  C49043 * C930) *
             C48997 * C48963 +
         0.5 * std::pow(Pi, 2.5) *
             (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
                C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
                C49290 * C588) *
                   C1064 +
               (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
                  C49043 * C928 -
              ((C1530 + C1531 + C1532) * C49279 +
               (C1533 + C1534 + C1535) * C1065 +
               (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
                C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
                C49322 * C398) *
                   C1064) *
                  C49043 * C929 +
              ((C1067 * C931 + C2394 + C2394 + C49322 * C941 + C1069 * C2375 +
                C2395 + C2395 + C49310 * C2387 + C1071 * C2376 + C2396 + C2396 +
                C49290 * C2388) *
                   C1064 +
               (C1067 * C932 + C2397 + C2397 + C49322 * C942 + C1069 * C2377 +
                C2398 + C2398 + C49310 * C2389 + C1071 * C2378 + C2399 + C2399 +
                C49290 * C2390) *
                   C1065 +
               (C1067 * C933 + C2400 + C2400 + C49322 * C943 + C1069 * C2379 +
                C2401 + C2401 + C49310 * C2391 + C1071 * C2380 + C2402 + C2402 +
                C49290 * C2392) *
                   C49279) *
                  C49043 * C930) *
             C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 + C164 * C1065 +
            C165 * C49279) *
               C49323 +
           (C2896 + C2864 + C2865) * C49312 + C3753 * C49293) *
              C928 -
          ((C3746 + C3747 + C3757) * C49293 + (C2869 + C2868 + C2897) * C49312 +
           (C2865 + C2864 + C2896) * C49323) *
              C929 +
          (C3753 * C49323 + (C3757 + C3747 + C3746) * C49312 +
           ((C113 * C3735 + C3750 + C3750 + C49025 * C3741) * C1064 +
            (C113 * C3736 + C3751 + C3751 + C49025 * C3742) * C1065 +
            (C113 * C3737 + C3752 + C3752 + C49025 * C3743) * C49279) *
               C49293) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C49319 +
           (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
              C49043 * C928 -
          ((C8346 + C8347 + C8348) * C49279 + (C8349 + C8350 + C8351) * C49306 +
           (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
            C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
            C7901 * C398) *
               C49319) *
              C49043 * C929 +
          ((C7907 * C931 + C9174 + C9174 + C7901 * C941 + C7909 * C2375 +
            C9175 + C9175 + C7902 * C2387 + C7911 * C2376 + C9176 + C9176 +
            C49290 * C2388) *
               C49319 +
           (C7907 * C932 + C9177 + C9177 + C7901 * C942 + C7909 * C2377 +
            C9178 + C9178 + C7902 * C2389 + C7911 * C2378 + C9179 + C9179 +
            C49290 * C2390) *
               C49306 +
           (C7907 * C933 + C9180 + C9180 + C7901 * C943 + C7909 * C2379 +
            C9181 + C9181 + C7902 * C2391 + C7911 * C2380 + C9182 + C9182 +
            C49290 * C2392) *
               C49279) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
           C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
           C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
           C9265 + C9265 + C9248 * C1797) *
              C48928 * C49043 * C928 -
          (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
           C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
           C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
           C9250 * C386 + C9466 + C9466 + C9244 * C398) *
              C48928 * C49043 * C929 +
          (C9250 * C931 + C9946 + C9946 + C9244 * C941 + C9252 * C2375 + C9947 +
           C9947 + C9245 * C2387 + C9254 * C2376 + C9948 + C9948 +
           C9246 * C2388 + C9256 * C9939 + C9949 + C9949 + C9247 * C9943 +
           C9258 * C9940 + C9950 + C9950 + C9248 * C9944) *
              C48928 * C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C48928 * C49323 +
           (C10410 + C10411 + C10412) * C48928 * C49312 + C11285 * C49293) *
              C928 -
          ((C11289 + C11290 + C11291) * C48928 * C49293 +
           (C10415 + C10414 + C10413) * C48928 * C49312 +
           (C10412 + C10411 + C10410) * C48928 * C49323) *
              C929 +
          (C11285 * C49323 + (C11291 + C11290 + C11289) * C48928 * C49312 +
           (C7907 * C3735 + C11278 + C11278 + C7901 * C3741 + C7909 * C11264 +
            C11279 + C11279 + C7902 * C11268 + C7911 * C11265 + C11280 +
            C11280 + C49290 * C11269) *
               C48928 * C49293) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
            C164 * C49306 + C165 * C49279) *
               C15403 +
           (C15699 + C15700 + C15701) * C15404 + C16525 * C49293) *
              C928 -
          ((C16522 + C16523 + C16524) * C49293 +
           (C15704 + C15703 + C15702) * C15404 +
           (C15701 + C15700 + C15699) * C15403) *
              C929 +
          (C16525 * C15403 + (C16524 + C16523 + C16522) * C15404 +
           ((C113 * C3735 + C3750 + C3750 + C49025 * C3741) * C49319 +
            (C113 * C3736 + C3751 + C3751 + C49025 * C3742) * C49306 +
            (C113 * C3737 + C3752 + C3752 + C49025 * C3743) * C49279) *
               C49293) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C48928 * C15403 +
           (C16976 + C16977 + C16978) * C48928 * C15404 + C17842 * C49293) *
              C928 -
          ((C17846 + C17847 + C17848) * C48928 * C49293 +
           (C16981 + C16980 + C16979) * C48928 * C15404 +
           (C16978 + C16977 + C16976) * C48928 * C15403) *
              C929 +
          (C17842 * C15403 + (C17848 + C17847 + C17846) * C48928 * C15404 +
           (C1067 * C3735 + C17835 + C17835 + C49322 * C3741 + C1069 * C11264 +
            C17836 + C17836 + C49310 * C11268 + C1071 * C11265 + C17837 +
            C17837 + C49290 * C11269) *
               C48928 * C49293) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49025 * C129) * C48928 * C17910 +
           C18091 * C17911 + C18092 * C17912 + C18093 * C17913 +
           C18109 * C17914) *
              C928 -
          (C18592 * C17914 + C18109 * C17913 + C18093 * C17912 +
           C18092 * C17911 + C18091 * C17910) *
              C929 +
          (C18092 * C17910 + C18093 * C17911 + C18109 * C17912 +
           C18592 * C17913 +
           (C113 * C18582 + C18588 + C18588 + C49025 * C18584) * C48928 *
               C17914) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[117] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49235 +
            (C7965 + C7966 + C7967) * C48938) *
               C49258 +
           ((C10410 + C10411 + C10412) * C49235 +
            (C8351 + C8350 + C8349) * C48938) *
               C49130) *
              C49014 * C48997 * C110 -
          (((C8346 + C8347 + C8348) * C48938 +
            (C8349 + C8350 + C8351) * C49235) *
               C49130 +
           ((C7970 + C7969 + C7968) * C48938 +
            (C7967 + C7966 + C7965) * C49235) *
               C49258) *
              C49014 * C48997 * C111 +
          ((C7975 * C49235 + (C7973 + C7972 + C7971) * C48938) * C49258 +
           ((C8348 + C8347 + C8346) * C49235 +
            (C7907 * C383 + C8331 + C8331 + C7901 * C395 + C7909 * C683 +
             C8332 + C8332 + C7902 * C693 + C7911 * C1484 + C8333 + C8333 +
             C49290 * C1492) *
                C48938) *
               C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 + C164 * C3858 +
            C165 * C3859 + C166 * C49257) *
               C49258 +
           (C2892 * C3857 + C426 * C3858 + C425 * C3859 + C424 * C49257) *
               C49130) *
              C49014 * C48997 * C110 -
          ((C423 * C49257 + C424 * C3859 + C425 * C3858 + C426 * C3857) *
               C49130 +
           (C167 * C49257 + C166 * C3859 + C165 * C3858 + C164 * C3857) *
               C49258) *
              C49014 * C48997 * C111 +
          ((C165 * C3857 + C166 * C3858 + C167 * C3859 + C168 * C49257) *
               C49258 +
           (C425 * C3857 + C424 * C3858 + C423 * C3859 +
            (C113 * C387 + C414 + C414 + C49025 * C399) * C49257) *
               C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49235 +
            C164 * C48938) *
               C20350 +
           (C2892 * C49235 + C426 * C48938) * C20351 +
           (C2893 * C49235 + C2528 * C48938) * C20352 +
           (C3756 * C49235 + C2895 * C48938) * C49272) *
              C49014 * C48997 * C110 -
          ((C2894 * C48938 + C2895 * C49235) * C49272 +
           (C2529 * C48938 + C2528 * C49235) * C20352 +
           (C425 * C48938 + C426 * C49235) * C20351 +
           (C165 * C48938 + C164 * C49235) * C20350) *
              C49014 * C48997 * C111 +
          ((C165 * C49235 + C166 * C48938) * C20350 +
           (C425 * C49235 + C424 * C48938) * C20351 +
           (C2529 * C49235 + C2530 * C48938) * C20352 +
           (C2894 * C49235 +
            (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C48938) *
               C49272) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[118] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
              C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
              C49290 * C588) *
                 C49235 +
             (C7965 + C7966 + C7967) * C48938) *
                C49258 +
            ((C10410 + C10411 + C10412) * C49235 +
             (C8351 + C8350 + C8349) * C48938) *
                C49130) *
               C49014 * C250 -
           (((C12876 + C12877 + C12878) * C48938 +
             (C10859 + C10858 + C10857) * C49235) *
                C49130 +
            ((C8161 + C8162 + C8163) * C48938 +
             (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
              C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
              C7901 * C270) *
                 C49235) *
                C49258) *
               C49014 * C49285) *
              C252 +
          ((((C8163 + C8162 + C8161) * C49235 +
             (C8160 + C8159 + C8158) * C48938) *
                C49258 +
            ((C12878 + C12877 + C12876) * C49235 +
             (C7907 * C682 + C8769 + C8769 + C7901 * C692 + C7909 * C1481 +
              C8770 + C8770 + C7902 * C1489 + C7911 * C1957 + C8771 + C8771 +
              C49290 * C1963) *
                 C48938) *
                C49130) *
               C49014 * C49285 -
           (((C8346 + C8347 + C8348) * C48938 +
             (C8349 + C8350 + C8351) * C49235) *
                C49130 +
            ((C7970 + C7969 + C7968) * C48938 +
             (C7967 + C7966 + C7965) * C49235) *
                C49258) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 +
             C164 * C3858 + C165 * C3859 + C166 * C49257) *
                C49258 +
            (C2892 * C3857 + C426 * C3858 + C425 * C3859 + C424 * C49257) *
                C49130) *
               C49014 * C250 -
           ((C5234 * C49257 + C2702 * C3859 + C2703 * C3858 + C3330 * C3857) *
                C49130 +
            (C296 * C49257 + C297 * C3859 + C298 * C3858 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C3857) *
                C49258) *
               C49014 * C49285) *
              C252 +
          (((C298 * C3857 + C297 * C3858 + C296 * C3859 + C295 * C49257) *
                C49258 +
            (C2703 * C3857 + C2702 * C3858 + C5234 * C3859 +
             (C113 * C684 + C700 + C700 + C49025 * C694) * C49257) *
                C49130) *
               C49014 * C49285 -
           ((C423 * C49257 + C424 * C3859 + C425 * C3858 + C426 * C3857) *
                C49130 +
            (C167 * C49257 + C166 * C3859 + C165 * C3858 + C164 * C3857) *
                C49258) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49235 +
             C164 * C48938) *
                C20350 +
            (C2892 * C49235 + C426 * C48938) * C20351 +
            (C2893 * C49235 + C2528 * C48938) * C20352 +
            (C3756 * C49235 + C2895 * C48938) * C49272) *
               C49014 * C250 -
           ((C20489 * C48938 + C18353 * C49235) * C49272 +
            (C2701 * C48938 + C3331 * C49235) * C20352 +
            (C2703 * C48938 + C3330 * C49235) * C20351 +
            (C298 * C48938 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49235) *
                C20350) *
               C49014 * C49285) *
              C252 +
          (((C298 * C49235 + C297 * C48938) * C20350 +
            (C2703 * C49235 + C2702 * C48938) * C20351 +
            (C2701 * C49235 + C2700 * C48938) * C20352 +
            (C20489 * C49235 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C48938) *
                C49272) *
               C49014 * C49285 -
           ((C2894 * C48938 + C2895 * C49235) * C49272 +
            (C2529 * C48938 + C2528 * C49235) * C20352 +
            (C425 * C48938 + C426 * C49235) * C20351 +
            (C165 * C48938 + C164 * C49235) * C20350) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[119] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
              C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
              C49290 * C588) *
                 C49235 +
             (C7965 + C7966 + C7967) * C48938) *
                C49258 +
            ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
               C380 -
           (((C10418 + C10417 + C10416) * C48938 +
             (C10415 + C10414 + C10413) * C49235) *
                C49130 +
            (C13076 * C48938 + (C10412 + C10411 + C10410) * C49235) * C49258) *
               C49287) *
              C48997 * C252 +
          (((C13075 * C49235 + (C8348 + C8347 + C8346) * C48938) * C49258 +
            ((C10416 + C10417 + C10418) * C49235 +
             (C7907 * C933 + C9180 + C9180 + C7901 * C943 + C7909 * C2379 +
              C9181 + C9181 + C7902 * C2391 + C7911 * C2380 + C9182 + C9182 +
              C49290 * C2392) *
                 C48938) *
                C49130) *
               C49287 -
           (((C8346 + C8347 + C8348) * C48938 + C13076 * C49235) * C49130 +
            ((C7970 + C7969 + C7968) * C48938 +
             (C7967 + C7966 + C7965) * C49235) *
                C49258) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 +
             C164 * C3858 + C165 * C3859 + C166 * C49257) *
                C49258 +
            (C5365 + C5366 + C5367 + C5368) * C49130) *
               C380 -
           ((C2530 * C49257 + C2529 * C3859 + C2528 * C3858 + C2893 * C3857) *
                C49130 +
            (C5368 + C5367 + C5366 + C5365) * C49258) *
               C49287) *
              C48997 * C252 +
          (((C5369 + C5370 + C5371 + C5372) * C49258 +
            (C2528 * C3857 + C2529 * C3858 + C2530 * C3859 +
             (C113 * C935 + C951 + C951 + C49025 * C945) * C49257) *
                C49130) *
               C49287 -
           ((C5372 + C5371 + C5370 + C5369) * C49130 +
            (C167 * C49257 + C166 * C3859 + C165 * C3858 + C164 * C3857) *
                C49258) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49235 +
             C164 * C48938) *
                C20350 +
            (C20620 + C20621) * C20351 + (C20622 + C20623) * C20352 +
            (C20624 + C20625) * C49272) *
               C380 -
           ((C18108 * C48938 + C18107 * C49235) * C49272 +
            (C20625 + C20624) * C20352 + (C20623 + C20622) * C20351 +
            (C20621 + C20620) * C20350) *
               C49287) *
              C48997 * C252 +
          (((C20626 + C20627) * C20350 + (C20628 + C20629) * C20351 +
            (C20630 + C20631) * C20352 +
            (C18108 * C49235 +
             (C113 * C3737 + C3752 + C3752 + C49025 * C3743) * C48938) *
                C49272) *
               C49287 -
           ((C20631 + C20630) * C49272 + (C20629 + C20628) * C20352 +
            (C20627 + C20626) * C20351 +
            (C165 * C48938 + C164 * C49235) * C20350) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[120] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
              C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
              C49290 * C588) *
                 C49235 +
             (C7965 + C7966 + C7967) * C48938) *
                C49258 +
            ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
               C49014 * C508 -
           (((C12876 + C12877 + C12878) * C48938 +
             (C10859 + C10858 + C10857) * C49235) *
                C49130 +
            ((C8161 + C8162 + C8163) * C48938 +
             (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
              C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
              C7901 * C270) *
                 C49235) *
                C49258) *
               C49014 * C49285) *
              C510 +
          ((((C8163 + C8162 + C8161) * C49235 +
             (C8160 + C8159 + C8158) * C48938) *
                C49258 +
            ((C12878 + C12877 + C12876) * C49235 +
             (C7907 * C682 + C8769 + C8769 + C7901 * C692 + C7909 * C1481 +
              C8770 + C8770 + C7902 * C1489 + C7911 * C1957 + C8771 + C8771 +
              C49290 * C1963) *
                 C48938) *
                C49130) *
               C49014 * C49285 -
           (((C8346 + C8347 + C8348) * C48938 + C13076 * C49235) * C49130 +
            ((C7970 + C7969 + C7968) * C48938 +
             (C7967 + C7966 + C7965) * C49235) *
                C49258) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 +
             C164 * C3858 + C165 * C3859 + C166 * C49257) *
                C49258 +
            (C5365 + C5366 + C5367 + C5368) * C49130) *
               C49014 * C508 -
           ((C5234 * C49257 + C2702 * C3859 + C2703 * C3858 + C3330 * C3857) *
                C49130 +
            (C296 * C49257 + C297 * C3859 + C298 * C3858 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C3857) *
                C49258) *
               C49014 * C49285) *
              C510 +
          (((C298 * C3857 + C297 * C3858 + C296 * C3859 + C295 * C49257) *
                C49258 +
            (C2703 * C3857 + C2702 * C3858 + C5234 * C3859 +
             (C113 * C684 + C700 + C700 + C49025 * C694) * C49257) *
                C49130) *
               C49014 * C49285 -
           ((C5372 + C5371 + C5370 + C5369) * C49130 +
            (C167 * C49257 + C166 * C3859 + C165 * C3858 + C164 * C3857) *
                C49258) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49235 +
             C164 * C48938) *
                C20350 +
            (C20620 + C20621) * C20351 + (C20622 + C20623) * C20352 +
            (C20624 + C20625) * C49272) *
               C49014 * C508 -
           ((C20489 * C48938 + C18353 * C49235) * C49272 +
            (C2701 * C48938 + C3331 * C49235) * C20352 +
            (C2703 * C48938 + C3330 * C49235) * C20351 +
            (C298 * C48938 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49235) *
                C20350) *
               C49014 * C49285) *
              C510 +
          (((C298 * C49235 + C297 * C48938) * C20350 +
            (C2703 * C49235 + C2702 * C48938) * C20351 +
            (C2701 * C49235 + C2700 * C48938) * C20352 +
            (C20489 * C49235 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C48938) *
                C49272) *
               C49014 * C49285 -
           ((C20631 + C20630) * C49272 + (C20629 + C20628) * C20352 +
            (C20627 + C20626) * C20351 +
            (C165 * C48938 + C164 * C49235) * C20350) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[121] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49235 +
            (C7965 + C7966 + C7967) * C48938) *
               C49258 +
           ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
              C49014 * C574 -
          (((C12876 + C12877 + C12878) * C48938 +
            (C10859 + C10858 + C10857) * C49235) *
               C49130 +
           ((C8161 + C8162 + C8163) * C48938 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49235) *
               C49258) *
              C49014 * C575 +
          (((C7907 * C578 + C8608 + C8608 + C7901 * C588 + C7909 * C1283 +
             C8609 + C8609 + C7902 * C1291 + C7911 * C1791 + C8610 + C8610 +
             C49290 * C1797) *
                C49235 +
            (C7907 * C579 + C8611 + C8611 + C7901 * C589 + C7909 * C1282 +
             C8612 + C8612 + C7902 * C1290 + C7911 * C1792 + C8613 + C8613 +
             C49290 * C1798) *
                C48938) *
               C49258 +
           ((C7907 * C1483 + C10675 + C10675 + C7901 * C1491 + C7909 * C1955 +
             C10676 + C10676 + C7902 * C1961 + C7911 * C9455 + C10677 + C10677 +
             C49290 * C9459) *
                C49235 +
            (C7907 * C1482 + C13417 + C13417 + C7901 * C1490 + C7909 * C1956 +
             C13418 + C13418 + C7902 * C1962 + C7911 * C9456 + C13419 + C13419 +
             C49290 * C9460) *
                C48938) *
               C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 + C164 * C3858 +
            C165 * C3859 + C166 * C49257) *
               C49258 +
           (C5365 + C5366 + C5367 + C5368) * C49130) *
              C49014 * C574 -
          ((C5234 * C49257 + C2702 * C3859 + C2703 * C3858 + C3330 * C3857) *
               C49130 +
           (C296 * C49257 + C297 * C3859 + C298 * C3858 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C3857) *
               C49258) *
              C49014 * C575 +
          (((C113 * C578 + C594 + C594 + C49025 * C588) * C3857 +
            (C113 * C579 + C595 + C595 + C49025 * C589) * C3858 +
            (C113 * C580 + C596 + C596 + C49025 * C590) * C3859 +
            (C113 * C581 + C597 + C597 + C49025 * C591) * C49257) *
               C49258 +
           ((C113 * C1483 + C3154 + C3154 + C49025 * C1491) * C3857 +
            (C113 * C1482 + C3155 + C3155 + C49025 * C1490) * C3858 +
            (C113 * C1481 + C3156 + C3156 + C49025 * C1489) * C3859 +
            (C113 * C1484 + C5601 + C5601 + C49025 * C1492) * C49257) *
               C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49235 +
            C164 * C48938) *
               C20350 +
           (C20620 + C20621) * C20351 + (C20622 + C20623) * C20352 +
           (C20624 + C20625) * C49272) *
              C49014 * C574 -
          ((C20489 * C48938 + C18353 * C49235) * C49272 +
           (C2701 * C48938 + C3331 * C49235) * C20352 +
           (C2703 * C48938 + C3330 * C49235) * C20351 +
           (C298 * C48938 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C49235) *
               C20350) *
              C49014 * C575 +
          (((C113 * C578 + C594 + C594 + C49025 * C588) * C49235 +
            (C113 * C579 + C595 + C595 + C49025 * C589) * C48938) *
               C20350 +
           ((C113 * C1483 + C3154 + C3154 + C49025 * C1491) * C49235 +
            (C113 * C1482 + C3155 + C3155 + C49025 * C1490) * C48938) *
               C20351 +
           ((C113 * C2376 + C3157 + C3157 + C49025 * C2388) * C49235 +
            (C113 * C2378 + C3158 + C3158 + C49025 * C2390) * C48938) *
               C20352 +
           ((C113 * C10361 + C18255 + C18255 + C49025 * C10365) * C49235 +
            (C113 * C10362 + C20860 + C20860 + C49025 * C10366) * C48938) *
               C49272) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[122] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
              C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
              C49290 * C588) *
                 C49235 +
             (C7965 + C7966 + C7967) * C48938) *
                C49258 +
            ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
               C380 -
           (((C10418 + C10417 + C10416) * C48938 +
             (C10415 + C10414 + C10413) * C49235) *
                C49130 +
            (C13076 * C48938 + (C10412 + C10411 + C10410) * C49235) * C49258) *
               C49287) *
              C508 +
          ((((C10857 + C10858 + C10859) * C49235 +
             (C12878 + C12877 + C12876) * C48938) *
                C49258 +
            ((C10860 + C10861 + C10862) * C49235 +
             (C7907 * C2377 + C10213 + C10213 + C7901 * C2389 + C7909 * C2378 +
              C10214 + C10214 + C7902 * C2390 + C7911 * C10206 + C10215 +
              C10215 + C49290 * C10208) *
                 C48938) *
                C49130) *
               C49287 -
           (((C12876 + C12877 + C12878) * C48938 +
             (C10859 + C10858 + C10857) * C49235) *
                C49130 +
            ((C8161 + C8162 + C8163) * C48938 +
             (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
              C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
              C7901 * C270) *
                 C49235) *
                C49258) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 +
             C164 * C3858 + C165 * C3859 + C166 * C49257) *
                C49258 +
            (C5365 + C5366 + C5367 + C5368) * C49130) *
               C380 -
           ((C2530 * C49257 + C2529 * C3859 + C2528 * C3858 + C2893 * C3857) *
                C49130 +
            (C5368 + C5367 + C5366 + C5365) * C49258) *
               C49287) *
              C508 +
          (((C5732 + C5733 + C5734 + C5735) * C49258 +
            (C3331 * C3857 + C2701 * C3858 + C2700 * C3859 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49257) *
                C49130) *
               C49287 -
           ((C5735 + C5734 + C5733 + C5732) * C49130 +
            (C296 * C49257 + C297 * C3859 + C298 * C3858 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C3857) *
                C49258) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49235 +
             C164 * C48938) *
                C20350 +
            (C20620 + C20621) * C20351 + (C20622 + C20623) * C20352 +
            (C20624 + C20625) * C49272) *
               C380 -
           ((C18108 * C48938 + C18107 * C49235) * C49272 +
            (C20625 + C20624) * C20352 + (C20623 + C20622) * C20351 +
            (C20621 + C20620) * C20350) *
               C49287) *
              C508 +
          (((C20991 + C20992) * C20350 + (C20993 + C20994) * C20351 +
            (C20995 + C20996) * C20352 +
            (C18354 * C49235 +
             (C113 * C17997 + C18002 + C18002 + C49025 * C17999) * C48938) *
                C49272) *
               C49287 -
           ((C20996 + C20995) * C49272 + (C20994 + C20993) * C20352 +
            (C20992 + C20991) * C20351 +
            (C298 * C48938 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49235) *
                C20350) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[123] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
              C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
              C49290 * C588) *
                 C49235 +
             (C7965 + C7966 + C7967) * C48938) *
                C49258 +
            ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
               C782 -
           (((C10418 + C10417 + C10416) * C48938 +
             (C10415 + C10414 + C10413) * C49235) *
                C49130 +
            (C13076 * C48938 + (C10412 + C10411 + C10410) * C49235) * C49258) *
               C49287) *
              C48997 * C510 +
          (((C13075 * C49235 + (C8348 + C8347 + C8346) * C48938) * C49258 +
            ((C10416 + C10417 + C10418) * C49235 +
             (C7907 * C933 + C9180 + C9180 + C7901 * C943 + C7909 * C2379 +
              C9181 + C9181 + C7902 * C2391 + C7911 * C2380 + C9182 + C9182 +
              C49290 * C2392) *
                 C48938) *
                C49130) *
               C49287 -
           (((C8346 + C8347 + C8348) * C48938 + C13076 * C49235) * C49130 +
            ((C7970 + C7969 + C7968) * C48938 +
             (C7967 + C7966 + C7965) * C49235) *
                C49258) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 +
             C164 * C3858 + C165 * C3859 + C166 * C49257) *
                C49258 +
            (C5365 + C5366 + C5367 + C5368) * C49130) *
               C782 -
           ((C2530 * C49257 + C2529 * C3859 + C2528 * C3858 + C2893 * C3857) *
                C49130 +
            (C5368 + C5367 + C5366 + C5365) * C49258) *
               C49287) *
              C48997 * C510 +
          (((C5369 + C5370 + C5371 + C5372) * C49258 +
            (C2528 * C3857 + C2529 * C3858 + C2530 * C3859 +
             (C113 * C935 + C951 + C951 + C49025 * C945) * C49257) *
                C49130) *
               C49287 -
           ((C5372 + C5371 + C5370 + C5369) * C49130 +
            (C167 * C49257 + C166 * C3859 + C165 * C3858 + C164 * C3857) *
                C49258) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49235 +
             C164 * C48938) *
                C20350 +
            (C20620 + C20621) * C20351 + (C20622 + C20623) * C20352 +
            (C20624 + C20625) * C49272) *
               C782 -
           ((C18108 * C48938 + C18107 * C49235) * C49272 +
            (C20625 + C20624) * C20352 + (C20623 + C20622) * C20351 +
            (C20621 + C20620) * C20350) *
               C49287) *
              C48997 * C510 +
          (((C20626 + C20627) * C20350 + (C20628 + C20629) * C20351 +
            (C20630 + C20631) * C20352 +
            (C18108 * C49235 +
             (C113 * C3737 + C3752 + C3752 + C49025 * C3743) * C48938) *
                C49272) *
               C49287 -
           ((C20631 + C20630) * C49272 + (C20629 + C20628) * C20352 +
            (C20627 + C20626) * C20351 +
            (C165 * C48938 + C164 * C49235) * C20350) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[124] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
              C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
              C49290 * C588) *
                 C49235 +
             (C7965 + C7966 + C7967) * C48938) *
                C49258 +
            ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
               C782 -
           (((C10418 + C10417 + C10416) * C48938 +
             (C10415 + C10414 + C10413) * C49235) *
                C49130 +
            (C13076 * C48938 + (C10412 + C10411 + C10410) * C49235) * C49258) *
               C49287) *
              C250 +
          ((((C10857 + C10858 + C10859) * C49235 +
             (C12878 + C12877 + C12876) * C48938) *
                C49258 +
            ((C10860 + C10861 + C10862) * C49235 +
             (C7907 * C2377 + C10213 + C10213 + C7901 * C2389 + C7909 * C2378 +
              C10214 + C10214 + C7902 * C2390 + C7911 * C10206 + C10215 +
              C10215 + C49290 * C10208) *
                 C48938) *
                C49130) *
               C49287 -
           (((C12876 + C12877 + C12878) * C48938 +
             (C10859 + C10858 + C10857) * C49235) *
                C49130 +
            ((C8161 + C8162 + C8163) * C48938 +
             (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
              C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
              C7901 * C270) *
                 C49235) *
                C49258) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 +
             C164 * C3858 + C165 * C3859 + C166 * C49257) *
                C49258 +
            (C5365 + C5366 + C5367 + C5368) * C49130) *
               C782 -
           ((C2530 * C49257 + C2529 * C3859 + C2528 * C3858 + C2893 * C3857) *
                C49130 +
            (C5368 + C5367 + C5366 + C5365) * C49258) *
               C49287) *
              C250 +
          (((C5732 + C5733 + C5734 + C5735) * C49258 +
            (C3331 * C3857 + C2701 * C3858 + C2700 * C3859 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49257) *
                C49130) *
               C49287 -
           ((C5735 + C5734 + C5733 + C5732) * C49130 +
            (C296 * C49257 + C297 * C3859 + C298 * C3858 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C3857) *
                C49258) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49235 +
             C164 * C48938) *
                C20350 +
            (C20620 + C20621) * C20351 + (C20622 + C20623) * C20352 +
            (C20624 + C20625) * C49272) *
               C782 -
           ((C18108 * C48938 + C18107 * C49235) * C49272 +
            (C20625 + C20624) * C20352 + (C20623 + C20622) * C20351 +
            (C20621 + C20620) * C20350) *
               C49287) *
              C250 +
          (((C20991 + C20992) * C20350 + (C20993 + C20994) * C20351 +
            (C20995 + C20996) * C20352 +
            (C18354 * C49235 +
             (C113 * C17997 + C18002 + C18002 + C49025 * C17999) * C48938) *
                C49272) *
               C49287 -
           ((C20996 + C20995) * C49272 + (C20994 + C20993) * C20352 +
            (C20992 + C20991) * C20351 +
            (C298 * C48938 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49235) *
                C20350) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[125] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49235 +
            (C7965 + C7966 + C7967) * C48938) *
               C49258 +
           ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
              C928 -
          (((C10418 + C10417 + C10416) * C48938 +
            (C10415 + C10414 + C10413) * C49235) *
               C49130 +
           (C13076 * C48938 + (C10412 + C10411 + C10410) * C49235) * C49258) *
              C929 +
          ((C11281 * C49235 + (C10416 + C10417 + C10418) * C48938) * C49258 +
           ((C11291 + C11290 + C11289) * C49235 +
            (C7907 * C2850 + C10389 + C10389 + C7901 * C2858 + C7909 * C3306 +
             C10390 + C10390 + C7902 * C3312 + C7911 * C10362 + C10391 +
             C10391 + C49290 * C10366) *
                C48938) *
               C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 + C164 * C3858 +
            C165 * C3859 + C166 * C49257) *
               C49258 +
           (C5365 + C5366 + C5367 + C5368) * C49130) *
              C928 -
          ((C6094 + C6095 + C6096 + C6097) * C49130 +
           (C5368 + C5367 + C5366 + C5365) * C49258) *
              C929 +
          ((C6097 + C6096 + C6095 + C6094) * C49258 +
           (C3756 * C3857 + C2895 * C3858 + C2894 * C3859 +
            (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C49257) *
               C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49235 +
            C164 * C48938) *
               C20350 +
           (C20620 + C20621) * C20351 + C21355 * C20352 + C21356 * C49272) *
              C928 -
          ((C21357 + C21358) * C49272 + (C20625 + C20624) * C20352 +
           (C20623 + C20622) * C20351 + (C20621 + C20620) * C20350) *
              C929 +
          (C21355 * C20350 + C21356 * C20351 + (C21358 + C21357) * C20352 +
           (C18591 * C49235 +
            (C113 * C18085 + C18102 + C18102 + C49025 * C18089) * C48938) *
               C49272) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[126] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C1064 +
           (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
              C49043 * C49014 * C48997 * C110 -
          ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
           (C1127 + C1126 + C1125) * C1064) *
              C49043 * C49014 * C48997 * C111 +
          (C1135 * C1064 + (C1133 + C1132 + C1131) * C1065 +
           (C1067 * C119 + C1104 + C1104 + C49322 * C133 + C1069 * C254 +
            C1105 + C1105 + C49310 * C266 + C1071 * C582 + C1106 + C1106 +
            C49290 * C592) *
               C49279) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C49043 * C49014 * C48997 * C110 -
          (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
           C164 * C102) *
              C49043 * C49014 * C48997 * C111 +
          (C165 * C102 + C166 * C103 + C167 * C104 + C168 * C105 +
           (C113 * C121 + C153 + C153 + C49025 * C135) * C106) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C49319 +
           (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
              C49043 * C49014 * C48997 * C110 -
          ((C7971 + C7972 + C7973) * C49279 + (C7970 + C7969 + C7968) * C49306 +
           (C7967 + C7966 + C7965) * C49319) *
              C49043 * C49014 * C48997 * C111 +
          (C7975 * C49319 + (C7973 + C7972 + C7971) * C49306 +
           (C7907 * C119 + C7944 + C7944 + C7901 * C133 + C7909 * C254 + C7945 +
            C7945 + C7902 * C266 + C7911 * C582 + C7946 + C7946 +
            C49290 * C592) *
               C49279) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
           C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
           C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
           C9265 + C9265 + C9248 * C1797) *
              C48928 * C49043 * C49014 * C48997 * C110 -
          (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
           C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
           C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
           C9250 * C116 + C9270 + C9270 + C9244 * C130) *
              C48928 * C49043 * C49014 * C48997 * C111 +
          (C9250 * C117 + C9271 + C9271 + C9244 * C131 + C9252 * C256 + C9272 +
           C9272 + C9245 * C268 + C9254 * C580 + C9273 + C9273 + C9246 * C590 +
           C9256 * C1281 + C9274 + C9274 + C9247 * C1289 + C9258 * C1793 +
           C9275 + C9275 + C9248 * C1799) *
              C48928 * C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
            C164 * C49306 + C165 * C49279) *
               C15403 +
           (C2892 * C49319 + C426 * C49306 + C425 * C49279) * C15404 +
           (C2893 * C49319 + C2528 * C49306 + C2529 * C49279) * C49293) *
              C49014 * C48997 * C110 -
          ((C2530 * C49279 + C2529 * C49306 + C2528 * C49319) * C49293 +
           (C424 * C49279 + C425 * C49306 + C426 * C49319) * C15404 +
           (C166 * C49279 + C165 * C49306 + C164 * C49319) * C15403) *
              C49014 * C48997 * C111 +
          ((C165 * C49319 + C166 * C49306 + C167 * C49279) * C15403 +
           (C425 * C49319 + C424 * C49306 + C423 * C49279) * C15404 +
           (C2529 * C49319 + C2530 * C49306 +
            (C113 * C935 + C951 + C951 + C49025 * C945) * C49279) *
               C49293) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C48928 * C15403 +
           (C1067 * C386 + C1514 + C1514 + C49322 * C398 + C1069 * C680 +
            C1513 + C1513 + C49310 * C690 + C1071 * C1483 + C1512 + C1512 +
            C49290 * C1491) *
               C48928 * C15404 +
           (C1067 * C931 + C2394 + C2394 + C49322 * C941 + C1069 * C2375 +
            C2395 + C2395 + C49310 * C2387 + C1071 * C2376 + C2396 + C2396 +
            C49290 * C2388) *
               C48928 * C49293) *
              C49014 * C48997 * C110 -
          ((C1071 * C2378 + C2399 + C2399 + C49290 * C2390 + C1069 * C2377 +
            C2398 + C2398 + C49310 * C2389 + C1067 * C932 + C2397 + C2397 +
            C49322 * C942) *
               C48928 * C49293 +
           (C1533 + C1534 + C1535) * C48928 * C15404 +
           (C1127 + C1126 + C1125) * C48928 * C15403) *
              C49014 * C48997 * C111 +
          (C1135 * C48928 * C15403 + (C1532 + C1531 + C1530) * C48928 * C15404 +
           (C1067 * C933 + C2400 + C2400 + C49322 * C943 + C1069 * C2379 +
            C2401 + C2401 + C49310 * C2391 + C1071 * C2380 + C2402 + C2402 +
            C49290 * C2392) *
               C48928 * C49293) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[127] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C49014 * C250 -
           ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C1064) *
               C49043 * C49014 * C49285) *
              C252 +
          (((C1335 + C1334 + C1333) * C1064 + (C1332 + C1331 + C1330) * C1065 +
            (C1067 * C255 + C1315 + C1315 + C49322 * C267 + C1069 * C581 +
             C1316 + C1316 + C49310 * C591 + C1071 * C1284 + C1317 + C1317 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
            (C1127 + C1126 + C1125) * C1064) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C49014 * C250 -
           (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
               C49043 * C49014 * C49285) *
              C252 +
          ((C298 * C102 + C297 * C103 + C296 * C104 + C295 * C105 +
            (C113 * C259 + C286 + C286 + C49025 * C271) * C106) *
               C49043 * C49014 * C49285 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C49014 * C250 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C49014 * C49285) *
              C252 +
          (((C8163 + C8162 + C8161) * C49319 +
            (C8160 + C8159 + C8158) * C49306 +
            (C7907 * C255 + C8143 + C8143 + C7901 * C267 + C7909 * C581 +
             C8144 + C8144 + C7902 * C591 + C7911 * C1284 + C8145 + C8145 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C49014 * C250 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C49014 * C49285) *
              C252 +
          ((C9250 * C257 + C9369 + C9369 + C9244 * C269 + C9252 * C579 + C9370 +
            C9370 + C9245 * C589 + C9254 * C1282 + C9371 + C9371 +
            C9246 * C1290 + C9256 * C1792 + C9372 + C9372 + C9247 * C1798 +
            C9258 * C9358 + C9373 + C9373 + C9248 * C9362) *
               C48928 * C49043 * C49014 * C49285 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
             C164 * C49306 + C165 * C49279) *
                C15403 +
            (C2892 * C49319 + C426 * C49306 + C425 * C49279) * C15404 +
            (C2893 * C49319 + C2528 * C49306 + C2529 * C49279) * C49293) *
               C49014 * C250 -
           ((C2700 * C49279 + C2701 * C49306 + C3331 * C49319) * C49293 +
            (C2702 * C49279 + C2703 * C49306 + C3330 * C49319) * C15404 +
            (C297 * C49279 + C298 * C49306 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49319) *
                C15403) *
               C49014 * C49285) *
              C252 +
          (((C298 * C49319 + C297 * C49306 + C296 * C49279) * C15403 +
            (C2703 * C49319 + C2702 * C49306 + C5234 * C49279) * C15404 +
            (C2701 * C49319 + C2700 * C49306 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49279) *
                C49293) *
               C49014 * C49285 -
           ((C2530 * C49279 + C2529 * C49306 + C2528 * C49319) * C49293 +
            (C424 * C49279 + C425 * C49306 + C426 * C49319) * C15404 +
            (C166 * C49279 + C165 * C49306 + C164 * C49319) * C15403) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C48928 * C15403 +
            (C1067 * C386 + C1514 + C1514 + C49322 * C398 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1071 * C1483 + C1512 + C1512 +
             C49290 * C1491) *
                C48928 * C15404 +
            (C1067 * C931 + C2394 + C2394 + C49322 * C941 + C1069 * C2375 +
             C2395 + C2395 + C49310 * C2387 + C1071 * C2376 + C2396 + C2396 +
             C49290 * C2388) *
                C48928 * C49293) *
               C49014 * C250 -
           ((C1071 * C9939 + C16782 + C16782 + C49290 * C9943 + C1069 * C2376 +
             C16783 + C16783 + C49310 * C2388 + C1067 * C2375 + C16784 +
             C16784 + C49322 * C2387) *
                C48928 * C49293 +
            (C1071 * C1955 + C1967 + C1967 + C49290 * C1961 + C1069 * C1483 +
             C1966 + C1966 + C49310 * C1491 + C1067 * C680 + C1965 + C1965 +
             C49322 * C690) *
                C48928 * C15404 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C48928 * C15403) *
               C49014 * C49285) *
              C252 +
          (((C1335 + C1334 + C1333) * C48928 * C15403 +
            (C1067 * C681 + C1968 + C1968 + C49322 * C691 + C1069 * C1482 +
             C1969 + C1969 + C49310 * C1490 + C1071 * C1956 + C1970 + C1970 +
             C49290 * C1962) *
                C48928 * C15404 +
            (C1067 * C2377 + C16785 + C16785 + C49322 * C2389 + C1069 * C2378 +
             C16786 + C16786 + C49310 * C2390 + C1071 * C10206 + C16787 +
             C16787 + C49290 * C10208) *
                C48928 * C49293) *
               C49014 * C49285 -
           ((C1071 * C2378 + C2399 + C2399 + C49290 * C2390 + C1069 * C2377 +
             C2398 + C2398 + C49310 * C2389 + C1067 * C932 + C2397 + C2397 +
             C49322 * C942) *
                C48928 * C49293 +
            (C1533 + C1534 + C1535) * C48928 * C15404 +
            (C1127 + C1126 + C1125) * C48928 * C15403) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[128] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C380 -
           ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
            (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
             C49322 * C398) *
                C1064) *
               C49043 * C49287) *
              C48997 * C252 +
          (((C1535 + C1534 + C1533) * C1064 + (C1532 + C1531 + C1530) * C1065 +
            (C1067 * C383 + C1515 + C1515 + C49322 * C395 + C1069 * C683 +
             C1516 + C1516 + C49310 * C693 + C1071 * C1484 + C1517 + C1517 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
            (C1127 + C1126 + C1125) * C1064) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C380 -
           (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
            (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
               C49043 * C49287) *
              C48997 * C252 +
          ((C426 * C102 + C425 * C103 + C424 * C104 + C423 * C105 +
            (C113 * C387 + C414 + C414 + C49025 * C399) * C106) *
               C49043 * C49287 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C380 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C48997 * C252 +
          (((C8351 + C8350 + C8349) * C49319 +
            (C8348 + C8347 + C8346) * C49306 +
            (C7907 * C383 + C8331 + C8331 + C7901 * C395 + C7909 * C683 +
             C8332 + C8332 + C7902 * C693 + C7911 * C1484 + C8333 + C8333 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C380 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C48997 * C252 +
          ((C9250 * C385 + C9467 + C9467 + C9244 * C397 + C9252 * C681 + C9468 +
            C9468 + C9245 * C691 + C9254 * C1482 + C9469 + C9469 +
            C9246 * C1490 + C9256 * C1956 + C9470 + C9470 + C9247 * C1962 +
            C9258 * C9456 + C9471 + C9471 + C9248 * C9460) *
               C48928 * C49043 * C49287 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
             C164 * C49306 + C165 * C49279) *
                C15403 +
            (C15699 + C15700 + C15701) * C15404 +
            (C15702 + C15703 + C15704) * C49293) *
               C380 -
           ((C2894 * C49279 + C2895 * C49306 + C3756 * C49319) * C49293 +
            (C15704 + C15703 + C15702) * C15404 +
            (C15701 + C15700 + C15699) * C15403) *
               C49287) *
              C48997 * C252 +
          (((C15705 + C15706 + C15707) * C15403 +
            (C15708 + C15709 + C15710) * C15404 +
            (C2895 * C49319 + C2894 * C49306 +
             (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C49279) *
                C49293) *
               C49287 -
           ((C15710 + C15709 + C15708) * C49293 +
            (C15707 + C15706 + C15705) * C15404 +
            (C166 * C49279 + C165 * C49306 + C164 * C49319) * C15403) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C48928 * C15403 +
            (C16976 + C16977 + C16978) * C48928 * C15404 +
            (C16979 + C16980 + C16981) * C48928 * C49293) *
               C380 -
           ((C1071 * C10361 + C16946 + C16946 + C49290 * C10365 +
             C1069 * C3305 + C16947 + C16947 + C49310 * C3311 + C1067 * C2851 +
             C16948 + C16948 + C49322 * C2859) *
                C48928 * C49293 +
            (C16981 + C16980 + C16979) * C48928 * C15404 +
            (C16978 + C16977 + C16976) * C48928 * C15403) *
               C49287) *
              C48997 * C252 +
          (((C1535 + C1534 + C1533) * C48928 * C15403 +
            (C16982 + C16983 + C16984) * C48928 * C15404 +
            (C1067 * C2850 + C16955 + C16955 + C49322 * C2858 + C1069 * C3306 +
             C16956 + C16956 + C49310 * C3312 + C1071 * C10362 + C16957 +
             C16957 + C49290 * C10366) *
                C48928 * C49293) *
               C49287 -
           ((C16984 + C16983 + C16982) * C48928 * C49293 +
            (C1533 + C1534 + C1535) * C48928 * C15404 +
            (C1127 + C1126 + C1125) * C48928 * C15403) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[129] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C49014 * C508 -
           ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C1064) *
               C49043 * C49014 * C49285) *
              C510 +
          (((C1335 + C1334 + C1333) * C1064 + (C1332 + C1331 + C1330) * C1065 +
            (C1067 * C255 + C1315 + C1315 + C49322 * C267 + C1069 * C581 +
             C1316 + C1316 + C49310 * C591 + C1071 * C1284 + C1317 + C1317 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
            (C1127 + C1126 + C1125) * C1064) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C49014 * C508 -
           (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
               C49043 * C49014 * C49285) *
              C510 +
          ((C298 * C102 + C297 * C103 + C296 * C104 + C295 * C105 +
            (C113 * C259 + C286 + C286 + C49025 * C271) * C106) *
               C49043 * C49014 * C49285 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C49014 * C508 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C49014 * C49285) *
              C510 +
          (((C8163 + C8162 + C8161) * C49319 +
            (C8160 + C8159 + C8158) * C49306 +
            (C7907 * C255 + C8143 + C8143 + C7901 * C267 + C7909 * C581 +
             C8144 + C8144 + C7902 * C591 + C7911 * C1284 + C8145 + C8145 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C49014 * C508 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C49014 * C49285) *
              C510 +
          ((C9250 * C257 + C9369 + C9369 + C9244 * C269 + C9252 * C579 + C9370 +
            C9370 + C9245 * C589 + C9254 * C1282 + C9371 + C9371 +
            C9246 * C1290 + C9256 * C1792 + C9372 + C9372 + C9247 * C1798 +
            C9258 * C9358 + C9373 + C9373 + C9248 * C9362) *
               C48928 * C49043 * C49014 * C49285 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
             C164 * C49306 + C165 * C49279) *
                C15403 +
            (C15699 + C15700 + C15701) * C15404 +
            (C15702 + C15703 + C15704) * C49293) *
               C49014 * C508 -
           ((C2700 * C49279 + C2701 * C49306 + C3331 * C49319) * C49293 +
            (C2702 * C49279 + C2703 * C49306 + C3330 * C49319) * C15404 +
            (C297 * C49279 + C298 * C49306 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49319) *
                C15403) *
               C49014 * C49285) *
              C510 +
          (((C298 * C49319 + C297 * C49306 + C296 * C49279) * C15403 +
            (C2703 * C49319 + C2702 * C49306 + C5234 * C49279) * C15404 +
            (C2701 * C49319 + C2700 * C49306 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49279) *
                C49293) *
               C49014 * C49285 -
           ((C15710 + C15709 + C15708) * C49293 +
            (C15707 + C15706 + C15705) * C15404 +
            (C166 * C49279 + C165 * C49306 + C164 * C49319) * C15403) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C48928 * C15403 +
            (C16976 + C16977 + C16978) * C48928 * C15404 +
            (C16979 + C16980 + C16981) * C48928 * C49293) *
               C49014 * C508 -
           ((C1071 * C9939 + C16782 + C16782 + C49290 * C9943 + C1069 * C2376 +
             C16783 + C16783 + C49310 * C2388 + C1067 * C2375 + C16784 +
             C16784 + C49322 * C2387) *
                C48928 * C49293 +
            (C1071 * C1955 + C1967 + C1967 + C49290 * C1961 + C1069 * C1483 +
             C1966 + C1966 + C49310 * C1491 + C1067 * C680 + C1965 + C1965 +
             C49322 * C690) *
                C48928 * C15404 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C48928 * C15403) *
               C49014 * C49285) *
              C510 +
          (((C1335 + C1334 + C1333) * C48928 * C15403 +
            (C1067 * C681 + C1968 + C1968 + C49322 * C691 + C1069 * C1482 +
             C1969 + C1969 + C49310 * C1490 + C1071 * C1956 + C1970 + C1970 +
             C49290 * C1962) *
                C48928 * C15404 +
            (C1067 * C2377 + C16785 + C16785 + C49322 * C2389 + C1069 * C2378 +
             C16786 + C16786 + C49310 * C2390 + C1071 * C10206 + C16787 +
             C16787 + C49290 * C10208) *
                C48928 * C49293) *
               C49014 * C49285 -
           ((C16984 + C16983 + C16982) * C48928 * C49293 +
            (C1533 + C1534 + C1535) * C48928 * C15404 +
            (C1127 + C1126 + C1125) * C48928 * C15403) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[130] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C1064 +
           (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
              C49043 * C49014 * C574 -
          ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
           (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
            C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
            C49322 * C270) *
               C1064) *
              C49043 * C49014 * C575 +
          ((C1067 * C578 + C1801 + C1801 + C49322 * C588 + C1069 * C1283 +
            C1802 + C1802 + C49310 * C1291 + C1071 * C1791 + C1803 + C1803 +
            C49290 * C1797) *
               C1064 +
           (C1067 * C579 + C1804 + C1804 + C49322 * C589 + C1069 * C1282 +
            C1805 + C1805 + C49310 * C1290 + C1071 * C1792 + C1806 + C1806 +
            C49290 * C1798) *
               C1065 +
           (C1067 * C580 + C1807 + C1807 + C49322 * C590 + C1069 * C1281 +
            C1808 + C1808 + C49310 * C1289 + C1071 * C1793 + C1809 + C1809 +
            C49290 * C1799) *
               C49279) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C49043 * C49014 * C574 -
          (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
           (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
              C49043 * C49014 * C575 +
          ((C113 * C578 + C594 + C594 + C49025 * C588) * C102 +
           (C113 * C579 + C595 + C595 + C49025 * C589) * C103 +
           (C113 * C580 + C596 + C596 + C49025 * C590) * C104 +
           (C113 * C581 + C597 + C597 + C49025 * C591) * C105 +
           (C113 * C582 + C598 + C598 + C49025 * C592) * C106) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C49319 +
           (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
              C49043 * C49014 * C574 -
          ((C8158 + C8159 + C8160) * C49279 + (C8161 + C8162 + C8163) * C49306 +
           (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
            C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
            C7901 * C270) *
               C49319) *
              C49043 * C49014 * C575 +
          ((C7907 * C578 + C8608 + C8608 + C7901 * C588 + C7909 * C1283 +
            C8609 + C8609 + C7902 * C1291 + C7911 * C1791 + C8610 + C8610 +
            C49290 * C1797) *
               C49319 +
           (C7907 * C579 + C8611 + C8611 + C7901 * C589 + C7909 * C1282 +
            C8612 + C8612 + C7902 * C1290 + C7911 * C1792 + C8613 + C8613 +
            C49290 * C1798) *
               C49306 +
           (C7907 * C580 + C8614 + C8614 + C7901 * C590 + C7909 * C1281 +
            C8615 + C8615 + C7902 * C1289 + C7911 * C1793 + C8616 + C8616 +
            C49290 * C1799) *
               C49279) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
           C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
           C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
           C9265 + C9265 + C9248 * C1797) *
              C48928 * C49043 * C49014 * C574 -
          (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
           C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
           C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
           C9250 * C258 + C9368 + C9368 + C9244 * C270) *
              C48928 * C49043 * C49014 * C575 +
          (C9250 * C578 + C9619 + C9619 + C9244 * C588 + C9252 * C1283 + C9620 +
           C9620 + C9245 * C1291 + C9254 * C1791 + C9621 + C9621 +
           C9246 * C1797 + C9256 * C9357 + C9622 + C9622 + C9247 * C9361 +
           C9258 * C9615 + C9623 + C9623 + C9248 * C9617) *
              C48928 * C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
            C164 * C49306 + C165 * C49279) *
               C15403 +
           (C15699 + C15700 + C15701) * C15404 +
           (C15702 + C15703 + C15704) * C49293) *
              C49014 * C574 -
          ((C2700 * C49279 + C2701 * C49306 + C3331 * C49319) * C49293 +
           (C2702 * C49279 + C2703 * C49306 + C3330 * C49319) * C15404 +
           (C297 * C49279 + C298 * C49306 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C49319) *
               C15403) *
              C49014 * C575 +
          (((C113 * C578 + C594 + C594 + C49025 * C588) * C49319 +
            (C113 * C579 + C595 + C595 + C49025 * C589) * C49306 +
            (C113 * C580 + C596 + C596 + C49025 * C590) * C49279) *
               C15403 +
           ((C113 * C1483 + C3154 + C3154 + C49025 * C1491) * C49319 +
            (C113 * C1482 + C3155 + C3155 + C49025 * C1490) * C49306 +
            (C113 * C1481 + C3156 + C3156 + C49025 * C1489) * C49279) *
               C15404 +
           ((C113 * C2376 + C3157 + C3157 + C49025 * C2388) * C49319 +
            (C113 * C2378 + C3158 + C3158 + C49025 * C2390) * C49306 +
            (C113 * C2380 + C3159 + C3159 + C49025 * C2392) * C49279) *
               C49293) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C48928 * C15403 +
           (C16976 + C16977 + C16978) * C48928 * C15404 +
           (C16979 + C16980 + C16981) * C48928 * C49293) *
              C49014 * C574 -
          ((C1071 * C9939 + C16782 + C16782 + C49290 * C9943 + C1069 * C2376 +
            C16783 + C16783 + C49310 * C2388 + C1067 * C2375 + C16784 + C16784 +
            C49322 * C2387) *
               C48928 * C49293 +
           (C1071 * C1955 + C1967 + C1967 + C49290 * C1961 + C1069 * C1483 +
            C1966 + C1966 + C49310 * C1491 + C1067 * C680 + C1965 + C1965 +
            C49322 * C690) *
               C48928 * C15404 +
           (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
            C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
            C49322 * C270) *
               C48928 * C15403) *
              C49014 * C575 +
          ((C1067 * C578 + C1801 + C1801 + C49322 * C588 + C1069 * C1283 +
            C1802 + C1802 + C49310 * C1291 + C1071 * C1791 + C1803 + C1803 +
            C49290 * C1797) *
               C48928 * C15403 +
           (C1067 * C1483 + C17241 + C17241 + C49322 * C1491 + C1069 * C1955 +
            C17242 + C17242 + C49310 * C1961 + C1071 * C9455 + C17243 + C17243 +
            C49290 * C9459) *
               C48928 * C15404 +
           (C1067 * C2376 + C17244 + C17244 + C49322 * C2388 + C1069 * C9939 +
            C17245 + C17245 + C49310 * C9943 + C1071 * C9940 + C17246 + C17246 +
            C49290 * C9944) *
               C48928 * C49293) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[131] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C380 -
           ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
            (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
             C49322 * C398) *
                C1064) *
               C49043 * C49287) *
              C508 +
          (((C1067 * C680 + C1965 + C1965 + C49322 * C690 + C1069 * C1483 +
             C1966 + C1966 + C49310 * C1491 + C1071 * C1955 + C1967 + C1967 +
             C49290 * C1961) *
                C1064 +
            (C1067 * C681 + C1968 + C1968 + C49322 * C691 + C1069 * C1482 +
             C1969 + C1969 + C49310 * C1490 + C1071 * C1956 + C1970 + C1970 +
             C49290 * C1962) *
                C1065 +
            (C1067 * C682 + C1971 + C1971 + C49322 * C692 + C1069 * C1481 +
             C1972 + C1972 + C49310 * C1489 + C1071 * C1957 + C1973 + C1973 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C1064) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C380 -
           (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
            (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
               C49043 * C49287) *
              C508 +
          (((C113 * C680 + C696 + C696 + C49025 * C690) * C102 +
            (C113 * C681 + C697 + C697 + C49025 * C691) * C103 +
            (C113 * C682 + C698 + C698 + C49025 * C692) * C104 +
            (C113 * C683 + C699 + C699 + C49025 * C693) * C105 +
            (C113 * C684 + C700 + C700 + C49025 * C694) * C106) *
               C49043 * C49287 -
           (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C380 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C508 +
          (((C7907 * C680 + C8763 + C8763 + C7901 * C690 + C7909 * C1483 +
             C8764 + C8764 + C7902 * C1491 + C7911 * C1955 + C8765 + C8765 +
             C49290 * C1961) *
                C49319 +
            (C7907 * C681 + C8766 + C8766 + C7901 * C691 + C7909 * C1482 +
             C8767 + C8767 + C7902 * C1490 + C7911 * C1956 + C8768 + C8768 +
             C49290 * C1962) *
                C49306 +
            (C7907 * C682 + C8769 + C8769 + C7901 * C692 + C7909 * C1481 +
             C8770 + C8770 + C7902 * C1489 + C7911 * C1957 + C8771 + C8771 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C380 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C508 +
          ((C9250 * C680 + C9709 + C9709 + C9244 * C690 + C9252 * C1483 +
            C9710 + C9710 + C9245 * C1491 + C9254 * C1955 + C9711 + C9711 +
            C9246 * C1961 + C9256 * C9455 + C9712 + C9712 + C9247 * C9459 +
            C9258 * C9705 + C9713 + C9713 + C9248 * C9707) *
               C48928 * C49043 * C49287 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
             C164 * C49306 + C165 * C49279) *
                C15403 +
            (C15699 + C15700 + C15701) * C15404 +
            (C15702 + C15703 + C15704) * C49293) *
               C380 -
           ((C2894 * C49279 + C2895 * C49306 + C3756 * C49319) * C49293 +
            (C15704 + C15703 + C15702) * C15404 +
            (C15701 + C15700 + C15699) * C15403) *
               C49287) *
              C508 +
          (((C16113 + C16114 + C16115) * C15403 +
            (C16116 + C16117 + C16118) * C15404 +
            ((C113 * C3305 + C3323 + C3323 + C49025 * C3311) * C49319 +
             (C113 * C3306 + C3324 + C3324 + C49025 * C3312) * C49306 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C49279) *
                C49293) *
               C49287 -
           ((C16118 + C16117 + C16116) * C49293 +
            (C16115 + C16114 + C16113) * C15404 +
            (C297 * C49279 + C298 * C49306 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49319) *
                C15403) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C48928 * C15403 +
            (C16976 + C16977 + C16978) * C48928 * C15404 +
            (C16979 + C16980 + C16981) * C48928 * C49293) *
               C380 -
           ((C1071 * C10361 + C16946 + C16946 + C49290 * C10365 +
             C1069 * C3305 + C16947 + C16947 + C49310 * C3311 + C1067 * C2851 +
             C16948 + C16948 + C49322 * C2859) *
                C48928 * C49293 +
            (C16981 + C16980 + C16979) * C48928 * C15404 +
            (C16978 + C16977 + C16976) * C48928 * C15403) *
               C49287) *
              C508 +
          (((C17420 + C17421 + C17422) * C48928 * C15403 +
            (C17423 + C17424 + C17425) * C48928 * C15404 +
            (C1067 * C3305 + C17405 + C17405 + C49322 * C3311 + C1069 * C10361 +
             C17406 + C17406 + C49310 * C10365 + C1071 * C10826 + C17407 +
             C17407 + C49290 * C10828) *
                C48928 * C49293) *
               C49287 -
           ((C17425 + C17424 + C17423) * C48928 * C49293 +
            (C17422 + C17421 + C17420) * C48928 * C15404 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C48928 * C15403) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[132] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C782 -
           ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
            (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
             C49322 * C398) *
                C1064) *
               C49043 * C49287) *
              C48997 * C510 +
          (((C1535 + C1534 + C1533) * C1064 + (C1532 + C1531 + C1530) * C1065 +
            (C1067 * C383 + C1515 + C1515 + C49322 * C395 + C1069 * C683 +
             C1516 + C1516 + C49310 * C693 + C1071 * C1484 + C1517 + C1517 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
            (C1127 + C1126 + C1125) * C1064) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C782 -
           (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
            (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
               C49043 * C49287) *
              C48997 * C510 +
          ((C426 * C102 + C425 * C103 + C424 * C104 + C423 * C105 +
            (C113 * C387 + C414 + C414 + C49025 * C399) * C106) *
               C49043 * C49287 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C782 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C48997 * C510 +
          (((C8351 + C8350 + C8349) * C49319 +
            (C8348 + C8347 + C8346) * C49306 +
            (C7907 * C383 + C8331 + C8331 + C7901 * C395 + C7909 * C683 +
             C8332 + C8332 + C7902 * C693 + C7911 * C1484 + C8333 + C8333 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C782 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C48997 * C510 +
          ((C9250 * C385 + C9467 + C9467 + C9244 * C397 + C9252 * C681 + C9468 +
            C9468 + C9245 * C691 + C9254 * C1482 + C9469 + C9469 +
            C9246 * C1490 + C9256 * C1956 + C9470 + C9470 + C9247 * C1962 +
            C9258 * C9456 + C9471 + C9471 + C9248 * C9460) *
               C48928 * C49043 * C49287 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
             C164 * C49306 + C165 * C49279) *
                C15403 +
            (C15699 + C15700 + C15701) * C15404 +
            (C15702 + C15703 + C15704) * C49293) *
               C782 -
           ((C2894 * C49279 + C2895 * C49306 + C3756 * C49319) * C49293 +
            (C15704 + C15703 + C15702) * C15404 +
            (C15701 + C15700 + C15699) * C15403) *
               C49287) *
              C48997 * C510 +
          (((C15705 + C15706 + C15707) * C15403 +
            (C15708 + C15709 + C15710) * C15404 +
            (C2895 * C49319 + C2894 * C49306 +
             (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C49279) *
                C49293) *
               C49287 -
           ((C15710 + C15709 + C15708) * C49293 +
            (C15707 + C15706 + C15705) * C15404 +
            (C166 * C49279 + C165 * C49306 + C164 * C49319) * C15403) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C48928 * C15403 +
            (C16976 + C16977 + C16978) * C48928 * C15404 +
            (C16979 + C16980 + C16981) * C48928 * C49293) *
               C782 -
           ((C1071 * C10361 + C16946 + C16946 + C49290 * C10365 +
             C1069 * C3305 + C16947 + C16947 + C49310 * C3311 + C1067 * C2851 +
             C16948 + C16948 + C49322 * C2859) *
                C48928 * C49293 +
            (C16981 + C16980 + C16979) * C48928 * C15404 +
            (C16978 + C16977 + C16976) * C48928 * C15403) *
               C49287) *
              C48997 * C510 +
          (((C1535 + C1534 + C1533) * C48928 * C15403 +
            (C16982 + C16983 + C16984) * C48928 * C15404 +
            (C1067 * C2850 + C16955 + C16955 + C49322 * C2858 + C1069 * C3306 +
             C16956 + C16956 + C49310 * C3312 + C1071 * C10362 + C16957 +
             C16957 + C49290 * C10366) *
                C48928 * C49293) *
               C49287 -
           ((C16984 + C16983 + C16982) * C48928 * C49293 +
            (C1533 + C1534 + C1535) * C48928 * C15404 +
            (C1127 + C1126 + C1125) * C48928 * C15403) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[133] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C782 -
           ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
            (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
             C49322 * C398) *
                C1064) *
               C49043 * C49287) *
              C250 +
          (((C1067 * C680 + C1965 + C1965 + C49322 * C690 + C1069 * C1483 +
             C1966 + C1966 + C49310 * C1491 + C1071 * C1955 + C1967 + C1967 +
             C49290 * C1961) *
                C1064 +
            (C1067 * C681 + C1968 + C1968 + C49322 * C691 + C1069 * C1482 +
             C1969 + C1969 + C49310 * C1490 + C1071 * C1956 + C1970 + C1970 +
             C49290 * C1962) *
                C1065 +
            (C1067 * C682 + C1971 + C1971 + C49322 * C692 + C1069 * C1481 +
             C1972 + C1972 + C49310 * C1489 + C1071 * C1957 + C1973 + C1973 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C1064) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C782 -
           (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
            (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
               C49043 * C49287) *
              C250 +
          (((C113 * C680 + C696 + C696 + C49025 * C690) * C102 +
            (C113 * C681 + C697 + C697 + C49025 * C691) * C103 +
            (C113 * C682 + C698 + C698 + C49025 * C692) * C104 +
            (C113 * C683 + C699 + C699 + C49025 * C693) * C105 +
            (C113 * C684 + C700 + C700 + C49025 * C694) * C106) *
               C49043 * C49287 -
           (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C782 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C250 +
          (((C7907 * C680 + C8763 + C8763 + C7901 * C690 + C7909 * C1483 +
             C8764 + C8764 + C7902 * C1491 + C7911 * C1955 + C8765 + C8765 +
             C49290 * C1961) *
                C49319 +
            (C7907 * C681 + C8766 + C8766 + C7901 * C691 + C7909 * C1482 +
             C8767 + C8767 + C7902 * C1490 + C7911 * C1956 + C8768 + C8768 +
             C49290 * C1962) *
                C49306 +
            (C7907 * C682 + C8769 + C8769 + C7901 * C692 + C7909 * C1481 +
             C8770 + C8770 + C7902 * C1489 + C7911 * C1957 + C8771 + C8771 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C782 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C250 +
          ((C9250 * C680 + C9709 + C9709 + C9244 * C690 + C9252 * C1483 +
            C9710 + C9710 + C9245 * C1491 + C9254 * C1955 + C9711 + C9711 +
            C9246 * C1961 + C9256 * C9455 + C9712 + C9712 + C9247 * C9459 +
            C9258 * C9705 + C9713 + C9713 + C9248 * C9707) *
               C48928 * C49043 * C49287 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
             C164 * C49306 + C165 * C49279) *
                C15403 +
            (C15699 + C15700 + C15701) * C15404 +
            (C15702 + C15703 + C15704) * C49293) *
               C782 -
           ((C2894 * C49279 + C2895 * C49306 + C3756 * C49319) * C49293 +
            (C15704 + C15703 + C15702) * C15404 +
            (C15701 + C15700 + C15699) * C15403) *
               C49287) *
              C250 +
          (((C16113 + C16114 + C16115) * C15403 +
            (C16116 + C16117 + C16118) * C15404 +
            ((C113 * C3305 + C3323 + C3323 + C49025 * C3311) * C49319 +
             (C113 * C3306 + C3324 + C3324 + C49025 * C3312) * C49306 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C49279) *
                C49293) *
               C49287 -
           ((C16118 + C16117 + C16116) * C49293 +
            (C16115 + C16114 + C16113) * C15404 +
            (C297 * C49279 + C298 * C49306 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49319) *
                C15403) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C48928 * C15403 +
            (C16976 + C16977 + C16978) * C48928 * C15404 +
            (C16979 + C16980 + C16981) * C48928 * C49293) *
               C782 -
           ((C1071 * C10361 + C16946 + C16946 + C49290 * C10365 +
             C1069 * C3305 + C16947 + C16947 + C49310 * C3311 + C1067 * C2851 +
             C16948 + C16948 + C49322 * C2859) *
                C48928 * C49293 +
            (C16981 + C16980 + C16979) * C48928 * C15404 +
            (C16978 + C16977 + C16976) * C48928 * C15403) *
               C49287) *
              C250 +
          (((C17420 + C17421 + C17422) * C48928 * C15403 +
            (C17423 + C17424 + C17425) * C48928 * C15404 +
            (C1067 * C3305 + C17405 + C17405 + C49322 * C3311 + C1069 * C10361 +
             C17406 + C17406 + C49310 * C10365 + C1071 * C10826 + C17407 +
             C17407 + C49290 * C10828) *
                C48928 * C49293) *
               C49287 -
           ((C17425 + C17424 + C17423) * C48928 * C49293 +
            (C17422 + C17421 + C17420) * C48928 * C15404 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C48928 * C15403) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[134] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C1064 +
           (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
              C49043 * C928 -
          ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
           (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
            C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
            C49322 * C398) *
               C1064) *
              C49043 * C929 +
          ((C1067 * C931 + C2394 + C2394 + C49322 * C941 + C1069 * C2375 +
            C2395 + C2395 + C49310 * C2387 + C1071 * C2376 + C2396 + C2396 +
            C49290 * C2388) *
               C1064 +
           (C1067 * C932 + C2397 + C2397 + C49322 * C942 + C1069 * C2377 +
            C2398 + C2398 + C49310 * C2389 + C1071 * C2378 + C2399 + C2399 +
            C49290 * C2390) *
               C1065 +
           (C1067 * C933 + C2400 + C2400 + C49322 * C943 + C1069 * C2379 +
            C2401 + C2401 + C49310 * C2391 + C1071 * C2380 + C2402 + C2402 +
            C49290 * C2392) *
               C49279) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C49043 * C928 -
          (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
           (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
              C49043 * C929 +
          ((C113 * C931 + C947 + C947 + C49025 * C941) * C102 +
           (C113 * C932 + C948 + C948 + C49025 * C942) * C103 +
           (C113 * C933 + C949 + C949 + C49025 * C943) * C104 +
           (C113 * C934 + C950 + C950 + C49025 * C944) * C105 +
           (C113 * C935 + C951 + C951 + C49025 * C945) * C106) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C49319 +
           (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
              C49043 * C928 -
          ((C8346 + C8347 + C8348) * C49279 + (C8349 + C8350 + C8351) * C49306 +
           (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
            C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
            C7901 * C398) *
               C49319) *
              C49043 * C929 +
          ((C7907 * C931 + C9174 + C9174 + C7901 * C941 + C7909 * C2375 +
            C9175 + C9175 + C7902 * C2387 + C7911 * C2376 + C9176 + C9176 +
            C49290 * C2388) *
               C49319 +
           (C7907 * C932 + C9177 + C9177 + C7901 * C942 + C7909 * C2377 +
            C9178 + C9178 + C7902 * C2389 + C7911 * C2378 + C9179 + C9179 +
            C49290 * C2390) *
               C49306 +
           (C7907 * C933 + C9180 + C9180 + C7901 * C943 + C7909 * C2379 +
            C9181 + C9181 + C7902 * C2391 + C7911 * C2380 + C9182 + C9182 +
            C49290 * C2392) *
               C49279) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
           C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
           C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
           C9265 + C9265 + C9248 * C1797) *
              C48928 * C49043 * C928 -
          (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
           C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
           C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
           C9250 * C386 + C9466 + C9466 + C9244 * C398) *
              C48928 * C49043 * C929 +
          (C9250 * C931 + C9946 + C9946 + C9244 * C941 + C9252 * C2375 + C9947 +
           C9947 + C9245 * C2387 + C9254 * C2376 + C9948 + C9948 +
           C9246 * C2388 + C9256 * C9939 + C9949 + C9949 + C9247 * C9943 +
           C9258 * C9940 + C9950 + C9950 + C9248 * C9944) *
              C48928 * C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49319 +
            C164 * C49306 + C165 * C49279) *
               C15403 +
           (C15699 + C15700 + C15701) * C15404 + C16525 * C49293) *
              C928 -
          ((C16522 + C16523 + C16524) * C49293 +
           (C15704 + C15703 + C15702) * C15404 +
           (C15701 + C15700 + C15699) * C15403) *
              C929 +
          (C16525 * C15403 + (C16524 + C16523 + C16522) * C15404 +
           ((C113 * C3735 + C3750 + C3750 + C49025 * C3741) * C49319 +
            (C113 * C3736 + C3751 + C3751 + C49025 * C3742) * C49306 +
            (C113 * C3737 + C3752 + C3752 + C49025 * C3743) * C49279) *
               C49293) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C48928 * C15403 +
           (C16976 + C16977 + C16978) * C48928 * C15404 + C17842 * C49293) *
              C928 -
          ((C17846 + C17847 + C17848) * C48928 * C49293 +
           (C16981 + C16980 + C16979) * C48928 * C15404 +
           (C16978 + C16977 + C16976) * C48928 * C15403) *
              C929 +
          (C17842 * C15403 + (C17848 + C17847 + C17846) * C48928 * C15404 +
           (C1067 * C3735 + C17835 + C17835 + C49322 * C3741 + C1069 * C11264 +
            C17836 + C17836 + C49310 * C11268 + C1071 * C11265 + C17837 +
            C17837 + C49290 * C11269) *
               C48928 * C49293) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[135] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C48933 +
            (C3910 + C3911) * C48941 + C3918 * C26788) *
               C31477 +
           ((C6680 + C6681) * C48933 + C6657 * C48941 + C6244 * C26788) *
               C49130) *
              C49014 * C48997 * C110 -
          (((C4254 + C4255) * C26788 + C6666 * C48941 + C6667 * C48933) *
               C49130 +
           ((C3915 + C3914) * C26788 + (C3913 + C3912) * C48941 +
            (C3911 + C3910) * C48933) *
               C31477) *
              C49014 * C48997 * C111 +
          ((C3918 * C48933 + C3919 * C48941 + (C3917 + C3916) * C26788) *
               C31477 +
           (C6244 * C48933 + (C4255 + C4254) * C48941 +
            (C3861 * C382 + C4240 + C4240 + C49256 * C394 + C3863 * C684 +
             C4241 + C4241 + C49088 * C694) *
                C26788) *
               C49130) *
              C49014 * C48997 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[136] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C48933 +
             (C3910 + C3911) * C48941 + C3918 * C26788) *
                C31477 +
            ((C6680 + C6681) * C48933 + C6657 * C48941 + C6244 * C26788) *
                C49130) *
               C49014 * C250 -
           (((C6455 + C6456) * C26788 + (C6457 + C6458) * C48941 +
             (C7241 + C7240) * C48933) *
                C49130 +
            ((C4086 + C4087) * C26788 + (C4088 + C4089) * C48941 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C48933) *
                C31477) *
               C49014 * C49285) *
              C252 +
          ((((C4089 + C4088) * C48933 + (C4087 + C4086) * C48941 +
             (C4085 + C4084) * C26788) *
                C31477 +
            ((C6458 + C6457) * C48933 + (C6456 + C6455) * C48941 +
             (C3861 * C683 + C4632 + C4632 + C49256 * C693 + C3863 * C1484 +
              C4633 + C4633 + C49088 * C1492) *
                 C26788) *
                C49130) *
               C49014 * C49285 -
           (((C4254 + C4255) * C26788 + C6666 * C48941 + C6667 * C48933) *
                C49130 +
            ((C3915 + C3914) * C26788 + (C3913 + C3912) * C48941 +
             (C3911 + C3910) * C48933) *
                C31477) *
               C49014 * C250) *
              C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[137] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C48933 +
             (C3910 + C3911) * C48941 + C3918 * C26788) *
                C31477 +
            ((C6680 + C6681) * C48933 + C6657 * C48941 + C6244 * C26788) *
                C49130) *
               C380 -
           (((C6682 + C6683) * C26788 + C19142 * C48941 +
             (C7790 + C7791) * C48933) *
                C49130 +
            (C6666 * C26788 + C6667 * C48941 + (C6681 + C6680) * C48933) *
                C31477) *
               C49287) *
              C48997 * C252 +
          (((C6657 * C48933 + C6244 * C48941 + (C4255 + C4254) * C26788) *
                C31477 +
            (C19137 * C48933 + (C6683 + C6682) * C48941 +
             (C3861 * C934 + C4998 + C4998 + C49256 * C944 + C3863 * C2676 +
              C4999 + C4999 + C49088 * C2678) *
                 C26788) *
                C49130) *
               C49287 -
           (((C4254 + C4255) * C26788 + C6666 * C48941 + C6667 * C48933) *
                C49130 +
            ((C3915 + C3914) * C26788 + (C3913 + C3912) * C48941 +
             (C3911 + C3910) * C48933) *
                C31477) *
               C380) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[138] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C48933 +
             (C3910 + C3911) * C48941 + C3918 * C26788) *
                C31477 +
            ((C6680 + C6681) * C48933 + C6657 * C48941 + C6244 * C26788) *
                C49130) *
               C49014 * C508 -
           (((C6455 + C6456) * C26788 + (C6457 + C6458) * C48941 +
             (C7241 + C7240) * C48933) *
                C49130 +
            ((C4086 + C4087) * C26788 + (C4088 + C4089) * C48941 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C48933) *
                C31477) *
               C49014 * C49285) *
              C510 +
          ((((C4089 + C4088) * C48933 + (C4087 + C4086) * C48941 +
             (C4085 + C4084) * C26788) *
                C31477 +
            ((C6458 + C6457) * C48933 + (C6456 + C6455) * C48941 +
             (C3861 * C683 + C4632 + C4632 + C49256 * C693 + C3863 * C1484 +
              C4633 + C4633 + C49088 * C1492) *
                 C26788) *
                C49130) *
               C49014 * C49285 -
           (((C4254 + C4255) * C26788 + C6666 * C48941 + C6667 * C48933) *
                C49130 +
            ((C3915 + C3914) * C26788 + (C3913 + C3912) * C48941 +
             (C3911 + C3910) * C48933) *
                C31477) *
               C49014 * C508) *
              C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[139] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C48933 +
            (C3910 + C3911) * C48941 + C3918 * C26788) *
               C31477 +
           ((C6680 + C6681) * C48933 + C6657 * C48941 + C6244 * C26788) *
               C49130) *
              C49014 * C574 -
          (((C6455 + C6456) * C26788 + (C6457 + C6458) * C48941 +
            (C7241 + C7240) * C48933) *
               C49130 +
           ((C4086 + C4087) * C26788 + (C4088 + C4089) * C48941 +
            (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
             C4069 + C4069 + C49256 * C270) *
                C48933) *
               C31477) *
              C49014 * C575 +
          (((C3861 * C578 + C4488 + C4488 + C49256 * C588 + C3863 * C1283 +
             C4489 + C4489 + C49088 * C1291) *
                C48933 +
            (C3861 * C579 + C4490 + C4490 + C49256 * C589 + C3863 * C1282 +
             C4491 + C4491 + C49088 * C1290) *
                C48941 +
            (C3861 * C580 + C4492 + C4492 + C49256 * C590 + C3863 * C1281 +
             C4493 + C4493 + C49088 * C1289) *
                C26788) *
               C31477 +
           ((C3861 * C1483 + C7026 + C7026 + C49256 * C1491 + C3863 * C1955 +
             C7027 + C7027 + C49088 * C1961) *
                C48933 +
            (C3861 * C1482 + C7028 + C7028 + C49256 * C1490 + C3863 * C1956 +
             C7029 + C7029 + C49088 * C1962) *
                C48941 +
            (C3861 * C1481 + C7030 + C7030 + C49256 * C1489 + C3863 * C1957 +
             C7031 + C7031 + C49088 * C1963) *
                C26788) *
               C49130) *
              C49014 * C576) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[140] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C48933 +
             (C3910 + C3911) * C48941 + C3918 * C26788) *
                C31477 +
            ((C6680 + C6681) * C48933 + C6657 * C48941 + C6244 * C26788) *
                C49130) *
               C380 -
           (((C6682 + C6683) * C26788 + C19142 * C48941 +
             (C7790 + C7791) * C48933) *
                C49130 +
            (C6666 * C26788 + C6667 * C48941 + (C6681 + C6680) * C48933) *
                C31477) *
               C49287) *
              C508 +
          ((((C7240 + C7241) * C48933 + (C6458 + C6457) * C48941 +
             (C6456 + C6455) * C26788) *
                C31477 +
            ((C19699 + C19700) * C48933 + (C18942 + C18941) * C48941 +
             (C3861 * C2379 + C7234 + C7234 + C49256 * C2391 + C3863 * C2380 +
              C7235 + C7235 + C49088 * C2392) *
                 C26788) *
                C49130) *
               C49287 -
           (((C6455 + C6456) * C26788 + (C6457 + C6458) * C48941 +
             (C7241 + C7240) * C48933) *
                C49130 +
            ((C4086 + C4087) * C26788 + (C4088 + C4089) * C48941 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C48933) *
                C31477) *
               C380) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[141] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C48933 +
             (C3910 + C3911) * C48941 + C3918 * C26788) *
                C31477 +
            ((C6680 + C6681) * C48933 + C6657 * C48941 + C6244 * C26788) *
                C49130) *
               C782 -
           (((C6682 + C6683) * C26788 + C19142 * C48941 +
             (C7790 + C7791) * C48933) *
                C49130 +
            (C6666 * C26788 + C6667 * C48941 + (C6681 + C6680) * C48933) *
                C31477) *
               C49287) *
              C48997 * C510 +
          (((C6657 * C48933 + C6244 * C48941 + (C4255 + C4254) * C26788) *
                C31477 +
            (C19137 * C48933 + (C6683 + C6682) * C48941 +
             (C3861 * C934 + C4998 + C4998 + C49256 * C944 + C3863 * C2676 +
              C4999 + C4999 + C49088 * C2678) *
                 C26788) *
                C49130) *
               C49287 -
           (((C4254 + C4255) * C26788 + C6666 * C48941 + C6667 * C48933) *
                C49130 +
            ((C3915 + C3914) * C26788 + (C3913 + C3912) * C48941 +
             (C3911 + C3910) * C48933) *
                C31477) *
               C782) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[142] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C48933 +
             (C3910 + C3911) * C48941 + C3918 * C26788) *
                C31477 +
            ((C6680 + C6681) * C48933 + C6657 * C48941 + C6244 * C26788) *
                C49130) *
               C782 -
           (((C6682 + C6683) * C26788 + C19142 * C48941 +
             (C7790 + C7791) * C48933) *
                C49130 +
            (C6666 * C26788 + C6667 * C48941 + (C6681 + C6680) * C48933) *
                C31477) *
               C49287) *
              C250 +
          ((((C7240 + C7241) * C48933 + (C6458 + C6457) * C48941 +
             (C6456 + C6455) * C26788) *
                C31477 +
            ((C19699 + C19700) * C48933 + (C18942 + C18941) * C48941 +
             (C3861 * C2379 + C7234 + C7234 + C49256 * C2391 + C3863 * C2380 +
              C7235 + C7235 + C49088 * C2392) *
                 C26788) *
                C49130) *
               C49287 -
           (((C6455 + C6456) * C26788 + (C6457 + C6458) * C48941 +
             (C7241 + C7240) * C48933) *
                C49130 +
            ((C4086 + C4087) * C26788 + (C4088 + C4089) * C48941 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C48933) *
                C31477) *
               C782) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[143] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C48933 +
            (C3910 + C3911) * C48941 + C3918 * C26788) *
               C31477 +
           ((C6680 + C6681) * C48933 + C6657 * C48941 + C6244 * C26788) *
               C49130) *
              C928 -
          (((C6682 + C6683) * C26788 + C19142 * C48941 +
            (C7790 + C7791) * C48933) *
               C49130 +
           (C6666 * C26788 + C6667 * C48941 + (C6681 + C6680) * C48933) *
               C31477) *
              C929 +
          ((C20235 * C48933 + C19137 * C48941 + (C6683 + C6682) * C26788) *
               C31477 +
           (C22448 * C48933 + (C19148 + C19147) * C48941 +
            (C3861 * C2849 + C7784 + C7784 + C49256 * C2857 + C3863 * C3307 +
             C7785 + C7785 + C49088 * C3313) *
                C26788) *
               C49130) *
              C930) *
         C48997 * C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[144] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C23805 +
            (C3910 + C3911) * C48938) *
               C49126 +
           ((C6680 + C6681) * C23805 + C6657 * C48938) * C49133 +
           (C20235 * C23805 + C19137 * C48938) * C36909) *
              C49014 * C48997 * C110 -
          (((C6682 + C6683) * C48938 + C19142 * C23805) * C36909 +
           (C6666 * C48938 + C6667 * C23805) * C49133 +
           ((C3913 + C3912) * C48938 + (C3911 + C3910) * C23805) * C49126) *
              C49014 * C48997 * C111 +
          ((C3918 * C23805 + C3919 * C48938) * C49126 +
           (C6244 * C23805 + (C4255 + C4254) * C48938) * C49133 +
           ((C6683 + C6682) * C23805 +
            (C3861 * C934 + C4998 + C4998 + C49256 * C944 + C3863 * C2676 +
             C4999 + C4999 + C49088 * C2678) *
                C48938) *
               C36909) *
              C49014 * C48997 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[145] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C23805 +
             (C3910 + C3911) * C48938) *
                C49126 +
            ((C6680 + C6681) * C23805 + C6657 * C48938) * C49133 +
            (C20235 * C23805 + C19137 * C48938) * C36909) *
               C49014 * C250 -
           (((C18941 + C18942) * C48938 + (C19700 + C19699) * C23805) * C36909 +
            ((C6457 + C6458) * C48938 + (C7241 + C7240) * C23805) * C49133 +
            ((C4088 + C4089) * C48938 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C23805) *
                C49126) *
               C49014 * C49285) *
              C252 +
          ((((C4089 + C4088) * C23805 + (C4087 + C4086) * C48938) * C49126 +
            ((C6458 + C6457) * C23805 + (C6456 + C6455) * C48938) * C49133 +
            ((C18942 + C18941) * C23805 +
             (C3861 * C2379 + C7234 + C7234 + C49256 * C2391 + C3863 * C2380 +
              C7235 + C7235 + C49088 * C2392) *
                 C48938) *
                C36909) *
               C49014 * C49285 -
           (((C6682 + C6683) * C48938 + C19142 * C23805) * C36909 +
            (C6666 * C48938 + C6667 * C23805) * C49133 +
            ((C3913 + C3912) * C48938 + (C3911 + C3910) * C23805) * C49126) *
               C49014 * C250) *
              C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[146] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C23805 +
             (C3910 + C3911) * C48938) *
                C49126 +
            ((C6680 + C6681) * C23805 + C6657 * C48938) * C49133 +
            (C20235 * C23805 + C19137 * C48938) * C36909) *
               C380 -
           (((C19147 + C19148) * C48938 + (C20251 + C20252) * C23805) * C36909 +
            (C19142 * C48938 + (C7790 + C7791) * C23805) * C49133 +
            (C6667 * C48938 + (C6681 + C6680) * C23805) * C49126) *
               C49287) *
              C48997 * C252 +
          (((C6657 * C23805 + C6244 * C48938) * C49126 +
            (C19137 * C23805 + (C6683 + C6682) * C48938) * C49133 +
            ((C19148 + C19147) * C23805 +
             (C3861 * C2849 + C7784 + C7784 + C49256 * C2857 + C3863 * C3307 +
              C7785 + C7785 + C49088 * C3313) *
                 C48938) *
                C36909) *
               C49287 -
           (((C6682 + C6683) * C48938 + C19142 * C23805) * C36909 +
            (C6666 * C48938 + C6667 * C23805) * C49133 +
            ((C3913 + C3912) * C48938 + (C3911 + C3910) * C23805) * C49126) *
               C380) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[147] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C23805 +
             (C3910 + C3911) * C48938) *
                C49126 +
            ((C6680 + C6681) * C23805 + C6657 * C48938) * C49133 +
            (C20235 * C23805 + C19137 * C48938) * C36909) *
               C49014 * C508 -
           (((C18941 + C18942) * C48938 + (C19700 + C19699) * C23805) * C36909 +
            ((C6457 + C6458) * C48938 + (C7241 + C7240) * C23805) * C49133 +
            ((C4088 + C4089) * C48938 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C23805) *
                C49126) *
               C49014 * C49285) *
              C510 +
          ((((C4089 + C4088) * C23805 + (C4087 + C4086) * C48938) * C49126 +
            ((C6458 + C6457) * C23805 + (C6456 + C6455) * C48938) * C49133 +
            ((C18942 + C18941) * C23805 +
             (C3861 * C2379 + C7234 + C7234 + C49256 * C2391 + C3863 * C2380 +
              C7235 + C7235 + C49088 * C2392) *
                 C48938) *
                C36909) *
               C49014 * C49285 -
           (((C6682 + C6683) * C48938 + C19142 * C23805) * C36909 +
            (C6666 * C48938 + C6667 * C23805) * C49133 +
            ((C3913 + C3912) * C48938 + (C3911 + C3910) * C23805) * C49126) *
               C49014 * C508) *
              C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[148] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C23805 +
            (C3910 + C3911) * C48938) *
               C49126 +
           ((C6680 + C6681) * C23805 + C6657 * C48938) * C49133 +
           (C20235 * C23805 + C19137 * C48938) * C36909) *
              C49014 * C574 -
          (((C18941 + C18942) * C48938 + (C19700 + C19699) * C23805) * C36909 +
           ((C6457 + C6458) * C48938 + (C7241 + C7240) * C23805) * C49133 +
           ((C4088 + C4089) * C48938 +
            (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
             C4069 + C4069 + C49256 * C270) *
                C23805) *
               C49126) *
              C49014 * C575 +
          (((C3861 * C578 + C4488 + C4488 + C49256 * C588 + C3863 * C1283 +
             C4489 + C4489 + C49088 * C1291) *
                C23805 +
            (C3861 * C579 + C4490 + C4490 + C49256 * C589 + C3863 * C1282 +
             C4491 + C4491 + C49088 * C1290) *
                C48938) *
               C49126 +
           ((C3861 * C1483 + C7026 + C7026 + C49256 * C1491 + C3863 * C1955 +
             C7027 + C7027 + C49088 * C1961) *
                C23805 +
            (C3861 * C1482 + C7028 + C7028 + C49256 * C1490 + C3863 * C1956 +
             C7029 + C7029 + C49088 * C1962) *
                C48938) *
               C49133 +
           ((C3861 * C2376 + C19489 + C19489 + C49256 * C2388 + C3863 * C9939 +
             C19490 + C19490 + C49088 * C9943) *
                C23805 +
            (C3861 * C2378 + C19491 + C19491 + C49256 * C2390 + C3863 * C10206 +
             C19492 + C19492 + C49088 * C10208) *
                C48938) *
               C36909) *
              C49014 * C576) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[149] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C23805 +
             (C3910 + C3911) * C48938) *
                C49126 +
            ((C6680 + C6681) * C23805 + C6657 * C48938) * C49133 +
            (C20235 * C23805 + C19137 * C48938) * C36909) *
               C380 -
           (((C19147 + C19148) * C48938 + (C20251 + C20252) * C23805) * C36909 +
            (C19142 * C48938 + (C7790 + C7791) * C23805) * C49133 +
            (C6667 * C48938 + (C6681 + C6680) * C23805) * C49126) *
               C49287) *
              C508 +
          ((((C7240 + C7241) * C23805 + (C6458 + C6457) * C48938) * C49126 +
            ((C19699 + C19700) * C23805 + (C18942 + C18941) * C48938) * C49133 +
            ((C22087 + C22088) * C23805 +
             (C3861 * C3306 + C19693 + C19693 + C49256 * C3312 +
              C3863 * C10362 + C19694 + C19694 + C49088 * C10366) *
                 C48938) *
                C36909) *
               C49287 -
           (((C18941 + C18942) * C48938 + (C19700 + C19699) * C23805) * C36909 +
            ((C6457 + C6458) * C48938 + (C7241 + C7240) * C23805) * C49133 +
            ((C4088 + C4089) * C48938 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C23805) *
                C49126) *
               C380) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[150] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C23805 +
             (C3910 + C3911) * C48938) *
                C49126 +
            ((C6680 + C6681) * C23805 + C6657 * C48938) * C49133 +
            (C20235 * C23805 + C19137 * C48938) * C36909) *
               C782 -
           (((C19147 + C19148) * C48938 + (C20251 + C20252) * C23805) * C36909 +
            (C19142 * C48938 + (C7790 + C7791) * C23805) * C49133 +
            (C6667 * C48938 + (C6681 + C6680) * C23805) * C49126) *
               C49287) *
              C48997 * C510 +
          (((C6657 * C23805 + C6244 * C48938) * C49126 +
            (C19137 * C23805 + (C6683 + C6682) * C48938) * C49133 +
            ((C19148 + C19147) * C23805 +
             (C3861 * C2849 + C7784 + C7784 + C49256 * C2857 + C3863 * C3307 +
              C7785 + C7785 + C49088 * C3313) *
                 C48938) *
                C36909) *
               C49287 -
           (((C6682 + C6683) * C48938 + C19142 * C23805) * C36909 +
            (C6666 * C48938 + C6667 * C23805) * C49133 +
            ((C3913 + C3912) * C48938 + (C3911 + C3910) * C23805) * C49126) *
               C782) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[151] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C23805 +
             (C3910 + C3911) * C48938) *
                C49126 +
            ((C6680 + C6681) * C23805 + C6657 * C48938) * C49133 +
            (C20235 * C23805 + C19137 * C48938) * C36909) *
               C782 -
           (((C19147 + C19148) * C48938 + (C20251 + C20252) * C23805) * C36909 +
            (C19142 * C48938 + (C7790 + C7791) * C23805) * C49133 +
            (C6667 * C48938 + (C6681 + C6680) * C23805) * C49126) *
               C49287) *
              C250 +
          ((((C7240 + C7241) * C23805 + (C6458 + C6457) * C48938) * C49126 +
            ((C19699 + C19700) * C23805 + (C18942 + C18941) * C48938) * C49133 +
            ((C22087 + C22088) * C23805 +
             (C3861 * C3306 + C19693 + C19693 + C49256 * C3312 +
              C3863 * C10362 + C19694 + C19694 + C49088 * C10366) *
                 C48938) *
                C36909) *
               C49287 -
           (((C18941 + C18942) * C48938 + (C19700 + C19699) * C23805) * C36909 +
            ((C6457 + C6458) * C48938 + (C7241 + C7240) * C23805) * C49133 +
            ((C4088 + C4089) * C48938 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C23805) *
                C49126) *
               C782) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[152] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C23805 +
            (C3910 + C3911) * C48938) *
               C49126 +
           ((C6680 + C6681) * C23805 + C6657 * C48938) * C49133 +
           C39634 * C36909) *
              C928 -
          (((C19147 + C19148) * C48938 + (C20251 + C20252) * C23805) * C36909 +
           (C19142 * C48938 + (C7790 + C7791) * C23805) * C49133 +
           (C6667 * C48938 + (C6681 + C6680) * C23805) * C49126) *
              C929 +
          (C39634 * C49126 +
           (C22448 * C23805 + (C19148 + C19147) * C48938) * C49133 +
           ((C22461 + C22460) * C23805 +
            (C3861 * C3736 + C20243 + C20243 + C49256 * C3742 + C3863 * C17997 +
             C20244 + C20244 + C49088 * C17999) *
                C48938) *
               C36909) *
              C930) *
         C48997 * C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[153] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C23805 +
            (C1125 + C1126 + C1127) * C48938) *
               C31477 +
           ((C16976 + C16977 + C16978) * C23805 +
            (C1535 + C1534 + C1533) * C48938) *
               C49130) *
              C49014 * C48997 * C110 -
          (((C1530 + C1531 + C1532) * C48938 +
            (C1533 + C1534 + C1535) * C23805) *
               C49130 +
           ((C1130 + C1129 + C1128) * C48938 +
            (C1127 + C1126 + C1125) * C23805) *
               C31477) *
              C49014 * C48997 * C111 +
          ((C1135 * C23805 + (C1133 + C1132 + C1131) * C48938) * C31477 +
           ((C1532 + C1531 + C1530) * C23805 +
            (C1067 * C383 + C1515 + C1515 + C49322 * C395 + C1069 * C683 +
             C1516 + C1516 + C49310 * C693 + C1071 * C1484 + C1517 + C1517 +
             C49290 * C1492) *
                C48938) *
               C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
            C164 * C49321 + C165 * C49308 + C166 * C49257) *
               C31477 +
           (C2892 * C49328 + C426 * C49321 + C425 * C49308 + C424 * C49257) *
               C49130) *
              C49014 * C48997 * C110 -
          ((C423 * C49257 + C424 * C49308 + C425 * C49321 + C426 * C49328) *
               C49130 +
           (C167 * C49257 + C166 * C49308 + C165 * C49321 + C164 * C49328) *
               C31477) *
              C49014 * C48997 * C111 +
          ((C165 * C49328 + C166 * C49321 + C167 * C49308 + C168 * C49257) *
               C31477 +
           (C425 * C49328 + C424 * C49321 + C423 * C49308 +
            (C113 * C387 + C414 + C414 + C49025 * C399) * C49257) *
               C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C23805 +
            C164 * C48938) *
               C49330 +
           (C2892 * C23805 + C426 * C48938) * C49327 +
           (C2893 * C23805 + C2528 * C48938) * C49318 +
           (C3756 * C23805 + C2895 * C48938) * C49272) *
              C49014 * C48997 * C110 -
          ((C2894 * C48938 + C2895 * C23805) * C49272 +
           (C2529 * C48938 + C2528 * C23805) * C49318 +
           (C425 * C48938 + C426 * C23805) * C49327 +
           (C165 * C48938 + C164 * C23805) * C49330) *
              C49014 * C48997 * C111 +
          ((C165 * C23805 + C166 * C48938) * C49330 +
           (C425 * C23805 + C424 * C48938) * C49327 +
           (C2529 * C23805 + C2530 * C48938) * C49318 +
           (C2894 * C23805 +
            (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C48938) *
               C49272) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[154] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
              C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
              C49290 * C588) *
                 C23805 +
             (C1125 + C1126 + C1127) * C48938) *
                C31477 +
            ((C16976 + C16977 + C16978) * C23805 +
             (C1535 + C1534 + C1533) * C48938) *
                C49130) *
               C49014 * C250 -
           (((C32824 + C32825 + C32826) * C48938 +
             (C17422 + C17421 + C17420) * C23805) *
                C49130 +
            ((C1333 + C1334 + C1335) * C48938 +
             (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
              C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
              C49322 * C270) *
                 C23805) *
                C31477) *
               C49014 * C49285) *
              C252 +
          ((((C1335 + C1334 + C1333) * C23805 +
             (C1332 + C1331 + C1330) * C48938) *
                C31477 +
            ((C32826 + C32825 + C32824) * C23805 +
             (C1067 * C682 + C1971 + C1971 + C49322 * C692 + C1069 * C1481 +
              C1972 + C1972 + C49310 * C1489 + C1071 * C1957 + C1973 + C1973 +
              C49290 * C1963) *
                 C48938) *
                C49130) *
               C49014 * C49285 -
           (((C1530 + C1531 + C1532) * C48938 +
             (C1533 + C1534 + C1535) * C23805) *
                C49130 +
            ((C1130 + C1129 + C1128) * C48938 +
             (C1127 + C1126 + C1125) * C23805) *
                C31477) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
             C164 * C49321 + C165 * C49308 + C166 * C49257) *
                C31477 +
            (C2892 * C49328 + C426 * C49321 + C425 * C49308 + C424 * C49257) *
                C49130) *
               C49014 * C250 -
           ((C5234 * C49257 + C2702 * C49308 + C2703 * C49321 +
             C3330 * C49328) *
                C49130 +
            (C296 * C49257 + C297 * C49308 + C298 * C49321 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49328) *
                C31477) *
               C49014 * C49285) *
              C252 +
          (((C298 * C49328 + C297 * C49321 + C296 * C49308 + C295 * C49257) *
                C31477 +
            (C2703 * C49328 + C2702 * C49321 + C5234 * C49308 +
             (C113 * C684 + C700 + C700 + C49025 * C694) * C49257) *
                C49130) *
               C49014 * C49285 -
           ((C423 * C49257 + C424 * C49308 + C425 * C49321 + C426 * C49328) *
                C49130 +
            (C167 * C49257 + C166 * C49308 + C165 * C49321 + C164 * C49328) *
                C31477) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C23805 +
             C164 * C48938) *
                C49330 +
            (C2892 * C23805 + C426 * C48938) * C49327 +
            (C2893 * C23805 + C2528 * C48938) * C49318 +
            (C3756 * C23805 + C2895 * C48938) * C49272) *
               C49014 * C250 -
           ((C20489 * C48938 + C18353 * C23805) * C49272 +
            (C2701 * C48938 + C3331 * C23805) * C49318 +
            (C2703 * C48938 + C3330 * C23805) * C49327 +
            (C298 * C48938 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C23805) *
                C49330) *
               C49014 * C49285) *
              C252 +
          (((C298 * C23805 + C297 * C48938) * C49330 +
            (C2703 * C23805 + C2702 * C48938) * C49327 +
            (C2701 * C23805 + C2700 * C48938) * C49318 +
            (C20489 * C23805 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C48938) *
                C49272) *
               C49014 * C49285 -
           ((C2894 * C48938 + C2895 * C23805) * C49272 +
            (C2529 * C48938 + C2528 * C23805) * C49318 +
            (C425 * C48938 + C426 * C23805) * C49327 +
            (C165 * C48938 + C164 * C23805) * C49330) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[155] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
              C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
              C49290 * C588) *
                 C23805 +
             (C1125 + C1126 + C1127) * C48938) *
                C31477 +
            ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
               C380 -
           (((C16984 + C16983 + C16982) * C48938 +
             (C16981 + C16980 + C16979) * C23805) *
                C49130 +
            (C33024 * C48938 + (C16978 + C16977 + C16976) * C23805) * C31477) *
               C49287) *
              C48997 * C252 +
          (((C33023 * C23805 + (C1532 + C1531 + C1530) * C48938) * C31477 +
            ((C16982 + C16983 + C16984) * C23805 +
             (C1067 * C933 + C2400 + C2400 + C49322 * C943 + C1069 * C2379 +
              C2401 + C2401 + C49310 * C2391 + C1071 * C2380 + C2402 + C2402 +
              C49290 * C2392) *
                 C48938) *
                C49130) *
               C49287 -
           (((C1530 + C1531 + C1532) * C48938 + C33024 * C23805) * C49130 +
            ((C1130 + C1129 + C1128) * C48938 +
             (C1127 + C1126 + C1125) * C23805) *
                C31477) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
             C164 * C49321 + C165 * C49308 + C166 * C49257) *
                C31477 +
            (C31740 + C31741 + C31742 + C31743) * C49130) *
               C380 -
           ((C2530 * C49257 + C2529 * C49308 + C2528 * C49321 +
             C2893 * C49328) *
                C49130 +
            (C31743 + C31742 + C31741 + C31740) * C31477) *
               C49287) *
              C48997 * C252 +
          (((C31744 + C31745 + C31746 + C31747) * C31477 +
            (C2528 * C49328 + C2529 * C49321 + C2530 * C49308 +
             (C113 * C935 + C951 + C951 + C49025 * C945) * C49257) *
                C49130) *
               C49287 -
           ((C31747 + C31746 + C31745 + C31744) * C49130 +
            (C167 * C49257 + C166 * C49308 + C165 * C49321 + C164 * C49328) *
                C31477) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C23805 +
             C164 * C48938) *
                C49330 +
            (C34458 + C34459) * C49327 + (C34460 + C34461) * C49318 +
            (C34462 + C34463) * C49272) *
               C380 -
           ((C18108 * C48938 + C18107 * C23805) * C49272 +
            (C34463 + C34462) * C49318 + (C34461 + C34460) * C49327 +
            (C34459 + C34458) * C49330) *
               C49287) *
              C48997 * C252 +
          (((C34464 + C34465) * C49330 + (C34466 + C34467) * C49327 +
            (C34468 + C34469) * C49318 +
            (C18108 * C23805 +
             (C113 * C3737 + C3752 + C3752 + C49025 * C3743) * C48938) *
                C49272) *
               C49287 -
           ((C34469 + C34468) * C49272 + (C34467 + C34466) * C49318 +
            (C34465 + C34464) * C49327 +
            (C165 * C48938 + C164 * C23805) * C49330) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[156] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
              C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
              C49290 * C588) *
                 C23805 +
             (C1125 + C1126 + C1127) * C48938) *
                C31477 +
            ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
               C49014 * C508 -
           (((C32824 + C32825 + C32826) * C48938 +
             (C17422 + C17421 + C17420) * C23805) *
                C49130 +
            ((C1333 + C1334 + C1335) * C48938 +
             (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
              C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
              C49322 * C270) *
                 C23805) *
                C31477) *
               C49014 * C49285) *
              C510 +
          ((((C1335 + C1334 + C1333) * C23805 +
             (C1332 + C1331 + C1330) * C48938) *
                C31477 +
            ((C32826 + C32825 + C32824) * C23805 +
             (C1067 * C682 + C1971 + C1971 + C49322 * C692 + C1069 * C1481 +
              C1972 + C1972 + C49310 * C1489 + C1071 * C1957 + C1973 + C1973 +
              C49290 * C1963) *
                 C48938) *
                C49130) *
               C49014 * C49285 -
           (((C1530 + C1531 + C1532) * C48938 + C33024 * C23805) * C49130 +
            ((C1130 + C1129 + C1128) * C48938 +
             (C1127 + C1126 + C1125) * C23805) *
                C31477) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
             C164 * C49321 + C165 * C49308 + C166 * C49257) *
                C31477 +
            (C31740 + C31741 + C31742 + C31743) * C49130) *
               C49014 * C508 -
           ((C5234 * C49257 + C2702 * C49308 + C2703 * C49321 +
             C3330 * C49328) *
                C49130 +
            (C296 * C49257 + C297 * C49308 + C298 * C49321 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49328) *
                C31477) *
               C49014 * C49285) *
              C510 +
          (((C298 * C49328 + C297 * C49321 + C296 * C49308 + C295 * C49257) *
                C31477 +
            (C2703 * C49328 + C2702 * C49321 + C5234 * C49308 +
             (C113 * C684 + C700 + C700 + C49025 * C694) * C49257) *
                C49130) *
               C49014 * C49285 -
           ((C31747 + C31746 + C31745 + C31744) * C49130 +
            (C167 * C49257 + C166 * C49308 + C165 * C49321 + C164 * C49328) *
                C31477) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C23805 +
             C164 * C48938) *
                C49330 +
            (C34458 + C34459) * C49327 + (C34460 + C34461) * C49318 +
            (C34462 + C34463) * C49272) *
               C49014 * C508 -
           ((C20489 * C48938 + C18353 * C23805) * C49272 +
            (C2701 * C48938 + C3331 * C23805) * C49318 +
            (C2703 * C48938 + C3330 * C23805) * C49327 +
            (C298 * C48938 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C23805) *
                C49330) *
               C49014 * C49285) *
              C510 +
          (((C298 * C23805 + C297 * C48938) * C49330 +
            (C2703 * C23805 + C2702 * C48938) * C49327 +
            (C2701 * C23805 + C2700 * C48938) * C49318 +
            (C20489 * C23805 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C48938) *
                C49272) *
               C49014 * C49285 -
           ((C34469 + C34468) * C49272 + (C34467 + C34466) * C49318 +
            (C34465 + C34464) * C49327 +
            (C165 * C48938 + C164 * C23805) * C49330) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[157] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C23805 +
            (C1125 + C1126 + C1127) * C48938) *
               C31477 +
           ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
              C49014 * C574 -
          (((C32824 + C32825 + C32826) * C48938 +
            (C17422 + C17421 + C17420) * C23805) *
               C49130 +
           ((C1333 + C1334 + C1335) * C48938 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C23805) *
               C31477) *
              C49014 * C575 +
          (((C1067 * C578 + C1801 + C1801 + C49322 * C588 + C1069 * C1283 +
             C1802 + C1802 + C49310 * C1291 + C1071 * C1791 + C1803 + C1803 +
             C49290 * C1797) *
                C23805 +
            (C1067 * C579 + C1804 + C1804 + C49322 * C589 + C1069 * C1282 +
             C1805 + C1805 + C49310 * C1290 + C1071 * C1792 + C1806 + C1806 +
             C49290 * C1798) *
                C48938) *
               C31477 +
           ((C1067 * C1483 + C17241 + C17241 + C49322 * C1491 + C1069 * C1955 +
             C17242 + C17242 + C49310 * C1961 + C1071 * C9455 + C17243 +
             C17243 + C49290 * C9459) *
                C23805 +
            (C1067 * C1482 + C33365 + C33365 + C49322 * C1490 + C1069 * C1956 +
             C33366 + C33366 + C49310 * C1962 + C1071 * C9456 + C33367 +
             C33367 + C49290 * C9460) *
                C48938) *
               C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
            C164 * C49321 + C165 * C49308 + C166 * C49257) *
               C31477 +
           (C31740 + C31741 + C31742 + C31743) * C49130) *
              C49014 * C574 -
          ((C5234 * C49257 + C2702 * C49308 + C2703 * C49321 + C3330 * C49328) *
               C49130 +
           (C296 * C49257 + C297 * C49308 + C298 * C49321 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C49328) *
               C31477) *
              C49014 * C575 +
          (((C113 * C578 + C594 + C594 + C49025 * C588) * C49328 +
            (C113 * C579 + C595 + C595 + C49025 * C589) * C49321 +
            (C113 * C580 + C596 + C596 + C49025 * C590) * C49308 +
            (C113 * C581 + C597 + C597 + C49025 * C591) * C49257) *
               C31477 +
           ((C113 * C1483 + C3154 + C3154 + C49025 * C1491) * C49328 +
            (C113 * C1482 + C3155 + C3155 + C49025 * C1490) * C49321 +
            (C113 * C1481 + C3156 + C3156 + C49025 * C1489) * C49308 +
            (C113 * C1484 + C5601 + C5601 + C49025 * C1492) * C49257) *
               C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C23805 +
            C164 * C48938) *
               C49330 +
           (C34458 + C34459) * C49327 + (C34460 + C34461) * C49318 +
           (C34462 + C34463) * C49272) *
              C49014 * C574 -
          ((C20489 * C48938 + C18353 * C23805) * C49272 +
           (C2701 * C48938 + C3331 * C23805) * C49318 +
           (C2703 * C48938 + C3330 * C23805) * C49327 +
           (C298 * C48938 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C23805) *
               C49330) *
              C49014 * C575 +
          (((C113 * C578 + C594 + C594 + C49025 * C588) * C23805 +
            (C113 * C579 + C595 + C595 + C49025 * C589) * C48938) *
               C49330 +
           ((C113 * C1483 + C3154 + C3154 + C49025 * C1491) * C23805 +
            (C113 * C1482 + C3155 + C3155 + C49025 * C1490) * C48938) *
               C49327 +
           ((C113 * C2376 + C3157 + C3157 + C49025 * C2388) * C23805 +
            (C113 * C2378 + C3158 + C3158 + C49025 * C2390) * C48938) *
               C49318 +
           ((C113 * C10361 + C18255 + C18255 + C49025 * C10365) * C23805 +
            (C113 * C10362 + C20860 + C20860 + C49025 * C10366) * C48938) *
               C49272) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[158] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
              C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
              C49290 * C588) *
                 C23805 +
             (C1125 + C1126 + C1127) * C48938) *
                C31477 +
            ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
               C380 -
           (((C16984 + C16983 + C16982) * C48938 +
             (C16981 + C16980 + C16979) * C23805) *
                C49130 +
            (C33024 * C48938 + (C16978 + C16977 + C16976) * C23805) * C31477) *
               C49287) *
              C508 +
          ((((C17420 + C17421 + C17422) * C23805 +
             (C32826 + C32825 + C32824) * C48938) *
                C31477 +
            ((C17423 + C17424 + C17425) * C23805 +
             (C1067 * C2377 + C16785 + C16785 + C49322 * C2389 + C1069 * C2378 +
              C16786 + C16786 + C49310 * C2390 + C1071 * C10206 + C16787 +
              C16787 + C49290 * C10208) *
                 C48938) *
                C49130) *
               C49287 -
           (((C32824 + C32825 + C32826) * C48938 +
             (C17422 + C17421 + C17420) * C23805) *
                C49130 +
            ((C1333 + C1334 + C1335) * C48938 +
             (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
              C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
              C49322 * C270) *
                 C23805) *
                C31477) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
             C164 * C49321 + C165 * C49308 + C166 * C49257) *
                C31477 +
            (C31740 + C31741 + C31742 + C31743) * C49130) *
               C380 -
           ((C2530 * C49257 + C2529 * C49308 + C2528 * C49321 +
             C2893 * C49328) *
                C49130 +
            (C31743 + C31742 + C31741 + C31740) * C31477) *
               C49287) *
              C508 +
          (((C32106 + C32107 + C32108 + C32109) * C31477 +
            (C3331 * C49328 + C2701 * C49321 + C2700 * C49308 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49257) *
                C49130) *
               C49287 -
           ((C32109 + C32108 + C32107 + C32106) * C49130 +
            (C296 * C49257 + C297 * C49308 + C298 * C49321 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49328) *
                C31477) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C23805 +
             C164 * C48938) *
                C49330 +
            (C34458 + C34459) * C49327 + (C34460 + C34461) * C49318 +
            (C34462 + C34463) * C49272) *
               C380 -
           ((C18108 * C48938 + C18107 * C23805) * C49272 +
            (C34463 + C34462) * C49318 + (C34461 + C34460) * C49327 +
            (C34459 + C34458) * C49330) *
               C49287) *
              C508 +
          (((C34828 + C34829) * C49330 + (C34830 + C34831) * C49327 +
            (C34832 + C34833) * C49318 +
            (C18354 * C23805 +
             (C113 * C17997 + C18002 + C18002 + C49025 * C17999) * C48938) *
                C49272) *
               C49287 -
           ((C34833 + C34832) * C49272 + (C34831 + C34830) * C49318 +
            (C34829 + C34828) * C49327 +
            (C298 * C48938 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C23805) *
                C49330) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[159] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
              C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
              C49290 * C588) *
                 C23805 +
             (C1125 + C1126 + C1127) * C48938) *
                C31477 +
            ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
               C782 -
           (((C16984 + C16983 + C16982) * C48938 +
             (C16981 + C16980 + C16979) * C23805) *
                C49130 +
            (C33024 * C48938 + (C16978 + C16977 + C16976) * C23805) * C31477) *
               C49287) *
              C48997 * C510 +
          (((C33023 * C23805 + (C1532 + C1531 + C1530) * C48938) * C31477 +
            ((C16982 + C16983 + C16984) * C23805 +
             (C1067 * C933 + C2400 + C2400 + C49322 * C943 + C1069 * C2379 +
              C2401 + C2401 + C49310 * C2391 + C1071 * C2380 + C2402 + C2402 +
              C49290 * C2392) *
                 C48938) *
                C49130) *
               C49287 -
           (((C1530 + C1531 + C1532) * C48938 + C33024 * C23805) * C49130 +
            ((C1130 + C1129 + C1128) * C48938 +
             (C1127 + C1126 + C1125) * C23805) *
                C31477) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
             C164 * C49321 + C165 * C49308 + C166 * C49257) *
                C31477 +
            (C31740 + C31741 + C31742 + C31743) * C49130) *
               C782 -
           ((C2530 * C49257 + C2529 * C49308 + C2528 * C49321 +
             C2893 * C49328) *
                C49130 +
            (C31743 + C31742 + C31741 + C31740) * C31477) *
               C49287) *
              C48997 * C510 +
          (((C31744 + C31745 + C31746 + C31747) * C31477 +
            (C2528 * C49328 + C2529 * C49321 + C2530 * C49308 +
             (C113 * C935 + C951 + C951 + C49025 * C945) * C49257) *
                C49130) *
               C49287 -
           ((C31747 + C31746 + C31745 + C31744) * C49130 +
            (C167 * C49257 + C166 * C49308 + C165 * C49321 + C164 * C49328) *
                C31477) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C23805 +
             C164 * C48938) *
                C49330 +
            (C34458 + C34459) * C49327 + (C34460 + C34461) * C49318 +
            (C34462 + C34463) * C49272) *
               C782 -
           ((C18108 * C48938 + C18107 * C23805) * C49272 +
            (C34463 + C34462) * C49318 + (C34461 + C34460) * C49327 +
            (C34459 + C34458) * C49330) *
               C49287) *
              C48997 * C510 +
          (((C34464 + C34465) * C49330 + (C34466 + C34467) * C49327 +
            (C34468 + C34469) * C49318 +
            (C18108 * C23805 +
             (C113 * C3737 + C3752 + C3752 + C49025 * C3743) * C48938) *
                C49272) *
               C49287 -
           ((C34469 + C34468) * C49272 + (C34467 + C34466) * C49318 +
            (C34465 + C34464) * C49327 +
            (C165 * C48938 + C164 * C23805) * C49330) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[160] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
              C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
              C49290 * C588) *
                 C23805 +
             (C1125 + C1126 + C1127) * C48938) *
                C31477 +
            ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
               C782 -
           (((C16984 + C16983 + C16982) * C48938 +
             (C16981 + C16980 + C16979) * C23805) *
                C49130 +
            (C33024 * C48938 + (C16978 + C16977 + C16976) * C23805) * C31477) *
               C49287) *
              C250 +
          ((((C17420 + C17421 + C17422) * C23805 +
             (C32826 + C32825 + C32824) * C48938) *
                C31477 +
            ((C17423 + C17424 + C17425) * C23805 +
             (C1067 * C2377 + C16785 + C16785 + C49322 * C2389 + C1069 * C2378 +
              C16786 + C16786 + C49310 * C2390 + C1071 * C10206 + C16787 +
              C16787 + C49290 * C10208) *
                 C48938) *
                C49130) *
               C49287 -
           (((C32824 + C32825 + C32826) * C48938 +
             (C17422 + C17421 + C17420) * C23805) *
                C49130 +
            ((C1333 + C1334 + C1335) * C48938 +
             (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
              C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
              C49322 * C270) *
                 C23805) *
                C31477) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
             C164 * C49321 + C165 * C49308 + C166 * C49257) *
                C31477 +
            (C31740 + C31741 + C31742 + C31743) * C49130) *
               C782 -
           ((C2530 * C49257 + C2529 * C49308 + C2528 * C49321 +
             C2893 * C49328) *
                C49130 +
            (C31743 + C31742 + C31741 + C31740) * C31477) *
               C49287) *
              C250 +
          (((C32106 + C32107 + C32108 + C32109) * C31477 +
            (C3331 * C49328 + C2701 * C49321 + C2700 * C49308 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49257) *
                C49130) *
               C49287 -
           ((C32109 + C32108 + C32107 + C32106) * C49130 +
            (C296 * C49257 + C297 * C49308 + C298 * C49321 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49328) *
                C31477) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C23805 +
             C164 * C48938) *
                C49330 +
            (C34458 + C34459) * C49327 + (C34460 + C34461) * C49318 +
            (C34462 + C34463) * C49272) *
               C782 -
           ((C18108 * C48938 + C18107 * C23805) * C49272 +
            (C34463 + C34462) * C49318 + (C34461 + C34460) * C49327 +
            (C34459 + C34458) * C49330) *
               C49287) *
              C250 +
          (((C34828 + C34829) * C49330 + (C34830 + C34831) * C49327 +
            (C34832 + C34833) * C49318 +
            (C18354 * C23805 +
             (C113 * C17997 + C18002 + C18002 + C49025 * C17999) * C48938) *
                C49272) *
               C49287 -
           ((C34833 + C34832) * C49272 + (C34831 + C34830) * C49318 +
            (C34829 + C34828) * C49327 +
            (C298 * C48938 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C23805) *
                C49330) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[161] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C23805 +
            (C1125 + C1126 + C1127) * C48938) *
               C31477 +
           ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
              C928 -
          (((C16984 + C16983 + C16982) * C48938 +
            (C16981 + C16980 + C16979) * C23805) *
               C49130 +
           (C33024 * C48938 + (C16978 + C16977 + C16976) * C23805) * C31477) *
              C929 +
          ((C17838 * C23805 + (C16982 + C16983 + C16984) * C48938) * C31477 +
           ((C17848 + C17847 + C17846) * C23805 +
            (C1067 * C2850 + C16955 + C16955 + C49322 * C2858 + C1069 * C3306 +
             C16956 + C16956 + C49310 * C3312 + C1071 * C10362 + C16957 +
             C16957 + C49290 * C10366) *
                C48938) *
               C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
            C164 * C49321 + C165 * C49308 + C166 * C49257) *
               C31477 +
           (C31740 + C31741 + C31742 + C31743) * C49130) *
              C928 -
          ((C32468 + C32469 + C32470 + C32471) * C49130 +
           (C31743 + C31742 + C31741 + C31740) * C31477) *
              C929 +
          ((C32471 + C32470 + C32469 + C32468) * C31477 +
           (C3756 * C49328 + C2895 * C49321 + C2894 * C49308 +
            (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C49257) *
               C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C23805 +
            C164 * C48938) *
               C49330 +
           (C34458 + C34459) * C49327 + C35192 * C49318 + C35193 * C49272) *
              C928 -
          ((C35194 + C35195) * C49272 + (C34463 + C34462) * C49318 +
           (C34461 + C34460) * C49327 + (C34459 + C34458) * C49330) *
              C929 +
          (C35192 * C49330 + C35193 * C49327 + (C35195 + C35194) * C49318 +
           (C18591 * C23805 +
            (C113 * C18085 + C18102 + C18102 + C49025 * C18089) * C48938) *
               C49272) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[162] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C48933 +
            C164 * C48941 + C165 * C26788) *
               C49126 +
           (C2892 * C48933 + C426 * C48941 + C425 * C26788) * C49133 +
           (C2893 * C48933 + C2528 * C48941 + C2529 * C26788) * C36909) *
              C49014 * C48997 * C110 -
          ((C2530 * C26788 + C2529 * C48941 + C2528 * C48933) * C36909 +
           (C424 * C26788 + C425 * C48941 + C426 * C48933) * C49133 +
           (C166 * C26788 + C165 * C48941 + C164 * C48933) * C49126) *
              C49014 * C48997 * C111 +
          ((C165 * C48933 + C166 * C48941 + C167 * C26788) * C49126 +
           (C425 * C48933 + C424 * C48941 + C423 * C26788) * C49133 +
           (C2529 * C48933 + C2530 * C48941 +
            (C113 * C935 + C951 + C951 + C49025 * C945) * C26788) *
               C36909) *
              C49014 * C48997 * C112)) /
        (p * q * std::sqrt(p + q));
    d2ee[163] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C48933 +
             C164 * C48941 + C165 * C26788) *
                C49126 +
            (C2892 * C48933 + C426 * C48941 + C425 * C26788) * C49133 +
            (C2893 * C48933 + C2528 * C48941 + C2529 * C26788) * C36909) *
               C49014 * C250 -
           ((C2700 * C26788 + C2701 * C48941 + C3331 * C48933) * C36909 +
            (C2702 * C26788 + C2703 * C48941 + C3330 * C48933) * C49133 +
            (C297 * C26788 + C298 * C48941 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C48933) *
                C49126) *
               C49014 * C49285) *
              C252 +
          (((C298 * C48933 + C297 * C48941 + C296 * C26788) * C49126 +
            (C2703 * C48933 + C2702 * C48941 + C5234 * C26788) * C49133 +
            (C2701 * C48933 + C2700 * C48941 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C26788) *
                C36909) *
               C49014 * C49285 -
           ((C2530 * C26788 + C2529 * C48941 + C2528 * C48933) * C36909 +
            (C424 * C26788 + C425 * C48941 + C426 * C48933) * C49133 +
            (C166 * C26788 + C165 * C48941 + C164 * C48933) * C49126) *
               C49014 * C250) *
              C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[164] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C48933 +
             C164 * C48941 + C165 * C26788) *
                C49126 +
            (C37203 + C37204 + C37205) * C49133 +
            (C37206 + C37207 + C37208) * C36909) *
               C380 -
           ((C2894 * C26788 + C2895 * C48941 + C3756 * C48933) * C36909 +
            (C37208 + C37207 + C37206) * C49133 +
            (C37205 + C37204 + C37203) * C49126) *
               C49287) *
              C48997 * C252 +
          (((C37209 + C37210 + C37211) * C49126 +
            (C37212 + C37213 + C37214) * C49133 +
            (C2895 * C48933 + C2894 * C48941 +
             (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C26788) *
                C36909) *
               C49287 -
           ((C37214 + C37213 + C37212) * C36909 +
            (C37211 + C37210 + C37209) * C49133 +
            (C166 * C26788 + C165 * C48941 + C164 * C48933) * C49126) *
               C380) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[165] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C48933 +
             C164 * C48941 + C165 * C26788) *
                C49126 +
            (C37203 + C37204 + C37205) * C49133 +
            (C37206 + C37207 + C37208) * C36909) *
               C49014 * C508 -
           ((C2700 * C26788 + C2701 * C48941 + C3331 * C48933) * C36909 +
            (C2702 * C26788 + C2703 * C48941 + C3330 * C48933) * C49133 +
            (C297 * C26788 + C298 * C48941 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C48933) *
                C49126) *
               C49014 * C49285) *
              C510 +
          (((C298 * C48933 + C297 * C48941 + C296 * C26788) * C49126 +
            (C2703 * C48933 + C2702 * C48941 + C5234 * C26788) * C49133 +
            (C2701 * C48933 + C2700 * C48941 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C26788) *
                C36909) *
               C49014 * C49285 -
           ((C37214 + C37213 + C37212) * C36909 +
            (C37211 + C37210 + C37209) * C49133 +
            (C166 * C26788 + C165 * C48941 + C164 * C48933) * C49126) *
               C49014 * C508) *
              C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[166] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C48933 +
            C164 * C48941 + C165 * C26788) *
               C49126 +
           (C37203 + C37204 + C37205) * C49133 +
           (C37206 + C37207 + C37208) * C36909) *
              C49014 * C574 -
          ((C2700 * C26788 + C2701 * C48941 + C3331 * C48933) * C36909 +
           (C2702 * C26788 + C2703 * C48941 + C3330 * C48933) * C49133 +
           (C297 * C26788 + C298 * C48941 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C48933) *
               C49126) *
              C49014 * C575 +
          (((C113 * C578 + C594 + C594 + C49025 * C588) * C48933 +
            (C113 * C579 + C595 + C595 + C49025 * C589) * C48941 +
            (C113 * C580 + C596 + C596 + C49025 * C590) * C26788) *
               C49126 +
           ((C113 * C1483 + C3154 + C3154 + C49025 * C1491) * C48933 +
            (C113 * C1482 + C3155 + C3155 + C49025 * C1490) * C48941 +
            (C113 * C1481 + C3156 + C3156 + C49025 * C1489) * C26788) *
               C49133 +
           ((C113 * C2376 + C3157 + C3157 + C49025 * C2388) * C48933 +
            (C113 * C2378 + C3158 + C3158 + C49025 * C2390) * C48941 +
            (C113 * C2380 + C3159 + C3159 + C49025 * C2392) * C26788) *
               C36909) *
              C49014 * C576) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[167] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C48933 +
             C164 * C48941 + C165 * C26788) *
                C49126 +
            (C37203 + C37204 + C37205) * C49133 +
            (C37206 + C37207 + C37208) * C36909) *
               C380 -
           ((C2894 * C26788 + C2895 * C48941 + C3756 * C48933) * C36909 +
            (C37208 + C37207 + C37206) * C49133 +
            (C37205 + C37204 + C37203) * C49126) *
               C49287) *
              C508 +
          (((C37617 + C37618 + C37619) * C49126 +
            (C37620 + C37621 + C37622) * C49133 +
            (C18353 * C48933 + C20489 * C48941 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C26788) *
                C36909) *
               C49287 -
           ((C37622 + C37621 + C37620) * C36909 +
            (C37619 + C37618 + C37617) * C49133 +
            (C297 * C26788 + C298 * C48941 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C48933) *
                C49126) *
               C380) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[168] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C48933 +
             C164 * C48941 + C165 * C26788) *
                C49126 +
            (C37203 + C37204 + C37205) * C49133 +
            (C37206 + C37207 + C37208) * C36909) *
               C782 -
           ((C2894 * C26788 + C2895 * C48941 + C3756 * C48933) * C36909 +
            (C37208 + C37207 + C37206) * C49133 +
            (C37205 + C37204 + C37203) * C49126) *
               C49287) *
              C48997 * C510 +
          (((C37209 + C37210 + C37211) * C49126 +
            (C37212 + C37213 + C37214) * C49133 +
            (C2895 * C48933 + C2894 * C48941 +
             (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C26788) *
                C36909) *
               C49287 -
           ((C37214 + C37213 + C37212) * C36909 +
            (C37211 + C37210 + C37209) * C49133 +
            (C166 * C26788 + C165 * C48941 + C164 * C48933) * C49126) *
               C782) *
              C48997 * C49283)) /
        (p * q * std::sqrt(p + q));
    d2ee[169] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C48933 +
             C164 * C48941 + C165 * C26788) *
                C49126 +
            (C37203 + C37204 + C37205) * C49133 +
            (C37206 + C37207 + C37208) * C36909) *
               C782 -
           ((C2894 * C26788 + C2895 * C48941 + C3756 * C48933) * C36909 +
            (C37208 + C37207 + C37206) * C49133 +
            (C37205 + C37204 + C37203) * C49126) *
               C49287) *
              C250 +
          (((C37617 + C37618 + C37619) * C49126 +
            (C37620 + C37621 + C37622) * C49133 +
            (C18353 * C48933 + C20489 * C48941 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C26788) *
                C36909) *
               C49287 -
           ((C37622 + C37621 + C37620) * C36909 +
            (C37619 + C37618 + C37617) * C49133 +
            (C297 * C26788 + C298 * C48941 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C48933) *
                C49126) *
               C782) *
              C49285) *
         C48963) /
        (p * q * std::sqrt(p + q));
    d2ee[170] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C113 * C115 + C137 + C137 + C49025 * C129) * C48933 +
                     C164 * C48941 + C165 * C26788) *
                        C49126 +
                    (C37203 + C37204 + C37205) * C49133 + C38029 * C36909) *
                       C928 -
                   ((C38026 + C38027 + C38028) * C36909 +
                    (C37208 + C37207 + C37206) * C49133 +
                    (C37205 + C37204 + C37203) * C49126) *
                       C929 +
                   (C38029 * C49126 + (C38028 + C38027 + C38026) * C49133 +
                    (C18107 * C48933 + C18108 * C48941 +
                     (C113 * C3737 + C3752 + C3752 + C49025 * C3743) * C26788) *
                        C36909) *
                       C930) *
                  C48997 * C48963) /
                 (p * q * std::sqrt(p + q));
    d2ee[171] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
            C164 * C49321 + C165 * C49308 + C166 * C49257) *
               C31477 +
           (C2892 * C49328 + C426 * C49321 + C425 * C49308 + C424 * C49257) *
               C49130) *
              C49014 * C48997 * C110 -
          ((C423 * C49257 + C424 * C49308 + C425 * C49321 + C426 * C49328) *
               C49130 +
           (C167 * C49257 + C166 * C49308 + C165 * C49321 + C164 * C49328) *
               C31477) *
              C49014 * C48997 * C111 +
          ((C165 * C49328 + C166 * C49321 + C167 * C49308 + C168 * C49257) *
               C31477 +
           (C425 * C49328 + C424 * C49321 + C423 * C49308 +
            (C113 * C387 + C414 + C414 + C49025 * C399) * C49257) *
               C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C23805 +
            (C1125 + C1126 + C1127) * C48938) *
               C31477 +
           ((C16976 + C16977 + C16978) * C23805 +
            (C1535 + C1534 + C1533) * C48938) *
               C49130) *
              C49014 * C48997 * C110 -
          (((C1530 + C1531 + C1532) * C48938 +
            (C1533 + C1534 + C1535) * C23805) *
               C49130 +
           ((C1130 + C1129 + C1128) * C48938 +
            (C1127 + C1126 + C1125) * C23805) *
               C31477) *
              C49014 * C48997 * C111 +
          ((C1135 * C23805 + (C1133 + C1132 + C1131) * C48938) * C31477 +
           ((C1532 + C1531 + C1530) * C23805 +
            (C1067 * C383 + C1515 + C1515 + C49322 * C395 + C1069 * C683 +
             C1516 + C1516 + C49310 * C693 + C1071 * C1484 + C1517 + C1517 +
             C49290 * C1492) *
                C48938) *
               C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[172] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
             C164 * C49321 + C165 * C49308 + C166 * C49257) *
                C31477 +
            (C2892 * C49328 + C426 * C49321 + C425 * C49308 + C424 * C49257) *
                C49130) *
               C49014 * C250 -
           ((C5234 * C49257 + C2702 * C49308 + C2703 * C49321 +
             C3330 * C49328) *
                C49130 +
            (C296 * C49257 + C297 * C49308 + C298 * C49321 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49328) *
                C31477) *
               C49014 * C49285) *
              C252 +
          (((C298 * C49328 + C297 * C49321 + C296 * C49308 + C295 * C49257) *
                C31477 +
            (C2703 * C49328 + C2702 * C49321 + C5234 * C49308 +
             (C113 * C684 + C700 + C700 + C49025 * C694) * C49257) *
                C49130) *
               C49014 * C49285 -
           ((C423 * C49257 + C424 * C49308 + C425 * C49321 + C426 * C49328) *
                C49130 +
            (C167 * C49257 + C166 * C49308 + C165 * C49321 + C164 * C49328) *
                C31477) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
              C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
              C49290 * C588) *
                 C23805 +
             (C1125 + C1126 + C1127) * C48938) *
                C31477 +
            ((C16976 + C16977 + C16978) * C23805 +
             (C1535 + C1534 + C1533) * C48938) *
                C49130) *
               C49014 * C250 -
           (((C32824 + C32825 + C32826) * C48938 +
             (C17422 + C17421 + C17420) * C23805) *
                C49130 +
            ((C1333 + C1334 + C1335) * C48938 +
             (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
              C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
              C49322 * C270) *
                 C23805) *
                C31477) *
               C49014 * C49285) *
              C252 +
          ((((C1335 + C1334 + C1333) * C23805 +
             (C1332 + C1331 + C1330) * C48938) *
                C31477 +
            ((C32826 + C32825 + C32824) * C23805 +
             (C1067 * C682 + C1971 + C1971 + C49322 * C692 + C1069 * C1481 +
              C1972 + C1972 + C49310 * C1489 + C1071 * C1957 + C1973 + C1973 +
              C49290 * C1963) *
                 C48938) *
                C49130) *
               C49014 * C49285 -
           (((C1530 + C1531 + C1532) * C48938 +
             (C1533 + C1534 + C1535) * C23805) *
                C49130 +
            ((C1130 + C1129 + C1128) * C48938 +
             (C1127 + C1126 + C1125) * C23805) *
                C31477) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[173] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
             C164 * C49321 + C165 * C49308 + C166 * C49257) *
                C31477 +
            (C31740 + C31741 + C31742 + C31743) * C49130) *
               C380 -
           ((C2530 * C49257 + C2529 * C49308 + C2528 * C49321 +
             C2893 * C49328) *
                C49130 +
            (C31743 + C31742 + C31741 + C31740) * C31477) *
               C49287) *
              C48997 * C252 +
          (((C31744 + C31745 + C31746 + C31747) * C31477 +
            (C2528 * C49328 + C2529 * C49321 + C2530 * C49308 +
             (C113 * C935 + C951 + C951 + C49025 * C945) * C49257) *
                C49130) *
               C49287 -
           ((C31747 + C31746 + C31745 + C31744) * C49130 +
            (C167 * C49257 + C166 * C49308 + C165 * C49321 + C164 * C49328) *
                C31477) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
              C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
              C49290 * C588) *
                 C23805 +
             (C1125 + C1126 + C1127) * C48938) *
                C31477 +
            ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
               C380 -
           (((C16984 + C16983 + C16982) * C48938 +
             (C16981 + C16980 + C16979) * C23805) *
                C49130 +
            (C33024 * C48938 + (C16978 + C16977 + C16976) * C23805) * C31477) *
               C49287) *
              C48997 * C252 +
          (((C33023 * C23805 + (C1532 + C1531 + C1530) * C48938) * C31477 +
            ((C16982 + C16983 + C16984) * C23805 +
             (C1067 * C933 + C2400 + C2400 + C49322 * C943 + C1069 * C2379 +
              C2401 + C2401 + C49310 * C2391 + C1071 * C2380 + C2402 + C2402 +
              C49290 * C2392) *
                 C48938) *
                C49130) *
               C49287 -
           (((C1530 + C1531 + C1532) * C48938 + C33024 * C23805) * C49130 +
            ((C1130 + C1129 + C1128) * C48938 +
             (C1127 + C1126 + C1125) * C23805) *
                C31477) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[174] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
             C164 * C49321 + C165 * C49308 + C166 * C49257) *
                C31477 +
            (C31740 + C31741 + C31742 + C31743) * C49130) *
               C49014 * C508 -
           ((C5234 * C49257 + C2702 * C49308 + C2703 * C49321 +
             C3330 * C49328) *
                C49130 +
            (C296 * C49257 + C297 * C49308 + C298 * C49321 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49328) *
                C31477) *
               C49014 * C49285) *
              C510 +
          (((C298 * C49328 + C297 * C49321 + C296 * C49308 + C295 * C49257) *
                C31477 +
            (C2703 * C49328 + C2702 * C49321 + C5234 * C49308 +
             (C113 * C684 + C700 + C700 + C49025 * C694) * C49257) *
                C49130) *
               C49014 * C49285 -
           ((C31747 + C31746 + C31745 + C31744) * C49130 +
            (C167 * C49257 + C166 * C49308 + C165 * C49321 + C164 * C49328) *
                C31477) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
              C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
              C49290 * C588) *
                 C23805 +
             (C1125 + C1126 + C1127) * C48938) *
                C31477 +
            ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
               C49014 * C508 -
           (((C32824 + C32825 + C32826) * C48938 +
             (C17422 + C17421 + C17420) * C23805) *
                C49130 +
            ((C1333 + C1334 + C1335) * C48938 +
             (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
              C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
              C49322 * C270) *
                 C23805) *
                C31477) *
               C49014 * C49285) *
              C510 +
          ((((C1335 + C1334 + C1333) * C23805 +
             (C1332 + C1331 + C1330) * C48938) *
                C31477 +
            ((C32826 + C32825 + C32824) * C23805 +
             (C1067 * C682 + C1971 + C1971 + C49322 * C692 + C1069 * C1481 +
              C1972 + C1972 + C49310 * C1489 + C1071 * C1957 + C1973 + C1973 +
              C49290 * C1963) *
                 C48938) *
                C49130) *
               C49014 * C49285 -
           (((C1530 + C1531 + C1532) * C48938 + C33024 * C23805) * C49130 +
            ((C1130 + C1129 + C1128) * C48938 +
             (C1127 + C1126 + C1125) * C23805) *
                C31477) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[175] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
            C164 * C49321 + C165 * C49308 + C166 * C49257) *
               C31477 +
           (C31740 + C31741 + C31742 + C31743) * C49130) *
              C49014 * C574 -
          ((C5234 * C49257 + C2702 * C49308 + C2703 * C49321 + C3330 * C49328) *
               C49130 +
           (C296 * C49257 + C297 * C49308 + C298 * C49321 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C49328) *
               C31477) *
              C49014 * C575 +
          (((C113 * C578 + C594 + C594 + C49025 * C588) * C49328 +
            (C113 * C579 + C595 + C595 + C49025 * C589) * C49321 +
            (C113 * C580 + C596 + C596 + C49025 * C590) * C49308 +
            (C113 * C581 + C597 + C597 + C49025 * C591) * C49257) *
               C31477 +
           ((C113 * C1483 + C3154 + C3154 + C49025 * C1491) * C49328 +
            (C113 * C1482 + C3155 + C3155 + C49025 * C1490) * C49321 +
            (C113 * C1481 + C3156 + C3156 + C49025 * C1489) * C49308 +
            (C113 * C1484 + C5601 + C5601 + C49025 * C1492) * C49257) *
               C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C23805 +
            (C1125 + C1126 + C1127) * C48938) *
               C31477 +
           ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
              C49014 * C574 -
          (((C32824 + C32825 + C32826) * C48938 +
            (C17422 + C17421 + C17420) * C23805) *
               C49130 +
           ((C1333 + C1334 + C1335) * C48938 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C23805) *
               C31477) *
              C49014 * C575 +
          (((C1067 * C578 + C1801 + C1801 + C49322 * C588 + C1069 * C1283 +
             C1802 + C1802 + C49310 * C1291 + C1071 * C1791 + C1803 + C1803 +
             C49290 * C1797) *
                C23805 +
            (C1067 * C579 + C1804 + C1804 + C49322 * C589 + C1069 * C1282 +
             C1805 + C1805 + C49310 * C1290 + C1071 * C1792 + C1806 + C1806 +
             C49290 * C1798) *
                C48938) *
               C31477 +
           ((C1067 * C1483 + C17241 + C17241 + C49322 * C1491 + C1069 * C1955 +
             C17242 + C17242 + C49310 * C1961 + C1071 * C9455 + C17243 +
             C17243 + C49290 * C9459) *
                C23805 +
            (C1067 * C1482 + C33365 + C33365 + C49322 * C1490 + C1069 * C1956 +
             C33366 + C33366 + C49310 * C1962 + C1071 * C9456 + C33367 +
             C33367 + C49290 * C9460) *
                C48938) *
               C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[176] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
             C164 * C49321 + C165 * C49308 + C166 * C49257) *
                C31477 +
            (C31740 + C31741 + C31742 + C31743) * C49130) *
               C380 -
           ((C2530 * C49257 + C2529 * C49308 + C2528 * C49321 +
             C2893 * C49328) *
                C49130 +
            (C31743 + C31742 + C31741 + C31740) * C31477) *
               C49287) *
              C508 +
          (((C32106 + C32107 + C32108 + C32109) * C31477 +
            (C3331 * C49328 + C2701 * C49321 + C2700 * C49308 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49257) *
                C49130) *
               C49287 -
           ((C32109 + C32108 + C32107 + C32106) * C49130 +
            (C296 * C49257 + C297 * C49308 + C298 * C49321 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49328) *
                C31477) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
              C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
              C49290 * C588) *
                 C23805 +
             (C1125 + C1126 + C1127) * C48938) *
                C31477 +
            ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
               C380 -
           (((C16984 + C16983 + C16982) * C48938 +
             (C16981 + C16980 + C16979) * C23805) *
                C49130 +
            (C33024 * C48938 + (C16978 + C16977 + C16976) * C23805) * C31477) *
               C49287) *
              C508 +
          ((((C17420 + C17421 + C17422) * C23805 +
             (C32826 + C32825 + C32824) * C48938) *
                C31477 +
            ((C17423 + C17424 + C17425) * C23805 +
             (C1067 * C2377 + C16785 + C16785 + C49322 * C2389 + C1069 * C2378 +
              C16786 + C16786 + C49310 * C2390 + C1071 * C10206 + C16787 +
              C16787 + C49290 * C10208) *
                 C48938) *
                C49130) *
               C49287 -
           (((C32824 + C32825 + C32826) * C48938 +
             (C17422 + C17421 + C17420) * C23805) *
                C49130 +
            ((C1333 + C1334 + C1335) * C48938 +
             (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
              C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
              C49322 * C270) *
                 C23805) *
                C31477) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[177] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
             C164 * C49321 + C165 * C49308 + C166 * C49257) *
                C31477 +
            (C31740 + C31741 + C31742 + C31743) * C49130) *
               C782 -
           ((C2530 * C49257 + C2529 * C49308 + C2528 * C49321 +
             C2893 * C49328) *
                C49130 +
            (C31743 + C31742 + C31741 + C31740) * C31477) *
               C49287) *
              C48997 * C510 +
          (((C31744 + C31745 + C31746 + C31747) * C31477 +
            (C2528 * C49328 + C2529 * C49321 + C2530 * C49308 +
             (C113 * C935 + C951 + C951 + C49025 * C945) * C49257) *
                C49130) *
               C49287 -
           ((C31747 + C31746 + C31745 + C31744) * C49130 +
            (C167 * C49257 + C166 * C49308 + C165 * C49321 + C164 * C49328) *
                C31477) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
              C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
              C49290 * C588) *
                 C23805 +
             (C1125 + C1126 + C1127) * C48938) *
                C31477 +
            ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
               C782 -
           (((C16984 + C16983 + C16982) * C48938 +
             (C16981 + C16980 + C16979) * C23805) *
                C49130 +
            (C33024 * C48938 + (C16978 + C16977 + C16976) * C23805) * C31477) *
               C49287) *
              C48997 * C510 +
          (((C33023 * C23805 + (C1532 + C1531 + C1530) * C48938) * C31477 +
            ((C16982 + C16983 + C16984) * C23805 +
             (C1067 * C933 + C2400 + C2400 + C49322 * C943 + C1069 * C2379 +
              C2401 + C2401 + C49310 * C2391 + C1071 * C2380 + C2402 + C2402 +
              C49290 * C2392) *
                 C48938) *
                C49130) *
               C49287 -
           (((C1530 + C1531 + C1532) * C48938 + C33024 * C23805) * C49130 +
            ((C1130 + C1129 + C1128) * C48938 +
             (C1127 + C1126 + C1125) * C23805) *
                C31477) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[178] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
             C164 * C49321 + C165 * C49308 + C166 * C49257) *
                C31477 +
            (C31740 + C31741 + C31742 + C31743) * C49130) *
               C782 -
           ((C2530 * C49257 + C2529 * C49308 + C2528 * C49321 +
             C2893 * C49328) *
                C49130 +
            (C31743 + C31742 + C31741 + C31740) * C31477) *
               C49287) *
              C250 +
          (((C32106 + C32107 + C32108 + C32109) * C31477 +
            (C3331 * C49328 + C2701 * C49321 + C2700 * C49308 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49257) *
                C49130) *
               C49287 -
           ((C32109 + C32108 + C32107 + C32106) * C49130 +
            (C296 * C49257 + C297 * C49308 + C298 * C49321 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C49328) *
                C31477) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
              C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
              C49290 * C588) *
                 C23805 +
             (C1125 + C1126 + C1127) * C48938) *
                C31477 +
            ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
               C782 -
           (((C16984 + C16983 + C16982) * C48938 +
             (C16981 + C16980 + C16979) * C23805) *
                C49130 +
            (C33024 * C48938 + (C16978 + C16977 + C16976) * C23805) * C31477) *
               C49287) *
              C250 +
          ((((C17420 + C17421 + C17422) * C23805 +
             (C32826 + C32825 + C32824) * C48938) *
                C31477 +
            ((C17423 + C17424 + C17425) * C23805 +
             (C1067 * C2377 + C16785 + C16785 + C49322 * C2389 + C1069 * C2378 +
              C16786 + C16786 + C49310 * C2390 + C1071 * C10206 + C16787 +
              C16787 + C49290 * C10208) *
                 C48938) *
                C49130) *
               C49287 -
           (((C32824 + C32825 + C32826) * C48938 +
             (C17422 + C17421 + C17420) * C23805) *
                C49130 +
            ((C1333 + C1334 + C1335) * C48938 +
             (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
              C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
              C49322 * C270) *
                 C23805) *
                C31477) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[179] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C49328 +
            C164 * C49321 + C165 * C49308 + C166 * C49257) *
               C31477 +
           (C31740 + C31741 + C31742 + C31743) * C49130) *
              C928 -
          ((C32468 + C32469 + C32470 + C32471) * C49130 +
           (C31743 + C31742 + C31741 + C31740) * C31477) *
              C929 +
          ((C32471 + C32470 + C32469 + C32468) * C31477 +
           (C3756 * C49328 + C2895 * C49321 + C2894 * C49308 +
            (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C49257) *
               C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C23805 +
            (C1125 + C1126 + C1127) * C48938) *
               C31477 +
           ((C16976 + C16977 + C16978) * C23805 + C33023 * C48938) * C49130) *
              C928 -
          (((C16984 + C16983 + C16982) * C48938 +
            (C16981 + C16980 + C16979) * C23805) *
               C49130 +
           (C33024 * C48938 + (C16978 + C16977 + C16976) * C23805) * C31477) *
              C929 +
          ((C17838 * C23805 + (C16982 + C16983 + C16984) * C48938) * C31477 +
           ((C17848 + C17847 + C17846) * C23805 +
            (C1067 * C2850 + C16955 + C16955 + C49322 * C2858 + C1069 * C3306 +
             C16956 + C16956 + C49310 * C3312 + C1071 * C10362 + C16957 +
             C16957 + C49290 * C10366) *
                C48938) *
               C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[180] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
            C3867 + C3867 + C49088 * C270) *
               C3857 +
           (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
              C49043 * C49014 * C48997 * C110 -
          ((C3916 + C3917) * C49257 + (C3915 + C3914) * C3859 +
           (C3913 + C3912) * C3858 + (C3911 + C3910) * C3857) *
              C49043 * C49014 * C48997 * C111 +
          (C3918 * C3857 + C3919 * C3858 + (C3917 + C3916) * C3859 +
           (C3861 * C120 + C3892 + C3892 + C49256 * C134 + C3863 * C259 +
            C3893 + C3893 + C49088 * C271) *
               C49257) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
            C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
            C11391 * C588 + C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
               C49235 +
           (C11452 + C11453 + C11454 + C11455) * C48938) *
              C49043 * C49014 * C48997 * C110 -
          ((C11456 + C11457 + C11458 + C11459) * C48938 +
           (C11455 + C11454 + C11453 + C11452) * C49235) *
              C49043 * C49014 * C48997 * C111 +
          ((C11459 + C11458 + C11457 + C11456) * C49235 +
           (C11395 * C118 + C11432 + C11432 + C11389 * C132 + C11397 * C255 +
            C11433 + C11433 + C11390 * C267 + C11399 * C581 + C11434 + C11434 +
            C11391 * C591 + C11401 * C1284 + C11435 + C11435 + C49265 * C1292) *
               C48938) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[181] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 +
                      C3863 * C258 + C3867 + C3867 + C49088 * C270) *
                         C3857 +
                     (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
                        C49043 * C49014 * C250 -
                    ((C4084 + C4085) * C49257 + (C4086 + C4087) * C3859 +
                     (C4088 + C4089) * C3858 +
                     (C3863 * C578 + C4068 + C4068 + C49088 * C588 +
                      C3861 * C258 + C4069 + C4069 + C49256 * C270) *
                         C3857) *
                        C49043 * C49014 * C49285) *
                       C252 +
                   (((C4089 + C4088) * C3857 + (C4087 + C4086) * C3858 +
                     (C4085 + C4084) * C3859 +
                     (C3861 * C254 + C4070 + C4070 + C49256 * C266 +
                      C3863 * C582 + C4071 + C4071 + C49088 * C592) *
                         C49257) *
                        C49043 * C49014 * C49285 -
                    ((C3916 + C3917) * C49257 + (C3915 + C3914) * C3859 +
                     (C3913 + C3912) * C3858 + (C3911 + C3910) * C3857) *
                        C49043 * C49014 * C250) *
                       C49283)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 +
                      C11397 * C258 + C11405 + C11405 + C11390 * C270 +
                      C11399 * C578 + C11406 + C11406 + C11391 * C588 +
                      C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
                         C49235 +
                     (C11452 + C11453 + C11454 + C11455) * C48938) *
                        C49043 * C49014 * C250 -
                    ((C11618 + C11619 + C11620 + C11621) * C48938 +
                     (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
                      C11399 * C1283 + C11603 + C11603 + C11391 * C1291 +
                      C11397 * C578 + C11604 + C11604 + C11390 * C588 +
                      C11395 * C258 + C11605 + C11605 + C11389 * C270) *
                         C49235) *
                        C49043 * C49014 * C49285) *
                       C252 +
                   (((C11621 + C11620 + C11619 + C11618) * C49235 +
                     (C11395 * C256 + C11606 + C11606 + C11389 * C268 +
                      C11397 * C580 + C11607 + C11607 + C11390 * C590 +
                      C11399 * C1281 + C11608 + C11608 + C11391 * C1289 +
                      C11401 * C1793 + C11609 + C11609 + C49265 * C1799) *
                         C48938) *
                        C49043 * C49014 * C49285 -
                    ((C11456 + C11457 + C11458 + C11459) * C48938 +
                     (C11455 + C11454 + C11453 + C11452) * C49235) *
                        C49043 * C49014 * C250) *
                       C49283)) /
                     (p * q * std::sqrt(p + q));
    d2ee[182] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 +
                      C3863 * C258 + C3867 + C3867 + C49088 * C270) *
                         C3857 +
                     (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
                        C49043 * C380 -
                    ((C4254 + C4255) * C49257 + (C4256 + C4257) * C3859 +
                     (C4258 + C4259) * C3858 +
                     (C3863 * C680 + C4238 + C4238 + C49088 * C690 +
                      C3861 * C386 + C4239 + C4239 + C49256 * C398) *
                         C3857) *
                        C49043 * C49287) *
                       C48997 * C252 +
                   (((C4259 + C4258) * C3857 + (C4257 + C4256) * C3858 +
                     (C4255 + C4254) * C3859 +
                     (C3861 * C382 + C4240 + C4240 + C49256 * C394 +
                      C3863 * C684 + C4241 + C4241 + C49088 * C694) *
                         C49257) *
                        C49043 * C49287 -
                    ((C3916 + C3917) * C49257 + (C3915 + C3914) * C3859 +
                     (C3913 + C3912) * C3858 + (C3911 + C3910) * C3857) *
                        C49043 * C380) *
                       C48997 * C49283)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 +
                      C11397 * C258 + C11405 + C11405 + C11390 * C270 +
                      C11399 * C578 + C11406 + C11406 + C11391 * C588 +
                      C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
                         C49235 +
                     (C11452 + C11453 + C11454 + C11455) * C48938) *
                        C49043 * C380 -
                    ((C11780 + C11781 + C11782 + C11783) * C48938 +
                     (C11401 * C1955 + C11764 + C11764 + C49265 * C1961 +
                      C11399 * C1483 + C11765 + C11765 + C11391 * C1491 +
                      C11397 * C680 + C11766 + C11766 + C11390 * C690 +
                      C11395 * C386 + C11767 + C11767 + C11389 * C398) *
                         C49235) *
                        C49043 * C49287) *
                       C48997 * C252 +
                   (((C11783 + C11782 + C11781 + C11780) * C49235 +
                     (C11395 * C384 + C11768 + C11768 + C11389 * C396 +
                      C11397 * C682 + C11769 + C11769 + C11390 * C692 +
                      C11399 * C1481 + C11770 + C11770 + C11391 * C1489 +
                      C11401 * C1957 + C11771 + C11771 + C49265 * C1963) *
                         C48938) *
                        C49043 * C49287 -
                    ((C11456 + C11457 + C11458 + C11459) * C48938 +
                     (C11455 + C11454 + C11453 + C11452) * C49235) *
                        C49043 * C380) *
                       C48997 * C49283)) /
                     (p * q * std::sqrt(p + q));
    d2ee[183] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 +
                      C3863 * C258 + C3867 + C3867 + C49088 * C270) *
                         C3857 +
                     (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
                        C49043 * C49014 * C508 -
                    ((C4084 + C4085) * C49257 + (C4086 + C4087) * C3859 +
                     (C4088 + C4089) * C3858 +
                     (C3863 * C578 + C4068 + C4068 + C49088 * C588 +
                      C3861 * C258 + C4069 + C4069 + C49256 * C270) *
                         C3857) *
                        C49043 * C49014 * C49285) *
                       C510 +
                   (((C4089 + C4088) * C3857 + (C4087 + C4086) * C3858 +
                     (C4085 + C4084) * C3859 +
                     (C3861 * C254 + C4070 + C4070 + C49256 * C266 +
                      C3863 * C582 + C4071 + C4071 + C49088 * C592) *
                         C49257) *
                        C49043 * C49014 * C49285 -
                    ((C3916 + C3917) * C49257 + (C3915 + C3914) * C3859 +
                     (C3913 + C3912) * C3858 + (C3911 + C3910) * C3857) *
                        C49043 * C49014 * C508) *
                       C49283)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 +
                      C11397 * C258 + C11405 + C11405 + C11390 * C270 +
                      C11399 * C578 + C11406 + C11406 + C11391 * C588 +
                      C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
                         C49235 +
                     (C11452 + C11453 + C11454 + C11455) * C48938) *
                        C49043 * C49014 * C508 -
                    ((C11618 + C11619 + C11620 + C11621) * C48938 +
                     (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
                      C11399 * C1283 + C11603 + C11603 + C11391 * C1291 +
                      C11397 * C578 + C11604 + C11604 + C11390 * C588 +
                      C11395 * C258 + C11605 + C11605 + C11389 * C270) *
                         C49235) *
                        C49043 * C49014 * C49285) *
                       C510 +
                   (((C11621 + C11620 + C11619 + C11618) * C49235 +
                     (C11395 * C256 + C11606 + C11606 + C11389 * C268 +
                      C11397 * C580 + C11607 + C11607 + C11390 * C590 +
                      C11399 * C1281 + C11608 + C11608 + C11391 * C1289 +
                      C11401 * C1793 + C11609 + C11609 + C49265 * C1799) *
                         C48938) *
                        C49043 * C49014 * C49285 -
                    ((C11456 + C11457 + C11458 + C11459) * C48938 +
                     (C11455 + C11454 + C11453 + C11452) * C49235) *
                        C49043 * C49014 * C508) *
                       C49283)) /
                     (p * q * std::sqrt(p + q));
    d2ee[184] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
            C3867 + C3867 + C49088 * C270) *
               C3857 +
           (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
              C49043 * C49014 * C574 -
          ((C4084 + C4085) * C49257 + (C4086 + C4087) * C3859 +
           (C4088 + C4089) * C3858 +
           (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
            C4069 + C4069 + C49256 * C270) *
               C3857) *
              C49043 * C49014 * C575 +
          ((C3861 * C578 + C4488 + C4488 + C49256 * C588 + C3863 * C1283 +
            C4489 + C4489 + C49088 * C1291) *
               C3857 +
           (C3861 * C579 + C4490 + C4490 + C49256 * C589 + C3863 * C1282 +
            C4491 + C4491 + C49088 * C1290) *
               C3858 +
           (C3861 * C580 + C4492 + C4492 + C49256 * C590 + C3863 * C1281 +
            C4493 + C4493 + C49088 * C1289) *
               C3859 +
           (C3861 * C581 + C4494 + C4494 + C49256 * C591 + C3863 * C1284 +
            C4495 + C4495 + C49088 * C1292) *
               C49257) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
            C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
            C11391 * C588 + C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
               C49235 +
           (C11452 + C11453 + C11454 + C11455) * C48938) *
              C49043 * C49014 * C574 -
          ((C11618 + C11619 + C11620 + C11621) * C48938 +
           (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 + C11399 * C1283 +
            C11603 + C11603 + C11391 * C1291 + C11397 * C578 + C11604 + C11604 +
            C11390 * C588 + C11395 * C258 + C11605 + C11605 + C11389 * C270) *
               C49235) *
              C49043 * C49014 * C575 +
          ((C11395 * C578 + C12012 + C12012 + C11389 * C588 + C11397 * C1283 +
            C12013 + C12013 + C11390 * C1291 + C11399 * C1791 + C12014 +
            C12014 + C11391 * C1797 + C11401 * C9357 + C12015 + C12015 +
            C49265 * C9361) *
               C49235 +
           (C11395 * C579 + C12016 + C12016 + C11389 * C589 + C11397 * C1282 +
            C12017 + C12017 + C11390 * C1290 + C11399 * C1792 + C12018 +
            C12018 + C11391 * C1798 + C11401 * C9358 + C12019 + C12019 +
            C49265 * C9362) *
               C48938) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[185] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 +
                      C3863 * C258 + C3867 + C3867 + C49088 * C270) *
                         C3857 +
                     (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
                        C49043 * C380 -
                    ((C4254 + C4255) * C49257 + (C4256 + C4257) * C3859 +
                     (C4258 + C4259) * C3858 +
                     (C3863 * C680 + C4238 + C4238 + C49088 * C690 +
                      C3861 * C386 + C4239 + C4239 + C49256 * C398) *
                         C3857) *
                        C49043 * C49287) *
                       C508 +
                   (((C3861 * C680 + C4626 + C4626 + C49256 * C690 +
                      C3863 * C1483 + C4627 + C4627 + C49088 * C1491) *
                         C3857 +
                     (C3861 * C681 + C4628 + C4628 + C49256 * C691 +
                      C3863 * C1482 + C4629 + C4629 + C49088 * C1490) *
                         C3858 +
                     (C3861 * C682 + C4630 + C4630 + C49256 * C692 +
                      C3863 * C1481 + C4631 + C4631 + C49088 * C1489) *
                         C3859 +
                     (C3861 * C683 + C4632 + C4632 + C49256 * C693 +
                      C3863 * C1484 + C4633 + C4633 + C49088 * C1492) *
                         C49257) *
                        C49043 * C49287 -
                    ((C4084 + C4085) * C49257 + (C4086 + C4087) * C3859 +
                     (C4088 + C4089) * C3858 +
                     (C3863 * C578 + C4068 + C4068 + C49088 * C588 +
                      C3861 * C258 + C4069 + C4069 + C49256 * C270) *
                         C3857) *
                        C49043 * C380) *
                       C49285) *
                  C48963) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 +
                      C11397 * C258 + C11405 + C11405 + C11390 * C270 +
                      C11399 * C578 + C11406 + C11406 + C11391 * C588 +
                      C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
                         C49235 +
                     (C11452 + C11453 + C11454 + C11455) * C48938) *
                        C49043 * C380 -
                    ((C11780 + C11781 + C11782 + C11783) * C48938 +
                     (C11401 * C1955 + C11764 + C11764 + C49265 * C1961 +
                      C11399 * C1483 + C11765 + C11765 + C11391 * C1491 +
                      C11397 * C680 + C11766 + C11766 + C11390 * C690 +
                      C11395 * C386 + C11767 + C11767 + C11389 * C398) *
                         C49235) *
                        C49043 * C49287) *
                       C508 +
                   (((C11395 * C680 + C12150 + C12150 + C11389 * C690 +
                      C11397 * C1483 + C12151 + C12151 + C11390 * C1491 +
                      C11399 * C1955 + C12152 + C12152 + C11391 * C1961 +
                      C11401 * C9455 + C12153 + C12153 + C49265 * C9459) *
                         C49235 +
                     (C11395 * C681 + C12154 + C12154 + C11389 * C691 +
                      C11397 * C1482 + C12155 + C12155 + C11390 * C1490 +
                      C11399 * C1956 + C12156 + C12156 + C11391 * C1962 +
                      C11401 * C9456 + C12157 + C12157 + C49265 * C9460) *
                         C48938) *
                        C49043 * C49287 -
                    ((C11618 + C11619 + C11620 + C11621) * C48938 +
                     (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
                      C11399 * C1283 + C11603 + C11603 + C11391 * C1291 +
                      C11397 * C578 + C11604 + C11604 + C11390 * C588 +
                      C11395 * C258 + C11605 + C11605 + C11389 * C270) *
                         C49235) *
                        C49043 * C380) *
                       C49285) *
                  C48963) /
                     (p * q * std::sqrt(p + q));
    d2ee[186] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 +
                      C3863 * C258 + C3867 + C3867 + C49088 * C270) *
                         C3857 +
                     (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
                        C49043 * C782 -
                    ((C4254 + C4255) * C49257 + (C4256 + C4257) * C3859 +
                     (C4258 + C4259) * C3858 +
                     (C3863 * C680 + C4238 + C4238 + C49088 * C690 +
                      C3861 * C386 + C4239 + C4239 + C49256 * C398) *
                         C3857) *
                        C49043 * C49287) *
                       C48997 * C510 +
                   (((C4259 + C4258) * C3857 + (C4257 + C4256) * C3858 +
                     (C4255 + C4254) * C3859 +
                     (C3861 * C382 + C4240 + C4240 + C49256 * C394 +
                      C3863 * C684 + C4241 + C4241 + C49088 * C694) *
                         C49257) *
                        C49043 * C49287 -
                    ((C3916 + C3917) * C49257 + (C3915 + C3914) * C3859 +
                     (C3913 + C3912) * C3858 + (C3911 + C3910) * C3857) *
                        C49043 * C782) *
                       C48997 * C49283)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 +
                      C11397 * C258 + C11405 + C11405 + C11390 * C270 +
                      C11399 * C578 + C11406 + C11406 + C11391 * C588 +
                      C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
                         C49235 +
                     (C11452 + C11453 + C11454 + C11455) * C48938) *
                        C49043 * C782 -
                    ((C11780 + C11781 + C11782 + C11783) * C48938 +
                     (C11401 * C1955 + C11764 + C11764 + C49265 * C1961 +
                      C11399 * C1483 + C11765 + C11765 + C11391 * C1491 +
                      C11397 * C680 + C11766 + C11766 + C11390 * C690 +
                      C11395 * C386 + C11767 + C11767 + C11389 * C398) *
                         C49235) *
                        C49043 * C49287) *
                       C48997 * C510 +
                   (((C11783 + C11782 + C11781 + C11780) * C49235 +
                     (C11395 * C384 + C11768 + C11768 + C11389 * C396 +
                      C11397 * C682 + C11769 + C11769 + C11390 * C692 +
                      C11399 * C1481 + C11770 + C11770 + C11391 * C1489 +
                      C11401 * C1957 + C11771 + C11771 + C49265 * C1963) *
                         C48938) *
                        C49043 * C49287 -
                    ((C11456 + C11457 + C11458 + C11459) * C48938 +
                     (C11455 + C11454 + C11453 + C11452) * C49235) *
                        C49043 * C782) *
                       C48997 * C49283)) /
                     (p * q * std::sqrt(p + q));
    d2ee[187] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 +
                      C3863 * C258 + C3867 + C3867 + C49088 * C270) *
                         C3857 +
                     (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
                        C49043 * C782 -
                    ((C4254 + C4255) * C49257 + (C4256 + C4257) * C3859 +
                     (C4258 + C4259) * C3858 +
                     (C3863 * C680 + C4238 + C4238 + C49088 * C690 +
                      C3861 * C386 + C4239 + C4239 + C49256 * C398) *
                         C3857) *
                        C49043 * C49287) *
                       C250 +
                   (((C3861 * C680 + C4626 + C4626 + C49256 * C690 +
                      C3863 * C1483 + C4627 + C4627 + C49088 * C1491) *
                         C3857 +
                     (C3861 * C681 + C4628 + C4628 + C49256 * C691 +
                      C3863 * C1482 + C4629 + C4629 + C49088 * C1490) *
                         C3858 +
                     (C3861 * C682 + C4630 + C4630 + C49256 * C692 +
                      C3863 * C1481 + C4631 + C4631 + C49088 * C1489) *
                         C3859 +
                     (C3861 * C683 + C4632 + C4632 + C49256 * C693 +
                      C3863 * C1484 + C4633 + C4633 + C49088 * C1492) *
                         C49257) *
                        C49043 * C49287 -
                    ((C4084 + C4085) * C49257 + (C4086 + C4087) * C3859 +
                     (C4088 + C4089) * C3858 +
                     (C3863 * C578 + C4068 + C4068 + C49088 * C588 +
                      C3861 * C258 + C4069 + C4069 + C49256 * C270) *
                         C3857) *
                        C49043 * C782) *
                       C49285) *
                  C48963) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 +
                      C11397 * C258 + C11405 + C11405 + C11390 * C270 +
                      C11399 * C578 + C11406 + C11406 + C11391 * C588 +
                      C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
                         C49235 +
                     (C11452 + C11453 + C11454 + C11455) * C48938) *
                        C49043 * C782 -
                    ((C11780 + C11781 + C11782 + C11783) * C48938 +
                     (C11401 * C1955 + C11764 + C11764 + C49265 * C1961 +
                      C11399 * C1483 + C11765 + C11765 + C11391 * C1491 +
                      C11397 * C680 + C11766 + C11766 + C11390 * C690 +
                      C11395 * C386 + C11767 + C11767 + C11389 * C398) *
                         C49235) *
                        C49043 * C49287) *
                       C250 +
                   (((C11395 * C680 + C12150 + C12150 + C11389 * C690 +
                      C11397 * C1483 + C12151 + C12151 + C11390 * C1491 +
                      C11399 * C1955 + C12152 + C12152 + C11391 * C1961 +
                      C11401 * C9455 + C12153 + C12153 + C49265 * C9459) *
                         C49235 +
                     (C11395 * C681 + C12154 + C12154 + C11389 * C691 +
                      C11397 * C1482 + C12155 + C12155 + C11390 * C1490 +
                      C11399 * C1956 + C12156 + C12156 + C11391 * C1962 +
                      C11401 * C9456 + C12157 + C12157 + C49265 * C9460) *
                         C48938) *
                        C49043 * C49287 -
                    ((C11618 + C11619 + C11620 + C11621) * C48938 +
                     (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
                      C11399 * C1283 + C11603 + C11603 + C11391 * C1291 +
                      C11397 * C578 + C11604 + C11604 + C11390 * C588 +
                      C11395 * C258 + C11605 + C11605 + C11389 * C270) *
                         C49235) *
                        C49043 * C782) *
                       C49285) *
                  C48963) /
                     (p * q * std::sqrt(p + q));
    d2ee[188] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
            C3867 + C3867 + C49088 * C270) *
               C3857 +
           (C3910 + C3911) * C3858 + C3918 * C3859 + C3919 * C49257) *
              C49043 * C928 -
          ((C4254 + C4255) * C49257 + (C4256 + C4257) * C3859 +
           (C4258 + C4259) * C3858 +
           (C3863 * C680 + C4238 + C4238 + C49088 * C690 + C3861 * C386 +
            C4239 + C4239 + C49256 * C398) *
               C3857) *
              C49043 * C929 +
          ((C3861 * C931 + C4992 + C4992 + C49256 * C941 + C3863 * C2375 +
            C4993 + C4993 + C49088 * C2387) *
               C3857 +
           (C3861 * C932 + C4994 + C4994 + C49256 * C942 + C3863 * C2377 +
            C4995 + C4995 + C49088 * C2389) *
               C3858 +
           (C3861 * C933 + C4996 + C4996 + C49256 * C943 + C3863 * C2379 +
            C4997 + C4997 + C49088 * C2391) *
               C3859 +
           (C3861 * C934 + C4998 + C4998 + C49256 * C944 + C3863 * C2676 +
            C4999 + C4999 + C49088 * C2678) *
               C49257) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
            C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
            C11391 * C588 + C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
               C49235 +
           (C11452 + C11453 + C11454 + C11455) * C48938) *
              C49043 * C928 -
          ((C11780 + C11781 + C11782 + C11783) * C48938 +
           (C11401 * C1955 + C11764 + C11764 + C49265 * C1961 + C11399 * C1483 +
            C11765 + C11765 + C11391 * C1491 + C11397 * C680 + C11766 + C11766 +
            C11390 * C690 + C11395 * C386 + C11767 + C11767 + C11389 * C398) *
               C49235) *
              C49043 * C929 +
          ((C11395 * C931 + C12516 + C12516 + C11389 * C941 + C11397 * C2375 +
            C12517 + C12517 + C11390 * C2387 + C11399 * C2376 + C12518 +
            C12518 + C11391 * C2388 + C11401 * C9939 + C12519 + C12519 +
            C49265 * C9943) *
               C49235 +
           (C11395 * C932 + C12520 + C12520 + C11389 * C942 + C11397 * C2377 +
            C12521 + C12521 + C11390 * C2389 + C11399 * C2378 + C12522 +
            C12522 + C11391 * C2390 + C11401 * C10206 + C12523 + C12523 +
            C49265 * C10208) *
               C48938) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[189] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C1064 +
            (C3910 + C3911) * C1065 + C3918 * C49279) *
               C49258 +
           ((C3861 * C386 + C4239 + C4239 + C49256 * C398 + C3863 * C680 +
             C4238 + C4238 + C49088 * C690) *
                C1064 +
            (C4259 + C4258) * C1065 + C6244 * C49279) *
               C49130) *
              C49014 * C48997 * C110 -
          (((C4254 + C4255) * C49279 + (C4256 + C4257) * C1065 +
            (C4258 + C4259) * C1064) *
               C49130 +
           ((C3915 + C3914) * C49279 + (C3913 + C3912) * C1065 +
            (C3911 + C3910) * C1064) *
               C49258) *
              C49014 * C48997 * C111 +
          ((C3918 * C1064 + C3919 * C1065 + (C3917 + C3916) * C49279) * C49258 +
           (C6244 * C1064 + (C4255 + C4254) * C1065 +
            (C3861 * C382 + C4240 + C4240 + C49256 * C394 + C3863 * C684 +
             C4241 + C4241 + C49088 * C694) *
                C49279) *
               C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
            C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
            C11391 * C588 + C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
               C48928 * C49258 +
           (C11395 * C386 + C11767 + C11767 + C11389 * C398 + C11397 * C680 +
            C11766 + C11766 + C11390 * C690 + C11399 * C1483 + C11765 + C11765 +
            C11391 * C1491 + C11401 * C1955 + C11764 + C11764 +
            C49265 * C1961) *
               C48928 * C49130) *
              C49014 * C48997 * C110 -
          ((C11780 + C11781 + C11782 + C11783) * C48928 * C49130 +
           (C11455 + C11454 + C11453 + C11452) * C48928 * C49258) *
              C49014 * C48997 * C111 +
          ((C11459 + C11458 + C11457 + C11456) * C48928 * C49258 +
           (C11395 * C384 + C11768 + C11768 + C11389 * C396 + C11397 * C682 +
            C11769 + C11769 + C11390 * C692 + C11399 * C1481 + C11770 + C11770 +
            C11391 * C1489 + C11401 * C1957 + C11771 + C11771 +
            C49265 * C1963) *
               C48928 * C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[190] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 +
                       C3863 * C258 + C3867 + C3867 + C49088 * C270) *
                          C1064 +
                      (C3910 + C3911) * C1065 + C3918 * C49279) *
                         C49258 +
                     ((C3861 * C386 + C4239 + C4239 + C49256 * C398 +
                       C3863 * C680 + C4238 + C4238 + C49088 * C690) *
                          C1064 +
                      (C4259 + C4258) * C1065 + C6244 * C49279) *
                         C49130) *
                        C49014 * C250 -
                    (((C6455 + C6456) * C49279 + (C6457 + C6458) * C1065 +
                      (C3863 * C1483 + C4627 + C4627 + C49088 * C1491 +
                       C3861 * C680 + C4626 + C4626 + C49256 * C690) *
                          C1064) *
                         C49130 +
                     ((C4086 + C4087) * C49279 + (C4088 + C4089) * C1065 +
                      (C3863 * C578 + C4068 + C4068 + C49088 * C588 +
                       C3861 * C258 + C4069 + C4069 + C49256 * C270) *
                          C1064) *
                         C49258) *
                        C49014 * C49285) *
                       C252 +
                   ((((C4089 + C4088) * C1064 + (C4087 + C4086) * C1065 +
                      (C4085 + C4084) * C49279) *
                         C49258 +
                     ((C6458 + C6457) * C1064 + (C6456 + C6455) * C1065 +
                      (C3861 * C683 + C4632 + C4632 + C49256 * C693 +
                       C3863 * C1484 + C4633 + C4633 + C49088 * C1492) *
                          C49279) *
                         C49130) *
                        C49014 * C49285 -
                    (((C4254 + C4255) * C49279 + (C4256 + C4257) * C1065 +
                      (C4258 + C4259) * C1064) *
                         C49130 +
                     ((C3915 + C3914) * C49279 + (C3913 + C3912) * C1065 +
                      (C3911 + C3910) * C1064) *
                         C49258) *
                        C49014 * C250) *
                       C49283)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 +
                      C11397 * C258 + C11405 + C11405 + C11390 * C270 +
                      C11399 * C578 + C11406 + C11406 + C11391 * C588 +
                      C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
                         C48928 * C49258 +
                     (C11395 * C386 + C11767 + C11767 + C11389 * C398 +
                      C11397 * C680 + C11766 + C11766 + C11390 * C690 +
                      C11399 * C1483 + C11765 + C11765 + C11391 * C1491 +
                      C11401 * C1955 + C11764 + C11764 + C49265 * C1961) *
                         C48928 * C49130) *
                        C49014 * C250 -
                    ((C11401 * C9455 + C12153 + C12153 + C49265 * C9459 +
                      C11399 * C1955 + C12152 + C12152 + C11391 * C1961 +
                      C11397 * C1483 + C12151 + C12151 + C11390 * C1491 +
                      C11395 * C680 + C12150 + C12150 + C11389 * C690) *
                         C48928 * C49130 +
                     (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
                      C11399 * C1283 + C11603 + C11603 + C11391 * C1291 +
                      C11397 * C578 + C11604 + C11604 + C11390 * C588 +
                      C11395 * C258 + C11605 + C11605 + C11389 * C270) *
                         C48928 * C49258) *
                        C49014 * C49285) *
                       C252 +
                   (((C11621 + C11620 + C11619 + C11618) * C48928 * C49258 +
                     (C11395 * C681 + C12154 + C12154 + C11389 * C691 +
                      C11397 * C1482 + C12155 + C12155 + C11390 * C1490 +
                      C11399 * C1956 + C12156 + C12156 + C11391 * C1962 +
                      C11401 * C9456 + C12157 + C12157 + C49265 * C9460) *
                         C48928 * C49130) *
                        C49014 * C49285 -
                    ((C11780 + C11781 + C11782 + C11783) * C48928 * C49130 +
                     (C11455 + C11454 + C11453 + C11452) * C48928 * C49258) *
                        C49014 * C250) *
                       C49283)) /
                     (p * q * std::sqrt(p + q));
    d2ee[191] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C1064 +
             (C3910 + C3911) * C1065 + C3918 * C49279) *
                C49258 +
            ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
                C49130) *
               C380 -
           (((C6682 + C6683) * C49279 + (C6684 + C6685) * C1065 +
             (C3863 * C2375 + C4993 + C4993 + C49088 * C2387 + C3861 * C931 +
              C4992 + C4992 + C49256 * C941) *
                 C1064) *
                C49130 +
            (C6666 * C49279 + C6667 * C1065 + (C6681 + C6680) * C1064) *
                C49258) *
               C49287) *
              C48997 * C252 +
          (((C6657 * C1064 + C6244 * C1065 + (C4255 + C4254) * C49279) *
                C49258 +
            ((C6685 + C6684) * C1064 + (C6683 + C6682) * C1065 +
             (C3861 * C934 + C4998 + C4998 + C49256 * C944 + C3863 * C2676 +
              C4999 + C4999 + C49088 * C2678) *
                 C49279) *
                C49130) *
               C49287 -
           (((C4254 + C4255) * C49279 + C6666 * C1065 + C6667 * C1064) *
                C49130 +
            ((C3915 + C3914) * C49279 + (C3913 + C3912) * C1065 +
             (C3911 + C3910) * C1064) *
                C49258) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C48928 * C49258 +
            (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
               C380 -
           ((C11401 * C9939 + C12519 + C12519 + C49265 * C9943 +
             C11399 * C2376 + C12518 + C12518 + C11391 * C2388 +
             C11397 * C2375 + C12517 + C12517 + C11390 * C2387 + C11395 * C931 +
             C12516 + C12516 + C11389 * C941) *
                C48928 * C49130 +
            (C14525 + C14524 + C14523 + C14522) * C48928 * C49258) *
               C49287) *
              C48997 * C252 +
          (((C11783 + C11782 + C11781 + C11780) * C48928 * C49258 +
            (C11395 * C932 + C12520 + C12520 + C11389 * C942 + C11397 * C2377 +
             C12521 + C12521 + C11390 * C2389 + C11399 * C2378 + C12522 +
             C12522 + C11391 * C2390 + C11401 * C10206 + C12523 + C12523 +
             C49265 * C10208) *
                C48928 * C49130) *
               C49287 -
           ((C11780 + C11781 + C11782 + C11783) * C48928 * C49130 +
            (C11455 + C11454 + C11453 + C11452) * C48928 * C49258) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[192] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C1064 +
             (C3910 + C3911) * C1065 + C3918 * C49279) *
                C49258 +
            ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
                C49130) *
               C49014 * C508 -
           (((C6455 + C6456) * C49279 + (C6457 + C6458) * C1065 +
             (C3863 * C1483 + C4627 + C4627 + C49088 * C1491 + C3861 * C680 +
              C4626 + C4626 + C49256 * C690) *
                 C1064) *
                C49130 +
            ((C4086 + C4087) * C49279 + (C4088 + C4089) * C1065 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C1064) *
                C49258) *
               C49014 * C49285) *
              C510 +
          ((((C4089 + C4088) * C1064 + (C4087 + C4086) * C1065 +
             (C4085 + C4084) * C49279) *
                C49258 +
            ((C6458 + C6457) * C1064 + (C6456 + C6455) * C1065 +
             (C3861 * C683 + C4632 + C4632 + C49256 * C693 + C3863 * C1484 +
              C4633 + C4633 + C49088 * C1492) *
                 C49279) *
                C49130) *
               C49014 * C49285 -
           (((C4254 + C4255) * C49279 + C6666 * C1065 + C6667 * C1064) *
                C49130 +
            ((C3915 + C3914) * C49279 + (C3913 + C3912) * C1065 +
             (C3911 + C3910) * C1064) *
                C49258) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C48928 * C49258 +
            (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
               C49014 * C508 -
           ((C11401 * C9455 + C12153 + C12153 + C49265 * C9459 +
             C11399 * C1955 + C12152 + C12152 + C11391 * C1961 +
             C11397 * C1483 + C12151 + C12151 + C11390 * C1491 + C11395 * C680 +
             C12150 + C12150 + C11389 * C690) *
                C48928 * C49130 +
            (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
             C11399 * C1283 + C11603 + C11603 + C11391 * C1291 + C11397 * C578 +
             C11604 + C11604 + C11390 * C588 + C11395 * C258 + C11605 + C11605 +
             C11389 * C270) *
                C48928 * C49258) *
               C49014 * C49285) *
              C510 +
          (((C11621 + C11620 + C11619 + C11618) * C48928 * C49258 +
            (C11395 * C681 + C12154 + C12154 + C11389 * C691 + C11397 * C1482 +
             C12155 + C12155 + C11390 * C1490 + C11399 * C1956 + C12156 +
             C12156 + C11391 * C1962 + C11401 * C9456 + C12157 + C12157 +
             C49265 * C9460) *
                C48928 * C49130) *
               C49014 * C49285 -
           ((C11780 + C11781 + C11782 + C11783) * C48928 * C49130 +
            (C11455 + C11454 + C11453 + C11452) * C48928 * C49258) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[193] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C1064 +
            (C3910 + C3911) * C1065 + C3918 * C49279) *
               C49258 +
           ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
               C49130) *
              C49014 * C574 -
          (((C6455 + C6456) * C49279 + (C6457 + C6458) * C1065 +
            (C3863 * C1483 + C4627 + C4627 + C49088 * C1491 + C3861 * C680 +
             C4626 + C4626 + C49256 * C690) *
                C1064) *
               C49130 +
           ((C4086 + C4087) * C49279 + (C4088 + C4089) * C1065 +
            (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
             C4069 + C4069 + C49256 * C270) *
                C1064) *
               C49258) *
              C49014 * C575 +
          (((C3861 * C578 + C4488 + C4488 + C49256 * C588 + C3863 * C1283 +
             C4489 + C4489 + C49088 * C1291) *
                C1064 +
            (C3861 * C579 + C4490 + C4490 + C49256 * C589 + C3863 * C1282 +
             C4491 + C4491 + C49088 * C1290) *
                C1065 +
            (C3861 * C580 + C4492 + C4492 + C49256 * C590 + C3863 * C1281 +
             C4493 + C4493 + C49088 * C1289) *
                C49279) *
               C49258 +
           ((C3861 * C1483 + C7026 + C7026 + C49256 * C1491 + C3863 * C1955 +
             C7027 + C7027 + C49088 * C1961) *
                C1064 +
            (C3861 * C1482 + C7028 + C7028 + C49256 * C1490 + C3863 * C1956 +
             C7029 + C7029 + C49088 * C1962) *
                C1065 +
            (C3861 * C1481 + C7030 + C7030 + C49256 * C1489 + C3863 * C1957 +
             C7031 + C7031 + C49088 * C1963) *
                C49279) *
               C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
            C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
            C11391 * C588 + C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
               C48928 * C49258 +
           (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
              C49014 * C574 -
          ((C11401 * C9455 + C12153 + C12153 + C49265 * C9459 + C11399 * C1955 +
            C12152 + C12152 + C11391 * C1961 + C11397 * C1483 + C12151 +
            C12151 + C11390 * C1491 + C11395 * C680 + C12150 + C12150 +
            C11389 * C690) *
               C48928 * C49130 +
           (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 + C11399 * C1283 +
            C11603 + C11603 + C11391 * C1291 + C11397 * C578 + C11604 + C11604 +
            C11390 * C588 + C11395 * C258 + C11605 + C11605 + C11389 * C270) *
               C48928 * C49258) *
              C49014 * C575 +
          ((C11395 * C578 + C12012 + C12012 + C11389 * C588 + C11397 * C1283 +
            C12013 + C12013 + C11390 * C1291 + C11399 * C1791 + C12014 +
            C12014 + C11391 * C1797 + C11401 * C9357 + C12015 + C12015 +
            C49265 * C9361) *
               C48928 * C49258 +
           (C11395 * C1483 + C14754 + C14754 + C11389 * C1491 + C11397 * C1955 +
            C14755 + C14755 + C11390 * C1961 + C11399 * C9455 + C14756 +
            C14756 + C11391 * C9459 + C11401 * C9705 + C14757 + C14757 +
            C49265 * C9707) *
               C48928 * C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[194] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C1064 +
             (C3910 + C3911) * C1065 + C3918 * C49279) *
                C49258 +
            ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
                C49130) *
               C380 -
           (((C6682 + C6683) * C49279 + (C6684 + C6685) * C1065 +
             (C3863 * C2375 + C4993 + C4993 + C49088 * C2387 + C3861 * C931 +
              C4992 + C4992 + C49256 * C941) *
                 C1064) *
                C49130 +
            (C6666 * C49279 + C6667 * C1065 + (C6681 + C6680) * C1064) *
                C49258) *
               C49287) *
              C508 +
          ((((C7240 + C7241) * C1064 + (C6458 + C6457) * C1065 +
             (C6456 + C6455) * C49279) *
                C49258 +
            ((C3861 * C2375 + C7230 + C7230 + C49256 * C2387 + C3863 * C2376 +
              C7231 + C7231 + C49088 * C2388) *
                 C1064 +
             (C3861 * C2377 + C7232 + C7232 + C49256 * C2389 + C3863 * C2378 +
              C7233 + C7233 + C49088 * C2390) *
                 C1065 +
             (C3861 * C2379 + C7234 + C7234 + C49256 * C2391 + C3863 * C2380 +
              C7235 + C7235 + C49088 * C2392) *
                 C49279) *
                C49130) *
               C49287 -
           (((C6455 + C6456) * C49279 + (C6457 + C6458) * C1065 +
             (C7241 + C7240) * C1064) *
                C49130 +
            ((C4086 + C4087) * C49279 + (C4088 + C4089) * C1065 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C1064) *
                C49258) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C48928 * C49258 +
            (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
               C380 -
           ((C11401 * C9939 + C12519 + C12519 + C49265 * C9943 +
             C11399 * C2376 + C12518 + C12518 + C11391 * C2388 +
             C11397 * C2375 + C12517 + C12517 + C11390 * C2387 + C11395 * C931 +
             C12516 + C12516 + C11389 * C941) *
                C48928 * C49130 +
            (C14525 + C14524 + C14523 + C14522) * C48928 * C49258) *
               C49287) *
              C508 +
          (((C14908 + C14909 + C14910 + C14911) * C48928 * C49258 +
            (C11395 * C2375 + C14896 + C14896 + C11389 * C2387 +
             C11397 * C2376 + C14897 + C14897 + C11390 * C2388 +
             C11399 * C9939 + C14898 + C14898 + C11391 * C9943 +
             C11401 * C9940 + C14899 + C14899 + C49265 * C9944) *
                C48928 * C49130) *
               C49287 -
           ((C14911 + C14910 + C14909 + C14908) * C48928 * C49130 +
            (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
             C11399 * C1283 + C11603 + C11603 + C11391 * C1291 + C11397 * C578 +
             C11604 + C11604 + C11390 * C588 + C11395 * C258 + C11605 + C11605 +
             C11389 * C270) *
                C48928 * C49258) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[195] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C1064 +
             (C3910 + C3911) * C1065 + C3918 * C49279) *
                C49258 +
            ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
                C49130) *
               C782 -
           (((C6682 + C6683) * C49279 + (C6684 + C6685) * C1065 +
             (C3863 * C2375 + C4993 + C4993 + C49088 * C2387 + C3861 * C931 +
              C4992 + C4992 + C49256 * C941) *
                 C1064) *
                C49130 +
            (C6666 * C49279 + C6667 * C1065 + (C6681 + C6680) * C1064) *
                C49258) *
               C49287) *
              C48997 * C510 +
          (((C6657 * C1064 + C6244 * C1065 + (C4255 + C4254) * C49279) *
                C49258 +
            ((C6685 + C6684) * C1064 + (C6683 + C6682) * C1065 +
             (C3861 * C934 + C4998 + C4998 + C49256 * C944 + C3863 * C2676 +
              C4999 + C4999 + C49088 * C2678) *
                 C49279) *
                C49130) *
               C49287 -
           (((C4254 + C4255) * C49279 + C6666 * C1065 + C6667 * C1064) *
                C49130 +
            ((C3915 + C3914) * C49279 + (C3913 + C3912) * C1065 +
             (C3911 + C3910) * C1064) *
                C49258) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C48928 * C49258 +
            (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
               C782 -
           ((C11401 * C9939 + C12519 + C12519 + C49265 * C9943 +
             C11399 * C2376 + C12518 + C12518 + C11391 * C2388 +
             C11397 * C2375 + C12517 + C12517 + C11390 * C2387 + C11395 * C931 +
             C12516 + C12516 + C11389 * C941) *
                C48928 * C49130 +
            (C14525 + C14524 + C14523 + C14522) * C48928 * C49258) *
               C49287) *
              C48997 * C510 +
          (((C11783 + C11782 + C11781 + C11780) * C48928 * C49258 +
            (C11395 * C932 + C12520 + C12520 + C11389 * C942 + C11397 * C2377 +
             C12521 + C12521 + C11390 * C2389 + C11399 * C2378 + C12522 +
             C12522 + C11391 * C2390 + C11401 * C10206 + C12523 + C12523 +
             C49265 * C10208) *
                C48928 * C49130) *
               C49287 -
           ((C11780 + C11781 + C11782 + C11783) * C48928 * C49130 +
            (C11455 + C11454 + C11453 + C11452) * C48928 * C49258) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[196] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
              C3867 + C3867 + C49088 * C270) *
                 C1064 +
             (C3910 + C3911) * C1065 + C3918 * C49279) *
                C49258 +
            ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
                C49130) *
               C782 -
           (((C6682 + C6683) * C49279 + (C6684 + C6685) * C1065 +
             (C3863 * C2375 + C4993 + C4993 + C49088 * C2387 + C3861 * C931 +
              C4992 + C4992 + C49256 * C941) *
                 C1064) *
                C49130 +
            (C6666 * C49279 + C6667 * C1065 + (C6681 + C6680) * C1064) *
                C49258) *
               C49287) *
              C250 +
          ((((C7240 + C7241) * C1064 + (C6458 + C6457) * C1065 +
             (C6456 + C6455) * C49279) *
                C49258 +
            ((C3861 * C2375 + C7230 + C7230 + C49256 * C2387 + C3863 * C2376 +
              C7231 + C7231 + C49088 * C2388) *
                 C1064 +
             (C3861 * C2377 + C7232 + C7232 + C49256 * C2389 + C3863 * C2378 +
              C7233 + C7233 + C49088 * C2390) *
                 C1065 +
             (C3861 * C2379 + C7234 + C7234 + C49256 * C2391 + C3863 * C2380 +
              C7235 + C7235 + C49088 * C2392) *
                 C49279) *
                C49130) *
               C49287 -
           (((C6455 + C6456) * C49279 + (C6457 + C6458) * C1065 +
             (C7241 + C7240) * C1064) *
                C49130 +
            ((C4086 + C4087) * C49279 + (C4088 + C4089) * C1065 +
             (C3863 * C578 + C4068 + C4068 + C49088 * C588 + C3861 * C258 +
              C4069 + C4069 + C49256 * C270) *
                 C1064) *
                C49258) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
             C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
             C11391 * C588 + C11401 * C1283 + C11407 + C11407 +
             C49265 * C1291) *
                C48928 * C49258 +
            (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
               C782 -
           ((C11401 * C9939 + C12519 + C12519 + C49265 * C9943 +
             C11399 * C2376 + C12518 + C12518 + C11391 * C2388 +
             C11397 * C2375 + C12517 + C12517 + C11390 * C2387 + C11395 * C931 +
             C12516 + C12516 + C11389 * C941) *
                C48928 * C49130 +
            (C14525 + C14524 + C14523 + C14522) * C48928 * C49258) *
               C49287) *
              C250 +
          (((C14908 + C14909 + C14910 + C14911) * C48928 * C49258 +
            (C11395 * C2375 + C14896 + C14896 + C11389 * C2387 +
             C11397 * C2376 + C14897 + C14897 + C11390 * C2388 +
             C11399 * C9939 + C14898 + C14898 + C11391 * C9943 +
             C11401 * C9940 + C14899 + C14899 + C49265 * C9944) *
                C48928 * C49130) *
               C49287 -
           ((C14911 + C14910 + C14909 + C14908) * C48928 * C49130 +
            (C11401 * C1791 + C11602 + C11602 + C49265 * C1797 +
             C11399 * C1283 + C11603 + C11603 + C11391 * C1291 + C11397 * C578 +
             C11604 + C11604 + C11390 * C588 + C11395 * C258 + C11605 + C11605 +
             C11389 * C270) *
                C48928 * C49258) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[197] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3861 * C115 + C3866 + C3866 + C49256 * C129 + C3863 * C258 +
             C3867 + C3867 + C49088 * C270) *
                C1064 +
            (C3910 + C3911) * C1065 + C3918 * C49279) *
               C49258 +
           ((C6680 + C6681) * C1064 + C6657 * C1065 + C6244 * C49279) *
               C49130) *
              C928 -
          (((C6682 + C6683) * C49279 + (C6684 + C6685) * C1065 +
            (C7790 + C7791) * C1064) *
               C49130 +
           (C6666 * C49279 + C6667 * C1065 + (C6681 + C6680) * C1064) *
               C49258) *
              C929 +
          (((C7791 + C7790) * C1064 + (C6685 + C6684) * C1065 +
            (C6683 + C6682) * C49279) *
               C49258 +
           ((C3861 * C2851 + C7780 + C7780 + C49256 * C2859 + C3863 * C3305 +
             C7781 + C7781 + C49088 * C3311) *
                C1064 +
            (C3861 * C2850 + C7782 + C7782 + C49256 * C2858 + C3863 * C3306 +
             C7783 + C7783 + C49088 * C3312) *
                C1065 +
            (C3861 * C2849 + C7784 + C7784 + C49256 * C2857 + C3863 * C3307 +
             C7785 + C7785 + C49088 * C3313) *
                C49279) *
               C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11395 * C115 + C11404 + C11404 + C11389 * C129 + C11397 * C258 +
            C11405 + C11405 + C11390 * C270 + C11399 * C578 + C11406 + C11406 +
            C11391 * C588 + C11401 * C1283 + C11407 + C11407 + C49265 * C1291) *
               C48928 * C49258 +
           (C14522 + C14523 + C14524 + C14525) * C48928 * C49130) *
              C928 -
          ((C15290 + C15291 + C15292 + C15293) * C48928 * C49130 +
           (C14525 + C14524 + C14523 + C14522) * C48928 * C49258) *
              C929 +
          ((C15293 + C15292 + C15291 + C15290) * C48928 * C49258 +
           (C11395 * C2851 + C15278 + C15278 + C11389 * C2859 + C11397 * C3305 +
            C15279 + C15279 + C11390 * C3311 + C11399 * C10361 + C15280 +
            C15280 + C11391 * C10365 + C11401 * C10826 + C15281 + C15281 +
            C49265 * C10828) *
               C48928 * C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[198] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C1064 +
           (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
              C49043 * C49014 * C48997 * C110 -
          ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
           (C1127 + C1126 + C1125) * C1064) *
              C49043 * C49014 * C48997 * C111 +
          (C1135 * C1064 + (C1133 + C1132 + C1131) * C1065 +
           (C1067 * C119 + C1104 + C1104 + C49322 * C133 + C1069 * C254 +
            C1105 + C1105 + C49310 * C266 + C1071 * C582 + C1106 + C1106 +
            C49290 * C592) *
               C49279) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C49043 * C49014 * C48997 * C110 -
          (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
           C164 * C102) *
              C49043 * C49014 * C48997 * C111 +
          (C165 * C102 + C166 * C103 + C167 * C104 + C168 * C105 +
           (C113 * C121 + C153 + C153 + C49025 * C135) * C106) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 + C164 * C1065 +
            C165 * C49279) *
               C49323 +
           ((C113 * C386 + C413 + C413 + C49025 * C398) * C1064 + C426 * C1065 +
            C425 * C49279) *
               C49312 +
           ((C113 * C931 + C947 + C947 + C49025 * C941) * C1064 +
            C2528 * C1065 + C2529 * C49279) *
               C49293) *
              C49014 * C48997 * C110 -
          ((C2530 * C49279 + C2529 * C1065 + C2528 * C1064) * C49293 +
           (C424 * C49279 + C425 * C1065 + C426 * C1064) * C49312 +
           (C166 * C49279 + C165 * C1065 + C164 * C1064) * C49323) *
              C49014 * C48997 * C111 +
          ((C165 * C1064 + C166 * C1065 + C167 * C49279) * C49323 +
           (C425 * C1064 + C424 * C1065 + C423 * C49279) * C49312 +
           (C2529 * C1064 + C2530 * C1065 +
            (C113 * C935 + C951 + C951 + C49025 * C945) * C49279) *
               C49293) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C49319 +
           (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
              C49043 * C49014 * C48997 * C110 -
          ((C7971 + C7972 + C7973) * C49279 + (C7970 + C7969 + C7968) * C49306 +
           (C7967 + C7966 + C7965) * C49319) *
              C49043 * C49014 * C48997 * C111 +
          (C7975 * C49319 + (C7973 + C7972 + C7971) * C49306 +
           (C7907 * C119 + C7944 + C7944 + C7901 * C133 + C7909 * C254 + C7945 +
            C7945 + C7902 * C266 + C7911 * C582 + C7946 + C7946 +
            C49290 * C592) *
               C49279) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
           C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
           C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
           C9265 + C9265 + C9248 * C1797) *
              C48928 * C49043 * C49014 * C48997 * C110 -
          (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
           C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
           C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
           C9250 * C116 + C9270 + C9270 + C9244 * C130) *
              C48928 * C49043 * C49014 * C48997 * C111 +
          (C9250 * C117 + C9271 + C9271 + C9244 * C131 + C9252 * C256 + C9272 +
           C9272 + C9245 * C268 + C9254 * C580 + C9273 + C9273 + C9246 * C590 +
           C9256 * C1281 + C9274 + C9274 + C9247 * C1289 + C9258 * C1793 +
           C9275 + C9275 + C9248 * C1799) *
              C48928 * C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C48928 * C49323 +
           (C7907 * C386 + C8330 + C8330 + C7901 * C398 + C7909 * C680 + C8329 +
            C8329 + C7902 * C690 + C7911 * C1483 + C8328 + C8328 +
            C49290 * C1491) *
               C48928 * C49312 +
           (C7907 * C931 + C9174 + C9174 + C7901 * C941 + C7909 * C2375 +
            C9175 + C9175 + C7902 * C2387 + C7911 * C2376 + C9176 + C9176 +
            C49290 * C2388) *
               C48928 * C49293) *
              C49014 * C48997 * C110 -
          ((C7911 * C2378 + C9179 + C9179 + C49290 * C2390 + C7909 * C2377 +
            C9178 + C9178 + C7902 * C2389 + C7907 * C932 + C9177 + C9177 +
            C7901 * C942) *
               C48928 * C49293 +
           (C8349 + C8350 + C8351) * C48928 * C49312 +
           (C7967 + C7966 + C7965) * C48928 * C49323) *
              C49014 * C48997 * C111 +
          (C7975 * C48928 * C49323 + (C8348 + C8347 + C8346) * C48928 * C49312 +
           (C7907 * C933 + C9180 + C9180 + C7901 * C943 + C7909 * C2379 +
            C9181 + C9181 + C7902 * C2391 + C7911 * C2380 + C9182 + C9182 +
            C49290 * C2392) *
               C48928 * C49293) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[199] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C49014 * C250 -
           ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C1064) *
               C49043 * C49014 * C49285) *
              C252 +
          (((C1335 + C1334 + C1333) * C1064 + (C1332 + C1331 + C1330) * C1065 +
            (C1067 * C255 + C1315 + C1315 + C49322 * C267 + C1069 * C581 +
             C1316 + C1316 + C49310 * C591 + C1071 * C1284 + C1317 + C1317 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
            (C1127 + C1126 + C1125) * C1064) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C49014 * C250 -
           (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
               C49043 * C49014 * C49285) *
              C252 +
          ((C298 * C102 + C297 * C103 + C296 * C104 + C295 * C105 +
            (C113 * C259 + C286 + C286 + C49025 * C271) * C106) *
               C49043 * C49014 * C49285 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 +
             C164 * C1065 + C165 * C49279) *
                C49323 +
            ((C113 * C386 + C413 + C413 + C49025 * C398) * C1064 +
             C426 * C1065 + C425 * C49279) *
                C49312 +
            ((C113 * C931 + C947 + C947 + C49025 * C941) * C1064 +
             C2528 * C1065 + C2529 * C49279) *
                C49293) *
               C49014 * C250 -
           ((C2700 * C49279 + C2701 * C1065 +
             (C113 * C2375 + C2686 + C2686 + C49025 * C2387) * C1064) *
                C49293 +
            (C2702 * C49279 + C2703 * C1065 +
             (C113 * C680 + C696 + C696 + C49025 * C690) * C1064) *
                C49312 +
            (C297 * C49279 + C298 * C1065 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C1064) *
                C49323) *
               C49014 * C49285) *
              C252 +
          (((C298 * C1064 + C297 * C1065 + C296 * C49279) * C49323 +
            (C2703 * C1064 + C2702 * C1065 +
             (C113 * C683 + C699 + C699 + C49025 * C693) * C49279) *
                C49312 +
            (C2701 * C1064 + C2700 * C1065 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49279) *
                C49293) *
               C49014 * C49285 -
           ((C2530 * C49279 + C2529 * C1065 + C2528 * C1064) * C49293 +
            (C424 * C49279 + C425 * C1065 + C426 * C1064) * C49312 +
            (C166 * C49279 + C165 * C1065 + C164 * C1064) * C49323) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C49014 * C250 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C49014 * C49285) *
              C252 +
          (((C8163 + C8162 + C8161) * C49319 +
            (C8160 + C8159 + C8158) * C49306 +
            (C7907 * C255 + C8143 + C8143 + C7901 * C267 + C7909 * C581 +
             C8144 + C8144 + C7902 * C591 + C7911 * C1284 + C8145 + C8145 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C49014 * C250 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C49014 * C49285) *
              C252 +
          ((C9250 * C257 + C9369 + C9369 + C9244 * C269 + C9252 * C579 + C9370 +
            C9370 + C9245 * C589 + C9254 * C1282 + C9371 + C9371 +
            C9246 * C1290 + C9256 * C1792 + C9372 + C9372 + C9247 * C1798 +
            C9258 * C9358 + C9373 + C9373 + C9248 * C9362) *
               C48928 * C49043 * C49014 * C49285 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C48928 * C49323 +
            (C7907 * C386 + C8330 + C8330 + C7901 * C398 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7911 * C1483 + C8328 + C8328 +
             C49290 * C1491) *
                C48928 * C49312 +
            (C7907 * C931 + C9174 + C9174 + C7901 * C941 + C7909 * C2375 +
             C9175 + C9175 + C7902 * C2387 + C7911 * C2376 + C9176 + C9176 +
             C49290 * C2388) *
                C48928 * C49293) *
               C49014 * C250 -
           ((C7911 * C9939 + C10210 + C10210 + C49290 * C9943 + C7909 * C2376 +
             C10211 + C10211 + C7902 * C2388 + C7907 * C2375 + C10212 + C10212 +
             C7901 * C2387) *
                C48928 * C49293 +
            (C7911 * C1955 + C8765 + C8765 + C49290 * C1961 + C7909 * C1483 +
             C8764 + C8764 + C7902 * C1491 + C7907 * C680 + C8763 + C8763 +
             C7901 * C690) *
                C48928 * C49312 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C48928 * C49323) *
               C49014 * C49285) *
              C252 +
          (((C8163 + C8162 + C8161) * C48928 * C49323 +
            (C7907 * C681 + C8766 + C8766 + C7901 * C691 + C7909 * C1482 +
             C8767 + C8767 + C7902 * C1490 + C7911 * C1956 + C8768 + C8768 +
             C49290 * C1962) *
                C48928 * C49312 +
            (C7907 * C2377 + C10213 + C10213 + C7901 * C2389 + C7909 * C2378 +
             C10214 + C10214 + C7902 * C2390 + C7911 * C10206 + C10215 +
             C10215 + C49290 * C10208) *
                C48928 * C49293) *
               C49014 * C49285 -
           ((C7911 * C2378 + C9179 + C9179 + C49290 * C2390 + C7909 * C2377 +
             C9178 + C9178 + C7902 * C2389 + C7907 * C932 + C9177 + C9177 +
             C7901 * C942) *
                C48928 * C49293 +
            (C8349 + C8350 + C8351) * C48928 * C49312 +
            (C7967 + C7966 + C7965) * C48928 * C49323) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[200] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C380 -
           ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
            (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
             C49322 * C398) *
                C1064) *
               C49043 * C49287) *
              C48997 * C252 +
          (((C1535 + C1534 + C1533) * C1064 + (C1532 + C1531 + C1530) * C1065 +
            (C1067 * C383 + C1515 + C1515 + C49322 * C395 + C1069 * C683 +
             C1516 + C1516 + C49310 * C693 + C1071 * C1484 + C1517 + C1517 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
            (C1127 + C1126 + C1125) * C1064) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C380 -
           (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
            (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
               C49043 * C49287) *
              C48997 * C252 +
          ((C426 * C102 + C425 * C103 + C424 * C104 + C423 * C105 +
            (C113 * C387 + C414 + C414 + C49025 * C399) * C106) *
               C49043 * C49287 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 +
             C164 * C1065 + C165 * C49279) *
                C49323 +
            (C2896 + C2864 + C2865) * C49312 +
            (C2897 + C2868 + C2869) * C49293) *
               C380 -
           ((C2894 * C49279 + C2895 * C1065 +
             (C113 * C2851 + C2876 + C2876 + C49025 * C2859) * C1064) *
                C49293 +
            (C2869 + C2868 + C2897) * C49312 +
            (C2865 + C2864 + C2896) * C49323) *
               C49287) *
              C48997 * C252 +
          (((C2877 + C2878 + C2879) * C49323 +
            (C2880 + C2881 + C2882) * C49312 +
            (C2895 * C1064 + C2894 * C1065 +
             (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C49279) *
                C49293) *
               C49287 -
           ((C2882 + C2881 + C2880) * C49293 +
            (C2879 + C2878 + C2877) * C49312 +
            (C166 * C49279 + C165 * C1065 + C164 * C1064) * C49323) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C380 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C48997 * C252 +
          (((C8351 + C8350 + C8349) * C49319 +
            (C8348 + C8347 + C8346) * C49306 +
            (C7907 * C383 + C8331 + C8331 + C7901 * C395 + C7909 * C683 +
             C8332 + C8332 + C7902 * C693 + C7911 * C1484 + C8333 + C8333 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C380 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C48997 * C252 +
          ((C9250 * C385 + C9467 + C9467 + C9244 * C397 + C9252 * C681 + C9468 +
            C9468 + C9245 * C691 + C9254 * C1482 + C9469 + C9469 +
            C9246 * C1490 + C9256 * C1956 + C9470 + C9470 + C9247 * C1962 +
            C9258 * C9456 + C9471 + C9471 + C9248 * C9460) *
               C48928 * C49043 * C49287 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C48928 * C49323 +
            (C10410 + C10411 + C10412) * C48928 * C49312 +
            (C10413 + C10414 + C10415) * C48928 * C49293) *
               C380 -
           ((C7911 * C10361 + C10380 + C10380 + C49290 * C10365 +
             C7909 * C3305 + C10381 + C10381 + C7902 * C3311 + C7907 * C2851 +
             C10382 + C10382 + C7901 * C2859) *
                C48928 * C49293 +
            (C10415 + C10414 + C10413) * C48928 * C49312 +
            (C10412 + C10411 + C10410) * C48928 * C49323) *
               C49287) *
              C48997 * C252 +
          (((C8351 + C8350 + C8349) * C48928 * C49323 +
            (C10416 + C10417 + C10418) * C48928 * C49312 +
            (C7907 * C2850 + C10389 + C10389 + C7901 * C2858 + C7909 * C3306 +
             C10390 + C10390 + C7902 * C3312 + C7911 * C10362 + C10391 +
             C10391 + C49290 * C10366) *
                C48928 * C49293) *
               C49287 -
           ((C10418 + C10417 + C10416) * C48928 * C49293 +
            (C8349 + C8350 + C8351) * C48928 * C49312 +
            (C7967 + C7966 + C7965) * C48928 * C49323) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[201] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C49014 * C508 -
           ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C1064) *
               C49043 * C49014 * C49285) *
              C510 +
          (((C1335 + C1334 + C1333) * C1064 + (C1332 + C1331 + C1330) * C1065 +
            (C1067 * C255 + C1315 + C1315 + C49322 * C267 + C1069 * C581 +
             C1316 + C1316 + C49310 * C591 + C1071 * C1284 + C1317 + C1317 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
            (C1127 + C1126 + C1125) * C1064) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C49014 * C508 -
           (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
               C49043 * C49014 * C49285) *
              C510 +
          ((C298 * C102 + C297 * C103 + C296 * C104 + C295 * C105 +
            (C113 * C259 + C286 + C286 + C49025 * C271) * C106) *
               C49043 * C49014 * C49285 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 +
             C164 * C1065 + C165 * C49279) *
                C49323 +
            (C2896 + C2864 + C2865) * C49312 +
            (C2897 + C2868 + C2869) * C49293) *
               C49014 * C508 -
           ((C2700 * C49279 + C2701 * C1065 +
             (C113 * C2375 + C2686 + C2686 + C49025 * C2387) * C1064) *
                C49293 +
            (C2702 * C49279 + C2703 * C1065 +
             (C113 * C680 + C696 + C696 + C49025 * C690) * C1064) *
                C49312 +
            (C297 * C49279 + C298 * C1065 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C1064) *
                C49323) *
               C49014 * C49285) *
              C510 +
          (((C298 * C1064 + C297 * C1065 + C296 * C49279) * C49323 +
            (C2703 * C1064 + C2702 * C1065 +
             (C113 * C683 + C699 + C699 + C49025 * C693) * C49279) *
                C49312 +
            (C2701 * C1064 + C2700 * C1065 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49279) *
                C49293) *
               C49014 * C49285 -
           ((C2882 + C2881 + C2880) * C49293 +
            (C2879 + C2878 + C2877) * C49312 +
            (C166 * C49279 + C165 * C1065 + C164 * C1064) * C49323) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C49014 * C508 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C49014 * C49285) *
              C510 +
          (((C8163 + C8162 + C8161) * C49319 +
            (C8160 + C8159 + C8158) * C49306 +
            (C7907 * C255 + C8143 + C8143 + C7901 * C267 + C7909 * C581 +
             C8144 + C8144 + C7902 * C591 + C7911 * C1284 + C8145 + C8145 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C49014 * C508 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C49014 * C49285) *
              C510 +
          ((C9250 * C257 + C9369 + C9369 + C9244 * C269 + C9252 * C579 + C9370 +
            C9370 + C9245 * C589 + C9254 * C1282 + C9371 + C9371 +
            C9246 * C1290 + C9256 * C1792 + C9372 + C9372 + C9247 * C1798 +
            C9258 * C9358 + C9373 + C9373 + C9248 * C9362) *
               C48928 * C49043 * C49014 * C49285 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C48928 * C49323 +
            (C10410 + C10411 + C10412) * C48928 * C49312 +
            (C10413 + C10414 + C10415) * C48928 * C49293) *
               C49014 * C508 -
           ((C7911 * C9939 + C10210 + C10210 + C49290 * C9943 + C7909 * C2376 +
             C10211 + C10211 + C7902 * C2388 + C7907 * C2375 + C10212 + C10212 +
             C7901 * C2387) *
                C48928 * C49293 +
            (C7911 * C1955 + C8765 + C8765 + C49290 * C1961 + C7909 * C1483 +
             C8764 + C8764 + C7902 * C1491 + C7907 * C680 + C8763 + C8763 +
             C7901 * C690) *
                C48928 * C49312 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C48928 * C49323) *
               C49014 * C49285) *
              C510 +
          (((C8163 + C8162 + C8161) * C48928 * C49323 +
            (C7907 * C681 + C8766 + C8766 + C7901 * C691 + C7909 * C1482 +
             C8767 + C8767 + C7902 * C1490 + C7911 * C1956 + C8768 + C8768 +
             C49290 * C1962) *
                C48928 * C49312 +
            (C7907 * C2377 + C10213 + C10213 + C7901 * C2389 + C7909 * C2378 +
             C10214 + C10214 + C7902 * C2390 + C7911 * C10206 + C10215 +
             C10215 + C49290 * C10208) *
                C48928 * C49293) *
               C49014 * C49285 -
           ((C10418 + C10417 + C10416) * C48928 * C49293 +
            (C8349 + C8350 + C8351) * C48928 * C49312 +
            (C7967 + C7966 + C7965) * C48928 * C49323) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[202] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C1064 +
           (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
              C49043 * C49014 * C574 -
          ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
           (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
            C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
            C49322 * C270) *
               C1064) *
              C49043 * C49014 * C575 +
          ((C1067 * C578 + C1801 + C1801 + C49322 * C588 + C1069 * C1283 +
            C1802 + C1802 + C49310 * C1291 + C1071 * C1791 + C1803 + C1803 +
            C49290 * C1797) *
               C1064 +
           (C1067 * C579 + C1804 + C1804 + C49322 * C589 + C1069 * C1282 +
            C1805 + C1805 + C49310 * C1290 + C1071 * C1792 + C1806 + C1806 +
            C49290 * C1798) *
               C1065 +
           (C1067 * C580 + C1807 + C1807 + C49322 * C590 + C1069 * C1281 +
            C1808 + C1808 + C49310 * C1289 + C1071 * C1793 + C1809 + C1809 +
            C49290 * C1799) *
               C49279) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C49043 * C49014 * C574 -
          (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
           (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
              C49043 * C49014 * C575 +
          ((C113 * C578 + C594 + C594 + C49025 * C588) * C102 +
           (C113 * C579 + C595 + C595 + C49025 * C589) * C103 +
           (C113 * C580 + C596 + C596 + C49025 * C590) * C104 +
           (C113 * C581 + C597 + C597 + C49025 * C591) * C105 +
           (C113 * C582 + C598 + C598 + C49025 * C592) * C106) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 + C164 * C1065 +
            C165 * C49279) *
               C49323 +
           (C2896 + C2864 + C2865) * C49312 +
           (C2897 + C2868 + C2869) * C49293) *
              C49014 * C574 -
          ((C2700 * C49279 + C2701 * C1065 +
            (C113 * C2375 + C2686 + C2686 + C49025 * C2387) * C1064) *
               C49293 +
           (C2702 * C49279 + C2703 * C1065 +
            (C113 * C680 + C696 + C696 + C49025 * C690) * C1064) *
               C49312 +
           (C297 * C49279 + C298 * C1065 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C1064) *
               C49323) *
              C49014 * C575 +
          (((C113 * C578 + C594 + C594 + C49025 * C588) * C1064 +
            (C113 * C579 + C595 + C595 + C49025 * C589) * C1065 +
            (C113 * C580 + C596 + C596 + C49025 * C590) * C49279) *
               C49323 +
           ((C113 * C1483 + C3154 + C3154 + C49025 * C1491) * C1064 +
            (C113 * C1482 + C3155 + C3155 + C49025 * C1490) * C1065 +
            (C113 * C1481 + C3156 + C3156 + C49025 * C1489) * C49279) *
               C49312 +
           ((C113 * C2376 + C3157 + C3157 + C49025 * C2388) * C1064 +
            (C113 * C2378 + C3158 + C3158 + C49025 * C2390) * C1065 +
            (C113 * C2380 + C3159 + C3159 + C49025 * C2392) * C49279) *
               C49293) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C49319 +
           (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
              C49043 * C49014 * C574 -
          ((C8158 + C8159 + C8160) * C49279 + (C8161 + C8162 + C8163) * C49306 +
           (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
            C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
            C7901 * C270) *
               C49319) *
              C49043 * C49014 * C575 +
          ((C7907 * C578 + C8608 + C8608 + C7901 * C588 + C7909 * C1283 +
            C8609 + C8609 + C7902 * C1291 + C7911 * C1791 + C8610 + C8610 +
            C49290 * C1797) *
               C49319 +
           (C7907 * C579 + C8611 + C8611 + C7901 * C589 + C7909 * C1282 +
            C8612 + C8612 + C7902 * C1290 + C7911 * C1792 + C8613 + C8613 +
            C49290 * C1798) *
               C49306 +
           (C7907 * C580 + C8614 + C8614 + C7901 * C590 + C7909 * C1281 +
            C8615 + C8615 + C7902 * C1289 + C7911 * C1793 + C8616 + C8616 +
            C49290 * C1799) *
               C49279) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
           C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
           C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
           C9265 + C9265 + C9248 * C1797) *
              C48928 * C49043 * C49014 * C574 -
          (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
           C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
           C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
           C9250 * C258 + C9368 + C9368 + C9244 * C270) *
              C48928 * C49043 * C49014 * C575 +
          (C9250 * C578 + C9619 + C9619 + C9244 * C588 + C9252 * C1283 + C9620 +
           C9620 + C9245 * C1291 + C9254 * C1791 + C9621 + C9621 +
           C9246 * C1797 + C9256 * C9357 + C9622 + C9622 + C9247 * C9361 +
           C9258 * C9615 + C9623 + C9623 + C9248 * C9617) *
              C48928 * C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C48928 * C49323 +
           (C10410 + C10411 + C10412) * C48928 * C49312 +
           (C10413 + C10414 + C10415) * C48928 * C49293) *
              C49014 * C574 -
          ((C7911 * C9939 + C10210 + C10210 + C49290 * C9943 + C7909 * C2376 +
            C10211 + C10211 + C7902 * C2388 + C7907 * C2375 + C10212 + C10212 +
            C7901 * C2387) *
               C48928 * C49293 +
           (C7911 * C1955 + C8765 + C8765 + C49290 * C1961 + C7909 * C1483 +
            C8764 + C8764 + C7902 * C1491 + C7907 * C680 + C8763 + C8763 +
            C7901 * C690) *
               C48928 * C49312 +
           (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
            C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
            C7901 * C270) *
               C48928 * C49323) *
              C49014 * C575 +
          ((C7907 * C578 + C8608 + C8608 + C7901 * C588 + C7909 * C1283 +
            C8609 + C8609 + C7902 * C1291 + C7911 * C1791 + C8610 + C8610 +
            C49290 * C1797) *
               C48928 * C49323 +
           (C7907 * C1483 + C10675 + C10675 + C7901 * C1491 + C7909 * C1955 +
            C10676 + C10676 + C7902 * C1961 + C7911 * C9455 + C10677 + C10677 +
            C49290 * C9459) *
               C48928 * C49312 +
           (C7907 * C2376 + C10678 + C10678 + C7901 * C2388 + C7909 * C9939 +
            C10679 + C10679 + C7902 * C9943 + C7911 * C9940 + C10680 + C10680 +
            C49290 * C9944) *
               C48928 * C49293) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[203] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C380 -
           ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
            (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
             C49322 * C398) *
                C1064) *
               C49043 * C49287) *
              C508 +
          (((C1067 * C680 + C1965 + C1965 + C49322 * C690 + C1069 * C1483 +
             C1966 + C1966 + C49310 * C1491 + C1071 * C1955 + C1967 + C1967 +
             C49290 * C1961) *
                C1064 +
            (C1067 * C681 + C1968 + C1968 + C49322 * C691 + C1069 * C1482 +
             C1969 + C1969 + C49310 * C1490 + C1071 * C1956 + C1970 + C1970 +
             C49290 * C1962) *
                C1065 +
            (C1067 * C682 + C1971 + C1971 + C49322 * C692 + C1069 * C1481 +
             C1972 + C1972 + C49310 * C1489 + C1071 * C1957 + C1973 + C1973 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C1064) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C380 -
           (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
            (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
               C49043 * C49287) *
              C508 +
          (((C113 * C680 + C696 + C696 + C49025 * C690) * C102 +
            (C113 * C681 + C697 + C697 + C49025 * C691) * C103 +
            (C113 * C682 + C698 + C698 + C49025 * C692) * C104 +
            (C113 * C683 + C699 + C699 + C49025 * C693) * C105 +
            (C113 * C684 + C700 + C700 + C49025 * C694) * C106) *
               C49043 * C49287 -
           (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 +
             C164 * C1065 + C165 * C49279) *
                C49323 +
            (C2896 + C2864 + C2865) * C49312 +
            (C2897 + C2868 + C2869) * C49293) *
               C380 -
           ((C2894 * C49279 + C2895 * C1065 +
             (C113 * C2851 + C2876 + C2876 + C49025 * C2859) * C1064) *
                C49293 +
            (C2869 + C2868 + C2897) * C49312 +
            (C2865 + C2864 + C2896) * C49323) *
               C49287) *
              C508 +
          (((C3332 + C3317 + C3318) * C49323 +
            (C3333 + C3321 + C3322) * C49312 +
            ((C113 * C3305 + C3323 + C3323 + C49025 * C3311) * C1064 +
             (C113 * C3306 + C3324 + C3324 + C49025 * C3312) * C1065 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C49279) *
                C49293) *
               C49287 -
           ((C3322 + C3321 + C3333) * C49293 +
            (C3318 + C3317 + C3332) * C49312 +
            (C297 * C49279 + C298 * C1065 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C1064) *
                C49323) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C380 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C508 +
          (((C7907 * C680 + C8763 + C8763 + C7901 * C690 + C7909 * C1483 +
             C8764 + C8764 + C7902 * C1491 + C7911 * C1955 + C8765 + C8765 +
             C49290 * C1961) *
                C49319 +
            (C7907 * C681 + C8766 + C8766 + C7901 * C691 + C7909 * C1482 +
             C8767 + C8767 + C7902 * C1490 + C7911 * C1956 + C8768 + C8768 +
             C49290 * C1962) *
                C49306 +
            (C7907 * C682 + C8769 + C8769 + C7901 * C692 + C7909 * C1481 +
             C8770 + C8770 + C7902 * C1489 + C7911 * C1957 + C8771 + C8771 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C380 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C508 +
          ((C9250 * C680 + C9709 + C9709 + C9244 * C690 + C9252 * C1483 +
            C9710 + C9710 + C9245 * C1491 + C9254 * C1955 + C9711 + C9711 +
            C9246 * C1961 + C9256 * C9455 + C9712 + C9712 + C9247 * C9459 +
            C9258 * C9705 + C9713 + C9713 + C9248 * C9707) *
               C48928 * C49043 * C49287 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C48928 * C49323 +
            (C10410 + C10411 + C10412) * C48928 * C49312 +
            (C10413 + C10414 + C10415) * C48928 * C49293) *
               C380 -
           ((C7911 * C10361 + C10380 + C10380 + C49290 * C10365 +
             C7909 * C3305 + C10381 + C10381 + C7902 * C3311 + C7907 * C2851 +
             C10382 + C10382 + C7901 * C2859) *
                C48928 * C49293 +
            (C10415 + C10414 + C10413) * C48928 * C49312 +
            (C10412 + C10411 + C10410) * C48928 * C49323) *
               C49287) *
              C508 +
          (((C10857 + C10858 + C10859) * C48928 * C49323 +
            (C10860 + C10861 + C10862) * C48928 * C49312 +
            (C7907 * C3305 + C10842 + C10842 + C7901 * C3311 + C7909 * C10361 +
             C10843 + C10843 + C7902 * C10365 + C7911 * C10826 + C10844 +
             C10844 + C49290 * C10828) *
                C48928 * C49293) *
               C49287 -
           ((C10862 + C10861 + C10860) * C48928 * C49293 +
            (C10859 + C10858 + C10857) * C48928 * C49312 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C48928 * C49323) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[204] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C782 -
           ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
            (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
             C49322 * C398) *
                C1064) *
               C49043 * C49287) *
              C48997 * C510 +
          (((C1535 + C1534 + C1533) * C1064 + (C1532 + C1531 + C1530) * C1065 +
            (C1067 * C383 + C1515 + C1515 + C49322 * C395 + C1069 * C683 +
             C1516 + C1516 + C49310 * C693 + C1071 * C1484 + C1517 + C1517 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
            (C1127 + C1126 + C1125) * C1064) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C782 -
           (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
            (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
               C49043 * C49287) *
              C48997 * C510 +
          ((C426 * C102 + C425 * C103 + C424 * C104 + C423 * C105 +
            (C113 * C387 + C414 + C414 + C49025 * C399) * C106) *
               C49043 * C49287 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 +
             C164 * C1065 + C165 * C49279) *
                C49323 +
            (C2896 + C2864 + C2865) * C49312 +
            (C2897 + C2868 + C2869) * C49293) *
               C782 -
           ((C2894 * C49279 + C2895 * C1065 +
             (C113 * C2851 + C2876 + C2876 + C49025 * C2859) * C1064) *
                C49293 +
            (C2869 + C2868 + C2897) * C49312 +
            (C2865 + C2864 + C2896) * C49323) *
               C49287) *
              C48997 * C510 +
          (((C2877 + C2878 + C2879) * C49323 +
            (C2880 + C2881 + C2882) * C49312 +
            (C2895 * C1064 + C2894 * C1065 +
             (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C49279) *
                C49293) *
               C49287 -
           ((C2882 + C2881 + C2880) * C49293 +
            (C2879 + C2878 + C2877) * C49312 +
            (C166 * C49279 + C165 * C1065 + C164 * C1064) * C49323) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C782 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C48997 * C510 +
          (((C8351 + C8350 + C8349) * C49319 +
            (C8348 + C8347 + C8346) * C49306 +
            (C7907 * C383 + C8331 + C8331 + C7901 * C395 + C7909 * C683 +
             C8332 + C8332 + C7902 * C693 + C7911 * C1484 + C8333 + C8333 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C782 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C48997 * C510 +
          ((C9250 * C385 + C9467 + C9467 + C9244 * C397 + C9252 * C681 + C9468 +
            C9468 + C9245 * C691 + C9254 * C1482 + C9469 + C9469 +
            C9246 * C1490 + C9256 * C1956 + C9470 + C9470 + C9247 * C1962 +
            C9258 * C9456 + C9471 + C9471 + C9248 * C9460) *
               C48928 * C49043 * C49287 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C48928 * C49323 +
            (C10410 + C10411 + C10412) * C48928 * C49312 +
            (C10413 + C10414 + C10415) * C48928 * C49293) *
               C782 -
           ((C7911 * C10361 + C10380 + C10380 + C49290 * C10365 +
             C7909 * C3305 + C10381 + C10381 + C7902 * C3311 + C7907 * C2851 +
             C10382 + C10382 + C7901 * C2859) *
                C48928 * C49293 +
            (C10415 + C10414 + C10413) * C48928 * C49312 +
            (C10412 + C10411 + C10410) * C48928 * C49323) *
               C49287) *
              C48997 * C510 +
          (((C8351 + C8350 + C8349) * C48928 * C49323 +
            (C10416 + C10417 + C10418) * C48928 * C49312 +
            (C7907 * C2850 + C10389 + C10389 + C7901 * C2858 + C7909 * C3306 +
             C10390 + C10390 + C7902 * C3312 + C7911 * C10362 + C10391 +
             C10391 + C49290 * C10366) *
                C48928 * C49293) *
               C49287 -
           ((C10418 + C10417 + C10416) * C48928 * C49293 +
            (C8349 + C8350 + C8351) * C48928 * C49312 +
            (C7967 + C7966 + C7965) * C48928 * C49323) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[205] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C782 -
           ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
            (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
             C49322 * C398) *
                C1064) *
               C49043 * C49287) *
              C250 +
          (((C1067 * C680 + C1965 + C1965 + C49322 * C690 + C1069 * C1483 +
             C1966 + C1966 + C49310 * C1491 + C1071 * C1955 + C1967 + C1967 +
             C49290 * C1961) *
                C1064 +
            (C1067 * C681 + C1968 + C1968 + C49322 * C691 + C1069 * C1482 +
             C1969 + C1969 + C49310 * C1490 + C1071 * C1956 + C1970 + C1970 +
             C49290 * C1962) *
                C1065 +
            (C1067 * C682 + C1971 + C1971 + C49322 * C692 + C1069 * C1481 +
             C1972 + C1972 + C49310 * C1489 + C1071 * C1957 + C1973 + C1973 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C1064) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C782 -
           (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
            (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
               C49043 * C49287) *
              C250 +
          (((C113 * C680 + C696 + C696 + C49025 * C690) * C102 +
            (C113 * C681 + C697 + C697 + C49025 * C691) * C103 +
            (C113 * C682 + C698 + C698 + C49025 * C692) * C104 +
            (C113 * C683 + C699 + C699 + C49025 * C693) * C105 +
            (C113 * C684 + C700 + C700 + C49025 * C694) * C106) *
               C49043 * C49287 -
           (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 +
             C164 * C1065 + C165 * C49279) *
                C49323 +
            (C2896 + C2864 + C2865) * C49312 +
            (C2897 + C2868 + C2869) * C49293) *
               C782 -
           ((C2894 * C49279 + C2895 * C1065 +
             (C113 * C2851 + C2876 + C2876 + C49025 * C2859) * C1064) *
                C49293 +
            (C2869 + C2868 + C2897) * C49312 +
            (C2865 + C2864 + C2896) * C49323) *
               C49287) *
              C250 +
          (((C3332 + C3317 + C3318) * C49323 +
            (C3333 + C3321 + C3322) * C49312 +
            ((C113 * C3305 + C3323 + C3323 + C49025 * C3311) * C1064 +
             (C113 * C3306 + C3324 + C3324 + C49025 * C3312) * C1065 +
             (C113 * C3307 + C3325 + C3325 + C49025 * C3313) * C49279) *
                C49293) *
               C49287 -
           ((C3322 + C3321 + C3333) * C49293 +
            (C3318 + C3317 + C3332) * C49312 +
            (C297 * C49279 + C298 * C1065 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C1064) *
                C49323) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C782 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C250 +
          (((C7907 * C680 + C8763 + C8763 + C7901 * C690 + C7909 * C1483 +
             C8764 + C8764 + C7902 * C1491 + C7911 * C1955 + C8765 + C8765 +
             C49290 * C1961) *
                C49319 +
            (C7907 * C681 + C8766 + C8766 + C7901 * C691 + C7909 * C1482 +
             C8767 + C8767 + C7902 * C1490 + C7911 * C1956 + C8768 + C8768 +
             C49290 * C1962) *
                C49306 +
            (C7907 * C682 + C8769 + C8769 + C7901 * C692 + C7909 * C1481 +
             C8770 + C8770 + C7902 * C1489 + C7911 * C1957 + C8771 + C8771 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C782 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C250 +
          ((C9250 * C680 + C9709 + C9709 + C9244 * C690 + C9252 * C1483 +
            C9710 + C9710 + C9245 * C1491 + C9254 * C1955 + C9711 + C9711 +
            C9246 * C1961 + C9256 * C9455 + C9712 + C9712 + C9247 * C9459 +
            C9258 * C9705 + C9713 + C9713 + C9248 * C9707) *
               C48928 * C49043 * C49287 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C48928 * C49323 +
            (C10410 + C10411 + C10412) * C48928 * C49312 +
            (C10413 + C10414 + C10415) * C48928 * C49293) *
               C782 -
           ((C7911 * C10361 + C10380 + C10380 + C49290 * C10365 +
             C7909 * C3305 + C10381 + C10381 + C7902 * C3311 + C7907 * C2851 +
             C10382 + C10382 + C7901 * C2859) *
                C48928 * C49293 +
            (C10415 + C10414 + C10413) * C48928 * C49312 +
            (C10412 + C10411 + C10410) * C48928 * C49323) *
               C49287) *
              C250 +
          (((C10857 + C10858 + C10859) * C48928 * C49323 +
            (C10860 + C10861 + C10862) * C48928 * C49312 +
            (C7907 * C3305 + C10842 + C10842 + C7901 * C3311 + C7909 * C10361 +
             C10843 + C10843 + C7902 * C10365 + C7911 * C10826 + C10844 +
             C10844 + C49290 * C10828) *
                C48928 * C49293) *
               C49287 -
           ((C10862 + C10861 + C10860) * C48928 * C49293 +
            (C10859 + C10858 + C10857) * C48928 * C49312 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C48928 * C49323) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[206] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C1064 +
           (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
              C49043 * C928 -
          ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
           (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
            C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
            C49322 * C398) *
               C1064) *
              C49043 * C929 +
          ((C1067 * C931 + C2394 + C2394 + C49322 * C941 + C1069 * C2375 +
            C2395 + C2395 + C49310 * C2387 + C1071 * C2376 + C2396 + C2396 +
            C49290 * C2388) *
               C1064 +
           (C1067 * C932 + C2397 + C2397 + C49322 * C942 + C1069 * C2377 +
            C2398 + C2398 + C49310 * C2389 + C1071 * C2378 + C2399 + C2399 +
            C49290 * C2390) *
               C1065 +
           (C1067 * C933 + C2400 + C2400 + C49322 * C943 + C1069 * C2379 +
            C2401 + C2401 + C49310 * C2391 + C1071 * C2380 + C2402 + C2402 +
            C49290 * C2392) *
               C49279) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C49043 * C928 -
          (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
           (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
              C49043 * C929 +
          ((C113 * C931 + C947 + C947 + C49025 * C941) * C102 +
           (C113 * C932 + C948 + C948 + C49025 * C942) * C103 +
           (C113 * C933 + C949 + C949 + C49025 * C943) * C104 +
           (C113 * C934 + C950 + C950 + C49025 * C944) * C105 +
           (C113 * C935 + C951 + C951 + C49025 * C945) * C106) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C1064 + C164 * C1065 +
            C165 * C49279) *
               C49323 +
           (C2896 + C2864 + C2865) * C49312 + C3753 * C49293) *
              C928 -
          ((C3746 + C3747 + C3757) * C49293 + (C2869 + C2868 + C2897) * C49312 +
           (C2865 + C2864 + C2896) * C49323) *
              C929 +
          (C3753 * C49323 + (C3757 + C3747 + C3746) * C49312 +
           ((C113 * C3735 + C3750 + C3750 + C49025 * C3741) * C1064 +
            (C113 * C3736 + C3751 + C3751 + C49025 * C3742) * C1065 +
            (C113 * C3737 + C3752 + C3752 + C49025 * C3743) * C49279) *
               C49293) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C49319 +
           (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
              C49043 * C928 -
          ((C8346 + C8347 + C8348) * C49279 + (C8349 + C8350 + C8351) * C49306 +
           (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
            C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
            C7901 * C398) *
               C49319) *
              C49043 * C929 +
          ((C7907 * C931 + C9174 + C9174 + C7901 * C941 + C7909 * C2375 +
            C9175 + C9175 + C7902 * C2387 + C7911 * C2376 + C9176 + C9176 +
            C49290 * C2388) *
               C49319 +
           (C7907 * C932 + C9177 + C9177 + C7901 * C942 + C7909 * C2377 +
            C9178 + C9178 + C7902 * C2389 + C7911 * C2378 + C9179 + C9179 +
            C49290 * C2390) *
               C49306 +
           (C7907 * C933 + C9180 + C9180 + C7901 * C943 + C7909 * C2379 +
            C9181 + C9181 + C7902 * C2391 + C7911 * C2380 + C9182 + C9182 +
            C49290 * C2392) *
               C49279) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
           C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
           C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
           C9265 + C9265 + C9248 * C1797) *
              C48928 * C49043 * C928 -
          (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
           C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
           C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
           C9250 * C386 + C9466 + C9466 + C9244 * C398) *
              C48928 * C49043 * C929 +
          (C9250 * C931 + C9946 + C9946 + C9244 * C941 + C9252 * C2375 + C9947 +
           C9947 + C9245 * C2387 + C9254 * C2376 + C9948 + C9948 +
           C9246 * C2388 + C9256 * C9939 + C9949 + C9949 + C9247 * C9943 +
           C9258 * C9940 + C9950 + C9950 + C9248 * C9944) *
              C48928 * C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C48928 * C49323 +
           (C10410 + C10411 + C10412) * C48928 * C49312 + C11285 * C49293) *
              C928 -
          ((C11289 + C11290 + C11291) * C48928 * C49293 +
           (C10415 + C10414 + C10413) * C48928 * C49312 +
           (C10412 + C10411 + C10410) * C48928 * C49323) *
              C929 +
          (C11285 * C49323 + (C11291 + C11290 + C11289) * C48928 * C49312 +
           (C7907 * C3735 + C11278 + C11278 + C7901 * C3741 + C7909 * C11264 +
            C11279 + C11279 + C7902 * C11268 + C7911 * C11265 + C11280 +
            C11280 + C49290 * C11269) *
               C48928 * C49293) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[207] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 + C164 * C3858 +
            C165 * C3859 + C166 * C49257) *
               C49258 +
           (C2892 * C3857 + C426 * C3858 + C425 * C3859 + C424 * C49257) *
               C49130) *
              C49014 * C48997 * C110 -
          ((C423 * C49257 + C424 * C3859 + C425 * C3858 + C426 * C3857) *
               C49130 +
           (C167 * C49257 + C166 * C3859 + C165 * C3858 + C164 * C3857) *
               C49258) *
              C49014 * C48997 * C111 +
          ((C165 * C3857 + C166 * C3858 + C167 * C3859 + C168 * C49257) *
               C49258 +
           (C425 * C3857 + C424 * C3858 + C423 * C3859 +
            (C113 * C387 + C414 + C414 + C49025 * C399) * C49257) *
               C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49235 +
            (C7965 + C7966 + C7967) * C48938) *
               C49258 +
           ((C10410 + C10411 + C10412) * C49235 +
            (C8351 + C8350 + C8349) * C48938) *
               C49130) *
              C49014 * C48997 * C110 -
          (((C8346 + C8347 + C8348) * C48938 +
            (C8349 + C8350 + C8351) * C49235) *
               C49130 +
           ((C7970 + C7969 + C7968) * C48938 +
            (C7967 + C7966 + C7965) * C49235) *
               C49258) *
              C49014 * C48997 * C111 +
          ((C7975 * C49235 + (C7973 + C7972 + C7971) * C48938) * C49258 +
           ((C8348 + C8347 + C8346) * C49235 +
            (C7907 * C383 + C8331 + C8331 + C7901 * C395 + C7909 * C683 +
             C8332 + C8332 + C7902 * C693 + C7911 * C1484 + C8333 + C8333 +
             C49290 * C1492) *
                C48938) *
               C49130) *
              C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[208] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 +
             C164 * C3858 + C165 * C3859 + C166 * C49257) *
                C49258 +
            (C2892 * C3857 + C426 * C3858 + C425 * C3859 + C424 * C49257) *
                C49130) *
               C49014 * C250 -
           ((C5234 * C49257 + C2702 * C3859 + C2703 * C3858 + C3330 * C3857) *
                C49130 +
            (C296 * C49257 + C297 * C3859 + C298 * C3858 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C3857) *
                C49258) *
               C49014 * C49285) *
              C252 +
          (((C298 * C3857 + C297 * C3858 + C296 * C3859 + C295 * C49257) *
                C49258 +
            (C2703 * C3857 + C2702 * C3858 + C5234 * C3859 +
             (C113 * C684 + C700 + C700 + C49025 * C694) * C49257) *
                C49130) *
               C49014 * C49285 -
           ((C423 * C49257 + C424 * C3859 + C425 * C3858 + C426 * C3857) *
                C49130 +
            (C167 * C49257 + C166 * C3859 + C165 * C3858 + C164 * C3857) *
                C49258) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
              C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
              C49290 * C588) *
                 C49235 +
             (C7965 + C7966 + C7967) * C48938) *
                C49258 +
            ((C10410 + C10411 + C10412) * C49235 +
             (C8351 + C8350 + C8349) * C48938) *
                C49130) *
               C49014 * C250 -
           (((C12876 + C12877 + C12878) * C48938 +
             (C10859 + C10858 + C10857) * C49235) *
                C49130 +
            ((C8161 + C8162 + C8163) * C48938 +
             (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
              C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
              C7901 * C270) *
                 C49235) *
                C49258) *
               C49014 * C49285) *
              C252 +
          ((((C8163 + C8162 + C8161) * C49235 +
             (C8160 + C8159 + C8158) * C48938) *
                C49258 +
            ((C12878 + C12877 + C12876) * C49235 +
             (C7907 * C682 + C8769 + C8769 + C7901 * C692 + C7909 * C1481 +
              C8770 + C8770 + C7902 * C1489 + C7911 * C1957 + C8771 + C8771 +
              C49290 * C1963) *
                 C48938) *
                C49130) *
               C49014 * C49285 -
           (((C8346 + C8347 + C8348) * C48938 +
             (C8349 + C8350 + C8351) * C49235) *
                C49130 +
            ((C7970 + C7969 + C7968) * C48938 +
             (C7967 + C7966 + C7965) * C49235) *
                C49258) *
               C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[209] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 +
             C164 * C3858 + C165 * C3859 + C166 * C49257) *
                C49258 +
            (C5365 + C5366 + C5367 + C5368) * C49130) *
               C380 -
           ((C2530 * C49257 + C2529 * C3859 + C2528 * C3858 + C2893 * C3857) *
                C49130 +
            (C5368 + C5367 + C5366 + C5365) * C49258) *
               C49287) *
              C48997 * C252 +
          (((C5369 + C5370 + C5371 + C5372) * C49258 +
            (C2528 * C3857 + C2529 * C3858 + C2530 * C3859 +
             (C113 * C935 + C951 + C951 + C49025 * C945) * C49257) *
                C49130) *
               C49287 -
           ((C5372 + C5371 + C5370 + C5369) * C49130 +
            (C167 * C49257 + C166 * C3859 + C165 * C3858 + C164 * C3857) *
                C49258) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
              C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
              C49290 * C588) *
                 C49235 +
             (C7965 + C7966 + C7967) * C48938) *
                C49258 +
            ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
               C380 -
           (((C10418 + C10417 + C10416) * C48938 +
             (C10415 + C10414 + C10413) * C49235) *
                C49130 +
            (C13076 * C48938 + (C10412 + C10411 + C10410) * C49235) * C49258) *
               C49287) *
              C48997 * C252 +
          (((C13075 * C49235 + (C8348 + C8347 + C8346) * C48938) * C49258 +
            ((C10416 + C10417 + C10418) * C49235 +
             (C7907 * C933 + C9180 + C9180 + C7901 * C943 + C7909 * C2379 +
              C9181 + C9181 + C7902 * C2391 + C7911 * C2380 + C9182 + C9182 +
              C49290 * C2392) *
                 C48938) *
                C49130) *
               C49287 -
           (((C8346 + C8347 + C8348) * C48938 + C13076 * C49235) * C49130 +
            ((C7970 + C7969 + C7968) * C48938 +
             (C7967 + C7966 + C7965) * C49235) *
                C49258) *
               C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[210] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 +
             C164 * C3858 + C165 * C3859 + C166 * C49257) *
                C49258 +
            (C5365 + C5366 + C5367 + C5368) * C49130) *
               C49014 * C508 -
           ((C5234 * C49257 + C2702 * C3859 + C2703 * C3858 + C3330 * C3857) *
                C49130 +
            (C296 * C49257 + C297 * C3859 + C298 * C3858 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C3857) *
                C49258) *
               C49014 * C49285) *
              C510 +
          (((C298 * C3857 + C297 * C3858 + C296 * C3859 + C295 * C49257) *
                C49258 +
            (C2703 * C3857 + C2702 * C3858 + C5234 * C3859 +
             (C113 * C684 + C700 + C700 + C49025 * C694) * C49257) *
                C49130) *
               C49014 * C49285 -
           ((C5372 + C5371 + C5370 + C5369) * C49130 +
            (C167 * C49257 + C166 * C3859 + C165 * C3858 + C164 * C3857) *
                C49258) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
              C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
              C49290 * C588) *
                 C49235 +
             (C7965 + C7966 + C7967) * C48938) *
                C49258 +
            ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
               C49014 * C508 -
           (((C12876 + C12877 + C12878) * C48938 +
             (C10859 + C10858 + C10857) * C49235) *
                C49130 +
            ((C8161 + C8162 + C8163) * C48938 +
             (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
              C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
              C7901 * C270) *
                 C49235) *
                C49258) *
               C49014 * C49285) *
              C510 +
          ((((C8163 + C8162 + C8161) * C49235 +
             (C8160 + C8159 + C8158) * C48938) *
                C49258 +
            ((C12878 + C12877 + C12876) * C49235 +
             (C7907 * C682 + C8769 + C8769 + C7901 * C692 + C7909 * C1481 +
              C8770 + C8770 + C7902 * C1489 + C7911 * C1957 + C8771 + C8771 +
              C49290 * C1963) *
                 C48938) *
                C49130) *
               C49014 * C49285 -
           (((C8346 + C8347 + C8348) * C48938 + C13076 * C49235) * C49130 +
            ((C7970 + C7969 + C7968) * C48938 +
             (C7967 + C7966 + C7965) * C49235) *
                C49258) *
               C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[211] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 + C164 * C3858 +
            C165 * C3859 + C166 * C49257) *
               C49258 +
           (C5365 + C5366 + C5367 + C5368) * C49130) *
              C49014 * C574 -
          ((C5234 * C49257 + C2702 * C3859 + C2703 * C3858 + C3330 * C3857) *
               C49130 +
           (C296 * C49257 + C297 * C3859 + C298 * C3858 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C3857) *
               C49258) *
              C49014 * C575 +
          (((C113 * C578 + C594 + C594 + C49025 * C588) * C3857 +
            (C113 * C579 + C595 + C595 + C49025 * C589) * C3858 +
            (C113 * C580 + C596 + C596 + C49025 * C590) * C3859 +
            (C113 * C581 + C597 + C597 + C49025 * C591) * C49257) *
               C49258 +
           ((C113 * C1483 + C3154 + C3154 + C49025 * C1491) * C3857 +
            (C113 * C1482 + C3155 + C3155 + C49025 * C1490) * C3858 +
            (C113 * C1481 + C3156 + C3156 + C49025 * C1489) * C3859 +
            (C113 * C1484 + C5601 + C5601 + C49025 * C1492) * C49257) *
               C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49235 +
            (C7965 + C7966 + C7967) * C48938) *
               C49258 +
           ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
              C49014 * C574 -
          (((C12876 + C12877 + C12878) * C48938 +
            (C10859 + C10858 + C10857) * C49235) *
               C49130 +
           ((C8161 + C8162 + C8163) * C48938 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49235) *
               C49258) *
              C49014 * C575 +
          (((C7907 * C578 + C8608 + C8608 + C7901 * C588 + C7909 * C1283 +
             C8609 + C8609 + C7902 * C1291 + C7911 * C1791 + C8610 + C8610 +
             C49290 * C1797) *
                C49235 +
            (C7907 * C579 + C8611 + C8611 + C7901 * C589 + C7909 * C1282 +
             C8612 + C8612 + C7902 * C1290 + C7911 * C1792 + C8613 + C8613 +
             C49290 * C1798) *
                C48938) *
               C49258 +
           ((C7907 * C1483 + C10675 + C10675 + C7901 * C1491 + C7909 * C1955 +
             C10676 + C10676 + C7902 * C1961 + C7911 * C9455 + C10677 + C10677 +
             C49290 * C9459) *
                C49235 +
            (C7907 * C1482 + C13417 + C13417 + C7901 * C1490 + C7909 * C1956 +
             C13418 + C13418 + C7902 * C1962 + C7911 * C9456 + C13419 + C13419 +
             C49290 * C9460) *
                C48938) *
               C49130) *
              C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[212] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 +
             C164 * C3858 + C165 * C3859 + C166 * C49257) *
                C49258 +
            (C5365 + C5366 + C5367 + C5368) * C49130) *
               C380 -
           ((C2530 * C49257 + C2529 * C3859 + C2528 * C3858 + C2893 * C3857) *
                C49130 +
            (C5368 + C5367 + C5366 + C5365) * C49258) *
               C49287) *
              C508 +
          (((C5732 + C5733 + C5734 + C5735) * C49258 +
            (C3331 * C3857 + C2701 * C3858 + C2700 * C3859 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49257) *
                C49130) *
               C49287 -
           ((C5735 + C5734 + C5733 + C5732) * C49130 +
            (C296 * C49257 + C297 * C3859 + C298 * C3858 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C3857) *
                C49258) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
              C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
              C49290 * C588) *
                 C49235 +
             (C7965 + C7966 + C7967) * C48938) *
                C49258 +
            ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
               C380 -
           (((C10418 + C10417 + C10416) * C48938 +
             (C10415 + C10414 + C10413) * C49235) *
                C49130 +
            (C13076 * C48938 + (C10412 + C10411 + C10410) * C49235) * C49258) *
               C49287) *
              C508 +
          ((((C10857 + C10858 + C10859) * C49235 +
             (C12878 + C12877 + C12876) * C48938) *
                C49258 +
            ((C10860 + C10861 + C10862) * C49235 +
             (C7907 * C2377 + C10213 + C10213 + C7901 * C2389 + C7909 * C2378 +
              C10214 + C10214 + C7902 * C2390 + C7911 * C10206 + C10215 +
              C10215 + C49290 * C10208) *
                 C48938) *
                C49130) *
               C49287 -
           (((C12876 + C12877 + C12878) * C48938 +
             (C10859 + C10858 + C10857) * C49235) *
                C49130 +
            ((C8161 + C8162 + C8163) * C48938 +
             (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
              C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
              C7901 * C270) *
                 C49235) *
                C49258) *
               C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[213] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 +
             C164 * C3858 + C165 * C3859 + C166 * C49257) *
                C49258 +
            (C5365 + C5366 + C5367 + C5368) * C49130) *
               C782 -
           ((C2530 * C49257 + C2529 * C3859 + C2528 * C3858 + C2893 * C3857) *
                C49130 +
            (C5368 + C5367 + C5366 + C5365) * C49258) *
               C49287) *
              C48997 * C510 +
          (((C5369 + C5370 + C5371 + C5372) * C49258 +
            (C2528 * C3857 + C2529 * C3858 + C2530 * C3859 +
             (C113 * C935 + C951 + C951 + C49025 * C945) * C49257) *
                C49130) *
               C49287 -
           ((C5372 + C5371 + C5370 + C5369) * C49130 +
            (C167 * C49257 + C166 * C3859 + C165 * C3858 + C164 * C3857) *
                C49258) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
              C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
              C49290 * C588) *
                 C49235 +
             (C7965 + C7966 + C7967) * C48938) *
                C49258 +
            ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
               C782 -
           (((C10418 + C10417 + C10416) * C48938 +
             (C10415 + C10414 + C10413) * C49235) *
                C49130 +
            (C13076 * C48938 + (C10412 + C10411 + C10410) * C49235) * C49258) *
               C49287) *
              C48997 * C510 +
          (((C13075 * C49235 + (C8348 + C8347 + C8346) * C48938) * C49258 +
            ((C10416 + C10417 + C10418) * C49235 +
             (C7907 * C933 + C9180 + C9180 + C7901 * C943 + C7909 * C2379 +
              C9181 + C9181 + C7902 * C2391 + C7911 * C2380 + C9182 + C9182 +
              C49290 * C2392) *
                 C48938) *
                C49130) *
               C49287 -
           (((C8346 + C8347 + C8348) * C48938 + C13076 * C49235) * C49130 +
            ((C7970 + C7969 + C7968) * C48938 +
             (C7967 + C7966 + C7965) * C49235) *
                C49258) *
               C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[214] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 +
             C164 * C3858 + C165 * C3859 + C166 * C49257) *
                C49258 +
            (C5365 + C5366 + C5367 + C5368) * C49130) *
               C782 -
           ((C2530 * C49257 + C2529 * C3859 + C2528 * C3858 + C2893 * C3857) *
                C49130 +
            (C5368 + C5367 + C5366 + C5365) * C49258) *
               C49287) *
              C250 +
          (((C5732 + C5733 + C5734 + C5735) * C49258 +
            (C3331 * C3857 + C2701 * C3858 + C2700 * C3859 +
             (C113 * C2676 + C2691 + C2691 + C49025 * C2678) * C49257) *
                C49130) *
               C49287 -
           ((C5735 + C5734 + C5733 + C5732) * C49130 +
            (C296 * C49257 + C297 * C3859 + C298 * C3858 +
             (C113 * C258 + C285 + C285 + C49025 * C270) * C3857) *
                C49258) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
              C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
              C49290 * C588) *
                 C49235 +
             (C7965 + C7966 + C7967) * C48938) *
                C49258 +
            ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
               C782 -
           (((C10418 + C10417 + C10416) * C48938 +
             (C10415 + C10414 + C10413) * C49235) *
                C49130 +
            (C13076 * C48938 + (C10412 + C10411 + C10410) * C49235) * C49258) *
               C49287) *
              C250 +
          ((((C10857 + C10858 + C10859) * C49235 +
             (C12878 + C12877 + C12876) * C48938) *
                C49258 +
            ((C10860 + C10861 + C10862) * C49235 +
             (C7907 * C2377 + C10213 + C10213 + C7901 * C2389 + C7909 * C2378 +
              C10214 + C10214 + C7902 * C2390 + C7911 * C10206 + C10215 +
              C10215 + C49290 * C10208) *
                 C48938) *
                C49130) *
               C49287 -
           (((C12876 + C12877 + C12878) * C48938 +
             (C10859 + C10858 + C10857) * C49235) *
                C49130 +
            ((C8161 + C8162 + C8163) * C48938 +
             (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
              C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
              C7901 * C270) *
                 C49235) *
                C49258) *
               C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[215] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C3857 + C164 * C3858 +
            C165 * C3859 + C166 * C49257) *
               C49258 +
           (C5365 + C5366 + C5367 + C5368) * C49130) *
              C928 -
          ((C6094 + C6095 + C6096 + C6097) * C49130 +
           (C5368 + C5367 + C5366 + C5365) * C49258) *
              C929 +
          ((C6097 + C6096 + C6095 + C6094) * C49258 +
           (C3756 * C3857 + C2895 * C3858 + C2894 * C3859 +
            (C113 * C2852 + C2883 + C2883 + C49025 * C2860) * C49257) *
               C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49235 +
            (C7965 + C7966 + C7967) * C48938) *
               C49258 +
           ((C10410 + C10411 + C10412) * C49235 + C13075 * C48938) * C49130) *
              C928 -
          (((C10418 + C10417 + C10416) * C48938 +
            (C10415 + C10414 + C10413) * C49235) *
               C49130 +
           (C13076 * C48938 + (C10412 + C10411 + C10410) * C49235) * C49258) *
              C929 +
          ((C11281 * C49235 + (C10416 + C10417 + C10418) * C48938) * C49258 +
           ((C11291 + C11290 + C11289) * C49235 +
            (C7907 * C2850 + C10389 + C10389 + C7901 * C2858 + C7909 * C3306 +
             C10390 + C10390 + C7902 * C3312 + C7911 * C10362 + C10391 +
             C10391 + C49290 * C10366) *
                C48938) *
               C49130) *
              C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[216] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C49043 * C49014 * C48997 * C110 -
          (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
           C164 * C102) *
              C49043 * C49014 * C48997 * C111 +
          (C165 * C102 + C166 * C103 + C167 * C104 + C168 * C105 +
           (C113 * C121 + C153 + C153 + C49025 * C135) * C106) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C1064 +
           (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
              C49043 * C49014 * C48997 * C110 -
          ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
           (C1127 + C1126 + C1125) * C1064) *
              C49043 * C49014 * C48997 * C111 +
          (C1135 * C1064 + (C1133 + C1132 + C1131) * C1065 +
           (C1067 * C119 + C1104 + C1104 + C49322 * C133 + C1069 * C254 +
            C1105 + C1105 + C49310 * C266 + C1071 * C582 + C1106 + C1106 +
            C49290 * C592) *
               C49279) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C49319 +
           (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
              C49043 * C49014 * C48997 * C110 -
          ((C7971 + C7972 + C7973) * C49279 + (C7970 + C7969 + C7968) * C49306 +
           (C7967 + C7966 + C7965) * C49319) *
              C49043 * C49014 * C48997 * C111 +
          (C7975 * C49319 + (C7973 + C7972 + C7971) * C49306 +
           (C7907 * C119 + C7944 + C7944 + C7901 * C133 + C7909 * C254 + C7945 +
            C7945 + C7902 * C266 + C7911 * C582 + C7946 + C7946 +
            C49290 * C592) *
               C49279) *
              C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
           C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
           C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
           C9265 + C9265 + C9248 * C1797) *
              C48928 * C49043 * C49014 * C48997 * C110 -
          (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
           C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
           C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
           C9250 * C116 + C9270 + C9270 + C9244 * C130) *
              C48928 * C49043 * C49014 * C48997 * C111 +
          (C9250 * C117 + C9271 + C9271 + C9244 * C131 + C9252 * C256 + C9272 +
           C9272 + C9245 * C268 + C9254 * C580 + C9273 + C9273 + C9246 * C590 +
           C9256 * C1281 + C9274 + C9274 + C9247 * C1289 + C9258 * C1793 +
           C9275 + C9275 + C9248 * C1799) *
              C48928 * C49043 * C49014 * C48997 * C112)) /
            (p * q * std::sqrt(p + q));
    d2ee[217] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C49014 * C250 -
           (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
               C49043 * C49014 * C49285) *
              C252 +
          ((C298 * C102 + C297 * C103 + C296 * C104 + C295 * C105 +
            (C113 * C259 + C286 + C286 + C49025 * C271) * C106) *
               C49043 * C49014 * C49285 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C49014 * C250 -
           ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C1064) *
               C49043 * C49014 * C49285) *
              C252 +
          (((C1335 + C1334 + C1333) * C1064 + (C1332 + C1331 + C1330) * C1065 +
            (C1067 * C255 + C1315 + C1315 + C49322 * C267 + C1069 * C581 +
             C1316 + C1316 + C49310 * C591 + C1071 * C1284 + C1317 + C1317 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
            (C1127 + C1126 + C1125) * C1064) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C49014 * C250 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C49014 * C49285) *
              C252 +
          (((C8163 + C8162 + C8161) * C49319 +
            (C8160 + C8159 + C8158) * C49306 +
            (C7907 * C255 + C8143 + C8143 + C7901 * C267 + C7909 * C581 +
             C8144 + C8144 + C7902 * C591 + C7911 * C1284 + C8145 + C8145 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C49014 * C250 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C49014 * C49285) *
              C252 +
          ((C9250 * C257 + C9369 + C9369 + C9244 * C269 + C9252 * C579 + C9370 +
            C9370 + C9245 * C589 + C9254 * C1282 + C9371 + C9371 +
            C9246 * C1290 + C9256 * C1792 + C9372 + C9372 + C9247 * C1798 +
            C9258 * C9358 + C9373 + C9373 + C9248 * C9362) *
               C48928 * C49043 * C49014 * C49285 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C49014 * C250) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[218] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C380 -
           (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
            (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
               C49043 * C49287) *
              C48997 * C252 +
          ((C426 * C102 + C425 * C103 + C424 * C104 + C423 * C105 +
            (C113 * C387 + C414 + C414 + C49025 * C399) * C106) *
               C49043 * C49287 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C380 -
           ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
            (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
             C49322 * C398) *
                C1064) *
               C49043 * C49287) *
              C48997 * C252 +
          (((C1535 + C1534 + C1533) * C1064 + (C1532 + C1531 + C1530) * C1065 +
            (C1067 * C383 + C1515 + C1515 + C49322 * C395 + C1069 * C683 +
             C1516 + C1516 + C49310 * C693 + C1071 * C1484 + C1517 + C1517 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
            (C1127 + C1126 + C1125) * C1064) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C380 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C48997 * C252 +
          (((C8351 + C8350 + C8349) * C49319 +
            (C8348 + C8347 + C8346) * C49306 +
            (C7907 * C383 + C8331 + C8331 + C7901 * C395 + C7909 * C683 +
             C8332 + C8332 + C7902 * C693 + C7911 * C1484 + C8333 + C8333 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C380 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C48997 * C252 +
          ((C9250 * C385 + C9467 + C9467 + C9244 * C397 + C9252 * C681 + C9468 +
            C9468 + C9245 * C691 + C9254 * C1482 + C9469 + C9469 +
            C9246 * C1490 + C9256 * C1956 + C9470 + C9470 + C9247 * C1962 +
            C9258 * C9456 + C9471 + C9471 + C9248 * C9460) *
               C48928 * C49043 * C49287 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C380) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[219] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C49014 * C508 -
           (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
               C49043 * C49014 * C49285) *
              C510 +
          ((C298 * C102 + C297 * C103 + C296 * C104 + C295 * C105 +
            (C113 * C259 + C286 + C286 + C49025 * C271) * C106) *
               C49043 * C49014 * C49285 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C49014 * C508 -
           ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C1064) *
               C49043 * C49014 * C49285) *
              C510 +
          (((C1335 + C1334 + C1333) * C1064 + (C1332 + C1331 + C1330) * C1065 +
            (C1067 * C255 + C1315 + C1315 + C49322 * C267 + C1069 * C581 +
             C1316 + C1316 + C49310 * C591 + C1071 * C1284 + C1317 + C1317 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
            (C1127 + C1126 + C1125) * C1064) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C49014 * C508 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C49014 * C49285) *
              C510 +
          (((C8163 + C8162 + C8161) * C49319 +
            (C8160 + C8159 + C8158) * C49306 +
            (C7907 * C255 + C8143 + C8143 + C7901 * C267 + C7909 * C581 +
             C8144 + C8144 + C7902 * C591 + C7911 * C1284 + C8145 + C8145 +
             C49290 * C1292) *
                C49279) *
               C49043 * C49014 * C49285 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C49014 * C508 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C49014 * C49285) *
              C510 +
          ((C9250 * C257 + C9369 + C9369 + C9244 * C269 + C9252 * C579 + C9370 +
            C9370 + C9245 * C589 + C9254 * C1282 + C9371 + C9371 +
            C9246 * C1290 + C9256 * C1792 + C9372 + C9372 + C9247 * C1798 +
            C9258 * C9358 + C9373 + C9373 + C9248 * C9362) *
               C48928 * C49043 * C49014 * C49285 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C49014 * C508) *
              C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[220] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C49043 * C49014 * C574 -
          (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
           (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
              C49043 * C49014 * C575 +
          ((C113 * C578 + C594 + C594 + C49025 * C588) * C102 +
           (C113 * C579 + C595 + C595 + C49025 * C589) * C103 +
           (C113 * C580 + C596 + C596 + C49025 * C590) * C104 +
           (C113 * C581 + C597 + C597 + C49025 * C591) * C105 +
           (C113 * C582 + C598 + C598 + C49025 * C592) * C106) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C1064 +
           (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
              C49043 * C49014 * C574 -
          ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
           (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
            C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
            C49322 * C270) *
               C1064) *
              C49043 * C49014 * C575 +
          ((C1067 * C578 + C1801 + C1801 + C49322 * C588 + C1069 * C1283 +
            C1802 + C1802 + C49310 * C1291 + C1071 * C1791 + C1803 + C1803 +
            C49290 * C1797) *
               C1064 +
           (C1067 * C579 + C1804 + C1804 + C49322 * C589 + C1069 * C1282 +
            C1805 + C1805 + C49310 * C1290 + C1071 * C1792 + C1806 + C1806 +
            C49290 * C1798) *
               C1065 +
           (C1067 * C580 + C1807 + C1807 + C49322 * C590 + C1069 * C1281 +
            C1808 + C1808 + C49310 * C1289 + C1071 * C1793 + C1809 + C1809 +
            C49290 * C1799) *
               C49279) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C49319 +
           (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
              C49043 * C49014 * C574 -
          ((C8158 + C8159 + C8160) * C49279 + (C8161 + C8162 + C8163) * C49306 +
           (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
            C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
            C7901 * C270) *
               C49319) *
              C49043 * C49014 * C575 +
          ((C7907 * C578 + C8608 + C8608 + C7901 * C588 + C7909 * C1283 +
            C8609 + C8609 + C7902 * C1291 + C7911 * C1791 + C8610 + C8610 +
            C49290 * C1797) *
               C49319 +
           (C7907 * C579 + C8611 + C8611 + C7901 * C589 + C7909 * C1282 +
            C8612 + C8612 + C7902 * C1290 + C7911 * C1792 + C8613 + C8613 +
            C49290 * C1798) *
               C49306 +
           (C7907 * C580 + C8614 + C8614 + C7901 * C590 + C7909 * C1281 +
            C8615 + C8615 + C7902 * C1289 + C7911 * C1793 + C8616 + C8616 +
            C49290 * C1799) *
               C49279) *
              C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
           C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
           C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
           C9265 + C9265 + C9248 * C1797) *
              C48928 * C49043 * C49014 * C574 -
          (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
           C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
           C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
           C9250 * C258 + C9368 + C9368 + C9244 * C270) *
              C48928 * C49043 * C49014 * C575 +
          (C9250 * C578 + C9619 + C9619 + C9244 * C588 + C9252 * C1283 + C9620 +
           C9620 + C9245 * C1291 + C9254 * C1791 + C9621 + C9621 +
           C9246 * C1797 + C9256 * C9357 + C9622 + C9622 + C9247 * C9361 +
           C9258 * C9615 + C9623 + C9623 + C9248 * C9617) *
              C48928 * C49043 * C49014 * C576) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[221] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C380 -
           (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
            (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
               C49043 * C49287) *
              C508 +
          (((C113 * C680 + C696 + C696 + C49025 * C690) * C102 +
            (C113 * C681 + C697 + C697 + C49025 * C691) * C103 +
            (C113 * C682 + C698 + C698 + C49025 * C692) * C104 +
            (C113 * C683 + C699 + C699 + C49025 * C693) * C105 +
            (C113 * C684 + C700 + C700 + C49025 * C694) * C106) *
               C49043 * C49287 -
           (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C380 -
           ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
            (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
             C49322 * C398) *
                C1064) *
               C49043 * C49287) *
              C508 +
          (((C1067 * C680 + C1965 + C1965 + C49322 * C690 + C1069 * C1483 +
             C1966 + C1966 + C49310 * C1491 + C1071 * C1955 + C1967 + C1967 +
             C49290 * C1961) *
                C1064 +
            (C1067 * C681 + C1968 + C1968 + C49322 * C691 + C1069 * C1482 +
             C1969 + C1969 + C49310 * C1490 + C1071 * C1956 + C1970 + C1970 +
             C49290 * C1962) *
                C1065 +
            (C1067 * C682 + C1971 + C1971 + C49322 * C692 + C1069 * C1481 +
             C1972 + C1972 + C49310 * C1489 + C1071 * C1957 + C1973 + C1973 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C1064) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C380 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C508 +
          (((C7907 * C680 + C8763 + C8763 + C7901 * C690 + C7909 * C1483 +
             C8764 + C8764 + C7902 * C1491 + C7911 * C1955 + C8765 + C8765 +
             C49290 * C1961) *
                C49319 +
            (C7907 * C681 + C8766 + C8766 + C7901 * C691 + C7909 * C1482 +
             C8767 + C8767 + C7902 * C1490 + C7911 * C1956 + C8768 + C8768 +
             C49290 * C1962) *
                C49306 +
            (C7907 * C682 + C8769 + C8769 + C7901 * C692 + C7909 * C1481 +
             C8770 + C8770 + C7902 * C1489 + C7911 * C1957 + C8771 + C8771 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C380 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C508 +
          ((C9250 * C680 + C9709 + C9709 + C9244 * C690 + C9252 * C1483 +
            C9710 + C9710 + C9245 * C1491 + C9254 * C1955 + C9711 + C9711 +
            C9246 * C1961 + C9256 * C9455 + C9712 + C9712 + C9247 * C9459 +
            C9258 * C9705 + C9713 + C9713 + C9248 * C9707) *
               C48928 * C49043 * C49287 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C380) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[222] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C782 -
           (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
            (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
               C49043 * C49287) *
              C48997 * C510 +
          ((C426 * C102 + C425 * C103 + C424 * C104 + C423 * C105 +
            (C113 * C387 + C414 + C414 + C49025 * C399) * C106) *
               C49043 * C49287 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C782 -
           ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
            (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
             C49322 * C398) *
                C1064) *
               C49043 * C49287) *
              C48997 * C510 +
          (((C1535 + C1534 + C1533) * C1064 + (C1532 + C1531 + C1530) * C1065 +
            (C1067 * C383 + C1515 + C1515 + C49322 * C395 + C1069 * C683 +
             C1516 + C1516 + C49310 * C693 + C1071 * C1484 + C1517 + C1517 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C1131 + C1132 + C1133) * C49279 + (C1130 + C1129 + C1128) * C1065 +
            (C1127 + C1126 + C1125) * C1064) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C782 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C48997 * C510 +
          (((C8351 + C8350 + C8349) * C49319 +
            (C8348 + C8347 + C8346) * C49306 +
            (C7907 * C383 + C8331 + C8331 + C7901 * C395 + C7909 * C683 +
             C8332 + C8332 + C7902 * C693 + C7911 * C1484 + C8333 + C8333 +
             C49290 * C1492) *
                C49279) *
               C49043 * C49287 -
           ((C7971 + C7972 + C7973) * C49279 +
            (C7970 + C7969 + C7968) * C49306 +
            (C7967 + C7966 + C7965) * C49319) *
               C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C782 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C48997 * C510 +
          ((C9250 * C385 + C9467 + C9467 + C9244 * C397 + C9252 * C681 + C9468 +
            C9468 + C9245 * C691 + C9254 * C1482 + C9469 + C9469 +
            C9246 * C1490 + C9256 * C1956 + C9470 + C9470 + C9247 * C1962 +
            C9258 * C9456 + C9471 + C9471 + C9248 * C9460) *
               C48928 * C49043 * C49287 -
           (C9258 * C1792 + C9266 + C9266 + C9248 * C1798 + C9256 * C1282 +
            C9267 + C9267 + C9247 * C1290 + C9254 * C579 + C9268 + C9268 +
            C9246 * C589 + C9252 * C257 + C9269 + C9269 + C9245 * C269 +
            C9250 * C116 + C9270 + C9270 + C9244 * C130) *
               C48928 * C49043 * C782) *
              C48997 * C49283)) /
            (p * q * std::sqrt(p + q));
    d2ee[223] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C49043 * C782 -
           (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
            (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
               C49043 * C49287) *
              C250 +
          (((C113 * C680 + C696 + C696 + C49025 * C690) * C102 +
            (C113 * C681 + C697 + C697 + C49025 * C691) * C103 +
            (C113 * C682 + C698 + C698 + C49025 * C692) * C104 +
            (C113 * C683 + C699 + C699 + C49025 * C693) * C105 +
            (C113 * C684 + C700 + C700 + C49025 * C694) * C106) *
               C49043 * C49287 -
           (C295 * C106 + C296 * C105 + C297 * C104 + C298 * C103 +
            (C113 * C258 + C285 + C285 + C49025 * C270) * C102) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
             C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
             C49290 * C588) *
                C1064 +
            (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
               C49043 * C782 -
           ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
            (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
             C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
             C49322 * C398) *
                C1064) *
               C49043 * C49287) *
              C250 +
          (((C1067 * C680 + C1965 + C1965 + C49322 * C690 + C1069 * C1483 +
             C1966 + C1966 + C49310 * C1491 + C1071 * C1955 + C1967 + C1967 +
             C49290 * C1961) *
                C1064 +
            (C1067 * C681 + C1968 + C1968 + C49322 * C691 + C1069 * C1482 +
             C1969 + C1969 + C49310 * C1490 + C1071 * C1956 + C1970 + C1970 +
             C49290 * C1962) *
                C1065 +
            (C1067 * C682 + C1971 + C1971 + C49322 * C692 + C1069 * C1481 +
             C1972 + C1972 + C49310 * C1489 + C1071 * C1957 + C1973 + C1973 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C1330 + C1331 + C1332) * C49279 + (C1333 + C1334 + C1335) * C1065 +
            (C1071 * C1283 + C1312 + C1312 + C49290 * C1291 + C1069 * C578 +
             C1313 + C1313 + C49310 * C588 + C1067 * C258 + C1314 + C1314 +
             C49322 * C270) *
                C1064) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 +
             C7915 + C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
             C49290 * C588) *
                C49319 +
            (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
               C49043 * C782 -
           ((C8346 + C8347 + C8348) * C49279 +
            (C8349 + C8350 + C8351) * C49306 +
            (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
             C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
             C7901 * C398) *
                C49319) *
               C49043 * C49287) *
              C250 +
          (((C7907 * C680 + C8763 + C8763 + C7901 * C690 + C7909 * C1483 +
             C8764 + C8764 + C7902 * C1491 + C7911 * C1955 + C8765 + C8765 +
             C49290 * C1961) *
                C49319 +
            (C7907 * C681 + C8766 + C8766 + C7901 * C691 + C7909 * C1482 +
             C8767 + C8767 + C7902 * C1490 + C7911 * C1956 + C8768 + C8768 +
             C49290 * C1962) *
                C49306 +
            (C7907 * C682 + C8769 + C8769 + C7901 * C692 + C7909 * C1481 +
             C8770 + C8770 + C7902 * C1489 + C7911 * C1957 + C8771 + C8771 +
             C49290 * C1963) *
                C49279) *
               C49043 * C49287 -
           ((C8158 + C8159 + C8160) * C49279 +
            (C8161 + C8162 + C8163) * C49306 +
            (C7911 * C1283 + C8140 + C8140 + C49290 * C1291 + C7909 * C578 +
             C8141 + C8141 + C7902 * C588 + C7907 * C258 + C8142 + C8142 +
             C7901 * C270) *
                C49319) *
               C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
            C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
            C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
            C9265 + C9265 + C9248 * C1797) *
               C48928 * C49043 * C782 -
           (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
            C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
            C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
            C9250 * C386 + C9466 + C9466 + C9244 * C398) *
               C48928 * C49043 * C49287) *
              C250 +
          ((C9250 * C680 + C9709 + C9709 + C9244 * C690 + C9252 * C1483 +
            C9710 + C9710 + C9245 * C1491 + C9254 * C1955 + C9711 + C9711 +
            C9246 * C1961 + C9256 * C9455 + C9712 + C9712 + C9247 * C9459 +
            C9258 * C9705 + C9713 + C9713 + C9248 * C9707) *
               C48928 * C49043 * C49287 -
           (C9258 * C9357 + C9364 + C9364 + C9248 * C9361 + C9256 * C1791 +
            C9365 + C9365 + C9247 * C1797 + C9254 * C1283 + C9366 + C9366 +
            C9246 * C1291 + C9252 * C578 + C9367 + C9367 + C9245 * C588 +
            C9250 * C258 + C9368 + C9368 + C9244 * C270) *
               C48928 * C49043 * C782) *
              C49285) *
         C48963) /
            (p * q * std::sqrt(p + q));
    d2ee[224] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C49025 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C49043 * C928 -
          (C423 * C106 + C424 * C105 + C425 * C104 + C426 * C103 +
           (C113 * C386 + C413 + C413 + C49025 * C398) * C102) *
              C49043 * C929 +
          ((C113 * C931 + C947 + C947 + C49025 * C941) * C102 +
           (C113 * C932 + C948 + C948 + C49025 * C942) * C103 +
           (C113 * C933 + C949 + C949 + C49025 * C943) * C104 +
           (C113 * C934 + C950 + C950 + C49025 * C944) * C105 +
           (C113 * C935 + C951 + C951 + C49025 * C945) * C106) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C1067 * C115 + C1074 + C1074 + C49322 * C129 + C1069 * C258 +
            C1075 + C1075 + C49310 * C270 + C1071 * C578 + C1076 + C1076 +
            C49290 * C588) *
               C1064 +
           (C1125 + C1126 + C1127) * C1065 + C1135 * C49279) *
              C49043 * C928 -
          ((C1530 + C1531 + C1532) * C49279 + (C1533 + C1534 + C1535) * C1065 +
           (C1071 * C1483 + C1512 + C1512 + C49290 * C1491 + C1069 * C680 +
            C1513 + C1513 + C49310 * C690 + C1067 * C386 + C1514 + C1514 +
            C49322 * C398) *
               C1064) *
              C49043 * C929 +
          ((C1067 * C931 + C2394 + C2394 + C49322 * C941 + C1069 * C2375 +
            C2395 + C2395 + C49310 * C2387 + C1071 * C2376 + C2396 + C2396 +
            C49290 * C2388) *
               C1064 +
           (C1067 * C932 + C2397 + C2397 + C49322 * C942 + C1069 * C2377 +
            C2398 + C2398 + C49310 * C2389 + C1071 * C2378 + C2399 + C2399 +
            C49290 * C2390) *
               C1065 +
           (C1067 * C933 + C2400 + C2400 + C49322 * C943 + C1069 * C2379 +
            C2401 + C2401 + C49310 * C2391 + C1071 * C2380 + C2402 + C2402 +
            C49290 * C2392) *
               C49279) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7907 * C115 + C7914 + C7914 + C7901 * C129 + C7909 * C258 + C7915 +
            C7915 + C7902 * C270 + C7911 * C578 + C7916 + C7916 +
            C49290 * C588) *
               C49319 +
           (C7965 + C7966 + C7967) * C49306 + C7975 * C49279) *
              C49043 * C928 -
          ((C8346 + C8347 + C8348) * C49279 + (C8349 + C8350 + C8351) * C49306 +
           (C7911 * C1483 + C8328 + C8328 + C49290 * C1491 + C7909 * C680 +
            C8329 + C8329 + C7902 * C690 + C7907 * C386 + C8330 + C8330 +
            C7901 * C398) *
               C49319) *
              C49043 * C929 +
          ((C7907 * C931 + C9174 + C9174 + C7901 * C941 + C7909 * C2375 +
            C9175 + C9175 + C7902 * C2387 + C7911 * C2376 + C9176 + C9176 +
            C49290 * C2388) *
               C49319 +
           (C7907 * C932 + C9177 + C9177 + C7901 * C942 + C7909 * C2377 +
            C9178 + C9178 + C7902 * C2389 + C7911 * C2378 + C9179 + C9179 +
            C49290 * C2390) *
               C49306 +
           (C7907 * C933 + C9180 + C9180 + C7901 * C943 + C7909 * C2379 +
            C9181 + C9181 + C7902 * C2391 + C7911 * C2380 + C9182 + C9182 +
            C49290 * C2392) *
               C49279) *
              C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C9250 * C115 + C9261 + C9261 + C9244 * C129 + C9252 * C258 + C9262 +
           C9262 + C9245 * C270 + C9254 * C578 + C9263 + C9263 + C9246 * C588 +
           C9256 * C1283 + C9264 + C9264 + C9247 * C1291 + C9258 * C1791 +
           C9265 + C9265 + C9248 * C1797) *
              C48928 * C49043 * C928 -
          (C9258 * C9455 + C9462 + C9462 + C9248 * C9459 + C9256 * C1955 +
           C9463 + C9463 + C9247 * C1961 + C9254 * C1483 + C9464 + C9464 +
           C9246 * C1491 + C9252 * C680 + C9465 + C9465 + C9245 * C690 +
           C9250 * C386 + C9466 + C9466 + C9244 * C398) *
              C48928 * C49043 * C929 +
          (C9250 * C931 + C9946 + C9946 + C9244 * C941 + C9252 * C2375 + C9947 +
           C9947 + C9245 * C2387 + C9254 * C2376 + C9948 + C9948 +
           C9246 * C2388 + C9256 * C9939 + C9949 + C9949 + C9247 * C9943 +
           C9258 * C9940 + C9950 + C9950 + C9248 * C9944) *
              C48928 * C49043 * C930) *
         C48997 * C48963) /
            (p * q * std::sqrt(p + q));
}
