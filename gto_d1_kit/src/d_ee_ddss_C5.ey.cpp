/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void two_electrons_gradient_ddss_C(const unsigned Al,
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
    if (Cl == 2 && Dl == 2) {
        two_electrons_gradient_ddss_A(Cl,
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
                                      gx,
                                      gy,
                                      gz);
        return;
    }

    if (Al == 2 && Bl == 2) {
        eri_gradient_2200_3(ae,
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

    double ax[25] = {0};
    double ay[25] = {0};
    double az[25] = {0};

    if (Al == 2 && Cl == 2)
        two_electrons_gradient_ddss_A(Cl,
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
    else if (Al == 2 && Dl == 2)
        two_electrons_gradient_ddss_B(Dl,
                                      Cl,
                                      Al,
                                      Bl,
                                      de,
                                      xD,
                                      yD,
                                      zD,
                                      ce,
                                      xC,
                                      yC,
                                      zC,
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
    else if (Bl == 2 && Cl == 2)
        two_electrons_gradient_ddss_A(Cl,
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
    else if (Bl == 2 && Dl == 2)
        two_electrons_gradient_ddss_B(Dl,
                                      Cl,
                                      Bl,
                                      Al,
                                      de,
                                      xD,
                                      yD,
                                      zD,
                                      ce,
                                      xC,
                                      yC,
                                      zC,
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
        for (int j = 0; j < 5; ++j) {
            gx[i * 5 + j] += ax[j * 5 + i];
            gy[i * 5 + j] += ay[j * 5 + i];
            gz[i * 5 + j] += az[j * 5 + i];
        }
}
