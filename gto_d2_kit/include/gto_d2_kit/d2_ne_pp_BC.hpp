/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef D2_NE_PP_BC_HPP
#define D2_NE_PP_BC_HPP

#include <cstdlib>
void vne_second_derivative_11_23(    double ae, double be,
    double xA, double yA, double zA,
    double xB, double yB, double zB,
    double xC, double yC, double zC,
    const double* bs,
    double* const d2nexx,
    double* const d2nexy,
    double* const d2nexz,
    double* const d2neyx,
    double* const d2neyy,
    double* const d2neyz,
    double* const d2nezx,
    double* const d2nezy,
    double* const d2nezz,
    std::size_t matrix_size,
    std::size_t Ai, std::size_t Bi);

void vne_second_derivative_11_32(    double ae, double be,
    double xA, double yA, double zA,
    double xB, double yB, double zB,
    double xC, double yC, double zC,
    const double* bs,
    double* const d2nexx,
    double* const d2nexy,
    double* const d2nexz,
    double* const d2neyx,
    double* const d2neyy,
    double* const d2neyz,
    double* const d2nezx,
    double* const d2nezy,
    double* const d2nezz,
	   std::size_t matrix_size,
    std::size_t Ai, std::size_t Bi);
#endif