/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1000_1_hr(const double ae,
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
                            const double* const etx,
                            const double* const ety,
                            const double* const etz,
                            double* const hrx,
                            double* const hry,
                            double* const hrz)
{
    const double C40 = etx[0];
    const double C49 = etx[1];
    const double C56 = etx[2];
    const double C44 = ety[0];
    const double C51 = ety[1];
    const double C58 = ety[2];
    const double C46 = etz[0];
    const double C53 = etz[1];
    const double C60 = etz[2];
    hrx[0] = C40;
    hrx[1] = C49;
    hrx[2] = C56;
    hry[0] = C44;
    hry[1] = C51;
    hry[2] = C58;
    hrz[0] = C46;
    hrz[1] = C53;
    hrz[2] = C60;
}
