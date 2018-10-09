/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2110_2_et(const double ae,
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
    const double C1897 = g[18];
    const double C1915 = g[19];
    const double C1991 = g[20];
    const double C2037 = g[21];
    const double C2082 = g[22];
    const double C2099 = g[23];
    const double C2175 = g[24];
    const double C2220 = g[25];
    const double C2265 = g[26];
    const double C2282 = g[27];
    const double C2358 = g[28];
    const double C2402 = g[29];
    const double C2446 = g[30];
    const double C2490 = g[31];
    const double C2533 = g[32];
    const double C2576 = g[33];
    const double C1901 = vrx[0];
    const double C1902 = vrx[1];
    const double C1903 = vrx[2];
    const double C1919 = vrx[3];
    const double C1934 = vrx[4];
    const double C1949 = vrx[5];
    const double C1964 = vrx[6];
    const double C1979 = vrx[7];
    const double C1995 = vrx[8];
    const double C2010 = vrx[9];
    const double C2025 = vrx[10];
    const double C2041 = vrx[11];
    const double C2070 = vrx[12];
    const double C2086 = vrx[13];
    const double C2087 = vrx[14];
    const double C2117 = vrx[15];
    const double C2132 = vrx[16];
    const double C2133 = vrx[17];
    const double C2148 = vrx[18];
    const double C2163 = vrx[19];
    const double C2193 = vrx[20];
    const double C2208 = vrx[21];
    const double C2238 = vrx[22];
    const double C2253 = vrx[23];
    const double C2269 = vrx[24];
    const double C2270 = vrx[25];
    const double C2300 = vrx[26];
    const double C2315 = vrx[27];
    const double C2330 = vrx[28];
    const double C2345 = vrx[29];
    const double C2346 = vrx[30];
    const double C2390 = vrx[31];
    const double C2434 = vrx[32];
    const double C2478 = vrx[33];
    const double C2623 = vry[0];
    const double C2624 = vry[1];
    const double C2625 = vry[2];
    const double C2640 = vry[3];
    const double C2655 = vry[4];
    const double C2670 = vry[5];
    const double C2685 = vry[6];
    const double C2700 = vry[7];
    const double C2715 = vry[8];
    const double C2730 = vry[9];
    const double C2745 = vry[10];
    const double C2760 = vry[11];
    const double C2789 = vry[12];
    const double C2804 = vry[13];
    const double C2805 = vry[14];
    const double C2834 = vry[15];
    const double C2849 = vry[16];
    const double C2850 = vry[17];
    const double C2865 = vry[18];
    const double C2880 = vry[19];
    const double C2909 = vry[20];
    const double C2924 = vry[21];
    const double C2953 = vry[22];
    const double C2968 = vry[23];
    const double C2983 = vry[24];
    const double C2984 = vry[25];
    const double C3013 = vry[26];
    const double C3028 = vry[27];
    const double C3043 = vry[28];
    const double C3058 = vry[29];
    const double C3059 = vry[30];
    const double C3102 = vry[31];
    const double C3145 = vry[32];
    const double C3188 = vry[33];
    const double C3330 = vrz[0];
    const double C3331 = vrz[1];
    const double C3332 = vrz[2];
    const double C3347 = vrz[3];
    const double C3362 = vrz[4];
    const double C3377 = vrz[5];
    const double C3392 = vrz[6];
    const double C3407 = vrz[7];
    const double C3422 = vrz[8];
    const double C3437 = vrz[9];
    const double C3452 = vrz[10];
    const double C3467 = vrz[11];
    const double C3496 = vrz[12];
    const double C3511 = vrz[13];
    const double C3512 = vrz[14];
    const double C3541 = vrz[15];
    const double C3556 = vrz[16];
    const double C3557 = vrz[17];
    const double C3572 = vrz[18];
    const double C3587 = vrz[19];
    const double C3616 = vrz[20];
    const double C3631 = vrz[21];
    const double C3660 = vrz[22];
    const double C3675 = vrz[23];
    const double C3690 = vrz[24];
    const double C3691 = vrz[25];
    const double C3720 = vrz[26];
    const double C3735 = vrz[27];
    const double C3750 = vrz[28];
    const double C3765 = vrz[29];
    const double C3766 = vrz[30];
    const double C3809 = vrz[31];
    const double C3852 = vrz[32];
    const double C3895 = vrz[33];
    const double C4052 = C2478 * p;
    const double C4051 = C2390 * p;
    const double C4050 = C2330 * p;
    const double C4049 = C2315 * p;
    const double C4048 = C2300 * p;
    const double C4047 = C2269 * p;
    const double C4046 = C2253 * p;
    const double C4045 = C2238 / q;
    const double C4044 = C2208 * p;
    const double C4043 = C2163 * p;
    const double C4042 = C2148 * p;
    const double C4041 = C2117 * p;
    const double C4040 = C2086 * p;
    const double C4039 = C2070 * p;
    const double C4038 = C2041 / q;
    const double C4037 = C2025 * p;
    const double C4036 = C2010 * p;
    const double C4035 = C1995 / q;
    const double C4034 = C1979 * p;
    const double C4033 = C1964 * p;
    const double C4032 = de * zCD;
    const double C4031 = be * zAB;
    const double C4030 = C1949 * p;
    const double C4029 = C1934 * p;
    const double C4028 = de * yCD;
    const double C4027 = be * yAB;
    const double C4026 = 2 * q;
    const double C4025 = de * xCD;
    const double C4024 = be * xAB;
    const double C4101 = C3188 * p;
    const double C4098 = C3102 * p;
    const double C4097 = C3043 * p;
    const double C4096 = C3028 * p;
    const double C4095 = C3013 * p;
    const double C4094 = C2984 * p;
    const double C4092 = C2968 * p;
    const double C4091 = C2953 / q;
    const double C4090 = C2924 * p;
    const double C4089 = C2880 * p;
    const double C4088 = C2865 * p;
    const double C4087 = C2834 * p;
    const double C4086 = C2805 * p;
    const double C4084 = C2789 * p;
    const double C4083 = C2760 / q;
    const double C4082 = C2745 * p;
    const double C4081 = C2730 * p;
    const double C4079 = C2715 / q;
    const double C4078 = C2700 * p;
    const double C4077 = C2685 * p;
    const double C4076 = C2670 * p;
    const double C4075 = C2655 * p;
    const double C4142 = C3895 * p;
    const double C4139 = C3809 * p;
    const double C4138 = C3750 * p;
    const double C4137 = C3735 * p;
    const double C4136 = C3720 * p;
    const double C4135 = C3691 * p;
    const double C4133 = C3675 * p;
    const double C4132 = C3660 / q;
    const double C4131 = C3631 * p;
    const double C4130 = C3587 * p;
    const double C4129 = C3572 * p;
    const double C4128 = C3541 * p;
    const double C4127 = C3512 * p;
    const double C4125 = C3496 * p;
    const double C4124 = C3467 / q;
    const double C4123 = C3452 * p;
    const double C4122 = C3437 * p;
    const double C4120 = C3422 / q;
    const double C4119 = C3407 * p;
    const double C4118 = C3392 * p;
    const double C4117 = C3377 * p;
    const double C4116 = C3362 * p;
    const double C4066 = C4050 / q;
    const double C4067 = C4048 / q;
    const double C4065 = C4047 / q;
    const double C4063 = C4046 / q;
    const double C4062 = C4042 / q;
    const double C4061 = C4041 / q;
    const double C4060 = C4040 / q;
    const double C4058 = C4039 / q;
    const double C4057 = C4036 / q;
    const double C4055 = C4031 + C4032;
    const double C4054 = C4027 + C4028;
    const double C4070 = C2345 / C4026;
    const double C4069 = C1919 / C4026;
    const double C4068 = C2132 / C4026;
    const double C4064 = C2270 / C4026;
    const double C4059 = C2087 / C4026;
    const double C4056 = C1902 / C4026;
    const double C4102 = C3058 / C4026;
    const double C4100 = C2640 / C4026;
    const double C4099 = C2849 / C4026;
    const double C4093 = C2983 / C4026;
    const double C4085 = C2804 / C4026;
    const double C4080 = C2623 / C4026;
    const double C4143 = C3765 / C4026;
    const double C4141 = C3347 / C4026;
    const double C4140 = C3556 / C4026;
    const double C4134 = C3690 / C4026;
    const double C4126 = C3511 / C4026;
    const double C4121 = C3330 / C4026;
    const double C4053 = C4024 + C4025;
    const double C4111 = C4098 / q;
    const double C4110 = C4096 / q;
    const double C4109 = C4095 / q;
    const double C4108 = C4092 / q;
    const double C4107 = C4084 / q;
    const double C4106 = C4082 / q;
    const double C4105 = C4081 / q;
    const double C4104 = C4076 / q;
    const double C4103 = C4075 / q;
    const double C4152 = C4133 / q;
    const double C4151 = C4131 / q;
    const double C4150 = C4130 / q;
    const double C4149 = C4129 / q;
    const double C4148 = C4125 / q;
    const double C4147 = C4123 / q;
    const double C4146 = C4122 / q;
    const double C4145 = C4119 / q;
    const double C4144 = C4118 / q;
    const double C450 = -(C1901 * C4055 + C4033) / q;
    const double C451 = -(C1902 * C4055 + C4034) / q;
    const double C478 = -(C1949 * C4055 + C4037) / q;
    const double C537 = -(C2086 * C4055 + C4042) / q;
    const double C538 = -(C2087 * C4055 + C4043) / q;
    const double C565 = -(C2133 * C4055 + C4044) / q;
    const double C624 = C4038 - (C2269 * C4055) / q - C4066;
    const double C625 = C2345 / q - (C2270 * C4055) / q - (C2346 * p) / q;
    const double C652 = C4045 - (C2315 * C4055) / q - C4051 / q;
    const double C679 =
        (3 * C2270) / C4026 - (C2346 * C4055) / q - (C2434 * p) / q;
    const double C709 = -(C1995 * C4055 + C4052) / q;
    const double C760 = C1995 / C4026 - (C2478 * C4055) / q - C4067;
    const double C945 = -(C2624 * C4055 + C4077) / q;
    const double C946 = -(C2623 * C4055 + C4078) / q;
    const double C973 = -(C2670 * C4055 + C4082) / q;
    const double C1029 = -(C2805 * C4055 + C4088) / q;
    const double C1030 = -(C2804 * C4055 + C4089) / q;
    const double C1057 = -(C2850 * C4055 + C4090) / q;
    const double C1113 = C4083 - (C2984 * C4055) / q - C4097 / q;
    const double C1114 = C3058 / q - (C2983 * C4055) / q - (C3059 * p) / q;
    const double C1168 =
        (3 * C2983) / C4026 - (C3059 * C4055) / q - (C3145 * p) / q;
    const double C1195 = -(C2715 * C4055 + C4101) / q;
    const double C1593 =
        (C2265 * be) / q - (C3691 * C4055) / q + C4124 - C4138 / q;
    const double C1594 =
        (C2282 * be) / q - (C3690 * C4055) / q + C3765 / q - (C3766 * p) / q;
    const double C1621 =
        (C2358 * be) / q - (C3735 * C4055) / q + C4132 - C4139 / q;
    const double C1648 = (C2402 * be) / q - (C3766 * C4055) / q +
                         (3 * C3690) / C4026 - (C3852 * p) / q;
    const double C1675 = (C2446 * be) / q - (C3422 * C4055) / q - C4142 / q;
    const double C1726 =
        (C2490 * be) / q - (C3895 * C4055) / q + C3422 / C4026 - C4136 / q;
    const double C439 = -(C1901 * C4054 + C4029) / q;
    const double C440 = -(C1902 * C4054 + C4030) / q;
    const double C496 = -(C1979 * C4054 + C4037) / q;
    const double C526 = C4035 - (C2086 * C4054) / q - C4061;
    const double C527 = C2132 / q - (C2087 * C4054) / q - (C2133 * p) / q;
    const double C556 =
        (3 * C2087) / C4026 - (C2133 * C4054) / q - (C2193 * p) / q;
    const double C583 = C4045 - (C2163 * C4054) / q - C4044 / q;
    const double C613 = -(C2269 * C4054 + C4048) / q;
    const double C614 = -(C2270 * C4054 + C4049) / q;
    const double C670 = -(C2346 * C4054 + C4051) / q;
    const double C751 = C2041 / C4026 - (C2478 * C4054) / q - C4062;
    const double C780 = -(C2041 * C4054 + C4052) / q;
    const double C1019 =
        (C2082 * be) / q - (C2805 * C4054) / q + C4079 - C4087 / q;
    const double C1020 =
        (C2099 * be) / q - (C2804 * C4054) / q + C2849 / q - (C2850 * p) / q;
    const double C1048 = (C2175 * be) / q - (C2850 * C4054) / q +
                         (3 * C2804) / C4026 - (C2909 * p) / q;
    const double C1075 =
        (C2220 * be) / q - (C2880 * C4054) / q + C4091 - C4090 / q;
    const double C1237 =
        (C2490 * be) / q - (C3188 * C4054) / q + C2760 / C4026 - C4088 / q;
    const double C1264 = (C2533 * be) / q - (C2760 * C4054) / q - C4101 / q;
    const double C1415 = -(C3331 * C4054 + C4116) / q;
    const double C1416 = -(C3330 * C4054 + C4117) / q;
    const double C1471 = -(C3407 * C4054 + C4123) / q;
    const double C1499 = C4120 - (C3512 * C4054) / q - C4128 / q;
    const double C1500 = C3556 / q - (C3511 * C4054) / q - (C3557 * p) / q;
    const double C1528 =
        (3 * C3511) / C4026 - (C3557 * C4054) / q - (C3616 * p) / q;
    const double C1583 = -(C3691 * C4054 + C4136) / q;
    const double C1584 = -(C3690 * C4054 + C4137) / q;
    const double C1639 = -(C3766 * C4054 + C4139) / q;
    const double C1744 = -(C3467 * C4054 + C4142) / q;
    const double C858 = C4070 - (C2238 * C4054) / q - C4043 / q;
    const double C699 = C4069 - (C1995 * C4054) / q - C4060;
    const double C790 = C4069 - (C2041 * C4055) / q - C4065;
    const double C868 = C4068 - (C2238 * C4055) / q - C4049 / q;
    const double C643 = C4064 - (C2315 * C4054) / q - C4063;
    const double C592 = C4059 - (C2163 * C4055) / q - C4063;
    const double C469 = C4056 - (C1949 * C4054) / q - C4057;
    const double C505 = C4056 - (C1979 * C4055) / q - C4058;
    const double C1339 =
        (C2576 * be) / q - (C2953 * C4054) / q + C4102 - C4089 / q;
    const double C1186 =
        (C2446 * be) / q - (C2715 * C4054) / q + C4100 - C4086 / q;
    const double C1273 = C4100 - (C2760 * C4055) / q - C4094 / q;
    const double C1666 = C4141 - (C3422 * C4054) / q - C4127 / q;
    const double C1753 =
        (C2533 * be) / q - (C3467 * C4055) / q + C4141 - C4135 / q;
    const double C1828 =
        (C2576 * be) / q - (C3660 * C4055) / q + C4140 - C4137 / q;
    const double C428 = (C1897 * be) / q - (C1901 * C4053) / q +
                        (3 * C1902) / C4026 - (C1903 * p) / q;
    const double C429 =
        (C1915 * be) / q - (C1902 * C4053) / q + C1919 / q - (C1901 * p) / q;
    const double C460 =
        (C1991 * be) / q - (C1949 * C4053) / q + C4035 - C4029 / q;
    const double C487 =
        (C2037 * be) / q - (C1979 * C4053) / q + C4038 - C4033 / q;
    const double C515 = (C2082 * be) / q - (C2086 * C4053) / q + C4059 - C4057;
    const double C516 = (C2099 * be) / q - (C2087 * C4053) / q - C4060;
    const double C547 = (C2175 * be) / q - (C2133 * C4053) / q - C4061;
    const double C574 = (C2220 * be) / q - (C2163 * C4053) / q - C4062;
    const double C602 = (C2265 * be) / q - (C2269 * C4053) / q + C4064 - C4058;
    const double C603 = (C2282 * be) / q - (C2270 * C4053) / q - C4065;
    const double C634 = (C2358 * be) / q - (C2315 * C4053) / q - C4067;
    const double C661 = (C2402 * be) / q - (C2346 * C4053) / q - C4066;
    const double C689 =
        (C2446 * be) / q - (C1995 * C4053) / q + C4068 - C4030 / q;
    const double C742 =
        (C2490 * be) / q - (C2478 * C4053) / q + C2238 / C4026 - C4037 / q;
    const double C770 =
        (C2533 * be) / q - (C2041 * C4053) / q + C4070 - C4034 / q;
    const double C848 = (C2576 * be) / q - (C2238 * C4053) / q - C4052 / q;
    const double C925 =
        (3 * C2623) / C4026 - (C2624 * C4053) / q - (C2625 * p) / q;
    const double C926 = C2640 / q - (C2623 * C4053) / q - (C2624 * p) / q;
    const double C982 = C4083 - (C2700 * C4053) / q - C4077 / q;
    const double C1010 = -(C2804 * C4053 + C4086) / q;
    const double C1039 = -(C2850 * C4053 + C4087) / q;
    const double C1066 = -(C2880 * C4053 + C4088) / q;
    const double C1094 = -(C2983 * C4053 + C4094) / q;
    const double C1123 = -(C3028 * C4053 + C4095) / q;
    const double C1150 = -(C3059 * C4053 + C4097) / q;
    const double C1255 = C4102 - (C2760 * C4053) / q - C4078 / q;
    const double C1330 = -(C2953 * C4053 + C4101) / q;
    const double C1405 =
        (3 * C3330) / C4026 - (C3331 * C4053) / q - (C3332 * p) / q;
    const double C1406 = C3347 / q - (C3330 * C4053) / q - (C3331 * p) / q;
    const double C1435 = C4120 - (C3377 * C4053) / q - C4116 / q;
    const double C1490 = -(C3511 * C4053 + C4127) / q;
    const double C1519 = -(C3557 * C4053 + C4128) / q;
    const double C1546 = -(C3587 * C4053 + C4129) / q;
    const double C1574 = -(C3690 * C4053 + C4135) / q;
    const double C1603 = -(C3735 * C4053 + C4136) / q;
    const double C1630 = -(C3766 * C4053 + C4138) / q;
    const double C1657 = C4140 - (C3422 * C4053) / q - C4117 / q;
    const double C1810 = -(C3660 * C4053 + C4142) / q;
    const double C1141 = C4091 - (C3028 * C4055) / q - C4111;
    const double C1159 = (C2402 * be) / q - (C3059 * C4054) / q - C4111;
    const double C1104 = (C2282 * be) / q - (C2983 * C4054) / q - C4110;
    const double C1348 = C4099 - (C2953 * C4055) / q - C4110;
    const double C1103 = (C2265 * be) / q - (C2984 * C4054) / q - C4109;
    const double C1246 = C2715 / C4026 - (C3188 * C4055) / q - C4109;
    const double C1084 = C4085 - (C2880 * C4055) / q - C4108;
    const double C1132 = (C2358 * be) / q - (C3028 * C4054) / q + C4093 - C4108;
    const double C1000 = C4080 - (C2700 * C4055) / q - C4107;
    const double C1093 = C4093 - (C2984 * C4053) / q - C4107;
    const double C991 = (C2037 * be) / q - (C2700 * C4054) / q - C4106;
    const double C1228 = C2953 / C4026 - (C3188 * C4053) / q - C4106;
    const double C964 = (C1991 * be) / q - (C2670 * C4054) / q + C4080 - C4105;
    const double C1009 = C4085 - (C2805 * C4053) / q - C4105;
    const double C936 = (C1915 * be) / q - (C2623 * C4054) / q - C4104;
    const double C1177 = C4099 - (C2715 * C4053) / q - C4104;
    const double C935 = (C1897 * be) / q - (C2624 * C4054) / q - C4103;
    const double C955 = C4079 - (C2670 * C4053) / q - C4103;
    const double C1564 = (C2220 * be) / q - (C3587 * C4055) / q + C4126 - C4152;
    const double C1612 = C4134 - (C3735 * C4054) / q - C4152;
    const double C1537 = (C2175 * be) / q - (C3557 * C4055) / q - C4151;
    const double C1555 = C4132 - (C3587 * C4054) / q - C4151;
    const double C1510 = (C2099 * be) / q - (C3511 * C4055) / q - C4150;
    const double C1819 = C4143 - (C3660 * C4054) / q - C4150;
    const double C1509 = (C2082 * be) / q - (C3512 * C4055) / q - C4149;
    const double C1717 = C3467 / C4026 - (C3895 * C4054) / q - C4149;
    const double C1480 = (C2037 * be) / q - (C3407 * C4055) / q + C4121 - C4148;
    const double C1573 = C4134 - (C3691 * C4053) / q - C4148;
    const double C1453 = (C1991 * be) / q - (C3377 * C4055) / q - C4147;
    const double C1708 = C3660 / C4026 - (C3895 * C4053) / q - C4147;
    const double C1444 = C4121 - (C3377 * C4054) / q - C4146;
    const double C1489 = C4126 - (C3512 * C4053) / q - C4146;
    const double C1426 = (C1915 * be) / q - (C3330 * C4055) / q - C4145;
    const double C1735 = C4143 - (C3467 * C4053) / q - C4145;
    const double C1425 = (C1897 * be) / q - (C3331 * C4055) / q - C4144;
    const double C1462 = C4124 - (C3407 * C4053) / q - C4144;
    etx[0] = C428;
    etx[1] = C429;
    etx[2] = C439;
    etx[3] = C440;
    etx[4] = C450;
    etx[5] = C451;
    etx[6] = C460;
    etx[7] = C469;
    etx[8] = C478;
    etx[9] = C487;
    etx[10] = C496;
    etx[11] = C505;
    etx[12] = C515;
    etx[13] = C516;
    etx[14] = C526;
    etx[15] = C527;
    etx[16] = C537;
    etx[17] = C538;
    etx[18] = C547;
    etx[19] = C556;
    etx[20] = C565;
    etx[21] = C574;
    etx[22] = C583;
    etx[23] = C592;
    etx[24] = C602;
    etx[25] = C603;
    etx[26] = C613;
    etx[27] = C614;
    etx[28] = C624;
    etx[29] = C625;
    etx[30] = C634;
    etx[31] = C643;
    etx[32] = C652;
    etx[33] = C661;
    etx[34] = C670;
    etx[35] = C679;
    etx[36] = C689;
    etx[37] = C699;
    etx[38] = C709;
    etx[39] = C742;
    etx[40] = C751;
    etx[41] = C760;
    etx[42] = C770;
    etx[43] = C780;
    etx[44] = C790;
    etx[45] = C848;
    etx[46] = C858;
    etx[47] = C868;
    ety[0] = C925;
    ety[1] = C926;
    ety[2] = C935;
    ety[3] = C936;
    ety[4] = C945;
    ety[5] = C946;
    ety[6] = C955;
    ety[7] = C964;
    ety[8] = C973;
    ety[9] = C982;
    ety[10] = C991;
    ety[11] = C1000;
    ety[12] = C1009;
    ety[13] = C1010;
    ety[14] = C1019;
    ety[15] = C1020;
    ety[16] = C1029;
    ety[17] = C1030;
    ety[18] = C1039;
    ety[19] = C1048;
    ety[20] = C1057;
    ety[21] = C1066;
    ety[22] = C1075;
    ety[23] = C1084;
    ety[24] = C1093;
    ety[25] = C1094;
    ety[26] = C1103;
    ety[27] = C1104;
    ety[28] = C1113;
    ety[29] = C1114;
    ety[30] = C1123;
    ety[31] = C1132;
    ety[32] = C1141;
    ety[33] = C1150;
    ety[34] = C1159;
    ety[35] = C1168;
    ety[36] = C1177;
    ety[37] = C1186;
    ety[38] = C1195;
    ety[39] = C1228;
    ety[40] = C1237;
    ety[41] = C1246;
    ety[42] = C1255;
    ety[43] = C1264;
    ety[44] = C1273;
    ety[45] = C1330;
    ety[46] = C1339;
    ety[47] = C1348;
    etz[0] = C1405;
    etz[1] = C1406;
    etz[2] = C1415;
    etz[3] = C1416;
    etz[4] = C1425;
    etz[5] = C1426;
    etz[6] = C1435;
    etz[7] = C1444;
    etz[8] = C1453;
    etz[9] = C1462;
    etz[10] = C1471;
    etz[11] = C1480;
    etz[12] = C1489;
    etz[13] = C1490;
    etz[14] = C1499;
    etz[15] = C1500;
    etz[16] = C1509;
    etz[17] = C1510;
    etz[18] = C1519;
    etz[19] = C1528;
    etz[20] = C1537;
    etz[21] = C1546;
    etz[22] = C1555;
    etz[23] = C1564;
    etz[24] = C1573;
    etz[25] = C1574;
    etz[26] = C1583;
    etz[27] = C1584;
    etz[28] = C1593;
    etz[29] = C1594;
    etz[30] = C1603;
    etz[31] = C1612;
    etz[32] = C1621;
    etz[33] = C1630;
    etz[34] = C1639;
    etz[35] = C1648;
    etz[36] = C1657;
    etz[37] = C1666;
    etz[38] = C1675;
    etz[39] = C1708;
    etz[40] = C1717;
    etz[41] = C1726;
    etz[42] = C1735;
    etz[43] = C1744;
    etz[44] = C1753;
    etz[45] = C1810;
    etz[46] = C1819;
    etz[47] = C1828;
}
