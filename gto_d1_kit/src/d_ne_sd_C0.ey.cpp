/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_02_3(double ae,
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
    const double C266 = ae + be;
    const double C273 = 2. * Pi;
    const double C272 = ae * be;
    const double C271 = zA - zB;
    const double C270 = yA - yB;
    const double C269 = xA - xB;
    const double C268 = bs[1];
    const double C276 = std::pow(C271, 2);
    const double C275 = std::pow(C270, 2);
    const double C274 = std::pow(C269, 2);
    const double C277 = C274 + C275;
    const double C278 = C277 + C276;
    const double C279 = C278 * C272;
    const double C280 = C279 / C266;
    const double C281 = -C280;
    const double C282 = std::exp(C281);
    const double C283 = C282 * C273;
    const double C284 = C268 * C283;
    const double C289 = bs[2];
    const double C290 = C289 * C283;
    const double C68 =
        (bs[1] *
         std::exp(-((std::pow(xA - xB, 2) + std::pow(yA - yB, 2) +
                     std::pow(zA - zB, 2)) *
                    ae * be) /
                  C266) *
         2. * Pi) /
        C266;
    const double C69 = (-(C284 * be * C269) / C266) / C266 -
                       (((ae * xA + be * xB) / C266 - xC) * C290) / C266 +
                       (C269 * C284) / C266;
    const double C70 = C290 / C266;
    const double C148 = (-(C284 * be * C270) / C266) / C266 -
                        (((ae * yA + be * yB) / C266 - yC) * C290) / C266 +
                        (C270 * C284) / C266;
    const double C180 = (-(C284 * be * C271) / C266) / C266 -
                        (((ae * zA + be * zB) / C266 - zC) * C290) / C266 +
                        (C271 * C284) / C266;
    const double C84 = be * zB;
    const double C83 = ae * zA;
    const double C82 = be * yB;
    const double C81 = ae * yA;
    const double C80 = bs[3];
    const double C79 = bs[2];
    const double C78 = ae * be;
    const double C77 = zA - zB;
    const double C76 = yA - yB;
    const double C75 = xA - xB;
    const double C74 = bs[1];
    const double C73 = ae + be;
    const double C72 = be * xB;
    const double C71 = ae * xA;
    const double C91 = C83 + C84;
    const double C90 = C81 + C82;
    const double C89 = 2 * C73;
    const double C88 = std::pow(C77, 2);
    const double C87 = std::pow(C76, 2);
    const double C86 = std::pow(C75, 2);
    const double C85 = C71 + C72;
    const double C95 = C91 / C73;
    const double C94 = C90 / C73;
    const double C93 = C86 + C87;
    const double C92 = C85 / C73;
    const double C100 = C95 - zC;
    const double C99 = C94 - yC;
    const double C98 = C92 - xC;
    const double C97 = C93 + C88;
    const double C96 = C92 - xB;
    const double C101 = C97 * C78;
    const double C102 = C101 / C73;
    const double C103 = -C102;
    const double C104 = std::exp(C103);
    const double C105 = Pi * C104;
    const double C108 = C105 * C100;
    const double C107 = C105 * C99;
    const double C106 = C105 * C98;
    const double C111 = 4 * C108;
    const double C110 = 4 * C107;
    const double C109 = 4 * C106;
    const double C117 = C79 * C111;
    const double C116 = C74 * C111;
    const double C115 = C79 * C110;
    const double C114 = C74 * C110;
    const double C113 = C79 * C109;
    const double C112 = C74 * C109;
    const double C149 = C94 - yB;
    const double C181 = C95 - zB;
    const double C321 = C181 * C117;
    const double C320 = C100 * C117;
    const double C319 = C181 * C116;
    const double C318 = C181 * C115;
    const double C317 = C100 * C115;
    const double C316 = C181 * C114;
    const double C315 = C181 * C113;
    const double C314 = C100 * C113;
    const double C313 = C181 * C112;
    const double C312 = C149 * C117;
    const double C311 = C99 * C117;
    const double C310 = C149 * C116;
    const double C309 = C149 * C115;
    const double C308 = C99 * C115;
    const double C307 = C149 * C114;
    const double C306 = C149 * C113;
    const double C305 = C99 * C113;
    const double C304 = C149 * C112;
    const double C303 = C117 / C89;
    const double C302 = C80 * C111;
    const double C301 = C116 / C89;
    const double C300 = C115 / C89;
    const double C299 = C80 * C110;
    const double C298 = C114 / C89;
    const double C297 = C113 / C89;
    const double C296 = C80 * C109;
    const double C295 = C112 / C89;
    const double C335 = C100 * C302;
    const double C334 = C321 + C70;
    const double C333 = C319 + C68;
    const double C332 = C100 * C299;
    const double C331 = C316 - C317;
    const double C330 = C100 * C296;
    const double C329 = C313 - C314;
    const double C328 = C99 * C302;
    const double C327 = C310 - C311;
    const double C326 = C99 * C299;
    const double C325 = C309 + C70;
    const double C324 = C307 + C68;
    const double C323 = C99 * C296;
    const double C322 = C304 - C305;
    const double C343 = C334 - C335;
    const double C342 = C333 - C320;
    const double C341 = C318 - C332;
    const double C340 = C315 - C330;
    const double C339 = C312 - C328;
    const double C338 = C325 - C326;
    const double C337 = C324 - C308;
    const double C336 = C306 - C323;
    const double gx000200 = C96 * (C96 * C112 + C68 - C98 * C113) + C295 + C69 -
                            C98 * (C96 * C113 + C70 - C98 * C296) - C297;
    const double gx000020 = C149 * C322 + C295 - C99 * C336 - C297;
    const double gx000002 = C181 * C329 + C295 - C100 * C340 - C297;
    const double gx000110 = C96 * C322 + C148 - C98 * C336;
    const double gx000101 = C96 * C329 + C180 - C98 * C340;
    const double gx000011 = C149 * C329 - C99 * C340;
    gx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx000110;
    gx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * gx000011;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * gx000200 - 0.5 * gx000020 + gx000002;
    gx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * gx000101;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * gx000200 - std::sqrt(0.75) * gx000020;
    const double gy000200 = C96 * (C96 * C114 - C98 * C115) + C298 -
                            C98 * (C96 * C115 - C98 * C299) - C300;
    const double gy000020 = C149 * C337 + C298 + C148 - C99 * C338 - C300;
    const double gy000002 = C181 * C331 + C298 - C100 * C341 - C300;
    const double gy000110 = C96 * C337 - C98 * C338;
    const double gy000101 = C96 * C331 - C98 * C341;
    const double gy000011 = C149 * C331 + C180 - C99 * C341;
    gy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy000110;
    gy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * gy000011;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * gy000200 - 0.5 * gy000020 + gy000002;
    gy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * gy000101;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * gy000200 - std::sqrt(0.75) * gy000020;
    const double gz000200 = C96 * (C96 * C116 - C98 * C117) + C301 -
                            C98 * (C96 * C117 - C98 * C302) - C303;
    const double gz000020 = C149 * C327 + C301 - C99 * C339 - C303;
    const double gz000002 = C181 * C342 + C301 + C180 - C100 * C343 - C303;
    const double gz000110 = C96 * C327 - C98 * C339;
    const double gz000101 = C96 * C342 - C98 * C343;
    const double gz000011 = C149 * C342 - C99 * C343;
    gz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz000110;
    gz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * gz000011;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * gz000200 - 0.5 * gz000020 + gz000002;
    gz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * gz000101;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * gz000200 - std::sqrt(0.75) * gz000020;
}
