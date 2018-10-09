/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_20_3(double ae,
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
    const double C539 = ae + be;
    const double C546 = 2. * Pi;
    const double C545 = ae * be;
    const double C544 = zA - zB;
    const double C543 = yA - yB;
    const double C542 = xA - xB;
    const double C541 = bs[1];
    const double C549 = std::pow(C544, 2);
    const double C548 = std::pow(C543, 2);
    const double C547 = std::pow(C542, 2);
    const double C550 = C547 + C548;
    const double C551 = C550 + C549;
    const double C552 = C551 * C545;
    const double C553 = C552 / C539;
    const double C554 = -C553;
    const double C555 = std::exp(C554);
    const double C556 = C555 * C546;
    const double C557 = C541 * C556;
    const double C562 = bs[2];
    const double C563 = C562 * C556;
    const double C108 =
        (bs[1] *
         std::exp(-((std::pow(xA - xB, 2) + std::pow(yA - yB, 2) +
                     std::pow(zA - zB, 2)) *
                    ae * be) /
                  C539) *
         2. * Pi) /
        C539;
    const double C109 = (-(C557 * be * C542) / C539) / C539 -
                        (((ae * xA + be * xB) / C539 - xC) * C563) / C539 +
                        (C542 * C557) / C539;
    const double C110 = C563 / C539;
    const double C238 = (-(C557 * be * C543) / C539) / C539 -
                        (((ae * yA + be * yB) / C539 - yC) * C563) / C539 +
                        (C543 * C557) / C539;
    const double C320 = (-(C557 * be * C544) / C539) / C539 -
                        (((ae * zA + be * zB) / C539 - zC) * C563) / C539 +
                        (C544 * C557) / C539;
    const double C124 = be * zB;
    const double C123 = ae * zA;
    const double C122 = be * yB;
    const double C121 = ae * yA;
    const double C120 = bs[3];
    const double C119 = bs[2];
    const double C118 = ae * be;
    const double C117 = zA - zB;
    const double C116 = yA - yB;
    const double C115 = xA - xB;
    const double C114 = bs[1];
    const double C113 = ae + be;
    const double C112 = be * xB;
    const double C111 = ae * xA;
    const double C131 = C123 + C124;
    const double C130 = C121 + C122;
    const double C129 = 2 * C113;
    const double C128 = std::pow(C117, 2);
    const double C127 = std::pow(C116, 2);
    const double C126 = std::pow(C115, 2);
    const double C125 = C111 + C112;
    const double C135 = C131 / C113;
    const double C134 = C130 / C113;
    const double C133 = C126 + C127;
    const double C132 = C125 / C113;
    const double C140 = C135 - zC;
    const double C139 = C134 - yC;
    const double C138 = C132 - xC;
    const double C137 = C133 + C128;
    const double C136 = C132 - xB;
    const double C141 = C137 * C118;
    const double C142 = C141 / C113;
    const double C143 = -C142;
    const double C144 = std::exp(C143);
    const double C145 = Pi * C144;
    const double C148 = C145 * C140;
    const double C147 = C145 * C139;
    const double C146 = C145 * C138;
    const double C151 = 4 * C148;
    const double C150 = 4 * C147;
    const double C149 = 4 * C146;
    const double C157 = C119 * C151;
    const double C156 = C114 * C151;
    const double C155 = C119 * C150;
    const double C154 = C114 * C150;
    const double C153 = C119 * C149;
    const double C152 = C114 * C149;
    const double C163 = C138 * C157;
    const double C162 = C136 * C156;
    const double C161 = C138 * C155;
    const double C160 = C136 * C154;
    const double C159 = C138 * C153;
    const double C158 = C136 * C152;
    const double C166 = C162 - C163;
    const double C165 = C160 - C161;
    const double C164 = C158 + C108;
    const double C167 = C164 - C159;
    const double C242 = C139 * C157;
    const double C241 = C139 * C155;
    const double C240 = C139 * C153;
    const double C239 = C134 - yB;
    const double C245 = C239 * C156;
    const double C244 = C239 * C154;
    const double C243 = C239 * C152;
    const double C248 = C245 - C242;
    const double C247 = C244 + C108;
    const double C246 = C243 - C240;
    const double C249 = C247 - C241;
    const double C324 = C140 * C157;
    const double C323 = C140 * C155;
    const double C322 = C140 * C153;
    const double C321 = C135 - zB;
    const double C327 = C321 * C156;
    const double C326 = C321 * C154;
    const double C325 = C321 * C152;
    const double C330 = C327 + C108;
    const double C329 = C326 - C323;
    const double C328 = C325 - C322;
    const double C331 = C330 - C324;
    const double C588 = C117 * C156;
    const double C587 = C321 * C157;
    const double C586 = C117 * C154;
    const double C585 = C321 * C155;
    const double C584 = C117 * C152;
    const double C583 = C321 * C153;
    const double C582 = C116 * C156;
    const double C581 = C239 * C157;
    const double C580 = C116 * C154;
    const double C579 = C239 * C155;
    const double C578 = C116 * C152;
    const double C577 = C239 * C153;
    const double C576 = C157 / C129;
    const double C575 = C120 * C151;
    const double C574 = C156 / C129;
    const double C573 = C155 / C129;
    const double C572 = C120 * C150;
    const double C571 = C154 / C129;
    const double C570 = C153 / C129;
    const double C569 = C120 * C149;
    const double C568 = C152 / C129;
    const double C602 = C331 - C588;
    const double C601 = C140 * C575;
    const double C600 = C587 + C110;
    const double C599 = C329 - C586;
    const double C598 = C140 * C572;
    const double C597 = C328 - C584;
    const double C596 = C140 * C569;
    const double C595 = C248 - C582;
    const double C594 = C139 * C575;
    const double C593 = C249 - C580;
    const double C592 = C139 * C572;
    const double C591 = C579 + C110;
    const double C590 = C246 - C578;
    const double C589 = C139 * C569;
    const double C608 = C600 - C601;
    const double C607 = C585 - C598;
    const double C606 = C583 - C596;
    const double C605 = C581 - C594;
    const double C604 = C591 - C592;
    const double C603 = C577 - C589;
    const double gx200000 = C136 * C167 + C568 + C109 -
                            C138 * (C136 * C153 + C110 - C138 * C569) - C570 -
                            C115 * C167 - C115 * (C167 - C115 * C152);
    const double gx020000 =
        C239 * C246 + C568 - C139 * C603 - C570 - C116 * C246 - C116 * C590;
    const double gx002000 =
        C321 * C328 + C568 - C140 * C606 - C570 - C117 * C328 - C117 * C597;
    const double gx110000 =
        C136 * C246 + C238 - C138 * C603 - C116 * C167 - C115 * C590;
    const double gx101000 =
        C136 * C328 + C320 - C138 * C606 - C117 * C167 - C115 * C597;
    const double gx011000 =
        C239 * C328 - C139 * C606 - C117 * C246 - C116 * C597;
    gx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx110000;
    gx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx011000;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * gx200000 - 0.5 * gx020000 + gx002000;
    gx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx101000;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * gx200000 - std::sqrt(0.75) * gx020000;
    const double gy200000 = C136 * C165 + C571 -
                            C138 * (C136 * C155 - C138 * C572) - C573 -
                            C115 * C165 - C115 * (C165 - C115 * C154);
    const double gy020000 = C239 * C249 + C571 + C238 - C139 * C604 - C573 -
                            C116 * C249 - C116 * C593;
    const double gy002000 =
        C321 * C329 + C571 - C140 * C607 - C573 - C117 * C329 - C117 * C599;
    const double gy110000 =
        C136 * C249 - C138 * C604 - C116 * C165 - C115 * C593;
    const double gy101000 =
        C136 * C329 - C138 * C607 - C117 * C165 - C115 * C599;
    const double gy011000 =
        C239 * C329 + C320 - C139 * C607 - C117 * C249 - C116 * C599;
    gy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy110000;
    gy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy011000;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * gy200000 - 0.5 * gy020000 + gy002000;
    gy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy101000;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * gy200000 - std::sqrt(0.75) * gy020000;
    const double gz200000 = C136 * C166 + C574 -
                            C138 * (C136 * C157 - C138 * C575) - C576 -
                            C115 * C166 - C115 * (C166 - C115 * C156);
    const double gz020000 =
        C239 * C248 + C574 - C139 * C605 - C576 - C116 * C248 - C116 * C595;
    const double gz002000 = C321 * C331 + C574 + C320 - C140 * C608 - C576 -
                            C117 * C331 - C117 * C602;
    const double gz110000 =
        C136 * C248 - C138 * C605 - C116 * C166 - C115 * C595;
    const double gz101000 =
        C136 * C331 - C138 * C608 - C117 * C166 - C115 * C602;
    const double gz011000 =
        C239 * C331 - C139 * C608 - C117 * C248 - C116 * C602;
    gz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz110000;
    gz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz011000;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * gz200000 - 0.5 * gz020000 + gz002000;
    gz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz101000;
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * gz200000 - std::sqrt(0.75) * gz020000;
}
