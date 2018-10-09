/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ss_BB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_00_22(double ae,
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
    const double C134 = ae + be;
    const double C133 = ae * be;
    const double C59 = std::exp(-(std::pow(xA - xB, 2) * C133) / C134);
    const double C60 = std::exp(-(std::pow(zA - zB, 2) * C133) / C134);
    const double C61 = std::exp(-(std::pow(yA - yB, 2) * C133) / C134);
    const double C76 = zA - zB;
    const double C75 = be * zB;
    const double C74 = ae * zA;
    const double C73 = yA - yB;
    const double C72 = be * yB;
    const double C71 = ae * yA;
    const double C70 = std::pow(be, 2);
    const double C69 = bs[2];
    const double C68 = bs[0];
    const double C67 = xA - xB;
    const double C66 = ae * be;
    const double C65 = bs[1];
    const double C64 = ae + be;
    const double C63 = be * xB;
    const double C62 = ae * xA;
    const double C85 = C66 * C76;
    const double C84 = C74 + C75;
    const double C83 = C66 * C73;
    const double C82 = C71 + C72;
    const double C81 = std::pow(C64, 2);
    const double C80 = 2 * C64;
    const double C79 = 2 * C66;
    const double C78 = C66 * C67;
    const double C77 = C62 + C63;
    const double C93 = C85 * C60;
    const double C92 = C84 / C64;
    const double C91 = C83 * C61;
    const double C90 = C82 / C64;
    const double C89 = C65 * C80;
    const double C88 = std::pow(C80, 2);
    const double C87 = C78 * C59;
    const double C86 = C77 / C64;
    const double C99 = 2 * C93;
    const double C98 = C92 - zC;
    const double C97 = 2 * C91;
    const double C96 = C90 - yC;
    const double C95 = 2 * C87;
    const double C94 = C86 - xC;
    const double C105 = C68 * C95;
    const double C104 = C68 * C99;
    const double C103 = be * C98;
    const double C102 = C68 * C97;
    const double C101 = be * C96;
    const double C100 = be * C94;
    const double C111 = C105 / C64;
    const double C110 = C104 / C64;
    const double C109 = C103 * C65;
    const double C108 = C102 / C64;
    const double C107 = C101 * C65;
    const double C106 = C100 * C65;
    const double C117 = C109 * C99;
    const double C116 = C107 * C97;
    const double C115 = 2 * C106;
    const double C114 = 2 * C109;
    const double C113 = 2 * C107;
    const double C112 = C106 * C95;
    const double C123 = 2 * C117;
    const double C122 = 2 * C116;
    const double C121 = C59 * C115;
    const double C120 = C60 * C114;
    const double C119 = C61 * C113;
    const double C118 = 2 * C112;
    const double C126 = C121 - C111;
    const double C125 = C120 - C110;
    const double C124 = C119 - C108;
    const double d2nexx000000 =
        (2 * Pi *
         ((-C118) / C64 - (C68 * (C59 - (C67 * C95) / C64) * C79) / C64 -
          C118 / C64 +
          (C59 * (std::pow(C94, 2) * C69 * C88 - C89) * C70) / C81) *
         C60 * C61) /
        C64;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx000000;
    const double d2nexy000000 =
        (2 * Pi *
         (((C61 * C88 * C69 * C94 * C96 * C70) / C81 - (2 * C106 * C97) / C64) *
              C59 -
          (C124 * C95) / C64) *
         C60) /
        C64;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy000000;
    const double d2nexz000000 =
        (2 * Pi *
         (((C60 * C88 * C69 * C94 * C98 * C70) / C81 - (2 * C106 * C99) / C64) *
              C59 -
          (C125 * C95) / C64) *
         C61) /
        C64;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz000000;
    const double d2neyx000000 =
        (2 * Pi *
         (((C59 * C88 * C69 * C96 * C94 * C70) / C81 - (2 * C107 * C95) / C64) *
              C61 -
          (C126 * C97) / C64) *
         C60) /
        C64;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx000000;
    const double d2neyy000000 =
        (2 * Pi *
         ((-C122) / C64 - (C68 * (C61 - (C73 * C97) / C64) * C79) / C64 -
          C122 / C64 +
          (C61 * (std::pow(C96, 2) * C69 * C88 - C89) * C70) / C81) *
         C59 * C60) /
        C64;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy000000;
    const double d2neyz000000 =
        (2 * Pi *
         (((C60 * C88 * C69 * C96 * C98 * C70) / C81 - (2 * C107 * C99) / C64) *
              C61 -
          (C125 * C97) / C64) *
         C59) /
        C64;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz000000;
    const double d2nezx000000 =
        (2 * Pi *
         (((C59 * C88 * C69 * C98 * C94 * C70) / C81 - (2 * C109 * C95) / C64) *
              C60 -
          (C126 * C99) / C64) *
         C61) /
        C64;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx000000;
    const double d2nezy000000 =
        (2 * Pi *
         (((C61 * C88 * C69 * C98 * C96 * C70) / C81 - (2 * C109 * C97) / C64) *
              C60 -
          (C124 * C99) / C64) *
         C59) /
        C64;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy000000;
    const double d2nezz000000 =
        (2 * Pi *
         ((-C123) / C64 - (C68 * (C60 - (C76 * C99) / C64) * C79) / C64 -
          C123 / C64 +
          (C60 * (std::pow(C98, 2) * C69 * C88 - C89) * C70) / C81) *
         C61 * C59) /
        C64;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz000000;
}
