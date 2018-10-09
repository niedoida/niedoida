/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void two_electrons_gradient_ppps_B(const unsigned Al,
                                   const unsigned Bl,
                                   const unsigned Cl,
                                   const unsigned Dl,
                                   const double ae,
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
                                   double* const gx,
                                   double* const gy,
                                   double* const gz)
{
    double ax[27] = {0};
    double ay[27] = {0};
    double az[27] = {0};

    if (Cl == 0 || Dl == 0) {
        if (Dl == 0)
            two_electrons_gradient_ppps_A(Bl,
                                          Al,
                                          Cl,
                                          Dl,
                                          be,
                                          xB,
                                          yB,
                                          zB,
                                          ae,
                                          xA,
                                          yA,
                                          zA,
                                          ce,
                                          xC,
                                          yC,
                                          zC,
                                          de,
                                          xD,
                                          yD,
                                          zD,
                                          bs,
                                          ax,
                                          ay,
                                          az);
        else if (Cl == 0)
            two_electrons_gradient_ppps_A(Bl,
                                          Al,
                                          Dl,
                                          Cl,
                                          be,
                                          xB,
                                          yB,
                                          zB,
                                          ae,
                                          xA,
                                          yA,
                                          zA,
                                          de,
                                          xD,
                                          yD,
                                          zD,
                                          ce,
                                          xC,
                                          yC,
                                          zC,
                                          bs,
                                          ax,
                                          ay,
                                          az);

        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                for (int k = 0; k < 3; ++k) {
                    const int p = (i * 3 + j) * 3 + k;
                    const int q = (j * 3 + i) * 3 + k;
                    gx[p] += ax[q];
                    gy[p] += ay[q];
                    gz[p] += az[q];
                }
        return;
    }

    if (Al == 0 || Bl == 0) {
        if (Bl == 0)
            two_electrons_gradient_ppps_D(Cl,
                                          Dl,
                                          Al,
                                          Bl,
                                          ce,
                                          xC,
                                          yC,
                                          zC,
                                          de,
                                          xD,
                                          yD,
                                          zD,
                                          ae,
                                          xA,
                                          yA,
                                          zA,
                                          be,
                                          xB,
                                          yB,
                                          zB,
                                          bs,
                                          ax,
                                          ay,
                                          az);
        else if (Al == 0)
            two_electrons_gradient_ppps_C(Cl,
                                          Dl,
                                          Bl,
                                          Al,
                                          ce,
                                          xC,
                                          yC,
                                          zC,
                                          de,
                                          xD,
                                          yD,
                                          zD,
                                          be,
                                          xB,
                                          yB,
                                          zB,
                                          ae,
                                          xA,
                                          yA,
                                          zA,
                                          bs,
                                          ax,
                                          ay,
                                          az);

        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                for (int k = 0; k < 3; ++k) {
                    const int p = (i * 3 + j) * 3 + k;
                    const int q = (j * 3 + k) * 3 + i;
                    gx[p] += ax[q];
                    gy[p] += ay[q];
                    gz[p] += az[q];
                }
    }
}
