/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_spss_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0100_13(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C402 = ae + be;
    const double C401 = xA - xB;
    const double C421 = yA - yB;
    const double C428 = zA - zB;
    const double C434 = p + q;
    const double C433 = p * q;
    const double C440 = ce + de;
    const double C439 = xP - xQ;
    const double C438 = bs[2];
    const double C445 = yP - yQ;
    const double C448 = zP - zQ;
    const double C59 = bs[0];
    const double C547 = ce * de;
    const double C545 = ae * be;
    const double C546 = 2 * C402;
    const double C544 = std::pow(C401, 2);
    const double C548 = std::pow(C421, 2);
    const double C549 = std::pow(C428, 2);
    const double C435 = 2 * C433;
    const double C442 = C440 * C402;
    const double C51 = std::exp(-(std::pow(xC - xD, 2) * C547) / C440);
    const double C54 = std::exp(-(std::pow(zC - zD, 2) * C547) / C440);
    const double C55 = std::exp(-(std::pow(yC - yD, 2) * C547) / C440);
    const double C551 = std::pow(C546, -1);
    const double C550 = C544 * C545;
    const double C552 = C548 * C545;
    const double C553 = C549 * C545;
    const double C437 = C435 / C434;
    const double C65 =
        (-((std::pow(xP - xQ, 2) * bs[2] * std::pow(C435 / C434, 2) -
            (bs[1] * C435) / C434) *
           ae * ce) /
         (ce + de)) /
        C402;
    const double C61 = (-(bs[1] * C439 * ae * C435) / C434) / C402;
    const double C63 = (bs[1] * C439 * ce * C435) / (C434 * C440);
    const double C78 = (bs[1] * C445 * ce * C435) / (C434 * C440);
    const double C93 = (bs[1] * C448 * ce * C435) / (C434 * C440);
    const double C108 = (-(bs[1] * C445 * ae * C435) / C434) / C402;
    const double C147 = (-(bs[1] * C448 * ae * C435) / C434) / C402;
    const double C60 = -(C439 * bs[1] * C435) / C434;
    const double C189 = -(C445 * bs[1] * C435) / C434;
    const double C299 = -(C448 * bs[1] * C435) / C434;
    const double C58 = -(2 * ce * de * (xC - xD) * C51) / (ce + de);
    const double C92 = -(2 * ce * de * (zC - zD) * C54) / (ce + de);
    const double C77 = -(2 * ce * de * (yC - yD) * C55) / (ce + de);
    const double C554 = C550 / C402;
    const double C555 = C552 / C402;
    const double C556 = C553 / C402;
    const double C441 = std::pow(C437, 2);
    const double C135 =
        (-(C439 * std::pow(-C437, 3) * bs[3] * C445 * C448 * ae * ce) / C440) /
        C402;
    const double C162 =
        (-(C439 * std::pow(-C437, 3) * bs[3] * C448 * C445 * ae * ce) / C440) /
        C402;
    const double C216 =
        (-(C445 * std::pow(-C437, 3) * bs[3] * C439 * C448 * ae * ce) / C440) /
        C402;
    const double C264 =
        (-(C445 * std::pow(-C437, 3) * bs[3] * C448 * C439 * ae * ce) / C440) /
        C402;
    const double C314 =
        (-(C448 * std::pow(-C437, 3) * bs[3] * C439 * C445 * ae * ce) / C440) /
        C402;
    const double C338 =
        (-(C448 * std::pow(-C437, 3) * bs[3] * C445 * C439 * ae * ce) / C440) /
        C402;
    const double C557 = -C554;
    const double C558 = -C555;
    const double C559 = -C556;
    const double C66 =
        (-(C441 * C438 * C439 * ae * ce) / C440) / C402 -
        (ae * C441 * C438 * C439 * ce) / C442 -
        (C439 * (C438 * C441 + std::pow(C439, 2) * bs[3] * std::pow(-C437, 3)) *
         ae * ce) /
            C442;
    const double C80 =
        (-(C441 * C438 * C439 * (yP - yQ) * ae * ce) / C440) / C402;
    const double C81 =
        (-(C439 * std::pow(-C437, 3) * bs[3] * C439 * C445 * ae * ce) / C440) /
            C402 -
        (ae * C441 * C438 * C445 * ce) / C442;
    const double C95 =
        (-(C441 * C438 * C439 * (zP - zQ) * ae * ce) / C440) / C402;
    const double C96 =
        (-(C439 * std::pow(-C437, 3) * bs[3] * C439 * C448 * ae * ce) / C440) /
            C402 -
        (ae * C441 * C438 * C448 * ce) / C442;
    const double C110 = (-(C441 * C438 * C445 * C439 * ae * ce) / C440) / C402;
    const double C111 =
        (-(C439 * std::pow(-C437, 3) * bs[3] * C445 * C439 * ae * ce) / C440) /
            C402 -
        (C441 * C438 * C445 * ae * ce) / C442;
    const double C122 =
        (-((std::pow(C445, 2) * C438 * C441 - (bs[1] * C435) / C434) * ae *
           ce) /
         C440) /
        C402;
    const double C123 =
        (-(C439 *
           (C438 * C441 + std::pow(C445, 2) * bs[3] * std::pow(-C437, 3)) * ae *
           ce) /
         C440) /
        C402;
    const double C134 = (-(C441 * C438 * C445 * C448 * ae * ce) / C440) / C402;
    const double C149 = (-(C441 * C438 * C448 * C439 * ae * ce) / C440) / C402;
    const double C150 =
        (-(C439 * std::pow(-C437, 3) * bs[3] * C448 * C439 * ae * ce) / C440) /
            C402 -
        (C441 * C438 * C448 * ae * ce) / C442;
    const double C161 = (-(C441 * C438 * C448 * C445 * ae * ce) / C440) / C402;
    const double C173 =
        (-((std::pow(C448, 2) * C438 * C441 - (bs[1] * C435) / C434) * ae *
           ce) /
         C440) /
        C402;
    const double C174 =
        (-(C439 *
           (C438 * C441 + std::pow(C448, 2) * bs[3] * std::pow(-C437, 3)) * ae *
           ce) /
         C440) /
        C402;
    const double C192 =
        (-(C445 *
           (C438 * C441 + std::pow(C439, 2) * bs[3] * std::pow(-C437, 3)) * ae *
           ce) /
         C440) /
        C402;
    const double C204 =
        (-(C445 * std::pow(-C437, 3) * bs[3] * C439 * C445 * ae * ce) / C440) /
            C402 -
        (C441 * C438 * C439 * ae * ce) / C442;
    const double C230 =
        (-(C445 * std::pow(-C437, 3) * bs[3] * C445 * C439 * ae * ce) / C440) /
            C402 -
        (ae * C441 * C438 * C439 * ce) / C442;
    const double C241 =
        (-(C441 * C438 * C445 * ae * ce) / C440) / C402 -
        (ae * C441 * C438 * C445 * ce) / C442 -
        (C445 * (C438 * C441 + std::pow(C445, 2) * bs[3] * std::pow(-C437, 3)) *
         ae * ce) /
            C442;
    const double C252 =
        (-(C445 * std::pow(-C437, 3) * bs[3] * C445 * C448 * ae * ce) / C440) /
            C402 -
        (ae * C441 * C438 * C448 * ce) / C442;
    const double C275 =
        (-(C445 * std::pow(-C437, 3) * bs[3] * C448 * C445 * ae * ce) / C440) /
            C402 -
        (C441 * C438 * C448 * ae * ce) / C442;
    const double C286 =
        (-(C445 *
           (C438 * C441 + std::pow(C448, 2) * bs[3] * std::pow(-C437, 3)) * ae *
           ce) /
         C440) /
        C402;
    const double C302 =
        (-(C448 *
           (C438 * C441 + std::pow(C439, 2) * bs[3] * std::pow(-C437, 3)) * ae *
           ce) /
         C440) /
        C402;
    const double C326 =
        (-(C448 * std::pow(-C437, 3) * bs[3] * C439 * C448 * ae * ce) / C440) /
            C402 -
        (C441 * C438 * C439 * ae * ce) / C442;
    const double C349 =
        (-(C448 *
           (C438 * C441 + std::pow(C445, 2) * bs[3] * std::pow(-C437, 3)) * ae *
           ce) /
         C440) /
        C402;
    const double C360 =
        (-(C448 * std::pow(-C437, 3) * bs[3] * C445 * C448 * ae * ce) / C440) /
            C402 -
        (C441 * C438 * C445 * ae * ce) / C442;
    const double C374 =
        (-(C448 * std::pow(-C437, 3) * bs[3] * C448 * C439 * ae * ce) / C440) /
            C402 -
        (ae * C441 * C438 * C439 * ce) / C442;
    const double C385 =
        (-(C448 * std::pow(-C437, 3) * bs[3] * C448 * C445 * ae * ce) / C440) /
            C402 -
        (ae * C441 * C438 * C445 * ce) / C442;
    const double C396 =
        (-(C441 * C438 * C448 * ae * ce) / C440) / C402 -
        (ae * C441 * C438 * C448 * ce) / C442 -
        (C448 * (C438 * C441 + std::pow(C448, 2) * bs[3] * std::pow(-C437, 3)) *
         ae * ce) /
            C442;
    const double C62 = (C439 * C441 * C438 * C439 * ae) / C402 -
                       (ae * bs[1] * C435) / (C434 * C402);
    const double C64 = (ce * bs[1] * C435) / (C434 * C440) -
                       (C439 * C441 * C438 * C439 * ce) / C440;
    const double C79 = -(C439 * C441 * C438 * C445 * ce) / C440;
    const double C94 = -(C439 * C441 * C438 * C448 * ce) / C440;
    const double C109 = (C439 * C441 * C438 * C445 * ae) / C402;
    const double C148 = (C439 * C441 * C438 * C448 * ae) / C402;
    const double C190 = (C445 * C441 * C438 * C439 * ae) / C402;
    const double C191 = -(C445 * C441 * C438 * C439 * ce) / C440;
    const double C203 = (ce * bs[1] * C435) / (C434 * C440) -
                        (C445 * C441 * C438 * C445 * ce) / C440;
    const double C215 = -(C445 * C441 * C438 * C448 * ce) / C440;
    const double C229 = (C445 * C441 * C438 * C445 * ae) / C402 -
                        (ae * bs[1] * C435) / (C434 * C402);
    const double C263 = (C445 * C441 * C438 * C448 * ae) / C402;
    const double C300 = (C448 * C441 * C438 * C439 * ae) / C402;
    const double C301 = -(C448 * C441 * C438 * C439 * ce) / C440;
    const double C313 = -(C448 * C441 * C438 * C445 * ce) / C440;
    const double C325 = (ce * bs[1] * C435) / (C434 * C440) -
                        (C448 * C441 * C438 * C448 * ce) / C440;
    const double C337 = (C448 * C441 * C438 * C445 * ae) / C402;
    const double C373 = (C448 * C441 * C438 * C448 * ae) / C402 -
                        (ae * bs[1] * C435) / (C434 * C402);
    const double C560 = std::exp(C557);
    const double C561 = std::exp(C558);
    const double C562 = std::exp(C559);
    const double C56 =
        ((C560 - (C401 * 2 * ae * be * C401 * C560) / C402) * ae) / C402 -
        (0 * be) / (2 * std::pow(C402, 2));
    const double C57 =
        (0 * ae) / C402 - (ae * be * C401 * C560) / std::pow(C402, 2);
    const double C188 = -(2 * ae * be * C401 * C560) / C402;
    const double C49 = (C560 * C401 * ae) / C402;
    const double C50 = C551 * C560;
    const double C107 = -(2 * ae * be * (yA - yB) * C561) / C402;
    const double C227 =
        ((C561 - (C421 * 2 * ae * be * C421 * C561) / C402) * ae) / C402 -
        (0 * be) / (2 * std::pow(C402, 2));
    const double C228 =
        (0 * ae) / C402 - (ae * be * C421 * C561) / std::pow(C402, 2);
    const double C186 = (C561 * C421 * ae) / C402;
    const double C187 = C551 * C561;
    const double C146 = -(2 * ae * be * (zA - zB) * C562) / C402;
    const double C371 =
        ((C562 - (C428 * 2 * ae * be * C428 * C562) / C402) * ae) / C402 -
        (0 * be) / (2 * std::pow(C402, 2));
    const double C372 =
        (0 * ae) / C402 - (ae * be * C428 * C562) / std::pow(C402, 2);
    const double C297 = (C562 * C428 * ae) / C402;
    const double C298 = C551 * C562;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C56 * C59 + C49 * C61 + C57 * C60 + C50 * C62) * C58 +
                   (C56 * C63 + C49 * C65 + C57 * C64 + C50 * C66) * C51) *
                  C561 * C562 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] += (2 * std::pow(Pi, 2.5) *
                  ((C56 * C59 + C49 * C61 + C57 * C60 + C50 * C62) * C77 +
                   (C56 * C78 + C49 * C80 + C57 * C79 + C50 * C81) * C55) *
                  C561 * C562 * C51 * C54) /
                 (p * q * std::sqrt(p + q));
    d2eexz[0] += (2 * std::pow(Pi, 2.5) *
                  ((C56 * C59 + C49 * C61 + C57 * C60 + C50 * C62) * C92 +
                   (C56 * C93 + C49 * C95 + C57 * C94 + C50 * C96) * C54) *
                  C561 * C562 * C55 * C51) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (2 * std::pow(Pi, 2.5) *
                  (((C107 * C59 + C561 * C108) * C58 +
                    (C107 * C63 + C561 * C110) * C51) *
                       C562 * C49 +
                   ((C107 * C60 + C561 * C109) * C58 +
                    (C107 * C64 + C561 * C111) * C51) *
                       C562 * C50) *
                  C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  (((C107 * C59 + C561 * C108) * C77 +
                    (C107 * C78 + C561 * C122) * C55) *
                       C562 * C49 +
                   ((C107 * C60 + C561 * C109) * C77 +
                    (C107 * C79 + C561 * C123) * C55) *
                       C562 * C50) *
                  C51 * C54) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C107 * C59 + C561 * C108) * C92 +
                    (C107 * C93 + C561 * C134) * C54) *
                       C562 * C49 +
                   ((C107 * C60 + C561 * C109) * C92 +
                    (C107 * C94 + C561 * C135) * C54) *
                       C562 * C50) *
                  C55 * C51) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (2 * std::pow(Pi, 2.5) *
                  (((C146 * C59 + C562 * C147) * C58 +
                    (C146 * C63 + C562 * C149) * C51) *
                       C49 +
                   ((C146 * C60 + C562 * C148) * C58 +
                    (C146 * C64 + C562 * C150) * C51) *
                       C50) *
                  C561 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] += (2 * std::pow(Pi, 2.5) *
                  (((C146 * C59 + C562 * C147) * C77 +
                    (C146 * C78 + C562 * C161) * C55) *
                       C49 +
                   ((C146 * C60 + C562 * C148) * C77 +
                    (C146 * C79 + C562 * C162) * C55) *
                       C50) *
                  C561 * C51 * C54) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C146 * C59 + C562 * C147) * C92 +
                    (C146 * C93 + C562 * C173) * C54) *
                       C49 +
                   ((C146 * C60 + C562 * C148) * C92 +
                    (C146 * C94 + C562 * C174) * C54) *
                       C50) *
                  C561 * C55 * C51) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C188 * C59 + C560 * C61) * C58 + (C188 * C63 + C560 * C65) * C51) *
              C186 +
          ((C188 * C189 + C560 * C190) * C58 +
           (C188 * C191 + C560 * C192) * C51) *
              C187) *
         C562 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C188 * C59 + C560 * C61) * C77 + (C188 * C78 + C560 * C80) * C55) *
              C186 +
          ((C188 * C189 + C560 * C190) * C77 +
           (C188 * C203 + C560 * C204) * C55) *
              C187) *
         C562 * C51 * C54) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C188 * C59 + C560 * C61) * C92 + (C188 * C93 + C560 * C95) * C54) *
              C186 +
          ((C188 * C189 + C560 * C190) * C92 +
           (C188 * C215 + C560 * C216) * C54) *
              C187) *
         C562 * C55 * C51) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C227 * C59 + C186 * C108 + C228 * C189 + C187 * C229) * C58 +
          (C227 * C63 + C186 * C110 + C228 * C191 + C187 * C230) * C51) *
         C562 * C560 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C227 * C59 + C186 * C108 + C228 * C189 + C187 * C229) * C77 +
          (C227 * C78 + C186 * C122 + C228 * C203 + C187 * C241) * C55) *
         C562 * C560 * C51 * C54) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C227 * C59 + C186 * C108 + C228 * C189 + C187 * C229) * C92 +
          (C227 * C93 + C186 * C134 + C228 * C215 + C187 * C252) * C54) *
         C562 * C560 * C55 * C51) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] += (2 * std::pow(Pi, 2.5) *
                  (((C146 * C59 + C562 * C147) * C58 +
                    (C146 * C63 + C562 * C149) * C51) *
                       C560 * C186 +
                   ((C146 * C189 + C562 * C263) * C58 +
                    (C146 * C191 + C562 * C264) * C51) *
                       C560 * C187) *
                  C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] += (2 * std::pow(Pi, 2.5) *
                  (((C146 * C59 + C562 * C147) * C77 +
                    (C146 * C78 + C562 * C161) * C55) *
                       C560 * C186 +
                   ((C146 * C189 + C562 * C263) * C77 +
                    (C146 * C203 + C562 * C275) * C55) *
                       C560 * C187) *
                  C51 * C54) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C146 * C59 + C562 * C147) * C92 +
                    (C146 * C93 + C562 * C173) * C54) *
                       C560 * C186 +
                   ((C146 * C189 + C562 * C263) * C92 +
                    (C146 * C215 + C562 * C286) * C54) *
                       C560 * C187) *
                  C55 * C51) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C188 * C59 + C560 * C61) * C58 + (C188 * C63 + C560 * C65) * C51) *
              C561 * C297 +
          ((C188 * C299 + C560 * C300) * C58 +
           (C188 * C301 + C560 * C302) * C51) *
              C561 * C298) *
         C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C188 * C59 + C560 * C61) * C77 + (C188 * C78 + C560 * C80) * C55) *
              C561 * C297 +
          ((C188 * C299 + C560 * C300) * C77 +
           (C188 * C313 + C560 * C314) * C55) *
              C561 * C298) *
         C51 * C54) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C188 * C59 + C560 * C61) * C92 + (C188 * C93 + C560 * C95) * C54) *
              C561 * C297 +
          ((C188 * C299 + C560 * C300) * C92 +
           (C188 * C325 + C560 * C326) * C54) *
              C561 * C298) *
         C55 * C51) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] += (2 * std::pow(Pi, 2.5) *
                  (((C107 * C59 + C561 * C108) * C58 +
                    (C107 * C63 + C561 * C110) * C51) *
                       C297 +
                   ((C107 * C299 + C561 * C337) * C58 +
                    (C107 * C301 + C561 * C338) * C51) *
                       C298) *
                  C560 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[2] += (2 * std::pow(Pi, 2.5) *
                  (((C107 * C59 + C561 * C108) * C77 +
                    (C107 * C78 + C561 * C122) * C55) *
                       C297 +
                   ((C107 * C299 + C561 * C337) * C77 +
                    (C107 * C313 + C561 * C349) * C55) *
                       C298) *
                  C560 * C51 * C54) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] += (2 * std::pow(Pi, 2.5) *
                  (((C107 * C59 + C561 * C108) * C92 +
                    (C107 * C93 + C561 * C134) * C54) *
                       C297 +
                   ((C107 * C299 + C561 * C337) * C92 +
                    (C107 * C325 + C561 * C360) * C54) *
                       C298) *
                  C560 * C55 * C51) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C371 * C59 + C297 * C147 + C372 * C299 + C298 * C373) * C58 +
          (C371 * C63 + C297 * C149 + C372 * C301 + C298 * C374) * C51) *
         C560 * C561 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C371 * C59 + C297 * C147 + C372 * C299 + C298 * C373) * C77 +
          (C371 * C78 + C297 * C161 + C372 * C313 + C298 * C385) * C55) *
         C560 * C561 * C51 * C54) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C371 * C59 + C297 * C147 + C372 * C299 + C298 * C373) * C92 +
          (C371 * C93 + C297 * C173 + C372 * C325 + C298 * C396) * C54) *
         C560 * C561 * C55 * C51) /
        (p * q * std::sqrt(p + q));
    
}
