/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_01_3(double ae,
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
    const double C125 = ae + be;
    const double C52 =
        (bs[1] *
         std::exp(-((std::pow(xA - xB, 2) + std::pow(yA - yB, 2) +
                     std::pow(zA - zB, 2)) *
                    ae * be) /
                  C125) *
         2. * Pi) /
        C125;
    const double C65 = be * zB;
    const double C64 = ae * zA;
    const double C63 = be * yB;
    const double C62 = ae * yA;
    const double C61 = bs[2];
    const double C60 = ae * be;
    const double C59 = zA - zB;
    const double C58 = yA - yB;
    const double C57 = xA - xB;
    const double C56 = bs[1];
    const double C55 = ae + be;
    const double C54 = be * xB;
    const double C53 = ae * xA;
    const double C71 = C64 + C65;
    const double C70 = C62 + C63;
    const double C69 = std::pow(C59, 2);
    const double C68 = std::pow(C58, 2);
    const double C67 = std::pow(C57, 2);
    const double C66 = C53 + C54;
    const double C75 = C71 / C55;
    const double C74 = C70 / C55;
    const double C73 = C67 + C68;
    const double C72 = C66 / C55;
    const double C80 = C75 - zC;
    const double C79 = C74 - yC;
    const double C78 = C72 - xC;
    const double C77 = C73 + C69;
    const double C76 = C72 - xB;
    const double C81 = C77 * C60;
    const double C82 = C81 / C55;
    const double C83 = -C82;
    const double C84 = std::exp(C83);
    const double C85 = Pi * C84;
    const double C88 = C85 * C80;
    const double C87 = C85 * C79;
    const double C86 = C85 * C78;
    const double C91 = 4 * C88;
    const double C90 = 4 * C87;
    const double C89 = 4 * C86;
    const double C106 = C74 - yB;
    const double C121 = C75 - zB;
    const double C135 = C61 * C91;
    const double C134 = C56 * C91;
    const double C133 = C61 * C90;
    const double C132 = C56 * C90;
    const double C131 = C61 * C89;
    const double C130 = C56 * C89;
    const double gx000100 = C76 * C130 + C52 - C78 * C131;
    const double gx000010 = C106 * C130 - C79 * C131;
    const double gx000001 = C121 * C130 - C80 * C131;
    gx[(Ai + 0) * matrix_size + Bi + 0] += gx000100;
    gx[(Ai + 0) * matrix_size + Bi + 1] += gx000010;
    gx[(Ai + 0) * matrix_size + Bi + 2] += gx000001;
    const double gy000100 = C76 * C132 - C78 * C133;
    const double gy000010 = C106 * C132 + C52 - C79 * C133;
    const double gy000001 = C121 * C132 - C80 * C133;
    gy[(Ai + 0) * matrix_size + Bi + 0] += gy000100;
    gy[(Ai + 0) * matrix_size + Bi + 1] += gy000010;
    gy[(Ai + 0) * matrix_size + Bi + 2] += gy000001;
    const double gz000100 = C76 * C134 - C78 * C135;
    const double gz000010 = C106 * C134 - C79 * C135;
    const double gz000001 = C121 * C134 + C52 - C80 * C135;
    gz[(Ai + 0) * matrix_size + Bi + 0] += gz000100;
    gz[(Ai + 0) * matrix_size + Bi + 1] += gz000010;
    gz[(Ai + 0) * matrix_size + Bi + 2] += gz000001;
}
