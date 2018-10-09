/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ssss_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0000_11(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C126 = ae + be;
    const double C125 = ae * be;
    const double C124 = xA - xB;
    const double C135 = yA - yB;
    const double C138 = zA - zB;
    const double C141 = p + q;
    const double C140 = p * q;
    const double C53 = bs[0];
    const double C169 = ce + de;
    const double C168 = ce * de;
    const double C45 = std::exp(-(std::pow(C124, 2) * C125) / C126);
    const double C47 = std::exp(-(std::pow(C135, 2) * C125) / C126);
    const double C46 = std::exp(-(std::pow(C138, 2) * C125) / C126);
    const double C142 = 2 * C140;
    const double C48 = std::exp(-(std::pow(zC - zD, 2) * C168) / C169);
    const double C49 = std::exp(-(std::pow(yC - yD, 2) * C168) / C169);
    const double C50 = std::exp(-(std::pow(xC - xD, 2) * C168) / C169);
    const double C51 =
        -((C45 - (C124 * 2 * C125 * C124 * C45) / C126) * 2 * C125) / C126;
    const double C52 = -(2 * C125 * C124 * C45) / C126;
    const double C63 = -(2 * C125 * (yA - yB) * C47) / C126;
    const double C88 =
        -((C47 - (C135 * 2 * C125 * C135 * C47) / C126) * 2 * C125) / C126;
    const double C72 = -(2 * C125 * (zA - zB) * C46) / C126;
    const double C118 =
        -((C46 - (C138 * 2 * C125 * C138 * C46) / C126) * 2 * C125) / C126;
    const double C55 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C142 / C141, 2) -
          (bs[1] * C142) / C141) *
         std::pow(ae, 2)) /
        std::pow(C126, 2);
    const double C65 = (std::pow(C142 / C141, 2) * bs[2] * (xP - xQ) *
                        (yP - yQ) * std::pow(ae, 2)) /
                       std::pow(C126, 2);
    const double C74 = (std::pow(C142 / C141, 2) * bs[2] * (xP - xQ) *
                        (zP - zQ) * std::pow(ae, 2)) /
                       std::pow(C126, 2);
    const double C81 = (std::pow(C142 / C141, 2) * bs[2] * (yP - yQ) *
                        (xP - xQ) * std::pow(ae, 2)) /
                       std::pow(C126, 2);
    const double C89 =
        ((std::pow(yP - yQ, 2) * bs[2] * std::pow(C142 / C141, 2) -
          (bs[1] * C142) / C141) *
         std::pow(ae, 2)) /
        std::pow(C126, 2);
    const double C97 = (std::pow(C142 / C141, 2) * bs[2] * (yP - yQ) *
                        (zP - zQ) * std::pow(ae, 2)) /
                       std::pow(C126, 2);
    const double C104 = (std::pow(C142 / C141, 2) * bs[2] * (zP - zQ) *
                         (xP - xQ) * std::pow(ae, 2)) /
                        std::pow(C126, 2);
    const double C111 = (std::pow(C142 / C141, 2) * bs[2] * (zP - zQ) *
                         (yP - yQ) * std::pow(ae, 2)) /
                        std::pow(C126, 2);
    const double C119 =
        ((std::pow(zP - zQ, 2) * bs[2] * std::pow(C142 / C141, 2) -
          (bs[1] * C142) / C141) *
         std::pow(ae, 2)) /
        std::pow(C126, 2);
    const double C54 = (-(bs[1] * (xP - xQ) * ae * C142) / C141) / C126;
    const double C64 = (-(bs[1] * (yP - yQ) * ae * C142) / C141) / C126;
    const double C73 = (-(bs[1] * (zP - zQ) * ae * C142) / C141) / C126;
    const double C57 = C52 * C54;
    const double C91 = C63 * C64;
    const double C121 = C72 * C73;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) * (C51 * C53 + C57 + C57 + C45 * C55) *
                  C46 * C47 * C48 * C49 * C50) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C63 * C53 + C47 * C64) * C52 + (C63 * C54 + C47 * C65) * C45) * C46 *
         C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C72 * C53 + C46 * C73) * C52 + (C72 * C54 + C46 * C74) * C45) * C47 *
         C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C52 * C53 + C45 * C54) * C63 + (C52 * C64 + C45 * C81) * C47) * C46 *
         C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) * (C88 * C53 + C91 + C91 + C47 * C89) *
                  C45 * C46 * C48 * C49 * C50) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C72 * C53 + C46 * C73) * C63 + (C72 * C64 + C46 * C97) * C47) * C45 *
         C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C52 * C53 + C45 * C54) * C72 + (C52 * C73 + C45 * C104) * C46) *
         C47 * C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C63 * C53 + C47 * C64) * C72 + (C63 * C73 + C47 * C111) * C46) *
         C45 * C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (2 * std::pow(Pi, 2.5) * (C118 * C53 + C121 + C121 + C46 * C119) * C47 *
         C45 * C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    
}
