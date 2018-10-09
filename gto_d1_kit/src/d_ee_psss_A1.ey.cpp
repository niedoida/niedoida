/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1000_1_vr(const double ae,
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
    const double C87 = g[0];
    const double C88 = g[1];
    const double C91 = p + q;
    const double C90 = p * q;
    const double C275 = bs[2];
    const double C273 = std::pow(Pi, 2.5);
    const double C270 = bs[1];
    const double C269 = ae * be;
    const double C268 = bs[0];
    const double C267 = zP - zQ;
    const double C266 = be * zAB;
    const double C265 = yP - yQ;
    const double C264 = be * yAB;
    const double C262 = xP - xQ;
    const double C261 = std::pow(p, 2);
    const double C259 = be * xAB;
    const double C258 = ae / p;
    const double C274 = std::sqrt(C91);
    const double C272 = p * C91;
    const double C263 = C91 * p;
    const double C271 = kab * C90;
    const double C260 = ae * C90;
    const double C284 = 4 * C273;
    const double C282 = kab * C269;
    const double C281 = C267 * C90;
    const double C280 = C265 * C90;
    const double C279 = C262 * C90;
    const double C278 = C91 * C261;
    const double C276 = C258 - 1;
    const double C285 = C90 * C274;
    const double C283 = kcd * C271;
    const double C277 = C88 * C260;
    const double C288 = kcd * C282;
    const double C286 = C276 * C87;
    const double C290 = C275 * C283;
    const double C289 = C270 * C283;
    const double C287 = C277 / C278;
    const double C293 = C270 * C288;
    const double C291 = C268 * C288;
    const double C294 = C290 * ae;
    const double C292 = C289 * ae;
    const double C95 =
        -(((xAB * C293) / p + (C262 * C294) / C272) * C284) / C285;
    const double C154 =
        -(((yAB * C293) / p + (C265 * C294) / C272) * C284) / C285;
    const double C213 =
        -(((zAB * C293) / p + (C267 * C294) / C272) * C284) / C285;
    const double C94 =
        -(((xAB * C291) / p + (C262 * C292) / C272) * C284) / C285;
    const double C153 =
        -(((yAB * C291) / p + (C265 * C292) / C272) * C284) / C285;
    const double C212 =
        -(((zAB * C291) / p + (C267 * C292) / C272) * C284) / C285;
    const double C40 = C286 - (C94 * C259) / p - C287 - (C95 * C279) / C263;
    const double C49 = -((C94 * C264) / p + (C95 * C280) / C263);
    const double C56 = -((C94 * C266) / p + (C95 * C281) / C263);
    const double C44 = -((C153 * C259) / p + (C154 * C279) / C263);
    const double C51 = C286 - (C153 * C264) / p - C287 - (C154 * C280) / C263;
    const double C58 = -((C153 * C266) / p + (C154 * C281) / C263);
    const double C46 = -((C212 * C259) / p + (C213 * C279) / C263);
    const double C53 = -((C212 * C264) / p + (C213 * C280) / C263);
    const double C60 = C286 - (C212 * C266) / p - C287 - (C213 * C281) / C263;
    vrx[0] = C40;
    vrx[1] = C49;
    vrx[2] = C56;
    vry[0] = C44;
    vry[1] = C51;
    vry[2] = C58;
    vrz[0] = C46;
    vrz[1] = C53;
    vrz[2] = C60;
}
