/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2020_2_et(const double ae,
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
    const double C310 = g[0];
    const double C361 = g[1];
    const double C378 = g[2];
    const double C410 = g[3];
    const double C461 = g[4];
    const double C477 = g[5];
    const double C509 = g[6];
    const double C560 = g[7];
    const double C576 = g[8];
    const double C607 = g[9];
    const double C658 = g[10];
    const double C673 = g[11];
    const double C702 = g[12];
    const double C752 = g[13];
    const double C769 = g[14];
    const double C798 = g[15];
    const double C847 = g[16];
    const double C862 = g[17];
    const double C891 = g[18];
    const double C907 = g[19];
    const double C923 = g[20];
    const double C1072 = g[21];
    const double C1088 = g[22];
    const double C1236 = g[23];
    const double C1252 = g[24];
    const double C1385 = g[25];
    const double C1400 = g[26];
    const double C1415 = g[27];
    const double C1473 = g[28];
    const double C1488 = g[29];
    const double C1503 = g[30];
    const double C1588 = g[31];
    const double C1603 = g[32];
    const double C2458 = g[33];
    const double C2607 = g[34];
    const double C2950 = g[35];
    const double C3968 = g[36];
    const double C316 = vrx[0];
    const double C415 = vrx[1];
    const double C514 = vrx[2];
    const double C614 = vrx[3];
    const double C708 = vrx[4];
    const double C803 = vrx[5];
    const double C895 = vrx[6];
    const double C896 = vrx[7];
    const double C911 = vrx[8];
    const double C927 = vrx[9];
    const double C942 = vrx[10];
    const double C957 = vrx[11];
    const double C972 = vrx[12];
    const double C987 = vrx[13];
    const double C1016 = vrx[14];
    const double C1045 = vrx[15];
    const double C1060 = vrx[16];
    const double C1076 = vrx[17];
    const double C1105 = vrx[18];
    const double C1120 = vrx[19];
    const double C1135 = vrx[20];
    const double C1150 = vrx[21];
    const double C1165 = vrx[22];
    const double C1180 = vrx[23];
    const double C1195 = vrx[24];
    const double C1224 = vrx[25];
    const double C1240 = vrx[26];
    const double C1270 = vrx[27];
    const double C1298 = vrx[28];
    const double C1313 = vrx[29];
    const double C1328 = vrx[30];
    const double C1343 = vrx[31];
    const double C1358 = vrx[32];
    const double C1373 = vrx[33];
    const double C1447 = vrx[34];
    const double C1666 = vry[0];
    const double C1761 = vry[1];
    const double C1857 = vry[2];
    const double C1954 = vry[3];
    const double C2045 = vry[4];
    const double C2136 = vry[5];
    const double C2225 = vry[6];
    const double C2226 = vry[7];
    const double C2241 = vry[8];
    const double C2256 = vry[9];
    const double C2271 = vry[10];
    const double C2286 = vry[11];
    const double C2301 = vry[12];
    const double C2316 = vry[13];
    const double C2345 = vry[14];
    const double C2374 = vry[15];
    const double C2389 = vry[16];
    const double C2404 = vry[17];
    const double C2433 = vry[18];
    const double C2434 = vry[19];
    const double C2463 = vry[20];
    const double C2478 = vry[21];
    const double C2493 = vry[22];
    const double C2508 = vry[23];
    const double C2523 = vry[24];
    const double C2552 = vry[25];
    const double C2567 = vry[26];
    const double C2596 = vry[27];
    const double C2625 = vry[28];
    const double C2640 = vry[29];
    const double C2655 = vry[30];
    const double C2670 = vry[31];
    const double C2685 = vry[32];
    const double C2700 = vry[33];
    const double C2771 = vry[34];
    const double C2986 = vrz[0];
    const double C3081 = vrz[1];
    const double C3177 = vrz[2];
    const double C3274 = vrz[3];
    const double C3365 = vrz[4];
    const double C3456 = vrz[5];
    const double C3545 = vrz[6];
    const double C3546 = vrz[7];
    const double C3561 = vrz[8];
    const double C3576 = vrz[9];
    const double C3591 = vrz[10];
    const double C3606 = vrz[11];
    const double C3621 = vrz[12];
    const double C3636 = vrz[13];
    const double C3665 = vrz[14];
    const double C3694 = vrz[15];
    const double C3709 = vrz[16];
    const double C3724 = vrz[17];
    const double C3752 = vrz[18];
    const double C3767 = vrz[19];
    const double C3782 = vrz[20];
    const double C3797 = vrz[21];
    const double C3812 = vrz[22];
    const double C3827 = vrz[23];
    const double C3842 = vrz[24];
    const double C3871 = vrz[25];
    const double C3886 = vrz[26];
    const double C3915 = vrz[27];
    const double C3944 = vrz[28];
    const double C3945 = vrz[29];
    const double C3974 = vrz[30];
    const double C3989 = vrz[31];
    const double C4004 = vrz[32];
    const double C4019 = vrz[33];
    const double C4090 = vrz[34];
    const double C609 = 2 * q;
    const double C4339 = C1447 * p;
    const double C4336 = C803 / q;
    const double C4335 = C708 / q;
    const double C4334 = C1343 * p;
    const double C4333 = C1270 * p;
    const double C4332 = C1240 * p;
    const double C4331 = C1224 * p;
    const double C4330 = C803 * p;
    const double C4329 = C1195 * p;
    const double C4328 = C614 / q;
    const double C4327 = C1165 * p;
    const double C4326 = C1150 * p;
    const double C4325 = C1076 * p;
    const double C4324 = C1060 * p;
    const double C4323 = C1045 * p;
    const double C4322 = C708 * p;
    const double C4321 = C1016 * p;
    const double C4320 = C614 * p;
    const double C4319 = C987 * p;
    const double C4318 = C972 * p;
    const double C4317 = C957 * p;
    const double C4316 = C942 * p;
    const double C4296 = de * zCD;
    const double C4295 = be * zAB;
    const double C4293 = de * yCD;
    const double C4292 = be * yAB;
    const double C4290 = de * xCD;
    const double C4289 = be * xAB;
    const double C4405 = C2771 * p;
    const double C4402 = C2136 / q;
    const double C4401 = C2045 / q;
    const double C4400 = C2670 * p;
    const double C4399 = C2596 * p;
    const double C4398 = C2567 * p;
    const double C4397 = C2552 * p;
    const double C4396 = C2136 * p;
    const double C4395 = C2523 * p;
    const double C4394 = C1954 / q;
    const double C4393 = C2493 * p;
    const double C4392 = C2478 * p;
    const double C4391 = C2404 * p;
    const double C4390 = C2389 * p;
    const double C4389 = C2374 * p;
    const double C4388 = C2045 * p;
    const double C4387 = C2345 * p;
    const double C4386 = C1954 * p;
    const double C4385 = C2316 * p;
    const double C4384 = C2301 * p;
    const double C4383 = C2286 * p;
    const double C4382 = C2271 * p;
    const double C4469 = C4090 * p;
    const double C4466 = C3456 / q;
    const double C4465 = C3365 / q;
    const double C4464 = C3989 * p;
    const double C4463 = C3915 * p;
    const double C4462 = C3886 * p;
    const double C4461 = C3871 * p;
    const double C4460 = C3456 * p;
    const double C4459 = C3842 * p;
    const double C4458 = C3274 / q;
    const double C4457 = C3812 * p;
    const double C4456 = C3797 * p;
    const double C4455 = C3724 * p;
    const double C4454 = C3709 * p;
    const double C4453 = C3694 * p;
    const double C4452 = C3365 * p;
    const double C4451 = C3665 * p;
    const double C4450 = C3274 * p;
    const double C4449 = C3636 * p;
    const double C4448 = C3621 * p;
    const double C4447 = C3606 * p;
    const double C4446 = C3591 * p;
    const double C4340 = C1298 / C609;
    const double C4338 = C895 / C609;
    const double C4337 = C1105 / C609;
    const double C4315 = C911 / C609;
    const double C4314 = C803 / C609;
    const double C4310 = C708 / C609;
    const double C4306 = C614 / C609;
    const double C4303 = C514 / C609;
    const double C4299 = C415 / C609;
    const double C4291 = C316 / C609;
    const double C4406 = C2625 / C609;
    const double C4404 = C2226 / C609;
    const double C4403 = C2433 / C609;
    const double C4381 = C2225 / C609;
    const double C4380 = C2136 / C609;
    const double C4376 = C2045 / C609;
    const double C4372 = C1954 / C609;
    const double C4369 = C1857 / C609;
    const double C4365 = C1761 / C609;
    const double C4361 = C1666 / C609;
    const double C4470 = C3944 / C609;
    const double C4468 = C3546 / C609;
    const double C4467 = C3752 / C609;
    const double C4445 = C3545 / C609;
    const double C4444 = C3456 / C609;
    const double C4440 = C3365 / C609;
    const double C4436 = C3274 / C609;
    const double C4433 = C3177 / C609;
    const double C4429 = C3081 / C609;
    const double C4425 = C2986 / C609;
    const double C4356 = C4332 / q;
    const double C4355 = C4327 / q;
    const double C4354 = C4325 / q;
    const double C4353 = C4319 / q;
    const double C4352 = C4317 / q;
    const double C4344 = C4295 + C4296;
    const double C4342 = C4292 + C4293;
    const double C4341 = C4289 + C4290;
    const double C4419 = C4400 / q;
    const double C4418 = C4399 / q;
    const double C4417 = C4393 / q;
    const double C4420 = C4390 / q;
    const double C4416 = C4387 / q;
    const double C4415 = C4385 / q;
    const double C4414 = C4383 / q;
    const double C4413 = C4382 / q;
    const double C4482 = C4461 / q;
    const double C4481 = C4459 / q;
    const double C4480 = C4457 / q;
    const double C4479 = C4456 / q;
    const double C4478 = C4454 / q;
    const double C4477 = C4453 / q;
    const double C4476 = C4449 / q;
    const double C4475 = C4448 / q;
    const double C4474 = C4447 / q;
    const double C348 = -(C316 * C4344 + C4318) / q;
    const double C349 = C4291 - (C972 * C4344) / q - C4353;
    const double C382 = -(C895 * C4344 + C4322) / q;
    const double C383 = -(C896 * C4344 + C4323) / q;
    const double C398 = -(C942 * C4344 + C4324) / q;
    const double C448 = -(C415 * C4344 + C4326) / q;
    const double C449 = C4299 - (C1150 * C4344) / q - C4355;
    const double C481 = -(C1076 * C4344 + C4329) / q;
    const double C496 = -(C1105 * C4344 + C4330) / q;
    const double C497 = -(C1120 * C4344 + C4331) / q;
    const double C546 = C4315 - (C1298 * C4344) / q - (C514 * p) / q;
    const double C547 = C1298 / q - (C514 * C4344) / q - (C1313 * p) / q;
    const double C548 =
        (3 * C514) / C609 - (C1313 * C4344) / q - (C1328 * p) / q;
    const double C580 = C4335 - (C1240 * C4344) / q - (C1358 * p) / q;
    const double C595 = C4336 - (C1270 * C4344) / q - (C1373 * p) / q;
    const double C645 = -(C614 * C4344 + C4339) / q;
    const double C646 = C4306 - (C1447 * C4344) / q - C4334 / q;
    const double C740 = C4338 - (C708 * C4344) / q - C4356;
    const double C835 = C4337 - (C803 * C4344) / q - C4333 / q;
    const double C1698 = -(C1666 * C4344 + C4384) / q;
    const double C1730 = -(C2226 * C4344 + C4388) / q;
    const double C1731 = -(C2241 * C4344 + C4389) / q;
    const double C1746 = -(C2271 * C4344 + C4390) / q;
    const double C1795 = -(C1761 * C4344 + C4392) / q;
    const double C1826 = -(C2404 * C4344 + C4395) / q;
    const double C1841 = -(C2433 * C4344 + C4396) / q;
    const double C1842 = -(C2434 * C4344 + C4397) / q;
    const double C1890 = C4381 - (C2625 * C4344) / q - (C1857 * p) / q;
    const double C1891 = C2625 / q - (C1857 * C4344) / q - (C2640 * p) / q;
    const double C1892 =
        (3 * C1857) / C609 - (C2640 * C4344) / q - (C2655 * p) / q;
    const double C1922 = C4401 - (C2567 * C4344) / q - (C2685 * p) / q;
    const double C1937 = C4402 - (C2596 * C4344) / q - (C2700 * p) / q;
    const double C1985 = -(C1954 * C4344 + C4405) / q;
    const double C2077 = C4404 - (C2045 * C4344) / q - C4398 / q;
    const double C3050 = (C907 * be) / q - (C3546 * C4344) / q - C4452 / q;
    const double C3161 = (C1400 * be) / q - (C3752 * C4344) / q - C4460 / q;
    const double C3210 =
        (C1236 * be) / q - (C3177 * C4344) / q + C3944 / q - (C3945 * p) / q;
    const double C3211 =
        (C1488 * be) / q - (C3944 * C4344) / q + C4445 - (C3177 * p) / q;
    const double C3212 = (C3968 * be) / q - (C3945 * C4344) / q +
                         (3 * C3177) / C609 - (C3974 * p) / q;
    const double C3242 =
        (C1252 * be) / q - (C3886 * C4344) / q + C4465 - (C4004 * p) / q;
    const double C3257 =
        (C2607 * be) / q - (C3915 * C4344) / q + C4466 - (C4019 * p) / q;
    const double C3305 = (C1385 * be) / q - (C3274 * C4344) / q - C4469 / q;
    const double C3306 =
        (C1603 * be) / q - (C4090 * C4344) / q + C4436 - C4464 / q;
    const double C3397 =
        (C1473 * be) / q - (C3365 * C4344) / q + C4468 - C4462 / q;
    const double C3489 =
        (C1588 * be) / q - (C3456 * C4344) / q + C4467 - C4463 / q;
    const double C332 = -(C316 * C4342 + C4316) / q;
    const double C333 = C4291 - (C942 * C4342) / q - C4352;
    const double C365 = -(C895 * C4342 + C4320) / q;
    const double C366 = -(C896 * C4342 + C4321) / q;
    const double C431 = C4315 - (C1105 * C4342) / q - (C415 * p) / q;
    const double C432 = C1105 / q - (C415 * C4342) / q - (C1120 * p) / q;
    const double C433 =
        (3 * C415) / C609 - (C1120 * C4342) / q - (C1135 * p) / q;
    const double C465 = C4328 - (C1076 * C4342) / q - (C1180 * p) / q;
    const double C530 = -(C514 * C4342 + C4333) / q;
    const double C531 = C4303 - (C1270 * C4342) / q - C4355;
    const double C564 = -(C1240 * C4342 + C4334) / q;
    const double C630 = C4338 - (C614 * C4342) / q - C4354;
    const double C724 = -(C708 * C4342 + C4339) / q;
    const double C725 = C4310 - (C1447 * C4342) / q - C4329 / q;
    const double C756 = -(C1298 * C4342 + C4330) / q;
    const double C757 = -(C972 * C4342 + C4324) / q;
    const double C819 = C4340 - (C803 * C4342) / q - C4326 / q;
    const double C820 = C4336 - (C1150 * C4342) / q - C4331 / q;
    const double C1714 = (C907 * be) / q - (C2226 * C4342) / q - C4386 / q;
    const double C1778 =
        (C1072 * be) / q - (C1761 * C4342) / q + C2433 / q - (C2434 * p) / q;
    const double C1779 =
        (C1400 * be) / q - (C2433 * C4342) / q + C4381 - (C1761 * p) / q;
    const double C1780 = (C2458 * be) / q - (C2434 * C4342) / q +
                         (3 * C1761) / C609 - (C2463 * p) / q;
    const double C1811 =
        (C1088 * be) / q - (C2404 * C4342) / q + C4394 - (C2508 * p) / q;
    const double C1970 =
        (C1385 * be) / q - (C1954 * C4342) / q + C4404 - C4391 / q;
    const double C2061 = (C1473 * be) / q - (C2045 * C4342) / q - C4405 / q;
    const double C2062 =
        (C1603 * be) / q - (C2771 * C4342) / q + C4376 - C4395 / q;
    const double C2092 = (C1488 * be) / q - (C2625 * C4342) / q - C4396 / q;
    const double C2153 =
        (C1588 * be) / q - (C2136 * C4342) / q + C4406 - C4392 / q;
    const double C2154 =
        (C2950 * be) / q - (C2478 * C4342) / q + C4402 - C4397 / q;
    const double C3002 = -(C2986 * C4342 + C4446) / q;
    const double C3034 = -(C3546 * C4342 + C4450) / q;
    const double C3035 = -(C3561 * C4342 + C4451) / q;
    const double C3098 = C4445 - (C3752 * C4342) / q - (C3081 * p) / q;
    const double C3099 = C3752 / q - (C3081 * C4342) / q - (C3767 * p) / q;
    const double C3100 =
        (3 * C3081) / C609 - (C3767 * C4342) / q - (C3782 * p) / q;
    const double C3131 = C4458 - (C3724 * C4342) / q - (C3827 * p) / q;
    const double C3194 = -(C3177 * C4342 + C4463) / q;
    const double C3227 = -(C3886 * C4342 + C4464) / q;
    const double C3290 = C4468 - (C3274 * C4342) / q - C4455 / q;
    const double C3381 = -(C3365 * C4342 + C4469) / q;
    const double C3412 = -(C3944 * C4342 + C4460) / q;
    const double C3413 = -(C3621 * C4342 + C4454) / q;
    const double C314 =
        (C891 * be) / q - (C316 * C4341) / q + C895 / q - (C896 * p) / q;
    const double C315 =
        (C907 * be) / q - (C895 * C4341) / q + C4315 - (C316 * p) / q;
    const double C317 = (C923 * be) / q - (C896 * C4341) / q +
                        (3 * C316) / C609 - (C927 * p) / q;
    const double C414 = (C1072 * be) / q - (C415 * C4341) / q - C4354;
    const double C416 = (C1088 * be) / q - (C1076 * C4341) / q + C4299 - C4352;
    const double C513 = (C1236 * be) / q - (C514 * C4341) / q - C4356;
    const double C515 = (C1252 * be) / q - (C1240 * C4341) / q + C4303 - C4353;
    const double C612 =
        (C1385 * be) / q - (C614 * C4341) / q + C4337 - C4316 / q;
    const double C613 = (C1400 * be) / q - (C1105 * C4341) / q - C4320 / q;
    const double C615 =
        (C1415 * be) / q - (C942 * C4341) / q + C4328 - C4321 / q;
    const double C706 =
        (C1473 * be) / q - (C708 * C4341) / q + C4340 - C4318 / q;
    const double C707 = (C1488 * be) / q - (C1298 * C4341) / q - C4322 / q;
    const double C709 =
        (C1503 * be) / q - (C972 * C4341) / q + C4335 - C4323 / q;
    const double C802 = (C1588 * be) / q - (C803 * C4341) / q - C4339 / q;
    const double C804 =
        (C1603 * be) / q - (C1447 * C4341) / q + C4314 - C4324 / q;
    const double C1664 = C4381 - (C2226 * C4341) / q - (C1666 * p) / q;
    const double C1665 = C2226 / q - (C1666 * C4341) / q - (C2241 * p) / q;
    const double C1667 =
        (3 * C1666) / C609 - (C2241 * C4341) / q - (C2256 * p) / q;
    const double C1762 = -(C1761 * C4341 + C4391) / q;
    const double C1858 = -(C1857 * C4341 + C4398) / q;
    const double C1952 = -(C2433 * C4341 + C4386) / q;
    const double C2043 = -(C2625 * C4341 + C4388) / q;
    const double C2044 = C4406 - (C2045 * C4341) / q - C4384 / q;
    const double C2046 = C4401 - (C2301 * C4341) / q - C4389 / q;
    const double C2137 = -(C2136 * C4341 + C4405) / q;
    const double C2984 = C4445 - (C3546 * C4341) / q - (C2986 * p) / q;
    const double C2985 = C3546 / q - (C2986 * C4341) / q - (C3561 * p) / q;
    const double C2987 =
        (3 * C2986) / C609 - (C3561 * C4341) / q - (C3576 * p) / q;
    const double C3082 = -(C3081 * C4341 + C4455) / q;
    const double C3178 = -(C3177 * C4341 + C4462) / q;
    const double C3272 = -(C3752 * C4341 + C4450) / q;
    const double C3273 = C4467 - (C3274 * C4341) / q - C4446 / q;
    const double C3275 = C4458 - (C3591 * C4341) / q - C4451 / q;
    const double C3363 = -(C3944 * C4341 + C4452) / q;
    const double C3457 = -(C3456 * C4341 + C4469) / q;
    const double C1907 = (C1252 * be) / q - (C2567 * C4342) / q - C4419;
    const double C1986 = C4372 - (C2771 * C4344) / q - C4419;
    const double C1874 = (C1236 * be) / q - (C1857 * C4342) / q - C4418;
    const double C2169 = C4403 - (C2136 * C4344) / q - C4418;
    const double C1796 = C4365 - (C2478 * C4344) / q - C4417;
    const double C1875 = (C2607 * be) / q - (C2596 * C4342) / q + C4369 - C4417;
    const double C2093 = (C1503 * be) / q - (C2301 * C4342) / q - C4420;
    const double C2138 = C4380 - (C2771 * C4341) / q - C4420;
    const double C1715 = (C923 * be) / q - (C2241 * C4342) / q - C4416;
    const double C1955 = C4394 - (C2271 * C4341) / q - C4416;
    const double C1699 = C4361 - (C2301 * C4344) / q - C4415;
    const double C1859 = C4369 - (C2567 * C4341) / q - C4415;
    const double C1683 = (C1415 * be) / q - (C2271 * C4342) / q + C4361 - C4414;
    const double C1763 = C4365 - (C2404 * C4341) / q - C4414;
    const double C1682 = (C891 * be) / q - (C1666 * C4342) / q - C4413;
    const double C1953 = C4403 - (C1954 * C4341) / q - C4413;
    const double C3162 = (C2458 * be) / q - (C3767 * C4344) / q - C4482;
    const double C3474 = C4466 - (C3797 * C4342) / q - C4482;
    const double C3146 = (C1088 * be) / q - (C3724 * C4344) / q - C4481;
    const double C3382 = C4440 - (C4090 * C4342) / q - C4481;
    const double C3116 = (C2950 * be) / q - (C3797 * C4344) / q + C4429 - C4480;
    const double C3195 = C4433 - (C3915 * C4342) / q - C4480;
    const double C3115 = (C1072 * be) / q - (C3081 * C4344) / q - C4479;
    const double C3473 = C4470 - (C3456 * C4342) / q - C4479;
    const double C3066 = (C1415 * be) / q - (C3591 * C4344) / q - C4478;
    const double C3458 = C4444 - (C4090 * C4341) / q - C4478;
    const double C3051 = (C923 * be) / q - (C3561 * C4344) / q - C4477;
    const double C3366 = C4465 - (C3621 * C4341) / q - C4477;
    const double C3019 = (C1503 * be) / q - (C3621 * C4344) / q + C4425 - C4476;
    const double C3179 = C4433 - (C3886 * C4341) / q - C4476;
    const double C3018 = (C891 * be) / q - (C2986 * C4344) / q - C4475;
    const double C3364 = C4470 - (C3365 * C4341) / q - C4475;
    const double C3003 = C4425 - (C3591 * C4342) / q - C4474;
    const double C3083 = C4429 - (C3724 * C4341) / q - C4474;
    const double C4297 = C349 * p;
    const double C4309 = C382 / C609;
    const double C70 =
        (C378 * be) / q - (C348 * C4341) / q + C382 / q - (C383 * p) / q;
    const double C4298 = C398 * p;
    const double C4300 = C449 * p;
    const double C4302 = C481 * p;
    const double C4308 = C496 / C609;
    const double C119 = C496 / q - (C448 * C4342) / q - (C497 * p) / q;
    const double C4313 = C546 / C609;
    const double C140 = C546 / q - (C547 * C4344) / q + C4303 - (C548 * p) / q;
    const double C4304 = C580 * p;
    const double C4305 = C595 * p;
    const double C4307 = C646 * p;
    const double C4375 = C1730 / C609;
    const double C72 = C1730 / q - (C1698 * C4341) / q - (C1731 * p) / q;
    const double C4364 = C1746 * p;
    const double C4368 = C1826 * p;
    const double C4374 = C1841 / C609;
    const double C121 =
        (C477 * be) / q - (C1795 * C4342) / q + C1841 / q - (C1842 * p) / q;
    const double C4379 = C1890 / C609;
    const double C142 =
        C1890 / q - (C1891 * C4344) / q + C4369 - (C1892 * p) / q;
    const double C4370 = C1922 * p;
    const double C4371 = C1937 * p;
    const double C4439 = C3050 / C609;
    const double C4438 = C3161 / C609;
    const double C4443 = C3211 / C609;
    const double C144 = (C576 * be) / q - (C3210 * C4344) / q + C3211 / q +
                        C4433 - (C3212 * p) / q;
    const double C4434 = C3242 * p;
    const double C4435 = C3257 * p;
    const double C4437 = C3306 * p;
    const double C4294 = C333 * p;
    const double C63 =
        (C361 * be) / q - (C332 * C4341) / q + C365 / q - (C366 * p) / q;
    const double C91 = C431 / q - (C432 * C4342) / q + C4299 - (C433 * p) / q;
    const double C4301 = C465 * p;
    const double C133 = C4303 - (C530 * C4342) / q - (C531 * p) / q;
    const double C147 = (C560 * be) / q - (C530 * C4341) / q - (C564 * p) / q;
    const double C4311 = C725 * p;
    const double C4312 = C756 / C609;
    const double C93 = (C461 * be) / q - (C1778 * C4342) / q + C1779 / q +
                       C4365 - (C1780 * p) / q;
    const double C4367 = C1811 * p;
    const double C4377 = C2062 * p;
    const double C4378 = C2092 / C609;
    const double C67 = C3034 / q - (C3002 * C4341) / q - (C3035 * p) / q;
    const double C95 =
        C3098 / q - (C3099 * C4342) / q + C4429 - (C3100 * p) / q;
    const double C4431 = C3131 * p;
    const double C151 = -(C3194 * C4341 + C3227 * p) / q;
    const double C4442 = C3412 / C609;
    const double C40 = (C310 * be) / q - (C314 * C4341) / q + C315 / q + C4291 -
                       (C317 * p) / q;
    const double C84 =
        (C410 * be) / q - (C414 * C4341) / q + C4299 - (C416 * p) / q;
    const double C126 =
        (C509 * be) / q - (C513 * C4341) / q + C4303 - (C515 * p) / q;
    const double C168 = (C607 * be) / q - (C612 * C4341) / q + C613 / C609 +
                        C4306 - (C615 * p) / q;
    const double C210 = (C702 * be) / q - (C706 * C4341) / q + C707 / C609 +
                        C4310 - (C709 * p) / q;
    const double C252 =
        (C798 * be) / q - (C802 * C4341) / q + C4314 - (C804 * p) / q;
    const double C44 =
        C1664 / q - (C1665 * C4341) / q + C4361 - (C1667 * p) / q;
    const double C212 =
        C2043 / C609 - (C2044 * C4341) / q + C4376 - (C2046 * p) / q;
    const double C46 =
        C2984 / q - (C2985 * C4341) / q + C4425 - (C2987 * p) / q;
    const double C172 =
        C3272 / C609 - (C3273 * C4341) / q + C4436 - (C3275 * p) / q;
    const double C4373 = C1986 * p;
    const double C149 = -(C1874 * C4341 + C1907 * p) / q;
    const double C4366 = C1796 * p;
    const double C135 =
        (C560 * be) / q - (C1874 * C4342) / q + C4369 - (C1875 * p) / q;
    const double C254 = C4380 - (C2137 * C4341) / q - (C2138 * p) / q;
    const double C4363 = C1699 * p;
    const double C128 = C4369 - (C1858 * C4341) / q - (C1859 * p) / q;
    const double C4362 = C1683 * p;
    const double C86 = C4365 - (C1762 * C4341) / q - (C1763 * p) / q;
    const double C65 = C1714 / q - (C1682 * C4341) / q - (C1715 * p) / q;
    const double C170 =
        C1952 / C609 - (C1953 * C4341) / q + C4372 - (C1955 * p) / q;
    const double C4432 = C3146 * p;
    const double C4441 = C3382 * p;
    const double C4430 = C3116 * p;
    const double C137 = C4433 - (C3194 * C4342) / q - (C3195 * p) / q;
    const double C123 = C3161 / q - (C3115 * C4342) / q - (C3162 * p) / q;
    const double C4428 = C3066 * p;
    const double C256 = C4444 - (C3457 * C4341) / q - (C3458 * p) / q;
    const double C4427 = C3019 * p;
    const double C130 = C4433 - (C3178 * C4341) / q - (C3179 * p) / q;
    const double C74 = C3050 / q - (C3018 * C4341) / q - (C3051 * p) / q;
    const double C214 =
        C3363 / C609 - (C3364 * C4341) / q + C4440 - (C3366 * p) / q;
    const double C4426 = C3003 * p;
    const double C88 = C4429 - (C3082 * C4341) / q - (C3083 * p) / q;
    const double C4345 = C4297 / q;
    const double C77 = -(C348 * C4342 + C4298) / q;
    const double C4346 = C4300 / q;
    const double C4348 = C4302 / q;
    const double C196 =
        (C673 * be) / q - (C645 * C4341) / q + C4308 - C4298 / q;
    const double C4349 = C4304 / q;
    const double C161 = -(C547 * C4342 + C4305) / q;
    const double C266 = C4308 - (C835 * C4344) / q + C4314 - C4305 / q;
    const double C4350 = C4307 / q;
    const double C245 = -(C740 * C4342 + C4307) / q;
    const double C4409 = C4364 / q;
    const double C114 = -(C1795 * C4341 + C4368) / q;
    const double C205 =
        (C673 * be) / q - (C1985 * C4342) / q + C4375 - C4368 / q;
    const double C156 = -(C1891 * C4341 + C4370) / q;
    const double C226 = C4375 - (C2077 * C4344) / q + C4376 - C4370 / q;
    const double C4411 = C4371 / q;
    const double C158 = -(C3210 * C4341 + C4434) / q;
    const double C228 =
        (C769 * be) / q - (C3397 * C4344) / q + C4439 + C4440 - C4434 / q;
    const double C165 = -(C3210 * C4342 + C4435) / q;
    const double C270 =
        (C862 * be) / q - (C3489 * C4344) / q + C4438 + C4444 - C4435 / q;
    const double C186 =
        (C673 * be) / q - (C3305 * C4344) / q + C4436 - C4437 / q;
    const double C249 = -(C3397 * C4342 + C4437) / q;
    const double C284 = -(C3489 * C4341 + C4437) / q;
    const double C4343 = C4294 / q;
    const double C4347 = C4301 / q;
    const double C4351 = C4311 / q;
    const double C231 =
        (C752 * be) / q - (C724 * C4341) / q + C4312 - (C757 * p) / q;
    const double C259 = C4312 - (C819 * C4342) / q + C4314 - (C820 * p) / q;
    const double C107 = -(C1778 * C4341 + C4367) / q;
    const double C177 = (C658 * be) / q - (C1970 * C4342) / q + C1714 / C609 +
                        C4372 - C4367 / q;
    const double C219 =
        (C752 * be) / q - (C2061 * C4342) / q + C4376 - C4377 / q;
    const double C275 = -(C2153 * C4341 + C4377) / q;
    const double C233 = C4378 - (C2061 * C4341) / q - (C2093 * p) / q;
    const double C261 =
        (C847 * be) / q - (C2153 * C4342) / q + C4378 + C4380 - (C2154 * p) / q;
    const double C109 = -(C3099 * C4341 + C4431) / q;
    const double C179 = C3034 / C609 - (C3290 * C4342) / q + C4436 - C4431 / q;
    const double C235 = C4442 - (C3381 * C4341) / q - (C3413 * p) / q;
    const double C263 = C4442 - (C3473 * C4342) / q + C4444 - (C3474 * p) / q;
    const double C4412 = C4373 / q;
    const double C282 = -(C2169 * C4341 + C4373) / q;
    const double C4410 = C4366 / q;
    const double C4408 = C4363 / q;
    const double C4407 = C4362 / q;
    const double C116 = -(C3115 * C4341 + C4432) / q;
    const double C207 = C4439 - (C3305 * C4342) / q - C4432 / q;
    const double C221 = C4440 - (C3381 * C4342) / q - C4441 / q;
    const double C277 = -(C3473 * C4341 + C4441) / q;
    const double C4473 = C4430 / q;
    const double C81 = -(C3018 * C4342 + C4428) / q;
    const double C200 = C4438 - (C3305 * C4341) / q - C4428 / q;
    const double C4472 = C4427 / q;
    const double C4471 = C4426 / q;
    const double C56 = C4291 - (C348 * C4344) / q - C4345;
    const double C238 = (C769 * be) / q - (C740 * C4341) / q + C4313 - C4345;
    const double C98 = C4299 - (C448 * C4344) / q - C4346;
    const double C287 = C4313 - (C835 * C4342) / q - C4346;
    const double C112 = (C477 * be) / q - (C448 * C4341) / q - C4348;
    const double C203 = C4309 - (C645 * C4342) / q - C4348;
    const double C154 = (C576 * be) / q - (C547 * C4341) / q - C4349;
    const double C224 = C4309 - (C740 * C4344) / q + C4310 - C4349;
    const double C182 = C4306 - (C645 * C4344) / q - C4350;
    const double C280 = (C862 * be) / q - (C835 * C4341) / q - C4350;
    const double C79 = (C378 * be) / q - (C1698 * C4342) / q - C4409;
    const double C198 = C4374 - (C1985 * C4341) / q - C4409;
    const double C163 = (C576 * be) / q - (C1891 * C4342) / q - C4411;
    const double C268 = C4374 - (C2169 * C4344) / q + C4380 - C4411;
    const double C49 = C4291 - (C332 * C4342) / q - C4343;
    const double C189 =
        (C658 * be) / q - (C630 * C4341) / q + C431 / C609 - C4343;
    const double C105 = (C461 * be) / q - (C432 * C4341) / q - C4347;
    const double C175 = C365 / C609 - (C630 * C4342) / q + C4306 - C4347;
    const double C217 = C4310 - (C724 * C4342) / q - C4351;
    const double C273 = (C847 * be) / q - (C819 * C4341) / q - C4351;
    const double C184 = C4372 - (C1985 * C4344) / q - C4412;
    const double C247 = (C769 * be) / q - (C2077 * C4342) / q - C4412;
    const double C100 = C4365 - (C1795 * C4344) / q - C4410;
    const double C289 = (C862 * be) / q - (C2169 * C4342) / q + C4379 - C4410;
    const double C58 = C4361 - (C1698 * C4344) / q - C4408;
    const double C240 = C4379 - (C2077 * C4341) / q - C4408;
    const double C51 = (C361 * be) / q - (C1682 * C4342) / q + C4361 - C4407;
    const double C191 = C1779 / C609 - (C1970 * C4341) / q - C4407;
    const double C102 = (C477 * be) / q - (C3115 * C4344) / q + C4429 - C4473;
    const double C291 = C4443 - (C3489 * C4342) / q - C4473;
    const double C60 = (C378 * be) / q - (C3018 * C4344) / q + C4425 - C4472;
    const double C242 = C4443 - (C3397 * C4341) / q - C4472;
    const double C53 = C4425 - (C3002 * C4342) / q - C4471;
    const double C193 = C3098 / C609 - (C3290 * C4341) / q - C4471;
    etx[0] = C40;
    etx[1] = C49;
    etx[2] = C56;
    etx[3] = C63;
    etx[4] = C70;
    etx[5] = C77;
    etx[6] = C84;
    etx[7] = C91;
    etx[8] = C98;
    etx[9] = C105;
    etx[10] = C112;
    etx[11] = C119;
    etx[12] = C126;
    etx[13] = C133;
    etx[14] = C140;
    etx[15] = C147;
    etx[16] = C154;
    etx[17] = C161;
    etx[18] = C168;
    etx[19] = C175;
    etx[20] = C182;
    etx[21] = C189;
    etx[22] = C196;
    etx[23] = C203;
    etx[24] = C210;
    etx[25] = C217;
    etx[26] = C224;
    etx[27] = C231;
    etx[28] = C238;
    etx[29] = C245;
    etx[30] = C252;
    etx[31] = C259;
    etx[32] = C266;
    etx[33] = C273;
    etx[34] = C280;
    etx[35] = C287;
    ety[0] = C44;
    ety[1] = C51;
    ety[2] = C58;
    ety[3] = C65;
    ety[4] = C72;
    ety[5] = C79;
    ety[6] = C86;
    ety[7] = C93;
    ety[8] = C100;
    ety[9] = C107;
    ety[10] = C114;
    ety[11] = C121;
    ety[12] = C128;
    ety[13] = C135;
    ety[14] = C142;
    ety[15] = C149;
    ety[16] = C156;
    ety[17] = C163;
    ety[18] = C170;
    ety[19] = C177;
    ety[20] = C184;
    ety[21] = C191;
    ety[22] = C198;
    ety[23] = C205;
    ety[24] = C212;
    ety[25] = C219;
    ety[26] = C226;
    ety[27] = C233;
    ety[28] = C240;
    ety[29] = C247;
    ety[30] = C254;
    ety[31] = C261;
    ety[32] = C268;
    ety[33] = C275;
    ety[34] = C282;
    ety[35] = C289;
    etz[0] = C46;
    etz[1] = C53;
    etz[2] = C60;
    etz[3] = C67;
    etz[4] = C74;
    etz[5] = C81;
    etz[6] = C88;
    etz[7] = C95;
    etz[8] = C102;
    etz[9] = C109;
    etz[10] = C116;
    etz[11] = C123;
    etz[12] = C130;
    etz[13] = C137;
    etz[14] = C144;
    etz[15] = C151;
    etz[16] = C158;
    etz[17] = C165;
    etz[18] = C172;
    etz[19] = C179;
    etz[20] = C186;
    etz[21] = C193;
    etz[22] = C200;
    etz[23] = C207;
    etz[24] = C214;
    etz[25] = C221;
    etz[26] = C228;
    etz[27] = C235;
    etz[28] = C242;
    etz[29] = C249;
    etz[30] = C256;
    etz[31] = C263;
    etz[32] = C270;
    etz[33] = C277;
    etz[34] = C284;
    etz[35] = C291;
}
