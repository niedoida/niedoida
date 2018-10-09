/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ddds_CC.hpp"
#include "gto_d2_kit/d2_ee_dsdd_AA.hpp"

void second_derivative_ee_2220_33(const double ae,
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
    double txx[125] = {};
    double txy[125] = {};
    double txz[125] = {};
    double tyx[125] = {};
    double tyy[125] = {};
    double tyz[125] = {};
    double tzx[125] = {};
    double tzy[125] = {};
    double tzz[125] = {};
    second_derivative_ee_2022_11(ce,
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
                                 txx,
                                 txy,
                                 txz,
                                 tyx,
                                 tyy,
                                 tyz,
                                 tzx,
                                 tzy,
                                 tzz);
    for (int k = 0; k < 5; k++) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                int destinyInd = ((i)*5 + j) * 5 + k;
                int sourceInd = ((k)*5 + i) * 5 + j;
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
}
