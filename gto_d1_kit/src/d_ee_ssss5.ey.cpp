/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void two_electrons_gradient_ssss_B(const unsigned Al,
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
    two_electrons_gradient_ssss_A(Bl,
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
}
