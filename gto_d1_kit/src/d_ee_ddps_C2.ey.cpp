/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2120_3_et(const double ae,
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
    const double C3373 = g[0];
    const double C3393 = g[1];
    const double C3474 = g[2];
    const double C3490 = g[3];
    const double C3506 = g[4];
    const double C3522 = g[5];
    const double C3568 = g[6];
    const double C3617 = g[7];
    const double C3633 = g[8];
    const double C3664 = g[9];
    const double C3714 = g[10];
    const double C3731 = g[11];
    const double C3761 = g[12];
    const double C3780 = g[13];
    const double C3861 = g[14];
    const double C3876 = g[15];
    const double C3891 = g[16];
    const double C3906 = g[17];
    const double C3952 = g[18];
    const double C4000 = g[19];
    const double C4015 = g[20];
    const double C4045 = g[21];
    const double C4095 = g[22];
    const double C4111 = g[23];
    const double C4141 = g[24];
    const double C4160 = g[25];
    const double C4241 = g[26];
    const double C4257 = g[27];
    const double C4272 = g[28];
    const double C4287 = g[29];
    const double C4332 = g[30];
    const double C4380 = g[31];
    const double C4395 = g[32];
    const double C4424 = g[33];
    const double C4473 = g[34];
    const double C4489 = g[35];
    const double C4518 = g[36];
    const double C4564 = g[37];
    const double C4579 = g[38];
    const double C4608 = g[39];
    const double C4656 = g[40];
    const double C4671 = g[41];
    const double C4700 = g[42];
    const double C4745 = g[43];
    const double C4761 = g[44];
    const double C4790 = g[45];
    const double C4834 = g[46];
    const double C4849 = g[47];
    const double C4878 = g[48];
    const double C4894 = g[49];
    const double C4910 = g[50];
    const double C4925 = g[51];
    const double C5147 = g[52];
    const double C5163 = g[53];
    const double C5178 = g[54];
    const double C5266 = g[55];
    const double C5282 = g[56];
    const double C5297 = g[57];
    const double C5397 = g[58];
    const double C5412 = g[59];
    const double C5427 = g[60];
    const double C5617 = g[61];
    const double C5632 = g[62];
    const double C5692 = g[63];
    const double C5707 = g[64];
    const double C5807 = g[65];
    const double C5822 = g[66];
    const double C5837 = g[67];
    const double C6025 = g[68];
    const double C6040 = g[69];
    const double C6084 = g[70];
    const double C6099 = g[71];
    const double C6171 = g[72];
    const double C6200 = g[73];
    const double C6215 = g[74];
    const double C6230 = g[75];
    const double C6259 = g[76];
    const double C8498 = g[77];
    const double C8600 = g[78];
    const double C8901 = g[79];
    const double C8973 = g[80];
    const double C11825 = g[81];
    const double C3380 = vrx[0];
    const double C3398 = vrx[1];
    const double C3574 = vrx[2];
    const double C3670 = vrx[3];
    const double C3767 = vrx[4];
    const double C3784 = vrx[5];
    const double C3956 = vrx[6];
    const double C4049 = vrx[7];
    const double C4147 = vrx[8];
    const double C4164 = vrx[9];
    const double C4336 = vrx[10];
    const double C4428 = vrx[11];
    const double C4523 = vrx[12];
    const double C4614 = vrx[13];
    const double C4705 = vrx[14];
    const double C4794 = vrx[15];
    const double C4882 = vrx[16];
    const double C4898 = vrx[17];
    const double C4914 = vrx[18];
    const double C4929 = vrx[19];
    const double C4944 = vrx[20];
    const double C4959 = vrx[21];
    const double C4988 = vrx[22];
    const double C5003 = vrx[23];
    const double C5018 = vrx[24];
    const double C5047 = vrx[25];
    const double C5062 = vrx[26];
    const double C5091 = vrx[27];
    const double C5120 = vrx[28];
    const double C5135 = vrx[29];
    const double C5151 = vrx[30];
    const double C5196 = vrx[31];
    const double C5211 = vrx[32];
    const double C5254 = vrx[33];
    const double C5270 = vrx[34];
    const double C5343 = vrx[35];
    const double C5445 = vrx[36];
    const double C5460 = vrx[37];
    const double C5502 = vrx[38];
    const double C5517 = vrx[39];
    const double C5532 = vrx[40];
    const double C5561 = vrx[41];
    const double C5576 = vrx[42];
    const double C5605 = vrx[43];
    const double C5650 = vrx[44];
    const double C5665 = vrx[45];
    const double C5680 = vrx[46];
    const double C5767 = vrx[47];
    const double C5855 = vrx[48];
    const double C5912 = vrx[49];
    const double C5927 = vrx[50];
    const double C5969 = vrx[51];
    const double C5998 = vrx[52];
    const double C6013 = vrx[53];
    const double C6072 = vrx[54];
    const double C6145 = vrx[55];
    const double C6294 = vry[0];
    const double C6311 = vry[1];
    const double C6482 = vry[2];
    const double C6575 = vry[3];
    const double C6669 = vry[4];
    const double C6685 = vry[5];
    const double C6852 = vry[6];
    const double C6942 = vry[7];
    const double C7037 = vry[8];
    const double C7053 = vry[9];
    const double C7220 = vry[10];
    const double C7309 = vry[11];
    const double C7401 = vry[12];
    const double C7489 = vry[13];
    const double C7577 = vry[14];
    const double C7663 = vry[15];
    const double C7748 = vry[16];
    const double C7763 = vry[17];
    const double C7778 = vry[18];
    const double C7792 = vry[19];
    const double C7807 = vry[20];
    const double C7822 = vry[21];
    const double C7851 = vry[22];
    const double C7866 = vry[23];
    const double C7881 = vry[24];
    const double C7910 = vry[25];
    const double C7925 = vry[26];
    const double C7954 = vry[27];
    const double C7983 = vry[28];
    const double C7998 = vry[29];
    const double C8013 = vry[30];
    const double C8056 = vry[31];
    const double C8071 = vry[32];
    const double C8114 = vry[33];
    const double C8129 = vry[34];
    const double C8200 = vry[35];
    const double C8299 = vry[36];
    const double C8314 = vry[37];
    const double C8356 = vry[38];
    const double C8371 = vry[39];
    const double C8386 = vry[40];
    const double C8415 = vry[41];
    const double C8430 = vry[42];
    const double C8459 = vry[43];
    const double C8503 = vry[44];
    const double C8518 = vry[45];
    const double C8533 = vry[46];
    const double C8619 = vry[47];
    const double C8704 = vry[48];
    const double C8761 = vry[49];
    const double C8776 = vry[50];
    const double C8818 = vry[51];
    const double C8847 = vry[52];
    const double C8862 = vry[53];
    const double C8920 = vry[54];
    const double C8992 = vry[55];
    const double C9136 = vrz[0];
    const double C9153 = vrz[1];
    const double C9324 = vrz[2];
    const double C9417 = vrz[3];
    const double C9511 = vrz[4];
    const double C9527 = vrz[5];
    const double C9694 = vrz[6];
    const double C9784 = vrz[7];
    const double C9879 = vrz[8];
    const double C9895 = vrz[9];
    const double C10062 = vrz[10];
    const double C10151 = vrz[11];
    const double C10243 = vrz[12];
    const double C10331 = vrz[13];
    const double C10419 = vrz[14];
    const double C10505 = vrz[15];
    const double C10590 = vrz[16];
    const double C10605 = vrz[17];
    const double C10620 = vrz[18];
    const double C10634 = vrz[19];
    const double C10649 = vrz[20];
    const double C10664 = vrz[21];
    const double C10693 = vrz[22];
    const double C10708 = vrz[23];
    const double C10723 = vrz[24];
    const double C10752 = vrz[25];
    const double C10767 = vrz[26];
    const double C10796 = vrz[27];
    const double C10825 = vrz[28];
    const double C10840 = vrz[29];
    const double C10855 = vrz[30];
    const double C10898 = vrz[31];
    const double C10913 = vrz[32];
    const double C10956 = vrz[33];
    const double C10971 = vrz[34];
    const double C11042 = vrz[35];
    const double C11141 = vrz[36];
    const double C11156 = vrz[37];
    const double C11198 = vrz[38];
    const double C11213 = vrz[39];
    const double C11228 = vrz[40];
    const double C11257 = vrz[41];
    const double C11272 = vrz[42];
    const double C11301 = vrz[43];
    const double C11344 = vrz[44];
    const double C11359 = vrz[45];
    const double C11374 = vrz[46];
    const double C11459 = vrz[47];
    const double C11544 = vrz[48];
    const double C11601 = vrz[49];
    const double C11616 = vrz[50];
    const double C11658 = vrz[51];
    const double C11687 = vrz[52];
    const double C11702 = vrz[53];
    const double C11759 = vrz[54];
    const double C11831 = vrz[55];
    const double C3375 = 2 * q;
    const double C12066 = C6013 * p;
    const double C12065 = C5998 * p;
    const double C12064 = C5912 * p;
    const double C12063 = C5855 * p;
    const double C12062 = C4336 * p;
    const double C12061 = C4614 / q;
    const double C12060 = C5767 * p;
    const double C12059 = C4794 / q;
    const double C12058 = C5680 * p;
    const double C12057 = C5665 * p;
    const double C12056 = C5605 * p;
    const double C12055 = C4794 * p;
    const double C12054 = C5576 * p;
    const double C12053 = C5561 * p;
    const double C12052 = C4049 * p;
    const double C12051 = C5532 * p;
    const double C12050 = C5517 * p;
    const double C12049 = C5445 * p;
    const double C12048 = C4147 * p;
    const double C12047 = C5343 * p;
    const double C12046 = C4705 / q;
    const double C12044 = C5254 * p;
    const double C12043 = C4614 * p;
    const double C12042 = C3767 * p;
    const double C12040 = C5211 * p;
    const double C12039 = C5196 * p;
    const double C12038 = C4523 / q;
    const double C12036 = C5135 * p;
    const double C12035 = C5120 * p;
    const double C12034 = C4705 * p;
    const double C12033 = C5091 * p;
    const double C12032 = C4523 * p;
    const double C12031 = C5062 * p;
    const double C12030 = C5047 * p;
    const double C12029 = C3670 * p;
    const double C12028 = C5018 * p;
    const double C12027 = C5003 * p;
    const double C12026 = C4988 * p;
    const double C12025 = C3574 * p;
    const double C12024 = C4959 * p;
    const double C12023 = C4944 * p;
    const double C11969 = de * zCD;
    const double C11968 = be * zAB;
    const double C11965 = de * yCD;
    const double C11964 = be * yAB;
    const double C11961 = de * xCD;
    const double C11960 = be * xAB;
    const double C12199 = C8862 * p;
    const double C12198 = C8847 * p;
    const double C12197 = C8761 * p;
    const double C12196 = C8704 * p;
    const double C12195 = C7220 * p;
    const double C12194 = C7489 / q;
    const double C12193 = C8619 * p;
    const double C12192 = C7663 / q;
    const double C12191 = C8533 * p;
    const double C12190 = C8518 * p;
    const double C12189 = C8459 * p;
    const double C12188 = C7663 * p;
    const double C12187 = C8430 * p;
    const double C12186 = C8415 * p;
    const double C12185 = C6942 * p;
    const double C12184 = C8386 * p;
    const double C12183 = C8371 * p;
    const double C12182 = C8299 * p;
    const double C12181 = C7037 * p;
    const double C12180 = C8200 * p;
    const double C12179 = C7577 / q;
    const double C12177 = C8114 * p;
    const double C12176 = C7489 * p;
    const double C12175 = C6669 * p;
    const double C12173 = C8071 * p;
    const double C12172 = C8056 * p;
    const double C12171 = C7401 / q;
    const double C12169 = C7998 * p;
    const double C12168 = C7983 * p;
    const double C12167 = C7577 * p;
    const double C12166 = C7954 * p;
    const double C12165 = C7401 * p;
    const double C12164 = C7925 * p;
    const double C12163 = C7910 * p;
    const double C12162 = C6575 * p;
    const double C12161 = C7881 * p;
    const double C12160 = C7866 * p;
    const double C12159 = C7851 * p;
    const double C12158 = C6482 * p;
    const double C12157 = C7822 * p;
    const double C12156 = C7807 * p;
    const double C12329 = C11702 * p;
    const double C12328 = C11687 * p;
    const double C12327 = C11601 * p;
    const double C12326 = C11544 * p;
    const double C12325 = C10062 * p;
    const double C12324 = C10331 / q;
    const double C12323 = C11459 * p;
    const double C12322 = C10505 / q;
    const double C12321 = C11374 * p;
    const double C12320 = C11359 * p;
    const double C12319 = C11301 * p;
    const double C12318 = C10505 * p;
    const double C12317 = C11272 * p;
    const double C12316 = C11257 * p;
    const double C12315 = C9784 * p;
    const double C12314 = C11228 * p;
    const double C12313 = C11213 * p;
    const double C12312 = C11141 * p;
    const double C12311 = C9879 * p;
    const double C12310 = C11042 * p;
    const double C12309 = C10419 / q;
    const double C12307 = C10956 * p;
    const double C12306 = C10331 * p;
    const double C12305 = C9511 * p;
    const double C12303 = C10913 * p;
    const double C12302 = C10898 * p;
    const double C12301 = C10243 / q;
    const double C12299 = C10840 * p;
    const double C12298 = C10825 * p;
    const double C12297 = C10419 * p;
    const double C12296 = C10796 * p;
    const double C12295 = C10243 * p;
    const double C12294 = C10767 * p;
    const double C12293 = C10752 * p;
    const double C12292 = C9417 * p;
    const double C12291 = C10723 * p;
    const double C12290 = C10708 * p;
    const double C12289 = C10693 * p;
    const double C12288 = C9324 * p;
    const double C12287 = C10664 * p;
    const double C12286 = C10649 * p;
    const double C12045 = C5270 / C3375;
    const double C12041 = C4882 / C3375;
    const double C12037 = C5151 / C3375;
    const double C12022 = C4929 / C3375;
    const double C12021 = C4794 / C3375;
    const double C12017 = C4705 / C3375;
    const double C12016 = C4614 / C3375;
    const double C12012 = C4523 / C3375;
    const double C12011 = C4428 / C3375;
    const double C12009 = C4336 / C3375;
    const double C12001 = C4164 / C3375;
    const double C12000 = C4147 / C3375;
    const double C11996 = C4049 / C3375;
    const double C11994 = C3956 / C3375;
    const double C11986 = C3784 / C3375;
    const double C11985 = C3767 / C3375;
    const double C11981 = C3670 / C3375;
    const double C11974 = C3574 / C3375;
    const double C11963 = C3398 / C3375;
    const double C11962 = C3380 / C3375;
    const double C12178 = C8129 / C3375;
    const double C12174 = C7748 / C3375;
    const double C12170 = C8013 / C3375;
    const double C12155 = C7792 / C3375;
    const double C12154 = C7663 / C3375;
    const double C12150 = C7577 / C3375;
    const double C12149 = C7489 / C3375;
    const double C12145 = C7401 / C3375;
    const double C12144 = C7309 / C3375;
    const double C12142 = C7220 / C3375;
    const double C12134 = C7053 / C3375;
    const double C12133 = C7037 / C3375;
    const double C12129 = C6942 / C3375;
    const double C12127 = C6852 / C3375;
    const double C12119 = C6685 / C3375;
    const double C12118 = C6669 / C3375;
    const double C12114 = C6575 / C3375;
    const double C12107 = C6482 / C3375;
    const double C12100 = C6311 / C3375;
    const double C12099 = C6294 / C3375;
    const double C12308 = C10971 / C3375;
    const double C12304 = C10590 / C3375;
    const double C12300 = C10855 / C3375;
    const double C12285 = C10634 / C3375;
    const double C12284 = C10505 / C3375;
    const double C12280 = C10419 / C3375;
    const double C12279 = C10331 / C3375;
    const double C12275 = C10243 / C3375;
    const double C12274 = C10151 / C3375;
    const double C12272 = C10062 / C3375;
    const double C12264 = C9895 / C3375;
    const double C12263 = C9879 / C3375;
    const double C12259 = C9784 / C3375;
    const double C12257 = C9694 / C3375;
    const double C12249 = C9527 / C3375;
    const double C12248 = C9511 / C3375;
    const double C12244 = C9417 / C3375;
    const double C12237 = C9324 / C3375;
    const double C12230 = C9153 / C3375;
    const double C12229 = C9136 / C3375;
    const double C12094 = C12060 / q;
    const double C12093 = C12057 / q;
    const double C12092 = C12053 / q;
    const double C12091 = C12051 / q;
    const double C12090 = C12047 / q;
    const double C12089 = C12044 / q;
    const double C12088 = C12040 / q;
    const double C12087 = C12039 / q;
    const double C12086 = C12030 / q;
    const double C12085 = C12028 / q;
    const double C12084 = C12026 / q;
    const double C12083 = C12024 / q;
    const double C12071 = C11968 + C11969;
    const double C12068 = C11964 + C11965;
    const double C12067 = C11960 + C11961;
    const double C12224 = C12193 / q;
    const double C12223 = C12190 / q;
    const double C12222 = C12186 / q;
    const double C12221 = C12184 / q;
    const double C12220 = C12180 / q;
    const double C12219 = C12177 / q;
    const double C12218 = C12173 / q;
    const double C12217 = C12172 / q;
    const double C12216 = C12163 / q;
    const double C12215 = C12161 / q;
    const double C12214 = C12159 / q;
    const double C12213 = C12157 / q;
    const double C12354 = C12323 / q;
    const double C12353 = C12320 / q;
    const double C12352 = C12316 / q;
    const double C12351 = C12314 / q;
    const double C12350 = C12310 / q;
    const double C12349 = C12307 / q;
    const double C12348 = C12303 / q;
    const double C12347 = C12302 / q;
    const double C12346 = C12293 / q;
    const double C12345 = C12291 / q;
    const double C12344 = C12289 / q;
    const double C12343 = C12287 / q;
    const double C3445 = -(C3380 * C12071 + C12027) / q;
    const double C3446 = C11962 - (C5003 * C12071) / q - C12085;
    const double C3461 = -(C3398 * C12071 + C12029) / q;
    const double C3462 = C11963 - (C3670 * C12071) / q - C12086;
    const double C3510 = -(C4898 * C12071 + C12033) / q;
    const double C3526 = -(C4882 * C12071 + C12034) / q;
    const double C3541 = -(C4944 * C12071 + C12035) / q;
    const double C3556 = -(C3574 * C12071 + C12036) / q;
    const double C3605 = C11974 - (C5135 * C12071) / q - C12088;
    const double C3637 = -(C4523 * C12071 + C12043) / q;
    const double C3652 = -(C4988 * C12071 + C12044) / q;
    const double C3702 = C3670 / q - (C5047 * C12071) / q - C12090;
    const double C3735 = C12041 - (C4705 * C12071) / q - C12048 / q;
    const double C3832 = -(C3767 * C12071 + C12050) / q;
    const double C3833 = C11985 - (C5517 * C12071) / q - C12091;
    const double C3848 = -(C3784 * C12071 + C12052) / q;
    const double C3849 = C11986 - (C4049 * C12071) / q - C12092;
    const double C3924 = -(C5445 * C12071 + C12054) / q;
    const double C3939 = -(C5151 * C12071 + C12055) / q;
    const double C3940 = -(C3956 * C12071 + C12056) / q;
    const double C3988 = C11994 - (C5605 * C12071) / q - C12093;
    const double C4033 = -(C5502 * C12071 + C12058) / q;
    const double C4083 = C4049 / q - (C5561 * C12071) / q - C12094;
    const double C4129 = C12037 - (C4794 * C12071) / q - C12062 / q;
    const double C4211 = C12046 - (C4147 * C12071) / q - C12064 / q;
    const double C4212 =
        (3 * C4147) / C3375 - (C5912 * C12071) / q - (C5927 * p) / q;
    const double C4227 = C12022 - (C5270 * C12071) / q - (C4164 * p) / q;
    const double C4228 = C5270 / q - (C4164 * C12071) / q - (C4428 * p) / q;
    const double C4229 =
        (3 * C4164) / C3375 - (C4428 * C12071) / q - (C5969 * p) / q;
    const double C4305 = C12061 - (C5855 * C12071) / q - C12065 / q;
    const double C4320 = C12059 - (C4336 * C12071) / q - C12066 / q;
    const double C4368 =
        (3 * C4336) / C3375 - (C6013 * C12071) / q - (C6072 * p) / q;
    const double C4461 =
        (2 * C4428) / q - (C5969 * C12071) / q - (C6145 * p) / q;
    const double C4552 = C12012 - (C4614 * C12071) / q - C12063 / q;
    const double C6358 = -(C6294 * C12071 + C12160) / q;
    const double C6374 = -(C6311 * C12071 + C12162) / q;
    const double C6420 = -(C7763 * C12071 + C12166) / q;
    const double C6435 = -(C7748 * C12071 + C12167) / q;
    const double C6450 = -(C7807 * C12071 + C12168) / q;
    const double C6465 = -(C6482 * C12071 + C12169) / q;
    const double C6543 = -(C7401 * C12071 + C12176) / q;
    const double C6558 = -(C7851 * C12071 + C12177) / q;
    const double C6638 = C12174 - (C7577 * C12071) / q - C12181 / q;
    const double C6733 = -(C6669 * C12071 + C12183) / q;
    const double C6749 = -(C6685 * C12071 + C12185) / q;
    const double C6821 = -(C8299 * C12071 + C12187) / q;
    const double C6836 = -(C8013 * C12071 + C12188) / q;
    const double C6837 = -(C6852 * C12071 + C12189) / q;
    const double C6927 = -(C8356 * C12071 + C12191) / q;
    const double C7020 = C12170 - (C7663 * C12071) / q - C12195 / q;
    const double C7100 = C12179 - (C7037 * C12071) / q - C12197 / q;
    const double C7101 =
        (3 * C7037) / C3375 - (C8761 * C12071) / q - (C8776 * p) / q;
    const double C7116 = C12155 - (C8129 * C12071) / q - (C7053 * p) / q;
    const double C7117 = C8129 / q - (C7053 * C12071) / q - (C7309 * p) / q;
    const double C7118 =
        (3 * C7053) / C3375 - (C7309 * C12071) / q - (C8818 * p) / q;
    const double C7190 = C12194 - (C8704 * C12071) / q - C12198 / q;
    const double C7205 = C12192 - (C7220 * C12071) / q - C12199 / q;
    const double C7252 =
        (3 * C7220) / C3375 - (C8862 * C12071) / q - (C8920 * p) / q;
    const double C7342 =
        (2 * C7309) / q - (C8818 * C12071) / q - (C8992 * p) / q;
    const double C7430 = C12145 - (C7489 * C12071) / q - C12196 / q;
    const double C9200 = -(C4894 * de + C9136 * C12071 + C12290) / q;
    const double C9216 = -(C4878 * de + C9153 * C12071 + C12292) / q;
    const double C9262 = -(C4910 * de + C10605 * C12071 + C12296) / q;
    const double C9277 = -(C4925 * de + C10590 * C12071 + C12297) / q;
    const double C9292 = -(C5178 * de + C10649 * C12071 + C12298) / q;
    const double C9307 = -(C5163 * de + C9324 * C12071 + C12299) / q;
    const double C9385 = -(C5147 * de + C10243 * C12071 + C12306) / q;
    const double C9400 = -(C5427 * de + C10693 * C12071 + C12307) / q;
    const double C9480 =
        C12304 - (C5266 * de + C10419 * C12071) / q - C12311 / q;
    const double C9575 = -(C5412 * de + C9511 * C12071 + C12313) / q;
    const double C9591 = -(C5397 * de + C9527 * C12071 + C12315) / q;
    const double C9663 = -(C5632 * de + C11141 * C12071 + C12317) / q;
    const double C9678 = -(C6171 * de + C10855 * C12071 + C12318) / q;
    const double C9679 = -(C5617 * de + C9694 * C12071 + C12319) / q;
    const double C9769 = -(C8498 * de + C11198 * C12071 + C12321) / q;
    const double C9862 =
        C12300 - (C6200 * de + C10505 * C12071) / q - C12325 / q;
    const double C9942 =
        C12309 - (C5822 * de + C9879 * C12071) / q - C12327 / q;
    const double C9943 = (3 * C9879) / C3375 -
                         (C6099 * de + C11601 * C12071) / q - (C11616 * p) / q;
    const double C9958 =
        C12285 - (C6259 * de + C10971 * C12071) / q - (C9895 * p) / q;
    const double C9959 =
        C10971 / q - (C5807 * de + C9895 * C12071) / q - (C10151 * p) / q;
    const double C9960 = (3 * C9895) / C3375 -
                         (C6084 * de + C10151 * C12071) / q - (C11658 * p) / q;
    const double C10032 =
        C12324 - (C6040 * de + C11544 * C12071) / q - C12328 / q;
    const double C10047 =
        C12322 - (C6025 * de + C10062 * C12071) / q - C12329 / q;
    const double C10094 = (3 * C10062) / C3375 -
                          (C8973 * de + C11702 * C12071) / q - (C11759 * p) / q;
    const double C10184 = (2 * C10151) / q -
                          (C11825 * de + C11658 * C12071) / q -
                          (C11831 * p) / q;
    const double C10272 =
        C12275 - (C6215 * de + C10331 * C12071) / q - C12326 / q;
    const double C3413 = -(C3380 * C12068 + C12023) / q;
    const double C3414 = C11962 - (C4944 * C12068) / q - C12083;
    const double C3429 = -(C3398 * C12068 + C12025) / q;
    const double C3430 = C11963 - (C3574 * C12068) / q - C12084;
    const double C3478 = -(C4898 * C12068 + C12031) / q;
    const double C3494 = -(C4882 * C12068 + C12032) / q;
    const double C3590 = C3574 / q - (C4988 * C12068) / q - C12087;
    const double C3621 = C12041 - (C4523 * C12068) / q - C12042 / q;
    const double C3686 = -(C3670 * C12068 + C12036) / q;
    const double C3687 = C11981 - (C5135 * C12068) / q - C12089;
    const double C3718 = -(C4705 * C12068 + C12043) / q;
    const double C3719 = -(C5003 * C12068 + C12035) / q;
    const double C3799 = C12038 - (C3767 * C12068) / q - C12049 / q;
    const double C3800 =
        (3 * C3767) / C3375 - (C5445 * C12068) / q - (C5460 * p) / q;
    const double C3815 = C12022 - (C5151 * C12068) / q - (C3784 * p) / q;
    const double C3816 = C5151 / q - (C3784 * C12068) / q - (C3956 * p) / q;
    const double C3817 =
        (3 * C3784) / C3375 - (C3956 * C12068) / q - (C5502 * p) / q;
    const double C3973 =
        (2 * C3956) / q - (C5502 * C12068) / q - (C5650 * p) / q;
    const double C4066 = C12045 - (C4794 * C12068) / q - C12052 / q;
    const double C4067 = C12059 - (C4049 * C12068) / q - C12056 / q;
    const double C4068 =
        (3 * C4049) / C3375 - (C5605 * C12068) / q - C12058 / q;
    const double C4099 = C12061 - (C5517 * C12068) / q - C12054 / q;
    const double C4179 = -(C4147 * C12068 + C12063) / q;
    const double C4180 = C12000 - (C5855 * C12068) / q - C12091;
    const double C4195 = -(C4164 * C12068 + C12062) / q;
    const double C4196 = C12001 - (C4336 * C12068) / q - C12092;
    const double C4245 = -(C5047 * C12068 + C12040) / q;
    const double C4353 = C4336 / q - (C5561 * C12068) / q - C12093;
    const double C4445 = -(C4428 * C12068 + C12066) / q;
    const double C4446 = C12011 - (C6013 * C12068) / q - C12094;
    const double C4477 = -(C5912 * C12068 + C12065) / q;
    const double C4630 = C12017 - (C4614 * C12068) / q - C12050 / q;
    const double C4749 = -(C5270 * C12068 + C12055) / q;
    const double C6326 = -(C4894 * de + C6294 * C12068 + C12156) / q;
    const double C6342 = -(C4878 * de + C6311 * C12068 + C12158) / q;
    const double C6390 = -(C4910 * de + C7763 * C12068 + C12164) / q;
    const double C6405 = -(C4925 * de + C7748 * C12068 + C12165) / q;
    const double C6528 =
        C12174 - (C5147 * de + C7401 * C12068) / q - C12175 / q;
    const double C6591 = -(C5282 * de + C6575 * C12068 + C12169) / q;
    const double C6622 = -(C5266 * de + C7577 * C12068 + C12176) / q;
    const double C6623 = -(C5297 * de + C7866 * C12068 + C12168) / q;
    const double C6700 =
        C12171 - (C5412 * de + C6669 * C12068) / q - C12182 / q;
    const double C6701 = (3 * C6669) / C3375 -
                         (C5632 * de + C8299 * C12068) / q - (C8314 * p) / q;
    const double C6716 =
        C12155 - (C6171 * de + C8013 * C12068) / q - (C6685 * p) / q;
    const double C6717 =
        C8013 / q - (C5397 * de + C6685 * C12068) / q - (C6852 * p) / q;
    const double C6718 = (3 * C6685) / C3375 -
                         (C5617 * de + C6852 * C12068) / q - (C8356 * p) / q;
    const double C6869 =
        (2 * C6852) / q - (C8498 * de + C8356 * C12068) / q - (C8503 * p) / q;
    const double C6959 =
        C12178 - (C6200 * de + C7663 * C12068) / q - C12185 / q;
    const double C6960 =
        C12192 - (C5692 * de + C6942 * C12068) / q - C12189 / q;
    const double C6961 =
        (3 * C6942) / C3375 - (C8600 * de + C8459 * C12068) / q - C12191 / q;
    const double C6991 =
        C12194 - (C5707 * de + C8371 * C12068) / q - C12187 / q;
    const double C7068 = -(C5822 * de + C7037 * C12068 + C12196) / q;
    const double C7084 = -(C5807 * de + C7053 * C12068 + C12195) / q;
    const double C7133 = -(C5837 * de + C7910 * C12068 + C12173) / q;
    const double C7326 = -(C6084 * de + C7309 * C12068 + C12199) / q;
    const double C7357 = -(C6099 * de + C8761 * C12068 + C12198) / q;
    const double C7505 =
        C12150 - (C6215 * de + C7489 * C12068) / q - C12183 / q;
    const double C7620 = -(C6259 * de + C8129 * C12068 + C12188) / q;
    const double C9168 = -(C9136 * C12068 + C12286) / q;
    const double C9184 = -(C9153 * C12068 + C12288) / q;
    const double C9232 = -(C10605 * C12068 + C12294) / q;
    const double C9247 = -(C10590 * C12068 + C12295) / q;
    const double C9370 = C12304 - (C10243 * C12068) / q - C12305 / q;
    const double C9433 = -(C9417 * C12068 + C12299) / q;
    const double C9464 = -(C10419 * C12068 + C12306) / q;
    const double C9465 = -(C10708 * C12068 + C12298) / q;
    const double C9542 = C12301 - (C9511 * C12068) / q - C12312 / q;
    const double C9543 =
        (3 * C9511) / C3375 - (C11141 * C12068) / q - (C11156 * p) / q;
    const double C9558 = C12285 - (C10855 * C12068) / q - (C9527 * p) / q;
    const double C9559 = C10855 / q - (C9527 * C12068) / q - (C9694 * p) / q;
    const double C9560 =
        (3 * C9527) / C3375 - (C9694 * C12068) / q - (C11198 * p) / q;
    const double C9711 =
        (2 * C9694) / q - (C11198 * C12068) / q - (C11344 * p) / q;
    const double C9801 = C12308 - (C10505 * C12068) / q - C12315 / q;
    const double C9802 = C12322 - (C9784 * C12068) / q - C12319 / q;
    const double C9803 =
        (3 * C9784) / C3375 - (C11301 * C12068) / q - C12321 / q;
    const double C9833 = C12324 - (C11213 * C12068) / q - C12317 / q;
    const double C9910 = -(C9879 * C12068 + C12326) / q;
    const double C9926 = -(C9895 * C12068 + C12325) / q;
    const double C9975 = -(C10752 * C12068 + C12303) / q;
    const double C10168 = -(C10151 * C12068 + C12329) / q;
    const double C10199 = -(C11601 * C12068 + C12328) / q;
    const double C10347 = C12280 - (C10331 * C12068) / q - C12313 / q;
    const double C10462 = -(C10971 * C12068 + C12318) / q;
    const double C3378 =
        C4882 / q - (C4878 * de + C3398 * C12067) / q - (C3380 * p) / q;
    const double C3379 = (3 * C3398) / C3375 -
                         (C4894 * de + C3380 * C12067) / q - (C4898 * p) / q;
    const double C3381 =
        (2 * C3380) / q - (C4910 * de + C4898 * C12067) / q - (C4914 * p) / q;
    const double C3397 =
        C12022 - (C4925 * de + C4882 * C12067) / q - (C3398 * p) / q;
    const double C3572 =
        C12037 - (C5147 * de + C4523 * C12067) / q - C12025 / q;
    const double C3573 =
        C12038 - (C5163 * de + C3574 * C12067) / q - C12023 / q;
    const double C3575 =
        (3 * C3574) / C3375 - (C5178 * de + C4944 * C12067) / q - C12031 / q;
    const double C3668 =
        C12045 - (C5266 * de + C4705 * C12067) / q - C12029 / q;
    const double C3669 =
        C12046 - (C5282 * de + C3670 * C12067) / q - C12027 / q;
    const double C3671 =
        (3 * C3670) / C3375 - (C5297 * de + C5003 * C12067) / q - C12033 / q;
    const double C3765 = -(C5397 * de + C3784 * C12067 + C12042) / q;
    const double C3766 = C11986 - (C5412 * de + C3767 * C12067) / q - C12084;
    const double C3768 = C3767 / q - (C5427 * de + C4988 * C12067) / q - C12083;
    const double C3957 = -(C5617 * de + C3956 * C12067 + C12049) / q;
    const double C3958 = C11994 - (C5632 * de + C5445 * C12067) / q - C12087;
    const double C4050 = -(C5692 * de + C4049 * C12067 + C12050) / q;
    const double C4051 = C11996 - (C5707 * de + C5517 * C12067) / q - C12089;
    const double C4145 = -(C5807 * de + C4164 * C12067 + C12048) / q;
    const double C4146 = C12001 - (C5822 * de + C4147 * C12067) / q - C12086;
    const double C4148 = C4147 / q - (C5837 * de + C5047 * C12067) / q - C12085;
    const double C4337 = -(C6025 * de + C4336 * C12067 + C12063) / q;
    const double C4338 = C12009 - (C6040 * de + C5855 * C12067) / q - C12088;
    const double C4429 = -(C6084 * de + C4428 * C12067 + C12064) / q;
    const double C4430 = C12011 - (C6099 * de + C5912 * C12067) / q - C12090;
    const double C4522 = -(C6171 * de + C5151 * C12067 + C12032) / q;
    const double C4612 = -(C6200 * de + C4794 * C12067 + C12043) / q;
    const double C4613 =
        C12021 - (C6215 * de + C4614 * C12067) / q - C12036 / q;
    const double C4615 =
        C12061 - (C6230 * de + C5135 * C12067) / q - C12035 / q;
    const double C4704 = -(C6259 * de + C5270 * C12067 + C12034) / q;
    const double C6292 = C7748 / q - (C6311 * C12067) / q - (C6294 * p) / q;
    const double C6293 =
        (3 * C6311) / C3375 - (C6294 * C12067) / q - (C7763 * p) / q;
    const double C6295 =
        (2 * C6294) / q - (C7763 * C12067) / q - (C7778 * p) / q;
    const double C6310 = C12155 - (C7748 * C12067) / q - (C6311 * p) / q;
    const double C6480 = C12170 - (C7401 * C12067) / q - C12158 / q;
    const double C6481 = C12171 - (C6482 * C12067) / q - C12156 / q;
    const double C6483 =
        (3 * C6482) / C3375 - (C7807 * C12067) / q - C12164 / q;
    const double C6573 = C12178 - (C7577 * C12067) / q - C12162 / q;
    const double C6574 = C12179 - (C6575 * C12067) / q - C12160 / q;
    const double C6576 =
        (3 * C6575) / C3375 - (C7866 * C12067) / q - C12166 / q;
    const double C6667 = -(C6685 * C12067 + C12175) / q;
    const double C6853 = -(C6852 * C12067 + C12182) / q;
    const double C6943 = -(C6942 * C12067 + C12183) / q;
    const double C7035 = -(C7053 * C12067 + C12181) / q;
    const double C7221 = -(C7220 * C12067 + C12196) / q;
    const double C7310 = -(C7309 * C12067 + C12197) / q;
    const double C7400 = -(C8013 * C12067 + C12165) / q;
    const double C7487 = -(C7663 * C12067 + C12176) / q;
    const double C7488 = C12154 - (C7489 * C12067) / q - C12169 / q;
    const double C7490 = C12194 - (C7998 * C12067) / q - C12168 / q;
    const double C7576 = -(C8129 * C12067 + C12167) / q;
    const double C9134 = C10590 / q - (C9153 * C12067) / q - (C9136 * p) / q;
    const double C9135 =
        (3 * C9153) / C3375 - (C9136 * C12067) / q - (C10605 * p) / q;
    const double C9137 =
        (2 * C9136) / q - (C10605 * C12067) / q - (C10620 * p) / q;
    const double C9152 = C12285 - (C10590 * C12067) / q - (C9153 * p) / q;
    const double C9322 = C12300 - (C10243 * C12067) / q - C12288 / q;
    const double C9323 = C12301 - (C9324 * C12067) / q - C12286 / q;
    const double C9325 =
        (3 * C9324) / C3375 - (C10649 * C12067) / q - C12294 / q;
    const double C9415 = C12308 - (C10419 * C12067) / q - C12292 / q;
    const double C9416 = C12309 - (C9417 * C12067) / q - C12290 / q;
    const double C9418 =
        (3 * C9417) / C3375 - (C10708 * C12067) / q - C12296 / q;
    const double C9509 = -(C9527 * C12067 + C12305) / q;
    const double C9695 = -(C9694 * C12067 + C12312) / q;
    const double C9785 = -(C9784 * C12067 + C12313) / q;
    const double C9877 = -(C9895 * C12067 + C12311) / q;
    const double C10063 = -(C10062 * C12067 + C12326) / q;
    const double C10152 = -(C10151 * C12067 + C12327) / q;
    const double C10242 = -(C10855 * C12067 + C12295) / q;
    const double C10329 = -(C10505 * C12067 + C12306) / q;
    const double C10330 = C12284 - (C10331 * C12067) / q - C12299 / q;
    const double C10332 = C12324 - (C10840 * C12067) / q - C12298 / q;
    const double C10418 = -(C10971 * C12067 + C12297) / q;
    const double C6976 = C6942 / q - (C8415 * C12071) / q - C12224;
    const double C7327 = C12144 - (C8973 * de + C8862 * C12068) / q - C12224;
    const double C6884 = C12127 - (C8459 * C12071) / q - C12223;
    const double C7237 = C7220 / q - (C8901 * de + C8415 * C12068) / q - C12223;
    const double C6750 = C12119 - (C6942 * C12071) / q - C12222;
    const double C7085 = C12134 - (C6025 * de + C7220 * C12068) / q - C12222;
    const double C6734 = C12118 - (C8371 * C12071) / q - C12221;
    const double C7069 = C12133 - (C6040 * de + C8704 * C12068) / q - C12221;
    const double C6607 = C6575 / q - (C7910 * C12071) / q - C12220;
    const double C7311 = C12144 - (C8761 * C12067) / q - C12220;
    const double C6592 = C12114 - (C6230 * de + C7998 * C12068) / q - C12219;
    const double C6944 = C12129 - (C8371 * C12067) / q - C12219;
    const double C6513 = C12107 - (C7998 * C12071) / q - C12218;
    const double C7222 = C12142 - (C8704 * C12067) / q - C12218;
    const double C6498 = C6482 / q - (C5427 * de + C7851 * C12068) / q - C12217;
    const double C6854 = C12127 - (C8299 * C12067) / q - C12217;
    const double C6375 = C12100 - (C6575 * C12071) / q - C12216;
    const double C7036 = C12134 - (C7037 * C12067) / q - C12216;
    const double C6359 = C12099 - (C7866 * C12071) / q - C12215;
    const double C7038 = C7037 / q - (C7910 * C12067) / q - C12215;
    const double C6343 = C12100 - (C5163 * de + C6482 * C12068) / q - C12214;
    const double C6668 = C12119 - (C6669 * C12067) / q - C12214;
    const double C6327 = C12099 - (C5178 * de + C7807 * C12068) / q - C12213;
    const double C6670 = C6669 / q - (C7851 * C12067) / q - C12213;
    const double C9818 =
        C9784 / q - (C8901 * de + C11257 * C12071) / q - C12354;
    const double C10169 = C12274 - (C11702 * C12068) / q - C12354;
    const double C9726 = C12257 - (C8600 * de + C11301 * C12071) / q - C12353;
    const double C10079 = C10062 / q - (C11257 * C12068) / q - C12353;
    const double C9592 = C12249 - (C5692 * de + C9784 * C12071) / q - C12352;
    const double C9927 = C12264 - (C10062 * C12068) / q - C12352;
    const double C9576 = C12248 - (C5707 * de + C11213 * C12071) / q - C12351;
    const double C9911 = C12263 - (C11544 * C12068) / q - C12351;
    const double C9449 =
        C9417 / q - (C5837 * de + C10752 * C12071) / q - C12350;
    const double C10153 = C12274 - (C11601 * C12067) / q - C12350;
    const double C9434 = C12244 - (C10840 * C12068) / q - C12349;
    const double C9786 = C12259 - (C11213 * C12067) / q - C12349;
    const double C9355 = C12237 - (C6230 * de + C10840 * C12071) / q - C12348;
    const double C10064 = C12272 - (C11544 * C12067) / q - C12348;
    const double C9340 = C9324 / q - (C10693 * C12068) / q - C12347;
    const double C9696 = C12257 - (C11141 * C12067) / q - C12347;
    const double C9217 = C12230 - (C5282 * de + C9417 * C12071) / q - C12346;
    const double C9878 = C12264 - (C9879 * C12067) / q - C12346;
    const double C9201 = C12229 - (C5297 * de + C10708 * C12071) / q - C12345;
    const double C9880 = C9879 / q - (C10752 * C12067) / q - C12345;
    const double C9185 = C12230 - (C9324 * C12068) / q - C12344;
    const double C9510 = C12249 - (C9511 * C12067) / q - C12344;
    const double C9169 = C12229 - (C10649 * C12068) / q - C12343;
    const double C9512 = C9511 / q - (C10693 * C12067) / q - C12343;
    const double C11970 = C3446 * p;
    const double C11979 = C3461 / C3375;
    const double C11971 = C3462 * p;
    const double C840 = (3 * C3461) / C3375 -
                        (C3506 * de + C3445 * C12067) / q - (C3510 * p) / q;
    const double C12015 = C3526 / C3375;
    const double C841 =
        C3526 / q - (C3522 * de + C3461 * C12067) / q - (C3445 * p) / q;
    const double C11972 = C3541 * p;
    const double C11973 = C3556 * p;
    const double C11976 = C3605 * p;
    const double C11978 = C3637 / q;
    const double C11980 = C3652 * p;
    const double C11983 = C3702 * p;
    const double C11984 = C3735 / q;
    const double C11992 = C3832 * p;
    const double C11988 = C3833 * p;
    const double C11991 = C3848 / C3375;
    const double C11989 = C3849 * p;
    const double C11993 = C3924 * p;
    const double C12014 = C3939 / C3375;
    const double C1000 = C3939 / q - (C3848 * C12068) / q - (C3940 * p) / q;
    const double C11995 = C3988 * p;
    const double C1048 =
        (3 * C3848) / C3375 - (C3940 * C12068) / q - (C4033 * p) / q;
    const double C11997 = C4083 * p;
    const double C11999 = C4129 / q;
    const double C12006 = C4211 * p;
    const double C12003 = C4212 * p;
    const double C12020 = C4227 / C3375;
    const double C12005 = C4228 / C3375;
    const double C1123 =
        C4227 / q - (C4228 * C12071) / q + C12001 - (C4229 * p) / q;
    const double C12007 = C4305 * p;
    const double C12008 = C4320 * p;
    const double C12010 = C4368 * p;
    const double C1222 =
        (3 * C4228) / C3375 - (C4229 * C12071) / q + C12011 - (C4461 * p) / q;
    const double C12013 = C4552 * p;
    const double C12112 = C6374 / C3375;
    const double C1692 =
        (3 * C6374) / C3375 - (C6358 * C12067) / q - (C6420 * p) / q;
    const double C12148 = C6435 / C3375;
    const double C1693 = C6435 / q - (C6374 * C12067) / q - (C6358 * p) / q;
    const double C12105 = C6450 * p;
    const double C12106 = C6465 * p;
    const double C12111 = C6543 / q;
    const double C12113 = C6558 * p;
    const double C12117 = C6638 / q;
    const double C12125 = C6733 * p;
    const double C12124 = C6749 / C3375;
    const double C12126 = C6821 * p;
    const double C12147 = C6836 / C3375;
    const double C1852 =
        C6836 / q - (C3906 * de + C6749 * C12068) / q - (C6837 * p) / q;
    const double C1900 = (3 * C6749) / C3375 -
                         (C4015 * de + C6837 * C12068) / q - (C6927 * p) / q;
    const double C12132 = C7020 / q;
    const double C12139 = C7100 * p;
    const double C12136 = C7101 * p;
    const double C12153 = C7116 / C3375;
    const double C12138 = C7117 / C3375;
    const double C1975 =
        C7116 / q - (C7117 * C12071) / q + C12134 - (C7118 * p) / q;
    const double C12140 = C7190 * p;
    const double C12141 = C7205 * p;
    const double C12143 = C7252 * p;
    const double C2074 =
        (3 * C7117) / C3375 - (C7118 * C12071) / q + C12144 - (C7342 * p) / q;
    const double C12146 = C7430 * p;
    const double C12242 = C9216 / C3375;
    const double C2544 =
        (3 * C9216) / C3375 - (C9200 * C12067) / q - (C9262 * p) / q;
    const double C12278 = C9277 / C3375;
    const double C2545 = C9277 / q - (C9216 * C12067) / q - (C9200 * p) / q;
    const double C12235 = C9292 * p;
    const double C12236 = C9307 * p;
    const double C12241 = C9385 / q;
    const double C12243 = C9400 * p;
    const double C12247 = C9480 / q;
    const double C12255 = C9575 * p;
    const double C12254 = C9591 / C3375;
    const double C12256 = C9663 * p;
    const double C12277 = C9678 / C3375;
    const double C2704 = C9678 / q - (C9591 * C12068) / q - (C9679 * p) / q;
    const double C2752 =
        (3 * C9591) / C3375 - (C9679 * C12068) / q - (C9769 * p) / q;
    const double C12262 = C9862 / q;
    const double C12269 = C9942 * p;
    const double C12266 = C9943 * p;
    const double C12283 = C9958 / C3375;
    const double C12268 = C9959 / C3375;
    const double C2827 = C9958 / q - (C4287 * de + C9959 * C12071) / q +
                         C12264 - (C9960 * p) / q;
    const double C12270 = C10032 * p;
    const double C12271 = C10047 * p;
    const double C12273 = C10094 * p;
    const double C2926 = (3 * C9959) / C3375 -
                         (C4489 * de + C9960 * C12071) / q + C12274 -
                         (C10184 * p) / q;
    const double C12276 = C10272 * p;
    const double C11966 = C3414 * p;
    const double C11967 = C3430 * p;
    const double C831 = (3 * C3429) / C3375 -
                        (C3474 * de + C3413 * C12067) / q - (C3478 * p) / q;
    const double C832 =
        C3494 / q - (C3490 * de + C3429 * C12067) / q - (C3413 * p) / q;
    const double C11975 = C3590 * p;
    const double C11977 = C3621 / q;
    const double C11982 = C3687 * p;
    const double C930 =
        C3718 / q - (C3714 * de + C3686 * C12067) / q - (C3719 * p) / q;
    const double C11990 = C3799 * p;
    const double C11987 = C3800 * p;
    const double C964 =
        C3815 / q - (C3816 * C12068) / q + C11986 - (C3817 * p) / q;
    const double C1016 =
        (3 * C3816) / C3375 - (C3817 * C12068) / q + C11994 - (C3973 * p) / q;
    const double C1064 =
        C4066 / q - (C4067 * C12068) / q + C11996 - (C4068 * p) / q;
    const double C11998 = C4099 * p;
    const double C12002 = C4180 * p;
    const double C12004 = C4195 / C3375;
    const double C1132 = -(C4257 * de + C4195 * C12067 + C4179 * p) / q;
    const double C1114 = C12001 - (C4195 * C12068) / q - (C4196 * p) / q;
    const double C1214 = C12011 - (C4445 * C12068) / q - (C4446 * p) / q;
    const double C1230 = -(C4473 * de + C4445 * C12067 + C4477 * p) / q;
    const double C12018 = C4630 * p;
    const double C12019 = C4749 / C3375;
    const double C1683 =
        (3 * C6342) / C3375 - (C6326 * C12067) / q - (C6390 * p) / q;
    const double C1684 = C6405 / q - (C6342 * C12067) / q - (C6326 * p) / q;
    const double C12110 = C6528 / q;
    const double C1782 = C6622 / q - (C6591 * C12067) / q - (C6623 * p) / q;
    const double C12123 = C6700 * p;
    const double C12120 = C6701 * p;
    const double C1816 = C6716 / q - (C3876 * de + C6717 * C12068) / q +
                         C12119 - (C6718 * p) / q;
    const double C1868 = (3 * C6717) / C3375 -
                         (C4000 * de + C6718 * C12068) / q + C12127 -
                         (C6869 * p) / q;
    const double C1916 = C6959 / q - (C4095 * de + C6960 * C12068) / q +
                         C12129 - (C6961 * p) / q;
    const double C12131 = C6991 * p;
    const double C12137 = C7084 / C3375;
    const double C1984 = -(C7084 * C12067 + C7068 * p) / q;
    const double C2082 = -(C7326 * C12067 + C7357 * p) / q;
    const double C12151 = C7505 * p;
    const double C12152 = C7620 / C3375;
    const double C2535 =
        (3 * C9184) / C3375 - (C9168 * C12067) / q - (C9232 * p) / q;
    const double C2536 = C9247 / q - (C9184 * C12067) / q - (C9168 * p) / q;
    const double C12240 = C9370 / q;
    const double C2634 = C9464 / q - (C9433 * C12067) / q - (C9465 * p) / q;
    const double C12253 = C9542 * p;
    const double C12250 = C9543 * p;
    const double C2668 =
        C9558 / q - (C9559 * C12068) / q + C12249 - (C9560 * p) / q;
    const double C2720 =
        (3 * C9559) / C3375 - (C9560 * C12068) / q + C12257 - (C9711 * p) / q;
    const double C2768 =
        C9801 / q - (C9802 * C12068) / q + C12259 - (C9803 * p) / q;
    const double C12261 = C9833 * p;
    const double C12267 = C9926 / C3375;
    const double C2836 = -(C9926 * C12067 + C9910 * p) / q;
    const double C2934 = -(C10168 * C12067 + C10199 * p) / q;
    const double C12281 = C10347 * p;
    const double C12282 = C10462 / C3375;
    const double C804 = (3 * C3378) / C3375 -
                        (C3373 * de + C3379 * C12067) / q + C11962 -
                        (C3381 * p) / q;
    const double C805 = C3397 / q - (C3393 * de + C3378 * C12067) / q + C11963 -
                        (C3379 * p) / q;
    const double C858 = C3572 / q - (C3568 * de + C3573 * C12067) / q + C11974 -
                        (C3575 * p) / q;
    const double C906 = C3668 / q - (C3664 * de + C3669 * C12067) / q + C11981 -
                        (C3671 * p) / q;
    const double C955 =
        C11986 - (C3780 * de + C3765 * C12067) / q - (C3766 * p) / q;
    const double C954 = C3765 / C3375 - (C3761 * de + C3766 * C12067) / q +
                        C11985 - (C3768 * p) / q;
    const double C1008 =
        C11994 - (C3952 * de + C3957 * C12067) / q - (C3958 * p) / q;
    const double C1056 =
        C11996 - (C4045 * de + C4050 * C12067) / q - (C4051 * p) / q;
    const double C1105 =
        C12001 - (C4160 * de + C4145 * C12067) / q - (C4146 * p) / q;
    const double C1104 = C4145 / C3375 - (C4141 * de + C4146 * C12067) / q +
                         C12000 - (C4148 * p) / q;
    const double C1158 =
        C12009 - (C4332 * de + C4337 * C12067) / q - (C4338 * p) / q;
    const double C1206 =
        C12011 - (C4424 * de + C4429 * C12067) / q - (C4430 * p) / q;
    const double C1254 = C4522 / C3375 - (C4518 * de + C3572 * C12067) / q +
                         C12012 - (C3573 * p) / q;
    const double C1524 =
        C12021 - (C4790 * de + C4612 * C12067) / q - (C4613 * p) / q;
    const double C1344 = C4612 / C3375 - (C4608 * de + C4613 * C12067) / q +
                         C12016 - (C4615 * p) / q;
    const double C1392 = C4704 / C3375 - (C4700 * de + C3668 * C12067) / q +
                         C12017 - (C3669 * p) / q;
    const double C1656 =
        (3 * C6292) / C3375 - (C6293 * C12067) / q + C12099 - (C6295 * p) / q;
    const double C1657 =
        C6310 / q - (C6292 * C12067) / q + C12100 - (C6293 * p) / q;
    const double C1710 =
        C6480 / q - (C6481 * C12067) / q + C12107 - (C6483 * p) / q;
    const double C1758 =
        C6573 / q - (C6574 * C12067) / q + C12114 - (C6576 * p) / q;
    const double C2106 =
        C7400 / C3375 - (C6480 * C12067) / q + C12145 - (C6481 * p) / q;
    const double C2376 = C12154 - (C7487 * C12067) / q - (C7488 * p) / q;
    const double C2196 =
        C7487 / C3375 - (C7488 * C12067) / q + C12149 - (C7490 * p) / q;
    const double C2244 =
        C7576 / C3375 - (C6573 * C12067) / q + C12150 - (C6574 * p) / q;
    const double C2508 =
        (3 * C9134) / C3375 - (C9135 * C12067) / q + C12229 - (C9137 * p) / q;
    const double C2509 =
        C9152 / q - (C9134 * C12067) / q + C12230 - (C9135 * p) / q;
    const double C2562 =
        C9322 / q - (C9323 * C12067) / q + C12237 - (C9325 * p) / q;
    const double C2610 =
        C9415 / q - (C9416 * C12067) / q + C12244 - (C9418 * p) / q;
    const double C2958 =
        C10242 / C3375 - (C9322 * C12067) / q + C12275 - (C9323 * p) / q;
    const double C3228 = C12284 - (C10329 * C12067) / q - (C10330 * p) / q;
    const double C3048 =
        C10329 / C3375 - (C10330 * C12067) / q + C12279 - (C10332 * p) / q;
    const double C3096 =
        C10418 / C3375 - (C9415 * C12067) / q + C12280 - (C9416 * p) / q;
    const double C12130 = C6976 * p;
    const double C2066 =
        C12144 - (C4473 * de + C7326 * C12068) / q - (C7327 * p) / q;
    const double C12128 = C6884 * p;
    const double C12122 = C6750 * p;
    const double C1966 =
        C12134 - (C4257 * de + C7084 * C12068) / q - (C7085 * p) / q;
    const double C12121 = C6734 * p;
    const double C12135 = C7069 * p;
    const double C12116 = C6607 * p;
    const double C2058 = C12144 - (C7310 * C12067) / q - (C7311 * p) / q;
    const double C12115 = C6592 * p;
    const double C1908 = C12129 - (C6943 * C12067) / q - (C6944 * p) / q;
    const double C12109 = C6513 * p;
    const double C2010 = C12142 - (C7221 * C12067) / q - (C7222 * p) / q;
    const double C12108 = C6498 * p;
    const double C1860 = C12127 - (C6853 * C12067) / q - (C6854 * p) / q;
    const double C12104 = C6375 * p;
    const double C1957 = C12134 - (C7035 * C12067) / q - (C7036 * p) / q;
    const double C12103 = C6359 * p;
    const double C1956 =
        C7035 / C3375 - (C7036 * C12067) / q + C12133 - (C7038 * p) / q;
    const double C12102 = C6343 * p;
    const double C1807 = C12119 - (C6667 * C12067) / q - (C6668 * p) / q;
    const double C12101 = C6327 * p;
    const double C1806 =
        C6667 / C3375 - (C6668 * C12067) / q + C12118 - (C6670 * p) / q;
    const double C12260 = C9818 * p;
    const double C2918 = C12274 - (C10168 * C12068) / q - (C10169 * p) / q;
    const double C12258 = C9726 * p;
    const double C12252 = C9592 * p;
    const double C2818 = C12264 - (C9926 * C12068) / q - (C9927 * p) / q;
    const double C12251 = C9576 * p;
    const double C12265 = C9911 * p;
    const double C12246 = C9449 * p;
    const double C2910 = C12274 - (C10152 * C12067) / q - (C10153 * p) / q;
    const double C12245 = C9434 * p;
    const double C2760 = C12259 - (C9785 * C12067) / q - (C9786 * p) / q;
    const double C12239 = C9355 * p;
    const double C2862 = C12272 - (C10063 * C12067) / q - (C10064 * p) / q;
    const double C12238 = C9340 * p;
    const double C2712 = C12257 - (C9695 * C12067) / q - (C9696 * p) / q;
    const double C12234 = C9217 * p;
    const double C2809 = C12264 - (C9877 * C12067) / q - (C9878 * p) / q;
    const double C12233 = C9201 * p;
    const double C2808 =
        C9877 / C3375 - (C9878 * C12067) / q + C12263 - (C9880 * p) / q;
    const double C12232 = C9185 * p;
    const double C2659 = C12249 - (C9509 * C12067) / q - (C9510 * p) / q;
    const double C12231 = C9169 * p;
    const double C2658 =
        C9509 / C3375 - (C9510 * C12067) / q + C12248 - (C9512 * p) / q;
    const double C12072 = C11970 / q;
    const double C12073 = C11971 / q;
    const double C849 = -(C3445 * C12068 + C11972) / q;
    const double C850 = -(C3461 * C12068 + C11973) / q;
    const double C12075 = C11976 / q;
    const double C946 = -(C3462 * C12068 + C11976) / q;
    const double C890 = C11978 - (C3633 * de + C3556 * C12067) / q - C11972 / q;
    const double C12076 = C11980 / q;
    const double C12078 = C11983 / q;
    const double C991 = -(C3906 * de + C3848 * C12067 + C11992) / q;
    const double C1294 = C12015 - (C3637 * C12068) / q - C11992 / q;
    const double C12079 = C11988 / q;
    const double C1088 = -(C4111 * de + C3849 * C12067 + C11988) / q;
    const double C12080 = C11989 / q;
    const double C999 = C11978 - (C3832 * C12068) / q - C11993 / q;
    const double C1040 = -(C4015 * de + C3940 * C12067 + C11993) / q;
    const double C1286 =
        C12014 - (C4579 * de + C3637 * C12067) / q - C11973 / q;
    const double C12081 = C11995 / q;
    const double C12082 = C11997 / q;
    const double C1141 = -(C4287 * de + C4228 * C12067 + C12006) / q;
    const double C1408 = C12015 - (C3735 * C12071) / q + C12017 - C12006 / q;
    const double C1122 = C11984 - (C4211 * C12071) / q + C12000 - C12003 / q;
    const double C1238 = -(C4489 * de + C4229 * C12067 + C12003) / q;
    const double C1149 = -(C4211 * C12068 + C12007) / q;
    const double C1190 = -(C4395 * de + C4320 * C12067 + C12007) / q;
    const double C1360 =
        C3637 / C3375 - (C4552 * C12071) / q + C12016 - C12007 / q;
    const double C1150 = -(C4228 * C12068 + C12008) / q;
    const double C1540 = C12014 - (C4129 * C12071) / q + C12021 - C12008 / q;
    const double C1174 = C11999 - (C4320 * C12071) / q + C12009 - C12010 / q;
    const double C1246 = -(C4229 * C12068 + C12010) / q;
    const double C1270 = C12012 - (C3637 * C12071) / q - C12013 / q;
    const double C1432 = -(C3735 * C12068 + C12013) / q;
    const double C1556 = -(C4849 * de + C4129 * C12067 + C12013) / q;
    const double C1701 = -(C3506 * de + C6358 * C12068 + C12105) / q;
    const double C1702 = -(C3522 * de + C6374 * C12068 + C12106) / q;
    const double C1742 = C12111 - (C6465 * C12067) / q - C12105 / q;
    const double C12206 = C12113 / q;
    const double C1843 = -(C6749 * C12067 + C12125) / q;
    const double C2146 =
        C12148 - (C4579 * de + C6543 * C12068) / q - C12125 / q;
    const double C1851 =
        C12111 - (C3891 * de + C6733 * C12068) / q - C12126 / q;
    const double C1892 = -(C6837 * C12067 + C12126) / q;
    const double C2138 = C12147 - (C6543 * C12067) / q - C12106 / q;
    const double C1993 = -(C7117 * C12067 + C12139) / q;
    const double C2260 = C12148 - (C6638 * C12071) / q + C12150 - C12139 / q;
    const double C1974 = C12117 - (C7100 * C12071) / q + C12133 - C12136 / q;
    const double C2090 = -(C7118 * C12067 + C12136) / q;
    const double C2001 = -(C4272 * de + C7100 * C12068 + C12140) / q;
    const double C2042 = -(C7205 * C12067 + C12140) / q;
    const double C2212 =
        C6543 / C3375 - (C7430 * C12071) / q + C12149 - C12140 / q;
    const double C2002 = -(C4287 * de + C7117 * C12068 + C12141) / q;
    const double C2392 = C12147 - (C7020 * C12071) / q + C12154 - C12141 / q;
    const double C2026 = C12132 - (C7205 * C12071) / q + C12142 - C12143 / q;
    const double C2098 = -(C4489 * de + C7118 * C12068 + C12143) / q;
    const double C2122 = C12145 - (C6543 * C12071) / q - C12146 / q;
    const double C2284 = -(C4761 * de + C6638 * C12068 + C12146) / q;
    const double C2408 = -(C7020 * C12067 + C12146) / q;
    const double C2553 = -(C9200 * C12068 + C12235) / q;
    const double C2554 = -(C9216 * C12068 + C12236) / q;
    const double C2594 = C12241 - (C9307 * C12067) / q - C12235 / q;
    const double C12336 = C12243 / q;
    const double C2695 = -(C9591 * C12067 + C12255) / q;
    const double C2998 = C12278 - (C9385 * C12068) / q - C12255 / q;
    const double C2703 = C12241 - (C9575 * C12068) / q - C12256 / q;
    const double C2744 = -(C9679 * C12067 + C12256) / q;
    const double C2990 = C12277 - (C9385 * C12067) / q - C12236 / q;
    const double C2845 = -(C9959 * C12067 + C12269) / q;
    const double C3112 =
        C12278 - (C4761 * de + C9480 * C12071) / q + C12280 - C12269 / q;
    const double C2826 =
        C12247 - (C4272 * de + C9942 * C12071) / q + C12263 - C12266 / q;
    const double C2942 = -(C9960 * C12067 + C12266) / q;
    const double C2853 = -(C9942 * C12068 + C12270) / q;
    const double C2894 = -(C10047 * C12067 + C12270) / q;
    const double C3064 = C9385 / C3375 - (C4671 * de + C10272 * C12071) / q +
                         C12279 - C12270 / q;
    const double C2854 = -(C9959 * C12068 + C12271) / q;
    const double C3244 =
        C12277 - (C4849 * de + C9862 * C12071) / q + C12284 - C12271 / q;
    const double C2878 =
        C12262 - (C4395 * de + C10047 * C12071) / q + C12272 - C12273 / q;
    const double C2950 = -(C9960 * C12068 + C12273) / q;
    const double C2974 =
        C12275 - (C4579 * de + C9385 * C12071) / q - C12276 / q;
    const double C3136 = -(C9480 * C12068 + C12276) / q;
    const double C3260 = -(C9862 * C12067 + C12276) / q;
    const double C12069 = C11966 / q;
    const double C12070 = C11967 / q;
    const double C12074 = C11975 / q;
    const double C12077 = C11982 / q;
    const double C982 = -(C3876 * de + C3816 * C12067 + C11990) / q;
    const double C1262 =
        C3494 / C3375 - (C3621 * C12068) / q + C12012 - C11990 / q;
    const double C963 = C11977 - (C3799 * C12068) / q + C11985 - C11987 / q;
    const double C1032 = -(C4000 * de + C3817 * C12067 + C11987) / q;
    const double C1080 = -(C4095 * de + C4067 * C12067 + C11998) / q;
    const double C1352 =
        C3718 / C3375 - (C4630 * C12068) / q + C12016 - C11998 / q;
    const double C1113 = C12000 - (C4179 * C12068) / q - C12002 / q;
    const double C1182 = -(C4380 * de + C4196 * C12067 + C12002) / q;
    const double C1131 =
        C12004 - (C4241 * de + C4179 * C12067) / q - (C4245 * p) / q;
    const double C1166 =
        C12004 - (C4196 * C12068) / q + C12009 - (C4353 * p) / q;
    const double C1400 = C12017 - (C3718 * C12068) / q - C12018 / q;
    const double C1548 = -(C4834 * de + C4066 * C12067 + C12018) / q;
    const double C1416 =
        C12019 - (C4745 * de + C3718 * C12067) / q - (C3686 * p) / q;
    const double C1532 =
        C12019 - (C4066 * C12068) / q + C12021 - (C4067 * p) / q;
    const double C1834 = -(C6717 * C12067 + C12123) / q;
    const double C2114 =
        C6405 / C3375 - (C4564 * de + C6528 * C12068) / q + C12145 - C12123 / q;
    const double C1815 =
        C12110 - (C3861 * de + C6700 * C12068) / q + C12118 - C12120 / q;
    const double C1884 = -(C6718 * C12067 + C12120) / q;
    const double C1932 = -(C6960 * C12067 + C12131) / q;
    const double C2204 =
        C6622 / C3375 - (C4656 * de + C7505 * C12068) / q + C12149 - C12131 / q;
    const double C1983 = C12137 - (C7068 * C12067) / q - (C7133 * p) / q;
    const double C2018 =
        C12137 - (C4380 * de + C7085 * C12068) / q + C12142 - (C7237 * p) / q;
    const double C2252 =
        C12150 - (C4745 * de + C6622 * C12068) / q - C12151 / q;
    const double C2400 = -(C6959 * C12067 + C12151) / q;
    const double C2268 = C12152 - (C6622 * C12067) / q - (C6591 * p) / q;
    const double C2384 =
        C12152 - (C4834 * de + C6959 * C12068) / q + C12154 - (C6960 * p) / q;
    const double C2686 = -(C9559 * C12067 + C12253) / q;
    const double C2966 =
        C9247 / C3375 - (C9370 * C12068) / q + C12275 - C12253 / q;
    const double C2667 = C12240 - (C9542 * C12068) / q + C12248 - C12250 / q;
    const double C2736 = -(C9560 * C12067 + C12250) / q;
    const double C2784 = -(C9802 * C12067 + C12261) / q;
    const double C3056 =
        C9464 / C3375 - (C10347 * C12068) / q + C12279 - C12261 / q;
    const double C2835 = C12267 - (C9910 * C12067) / q - (C9975 * p) / q;
    const double C2870 =
        C12267 - (C9927 * C12068) / q + C12272 - (C10079 * p) / q;
    const double C3104 = C12280 - (C9464 * C12068) / q - C12281 / q;
    const double C3252 = -(C9801 * C12067 + C12281) / q;
    const double C3120 = C12282 - (C9464 * C12067) / q - (C9433 * p) / q;
    const double C3236 =
        C12282 - (C9801 * C12068) / q + C12284 - (C9802 * p) / q;
    const double C12212 = C12130 / q;
    const double C12211 = C12128 / q;
    const double C12210 = C12122 / q;
    const double C12209 = C12121 / q;
    const double C1940 = -(C6750 * C12067 + C12121) / q;
    const double C1965 =
        C12133 - (C4241 * de + C7068 * C12068) / q - C12135 / q;
    const double C2034 = -(C7085 * C12067 + C12135) / q;
    const double C12208 = C12116 / q;
    const double C12207 = C12115 / q;
    const double C12205 = C12109 / q;
    const double C1798 = -(C3731 * de + C6375 * C12068 + C12109) / q;
    const double C12204 = C12108 / q;
    const double C12203 = C12104 / q;
    const double C12202 = C12103 / q;
    const double C12201 = C12102 / q;
    const double C12200 = C12101 / q;
    const double C12342 = C12260 / q;
    const double C12341 = C12258 / q;
    const double C12340 = C12252 / q;
    const double C12339 = C12251 / q;
    const double C2792 = -(C9592 * C12067 + C12251) / q;
    const double C2817 = C12263 - (C9910 * C12068) / q - C12265 / q;
    const double C2886 = -(C9927 * C12067 + C12265) / q;
    const double C12338 = C12246 / q;
    const double C12337 = C12245 / q;
    const double C12335 = C12239 / q;
    const double C2650 = -(C9217 * C12068 + C12239) / q;
    const double C12334 = C12238 / q;
    const double C12333 = C12234 / q;
    const double C12332 = C12233 / q;
    const double C12331 = C12232 / q;
    const double C12330 = C12231 / q;
    const double C822 = C11962 - (C3445 * C12071) / q - C12072;
    const double C938 = C11984 - (C3731 * de + C3462 * C12067) / q - C12072;
    const double C823 = C11963 - (C3461 * C12071) / q - C12073;
    const double C1424 = C12020 - (C4761 * de + C3735 * C12067) / q - C12073;
    const double C874 = C11974 - (C3556 * C12071) / q - C12075;
    const double C1376 =
        C4129 / C3375 - (C4671 * de + C4552 * C12067) / q - C12075;
    const double C898 = C11979 - (C3556 * C12068) / q - C12076;
    const double C990 = C11991 - (C3891 * de + C3832 * C12067) / q - C12076;
    const double C922 = C11979 - (C3462 * C12071) / q + C11981 - C12078;
    const double C1140 = C12005 - (C4272 * de + C4211 * C12067) / q - C12078;
    const double C972 = C11985 - (C3832 * C12071) / q - C12079;
    const double C1384 = C3735 / C3375 - (C4552 * C12068) / q - C12079;
    const double C973 = C11986 - (C3848 * C12071) / q - C12080;
    const double C1564 = C12020 - (C4129 * C12068) / q - C12080;
    const double C1024 = C11994 - (C3940 * C12071) / q - C12081;
    const double C1096 = C11999 - (C3849 * C12068) / q - C12081;
    const double C1072 = C11991 - (C3849 * C12071) / q + C11996 - C12082;
    const double C1198 = C12005 - (C4320 * C12068) / q - C12082;
    const double C1750 = C12112 - (C3633 * de + C6465 * C12068) / q - C12206;
    const double C1842 = C12124 - (C6733 * C12067) / q - C12206;
    const double C2602 = C12242 - (C9307 * C12068) / q - C12336;
    const double C2694 = C12254 - (C9575 * C12067) / q - C12336;
    const double C813 = C11962 - (C3413 * C12068) / q - C12069;
    const double C882 = C11977 - (C3617 * de + C3430 * C12067) / q - C12069;
    const double C814 = C11963 - (C3429 * C12068) / q - C12070;
    const double C1278 =
        C3815 / C3375 - (C4564 * de + C3621 * C12067) / q - C12070;
    const double C866 = C3429 / C3375 - (C3430 * C12068) / q + C11974 - C12074;
    const double C981 =
        C3816 / C3375 - (C3861 * de + C3799 * C12067) / q - C12074;
    const double C914 = C11981 - (C3686 * C12068) / q - C12077;
    const double C1368 =
        C4066 / C3375 - (C4656 * de + C4630 * C12067) / q - C12077;
    const double C1924 = C12124 - (C6750 * C12071) / q + C12129 - C12212;
    const double C2050 = C12138 - (C4395 * de + C7205 * C12068) / q - C12212;
    const double C1876 = C12127 - (C6837 * C12071) / q - C12211;
    const double C1948 = C12132 - (C4111 * de + C6750 * C12068) / q - C12211;
    const double C1825 = C12119 - (C6749 * C12071) / q - C12210;
    const double C2416 = C12153 - (C4849 * de + C7020 * C12068) / q - C12210;
    const double C1824 = C12118 - (C6733 * C12071) / q - C12209;
    const double C2236 =
        C6638 / C3375 - (C4671 * de + C7430 * C12068) / q - C12209;
    const double C1774 = C12112 - (C6375 * C12071) / q + C12114 - C12208;
    const double C1992 = C12138 - (C7100 * C12067) / q - C12208;
    const double C1766 = C12114 - (C3714 * de + C6591 * C12068) / q - C12207;
    const double C2220 = C6959 / C3375 - (C7505 * C12067) / q - C12207;
    const double C1726 = C12107 - (C6465 * C12071) / q - C12205;
    const double C2228 = C7020 / C3375 - (C7430 * C12067) / q - C12205;
    const double C1718 =
        C6342 / C3375 - (C3617 * de + C6343 * C12068) / q + C12107 - C12204;
    const double C1833 = C6717 / C3375 - (C6700 * C12067) / q - C12204;
    const double C1675 = C12100 - (C6374 * C12071) / q - C12203;
    const double C2276 = C12153 - (C6638 * C12067) / q - C12203;
    const double C1674 = C12099 - (C6358 * C12071) / q - C12202;
    const double C1790 = C12117 - (C6375 * C12067) / q - C12202;
    const double C1666 = C12100 - (C3490 * de + C6342 * C12068) / q - C12201;
    const double C2130 = C6716 / C3375 - (C6528 * C12067) / q - C12201;
    const double C1665 = C12099 - (C3474 * de + C6326 * C12068) / q - C12200;
    const double C1734 = C12110 - (C6343 * C12067) / q - C12200;
    const double C2776 =
        C12254 - (C4111 * de + C9592 * C12071) / q + C12259 - C12342;
    const double C2902 = C12268 - (C10047 * C12068) / q - C12342;
    const double C2728 = C12257 - (C4015 * de + C9679 * C12071) / q - C12341;
    const double C2800 = C12262 - (C9592 * C12068) / q - C12341;
    const double C2677 = C12249 - (C3906 * de + C9591 * C12071) / q - C12340;
    const double C3268 = C12283 - (C9862 * C12068) / q - C12340;
    const double C2676 = C12248 - (C3891 * de + C9575 * C12071) / q - C12339;
    const double C3088 = C9480 / C3375 - (C10272 * C12068) / q - C12339;
    const double C2626 =
        C12242 - (C3731 * de + C9217 * C12071) / q + C12244 - C12338;
    const double C2844 = C12268 - (C9942 * C12067) / q - C12338;
    const double C2618 = C12244 - (C9433 * C12068) / q - C12337;
    const double C3072 = C9801 / C3375 - (C10347 * C12067) / q - C12337;
    const double C2578 = C12237 - (C3633 * de + C9307 * C12071) / q - C12335;
    const double C3080 = C9862 / C3375 - (C10272 * C12067) / q - C12335;
    const double C2570 = C9184 / C3375 - (C9185 * C12068) / q + C12237 - C12334;
    const double C2685 = C9559 / C3375 - (C9542 * C12067) / q - C12334;
    const double C2527 = C12230 - (C3522 * de + C9216 * C12071) / q - C12333;
    const double C3128 = C12283 - (C9480 * C12067) / q - C12333;
    const double C2526 = C12229 - (C3506 * de + C9200 * C12071) / q - C12332;
    const double C2642 = C12247 - (C9217 * C12067) / q - C12332;
    const double C2518 = C12230 - (C9184 * C12068) / q - C12331;
    const double C2982 = C9558 / C3375 - (C9370 * C12067) / q - C12331;
    const double C2517 = C12229 - (C9168 * C12068) / q - C12330;
    const double C2586 = C12240 - (C9185 * C12067) / q - C12330;
    etx[0] = C804;
    etx[1] = C805;
    etx[2] = C813;
    etx[3] = C814;
    etx[4] = C822;
    etx[5] = C823;
    etx[6] = C831;
    etx[7] = C832;
    etx[8] = C840;
    etx[9] = C841;
    etx[10] = C849;
    etx[11] = C850;
    etx[12] = C858;
    etx[13] = C866;
    etx[14] = C874;
    etx[15] = C882;
    etx[16] = C890;
    etx[17] = C898;
    etx[18] = C906;
    etx[19] = C914;
    etx[20] = C922;
    etx[21] = C930;
    etx[22] = C938;
    etx[23] = C946;
    etx[24] = C954;
    etx[25] = C955;
    etx[26] = C963;
    etx[27] = C964;
    etx[28] = C972;
    etx[29] = C973;
    etx[30] = C981;
    etx[31] = C982;
    etx[32] = C990;
    etx[33] = C991;
    etx[34] = C999;
    etx[35] = C1000;
    etx[36] = C1008;
    etx[37] = C1016;
    etx[38] = C1024;
    etx[39] = C1032;
    etx[40] = C1040;
    etx[41] = C1048;
    etx[42] = C1056;
    etx[43] = C1064;
    etx[44] = C1072;
    etx[45] = C1080;
    etx[46] = C1088;
    etx[47] = C1096;
    etx[48] = C1104;
    etx[49] = C1105;
    etx[50] = C1113;
    etx[51] = C1114;
    etx[52] = C1122;
    etx[53] = C1123;
    etx[54] = C1131;
    etx[55] = C1132;
    etx[56] = C1140;
    etx[57] = C1141;
    etx[58] = C1149;
    etx[59] = C1150;
    etx[60] = C1158;
    etx[61] = C1166;
    etx[62] = C1174;
    etx[63] = C1182;
    etx[64] = C1190;
    etx[65] = C1198;
    etx[66] = C1206;
    etx[67] = C1214;
    etx[68] = C1222;
    etx[69] = C1230;
    etx[70] = C1238;
    etx[71] = C1246;
    etx[72] = C1254;
    etx[73] = C1262;
    etx[74] = C1270;
    etx[75] = C1278;
    etx[76] = C1286;
    etx[77] = C1294;
    etx[78] = C1344;
    etx[79] = C1352;
    etx[80] = C1360;
    etx[81] = C1368;
    etx[82] = C1376;
    etx[83] = C1384;
    etx[84] = C1392;
    etx[85] = C1400;
    etx[86] = C1408;
    etx[87] = C1416;
    etx[88] = C1424;
    etx[89] = C1432;
    etx[90] = C1524;
    etx[91] = C1532;
    etx[92] = C1540;
    etx[93] = C1548;
    etx[94] = C1556;
    etx[95] = C1564;
    ety[0] = C1656;
    ety[1] = C1657;
    ety[2] = C1665;
    ety[3] = C1666;
    ety[4] = C1674;
    ety[5] = C1675;
    ety[6] = C1683;
    ety[7] = C1684;
    ety[8] = C1692;
    ety[9] = C1693;
    ety[10] = C1701;
    ety[11] = C1702;
    ety[12] = C1710;
    ety[13] = C1718;
    ety[14] = C1726;
    ety[15] = C1734;
    ety[16] = C1742;
    ety[17] = C1750;
    ety[18] = C1758;
    ety[19] = C1766;
    ety[20] = C1774;
    ety[21] = C1782;
    ety[22] = C1790;
    ety[23] = C1798;
    ety[24] = C1806;
    ety[25] = C1807;
    ety[26] = C1815;
    ety[27] = C1816;
    ety[28] = C1824;
    ety[29] = C1825;
    ety[30] = C1833;
    ety[31] = C1834;
    ety[32] = C1842;
    ety[33] = C1843;
    ety[34] = C1851;
    ety[35] = C1852;
    ety[36] = C1860;
    ety[37] = C1868;
    ety[38] = C1876;
    ety[39] = C1884;
    ety[40] = C1892;
    ety[41] = C1900;
    ety[42] = C1908;
    ety[43] = C1916;
    ety[44] = C1924;
    ety[45] = C1932;
    ety[46] = C1940;
    ety[47] = C1948;
    ety[48] = C1956;
    ety[49] = C1957;
    ety[50] = C1965;
    ety[51] = C1966;
    ety[52] = C1974;
    ety[53] = C1975;
    ety[54] = C1983;
    ety[55] = C1984;
    ety[56] = C1992;
    ety[57] = C1993;
    ety[58] = C2001;
    ety[59] = C2002;
    ety[60] = C2010;
    ety[61] = C2018;
    ety[62] = C2026;
    ety[63] = C2034;
    ety[64] = C2042;
    ety[65] = C2050;
    ety[66] = C2058;
    ety[67] = C2066;
    ety[68] = C2074;
    ety[69] = C2082;
    ety[70] = C2090;
    ety[71] = C2098;
    ety[72] = C2106;
    ety[73] = C2114;
    ety[74] = C2122;
    ety[75] = C2130;
    ety[76] = C2138;
    ety[77] = C2146;
    ety[78] = C2196;
    ety[79] = C2204;
    ety[80] = C2212;
    ety[81] = C2220;
    ety[82] = C2228;
    ety[83] = C2236;
    ety[84] = C2244;
    ety[85] = C2252;
    ety[86] = C2260;
    ety[87] = C2268;
    ety[88] = C2276;
    ety[89] = C2284;
    ety[90] = C2376;
    ety[91] = C2384;
    ety[92] = C2392;
    ety[93] = C2400;
    ety[94] = C2408;
    ety[95] = C2416;
    etz[0] = C2508;
    etz[1] = C2509;
    etz[2] = C2517;
    etz[3] = C2518;
    etz[4] = C2526;
    etz[5] = C2527;
    etz[6] = C2535;
    etz[7] = C2536;
    etz[8] = C2544;
    etz[9] = C2545;
    etz[10] = C2553;
    etz[11] = C2554;
    etz[12] = C2562;
    etz[13] = C2570;
    etz[14] = C2578;
    etz[15] = C2586;
    etz[16] = C2594;
    etz[17] = C2602;
    etz[18] = C2610;
    etz[19] = C2618;
    etz[20] = C2626;
    etz[21] = C2634;
    etz[22] = C2642;
    etz[23] = C2650;
    etz[24] = C2658;
    etz[25] = C2659;
    etz[26] = C2667;
    etz[27] = C2668;
    etz[28] = C2676;
    etz[29] = C2677;
    etz[30] = C2685;
    etz[31] = C2686;
    etz[32] = C2694;
    etz[33] = C2695;
    etz[34] = C2703;
    etz[35] = C2704;
    etz[36] = C2712;
    etz[37] = C2720;
    etz[38] = C2728;
    etz[39] = C2736;
    etz[40] = C2744;
    etz[41] = C2752;
    etz[42] = C2760;
    etz[43] = C2768;
    etz[44] = C2776;
    etz[45] = C2784;
    etz[46] = C2792;
    etz[47] = C2800;
    etz[48] = C2808;
    etz[49] = C2809;
    etz[50] = C2817;
    etz[51] = C2818;
    etz[52] = C2826;
    etz[53] = C2827;
    etz[54] = C2835;
    etz[55] = C2836;
    etz[56] = C2844;
    etz[57] = C2845;
    etz[58] = C2853;
    etz[59] = C2854;
    etz[60] = C2862;
    etz[61] = C2870;
    etz[62] = C2878;
    etz[63] = C2886;
    etz[64] = C2894;
    etz[65] = C2902;
    etz[66] = C2910;
    etz[67] = C2918;
    etz[68] = C2926;
    etz[69] = C2934;
    etz[70] = C2942;
    etz[71] = C2950;
    etz[72] = C2958;
    etz[73] = C2966;
    etz[74] = C2974;
    etz[75] = C2982;
    etz[76] = C2990;
    etz[77] = C2998;
    etz[78] = C3048;
    etz[79] = C3056;
    etz[80] = C3064;
    etz[81] = C3072;
    etz[82] = C3080;
    etz[83] = C3088;
    etz[84] = C3096;
    etz[85] = C3104;
    etz[86] = C3112;
    etz[87] = C3120;
    etz[88] = C3128;
    etz[89] = C3136;
    etz[90] = C3228;
    etz[91] = C3236;
    etz[92] = C3244;
    etz[93] = C3252;
    etz[94] = C3260;
    etz[95] = C3268;
}
