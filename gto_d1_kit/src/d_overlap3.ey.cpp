/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_03(double ae,
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
    const double C411 = ae + be;
    const double C415 = Pi / C411;
    const double C416 = std::sqrt(C415);
    const double C421 = std::pow(C411, 2);
    const double C420 = ae * xAB;
    const double C425 = ae * yAB;
    const double C429 = ae * zAB;
    const double C440 = C416 * C429;
    const double C439 = std::pow(C429, 2);
    const double C438 = C416 * C425;
    const double C437 = std::pow(C425, 2);
    const double C436 = 2. * C421;
    const double C435 = 2. * C411;
    const double C434 = ae * xAB;
    const double C433 = Pi / C411;
    const double C444 = C416 * C439;
    const double C443 = C416 * C437;
    const double C442 = C416 / C435;
    const double C441 = std::sqrt(C433);
    const double C446 = C444 / C421;
    const double C445 = C443 / C421;
    const double C448 = C446 + C442;
    const double C447 = C445 + C442;
    const double C344 = -(C441 * be * xAB) / C411;
    const double C346 = (C441 * C434) / C411;
    const double C347 = (C416 * std::pow(C434, 2)) / std::pow(C411, 2) + C442;
    const double C350 =
        (((C416 * std::pow(C420, 2)) / C421 + C442) * C420) / C411 +
        (2. * C416 * C420) / C436;
    const double C351 = -(C416 * be * yAB) / C411;
    const double C352 = -(C416 * be * zAB) / C411;
    const double C367 = (C447 * C425) / C411 + (2. * C438) / C436;
    const double C368 = C438 / C411;
    const double C382 = (C448 * C429) / C411 + (2. * C440) / C436;
    const double C383 = C440 / C411;
    const double C356 = ae * C441;
    const double C355 = ae + be;
    const double C354 = ae * xAB;
    const double C353 = ae * C344;
    const double C359 = 2. * C355;
    const double C358 = 2. * C356;
    const double C357 = C353 * C354;
    const double C361 = C358 / C359;
    const double C360 = 2 * C357;
    const double C362 = C360 / C355;
    const double C363 = C362 + C361;
    const double C372 = ae * C416;
    const double C371 = ae * yAB;
    const double C370 = ae * C351;
    const double C374 = 2. * C372;
    const double C373 = C370 * C371;
    const double C376 = C374 / C359;
    const double C375 = 2 * C373;
    const double C377 = C375 / C355;
    const double C378 = C377 + C376;
    const double C387 = ae * C416;
    const double C386 = ae * zAB;
    const double C385 = ae * C352;
    const double C389 = 2. * C387;
    const double C388 = C385 * C386;
    const double C391 = C389 / C359;
    const double C390 = 2 * C388;
    const double C392 = C390 / C355;
    const double C393 = C392 + C391;
    const double C461 = ae * C383;
    const double C460 = C393 * C386;
    const double C459 = ae * C368;
    const double C458 = C378 * C371;
    const double C457 = 2 * C385;
    const double C456 = 2 * C370;
    const double C455 = ae * C346;
    const double C454 = 2 * C353;
    const double C453 = C363 * C354;
    const double C467 = 2 * C461;
    const double C466 = C460 / C355;
    const double C465 = 2 * C459;
    const double C464 = C458 / C355;
    const double C463 = 2 * C455;
    const double C462 = C453 / C355;
    const double C470 = C457 + C467;
    const double C469 = C456 + C465;
    const double C468 = C454 + C463;
    const double C473 = C470 / C359;
    const double C472 = C469 / C359;
    const double C471 = C468 / C359;
    const double C476 = C466 + C473;
    const double C475 = C464 + C472;
    const double C474 = C462 + C471;
    const double gx000300 =
        ((C474 * C354) / C355 + (2 * C363 + 2 * ae * C347) / C359) *
        std::pow(C416, 2);
    const double gx000030 = 2 * C353 * C367 * C416;
    const double gx000003 = 2 * C353 * C416 * C382;
    const double gx000210 = C474 * C368 * C416;
    const double gx000201 = C474 * C416 * C383;
    const double gx000021 = 2 * C353 * C447 * C383;
    const double gx000120 = C363 * C447 * C416;
    const double gx000102 = C363 * C416 * C448;
    const double gx000012 = 2 * C353 * C368 * C448;
    const double gx000111 = C363 * C368 * C383;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx000210 - std::sqrt(5.0 / 8.0) * gx000030);
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gx000111;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gx000012 + std::sqrt(3.0 / 8.0) * gx000210 +
               std::sqrt(3.0 / 8.0) * gx000030);
    gx[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (gx000003 - 1.5 * gx000201 - 1.5 * gx000021);
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gx000102 - (std::sqrt(3.0 / 8.0) * gx000120 +
                                           std::sqrt(3.0 / 8.0) * gx000300));
    gx[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gx000201 - std::sqrt(7.5) * gx000021);
    gx[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx000300 + std::sqrt(45.0 / 8.0) * gx000120);
    const double gy000300 = C350 * C456 * C416;
    const double gy000030 =
        C441 * ((C475 * C371) / C355 + (2 * C378 + 2 * ae * C447) / C359) *
        C416;
    const double gy000003 = C441 * C456 * C382;
    const double gy000210 = C347 * C378 * C416;
    const double gy000201 = C347 * C456 * C383;
    const double gy000021 = C441 * C475 * C383;
    const double gy000120 = C346 * C475 * C416;
    const double gy000102 = C346 * C456 * C448;
    const double gy000012 = C441 * C378 * C448;
    const double gy000111 = C346 * C378 * C383;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy000210 - std::sqrt(5.0 / 8.0) * gy000030);
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gy000111;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gy000012 + std::sqrt(3.0 / 8.0) * gy000210 +
               std::sqrt(3.0 / 8.0) * gy000030);
    gy[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (gy000003 - 1.5 * gy000201 - 1.5 * gy000021);
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gy000102 - (std::sqrt(3.0 / 8.0) * gy000120 +
                                           std::sqrt(3.0 / 8.0) * gy000300));
    gy[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gy000201 - std::sqrt(7.5) * gy000021);
    gy[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy000300 + std::sqrt(45.0 / 8.0) * gy000120);
    const double gz000300 = C350 * C416 * C457;
    const double gz000030 = C441 * C367 * C457;
    const double gz000003 =
        C441 * C416 *
        ((C476 * C386) / C355 + (2 * C393 + 2 * ae * C448) / C359);
    const double gz000210 = C347 * C368 * C457;
    const double gz000201 = C347 * C416 * C393;
    const double gz000021 = C441 * C447 * C393;
    const double gz000120 = C346 * C447 * C457;
    const double gz000102 = C346 * C416 * C476;
    const double gz000012 = C441 * C368 * C476;
    const double gz000111 = C346 * C368 * C393;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz000210 - std::sqrt(5.0 / 8.0) * gz000030);
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gz000111;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gz000012 + std::sqrt(3.0 / 8.0) * gz000210 +
               std::sqrt(3.0 / 8.0) * gz000030);
    gz[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (gz000003 - 1.5 * gz000201 - 1.5 * gz000021);
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gz000102 - (std::sqrt(3.0 / 8.0) * gz000120 +
                                           std::sqrt(3.0 / 8.0) * gz000300));
    gz[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gz000201 - std::sqrt(7.5) * gz000021);
    gz[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz000300 + std::sqrt(45.0 / 8.0) * gz000120);
}

// Automatically generated, do not edit
