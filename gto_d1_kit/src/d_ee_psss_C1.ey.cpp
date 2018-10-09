/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1000_3_vr(const double ae,
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
    const double C86 = g[0];
    const double C89 = p + q;
    const double C88 = p * q;
    const double C264 = bs[2];
    const double C262 = std::pow(Pi, 2.5);
    const double C261 = ce * de;
    const double C260 = bs[0];
    const double C257 = bs[1];
    const double C256 = zP - zQ;
    const double C255 = be * zAB;
    const double C254 = yP - yQ;
    const double C253 = be * yAB;
    const double C251 = xP - xQ;
    const double C250 = be * xAB;
    const double C263 = std::sqrt(C89);
    const double C259 = q * C89;
    const double C252 = C89 * p;
    const double C258 = C88 * ce;
    const double C249 = C89 * C88;
    const double C248 = ce * C88;
    const double C271 = 4 * C262;
    const double C270 = kab * C261;
    const double C268 = C256 * C88;
    const double C267 = C254 * C88;
    const double C266 = C251 * C88;
    const double C272 = C88 * C263;
    const double C269 = kab * C258;
    const double C265 = C86 * C248;
    const double C275 = kcd * C270;
    const double C274 = kcd * C269;
    const double C273 = C265 / C249;
    const double C279 = C257 * C275;
    const double C277 = C260 * C275;
    const double C278 = C264 * C274;
    const double C276 = C257 * C274;
    const double C93 =
        (((C251 * C278) / C259 - (xCD * C279) / q) * C271) / C272;
    const double C149 =
        (((C254 * C278) / C259 - (yCD * C279) / q) * C271) / C272;
    const double C205 =
        (((C256 * C278) / C259 - (zCD * C279) / q) * C271) / C272;
    const double C92 =
        (((C251 * C276) / C259 - (xCD * C277) / q) * C271) / C272;
    const double C148 =
        (((C254 * C276) / C259 - (yCD * C277) / q) * C271) / C272;
    const double C204 =
        (((C256 * C276) / C259 - (zCD * C277) / q) * C271) / C272;
    const double C40 = C273 - (C92 * C250) / p - (C93 * C266) / C252;
    const double C49 = -((C92 * C253) / p + (C93 * C267) / C252);
    const double C56 = -((C92 * C255) / p + (C93 * C268) / C252);
    const double C44 = -((C148 * C250) / p + (C149 * C266) / C252);
    const double C51 = C273 - (C148 * C253) / p - (C149 * C267) / C252;
    const double C58 = -((C148 * C255) / p + (C149 * C268) / C252);
    const double C46 = -((C204 * C250) / p + (C205 * C266) / C252);
    const double C53 = -((C204 * C253) / p + (C205 * C267) / C252);
    const double C60 = C273 - (C204 * C255) / p - (C205 * C268) / C252;
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
