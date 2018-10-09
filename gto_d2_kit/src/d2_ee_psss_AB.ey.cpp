/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_psss_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1000_12(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C408 = xA - xB;
    const double C407 = ae + be;
    const double C411 = ae * be;
    const double C425 = yA - yB;
    const double C428 = zA - zB;
    const double C459 = p + q;
    const double C458 = p * q;
    const double C464 = xP - xQ;
    const double C463 = bs[2];
    const double C468 = yP - yQ;
    const double C471 = zP - zQ;
    const double C60 = bs[0];
    const double C572 = ce + de;
    const double C571 = ce * de;
    const double C567 = std::pow(C408, 2);
    const double C568 = 2 * C407;
    const double C412 = C411 * C408;
    const double C441 = C411 * C425;
    const double C570 = std::pow(C425, 2);
    const double C453 = C411 * C428;
    const double C569 = std::pow(C428, 2);
    const double C460 = 2 * C458;
    const double C53 = std::exp(-(std::pow(zC - zD, 2) * C571) / C572);
    const double C54 = std::exp(-(std::pow(yC - yD, 2) * C571) / C572);
    const double C55 = std::exp(-(std::pow(xC - xD, 2) * C571) / C572);
    const double C573 = C567 * C411;
    const double C574 = std::pow(C568, -1);
    const double C576 = C570 * C411;
    const double C575 = C569 * C411;
    const double C462 = C460 / C459;
    const double C66 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C460 / C459, 2) -
          (bs[1] * C460) / C459) *
         C411) /
        std::pow(C407, 2);
    const double C62 = (-(bs[1] * C464 * be * C460) / C459) / C407;
    const double C63 = (-(bs[1] * C464 * ae * C460) / C459) / C407;
    const double C79 = (-(bs[1] * C468 * be * C460) / C459) / C407;
    const double C94 = (-(bs[1] * C471 * be * C460) / C459) / C407;
    const double C108 = (-(bs[1] * C468 * ae * C460) / C459) / C407;
    const double C147 = (-(bs[1] * C471 * ae * C460) / C459) / C407;
    const double C61 = -(C464 * bs[1] * C460) / C459;
    const double C191 = -(C468 * bs[1] * C460) / C459;
    const double C303 = -(C471 * bs[1] * C460) / C459;
    const double C577 = C573 / C407;
    const double C579 = C576 / C407;
    const double C578 = C575 / C407;
    const double C465 = std::pow(C462, 2);
    const double C136 =
        (C464 * std::pow(-C462, 3) * bs[3] * C468 * C471 * ae * be) /
        std::pow(C407, 2);
    const double C162 =
        (C464 * std::pow(-C462, 3) * bs[3] * C471 * C468 * ae * be) /
        std::pow(C407, 2);
    const double C220 =
        (C468 * std::pow(-C462, 3) * bs[3] * C464 * C471 * ae * be) /
        std::pow(C407, 2);
    const double C268 =
        (C468 * std::pow(-C462, 3) * bs[3] * C471 * C464 * ae * be) /
        std::pow(C407, 2);
    const double C318 =
        (C471 * std::pow(-C462, 3) * bs[3] * C464 * C468 * ae * be) /
        std::pow(C407, 2);
    const double C344 =
        (C471 * std::pow(-C462, 3) * bs[3] * C468 * C464 * ae * be) /
        std::pow(C407, 2);
    const double C580 = -C577;
    const double C582 = -C579;
    const double C581 = -C578;
    const double C67 =
        (ae * C465 * C463 * C464 * be + be * C465 * C463 * C464 * ae +
         C464 * (C463 * C465 + std::pow(C464, 2) * bs[3] * std::pow(-C462, 3)) *
             C411) /
        std::pow(C407, 2);
    const double C81 =
        (C465 * C463 * C464 * (yP - yQ) * ae * be) / std::pow(C407, 2);
    const double C82 =
        (ae * C465 * C463 * C468 * be +
         C464 * std::pow(-C462, 3) * bs[3] * C464 * C468 * ae * be) /
        std::pow(C407, 2);
    const double C96 =
        (C465 * C463 * C464 * (zP - zQ) * ae * be) / std::pow(C407, 2);
    const double C97 =
        (ae * C465 * C463 * C471 * be +
         C464 * std::pow(-C462, 3) * bs[3] * C464 * C471 * ae * be) /
        std::pow(C407, 2);
    const double C110 =
        (C465 * C463 * C468 * C464 * ae * be) / std::pow(C407, 2);
    const double C111 =
        (be * C465 * C463 * C468 * ae +
         C464 * std::pow(-C462, 3) * bs[3] * C468 * C464 * ae * be) /
        std::pow(C407, 2);
    const double C123 =
        ((std::pow(C468, 2) * C463 * C465 - (bs[1] * C460) / C459) * C411) /
        std::pow(C407, 2);
    const double C124 =
        (C464 * (C463 * C465 + std::pow(C468, 2) * bs[3] * std::pow(-C462, 3)) *
         C411) /
        std::pow(C407, 2);
    const double C135 =
        (C465 * C463 * C468 * C471 * ae * be) / std::pow(C407, 2);
    const double C149 =
        (C465 * C463 * C471 * C464 * ae * be) / std::pow(C407, 2);
    const double C150 =
        (be * C465 * C463 * C471 * ae +
         C464 * std::pow(-C462, 3) * bs[3] * C471 * C464 * ae * be) /
        std::pow(C407, 2);
    const double C161 =
        (C465 * C463 * C471 * C468 * ae * be) / std::pow(C407, 2);
    const double C174 =
        ((std::pow(C471, 2) * C463 * C465 - (bs[1] * C460) / C459) * C411) /
        std::pow(C407, 2);
    const double C175 =
        (C464 * (C463 * C465 + std::pow(C471, 2) * bs[3] * std::pow(-C462, 3)) *
         C411) /
        std::pow(C407, 2);
    const double C194 =
        (C468 * (C463 * C465 + std::pow(C464, 2) * bs[3] * std::pow(-C462, 3)) *
         C411) /
        std::pow(C407, 2);
    const double C208 =
        (be * C465 * C463 * C464 * ae +
         C468 * std::pow(-C462, 3) * bs[3] * C464 * C468 * ae * be) /
        std::pow(C407, 2);
    const double C232 =
        (ae * C465 * C463 * C464 * be +
         C468 * std::pow(-C462, 3) * bs[3] * C468 * C464 * ae * be) /
        std::pow(C407, 2);
    const double C245 =
        (ae * C465 * C463 * C468 * be + be * C465 * C463 * C468 * ae +
         C468 * (C463 * C465 + std::pow(C468, 2) * bs[3] * std::pow(-C462, 3)) *
             C411) /
        std::pow(C407, 2);
    const double C256 =
        (ae * C465 * C463 * C471 * be +
         C468 * std::pow(-C462, 3) * bs[3] * C468 * C471 * ae * be) /
        std::pow(C407, 2);
    const double C279 =
        (be * C465 * C463 * C471 * ae +
         C468 * std::pow(-C462, 3) * bs[3] * C471 * C468 * ae * be) /
        std::pow(C407, 2);
    const double C290 =
        (C468 * (C463 * C465 + std::pow(C471, 2) * bs[3] * std::pow(-C462, 3)) *
         C411) /
        std::pow(C407, 2);
    const double C306 =
        (C471 * (C463 * C465 + std::pow(C464, 2) * bs[3] * std::pow(-C462, 3)) *
         C411) /
        std::pow(C407, 2);
    const double C332 =
        (be * C465 * C463 * C464 * ae +
         C471 * std::pow(-C462, 3) * bs[3] * C464 * C471 * ae * be) /
        std::pow(C407, 2);
    const double C355 =
        (C471 * (C463 * C465 + std::pow(C468, 2) * bs[3] * std::pow(-C462, 3)) *
         C411) /
        std::pow(C407, 2);
    const double C366 =
        (be * C465 * C463 * C468 * ae +
         C471 * std::pow(-C462, 3) * bs[3] * C468 * C471 * ae * be) /
        std::pow(C407, 2);
    const double C378 =
        (ae * C465 * C463 * C464 * be +
         C471 * std::pow(-C462, 3) * bs[3] * C471 * C464 * ae * be) /
        std::pow(C407, 2);
    const double C389 =
        (ae * C465 * C463 * C468 * be +
         C471 * std::pow(-C462, 3) * bs[3] * C471 * C468 * ae * be) /
        std::pow(C407, 2);
    const double C402 =
        (ae * C465 * C463 * C471 * be + be * C465 * C463 * C471 * ae +
         C471 * (C463 * C465 + std::pow(C471, 2) * bs[3] * std::pow(-C462, 3)) *
             C411) /
        std::pow(C407, 2);
    const double C64 = (C464 * C465 * C463 * C464 * be) / C407 -
                       (be * bs[1] * C460) / (C459 * C407);
    const double C65 = (C464 * C465 * C463 * C464 * ae) / C407 -
                       (ae * bs[1] * C460) / (C459 * C407);
    const double C80 = (C464 * C465 * C463 * C468 * be) / C407;
    const double C95 = (C464 * C465 * C463 * C471 * be) / C407;
    const double C109 = (C464 * C465 * C463 * C468 * ae) / C407;
    const double C148 = (C464 * C465 * C463 * C471 * ae) / C407;
    const double C192 = (C468 * C465 * C463 * C464 * be) / C407;
    const double C193 = (C468 * C465 * C463 * C464 * ae) / C407;
    const double C207 = (C468 * C465 * C463 * C468 * be) / C407 -
                        (be * bs[1] * C460) / (C459 * C407);
    const double C219 = (C468 * C465 * C463 * C471 * be) / C407;
    const double C231 = (C468 * C465 * C463 * C468 * ae) / C407 -
                        (ae * bs[1] * C460) / (C459 * C407);
    const double C267 = (C468 * C465 * C463 * C471 * ae) / C407;
    const double C304 = (C471 * C465 * C463 * C464 * be) / C407;
    const double C305 = (C471 * C465 * C463 * C464 * ae) / C407;
    const double C317 = (C471 * C465 * C463 * C468 * be) / C407;
    const double C331 = (C471 * C465 * C463 * C471 * be) / C407 -
                        (be * bs[1] * C460) / (C459 * C407);
    const double C343 = (C471 * C465 * C463 * C468 * ae) / C407;
    const double C377 = (C471 * C465 * C463 * C471 * ae) / C407 -
                        (ae * bs[1] * C460) / (C459 * C407);
    const double C583 = std::exp(C580);
    const double C585 = std::exp(C582);
    const double C584 = std::exp(C581);
    const double C413 = C412 * C583;
    const double C56 =
        (-(0 * be) / C407) / (2 * C407) -
        ((C583 - (C408 * 2 * ae * be * C408 * C583) / C407) * be) / C407;
    const double C49 = -(C583 * C408 * be) / C407;
    const double C50 = C574 * C583;
    const double C442 = C441 * C585;
    const double C78 = -(2 * C411 * (yA - yB) * C585) / C407;
    const double C122 =
        -((C585 - (C425 * 2 * C411 * C425 * C585) / C407) * 2 * C411) / C407;
    const double C205 =
        (-(0 * be) / C407) / (2 * C407) -
        ((C585 - (C425 * 2 * C411 * C425 * C585) / C407) * be) / C407;
    const double C206 =
        (-(2 * C411 * C425 * C585) / C407) / (2 * C407) - (0 * be) / C407;
    const double C187 = -(C585 * C425 * be) / C407;
    const double C188 = C574 * C585;
    const double C454 = C453 * C584;
    const double C93 = -(2 * C411 * (zA - zB) * C584) / C407;
    const double C173 =
        -((C584 - (C428 * 2 * C411 * C428 * C584) / C407) * 2 * C411) / C407;
    const double C329 =
        (-(0 * be) / C407) / (2 * C407) -
        ((C584 - (C428 * 2 * C411 * C428 * C584) / C407) * be) / C407;
    const double C330 =
        (-(2 * C411 * C428 * C584) / C407) / (2 * C407) - (0 * be) / C407;
    const double C301 = -(C584 * C428 * be) / C407;
    const double C302 = C574 * C584;
    const double C57 =
        -(((-4 * C413) / C407 -
           (C408 * (C583 - (C408 * 2 * C413) / C407) * 2 * C411) / C407) *
          be) /
        C407;
    const double C58 = (-(2 * C413) / C407) / (2 * C407) - (0 * be) / C407;
    const double C59 =
        (-((C583 - (C408 * 2 * C413) / C407) * 2 * C411) / C407) / (2 * C407);
    const double C189 = -(2 * C413) / C407;
    const double C190 = -((C583 - (C408 * 2 * C413) / C407) * 2 * C411) / C407;
    const double C243 =
        -(((-4 * C442) / C407 -
           (C425 * (C585 - (C425 * 2 * C442) / C407) * 2 * C411) / C407) *
          be) /
        C407;
    const double C244 =
        (-((C585 - (C425 * 2 * C442) / C407) * 2 * C411) / C407) / (2 * C407);
    const double C400 =
        -(((-4 * C454) / C407 -
           (C428 * (C584 - (C428 * 2 * C454) / C407) * 2 * C411) / C407) *
          be) /
        C407;
    const double C401 =
        (-((C584 - (C428 * 2 * C454) / C407) * 2 * C411) / C407) / (2 * C407);
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  (C56 * C62 - C57 * C60 - C56 * C63 + C49 * C66 + C58 * C64 -
                   C59 * C61 - C58 * C65 + C50 * C67) *
                  C584 * C585 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C585 * C79 - C78 * C60) * C56 + (C585 * C81 - C78 * C63) * C49 +
          (C585 * C80 - C78 * C61) * C58 + (C585 * C82 - C78 * C65) * C50) *
         C584 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C584 * C94 - C93 * C60) * C56 + (C584 * C96 - C93 * C63) * C49 +
          (C584 * C95 - C93 * C61) * C58 + (C584 * C97 - C93 * C65) * C50) *
         C585 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C49 * C62 - C56 * C60 + C50 * C64 - C58 * C61) * C78 +
                   (C49 * C110 - C56 * C108 + C50 * C111 - C58 * C109) * C585) *
                  C584 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  ((C78 * C79 - C122 * C60 - C78 * C108 + C585 * C123) * C49 +
                   (C78 * C80 - C122 * C61 - C78 * C109 + C585 * C124) * C50) *
                  C584 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C584 * C94 - C93 * C60) * C78 + (C584 * C135 - C93 * C108) * C585) *
              C49 +
          ((C584 * C95 - C93 * C61) * C78 + (C584 * C136 - C93 * C109) * C585) *
              C50) *
         C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C49 * C62 - C56 * C60 + C50 * C64 - C58 * C61) * C93 +
                   (C49 * C149 - C56 * C147 + C50 * C150 - C58 * C148) * C584) *
                  C585 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C585 * C79 - C78 * C60) * C93 + (C585 * C161 - C78 * C147) * C584) *
              C49 +
          ((C585 * C80 - C78 * C61) * C93 + (C585 * C162 - C78 * C148) * C584) *
              C50) *
         C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C93 * C94 - C173 * C60 - C93 * C147 + C584 * C174) * C585 * C49 +
          (C93 * C95 - C173 * C61 - C93 * C148 + C584 * C175) * C585 * C50) *
         C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C189 * C62 - C190 * C60 - C189 * C63 + C583 * C66) * C584 * C187 +
          (C189 * C192 - C190 * C191 - C189 * C193 + C583 * C194) * C584 *
              C188) *
         C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C187 * C79 - C205 * C60 + C188 * C207 - C206 * C191) * C189 +
          (C187 * C81 - C205 * C63 + C188 * C208 - C206 * C193) * C583) *
         C584 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C584 * C94 - C93 * C60) * C189 + (C584 * C96 - C93 * C63) * C583) *
              C187 +
          ((C584 * C219 - C93 * C191) * C189 +
           (C584 * C220 - C93 * C193) * C583) *
              C188) *
         C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] += (2 * std::pow(Pi, 2.5) *
                  ((C583 * C62 - C189 * C60) * C205 +
                   (C583 * C110 - C189 * C108) * C187 +
                   (C583 * C192 - C189 * C191) * C206 +
                   (C583 * C232 - C189 * C231) * C188) *
                  C584 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] += (2 * std::pow(Pi, 2.5) *
                  (C205 * C79 - C243 * C60 - C205 * C108 + C187 * C123 +
                   C206 * C207 - C244 * C191 - C206 * C231 + C188 * C245) *
                  C583 * C584 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C584 * C94 - C93 * C60) * C205 + (C584 * C135 - C93 * C108) * C187 +
          (C584 * C219 - C93 * C191) * C206 +
          (C584 * C256 - C93 * C231) * C188) *
         C583 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] += (2 * std::pow(Pi, 2.5) *
                  (((C583 * C62 - C189 * C60) * C93 +
                    (C583 * C149 - C189 * C147) * C584) *
                       C187 +
                   ((C583 * C192 - C189 * C191) * C93 +
                    (C583 * C268 - C189 * C267) * C584) *
                       C188) *
                  C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C187 * C79 - C205 * C60 + C188 * C207 - C206 * C191) * C93 +
          (C187 * C161 - C205 * C147 + C188 * C279 - C206 * C267) * C584) *
         C583 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C93 * C94 - C173 * C60 - C93 * C147 + C584 * C174) * C187 +
          (C93 * C219 - C173 * C191 - C93 * C267 + C584 * C290) * C188) *
         C583 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C189 * C62 - C190 * C60 - C189 * C63 + C583 * C66) * C301 +
          (C189 * C304 - C190 * C303 - C189 * C305 + C583 * C306) * C302) *
         C585 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C585 * C79 - C78 * C60) * C189 + (C585 * C81 - C78 * C63) * C583) *
              C301 +
          ((C585 * C317 - C78 * C303) * C189 +
           (C585 * C318 - C78 * C305) * C583) *
              C302) *
         C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C301 * C94 - C329 * C60 + C302 * C331 - C330 * C303) * C189 +
          (C301 * C96 - C329 * C63 + C302 * C332 - C330 * C305) * C583) *
         C585 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] += (2 * std::pow(Pi, 2.5) *
                  (((C583 * C62 - C189 * C60) * C78 +
                    (C583 * C110 - C189 * C108) * C585) *
                       C301 +
                   ((C583 * C304 - C189 * C303) * C78 +
                    (C583 * C344 - C189 * C343) * C585) *
                       C302) *
                  C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C78 * C79 - C122 * C60 - C78 * C108 + C585 * C123) * C583 * C301 +
          (C78 * C317 - C122 * C303 - C78 * C343 + C585 * C355) * C583 * C302) *
         C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C301 * C94 - C329 * C60 + C302 * C331 - C330 * C303) * C78 +
          (C301 * C135 - C329 * C108 + C302 * C366 - C330 * C343) * C585) *
         C583 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezx[2] += (2 * std::pow(Pi, 2.5) *
                  ((C583 * C62 - C189 * C60) * C329 +
                   (C583 * C149 - C189 * C147) * C301 +
                   (C583 * C304 - C189 * C303) * C330 +
                   (C583 * C378 - C189 * C377) * C302) *
                  C585 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C585 * C79 - C78 * C60) * C329 + (C585 * C161 - C78 * C147) * C301 +
          (C585 * C317 - C78 * C303) * C330 +
          (C585 * C389 - C78 * C377) * C302) *
         C583 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] += (2 * std::pow(Pi, 2.5) *
                  (C329 * C94 - C400 * C60 - C329 * C147 + C301 * C174 +
                   C330 * C331 - C401 * C303 - C330 * C377 + C302 * C402) *
                  C585 * C583 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    
}
