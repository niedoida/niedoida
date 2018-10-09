/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void two_electrons_gradient_ppss_B(const unsigned Al,
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
    if (Al == 1 && Bl == 1) {
        double ax[9] = {0};
        double ay[9] = {0};
        double az[9] = {0};

        two_electrons_gradient_ppss_A(Bl,
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

        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j) {
                gx[i * 3 + j] += ax[j * 3 + i];
                gy[i * 3 + j] += ay[j * 3 + i];
                gz[i * 3 + j] += az[j * 3 + i];
            }

        return;
    }

    if (Al == 1 && Cl == 1) {
        eri_gradient_1010_2(ae,
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

    if (Al == 1 && Dl == 1) {
        two_electrons_gradient_ppss_B(Al,
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
                                      gx,
                                      gy,
                                      gz);
        return;
    }

    if (Bl == 1 && Cl == 1) {
        two_electrons_gradient_ppss_A(Bl,
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
                                      gx,
                                      gy,
                                      gz);
        return;
    }

    if (Bl == 1 && Dl == 1) {
        two_electrons_gradient_ppss_A(Bl,
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
                                      gx,
                                      gy,
                                      gz);
        return;
    }

    if (Cl == 1 && Dl == 1) {
        two_electrons_gradient_ppss_C(Cl,
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
                                      be,
                                      xB,
                                      yB,
                                      zB,
                                      ae,
                                      xA,
                                      yA,
                                      zA,
                                      bs,
                                      gx,
                                      gy,
                                      gz);
        return;
    }
}
