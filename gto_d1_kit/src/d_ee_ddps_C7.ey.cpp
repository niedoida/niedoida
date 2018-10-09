/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2210_3_et(const double ae,
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
    const double C83223 = g[0];
    const double C83241 = g[1];
    const double C83257 = g[2];
    const double C83363 = g[3];
    const double C83381 = g[4];
    const double C83456 = g[5];
    const double C83474 = g[6];
    const double C83548 = g[7];
    const double C83592 = g[8];
    const double C83635 = g[9];
    const double C83679 = g[10];
    const double C83695 = g[11];
    const double C83771 = g[12];
    const double C83788 = g[13];
    const double C83862 = g[14];
    const double C83879 = g[15];
    const double C83954 = g[16];
    const double C83998 = g[17];
    const double C84041 = g[18];
    const double C84084 = g[19];
    const double C84100 = g[20];
    const double C84175 = g[21];
    const double C84219 = g[22];
    const double C84236 = g[23];
    const double C84309 = g[24];
    const double C84353 = g[25];
    const double C84396 = g[26];
    const double C84439 = g[27];
    const double C84482 = g[28];
    const double C84525 = g[29];
    const double C84568 = g[30];
    const double C83227 = vrx[0];
    const double C83228 = vrx[1];
    const double C83229 = vrx[2];
    const double C83245 = vrx[3];
    const double C83261 = vrx[4];
    const double C83276 = vrx[5];
    const double C83291 = vrx[6];
    const double C83306 = vrx[7];
    const double C83321 = vrx[8];
    const double C83336 = vrx[9];
    const double C83351 = vrx[10];
    const double C83367 = vrx[11];
    const double C83368 = vrx[12];
    const double C83369 = vrx[13];
    const double C83385 = vrx[14];
    const double C83400 = vrx[15];
    const double C83429 = vrx[16];
    const double C83444 = vrx[17];
    const double C83460 = vrx[18];
    const double C83461 = vrx[19];
    const double C83462 = vrx[20];
    const double C83478 = vrx[21];
    const double C83493 = vrx[22];
    const double C83522 = vrx[23];
    const double C83580 = vrx[24];
    const double C83639 = vrx[25];
    const double C83683 = vrx[26];
    const double C83713 = vrx[27];
    const double C83728 = vrx[28];
    const double C83729 = vrx[29];
    const double C83744 = vrx[30];
    const double C83759 = vrx[31];
    const double C83775 = vrx[32];
    const double C83776 = vrx[33];
    const double C83806 = vrx[34];
    const double C83835 = vrx[35];
    const double C83850 = vrx[36];
    const double C83866 = vrx[37];
    const double C83867 = vrx[38];
    const double C83897 = vrx[39];
    const double C83898 = vrx[40];
    const double C83913 = vrx[41];
    const double C83928 = vrx[42];
    const double C83986 = vrx[43];
    const double C84088 = vrx[44];
    const double C84118 = vrx[45];
    const double C84147 = vrx[46];
    const double C84162 = vrx[47];
    const double C84163 = vrx[48];
    const double C84207 = vrx[49];
    const double C84223 = vrx[50];
    const double C84224 = vrx[51];
    const double C84254 = vrx[52];
    const double C84283 = vrx[53];
    const double C84341 = vrx[54];
    const double C84615 = vry[0];
    const double C84616 = vry[1];
    const double C84617 = vry[2];
    const double C84632 = vry[3];
    const double C84647 = vry[4];
    const double C84662 = vry[5];
    const double C84677 = vry[6];
    const double C84692 = vry[7];
    const double C84707 = vry[8];
    const double C84722 = vry[9];
    const double C84737 = vry[10];
    const double C84752 = vry[11];
    const double C84753 = vry[12];
    const double C84754 = vry[13];
    const double C84769 = vry[14];
    const double C84784 = vry[15];
    const double C84813 = vry[16];
    const double C84828 = vry[17];
    const double C84843 = vry[18];
    const double C84844 = vry[19];
    const double C84845 = vry[20];
    const double C84860 = vry[21];
    const double C84875 = vry[22];
    const double C84904 = vry[23];
    const double C84961 = vry[24];
    const double C85018 = vry[25];
    const double C85061 = vry[26];
    const double C85090 = vry[27];
    const double C85105 = vry[28];
    const double C85106 = vry[29];
    const double C85121 = vry[30];
    const double C85136 = vry[31];
    const double C85151 = vry[32];
    const double C85152 = vry[33];
    const double C85181 = vry[34];
    const double C85210 = vry[35];
    const double C85225 = vry[36];
    const double C85240 = vry[37];
    const double C85241 = vry[38];
    const double C85270 = vry[39];
    const double C85271 = vry[40];
    const double C85286 = vry[41];
    const double C85301 = vry[42];
    const double C85358 = vry[43];
    const double C85457 = vry[44];
    const double C85486 = vry[45];
    const double C85515 = vry[46];
    const double C85530 = vry[47];
    const double C85531 = vry[48];
    const double C85574 = vry[49];
    const double C85589 = vry[50];
    const double C85590 = vry[51];
    const double C85619 = vry[52];
    const double C85648 = vry[53];
    const double C85705 = vry[54];
    const double C85973 = vrz[0];
    const double C85974 = vrz[1];
    const double C85975 = vrz[2];
    const double C85990 = vrz[3];
    const double C86005 = vrz[4];
    const double C86020 = vrz[5];
    const double C86035 = vrz[6];
    const double C86050 = vrz[7];
    const double C86065 = vrz[8];
    const double C86080 = vrz[9];
    const double C86095 = vrz[10];
    const double C86110 = vrz[11];
    const double C86111 = vrz[12];
    const double C86112 = vrz[13];
    const double C86127 = vrz[14];
    const double C86142 = vrz[15];
    const double C86171 = vrz[16];
    const double C86186 = vrz[17];
    const double C86201 = vrz[18];
    const double C86202 = vrz[19];
    const double C86203 = vrz[20];
    const double C86218 = vrz[21];
    const double C86233 = vrz[22];
    const double C86262 = vrz[23];
    const double C86319 = vrz[24];
    const double C86376 = vrz[25];
    const double C86419 = vrz[26];
    const double C86448 = vrz[27];
    const double C86463 = vrz[28];
    const double C86464 = vrz[29];
    const double C86479 = vrz[30];
    const double C86494 = vrz[31];
    const double C86509 = vrz[32];
    const double C86510 = vrz[33];
    const double C86539 = vrz[34];
    const double C86568 = vrz[35];
    const double C86583 = vrz[36];
    const double C86598 = vrz[37];
    const double C86599 = vrz[38];
    const double C86628 = vrz[39];
    const double C86629 = vrz[40];
    const double C86644 = vrz[41];
    const double C86659 = vrz[42];
    const double C86716 = vrz[43];
    const double C86815 = vrz[44];
    const double C86844 = vrz[45];
    const double C86873 = vrz[46];
    const double C86888 = vrz[47];
    const double C86889 = vrz[48];
    const double C86932 = vrz[49];
    const double C86947 = vrz[50];
    const double C86948 = vrz[51];
    const double C86977 = vrz[52];
    const double C87006 = vrz[53];
    const double C87063 = vrz[54];
    const double C87365 = C83639 * p;
    const double C87364 = C84341 * p;
    const double C87363 = C84254 * p;
    const double C87362 = C84224 * p;
    const double C87361 = C84207 * p;
    const double C87360 = C84147 * p;
    const double C87359 = C83897 * p;
    const double C87358 = C84118 * p;
    const double C87357 = C83460 * p;
    const double C87356 = C83986 * p;
    const double C87355 = C83866 * p;
    const double C87354 = C83928 * p;
    const double C87353 = C83913 / q;
    const double C87352 = C83898 * p;
    const double C87351 = C83867 * p;
    const double C87350 = C83850 * p;
    const double C87349 = C83835 * p;
    const double C87348 = C83776 * p;
    const double C87347 = C83759 * p;
    const double C87346 = C83744 * p;
    const double C87345 = C83713 * p;
    const double C87344 = C83367 * p;
    const double C87343 = C83639 / q;
    const double C87342 = C83580 * p;
    const double C87341 = C83461 * p;
    const double C87340 = C83522 * p;
    const double C87339 = C83493 * p;
    const double C87338 = C83478 / q;
    const double C87337 = C83462 * p;
    const double C87336 = C83444 * p;
    const double C87335 = C83429 * p;
    const double C87334 = C83368 * p;
    const double C87333 = C83400 * p;
    const double C87332 = C83385 / q;
    const double C87331 = C83369 * p;
    const double C87330 = C83351 * p;
    const double C87329 = C83336 * p;
    const double C87328 = C83321 * p;
    const double C87327 = de * zCD;
    const double C87326 = be * zAB;
    const double C87325 = C83306 * p;
    const double C87324 = C83291 * p;
    const double C87323 = C83276 * p;
    const double C87322 = de * yCD;
    const double C87321 = be * yAB;
    const double C87320 = 2 * q;
    const double C87319 = de * xCD;
    const double C87318 = be * xAB;
    const double C87442 = C85018 * p;
    const double C87438 = C85705 * p;
    const double C87437 = C85619 * p;
    const double C87436 = C85590 * p;
    const double C87435 = C85574 * p;
    const double C87434 = C85515 * p;
    const double C87433 = C85270 * p;
    const double C87432 = C85486 * p;
    const double C87431 = C84843 * p;
    const double C87429 = C85358 * p;
    const double C87427 = C85240 * p;
    const double C87426 = C85301 * p;
    const double C87425 = C85286 / q;
    const double C87424 = C85271 * p;
    const double C87423 = C85241 * p;
    const double C87422 = C85225 * p;
    const double C87421 = C85210 * p;
    const double C87420 = C85152 * p;
    const double C87419 = C85136 * p;
    const double C87418 = C85121 * p;
    const double C87417 = C85090 * p;
    const double C87416 = C84752 * p;
    const double C87414 = C85018 / q;
    const double C87413 = C84961 * p;
    const double C87411 = C84844 * p;
    const double C87410 = C84904 * p;
    const double C87409 = C84875 * p;
    const double C87408 = C84860 / q;
    const double C87407 = C84845 * p;
    const double C87406 = C84828 * p;
    const double C87405 = C84813 * p;
    const double C87404 = C84753 * p;
    const double C87402 = C84784 * p;
    const double C87401 = C84769 / q;
    const double C87400 = C84754 * p;
    const double C87399 = C84737 * p;
    const double C87398 = C84722 * p;
    const double C87397 = C84707 * p;
    const double C87396 = C84692 * p;
    const double C87395 = C84677 * p;
    const double C87394 = C84662 * p;
    const double C87508 = C86376 * p;
    const double C87504 = C87063 * p;
    const double C87503 = C86977 * p;
    const double C87502 = C86948 * p;
    const double C87501 = C86932 * p;
    const double C87500 = C86873 * p;
    const double C87499 = C86628 * p;
    const double C87498 = C86844 * p;
    const double C87497 = C86201 * p;
    const double C87495 = C86716 * p;
    const double C87493 = C86598 * p;
    const double C87492 = C86659 * p;
    const double C87491 = C86644 / q;
    const double C87490 = C86629 * p;
    const double C87489 = C86599 * p;
    const double C87488 = C86583 * p;
    const double C87487 = C86568 * p;
    const double C87486 = C86510 * p;
    const double C87485 = C86494 * p;
    const double C87484 = C86479 * p;
    const double C87483 = C86448 * p;
    const double C87482 = C86110 * p;
    const double C87480 = C86376 / q;
    const double C87479 = C86319 * p;
    const double C87477 = C86202 * p;
    const double C87476 = C86262 * p;
    const double C87475 = C86233 * p;
    const double C87474 = C86218 / q;
    const double C87473 = C86203 * p;
    const double C87472 = C86186 * p;
    const double C87471 = C86171 * p;
    const double C87470 = C86111 * p;
    const double C87468 = C86142 * p;
    const double C87467 = C86127 / q;
    const double C87466 = C86112 * p;
    const double C87465 = C86095 * p;
    const double C87464 = C86080 * p;
    const double C87463 = C86065 * p;
    const double C87462 = C86050 * p;
    const double C87461 = C86035 * p;
    const double C87460 = C86020 * p;
    const double C87382 = C87355 / q;
    const double C87381 = C87354 / q;
    const double C87380 = C87352 / q;
    const double C87384 = C87351 / q;
    const double C87375 = C87341 / q;
    const double C87374 = C87340 / q;
    const double C87378 = C87339 / q;
    const double C87373 = C87337 / q;
    const double C87377 = C87335 / q;
    const double C87372 = C87334 / q;
    const double C87370 = C87333 / q;
    const double C87369 = C87331 / q;
    const double C87368 = C87326 + C87327;
    const double C87367 = C87321 + C87322;
    const double C87389 = C84162 / C87320;
    const double C87388 = C83261 / C87320;
    const double C87387 = C83728 / C87320;
    const double C87386 = C84163 / C87320;
    const double C87385 = C84088 / C87320;
    const double C87383 = C83729 / C87320;
    const double C87379 = C83683 / C87320;
    const double C87376 = C83227 / C87320;
    const double C87371 = C83245 / C87320;
    const double C87443 = C85530 / C87320;
    const double C87441 = C84647 / C87320;
    const double C87440 = C85105 / C87320;
    const double C87439 = C85531 / C87320;
    const double C87430 = C85457 / C87320;
    const double C87428 = C85106 / C87320;
    const double C87415 = C85061 / C87320;
    const double C87412 = C84615 / C87320;
    const double C87403 = C84632 / C87320;
    const double C87509 = C86888 / C87320;
    const double C87507 = C86005 / C87320;
    const double C87506 = C86463 / C87320;
    const double C87505 = C86889 / C87320;
    const double C87496 = C86815 / C87320;
    const double C87494 = C86464 / C87320;
    const double C87481 = C86419 / C87320;
    const double C87478 = C85973 / C87320;
    const double C87469 = C85990 / C87320;
    const double C87366 = C87318 + C87319;
    const double C87454 = C87427 / q;
    const double C87453 = C87426 / q;
    const double C87452 = C87424 / q;
    const double C87455 = C87423 / q;
    const double C87449 = C87411 / q;
    const double C87448 = C87410 / q;
    const double C87451 = C87409 / q;
    const double C87447 = C87407 / q;
    const double C87450 = C87405 / q;
    const double C87446 = C87404 / q;
    const double C87445 = C87402 / q;
    const double C87444 = C87400 / q;
    const double C87520 = C87493 / q;
    const double C87519 = C87492 / q;
    const double C87518 = C87490 / q;
    const double C87521 = C87489 / q;
    const double C87515 = C87477 / q;
    const double C87514 = C87476 / q;
    const double C87517 = C87475 / q;
    const double C87513 = C87473 / q;
    const double C87516 = C87471 / q;
    const double C87512 = C87470 / q;
    const double C87511 = C87468 / q;
    const double C87510 = C87466 / q;
    const double C78486 = -(C83228 * C87368 + C87328) / q;
    const double C78487 = -(C83227 * C87368 + C87329) / q;
    const double C78495 = -(C83245 * C87368 + C87330) / q;
    const double C78535 = -(C83368 * C87368 + C87335) / q;
    const double C78536 = -(C83306 * C87368 + C87336) / q;
    const double C78583 = C83351 / q - (C83461 * C87368) / q - C87374;
    const double C78615 = -(C83291 * C87368 + C87342) / q;
    const double C78663 = C83306 / C87320 - (C83444 * C87368) / q - C87378;
    const double C78703 = -(C83367 * C87368 + C87346) / q;
    const double C78711 = -(C83683 * C87368 + C87347) / q;
    const double C78751 = -(C83775 * C87368 + C87349) / q;
    const double C78752 = -(C83729 * C87368 + C87350) / q;
    const double C78799 = C83759 / q - (C83866 * C87368) / q - C87381;
    const double C78831 = -(C83713 * C87368 + C87356) / q;
    const double C78855 = C83367 / C87320 - (C83744 * C87368) / q - C87384;
    const double C78919 = C87338 - (C83460 * C87368) / q - C87360 / q;
    const double C78927 = C84162 / q - (C84088 * C87368) / q - (C84163 * p) / q;
    const double C78965 = C87353 - (C83897 * C87368) / q - C87361 / q;
    const double C79012 =
        (2 * C84163) / q - (C84223 * C87368) / q - (C84283 * p) / q;
    const double C79013 =
        (3 * C84088) / C87320 - (C84163 * C87368) / q - (C84223 * p) / q;
    const double C79044 = C87343 - (C84118 * C87368) / q - C87364 / q;
    const double C79068 =
        (3 * C83460) / C87320 - (C84147 * C87368) / q - C87362 / q;
    const double C79092 =
        (3 * C83897) / C87320 - (C84207 * C87368) / q - C87363 / q;
    const double C79137 = -(C83385 * C87368 + C87365) / q;
    const double C79196 = C83385 / C87320 - (C83639 * C87368) / q - C87358 / q;
    const double C80367 = -(C84616 * C87368 + C87397) / q;
    const double C80368 = -(C84615 * C87368 + C87398) / q;
    const double C80376 = -(C84632 * C87368 + C87399) / q;
    const double C80416 = -(C84753 * C87368 + C87405) / q;
    const double C80417 = -(C84692 * C87368 + C87406) / q;
    const double C80496 = -(C84677 * C87368 + C87413) / q;
    const double C80584 = -(C84752 * C87368 + C87418) / q;
    const double C80592 = -(C85061 * C87368 + C87419) / q;
    const double C80632 = -(C85151 * C87368 + C87421) / q;
    const double C80633 = -(C85106 * C87368 + C87422) / q;
    const double C80712 = -(C85090 * C87368 + C87429) / q;
    const double C80800 = C87408 - (C84843 * C87368) / q - C87434 / q;
    const double C80808 = C85530 / q - (C85457 * C87368) / q - (C85531 * p) / q;
    const double C80846 = C87425 - (C85270 * C87368) / q - C87435 / q;
    const double C80893 =
        (2 * C85531) / q - (C85589 * C87368) / q - (C85648 * p) / q;
    const double C80894 =
        (3 * C85457) / C87320 - (C85531 * C87368) / q - (C85589 * p) / q;
    const double C80925 = C87414 - (C85486 * C87368) / q - C87438 / q;
    const double C80949 =
        (3 * C84843) / C87320 - (C85515 * C87368) / q - C87436 / q;
    const double C80973 =
        (3 * C85270) / C87320 - (C85574 * C87368) / q - C87437 / q;
    const double C81018 = -(C84769 * C87368 + C87442) / q;
    const double C81077 = C84769 / C87320 - (C85018 * C87368) / q - C87432 / q;
    const double C82248 = -(C83223 * de + C85974 * C87368 + C87463) / q;
    const double C82249 = -(C83241 * de + C85973 * C87368 + C87464) / q;
    const double C82257 = -(C83257 * de + C85990 * C87368 + C87465) / q;
    const double C82297 = -(C83363 * de + C86111 * C87368 + C87471) / q;
    const double C82298 = -(C83381 * de + C86050 * C87368 + C87472) / q;
    const double C82377 = -(C83548 * de + C86035 * C87368 + C87479) / q;
    const double C82465 = -(C83679 * de + C86110 * C87368 + C87484) / q;
    const double C82473 = -(C83695 * de + C86419 * C87368 + C87485) / q;
    const double C82513 = -(C83771 * de + C86509 * C87368 + C87487) / q;
    const double C82514 = -(C83788 * de + C86464 * C87368 + C87488) / q;
    const double C82593 = -(C83954 * de + C86448 * C87368 + C87495) / q;
    const double C82681 =
        C87474 - (C84084 * de + C86201 * C87368) / q - C87500 / q;
    const double C82689 =
        C86888 / q - (C84100 * de + C86815 * C87368) / q - (C86889 * p) / q;
    const double C82727 =
        C87491 - (C84175 * de + C86628 * C87368) / q - C87501 / q;
    const double C82774 = (2 * C86889) / q -
                          (C84219 * de + C86947 * C87368) / q -
                          (C87006 * p) / q;
    const double C82775 = (3 * C86815) / C87320 -
                          (C84236 * de + C86889 * C87368) / q -
                          (C86947 * p) / q;
    const double C82806 =
        C87480 - (C84309 * de + C86844 * C87368) / q - C87504 / q;
    const double C82830 = (3 * C86201) / C87320 -
                          (C84353 * de + C86873 * C87368) / q - C87502 / q;
    const double C82854 = (3 * C86628) / C87320 -
                          (C84396 * de + C86932 * C87368) / q - C87503 / q;
    const double C82899 = -(C84439 * de + C86127 * C87368 + C87508) / q;
    const double C82958 =
        C86127 / C87320 - (C84482 * de + C86376 * C87368) / q - C87498 / q;
    const double C78469 = -(C83228 * C87367 + C87323) / q;
    const double C78470 = -(C83227 * C87367 + C87324) / q;
    const double C78478 = -(C83245 * C87367 + C87325) / q;
    const double C78519 = C83306 / q - (C83368 * C87367) / q - C87370;
    const double C78567 = -(C83461 * C87367 + C87339) / q;
    const double C78568 = -(C83351 * C87367 + C87336) / q;
    const double C78631 = -(C83336 * C87367 + C87342) / q;
    const double C78655 = C83351 / C87320 - (C83444 * C87367) / q - C87377;
    const double C78687 = C87332 - (C83367 * C87367) / q - C87345 / q;
    const double C78695 = C83728 / q - (C83683 * C87367) / q - (C83729 * p) / q;
    const double C78735 =
        (2 * C83729) / q - (C83775 * C87367) / q - (C83806 * p) / q;
    const double C78736 =
        (3 * C83683) / C87320 - (C83729 * C87367) / q - (C83775 * p) / q;
    const double C78783 = C83897 / q - (C83866 * C87367) / q - C87380;
    const double C78784 = C87353 - (C83759 * C87367) / q - C87350 / q;
    const double C78823 =
        (3 * C83367) / C87320 - (C83713 * C87367) / q - C87348 / q;
    const double C78847 = C87343 - (C83744 * C87367) / q - C87356 / q;
    const double C78871 =
        (3 * C83759) / C87320 - (C83850 * C87367) / q - C87349 / q;
    const double C78903 = -(C83460 * C87367 + C87358) / q;
    const double C78911 = -(C84088 * C87367 + C87359) / q;
    const double C78996 = -(C84223 * C87367 + C87363) / q;
    const double C78997 = -(C84163 * C87367 + C87361) / q;
    const double C79036 = C83460 / C87320 - (C84118 * C87367) / q - C87384;
    const double C79060 = -(C84147 * C87367 + C87364) / q;
    const double C79181 = C83478 / C87320 - (C83639 * C87367) / q - C87346 / q;
    const double C79233 = -(C83478 * C87367 + C87365) / q;
    const double C80350 = -(C83223 * de + C84616 * C87367 + C87394) / q;
    const double C80351 = -(C83241 * de + C84615 * C87367 + C87395) / q;
    const double C80359 = -(C83257 * de + C84632 * C87367 + C87396) / q;
    const double C80448 = -(C83456 * de + C84844 * C87367 + C87409) / q;
    const double C80449 = -(C83474 * de + C84737 * C87367 + C87406) / q;
    const double C80512 = -(C83592 * de + C84722 * C87367 + C87413) / q;
    const double C80568 =
        C87401 - (C83679 * de + C84752 * C87367) / q - C87417 / q;
    const double C80576 =
        C85105 / q - (C83695 * de + C85061 * C87367) / q - (C85106 * p) / q;
    const double C80616 = (2 * C85106) / q -
                          (C83771 * de + C85151 * C87367) / q -
                          (C85181 * p) / q;
    const double C80617 = (3 * C85061) / C87320 -
                          (C83788 * de + C85106 * C87367) / q -
                          (C85151 * p) / q;
    const double C80665 =
        C87425 - (C83879 * de + C85136 * C87367) / q - C87422 / q;
    const double C80704 = (3 * C84752) / C87320 -
                          (C83954 * de + C85090 * C87367) / q - C87420 / q;
    const double C80728 =
        C87414 - (C83998 * de + C85121 * C87367) / q - C87429 / q;
    const double C80752 = (3 * C85136) / C87320 -
                          (C84041 * de + C85225 * C87367) / q - C87421 / q;
    const double C80784 = -(C84084 * de + C84843 * C87367 + C87432) / q;
    const double C80792 = -(C84100 * de + C85457 * C87367 + C87433) / q;
    const double C80877 = -(C84219 * de + C85589 * C87367 + C87437) / q;
    const double C80878 = -(C84236 * de + C85531 * C87367 + C87435) / q;
    const double C80941 = -(C84353 * de + C85515 * C87367 + C87438) / q;
    const double C81062 =
        C84860 / C87320 - (C84482 * de + C85018 * C87367) / q - C87418 / q;
    const double C81114 = -(C84525 * de + C84860 * C87367 + C87442) / q;
    const double C82231 = -(C85974 * C87367 + C87460) / q;
    const double C82232 = -(C85973 * C87367 + C87461) / q;
    const double C82240 = -(C85990 * C87367 + C87462) / q;
    const double C82329 = -(C86202 * C87367 + C87475) / q;
    const double C82330 = -(C86095 * C87367 + C87472) / q;
    const double C82393 = -(C86080 * C87367 + C87479) / q;
    const double C82449 = C87467 - (C86110 * C87367) / q - C87483 / q;
    const double C82457 = C86463 / q - (C86419 * C87367) / q - (C86464 * p) / q;
    const double C82497 =
        (2 * C86464) / q - (C86509 * C87367) / q - (C86539 * p) / q;
    const double C82498 =
        (3 * C86419) / C87320 - (C86464 * C87367) / q - (C86509 * p) / q;
    const double C82546 = C87491 - (C86494 * C87367) / q - C87488 / q;
    const double C82585 =
        (3 * C86110) / C87320 - (C86448 * C87367) / q - C87486 / q;
    const double C82609 = C87480 - (C86479 * C87367) / q - C87495 / q;
    const double C82633 =
        (3 * C86494) / C87320 - (C86583 * C87367) / q - C87487 / q;
    const double C82665 = -(C86201 * C87367 + C87498) / q;
    const double C82673 = -(C86815 * C87367 + C87499) / q;
    const double C82758 = -(C86947 * C87367 + C87503) / q;
    const double C82759 = -(C86889 * C87367 + C87501) / q;
    const double C82822 = -(C86873 * C87367 + C87504) / q;
    const double C82943 = C86218 / C87320 - (C86376 * C87367) / q - C87484 / q;
    const double C82995 = -(C86218 * C87367 + C87508) / q;
    const double C79362 = C87389 - (C83913 * C87367) / q - C87347 / q;
    const double C79122 = C87388 - (C83385 * C87367) / q - C87344 / q;
    const double C79248 = C87388 - (C83478 * C87368) / q - C87357 / q;
    const double C79377 = C87387 - (C83913 * C87368) / q - C87359 / q;
    const double C79084 = C87386 - (C84207 * C87367) / q - C87381;
    const double C78950 = C87385 - (C83897 * C87367) / q - C87382;
    const double C78879 = C87383 - (C83850 * C87368) / q - C87380;
    const double C78800 = C87379 - (C83759 * C87368) / q - C87382;
    const double C78607 = C87376 - (C83291 * C87367) / q - C87369;
    const double C78639 = C87376 - (C83336 * C87368) / q - C87373;
    const double C78520 = C87371 - (C83306 * C87367) / q - C87372;
    const double C78584 = C87371 - (C83351 * C87368) / q - C87375;
    const double C81243 =
        C87443 - (C84568 * de + C85286 * C87367) / q - C87419 / q;
    const double C81003 =
        C87441 - (C84439 * de + C84769 * C87367) / q - C87416 / q;
    const double C81129 = C87441 - (C84860 * C87368) / q - C87431 / q;
    const double C81258 = C87440 - (C85286 * C87368) / q - C87433 / q;
    const double C83124 = C87509 - (C86644 * C87367) / q - C87485 / q;
    const double C82884 = C87507 - (C86127 * C87367) / q - C87482 / q;
    const double C83010 =
        C87507 - (C84525 * de + C86218 * C87368) / q - C87497 / q;
    const double C83139 =
        C87506 - (C84568 * de + C86644 * C87368) / q - C87499 / q;
    const double C78452 = (2 * C83227) / q -
                          (C83223 * de + C83228 * C87366) / q -
                          (C83229 * p) / q;
    const double C78453 = (3 * C83245) / C87320 -
                          (C83241 * de + C83227 * C87366) / q -
                          (C83228 * p) / q;
    const double C78461 =
        C83261 / q - (C83257 * de + C83245 * C87366) / q - (C83227 * p) / q;
    const double C78503 =
        C83367 / q - (C83363 * de + C83368 * C87366) / q - C87369;
    const double C78504 =
        C87332 - (C83381 * de + C83306 * C87366) / q - C87324 / q;
    const double C78551 =
        C83460 / q - (C83456 * de + C83461 * C87366) / q - C87373;
    const double C78552 =
        C87338 - (C83474 * de + C83351 * C87366) / q - C87329 / q;
    const double C78599 = (3 * C83306) / C87320 -
                          (C83548 * de + C83291 * C87366) / q - C87323 / q;
    const double C78623 = (3 * C83351) / C87320 -
                          (C83592 * de + C83336 * C87366) / q - C87328 / q;
    const double C78647 =
        C87343 - (C83635 * de + C83444 * C87366) / q - C87342 / q;
    const double C78671 = C87379 - (C83679 * de + C83367 * C87366) / q - C87372;
    const double C78679 = -(C83695 * de + C83683 * C87366 + C87344) / q;
    const double C78719 = -(C83771 * de + C83775 * C87366 + C87348) / q;
    const double C78720 = -(C83788 * de + C83729 * C87366 + C87345) / q;
    const double C78767 = -(C83862 * de + C83866 * C87366 + C87351) / q;
    const double C78768 = -(C83879 * de + C83759 * C87366 + C87346) / q;
    const double C78815 = C87383 - (C83954 * de + C83713 * C87366) / q - C87370;
    const double C78839 =
        C83759 / C87320 - (C83998 * de + C83744 * C87366) / q - C87377;
    const double C78863 = -(C84041 * de + C83850 * C87366 + C87356) / q;
    const double C78887 = C87385 - (C84084 * de + C83460 * C87366) / q - C87375;
    const double C78895 = -(C84100 * de + C84088 * C87366 + C87357) / q;
    const double C78935 = -(C84175 * de + C83897 * C87366 + C87358) / q;
    const double C78980 = -(C84219 * de + C84223 * C87366 + C87362) / q;
    const double C78981 = -(C84236 * de + C84163 * C87366 + C87360) / q;
    const double C79028 =
        C83897 / C87320 - (C84309 * de + C84118 * C87366) / q - C87378;
    const double C79052 = C87386 - (C84353 * de + C84147 * C87366) / q - C87374;
    const double C79076 = -(C84396 * de + C84207 * C87366 + C87364) / q;
    const double C79107 =
        C87387 - (C84439 * de + C83385 * C87366) / q - C87325 / q;
    const double C79166 =
        C83913 / C87320 - (C84482 * de + C83639 * C87366) / q - C87336 / q;
    const double C79218 =
        C87389 - (C84525 * de + C83478 * C87366) / q - C87330 / q;
    const double C79347 = -(C84568 * de + C83913 * C87366 + C87365) / q;
    const double C80333 =
        (2 * C84615) / q - (C84616 * C87366) / q - (C84617 * p) / q;
    const double C80334 =
        (3 * C84632) / C87320 - (C84615 * C87366) / q - (C84616 * p) / q;
    const double C80342 = C84647 / q - (C84632 * C87366) / q - (C84615 * p) / q;
    const double C80385 = C87401 - (C84692 * C87366) / q - C87395 / q;
    const double C80433 = C87408 - (C84737 * C87366) / q - C87398 / q;
    const double C80480 =
        (3 * C84692) / C87320 - (C84677 * C87366) / q - C87394 / q;
    const double C80504 =
        (3 * C84737) / C87320 - (C84722 * C87366) / q - C87397 / q;
    const double C80528 = C87414 - (C84828 * C87366) / q - C87413 / q;
    const double C80560 = -(C85061 * C87366 + C87416) / q;
    const double C80600 = -(C85151 * C87366 + C87420) / q;
    const double C80601 = -(C85106 * C87366 + C87417) / q;
    const double C80648 = -(C85240 * C87366 + C87423) / q;
    const double C80649 = -(C85136 * C87366 + C87418) / q;
    const double C80744 = -(C85225 * C87366 + C87429) / q;
    const double C80776 = -(C85457 * C87366 + C87431) / q;
    const double C80816 = -(C85270 * C87366 + C87432) / q;
    const double C80861 = -(C85589 * C87366 + C87436) / q;
    const double C80862 = -(C85531 * C87366 + C87434) / q;
    const double C80957 = -(C85574 * C87366 + C87438) / q;
    const double C80988 = C87440 - (C84769 * C87366) / q - C87396 / q;
    const double C81047 = C85286 / C87320 - (C85018 * C87366) / q - C87406 / q;
    const double C81099 = C87443 - (C84860 * C87366) / q - C87399 / q;
    const double C81228 = -(C85286 * C87366 + C87442) / q;
    const double C82214 =
        (2 * C85973) / q - (C85974 * C87366) / q - (C85975 * p) / q;
    const double C82215 =
        (3 * C85990) / C87320 - (C85973 * C87366) / q - (C85974 * p) / q;
    const double C82223 = C86005 / q - (C85990 * C87366) / q - (C85973 * p) / q;
    const double C82266 = C87467 - (C86050 * C87366) / q - C87461 / q;
    const double C82314 = C87474 - (C86095 * C87366) / q - C87464 / q;
    const double C82361 =
        (3 * C86050) / C87320 - (C86035 * C87366) / q - C87460 / q;
    const double C82385 =
        (3 * C86095) / C87320 - (C86080 * C87366) / q - C87463 / q;
    const double C82409 = C87480 - (C86186 * C87366) / q - C87479 / q;
    const double C82441 = -(C86419 * C87366 + C87482) / q;
    const double C82481 = -(C86509 * C87366 + C87486) / q;
    const double C82482 = -(C86464 * C87366 + C87483) / q;
    const double C82529 = -(C86598 * C87366 + C87489) / q;
    const double C82530 = -(C86494 * C87366 + C87484) / q;
    const double C82625 = -(C86583 * C87366 + C87495) / q;
    const double C82657 = -(C86815 * C87366 + C87497) / q;
    const double C82697 = -(C86628 * C87366 + C87498) / q;
    const double C82742 = -(C86947 * C87366 + C87502) / q;
    const double C82743 = -(C86889 * C87366 + C87500) / q;
    const double C82838 = -(C86932 * C87366 + C87504) / q;
    const double C82869 = C87506 - (C86127 * C87366) / q - C87462 / q;
    const double C82928 = C86644 / C87320 - (C86376 * C87366) / q - C87472 / q;
    const double C82980 = C87509 - (C86218 * C87366) / q - C87465 / q;
    const double C83109 = -(C86644 * C87366 + C87508) / q;
    const double C80681 = C87415 - (C85136 * C87368) / q - C87454;
    const double C80831 = C87430 - (C84175 * de + C85270 * C87367) / q - C87454;
    const double C80680 = C85136 / q - (C85240 * C87368) / q - C87453;
    const double C80965 = C87439 - (C84396 * de + C85574 * C87367) / q - C87453;
    const double C80664 =
        C85270 / q - (C83862 * de + C85240 * C87367) / q - C87452;
    const double C80760 = C87428 - (C85225 * C87368) / q - C87452;
    const double C80736 = C84752 / C87320 - (C85121 * C87368) / q - C87455;
    const double C80917 =
        C84843 / C87320 - (C84309 * de + C85486 * C87367) / q - C87455;
    const double C80465 = C87403 - (C84737 * C87368) / q - C87449;
    const double C80768 = C87430 - (C84843 * C87366) / q - C87449;
    const double C80464 = C84737 / q - (C84844 * C87368) / q - C87448;
    const double C80933 = C87439 - (C85515 * C87366) / q - C87448;
    const double C80544 = C84692 / C87320 - (C84828 * C87368) / q - C87451;
    const double C80909 = C85270 / C87320 - (C85486 * C87366) / q - C87451;
    const double C80432 = C84843 / q - (C84844 * C87366) / q - C87447;
    const double C80520 = C87412 - (C84722 * C87368) / q - C87447;
    const double C80536 =
        C84737 / C87320 - (C83635 * de + C84828 * C87367) / q - C87450;
    const double C80720 = C85136 / C87320 - (C85121 * C87366) / q - C87450;
    const double C80401 = C87403 - (C83381 * de + C84692 * C87367) / q - C87446;
    const double C80552 = C87415 - (C84752 * C87366) / q - C87446;
    const double C80400 =
        C84692 / q - (C83363 * de + C84753 * C87367) / q - C87445;
    const double C80696 = C87428 - (C85090 * C87366) / q - C87445;
    const double C80384 = C84752 / q - (C84753 * C87366) / q - C87444;
    const double C80488 = C87412 - (C83548 * de + C84677 * C87367) / q - C87444;
    const double C82562 = C87481 - (C83879 * de + C86494 * C87368) / q - C87520;
    const double C82712 = C87496 - (C86628 * C87367) / q - C87520;
    const double C82561 =
        C86494 / q - (C83862 * de + C86598 * C87368) / q - C87519;
    const double C82846 = C87505 - (C86932 * C87367) / q - C87519;
    const double C82545 = C86628 / q - (C86598 * C87367) / q - C87518;
    const double C82641 = C87494 - (C84041 * de + C86583 * C87368) / q - C87518;
    const double C82617 =
        C86110 / C87320 - (C83998 * de + C86479 * C87368) / q - C87521;
    const double C82798 = C86201 / C87320 - (C86844 * C87367) / q - C87521;
    const double C82346 = C87469 - (C83474 * de + C86095 * C87368) / q - C87515;
    const double C82649 = C87496 - (C86201 * C87366) / q - C87515;
    const double C82345 =
        C86095 / q - (C83456 * de + C86202 * C87368) / q - C87514;
    const double C82814 = C87505 - (C86873 * C87366) / q - C87514;
    const double C82425 =
        C86050 / C87320 - (C83635 * de + C86186 * C87368) / q - C87517;
    const double C82790 = C86628 / C87320 - (C86844 * C87366) / q - C87517;
    const double C82313 = C86201 / q - (C86202 * C87366) / q - C87513;
    const double C82401 = C87478 - (C83592 * de + C86080 * C87368) / q - C87513;
    const double C82417 = C86095 / C87320 - (C86186 * C87367) / q - C87516;
    const double C82601 = C86494 / C87320 - (C86479 * C87366) / q - C87516;
    const double C82282 = C87469 - (C86050 * C87367) / q - C87512;
    const double C82433 = C87481 - (C86110 * C87366) / q - C87512;
    const double C82281 = C86050 / q - (C86111 * C87367) / q - C87511;
    const double C82577 = C87494 - (C86448 * C87366) / q - C87511;
    const double C82265 = C86110 / q - (C86111 * C87366) / q - C87510;
    const double C82369 = C87478 - (C86035 * C87367) / q - C87510;
    etx[0] = C78452;
    etx[1] = C78453;
    etx[2] = C78461;
    etx[3] = C78469;
    etx[4] = C78470;
    etx[5] = C78478;
    etx[6] = C78486;
    etx[7] = C78487;
    etx[8] = C78495;
    etx[9] = C78503;
    etx[10] = C78504;
    etx[11] = C78519;
    etx[12] = C78520;
    etx[13] = C78535;
    etx[14] = C78536;
    etx[15] = C78551;
    etx[16] = C78552;
    etx[17] = C78567;
    etx[18] = C78568;
    etx[19] = C78583;
    etx[20] = C78584;
    etx[21] = C78599;
    etx[22] = C78607;
    etx[23] = C78615;
    etx[24] = C78623;
    etx[25] = C78631;
    etx[26] = C78639;
    etx[27] = C78647;
    etx[28] = C78655;
    etx[29] = C78663;
    etx[30] = C78671;
    etx[31] = C78679;
    etx[32] = C78687;
    etx[33] = C78695;
    etx[34] = C78703;
    etx[35] = C78711;
    etx[36] = C78719;
    etx[37] = C78720;
    etx[38] = C78735;
    etx[39] = C78736;
    etx[40] = C78751;
    etx[41] = C78752;
    etx[42] = C78767;
    etx[43] = C78768;
    etx[44] = C78783;
    etx[45] = C78784;
    etx[46] = C78799;
    etx[47] = C78800;
    etx[48] = C78815;
    etx[49] = C78823;
    etx[50] = C78831;
    etx[51] = C78839;
    etx[52] = C78847;
    etx[53] = C78855;
    etx[54] = C78863;
    etx[55] = C78871;
    etx[56] = C78879;
    etx[57] = C78887;
    etx[58] = C78895;
    etx[59] = C78903;
    etx[60] = C78911;
    etx[61] = C78919;
    etx[62] = C78927;
    etx[63] = C78935;
    etx[64] = C78950;
    etx[65] = C78965;
    etx[66] = C78980;
    etx[67] = C78981;
    etx[68] = C78996;
    etx[69] = C78997;
    etx[70] = C79012;
    etx[71] = C79013;
    etx[72] = C79028;
    etx[73] = C79036;
    etx[74] = C79044;
    etx[75] = C79052;
    etx[76] = C79060;
    etx[77] = C79068;
    etx[78] = C79076;
    etx[79] = C79084;
    etx[80] = C79092;
    etx[81] = C79107;
    etx[82] = C79122;
    etx[83] = C79137;
    etx[84] = C79166;
    etx[85] = C79181;
    etx[86] = C79196;
    etx[87] = C79218;
    etx[88] = C79233;
    etx[89] = C79248;
    etx[90] = C79347;
    etx[91] = C79362;
    etx[92] = C79377;
    ety[0] = C80333;
    ety[1] = C80334;
    ety[2] = C80342;
    ety[3] = C80350;
    ety[4] = C80351;
    ety[5] = C80359;
    ety[6] = C80367;
    ety[7] = C80368;
    ety[8] = C80376;
    ety[9] = C80384;
    ety[10] = C80385;
    ety[11] = C80400;
    ety[12] = C80401;
    ety[13] = C80416;
    ety[14] = C80417;
    ety[15] = C80432;
    ety[16] = C80433;
    ety[17] = C80448;
    ety[18] = C80449;
    ety[19] = C80464;
    ety[20] = C80465;
    ety[21] = C80480;
    ety[22] = C80488;
    ety[23] = C80496;
    ety[24] = C80504;
    ety[25] = C80512;
    ety[26] = C80520;
    ety[27] = C80528;
    ety[28] = C80536;
    ety[29] = C80544;
    ety[30] = C80552;
    ety[31] = C80560;
    ety[32] = C80568;
    ety[33] = C80576;
    ety[34] = C80584;
    ety[35] = C80592;
    ety[36] = C80600;
    ety[37] = C80601;
    ety[38] = C80616;
    ety[39] = C80617;
    ety[40] = C80632;
    ety[41] = C80633;
    ety[42] = C80648;
    ety[43] = C80649;
    ety[44] = C80664;
    ety[45] = C80665;
    ety[46] = C80680;
    ety[47] = C80681;
    ety[48] = C80696;
    ety[49] = C80704;
    ety[50] = C80712;
    ety[51] = C80720;
    ety[52] = C80728;
    ety[53] = C80736;
    ety[54] = C80744;
    ety[55] = C80752;
    ety[56] = C80760;
    ety[57] = C80768;
    ety[58] = C80776;
    ety[59] = C80784;
    ety[60] = C80792;
    ety[61] = C80800;
    ety[62] = C80808;
    ety[63] = C80816;
    ety[64] = C80831;
    ety[65] = C80846;
    ety[66] = C80861;
    ety[67] = C80862;
    ety[68] = C80877;
    ety[69] = C80878;
    ety[70] = C80893;
    ety[71] = C80894;
    ety[72] = C80909;
    ety[73] = C80917;
    ety[74] = C80925;
    ety[75] = C80933;
    ety[76] = C80941;
    ety[77] = C80949;
    ety[78] = C80957;
    ety[79] = C80965;
    ety[80] = C80973;
    ety[81] = C80988;
    ety[82] = C81003;
    ety[83] = C81018;
    ety[84] = C81047;
    ety[85] = C81062;
    ety[86] = C81077;
    ety[87] = C81099;
    ety[88] = C81114;
    ety[89] = C81129;
    ety[90] = C81228;
    ety[91] = C81243;
    ety[92] = C81258;
    etz[0] = C82214;
    etz[1] = C82215;
    etz[2] = C82223;
    etz[3] = C82231;
    etz[4] = C82232;
    etz[5] = C82240;
    etz[6] = C82248;
    etz[7] = C82249;
    etz[8] = C82257;
    etz[9] = C82265;
    etz[10] = C82266;
    etz[11] = C82281;
    etz[12] = C82282;
    etz[13] = C82297;
    etz[14] = C82298;
    etz[15] = C82313;
    etz[16] = C82314;
    etz[17] = C82329;
    etz[18] = C82330;
    etz[19] = C82345;
    etz[20] = C82346;
    etz[21] = C82361;
    etz[22] = C82369;
    etz[23] = C82377;
    etz[24] = C82385;
    etz[25] = C82393;
    etz[26] = C82401;
    etz[27] = C82409;
    etz[28] = C82417;
    etz[29] = C82425;
    etz[30] = C82433;
    etz[31] = C82441;
    etz[32] = C82449;
    etz[33] = C82457;
    etz[34] = C82465;
    etz[35] = C82473;
    etz[36] = C82481;
    etz[37] = C82482;
    etz[38] = C82497;
    etz[39] = C82498;
    etz[40] = C82513;
    etz[41] = C82514;
    etz[42] = C82529;
    etz[43] = C82530;
    etz[44] = C82545;
    etz[45] = C82546;
    etz[46] = C82561;
    etz[47] = C82562;
    etz[48] = C82577;
    etz[49] = C82585;
    etz[50] = C82593;
    etz[51] = C82601;
    etz[52] = C82609;
    etz[53] = C82617;
    etz[54] = C82625;
    etz[55] = C82633;
    etz[56] = C82641;
    etz[57] = C82649;
    etz[58] = C82657;
    etz[59] = C82665;
    etz[60] = C82673;
    etz[61] = C82681;
    etz[62] = C82689;
    etz[63] = C82697;
    etz[64] = C82712;
    etz[65] = C82727;
    etz[66] = C82742;
    etz[67] = C82743;
    etz[68] = C82758;
    etz[69] = C82759;
    etz[70] = C82774;
    etz[71] = C82775;
    etz[72] = C82790;
    etz[73] = C82798;
    etz[74] = C82806;
    etz[75] = C82814;
    etz[76] = C82822;
    etz[77] = C82830;
    etz[78] = C82838;
    etz[79] = C82846;
    etz[80] = C82854;
    etz[81] = C82869;
    etz[82] = C82884;
    etz[83] = C82899;
    etz[84] = C82928;
    etz[85] = C82943;
    etz[86] = C82958;
    etz[87] = C82980;
    etz[88] = C82995;
    etz[89] = C83010;
    etz[90] = C83109;
    etz[91] = C83124;
    etz[92] = C83139;
}
