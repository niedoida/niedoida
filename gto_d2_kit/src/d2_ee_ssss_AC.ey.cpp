/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ssss_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0000_13(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C136 = p + q;
    const double C135 = p * q;
    const double C53 = bs[0];
    const double C169 = ce + de;
    const double C168 = ce * de;
    const double C167 = ae + be;
    const double C166 = ae * be;
    const double C137 = 2 * C135;
    const double C46 = std::exp(-(std::pow(xC - xD, 2) * C168) / C169);
    const double C49 = std::exp(-(std::pow(zC - zD, 2) * C168) / C169);
    const double C50 = std::exp(-(std::pow(yC - yD, 2) * C168) / C169);
    const double C45 = std::exp(-(std::pow(xA - xB, 2) * C166) / C167);
    const double C47 = std::exp(-(std::pow(yA - yB, 2) * C166) / C167);
    const double C48 = std::exp(-(std::pow(zA - zB, 2) * C166) / C167);
    const double C56 =
        (-((std::pow(xP - xQ, 2) * bs[2] * std::pow(C137 / C136, 2) -
            (bs[1] * C137) / C136) *
           ae * ce) /
         (ce + de)) /
        (ae + be);
    const double C65 =
        (-(std::pow(C137 / C136, 2) * bs[2] * (xP - xQ) * (yP - yQ) * ae * ce) /
         (ce + de)) /
        (ae + be);
    const double C74 =
        (-(std::pow(C137 / C136, 2) * bs[2] * (xP - xQ) * (zP - zQ) * ae * ce) /
         (ce + de)) /
        (ae + be);
    const double C83 =
        (-(std::pow(C137 / C136, 2) * bs[2] * (yP - yQ) * (xP - xQ) * ae * ce) /
         (ce + de)) /
        (ae + be);
    const double C90 =
        (-((std::pow(yP - yQ, 2) * bs[2] * std::pow(C137 / C136, 2) -
            (bs[1] * C137) / C136) *
           ae * ce) /
         (ce + de)) /
        (ae + be);
    const double C97 =
        (-(std::pow(C137 / C136, 2) * bs[2] * (yP - yQ) * (zP - zQ) * ae * ce) /
         (ce + de)) /
        (ae + be);
    const double C106 =
        (-(std::pow(C137 / C136, 2) * bs[2] * (zP - zQ) * (xP - xQ) * ae * ce) /
         (ce + de)) /
        (ae + be);
    const double C113 =
        (-(std::pow(C137 / C136, 2) * bs[2] * (zP - zQ) * (yP - yQ) * ae * ce) /
         (ce + de)) /
        (ae + be);
    const double C120 =
        (-((std::pow(zP - zQ, 2) * bs[2] * std::pow(C137 / C136, 2) -
            (bs[1] * C137) / C136) *
           ae * ce) /
         (ce + de)) /
        (ae + be);
    const double C54 = (-(bs[1] * (xP - xQ) * ae * C137) / C136) / (ae + be);
    const double C55 = (bs[1] * (xP - xQ) * ce * C137) / (C136 * (ce + de));
    const double C64 = (bs[1] * (yP - yQ) * ce * C137) / (C136 * (ce + de));
    const double C73 = (bs[1] * (zP - zQ) * ce * C137) / (C136 * (ce + de));
    const double C82 = (-(bs[1] * (yP - yQ) * ae * C137) / C136) / (ae + be);
    const double C105 = (-(bs[1] * (zP - zQ) * ae * C137) / C136) / (ae + be);
    const double C52 = -(2 * ce * de * (xC - xD) * C46) / (ce + de);
    const double C72 = -(2 * ce * de * (zC - zD) * C49) / (ce + de);
    const double C63 = -(2 * ce * de * (yC - yD) * C50) / (ce + de);
    const double C51 = -(2 * ae * be * (xA - xB) * C45) / (ae + be);
    const double C81 = -(2 * ae * be * (yA - yB) * C47) / (ae + be);
    const double C104 = -(2 * ae * be * (zA - zB) * C48) / (ae + be);
    
    d2eexx[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C51 * C53 + C45 * C54) * C52 + (C51 * C55 + C45 * C56) * C46) * C47 *
         C48 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C51 * C53 + C45 * C54) * C63 + (C51 * C64 + C45 * C65) * C50) * C47 *
         C48 * C46 * C49) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C51 * C53 + C45 * C54) * C72 + (C51 * C73 + C45 * C74) * C49) * C47 *
         C48 * C50 * C46) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C81 * C53 + C47 * C82) * C52 + (C81 * C55 + C47 * C83) * C46) * C48 *
         C45 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C81 * C53 + C47 * C82) * C63 + (C81 * C64 + C47 * C90) * C50) * C48 *
         C45 * C46 * C49) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C81 * C53 + C47 * C82) * C72 + (C81 * C73 + C47 * C97) * C49) * C48 *
         C45 * C50 * C46) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C104 * C53 + C48 * C105) * C52 + (C104 * C55 + C48 * C106) * C46) *
         C45 * C47 * C49 * C50) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C104 * C53 + C48 * C105) * C63 + (C104 * C64 + C48 * C113) * C50) *
         C45 * C47 * C46 * C49) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C104 * C53 + C48 * C105) * C72 + (C104 * C73 + C48 * C120) * C49) *
         C45 * C47 * C50 * C46) /
        (p * q * std::sqrt(p + q));
    
}
