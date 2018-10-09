/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ppss_BB.hpp"
#include "gto_d2_kit/d2_ee_ppss_AA.hpp"

void second_derivative_ee_1100_22(const double ae,
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
                                  double* const d2eexx,
                                  double* const d2eexy,
                                  double* const d2eexz,
                                  double* const d2eeyx,
                                  double* const d2eeyy,
                                  double* const d2eeyz,
                                  double* const d2eezx,
                                  double* const d2eezy,
                                  double* const d2eezz)
{
    double txx[9] = {};
    double txy[9] = {};
    double txz[9] = {};
    double tyx[9] = {};
    double tyy[9] = {};
    double tyz[9] = {};
    double tzx[9] = {};
    double tzy[9] = {};
    double tzz[9] = {};
    second_derivative_ee_1100_11(be,
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
                                 txx,
                                 txy,
                                 txz,
                                 tyx,
                                 tyy,
                                 tyz,
                                 tzx,
                                 tzy,
                                 tzz);
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            int destinyInd = (i)*3 + j;
            int sourceInd = (j)*3 + i;
            d2eexx[destinyInd] += txx[sourceInd];
            d2eexy[destinyInd] += txy[sourceInd];
            d2eexz[destinyInd] += txz[sourceInd];
            d2eeyx[destinyInd] += tyx[sourceInd];
            d2eeyy[destinyInd] += tyy[sourceInd];
            d2eeyz[destinyInd] += tyz[sourceInd];
            d2eezx[destinyInd] += tzx[sourceInd];
            d2eezy[destinyInd] += tzy[sourceInd];
            d2eezz[destinyInd] += tzz[sourceInd];
        }
    }
}
