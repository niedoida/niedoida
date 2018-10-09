/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_01_2(double ae,
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
    const double C137 = ae + be;
    const double C144 = 2. * Pi;
    const double C143 = ae * be;
    const double C142 = zA - zB;
    const double C141 = yA - yB;
    const double C140 = xA - xB;
    const double C147 = std::pow(C142, 2);
    const double C146 = std::pow(C141, 2);
    const double C145 = std::pow(C140, 2);
    const double C148 = C145 + C146;
    const double C149 = C148 + C147;
    const double C150 = C149 * C143;
    const double C151 = C150 / C137;
    const double C152 = -C151;
    const double C153 = std::exp(C152);
    const double C154 = C153 * C144;
    const double C55 = (bs[0] * C154) / C137;
    const double C56 = (bs[1] * C154) / C137;
    const double C71 = be * zB;
    const double C70 = ae * zA;
    const double C69 = be * yB;
    const double C68 = ae * yA;
    const double C67 = bs[2];
    const double C66 = 4 * Pi;
    const double C65 = zA - zB;
    const double C64 = yA - yB;
    const double C63 = ae * be;
    const double C62 = xA - xB;
    const double C61 = bs[0];
    const double C60 = bs[1];
    const double C59 = be * xB;
    const double C58 = ae * xA;
    const double C57 = ae + be;
    const double C80 = C65 * C63;
    const double C79 = C70 + C71;
    const double C78 = C64 * C63;
    const double C77 = C68 + C69;
    const double C76 = std::pow(C65, 2);
    const double C75 = std::pow(C64, 2);
    const double C74 = std::pow(C62, 2);
    const double C73 = C62 * C63;
    const double C72 = C58 + C59;
    const double C84 = C79 / C57;
    const double C83 = C77 / C57;
    const double C82 = C74 + C75;
    const double C81 = C72 / C57;
    const double C89 = C84 - zC;
    const double C88 = C83 - yC;
    const double C87 = C82 + C76;
    const double C86 = C81 - xC;
    const double C85 = C81 - xB;
    const double C93 = be * C89;
    const double C92 = be * C88;
    const double C91 = C87 * C63;
    const double C90 = be * C86;
    const double C94 = C91 / C57;
    const double C95 = -C94;
    const double C96 = std::exp(C95);
    const double C97 = C96 * C66;
    const double C115 = C83 - yB;
    const double C133 = C84 - zB;
    const double C172 = C61 * C80;
    const double C171 = C60 * C93;
    const double C170 = C60 * C80;
    const double C169 = C67 * C93;
    const double C168 = C61 * C78;
    const double C167 = C60 * C92;
    const double C166 = C60 * C78;
    const double C165 = C67 * C92;
    const double C164 = C60 * C73;
    const double C163 = C67 * C90;
    const double C162 = C56 * be;
    const double C161 = C61 * C73;
    const double C160 = C60 * C90;
    const double C159 = be / C57;
    const double C180 = C172 / C57;
    const double C179 = C170 / C57;
    const double C178 = C168 / C57;
    const double C177 = C166 / C57;
    const double C176 = C164 / C57;
    const double C175 = C162 / C57;
    const double C174 = C161 / C57;
    const double C173 = C159 - 1;
    const double C187 = C171 - C180;
    const double C186 = C169 - C179;
    const double C185 = C167 - C178;
    const double C184 = C165 - C177;
    const double C183 = C163 - C176;
    const double C182 = C160 - C174;
    const double C181 = C173 * C55;
    const double C193 = C187 * C97;
    const double C192 = C186 * C97;
    const double C191 = C185 * C97;
    const double C190 = C184 * C97;
    const double C189 = C183 * C97;
    const double C188 = C182 * C97;
    const double gx000100 =
        C181 - (C85 * C188) / C57 - C175 + (C86 * C189) / C57;
    const double gx000010 = (C88 * C189) / C57 - (C115 * C188) / C57;
    const double gx000001 = (C89 * C189) / C57 - (C133 * C188) / C57;
    gx[(Ai + 0) * matrix_size + Bi + 0] += gx000100;
    gx[(Ai + 0) * matrix_size + Bi + 1] += gx000010;
    gx[(Ai + 0) * matrix_size + Bi + 2] += gx000001;
    const double gy000100 = (C86 * C190) / C57 - (C85 * C191) / C57;
    const double gy000010 =
        C181 - (C115 * C191) / C57 - C175 + (C88 * C190) / C57;
    const double gy000001 = (C89 * C190) / C57 - (C133 * C191) / C57;
    gy[(Ai + 0) * matrix_size + Bi + 0] += gy000100;
    gy[(Ai + 0) * matrix_size + Bi + 1] += gy000010;
    gy[(Ai + 0) * matrix_size + Bi + 2] += gy000001;
    const double gz000100 = (C86 * C192) / C57 - (C85 * C193) / C57;
    const double gz000010 = (C88 * C192) / C57 - (C115 * C193) / C57;
    const double gz000001 =
        C181 - (C133 * C193) / C57 - C175 + (C89 * C192) / C57;
    gz[(Ai + 0) * matrix_size + Bi + 0] += gz000100;
    gz[(Ai + 0) * matrix_size + Bi + 1] += gz000010;
    gz[(Ai + 0) * matrix_size + Bi + 2] += gz000001;
}
