/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_20(double ae,
                         double be,
                         double cc,
                         double xAB,
                         double yAB,
                         double zAB,
                         double* const gx,
                         double* const gy,
                         double* const gz,
                         std::size_t matrix_size,
                         std::size_t Ai,
                         std::size_t Bi)
{
    const double C4594 = ae + be;
    const double C4599 = Pi / C4594;
    const double C4600 = std::sqrt(C4599);
    const double C4611 = be * zAB;
    const double C4610 = be * yAB;
    const double C4609 = 2. * C4594;
    const double C4608 = std::pow(C4594, 2);
    const double C4607 = be * xAB;
    const double C4606 = Pi / C4594;
    const double C4613 = C4600 / C4609;
    const double C4612 = std::sqrt(C4606);
    const double C4562 = -(C4612 * C4607) / C4594;
    const double C4566 = (C4600 * std::pow(C4607, 2)) / C4608 + C4613;
    const double C4567 = -(C4600 * C4610) / C4594;
    const double C4568 = -(C4600 * C4611) / C4594;
    const double C4576 = (C4600 * std::pow(C4610, 2)) / C4608 + C4613;
    const double C4582 = (C4600 * std::pow(C4611, 2)) / C4608 + C4613;
    const double C4571 = be * xAB;
    const double C4570 = ae + be;
    const double C4569 = ae * C4562;
    const double C4572 = 2. * C4570;
    const double C4578 = be * yAB;
    const double C4577 = ae * C4567;
    const double C4584 = be * zAB;
    const double C4583 = ae * C4568;
    const double C4623 = C4583 * C4584;
    const double C4622 = C4577 * C4578;
    const double C4621 = 2 * C4583;
    const double C4620 = 2 * C4577;
    const double C4619 = C4569 * C4571;
    const double C4618 = be * C4612;
    const double C4627 = 2 * C4623;
    const double C4626 = 2 * C4622;
    const double C4625 = 2 * C4619;
    const double C4624 = 2 * C4618;
    const double C4631 = C4627 / C4570;
    const double C4630 = C4626 / C4570;
    const double C4629 = C4625 / C4570;
    const double C4628 = -C4624;
    const double C4632 = C4628 / C4572;
    const double C4635 = C4632 - C4631;
    const double C4634 = C4632 - C4630;
    const double C4633 = C4632 - C4629;
    const double gx200000 =
        ((2 * C4569 - 2 * be * C4562) / C4572 - (C4633 * C4571) / C4570) *
        std::pow(C4612, 2);
    const double gx020000 = 2 * C4569 * C4576 * C4612;
    const double gx002000 = 2 * C4569 * C4612 * C4582;
    const double gx110000 = C4633 * C4567 * C4612;
    const double gx101000 = C4633 * C4612 * C4568;
    const double gx011000 = 2 * C4569 * C4567 * C4568;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx110000;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx011000;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (-0.5 * gx200000 - 0.5 * gx020000 + gx002000);
    gx[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx101000;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(0.75) * gx200000 - std::sqrt(0.75) * gx020000);
    const double gy200000 = C4566 * C4620 * C4612;
    const double gy020000 =
        ((C4620 - 2 * be * C4567) / C4572 - (C4634 * C4578) / C4570) *
        std::pow(C4612, 2);
    const double gy002000 = C4612 * C4620 * C4582;
    const double gy110000 = C4562 * C4634 * C4612;
    const double gy101000 = C4562 * C4620 * C4568;
    const double gy011000 = C4612 * C4634 * C4568;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy110000;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy011000;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (-0.5 * gy200000 - 0.5 * gy020000 + gy002000);
    gy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy101000;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(0.75) * gy200000 - std::sqrt(0.75) * gy020000);
    const double gz200000 = C4566 * C4612 * C4621;
    const double gz020000 = C4612 * C4576 * C4621;
    const double gz002000 =
        std::pow(C4612, 2) *
        ((C4621 - 2 * be * C4568) / C4572 - (C4635 * C4584) / C4570);
    const double gz110000 = C4562 * C4567 * C4621;
    const double gz101000 = C4562 * C4612 * C4635;
    const double gz011000 = C4612 * C4567 * C4635;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz110000;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz011000;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (-0.5 * gz200000 - 0.5 * gz020000 + gz002000);
    gz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz101000;
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(0.75) * gz200000 - std::sqrt(0.75) * gz020000);
}

// Automatically generated, do not edit
