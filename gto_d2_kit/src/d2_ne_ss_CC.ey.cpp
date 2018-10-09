/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ss_CC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_00_33(double ae,
                                 double be,
                                 double xA,
                                 double yA,
                                 double zA,
                                 double xB,
                                 double yB,
                                 double zB,
                                 double xC,
                                 double yC,
                                 double zC,
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
                                 std::size_t Ai,
                                 std::size_t Bi)
{
    const double C90 = ae + be;
    const double C89 = ae * be;
    const double C59 = std::exp(-(std::pow(zA - zB, 2) * C89) / C90);
    const double C60 = std::exp(-(std::pow(yA - yB, 2) * C89) / C90);
    const double C61 = std::exp(-(std::pow(xA - xB, 2) * C89) / C90);
    const double C70 = be * zB;
    const double C69 = ae * zA;
    const double C68 = be * yB;
    const double C67 = ae * yA;
    const double C66 = bs[1];
    const double C65 = bs[2];
    const double C64 = ae + be;
    const double C63 = be * xB;
    const double C62 = ae * xA;
    const double C74 = C69 + C70;
    const double C73 = C67 + C68;
    const double C72 = 2 * C64;
    const double C71 = C62 + C63;
    const double C79 = C74 / C64;
    const double C78 = C73 / C64;
    const double C77 = C66 * C72;
    const double C76 = std::pow(C72, 2);
    const double C75 = C71 / C64;
    const double C82 = C79 - zC;
    const double C81 = C78 - yC;
    const double C80 = C75 - xC;
    const double d2nexx000000 =
        (2 * Pi * C59 * (std::pow(C80, 2) * C65 * C76 - C77) * C60 * C61) / C64;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx000000;
    const double d2nexy000000 =
        (2 * Pi * C59 * C80 * C81 * C65 * C76 * C60 * C61) / C64;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy000000;
    const double d2nexz000000 =
        (2 * Pi * C59 * C80 * C82 * C65 * C76 * C60 * C61) / C64;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz000000;
    const double d2neyx000000 =
        (2 * Pi * C59 * C81 * C80 * C65 * C76 * C60 * C61) / C64;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx000000;
    const double d2neyy000000 =
        (2 * Pi * C59 * (std::pow(C81, 2) * C65 * C76 - C77) * C60 * C61) / C64;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy000000;
    const double d2neyz000000 =
        (2 * Pi * C59 * C81 * C82 * C65 * C76 * C60 * C61) / C64;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz000000;
    const double d2nezx000000 =
        (2 * Pi * C59 * C82 * C80 * C65 * C76 * C60 * C61) / C64;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx000000;
    const double d2nezy000000 =
        (2 * Pi * C59 * C82 * C81 * C65 * C76 * C60 * C61) / C64;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy000000;
    const double d2nezz000000 =
        (2 * Pi * C59 * (std::pow(C82, 2) * C65 * C76 - C77) * C60 * C61) / C64;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz000000;
}
