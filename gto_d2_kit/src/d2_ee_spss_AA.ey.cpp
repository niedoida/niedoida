/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_spss_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0100_11(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C411 = ae + be;
    const double C410 = xA - xB;
    const double C409 = ae * be;
    const double C428 = yA - yB;
    const double C431 = zA - zB;
    const double C462 = p + q;
    const double C461 = p * q;
    const double C467 = xP - xQ;
    const double C466 = bs[2];
    const double C471 = yP - yQ;
    const double C474 = zP - zQ;
    const double C60 = bs[0];
    const double C563 = ce + de;
    const double C562 = ce * de;
    const double C559 = 2 * C411;
    const double C558 = std::pow(C410, 2);
    const double C412 = C409 * C410;
    const double C444 = C409 * C428;
    const double C561 = std::pow(C428, 2);
    const double C456 = C409 * C431;
    const double C560 = std::pow(C431, 2);
    const double C463 = 2 * C461;
    const double C53 = std::exp(-(std::pow(zC - zD, 2) * C562) / C563);
    const double C54 = std::exp(-(std::pow(yC - yD, 2) * C562) / C563);
    const double C55 = std::exp(-(std::pow(xC - xD, 2) * C562) / C563);
    const double C565 = std::pow(C559, -1);
    const double C564 = C558 * C409;
    const double C567 = C561 * C409;
    const double C566 = C560 * C409;
    const double C465 = C463 / C462;
    const double C64 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C463 / C462, 2) -
          (bs[1] * C463) / C462) *
         std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C62 = (-(bs[1] * C467 * ae * C463) / C462) / C411;
    const double C79 = (-(bs[1] * C471 * ae * C463) / C462) / C411;
    const double C94 = (-(bs[1] * C474 * ae * C463) / C462) / C411;
    const double C61 = -(C467 * bs[1] * C463) / C462;
    const double C191 = -(C471 * bs[1] * C463) / C462;
    const double C305 = -(C474 * bs[1] * C463) / C462;
    const double C568 = C564 / C411;
    const double C570 = C567 / C411;
    const double C569 = C566 / C411;
    const double C468 = std::pow(C465, 2);
    const double C136 =
        (C467 * std::pow(-C465, 3) * bs[3] * C471 * C474 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C160 =
        (C467 * std::pow(-C465, 3) * bs[3] * C474 * C471 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C221 =
        (C471 * std::pow(-C465, 3) * bs[3] * C467 * C474 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C269 =
        (C471 * std::pow(-C465, 3) * bs[3] * C474 * C467 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C320 =
        (C474 * std::pow(-C465, 3) * bs[3] * C467 * C471 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C345 =
        (C474 * std::pow(-C465, 3) * bs[3] * C471 * C467 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C571 = -C568;
    const double C573 = -C570;
    const double C572 = -C569;
    const double C65 =
        (2 * ae * C468 * C466 * C467 * ae +
         C467 * (C466 * C468 + std::pow(C467, 2) * bs[3] * std::pow(-C465, 3)) *
             std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C81 =
        (C468 * C466 * C467 * (yP - yQ) * std::pow(ae, 2)) / std::pow(C411, 2);
    const double C82 =
        (ae * C468 * C466 * C471 * ae +
         C467 * std::pow(-C465, 3) * bs[3] * C467 * C471 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C96 =
        (C468 * C466 * C467 * (zP - zQ) * std::pow(ae, 2)) / std::pow(C411, 2);
    const double C97 =
        (ae * C468 * C466 * C474 * ae +
         C467 * std::pow(-C465, 3) * bs[3] * C467 * C474 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C108 =
        (C468 * C466 * C471 * C467 * std::pow(ae, 2)) / std::pow(C411, 2);
    const double C109 =
        (ae * C468 * C466 * C471 * ae +
         C467 * std::pow(-C465, 3) * bs[3] * C471 * C467 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C121 =
        ((std::pow(C471, 2) * C466 * C468 - (bs[1] * C463) / C462) *
         std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C122 =
        (C467 * (C466 * C468 + std::pow(C471, 2) * bs[3] * std::pow(-C465, 3)) *
         std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C135 =
        (C468 * C466 * C471 * C474 * std::pow(ae, 2)) / std::pow(C411, 2);
    const double C147 =
        (C468 * C466 * C474 * C467 * std::pow(ae, 2)) / std::pow(C411, 2);
    const double C148 =
        (ae * C468 * C466 * C474 * ae +
         C467 * std::pow(-C465, 3) * bs[3] * C474 * C467 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C159 =
        (C468 * C466 * C474 * C471 * std::pow(ae, 2)) / std::pow(C411, 2);
    const double C172 =
        ((std::pow(C474, 2) * C466 * C468 - (bs[1] * C463) / C462) *
         std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C173 =
        (C467 * (C466 * C468 + std::pow(C474, 2) * bs[3] * std::pow(-C465, 3)) *
         std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C193 =
        (C471 * (C466 * C468 + std::pow(C467, 2) * bs[3] * std::pow(-C465, 3)) *
         std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C209 =
        (ae * C468 * C466 * C467 * ae +
         C471 * std::pow(-C465, 3) * bs[3] * C467 * C471 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C232 =
        (ae * C468 * C466 * C467 * ae +
         C471 * std::pow(-C465, 3) * bs[3] * C471 * C467 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C245 =
        (2 * ae * C468 * C466 * C471 * ae +
         C471 * (C466 * C468 + std::pow(C471, 2) * bs[3] * std::pow(-C465, 3)) *
             std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C258 =
        (ae * C468 * C466 * C474 * ae +
         C471 * std::pow(-C465, 3) * bs[3] * C471 * C474 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C280 =
        (ae * C468 * C466 * C474 * ae +
         C471 * std::pow(-C465, 3) * bs[3] * C474 * C471 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C291 =
        (C471 * (C466 * C468 + std::pow(C474, 2) * bs[3] * std::pow(-C465, 3)) *
         std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C307 =
        (C474 * (C466 * C468 + std::pow(C467, 2) * bs[3] * std::pow(-C465, 3)) *
         std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C334 =
        (ae * C468 * C466 * C467 * ae +
         C474 * std::pow(-C465, 3) * bs[3] * C467 * C474 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C356 =
        (C474 * (C466 * C468 + std::pow(C471, 2) * bs[3] * std::pow(-C465, 3)) *
         std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C368 =
        (ae * C468 * C466 * C471 * ae +
         C474 * std::pow(-C465, 3) * bs[3] * C471 * C474 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C379 =
        (ae * C468 * C466 * C467 * ae +
         C474 * std::pow(-C465, 3) * bs[3] * C474 * C467 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C390 =
        (ae * C468 * C466 * C471 * ae +
         C474 * std::pow(-C465, 3) * bs[3] * C474 * C471 * std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C403 =
        (2 * ae * C468 * C466 * C474 * ae +
         C474 * (C466 * C468 + std::pow(C474, 2) * bs[3] * std::pow(-C465, 3)) *
             std::pow(ae, 2)) /
        std::pow(C411, 2);
    const double C63 = (C467 * C468 * C466 * C467 * ae) / C411 -
                       (ae * bs[1] * C463) / (C462 * C411);
    const double C80 = (C467 * C468 * C466 * C471 * ae) / C411;
    const double C95 = (C467 * C468 * C466 * C474 * ae) / C411;
    const double C192 = (C471 * C468 * C466 * C467 * ae) / C411;
    const double C208 = (C471 * C468 * C466 * C471 * ae) / C411 -
                        (ae * bs[1] * C463) / (C462 * C411);
    const double C220 = (C471 * C468 * C466 * C474 * ae) / C411;
    const double C306 = (C474 * C468 * C466 * C467 * ae) / C411;
    const double C319 = (C474 * C468 * C466 * C471 * ae) / C411;
    const double C333 = (C474 * C468 * C466 * C474 * ae) / C411 -
                        (ae * bs[1] * C463) / (C462 * C411);
    const double C574 = std::exp(C571);
    const double C576 = std::exp(C573);
    const double C575 = std::exp(C572);
    const double C413 = C412 * C574;
    const double C49 = (C574 * C410 * ae) / C411;
    const double C50 = C565 * C574;
    const double C445 = C444 * C576;
    const double C78 = -(2 * C409 * (yA - yB) * C576) / C411;
    const double C120 =
        -((C576 - (C428 * 2 * C409 * C428 * C576) / C411) * 2 * C409) / C411;
    const double C206 =
        ((C576 - (C428 * 2 * C409 * C428 * C576) / C411) * ae) / C411 -
        (0 * be) / (2 * std::pow(C411, 2));
    const double C207 =
        (0 * ae) / C411 - (C409 * C428 * C576) / std::pow(C411, 2);
    const double C187 = (C576 * C428 * ae) / C411;
    const double C188 = C565 * C576;
    const double C457 = C456 * C575;
    const double C93 = -(2 * C409 * (zA - zB) * C575) / C411;
    const double C171 =
        -((C575 - (C431 * 2 * C409 * C431 * C575) / C411) * 2 * C409) / C411;
    const double C331 =
        ((C575 - (C431 * 2 * C409 * C431 * C575) / C411) * ae) / C411 -
        (0 * be) / (2 * std::pow(C411, 2));
    const double C332 =
        (0 * ae) / C411 - (C409 * C431 * C575) / std::pow(C411, 2);
    const double C303 = (C575 * C431 * ae) / C411;
    const double C304 = C565 * C575;
    const double C56 =
        (((-4 * C413) / C411 -
          (C410 * (C574 - (C410 * 2 * C413) / C411) * 2 * C409) / C411) *
         ae) /
        C411;
    const double C57 = ((C574 - (C410 * 2 * C413) / C411) * ae) / C411 -
                       (0 * be) / (2 * std::pow(C411, 2));
    const double C58 =
        (-((C574 - (C410 * 2 * C413) / C411) * 2 * C409) / C411) / (2 * C411);
    const double C59 = (0 * ae) / C411 - C413 / std::pow(C411, 2);
    const double C189 = -((C574 - (C410 * 2 * C413) / C411) * 2 * C409) / C411;
    const double C190 = -(2 * C413) / C411;
    const double C243 =
        (((-4 * C445) / C411 -
          (C428 * (C576 - (C428 * 2 * C445) / C411) * 2 * C409) / C411) *
         ae) /
        C411;
    const double C244 =
        (-((C576 - (C428 * 2 * C445) / C411) * 2 * C409) / C411) / (2 * C411);
    const double C125 = C78 * C80;
    const double C124 = C78 * C79;
    const double C358 = C78 * C319;
    const double C247 = C206 * C79;
    const double C248 = C207 * C208;
    const double C401 =
        (((-4 * C457) / C411 -
          (C431 * (C575 - (C431 * 2 * C457) / C411) * 2 * C409) / C411) *
         ae) /
        C411;
    const double C402 =
        (-((C575 - (C431 * 2 * C457) / C411) * 2 * C409) / C411) / (2 * C411);
    const double C176 = C93 * C95;
    const double C175 = C93 * C94;
    const double C293 = C93 * C220;
    const double C405 = C331 * C94;
    const double C406 = C332 * C333;
    const double C67 = C57 * C62;
    const double C68 = C59 * C63;
    const double C196 = C190 * C192;
    const double C195 = C190 * C62;
    const double C309 = C190 * C306;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  (C56 * C60 + C67 + C67 + C49 * C64 + C58 * C61 + C68 + C68 +
                   C50 * C65) *
                  C575 * C576 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C78 * C60 + C576 * C79) * C57 + (C78 * C62 + C576 * C81) * C49 +
          (C78 * C61 + C576 * C80) * C59 + (C78 * C63 + C576 * C82) * C50) *
         C575 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((C93 * C60 + C575 * C94) * C57 + (C93 * C62 + C575 * C96) * C49 +
          (C93 * C61 + C575 * C95) * C59 + (C93 * C63 + C575 * C97) * C50) *
         C576 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C57 * C60 + C49 * C62 + C59 * C61 + C50 * C63) * C78 +
                   (C57 * C79 + C49 * C108 + C59 * C80 + C50 * C109) * C576) *
                  C575 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  ((C120 * C60 + C124 + C124 + C576 * C121) * C49 +
                   (C120 * C61 + C125 + C125 + C576 * C122) * C50) *
                  C575 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C93 * C60 + C575 * C94) * C78 + (C93 * C79 + C575 * C135) * C576) *
              C49 +
          ((C93 * C61 + C575 * C95) * C78 + (C93 * C80 + C575 * C136) * C576) *
              C50) *
         C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C57 * C60 + C49 * C62 + C59 * C61 + C50 * C63) * C93 +
                   (C57 * C94 + C49 * C147 + C59 * C95 + C50 * C148) * C575) *
                  C576 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C78 * C60 + C576 * C79) * C93 + (C78 * C94 + C576 * C159) * C575) *
              C49 +
          ((C78 * C61 + C576 * C80) * C93 + (C78 * C95 + C576 * C160) * C575) *
              C50) *
         C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  ((C171 * C60 + C175 + C175 + C575 * C172) * C576 * C49 +
                   (C171 * C61 + C176 + C176 + C575 * C173) * C576 * C50) *
                  C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (2 * std::pow(Pi, 2.5) *
                  ((C189 * C60 + C195 + C195 + C574 * C64) * C575 * C187 +
                   (C189 * C191 + C196 + C196 + C574 * C193) * C575 * C188) *
                  C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C206 * C60 + C187 * C79 + C207 * C191 + C188 * C208) * C190 +
          (C206 * C62 + C187 * C81 + C207 * C192 + C188 * C209) * C574) *
         C575 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((C93 * C60 + C575 * C94) * C190 + (C93 * C62 + C575 * C96) * C574) *
              C187 +
          ((C93 * C191 + C575 * C220) * C190 +
           (C93 * C192 + C575 * C221) * C574) *
              C188) *
         C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C190 * C60 + C574 * C62) * C206 + (C190 * C79 + C574 * C108) * C187 +
          (C190 * C191 + C574 * C192) * C207 +
          (C190 * C208 + C574 * C232) * C188) *
         C575 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] += (2 * std::pow(Pi, 2.5) *
                  (C243 * C60 + C247 + C247 + C187 * C121 + C244 * C191 + C248 +
                   C248 + C188 * C245) *
                  C574 * C575 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C93 * C60 + C575 * C94) * C206 + (C93 * C79 + C575 * C135) * C187 +
          (C93 * C191 + C575 * C220) * C207 +
          (C93 * C208 + C575 * C258) * C188) *
         C574 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] += (2 * std::pow(Pi, 2.5) *
                  (((C190 * C60 + C574 * C62) * C93 +
                    (C190 * C94 + C574 * C147) * C575) *
                       C187 +
                   ((C190 * C191 + C574 * C192) * C93 +
                    (C190 * C220 + C574 * C269) * C575) *
                       C188) *
                  C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((C206 * C60 + C187 * C79 + C207 * C191 + C188 * C208) * C93 +
          (C206 * C94 + C187 * C159 + C207 * C220 + C188 * C280) * C575) *
         C574 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  ((C171 * C60 + C175 + C175 + C575 * C172) * C187 +
                   (C171 * C191 + C293 + C293 + C575 * C291) * C188) *
                  C574 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (2 * std::pow(Pi, 2.5) *
                  ((C189 * C60 + C195 + C195 + C574 * C64) * C303 +
                   (C189 * C305 + C309 + C309 + C574 * C307) * C304) *
                  C576 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((C78 * C60 + C576 * C79) * C190 + (C78 * C62 + C576 * C81) * C574) *
              C303 +
          ((C78 * C305 + C576 * C319) * C190 +
           (C78 * C306 + C576 * C320) * C574) *
              C304) *
         C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C331 * C60 + C303 * C94 + C332 * C305 + C304 * C333) * C190 +
          (C331 * C62 + C303 * C96 + C332 * C306 + C304 * C334) * C574) *
         C576 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] += (2 * std::pow(Pi, 2.5) *
                  (((C190 * C60 + C574 * C62) * C78 +
                    (C190 * C79 + C574 * C108) * C576) *
                       C303 +
                   ((C190 * C305 + C574 * C306) * C78 +
                    (C190 * C319 + C574 * C345) * C576) *
                       C304) *
                  C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[2] += (2 * std::pow(Pi, 2.5) *
                  ((C120 * C60 + C124 + C124 + C576 * C121) * C574 * C303 +
                   (C120 * C305 + C358 + C358 + C576 * C356) * C574 * C304) *
                  C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C331 * C60 + C303 * C94 + C332 * C305 + C304 * C333) * C78 +
          (C331 * C79 + C303 * C135 + C332 * C319 + C304 * C368) * C576) *
         C574 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C190 * C60 + C574 * C62) * C331 + (C190 * C94 + C574 * C147) * C303 +
          (C190 * C305 + C574 * C306) * C332 +
          (C190 * C333 + C574 * C379) * C304) *
         C576 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((C78 * C60 + C576 * C79) * C331 + (C78 * C94 + C576 * C159) * C303 +
          (C78 * C305 + C576 * C319) * C332 +
          (C78 * C333 + C576 * C390) * C304) *
         C574 * C53 * C54 * C55) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] += (2 * std::pow(Pi, 2.5) *
                  (C401 * C60 + C405 + C405 + C303 * C172 + C402 * C305 + C406 +
                   C406 + C304 * C403) *
                  C576 * C574 * C53 * C54 * C55) /
                 (p * q * std::sqrt(p + q));
    
}
