/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void two_electrons_gradient_dddp_C(const unsigned Al,
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
    if (Dl == 1) {
        eri_gradient_2221_3(ae,
                            xA,
                            yA,
                            zA,
                            be,
                            xB,
                            yB,
                            zB,
                            ce,
                            xC,
                            yC,
                            zC,
                            de,
                            xD,
                            yD,
                            zD,
                            bs,
                            gx,
                            gy,
                            gz);
        return;
    }

    double ax[5 * 5 * 5 * 3] = {0};
    double ay[5 * 5 * 5 * 3] = {0};
    double az[5 * 5 * 5 * 3] = {0};

    if (Cl == 1) {
        two_electrons_gradient_dddp_D(Al,
                                      Bl,
                                      Dl,
                                      Cl,
                                      ae,
                                      xA,
                                      yA,
                                      zA,
                                      be,
                                      xB,
                                      yB,
                                      zB,
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

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j)
                for (int k = 0; k < 5; ++k)
                    for (int l = 0; l < 3; ++l) {
                        const int p = ((i * 5 + j) * 5 + k) * 3 + l;
                        const int q = ((i * 5 + j) * 3 + l) * 5 + k;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }

        return;
    }

    if (Bl == 1) {
        two_electrons_gradient_dddp_A(Cl,
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

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j)
                for (int k = 0; k < 5; ++k)
                    for (int l = 0; l < 3; ++l) {
                        const int p = ((i * 5 + j) * 5 + k) * 3 + l;
                        const int q = ((k * 3 + l) * 5 + i) * 5 + j;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }

        return;
    }

    if (Al == 1) {
        two_electrons_gradient_dddp_A(Cl,
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

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j)
                for (int k = 0; k < 5; ++k)
                    for (int l = 0; l < 3; ++l) {
                        const int p = ((i * 5 + j) * 5 + k) * 3 + l;
                        const int q = ((l * 5 + k) * 5 + i) * 5 + j;
                        gx[q] += ax[p];
                        gy[q] += ay[p];
                        gz[q] += az[p];
                    }

        return;
    }
}
