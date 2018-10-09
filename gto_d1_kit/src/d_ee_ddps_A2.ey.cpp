/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2120_1_et(const double ae,
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
    const double C3733 = g[36];
    const double C3753 = g[37];
    const double C3834 = g[38];
    const double C3850 = g[39];
    const double C3866 = g[40];
    const double C3882 = g[41];
    const double C3928 = g[42];
    const double C3977 = g[43];
    const double C3993 = g[44];
    const double C4024 = g[45];
    const double C4074 = g[46];
    const double C4091 = g[47];
    const double C4121 = g[48];
    const double C4140 = g[49];
    const double C4221 = g[50];
    const double C4236 = g[51];
    const double C4251 = g[52];
    const double C4266 = g[53];
    const double C4312 = g[54];
    const double C4360 = g[55];
    const double C4375 = g[56];
    const double C4405 = g[57];
    const double C4455 = g[58];
    const double C4471 = g[59];
    const double C4501 = g[60];
    const double C4520 = g[61];
    const double C4601 = g[62];
    const double C4617 = g[63];
    const double C4632 = g[64];
    const double C4647 = g[65];
    const double C4692 = g[66];
    const double C4740 = g[67];
    const double C4755 = g[68];
    const double C4784 = g[69];
    const double C4833 = g[70];
    const double C4849 = g[71];
    const double C4878 = g[72];
    const double C4924 = g[73];
    const double C4939 = g[74];
    const double C4968 = g[75];
    const double C5016 = g[76];
    const double C5031 = g[77];
    const double C5060 = g[78];
    const double C5105 = g[79];
    const double C5121 = g[80];
    const double C5150 = g[81];
    const double C5194 = g[82];
    const double C5209 = g[83];
    const double C5238 = g[84];
    const double C5254 = g[85];
    const double C5270 = g[86];
    const double C5285 = g[87];
    const double C5507 = g[88];
    const double C5523 = g[89];
    const double C5538 = g[90];
    const double C5626 = g[91];
    const double C5642 = g[92];
    const double C5657 = g[93];
    const double C5757 = g[94];
    const double C5772 = g[95];
    const double C5787 = g[96];
    const double C5977 = g[97];
    const double C5992 = g[98];
    const double C6052 = g[99];
    const double C6067 = g[100];
    const double C6167 = g[101];
    const double C6182 = g[102];
    const double C6197 = g[103];
    const double C6385 = g[104];
    const double C6400 = g[105];
    const double C6444 = g[106];
    const double C6459 = g[107];
    const double C6531 = g[108];
    const double C6560 = g[109];
    const double C6575 = g[110];
    const double C6590 = g[111];
    const double C6619 = g[112];
    const double C8858 = g[113];
    const double C8960 = g[114];
    const double C9261 = g[115];
    const double C9333 = g[116];
    const double C12185 = g[117];
    const double C3740 = vrx[0];
    const double C3758 = vrx[1];
    const double C3934 = vrx[2];
    const double C4030 = vrx[3];
    const double C4127 = vrx[4];
    const double C4144 = vrx[5];
    const double C4316 = vrx[6];
    const double C4409 = vrx[7];
    const double C4507 = vrx[8];
    const double C4524 = vrx[9];
    const double C4696 = vrx[10];
    const double C4788 = vrx[11];
    const double C4883 = vrx[12];
    const double C4974 = vrx[13];
    const double C5065 = vrx[14];
    const double C5154 = vrx[15];
    const double C5242 = vrx[16];
    const double C5258 = vrx[17];
    const double C5274 = vrx[18];
    const double C5289 = vrx[19];
    const double C5304 = vrx[20];
    const double C5319 = vrx[21];
    const double C5348 = vrx[22];
    const double C5363 = vrx[23];
    const double C5378 = vrx[24];
    const double C5407 = vrx[25];
    const double C5422 = vrx[26];
    const double C5451 = vrx[27];
    const double C5480 = vrx[28];
    const double C5495 = vrx[29];
    const double C5511 = vrx[30];
    const double C5556 = vrx[31];
    const double C5571 = vrx[32];
    const double C5614 = vrx[33];
    const double C5630 = vrx[34];
    const double C5703 = vrx[35];
    const double C5805 = vrx[36];
    const double C5820 = vrx[37];
    const double C5862 = vrx[38];
    const double C5877 = vrx[39];
    const double C5892 = vrx[40];
    const double C5921 = vrx[41];
    const double C5936 = vrx[42];
    const double C5965 = vrx[43];
    const double C6010 = vrx[44];
    const double C6025 = vrx[45];
    const double C6040 = vrx[46];
    const double C6127 = vrx[47];
    const double C6215 = vrx[48];
    const double C6272 = vrx[49];
    const double C6287 = vrx[50];
    const double C6329 = vrx[51];
    const double C6358 = vrx[52];
    const double C6373 = vrx[53];
    const double C6432 = vrx[54];
    const double C6505 = vrx[55];
    const double C6654 = vry[0];
    const double C6671 = vry[1];
    const double C6842 = vry[2];
    const double C6935 = vry[3];
    const double C7029 = vry[4];
    const double C7045 = vry[5];
    const double C7212 = vry[6];
    const double C7302 = vry[7];
    const double C7397 = vry[8];
    const double C7413 = vry[9];
    const double C7580 = vry[10];
    const double C7669 = vry[11];
    const double C7761 = vry[12];
    const double C7849 = vry[13];
    const double C7937 = vry[14];
    const double C8023 = vry[15];
    const double C8108 = vry[16];
    const double C8123 = vry[17];
    const double C8138 = vry[18];
    const double C8152 = vry[19];
    const double C8167 = vry[20];
    const double C8182 = vry[21];
    const double C8211 = vry[22];
    const double C8226 = vry[23];
    const double C8241 = vry[24];
    const double C8270 = vry[25];
    const double C8285 = vry[26];
    const double C8314 = vry[27];
    const double C8343 = vry[28];
    const double C8358 = vry[29];
    const double C8373 = vry[30];
    const double C8416 = vry[31];
    const double C8431 = vry[32];
    const double C8474 = vry[33];
    const double C8489 = vry[34];
    const double C8560 = vry[35];
    const double C8659 = vry[36];
    const double C8674 = vry[37];
    const double C8716 = vry[38];
    const double C8731 = vry[39];
    const double C8746 = vry[40];
    const double C8775 = vry[41];
    const double C8790 = vry[42];
    const double C8819 = vry[43];
    const double C8863 = vry[44];
    const double C8878 = vry[45];
    const double C8893 = vry[46];
    const double C8979 = vry[47];
    const double C9064 = vry[48];
    const double C9121 = vry[49];
    const double C9136 = vry[50];
    const double C9178 = vry[51];
    const double C9207 = vry[52];
    const double C9222 = vry[53];
    const double C9280 = vry[54];
    const double C9352 = vry[55];
    const double C9496 = vrz[0];
    const double C9513 = vrz[1];
    const double C9684 = vrz[2];
    const double C9777 = vrz[3];
    const double C9871 = vrz[4];
    const double C9887 = vrz[5];
    const double C10054 = vrz[6];
    const double C10144 = vrz[7];
    const double C10239 = vrz[8];
    const double C10255 = vrz[9];
    const double C10422 = vrz[10];
    const double C10511 = vrz[11];
    const double C10603 = vrz[12];
    const double C10691 = vrz[13];
    const double C10779 = vrz[14];
    const double C10865 = vrz[15];
    const double C10950 = vrz[16];
    const double C10965 = vrz[17];
    const double C10980 = vrz[18];
    const double C10994 = vrz[19];
    const double C11009 = vrz[20];
    const double C11024 = vrz[21];
    const double C11053 = vrz[22];
    const double C11068 = vrz[23];
    const double C11083 = vrz[24];
    const double C11112 = vrz[25];
    const double C11127 = vrz[26];
    const double C11156 = vrz[27];
    const double C11185 = vrz[28];
    const double C11200 = vrz[29];
    const double C11215 = vrz[30];
    const double C11258 = vrz[31];
    const double C11273 = vrz[32];
    const double C11316 = vrz[33];
    const double C11331 = vrz[34];
    const double C11402 = vrz[35];
    const double C11501 = vrz[36];
    const double C11516 = vrz[37];
    const double C11558 = vrz[38];
    const double C11573 = vrz[39];
    const double C11588 = vrz[40];
    const double C11617 = vrz[41];
    const double C11632 = vrz[42];
    const double C11661 = vrz[43];
    const double C11704 = vrz[44];
    const double C11719 = vrz[45];
    const double C11734 = vrz[46];
    const double C11819 = vrz[47];
    const double C11904 = vrz[48];
    const double C11961 = vrz[49];
    const double C11976 = vrz[50];
    const double C12018 = vrz[51];
    const double C12047 = vrz[52];
    const double C12062 = vrz[53];
    const double C12119 = vrz[54];
    const double C12191 = vrz[55];
    const double C3735 = 2 * q;
    const double C12426 = C6373 * p;
    const double C12425 = C6358 * p;
    const double C12424 = C6272 * p;
    const double C12423 = C6215 * p;
    const double C12422 = C4696 * p;
    const double C12421 = C4974 / q;
    const double C12420 = C6127 * p;
    const double C12419 = C5154 / q;
    const double C12418 = C6040 * p;
    const double C12417 = C6025 * p;
    const double C12416 = C5965 * p;
    const double C12415 = C5154 * p;
    const double C12414 = C5936 * p;
    const double C12413 = C5921 * p;
    const double C12412 = C4409 * p;
    const double C12411 = C5892 * p;
    const double C12410 = C5877 * p;
    const double C12409 = C5805 * p;
    const double C12408 = C4507 * p;
    const double C12407 = C5703 * p;
    const double C12406 = C5065 / q;
    const double C12404 = C5614 * p;
    const double C12403 = C4974 * p;
    const double C12402 = C4127 * p;
    const double C12400 = C5571 * p;
    const double C12399 = C5556 * p;
    const double C12398 = C4883 / q;
    const double C12396 = C5495 * p;
    const double C12395 = C5480 * p;
    const double C12394 = C5065 * p;
    const double C12393 = C5451 * p;
    const double C12392 = C4883 * p;
    const double C12391 = C5422 * p;
    const double C12390 = C5407 * p;
    const double C12389 = C4030 * p;
    const double C12388 = C5378 * p;
    const double C12387 = C5363 * p;
    const double C12386 = C5348 * p;
    const double C12385 = C3934 * p;
    const double C12384 = C5319 * p;
    const double C12383 = C5304 * p;
    const double C12329 = de * zCD;
    const double C12328 = be * zAB;
    const double C12325 = de * yCD;
    const double C12324 = be * yAB;
    const double C12321 = de * xCD;
    const double C12320 = be * xAB;
    const double C12559 = C9222 * p;
    const double C12558 = C9207 * p;
    const double C12557 = C9121 * p;
    const double C12556 = C9064 * p;
    const double C12555 = C7580 * p;
    const double C12554 = C7849 / q;
    const double C12553 = C8979 * p;
    const double C12552 = C8023 / q;
    const double C12551 = C8893 * p;
    const double C12550 = C8878 * p;
    const double C12549 = C8819 * p;
    const double C12548 = C8023 * p;
    const double C12547 = C8790 * p;
    const double C12546 = C8775 * p;
    const double C12545 = C7302 * p;
    const double C12544 = C8746 * p;
    const double C12543 = C8731 * p;
    const double C12542 = C8659 * p;
    const double C12541 = C7397 * p;
    const double C12540 = C8560 * p;
    const double C12539 = C7937 / q;
    const double C12537 = C8474 * p;
    const double C12536 = C7849 * p;
    const double C12535 = C7029 * p;
    const double C12533 = C8431 * p;
    const double C12532 = C8416 * p;
    const double C12531 = C7761 / q;
    const double C12529 = C8358 * p;
    const double C12528 = C8343 * p;
    const double C12527 = C7937 * p;
    const double C12526 = C8314 * p;
    const double C12525 = C7761 * p;
    const double C12524 = C8285 * p;
    const double C12523 = C8270 * p;
    const double C12522 = C6935 * p;
    const double C12521 = C8241 * p;
    const double C12520 = C8226 * p;
    const double C12519 = C8211 * p;
    const double C12518 = C6842 * p;
    const double C12517 = C8182 * p;
    const double C12516 = C8167 * p;
    const double C12689 = C12062 * p;
    const double C12688 = C12047 * p;
    const double C12687 = C11961 * p;
    const double C12686 = C11904 * p;
    const double C12685 = C10422 * p;
    const double C12684 = C10691 / q;
    const double C12683 = C11819 * p;
    const double C12682 = C10865 / q;
    const double C12681 = C11734 * p;
    const double C12680 = C11719 * p;
    const double C12679 = C11661 * p;
    const double C12678 = C10865 * p;
    const double C12677 = C11632 * p;
    const double C12676 = C11617 * p;
    const double C12675 = C10144 * p;
    const double C12674 = C11588 * p;
    const double C12673 = C11573 * p;
    const double C12672 = C11501 * p;
    const double C12671 = C10239 * p;
    const double C12670 = C11402 * p;
    const double C12669 = C10779 / q;
    const double C12667 = C11316 * p;
    const double C12666 = C10691 * p;
    const double C12665 = C9871 * p;
    const double C12663 = C11273 * p;
    const double C12662 = C11258 * p;
    const double C12661 = C10603 / q;
    const double C12659 = C11200 * p;
    const double C12658 = C11185 * p;
    const double C12657 = C10779 * p;
    const double C12656 = C11156 * p;
    const double C12655 = C10603 * p;
    const double C12654 = C11127 * p;
    const double C12653 = C11112 * p;
    const double C12652 = C9777 * p;
    const double C12651 = C11083 * p;
    const double C12650 = C11068 * p;
    const double C12649 = C11053 * p;
    const double C12648 = C9684 * p;
    const double C12647 = C11024 * p;
    const double C12646 = C11009 * p;
    const double C12405 = C5630 / C3735;
    const double C12401 = C5242 / C3735;
    const double C12397 = C5511 / C3735;
    const double C12382 = C5289 / C3735;
    const double C12381 = C5154 / C3735;
    const double C12377 = C5065 / C3735;
    const double C12376 = C4974 / C3735;
    const double C12372 = C4883 / C3735;
    const double C12371 = C4788 / C3735;
    const double C12369 = C4696 / C3735;
    const double C12361 = C4524 / C3735;
    const double C12360 = C4507 / C3735;
    const double C12356 = C4409 / C3735;
    const double C12354 = C4316 / C3735;
    const double C12346 = C4144 / C3735;
    const double C12345 = C4127 / C3735;
    const double C12341 = C4030 / C3735;
    const double C12334 = C3934 / C3735;
    const double C12323 = C3758 / C3735;
    const double C12322 = C3740 / C3735;
    const double C12538 = C8489 / C3735;
    const double C12534 = C8108 / C3735;
    const double C12530 = C8373 / C3735;
    const double C12515 = C8152 / C3735;
    const double C12514 = C8023 / C3735;
    const double C12510 = C7937 / C3735;
    const double C12509 = C7849 / C3735;
    const double C12505 = C7761 / C3735;
    const double C12504 = C7669 / C3735;
    const double C12502 = C7580 / C3735;
    const double C12494 = C7413 / C3735;
    const double C12493 = C7397 / C3735;
    const double C12489 = C7302 / C3735;
    const double C12487 = C7212 / C3735;
    const double C12479 = C7045 / C3735;
    const double C12478 = C7029 / C3735;
    const double C12474 = C6935 / C3735;
    const double C12467 = C6842 / C3735;
    const double C12460 = C6671 / C3735;
    const double C12459 = C6654 / C3735;
    const double C12668 = C11331 / C3735;
    const double C12664 = C10950 / C3735;
    const double C12660 = C11215 / C3735;
    const double C12645 = C10994 / C3735;
    const double C12644 = C10865 / C3735;
    const double C12640 = C10779 / C3735;
    const double C12639 = C10691 / C3735;
    const double C12635 = C10603 / C3735;
    const double C12634 = C10511 / C3735;
    const double C12632 = C10422 / C3735;
    const double C12624 = C10255 / C3735;
    const double C12623 = C10239 / C3735;
    const double C12619 = C10144 / C3735;
    const double C12617 = C10054 / C3735;
    const double C12609 = C9887 / C3735;
    const double C12608 = C9871 / C3735;
    const double C12604 = C9777 / C3735;
    const double C12597 = C9684 / C3735;
    const double C12590 = C9513 / C3735;
    const double C12589 = C9496 / C3735;
    const double C12454 = C12420 / q;
    const double C12453 = C12417 / q;
    const double C12452 = C12413 / q;
    const double C12451 = C12411 / q;
    const double C12450 = C12407 / q;
    const double C12449 = C12404 / q;
    const double C12448 = C12400 / q;
    const double C12447 = C12399 / q;
    const double C12446 = C12390 / q;
    const double C12445 = C12388 / q;
    const double C12444 = C12386 / q;
    const double C12443 = C12384 / q;
    const double C12431 = C12328 + C12329;
    const double C12428 = C12324 + C12325;
    const double C12427 = C12320 + C12321;
    const double C12584 = C12553 / q;
    const double C12583 = C12550 / q;
    const double C12582 = C12546 / q;
    const double C12581 = C12544 / q;
    const double C12580 = C12540 / q;
    const double C12579 = C12537 / q;
    const double C12578 = C12533 / q;
    const double C12577 = C12532 / q;
    const double C12576 = C12523 / q;
    const double C12575 = C12521 / q;
    const double C12574 = C12519 / q;
    const double C12573 = C12517 / q;
    const double C12714 = C12683 / q;
    const double C12713 = C12680 / q;
    const double C12712 = C12676 / q;
    const double C12711 = C12674 / q;
    const double C12710 = C12670 / q;
    const double C12709 = C12667 / q;
    const double C12708 = C12663 / q;
    const double C12707 = C12662 / q;
    const double C12706 = C12653 / q;
    const double C12705 = C12651 / q;
    const double C12704 = C12649 / q;
    const double C12703 = C12647 / q;
    const double C3805 = -(C3740 * C12431 + C12387) / q;
    const double C3806 = C12322 - (C5363 * C12431) / q - C12445;
    const double C3821 = -(C3758 * C12431 + C12389) / q;
    const double C3822 = C12323 - (C4030 * C12431) / q - C12446;
    const double C3870 = -(C5258 * C12431 + C12393) / q;
    const double C3886 = -(C5242 * C12431 + C12394) / q;
    const double C3901 = -(C5304 * C12431 + C12395) / q;
    const double C3916 = -(C3934 * C12431 + C12396) / q;
    const double C3965 = C12334 - (C5495 * C12431) / q - C12448;
    const double C3997 = -(C4883 * C12431 + C12403) / q;
    const double C4012 = -(C5348 * C12431 + C12404) / q;
    const double C4062 = C4030 / q - (C5407 * C12431) / q - C12450;
    const double C4095 = C12401 - (C5065 * C12431) / q - C12408 / q;
    const double C4192 = -(C4127 * C12431 + C12410) / q;
    const double C4193 = C12345 - (C5877 * C12431) / q - C12451;
    const double C4208 = -(C4144 * C12431 + C12412) / q;
    const double C4209 = C12346 - (C4409 * C12431) / q - C12452;
    const double C4284 = -(C5805 * C12431 + C12414) / q;
    const double C4299 = -(C5511 * C12431 + C12415) / q;
    const double C4300 = -(C4316 * C12431 + C12416) / q;
    const double C4348 = C12354 - (C5965 * C12431) / q - C12453;
    const double C4393 = -(C5862 * C12431 + C12418) / q;
    const double C4443 = C4409 / q - (C5921 * C12431) / q - C12454;
    const double C4489 = C12397 - (C5154 * C12431) / q - C12422 / q;
    const double C4571 = C12406 - (C4507 * C12431) / q - C12424 / q;
    const double C4572 =
        (3 * C4507) / C3735 - (C6272 * C12431) / q - (C6287 * p) / q;
    const double C4587 = C12382 - (C5630 * C12431) / q - (C4524 * p) / q;
    const double C4588 = C5630 / q - (C4524 * C12431) / q - (C4788 * p) / q;
    const double C4589 =
        (3 * C4524) / C3735 - (C4788 * C12431) / q - (C6329 * p) / q;
    const double C4665 = C12421 - (C6215 * C12431) / q - C12425 / q;
    const double C4680 = C12419 - (C4696 * C12431) / q - C12426 / q;
    const double C4728 =
        (3 * C4696) / C3735 - (C6373 * C12431) / q - (C6432 * p) / q;
    const double C4821 =
        (2 * C4788) / q - (C6329 * C12431) / q - (C6505 * p) / q;
    const double C4912 = C12372 - (C4974 * C12431) / q - C12423 / q;
    const double C6718 = -(C6654 * C12431 + C12520) / q;
    const double C6734 = -(C6671 * C12431 + C12522) / q;
    const double C6780 = -(C8123 * C12431 + C12526) / q;
    const double C6795 = -(C8108 * C12431 + C12527) / q;
    const double C6810 = -(C8167 * C12431 + C12528) / q;
    const double C6825 = -(C6842 * C12431 + C12529) / q;
    const double C6903 = -(C7761 * C12431 + C12536) / q;
    const double C6918 = -(C8211 * C12431 + C12537) / q;
    const double C6998 = C12534 - (C7937 * C12431) / q - C12541 / q;
    const double C7093 = -(C7029 * C12431 + C12543) / q;
    const double C7109 = -(C7045 * C12431 + C12545) / q;
    const double C7181 = -(C8659 * C12431 + C12547) / q;
    const double C7196 = -(C8373 * C12431 + C12548) / q;
    const double C7197 = -(C7212 * C12431 + C12549) / q;
    const double C7287 = -(C8716 * C12431 + C12551) / q;
    const double C7380 = C12530 - (C8023 * C12431) / q - C12555 / q;
    const double C7460 = C12539 - (C7397 * C12431) / q - C12557 / q;
    const double C7461 =
        (3 * C7397) / C3735 - (C9121 * C12431) / q - (C9136 * p) / q;
    const double C7476 = C12515 - (C8489 * C12431) / q - (C7413 * p) / q;
    const double C7477 = C8489 / q - (C7413 * C12431) / q - (C7669 * p) / q;
    const double C7478 =
        (3 * C7413) / C3735 - (C7669 * C12431) / q - (C9178 * p) / q;
    const double C7550 = C12554 - (C9064 * C12431) / q - C12558 / q;
    const double C7565 = C12552 - (C7580 * C12431) / q - C12559 / q;
    const double C7612 =
        (3 * C7580) / C3735 - (C9222 * C12431) / q - (C9280 * p) / q;
    const double C7702 =
        (2 * C7669) / q - (C9178 * C12431) / q - (C9352 * p) / q;
    const double C7790 = C12505 - (C7849 * C12431) / q - C12556 / q;
    const double C9560 = -(C5254 * be + C9496 * C12431 + C12650) / q;
    const double C9576 = -(C5238 * be + C9513 * C12431 + C12652) / q;
    const double C9622 = -(C5270 * be + C10965 * C12431 + C12656) / q;
    const double C9637 = -(C5285 * be + C10950 * C12431 + C12657) / q;
    const double C9652 = -(C5538 * be + C11009 * C12431 + C12658) / q;
    const double C9667 = -(C5523 * be + C9684 * C12431 + C12659) / q;
    const double C9745 = -(C5507 * be + C10603 * C12431 + C12666) / q;
    const double C9760 = -(C5787 * be + C11053 * C12431 + C12667) / q;
    const double C9840 =
        C12664 - (C5626 * be + C10779 * C12431) / q - C12671 / q;
    const double C9935 = -(C5772 * be + C9871 * C12431 + C12673) / q;
    const double C9951 = -(C5757 * be + C9887 * C12431 + C12675) / q;
    const double C10023 = -(C5992 * be + C11501 * C12431 + C12677) / q;
    const double C10038 = -(C6531 * be + C11215 * C12431 + C12678) / q;
    const double C10039 = -(C5977 * be + C10054 * C12431 + C12679) / q;
    const double C10129 = -(C8858 * be + C11558 * C12431 + C12681) / q;
    const double C10222 =
        C12660 - (C6560 * be + C10865 * C12431) / q - C12685 / q;
    const double C10302 =
        C12669 - (C6182 * be + C10239 * C12431) / q - C12687 / q;
    const double C10303 = (3 * C10239) / C3735 -
                          (C6459 * be + C11961 * C12431) / q - (C11976 * p) / q;
    const double C10318 =
        C12645 - (C6619 * be + C11331 * C12431) / q - (C10255 * p) / q;
    const double C10319 =
        C11331 / q - (C6167 * be + C10255 * C12431) / q - (C10511 * p) / q;
    const double C10320 = (3 * C10255) / C3735 -
                          (C6444 * be + C10511 * C12431) / q - (C12018 * p) / q;
    const double C10392 =
        C12684 - (C6400 * be + C11904 * C12431) / q - C12688 / q;
    const double C10407 =
        C12682 - (C6385 * be + C10422 * C12431) / q - C12689 / q;
    const double C10454 = (3 * C10422) / C3735 -
                          (C9333 * be + C12062 * C12431) / q - (C12119 * p) / q;
    const double C10544 = (2 * C10511) / q -
                          (C12185 * be + C12018 * C12431) / q -
                          (C12191 * p) / q;
    const double C10632 =
        C12635 - (C6575 * be + C10691 * C12431) / q - C12686 / q;
    const double C3773 = -(C3740 * C12428 + C12383) / q;
    const double C3774 = C12322 - (C5304 * C12428) / q - C12443;
    const double C3789 = -(C3758 * C12428 + C12385) / q;
    const double C3790 = C12323 - (C3934 * C12428) / q - C12444;
    const double C3838 = -(C5258 * C12428 + C12391) / q;
    const double C3854 = -(C5242 * C12428 + C12392) / q;
    const double C3950 = C3934 / q - (C5348 * C12428) / q - C12447;
    const double C3981 = C12401 - (C4883 * C12428) / q - C12402 / q;
    const double C4046 = -(C4030 * C12428 + C12396) / q;
    const double C4047 = C12341 - (C5495 * C12428) / q - C12449;
    const double C4078 = -(C5065 * C12428 + C12403) / q;
    const double C4079 = -(C5363 * C12428 + C12395) / q;
    const double C4159 = C12398 - (C4127 * C12428) / q - C12409 / q;
    const double C4160 =
        (3 * C4127) / C3735 - (C5805 * C12428) / q - (C5820 * p) / q;
    const double C4175 = C12382 - (C5511 * C12428) / q - (C4144 * p) / q;
    const double C4176 = C5511 / q - (C4144 * C12428) / q - (C4316 * p) / q;
    const double C4177 =
        (3 * C4144) / C3735 - (C4316 * C12428) / q - (C5862 * p) / q;
    const double C4333 =
        (2 * C4316) / q - (C5862 * C12428) / q - (C6010 * p) / q;
    const double C4426 = C12405 - (C5154 * C12428) / q - C12412 / q;
    const double C4427 = C12419 - (C4409 * C12428) / q - C12416 / q;
    const double C4428 =
        (3 * C4409) / C3735 - (C5965 * C12428) / q - C12418 / q;
    const double C4459 = C12421 - (C5877 * C12428) / q - C12414 / q;
    const double C4539 = -(C4507 * C12428 + C12423) / q;
    const double C4540 = C12360 - (C6215 * C12428) / q - C12451;
    const double C4555 = -(C4524 * C12428 + C12422) / q;
    const double C4556 = C12361 - (C4696 * C12428) / q - C12452;
    const double C4605 = -(C5407 * C12428 + C12400) / q;
    const double C4713 = C4696 / q - (C5921 * C12428) / q - C12453;
    const double C4805 = -(C4788 * C12428 + C12426) / q;
    const double C4806 = C12371 - (C6373 * C12428) / q - C12454;
    const double C4837 = -(C6272 * C12428 + C12425) / q;
    const double C4990 = C12377 - (C4974 * C12428) / q - C12410 / q;
    const double C5109 = -(C5630 * C12428 + C12415) / q;
    const double C6686 = -(C5254 * be + C6654 * C12428 + C12516) / q;
    const double C6702 = -(C5238 * be + C6671 * C12428 + C12518) / q;
    const double C6750 = -(C5270 * be + C8123 * C12428 + C12524) / q;
    const double C6765 = -(C5285 * be + C8108 * C12428 + C12525) / q;
    const double C6888 =
        C12534 - (C5507 * be + C7761 * C12428) / q - C12535 / q;
    const double C6951 = -(C5642 * be + C6935 * C12428 + C12529) / q;
    const double C6982 = -(C5626 * be + C7937 * C12428 + C12536) / q;
    const double C6983 = -(C5657 * be + C8226 * C12428 + C12528) / q;
    const double C7060 =
        C12531 - (C5772 * be + C7029 * C12428) / q - C12542 / q;
    const double C7061 = (3 * C7029) / C3735 -
                         (C5992 * be + C8659 * C12428) / q - (C8674 * p) / q;
    const double C7076 =
        C12515 - (C6531 * be + C8373 * C12428) / q - (C7045 * p) / q;
    const double C7077 =
        C8373 / q - (C5757 * be + C7045 * C12428) / q - (C7212 * p) / q;
    const double C7078 = (3 * C7045) / C3735 -
                         (C5977 * be + C7212 * C12428) / q - (C8716 * p) / q;
    const double C7229 =
        (2 * C7212) / q - (C8858 * be + C8716 * C12428) / q - (C8863 * p) / q;
    const double C7319 =
        C12538 - (C6560 * be + C8023 * C12428) / q - C12545 / q;
    const double C7320 =
        C12552 - (C6052 * be + C7302 * C12428) / q - C12549 / q;
    const double C7321 =
        (3 * C7302) / C3735 - (C8960 * be + C8819 * C12428) / q - C12551 / q;
    const double C7351 =
        C12554 - (C6067 * be + C8731 * C12428) / q - C12547 / q;
    const double C7428 = -(C6182 * be + C7397 * C12428 + C12556) / q;
    const double C7444 = -(C6167 * be + C7413 * C12428 + C12555) / q;
    const double C7493 = -(C6197 * be + C8270 * C12428 + C12533) / q;
    const double C7686 = -(C6444 * be + C7669 * C12428 + C12559) / q;
    const double C7717 = -(C6459 * be + C9121 * C12428 + C12558) / q;
    const double C7865 =
        C12510 - (C6575 * be + C7849 * C12428) / q - C12543 / q;
    const double C7980 = -(C6619 * be + C8489 * C12428 + C12548) / q;
    const double C9528 = -(C9496 * C12428 + C12646) / q;
    const double C9544 = -(C9513 * C12428 + C12648) / q;
    const double C9592 = -(C10965 * C12428 + C12654) / q;
    const double C9607 = -(C10950 * C12428 + C12655) / q;
    const double C9730 = C12664 - (C10603 * C12428) / q - C12665 / q;
    const double C9793 = -(C9777 * C12428 + C12659) / q;
    const double C9824 = -(C10779 * C12428 + C12666) / q;
    const double C9825 = -(C11068 * C12428 + C12658) / q;
    const double C9902 = C12661 - (C9871 * C12428) / q - C12672 / q;
    const double C9903 =
        (3 * C9871) / C3735 - (C11501 * C12428) / q - (C11516 * p) / q;
    const double C9918 = C12645 - (C11215 * C12428) / q - (C9887 * p) / q;
    const double C9919 = C11215 / q - (C9887 * C12428) / q - (C10054 * p) / q;
    const double C9920 =
        (3 * C9887) / C3735 - (C10054 * C12428) / q - (C11558 * p) / q;
    const double C10071 =
        (2 * C10054) / q - (C11558 * C12428) / q - (C11704 * p) / q;
    const double C10161 = C12668 - (C10865 * C12428) / q - C12675 / q;
    const double C10162 = C12682 - (C10144 * C12428) / q - C12679 / q;
    const double C10163 =
        (3 * C10144) / C3735 - (C11661 * C12428) / q - C12681 / q;
    const double C10193 = C12684 - (C11573 * C12428) / q - C12677 / q;
    const double C10270 = -(C10239 * C12428 + C12686) / q;
    const double C10286 = -(C10255 * C12428 + C12685) / q;
    const double C10335 = -(C11112 * C12428 + C12663) / q;
    const double C10528 = -(C10511 * C12428 + C12689) / q;
    const double C10559 = -(C11961 * C12428 + C12688) / q;
    const double C10707 = C12640 - (C10691 * C12428) / q - C12673 / q;
    const double C10822 = -(C11331 * C12428 + C12678) / q;
    const double C3738 =
        C5242 / q - (C5238 * be + C3758 * C12427) / q - (C3740 * p) / q;
    const double C3739 = (3 * C3758) / C3735 -
                         (C5254 * be + C3740 * C12427) / q - (C5258 * p) / q;
    const double C3741 =
        (2 * C3740) / q - (C5270 * be + C5258 * C12427) / q - (C5274 * p) / q;
    const double C3757 =
        C12382 - (C5285 * be + C5242 * C12427) / q - (C3758 * p) / q;
    const double C3932 =
        C12397 - (C5507 * be + C4883 * C12427) / q - C12385 / q;
    const double C3933 =
        C12398 - (C5523 * be + C3934 * C12427) / q - C12383 / q;
    const double C3935 =
        (3 * C3934) / C3735 - (C5538 * be + C5304 * C12427) / q - C12391 / q;
    const double C4028 =
        C12405 - (C5626 * be + C5065 * C12427) / q - C12389 / q;
    const double C4029 =
        C12406 - (C5642 * be + C4030 * C12427) / q - C12387 / q;
    const double C4031 =
        (3 * C4030) / C3735 - (C5657 * be + C5363 * C12427) / q - C12393 / q;
    const double C4125 = -(C5757 * be + C4144 * C12427 + C12402) / q;
    const double C4126 = C12346 - (C5772 * be + C4127 * C12427) / q - C12444;
    const double C4128 = C4127 / q - (C5787 * be + C5348 * C12427) / q - C12443;
    const double C4317 = -(C5977 * be + C4316 * C12427 + C12409) / q;
    const double C4318 = C12354 - (C5992 * be + C5805 * C12427) / q - C12447;
    const double C4410 = -(C6052 * be + C4409 * C12427 + C12410) / q;
    const double C4411 = C12356 - (C6067 * be + C5877 * C12427) / q - C12449;
    const double C4505 = -(C6167 * be + C4524 * C12427 + C12408) / q;
    const double C4506 = C12361 - (C6182 * be + C4507 * C12427) / q - C12446;
    const double C4508 = C4507 / q - (C6197 * be + C5407 * C12427) / q - C12445;
    const double C4697 = -(C6385 * be + C4696 * C12427 + C12423) / q;
    const double C4698 = C12369 - (C6400 * be + C6215 * C12427) / q - C12448;
    const double C4789 = -(C6444 * be + C4788 * C12427 + C12424) / q;
    const double C4790 = C12371 - (C6459 * be + C6272 * C12427) / q - C12450;
    const double C4882 = -(C6531 * be + C5511 * C12427 + C12392) / q;
    const double C4972 = -(C6560 * be + C5154 * C12427 + C12403) / q;
    const double C4973 =
        C12381 - (C6575 * be + C4974 * C12427) / q - C12396 / q;
    const double C4975 =
        C12421 - (C6590 * be + C5495 * C12427) / q - C12395 / q;
    const double C5064 = -(C6619 * be + C5630 * C12427 + C12394) / q;
    const double C6652 = C8108 / q - (C6671 * C12427) / q - (C6654 * p) / q;
    const double C6653 =
        (3 * C6671) / C3735 - (C6654 * C12427) / q - (C8123 * p) / q;
    const double C6655 =
        (2 * C6654) / q - (C8123 * C12427) / q - (C8138 * p) / q;
    const double C6670 = C12515 - (C8108 * C12427) / q - (C6671 * p) / q;
    const double C6840 = C12530 - (C7761 * C12427) / q - C12518 / q;
    const double C6841 = C12531 - (C6842 * C12427) / q - C12516 / q;
    const double C6843 =
        (3 * C6842) / C3735 - (C8167 * C12427) / q - C12524 / q;
    const double C6933 = C12538 - (C7937 * C12427) / q - C12522 / q;
    const double C6934 = C12539 - (C6935 * C12427) / q - C12520 / q;
    const double C6936 =
        (3 * C6935) / C3735 - (C8226 * C12427) / q - C12526 / q;
    const double C7027 = -(C7045 * C12427 + C12535) / q;
    const double C7213 = -(C7212 * C12427 + C12542) / q;
    const double C7303 = -(C7302 * C12427 + C12543) / q;
    const double C7395 = -(C7413 * C12427 + C12541) / q;
    const double C7581 = -(C7580 * C12427 + C12556) / q;
    const double C7670 = -(C7669 * C12427 + C12557) / q;
    const double C7760 = -(C8373 * C12427 + C12525) / q;
    const double C7847 = -(C8023 * C12427 + C12536) / q;
    const double C7848 = C12514 - (C7849 * C12427) / q - C12529 / q;
    const double C7850 = C12554 - (C8358 * C12427) / q - C12528 / q;
    const double C7936 = -(C8489 * C12427 + C12527) / q;
    const double C9494 = C10950 / q - (C9513 * C12427) / q - (C9496 * p) / q;
    const double C9495 =
        (3 * C9513) / C3735 - (C9496 * C12427) / q - (C10965 * p) / q;
    const double C9497 =
        (2 * C9496) / q - (C10965 * C12427) / q - (C10980 * p) / q;
    const double C9512 = C12645 - (C10950 * C12427) / q - (C9513 * p) / q;
    const double C9682 = C12660 - (C10603 * C12427) / q - C12648 / q;
    const double C9683 = C12661 - (C9684 * C12427) / q - C12646 / q;
    const double C9685 =
        (3 * C9684) / C3735 - (C11009 * C12427) / q - C12654 / q;
    const double C9775 = C12668 - (C10779 * C12427) / q - C12652 / q;
    const double C9776 = C12669 - (C9777 * C12427) / q - C12650 / q;
    const double C9778 =
        (3 * C9777) / C3735 - (C11068 * C12427) / q - C12656 / q;
    const double C9869 = -(C9887 * C12427 + C12665) / q;
    const double C10055 = -(C10054 * C12427 + C12672) / q;
    const double C10145 = -(C10144 * C12427 + C12673) / q;
    const double C10237 = -(C10255 * C12427 + C12671) / q;
    const double C10423 = -(C10422 * C12427 + C12686) / q;
    const double C10512 = -(C10511 * C12427 + C12687) / q;
    const double C10602 = -(C11215 * C12427 + C12655) / q;
    const double C10689 = -(C10865 * C12427 + C12666) / q;
    const double C10690 = C12644 - (C10691 * C12427) / q - C12659 / q;
    const double C10692 = C12684 - (C11200 * C12427) / q - C12658 / q;
    const double C10778 = -(C11331 * C12427 + C12657) / q;
    const double C7336 = C7302 / q - (C8775 * C12431) / q - C12584;
    const double C7687 = C12504 - (C9333 * be + C9222 * C12428) / q - C12584;
    const double C7244 = C12487 - (C8819 * C12431) / q - C12583;
    const double C7597 = C7580 / q - (C9261 * be + C8775 * C12428) / q - C12583;
    const double C7110 = C12479 - (C7302 * C12431) / q - C12582;
    const double C7445 = C12494 - (C6385 * be + C7580 * C12428) / q - C12582;
    const double C7094 = C12478 - (C8731 * C12431) / q - C12581;
    const double C7429 = C12493 - (C6400 * be + C9064 * C12428) / q - C12581;
    const double C6967 = C6935 / q - (C8270 * C12431) / q - C12580;
    const double C7671 = C12504 - (C9121 * C12427) / q - C12580;
    const double C6952 = C12474 - (C6590 * be + C8358 * C12428) / q - C12579;
    const double C7304 = C12489 - (C8731 * C12427) / q - C12579;
    const double C6873 = C12467 - (C8358 * C12431) / q - C12578;
    const double C7582 = C12502 - (C9064 * C12427) / q - C12578;
    const double C6858 = C6842 / q - (C5787 * be + C8211 * C12428) / q - C12577;
    const double C7214 = C12487 - (C8659 * C12427) / q - C12577;
    const double C6735 = C12460 - (C6935 * C12431) / q - C12576;
    const double C7396 = C12494 - (C7397 * C12427) / q - C12576;
    const double C6719 = C12459 - (C8226 * C12431) / q - C12575;
    const double C7398 = C7397 / q - (C8270 * C12427) / q - C12575;
    const double C6703 = C12460 - (C5523 * be + C6842 * C12428) / q - C12574;
    const double C7028 = C12479 - (C7029 * C12427) / q - C12574;
    const double C6687 = C12459 - (C5538 * be + C8167 * C12428) / q - C12573;
    const double C7030 = C7029 / q - (C8211 * C12427) / q - C12573;
    const double C10178 =
        C10144 / q - (C9261 * be + C11617 * C12431) / q - C12714;
    const double C10529 = C12634 - (C12062 * C12428) / q - C12714;
    const double C10086 = C12617 - (C8960 * be + C11661 * C12431) / q - C12713;
    const double C10439 = C10422 / q - (C11617 * C12428) / q - C12713;
    const double C9952 = C12609 - (C6052 * be + C10144 * C12431) / q - C12712;
    const double C10287 = C12624 - (C10422 * C12428) / q - C12712;
    const double C9936 = C12608 - (C6067 * be + C11573 * C12431) / q - C12711;
    const double C10271 = C12623 - (C11904 * C12428) / q - C12711;
    const double C9809 =
        C9777 / q - (C6197 * be + C11112 * C12431) / q - C12710;
    const double C10513 = C12634 - (C11961 * C12427) / q - C12710;
    const double C9794 = C12604 - (C11200 * C12428) / q - C12709;
    const double C10146 = C12619 - (C11573 * C12427) / q - C12709;
    const double C9715 = C12597 - (C6590 * be + C11200 * C12431) / q - C12708;
    const double C10424 = C12632 - (C11904 * C12427) / q - C12708;
    const double C9700 = C9684 / q - (C11053 * C12428) / q - C12707;
    const double C10056 = C12617 - (C11501 * C12427) / q - C12707;
    const double C9577 = C12590 - (C5642 * be + C9777 * C12431) / q - C12706;
    const double C10238 = C12624 - (C10239 * C12427) / q - C12706;
    const double C9561 = C12589 - (C5657 * be + C11068 * C12431) / q - C12705;
    const double C10240 = C10239 / q - (C11112 * C12427) / q - C12705;
    const double C9545 = C12590 - (C9684 * C12428) / q - C12704;
    const double C9870 = C12609 - (C9871 * C12427) / q - C12704;
    const double C9529 = C12589 - (C11009 * C12428) / q - C12703;
    const double C9872 = C9871 / q - (C11053 * C12427) / q - C12703;
    const double C12330 = C3806 * p;
    const double C12339 = C3821 / C3735;
    const double C12331 = C3822 * p;
    const double C850 = (3 * C3821) / C3735 -
                        (C3866 * be + C3805 * C12427) / q - (C3870 * p) / q;
    const double C12375 = C3886 / C3735;
    const double C851 =
        C3886 / q - (C3882 * be + C3821 * C12427) / q - (C3805 * p) / q;
    const double C12332 = C3901 * p;
    const double C12333 = C3916 * p;
    const double C12336 = C3965 * p;
    const double C12338 = C3997 / q;
    const double C12340 = C4012 * p;
    const double C12343 = C4062 * p;
    const double C12344 = C4095 / q;
    const double C12352 = C4192 * p;
    const double C12348 = C4193 * p;
    const double C12351 = C4208 / C3735;
    const double C12349 = C4209 * p;
    const double C12353 = C4284 * p;
    const double C12374 = C4299 / C3735;
    const double C1036 = C4299 / q - (C4208 * C12428) / q - (C4300 * p) / q;
    const double C12355 = C4348 * p;
    const double C1090 =
        (3 * C4208) / C3735 - (C4300 * C12428) / q - (C4393 * p) / q;
    const double C12357 = C4443 * p;
    const double C12359 = C4489 / q;
    const double C12366 = C4571 * p;
    const double C12363 = C4572 * p;
    const double C12380 = C4587 / C3735;
    const double C12365 = C4588 / C3735;
    const double C1177 =
        C4587 / q - (C4588 * C12431) / q + C12361 - (C4589 * p) / q;
    const double C12367 = C4665 * p;
    const double C12368 = C4680 * p;
    const double C12370 = C4728 * p;
    const double C1291 =
        (3 * C4588) / C3735 - (C4589 * C12431) / q + C12371 - (C4821 * p) / q;
    const double C12373 = C4912 * p;
    const double C12472 = C6734 / C3735;
    const double C1841 =
        (3 * C6734) / C3735 - (C6718 * C12427) / q - (C6780 * p) / q;
    const double C12508 = C6795 / C3735;
    const double C1842 = C6795 / q - (C6734 * C12427) / q - (C6718 * p) / q;
    const double C12465 = C6810 * p;
    const double C12466 = C6825 * p;
    const double C12471 = C6903 / q;
    const double C12473 = C6918 * p;
    const double C12477 = C6998 / q;
    const double C12485 = C7093 * p;
    const double C12484 = C7109 / C3735;
    const double C12486 = C7181 * p;
    const double C12507 = C7196 / C3735;
    const double C2020 =
        C7196 / q - (C4266 * be + C7109 * C12428) / q - (C7197 * p) / q;
    const double C2074 = (3 * C7109) / C3735 -
                         (C4375 * be + C7197 * C12428) / q - (C7287 * p) / q;
    const double C12492 = C7380 / q;
    const double C12499 = C7460 * p;
    const double C12496 = C7461 * p;
    const double C12513 = C7476 / C3735;
    const double C12498 = C7477 / C3735;
    const double C2158 =
        C7476 / q - (C7477 * C12431) / q + C12494 - (C7478 * p) / q;
    const double C12500 = C7550 * p;
    const double C12501 = C7565 * p;
    const double C12503 = C7612 * p;
    const double C2269 =
        (3 * C7477) / C3735 - (C7478 * C12431) / q + C12504 - (C7702 * p) / q;
    const double C12506 = C7790 * p;
    const double C12602 = C9576 / C3735;
    const double C2801 =
        (3 * C9576) / C3735 - (C9560 * C12427) / q - (C9622 * p) / q;
    const double C12638 = C9637 / C3735;
    const double C2802 = C9637 / q - (C9576 * C12427) / q - (C9560 * p) / q;
    const double C12595 = C9652 * p;
    const double C12596 = C9667 * p;
    const double C12601 = C9745 / q;
    const double C12603 = C9760 * p;
    const double C12607 = C9840 / q;
    const double C12615 = C9935 * p;
    const double C12614 = C9951 / C3735;
    const double C12616 = C10023 * p;
    const double C12637 = C10038 / C3735;
    const double C2980 = C10038 / q - (C9951 * C12428) / q - (C10039 * p) / q;
    const double C3034 =
        (3 * C9951) / C3735 - (C10039 * C12428) / q - (C10129 * p) / q;
    const double C12622 = C10222 / q;
    const double C12629 = C10302 * p;
    const double C12626 = C10303 * p;
    const double C12643 = C10318 / C3735;
    const double C12628 = C10319 / C3735;
    const double C3118 = C10318 / q - (C4647 * be + C10319 * C12431) / q +
                         C12624 - (C10320 * p) / q;
    const double C12630 = C10392 * p;
    const double C12631 = C10407 * p;
    const double C12633 = C10454 * p;
    const double C3229 = (3 * C10319) / C3735 -
                         (C4849 * be + C10320 * C12431) / q + C12634 -
                         (C10544 * p) / q;
    const double C12636 = C10632 * p;
    const double C12326 = C3774 * p;
    const double C12327 = C3790 * p;
    const double C839 = (3 * C3789) / C3735 -
                        (C3834 * be + C3773 * C12427) / q - (C3838 * p) / q;
    const double C840 =
        C3854 / q - (C3850 * be + C3789 * C12427) / q - (C3773 * p) / q;
    const double C12335 = C3950 * p;
    const double C12337 = C3981 / q;
    const double C12342 = C4047 * p;
    const double C952 =
        C4078 / q - (C4074 * be + C4046 * C12427) / q - (C4079 * p) / q;
    const double C12350 = C4159 * p;
    const double C12347 = C4160 * p;
    const double C992 =
        C4175 / q - (C4176 * C12428) / q + C12346 - (C4177 * p) / q;
    const double C1054 =
        (3 * C4176) / C3735 - (C4177 * C12428) / q + C12354 - (C4333 * p) / q;
    const double C1108 =
        C4426 / q - (C4427 * C12428) / q + C12356 - (C4428 * p) / q;
    const double C12358 = C4459 * p;
    const double C12362 = C4540 * p;
    const double C12364 = C4555 / C3735;
    const double C1188 = -(C4617 * be + C4555 * C12427 + C4539 * p) / q;
    const double C1166 = C12361 - (C4555 * C12428) / q - (C4556 * p) / q;
    const double C1282 = C12371 - (C4805 * C12428) / q - (C4806 * p) / q;
    const double C1300 = -(C4833 * be + C4805 * C12427 + C4837 * p) / q;
    const double C12378 = C4990 * p;
    const double C12379 = C5109 / C3735;
    const double C1831 =
        (3 * C6702) / C3735 - (C6686 * C12427) / q - (C6750 * p) / q;
    const double C1832 = C6765 / q - (C6702 * C12427) / q - (C6686 * p) / q;
    const double C12470 = C6888 / q;
    const double C1942 = C6982 / q - (C6951 * C12427) / q - (C6983 * p) / q;
    const double C12483 = C7060 * p;
    const double C12480 = C7061 * p;
    const double C1980 = C7076 / q - (C4236 * be + C7077 * C12428) / q +
                         C12479 - (C7078 * p) / q;
    const double C2038 = (3 * C7077) / C3735 -
                         (C4360 * be + C7078 * C12428) / q + C12487 -
                         (C7229 * p) / q;
    const double C2092 = C7319 / q - (C4455 * be + C7320 * C12428) / q +
                         C12489 - (C7321 * p) / q;
    const double C12491 = C7351 * p;
    const double C12497 = C7444 / C3735;
    const double C2168 = -(C7444 * C12427 + C7428 * p) / q;
    const double C2278 = -(C7686 * C12427 + C7717 * p) / q;
    const double C12511 = C7865 * p;
    const double C12512 = C7980 / C3735;
    const double C2791 =
        (3 * C9544) / C3735 - (C9528 * C12427) / q - (C9592 * p) / q;
    const double C2792 = C9607 / q - (C9544 * C12427) / q - (C9528 * p) / q;
    const double C12600 = C9730 / q;
    const double C2902 = C9824 / q - (C9793 * C12427) / q - (C9825 * p) / q;
    const double C12613 = C9902 * p;
    const double C12610 = C9903 * p;
    const double C2940 =
        C9918 / q - (C9919 * C12428) / q + C12609 - (C9920 * p) / q;
    const double C2998 =
        (3 * C9919) / C3735 - (C9920 * C12428) / q + C12617 - (C10071 * p) / q;
    const double C3052 =
        C10161 / q - (C10162 * C12428) / q + C12619 - (C10163 * p) / q;
    const double C12621 = C10193 * p;
    const double C12627 = C10286 / C3735;
    const double C3128 = -(C10286 * C12427 + C10270 * p) / q;
    const double C3238 = -(C10528 * C12427 + C10559 * p) / q;
    const double C12641 = C10707 * p;
    const double C12642 = C10822 / C3735;
    const double C806 = (3 * C3738) / C3735 -
                        (C3733 * be + C3739 * C12427) / q + C12322 -
                        (C3741 * p) / q;
    const double C807 = C3757 / q - (C3753 * be + C3738 * C12427) / q + C12323 -
                        (C3739 * p) / q;
    const double C871 = C3932 / q - (C3928 * be + C3933 * C12427) / q + C12334 -
                        (C3935 * p) / q;
    const double C925 = C4028 / q - (C4024 * be + C4029 * C12427) / q + C12341 -
                        (C4031 * p) / q;
    const double C981 =
        C12346 - (C4140 * be + C4125 * C12427) / q - (C4126 * p) / q;
    const double C980 = C4125 / C3735 - (C4121 * be + C4126 * C12427) / q +
                        C12345 - (C4128 * p) / q;
    const double C1045 =
        C12354 - (C4312 * be + C4317 * C12427) / q - (C4318 * p) / q;
    const double C1099 =
        C12356 - (C4405 * be + C4410 * C12427) / q - (C4411 * p) / q;
    const double C1155 =
        C12361 - (C4520 * be + C4505 * C12427) / q - (C4506 * p) / q;
    const double C1154 = C4505 / C3735 - (C4501 * be + C4506 * C12427) / q +
                         C12360 - (C4508 * p) / q;
    const double C1219 =
        C12369 - (C4692 * be + C4697 * C12427) / q - (C4698 * p) / q;
    const double C1273 =
        C12371 - (C4784 * be + C4789 * C12427) / q - (C4790 * p) / q;
    const double C1328 = C4882 / C3735 - (C4878 * be + C3932 * C12427) / q +
                         C12372 - (C3933 * p) / q;
    const double C1646 =
        C12381 - (C5150 * be + C4972 * C12427) / q - (C4973 * p) / q;
    const double C1435 = C4972 / C3735 - (C4968 * be + C4973 * C12427) / q +
                         C12376 - (C4975 * p) / q;
    const double C1490 = C5064 / C3735 - (C5060 * be + C4028 * C12427) / q +
                         C12377 - (C4029 * p) / q;
    const double C1801 =
        (3 * C6652) / C3735 - (C6653 * C12427) / q + C12459 - (C6655 * p) / q;
    const double C1802 =
        C6670 / q - (C6652 * C12427) / q + C12460 - (C6653 * p) / q;
    const double C1861 =
        C6840 / q - (C6841 * C12427) / q + C12467 - (C6843 * p) / q;
    const double C1915 =
        C6933 / q - (C6934 * C12427) / q + C12474 - (C6936 * p) / q;
    const double C2305 =
        C7760 / C3735 - (C6840 * C12427) / q + C12505 - (C6841 * p) / q;
    const double C2611 = C12514 - (C7847 * C12427) / q - (C7848 * p) / q;
    const double C2407 =
        C7847 / C3735 - (C7848 * C12427) / q + C12509 - (C7850 * p) / q;
    const double C2461 =
        C7936 / C3735 - (C6933 * C12427) / q + C12510 - (C6934 * p) / q;
    const double C2761 =
        (3 * C9494) / C3735 - (C9495 * C12427) / q + C12589 - (C9497 * p) / q;
    const double C2762 =
        C9512 / q - (C9494 * C12427) / q + C12590 - (C9495 * p) / q;
    const double C2821 =
        C9682 / q - (C9683 * C12427) / q + C12597 - (C9685 * p) / q;
    const double C2875 =
        C9775 / q - (C9776 * C12427) / q + C12604 - (C9778 * p) / q;
    const double C3265 =
        C10602 / C3735 - (C9682 * C12427) / q + C12635 - (C9683 * p) / q;
    const double C3571 = C12644 - (C10689 * C12427) / q - (C10690 * p) / q;
    const double C3367 =
        C10689 / C3735 - (C10690 * C12427) / q + C12639 - (C10692 * p) / q;
    const double C3421 =
        C10778 / C3735 - (C9775 * C12427) / q + C12640 - (C9776 * p) / q;
    const double C12490 = C7336 * p;
    const double C2260 =
        C12504 - (C4833 * be + C7686 * C12428) / q - (C7687 * p) / q;
    const double C12488 = C7244 * p;
    const double C12482 = C7110 * p;
    const double C2148 =
        C12494 - (C4617 * be + C7444 * C12428) / q - (C7445 * p) / q;
    const double C12481 = C7094 * p;
    const double C12495 = C7429 * p;
    const double C12476 = C6967 * p;
    const double C2251 = C12504 - (C7670 * C12427) / q - (C7671 * p) / q;
    const double C12475 = C6952 * p;
    const double C2083 = C12489 - (C7303 * C12427) / q - (C7304 * p) / q;
    const double C12469 = C6873 * p;
    const double C2197 = C12502 - (C7581 * C12427) / q - (C7582 * p) / q;
    const double C12468 = C6858 * p;
    const double C2029 = C12487 - (C7213 * C12427) / q - (C7214 * p) / q;
    const double C12464 = C6735 * p;
    const double C2138 = C12494 - (C7395 * C12427) / q - (C7396 * p) / q;
    const double C12463 = C6719 * p;
    const double C2137 =
        C7395 / C3735 - (C7396 * C12427) / q + C12493 - (C7398 * p) / q;
    const double C12462 = C6703 * p;
    const double C1970 = C12479 - (C7027 * C12427) / q - (C7028 * p) / q;
    const double C12461 = C6687 * p;
    const double C1969 =
        C7027 / C3735 - (C7028 * C12427) / q + C12478 - (C7030 * p) / q;
    const double C12620 = C10178 * p;
    const double C3220 = C12634 - (C10528 * C12428) / q - (C10529 * p) / q;
    const double C12618 = C10086 * p;
    const double C12612 = C9952 * p;
    const double C3108 = C12624 - (C10286 * C12428) / q - (C10287 * p) / q;
    const double C12611 = C9936 * p;
    const double C12625 = C10271 * p;
    const double C12606 = C9809 * p;
    const double C3211 = C12634 - (C10512 * C12427) / q - (C10513 * p) / q;
    const double C12605 = C9794 * p;
    const double C3043 = C12619 - (C10145 * C12427) / q - (C10146 * p) / q;
    const double C12599 = C9715 * p;
    const double C3157 = C12632 - (C10423 * C12427) / q - (C10424 * p) / q;
    const double C12598 = C9700 * p;
    const double C2989 = C12617 - (C10055 * C12427) / q - (C10056 * p) / q;
    const double C12594 = C9577 * p;
    const double C3098 = C12624 - (C10237 * C12427) / q - (C10238 * p) / q;
    const double C12593 = C9561 * p;
    const double C3097 =
        C10237 / C3735 - (C10238 * C12427) / q + C12623 - (C10240 * p) / q;
    const double C12592 = C9545 * p;
    const double C2930 = C12609 - (C9869 * C12427) / q - (C9870 * p) / q;
    const double C12591 = C9529 * p;
    const double C2929 =
        C9869 / C3735 - (C9870 * C12427) / q + C12608 - (C9872 * p) / q;
    const double C12432 = C12330 / q;
    const double C12433 = C12331 / q;
    const double C861 = -(C3805 * C12428 + C12332) / q;
    const double C862 = -(C3821 * C12428 + C12333) / q;
    const double C12435 = C12336 / q;
    const double C970 = -(C3822 * C12428 + C12336) / q;
    const double C907 = C12338 - (C3993 * be + C3916 * C12427) / q - C12332 / q;
    const double C12436 = C12340 / q;
    const double C12438 = C12343 / q;
    const double C1025 = -(C4266 * be + C4208 * C12427 + C12352) / q;
    const double C1378 = C12375 - (C3997 * C12428) / q - C12352 / q;
    const double C12439 = C12348 / q;
    const double C1135 = -(C4471 * be + C4209 * C12427 + C12348) / q;
    const double C12440 = C12349 / q;
    const double C1035 = C12338 - (C4192 * C12428) / q - C12353 / q;
    const double C1081 = -(C4375 * be + C4300 * C12427 + C12353) / q;
    const double C1368 =
        C12374 - (C4939 * be + C3997 * C12427) / q - C12333 / q;
    const double C12441 = C12355 / q;
    const double C12442 = C12357 / q;
    const double C1199 = -(C4647 * be + C4588 * C12427 + C12366) / q;
    const double C1510 = C12375 - (C4095 * C12431) / q + C12377 - C12366 / q;
    const double C1176 = C12344 - (C4571 * C12431) / q + C12360 - C12363 / q;
    const double C1309 = -(C4849 * be + C4589 * C12427 + C12363) / q;
    const double C1209 = -(C4571 * C12428 + C12367) / q;
    const double C1255 = -(C4755 * be + C4680 * C12427 + C12367) / q;
    const double C1453 =
        C3997 / C3735 - (C4912 * C12431) / q + C12376 - C12367 / q;
    const double C1210 = -(C4588 * C12428 + C12368) / q;
    const double C1666 = C12374 - (C4489 * C12431) / q + C12381 - C12368 / q;
    const double C1237 = C12359 - (C4680 * C12431) / q + C12369 - C12370 / q;
    const double C1318 = -(C4589 * C12428 + C12370) / q;
    const double C1348 = C12372 - (C3997 * C12431) / q - C12373 / q;
    const double C1540 = -(C4095 * C12428 + C12373) / q;
    const double C1686 = -(C5209 * be + C4489 * C12427 + C12373) / q;
    const double C1851 = -(C3866 * be + C6718 * C12428 + C12465) / q;
    const double C1852 = -(C3882 * be + C6734 * C12428 + C12466) / q;
    const double C1897 = C12471 - (C6825 * C12427) / q - C12465 / q;
    const double C12566 = C12473 / q;
    const double C2010 = -(C7109 * C12427 + C12485) / q;
    const double C2350 =
        C12508 - (C4939 * be + C6903 * C12428) / q - C12485 / q;
    const double C2019 =
        C12471 - (C4251 * be + C7093 * C12428) / q - C12486 / q;
    const double C2065 = -(C7197 * C12427 + C12486) / q;
    const double C2341 = C12507 - (C6903 * C12427) / q - C12466 / q;
    const double C2178 = -(C7477 * C12427 + C12499) / q;
    const double C2479 = C12508 - (C6998 * C12431) / q + C12510 - C12499 / q;
    const double C2157 = C12477 - (C7460 * C12431) / q + C12493 - C12496 / q;
    const double C2287 = -(C7478 * C12427 + C12496) / q;
    const double C2187 = -(C4632 * be + C7460 * C12428 + C12500) / q;
    const double C2233 = -(C7565 * C12427 + C12500) / q;
    const double C2425 =
        C6903 / C3735 - (C7790 * C12431) / q + C12509 - C12500 / q;
    const double C2188 = -(C4647 * be + C7477 * C12428 + C12501) / q;
    const double C2629 = C12507 - (C7380 * C12431) / q + C12514 - C12501 / q;
    const double C2215 = C12492 - (C7565 * C12431) / q + C12502 - C12503 / q;
    const double C2296 = -(C4849 * be + C7478 * C12428 + C12503) / q;
    const double C2323 = C12505 - (C6903 * C12431) / q - C12506 / q;
    const double C2506 = -(C5121 * be + C6998 * C12428 + C12506) / q;
    const double C2647 = -(C7380 * C12427 + C12506) / q;
    const double C2811 = -(C9560 * C12428 + C12595) / q;
    const double C2812 = -(C9576 * C12428 + C12596) / q;
    const double C2857 = C12601 - (C9667 * C12427) / q - C12595 / q;
    const double C12696 = C12603 / q;
    const double C2970 = -(C9951 * C12427 + C12615) / q;
    const double C3310 = C12638 - (C9745 * C12428) / q - C12615 / q;
    const double C2979 = C12601 - (C9935 * C12428) / q - C12616 / q;
    const double C3025 = -(C10039 * C12427 + C12616) / q;
    const double C3301 = C12637 - (C9745 * C12427) / q - C12596 / q;
    const double C3138 = -(C10319 * C12427 + C12629) / q;
    const double C3439 =
        C12638 - (C5121 * be + C9840 * C12431) / q + C12640 - C12629 / q;
    const double C3117 =
        C12607 - (C4632 * be + C10302 * C12431) / q + C12623 - C12626 / q;
    const double C3247 = -(C10320 * C12427 + C12626) / q;
    const double C3147 = -(C10302 * C12428 + C12630) / q;
    const double C3193 = -(C10407 * C12427 + C12630) / q;
    const double C3385 = C9745 / C3735 - (C5031 * be + C10632 * C12431) / q +
                         C12639 - C12630 / q;
    const double C3148 = -(C10319 * C12428 + C12631) / q;
    const double C3589 =
        C12637 - (C5209 * be + C10222 * C12431) / q + C12644 - C12631 / q;
    const double C3175 =
        C12622 - (C4755 * be + C10407 * C12431) / q + C12632 - C12633 / q;
    const double C3256 = -(C10320 * C12428 + C12633) / q;
    const double C3283 =
        C12635 - (C4939 * be + C9745 * C12431) / q - C12636 / q;
    const double C3466 = -(C9840 * C12428 + C12636) / q;
    const double C3607 = -(C10222 * C12427 + C12636) / q;
    const double C12429 = C12326 / q;
    const double C12430 = C12327 / q;
    const double C12434 = C12335 / q;
    const double C12437 = C12342 / q;
    const double C1014 = -(C4236 * be + C4176 * C12427 + C12350) / q;
    const double C1338 =
        C3854 / C3735 - (C3981 * C12428) / q + C12372 - C12350 / q;
    const double C991 = C12337 - (C4159 * C12428) / q + C12345 - C12347 / q;
    const double C1072 = -(C4360 * be + C4177 * C12427 + C12347) / q;
    const double C1126 = -(C4455 * be + C4427 * C12427 + C12358) / q;
    const double C1444 =
        C4078 / C3735 - (C4990 * C12428) / q + C12376 - C12358 / q;
    const double C1165 = C12360 - (C4539 * C12428) / q - C12362 / q;
    const double C1246 = -(C4740 * be + C4556 * C12427 + C12362) / q;
    const double C1187 =
        C12364 - (C4601 * be + C4539 * C12427) / q - (C4605 * p) / q;
    const double C1228 =
        C12364 - (C4556 * C12428) / q + C12369 - (C4713 * p) / q;
    const double C1500 = C12377 - (C4078 * C12428) / q - C12378 / q;
    const double C1676 = -(C5194 * be + C4426 * C12427 + C12378) / q;
    const double C1520 =
        C12379 - (C5105 * be + C4078 * C12427) / q - (C4046 * p) / q;
    const double C1656 =
        C12379 - (C4426 * C12428) / q + C12381 - (C4427 * p) / q;
    const double C2000 = -(C7077 * C12427 + C12483) / q;
    const double C2314 =
        C6765 / C3735 - (C4924 * be + C6888 * C12428) / q + C12505 - C12483 / q;
    const double C1979 =
        C12470 - (C4221 * be + C7060 * C12428) / q + C12478 - C12480 / q;
    const double C2056 = -(C7078 * C12427 + C12480) / q;
    const double C2110 = -(C7320 * C12427 + C12491) / q;
    const double C2416 =
        C6982 / C3735 - (C5016 * be + C7865 * C12428) / q + C12509 - C12491 / q;
    const double C2167 = C12497 - (C7428 * C12427) / q - (C7493 * p) / q;
    const double C2206 =
        C12497 - (C4740 * be + C7445 * C12428) / q + C12502 - (C7597 * p) / q;
    const double C2470 =
        C12510 - (C5105 * be + C6982 * C12428) / q - C12511 / q;
    const double C2638 = -(C7319 * C12427 + C12511) / q;
    const double C2488 = C12512 - (C6982 * C12427) / q - (C6951 * p) / q;
    const double C2620 =
        C12512 - (C5194 * be + C7319 * C12428) / q + C12514 - (C7320 * p) / q;
    const double C2960 = -(C9919 * C12427 + C12613) / q;
    const double C3274 =
        C9607 / C3735 - (C9730 * C12428) / q + C12635 - C12613 / q;
    const double C2939 = C12600 - (C9902 * C12428) / q + C12608 - C12610 / q;
    const double C3016 = -(C9920 * C12427 + C12610) / q;
    const double C3070 = -(C10162 * C12427 + C12621) / q;
    const double C3376 =
        C9824 / C3735 - (C10707 * C12428) / q + C12639 - C12621 / q;
    const double C3127 = C12627 - (C10270 * C12427) / q - (C10335 * p) / q;
    const double C3166 =
        C12627 - (C10287 * C12428) / q + C12632 - (C10439 * p) / q;
    const double C3430 = C12640 - (C9824 * C12428) / q - C12641 / q;
    const double C3598 = -(C10161 * C12427 + C12641) / q;
    const double C3448 = C12642 - (C9824 * C12427) / q - (C9793 * p) / q;
    const double C3580 =
        C12642 - (C10161 * C12428) / q + C12644 - (C10162 * p) / q;
    const double C12572 = C12490 / q;
    const double C12571 = C12488 / q;
    const double C12570 = C12482 / q;
    const double C12569 = C12481 / q;
    const double C2119 = -(C7110 * C12427 + C12481) / q;
    const double C2147 =
        C12493 - (C4601 * be + C7428 * C12428) / q - C12495 / q;
    const double C2224 = -(C7445 * C12427 + C12495) / q;
    const double C12568 = C12476 / q;
    const double C12567 = C12475 / q;
    const double C12565 = C12469 / q;
    const double C1960 = -(C4091 * be + C6735 * C12428 + C12469) / q;
    const double C12564 = C12468 / q;
    const double C12563 = C12464 / q;
    const double C12562 = C12463 / q;
    const double C12561 = C12462 / q;
    const double C12560 = C12461 / q;
    const double C12702 = C12620 / q;
    const double C12701 = C12618 / q;
    const double C12700 = C12612 / q;
    const double C12699 = C12611 / q;
    const double C3079 = -(C9952 * C12427 + C12611) / q;
    const double C3107 = C12623 - (C10270 * C12428) / q - C12625 / q;
    const double C3184 = -(C10287 * C12427 + C12625) / q;
    const double C12698 = C12606 / q;
    const double C12697 = C12605 / q;
    const double C12695 = C12599 / q;
    const double C2920 = -(C9577 * C12428 + C12599) / q;
    const double C12694 = C12598 / q;
    const double C12693 = C12594 / q;
    const double C12692 = C12593 / q;
    const double C12691 = C12592 / q;
    const double C12690 = C12591 / q;
    const double C828 = C12322 - (C3805 * C12431) / q - C12432;
    const double C961 = C12344 - (C4091 * be + C3822 * C12427) / q - C12432;
    const double C829 = C12323 - (C3821 * C12431) / q - C12433;
    const double C1530 = C12380 - (C5121 * be + C4095 * C12427) / q - C12433;
    const double C889 = C12334 - (C3916 * C12431) / q - C12435;
    const double C1471 =
        C4489 / C3735 - (C5031 * be + C4912 * C12427) / q - C12435;
    const double C916 = C12339 - (C3916 * C12428) / q - C12436;
    const double C1024 = C12351 - (C4251 * be + C4192 * C12427) / q - C12436;
    const double C943 = C12339 - (C3822 * C12431) / q + C12341 - C12438;
    const double C1198 = C12365 - (C4632 * be + C4571 * C12427) / q - C12438;
    const double C1002 = C12345 - (C4192 * C12431) / q - C12439;
    const double C1480 = C4095 / C3735 - (C4912 * C12428) / q - C12439;
    const double C1003 = C12346 - (C4208 * C12431) / q - C12440;
    const double C1696 = C12380 - (C4489 * C12428) / q - C12440;
    const double C1063 = C12354 - (C4300 * C12431) / q - C12441;
    const double C1144 = C12359 - (C4209 * C12428) / q - C12441;
    const double C1117 = C12351 - (C4209 * C12431) / q + C12356 - C12442;
    const double C1264 = C12365 - (C4680 * C12428) / q - C12442;
    const double C1906 = C12472 - (C3993 * be + C6825 * C12428) / q - C12566;
    const double C2009 = C12484 - (C7093 * C12427) / q - C12566;
    const double C2866 = C12602 - (C9667 * C12428) / q - C12696;
    const double C2969 = C12614 - (C9935 * C12427) / q - C12696;
    const double C817 = C12322 - (C3773 * C12428) / q - C12429;
    const double C898 = C12337 - (C3977 * be + C3790 * C12427) / q - C12429;
    const double C818 = C12323 - (C3789 * C12428) / q - C12430;
    const double C1358 =
        C4175 / C3735 - (C4924 * be + C3981 * C12427) / q - C12430;
    const double C880 = C3789 / C3735 - (C3790 * C12428) / q + C12334 - C12434;
    const double C1013 =
        C4176 / C3735 - (C4221 * be + C4159 * C12427) / q - C12434;
    const double C934 = C12341 - (C4046 * C12428) / q - C12437;
    const double C1462 =
        C4426 / C3735 - (C5016 * be + C4990 * C12427) / q - C12437;
    const double C2101 = C12484 - (C7110 * C12431) / q + C12489 - C12572;
    const double C2242 = C12498 - (C4755 * be + C7565 * C12428) / q - C12572;
    const double C2047 = C12487 - (C7197 * C12431) / q - C12571;
    const double C2128 = C12492 - (C4471 * be + C7110 * C12428) / q - C12571;
    const double C1990 = C12479 - (C7109 * C12431) / q - C12570;
    const double C2656 = C12513 - (C5209 * be + C7380 * C12428) / q - C12570;
    const double C1989 = C12478 - (C7093 * C12431) / q - C12569;
    const double C2452 =
        C6998 / C3735 - (C5031 * be + C7790 * C12428) / q - C12569;
    const double C1933 = C12472 - (C6735 * C12431) / q + C12474 - C12568;
    const double C2177 = C12498 - (C7460 * C12427) / q - C12568;
    const double C1924 = C12474 - (C4074 * be + C6951 * C12428) / q - C12567;
    const double C2434 = C7319 / C3735 - (C7865 * C12427) / q - C12567;
    const double C1879 = C12467 - (C6825 * C12431) / q - C12565;
    const double C2443 = C7380 / C3735 - (C7790 * C12427) / q - C12565;
    const double C1870 =
        C6702 / C3735 - (C3977 * be + C6703 * C12428) / q + C12467 - C12564;
    const double C1999 = C7077 / C3735 - (C7060 * C12427) / q - C12564;
    const double C1822 = C12460 - (C6734 * C12431) / q - C12563;
    const double C2497 = C12513 - (C6998 * C12427) / q - C12563;
    const double C1821 = C12459 - (C6718 * C12431) / q - C12562;
    const double C1951 = C12477 - (C6735 * C12427) / q - C12562;
    const double C1812 = C12460 - (C3850 * be + C6702 * C12428) / q - C12561;
    const double C2332 = C7076 / C3735 - (C6888 * C12427) / q - C12561;
    const double C1811 = C12459 - (C3834 * be + C6686 * C12428) / q - C12560;
    const double C1888 = C12470 - (C6703 * C12427) / q - C12560;
    const double C3061 =
        C12614 - (C4471 * be + C9952 * C12431) / q + C12619 - C12702;
    const double C3202 = C12628 - (C10407 * C12428) / q - C12702;
    const double C3007 = C12617 - (C4375 * be + C10039 * C12431) / q - C12701;
    const double C3088 = C12622 - (C9952 * C12428) / q - C12701;
    const double C2950 = C12609 - (C4266 * be + C9951 * C12431) / q - C12700;
    const double C3616 = C12643 - (C10222 * C12428) / q - C12700;
    const double C2949 = C12608 - (C4251 * be + C9935 * C12431) / q - C12699;
    const double C3412 = C9840 / C3735 - (C10632 * C12428) / q - C12699;
    const double C2893 =
        C12602 - (C4091 * be + C9577 * C12431) / q + C12604 - C12698;
    const double C3137 = C12628 - (C10302 * C12427) / q - C12698;
    const double C2884 = C12604 - (C9793 * C12428) / q - C12697;
    const double C3394 = C10161 / C3735 - (C10707 * C12427) / q - C12697;
    const double C2839 = C12597 - (C3993 * be + C9667 * C12431) / q - C12695;
    const double C3403 = C10222 / C3735 - (C10632 * C12427) / q - C12695;
    const double C2830 = C9544 / C3735 - (C9545 * C12428) / q + C12597 - C12694;
    const double C2959 = C9919 / C3735 - (C9902 * C12427) / q - C12694;
    const double C2782 = C12590 - (C3882 * be + C9576 * C12431) / q - C12693;
    const double C3457 = C12643 - (C9840 * C12427) / q - C12693;
    const double C2781 = C12589 - (C3866 * be + C9560 * C12431) / q - C12692;
    const double C2911 = C12607 - (C9577 * C12427) / q - C12692;
    const double C2772 = C12590 - (C9544 * C12428) / q - C12691;
    const double C3292 = C9918 / C3735 - (C9730 * C12427) / q - C12691;
    const double C2771 = C12589 - (C9528 * C12428) / q - C12690;
    const double C2848 = C12600 - (C9545 * C12427) / q - C12690;
    etx[0] = C806;
    etx[1] = C807;
    etx[2] = C817;
    etx[3] = C818;
    etx[4] = C828;
    etx[5] = C829;
    etx[6] = C839;
    etx[7] = C840;
    etx[8] = C850;
    etx[9] = C851;
    etx[10] = C861;
    etx[11] = C862;
    etx[12] = C871;
    etx[13] = C880;
    etx[14] = C889;
    etx[15] = C898;
    etx[16] = C907;
    etx[17] = C916;
    etx[18] = C925;
    etx[19] = C934;
    etx[20] = C943;
    etx[21] = C952;
    etx[22] = C961;
    etx[23] = C970;
    etx[24] = C980;
    etx[25] = C981;
    etx[26] = C991;
    etx[27] = C992;
    etx[28] = C1002;
    etx[29] = C1003;
    etx[30] = C1013;
    etx[31] = C1014;
    etx[32] = C1024;
    etx[33] = C1025;
    etx[34] = C1035;
    etx[35] = C1036;
    etx[36] = C1045;
    etx[37] = C1054;
    etx[38] = C1063;
    etx[39] = C1072;
    etx[40] = C1081;
    etx[41] = C1090;
    etx[42] = C1099;
    etx[43] = C1108;
    etx[44] = C1117;
    etx[45] = C1126;
    etx[46] = C1135;
    etx[47] = C1144;
    etx[48] = C1154;
    etx[49] = C1155;
    etx[50] = C1165;
    etx[51] = C1166;
    etx[52] = C1176;
    etx[53] = C1177;
    etx[54] = C1187;
    etx[55] = C1188;
    etx[56] = C1198;
    etx[57] = C1199;
    etx[58] = C1209;
    etx[59] = C1210;
    etx[60] = C1219;
    etx[61] = C1228;
    etx[62] = C1237;
    etx[63] = C1246;
    etx[64] = C1255;
    etx[65] = C1264;
    etx[66] = C1273;
    etx[67] = C1282;
    etx[68] = C1291;
    etx[69] = C1300;
    etx[70] = C1309;
    etx[71] = C1318;
    etx[72] = C1328;
    etx[73] = C1338;
    etx[74] = C1348;
    etx[75] = C1358;
    etx[76] = C1368;
    etx[77] = C1378;
    etx[78] = C1435;
    etx[79] = C1444;
    etx[80] = C1453;
    etx[81] = C1462;
    etx[82] = C1471;
    etx[83] = C1480;
    etx[84] = C1490;
    etx[85] = C1500;
    etx[86] = C1510;
    etx[87] = C1520;
    etx[88] = C1530;
    etx[89] = C1540;
    etx[90] = C1646;
    etx[91] = C1656;
    etx[92] = C1666;
    etx[93] = C1676;
    etx[94] = C1686;
    etx[95] = C1696;
    ety[0] = C1801;
    ety[1] = C1802;
    ety[2] = C1811;
    ety[3] = C1812;
    ety[4] = C1821;
    ety[5] = C1822;
    ety[6] = C1831;
    ety[7] = C1832;
    ety[8] = C1841;
    ety[9] = C1842;
    ety[10] = C1851;
    ety[11] = C1852;
    ety[12] = C1861;
    ety[13] = C1870;
    ety[14] = C1879;
    ety[15] = C1888;
    ety[16] = C1897;
    ety[17] = C1906;
    ety[18] = C1915;
    ety[19] = C1924;
    ety[20] = C1933;
    ety[21] = C1942;
    ety[22] = C1951;
    ety[23] = C1960;
    ety[24] = C1969;
    ety[25] = C1970;
    ety[26] = C1979;
    ety[27] = C1980;
    ety[28] = C1989;
    ety[29] = C1990;
    ety[30] = C1999;
    ety[31] = C2000;
    ety[32] = C2009;
    ety[33] = C2010;
    ety[34] = C2019;
    ety[35] = C2020;
    ety[36] = C2029;
    ety[37] = C2038;
    ety[38] = C2047;
    ety[39] = C2056;
    ety[40] = C2065;
    ety[41] = C2074;
    ety[42] = C2083;
    ety[43] = C2092;
    ety[44] = C2101;
    ety[45] = C2110;
    ety[46] = C2119;
    ety[47] = C2128;
    ety[48] = C2137;
    ety[49] = C2138;
    ety[50] = C2147;
    ety[51] = C2148;
    ety[52] = C2157;
    ety[53] = C2158;
    ety[54] = C2167;
    ety[55] = C2168;
    ety[56] = C2177;
    ety[57] = C2178;
    ety[58] = C2187;
    ety[59] = C2188;
    ety[60] = C2197;
    ety[61] = C2206;
    ety[62] = C2215;
    ety[63] = C2224;
    ety[64] = C2233;
    ety[65] = C2242;
    ety[66] = C2251;
    ety[67] = C2260;
    ety[68] = C2269;
    ety[69] = C2278;
    ety[70] = C2287;
    ety[71] = C2296;
    ety[72] = C2305;
    ety[73] = C2314;
    ety[74] = C2323;
    ety[75] = C2332;
    ety[76] = C2341;
    ety[77] = C2350;
    ety[78] = C2407;
    ety[79] = C2416;
    ety[80] = C2425;
    ety[81] = C2434;
    ety[82] = C2443;
    ety[83] = C2452;
    ety[84] = C2461;
    ety[85] = C2470;
    ety[86] = C2479;
    ety[87] = C2488;
    ety[88] = C2497;
    ety[89] = C2506;
    ety[90] = C2611;
    ety[91] = C2620;
    ety[92] = C2629;
    ety[93] = C2638;
    ety[94] = C2647;
    ety[95] = C2656;
    etz[0] = C2761;
    etz[1] = C2762;
    etz[2] = C2771;
    etz[3] = C2772;
    etz[4] = C2781;
    etz[5] = C2782;
    etz[6] = C2791;
    etz[7] = C2792;
    etz[8] = C2801;
    etz[9] = C2802;
    etz[10] = C2811;
    etz[11] = C2812;
    etz[12] = C2821;
    etz[13] = C2830;
    etz[14] = C2839;
    etz[15] = C2848;
    etz[16] = C2857;
    etz[17] = C2866;
    etz[18] = C2875;
    etz[19] = C2884;
    etz[20] = C2893;
    etz[21] = C2902;
    etz[22] = C2911;
    etz[23] = C2920;
    etz[24] = C2929;
    etz[25] = C2930;
    etz[26] = C2939;
    etz[27] = C2940;
    etz[28] = C2949;
    etz[29] = C2950;
    etz[30] = C2959;
    etz[31] = C2960;
    etz[32] = C2969;
    etz[33] = C2970;
    etz[34] = C2979;
    etz[35] = C2980;
    etz[36] = C2989;
    etz[37] = C2998;
    etz[38] = C3007;
    etz[39] = C3016;
    etz[40] = C3025;
    etz[41] = C3034;
    etz[42] = C3043;
    etz[43] = C3052;
    etz[44] = C3061;
    etz[45] = C3070;
    etz[46] = C3079;
    etz[47] = C3088;
    etz[48] = C3097;
    etz[49] = C3098;
    etz[50] = C3107;
    etz[51] = C3108;
    etz[52] = C3117;
    etz[53] = C3118;
    etz[54] = C3127;
    etz[55] = C3128;
    etz[56] = C3137;
    etz[57] = C3138;
    etz[58] = C3147;
    etz[59] = C3148;
    etz[60] = C3157;
    etz[61] = C3166;
    etz[62] = C3175;
    etz[63] = C3184;
    etz[64] = C3193;
    etz[65] = C3202;
    etz[66] = C3211;
    etz[67] = C3220;
    etz[68] = C3229;
    etz[69] = C3238;
    etz[70] = C3247;
    etz[71] = C3256;
    etz[72] = C3265;
    etz[73] = C3274;
    etz[74] = C3283;
    etz[75] = C3292;
    etz[76] = C3301;
    etz[77] = C3310;
    etz[78] = C3367;
    etz[79] = C3376;
    etz[80] = C3385;
    etz[81] = C3394;
    etz[82] = C3403;
    etz[83] = C3412;
    etz[84] = C3421;
    etz[85] = C3430;
    etz[86] = C3439;
    etz[87] = C3448;
    etz[88] = C3457;
    etz[89] = C3466;
    etz[90] = C3571;
    etz[91] = C3580;
    etz[92] = C3589;
    etz[93] = C3598;
    etz[94] = C3607;
    etz[95] = C3616;
}
