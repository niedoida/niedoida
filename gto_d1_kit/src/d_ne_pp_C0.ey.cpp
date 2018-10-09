/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_11_3(double ae,
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
                       double* const gx,
                       double* const gy,
                       double* const gz,
                       std::size_t matrix_size,
                       std::size_t Ai,
                       std::size_t Bi)
{
    const double C518 = ae + be;
    const double C525 = 2. * Pi;
    const double C524 = ae * be;
    const double C523 = zA - zB;
    const double C522 = yA - yB;
    const double C521 = xA - xB;
    const double C520 = bs[1];
    const double C528 = std::pow(C523, 2);
    const double C527 = std::pow(C522, 2);
    const double C526 = std::pow(C521, 2);
    const double C529 = C526 + C527;
    const double C530 = C529 + C528;
    const double C531 = C530 * C524;
    const double C532 = C531 / C518;
    const double C533 = -C532;
    const double C534 = std::exp(C533);
    const double C535 = C534 * C525;
    const double C536 = C520 * C535;
    const double C541 = bs[2];
    const double C542 = C541 * C535;
    const double C83 =
        (bs[1] *
         std::exp(-((std::pow(xA - xB, 2) + std::pow(yA - yB, 2) +
                     std::pow(zA - zB, 2)) *
                    ae * be) /
                  C518) *
         2. * Pi) /
        C518;
    const double C84 = (-(C536 * be * C521) / C518) / C518 -
                       (((ae * xA + be * xB) / C518 - xC) * C542) / C518 +
                       (C521 * C536) / C518;
    const double C85 = C542 / C518;
    const double C187 = (-(C536 * be * C522) / C518) / C518 -
                        (((ae * yA + be * yB) / C518 - yC) * C542) / C518 +
                        (C522 * C536) / C518;
    const double C243 = (-(C536 * be * C523) / C518) / C518 -
                        (((ae * zA + be * zB) / C518 - zC) * C542) / C518 +
                        (C523 * C536) / C518;
    const double C99 = be * zB;
    const double C98 = ae * zA;
    const double C97 = be * yB;
    const double C96 = ae * yA;
    const double C95 = bs[3];
    const double C94 = bs[2];
    const double C93 = ae * be;
    const double C92 = zA - zB;
    const double C91 = yA - yB;
    const double C90 = xA - xB;
    const double C89 = bs[1];
    const double C88 = ae + be;
    const double C87 = be * xB;
    const double C86 = ae * xA;
    const double C106 = C98 + C99;
    const double C105 = C96 + C97;
    const double C104 = 2 * C88;
    const double C103 = std::pow(C92, 2);
    const double C102 = std::pow(C91, 2);
    const double C101 = std::pow(C90, 2);
    const double C100 = C86 + C87;
    const double C110 = C106 / C88;
    const double C109 = C105 / C88;
    const double C108 = C101 + C102;
    const double C107 = C100 / C88;
    const double C115 = C110 - zC;
    const double C114 = C109 - yC;
    const double C113 = C107 - xC;
    const double C112 = C108 + C103;
    const double C111 = C107 - xB;
    const double C116 = C112 * C93;
    const double C117 = C116 / C88;
    const double C118 = -C117;
    const double C119 = std::exp(C118);
    const double C120 = Pi * C119;
    const double C123 = C120 * C115;
    const double C122 = C120 * C114;
    const double C121 = C120 * C113;
    const double C126 = 4 * C123;
    const double C125 = 4 * C122;
    const double C124 = 4 * C121;
    const double C132 = C94 * C126;
    const double C131 = C89 * C126;
    const double C130 = C94 * C125;
    const double C129 = C89 * C125;
    const double C128 = C94 * C124;
    const double C127 = C89 * C124;
    const double C138 = C113 * C132;
    const double C137 = C111 * C131;
    const double C136 = C113 * C130;
    const double C135 = C111 * C129;
    const double C134 = C113 * C128;
    const double C133 = C111 * C127;
    const double C141 = C137 - C138;
    const double C140 = C135 - C136;
    const double C139 = C133 + C83;
    const double C142 = C139 - C134;
    const double C191 = C114 * C132;
    const double C190 = C114 * C130;
    const double C189 = C114 * C128;
    const double C188 = C109 - yB;
    const double C194 = C188 * C131;
    const double C193 = C188 * C129;
    const double C192 = C188 * C127;
    const double C197 = C194 - C191;
    const double C196 = C193 + C83;
    const double C195 = C192 - C189;
    const double C198 = C196 - C190;
    const double C247 = C115 * C132;
    const double C246 = C115 * C130;
    const double C245 = C115 * C128;
    const double C244 = C110 - zB;
    const double C250 = C244 * C131;
    const double C249 = C244 * C129;
    const double C248 = C244 * C127;
    const double C253 = C250 + C83;
    const double C252 = C249 - C246;
    const double C251 = C248 - C245;
    const double C254 = C253 - C247;
    const double C570 = C188 * C254;
    const double C569 = C188 * C252;
    const double C568 = C188 * C251;
    const double C567 = C244 * C132;
    const double C566 = C111 * C254;
    const double C565 = C244 * C130;
    const double C564 = C111 * C252;
    const double C563 = C244 * C128;
    const double C562 = C111 * C251;
    const double C561 = C188 * C132;
    const double C560 = C111 * C197;
    const double C559 = C188 * C130;
    const double C558 = C111 * C198;
    const double C557 = C188 * C128;
    const double C556 = C111 * C195;
    const double C555 = C132 / C104;
    const double C554 = C95 * C126;
    const double C553 = C131 / C104;
    const double C552 = C130 / C104;
    const double C551 = C95 * C125;
    const double C550 = C129 / C104;
    const double C549 = C128 / C104;
    const double C548 = C95 * C124;
    const double C547 = C127 / C104;
    const double C581 = C569 + C243;
    const double C580 = C115 * C554;
    const double C579 = C567 + C85;
    const double C578 = C115 * C551;
    const double C577 = C115 * C548;
    const double C576 = C562 + C243;
    const double C575 = C114 * C554;
    const double C574 = C114 * C551;
    const double C573 = C559 + C85;
    const double C572 = C114 * C548;
    const double C571 = C556 + C187;
    const double C587 = C579 - C580;
    const double C586 = C565 - C578;
    const double C585 = C563 - C577;
    const double C584 = C561 - C575;
    const double C583 = C573 - C574;
    const double C582 = C557 - C572;
    const double C596 = C114 * C587;
    const double C595 = C114 * C586;
    const double C594 = C114 * C585;
    const double C593 = C113 * C587;
    const double C592 = C113 * C586;
    const double C591 = C113 * C585;
    const double C590 = C113 * C584;
    const double C589 = C113 * C583;
    const double C588 = C113 * C582;
    const double C605 = C570 - C596;
    const double C604 = C581 - C595;
    const double C603 = C568 - C594;
    const double C602 = C566 - C593;
    const double C601 = C564 - C592;
    const double C600 = C576 - C591;
    const double C599 = C560 - C590;
    const double C598 = C558 - C589;
    const double C597 = C571 - C588;
    const double gx100100 = C111 * C142 + C547 + C84 -
                            C113 * (C111 * C128 + C85 - C113 * C548) - C549 -
                            C90 * C142;
    const double gx100010 = C597 - C90 * C195;
    const double gx100001 = C600 - C90 * C251;
    const double gx010100 = C597 - C91 * C142;
    const double gx010010 =
        C188 * C195 + C547 - C114 * C582 - C549 - C91 * C195;
    const double gx010001 = C603 - C91 * C251;
    const double gx001100 = C600 - C92 * C142;
    const double gx001010 = C603 - C92 * C195;
    const double gx001001 =
        C244 * C251 + C547 - C115 * C585 - C549 - C92 * C251;
    gx[(Ai + 0) * matrix_size + Bi + 0] += gx100100;
    gx[(Ai + 0) * matrix_size + Bi + 1] += gx100010;
    gx[(Ai + 0) * matrix_size + Bi + 2] += gx100001;
    gx[(Ai + 1) * matrix_size + Bi + 0] += gx010100;
    gx[(Ai + 1) * matrix_size + Bi + 1] += gx010010;
    gx[(Ai + 1) * matrix_size + Bi + 2] += gx010001;
    gx[(Ai + 2) * matrix_size + Bi + 0] += gx001100;
    gx[(Ai + 2) * matrix_size + Bi + 1] += gx001010;
    gx[(Ai + 2) * matrix_size + Bi + 2] += gx001001;
    const double gy100100 = C111 * C140 + C550 -
                            C113 * (C111 * C130 - C113 * C551) - C552 -
                            C90 * C140;
    const double gy100010 = C598 - C90 * C198;
    const double gy100001 = C601 - C90 * C252;
    const double gy010100 = C598 - C91 * C140;
    const double gy010010 =
        C188 * C198 + C550 + C187 - C114 * C583 - C552 - C91 * C198;
    const double gy010001 = C604 - C91 * C252;
    const double gy001100 = C601 - C92 * C140;
    const double gy001010 = C604 - C92 * C198;
    const double gy001001 =
        C244 * C252 + C550 - C115 * C586 - C552 - C92 * C252;
    gy[(Ai + 0) * matrix_size + Bi + 0] += gy100100;
    gy[(Ai + 0) * matrix_size + Bi + 1] += gy100010;
    gy[(Ai + 0) * matrix_size + Bi + 2] += gy100001;
    gy[(Ai + 1) * matrix_size + Bi + 0] += gy010100;
    gy[(Ai + 1) * matrix_size + Bi + 1] += gy010010;
    gy[(Ai + 1) * matrix_size + Bi + 2] += gy010001;
    gy[(Ai + 2) * matrix_size + Bi + 0] += gy001100;
    gy[(Ai + 2) * matrix_size + Bi + 1] += gy001010;
    gy[(Ai + 2) * matrix_size + Bi + 2] += gy001001;
    const double gz100100 = C111 * C141 + C553 -
                            C113 * (C111 * C132 - C113 * C554) - C555 -
                            C90 * C141;
    const double gz100010 = C599 - C90 * C197;
    const double gz100001 = C602 - C90 * C254;
    const double gz010100 = C599 - C91 * C141;
    const double gz010010 =
        C188 * C197 + C553 - C114 * C584 - C555 - C91 * C197;
    const double gz010001 = C605 - C91 * C254;
    const double gz001100 = C602 - C92 * C141;
    const double gz001010 = C605 - C92 * C197;
    const double gz001001 =
        C244 * C254 + C553 + C243 - C115 * C587 - C555 - C92 * C254;
    gz[(Ai + 0) * matrix_size + Bi + 0] += gz100100;
    gz[(Ai + 0) * matrix_size + Bi + 1] += gz100010;
    gz[(Ai + 0) * matrix_size + Bi + 2] += gz100001;
    gz[(Ai + 1) * matrix_size + Bi + 0] += gz010100;
    gz[(Ai + 1) * matrix_size + Bi + 1] += gz010010;
    gz[(Ai + 1) * matrix_size + Bi + 2] += gz010001;
    gz[(Ai + 2) * matrix_size + Bi + 0] += gz001100;
    gz[(Ai + 2) * matrix_size + Bi + 1] += gz001010;
    gz[(Ai + 2) * matrix_size + Bi + 2] += gz001001;
}
