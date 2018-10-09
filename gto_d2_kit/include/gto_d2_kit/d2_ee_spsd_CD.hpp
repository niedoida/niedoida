/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef D2_EE_SPSD_CD_HPP
#define D2_EE_SPSD_CD_HPP

void second_derivative_ee_0102_34(    const double ae,
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
    const double* const bs,    double* const d2eexx,    double* const d2eexy,    double* const d2eexz,    double* const d2eeyx,    double* const d2eeyy,    double* const d2eeyz,    double* const d2eezx,    double* const d2eezy,    double* const d2eezz);
void second_derivative_ee_0102_43(    const double ae,
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
    const double* const bs,    double* const d2eexx,    double* const d2eexy,    double* const d2eexz,    double* const d2eeyx,    double* const d2eeyy,    double* const d2eeyz,    double* const d2eezx,    double* const d2eezy,    double* const d2eezz);
#endif