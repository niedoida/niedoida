/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1000_1_et(const double ae,
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
    const double C40 = vrx[0];
    const double C49 = vrx[1];
    const double C56 = vrx[2];
    const double C44 = vry[0];
    const double C51 = vry[1];
    const double C58 = vry[2];
    const double C46 = vrz[0];
    const double C53 = vrz[1];
    const double C60 = vrz[2];
    etx[0] = C40;
    etx[1] = C49;
    etx[2] = C56;
    ety[0] = C44;
    ety[1] = C51;
    ety[2] = C58;
    etz[0] = C46;
    etz[1] = C53;
    etz[2] = C60;
}
