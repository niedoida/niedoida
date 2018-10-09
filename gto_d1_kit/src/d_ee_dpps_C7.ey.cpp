/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2011_3_et(const double ae,
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
    const double C26981 = g[0];
    const double C27010 = g[1];
    const double C27037 = g[2];
    const double C27062 = g[3];
    const double C27091 = g[4];
    const double C27118 = g[5];
    const double C27143 = g[6];
    const double C27172 = g[7];
    const double C27199 = g[8];
    const double C27224 = g[9];
    const double C27253 = g[10];
    const double C27280 = g[11];
    const double C27305 = g[12];
    const double C27334 = g[13];
    const double C27361 = g[14];
    const double C27386 = g[15];
    const double C27415 = g[16];
    const double C27442 = g[17];
    const double C28435 = g[18];
    const double C28575 = g[19];
    const double C28715 = g[20];
    const double C28856 = g[21];
    const double C28988 = g[22];
    const double C29120 = g[23];
    const double C29233 = g[24];
    const double C29249 = g[25];
    const double C29368 = g[26];
    const double C29485 = g[27];
    const double C29587 = g[28];
    const double C29602 = g[29];
    const double C29631 = g[30];
    const double C29646 = g[31];
    const double C29703 = g[32];
    const double C30730 = g[33];
    const double C30834 = g[34];
    const double C31018 = g[35];
    const double C32176 = g[36];
    const double C28422 = vrx[0];
    const double C28439 = vrx[1];
    const double C28440 = vrx[2];
    const double C28487 = vrx[3];
    const double C28532 = vrx[4];
    const double C28562 = vrx[5];
    const double C28579 = vrx[6];
    const double C28624 = vrx[7];
    const double C28625 = vrx[8];
    const double C28672 = vrx[9];
    const double C28702 = vrx[10];
    const double C28719 = vrx[11];
    const double C28764 = vrx[12];
    const double C28809 = vrx[13];
    const double C28810 = vrx[14];
    const double C28843 = vrx[15];
    const double C28944 = vrx[16];
    const double C28975 = vrx[17];
    const double C29107 = vrx[18];
    const double C29237 = vrx[19];
    const double C29253 = vrx[20];
    const double C29282 = vrx[21];
    const double C29311 = vrx[22];
    const double C29326 = vrx[23];
    const double C29341 = vrx[24];
    const double C29356 = vrx[25];
    const double C29386 = vrx[26];
    const double C29401 = vrx[27];
    const double C29429 = vrx[28];
    const double C29458 = vrx[29];
    const double C29473 = vrx[30];
    const double C29503 = vrx[31];
    const double C29518 = vrx[32];
    const double C29547 = vrx[33];
    const double C29575 = vrx[34];
    const double C29737 = vry[0];
    const double C29753 = vry[1];
    const double C29754 = vry[2];
    const double C29801 = vry[3];
    const double C29846 = vry[4];
    const double C29876 = vry[5];
    const double C29892 = vry[6];
    const double C29937 = vry[7];
    const double C29938 = vry[8];
    const double C29985 = vry[9];
    const double C30015 = vry[10];
    const double C30031 = vry[11];
    const double C30076 = vry[12];
    const double C30121 = vry[13];
    const double C30122 = vry[14];
    const double C30154 = vry[15];
    const double C30254 = vry[16];
    const double C30285 = vry[17];
    const double C30416 = vry[18];
    const double C30544 = vry[19];
    const double C30559 = vry[20];
    const double C30588 = vry[21];
    const double C30617 = vry[22];
    const double C30632 = vry[23];
    const double C30647 = vry[24];
    const double C30662 = vry[25];
    const double C30691 = vry[26];
    const double C30706 = vry[27];
    const double C30735 = vry[28];
    const double C30764 = vry[29];
    const double C30779 = vry[30];
    const double C30808 = vry[31];
    const double C30823 = vry[32];
    const double C30853 = vry[33];
    const double C30881 = vry[34];
    const double C31039 = vrz[0];
    const double C31055 = vrz[1];
    const double C31056 = vrz[2];
    const double C31103 = vrz[3];
    const double C31148 = vrz[4];
    const double C31178 = vrz[5];
    const double C31194 = vrz[6];
    const double C31239 = vrz[7];
    const double C31240 = vrz[8];
    const double C31287 = vrz[9];
    const double C31317 = vrz[10];
    const double C31333 = vrz[11];
    const double C31378 = vrz[12];
    const double C31423 = vrz[13];
    const double C31424 = vrz[14];
    const double C31456 = vrz[15];
    const double C31556 = vrz[16];
    const double C31587 = vrz[17];
    const double C31718 = vrz[18];
    const double C31846 = vrz[19];
    const double C31861 = vrz[20];
    const double C31890 = vrz[21];
    const double C31919 = vrz[22];
    const double C31934 = vrz[23];
    const double C31949 = vrz[24];
    const double C31964 = vrz[25];
    const double C31993 = vrz[26];
    const double C32008 = vrz[27];
    const double C32036 = vrz[28];
    const double C32065 = vrz[29];
    const double C32080 = vrz[30];
    const double C32109 = vrz[31];
    const double C32124 = vrz[32];
    const double C32153 = vrz[33];
    const double C32182 = vrz[34];
    const double C28839 = 2 * q;
    const double C32376 = C29107 / q;
    const double C32375 = C28975 / q;
    const double C32374 = C29503 * p;
    const double C32373 = C29473 * p;
    const double C32372 = C29458 * p;
    const double C32371 = C29107 * p;
    const double C32370 = C29401 * p;
    const double C32369 = C28843 / q;
    const double C32368 = C29356 * p;
    const double C32367 = C29341 * p;
    const double C32366 = C29326 * p;
    const double C32365 = C29311 * p;
    const double C32364 = C28975 * p;
    const double C32363 = C29282 * p;
    const double C32362 = C28843 * p;
    const double C32353 = C28944 * p;
    const double C32346 = C28764 * p;
    const double C32344 = C28719 * p;
    const double C32341 = C28672 * p;
    const double C32338 = C28579 * p;
    const double C32335 = C28532 * p;
    const double C32334 = de * zCD;
    const double C32333 = be * zAB;
    const double C32330 = C28487 * p;
    const double C32329 = de * yCD;
    const double C32328 = be * yAB;
    const double C32326 = de * xCD;
    const double C32325 = be * xAB;
    const double C32435 = C30416 / q;
    const double C32434 = C30285 / q;
    const double C32433 = C30808 * p;
    const double C32432 = C30779 * p;
    const double C32431 = C30764 * p;
    const double C32430 = C30416 * p;
    const double C32429 = C30706 * p;
    const double C32428 = C30154 / q;
    const double C32427 = C30662 * p;
    const double C32426 = C30647 * p;
    const double C32425 = C30632 * p;
    const double C32424 = C30617 * p;
    const double C32423 = C30285 * p;
    const double C32422 = C30588 * p;
    const double C32421 = C30154 * p;
    const double C32412 = C30254 * p;
    const double C32405 = C30076 * p;
    const double C32403 = C30031 * p;
    const double C32400 = C29985 * p;
    const double C32397 = C29892 * p;
    const double C32394 = C29846 * p;
    const double C32391 = C29801 * p;
    const double C32491 = C31718 / q;
    const double C32490 = C31587 / q;
    const double C32489 = C32109 * p;
    const double C32488 = C32080 * p;
    const double C32487 = C32065 * p;
    const double C32486 = C31718 * p;
    const double C32485 = C32008 * p;
    const double C32484 = C31456 / q;
    const double C32483 = C31964 * p;
    const double C32482 = C31949 * p;
    const double C32481 = C31934 * p;
    const double C32480 = C31919 * p;
    const double C32479 = C31587 * p;
    const double C32478 = C31890 * p;
    const double C32477 = C31456 * p;
    const double C32468 = C31556 * p;
    const double C32461 = C31378 * p;
    const double C32459 = C31333 * p;
    const double C32456 = C31287 * p;
    const double C32453 = C31194 * p;
    const double C32450 = C31148 * p;
    const double C32447 = C31103 * p;
    const double C32361 = C29237 / C28839;
    const double C32360 = C29107 / C28839;
    const double C32356 = C28809 / C28839;
    const double C32355 = C28975 / C28839;
    const double C32351 = C28439 / C28839;
    const double C32349 = C28624 / C28839;
    const double C32348 = C28843 / C28839;
    const double C32343 = C28702 / C28839;
    const double C32337 = C28562 / C28839;
    const double C32327 = C28422 / C28839;
    const double C32420 = C30544 / C28839;
    const double C32419 = C30416 / C28839;
    const double C32415 = C30121 / C28839;
    const double C32414 = C30285 / C28839;
    const double C32410 = C29753 / C28839;
    const double C32408 = C29937 / C28839;
    const double C32407 = C30154 / C28839;
    const double C32402 = C30015 / C28839;
    const double C32396 = C29876 / C28839;
    const double C32390 = C29737 / C28839;
    const double C32476 = C31846 / C28839;
    const double C32475 = C31718 / C28839;
    const double C32471 = C31423 / C28839;
    const double C32470 = C31587 / C28839;
    const double C32466 = C31055 / C28839;
    const double C32464 = C31239 / C28839;
    const double C32463 = C31456 / C28839;
    const double C32458 = C31317 / C28839;
    const double C32452 = C31178 / C28839;
    const double C32446 = C31039 / C28839;
    const double C32385 = C32373 / q;
    const double C32384 = C32368 / q;
    const double C32383 = C32366 / q;
    const double C32380 = C32333 + C32334;
    const double C32378 = C32328 + C32329;
    const double C32377 = C32325 + C32326;
    const double C32441 = C32432 / q;
    const double C32440 = C32427 / q;
    const double C32439 = C32425 / q;
    const double C32497 = C32488 / q;
    const double C32496 = C32483 / q;
    const double C32495 = C32481 / q;
    const double C27040 = -(C28422 * C32380 + C32335) / q;
    const double C27121 = -(C28562 * C32380 + C32341) / q;
    const double C27202 = C28809 / q - (C28702 * C32380) / q - (C28810 * p) / q;
    const double C27283 = -(C28843 * C32380 + C32353) / q;
    const double C27364 = C32351 - (C28975 * C32380) / q - C32344 / q;
    const double C27445 = C32349 - (C29107 * C32380) / q - C32346 / q;
    const double C28471 = -(C28439 * C32380 + C32364) / q;
    const double C28472 = -(C28440 * C32380 + C32365) / q;
    const double C28517 = -(C28487 * C32380 + C32367) / q;
    const double C28547 = C32327 - (C28532 * C32380) / q - C32384;
    const double C28609 = -(C28579 * C32380 + C32370) / q;
    const double C28656 = -(C28624 * C32380 + C32371) / q;
    const double C28657 = -(C28625 * C32380 + C32372) / q;
    const double C28687 = C32337 - (C28672 * C32380) / q - C32385;
    const double C28749 = C32375 - (C28719 * C32380) / q - (C29518 * p) / q;
    const double C28794 = C32376 - (C28764 * C32380) / q - (C29547 * p) / q;
    const double C28825 = C32361 - (C28809 * C32380) / q - (C28702 * p) / q;
    const double C28826 =
        (3 * C28702) / C28839 - (C28810 * C32380) / q - (C29575 * p) / q;
    const double C28959 = C32348 - (C28944 * C32380) / q - C32374 / q;
    const double C27523 = -(C29737 * C32380 + C32394) / q;
    const double C27601 = -(C29876 * C32380 + C32400) / q;
    const double C27679 = C30121 / q - (C30015 * C32380) / q - (C30122 * p) / q;
    const double C27757 = -(C30154 * C32380 + C32412) / q;
    const double C27835 = C32410 - (C30285 * C32380) / q - C32403 / q;
    const double C27913 = C32408 - (C30416 * C32380) / q - C32405 / q;
    const double C29785 = -(C29753 * C32380 + C32423) / q;
    const double C29786 = -(C29754 * C32380 + C32424) / q;
    const double C29831 = -(C29801 * C32380 + C32426) / q;
    const double C29922 = -(C29892 * C32380 + C32429) / q;
    const double C29969 = -(C29937 * C32380 + C32430) / q;
    const double C29970 = -(C29938 * C32380 + C32431) / q;
    const double C30061 = C32434 - (C30031 * C32380) / q - (C30823 * p) / q;
    const double C30106 = C32435 - (C30076 * C32380) / q - (C30853 * p) / q;
    const double C30137 = C32420 - (C30121 * C32380) / q - (C30015 * p) / q;
    const double C30138 =
        (3 * C30015) / C28839 - (C30122 * C32380) / q - (C30881 * p) / q;
    const double C30269 = C32407 - (C30254 * C32380) / q - C32433 / q;
    const double C27991 = -(C28435 * de + C31039 * C32380 + C32450) / q;
    const double C28069 = -(C28575 * de + C31178 * C32380 + C32456) / q;
    const double C28147 =
        C31423 / q - (C28715 * de + C31317 * C32380) / q - (C31424 * p) / q;
    const double C28225 = -(C28856 * de + C31456 * C32380 + C32468) / q;
    const double C28303 =
        C32466 - (C28988 * de + C31587 * C32380) / q - C32459 / q;
    const double C28381 =
        C32464 - (C29120 * de + C31718 * C32380) / q - C32461 / q;
    const double C31087 = -(C29233 * de + C31055 * C32380 + C32479) / q;
    const double C31088 = -(C29249 * de + C31056 * C32380 + C32480) / q;
    const double C31133 = -(C29602 * de + C31103 * C32380 + C32482) / q;
    const double C31224 = -(C29368 * de + C31194 * C32380 + C32485) / q;
    const double C31271 = -(C29587 * de + C31239 * C32380 + C32486) / q;
    const double C31272 = -(C30730 * de + C31240 * C32380 + C32487) / q;
    const double C31363 =
        C32490 - (C29485 * de + C31333 * C32380) / q - (C32124 * p) / q;
    const double C31408 =
        C32491 - (C30834 * de + C31378 * C32380) / q - (C32153 * p) / q;
    const double C31439 =
        C32476 - (C29631 * de + C31423 * C32380) / q - (C31317 * p) / q;
    const double C31440 = (3 * C31317) / C28839 -
                          (C32176 * de + C31424 * C32380) / q -
                          (C32182 * p) / q;
    const double C31571 =
        C32463 - (C29703 * de + C31556 * C32380) / q - C32489 / q;
    const double C27013 = -(C28422 * C32378 + C32330) / q;
    const double C27094 = C28624 / q - (C28562 * C32378) / q - (C28625 * p) / q;
    const double C27175 = -(C28702 * C32378 + C32346) / q;
    const double C27256 = C32351 - (C28843 * C32378) / q - C32338 / q;
    const double C27337 = -(C28975 * C32378 + C32353) / q;
    const double C27418 = C32356 - (C29107 * C32378) / q - C32341 / q;
    const double C28455 = -(C28439 * C32378 + C32362) / q;
    const double C28456 = -(C28440 * C32378 + C32363) / q;
    const double C28502 = C32327 - (C28487 * C32378) / q - C32383;
    const double C28594 = C32369 - (C28579 * C32378) / q - (C29386 * p) / q;
    const double C28640 = C32361 - (C28624 * C32378) / q - (C28562 * p) / q;
    const double C28641 =
        (3 * C28562) / C28839 - (C28625 * C32378) / q - (C29429 * p) / q;
    const double C28734 = -(C28719 * C32378 + C32374) / q;
    const double C28779 = C32343 - (C28764 * C32378) / q - C32385;
    const double C29006 = -(C28809 * C32378 + C32371) / q;
    const double C29007 = -(C28532 * C32378 + C32367) / q;
    const double C29050 = C32355 - (C28944 * C32378) / q - C32370 / q;
    const double C29180 = C32376 - (C28672 * C32378) / q - C32372 / q;
    const double C27497 = -(C28435 * de + C29737 * C32378 + C32391) / q;
    const double C27575 =
        C29937 / q - (C28575 * de + C29876 * C32378) / q - (C29938 * p) / q;
    const double C27653 = -(C28715 * de + C30015 * C32378 + C32405) / q;
    const double C27731 =
        C32410 - (C28856 * de + C30154 * C32378) / q - C32397 / q;
    const double C27809 = -(C28988 * de + C30285 * C32378 + C32412) / q;
    const double C27887 =
        C32415 - (C29120 * de + C30416 * C32378) / q - C32400 / q;
    const double C29769 = -(C29233 * de + C29753 * C32378 + C32421) / q;
    const double C29770 = -(C29249 * de + C29754 * C32378 + C32422) / q;
    const double C29907 =
        C32428 - (C29368 * de + C29892 * C32378) / q - (C30691 * p) / q;
    const double C29953 =
        C32420 - (C29587 * de + C29937 * C32378) / q - (C29876 * p) / q;
    const double C29954 = (3 * C29876) / C28839 -
                          (C30730 * de + C29938 * C32378) / q -
                          (C30735 * p) / q;
    const double C30046 = -(C29485 * de + C30031 * C32378 + C32433) / q;
    const double C30315 = -(C29631 * de + C30121 * C32378 + C32430) / q;
    const double C30316 = -(C29646 * de + C29846 * C32378 + C32426) / q;
    const double C30359 =
        C32414 - (C29703 * de + C30254 * C32378) / q - C32429 / q;
    const double C30488 =
        C32435 - (C31018 * de + C29985 * C32378) / q - C32431 / q;
    const double C27965 = -(C31039 * C32378 + C32447) / q;
    const double C28043 = C31239 / q - (C31178 * C32378) / q - (C31240 * p) / q;
    const double C28121 = -(C31317 * C32378 + C32461) / q;
    const double C28199 = C32466 - (C31456 * C32378) / q - C32453 / q;
    const double C28277 = -(C31587 * C32378 + C32468) / q;
    const double C28355 = C32471 - (C31718 * C32378) / q - C32456 / q;
    const double C31071 = -(C31055 * C32378 + C32477) / q;
    const double C31072 = -(C31056 * C32378 + C32478) / q;
    const double C31209 = C32484 - (C31194 * C32378) / q - (C31993 * p) / q;
    const double C31255 = C32476 - (C31239 * C32378) / q - (C31178 * p) / q;
    const double C31256 =
        (3 * C31178) / C28839 - (C31240 * C32378) / q - (C32036 * p) / q;
    const double C31348 = -(C31333 * C32378 + C32489) / q;
    const double C31617 = -(C31423 * C32378 + C32486) / q;
    const double C31618 = -(C31148 * C32378 + C32482) / q;
    const double C31661 = C32470 - (C31556 * C32378) / q - C32485 / q;
    const double C31790 = C32491 - (C31287 * C32378) / q - C32487 / q;
    const double C26985 =
        C28439 / q - (C28435 * de + C28422 * C32377) / q - (C28440 * p) / q;
    const double C27066 = -(C28575 * de + C28562 * C32377 + C32338) / q;
    const double C27147 = -(C28715 * de + C28702 * C32377 + C32344) / q;
    const double C27228 =
        C32349 - (C28856 * de + C28843 * C32377) / q - C32330 / q;
    const double C27309 =
        C32356 - (C28988 * de + C28975 * C32377) / q - C32335 / q;
    const double C27390 = -(C29120 * de + C29107 * C32377 + C32353) / q;
    const double C28421 =
        C32361 - (C29233 * de + C28439 * C32377) / q - (C28422 * p) / q;
    const double C28423 = (3 * C28422) / C28839 -
                          (C29249 * de + C28440 * C32377) / q -
                          (C29253 * p) / q;
    const double C28563 = C32337 - (C29368 * de + C28579 * C32377) / q - C32383;
    const double C28703 = C32343 - (C29485 * de + C28719 * C32377) / q - C32384;
    const double C28842 = -(C29587 * de + C28624 * C32377 + C32362) / q;
    const double C28844 =
        C32369 - (C29602 * de + C28487 * C32377) / q - C32363 / q;
    const double C28974 = -(C29631 * de + C28809 * C32377 + C32364) / q;
    const double C28976 =
        C32375 - (C29646 * de + C28532 * C32377) / q - C32365 / q;
    const double C29108 =
        C32360 - (C29703 * de + C28944 * C32377) / q - C32367 / q;
    const double C27470 = C29753 / q - (C29737 * C32377) / q - (C29754 * p) / q;
    const double C27548 = -(C29876 * C32377 + C32397) / q;
    const double C27626 = -(C30015 * C32377 + C32403) / q;
    const double C27704 = C32408 - (C30154 * C32377) / q - C32391 / q;
    const double C27782 = C32415 - (C30285 * C32377) / q - C32394 / q;
    const double C27860 = -(C30416 * C32377 + C32412) / q;
    const double C29736 = C32420 - (C29753 * C32377) / q - (C29737 * p) / q;
    const double C29738 =
        (3 * C29737) / C28839 - (C29754 * C32377) / q - (C30559 * p) / q;
    const double C30153 = -(C29937 * C32377 + C32421) / q;
    const double C30155 = C32428 - (C29801 * C32377) / q - C32422 / q;
    const double C30284 = -(C30121 * C32377 + C32423) / q;
    const double C30286 = C32434 - (C29846 * C32377) / q - C32424 / q;
    const double C30417 = C32419 - (C30254 * C32377) / q - C32426 / q;
    const double C27938 = C31055 / q - (C31039 * C32377) / q - (C31056 * p) / q;
    const double C28016 = -(C31178 * C32377 + C32453) / q;
    const double C28094 = -(C31317 * C32377 + C32459) / q;
    const double C28172 = C32464 - (C31456 * C32377) / q - C32447 / q;
    const double C28250 = C32471 - (C31587 * C32377) / q - C32450 / q;
    const double C28328 = -(C31718 * C32377 + C32468) / q;
    const double C31038 = C32476 - (C31055 * C32377) / q - (C31039 * p) / q;
    const double C31040 =
        (3 * C31039) / C28839 - (C31056 * C32377) / q - (C31861 * p) / q;
    const double C31455 = -(C31239 * C32377 + C32477) / q;
    const double C31457 = C32484 - (C31103 * C32377) / q - C32478 / q;
    const double C31586 = -(C31423 * C32377 + C32479) / q;
    const double C31588 = C32490 - (C31148 * C32377) / q - C32480 / q;
    const double C31719 = C32475 - (C31556 * C32377) / q - C32482 / q;
    const double C30000 = C32396 - (C29985 * C32380) / q - C32441;
    const double C30091 = C32402 - (C30834 * de + C30076 * C32378) / q - C32441;
    const double C29861 = C32390 - (C29846 * C32380) / q - C32440;
    const double C30016 = C32402 - (C30031 * C32377) / q - C32440;
    const double C29816 = C32390 - (C29602 * de + C29801 * C32378) / q - C32439;
    const double C29877 = C32396 - (C29892 * C32377) / q - C32439;
    const double C31302 = C32452 - (C31018 * de + C31287 * C32380) / q - C32497;
    const double C31393 = C32458 - (C31378 * C32378) / q - C32497;
    const double C31163 = C32446 - (C29646 * de + C31148 * C32380) / q - C32496;
    const double C31318 = C32458 - (C31333 * C32377) / q - C32496;
    const double C31118 = C32446 - (C31103 * C32378) / q - C32495;
    const double C31179 = C32452 - (C31194 * C32377) / q - C32495;
    const double C32352 = C28471 / C28839;
    const double C27003 =
        C28471 / q - (C27037 * de + C27040 * C32377) / q - (C28472 * p) / q;
    const double C32332 = C28517 * p;
    const double C32336 = C28547 * p;
    const double C32340 = C28609 * p;
    const double C32350 = C28656 / C28839;
    const double C27111 = C28656 / q - (C27121 * C32378) / q - (C28657 * p) / q;
    const double C32342 = C28687 * p;
    const double C32345 = C28749 * p;
    const double C32347 = C28794 * p;
    const double C32358 = C28825 / C28839;
    const double C27218 =
        C28825 / q - (C27202 * C32380) / q + C32343 - (C28826 * p) / q;
    const double C32354 = C28959 * p;
    const double C32411 = C29785 / C28839;
    const double C27488 = C29785 / q - (C27523 * C32377) / q - (C29786 * p) / q;
    const double C32393 = C29831 * p;
    const double C32399 = C29922 * p;
    const double C32409 = C29969 / C28839;
    const double C27592 =
        C29969 / q - (C27118 * de + C27601 * C32378) / q - (C29970 * p) / q;
    const double C32404 = C30061 * p;
    const double C32406 = C30106 * p;
    const double C32417 = C30137 / C28839;
    const double C27695 =
        C30137 / q - (C27679 * C32380) / q + C32402 - (C30138 * p) / q;
    const double C32413 = C30269 * p;
    const double C32467 = C31087 / C28839;
    const double C27956 = C31087 / q - (C27991 * C32377) / q - (C31088 * p) / q;
    const double C32449 = C31133 * p;
    const double C32455 = C31224 * p;
    const double C32465 = C31271 / C28839;
    const double C28060 = C31271 / q - (C28069 * C32378) / q - (C31272 * p) / q;
    const double C32460 = C31363 * p;
    const double C32462 = C31408 * p;
    const double C32473 = C31439 / C28839;
    const double C28163 = C31439 / q - (C27199 * de + C28147 * C32380) / q +
                          C32458 - (C31440 * p) / q;
    const double C32469 = C31571 * p;
    const double C26994 =
        C28455 / q - (C27010 * de + C27013 * C32377) / q - (C28456 * p) / q;
    const double C32331 = C28502 * p;
    const double C32339 = C28594 * p;
    const double C27102 =
        C28640 / q - (C27094 * C32378) / q + C32337 - (C28641 * p) / q;
    const double C27156 = -(C27172 * de + C27175 * C32377 + C28734 * p) / q;
    const double C27183 = C32343 - (C27175 * C32378) / q - (C28779 * p) / q;
    const double C32357 = C29006 / C28839;
    const double C32359 = C29050 * p;
    const double C27479 = C29769 / q - (C27497 * C32377) / q - (C29770 * p) / q;
    const double C32398 = C29907 * p;
    const double C27583 = C29953 / q - (C27091 * de + C27575 * C32378) / q +
                          C32396 - (C29954 * p) / q;
    const double C27635 = -(C27653 * C32377 + C30046 * p) / q;
    const double C32416 = C30315 / C28839;
    const double C32418 = C30359 * p;
    const double C27947 = C31071 / q - (C27965 * C32377) / q - (C31072 * p) / q;
    const double C32454 = C31209 * p;
    const double C28051 =
        C31255 / q - (C28043 * C32378) / q + C32452 - (C31256 * p) / q;
    const double C28103 = -(C28121 * C32377 + C31348 * p) / q;
    const double C32472 = C31617 / C28839;
    const double C32474 = C31661 * p;
    const double C26984 = C28421 / q - (C26981 * de + C26985 * C32377) / q +
                          C32327 - (C28423 * p) / q;
    const double C27065 =
        C32337 - (C27062 * de + C27066 * C32377) / q - (C28563 * p) / q;
    const double C27146 =
        C32343 - (C27143 * de + C27147 * C32377) / q - (C28703 * p) / q;
    const double C27227 = C28842 / C28839 -
                          (C27224 * de + C27228 * C32377) / q + C32348 -
                          (C28844 * p) / q;
    const double C27308 = C28974 / C28839 -
                          (C27305 * de + C27309 * C32377) / q + C32355 -
                          (C28976 * p) / q;
    const double C27389 =
        C32360 - (C27386 * de + C27390 * C32377) / q - (C29108 * p) / q;
    const double C27469 =
        C29736 / q - (C27470 * C32377) / q + C32390 - (C29738 * p) / q;
    const double C27703 =
        C30153 / C28839 - (C27704 * C32377) / q + C32407 - (C30155 * p) / q;
    const double C27781 =
        C30284 / C28839 - (C27782 * C32377) / q + C32414 - (C30286 * p) / q;
    const double C27859 = C32419 - (C27860 * C32377) / q - (C30417 * p) / q;
    const double C27937 =
        C31038 / q - (C27938 * C32377) / q + C32446 - (C31040 * p) / q;
    const double C28171 =
        C31455 / C28839 - (C28172 * C32377) / q + C32463 - (C31457 * p) / q;
    const double C28249 =
        C31586 / C28839 - (C28250 * C32377) / q + C32470 - (C31588 * p) / q;
    const double C28327 = C32475 - (C28328 * C32377) / q - (C31719 * p) / q;
    const double C32401 = C30000 * p;
    const double C27661 =
        C32402 - (C27172 * de + C27653 * C32378) / q - (C30091 * p) / q;
    const double C32395 = C29861 * p;
    const double C27625 = C32402 - (C27626 * C32377) / q - (C30016 * p) / q;
    const double C32392 = C29816 * p;
    const double C27547 = C32396 - (C27548 * C32377) / q - (C29877 * p) / q;
    const double C32457 = C31302 * p;
    const double C28129 = C32458 - (C28121 * C32378) / q - (C31393 * p) / q;
    const double C32451 = C31163 * p;
    const double C28093 = C32458 - (C28094 * C32377) / q - (C31318 * p) / q;
    const double C32448 = C31118 * p;
    const double C28015 = C32452 - (C28016 * C32377) / q - (C31179 * p) / q;
    const double C27030 = -(C27040 * C32378 + C32332) / q;
    const double C32381 = C32336 / q;
    const double C27084 = -(C27118 * de + C27121 * C32377 + C32340) / q;
    const double C27273 = C32352 - (C27283 * C32378) / q - C32340 / q;
    const double C27246 =
        C32350 - (C27280 * de + C27283 * C32377) / q - C32332 / q;
    const double C32382 = C32342 / q;
    const double C27165 = -(C27199 * de + C27202 * C32377 + C32345) / q;
    const double C27380 = C32352 - (C27364 * C32380) / q + C32355 - C32345 / q;
    const double C27192 = -(C27202 * C32378 + C32347) / q;
    const double C27461 = C32350 - (C27445 * C32380) / q + C32360 - C32347 / q;
    const double C27299 = C32348 - (C27283 * C32380) / q - C32354 / q;
    const double C27354 = -(C27364 * C32378 + C32354) / q;
    const double C27408 = -(C27442 * de + C27445 * C32377 + C32354) / q;
    const double C27514 = -(C27037 * de + C27523 * C32378 + C32393) / q;
    const double C27566 = -(C27601 * C32377 + C32399) / q;
    const double C27748 =
        C32411 - (C27280 * de + C27757 * C32378) / q - C32399 / q;
    const double C27722 = C32409 - (C27757 * C32377) / q - C32393 / q;
    const double C27644 = -(C27679 * C32377 + C32404) / q;
    const double C27851 = C32411 - (C27835 * C32380) / q + C32414 - C32404 / q;
    const double C27670 = -(C27199 * de + C27679 * C32378 + C32406) / q;
    const double C27929 = C32409 - (C27913 * C32380) / q + C32419 - C32406 / q;
    const double C27773 = C32407 - (C27757 * C32380) / q - C32413 / q;
    const double C27826 = -(C27361 * de + C27835 * C32378 + C32413) / q;
    const double C27878 = -(C27913 * C32377 + C32413) / q;
    const double C27982 = -(C27991 * C32378 + C32449) / q;
    const double C28034 = -(C28069 * C32377 + C32455) / q;
    const double C28216 = C32467 - (C28225 * C32378) / q - C32455 / q;
    const double C28190 = C32465 - (C28225 * C32377) / q - C32449 / q;
    const double C28112 = -(C28147 * C32377 + C32460) / q;
    const double C28319 =
        C32467 - (C27361 * de + C28303 * C32380) / q + C32470 - C32460 / q;
    const double C28138 = -(C28147 * C32378 + C32462) / q;
    const double C28397 =
        C32465 - (C27442 * de + C28381 * C32380) / q + C32475 - C32462 / q;
    const double C28241 =
        C32463 - (C27280 * de + C28225 * C32380) / q - C32469 / q;
    const double C28294 = -(C28303 * C32378 + C32469) / q;
    const double C28346 = -(C28381 * C32377 + C32469) / q;
    const double C32379 = C32331 / q;
    const double C27075 = -(C27091 * de + C27094 * C32377 + C32339) / q;
    const double C27264 =
        C28455 / C28839 - (C27256 * C32378) / q + C32348 - C32339 / q;
    const double C27318 =
        C32357 - (C27334 * de + C27337 * C32377) / q - (C29007 * p) / q;
    const double C27426 =
        C32357 - (C27418 * C32378) / q + C32360 - (C29180 * p) / q;
    const double C27345 = C32355 - (C27337 * C32378) / q - C32359 / q;
    const double C27399 = -(C27415 * de + C27418 * C32377 + C32359) / q;
    const double C27557 = -(C27575 * C32377 + C32398) / q;
    const double C27739 = C29769 / C28839 -
                          (C27253 * de + C27731 * C32378) / q + C32407 -
                          C32398 / q;
    const double C27791 = C32416 - (C27809 * C32377) / q - (C30316 * p) / q;
    const double C27895 = C32416 - (C27415 * de + C27887 * C32378) / q +
                          C32419 - (C30488 * p) / q;
    const double C27817 =
        C32414 - (C27334 * de + C27809 * C32378) / q - C32418 / q;
    const double C27869 = -(C27887 * C32377 + C32418) / q;
    const double C28025 = -(C28043 * C32377 + C32454) / q;
    const double C28207 =
        C31071 / C28839 - (C28199 * C32378) / q + C32463 - C32454 / q;
    const double C28259 = C32472 - (C28277 * C32377) / q - (C31618 * p) / q;
    const double C28363 =
        C32472 - (C28355 * C32378) / q + C32475 - (C31790 * p) / q;
    const double C28285 = C32470 - (C28277 * C32378) / q - C32474 / q;
    const double C28337 = -(C28355 * C32377 + C32474) / q;
    const double C32438 = C32401 / q;
    const double C32437 = C32395 / q;
    const double C32436 = C32392 / q;
    const double C32494 = C32457 / q;
    const double C32493 = C32451 / q;
    const double C32492 = C32448 / q;
    const double C27056 = C32327 - (C27040 * C32380) / q - C32381;
    const double C27327 = C32358 - (C27361 * de + C27364 * C32377) / q - C32381;
    const double C27137 = C32337 - (C27121 * C32380) / q - C32382;
    const double C27435 = C32358 - (C27445 * C32378) / q - C32382;
    const double C27021 = C32327 - (C27013 * C32378) / q - C32379;
    const double C27237 =
        C28640 / C28839 - (C27253 * de + C27256 * C32377) / q - C32379;
    const double C27617 = C32396 - (C27601 * C32380) / q - C32438;
    const double C27904 = C32417 - (C27442 * de + C27913 * C32378) / q - C32438;
    const double C27539 = C32390 - (C27523 * C32380) / q - C32437;
    const double C27800 = C32417 - (C27835 * C32377) / q - C32437;
    const double C27505 = C32390 - (C27010 * de + C27497 * C32378) / q - C32436;
    const double C27713 = C29953 / C28839 - (C27731 * C32377) / q - C32436;
    const double C28085 = C32452 - (C27118 * de + C28069 * C32380) / q - C32494;
    const double C28372 = C32473 - (C28381 * C32378) / q - C32494;
    const double C28007 = C32446 - (C27037 * de + C27991 * C32380) / q - C32493;
    const double C28268 = C32473 - (C28303 * C32377) / q - C32493;
    const double C27973 = C32446 - (C27965 * C32378) / q - C32492;
    const double C28181 = C31255 / C28839 - (C28199 * C32377) / q - C32492;
    etx[0] = C26984;
    etx[1] = C26985;
    etx[2] = C26994;
    etx[3] = C27003;
    etx[4] = C27013;
    etx[5] = C27021;
    etx[6] = C27030;
    etx[7] = C27040;
    etx[8] = C27056;
    etx[9] = C27065;
    etx[10] = C27066;
    etx[11] = C27075;
    etx[12] = C27084;
    etx[13] = C27094;
    etx[14] = C27102;
    etx[15] = C27111;
    etx[16] = C27121;
    etx[17] = C27137;
    etx[18] = C27146;
    etx[19] = C27147;
    etx[20] = C27156;
    etx[21] = C27165;
    etx[22] = C27175;
    etx[23] = C27183;
    etx[24] = C27192;
    etx[25] = C27202;
    etx[26] = C27218;
    etx[27] = C27227;
    etx[28] = C27228;
    etx[29] = C27237;
    etx[30] = C27246;
    etx[31] = C27256;
    etx[32] = C27264;
    etx[33] = C27273;
    etx[34] = C27283;
    etx[35] = C27299;
    etx[36] = C27308;
    etx[37] = C27309;
    etx[38] = C27318;
    etx[39] = C27327;
    etx[40] = C27337;
    etx[41] = C27345;
    etx[42] = C27354;
    etx[43] = C27364;
    etx[44] = C27380;
    etx[45] = C27389;
    etx[46] = C27390;
    etx[47] = C27399;
    etx[48] = C27408;
    etx[49] = C27418;
    etx[50] = C27426;
    etx[51] = C27435;
    etx[52] = C27445;
    etx[53] = C27461;
    ety[0] = C27469;
    ety[1] = C27470;
    ety[2] = C27479;
    ety[3] = C27488;
    ety[4] = C27497;
    ety[5] = C27505;
    ety[6] = C27514;
    ety[7] = C27523;
    ety[8] = C27539;
    ety[9] = C27547;
    ety[10] = C27548;
    ety[11] = C27557;
    ety[12] = C27566;
    ety[13] = C27575;
    ety[14] = C27583;
    ety[15] = C27592;
    ety[16] = C27601;
    ety[17] = C27617;
    ety[18] = C27625;
    ety[19] = C27626;
    ety[20] = C27635;
    ety[21] = C27644;
    ety[22] = C27653;
    ety[23] = C27661;
    ety[24] = C27670;
    ety[25] = C27679;
    ety[26] = C27695;
    ety[27] = C27703;
    ety[28] = C27704;
    ety[29] = C27713;
    ety[30] = C27722;
    ety[31] = C27731;
    ety[32] = C27739;
    ety[33] = C27748;
    ety[34] = C27757;
    ety[35] = C27773;
    ety[36] = C27781;
    ety[37] = C27782;
    ety[38] = C27791;
    ety[39] = C27800;
    ety[40] = C27809;
    ety[41] = C27817;
    ety[42] = C27826;
    ety[43] = C27835;
    ety[44] = C27851;
    ety[45] = C27859;
    ety[46] = C27860;
    ety[47] = C27869;
    ety[48] = C27878;
    ety[49] = C27887;
    ety[50] = C27895;
    ety[51] = C27904;
    ety[52] = C27913;
    ety[53] = C27929;
    etz[0] = C27937;
    etz[1] = C27938;
    etz[2] = C27947;
    etz[3] = C27956;
    etz[4] = C27965;
    etz[5] = C27973;
    etz[6] = C27982;
    etz[7] = C27991;
    etz[8] = C28007;
    etz[9] = C28015;
    etz[10] = C28016;
    etz[11] = C28025;
    etz[12] = C28034;
    etz[13] = C28043;
    etz[14] = C28051;
    etz[15] = C28060;
    etz[16] = C28069;
    etz[17] = C28085;
    etz[18] = C28093;
    etz[19] = C28094;
    etz[20] = C28103;
    etz[21] = C28112;
    etz[22] = C28121;
    etz[23] = C28129;
    etz[24] = C28138;
    etz[25] = C28147;
    etz[26] = C28163;
    etz[27] = C28171;
    etz[28] = C28172;
    etz[29] = C28181;
    etz[30] = C28190;
    etz[31] = C28199;
    etz[32] = C28207;
    etz[33] = C28216;
    etz[34] = C28225;
    etz[35] = C28241;
    etz[36] = C28249;
    etz[37] = C28250;
    etz[38] = C28259;
    etz[39] = C28268;
    etz[40] = C28277;
    etz[41] = C28285;
    etz[42] = C28294;
    etz[43] = C28303;
    etz[44] = C28319;
    etz[45] = C28327;
    etz[46] = C28328;
    etz[47] = C28337;
    etz[48] = C28346;
    etz[49] = C28355;
    etz[50] = C28363;
    etz[51] = C28372;
    etz[52] = C28381;
    etz[53] = C28397;
}
