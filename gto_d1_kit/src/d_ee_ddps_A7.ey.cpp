/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2210_1_et(const double ae,
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
                            const double* const vrx,
                            const double* const vry,
                            const double* const vrz,
                            double* const etx,
                            double* const ety,
                            double* const etz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double C85132 = g[102];
    const double C85150 = g[103];
    const double C85166 = g[104];
    const double C85272 = g[105];
    const double C85290 = g[106];
    const double C85365 = g[107];
    const double C85383 = g[108];
    const double C85457 = g[109];
    const double C85501 = g[110];
    const double C85544 = g[111];
    const double C85588 = g[112];
    const double C85604 = g[113];
    const double C85680 = g[114];
    const double C85697 = g[115];
    const double C85771 = g[116];
    const double C85788 = g[117];
    const double C85863 = g[118];
    const double C85907 = g[119];
    const double C85950 = g[120];
    const double C85993 = g[121];
    const double C86009 = g[122];
    const double C86084 = g[123];
    const double C86128 = g[124];
    const double C86145 = g[125];
    const double C86218 = g[126];
    const double C86262 = g[127];
    const double C86305 = g[128];
    const double C86348 = g[129];
    const double C86391 = g[130];
    const double C86434 = g[131];
    const double C86477 = g[132];
    const double C85136 = vrx[0];
    const double C85137 = vrx[1];
    const double C85138 = vrx[2];
    const double C85154 = vrx[3];
    const double C85170 = vrx[4];
    const double C85185 = vrx[5];
    const double C85200 = vrx[6];
    const double C85215 = vrx[7];
    const double C85230 = vrx[8];
    const double C85245 = vrx[9];
    const double C85260 = vrx[10];
    const double C85276 = vrx[11];
    const double C85277 = vrx[12];
    const double C85278 = vrx[13];
    const double C85294 = vrx[14];
    const double C85309 = vrx[15];
    const double C85338 = vrx[16];
    const double C85353 = vrx[17];
    const double C85369 = vrx[18];
    const double C85370 = vrx[19];
    const double C85371 = vrx[20];
    const double C85387 = vrx[21];
    const double C85402 = vrx[22];
    const double C85431 = vrx[23];
    const double C85489 = vrx[24];
    const double C85548 = vrx[25];
    const double C85592 = vrx[26];
    const double C85622 = vrx[27];
    const double C85637 = vrx[28];
    const double C85638 = vrx[29];
    const double C85653 = vrx[30];
    const double C85668 = vrx[31];
    const double C85684 = vrx[32];
    const double C85685 = vrx[33];
    const double C85715 = vrx[34];
    const double C85744 = vrx[35];
    const double C85759 = vrx[36];
    const double C85775 = vrx[37];
    const double C85776 = vrx[38];
    const double C85806 = vrx[39];
    const double C85807 = vrx[40];
    const double C85822 = vrx[41];
    const double C85837 = vrx[42];
    const double C85895 = vrx[43];
    const double C85997 = vrx[44];
    const double C86027 = vrx[45];
    const double C86056 = vrx[46];
    const double C86071 = vrx[47];
    const double C86072 = vrx[48];
    const double C86116 = vrx[49];
    const double C86132 = vrx[50];
    const double C86133 = vrx[51];
    const double C86163 = vrx[52];
    const double C86192 = vrx[53];
    const double C86250 = vrx[54];
    const double C86524 = vry[0];
    const double C86525 = vry[1];
    const double C86526 = vry[2];
    const double C86541 = vry[3];
    const double C86556 = vry[4];
    const double C86571 = vry[5];
    const double C86586 = vry[6];
    const double C86601 = vry[7];
    const double C86616 = vry[8];
    const double C86631 = vry[9];
    const double C86646 = vry[10];
    const double C86661 = vry[11];
    const double C86662 = vry[12];
    const double C86663 = vry[13];
    const double C86678 = vry[14];
    const double C86693 = vry[15];
    const double C86722 = vry[16];
    const double C86737 = vry[17];
    const double C86752 = vry[18];
    const double C86753 = vry[19];
    const double C86754 = vry[20];
    const double C86769 = vry[21];
    const double C86784 = vry[22];
    const double C86813 = vry[23];
    const double C86870 = vry[24];
    const double C86927 = vry[25];
    const double C86970 = vry[26];
    const double C86999 = vry[27];
    const double C87014 = vry[28];
    const double C87015 = vry[29];
    const double C87030 = vry[30];
    const double C87045 = vry[31];
    const double C87060 = vry[32];
    const double C87061 = vry[33];
    const double C87090 = vry[34];
    const double C87119 = vry[35];
    const double C87134 = vry[36];
    const double C87149 = vry[37];
    const double C87150 = vry[38];
    const double C87179 = vry[39];
    const double C87180 = vry[40];
    const double C87195 = vry[41];
    const double C87210 = vry[42];
    const double C87267 = vry[43];
    const double C87366 = vry[44];
    const double C87395 = vry[45];
    const double C87424 = vry[46];
    const double C87439 = vry[47];
    const double C87440 = vry[48];
    const double C87483 = vry[49];
    const double C87498 = vry[50];
    const double C87499 = vry[51];
    const double C87528 = vry[52];
    const double C87557 = vry[53];
    const double C87614 = vry[54];
    const double C87882 = vrz[0];
    const double C87883 = vrz[1];
    const double C87884 = vrz[2];
    const double C87899 = vrz[3];
    const double C87914 = vrz[4];
    const double C87929 = vrz[5];
    const double C87944 = vrz[6];
    const double C87959 = vrz[7];
    const double C87974 = vrz[8];
    const double C87989 = vrz[9];
    const double C88004 = vrz[10];
    const double C88019 = vrz[11];
    const double C88020 = vrz[12];
    const double C88021 = vrz[13];
    const double C88036 = vrz[14];
    const double C88051 = vrz[15];
    const double C88080 = vrz[16];
    const double C88095 = vrz[17];
    const double C88110 = vrz[18];
    const double C88111 = vrz[19];
    const double C88112 = vrz[20];
    const double C88127 = vrz[21];
    const double C88142 = vrz[22];
    const double C88171 = vrz[23];
    const double C88228 = vrz[24];
    const double C88285 = vrz[25];
    const double C88328 = vrz[26];
    const double C88357 = vrz[27];
    const double C88372 = vrz[28];
    const double C88373 = vrz[29];
    const double C88388 = vrz[30];
    const double C88403 = vrz[31];
    const double C88418 = vrz[32];
    const double C88419 = vrz[33];
    const double C88448 = vrz[34];
    const double C88477 = vrz[35];
    const double C88492 = vrz[36];
    const double C88507 = vrz[37];
    const double C88508 = vrz[38];
    const double C88537 = vrz[39];
    const double C88538 = vrz[40];
    const double C88553 = vrz[41];
    const double C88568 = vrz[42];
    const double C88625 = vrz[43];
    const double C88724 = vrz[44];
    const double C88753 = vrz[45];
    const double C88782 = vrz[46];
    const double C88797 = vrz[47];
    const double C88798 = vrz[48];
    const double C88841 = vrz[49];
    const double C88856 = vrz[50];
    const double C88857 = vrz[51];
    const double C88886 = vrz[52];
    const double C88915 = vrz[53];
    const double C88972 = vrz[54];
    const double C89274 = C85548 * p;
    const double C89273 = C86250 * p;
    const double C89272 = C86163 * p;
    const double C89271 = C86133 * p;
    const double C89270 = C86116 * p;
    const double C89269 = C86056 * p;
    const double C89268 = C85806 * p;
    const double C89267 = C86027 * p;
    const double C89266 = C85369 * p;
    const double C89265 = C85895 * p;
    const double C89264 = C85775 * p;
    const double C89263 = C85837 * p;
    const double C89262 = C85822 / q;
    const double C89261 = C85807 * p;
    const double C89260 = C85776 * p;
    const double C89259 = C85759 * p;
    const double C89258 = C85744 * p;
    const double C89257 = C85685 * p;
    const double C89256 = C85668 * p;
    const double C89255 = C85653 * p;
    const double C89254 = C85622 * p;
    const double C89253 = C85276 * p;
    const double C89252 = C85548 / q;
    const double C89251 = C85489 * p;
    const double C89250 = C85370 * p;
    const double C89249 = C85431 * p;
    const double C89248 = C85402 * p;
    const double C89247 = C85387 / q;
    const double C89246 = C85371 * p;
    const double C89245 = C85353 * p;
    const double C89244 = C85338 * p;
    const double C89243 = C85277 * p;
    const double C89242 = C85309 * p;
    const double C89241 = C85294 / q;
    const double C89240 = C85278 * p;
    const double C89239 = C85260 * p;
    const double C89238 = C85245 * p;
    const double C89237 = C85230 * p;
    const double C89236 = de * zCD;
    const double C89235 = be * zAB;
    const double C89234 = C85215 * p;
    const double C89233 = C85200 * p;
    const double C89232 = C85185 * p;
    const double C89231 = de * yCD;
    const double C89230 = be * yAB;
    const double C89229 = 2 * q;
    const double C89228 = de * xCD;
    const double C89227 = be * xAB;
    const double C89351 = C86927 * p;
    const double C89347 = C87614 * p;
    const double C89346 = C87528 * p;
    const double C89345 = C87499 * p;
    const double C89344 = C87483 * p;
    const double C89343 = C87424 * p;
    const double C89342 = C87179 * p;
    const double C89341 = C87395 * p;
    const double C89340 = C86752 * p;
    const double C89338 = C87267 * p;
    const double C89336 = C87149 * p;
    const double C89335 = C87210 * p;
    const double C89334 = C87195 / q;
    const double C89333 = C87180 * p;
    const double C89332 = C87150 * p;
    const double C89331 = C87134 * p;
    const double C89330 = C87119 * p;
    const double C89329 = C87061 * p;
    const double C89328 = C87045 * p;
    const double C89327 = C87030 * p;
    const double C89326 = C86999 * p;
    const double C89325 = C86661 * p;
    const double C89323 = C86927 / q;
    const double C89322 = C86870 * p;
    const double C89320 = C86753 * p;
    const double C89319 = C86813 * p;
    const double C89318 = C86784 * p;
    const double C89317 = C86769 / q;
    const double C89316 = C86754 * p;
    const double C89315 = C86737 * p;
    const double C89314 = C86722 * p;
    const double C89313 = C86662 * p;
    const double C89311 = C86693 * p;
    const double C89310 = C86678 / q;
    const double C89309 = C86663 * p;
    const double C89308 = C86646 * p;
    const double C89307 = C86631 * p;
    const double C89306 = C86616 * p;
    const double C89305 = C86601 * p;
    const double C89304 = C86586 * p;
    const double C89303 = C86571 * p;
    const double C89417 = C88285 * p;
    const double C89413 = C88972 * p;
    const double C89412 = C88886 * p;
    const double C89411 = C88857 * p;
    const double C89410 = C88841 * p;
    const double C89409 = C88782 * p;
    const double C89408 = C88537 * p;
    const double C89407 = C88753 * p;
    const double C89406 = C88110 * p;
    const double C89404 = C88625 * p;
    const double C89402 = C88507 * p;
    const double C89401 = C88568 * p;
    const double C89400 = C88553 / q;
    const double C89399 = C88538 * p;
    const double C89398 = C88508 * p;
    const double C89397 = C88492 * p;
    const double C89396 = C88477 * p;
    const double C89395 = C88419 * p;
    const double C89394 = C88403 * p;
    const double C89393 = C88388 * p;
    const double C89392 = C88357 * p;
    const double C89391 = C88019 * p;
    const double C89389 = C88285 / q;
    const double C89388 = C88228 * p;
    const double C89386 = C88111 * p;
    const double C89385 = C88171 * p;
    const double C89384 = C88142 * p;
    const double C89383 = C88127 / q;
    const double C89382 = C88112 * p;
    const double C89381 = C88095 * p;
    const double C89380 = C88080 * p;
    const double C89379 = C88020 * p;
    const double C89377 = C88051 * p;
    const double C89376 = C88036 / q;
    const double C89375 = C88021 * p;
    const double C89374 = C88004 * p;
    const double C89373 = C87989 * p;
    const double C89372 = C87974 * p;
    const double C89371 = C87959 * p;
    const double C89370 = C87944 * p;
    const double C89369 = C87929 * p;
    const double C89291 = C89264 / q;
    const double C89290 = C89263 / q;
    const double C89289 = C89261 / q;
    const double C89293 = C89260 / q;
    const double C89284 = C89250 / q;
    const double C89283 = C89249 / q;
    const double C89287 = C89248 / q;
    const double C89282 = C89246 / q;
    const double C89286 = C89244 / q;
    const double C89281 = C89243 / q;
    const double C89279 = C89242 / q;
    const double C89278 = C89240 / q;
    const double C89277 = C89235 + C89236;
    const double C89276 = C89230 + C89231;
    const double C89298 = C86071 / C89229;
    const double C89297 = C85170 / C89229;
    const double C89296 = C85637 / C89229;
    const double C89295 = C86072 / C89229;
    const double C89294 = C85997 / C89229;
    const double C89292 = C85638 / C89229;
    const double C89288 = C85592 / C89229;
    const double C89285 = C85136 / C89229;
    const double C89280 = C85154 / C89229;
    const double C89352 = C87439 / C89229;
    const double C89350 = C86556 / C89229;
    const double C89349 = C87014 / C89229;
    const double C89348 = C87440 / C89229;
    const double C89339 = C87366 / C89229;
    const double C89337 = C87015 / C89229;
    const double C89324 = C86970 / C89229;
    const double C89321 = C86524 / C89229;
    const double C89312 = C86541 / C89229;
    const double C89418 = C88797 / C89229;
    const double C89416 = C87914 / C89229;
    const double C89415 = C88372 / C89229;
    const double C89414 = C88798 / C89229;
    const double C89405 = C88724 / C89229;
    const double C89403 = C88373 / C89229;
    const double C89390 = C88328 / C89229;
    const double C89387 = C87882 / C89229;
    const double C89378 = C87899 / C89229;
    const double C89275 = C89227 + C89228;
    const double C89363 = C89336 / q;
    const double C89362 = C89335 / q;
    const double C89361 = C89333 / q;
    const double C89364 = C89332 / q;
    const double C89358 = C89320 / q;
    const double C89357 = C89319 / q;
    const double C89360 = C89318 / q;
    const double C89356 = C89316 / q;
    const double C89359 = C89314 / q;
    const double C89355 = C89313 / q;
    const double C89354 = C89311 / q;
    const double C89353 = C89309 / q;
    const double C89429 = C89402 / q;
    const double C89428 = C89401 / q;
    const double C89427 = C89399 / q;
    const double C89430 = C89398 / q;
    const double C89424 = C89386 / q;
    const double C89423 = C89385 / q;
    const double C89426 = C89384 / q;
    const double C89422 = C89382 / q;
    const double C89425 = C89380 / q;
    const double C89421 = C89379 / q;
    const double C89420 = C89377 / q;
    const double C89419 = C89375 / q;
    const double C79754 = -(C85137 * C89277 + C89237) / q;
    const double C79755 = -(C85136 * C89277 + C89238) / q;
    const double C79765 = -(C85154 * C89277 + C89239) / q;
    const double C79810 = -(C85277 * C89277 + C89244) / q;
    const double C79811 = -(C85215 * C89277 + C89245) / q;
    const double C79864 = C85260 / q - (C85370 * C89277) / q - C89283;
    const double C79900 = -(C85200 * C89277 + C89251) / q;
    const double C79954 = C85215 / C89229 - (C85353 * C89277) / q - C89287;
    const double C80004 = -(C85276 * C89277 + C89255) / q;
    const double C80014 = -(C85592 * C89277 + C89256) / q;
    const double C80059 = -(C85684 * C89277 + C89258) / q;
    const double C80060 = -(C85638 * C89277 + C89259) / q;
    const double C80113 = C85668 / q - (C85775 * C89277) / q - C89290;
    const double C80149 = -(C85622 * C89277 + C89265) / q;
    const double C80176 = C85276 / C89229 - (C85653 * C89277) / q - C89293;
    const double C80253 = C89247 - (C85369 * C89277) / q - C89269 / q;
    const double C80263 = C86071 / q - (C85997 * C89277) / q - (C86072 * p) / q;
    const double C80306 = C89262 - (C85806 * C89277) / q - C89270 / q;
    const double C80359 =
        (2 * C86072) / q - (C86132 * C89277) / q - (C86192 * p) / q;
    const double C80360 =
        (3 * C85997) / C89229 - (C86072 * C89277) / q - (C86132 * p) / q;
    const double C80395 = C89252 - (C86027 * C89277) / q - C89273 / q;
    const double C80422 =
        (3 * C85369) / C89229 - (C86056 * C89277) / q - C89271 / q;
    const double C80449 =
        (3 * C85806) / C89229 - (C86116 * C89277) / q - C89272 / q;
    const double C80506 = -(C85294 * C89277 + C89274) / q;
    const double C80573 = C85294 / C89229 - (C85548 * C89277) / q - C89267 / q;
    const double C81903 = -(C86525 * C89277 + C89306) / q;
    const double C81904 = -(C86524 * C89277 + C89307) / q;
    const double C81913 = -(C86541 * C89277 + C89308) / q;
    const double C81958 = -(C86662 * C89277 + C89314) / q;
    const double C81959 = -(C86601 * C89277 + C89315) / q;
    const double C82048 = -(C86586 * C89277 + C89322) / q;
    const double C82147 = -(C86661 * C89277 + C89327) / q;
    const double C82156 = -(C86970 * C89277 + C89328) / q;
    const double C82204 = -(C87060 * C89277 + C89330) / q;
    const double C82205 = -(C87015 * C89277 + C89331) / q;
    const double C82294 = -(C86999 * C89277 + C89338) / q;
    const double C82393 = C89317 - (C86752 * C89277) / q - C89343 / q;
    const double C82402 = C87439 / q - (C87366 * C89277) / q - (C87440 * p) / q;
    const double C82448 = C89334 - (C87179 * C89277) / q - C89344 / q;
    const double C82501 =
        (2 * C87440) / q - (C87498 * C89277) / q - (C87557 * p) / q;
    const double C82502 =
        (3 * C87366) / C89229 - (C87440 * C89277) / q - (C87498 * p) / q;
    const double C82537 = C89323 - (C87395 * C89277) / q - C89347 / q;
    const double C82564 =
        (3 * C86752) / C89229 - (C87424 * C89277) / q - C89345 / q;
    const double C82591 =
        (3 * C87179) / C89229 - (C87483 * C89277) / q - C89346 / q;
    const double C82642 = -(C86678 * C89277 + C89351) / q;
    const double C82709 = C86678 / C89229 - (C86927 * C89277) / q - C89341 / q;
    const double C84030 = -(C85132 * be + C87883 * C89277 + C89372) / q;
    const double C84031 = -(C85150 * be + C87882 * C89277 + C89373) / q;
    const double C84040 = -(C85166 * be + C87899 * C89277 + C89374) / q;
    const double C84085 = -(C85272 * be + C88020 * C89277 + C89380) / q;
    const double C84086 = -(C85290 * be + C87959 * C89277 + C89381) / q;
    const double C84175 = -(C85457 * be + C87944 * C89277 + C89388) / q;
    const double C84274 = -(C85588 * be + C88019 * C89277 + C89393) / q;
    const double C84283 = -(C85604 * be + C88328 * C89277 + C89394) / q;
    const double C84328 = -(C85680 * be + C88418 * C89277 + C89396) / q;
    const double C84329 = -(C85697 * be + C88373 * C89277 + C89397) / q;
    const double C84418 = -(C85863 * be + C88357 * C89277 + C89404) / q;
    const double C84517 =
        C89383 - (C85993 * be + C88110 * C89277) / q - C89409 / q;
    const double C84526 =
        C88797 / q - (C86009 * be + C88724 * C89277) / q - (C88798 * p) / q;
    const double C84569 =
        C89400 - (C86084 * be + C88537 * C89277) / q - C89410 / q;
    const double C84625 = (2 * C88798) / q -
                          (C86128 * be + C88856 * C89277) / q -
                          (C88915 * p) / q;
    const double C84626 = (3 * C88724) / C89229 -
                          (C86145 * be + C88798 * C89277) / q -
                          (C88856 * p) / q;
    const double C84661 =
        C89389 - (C86218 * be + C88753 * C89277) / q - C89413 / q;
    const double C84688 = (3 * C88110) / C89229 -
                          (C86262 * be + C88782 * C89277) / q - C89411 / q;
    const double C84715 = (3 * C88537) / C89229 -
                          (C86305 * be + C88841 * C89277) / q - C89412 / q;
    const double C84766 = -(C86348 * be + C88036 * C89277 + C89417) / q;
    const double C84833 =
        C88036 / C89229 - (C86391 * be + C88285 * C89277) / q - C89407 / q;
    const double C79733 = -(C85137 * C89276 + C89232) / q;
    const double C79734 = -(C85136 * C89276 + C89233) / q;
    const double C79744 = -(C85154 * C89276 + C89234) / q;
    const double C79792 = C85215 / q - (C85277 * C89276) / q - C89279;
    const double C79846 = -(C85370 * C89276 + C89248) / q;
    const double C79847 = -(C85260 * C89276 + C89245) / q;
    const double C79918 = -(C85245 * C89276 + C89251) / q;
    const double C79945 = C85260 / C89229 - (C85353 * C89276) / q - C89286;
    const double C79984 = C89241 - (C85276 * C89276) / q - C89254 / q;
    const double C79994 = C85637 / q - (C85592 * C89276) / q - (C85638 * p) / q;
    const double C80041 =
        (2 * C85638) / q - (C85684 * C89276) / q - (C85715 * p) / q;
    const double C80042 =
        (3 * C85592) / C89229 - (C85638 * C89276) / q - (C85684 * p) / q;
    const double C80095 = C85806 / q - (C85775 * C89276) / q - C89289;
    const double C80096 = C89262 - (C85668 * C89276) / q - C89259 / q;
    const double C80140 =
        (3 * C85276) / C89229 - (C85622 * C89276) / q - C89257 / q;
    const double C80167 = C89252 - (C85653 * C89276) / q - C89265 / q;
    const double C80194 =
        (3 * C85668) / C89229 - (C85759 * C89276) / q - C89258 / q;
    const double C80233 = -(C85369 * C89276 + C89267) / q;
    const double C80243 = -(C85997 * C89276 + C89268) / q;
    const double C80341 = -(C86132 * C89276 + C89272) / q;
    const double C80342 = -(C86072 * C89276 + C89270) / q;
    const double C80386 = C85369 / C89229 - (C86027 * C89276) / q - C89293;
    const double C80413 = -(C86056 * C89276 + C89273) / q;
    const double C80556 = C85387 / C89229 - (C85548 * C89276) / q - C89255 / q;
    const double C80619 = -(C85387 * C89276 + C89274) / q;
    const double C81884 = -(C85132 * be + C86525 * C89276 + C89303) / q;
    const double C81885 = -(C85150 * be + C86524 * C89276 + C89304) / q;
    const double C81894 = -(C85166 * be + C86541 * C89276 + C89305) / q;
    const double C81994 = -(C85365 * be + C86753 * C89276 + C89318) / q;
    const double C81995 = -(C85383 * be + C86646 * C89276 + C89315) / q;
    const double C82066 = -(C85501 * be + C86631 * C89276 + C89322) / q;
    const double C82129 =
        C89310 - (C85588 * be + C86661 * C89276) / q - C89326 / q;
    const double C82138 =
        C87014 / q - (C85604 * be + C86970 * C89276) / q - (C87015 * p) / q;
    const double C82185 = (2 * C87015) / q -
                          (C85680 * be + C87060 * C89276) / q -
                          (C87090 * p) / q;
    const double C82186 = (3 * C86970) / C89229 -
                          (C85697 * be + C87015 * C89276) / q -
                          (C87060 * p) / q;
    const double C82241 =
        C89334 - (C85788 * be + C87045 * C89276) / q - C89331 / q;
    const double C82285 = (3 * C86661) / C89229 -
                          (C85863 * be + C86999 * C89276) / q - C89329 / q;
    const double C82312 =
        C89323 - (C85907 * be + C87030 * C89276) / q - C89338 / q;
    const double C82339 = (3 * C87045) / C89229 -
                          (C85950 * be + C87134 * C89276) / q - C89330 / q;
    const double C82375 = -(C85993 * be + C86752 * C89276 + C89341) / q;
    const double C82384 = -(C86009 * be + C87366 * C89276 + C89342) / q;
    const double C82483 = -(C86128 * be + C87498 * C89276 + C89346) / q;
    const double C82484 = -(C86145 * be + C87440 * C89276 + C89344) / q;
    const double C82555 = -(C86262 * be + C87424 * C89276 + C89347) / q;
    const double C82692 =
        C86769 / C89229 - (C86391 * be + C86927 * C89276) / q - C89327 / q;
    const double C82751 = -(C86434 * be + C86769 * C89276 + C89351) / q;
    const double C84011 = -(C87883 * C89276 + C89369) / q;
    const double C84012 = -(C87882 * C89276 + C89370) / q;
    const double C84021 = -(C87899 * C89276 + C89371) / q;
    const double C84121 = -(C88111 * C89276 + C89384) / q;
    const double C84122 = -(C88004 * C89276 + C89381) / q;
    const double C84193 = -(C87989 * C89276 + C89388) / q;
    const double C84256 = C89376 - (C88019 * C89276) / q - C89392 / q;
    const double C84265 = C88372 / q - (C88328 * C89276) / q - (C88373 * p) / q;
    const double C84310 =
        (2 * C88373) / q - (C88418 * C89276) / q - (C88448 * p) / q;
    const double C84311 =
        (3 * C88328) / C89229 - (C88373 * C89276) / q - (C88418 * p) / q;
    const double C84365 = C89400 - (C88403 * C89276) / q - C89397 / q;
    const double C84409 =
        (3 * C88019) / C89229 - (C88357 * C89276) / q - C89395 / q;
    const double C84436 = C89389 - (C88388 * C89276) / q - C89404 / q;
    const double C84463 =
        (3 * C88403) / C89229 - (C88492 * C89276) / q - C89396 / q;
    const double C84499 = -(C88110 * C89276 + C89407) / q;
    const double C84508 = -(C88724 * C89276 + C89408) / q;
    const double C84606 = -(C88856 * C89276 + C89412) / q;
    const double C84607 = -(C88798 * C89276 + C89410) / q;
    const double C84679 = -(C88782 * C89276 + C89413) / q;
    const double C84816 = C88127 / C89229 - (C88285 * C89276) / q - C89393 / q;
    const double C84875 = -(C88127 * C89276 + C89417) / q;
    const double C80772 = C89298 - (C85822 * C89276) / q - C89256 / q;
    const double C80487 = C89297 - (C85294 * C89276) / q - C89253 / q;
    const double C80638 = C89297 - (C85387 * C89277) / q - C89266 / q;
    const double C80791 = C89296 - (C85822 * C89277) / q - C89268 / q;
    const double C80440 = C89295 - (C86116 * C89276) / q - C89290;
    const double C80289 = C89294 - (C85806 * C89276) / q - C89291;
    const double C80203 = C89292 - (C85759 * C89277) / q - C89289;
    const double C80114 = C89288 - (C85668 * C89277) / q - C89291;
    const double C79891 = C89285 - (C85200 * C89276) / q - C89278;
    const double C79927 = C89285 - (C85245 * C89277) / q - C89282;
    const double C79793 = C89280 - (C85215 * C89276) / q - C89281;
    const double C79865 = C89280 - (C85260 * C89277) / q - C89284;
    const double C82898 =
        C89352 - (C86477 * be + C87195 * C89276) / q - C89328 / q;
    const double C82625 =
        C89350 - (C86348 * be + C86678 * C89276) / q - C89325 / q;
    const double C82768 = C89350 - (C86769 * C89277) / q - C89340 / q;
    const double C82915 = C89349 - (C87195 * C89277) / q - C89342 / q;
    const double C85022 = C89418 - (C88553 * C89276) / q - C89394 / q;
    const double C84749 = C89416 - (C88036 * C89276) / q - C89391 / q;
    const double C84892 =
        C89416 - (C86434 * be + C88127 * C89277) / q - C89406 / q;
    const double C85039 =
        C89415 - (C86477 * be + C88553 * C89277) / q - C89408 / q;
    const double C79712 = (2 * C85136) / q -
                          (C85132 * be + C85137 * C89275) / q -
                          (C85138 * p) / q;
    const double C79713 = (3 * C85154) / C89229 -
                          (C85150 * be + C85136 * C89275) / q -
                          (C85137 * p) / q;
    const double C79723 =
        C85170 / q - (C85166 * be + C85154 * C89275) / q - (C85136 * p) / q;
    const double C79774 =
        C85276 / q - (C85272 * be + C85277 * C89275) / q - C89278;
    const double C79775 =
        C89241 - (C85290 * be + C85215 * C89275) / q - C89233 / q;
    const double C79828 =
        C85369 / q - (C85365 * be + C85370 * C89275) / q - C89282;
    const double C79829 =
        C89247 - (C85383 * be + C85260 * C89275) / q - C89238 / q;
    const double C79882 = (3 * C85215) / C89229 -
                          (C85457 * be + C85200 * C89275) / q - C89232 / q;
    const double C79909 = (3 * C85260) / C89229 -
                          (C85501 * be + C85245 * C89275) / q - C89237 / q;
    const double C79936 =
        C89252 - (C85544 * be + C85353 * C89275) / q - C89251 / q;
    const double C79964 = C89288 - (C85588 * be + C85276 * C89275) / q - C89281;
    const double C79974 = -(C85604 * be + C85592 * C89275 + C89253) / q;
    const double C80023 = -(C85680 * be + C85684 * C89275 + C89257) / q;
    const double C80024 = -(C85697 * be + C85638 * C89275 + C89254) / q;
    const double C80077 = -(C85771 * be + C85775 * C89275 + C89260) / q;
    const double C80078 = -(C85788 * be + C85668 * C89275 + C89255) / q;
    const double C80131 = C89292 - (C85863 * be + C85622 * C89275) / q - C89279;
    const double C80158 =
        C85668 / C89229 - (C85907 * be + C85653 * C89275) / q - C89286;
    const double C80185 = -(C85950 * be + C85759 * C89275 + C89265) / q;
    const double C80213 = C89294 - (C85993 * be + C85369 * C89275) / q - C89284;
    const double C80223 = -(C86009 * be + C85997 * C89275 + C89266) / q;
    const double C80272 = -(C86084 * be + C85806 * C89275 + C89267) / q;
    const double C80323 = -(C86128 * be + C86132 * C89275 + C89271) / q;
    const double C80324 = -(C86145 * be + C86072 * C89275 + C89269) / q;
    const double C80377 =
        C85806 / C89229 - (C86218 * be + C86027 * C89275) / q - C89287;
    const double C80404 = C89295 - (C86262 * be + C86056 * C89275) / q - C89283;
    const double C80431 = -(C86305 * be + C86116 * C89275 + C89273) / q;
    const double C80468 =
        C89296 - (C86348 * be + C85294 * C89275) / q - C89234 / q;
    const double C80539 =
        C85822 / C89229 - (C86391 * be + C85548 * C89275) / q - C89245 / q;
    const double C80600 =
        C89298 - (C86434 * be + C85387 * C89275) / q - C89239 / q;
    const double C80753 = -(C86477 * be + C85822 * C89275 + C89274) / q;
    const double C81865 =
        (2 * C86524) / q - (C86525 * C89275) / q - (C86526 * p) / q;
    const double C81866 =
        (3 * C86541) / C89229 - (C86524 * C89275) / q - (C86525 * p) / q;
    const double C81875 = C86556 / q - (C86541 * C89275) / q - (C86524 * p) / q;
    const double C81923 = C89310 - (C86601 * C89275) / q - C89304 / q;
    const double C81977 = C89317 - (C86646 * C89275) / q - C89307 / q;
    const double C82030 =
        (3 * C86601) / C89229 - (C86586 * C89275) / q - C89303 / q;
    const double C82057 =
        (3 * C86646) / C89229 - (C86631 * C89275) / q - C89306 / q;
    const double C82084 = C89323 - (C86737 * C89275) / q - C89322 / q;
    const double C82120 = -(C86970 * C89275 + C89325) / q;
    const double C82166 = -(C87060 * C89275 + C89329) / q;
    const double C82167 = -(C87015 * C89275 + C89326) / q;
    const double C82222 = -(C87149 * C89275 + C89332) / q;
    const double C82223 = -(C87045 * C89275 + C89327) / q;
    const double C82330 = -(C87134 * C89275 + C89338) / q;
    const double C82366 = -(C87366 * C89275 + C89340) / q;
    const double C82412 = -(C87179 * C89275 + C89341) / q;
    const double C82465 = -(C87498 * C89275 + C89345) / q;
    const double C82466 = -(C87440 * C89275 + C89343) / q;
    const double C82573 = -(C87483 * C89275 + C89347) / q;
    const double C82608 = C89349 - (C86678 * C89275) / q - C89305 / q;
    const double C82675 = C87195 / C89229 - (C86927 * C89275) / q - C89315 / q;
    const double C82734 = C89352 - (C86769 * C89275) / q - C89308 / q;
    const double C82881 = -(C87195 * C89275 + C89351) / q;
    const double C83992 =
        (2 * C87882) / q - (C87883 * C89275) / q - (C87884 * p) / q;
    const double C83993 =
        (3 * C87899) / C89229 - (C87882 * C89275) / q - (C87883 * p) / q;
    const double C84002 = C87914 / q - (C87899 * C89275) / q - (C87882 * p) / q;
    const double C84050 = C89376 - (C87959 * C89275) / q - C89370 / q;
    const double C84104 = C89383 - (C88004 * C89275) / q - C89373 / q;
    const double C84157 =
        (3 * C87959) / C89229 - (C87944 * C89275) / q - C89369 / q;
    const double C84184 =
        (3 * C88004) / C89229 - (C87989 * C89275) / q - C89372 / q;
    const double C84211 = C89389 - (C88095 * C89275) / q - C89388 / q;
    const double C84247 = -(C88328 * C89275 + C89391) / q;
    const double C84292 = -(C88418 * C89275 + C89395) / q;
    const double C84293 = -(C88373 * C89275 + C89392) / q;
    const double C84346 = -(C88507 * C89275 + C89398) / q;
    const double C84347 = -(C88403 * C89275 + C89393) / q;
    const double C84454 = -(C88492 * C89275 + C89404) / q;
    const double C84490 = -(C88724 * C89275 + C89406) / q;
    const double C84535 = -(C88537 * C89275 + C89407) / q;
    const double C84587 = -(C88856 * C89275 + C89411) / q;
    const double C84588 = -(C88798 * C89275 + C89409) / q;
    const double C84697 = -(C88841 * C89275 + C89413) / q;
    const double C84732 = C89415 - (C88036 * C89275) / q - C89371 / q;
    const double C84799 = C88553 / C89229 - (C88285 * C89275) / q - C89381 / q;
    const double C84858 = C89418 - (C88127 * C89275) / q - C89374 / q;
    const double C85005 = -(C88553 * C89275 + C89417) / q;
    const double C82259 = C89324 - (C87045 * C89277) / q - C89363;
    const double C82430 = C89339 - (C86084 * be + C87179 * C89276) / q - C89363;
    const double C82258 = C87045 / q - (C87149 * C89277) / q - C89362;
    const double C82582 = C89348 - (C86305 * be + C87483 * C89276) / q - C89362;
    const double C82240 =
        C87179 / q - (C85771 * be + C87149 * C89276) / q - C89361;
    const double C82348 = C89337 - (C87134 * C89277) / q - C89361;
    const double C82321 = C86661 / C89229 - (C87030 * C89277) / q - C89364;
    const double C82528 =
        C86752 / C89229 - (C86218 * be + C87395 * C89276) / q - C89364;
    const double C82013 = C89312 - (C86646 * C89277) / q - C89358;
    const double C82357 = C89339 - (C86752 * C89275) / q - C89358;
    const double C82012 = C86646 / q - (C86753 * C89277) / q - C89357;
    const double C82546 = C89348 - (C87424 * C89275) / q - C89357;
    const double C82102 = C86601 / C89229 - (C86737 * C89277) / q - C89360;
    const double C82519 = C87179 / C89229 - (C87395 * C89275) / q - C89360;
    const double C81976 = C86752 / q - (C86753 * C89275) / q - C89356;
    const double C82075 = C89321 - (C86631 * C89277) / q - C89356;
    const double C82093 =
        C86646 / C89229 - (C85544 * be + C86737 * C89276) / q - C89359;
    const double C82303 = C87045 / C89229 - (C87030 * C89275) / q - C89359;
    const double C81941 = C89312 - (C85290 * be + C86601 * C89276) / q - C89355;
    const double C82111 = C89324 - (C86661 * C89275) / q - C89355;
    const double C81940 =
        C86601 / q - (C85272 * be + C86662 * C89276) / q - C89354;
    const double C82276 = C89337 - (C86999 * C89275) / q - C89354;
    const double C81922 = C86661 / q - (C86662 * C89275) / q - C89353;
    const double C82039 = C89321 - (C85457 * be + C86586 * C89276) / q - C89353;
    const double C84383 = C89390 - (C85788 * be + C88403 * C89277) / q - C89429;
    const double C84552 = C89405 - (C88537 * C89276) / q - C89429;
    const double C84382 =
        C88403 / q - (C85771 * be + C88507 * C89277) / q - C89428;
    const double C84706 = C89414 - (C88841 * C89276) / q - C89428;
    const double C84364 = C88537 / q - (C88507 * C89276) / q - C89427;
    const double C84472 = C89403 - (C85950 * be + C88492 * C89277) / q - C89427;
    const double C84445 =
        C88019 / C89229 - (C85907 * be + C88388 * C89277) / q - C89430;
    const double C84652 = C88110 / C89229 - (C88753 * C89276) / q - C89430;
    const double C84140 = C89378 - (C85383 * be + C88004 * C89277) / q - C89424;
    const double C84481 = C89405 - (C88110 * C89275) / q - C89424;
    const double C84139 =
        C88004 / q - (C85365 * be + C88111 * C89277) / q - C89423;
    const double C84670 = C89414 - (C88782 * C89275) / q - C89423;
    const double C84229 =
        C87959 / C89229 - (C85544 * be + C88095 * C89277) / q - C89426;
    const double C84643 = C88537 / C89229 - (C88753 * C89275) / q - C89426;
    const double C84103 = C88110 / q - (C88111 * C89275) / q - C89422;
    const double C84202 = C89387 - (C85501 * be + C87989 * C89277) / q - C89422;
    const double C84220 = C88004 / C89229 - (C88095 * C89276) / q - C89425;
    const double C84427 = C88403 / C89229 - (C88388 * C89275) / q - C89425;
    const double C84068 = C89378 - (C87959 * C89276) / q - C89421;
    const double C84238 = C89390 - (C88019 * C89275) / q - C89421;
    const double C84067 = C87959 / q - (C88020 * C89276) / q - C89420;
    const double C84400 = C89403 - (C88357 * C89275) / q - C89420;
    const double C84049 = C88019 / q - (C88020 * C89275) / q - C89419;
    const double C84166 = C89387 - (C87944 * C89276) / q - C89419;
    etx[0] = C79712;
    etx[1] = C79713;
    etx[2] = C79723;
    etx[3] = C79733;
    etx[4] = C79734;
    etx[5] = C79744;
    etx[6] = C79754;
    etx[7] = C79755;
    etx[8] = C79765;
    etx[9] = C79774;
    etx[10] = C79775;
    etx[11] = C79792;
    etx[12] = C79793;
    etx[13] = C79810;
    etx[14] = C79811;
    etx[15] = C79828;
    etx[16] = C79829;
    etx[17] = C79846;
    etx[18] = C79847;
    etx[19] = C79864;
    etx[20] = C79865;
    etx[21] = C79882;
    etx[22] = C79891;
    etx[23] = C79900;
    etx[24] = C79909;
    etx[25] = C79918;
    etx[26] = C79927;
    etx[27] = C79936;
    etx[28] = C79945;
    etx[29] = C79954;
    etx[30] = C79964;
    etx[31] = C79974;
    etx[32] = C79984;
    etx[33] = C79994;
    etx[34] = C80004;
    etx[35] = C80014;
    etx[36] = C80023;
    etx[37] = C80024;
    etx[38] = C80041;
    etx[39] = C80042;
    etx[40] = C80059;
    etx[41] = C80060;
    etx[42] = C80077;
    etx[43] = C80078;
    etx[44] = C80095;
    etx[45] = C80096;
    etx[46] = C80113;
    etx[47] = C80114;
    etx[48] = C80131;
    etx[49] = C80140;
    etx[50] = C80149;
    etx[51] = C80158;
    etx[52] = C80167;
    etx[53] = C80176;
    etx[54] = C80185;
    etx[55] = C80194;
    etx[56] = C80203;
    etx[57] = C80213;
    etx[58] = C80223;
    etx[59] = C80233;
    etx[60] = C80243;
    etx[61] = C80253;
    etx[62] = C80263;
    etx[63] = C80272;
    etx[64] = C80289;
    etx[65] = C80306;
    etx[66] = C80323;
    etx[67] = C80324;
    etx[68] = C80341;
    etx[69] = C80342;
    etx[70] = C80359;
    etx[71] = C80360;
    etx[72] = C80377;
    etx[73] = C80386;
    etx[74] = C80395;
    etx[75] = C80404;
    etx[76] = C80413;
    etx[77] = C80422;
    etx[78] = C80431;
    etx[79] = C80440;
    etx[80] = C80449;
    etx[81] = C80468;
    etx[82] = C80487;
    etx[83] = C80506;
    etx[84] = C80539;
    etx[85] = C80556;
    etx[86] = C80573;
    etx[87] = C80600;
    etx[88] = C80619;
    etx[89] = C80638;
    etx[90] = C80753;
    etx[91] = C80772;
    etx[92] = C80791;
    ety[0] = C81865;
    ety[1] = C81866;
    ety[2] = C81875;
    ety[3] = C81884;
    ety[4] = C81885;
    ety[5] = C81894;
    ety[6] = C81903;
    ety[7] = C81904;
    ety[8] = C81913;
    ety[9] = C81922;
    ety[10] = C81923;
    ety[11] = C81940;
    ety[12] = C81941;
    ety[13] = C81958;
    ety[14] = C81959;
    ety[15] = C81976;
    ety[16] = C81977;
    ety[17] = C81994;
    ety[18] = C81995;
    ety[19] = C82012;
    ety[20] = C82013;
    ety[21] = C82030;
    ety[22] = C82039;
    ety[23] = C82048;
    ety[24] = C82057;
    ety[25] = C82066;
    ety[26] = C82075;
    ety[27] = C82084;
    ety[28] = C82093;
    ety[29] = C82102;
    ety[30] = C82111;
    ety[31] = C82120;
    ety[32] = C82129;
    ety[33] = C82138;
    ety[34] = C82147;
    ety[35] = C82156;
    ety[36] = C82166;
    ety[37] = C82167;
    ety[38] = C82185;
    ety[39] = C82186;
    ety[40] = C82204;
    ety[41] = C82205;
    ety[42] = C82222;
    ety[43] = C82223;
    ety[44] = C82240;
    ety[45] = C82241;
    ety[46] = C82258;
    ety[47] = C82259;
    ety[48] = C82276;
    ety[49] = C82285;
    ety[50] = C82294;
    ety[51] = C82303;
    ety[52] = C82312;
    ety[53] = C82321;
    ety[54] = C82330;
    ety[55] = C82339;
    ety[56] = C82348;
    ety[57] = C82357;
    ety[58] = C82366;
    ety[59] = C82375;
    ety[60] = C82384;
    ety[61] = C82393;
    ety[62] = C82402;
    ety[63] = C82412;
    ety[64] = C82430;
    ety[65] = C82448;
    ety[66] = C82465;
    ety[67] = C82466;
    ety[68] = C82483;
    ety[69] = C82484;
    ety[70] = C82501;
    ety[71] = C82502;
    ety[72] = C82519;
    ety[73] = C82528;
    ety[74] = C82537;
    ety[75] = C82546;
    ety[76] = C82555;
    ety[77] = C82564;
    ety[78] = C82573;
    ety[79] = C82582;
    ety[80] = C82591;
    ety[81] = C82608;
    ety[82] = C82625;
    ety[83] = C82642;
    ety[84] = C82675;
    ety[85] = C82692;
    ety[86] = C82709;
    ety[87] = C82734;
    ety[88] = C82751;
    ety[89] = C82768;
    ety[90] = C82881;
    ety[91] = C82898;
    ety[92] = C82915;
    etz[0] = C83992;
    etz[1] = C83993;
    etz[2] = C84002;
    etz[3] = C84011;
    etz[4] = C84012;
    etz[5] = C84021;
    etz[6] = C84030;
    etz[7] = C84031;
    etz[8] = C84040;
    etz[9] = C84049;
    etz[10] = C84050;
    etz[11] = C84067;
    etz[12] = C84068;
    etz[13] = C84085;
    etz[14] = C84086;
    etz[15] = C84103;
    etz[16] = C84104;
    etz[17] = C84121;
    etz[18] = C84122;
    etz[19] = C84139;
    etz[20] = C84140;
    etz[21] = C84157;
    etz[22] = C84166;
    etz[23] = C84175;
    etz[24] = C84184;
    etz[25] = C84193;
    etz[26] = C84202;
    etz[27] = C84211;
    etz[28] = C84220;
    etz[29] = C84229;
    etz[30] = C84238;
    etz[31] = C84247;
    etz[32] = C84256;
    etz[33] = C84265;
    etz[34] = C84274;
    etz[35] = C84283;
    etz[36] = C84292;
    etz[37] = C84293;
    etz[38] = C84310;
    etz[39] = C84311;
    etz[40] = C84328;
    etz[41] = C84329;
    etz[42] = C84346;
    etz[43] = C84347;
    etz[44] = C84364;
    etz[45] = C84365;
    etz[46] = C84382;
    etz[47] = C84383;
    etz[48] = C84400;
    etz[49] = C84409;
    etz[50] = C84418;
    etz[51] = C84427;
    etz[52] = C84436;
    etz[53] = C84445;
    etz[54] = C84454;
    etz[55] = C84463;
    etz[56] = C84472;
    etz[57] = C84481;
    etz[58] = C84490;
    etz[59] = C84499;
    etz[60] = C84508;
    etz[61] = C84517;
    etz[62] = C84526;
    etz[63] = C84535;
    etz[64] = C84552;
    etz[65] = C84569;
    etz[66] = C84587;
    etz[67] = C84588;
    etz[68] = C84606;
    etz[69] = C84607;
    etz[70] = C84625;
    etz[71] = C84626;
    etz[72] = C84643;
    etz[73] = C84652;
    etz[74] = C84661;
    etz[75] = C84670;
    etz[76] = C84679;
    etz[77] = C84688;
    etz[78] = C84697;
    etz[79] = C84706;
    etz[80] = C84715;
    etz[81] = C84732;
    etz[82] = C84749;
    etz[83] = C84766;
    etz[84] = C84799;
    etz[85] = C84816;
    etz[86] = C84833;
    etz[87] = C84858;
    etz[88] = C84875;
    etz[89] = C84892;
    etz[90] = C85005;
    etz[91] = C85022;
    etz[92] = C85039;
}
