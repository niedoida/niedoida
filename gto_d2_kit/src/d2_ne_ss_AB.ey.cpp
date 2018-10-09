/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ss_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_00_12(double ae,
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
    const double C133 = ae + be;
    const double C132 = ae * be;
    const double C59 = std::exp(-(std::pow(xA - xB, 2) * C132) / C133);
    const double C60 = std::exp(-(std::pow(zA - zB, 2) * C132) / C133);
    const double C61 = std::exp(-(std::pow(yA - yB, 2) * C132) / C133);
    const double C75 = zA - zB;
    const double C74 = be * zB;
    const double C73 = ae * zA;
    const double C72 = yA - yB;
    const double C71 = be * yB;
    const double C70 = ae * yA;
    const double C69 = bs[2];
    const double C68 = bs[1];
    const double C67 = be * xB;
    const double C66 = ae * xA;
    const double C65 = ae + be;
    const double C64 = ae * be;
    const double C63 = xA - xB;
    const double C62 = bs[0];
    const double C84 = C64 * C75;
    const double C83 = C73 + C74;
    const double C82 = C64 * C72;
    const double C81 = C70 + C71;
    const double C80 = std::pow(C65, 2);
    const double C79 = 2 * C65;
    const double C78 = C66 + C67;
    const double C77 = 2 * C64;
    const double C76 = C64 * C63;
    const double C92 = C84 * C60;
    const double C91 = C83 / C65;
    const double C90 = C82 * C61;
    const double C89 = C81 / C65;
    const double C88 = C68 * C79;
    const double C87 = std::pow(C79, 2);
    const double C86 = C78 / C65;
    const double C85 = C76 * C59;
    const double C98 = 2 * C92;
    const double C97 = C91 - zC;
    const double C96 = 2 * C90;
    const double C95 = C89 - yC;
    const double C94 = C86 - xC;
    const double C93 = 2 * C85;
    const double C107 = ae * C97;
    const double C106 = C62 * C93;
    const double C105 = ae * C95;
    const double C104 = be * C97;
    const double C103 = C62 * C98;
    const double C102 = be * C95;
    const double C101 = C62 * C96;
    const double C100 = ae * C94;
    const double C99 = be * C94;
    const double C116 = C107 * C68;
    const double C115 = C106 / C65;
    const double C114 = C105 * C68;
    const double C113 = C104 * C68;
    const double C112 = C103 / C65;
    const double C111 = C102 * C68;
    const double C110 = C101 / C65;
    const double C109 = C100 * C68;
    const double C108 = C99 * C68;
    const double C119 = 2 * C108;
    const double C118 = 2 * C113;
    const double C117 = 2 * C111;
    const double C122 = C59 * C119;
    const double C121 = C60 * C118;
    const double C120 = C61 * C117;
    const double C125 = C115 - C122;
    const double C124 = C112 - C121;
    const double C123 = C110 - C120;
    const double d2nexx000000 =
        (2 * Pi *
         ((C62 * (C59 - (C63 * C93) / C65) * C77 + 2 * C108 * C93) / C65 -
          (2 * C109 * C93) / C65 +
          (C59 * (std::pow(C94, 2) * C69 * C87 - C88) * C64) / C80) *
         C60 * C61) /
        C65;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx000000;
    const double d2nexy000000 =
        (2 * Pi *
         (((C61 * C87 * C69 * C94 * C95 * ae * be) / C80 -
           (2 * C109 * C96) / C65) *
              C59 -
          (C123 * C93) / C65) *
         C60) /
        C65;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy000000;
    const double d2nexz000000 =
        (2 * Pi *
         (((C60 * C87 * C69 * C94 * C97 * ae * be) / C80 -
           (2 * C109 * C98) / C65) *
              C59 -
          (C124 * C93) / C65) *
         C61) /
        C65;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz000000;
    const double d2neyx000000 =
        (2 * Pi *
         (((C59 * C87 * C69 * C95 * C94 * ae * be) / C80 -
           (2 * C114 * C93) / C65) *
              C61 -
          (C125 * C96) / C65) *
         C60) /
        C65;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx000000;
    const double d2neyy000000 =
        (2 * Pi *
         ((C62 * (C61 - (C72 * C96) / C65) * C77 + 2 * C111 * C96) / C65 -
          (2 * C114 * C96) / C65 +
          (C61 * (std::pow(C95, 2) * C69 * C87 - C88) * C64) / C80) *
         C59 * C60) /
        C65;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy000000;
    const double d2neyz000000 =
        (2 * Pi *
         (((C60 * C87 * C69 * C95 * C97 * ae * be) / C80 -
           (2 * C114 * C98) / C65) *
              C61 -
          (C124 * C96) / C65) *
         C59) /
        C65;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz000000;
    const double d2nezx000000 =
        (2 * Pi *
         (((C59 * C87 * C69 * C97 * C94 * ae * be) / C80 -
           (2 * C116 * C93) / C65) *
              C60 -
          (C125 * C98) / C65) *
         C61) /
        C65;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx000000;
    const double d2nezy000000 =
        (2 * Pi *
         (((C61 * C87 * C69 * C97 * C95 * ae * be) / C80 -
           (2 * C116 * C96) / C65) *
              C60 -
          (C123 * C98) / C65) *
         C59) /
        C65;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy000000;
    const double d2nezz000000 =
        (2 * Pi *
         ((C62 * (C60 - (C75 * C98) / C65) * C77 + 2 * C113 * C98) / C65 -
          (2 * C116 * C98) / C65 +
          (C60 * (std::pow(C97, 2) * C69 * C87 - C88) * C64) / C80) *
         C61 * C59) /
        C65;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz000000;
}
