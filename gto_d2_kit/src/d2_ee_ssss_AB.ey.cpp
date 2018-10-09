/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ssss_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0000_12(const double ae,
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
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C128 = ae + be;
    const double C127 = ae * be;
    const double C126 = xA - xB;
    const double C135 = yA - yB;
    const double C138 = zA - zB;
    const double C141 = p + q;
    const double C140 = p * q;
    const double C53 = bs[0];
    const double C172 = ce + de;
    const double C171 = ce * de;
    const double C45 = std::exp(-(std::pow(C126, 2) * C127) / C128);
    const double C47 = std::exp(-(std::pow(C135, 2) * C127) / C128);
    const double C46 = std::exp(-(std::pow(C138, 2) * C127) / C128);
    const double C142 = 2 * C140;
    const double C48 = std::exp(-(std::pow(zC - zD, 2) * C171) / C172);
    const double C49 = std::exp(-(std::pow(yC - yD, 2) * C171) / C172);
    const double C50 = std::exp(-(std::pow(xC - xD, 2) * C171) / C172);
    const double C51 = -(2 * ae * be * (xA - xB) * C45) / (ae + be);
    const double C52 =
        -((C45 - (C126 * 2 * C127 * C126 * C45) / C128) * 2 * C127) / C128;
    const double C63 = -(2 * C127 * (yA - yB) * C47) / C128;
    const double C89 =
        -((C47 - (C135 * 2 * C127 * C135 * C47) / C128) * 2 * C127) / C128;
    const double C72 = -(2 * C127 * (zA - zB) * C46) / C128;
    const double C119 =
        -((C46 - (C138 * 2 * C127 * C138 * C46) / C128) * 2 * C127) / C128;
    const double C56 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C142 / C141, 2) -
          (bs[1] * C142) / C141) *
         C127) /
        std::pow(C128, 2);
    const double C65 =
        (std::pow(C142 / C141, 2) * bs[2] * (xP - xQ) * (yP - yQ) * ae * be) /
        std::pow(C128, 2);
    const double C74 =
        (std::pow(C142 / C141, 2) * bs[2] * (xP - xQ) * (zP - zQ) * ae * be) /
        std::pow(C128, 2);
    const double C82 =
        (std::pow(C142 / C141, 2) * bs[2] * (yP - yQ) * (xP - xQ) * ae * be) /
        std::pow(C128, 2);
    const double C90 =
        ((std::pow(yP - yQ, 2) * bs[2] * std::pow(C142 / C141, 2) -
          (bs[1] * C142) / C141) *
         C127) /
        std::pow(C128, 2);
    const double C97 =
        (std::pow(C142 / C141, 2) * bs[2] * (yP - yQ) * (zP - zQ) * ae * be) /
        std::pow(C128, 2);
    const double C105 =
        (std::pow(C142 / C141, 2) * bs[2] * (zP - zQ) * (xP - xQ) * ae * be) /
        std::pow(C128, 2);
    const double C112 =
        (std::pow(C142 / C141, 2) * bs[2] * (zP - zQ) * (yP - yQ) * ae * be) /
        std::pow(C128, 2);
    const double C120 =
        ((std::pow(zP - zQ, 2) * bs[2] * std::pow(C142 / C141, 2) -
          (bs[1] * C142) / C141) *
         C127) /
        std::pow(C128, 2);
    const double C54 = (-(bs[1] * (xP - xQ) * be * C142) / C141) / C128;
    const double C55 = (-(bs[1] * (xP - xQ) * ae * C142) / C141) / C128;
    const double C64 = (-(bs[1] * (yP - yQ) * be * C142) / C141) / C128;
    const double C73 = (-(bs[1] * (zP - zQ) * be * C142) / C141) / C128;
    const double C81 = (-(bs[1] * (yP - yQ) * ae * C142) / C141) / C128;
    const double C104 = (-(bs[1] * (zP - zQ) * ae * C142) / C141) / C128;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  (C51 * C54 - C52 * C53 - C51 * C55 + C45 * C56) * C46 * C47 *
                  C48 * C49 * C50) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C47 * C64 - C63 * C53) * C51 + (C47 * C65 - C63 * C55) * C45) * C46 *
         C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C46 * C73 - C72 * C53) * C51 + (C46 * C74 - C72 * C55) * C45) * C47 *
         C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C45 * C54 - C51 * C53) * C63 + (C45 * C82 - C51 * C81) * C47) * C46 *
         C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  (C63 * C64 - C89 * C53 - C63 * C81 + C47 * C90) * C45 * C46 *
                  C48 * C49 * C50) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C46 * C73 - C72 * C53) * C63 + (C46 * C97 - C72 * C81) * C47) * C45 *
         C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C45 * C54 - C51 * C53) * C72 + (C45 * C105 - C51 * C104) * C46) *
         C47 * C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C47 * C64 - C63 * C53) * C72 + (C47 * C112 - C63 * C104) * C46) *
         C45 * C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  (C72 * C73 - C119 * C53 - C72 * C104 + C46 * C120) * C47 *
                  C45 * C48 * C49 * C50) /
                 (p * q * std::sqrt(p + q));
    
}
