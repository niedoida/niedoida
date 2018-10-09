/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2120_2_et(const double ae,
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
    const double C5522 = g[89];
    const double C5538 = g[90];
    const double C5626 = g[91];
    const double C5641 = g[92];
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
    const double C4317 = vrx[6];
    const double C4410 = vrx[7];
    const double C4507 = vrx[8];
    const double C4524 = vrx[9];
    const double C4697 = vrx[10];
    const double C4789 = vrx[11];
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
    const double C5526 = vrx[30];
    const double C5556 = vrx[31];
    const double C5571 = vrx[32];
    const double C5614 = vrx[33];
    const double C5645 = vrx[34];
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
    const double C12422 = C4697 * p;
    const double C12421 = C4974 / q;
    const double C12420 = C6127 * p;
    const double C12419 = C5154 / q;
    const double C12418 = C6040 * p;
    const double C12417 = C6025 * p;
    const double C12416 = C5965 * p;
    const double C12415 = C5154 * p;
    const double C12414 = C5936 * p;
    const double C12413 = C5921 * p;
    const double C12412 = C4410 * p;
    const double C12411 = C5892 * p;
    const double C12410 = C5877 * p;
    const double C12409 = C5805 * p;
    const double C12408 = C4507 * p;
    const double C12407 = C5703 * p;
    const double C12405 = C5065 / q;
    const double C12404 = C5614 * p;
    const double C12403 = C4974 * p;
    const double C12402 = C4127 * p;
    const double C12400 = C5571 * p;
    const double C12399 = C5556 * p;
    const double C12397 = C4883 / q;
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
    const double C12576 = C9222 * p;
    const double C12575 = C9207 * p;
    const double C12574 = C9121 * p;
    const double C12573 = C9064 * p;
    const double C12572 = C7580 * p;
    const double C12571 = C7849 / q;
    const double C12570 = C8979 * p;
    const double C12569 = C8023 / q;
    const double C12568 = C8893 * p;
    const double C12567 = C8878 * p;
    const double C12566 = C8819 * p;
    const double C12565 = C8023 * p;
    const double C12564 = C8790 * p;
    const double C12563 = C8775 * p;
    const double C12562 = C7302 * p;
    const double C12561 = C8746 * p;
    const double C12560 = C8731 * p;
    const double C12559 = C8659 * p;
    const double C12558 = C7397 * p;
    const double C12557 = C8560 * p;
    const double C12556 = C7937 / q;
    const double C12554 = C8474 * p;
    const double C12553 = C7849 * p;
    const double C12552 = C7029 * p;
    const double C12550 = C8431 * p;
    const double C12549 = C8416 * p;
    const double C12548 = C7761 / q;
    const double C12546 = C8358 * p;
    const double C12545 = C8343 * p;
    const double C12544 = C7937 * p;
    const double C12543 = C8314 * p;
    const double C12542 = C7761 * p;
    const double C12541 = C8285 * p;
    const double C12540 = C8270 * p;
    const double C12539 = C6935 * p;
    const double C12538 = C8241 * p;
    const double C12537 = C8226 * p;
    const double C12536 = C8211 * p;
    const double C12535 = C6842 * p;
    const double C12534 = C8182 * p;
    const double C12533 = C8167 * p;
    const double C12721 = C12062 * p;
    const double C12720 = C12047 * p;
    const double C12719 = C11961 * p;
    const double C12718 = C11904 * p;
    const double C12717 = C10422 * p;
    const double C12716 = C10691 / q;
    const double C12715 = C11819 * p;
    const double C12714 = C10865 / q;
    const double C12713 = C11734 * p;
    const double C12712 = C11719 * p;
    const double C12711 = C11661 * p;
    const double C12710 = C10865 * p;
    const double C12709 = C11632 * p;
    const double C12708 = C11617 * p;
    const double C12707 = C10144 * p;
    const double C12706 = C11588 * p;
    const double C12705 = C11573 * p;
    const double C12704 = C11501 * p;
    const double C12703 = C10239 * p;
    const double C12702 = C11402 * p;
    const double C12701 = C10779 / q;
    const double C12699 = C11316 * p;
    const double C12698 = C10691 * p;
    const double C12697 = C9871 * p;
    const double C12695 = C11273 * p;
    const double C12694 = C11258 * p;
    const double C12693 = C10603 / q;
    const double C12691 = C11200 * p;
    const double C12690 = C11185 * p;
    const double C12689 = C10779 * p;
    const double C12688 = C11156 * p;
    const double C12687 = C10603 * p;
    const double C12686 = C11127 * p;
    const double C12685 = C11112 * p;
    const double C12684 = C9777 * p;
    const double C12683 = C11083 * p;
    const double C12682 = C11068 * p;
    const double C12681 = C11053 * p;
    const double C12680 = C9684 * p;
    const double C12679 = C11024 * p;
    const double C12678 = C11009 * p;
    const double C12406 = C5645 / C3735;
    const double C12401 = C5258 / C3735;
    const double C12398 = C5526 / C3735;
    const double C12382 = C5289 / C3735;
    const double C12381 = C5154 / C3735;
    const double C12377 = C5065 / C3735;
    const double C12376 = C4974 / C3735;
    const double C12372 = C4883 / C3735;
    const double C12371 = C4789 / C3735;
    const double C12369 = C4697 / C3735;
    const double C12361 = C4524 / C3735;
    const double C12360 = C4507 / C3735;
    const double C12356 = C4410 / C3735;
    const double C12354 = C4317 / C3735;
    const double C12346 = C4144 / C3735;
    const double C12345 = C4127 / C3735;
    const double C12341 = C4030 / C3735;
    const double C12334 = C3934 / C3735;
    const double C12323 = C3758 / C3735;
    const double C12322 = C3740 / C3735;
    const double C12555 = C8489 / C3735;
    const double C12551 = C8108 / C3735;
    const double C12547 = C8373 / C3735;
    const double C12532 = C8152 / C3735;
    const double C12531 = C8023 / C3735;
    const double C12527 = C7937 / C3735;
    const double C12526 = C7849 / C3735;
    const double C12522 = C7761 / C3735;
    const double C12521 = C7669 / C3735;
    const double C12519 = C7580 / C3735;
    const double C12511 = C7413 / C3735;
    const double C12510 = C7397 / C3735;
    const double C12506 = C7302 / C3735;
    const double C12504 = C7212 / C3735;
    const double C12496 = C7045 / C3735;
    const double C12495 = C7029 / C3735;
    const double C12491 = C6935 / C3735;
    const double C12484 = C6842 / C3735;
    const double C12477 = C6671 / C3735;
    const double C12476 = C6654 / C3735;
    const double C12700 = C11331 / C3735;
    const double C12696 = C10950 / C3735;
    const double C12692 = C11215 / C3735;
    const double C12677 = C10994 / C3735;
    const double C12676 = C10865 / C3735;
    const double C12672 = C10779 / C3735;
    const double C12671 = C10691 / C3735;
    const double C12667 = C10603 / C3735;
    const double C12666 = C10511 / C3735;
    const double C12664 = C10422 / C3735;
    const double C12656 = C10255 / C3735;
    const double C12655 = C10239 / C3735;
    const double C12651 = C10144 / C3735;
    const double C12649 = C10054 / C3735;
    const double C12641 = C9887 / C3735;
    const double C12640 = C9871 / C3735;
    const double C12636 = C9777 / C3735;
    const double C12629 = C9684 / C3735;
    const double C12622 = C9513 / C3735;
    const double C12621 = C9496 / C3735;
    const double C12470 = C12424 / q;
    const double C12471 = C12423 / q;
    const double C12469 = C12420 / q;
    const double C12467 = C12417 / q;
    const double C12466 = C12413 / q;
    const double C12465 = C12411 / q;
    const double C12468 = C12410 / q;
    const double C12464 = C12409 / q;
    const double C12463 = C12408 / q;
    const double C12462 = C12407 / q;
    const double C12461 = C12404 / q;
    const double C12460 = C12402 / q;
    const double C12459 = C12400 / q;
    const double C12458 = C12399 / q;
    const double C12457 = C12390 / q;
    const double C12456 = C12388 / q;
    const double C12455 = C12386 / q;
    const double C12454 = C12384 / q;
    const double C12431 = C12328 + C12329;
    const double C12428 = C12324 + C12325;
    const double C12427 = C12320 + C12321;
    const double C12616 = C12576 / q;
    const double C12615 = C12575 / q;
    const double C12614 = C12573 / q;
    const double C12613 = C12572 / q;
    const double C12612 = C12570 / q;
    const double C12611 = C12567 / q;
    const double C12610 = C12563 / q;
    const double C12609 = C12561 / q;
    const double C12607 = C12557 / q;
    const double C12606 = C12554 / q;
    const double C12604 = C12550 / q;
    const double C12603 = C12549 / q;
    const double C12605 = C12546 / q;
    const double C12608 = C12545 / q;
    const double C12602 = C12541 / q;
    const double C12601 = C12540 / q;
    const double C12600 = C12538 / q;
    const double C12599 = C12536 / q;
    const double C12598 = C12535 / q;
    const double C12597 = C12534 / q;
    const double C12596 = C12533 / q;
    const double C12756 = C12715 / q;
    const double C12755 = C12713 / q;
    const double C12754 = C12712 / q;
    const double C12753 = C12711 / q;
    const double C12752 = C12709 / q;
    const double C12751 = C12708 / q;
    const double C12750 = C12707 / q;
    const double C12749 = C12706 / q;
    const double C12748 = C12705 / q;
    const double C12747 = C12702 / q;
    const double C12746 = C12699 / q;
    const double C12745 = C12695 / q;
    const double C12744 = C12694 / q;
    const double C12743 = C12691 / q;
    const double C12742 = C12690 / q;
    const double C12741 = C12688 / q;
    const double C12740 = C12685 / q;
    const double C12739 = C12684 / q;
    const double C12738 = C12683 / q;
    const double C12737 = C12682 / q;
    const double C12736 = C12681 / q;
    const double C12735 = C12679 / q;
    const double C3805 = -(C3740 * C12431 + C12387) / q;
    const double C3806 = C12322 - (C5363 * C12431) / q - C12456;
    const double C3821 = -(C3758 * C12431 + C12389) / q;
    const double C3822 = C12323 - (C4030 * C12431) / q - C12457;
    const double C3870 = -(C5242 * C12431 + C12393) / q;
    const double C3886 = -(C5258 * C12431 + C12394) / q;
    const double C3901 = -(C5304 * C12431 + C12395) / q;
    const double C3916 = -(C3934 * C12431 + C12396) / q;
    const double C3965 = C12334 - (C5495 * C12431) / q - C12459;
    const double C3997 = -(C4883 * C12431 + C12403) / q;
    const double C4012 = -(C5348 * C12431 + C12404) / q;
    const double C4062 = C4030 / q - (C5407 * C12431) / q - C12462;
    const double C4095 = C12401 - (C5065 * C12431) / q - C12463;
    const double C4192 = -(C4127 * C12431 + C12410) / q;
    const double C4193 = C12345 - (C5877 * C12431) / q - C12465;
    const double C4208 = -(C4144 * C12431 + C12412) / q;
    const double C4209 = C12346 - (C4410 * C12431) / q - C12466;
    const double C4284 = -(C5805 * C12431 + C12414) / q;
    const double C4299 = -(C5526 * C12431 + C12415) / q;
    const double C4300 = -(C4317 * C12431 + C12416) / q;
    const double C4348 = C12354 - (C5965 * C12431) / q - C12467;
    const double C4393 = -(C5862 * C12431 + C12418) / q;
    const double C4443 = C4410 / q - (C5921 * C12431) / q - C12469;
    const double C4489 = C12398 - (C5154 * C12431) / q - C12422 / q;
    const double C4571 = C12405 - (C4507 * C12431) / q - C12470;
    const double C4572 =
        (3 * C4507) / C3735 - (C6272 * C12431) / q - (C6287 * p) / q;
    const double C4587 = C12382 - (C5645 * C12431) / q - (C4524 * p) / q;
    const double C4588 = C5645 / q - (C4524 * C12431) / q - (C4789 * p) / q;
    const double C4589 =
        (3 * C4524) / C3735 - (C4789 * C12431) / q - (C6329 * p) / q;
    const double C4665 = C12421 - (C6215 * C12431) / q - C12425 / q;
    const double C4680 = C12419 - (C4697 * C12431) / q - C12426 / q;
    const double C4728 =
        (3 * C4697) / C3735 - (C6373 * C12431) / q - (C6432 * p) / q;
    const double C4821 =
        (2 * C4789) / q - (C6329 * C12431) / q - (C6505 * p) / q;
    const double C4912 = C12372 - (C4974 * C12431) / q - C12471;
    const double C6718 = -(C6654 * C12431 + C12537) / q;
    const double C6734 = -(C6671 * C12431 + C12539) / q;
    const double C6780 = -(C8123 * C12431 + C12543) / q;
    const double C6795 = -(C8108 * C12431 + C12544) / q;
    const double C6810 = -(C8167 * C12431 + C12545) / q;
    const double C6825 = -(C6842 * C12431 + C12546) / q;
    const double C6903 = -(C7761 * C12431 + C12553) / q;
    const double C6918 = -(C8211 * C12431 + C12554) / q;
    const double C6998 = C12551 - (C7937 * C12431) / q - C12558 / q;
    const double C7093 = -(C7029 * C12431 + C12560) / q;
    const double C7109 = -(C7045 * C12431 + C12562) / q;
    const double C7181 = -(C8659 * C12431 + C12564) / q;
    const double C7196 = -(C8373 * C12431 + C12565) / q;
    const double C7197 = -(C7212 * C12431 + C12566) / q;
    const double C7287 = -(C8716 * C12431 + C12568) / q;
    const double C7460 = C12556 - (C7397 * C12431) / q - C12574 / q;
    const double C7461 =
        (3 * C7397) / C3735 - (C9121 * C12431) / q - (C9136 * p) / q;
    const double C7476 = C12532 - (C8489 * C12431) / q - (C7413 * p) / q;
    const double C7477 = C8489 / q - (C7413 * C12431) / q - (C7669 * p) / q;
    const double C7478 =
        (3 * C7413) / C3735 - (C7669 * C12431) / q - (C9178 * p) / q;
    const double C7612 =
        (3 * C7580) / C3735 - (C9222 * C12431) / q - (C9280 * p) / q;
    const double C7702 =
        (2 * C7669) / q - (C9178 * C12431) / q - (C9352 * p) / q;
    const double C9637 = (C5285 * be) / q - (C10950 * C12431) / q - C12689 / q;
    const double C9745 = (C5522 * be) / q - (C10603 * C12431) / q - C12698 / q;
    const double C9840 =
        (C5641 * be) / q - (C10779 * C12431) / q + C12696 - C12703 / q;
    const double C10038 = (C6531 * be) / q - (C11215 * C12431) / q - C12710 / q;
    const double C10222 =
        (C6575 * be) / q - (C10865 * C12431) / q + C12692 - C12717 / q;
    const double C10302 =
        (C6167 * be) / q - (C10239 * C12431) / q + C12701 - C12719 / q;
    const double C10303 = (C6459 * be) / q - (C11961 * C12431) / q +
                          (3 * C10239) / C3735 - (C11976 * p) / q;
    const double C10318 = (C6182 * be) / q - (C10255 * C12431) / q +
                          C11331 / q - (C10511 * p) / q;
    const double C10319 =
        (C6619 * be) / q - (C11331 * C12431) / q + C12677 - (C10255 * p) / q;
    const double C10320 = (C6444 * be) / q - (C10511 * C12431) / q +
                          (3 * C10255) / C3735 - (C12018 * p) / q;
    const double C10392 =
        (C6400 * be) / q - (C11904 * C12431) / q + C12716 - C12720 / q;
    const double C10407 =
        (C6385 * be) / q - (C10422 * C12431) / q + C12714 - C12721 / q;
    const double C10454 = (C9333 * be) / q - (C12062 * C12431) / q +
                          (3 * C10422) / C3735 - (C12119 * p) / q;
    const double C10544 = (C12185 * be) / q - (C12018 * C12431) / q +
                          (2 * C10511) / q - (C12191 * p) / q;
    const double C10632 =
        (C6560 * be) / q - (C10691 * C12431) / q + C12667 - C12718 / q;
    const double C3773 = -(C3740 * C12428 + C12383) / q;
    const double C3774 = C12322 - (C5304 * C12428) / q - C12454;
    const double C3789 = -(C3758 * C12428 + C12385) / q;
    const double C3790 = C12323 - (C3934 * C12428) / q - C12455;
    const double C3838 = -(C5242 * C12428 + C12391) / q;
    const double C3854 = -(C5258 * C12428 + C12392) / q;
    const double C3950 = C3934 / q - (C5348 * C12428) / q - C12458;
    const double C3981 = C12401 - (C4883 * C12428) / q - C12460;
    const double C4046 = -(C4030 * C12428 + C12396) / q;
    const double C4047 = C12341 - (C5495 * C12428) / q - C12461;
    const double C4078 = -(C5065 * C12428 + C12403) / q;
    const double C4079 = -(C5363 * C12428 + C12395) / q;
    const double C4159 = C12397 - (C4127 * C12428) / q - C12464;
    const double C4160 =
        (3 * C4127) / C3735 - (C5805 * C12428) / q - (C5820 * p) / q;
    const double C4175 = C12382 - (C5526 * C12428) / q - (C4144 * p) / q;
    const double C4176 = C5526 / q - (C4144 * C12428) / q - (C4317 * p) / q;
    const double C4177 =
        (3 * C4144) / C3735 - (C4317 * C12428) / q - (C5862 * p) / q;
    const double C4333 =
        (2 * C4317) / q - (C5862 * C12428) / q - (C6010 * p) / q;
    const double C4426 = C12406 - (C5154 * C12428) / q - C12412 / q;
    const double C4427 = C12419 - (C4410 * C12428) / q - C12416 / q;
    const double C4428 =
        (3 * C4410) / C3735 - (C5965 * C12428) / q - C12418 / q;
    const double C4459 = C12421 - (C5877 * C12428) / q - C12414 / q;
    const double C4539 = -(C4507 * C12428 + C12423) / q;
    const double C4540 = C12360 - (C6215 * C12428) / q - C12465;
    const double C4555 = -(C4524 * C12428 + C12422) / q;
    const double C4556 = C12361 - (C4697 * C12428) / q - C12466;
    const double C4605 = -(C5407 * C12428 + C12400) / q;
    const double C4713 = C4697 / q - (C5921 * C12428) / q - C12467;
    const double C4805 = -(C4789 * C12428 + C12426) / q;
    const double C4806 = C12371 - (C6373 * C12428) / q - C12469;
    const double C4837 = -(C6272 * C12428 + C12425) / q;
    const double C4990 = C12377 - (C4974 * C12428) / q - C12468;
    const double C5109 = -(C5645 * C12428 + C12415) / q;
    const double C6765 = (C5285 * be) / q - (C8108 * C12428) / q - C12542 / q;
    const double C6888 =
        (C5522 * be) / q - (C7761 * C12428) / q + C12551 - C12552 / q;
    const double C6982 = (C5641 * be) / q - (C7937 * C12428) / q - C12553 / q;
    const double C7060 =
        (C5757 * be) / q - (C7029 * C12428) / q + C12548 - C12559 / q;
    const double C7061 = (C5992 * be) / q - (C8659 * C12428) / q +
                         (3 * C7029) / C3735 - (C8674 * p) / q;
    const double C7076 =
        (C5772 * be) / q - (C7045 * C12428) / q + C8373 / q - (C7212 * p) / q;
    const double C7077 =
        (C6531 * be) / q - (C8373 * C12428) / q + C12532 - (C7045 * p) / q;
    const double C7078 = (C5977 * be) / q - (C7212 * C12428) / q +
                         (3 * C7045) / C3735 - (C8716 * p) / q;
    const double C7229 = (C8858 * be) / q - (C8716 * C12428) / q +
                         (2 * C7212) / q - (C8863 * p) / q;
    const double C7319 =
        (C6052 * be) / q - (C7302 * C12428) / q + C12569 - C12566 / q;
    const double C7320 =
        (C6575 * be) / q - (C8023 * C12428) / q + C12555 - C12562 / q;
    const double C7321 = (C8960 * be) / q - (C8819 * C12428) / q +
                         (3 * C7302) / C3735 - C12568 / q;
    const double C7351 =
        (C6067 * be) / q - (C8731 * C12428) / q + C12571 - C12564 / q;
    const double C7865 =
        (C6560 * be) / q - (C7849 * C12428) / q + C12527 - C12560 / q;
    const double C7980 = (C6619 * be) / q - (C8489 * C12428) / q - C12565 / q;
    const double C9528 = -(C9496 * C12428 + C12678) / q;
    const double C9544 = -(C9513 * C12428 + C12680) / q;
    const double C9592 = -(C10965 * C12428 + C12686) / q;
    const double C9607 = -(C10950 * C12428 + C12687) / q;
    const double C9730 = C12696 - (C10603 * C12428) / q - C12697 / q;
    const double C9793 = -(C9777 * C12428 + C12691) / q;
    const double C9824 = -(C10779 * C12428 + C12698) / q;
    const double C9825 = -(C11068 * C12428 + C12690) / q;
    const double C9902 = C12693 - (C9871 * C12428) / q - C12704 / q;
    const double C9903 =
        (3 * C9871) / C3735 - (C11501 * C12428) / q - (C11516 * p) / q;
    const double C9918 = C12677 - (C11215 * C12428) / q - (C9887 * p) / q;
    const double C9919 = C11215 / q - (C9887 * C12428) / q - (C10054 * p) / q;
    const double C9920 =
        (3 * C9887) / C3735 - (C10054 * C12428) / q - (C11558 * p) / q;
    const double C10071 =
        (2 * C10054) / q - (C11558 * C12428) / q - (C11704 * p) / q;
    const double C10270 = -(C10239 * C12428 + C12718) / q;
    const double C10286 = -(C10255 * C12428 + C12717) / q;
    const double C10335 = -(C11112 * C12428 + C12695) / q;
    const double C10528 = -(C10511 * C12428 + C12721) / q;
    const double C10559 = -(C11961 * C12428 + C12720) / q;
    const double C10822 = -(C11331 * C12428 + C12710) / q;
    const double C3738 = (C5238 * be) / q - (C3740 * C12427) / q +
                         (3 * C3758) / C3735 - (C5242 * p) / q;
    const double C3739 =
        (C5254 * be) / q - (C3758 * C12427) / q + C5258 / q - (C3740 * p) / q;
    const double C3741 = (C5270 * be) / q - (C5242 * C12427) / q +
                         (2 * C3740) / q - (C5274 * p) / q;
    const double C3757 =
        (C5285 * be) / q - (C5258 * C12427) / q + C12382 - (C3758 * p) / q;
    const double C3932 =
        (C5507 * be) / q - (C3934 * C12427) / q + C12397 - C12383 / q;
    const double C3933 =
        (C5522 * be) / q - (C4883 * C12427) / q + C12398 - C12385 / q;
    const double C3935 = (C5538 * be) / q - (C5304 * C12427) / q +
                         (3 * C3934) / C3735 - C12391 / q;
    const double C4028 =
        (C5626 * be) / q - (C4030 * C12427) / q + C12405 - C12387 / q;
    const double C4029 =
        (C5641 * be) / q - (C5065 * C12427) / q + C12406 - C12389 / q;
    const double C4031 = (C5657 * be) / q - (C5363 * C12427) / q +
                         (3 * C4030) / C3735 - C12393 / q;
    const double C4125 =
        (C5757 * be) / q - (C4127 * C12427) / q + C12346 - C12455;
    const double C4126 = (C5772 * be) / q - (C4144 * C12427) / q - C12460;
    const double C4128 =
        (C5787 * be) / q - (C5348 * C12427) / q + C4127 / q - C12454;
    const double C4316 = (C5977 * be) / q - (C4317 * C12427) / q - C12464;
    const double C4318 =
        (C5992 * be) / q - (C5805 * C12427) / q + C12354 - C12458;
    const double C4409 = (C6052 * be) / q - (C4410 * C12427) / q - C12468;
    const double C4411 =
        (C6067 * be) / q - (C5877 * C12427) / q + C12356 - C12461;
    const double C4505 =
        (C6167 * be) / q - (C4507 * C12427) / q + C12361 - C12457;
    const double C4506 = (C6182 * be) / q - (C4524 * C12427) / q - C12463;
    const double C4508 =
        (C6197 * be) / q - (C5407 * C12427) / q + C4507 / q - C12456;
    const double C4696 = (C6385 * be) / q - (C4697 * C12427) / q - C12471;
    const double C4698 =
        (C6400 * be) / q - (C6215 * C12427) / q + C12369 - C12459;
    const double C4788 = (C6444 * be) / q - (C4789 * C12427) / q - C12470;
    const double C4790 =
        (C6459 * be) / q - (C6272 * C12427) / q + C12371 - C12462;
    const double C4882 = (C6531 * be) / q - (C5526 * C12427) / q - C12392 / q;
    const double C4972 =
        (C6560 * be) / q - (C4974 * C12427) / q + C12381 - C12396 / q;
    const double C4973 = (C6575 * be) / q - (C5154 * C12427) / q - C12403 / q;
    const double C4975 =
        (C6590 * be) / q - (C5495 * C12427) / q + C12421 - C12395 / q;
    const double C5064 = (C6619 * be) / q - (C5645 * C12427) / q - C12394 / q;
    const double C6652 = C8108 / q - (C6671 * C12427) / q - (C6654 * p) / q;
    const double C6653 =
        (3 * C6671) / C3735 - (C6654 * C12427) / q - (C8123 * p) / q;
    const double C6655 =
        (2 * C6654) / q - (C8123 * C12427) / q - (C8138 * p) / q;
    const double C6670 = C12532 - (C8108 * C12427) / q - (C6671 * p) / q;
    const double C6933 = C12555 - (C7937 * C12427) / q - C12539 / q;
    const double C6934 = C12556 - (C6935 * C12427) / q - C12537 / q;
    const double C6936 =
        (3 * C6935) / C3735 - (C8226 * C12427) / q - C12543 / q;
    const double C7027 = -(C7045 * C12427 + C12552) / q;
    const double C7213 = -(C7212 * C12427 + C12559) / q;
    const double C7303 = -(C7302 * C12427 + C12560) / q;
    const double C7395 = -(C7413 * C12427 + C12558) / q;
    const double C7581 = -(C7580 * C12427 + C12573) / q;
    const double C7670 = -(C7669 * C12427 + C12574) / q;
    const double C7760 = -(C8373 * C12427 + C12542) / q;
    const double C7847 = -(C8023 * C12427 + C12553) / q;
    const double C7936 = -(C8489 * C12427 + C12544) / q;
    const double C9494 = C10950 / q - (C9513 * C12427) / q - (C9496 * p) / q;
    const double C9495 =
        (3 * C9513) / C3735 - (C9496 * C12427) / q - (C10965 * p) / q;
    const double C9497 =
        (2 * C9496) / q - (C10965 * C12427) / q - (C10980 * p) / q;
    const double C9512 = C12677 - (C10950 * C12427) / q - (C9513 * p) / q;
    const double C9682 = C12692 - (C10603 * C12427) / q - C12680 / q;
    const double C9683 = C12693 - (C9684 * C12427) / q - C12678 / q;
    const double C9685 =
        (3 * C9684) / C3735 - (C11009 * C12427) / q - C12686 / q;
    const double C9869 = -(C9887 * C12427 + C12697) / q;
    const double C10055 = -(C10054 * C12427 + C12704) / q;
    const double C10145 = -(C10144 * C12427 + C12705) / q;
    const double C10237 = -(C10255 * C12427 + C12703) / q;
    const double C10423 = -(C10422 * C12427 + C12718) / q;
    const double C10512 = -(C10511 * C12427 + C12719) / q;
    const double C10602 = -(C11215 * C12427 + C12687) / q;
    const double C10689 = -(C10865 * C12427 + C12698) / q;
    const double C10778 = -(C11331 * C12427 + C12689) / q;
    const double C7565 = C12569 - (C7580 * C12431) / q - C12616;
    const double C7686 = (C6444 * be) / q - (C7669 * C12428) / q - C12616;
    const double C7550 = C12571 - (C9064 * C12431) / q - C12615;
    const double C7717 = (C6459 * be) / q - (C9121 * C12428) / q - C12615;
    const double C7428 = (C6167 * be) / q - (C7397 * C12428) / q - C12614;
    const double C7790 = C12522 - (C7849 * C12431) / q - C12614;
    const double C7380 = C12547 - (C8023 * C12431) / q - C12613;
    const double C7444 = (C6182 * be) / q - (C7413 * C12428) / q - C12613;
    const double C7336 = C7302 / q - (C8775 * C12431) / q - C12612;
    const double C7687 =
        (C9333 * be) / q - (C9222 * C12428) / q + C12521 - C12612;
    const double C7244 = C12504 - (C8819 * C12431) / q - C12611;
    const double C7597 =
        (C9261 * be) / q - (C8775 * C12428) / q + C7580 / q - C12611;
    const double C7110 = C12496 - (C7302 * C12431) / q - C12610;
    const double C7445 =
        (C6385 * be) / q - (C7580 * C12428) / q + C12511 - C12610;
    const double C7094 = C12495 - (C8731 * C12431) / q - C12609;
    const double C7429 =
        (C6400 * be) / q - (C9064 * C12428) / q + C12510 - C12609;
    const double C6967 = C6935 / q - (C8270 * C12431) / q - C12607;
    const double C7671 = C12521 - (C9121 * C12427) / q - C12607;
    const double C6952 =
        (C6590 * be) / q - (C8358 * C12428) / q + C12491 - C12606;
    const double C7304 = C12506 - (C8731 * C12427) / q - C12606;
    const double C6873 = C12484 - (C8358 * C12431) / q - C12604;
    const double C7493 = (C6197 * be) / q - (C8270 * C12428) / q - C12604;
    const double C7582 = C12519 - (C9064 * C12427) / q - C12604;
    const double C6858 =
        (C5787 * be) / q - (C8211 * C12428) / q + C6842 / q - C12603;
    const double C7214 = C12504 - (C8659 * C12427) / q - C12603;
    const double C6951 = (C5626 * be) / q - (C6935 * C12428) / q - C12605;
    const double C7848 = C12531 - (C7849 * C12427) / q - C12605;
    const double C6983 = (C5657 * be) / q - (C8226 * C12428) / q - C12608;
    const double C7850 = C12571 - (C8358 * C12427) / q - C12608;
    const double C6750 = (C5270 * be) / q - (C8123 * C12428) / q - C12602;
    const double C6843 = (3 * C6842) / C3735 - (C8167 * C12427) / q - C12602;
    const double C6735 = C12477 - (C6935 * C12431) / q - C12601;
    const double C7396 = C12511 - (C7397 * C12427) / q - C12601;
    const double C6719 = C12476 - (C8226 * C12431) / q - C12600;
    const double C7398 = C7397 / q - (C8270 * C12427) / q - C12600;
    const double C6703 =
        (C5507 * be) / q - (C6842 * C12428) / q + C12477 - C12599;
    const double C7028 = C12496 - (C7029 * C12427) / q - C12599;
    const double C6702 = (C5254 * be) / q - (C6671 * C12428) / q - C12598;
    const double C6840 = C12547 - (C7761 * C12427) / q - C12598;
    const double C6687 =
        (C5538 * be) / q - (C8167 * C12428) / q + C12476 - C12597;
    const double C7030 = C7029 / q - (C8211 * C12427) / q - C12597;
    const double C6686 = (C5238 * be) / q - (C6654 * C12428) / q - C12596;
    const double C6841 = C12548 - (C6842 * C12427) / q - C12596;
    const double C10178 =
        (C9261 * be) / q - (C11617 * C12431) / q + C10144 / q - C12756;
    const double C10529 = C12666 - (C12062 * C12428) / q - C12756;
    const double C10129 = (C8858 * be) / q - (C11558 * C12431) / q - C12755;
    const double C10163 = (3 * C10144) / C3735 - (C11661 * C12428) / q - C12755;
    const double C10086 =
        (C8960 * be) / q - (C11661 * C12431) / q + C12649 - C12754;
    const double C10439 = C10422 / q - (C11617 * C12428) / q - C12754;
    const double C10039 = (C5977 * be) / q - (C10054 * C12431) / q - C12753;
    const double C10162 = C12714 - (C10144 * C12428) / q - C12753;
    const double C10023 = (C5992 * be) / q - (C11501 * C12431) / q - C12752;
    const double C10193 = C12716 - (C11573 * C12428) / q - C12752;
    const double C9952 =
        (C6052 * be) / q - (C10144 * C12431) / q + C12641 - C12751;
    const double C10287 = C12656 - (C10422 * C12428) / q - C12751;
    const double C9951 = (C5772 * be) / q - (C9887 * C12431) / q - C12750;
    const double C10161 = C12700 - (C10865 * C12428) / q - C12750;
    const double C9936 =
        (C6067 * be) / q - (C11573 * C12431) / q + C12640 - C12749;
    const double C10271 = C12655 - (C11904 * C12428) / q - C12749;
    const double C9935 = (C5757 * be) / q - (C9871 * C12431) / q - C12748;
    const double C10707 = C12672 - (C10691 * C12428) / q - C12748;
    const double C9809 =
        (C6197 * be) / q - (C11112 * C12431) / q + C9777 / q - C12747;
    const double C10513 = C12666 - (C11961 * C12427) / q - C12747;
    const double C9760 = (C5787 * be) / q - (C11053 * C12431) / q - C12746;
    const double C9794 = C12636 - (C11200 * C12428) / q - C12746;
    const double C10146 = C12651 - (C11573 * C12427) / q - C12746;
    const double C9715 =
        (C6590 * be) / q - (C11200 * C12431) / q + C12629 - C12745;
    const double C10424 = C12664 - (C11904 * C12427) / q - C12745;
    const double C9700 = C9684 / q - (C11053 * C12428) / q - C12744;
    const double C10056 = C12649 - (C11501 * C12427) / q - C12744;
    const double C9667 = (C5507 * be) / q - (C9684 * C12431) / q - C12743;
    const double C10690 = C12676 - (C10691 * C12427) / q - C12743;
    const double C9652 = (C5538 * be) / q - (C11009 * C12431) / q - C12742;
    const double C10692 = C12716 - (C11200 * C12427) / q - C12742;
    const double C9622 = (C5270 * be) / q - (C10965 * C12431) / q - C12741;
    const double C9778 = (3 * C9777) / C3735 - (C11068 * C12427) / q - C12741;
    const double C9577 =
        (C5626 * be) / q - (C9777 * C12431) / q + C12622 - C12740;
    const double C10238 = C12656 - (C10239 * C12427) / q - C12740;
    const double C9576 = (C5254 * be) / q - (C9513 * C12431) / q - C12739;
    const double C9775 = C12700 - (C10779 * C12427) / q - C12739;
    const double C9561 =
        (C5657 * be) / q - (C11068 * C12431) / q + C12621 - C12738;
    const double C10240 = C10239 / q - (C11112 * C12427) / q - C12738;
    const double C9560 = (C5238 * be) / q - (C9496 * C12431) / q - C12737;
    const double C9776 = C12701 - (C9777 * C12427) / q - C12737;
    const double C9545 = C12622 - (C9684 * C12428) / q - C12736;
    const double C9870 = C12641 - (C9871 * C12427) / q - C12736;
    const double C9529 = C12621 - (C11009 * C12428) / q - C12735;
    const double C9872 = C9871 / q - (C11053 * C12427) / q - C12735;
    const double C12330 = C3806 * p;
    const double C12339 = C3821 / C3735;
    const double C12331 = C3822 * p;
    const double C850 = (C3866 * be) / q - (C3805 * C12427) / q +
                        (3 * C3821) / C3735 - (C3870 * p) / q;
    const double C12375 = C3886 / C3735;
    const double C851 =
        (C3882 * be) / q - (C3821 * C12427) / q + C3886 / q - (C3805 * p) / q;
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
    const double C12489 = C6734 / C3735;
    const double C1841 =
        (3 * C6734) / C3735 - (C6718 * C12427) / q - (C6780 * p) / q;
    const double C12525 = C6795 / C3735;
    const double C1842 = C6795 / q - (C6734 * C12427) / q - (C6718 * p) / q;
    const double C12482 = C6810 * p;
    const double C12483 = C6825 * p;
    const double C12488 = C6903 / q;
    const double C12490 = C6918 * p;
    const double C12494 = C6998 / q;
    const double C12502 = C7093 * p;
    const double C12501 = C7109 / C3735;
    const double C12503 = C7181 * p;
    const double C12524 = C7196 / C3735;
    const double C2020 =
        (C4266 * be) / q - (C7109 * C12428) / q + C7196 / q - (C7197 * p) / q;
    const double C2074 = (C4375 * be) / q - (C7197 * C12428) / q +
                         (3 * C7109) / C3735 - (C7287 * p) / q;
    const double C12516 = C7460 * p;
    const double C12513 = C7461 * p;
    const double C12530 = C7476 / C3735;
    const double C12515 = C7477 / C3735;
    const double C2158 =
        C7476 / q - (C7477 * C12431) / q + C12511 - (C7478 * p) / q;
    const double C12520 = C7612 * p;
    const double C2269 =
        (3 * C7477) / C3735 - (C7478 * C12431) / q + C12521 - (C7702 * p) / q;
    const double C12670 = C9637 / C3735;
    const double C12633 = C9745 / q;
    const double C12639 = C9840 / q;
    const double C12669 = C10038 / C3735;
    const double C12654 = C10222 / q;
    const double C12661 = C10302 * p;
    const double C12658 = C10303 * p;
    const double C12660 = C10318 / C3735;
    const double C12675 = C10319 / C3735;
    const double C3118 = (C4647 * be) / q - (C10318 * C12431) / q + C10319 / q +
                         C12656 - (C10320 * p) / q;
    const double C12662 = C10392 * p;
    const double C12663 = C10407 * p;
    const double C12665 = C10454 * p;
    const double C3229 = (C4849 * be) / q - (C10320 * C12431) / q +
                         (3 * C10318) / C3735 + C12666 - (C10544 * p) / q;
    const double C12668 = C10632 * p;
    const double C12326 = C3774 * p;
    const double C12327 = C3790 * p;
    const double C839 = (C3834 * be) / q - (C3773 * C12427) / q +
                        (3 * C3789) / C3735 - (C3838 * p) / q;
    const double C840 =
        (C3850 * be) / q - (C3789 * C12427) / q + C3854 / q - (C3773 * p) / q;
    const double C12335 = C3950 * p;
    const double C12337 = C3981 / q;
    const double C12342 = C4047 * p;
    const double C952 =
        (C4074 * be) / q - (C4046 * C12427) / q + C4078 / q - (C4079 * p) / q;
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
    const double C1188 =
        (C4617 * be) / q - (C4555 * C12427) / q - (C4539 * p) / q;
    const double C1166 = C12361 - (C4555 * C12428) / q - (C4556 * p) / q;
    const double C1282 = C12371 - (C4805 * C12428) / q - (C4806 * p) / q;
    const double C1300 =
        (C4833 * be) / q - (C4805 * C12427) / q - (C4837 * p) / q;
    const double C12378 = C4990 * p;
    const double C12379 = C5109 / C3735;
    const double C12487 = C6888 / q;
    const double C12500 = C7060 * p;
    const double C12497 = C7061 * p;
    const double C1980 = (C4236 * be) / q - (C7076 * C12428) / q + C7077 / q +
                         C12496 - (C7078 * p) / q;
    const double C2038 = (C4360 * be) / q - (C7078 * C12428) / q +
                         (3 * C7076) / C3735 + C12504 - (C7229 * p) / q;
    const double C2092 = (C4455 * be) / q - (C7319 * C12428) / q + C7320 / q +
                         C12506 - (C7321 * p) / q;
    const double C12508 = C7351 * p;
    const double C12528 = C7865 * p;
    const double C12529 = C7980 / C3735;
    const double C2791 =
        (3 * C9544) / C3735 - (C9528 * C12427) / q - (C9592 * p) / q;
    const double C2792 = C9607 / q - (C9544 * C12427) / q - (C9528 * p) / q;
    const double C12632 = C9730 / q;
    const double C2902 = C9824 / q - (C9793 * C12427) / q - (C9825 * p) / q;
    const double C12645 = C9902 * p;
    const double C12642 = C9903 * p;
    const double C2940 =
        C9918 / q - (C9919 * C12428) / q + C12641 - (C9920 * p) / q;
    const double C2998 =
        (3 * C9919) / C3735 - (C9920 * C12428) / q + C12649 - (C10071 * p) / q;
    const double C12659 = C10286 / C3735;
    const double C3128 = -(C10286 * C12427 + C10270 * p) / q;
    const double C3238 = -(C10528 * C12427 + C10559 * p) / q;
    const double C12674 = C10822 / C3735;
    const double C806 = (C3733 * be) / q - (C3738 * C12427) / q +
                        (3 * C3739) / C3735 + C12322 - (C3741 * p) / q;
    const double C807 = (C3753 * be) / q - (C3739 * C12427) / q + C3757 / q +
                        C12323 - (C3738 * p) / q;
    const double C871 = (C3928 * be) / q - (C3932 * C12427) / q + C3933 / q +
                        C12334 - (C3935 * p) / q;
    const double C925 = (C4024 * be) / q - (C4028 * C12427) / q + C4029 / q +
                        C12341 - (C4031 * p) / q;
    const double C981 =
        (C4140 * be) / q - (C4126 * C12427) / q + C12346 - (C4125 * p) / q;
    const double C980 = (C4121 * be) / q - (C4125 * C12427) / q +
                        C4126 / C3735 + C12345 - (C4128 * p) / q;
    const double C1045 =
        (C4312 * be) / q - (C4316 * C12427) / q + C12354 - (C4318 * p) / q;
    const double C1099 =
        (C4405 * be) / q - (C4409 * C12427) / q + C12356 - (C4411 * p) / q;
    const double C1155 =
        (C4520 * be) / q - (C4506 * C12427) / q + C12361 - (C4505 * p) / q;
    const double C1154 = (C4501 * be) / q - (C4505 * C12427) / q +
                         C4506 / C3735 + C12360 - (C4508 * p) / q;
    const double C1219 =
        (C4692 * be) / q - (C4696 * C12427) / q + C12369 - (C4698 * p) / q;
    const double C1273 =
        (C4784 * be) / q - (C4788 * C12427) / q + C12371 - (C4790 * p) / q;
    const double C1328 = (C4878 * be) / q - (C3933 * C12427) / q +
                         C4882 / C3735 + C12372 - (C3932 * p) / q;
    const double C1646 =
        (C5150 * be) / q - (C4973 * C12427) / q + C12381 - (C4972 * p) / q;
    const double C1435 = (C4968 * be) / q - (C4972 * C12427) / q +
                         C4973 / C3735 + C12376 - (C4975 * p) / q;
    const double C1490 = (C5060 * be) / q - (C4029 * C12427) / q +
                         C5064 / C3735 + C12377 - (C4028 * p) / q;
    const double C1801 =
        (3 * C6652) / C3735 - (C6653 * C12427) / q + C12476 - (C6655 * p) / q;
    const double C1802 =
        C6670 / q - (C6652 * C12427) / q + C12477 - (C6653 * p) / q;
    const double C1915 =
        C6933 / q - (C6934 * C12427) / q + C12491 - (C6936 * p) / q;
    const double C2461 =
        C7936 / C3735 - (C6933 * C12427) / q + C12527 - (C6934 * p) / q;
    const double C2761 =
        (3 * C9494) / C3735 - (C9495 * C12427) / q + C12621 - (C9497 * p) / q;
    const double C2762 =
        C9512 / q - (C9494 * C12427) / q + C12622 - (C9495 * p) / q;
    const double C2821 =
        C9682 / q - (C9683 * C12427) / q + C12629 - (C9685 * p) / q;
    const double C3265 =
        C10602 / C3735 - (C9682 * C12427) / q + C12667 - (C9683 * p) / q;
    const double C12518 = C7565 * p;
    const double C12517 = C7550 * p;
    const double C2278 = -(C7686 * C12427 + C7717 * p) / q;
    const double C12523 = C7790 * p;
    const double C12509 = C7380 / q;
    const double C12514 = C7444 / C3735;
    const double C2168 = -(C7444 * C12427 + C7428 * p) / q;
    const double C12507 = C7336 * p;
    const double C2260 =
        (C4833 * be) / q - (C7686 * C12428) / q + C12521 - (C7687 * p) / q;
    const double C12505 = C7244 * p;
    const double C12499 = C7110 * p;
    const double C2148 =
        (C4617 * be) / q - (C7444 * C12428) / q + C12511 - (C7445 * p) / q;
    const double C12498 = C7094 * p;
    const double C12512 = C7429 * p;
    const double C12493 = C6967 * p;
    const double C2251 = C12521 - (C7670 * C12427) / q - (C7671 * p) / q;
    const double C12492 = C6952 * p;
    const double C2083 = C12506 - (C7303 * C12427) / q - (C7304 * p) / q;
    const double C12486 = C6873 * p;
    const double C2197 = C12519 - (C7581 * C12427) / q - (C7582 * p) / q;
    const double C12485 = C6858 * p;
    const double C2029 = C12504 - (C7213 * C12427) / q - (C7214 * p) / q;
    const double C2611 = C12531 - (C7847 * C12427) / q - (C7848 * p) / q;
    const double C1942 = C6982 / q - (C6951 * C12427) / q - (C6983 * p) / q;
    const double C2407 =
        C7847 / C3735 - (C7848 * C12427) / q + C12526 - (C7850 * p) / q;
    const double C12481 = C6735 * p;
    const double C2138 = C12511 - (C7395 * C12427) / q - (C7396 * p) / q;
    const double C12480 = C6719 * p;
    const double C2137 =
        C7395 / C3735 - (C7396 * C12427) / q + C12510 - (C7398 * p) / q;
    const double C12479 = C6703 * p;
    const double C1970 = C12496 - (C7027 * C12427) / q - (C7028 * p) / q;
    const double C12478 = C6687 * p;
    const double C1969 =
        C7027 / C3735 - (C7028 * C12427) / q + C12495 - (C7030 * p) / q;
    const double C1831 =
        (3 * C6702) / C3735 - (C6686 * C12427) / q - (C6750 * p) / q;
    const double C1832 = C6765 / q - (C6702 * C12427) / q - (C6686 * p) / q;
    const double C1861 =
        C6840 / q - (C6841 * C12427) / q + C12484 - (C6843 * p) / q;
    const double C2305 =
        C7760 / C3735 - (C6840 * C12427) / q + C12522 - (C6841 * p) / q;
    const double C12652 = C10178 * p;
    const double C3220 = C12666 - (C10528 * C12428) / q - (C10529 * p) / q;
    const double C12650 = C10086 * p;
    const double C12648 = C10023 * p;
    const double C12653 = C10193 * p;
    const double C12644 = C9952 * p;
    const double C3108 = C12656 - (C10286 * C12428) / q - (C10287 * p) / q;
    const double C12646 = C9951 / C3735;
    const double C2980 = C10038 / q - (C9951 * C12428) / q - (C10039 * p) / q;
    const double C3034 =
        (3 * C9951) / C3735 - (C10039 * C12428) / q - (C10129 * p) / q;
    const double C3052 =
        C10161 / q - (C10162 * C12428) / q + C12651 - (C10163 * p) / q;
    const double C12643 = C9936 * p;
    const double C12657 = C10271 * p;
    const double C12647 = C9935 * p;
    const double C12673 = C10707 * p;
    const double C12638 = C9809 * p;
    const double C3211 = C12666 - (C10512 * C12427) / q - (C10513 * p) / q;
    const double C12635 = C9760 * p;
    const double C12637 = C9794 * p;
    const double C3043 = C12651 - (C10145 * C12427) / q - (C10146 * p) / q;
    const double C12631 = C9715 * p;
    const double C3157 = C12664 - (C10423 * C12427) / q - (C10424 * p) / q;
    const double C12630 = C9700 * p;
    const double C2989 = C12649 - (C10055 * C12427) / q - (C10056 * p) / q;
    const double C12628 = C9667 * p;
    const double C3571 = C12676 - (C10689 * C12427) / q - (C10690 * p) / q;
    const double C12627 = C9652 * p;
    const double C3367 =
        C10689 / C3735 - (C10690 * C12427) / q + C12671 - (C10692 * p) / q;
    const double C12626 = C9577 * p;
    const double C3098 = C12656 - (C10237 * C12427) / q - (C10238 * p) / q;
    const double C12634 = C9576 / C3735;
    const double C12625 = C9561 * p;
    const double C3097 =
        C10237 / C3735 - (C10238 * C12427) / q + C12655 - (C10240 * p) / q;
    const double C2801 =
        (3 * C9576) / C3735 - (C9560 * C12427) / q - (C9622 * p) / q;
    const double C2802 = C9637 / q - (C9576 * C12427) / q - (C9560 * p) / q;
    const double C2875 =
        C9775 / q - (C9776 * C12427) / q + C12636 - (C9778 * p) / q;
    const double C3421 =
        C10778 / C3735 - (C9775 * C12427) / q + C12672 - (C9776 * p) / q;
    const double C12624 = C9545 * p;
    const double C2930 = C12641 - (C9869 * C12427) / q - (C9870 * p) / q;
    const double C12623 = C9529 * p;
    const double C2929 =
        C9869 / C3735 - (C9870 * C12427) / q + C12640 - (C9872 * p) / q;
    const double C12432 = C12330 / q;
    const double C12433 = C12331 / q;
    const double C861 = -(C3805 * C12428 + C12332) / q;
    const double C862 = -(C3821 * C12428 + C12333) / q;
    const double C12435 = C12336 / q;
    const double C970 = -(C3822 * C12428 + C12336) / q;
    const double C907 =
        (C3993 * be) / q - (C3916 * C12427) / q + C12338 - C12332 / q;
    const double C12436 = C12340 / q;
    const double C12438 = C12343 / q;
    const double C12443 = C12352 / q;
    const double C12440 = C12348 / q;
    const double C12441 = C12349 / q;
    const double C12444 = C12353 / q;
    const double C1368 =
        (C4939 * be) / q - (C3997 * C12427) / q + C12374 - C12333 / q;
    const double C12445 = C12355 / q;
    const double C12446 = C12357 / q;
    const double C12450 = C12366 / q;
    const double C12449 = C12363 / q;
    const double C12451 = C12367 / q;
    const double C1209 = -(C4571 * C12428 + C12367) / q;
    const double C1210 = -(C4588 * C12428 + C12368) / q;
    const double C1666 = C12374 - (C4489 * C12431) / q + C12381 - C12368 / q;
    const double C1237 = C12359 - (C4680 * C12431) / q + C12369 - C12370 / q;
    const double C1318 = -(C4589 * C12428 + C12370) / q;
    const double C12452 = C12373 / q;
    const double C1540 = -(C4095 * C12428 + C12373) / q;
    const double C12581 = C12482 / q;
    const double C12582 = C12483 / q;
    const double C12585 = C12490 / q;
    const double C2010 = -(C7109 * C12427 + C12502) / q;
    const double C2350 =
        (C4939 * be) / q - (C6903 * C12428) / q + C12525 - C12502 / q;
    const double C2019 =
        (C4251 * be) / q - (C7093 * C12428) / q + C12488 - C12503 / q;
    const double C2065 = -(C7197 * C12427 + C12503) / q;
    const double C2178 = -(C7477 * C12427 + C12516) / q;
    const double C2479 = C12525 - (C6998 * C12431) / q + C12527 - C12516 / q;
    const double C2157 = C12494 - (C7460 * C12431) / q + C12510 - C12513 / q;
    const double C2287 = -(C7478 * C12427 + C12513) / q;
    const double C12594 = C12520 / q;
    const double C3138 = -(C10318 * C12427 + C12661) / q;
    const double C3439 =
        (C5121 * be) / q - (C9840 * C12431) / q + C12670 + C12672 - C12661 / q;
    const double C3117 =
        (C4632 * be) / q - (C10302 * C12431) / q + C12639 + C12655 - C12658 / q;
    const double C3247 = -(C10320 * C12427 + C12658) / q;
    const double C3147 = -(C10302 * C12428 + C12662) / q;
    const double C3193 = -(C10407 * C12427 + C12662) / q;
    const double C3385 = (C5031 * be) / q - (C10632 * C12431) / q +
                         C9745 / C3735 + C12671 - C12662 / q;
    const double C3148 = -(C10318 * C12428 + C12663) / q;
    const double C3589 =
        (C5209 * be) / q - (C10222 * C12431) / q + C12669 + C12676 - C12663 / q;
    const double C3175 =
        (C4755 * be) / q - (C10407 * C12431) / q + C12654 + C12664 - C12665 / q;
    const double C3256 = -(C10320 * C12428 + C12665) / q;
    const double C3283 =
        (C4939 * be) / q - (C9745 * C12431) / q + C12667 - C12668 / q;
    const double C3466 = -(C9840 * C12428 + C12668) / q;
    const double C3607 = -(C10222 * C12427 + C12668) / q;
    const double C12429 = C12326 / q;
    const double C12430 = C12327 / q;
    const double C12434 = C12335 / q;
    const double C12437 = C12342 / q;
    const double C12442 = C12350 / q;
    const double C12439 = C12347 / q;
    const double C12447 = C12358 / q;
    const double C12448 = C12362 / q;
    const double C1187 =
        (C4601 * be) / q - (C4539 * C12427) / q + C12364 - (C4605 * p) / q;
    const double C1228 =
        C12364 - (C4556 * C12428) / q + C12369 - (C4713 * p) / q;
    const double C12453 = C12378 / q;
    const double C1520 =
        (C5105 * be) / q - (C4078 * C12427) / q + C12379 - (C4046 * p) / q;
    const double C1656 =
        C12379 - (C4426 * C12428) / q + C12381 - (C4427 * p) / q;
    const double C2000 = -(C7076 * C12427 + C12500) / q;
    const double C2314 = (C4924 * be) / q - (C6888 * C12428) / q +
                         C6765 / C3735 + C12522 - C12500 / q;
    const double C1979 =
        (C4221 * be) / q - (C7060 * C12428) / q + C12487 + C12495 - C12497 / q;
    const double C2056 = -(C7078 * C12427 + C12497) / q;
    const double C2110 = -(C7319 * C12427 + C12508) / q;
    const double C2416 = (C5016 * be) / q - (C7865 * C12428) / q +
                         C6982 / C3735 + C12526 - C12508 / q;
    const double C2470 =
        (C5105 * be) / q - (C6982 * C12428) / q + C12527 - C12528 / q;
    const double C2638 = -(C7320 * C12427 + C12528) / q;
    const double C2488 = C12529 - (C6982 * C12427) / q - (C6951 * p) / q;
    const double C2620 = (C5194 * be) / q - (C7320 * C12428) / q + C12529 +
                         C12531 - (C7319 * p) / q;
    const double C2960 = -(C9919 * C12427 + C12645) / q;
    const double C3274 =
        C9607 / C3735 - (C9730 * C12428) / q + C12667 - C12645 / q;
    const double C2939 = C12632 - (C9902 * C12428) / q + C12640 - C12642 / q;
    const double C3016 = -(C9920 * C12427 + C12642) / q;
    const double C3127 = C12659 - (C10270 * C12427) / q - (C10335 * p) / q;
    const double C3166 =
        C12659 - (C10287 * C12428) / q + C12664 - (C10439 * p) / q;
    const double C3448 = C12674 - (C9824 * C12427) / q - (C9793 * p) / q;
    const double C3580 =
        C12674 - (C10161 * C12428) / q + C12676 - (C10162 * p) / q;
    const double C12593 = C12518 / q;
    const double C12592 = C12517 / q;
    const double C2233 = -(C7565 * C12427 + C12517) / q;
    const double C12595 = C12523 / q;
    const double C2647 = -(C7380 * C12427 + C12523) / q;
    const double C2167 = C12514 - (C7428 * C12427) / q - (C7493 * p) / q;
    const double C2206 = (C4740 * be) / q - (C7445 * C12428) / q + C12514 +
                         C12519 - (C7597 * p) / q;
    const double C12591 = C12507 / q;
    const double C12590 = C12505 / q;
    const double C12589 = C12499 / q;
    const double C12588 = C12498 / q;
    const double C2119 = -(C7110 * C12427 + C12498) / q;
    const double C2147 =
        (C4601 * be) / q - (C7428 * C12428) / q + C12510 - C12512 / q;
    const double C2224 = -(C7445 * C12427 + C12512) / q;
    const double C12587 = C12493 / q;
    const double C12586 = C12492 / q;
    const double C12584 = C12486 / q;
    const double C12583 = C12485 / q;
    const double C12580 = C12481 / q;
    const double C12579 = C12480 / q;
    const double C12578 = C12479 / q;
    const double C12577 = C12478 / q;
    const double C12734 = C12652 / q;
    const double C12733 = C12650 / q;
    const double C2979 = C12633 - (C9935 * C12428) / q - C12648 / q;
    const double C3025 = -(C10039 * C12427 + C12648) / q;
    const double C3070 = -(C10162 * C12427 + C12653) / q;
    const double C3376 =
        C9824 / C3735 - (C10707 * C12428) / q + C12671 - C12653 / q;
    const double C12732 = C12644 / q;
    const double C12731 = C12643 / q;
    const double C3079 = -(C9952 * C12427 + C12643) / q;
    const double C3107 = C12655 - (C10270 * C12428) / q - C12657 / q;
    const double C3184 = -(C10287 * C12427 + C12657) / q;
    const double C2970 = -(C9951 * C12427 + C12647) / q;
    const double C3310 = C12670 - (C9745 * C12428) / q - C12647 / q;
    const double C3430 = C12672 - (C9824 * C12428) / q - C12673 / q;
    const double C3598 = -(C10161 * C12427 + C12673) / q;
    const double C12730 = C12638 / q;
    const double C12728 = C12635 / q;
    const double C12729 = C12637 / q;
    const double C12727 = C12631 / q;
    const double C2920 = -(C9577 * C12428 + C12631) / q;
    const double C12726 = C12630 / q;
    const double C2812 = -(C9576 * C12428 + C12628) / q;
    const double C3301 = C12669 - (C9745 * C12427) / q - C12628 / q;
    const double C2811 = -(C9560 * C12428 + C12627) / q;
    const double C2857 = C12633 - (C9667 * C12427) / q - C12627 / q;
    const double C12725 = C12626 / q;
    const double C12724 = C12625 / q;
    const double C12723 = C12624 / q;
    const double C12722 = C12623 / q;
    const double C828 = C12322 - (C3805 * C12431) / q - C12432;
    const double C961 =
        (C4091 * be) / q - (C3822 * C12427) / q + C12344 - C12432;
    const double C829 = C12323 - (C3821 * C12431) / q - C12433;
    const double C1530 =
        (C5121 * be) / q - (C4095 * C12427) / q + C12380 - C12433;
    const double C889 = C12334 - (C3916 * C12431) / q - C12435;
    const double C1471 =
        (C5031 * be) / q - (C4912 * C12427) / q + C4489 / C3735 - C12435;
    const double C916 = C12339 - (C3916 * C12428) / q - C12436;
    const double C1024 =
        (C4251 * be) / q - (C4192 * C12427) / q + C12351 - C12436;
    const double C943 = C12339 - (C3822 * C12431) / q + C12341 - C12438;
    const double C1198 =
        (C4632 * be) / q - (C4571 * C12427) / q + C12365 - C12438;
    const double C1025 = (C4266 * be) / q - (C4208 * C12427) / q - C12443;
    const double C1378 = C12375 - (C3997 * C12428) / q - C12443;
    const double C1002 = C12345 - (C4192 * C12431) / q - C12440;
    const double C1135 = (C4471 * be) / q - (C4209 * C12427) / q - C12440;
    const double C1480 = C4095 / C3735 - (C4912 * C12428) / q - C12440;
    const double C1003 = C12346 - (C4208 * C12431) / q - C12441;
    const double C1696 = C12380 - (C4489 * C12428) / q - C12441;
    const double C1035 = C12338 - (C4192 * C12428) / q - C12444;
    const double C1081 = (C4375 * be) / q - (C4300 * C12427) / q - C12444;
    const double C1063 = C12354 - (C4300 * C12431) / q - C12445;
    const double C1144 = C12359 - (C4209 * C12428) / q - C12445;
    const double C1117 = C12351 - (C4209 * C12431) / q + C12356 - C12446;
    const double C1264 = C12365 - (C4680 * C12428) / q - C12446;
    const double C1199 = (C4647 * be) / q - (C4588 * C12427) / q - C12450;
    const double C1510 = C12375 - (C4095 * C12431) / q + C12377 - C12450;
    const double C1176 = C12344 - (C4571 * C12431) / q + C12360 - C12449;
    const double C1309 = (C4849 * be) / q - (C4589 * C12427) / q - C12449;
    const double C1255 = (C4755 * be) / q - (C4680 * C12427) / q - C12451;
    const double C1453 = C3997 / C3735 - (C4912 * C12431) / q + C12376 - C12451;
    const double C1348 = C12372 - (C3997 * C12431) / q - C12452;
    const double C1686 = (C5209 * be) / q - (C4489 * C12427) / q - C12452;
    const double C1851 = (C3866 * be) / q - (C6718 * C12428) / q - C12581;
    const double C1897 = C12488 - (C6825 * C12427) / q - C12581;
    const double C1852 = (C3882 * be) / q - (C6734 * C12428) / q - C12582;
    const double C2341 = C12524 - (C6903 * C12427) / q - C12582;
    const double C1906 =
        (C3993 * be) / q - (C6825 * C12428) / q + C12489 - C12585;
    const double C2009 = C12501 - (C7093 * C12427) / q - C12585;
    const double C2215 = C12509 - (C7565 * C12431) / q + C12519 - C12594;
    const double C2296 = (C4849 * be) / q - (C7478 * C12428) / q - C12594;
    const double C817 = C12322 - (C3773 * C12428) / q - C12429;
    const double C898 =
        (C3977 * be) / q - (C3790 * C12427) / q + C12337 - C12429;
    const double C818 = C12323 - (C3789 * C12428) / q - C12430;
    const double C1358 =
        (C4924 * be) / q - (C3981 * C12427) / q + C4175 / C3735 - C12430;
    const double C880 = C3789 / C3735 - (C3790 * C12428) / q + C12334 - C12434;
    const double C1013 =
        (C4221 * be) / q - (C4159 * C12427) / q + C4176 / C3735 - C12434;
    const double C934 = C12341 - (C4046 * C12428) / q - C12437;
    const double C1462 =
        (C5016 * be) / q - (C4990 * C12427) / q + C4426 / C3735 - C12437;
    const double C1014 = (C4236 * be) / q - (C4176 * C12427) / q - C12442;
    const double C1338 = C3854 / C3735 - (C3981 * C12428) / q + C12372 - C12442;
    const double C991 = C12337 - (C4159 * C12428) / q + C12345 - C12439;
    const double C1072 = (C4360 * be) / q - (C4177 * C12427) / q - C12439;
    const double C1126 = (C4455 * be) / q - (C4427 * C12427) / q - C12447;
    const double C1444 = C4078 / C3735 - (C4990 * C12428) / q + C12376 - C12447;
    const double C1165 = C12360 - (C4539 * C12428) / q - C12448;
    const double C1246 = (C4740 * be) / q - (C4556 * C12427) / q - C12448;
    const double C1500 = C12377 - (C4078 * C12428) / q - C12453;
    const double C1676 = (C5194 * be) / q - (C4426 * C12427) / q - C12453;
    const double C2188 = (C4647 * be) / q - (C7477 * C12428) / q - C12593;
    const double C2629 = C12524 - (C7380 * C12431) / q + C12531 - C12593;
    const double C2187 = (C4632 * be) / q - (C7460 * C12428) / q - C12592;
    const double C2425 = C6903 / C3735 - (C7790 * C12431) / q + C12526 - C12592;
    const double C2323 = C12522 - (C6903 * C12431) / q - C12595;
    const double C2506 = (C5121 * be) / q - (C6998 * C12428) / q - C12595;
    const double C2101 = C12501 - (C7110 * C12431) / q + C12506 - C12591;
    const double C2242 =
        (C4755 * be) / q - (C7565 * C12428) / q + C12515 - C12591;
    const double C2047 = C12504 - (C7197 * C12431) / q - C12590;
    const double C2128 =
        (C4471 * be) / q - (C7110 * C12428) / q + C12509 - C12590;
    const double C1990 = C12496 - (C7109 * C12431) / q - C12589;
    const double C2656 =
        (C5209 * be) / q - (C7380 * C12428) / q + C12530 - C12589;
    const double C1989 = C12495 - (C7093 * C12431) / q - C12588;
    const double C2452 =
        (C5031 * be) / q - (C7790 * C12428) / q + C6998 / C3735 - C12588;
    const double C1933 = C12489 - (C6735 * C12431) / q + C12491 - C12587;
    const double C2177 = C12515 - (C7460 * C12427) / q - C12587;
    const double C1924 =
        (C4074 * be) / q - (C6951 * C12428) / q + C12491 - C12586;
    const double C2434 = C7320 / C3735 - (C7865 * C12427) / q - C12586;
    const double C1879 = C12484 - (C6825 * C12431) / q - C12584;
    const double C1960 = (C4091 * be) / q - (C6735 * C12428) / q - C12584;
    const double C2443 = C7380 / C3735 - (C7790 * C12427) / q - C12584;
    const double C1870 = (C3977 * be) / q - (C6703 * C12428) / q +
                         C6702 / C3735 + C12484 - C12583;
    const double C1999 = C7076 / C3735 - (C7060 * C12427) / q - C12583;
    const double C1822 = C12477 - (C6734 * C12431) / q - C12580;
    const double C2497 = C12530 - (C6998 * C12427) / q - C12580;
    const double C1821 = C12476 - (C6718 * C12431) / q - C12579;
    const double C1951 = C12494 - (C6735 * C12427) / q - C12579;
    const double C1812 =
        (C3850 * be) / q - (C6702 * C12428) / q + C12477 - C12578;
    const double C2332 = C7077 / C3735 - (C6888 * C12427) / q - C12578;
    const double C1811 =
        (C3834 * be) / q - (C6686 * C12428) / q + C12476 - C12577;
    const double C1888 = C12487 - (C6703 * C12427) / q - C12577;
    const double C3061 =
        (C4471 * be) / q - (C9952 * C12431) / q + C12646 + C12651 - C12734;
    const double C3202 = C12660 - (C10407 * C12428) / q - C12734;
    const double C3007 =
        (C4375 * be) / q - (C10039 * C12431) / q + C12649 - C12733;
    const double C3088 = C12654 - (C9952 * C12428) / q - C12733;
    const double C2950 =
        (C4266 * be) / q - (C9951 * C12431) / q + C12641 - C12732;
    const double C3616 = C12675 - (C10222 * C12428) / q - C12732;
    const double C2949 =
        (C4251 * be) / q - (C9935 * C12431) / q + C12640 - C12731;
    const double C3412 = C9840 / C3735 - (C10632 * C12428) / q - C12731;
    const double C2893 =
        (C4091 * be) / q - (C9577 * C12431) / q + C12634 + C12636 - C12730;
    const double C3137 = C12660 - (C10302 * C12427) / q - C12730;
    const double C2866 = C12634 - (C9667 * C12428) / q - C12728;
    const double C2969 = C12646 - (C9935 * C12427) / q - C12728;
    const double C2884 = C12636 - (C9793 * C12428) / q - C12729;
    const double C3394 = C10161 / C3735 - (C10707 * C12427) / q - C12729;
    const double C2839 =
        (C3993 * be) / q - (C9667 * C12431) / q + C12629 - C12727;
    const double C3403 = C10222 / C3735 - (C10632 * C12427) / q - C12727;
    const double C2830 = C9544 / C3735 - (C9545 * C12428) / q + C12629 - C12726;
    const double C2959 = C9919 / C3735 - (C9902 * C12427) / q - C12726;
    const double C2782 =
        (C3882 * be) / q - (C9576 * C12431) / q + C12622 - C12725;
    const double C3457 = C12675 - (C9840 * C12427) / q - C12725;
    const double C2781 =
        (C3866 * be) / q - (C9560 * C12431) / q + C12621 - C12724;
    const double C2911 = C12639 - (C9577 * C12427) / q - C12724;
    const double C2772 = C12622 - (C9544 * C12428) / q - C12723;
    const double C3292 = C9918 / C3735 - (C9730 * C12427) / q - C12723;
    const double C2771 = C12621 - (C9528 * C12428) / q - C12722;
    const double C2848 = C12632 - (C9545 * C12427) / q - C12722;
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
