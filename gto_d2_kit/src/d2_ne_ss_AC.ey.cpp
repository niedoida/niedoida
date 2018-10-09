/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ss_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_00_13(double ae,
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
    const double C109 = ae + be;
    const double C108 = ae * be;
    const double C59 = std::exp(-(std::pow(xA - xB, 2) * C108) / C109);
    const double C60 = std::exp(-(std::pow(zA - zB, 2) * C108) / C109);
    const double C61 = std::exp(-(std::pow(yA - yB, 2) * C108) / C109);
    const double C74 = zA - zB;
    const double C73 = yA - yB;
    const double C72 = be * zB;
    const double C71 = ae * zA;
    const double C70 = be * yB;
    const double C69 = ae * yA;
    const double C68 = xA - xB;
    const double C67 = ae * be;
    const double C66 = bs[1];
    const double C65 = bs[2];
    const double C64 = ae + be;
    const double C63 = be * xB;
    const double C62 = ae * xA;
    const double C81 = C67 * C74;
    const double C80 = C67 * C73;
    const double C79 = C71 + C72;
    const double C78 = C69 + C70;
    const double C77 = C67 * C68;
    const double C76 = 2 * C64;
    const double C75 = C62 + C63;
    const double C89 = C81 * C60;
    const double C88 = C80 * C61;
    const double C87 = C79 / C64;
    const double C86 = C78 / C64;
    const double C85 = C77 * C59;
    const double C84 = C66 * C76;
    const double C83 = std::pow(C76, 2);
    const double C82 = C75 / C64;
    const double C95 = 2 * C89;
    const double C94 = 2 * C88;
    const double C93 = C87 - zC;
    const double C92 = C86 - yC;
    const double C91 = 2 * C85;
    const double C90 = C82 - xC;
    const double C98 = C64 * C93;
    const double C97 = C64 * C92;
    const double C96 = C64 * C90;
    const double C101 = C98 * C66;
    const double C100 = C97 * C66;
    const double C99 = C96 * C66;
    const double d2nexx000000 =
        (2 * Pi *
         ((-C59 * (std::pow(C90, 2) * C65 * C83 - C84) * ae) / C64 -
          (2 * C99 * C91) / C64) *
         C60 * C61) /
        C64;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx000000;
    const double d2nexy000000 =
        (2 * Pi *
         ((-C59 * C83 * C65 * C90 * C92 * ae) / C64 - (2 * C100 * C91) / C64) *
         C60 * C61) /
        C64;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy000000;
    const double d2nexz000000 =
        (2 * Pi *
         ((-C59 * C83 * C65 * C90 * C93 * ae) / C64 - (2 * C101 * C91) / C64) *
         C60 * C61) /
        C64;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz000000;
    const double d2neyx000000 =
        (2 * Pi *
         ((-C61 * C83 * C65 * C92 * C90 * ae) / C64 - (2 * C99 * C94) / C64) *
         C59 * C60) /
        C64;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx000000;
    const double d2neyy000000 =
        (2 * Pi *
         ((-C61 * (std::pow(C92, 2) * C65 * C83 - C84) * ae) / C64 -
          (2 * C100 * C94) / C64) *
         C59 * C60) /
        C64;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy000000;
    const double d2neyz000000 =
        (2 * Pi *
         ((-C61 * C83 * C65 * C92 * C93 * ae) / C64 - (2 * C101 * C94) / C64) *
         C59 * C60) /
        C64;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz000000;
    const double d2nezx000000 =
        (2 * Pi *
         ((-C60 * C83 * C65 * C93 * C90 * ae) / C64 - (2 * C99 * C95) / C64) *
         C61 * C59) /
        C64;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx000000;
    const double d2nezy000000 =
        (2 * Pi *
         ((-C60 * C83 * C65 * C93 * C92 * ae) / C64 - (2 * C100 * C95) / C64) *
         C61 * C59) /
        C64;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy000000;
    const double d2nezz000000 =
        (2 * Pi *
         ((-C60 * (std::pow(C93, 2) * C65 * C83 - C84) * ae) / C64 -
          (2 * C101 * C95) / C64) *
         C61 * C59) /
        C64;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz000000;
}
