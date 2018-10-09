/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2210_4_et(const double ae,
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
    const double C83265 = g[0];
    const double C83283 = g[1];
    const double C83299 = g[2];
    const double C83405 = g[3];
    const double C83423 = g[4];
    const double C83498 = g[5];
    const double C83516 = g[6];
    const double C83590 = g[7];
    const double C83634 = g[8];
    const double C83677 = g[9];
    const double C83721 = g[10];
    const double C83737 = g[11];
    const double C83813 = g[12];
    const double C83830 = g[13];
    const double C83904 = g[14];
    const double C83921 = g[15];
    const double C83996 = g[16];
    const double C84040 = g[17];
    const double C84083 = g[18];
    const double C84126 = g[19];
    const double C84142 = g[20];
    const double C84217 = g[21];
    const double C84261 = g[22];
    const double C84278 = g[23];
    const double C84351 = g[24];
    const double C84395 = g[25];
    const double C84438 = g[26];
    const double C84481 = g[27];
    const double C84524 = g[28];
    const double C84567 = g[29];
    const double C84610 = g[30];
    const double C83269 = vrx[0];
    const double C83270 = vrx[1];
    const double C83271 = vrx[2];
    const double C83287 = vrx[3];
    const double C83303 = vrx[4];
    const double C83318 = vrx[5];
    const double C83333 = vrx[6];
    const double C83348 = vrx[7];
    const double C83363 = vrx[8];
    const double C83378 = vrx[9];
    const double C83393 = vrx[10];
    const double C83409 = vrx[11];
    const double C83410 = vrx[12];
    const double C83411 = vrx[13];
    const double C83427 = vrx[14];
    const double C83442 = vrx[15];
    const double C83471 = vrx[16];
    const double C83486 = vrx[17];
    const double C83502 = vrx[18];
    const double C83503 = vrx[19];
    const double C83504 = vrx[20];
    const double C83520 = vrx[21];
    const double C83535 = vrx[22];
    const double C83564 = vrx[23];
    const double C83622 = vrx[24];
    const double C83681 = vrx[25];
    const double C83725 = vrx[26];
    const double C83755 = vrx[27];
    const double C83770 = vrx[28];
    const double C83771 = vrx[29];
    const double C83786 = vrx[30];
    const double C83801 = vrx[31];
    const double C83817 = vrx[32];
    const double C83818 = vrx[33];
    const double C83848 = vrx[34];
    const double C83877 = vrx[35];
    const double C83892 = vrx[36];
    const double C83908 = vrx[37];
    const double C83909 = vrx[38];
    const double C83939 = vrx[39];
    const double C83940 = vrx[40];
    const double C83955 = vrx[41];
    const double C83970 = vrx[42];
    const double C84028 = vrx[43];
    const double C84130 = vrx[44];
    const double C84160 = vrx[45];
    const double C84189 = vrx[46];
    const double C84204 = vrx[47];
    const double C84205 = vrx[48];
    const double C84249 = vrx[49];
    const double C84265 = vrx[50];
    const double C84266 = vrx[51];
    const double C84296 = vrx[52];
    const double C84325 = vrx[53];
    const double C84383 = vrx[54];
    const double C84657 = vry[0];
    const double C84658 = vry[1];
    const double C84659 = vry[2];
    const double C84674 = vry[3];
    const double C84689 = vry[4];
    const double C84704 = vry[5];
    const double C84719 = vry[6];
    const double C84734 = vry[7];
    const double C84749 = vry[8];
    const double C84764 = vry[9];
    const double C84779 = vry[10];
    const double C84794 = vry[11];
    const double C84795 = vry[12];
    const double C84796 = vry[13];
    const double C84811 = vry[14];
    const double C84826 = vry[15];
    const double C84855 = vry[16];
    const double C84870 = vry[17];
    const double C84885 = vry[18];
    const double C84886 = vry[19];
    const double C84887 = vry[20];
    const double C84902 = vry[21];
    const double C84917 = vry[22];
    const double C84946 = vry[23];
    const double C85003 = vry[24];
    const double C85060 = vry[25];
    const double C85103 = vry[26];
    const double C85132 = vry[27];
    const double C85147 = vry[28];
    const double C85148 = vry[29];
    const double C85163 = vry[30];
    const double C85178 = vry[31];
    const double C85193 = vry[32];
    const double C85194 = vry[33];
    const double C85223 = vry[34];
    const double C85252 = vry[35];
    const double C85267 = vry[36];
    const double C85282 = vry[37];
    const double C85283 = vry[38];
    const double C85312 = vry[39];
    const double C85313 = vry[40];
    const double C85328 = vry[41];
    const double C85343 = vry[42];
    const double C85400 = vry[43];
    const double C85499 = vry[44];
    const double C85528 = vry[45];
    const double C85557 = vry[46];
    const double C85572 = vry[47];
    const double C85573 = vry[48];
    const double C85616 = vry[49];
    const double C85631 = vry[50];
    const double C85632 = vry[51];
    const double C85661 = vry[52];
    const double C85690 = vry[53];
    const double C85747 = vry[54];
    const double C86015 = vrz[0];
    const double C86016 = vrz[1];
    const double C86017 = vrz[2];
    const double C86032 = vrz[3];
    const double C86047 = vrz[4];
    const double C86062 = vrz[5];
    const double C86077 = vrz[6];
    const double C86092 = vrz[7];
    const double C86107 = vrz[8];
    const double C86122 = vrz[9];
    const double C86137 = vrz[10];
    const double C86152 = vrz[11];
    const double C86153 = vrz[12];
    const double C86154 = vrz[13];
    const double C86169 = vrz[14];
    const double C86184 = vrz[15];
    const double C86213 = vrz[16];
    const double C86228 = vrz[17];
    const double C86243 = vrz[18];
    const double C86244 = vrz[19];
    const double C86245 = vrz[20];
    const double C86260 = vrz[21];
    const double C86275 = vrz[22];
    const double C86304 = vrz[23];
    const double C86361 = vrz[24];
    const double C86418 = vrz[25];
    const double C86461 = vrz[26];
    const double C86490 = vrz[27];
    const double C86505 = vrz[28];
    const double C86506 = vrz[29];
    const double C86521 = vrz[30];
    const double C86536 = vrz[31];
    const double C86551 = vrz[32];
    const double C86552 = vrz[33];
    const double C86581 = vrz[34];
    const double C86610 = vrz[35];
    const double C86625 = vrz[36];
    const double C86640 = vrz[37];
    const double C86641 = vrz[38];
    const double C86670 = vrz[39];
    const double C86671 = vrz[40];
    const double C86686 = vrz[41];
    const double C86701 = vrz[42];
    const double C86758 = vrz[43];
    const double C86857 = vrz[44];
    const double C86886 = vrz[45];
    const double C86915 = vrz[46];
    const double C86930 = vrz[47];
    const double C86931 = vrz[48];
    const double C86974 = vrz[49];
    const double C86989 = vrz[50];
    const double C86990 = vrz[51];
    const double C87019 = vrz[52];
    const double C87048 = vrz[53];
    const double C87105 = vrz[54];
    const double C87407 = C83681 * p;
    const double C87406 = C84383 * p;
    const double C87405 = C84296 * p;
    const double C87404 = C84266 * p;
    const double C87403 = C84249 * p;
    const double C87402 = C84189 * p;
    const double C87401 = C83939 * p;
    const double C87400 = C84160 * p;
    const double C87399 = C83503 * p;
    const double C87398 = C84028 * p;
    const double C87397 = C83908 * p;
    const double C87396 = C83970 * p;
    const double C87395 = C83955 / q;
    const double C87394 = C83940 * p;
    const double C87393 = C83909 * p;
    const double C87392 = C83892 * p;
    const double C87391 = C83877 * p;
    const double C87390 = C83818 * p;
    const double C87389 = C83801 * p;
    const double C87388 = C83786 * p;
    const double C87387 = C83755 * p;
    const double C87386 = C83410 * p;
    const double C87385 = C83681 / q;
    const double C87384 = C83622 * p;
    const double C87383 = C83502 * p;
    const double C87382 = C83564 * p;
    const double C87381 = C83535 * p;
    const double C87380 = C83520 / q;
    const double C87379 = C83504 * p;
    const double C87378 = C83486 * p;
    const double C87377 = C83471 * p;
    const double C87376 = C83409 * p;
    const double C87375 = C83442 * p;
    const double C87374 = C83427 / q;
    const double C87373 = C83411 * p;
    const double C87372 = C83393 * p;
    const double C87371 = C83378 * p;
    const double C87370 = C83363 * p;
    const double C87369 = de * zCD;
    const double C87368 = be * zAB;
    const double C87367 = C83348 * p;
    const double C87366 = C83333 * p;
    const double C87365 = C83318 * p;
    const double C87364 = de * yCD;
    const double C87363 = be * yAB;
    const double C87362 = 2 * q;
    const double C87361 = de * xCD;
    const double C87360 = be * xAB;
    const double C87494 = C85060 * p;
    const double C87490 = C85747 * p;
    const double C87489 = C85661 * p;
    const double C87488 = C85632 * p;
    const double C87487 = C85616 * p;
    const double C87486 = C85557 * p;
    const double C87485 = C85312 * p;
    const double C87484 = C85528 * p;
    const double C87483 = C84885 * p;
    const double C87481 = C85400 * p;
    const double C87479 = C85282 * p;
    const double C87478 = C85343 * p;
    const double C87477 = C85328 / q;
    const double C87476 = C85313 * p;
    const double C87475 = C85283 * p;
    const double C87474 = C85267 * p;
    const double C87473 = C85252 * p;
    const double C87472 = C85194 * p;
    const double C87471 = C85178 * p;
    const double C87470 = C85163 * p;
    const double C87469 = C85132 * p;
    const double C87468 = C84794 * p;
    const double C87466 = C85060 / q;
    const double C87465 = C85003 * p;
    const double C87463 = C84886 * p;
    const double C87462 = C84946 * p;
    const double C87461 = C84917 * p;
    const double C87460 = C84902 / q;
    const double C87459 = C84887 * p;
    const double C87458 = C84870 * p;
    const double C87457 = C84855 * p;
    const double C87456 = C84795 * p;
    const double C87454 = C84826 * p;
    const double C87453 = C84811 / q;
    const double C87452 = C84796 * p;
    const double C87451 = C84779 * p;
    const double C87450 = C84764 * p;
    const double C87449 = C84749 * p;
    const double C87448 = C84734 * p;
    const double C87447 = C84719 * p;
    const double C87446 = C84704 * p;
    const double C87570 = C86418 * p;
    const double C87566 = C87105 * p;
    const double C87565 = C87019 * p;
    const double C87564 = C86990 * p;
    const double C87563 = C86974 * p;
    const double C87562 = C86915 * p;
    const double C87561 = C86670 * p;
    const double C87560 = C86886 * p;
    const double C87559 = C86243 * p;
    const double C87557 = C86758 * p;
    const double C87555 = C86640 * p;
    const double C87554 = C86701 * p;
    const double C87553 = C86686 / q;
    const double C87552 = C86671 * p;
    const double C87551 = C86641 * p;
    const double C87550 = C86625 * p;
    const double C87549 = C86610 * p;
    const double C87548 = C86552 * p;
    const double C87547 = C86536 * p;
    const double C87546 = C86521 * p;
    const double C87545 = C86490 * p;
    const double C87544 = C86152 * p;
    const double C87542 = C86418 / q;
    const double C87541 = C86361 * p;
    const double C87539 = C86244 * p;
    const double C87538 = C86304 * p;
    const double C87537 = C86275 * p;
    const double C87536 = C86260 / q;
    const double C87535 = C86245 * p;
    const double C87534 = C86228 * p;
    const double C87533 = C86213 * p;
    const double C87532 = C86153 * p;
    const double C87530 = C86184 * p;
    const double C87529 = C86169 / q;
    const double C87528 = C86154 * p;
    const double C87527 = C86137 * p;
    const double C87526 = C86122 * p;
    const double C87525 = C86107 * p;
    const double C87524 = C86092 * p;
    const double C87523 = C86077 * p;
    const double C87522 = C86062 * p;
    const double C87437 = C87406 / q;
    const double C87436 = C87404 / q;
    const double C87434 = C87402 / q;
    const double C87435 = C87400 / q;
    const double C87433 = C87399 / q;
    const double C87431 = C87398 / q;
    const double C87429 = C87397 / q;
    const double C87428 = C87396 / q;
    const double C87427 = C87394 / q;
    const double C87425 = C87393 / q;
    const double C87424 = C87390 / q;
    const double C87426 = C87388 / q;
    const double C87423 = C87387 / q;
    const double C87422 = C87386 / q;
    const double C87417 = C87383 / q;
    const double C87416 = C87382 / q;
    const double C87420 = C87381 / q;
    const double C87415 = C87379 / q;
    const double C87419 = C87377 / q;
    const double C87414 = C87376 / q;
    const double C87412 = C87375 / q;
    const double C87411 = C87373 / q;
    const double C87410 = C87368 + C87369;
    const double C87409 = C87363 + C87364;
    const double C87441 = C84204 / C87362;
    const double C87440 = C83303 / C87362;
    const double C87439 = C83770 / C87362;
    const double C87438 = C84205 / C87362;
    const double C87432 = C84130 / C87362;
    const double C87430 = C83771 / C87362;
    const double C87421 = C83725 / C87362;
    const double C87418 = C83270 / C87362;
    const double C87413 = C83287 / C87362;
    const double C87495 = C85572 / C87362;
    const double C87493 = C84689 / C87362;
    const double C87492 = C85147 / C87362;
    const double C87491 = C85573 / C87362;
    const double C87482 = C85499 / C87362;
    const double C87480 = C85148 / C87362;
    const double C87467 = C85103 / C87362;
    const double C87464 = C84657 / C87362;
    const double C87455 = C84674 / C87362;
    const double C87571 = C86930 / C87362;
    const double C87569 = C86047 / C87362;
    const double C87568 = C86505 / C87362;
    const double C87567 = C86931 / C87362;
    const double C87558 = C86857 / C87362;
    const double C87556 = C86506 / C87362;
    const double C87543 = C86461 / C87362;
    const double C87540 = C86015 / C87362;
    const double C87531 = C86032 / C87362;
    const double C87408 = C87360 + C87361;
    const double C87517 = C87490 / q;
    const double C87516 = C87489 / q;
    const double C87515 = C87487 / q;
    const double C87514 = C87485 / q;
    const double C87513 = C87484 / q;
    const double C87511 = C87479 / q;
    const double C87510 = C87478 / q;
    const double C87509 = C87476 / q;
    const double C87512 = C87475 / q;
    const double C87507 = C87465 / q;
    const double C87506 = C87463 / q;
    const double C87505 = C87462 / q;
    const double C87503 = C87461 / q;
    const double C87502 = C87459 / q;
    const double C87504 = C87458 / q;
    const double C87508 = C87457 / q;
    const double C87501 = C87456 / q;
    const double C87500 = C87454 / q;
    const double C87499 = C87452 / q;
    const double C87498 = C87448 / q;
    const double C87497 = C87447 / q;
    const double C87496 = C87446 / q;
    const double C87592 = C87557 / q;
    const double C87591 = C87555 / q;
    const double C87590 = C87554 / q;
    const double C87589 = C87552 / q;
    const double C87593 = C87551 / q;
    const double C87588 = C87550 / q;
    const double C87587 = C87549 / q;
    const double C87586 = C87547 / q;
    const double C87585 = C87546 / q;
    const double C87583 = C87541 / q;
    const double C87582 = C87539 / q;
    const double C87581 = C87538 / q;
    const double C87584 = C87537 / q;
    const double C87580 = C87535 / q;
    const double C87579 = C87534 / q;
    const double C87578 = C87533 / q;
    const double C87577 = C87532 / q;
    const double C87576 = C87530 / q;
    const double C87575 = C87528 / q;
    const double C87574 = C87527 / q;
    const double C87573 = C87526 / q;
    const double C87572 = C87525 / q;
    const double C78528 = -(C83269 * C87410 + C87370) / q;
    const double C78529 = -(C83270 * C87410 + C87371) / q;
    const double C78537 = -(C83287 * C87410 + C87372) / q;
    const double C78577 = -(C83409 * C87410 + C87377) / q;
    const double C78578 = -(C83348 * C87410 + C87378) / q;
    const double C78625 = C83393 / q - (C83502 * C87410) / q - C87416;
    const double C78657 = -(C83333 * C87410 + C87384) / q;
    const double C78705 = C83348 / C87362 - (C83486 * C87410) / q - C87420;
    const double C78745 = -(C83410 * C87410 + C87388) / q;
    const double C78753 = -(C83725 * C87410 + C87389) / q;
    const double C78793 = -(C83817 * C87410 + C87391) / q;
    const double C78794 = -(C83771 * C87410 + C87392) / q;
    const double C78841 = C83801 / q - (C83908 * C87410) / q - C87428;
    const double C78873 = -(C83755 * C87410 + C87398) / q;
    const double C78897 = C83410 / C87362 - (C83786 * C87410) / q - C87425;
    const double C78961 = C87380 - (C83503 * C87410) / q - C87434;
    const double C78969 = C84204 / q - (C84130 * C87410) / q - (C84205 * p) / q;
    const double C79007 = C87395 - (C83939 * C87410) / q - C87403 / q;
    const double C79054 =
        (2 * C84205) / q - (C84265 * C87410) / q - (C84325 * p) / q;
    const double C79055 =
        (3 * C84130) / C87362 - (C84205 * C87410) / q - (C84265 * p) / q;
    const double C79086 = C87385 - (C84160 * C87410) / q - C87437;
    const double C79110 =
        (3 * C83503) / C87362 - (C84189 * C87410) / q - C87436;
    const double C79134 =
        (3 * C83939) / C87362 - (C84249 * C87410) / q - C87405 / q;
    const double C79179 = -(C83427 * C87410 + C87407) / q;
    const double C79238 = C83427 / C87362 - (C83681 * C87410) / q - C87435;
    const double C80409 = -(C84658 * C87410 + C87449) / q;
    const double C80410 = -(C84657 * C87410 + C87450) / q;
    const double C80418 = -(C84674 * C87410 + C87451) / q;
    const double C80458 = -(C84795 * C87410 + C87457) / q;
    const double C80459 = -(C84734 * C87410 + C87458) / q;
    const double C80538 = -(C84719 * C87410 + C87465) / q;
    const double C80626 = -(C84794 * C87410 + C87470) / q;
    const double C80634 = -(C85103 * C87410 + C87471) / q;
    const double C80674 = -(C85193 * C87410 + C87473) / q;
    const double C80675 = -(C85148 * C87410 + C87474) / q;
    const double C80754 = -(C85132 * C87410 + C87481) / q;
    const double C80842 = C87460 - (C84885 * C87410) / q - C87486 / q;
    const double C80850 = C85572 / q - (C85499 * C87410) / q - (C85573 * p) / q;
    const double C80935 =
        (2 * C85573) / q - (C85631 * C87410) / q - (C85690 * p) / q;
    const double C80936 =
        (3 * C85499) / C87362 - (C85573 * C87410) / q - (C85631 * p) / q;
    const double C80991 =
        (3 * C84885) / C87362 - (C85557 * C87410) / q - C87488 / q;
    const double C81060 = -(C84811 * C87410 + C87494) / q;
    const double C82723 =
        (C84126 * de) / q - (C86243 * C87410) / q + C87536 - C87562 / q;
    const double C82731 = (C84142 * de) / q - (C86857 * C87410) / q +
                          C86930 / q - (C86931 * p) / q;
    const double C82769 =
        (C84217 * de) / q - (C86670 * C87410) / q + C87553 - C87563 / q;
    const double C82816 = (C84261 * de) / q - (C86989 * C87410) / q +
                          (2 * C86931) / q - (C87048 * p) / q;
    const double C82817 = (C84278 * de) / q - (C86931 * C87410) / q +
                          (3 * C86857) / C87362 - (C86989 * p) / q;
    const double C82848 =
        (C84351 * de) / q - (C86886 * C87410) / q + C87542 - C87566 / q;
    const double C82872 = (C84395 * de) / q - (C86915 * C87410) / q +
                          (3 * C86243) / C87362 - C87564 / q;
    const double C82896 = (C84438 * de) / q - (C86974 * C87410) / q +
                          (3 * C86670) / C87362 - C87565 / q;
    const double C82941 =
        (C84481 * de) / q - (C86169 * C87410) / q - C87570 / q;
    const double C83000 = (C84524 * de) / q - (C86418 * C87410) / q +
                          C86169 / C87362 - C87560 / q;
    const double C78511 = -(C83269 * C87409 + C87365) / q;
    const double C78512 = -(C83270 * C87409 + C87366) / q;
    const double C78520 = -(C83287 * C87409 + C87367) / q;
    const double C78561 = C83348 / q - (C83409 * C87409) / q - C87412;
    const double C78609 = -(C83502 * C87409 + C87381) / q;
    const double C78610 = -(C83393 * C87409 + C87378) / q;
    const double C78673 = -(C83378 * C87409 + C87384) / q;
    const double C78697 = C83393 / C87362 - (C83486 * C87409) / q - C87419;
    const double C78729 = C87374 - (C83410 * C87409) / q - C87423;
    const double C78737 = C83770 / q - (C83725 * C87409) / q - (C83771 * p) / q;
    const double C78777 =
        (2 * C83771) / q - (C83817 * C87409) / q - (C83848 * p) / q;
    const double C78778 =
        (3 * C83725) / C87362 - (C83771 * C87409) / q - (C83817 * p) / q;
    const double C78825 = C83939 / q - (C83908 * C87409) / q - C87427;
    const double C78826 = C87395 - (C83801 * C87409) / q - C87392 / q;
    const double C78865 =
        (3 * C83410) / C87362 - (C83755 * C87409) / q - C87424;
    const double C78889 = C87385 - (C83786 * C87409) / q - C87431;
    const double C78913 =
        (3 * C83801) / C87362 - (C83892 * C87409) / q - C87391 / q;
    const double C78945 = -(C83503 * C87409 + C87400) / q;
    const double C78953 = -(C84130 * C87409 + C87401) / q;
    const double C79038 = -(C84265 * C87409 + C87405) / q;
    const double C79039 = -(C84205 * C87409 + C87403) / q;
    const double C79078 = C83503 / C87362 - (C84160 * C87409) / q - C87425;
    const double C79102 = -(C84189 * C87409 + C87406) / q;
    const double C79223 = C83520 / C87362 - (C83681 * C87409) / q - C87426;
    const double C79275 = -(C83520 * C87409 + C87407) / q;
    const double C80610 =
        (C83721 * de) / q - (C84794 * C87409) / q + C87453 - C87469 / q;
    const double C80618 = (C83737 * de) / q - (C85103 * C87409) / q +
                          C85147 / q - (C85148 * p) / q;
    const double C80658 = (C83813 * de) / q - (C85193 * C87409) / q +
                          (2 * C85148) / q - (C85223 * p) / q;
    const double C80659 = (C83830 * de) / q - (C85148 * C87409) / q +
                          (3 * C85103) / C87362 - (C85193 * p) / q;
    const double C80707 =
        (C83921 * de) / q - (C85178 * C87409) / q + C87477 - C87474 / q;
    const double C80746 = (C83996 * de) / q - (C85132 * C87409) / q +
                          (3 * C84794) / C87362 - C87472 / q;
    const double C80770 =
        (C84040 * de) / q - (C85163 * C87409) / q + C87466 - C87481 / q;
    const double C80794 = (C84083 * de) / q - (C85267 * C87409) / q +
                          (3 * C85178) / C87362 - C87473 / q;
    const double C81104 = (C84524 * de) / q - (C85060 * C87409) / q +
                          C84902 / C87362 - C87470 / q;
    const double C81156 =
        (C84567 * de) / q - (C84902 * C87409) / q - C87494 / q;
    const double C82273 = -(C86016 * C87409 + C87522) / q;
    const double C82274 = -(C86015 * C87409 + C87523) / q;
    const double C82282 = -(C86032 * C87409 + C87524) / q;
    const double C82371 = -(C86244 * C87409 + C87537) / q;
    const double C82372 = -(C86137 * C87409 + C87534) / q;
    const double C82435 = -(C86122 * C87409 + C87541) / q;
    const double C82491 = C87529 - (C86152 * C87409) / q - C87545 / q;
    const double C82499 = C86505 / q - (C86461 * C87409) / q - (C86506 * p) / q;
    const double C82539 =
        (2 * C86506) / q - (C86551 * C87409) / q - (C86581 * p) / q;
    const double C82540 =
        (3 * C86461) / C87362 - (C86506 * C87409) / q - (C86551 * p) / q;
    const double C82627 =
        (3 * C86152) / C87362 - (C86490 * C87409) / q - C87548 / q;
    const double C82707 = -(C86243 * C87409 + C87560) / q;
    const double C82715 = -(C86857 * C87409 + C87561) / q;
    const double C82800 = -(C86989 * C87409 + C87565) / q;
    const double C82801 = -(C86931 * C87409 + C87563) / q;
    const double C82864 = -(C86915 * C87409 + C87566) / q;
    const double C83037 = -(C86260 * C87409 + C87570) / q;
    const double C79404 = C87441 - (C83955 * C87409) / q - C87389 / q;
    const double C79164 = C87440 - (C83427 * C87409) / q - C87422;
    const double C79290 = C87440 - (C83520 * C87410) / q - C87433;
    const double C79419 = C87439 - (C83955 * C87410) / q - C87401 / q;
    const double C79126 = C87438 - (C84249 * C87409) / q - C87428;
    const double C78992 = C87432 - (C83939 * C87409) / q - C87429;
    const double C78921 = C87430 - (C83892 * C87410) / q - C87427;
    const double C78842 = C87421 - (C83801 * C87410) / q - C87429;
    const double C78649 = C87418 - (C83333 * C87409) / q - C87411;
    const double C78681 = C87418 - (C83378 * C87410) / q - C87415;
    const double C78562 = C87413 - (C83348 * C87409) / q - C87414;
    const double C78626 = C87413 - (C83393 * C87410) / q - C87417;
    const double C81285 =
        (C84610 * de) / q - (C85328 * C87409) / q + C87495 - C87471 / q;
    const double C81045 =
        (C84481 * de) / q - (C84811 * C87409) / q + C87493 - C87468 / q;
    const double C81171 = C87493 - (C84902 * C87410) / q - C87483 / q;
    const double C82926 = C87569 - (C86169 * C87409) / q - C87544 / q;
    const double C83052 =
        (C84567 * de) / q - (C86260 * C87410) / q + C87569 - C87559 / q;
    const double C83181 =
        (C84610 * de) / q - (C86686 * C87410) / q + C87568 - C87561 / q;
    const double C78494 = (C83265 * de) / q - (C83269 * C87408) / q +
                          (2 * C83270) / q - (C83271 * p) / q;
    const double C78495 = (C83283 * de) / q - (C83270 * C87408) / q +
                          (3 * C83287) / C87362 - (C83269 * p) / q;
    const double C78503 = (C83299 * de) / q - (C83287 * C87408) / q +
                          C83303 / q - (C83270 * p) / q;
    const double C78545 =
        (C83405 * de) / q - (C83409 * C87408) / q + C83410 / q - C87411;
    const double C78546 =
        (C83423 * de) / q - (C83348 * C87408) / q + C87374 - C87366 / q;
    const double C78593 =
        (C83498 * de) / q - (C83502 * C87408) / q + C83503 / q - C87415;
    const double C78594 =
        (C83516 * de) / q - (C83393 * C87408) / q + C87380 - C87371 / q;
    const double C78641 = (C83590 * de) / q - (C83333 * C87408) / q +
                          (3 * C83348) / C87362 - C87365 / q;
    const double C78665 = (C83634 * de) / q - (C83378 * C87408) / q +
                          (3 * C83393) / C87362 - C87370 / q;
    const double C78689 =
        (C83677 * de) / q - (C83486 * C87408) / q + C87385 - C87384 / q;
    const double C78713 =
        (C83721 * de) / q - (C83410 * C87408) / q + C87421 - C87414;
    const double C78721 = (C83737 * de) / q - (C83725 * C87408) / q - C87422;
    const double C78761 = (C83813 * de) / q - (C83817 * C87408) / q - C87424;
    const double C78762 = (C83830 * de) / q - (C83771 * C87408) / q - C87423;
    const double C78809 = (C83904 * de) / q - (C83908 * C87408) / q - C87425;
    const double C78810 = (C83921 * de) / q - (C83801 * C87408) / q - C87426;
    const double C78857 =
        (C83996 * de) / q - (C83755 * C87408) / q + C87430 - C87412;
    const double C78881 =
        (C84040 * de) / q - (C83786 * C87408) / q + C83801 / C87362 - C87419;
    const double C78905 = (C84083 * de) / q - (C83892 * C87408) / q - C87431;
    const double C78929 =
        (C84126 * de) / q - (C83503 * C87408) / q + C87432 - C87417;
    const double C78937 = (C84142 * de) / q - (C84130 * C87408) / q - C87433;
    const double C78977 = (C84217 * de) / q - (C83939 * C87408) / q - C87435;
    const double C79022 = (C84261 * de) / q - (C84265 * C87408) / q - C87436;
    const double C79023 = (C84278 * de) / q - (C84205 * C87408) / q - C87434;
    const double C79070 =
        (C84351 * de) / q - (C84160 * C87408) / q + C83939 / C87362 - C87420;
    const double C79094 =
        (C84395 * de) / q - (C84189 * C87408) / q + C87438 - C87416;
    const double C79118 = (C84438 * de) / q - (C84249 * C87408) / q - C87437;
    const double C79149 =
        (C84481 * de) / q - (C83427 * C87408) / q + C87439 - C87367 / q;
    const double C79208 = (C84524 * de) / q - (C83681 * C87408) / q +
                          C83955 / C87362 - C87378 / q;
    const double C79260 =
        (C84567 * de) / q - (C83520 * C87408) / q + C87441 - C87372 / q;
    const double C79389 =
        (C84610 * de) / q - (C83955 * C87408) / q - C87407 / q;
    const double C80375 =
        (2 * C84657) / q - (C84658 * C87408) / q - (C84659 * p) / q;
    const double C80376 =
        (3 * C84674) / C87362 - (C84657 * C87408) / q - (C84658 * p) / q;
    const double C80384 = C84689 / q - (C84674 * C87408) / q - (C84657 * p) / q;
    const double C80475 = C87460 - (C84779 * C87408) / q - C87450 / q;
    const double C80546 =
        (3 * C84779) / C87362 - (C84764 * C87408) / q - C87449 / q;
    const double C80602 = -(C85103 * C87408 + C87468) / q;
    const double C80642 = -(C85193 * C87408 + C87472) / q;
    const double C80643 = -(C85148 * C87408 + C87469) / q;
    const double C80690 = -(C85282 * C87408 + C87475) / q;
    const double C80691 = -(C85178 * C87408 + C87470) / q;
    const double C80786 = -(C85267 * C87408 + C87481) / q;
    const double C80818 = -(C85499 * C87408 + C87483) / q;
    const double C80858 = -(C85312 * C87408 + C87484) / q;
    const double C80903 = -(C85631 * C87408 + C87488) / q;
    const double C80904 = -(C85573 * C87408 + C87486) / q;
    const double C80999 = -(C85616 * C87408 + C87490) / q;
    const double C81141 = C87495 - (C84902 * C87408) / q - C87451 / q;
    const double C81270 = -(C85328 * C87408 + C87494) / q;
    const double C82256 =
        (2 * C86015) / q - (C86016 * C87408) / q - (C86017 * p) / q;
    const double C82257 =
        (3 * C86032) / C87362 - (C86015 * C87408) / q - (C86016 * p) / q;
    const double C82265 = C86047 / q - (C86032 * C87408) / q - (C86015 * p) / q;
    const double C82308 = C87529 - (C86092 * C87408) / q - C87523 / q;
    const double C82403 =
        (3 * C86092) / C87362 - (C86077 * C87408) / q - C87522 / q;
    const double C82483 = -(C86461 * C87408 + C87544) / q;
    const double C82523 = -(C86551 * C87408 + C87548) / q;
    const double C82524 = -(C86506 * C87408 + C87545) / q;
    const double C82571 = -(C86640 * C87408 + C87551) / q;
    const double C82572 = -(C86536 * C87408 + C87546) / q;
    const double C82667 = -(C86625 * C87408 + C87557) / q;
    const double C82699 = -(C86857 * C87408 + C87559) / q;
    const double C82739 = -(C86670 * C87408 + C87560) / q;
    const double C82784 = -(C86989 * C87408 + C87564) / q;
    const double C82785 = -(C86931 * C87408 + C87562) / q;
    const double C82880 = -(C86974 * C87408 + C87566) / q;
    const double C82911 = C87568 - (C86169 * C87408) / q - C87524 / q;
    const double C83151 = -(C86686 * C87408 + C87570) / q;
    const double C80967 = C87466 - (C85528 * C87410) / q - C87517;
    const double C80983 = (C84395 * de) / q - (C85557 * C87409) / q - C87517;
    const double C80919 = (C84261 * de) / q - (C85631 * C87409) / q - C87516;
    const double C81015 =
        (3 * C85312) / C87362 - (C85616 * C87410) / q - C87516;
    const double C80888 = C87477 - (C85312 * C87410) / q - C87515;
    const double C80920 = (C84278 * de) / q - (C85573 * C87409) / q - C87515;
    const double C80834 = (C84142 * de) / q - (C85499 * C87409) / q - C87514;
    const double C81300 = C87492 - (C85328 * C87410) / q - C87514;
    const double C80826 = (C84126 * de) / q - (C84885 * C87409) / q - C87513;
    const double C81119 = C84811 / C87362 - (C85060 * C87410) / q - C87513;
    const double C80723 = C87467 - (C85178 * C87410) / q - C87511;
    const double C80873 =
        (C84217 * de) / q - (C85312 * C87409) / q + C87482 - C87511;
    const double C80722 = C85178 / q - (C85282 * C87410) / q - C87510;
    const double C81007 =
        (C84438 * de) / q - (C85616 * C87409) / q + C87491 - C87510;
    const double C80706 =
        (C83904 * de) / q - (C85282 * C87409) / q + C85312 / q - C87509;
    const double C80802 = C87480 - (C85267 * C87410) / q - C87509;
    const double C80778 = C84794 / C87362 - (C85163 * C87410) / q - C87512;
    const double C80959 =
        (C84351 * de) / q - (C85528 * C87409) / q + C84885 / C87362 - C87512;
    const double C80554 = (C83634 * de) / q - (C84764 * C87409) / q - C87507;
    const double C80570 = C87466 - (C84870 * C87408) / q - C87507;
    const double C80507 = C87455 - (C84779 * C87410) / q - C87506;
    const double C80810 = C87482 - (C84885 * C87408) / q - C87506;
    const double C80506 = C84779 / q - (C84886 * C87410) / q - C87505;
    const double C80975 = C87491 - (C85557 * C87408) / q - C87505;
    const double C80490 = (C83498 * de) / q - (C84886 * C87409) / q - C87503;
    const double C80586 = C84734 / C87362 - (C84870 * C87410) / q - C87503;
    const double C80951 = C85312 / C87362 - (C85528 * C87408) / q - C87503;
    const double C80474 = C84885 / q - (C84886 * C87408) / q - C87502;
    const double C80562 = C87464 - (C84764 * C87410) / q - C87502;
    const double C80491 = (C83516 * de) / q - (C84779 * C87409) / q - C87504;
    const double C81089 = C85328 / C87362 - (C85060 * C87408) / q - C87504;
    const double C80578 =
        (C83677 * de) / q - (C84870 * C87409) / q + C84779 / C87362 - C87508;
    const double C80762 = C85178 / C87362 - (C85163 * C87408) / q - C87508;
    const double C80443 =
        (C83423 * de) / q - (C84734 * C87409) / q + C87455 - C87501;
    const double C80594 = C87467 - (C84794 * C87408) / q - C87501;
    const double C80442 =
        (C83405 * de) / q - (C84795 * C87409) / q + C84734 / q - C87500;
    const double C80738 = C87480 - (C85132 * C87408) / q - C87500;
    const double C80426 = C84794 / q - (C84795 * C87408) / q - C87499;
    const double C80530 =
        (C83590 * de) / q - (C84719 * C87409) / q + C87464 - C87499;
    const double C80401 = (C83299 * de) / q - (C84674 * C87409) / q - C87498;
    const double C81030 = C87492 - (C84811 * C87408) / q - C87498;
    const double C80393 = (C83283 * de) / q - (C84657 * C87409) / q - C87497;
    const double C80427 = C87453 - (C84734 * C87408) / q - C87497;
    const double C80392 = (C83265 * de) / q - (C84658 * C87409) / q - C87496;
    const double C80522 =
        (3 * C84734) / C87362 - (C84719 * C87408) / q - C87496;
    const double C82635 = (C83996 * de) / q - (C86490 * C87410) / q - C87592;
    const double C82651 = C87542 - (C86521 * C87409) / q - C87592;
    const double C82604 =
        (C83921 * de) / q - (C86536 * C87410) / q + C87543 - C87591;
    const double C82754 = C87558 - (C86670 * C87409) / q - C87591;
    const double C82603 =
        (C83904 * de) / q - (C86640 * C87410) / q + C86536 / q - C87590;
    const double C82888 = C87567 - (C86974 * C87409) / q - C87590;
    const double C82587 = C86670 / q - (C86640 * C87409) / q - C87589;
    const double C82683 =
        (C84083 * de) / q - (C86625 * C87410) / q + C87556 - C87589;
    const double C82659 =
        (C84040 * de) / q - (C86521 * C87410) / q + C86152 / C87362 - C87593;
    const double C82840 = C86243 / C87362 - (C86886 * C87409) / q - C87593;
    const double C82556 = (C83830 * de) / q - (C86506 * C87410) / q - C87588;
    const double C82588 = C87553 - (C86536 * C87409) / q - C87588;
    const double C82555 = (C83813 * de) / q - (C86551 * C87410) / q - C87587;
    const double C82675 =
        (3 * C86536) / C87362 - (C86625 * C87409) / q - C87587;
    const double C82515 = (C83737 * de) / q - (C86461 * C87410) / q - C87586;
    const double C83166 = C87571 - (C86686 * C87409) / q - C87586;
    const double C82507 = (C83721 * de) / q - (C86152 * C87410) / q - C87585;
    const double C82985 = C86260 / C87362 - (C86418 * C87409) / q - C87585;
    const double C82419 = (C83590 * de) / q - (C86077 * C87410) / q - C87583;
    const double C82451 = C87542 - (C86228 * C87408) / q - C87583;
    const double C82388 =
        (C83516 * de) / q - (C86137 * C87410) / q + C87531 - C87582;
    const double C82691 = C87558 - (C86243 * C87408) / q - C87582;
    const double C82387 =
        (C83498 * de) / q - (C86244 * C87410) / q + C86137 / q - C87581;
    const double C82856 = C87567 - (C86915 * C87408) / q - C87581;
    const double C82467 =
        (C83677 * de) / q - (C86228 * C87410) / q + C86092 / C87362 - C87584;
    const double C82832 = C86670 / C87362 - (C86886 * C87408) / q - C87584;
    const double C82355 = C86243 / q - (C86244 * C87408) / q - C87580;
    const double C82443 =
        (C83634 * de) / q - (C86122 * C87410) / q + C87540 - C87580;
    const double C82340 = (C83423 * de) / q - (C86092 * C87410) / q - C87579;
    const double C82970 = C86686 / C87362 - (C86418 * C87408) / q - C87579;
    const double C82339 = (C83405 * de) / q - (C86153 * C87410) / q - C87578;
    const double C82459 = C86137 / C87362 - (C86228 * C87409) / q - C87578;
    const double C82643 = C86536 / C87362 - (C86521 * C87408) / q - C87578;
    const double C82324 = C87531 - (C86092 * C87409) / q - C87577;
    const double C82475 = C87543 - (C86152 * C87408) / q - C87577;
    const double C82323 = C86092 / q - (C86153 * C87409) / q - C87576;
    const double C82619 = C87556 - (C86490 * C87408) / q - C87576;
    const double C82307 = C86152 / q - (C86153 * C87408) / q - C87575;
    const double C82411 = C87540 - (C86077 * C87409) / q - C87575;
    const double C82299 = (C83299 * de) / q - (C86032 * C87410) / q - C87574;
    const double C83022 = C87571 - (C86260 * C87408) / q - C87574;
    const double C82291 = (C83283 * de) / q - (C86015 * C87410) / q - C87573;
    const double C82356 = C87536 - (C86137 * C87408) / q - C87573;
    const double C82290 = (C83265 * de) / q - (C86016 * C87410) / q - C87572;
    const double C82427 =
        (3 * C86137) / C87362 - (C86122 * C87408) / q - C87572;
    etx[0] = C78494;
    etx[1] = C78495;
    etx[2] = C78503;
    etx[3] = C78511;
    etx[4] = C78512;
    etx[5] = C78520;
    etx[6] = C78528;
    etx[7] = C78529;
    etx[8] = C78537;
    etx[9] = C78545;
    etx[10] = C78546;
    etx[11] = C78561;
    etx[12] = C78562;
    etx[13] = C78577;
    etx[14] = C78578;
    etx[15] = C78593;
    etx[16] = C78594;
    etx[17] = C78609;
    etx[18] = C78610;
    etx[19] = C78625;
    etx[20] = C78626;
    etx[21] = C78641;
    etx[22] = C78649;
    etx[23] = C78657;
    etx[24] = C78665;
    etx[25] = C78673;
    etx[26] = C78681;
    etx[27] = C78689;
    etx[28] = C78697;
    etx[29] = C78705;
    etx[30] = C78713;
    etx[31] = C78721;
    etx[32] = C78729;
    etx[33] = C78737;
    etx[34] = C78745;
    etx[35] = C78753;
    etx[36] = C78761;
    etx[37] = C78762;
    etx[38] = C78777;
    etx[39] = C78778;
    etx[40] = C78793;
    etx[41] = C78794;
    etx[42] = C78809;
    etx[43] = C78810;
    etx[44] = C78825;
    etx[45] = C78826;
    etx[46] = C78841;
    etx[47] = C78842;
    etx[48] = C78857;
    etx[49] = C78865;
    etx[50] = C78873;
    etx[51] = C78881;
    etx[52] = C78889;
    etx[53] = C78897;
    etx[54] = C78905;
    etx[55] = C78913;
    etx[56] = C78921;
    etx[57] = C78929;
    etx[58] = C78937;
    etx[59] = C78945;
    etx[60] = C78953;
    etx[61] = C78961;
    etx[62] = C78969;
    etx[63] = C78977;
    etx[64] = C78992;
    etx[65] = C79007;
    etx[66] = C79022;
    etx[67] = C79023;
    etx[68] = C79038;
    etx[69] = C79039;
    etx[70] = C79054;
    etx[71] = C79055;
    etx[72] = C79070;
    etx[73] = C79078;
    etx[74] = C79086;
    etx[75] = C79094;
    etx[76] = C79102;
    etx[77] = C79110;
    etx[78] = C79118;
    etx[79] = C79126;
    etx[80] = C79134;
    etx[81] = C79149;
    etx[82] = C79164;
    etx[83] = C79179;
    etx[84] = C79208;
    etx[85] = C79223;
    etx[86] = C79238;
    etx[87] = C79260;
    etx[88] = C79275;
    etx[89] = C79290;
    etx[90] = C79389;
    etx[91] = C79404;
    etx[92] = C79419;
    ety[0] = C80375;
    ety[1] = C80376;
    ety[2] = C80384;
    ety[3] = C80392;
    ety[4] = C80393;
    ety[5] = C80401;
    ety[6] = C80409;
    ety[7] = C80410;
    ety[8] = C80418;
    ety[9] = C80426;
    ety[10] = C80427;
    ety[11] = C80442;
    ety[12] = C80443;
    ety[13] = C80458;
    ety[14] = C80459;
    ety[15] = C80474;
    ety[16] = C80475;
    ety[17] = C80490;
    ety[18] = C80491;
    ety[19] = C80506;
    ety[20] = C80507;
    ety[21] = C80522;
    ety[22] = C80530;
    ety[23] = C80538;
    ety[24] = C80546;
    ety[25] = C80554;
    ety[26] = C80562;
    ety[27] = C80570;
    ety[28] = C80578;
    ety[29] = C80586;
    ety[30] = C80594;
    ety[31] = C80602;
    ety[32] = C80610;
    ety[33] = C80618;
    ety[34] = C80626;
    ety[35] = C80634;
    ety[36] = C80642;
    ety[37] = C80643;
    ety[38] = C80658;
    ety[39] = C80659;
    ety[40] = C80674;
    ety[41] = C80675;
    ety[42] = C80690;
    ety[43] = C80691;
    ety[44] = C80706;
    ety[45] = C80707;
    ety[46] = C80722;
    ety[47] = C80723;
    ety[48] = C80738;
    ety[49] = C80746;
    ety[50] = C80754;
    ety[51] = C80762;
    ety[52] = C80770;
    ety[53] = C80778;
    ety[54] = C80786;
    ety[55] = C80794;
    ety[56] = C80802;
    ety[57] = C80810;
    ety[58] = C80818;
    ety[59] = C80826;
    ety[60] = C80834;
    ety[61] = C80842;
    ety[62] = C80850;
    ety[63] = C80858;
    ety[64] = C80873;
    ety[65] = C80888;
    ety[66] = C80903;
    ety[67] = C80904;
    ety[68] = C80919;
    ety[69] = C80920;
    ety[70] = C80935;
    ety[71] = C80936;
    ety[72] = C80951;
    ety[73] = C80959;
    ety[74] = C80967;
    ety[75] = C80975;
    ety[76] = C80983;
    ety[77] = C80991;
    ety[78] = C80999;
    ety[79] = C81007;
    ety[80] = C81015;
    ety[81] = C81030;
    ety[82] = C81045;
    ety[83] = C81060;
    ety[84] = C81089;
    ety[85] = C81104;
    ety[86] = C81119;
    ety[87] = C81141;
    ety[88] = C81156;
    ety[89] = C81171;
    ety[90] = C81270;
    ety[91] = C81285;
    ety[92] = C81300;
    etz[0] = C82256;
    etz[1] = C82257;
    etz[2] = C82265;
    etz[3] = C82273;
    etz[4] = C82274;
    etz[5] = C82282;
    etz[6] = C82290;
    etz[7] = C82291;
    etz[8] = C82299;
    etz[9] = C82307;
    etz[10] = C82308;
    etz[11] = C82323;
    etz[12] = C82324;
    etz[13] = C82339;
    etz[14] = C82340;
    etz[15] = C82355;
    etz[16] = C82356;
    etz[17] = C82371;
    etz[18] = C82372;
    etz[19] = C82387;
    etz[20] = C82388;
    etz[21] = C82403;
    etz[22] = C82411;
    etz[23] = C82419;
    etz[24] = C82427;
    etz[25] = C82435;
    etz[26] = C82443;
    etz[27] = C82451;
    etz[28] = C82459;
    etz[29] = C82467;
    etz[30] = C82475;
    etz[31] = C82483;
    etz[32] = C82491;
    etz[33] = C82499;
    etz[34] = C82507;
    etz[35] = C82515;
    etz[36] = C82523;
    etz[37] = C82524;
    etz[38] = C82539;
    etz[39] = C82540;
    etz[40] = C82555;
    etz[41] = C82556;
    etz[42] = C82571;
    etz[43] = C82572;
    etz[44] = C82587;
    etz[45] = C82588;
    etz[46] = C82603;
    etz[47] = C82604;
    etz[48] = C82619;
    etz[49] = C82627;
    etz[50] = C82635;
    etz[51] = C82643;
    etz[52] = C82651;
    etz[53] = C82659;
    etz[54] = C82667;
    etz[55] = C82675;
    etz[56] = C82683;
    etz[57] = C82691;
    etz[58] = C82699;
    etz[59] = C82707;
    etz[60] = C82715;
    etz[61] = C82723;
    etz[62] = C82731;
    etz[63] = C82739;
    etz[64] = C82754;
    etz[65] = C82769;
    etz[66] = C82784;
    etz[67] = C82785;
    etz[68] = C82800;
    etz[69] = C82801;
    etz[70] = C82816;
    etz[71] = C82817;
    etz[72] = C82832;
    etz[73] = C82840;
    etz[74] = C82848;
    etz[75] = C82856;
    etz[76] = C82864;
    etz[77] = C82872;
    etz[78] = C82880;
    etz[79] = C82888;
    etz[80] = C82896;
    etz[81] = C82911;
    etz[82] = C82926;
    etz[83] = C82941;
    etz[84] = C82970;
    etz[85] = C82985;
    etz[86] = C83000;
    etz[87] = C83022;
    etz[88] = C83037;
    etz[89] = C83052;
    etz[90] = C83151;
    etz[91] = C83166;
    etz[92] = C83181;
}
