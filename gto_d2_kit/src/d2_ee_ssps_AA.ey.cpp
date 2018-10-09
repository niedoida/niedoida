/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ssps_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0010_11(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C396 = ae + be;
    const double C395 = ae * be;
    const double C394 = xA - xB;
    const double C405 = yA - yB;
    const double C408 = zA - zB;
    const double C411 = p + q;
    const double C410 = p * q;
    const double C416 = xP - xQ;
    const double C415 = bs[2];
    const double C420 = yP - yQ;
    const double C423 = zP - zQ;
    const double C58 = bs[0];
    const double C483 = ce + de;
    const double C482 = xC - xD;
    const double C488 = yC - yD;
    const double C495 = zC - zD;
    const double C500 = ce * de;
    const double C49 = std::exp(-(std::pow(C394, 2) * C395) / C396);
    const double C51 = std::exp(-(std::pow(C405, 2) * C395) / C396);
    const double C50 = std::exp(-(std::pow(C408, 2) * C395) / C396);
    const double C412 = 2 * C410;
    const double C503 = 2 * C483;
    const double C502 = std::pow(C482, 2);
    const double C501 = std::pow(C488, 2);
    const double C499 = std::pow(C495, 2);
    const double C56 =
        -((C49 - (C394 * 2 * C395 * C394 * C49) / C396) * 2 * C395) / C396;
    const double C57 = -(2 * C395 * C394 * C49) / C396;
    const double C76 = -(2 * C395 * (yA - yB) * C51) / C396;
    const double C118 =
        -((C51 - (C405 * 2 * C395 * C405 * C51) / C396) * 2 * C395) / C396;
    const double C91 = -(2 * C395 * (zA - zB) * C50) / C396;
    const double C169 =
        -((C50 - (C408 * 2 * C395 * C408 * C50) / C396) * 2 * C395) / C396;
    const double C414 = C412 / C411;
    const double C62 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C412 / C411, 2) -
          (bs[1] * C412) / C411) *
         std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C60 = (-(bs[1] * C416 * ae * C412) / C411) / C396;
    const double C77 = (-(bs[1] * C420 * ae * C412) / C411) / C396;
    const double C92 = (-(bs[1] * C423 * ae * C412) / C411) / C396;
    const double C59 = -(C416 * bs[1] * C412) / C411;
    const double C187 = -(C420 * bs[1] * C412) / C411;
    const double C295 = -(C423 * bs[1] * C412) / C411;
    const double C507 = std::pow(C503, -1);
    const double C506 = C502 * C500;
    const double C505 = C501 * C500;
    const double C504 = C499 * C500;
    const double C417 = std::pow(C414, 2);
    const double C134 =
        (C416 * std::pow(-C414, 3) * bs[3] * C420 * C423 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C158 =
        (C416 * std::pow(-C414, 3) * bs[3] * C423 * C420 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C214 =
        (C420 * std::pow(-C414, 3) * bs[3] * C416 * C423 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C259 =
        (C420 * std::pow(-C414, 3) * bs[3] * C423 * C416 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C310 =
        (C423 * std::pow(-C414, 3) * bs[3] * C416 * C420 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C333 =
        (C423 * std::pow(-C414, 3) * bs[3] * C420 * C416 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C65 = C57 * C60;
    const double C122 = C76 * C77;
    const double C173 = C91 * C92;
    const double C510 = C506 / C483;
    const double C509 = C505 / C483;
    const double C508 = C504 / C483;
    const double C63 =
        (2 * ae * C417 * C415 * C416 * ae +
         C416 * (C415 * C417 + std::pow(C416, 2) * bs[3] * std::pow(-C414, 3)) *
             std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C79 =
        (C417 * C415 * C416 * (yP - yQ) * std::pow(ae, 2)) / std::pow(C396, 2);
    const double C80 =
        (ae * C417 * C415 * C420 * ae +
         C416 * std::pow(-C414, 3) * bs[3] * C416 * C420 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C94 =
        (C417 * C415 * C416 * (zP - zQ) * std::pow(ae, 2)) / std::pow(C396, 2);
    const double C95 =
        (ae * C417 * C415 * C423 * ae +
         C416 * std::pow(-C414, 3) * bs[3] * C416 * C423 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C106 =
        (C417 * C415 * C420 * C416 * std::pow(ae, 2)) / std::pow(C396, 2);
    const double C107 =
        (ae * C417 * C415 * C420 * ae +
         C416 * std::pow(-C414, 3) * bs[3] * C420 * C416 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C119 =
        ((std::pow(C420, 2) * C415 * C417 - (bs[1] * C412) / C411) *
         std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C120 =
        (C416 * (C415 * C417 + std::pow(C420, 2) * bs[3] * std::pow(-C414, 3)) *
         std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C133 =
        (C417 * C415 * C420 * C423 * std::pow(ae, 2)) / std::pow(C396, 2);
    const double C145 =
        (C417 * C415 * C423 * C416 * std::pow(ae, 2)) / std::pow(C396, 2);
    const double C146 =
        (ae * C417 * C415 * C423 * ae +
         C416 * std::pow(-C414, 3) * bs[3] * C423 * C416 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C157 =
        (C417 * C415 * C423 * C420 * std::pow(ae, 2)) / std::pow(C396, 2);
    const double C170 =
        ((std::pow(C423, 2) * C415 * C417 - (bs[1] * C412) / C411) *
         std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C171 =
        (C416 * (C415 * C417 + std::pow(C423, 2) * bs[3] * std::pow(-C414, 3)) *
         std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C189 =
        (C420 * (C415 * C417 + std::pow(C416, 2) * bs[3] * std::pow(-C414, 3)) *
         std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C202 =
        (ae * C417 * C415 * C416 * ae +
         C420 * std::pow(-C414, 3) * bs[3] * C416 * C420 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C225 =
        (ae * C417 * C415 * C416 * ae +
         C420 * std::pow(-C414, 3) * bs[3] * C420 * C416 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C236 =
        (2 * ae * C417 * C415 * C420 * ae +
         C420 * (C415 * C417 + std::pow(C420, 2) * bs[3] * std::pow(-C414, 3)) *
             std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C248 =
        (ae * C417 * C415 * C423 * ae +
         C420 * std::pow(-C414, 3) * bs[3] * C420 * C423 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C270 =
        (ae * C417 * C415 * C423 * ae +
         C420 * std::pow(-C414, 3) * bs[3] * C423 * C420 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C281 =
        (C420 * (C415 * C417 + std::pow(C423, 2) * bs[3] * std::pow(-C414, 3)) *
         std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C297 =
        (C423 * (C415 * C417 + std::pow(C416, 2) * bs[3] * std::pow(-C414, 3)) *
         std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C322 =
        (ae * C417 * C415 * C416 * ae +
         C423 * std::pow(-C414, 3) * bs[3] * C416 * C423 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C344 =
        (C423 * (C415 * C417 + std::pow(C420, 2) * bs[3] * std::pow(-C414, 3)) *
         std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C356 =
        (ae * C417 * C415 * C420 * ae +
         C423 * std::pow(-C414, 3) * bs[3] * C420 * C423 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C367 =
        (ae * C417 * C415 * C416 * ae +
         C423 * std::pow(-C414, 3) * bs[3] * C423 * C416 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C378 =
        (ae * C417 * C415 * C420 * ae +
         C423 * std::pow(-C414, 3) * bs[3] * C423 * C420 * std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C389 =
        (2 * ae * C417 * C415 * C423 * ae +
         C423 * (C415 * C417 + std::pow(C423, 2) * bs[3] * std::pow(-C414, 3)) *
             std::pow(ae, 2)) /
        std::pow(C396, 2);
    const double C61 = (C416 * C417 * C415 * C416 * ae) / C396 -
                       (ae * bs[1] * C412) / (C411 * C396);
    const double C78 = (C416 * C417 * C415 * C420 * ae) / C396;
    const double C93 = (C416 * C417 * C415 * C423 * ae) / C396;
    const double C188 = (C420 * C417 * C415 * C416 * ae) / C396;
    const double C201 = (C420 * C417 * C415 * C420 * ae) / C396 -
                        (ae * bs[1] * C412) / (C411 * C396);
    const double C213 = (C420 * C417 * C415 * C423 * ae) / C396;
    const double C296 = (C423 * C417 * C415 * C416 * ae) / C396;
    const double C309 = (C423 * C417 * C415 * C420 * ae) / C396;
    const double C321 = (C423 * C417 * C415 * C423 * ae) / C396 -
                        (ae * bs[1] * C412) / (C411 * C396);
    const double C513 = -C510;
    const double C512 = -C509;
    const double C511 = -C508;
    const double C66 = C57 * C61;
    const double C123 = C76 * C78;
    const double C174 = C91 * C93;
    const double C191 = C57 * C188;
    const double C238 = C76 * C201;
    const double C283 = C91 * C213;
    const double C299 = C57 * C296;
    const double C346 = C76 * C309;
    const double C391 = C91 * C321;
    const double C516 = std::exp(C513);
    const double C515 = std::exp(C512);
    const double C514 = std::exp(C511);
    const double C54 = -(C516 * C482 * de) / C483;
    const double C55 = C507 * C516;
    const double C184 = -(C515 * C488 * de) / C483;
    const double C185 = C507 * C515;
    const double C293 = -(C514 * C495 * de) / C483;
    const double C294 = C507 * C514;
    
    d2eexx[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C56 * C58 + C65 + C65 + C49 * C62) * C50 * C51 * C514 * C515 * C54 -
          (C56 * C59 + C66 + C66 + C49 * C63) * C50 * C51 * C514 * C515 *
              C55)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C76 * C58 + C51 * C77) * C57 + (C76 * C60 + C51 * C79) * C49) *
              C50 * C514 * C515 * C54 -
          ((C76 * C61 + C51 * C80) * C49 + (C76 * C59 + C51 * C78) * C57) *
              C50 * C514 * C515 * C55)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C91 * C58 + C50 * C92) * C57 + (C91 * C60 + C50 * C94) * C49) *
              C51 * C514 * C515 * C54 -
          ((C91 * C61 + C50 * C95) * C49 + (C91 * C59 + C50 * C93) * C57) *
              C51 * C514 * C515 * C55)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C58 + C49 * C60) * C76 + (C57 * C77 + C49 * C106) * C51) *
              C50 * C514 * C515 * C54 -
          ((C57 * C78 + C49 * C107) * C51 + (C57 * C59 + C49 * C61) * C76) *
              C50 * C514 * C515 * C55)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  ((C118 * C58 + C122 + C122 + C51 * C119) * C49 * C50 * C514 *
                       C515 * C54 -
                   (C118 * C59 + C123 + C123 + C51 * C120) * C49 * C50 * C514 *
                       C515 * C55)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C91 * C58 + C50 * C92) * C76 + (C91 * C77 + C50 * C133) * C51) *
              C49 * C514 * C515 * C54 -
          ((C91 * C78 + C50 * C134) * C51 + (C91 * C59 + C50 * C93) * C76) *
              C49 * C514 * C515 * C55)) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C58 + C49 * C60) * C91 + (C57 * C92 + C49 * C145) * C50) *
              C51 * C514 * C515 * C54 -
          ((C57 * C93 + C49 * C146) * C50 + (C57 * C59 + C49 * C61) * C91) *
              C51 * C514 * C515 * C55)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C76 * C58 + C51 * C77) * C91 + (C76 * C92 + C51 * C157) * C50) *
              C49 * C514 * C515 * C54 -
          ((C76 * C93 + C51 * C158) * C50 + (C76 * C59 + C51 * C78) * C91) *
              C49 * C514 * C515 * C55)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  ((C169 * C58 + C173 + C173 + C50 * C170) * C51 * C49 * C514 *
                       C515 * C54 -
                   (C169 * C59 + C174 + C174 + C50 * C171) * C51 * C49 * C514 *
                       C515 * C55)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C56 * C58 + C65 + C65 + C49 * C62) * C50 * C51 * C514 * C184 -
          (C56 * C187 + C191 + C191 + C49 * C189) * C50 * C51 * C514 * C185) *
         C516) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C76 * C58 + C51 * C77) * C57 + (C76 * C60 + C51 * C79) * C49) *
              C50 * C514 * C184 -
          ((C76 * C188 + C51 * C202) * C49 + (C76 * C187 + C51 * C201) * C57) *
              C50 * C514 * C185) *
         C516) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C91 * C58 + C50 * C92) * C57 + (C91 * C60 + C50 * C94) * C49) *
              C51 * C514 * C184 -
          ((C91 * C188 + C50 * C214) * C49 + (C91 * C187 + C50 * C213) * C57) *
              C51 * C514 * C185) *
         C516) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C58 + C49 * C60) * C76 + (C57 * C77 + C49 * C106) * C51) *
              C50 * C514 * C184 -
          ((C57 * C201 + C49 * C225) * C51 + (C57 * C187 + C49 * C188) * C76) *
              C50 * C514 * C185) *
         C516) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C118 * C58 + C122 + C122 + C51 * C119) * C49 * C50 * C514 * C184 -
          (C118 * C187 + C238 + C238 + C51 * C236) * C49 * C50 * C514 * C185) *
         C516) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C91 * C58 + C50 * C92) * C76 + (C91 * C77 + C50 * C133) * C51) *
              C49 * C514 * C184 -
          ((C91 * C201 + C50 * C248) * C51 + (C91 * C187 + C50 * C213) * C76) *
              C49 * C514 * C185) *
         C516) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C58 + C49 * C60) * C91 + (C57 * C92 + C49 * C145) * C50) *
              C51 * C514 * C184 -
          ((C57 * C213 + C49 * C259) * C50 + (C57 * C187 + C49 * C188) * C91) *
              C51 * C514 * C185) *
         C516) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C76 * C58 + C51 * C77) * C91 + (C76 * C92 + C51 * C157) * C50) *
              C49 * C514 * C184 -
          ((C76 * C213 + C51 * C270) * C50 + (C76 * C187 + C51 * C201) * C91) *
              C49 * C514 * C185) *
         C516) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C169 * C58 + C173 + C173 + C50 * C170) * C51 * C49 * C514 * C184 -
          (C169 * C187 + C283 + C283 + C50 * C281) * C51 * C49 * C514 * C185) *
         C516) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] += (2 * std::pow(Pi, 2.5) *
                  ((C56 * C58 + C65 + C65 + C49 * C62) * C50 * C51 * C293 -
                   (C56 * C295 + C299 + C299 + C49 * C297) * C50 * C51 * C294) *
                  C515 * C516) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C76 * C58 + C51 * C77) * C57 + (C76 * C60 + C51 * C79) * C49) *
              C50 * C293 -
          ((C76 * C296 + C51 * C310) * C49 + (C76 * C295 + C51 * C309) * C57) *
              C50 * C294) *
         C515 * C516) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C91 * C58 + C50 * C92) * C57 + (C91 * C60 + C50 * C94) * C49) *
              C51 * C293 -
          ((C91 * C296 + C50 * C322) * C49 + (C91 * C295 + C50 * C321) * C57) *
              C51 * C294) *
         C515 * C516) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C58 + C49 * C60) * C76 + (C57 * C77 + C49 * C106) * C51) *
              C50 * C293 -
          ((C57 * C309 + C49 * C333) * C51 + (C57 * C295 + C49 * C296) * C76) *
              C50 * C294) *
         C515 * C516) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C118 * C58 + C122 + C122 + C51 * C119) * C49 * C50 * C293 -
          (C118 * C295 + C346 + C346 + C51 * C344) * C49 * C50 * C294) *
         C515 * C516) /
        (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C91 * C58 + C50 * C92) * C76 + (C91 * C77 + C50 * C133) * C51) *
              C49 * C293 -
          ((C91 * C309 + C50 * C356) * C51 + (C91 * C295 + C50 * C321) * C76) *
              C49 * C294) *
         C515 * C516) /
        (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C57 * C58 + C49 * C60) * C91 + (C57 * C92 + C49 * C145) * C50) *
              C51 * C293 -
          ((C57 * C321 + C49 * C367) * C50 + (C57 * C295 + C49 * C296) * C91) *
              C51 * C294) *
         C515 * C516) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C76 * C58 + C51 * C77) * C91 + (C76 * C92 + C51 * C157) * C50) *
              C49 * C293 -
          ((C76 * C321 + C51 * C378) * C50 + (C76 * C295 + C51 * C309) * C91) *
              C49 * C294) *
         C515 * C516) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C169 * C58 + C173 + C173 + C50 * C170) * C51 * C49 * C293 -
          (C169 * C295 + C391 + C391 + C50 * C389) * C51 * C49 * C294) *
         C515 * C516) /
        (p * q * std::sqrt(p + q));
    
}
