/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ssps_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0010_12(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C398 = ae + be;
    const double C397 = ae * be;
    const double C396 = xA - xB;
    const double C405 = yA - yB;
    const double C408 = zA - zB;
    const double C411 = p + q;
    const double C410 = p * q;
    const double C416 = xP - xQ;
    const double C415 = bs[2];
    const double C420 = yP - yQ;
    const double C423 = zP - zQ;
    const double C58 = bs[0];
    const double C495 = ce + de;
    const double C494 = xC - xD;
    const double C500 = yC - yD;
    const double C507 = zC - zD;
    const double C512 = ce * de;
    const double C49 = std::exp(-(std::pow(C396, 2) * C397) / C398);
    const double C51 = std::exp(-(std::pow(C405, 2) * C397) / C398);
    const double C50 = std::exp(-(std::pow(C408, 2) * C397) / C398);
    const double C412 = 2 * C410;
    const double C515 = 2 * C495;
    const double C514 = std::pow(C494, 2);
    const double C513 = std::pow(C500, 2);
    const double C511 = std::pow(C507, 2);
    const double C56 = -(2 * ae * be * (xA - xB) * C49) / (ae + be);
    const double C57 =
        -((C49 - (C396 * 2 * C397 * C396 * C49) / C398) * 2 * C397) / C398;
    const double C76 = -(2 * C397 * (yA - yB) * C51) / C398;
    const double C120 =
        -((C51 - (C405 * 2 * C397 * C405 * C51) / C398) * 2 * C397) / C398;
    const double C91 = -(2 * C397 * (zA - zB) * C50) / C398;
    const double C171 =
        -((C50 - (C408 * 2 * C397 * C408 * C50) / C398) * 2 * C397) / C398;
    const double C414 = C412 / C411;
    const double C64 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C412 / C411, 2) -
          (bs[1] * C412) / C411) *
         C397) /
        std::pow(C398, 2);
    const double C60 = (-(bs[1] * C416 * be * C412) / C411) / C398;
    const double C61 = (-(bs[1] * C416 * ae * C412) / C411) / C398;
    const double C77 = (-(bs[1] * C420 * be * C412) / C411) / C398;
    const double C92 = (-(bs[1] * C423 * be * C412) / C411) / C398;
    const double C106 = (-(bs[1] * C420 * ae * C412) / C411) / C398;
    const double C145 = (-(bs[1] * C423 * ae * C412) / C411) / C398;
    const double C59 = -(C416 * bs[1] * C412) / C411;
    const double C187 = -(C420 * bs[1] * C412) / C411;
    const double C295 = -(C423 * bs[1] * C412) / C411;
    const double C519 = std::pow(C515, -1);
    const double C518 = C514 * C512;
    const double C517 = C513 * C512;
    const double C516 = C511 * C512;
    const double C417 = std::pow(C414, 2);
    const double C134 =
        (C416 * std::pow(-C414, 3) * bs[3] * C420 * C423 * ae * be) /
        std::pow(C398, 2);
    const double C160 =
        (C416 * std::pow(-C414, 3) * bs[3] * C423 * C420 * ae * be) /
        std::pow(C398, 2);
    const double C214 =
        (C420 * std::pow(-C414, 3) * bs[3] * C416 * C423 * ae * be) /
        std::pow(C398, 2);
    const double C260 =
        (C420 * std::pow(-C414, 3) * bs[3] * C423 * C416 * ae * be) /
        std::pow(C398, 2);
    const double C310 =
        (C423 * std::pow(-C414, 3) * bs[3] * C416 * C420 * ae * be) /
        std::pow(C398, 2);
    const double C334 =
        (C423 * std::pow(-C414, 3) * bs[3] * C420 * C416 * ae * be) /
        std::pow(C398, 2);
    const double C522 = C518 / C495;
    const double C521 = C517 / C495;
    const double C520 = C516 / C495;
    const double C65 =
        (ae * C417 * C415 * C416 * be + be * C417 * C415 * C416 * ae +
         C416 * (C415 * C417 + std::pow(C416, 2) * bs[3] * std::pow(-C414, 3)) *
             C397) /
        std::pow(C398, 2);
    const double C79 =
        (C417 * C415 * C416 * (yP - yQ) * ae * be) / std::pow(C398, 2);
    const double C80 =
        (ae * C417 * C415 * C420 * be +
         C416 * std::pow(-C414, 3) * bs[3] * C416 * C420 * ae * be) /
        std::pow(C398, 2);
    const double C94 =
        (C417 * C415 * C416 * (zP - zQ) * ae * be) / std::pow(C398, 2);
    const double C95 =
        (ae * C417 * C415 * C423 * be +
         C416 * std::pow(-C414, 3) * bs[3] * C416 * C423 * ae * be) /
        std::pow(C398, 2);
    const double C108 =
        (C417 * C415 * C420 * C416 * ae * be) / std::pow(C398, 2);
    const double C109 =
        (be * C417 * C415 * C420 * ae +
         C416 * std::pow(-C414, 3) * bs[3] * C420 * C416 * ae * be) /
        std::pow(C398, 2);
    const double C121 =
        ((std::pow(C420, 2) * C415 * C417 - (bs[1] * C412) / C411) * C397) /
        std::pow(C398, 2);
    const double C122 =
        (C416 * (C415 * C417 + std::pow(C420, 2) * bs[3] * std::pow(-C414, 3)) *
         C397) /
        std::pow(C398, 2);
    const double C133 =
        (C417 * C415 * C420 * C423 * ae * be) / std::pow(C398, 2);
    const double C147 =
        (C417 * C415 * C423 * C416 * ae * be) / std::pow(C398, 2);
    const double C148 =
        (be * C417 * C415 * C423 * ae +
         C416 * std::pow(-C414, 3) * bs[3] * C423 * C416 * ae * be) /
        std::pow(C398, 2);
    const double C159 =
        (C417 * C415 * C423 * C420 * ae * be) / std::pow(C398, 2);
    const double C172 =
        ((std::pow(C423, 2) * C415 * C417 - (bs[1] * C412) / C411) * C397) /
        std::pow(C398, 2);
    const double C173 =
        (C416 * (C415 * C417 + std::pow(C423, 2) * bs[3] * std::pow(-C414, 3)) *
         C397) /
        std::pow(C398, 2);
    const double C190 =
        (C420 * (C415 * C417 + std::pow(C416, 2) * bs[3] * std::pow(-C414, 3)) *
         C397) /
        std::pow(C398, 2);
    const double C202 =
        (be * C417 * C415 * C416 * ae +
         C420 * std::pow(-C414, 3) * bs[3] * C416 * C420 * ae * be) /
        std::pow(C398, 2);
    const double C226 =
        (ae * C417 * C415 * C416 * be +
         C420 * std::pow(-C414, 3) * bs[3] * C420 * C416 * ae * be) /
        std::pow(C398, 2);
    const double C237 =
        (ae * C417 * C415 * C420 * be + be * C417 * C415 * C420 * ae +
         C420 * (C415 * C417 + std::pow(C420, 2) * bs[3] * std::pow(-C414, 3)) *
             C397) /
        std::pow(C398, 2);
    const double C248 =
        (ae * C417 * C415 * C423 * be +
         C420 * std::pow(-C414, 3) * bs[3] * C420 * C423 * ae * be) /
        std::pow(C398, 2);
    const double C271 =
        (be * C417 * C415 * C423 * ae +
         C420 * std::pow(-C414, 3) * bs[3] * C423 * C420 * ae * be) /
        std::pow(C398, 2);
    const double C282 =
        (C420 * (C415 * C417 + std::pow(C423, 2) * bs[3] * std::pow(-C414, 3)) *
         C397) /
        std::pow(C398, 2);
    const double C298 =
        (C423 * (C415 * C417 + std::pow(C416, 2) * bs[3] * std::pow(-C414, 3)) *
         C397) /
        std::pow(C398, 2);
    const double C322 =
        (be * C417 * C415 * C416 * ae +
         C423 * std::pow(-C414, 3) * bs[3] * C416 * C423 * ae * be) /
        std::pow(C398, 2);
    const double C345 =
        (C423 * (C415 * C417 + std::pow(C420, 2) * bs[3] * std::pow(-C414, 3)) *
         C397) /
        std::pow(C398, 2);
    const double C356 =
        (be * C417 * C415 * C420 * ae +
         C423 * std::pow(-C414, 3) * bs[3] * C420 * C423 * ae * be) /
        std::pow(C398, 2);
    const double C368 =
        (ae * C417 * C415 * C416 * be +
         C423 * std::pow(-C414, 3) * bs[3] * C423 * C416 * ae * be) /
        std::pow(C398, 2);
    const double C379 =
        (ae * C417 * C415 * C420 * be +
         C423 * std::pow(-C414, 3) * bs[3] * C423 * C420 * ae * be) /
        std::pow(C398, 2);
    const double C390 =
        (ae * C417 * C415 * C423 * be + be * C417 * C415 * C423 * ae +
         C423 * (C415 * C417 + std::pow(C423, 2) * bs[3] * std::pow(-C414, 3)) *
             C397) /
        std::pow(C398, 2);
    const double C62 = (C416 * C417 * C415 * C416 * be) / C398 -
                       (be * bs[1] * C412) / (C411 * C398);
    const double C63 = (C416 * C417 * C415 * C416 * ae) / C398 -
                       (ae * bs[1] * C412) / (C411 * C398);
    const double C78 = (C416 * C417 * C415 * C420 * be) / C398;
    const double C93 = (C416 * C417 * C415 * C423 * be) / C398;
    const double C107 = (C416 * C417 * C415 * C420 * ae) / C398;
    const double C146 = (C416 * C417 * C415 * C423 * ae) / C398;
    const double C188 = (C420 * C417 * C415 * C416 * be) / C398;
    const double C189 = (C420 * C417 * C415 * C416 * ae) / C398;
    const double C201 = (C420 * C417 * C415 * C420 * be) / C398 -
                        (be * bs[1] * C412) / (C411 * C398);
    const double C213 = (C420 * C417 * C415 * C423 * be) / C398;
    const double C225 = (C420 * C417 * C415 * C420 * ae) / C398 -
                        (ae * bs[1] * C412) / (C411 * C398);
    const double C259 = (C420 * C417 * C415 * C423 * ae) / C398;
    const double C296 = (C423 * C417 * C415 * C416 * be) / C398;
    const double C297 = (C423 * C417 * C415 * C416 * ae) / C398;
    const double C309 = (C423 * C417 * C415 * C420 * be) / C398;
    const double C321 = (C423 * C417 * C415 * C423 * be) / C398 -
                        (be * bs[1] * C412) / (C411 * C398);
    const double C333 = (C423 * C417 * C415 * C420 * ae) / C398;
    const double C367 = (C423 * C417 * C415 * C423 * ae) / C398 -
                        (ae * bs[1] * C412) / (C411 * C398);
    const double C525 = -C522;
    const double C524 = -C521;
    const double C523 = -C520;
    const double C528 = std::exp(C525);
    const double C527 = std::exp(C524);
    const double C526 = std::exp(C523);
    const double C54 = -(C528 * C494 * de) / C495;
    const double C55 = C519 * C528;
    const double C184 = -(C527 * C500 * de) / C495;
    const double C185 = C519 * C527;
    const double C293 = -(C526 * C507 * de) / C495;
    const double C294 = C519 * C526;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C56 * C60 - C57 * C58 - C56 * C61 + C49 * C64) * C50 * C51 *
                       C526 * C527 * C54 -
                   (C56 * C62 - C57 * C59 - C56 * C63 + C49 * C65) * C50 * C51 *
                       C526 * C527 * C55)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C51 * C77 - C76 * C58) * C56 + (C51 * C79 - C76 * C61) * C49) *
              C50 * C526 * C527 * C54 +
          ((C76 * C59 - C51 * C78) * C56 + (C76 * C63 - C51 * C80) * C49) *
              C50 * C526 * C527 * C55)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C50 * C92 - C91 * C58) * C56 + (C50 * C94 - C91 * C61) * C49) *
              C51 * C526 * C527 * C54 +
          ((C91 * C59 - C50 * C93) * C56 + (C91 * C63 - C50 * C95) * C49) *
              C51 * C526 * C527 * C55)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C49 * C60 - C56 * C58) * C76 + (C49 * C108 - C56 * C106) * C51) *
              C50 * C526 * C527 * C54 +
          ((C56 * C59 - C49 * C62) * C76 + (C56 * C107 - C49 * C109) * C51) *
              C50 * C526 * C527 * C55)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  ((C76 * C77 - C120 * C58 - C76 * C106 + C51 * C121) * C49 *
                       C50 * C526 * C527 * C54 -
                   (C76 * C78 - C120 * C59 - C76 * C107 + C51 * C122) * C49 *
                       C50 * C526 * C527 * C55)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C50 * C92 - C91 * C58) * C76 + (C50 * C133 - C91 * C106) * C51) *
              C49 * C526 * C527 * C54 +
          ((C91 * C59 - C50 * C93) * C76 + (C91 * C107 - C50 * C134) * C51) *
              C49 * C526 * C527 * C55)) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C49 * C60 - C56 * C58) * C91 + (C49 * C147 - C56 * C145) * C50) *
              C51 * C526 * C527 * C54 +
          ((C56 * C59 - C49 * C62) * C91 + (C56 * C146 - C49 * C148) * C50) *
              C51 * C526 * C527 * C55)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C51 * C77 - C76 * C58) * C91 + (C51 * C159 - C76 * C145) * C50) *
              C49 * C526 * C527 * C54 +
          ((C76 * C59 - C51 * C78) * C91 + (C76 * C146 - C51 * C160) * C50) *
              C49 * C526 * C527 * C55)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  ((C91 * C92 - C171 * C58 - C91 * C145 + C50 * C172) * C51 *
                       C49 * C526 * C527 * C54 -
                   (C91 * C93 - C171 * C59 - C91 * C146 + C50 * C173) * C51 *
                       C49 * C526 * C527 * C55)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (2 * std::pow(Pi, 2.5) *
                  ((C56 * C60 - C57 * C58 - C56 * C61 + C49 * C64) * C50 * C51 *
                       C526 * C184 -
                   (C56 * C188 - C57 * C187 - C56 * C189 + C49 * C190) * C50 *
                       C51 * C526 * C185) *
                  C528) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C51 * C77 - C76 * C58) * C56 + (C51 * C79 - C76 * C61) * C49) *
              C50 * C526 * C184 +
          ((C76 * C187 - C51 * C201) * C56 + (C76 * C189 - C51 * C202) * C49) *
              C50 * C526 * C185) *
         C528) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C50 * C92 - C91 * C58) * C56 + (C50 * C94 - C91 * C61) * C49) *
              C51 * C526 * C184 +
          ((C91 * C187 - C50 * C213) * C56 + (C91 * C189 - C50 * C214) * C49) *
              C51 * C526 * C185) *
         C528) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C49 * C60 - C56 * C58) * C76 + (C49 * C108 - C56 * C106) * C51) *
              C50 * C526 * C184 +
          ((C56 * C187 - C49 * C188) * C76 + (C56 * C225 - C49 * C226) * C51) *
              C50 * C526 * C185) *
         C528) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] += (2 * std::pow(Pi, 2.5) *
                  ((C76 * C77 - C120 * C58 - C76 * C106 + C51 * C121) * C49 *
                       C50 * C526 * C184 -
                   (C76 * C201 - C120 * C187 - C76 * C225 + C51 * C237) * C49 *
                       C50 * C526 * C185) *
                  C528) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C50 * C92 - C91 * C58) * C76 + (C50 * C133 - C91 * C106) * C51) *
              C49 * C526 * C184 +
          ((C91 * C187 - C50 * C213) * C76 + (C91 * C225 - C50 * C248) * C51) *
              C49 * C526 * C185) *
         C528) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C49 * C60 - C56 * C58) * C91 + (C49 * C147 - C56 * C145) * C50) *
              C51 * C526 * C184 +
          ((C56 * C187 - C49 * C188) * C91 + (C56 * C259 - C49 * C260) * C50) *
              C51 * C526 * C185) *
         C528) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C51 * C77 - C76 * C58) * C91 + (C51 * C159 - C76 * C145) * C50) *
              C49 * C526 * C184 +
          ((C76 * C187 - C51 * C201) * C91 + (C76 * C259 - C51 * C271) * C50) *
              C49 * C526 * C185) *
         C528) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  ((C91 * C92 - C171 * C58 - C91 * C145 + C50 * C172) * C51 *
                       C49 * C526 * C184 -
                   (C91 * C213 - C171 * C187 - C91 * C259 + C50 * C282) * C51 *
                       C49 * C526 * C185) *
                  C528) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C56 * C60 - C57 * C58 - C56 * C61 + C49 * C64) * C50 * C51 * C293 -
          (C56 * C296 - C57 * C295 - C56 * C297 + C49 * C298) * C50 * C51 *
              C294) *
         C527 * C528) /
        (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C51 * C77 - C76 * C58) * C56 + (C51 * C79 - C76 * C61) * C49) *
              C50 * C293 +
          ((C76 * C295 - C51 * C309) * C56 + (C76 * C297 - C51 * C310) * C49) *
              C50 * C294) *
         C527 * C528) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C50 * C92 - C91 * C58) * C56 + (C50 * C94 - C91 * C61) * C49) *
              C51 * C293 +
          ((C91 * C295 - C50 * C321) * C56 + (C91 * C297 - C50 * C322) * C49) *
              C51 * C294) *
         C527 * C528) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C49 * C60 - C56 * C58) * C76 + (C49 * C108 - C56 * C106) * C51) *
              C50 * C293 +
          ((C56 * C295 - C49 * C296) * C76 + (C56 * C333 - C49 * C334) * C51) *
              C50 * C294) *
         C527 * C528) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] += (2 * std::pow(Pi, 2.5) *
                  ((C76 * C77 - C120 * C58 - C76 * C106 + C51 * C121) * C49 *
                       C50 * C293 -
                   (C76 * C309 - C120 * C295 - C76 * C333 + C51 * C345) * C49 *
                       C50 * C294) *
                  C527 * C528) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C50 * C92 - C91 * C58) * C76 + (C50 * C133 - C91 * C106) * C51) *
              C49 * C293 +
          ((C91 * C295 - C50 * C321) * C76 + (C91 * C333 - C50 * C356) * C51) *
              C49 * C294) *
         C527 * C528) /
        (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C49 * C60 - C56 * C58) * C91 + (C49 * C147 - C56 * C145) * C50) *
              C51 * C293 +
          ((C56 * C295 - C49 * C296) * C91 + (C56 * C367 - C49 * C368) * C50) *
              C51 * C294) *
         C527 * C528) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C51 * C77 - C76 * C58) * C91 + (C51 * C159 - C76 * C145) * C50) *
              C49 * C293 +
          ((C76 * C295 - C51 * C309) * C91 + (C76 * C367 - C51 * C379) * C50) *
              C49 * C294) *
         C527 * C528) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] += (2 * std::pow(Pi, 2.5) *
                  ((C91 * C92 - C171 * C58 - C91 * C145 + C50 * C172) * C51 *
                       C49 * C293 -
                   (C91 * C321 - C171 * C295 - C91 * C367 + C50 * C390) * C51 *
                       C49 * C294) *
                  C527 * C528) /
                 (p * q * std::sqrt(p + q));
    
}
