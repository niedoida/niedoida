/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1010_1_et(const double ae,
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
    const double C3178 = g[0];
    const double C3226 = g[1];
    const double C3271 = g[2];
    const double C3182 = vrx[0];
    const double C3183 = vrx[1];
    const double C3184 = vrx[2];
    const double C3199 = vrx[3];
    const double C3214 = vrx[4];
    const double C3230 = vrx[5];
    const double C3244 = vrx[6];
    const double C3259 = vrx[7];
    const double C3275 = vrx[8];
    const double C3303 = vrx[9];
    const double C3318 = vry[0];
    const double C3319 = vry[1];
    const double C3320 = vry[2];
    const double C3335 = vry[3];
    const double C3350 = vry[4];
    const double C3365 = vry[5];
    const double C3379 = vry[6];
    const double C3394 = vry[7];
    const double C3409 = vry[8];
    const double C3437 = vry[9];
    const double C3452 = vrz[0];
    const double C3453 = vrz[1];
    const double C3454 = vrz[2];
    const double C3469 = vrz[3];
    const double C3484 = vrz[4];
    const double C3499 = vrz[5];
    const double C3513 = vrz[6];
    const double C3528 = vrz[7];
    const double C3543 = vrz[8];
    const double C3571 = vrz[9];
    const double C3583 = C3259 * p;
    const double C3582 = C3214 * p;
    const double C3581 = de * zCD;
    const double C3580 = be * zAB;
    const double C3579 = C3199 * p;
    const double C3578 = de * yCD;
    const double C3577 = be * yAB;
    const double C3576 = de * xCD;
    const double C3575 = be * xAB;
    const double C3574 = 2 * q;
    const double C3595 = C3394 * p;
    const double C3594 = C3350 * p;
    const double C3593 = C3335 * p;
    const double C3603 = C3528 * p;
    const double C3602 = C3484 * p;
    const double C3601 = C3469 * p;
    const double C3587 = C3580 + C3581;
    const double C3586 = C3577 + C3578;
    const double C3585 = C3575 + C3576;
    const double C3584 = C3182 / C3574;
    const double C3592 = C3318 / C3574;
    const double C3600 = C3452 / C3574;
    const double C1581 = -(C3183 * C3587 + C3582) / q;
    const double C2259 = -(C3230 * C3587 + C3583) / q;
    const double C1656 = -(C3319 * C3587 + C3594) / q;
    const double C2334 = -(C3365 * C3587 + C3595) / q;
    const double C1731 = -(C3178 * be + C3453 * C3587 + C3602) / q;
    const double C2409 = -(C3226 * be + C3499 * C3587 + C3603) / q;
    const double C1355 = -(C3183 * C3586 + C3579) / q;
    const double C2711 = -(C3275 * C3586 + C3583) / q;
    const double C1430 = -(C3178 * be + C3319 * C3586 + C3593) / q;
    const double C2786 = -(C3271 * be + C3409 * C3586 + C3595) / q;
    const double C1505 = -(C3453 * C3586 + C3601) / q;
    const double C2861 = -(C3543 * C3586 + C3603) / q;
    const double C1807 = -(C3226 * be + C3230 * C3585 + C3579) / q;
    const double C2485 = -(C3271 * be + C3275 * C3585 + C3582) / q;
    const double C1882 = -(C3365 * C3585 + C3593) / q;
    const double C2560 = -(C3409 * C3585 + C3594) / q;
    const double C1957 = -(C3499 * C3585 + C3601) / q;
    const double C2635 = -(C3543 * C3585 + C3602) / q;
    const double C1130 =
        C3584 - (C3178 * be + C3183 * C3585) / q - (C3184 * p) / q;
    const double C2033 = C3584 - (C3230 * C3586) / q - (C3244 * p) / q;
    const double C2937 = C3584 - (C3275 * C3587) / q - (C3303 * p) / q;
    const double C1204 = C3592 - (C3319 * C3585) / q - (C3320 * p) / q;
    const double C2108 =
        C3592 - (C3226 * be + C3365 * C3586) / q - (C3379 * p) / q;
    const double C3012 = C3592 - (C3409 * C3587) / q - (C3437 * p) / q;
    const double C1279 = C3600 - (C3453 * C3585) / q - (C3454 * p) / q;
    const double C2183 = C3600 - (C3499 * C3586) / q - (C3513 * p) / q;
    const double C3087 =
        C3600 - (C3271 * be + C3543 * C3587) / q - (C3571 * p) / q;
    etx[0] = C1130;
    etx[1] = C1355;
    etx[2] = C1581;
    etx[3] = C1807;
    etx[4] = C2033;
    etx[5] = C2259;
    etx[6] = C2485;
    etx[7] = C2711;
    etx[8] = C2937;
    ety[0] = C1204;
    ety[1] = C1430;
    ety[2] = C1656;
    ety[3] = C1882;
    ety[4] = C2108;
    ety[5] = C2334;
    ety[6] = C2560;
    ety[7] = C2786;
    ety[8] = C3012;
    etz[0] = C1279;
    etz[1] = C1505;
    etz[2] = C1731;
    etz[3] = C1957;
    etz[4] = C2183;
    etz[5] = C2409;
    etz[6] = C2635;
    etz[7] = C2861;
    etz[8] = C3087;
}
