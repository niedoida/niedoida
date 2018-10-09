/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ss_BC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_00_23(double ae,
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
    const double C68 = bs[2];
    const double C67 = xA - xB;
    const double C66 = ae * be;
    const double C65 = bs[1];
    const double C64 = be * xB;
    const double C63 = ae * xA;
    const double C62 = ae + be;
    const double C81 = C66 * C74;
    const double C80 = C66 * C73;
    const double C79 = C71 + C72;
    const double C78 = C69 + C70;
    const double C77 = 2 * C62;
    const double C76 = C66 * C67;
    const double C75 = C63 + C64;
    const double C89 = C81 * C60;
    const double C88 = C80 * C61;
    const double C87 = C79 / C62;
    const double C86 = C78 / C62;
    const double C85 = C65 * C77;
    const double C84 = std::pow(C77, 2);
    const double C83 = C76 * C59;
    const double C82 = C75 / C62;
    const double C95 = 2 * C89;
    const double C94 = 2 * C88;
    const double C93 = C87 - zC;
    const double C92 = C86 - yC;
    const double C91 = 2 * C83;
    const double C90 = C82 - xC;
    const double C98 = C62 * C93;
    const double C97 = C62 * C92;
    const double C96 = C62 * C90;
    const double C101 = C98 * C65;
    const double C100 = C97 * C65;
    const double C99 = C96 * C65;
    const double d2nexx000000 =
        (2 * Pi *
         ((2 * C99 * C91) / C62 -
          (C59 * (std::pow(C90, 2) * C68 * C84 - C85) * be) / C62) *
         C60 * C61) /
        C62;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx000000;
    const double d2nexy000000 =
        (2 * Pi *
         ((2 * C100 * C91) / C62 - (C59 * C84 * C68 * C90 * C92 * be) / C62) *
         C60 * C61) /
        C62;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy000000;
    const double d2nexz000000 =
        (2 * Pi *
         ((2 * C101 * C91) / C62 - (C59 * C84 * C68 * C90 * C93 * be) / C62) *
         C60 * C61) /
        C62;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz000000;
    const double d2neyx000000 =
        (2 * Pi *
         ((2 * C99 * C94) / C62 - (C61 * C84 * C68 * C92 * C90 * be) / C62) *
         C59 * C60) /
        C62;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx000000;
    const double d2neyy000000 =
        (2 * Pi *
         ((2 * C100 * C94) / C62 -
          (C61 * (std::pow(C92, 2) * C68 * C84 - C85) * be) / C62) *
         C59 * C60) /
        C62;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy000000;
    const double d2neyz000000 =
        (2 * Pi *
         ((2 * C101 * C94) / C62 - (C61 * C84 * C68 * C92 * C93 * be) / C62) *
         C59 * C60) /
        C62;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz000000;
    const double d2nezx000000 =
        (2 * Pi *
         ((2 * C99 * C95) / C62 - (C60 * C84 * C68 * C93 * C90 * be) / C62) *
         C61 * C59) /
        C62;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx000000;
    const double d2nezy000000 =
        (2 * Pi *
         ((2 * C100 * C95) / C62 - (C60 * C84 * C68 * C93 * C92 * be) / C62) *
         C61 * C59) /
        C62;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy000000;
    const double d2nezz000000 =
        (2 * Pi *
         ((2 * C101 * C95) / C62 -
          (C60 * (std::pow(C93, 2) * C68 * C84 - C85) * be) / C62) *
         C61 * C59) /
        C62;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz000000;
}
