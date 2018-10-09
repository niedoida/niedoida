/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1010_1_vr(const double ae,
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
                            double* const vrx,
                            double* const vry,
                            double* const vrz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C3178 = g[0];
    const double C3226 = g[1];
    const double C3271 = g[2];
    const double C3626 = g[3];
    const double C3627 = g[4];
    const double C3643 = g[5];
    const double C3660 = g[6];
    const double C3676 = g[7];
    const double C3769 = g[8];
    const double C3612 = p + q;
    const double C3611 = p * q;
    const double C4220 = bs[3];
    const double C4219 = bs[2];
    const double C4218 = zP - zQ;
    const double C4217 = be * zAB;
    const double C4216 = yP - yQ;
    const double C4215 = be * yAB;
    const double C4214 = 2 * p;
    const double C4212 = std::pow(p, 2);
    const double C4210 = be * xAB;
    const double C4209 = ae / p;
    const double C4207 = std::pow(Pi, 2.5);
    const double C4204 = bs[1];
    const double C4203 = xP - xQ;
    const double C4202 = ae * be;
    const double C4201 = bs[0];
    const double C3645 = C3612 * p;
    const double C4208 = std::sqrt(C3612);
    const double C4206 = p * C3612;
    const double C4211 = ae * C3611;
    const double C4205 = kab * C3611;
    const double C4235 = C4218 * C3611;
    const double C4234 = C4216 * C3611;
    const double C4229 = C3612 * C4212;
    const double C4227 = C4209 - 1;
    const double C4225 = 4 * C4207;
    const double C4230 = C4203 * C3611;
    const double C4223 = kab * C4202;
    const double C4226 = C3611 * C4208;
    const double C4236 = C3769 * C4211;
    const double C4233 = C3676 * C4211;
    const double C4232 = C3660 * C4211;
    const double C4228 = C3627 * C4211;
    const double C4224 = kcd * C4205;
    const double C4249 = C4227 * C3627;
    const double C4246 = C4227 * C3271;
    const double C4244 = C4227 * C3226;
    const double C4241 = C4227 * C3626;
    const double C4239 = kcd * C4223;
    const double C4250 = C4236 / C4229;
    const double C4247 = C4233 / C4229;
    const double C4245 = C4232 / C4229;
    const double C4242 = C4228 / C4229;
    const double C4251 = C4220 * C4224;
    const double C4248 = C4219 * C4224;
    const double C4240 = C4204 * C4224;
    const double C4259 = C4219 * C4239;
    const double C4257 = C4204 * C4239;
    const double C4254 = C4201 * C4239;
    const double C4260 = C4251 * ae;
    const double C4258 = C4248 * ae;
    const double C4255 = C4240 * ae;
    const double C3773 =
        -(((xAB * C4259) / p + (C4203 * C4260) / C4206) * C4225) / C4226;
    const double C3968 =
        -(((yAB * C4259) / p + (C4216 * C4260) / C4206) * C4225) / C4226;
    const double C4163 =
        -(((zAB * C4259) / p + (C4218 * C4260) / C4206) * C4225) / C4226;
    const double C3631 =
        -(((xAB * C4257) / p + (C4203 * C4258) / C4206) * C4225) / C4226;
    const double C3831 =
        -(((yAB * C4257) / p + (C4216 * C4258) / C4206) * C4225) / C4226;
    const double C4026 =
        -(((zAB * C4257) / p + (C4218 * C4258) / C4206) * C4225) / C4226;
    const double C3182 =
        -(((xAB * C4254) / p + (C4203 * C4255) / C4206) * C4225) / C4226;
    const double C3318 =
        -(((yAB * C4254) / p + (C4216 * C4255) / C4206) * C4225) / C4226;
    const double C3452 =
        -(((zAB * C4254) / p + (C4218 * C4255) / C4206) * C4225) / C4226;
    const double C4213 = C3631 * C3611;
    const double C3648 =
        C4249 - (C3631 * C4210) / p - C4250 - (C3773 * C4230) / C3645;
    const double C3664 = -((C3631 * C4215) / p + (C3773 * C4234) / C3645);
    const double C3680 = -((C3631 * C4217) / p + (C3773 * C4235) / C3645);
    const double C4221 = C3831 * C3611;
    const double C3846 = -((C3831 * C4210) / p + (C3968 * C4230) / C3645);
    const double C3861 =
        C4249 - (C3831 * C4215) / p - C4250 - (C3968 * C4234) / C3645;
    const double C3876 = -((C3831 * C4217) / p + (C3968 * C4235) / C3645);
    const double C4222 = C4026 * C3611;
    const double C4041 = -((C4026 * C4210) / p + (C4163 * C4230) / C3645);
    const double C4056 = -((C4026 * C4215) / p + (C4163 * C4234) / C3645);
    const double C4071 =
        C4249 - (C4026 * C4217) / p - C4250 - (C4163 * C4235) / C3645;
    const double C3183 =
        C4241 - (C3182 * C4210) / p - C4242 - (C3631 * C4230) / C3645;
    const double C3230 = -((C3182 * C4215) / p + (C3631 * C4234) / C3645);
    const double C3275 = -((C3182 * C4217) / p + (C3631 * C4235) / C3645);
    const double C3319 = -((C3318 * C4210) / p + (C3831 * C4230) / C3645);
    const double C3365 =
        C4241 - (C3318 * C4215) / p - C4242 - (C3831 * C4234) / C3645;
    const double C3409 = -((C3318 * C4217) / p + (C3831 * C4235) / C3645);
    const double C3453 = -((C3452 * C4210) / p + (C4026 * C4230) / C3645);
    const double C3499 = -((C3452 * C4215) / p + (C4026 * C4234) / C3645);
    const double C3543 =
        C4241 - (C3452 * C4217) / p - C4242 - (C4026 * C4235) / C3645;
    const double C4231 = C4213 / C3645;
    const double C4237 = C4221 / C3645;
    const double C4238 = C4222 / C3645;
    const double C3199 =
        C4244 - (C3230 * C4210) / p - C4245 - (C3664 * C4230) / C3645;
    const double C3214 =
        C4246 - (C3275 * C4210) / p - C4247 - (C3680 * C4230) / C3645;
    const double C3259 = -((C3275 * C4215) / p + (C3680 * C4234) / C3645);
    const double C3335 = -((C3365 * C4210) / p + (C3861 * C4230) / C3645);
    const double C3350 = -((C3409 * C4210) / p + (C3876 * C4230) / C3645);
    const double C3394 =
        C4246 - (C3409 * C4215) / p - C4247 - (C3876 * C4234) / C3645;
    const double C3469 = -((C3499 * C4210) / p + (C4056 * C4230) / C3645);
    const double C3484 = -((C3543 * C4210) / p + (C4071 * C4230) / C3645);
    const double C3528 = -((C3543 * C4215) / p + (C4071 * C4234) / C3645);
    const double C4243 = C3182 - C4231;
    const double C4252 = C3318 - C4237;
    const double C4253 = C3452 - C4238;
    const double C4256 = C4243 / C4214;
    const double C4261 = C4252 / C4214;
    const double C4262 = C4253 / C4214;
    const double C3184 = C4227 * C3178 - (C3183 * C4210) / p -
                         (C3643 * C4211) / C4229 - (C3648 * C4230) / C3645 +
                         C4256;
    const double C3244 =
        C4256 - ((C3230 * C4215) / p + (C3664 * C4234) / C3645);
    const double C3303 =
        C4256 - ((C3275 * C4217) / p + (C3680 * C4235) / C3645);
    const double C3320 =
        C4261 - ((C3319 * C4210) / p + (C3846 * C4230) / C3645);
    const double C3379 =
        C4244 - (C3365 * C4215) / p - C4245 - (C3861 * C4234) / C3645 + C4261;
    const double C3437 =
        C4261 - ((C3409 * C4217) / p + (C3876 * C4235) / C3645);
    const double C3454 =
        C4262 - ((C3453 * C4210) / p + (C4041 * C4230) / C3645);
    const double C3513 =
        C4262 - ((C3499 * C4215) / p + (C4056 * C4234) / C3645);
    const double C3571 =
        C4246 - (C3543 * C4217) / p - C4247 - (C4071 * C4235) / C3645 + C4262;
    vrx[0] = C3182;
    vrx[1] = C3183;
    vrx[2] = C3184;
    vrx[3] = C3199;
    vrx[4] = C3214;
    vrx[5] = C3230;
    vrx[6] = C3244;
    vrx[7] = C3259;
    vrx[8] = C3275;
    vrx[9] = C3303;
    vry[0] = C3318;
    vry[1] = C3319;
    vry[2] = C3320;
    vry[3] = C3335;
    vry[4] = C3350;
    vry[5] = C3365;
    vry[6] = C3379;
    vry[7] = C3394;
    vry[8] = C3409;
    vry[9] = C3437;
    vrz[0] = C3452;
    vrz[1] = C3453;
    vrz[2] = C3454;
    vrz[3] = C3469;
    vrz[4] = C3484;
    vrz[5] = C3499;
    vrz[6] = C3513;
    vrz[7] = C3528;
    vrz[8] = C3543;
    vrz[9] = C3571;
}
